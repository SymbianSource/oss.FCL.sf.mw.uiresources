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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0000ab44 };

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
0x6f0c,	// (0x00011a50) Screen

0x6f20,	// (0x00011a64) application_window_ParamLimits

0x6f20,	// (0x00011a64) application_window

0x6f3a,	// (0x00011a7e) screen_g1

0x49f0,	// (0x0000f534) area_bottom_pane_ParamLimits

0x49f0,	// (0x0000f534) area_bottom_pane

0x4ab0,	// (0x0000f5f4) area_top_pane_ParamLimits

0x4ab0,	// (0x0000f5f4) area_top_pane

0x4b4e,	// (0x0000f692) main_pane_ParamLimits

0x4b4e,	// (0x0000f692) main_pane

0x6f44,	// (0x00011a88) misc_graphics

0x8ffe,	// (0x00013b42) battery_pane_ParamLimits

0x8ffe,	// (0x00013b42) battery_pane

0x9ddc,	// (0x00014920) bg_status_flat_pane_g8

0x9de4,	// (0x00014928) bg_status_flat_pane_g9

0x90c0,	// (0x00013c04) context_pane_ParamLimits

0x90c0,	// (0x00013c04) context_pane

0x91d6,	// (0x00013d1a) navi_pane_ParamLimits

0x91d6,	// (0x00013d1a) navi_pane

0x925a,	// (0x00013d9e) signal_pane_ParamLimits

0x925a,	// (0x00013d9e) signal_pane

0x0008,

0xf86f,	// (0x0001a3b3) bg_status_flat_pane_g

0x92c7,	// (0x00013e0b) status_pane_g1_ParamLimits

0x92c7,	// (0x00013e0b) status_pane_g1

0x92d3,	// (0x00013e17) status_pane_g2_ParamLimits

0x92d3,	// (0x00013e17) status_pane_g2

0x92df,	// (0x00013e23) status_pane_g3_ParamLimits

0x92df,	// (0x00013e23) status_pane_g3

0x0004,

0xf79b,	// (0x0001a2df) status_pane_g_ParamLimits

0xf79b,	// (0x0001a2df) status_pane_g

0x9313,	// (0x00013e57) title_pane_ParamLimits

0x9313,	// (0x00013e57) title_pane

0x9350,	// (0x00013e94) uni_indicator_pane_ParamLimits

0x9350,	// (0x00013e94) uni_indicator_pane

0x8f16,	// (0x00013a5a) bg_list_pane_ParamLimits

0x8f16,	// (0x00013a5a) bg_list_pane

0x8f36,	// (0x00013a7a) find_pane

0x8f3e,	// (0x00013a82) listscroll_app_pane_ParamLimits

0x8f3e,	// (0x00013a82) listscroll_app_pane

0x8f4a,	// (0x00013a8e) listscroll_form_pane

0x540a,	// (0x0000ff4e) listscroll_gen_pane_ParamLimits

0x540a,	// (0x0000ff4e) listscroll_gen_pane

0x541e,	// (0x0000ff62) listscroll_set_pane

0x8125,	// (0x00012c69) main_idle_act_pane

0x8c22,	// (0x00013766) main_idle_trad_pane

0x8c22,	// (0x00013766) main_list_empty_pane

0x8f64,	// (0x00013aa8) main_midp_pane

0x8f70,	// (0x00013ab4) main_pane_g1_ParamLimits

0x8f70,	// (0x00013ab4) main_pane_g1

0x5434,	// (0x0000ff78) popup_ai_message_window_ParamLimits

0x5434,	// (0x0000ff78) popup_ai_message_window

0x54d8,	// (0x0001001c) popup_fep_china_uni_window_ParamLimits

0x54d8,	// (0x0001001c) popup_fep_china_uni_window

0x5532,	// (0x00010076) popup_fep_japan_candidate_window_ParamLimits

0x5532,	// (0x00010076) popup_fep_japan_candidate_window

0x5550,	// (0x00010094) popup_fep_japan_predictive_window_ParamLimits

0x5550,	// (0x00010094) popup_fep_japan_predictive_window

0x5580,	// (0x000100c4) popup_find_window

0x558d,	// (0x000100d1) popup_grid_graphic_window_ParamLimits

0x558d,	// (0x000100d1) popup_grid_graphic_window

0x55b5,	// (0x000100f9) popup_large_graphic_colour_window

0x55db,	// (0x0001011f) popup_menu_window_ParamLimits

0x55db,	// (0x0001011f) popup_menu_window

0x5795,	// (0x000102d9) popup_note_image_window

0x5781,	// (0x000102c5) popup_note_wait_window_ParamLimits

0x5781,	// (0x000102c5) popup_note_wait_window

0x5781,	// (0x000102c5) popup_note_window_ParamLimits

0x5781,	// (0x000102c5) popup_note_window

0x57eb,	// (0x0001032f) popup_query_code_window_ParamLimits

0x57eb,	// (0x0001032f) popup_query_code_window

0x57ff,	// (0x00010343) popup_query_data_code_window_ParamLimits

0x57ff,	// (0x00010343) popup_query_data_code_window

0x581a,	// (0x0001035e) popup_query_data_window_ParamLimits

0x581a,	// (0x0001035e) popup_query_data_window

0x5834,	// (0x00010378) popup_query_sat_info_window_ParamLimits

0x5834,	// (0x00010378) popup_query_sat_info_window

0x586d,	// (0x000103b1) popup_snote_single_graphic_window_ParamLimits

0x586d,	// (0x000103b1) popup_snote_single_graphic_window

0x586d,	// (0x000103b1) popup_snote_single_text_window_ParamLimits

0x586d,	// (0x000103b1) popup_snote_single_text_window

0x5882,	// (0x000103c6) popup_sub_window_general

0x59b0,	// (0x000104f4) popup_window_general_ParamLimits

0x59b0,	// (0x000104f4) popup_window_general

0x8f86,	// (0x00013aca) power_save_pane

0x52a0,	// (0x0000fde4) control_pane_g1_ParamLimits

0x52a0,	// (0x0000fde4) control_pane_g1

0x52c7,	// (0x0000fe0b) control_pane_g2_ParamLimits

0x52c7,	// (0x0000fe0b) control_pane_g2

0x8ed9,	// (0x00013a1d) control_pane_g3_ParamLimits

0x8ed9,	// (0x00013a1d) control_pane_g3

0x0007,

0xf783,	// (0x0001a2c7) control_pane_g_ParamLimits

0xf783,	// (0x0001a2c7) control_pane_g

0x530f,	// (0x0000fe53) control_pane_t1_ParamLimits

0x530f,	// (0x0000fe53) control_pane_t1

0x535b,	// (0x0000fe9f) control_pane_t2_ParamLimits

0x535b,	// (0x0000fe9f) control_pane_t2

0x0002,

0xf794,	// (0x0001a2d8) control_pane_t_ParamLimits

0xf794,	// (0x0001a2d8) control_pane_t

0x8dfe,	// (0x00013942) navi_navi_volume_pane_cp1

0x8e06,	// (0x0001394a) status_small_icon_pane

0x8e0e,	// (0x00013952) status_small_pane_g1_ParamLimits

0x8e0e,	// (0x00013952) status_small_pane_g1

0x8e42,	// (0x00013986) status_small_pane_g2_ParamLimits

0x8e42,	// (0x00013986) status_small_pane_g2

0x8e4e,	// (0x00013992) status_small_pane_g3_ParamLimits

0x8e4e,	// (0x00013992) status_small_pane_g3

0x8e5a,	// (0x0001399e) status_small_pane_g4_ParamLimits

0x8e5a,	// (0x0001399e) status_small_pane_g4

0x8e66,	// (0x000139aa) status_small_pane_g5_ParamLimits

0x8e66,	// (0x000139aa) status_small_pane_g5

0x8e74,	// (0x000139b8) status_small_pane_g6_ParamLimits

0x8e74,	// (0x000139b8) status_small_pane_g6

0x0007,

0xf772,	// (0x0001a2b6) status_small_pane_g_ParamLimits

0xf772,	// (0x0001a2b6) status_small_pane_g

0x8ea3,	// (0x000139e7) status_small_pane_t1

0x8ec5,	// (0x00013a09) status_small_wait_pane_ParamLimits

0x8ec5,	// (0x00013a09) status_small_wait_pane

0x8615,	// (0x00013159) aid_levels_signal_ParamLimits

0x8615,	// (0x00013159) aid_levels_signal

0x8627,	// (0x0001316b) signal_pane_g1_ParamLimits

0x8627,	// (0x0001316b) signal_pane_g1

0x863c,	// (0x00013180) signal_pane_g2_ParamLimits

0x863c,	// (0x00013180) signal_pane_g2

0x0003,

0xf703,	// (0x0001a247) signal_pane_g_ParamLimits

0xf703,	// (0x0001a247) signal_pane_g

0x8676,	// (0x000131ba) context_pane_g1

0x6f4e,	// (0x00011a92) title_pane_g1

0x6f84,	// (0x00011ac8) title_pane_t1

0x6fec,	// (0x00011b30) title_pane_t2

0x7012,	// (0x00011b56) title_pane_t3

0x0002,

0xf557,	// (0x0001a09b) title_pane_t

0x9368,	// (0x00013eac) aid_levels_battery_ParamLimits

0x9368,	// (0x00013eac) aid_levels_battery

0x937c,	// (0x00013ec0) battery_pane_g1_ParamLimits

0x937c,	// (0x00013ec0) battery_pane_g1

0x9392,	// (0x00013ed6) battery_pane_g2_ParamLimits

0x9392,	// (0x00013ed6) battery_pane_g2

0x0001,

0xf7a6,	// (0x0001a2ea) battery_pane_g_ParamLimits

0xf7a6,	// (0x0001a2ea) battery_pane_g

0xa710,	// (0x00015254) uni_indicator_pane_g1

0xa726,	// (0x0001526a) uni_indicator_pane_g2

0xa73c,	// (0x00015280) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001a45b) uni_indicator_pane_g

0x8aa0,	// (0x000135e4) navi_icon_pane_ParamLimits

0x8aa0,	// (0x000135e4) navi_icon_pane

0x89de,	// (0x00013522) navi_midp_pane

0x8abc,	// (0x00013600) navi_navi_pane

0x8ac6,	// (0x0001360a) navi_text_pane_ParamLimits

0x8ac6,	// (0x0001360a) navi_text_pane

0x6f3a,	// (0x00011a7e) status_small_wait_pane_g1

0x744f,	// (0x00011f93) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x0001a456) status_small_wait_pane_g

0xa437,	// (0x00014f7b) navi_navi_icon_text_pane

0xa43f,	// (0x00014f83) navi_navi_pane_g1_ParamLimits

0xa43f,	// (0x00014f83) navi_navi_pane_g1

0xa451,	// (0x00014f95) navi_navi_pane_g2_ParamLimits

0xa451,	// (0x00014f95) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x0001a424) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x0001a424) navi_navi_pane_g

0xa463,	// (0x00014fa7) navi_navi_tabs_pane

0xa46c,	// (0x00014fb0) navi_navi_text_pane

0xa437,	// (0x00014f7b) navi_navi_volume_pane

0xa413,	// (0x00014f57) navi_text_pane_t1

0xa407,	// (0x00014f4b) navi_icon_pane_g1

0xa35a,	// (0x00014e9e) navi_navi_text_pane_t1

0x5cbe,	// (0x00010802) navi_navi_volume_pane_g1

0x5cc6,	// (0x0001080a) volume_small_pane

0xa2c0,	// (0x00014e04) navi_navi_icon_text_pane_g1

0xa2c8,	// (0x00014e0c) navi_navi_icon_text_pane_t1

0x8abc,	// (0x00013600) navi_tabs_2_long_pane

0x8abc,	// (0x00013600) navi_tabs_2_pane

0x8abc,	// (0x00013600) navi_tabs_3_long_pane

0x8abc,	// (0x00013600) navi_tabs_3_pane

0x8abc,	// (0x00013600) navi_tabs_4_pane

0x5c9e,	// (0x000107e2) tabs_2_active_pane_ParamLimits

0x5c9e,	// (0x000107e2) tabs_2_active_pane

0x5cae,	// (0x000107f2) tabs_2_passive_pane_ParamLimits

0x5cae,	// (0x000107f2) tabs_2_passive_pane

0x5c6c,	// (0x000107b0) tabs_3_active_pane_ParamLimits

0x5c6c,	// (0x000107b0) tabs_3_active_pane

0x5c7c,	// (0x000107c0) tabs_3_passive_pane_ParamLimits

0x5c7c,	// (0x000107c0) tabs_3_passive_pane

0x5c8d,	// (0x000107d1) tabs_3_passive_pane_cp_ParamLimits

0x5c8d,	// (0x000107d1) tabs_3_passive_pane_cp

0x5c28,	// (0x0001076c) tabs_4_active_pane_ParamLimits

0x5c28,	// (0x0001076c) tabs_4_active_pane

0x5c39,	// (0x0001077d) tabs_4_passive_pane_ParamLimits

0x5c39,	// (0x0001077d) tabs_4_passive_pane

0x5c4a,	// (0x0001078e) tabs_4_passive_pane_cp_ParamLimits

0x5c4a,	// (0x0001078e) tabs_4_passive_pane_cp

0x5c5b,	// (0x0001079f) tabs_4_passive_pane_cp2_ParamLimits

0x5c5b,	// (0x0001079f) tabs_4_passive_pane_cp2

0x5c04,	// (0x00010748) tabs_2_long_active_pane_ParamLimits

0x5c04,	// (0x00010748) tabs_2_long_active_pane

0x5c16,	// (0x0001075a) tabs_2_long_passive_pane_ParamLimits

0x5c16,	// (0x0001075a) tabs_2_long_passive_pane

0x5bcb,	// (0x0001070f) tabs_3_long_active_pane_ParamLimits

0x5bcb,	// (0x0001070f) tabs_3_long_active_pane

0x5bde,	// (0x00010722) tabs_3_long_passive_pane_ParamLimits

0x5bde,	// (0x00010722) tabs_3_long_passive_pane

0x5bf1,	// (0x00010735) tabs_3_long_passive_pane_cp_ParamLimits

0x5bf1,	// (0x00010735) tabs_3_long_passive_pane_cp

0x5b71,	// (0x000106b5) volume_small_pane_g1

0x5b7a,	// (0x000106be) volume_small_pane_g2

0x5b83,	// (0x000106c7) volume_small_pane_g3

0x5b8c,	// (0x000106d0) volume_small_pane_g4

0x5b95,	// (0x000106d9) volume_small_pane_g5

0x5b9e,	// (0x000106e2) volume_small_pane_g6

0x5ba7,	// (0x000106eb) volume_small_pane_g7

0x5bb0,	// (0x000106f4) volume_small_pane_g8

0x5bb9,	// (0x000106fd) volume_small_pane_g9

0x5bc2,	// (0x00010706) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x0001a3f0) volume_small_pane_g

0x7024,	// (0x00011b68) bg_active_tab_pane_cp2_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp2

0x7032,	// (0x00011b76) tabs_3_active_pane_g1

0x703a,	// (0x00011b7e) tabs_3_active_pane_t1

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp2_ParamLimits

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp2

0x7032,	// (0x00011b76) tabs_3_passive_pane_g1

0x703a,	// (0x00011b7e) tabs_3_passive_pane_t1

0x7024,	// (0x00011b68) bg_active_tab_pane_cp3_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp3

0x704c,	// (0x00011b90) tabs_4_active_pane_g1

0x7054,	// (0x00011b98) tabs_4_active_pane_t1

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp3_ParamLimits

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp3

0x704c,	// (0x00011b90) tabs_4_1_passive_pane_g1

0x7054,	// (0x00011b98) tabs_4_1_passive_pane_t1

0x8f64,	// (0x00013aa8) list_highlight_pane_cp2

0xa992,	// (0x000154d6) list_set_pane_ParamLimits

0xa992,	// (0x000154d6) list_set_pane

0xaa34,	// (0x00015578) main_pane_set_t1_ParamLimits

0xaa34,	// (0x00015578) main_pane_set_t1

0xaa54,	// (0x00015598) main_pane_set_t2_ParamLimits

0xaa54,	// (0x00015598) main_pane_set_t2

0xaa68,	// (0x000155ac) main_pane_set_t3_ParamLimits

0xaa68,	// (0x000155ac) main_pane_set_t3

0xaa7a,	// (0x000155be) main_pane_set_t4_ParamLimits

0xaa7a,	// (0x000155be) main_pane_set_t4

0x0003,

0xf97c,	// (0x0001a4c0) main_pane_set_t_ParamLimits

0xf97c,	// (0x0001a4c0) main_pane_set_t

0xaa8c,	// (0x000155d0) setting_code_pane

0xaa96,	// (0x000155da) setting_slider_graphic_pane

0xaa96,	// (0x000155da) setting_slider_pane

0xaa96,	// (0x000155da) setting_text_pane

0xaa96,	// (0x000155da) setting_volume_pane

0x4d8f,	// (0x0000f8d3) volume_set_pane

0x7024,	// (0x00011b68) bg_set_opt_pane_cp

0x4d97,	// (0x0000f8db) setting_slider_pane_t1

0x4db0,	// (0x0000f8f4) setting_slider_pane_t2

0x4dca,	// (0x0000f90e) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001a0a2) setting_slider_pane_t

0x4de2,	// (0x0000f926) slider_set_pane

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp2

0x7066,	// (0x00011baa) setting_slider_graphic_pane_g1

0x4df8,	// (0x0000f93c) setting_slider_graphic_pane_t1

0x4e08,	// (0x0000f94c) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001a0a9) setting_slider_graphic_pane_t

0x4e18,	// (0x0000f95c) slider_set_pane_cp

0x6f44,	// (0x00011a88) input_focus_pane_cp1

0xa951,	// (0x00015495) list_set_text_pane

0x6f3a,	// (0x00011a7e) setting_text_pane_g1

0x6f44,	// (0x00011a88) input_focus_pane_cp2

0x6f3a,	// (0x00011a7e) setting_code_pane_g1

0x706f,	// (0x00011bb3) setting_code_pane_t1

0x707d,	// (0x00011bc1) set_text_pane_t1_ParamLimits

0x707d,	// (0x00011bc1) set_text_pane_t1

0x7f10,	// (0x00012a54) set_opt_bg_pane_g1

0x7f18,	// (0x00012a5c) set_opt_bg_pane_g2

0xa931,	// (0x00015475) set_opt_bg_pane_g3

0x7f28,	// (0x00012a6c) set_opt_bg_pane_g4

0x7f30,	// (0x00012a74) set_opt_bg_pane_g5

0x7f38,	// (0x00012a7c) set_opt_bg_pane_g6

0xa939,	// (0x0001547d) set_opt_bg_pane_g7

0xa941,	// (0x00015485) set_opt_bg_pane_g8

0xa949,	// (0x0001548d) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001a4ad) set_opt_bg_pane_g

0xa924,	// (0x00015468) slider_set_pane_g1

0x5d33,	// (0x00010877) slider_set_pane_g2

0x0006,

0xf95a,	// (0x0001a49e) slider_set_pane_g

0x5ccf,	// (0x00010813) volume_set_pane_g1

0x5cd7,	// (0x0001081b) volume_set_pane_g2

0x5cdf,	// (0x00010823) volume_set_pane_g3

0x5ce7,	// (0x0001082b) volume_set_pane_g4

0x5cef,	// (0x00010833) volume_set_pane_g5

0x5cf7,	// (0x0001083b) volume_set_pane_g6

0x5cff,	// (0x00010843) volume_set_pane_g7

0x5d07,	// (0x0001084b) volume_set_pane_g8

0x5d0f,	// (0x00010853) volume_set_pane_g9

0x5d17,	// (0x0001085b) volume_set_pane_g10

0x0009,

0xf932,	// (0x0001a476) volume_set_pane_g

0x7097,	// (0x00011bdb) indicator_pane_ParamLimits

0x7097,	// (0x00011bdb) indicator_pane

0x70a3,	// (0x00011be7) main_idle_pane_g2_ParamLimits

0x70a3,	// (0x00011be7) main_idle_pane_g2

0x70cb,	// (0x00011c0f) main_pane_idle_g1_ParamLimits

0x70cb,	// (0x00011c0f) main_pane_idle_g1

0x70d8,	// (0x00011c1c) popup_clock_digital_analogue_window_ParamLimits

0x70d8,	// (0x00011c1c) popup_clock_digital_analogue_window

0x70ef,	// (0x00011c33) soft_indicator_pane_ParamLimits

0x70ef,	// (0x00011c33) soft_indicator_pane

0x70fb,	// (0x00011c3f) wallpaper_pane_ParamLimits

0x70fb,	// (0x00011c3f) wallpaper_pane

0x6f3a,	// (0x00011a7e) wallpaper_pane_g1

0x710f,	// (0x00011c53) indicator_pane_g1_ParamLimits

0x710f,	// (0x00011c53) indicator_pane_g1

0xae32,	// (0x00015976) navi_navi_icon_text_pane_srt_g1

0x712a,	// (0x00011c6e) soft_indicator_pane_t1

0x7144,	// (0x00011c88) aid_ps_area_pane

0x7155,	// (0x00011c99) aid_ps_clock_pane

0x7163,	// (0x00011ca7) aid_ps_indicator_pane

0x716f,	// (0x00011cb3) indicator_ps_pane_ParamLimits

0x716f,	// (0x00011cb3) indicator_ps_pane

0x717e,	// (0x00011cc2) power_save_pane_g1_ParamLimits

0x717e,	// (0x00011cc2) power_save_pane_g1

0x718a,	// (0x00011cce) power_save_pane_g2_ParamLimits

0x718a,	// (0x00011cce) power_save_pane_g2

0x49a4,	// (0x0000f4e8) aid_navinavi_width_pane

0x7144,	// (0x00011c88) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001a0ae) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001a0ae) power_save_pane_g

0x7198,	// (0x00011cdc) power_save_pane_t1_ParamLimits

0x7198,	// (0x00011cdc) power_save_pane_t1

0x7155,	// (0x00011c99) aid_ps_clock_pane_ParamLimits

0x7163,	// (0x00011ca7) aid_ps_indicator_pane_ParamLimits

0x71aa,	// (0x00011cee) power_save_pane_t4_ParamLimits

0x71aa,	// (0x00011cee) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001a0b3) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001a0b3) power_save_pane_t

0x71d4,	// (0x00011d18) power_save_t3_ParamLimits

0x71d4,	// (0x00011d18) power_save_t3

0x71bf,	// (0x00011d03) power_save_t2_ParamLimits

0x71bf,	// (0x00011d03) power_save_t2

0x71e9,	// (0x00011d2d) indicator_ps_pane_g1

0x71f2,	// (0x00011d36) ai_gene_pane_ParamLimits

0x71f2,	// (0x00011d36) ai_gene_pane

0x71fe,	// (0x00011d42) ai_links_pane_ParamLimits

0x71fe,	// (0x00011d42) ai_links_pane

0x720a,	// (0x00011d4e) indicator_pane_cp1_ParamLimits

0x720a,	// (0x00011d4e) indicator_pane_cp1

0x7216,	// (0x00011d5a) main_pane_idle_g1_cp_ParamLimits

0x7216,	// (0x00011d5a) main_pane_idle_g1_cp

0x7222,	// (0x00011d66) popup_ai_links_title_window

0x722b,	// (0x00011d6f) soft_indicator_pane_cp1_ParamLimits

0x722b,	// (0x00011d6f) soft_indicator_pane_cp1

0xa6fe,	// (0x00015242) ai_links_pane_g1

0xa707,	// (0x0001524b) grid_ai_links_pane

0xa6e1,	// (0x00015225) ai_gene_pane_1

0xa6ec,	// (0x00015230) ai_gene_pane_2

0xa6f5,	// (0x00015239) list_highlight_pane_cp4

0xa6c5,	// (0x00015209) cell_ai_link_pane_ParamLimits

0xa6c5,	// (0x00015209) cell_ai_link_pane

0xa6bd,	// (0x00015201) cell_ai_link_pane_g1

0x744f,	// (0x00011f93) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x0001a451) cell_ai_link_pane_g

0x6f44,	// (0x00011a88) grid_highlight_cp2

0x6f44,	// (0x00011a88) bg_popup_sub_pane_cp1

0x7245,	// (0x00011d89) popup_ai_links_title_window_t1

0xa60d,	// (0x00015151) ai_gene_pane_1_g1_ParamLimits

0xa60d,	// (0x00015151) ai_gene_pane_1_g1

0xa619,	// (0x0001515d) ai_gene_pane_1_g2_ParamLimits

0xa619,	// (0x0001515d) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x0001a447) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x0001a447) ai_gene_pane_1_g

0xa626,	// (0x0001516a) ai_gene_pane_1_t1_ParamLimits

0xa626,	// (0x0001516a) ai_gene_pane_1_t1

0xa65a,	// (0x0001519e) grid_ai_soft_ind_pane

0xa5f8,	// (0x0001513c) ai_gene_pane_2_t1_ParamLimits

0xa5f8,	// (0x0001513c) ai_gene_pane_2_t1

0x7254,	// (0x00011d98) main_pane_empty_t1_ParamLimits

0x7254,	// (0x00011d98) main_pane_empty_t1

0x726c,	// (0x00011db0) main_pane_empty_t2_ParamLimits

0x726c,	// (0x00011db0) main_pane_empty_t2

0x7281,	// (0x00011dc5) main_pane_empty_t3_ParamLimits

0x7281,	// (0x00011dc5) main_pane_empty_t3

0x7293,	// (0x00011dd7) main_pane_empty_t4_ParamLimits

0x7293,	// (0x00011dd7) main_pane_empty_t4

0x72a5,	// (0x00011de9) main_pane_empty_t5_ParamLimits

0x72a5,	// (0x00011de9) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001a0b8) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001a0b8) main_pane_empty_t

0x7fef,	// (0x00012b33) bg_popup_window_pane_ParamLimits

0x7fef,	// (0x00012b33) bg_popup_window_pane

0xa368,	// (0x00014eac) find_popup_pane_cp2_ParamLimits

0xa368,	// (0x00014eac) find_popup_pane_cp2

0xa374,	// (0x00014eb8) heading_pane_ParamLimits

0xa374,	// (0x00014eb8) heading_pane

0x6f44,	// (0x00011a88) bg_popup_sub_pane

0xa2e2,	// (0x00014e26) bg_popup_window_pane_g1_ParamLimits

0xa2e2,	// (0x00014e26) bg_popup_window_pane_g1

0xa2ee,	// (0x00014e32) bg_popup_window_pane_g2_ParamLimits

0xa2ee,	// (0x00014e32) bg_popup_window_pane_g2

0xa2fa,	// (0x00014e3e) bg_popup_window_pane_g3_ParamLimits

0xa2fa,	// (0x00014e3e) bg_popup_window_pane_g3

0xa306,	// (0x00014e4a) bg_popup_window_pane_g4_ParamLimits

0xa306,	// (0x00014e4a) bg_popup_window_pane_g4

0xa312,	// (0x00014e56) bg_popup_window_pane_g5_ParamLimits

0xa312,	// (0x00014e56) bg_popup_window_pane_g5

0xa31e,	// (0x00014e62) bg_popup_window_pane_g6_ParamLimits

0xa31e,	// (0x00014e62) bg_popup_window_pane_g6

0xa32a,	// (0x00014e6e) bg_popup_window_pane_g7_ParamLimits

0xa32a,	// (0x00014e6e) bg_popup_window_pane_g7

0xa336,	// (0x00014e7a) bg_popup_window_pane_g8_ParamLimits

0xa336,	// (0x00014e7a) bg_popup_window_pane_g8

0xa342,	// (0x00014e86) bg_popup_window_pane_g9_ParamLimits

0xa342,	// (0x00014e86) bg_popup_window_pane_g9

0xa34e,	// (0x00014e92) bg_popup_window_pane_g10_ParamLimits

0xa34e,	// (0x00014e92) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x0001a40f) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x0001a40f) bg_popup_window_pane_g

0xa277,	// (0x00014dbb) bg_popup_heading_pane_ParamLimits

0xa277,	// (0x00014dbb) bg_popup_heading_pane

0x5dbb,	// (0x000108ff) tabs_4_passive_pane_cp_srt_ParamLimits

0x5dbb,	// (0x000108ff) tabs_4_passive_pane_cp_srt

0x5dcd,	// (0x00010911) tabs_4_passive_pane_srt_ParamLimits

0xa28b,	// (0x00014dcf) heading_pane_g2

0x5dcd,	// (0x00010911) tabs_4_passive_pane_srt

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp3_srt

0xa293,	// (0x00014dd7) heading_pane_t1_ParamLimits

0xa293,	// (0x00014dd7) heading_pane_t1

0xa2aa,	// (0x00014dee) heading_pane_t2_ParamLimits

0xa2aa,	// (0x00014dee) heading_pane_t2

0x0001,

0xf8c6,	// (0x0001a40a) heading_pane_t_ParamLimits

0xf8c6,	// (0x0001a40a) heading_pane_t

0x9da4,	// (0x000148e8) bg_popup_heading_pane_g1

0x9e53,	// (0x00014997) bg_popup_heading_pane_g2

0x9e5d,	// (0x000149a1) bg_popup_heading_pane_g3

0x9e67,	// (0x000149ab) bg_popup_heading_pane_g4

0x9e71,	// (0x000149b5) bg_popup_heading_pane_g5

0x9e7b,	// (0x000149bf) bg_popup_heading_pane_g6

0x9e83,	// (0x000149c7) bg_popup_heading_pane_g7

0x9e8b,	// (0x000149cf) bg_popup_heading_pane_g8

0x9e95,	// (0x000149d9) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x0001a3c6) bg_popup_heading_pane_g

0x9480,	// (0x00013fc4) bg_popup_sub_pane_g1

0x9490,	// (0x00013fd4) bg_popup_sub_pane_g2

0x9488,	// (0x00013fcc) bg_popup_sub_pane_g3

0x94a0,	// (0x00013fe4) bg_popup_sub_pane_g4

0x9498,	// (0x00013fdc) bg_popup_sub_pane_g5

0x94a8,	// (0x00013fec) bg_popup_sub_pane_g6

0x94b0,	// (0x00013ff4) bg_popup_sub_pane_g7

0x94c0,	// (0x00014004) bg_popup_sub_pane_g8

0x94b8,	// (0x00013ffc) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x0001a3a0) bg_popup_sub_pane_g

0x72b9,	// (0x00011dfd) bg_popup_window_pane_cp5_ParamLimits

0x72b9,	// (0x00011dfd) bg_popup_window_pane_cp5

0x72d5,	// (0x00011e19) popup_note_window_g1_ParamLimits

0x72d5,	// (0x00011e19) popup_note_window_g1

0x72e1,	// (0x00011e25) popup_note_window_t1_ParamLimits

0x72e1,	// (0x00011e25) popup_note_window_t1

0x72f3,	// (0x00011e37) popup_note_window_t2_ParamLimits

0x72f3,	// (0x00011e37) popup_note_window_t2

0x7305,	// (0x00011e49) popup_note_window_t3_ParamLimits

0x7305,	// (0x00011e49) popup_note_window_t3

0x7317,	// (0x00011e5b) popup_note_window_t4_ParamLimits

0x7317,	// (0x00011e5b) popup_note_window_t4

0x733f,	// (0x00011e83) popup_note_window_t5_ParamLimits

0x733f,	// (0x00011e83) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001a0c3) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001a0c3) popup_note_window_t

0x7363,	// (0x00011ea7) bg_popup_window_pane_cp6_ParamLimits

0x7363,	// (0x00011ea7) bg_popup_window_pane_cp6

0x9d18,	// (0x0001485c) popup_note_image_window_g1_ParamLimits

0x9d18,	// (0x0001485c) popup_note_image_window_g1

0x9d24,	// (0x00014868) popup_note_image_window_g2_ParamLimits

0x9d24,	// (0x00014868) popup_note_image_window_g2

0x0001,

0xf850,	// (0x0001a394) popup_note_image_window_g_ParamLimits

0xf850,	// (0x0001a394) popup_note_image_window_g

0x9d3d,	// (0x00014881) popup_note_image_window_t1_ParamLimits

0x9d3d,	// (0x00014881) popup_note_image_window_t1

0x9d56,	// (0x0001489a) popup_note_image_window_t2_ParamLimits

0x9d56,	// (0x0001489a) popup_note_image_window_t2

0x9d6f,	// (0x000148b3) popup_note_image_window_t3_ParamLimits

0x9d6f,	// (0x000148b3) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001a399) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001a399) popup_note_image_window_t

0x9bd9,	// (0x0001471d) bg_popup_window_pane_cp7_ParamLimits

0x9bd9,	// (0x0001471d) bg_popup_window_pane_cp7

0x9c09,	// (0x0001474d) popup_note_wait_window_g1_ParamLimits

0x9c09,	// (0x0001474d) popup_note_wait_window_g1

0x9c15,	// (0x00014759) popup_note_wait_window_g2_ParamLimits

0x9c15,	// (0x00014759) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x0001a382) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x0001a382) popup_note_wait_window_g

0x9c2d,	// (0x00014771) popup_note_wait_window_t1_ParamLimits

0x9c2d,	// (0x00014771) popup_note_wait_window_t1

0x9c54,	// (0x00014798) popup_note_wait_window_t2_ParamLimits

0x9c54,	// (0x00014798) popup_note_wait_window_t2

0x9c71,	// (0x000147b5) popup_note_wait_window_t3_ParamLimits

0x9c71,	// (0x000147b5) popup_note_wait_window_t3

0x9c84,	// (0x000147c8) popup_note_wait_window_t4_ParamLimits

0x9c84,	// (0x000147c8) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001a389) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001a389) popup_note_wait_window_t

0x9ca9,	// (0x000147ed) wait_bar_pane_ParamLimits

0x9ca9,	// (0x000147ed) wait_bar_pane

0x6f44,	// (0x00011a88) wait_anim_pane

0x6f44,	// (0x00011a88) wait_border_pane

0x6f3a,	// (0x00011a7e) wait_anim_pane_g1

0x6f3a,	// (0x00011a7e) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x0001a242) wait_anim_pane_g

0x9b7d,	// (0x000146c1) wait_border_pane_g1

0x9b88,	// (0x000146cc) wait_border_pane_g2

0x9b91,	// (0x000146d5) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001a37b) wait_border_pane_g

0x99ed,	// (0x00014531) bg_popup_window_pane_cp16_ParamLimits

0x99ed,	// (0x00014531) bg_popup_window_pane_cp16

0x9aed,	// (0x00014631) indicator_popup_pane_cp4_ParamLimits

0x9aed,	// (0x00014631) indicator_popup_pane_cp4

0x9b01,	// (0x00014645) popup_query_data_window_t1_ParamLimits

0x9b01,	// (0x00014645) popup_query_data_window_t1

0x9b13,	// (0x00014657) popup_query_data_window_t2_ParamLimits

0x9b13,	// (0x00014657) popup_query_data_window_t2

0x9b2c,	// (0x00014670) popup_query_data_window_t3_ParamLimits

0x9b2c,	// (0x00014670) popup_query_data_window_t3

0x0002,

0xf830,	// (0x0001a374) popup_query_data_window_t_ParamLimits

0xf830,	// (0x0001a374) popup_query_data_window_t

0x9b46,	// (0x0001468a) query_popup_data_pane_ParamLimits

0x9b46,	// (0x0001468a) query_popup_data_pane

0x9b5a,	// (0x0001469e) query_popup_data_pane_cp1_ParamLimits

0x9b5a,	// (0x0001469e) query_popup_data_pane_cp1

0x99ed,	// (0x00014531) bg_popup_window_pane_cp10_ParamLimits

0x99ed,	// (0x00014531) bg_popup_window_pane_cp10

0x9a1f,	// (0x00014563) indicator_popup_pane_ParamLimits

0x9a1f,	// (0x00014563) indicator_popup_pane

0x9a41,	// (0x00014585) popup_query_code_window_t1_ParamLimits

0x9a41,	// (0x00014585) popup_query_code_window_t1

0x9a5b,	// (0x0001459f) popup_query_code_window_t2_ParamLimits

0x9a5b,	// (0x0001459f) popup_query_code_window_t2

0x9aa4,	// (0x000145e8) popup_query_code_window_t3_ParamLimits

0x9aa4,	// (0x000145e8) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001a36d) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001a36d) popup_query_code_window_t

0x9ad3,	// (0x00014617) query_popup_pane_ParamLimits

0x9ad3,	// (0x00014617) query_popup_pane

0x7363,	// (0x00011ea7) bg_popup_window_pane_cp15_ParamLimits

0x7363,	// (0x00011ea7) bg_popup_window_pane_cp15

0x7381,	// (0x00011ec5) indicator_popup_pane_cp1_ParamLimits

0x7381,	// (0x00011ec5) indicator_popup_pane_cp1

0x7394,	// (0x00011ed8) indicator_popup_pane_cp2_ParamLimits

0x7394,	// (0x00011ed8) indicator_popup_pane_cp2

0x73a7,	// (0x00011eeb) popup_query_data_code_window_g1_ParamLimits

0x73a7,	// (0x00011eeb) popup_query_data_code_window_g1

0x73ba,	// (0x00011efe) popup_query_data_code_window_t1_ParamLimits

0x73ba,	// (0x00011efe) popup_query_data_code_window_t1

0x73cc,	// (0x00011f10) popup_query_data_code_window_t2_ParamLimits

0x73cc,	// (0x00011f10) popup_query_data_code_window_t2

0x73de,	// (0x00011f22) popup_query_data_code_window_t3_ParamLimits

0x73de,	// (0x00011f22) popup_query_data_code_window_t3

0x73f4,	// (0x00011f38) popup_query_data_code_window_t4_ParamLimits

0x73f4,	// (0x00011f38) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001a0ce) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001a0ce) popup_query_data_code_window_t

0x5a84,	// (0x000105c8) list_single_midp_graphic_pane_g3

0x740c,	// (0x00011f50) query_popup_data_pane_cp2_ParamLimits

0x741f,	// (0x00011f63) query_popup_pane_cp2_ParamLimits

0x741f,	// (0x00011f63) query_popup_pane_cp2

0x6f44,	// (0x00011a88) bg_popup_window_pane_cp11

0x99e5,	// (0x00014529) heading_pane_cp5

0x750a,	// (0x0001204e) listscroll_popup_info_pane

0x6f44,	// (0x00011a88) input_focus_pane_cp3

0x7432,	// (0x00011f76) query_popup_pane_t1

0x7440,	// (0x00011f84) list_popup_info_pane_ParamLimits

0x7440,	// (0x00011f84) list_popup_info_pane

0x744f,	// (0x00011f93) listscroll_popup_info_pane_g1

0x7457,	// (0x00011f9b) scroll_pane_cp7

0x7461,	// (0x00011fa5) popup_info_list_pane_t1_ParamLimits

0x7461,	// (0x00011fa5) popup_info_list_pane_t1

0x747b,	// (0x00011fbf) popup_info_list_pane_t2_ParamLimits

0x747b,	// (0x00011fbf) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001a0d7) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001a0d7) popup_info_list_pane_t

0x6f44,	// (0x00011a88) bg_popup_window_pane_cp12

0xae4c,	// (0x00015990) find_popup_pane

0x7024,	// (0x00011b68) bg_popup_window_pane_cp3

0x7495,	// (0x00011fd9) heading_pane_cp3

0x74a1,	// (0x00011fe5) listscroll_popup_graphic_pane

0x6f44,	// (0x00011a88) bg_popup_window_pane_cp4

0x7500,	// (0x00012044) heading_pane_cp4

0x750a,	// (0x0001204e) listscroll_popup_colour_pane

0x7512,	// (0x00012056) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x7512,	// (0x00012056) cell_large_graphic_colour_none_popup_pane

0x7526,	// (0x0001206a) grid_large_graphic_colour_popup_pane_ParamLimits

0x7526,	// (0x0001206a) grid_large_graphic_colour_popup_pane

0x754e,	// (0x00012092) listscroll_popup_colour_pane_g1_ParamLimits

0x754e,	// (0x00012092) listscroll_popup_colour_pane_g1

0x7565,	// (0x000120a9) listscroll_popup_colour_pane_g2_ParamLimits

0x7565,	// (0x000120a9) listscroll_popup_colour_pane_g2

0x757c,	// (0x000120c0) listscroll_popup_colour_pane_g3_ParamLimits

0x757c,	// (0x000120c0) listscroll_popup_colour_pane_g3

0x758c,	// (0x000120d0) listscroll_popup_colour_pane_g4_ParamLimits

0x758c,	// (0x000120d0) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001a0dc) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001a0dc) listscroll_popup_colour_pane_g

0x759b,	// (0x000120df) scroll_pane_cp6_ParamLimits

0x759b,	// (0x000120df) scroll_pane_cp6

0x75ad,	// (0x000120f1) cell_large_graphic_colour_popup_pane_ParamLimits

0x75ad,	// (0x000120f1) cell_large_graphic_colour_popup_pane

0x75cc,	// (0x00012110) cell_large_graphic_colour_none_popup_pane_t1

0x6f44,	// (0x00011a88) grid_highlight_pane_cp5

0x75db,	// (0x0001211f) cell_large_graphic_colour_popup_pane_g1

0x75e3,	// (0x00012127) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001a0e5) cell_large_graphic_colour_popup_pane_g

0x75eb,	// (0x0001212f) cell_large_graphic_colour_popup_pane_g2_copy1

0x75f4,	// (0x00012138) grid_highlight_pane_cp4

0x75fc,	// (0x00012140) bg_popup_window_pane_cp8_ParamLimits

0x75fc,	// (0x00012140) bg_popup_window_pane_cp8

0x7617,	// (0x0001215b) popup_snote_single_text_window_g1_ParamLimits

0x7617,	// (0x0001215b) popup_snote_single_text_window_g1

0x7629,	// (0x0001216d) popup_snote_single_text_window_t1_ParamLimits

0x7629,	// (0x0001216d) popup_snote_single_text_window_t1

0x763c,	// (0x00012180) popup_snote_single_text_window_t2_ParamLimits

0x763c,	// (0x00012180) popup_snote_single_text_window_t2

0x764f,	// (0x00012193) popup_snote_single_text_window_t3_ParamLimits

0x764f,	// (0x00012193) popup_snote_single_text_window_t3

0x7688,	// (0x000121cc) popup_snote_single_text_window_t4_ParamLimits

0x7688,	// (0x000121cc) popup_snote_single_text_window_t4

0x76bc,	// (0x00012200) popup_snote_single_text_window_t5_ParamLimits

0x76bc,	// (0x00012200) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001a0ea) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001a0ea) popup_snote_single_text_window_t

0x76eb,	// (0x0001222f) bg_popup_window_pane_cp9_ParamLimits

0x76eb,	// (0x0001222f) bg_popup_window_pane_cp9

0x7617,	// (0x0001215b) popup_snote_single_graphic_window_g1_ParamLimits

0x7617,	// (0x0001215b) popup_snote_single_graphic_window_g1

0x76f9,	// (0x0001223d) popup_snote_single_graphic_window_g2_ParamLimits

0x76f9,	// (0x0001223d) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001a0f5) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001a0f5) popup_snote_single_graphic_window_g

0x7705,	// (0x00012249) popup_snote_single_graphic_window_t1_ParamLimits

0x7705,	// (0x00012249) popup_snote_single_graphic_window_t1

0x7718,	// (0x0001225c) popup_snote_single_graphic_window_t2_ParamLimits

0x7718,	// (0x0001225c) popup_snote_single_graphic_window_t2

0x772b,	// (0x0001226f) popup_snote_single_graphic_window_t3_ParamLimits

0x772b,	// (0x0001226f) popup_snote_single_graphic_window_t3

0x7764,	// (0x000122a8) popup_snote_single_graphic_window_t4_ParamLimits

0x7764,	// (0x000122a8) popup_snote_single_graphic_window_t4

0x7798,	// (0x000122dc) popup_snote_single_graphic_window_t5_ParamLimits

0x7798,	// (0x000122dc) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001a0fa) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001a0fa) popup_snote_single_graphic_window_t

0xad8f,	// (0x000158d3) grid_graphic_popup_pane_ParamLimits

0xad8f,	// (0x000158d3) grid_graphic_popup_pane

0xadb8,	// (0x000158fc) listscroll_popup_graphic_pane_g1_ParamLimits

0xadb8,	// (0x000158fc) listscroll_popup_graphic_pane_g1

0xadcc,	// (0x00015910) listscroll_popup_graphic_pane_g2_ParamLimits

0xadcc,	// (0x00015910) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x0001a4ea) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x0001a4ea) listscroll_popup_graphic_pane_g

0xade0,	// (0x00015924) scroll_pane_cp5

0xad2f,	// (0x00015873) cell_graphic_popup_pane_ParamLimits

0xad2f,	// (0x00015873) cell_graphic_popup_pane

0xad10,	// (0x00015854) cell_graphic_popup_pane_g1

0xad18,	// (0x0001585c) cell_graphic_popup_pane_g2

0x75eb,	// (0x0001212f) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x0001a4e3) cell_graphic_popup_pane_g

0xad21,	// (0x00015865) cell_graphic_popup_pane_t2

0x75f4,	// (0x00012138) grid_highlight_pane_cp3

0x77d9,	// (0x0001231d) list_gen_pane_ParamLimits

0x77d9,	// (0x0001231d) list_gen_pane

0x780b,	// (0x0001234f) scroll_pane

0xac72,	// (0x000157b6) bg_list_pane_g1_ParamLimits

0xac72,	// (0x000157b6) bg_list_pane_g1

0xac8d,	// (0x000157d1) bg_list_pane_g2_ParamLimits

0xac8d,	// (0x000157d1) bg_list_pane_g2

0xaca0,	// (0x000157e4) bg_list_pane_g3_ParamLimits

0xaca0,	// (0x000157e4) bg_list_pane_g3

0xacb2,	// (0x000157f6) bg_list_pane_g4_ParamLimits

0xacb2,	// (0x000157f6) bg_list_pane_g4

0xacc4,	// (0x00015808) bg_list_pane_g5_ParamLimits

0xacc4,	// (0x00015808) bg_list_pane_g5

0x0004,

0xf994,	// (0x0001a4d8) bg_list_pane_g_ParamLimits

0xf994,	// (0x0001a4d8) bg_list_pane_g

0xab4d,	// (0x00015691) list_double2_graphic_large_graphic_pane_ParamLimits

0xab4d,	// (0x00015691) list_double2_graphic_large_graphic_pane

0xab4d,	// (0x00015691) list_double2_graphic_pane_ParamLimits

0xab4d,	// (0x00015691) list_double2_graphic_pane

0xab4d,	// (0x00015691) list_double2_large_graphic_pane_ParamLimits

0xab4d,	// (0x00015691) list_double2_large_graphic_pane

0xab4d,	// (0x00015691) list_double2_pane_ParamLimits

0xab4d,	// (0x00015691) list_double2_pane

0xab4d,	// (0x00015691) list_double_graphic_heading_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_graphic_heading_pane

0xab4d,	// (0x00015691) list_double_graphic_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_graphic_pane

0xab4d,	// (0x00015691) list_double_heading_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_heading_pane

0xab4d,	// (0x00015691) list_double_large_graphic_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_large_graphic_pane

0xab4d,	// (0x00015691) list_double_number_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_number_pane

0xab4d,	// (0x00015691) list_double_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_pane

0xab4d,	// (0x00015691) list_double_time_pane_ParamLimits

0xab4d,	// (0x00015691) list_double_time_pane

0xab4d,	// (0x00015691) list_setting_number_pane_ParamLimits

0xab4d,	// (0x00015691) list_setting_number_pane

0xab4d,	// (0x00015691) list_setting_pane_ParamLimits

0xab4d,	// (0x00015691) list_setting_pane

0xabce,	// (0x00015712) list_single_2graphic_pane_ParamLimits

0xabce,	// (0x00015712) list_single_2graphic_pane

0xabce,	// (0x00015712) list_single_graphic_heading_pane_ParamLimits

0xabce,	// (0x00015712) list_single_graphic_heading_pane

0xabce,	// (0x00015712) list_single_graphic_pane_ParamLimits

0xabce,	// (0x00015712) list_single_graphic_pane

0xabce,	// (0x00015712) list_single_heading_pane_ParamLimits

0xabce,	// (0x00015712) list_single_heading_pane

0xac4f,	// (0x00015793) list_single_large_graphic_pane_ParamLimits

0xac4f,	// (0x00015793) list_single_large_graphic_pane

0xabce,	// (0x00015712) list_single_number_heading_pane_ParamLimits

0xabce,	// (0x00015712) list_single_number_heading_pane

0xabce,	// (0x00015712) list_single_number_pane_ParamLimits

0xabce,	// (0x00015712) list_single_number_pane

0xabce,	// (0x00015712) list_single_pane_ParamLimits

0xabce,	// (0x00015712) list_single_pane

0x6f44,	// (0x00011a88) list_highlight_pane_cp1

0x784b,	// (0x0001238f) list_single_pane_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_pane_g1

0x7857,	// (0x0001239b) list_single_pane_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_pane_g

0xab06,	// (0x0001564a) list_single_pane_t1_ParamLimits

0xab06,	// (0x0001564a) list_single_pane_t1

0x784b,	// (0x0001238f) list_single_number_pane_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_number_pane_g1

0x7857,	// (0x0001239b) list_single_number_pane_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_number_pane_g

0x940e,	// (0x00013f52) list_single_number_pane_t1_ParamLimits

0x940e,	// (0x00013f52) list_single_number_pane_t1

0xa8b6,	// (0x000153fa) list_single_number_pane_t2_ParamLimits

0xa8b6,	// (0x000153fa) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001a499) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001a499) list_single_number_pane_t

0x783f,	// (0x00012383) list_single_graphic_pane_g1_ParamLimits

0x783f,	// (0x00012383) list_single_graphic_pane_g1

0x784b,	// (0x0001238f) list_single_graphic_pane_g2_ParamLimits

0x784b,	// (0x0001238f) list_single_graphic_pane_g2

0x7857,	// (0x0001239b) list_single_graphic_pane_g3_ParamLimits

0x7857,	// (0x0001239b) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001a105) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001a105) list_single_graphic_pane_g

0x7863,	// (0x000123a7) list_single_graphic_pane_t1_ParamLimits

0x7863,	// (0x000123a7) list_single_graphic_pane_t1

0x784b,	// (0x0001238f) list_single_heading_pane_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_heading_pane_g1

0x7857,	// (0x0001239b) list_single_heading_pane_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_heading_pane_g

0x7879,	// (0x000123bd) list_single_heading_pane_t1_ParamLimits

0x7879,	// (0x000123bd) list_single_heading_pane_t1

0x788f,	// (0x000123d3) list_single_heading_pane_t2_ParamLimits

0x788f,	// (0x000123d3) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001a111) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001a111) list_single_heading_pane_t

0x784b,	// (0x0001238f) list_single_number_heading_pane_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_number_heading_pane_g1

0x7857,	// (0x0001239b) list_single_number_heading_pane_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_number_heading_pane_g

0x7879,	// (0x000123bd) list_single_number_heading_pane_t1_ParamLimits

0x7879,	// (0x000123bd) list_single_number_heading_pane_t1

0x78a1,	// (0x000123e5) list_single_number_heading_pane_t2_ParamLimits

0x78a1,	// (0x000123e5) list_single_number_heading_pane_t2

0x78b3,	// (0x000123f7) list_single_number_heading_pane_t3_ParamLimits

0x78b3,	// (0x000123f7) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001a116) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001a116) list_single_number_heading_pane_t

0x78c5,	// (0x00012409) list_single_graphic_heading_pane_g1_ParamLimits

0x78c5,	// (0x00012409) list_single_graphic_heading_pane_g1

0x78d1,	// (0x00012415) list_single_graphic_heading_pane_g4_ParamLimits

0x78d1,	// (0x00012415) list_single_graphic_heading_pane_g4

0x7857,	// (0x0001239b) list_single_graphic_heading_pane_g5_ParamLimits

0x7857,	// (0x0001239b) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001a11d) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001a11d) list_single_graphic_heading_pane_g

0x7879,	// (0x000123bd) list_single_graphic_heading_pane_t1_ParamLimits

0x7879,	// (0x000123bd) list_single_graphic_heading_pane_t1

0x78e2,	// (0x00012426) list_single_graphic_heading_pane_t2_ParamLimits

0x78e2,	// (0x00012426) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001a124) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001a124) list_single_graphic_heading_pane_t

0x78f4,	// (0x00012438) list_single_large_graphic_pane_g1_ParamLimits

0x78f4,	// (0x00012438) list_single_large_graphic_pane_g1

0x7900,	// (0x00012444) list_single_large_graphic_pane_g2_ParamLimits

0x7900,	// (0x00012444) list_single_large_graphic_pane_g2

0x790c,	// (0x00012450) list_single_large_graphic_pane_g3_ParamLimits

0x790c,	// (0x00012450) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001a129) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001a129) list_single_large_graphic_pane_g

0x9b88,	// (0x000146cc) wait_border_pane_g2_copy1

0x7918,	// (0x0001245c) list_single_large_graphic_pane_g4_cp2

0x7920,	// (0x00012464) list_single_large_graphic_pane_t1_ParamLimits

0x7920,	// (0x00012464) list_single_large_graphic_pane_t1

0x7936,	// (0x0001247a) list_double_pane_g1_ParamLimits

0x7936,	// (0x0001247a) list_double_pane_g1

0x7942,	// (0x00012486) list_double_pane_g2_ParamLimits

0x7942,	// (0x00012486) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001a130) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001a130) list_double_pane_g

0x794e,	// (0x00012492) list_double_pane_t1_ParamLimits

0x794e,	// (0x00012492) list_double_pane_t1

0x7964,	// (0x000124a8) list_double_pane_t2_ParamLimits

0x7964,	// (0x000124a8) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001a135) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001a135) list_double_pane_t

0x7976,	// (0x000124ba) list_double2_pane_g1_ParamLimits

0x7976,	// (0x000124ba) list_double2_pane_g1

0x7987,	// (0x000124cb) list_double2_pane_g2_ParamLimits

0x7987,	// (0x000124cb) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001a13a) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001a13a) list_double2_pane_g

0x7993,	// (0x000124d7) list_double2_pane_t1_ParamLimits

0x7993,	// (0x000124d7) list_double2_pane_t1

0x79a9,	// (0x000124ed) list_double2_pane_t2_ParamLimits

0x79a9,	// (0x000124ed) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001a13f) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001a13f) list_double2_pane_t

0x7936,	// (0x0001247a) list_double_number_pane_g1_ParamLimits

0x7936,	// (0x0001247a) list_double_number_pane_g1

0x7942,	// (0x00012486) list_double_number_pane_g2_ParamLimits

0x7942,	// (0x00012486) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001a130) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001a130) list_double_number_pane_g

0x79bb,	// (0x000124ff) list_double_number_pane_t1_ParamLimits

0x79bb,	// (0x000124ff) list_double_number_pane_t1

0x79cd,	// (0x00012511) list_double_number_pane_t2_ParamLimits

0x79cd,	// (0x00012511) list_double_number_pane_t2

0x79e3,	// (0x00012527) list_double_number_pane_t3_ParamLimits

0x79e3,	// (0x00012527) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001a144) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001a144) list_double_number_pane_t

0x79f5,	// (0x00012539) list_double_graphic_pane_g1_ParamLimits

0x79f5,	// (0x00012539) list_double_graphic_pane_g1

0x7a01,	// (0x00012545) list_double_graphic_pane_g2_ParamLimits

0x7a01,	// (0x00012545) list_double_graphic_pane_g2

0x7a10,	// (0x00012554) list_double_graphic_pane_g3_ParamLimits

0x7a10,	// (0x00012554) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001a14b) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001a14b) list_double_graphic_pane_g

0x7a28,	// (0x0001256c) list_double_graphic_pane_t1_ParamLimits

0x7a28,	// (0x0001256c) list_double_graphic_pane_t1

0x7a3e,	// (0x00012582) list_double_graphic_pane_t2_ParamLimits

0x7a3e,	// (0x00012582) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001a154) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001a154) list_double_graphic_pane_t

0x7a50,	// (0x00012594) list_double2_graphic_pane_g1_ParamLimits

0x7a50,	// (0x00012594) list_double2_graphic_pane_g1

0x7a5c,	// (0x000125a0) list_double2_graphic_pane_g2_ParamLimits

0x7a5c,	// (0x000125a0) list_double2_graphic_pane_g2

0x7987,	// (0x000124cb) list_double2_graphic_pane_g3_ParamLimits

0x7987,	// (0x000124cb) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001a159) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001a159) list_double2_graphic_pane_g

0x7a68,	// (0x000125ac) list_double2_graphic_pane_t1_ParamLimits

0x7a68,	// (0x000125ac) list_double2_graphic_pane_t1

0x7a7e,	// (0x000125c2) list_double2_graphic_pane_t2_ParamLimits

0x7a7e,	// (0x000125c2) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001a160) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001a160) list_double2_graphic_pane_t

0x7a90,	// (0x000125d4) list_double_large_graphic_pane_g1_ParamLimits

0x7a90,	// (0x000125d4) list_double_large_graphic_pane_g1

0x7aaf,	// (0x000125f3) list_double_large_graphic_pane_g2_ParamLimits

0x7aaf,	// (0x000125f3) list_double_large_graphic_pane_g2

0x7942,	// (0x00012486) list_double_large_graphic_pane_g3_ParamLimits

0x7942,	// (0x00012486) list_double_large_graphic_pane_g3

0x7ac0,	// (0x00012604) list_double_large_graphic_pane_g4_ParamLimits

0x7ac0,	// (0x00012604) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001a165) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001a165) list_double_large_graphic_pane_g

0x7ae8,	// (0x0001262c) list_double_large_graphic_pane_t1_ParamLimits

0x7ae8,	// (0x0001262c) list_double_large_graphic_pane_t1

0x7b01,	// (0x00012645) list_double_large_graphic_pane_t2_ParamLimits

0x7b01,	// (0x00012645) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001a170) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001a170) list_double_large_graphic_pane_t

0x7b13,	// (0x00012657) list_double2_large_graphic_pane_g1_ParamLimits

0x7b13,	// (0x00012657) list_double2_large_graphic_pane_g1

0x7976,	// (0x000124ba) list_double2_large_graphic_pane_g2_ParamLimits

0x7976,	// (0x000124ba) list_double2_large_graphic_pane_g2

0x7987,	// (0x000124cb) list_double2_large_graphic_pane_g3_ParamLimits

0x7987,	// (0x000124cb) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001a175) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001a175) list_double2_large_graphic_pane_g

0x7b1f,	// (0x00012663) list_double2_large_graphic_pane_t1_ParamLimits

0x7b1f,	// (0x00012663) list_double2_large_graphic_pane_t1

0x7b35,	// (0x00012679) list_double2_large_graphic_pane_t2_ParamLimits

0x7b35,	// (0x00012679) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001a17c) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001a17c) list_double2_large_graphic_pane_t

0x7b47,	// (0x0001268b) list_double_heading_pane_g1_ParamLimits

0x7b47,	// (0x0001268b) list_double_heading_pane_g1

0x7b58,	// (0x0001269c) list_double_heading_pane_g2_ParamLimits

0x7b58,	// (0x0001269c) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001a181) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001a181) list_double_heading_pane_g

0x7b64,	// (0x000126a8) list_double_heading_pane_t1_ParamLimits

0x7b64,	// (0x000126a8) list_double_heading_pane_t1

0x79a9,	// (0x000124ed) list_double_heading_pane_t2_ParamLimits

0x79a9,	// (0x000124ed) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001a186) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001a186) list_double_heading_pane_t

0x7b7a,	// (0x000126be) list_double_graphic_heading_pane_g1_ParamLimits

0x7b7a,	// (0x000126be) list_double_graphic_heading_pane_g1

0x7b47,	// (0x0001268b) list_double_graphic_heading_pane_g2_ParamLimits

0x7b47,	// (0x0001268b) list_double_graphic_heading_pane_g2

0x7b58,	// (0x0001269c) list_double_graphic_heading_pane_g3_ParamLimits

0x7b58,	// (0x0001269c) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001a18b) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001a18b) list_double_graphic_heading_pane_g

0x7b86,	// (0x000126ca) list_double_graphic_heading_pane_t1_ParamLimits

0x7b86,	// (0x000126ca) list_double_graphic_heading_pane_t1

0x7a7e,	// (0x000125c2) list_double_graphic_heading_pane_t2_ParamLimits

0x7a7e,	// (0x000125c2) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001a192) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001a192) list_double_graphic_heading_pane_t

0x7aaf,	// (0x000125f3) list_double_time_pane_g1_ParamLimits

0x7aaf,	// (0x000125f3) list_double_time_pane_g1

0x7942,	// (0x00012486) list_double_time_pane_g2_ParamLimits

0x7942,	// (0x00012486) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001a197) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001a197) list_double_time_pane_g

0x7b9c,	// (0x000126e0) list_double_time_pane_t1_ParamLimits

0x7b9c,	// (0x000126e0) list_double_time_pane_t1

0x7bb2,	// (0x000126f6) list_double_time_pane_t2_ParamLimits

0x7bb2,	// (0x000126f6) list_double_time_pane_t2

0x7bc4,	// (0x00012708) list_double_time_pane_t3_ParamLimits

0x7bc4,	// (0x00012708) list_double_time_pane_t3

0x7bd6,	// (0x0001271a) list_double_time_pane_t4_ParamLimits

0x7bd6,	// (0x0001271a) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001a19c) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001a19c) list_double_time_pane_t

0x7a5c,	// (0x000125a0) list_setting_pane_g1_ParamLimits

0x7a5c,	// (0x000125a0) list_setting_pane_g1

0x7987,	// (0x000124cb) list_setting_pane_g2_ParamLimits

0x7987,	// (0x000124cb) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001a1a5) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001a1a5) list_setting_pane_g

0x7be8,	// (0x0001272c) list_setting_pane_t1_ParamLimits

0x7be8,	// (0x0001272c) list_setting_pane_t1

0x7bff,	// (0x00012743) list_setting_pane_t2_ParamLimits

0x7bff,	// (0x00012743) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001a1aa) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001a1aa) list_setting_pane_t

0x7c3c,	// (0x00012780) set_value_pane_cp_ParamLimits

0x7c3c,	// (0x00012780) set_value_pane_cp

0x7a5c,	// (0x000125a0) list_setting_number_pane_g1_ParamLimits

0x7a5c,	// (0x000125a0) list_setting_number_pane_g1

0x7987,	// (0x000124cb) list_setting_number_pane_g2_ParamLimits

0x7987,	// (0x000124cb) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001a1a5) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001a1a5) list_setting_number_pane_g

0x7c48,	// (0x0001278c) list_setting_number_pane_t1_ParamLimits

0x7c48,	// (0x0001278c) list_setting_number_pane_t1

0x7c5c,	// (0x000127a0) list_setting_number_pane_t2_ParamLimits

0x7c5c,	// (0x000127a0) list_setting_number_pane_t2

0x7c73,	// (0x000127b7) list_setting_number_pane_t3_ParamLimits

0x7c73,	// (0x000127b7) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001a1b1) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001a1b1) list_setting_number_pane_t

0x7c3c,	// (0x00012780) set_value_pane_ParamLimits

0x7c3c,	// (0x00012780) set_value_pane

0x7cb6,	// (0x000127fa) bg_set_opt_pane_ParamLimits

0x7cb6,	// (0x000127fa) bg_set_opt_pane

0x7cd7,	// (0x0001281b) set_value_pane_t1

0x7ce5,	// (0x00012829) slider_set_pane_cp3

0x7cee,	// (0x00012832) volume_small_pane_cp

0x7cf7,	// (0x0001283b) list_form_gen_pane

0x7d00,	// (0x00012844) scroll_pane_cp8

0x7d11,	// (0x00012855) form_field_data_pane_ParamLimits

0x7d11,	// (0x00012855) form_field_data_pane

0x7d31,	// (0x00012875) form_field_data_wide_pane_ParamLimits

0x7d31,	// (0x00012875) form_field_data_wide_pane

0x7d52,	// (0x00012896) form_field_popup_pane_ParamLimits

0x7d52,	// (0x00012896) form_field_popup_pane

0x7d70,	// (0x000128b4) form_field_popup_wide_pane_ParamLimits

0x7d70,	// (0x000128b4) form_field_popup_wide_pane

0x7d8d,	// (0x000128d1) form_field_slider_pane_ParamLimits

0x7d8d,	// (0x000128d1) form_field_slider_pane

0x7da0,	// (0x000128e4) form_field_slider_wide_pane_ParamLimits

0x7da0,	// (0x000128e4) form_field_slider_wide_pane

0x7db3,	// (0x000128f7) data_form_pane

0x7dc9,	// (0x0001290d) form_field_data_pane_t1

0x7de3,	// (0x00012927) input_focus_pane

0x7df1,	// (0x00012935) data_form_wide_pane

0x7e1d,	// (0x00012961) form_field_data_wide_pane_t1

0x7609,	// (0x0001214d) input_focus_pane_cp6

0x7e3c,	// (0x00012980) form_field_popup_pane_t1

0x7de3,	// (0x00012927) input_focus_pane_cp7

0x7e56,	// (0x0001299a) list_form_pane

0x7e6a,	// (0x000129ae) form_field_popup_wide_pane_t1

0x7de3,	// (0x00012927) input_focus_pane_cp8

0x7e7f,	// (0x000129c3) list_form_wide_pane

0x7e96,	// (0x000129da) form_field_slider_pane_t1_ParamLimits

0x7e96,	// (0x000129da) form_field_slider_pane_t1

0x7eaa,	// (0x000129ee) form_field_slider_pane_t2_ParamLimits

0x7eaa,	// (0x000129ee) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001a1c1) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001a1c1) form_field_slider_pane_t

0x72b9,	// (0x00011dfd) input_focus_pane_cp9_ParamLimits

0x72b9,	// (0x00011dfd) input_focus_pane_cp9

0x7ebc,	// (0x00012a00) slider_cont_pane_ParamLimits

0x7ebc,	// (0x00012a00) slider_cont_pane

0x7ed0,	// (0x00012a14) form_field_slider_wide_pane_t1_ParamLimits

0x7ed0,	// (0x00012a14) form_field_slider_wide_pane_t1

0x7ee2,	// (0x00012a26) form_field_slider_wide_pane_t2_ParamLimits

0x7ee2,	// (0x00012a26) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x0001a1c6) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x0001a1c6) form_field_slider_wide_pane_t

0x72b9,	// (0x00011dfd) input_focus_pane_cp10_ParamLimits

0x72b9,	// (0x00011dfd) input_focus_pane_cp10

0x7ef4,	// (0x00012a38) slider_cont_pane_cp1_ParamLimits

0x7ef4,	// (0x00012a38) slider_cont_pane_cp1

0x7f08,	// (0x00012a4c) slider_form_pane_cp

0x7f10,	// (0x00012a54) input_focus_pane_g1

0x7f18,	// (0x00012a5c) input_focus_pane_g2

0x7f20,	// (0x00012a64) input_focus_pane_g3

0x7f28,	// (0x00012a6c) input_focus_pane_g4

0x7f30,	// (0x00012a74) input_focus_pane_g5

0x7f38,	// (0x00012a7c) input_focus_pane_g6

0x7f40,	// (0x00012a84) input_focus_pane_g7

0x7f48,	// (0x00012a8c) input_focus_pane_g8

0x7f50,	// (0x00012a94) input_focus_pane_g9

0x6f3a,	// (0x00011a7e) input_focus_pane_g10

0x0009,

0xf687,	// (0x0001a1cb) input_focus_pane_g

0x9b91,	// (0x000146d5) wait_border_pane_g3_copy1

0x7f58,	// (0x00012a9c) data_form_pane_t1

0x6f3a,	// (0x00011a7e) wait_anim_pane_g1_copy1

0xaae9,	// (0x0001562d) data_form_wide_pane_t1

0x7f73,	// (0x00012ab7) list_form_graphic_pane_cp_ParamLimits

0x7f73,	// (0x00012ab7) list_form_graphic_pane_cp

0xaabe,	// (0x00015602) slider_form_pane_g1

0xaac7,	// (0x0001560b) slider_form_pane_g2

0x0006,

0xf985,	// (0x0001a4c9) slider_form_pane_g

0x7f73,	// (0x00012ab7) list_form_graphic_pane_ParamLimits

0x7f73,	// (0x00012ab7) list_form_graphic_pane

0x7f8a,	// (0x00012ace) list_form_graphic_pane_g1

0x7f92,	// (0x00012ad6) list_form_graphic_pane_t1_ParamLimits

0x7f92,	// (0x00012ad6) list_form_graphic_pane_t1

0x7024,	// (0x00011b68) list_highlight_pane_cp5_ParamLimits

0x7024,	// (0x00011b68) list_highlight_pane_cp5

0x7fa7,	// (0x00012aeb) find_pane_g1

0x7fb0,	// (0x00012af4) input_find_pane

0x7fb9,	// (0x00012afd) input_find_pane_g1_ParamLimits

0x7fb9,	// (0x00012afd) input_find_pane_g1

0x7fc5,	// (0x00012b09) input_find_pane_t1_ParamLimits

0x7fc5,	// (0x00012b09) input_find_pane_t1

0x7fda,	// (0x00012b1e) input_find_pane_t2_ParamLimits

0x7fda,	// (0x00012b1e) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001a1e0) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001a1e0) input_find_pane_t

0x7fef,	// (0x00012b33) input_focus_pane_cp5_ParamLimits

0x7fef,	// (0x00012b33) input_focus_pane_cp5

0x8009,	// (0x00012b4d) bg_popup_window_pane_cp2_ParamLimits

0x8009,	// (0x00012b4d) bg_popup_window_pane_cp2

0x8016,	// (0x00012b5a) listscroll_menu_pane_ParamLimits

0x8016,	// (0x00012b5a) listscroll_menu_pane

0x8022,	// (0x00012b66) popup_submenu_window_ParamLimits

0x8022,	// (0x00012b66) popup_submenu_window

0x804a,	// (0x00012b8e) find_popup_pane_g1

0x8052,	// (0x00012b96) input_popup_find_pane_cp

0x7fef,	// (0x00012b33) input_focus_pane_cp4_ParamLimits

0x7fef,	// (0x00012b33) input_focus_pane_cp4

0x806a,	// (0x00012bae) input_popup_find_pane_t1_ParamLimits

0x806a,	// (0x00012bae) input_popup_find_pane_t1

0x6f44,	// (0x00011a88) bg_popup_sub_pane_cp

0x8098,	// (0x00012bdc) listscroll_popup_sub_pane

0x80a0,	// (0x00012be4) list_submenu_pane_ParamLimits

0x80a0,	// (0x00012be4) list_submenu_pane

0x80b1,	// (0x00012bf5) scroll_pane_cp4

0x80b9,	// (0x00012bfd) list_single_popup_submenu_pane_ParamLimits

0x80b9,	// (0x00012bfd) list_single_popup_submenu_pane

0x80cd,	// (0x00012c11) list_single_popup_submenu_pane_g1

0x80d5,	// (0x00012c19) list_single_popup_submenu_pane_t1_ParamLimits

0x80d5,	// (0x00012c19) list_single_popup_submenu_pane_t1

0x7024,	// (0x00011b68) bg_active_tab_pane_cp1_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp1

0x80ea,	// (0x00012c2e) tabs_2_active_pane_g1

0x80f2,	// (0x00012c36) tabs_2_active_pane_t1

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp1_ParamLimits

0x7024,	// (0x00011b68) bg_passive_tab_pane_cp1

0x80ea,	// (0x00012c2e) tabs_2_passive_pane_g1

0x80f2,	// (0x00012c36) tabs_2_passive_pane_t1

0x8104,	// (0x00012c48) bg_active_tab_pane_cp4

0x8112,	// (0x00012c56) tabs_2_long_active_pane_t1

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp4

0x5a8c,	// (0x000105d0) list_single_midp_graphic_pane_g4_ParamLimits

0x8104,	// (0x00012c48) bg_active_tab_pane_cp5

0x8131,	// (0x00012c75) tabs_3_long_active_pane_t1

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp5

0x5a8c,	// (0x000105d0) list_single_midp_graphic_pane_g4

0x7024,	// (0x00011b68) bg_popup_window_pane_cp13_ParamLimits

0x7024,	// (0x00011b68) bg_popup_window_pane_cp13

0x814c,	// (0x00012c90) listscroll_popup_fast_pane_ParamLimits

0x814c,	// (0x00012c90) listscroll_popup_fast_pane

0x8158,	// (0x00012c9c) grid_popup_fast_pane_ParamLimits

0x8158,	// (0x00012c9c) grid_popup_fast_pane

0x816a,	// (0x00012cae) scroll_pane_cp9_ParamLimits

0x816a,	// (0x00012cae) scroll_pane_cp9

0xc9bf,	// (0x00017503) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc9bf,	// (0x00017503) list_single_graphic_hl_pane_t1_cp2

0x818e,	// (0x00012cd2) input_focus_pane_cp20_ParamLimits

0x818e,	// (0x00012cd2) input_focus_pane_cp20

0x819c,	// (0x00012ce0) query_popup_data_pane_t1_ParamLimits

0x819c,	// (0x00012ce0) query_popup_data_pane_t1

0x81af,	// (0x00012cf3) query_popup_data_pane_t2_ParamLimits

0x81af,	// (0x00012cf3) query_popup_data_pane_t2

0x81f5,	// (0x00012d39) query_popup_data_pane_t3_ParamLimits

0x81f5,	// (0x00012d39) query_popup_data_pane_t3

0x8236,	// (0x00012d7a) query_popup_data_pane_t4_ParamLimits

0x8236,	// (0x00012d7a) query_popup_data_pane_t4

0x8272,	// (0x00012db6) query_popup_data_pane_t5_ParamLimits

0x8272,	// (0x00012db6) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001a1e5) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001a1e5) query_popup_data_pane_t

0x7f10,	// (0x00012a54) bg_set_opt_pane_g1

0x7f18,	// (0x00012a5c) bg_set_opt_pane_g2

0x7f20,	// (0x00012a64) bg_set_opt_pane_g3

0x7f28,	// (0x00012a6c) bg_set_opt_pane_g4

0x7f30,	// (0x00012a74) bg_set_opt_pane_g5

0x7f38,	// (0x00012a7c) bg_set_opt_pane_g6

0x7f40,	// (0x00012a84) bg_set_opt_pane_g7

0x7f48,	// (0x00012a8c) bg_set_opt_pane_g8

0x7f50,	// (0x00012a94) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x0001a1f0) bg_set_opt_pane_g

0x50b6,	// (0x0000fbfa) control_top_pane_stacon_ParamLimits

0x50b6,	// (0x0000fbfa) control_top_pane_stacon

0x5109,	// (0x0000fc4d) signal_pane_stacon_ParamLimits

0x5109,	// (0x0000fc4d) signal_pane_stacon

0x88bf,	// (0x00013403) stacon_top_pane_g1_ParamLimits

0x88bf,	// (0x00013403) stacon_top_pane_g1

0x512e,	// (0x0000fc72) title_pane_stacon_ParamLimits

0x512e,	// (0x0000fc72) title_pane_stacon

0x5158,	// (0x0000fc9c) uni_indicator_pane_stacon_ParamLimits

0x5158,	// (0x0000fc9c) uni_indicator_pane_stacon

0x516d,	// (0x0000fcb1) battery_pane_stacon_ParamLimits

0x516d,	// (0x0000fcb1) battery_pane_stacon

0x51b1,	// (0x0000fcf5) control_bottom_pane_stacon_ParamLimits

0x51b1,	// (0x0000fcf5) control_bottom_pane_stacon

0x51d4,	// (0x0000fd18) navi_pane_stacon_ParamLimits

0x51d4,	// (0x0000fd18) navi_pane_stacon

0x88e1,	// (0x00013425) stacon_bottom_pane_g1_ParamLimits

0x88e1,	// (0x00013425) stacon_bottom_pane_g1

0x4e20,	// (0x0000f964) aid_levels_signal_lsc_ParamLimits

0x4e20,	// (0x0000f964) aid_levels_signal_lsc

0x4e37,	// (0x0000f97b) signal_pane_stacon_g1_ParamLimits

0x4e37,	// (0x0000f97b) signal_pane_stacon_g1

0x4e4b,	// (0x0000f98f) signal_pane_stacon_g2_ParamLimits

0x4e4b,	// (0x0000f98f) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x0001a203) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x0001a203) signal_pane_stacon_g

0x4e80,	// (0x0000f9c4) title_pane_stacon_t1_ParamLimits

0x4e80,	// (0x0000f9c4) title_pane_stacon_t1

0x82b6,	// (0x00012dfa) uni_indicator_pane_stacon_g1

0x82c0,	// (0x00012e04) uni_indicator_pane_stacon_g2

0x82ca,	// (0x00012e0e) uni_indicator_pane_stacon_g3

0x82d4,	// (0x00012e18) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x0001a20f) uni_indicator_pane_stacon_g

0x4ea5,	// (0x0000f9e9) control_top_pane_stacon_g1

0x4ead,	// (0x0000f9f1) control_top_pane_stacon_t1_ParamLimits

0x4ead,	// (0x0000f9f1) control_top_pane_stacon_t1

0x4ee4,	// (0x0000fa28) aid_levels_battery_lsc_ParamLimits

0x4ee4,	// (0x0000fa28) aid_levels_battery_lsc

0x4efc,	// (0x0000fa40) battery_pane_stacon_g1_ParamLimits

0x4efc,	// (0x0000fa40) battery_pane_stacon_g1

0x4f0f,	// (0x0000fa53) battery_pane_stacon_g2_ParamLimits

0x4f0f,	// (0x0000fa53) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001a218) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001a218) battery_pane_stacon_g

0x4f4d,	// (0x0000fa91) navi_icon_pane_stacon

0x4f61,	// (0x0000faa5) navi_navi_pane_stacon

0x4f4d,	// (0x0000fa91) navi_text_pane_stacon

0x4ea5,	// (0x0000f9e9) control_bottom_pane_stacon_g1

0x4f75,	// (0x0000fab9) control_bottom_pane_stacon_t1_ParamLimits

0x4f75,	// (0x0000fab9) control_bottom_pane_stacon_t1

0x82f8,	// (0x00012e3c) grid_app_pane_ParamLimits

0x82f8,	// (0x00012e3c) grid_app_pane

0x831a,	// (0x00012e5e) scroll_pane_cp15_ParamLimits

0x831a,	// (0x00012e5e) scroll_pane_cp15

0x832d,	// (0x00012e71) cell_app_pane_ParamLimits

0x832d,	// (0x00012e71) cell_app_pane

0x8353,	// (0x00012e97) cell_app_pane_g1_ParamLimits

0x8353,	// (0x00012e97) cell_app_pane_g1

0x8373,	// (0x00012eb7) cell_app_pane_g2_ParamLimits

0x8373,	// (0x00012eb7) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001a21d) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001a21d) cell_app_pane_g

0x837f,	// (0x00012ec3) cell_app_pane_t1_ParamLimits

0x837f,	// (0x00012ec3) cell_app_pane_t1

0x8396,	// (0x00012eda) grid_highlight_pane_ParamLimits

0x8396,	// (0x00012eda) grid_highlight_pane

0x7f10,	// (0x00012a54) cell_highlight_pane_g1

0x7f18,	// (0x00012a5c) cell_highlight_pane_g2

0x7f20,	// (0x00012a64) cell_highlight_pane_g3

0x7f28,	// (0x00012a6c) cell_highlight_pane_g4

0x7f30,	// (0x00012a74) cell_highlight_pane_g5

0x7f38,	// (0x00012a7c) cell_highlight_pane_g6

0x7f40,	// (0x00012a84) cell_highlight_pane_g7

0x7f48,	// (0x00012a8c) cell_highlight_pane_g8

0x7f50,	// (0x00012a94) cell_highlight_pane_g9

0x6f3a,	// (0x00011a7e) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x0001a1cb) cell_highlight_pane_g

0x83a7,	// (0x00012eeb) bg_scroll_pane

0x4fbf,	// (0x0000fb03) scroll_handle_pane

0x83ee,	// (0x00012f32) scroll_bg_pane_g1

0x8403,	// (0x00012f47) scroll_bg_pane_g2

0x841b,	// (0x00012f5f) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x0001a222) scroll_bg_pane_g

0x8430,	// (0x00012f74) scroll_handle_focus_pane_ParamLimits

0x8430,	// (0x00012f74) scroll_handle_focus_pane

0x83ee,	// (0x00012f32) scroll_handle_pane_g1

0x843d,	// (0x00012f81) scroll_handle_pane_g2

0x841b,	// (0x00012f5f) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001a229) scroll_handle_pane_g

0x7fef,	// (0x00012b33) bg_popup_sub_pane_cp21_ParamLimits

0x7fef,	// (0x00012b33) bg_popup_sub_pane_cp21

0x8451,	// (0x00012f95) popup_fep_japan_predictive_window_t1_ParamLimits

0x8451,	// (0x00012f95) popup_fep_japan_predictive_window_t1

0x846b,	// (0x00012faf) popup_fep_japan_predictive_window_t2_ParamLimits

0x846b,	// (0x00012faf) popup_fep_japan_predictive_window_t2

0x849e,	// (0x00012fe2) popup_fep_japan_predictive_window_t3_ParamLimits

0x849e,	// (0x00012fe2) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x0001a230) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x0001a230) popup_fep_japan_predictive_window_t

0x6f44,	// (0x00011a88) bg_popup_sub_pane_cp23

0x84d5,	// (0x00013019) listscroll_japin_cand_pane

0x84dd,	// (0x00013021) popup_fep_japan_candidate_window_t1

0x84eb,	// (0x0001302f) candidate_pane_ParamLimits

0x84eb,	// (0x0001302f) candidate_pane

0x84fd,	// (0x00013041) scroll_pane_cp30

0x8505,	// (0x00013049) list_single_popup_jap_candidate_pane_ParamLimits

0x8505,	// (0x00013049) list_single_popup_jap_candidate_pane

0x6f44,	// (0x00011a88) list_highlight_pane_cp30

0x8519,	// (0x0001305d) list_single_popup_jap_candidate_pane_t1

0x8528,	// (0x0001306c) level_1_signal

0x8535,	// (0x00013079) level_2_signal

0x8542,	// (0x00013086) level_3_signal

0x854f,	// (0x00013093) level_4_signal

0x855c,	// (0x000130a0) level_5_signal

0x8569,	// (0x000130ad) level_6_signal

0x8576,	// (0x000130ba) level_7_signal

0x8528,	// (0x0001306c) level_1_battery

0x8535,	// (0x00013079) level_2_battery

0x8542,	// (0x00013086) level_3_battery

0x854f,	// (0x00013093) level_4_battery

0x855c,	// (0x000130a0) level_5_battery

0x8569,	// (0x000130ad) level_6_battery

0x8576,	// (0x000130ba) level_7_battery

0x859b,	// (0x000130df) list_menu_pane_ParamLimits

0x859b,	// (0x000130df) list_menu_pane

0x85b1,	// (0x000130f5) scroll_pane_cp25_ParamLimits

0x85b1,	// (0x000130f5) scroll_pane_cp25

0x85ca,	// (0x0001310e) list_double2_graphic_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double2_graphic_pane_cp2

0x85ca,	// (0x0001310e) list_double2_large_graphic_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double2_large_graphic_pane_cp2

0x85ca,	// (0x0001310e) list_double2_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double2_pane_cp2

0x85ca,	// (0x0001310e) list_double_graphic_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double_graphic_pane_cp2

0x85ca,	// (0x0001310e) list_double_large_graphic_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double_large_graphic_pane_cp2

0x85ca,	// (0x0001310e) list_double_number_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double_number_pane_cp2

0x85ca,	// (0x0001310e) list_double_pane_cp2_ParamLimits

0x85ca,	// (0x0001310e) list_double_pane_cp2

0x85ee,	// (0x00013132) list_single_2graphic_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_2graphic_pane_cp2

0x85ee,	// (0x00013132) list_single_graphic_heading_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_graphic_heading_pane_cp2

0x85ee,	// (0x00013132) list_single_graphic_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_graphic_pane_cp2

0x85ee,	// (0x00013132) list_single_heading_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_heading_pane_cp2

0x8604,	// (0x00013148) list_single_large_graphic_pane_cp2_ParamLimits

0x8604,	// (0x00013148) list_single_large_graphic_pane_cp2

0x85ee,	// (0x00013132) list_single_number_heading_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_number_heading_pane_cp2

0x85ee,	// (0x00013132) list_single_number_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_number_pane_cp2

0x85ee,	// (0x00013132) list_single_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_pane_cp2

0x867f,	// (0x000131c3) bg_popup_sub_pane_cp22

0x506e,	// (0x0000fbb2) popup_side_volume_key_window_g1

0x5092,	// (0x0000fbd6) popup_side_volume_key_window_t1

0x50ae,	// (0x0000fbf2) volume_small_pane_cp1

0x72b9,	// (0x00011dfd) bg_popup_sub_pane_cp24_ParamLimits

0x72b9,	// (0x00011dfd) bg_popup_sub_pane_cp24

0x8695,	// (0x000131d9) fep_china_uni_candidate_pane_ParamLimits

0x8695,	// (0x000131d9) fep_china_uni_candidate_pane

0x86a9,	// (0x000131ed) fep_china_uni_entry_pane

0x86b9,	// (0x000131fd) popup_fep_china_uni_window_g1

0x86d5,	// (0x00013219) fep_china_uni_entry_pane_g1

0x86dd,	// (0x00013221) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x0001a261) fep_china_uni_entry_pane_g

0x86e5,	// (0x00013229) fep_entry_item_pane

0x86ef,	// (0x00013233) fep_candidate_item_pane

0x86f7,	// (0x0001323b) fep_china_uni_candidate_pane_g1

0x86ff,	// (0x00013243) fep_china_uni_candidate_pane_g2

0x8707,	// (0x0001324b) fep_china_uni_candidate_pane_g3

0x870f,	// (0x00013253) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x0001a266) fep_china_uni_candidate_pane_g

0x6f3a,	// (0x00011a7e) fep_entry_item_pane_g1

0x8717,	// (0x0001325b) fep_entry_item_pane_t1_ParamLimits

0x8717,	// (0x0001325b) fep_entry_item_pane_t1

0x872d,	// (0x00013271) fep_candidate_item_pane_t1_ParamLimits

0x872d,	// (0x00013271) fep_candidate_item_pane_t1

0x8742,	// (0x00013286) fep_candidate_item_pane_t2_ParamLimits

0x8742,	// (0x00013286) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x0001a26f) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x0001a26f) fep_candidate_item_pane_t

0x7024,	// (0x00011b68) list_highlight_pane_cp31_ParamLimits

0x7024,	// (0x00011b68) list_highlight_pane_cp31

0x8754,	// (0x00013298) level_1_signal_lsc

0x875d,	// (0x000132a1) level_2_signal_lsc

0x8766,	// (0x000132aa) level_3_signal_lsc

0x876f,	// (0x000132b3) level_4_signal_lsc

0x8778,	// (0x000132bc) level_5_signal_lsc

0x8781,	// (0x000132c5) level_6_signal_lsc

0x878a,	// (0x000132ce) level_7_signal_lsc

0x878a,	// (0x000132ce) level_1_battery_lsc

0x8793,	// (0x000132d7) level_2_battery_lsc

0x879c,	// (0x000132e0) level_3_battery_lsc

0x87a5,	// (0x000132e9) level_4_battery_lsc

0x87ae,	// (0x000132f2) level_5_battery_lsc

0x87b7,	// (0x000132fb) level_6_battery_lsc

0x8754,	// (0x00013298) level_7_battery_lsc

0x87c0,	// (0x00013304) scroll_handle_focus_pane_g1

0x87c9,	// (0x0001330d) scroll_handle_focus_pane_g2

0x87d2,	// (0x00013316) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x0001a274) scroll_handle_focus_pane_g

0x87db,	// (0x0001331f) list_single_2graphic_pane_g1_ParamLimits

0x87db,	// (0x0001331f) list_single_2graphic_pane_g1

0x78d1,	// (0x00012415) list_single_2graphic_pane_g2_ParamLimits

0x78d1,	// (0x00012415) list_single_2graphic_pane_g2

0x7857,	// (0x0001239b) list_single_2graphic_pane_g3_ParamLimits

0x7857,	// (0x0001239b) list_single_2graphic_pane_g3

0x87e7,	// (0x0001332b) list_single_2graphic_pane_g4_ParamLimits

0x87e7,	// (0x0001332b) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001a27b) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001a27b) list_single_2graphic_pane_g

0x87f8,	// (0x0001333c) list_single_2graphic_pane_t1_ParamLimits

0x87f8,	// (0x0001333c) list_single_2graphic_pane_t1

0x8826,	// (0x0001336a) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8826,	// (0x0001336a) list_double2_graphic_large_graphic_pane_g1

0x7976,	// (0x000124ba) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7976,	// (0x000124ba) list_double2_graphic_large_graphic_pane_g2

0x7987,	// (0x000124cb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7987,	// (0x000124cb) list_double2_graphic_large_graphic_pane_g3

0x8836,	// (0x0001337a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8836,	// (0x0001337a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x0001a284) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x0001a284) list_double2_graphic_large_graphic_pane_g

0x8842,	// (0x00013386) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8842,	// (0x00013386) list_double2_graphic_large_graphic_pane_t1

0x8858,	// (0x0001339c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8858,	// (0x0001339c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001a28d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001a28d) list_double2_graphic_large_graphic_pane_t

0x89a8,	// (0x000134ec) popup_fast_swap_window_ParamLimits

0x89a8,	// (0x000134ec) popup_fast_swap_window

0x89c4,	// (0x00013508) popup_side_volume_key_window

0x89de,	// (0x00013522) stacon_top_pane

0x89e8,	// (0x0001352c) status_pane_ParamLimits

0x89e8,	// (0x0001352c) status_pane

0x89f6,	// (0x0001353a) status_small_pane

0x6f44,	// (0x00011a88) control_pane

0x6f44,	// (0x00011a88) stacon_bottom_pane

0x7d00,	// (0x00012844) scroll_pane_cp121

0x7cf7,	// (0x0001283b) set_content_pane

0x886a,	// (0x000133ae) bg_active_tab_pane_g1_cp1

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp1

0x887c,	// (0x000133c0) bg_active_tab_pane_g3_cp1

0x886a,	// (0x000133ae) bg_passive_tab_pane_g1_cp1

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp1

0x887c,	// (0x000133c0) bg_passive_tab_pane_g3_cp1

0x8885,	// (0x000133c9) bg_active_tab_pane_g1_cp2

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp2

0x888e,	// (0x000133d2) bg_active_tab_pane_g3_cp2

0x8885,	// (0x000133c9) bg_passive_tab_pane_g1_cp2

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp2

0x888e,	// (0x000133d2) bg_passive_tab_pane_g3_cp2

0x8897,	// (0x000133db) bg_active_tab_pane_g1_cp3

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp3

0x88a0,	// (0x000133e4) bg_active_tab_pane_g3_cp3

0x8897,	// (0x000133db) bg_passive_tab_pane_g1_cp3

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp3

0x88a0,	// (0x000133e4) bg_passive_tab_pane_g3_cp3

0x88a9,	// (0x000133ed) bg_active_tab_pane_g1_cp4

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp4

0x88b4,	// (0x000133f8) bg_active_tab_pane_g3_cp4

0x88a9,	// (0x000133ed) bg_passive_tab_pane_g1_cp4

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp4

0x88b4,	// (0x000133f8) bg_passive_tab_pane_g3_cp4

0x88fd,	// (0x00013441) bg_active_tab_pane_g1_cp5

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp5

0x8906,	// (0x0001344a) bg_active_tab_pane_g3_cp5

0x88fd,	// (0x00013441) bg_passive_tab_pane_g1_cp5

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp5

0x8906,	// (0x0001344a) bg_passive_tab_pane_g3_cp5

0x890f,	// (0x00013453) list_set_graphic_pane_ParamLimits

0x890f,	// (0x00013453) list_set_graphic_pane

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp4

0x892d,	// (0x00013471) list_set_graphic_pane_g1_ParamLimits

0x892d,	// (0x00013471) list_set_graphic_pane_g1

0x8939,	// (0x0001347d) list_set_graphic_pane_g2_ParamLimits

0x8939,	// (0x0001347d) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x0001a292) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x0001a292) list_set_graphic_pane_g

0x0009,

0xfadf,	// (0x0001a623) volume_small_pane_cp_g

0x895b,	// (0x0001349f) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x895b,	// (0x0001349f) list_double2_large_graphic_pane_g1_cp2

0x8967,	// (0x000134ab) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8967,	// (0x000134ab) list_double2_large_graphic_pane_g2_cp2

0x8978,	// (0x000134bc) list_double2_large_graphic_pane_g3_cp2

0x8980,	// (0x000134c4) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8980,	// (0x000134c4) list_double2_large_graphic_pane_t1_cp2

0x8996,	// (0x000134da) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8996,	// (0x000134da) list_double2_large_graphic_pane_t2_cp2

0xa66a,	// (0x000151ae) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xa66a,	// (0x000151ae) list_double_large_graphic_pane_g1_cp2

0xa67b,	// (0x000151bf) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xa67b,	// (0x000151bf) list_double_large_graphic_pane_g2_cp2

0x8b0f,	// (0x00013653) list_double_large_graphic_pane_g3_cp2

0xa68c,	// (0x000151d0) list_double_large_graphic_pane_g4_cp

0xa694,	// (0x000151d8) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xa694,	// (0x000151d8) list_double_large_graphic_pane_t1_cp2

0xa6ab,	// (0x000151ef) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xa6ab,	// (0x000151ef) list_double_large_graphic_pane_t2_cp2

0x8a01,	// (0x00013545) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8a01,	// (0x00013545) list_double2_graphic_pane_g1_cp2

0x8a0f,	// (0x00013553) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8a0f,	// (0x00013553) list_double2_graphic_pane_g2_cp2

0x8a20,	// (0x00013564) list_double2_graphic_pane_g3_cp2

0x8a2a,	// (0x0001356e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8a2a,	// (0x0001356e) list_double2_graphic_pane_t1_cp2

0x8a40,	// (0x00013584) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8a40,	// (0x00013584) list_double2_graphic_pane_t2_cp2

0x8a52,	// (0x00013596) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8a52,	// (0x00013596) list_single_number_heading_pane_g1_cp2

0x8a5e,	// (0x000135a2) list_single_number_heading_pane_g2_cp2

0x8a66,	// (0x000135aa) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8a66,	// (0x000135aa) list_single_number_heading_pane_t1_cp2

0x8a7c,	// (0x000135c0) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8a7c,	// (0x000135c0) list_single_number_heading_pane_t2_cp2

0x8a8e,	// (0x000135d2) list_single_number_heading_pane_t3_cp2_ParamLimits

0x8a8e,	// (0x000135d2) list_single_number_heading_pane_t3_cp2

0x8a52,	// (0x00013596) list_single_heading_pane_g1_cp2_ParamLimits

0x8a52,	// (0x00013596) list_single_heading_pane_g1_cp2

0x8a5e,	// (0x000135a2) list_single_heading_pane_g2_cp2

0x8a66,	// (0x000135aa) list_single_heading_pane_t1_cp2_ParamLimits

0x8a66,	// (0x000135aa) list_single_heading_pane_t1_cp2

0xa474,	// (0x00014fb8) list_single_heading_pane_t2_cp2_ParamLimits

0xa474,	// (0x00014fb8) list_single_heading_pane_t2_cp2

0xa3bc,	// (0x00014f00) list_double_graphic_pane_g1_cp2_ParamLimits

0xa3bc,	// (0x00014f00) list_double_graphic_pane_g1_cp2

0xa3c8,	// (0x00014f0c) list_double_graphic_pane_g2_cp2_ParamLimits

0xa3c8,	// (0x00014f0c) list_double_graphic_pane_g2_cp2

0xa3d7,	// (0x00014f1b) list_double_graphic_pane_g3_cp2

0xa3df,	// (0x00014f23) list_double_graphic_pane_t1_cp2_ParamLimits

0xa3df,	// (0x00014f23) list_double_graphic_pane_t1_cp2

0xa3f5,	// (0x00014f39) list_double_graphic_pane_t2_cp2_ParamLimits

0xa3f5,	// (0x00014f39) list_double_graphic_pane_t2_cp2

0x8b03,	// (0x00013647) list_double_number_pane_g1_cp2_ParamLimits

0x8b03,	// (0x00013647) list_double_number_pane_g1_cp2

0x8b0f,	// (0x00013653) list_double_number_pane_g2_cp2

0xa380,	// (0x00014ec4) list_double_number_pane_t1_cp2_ParamLimits

0xa380,	// (0x00014ec4) list_double_number_pane_t1_cp2

0xa394,	// (0x00014ed8) list_double_number_pane_t2_cp2_ParamLimits

0xa394,	// (0x00014ed8) list_double_number_pane_t2_cp2

0xa3aa,	// (0x00014eee) list_double_number_pane_t3_cp2_ParamLimits

0xa3aa,	// (0x00014eee) list_double_number_pane_t3_cp2

0xa269,	// (0x00014dad) list_single_graphic_pane_g1_cp2_ParamLimits

0xa269,	// (0x00014dad) list_single_graphic_pane_g1_cp2

0x784b,	// (0x0001238f) list_single_graphic_pane_g2_cp2_ParamLimits

0x784b,	// (0x0001238f) list_single_graphic_pane_g2_cp2

0x8b67,	// (0x000136ab) list_single_graphic_pane_g3_cp2

0xa23f,	// (0x00014d83) list_single_graphic_pane_t1_cp2_ParamLimits

0xa23f,	// (0x00014d83) list_single_graphic_pane_t1_cp2

0x784b,	// (0x0001238f) list_single_number_pane_g1_cp2_ParamLimits

0x784b,	// (0x0001238f) list_single_number_pane_g1_cp2

0x8b67,	// (0x000136ab) list_single_number_pane_g2_cp2

0xa23f,	// (0x00014d83) list_single_number_pane_t1_cp2_ParamLimits

0xa23f,	// (0x00014d83) list_single_number_pane_t1_cp2

0xa255,	// (0x00014d99) list_single_number_pane_t2_cp2_ParamLimits

0xa255,	// (0x00014d99) list_single_number_pane_t2_cp2

0x8967,	// (0x000134ab) list_double2_pane_g1_cp2_ParamLimits

0x8967,	// (0x000134ab) list_double2_pane_g1_cp2

0x8978,	// (0x000134bc) list_double2_pane_g2_cp2

0x8adb,	// (0x0001361f) list_double2_pane_t1_cp2_ParamLimits

0x8adb,	// (0x0001361f) list_double2_pane_t1_cp2

0x8af1,	// (0x00013635) list_double2_pane_t2_cp2_ParamLimits

0x8af1,	// (0x00013635) list_double2_pane_t2_cp2

0x8b03,	// (0x00013647) list_double_pane_g1_cp2_ParamLimits

0x8b03,	// (0x00013647) list_double_pane_g1_cp2

0x8b0f,	// (0x00013653) list_double_pane_g2_cp2

0x8b17,	// (0x0001365b) list_double_pane_t1_cp2_ParamLimits

0x8b17,	// (0x0001365b) list_double_pane_t1_cp2

0x8b2d,	// (0x00013671) list_double_pane_t2_cp2_ParamLimits

0x8b2d,	// (0x00013671) list_double_pane_t2_cp2

0x8b57,	// (0x0001369b) list_single_pane_cp2_g3

0x784b,	// (0x0001238f) list_single_pane_g1_cp2_ParamLimits

0x784b,	// (0x0001238f) list_single_pane_g1_cp2

0x8b67,	// (0x000136ab) list_single_pane_g2_cp2

0x8b6f,	// (0x000136b3) list_single_pane_t1_cp2_ParamLimits

0x8b6f,	// (0x000136b3) list_single_pane_t1_cp2

0x8b87,	// (0x000136cb) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x8b87,	// (0x000136cb) list_single_large_graphic_pane_g1_cp2

0x8b93,	// (0x000136d7) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8b93,	// (0x000136d7) list_single_large_graphic_pane_g2_cp2

0x8b9f,	// (0x000136e3) list_single_large_graphic_pane_g3_cp2

0x8ba7,	// (0x000136eb) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8ba7,	// (0x000136eb) list_single_large_graphic_pane_g4_cp1

0x8bc1,	// (0x00013705) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x8bc1,	// (0x00013705) list_single_large_graphic_pane_t1_cp2

0xa20b,	// (0x00014d4f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa20b,	// (0x00014d4f) list_single_graphic_heading_pane_g1_cp2

0xa1d8,	// (0x00014d1c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa1d8,	// (0x00014d1c) list_single_graphic_heading_pane_g4_cp2

0x8b67,	// (0x000136ab) list_single_graphic_heading_pane_g5_cp2

0xa217,	// (0x00014d5b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa217,	// (0x00014d5b) list_single_graphic_heading_pane_t1_cp2

0xa22d,	// (0x00014d71) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa22d,	// (0x00014d71) list_single_graphic_heading_pane_t2_cp2

0xa1cc,	// (0x00014d10) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa1cc,	// (0x00014d10) list_single_2graphic_pane_g1_cp2

0xa1d8,	// (0x00014d1c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa1d8,	// (0x00014d1c) list_single_2graphic_pane_g2_cp2

0x8b67,	// (0x000136ab) list_single_2graphic_pane_g3_cp2

0xa1e9,	// (0x00014d2d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa1e9,	// (0x00014d2d) list_single_2graphic_pane_g4_cp2

0xa1f5,	// (0x00014d39) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa1f5,	// (0x00014d39) list_single_2graphic_pane_t1_cp2

0x6f3a,	// (0x00011a7e) list_highlight_pane_g10_cp1

0x9da4,	// (0x000148e8) list_highlight_pane_g1_cp1

0x9dac,	// (0x000148f0) list_highlight_pane_g2_cp1

0x9db4,	// (0x000148f8) list_highlight_pane_g3_cp1

0x9dbc,	// (0x00014900) list_highlight_pane_g4_cp1

0x9dc4,	// (0x00014908) list_highlight_pane_g5_cp1

0x9dcc,	// (0x00014910) list_highlight_pane_g6_cp1

0x9dd4,	// (0x00014918) list_highlight_pane_g7_cp1

0x9ddc,	// (0x00014920) list_highlight_pane_g8_cp1

0x9de4,	// (0x00014928) list_highlight_pane_g9_cp1

0x9cbc,	// (0x00014800) form_field_slider_pane_t3

0x9cca,	// (0x0001480e) form_field_slider_pane_t4

0x9cd8,	// (0x0001481c) slider_form_pane_ParamLimits

0x9cd8,	// (0x0001481c) slider_form_pane

0x6f44,	// (0x00011a88) control_abbreviations

0x6f44,	// (0x00011a88) control_conventions

0x6f44,	// (0x00011a88) control_definitions

0x6f44,	// (0x00011a88) format_table_attribute

0xa4be,	// (0x00015002) bg_popup_preview_window_pane_g9

0x6f44,	// (0x00011a88) format_table_data2

0x6f44,	// (0x00011a88) format_table_data3

0x6f44,	// (0x00011a88) format_table_data_example

0x0008,

0x6f44,	// (0x00011a88) intro_purpose

0xf8e5,	// (0x0001a429) bg_popup_preview_window_pane_g

0x6f44,	// (0x00011a88) texts_category

0x6f44,	// (0x00011a88) texts_graphics

0x8bd7,	// (0x0001371b) text_digital

0x8be6,	// (0x0001372a) text_primary

0x8bf5,	// (0x00013739) text_primary_small

0x8c04,	// (0x00013748) text_secondary

0x8c13,	// (0x00013757) text_title

0xace4,	// (0x00015828) bg_passive_tab_pane_g1_cp3_srt

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp3_srt

0xaced,	// (0x00015831) bg_passive_tab_pane_g3_cp3_srt

0x7024,	// (0x00011b68) bg_active_tab_pane_cp3_srt_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp3_srt

0xacf6,	// (0x0001583a) tabs_4_active_pane_srt_g1

0xacfe,	// (0x00015842) tabs_4_active_pane_srt_t1_ParamLimits

0xacfe,	// (0x00015842) tabs_4_active_pane_srt_t1

0xace4,	// (0x00015828) bg_active_tab_pane_g1_cp3_copy1

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp3_copy1

0xaced,	// (0x00015831) bg_active_tab_pane_g3_cp3_copy1

0x7024,	// (0x00011b68) tabs_2_long_active_pane_srt_ParamLimits

0x7024,	// (0x00011b68) tabs_2_long_active_pane_srt

0x7024,	// (0x00011b68) tabs_2_long_passive_pane_srt_ParamLimits

0x7024,	// (0x00011b68) tabs_2_long_passive_pane_srt

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp4_srt

0xa8ff,	// (0x00015443) bg_passive_tab_pane_g1_cp4_srt

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp4_srt

0xa908,	// (0x0001544c) bg_passive_tab_pane_g3_cp4_srt

0x8104,	// (0x00012c48) bg_active_tab_pane_cp4_srt_ParamLimits

0x8104,	// (0x00012c48) bg_active_tab_pane_cp4_srt

0xa911,	// (0x00015455) tabs_2_long_active_pane_srt_t1_ParamLimits

0xa911,	// (0x00015455) tabs_2_long_active_pane_srt_t1

0xa8ff,	// (0x00015443) bg_active_tab_pane_g1_cp4_srt

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp4_srt

0xa908,	// (0x0001544c) bg_active_tab_pane_g3_cp4_srt

0x72b9,	// (0x00011dfd) tabs_3_long_active_pane_srt_ParamLimits

0x72b9,	// (0x00011dfd) tabs_3_long_active_pane_srt

0x72b9,	// (0x00011dfd) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x72b9,	// (0x00011dfd) tabs_3_long_passive_pane_cp_srt

0x72b9,	// (0x00011dfd) tabs_3_long_passive_pane_srt_ParamLimits

0x72b9,	// (0x00011dfd) tabs_3_long_passive_pane_srt

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp5_srt

0x88fd,	// (0x00013441) bg_passive_tab_pane_g1_cp5_srt

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp5_srt

0x8906,	// (0x0001344a) bg_passive_tab_pane_g3_cp5_srt

0x8104,	// (0x00012c48) bg_active_tab_pane_cp5_srt_ParamLimits

0x8104,	// (0x00012c48) bg_active_tab_pane_cp5_srt

0xa8ed,	// (0x00015431) tabs_3_long_active_pane_srt_t1_ParamLimits

0xa8ed,	// (0x00015431) tabs_3_long_active_pane_srt_t1

0x88fd,	// (0x00013441) bg_active_tab_pane_g1_cp5_srt

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp5_srt

0x8906,	// (0x0001344a) bg_active_tab_pane_g3_cp5_srt

0xa8df,	// (0x00015423) navi_text_pane_srt_t1

0xa8d7,	// (0x0001541b) navi_icon_pane_srt_g1

0x8dd8,	// (0x0001391c) midp_editing_number_pane_srt

0x8c22,	// (0x00013766) midp_ticker_pane_srt

0x8de0,	// (0x00013924) midp_ticker_pane_srt_g1

0x8de8,	// (0x0001392c) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x0001a2b1) midp_ticker_pane_srt_g

0x8df0,	// (0x00013934) midp_ticker_pane_srt_t1

0xa8c8,	// (0x0001540c) midp_editing_number_pane_t1_copy1

0x8125,	// (0x00012c69) listscroll_midp_pane

0x8125,	// (0x00012c69) midp_form_pane

0x8c90,	// (0x000137d4) midp_info_popup_window_ParamLimits

0x8c90,	// (0x000137d4) midp_info_popup_window

0x7fef,	// (0x00012b33) bg_popup_sub_pane_cp50_ParamLimits

0x7fef,	// (0x00012b33) bg_popup_sub_pane_cp50

0x99d9,	// (0x0001451d) listscroll_midp_info_pane_ParamLimits

0x99d9,	// (0x0001451d) listscroll_midp_info_pane

0x99c1,	// (0x00014505) listscroll_form_midp_pane_ParamLimits

0x99c1,	// (0x00014505) listscroll_form_midp_pane

0x99cd,	// (0x00014511) scroll_bar_cp050

0x99a1,	// (0x000144e5) list_midp_pane

0xba00,	// (0x00016544) signal_pane_g2_cp

0x98db,	// (0x0001441f) listscroll_midp_info_pane_t1_ParamLimits

0x98db,	// (0x0001441f) listscroll_midp_info_pane_t1

0x98f3,	// (0x00014437) listscroll_midp_info_pane_t2_ParamLimits

0x98f3,	// (0x00014437) listscroll_midp_info_pane_t2

0x9931,	// (0x00014475) listscroll_midp_info_pane_t3_ParamLimits

0x9931,	// (0x00014475) listscroll_midp_info_pane_t3

0x996b,	// (0x000144af) listscroll_midp_info_pane_t4_ParamLimits

0x996b,	// (0x000144af) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x0001a364) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x0001a364) listscroll_midp_info_pane_t

0x80b1,	// (0x00012bf5) scroll_pane_cp21

0x987d,	// (0x000143c1) form_midp_field_choice_group_pane

0x9886,	// (0x000143ca) form_midp_field_text_pane

0x98c1,	// (0x00014405) form_midp_field_time_pane

0x98c9,	// (0x0001440d) form_midp_gauge_slider_pane

0x98d2,	// (0x00014416) form_midp_gauge_wait_pane

0x6f44,	// (0x00011a88) form_midp_image_pane

0x9847,	// (0x0001438b) list_single_midp_pane_ParamLimits

0x9847,	// (0x0001438b) list_single_midp_pane

0x97fb,	// (0x0001433f) form_midp_field_text_pane_t1

0x95a4,	// (0x000140e8) input_focus_pane_cp050

0x9836,	// (0x0001437a) list_midp_form_text_pane

0x97ca,	// (0x0001430e) form_midp_field_choice_group_pane_t1

0x97d8,	// (0x0001431c) input_focus_pane_cp051

0x97ec,	// (0x00014330) list_midp_choice_pane

0x6f44,	// (0x00011a88) status_idle_pane

0x97ae,	// (0x000142f2) form_midp_field_time_pane_t1

0x6f3a,	// (0x00011a7e) wait_anim_pane_g2_copy1

0x97bc,	// (0x00014300) form_midp_field_time_pane_t2

0x0001,

0x8d40,	// (0x00013884) aid_navinavi_width_2_pane

0xf81b,	// (0x0001a35f) form_midp_field_time_pane_t

0x6f44,	// (0x00011a88) input_focus_pane_cp052

0x6f44,	// (0x00011a88) bg_input_focus_pane_cp040

0x976e,	// (0x000142b2) form_midp_gauge_slider_pane_t1

0x977c,	// (0x000142c0) form_midp_gauge_slider_pane_t2

0x978a,	// (0x000142ce) form_midp_gauge_slider_pane_t3

0x9798,	// (0x000142dc) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x0001a356) form_midp_gauge_slider_pane_t

0x97a6,	// (0x000142ea) form_midp_slider_pane

0x7024,	// (0x00011b68) bg_input_focus_pane_cp041_ParamLimits

0x7024,	// (0x00011b68) bg_input_focus_pane_cp041

0x973b,	// (0x0001427f) form_midp_gauge_wait_pane_t1_ParamLimits

0x973b,	// (0x0001427f) form_midp_gauge_wait_pane_t1

0x974d,	// (0x00014291) form_midp_gauge_wait_pane_t2_ParamLimits

0x974d,	// (0x00014291) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x0001a351) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x0001a351) form_midp_gauge_wait_pane_t

0x975f,	// (0x000142a3) form_midp_wait_pane_ParamLimits

0x975f,	// (0x000142a3) form_midp_wait_pane

0x9705,	// (0x00014249) form_midp_image_pane_g1

0x970e,	// (0x00014252) form_midp_image_pane_t1

0x971d,	// (0x00014261) form_midp_image_pane_t2

0x972c,	// (0x00014270) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001a34a) form_midp_image_pane_t

0x96ed,	// (0x00014231) list_single_midp_pane_g1

0x96f6,	// (0x0001423a) list_single_midp_pane_t1

0x96be,	// (0x00014202) list_midp_form_item_pane_ParamLimits

0x96be,	// (0x00014202) list_midp_form_item_pane

0x8ce8,	// (0x0001382c) list_midp_form_item_pane_t1

0x8cf7,	// (0x0001383b) midp_ticker_pane_g1

0x8d03,	// (0x00013847) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x0001a297) midp_ticker_pane_g

0x8d0f,	// (0x00013853) midp_ticker_pane_t1

0xab3e,	// (0x00015682) midp_editing_number_pane_t1

0xab1c,	// (0x00015660) midp_editing_number_pane

0xab2b,	// (0x0001566f) midp_ticker_pane

0xa8a6,	// (0x000153ea) ai_message_heading_pane

0x6f44,	// (0x00011a88) bg_popup_window_pane_cp14

0xa8ae,	// (0x000153f2) listscroll_ai_message_pane

0xa830,	// (0x00015374) ai_message_heading_pane_g1_ParamLimits

0xa830,	// (0x00015374) ai_message_heading_pane_g1

0xa83c,	// (0x00015380) ai_message_heading_pane_g2_ParamLimits

0xa83c,	// (0x00015380) ai_message_heading_pane_g2

0xa848,	// (0x0001538c) ai_message_heading_pane_g3_ParamLimits

0xa848,	// (0x0001538c) ai_message_heading_pane_g3

0xa854,	// (0x00015398) ai_message_heading_pane_g4_ParamLimits

0xa854,	// (0x00015398) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001a48b) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001a48b) ai_message_heading_pane_g

0xa860,	// (0x000153a4) ai_message_heading_pane_t1_ParamLimits

0xa860,	// (0x000153a4) ai_message_heading_pane_t1

0xa87a,	// (0x000153be) ai_message_heading_pane_t2_ParamLimits

0xa87a,	// (0x000153be) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x0001a494) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x0001a494) ai_message_heading_pane_t

0xa88c,	// (0x000153d0) bg_popup_heading_pane_cp1_ParamLimits

0xa88c,	// (0x000153d0) bg_popup_heading_pane_cp1

0xa81e,	// (0x00015362) list_ai_message_pane_ParamLimits

0xa81e,	// (0x00015362) list_ai_message_pane

0x80b1,	// (0x00012bf5) scroll_pane_cp10

0xa7ba,	// (0x000152fe) list_ai_message_pane_g1

0xa7c2,	// (0x00015306) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001a468) list_ai_message_pane_g

0xa7ca,	// (0x0001530e) list_ai_message_pane_t1_ParamLimits

0xa7ca,	// (0x0001530e) list_ai_message_pane_t1

0xa7df,	// (0x00015323) list_ai_message_pane_t2_ParamLimits

0xa7df,	// (0x00015323) list_ai_message_pane_t2

0xa7f4,	// (0x00015338) list_ai_message_pane_t3_ParamLimits

0xa7f4,	// (0x00015338) list_ai_message_pane_t3

0xa809,	// (0x0001534d) list_ai_message_pane_t4_ParamLimits

0xa809,	// (0x0001534d) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001a46d) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001a46d) list_ai_message_pane_t

0xa7a4,	// (0x000152e8) cell_ai_soft_ind_pane_ParamLimits

0xa7a4,	// (0x000152e8) cell_ai_soft_ind_pane

0x8d21,	// (0x00013865) cell_ai_soft_ind_pane_g1_ParamLimits

0x8d21,	// (0x00013865) cell_ai_soft_ind_pane_g1

0x6f44,	// (0x00011a88) grid_highlight_cp1

0x8d2e,	// (0x00013872) text_secondary_cp56_ParamLimits

0x8d2e,	// (0x00013872) text_secondary_cp56

0xa779,	// (0x000152bd) example_general_pane_ParamLimits

0xa779,	// (0x000152bd) example_general_pane

0xa785,	// (0x000152c9) example_parent_pane_g1_ParamLimits

0xa785,	// (0x000152c9) example_parent_pane_g1

0xa791,	// (0x000152d5) example_parent_pane_t1_ParamLimits

0xa791,	// (0x000152d5) example_parent_pane_t1

0x57a3,	// (0x000102e7) popup_preview_text_window_ParamLimits

0x57a3,	// (0x000102e7) popup_preview_text_window

0x8b5f,	// (0x000136a3) list_single_pane_cp2_g4

0x7363,	// (0x00011ea7) bg_popup_preview_window_pane_ParamLimits

0x7363,	// (0x00011ea7) bg_popup_preview_window_pane

0xa4c6,	// (0x0001500a) popup_preview_text_window_t1_ParamLimits

0xa4c6,	// (0x0001500a) popup_preview_text_window_t1

0xa4e4,	// (0x00015028) popup_preview_text_window_t2_ParamLimits

0xa4e4,	// (0x00015028) popup_preview_text_window_t2

0xa52d,	// (0x00015071) popup_preview_text_window_t3_ParamLimits

0xa52d,	// (0x00015071) popup_preview_text_window_t3

0xa572,	// (0x000150b6) popup_preview_text_window_t4_ParamLimits

0xa572,	// (0x000150b6) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001a43c) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001a43c) popup_preview_text_window_t

0xa5f0,	// (0x00015134) scroll_pane_cp11

0x9480,	// (0x00013fc4) bg_popup_preview_window_pane_g1

0xa486,	// (0x00014fca) bg_popup_preview_window_pane_g2

0xa48e,	// (0x00014fd2) bg_popup_preview_window_pane_g3

0xa496,	// (0x00014fda) bg_popup_preview_window_pane_g4

0xa49e,	// (0x00014fe2) bg_popup_preview_window_pane_g5

0xa4a6,	// (0x00014fea) bg_popup_preview_window_pane_g6

0xa4ae,	// (0x00014ff2) bg_popup_preview_window_pane_g7

0xa4b6,	// (0x00014ffa) bg_popup_preview_window_pane_g8

0x49b0,	// (0x0000f4f4) aid_popup_width_pane

0x5781,	// (0x000102c5) popup_midp_note_alarm_window_ParamLimits

0x5781,	// (0x000102c5) popup_midp_note_alarm_window

0x7db3,	// (0x000128f7) data_form_pane_ParamLimits

0x7dbf,	// (0x00012903) form_field_data_pane_g1

0x7dc9,	// (0x0001290d) form_field_data_pane_t1_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_ParamLimits

0x7df1,	// (0x00012935) data_form_wide_pane_ParamLimits

0x7dfd,	// (0x00012941) form_field_data_wide_pane_g1

0x7e1d,	// (0x00012961) form_field_data_wide_pane_t1_ParamLimits

0x7609,	// (0x0001214d) input_focus_pane_cp6_ParamLimits

0x805c,	// (0x00012ba0) input_popup_find_pane_g1_ParamLimits

0x805c,	// (0x00012ba0) input_popup_find_pane_g1

0x4f20,	// (0x0000fa64) aid_navi_side_left_pane

0x4f35,	// (0x0000fa79) aid_navi_side_right_pane

0x9e9f,	// (0x000149e3) bg_popup_window_pane_cp30_ParamLimits

0x9e9f,	// (0x000149e3) bg_popup_window_pane_cp30

0x9f19,	// (0x00014a5d) popup_midp_note_alarm_window_g1_ParamLimits

0x9f19,	// (0x00014a5d) popup_midp_note_alarm_window_g1

0x9f49,	// (0x00014a8d) popup_midp_note_alarm_window_t1_ParamLimits

0x9f49,	// (0x00014a8d) popup_midp_note_alarm_window_t1

0x9fea,	// (0x00014b2e) popup_midp_note_alarm_window_t2_ParamLimits

0x9fea,	// (0x00014b2e) popup_midp_note_alarm_window_t2

0xa098,	// (0x00014bdc) popup_midp_note_alarm_window_t3_ParamLimits

0xa098,	// (0x00014bdc) popup_midp_note_alarm_window_t3

0xa0ca,	// (0x00014c0e) popup_midp_note_alarm_window_t4_ParamLimits

0xa0ca,	// (0x00014c0e) popup_midp_note_alarm_window_t4

0xa0f0,	// (0x00014c34) popup_midp_note_alarm_window_t5_ParamLimits

0xa0f0,	// (0x00014c34) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x0001a3d9) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x0001a3d9) popup_midp_note_alarm_window_t

0xa19c,	// (0x00014ce0) wait_bar_pane_cp1_ParamLimits

0xa19c,	// (0x00014ce0) wait_bar_pane_cp1

0x6f44,	// (0x00011a88) wait_anim_pane_copy1

0x6f44,	// (0x00011a88) wait_border_pane_copy1

0x9b7d,	// (0x000146c1) wait_border_pane_g1_copy1

0x7e34,	// (0x00012978) form_field_popup_pane_g1

0x7e3c,	// (0x00012980) form_field_popup_pane_t1_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_cp7_ParamLimits

0x7e56,	// (0x0001299a) list_form_pane_ParamLimits

0x7e62,	// (0x000129a6) form_field_popup_wide_pane_g1

0x7e6a,	// (0x000129ae) form_field_popup_wide_pane_t1_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_cp8_ParamLimits

0x7e7f,	// (0x000129c3) list_form_wide_pane_ParamLimits

0xad79,	// (0x000158bd) aid_size_cell_graphic_pane

0x7f58,	// (0x00012a9c) data_form_pane_t1_ParamLimits

0xaae9,	// (0x0001562d) data_form_wide_pane_t1_ParamLimits

0x903f,	// (0x00013b83) bg_status_flat_pane

0x6f84,	// (0x00011ac8) title_pane_t1_ParamLimits

0x6fec,	// (0x00011b30) title_pane_t2_ParamLimits

0x7012,	// (0x00011b56) title_pane_t3_ParamLimits

0xf557,	// (0x0001a09b) title_pane_t_ParamLimits

0x8528,	// (0x0001306c) level_1_signal_ParamLimits

0x8535,	// (0x00013079) level_2_signal_ParamLimits

0x8542,	// (0x00013086) level_3_signal_ParamLimits

0x854f,	// (0x00013093) level_4_signal_ParamLimits

0x855c,	// (0x000130a0) level_5_signal_ParamLimits

0x8569,	// (0x000130ad) level_6_signal_ParamLimits

0x8576,	// (0x000130ba) level_7_signal_ParamLimits

0x8528,	// (0x0001306c) level_1_battery_ParamLimits

0x8535,	// (0x00013079) level_2_battery_ParamLimits

0x8542,	// (0x00013086) level_3_battery_ParamLimits

0x854f,	// (0x00013093) level_4_battery_ParamLimits

0x855c,	// (0x000130a0) level_5_battery_ParamLimits

0x8569,	// (0x000130ad) level_6_battery_ParamLimits

0x8576,	// (0x000130ba) level_7_battery_ParamLimits

0x9da4,	// (0x000148e8) bg_status_flat_pane_g1

0x9dac,	// (0x000148f0) bg_status_flat_pane_g2

0x9db4,	// (0x000148f8) bg_status_flat_pane_g3

0x9dbc,	// (0x00014900) bg_status_flat_pane_g4

0x9dc4,	// (0x00014908) bg_status_flat_pane_g5

0x9dcc,	// (0x00014910) bg_status_flat_pane_g6

0x9dd4,	// (0x00014918) bg_status_flat_pane_g7

0x703a,	// (0x00011b7e) tabs_3_active_pane_t1_ParamLimits

0x703a,	// (0x00011b7e) tabs_3_passive_pane_t1_ParamLimits

0x7054,	// (0x00011b98) tabs_4_active_pane_t1_ParamLimits

0x7054,	// (0x00011b98) tabs_4_1_passive_pane_t1_ParamLimits

0x80f2,	// (0x00012c36) tabs_2_active_pane_t1_ParamLimits

0x80f2,	// (0x00012c36) tabs_2_passive_pane_t1_ParamLimits

0x8104,	// (0x00012c48) bg_active_tab_pane_cp4_ParamLimits

0x8112,	// (0x00012c56) tabs_2_long_active_pane_t1_ParamLimits

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp4_ParamLimits

0x5abe,	// (0x00010602) list_single_midp_graphic_pane_t1_ParamLimits

0x8104,	// (0x00012c48) bg_active_tab_pane_cp5_ParamLimits

0x8131,	// (0x00012c75) tabs_3_long_active_pane_t1_ParamLimits

0x8125,	// (0x00012c69) bg_passive_tab_pane_cp5_ParamLimits

0x5abe,	// (0x00010602) list_single_midp_graphic_pane_t1

0x903f,	// (0x00013b83) bg_status_flat_pane_ParamLimits

0x9102,	// (0x00013c46) indicator_pane_cp2_ParamLimits

0x9102,	// (0x00013c46) indicator_pane_cp2

0x922d,	// (0x00013d71) navi_pane_srt_ParamLimits

0x922d,	// (0x00013d71) navi_pane_srt

0x9251,	// (0x00013d95) popup_clock_digital_analogue_window_cp1

0x711b,	// (0x00011c5f) indicator_pane_t1

0x8c22,	// (0x00013766) copy_highlight_pane

0x8c22,	// (0x00013766) cursor_graphics_pane

0x8c22,	// (0x00013766) graphic_within_text_pane

0x8c22,	// (0x00013766) link_highlight_pane

0xa5b3,	// (0x000150f7) popup_preview_text_window_t5_ParamLimits

0xa5b3,	// (0x000150f7) popup_preview_text_window_t5

0x8d48,	// (0x0001388c) cursor_digital_pane

0x8d48,	// (0x0001388c) cursor_primary_pane

0x8d59,	// (0x0001389d) cursor_primary_small_pane

0x8d61,	// (0x000138a5) cursor_secondary_pane

0x8d69,	// (0x000138ad) cursor_title_pane

0x8d48,	// (0x0001388c) link_highlight_digital_pane

0x8d50,	// (0x00013894) link_highlight_primary_pane

0x8d59,	// (0x0001389d) link_highlight_primary_small_pane

0x8d61,	// (0x000138a5) link_highlight_secondary_pane

0x8d69,	// (0x000138ad) link_highlight_title_pane

0x8d48,	// (0x0001388c) copy_highlight_digital_pane

0x8d48,	// (0x0001388c) copy_highlight_primary_pane

0x8d59,	// (0x0001389d) copy_highlight_primary_small_pane

0x8d61,	// (0x000138a5) copy_highlight_secondary_pane

0x8d69,	// (0x000138ad) copy_highlight_title_pane

0x8d61,	// (0x000138a5) graphic_text_digital_pane

0x9e42,	// (0x00014986) graphic_text_primary_pane

0x9e4b,	// (0x0001498f) graphic_text_primary_small_pane

0x8d59,	// (0x0001389d) graphic_text_secondary_pane

0x8d48,	// (0x0001388c) graphic_text_title_pane

0x8d71,	// (0x000138b5) cursor_primary_pane_g1

0x9e34,	// (0x00014978) cursor_text_primary_t1

0x9e1c,	// (0x00014960) cursor_primary_small_pane_g1

0x9e26,	// (0x0001496a) cursor_text_primary_small_t1

0x9e04,	// (0x00014948) cursor_primary_small_pane_g1_copy1

0x9e0e,	// (0x00014952) cursor_text_primary_small_t1_copy1

0x9dec,	// (0x00014930) cursor_text_title_t1

0x9dfa,	// (0x0001493e) cursor_title_pane_g1

0x8d71,	// (0x000138b5) cursor_digital_pane_g1

0x8d7b,	// (0x000138bf) cursor_text_digital_t1

0x9d8d,	// (0x000148d1) link_highlight_primary_pane_g1

0x9d95,	// (0x000148d9) link_highlight_primary_pane_t1

0x8d89,	// (0x000138cd) link_highlight_primary_small_pane_g1

0x8d91,	// (0x000138d5) link_highlight_primary_small_pane_t1

0x8d89,	// (0x000138cd) link_highlight_secondary_pane_g1

0x8da0,	// (0x000138e4) link_highlight_secondary_pane_t1

0x9d01,	// (0x00014845) link_highlight_title_pane_g1

0x9d09,	// (0x0001484d) link_highlight_title_pane_t1

0x9cea,	// (0x0001482e) link_highlight_digital_pane_g1

0x9cf2,	// (0x00014836) link_highlight_digital_pane_t1

0x9bc2,	// (0x00014706) copy_highlight_primary_pane_g1

0x9bca,	// (0x0001470e) copy_highlight_primary_pane_t1

0x9b9c,	// (0x000146e0) copy_highlight_primary_small_pane_g1

0x9bb3,	// (0x000146f7) copy_highlight_primary_small_pane_t1

0x8daf,	// (0x000138f3) copy_highlight_secondary_pane_g1

0x8db7,	// (0x000138fb) copy_highlight_secondary_pane_t1

0x9b9c,	// (0x000146e0) copy_highlight_title_pane_g1

0x9ba4,	// (0x000146e8) copy_highlight_title_pane_t1

0x9bc2,	// (0x00014706) copy_highlight_digital_pane_g1

0xaf44,	// (0x00015a88) copy_highlight_digital_pane_t1

0xae98,	// (0x000159dc) graphic_text_primary_pane_g1

0xaf28,	// (0x00015a6c) graphic_text_primary_pane_t1

0xaf36,	// (0x00015a7a) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x0001a508) graphic_text_primary_pane_t

0xaf04,	// (0x00015a48) graphic_text_primary_small_pane_g1

0xaf0c,	// (0x00015a50) graphic_text_primary_small_pane_t1

0xaf1a,	// (0x00015a5e) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x0001a503) graphic_text_primary_small_pane_t

0xaee0,	// (0x00015a24) graphic_text_secondary_pane_g1

0xaee8,	// (0x00015a2c) graphic_text_secondary_pane_t1

0xaef6,	// (0x00015a3a) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x0001a4fe) graphic_text_secondary_pane_t

0xaebc,	// (0x00015a00) graphic_text_title_pane_g1

0xaec4,	// (0x00015a08) graphic_text_title_pane_t1

0xaed2,	// (0x00015a16) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x0001a4f9) graphic_text_title_pane_t

0xae98,	// (0x000159dc) graphic_text_digital_pane_g1

0xaea0,	// (0x000159e4) graphic_text_digital_pane_t1

0xaeae,	// (0x000159f2) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x0001a4f4) graphic_text_digital_pane_t

0x7024,	// (0x00011b68) navi_icon_pane_srt_ParamLimits

0x7024,	// (0x00011b68) navi_icon_pane_srt

0x6f44,	// (0x00011a88) navi_midp_pane_srt

0x6f44,	// (0x00011a88) navi_navi_pane_srt

0x7024,	// (0x00011b68) navi_text_pane_srt_ParamLimits

0x7024,	// (0x00011b68) navi_text_pane_srt

0xae63,	// (0x000159a7) navi_navi_icon_text_pane_srt

0xae6b,	// (0x000159af) navi_navi_pane_srt_g1_ParamLimits

0xae6b,	// (0x000159af) navi_navi_pane_srt_g1

0xae7d,	// (0x000159c1) navi_navi_pane_srt_g2_ParamLimits

0xae7d,	// (0x000159c1) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x0001a4ef) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x0001a4ef) navi_navi_pane_srt_g

0xae8f,	// (0x000159d3) navi_navi_tabs_pane_srt

0xae63,	// (0x000159a7) navi_navi_text_pane_srt

0xae63,	// (0x000159a7) navi_navi_volume_pane_srt

0xae54,	// (0x00015998) navi_navi_text_pane_srt_t1

0x5e32,	// (0x00010976) navi_navi_volume_pane_srt_g1

0x5e3a,	// (0x0001097e) volume_small_pane_srt_ParamLimits

0x5e3a,	// (0x0001097e) volume_small_pane_srt

0x51f7,	// (0x0000fd3b) volume_small_pane_srt_g1_ParamLimits

0x51f7,	// (0x0000fd3b) volume_small_pane_srt_g1

0x5207,	// (0x0000fd4b) volume_small_pane_srt_g2_ParamLimits

0x5207,	// (0x0000fd4b) volume_small_pane_srt_g2

0x5218,	// (0x0000fd5c) volume_small_pane_srt_g3_ParamLimits

0x5218,	// (0x0000fd5c) volume_small_pane_srt_g3

0x5229,	// (0x0000fd6d) volume_small_pane_srt_g4_ParamLimits

0x5229,	// (0x0000fd6d) volume_small_pane_srt_g4

0x523a,	// (0x0000fd7e) volume_small_pane_srt_g5_ParamLimits

0x523a,	// (0x0000fd7e) volume_small_pane_srt_g5

0x524b,	// (0x0000fd8f) volume_small_pane_srt_g6_ParamLimits

0x524b,	// (0x0000fd8f) volume_small_pane_srt_g6

0x525c,	// (0x0000fda0) volume_small_pane_srt_g7_ParamLimits

0x525c,	// (0x0000fda0) volume_small_pane_srt_g7

0x526d,	// (0x0000fdb1) volume_small_pane_srt_g8_ParamLimits

0x526d,	// (0x0000fdb1) volume_small_pane_srt_g8

0x527e,	// (0x0000fdc2) volume_small_pane_srt_g9_ParamLimits

0x527e,	// (0x0000fdc2) volume_small_pane_srt_g9

0x528f,	// (0x0000fdd3) volume_small_pane_srt_g10_ParamLimits

0x528f,	// (0x0000fdd3) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001a29c) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001a29c) volume_small_pane_srt_g

0x740c,	// (0x00011f50) query_popup_data_pane_cp2

0xae3a,	// (0x0001597e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xae3a,	// (0x0001597e) navi_navi_icon_text_pane_srt_t1

0x9e42,	// (0x00014986) navi_tabs_2_long_pane_srt

0x9e42,	// (0x00014986) navi_tabs_2_pane_srt

0x9e42,	// (0x00014986) navi_tabs_3_long_pane_srt

0x9e42,	// (0x00014986) navi_tabs_3_pane_srt

0x9e42,	// (0x00014986) navi_tabs_4_pane_srt

0x5e12,	// (0x00010956) tabs_2_active_pane_srt_ParamLimits

0x5e12,	// (0x00010956) tabs_2_active_pane_srt

0x5e22,	// (0x00010966) tabs_2_passive_pane_srt_ParamLimits

0x5e22,	// (0x00010966) tabs_2_passive_pane_srt

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp1_srt

0xae06,	// (0x0001594a) bg_passive_tab_pane_g1_cp1_srt

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp1_srt

0xae0f,	// (0x00015953) bg_passive_tab_pane_g3_cp1_srt

0x7024,	// (0x00011b68) bg_active_tab_pane_cp1_srt_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp1_srt

0xae18,	// (0x0001595c) tabs_2_active_pane_srt_g1

0xae20,	// (0x00015964) tabs_2_active_pane_srt_t1_ParamLimits

0xae20,	// (0x00015964) tabs_2_active_pane_srt_t1

0xae06,	// (0x0001594a) bg_active_tab_pane_g1_cp1_srt

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp1_srt

0xae0f,	// (0x00015953) bg_active_tab_pane_g3_cp1_srt

0x5ddf,	// (0x00010923) tabs_3_active_pane_srt_ParamLimits

0x5ddf,	// (0x00010923) tabs_3_active_pane_srt

0x5df0,	// (0x00010934) tabs_3_passive_pane_cp_srt_ParamLimits

0x5df0,	// (0x00010934) tabs_3_passive_pane_cp_srt

0x5e01,	// (0x00010945) tabs_3_passive_pane_srt_ParamLimits

0x5e01,	// (0x00010945) tabs_3_passive_pane_srt

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8f64,	// (0x00013aa8) bg_passive_tab_pane_cp2_srt

0x8dc6,	// (0x0001390a) bg_passive_tab_pane_g1_cp2_srt

0x8873,	// (0x000133b7) bg_passive_tab_pane_g2_cp2_srt

0x8dcf,	// (0x00013913) bg_passive_tab_pane_g3_cp2_srt

0x7024,	// (0x00011b68) bg_active_tab_pane_cp2_srt_ParamLimits

0x7024,	// (0x00011b68) bg_active_tab_pane_cp2_srt

0xadec,	// (0x00015930) tabs_3_active_pane_srt_g1

0xadf4,	// (0x00015938) tabs_3_active_pane_srt_t1_ParamLimits

0xadf4,	// (0x00015938) tabs_3_active_pane_srt_t1

0x8dc6,	// (0x0001390a) bg_active_tab_pane_g1_cp2_srt

0x8873,	// (0x000133b7) bg_active_tab_pane_g2_cp2_srt

0x8dcf,	// (0x00013913) bg_active_tab_pane_g3_cp2_srt

0x5d97,	// (0x000108db) tabs_4_active_pane_srt_ParamLimits

0x5d97,	// (0x000108db) tabs_4_active_pane_srt

0x5da9,	// (0x000108ed) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5da9,	// (0x000108ed) tabs_4_passive_pane_cp2_srt

0x53f2,	// (0x0000ff36) aid_size_cell_toolbar

0x8125,	// (0x00012c69) main_idle_act_pane_ParamLimits

0x55b5,	// (0x000100f9) popup_large_graphic_colour_window_ParamLimits

0x591a,	// (0x0001045e) popup_toolbar_window_ParamLimits

0x591a,	// (0x0001045e) popup_toolbar_window

0xab69,	// (0x000156ad) list_single_graphic_2heading_pane_ParamLimits

0xab69,	// (0x000156ad) list_single_graphic_2heading_pane

0x82de,	// (0x00012e22) aid_size_cell_apps_grid_lsc_pane

0x82f0,	// (0x00012e34) aid_size_cell_apps_grid_prt_pane

0x8f64,	// (0x00013aa8) bg_wml_button_pane_cp1_ParamLimits

0x8f64,	// (0x00013aa8) bg_wml_button_pane_cp1

0x97fb,	// (0x0001433f) form_midp_field_text_pane_t1_ParamLimits

0x95a4,	// (0x000140e8) input_focus_pane_cp050_ParamLimits

0x9836,	// (0x0001437a) list_midp_form_text_pane_ParamLimits

0x97d8,	// (0x0001431c) input_focus_pane_cp051_ParamLimits

0x97ec,	// (0x00014330) list_midp_choice_pane_ParamLimits

0x965a,	// (0x0001419e) list_single_2graphic_pane_cp3_ParamLimits

0x965a,	// (0x0001419e) list_single_2graphic_pane_cp3

0x9685,	// (0x000141c9) list_single_midp_graphic_pane_ParamLimits

0x9685,	// (0x000141c9) list_single_midp_graphic_pane

0x59c5,	// (0x00010509) list_single_graphic_2heading_pane_g1_ParamLimits

0x59c5,	// (0x00010509) list_single_graphic_2heading_pane_g1

0x59d1,	// (0x00010515) list_single_graphic_2heading_pane_g4_ParamLimits

0x59d1,	// (0x00010515) list_single_graphic_2heading_pane_g4

0x59dd,	// (0x00010521) list_single_graphic_2heading_pane_g5_ParamLimits

0x59dd,	// (0x00010521) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x0001a2ef) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x0001a2ef) list_single_graphic_2heading_pane_g

0x59e9,	// (0x0001052d) list_single_graphic_2heading_pane_t1_ParamLimits

0x59e9,	// (0x0001052d) list_single_graphic_2heading_pane_t1

0x59fd,	// (0x00010541) list_single_graphic_2heading_pane_t2_ParamLimits

0x59fd,	// (0x00010541) list_single_graphic_2heading_pane_t2

0x5a17,	// (0x0001055b) list_single_graphic_2heading_pane_t3_ParamLimits

0x5a17,	// (0x0001055b) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x0001a2f6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x0001a2f6) list_single_graphic_2heading_pane_t

0x93a8,	// (0x00013eec) bg_popup_sub_pane_cp2

0x93d2,	// (0x00013f16) grid_toobar_pane

0x5a2f,	// (0x00010573) cell_toolbar_pane_ParamLimits

0x5a2f,	// (0x00010573) cell_toolbar_pane

0x9424,	// (0x00013f68) cell_toolbar_pane_g1_ParamLimits

0x9424,	// (0x00013f68) cell_toolbar_pane_g1

0x9438,	// (0x00013f7c) cell_toolbar_pane_g2_ParamLimits

0x9438,	// (0x00013f7c) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x0001a304) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x0001a304) cell_toolbar_pane_g

0x945a,	// (0x00013f9e) grid_highlight_pane_cp2_ParamLimits

0x945a,	// (0x00013f9e) grid_highlight_pane_cp2

0x9474,	// (0x00013fb8) toolbar_button_pane

0x9480,	// (0x00013fc4) toolbar_button_pane_g1

0x9488,	// (0x00013fcc) toolbar_button_pane_g2

0x9490,	// (0x00013fd4) toolbar_button_pane_g3

0x9498,	// (0x00013fdc) toolbar_button_pane_g4

0x94a0,	// (0x00013fe4) toolbar_button_pane_g5

0x94a8,	// (0x00013fec) toolbar_button_pane_g6

0x94b0,	// (0x00013ff4) toolbar_button_pane_g7

0x94b8,	// (0x00013ffc) toolbar_button_pane_g8

0x94c0,	// (0x00014004) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x0001a309) toolbar_button_pane_g

0x5a67,	// (0x000105ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5a67,	// (0x000105ab) list_single_2graphic_pane_g1_cp3

0x5a73,	// (0x000105b7) list_single_2graphic_pane_g2_cp3_ParamLimits

0x5a73,	// (0x000105b7) list_single_2graphic_pane_g2_cp3

0x5a84,	// (0x000105c8) list_single_2graphic_pane_g3_cp3

0x5a8c,	// (0x000105d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5a8c,	// (0x000105d0) list_single_2graphic_pane_g4_cp3

0x5a98,	// (0x000105dc) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5a98,	// (0x000105dc) list_single_2graphic_pane_t1_cp3

0x5ab2,	// (0x000105f6) list_single_midp_graphic_pane_g2_ParamLimits

0x5ab2,	// (0x000105f6) list_single_midp_graphic_pane_g2

0x53fa,	// (0x0000ff3e) aid_zoom_text_primary

0x5402,	// (0x0000ff46) aid_zoom_text_secondary

0x8e80,	// (0x000139c4) status_small_pane_g7_ParamLimits

0x8e80,	// (0x000139c4) status_small_pane_g7

0x8ea3,	// (0x000139e7) status_small_pane_t1_ParamLimits

0x6f5b,	// (0x00011a9f) title_pane_g2

0x0003,

0xf54e,	// (0x0001a092) title_pane_g

0x74b0,	// (0x00011ff4) aid_size_cell_colour_1_pane_ParamLimits

0x74b0,	// (0x00011ff4) aid_size_cell_colour_1_pane

0x74c4,	// (0x00012008) aid_size_cell_colour_2_pane_ParamLimits

0x74c4,	// (0x00012008) aid_size_cell_colour_2_pane

0x74d8,	// (0x0001201c) aid_size_cell_colour_3_pane_ParamLimits

0x74d8,	// (0x0001201c) aid_size_cell_colour_3_pane

0x74ec,	// (0x00012030) aid_size_cell_colour_4_pane_ParamLimits

0x74ec,	// (0x00012030) aid_size_cell_colour_4_pane

0x4e5c,	// (0x0000f9a0) title_pane_stacon_g1_ParamLimits

0x4e5c,	// (0x0000f9a0) title_pane_stacon_g1

0x9c21,	// (0x00014765) popup_note_wait_window_g3_ParamLimits

0x9c21,	// (0x00014765) popup_note_wait_window_g3

0x9c97,	// (0x000147db) popup_note_wait_window_t5_ParamLimits

0x9c97,	// (0x000147db) popup_note_wait_window_t5

0x6f44,	// (0x00011a88) main_feb_china_hwr_fs_writing_pane

0x549e,	// (0x0000ffe2) popup_feb_china_hwr_fs_window_ParamLimits

0x549e,	// (0x0000ffe2) popup_feb_china_hwr_fs_window

0x5ad4,	// (0x00010618) aid_size_cell_hwr_fs_ParamLimits

0x5ad4,	// (0x00010618) aid_size_cell_hwr_fs

0x95a4,	// (0x000140e8) bg_popup_sub_pane_cp3_ParamLimits

0x95a4,	// (0x000140e8) bg_popup_sub_pane_cp3

0x5ae9,	// (0x0001062d) grid_hwr_fs_pane_ParamLimits

0x5ae9,	// (0x0001062d) grid_hwr_fs_pane

0x5b01,	// (0x00010645) linegrid_hwr_fs_pane_ParamLimits

0x5b01,	// (0x00010645) linegrid_hwr_fs_pane

0x5b11,	// (0x00010655) cell_hwr_fs_pane_ParamLimits

0x5b11,	// (0x00010655) cell_hwr_fs_pane

0x95b0,	// (0x000140f4) linegrid_hwr_fs_pane_g1_ParamLimits

0x95b0,	// (0x000140f4) linegrid_hwr_fs_pane_g1

0x95bc,	// (0x00014100) linegrid_hwr_fs_pane_g2_ParamLimits

0x95bc,	// (0x00014100) linegrid_hwr_fs_pane_g2

0x95ce,	// (0x00014112) linegrid_hwr_fs_pane_g3_ParamLimits

0x95ce,	// (0x00014112) linegrid_hwr_fs_pane_g3

0x5b33,	// (0x00010677) linegrid_hwr_fs_pane_g4_ParamLimits

0x5b33,	// (0x00010677) linegrid_hwr_fs_pane_g4

0x5b4d,	// (0x00010691) linegrid_hwr_fs_pane_g5_ParamLimits

0x5b4d,	// (0x00010691) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x0001a32f) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x0001a32f) linegrid_hwr_fs_pane_g

0x95da,	// (0x0001411e) cell_hwr_fs_pane_g1_ParamLimits

0x95da,	// (0x0001411e) cell_hwr_fs_pane_g1

0x92df,	// (0x00013e23) cell_hwr_fs_pane_g2_ParamLimits

0x92df,	// (0x00013e23) cell_hwr_fs_pane_g2

0x95f0,	// (0x00014134) cell_hwr_fs_pane_g3_ParamLimits

0x95f0,	// (0x00014134) cell_hwr_fs_pane_g3

0x95fd,	// (0x00014141) cell_hwr_fs_pane_g4_ParamLimits

0x95fd,	// (0x00014141) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001a33a) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001a33a) cell_hwr_fs_pane_g

0x5b63,	// (0x000106a7) cell_hwr_fs_pane_t1

0x6f44,	// (0x00011a88) grid_highlight_pane_cp6

0x6f44,	// (0x00011a88) main_idle_act2_pane

0x8098,	// (0x00012bdc) aid_inside_area_popup_secondary

0xa2d6,	// (0x00014e1a) aid_inside_area_window_primary_ParamLimits

0xa2d6,	// (0x00014e1a) aid_inside_area_window_primary

0xaf53,	// (0x00015a97) ai2_news_ticker_pane

0xaf5b,	// (0x00015a9f) aid_size_cell_ai1_link_ParamLimits

0xaf5b,	// (0x00015a9f) aid_size_cell_ai1_link

0xaf75,	// (0x00015ab9) popup_ai2_data_window_ParamLimits

0xaf75,	// (0x00015ab9) popup_ai2_data_window

0xaf89,	// (0x00015acd) popup_ai2_link_window_ParamLimits

0xaf89,	// (0x00015acd) popup_ai2_link_window

0x95a4,	// (0x000140e8) bg_popup_sub_pane_cp4_ParamLimits

0x95a4,	// (0x000140e8) bg_popup_sub_pane_cp4

0xaf9d,	// (0x00015ae1) grid_ai2_link_pane_ParamLimits

0xaf9d,	// (0x00015ae1) grid_ai2_link_pane

0xafb4,	// (0x00015af8) popup_ai2_link_window_g1_ParamLimits

0xafb4,	// (0x00015af8) popup_ai2_link_window_g1

0xafc0,	// (0x00015b04) popup_ai2_link_window_g2_ParamLimits

0xafc0,	// (0x00015b04) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x0001a50d) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x0001a50d) popup_ai2_link_window_g

0xafcf,	// (0x00015b13) ai2_mp_button_pane

0xafd7,	// (0x00015b1b) ai2_mp_volume_pane

0x97d8,	// (0x0001431c) bg_popup_sub_pane_cp5_ParamLimits

0x97d8,	// (0x0001431c) bg_popup_sub_pane_cp5

0xafdf,	// (0x00015b23) heading_ai2_gene_pane_ParamLimits

0xafdf,	// (0x00015b23) heading_ai2_gene_pane

0xafeb,	// (0x00015b2f) list_ai2_gene_pane_ParamLimits

0xafeb,	// (0x00015b2f) list_ai2_gene_pane

0xb033,	// (0x00015b77) cell_ai2_link_pane_ParamLimits

0xb033,	// (0x00015b77) cell_ai2_link_pane

0xb049,	// (0x00015b8d) cell_ai2_link_pane_g1

0x6f44,	// (0x00011a88) grid_highlight_pane_cp7

0x5e4f,	// (0x00010993) ai2_mp_volume_pane_g1

0xb11a,	// (0x00015c5e) ai2_mp_volume_pane_g2

0xb08f,	// (0x00015bd3) list_ai2_gene_pane_t1

0xb122,	// (0x00015c66) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x0001a526) ai2_mp_volume_pane_g

0x5e57,	// (0x0001099b) volume_small_pane_cp3

0xb12a,	// (0x00015c6e) aid_size_cell_ai2_button

0xb132,	// (0x00015c76) grid_ai2_button_pane

0xb13b,	// (0x00015c7f) cell_ai2_button_pane_ParamLimits

0xb13b,	// (0x00015c7f) cell_ai2_button_pane

0x6f3a,	// (0x00011a7e) cell_ai2_button_pane_g1

0x6f44,	// (0x00011a88) grid_highlight_pane_cp8

0xb0da,	// (0x00015c1e) ai2_gene_pane_t1_ParamLimits

0xb0da,	// (0x00015c1e) ai2_gene_pane_t1

0x53e8,	// (0x0000ff2c) aid_height_parent_landscape

0xa959,	// (0x0001549d) aid_height_set_list

0xa96a,	// (0x000154ae) aid_size_parent

0xad79,	// (0x000158bd) aid_size_cell_graphic_pane_ParamLimits

0xaffb,	// (0x00015b3f) popup_ai2_data_window_g1_ParamLimits

0xaffb,	// (0x00015b3f) popup_ai2_data_window_g1

0xb007,	// (0x00015b4b) ai2_news_ticker_pane_g1

0xb00f,	// (0x00015b53) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x0001a512) ai2_news_ticker_pane_g

0xb017,	// (0x00015b5b) ai2_news_ticker_pane_t1

0xb025,	// (0x00015b69) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x0001a517) ai2_news_ticker_pane_t

0xb052,	// (0x00015b96) heading_ai2_gene_pane_g1

0xb05a,	// (0x00015b9e) heading_ai2_gene_pane_t1_ParamLimits

0xb05a,	// (0x00015b9e) heading_ai2_gene_pane_t1

0xb06f,	// (0x00015bb3) list_highlight_pane_cp6

0xb077,	// (0x00015bbb) ai2_gene_pane_ParamLimits

0xb077,	// (0x00015bbb) ai2_gene_pane

0xb09d,	// (0x00015be1) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x0001a51c) list_ai2_gene_pane_t

0xb0ab,	// (0x00015bef) list_highlight_pane_cp8_ParamLimits

0xb0ab,	// (0x00015bef) list_highlight_pane_cp8

0xb0bc,	// (0x00015c00) ai2_gene_pane_g1_ParamLimits

0xb0bc,	// (0x00015c00) ai2_gene_pane_g1

0xb0ce,	// (0x00015c12) ai2_gene_pane_g2_ParamLimits

0xb0ce,	// (0x00015c12) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x0001a521) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x0001a521) ai2_gene_pane_g

0x782e,	// (0x00012372) scroll_pane_cp12

0x53a7,	// (0x0000feeb) control_pane_t3_ParamLimits

0x53a7,	// (0x0000feeb) control_pane_t3

0x8e94,	// (0x000139d8) status_small_pane_g8_ParamLimits

0x8e94,	// (0x000139d8) status_small_pane_g8

0x5580,	// (0x000100c4) popup_find_window_ParamLimits

0x5795,	// (0x000102d9) popup_note_image_window_ParamLimits

0x78c5,	// (0x00012409) list_double2_graphic_pane_vc_g1_ParamLimits

0x78c5,	// (0x00012409) list_double2_graphic_pane_vc_g1

0x784b,	// (0x0001238f) list_double2_graphic_pane_vc_g2_ParamLimits

0x784b,	// (0x0001238f) list_double2_graphic_pane_vc_g2

0x7857,	// (0x0001239b) list_double2_graphic_pane_vc_g3_ParamLimits

0x7857,	// (0x0001239b) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x0001a2fd) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a2fd) list_double2_graphic_pane_vc_g

0x940e,	// (0x00013f52) list_double2_graphic_pane_vc_t1_ParamLimits

0x940e,	// (0x00013f52) list_double2_graphic_pane_vc_t1

0x784b,	// (0x0001238f) list_single_heading_pane_vc_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_heading_pane_vc_g1

0x7857,	// (0x0001239b) list_single_heading_pane_vc_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_heading_pane_vc_g

0x94c8,	// (0x0001400c) list_single_heading_pane_vc_t1_ParamLimits

0x94c8,	// (0x0001400c) list_single_heading_pane_vc_t1

0x94de,	// (0x00014022) list_single_heading_pane_vc_t2_ParamLimits

0x94de,	// (0x00014022) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x0001a31e) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x0001a31e) list_single_heading_pane_vc_t

0x94fa,	// (0x0001403e) list_setting_number_pane_vc_g1_ParamLimits

0x94fa,	// (0x0001403e) list_setting_number_pane_vc_g1

0x9506,	// (0x0001404a) list_setting_number_pane_vc_g2_ParamLimits

0x9506,	// (0x0001404a) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0001a323) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0001a323) list_setting_number_pane_vc_g

0x9512,	// (0x00014056) list_setting_number_pane_vc_t1_ParamLimits

0x9512,	// (0x00014056) list_setting_number_pane_vc_t1

0x9526,	// (0x0001406a) list_setting_number_pane_vc_t2_ParamLimits

0x9526,	// (0x0001406a) list_setting_number_pane_vc_t2

0x9540,	// (0x00014084) list_setting_number_pane_vc_t3_ParamLimits

0x9540,	// (0x00014084) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001a328) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001a328) list_setting_number_pane_vc_t

0x9568,	// (0x000140ac) set_value_pane_vc_ParamLimits

0x9568,	// (0x000140ac) set_value_pane_vc

0xab69,	// (0x000156ad) list_double2_graphic_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double2_graphic_pane_vc

0xab7c,	// (0x000156c0) list_double2_large_graphic_pane_vc_ParamLimits

0xab7c,	// (0x000156c0) list_double2_large_graphic_pane_vc

0xab69,	// (0x000156ad) list_double2_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double2_pane_vc

0xab69,	// (0x000156ad) list_double_graphic_heading_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_graphic_heading_pane_vc

0xab69,	// (0x000156ad) list_double_graphic_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_graphic_pane_vc

0xab69,	// (0x000156ad) list_double_heading_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_heading_pane_vc

0xab8e,	// (0x000156d2) list_double_large_graphic_pane_vc_ParamLimits

0xab8e,	// (0x000156d2) list_double_large_graphic_pane_vc

0xab69,	// (0x000156ad) list_double_number_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_number_pane_vc

0xab69,	// (0x000156ad) list_double_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_pane_vc

0xab69,	// (0x000156ad) list_double_time_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_double_time_pane_vc

0xab69,	// (0x000156ad) list_setting_number_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_setting_number_pane_vc

0xab69,	// (0x000156ad) list_setting_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_setting_pane_vc

0xab69,	// (0x000156ad) list_single_graphic_heading_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_single_graphic_heading_pane_vc

0xab69,	// (0x000156ad) list_single_heading_pane_vc_ParamLimits

0xab69,	// (0x000156ad) list_single_heading_pane_vc

0xabac,	// (0x000156f0) list_single_number_heading_pane_vc_ParamLimits

0xabac,	// (0x000156f0) list_single_number_heading_pane_vc

0xb16e,	// (0x00015cb2) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb16e,	// (0x00015cb2) list_double_graphic_heading_pane_vc_g1

0xb17a,	// (0x00015cbe) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb17a,	// (0x00015cbe) list_double_graphic_heading_pane_vc_g2

0xb186,	// (0x00015cca) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb186,	// (0x00015cca) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e9,	// (0x0001a52d) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e9,	// (0x0001a52d) list_double_graphic_heading_pane_vc_g

0xb192,	// (0x00015cd6) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb192,	// (0x00015cd6) list_double_graphic_heading_pane_vc_t1

0xb1ae,	// (0x00015cf2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb1ae,	// (0x00015cf2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f0,	// (0x0001a534) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f0,	// (0x0001a534) list_double_graphic_heading_pane_vc_t

0x94fa,	// (0x0001403e) list_setting_pane_vc_g1_ParamLimits

0x94fa,	// (0x0001403e) list_setting_pane_vc_g1

0x9506,	// (0x0001404a) list_setting_pane_vc_g2_ParamLimits

0x9506,	// (0x0001404a) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x0001a323) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x0001a323) list_setting_pane_vc_g

0xb3be,	// (0x00015f02) list_setting_pane_vc_t1_ParamLimits

0xb3be,	// (0x00015f02) list_setting_pane_vc_t1

0xb3d8,	// (0x00015f1c) list_setting_pane_vc_t2_ParamLimits

0xb3d8,	// (0x00015f1c) list_setting_pane_vc_t2

0x0001,

0xfa33,	// (0x0001a577) list_setting_pane_vc_t_ParamLimits

0xfa33,	// (0x0001a577) list_setting_pane_vc_t

0x9568,	// (0x000140ac) set_value_pane_cp_vc_ParamLimits

0x9568,	// (0x000140ac) set_value_pane_cp_vc

0x784b,	// (0x0001238f) list_single_number_heading_pane_vc_g1_ParamLimits

0x784b,	// (0x0001238f) list_single_number_heading_pane_vc_g1

0x7857,	// (0x0001239b) list_single_number_heading_pane_vc_g2_ParamLimits

0x7857,	// (0x0001239b) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_single_number_heading_pane_vc_g

0x94c8,	// (0x0001400c) list_single_number_heading_pane_vc_t1_ParamLimits

0x94c8,	// (0x0001400c) list_single_number_heading_pane_vc_t1

0xb3f0,	// (0x00015f34) list_single_number_heading_pane_vc_t2_ParamLimits

0xb3f0,	// (0x00015f34) list_single_number_heading_pane_vc_t2

0x78b3,	// (0x000123f7) list_single_number_heading_pane_vc_t3_ParamLimits

0x78b3,	// (0x000123f7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa38,	// (0x0001a57c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001a57c) list_single_number_heading_pane_vc_t

0x78c5,	// (0x00012409) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x78c5,	// (0x00012409) list_single_graphic_heading_pane_vc_g1

0x784b,	// (0x0001238f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x784b,	// (0x0001238f) list_single_graphic_heading_pane_vc_g4

0x7857,	// (0x0001239b) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x7857,	// (0x0001239b) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x0001a2fd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x0001a2fd) list_single_graphic_heading_pane_vc_g

0x94c8,	// (0x0001400c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x94c8,	// (0x0001400c) list_single_graphic_heading_pane_vc_t1

0xb404,	// (0x00015f48) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb404,	// (0x00015f48) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3f,	// (0x0001a583) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3f,	// (0x0001a583) list_single_graphic_heading_pane_vc_t

0x784b,	// (0x0001238f) list_double2_pane_vc_g1_ParamLimits

0x784b,	// (0x0001238f) list_double2_pane_vc_g1

0x7857,	// (0x0001239b) list_double2_pane_vc_g2_ParamLimits

0x7857,	// (0x0001239b) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_double2_pane_vc_g

0xab06,	// (0x0001564a) list_double2_pane_vc_t1_ParamLimits

0xab06,	// (0x0001564a) list_double2_pane_vc_t1

0xb418,	// (0x00015f5c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb418,	// (0x00015f5c) list_double2_large_graphic_pane_vc_g1

0xb424,	// (0x00015f68) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb424,	// (0x00015f68) list_double2_large_graphic_pane_vc_g2

0xb430,	// (0x00015f74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb430,	// (0x00015f74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa44,	// (0x0001a588) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa44,	// (0x0001a588) list_double2_large_graphic_pane_vc_g

0xb43c,	// (0x00015f80) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb43c,	// (0x00015f80) list_double2_large_graphic_pane_vc_t1

0xb452,	// (0x00015f96) list_double_time_pane_vc_g1_ParamLimits

0xb452,	// (0x00015f96) list_double_time_pane_vc_g1

0xb45e,	// (0x00015fa2) list_double_time_pane_vc_g2_ParamLimits

0xb45e,	// (0x00015fa2) list_double_time_pane_vc_g2

0x0001,

0xfa4b,	// (0x0001a58f) list_double_time_pane_vc_g_ParamLimits

0xfa4b,	// (0x0001a58f) list_double_time_pane_vc_g

0xb46a,	// (0x00015fae) list_double_time_pane_vc_t1_ParamLimits

0xb46a,	// (0x00015fae) list_double_time_pane_vc_t1

0xb488,	// (0x00015fcc) list_double_time_pane_vc_t2_ParamLimits

0xb488,	// (0x00015fcc) list_double_time_pane_vc_t2

0xb4b2,	// (0x00015ff6) list_double_time_pane_vc_t3_ParamLimits

0xb4b2,	// (0x00015ff6) list_double_time_pane_vc_t3

0xb4c4,	// (0x00016008) list_double_time_pane_vc_t4_ParamLimits

0xb4c4,	// (0x00016008) list_double_time_pane_vc_t4

0x0003,

0xfa50,	// (0x0001a594) list_double_time_pane_vc_t_ParamLimits

0xfa50,	// (0x0001a594) list_double_time_pane_vc_t

0x784b,	// (0x0001238f) list_double_pane_vc_g1_ParamLimits

0x784b,	// (0x0001238f) list_double_pane_vc_g1

0x7857,	// (0x0001239b) list_double_pane_vc_g2_ParamLimits

0x7857,	// (0x0001239b) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_double_pane_vc_g

0xb4d8,	// (0x0001601c) list_double_pane_vc_t1_ParamLimits

0xb4d8,	// (0x0001601c) list_double_pane_vc_t1

0xb4ea,	// (0x0001602e) list_double_pane_vc_t2_ParamLimits

0xb4ea,	// (0x0001602e) list_double_pane_vc_t2

0x0001,

0xfa59,	// (0x0001a59d) list_double_pane_vc_t_ParamLimits

0xfa59,	// (0x0001a59d) list_double_pane_vc_t

0x784b,	// (0x0001238f) list_double_number_pane_vc_g1_ParamLimits

0x784b,	// (0x0001238f) list_double_number_pane_vc_g1

0x7857,	// (0x0001239b) list_double_number_pane_vc_g2_ParamLimits

0x7857,	// (0x0001239b) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x0001a10c) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x0001a10c) list_double_number_pane_vc_g

0xb502,	// (0x00016046) list_double_number_pane_vc_t1_ParamLimits

0xb502,	// (0x00016046) list_double_number_pane_vc_t1

0xb514,	// (0x00016058) list_double_number_pane_vc_t2_ParamLimits

0xb514,	// (0x00016058) list_double_number_pane_vc_t2

0xb526,	// (0x0001606a) list_double_number_pane_vc_t3_ParamLimits

0xb526,	// (0x0001606a) list_double_number_pane_vc_t3

0x0002,

0xfa5e,	// (0x0001a5a2) list_double_number_pane_vc_t_ParamLimits

0xfa5e,	// (0x0001a5a2) list_double_number_pane_vc_t

0xb53e,	// (0x00016082) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb53e,	// (0x00016082) list_double_large_graphic_pane_vc_g1

0xb55a,	// (0x0001609e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb55a,	// (0x0001609e) list_double_large_graphic_pane_vc_g2

0xb56e,	// (0x000160b2) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb56e,	// (0x000160b2) list_double_large_graphic_pane_vc_g3

0xb57d,	// (0x000160c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb57d,	// (0x000160c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa65,	// (0x0001a5a9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa65,	// (0x0001a5a9) list_double_large_graphic_pane_vc_g

0xb58c,	// (0x000160d0) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb58c,	// (0x000160d0) list_double_large_graphic_pane_vc_t1

0xb5a6,	// (0x000160ea) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb5a6,	// (0x000160ea) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6e,	// (0x0001a5b2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6e,	// (0x0001a5b2) list_double_large_graphic_pane_vc_t

0xb17a,	// (0x00015cbe) list_double_heading_pane_vc_g1_ParamLimits

0xb17a,	// (0x00015cbe) list_double_heading_pane_vc_g1

0xb186,	// (0x00015cca) list_double_heading_pane_vc_g2_ParamLimits

0xb186,	// (0x00015cca) list_double_heading_pane_vc_g2

0x0001,

0xfa73,	// (0x0001a5b7) list_double_heading_pane_vc_g_ParamLimits

0xfa73,	// (0x0001a5b7) list_double_heading_pane_vc_g

0xb5c8,	// (0x0001610c) list_double_heading_pane_vc_t1_ParamLimits

0xb5c8,	// (0x0001610c) list_double_heading_pane_vc_t1

0x94c8,	// (0x0001400c) list_double_heading_pane_vc_t2_ParamLimits

0x94c8,	// (0x0001400c) list_double_heading_pane_vc_t2

0x0001,

0xfa78,	// (0x0001a5bc) list_double_heading_pane_vc_t_ParamLimits

0xfa78,	// (0x0001a5bc) list_double_heading_pane_vc_t

0xb5dc,	// (0x00016120) list_double_graphic_pane_vc_g1_ParamLimits

0xb5dc,	// (0x00016120) list_double_graphic_pane_vc_g1

0xb5e8,	// (0x0001612c) list_double_graphic_pane_vc_g2_ParamLimits

0xb5e8,	// (0x0001612c) list_double_graphic_pane_vc_g2

0x784b,	// (0x0001238f) list_double_graphic_pane_vc_g3_ParamLimits

0x784b,	// (0x0001238f) list_double_graphic_pane_vc_g3

0x0003,

0xfa7d,	// (0x0001a5c1) list_double_graphic_pane_vc_g_ParamLimits

0xfa7d,	// (0x0001a5c1) list_double_graphic_pane_vc_g

0xb605,	// (0x00016149) list_double_graphic_pane_vc_t1_ParamLimits

0xb605,	// (0x00016149) list_double_graphic_pane_vc_t1

0xb623,	// (0x00016167) list_double_graphic_pane_vc_t2_ParamLimits

0xb623,	// (0x00016167) list_double_graphic_pane_vc_t2

0x0001,

0xfa86,	// (0x0001a5ca) list_double_graphic_pane_vc_t_ParamLimits

0xfa86,	// (0x0001a5ca) list_double_graphic_pane_vc_t

0x49bc,	// (0x0000f500) aid_size_cell_fastswap

0x49c4,	// (0x0000f508) aid_size_cell_touch_ParamLimits

0x49c4,	// (0x0000f508) aid_size_cell_touch

0x4c29,	// (0x0000f76d) popup_fast_swap_wide_window_ParamLimits

0x4c29,	// (0x0000f76d) popup_fast_swap_wide_window

0x4d2f,	// (0x0000f873) touch_pane_ParamLimits

0x4d2f,	// (0x0000f873) touch_pane

0x7d09,	// (0x0001284d) button_value_adjust_pane_cp2

0x7d09,	// (0x0001284d) button_value_adjust_pane_cp4

0x7d29,	// (0x0001286d) form_field_data_pane_cp2

0x7d48,	// (0x0001288c) form_field_data_wide_pane_cp2

0x83a7,	// (0x00012eeb) bg_scroll_pane_ParamLimits

0x4fbf,	// (0x0000fb03) scroll_handle_pane_ParamLimits

0x4fd3,	// (0x0000fb17) scroll_sc2_down_pane_ParamLimits

0x4fd3,	// (0x0000fb17) scroll_sc2_down_pane

0x83d8,	// (0x00012f1c) scroll_sc2_up_pane_ParamLimits

0x83d8,	// (0x00012f1c) scroll_sc2_up_pane

0xbadb,	// (0x0001661f) grid_wheel_folder_pane_g1_ParamLimits

0xbadb,	// (0x0001661f) grid_wheel_folder_pane_g1

0x518f,	// (0x0000fcd3) clock_nsta_pane_cp2_ParamLimits

0x518f,	// (0x0000fcd3) clock_nsta_pane_cp2

0x8125,	// (0x00012c69) listscroll_midp_pane_ParamLimits

0x8c2a,	// (0x0001376e) midp_canvas_pane

0x8f0e,	// (0x00013a52) nsta_clock_indic_pane

0x8f4a,	// (0x00013a8e) listscroll_form_pane_vc

0x8f52,	// (0x00013a96) listscroll_set_pane_vc_ParamLimits

0x8f52,	// (0x00013a96) listscroll_set_pane_vc

0x905b,	// (0x00013b9f) clock_nsta_pane

0x90d0,	// (0x00013c14) indicator_nsta_pane

0x93a8,	// (0x00013eec) bg_popup_sub_pane_cp2_ParamLimits

0x93bc,	// (0x00013f00) find_pane_cp2_ParamLimits

0x93bc,	// (0x00013f00) find_pane_cp2

0x93d2,	// (0x00013f16) grid_toobar_pane_ParamLimits

0x9578,	// (0x000140bc) list_form_gen_pane_vc_ParamLimits

0x9578,	// (0x000140bc) list_form_gen_pane_vc

0x958e,	// (0x000140d2) scroll_pane_cp8_vc_ParamLimits

0x958e,	// (0x000140d2) scroll_pane_cp8_vc

0x960a,	// (0x0001414e) data_form_wide_pane_vc_ParamLimits

0x960a,	// (0x0001414e) data_form_wide_pane_vc

0x9616,	// (0x0001415a) form_field_data_wide_pane_vc_g1

0x961e,	// (0x00014162) form_field_data_wide_pane_vc_t1_ParamLimits

0x961e,	// (0x00014162) form_field_data_wide_pane_vc_t1

0x7de3,	// (0x00012927) input_focus_pane_cp6_vc_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_cp6_vc

0x99a1,	// (0x000144e5) list_midp_pane_ParamLimits

0x99ad,	// (0x000144f1) scroll_pane_cp16_ParamLimits

0x99ad,	// (0x000144f1) scroll_pane_cp16

0x99fb,	// (0x0001453f) button_value_adjust_pane_ParamLimits

0x99fb,	// (0x0001453f) button_value_adjust_pane

0xa97c,	// (0x000154c0) button_value_adjust_pane_cp6_ParamLimits

0xa97c,	// (0x000154c0) button_value_adjust_pane_cp6

0xaa9e,	// (0x000155e2) settings_code_pane_cp_ParamLimits

0xaa9e,	// (0x000155e2) settings_code_pane_cp

0x6f3a,	// (0x00011a7e) cell_touch_pane_g1

0x6f3a,	// (0x00011a7e) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x0001a242) cell_touch_pane_g

0xb14d,	// (0x00015c91) cell_touch_pane_cp_ParamLimits

0xb14d,	// (0x00015c91) cell_touch_pane_cp

0xb15d,	// (0x00015ca1) cell_touch_pane_ParamLimits

0xb15d,	// (0x00015ca1) cell_touch_pane

0x6f3a,	// (0x00011a7e) scroll_sc2_down_pane_g1

0x6f3a,	// (0x00011a7e) scroll_sc2_up_pane_g1

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp4_vc

0xb1c6,	// (0x00015d0a) list_set_graphic_pane_vc_g1_ParamLimits

0xb1c6,	// (0x00015d0a) list_set_graphic_pane_vc_g1

0x7a10,	// (0x00012554) list_set_graphic_pane_vc_g2_ParamLimits

0x7a10,	// (0x00012554) list_set_graphic_pane_vc_g2

0x0001,

0xf9f5,	// (0x0001a539) list_set_graphic_pane_vc_g_ParamLimits

0xf9f5,	// (0x0001a539) list_set_graphic_pane_vc_g

0xb1d2,	// (0x00015d16) text_primary_small_cp13_vc_ParamLimits

0xb1d2,	// (0x00015d16) text_primary_small_cp13_vc

0xb1ea,	// (0x00015d2e) list_set_graphic_pane_vc_ParamLimits

0xb1ea,	// (0x00015d2e) list_set_graphic_pane_vc

0x6f44,	// (0x00011a88) input_focus_pane_cp2_vc

0x6f3a,	// (0x00011a7e) setting_code_pane_vc_g1

0x706f,	// (0x00011bb3) setting_code_pane_vc_t1

0xb1fe,	// (0x00015d42) set_text_pane_vc_t1_ParamLimits

0xb1fe,	// (0x00015d42) set_text_pane_vc_t1

0x6f44,	// (0x00011a88) input_focus_pane_cp1_vc

0xb21b,	// (0x00015d5f) list_set_text_pane_vc

0x6f3a,	// (0x00011a7e) setting_text_pane_vc_g1

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp2_vc

0x7066,	// (0x00011baa) setting_slider_graphic_pane_vc_g1

0xb225,	// (0x00015d69) setting_slider_graphic_pane_vc_t1

0xb235,	// (0x00015d79) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fa,	// (0x0001a53e) setting_slider_graphic_pane_vc_t

0xb245,	// (0x00015d89) slider_set_pane_cp_vc

0xb24d,	// (0x00015d91) slider_set_pane_vc_g1

0xb256,	// (0x00015d9a) slider_set_pane_vc_g2

0x0006,

0xf9ff,	// (0x0001a543) slider_set_pane_vc_g

0x7f10,	// (0x00012a54) set_opt_bg_pane_g1_copy1

0x7f18,	// (0x00012a5c) set_opt_bg_pane_g2_copy1

0xb282,	// (0x00015dc6) set_opt_bg_pane_g3_copy1

0x7f28,	// (0x00012a6c) set_opt_bg_pane_g4_copy1

0x7f30,	// (0x00012a74) set_opt_bg_pane_g5_copy1

0x7f38,	// (0x00012a7c) set_opt_bg_pane_g6_copy1

0xb28a,	// (0x00015dce) set_opt_bg_pane_g7_copy1

0xb294,	// (0x00015dd8) set_opt_bg_pane_g8_copy1

0xb29c,	// (0x00015de0) set_opt_bg_pane_g9_copy1

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp_vc

0xb2a4,	// (0x00015de8) setting_slider_pane_vc_t1

0xb2b3,	// (0x00015df7) setting_slider_pane_vc_t2

0xb2c3,	// (0x00015e07) setting_slider_pane_vc_t3

0x0002,

0xfa0e,	// (0x0001a552) setting_slider_pane_vc_t

0xb2d3,	// (0x00015e17) slider_set_pane_vc

0x5b71,	// (0x000106b5) volume_set_pane_vc_g1

0x5e60,	// (0x000109a4) volume_set_pane_vc_g2

0x5e69,	// (0x000109ad) volume_set_pane_vc_g3

0x5e72,	// (0x000109b6) volume_set_pane_vc_g4

0x5e7b,	// (0x000109bf) volume_set_pane_vc_g5

0x5e84,	// (0x000109c8) volume_set_pane_vc_g6

0x5b9e,	// (0x000106e2) volume_set_pane_vc_g7

0x5e8d,	// (0x000109d1) volume_set_pane_vc_g8

0x5e96,	// (0x000109da) volume_set_pane_vc_g9

0x5e9f,	// (0x000109e3) volume_set_pane_vc_g10

0x0009,

0xfa15,	// (0x0001a559) volume_set_pane_vc_g

0xb2db,	// (0x00015e1f) volume_set_pane_vc

0xb2e3,	// (0x00015e27) button_value_adjust_pane_cp1_vc

0xb2ed,	// (0x00015e31) list_highlight_pane_cp2_vc

0xb2f6,	// (0x00015e3a) list_set_pane_vc_ParamLimits

0xb2f6,	// (0x00015e3a) list_set_pane_vc

0xb354,	// (0x00015e98) main_pane_set_vc_t1_ParamLimits

0xb354,	// (0x00015e98) main_pane_set_vc_t1

0xb369,	// (0x00015ead) main_pane_set_vc_t2_ParamLimits

0xb369,	// (0x00015ead) main_pane_set_vc_t2

0xb37b,	// (0x00015ebf) main_pane_set_vc_t3_ParamLimits

0xb37b,	// (0x00015ebf) main_pane_set_vc_t3

0xb38d,	// (0x00015ed1) main_pane_set_vc_t4_ParamLimits

0xb38d,	// (0x00015ed1) main_pane_set_vc_t4

0x0003,

0xfa2a,	// (0x0001a56e) main_pane_set_vc_t_ParamLimits

0xfa2a,	// (0x0001a56e) main_pane_set_vc_t

0xb39f,	// (0x00015ee3) setting_code_pane_vc_ParamLimits

0xb39f,	// (0x00015ee3) setting_code_pane_vc

0xb3ae,	// (0x00015ef2) setting_slider_graphic_pane_vc

0xb3ae,	// (0x00015ef2) setting_slider_pane_vc

0xb3ae,	// (0x00015ef2) setting_text_pane_vc

0xb3ae,	// (0x00015ef2) setting_volume_pane_vc

0xb3b6,	// (0x00015efa) scroll_pane_cp121_vc

0x7cf7,	// (0x0001283b) set_content_pane_vc

0xb64d,	// (0x00016191) button_value_adjust_pane_g1

0xb656,	// (0x0001619a) button_value_adjust_pane_g2

0x0001,

0xfa8b,	// (0x0001a5cf) button_value_adjust_pane_g

0xb65f,	// (0x000161a3) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb65f,	// (0x000161a3) form_field_slider_wide_pane_vc_t1

0xb673,	// (0x000161b7) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb673,	// (0x000161b7) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa90,	// (0x0001a5d4) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0001a5d4) form_field_slider_wide_pane_vc_t

0x72b9,	// (0x00011dfd) input_focus_pane_cp10_vc_ParamLimits

0x72b9,	// (0x00011dfd) input_focus_pane_cp10_vc

0xb69f,	// (0x000161e3) slider_cont_pane_cp1_vc_ParamLimits

0xb69f,	// (0x000161e3) slider_cont_pane_cp1_vc

0xb6af,	// (0x000161f3) slider_form_pane_g1_cp2

0xb256,	// (0x00015d9a) slider_form_pane_g2_cp2

0xb6dc,	// (0x00016220) form_field_slider_pane_vc_t3

0xb6ea,	// (0x0001622e) form_field_slider_pane_vc_t4

0xb6f8,	// (0x0001623c) slider_form_pane_vc_ParamLimits

0xb6f8,	// (0x0001623c) slider_form_pane_vc

0xb705,	// (0x00016249) form_field_slider_pane_vc_t1_ParamLimits

0xb705,	// (0x00016249) form_field_slider_pane_vc_t1

0xb673,	// (0x000161b7) form_field_slider_pane_vc_t2_ParamLimits

0xb673,	// (0x000161b7) form_field_slider_pane_vc_t2

0x0001,

0xfaa2,	// (0x0001a5e6) form_field_slider_pane_vc_t_ParamLimits

0xfaa2,	// (0x0001a5e6) form_field_slider_pane_vc_t

0x72b9,	// (0x00011dfd) input_focus_pane_cp9_vc_ParamLimits

0x72b9,	// (0x00011dfd) input_focus_pane_cp9_vc

0xb721,	// (0x00016265) slider_cont_pane_vc_ParamLimits

0xb721,	// (0x00016265) slider_cont_pane_vc

0xb733,	// (0x00016277) list_form_graphic_pane_cp_vc_ParamLimits

0xb733,	// (0x00016277) list_form_graphic_pane_cp_vc

0x9616,	// (0x0001415a) form_field_popup_wide_pane_vc_g1

0xb748,	// (0x0001628c) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb748,	// (0x0001628c) form_field_popup_wide_pane_vc_t1

0x7de3,	// (0x00012927) input_focus_pane_cp8_vc_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_cp8_vc

0xb78d,	// (0x000162d1) list_form_wide_pane_vc_ParamLimits

0xb78d,	// (0x000162d1) list_form_wide_pane_vc

0xb799,	// (0x000162dd) list_form_graphic_pane_vc_g1

0xb7a1,	// (0x000162e5) list_form_graphic_pane_vc_t1_ParamLimits

0xb7a1,	// (0x000162e5) list_form_graphic_pane_vc_t1

0x7024,	// (0x00011b68) list_highlight_pane_cp5_vc_ParamLimits

0x7024,	// (0x00011b68) list_highlight_pane_cp5_vc

0xb7bd,	// (0x00016301) list_form_graphic_pane_vc_ParamLimits

0xb7bd,	// (0x00016301) list_form_graphic_pane_vc

0x9616,	// (0x0001415a) form_field_popup_pane_vc_g1

0xb7d3,	// (0x00016317) form_field_popup_pane_vc_t1_ParamLimits

0xb7d3,	// (0x00016317) form_field_popup_pane_vc_t1

0x7de3,	// (0x00012927) input_focus_pane_cp7_vc_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_cp7_vc

0xb7ea,	// (0x0001632e) list_form_pane_vc_ParamLimits

0xb7ea,	// (0x0001632e) list_form_pane_vc

0xb7f6,	// (0x0001633a) data_form_pane_vc_t1_ParamLimits

0xb7f6,	// (0x0001633a) data_form_pane_vc_t1

0x7f10,	// (0x00012a54) input_focus_pane_vc_g1

0x7f18,	// (0x00012a5c) input_focus_pane_vc_g2

0x7f20,	// (0x00012a64) input_focus_pane_vc_g3

0x7f28,	// (0x00012a6c) input_focus_pane_vc_g4

0x7f30,	// (0x00012a74) input_focus_pane_vc_g5

0x7f38,	// (0x00012a7c) input_focus_pane_vc_g6

0x7f40,	// (0x00012a84) input_focus_pane_vc_g7

0x7f48,	// (0x00012a8c) input_focus_pane_vc_g8

0x7f50,	// (0x00012a94) input_focus_pane_vc_g9

0x6f3a,	// (0x00011a7e) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x0001a1cb) input_focus_pane_vc_g

0x960a,	// (0x0001414e) data_form_pane_vc_ParamLimits

0x960a,	// (0x0001414e) data_form_pane_vc

0x9616,	// (0x0001415a) form_field_data_pane_vc_g1

0xb811,	// (0x00016355) form_field_data_pane_vc_t1_ParamLimits

0xb811,	// (0x00016355) form_field_data_pane_vc_t1

0x7de3,	// (0x00012927) input_focus_pane_vc_ParamLimits

0x7de3,	// (0x00012927) input_focus_pane_vc

0xb82b,	// (0x0001636f) button_value_adjust_pane_cp3_vc

0xb833,	// (0x00016377) button_value_adjust_pane_cp5_vc

0xb83b,	// (0x0001637f) form_field_data_pane_vc_ParamLimits

0xb83b,	// (0x0001637f) form_field_data_pane_vc

0xb852,	// (0x00016396) form_field_data_pane_vc_cp2

0xb85a,	// (0x0001639e) form_field_data_wide_pane_vc_ParamLimits

0xb85a,	// (0x0001639e) form_field_data_wide_pane_vc

0xb870,	// (0x000163b4) form_field_data_wide_pane_vc_cp2

0xb878,	// (0x000163bc) form_field_popup_pane_vc_ParamLimits

0xb878,	// (0x000163bc) form_field_popup_pane_vc

0xb88f,	// (0x000163d3) form_field_popup_wide_pane_vc_ParamLimits

0xb88f,	// (0x000163d3) form_field_popup_wide_pane_vc

0xb8a5,	// (0x000163e9) form_field_slider_pane_vc_ParamLimits

0xb8a5,	// (0x000163e9) form_field_slider_pane_vc

0xb8b8,	// (0x000163fc) form_field_slider_wide_pane_vc_ParamLimits

0xb8b8,	// (0x000163fc) form_field_slider_wide_pane_vc

0xb8cb,	// (0x0001640f) grid_touch_1_pane_ParamLimits

0xb8cb,	// (0x0001640f) grid_touch_1_pane

0xb8d7,	// (0x0001641b) grid_touch_2_pane_ParamLimits

0xb8d7,	// (0x0001641b) grid_touch_2_pane

0x8ed9,	// (0x00013a1d) touch_pane_g1_ParamLimits

0x8ed9,	// (0x00013a1d) touch_pane_g1

0xb8ef,	// (0x00016433) cell_app_pane_cp_wide_ParamLimits

0xb8ef,	// (0x00016433) cell_app_pane_cp_wide

0xb900,	// (0x00016444) grid_popup_fast_wide_pane_ParamLimits

0xb900,	// (0x00016444) grid_popup_fast_wide_pane

0xb914,	// (0x00016458) scroll_pane_cp19_ParamLimits

0xb914,	// (0x00016458) scroll_pane_cp19

0x6f44,	// (0x00011a88) bg_popup_window_pane_cp20

0xb928,	// (0x0001646c) listscroll_popup_fast_wide_pane

0x7024,	// (0x00011b68) grid_indicator_nsta_pane

0xb930,	// (0x00016474) clock_nsta_pane_g1

0xb939,	// (0x0001647d) clock_nsta_pane_t1

0xb955,	// (0x00016499) cell_indicator_nsta_pane_ParamLimits

0xb955,	// (0x00016499) cell_indicator_nsta_pane

0xb986,	// (0x000164ca) cell_indicator_nsta_pane_g1

0xb994,	// (0x000164d8) cell_indicator_nsta_pane_g2

0x0001,

0xfab3,	// (0x0001a5f7) cell_indicator_nsta_pane_g

0xb9a1,	// (0x000164e5) clock_nsta_pane_cp

0xb9a9,	// (0x000164ed) indicator_nsta_pane_cp

0xb9b1,	// (0x000164f5) nsta_clock_indic_pane_g1

0x7107,	// (0x00011c4b) grid_indicator_pane

0x84cd,	// (0x00013011) scroll_pane_cp29

0x50de,	// (0x0000fc22) indicator_nsta_pane_cp2_ParamLimits

0x50de,	// (0x0000fc22) indicator_nsta_pane_cp2

0x7024,	// (0x00011b68) main_apps_wheel_pane

0x9886,	// (0x000143ca) form_midp_field_text_pane_ParamLimits

0x99cd,	// (0x00014511) scroll_bar_cp050_ParamLimits

0xba12,	// (0x00016556) cell_indicator_pane_ParamLimits

0xba12,	// (0x00016556) cell_indicator_pane

0xba2d,	// (0x00016571) cell_indicator_pane_g1

0xba37,	// (0x0001657b) grid_wheel_folder_pane_ParamLimits

0xba37,	// (0x0001657b) grid_wheel_folder_pane

0xba4d,	// (0x00016591) list_wheel_apps_pane_ParamLimits

0xba4d,	// (0x00016591) list_wheel_apps_pane

0xba5e,	// (0x000165a2) main_apps_wheel_pane_g1_ParamLimits

0xba5e,	// (0x000165a2) main_apps_wheel_pane_g1

0xba72,	// (0x000165b6) main_apps_wheel_pane_g2_ParamLimits

0xba72,	// (0x000165b6) main_apps_wheel_pane_g2

0x0001,

0xfacf,	// (0x0001a613) main_apps_wheel_pane_g_ParamLimits

0xfacf,	// (0x0001a613) main_apps_wheel_pane_g

0xba8a,	// (0x000165ce) main_apps_wheel_pane_t1_ParamLimits

0xba8a,	// (0x000165ce) main_apps_wheel_pane_t1

0xbaad,	// (0x000165f1) list_wheel_apps_pane_g1

0xbab5,	// (0x000165f9) list_wheel_apps_pane_g2

0xbabd,	// (0x00016601) list_wheel_apps_pane_g3

0xbac7,	// (0x0001660b) list_wheel_apps_pane_g4

0xbad1,	// (0x00016615) list_wheel_apps_pane_g5

0x0004,

0xfad4,	// (0x0001a618) list_wheel_apps_pane_g

0x8aae,	// (0x000135f2) navi_icon_text_pane

0x8f8e,	// (0x00013ad2) aid_fill_nsta

0xbaf4,	// (0x00016638) navi_icon_text_pane_g1

0xbb00,	// (0x00016644) navi_icon_text_pane_t1

0x8945,	// (0x00013489) list_set_graphic_pane_t1_ParamLimits

0x8945,	// (0x00013489) list_set_graphic_pane_t1

0xa11f,	// (0x00014c63) popup_midp_note_alarm_window_t6_ParamLimits

0xa11f,	// (0x00014c63) popup_midp_note_alarm_window_t6

0xa131,	// (0x00014c75) popup_midp_note_alarm_window_t7_ParamLimits

0xa131,	// (0x00014c75) popup_midp_note_alarm_window_t7

0xa143,	// (0x00014c87) popup_midp_note_alarm_window_t8_ParamLimits

0xa143,	// (0x00014c87) popup_midp_note_alarm_window_t8

0xa155,	// (0x00014c99) popup_midp_note_alarm_window_t9_ParamLimits

0xa155,	// (0x00014c99) popup_midp_note_alarm_window_t9

0xa167,	// (0x00014cab) popup_midp_note_alarm_window_t10_ParamLimits

0xa167,	// (0x00014cab) popup_midp_note_alarm_window_t10

0xa179,	// (0x00014cbd) popup_midp_note_alarm_window_t11_ParamLimits

0xa179,	// (0x00014cbd) popup_midp_note_alarm_window_t11

0xa18b,	// (0x00014ccf) scroll_pane_cp17_ParamLimits

0xa18b,	// (0x00014ccf) scroll_pane_cp17

0x5b71,	// (0x000106b5) volume_small_pane_cp_g1

0x5ea8,	// (0x000109ec) volume_small_pane_cp_g2

0x5eb1,	// (0x000109f5) volume_small_pane_cp_g3

0x5b83,	// (0x000106c7) volume_small_pane_cp_g4

0x5eba,	// (0x000109fe) volume_small_pane_cp_g5

0x5e7b,	// (0x000109bf) volume_small_pane_cp_g6

0x5b95,	// (0x000106d9) volume_small_pane_cp_g7

0x5ec3,	// (0x00010a07) volume_small_pane_cp_g8

0x5ecc,	// (0x00010a10) volume_small_pane_cp_g9

0x5ba7,	// (0x000106eb) volume_small_pane_cp_g10

0x8cf7,	// (0x0001383b) midp_ticker_pane_g1_ParamLimits

0x8d03,	// (0x00013847) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x0001a297) midp_ticker_pane_g_ParamLimits

0x8d0f,	// (0x00013853) midp_ticker_pane_t1_ParamLimits

0x8fa4,	// (0x00013ae8) aid_fill_nsta_2

0x99b9,	// (0x000144fd) list_form2_midp_pane

0xab1c,	// (0x00015660) midp_editing_number_pane_ParamLimits

0xab2b,	// (0x0001566f) midp_ticker_pane_ParamLimits

0xbb12,	// (0x00016656) form2_midp_field_pane

0xbb36,	// (0x0001667a) scroll_pane_cp51

0xbb56,	// (0x0001669a) form2_midp_button_pane_ParamLimits

0xbb56,	// (0x0001669a) form2_midp_button_pane

0xbb68,	// (0x000166ac) form2_midp_content_pane_ParamLimits

0xbb68,	// (0x000166ac) form2_midp_content_pane

0xbb82,	// (0x000166c6) form2_midp_field_choice_group_pane

0xbb8a,	// (0x000166ce) form2_midp_field_pane_g1

0xbb92,	// (0x000166d6) form2_midp_field_pane_g2

0xbb9a,	// (0x000166de) form2_midp_field_pane_g3

0xbba2,	// (0x000166e6) form2_midp_field_pane_g4

0x0003,

0xfaf9,	// (0x0001a63d) form2_midp_field_pane_g

0xbbaa,	// (0x000166ee) form2_midp_gauge_slider_pane

0xbbb2,	// (0x000166f6) form2_midp_gauge_wait_pane

0xbbba,	// (0x000166fe) form2_midp_image_pane_ParamLimits

0xbbba,	// (0x000166fe) form2_midp_image_pane

0xbbd5,	// (0x00016719) form2_midp_label_pane_ParamLimits

0xbbd5,	// (0x00016719) form2_midp_label_pane

0xbbee,	// (0x00016732) form2_midp_label_pane_cp_ParamLimits

0xbbee,	// (0x00016732) form2_midp_label_pane_cp

0xbc0f,	// (0x00016753) form2_midp_string_pane_ParamLimits

0xbc0f,	// (0x00016753) form2_midp_string_pane

0xbc21,	// (0x00016765) form2_midp_text_pane_ParamLimits

0xbc21,	// (0x00016765) form2_midp_text_pane

0xbc3c,	// (0x00016780) form2_midp_time_pane

0xbc4c,	// (0x00016790) input_focus_pane_cp51_ParamLimits

0xbc4c,	// (0x00016790) input_focus_pane_cp51

0xbc64,	// (0x000167a8) form2_midp_label_pane_t1_ParamLimits

0xbc64,	// (0x000167a8) form2_midp_label_pane_t1

0xbca4,	// (0x000167e8) form2_mdip_text_pane_t1_ParamLimits

0xbca4,	// (0x000167e8) form2_mdip_text_pane_t1

0xbcc0,	// (0x00016804) form2_midp_time_pane_t1

0xbcdb,	// (0x0001681f) form2_midp_gauge_slider_pane_t1

0xbced,	// (0x00016831) form2_midp_gauge_slider_pane_t2

0xbcff,	// (0x00016843) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb02,	// (0x0001a646) form2_midp_gauge_slider_pane_t

0xbd11,	// (0x00016855) form2_midp_slider_pane

0xbd1d,	// (0x00016861) form2_midp_gauge_wait_pane_t1

0xbd2b,	// (0x0001686f) form2_midp_wait_pane_ParamLimits

0xbd2b,	// (0x0001686f) form2_midp_wait_pane

0xbd57,	// (0x0001689b) list_single_2graphic_pane_cp4_ParamLimits

0xbd57,	// (0x0001689b) list_single_2graphic_pane_cp4

0x9685,	// (0x000141c9) list_single_midp_graphic_pane_cp_ParamLimits

0x9685,	// (0x000141c9) list_single_midp_graphic_pane_cp

0x6f44,	// (0x00011a88) list_highlight_pane_cp20

0xbd85,	// (0x000168c9) list_single_2graphic_pane_g1_cp4

0xb052,	// (0x00015b96) list_single_2graphic_pane_g2_cp4

0xbd8d,	// (0x000168d1) list_single_2graphic_pane_t1_cp4

0x7024,	// (0x00011b68) list_highlight_pane_cp21

0xbd9c,	// (0x000168e0) list_single_midp_graphic_pane_g4_cp

0xbdab,	// (0x000168ef) list_single_midp_graphic_pane_t1_cp

0xbdc0,	// (0x00016904) form2_mdip_string_pane_t1_ParamLimits

0xbdc0,	// (0x00016904) form2_mdip_string_pane_t1

0x6f44,	// (0x00011a88) bg_wml_button_pane_cp2

0x6f3a,	// (0x00011a7e) form2_midp_image_pane_g1

0x7ad3,	// (0x00012617) list_double_large_graphic_pane_g5_ParamLimits

0x7ad3,	// (0x00012617) list_double_large_graphic_pane_g5

0x8125,	// (0x00012c69) midp_form_pane_ParamLimits

0x7024,	// (0x00011b68) main_apps_wheel_pane_ParamLimits

0x57bb,	// (0x000102ff) popup_preview_window_ParamLimits

0x57bb,	// (0x000102ff) popup_preview_window

0x5972,	// (0x000104b6) popup_touch_info_window_ParamLimits

0x5972,	// (0x000104b6) popup_touch_info_window

0x5990,	// (0x000104d4) popup_touch_menu_window_ParamLimits

0x5990,	// (0x000104d4) popup_touch_menu_window

0x6f30,	// (0x00011a74) bg_popup_sub_pane_cp6

0xbee3,	// (0x00016a27) list_touch_menu_pane

0xbeeb,	// (0x00016a2f) list_single_touch_menu_pane_ParamLimits

0xbeeb,	// (0x00016a2f) list_single_touch_menu_pane

0xbeff,	// (0x00016a43) list_single_touch_menu_pane_t1

0x7024,	// (0x00011b68) bg_popup_sub_pane_cp7_ParamLimits

0x7024,	// (0x00011b68) bg_popup_sub_pane_cp7

0xbf0d,	// (0x00016a51) heading_sub_pane

0xbf15,	// (0x00016a59) list_touch_info_pane_ParamLimits

0xbf15,	// (0x00016a59) list_touch_info_pane

0xbf24,	// (0x00016a68) list_single_touch_info_pane_ParamLimits

0xbf24,	// (0x00016a68) list_single_touch_info_pane

0xbf36,	// (0x00016a7a) list_single_touch_info_pane_t1

0xbf44,	// (0x00016a88) list_single_touch_info_pane_t2

0x0001,

0xfb10,	// (0x0001a654) list_single_touch_info_pane_t

0x8c22,	// (0x00013766) bg_popup_heading_pane_cp

0xbf52,	// (0x00016a96) heading_sub_pane_t1

0x95a4,	// (0x000140e8) bg_popup_preview_window_pane_cp_ParamLimits

0x95a4,	// (0x000140e8) bg_popup_preview_window_pane_cp

0xbf0d,	// (0x00016a51) heading_preview_pane

0xbf15,	// (0x00016a59) list_preview_pane_ParamLimits

0xbf15,	// (0x00016a59) list_preview_pane

0xbf60,	// (0x00016aa4) popup_preview_window_g1

0xbf24,	// (0x00016a68) list_single_preview_pane_ParamLimits

0xbf24,	// (0x00016a68) list_single_preview_pane

0xbf68,	// (0x00016aac) list_single_preview_pane_g1

0xbf70,	// (0x00016ab4) list_single_preview_pane_t1

0xbf36,	// (0x00016a7a) list_single_preview_pane_t2

0x0001,

0xfb15,	// (0x0001a659) list_single_preview_pane_t

0xbf7e,	// (0x00016ac2) bg_popup_heading_pane_cp2_ParamLimits

0xbf7e,	// (0x00016ac2) bg_popup_heading_pane_cp2

0xbf94,	// (0x00016ad8) heading_preview_pane_g1

0xbf9c,	// (0x00016ae0) heading_preview_pane_t1_ParamLimits

0xbf9c,	// (0x00016ae0) heading_preview_pane_t1

0x712a,	// (0x00011c6e) soft_indicator_pane_t1_ParamLimits

0x780b,	// (0x0001234f) scroll_pane_ParamLimits

0x83c6,	// (0x00012f0a) scroll_sc2_left_pane

0x83cf,	// (0x00012f13) scroll_sc2_right_pane

0x83ee,	// (0x00012f32) scroll_bg_pane_g1_ParamLimits

0x8403,	// (0x00012f47) scroll_bg_pane_g2_ParamLimits

0x841b,	// (0x00012f5f) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x0001a222) scroll_bg_pane_g_ParamLimits

0x83ee,	// (0x00012f32) scroll_handle_pane_g1_ParamLimits

0x843d,	// (0x00012f81) scroll_handle_pane_g2_ParamLimits

0x841b,	// (0x00012f5f) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001a229) scroll_handle_pane_g_ParamLimits

0x5442,	// (0x0000ff86) popup_choice_list_window_ParamLimits

0x5442,	// (0x0000ff86) popup_choice_list_window

0x93b4,	// (0x00013ef8) choice_list_pane

0x944c,	// (0x00013f90) cell_toolbar_pane_t1

0x9474,	// (0x00013fb8) toolbar_button_pane_ParamLimits

0xa645,	// (0x00015189) ai_gene_pane_1_t2_ParamLimits

0xa645,	// (0x00015189) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001a44c) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001a44c) ai_gene_pane_1_t

0xbfb9,	// (0x00016afd) scroll_sc2_left_pane_g1

0xbfb9,	// (0x00016afd) scroll_sc2_right_pane_g1

0x8f64,	// (0x00013aa8) bg_popup_sub_pane_cp10

0xbfc3,	// (0x00016b07) list_choice_list_pane

0xbfdc,	// (0x00016b20) list_single_choice_list_pane_ParamLimits

0xbfdc,	// (0x00016b20) list_single_choice_list_pane

0xbfef,	// (0x00016b33) list_single_choice_list_pane_g1

0x80d5,	// (0x00012c19) list_single_choice_list_pane_t1_ParamLimits

0x80d5,	// (0x00012c19) list_single_choice_list_pane_t1

0xbff7,	// (0x00016b3b) choice_list_pane_g1

0xbfff,	// (0x00016b43) choice_list_pane_t1

0x6f30,	// (0x00011a74) input_focus_pane_cp11

0x82a9,	// (0x00012ded) title_pane_stacon_g2_ParamLimits

0x82a9,	// (0x00012ded) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x0001a208) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001a208) title_pane_stacon_g

0x8c22,	// (0x00013766) cursor_press_pane

0x54ea,	// (0x0001002e) popup_fep_hwr_window_ParamLimits

0x54ea,	// (0x0001002e) popup_fep_hwr_window

0x5562,	// (0x000100a6) popup_fep_vkb_window_ParamLimits

0x5562,	// (0x000100a6) popup_fep_vkb_window

0xc00d,	// (0x00016b51) cursor_press_pane_g1

0x0002,

0xfb3e,	// (0x0001a682) fep_vkb_side_pane_g_ParamLimits

0x5f0e,	// (0x00010a52) fep_hwr_candidate_pane_ParamLimits

0x5f0e,	// (0x00010a52) fep_hwr_candidate_pane

0x5f38,	// (0x00010a7c) fep_hwr_side_pane_ParamLimits

0x5f38,	// (0x00010a7c) fep_hwr_side_pane

0x5f58,	// (0x00010a9c) fep_hwr_top_pane_ParamLimits

0x5f58,	// (0x00010a9c) fep_hwr_top_pane

0x5f70,	// (0x00010ab4) fep_hwr_write_pane_ParamLimits

0x5f70,	// (0x00010ab4) fep_hwr_write_pane

0xfb3e,	// (0x0001a682) fep_vkb_side_pane_g

0xc015,	// (0x00016b59) fep_hwr_top_pane_g1

0xc027,	// (0x00016b6b) fep_hwr_top_pane_g2

0x5faa,	// (0x00010aee) fep_hwr_top_pane_g3

0x0002,

0xfb1a,	// (0x0001a65e) fep_hwr_top_pane_g

0x5fbf,	// (0x00010b03) fep_hwr_top_text_pane

0x8593,	// (0x000130d7) fep_hwr_top_text_pane_g1

0xc05d,	// (0x00016ba1) fep_hwr_top_text_pane_t1

0x60b5,	// (0x00010bf9) fep_hwr_candidate_pane_g1

0xc2a0,	// (0x00016de4) fep_vkb_keypad_pane_g3_ParamLimits

0xc2a0,	// (0x00016de4) fep_vkb_keypad_pane_g3

0xc2c8,	// (0x00016e0c) fep_vkb_keypad_pane_g4_ParamLimits

0xc2c8,	// (0x00016e0c) fep_vkb_keypad_pane_g4

0xc337,	// (0x00016e7b) fep_vkb_bottom_pane_g2_ParamLimits

0xc337,	// (0x00016e7b) fep_vkb_bottom_pane_g2

0x0001,

0xfb45,	// (0x0001a689) fep_vkb_bottom_pane_g_ParamLimits

0xfb45,	// (0x0001a689) fep_vkb_bottom_pane_g

0xbfb9,	// (0x00016afd) cell_vkb_side_pane_g2

0x0001,

0xfb4f,	// (0x0001a693) cell_vkb_side_pane_g

0xc3c2,	// (0x00016f06) cell_vkb_side_pane_t1

0xc3d0,	// (0x00016f14) cell_vkb_side_pane_t1_copy1

0xbfb9,	// (0x00016afd) bg_fep_vkb_candidate_pane_g2

0xc4fc,	// (0x00017040) cell_vkb_candidate_pane_ParamLimits

0xc06b,	// (0x00016baf) aid_size_cell_vkb_ParamLimits

0xc06b,	// (0x00016baf) aid_size_cell_vkb

0xc4fc,	// (0x00017040) cell_vkb_candidate_pane

0x60dc,	// (0x00010c20) bg_popup_fep_shadow_pane_g1

0xc0f7,	// (0x00016c3b) fep_vkb_bottom_pane_ParamLimits

0xc0f7,	// (0x00016c3b) fep_vkb_bottom_pane

0xc12d,	// (0x00016c71) fep_vkb_candidate_pane_ParamLimits

0xc12d,	// (0x00016c71) fep_vkb_candidate_pane

0xc149,	// (0x00016c8d) fep_vkb_keypad_pane_ParamLimits

0xc149,	// (0x00016c8d) fep_vkb_keypad_pane

0xc188,	// (0x00016ccc) fep_vkb_side_pane_ParamLimits

0xc188,	// (0x00016ccc) fep_vkb_side_pane

0xc1c4,	// (0x00016d08) fep_vkb_top_pane_ParamLimits

0xc1c4,	// (0x00016d08) fep_vkb_top_pane

0xc1f9,	// (0x00016d3d) fep_vkb_top_pane_g1_ParamLimits

0xc1f9,	// (0x00016d3d) fep_vkb_top_pane_g1

0xc208,	// (0x00016d4c) fep_vkb_top_pane_g2_ParamLimits

0xc208,	// (0x00016d4c) fep_vkb_top_pane_g2

0xc217,	// (0x00016d5b) fep_vkb_top_pane_g3_ParamLimits

0xc217,	// (0x00016d5b) fep_vkb_top_pane_g3

0x0003,

0xfb35,	// (0x0001a679) fep_vkb_top_pane_g_ParamLimits

0xfb35,	// (0x0001a679) fep_vkb_top_pane_g

0xc235,	// (0x00016d79) fep_vkb_top_text_pane_ParamLimits

0xc235,	// (0x00016d79) fep_vkb_top_text_pane

0xc246,	// (0x00016d8a) fep_vkb_side_pane_g1_ParamLimits

0xc246,	// (0x00016d8a) fep_vkb_side_pane_g1

0xc28f,	// (0x00016dd3) grid_vkb_side_pane_ParamLimits

0xc28f,	// (0x00016dd3) grid_vkb_side_pane

0x60e4,	// (0x00010c28) bg_popup_fep_shadow_pane_g2

0x60ed,	// (0x00010c31) bg_popup_fep_shadow_pane_g3

0x60f5,	// (0x00010c39) bg_popup_fep_shadow_pane_g4

0x60fe,	// (0x00010c42) bg_popup_fep_shadow_pane_g5

0x6108,	// (0x00010c4c) bg_popup_fep_shadow_pane_g6

0x6110,	// (0x00010c54) bg_popup_fep_shadow_pane_g7

0x7f28,	// (0x00012a6c) bg_popup_fep_shadow_pane_g8

0xc2e6,	// (0x00016e2a) grid_vkb_keypad_number_pane_ParamLimits

0xc2e6,	// (0x00016e2a) grid_vkb_keypad_number_pane

0xc2f6,	// (0x00016e3a) grid_vkb_keypad_pane_ParamLimits

0xc2f6,	// (0x00016e3a) grid_vkb_keypad_pane

0xc31c,	// (0x00016e60) fep_vkb_bottom_pane_g1_ParamLimits

0xc31c,	// (0x00016e60) fep_vkb_bottom_pane_g1

0xc345,	// (0x00016e89) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc345,	// (0x00016e89) grid_vkb_keypad_bottom_left_pane

0xc35a,	// (0x00016e9e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc35a,	// (0x00016e9e) grid_vkb_keypad_bottom_right_pane

0xc36f,	// (0x00016eb3) fep_vkb_top_text_pane_g1

0xc38a,	// (0x00016ece) fep_vkb_top_text_pane_t1

0xc39f,	// (0x00016ee3) cell_vkb_side_pane_ParamLimits

0xc39f,	// (0x00016ee3) cell_vkb_side_pane

0xbfb9,	// (0x00016afd) cell_vkb_side_pane_g1

0xc3de,	// (0x00016f22) cell_vkb_keypad_pane_ParamLimits

0xc3de,	// (0x00016f22) cell_vkb_keypad_pane

0xc453,	// (0x00016f97) cell_vkb_keypad_pane_g1

0x0008,

0xfb62,	// (0x0001a6a6) bg_popup_fep_shadow_pane_g

0x6122,	// (0x00010c66) cell_hwr_side_pane_g1

0x6122,	// (0x00010c66) cell_hwr_side_pane_g2

0xc45d,	// (0x00016fa1) cell_vkb_keypad_pane_t1

0xc46b,	// (0x00016faf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc46b,	// (0x00016faf) cell_vkb_keypad_bottom_left_pane

0xc488,	// (0x00016fcc) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc488,	// (0x00016fcc) cell_vkb_keypad_bottom_right_pane

0xbfb9,	// (0x00016afd) cell_vkb_keypad_bottom_left_pane_g1

0xbfb9,	// (0x00016afd) cell_vkb_keypad_bottom_right_pane_g1

0xc4c1,	// (0x00017005) cell_vkb_keypad_number_pane_ParamLimits

0xc4c1,	// (0x00017005) cell_vkb_keypad_number_pane

0xc4e0,	// (0x00017024) cell_vkb_keypad_number_pane_g1

0xc4ea,	// (0x0001702e) cell_vkb_keypad_number_pane_g2

0xc4f3,	// (0x00017037) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb54,	// (0x0001a698) cell_vkb_keypad_number_pane_g

0xc45d,	// (0x00016fa1) cell_vkb_keypad_number_pane_t1

0xc517,	// (0x0001705b) fep_vkb_candidate_pane_g1

0x0001,

0xfb75,	// (0x0001a6b9) cell_hwr_side_pane_g

0xc530,	// (0x00017074) cell_hwr_side_pane_t1

0x612c,	// (0x00010c70) cell_hwr_side_pane_t1_copy1

0x613a,	// (0x00010c7e) cell_hwr_candidate_pane_g1

0x6169,	// (0x00010cad) cell_hwr_candidate_pane_t1

0xbfb9,	// (0x00016afd) cell_vkb_candidate_pane_g2

0xc574,	// (0x000170b8) cell_vkb_candidate_pane_t1

0x5ed5,	// (0x00010a19) bg_popup_fep_shadow_pane_ParamLimits

0x5ed5,	// (0x00010a19) bg_popup_fep_shadow_pane

0x5f8a,	// (0x00010ace) bg_fep_hwr_top_pane_g4

0xc039,	// (0x00016b7d) bg_hwr_side_pane_g1_ParamLimits

0xc039,	// (0x00016b7d) bg_hwr_side_pane_g1

0x5ffb,	// (0x00010b3f) cell_hwr_side_pane_ParamLimits

0x5ffb,	// (0x00010b3f) cell_hwr_side_pane

0x6036,	// (0x00010b7a) fep_hwr_write_pane_g1_ParamLimits

0x6036,	// (0x00010b7a) fep_hwr_write_pane_g1

0x6043,	// (0x00010b87) fep_hwr_write_pane_g2_ParamLimits

0x6043,	// (0x00010b87) fep_hwr_write_pane_g2

0x6050,	// (0x00010b94) fep_hwr_write_pane_g3_ParamLimits

0x6050,	// (0x00010b94) fep_hwr_write_pane_g3

0x605e,	// (0x00010ba2) fep_hwr_write_pane_g4_ParamLimits

0x605e,	// (0x00010ba2) fep_hwr_write_pane_g4

0x0005,

0xfb21,	// (0x0001a665) fep_hwr_write_pane_g_ParamLimits

0xfb21,	// (0x0001a665) fep_hwr_write_pane_g

0x5f8a,	// (0x00010ace) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5f8a,	// (0x00010ace) bg_fep_hwr_candidate_pane_g2

0x6073,	// (0x00010bb7) cell_hwr_candidate_pane_ParamLimits

0x6073,	// (0x00010bb7) cell_hwr_candidate_pane

0x60b5,	// (0x00010bf9) fep_hwr_candidate_pane_g1_ParamLimits

0xc099,	// (0x00016bdd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc099,	// (0x00016bdd) bg_popup_fep_shadow_pane_cp2

0xc227,	// (0x00016d6b) fep_vkb_top_pane_g4_ParamLimits

0xc227,	// (0x00016d6b) fep_vkb_top_pane_g4

0xc26d,	// (0x00016db1) fep_vkb_side_pane_g2_ParamLimits

0xc26d,	// (0x00016db1) fep_vkb_side_pane_g2

0x7c11,	// (0x00012755) list_setting_pane_t4_ParamLimits

0x7c11,	// (0x00012755) list_setting_pane_t4

0x7c8b,	// (0x000127cf) list_setting_number_pane_t5_ParamLimits

0x7c8b,	// (0x000127cf) list_setting_number_pane_t5

0x85da,	// (0x0001311e) list_double_heading_pane_cp2_ParamLimits

0x85da,	// (0x0001311e) list_double_heading_pane_cp2

0x7a5c,	// (0x000125a0) list_double_heading_pane_g1_cp2_ParamLimits

0x7a5c,	// (0x000125a0) list_double_heading_pane_g1_cp2

0x7e09,	// (0x0001294d) list_double_heading_pane_g2_cp2_ParamLimits

0x7e09,	// (0x0001294d) list_double_heading_pane_g2_cp2

0xc582,	// (0x000170c6) list_double_heading_pane_t1_cp2_ParamLimits

0xc582,	// (0x000170c6) list_double_heading_pane_t1_cp2

0xc598,	// (0x000170dc) list_double_heading_pane_t2_cp2_ParamLimits

0xc598,	// (0x000170dc) list_double_heading_pane_t2_cp2

0x6f18,	// (0x00011a5c) aid_value_unit2

0x4c75,	// (0x0000f7b9) popup_preview_fixed_window

0x72c7,	// (0x00011e0b) bg_popup_preview_window_pane_cp02

0xc5aa,	// (0x000170ee) list_preview_fixed_pane

0xc5f0,	// (0x00017134) list_empty_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_empty_pane_fp

0xc5f0,	// (0x00017134) list_single_cale_day_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_cale_day_pane_fp

0xc5f0,	// (0x00017134) list_single_graphic_heading_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_graphic_heading_pane_fp

0xc5f0,	// (0x00017134) list_single_graphic_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_graphic_pane_fp

0xc5f0,	// (0x00017134) list_single_heading_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_heading_pane_fp

0xc5f0,	// (0x00017134) list_single_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_pane_fp

0xc606,	// (0x0001714a) list_single_pane_fp_g1_ParamLimits

0xc606,	// (0x0001714a) list_single_pane_fp_g1

0x7a5c,	// (0x000125a0) list_single_pane_fp_g2_ParamLimits

0x7a5c,	// (0x000125a0) list_single_pane_fp_g2

0x7e09,	// (0x0001294d) list_single_pane_fp_g3_ParamLimits

0x7e09,	// (0x0001294d) list_single_pane_fp_g3

0xc612,	// (0x00017156) list_single_pane_fp_g4_ParamLimits

0xc612,	// (0x00017156) list_single_pane_fp_g4

0x0003,

0xfb88,	// (0x0001a6cc) list_single_pane_fp_g_ParamLimits

0xfb88,	// (0x0001a6cc) list_single_pane_fp_g

0xc61e,	// (0x00017162) list_single_pane_fp_t1_ParamLimits

0xc61e,	// (0x00017162) list_single_pane_fp_t1

0xc635,	// (0x00017179) list_single_graphic_pane_fp_g1_ParamLimits

0xc635,	// (0x00017179) list_single_graphic_pane_fp_g1

0xc606,	// (0x0001714a) list_single_graphic_pane_fp_g2_ParamLimits

0xc606,	// (0x0001714a) list_single_graphic_pane_fp_g2

0x7a5c,	// (0x000125a0) list_single_graphic_pane_fp_g3_ParamLimits

0x7a5c,	// (0x000125a0) list_single_graphic_pane_fp_g3

0x7e09,	// (0x0001294d) list_single_graphic_pane_fp_g4_ParamLimits

0x7e09,	// (0x0001294d) list_single_graphic_pane_fp_g4

0xc612,	// (0x00017156) list_single_graphic_pane_fp_g5_ParamLimits

0xc612,	// (0x00017156) list_single_graphic_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6d5) list_single_graphic_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6d5) list_single_graphic_pane_fp_g

0xc641,	// (0x00017185) list_single_graphic_pane_fp_t1_ParamLimits

0xc641,	// (0x00017185) list_single_graphic_pane_fp_t1

0xc635,	// (0x00017179) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc635,	// (0x00017179) list_single_graphic_heading_pane_fp_g1

0xc606,	// (0x0001714a) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc606,	// (0x0001714a) list_single_graphic_heading_pane_fp_g2

0x7a5c,	// (0x000125a0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7a5c,	// (0x000125a0) list_single_graphic_heading_pane_fp_g3

0x7e09,	// (0x0001294d) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7e09,	// (0x0001294d) list_single_graphic_heading_pane_fp_g4

0xc612,	// (0x00017156) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc612,	// (0x00017156) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6d5) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6d5) list_single_graphic_heading_pane_fp_g

0xc657,	// (0x0001719b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc657,	// (0x0001719b) list_single_graphic_heading_pane_fp_t1

0xc66d,	// (0x000171b1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc66d,	// (0x000171b1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb9c,	// (0x0001a6e0) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb9c,	// (0x0001a6e0) list_single_graphic_heading_pane_fp_t

0xc67f,	// (0x000171c3) list_single_cale_day_pane_fp_g1_ParamLimits

0xc67f,	// (0x000171c3) list_single_cale_day_pane_fp_g1

0xc6b7,	// (0x000171fb) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6b7,	// (0x000171fb) list_single_cale_day_pane_fp_g2

0xc6c3,	// (0x00017207) list_single_cale_day_pane_fp_g3_ParamLimits

0xc6c3,	// (0x00017207) list_single_cale_day_pane_fp_g3

0xc6eb,	// (0x0001722f) list_single_cale_day_pane_fp_g4_ParamLimits

0xc6eb,	// (0x0001722f) list_single_cale_day_pane_fp_g4

0xc70f,	// (0x00017253) list_single_cale_day_pane_fp_g5_ParamLimits

0xc70f,	// (0x00017253) list_single_cale_day_pane_fp_g5

0x0004,

0xfba1,	// (0x0001a6e5) list_single_cale_day_pane_fp_g_ParamLimits

0xfba1,	// (0x0001a6e5) list_single_cale_day_pane_fp_g

0xc733,	// (0x00017277) list_single_cale_day_pane_fp_t1_ParamLimits

0xc733,	// (0x00017277) list_single_cale_day_pane_fp_t1

0xc759,	// (0x0001729d) list_single_cale_day_pane_fp_t2_ParamLimits

0xc759,	// (0x0001729d) list_single_cale_day_pane_fp_t2

0xc772,	// (0x000172b6) list_single_cale_day_pane_fp_t3_ParamLimits

0xc772,	// (0x000172b6) list_single_cale_day_pane_fp_t3

0x0002,

0xfbac,	// (0x0001a6f0) list_single_cale_day_pane_fp_t_ParamLimits

0xfbac,	// (0x0001a6f0) list_single_cale_day_pane_fp_t

0xc606,	// (0x0001714a) list_empty_pane_fp_g1_ParamLimits

0xc606,	// (0x0001714a) list_empty_pane_fp_g1

0xc78b,	// (0x000172cf) list_empty_pane_fp_t1

0xc799,	// (0x000172dd) list_empty_pane_fp_t2

0x0001,

0xfbb3,	// (0x0001a6f7) list_empty_pane_fp_t

0xc606,	// (0x0001714a) list_single_heading_pane_fp_g1_ParamLimits

0xc606,	// (0x0001714a) list_single_heading_pane_fp_g1

0x7a5c,	// (0x000125a0) list_single_heading_pane_fp_g2_ParamLimits

0x7a5c,	// (0x000125a0) list_single_heading_pane_fp_g2

0x7e09,	// (0x0001294d) list_single_heading_pane_fp_g3_ParamLimits

0x7e09,	// (0x0001294d) list_single_heading_pane_fp_g3

0x0002,

0xfbb8,	// (0x0001a6fc) list_single_heading_pane_fp_g_ParamLimits

0xfbb8,	// (0x0001a6fc) list_single_heading_pane_fp_g

0xc7a7,	// (0x000172eb) list_single_heading_pane_fp_t1_ParamLimits

0xc7a7,	// (0x000172eb) list_single_heading_pane_fp_t1

0xc7b9,	// (0x000172fd) list_single_heading_pane_fp_t2_ParamLimits

0xc7b9,	// (0x000172fd) list_single_heading_pane_fp_t2

0x0001,

0xfbbf,	// (0x0001a703) list_single_heading_pane_fp_t_ParamLimits

0xfbbf,	// (0x0001a703) list_single_heading_pane_fp_t

0x8143,	// (0x00012c87) aid_size_cell_fast

0x7237,	// (0x00011d7b) soft_indicator_pane_cp1_t1

0x817d,	// (0x00012cc1) cell_app_pane_cp2_ParamLimits

0x817d,	// (0x00012cc1) cell_app_pane_cp2

0x5ef7,	// (0x00010a3b) fep_hwr_candidate_drop_down_list_pane

0x60cf,	// (0x00010c13) fep_hwr_candidate_pane_g3_ParamLimits

0x60cf,	// (0x00010c13) fep_hwr_candidate_pane_g3

0x401a,	// (0x0000eb5e) fep_hwr_candidate_pane_g4_ParamLimits

0x401a,	// (0x0000eb5e) fep_hwr_candidate_pane_g4

0x0002,

0xfb2e,	// (0x0001a672) fep_hwr_candidate_pane_g_ParamLimits

0xfb2e,	// (0x0001a672) fep_hwr_candidate_pane_g

0xc11c,	// (0x00016c60) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc11c,	// (0x00016c60) fep_vkb_candidate_drop_down_list_pane

0xc51f,	// (0x00017063) fep_vkb_candidate_pane_g3

0xc527,	// (0x0001706b) fep_vkb_candidate_pane_g4

0x0002,

0xfb5b,	// (0x0001a69f) fep_vkb_candidate_pane_g

0x613a,	// (0x00010c7e) cell_hwr_candidate_pane_g1_ParamLimits

0x6148,	// (0x00010c8c) cell_hwr_candidate_pane_g3_ParamLimits

0x6148,	// (0x00010c8c) cell_hwr_candidate_pane_g3

0xe189,	// (0x00018ccd) cell_hwr_candidate_pane_g4_ParamLimits

0xe189,	// (0x00018ccd) cell_hwr_candidate_pane_g4

0x0002,

0xfb7a,	// (0x0001a6be) cell_hwr_candidate_pane_g_ParamLimits

0xfb7a,	// (0x0001a6be) cell_hwr_candidate_pane_g

0xc53e,	// (0x00017082) cell_vkb_candidate_pane_g3_ParamLimits

0xc53e,	// (0x00017082) cell_vkb_candidate_pane_g3

0xc559,	// (0x0001709d) cell_vkb_candidate_pane_g4_ParamLimits

0xc559,	// (0x0001709d) cell_vkb_candidate_pane_g4

0xc7cf,	// (0x00017313) cell_app_pane_cp2_g1_ParamLimits

0xc7cf,	// (0x00017313) cell_app_pane_cp2_g1

0xc7ed,	// (0x00017331) cell_app_pane_cp2_g2_ParamLimits

0xc7ed,	// (0x00017331) cell_app_pane_cp2_g2

0x0001,

0xfbc4,	// (0x0001a708) cell_app_pane_cp2_g_ParamLimits

0xfbc4,	// (0x0001a708) cell_app_pane_cp2_g

0xc7f9,	// (0x0001733d) cell_app_pane_cp2_t1_ParamLimits

0xc7f9,	// (0x0001733d) cell_app_pane_cp2_t1

0x7de3,	// (0x00012927) grid_highlight_pane_cp1_ParamLimits

0x7de3,	// (0x00012927) grid_highlight_pane_cp1

0x6187,	// (0x00010ccb) cell_hwr_candidate_pane_cp1_ParamLimits

0x6187,	// (0x00010ccb) cell_hwr_candidate_pane_cp1

0x613a,	// (0x00010c7e) fep_hwr_candidate_drop_down_list_pane_g1

0x61a6,	// (0x00010cea) fep_hwr_candidate_drop_down_list_pane_g2

0x61b3,	// (0x00010cf7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc9,	// (0x0001a70d) fep_hwr_candidate_drop_down_list_pane_g

0x61c0,	// (0x00010d04) fep_hwr_candidate_drop_down_list_scroll_pane

0x61c9,	// (0x00010d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x61c9,	// (0x00010d0d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x61d6,	// (0x00010d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x61d6,	// (0x00010d1a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x61e3,	// (0x00010d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x61e3,	// (0x00010d27) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x61f0,	// (0x00010d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x61f0,	// (0x00010d34) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x620b,	// (0x00010d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x620b,	// (0x00010d4f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6226,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6226,	// (0x00010d6a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6241,	// (0x00010d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6241,	// (0x00010d85) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x625c,	// (0x00010da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x625c,	// (0x00010da0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd0,	// (0x0001a714) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd0,	// (0x0001a714) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc80b,	// (0x0001734f) cell_vkb_candidate_pane_cp1_ParamLimits

0xc80b,	// (0x0001734f) cell_vkb_candidate_pane_cp1

0xc227,	// (0x00016d6b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc227,	// (0x00016d6b) fep_vkb_candidate_drop_down_list_pane_g1

0xc82b,	// (0x0001736f) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc82b,	// (0x0001736f) fep_vkb_candidate_drop_down_list_pane_g2

0xc838,	// (0x0001737c) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc838,	// (0x0001737c) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbe1,	// (0x0001a725) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbe1,	// (0x0001a725) fep_vkb_candidate_drop_down_list_pane_g

0xc845,	// (0x00017389) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc845,	// (0x00017389) fep_vkb_candidate_drop_down_list_scroll_pane

0xc852,	// (0x00017396) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc852,	// (0x00017396) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc85f,	// (0x000173a3) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc85f,	// (0x000173a3) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc86b,	// (0x000173af) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc86b,	// (0x000173af) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc877,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc877,	// (0x000173bb) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc898,	// (0x000173dc) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc898,	// (0x000173dc) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc8b9,	// (0x000173fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc8b9,	// (0x000173fd) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc8da,	// (0x0001741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc8da,	// (0x0001741e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc8fb,	// (0x0001743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc8fb,	// (0x0001743f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe8,	// (0x0001a72c) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe8,	// (0x0001a72c) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x6f4e,	// (0x00011a92) title_pane_g1_ParamLimits

0x6f5b,	// (0x00011a9f) title_pane_g2_ParamLimits

0xf54e,	// (0x0001a092) title_pane_g_ParamLimits

0x8583,	// (0x000130c7) aid_call2_pane

0x858b,	// (0x000130cf) aid_call_pane

0x8593,	// (0x000130d7) popup_clock_analogue_window_g1

0x8593,	// (0x000130d7) popup_clock_analogue_window_g2

0x4fe8,	// (0x0000fb2c) popup_clock_analogue_window_g3

0x4ff1,	// (0x0000fb35) popup_clock_analogue_window_g4

0x6f3a,	// (0x00011a7e) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x0001a237) popup_clock_analogue_window_g

0x4ff9,	// (0x0000fb3d) popup_clock_analogue_window_t1

0x5007,	// (0x0000fb4b) clock_digital_number_pane_ParamLimits

0x5007,	// (0x0000fb4b) clock_digital_number_pane

0x5013,	// (0x0000fb57) clock_digital_number_pane_cp02_ParamLimits

0x5013,	// (0x0000fb57) clock_digital_number_pane_cp02

0x501f,	// (0x0000fb63) clock_digital_number_pane_cp03_ParamLimits

0x501f,	// (0x0000fb63) clock_digital_number_pane_cp03

0x502b,	// (0x0000fb6f) clock_digital_number_pane_cp04_ParamLimits

0x502b,	// (0x0000fb6f) clock_digital_number_pane_cp04

0x5037,	// (0x0000fb7b) clock_digital_separator_pane_ParamLimits

0x5037,	// (0x0000fb7b) clock_digital_separator_pane

0x5043,	// (0x0000fb87) popup_clock_digital_window_t1_ParamLimits

0x5043,	// (0x0000fb87) popup_clock_digital_window_t1

0x6f3a,	// (0x00011a7e) clock_digital_number_pane_g1

0x6f3a,	// (0x00011a7e) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x0001a242) clock_digital_number_pane_g

0x6f3a,	// (0x00011a7e) clock_digital_separator_pane_g1

0x6f3a,	// (0x00011a7e) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x0001a242) clock_digital_separator_pane_g

0x8f8e,	// (0x00013ad2) aid_fill_nsta_ParamLimits

0x90d0,	// (0x00013c14) indicator_nsta_pane_ParamLimits

0x9249,	// (0x00013d8d) popup_clock_analogue_window

0x9249,	// (0x00013d8d) popup_clock_digital_window

0x7024,	// (0x00011b68) grid_indicator_nsta_pane_ParamLimits

0xb947,	// (0x0001648b) clock_nsta_pane_t2

0x0001,

0xfaae,	// (0x0001a5f2) clock_nsta_pane_t

0x4fac,	// (0x0000faf0) aid_size_max_handle

0x4fb6,	// (0x0000fafa) aid_size_min_handle

0x8c22,	// (0x00013766) editor_scroll_pane

0xc916,	// (0x0001745a) ex_editor_pane

0x80b1,	// (0x00012bf5) scroll_pane_cp13

0x7837,	// (0x0001237b) scroll_pane_cp14

0x85c2,	// (0x00013106) scroll_pane_cp36

0x85ee,	// (0x00013132) list_single_graphic_hl_pane_cp2_ParamLimits

0x85ee,	// (0x00013132) list_single_graphic_hl_pane_cp2

0xac14,	// (0x00015758) list_single_graphic_hl_pane_ParamLimits

0xac14,	// (0x00015758) list_single_graphic_hl_pane

0xc91e,	// (0x00017462) aid_size_min_hl_cp1

0xc927,	// (0x0001746b) list_highlight_pane_cp34_ParamLimits

0xc927,	// (0x0001746b) list_highlight_pane_cp34

0xc938,	// (0x0001747c) list_single_graphic_hl_pane_g1_ParamLimits

0xc938,	// (0x0001747c) list_single_graphic_hl_pane_g1

0xc945,	// (0x00017489) list_single_graphic_hl_pane_g2_ParamLimits

0xc945,	// (0x00017489) list_single_graphic_hl_pane_g2

0xc945,	// (0x00017489) list_single_graphic_hl_pane_g3_ParamLimits

0xc945,	// (0x00017489) list_single_graphic_hl_pane_g3

0xb17a,	// (0x00015cbe) list_single_graphic_hl_pane_g4_ParamLimits

0xb17a,	// (0x00015cbe) list_single_graphic_hl_pane_g4

0xc951,	// (0x00017495) list_single_graphic_hl_pane_g5_ParamLimits

0xc951,	// (0x00017495) list_single_graphic_hl_pane_g5

0x0004,

0xfbf9,	// (0x0001a73d) list_single_graphic_hl_pane_g_ParamLimits

0xfbf9,	// (0x0001a73d) list_single_graphic_hl_pane_g

0xc965,	// (0x000174a9) list_single_graphic_hl_pane_t1_ParamLimits

0xc965,	// (0x000174a9) list_single_graphic_hl_pane_t1

0xc97b,	// (0x000174bf) aid_size_min_hl_cp2

0xc984,	// (0x000174c8) list_highlight_pane_cp34_cp2_ParamLimits

0xc984,	// (0x000174c8) list_highlight_pane_cp34_cp2

0xc938,	// (0x0001747c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc938,	// (0x0001747c) list_single_graphic_hl_pane_g1_cp2

0xc991,	// (0x000174d5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc991,	// (0x000174d5) list_single_graphic_hl_pane_g2_cp2

0xc99d,	// (0x000174e1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc99d,	// (0x000174e1) list_single_graphic_hl_pane_g3_cp2

0x784b,	// (0x0001238f) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x784b,	// (0x0001238f) list_single_graphic_hl_pane_g4_cp2

0xc9ab,	// (0x000174ef) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc9ab,	// (0x000174ef) list_single_graphic_hl_pane_g5_cp2

0x52ee,	// (0x0000fe32) control_pane_g4_ParamLimits

0x52ee,	// (0x0000fe32) control_pane_g4

0x8f64,	// (0x00013aa8) bg_popup_sub_pane_cp10_ParamLimits

0xbfc3,	// (0x00016b07) list_choice_list_pane_ParamLimits

0xbfd2,	// (0x00016b16) scroll_pane_cp23

0x72c7,	// (0x00011e0b) bg_popup_preview_window_pane_cp02_ParamLimits

0xc5aa,	// (0x000170ee) list_preview_fixed_pane_ParamLimits

0xc5c0,	// (0x00017104) list_preview_fixed_pane_cp_ParamLimits

0xc5c0,	// (0x00017104) list_preview_fixed_pane_cp

0xc5cc,	// (0x00017110) popup_preview_fixed_window_g1_ParamLimits

0xc5cc,	// (0x00017110) popup_preview_fixed_window_g1

0xc5d8,	// (0x0001711c) popup_preview_fixed_window_g2_ParamLimits

0xc5d8,	// (0x0001711c) popup_preview_fixed_window_g2

0x0002,

0xfb81,	// (0x0001a6c5) popup_preview_fixed_window_g_ParamLimits

0xfb81,	// (0x0001a6c5) popup_preview_fixed_window_g

0x4f20,	// (0x0000fa64) aid_navi_side_left_pane_ParamLimits

0x4f35,	// (0x0000fa79) aid_navi_side_right_pane_ParamLimits

0x4f4d,	// (0x0000fa91) navi_icon_pane_stacon_ParamLimits

0x4f61,	// (0x0000faa5) navi_navi_pane_stacon_ParamLimits

0x4f4d,	// (0x0000fa91) navi_text_pane_stacon_ParamLimits

0x4b44,	// (0x0000f688) main_text_info_pane

0xc9d5,	// (0x00017519) listscroll_text_info_pane

0xc9dd,	// (0x00017521) list_text_info_pane_ParamLimits

0xc9dd,	// (0x00017521) list_text_info_pane

0xc9ec,	// (0x00017530) scroll_pane_cp24_ParamLimits

0xc9ec,	// (0x00017530) scroll_pane_cp24

0xca0a,	// (0x0001754e) list_text_info_pane_t1_ParamLimits

0xca0a,	// (0x0001754e) list_text_info_pane_t1

0x545e,	// (0x0000ffa2) popup_fast_swap2_window_ParamLimits

0x545e,	// (0x0000ffa2) popup_fast_swap2_window

0xca3f,	// (0x00017583) aid_size_cell_fast2

0x6f30,	// (0x00011a74) bg_popup_window_pane_cp17

0x99e5,	// (0x00014529) heading_pane_cp2

0x750a,	// (0x0001204e) listscroll_fast2_pane

0xca49,	// (0x0001758d) grid_fast2_pane

0xca53,	// (0x00017597) listscroll_fast2_pane_g1

0xca5b,	// (0x0001759f) listscroll_fast2_pane_g2

0x0001,

0xfc04,	// (0x0001a748) listscroll_fast2_pane_g

0x80b1,	// (0x00012bf5) scroll_pane_cp26

0xca65,	// (0x000175a9) cell_fast2_pane_ParamLimits

0xca65,	// (0x000175a9) cell_fast2_pane

0xca7a,	// (0x000175be) cell_fast2_pane_g1

0xca83,	// (0x000175c7) cell_fast2_pane_g2

0xca8c,	// (0x000175d0) cell_fast2_pane_g3

0x0002,

0xfc09,	// (0x0001a74d) cell_fast2_pane_g

0x75f4,	// (0x00012138) grid_highlight_pane_cp9

0x5426,	// (0x0000ff6a) main_eswt_pane_ParamLimits

0x5426,	// (0x0000ff6a) main_eswt_pane

0xca01,	// (0x00017545) list_single_text_info_pane

0xca94,	// (0x000175d8) eswt_ctrl_button_pane

0xca94,	// (0x000175d8) eswt_ctrl_canvas_pane

0xca9c,	// (0x000175e0) eswt_ctrl_combo_pane

0xca94,	// (0x000175d8) eswt_ctrl_default_pane

0xca94,	// (0x000175d8) eswt_ctrl_label_pane

0xcaa4,	// (0x000175e8) eswt_ctrl_wait_pane

0xcaac,	// (0x000175f0) eswt_shell_pane

0x6f30,	// (0x00011a74) listscroll_eswt_app_pane

0xcacc,	// (0x00017610) popup_eswt_tasktip_window_ParamLimits

0xcacc,	// (0x00017610) popup_eswt_tasktip_window

0x95a4,	// (0x000140e8) bg_popup_window_pane_cp18

0xcadd,	// (0x00017621) eswt_control_pane_g1_ParamLimits

0xcadd,	// (0x00017621) eswt_control_pane_g1

0xcaea,	// (0x0001762e) eswt_control_pane_g2_ParamLimits

0xcaea,	// (0x0001762e) eswt_control_pane_g2

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_ParamLimits

0xcaf7,	// (0x0001763b) eswt_control_pane_g3

0xcb04,	// (0x00017648) eswt_control_pane_g4_ParamLimits

0xcb04,	// (0x00017648) eswt_control_pane_g4

0x0003,

0xfc10,	// (0x0001a754) eswt_control_pane_g_ParamLimits

0xfc10,	// (0x0001a754) eswt_control_pane_g

0x7de3,	// (0x00012927) bg_button_pane_ParamLimits

0x7de3,	// (0x00012927) bg_button_pane

0x7609,	// (0x0001214d) common_borders_pane_copy2_ParamLimits

0x7609,	// (0x0001214d) common_borders_pane_copy2

0xcb11,	// (0x00017655) control_button_pane_g1_ParamLimits

0xcb11,	// (0x00017655) control_button_pane_g1

0xcb1d,	// (0x00017661) control_button_pane_g2_ParamLimits

0xcb1d,	// (0x00017661) control_button_pane_g2

0xcb29,	// (0x0001766d) control_button_pane_g3_ParamLimits

0xcb29,	// (0x0001766d) control_button_pane_g3

0x0002,

0xfc19,	// (0x0001a75d) control_button_pane_g_ParamLimits

0xfc19,	// (0x0001a75d) control_button_pane_g

0xcb3d,	// (0x00017681) control_button_pane_t1

0xcb4b,	// (0x0001768f) control_button_pane_t2

0x0001,

0xfc20,	// (0x0001a764) control_button_pane_t

0x9480,	// (0x00013fc4) bg_button_pane_g1

0x9490,	// (0x00013fd4) bg_button_pane_g2

0x9488,	// (0x00013fcc) bg_button_pane_g3

0x94a0,	// (0x00013fe4) bg_button_pane_g4

0x9498,	// (0x00013fdc) bg_button_pane_g5

0x94a8,	// (0x00013fec) bg_button_pane_g6

0x94b0,	// (0x00013ff4) bg_button_pane_g7

0x94c0,	// (0x00014004) bg_button_pane_g8

0x94b8,	// (0x00013ffc) bg_button_pane_g9

0x0008,

0xf85c,	// (0x0001a3a0) bg_button_pane_g

0xbf7e,	// (0x00016ac2) common_borders_pane_ParamLimits

0xbf7e,	// (0x00016ac2) common_borders_pane

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy1_ParamLimits

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy1

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy1_ParamLimits

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy1

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy1_ParamLimits

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy1

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy1_ParamLimits

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy1

0xbfb9,	// (0x00016afd) bg_eswt_ctrl_canvas_pane_g1

0xbf7e,	// (0x00016ac2) common_borders_pane_cp2_ParamLimits

0xbf7e,	// (0x00016ac2) common_borders_pane_cp2

0xbf7e,	// (0x00016ac2) common_borders_pane_cp3_ParamLimits

0xbf7e,	// (0x00016ac2) common_borders_pane_cp3

0xcb59,	// (0x0001769d) separator_horizontal_pane

0xcb61,	// (0x000176a5) separator_vertical_pane

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy2_ParamLimits

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy2

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy2_ParamLimits

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy2

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy2_ParamLimits

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy2

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy2_ParamLimits

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy2

0x6f30,	// (0x00011a74) common_borders_pane_cp4

0xcb6a,	// (0x000176ae) separator_horizontal_pane_g1

0xcb73,	// (0x000176b7) separator_horizontal_pane_g2

0xcb7c,	// (0x000176c0) separator_horizontal_pane_g3

0x0002,

0xfc25,	// (0x0001a769) separator_horizontal_pane_g

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy3_ParamLimits

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy3

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy3_ParamLimits

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy3

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy3_ParamLimits

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy3

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy3_ParamLimits

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy3

0x6f30,	// (0x00011a74) common_borders_pane_cp5

0xcb85,	// (0x000176c9) separator_vertical_pane_g1

0xcb8e,	// (0x000176d2) separator_vertical_pane_g2

0xcb97,	// (0x000176db) separator_vertical_pane_g3

0x0002,

0xfc2c,	// (0x0001a770) separator_vertical_pane_g

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy4_ParamLimits

0xcadd,	// (0x00017621) eswt_control_pane_g1_copy4

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy4_ParamLimits

0xcaea,	// (0x0001762e) eswt_control_pane_g2_copy4

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy4_ParamLimits

0xcaf7,	// (0x0001763b) eswt_control_pane_g3_copy4

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy4_ParamLimits

0xcb04,	// (0x00017648) eswt_control_pane_g4_copy4

0xcba0,	// (0x000176e4) eswt_ctrl_combo_button_pane

0xcba8,	// (0x000176ec) eswt_ctrl_input_pane

0xcbb0,	// (0x000176f4) popup_choice_list_window_cp70

0xcbb8,	// (0x000176fc) eswt_ctrl_input_pane_t1

0x6f30,	// (0x00011a74) input_focus_pane_cp70

0xbf7e,	// (0x00016ac2) bg_button_pane_cp70_ParamLimits

0xbf7e,	// (0x00016ac2) bg_button_pane_cp70

0xcbc6,	// (0x0001770a) eswt_ctrl_combo_button_pane_g1

0xcbce,	// (0x00017712) wait_bar_pane_cp70

0x95a4,	// (0x000140e8) bg_popup_window_pane_cp70_ParamLimits

0x95a4,	// (0x000140e8) bg_popup_window_pane_cp70

0xcbd6,	// (0x0001771a) popup_eswt_tasktip_window_t1

0xcbec,	// (0x00017730) wait_bar_pane_cp71_ParamLimits

0xcbec,	// (0x00017730) wait_bar_pane_cp71

0xcbf8,	// (0x0001773c) grid_eswt_app_pane

0x83c6,	// (0x00012f0a) scroll_pane_cp70

0xcc01,	// (0x00017745) cell_eswt_app_pane_ParamLimits

0xcc01,	// (0x00017745) cell_eswt_app_pane

0xcc35,	// (0x00017779) cell_eswt_app_pane_g1_ParamLimits

0xcc35,	// (0x00017779) cell_eswt_app_pane_g1

0xcc64,	// (0x000177a8) cell_eswt_app_pane_g2_ParamLimits

0xcc64,	// (0x000177a8) cell_eswt_app_pane_g2

0x0001,

0xfc33,	// (0x0001a777) cell_eswt_app_pane_g_ParamLimits

0xfc33,	// (0x0001a777) cell_eswt_app_pane_g

0xcc88,	// (0x000177cc) cell_eswt_app_pane_t1_ParamLimits

0xcc88,	// (0x000177cc) cell_eswt_app_pane_t1

0xccba,	// (0x000177fe) grid_highlight_pane_cp70_ParamLimits

0xccba,	// (0x000177fe) grid_highlight_pane_cp70

0x8b03,	// (0x00013647) set_content_pane_g1

0x8ebd,	// (0x00013a01) status_small_volume_pane

0x6277,	// (0x00010dbb) status_small_volume_pane_g1

0x627f,	// (0x00010dc3) volume_small2_pane

0x6288,	// (0x00010dcc) volume_small2_pane_g1

0x6291,	// (0x00010dd5) volume_small2_pane_g2

0x629a,	// (0x00010dde) volume_small2_pane_g3

0x62a3,	// (0x00010de7) volume_small2_pane_g4

0x62ac,	// (0x00010df0) volume_small2_pane_g5

0x62b5,	// (0x00010df9) volume_small2_pane_g6

0x62be,	// (0x00010e02) volume_small2_pane_g7

0x62c7,	// (0x00010e0b) volume_small2_pane_g8

0x62d0,	// (0x00010e14) volume_small2_pane_g9

0x62d9,	// (0x00010e1d) volume_small2_pane_g10

0x0009,

0xfc38,	// (0x0001a77c) volume_small2_pane_g

0xc36f,	// (0x00016eb3) fep_vkb_top_text_pane_g1_ParamLimits

0xc38a,	// (0x00016ece) fep_vkb_top_text_pane_t1_ParamLimits

0xc5e4,	// (0x00017128) popup_preview_fixed_window_g3_ParamLimits

0xc5e4,	// (0x00017128) popup_preview_fixed_window_g3

0x5905,	// (0x00010449) popup_toolbar_trans_pane

0xa959,	// (0x0001549d) aid_height_set_list_ParamLimits

0xa96a,	// (0x000154ae) aid_size_parent_ParamLimits

0x8f64,	// (0x00013aa8) list_highlight_pane_cp2_ParamLimits

0x8b03,	// (0x00013647) set_content_pane_g1_ParamLimits

0xac33,	// (0x00015777) list_single_image_pane_ParamLimits

0xac33,	// (0x00015777) list_single_image_pane

0xccc6,	// (0x0001780a) aid_size_cell_image_ParamLimits

0xccc6,	// (0x0001780a) aid_size_cell_image

0xccd3,	// (0x00017817) grid_single_image_pane_ParamLimits

0xccd3,	// (0x00017817) grid_single_image_pane

0xccdf,	// (0x00017823) list_single_image_pane_g1_ParamLimits

0xccdf,	// (0x00017823) list_single_image_pane_g1

0xcceb,	// (0x0001782f) list_single_image_pane_g2_ParamLimits

0xcceb,	// (0x0001782f) list_single_image_pane_g2

0x0001,

0xfc4d,	// (0x0001a791) list_single_image_pane_g_ParamLimits

0xfc4d,	// (0x0001a791) list_single_image_pane_g

0xccff,	// (0x00017843) list_single_image_pane_t1_ParamLimits

0xccff,	// (0x00017843) list_single_image_pane_t1

0xcd15,	// (0x00017859) cell_image_list_pane_ParamLimits

0xcd15,	// (0x00017859) cell_image_list_pane

0xcd29,	// (0x0001786d) cell_image_list_pane_g1

0xcd32,	// (0x00017876) cell_image_list_pane_g2

0x0001,

0xfc52,	// (0x0001a796) cell_image_list_pane_g

0xcd3b,	// (0x0001787f) aid_size_cell_tb_trans_pane

0x7de3,	// (0x00012927) bg_tb_trans_pane

0xcd4d,	// (0x00017891) grid_tb_trans_pane

0x9480,	// (0x00013fc4) bg_tb_trans_pane_g1

0x9490,	// (0x00013fd4) bg_tb_trans_pane_g2

0x9488,	// (0x00013fcc) bg_tb_trans_pane_g3

0x94a0,	// (0x00013fe4) bg_tb_trans_pane_g4

0x9498,	// (0x00013fdc) bg_tb_trans_pane_g5

0x94c0,	// (0x00014004) bg_tb_trans_pane_g6

0x94b8,	// (0x00013ffc) bg_tb_trans_pane_g7

0x94a8,	// (0x00013fec) bg_tb_trans_pane_g8

0x94b0,	// (0x00013ff4) bg_tb_trans_pane_g9

0x0008,

0xfc57,	// (0x0001a79b) bg_tb_trans_pane_g

0xcd61,	// (0x000178a5) cell_toolbar_trans_pane_ParamLimits

0xcd61,	// (0x000178a5) cell_toolbar_trans_pane

0xbfb9,	// (0x00016afd) cell_toolbar_trans_pane_g1

0xbb1a,	// (0x0001665e) list_form2_midp_pane_t1

0xbb28,	// (0x0001666c) list_form2_midp_pane_t2

0x0001,

0xfaf4,	// (0x0001a638) list_form2_midp_pane_t

0xbb36,	// (0x0001667a) scroll_pane_cp51_ParamLimits

0xbd3c,	// (0x00016880) form2_midp_wait_pane_g1

0xbd45,	// (0x00016889) form2_midp_wait_pane_g2

0xbd4e,	// (0x00016892) form2_midp_wait_pane_g3

0x0002,

0xfb09,	// (0x0001a64d) form2_midp_wait_pane_g

0x7024,	// (0x00011b68) list_highlight_pane_cp21_ParamLimits

0xbd9c,	// (0x000168e0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbdab,	// (0x000168ef) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xabac,	// (0x000156f0) list_single_2graphic_im_pane_ParamLimits

0xabac,	// (0x000156f0) list_single_2graphic_im_pane

0xcd87,	// (0x000178cb) list_single_2graphic_im_pane_g1_ParamLimits

0xcd87,	// (0x000178cb) list_single_2graphic_im_pane_g1

0xcd98,	// (0x000178dc) list_single_2graphic_im_pane_g2_ParamLimits

0xcd98,	// (0x000178dc) list_single_2graphic_im_pane_g2

0xcda4,	// (0x000178e8) list_single_2graphic_im_pane_g3_ParamLimits

0xcda4,	// (0x000178e8) list_single_2graphic_im_pane_g3

0x0003,

0xfc6a,	// (0x0001a7ae) list_single_2graphic_im_pane_g_ParamLimits

0xfc6a,	// (0x0001a7ae) list_single_2graphic_im_pane_g

0xcdc4,	// (0x00017908) list_single_2graphic_im_pane_t1_ParamLimits

0xcdc4,	// (0x00017908) list_single_2graphic_im_pane_t1

0xc5f0,	// (0x00017134) list_single_graphic_2heading_pane_fp_ParamLimits

0xc5f0,	// (0x00017134) list_single_graphic_2heading_pane_fp

0xc635,	// (0x00017179) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc635,	// (0x00017179) list_single_graphic_2heading_pane_fp_g1

0xc606,	// (0x0001714a) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc606,	// (0x0001714a) list_single_graphic_2heading_pane_fp_g2

0x7a5c,	// (0x000125a0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7a5c,	// (0x000125a0) list_single_graphic_2heading_pane_fp_g3

0x7e09,	// (0x0001294d) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7e09,	// (0x0001294d) list_single_graphic_2heading_pane_fp_g4

0xc612,	// (0x00017156) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc612,	// (0x00017156) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb91,	// (0x0001a6d5) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb91,	// (0x0001a6d5) list_single_graphic_2heading_pane_fp_g

0xcdf5,	// (0x00017939) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcdf5,	// (0x00017939) list_single_graphic_2heading_pane_fp_t1

0xc66d,	// (0x000171b1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc66d,	// (0x000171b1) list_single_graphic_2heading_pane_fp_t2

0xce0b,	// (0x0001794f) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xce0b,	// (0x0001794f) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc73,	// (0x0001a7b7) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc73,	// (0x0001a7b7) list_single_graphic_2heading_pane_fp_t

0xc045,	// (0x00016b89) fep_hwr_write_pane_g5_ParamLimits

0xc045,	// (0x00016b89) fep_hwr_write_pane_g5

0xc051,	// (0x00016b95) fep_hwr_write_pane_g6_ParamLimits

0xc051,	// (0x00016b95) fep_hwr_write_pane_g6

0xcaac,	// (0x000175f0) eswt_shell_pane_ParamLimits

0x95a4,	// (0x000140e8) bg_popup_window_pane_cp18_ParamLimits

0xa8a6,	// (0x000153ea) heading_pane_cp70

0xcbd6,	// (0x0001771a) popup_eswt_tasktip_window_t1_ParamLimits

0x8fe3,	// (0x00013b27) aid_touch_tab_arrow_left

0x8fef,	// (0x00013b33) aid_touch_tab_arrow_right

0x6f6c,	// (0x00011ab0) title_pane_g3_ParamLimits

0x6f6c,	// (0x00011ab0) title_pane_g3

0x7cce,	// (0x00012812) set_value_pane_g1

0x5905,	// (0x00010449) popup_toolbar_trans_pane_ParamLimits

0xcd3b,	// (0x0001787f) aid_size_cell_tb_trans_pane_ParamLimits

0x7de3,	// (0x00012927) bg_tb_trans_pane_ParamLimits

0xcd4d,	// (0x00017891) grid_tb_trans_pane_ParamLimits

0x72c7,	// (0x00011e0b) cont_note_pane_ParamLimits

0x72c7,	// (0x00011e0b) cont_note_pane

0x7609,	// (0x0001214d) cont_snote2_single_text_pane_ParamLimits

0x7609,	// (0x0001214d) cont_snote2_single_text_pane

0x7609,	// (0x0001214d) cont_snote2_single_graphic_pane_ParamLimits

0x7609,	// (0x0001214d) cont_snote2_single_graphic_pane

0x9bfb,	// (0x0001473f) cont_note_wait_pane_ParamLimits

0x9bfb,	// (0x0001473f) cont_note_wait_pane

0x9bfb,	// (0x0001473f) cont_note_image_pane_ParamLimits

0x9bfb,	// (0x0001473f) cont_note_image_pane

0xce21,	// (0x00017965) popup_note2_window_g1_ParamLimits

0xce21,	// (0x00017965) popup_note2_window_g1

0xce52,	// (0x00017996) popup_note2_window_t1_ParamLimits

0xce52,	// (0x00017996) popup_note2_window_t1

0xce97,	// (0x000179db) popup_note2_window_t2_ParamLimits

0xce97,	// (0x000179db) popup_note2_window_t2

0xcedc,	// (0x00017a20) popup_note2_window_t3_ParamLimits

0xcedc,	// (0x00017a20) popup_note2_window_t3

0xcf21,	// (0x00017a65) popup_note2_window_t4_ParamLimits

0xcf21,	// (0x00017a65) popup_note2_window_t4

0x733f,	// (0x00011e83) popup_note2_window_t5_ParamLimits

0x733f,	// (0x00011e83) popup_note2_window_t5

0x0004,

0xfc7f,	// (0x0001a7c3) popup_note2_window_t_ParamLimits

0xfc7f,	// (0x0001a7c3) popup_note2_window_t

0xcf50,	// (0x00017a94) popup_note2_image_window_g1_ParamLimits

0xcf50,	// (0x00017a94) popup_note2_image_window_g1

0xcf5c,	// (0x00017aa0) popup_note2_image_window_g2_ParamLimits

0xcf5c,	// (0x00017aa0) popup_note2_image_window_g2

0x0001,

0xfc8a,	// (0x0001a7ce) popup_note2_image_window_g_ParamLimits

0xfc8a,	// (0x0001a7ce) popup_note2_image_window_g

0xcf6e,	// (0x00017ab2) popup_note2_image_window_t1_ParamLimits

0xcf6e,	// (0x00017ab2) popup_note2_image_window_t1

0xcf86,	// (0x00017aca) popup_note2_image_window_t2_ParamLimits

0xcf86,	// (0x00017aca) popup_note2_image_window_t2

0xcf9e,	// (0x00017ae2) popup_note2_image_window_t3_ParamLimits

0xcf9e,	// (0x00017ae2) popup_note2_image_window_t3

0x0002,

0xfc8f,	// (0x0001a7d3) popup_note2_image_window_t_ParamLimits

0xfc8f,	// (0x0001a7d3) popup_note2_image_window_t

0x9c09,	// (0x0001474d) popup_note2_wait_window_g1_ParamLimits

0x9c09,	// (0x0001474d) popup_note2_wait_window_g1

0xcfba,	// (0x00017afe) popup_note2_wait_window_g2_ParamLimits

0xcfba,	// (0x00017afe) popup_note2_wait_window_g2

0x9c21,	// (0x00014765) popup_note2_wait_window_g3_ParamLimits

0x9c21,	// (0x00014765) popup_note2_wait_window_g3

0x0002,

0xfc96,	// (0x0001a7da) popup_note2_wait_window_g_ParamLimits

0xfc96,	// (0x0001a7da) popup_note2_wait_window_g

0xcfc6,	// (0x00017b0a) popup_note2_wait_window_t1_ParamLimits

0xcfc6,	// (0x00017b0a) popup_note2_wait_window_t1

0xcfe4,	// (0x00017b28) popup_note2_wait_window_t2_ParamLimits

0xcfe4,	// (0x00017b28) popup_note2_wait_window_t2

0xd002,	// (0x00017b46) popup_note2_wait_window_t3_ParamLimits

0xd002,	// (0x00017b46) popup_note2_wait_window_t3

0xd014,	// (0x00017b58) popup_note2_wait_window_t4_ParamLimits

0xd014,	// (0x00017b58) popup_note2_wait_window_t4

0x0003,

0xfc9d,	// (0x0001a7e1) popup_note2_wait_window_t_ParamLimits

0xfc9d,	// (0x0001a7e1) popup_note2_wait_window_t

0xd026,	// (0x00017b6a) wait_bar2_pane_ParamLimits

0xd026,	// (0x00017b6a) wait_bar2_pane

0xd03e,	// (0x00017b82) popup_snote2_single_text_window_g1_ParamLimits

0xd03e,	// (0x00017b82) popup_snote2_single_text_window_g1

0xd066,	// (0x00017baa) popup_snote2_single_text_window_t1_ParamLimits

0xd066,	// (0x00017baa) popup_snote2_single_text_window_t1

0xd0b2,	// (0x00017bf6) popup_snote2_single_text_window_t2_ParamLimits

0xd0b2,	// (0x00017bf6) popup_snote2_single_text_window_t2

0xd0fe,	// (0x00017c42) popup_snote2_single_text_window_t3_ParamLimits

0xd0fe,	// (0x00017c42) popup_snote2_single_text_window_t3

0xd13f,	// (0x00017c83) popup_snote2_single_text_window_t4_ParamLimits

0xd13f,	// (0x00017c83) popup_snote2_single_text_window_t4

0xd175,	// (0x00017cb9) popup_snote2_single_text_window_t5_ParamLimits

0xd175,	// (0x00017cb9) popup_snote2_single_text_window_t5

0x0004,

0xfca6,	// (0x0001a7ea) popup_snote2_single_text_window_t_ParamLimits

0xfca6,	// (0x0001a7ea) popup_snote2_single_text_window_t

0xd1a0,	// (0x00017ce4) popup_snote2_single_graphic_window_g1_ParamLimits

0xd1a0,	// (0x00017ce4) popup_snote2_single_graphic_window_g1

0xd1c8,	// (0x00017d0c) popup_snote2_single_graphic_window_g2_ParamLimits

0xd1c8,	// (0x00017d0c) popup_snote2_single_graphic_window_g2

0x0001,

0xfcb1,	// (0x0001a7f5) popup_snote2_single_graphic_window_g_ParamLimits

0xfcb1,	// (0x0001a7f5) popup_snote2_single_graphic_window_g

0xd1f0,	// (0x00017d34) popup_snote2_single_graphic_window_t1_ParamLimits

0xd1f0,	// (0x00017d34) popup_snote2_single_graphic_window_t1

0xd23c,	// (0x00017d80) popup_snote2_single_graphic_window_t2_ParamLimits

0xd23c,	// (0x00017d80) popup_snote2_single_graphic_window_t2

0xd0fe,	// (0x00017c42) popup_snote2_single_graphic_window_t3_ParamLimits

0xd0fe,	// (0x00017c42) popup_snote2_single_graphic_window_t3

0xd13f,	// (0x00017c83) popup_snote2_single_graphic_window_t4_ParamLimits

0xd13f,	// (0x00017c83) popup_snote2_single_graphic_window_t4

0xd175,	// (0x00017cb9) popup_snote2_single_graphic_window_t5_ParamLimits

0xd175,	// (0x00017cb9) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb6,	// (0x0001a7fa) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb6,	// (0x0001a7fa) popup_snote2_single_graphic_window_t

0xb9f1,	// (0x00016535) clock_nsta_pane_cp2_t1

0xb9f1,	// (0x00016535) clock_nsta_pane_cp2_t2

0x0001,

0xfaca,	// (0x0001a60e) clock_nsta_pane_cp2_t

0x7dfd,	// (0x00012941) form_field_data_wide_pane_g1_ParamLimits

0x7a5c,	// (0x000125a0) form_field_data_wide_pane_g2_ParamLimits

0x7a5c,	// (0x000125a0) form_field_data_wide_pane_g2

0x7e09,	// (0x0001294d) form_field_data_wide_pane_g3_ParamLimits

0x7e09,	// (0x0001294d) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x0001a1ba) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x0001a1ba) form_field_data_wide_pane_g

0xb8e3,	// (0x00016427) grid_touch_3_pane_ParamLimits

0xb8e3,	// (0x00016427) grid_touch_3_pane

0xd288,	// (0x00017dcc) cell_touch_3_pane_ParamLimits

0xd288,	// (0x00017dcc) cell_touch_3_pane

0xbfb9,	// (0x00016afd) cell_touch_3_pane_g1

0xbfb9,	// (0x00016afd) cell_touch_3_pane_g2

0x0001,

0xfb4f,	// (0x0001a693) cell_touch_3_pane_g

0x7371,	// (0x00011eb5) cont_query_data_pane

0x7379,	// (0x00011ebd) cont_query_data_pane_cp1

0xd2b9,	// (0x00017dfd) button_value_adjust_pane_cp7

0xd2c1,	// (0x00017e05) query_popup_pane_cp3

0x867f,	// (0x000131c3) bg_popup_sub_pane_cp22_ParamLimits

0x5062,	// (0x0000fba6) navi_navi_volume_pane_cp2

0x507a,	// (0x0000fbbe) popup_side_volume_key_window_g2

0x5086,	// (0x0000fbca) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x0001a250) popup_side_volume_key_window_g

0x50a0,	// (0x0000fbe4) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x0001a257) popup_side_volume_key_window_t

0x89c4,	// (0x00013508) popup_side_volume_key_window_ParamLimits

0x7a1c,	// (0x00012560) list_double_graphic_pane_g4_ParamLimits

0x7a1c,	// (0x00012560) list_double_graphic_pane_g4

0xabf1,	// (0x00015735) list_single_2heading_msg_pane_ParamLimits

0xabf1,	// (0x00015735) list_single_2heading_msg_pane

0xd2f0,	// (0x00017e34) list_single_2heading_msg_pane_g1_ParamLimits

0xd2f0,	// (0x00017e34) list_single_2heading_msg_pane_g1

0x784b,	// (0x0001238f) list_single_2heading_msg_pane_g2_ParamLimits

0x784b,	// (0x0001238f) list_single_2heading_msg_pane_g2

0xb452,	// (0x00015f96) list_single_2heading_msg_pane_g3_ParamLimits

0xb452,	// (0x00015f96) list_single_2heading_msg_pane_g3

0xd2fc,	// (0x00017e40) list_single_2heading_msg_pane_g4_ParamLimits

0xd2fc,	// (0x00017e40) list_single_2heading_msg_pane_g4

0x0003,

0xfcc1,	// (0x0001a805) list_single_2heading_msg_pane_g_ParamLimits

0xfcc1,	// (0x0001a805) list_single_2heading_msg_pane_g

0xd314,	// (0x00017e58) list_single_2heading_msg_pane_t1_ParamLimits

0xd314,	// (0x00017e58) list_single_2heading_msg_pane_t1

0xd33c,	// (0x00017e80) list_single_2heading_msg_pane_t2_ParamLimits

0xd33c,	// (0x00017e80) list_single_2heading_msg_pane_t2

0xd370,	// (0x00017eb4) list_single_2heading_msg_pane_t3_ParamLimits

0xd370,	// (0x00017eb4) list_single_2heading_msg_pane_t3

0xd3a9,	// (0x00017eed) list_single_2heading_msg_pane_t4_ParamLimits

0xd3a9,	// (0x00017eed) list_single_2heading_msg_pane_t4

0x0003,

0xfcca,	// (0x0001a80e) list_single_2heading_msg_pane_t_ParamLimits

0xfcca,	// (0x0001a80e) list_single_2heading_msg_pane_t

0x6f78,	// (0x00011abc) title_pane_g4_ParamLimits

0x6f78,	// (0x00011abc) title_pane_g4

0x4e70,	// (0x0000f9b4) title_pane_stacon_g3_ParamLimits

0x4e70,	// (0x0000f9b4) title_pane_stacon_g3

0xcdb8,	// (0x000178fc) list_single_2graphic_im_pane_g4_ParamLimits

0xcdb8,	// (0x000178fc) list_single_2graphic_im_pane_g4

0xa662,	// (0x000151a6) popup_side_volume_key_window_cp

0xaf67,	// (0x00015aab) main_idle_act2_pane_t1

0x5a5f,	// (0x000105a3) toolbar_button_pane_g10

0x7801,	// (0x00012345) popup_toolbar_window_cp1

0xb9e2,	// (0x00016526) clock_nsta_pane_cp_t1

0xb9e2,	// (0x00016526) clock_nsta_pane_cp_t2

0x0001,

0xfac5,	// (0x0001a609) clock_nsta_pane_cp_t

0x5062,	// (0x0000fba6) navi_navi_volume_pane_cp2_ParamLimits

0x506e,	// (0x0000fbb2) popup_side_volume_key_window_g1_ParamLimits

0x507a,	// (0x0000fbbe) popup_side_volume_key_window_g2_ParamLimits

0x5086,	// (0x0000fbca) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x0001a250) popup_side_volume_key_window_g_ParamLimits

0x5ee3,	// (0x00010a27) fep_hwr_aid_pane

0x5f8a,	// (0x00010ace) bg_fep_hwr_top_pane_g4_ParamLimits

0xc015,	// (0x00016b59) fep_hwr_top_pane_g1_ParamLimits

0xc027,	// (0x00016b6b) fep_hwr_top_pane_g2_ParamLimits

0x5faa,	// (0x00010aee) fep_hwr_top_pane_g3_ParamLimits

0xfb1a,	// (0x0001a65e) fep_hwr_top_pane_g_ParamLimits

0x5fbf,	// (0x00010b03) fep_hwr_top_text_pane_ParamLimits

0xa425,	// (0x00014f69) aid_touch_tab_arrow_arrow_2

0xa42e,	// (0x00014f72) aid_touch_tab_arrow_left_2

0x5ef7,	// (0x00010a3b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f2e,	// (0x00010a72) fep_hwr_prediction_pane

0xc17e,	// (0x00016cc2) fep_vkb_prediction_pane

0xc27b,	// (0x00016dbf) fep_vkb_side_pane_g3_ParamLimits

0xc27b,	// (0x00016dbf) fep_vkb_side_pane_g3

0x613a,	// (0x00010c7e) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x61a6,	// (0x00010cea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x61b3,	// (0x00010cf7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc9,	// (0x0001a70d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x62e2,	// (0x00010e26) fep_hwr_prediction_pane_g1

0x62ec,	// (0x00010e30) fep_hwr_prediction_pane_g2

0x62f4,	// (0x00010e38) fep_hwr_prediction_pane_g3

0x62fc,	// (0x00010e40) fep_hwr_prediction_pane_g4

0x0003,

0xfcd3,	// (0x0001a817) fep_hwr_prediction_pane_g

0xd3ce,	// (0x00017f12) fep_vkb_prediction_pane_g1

0xd3d8,	// (0x00017f1c) fep_vkb_prediction_pane_g2

0xd3e0,	// (0x00017f24) fep_vkb_prediction_pane_g3

0xd3e8,	// (0x00017f2c) fep_vkb_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0001a820) fep_vkb_prediction_pane_g

0x5d3f,	// (0x00010883) slider_set_pane_g3

0x5d53,	// (0x00010897) slider_set_pane_g4

0x5d6b,	// (0x000108af) slider_set_pane_g5

0x5d3f,	// (0x00010883) slider_set_pane_g6

0x5d81,	// (0x000108c5) slider_set_pane_g7

0xaac7,	// (0x0001560b) slider_form_pane_g3

0xaad0,	// (0x00015614) slider_form_pane_g4

0xaad8,	// (0x0001561c) slider_form_pane_g5

0xaac7,	// (0x0001560b) slider_form_pane_g6

0xaae0,	// (0x00015624) slider_form_pane_g7

0xb25e,	// (0x00015da2) slider_set_pane_vc_g3

0xb267,	// (0x00015dab) slider_set_pane_vc_g4

0xb270,	// (0x00015db4) slider_set_pane_vc_g5

0xb25e,	// (0x00015da2) slider_set_pane_vc_g6

0xb279,	// (0x00015dbd) slider_set_pane_vc_g7

0xb6b8,	// (0x000161fc) slider_form_pane_vc_g1

0xb6c1,	// (0x00016205) slider_form_pane_vc_g2

0xb6ca,	// (0x0001620e) slider_form_pane_vc_g3

0xb6b8,	// (0x000161fc) slider_form_pane_vc_g4

0xb6d3,	// (0x00016217) slider_form_pane_vc_g5

0x0004,

0xfa97,	// (0x0001a5db) slider_form_pane_vc_g

0x4b44,	// (0x0000f688) main_idle_act3_pane

0xd3f0,	// (0x00017f34) ai3_links_pane

0xd3f9,	// (0x00017f3d) popup_ai3_data_window_ParamLimits

0xd3f9,	// (0x00017f3d) popup_ai3_data_window

0x6f30,	// (0x00011a74) grid_ai3_links_pane

0xd411,	// (0x00017f55) cell_ai3_links_pane_ParamLimits

0xd411,	// (0x00017f55) cell_ai3_links_pane

0xd429,	// (0x00017f6d) bg_popup_sub_pane_cp11

0xd436,	// (0x00017f7a) cell_ai3_links_pane_g1

0x6f30,	// (0x00011a74) bg_popup_sub_pane_cp12

0xd45b,	// (0x00017f9f) heading_ai3_data_pane

0xd463,	// (0x00017fa7) list_ai3_gene_pane

0xd46f,	// (0x00017fb3) popup_ai3_data_window_g1

0xd477,	// (0x00017fbb) heading_ai3_data_pane_g1

0xd47f,	// (0x00017fc3) heading_ai3_data_pane_t1

0xd48d,	// (0x00017fd1) list_double_ai3_gene_pane_ParamLimits

0xd48d,	// (0x00017fd1) list_double_ai3_gene_pane

0xd49a,	// (0x00017fde) list_single_ai3_gene_pane_ParamLimits

0xd49a,	// (0x00017fde) list_single_ai3_gene_pane

0xbf7e,	// (0x00016ac2) list_highlight_pane_cp7_ParamLimits

0xbf7e,	// (0x00016ac2) list_highlight_pane_cp7

0xd4a7,	// (0x00017feb) list_single_a13_gene_pane_t1_ParamLimits

0xd4a7,	// (0x00017feb) list_single_a13_gene_pane_t1

0xd4be,	// (0x00018002) list_single_ai3_gene_pane_g1

0xd4c7,	// (0x0001800b) list_single_ai3_gene_pane_g2

0x0001,

0xfce5,	// (0x0001a829) list_single_ai3_gene_pane_g

0xd4cf,	// (0x00018013) list_double_ai3_gene_pane_g1_ParamLimits

0xd4cf,	// (0x00018013) list_double_ai3_gene_pane_g1

0xd4db,	// (0x0001801f) list_double_ai3_gene_pane_t1_ParamLimits

0xd4db,	// (0x0001801f) list_double_ai3_gene_pane_t1

0xd4f7,	// (0x0001803b) list_double_ai3_gene_pane_t2_ParamLimits

0xd4f7,	// (0x0001803b) list_double_ai3_gene_pane_t2

0xd50c,	// (0x00018050) list_double_ai3_gene_pane_t3_ParamLimits

0xd50c,	// (0x00018050) list_double_ai3_gene_pane_t3

0x0002,

0xfcea,	// (0x0001a82e) list_double_ai3_gene_pane_t_ParamLimits

0xfcea,	// (0x0001a82e) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd2d2,	// (0x00017e16) aid_size_min_col_2

0xd2dc,	// (0x00017e20) aid_size_min_msg_ParamLimits

0xd2dc,	// (0x00017e20) aid_size_min_msg

0xc37b,	// (0x00016ebf) fep_vkb_top_text_pane_g2_ParamLimits

0xc37b,	// (0x00016ebf) fep_vkb_top_text_pane_g2

0x0001,

0xfb4a,	// (0x0001a68e) fep_vkb_top_text_pane_g_ParamLimits

0xfb4a,	// (0x0001a68e) fep_vkb_top_text_pane_g

0x4b44,	// (0x0000f688) main_hc_apps_shell_pane

0xd529,	// (0x0001806d) grid_hc_apps_pane_ParamLimits

0xd529,	// (0x0001806d) grid_hc_apps_pane

0xd538,	// (0x0001807c) list_hc_apps_pane

0xd540,	// (0x00018084) scroll_pane_cp37_ParamLimits

0xd540,	// (0x00018084) scroll_pane_cp37

0xd54c,	// (0x00018090) cell_hc_apps_pane_ParamLimits

0xd54c,	// (0x00018090) cell_hc_apps_pane

0xd5fa,	// (0x0001813e) cell_hc_apps_pane_g1_ParamLimits

0xd5fa,	// (0x0001813e) cell_hc_apps_pane_g1

0xd62b,	// (0x0001816f) cell_hc_apps_pane_g2_ParamLimits

0xd62b,	// (0x0001816f) cell_hc_apps_pane_g2

0xd647,	// (0x0001818b) cell_hc_apps_pane_g3_ParamLimits

0xd647,	// (0x0001818b) cell_hc_apps_pane_g3

0x0002,

0xfcf1,	// (0x0001a835) cell_hc_apps_pane_g_ParamLimits

0xfcf1,	// (0x0001a835) cell_hc_apps_pane_g

0xd669,	// (0x000181ad) cell_hc_apps_pane_t1_ParamLimits

0xd669,	// (0x000181ad) cell_hc_apps_pane_t1

0x72c7,	// (0x00011e0b) grid_highlight_pane_cp10_ParamLimits

0x72c7,	// (0x00011e0b) grid_highlight_pane_cp10

0xd6a9,	// (0x000181ed) list_single_hc_apps_pane_ParamLimits

0xd6a9,	// (0x000181ed) list_single_hc_apps_pane

0xd711,	// (0x00018255) list_single_hc_apps_pane_g1

0xd72a,	// (0x0001826e) list_single_hc_apps_pane_g2

0x0001,

0xfcf8,	// (0x0001a83c) list_single_hc_apps_pane_g

0xd743,	// (0x00018287) list_single_hc_apps_pane_g2_copy1

0xd75f,	// (0x000182a3) list_single_hc_apps_pane_t1

0x7024,	// (0x00011b68) bg_set_opt_pane_cp_ParamLimits

0x4d97,	// (0x0000f8db) setting_slider_pane_t1_ParamLimits

0x4db0,	// (0x0000f8f4) setting_slider_pane_t2_ParamLimits

0x4dca,	// (0x0000f90e) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001a0a2) setting_slider_pane_t_ParamLimits

0x4de2,	// (0x0000f926) slider_set_pane_ParamLimits

0x5302,	// (0x0000fe46) control_pane_g5_ParamLimits

0x5302,	// (0x0000fe46) control_pane_g5

0xa924,	// (0x00015468) slider_set_pane_g1_ParamLimits

0x5d33,	// (0x00010877) slider_set_pane_g2_ParamLimits

0x5d3f,	// (0x00010883) slider_set_pane_g3_ParamLimits

0x5d53,	// (0x00010897) slider_set_pane_g4_ParamLimits

0x5d6b,	// (0x000108af) slider_set_pane_g5_ParamLimits

0x5d3f,	// (0x00010883) slider_set_pane_g6_ParamLimits

0x5d81,	// (0x000108c5) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x0001a49e) slider_set_pane_g_ParamLimits

0x8aae,	// (0x000135f2) navi_icon_text_pane_ParamLimits

0x8fa4,	// (0x00013ae8) aid_fill_nsta_2_ParamLimits

0x8fe3,	// (0x00013b27) aid_touch_tab_arrow_left_ParamLimits

0x8fef,	// (0x00013b33) aid_touch_tab_arrow_right_ParamLimits

0x905b,	// (0x00013b9f) clock_nsta_pane_ParamLimits

0xa407,	// (0x00014f4b) navi_icon_pane_g1_ParamLimits

0xa413,	// (0x00014f57) navi_text_pane_t1_ParamLimits

0xbaf4,	// (0x00016638) navi_icon_text_pane_g1_ParamLimits

0xbb00,	// (0x00016644) navi_icon_text_pane_t1_ParamLimits

0xd711,	// (0x00018255) list_single_hc_apps_pane_g1_ParamLimits

0xd72a,	// (0x0001826e) list_single_hc_apps_pane_g2_ParamLimits

0xfcf8,	// (0x0001a83c) list_single_hc_apps_pane_g_ParamLimits

0xd743,	// (0x00018287) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xd75f,	// (0x000182a3) list_single_hc_apps_pane_t1_ParamLimits

0x4ca1,	// (0x0000f7e5) popup_toolbar2_fixed_window_ParamLimits

0x4ca1,	// (0x0000f7e5) popup_toolbar2_fixed_window

0x58fb,	// (0x0001043f) popup_toolbar2_float_window

0x6f30,	// (0x00011a74) bg_popup_sub_pane_cp27

0xd78d,	// (0x000182d1) grid_toolbar2_float_pane

0x6f30,	// (0x00011a74) bg_popup_sub_pane_cp26

0xd78d,	// (0x000182d1) grid_toolbar2_fixed_pane

0xd795,	// (0x000182d9) cell_toolbar2_fixed_pane_ParamLimits

0xd795,	// (0x000182d9) cell_toolbar2_fixed_pane

0xd7a6,	// (0x000182ea) cell_toolbar2_fixed_pane_g1

0x57d1,	// (0x00010315) toolbar2_fixed_button_pane

0x9480,	// (0x00013fc4) toolbar2_fixed_button_pane_g1

0x9490,	// (0x00013fd4) toolbar2_fixed_button_pane_g2

0x9488,	// (0x00013fcc) toolbar2_fixed_button_pane_g3

0x94a0,	// (0x00013fe4) toolbar2_fixed_button_pane_g4

0x9498,	// (0x00013fdc) toolbar2_fixed_button_pane_g5

0x94a8,	// (0x00013fec) toolbar2_fixed_button_pane_g6

0x94b0,	// (0x00013ff4) toolbar2_fixed_button_pane_g7

0x94c0,	// (0x00014004) toolbar2_fixed_button_pane_g8

0x94b8,	// (0x00013ffc) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x0001a3a0) toolbar2_fixed_button_pane_g

0xd7af,	// (0x000182f3) cell_toolbar2_float_pane_ParamLimits

0xd7af,	// (0x000182f3) cell_toolbar2_float_pane

0xd7c3,	// (0x00018307) cell_toolbar2_float_pane_g1

0x57d1,	// (0x00010315) toolbar2_fixed_button_pane_cp

0xc0e5,	// (0x00016c29) fep_vkb_accented_list_pane_ParamLimits

0xc0e5,	// (0x00016c29) fep_vkb_accented_list_pane

0x611a,	// (0x00010c5e) bg_popup_fep_shadow_pane_g9

0x8c22,	// (0x00013766) bg_popup_fep_shadow_pane_cp3

0x8098,	// (0x00012bdc) list_accented_list_pane

0xd7cc,	// (0x00018310) list_single_accented_list_pane_ParamLimits

0xd7cc,	// (0x00018310) list_single_accented_list_pane

0x8c22,	// (0x00013766) list_highlight_pane_cp10

0xd7dd,	// (0x00018321) list_single_accented_list_pane_t1

0x584b,	// (0x0001038f) popup_slider_window_ParamLimits

0x584b,	// (0x0001038f) popup_slider_window

0xd2c9,	// (0x00017e0d) aid_indentation_list_msg

0xd897,	// (0x000183db) bg_popup_window_pane_cp19

0xd901,	// (0x00018445) popup_slider_window_g1

0xd91d,	// (0x00018461) popup_slider_window_g2

0xd939,	// (0x0001847d) popup_slider_window_g3

0x0005,

0xfcfd,	// (0x0001a841) popup_slider_window_g

0xd995,	// (0x000184d9) popup_slider_window_t1

0xda09,	// (0x0001854d) small_volume_slider_vertical_pane

0xbfb9,	// (0x00016afd) small_volume_slider_vertical_pane_g1

0xbfb9,	// (0x00016afd) small_volume_slider_vertical_pane_g2

0xda25,	// (0x00018569) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0f,	// (0x0001a853) small_volume_slider_vertical_pane_g

0x4a67,	// (0x0000f5ab) area_side_right_pane_ParamLimits

0x4a67,	// (0x0000f5ab) area_side_right_pane

0x6304,	// (0x00010e48) aid_size_side_button_ParamLimits

0x6304,	// (0x00010e48) aid_size_side_button

0x6318,	// (0x00010e5c) grid_sctrl_middle_pane_ParamLimits

0x6318,	// (0x00010e5c) grid_sctrl_middle_pane

0x6337,	// (0x00010e7b) sctrl_sk_bottom_pane

0x6348,	// (0x00010e8c) sctrl_sk_top_pane

0x635a,	// (0x00010e9e) aid_touch_sctrl_top

0x6367,	// (0x00010eab) bg_sctrl_sk_pane_ParamLimits

0x6367,	// (0x00010eab) bg_sctrl_sk_pane

0x6375,	// (0x00010eb9) sctrl_sk_top_pane_g1

0x6382,	// (0x00010ec6) sctrl_sk_top_pane_t1

0x635a,	// (0x00010e9e) aid_touch_sctrl_bottom

0x6367,	// (0x00010eab) bg_sctrl_sk_pane_cp_ParamLimits

0x6367,	// (0x00010eab) bg_sctrl_sk_pane_cp

0x639d,	// (0x00010ee1) sctrl_sk_bottom_pane_g1

0x6382,	// (0x00010ec6) sctrl_sk_bottom_pane_t1

0x63a6,	// (0x00010eea) cell_sctrl_middle_pane_ParamLimits

0x63a6,	// (0x00010eea) cell_sctrl_middle_pane

0x63c1,	// (0x00010f05) aid_touch_sctrl_middle_ParamLimits

0x63c1,	// (0x00010f05) aid_touch_sctrl_middle

0x63d3,	// (0x00010f17) bg_sctrl_middle_pane_ParamLimits

0x63d3,	// (0x00010f17) bg_sctrl_middle_pane

0x613a,	// (0x00010c7e) cell_sctrl_middle_pane_g1_ParamLimits

0x613a,	// (0x00010c7e) cell_sctrl_middle_pane_g1

0x63e1,	// (0x00010f25) cell_sctrl_middle_pane_g2_ParamLimits

0x63e1,	// (0x00010f25) cell_sctrl_middle_pane_g2

0x0001,

0xfd1b,	// (0x0001a85f) cell_sctrl_middle_pane_g_ParamLimits

0xfd1b,	// (0x0001a85f) cell_sctrl_middle_pane_g

0x9480,	// (0x00013fc4) bg_sctrl_middle_pane_g1

0x9488,	// (0x00013fcc) bg_sctrl_middle_pane_g2

0x9490,	// (0x00013fd4) bg_sctrl_middle_pane_g3

0x9498,	// (0x00013fdc) bg_sctrl_middle_pane_g4

0x94a0,	// (0x00013fe4) bg_sctrl_middle_pane_g5

0x94a8,	// (0x00013fec) bg_sctrl_middle_pane_g6

0x94b0,	// (0x00013ff4) bg_sctrl_middle_pane_g7

0x94b8,	// (0x00013ffc) bg_sctrl_middle_pane_g8

0x0007,

0xfd20,	// (0x0001a864) bg_sctrl_middle_pane_g

0x94c0,	// (0x00014004) bg_sctrl_middle_pane_g8_copy1

0x9480,	// (0x00013fc4) bg_sctrl_sk_pane_g1

0x9490,	// (0x00013fd4) bg_sctrl_sk_pane_g2

0x9488,	// (0x00013fcc) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x0001a3a0) bg_sctrl_sk_pane_g

0x77c7,	// (0x0001230b) aid_size_touch_scroll_bar

0x94a0,	// (0x00013fe4) bg_sctrl_sk_pane_g4

0x9498,	// (0x00013fdc) bg_sctrl_sk_pane_g5

0x94a8,	// (0x00013fec) bg_sctrl_sk_pane_g6

0x94b0,	// (0x00013ff4) bg_sctrl_sk_pane_g7

0x94c0,	// (0x00014004) bg_sctrl_sk_pane_g8

0x94b8,	// (0x00013ffc) bg_sctrl_sk_pane_g9

0x54bc,	// (0x00010000) popup_fep_china_hwr2_fs_candidate_window

0x54c6,	// (0x0001000a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x54c6,	// (0x0001000a) popup_fep_china_hwr2_fs_control_window

0x613a,	// (0x00010c7e) sctrl_sk_top_pane_g2

0x0001,

0xfd16,	// (0x0001a85a) sctrl_sk_top_pane_g

0xda2e,	// (0x00018572) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda2e,	// (0x00018572) aid_fep_china_hwr2_fs_cell

0xda40,	// (0x00018584) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda40,	// (0x00018584) bg_popup_fep_shadow_pane_cp4

0xda57,	// (0x0001859b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda57,	// (0x0001859b) bg_popup_fep_shadow_pane_cp5

0xda69,	// (0x000185ad) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda69,	// (0x000185ad) popup_fep_china_hwr2_fs_control_bar_grid

0xda79,	// (0x000185bd) popup_fep_china_hwr2_fs_control_funtion_grid

0xda81,	// (0x000185c5) aid_fep_china_hwr2_fs_candi_cell

0x6f30,	// (0x00011a74) bg_popup_fep_shadow_pane_cp6

0xda8b,	// (0x000185cf) popup_fep_china_hwr2_fs_candidate_grid

0xda95,	// (0x000185d9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xda95,	// (0x000185d9) cell_fep_china_hwr2_fs_funtion_grid

0xbfb9,	// (0x00016afd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaad,	// (0x000185f1) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaad,	// (0x000185f1) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdabb,	// (0x000185ff) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdabb,	// (0x000185ff) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd31,	// (0x0001a875) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd31,	// (0x0001a875) cell_fep_china_hwr2_fs_funtion_grid_g

0xdad1,	// (0x00018615) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdad1,	// (0x00018615) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdae6,	// (0x0001862a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdae6,	// (0x0001862a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd36,	// (0x0001a87a) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd36,	// (0x0001a87a) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb02,	// (0x00018646) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb0a,	// (0x0001864e) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb12,	// (0x00018656) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd3b,	// (0x0001a87f) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb1a,	// (0x0001865e) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb1a,	// (0x0001865e) cell_fep_china_hwr2_fs_candidate_grid

0xdb33,	// (0x00018677) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb3b,	// (0x0001867f) popup_fep_china_hwr2_fs_candidate_grid_g21

0xbfb9,	// (0x00016afd) cell_fep_china_hwr2_fs_candidate_grid_g1

0xbfb9,	// (0x00016afd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4f,	// (0x0001a693) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb43,	// (0x00018687) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9068,	// (0x00013bac) clock_nsta_pane_cp_24_ParamLimits

0x9068,	// (0x00013bac) clock_nsta_pane_cp_24

0x90e6,	// (0x00013c2a) indicator_nsta_pane_cp_24_ParamLimits

0x90e6,	// (0x00013c2a) indicator_nsta_pane_cp_24

0xa283,	// (0x00014dc7) heading_pane_g1

0x0001,

0xf8c1,	// (0x0001a405) heading_pane_g

0xadb0,	// (0x000158f4) grid_sct_catagory_button_pane

0xade0,	// (0x00015924) scroll_pane_cp5_ParamLimits

0xbb42,	// (0x00016686) button_value_adjust_pane_cp5_ParamLimits

0xbb42,	// (0x00016686) button_value_adjust_pane_cp5

0xbc3c,	// (0x00016780) form2_midp_time_pane_ParamLimits

0xdb51,	// (0x00018695) cell_sct_catagory_button_pane_ParamLimits

0xdb51,	// (0x00018695) cell_sct_catagory_button_pane

0xbf7e,	// (0x00016ac2) bg_button_pane_cp01_ParamLimits

0xbf7e,	// (0x00016ac2) bg_button_pane_cp01

0xbfb9,	// (0x00016afd) cell_sct_catagory_button_pane_g1

0x588a,	// (0x000103ce) popup_tb_extension_window

0xdb63,	// (0x000186a7) aid_size_cell_ext_ParamLimits

0xdb63,	// (0x000186a7) aid_size_cell_ext

0x72c7,	// (0x00011e0b) bg_tb_trans_pane_cp1_ParamLimits

0x72c7,	// (0x00011e0b) bg_tb_trans_pane_cp1

0xdb83,	// (0x000186c7) grid_tb_ext_pane_ParamLimits

0xdb83,	// (0x000186c7) grid_tb_ext_pane

0xdbb5,	// (0x000186f9) cell_tb_ext_pane_ParamLimits

0xdbb5,	// (0x000186f9) cell_tb_ext_pane

0xdbcc,	// (0x00018710) cell_tb_ext_pane_g1_ParamLimits

0xdbcc,	// (0x00018710) cell_tb_ext_pane_g1

0xdbe9,	// (0x0001872d) cell_tb_ext_pane_t1

0x72c7,	// (0x00011e0b) list_highlight_pane_cp11_ParamLimits

0x72c7,	// (0x00011e0b) list_highlight_pane_cp11

0x4cc0,	// (0x0000f804) popup_uni_indicator_window_ParamLimits

0x4cc0,	// (0x0000f804) popup_uni_indicator_window

0x7de3,	// (0x00012927) bg_popup_sub_pane_cp14

0xdc04,	// (0x00018748) list_uniindi_pane

0xdc10,	// (0x00018754) uniindi_top_pane

0x72c7,	// (0x00011e0b) bg_uniindi_top_pane

0xdc2f,	// (0x00018773) uniindi_top_pane_g1

0xdc45,	// (0x00018789) uniindi_top_pane_g2

0x0003,

0xfd42,	// (0x0001a886) uniindi_top_pane_g

0xdc6f,	// (0x000187b3) uniindi_top_pane_t1

0xdc99,	// (0x000187dd) list_single_uniindi_pane_ParamLimits

0xdc99,	// (0x000187dd) list_single_uniindi_pane

0xbfb9,	// (0x00016afd) bg_uniindi_top_pane_g1

0xdcac,	// (0x000187f0) list_single_uniindi_pane_g1

0xdcbf,	// (0x00018803) list_single_uniindi_pane_t1

0x4b44,	// (0x0000f688) control_bg_pane

0xdce4,	// (0x00018828) bg_sctrl_sk_pane_cp1

0xdced,	// (0x00018831) bg_sctrl_sk_pane_cp2

0xdcf6,	// (0x0001883a) control_bg_pane_g1

0xdcff,	// (0x00018843) control_bg_pane_g2

0x0001,

0xfd4b,	// (0x0001a88f) control_bg_pane_g

0xb986,	// (0x000164ca) cell_indicator_nsta_pane_g1_ParamLimits

0xb994,	// (0x000164d8) cell_indicator_nsta_pane_g2_ParamLimits

0xfab3,	// (0x0001a5f7) cell_indicator_nsta_pane_g_ParamLimits

0xbcc0,	// (0x00016804) form2_midp_time_pane_t1_ParamLimits

0x5426,	// (0x0000ff6a) main_idle_act4_pane_ParamLimits

0x5426,	// (0x0000ff6a) main_idle_act4_pane

0x588a,	// (0x000103ce) popup_tb_extension_window_ParamLimits

0xdba5,	// (0x000186e9) tb_ext_find_pane_ParamLimits

0xdba5,	// (0x000186e9) tb_ext_find_pane

0xdd08,	// (0x0001884c) ai_gene_pane_1_cp1

0x8d61,	// (0x000138a5) ai_gene_pane_2_cp1

0xdd10,	// (0x00018854) list_single_idle_plugin_calendar_pane

0xdd19,	// (0x0001885d) list_single_idle_plugin_notification_pane

0xdd22,	// (0x00018866) list_single_idle_plugin_player_pane

0xdd2b,	// (0x0001886f) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd2b,	// (0x0001886f) list_single_idle_plugin_shortcut_pane

0xdd4d,	// (0x00018891) main_idle_act4_pane_t1

0xdd5f,	// (0x000188a3) main_idle_act4_pane_t2

0x0001,

0xfd50,	// (0x0001a894) main_idle_act4_pane_t

0xdd71,	// (0x000188b5) middle_sk_idle_act4_pane_ParamLimits

0xdd71,	// (0x000188b5) middle_sk_idle_act4_pane

0xdd87,	// (0x000188cb) popup_clock_digital_analogue_window_cp2

0xdda1,	// (0x000188e5) shortcut_wheel_idle_act4_pane_ParamLimits

0xdda1,	// (0x000188e5) shortcut_wheel_idle_act4_pane

0xbfb9,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g1

0xbfb9,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g2

0xbfb9,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g3

0xbfb9,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g4

0xbfb9,	// (0x00016afd) shortcut_wheel_idle_act4_pane_g5

0xddb5,	// (0x000188f9) shortcut_wheel_idle_act4_pane_g6

0xddbd,	// (0x00018901) shortcut_wheel_idle_act4_pane_g7

0xddc5,	// (0x00018909) shortcut_wheel_idle_act4_pane_g8

0xddcd,	// (0x00018911) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd55,	// (0x0001a899) shortcut_wheel_idle_act4_pane_g

0xc227,	// (0x00016d6b) middle_sk_idle_act4_pane_g1_ParamLimits

0xc227,	// (0x00016d6b) middle_sk_idle_act4_pane_g1

0xde31,	// (0x00018975) middle_sk_idle_act4_pane_g2_ParamLimits

0xde31,	// (0x00018975) middle_sk_idle_act4_pane_g2

0x0001,

0xfd78,	// (0x0001a8bc) middle_sk_idle_act4_pane_g_ParamLimits

0xfd78,	// (0x0001a8bc) middle_sk_idle_act4_pane_g

0xde3d,	// (0x00018981) middle_sk_idle_act4_pane_t1_ParamLimits

0xde3d,	// (0x00018981) middle_sk_idle_act4_pane_t1

0xde5a,	// (0x0001899e) grid_ai_shortcut_pane_ParamLimits

0xde5a,	// (0x0001899e) grid_ai_shortcut_pane

0xde73,	// (0x000189b7) list_highlight_pane_cp16_ParamLimits

0xde73,	// (0x000189b7) list_highlight_pane_cp16

0xde80,	// (0x000189c4) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xde80,	// (0x000189c4) list_single_idle_plugin_shortcut_pane_g1

0xde8c,	// (0x000189d0) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xde8c,	// (0x000189d0) list_single_idle_plugin_shortcut_pane_g2

0xdea4,	// (0x000189e8) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdea4,	// (0x000189e8) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7d,	// (0x0001a8c1) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7d,	// (0x0001a8c1) list_single_idle_plugin_shortcut_pane_g

0xdeb7,	// (0x000189fb) cell_ai_shortcut_pane_ParamLimits

0xdeb7,	// (0x000189fb) cell_ai_shortcut_pane

0xded8,	// (0x00018a1c) cell_ai_shortcut_pane_g1_ParamLimits

0xded8,	// (0x00018a1c) cell_ai_shortcut_pane_g1

0xdd08,	// (0x0001884c) ai_gene_pane_1_cp2

0xdefa,	// (0x00018a3e) ai_gene_pane_2_cp2

0xdf02,	// (0x00018a46) list_highlight_pane_cp15

0xdf0b,	// (0x00018a4f) list_single_idle_plugin_calendar_pane_g1

0xdf02,	// (0x00018a46) list_highlight_pane_cp17

0xdf13,	// (0x00018a57) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf1b,	// (0x00018a5f) list_single_idle_plugin_player_pane_g1

0xb007,	// (0x00015b4b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd84,	// (0x0001a8c8) list_single_idle_plugin_player_pane_g

0xdf23,	// (0x00018a67) list_single_idle_plugin_player_pane_t1

0xdf31,	// (0x00018a75) list_single_idle_plugin_player_pane_t2

0xdf3f,	// (0x00018a83) list_single_idle_plugin_player_pane_t3

0xdf4d,	// (0x00018a91) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd89,	// (0x0001a8cd) list_single_idle_plugin_player_pane_t

0xdf5b,	// (0x00018a9f) wait_bar_pane_cp15

0xdf63,	// (0x00018aa7) grid_ai_notification_pane

0xb007,	// (0x00015b4b) list_single_idle_plugin_notification_pane_g1

0xdf6c,	// (0x00018ab0) cell_ai_notification_pane_ParamLimits

0xdf6c,	// (0x00018ab0) cell_ai_notification_pane

0xdf79,	// (0x00018abd) cell_ai_notification_pane_g1

0xdf81,	// (0x00018ac5) cell_ai_notification_pane_t1

0xdf8f,	// (0x00018ad3) tb_ext_find_button_pane

0xdf97,	// (0x00018adb) tb_ext_find_pane_g1

0xdf9f,	// (0x00018ae3) tb_ext_find_pane_t1

0x8593,	// (0x000130d7) tb_ext_find_button_pane_g1

0xdfad,	// (0x00018af1) tb_ext_find_button_pane_g2

0x0001,

0xfd92,	// (0x0001a8d6) tb_ext_find_button_pane_g

0xdd4d,	// (0x00018891) main_idle_act4_pane_t1_ParamLimits

0xdd5f,	// (0x000188a3) main_idle_act4_pane_t2_ParamLimits

0xfd50,	// (0x0001a894) main_idle_act4_pane_t_ParamLimits

0xdd87,	// (0x000188cb) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdd95,	// (0x000188d9) sat_plugin_idle_act4_pane_ParamLimits

0xdd95,	// (0x000188d9) sat_plugin_idle_act4_pane

0xdfb6,	// (0x00018afa) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdfb6,	// (0x00018afa) sat_plugin_idle_act4_pane_t1

0xdfc9,	// (0x00018b0d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdfc9,	// (0x00018b0d) sat_plugin_idle_act4_pane_t2

0xdfdc,	// (0x00018b20) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdfdc,	// (0x00018b20) sat_plugin_idle_act4_pane_t3

0xdfef,	// (0x00018b33) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdfef,	// (0x00018b33) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd97,	// (0x0001a8db) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd97,	// (0x0001a8db) sat_plugin_idle_act4_pane_t

0x4c09,	// (0x0000f74d) popup_battery_window_ParamLimits

0x4c09,	// (0x0000f74d) popup_battery_window

0x72c7,	// (0x00011e0b) bg_popup_sub_pane_cp25_ParamLimits

0x72c7,	// (0x00011e0b) bg_popup_sub_pane_cp25

0xe002,	// (0x00018b46) popup_battery_window_g1_ParamLimits

0xe002,	// (0x00018b46) popup_battery_window_g1

0xe00e,	// (0x00018b52) popup_battery_window_t1_ParamLimits

0xe00e,	// (0x00018b52) popup_battery_window_t1

0xe020,	// (0x00018b64) popup_battery_window_t2_ParamLimits

0xe020,	// (0x00018b64) popup_battery_window_t2

0x0001,

0xfda0,	// (0x0001a8e4) popup_battery_window_t_ParamLimits

0xfda0,	// (0x0001a8e4) popup_battery_window_t

0x8c2a,	// (0x0001376e) midp_canvas_pane_ParamLimits

0x8ca3,	// (0x000137e7) midp_keypad_pane_ParamLimits

0x8ca3,	// (0x000137e7) midp_keypad_pane

0x8f64,	// (0x00013aa8) main_midp_pane_ParamLimits

0xba00,	// (0x00016544) signal_pane_g2_cp_ParamLimits

0xe03d,	// (0x00018b81) aid_size_cell_midp_keypad_ParamLimits

0xe03d,	// (0x00018b81) aid_size_cell_midp_keypad

0xe057,	// (0x00018b9b) midp_keyp_game_grid_pane_ParamLimits

0xe057,	// (0x00018b9b) midp_keyp_game_grid_pane

0xe077,	// (0x00018bbb) midp_keyp_rocker_pane_ParamLimits

0xe077,	// (0x00018bbb) midp_keyp_rocker_pane

0xe0b0,	// (0x00018bf4) midp_keyp_sk_left_pane_ParamLimits

0xe0b0,	// (0x00018bf4) midp_keyp_sk_left_pane

0xe10a,	// (0x00018c4e) midp_keyp_sk_right_pane_ParamLimits

0xe10a,	// (0x00018c4e) midp_keyp_sk_right_pane

0x6f30,	// (0x00011a74) bg_button_pane_cp03

0xe164,	// (0x00018ca8) midp_keyp_sk_left_pane_g1

0x6f30,	// (0x00011a74) bg_button_pane_cp04

0xe164,	// (0x00018ca8) midp_keyp_sk_right_pane_g1

0xbfb9,	// (0x00016afd) midp_keyp_rocker_pane_g1

0xe16d,	// (0x00018cb1) keyp_game_cell_pane_ParamLimits

0xe16d,	// (0x00018cb1) keyp_game_cell_pane

0x6f30,	// (0x00011a74) bg_button_pane_cp02

0xe180,	// (0x00018cc4) keyp_game_cell_pane_g1

0x4c3f,	// (0x0000f783) popup_fep_vkb2_window_ParamLimits

0x4c3f,	// (0x0000f783) popup_fep_vkb2_window

0x63ff,	// (0x00010f43) aid_size_cell_vkb2_ParamLimits

0x63ff,	// (0x00010f43) aid_size_cell_vkb2

0x6453,	// (0x00010f97) popup_fep_vkb2_window_g1_ParamLimits

0x6453,	// (0x00010f97) popup_fep_vkb2_window_g1

0x649b,	// (0x00010fdf) vkb2_area_bottom_pane_ParamLimits

0x649b,	// (0x00010fdf) vkb2_area_bottom_pane

0x64e7,	// (0x0001102b) vkb2_area_keypad_pane_ParamLimits

0x64e7,	// (0x0001102b) vkb2_area_keypad_pane

0x6529,	// (0x0001106d) vkb2_area_top_pane_ParamLimits

0x6529,	// (0x0001106d) vkb2_area_top_pane

0x65a3,	// (0x000110e7) vkb2_top_entry_pane_ParamLimits

0x65a3,	// (0x000110e7) vkb2_top_entry_pane

0x65cd,	// (0x00011111) vkb2_top_grid_left_pane_ParamLimits

0x65cd,	// (0x00011111) vkb2_top_grid_left_pane

0x65eb,	// (0x0001112f) vkb2_top_grid_right_pane_ParamLimits

0x65eb,	// (0x0001112f) vkb2_top_grid_right_pane

0x6609,	// (0x0001114d) vkb2_cell_keypad_pane_ParamLimits

0x6609,	// (0x0001114d) vkb2_cell_keypad_pane

0x66da,	// (0x0001121e) vkb2_area_bottom_grid_pane_ParamLimits

0x66da,	// (0x0001121e) vkb2_area_bottom_grid_pane

0x6700,	// (0x00011244) vkb2_area_bottom_pane_g1_ParamLimits

0x6700,	// (0x00011244) vkb2_area_bottom_pane_g1

0x6724,	// (0x00011268) vkb2_area_bottom_pane_g2_ParamLimits

0x6724,	// (0x00011268) vkb2_area_bottom_pane_g2

0x6752,	// (0x00011296) vkb2_area_bottom_pane_g3_ParamLimits

0x6752,	// (0x00011296) vkb2_area_bottom_pane_g3

0x0002,

0xfda5,	// (0x0001a8e9) vkb2_area_bottom_pane_g_ParamLimits

0xfda5,	// (0x0001a8e9) vkb2_area_bottom_pane_g

0x67b3,	// (0x000112f7) vkb2_top_cell_left_pane_ParamLimits

0x67b3,	// (0x000112f7) vkb2_top_cell_left_pane

0xe1b2,	// (0x00018cf6) vkb2_top_entry_pane_g1_ParamLimits

0xe1b2,	// (0x00018cf6) vkb2_top_entry_pane_g1

0xe1c0,	// (0x00018d04) vkb2_top_entry_pane_t1_ParamLimits

0xe1c0,	// (0x00018d04) vkb2_top_entry_pane_t1

0xe1f2,	// (0x00018d36) vkb2_top_entry_pane_t2_ParamLimits

0xe1f2,	// (0x00018d36) vkb2_top_entry_pane_t2

0xe224,	// (0x00018d68) vkb2_top_entry_pane_t3_ParamLimits

0xe224,	// (0x00018d68) vkb2_top_entry_pane_t3

0x0002,

0xfdac,	// (0x0001a8f0) vkb2_top_entry_pane_t_ParamLimits

0xfdac,	// (0x0001a8f0) vkb2_top_entry_pane_t

0x6800,	// (0x00011344) vkb2_top_grid_right_pane_g1_ParamLimits

0x6800,	// (0x00011344) vkb2_top_grid_right_pane_g1

0x6816,	// (0x0001135a) vkb2_top_grid_right_pane_g2_ParamLimits

0x6816,	// (0x0001135a) vkb2_top_grid_right_pane_g2

0x682e,	// (0x00011372) vkb2_top_grid_right_pane_g3_ParamLimits

0x682e,	// (0x00011372) vkb2_top_grid_right_pane_g3

0x6846,	// (0x0001138a) vkb2_top_grid_right_pane_g4_ParamLimits

0x6846,	// (0x0001138a) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb3,	// (0x0001a8f7) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb3,	// (0x0001a8f7) vkb2_top_grid_right_pane_g

0x685c,	// (0x000113a0) vkb2_top_cell_left_pane_g1

0x6873,	// (0x000113b7) vkb2_cell_keypad_pane_g1_ParamLimits

0x6873,	// (0x000113b7) vkb2_cell_keypad_pane_g1

0xe248,	// (0x00018d8c) vkb2_cell_keypad_pane_t1_ParamLimits

0xe248,	// (0x00018d8c) vkb2_cell_keypad_pane_t1

0x6881,	// (0x000113c5) vkb2_cell_bottom_grid_pane_ParamLimits

0x6881,	// (0x000113c5) vkb2_cell_bottom_grid_pane

0x68ba,	// (0x000113fe) vkb2_cell_bottom_grid_pane_g1

0xddd5,	// (0x00018919) aid_call2_pane_cp02

0xdddd,	// (0x00018921) aid_call_pane_cp02

0xdde5,	// (0x00018929) clock_digital_number_pane_cp10

0xdded,	// (0x00018931) clock_digital_number_pane_cp11

0xddf5,	// (0x00018939) clock_digital_number_pane_cp12

0xddfd,	// (0x00018941) clock_digital_number_pane_cp13

0xde05,	// (0x00018949) clock_digital_separator_pane_cp10

0x8593,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g1

0x8593,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g2

0xde0d,	// (0x00018951) popup_clock_digital_analogue_window_cp2_g3

0x8593,	// (0x000130d7) popup_clock_digital_analogue_window_cp2_g4

0xde0d,	// (0x00018951) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd68,	// (0x0001a8ac) popup_clock_digital_analogue_window_cp2_g

0xde15,	// (0x00018959) popup_clock_digital_analogue_window_cp2_t1

0xde23,	// (0x00018967) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd73,	// (0x0001a8b7) popup_clock_digital_analogue_window_cp2_t

0xbfb9,	// (0x00016afd) clock_digital_number_pane_cp10_g1

0xbfb9,	// (0x00016afd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0001a693) clock_digital_number_pane_cp10_g

0xbfb9,	// (0x00016afd) clock_digital_separator_pane_cp10_g1

0xbfb9,	// (0x00016afd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4f,	// (0x0001a693) clock_digital_separator_pane_cp10_g

0xdc51,	// (0x00018795) uniindi_top_pane_g3

0xdc62,	// (0x000187a6) uniindi_top_pane_g4

0x6694,	// (0x000111d8) vkb2_row_keypad_pane_ParamLimits

0x6694,	// (0x000111d8) vkb2_row_keypad_pane

0x68da,	// (0x0001141e) vkb2_cell_t_keypad_pane_ParamLimits

0x68da,	// (0x0001141e) vkb2_cell_t_keypad_pane

0x68ea,	// (0x0001142e) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x68ea,	// (0x0001142e) vkb2_cell_t_keypad_pane_cp08

0x68fd,	// (0x00011441) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x68fd,	// (0x00011441) vkb2_cell_t_keypad_pane_cp09

0x6911,	// (0x00011455) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6911,	// (0x00011455) vkb2_cell_t_keypad_pane_cp01

0x6922,	// (0x00011466) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6922,	// (0x00011466) vkb2_cell_t_keypad_pane_cp02

0x6933,	// (0x00011477) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x6933,	// (0x00011477) vkb2_cell_t_keypad_pane_cp03

0x6944,	// (0x00011488) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6944,	// (0x00011488) vkb2_cell_t_keypad_pane_cp04

0x6955,	// (0x00011499) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6955,	// (0x00011499) vkb2_cell_t_keypad_pane_cp05

0x6966,	// (0x000114aa) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6966,	// (0x000114aa) vkb2_cell_t_keypad_pane_cp06

0x6977,	// (0x000114bb) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6977,	// (0x000114bb) vkb2_cell_t_keypad_pane_cp07

0x6988,	// (0x000114cc) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6988,	// (0x000114cc) vkb2_cell_t_keypad_pane_cp10

0x613a,	// (0x00010c7e) vkb2_cell_t_keypad_pane_g1

0xe25f,	// (0x00018da3) vkb2_cell_t_keypad_pane_t1

0x4b44,	// (0x0000f688) popup_grid_graphic2_window

0xe271,	// (0x00018db5) aid_size_cell_graphic2_ParamLimits

0xe271,	// (0x00018db5) aid_size_cell_graphic2

0xe2a9,	// (0x00018ded) bg_popup_window_pane_cp21_ParamLimits

0xe2a9,	// (0x00018ded) bg_popup_window_pane_cp21

0xe2b7,	// (0x00018dfb) graphic2_pages_pane_ParamLimits

0xe2b7,	// (0x00018dfb) graphic2_pages_pane

0xe2fd,	// (0x00018e41) grid_graphic2_control_pane_ParamLimits

0xe2fd,	// (0x00018e41) grid_graphic2_control_pane

0xe33b,	// (0x00018e7f) grid_graphic2_pane_ParamLimits

0xe33b,	// (0x00018e7f) grid_graphic2_pane

0xe3af,	// (0x00018ef3) cell_graphic2_pane

0x4b44,	// (0x0000f688) main_comp_mode_pane

0xd463,	// (0x00017fa7) list_ai3_gene_pane_ParamLimits

0xd897,	// (0x000183db) bg_popup_window_pane_cp19_ParamLimits

0xd8a3,	// (0x000183e7) bg_touch_area_indi_pane_ParamLimits

0xd8a3,	// (0x000183e7) bg_touch_area_indi_pane

0xd8b9,	// (0x000183fd) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8b9,	// (0x000183fd) bg_touch_area_indi_pane_cp01

0xd8cf,	// (0x00018413) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8cf,	// (0x00018413) bg_touch_area_indi_pane_cp02

0xd8e7,	// (0x0001842b) bg_touch_area_indi_pane_cp03_ParamLimits

0xd8e7,	// (0x0001842b) bg_touch_area_indi_pane_cp03

0xd901,	// (0x00018445) popup_slider_window_g1_ParamLimits

0xd91d,	// (0x00018461) popup_slider_window_g2_ParamLimits

0xd939,	// (0x0001847d) popup_slider_window_g3_ParamLimits

0xfcfd,	// (0x0001a841) popup_slider_window_g_ParamLimits

0xd995,	// (0x000184d9) popup_slider_window_t1_ParamLimits

0xda09,	// (0x0001854d) small_volume_slider_vertical_pane_ParamLimits

0xe3af,	// (0x00018ef3) cell_graphic2_pane_ParamLimits

0xe3fd,	// (0x00018f41) bg_button_pane_cp10_ParamLimits

0xe3fd,	// (0x00018f41) bg_button_pane_cp10

0xe410,	// (0x00018f54) bg_button_pane_cp11_ParamLimits

0xe410,	// (0x00018f54) bg_button_pane_cp11

0xe423,	// (0x00018f67) graphic2_pages_pane_g1_ParamLimits

0xe423,	// (0x00018f67) graphic2_pages_pane_g1

0xe43e,	// (0x00018f82) graphic2_pages_pane_g2_ParamLimits

0xe43e,	// (0x00018f82) graphic2_pages_pane_g2

0x0001,

0xfdc1,	// (0x0001a905) graphic2_pages_pane_g_ParamLimits

0xfdc1,	// (0x0001a905) graphic2_pages_pane_g

0xe456,	// (0x00018f9a) graphic2_pages_pane_t1_ParamLimits

0xe456,	// (0x00018f9a) graphic2_pages_pane_t1

0xe46c,	// (0x00018fb0) cell_graphic2_control_pane_ParamLimits

0xe46c,	// (0x00018fb0) cell_graphic2_control_pane

0xe48d,	// (0x00018fd1) cell_graphic2_pane_g1_ParamLimits

0xe48d,	// (0x00018fd1) cell_graphic2_pane_g1

0xe49a,	// (0x00018fde) cell_graphic2_pane_g2_ParamLimits

0xe49a,	// (0x00018fde) cell_graphic2_pane_g2

0xe4a7,	// (0x00018feb) cell_graphic2_pane_g3_ParamLimits

0xe4a7,	// (0x00018feb) cell_graphic2_pane_g3

0xe4b4,	// (0x00018ff8) cell_graphic2_pane_g4_ParamLimits

0xe4b4,	// (0x00018ff8) cell_graphic2_pane_g4

0xe4c1,	// (0x00019005) cell_graphic2_pane_g5_ParamLimits

0xe4c1,	// (0x00019005) cell_graphic2_pane_g5

0x0004,

0xfdc6,	// (0x0001a90a) cell_graphic2_pane_g_ParamLimits

0xfdc6,	// (0x0001a90a) cell_graphic2_pane_g

0xe4dc,	// (0x00019020) cell_graphic2_pane_t1_ParamLimits

0xe4dc,	// (0x00019020) cell_graphic2_pane_t1

0x95a4,	// (0x000140e8) grid_highlight_pane_cp11_ParamLimits

0x95a4,	// (0x000140e8) grid_highlight_pane_cp11

0x72c7,	// (0x00011e0b) bg_button_pane_cp05

0xe505,	// (0x00019049) cell_graphic2_control_pane_g1

0xbfb9,	// (0x00016afd) bg_touch_area_indi_pane_g1

0xe52d,	// (0x00019071) aid_cmod_rocker_key_size

0xe537,	// (0x0001907b) aid_cmode_itu_key_size

0xe541,	// (0x00019085) main_cmode_video_pane

0xe54b,	// (0x0001908f) main_comp_mode_itu_pane

0xe557,	// (0x0001909b) main_comp_mode_rocker_pane

0xe563,	// (0x000190a7) cell_cmode_rocker_pane_ParamLimits

0xe563,	// (0x000190a7) cell_cmode_rocker_pane

0xe575,	// (0x000190b9) cell_cmode_itu_pane_ParamLimits

0xe575,	// (0x000190b9) cell_cmode_itu_pane

0x7de3,	// (0x00012927) bg_button_pane_cp06_ParamLimits

0x7de3,	// (0x00012927) bg_button_pane_cp06

0xc227,	// (0x00016d6b) cell_cmode_rocker_pane_g1_ParamLimits

0xc227,	// (0x00016d6b) cell_cmode_rocker_pane_g1

0xdaad,	// (0x000185f1) cell_cmode_rocker_pane_g2_ParamLimits

0xdaad,	// (0x000185f1) cell_cmode_rocker_pane_g2

0x0001,

0xfdd6,	// (0x0001a91a) cell_cmode_rocker_pane_g_ParamLimits

0xfdd6,	// (0x0001a91a) cell_cmode_rocker_pane_g

0x6f30,	// (0x00011a74) bg_button_pane_cp07

0xe58a,	// (0x000190ce) cell_cmode_itu_pane_g1

0xe593,	// (0x000190d7) cell_cmode_itu_pane_t1

0xe5a1,	// (0x000190e5) cell_cmode_itu_pane_t2

0x0001,

0xfddb,	// (0x0001a91f) cell_cmode_itu_pane_t

0xdcd4,	// (0x00018818) aid_touch_ctrl_left

0xdcdc,	// (0x00018820) aid_touch_ctrl_right

0x6f30,	// (0x00011a74) compa_mode_pane

0xe5af,	// (0x000190f3) aid_cmod_rocker_key_size_cp

0xe5b9,	// (0x000190fd) aid_cmode_itu_key_size_cp

0xe5c3,	// (0x00019107) compa_mode_pane_g1

0xe5cb,	// (0x0001910f) compa_mode_pane_g2

0xe5d3,	// (0x00019117) compa_mode_pane_g3

0x0002,

0xfde0,	// (0x0001a924) compa_mode_pane_g

0xe5db,	// (0x0001911f) main_comp_mode_itu_pane_cp

0xe5e3,	// (0x00019127) main_comp_mode_rocker_pane_cp

0xe5eb,	// (0x0001912f) cell_cmode_itu_pane_cp_ParamLimits

0xe5eb,	// (0x0001912f) cell_cmode_itu_pane_cp

0xe600,	// (0x00019144) cell_cmode_rocker_pane_cp_ParamLimits

0xe600,	// (0x00019144) cell_cmode_rocker_pane_cp

0x7de3,	// (0x00012927) bg_button_pane_cp06_cp_ParamLimits

0x7de3,	// (0x00012927) bg_button_pane_cp06_cp

0xc227,	// (0x00016d6b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc227,	// (0x00016d6b) cell_cmode_rocker_pane_g1_cp

0xbfb9,	// (0x00016afd) cell_cmode_rocker_pane_g2_cp

0x6f30,	// (0x00011a74) bg_button_pane_cp07_cp

0xe612,	// (0x00019156) cell_cmode_itu_pane_g1_cp

0xe61b,	// (0x0001915f) cell_cmode_itu_pane_t1_cp

0xe61b,	// (0x0001915f) cell_cmode_itu_pane_t2_cp

0xaab4,	// (0x000155f8) settings_code_pane_cp2

0x7024,	// (0x00011b68) bg_popup_window_pane_cp3_ParamLimits

0x7495,	// (0x00011fd9) heading_pane_cp3_ParamLimits

0x74a1,	// (0x00011fe5) listscroll_popup_graphic_pane_ParamLimits

0x5ee3,	// (0x00010a27) fep_hwr_aid_pane_ParamLimits

0x635a,	// (0x00010e9e) aid_touch_sctrl_top_ParamLimits

0x6375,	// (0x00010eb9) sctrl_sk_top_pane_g1_ParamLimits

0x613a,	// (0x00010c7e) sctrl_sk_top_pane_g2_ParamLimits

0xfd16,	// (0x0001a85a) sctrl_sk_top_pane_g_ParamLimits

0x6382,	// (0x00010ec6) sctrl_sk_top_pane_t1_ParamLimits

0x635a,	// (0x00010e9e) aid_touch_sctrl_bottom_ParamLimits

0x6382,	// (0x00010ec6) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc1d,	// (0x00018761) aid_area_touch_clock

0x656b,	// (0x000110af) aid_vkb2_area_top_pane_cell_ParamLimits

0x656b,	// (0x000110af) aid_vkb2_area_top_pane_cell

0x66b6,	// (0x000111fa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x66b6,	// (0x000111fa) aid_vkb2_area_bottom_pane_cell

0xe1aa,	// (0x00018cee) popup_char_count_window

0xe629,	// (0x0001916d) popup_char_count_window_g1

0xe632,	// (0x00019176) popup_char_count_window_g2

0xe63b,	// (0x0001917f) popup_char_count_window_g3

0x0002,

0xfde7,	// (0x0001a92b) popup_char_count_window_g

0xe644,	// (0x00019188) popup_char_count_window_t1

0x6431,	// (0x00010f75) popup_fep_char_preview_window_ParamLimits

0x6431,	// (0x00010f75) popup_fep_char_preview_window

0x6589,	// (0x000110cd) vkb2_top_candi_pane_ParamLimits

0x6589,	// (0x000110cd) vkb2_top_candi_pane

0xe652,	// (0x00019196) cell_vkb2_top_candi_pane_ParamLimits

0xe652,	// (0x00019196) cell_vkb2_top_candi_pane

0x699d,	// (0x000114e1) bg_popup_fep_char_preview_window_ParamLimits

0x699d,	// (0x000114e1) bg_popup_fep_char_preview_window

0x69ab,	// (0x000114ef) popup_fep_char_preview_window_t1_ParamLimits

0x69ab,	// (0x000114ef) popup_fep_char_preview_window_t1

0xe69f,	// (0x000191e3) bg_popup_fep_char_preview_window_g1

0xe6a7,	// (0x000191eb) bg_popup_fep_char_preview_window_g2

0xe6af,	// (0x000191f3) bg_popup_fep_char_preview_window_g3

0xe6b7,	// (0x000191fb) bg_popup_fep_char_preview_window_g4

0xe6bf,	// (0x00019203) bg_popup_fep_char_preview_window_g5

0x69e5,	// (0x00011529) bg_popup_fep_char_preview_window_g6

0xe6c7,	// (0x0001920b) bg_popup_fep_char_preview_window_g7

0xe6cf,	// (0x00019213) bg_popup_fep_char_preview_window_g8

0xe6d7,	// (0x0001921b) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdee,	// (0x0001a932) bg_popup_fep_char_preview_window_g

0x613a,	// (0x00010c7e) cell_vkb2_top_candi_pane_g1_ParamLimits

0x613a,	// (0x00010c7e) cell_vkb2_top_candi_pane_g1

0x6148,	// (0x00010c8c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6148,	// (0x00010c8c) cell_vkb2_top_candi_pane_g2

0xe189,	// (0x00018ccd) cell_vkb2_top_candi_pane_g3_ParamLimits

0xe189,	// (0x00018ccd) cell_vkb2_top_candi_pane_g3

0x69ed,	// (0x00011531) cell_vkb2_top_candi_pane_g4_ParamLimits

0x69ed,	// (0x00011531) cell_vkb2_top_candi_pane_g4

0xc898,	// (0x000173dc) cell_vkb2_top_candi_pane_g5_ParamLimits

0xc898,	// (0x000173dc) cell_vkb2_top_candi_pane_g5

0x6a0e,	// (0x00011552) cell_vkb2_top_candi_pane_g6_ParamLimits

0x6a0e,	// (0x00011552) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe01,	// (0x0001a945) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe01,	// (0x0001a945) cell_vkb2_top_candi_pane_g

0x6a1c,	// (0x00011560) cell_vkb2_top_candi_pane_t1

0x5d1f,	// (0x00010863) aid_size_touch_slider_mark_ParamLimits

0x5d1f,	// (0x00010863) aid_size_touch_slider_mark

0xe2ed,	// (0x00018e31) grid_graphic2_catg_pane_ParamLimits

0xe2ed,	// (0x00018e31) grid_graphic2_catg_pane

0xe38b,	// (0x00018ecf) popup_grid_graphic2_window_t1_ParamLimits

0xe38b,	// (0x00018ecf) popup_grid_graphic2_window_t1

0xe39d,	// (0x00018ee1) popup_grid_graphic2_window_t2_ParamLimits

0xe39d,	// (0x00018ee1) popup_grid_graphic2_window_t2

0x0001,

0xfdbc,	// (0x0001a900) popup_grid_graphic2_window_t_ParamLimits

0xfdbc,	// (0x0001a900) popup_grid_graphic2_window_t

0x72c7,	// (0x00011e0b) bg_button_pane_cp05_ParamLimits

0xe505,	// (0x00019049) cell_graphic2_control_pane_g1_ParamLimits

0xe6df,	// (0x00019223) cell_graphic2_catg_pane_ParamLimits

0xe6df,	// (0x00019223) cell_graphic2_catg_pane

0x6f30,	// (0x00011a74) bg_button_pane_cp12

0xe6f1,	// (0x00019235) cell_graphic2_catg_pane_g1

0xdbe9,	// (0x0001872d) cell_tb_ext_pane_t1_ParamLimits

0x67d3,	// (0x00011317) vkb2_top_cell_right_narrow_pane_ParamLimits

0x67d3,	// (0x00011317) vkb2_top_cell_right_narrow_pane

0x67eb,	// (0x0001132f) vkb2_top_cell_right_wide_pane_ParamLimits

0x67eb,	// (0x0001132f) vkb2_top_cell_right_wide_pane

0x5ed5,	// (0x00010a19) bg_vkb2_func_pane_ParamLimits

0x5ed5,	// (0x00010a19) bg_vkb2_func_pane

0x685c,	// (0x000113a0) vkb2_top_cell_left_pane_g1_ParamLimits

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp03

0x68ba,	// (0x000113fe) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9488,	// (0x00013fcc) bg_vkb2_func_pane_g1

0x9490,	// (0x00013fd4) bg_vkb2_func_pane_g2

0x94a0,	// (0x00013fe4) bg_vkb2_func_pane_g3

0x9498,	// (0x00013fdc) bg_vkb2_func_pane_g4

0x94a8,	// (0x00013fec) bg_vkb2_func_pane_g5

0x94b0,	// (0x00013ff4) bg_vkb2_func_pane_g6

0x94b8,	// (0x00013ffc) bg_vkb2_func_pane_g7

0x94c0,	// (0x00014004) bg_vkb2_func_pane_g8

0x9480,	// (0x00013fc4) bg_vkb2_func_pane_g9

0x0008,

0xfe0e,	// (0x0001a952) bg_vkb2_func_pane_g

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp01

0x685c,	// (0x000113a0) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x685c,	// (0x000113a0) vkb2_top_cell_right_wide_pane_g1

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5ed5,	// (0x00010a19) bg_vkb2_fuc_pane_cp02

0x68ba,	// (0x000113fe) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x68ba,	// (0x000113fe) vkb2_top_cell_right_narrow_pane_g1

0xd815,	// (0x00018359) aid_touch_area_decrease_ParamLimits

0xd815,	// (0x00018359) aid_touch_area_decrease

0xd839,	// (0x0001837d) aid_touch_area_increase_ParamLimits

0xd839,	// (0x0001837d) aid_touch_area_increase

0xd845,	// (0x00018389) aid_touch_area_mute_ParamLimits

0xd845,	// (0x00018389) aid_touch_area_mute

0xd869,	// (0x000183ad) aid_touch_area_slider_ParamLimits

0xd869,	// (0x000183ad) aid_touch_area_slider

0xd955,	// (0x00018499) popup_slider_window_g4_ParamLimits

0xd955,	// (0x00018499) popup_slider_window_g4

0xd961,	// (0x000184a5) popup_slider_window_g5_ParamLimits

0xd961,	// (0x000184a5) popup_slider_window_g5

0xd983,	// (0x000184c7) popup_slider_window_g6_ParamLimits

0xd983,	// (0x000184c7) popup_slider_window_g6

0xd9c3,	// (0x00018507) popup_slider_window_t2_ParamLimits

0xd9c3,	// (0x00018507) popup_slider_window_t2

0x0001,

0xfd0a,	// (0x0001a84e) popup_slider_window_t_ParamLimits

0xfd0a,	// (0x0001a84e) popup_slider_window_t

0xd9db,	// (0x0001851f) slider_pane_ParamLimits

0xd9db,	// (0x0001851f) slider_pane

0xe6fa,	// (0x0001923e) slider_pane_g1_ParamLimits

0xe6fa,	// (0x0001923e) slider_pane_g1

0xe70e,	// (0x00019252) slider_pane_g2_ParamLimits

0xe70e,	// (0x00019252) slider_pane_g2

0xe724,	// (0x00019268) slider_pane_g3_ParamLimits

0xe724,	// (0x00019268) slider_pane_g3

0x0003,

0xfe21,	// (0x0001a965) slider_pane_g_ParamLimits

0xfe21,	// (0x0001a965) slider_pane_g

0x58e6,	// (0x0001042a) popup_tb_float_extension_window_ParamLimits

0x58e6,	// (0x0001042a) popup_tb_float_extension_window

0xe750,	// (0x00019294) aid_size_cell_tb_float_ext

0x6f30,	// (0x00011a74) bg_popup_sub_window_cp28

0xe75c,	// (0x000192a0) grid_tb_float_ext_pane

0xe766,	// (0x000192aa) cell_tb_float_ext_pane_ParamLimits

0xe766,	// (0x000192aa) cell_tb_float_ext_pane

0xe780,	// (0x000192c4) cell_tb_float_ext_pane_g1

0xe789,	// (0x000192cd) grid_highlight_pane_cp12

0x6024,	// (0x00010b68) cell_last_hwr_side_pane_ParamLimits

0x6024,	// (0x00010b68) cell_last_hwr_side_pane

0xbfb9,	// (0x00016afd) cell_last_hwr_side_pane_g1

0xe792,	// (0x000192d6) cell_last_hwr_side_pane_g2

0x0001,

0xfe2a,	// (0x0001a96e) cell_last_hwr_side_pane_g

0x6782,	// (0x000112c6) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6782,	// (0x000112c6) vkb2_area_bottom_space_btn_pane

0x613a,	// (0x00010c7e) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe25f,	// (0x00018da3) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6a1c,	// (0x00011560) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6a3b,	// (0x0001157f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6a3b,	// (0x0001157f) vkb2_area_bottom_space_btn_pane_g1

0x6a75,	// (0x000115b9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a75,	// (0x000115b9) vkb2_area_bottom_space_btn_pane_g2

0x6aab,	// (0x000115ef) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6aab,	// (0x000115ef) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2f,	// (0x0001a973) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2f,	// (0x0001a973) vkb2_area_bottom_space_btn_pane_g

0x5f98,	// (0x00010adc) cel_fep_hwr_func_pane_ParamLimits

0x5f98,	// (0x00010adc) cel_fep_hwr_func_pane

0x5fd4,	// (0x00010b18) cell_hwr_side_button_pane_ParamLimits

0x5fd4,	// (0x00010b18) cell_hwr_side_button_pane

0xdc1d,	// (0x00018761) aid_area_touch_clock_ParamLimits

0x72c7,	// (0x00011e0b) bg_uniindi_top_pane_ParamLimits

0xdc2f,	// (0x00018773) uniindi_top_pane_g1_ParamLimits

0xdc45,	// (0x00018789) uniindi_top_pane_g2_ParamLimits

0xdc51,	// (0x00018795) uniindi_top_pane_g3_ParamLimits

0xdc62,	// (0x000187a6) uniindi_top_pane_g4_ParamLimits

0xfd42,	// (0x0001a886) uniindi_top_pane_g_ParamLimits

0xdc6f,	// (0x000187b3) uniindi_top_pane_t1_ParamLimits

0x72c7,	// (0x00011e0b) bg_vkb2_func_pane_cp01_ParamLimits

0x72c7,	// (0x00011e0b) bg_vkb2_func_pane_cp01

0xe79b,	// (0x000192df) cel_fep_hwr_func_pane_g1_ParamLimits

0xe79b,	// (0x000192df) cel_fep_hwr_func_pane_g1

0x72c7,	// (0x00011e0b) bg_vkb2_func_pane_cp02_ParamLimits

0x72c7,	// (0x00011e0b) bg_vkb2_func_pane_cp02

0xe79b,	// (0x000192df) cell_hwr_side_button_pane_g1_ParamLimits

0xe79b,	// (0x000192df) cell_hwr_side_button_pane_g1

0x92eb,	// (0x00013e2f) status_pane_g4_ParamLimits

0x92eb,	// (0x00013e2f) status_pane_g4

0x9305,	// (0x00013e49) status_pane_t1

0xbcd3,	// (0x00016817) form2_midp_gauge_slider_cont_pane

0xbcdb,	// (0x0001681f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbced,	// (0x00016831) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbcff,	// (0x00016843) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb02,	// (0x0001a646) form2_midp_gauge_slider_pane_t_ParamLimits

0xbd11,	// (0x00016855) form2_midp_slider_pane_ParamLimits

0x63f1,	// (0x00010f35) aid_size_cell_func_vkb2_ParamLimits

0x63f1,	// (0x00010f35) aid_size_cell_func_vkb2

0xe73c,	// (0x00019280) slider_pane_g4_ParamLimits

0xe73c,	// (0x00019280) slider_pane_g4

0x6af5,	// (0x00011639) form2_midp_gauge_slider_pane_t2_cp01

0x6b03,	// (0x00011647) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x6b03,	// (0x00011647) form2_midp_gauge_slider_pane_t3_cp01

0x6b20,	// (0x00011664) form2_midp_slider_pane_cp01

0x6f30,	// (0x00011a74) navi_smil_pane

0xe7d4,	// (0x00019318) navi_smil_pane_g1

0xe7dc,	// (0x00019320) navi_smil_pane_t1

0xe7a9,	// (0x000192ed) form2_midp_slider_pane_g1

0xe7b2,	// (0x000192f6) form2_midp_slider_pane_g2

0xe7ba,	// (0x000192fe) form2_midp_slider_pane_g3

0xe7a9,	// (0x000192ed) form2_midp_slider_pane_g4

0xe7c2,	// (0x00019306) form2_midp_slider_pane_g5

0x0004,

0xfe38,	// (0x0001a97c) form2_midp_slider_pane_g

0x6ae5,	// (0x00011629) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6ae5,	// (0x00011629) vkb2_area_bottom_space_btn_pane_g4

0x9122,	// (0x00013c66) lc0_navi_pane_ParamLimits

0x9122,	// (0x00013c66) lc0_navi_pane

0x9198,	// (0x00013cdc) lc0_stat_indi_pane_ParamLimits

0x9198,	// (0x00013cdc) lc0_stat_indi_pane

0x91af,	// (0x00013cf3) ls0_title_pane_ParamLimits

0x91af,	// (0x00013cf3) ls0_title_pane

0x7de3,	// (0x00012927) bg_popup_sub_pane_cp14_ParamLimits

0xdc04,	// (0x00018748) list_uniindi_pane_ParamLimits

0xdc10,	// (0x00018754) uniindi_top_pane_ParamLimits

0xdcac,	// (0x000187f0) list_single_uniindi_pane_g1_ParamLimits

0xdcbf,	// (0x00018803) list_single_uniindi_pane_t1_ParamLimits

0x6b29,	// (0x0001166d) lc0_stat_clock_pane_ParamLimits

0x6b29,	// (0x0001166d) lc0_stat_clock_pane

0xe7ea,	// (0x0001932e) lc0_stat_indi_pane_g1_ParamLimits

0xe7ea,	// (0x0001932e) lc0_stat_indi_pane_g1

0xe7f7,	// (0x0001933b) lc0_stat_indi_pane_g2_ParamLimits

0xe7f7,	// (0x0001933b) lc0_stat_indi_pane_g2

0x0001,

0xfe43,	// (0x0001a987) lc0_stat_indi_pane_g_ParamLimits

0xfe43,	// (0x0001a987) lc0_stat_indi_pane_g

0x6b36,	// (0x0001167a) lc0_uni_indicator_pane_ParamLimits

0x6b36,	// (0x0001167a) lc0_uni_indicator_pane

0xe804,	// (0x00019348) ls0_title_pane_g1_ParamLimits

0xe804,	// (0x00019348) ls0_title_pane_g1

0xe818,	// (0x0001935c) ls0_title_pane_t1_ParamLimits

0xe818,	// (0x0001935c) ls0_title_pane_t1

0x6b43,	// (0x00011687) lc0_uni_indicator_pane_g1_ParamLimits

0x6b43,	// (0x00011687) lc0_uni_indicator_pane_g1

0xe84e,	// (0x00019392) lc0_stat_clock_pane_t1

0x4b44,	// (0x0000f688) main_ai5_pane

0xe85c,	// (0x000193a0) ai5_sk_pane_ParamLimits

0xe85c,	// (0x000193a0) ai5_sk_pane

0xe869,	// (0x000193ad) cell_ai5_widget_pane_ParamLimits

0xe869,	// (0x000193ad) cell_ai5_widget_pane

0xe933,	// (0x00019477) aid_size_cell_widget_grid

0xe949,	// (0x0001948d) bg_ai5_widget_pane_ParamLimits

0xe949,	// (0x0001948d) bg_ai5_widget_pane

0xe9bd,	// (0x00019501) cell_ai5_widget_pane_g2

0xe9cd,	// (0x00019511) cell_ai5_widget_pane_g3

0xe9e4,	// (0x00019528) cell_ai5_widget_pane_g4

0xe9f0,	// (0x00019534) cell_ai5_widget_pane_g5

0xe9fc,	// (0x00019540) cell_ai5_widget_pane_g6

0xea08,	// (0x0001954c) cell_ai5_widget_pane_g7

0xea50,	// (0x00019594) cell_ai5_widget_pane_t1_ParamLimits

0xea50,	// (0x00019594) cell_ai5_widget_pane_t1

0xea6d,	// (0x000195b1) cell_ai5_widget_pane_t2_ParamLimits

0xea6d,	// (0x000195b1) cell_ai5_widget_pane_t2

0xea85,	// (0x000195c9) cell_ai5_widget_pane_t3_ParamLimits

0xea85,	// (0x000195c9) cell_ai5_widget_pane_t3

0xea9d,	// (0x000195e1) cell_ai5_widget_pane_t4_ParamLimits

0xea9d,	// (0x000195e1) cell_ai5_widget_pane_t4

0xeaba,	// (0x000195fe) cell_ai5_widget_pane_t5_ParamLimits

0xeaba,	// (0x000195fe) cell_ai5_widget_pane_t5

0xead9,	// (0x0001961d) cell_ai5_widget_pane_t6_ParamLimits

0xead9,	// (0x0001961d) cell_ai5_widget_pane_t6

0xeaeb,	// (0x0001962f) cell_ai5_widget_pane_t7_ParamLimits

0xeaeb,	// (0x0001962f) cell_ai5_widget_pane_t7

0xeb04,	// (0x00019648) cell_ai5_widget_pane_t8_ParamLimits

0xeb04,	// (0x00019648) cell_ai5_widget_pane_t8

0x0009,

0xfe5d,	// (0x0001a9a1) cell_ai5_widget_pane_t_ParamLimits

0xfe5d,	// (0x0001a9a1) cell_ai5_widget_pane_t

0xeb58,	// (0x0001969c) grid_ai5_widget_pane

0x7de3,	// (0x00012927) highlight_cell_ai5_widget_pane_ParamLimits

0x7de3,	// (0x00012927) highlight_cell_ai5_widget_pane

0xeb70,	// (0x000196b4) ai5_sk_left_pane

0xeb7a,	// (0x000196be) ai5_sk_middle_pane

0xeb84,	// (0x000196c8) ai5_sk_right_pane

0xeb8e,	// (0x000196d2) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x000196d2) bg_ai5_widget_pane_g1

0xeb9a,	// (0x000196de) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x000196de) bg_ai5_widget_pane_g2

0xeba6,	// (0x000196ea) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x000196ea) bg_ai5_widget_pane_g3

0xebb2,	// (0x000196f6) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x000196f6) bg_ai5_widget_pane_g4

0xebbe,	// (0x00019702) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x00019702) bg_ai5_widget_pane_g5

0xebca,	// (0x0001970e) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x0001970e) bg_ai5_widget_pane_g6

0xebd6,	// (0x0001971a) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x0001971a) bg_ai5_widget_pane_g7

0xebe2,	// (0x00019726) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x00019726) bg_ai5_widget_pane_g8

0xebee,	// (0x00019732) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x00019732) bg_ai5_widget_pane_g9

0x0008,

0xfe72,	// (0x0001a9b6) bg_ai5_widget_pane_g_ParamLimits

0xfe72,	// (0x0001a9b6) bg_ai5_widget_pane_g

0xec20,	// (0x00019764) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x00019764) cell_shortcut_ai5_widget_pane

0x8c22,	// (0x00013766) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x00019775) cell_grid_ai5_widget_pane_g1

0x8c22,	// (0x00013766) highlight_cell_shortcut_ai5_widget_pane

0x9488,	// (0x00013fcc) ai5_sk_left_pane_g1

0xec3a,	// (0x0001977e) ai5_sk_left_pane_g2

0xec42,	// (0x00019786) ai5_sk_left_pane_g3

0xec4a,	// (0x0001978e) ai5_sk_left_pane_g4

0x0003,

0xfe85,	// (0x0001a9c9) ai5_sk_left_pane_g

0xec52,	// (0x00019796) ai5_sk_left_pane_t1

0x9490,	// (0x00013fd4) ai5_sk_right_pane_g1

0xec60,	// (0x000197a4) ai5_sk_right_pane_g2

0xec68,	// (0x000197ac) ai5_sk_right_pane_g3

0xec70,	// (0x000197b4) ai5_sk_right_pane_g4

0x0003,

0xfe8e,	// (0x0001a9d2) ai5_sk_right_pane_g

0xec78,	// (0x000197bc) ai5_sk_right_pane_t1

0x9490,	// (0x00013fd4) ai5_sk_middle_pane_g1

0x9488,	// (0x00013fcc) ai5_sk_middle_pane_g2

0x94a8,	// (0x00013fec) ai5_sk_middle_pane_g3

0xec68,	// (0x000197ac) ai5_sk_middle_pane_g4

0xec42,	// (0x00019786) ai5_sk_middle_pane_g5

0xec86,	// (0x000197ca) ai5_sk_middle_pane_g6

0xec8e,	// (0x000197d2) ai5_sk_middle_pane_g7

0x0006,

0xfe97,	// (0x0001a9db) ai5_sk_middle_pane_g

0x8fb2,	// (0x00013af6) aid_touch_area_size_lc0_ParamLimits

0x8fb2,	// (0x00013af6) aid_touch_area_size_lc0

0x6169,	// (0x00010cad) cell_hwr_candidate_pane_t1_ParamLimits

0x8fce,	// (0x00013b12) aid_touch_navi_pane

0x929d,	// (0x00013de1) status_dt_navi_pane_ParamLimits

0x929d,	// (0x00013de1) status_dt_navi_pane

0x92aa,	// (0x00013dee) status_dt_sta_pane_ParamLimits

0x92aa,	// (0x00013dee) status_dt_sta_pane

0xec96,	// (0x000197da) dt_sta_controll_pane

0xeca3,	// (0x000197e7) dt_sta_indi_pane

0xecb4,	// (0x000197f8) dt_sta_title_pane

0x72c7,	// (0x00011e0b) bg_dt_sta_indi_pane_ParamLimits

0x72c7,	// (0x00011e0b) bg_dt_sta_indi_pane

0xecc7,	// (0x0001980b) dt_sta_battery_pane

0xeccf,	// (0x00019813) dt_sta_indi_pane_g1

0xecd8,	// (0x0001981c) dt_sta_indi_pane_g2

0xece1,	// (0x00019825) dt_sta_indi_pane_g3

0x0002,

0xfea6,	// (0x0001a9ea) dt_sta_indi_pane_g

0xecea,	// (0x0001982e) dt_sta_signal_pane

0x7de3,	// (0x00012927) bg_dt_sta_title_pane_ParamLimits

0x7de3,	// (0x00012927) bg_dt_sta_title_pane

0xecf3,	// (0x00019837) dt_sta_title_pane_g1

0xecfb,	// (0x0001983f) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x0001983f) dt_sta_title_pane_t1

0x6f30,	// (0x00011a74) bg_dt_sta_control_pane

0xed10,	// (0x00019854) dt_sta_controll_pane_g1

0xed19,	// (0x0001985d) bg_dt_sta_title_pane_g1

0xed22,	// (0x00019866) bg_dt_sta_title_pane_g2

0xed2b,	// (0x0001986f) bg_dt_sta_title_pane_g3

0x0002,

0xfead,	// (0x0001a9f1) bg_dt_sta_title_pane_g

0xbfb9,	// (0x00016afd) bg_dt_sta_indi_pane_g1

0xed34,	// (0x00019878) dt_sta_signal_pane_g1

0xed3c,	// (0x00019880) dt_sta_signal_pane_g2

0x0001,

0xfeb4,	// (0x0001a9f8) dt_sta_signal_pane_g

0xed44,	// (0x00019888) dt_sta_battery_pane_g1

0xed4d,	// (0x00019891) dt_sta_battery_pane_t1

0xbfb9,	// (0x00016afd) bg_dt_sta_control_pane_g1

0x86a1,	// (0x000131e5) fep_china_uni_eep_pane

0x86a9,	// (0x000131ed) fep_china_uni_entry_pane_ParamLimits

0x86b9,	// (0x000131fd) popup_fep_china_uni_window_g1_ParamLimits

0x86c9,	// (0x0001320d) popup_fep_china_uni_window_g2_ParamLimits

0x86c9,	// (0x0001320d) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001a25c) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001a25c) popup_fep_china_uni_window_g

0xed5c,	// (0x000198a0) fep_china_uni_eep_pane_g1

0xed64,	// (0x000198a8) fep_china_uni_eep_pane_t1

0xe7cb,	// (0x0001930f) aid_touch_area_size_smil_player

0x911a,	// (0x00013c5e) lc0_clock_pane

0x92f9,	// (0x00013e3d) status_pane_g5_ParamLimits

0x92f9,	// (0x00013e3d) status_pane_g5

0x55ad,	// (0x000100f1) popup_keymap_window

0x92bf,	// (0x00013e03) status_icon_pane

0xe9cd,	// (0x00019511) cell_ai5_widget_pane_g3_ParamLimits

0xe9e4,	// (0x00019528) cell_ai5_widget_pane_g4_ParamLimits

0xe9f0,	// (0x00019534) cell_ai5_widget_pane_g5_ParamLimits

0xea14,	// (0x00019558) cell_ai5_widget_pane_g8_ParamLimits

0xea14,	// (0x00019558) cell_ai5_widget_pane_g8

0xea28,	// (0x0001956c) cell_ai5_widget_pane_g9_ParamLimits

0xea28,	// (0x0001956c) cell_ai5_widget_pane_g9

0xea3c,	// (0x00019580) cell_ai5_widget_pane_g10_ParamLimits

0xea3c,	// (0x00019580) cell_ai5_widget_pane_g10

0xed73,	// (0x000198b7) status_icon_pane_g1

0x6f30,	// (0x00011a74) bg_popup_sub_pane_cp13

0xed7b,	// (0x000198bf) popup_keymap_window_t1

0x8ee7,	// (0x00013a2b) control_pane_g6_ParamLimits

0x8ee7,	// (0x00013a2b) control_pane_g6

0x8ef4,	// (0x00013a38) control_pane_g7_ParamLimits

0x8ef4,	// (0x00013a38) control_pane_g7

0x8f01,	// (0x00013a45) control_pane_g8_ParamLimits

0x8f01,	// (0x00013a45) control_pane_g8

0xec96,	// (0x000197da) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x000197e7) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x000197f8) dt_sta_title_pane_ParamLimits

0x77d0,	// (0x00012314) aid_size_touch_scroll_bar_cale

0x4c1d,	// (0x0000f761) popup_discreet_window_ParamLimits

0x4c1d,	// (0x0000f761) popup_discreet_window

0x4c97,	// (0x0000f7db) popup_sk_window

0x9bfb,	// (0x0001473f) bg_popup_sub_pane_cp28_ParamLimits

0x9bfb,	// (0x0001473f) bg_popup_sub_pane_cp28

0xed89,	// (0x000198cd) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x000198cd) popup_discreet_window_g1

0xeda9,	// (0x000198ed) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x000198ed) popup_discreet_window_t1

0xedc7,	// (0x0001990b) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x0001990b) popup_discreet_window_t2

0x0002,

0xfeb9,	// (0x0001a9fd) popup_discreet_window_t_ParamLimits

0xfeb9,	// (0x0001a9fd) popup_discreet_window_t

0x6b58,	// (0x0001169c) popup_sk_window_g1

0x6b62,	// (0x000116a6) popup_sk_window_g2

0x0001,

0xfec0,	// (0x0001aa04) popup_sk_window_g

0x6b6c,	// (0x000116b0) popup_sk_window_t1

0x6b7a,	// (0x000116be) popup_sk_window_t1_copy1

0xe9bd,	// (0x00019501) cell_ai5_widget_pane_g2_ParamLimits

0xeb16,	// (0x0001965a) cell_ai5_widget_pane_t9_ParamLimits

0xeb16,	// (0x0001965a) cell_ai5_widget_pane_t9

0x6f30,	// (0x00011a74) main_fep_fshwr2_pane

0x6b88,	// (0x000116cc) aid_fshwr2_btn_pane

0x6b94,	// (0x000116d8) aid_fshwr2_syb_pane

0x6ba0,	// (0x000116e4) aid_fshwr2_txt_pane

0x6bac,	// (0x000116f0) fshwr2_func_candi_pane

0x6bc1,	// (0x00011705) fshwr2_hwr_syb_pane

0x6bd1,	// (0x00011715) fshwr2_icf_pane

0x4b44,	// (0x0000f688) fshwr2_icf_bg_pane

0x6bfa,	// (0x0001173e) fshwr2_icf_pane_t1_ParamLimits

0x6bfa,	// (0x0001173e) fshwr2_icf_pane_t1

0x8593,	// (0x000130d7) fshwr2_func_candi_pane_g1

0xee19,	// (0x0001995d) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x0001995d) fshwr2_func_candi_row_pane

0x6c12,	// (0x00011756) cell_fshwr2_syb_pane_ParamLimits

0x6c12,	// (0x00011756) cell_fshwr2_syb_pane

0x613a,	// (0x00010c7e) fshwr2_hwr_syb_pane_g1_ParamLimits

0x613a,	// (0x00010c7e) fshwr2_hwr_syb_pane_g1

0x4b44,	// (0x0000f688) bg_popup_call_pane_cp01

0x6c28,	// (0x0001176c) fshwr2_func_candi_cell_pane_ParamLimits

0x6c28,	// (0x0001176c) fshwr2_func_candi_cell_pane

0xa277,	// (0x00014dbb) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa277,	// (0x00014dbb) fshwr2_func_candi_cell_bg_pane

0x6c5d,	// (0x000117a1) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x6c5d,	// (0x000117a1) fshwr2_func_candi_cell_pane_g1

0x6c7d,	// (0x000117c1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x6c7d,	// (0x000117c1) fshwr2_func_candi_cell_pane_t1

0x4b44,	// (0x0000f688) bg_button_pane_cp08

0xb06f,	// (0x00015bb3) cell_fshwr2_syb_bg_pane

0x6c90,	// (0x000117d4) cell_fshwr2_syb_bg_pane_g1

0x6c98,	// (0x000117dc) cell_fshwr2_syb_bg_pane_t1

0x7de3,	// (0x00012927) main_tmo_pane

0xa710,	// (0x00015254) uni_indicator_pane_g1_ParamLimits

0xa726,	// (0x0001526a) uni_indicator_pane_g2_ParamLimits

0xa73c,	// (0x00015280) uni_indicator_pane_g3_ParamLimits

0xa751,	// (0x00015295) uni_indicator_pane_g4_ParamLimits

0xa751,	// (0x00015295) uni_indicator_pane_g4

0xa765,	// (0x000152a9) uni_indicator_pane_g5_ParamLimits

0xa765,	// (0x000152a9) uni_indicator_pane_g5

0xa765,	// (0x000152a9) uni_indicator_pane_g6_ParamLimits

0xa765,	// (0x000152a9) uni_indicator_pane_g6

0xf917,	// (0x0001a45b) uni_indicator_pane_g_ParamLimits

0xd7f7,	// (0x0001833b) popup_tmo_note_window_ParamLimits

0xd7f7,	// (0x0001833b) popup_tmo_note_window

0x63d3,	// (0x00010f17) fshwr2_bg_pane

0x6c6e,	// (0x000117b2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x6c6e,	// (0x000117b2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec5,	// (0x0001aa09) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec5,	// (0x0001aa09) fshwr2_func_candi_cell_pane_g

0x6122,	// (0x00010c66) bg_popup_window_pane_cp01

0x6ca7,	// (0x000117eb) bg_popup_window_pane_g1_cp01

0xee29,	// (0x0001996d) bg_popup_window_pane_cp22_ParamLimits

0xee29,	// (0x0001996d) bg_popup_window_pane_cp22

0xee37,	// (0x0001997b) listscroll_tmo_link_pane_ParamLimits

0xee37,	// (0x0001997b) listscroll_tmo_link_pane

0xee77,	// (0x000199bb) popup_tmo_note_window_g1_ParamLimits

0xee77,	// (0x000199bb) popup_tmo_note_window_g1

0xee84,	// (0x000199c8) tmo_note_info_pane_ParamLimits

0xee84,	// (0x000199c8) tmo_note_info_pane

0xee9e,	// (0x000199e2) list_tmo_note_info_pane_g1_ParamLimits

0xee9e,	// (0x000199e2) list_tmo_note_info_pane_g1

0xeeb5,	// (0x000199f9) list_tmo_note_info_pane_g2_ParamLimits

0xeeb5,	// (0x000199f9) list_tmo_note_info_pane_g2

0x0001,

0xfeca,	// (0x0001aa0e) list_tmo_note_info_pane_g_ParamLimits

0xfeca,	// (0x0001aa0e) list_tmo_note_info_pane_g

0xeed1,	// (0x00019a15) list_tmo_note_info_text_pane_ParamLimits

0xeed1,	// (0x00019a15) list_tmo_note_info_text_pane

0xef54,	// (0x00019a98) list_tmo_link_pane

0xef61,	// (0x00019aa5) scroll_pane_cp20

0xef6e,	// (0x00019ab2) list_single_tmo_link_pane_ParamLimits

0xef6e,	// (0x00019ab2) list_single_tmo_link_pane

0xef7e,	// (0x00019ac2) list_single_tmo_link_pane_t1

0xef8c,	// (0x00019ad0) list_tmo_note_info_text_pane_t1_ParamLimits

0xef8c,	// (0x00019ad0) list_tmo_note_info_text_pane_t1

0x7ffd,	// (0x00012b41) aid_size_touch_scroll_bar_cp01_ParamLimits

0x7ffd,	// (0x00012b41) aid_size_touch_scroll_bar_cp01

0x7e8e,	// (0x000129d2) aid_size_touch_slider_marker

0x4c7f,	// (0x0000f7c3) popup_settings_window_ParamLimits

0x4c7f,	// (0x0000f7c3) popup_settings_window

0x8f7e,	// (0x00013ac2) popup_candi_list_indi_window

0x8fce,	// (0x00013b12) aid_touch_navi_pane_ParamLimits

0x632e,	// (0x00010e72) rs_clock_indi_pane

0x6337,	// (0x00010e7b) sctrl_sk_bottom_pane_ParamLimits

0x6348,	// (0x00010e8c) sctrl_sk_top_pane_ParamLimits

0x644b,	// (0x00010f8f) popup_fep_tooltip_window

0xe933,	// (0x00019477) aid_size_cell_widget_grid_ParamLimits

0xe9a8,	// (0x000194ec) cell_ai5_widget_pane_g1_ParamLimits

0xe9a8,	// (0x000194ec) cell_ai5_widget_pane_g1

0xe9fc,	// (0x00019540) cell_ai5_widget_pane_g6_ParamLimits

0xea08,	// (0x0001954c) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe48,	// (0x0001a98c) cell_ai5_widget_pane_g_ParamLimits

0xfe48,	// (0x0001a98c) cell_ai5_widget_pane_g

0xeb3a,	// (0x0001967e) cell_ai5_widget_pane_t10_ParamLimits

0xeb3a,	// (0x0001967e) cell_ai5_widget_pane_t10

0xeb58,	// (0x0001969c) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x0001973e) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x0001973e) cell_contacts_ai5_widget_pane

0xeddc,	// (0x00019920) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x00019920) popup_discreet_window_t3

0x6be6,	// (0x0001172a) popup_fshwr2_char_preview_window_ParamLimits

0x6be6,	// (0x0001172a) popup_fshwr2_char_preview_window

0xeeef,	// (0x00019a33) tmo_note_info_pane_t1

0xef04,	// (0x00019a48) tmo_note_info_pane_t2

0xef1b,	// (0x00019a5f) tmo_note_info_pane_t3

0xef30,	// (0x00019a74) tmo_note_info_pane_t4

0xef42,	// (0x00019a86) tmo_note_info_pane_t5

0x0004,

0xfecf,	// (0x0001aa13) tmo_note_info_pane_t

0xef54,	// (0x00019a98) list_tmo_link_pane_ParamLimits

0xef61,	// (0x00019aa5) scroll_pane_cp20_ParamLimits

0x4b44,	// (0x0000f688) bg_popup_fep_char_preview_window_cp01

0xefa5,	// (0x00019ae9) popup_fshwr2_char_preview_window_t1

0xefb3,	// (0x00019af7) popup_candi_list_indi_window_g1

0xefbc,	// (0x00019b00) bg_cell_contacts_ai5_widget_pane

0xefc8,	// (0x00019b0c) cell_contacts_ai5_widget_pane_g1

0xefdd,	// (0x00019b21) cell_contacts_ai5_widget_pane_g2

0xefe9,	// (0x00019b2d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeda,	// (0x0001aa1e) cell_contacts_ai5_widget_pane_g

0xeff5,	// (0x00019b39) cell_contacts_ai5_widget_pane_t1

0x7de3,	// (0x00012927) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf06c,	// (0x00019bb0) settings_container_pane

0x8c22,	// (0x00013766) listscroll_set_pane_copy1

0xb3b6,	// (0x00015efa) scroll_pane_cp121_copy1

0xf078,	// (0x00019bbc) set_content_pane_copy1

0xf080,	// (0x00019bc4) aid_height_set_list_copy1_ParamLimits

0xf080,	// (0x00019bc4) aid_height_set_list_copy1

0xa96a,	// (0x000154ae) aid_size_parent_copy1_ParamLimits

0xa96a,	// (0x000154ae) aid_size_parent_copy1

0xf08c,	// (0x00019bd0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf08c,	// (0x00019bd0) button_value_adjust_pane_cp6_copy1

0x8f64,	// (0x00013aa8) list_highlight_pane_cp2_copy1_ParamLimits

0x8f64,	// (0x00013aa8) list_highlight_pane_cp2_copy1

0xf0a0,	// (0x00019be4) list_set_pane_copy1_ParamLimits

0xf0a0,	// (0x00019be4) list_set_pane_copy1

0xf007,	// (0x00019b4b) main_pane_set_t1_copy1_ParamLimits

0xf007,	// (0x00019b4b) main_pane_set_t1_copy1

0xf041,	// (0x00019b85) main_pane_set_t2_copy1_ParamLimits

0xf041,	// (0x00019b85) main_pane_set_t2_copy1

0xf14d,	// (0x00019c91) main_pane_set_t3_copy1

0xf15b,	// (0x00019c9f) main_pane_set_t4_copy1

0xf060,	// (0x00019ba4) set_content_pane_g1_copy1_ParamLimits

0xf060,	// (0x00019ba4) set_content_pane_g1_copy1

0xf169,	// (0x00019cad) setting_code_pane_copy1

0xf171,	// (0x00019cb5) setting_slider_graphic_pane_copy1

0xf171,	// (0x00019cb5) setting_slider_pane_copy1

0xf171,	// (0x00019cb5) setting_text_pane_copy1

0xf171,	// (0x00019cb5) setting_volume_pane_copy1

0xf169,	// (0x00019cad) settings_code_pane_cp2_copy1

0xf179,	// (0x00019cbd) settings_code_pane_cp_copy1_ParamLimits

0xf179,	// (0x00019cbd) settings_code_pane_cp_copy1

0x6cb0,	// (0x000117f4) volume_set_pane_copy1

0xf18d,	// (0x00019cd1) volume_set_pane_g10_copy1

0xf195,	// (0x00019cd9) volume_set_pane_g1_copy1

0xf19d,	// (0x00019ce1) volume_set_pane_g2_copy1

0xf1a5,	// (0x00019ce9) volume_set_pane_g3_copy1

0xf1ad,	// (0x00019cf1) volume_set_pane_g4_copy1

0xf1b5,	// (0x00019cf9) volume_set_pane_g5_copy1

0xf1bd,	// (0x00019d01) volume_set_pane_g6_copy1

0xf1c5,	// (0x00019d09) volume_set_pane_g7_copy1

0xf1cd,	// (0x00019d11) volume_set_pane_g8_copy1

0xf1d5,	// (0x00019d19) volume_set_pane_g9_copy1

0x7024,	// (0x00011b68) bg_set_opt_pane_cp_copy1_ParamLimits

0x7024,	// (0x00011b68) bg_set_opt_pane_cp_copy1

0x6cb8,	// (0x000117fc) setting_slider_pane_t1_copy1_ParamLimits

0x6cb8,	// (0x000117fc) setting_slider_pane_t1_copy1

0x6cd6,	// (0x0001181a) setting_slider_pane_t2_copy1_ParamLimits

0x6cd6,	// (0x0001181a) setting_slider_pane_t2_copy1

0x6cf0,	// (0x00011834) setting_slider_pane_t3_copy1_ParamLimits

0x6cf0,	// (0x00011834) setting_slider_pane_t3_copy1

0x6d08,	// (0x0001184c) slider_set_pane_copy1_ParamLimits

0x6d08,	// (0x0001184c) slider_set_pane_copy1

0x7f10,	// (0x00012a54) set_opt_bg_pane_g1_copy2

0x7f18,	// (0x00012a5c) set_opt_bg_pane_g2_copy2

0xf1dd,	// (0x00019d21) set_opt_bg_pane_g3_copy2

0x7f28,	// (0x00012a6c) set_opt_bg_pane_g4_copy2

0x7f30,	// (0x00012a74) set_opt_bg_pane_g5_copy2

0x7f38,	// (0x00012a7c) set_opt_bg_pane_g6_copy2

0xf1e7,	// (0x00019d2b) set_opt_bg_pane_g7_copy2

0xf1ef,	// (0x00019d33) set_opt_bg_pane_g8_copy2

0xf1f9,	// (0x00019d3d) set_opt_bg_pane_g9_copy2

0x6d1e,	// (0x00011862) aid_size_touch_slider_mark_copy1_ParamLimits

0x6d1e,	// (0x00011862) aid_size_touch_slider_mark_copy1

0xf203,	// (0x00019d47) slider_set_pane_g1_copy1

0x6d32,	// (0x00011876) slider_set_pane_g2_copy1

0x5d3f,	// (0x00010883) slider_set_pane_g3_copy1_ParamLimits

0x5d3f,	// (0x00010883) slider_set_pane_g3_copy1

0x5d53,	// (0x00010897) slider_set_pane_g4_copy1_ParamLimits

0x5d53,	// (0x00010897) slider_set_pane_g4_copy1

0x5d6b,	// (0x000108af) slider_set_pane_g5_copy1_ParamLimits

0x5d6b,	// (0x000108af) slider_set_pane_g5_copy1

0x5d3f,	// (0x00010883) slider_set_pane_g6_copy1_ParamLimits

0x5d3f,	// (0x00010883) slider_set_pane_g6_copy1

0x6d3a,	// (0x0001187e) slider_set_pane_g7_copy1_ParamLimits

0x6d3a,	// (0x0001187e) slider_set_pane_g7_copy1

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp2_copy1

0xf20c,	// (0x00019d50) setting_slider_graphic_pane_g1_copy1

0xf215,	// (0x00019d59) setting_slider_graphic_pane_t1_copy1

0xf225,	// (0x00019d69) setting_slider_graphic_pane_t2_copy1

0xf235,	// (0x00019d79) slider_set_pane_cp_copy1

0xf245,	// (0x00019d89) input_focus_pane_cp1_copy1

0xf24e,	// (0x00019d92) list_set_text_pane_copy1

0xf256,	// (0x00019d9a) setting_text_pane_g1_copy1

0xf25f,	// (0x00019da3) set_text_pane_t1_copy1

0xf245,	// (0x00019d89) input_focus_pane_cp2_copy1

0xf256,	// (0x00019d9a) setting_code_pane_g1_copy1

0xf27b,	// (0x00019dbf) setting_code_pane_t1_copy1

0xf289,	// (0x00019dcd) list_set_graphic_pane_copy1

0x6f44,	// (0x00011a88) bg_set_opt_pane_cp4_copy1

0x892d,	// (0x00013471) list_set_graphic_pane_g1_copy1_ParamLimits

0x892d,	// (0x00013471) list_set_graphic_pane_g1_copy1

0xf29d,	// (0x00019de1) list_set_graphic_pane_g2_copy1

0x8945,	// (0x00013489) list_set_graphic_pane_t1_copy1_ParamLimits

0x8945,	// (0x00013489) list_set_graphic_pane_t1_copy1

0xbfb9,	// (0x00016afd) rs_clock_indi_pane_g1

0xf2a5,	// (0x00019de9) rs_clock_indi_pane_t1

0xf2b3,	// (0x00019df7) rs_indi_pane

0xf2bb,	// (0x00019dff) rs_indi_pane_g1

0xf2c4,	// (0x00019e08) rs_indi_pane_g2

0xf2cd,	// (0x00019e11) rs_indi_pane_g3

0x0002,

0xfee1,	// (0x0001aa25) rs_indi_pane_g

0x8c22,	// (0x00013766) bg_popup_preview_window_pane_cp03

0xf2d6,	// (0x00019e1a) popup_fep_tooltip_window_t1

0xce45,	// (0x00017989) popup_note2_window_g2_ParamLimits

0xce45,	// (0x00017989) popup_note2_window_g2

0x0001,

0xfc7a,	// (0x0001a7be) popup_note2_window_g_ParamLimits

0xfc7a,	// (0x0001a7be) popup_note2_window_g

0xd429,	// (0x00017f6d) bg_popup_sub_pane_cp11_ParamLimits

0xd436,	// (0x00017f7a) cell_ai3_links_pane_g1_ParamLimits

0xd44d,	// (0x00017f91) cell_ai3_links_pane_t1

0xf25f,	// (0x00019da3) set_text_pane_t1_copy1_ParamLimits

0x8b3f,	// (0x00013683) cell_graphic_popup_pane_cp2_ParamLimits

0x8b3f,	// (0x00013683) cell_graphic_popup_pane_cp2

0xf2e4,	// (0x00019e28) cell_graphic_popup_pane_g1_cp2

0x75e3,	// (0x00012127) cell_graphic_popup_pane_g2_cp2

0xf2ec,	// (0x00019e30) cell_graphic_popup_pane_g3_cp2

0xf2f4,	// (0x00019e38) cell_graphic_popup_pane_t2_cp2

0x75f4,	// (0x00012138) grid_highlight_pane_cp3_cp2

0x82de,	// (0x00012e22) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x7de3,	// (0x00012927) main_tmo_pane_ParamLimits

0xd7eb,	// (0x0001832f) popup_tmo_big_image_note_window

0xe997,	// (0x000194db) cell_ai5_widget_list_pane

0xe99f,	// (0x000194e3) cell_ai5_widget_lrg_icon_pane

0xeeef,	// (0x00019a33) tmo_note_info_pane_t1_ParamLimits

0xef04,	// (0x00019a48) tmo_note_info_pane_t2_ParamLimits

0xef1b,	// (0x00019a5f) tmo_note_info_pane_t3_ParamLimits

0xef30,	// (0x00019a74) tmo_note_info_pane_t4_ParamLimits

0xef42,	// (0x00019a86) tmo_note_info_pane_t5_ParamLimits

0xfecf,	// (0x0001aa13) tmo_note_info_pane_t_ParamLimits

0xf06c,	// (0x00019bb0) settings_container_pane_ParamLimits

0xf23d,	// (0x00019d81) indicator_popup_pane_cp5

0xf23d,	// (0x00019d81) indicator_popup_pane_cp6

0xf289,	// (0x00019dcd) list_set_graphic_pane_copy1_ParamLimits

0x6f30,	// (0x00011a74) bg_popup_window_pane_cp23

0xf302,	// (0x00019e46) popup_tmo_big_image_note_window_g1

0xf30b,	// (0x00019e4f) popup_tmo_big_image_note_window_t1

0xf31b,	// (0x00019e5f) popup_tmo_big_image_note_window_t2

0xf32b,	// (0x00019e6f) popup_tmo_big_image_note_window_t3

0x0002,

0xfee8,	// (0x0001aa2c) popup_tmo_big_image_note_window_t

0xbfb9,	// (0x00016afd) cell_ai5_widget_lrg_icon_pane_g1

0xf33b,	// (0x00019e7f) cell_ai5_widget_lrg_icon_pane_t1

0xf349,	// (0x00019e8d) cell_ai5_widget_list_row_pane_ParamLimits

0xf349,	// (0x00019e8d) cell_ai5_widget_list_row_pane

0xf360,	// (0x00019ea4) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf360,	// (0x00019ea4) cell_ai5_widget_list_row_pane_g1

0xf36d,	// (0x00019eb1) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf36d,	// (0x00019eb1) cell_ai5_widget_list_row_pane_t1

0xf39b,	// (0x00019edf) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf39b,	// (0x00019edf) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeef,	// (0x0001aa33) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeef,	// (0x0001aa33) cell_ai5_widget_list_row_pane_t

0x4b44,	// (0x0000f688) main_fep_vtchi_ss_pane

0x6d6c,	// (0x000118b0) popup_fep_char_pre_window

0x6d74,	// (0x000118b8) popup_fep_ituss_window

0x6d95,	// (0x000118d9) popup_fep_vkbss_window

0xf3c3,	// (0x00019f07) grid_vkbss_keypad_pane_ParamLimits

0xf3c3,	// (0x00019f07) grid_vkbss_keypad_pane

0xf3d3,	// (0x00019f17) ituss_keypad_pane

0x6dc0,	// (0x00011904) aid_vkbss_key_offset_ParamLimits

0x6dc0,	// (0x00011904) aid_vkbss_key_offset

0x6dcc,	// (0x00011910) cell_vkbss_key_pane_ParamLimits

0x6dcc,	// (0x00011910) cell_vkbss_key_pane

0x92d3,	// (0x00013e17) bg_cell_vkbss_key_g1_ParamLimits

0x92d3,	// (0x00013e17) bg_cell_vkbss_key_g1

0xf3e2,	// (0x00019f26) cell_vkbss_key_3p_pane_ParamLimits

0xf3e2,	// (0x00019f26) cell_vkbss_key_3p_pane

0xf3fc,	// (0x00019f40) cell_vkbss_key_g1_ParamLimits

0xf3fc,	// (0x00019f40) cell_vkbss_key_g1

0xf416,	// (0x00019f5a) cell_vkbss_key_t1_ParamLimits

0xf416,	// (0x00019f5a) cell_vkbss_key_t1

0x6de2,	// (0x00011926) cell_ituss_key_pane_ParamLimits

0x6de2,	// (0x00011926) cell_ituss_key_pane

0xf441,	// (0x00019f85) bg_cell_ituss_key_g1_ParamLimits

0xf441,	// (0x00019f85) bg_cell_ituss_key_g1

0xf44d,	// (0x00019f91) cell_ituss_key_pane_g1_ParamLimits

0xf44d,	// (0x00019f91) cell_ituss_key_pane_g1

0x6df3,	// (0x00011937) cell_ituss_key_pane_g2_ParamLimits

0x6df3,	// (0x00011937) cell_ituss_key_pane_g2

0x0002,

0xfef6,	// (0x0001aa3a) cell_ituss_key_pane_g_ParamLimits

0xfef6,	// (0x0001aa3a) cell_ituss_key_pane_g

0x6e1f,	// (0x00011963) cell_ituss_key_t1_ParamLimits

0x6e1f,	// (0x00011963) cell_ituss_key_t1

0x6e59,	// (0x0001199d) cell_ituss_key_t2_ParamLimits

0x6e59,	// (0x0001199d) cell_ituss_key_t2

0x6e8a,	// (0x000119ce) cell_ituss_key_t3_ParamLimits

0x6e8a,	// (0x000119ce) cell_ituss_key_t3

0x6e59,	// (0x0001199d) cell_ituss_key_t4_ParamLimits

0x6e59,	// (0x0001199d) cell_ituss_key_t4

0x0004,

0xfefd,	// (0x0001aa41) cell_ituss_key_t_ParamLimits

0xfefd,	// (0x0001aa41) cell_ituss_key_t

0xf473,	// (0x00019fb7) cell_vkbss_key_3p_pane_g1

0xf47b,	// (0x00019fbf) cell_vkbss_key_3p_pane_g2

0xf483,	// (0x00019fc7) cell_vkbss_key_3p_pane_g3

0x0002,

0xff08,	// (0x0001aa4c) cell_vkbss_key_3p_pane_g

0x4b44,	// (0x0000f688) bg_popup_fep_char_preview_window_cp02

0x6ecd,	// (0x00011a11) popup_fep_char_pre_window_t1

0xe929,	// (0x0001946d) main_ai5_sk_pane

0xefbc,	// (0x00019b00) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefc8,	// (0x00019b0c) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xefdd,	// (0x00019b21) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefe9,	// (0x00019b2d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeda,	// (0x0001aa1e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeff5,	// (0x00019b39) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x7de3,	// (0x00012927) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf48b,	// (0x00019fcf) main_ai5_sk_pane_g1

0x9a39,	// (0x0001457d) popup_query_code_window_g1

0x6d8a,	// (0x000118ce) popup_fep_vkb_icf_pane

0x6d9e,	// (0x000118e2) popup_fep_vtchi_icf_pane

0xf494,	// (0x00019fd8) bg_icf_pane

0xf4a0,	// (0x00019fe4) list_vkb_icf_pane

0x8f64,	// (0x00013aa8) bg_icf_pane_cp01

0xf4ac,	// (0x00019ff0) vtchi_icf_list_pane

0xf4bd,	// (0x0001a001) list_vkb_icf_pane_t1_ParamLimits

0xf4bd,	// (0x0001a001) list_vkb_icf_pane_t1

0xf4d5,	// (0x0001a019) vtchi_icf_list_pane_t1_ParamLimits

0xf4d5,	// (0x0001a019) vtchi_icf_list_pane_t1

0x6d74,	// (0x000118b8) popup_fep_ituss_window_ParamLimits

0x6d9e,	// (0x000118e2) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d3,	// (0x00019f17) ituss_keypad_pane_ParamLimits

0x6db4,	// (0x000118f8) ituss_sks_pane

0xf494,	// (0x00019fd8) bg_icf_pane_ParamLimits

0x6d50,	// (0x00011894) icf_edit_indi_pane_ParamLimits

0x6d50,	// (0x00011894) icf_edit_indi_pane

0xf4a0,	// (0x00019fe4) list_vkb_icf_pane_ParamLimits

0x8f64,	// (0x00013aa8) bg_icf_pane_cp01_ParamLimits

0x6d5f,	// (0x000118a3) icf_edit_indi_pane_cp01_ParamLimits

0x6d5f,	// (0x000118a3) icf_edit_indi_pane_cp01

0xf4b4,	// (0x00019ff8) vtchi_query_pane

0x613a,	// (0x00010c7e) icf_edit_indi_pane_g1_ParamLimits

0x613a,	// (0x00010c7e) icf_edit_indi_pane_g1

0x6eef,	// (0x00011a33) icf_edit_indi_pane_g2_ParamLimits

0x6eef,	// (0x00011a33) icf_edit_indi_pane_g2

0x0001,

0xff20,	// (0x0001aa64) icf_edit_indi_pane_g_ParamLimits

0xff20,	// (0x0001aa64) icf_edit_indi_pane_g

0x6efe,	// (0x00011a42) icf_edit_indi_pane_t1

0xf4f7,	// (0x0001a03b) bg_input_focus_pane_cp042

0x77c7,	// (0x0001230b) vtchi_button_pane

0xf500,	// (0x0001a044) vtchi_query_pane_t1

0xf50e,	// (0x0001a052) vtchi_query_pane_t2

0xf51c,	// (0x0001a060) vtchi_query_pane_t3

0x0002,

0xff0f,	// (0x0001aa53) vtchi_query_pane_t

0x4b44,	// (0x0000f688) bg_button_pane_cp13

0xf52a,	// (0x0001a06e) vtchi_button_pane_g1

0x6edc,	// (0x00011a20) ituss_sks_pane_g1

0x6ee7,	// (0x00011a2b) ituss_sks_pane_g2

0x0001,

0xff16,	// (0x0001aa5a) ituss_sks_pane_g

0xf532,	// (0x0001a076) ituss_sks_pane_t1

0xf540,	// (0x0001a084) ituss_sks_pane_t2

0x0001,

0xff1b,	// (0x0001aa5f) ituss_sks_pane_t

0xb9b9,	// (0x000164fd) indicator_nsta_pane_cp_g1

0xb9c2,	// (0x00016506) indicator_nsta_pane_cp_g2

0xb9ca,	// (0x0001650e) indicator_nsta_pane_cp_g3

0xb9d2,	// (0x00016516) indicator_nsta_pane_cp_g4

0xb9da,	// (0x0001651e) indicator_nsta_pane_cp_g5

0xb9da,	// (0x0001651e) indicator_nsta_pane_cp_g6

0x0005,

0xfab8,	// (0x0001a5fc) indicator_nsta_pane_cp_g

0xe4f2,	// (0x00019036) cell_graphic2_pane_t2_ParamLimits

0xe4f2,	// (0x00019036) cell_graphic2_pane_t2

0x0001,

0xfdd1,	// (0x0001a915) cell_graphic2_pane_t_ParamLimits

0xfdd1,	// (0x0001a915) cell_graphic2_pane_t

0xe51f,	// (0x00019063) cell_graphic2_control_pane_t1

0x8651,	// (0x00013195) signal_pane_g3_ParamLimits

0x8651,	// (0x00013195) signal_pane_g3

0x8663,	// (0x000131a7) signal_pane_g4_ParamLimits

0x8663,	// (0x000131a7) signal_pane_g4

0xf3ad,	// (0x00019ef1) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf3ad,	// (0x00019ef1) cell_ai5_widget_list_row_pane_t3

0xf461,	// (0x00019fa5) cell_ituss_key_pane_t1_ParamLimits

0xf461,	// (0x00019fa5) cell_ituss_key_pane_t1

0x9632,	// (0x00014176) form_field_data_wide_pane_vc_t2_ParamLimits

0x9632,	// (0x00014176) form_field_data_wide_pane_vc_t2

0x9646,	// (0x0001418a) form_field_data_wide_pane_vc_t3_ParamLimits

0x9646,	// (0x0001418a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x0001a343) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x0001a343) form_field_data_wide_pane_vc_t

0xb685,	// (0x000161c9) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb685,	// (0x000161c9) form_field_slider_wide_pane_vc_t3

0xb75f,	// (0x000162a3) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb75f,	// (0x000162a3) form_field_popup_wide_pane_vc_t2

0xb776,	// (0x000162ba) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb776,	// (0x000162ba) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa7,	// (0x0001a5eb) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa7,	// (0x0001a5eb) form_field_popup_wide_pane_vc_t

0x6b88,	// (0x000116cc) aid_fshwr2_btn_pane_ParamLimits

0x6b94,	// (0x000116d8) aid_fshwr2_syb_pane_ParamLimits

0x6ba0,	// (0x000116e4) aid_fshwr2_txt_pane_ParamLimits

0x63d3,	// (0x00010f17) fshwr2_bg_pane_ParamLimits

0x6bac,	// (0x000116f0) fshwr2_func_candi_pane_ParamLimits

0x6bc1,	// (0x00011705) fshwr2_hwr_syb_pane_ParamLimits

0x6bd1,	// (0x00011715) fshwr2_icf_pane_ParamLimits

0xb5f9,	// (0x0001613d) list_double_graphic_pane_vc_g4_ParamLimits

0xb5f9,	// (0x0001613d) list_double_graphic_pane_vc_g4

0x6e13,	// (0x00011957) cell_ituss_key_pane_g3_ParamLimits

0x6e13,	// (0x00011957) cell_ituss_key_pane_g3

0x6ebb,	// (0x000119ff) cell_ituss_key_t5_ParamLimits

0x6ebb,	// (0x000119ff) cell_ituss_key_t5
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Normal

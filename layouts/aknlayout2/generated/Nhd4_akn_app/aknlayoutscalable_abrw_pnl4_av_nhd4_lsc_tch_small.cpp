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

#include "aknlayoutscalable_abrw_pnl4_av_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00026995 };

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
0x8947,	// (0x0002f2dc) Screen

0x8953,	// (0x0002f2e8) application_window_ParamLimits

0x8953,	// (0x0002f2e8) application_window

0xb5ec,	// (0x00031f81) screen_g1

0x7c31,	// (0x0002e5c6) area_bottom_pane_ParamLimits

0x7c31,	// (0x0002e5c6) area_bottom_pane

0x0734,	// (0x000270c9) area_top_pane_ParamLimits

0x0734,	// (0x000270c9) area_top_pane

0x07d2,	// (0x00027167) main_pane_ParamLimits

0x07d2,	// (0x00027167) main_pane

0xb5f6,	// (0x00031f8b) misc_graphics

0x998c,	// (0x00030321) battery_pane_ParamLimits

0x998c,	// (0x00030321) battery_pane

0xd5db,	// (0x00033f70) bg_status_flat_pane_g8

0xd5e3,	// (0x00033f78) bg_status_flat_pane_g9

0xcd02,	// (0x00033697) context_pane_ParamLimits

0xcd02,	// (0x00033697) context_pane

0x9af7,	// (0x0003048c) navi_pane_ParamLimits

0x9af7,	// (0x0003048c) navi_pane

0x9b6e,	// (0x00030503) signal_pane_ParamLimits

0x9b6e,	// (0x00030503) signal_pane

0x0008,

0xf885,	// (0x0003621a) bg_status_flat_pane_g

0x9bfe,	// (0x00030593) status_pane_g1_ParamLimits

0x9bfe,	// (0x00030593) status_pane_g1

0x9c14,	// (0x000305a9) status_pane_g2_ParamLimits

0x9c14,	// (0x000305a9) status_pane_g2

0xcd67,	// (0x000336fc) status_pane_g3_ParamLimits

0xcd67,	// (0x000336fc) status_pane_g3

0x0004,

0xf7b8,	// (0x0003614d) status_pane_g_ParamLimits

0xf7b8,	// (0x0003614d) status_pane_g

0x9c20,	// (0x000305b5) title_pane_ParamLimits

0x9c20,	// (0x000305b5) title_pane

0x9c81,	// (0x00030616) uni_indicator_pane_ParamLimits

0x9c81,	// (0x00030616) uni_indicator_pane

0xcb3b,	// (0x000334d0) bg_list_pane_ParamLimits

0xcb3b,	// (0x000334d0) bg_list_pane

0x62a1,	// (0x0002cc36) find_pane

0x90f8,	// (0x0002fa8d) listscroll_app_pane_ParamLimits

0x90f8,	// (0x0002fa8d) listscroll_app_pane

0xcb5b,	// (0x000334f0) listscroll_form_pane

0x62a9,	// (0x0002cc3e) listscroll_gen_pane_ParamLimits

0x62a9,	// (0x0002cc3e) listscroll_gen_pane

0xcb5b,	// (0x000334f0) listscroll_set_pane

0xd9c6,	// (0x0003435b) main_idle_act_pane

0xc921,	// (0x000332b6) main_idle_trad_pane

0xc921,	// (0x000332b6) main_list_empty_pane

0xc031,	// (0x000329c6) main_midp_pane

0xcb75,	// (0x0003350a) main_pane_g1_ParamLimits

0xcb75,	// (0x0003350a) main_pane_g1

0x9104,	// (0x0002fa99) popup_ai_message_window_ParamLimits

0x9104,	// (0x0002fa99) popup_ai_message_window

0x9195,	// (0x0002fb2a) popup_fep_china_uni_window_ParamLimits

0x9195,	// (0x0002fb2a) popup_fep_china_uni_window

0xcba7,	// (0x0003353c) popup_fep_japan_candidate_window_ParamLimits

0xcba7,	// (0x0003353c) popup_fep_japan_candidate_window

0xcbc5,	// (0x0003355a) popup_fep_japan_predictive_window_ParamLimits

0xcbc5,	// (0x0003355a) popup_fep_japan_predictive_window

0x9371,	// (0x0002fd06) popup_find_window

0x938e,	// (0x0002fd23) popup_grid_graphic_window_ParamLimits

0x938e,	// (0x0002fd23) popup_grid_graphic_window

0xcbf5,	// (0x0003358a) popup_large_graphic_colour_window

0x9420,	// (0x0002fdb5) popup_menu_window_ParamLimits

0x9420,	// (0x0002fdb5) popup_menu_window

0x95ec,	// (0x0002ff81) popup_note_image_window

0x95b2,	// (0x0002ff47) popup_note_wait_window_ParamLimits

0x95b2,	// (0x0002ff47) popup_note_wait_window

0x9604,	// (0x0002ff99) popup_note_window_ParamLimits

0x9604,	// (0x0002ff99) popup_note_window

0x96aa,	// (0x0003003f) popup_query_code_window_ParamLimits

0x96aa,	// (0x0003003f) popup_query_code_window

0xcc1b,	// (0x000335b0) popup_query_data_code_window_ParamLimits

0xcc1b,	// (0x000335b0) popup_query_data_code_window

0x96e4,	// (0x00030079) popup_query_data_window_ParamLimits

0x96e4,	// (0x00030079) popup_query_data_window

0x975a,	// (0x000300ef) popup_query_sat_info_window_ParamLimits

0x975a,	// (0x000300ef) popup_query_sat_info_window

0x97f1,	// (0x00030186) popup_snote_single_graphic_window_ParamLimits

0x97f1,	// (0x00030186) popup_snote_single_graphic_window

0x97f1,	// (0x00030186) popup_snote_single_text_window_ParamLimits

0x97f1,	// (0x00030186) popup_snote_single_text_window

0xcc32,	// (0x000335c7) popup_sub_window_general

0xcc78,	// (0x0003360d) popup_window_general_ParamLimits

0xcc78,	// (0x0003360d) popup_window_general

0xcc8d,	// (0x00033622) power_save_pane

0x817c,	// (0x0002eb11) control_pane_g1_ParamLimits

0x817c,	// (0x0002eb11) control_pane_g1

0x81a5,	// (0x0002eb3a) control_pane_g2_ParamLimits

0x81a5,	// (0x0002eb3a) control_pane_g2

0xcb15,	// (0x000334aa) control_pane_g3_ParamLimits

0xcb15,	// (0x000334aa) control_pane_g3

0x0007,

0xf7a0,	// (0x00036135) control_pane_g_ParamLimits

0xf7a0,	// (0x00036135) control_pane_g

0x81e0,	// (0x0002eb75) control_pane_t1_ParamLimits

0x81e0,	// (0x0002eb75) control_pane_t1

0x823e,	// (0x0002ebd3) control_pane_t2_ParamLimits

0x823e,	// (0x0002ebd3) control_pane_t2

0x0002,

0xf7b1,	// (0x00036146) control_pane_t_ParamLimits

0xf7b1,	// (0x00036146) control_pane_t

0xca36,	// (0x000333cb) navi_navi_volume_pane_cp1

0xca3f,	// (0x000333d4) status_small_icon_pane

0xca47,	// (0x000333dc) status_small_pane_g1_ParamLimits

0xca47,	// (0x000333dc) status_small_pane_g1

0xca7b,	// (0x00033410) status_small_pane_g2_ParamLimits

0xca7b,	// (0x00033410) status_small_pane_g2

0xca87,	// (0x0003341c) status_small_pane_g3_ParamLimits

0xca87,	// (0x0003341c) status_small_pane_g3

0xca93,	// (0x00033428) status_small_pane_g4_ParamLimits

0xca93,	// (0x00033428) status_small_pane_g4

0xca9f,	// (0x00033434) status_small_pane_g5_ParamLimits

0xca9f,	// (0x00033434) status_small_pane_g5

0xcaae,	// (0x00033443) status_small_pane_g6_ParamLimits

0xcaae,	// (0x00033443) status_small_pane_g6

0x0007,

0xf78f,	// (0x00036124) status_small_pane_g_ParamLimits

0xf78f,	// (0x00036124) status_small_pane_g

0xcade,	// (0x00033473) status_small_pane_t1

0xcb01,	// (0x00033496) status_small_wait_pane_ParamLimits

0xcb01,	// (0x00033496) status_small_wait_pane

0x8f22,	// (0x0002f8b7) aid_levels_signal_ParamLimits

0x8f22,	// (0x0002f8b7) aid_levels_signal

0x8f3a,	// (0x0002f8cf) signal_pane_g1_ParamLimits

0x8f3a,	// (0x0002f8cf) signal_pane_g1

0x8f55,	// (0x0002f8ea) signal_pane_g2_ParamLimits

0x8f55,	// (0x0002f8ea) signal_pane_g2

0x0001,

0xf724,	// (0x000360b9) signal_pane_g_ParamLimits

0xf724,	// (0x000360b9) signal_pane_g

0xc465,	// (0x00032dfa) context_pane_g1

0x8963,	// (0x0002f2f8) title_pane_g1

0x8998,	// (0x0002f32d) title_pane_t1

0xb60c,	// (0x00031fa1) title_pane_t2

0xb632,	// (0x00031fc7) title_pane_t3

0x0002,

0xf573,	// (0x00035f08) title_pane_t

0x9ca9,	// (0x0003063e) aid_levels_battery_ParamLimits

0x9ca9,	// (0x0003063e) aid_levels_battery

0x9cc5,	// (0x0003065a) battery_pane_g1_ParamLimits

0x9cc5,	// (0x0003065a) battery_pane_g1

0x9ce2,	// (0x00030677) battery_pane_g2_ParamLimits

0x9ce2,	// (0x00030677) battery_pane_g2

0x0001,

0xf7c3,	// (0x00036158) battery_pane_g_ParamLimits

0xf7c3,	// (0x00036158) battery_pane_g

0x9f27,	// (0x000308bc) uni_indicator_pane_g1

0x9f3c,	// (0x000308d1) uni_indicator_pane_g2

0x9f51,	// (0x000308e6) uni_indicator_pane_g3

0x0005,

0xf92d,	// (0x000362c2) uni_indicator_pane_g

0xc791,	// (0x00033126) navi_icon_pane_ParamLimits

0xc791,	// (0x00033126) navi_icon_pane

0xc6d8,	// (0x0003306d) navi_midp_pane

0xc7ad,	// (0x00033142) navi_navi_pane

0xc7b7,	// (0x0003314c) navi_text_pane_ParamLimits

0xc7b7,	// (0x0003314c) navi_text_pane

0xb5ec,	// (0x00031f81) status_small_wait_pane_g1

0xbb4e,	// (0x000324e3) status_small_wait_pane_g2

0x0001,

0xf928,	// (0x000362bd) status_small_wait_pane_g

0x9ec6,	// (0x0003085b) navi_navi_icon_text_pane

0x9ece,	// (0x00030863) navi_navi_pane_g1_ParamLimits

0x9ece,	// (0x00030863) navi_navi_pane_g1

0x9ee0,	// (0x00030875) navi_navi_pane_g2_ParamLimits

0x9ee0,	// (0x00030875) navi_navi_pane_g2

0x0001,

0xf8f6,	// (0x0003628b) navi_navi_pane_g_ParamLimits

0xf8f6,	// (0x0003628b) navi_navi_pane_g

0xdb7c,	// (0x00034511) navi_navi_tabs_pane

0x9ef2,	// (0x00030887) navi_navi_text_pane

0x9ec6,	// (0x0003085b) navi_navi_volume_pane

0x9eb4,	// (0x00030849) navi_text_pane_t1

0x9ea8,	// (0x0003083d) navi_icon_pane_g1

0xdabd,	// (0x00034452) navi_navi_text_pane_t1

0x8499,	// (0x0002ee2e) navi_navi_volume_pane_g1

0x84a1,	// (0x0002ee36) volume_small_pane

0x9e04,	// (0x00030799) navi_navi_icon_text_pane_g1

0x9e0c,	// (0x000307a1) navi_navi_icon_text_pane_t1

0xc7ad,	// (0x00033142) navi_tabs_2_long_pane

0xc7ad,	// (0x00033142) navi_tabs_2_pane

0xc7ad,	// (0x00033142) navi_tabs_3_long_pane

0xc7ad,	// (0x00033142) navi_tabs_3_pane

0xc7ad,	// (0x00033142) navi_tabs_4_pane

0x8479,	// (0x0002ee0e) tabs_2_active_pane_ParamLimits

0x8479,	// (0x0002ee0e) tabs_2_active_pane

0x8489,	// (0x0002ee1e) tabs_2_passive_pane_ParamLimits

0x8489,	// (0x0002ee1e) tabs_2_passive_pane

0x8447,	// (0x0002eddc) tabs_3_active_pane_ParamLimits

0x8447,	// (0x0002eddc) tabs_3_active_pane

0x8457,	// (0x0002edec) tabs_3_passive_pane_ParamLimits

0x8457,	// (0x0002edec) tabs_3_passive_pane

0x8468,	// (0x0002edfd) tabs_3_passive_pane_cp_ParamLimits

0x8468,	// (0x0002edfd) tabs_3_passive_pane_cp

0x8403,	// (0x0002ed98) tabs_4_active_pane_ParamLimits

0x8403,	// (0x0002ed98) tabs_4_active_pane

0x8414,	// (0x0002eda9) tabs_4_passive_pane_ParamLimits

0x8414,	// (0x0002eda9) tabs_4_passive_pane

0x8425,	// (0x0002edba) tabs_4_passive_pane_cp_ParamLimits

0x8425,	// (0x0002edba) tabs_4_passive_pane_cp

0x8436,	// (0x0002edcb) tabs_4_passive_pane_cp2_ParamLimits

0x8436,	// (0x0002edcb) tabs_4_passive_pane_cp2

0x83e3,	// (0x0002ed78) tabs_2_long_active_pane_ParamLimits

0x83e3,	// (0x0002ed78) tabs_2_long_active_pane

0x83f3,	// (0x0002ed88) tabs_2_long_passive_pane_ParamLimits

0x83f3,	// (0x0002ed88) tabs_2_long_passive_pane

0x83ae,	// (0x0002ed43) tabs_3_long_active_pane_ParamLimits

0x83ae,	// (0x0002ed43) tabs_3_long_active_pane

0x83bf,	// (0x0002ed54) tabs_3_long_passive_pane_ParamLimits

0x83bf,	// (0x0002ed54) tabs_3_long_passive_pane

0x83d2,	// (0x0002ed67) tabs_3_long_passive_pane_cp_ParamLimits

0x83d2,	// (0x0002ed67) tabs_3_long_passive_pane_cp

0x202c,	// (0x000289c1) volume_small_pane_g1

0x835d,	// (0x0002ecf2) volume_small_pane_g2

0x8366,	// (0x0002ecfb) volume_small_pane_g3

0x836f,	// (0x0002ed04) volume_small_pane_g4

0x8378,	// (0x0002ed0d) volume_small_pane_g5

0x8381,	// (0x0002ed16) volume_small_pane_g6

0x838a,	// (0x0002ed1f) volume_small_pane_g7

0x8393,	// (0x0002ed28) volume_small_pane_g8

0x839c,	// (0x0002ed31) volume_small_pane_g9

0x83a5,	// (0x0002ed3a) volume_small_pane_g10

0x0009,

0xf8c2,	// (0x00036257) volume_small_pane_g

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp2_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp2

0x8a24,	// (0x0002f3b9) tabs_3_active_pane_g1

0x8a2c,	// (0x0002f3c1) tabs_3_active_pane_t1

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp2_ParamLimits

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp2

0x8a24,	// (0x0002f3b9) tabs_3_passive_pane_g1

0x8a2c,	// (0x0002f3c1) tabs_3_passive_pane_t1

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp3_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp3

0x8a3e,	// (0x0002f3d3) tabs_4_active_pane_g1

0x8a46,	// (0x0002f3db) tabs_4_active_pane_t1

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp3_ParamLimits

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp3

0x8a3e,	// (0x0002f3d3) tabs_4_1_passive_pane_g1

0x8a46,	// (0x0002f3db) tabs_4_1_passive_pane_t1

0xc031,	// (0x000329c6) list_highlight_pane_cp2

0x9fde,	// (0x00030973) list_set_pane_ParamLimits

0x9fde,	// (0x00030973) list_set_pane

0xa078,	// (0x00030a0d) main_pane_set_t1_ParamLimits

0xa078,	// (0x00030a0d) main_pane_set_t1

0xa098,	// (0x00030a2d) main_pane_set_t2_ParamLimits

0xa098,	// (0x00030a2d) main_pane_set_t2

0xa0ac,	// (0x00030a41) main_pane_set_t3_ParamLimits

0xa0ac,	// (0x00030a41) main_pane_set_t3

0xa0be,	// (0x00030a53) main_pane_set_t4_ParamLimits

0xa0be,	// (0x00030a53) main_pane_set_t4

0x0003,

0xf97a,	// (0x0003630f) main_pane_set_t_ParamLimits

0xf97a,	// (0x0003630f) main_pane_set_t

0xa0d0,	// (0x00030a65) setting_code_pane

0xa0d8,	// (0x00030a6d) setting_slider_graphic_pane

0xa0d8,	// (0x00030a6d) setting_slider_pane

0xa0d8,	// (0x00030a6d) setting_text_pane

0xa0d8,	// (0x00030a6d) setting_volume_pane

0x0ac9,	// (0x0002745e) volume_set_pane

0xb652,	// (0x00031fe7) bg_set_opt_pane_cp

0x0ad1,	// (0x00027466) setting_slider_pane_t1

0x0aea,	// (0x0002747f) setting_slider_pane_t2

0x0b03,	// (0x00027498) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x00035f0f) setting_slider_pane_t

0x0b1a,	// (0x000274af) slider_set_pane

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp2

0xb660,	// (0x00031ff5) setting_slider_graphic_pane_g1

0x0b30,	// (0x000274c5) setting_slider_graphic_pane_t1

0x0b3f,	// (0x000274d4) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00035f16) setting_slider_graphic_pane_t

0x0b4e,	// (0x000274e3) slider_set_pane_cp

0xb5f6,	// (0x00031f8b) input_focus_pane_cp1

0xdfd1,	// (0x00034966) list_set_text_pane

0xb5ec,	// (0x00031f81) setting_text_pane_g1

0xb5f6,	// (0x00031f8b) input_focus_pane_cp2

0xb5ec,	// (0x00031f81) setting_code_pane_g1

0xb669,	// (0x00031ffe) setting_code_pane_t1

0x41f8,	// (0x0002ab8d) set_text_pane_t1_ParamLimits

0x41f8,	// (0x0002ab8d) set_text_pane_t1

0xbf41,	// (0x000328d6) set_opt_bg_pane_g1

0xbf49,	// (0x000328de) set_opt_bg_pane_g2

0xdfb1,	// (0x00034946) set_opt_bg_pane_g3

0xbf59,	// (0x000328ee) set_opt_bg_pane_g4

0xbf61,	// (0x000328f6) set_opt_bg_pane_g5

0xbf69,	// (0x000328fe) set_opt_bg_pane_g6

0xdfb9,	// (0x0003494e) set_opt_bg_pane_g7

0xdfc1,	// (0x00034956) set_opt_bg_pane_g8

0xdfc9,	// (0x0003495e) set_opt_bg_pane_g9

0x0008,

0x001b,	// (0x000269b0) set_opt_bg_pane_g

0xdfa4,	// (0x00034939) slider_set_pane_g1

0x2383,	// (0x00028d18) slider_set_pane_g2

0x0006,

0xf96b,	// (0x00036300) slider_set_pane_g

0x22fa,	// (0x00028c8f) volume_set_pane_g1

0x2302,	// (0x00028c97) volume_set_pane_g2

0x230a,	// (0x00028c9f) volume_set_pane_g3

0x2312,	// (0x00028ca7) volume_set_pane_g4

0x231a,	// (0x00028caf) volume_set_pane_g5

0x2322,	// (0x00028cb7) volume_set_pane_g6

0x232a,	// (0x00028cbf) volume_set_pane_g7

0x2332,	// (0x00028cc7) volume_set_pane_g8

0x233a,	// (0x00028ccf) volume_set_pane_g9

0x2342,	// (0x00028cd7) volume_set_pane_g10

0x0009,

0xf948,	// (0x000362dd) volume_set_pane_g

0x8a58,	// (0x0002f3ed) indicator_pane_ParamLimits

0x8a58,	// (0x0002f3ed) indicator_pane

0x8a80,	// (0x0002f415) main_idle_pane_g2_ParamLimits

0x8a80,	// (0x0002f415) main_idle_pane_g2

0x8ab8,	// (0x0002f44d) main_pane_idle_g1_ParamLimits

0x8ab8,	// (0x0002f44d) main_pane_idle_g1

0xb677,	// (0x0003200c) popup_clock_digital_analogue_window_ParamLimits

0xb677,	// (0x0003200c) popup_clock_digital_analogue_window

0x8adf,	// (0x0002f474) soft_indicator_pane_ParamLimits

0x8adf,	// (0x0002f474) soft_indicator_pane

0x8af9,	// (0x0002f48e) wallpaper_pane_ParamLimits

0x8af9,	// (0x0002f48e) wallpaper_pane

0xb5ec,	// (0x00031f81) wallpaper_pane_g1

0x8b0b,	// (0x0002f4a0) indicator_pane_g1_ParamLimits

0x8b0b,	// (0x0002f4a0) indicator_pane_g1

0xe118,	// (0x00034aad) navi_navi_icon_text_pane_srt_g1

0xb6a5,	// (0x0003203a) soft_indicator_pane_t1

0xb6bf,	// (0x00032054) aid_ps_area_pane

0x8b24,	// (0x0002f4b9) aid_ps_clock_pane

0xb6d0,	// (0x00032065) aid_ps_indicator_pane

0xb6dc,	// (0x00032071) indicator_ps_pane_ParamLimits

0xb6dc,	// (0x00032071) indicator_ps_pane

0xb6eb,	// (0x00032080) power_save_pane_g1_ParamLimits

0xb6eb,	// (0x00032080) power_save_pane_g1

0xb6f7,	// (0x0003208c) power_save_pane_g2_ParamLimits

0xb6f7,	// (0x0003208c) power_save_pane_g2

0x0628,	// (0x00026fbd) aid_navinavi_width_pane

0xb6bf,	// (0x00032054) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00035f1b) power_save_pane_g_ParamLimits

0xf586,	// (0x00035f1b) power_save_pane_g

0xb705,	// (0x0003209a) power_save_pane_t1_ParamLimits

0xb705,	// (0x0003209a) power_save_pane_t1

0x8b24,	// (0x0002f4b9) aid_ps_clock_pane_ParamLimits

0xb6d0,	// (0x00032065) aid_ps_indicator_pane_ParamLimits

0xb717,	// (0x000320ac) power_save_pane_t4_ParamLimits

0xb717,	// (0x000320ac) power_save_pane_t4

0x0001,

0xf58b,	// (0x00035f20) power_save_pane_t_ParamLimits

0xf58b,	// (0x00035f20) power_save_pane_t

0xb741,	// (0x000320d6) power_save_t3_ParamLimits

0xb741,	// (0x000320d6) power_save_t3

0xb72c,	// (0x000320c1) power_save_t2_ParamLimits

0xb72c,	// (0x000320c1) power_save_t2

0xb756,	// (0x000320eb) indicator_ps_pane_g1

0x8b32,	// (0x0002f4c7) ai_gene_pane_ParamLimits

0x8b32,	// (0x0002f4c7) ai_gene_pane

0x8b49,	// (0x0002f4de) ai_links_pane_ParamLimits

0x8b49,	// (0x0002f4de) ai_links_pane

0x8b61,	// (0x0002f4f6) indicator_pane_cp1_ParamLimits

0x8b61,	// (0x0002f4f6) indicator_pane_cp1

0x8b70,	// (0x0002f505) main_pane_idle_g1_cp_ParamLimits

0x8b70,	// (0x0002f505) main_pane_idle_g1_cp

0xb75f,	// (0x000320f4) popup_ai_links_title_window

0x8b88,	// (0x0002f51d) soft_indicator_pane_cp1_ParamLimits

0x8b88,	// (0x0002f51d) soft_indicator_pane_cp1

0xddf8,	// (0x0003478d) ai_links_pane_g1

0xde01,	// (0x00034796) grid_ai_links_pane

0x9f1e,	// (0x000308b3) ai_gene_pane_1

0xdde6,	// (0x0003477b) ai_gene_pane_2

0xddef,	// (0x00034784) list_highlight_pane_cp4

0x9efa,	// (0x0003088f) cell_ai_link_pane_ParamLimits

0x9efa,	// (0x0003088f) cell_ai_link_pane

0xddde,	// (0x00034773) cell_ai_link_pane_g1

0xbb4e,	// (0x000324e3) cell_ai_link_pane_g2

0x0001,

0xf923,	// (0x000362b8) cell_ai_link_pane_g

0xb5f6,	// (0x00031f8b) grid_highlight_cp2

0xb5f6,	// (0x00031f8b) bg_popup_sub_pane_cp1

0xb776,	// (0x0003210b) popup_ai_links_title_window_t1

0xdd20,	// (0x000346b5) ai_gene_pane_1_g1_ParamLimits

0xdd20,	// (0x000346b5) ai_gene_pane_1_g1

0xdd2c,	// (0x000346c1) ai_gene_pane_1_g2_ParamLimits

0xdd2c,	// (0x000346c1) ai_gene_pane_1_g2

0x0001,

0xf919,	// (0x000362ae) ai_gene_pane_1_g_ParamLimits

0xf919,	// (0x000362ae) ai_gene_pane_1_g

0xdd39,	// (0x000346ce) ai_gene_pane_1_t1_ParamLimits

0xdd39,	// (0x000346ce) ai_gene_pane_1_t1

0xdd6d,	// (0x00034702) grid_ai_soft_ind_pane

0xdd0b,	// (0x000346a0) ai_gene_pane_2_t1_ParamLimits

0xdd0b,	// (0x000346a0) ai_gene_pane_2_t1

0x8b9c,	// (0x0002f531) main_pane_empty_t1_ParamLimits

0x8b9c,	// (0x0002f531) main_pane_empty_t1

0x8bb4,	// (0x0002f549) main_pane_empty_t2_ParamLimits

0x8bb4,	// (0x0002f549) main_pane_empty_t2

0x8bc9,	// (0x0002f55e) main_pane_empty_t3_ParamLimits

0x8bc9,	// (0x0002f55e) main_pane_empty_t3

0x8bdb,	// (0x0002f570) main_pane_empty_t4_ParamLimits

0x8bdb,	// (0x0002f570) main_pane_empty_t4

0x8bed,	// (0x0002f582) main_pane_empty_t5_ParamLimits

0x8bed,	// (0x0002f582) main_pane_empty_t5

0x0004,

0xf590,	// (0x00035f25) main_pane_empty_t_ParamLimits

0xf590,	// (0x00035f25) main_pane_empty_t

0xbf92,	// (0x00032927) bg_popup_window_pane_ParamLimits

0xbf92,	// (0x00032927) bg_popup_window_pane

0xdacb,	// (0x00034460) find_popup_pane_cp2_ParamLimits

0xdacb,	// (0x00034460) find_popup_pane_cp2

0xdad7,	// (0x0003446c) heading_pane_ParamLimits

0xdad7,	// (0x0003446c) heading_pane

0xb5f6,	// (0x00031f8b) bg_popup_sub_pane

0x9e29,	// (0x000307be) bg_popup_window_pane_g1_ParamLimits

0x9e29,	// (0x000307be) bg_popup_window_pane_g1

0x9e38,	// (0x000307cd) bg_popup_window_pane_g2_ParamLimits

0x9e38,	// (0x000307cd) bg_popup_window_pane_g2

0x9e44,	// (0x000307d9) bg_popup_window_pane_g3_ParamLimits

0x9e44,	// (0x000307d9) bg_popup_window_pane_g3

0x9e50,	// (0x000307e5) bg_popup_window_pane_g4_ParamLimits

0x9e50,	// (0x000307e5) bg_popup_window_pane_g4

0x9e5f,	// (0x000307f4) bg_popup_window_pane_g5_ParamLimits

0x9e5f,	// (0x000307f4) bg_popup_window_pane_g5

0x9e6f,	// (0x00030804) bg_popup_window_pane_g6_ParamLimits

0x9e6f,	// (0x00030804) bg_popup_window_pane_g6

0x9e7b,	// (0x00030810) bg_popup_window_pane_g7_ParamLimits

0x9e7b,	// (0x00030810) bg_popup_window_pane_g7

0x9e8a,	// (0x0003081f) bg_popup_window_pane_g8_ParamLimits

0x9e8a,	// (0x0003081f) bg_popup_window_pane_g8

0x9e99,	// (0x0003082e) bg_popup_window_pane_g9_ParamLimits

0x9e99,	// (0x0003082e) bg_popup_window_pane_g9

0xdab1,	// (0x00034446) bg_popup_window_pane_g10_ParamLimits

0xdab1,	// (0x00034446) bg_popup_window_pane_g10

0x0009,

0xf8e1,	// (0x00036276) bg_popup_window_pane_g_ParamLimits

0xf8e1,	// (0x00036276) bg_popup_window_pane_g

0xda68,	// (0x000343fd) bg_popup_heading_pane_ParamLimits

0xda68,	// (0x000343fd) bg_popup_heading_pane

0x2639,	// (0x00028fce) tabs_4_passive_pane_cp_srt_ParamLimits

0x2639,	// (0x00028fce) tabs_4_passive_pane_cp_srt

0x264b,	// (0x00028fe0) tabs_4_passive_pane_srt_ParamLimits

0xda7c,	// (0x00034411) heading_pane_g2

0x264b,	// (0x00028fe0) tabs_4_passive_pane_srt

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp3_srt_ParamLimits

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp3_srt

0xda84,	// (0x00034419) heading_pane_t1_ParamLimits

0xda84,	// (0x00034419) heading_pane_t1

0xda9b,	// (0x00034430) heading_pane_t2_ParamLimits

0xda9b,	// (0x00034430) heading_pane_t2

0x0001,

0xf8dc,	// (0x00036271) heading_pane_t_ParamLimits

0xf8dc,	// (0x00036271) heading_pane_t

0xd5a3,	// (0x00033f38) bg_popup_heading_pane_g1

0xd634,	// (0x00033fc9) bg_popup_heading_pane_g2

0xd63e,	// (0x00033fd3) bg_popup_heading_pane_g3

0xd648,	// (0x00033fdd) bg_popup_heading_pane_g4

0xd652,	// (0x00033fe7) bg_popup_heading_pane_g5

0xd65c,	// (0x00033ff1) bg_popup_heading_pane_g6

0xd664,	// (0x00033ff9) bg_popup_heading_pane_g7

0xd66c,	// (0x00034001) bg_popup_heading_pane_g8

0xd676,	// (0x0003400b) bg_popup_heading_pane_g9

0x0008,

0xf898,	// (0x0003622d) bg_popup_heading_pane_g

0xce69,	// (0x000337fe) bg_popup_sub_pane_g1

0xce79,	// (0x0003380e) bg_popup_sub_pane_g2

0xce71,	// (0x00033806) bg_popup_sub_pane_g3

0xce89,	// (0x0003381e) bg_popup_sub_pane_g4

0xce81,	// (0x00033816) bg_popup_sub_pane_g5

0xce91,	// (0x00033826) bg_popup_sub_pane_g6

0xce99,	// (0x0003382e) bg_popup_sub_pane_g7

0xcea9,	// (0x0003383e) bg_popup_sub_pane_g8

0xcea1,	// (0x00033836) bg_popup_sub_pane_g9

0x0008,

0xf872,	// (0x00036207) bg_popup_sub_pane_g

0xb644,	// (0x00031fd9) bg_popup_window_pane_cp5_ParamLimits

0xb644,	// (0x00031fd9) bg_popup_window_pane_cp5

0xb9d4,	// (0x00032369) popup_note_window_g1_ParamLimits

0xb9d4,	// (0x00032369) popup_note_window_g1

0xb9e0,	// (0x00032375) popup_note_window_t1_ParamLimits

0xb9e0,	// (0x00032375) popup_note_window_t1

0xb9f2,	// (0x00032387) popup_note_window_t2_ParamLimits

0xb9f2,	// (0x00032387) popup_note_window_t2

0xba04,	// (0x00032399) popup_note_window_t3_ParamLimits

0xba04,	// (0x00032399) popup_note_window_t3

0xba16,	// (0x000323ab) popup_note_window_t4_ParamLimits

0xba16,	// (0x000323ab) popup_note_window_t4

0xba3e,	// (0x000323d3) popup_note_window_t5_ParamLimits

0xba3e,	// (0x000323d3) popup_note_window_t5

0x0004,

0xf59b,	// (0x00035f30) popup_note_window_t_ParamLimits

0xf59b,	// (0x00035f30) popup_note_window_t

0xba62,	// (0x000323f7) bg_popup_window_pane_cp6_ParamLimits

0xba62,	// (0x000323f7) bg_popup_window_pane_cp6

0xd517,	// (0x00033eac) popup_note_image_window_g1_ParamLimits

0xd517,	// (0x00033eac) popup_note_image_window_g1

0xd523,	// (0x00033eb8) popup_note_image_window_g2_ParamLimits

0xd523,	// (0x00033eb8) popup_note_image_window_g2

0x0001,

0xf866,	// (0x000361fb) popup_note_image_window_g_ParamLimits

0xf866,	// (0x000361fb) popup_note_image_window_g

0xd53c,	// (0x00033ed1) popup_note_image_window_t1_ParamLimits

0xd53c,	// (0x00033ed1) popup_note_image_window_t1

0xd555,	// (0x00033eea) popup_note_image_window_t2_ParamLimits

0xd555,	// (0x00033eea) popup_note_image_window_t2

0xd56e,	// (0x00033f03) popup_note_image_window_t3_ParamLimits

0xd56e,	// (0x00033f03) popup_note_image_window_t3

0x0002,

0xf86b,	// (0x00036200) popup_note_image_window_t_ParamLimits

0xf86b,	// (0x00036200) popup_note_image_window_t

0xd3f4,	// (0x00033d89) bg_popup_window_pane_cp7_ParamLimits

0xd3f4,	// (0x00033d89) bg_popup_window_pane_cp7

0xd424,	// (0x00033db9) popup_note_wait_window_g1_ParamLimits

0xd424,	// (0x00033db9) popup_note_wait_window_g1

0xd430,	// (0x00033dc5) popup_note_wait_window_g2_ParamLimits

0xd430,	// (0x00033dc5) popup_note_wait_window_g2

0x0002,

0xf854,	// (0x000361e9) popup_note_wait_window_g_ParamLimits

0xf854,	// (0x000361e9) popup_note_wait_window_g

0xd448,	// (0x00033ddd) popup_note_wait_window_t1_ParamLimits

0xd448,	// (0x00033ddd) popup_note_wait_window_t1

0xd46f,	// (0x00033e04) popup_note_wait_window_t2_ParamLimits

0xd46f,	// (0x00033e04) popup_note_wait_window_t2

0xd48c,	// (0x00033e21) popup_note_wait_window_t3_ParamLimits

0xd48c,	// (0x00033e21) popup_note_wait_window_t3

0xd49f,	// (0x00033e34) popup_note_wait_window_t4_ParamLimits

0xd49f,	// (0x00033e34) popup_note_wait_window_t4

0x0004,

0xf85b,	// (0x000361f0) popup_note_wait_window_t_ParamLimits

0xf85b,	// (0x000361f0) popup_note_wait_window_t

0xd4c4,	// (0x00033e59) wait_bar_pane_ParamLimits

0xd4c4,	// (0x00033e59) wait_bar_pane

0xb5f6,	// (0x00031f8b) wait_anim_pane

0xb5f6,	// (0x00031f8b) wait_border_pane

0xb5ec,	// (0x00031f81) wait_anim_pane_g1

0xb5ec,	// (0x00031f81) wait_anim_pane_g2

0x0001,

0xf71f,	// (0x000360b4) wait_anim_pane_g

0xd398,	// (0x00033d2d) wait_border_pane_g1

0xd3a3,	// (0x00033d38) wait_border_pane_g2

0xd3ac,	// (0x00033d41) wait_border_pane_g3

0x0002,

0xf84d,	// (0x000361e2) wait_border_pane_g

0xd208,	// (0x00033b9d) bg_popup_window_pane_cp16_ParamLimits

0xd208,	// (0x00033b9d) bg_popup_window_pane_cp16

0xd308,	// (0x00033c9d) indicator_popup_pane_cp4_ParamLimits

0xd308,	// (0x00033c9d) indicator_popup_pane_cp4

0xd31c,	// (0x00033cb1) popup_query_data_window_t1_ParamLimits

0xd31c,	// (0x00033cb1) popup_query_data_window_t1

0xd32e,	// (0x00033cc3) popup_query_data_window_t2_ParamLimits

0xd32e,	// (0x00033cc3) popup_query_data_window_t2

0xd347,	// (0x00033cdc) popup_query_data_window_t3_ParamLimits

0xd347,	// (0x00033cdc) popup_query_data_window_t3

0x0002,

0xf846,	// (0x000361db) popup_query_data_window_t_ParamLimits

0xf846,	// (0x000361db) popup_query_data_window_t

0xd361,	// (0x00033cf6) query_popup_data_pane_ParamLimits

0xd361,	// (0x00033cf6) query_popup_data_pane

0xd375,	// (0x00033d0a) query_popup_data_pane_cp1_ParamLimits

0xd375,	// (0x00033d0a) query_popup_data_pane_cp1

0xd208,	// (0x00033b9d) bg_popup_window_pane_cp10_ParamLimits

0xd208,	// (0x00033b9d) bg_popup_window_pane_cp10

0xd23a,	// (0x00033bcf) indicator_popup_pane_ParamLimits

0xd23a,	// (0x00033bcf) indicator_popup_pane

0xd25c,	// (0x00033bf1) popup_query_code_window_t1_ParamLimits

0xd25c,	// (0x00033bf1) popup_query_code_window_t1

0xd276,	// (0x00033c0b) popup_query_code_window_t2_ParamLimits

0xd276,	// (0x00033c0b) popup_query_code_window_t2

0xd2bf,	// (0x00033c54) popup_query_code_window_t3_ParamLimits

0xd2bf,	// (0x00033c54) popup_query_code_window_t3

0x0002,

0xf83f,	// (0x000361d4) popup_query_code_window_t_ParamLimits

0xf83f,	// (0x000361d4) popup_query_code_window_t

0xd2ee,	// (0x00033c83) query_popup_pane_ParamLimits

0xd2ee,	// (0x00033c83) query_popup_pane

0xba62,	// (0x000323f7) bg_popup_window_pane_cp15_ParamLimits

0xba62,	// (0x000323f7) bg_popup_window_pane_cp15

0xba80,	// (0x00032415) indicator_popup_pane_cp1_ParamLimits

0xba80,	// (0x00032415) indicator_popup_pane_cp1

0xba93,	// (0x00032428) indicator_popup_pane_cp2_ParamLimits

0xba93,	// (0x00032428) indicator_popup_pane_cp2

0xbaa6,	// (0x0003243b) popup_query_data_code_window_g1_ParamLimits

0xbaa6,	// (0x0003243b) popup_query_data_code_window_g1

0xbab9,	// (0x0003244e) popup_query_data_code_window_t1_ParamLimits

0xbab9,	// (0x0003244e) popup_query_data_code_window_t1

0xbacb,	// (0x00032460) popup_query_data_code_window_t2_ParamLimits

0xbacb,	// (0x00032460) popup_query_data_code_window_t2

0xbadd,	// (0x00032472) popup_query_data_code_window_t3_ParamLimits

0xbadd,	// (0x00032472) popup_query_data_code_window_t3

0xbaf3,	// (0x00032488) popup_query_data_code_window_t4_ParamLimits

0xbaf3,	// (0x00032488) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00035f3b) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00035f3b) popup_query_data_code_window_t

0x1dd0,	// (0x00028765) list_single_midp_graphic_pane_g3

0xbb0b,	// (0x000324a0) query_popup_data_pane_cp2_ParamLimits

0xbb1e,	// (0x000324b3) query_popup_pane_cp2_ParamLimits

0xbb1e,	// (0x000324b3) query_popup_pane_cp2

0xb5f6,	// (0x00031f8b) bg_popup_window_pane_cp11

0xd200,	// (0x00033b95) heading_pane_cp5

0xbbac,	// (0x00032541) listscroll_popup_info_pane

0xb5f6,	// (0x00031f8b) input_focus_pane_cp3

0xbb31,	// (0x000324c6) query_popup_pane_t1

0xbb3f,	// (0x000324d4) list_popup_info_pane_ParamLimits

0xbb3f,	// (0x000324d4) list_popup_info_pane

0xbb4e,	// (0x000324e3) listscroll_popup_info_pane_g1

0xbb56,	// (0x000324eb) scroll_pane_cp7

0xbb60,	// (0x000324f5) popup_info_list_pane_t1_ParamLimits

0xbb60,	// (0x000324f5) popup_info_list_pane_t1

0xbb7a,	// (0x0003250f) popup_info_list_pane_t2_ParamLimits

0xbb7a,	// (0x0003250f) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00035f44) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00035f44) popup_info_list_pane_t

0xb5f6,	// (0x00031f8b) bg_popup_window_pane_cp12

0xe132,	// (0x00034ac7) find_popup_pane

0xb652,	// (0x00031fe7) bg_popup_window_pane_cp3

0xbb94,	// (0x00032529) heading_pane_cp3

0xbba0,	// (0x00032535) listscroll_popup_graphic_pane

0xb5f6,	// (0x00031f8b) bg_popup_window_pane_cp4

0x8c4f,	// (0x0002f5e4) heading_pane_cp4

0xbbac,	// (0x00032541) listscroll_popup_colour_pane

0xbbb4,	// (0x00032549) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbbb4,	// (0x00032549) cell_large_graphic_colour_none_popup_pane

0x8c57,	// (0x0002f5ec) grid_large_graphic_colour_popup_pane_ParamLimits

0x8c57,	// (0x0002f5ec) grid_large_graphic_colour_popup_pane

0xbbc8,	// (0x0003255d) listscroll_popup_colour_pane_g1_ParamLimits

0xbbc8,	// (0x0003255d) listscroll_popup_colour_pane_g1

0xbbdf,	// (0x00032574) listscroll_popup_colour_pane_g2_ParamLimits

0xbbdf,	// (0x00032574) listscroll_popup_colour_pane_g2

0xbbf6,	// (0x0003258b) listscroll_popup_colour_pane_g3_ParamLimits

0xbbf6,	// (0x0003258b) listscroll_popup_colour_pane_g3

0x8c7b,	// (0x0002f610) listscroll_popup_colour_pane_g4_ParamLimits

0x8c7b,	// (0x0002f610) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00035f49) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00035f49) listscroll_popup_colour_pane_g

0xbc06,	// (0x0003259b) scroll_pane_cp6_ParamLimits

0xbc06,	// (0x0003259b) scroll_pane_cp6

0x8c8a,	// (0x0002f61f) cell_large_graphic_colour_popup_pane_ParamLimits

0x8c8a,	// (0x0002f61f) cell_large_graphic_colour_popup_pane

0xbc18,	// (0x000325ad) cell_large_graphic_colour_none_popup_pane_t1

0xb5f6,	// (0x00031f8b) grid_highlight_pane_cp5

0xbc27,	// (0x000325bc) cell_large_graphic_colour_popup_pane_g1

0xbc2f,	// (0x000325c4) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x00035f52) cell_large_graphic_colour_popup_pane_g

0xbc37,	// (0x000325cc) cell_large_graphic_colour_popup_pane_g2_copy1

0xbc40,	// (0x000325d5) grid_highlight_pane_cp4

0xbc48,	// (0x000325dd) bg_popup_window_pane_cp8_ParamLimits

0xbc48,	// (0x000325dd) bg_popup_window_pane_cp8

0xbc63,	// (0x000325f8) popup_snote_single_text_window_g1_ParamLimits

0xbc63,	// (0x000325f8) popup_snote_single_text_window_g1

0xbc75,	// (0x0003260a) popup_snote_single_text_window_t1_ParamLimits

0xbc75,	// (0x0003260a) popup_snote_single_text_window_t1

0xbc88,	// (0x0003261d) popup_snote_single_text_window_t2_ParamLimits

0xbc88,	// (0x0003261d) popup_snote_single_text_window_t2

0xbc9b,	// (0x00032630) popup_snote_single_text_window_t3_ParamLimits

0xbc9b,	// (0x00032630) popup_snote_single_text_window_t3

0xbcd4,	// (0x00032669) popup_snote_single_text_window_t4_ParamLimits

0xbcd4,	// (0x00032669) popup_snote_single_text_window_t4

0xbd08,	// (0x0003269d) popup_snote_single_text_window_t5_ParamLimits

0xbd08,	// (0x0003269d) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x00035f57) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x00035f57) popup_snote_single_text_window_t

0xbd37,	// (0x000326cc) bg_popup_window_pane_cp9_ParamLimits

0xbd37,	// (0x000326cc) bg_popup_window_pane_cp9

0xbc63,	// (0x000325f8) popup_snote_single_graphic_window_g1_ParamLimits

0xbc63,	// (0x000325f8) popup_snote_single_graphic_window_g1

0xbd45,	// (0x000326da) popup_snote_single_graphic_window_g2_ParamLimits

0xbd45,	// (0x000326da) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x00035f62) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x00035f62) popup_snote_single_graphic_window_g

0xbd51,	// (0x000326e6) popup_snote_single_graphic_window_t1_ParamLimits

0xbd51,	// (0x000326e6) popup_snote_single_graphic_window_t1

0xbd64,	// (0x000326f9) popup_snote_single_graphic_window_t2_ParamLimits

0xbd64,	// (0x000326f9) popup_snote_single_graphic_window_t2

0xbd77,	// (0x0003270c) popup_snote_single_graphic_window_t3_ParamLimits

0xbd77,	// (0x0003270c) popup_snote_single_graphic_window_t3

0xbdb0,	// (0x00032745) popup_snote_single_graphic_window_t4_ParamLimits

0xbdb0,	// (0x00032745) popup_snote_single_graphic_window_t4

0xbde4,	// (0x00032779) popup_snote_single_graphic_window_t5_ParamLimits

0xbde4,	// (0x00032779) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x00035f67) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x00035f67) popup_snote_single_graphic_window_t

0xe0b6,	// (0x00034a4b) grid_graphic_popup_pane_ParamLimits

0xe0b6,	// (0x00034a4b) grid_graphic_popup_pane

0xe0e2,	// (0x00034a77) listscroll_popup_graphic_pane_g1_ParamLimits

0xe0e2,	// (0x00034a77) listscroll_popup_graphic_pane_g1

0xa1e9,	// (0x00030b7e) listscroll_popup_graphic_pane_g2_ParamLimits

0xa1e9,	// (0x00030b7e) listscroll_popup_graphic_pane_g2

0x0001,

0xf99d,	// (0x00036332) listscroll_popup_graphic_pane_g_ParamLimits

0xf99d,	// (0x00036332) listscroll_popup_graphic_pane_g

0xd9d8,	// (0x0003436d) scroll_pane_cp5

0xa1ac,	// (0x00030b41) cell_graphic_popup_pane_ParamLimits

0xa1ac,	// (0x00030b41) cell_graphic_popup_pane

0xe081,	// (0x00034a16) cell_graphic_popup_pane_g1

0xe089,	// (0x00034a1e) cell_graphic_popup_pane_g2

0xbc37,	// (0x000325cc) cell_graphic_popup_pane_g3

0x0002,

0x0051,	// (0x000269e6) cell_graphic_popup_pane_g

0xe092,	// (0x00034a27) cell_graphic_popup_pane_t2

0xbc40,	// (0x000325d5) grid_highlight_pane_cp3

0xbe25,	// (0x000327ba) list_gen_pane_ParamLimits

0xbe25,	// (0x000327ba) list_gen_pane

0xbe4d,	// (0x000327e2) scroll_pane

0xa167,	// (0x00030afc) bg_list_pane_g1_ParamLimits

0xa167,	// (0x00030afc) bg_list_pane_g1

0xe030,	// (0x000349c5) bg_list_pane_g2_ParamLimits

0xe030,	// (0x000349c5) bg_list_pane_g2

0xe043,	// (0x000349d8) bg_list_pane_g3_ParamLimits

0xe043,	// (0x000349d8) bg_list_pane_g3

0xe055,	// (0x000349ea) bg_list_pane_g4_ParamLimits

0xe055,	// (0x000349ea) bg_list_pane_g4

0xa182,	// (0x00030b17) bg_list_pane_g5_ParamLimits

0xa182,	// (0x00030b17) bg_list_pane_g5

0x0004,

0xf992,	// (0x00036327) bg_list_pane_g_ParamLimits

0xf992,	// (0x00036327) bg_list_pane_g

0xa11a,	// (0x00030aaf) list_double2_graphic_large_graphic_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double2_graphic_large_graphic_pane

0xa11a,	// (0x00030aaf) list_double2_graphic_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double2_graphic_pane

0xa11a,	// (0x00030aaf) list_double2_large_graphic_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double2_large_graphic_pane

0xa12d,	// (0x00030ac2) list_double2_pane_ParamLimits

0xa12d,	// (0x00030ac2) list_double2_pane

0xa11a,	// (0x00030aaf) list_double_graphic_heading_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_graphic_heading_pane

0xa11a,	// (0x00030aaf) list_double_graphic_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_graphic_pane

0xa11a,	// (0x00030aaf) list_double_heading_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_heading_pane

0xa11a,	// (0x00030aaf) list_double_large_graphic_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_large_graphic_pane

0xa11a,	// (0x00030aaf) list_double_number_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_number_pane

0xa11a,	// (0x00030aaf) list_double_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_pane

0xa11a,	// (0x00030aaf) list_double_time_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_double_time_pane

0xa11a,	// (0x00030aaf) list_setting_number_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_setting_number_pane

0xa11a,	// (0x00030aaf) list_setting_pane_ParamLimits

0xa11a,	// (0x00030aaf) list_setting_pane

0x9237,	// (0x0002fbcc) list_single_2graphic_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_2graphic_pane

0x9237,	// (0x0002fbcc) list_single_graphic_heading_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_graphic_heading_pane

0x9237,	// (0x0002fbcc) list_single_graphic_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_graphic_pane

0x9237,	// (0x0002fbcc) list_single_heading_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_heading_pane

0xa12d,	// (0x00030ac2) list_single_large_graphic_pane_ParamLimits

0xa12d,	// (0x00030ac2) list_single_large_graphic_pane

0x9237,	// (0x0002fbcc) list_single_number_heading_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_number_heading_pane

0x9237,	// (0x0002fbcc) list_single_number_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_number_pane

0x9237,	// (0x0002fbcc) list_single_pane_ParamLimits

0x9237,	// (0x0002fbcc) list_single_pane

0xb5f6,	// (0x00031f8b) list_highlight_pane_cp1

0x421e,	// (0x0002abb3) list_single_pane_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_pane_g1

0x422a,	// (0x0002abbf) list_single_pane_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_pane_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_pane_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_pane_g

0x6391,	// (0x0002cd26) list_single_pane_t1_ParamLimits

0x6391,	// (0x0002cd26) list_single_pane_t1

0x421e,	// (0x0002abb3) list_single_number_pane_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_number_pane_g1

0x422a,	// (0x0002abbf) list_single_number_pane_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_number_pane_g

0x62c5,	// (0x0002cc5a) list_single_number_pane_t1_ParamLimits

0x62c5,	// (0x0002cc5a) list_single_number_pane_t1

0x6351,	// (0x0002cce6) list_single_number_pane_t2_ParamLimits

0x6351,	// (0x0002cce6) list_single_number_pane_t2

0x0001,

0xf966,	// (0x000362fb) list_single_number_pane_t_ParamLimits

0xf966,	// (0x000362fb) list_single_number_pane_t

0x4212,	// (0x0002aba7) list_single_graphic_pane_g1_ParamLimits

0x4212,	// (0x0002aba7) list_single_graphic_pane_g1

0x421e,	// (0x0002abb3) list_single_graphic_pane_g2_ParamLimits

0x421e,	// (0x0002abb3) list_single_graphic_pane_g2

0x422a,	// (0x0002abbf) list_single_graphic_pane_g3_ParamLimits

0x422a,	// (0x0002abbf) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x00035f72) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x00035f72) list_single_graphic_pane_g

0x4236,	// (0x0002abcb) list_single_graphic_pane_t1_ParamLimits

0x4236,	// (0x0002abcb) list_single_graphic_pane_t1

0x421e,	// (0x0002abb3) list_single_heading_pane_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_heading_pane_g1

0x422a,	// (0x0002abbf) list_single_heading_pane_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_heading_pane_g

0x424c,	// (0x0002abe1) list_single_heading_pane_t1_ParamLimits

0x424c,	// (0x0002abe1) list_single_heading_pane_t1

0x4262,	// (0x0002abf7) list_single_heading_pane_t2_ParamLimits

0x4262,	// (0x0002abf7) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x00035f7e) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x00035f7e) list_single_heading_pane_t

0x421e,	// (0x0002abb3) list_single_number_heading_pane_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_number_heading_pane_g1

0x422a,	// (0x0002abbf) list_single_number_heading_pane_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_number_heading_pane_g

0x424c,	// (0x0002abe1) list_single_number_heading_pane_t1_ParamLimits

0x424c,	// (0x0002abe1) list_single_number_heading_pane_t1

0x4274,	// (0x0002ac09) list_single_number_heading_pane_t2_ParamLimits

0x4274,	// (0x0002ac09) list_single_number_heading_pane_t2

0x4286,	// (0x0002ac1b) list_single_number_heading_pane_t3_ParamLimits

0x4286,	// (0x0002ac1b) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x00035f83) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x00035f83) list_single_number_heading_pane_t

0x4298,	// (0x0002ac2d) list_single_graphic_heading_pane_g1_ParamLimits

0x4298,	// (0x0002ac2d) list_single_graphic_heading_pane_g1

0x7daa,	// (0x0002e73f) list_single_graphic_heading_pane_g4_ParamLimits

0x7daa,	// (0x0002e73f) list_single_graphic_heading_pane_g4

0x422a,	// (0x0002abbf) list_single_graphic_heading_pane_g5_ParamLimits

0x422a,	// (0x0002abbf) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x00035f8a) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x00035f8a) list_single_graphic_heading_pane_g

0x424c,	// (0x0002abe1) list_single_graphic_heading_pane_t1_ParamLimits

0x424c,	// (0x0002abe1) list_single_graphic_heading_pane_t1

0x42b5,	// (0x0002ac4a) list_single_graphic_heading_pane_t2_ParamLimits

0x42b5,	// (0x0002ac4a) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x00035f91) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x00035f91) list_single_graphic_heading_pane_t

0x64d6,	// (0x0002ce6b) list_single_large_graphic_pane_g1_ParamLimits

0x64d6,	// (0x0002ce6b) list_single_large_graphic_pane_g1

0x64e2,	// (0x0002ce77) list_single_large_graphic_pane_g2_ParamLimits

0x64e2,	// (0x0002ce77) list_single_large_graphic_pane_g2

0x64ee,	// (0x0002ce83) list_single_large_graphic_pane_g3_ParamLimits

0x64ee,	// (0x0002ce83) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x00035f96) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x00035f96) list_single_large_graphic_pane_g

0xd3a3,	// (0x00033d38) wait_border_pane_g2_copy1

0x7dbb,	// (0x0002e750) list_single_large_graphic_pane_g4_cp2

0x64fa,	// (0x0002ce8f) list_single_large_graphic_pane_t1_ParamLimits

0x64fa,	// (0x0002ce8f) list_single_large_graphic_pane_t1

0x7dc3,	// (0x0002e758) list_double_pane_g1_ParamLimits

0x7dc3,	// (0x0002e758) list_double_pane_g1

0x7dcf,	// (0x0002e764) list_double_pane_g2_ParamLimits

0x7dcf,	// (0x0002e764) list_double_pane_g2

0x0001,

0xf608,	// (0x00035f9d) list_double_pane_g_ParamLimits

0xf608,	// (0x00035f9d) list_double_pane_g

0x7ddb,	// (0x0002e770) list_double_pane_t1_ParamLimits

0x7ddb,	// (0x0002e770) list_double_pane_t1

0x7df1,	// (0x0002e786) list_double_pane_t2_ParamLimits

0x7df1,	// (0x0002e786) list_double_pane_t2

0x0001,

0xf60d,	// (0x00035fa2) list_double_pane_t_ParamLimits

0xf60d,	// (0x00035fa2) list_double_pane_t

0x7e03,	// (0x0002e798) list_double2_pane_g1_ParamLimits

0x7e03,	// (0x0002e798) list_double2_pane_g1

0x44ee,	// (0x0002ae83) list_double2_pane_g2_ParamLimits

0x44ee,	// (0x0002ae83) list_double2_pane_g2

0x0001,

0xf612,	// (0x00035fa7) list_double2_pane_g_ParamLimits

0xf612,	// (0x00035fa7) list_double2_pane_g

0x7e14,	// (0x0002e7a9) list_double2_pane_t1_ParamLimits

0x7e14,	// (0x0002e7a9) list_double2_pane_t1

0x7e2a,	// (0x0002e7bf) list_double2_pane_t2_ParamLimits

0x7e2a,	// (0x0002e7bf) list_double2_pane_t2

0x0001,

0xf617,	// (0x00035fac) list_double2_pane_t_ParamLimits

0xf617,	// (0x00035fac) list_double2_pane_t

0x7dc3,	// (0x0002e758) list_double_number_pane_g1_ParamLimits

0x7dc3,	// (0x0002e758) list_double_number_pane_g1

0x7dcf,	// (0x0002e764) list_double_number_pane_g2_ParamLimits

0x7dcf,	// (0x0002e764) list_double_number_pane_g2

0x0001,

0xf608,	// (0x00035f9d) list_double_number_pane_g_ParamLimits

0xf608,	// (0x00035f9d) list_double_number_pane_g

0x7e3c,	// (0x0002e7d1) list_double_number_pane_t1_ParamLimits

0x7e3c,	// (0x0002e7d1) list_double_number_pane_t1

0x7e4e,	// (0x0002e7e3) list_double_number_pane_t2_ParamLimits

0x7e4e,	// (0x0002e7e3) list_double_number_pane_t2

0x7e64,	// (0x0002e7f9) list_double_number_pane_t3_ParamLimits

0x7e64,	// (0x0002e7f9) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x00035fb1) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x00035fb1) list_double_number_pane_t

0x7e76,	// (0x0002e80b) list_double_graphic_pane_g1_ParamLimits

0x7e76,	// (0x0002e80b) list_double_graphic_pane_g1

0x7e82,	// (0x0002e817) list_double_graphic_pane_g2_ParamLimits

0x7e82,	// (0x0002e817) list_double_graphic_pane_g2

0x7e91,	// (0x0002e826) list_double_graphic_pane_g3_ParamLimits

0x7e91,	// (0x0002e826) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00035fb8) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00035fb8) list_double_graphic_pane_g

0x7ea9,	// (0x0002e83e) list_double_graphic_pane_t1_ParamLimits

0x7ea9,	// (0x0002e83e) list_double_graphic_pane_t1

0x7ebf,	// (0x0002e854) list_double_graphic_pane_t2_ParamLimits

0x7ebf,	// (0x0002e854) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x00035fc1) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x00035fc1) list_double_graphic_pane_t

0x7e76,	// (0x0002e80b) list_double2_graphic_pane_g1_ParamLimits

0x7e76,	// (0x0002e80b) list_double2_graphic_pane_g1

0x7ed1,	// (0x0002e866) list_double2_graphic_pane_g2_ParamLimits

0x7ed1,	// (0x0002e866) list_double2_graphic_pane_g2

0x7edd,	// (0x0002e872) list_double2_graphic_pane_g3_ParamLimits

0x7edd,	// (0x0002e872) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00035fc6) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00035fc6) list_double2_graphic_pane_g

0x7e4e,	// (0x0002e7e3) list_double2_graphic_pane_t1_ParamLimits

0x7e4e,	// (0x0002e7e3) list_double2_graphic_pane_t1

0x7ee9,	// (0x0002e87e) list_double2_graphic_pane_t2_ParamLimits

0x7ee9,	// (0x0002e87e) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x00035fcd) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x00035fcd) list_double2_graphic_pane_t

0x7efb,	// (0x0002e890) list_double_large_graphic_pane_g1_ParamLimits

0x7efb,	// (0x0002e890) list_double_large_graphic_pane_g1

0x7f26,	// (0x0002e8bb) list_double_large_graphic_pane_g2_ParamLimits

0x7f26,	// (0x0002e8bb) list_double_large_graphic_pane_g2

0x7dcf,	// (0x0002e764) list_double_large_graphic_pane_g3_ParamLimits

0x7dcf,	// (0x0002e764) list_double_large_graphic_pane_g3

0x7f37,	// (0x0002e8cc) list_double_large_graphic_pane_g4_ParamLimits

0x7f37,	// (0x0002e8cc) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00035fd2) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00035fd2) list_double_large_graphic_pane_g

0x7f49,	// (0x0002e8de) list_double_large_graphic_pane_t1_ParamLimits

0x7f49,	// (0x0002e8de) list_double_large_graphic_pane_t1

0x7f62,	// (0x0002e8f7) list_double_large_graphic_pane_t2_ParamLimits

0x7f62,	// (0x0002e8f7) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x00035fdd) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x00035fdd) list_double_large_graphic_pane_t

0x7f74,	// (0x0002e909) list_double2_large_graphic_pane_g1_ParamLimits

0x7f74,	// (0x0002e909) list_double2_large_graphic_pane_g1

0x7f26,	// (0x0002e8bb) list_double2_large_graphic_pane_g2_ParamLimits

0x7f26,	// (0x0002e8bb) list_double2_large_graphic_pane_g2

0x7dcf,	// (0x0002e764) list_double2_large_graphic_pane_g3_ParamLimits

0x7dcf,	// (0x0002e764) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00035fe2) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00035fe2) list_double2_large_graphic_pane_g

0x7f80,	// (0x0002e915) list_double2_large_graphic_pane_t1_ParamLimits

0x7f80,	// (0x0002e915) list_double2_large_graphic_pane_t1

0x7f96,	// (0x0002e92b) list_double2_large_graphic_pane_t2_ParamLimits

0x7f96,	// (0x0002e92b) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00035fe9) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00035fe9) list_double2_large_graphic_pane_t

0x7fa8,	// (0x0002e93d) list_double_heading_pane_g1_ParamLimits

0x7fa8,	// (0x0002e93d) list_double_heading_pane_g1

0x4315,	// (0x0002acaa) list_double_heading_pane_g2_ParamLimits

0x4315,	// (0x0002acaa) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x00035fee) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x00035fee) list_double_heading_pane_g

0x7fb9,	// (0x0002e94e) list_double_heading_pane_t1_ParamLimits

0x7fb9,	// (0x0002e94e) list_double_heading_pane_t1

0x7fcf,	// (0x0002e964) list_double_heading_pane_t2_ParamLimits

0x7fcf,	// (0x0002e964) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00035ff3) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00035ff3) list_double_heading_pane_t

0x43a6,	// (0x0002ad3b) list_double_graphic_heading_pane_g1_ParamLimits

0x43a6,	// (0x0002ad3b) list_double_graphic_heading_pane_g1

0x7fa8,	// (0x0002e93d) list_double_graphic_heading_pane_g2_ParamLimits

0x7fa8,	// (0x0002e93d) list_double_graphic_heading_pane_g2

0x4315,	// (0x0002acaa) list_double_graphic_heading_pane_g3_ParamLimits

0x4315,	// (0x0002acaa) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00035ff8) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00035ff8) list_double_graphic_heading_pane_g

0x7fe1,	// (0x0002e976) list_double_graphic_heading_pane_t1_ParamLimits

0x7fe1,	// (0x0002e976) list_double_graphic_heading_pane_t1

0x7ee9,	// (0x0002e87e) list_double_graphic_heading_pane_t2_ParamLimits

0x7ee9,	// (0x0002e87e) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x00035fff) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x00035fff) list_double_graphic_heading_pane_t

0x7f26,	// (0x0002e8bb) list_double_time_pane_g1_ParamLimits

0x7f26,	// (0x0002e8bb) list_double_time_pane_g1

0x7dcf,	// (0x0002e764) list_double_time_pane_g2_ParamLimits

0x7dcf,	// (0x0002e764) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x00036004) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x00036004) list_double_time_pane_g

0x7f80,	// (0x0002e915) list_double_time_pane_t1_ParamLimits

0x7f80,	// (0x0002e915) list_double_time_pane_t1

0x7ff7,	// (0x0002e98c) list_double_time_pane_t2_ParamLimits

0x7ff7,	// (0x0002e98c) list_double_time_pane_t2

0x8009,	// (0x0002e99e) list_double_time_pane_t3_ParamLimits

0x8009,	// (0x0002e99e) list_double_time_pane_t3

0x801b,	// (0x0002e9b0) list_double_time_pane_t4_ParamLimits

0x801b,	// (0x0002e9b0) list_double_time_pane_t4

0x0003,

0xf674,	// (0x00036009) list_double_time_pane_t_ParamLimits

0xf674,	// (0x00036009) list_double_time_pane_t

0x4401,	// (0x0002ad96) list_setting_pane_g1_ParamLimits

0x4401,	// (0x0002ad96) list_setting_pane_g1

0x440d,	// (0x0002ada2) list_setting_pane_g2_ParamLimits

0x440d,	// (0x0002ada2) list_setting_pane_g2

0x0001,

0xf67d,	// (0x00036012) list_setting_pane_g_ParamLimits

0xf67d,	// (0x00036012) list_setting_pane_g

0x802d,	// (0x0002e9c2) list_setting_pane_t1_ParamLimits

0x802d,	// (0x0002e9c2) list_setting_pane_t1

0x8047,	// (0x0002e9dc) list_setting_pane_t2_ParamLimits

0x8047,	// (0x0002e9dc) list_setting_pane_t2

0x0002,

0xf682,	// (0x00036017) list_setting_pane_t_ParamLimits

0xf682,	// (0x00036017) list_setting_pane_t

0x8084,	// (0x0002ea19) set_value_pane_cp_ParamLimits

0x8084,	// (0x0002ea19) set_value_pane_cp

0x8090,	// (0x0002ea25) list_setting_number_pane_g1_ParamLimits

0x8090,	// (0x0002ea25) list_setting_number_pane_g1

0x809c,	// (0x0002ea31) list_setting_number_pane_g2_ParamLimits

0x809c,	// (0x0002ea31) list_setting_number_pane_g2

0x0001,

0xf689,	// (0x0003601e) list_setting_number_pane_g_ParamLimits

0xf689,	// (0x0003601e) list_setting_number_pane_g

0x80a8,	// (0x0002ea3d) list_setting_number_pane_t1_ParamLimits

0x80a8,	// (0x0002ea3d) list_setting_number_pane_t1

0x80c1,	// (0x0002ea56) list_setting_number_pane_t2_ParamLimits

0x80c1,	// (0x0002ea56) list_setting_number_pane_t2

0x80db,	// (0x0002ea70) list_setting_number_pane_t3_ParamLimits

0x80db,	// (0x0002ea70) list_setting_number_pane_t3

0x0003,

0xf68e,	// (0x00036023) list_setting_number_pane_t_ParamLimits

0xf68e,	// (0x00036023) list_setting_number_pane_t

0x8084,	// (0x0002ea19) set_value_pane_ParamLimits

0x8084,	// (0x0002ea19) set_value_pane

0xbe81,	// (0x00032816) bg_set_opt_pane_ParamLimits

0xbe81,	// (0x00032816) bg_set_opt_pane

0x465a,	// (0x0002afef) set_value_pane_t1

0xbea2,	// (0x00032837) slider_set_pane_cp3

0xbeab,	// (0x00032840) volume_small_pane_cp

0xbeb4,	// (0x00032849) list_form_gen_pane

0xbebd,	// (0x00032852) scroll_pane_cp8

0x811e,	// (0x0002eab3) form_field_data_pane_ParamLimits

0x811e,	// (0x0002eab3) form_field_data_pane

0x8135,	// (0x0002eaca) form_field_data_wide_pane_ParamLimits

0x8135,	// (0x0002eaca) form_field_data_wide_pane

0x8155,	// (0x0002eaea) form_field_popup_pane_ParamLimits

0x8155,	// (0x0002eaea) form_field_popup_pane

0x8cb3,	// (0x0002f648) form_field_popup_wide_pane_ParamLimits

0x8cb3,	// (0x0002f648) form_field_popup_wide_pane

0x46ea,	// (0x0002b07f) form_field_slider_pane_ParamLimits

0x46ea,	// (0x0002b07f) form_field_slider_pane

0x46fd,	// (0x0002b092) form_field_slider_wide_pane_ParamLimits

0x46fd,	// (0x0002b092) form_field_slider_wide_pane

0xbece,	// (0x00032863) data_form_pane

0x8cd4,	// (0x0002f669) form_field_data_pane_t1

0xbeda,	// (0x0003286f) input_focus_pane

0xbee8,	// (0x0003287d) data_form_wide_pane

0x609c,	// (0x0002ca31) form_field_data_wide_pane_t1

0xbc55,	// (0x000325ea) input_focus_pane_cp6

0x8cee,	// (0x0002f683) form_field_popup_pane_t1

0xbeda,	// (0x0003286f) input_focus_pane_cp7

0xbf14,	// (0x000328a9) list_form_pane

0x60e0,	// (0x0002ca75) form_field_popup_wide_pane_t1

0xbeda,	// (0x0003286f) input_focus_pane_cp8

0xbf20,	// (0x000328b5) list_form_wide_pane

0x8d10,	// (0x0002f6a5) form_field_slider_pane_t1_ParamLimits

0x8d10,	// (0x0002f6a5) form_field_slider_pane_t1

0x8d28,	// (0x0002f6bd) form_field_slider_pane_t2_ParamLimits

0x8d28,	// (0x0002f6bd) form_field_slider_pane_t2

0x0001,

0xf69e,	// (0x00036033) form_field_slider_pane_t_ParamLimits

0xf69e,	// (0x00036033) form_field_slider_pane_t

0xb644,	// (0x00031fd9) input_focus_pane_cp9_ParamLimits

0xb644,	// (0x00031fd9) input_focus_pane_cp9

0x8d3d,	// (0x0002f6d2) slider_cont_pane_ParamLimits

0x8d3d,	// (0x0002f6d2) slider_cont_pane

0xbf2f,	// (0x000328c4) form_field_slider_wide_pane_t1_ParamLimits

0xbf2f,	// (0x000328c4) form_field_slider_wide_pane_t1

0x6137,	// (0x0002cacc) form_field_slider_wide_pane_t2_ParamLimits

0x6137,	// (0x0002cacc) form_field_slider_wide_pane_t2

0x0001,

0xf6a3,	// (0x00036038) form_field_slider_wide_pane_t_ParamLimits

0xf6a3,	// (0x00036038) form_field_slider_wide_pane_t

0xb644,	// (0x00031fd9) input_focus_pane_cp10_ParamLimits

0xb644,	// (0x00031fd9) input_focus_pane_cp10

0x8d51,	// (0x0002f6e6) slider_cont_pane_cp1_ParamLimits

0x8d51,	// (0x0002f6e6) slider_cont_pane_cp1

0x8d65,	// (0x0002f6fa) slider_form_pane_cp

0xbf41,	// (0x000328d6) input_focus_pane_g1

0xbf49,	// (0x000328de) input_focus_pane_g2

0xbf51,	// (0x000328e6) input_focus_pane_g3

0xbf59,	// (0x000328ee) input_focus_pane_g4

0xbf61,	// (0x000328f6) input_focus_pane_g5

0xbf69,	// (0x000328fe) input_focus_pane_g6

0xbf71,	// (0x00032906) input_focus_pane_g7

0xbf79,	// (0x0003290e) input_focus_pane_g8

0xbf81,	// (0x00032916) input_focus_pane_g9

0xb5ec,	// (0x00031f81) input_focus_pane_g10

0x0009,

0xf6a8,	// (0x0003603d) input_focus_pane_g

0xd3ac,	// (0x00033d41) wait_border_pane_g3_copy1

0x8d6d,	// (0x0002f702) data_form_pane_t1

0xb5ec,	// (0x00031f81) wait_anim_pane_g1_copy1

0x920b,	// (0x0002fba0) data_form_wide_pane_t1

0x8d87,	// (0x0002f71c) list_form_graphic_pane_cp_ParamLimits

0x8d87,	// (0x0002f71c) list_form_graphic_pane_cp

0xdfd9,	// (0x0003496e) slider_form_pane_g1

0xdfe2,	// (0x00034977) slider_form_pane_g2

0x0006,

0xf983,	// (0x00036318) slider_form_pane_g

0x8d9a,	// (0x0002f72f) list_form_graphic_pane_ParamLimits

0x8d9a,	// (0x0002f72f) list_form_graphic_pane

0x61b1,	// (0x0002cb46) list_form_graphic_pane_g1

0x61b9,	// (0x0002cb4e) list_form_graphic_pane_t1_ParamLimits

0x61b9,	// (0x0002cb4e) list_form_graphic_pane_t1

0xb652,	// (0x00031fe7) list_highlight_pane_cp5_ParamLimits

0xb652,	// (0x00031fe7) list_highlight_pane_cp5

0x61ce,	// (0x0002cb63) find_pane_g1

0xbf89,	// (0x0003291e) input_find_pane

0x61d7,	// (0x0002cb6c) input_find_pane_g1_ParamLimits

0x61d7,	// (0x0002cb6c) input_find_pane_g1

0x61e3,	// (0x0002cb78) input_find_pane_t1_ParamLimits

0x61e3,	// (0x0002cb78) input_find_pane_t1

0x61f8,	// (0x0002cb8d) input_find_pane_t2_ParamLimits

0x61f8,	// (0x0002cb8d) input_find_pane_t2

0x0001,

0xf6bd,	// (0x00036052) input_find_pane_t_ParamLimits

0xf6bd,	// (0x00036052) input_find_pane_t

0xbf92,	// (0x00032927) input_focus_pane_cp5_ParamLimits

0xbf92,	// (0x00032927) input_focus_pane_cp5

0x8dba,	// (0x0002f74f) bg_popup_window_pane_cp2_ParamLimits

0x8dba,	// (0x0002f74f) bg_popup_window_pane_cp2

0x8dc7,	// (0x0002f75c) listscroll_menu_pane_ParamLimits

0x8dc7,	// (0x0002f75c) listscroll_menu_pane

0x8dd3,	// (0x0002f768) popup_submenu_window_ParamLimits

0x8dd3,	// (0x0002f768) popup_submenu_window

0xbfa0,	// (0x00032935) find_popup_pane_g1

0xbfa8,	// (0x0003293d) input_popup_find_pane_cp

0xbf92,	// (0x00032927) input_focus_pane_cp4_ParamLimits

0xbf92,	// (0x00032927) input_focus_pane_cp4

0xbfb2,	// (0x00032947) input_popup_find_pane_t1_ParamLimits

0xbfb2,	// (0x00032947) input_popup_find_pane_t1

0xb5f6,	// (0x00031f8b) bg_popup_sub_pane_cp

0xbfe0,	// (0x00032975) listscroll_popup_sub_pane

0xbfe8,	// (0x0003297d) list_submenu_pane_ParamLimits

0xbfe8,	// (0x0003297d) list_submenu_pane

0xbff9,	// (0x0003298e) scroll_pane_cp4

0xc001,	// (0x00032996) list_single_popup_submenu_pane_ParamLimits

0xc001,	// (0x00032996) list_single_popup_submenu_pane

0xc014,	// (0x000329a9) list_single_popup_submenu_pane_g1

0xc01c,	// (0x000329b1) list_single_popup_submenu_pane_t1_ParamLimits

0xc01c,	// (0x000329b1) list_single_popup_submenu_pane_t1

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp1_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp1

0x8e05,	// (0x0002f79a) tabs_2_active_pane_g1

0x8e0d,	// (0x0002f7a2) tabs_2_active_pane_t1

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp1_ParamLimits

0xb644,	// (0x00031fd9) bg_passive_tab_pane_cp1

0x8e05,	// (0x0002f79a) tabs_2_passive_pane_g1

0x8e0d,	// (0x0002f7a2) tabs_2_passive_pane_t1

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp4

0x8e1f,	// (0x0002f7b4) tabs_2_long_active_pane_t1

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp4

0x1dd8,	// (0x0002876d) list_single_midp_graphic_pane_g4_ParamLimits

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp5

0x8e32,	// (0x0002f7c7) tabs_3_long_active_pane_t1

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp5

0x1dd8,	// (0x0002876d) list_single_midp_graphic_pane_g4

0xb652,	// (0x00031fe7) bg_popup_window_pane_cp13_ParamLimits

0xb652,	// (0x00031fe7) bg_popup_window_pane_cp13

0xc046,	// (0x000329db) listscroll_popup_fast_pane_ParamLimits

0xc046,	// (0x000329db) listscroll_popup_fast_pane

0xc055,	// (0x000329ea) grid_popup_fast_pane_ParamLimits

0xc055,	// (0x000329ea) grid_popup_fast_pane

0xc067,	// (0x000329fc) scroll_pane_cp9_ParamLimits

0xc067,	// (0x000329fc) scroll_pane_cp9

0xf38b,	// (0x00035d20) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xf38b,	// (0x00035d20) list_single_graphic_hl_pane_t1_cp2

0xc08b,	// (0x00032a20) input_focus_pane_cp20_ParamLimits

0xc08b,	// (0x00032a20) input_focus_pane_cp20

0xc099,	// (0x00032a2e) query_popup_data_pane_t1_ParamLimits

0xc099,	// (0x00032a2e) query_popup_data_pane_t1

0xc0ac,	// (0x00032a41) query_popup_data_pane_t2_ParamLimits

0xc0ac,	// (0x00032a41) query_popup_data_pane_t2

0xc0f2,	// (0x00032a87) query_popup_data_pane_t3_ParamLimits

0xc0f2,	// (0x00032a87) query_popup_data_pane_t3

0xc133,	// (0x00032ac8) query_popup_data_pane_t4_ParamLimits

0xc133,	// (0x00032ac8) query_popup_data_pane_t4

0xc16f,	// (0x00032b04) query_popup_data_pane_t5_ParamLimits

0xc16f,	// (0x00032b04) query_popup_data_pane_t5

0x0004,

0xf6c2,	// (0x00036057) query_popup_data_pane_t_ParamLimits

0xf6c2,	// (0x00036057) query_popup_data_pane_t

0xbf41,	// (0x000328d6) bg_set_opt_pane_g1

0xbf49,	// (0x000328de) bg_set_opt_pane_g2

0xbf51,	// (0x000328e6) bg_set_opt_pane_g3

0xbf59,	// (0x000328ee) bg_set_opt_pane_g4

0xbf61,	// (0x000328f6) bg_set_opt_pane_g5

0xbf69,	// (0x000328fe) bg_set_opt_pane_g6

0xbf71,	// (0x00032906) bg_set_opt_pane_g7

0xbf79,	// (0x0003290e) bg_set_opt_pane_g8

0xbf81,	// (0x00032916) bg_set_opt_pane_g9

0x0008,

0xf6cd,	// (0x00036062) bg_set_opt_pane_g

0x1197,	// (0x00027b2c) control_top_pane_stacon_ParamLimits

0x1197,	// (0x00027b2c) control_top_pane_stacon

0x11ea,	// (0x00027b7f) signal_pane_stacon_ParamLimits

0x11ea,	// (0x00027b7f) signal_pane_stacon

0xc5d3,	// (0x00032f68) stacon_top_pane_g1_ParamLimits

0xc5d3,	// (0x00032f68) stacon_top_pane_g1

0x120f,	// (0x00027ba4) title_pane_stacon_ParamLimits

0x120f,	// (0x00027ba4) title_pane_stacon

0x1239,	// (0x00027bce) uni_indicator_pane_stacon_ParamLimits

0x1239,	// (0x00027bce) uni_indicator_pane_stacon

0x124e,	// (0x00027be3) battery_pane_stacon_ParamLimits

0x124e,	// (0x00027be3) battery_pane_stacon

0x1292,	// (0x00027c27) control_bottom_pane_stacon_ParamLimits

0x1292,	// (0x00027c27) control_bottom_pane_stacon

0x12b5,	// (0x00027c4a) navi_pane_stacon_ParamLimits

0x12b5,	// (0x00027c4a) navi_pane_stacon

0xc5f5,	// (0x00032f8a) stacon_bottom_pane_g1_ParamLimits

0xc5f5,	// (0x00032f8a) stacon_bottom_pane_g1

0x0dc2,	// (0x00027757) aid_levels_signal_lsc_ParamLimits

0x0dc2,	// (0x00027757) aid_levels_signal_lsc

0x0dd9,	// (0x0002776e) signal_pane_stacon_g1_ParamLimits

0x0dd9,	// (0x0002776e) signal_pane_stacon_g1

0x0ded,	// (0x00027782) signal_pane_stacon_g2_ParamLimits

0x0ded,	// (0x00027782) signal_pane_stacon_g2

0x0001,

0xf6e0,	// (0x00036075) signal_pane_stacon_g_ParamLimits

0xf6e0,	// (0x00036075) signal_pane_stacon_g

0x0e22,	// (0x000277b7) title_pane_stacon_t1_ParamLimits

0x0e22,	// (0x000277b7) title_pane_stacon_t1

0xc1b3,	// (0x00032b48) uni_indicator_pane_stacon_g1

0xc1bd,	// (0x00032b52) uni_indicator_pane_stacon_g2

0xc1c7,	// (0x00032b5c) uni_indicator_pane_stacon_g3

0xc1d1,	// (0x00032b66) uni_indicator_pane_stacon_g4

0x0003,

0xf6ec,	// (0x00036081) uni_indicator_pane_stacon_g

0x0e47,	// (0x000277dc) control_top_pane_stacon_g1

0x0e4f,	// (0x000277e4) control_top_pane_stacon_t1_ParamLimits

0x0e4f,	// (0x000277e4) control_top_pane_stacon_t1

0x0e86,	// (0x0002781b) aid_levels_battery_lsc_ParamLimits

0x0e86,	// (0x0002781b) aid_levels_battery_lsc

0x0e9e,	// (0x00027833) battery_pane_stacon_g1_ParamLimits

0x0e9e,	// (0x00027833) battery_pane_stacon_g1

0x0eb1,	// (0x00027846) battery_pane_stacon_g2_ParamLimits

0x0eb1,	// (0x00027846) battery_pane_stacon_g2

0x0001,

0xf6f5,	// (0x0003608a) battery_pane_stacon_g_ParamLimits

0xf6f5,	// (0x0003608a) battery_pane_stacon_g

0x0eef,	// (0x00027884) navi_icon_pane_stacon

0x0f03,	// (0x00027898) navi_navi_pane_stacon

0x0eef,	// (0x00027884) navi_text_pane_stacon

0x0e47,	// (0x000277dc) control_bottom_pane_stacon_g1

0x0f17,	// (0x000278ac) control_bottom_pane_stacon_t1_ParamLimits

0x0f17,	// (0x000278ac) control_bottom_pane_stacon_t1

0x8e44,	// (0x0002f7d9) grid_app_pane_ParamLimits

0x8e44,	// (0x0002f7d9) grid_app_pane

0x8e7a,	// (0x0002f80f) scroll_pane_cp15_ParamLimits

0x8e7a,	// (0x0002f80f) scroll_pane_cp15

0x8e93,	// (0x0002f828) cell_app_pane_ParamLimits

0x8e93,	// (0x0002f828) cell_app_pane

0x8eda,	// (0x0002f86f) cell_app_pane_g1_ParamLimits

0x8eda,	// (0x0002f86f) cell_app_pane_g1

0xc1f5,	// (0x00032b8a) cell_app_pane_g2_ParamLimits

0xc1f5,	// (0x00032b8a) cell_app_pane_g2

0x0001,

0xf6fa,	// (0x0003608f) cell_app_pane_g_ParamLimits

0xf6fa,	// (0x0003608f) cell_app_pane_g

0xc201,	// (0x00032b96) cell_app_pane_t1_ParamLimits

0xc201,	// (0x00032b96) cell_app_pane_t1

0xc218,	// (0x00032bad) grid_highlight_pane_ParamLimits

0xc218,	// (0x00032bad) grid_highlight_pane

0xbf41,	// (0x000328d6) cell_highlight_pane_g1

0xbf49,	// (0x000328de) cell_highlight_pane_g2

0xbf51,	// (0x000328e6) cell_highlight_pane_g3

0xbf59,	// (0x000328ee) cell_highlight_pane_g4

0xbf61,	// (0x000328f6) cell_highlight_pane_g5

0xbf69,	// (0x000328fe) cell_highlight_pane_g6

0xbf71,	// (0x00032906) cell_highlight_pane_g7

0xbf79,	// (0x0003290e) cell_highlight_pane_g8

0xbf81,	// (0x00032916) cell_highlight_pane_g9

0xb5ec,	// (0x00031f81) cell_highlight_pane_g10

0x0009,

0xf6a8,	// (0x0003603d) cell_highlight_pane_g

0xc229,	// (0x00032bbe) bg_scroll_pane

0x0fe6,	// (0x0002797b) scroll_handle_pane

0xc270,	// (0x00032c05) scroll_bg_pane_g1

0xc285,	// (0x00032c1a) scroll_bg_pane_g2

0xc29d,	// (0x00032c32) scroll_bg_pane_g3

0x0002,

0xf6ff,	// (0x00036094) scroll_bg_pane_g

0xc2b2,	// (0x00032c47) scroll_handle_focus_pane_ParamLimits

0xc2b2,	// (0x00032c47) scroll_handle_focus_pane

0xc270,	// (0x00032c05) scroll_handle_pane_g1

0xc2bf,	// (0x00032c54) scroll_handle_pane_g2

0xc29d,	// (0x00032c32) scroll_handle_pane_g3

0x0002,

0xf706,	// (0x0003609b) scroll_handle_pane_g

0xbf92,	// (0x00032927) bg_popup_sub_pane_cp21_ParamLimits

0xbf92,	// (0x00032927) bg_popup_sub_pane_cp21

0xc2d3,	// (0x00032c68) popup_fep_japan_predictive_window_t1_ParamLimits

0xc2d3,	// (0x00032c68) popup_fep_japan_predictive_window_t1

0xc2ea,	// (0x00032c7f) popup_fep_japan_predictive_window_t2_ParamLimits

0xc2ea,	// (0x00032c7f) popup_fep_japan_predictive_window_t2

0xc31d,	// (0x00032cb2) popup_fep_japan_predictive_window_t3_ParamLimits

0xc31d,	// (0x00032cb2) popup_fep_japan_predictive_window_t3

0x0002,

0xf70d,	// (0x000360a2) popup_fep_japan_predictive_window_t_ParamLimits

0xf70d,	// (0x000360a2) popup_fep_japan_predictive_window_t

0xb5f6,	// (0x00031f8b) bg_popup_sub_pane_cp23

0xc354,	// (0x00032ce9) listscroll_japin_cand_pane

0xc35c,	// (0x00032cf1) popup_fep_japan_candidate_window_t1

0xc36a,	// (0x00032cff) candidate_pane_ParamLimits

0xc36a,	// (0x00032cff) candidate_pane

0xc37c,	// (0x00032d11) scroll_pane_cp30

0xc384,	// (0x00032d19) list_single_popup_jap_candidate_pane_ParamLimits

0xc384,	// (0x00032d19) list_single_popup_jap_candidate_pane

0xb5f6,	// (0x00031f8b) list_highlight_pane_cp30

0xc398,	// (0x00032d2d) list_single_popup_jap_candidate_pane_t1

0xc3a7,	// (0x00032d3c) level_1_signal

0xc3b4,	// (0x00032d49) level_2_signal

0xc3c1,	// (0x00032d56) level_3_signal

0xc3ce,	// (0x00032d63) level_4_signal

0xc3db,	// (0x00032d70) level_5_signal

0xc3e8,	// (0x00032d7d) level_6_signal

0xc3f5,	// (0x00032d8a) level_7_signal

0xc3a7,	// (0x00032d3c) level_1_battery

0xc3b4,	// (0x00032d49) level_2_battery

0xc3c1,	// (0x00032d56) level_3_battery

0xc3ce,	// (0x00032d63) level_4_battery

0xc3db,	// (0x00032d70) level_5_battery

0xc3e8,	// (0x00032d7d) level_6_battery

0xc3f5,	// (0x00032d8a) level_7_battery

0xc41a,	// (0x00032daf) list_menu_pane_ParamLimits

0xc41a,	// (0x00032daf) list_menu_pane

0xc42b,	// (0x00032dc0) scroll_pane_cp25_ParamLimits

0xc42b,	// (0x00032dc0) scroll_pane_cp25

0xc444,	// (0x00032dd9) list_double2_graphic_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double2_graphic_pane_cp2

0xc444,	// (0x00032dd9) list_double2_large_graphic_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double2_large_graphic_pane_cp2

0xc444,	// (0x00032dd9) list_double2_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double2_pane_cp2

0xc444,	// (0x00032dd9) list_double_graphic_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double_graphic_pane_cp2

0xc444,	// (0x00032dd9) list_double_large_graphic_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double_large_graphic_pane_cp2

0xc444,	// (0x00032dd9) list_double_number_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double_number_pane_cp2

0xc444,	// (0x00032dd9) list_double_pane_cp2_ParamLimits

0xc444,	// (0x00032dd9) list_double_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_2graphic_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_2graphic_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_graphic_heading_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_graphic_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_graphic_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_heading_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_heading_pane_cp2

0xc454,	// (0x00032de9) list_single_large_graphic_pane_cp2_ParamLimits

0xc454,	// (0x00032de9) list_single_large_graphic_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_number_heading_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_number_heading_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_number_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_number_pane_cp2

0x8f0f,	// (0x0002f8a4) list_single_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_pane_cp2

0xc46e,	// (0x00032e03) bg_popup_sub_pane_cp22

0x10fd,	// (0x00027a92) popup_side_volume_key_window_g1

0x1127,	// (0x00027abc) popup_side_volume_key_window_t1

0x1143,	// (0x00027ad8) volume_small_pane_cp1

0xb644,	// (0x00031fd9) bg_popup_sub_pane_cp24_ParamLimits

0xb644,	// (0x00031fd9) bg_popup_sub_pane_cp24

0xc484,	// (0x00032e19) fep_china_uni_candidate_pane_ParamLimits

0xc484,	// (0x00032e19) fep_china_uni_candidate_pane

0xc498,	// (0x00032e2d) fep_china_uni_entry_pane

0xc4a8,	// (0x00032e3d) popup_fep_china_uni_window_g1

0xc4c4,	// (0x00032e59) fep_china_uni_entry_pane_g1

0xc4cc,	// (0x00032e61) fep_china_uni_entry_pane_g2

0x0001,

0xf73a,	// (0x000360cf) fep_china_uni_entry_pane_g

0xc4d4,	// (0x00032e69) fep_entry_item_pane

0xc4de,	// (0x00032e73) fep_candidate_item_pane

0xc4e6,	// (0x00032e7b) fep_china_uni_candidate_pane_g1

0xc4ee,	// (0x00032e83) fep_china_uni_candidate_pane_g2

0xc4f6,	// (0x00032e8b) fep_china_uni_candidate_pane_g3

0xc4fe,	// (0x00032e93) fep_china_uni_candidate_pane_g4

0x0003,

0xf73f,	// (0x000360d4) fep_china_uni_candidate_pane_g

0xb5ec,	// (0x00031f81) fep_entry_item_pane_g1

0xc506,	// (0x00032e9b) fep_entry_item_pane_t1_ParamLimits

0xc506,	// (0x00032e9b) fep_entry_item_pane_t1

0xc51c,	// (0x00032eb1) fep_candidate_item_pane_t1_ParamLimits

0xc51c,	// (0x00032eb1) fep_candidate_item_pane_t1

0xc531,	// (0x00032ec6) fep_candidate_item_pane_t2_ParamLimits

0xc531,	// (0x00032ec6) fep_candidate_item_pane_t2

0x0001,

0xf748,	// (0x000360dd) fep_candidate_item_pane_t_ParamLimits

0xf748,	// (0x000360dd) fep_candidate_item_pane_t

0xb652,	// (0x00031fe7) list_highlight_pane_cp31_ParamLimits

0xb652,	// (0x00031fe7) list_highlight_pane_cp31

0xc543,	// (0x00032ed8) level_1_signal_lsc

0xc54c,	// (0x00032ee1) level_2_signal_lsc

0xc555,	// (0x00032eea) level_3_signal_lsc

0xc55e,	// (0x00032ef3) level_4_signal_lsc

0xc567,	// (0x00032efc) level_5_signal_lsc

0xc570,	// (0x00032f05) level_6_signal_lsc

0xc579,	// (0x00032f0e) level_7_signal_lsc

0xc579,	// (0x00032f0e) level_1_battery_lsc

0xc582,	// (0x00032f17) level_2_battery_lsc

0xc58b,	// (0x00032f20) level_3_battery_lsc

0xc594,	// (0x00032f29) level_4_battery_lsc

0xc59d,	// (0x00032f32) level_5_battery_lsc

0xc5a6,	// (0x00032f3b) level_6_battery_lsc

0xc543,	// (0x00032ed8) level_7_battery_lsc

0xc5af,	// (0x00032f44) scroll_handle_focus_pane_g1

0xc5b8,	// (0x00032f4d) scroll_handle_focus_pane_g2

0xc5c1,	// (0x00032f56) scroll_handle_focus_pane_g3

0x0002,

0xf74d,	// (0x000360e2) scroll_handle_focus_pane_g

0x620d,	// (0x0002cba2) list_single_2graphic_pane_g1_ParamLimits

0x620d,	// (0x0002cba2) list_single_2graphic_pane_g1

0x7daa,	// (0x0002e73f) list_single_2graphic_pane_g2_ParamLimits

0x7daa,	// (0x0002e73f) list_single_2graphic_pane_g2

0x422a,	// (0x0002abbf) list_single_2graphic_pane_g3_ParamLimits

0x422a,	// (0x0002abbf) list_single_2graphic_pane_g3

0x6219,	// (0x0002cbae) list_single_2graphic_pane_g4_ParamLimits

0x6219,	// (0x0002cbae) list_single_2graphic_pane_g4

0x0003,

0xf754,	// (0x000360e9) list_single_2graphic_pane_g_ParamLimits

0xf754,	// (0x000360e9) list_single_2graphic_pane_g

0x6225,	// (0x0002cbba) list_single_2graphic_pane_t1_ParamLimits

0x6225,	// (0x0002cbba) list_single_2graphic_pane_t1

0x8f71,	// (0x0002f906) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x8f71,	// (0x0002f906) list_double2_graphic_large_graphic_pane_g1

0x7f26,	// (0x0002e8bb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x7f26,	// (0x0002e8bb) list_double2_graphic_large_graphic_pane_g2

0x7dcf,	// (0x0002e764) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x7dcf,	// (0x0002e764) list_double2_graphic_large_graphic_pane_g3

0x8f83,	// (0x0002f918) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x8f83,	// (0x0002f918) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf75d,	// (0x000360f2) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf75d,	// (0x000360f2) list_double2_graphic_large_graphic_pane_g

0x8f8f,	// (0x0002f924) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x8f8f,	// (0x0002f924) list_double2_graphic_large_graphic_pane_t1

0x8fa5,	// (0x0002f93a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x8fa5,	// (0x0002f93a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf766,	// (0x000360fb) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf766,	// (0x000360fb) list_double2_graphic_large_graphic_pane_t

0xc6a2,	// (0x00033037) popup_fast_swap_window_ParamLimits

0xc6a2,	// (0x00033037) popup_fast_swap_window

0xc6be,	// (0x00033053) popup_side_volume_key_window

0xc6d8,	// (0x0003306d) stacon_top_pane

0xc6e2,	// (0x00033077) status_pane_ParamLimits

0xc6e2,	// (0x00033077) status_pane

0xc6d8,	// (0x0003306d) status_small_pane

0xb5f6,	// (0x00031f8b) control_pane

0xb5f6,	// (0x00031f8b) stacon_bottom_pane

0xbebd,	// (0x00032852) scroll_pane_cp121

0xbeb4,	// (0x00032849) set_content_pane

0x8fb7,	// (0x0002f94c) bg_active_tab_pane_g1_cp1

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp1

0x8fc0,	// (0x0002f955) bg_active_tab_pane_g3_cp1

0x8fb7,	// (0x0002f94c) bg_passive_tab_pane_g1_cp1

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp1

0x8fc0,	// (0x0002f955) bg_passive_tab_pane_g3_cp1

0x8fc9,	// (0x0002f95e) bg_active_tab_pane_g1_cp2

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp2

0x8fd2,	// (0x0002f967) bg_active_tab_pane_g3_cp2

0x8fc9,	// (0x0002f95e) bg_passive_tab_pane_g1_cp2

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp2

0x8fd2,	// (0x0002f967) bg_passive_tab_pane_g3_cp2

0x8fdb,	// (0x0002f970) bg_active_tab_pane_g1_cp3

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp3

0x8fe4,	// (0x0002f979) bg_active_tab_pane_g3_cp3

0x8fdb,	// (0x0002f970) bg_passive_tab_pane_g1_cp3

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp3

0x8fe4,	// (0x0002f979) bg_passive_tab_pane_g3_cp3

0x8fed,	// (0x0002f982) bg_active_tab_pane_g1_cp4

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp4

0x8ff6,	// (0x0002f98b) bg_active_tab_pane_g3_cp4

0x8fed,	// (0x0002f982) bg_passive_tab_pane_g1_cp4

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp4

0x8ff6,	// (0x0002f98b) bg_passive_tab_pane_g3_cp4

0xc611,	// (0x00032fa6) bg_active_tab_pane_g1_cp5

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp5

0xc61a,	// (0x00032faf) bg_active_tab_pane_g3_cp5

0xc611,	// (0x00032fa6) bg_passive_tab_pane_g1_cp5

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp5

0xc61a,	// (0x00032faf) bg_passive_tab_pane_g3_cp5

0x5cdc,	// (0x0002c671) list_set_graphic_pane_ParamLimits

0x5cdc,	// (0x0002c671) list_set_graphic_pane

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp4

0xc623,	// (0x00032fb8) list_set_graphic_pane_g1_ParamLimits

0xc623,	// (0x00032fb8) list_set_graphic_pane_g1

0xc62f,	// (0x00032fc4) list_set_graphic_pane_g2_ParamLimits

0xc62f,	// (0x00032fc4) list_set_graphic_pane_g2

0x0001,

0xf76b,	// (0x00036100) list_set_graphic_pane_g_ParamLimits

0xf76b,	// (0x00036100) list_set_graphic_pane_g

0x0009,

0xfa22,	// (0x000363b7) volume_small_pane_cp_g

0xc653,	// (0x00032fe8) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc653,	// (0x00032fe8) list_double2_large_graphic_pane_g1_cp2

0xc661,	// (0x00032ff6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc661,	// (0x00032ff6) list_double2_large_graphic_pane_g2_cp2

0xc672,	// (0x00033007) list_double2_large_graphic_pane_g3_cp2

0xc67a,	// (0x0003300f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc67a,	// (0x0003300f) list_double2_large_graphic_pane_t1_cp2

0xc690,	// (0x00033025) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc690,	// (0x00033025) list_double2_large_graphic_pane_t2_cp2

0xdd7d,	// (0x00034712) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd7d,	// (0x00034712) list_double_large_graphic_pane_g1_cp2

0xdd90,	// (0x00034725) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd90,	// (0x00034725) list_double_large_graphic_pane_g2_cp2

0xc800,	// (0x00033195) list_double_large_graphic_pane_g3_cp2

0xdda1,	// (0x00034736) list_double_large_graphic_pane_g4_cp

0xdda9,	// (0x0003473e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdda9,	// (0x0003473e) list_double_large_graphic_pane_t1_cp2

0xddcc,	// (0x00034761) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xddcc,	// (0x00034761) list_double_large_graphic_pane_t2_cp2

0xc6f0,	// (0x00033085) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc6f0,	// (0x00033085) list_double2_graphic_pane_g1_cp2

0xc6fe,	// (0x00033093) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc6fe,	// (0x00033093) list_double2_graphic_pane_g2_cp2

0xc70f,	// (0x000330a4) list_double2_graphic_pane_g3_cp2

0xc719,	// (0x000330ae) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc719,	// (0x000330ae) list_double2_graphic_pane_t1_cp2

0xc72f,	// (0x000330c4) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc72f,	// (0x000330c4) list_double2_graphic_pane_t2_cp2

0xc741,	// (0x000330d6) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc741,	// (0x000330d6) list_single_number_heading_pane_g1_cp2

0xc74d,	// (0x000330e2) list_single_number_heading_pane_g2_cp2

0xc755,	// (0x000330ea) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc755,	// (0x000330ea) list_single_number_heading_pane_t1_cp2

0xc76b,	// (0x00033100) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc76b,	// (0x00033100) list_single_number_heading_pane_t2_cp2

0xc77f,	// (0x00033114) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc77f,	// (0x00033114) list_single_number_heading_pane_t3_cp2

0xc741,	// (0x000330d6) list_single_heading_pane_g1_cp2_ParamLimits

0xc741,	// (0x000330d6) list_single_heading_pane_g1_cp2

0xc74d,	// (0x000330e2) list_single_heading_pane_g2_cp2

0xc755,	// (0x000330ea) list_single_heading_pane_t1_cp2_ParamLimits

0xc755,	// (0x000330ea) list_single_heading_pane_t1_cp2

0xdb85,	// (0x0003451a) list_single_heading_pane_t2_cp2_ParamLimits

0xdb85,	// (0x0003451a) list_single_heading_pane_t2_cp2

0xdb1f,	// (0x000344b4) list_double_graphic_pane_g1_cp2_ParamLimits

0xdb1f,	// (0x000344b4) list_double_graphic_pane_g1_cp2

0xdb2b,	// (0x000344c0) list_double_graphic_pane_g2_cp2_ParamLimits

0xdb2b,	// (0x000344c0) list_double_graphic_pane_g2_cp2

0xdb3a,	// (0x000344cf) list_double_graphic_pane_g3_cp2

0xdb42,	// (0x000344d7) list_double_graphic_pane_t1_cp2_ParamLimits

0xdb42,	// (0x000344d7) list_double_graphic_pane_t1_cp2

0xdb58,	// (0x000344ed) list_double_graphic_pane_t2_cp2_ParamLimits

0xdb58,	// (0x000344ed) list_double_graphic_pane_t2_cp2

0xc7f4,	// (0x00033189) list_double_number_pane_g1_cp2_ParamLimits

0xc7f4,	// (0x00033189) list_double_number_pane_g1_cp2

0xc800,	// (0x00033195) list_double_number_pane_g2_cp2

0xdae3,	// (0x00034478) list_double_number_pane_t1_cp2_ParamLimits

0xdae3,	// (0x00034478) list_double_number_pane_t1_cp2

0xdaf7,	// (0x0003448c) list_double_number_pane_t2_cp2_ParamLimits

0xdaf7,	// (0x0003448c) list_double_number_pane_t2_cp2

0xdb0d,	// (0x000344a2) list_double_number_pane_t3_cp2_ParamLimits

0xdb0d,	// (0x000344a2) list_double_number_pane_t3_cp2

0xda5a,	// (0x000343ef) list_single_graphic_pane_g1_cp2_ParamLimits

0xda5a,	// (0x000343ef) list_single_graphic_pane_g1_cp2

0xc858,	// (0x000331ed) list_single_graphic_pane_g2_cp2_ParamLimits

0xc858,	// (0x000331ed) list_single_graphic_pane_g2_cp2

0xc864,	// (0x000331f9) list_single_graphic_pane_g3_cp2

0xda30,	// (0x000343c5) list_single_graphic_pane_t1_cp2_ParamLimits

0xda30,	// (0x000343c5) list_single_graphic_pane_t1_cp2

0xc858,	// (0x000331ed) list_single_number_pane_g1_cp2_ParamLimits

0xc858,	// (0x000331ed) list_single_number_pane_g1_cp2

0xc864,	// (0x000331f9) list_single_number_pane_g2_cp2

0xda30,	// (0x000343c5) list_single_number_pane_t1_cp2_ParamLimits

0xda30,	// (0x000343c5) list_single_number_pane_t1_cp2

0xda46,	// (0x000343db) list_single_number_pane_t2_cp2_ParamLimits

0xda46,	// (0x000343db) list_single_number_pane_t2_cp2

0xc661,	// (0x00032ff6) list_double2_pane_g1_cp2_ParamLimits

0xc661,	// (0x00032ff6) list_double2_pane_g1_cp2

0xc672,	// (0x00033007) list_double2_pane_g2_cp2

0xc7cc,	// (0x00033161) list_double2_pane_t1_cp2_ParamLimits

0xc7cc,	// (0x00033161) list_double2_pane_t1_cp2

0xc7e2,	// (0x00033177) list_double2_pane_t2_cp2_ParamLimits

0xc7e2,	// (0x00033177) list_double2_pane_t2_cp2

0xc7f4,	// (0x00033189) list_double_pane_g1_cp2_ParamLimits

0xc7f4,	// (0x00033189) list_double_pane_g1_cp2

0xc800,	// (0x00033195) list_double_pane_g2_cp2

0xc808,	// (0x0003319d) list_double_pane_t1_cp2_ParamLimits

0xc808,	// (0x0003319d) list_double_pane_t1_cp2

0xc81e,	// (0x000331b3) list_double_pane_t2_cp2_ParamLimits

0xc81e,	// (0x000331b3) list_double_pane_t2_cp2

0xc848,	// (0x000331dd) list_single_pane_cp2_g3

0xc858,	// (0x000331ed) list_single_pane_g1_cp2_ParamLimits

0xc858,	// (0x000331ed) list_single_pane_g1_cp2

0xc864,	// (0x000331f9) list_single_pane_g2_cp2

0xc86c,	// (0x00033201) list_single_pane_t1_cp2_ParamLimits

0xc86c,	// (0x00033201) list_single_pane_t1_cp2

0xc884,	// (0x00033219) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc884,	// (0x00033219) list_single_large_graphic_pane_g1_cp2

0xc892,	// (0x00033227) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc892,	// (0x00033227) list_single_large_graphic_pane_g2_cp2

0xc89e,	// (0x00033233) list_single_large_graphic_pane_g3_cp2

0xc8a6,	// (0x0003323b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc8a6,	// (0x0003323b) list_single_large_graphic_pane_g4_cp1

0xc8c0,	// (0x00033255) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc8c0,	// (0x00033255) list_single_large_graphic_pane_t1_cp2

0xd9fa,	// (0x0003438f) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd9fa,	// (0x0003438f) list_single_graphic_heading_pane_g1_cp2

0xd9a9,	// (0x0003433e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd9a9,	// (0x0003433e) list_single_graphic_heading_pane_g4_cp2

0xc864,	// (0x000331f9) list_single_graphic_heading_pane_g5_cp2

0xda06,	// (0x0003439b) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xda06,	// (0x0003439b) list_single_graphic_heading_pane_t1_cp2

0xda1c,	// (0x000343b1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xda1c,	// (0x000343b1) list_single_graphic_heading_pane_t2_cp2

0xd99d,	// (0x00034332) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd99d,	// (0x00034332) list_single_2graphic_pane_g1_cp2

0xd9a9,	// (0x0003433e) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd9a9,	// (0x0003433e) list_single_2graphic_pane_g2_cp2

0xc864,	// (0x000331f9) list_single_2graphic_pane_g3_cp2

0xd9ba,	// (0x0003434f) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd9ba,	// (0x0003434f) list_single_2graphic_pane_g4_cp2

0xd9e4,	// (0x00034379) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd9e4,	// (0x00034379) list_single_2graphic_pane_t1_cp2

0xb5ec,	// (0x00031f81) list_highlight_pane_g10_cp1

0xd5a3,	// (0x00033f38) list_highlight_pane_g1_cp1

0xd5ab,	// (0x00033f40) list_highlight_pane_g2_cp1

0xd5b3,	// (0x00033f48) list_highlight_pane_g3_cp1

0xd5bb,	// (0x00033f50) list_highlight_pane_g4_cp1

0xd5c3,	// (0x00033f58) list_highlight_pane_g5_cp1

0xd5cb,	// (0x00033f60) list_highlight_pane_g6_cp1

0xd5d3,	// (0x00033f68) list_highlight_pane_g7_cp1

0xd5db,	// (0x00033f70) list_highlight_pane_g8_cp1

0xd5e3,	// (0x00033f78) list_highlight_pane_g9_cp1

0x9dc6,	// (0x0003075b) form_field_slider_pane_t3

0x9dd6,	// (0x0003076b) form_field_slider_pane_t4

0xd4d7,	// (0x00033e6c) slider_form_pane_ParamLimits

0xd4d7,	// (0x00033e6c) slider_form_pane

0xb5f6,	// (0x00031f8b) control_abbreviations

0xb5f6,	// (0x00031f8b) control_conventions

0xb5f6,	// (0x00031f8b) control_definitions

0xb5f6,	// (0x00031f8b) format_table_attribute

0xdbd1,	// (0x00034566) bg_popup_preview_window_pane_g9

0xb5f6,	// (0x00031f8b) format_table_data2

0xb5f6,	// (0x00031f8b) format_table_data3

0xb5f6,	// (0x00031f8b) format_table_data_example

0x0008,

0xb5f6,	// (0x00031f8b) intro_purpose

0xf8fb,	// (0x00036290) bg_popup_preview_window_pane_g

0xb5f6,	// (0x00031f8b) texts_category

0xb5f6,	// (0x00031f8b) texts_graphics

0xc8d6,	// (0x0003326b) text_digital

0xc8e5,	// (0x0003327a) text_primary

0xc8f4,	// (0x00033289) text_primary_small

0xc903,	// (0x00033298) text_secondary

0xc912,	// (0x000332a7) text_title

0xe067,	// (0x000349fc) bg_passive_tab_pane_g1_cp3_srt

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp3_srt

0xe070,	// (0x00034a05) bg_passive_tab_pane_g3_cp3_srt

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp3_srt_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp3_srt

0xe079,	// (0x00034a0e) tabs_4_active_pane_srt_g1

0xa196,	// (0x00030b2b) tabs_4_active_pane_srt_t1_ParamLimits

0xa196,	// (0x00030b2b) tabs_4_active_pane_srt_t1

0xe067,	// (0x000349fc) bg_active_tab_pane_g1_cp3_copy1

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp3_copy1

0xe070,	// (0x00034a05) bg_active_tab_pane_g3_cp3_copy1

0xb652,	// (0x00031fe7) tabs_2_long_active_pane_srt_ParamLimits

0xb652,	// (0x00031fe7) tabs_2_long_active_pane_srt

0xb652,	// (0x00031fe7) tabs_2_long_passive_pane_srt_ParamLimits

0xb652,	// (0x00031fe7) tabs_2_long_passive_pane_srt

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp4_srt_ParamLimits

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp4_srt

0xdf92,	// (0x00034927) bg_passive_tab_pane_g1_cp4_srt

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp4_srt

0xdf9b,	// (0x00034930) bg_passive_tab_pane_g3_cp4_srt

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp4_srt_ParamLimits

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp4_srt

0x9fa2,	// (0x00030937) tabs_2_long_active_pane_srt_t1_ParamLimits

0x9fa2,	// (0x00030937) tabs_2_long_active_pane_srt_t1

0xdf92,	// (0x00034927) bg_active_tab_pane_g1_cp4_srt

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp4_srt

0xdf9b,	// (0x00034930) bg_active_tab_pane_g3_cp4_srt

0xb644,	// (0x00031fd9) tabs_3_long_active_pane_srt_ParamLimits

0xb644,	// (0x00031fd9) tabs_3_long_active_pane_srt

0xb644,	// (0x00031fd9) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb644,	// (0x00031fd9) tabs_3_long_passive_pane_cp_srt

0xb644,	// (0x00031fd9) tabs_3_long_passive_pane_srt_ParamLimits

0xb644,	// (0x00031fd9) tabs_3_long_passive_pane_srt

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp5_srt_ParamLimits

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp5_srt

0xc611,	// (0x00032fa6) bg_passive_tab_pane_g1_cp5_srt

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp5_srt

0xc61a,	// (0x00032faf) bg_passive_tab_pane_g3_cp5_srt

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp5_srt_ParamLimits

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp5_srt

0x9f8c,	// (0x00030921) tabs_3_long_active_pane_srt_t1_ParamLimits

0x9f8c,	// (0x00030921) tabs_3_long_active_pane_srt_t1

0xc611,	// (0x00032fa6) bg_active_tab_pane_g1_cp5_srt

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp5_srt

0xc61a,	// (0x00032faf) bg_active_tab_pane_g3_cp5_srt

0xdf84,	// (0x00034919) navi_text_pane_srt_t1

0xdf7c,	// (0x00034911) navi_icon_pane_srt_g1

0xca10,	// (0x000333a5) midp_editing_number_pane_srt

0xc921,	// (0x000332b6) midp_ticker_pane_srt

0xca18,	// (0x000333ad) midp_ticker_pane_srt_g1

0xca20,	// (0x000333b5) midp_ticker_pane_srt_g2

0x0001,

0xf78a,	// (0x0003611f) midp_ticker_pane_srt_g

0xca28,	// (0x000333bd) midp_ticker_pane_srt_t1

0xdf6d,	// (0x00034902) midp_editing_number_pane_t1_copy1

0x8fff,	// (0x0002f994) listscroll_midp_pane

0x8fff,	// (0x0002f994) midp_form_pane

0xc929,	// (0x000332be) midp_info_popup_window_ParamLimits

0xc929,	// (0x000332be) midp_info_popup_window

0xbf92,	// (0x00032927) bg_popup_sub_pane_cp50_ParamLimits

0xbf92,	// (0x00032927) bg_popup_sub_pane_cp50

0xd1f4,	// (0x00033b89) listscroll_midp_info_pane_ParamLimits

0xd1f4,	// (0x00033b89) listscroll_midp_info_pane

0xd1dc,	// (0x00033b71) listscroll_form_midp_pane_ParamLimits

0xd1dc,	// (0x00033b71) listscroll_form_midp_pane

0xd1e8,	// (0x00033b7d) scroll_bar_cp050

0x9dba,	// (0x0003074f) list_midp_pane

0xe93b,	// (0x000352d0) signal_pane_g2_cp

0xd10e,	// (0x00033aa3) listscroll_midp_info_pane_t1_ParamLimits

0xd10e,	// (0x00033aa3) listscroll_midp_info_pane_t1

0xd126,	// (0x00033abb) listscroll_midp_info_pane_t2_ParamLimits

0xd126,	// (0x00033abb) listscroll_midp_info_pane_t2

0xd164,	// (0x00033af9) listscroll_midp_info_pane_t3_ParamLimits

0xd164,	// (0x00033af9) listscroll_midp_info_pane_t3

0xd19e,	// (0x00033b33) listscroll_midp_info_pane_t4_ParamLimits

0xd19e,	// (0x00033b33) listscroll_midp_info_pane_t4

0x0003,

0xf836,	// (0x000361cb) listscroll_midp_info_pane_t_ParamLimits

0xf836,	// (0x000361cb) listscroll_midp_info_pane_t

0xbff9,	// (0x0003298e) scroll_pane_cp21

0xd0b2,	// (0x00033a47) form_midp_field_choice_group_pane

0xd0bb,	// (0x00033a50) form_midp_field_text_pane

0xd0f4,	// (0x00033a89) form_midp_field_time_pane

0xd0fc,	// (0x00033a91) form_midp_gauge_slider_pane

0xd105,	// (0x00033a9a) form_midp_gauge_wait_pane

0xb5f6,	// (0x00031f8b) form_midp_image_pane

0x91ef,	// (0x0002fb84) list_single_midp_pane_ParamLimits

0x91ef,	// (0x0002fb84) list_single_midp_pane

0x9d96,	// (0x0003072b) form_midp_field_text_pane_t1

0xcf59,	// (0x000338ee) input_focus_pane_cp050

0xd0a1,	// (0x00033a36) list_midp_form_text_pane

0xd070,	// (0x00033a05) form_midp_field_choice_group_pane_t1

0xd07e,	// (0x00033a13) input_focus_pane_cp051

0xd092,	// (0x00033a27) list_midp_choice_pane

0xb5f6,	// (0x00031f8b) status_idle_pane

0xd054,	// (0x000339e9) form_midp_field_time_pane_t1

0xb5ec,	// (0x00031f81) wait_anim_pane_g2_copy1

0xd062,	// (0x000339f7) form_midp_field_time_pane_t2

0x0001,

0xc982,	// (0x00033317) aid_navinavi_width_2_pane

0xf831,	// (0x000361c6) form_midp_field_time_pane_t

0xb5f6,	// (0x00031f8b) input_focus_pane_cp052

0xb5f6,	// (0x00031f8b) bg_input_focus_pane_cp040

0xd030,	// (0x000339c5) form_midp_gauge_slider_pane_t1

0xd03e,	// (0x000339d3) form_midp_gauge_slider_pane_t2

0x9d7a,	// (0x0003070f) form_midp_gauge_slider_pane_t3

0x9d88,	// (0x0003071d) form_midp_gauge_slider_pane_t4

0x0003,

0xf828,	// (0x000361bd) form_midp_gauge_slider_pane_t

0xd04c,	// (0x000339e1) form_midp_slider_pane

0xb652,	// (0x00031fe7) bg_input_focus_pane_cp041_ParamLimits

0xb652,	// (0x00031fe7) bg_input_focus_pane_cp041

0xcffd,	// (0x00033992) form_midp_gauge_wait_pane_t1_ParamLimits

0xcffd,	// (0x00033992) form_midp_gauge_wait_pane_t1

0xd00f,	// (0x000339a4) form_midp_gauge_wait_pane_t2_ParamLimits

0xd00f,	// (0x000339a4) form_midp_gauge_wait_pane_t2

0x0001,

0xf823,	// (0x000361b8) form_midp_gauge_wait_pane_t_ParamLimits

0xf823,	// (0x000361b8) form_midp_gauge_wait_pane_t

0xd021,	// (0x000339b6) form_midp_wait_pane_ParamLimits

0xd021,	// (0x000339b6) form_midp_wait_pane

0xcfc7,	// (0x0003395c) form_midp_image_pane_g1

0xcfd0,	// (0x00033965) form_midp_image_pane_t1

0xcfdf,	// (0x00033974) form_midp_image_pane_t2

0xcfee,	// (0x00033983) form_midp_image_pane_t3

0x0002,

0xf81c,	// (0x000361b1) form_midp_image_pane_t

0xcfbe,	// (0x00033953) list_single_midp_pane_g1

0x6305,	// (0x0002cc9a) list_single_midp_pane_t1

0x9d63,	// (0x000306f8) list_midp_form_item_pane_ParamLimits

0x9d63,	// (0x000306f8) list_midp_form_item_pane

0xc93c,	// (0x000332d1) list_midp_form_item_pane_t1

0xc94b,	// (0x000332e0) midp_ticker_pane_g1

0xc957,	// (0x000332ec) midp_ticker_pane_g2

0x0001,

0xf770,	// (0x00036105) midp_ticker_pane_g

0x90ab,	// (0x0002fa40) midp_ticker_pane_t1

0xa10b,	// (0x00030aa0) midp_editing_number_pane_t1

0xdffb,	// (0x00034990) midp_editing_number_pane

0xe00a,	// (0x0003499f) midp_ticker_pane

0xdf5d,	// (0x000348f2) ai_message_heading_pane

0xb5f6,	// (0x00031f8b) bg_popup_window_pane_cp14

0xdf65,	// (0x000348fa) listscroll_ai_message_pane

0xdee7,	// (0x0003487c) ai_message_heading_pane_g1_ParamLimits

0xdee7,	// (0x0003487c) ai_message_heading_pane_g1

0xdef3,	// (0x00034888) ai_message_heading_pane_g2_ParamLimits

0xdef3,	// (0x00034888) ai_message_heading_pane_g2

0xdeff,	// (0x00034894) ai_message_heading_pane_g3_ParamLimits

0xdeff,	// (0x00034894) ai_message_heading_pane_g3

0xdf0b,	// (0x000348a0) ai_message_heading_pane_g4_ParamLimits

0xdf0b,	// (0x000348a0) ai_message_heading_pane_g4

0x0003,

0xf95d,	// (0x000362f2) ai_message_heading_pane_g_ParamLimits

0xf95d,	// (0x000362f2) ai_message_heading_pane_g

0xdf17,	// (0x000348ac) ai_message_heading_pane_t1_ParamLimits

0xdf17,	// (0x000348ac) ai_message_heading_pane_t1

0xdf31,	// (0x000348c6) ai_message_heading_pane_t2_ParamLimits

0xdf31,	// (0x000348c6) ai_message_heading_pane_t2

0x0001,

0x0002,	// (0x00026997) ai_message_heading_pane_t_ParamLimits

0x0002,	// (0x00026997) ai_message_heading_pane_t

0xdf43,	// (0x000348d8) bg_popup_heading_pane_cp1_ParamLimits

0xdf43,	// (0x000348d8) bg_popup_heading_pane_cp1

0xded5,	// (0x0003486a) list_ai_message_pane_ParamLimits

0xded5,	// (0x0003486a) list_ai_message_pane

0xbff9,	// (0x0003298e) scroll_pane_cp10

0xde71,	// (0x00034806) list_ai_message_pane_g1

0xde79,	// (0x0003480e) list_ai_message_pane_g2

0x0001,

0xf93a,	// (0x000362cf) list_ai_message_pane_g

0xde81,	// (0x00034816) list_ai_message_pane_t1_ParamLimits

0xde81,	// (0x00034816) list_ai_message_pane_t1

0xde96,	// (0x0003482b) list_ai_message_pane_t2_ParamLimits

0xde96,	// (0x0003482b) list_ai_message_pane_t2

0xdeab,	// (0x00034840) list_ai_message_pane_t3_ParamLimits

0xdeab,	// (0x00034840) list_ai_message_pane_t3

0xdec0,	// (0x00034855) list_ai_message_pane_t4_ParamLimits

0xdec0,	// (0x00034855) list_ai_message_pane_t4

0x0003,

0xf93f,	// (0x000362d4) list_ai_message_pane_t_ParamLimits

0xf93f,	// (0x000362d4) list_ai_message_pane_t

0x9f67,	// (0x000308fc) cell_ai_soft_ind_pane_ParamLimits

0x9f67,	// (0x000308fc) cell_ai_soft_ind_pane

0xc963,	// (0x000332f8) cell_ai_soft_ind_pane_g1_ParamLimits

0xc963,	// (0x000332f8) cell_ai_soft_ind_pane_g1

0xb5f6,	// (0x00031f8b) grid_highlight_cp1

0xc970,	// (0x00033305) text_secondary_cp56_ParamLimits

0xc970,	// (0x00033305) text_secondary_cp56

0xde46,	// (0x000347db) example_general_pane_ParamLimits

0xde46,	// (0x000347db) example_general_pane

0xde52,	// (0x000347e7) example_parent_pane_g1_ParamLimits

0xde52,	// (0x000347e7) example_parent_pane_g1

0xde5e,	// (0x000347f3) example_parent_pane_t1_ParamLimits

0xde5e,	// (0x000347f3) example_parent_pane_t1

0x9636,	// (0x0002ffcb) popup_preview_text_window_ParamLimits

0x9636,	// (0x0002ffcb) popup_preview_text_window

0xc850,	// (0x000331e5) list_single_pane_cp2_g4

0xba62,	// (0x000323f7) bg_popup_preview_window_pane_ParamLimits

0xba62,	// (0x000323f7) bg_popup_preview_window_pane

0xdbd9,	// (0x0003456e) popup_preview_text_window_t1_ParamLimits

0xdbd9,	// (0x0003456e) popup_preview_text_window_t1

0xdbf7,	// (0x0003458c) popup_preview_text_window_t2_ParamLimits

0xdbf7,	// (0x0003458c) popup_preview_text_window_t2

0xdc40,	// (0x000345d5) popup_preview_text_window_t3_ParamLimits

0xdc40,	// (0x000345d5) popup_preview_text_window_t3

0xdc85,	// (0x0003461a) popup_preview_text_window_t4_ParamLimits

0xdc85,	// (0x0003461a) popup_preview_text_window_t4

0x0004,

0xf90e,	// (0x000362a3) popup_preview_text_window_t_ParamLimits

0xf90e,	// (0x000362a3) popup_preview_text_window_t

0xdd03,	// (0x00034698) scroll_pane_cp11

0xce69,	// (0x000337fe) bg_popup_preview_window_pane_g1

0xdb99,	// (0x0003452e) bg_popup_preview_window_pane_g2

0xdba1,	// (0x00034536) bg_popup_preview_window_pane_g3

0xdba9,	// (0x0003453e) bg_popup_preview_window_pane_g4

0xdbb1,	// (0x00034546) bg_popup_preview_window_pane_g5

0xdbb9,	// (0x0003454e) bg_popup_preview_window_pane_g6

0xdbc1,	// (0x00034556) bg_popup_preview_window_pane_g7

0xdbc9,	// (0x0003455e) bg_popup_preview_window_pane_g8

0x0634,	// (0x00026fc9) aid_popup_width_pane

0x95b2,	// (0x0002ff47) popup_midp_note_alarm_window_ParamLimits

0x95b2,	// (0x0002ff47) popup_midp_note_alarm_window

0xbece,	// (0x00032863) data_form_pane_ParamLimits

0x8cca,	// (0x0002f65f) form_field_data_pane_g1

0x8cd4,	// (0x0002f669) form_field_data_pane_t1_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_ParamLimits

0xbee8,	// (0x0003287d) data_form_wide_pane_ParamLimits

0x4734,	// (0x0002b0c9) form_field_data_wide_pane_g1

0x609c,	// (0x0002ca31) form_field_data_wide_pane_t1_ParamLimits

0xbc55,	// (0x000325ea) input_focus_pane_cp6_ParamLimits

0x8df7,	// (0x0002f78c) input_popup_find_pane_g1_ParamLimits

0x8df7,	// (0x0002f78c) input_popup_find_pane_g1

0x0ec2,	// (0x00027857) aid_navi_side_left_pane

0x0ed7,	// (0x0002786c) aid_navi_side_right_pane

0xd680,	// (0x00034015) bg_popup_window_pane_cp30_ParamLimits

0xd680,	// (0x00034015) bg_popup_window_pane_cp30

0xd6fa,	// (0x0003408f) popup_midp_note_alarm_window_g1_ParamLimits

0xd6fa,	// (0x0003408f) popup_midp_note_alarm_window_g1

0xd72a,	// (0x000340bf) popup_midp_note_alarm_window_t1_ParamLimits

0xd72a,	// (0x000340bf) popup_midp_note_alarm_window_t1

0xd7cb,	// (0x00034160) popup_midp_note_alarm_window_t2_ParamLimits

0xd7cb,	// (0x00034160) popup_midp_note_alarm_window_t2

0xd879,	// (0x0003420e) popup_midp_note_alarm_window_t3_ParamLimits

0xd879,	// (0x0003420e) popup_midp_note_alarm_window_t3

0xd8a1,	// (0x00034236) popup_midp_note_alarm_window_t4_ParamLimits

0xd8a1,	// (0x00034236) popup_midp_note_alarm_window_t4

0xd8c1,	// (0x00034256) popup_midp_note_alarm_window_t5_ParamLimits

0xd8c1,	// (0x00034256) popup_midp_note_alarm_window_t5

0x000a,

0xf8ab,	// (0x00036240) popup_midp_note_alarm_window_t_ParamLimits

0xf8ab,	// (0x00036240) popup_midp_note_alarm_window_t

0xd96d,	// (0x00034302) wait_bar_pane_cp1_ParamLimits

0xd96d,	// (0x00034302) wait_bar_pane_cp1

0xb5f6,	// (0x00031f8b) wait_anim_pane_copy1

0xb5f6,	// (0x00031f8b) wait_border_pane_copy1

0xd398,	// (0x00033d2d) wait_border_pane_g1_copy1

0x60b6,	// (0x0002ca4b) form_field_popup_pane_g1

0x8cee,	// (0x0002f683) form_field_popup_pane_t1_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_cp7_ParamLimits

0xbf14,	// (0x000328a9) list_form_pane_ParamLimits

0x60d8,	// (0x0002ca6d) form_field_popup_wide_pane_g1

0x60e0,	// (0x0002ca75) form_field_popup_wide_pane_t1_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_cp8_ParamLimits

0xbf20,	// (0x000328b5) list_form_wide_pane_ParamLimits

0xe0a0,	// (0x00034a35) aid_size_cell_graphic_pane

0x8d6d,	// (0x0002f702) data_form_pane_t1_ParamLimits

0x920b,	// (0x0002fba0) data_form_wide_pane_t1_ParamLimits

0x99eb,	// (0x00030380) bg_status_flat_pane

0x8998,	// (0x0002f32d) title_pane_t1_ParamLimits

0xb60c,	// (0x00031fa1) title_pane_t2_ParamLimits

0xb632,	// (0x00031fc7) title_pane_t3_ParamLimits

0xf573,	// (0x00035f08) title_pane_t_ParamLimits

0xc3a7,	// (0x00032d3c) level_1_signal_ParamLimits

0xc3b4,	// (0x00032d49) level_2_signal_ParamLimits

0xc3c1,	// (0x00032d56) level_3_signal_ParamLimits

0xc3ce,	// (0x00032d63) level_4_signal_ParamLimits

0xc3db,	// (0x00032d70) level_5_signal_ParamLimits

0xc3e8,	// (0x00032d7d) level_6_signal_ParamLimits

0xc3f5,	// (0x00032d8a) level_7_signal_ParamLimits

0xc3a7,	// (0x00032d3c) level_1_battery_ParamLimits

0xc3b4,	// (0x00032d49) level_2_battery_ParamLimits

0xc3c1,	// (0x00032d56) level_3_battery_ParamLimits

0xc3ce,	// (0x00032d63) level_4_battery_ParamLimits

0xc3db,	// (0x00032d70) level_5_battery_ParamLimits

0xc3e8,	// (0x00032d7d) level_6_battery_ParamLimits

0xc3f5,	// (0x00032d8a) level_7_battery_ParamLimits

0xd5a3,	// (0x00033f38) bg_status_flat_pane_g1

0xd5ab,	// (0x00033f40) bg_status_flat_pane_g2

0xd5b3,	// (0x00033f48) bg_status_flat_pane_g3

0xd5bb,	// (0x00033f50) bg_status_flat_pane_g4

0xd5c3,	// (0x00033f58) bg_status_flat_pane_g5

0xd5cb,	// (0x00033f60) bg_status_flat_pane_g6

0xd5d3,	// (0x00033f68) bg_status_flat_pane_g7

0x8a2c,	// (0x0002f3c1) tabs_3_active_pane_t1_ParamLimits

0x8a2c,	// (0x0002f3c1) tabs_3_passive_pane_t1_ParamLimits

0x8a46,	// (0x0002f3db) tabs_4_active_pane_t1_ParamLimits

0x8a46,	// (0x0002f3db) tabs_4_1_passive_pane_t1_ParamLimits

0x8e0d,	// (0x0002f7a2) tabs_2_active_pane_t1_ParamLimits

0x8e0d,	// (0x0002f7a2) tabs_2_passive_pane_t1_ParamLimits

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp4_ParamLimits

0x8e1f,	// (0x0002f7b4) tabs_2_long_active_pane_t1_ParamLimits

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp4_ParamLimits

0x1e0a,	// (0x0002879f) list_single_midp_graphic_pane_t1_ParamLimits

0xb652,	// (0x00031fe7) bg_active_tab_pane_cp5_ParamLimits

0x8e32,	// (0x0002f7c7) tabs_3_long_active_pane_t1_ParamLimits

0xc031,	// (0x000329c6) bg_passive_tab_pane_cp5_ParamLimits

0x1e0a,	// (0x0002879f) list_single_midp_graphic_pane_t1

0x99eb,	// (0x00030380) bg_status_flat_pane_ParamLimits

0xcd2e,	// (0x000336c3) indicator_pane_cp2_ParamLimits

0xcd2e,	// (0x000336c3) indicator_pane_cp2

0x9b62,	// (0x000304f7) navi_pane_srt_ParamLimits

0x9b62,	// (0x000304f7) navi_pane_srt

0xcd56,	// (0x000336eb) popup_clock_digital_analogue_window_cp1

0xb696,	// (0x0003202b) indicator_pane_t1

0xc921,	// (0x000332b6) copy_highlight_pane

0xc921,	// (0x000332b6) cursor_graphics_pane

0xc921,	// (0x000332b6) graphic_within_text_pane

0xc921,	// (0x000332b6) link_highlight_pane

0xdcc6,	// (0x0003465b) popup_preview_text_window_t5_ParamLimits

0xdcc6,	// (0x0003465b) popup_preview_text_window_t5

0xc98a,	// (0x0003331f) cursor_digital_pane

0xc98a,	// (0x0003331f) cursor_primary_pane

0xc99b,	// (0x00033330) cursor_primary_small_pane

0xc9a3,	// (0x00033338) cursor_secondary_pane

0xc9ab,	// (0x00033340) cursor_title_pane

0xc98a,	// (0x0003331f) link_highlight_digital_pane

0xc992,	// (0x00033327) link_highlight_primary_pane

0xc99b,	// (0x00033330) link_highlight_primary_small_pane

0xc9a3,	// (0x00033338) link_highlight_secondary_pane

0xc9ab,	// (0x00033340) link_highlight_title_pane

0xc98a,	// (0x0003331f) copy_highlight_digital_pane

0xc98a,	// (0x0003331f) copy_highlight_primary_pane

0xc99b,	// (0x00033330) copy_highlight_primary_small_pane

0xc9a3,	// (0x00033338) copy_highlight_secondary_pane

0xc9ab,	// (0x00033340) copy_highlight_title_pane

0xc9a3,	// (0x00033338) graphic_text_digital_pane

0xd623,	// (0x00033fb8) graphic_text_primary_pane

0xd62c,	// (0x00033fc1) graphic_text_primary_small_pane

0xc99b,	// (0x00033330) graphic_text_secondary_pane

0xc98a,	// (0x0003331f) graphic_text_title_pane

0x90bd,	// (0x0002fa52) cursor_primary_pane_g1

0xd615,	// (0x00033faa) cursor_text_primary_t1

0x9dfa,	// (0x0003078f) cursor_primary_small_pane_g1

0xd607,	// (0x00033f9c) cursor_text_primary_small_t1

0x9df0,	// (0x00030785) cursor_primary_small_pane_g1_copy1

0xd5f9,	// (0x00033f8e) cursor_text_primary_small_t1_copy1

0xd5eb,	// (0x00033f80) cursor_text_title_t1

0x9de6,	// (0x0003077b) cursor_title_pane_g1

0x90bd,	// (0x0002fa52) cursor_digital_pane_g1

0xc9b3,	// (0x00033348) cursor_text_digital_t1

0xd58c,	// (0x00033f21) link_highlight_primary_pane_g1

0xd594,	// (0x00033f29) link_highlight_primary_pane_t1

0xc9c1,	// (0x00033356) link_highlight_primary_small_pane_g1

0xc9c9,	// (0x0003335e) link_highlight_primary_small_pane_t1

0xc9c1,	// (0x00033356) link_highlight_secondary_pane_g1

0xc9d8,	// (0x0003336d) link_highlight_secondary_pane_t1

0xd500,	// (0x00033e95) link_highlight_title_pane_g1

0xd508,	// (0x00033e9d) link_highlight_title_pane_t1

0xd4e9,	// (0x00033e7e) link_highlight_digital_pane_g1

0xd4f1,	// (0x00033e86) link_highlight_digital_pane_t1

0xd3dd,	// (0x00033d72) copy_highlight_primary_pane_g1

0xd3e5,	// (0x00033d7a) copy_highlight_primary_pane_t1

0xd3b7,	// (0x00033d4c) copy_highlight_primary_small_pane_g1

0xd3ce,	// (0x00033d63) copy_highlight_primary_small_pane_t1

0xc9e7,	// (0x0003337c) copy_highlight_secondary_pane_g1

0xc9ef,	// (0x00033384) copy_highlight_secondary_pane_t1

0xd3b7,	// (0x00033d4c) copy_highlight_title_pane_g1

0xd3bf,	// (0x00033d54) copy_highlight_title_pane_t1

0xd3dd,	// (0x00033d72) copy_highlight_digital_pane_g1

0xe22a,	// (0x00034bbf) copy_highlight_digital_pane_t1

0xe17e,	// (0x00034b13) graphic_text_primary_pane_g1

0xe20e,	// (0x00034ba3) graphic_text_primary_pane_t1

0xe21c,	// (0x00034bb1) graphic_text_primary_pane_t2

0x0001,

0x0076,	// (0x00026a0b) graphic_text_primary_pane_t

0xe1ea,	// (0x00034b7f) graphic_text_primary_small_pane_g1

0xe1f2,	// (0x00034b87) graphic_text_primary_small_pane_t1

0xe200,	// (0x00034b95) graphic_text_primary_small_pane_t2

0x0001,

0x0071,	// (0x00026a06) graphic_text_primary_small_pane_t

0xe1c6,	// (0x00034b5b) graphic_text_secondary_pane_g1

0xe1ce,	// (0x00034b63) graphic_text_secondary_pane_t1

0xe1dc,	// (0x00034b71) graphic_text_secondary_pane_t2

0x0001,

0x006c,	// (0x00026a01) graphic_text_secondary_pane_t

0xe1a2,	// (0x00034b37) graphic_text_title_pane_g1

0xe1aa,	// (0x00034b3f) graphic_text_title_pane_t1

0xe1b8,	// (0x00034b4d) graphic_text_title_pane_t2

0x0001,

0x0067,	// (0x000269fc) graphic_text_title_pane_t

0xe17e,	// (0x00034b13) graphic_text_digital_pane_g1

0xe186,	// (0x00034b1b) graphic_text_digital_pane_t1

0xe194,	// (0x00034b29) graphic_text_digital_pane_t2

0x0001,

0x0062,	// (0x000269f7) graphic_text_digital_pane_t

0xb652,	// (0x00031fe7) navi_icon_pane_srt_ParamLimits

0xb652,	// (0x00031fe7) navi_icon_pane_srt

0xb5f6,	// (0x00031f8b) navi_midp_pane_srt

0xb5f6,	// (0x00031f8b) navi_navi_pane_srt

0xb652,	// (0x00031fe7) navi_text_pane_srt_ParamLimits

0xb652,	// (0x00031fe7) navi_text_pane_srt

0xe149,	// (0x00034ade) navi_navi_icon_text_pane_srt

0xe151,	// (0x00034ae6) navi_navi_pane_srt_g1_ParamLimits

0xe151,	// (0x00034ae6) navi_navi_pane_srt_g1

0xe163,	// (0x00034af8) navi_navi_pane_srt_g2_ParamLimits

0xe163,	// (0x00034af8) navi_navi_pane_srt_g2

0x0001,

0x005d,	// (0x000269f2) navi_navi_pane_srt_g_ParamLimits

0x005d,	// (0x000269f2) navi_navi_pane_srt_g

0xe175,	// (0x00034b0a) navi_navi_tabs_pane_srt

0xe149,	// (0x00034ade) navi_navi_text_pane_srt

0xe149,	// (0x00034ade) navi_navi_volume_pane_srt

0xe13a,	// (0x00034acf) navi_navi_text_pane_srt_t1

0x26d4,	// (0x00029069) navi_navi_volume_pane_srt_g1

0x26dc,	// (0x00029071) volume_small_pane_srt_ParamLimits

0x26dc,	// (0x00029071) volume_small_pane_srt

0x13c7,	// (0x00027d5c) volume_small_pane_srt_g1_ParamLimits

0x13c7,	// (0x00027d5c) volume_small_pane_srt_g1

0x13d7,	// (0x00027d6c) volume_small_pane_srt_g2_ParamLimits

0x13d7,	// (0x00027d6c) volume_small_pane_srt_g2

0x13e8,	// (0x00027d7d) volume_small_pane_srt_g3_ParamLimits

0x13e8,	// (0x00027d7d) volume_small_pane_srt_g3

0x13f9,	// (0x00027d8e) volume_small_pane_srt_g4_ParamLimits

0x13f9,	// (0x00027d8e) volume_small_pane_srt_g4

0x140a,	// (0x00027d9f) volume_small_pane_srt_g5_ParamLimits

0x140a,	// (0x00027d9f) volume_small_pane_srt_g5

0x141b,	// (0x00027db0) volume_small_pane_srt_g6_ParamLimits

0x141b,	// (0x00027db0) volume_small_pane_srt_g6

0x142c,	// (0x00027dc1) volume_small_pane_srt_g7_ParamLimits

0x142c,	// (0x00027dc1) volume_small_pane_srt_g7

0x143d,	// (0x00027dd2) volume_small_pane_srt_g8_ParamLimits

0x143d,	// (0x00027dd2) volume_small_pane_srt_g8

0x144e,	// (0x00027de3) volume_small_pane_srt_g9_ParamLimits

0x144e,	// (0x00027de3) volume_small_pane_srt_g9

0x145f,	// (0x00027df4) volume_small_pane_srt_g10_ParamLimits

0x145f,	// (0x00027df4) volume_small_pane_srt_g10

0x0009,

0xf775,	// (0x0003610a) volume_small_pane_srt_g_ParamLimits

0xf775,	// (0x0003610a) volume_small_pane_srt_g

0xbb0b,	// (0x000324a0) query_popup_data_pane_cp2

0xe120,	// (0x00034ab5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe120,	// (0x00034ab5) navi_navi_icon_text_pane_srt_t1

0xd623,	// (0x00033fb8) navi_tabs_2_long_pane_srt

0xd623,	// (0x00033fb8) navi_tabs_2_pane_srt

0xd623,	// (0x00033fb8) navi_tabs_3_long_pane_srt

0xd623,	// (0x00033fb8) navi_tabs_3_pane_srt

0xd623,	// (0x00033fb8) navi_tabs_4_pane_srt

0x26b4,	// (0x00029049) tabs_2_active_pane_srt_ParamLimits

0x26b4,	// (0x00029049) tabs_2_active_pane_srt

0x26c4,	// (0x00029059) tabs_2_passive_pane_srt_ParamLimits

0x26c4,	// (0x00029059) tabs_2_passive_pane_srt

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp1_srt_ParamLimits

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp1_srt

0xe0fe,	// (0x00034a93) bg_passive_tab_pane_g1_cp1_srt

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp1_srt

0xe107,	// (0x00034a9c) bg_passive_tab_pane_g3_cp1_srt

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp1_srt_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp1_srt

0xe110,	// (0x00034aa5) tabs_2_active_pane_srt_g1

0xa213,	// (0x00030ba8) tabs_2_active_pane_srt_t1_ParamLimits

0xa213,	// (0x00030ba8) tabs_2_active_pane_srt_t1

0xe0fe,	// (0x00034a93) bg_active_tab_pane_g1_cp1_srt

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp1_srt

0xe107,	// (0x00034a9c) bg_active_tab_pane_g3_cp1_srt

0x266f,	// (0x00029004) tabs_3_active_pane_srt_ParamLimits

0x266f,	// (0x00029004) tabs_3_active_pane_srt

0x2680,	// (0x00029015) tabs_3_passive_pane_cp_srt_ParamLimits

0x2680,	// (0x00029015) tabs_3_passive_pane_cp_srt

0x2691,	// (0x00029026) tabs_3_passive_pane_srt_ParamLimits

0x2691,	// (0x00029026) tabs_3_passive_pane_srt

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp2_srt_ParamLimits

0xcf59,	// (0x000338ee) bg_passive_tab_pane_cp2_srt

0xc9fe,	// (0x00033393) bg_passive_tab_pane_g1_cp2_srt

0xc5ca,	// (0x00032f5f) bg_passive_tab_pane_g2_cp2_srt

0xca07,	// (0x0003339c) bg_passive_tab_pane_g3_cp2_srt

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp2_srt_ParamLimits

0xb644,	// (0x00031fd9) bg_active_tab_pane_cp2_srt

0xe0f6,	// (0x00034a8b) tabs_3_active_pane_srt_g1

0xa1fd,	// (0x00030b92) tabs_3_active_pane_srt_t1_ParamLimits

0xa1fd,	// (0x00030b92) tabs_3_active_pane_srt_t1

0xc9fe,	// (0x00033393) bg_active_tab_pane_g1_cp2_srt

0xc5ca,	// (0x00032f5f) bg_active_tab_pane_g2_cp2_srt

0xca07,	// (0x0003339c) bg_active_tab_pane_g3_cp2_srt

0x2615,	// (0x00028faa) tabs_4_active_pane_srt_ParamLimits

0x2615,	// (0x00028faa) tabs_4_active_pane_srt

0x2627,	// (0x00028fbc) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2627,	// (0x00028fbc) tabs_4_passive_pane_cp2_srt

0xcb2b,	// (0x000334c0) aid_size_cell_toolbar

0xd9c6,	// (0x0003435b) main_idle_act_pane_ParamLimits

0xcbf5,	// (0x0003358a) popup_large_graphic_colour_window_ParamLimits

0x98b6,	// (0x0003024b) popup_toolbar_window_ParamLimits

0x98b6,	// (0x0003024b) popup_toolbar_window

0x63c9,	// (0x0002cd5e) list_single_graphic_2heading_pane_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_graphic_2heading_pane

0xc1db,	// (0x00032b70) aid_size_cell_apps_grid_lsc_pane

0xc1ed,	// (0x00032b82) aid_size_cell_apps_grid_prt_pane

0xc031,	// (0x000329c6) bg_wml_button_pane_cp1_ParamLimits

0xc031,	// (0x000329c6) bg_wml_button_pane_cp1

0x9d96,	// (0x0003072b) form_midp_field_text_pane_t1_ParamLimits

0xcf59,	// (0x000338ee) input_focus_pane_cp050_ParamLimits

0xd0a1,	// (0x00033a36) list_midp_form_text_pane_ParamLimits

0xd07e,	// (0x00033a13) input_focus_pane_cp051_ParamLimits

0xd092,	// (0x00033a27) list_midp_choice_pane_ParamLimits

0x9d2b,	// (0x000306c0) list_single_2graphic_pane_cp3_ParamLimits

0x9d2b,	// (0x000306c0) list_single_2graphic_pane_cp3

0x9d41,	// (0x000306d6) list_single_midp_graphic_pane_ParamLimits

0x9d41,	// (0x000306d6) list_single_midp_graphic_pane

0x05a0,	// (0x00026f35) list_single_graphic_2heading_pane_g1_ParamLimits

0x05a0,	// (0x00026f35) list_single_graphic_2heading_pane_g1

0x05ac,	// (0x00026f41) list_single_graphic_2heading_pane_g4_ParamLimits

0x05ac,	// (0x00026f41) list_single_graphic_2heading_pane_g4

0x05b8,	// (0x00026f4d) list_single_graphic_2heading_pane_g5_ParamLimits

0x05b8,	// (0x00026f4d) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c8,	// (0x0003615d) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c8,	// (0x0003615d) list_single_graphic_2heading_pane_g

0x05c4,	// (0x00026f59) list_single_graphic_2heading_pane_t1_ParamLimits

0x05c4,	// (0x00026f59) list_single_graphic_2heading_pane_t1

0x05d8,	// (0x00026f6d) list_single_graphic_2heading_pane_t2_ParamLimits

0x05d8,	// (0x00026f6d) list_single_graphic_2heading_pane_t2

0x05f4,	// (0x00026f89) list_single_graphic_2heading_pane_t3_ParamLimits

0x05f4,	// (0x00026f89) list_single_graphic_2heading_pane_t3

0x0002,

0xf7cf,	// (0x00036164) list_single_graphic_2heading_pane_t_ParamLimits

0xf7cf,	// (0x00036164) list_single_graphic_2heading_pane_t

0xcd99,	// (0x0003372e) bg_popup_sub_pane_cp2

0xcdd1,	// (0x00033766) grid_toobar_pane

0x1d7b,	// (0x00028710) cell_toolbar_pane_ParamLimits

0x1d7b,	// (0x00028710) cell_toolbar_pane

0xce0d,	// (0x000337a2) cell_toolbar_pane_g1_ParamLimits

0xce0d,	// (0x000337a2) cell_toolbar_pane_g1

0xce21,	// (0x000337b6) cell_toolbar_pane_g2_ParamLimits

0xce21,	// (0x000337b6) cell_toolbar_pane_g2

0x0001,

0xf7dd,	// (0x00036172) cell_toolbar_pane_g_ParamLimits

0xf7dd,	// (0x00036172) cell_toolbar_pane_g

0xce43,	// (0x000337d8) grid_highlight_pane_cp2_ParamLimits

0xce43,	// (0x000337d8) grid_highlight_pane_cp2

0xce5d,	// (0x000337f2) toolbar_button_pane

0xce69,	// (0x000337fe) toolbar_button_pane_g1

0xce71,	// (0x00033806) toolbar_button_pane_g2

0xce79,	// (0x0003380e) toolbar_button_pane_g3

0xce81,	// (0x00033816) toolbar_button_pane_g4

0xce89,	// (0x0003381e) toolbar_button_pane_g5

0xce91,	// (0x00033826) toolbar_button_pane_g6

0xce99,	// (0x0003382e) toolbar_button_pane_g7

0xcea1,	// (0x00033836) toolbar_button_pane_g8

0xcea9,	// (0x0003383e) toolbar_button_pane_g9

0x0009,

0xf7e2,	// (0x00036177) toolbar_button_pane_g

0x1db3,	// (0x00028748) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1db3,	// (0x00028748) list_single_2graphic_pane_g1_cp3

0x82eb,	// (0x0002ec80) list_single_2graphic_pane_g2_cp3_ParamLimits

0x82eb,	// (0x0002ec80) list_single_2graphic_pane_g2_cp3

0x1dd0,	// (0x00028765) list_single_2graphic_pane_g3_cp3

0x1dd8,	// (0x0002876d) list_single_2graphic_pane_g4_cp3_ParamLimits

0x1dd8,	// (0x0002876d) list_single_2graphic_pane_g4_cp3

0x1de4,	// (0x00028779) list_single_2graphic_pane_t1_cp3_ParamLimits

0x1de4,	// (0x00028779) list_single_2graphic_pane_t1_cp3

0x1dfe,	// (0x00028793) list_single_midp_graphic_pane_g2_ParamLimits

0x1dfe,	// (0x00028793) list_single_midp_graphic_pane_g2

0xcb33,	// (0x000334c8) aid_zoom_text_primary

0x6299,	// (0x0002cc2e) aid_zoom_text_secondary

0xcabb,	// (0x00033450) status_small_pane_g7_ParamLimits

0xcabb,	// (0x00033450) status_small_pane_g7

0xcade,	// (0x00033473) status_small_pane_t1_ParamLimits

0x8974,	// (0x0002f309) title_pane_g2

0x0003,

0xf56a,	// (0x00035eff) title_pane_g

0x8bff,	// (0x0002f594) aid_size_cell_colour_1_pane_ParamLimits

0x8bff,	// (0x0002f594) aid_size_cell_colour_1_pane

0x8c13,	// (0x0002f5a8) aid_size_cell_colour_2_pane_ParamLimits

0x8c13,	// (0x0002f5a8) aid_size_cell_colour_2_pane

0x8c27,	// (0x0002f5bc) aid_size_cell_colour_3_pane_ParamLimits

0x8c27,	// (0x0002f5bc) aid_size_cell_colour_3_pane

0x8c3b,	// (0x0002f5d0) aid_size_cell_colour_4_pane_ParamLimits

0x8c3b,	// (0x0002f5d0) aid_size_cell_colour_4_pane

0x0dfe,	// (0x00027793) title_pane_stacon_g1_ParamLimits

0x0dfe,	// (0x00027793) title_pane_stacon_g1

0xd43c,	// (0x00033dd1) popup_note_wait_window_g3_ParamLimits

0xd43c,	// (0x00033dd1) popup_note_wait_window_g3

0xd4b2,	// (0x00033e47) popup_note_wait_window_t5_ParamLimits

0xd4b2,	// (0x00033e47) popup_note_wait_window_t5

0xb5f6,	// (0x00031f8b) main_feb_china_hwr_fs_writing_pane

0x915c,	// (0x0002faf1) popup_feb_china_hwr_fs_window_ParamLimits

0x915c,	// (0x0002faf1) popup_feb_china_hwr_fs_window

0x82fc,	// (0x0002ec91) aid_size_cell_hwr_fs_ParamLimits

0x82fc,	// (0x0002ec91) aid_size_cell_hwr_fs

0xcf59,	// (0x000338ee) bg_popup_sub_pane_cp3_ParamLimits

0xcf59,	// (0x000338ee) bg_popup_sub_pane_cp3

0x8311,	// (0x0002eca6) grid_hwr_fs_pane_ParamLimits

0x8311,	// (0x0002eca6) grid_hwr_fs_pane

0x1e4d,	// (0x000287e2) linegrid_hwr_fs_pane_ParamLimits

0x1e4d,	// (0x000287e2) linegrid_hwr_fs_pane

0x8329,	// (0x0002ecbe) cell_hwr_fs_pane_ParamLimits

0x8329,	// (0x0002ecbe) cell_hwr_fs_pane

0xcf65,	// (0x000338fa) linegrid_hwr_fs_pane_g1_ParamLimits

0xcf65,	// (0x000338fa) linegrid_hwr_fs_pane_g1

0x9cff,	// (0x00030694) linegrid_hwr_fs_pane_g2_ParamLimits

0x9cff,	// (0x00030694) linegrid_hwr_fs_pane_g2

0xcf71,	// (0x00033906) linegrid_hwr_fs_pane_g3_ParamLimits

0xcf71,	// (0x00033906) linegrid_hwr_fs_pane_g3

0x1e91,	// (0x00028826) linegrid_hwr_fs_pane_g4_ParamLimits

0x1e91,	// (0x00028826) linegrid_hwr_fs_pane_g4

0x1eab,	// (0x00028840) linegrid_hwr_fs_pane_g5_ParamLimits

0x1eab,	// (0x00028840) linegrid_hwr_fs_pane_g5

0x0004,

0xf808,	// (0x0003619d) linegrid_hwr_fs_pane_g_ParamLimits

0xf808,	// (0x0003619d) linegrid_hwr_fs_pane_g

0xcf7d,	// (0x00033912) cell_hwr_fs_pane_g1_ParamLimits

0xcf7d,	// (0x00033912) cell_hwr_fs_pane_g1

0xcd67,	// (0x000336fc) cell_hwr_fs_pane_g2_ParamLimits

0xcd67,	// (0x000336fc) cell_hwr_fs_pane_g2

0x9d11,	// (0x000306a6) cell_hwr_fs_pane_g3_ParamLimits

0x9d11,	// (0x000306a6) cell_hwr_fs_pane_g3

0x9d1e,	// (0x000306b3) cell_hwr_fs_pane_g4_ParamLimits

0x9d1e,	// (0x000306b3) cell_hwr_fs_pane_g4

0x0003,

0xf813,	// (0x000361a8) cell_hwr_fs_pane_g_ParamLimits

0xf813,	// (0x000361a8) cell_hwr_fs_pane_g

0x834f,	// (0x0002ece4) cell_hwr_fs_pane_t1

0xb5f6,	// (0x00031f8b) grid_highlight_pane_cp6

0xb5f6,	// (0x00031f8b) main_idle_act2_pane

0xbfe0,	// (0x00032975) aid_inside_area_popup_secondary

0x9e1a,	// (0x000307af) aid_inside_area_window_primary_ParamLimits

0x9e1a,	// (0x000307af) aid_inside_area_window_primary

0xe239,	// (0x00034bce) ai2_news_ticker_pane

0xe241,	// (0x00034bd6) aid_size_cell_ai1_link_ParamLimits

0xe241,	// (0x00034bd6) aid_size_cell_ai1_link

0xe25b,	// (0x00034bf0) popup_ai2_data_window_ParamLimits

0xe25b,	// (0x00034bf0) popup_ai2_data_window

0xe26f,	// (0x00034c04) popup_ai2_link_window_ParamLimits

0xe26f,	// (0x00034c04) popup_ai2_link_window

0xcf59,	// (0x000338ee) bg_popup_sub_pane_cp4_ParamLimits

0xcf59,	// (0x000338ee) bg_popup_sub_pane_cp4

0xe283,	// (0x00034c18) grid_ai2_link_pane_ParamLimits

0xe283,	// (0x00034c18) grid_ai2_link_pane

0xe29a,	// (0x00034c2f) popup_ai2_link_window_g1_ParamLimits

0xe29a,	// (0x00034c2f) popup_ai2_link_window_g1

0xe2a6,	// (0x00034c3b) popup_ai2_link_window_g2_ParamLimits

0xe2a6,	// (0x00034c3b) popup_ai2_link_window_g2

0x0001,

0x007b,	// (0x00026a10) popup_ai2_link_window_g_ParamLimits

0x007b,	// (0x00026a10) popup_ai2_link_window_g

0xe2b5,	// (0x00034c4a) ai2_mp_button_pane

0xe2bd,	// (0x00034c52) ai2_mp_volume_pane

0xd07e,	// (0x00033a13) bg_popup_sub_pane_cp5_ParamLimits

0xd07e,	// (0x00033a13) bg_popup_sub_pane_cp5

0xe2c5,	// (0x00034c5a) heading_ai2_gene_pane_ParamLimits

0xe2c5,	// (0x00034c5a) heading_ai2_gene_pane

0xe2d1,	// (0x00034c66) list_ai2_gene_pane_ParamLimits

0xe2d1,	// (0x00034c66) list_ai2_gene_pane

0xe319,	// (0x00034cae) cell_ai2_link_pane_ParamLimits

0xe319,	// (0x00034cae) cell_ai2_link_pane

0xe32f,	// (0x00034cc4) cell_ai2_link_pane_g1

0xb5f6,	// (0x00031f8b) grid_highlight_pane_cp7

0x26f1,	// (0x00029086) ai2_mp_volume_pane_g1

0xe400,	// (0x00034d95) ai2_mp_volume_pane_g2

0xe375,	// (0x00034d0a) list_ai2_gene_pane_t1

0xe408,	// (0x00034d9d) ai2_mp_volume_pane_g3

0x0002,

0xf9a2,	// (0x00036337) ai2_mp_volume_pane_g

0x26f9,	// (0x0002908e) volume_small_pane_cp3

0xe410,	// (0x00034da5) aid_size_cell_ai2_button

0xe418,	// (0x00034dad) grid_ai2_button_pane

0xe421,	// (0x00034db6) cell_ai2_button_pane_ParamLimits

0xe421,	// (0x00034db6) cell_ai2_button_pane

0xb5ec,	// (0x00031f81) cell_ai2_button_pane_g1

0xb5f6,	// (0x00031f8b) grid_highlight_pane_cp8

0xe3c0,	// (0x00034d55) ai2_gene_pane_t1_ParamLimits

0xe3c0,	// (0x00034d55) ai2_gene_pane_t1

0x90ee,	// (0x0002fa83) aid_height_parent_landscape

0x9fb9,	// (0x0003094e) aid_height_set_list

0xd9c6,	// (0x0003435b) aid_size_parent

0xe0a0,	// (0x00034a35) aid_size_cell_graphic_pane_ParamLimits

0xe2e1,	// (0x00034c76) popup_ai2_data_window_g1_ParamLimits

0xe2e1,	// (0x00034c76) popup_ai2_data_window_g1

0xe2ed,	// (0x00034c82) ai2_news_ticker_pane_g1

0xe2f5,	// (0x00034c8a) ai2_news_ticker_pane_g2

0x0001,

0x0080,	// (0x00026a15) ai2_news_ticker_pane_g

0xe2fd,	// (0x00034c92) ai2_news_ticker_pane_t1

0xe30b,	// (0x00034ca0) ai2_news_ticker_pane_t2

0x0001,

0x0085,	// (0x00026a1a) ai2_news_ticker_pane_t

0xe338,	// (0x00034ccd) heading_ai2_gene_pane_g1

0xe340,	// (0x00034cd5) heading_ai2_gene_pane_t1_ParamLimits

0xe340,	// (0x00034cd5) heading_ai2_gene_pane_t1

0xe355,	// (0x00034cea) list_highlight_pane_cp6

0xe35d,	// (0x00034cf2) ai2_gene_pane_ParamLimits

0xe35d,	// (0x00034cf2) ai2_gene_pane

0xe383,	// (0x00034d18) list_ai2_gene_pane_t2

0x0001,

0x008a,	// (0x00026a1f) list_ai2_gene_pane_t

0xe391,	// (0x00034d26) list_highlight_pane_cp8_ParamLimits

0xe391,	// (0x00034d26) list_highlight_pane_cp8

0xe3a2,	// (0x00034d37) ai2_gene_pane_g1_ParamLimits

0xe3a2,	// (0x00034d37) ai2_gene_pane_g1

0xe3b4,	// (0x00034d49) ai2_gene_pane_g2_ParamLimits

0xe3b4,	// (0x00034d49) ai2_gene_pane_g2

0x0001,

0x008f,	// (0x00026a24) ai2_gene_pane_g_ParamLimits

0x008f,	// (0x00026a24) ai2_gene_pane_g

0xbe70,	// (0x00032805) scroll_pane_cp12

0x829c,	// (0x0002ec31) control_pane_t3_ParamLimits

0x829c,	// (0x0002ec31) control_pane_t3

0xcacf,	// (0x00033464) status_small_pane_g8_ParamLimits

0xcacf,	// (0x00033464) status_small_pane_g8

0x9371,	// (0x0002fd06) popup_find_window_ParamLimits

0x95ec,	// (0x0002ff81) popup_note_image_window_ParamLimits

0x4298,	// (0x0002ac2d) list_double2_graphic_pane_vc_g1_ParamLimits

0x4298,	// (0x0002ac2d) list_double2_graphic_pane_vc_g1

0x421e,	// (0x0002abb3) list_double2_graphic_pane_vc_g2_ParamLimits

0x421e,	// (0x0002abb3) list_double2_graphic_pane_vc_g2

0x422a,	// (0x0002abbf) list_double2_graphic_pane_vc_g3_ParamLimits

0x422a,	// (0x0002abbf) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003616b) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003616b) list_double2_graphic_pane_vc_g

0x62c5,	// (0x0002cc5a) list_double2_graphic_pane_vc_t1_ParamLimits

0x62c5,	// (0x0002cc5a) list_double2_graphic_pane_vc_t1

0x421e,	// (0x0002abb3) list_single_heading_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_heading_pane_vc_g1

0x422a,	// (0x0002abbf) list_single_heading_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_heading_pane_vc_g

0x62db,	// (0x0002cc70) list_single_heading_pane_vc_t1_ParamLimits

0x62db,	// (0x0002cc70) list_single_heading_pane_vc_t1

0x62f1,	// (0x0002cc86) list_single_heading_pane_vc_t2_ParamLimits

0x62f1,	// (0x0002cc86) list_single_heading_pane_vc_t2

0x0001,

0xf7f7,	// (0x0003618c) list_single_heading_pane_vc_t_ParamLimits

0xf7f7,	// (0x0003618c) list_single_heading_pane_vc_t

0xceb1,	// (0x00033846) list_setting_number_pane_vc_g1_ParamLimits

0xceb1,	// (0x00033846) list_setting_number_pane_vc_g1

0xcebd,	// (0x00033852) list_setting_number_pane_vc_g2_ParamLimits

0xcebd,	// (0x00033852) list_setting_number_pane_vc_g2

0x0001,

0xf7fc,	// (0x00036191) list_setting_number_pane_vc_g_ParamLimits

0xf7fc,	// (0x00036191) list_setting_number_pane_vc_g

0xcec9,	// (0x0003385e) list_setting_number_pane_vc_t1_ParamLimits

0xcec9,	// (0x0003385e) list_setting_number_pane_vc_t1

0xcedd,	// (0x00033872) list_setting_number_pane_vc_t2_ParamLimits

0xcedd,	// (0x00033872) list_setting_number_pane_vc_t2

0xcef9,	// (0x0003388e) list_setting_number_pane_vc_t3_ParamLimits

0xcef9,	// (0x0003388e) list_setting_number_pane_vc_t3

0x0002,

0xf801,	// (0x00036196) list_setting_number_pane_vc_t_ParamLimits

0xf801,	// (0x00036196) list_setting_number_pane_vc_t

0xcf21,	// (0x000338b6) set_value_pane_vc_ParamLimits

0xcf21,	// (0x000338b6) set_value_pane_vc

0x63c9,	// (0x0002cd5e) list_double2_graphic_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double2_graphic_pane_vc

0xe01d,	// (0x000349b2) list_double2_large_graphic_pane_vc_ParamLimits

0xe01d,	// (0x000349b2) list_double2_large_graphic_pane_vc

0x63c9,	// (0x0002cd5e) list_double2_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double2_pane_vc

0x63c9,	// (0x0002cd5e) list_double_graphic_heading_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_graphic_heading_pane_vc

0x63c9,	// (0x0002cd5e) list_double_graphic_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_graphic_pane_vc

0x63c9,	// (0x0002cd5e) list_double_heading_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_heading_pane_vc

0xe01d,	// (0x000349b2) list_double_large_graphic_pane_vc_ParamLimits

0xe01d,	// (0x000349b2) list_double_large_graphic_pane_vc

0x63c9,	// (0x0002cd5e) list_double_number_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_number_pane_vc

0x63c9,	// (0x0002cd5e) list_double_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_pane_vc

0x63c9,	// (0x0002cd5e) list_double_time_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_double_time_pane_vc

0x63c9,	// (0x0002cd5e) list_setting_number_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_setting_number_pane_vc

0x63c9,	// (0x0002cd5e) list_setting_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_setting_pane_vc

0x63c9,	// (0x0002cd5e) list_single_graphic_heading_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_graphic_heading_pane_vc

0x63c9,	// (0x0002cd5e) list_single_heading_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_heading_pane_vc

0x63c9,	// (0x0002cd5e) list_single_number_heading_pane_vc_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_number_heading_pane_vc

0x4298,	// (0x0002ac2d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4298,	// (0x0002ac2d) list_double_graphic_heading_pane_vc_g1

0x421e,	// (0x0002abb3) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x421e,	// (0x0002abb3) list_double_graphic_heading_pane_vc_g2

0x422a,	// (0x0002abbf) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x422a,	// (0x0002abbf) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7d6,	// (0x0003616b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003616b) list_double_graphic_heading_pane_vc_g

0x649a,	// (0x0002ce2f) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x649a,	// (0x0002ce2f) list_double_graphic_heading_pane_vc_t1

0x62db,	// (0x0002cc70) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x62db,	// (0x0002cc70) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9a9,	// (0x0003633e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9a9,	// (0x0003633e) list_double_graphic_heading_pane_vc_t

0xceb1,	// (0x00033846) list_setting_pane_vc_g1_ParamLimits

0xceb1,	// (0x00033846) list_setting_pane_vc_g1

0xcebd,	// (0x00033852) list_setting_pane_vc_g2_ParamLimits

0xcebd,	// (0x00033852) list_setting_pane_vc_g2

0x0001,

0xf7fc,	// (0x00036191) list_setting_pane_vc_g_ParamLimits

0xf7fc,	// (0x00036191) list_setting_pane_vc_g

0xe617,	// (0x00034fac) list_setting_pane_vc_t1_ParamLimits

0xe617,	// (0x00034fac) list_setting_pane_vc_t1

0xe62b,	// (0x00034fc0) list_setting_pane_vc_t2_ParamLimits

0xe62b,	// (0x00034fc0) list_setting_pane_vc_t2

0x0001,

0x00de,	// (0x00026a73) list_setting_pane_vc_t_ParamLimits

0x00de,	// (0x00026a73) list_setting_pane_vc_t

0xcf21,	// (0x000338b6) set_value_pane_cp_vc_ParamLimits

0xcf21,	// (0x000338b6) set_value_pane_cp_vc

0x421e,	// (0x0002abb3) list_single_number_heading_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_single_number_heading_pane_vc_g1

0x422a,	// (0x0002abbf) list_single_number_heading_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_single_number_heading_pane_vc_g

0x62db,	// (0x0002cc70) list_single_number_heading_pane_vc_t1_ParamLimits

0x62db,	// (0x0002cc70) list_single_number_heading_pane_vc_t1

0x64ae,	// (0x0002ce43) list_single_number_heading_pane_vc_t2_ParamLimits

0x64ae,	// (0x0002ce43) list_single_number_heading_pane_vc_t2

0x4286,	// (0x0002ac1b) list_single_number_heading_pane_vc_t3_ParamLimits

0x4286,	// (0x0002ac1b) list_single_number_heading_pane_vc_t3

0x0002,

0xf9c3,	// (0x00036358) list_single_number_heading_pane_vc_t_ParamLimits

0xf9c3,	// (0x00036358) list_single_number_heading_pane_vc_t

0x4298,	// (0x0002ac2d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4298,	// (0x0002ac2d) list_single_graphic_heading_pane_vc_g1

0x421e,	// (0x0002abb3) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x421e,	// (0x0002abb3) list_single_graphic_heading_pane_vc_g4

0x422a,	// (0x0002abbf) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x422a,	// (0x0002abbf) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7d6,	// (0x0003616b) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7d6,	// (0x0003616b) list_single_graphic_heading_pane_vc_g

0x62db,	// (0x0002cc70) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x62db,	// (0x0002cc70) list_single_graphic_heading_pane_vc_t1

0x64c2,	// (0x0002ce57) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x64c2,	// (0x0002ce57) list_single_graphic_heading_pane_vc_t2

0x0001,

0xf9ca,	// (0x0003635f) list_single_graphic_heading_pane_vc_t_ParamLimits

0xf9ca,	// (0x0003635f) list_single_graphic_heading_pane_vc_t

0x421e,	// (0x0002abb3) list_double2_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_double2_pane_vc_g1

0x422a,	// (0x0002abbf) list_double2_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_double2_pane_vc_g

0x6391,	// (0x0002cd26) list_double2_pane_vc_t1_ParamLimits

0x6391,	// (0x0002cd26) list_double2_pane_vc_t1

0x64d6,	// (0x0002ce6b) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x64d6,	// (0x0002ce6b) list_double2_large_graphic_pane_vc_g1

0x64e2,	// (0x0002ce77) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x64e2,	// (0x0002ce77) list_double2_large_graphic_pane_vc_g2

0x64ee,	// (0x0002ce83) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x64ee,	// (0x0002ce83) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x00035f96) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x00035f96) list_double2_large_graphic_pane_vc_g

0x64fa,	// (0x0002ce8f) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x64fa,	// (0x0002ce8f) list_double2_large_graphic_pane_vc_t1

0x6510,	// (0x0002cea5) list_double_time_pane_vc_g1_ParamLimits

0x6510,	// (0x0002cea5) list_double_time_pane_vc_g1

0x651c,	// (0x0002ceb1) list_double_time_pane_vc_g2_ParamLimits

0x651c,	// (0x0002ceb1) list_double_time_pane_vc_g2

0x0001,

0xf9cf,	// (0x00036364) list_double_time_pane_vc_g_ParamLimits

0xf9cf,	// (0x00036364) list_double_time_pane_vc_g

0x6528,	// (0x0002cebd) list_double_time_pane_vc_t1_ParamLimits

0x6528,	// (0x0002cebd) list_double_time_pane_vc_t1

0x6541,	// (0x0002ced6) list_double_time_pane_vc_t2_ParamLimits

0x6541,	// (0x0002ced6) list_double_time_pane_vc_t2

0x6581,	// (0x0002cf16) list_double_time_pane_vc_t3_ParamLimits

0x6581,	// (0x0002cf16) list_double_time_pane_vc_t3

0x6599,	// (0x0002cf2e) list_double_time_pane_vc_t4_ParamLimits

0x6599,	// (0x0002cf2e) list_double_time_pane_vc_t4

0x0003,

0xf9d4,	// (0x00036369) list_double_time_pane_vc_t_ParamLimits

0xf9d4,	// (0x00036369) list_double_time_pane_vc_t

0x421e,	// (0x0002abb3) list_double_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_double_pane_vc_g1

0x422a,	// (0x0002abbf) list_double_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_double_pane_vc_g

0x65ad,	// (0x0002cf42) list_double_pane_vc_t1_ParamLimits

0x65ad,	// (0x0002cf42) list_double_pane_vc_t1

0x65bf,	// (0x0002cf54) list_double_pane_vc_t2_ParamLimits

0x65bf,	// (0x0002cf54) list_double_pane_vc_t2

0x0001,

0xf9dd,	// (0x00036372) list_double_pane_vc_t_ParamLimits

0xf9dd,	// (0x00036372) list_double_pane_vc_t

0x421e,	// (0x0002abb3) list_double_number_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_double_number_pane_vc_g1

0x422a,	// (0x0002abbf) list_double_number_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_double_number_pane_vc_g

0x65d7,	// (0x0002cf6c) list_double_number_pane_vc_t1_ParamLimits

0x65d7,	// (0x0002cf6c) list_double_number_pane_vc_t1

0x65eb,	// (0x0002cf80) list_double_number_pane_vc_t2_ParamLimits

0x65eb,	// (0x0002cf80) list_double_number_pane_vc_t2

0x65bf,	// (0x0002cf54) list_double_number_pane_vc_t3_ParamLimits

0x65bf,	// (0x0002cf54) list_double_number_pane_vc_t3

0x0002,

0xf9e2,	// (0x00036377) list_double_number_pane_vc_t_ParamLimits

0xf9e2,	// (0x00036377) list_double_number_pane_vc_t

0x65fd,	// (0x0002cf92) list_double_large_graphic_pane_vc_g1_ParamLimits

0x65fd,	// (0x0002cf92) list_double_large_graphic_pane_vc_g1

0x6609,	// (0x0002cf9e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x6609,	// (0x0002cf9e) list_double_large_graphic_pane_vc_g2

0x64ee,	// (0x0002ce83) list_double_large_graphic_pane_vc_g3_ParamLimits

0x64ee,	// (0x0002ce83) list_double_large_graphic_pane_vc_g3

0x6618,	// (0x0002cfad) list_double_large_graphic_pane_vc_g4_ParamLimits

0x6618,	// (0x0002cfad) list_double_large_graphic_pane_vc_g4

0x0003,

0xf9e9,	// (0x0003637e) list_double_large_graphic_pane_vc_g_ParamLimits

0xf9e9,	// (0x0003637e) list_double_large_graphic_pane_vc_g

0x6624,	// (0x0002cfb9) list_double_large_graphic_pane_vc_t1_ParamLimits

0x6624,	// (0x0002cfb9) list_double_large_graphic_pane_vc_t1

0x6636,	// (0x0002cfcb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x6636,	// (0x0002cfcb) list_double_large_graphic_pane_vc_t2

0x0001,

0xf9f2,	// (0x00036387) list_double_large_graphic_pane_vc_t_ParamLimits

0xf9f2,	// (0x00036387) list_double_large_graphic_pane_vc_t

0x421e,	// (0x0002abb3) list_double_heading_pane_vc_g1_ParamLimits

0x421e,	// (0x0002abb3) list_double_heading_pane_vc_g1

0x422a,	// (0x0002abbf) list_double_heading_pane_vc_g2_ParamLimits

0x422a,	// (0x0002abbf) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x00035f79) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x00035f79) list_double_heading_pane_vc_g

0x664f,	// (0x0002cfe4) list_double_heading_pane_vc_t1_ParamLimits

0x664f,	// (0x0002cfe4) list_double_heading_pane_vc_t1

0x62db,	// (0x0002cc70) list_double_heading_pane_vc_t2_ParamLimits

0x62db,	// (0x0002cc70) list_double_heading_pane_vc_t2

0x0001,

0xf9f7,	// (0x0003638c) list_double_heading_pane_vc_t_ParamLimits

0xf9f7,	// (0x0003638c) list_double_heading_pane_vc_t

0x6663,	// (0x0002cff8) list_double_graphic_pane_vc_g1_ParamLimits

0x6663,	// (0x0002cff8) list_double_graphic_pane_vc_g1

0x6673,	// (0x0002d008) list_double_graphic_pane_vc_g2_ParamLimits

0x6673,	// (0x0002d008) list_double_graphic_pane_vc_g2

0x6682,	// (0x0002d017) list_double_graphic_pane_vc_g3_ParamLimits

0x6682,	// (0x0002d017) list_double_graphic_pane_vc_g3

0x0002,

0xf9fc,	// (0x00036391) list_double_graphic_pane_vc_g_ParamLimits

0xf9fc,	// (0x00036391) list_double_graphic_pane_vc_g

0x668e,	// (0x0002d023) list_double_graphic_pane_vc_t1_ParamLimits

0x668e,	// (0x0002d023) list_double_graphic_pane_vc_t1

0x65bf,	// (0x0002cf54) list_double_graphic_pane_vc_t2_ParamLimits

0x65bf,	// (0x0002cf54) list_double_graphic_pane_vc_t2

0x0001,

0xfa03,	// (0x00036398) list_double_graphic_pane_vc_t_ParamLimits

0xfa03,	// (0x00036398) list_double_graphic_pane_vc_t

0x0640,	// (0x00026fd5) aid_size_cell_fastswap

0x7c09,	// (0x0002e59e) aid_size_cell_touch_ParamLimits

0x7c09,	// (0x0002e59e) aid_size_cell_touch

0x08ad,	// (0x00027242) popup_fast_swap_wide_window_ParamLimits

0x08ad,	// (0x00027242) popup_fast_swap_wide_window

0x7d54,	// (0x0002e6e9) touch_pane_ParamLimits

0x7d54,	// (0x0002e6e9) touch_pane

0xbec6,	// (0x0003285b) button_value_adjust_pane_cp2

0x4668,	// (0x0002affd) button_value_adjust_pane_cp4

0x4688,	// (0x0002b01d) form_field_data_pane_cp2

0x814b,	// (0x0002eae0) form_field_data_wide_pane_cp2

0xc229,	// (0x00032bbe) bg_scroll_pane_ParamLimits

0x0fe6,	// (0x0002797b) scroll_handle_pane_ParamLimits

0x0ffa,	// (0x0002798f) scroll_sc2_down_pane_ParamLimits

0x0ffa,	// (0x0002798f) scroll_sc2_down_pane

0xc25a,	// (0x00032bef) scroll_sc2_up_pane_ParamLimits

0xc25a,	// (0x00032bef) scroll_sc2_up_pane

0xa34a,	// (0x00030cdf) grid_wheel_folder_pane_g1_ParamLimits

0xa34a,	// (0x00030cdf) grid_wheel_folder_pane_g1

0x1270,	// (0x00027c05) clock_nsta_pane_cp2_ParamLimits

0x1270,	// (0x00027c05) clock_nsta_pane_cp2

0x8fff,	// (0x0002f994) listscroll_midp_pane_ParamLimits

0x9010,	// (0x0002f9a5) midp_canvas_pane

0xcb23,	// (0x000334b8) nsta_clock_indic_pane

0xcb5b,	// (0x000334f0) listscroll_form_pane_vc

0xcb63,	// (0x000334f8) listscroll_set_pane_vc_ParamLimits

0xcb63,	// (0x000334f8) listscroll_set_pane_vc

0x9a13,	// (0x000303a8) clock_nsta_pane

0x9a3d,	// (0x000303d2) indicator_nsta_pane

0xcd99,	// (0x0003372e) bg_popup_sub_pane_cp2_ParamLimits

0xcdad,	// (0x00033742) find_pane_cp2_ParamLimits

0xcdad,	// (0x00033742) find_pane_cp2

0xcdd1,	// (0x00033766) grid_toobar_pane_ParamLimits

0xcf2d,	// (0x000338c2) list_form_gen_pane_vc_ParamLimits

0xcf2d,	// (0x000338c2) list_form_gen_pane_vc

0xcf43,	// (0x000338d8) scroll_pane_cp8_vc_ParamLimits

0xcf43,	// (0x000338d8) scroll_pane_cp8_vc

0xcf93,	// (0x00033928) data_form_wide_pane_vc_ParamLimits

0xcf93,	// (0x00033928) data_form_wide_pane_vc

0xcf9f,	// (0x00033934) form_field_data_wide_pane_vc_g1

0xcfa7,	// (0x0003393c) form_field_data_wide_pane_vc_t1_ParamLimits

0xcfa7,	// (0x0003393c) form_field_data_wide_pane_vc_t1

0xbeda,	// (0x0003286f) input_focus_pane_cp6_vc_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_cp6_vc

0x9dba,	// (0x0003074f) list_midp_pane_ParamLimits

0xd9d8,	// (0x0003436d) scroll_pane_cp16_ParamLimits

0xd9d8,	// (0x0003436d) scroll_pane_cp16

0xd216,	// (0x00033bab) button_value_adjust_pane_ParamLimits

0xd216,	// (0x00033bab) button_value_adjust_pane

0x9fca,	// (0x0003095f) button_value_adjust_pane_cp6_ParamLimits

0x9fca,	// (0x0003095f) button_value_adjust_pane_cp6

0xa0e0,	// (0x00030a75) settings_code_pane_cp_ParamLimits

0xa0e0,	// (0x00030a75) settings_code_pane_cp

0xb5ec,	// (0x00031f81) cell_touch_pane_g1

0xb5ec,	// (0x00031f81) cell_touch_pane_g2

0x0001,

0xf71f,	// (0x000360b4) cell_touch_pane_g

0xa229,	// (0x00030bbe) cell_touch_pane_cp_ParamLimits

0xa229,	// (0x00030bbe) cell_touch_pane_cp

0xa245,	// (0x00030bda) cell_touch_pane_ParamLimits

0xa245,	// (0x00030bda) cell_touch_pane

0xb5ec,	// (0x00031f81) scroll_sc2_down_pane_g1

0xb5ec,	// (0x00031f81) scroll_sc2_up_pane_g1

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp4_vc

0xe433,	// (0x00034dc8) list_set_graphic_pane_vc_g1_ParamLimits

0xe433,	// (0x00034dc8) list_set_graphic_pane_vc_g1

0xe43f,	// (0x00034dd4) list_set_graphic_pane_vc_g2_ParamLimits

0xe43f,	// (0x00034dd4) list_set_graphic_pane_vc_g2

0x0001,

0x00a0,	// (0x00026a35) list_set_graphic_pane_vc_g_ParamLimits

0x00a0,	// (0x00026a35) list_set_graphic_pane_vc_g

0xe44b,	// (0x00034de0) text_primary_small_cp13_vc_ParamLimits

0xe44b,	// (0x00034de0) text_primary_small_cp13_vc

0xe463,	// (0x00034df8) list_set_graphic_pane_vc_ParamLimits

0xe463,	// (0x00034df8) list_set_graphic_pane_vc

0xb5f6,	// (0x00031f8b) input_focus_pane_cp2_vc

0xb5ec,	// (0x00031f81) setting_code_pane_vc_g1

0xe477,	// (0x00034e0c) setting_code_pane_vc_t1

0xe485,	// (0x00034e1a) set_text_pane_vc_t1_ParamLimits

0xe485,	// (0x00034e1a) set_text_pane_vc_t1

0xb5f6,	// (0x00031f8b) input_focus_pane_cp1_vc

0xe4a4,	// (0x00034e39) list_set_text_pane_vc

0xb5ec,	// (0x00031f81) setting_text_pane_vc_g1

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp2_vc

0xe4ae,	// (0x00034e43) setting_slider_graphic_pane_vc_g1

0xe4b6,	// (0x00034e4b) setting_slider_graphic_pane_vc_t1

0xe4c4,	// (0x00034e59) setting_slider_graphic_pane_vc_t2

0x0001,

0x00a5,	// (0x00026a3a) setting_slider_graphic_pane_vc_t

0xe4d2,	// (0x00034e67) slider_set_pane_cp_vc

0xe4da,	// (0x00034e6f) slider_set_pane_vc_g1

0xe4e3,	// (0x00034e78) slider_set_pane_vc_g2

0x0006,

0x00aa,	// (0x00026a3f) slider_set_pane_vc_g

0xbf41,	// (0x000328d6) set_opt_bg_pane_g1_copy1

0xbf49,	// (0x000328de) set_opt_bg_pane_g2_copy1

0xe50f,	// (0x00034ea4) set_opt_bg_pane_g3_copy1

0xbf59,	// (0x000328ee) set_opt_bg_pane_g4_copy1

0xbf61,	// (0x000328f6) set_opt_bg_pane_g5_copy1

0xbf69,	// (0x000328fe) set_opt_bg_pane_g6_copy1

0xe517,	// (0x00034eac) set_opt_bg_pane_g7_copy1

0xe521,	// (0x00034eb6) set_opt_bg_pane_g8_copy1

0xe529,	// (0x00034ebe) set_opt_bg_pane_g9_copy1

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp_vc

0xe531,	// (0x00034ec6) setting_slider_pane_vc_t1

0xe4b6,	// (0x00034e4b) setting_slider_pane_vc_t2

0xe4c4,	// (0x00034e59) setting_slider_pane_vc_t3

0x0002,

0x00b9,	// (0x00026a4e) setting_slider_pane_vc_t

0xe4d2,	// (0x00034e67) slider_set_pane_vc

0x202c,	// (0x000289c1) volume_set_pane_vc_g1

0x2724,	// (0x000290b9) volume_set_pane_vc_g2

0x272d,	// (0x000290c2) volume_set_pane_vc_g3

0x2736,	// (0x000290cb) volume_set_pane_vc_g4

0x273f,	// (0x000290d4) volume_set_pane_vc_g5

0x2748,	// (0x000290dd) volume_set_pane_vc_g6

0x2751,	// (0x000290e6) volume_set_pane_vc_g7

0x275a,	// (0x000290ef) volume_set_pane_vc_g8

0x2763,	// (0x000290f8) volume_set_pane_vc_g9

0x276c,	// (0x00029101) volume_set_pane_vc_g10

0x0009,

0xf9ae,	// (0x00036343) volume_set_pane_vc_g

0xe540,	// (0x00034ed5) volume_set_pane_vc

0xe548,	// (0x00034edd) button_value_adjust_pane_cp1_vc

0xe552,	// (0x00034ee7) list_highlight_pane_cp2_vc

0xe55b,	// (0x00034ef0) list_set_pane_vc_ParamLimits

0xe55b,	// (0x00034ef0) list_set_pane_vc

0xe5ad,	// (0x00034f42) main_pane_set_vc_t1_ParamLimits

0xe5ad,	// (0x00034f42) main_pane_set_vc_t1

0xe5c2,	// (0x00034f57) main_pane_set_vc_t2_ParamLimits

0xe5c2,	// (0x00034f57) main_pane_set_vc_t2

0xe5d4,	// (0x00034f69) main_pane_set_vc_t3_ParamLimits

0xe5d4,	// (0x00034f69) main_pane_set_vc_t3

0xe5e6,	// (0x00034f7b) main_pane_set_vc_t4_ParamLimits

0xe5e6,	// (0x00034f7b) main_pane_set_vc_t4

0x0003,

0x00d5,	// (0x00026a6a) main_pane_set_vc_t_ParamLimits

0x00d5,	// (0x00026a6a) main_pane_set_vc_t

0xe5f8,	// (0x00034f8d) setting_code_pane_vc_ParamLimits

0xe5f8,	// (0x00034f8d) setting_code_pane_vc

0xe607,	// (0x00034f9c) setting_slider_graphic_pane_vc

0xe607,	// (0x00034f9c) setting_slider_pane_vc

0xe607,	// (0x00034f9c) setting_text_pane_vc

0xe607,	// (0x00034f9c) setting_volume_pane_vc

0xe60f,	// (0x00034fa4) scroll_pane_cp121_vc

0xbeb4,	// (0x00032849) set_content_pane_vc

0xe64d,	// (0x00034fe2) button_value_adjust_pane_g1

0xe656,	// (0x00034feb) button_value_adjust_pane_g2

0x0001,

0x0128,	// (0x00026abd) button_value_adjust_pane_g

0xe65f,	// (0x00034ff4) form_field_slider_wide_pane_vc_t1_ParamLimits

0xe65f,	// (0x00034ff4) form_field_slider_wide_pane_vc_t1

0xe673,	// (0x00035008) form_field_slider_wide_pane_vc_t2_ParamLimits

0xe673,	// (0x00035008) form_field_slider_wide_pane_vc_t2

0x0001,

0x012d,	// (0x00026ac2) form_field_slider_wide_pane_vc_t_ParamLimits

0x012d,	// (0x00026ac2) form_field_slider_wide_pane_vc_t

0xb644,	// (0x00031fd9) input_focus_pane_cp10_vc_ParamLimits

0xb644,	// (0x00031fd9) input_focus_pane_cp10_vc

0xe685,	// (0x0003501a) slider_cont_pane_cp1_vc_ParamLimits

0xe685,	// (0x0003501a) slider_cont_pane_cp1_vc

0xe4da,	// (0x00034e6f) slider_form_pane_g1_cp2

0xe4e3,	// (0x00034e78) slider_form_pane_g2_cp2

0xe69e,	// (0x00035033) form_field_slider_pane_vc_t3

0xe6ac,	// (0x00035041) form_field_slider_pane_vc_t4

0xe6ba,	// (0x0003504f) slider_form_pane_vc_ParamLimits

0xe6ba,	// (0x0003504f) slider_form_pane_vc

0xe6c7,	// (0x0003505c) form_field_slider_pane_vc_t1_ParamLimits

0xe6c7,	// (0x0003505c) form_field_slider_pane_vc_t1

0xe673,	// (0x00035008) form_field_slider_pane_vc_t2_ParamLimits

0xe673,	// (0x00035008) form_field_slider_pane_vc_t2

0x0001,

0x013d,	// (0x00026ad2) form_field_slider_pane_vc_t_ParamLimits

0x013d,	// (0x00026ad2) form_field_slider_pane_vc_t

0xb644,	// (0x00031fd9) input_focus_pane_cp9_vc_ParamLimits

0xb644,	// (0x00031fd9) input_focus_pane_cp9_vc

0xe6e3,	// (0x00035078) slider_cont_pane_vc_ParamLimits

0xe6e3,	// (0x00035078) slider_cont_pane_vc

0xe6f5,	// (0x0003508a) list_form_graphic_pane_cp_vc_ParamLimits

0xe6f5,	// (0x0003508a) list_form_graphic_pane_cp_vc

0xcf9f,	// (0x00033934) form_field_popup_wide_pane_vc_g1

0xe70a,	// (0x0003509f) form_field_popup_wide_pane_vc_t1_ParamLimits

0xe70a,	// (0x0003509f) form_field_popup_wide_pane_vc_t1

0xbeda,	// (0x0003286f) input_focus_pane_cp8_vc_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_cp8_vc

0xe721,	// (0x000350b6) list_form_wide_pane_vc_ParamLimits

0xe721,	// (0x000350b6) list_form_wide_pane_vc

0xe72d,	// (0x000350c2) list_form_graphic_pane_vc_g1

0xe735,	// (0x000350ca) list_form_graphic_pane_vc_t1_ParamLimits

0xe735,	// (0x000350ca) list_form_graphic_pane_vc_t1

0xb652,	// (0x00031fe7) list_highlight_pane_cp5_vc_ParamLimits

0xb652,	// (0x00031fe7) list_highlight_pane_cp5_vc

0xe751,	// (0x000350e6) list_form_graphic_pane_vc_ParamLimits

0xe751,	// (0x000350e6) list_form_graphic_pane_vc

0xcf9f,	// (0x00033934) form_field_popup_pane_vc_g1

0xe767,	// (0x000350fc) form_field_popup_pane_vc_t1_ParamLimits

0xe767,	// (0x000350fc) form_field_popup_pane_vc_t1

0xbeda,	// (0x0003286f) input_focus_pane_cp7_vc_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_cp7_vc

0xe77e,	// (0x00035113) list_form_pane_vc_ParamLimits

0xe77e,	// (0x00035113) list_form_pane_vc

0xe78a,	// (0x0003511f) data_form_pane_vc_t1_ParamLimits

0xe78a,	// (0x0003511f) data_form_pane_vc_t1

0xbf41,	// (0x000328d6) input_focus_pane_vc_g1

0xbf49,	// (0x000328de) input_focus_pane_vc_g2

0xbf51,	// (0x000328e6) input_focus_pane_vc_g3

0xbf59,	// (0x000328ee) input_focus_pane_vc_g4

0xbf61,	// (0x000328f6) input_focus_pane_vc_g5

0xbf69,	// (0x000328fe) input_focus_pane_vc_g6

0xbf71,	// (0x00032906) input_focus_pane_vc_g7

0xbf79,	// (0x0003290e) input_focus_pane_vc_g8

0xbf81,	// (0x00032916) input_focus_pane_vc_g9

0xb5ec,	// (0x00031f81) input_focus_pane_vc_g10

0x0009,

0xf6a8,	// (0x0003603d) input_focus_pane_vc_g

0xcf93,	// (0x00033928) data_form_pane_vc_ParamLimits

0xcf93,	// (0x00033928) data_form_pane_vc

0xcf9f,	// (0x00033934) form_field_data_pane_vc_g1

0xe7a5,	// (0x0003513a) form_field_data_pane_vc_t1_ParamLimits

0xe7a5,	// (0x0003513a) form_field_data_pane_vc_t1

0xbeda,	// (0x0003286f) input_focus_pane_vc_ParamLimits

0xbeda,	// (0x0003286f) input_focus_pane_vc

0xe7bf,	// (0x00035154) button_value_adjust_pane_cp3_vc

0xe7c7,	// (0x0003515c) button_value_adjust_pane_cp5_vc

0xe7cf,	// (0x00035164) form_field_data_pane_vc_ParamLimits

0xe7cf,	// (0x00035164) form_field_data_pane_vc

0xe7e6,	// (0x0003517b) form_field_data_pane_vc_cp2

0xe7ee,	// (0x00035183) form_field_data_wide_pane_vc_ParamLimits

0xe7ee,	// (0x00035183) form_field_data_wide_pane_vc

0xe804,	// (0x00035199) form_field_data_wide_pane_vc_cp2

0xe80c,	// (0x000351a1) form_field_popup_pane_vc_ParamLimits

0xe80c,	// (0x000351a1) form_field_popup_pane_vc

0xe823,	// (0x000351b8) form_field_popup_wide_pane_vc_ParamLimits

0xe823,	// (0x000351b8) form_field_popup_wide_pane_vc

0xe839,	// (0x000351ce) form_field_slider_pane_vc_ParamLimits

0xe839,	// (0x000351ce) form_field_slider_pane_vc

0xe84c,	// (0x000351e1) form_field_slider_wide_pane_vc_ParamLimits

0xe84c,	// (0x000351e1) form_field_slider_wide_pane_vc

0xa263,	// (0x00030bf8) grid_touch_1_pane_ParamLimits

0xa263,	// (0x00030bf8) grid_touch_1_pane

0xa277,	// (0x00030c0c) grid_touch_2_pane_ParamLimits

0xa277,	// (0x00030c0c) grid_touch_2_pane

0xe85f,	// (0x000351f4) touch_pane_g1_ParamLimits

0xe85f,	// (0x000351f4) touch_pane_g1

0xe86d,	// (0x00035202) cell_app_pane_cp_wide_ParamLimits

0xe86d,	// (0x00035202) cell_app_pane_cp_wide

0xe87e,	// (0x00035213) grid_popup_fast_wide_pane_ParamLimits

0xe87e,	// (0x00035213) grid_popup_fast_wide_pane

0xe892,	// (0x00035227) scroll_pane_cp19_ParamLimits

0xe892,	// (0x00035227) scroll_pane_cp19

0xb5f6,	// (0x00031f8b) bg_popup_window_pane_cp20

0xe8a6,	// (0x0003523b) listscroll_popup_fast_wide_pane

0xcdc3,	// (0x00033758) grid_indicator_nsta_pane

0xe8ae,	// (0x00035243) clock_nsta_pane_g1

0xe8b7,	// (0x0003524c) clock_nsta_pane_t1

0xa2a1,	// (0x00030c36) cell_indicator_nsta_pane_ParamLimits

0xa2a1,	// (0x00030c36) cell_indicator_nsta_pane

0xe85f,	// (0x000351f4) cell_indicator_nsta_pane_g1

0xa2be,	// (0x00030c53) cell_indicator_nsta_pane_g2

0x0001,

0xfa0d,	// (0x000363a2) cell_indicator_nsta_pane_g

0xe8d3,	// (0x00035268) clock_nsta_pane_cp

0xe8db,	// (0x00035270) indicator_nsta_pane_cp

0xe8e4,	// (0x00035279) nsta_clock_indic_pane_g1

0xb68e,	// (0x00032023) grid_indicator_pane

0xc34c,	// (0x00032ce1) scroll_pane_cp29

0x11bf,	// (0x00027b54) indicator_nsta_pane_cp2_ParamLimits

0x11bf,	// (0x00027b54) indicator_nsta_pane_cp2

0xb652,	// (0x00031fe7) main_apps_wheel_pane

0xd0bb,	// (0x00033a50) form_midp_field_text_pane_ParamLimits

0xd1e8,	// (0x00033b7d) scroll_bar_cp050_ParamLimits

0xe94d,	// (0x000352e2) cell_indicator_pane_ParamLimits

0xe94d,	// (0x000352e2) cell_indicator_pane

0xe96a,	// (0x000352ff) cell_indicator_pane_g1

0xa2d4,	// (0x00030c69) grid_wheel_folder_pane_ParamLimits

0xa2d4,	// (0x00030c69) grid_wheel_folder_pane

0xa2e2,	// (0x00030c77) list_wheel_apps_pane_ParamLimits

0xa2e2,	// (0x00030c77) list_wheel_apps_pane

0xa2f0,	// (0x00030c85) main_apps_wheel_pane_g1_ParamLimits

0xa2f0,	// (0x00030c85) main_apps_wheel_pane_g1

0xa2fc,	// (0x00030c91) main_apps_wheel_pane_g2_ParamLimits

0xa2fc,	// (0x00030c91) main_apps_wheel_pane_g2

0x0001,

0xfa12,	// (0x000363a7) main_apps_wheel_pane_g_ParamLimits

0xfa12,	// (0x000363a7) main_apps_wheel_pane_g

0xa30a,	// (0x00030c9f) main_apps_wheel_pane_t1_ParamLimits

0xa30a,	// (0x00030c9f) main_apps_wheel_pane_t1

0xa31e,	// (0x00030cb3) list_wheel_apps_pane_g1

0xa326,	// (0x00030cbb) list_wheel_apps_pane_g2

0xa32e,	// (0x00030cc3) list_wheel_apps_pane_g3

0xa336,	// (0x00030ccb) list_wheel_apps_pane_g4

0xa340,	// (0x00030cd5) list_wheel_apps_pane_g5

0x0004,

0xfa17,	// (0x000363ac) list_wheel_apps_pane_g

0xc79f,	// (0x00033134) navi_icon_text_pane

0x990e,	// (0x000302a3) aid_fill_nsta

0xa357,	// (0x00030cec) navi_icon_text_pane_g1

0xa363,	// (0x00030cf8) navi_icon_text_pane_t1

0xc63b,	// (0x00032fd0) list_set_graphic_pane_t1_ParamLimits

0xc63b,	// (0x00032fd0) list_set_graphic_pane_t1

0xd8f0,	// (0x00034285) popup_midp_note_alarm_window_t6_ParamLimits

0xd8f0,	// (0x00034285) popup_midp_note_alarm_window_t6

0xd902,	// (0x00034297) popup_midp_note_alarm_window_t7_ParamLimits

0xd902,	// (0x00034297) popup_midp_note_alarm_window_t7

0xd914,	// (0x000342a9) popup_midp_note_alarm_window_t8_ParamLimits

0xd914,	// (0x000342a9) popup_midp_note_alarm_window_t8

0xd926,	// (0x000342bb) popup_midp_note_alarm_window_t9_ParamLimits

0xd926,	// (0x000342bb) popup_midp_note_alarm_window_t9

0xd938,	// (0x000342cd) popup_midp_note_alarm_window_t10_ParamLimits

0xd938,	// (0x000342cd) popup_midp_note_alarm_window_t10

0xd94a,	// (0x000342df) popup_midp_note_alarm_window_t11_ParamLimits

0xd94a,	// (0x000342df) popup_midp_note_alarm_window_t11

0xd95c,	// (0x000342f1) scroll_pane_cp17_ParamLimits

0xd95c,	// (0x000342f1) scroll_pane_cp17

0x202c,	// (0x000289c1) volume_small_pane_cp_g1

0x28c6,	// (0x0002925b) volume_small_pane_cp_g2

0x28cf,	// (0x00029264) volume_small_pane_cp_g3

0x28d8,	// (0x0002926d) volume_small_pane_cp_g4

0x28e1,	// (0x00029276) volume_small_pane_cp_g5

0x28ea,	// (0x0002927f) volume_small_pane_cp_g6

0x28f3,	// (0x00029288) volume_small_pane_cp_g7

0x28fc,	// (0x00029291) volume_small_pane_cp_g8

0x2905,	// (0x0002929a) volume_small_pane_cp_g9

0x290e,	// (0x000292a3) volume_small_pane_cp_g10

0xc94b,	// (0x000332e0) midp_ticker_pane_g1_ParamLimits

0xc957,	// (0x000332ec) midp_ticker_pane_g2_ParamLimits

0xf770,	// (0x00036105) midp_ticker_pane_g_ParamLimits

0x90ab,	// (0x0002fa40) midp_ticker_pane_t1_ParamLimits

0x992e,	// (0x000302c3) aid_fill_nsta_2

0xd1d4,	// (0x00033b69) list_form2_midp_pane

0xdffb,	// (0x00034990) midp_editing_number_pane_ParamLimits

0xe00a,	// (0x0003499f) midp_ticker_pane_ParamLimits

0xe974,	// (0x00035309) form2_midp_field_pane

0xe97c,	// (0x00035311) scroll_pane_cp51

0xe99c,	// (0x00035331) form2_midp_button_pane_ParamLimits

0xe99c,	// (0x00035331) form2_midp_button_pane

0xe9ae,	// (0x00035343) form2_midp_content_pane_ParamLimits

0xe9ae,	// (0x00035343) form2_midp_content_pane

0xe9c8,	// (0x0003535d) form2_midp_field_choice_group_pane

0xe9d0,	// (0x00035365) form2_midp_field_pane_g1

0xe9d8,	// (0x0003536d) form2_midp_field_pane_g2

0xe9e0,	// (0x00035375) form2_midp_field_pane_g3

0xe9e8,	// (0x0003537d) form2_midp_field_pane_g4

0x0003,

0x018d,	// (0x00026b22) form2_midp_field_pane_g

0xe9f0,	// (0x00035385) form2_midp_gauge_slider_pane

0xe9f8,	// (0x0003538d) form2_midp_gauge_wait_pane

0xea00,	// (0x00035395) form2_midp_image_pane_ParamLimits

0xea00,	// (0x00035395) form2_midp_image_pane

0xea1b,	// (0x000353b0) form2_midp_label_pane_ParamLimits

0xea1b,	// (0x000353b0) form2_midp_label_pane

0xa391,	// (0x00030d26) form2_midp_label_pane_cp_ParamLimits

0xa391,	// (0x00030d26) form2_midp_label_pane_cp

0xea34,	// (0x000353c9) form2_midp_string_pane_ParamLimits

0xea34,	// (0x000353c9) form2_midp_string_pane

0x66a0,	// (0x0002d035) form2_midp_text_pane_ParamLimits

0x66a0,	// (0x0002d035) form2_midp_text_pane

0xea46,	// (0x000353db) form2_midp_time_pane

0xea56,	// (0x000353eb) input_focus_pane_cp51_ParamLimits

0xea56,	// (0x000353eb) input_focus_pane_cp51

0xea6e,	// (0x00035403) form2_midp_label_pane_t1_ParamLimits

0xea6e,	// (0x00035403) form2_midp_label_pane_t1

0x66b9,	// (0x0002d04e) form2_mdip_text_pane_t1_ParamLimits

0x66b9,	// (0x0002d04e) form2_mdip_text_pane_t1

0x66d6,	// (0x0002d06b) form2_midp_time_pane_t1

0xeab6,	// (0x0003544b) form2_midp_gauge_slider_pane_t1

0xa3b2,	// (0x00030d47) form2_midp_gauge_slider_pane_t2

0xa3c4,	// (0x00030d59) form2_midp_gauge_slider_pane_t3

0x0002,

0xfa3c,	// (0x000363d1) form2_midp_gauge_slider_pane_t

0xeac8,	// (0x0003545d) form2_midp_slider_pane

0xead4,	// (0x00035469) form2_midp_gauge_wait_pane_t1

0xeae2,	// (0x00035477) form2_midp_wait_pane_ParamLimits

0xeae2,	// (0x00035477) form2_midp_wait_pane

0xa3d6,	// (0x00030d6b) list_single_2graphic_pane_cp4_ParamLimits

0xa3d6,	// (0x00030d6b) list_single_2graphic_pane_cp4

0x9d41,	// (0x000306d6) list_single_midp_graphic_pane_cp_ParamLimits

0x9d41,	// (0x000306d6) list_single_midp_graphic_pane_cp

0xb5f6,	// (0x00031f8b) list_highlight_pane_cp20

0xeb0d,	// (0x000354a2) list_single_2graphic_pane_g1_cp4

0xe338,	// (0x00034ccd) list_single_2graphic_pane_g2_cp4

0xeb15,	// (0x000354aa) list_single_2graphic_pane_t1_cp4

0xb652,	// (0x00031fe7) list_highlight_pane_cp21

0xeb24,	// (0x000354b9) list_single_midp_graphic_pane_g4_cp

0xeb33,	// (0x000354c8) list_single_midp_graphic_pane_t1_cp

0xa3ed,	// (0x00030d82) form2_mdip_string_pane_t1_ParamLimits

0xa3ed,	// (0x00030d82) form2_mdip_string_pane_t1

0xb5f6,	// (0x00031f8b) bg_wml_button_pane_cp2

0xb5ec,	// (0x00031f81) form2_midp_image_pane_g1

0x4469,	// (0x0002adfe) list_double_large_graphic_pane_g5_ParamLimits

0x4469,	// (0x0002adfe) list_double_large_graphic_pane_g5

0x8fff,	// (0x0002f994) midp_form_pane_ParamLimits

0xb652,	// (0x00031fe7) main_apps_wheel_pane_ParamLimits

0x966a,	// (0x0002ffff) popup_preview_window_ParamLimits

0x966a,	// (0x0002ffff) popup_preview_window

0xcc3a,	// (0x000335cf) popup_touch_info_window_ParamLimits

0xcc3a,	// (0x000335cf) popup_touch_info_window

0xcc58,	// (0x000335ed) popup_touch_menu_window_ParamLimits

0xcc58,	// (0x000335ed) popup_touch_menu_window

0xb5e2,	// (0x00031f77) bg_popup_sub_pane_cp6

0xeb48,	// (0x000354dd) list_touch_menu_pane

0xeb50,	// (0x000354e5) list_single_touch_menu_pane_ParamLimits

0xeb50,	// (0x000354e5) list_single_touch_menu_pane

0xeb65,	// (0x000354fa) list_single_touch_menu_pane_t1

0xb652,	// (0x00031fe7) bg_popup_sub_pane_cp7_ParamLimits

0xb652,	// (0x00031fe7) bg_popup_sub_pane_cp7

0xeb73,	// (0x00035508) heading_sub_pane

0xeb7b,	// (0x00035510) list_touch_info_pane_ParamLimits

0xeb7b,	// (0x00035510) list_touch_info_pane

0xeb8a,	// (0x0003551f) list_single_touch_info_pane_ParamLimits

0xeb8a,	// (0x0003551f) list_single_touch_info_pane

0xeb9c,	// (0x00035531) list_single_touch_info_pane_t1

0xebaa,	// (0x0003553f) list_single_touch_info_pane_t2

0x0001,

0x01a4,	// (0x00026b39) list_single_touch_info_pane_t

0xc921,	// (0x000332b6) bg_popup_heading_pane_cp

0xebb8,	// (0x0003554d) heading_sub_pane_t1

0xcf59,	// (0x000338ee) bg_popup_preview_window_pane_cp_ParamLimits

0xcf59,	// (0x000338ee) bg_popup_preview_window_pane_cp

0xeb73,	// (0x00035508) heading_preview_pane

0xeb7b,	// (0x00035510) list_preview_pane_ParamLimits

0xeb7b,	// (0x00035510) list_preview_pane

0xebc6,	// (0x0003555b) popup_preview_window_g1

0xeb8a,	// (0x0003551f) list_single_preview_pane_ParamLimits

0xeb8a,	// (0x0003551f) list_single_preview_pane

0xebce,	// (0x00035563) list_single_preview_pane_g1

0xebd6,	// (0x0003556b) list_single_preview_pane_t1

0xeb9c,	// (0x00035531) list_single_preview_pane_t2

0x0001,

0x01a9,	// (0x00026b3e) list_single_preview_pane_t

0xebe4,	// (0x00035579) bg_popup_heading_pane_cp2_ParamLimits

0xebe4,	// (0x00035579) bg_popup_heading_pane_cp2

0xebfa,	// (0x0003558f) heading_preview_pane_g1

0xec02,	// (0x00035597) heading_preview_pane_t1_ParamLimits

0xec02,	// (0x00035597) heading_preview_pane_t1

0xb6a5,	// (0x0003203a) soft_indicator_pane_t1_ParamLimits

0xbe4d,	// (0x000327e2) scroll_pane_ParamLimits

0xc248,	// (0x00032bdd) scroll_sc2_left_pane

0xc251,	// (0x00032be6) scroll_sc2_right_pane

0xc270,	// (0x00032c05) scroll_bg_pane_g1_ParamLimits

0xc285,	// (0x00032c1a) scroll_bg_pane_g2_ParamLimits

0xc29d,	// (0x00032c32) scroll_bg_pane_g3_ParamLimits

0xf6ff,	// (0x00036094) scroll_bg_pane_g_ParamLimits

0xc270,	// (0x00032c05) scroll_handle_pane_g1_ParamLimits

0xc2bf,	// (0x00032c54) scroll_handle_pane_g2_ParamLimits

0xc29d,	// (0x00032c32) scroll_handle_pane_g3_ParamLimits

0xf706,	// (0x0003609b) scroll_handle_pane_g_ParamLimits

0xcb83,	// (0x00033518) popup_choice_list_window_ParamLimits

0xcb83,	// (0x00033518) popup_choice_list_window

0xcda5,	// (0x0003373a) choice_list_pane

0xce35,	// (0x000337ca) cell_toolbar_pane_t1

0xce5d,	// (0x000337f2) toolbar_button_pane_ParamLimits

0xdd58,	// (0x000346ed) ai_gene_pane_1_t2_ParamLimits

0xdd58,	// (0x000346ed) ai_gene_pane_1_t2

0x0001,

0xf91e,	// (0x000362b3) ai_gene_pane_1_t_ParamLimits

0xf91e,	// (0x000362b3) ai_gene_pane_1_t

0xec1f,	// (0x000355b4) scroll_sc2_left_pane_g1

0xec1f,	// (0x000355b4) scroll_sc2_right_pane_g1

0xc031,	// (0x000329c6) bg_popup_sub_pane_cp10

0xec29,	// (0x000355be) list_choice_list_pane

0xec40,	// (0x000355d5) list_single_choice_list_pane_ParamLimits

0xec40,	// (0x000355d5) list_single_choice_list_pane

0xec54,	// (0x000355e9) list_single_choice_list_pane_g1

0xec5c,	// (0x000355f1) list_single_choice_list_pane_t1_ParamLimits

0xec5c,	// (0x000355f1) list_single_choice_list_pane_t1

0xec71,	// (0x00035606) choice_list_pane_g1

0xec79,	// (0x0003560e) choice_list_pane_t1

0xb5e2,	// (0x00031f77) input_focus_pane_cp11

0xc1a6,	// (0x00032b3b) title_pane_stacon_g2_ParamLimits

0xc1a6,	// (0x00032b3b) title_pane_stacon_g2

0x0002,

0xf6e5,	// (0x0003607a) title_pane_stacon_g_ParamLimits

0xf6e5,	// (0x0003607a) title_pane_stacon_g

0xc921,	// (0x000332b6) cursor_press_pane

0x91a7,	// (0x0002fb3c) popup_fep_hwr_window_ParamLimits

0x91a7,	// (0x0002fb3c) popup_fep_hwr_window

0xcbd7,	// (0x0003356c) popup_fep_vkb_window_ParamLimits

0xcbd7,	// (0x0003356c) popup_fep_vkb_window

0xec87,	// (0x0003561c) cursor_press_pane_g1

0x0002,

0xfa5e,	// (0x000363f3) fep_vkb_side_pane_g_ParamLimits

0x2b1a,	// (0x000294af) fep_hwr_candidate_pane_ParamLimits

0x2b1a,	// (0x000294af) fep_hwr_candidate_pane

0x2b44,	// (0x000294d9) fep_hwr_side_pane_ParamLimits

0x2b44,	// (0x000294d9) fep_hwr_side_pane

0x2b64,	// (0x000294f9) fep_hwr_top_pane_ParamLimits

0x2b64,	// (0x000294f9) fep_hwr_top_pane

0x2b7c,	// (0x00029511) fep_hwr_write_pane_ParamLimits

0x2b7c,	// (0x00029511) fep_hwr_write_pane

0xfa5e,	// (0x000363f3) fep_vkb_side_pane_g

0xec8f,	// (0x00035624) fep_hwr_top_pane_g1

0xeca1,	// (0x00035636) fep_hwr_top_pane_g2

0x2bb6,	// (0x0002954b) fep_hwr_top_pane_g3

0x0002,

0xfa43,	// (0x000363d8) fep_hwr_top_pane_g

0x2bcb,	// (0x00029560) fep_hwr_top_text_pane

0xc412,	// (0x00032da7) fep_hwr_top_text_pane_g1

0xecd7,	// (0x0003566c) fep_hwr_top_text_pane_t1

0x2cc1,	// (0x00029656) fep_hwr_candidate_pane_g1

0xeee4,	// (0x00035879) fep_vkb_keypad_pane_g3_ParamLimits

0xeee4,	// (0x00035879) fep_vkb_keypad_pane_g3

0xef0c,	// (0x000358a1) fep_vkb_keypad_pane_g4_ParamLimits

0xef0c,	// (0x000358a1) fep_vkb_keypad_pane_g4

0xef7b,	// (0x00035910) fep_vkb_bottom_pane_g2_ParamLimits

0xef7b,	// (0x00035910) fep_vkb_bottom_pane_g2

0x0001,

0x01d9,	// (0x00026b6e) fep_vkb_bottom_pane_g_ParamLimits

0x01d9,	// (0x00026b6e) fep_vkb_bottom_pane_g

0xec1f,	// (0x000355b4) cell_vkb_side_pane_g2

0x0001,

0x01e3,	// (0x00026b78) cell_vkb_side_pane_g

0xefbf,	// (0x00035954) cell_vkb_side_pane_t1

0xefcd,	// (0x00035962) cell_vkb_side_pane_t1_copy1

0xec1f,	// (0x000355b4) bg_fep_vkb_candidate_pane_g2

0xf0a9,	// (0x00035a3e) cell_vkb_candidate_pane_ParamLimits

0xece5,	// (0x0003567a) aid_size_cell_vkb_ParamLimits

0xece5,	// (0x0003567a) aid_size_cell_vkb

0xf0a9,	// (0x00035a3e) cell_vkb_candidate_pane

0x2dd2,	// (0x00029767) bg_popup_fep_shadow_pane_g1

0xed61,	// (0x000356f6) fep_vkb_bottom_pane_ParamLimits

0xed61,	// (0x000356f6) fep_vkb_bottom_pane

0xed9e,	// (0x00035733) fep_vkb_candidate_pane_ParamLimits

0xed9e,	// (0x00035733) fep_vkb_candidate_pane

0xedba,	// (0x0003574f) fep_vkb_keypad_pane_ParamLimits

0xedba,	// (0x0003574f) fep_vkb_keypad_pane

0xee00,	// (0x00035795) fep_vkb_side_pane_ParamLimits

0xee00,	// (0x00035795) fep_vkb_side_pane

0xee3c,	// (0x000357d1) fep_vkb_top_pane_ParamLimits

0xee3c,	// (0x000357d1) fep_vkb_top_pane

0xee78,	// (0x0003580d) fep_vkb_top_pane_g1_ParamLimits

0xee78,	// (0x0003580d) fep_vkb_top_pane_g1

0xee87,	// (0x0003581c) fep_vkb_top_pane_g2_ParamLimits

0xee87,	// (0x0003581c) fep_vkb_top_pane_g2

0xee96,	// (0x0003582b) fep_vkb_top_pane_g3_ParamLimits

0xee96,	// (0x0003582b) fep_vkb_top_pane_g3

0x0003,

0x01c9,	// (0x00026b5e) fep_vkb_top_pane_g_ParamLimits

0x01c9,	// (0x00026b5e) fep_vkb_top_pane_g

0xeeb4,	// (0x00035849) fep_vkb_top_text_pane_ParamLimits

0xeeb4,	// (0x00035849) fep_vkb_top_text_pane

0xa485,	// (0x00030e1a) fep_vkb_side_pane_g1_ParamLimits

0xa485,	// (0x00030e1a) fep_vkb_side_pane_g1

0xeed3,	// (0x00035868) grid_vkb_side_pane_ParamLimits

0xeed3,	// (0x00035868) grid_vkb_side_pane

0x2dda,	// (0x0002976f) bg_popup_fep_shadow_pane_g2

0x2de3,	// (0x00029778) bg_popup_fep_shadow_pane_g3

0x2deb,	// (0x00029780) bg_popup_fep_shadow_pane_g4

0x2df4,	// (0x00029789) bg_popup_fep_shadow_pane_g5

0x2dfe,	// (0x00029793) bg_popup_fep_shadow_pane_g6

0x2e06,	// (0x0002979b) bg_popup_fep_shadow_pane_g7

0xbf59,	// (0x000328ee) bg_popup_fep_shadow_pane_g8

0xef2a,	// (0x000358bf) grid_vkb_keypad_number_pane_ParamLimits

0xef2a,	// (0x000358bf) grid_vkb_keypad_number_pane

0xef3a,	// (0x000358cf) grid_vkb_keypad_pane_ParamLimits

0xef3a,	// (0x000358cf) grid_vkb_keypad_pane

0xef60,	// (0x000358f5) fep_vkb_bottom_pane_g1_ParamLimits

0xef60,	// (0x000358f5) fep_vkb_bottom_pane_g1

0xef89,	// (0x0003591e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xef89,	// (0x0003591e) grid_vkb_keypad_bottom_left_pane

0xef9e,	// (0x00035933) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xef9e,	// (0x00035933) grid_vkb_keypad_bottom_right_pane

0xefb3,	// (0x00035948) fep_vkb_top_text_pane_g1

0xa4cc,	// (0x00030e61) fep_vkb_top_text_pane_t1

0xa4de,	// (0x00030e73) cell_vkb_side_pane_ParamLimits

0xa4de,	// (0x00030e73) cell_vkb_side_pane

0xec1f,	// (0x000355b4) cell_vkb_side_pane_g1

0xefdb,	// (0x00035970) cell_vkb_keypad_pane_ParamLimits

0xefdb,	// (0x00035970) cell_vkb_keypad_pane

0xf056,	// (0x000359eb) cell_vkb_keypad_pane_g1

0x0008,

0xfa6a,	// (0x000363ff) bg_popup_fep_shadow_pane_g

0x2e18,	// (0x000297ad) cell_hwr_side_pane_g1

0x2e18,	// (0x000297ad) cell_hwr_side_pane_g2

0xf060,	// (0x000359f5) cell_vkb_keypad_pane_t1

0xa4f4,	// (0x00030e89) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xa4f4,	// (0x00030e89) cell_vkb_keypad_bottom_left_pane

0xa509,	// (0x00030e9e) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xa509,	// (0x00030e9e) cell_vkb_keypad_bottom_right_pane

0xec1f,	// (0x000355b4) cell_vkb_keypad_bottom_left_pane_g1

0xec1f,	// (0x000355b4) cell_vkb_keypad_bottom_right_pane_g1

0xf06e,	// (0x00035a03) cell_vkb_keypad_number_pane_ParamLimits

0xf06e,	// (0x00035a03) cell_vkb_keypad_number_pane

0xf08d,	// (0x00035a22) cell_vkb_keypad_number_pane_g1

0xf097,	// (0x00035a2c) cell_vkb_keypad_number_pane_g2

0xf0a0,	// (0x00035a35) cell_vkb_keypad_number_pane_g3

0x0002,

0x01e8,	// (0x00026b7d) cell_vkb_keypad_number_pane_g

0xf060,	// (0x000359f5) cell_vkb_keypad_number_pane_t1

0xf0c6,	// (0x00035a5b) fep_vkb_candidate_pane_g1

0x0001,

0xfa7d,	// (0x00036412) cell_hwr_side_pane_g

0xf0df,	// (0x00035a74) cell_hwr_side_pane_t1

0x2e22,	// (0x000297b7) cell_hwr_side_pane_t1_copy1

0x2e30,	// (0x000297c5) cell_hwr_candidate_pane_g1

0x2e5f,	// (0x000297f4) cell_hwr_candidate_pane_t1

0xec1f,	// (0x000355b4) cell_vkb_candidate_pane_g2

0xf123,	// (0x00035ab8) cell_vkb_candidate_pane_t1

0x2ae1,	// (0x00029476) bg_popup_fep_shadow_pane_ParamLimits

0x2ae1,	// (0x00029476) bg_popup_fep_shadow_pane

0x2b96,	// (0x0002952b) bg_fep_hwr_top_pane_g4

0xecb3,	// (0x00035648) bg_hwr_side_pane_g1_ParamLimits

0xecb3,	// (0x00035648) bg_hwr_side_pane_g1

0x84c2,	// (0x0002ee57) cell_hwr_side_pane_ParamLimits

0x84c2,	// (0x0002ee57) cell_hwr_side_pane

0x2c42,	// (0x000295d7) fep_hwr_write_pane_g1_ParamLimits

0x2c42,	// (0x000295d7) fep_hwr_write_pane_g1

0x2c4f,	// (0x000295e4) fep_hwr_write_pane_g2_ParamLimits

0x2c4f,	// (0x000295e4) fep_hwr_write_pane_g2

0x2c5c,	// (0x000295f1) fep_hwr_write_pane_g3_ParamLimits

0x2c5c,	// (0x000295f1) fep_hwr_write_pane_g3

0x84e2,	// (0x0002ee77) fep_hwr_write_pane_g4_ParamLimits

0x84e2,	// (0x0002ee77) fep_hwr_write_pane_g4

0x0005,

0xfa4a,	// (0x000363df) fep_hwr_write_pane_g_ParamLimits

0xfa4a,	// (0x000363df) fep_hwr_write_pane_g

0x2b96,	// (0x0002952b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x2b96,	// (0x0002952b) bg_fep_hwr_candidate_pane_g2

0x2c7f,	// (0x00029614) cell_hwr_candidate_pane_ParamLimits

0x2c7f,	// (0x00029614) cell_hwr_candidate_pane

0x2cc1,	// (0x00029656) fep_hwr_candidate_pane_g1_ParamLimits

0xed13,	// (0x000356a8) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xed13,	// (0x000356a8) bg_popup_fep_shadow_pane_cp2

0xeea6,	// (0x0003583b) fep_vkb_top_pane_g4_ParamLimits

0xeea6,	// (0x0003583b) fep_vkb_top_pane_g4

0xeec5,	// (0x0003585a) fep_vkb_side_pane_g2_ParamLimits

0xeec5,	// (0x0003585a) fep_vkb_side_pane_g2

0x8059,	// (0x0002e9ee) list_setting_pane_t4_ParamLimits

0x8059,	// (0x0002e9ee) list_setting_pane_t4

0x80f3,	// (0x0002ea88) list_setting_number_pane_t5_ParamLimits

0x80f3,	// (0x0002ea88) list_setting_number_pane_t5

0x8efe,	// (0x0002f893) list_double_heading_pane_cp2_ParamLimits

0x8efe,	// (0x0002f893) list_double_heading_pane_cp2

0xbef4,	// (0x00032889) list_double_heading_pane_g1_cp2_ParamLimits

0xbef4,	// (0x00032889) list_double_heading_pane_g1_cp2

0xbf00,	// (0x00032895) list_double_heading_pane_g2_cp2_ParamLimits

0xbf00,	// (0x00032895) list_double_heading_pane_g2_cp2

0xf131,	// (0x00035ac6) list_double_heading_pane_t1_cp2_ParamLimits

0xf131,	// (0x00035ac6) list_double_heading_pane_t1_cp2

0xf147,	// (0x00035adc) list_double_heading_pane_t2_cp2_ParamLimits

0xf147,	// (0x00035adc) list_double_heading_pane_t2_cp2

0xb5da,	// (0x00031f6f) aid_value_unit2

0x08f9,	// (0x0002728e) popup_preview_fixed_window

0xb785,	// (0x0003211a) bg_popup_preview_window_pane_cp02

0xf159,	// (0x00035aee) list_preview_fixed_pane

0xf19f,	// (0x00035b34) list_empty_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_empty_pane_fp

0xf19f,	// (0x00035b34) list_single_cale_day_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_cale_day_pane_fp

0xf19f,	// (0x00035b34) list_single_graphic_heading_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_graphic_heading_pane_fp

0xf19f,	// (0x00035b34) list_single_graphic_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_graphic_pane_fp

0xf19f,	// (0x00035b34) list_single_heading_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_heading_pane_fp

0xf19f,	// (0x00035b34) list_single_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_pane_fp

0xf1b6,	// (0x00035b4b) list_single_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00035b4b) list_single_pane_fp_g1

0x4401,	// (0x0002ad96) list_single_pane_fp_g2_ParamLimits

0x4401,	// (0x0002ad96) list_single_pane_fp_g2

0x66e9,	// (0x0002d07e) list_single_pane_fp_g3_ParamLimits

0x66e9,	// (0x0002d07e) list_single_pane_fp_g3

0xf1c2,	// (0x00035b57) list_single_pane_fp_g4_ParamLimits

0xf1c2,	// (0x00035b57) list_single_pane_fp_g4

0x0003,

0xfa89,	// (0x0003641e) list_single_pane_fp_g_ParamLimits

0xfa89,	// (0x0003641e) list_single_pane_fp_g

0x66fd,	// (0x0002d092) list_single_pane_fp_t1_ParamLimits

0x66fd,	// (0x0002d092) list_single_pane_fp_t1

0x6714,	// (0x0002d0a9) list_single_graphic_pane_fp_g1_ParamLimits

0x6714,	// (0x0002d0a9) list_single_graphic_pane_fp_g1

0xf1b6,	// (0x00035b4b) list_single_graphic_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00035b4b) list_single_graphic_pane_fp_g2

0x4401,	// (0x0002ad96) list_single_graphic_pane_fp_g3_ParamLimits

0x4401,	// (0x0002ad96) list_single_graphic_pane_fp_g3

0x66e9,	// (0x0002d07e) list_single_graphic_pane_fp_g4_ParamLimits

0x66e9,	// (0x0002d07e) list_single_graphic_pane_fp_g4

0xf1c2,	// (0x00035b57) list_single_graphic_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00035b57) list_single_graphic_pane_fp_g5

0x0004,

0xfa92,	// (0x00036427) list_single_graphic_pane_fp_g_ParamLimits

0xfa92,	// (0x00036427) list_single_graphic_pane_fp_g

0x6720,	// (0x0002d0b5) list_single_graphic_pane_fp_t1_ParamLimits

0x6720,	// (0x0002d0b5) list_single_graphic_pane_fp_t1

0x6714,	// (0x0002d0a9) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6714,	// (0x0002d0a9) list_single_graphic_heading_pane_fp_g1

0xf1b6,	// (0x00035b4b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00035b4b) list_single_graphic_heading_pane_fp_g2

0x4401,	// (0x0002ad96) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4401,	// (0x0002ad96) list_single_graphic_heading_pane_fp_g3

0x66e9,	// (0x0002d07e) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x66e9,	// (0x0002d07e) list_single_graphic_heading_pane_fp_g4

0xf1c2,	// (0x00035b57) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00035b57) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfa92,	// (0x00036427) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfa92,	// (0x00036427) list_single_graphic_heading_pane_fp_g

0x6736,	// (0x0002d0cb) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6736,	// (0x0002d0cb) list_single_graphic_heading_pane_fp_t1

0x674c,	// (0x0002d0e1) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x674c,	// (0x0002d0e1) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfa9d,	// (0x00036432) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfa9d,	// (0x00036432) list_single_graphic_heading_pane_fp_t

0x675e,	// (0x0002d0f3) list_single_cale_day_pane_fp_g1_ParamLimits

0x675e,	// (0x0002d0f3) list_single_cale_day_pane_fp_g1

0xf1ce,	// (0x00035b63) list_single_cale_day_pane_fp_g2_ParamLimits

0xf1ce,	// (0x00035b63) list_single_cale_day_pane_fp_g2

0x6796,	// (0x0002d12b) list_single_cale_day_pane_fp_g3_ParamLimits

0x6796,	// (0x0002d12b) list_single_cale_day_pane_fp_g3

0x67be,	// (0x0002d153) list_single_cale_day_pane_fp_g4_ParamLimits

0x67be,	// (0x0002d153) list_single_cale_day_pane_fp_g4

0x67e2,	// (0x0002d177) list_single_cale_day_pane_fp_g5_ParamLimits

0x67e2,	// (0x0002d177) list_single_cale_day_pane_fp_g5

0x0004,

0xfaa2,	// (0x00036437) list_single_cale_day_pane_fp_g_ParamLimits

0xfaa2,	// (0x00036437) list_single_cale_day_pane_fp_g

0x6806,	// (0x0002d19b) list_single_cale_day_pane_fp_t1_ParamLimits

0x6806,	// (0x0002d19b) list_single_cale_day_pane_fp_t1

0x682c,	// (0x0002d1c1) list_single_cale_day_pane_fp_t2_ParamLimits

0x682c,	// (0x0002d1c1) list_single_cale_day_pane_fp_t2

0x6845,	// (0x0002d1da) list_single_cale_day_pane_fp_t3_ParamLimits

0x6845,	// (0x0002d1da) list_single_cale_day_pane_fp_t3

0x0002,

0xfaad,	// (0x00036442) list_single_cale_day_pane_fp_t_ParamLimits

0xfaad,	// (0x00036442) list_single_cale_day_pane_fp_t

0xf1b6,	// (0x00035b4b) list_empty_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00035b4b) list_empty_pane_fp_g1

0x685e,	// (0x0002d1f3) list_empty_pane_fp_t1

0x686c,	// (0x0002d201) list_empty_pane_fp_t2

0x0001,

0xfab4,	// (0x00036449) list_empty_pane_fp_t

0xf1b6,	// (0x00035b4b) list_single_heading_pane_fp_g1_ParamLimits

0xf1b6,	// (0x00035b4b) list_single_heading_pane_fp_g1

0x4401,	// (0x0002ad96) list_single_heading_pane_fp_g2_ParamLimits

0x4401,	// (0x0002ad96) list_single_heading_pane_fp_g2

0x66e9,	// (0x0002d07e) list_single_heading_pane_fp_g3_ParamLimits

0x66e9,	// (0x0002d07e) list_single_heading_pane_fp_g3

0x0002,

0xfab9,	// (0x0003644e) list_single_heading_pane_fp_g_ParamLimits

0xfab9,	// (0x0003644e) list_single_heading_pane_fp_g

0x687a,	// (0x0002d20f) list_single_heading_pane_fp_t1_ParamLimits

0x687a,	// (0x0002d20f) list_single_heading_pane_fp_t1

0x688c,	// (0x0002d221) list_single_heading_pane_fp_t2_ParamLimits

0x688c,	// (0x0002d221) list_single_heading_pane_fp_t2

0x0001,

0xfac0,	// (0x00036455) list_single_heading_pane_fp_t_ParamLimits

0xfac0,	// (0x00036455) list_single_heading_pane_fp_t

0xc03d,	// (0x000329d2) aid_size_cell_fast

0xb768,	// (0x000320fd) soft_indicator_pane_cp1_t1

0xc07a,	// (0x00032a0f) cell_app_pane_cp2_ParamLimits

0xc07a,	// (0x00032a0f) cell_app_pane_cp2

0x2b03,	// (0x00029498) fep_hwr_candidate_drop_down_list_pane

0x2cdb,	// (0x00029670) fep_hwr_candidate_pane_g3_ParamLimits

0x2cdb,	// (0x00029670) fep_hwr_candidate_pane_g3

0xb1cf,	// (0x00031b64) fep_hwr_candidate_pane_g4_ParamLimits

0xb1cf,	// (0x00031b64) fep_hwr_candidate_pane_g4

0x0002,

0xfa57,	// (0x000363ec) fep_hwr_candidate_pane_g_ParamLimits

0xfa57,	// (0x000363ec) fep_hwr_candidate_pane_g

0xed8d,	// (0x00035722) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xed8d,	// (0x00035722) fep_vkb_candidate_drop_down_list_pane

0xf0ce,	// (0x00035a63) fep_vkb_candidate_pane_g3

0xf0d6,	// (0x00035a6b) fep_vkb_candidate_pane_g4

0x0002,

0x01ef,	// (0x00026b84) fep_vkb_candidate_pane_g

0x2e30,	// (0x000297c5) cell_hwr_candidate_pane_g1_ParamLimits

0x2e3e,	// (0x000297d3) cell_hwr_candidate_pane_g3_ParamLimits

0x2e3e,	// (0x000297d3) cell_hwr_candidate_pane_g3

0x4740,	// (0x0002b0d5) cell_hwr_candidate_pane_g4_ParamLimits

0x4740,	// (0x0002b0d5) cell_hwr_candidate_pane_g4

0x0002,

0xfa82,	// (0x00036417) cell_hwr_candidate_pane_g_ParamLimits

0xfa82,	// (0x00036417) cell_hwr_candidate_pane_g

0xf0ed,	// (0x00035a82) cell_vkb_candidate_pane_g3_ParamLimits

0xf0ed,	// (0x00035a82) cell_vkb_candidate_pane_g3

0xf108,	// (0x00035a9d) cell_vkb_candidate_pane_g4_ParamLimits

0xf108,	// (0x00035a9d) cell_vkb_candidate_pane_g4

0xf1da,	// (0x00035b6f) cell_app_pane_cp2_g1_ParamLimits

0xf1da,	// (0x00035b6f) cell_app_pane_cp2_g1

0xf1f8,	// (0x00035b8d) cell_app_pane_cp2_g2_ParamLimits

0xf1f8,	// (0x00035b8d) cell_app_pane_cp2_g2

0x0001,

0x0253,	// (0x00026be8) cell_app_pane_cp2_g_ParamLimits

0x0253,	// (0x00026be8) cell_app_pane_cp2_g

0xf204,	// (0x00035b99) cell_app_pane_cp2_t1_ParamLimits

0xf204,	// (0x00035b99) cell_app_pane_cp2_t1

0xbeda,	// (0x0003286f) grid_highlight_pane_cp1_ParamLimits

0xbeda,	// (0x0003286f) grid_highlight_pane_cp1

0x2e7d,	// (0x00029812) cell_hwr_candidate_pane_cp1_ParamLimits

0x2e7d,	// (0x00029812) cell_hwr_candidate_pane_cp1

0x2e30,	// (0x000297c5) fep_hwr_candidate_drop_down_list_pane_g1

0x2e9c,	// (0x00029831) fep_hwr_candidate_drop_down_list_pane_g2

0x2ea9,	// (0x0002983e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfac5,	// (0x0003645a) fep_hwr_candidate_drop_down_list_pane_g

0x2eb6,	// (0x0002984b) fep_hwr_candidate_drop_down_list_scroll_pane

0x2ebf,	// (0x00029854) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2ebf,	// (0x00029854) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2ecc,	// (0x00029861) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2ecc,	// (0x00029861) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x2ed9,	// (0x0002986e) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x2ed9,	// (0x0002986e) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x2ee6,	// (0x0002987b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x2ee6,	// (0x0002987b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x2f01,	// (0x00029896) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x2f01,	// (0x00029896) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x2f1c,	// (0x000298b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x2f1c,	// (0x000298b1) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2f37,	// (0x000298cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2f37,	// (0x000298cc) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x2f52,	// (0x000298e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x2f52,	// (0x000298e7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfacc,	// (0x00036461) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfacc,	// (0x00036461) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xf216,	// (0x00035bab) cell_vkb_candidate_pane_cp1_ParamLimits

0xf216,	// (0x00035bab) cell_vkb_candidate_pane_cp1

0xeea6,	// (0x0003583b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xeea6,	// (0x0003583b) fep_vkb_candidate_drop_down_list_pane_g1

0xf236,	// (0x00035bcb) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xf236,	// (0x00035bcb) fep_vkb_candidate_drop_down_list_pane_g2

0xf243,	// (0x00035bd8) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xf243,	// (0x00035bd8) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfadd,	// (0x00036472) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfadd,	// (0x00036472) fep_vkb_candidate_drop_down_list_pane_g

0xf250,	// (0x00035be5) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xf250,	// (0x00035be5) fep_vkb_candidate_drop_down_list_scroll_pane

0xf25d,	// (0x00035bf2) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xf25d,	// (0x00035bf2) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xf26a,	// (0x00035bff) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xf26a,	// (0x00035bff) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xf276,	// (0x00035c0b) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xf276,	// (0x00035c0b) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xf282,	// (0x00035c17) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xf282,	// (0x00035c17) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xf2a3,	// (0x00035c38) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xf2a3,	// (0x00035c38) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xf2c4,	// (0x00035c59) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xf2c4,	// (0x00035c59) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xf2e5,	// (0x00035c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xf2e5,	// (0x00035c7a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xf306,	// (0x00035c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xf306,	// (0x00035c9b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfae4,	// (0x00036479) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfae4,	// (0x00036479) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8963,	// (0x0002f2f8) title_pane_g1_ParamLimits

0x8974,	// (0x0002f309) title_pane_g2_ParamLimits

0xf56a,	// (0x00035eff) title_pane_g_ParamLimits

0xc402,	// (0x00032d97) aid_call2_pane

0xc40a,	// (0x00032d9f) aid_call_pane

0xc412,	// (0x00032da7) popup_clock_analogue_window_g1

0xc412,	// (0x00032da7) popup_clock_analogue_window_g2

0x100f,	// (0x000279a4) popup_clock_analogue_window_g3

0x1018,	// (0x000279ad) popup_clock_analogue_window_g4

0xb5ec,	// (0x00031f81) popup_clock_analogue_window_g5

0x0004,

0xf714,	// (0x000360a9) popup_clock_analogue_window_g

0x1020,	// (0x000279b5) popup_clock_analogue_window_t1

0x1057,	// (0x000279ec) clock_digital_number_pane_ParamLimits

0x1057,	// (0x000279ec) clock_digital_number_pane

0x1063,	// (0x000279f8) clock_digital_number_pane_cp02_ParamLimits

0x1063,	// (0x000279f8) clock_digital_number_pane_cp02

0x106f,	// (0x00027a04) clock_digital_number_pane_cp03_ParamLimits

0x106f,	// (0x00027a04) clock_digital_number_pane_cp03

0x107b,	// (0x00027a10) clock_digital_number_pane_cp04_ParamLimits

0x107b,	// (0x00027a10) clock_digital_number_pane_cp04

0x1087,	// (0x00027a1c) clock_digital_separator_pane_ParamLimits

0x1087,	// (0x00027a1c) clock_digital_separator_pane

0x1093,	// (0x00027a28) popup_clock_digital_window_t1_ParamLimits

0x1093,	// (0x00027a28) popup_clock_digital_window_t1

0xb5ec,	// (0x00031f81) clock_digital_number_pane_g1

0xb5ec,	// (0x00031f81) clock_digital_number_pane_g2

0x0001,

0xf71f,	// (0x000360b4) clock_digital_number_pane_g

0xb5ec,	// (0x00031f81) clock_digital_separator_pane_g1

0xb5ec,	// (0x00031f81) clock_digital_separator_pane_g2

0x0001,

0xf71f,	// (0x000360b4) clock_digital_separator_pane_g

0x990e,	// (0x000302a3) aid_fill_nsta_ParamLimits

0x9a3d,	// (0x000303d2) indicator_nsta_pane_ParamLimits

0xcd4e,	// (0x000336e3) popup_clock_analogue_window

0xcd4e,	// (0x000336e3) popup_clock_digital_window

0xcdc3,	// (0x00033758) grid_indicator_nsta_pane_ParamLimits

0xe8c5,	// (0x0003525a) clock_nsta_pane_t2

0x0001,

0xfa08,	// (0x0003639d) clock_nsta_pane_t

0x0fd3,	// (0x00027968) aid_size_max_handle

0x8173,	// (0x0002eb08) aid_size_min_handle

0xc921,	// (0x000332b6) editor_scroll_pane

0xf321,	// (0x00035cb6) ex_editor_pane

0xbff9,	// (0x0003298e) scroll_pane_cp13

0xbe79,	// (0x0003280e) scroll_pane_cp14

0xc43c,	// (0x00032dd1) scroll_pane_cp36

0x8f0f,	// (0x0002f8a4) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f0f,	// (0x0002f8a4) list_single_graphic_hl_pane_cp2

0xa141,	// (0x00030ad6) list_single_graphic_hl_pane_ParamLimits

0xa141,	// (0x00030ad6) list_single_graphic_hl_pane

0x68a2,	// (0x0002d237) aid_size_min_hl_cp1

0xf329,	// (0x00035cbe) list_highlight_pane_cp34_ParamLimits

0xf329,	// (0x00035cbe) list_highlight_pane_cp34

0xf33a,	// (0x00035ccf) list_single_graphic_hl_pane_g1_ParamLimits

0xf33a,	// (0x00035ccf) list_single_graphic_hl_pane_g1

0x9261,	// (0x0002fbf6) list_single_graphic_hl_pane_g2_ParamLimits

0x9261,	// (0x0002fbf6) list_single_graphic_hl_pane_g2

0x9261,	// (0x0002fbf6) list_single_graphic_hl_pane_g3_ParamLimits

0x9261,	// (0x0002fbf6) list_single_graphic_hl_pane_g3

0x68b7,	// (0x0002d24c) list_single_graphic_hl_pane_g4_ParamLimits

0x68b7,	// (0x0002d24c) list_single_graphic_hl_pane_g4

0x68c3,	// (0x0002d258) list_single_graphic_hl_pane_g5_ParamLimits

0x68c3,	// (0x0002d258) list_single_graphic_hl_pane_g5

0x0004,

0xfaf5,	// (0x0003648a) list_single_graphic_hl_pane_g_ParamLimits

0xfaf5,	// (0x0003648a) list_single_graphic_hl_pane_g

0x68d7,	// (0x0002d26c) list_single_graphic_hl_pane_t1_ParamLimits

0x68d7,	// (0x0002d26c) list_single_graphic_hl_pane_t1

0xf347,	// (0x00035cdc) aid_size_min_hl_cp2

0xf350,	// (0x00035ce5) list_highlight_pane_cp34_cp2_ParamLimits

0xf350,	// (0x00035ce5) list_highlight_pane_cp34_cp2

0xf33a,	// (0x00035ccf) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xf33a,	// (0x00035ccf) list_single_graphic_hl_pane_g1_cp2

0xf35d,	// (0x00035cf2) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xf35d,	// (0x00035cf2) list_single_graphic_hl_pane_g2_cp2

0xf369,	// (0x00035cfe) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xf369,	// (0x00035cfe) list_single_graphic_hl_pane_g3_cp2

0xc858,	// (0x000331ed) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc858,	// (0x000331ed) list_single_graphic_hl_pane_g4_cp2

0xf377,	// (0x00035d0c) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xf377,	// (0x00035d0c) list_single_graphic_hl_pane_g5_cp2

0x81ca,	// (0x0002eb5f) control_pane_g4_ParamLimits

0x81ca,	// (0x0002eb5f) control_pane_g4

0xc031,	// (0x000329c6) bg_popup_sub_pane_cp10_ParamLimits

0xec29,	// (0x000355be) list_choice_list_pane_ParamLimits

0xec38,	// (0x000355cd) scroll_pane_cp23

0xb785,	// (0x0003211a) bg_popup_preview_window_pane_cp02_ParamLimits

0xf159,	// (0x00035aee) list_preview_fixed_pane_ParamLimits

0xf16f,	// (0x00035b04) list_preview_fixed_pane_cp_ParamLimits

0xf16f,	// (0x00035b04) list_preview_fixed_pane_cp

0xf17b,	// (0x00035b10) popup_preview_fixed_window_g1_ParamLimits

0xf17b,	// (0x00035b10) popup_preview_fixed_window_g1

0xf187,	// (0x00035b1c) popup_preview_fixed_window_g2_ParamLimits

0xf187,	// (0x00035b1c) popup_preview_fixed_window_g2

0x0002,

0x0210,	// (0x00026ba5) popup_preview_fixed_window_g_ParamLimits

0x0210,	// (0x00026ba5) popup_preview_fixed_window_g

0x0ec2,	// (0x00027857) aid_navi_side_left_pane_ParamLimits

0x0ed7,	// (0x0002786c) aid_navi_side_right_pane_ParamLimits

0x0eef,	// (0x00027884) navi_icon_pane_stacon_ParamLimits

0x0f03,	// (0x00027898) navi_navi_pane_stacon_ParamLimits

0x0eef,	// (0x00027884) navi_text_pane_stacon_ParamLimits

0xb5e2,	// (0x00031f77) main_text_info_pane

0xf3a1,	// (0x00035d36) listscroll_text_info_pane

0xf3a9,	// (0x00035d3e) list_text_info_pane_ParamLimits

0xf3a9,	// (0x00035d3e) list_text_info_pane

0xf3b8,	// (0x00035d4d) scroll_pane_cp24_ParamLimits

0xf3b8,	// (0x00035d4d) scroll_pane_cp24

0xa524,	// (0x00030eb9) list_text_info_pane_t1_ParamLimits

0xa524,	// (0x00030eb9) list_text_info_pane_t1

0x911c,	// (0x0002fab1) popup_fast_swap2_window_ParamLimits

0x911c,	// (0x0002fab1) popup_fast_swap2_window

0xf3d6,	// (0x00035d6b) aid_size_cell_fast2

0xb5e2,	// (0x00031f77) bg_popup_window_pane_cp17

0xd200,	// (0x00033b95) heading_pane_cp2

0xbbac,	// (0x00032541) listscroll_fast2_pane

0xf3e0,	// (0x00035d75) grid_fast2_pane

0xf3ea,	// (0x00035d7f) listscroll_fast2_pane_g1

0xf3f2,	// (0x00035d87) listscroll_fast2_pane_g2

0x0001,

0x028c,	// (0x00026c21) listscroll_fast2_pane_g

0xbff9,	// (0x0003298e) scroll_pane_cp26

0xf3fc,	// (0x00035d91) cell_fast2_pane_ParamLimits

0xf3fc,	// (0x00035d91) cell_fast2_pane

0xf411,	// (0x00035da6) cell_fast2_pane_g1

0xf41a,	// (0x00035daf) cell_fast2_pane_g2

0xf423,	// (0x00035db8) cell_fast2_pane_g3

0x0002,

0x0291,	// (0x00026c26) cell_fast2_pane_g

0xbc40,	// (0x000325d5) grid_highlight_pane_cp9

0xbc55,	// (0x000325ea) main_eswt_pane_ParamLimits

0xbc55,	// (0x000325ea) main_eswt_pane

0xf3cd,	// (0x00035d62) list_single_text_info_pane

0xf42b,	// (0x00035dc0) eswt_ctrl_button_pane

0xf42b,	// (0x00035dc0) eswt_ctrl_canvas_pane

0xf433,	// (0x00035dc8) eswt_ctrl_combo_pane

0xf42b,	// (0x00035dc0) eswt_ctrl_default_pane

0xf42b,	// (0x00035dc0) eswt_ctrl_label_pane

0xf43b,	// (0x00035dd0) eswt_ctrl_wait_pane

0xf443,	// (0x00035dd8) eswt_shell_pane

0xb5e2,	// (0x00031f77) listscroll_eswt_app_pane

0xf463,	// (0x00035df8) popup_eswt_tasktip_window_ParamLimits

0xf463,	// (0x00035df8) popup_eswt_tasktip_window

0xcf59,	// (0x000338ee) bg_popup_window_pane_cp18

0xf474,	// (0x00035e09) eswt_control_pane_g1_ParamLimits

0xf474,	// (0x00035e09) eswt_control_pane_g1

0xf481,	// (0x00035e16) eswt_control_pane_g2_ParamLimits

0xf481,	// (0x00035e16) eswt_control_pane_g2

0xf48e,	// (0x00035e23) eswt_control_pane_g3_ParamLimits

0xf48e,	// (0x00035e23) eswt_control_pane_g3

0xf49b,	// (0x00035e30) eswt_control_pane_g4_ParamLimits

0xf49b,	// (0x00035e30) eswt_control_pane_g4

0x0003,

0x0298,	// (0x00026c2d) eswt_control_pane_g_ParamLimits

0x0298,	// (0x00026c2d) eswt_control_pane_g

0xbeda,	// (0x0003286f) bg_button_pane_ParamLimits

0xbeda,	// (0x0003286f) bg_button_pane

0xbc55,	// (0x000325ea) common_borders_pane_copy2_ParamLimits

0xbc55,	// (0x000325ea) common_borders_pane_copy2

0xf4a8,	// (0x00035e3d) control_button_pane_g1_ParamLimits

0xf4a8,	// (0x00035e3d) control_button_pane_g1

0xf4b4,	// (0x00035e49) control_button_pane_g2_ParamLimits

0xf4b4,	// (0x00035e49) control_button_pane_g2

0xf4c0,	// (0x00035e55) control_button_pane_g3_ParamLimits

0xf4c0,	// (0x00035e55) control_button_pane_g3

0x0002,

0x02a1,	// (0x00026c36) control_button_pane_g_ParamLimits

0x02a1,	// (0x00026c36) control_button_pane_g

0xf4d4,	// (0x00035e69) control_button_pane_t1

0xf4e2,	// (0x00035e77) control_button_pane_t2

0x0001,

0x02a8,	// (0x00026c3d) control_button_pane_t

0xce69,	// (0x000337fe) bg_button_pane_g1

0xce79,	// (0x0003380e) bg_button_pane_g2

0xce71,	// (0x00033806) bg_button_pane_g3

0xce89,	// (0x0003381e) bg_button_pane_g4

0xce81,	// (0x00033816) bg_button_pane_g5

0xce91,	// (0x00033826) bg_button_pane_g6

0xce99,	// (0x0003382e) bg_button_pane_g7

0xcea9,	// (0x0003383e) bg_button_pane_g8

0xcea1,	// (0x00033836) bg_button_pane_g9

0x0008,

0xf872,	// (0x00036207) bg_button_pane_g

0xebe4,	// (0x00035579) common_borders_pane_ParamLimits

0xebe4,	// (0x00035579) common_borders_pane

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy1_ParamLimits

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy1

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy1_ParamLimits

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy1

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy1_ParamLimits

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy1

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy1_ParamLimits

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy1

0xec1f,	// (0x000355b4) bg_eswt_ctrl_canvas_pane_g1

0xebe4,	// (0x00035579) common_borders_pane_cp2_ParamLimits

0xebe4,	// (0x00035579) common_borders_pane_cp2

0xebe4,	// (0x00035579) common_borders_pane_cp3_ParamLimits

0xebe4,	// (0x00035579) common_borders_pane_cp3

0xf4f0,	// (0x00035e85) separator_horizontal_pane

0xf4f8,	// (0x00035e8d) separator_vertical_pane

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy2_ParamLimits

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy2

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy2_ParamLimits

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy2

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy2_ParamLimits

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy2

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy2_ParamLimits

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy2

0xb5e2,	// (0x00031f77) common_borders_pane_cp4

0xf501,	// (0x00035e96) separator_horizontal_pane_g1

0xf50a,	// (0x00035e9f) separator_horizontal_pane_g2

0xf513,	// (0x00035ea8) separator_horizontal_pane_g3

0x0002,

0x02ad,	// (0x00026c42) separator_horizontal_pane_g

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy3_ParamLimits

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy3

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy3_ParamLimits

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy3

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy3_ParamLimits

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy3

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy3_ParamLimits

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy3

0xb5e2,	// (0x00031f77) common_borders_pane_cp5

0xf51c,	// (0x00035eb1) separator_vertical_pane_g1

0xf525,	// (0x00035eba) separator_vertical_pane_g2

0xf52e,	// (0x00035ec3) separator_vertical_pane_g3

0x0002,

0x02b4,	// (0x00026c49) separator_vertical_pane_g

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy4_ParamLimits

0xf474,	// (0x00035e09) eswt_control_pane_g1_copy4

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy4_ParamLimits

0xf481,	// (0x00035e16) eswt_control_pane_g2_copy4

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy4_ParamLimits

0xf48e,	// (0x00035e23) eswt_control_pane_g3_copy4

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy4_ParamLimits

0xf49b,	// (0x00035e30) eswt_control_pane_g4_copy4

0xa542,	// (0x00030ed7) eswt_ctrl_combo_button_pane

0xa54a,	// (0x00030edf) eswt_ctrl_input_pane

0xa552,	// (0x00030ee7) popup_choice_list_window_cp70

0xa55a,	// (0x00030eef) eswt_ctrl_input_pane_t1

0xb5e2,	// (0x00031f77) input_focus_pane_cp70

0xebe4,	// (0x00035579) bg_button_pane_cp70_ParamLimits

0xebe4,	// (0x00035579) bg_button_pane_cp70

0xa568,	// (0x00030efd) eswt_ctrl_combo_button_pane_g1

0xf537,	// (0x00035ecc) wait_bar_pane_cp70

0xcf59,	// (0x000338ee) bg_popup_window_pane_cp70_ParamLimits

0xcf59,	// (0x000338ee) bg_popup_window_pane_cp70

0xf53f,	// (0x00035ed4) popup_eswt_tasktip_window_t1

0xf555,	// (0x00035eea) wait_bar_pane_cp71_ParamLimits

0xf555,	// (0x00035eea) wait_bar_pane_cp71

0xf561,	// (0x00035ef6) grid_eswt_app_pane

0xc248,	// (0x00032bdd) scroll_pane_cp70

0xa570,	// (0x00030f05) cell_eswt_app_pane_ParamLimits

0xa570,	// (0x00030f05) cell_eswt_app_pane

0xa59a,	// (0x00030f2f) cell_eswt_app_pane_g1_ParamLimits

0xa59a,	// (0x00030f2f) cell_eswt_app_pane_g1

0xa5c9,	// (0x00030f5e) cell_eswt_app_pane_g2_ParamLimits

0xa5c9,	// (0x00030f5e) cell_eswt_app_pane_g2

0x0001,

0xfb00,	// (0x00036495) cell_eswt_app_pane_g_ParamLimits

0xfb00,	// (0x00036495) cell_eswt_app_pane_g

0xa5f2,	// (0x00030f87) cell_eswt_app_pane_t1_ParamLimits

0xa5f2,	// (0x00030f87) cell_eswt_app_pane_t1

0x3092,	// (0x00029a27) grid_highlight_pane_cp70_ParamLimits

0x3092,	// (0x00029a27) grid_highlight_pane_cp70

0xc7f4,	// (0x00033189) set_content_pane_g1

0xcaf8,	// (0x0003348d) status_small_volume_pane

0x309e,	// (0x00029a33) status_small_volume_pane_g1

0x30a6,	// (0x00029a3b) volume_small2_pane

0x30af,	// (0x00029a44) volume_small2_pane_g1

0x30b8,	// (0x00029a4d) volume_small2_pane_g2

0x30c1,	// (0x00029a56) volume_small2_pane_g3

0x30ca,	// (0x00029a5f) volume_small2_pane_g4

0x30d3,	// (0x00029a68) volume_small2_pane_g5

0x30dc,	// (0x00029a71) volume_small2_pane_g6

0x30e5,	// (0x00029a7a) volume_small2_pane_g7

0x30ee,	// (0x00029a83) volume_small2_pane_g8

0x30f7,	// (0x00029a8c) volume_small2_pane_g9

0x3100,	// (0x00029a95) volume_small2_pane_g10

0x0009,

0xfb05,	// (0x0003649a) volume_small2_pane_g

0xefb3,	// (0x00035948) fep_vkb_top_text_pane_g1_ParamLimits

0xa4cc,	// (0x00030e61) fep_vkb_top_text_pane_t1_ParamLimits

0xf193,	// (0x00035b28) popup_preview_fixed_window_g3_ParamLimits

0xf193,	// (0x00035b28) popup_preview_fixed_window_g3

0x98a1,	// (0x00030236) popup_toolbar_trans_pane

0x9fb9,	// (0x0003094e) aid_height_set_list_ParamLimits

0xd9c6,	// (0x0003435b) aid_size_parent_ParamLimits

0xc031,	// (0x000329c6) list_highlight_pane_cp2_ParamLimits

0xc7f4,	// (0x00033189) set_content_pane_g1_ParamLimits

0xa154,	// (0x00030ae9) list_single_image_pane_ParamLimits

0xa154,	// (0x00030ae9) list_single_image_pane

0xa624,	// (0x00030fb9) aid_size_cell_image_ParamLimits

0xa624,	// (0x00030fb9) aid_size_cell_image

0xa631,	// (0x00030fc6) grid_single_image_pane_ParamLimits

0xa631,	// (0x00030fc6) grid_single_image_pane

0xbef4,	// (0x00032889) list_single_image_pane_g1_ParamLimits

0xbef4,	// (0x00032889) list_single_image_pane_g1

0xbf00,	// (0x00032895) list_single_image_pane_g2_ParamLimits

0xbf00,	// (0x00032895) list_single_image_pane_g2

0x0001,

0x02d5,	// (0x00026c6a) list_single_image_pane_g_ParamLimits

0x02d5,	// (0x00026c6a) list_single_image_pane_g

0x3122,	// (0x00029ab7) list_single_image_pane_t1_ParamLimits

0x3122,	// (0x00029ab7) list_single_image_pane_t1

0xa63d,	// (0x00030fd2) cell_image_list_pane_ParamLimits

0xa63d,	// (0x00030fd2) cell_image_list_pane

0xa651,	// (0x00030fe6) cell_image_list_pane_g1

0xa65a,	// (0x00030fef) cell_image_list_pane_g2

0x0001,

0xfb1a,	// (0x000364af) cell_image_list_pane_g

0x315e,	// (0x00029af3) aid_size_cell_tb_trans_pane

0xbeda,	// (0x0003286f) bg_tb_trans_pane

0x3170,	// (0x00029b05) grid_tb_trans_pane

0xce69,	// (0x000337fe) bg_tb_trans_pane_g1

0xce79,	// (0x0003380e) bg_tb_trans_pane_g2

0xce71,	// (0x00033806) bg_tb_trans_pane_g3

0xce89,	// (0x0003381e) bg_tb_trans_pane_g4

0xce81,	// (0x00033816) bg_tb_trans_pane_g5

0xcea9,	// (0x0003383e) bg_tb_trans_pane_g6

0xcea1,	// (0x00033836) bg_tb_trans_pane_g7

0xce91,	// (0x00033826) bg_tb_trans_pane_g8

0xce99,	// (0x0003382e) bg_tb_trans_pane_g9

0x0008,

0xfb1f,	// (0x000364b4) bg_tb_trans_pane_g

0x3184,	// (0x00029b19) cell_toolbar_trans_pane_ParamLimits

0x3184,	// (0x00029b19) cell_toolbar_trans_pane

0xec1f,	// (0x000355b4) cell_toolbar_trans_pane_g1

0xa375,	// (0x00030d0a) list_form2_midp_pane_t1

0xa383,	// (0x00030d18) list_form2_midp_pane_t2

0x0001,

0xfa37,	// (0x000363cc) list_form2_midp_pane_t

0xe97c,	// (0x00035311) scroll_pane_cp51_ParamLimits

0xeaf2,	// (0x00035487) form2_midp_wait_pane_g1

0xeafb,	// (0x00035490) form2_midp_wait_pane_g2

0xeb04,	// (0x00035499) form2_midp_wait_pane_g3

0x0002,

0x019d,	// (0x00026b32) form2_midp_wait_pane_g

0xb652,	// (0x00031fe7) list_highlight_pane_cp21_ParamLimits

0xeb24,	// (0x000354b9) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xeb33,	// (0x000354c8) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_2graphic_im_pane_ParamLimits

0x63c9,	// (0x0002cd5e) list_single_2graphic_im_pane

0xa663,	// (0x00030ff8) list_single_2graphic_im_pane_g1_ParamLimits

0xa663,	// (0x00030ff8) list_single_2graphic_im_pane_g1

0xa674,	// (0x00031009) list_single_2graphic_im_pane_g2_ParamLimits

0xa674,	// (0x00031009) list_single_2graphic_im_pane_g2

0xa680,	// (0x00031015) list_single_2graphic_im_pane_g3_ParamLimits

0xa680,	// (0x00031015) list_single_2graphic_im_pane_g3

0x0003,

0xfb32,	// (0x000364c7) list_single_2graphic_im_pane_g_ParamLimits

0xfb32,	// (0x000364c7) list_single_2graphic_im_pane_g

0xa694,	// (0x00031029) list_single_2graphic_im_pane_t1_ParamLimits

0xa694,	// (0x00031029) list_single_2graphic_im_pane_t1

0xf19f,	// (0x00035b34) list_single_graphic_2heading_pane_fp_ParamLimits

0xf19f,	// (0x00035b34) list_single_graphic_2heading_pane_fp

0x6714,	// (0x0002d0a9) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6714,	// (0x0002d0a9) list_single_graphic_2heading_pane_fp_g1

0xf1b6,	// (0x00035b4b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xf1b6,	// (0x00035b4b) list_single_graphic_2heading_pane_fp_g2

0x4401,	// (0x0002ad96) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4401,	// (0x0002ad96) list_single_graphic_2heading_pane_fp_g3

0x66e9,	// (0x0002d07e) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x66e9,	// (0x0002d07e) list_single_graphic_2heading_pane_fp_g4

0xf1c2,	// (0x00035b57) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xf1c2,	// (0x00035b57) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfa92,	// (0x00036427) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfa92,	// (0x00036427) list_single_graphic_2heading_pane_fp_g

0x68ed,	// (0x0002d282) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x68ed,	// (0x0002d282) list_single_graphic_2heading_pane_fp_t1

0x674c,	// (0x0002d0e1) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x674c,	// (0x0002d0e1) list_single_graphic_2heading_pane_fp_t2

0x6903,	// (0x0002d298) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x6903,	// (0x0002d298) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfb3b,	// (0x000364d0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfb3b,	// (0x000364d0) list_single_graphic_2heading_pane_fp_t

0xecbf,	// (0x00035654) fep_hwr_write_pane_g5_ParamLimits

0xecbf,	// (0x00035654) fep_hwr_write_pane_g5

0xeccb,	// (0x00035660) fep_hwr_write_pane_g6_ParamLimits

0xeccb,	// (0x00035660) fep_hwr_write_pane_g6

0xf443,	// (0x00035dd8) eswt_shell_pane_ParamLimits

0xcf59,	// (0x000338ee) bg_popup_window_pane_cp18_ParamLimits

0xdf5d,	// (0x000348f2) heading_pane_cp70

0xf53f,	// (0x00035ed4) popup_eswt_tasktip_window_t1_ParamLimits

0x9962,	// (0x000302f7) aid_touch_tab_arrow_left

0x9978,	// (0x0003030d) aid_touch_tab_arrow_right

0x898c,	// (0x0002f321) title_pane_g3_ParamLimits

0x898c,	// (0x0002f321) title_pane_g3

0xbe99,	// (0x0003282e) set_value_pane_g1

0x98a1,	// (0x00030236) popup_toolbar_trans_pane_ParamLimits

0x315e,	// (0x00029af3) aid_size_cell_tb_trans_pane_ParamLimits

0xbeda,	// (0x0003286f) bg_tb_trans_pane_ParamLimits

0x3170,	// (0x00029b05) grid_tb_trans_pane_ParamLimits

0xb785,	// (0x0003211a) cont_note_pane_ParamLimits

0xb785,	// (0x0003211a) cont_note_pane

0xbc55,	// (0x000325ea) cont_snote2_single_text_pane_ParamLimits

0xbc55,	// (0x000325ea) cont_snote2_single_text_pane

0xbc55,	// (0x000325ea) cont_snote2_single_graphic_pane_ParamLimits

0xbc55,	// (0x000325ea) cont_snote2_single_graphic_pane

0xd416,	// (0x00033dab) cont_note_wait_pane_ParamLimits

0xd416,	// (0x00033dab) cont_note_wait_pane

0xd416,	// (0x00033dab) cont_note_image_pane_ParamLimits

0xd416,	// (0x00033dab) cont_note_image_pane

0x3218,	// (0x00029bad) popup_note2_window_g1_ParamLimits

0x3218,	// (0x00029bad) popup_note2_window_g1

0x3249,	// (0x00029bde) popup_note2_window_t1_ParamLimits

0x3249,	// (0x00029bde) popup_note2_window_t1

0x328e,	// (0x00029c23) popup_note2_window_t2_ParamLimits

0x328e,	// (0x00029c23) popup_note2_window_t2

0x32d3,	// (0x00029c68) popup_note2_window_t3_ParamLimits

0x32d3,	// (0x00029c68) popup_note2_window_t3

0x3318,	// (0x00029cad) popup_note2_window_t4_ParamLimits

0x3318,	// (0x00029cad) popup_note2_window_t4

0xba3e,	// (0x000323d3) popup_note2_window_t5_ParamLimits

0xba3e,	// (0x000323d3) popup_note2_window_t5

0x0004,

0xfb47,	// (0x000364dc) popup_note2_window_t_ParamLimits

0xfb47,	// (0x000364dc) popup_note2_window_t

0x3347,	// (0x00029cdc) popup_note2_image_window_g1_ParamLimits

0x3347,	// (0x00029cdc) popup_note2_image_window_g1

0x3353,	// (0x00029ce8) popup_note2_image_window_g2_ParamLimits

0x3353,	// (0x00029ce8) popup_note2_image_window_g2

0x0001,

0xfb52,	// (0x000364e7) popup_note2_image_window_g_ParamLimits

0xfb52,	// (0x000364e7) popup_note2_image_window_g

0x3365,	// (0x00029cfa) popup_note2_image_window_t1_ParamLimits

0x3365,	// (0x00029cfa) popup_note2_image_window_t1

0x337d,	// (0x00029d12) popup_note2_image_window_t2_ParamLimits

0x337d,	// (0x00029d12) popup_note2_image_window_t2

0x3395,	// (0x00029d2a) popup_note2_image_window_t3_ParamLimits

0x3395,	// (0x00029d2a) popup_note2_image_window_t3

0x0002,

0xfb57,	// (0x000364ec) popup_note2_image_window_t_ParamLimits

0xfb57,	// (0x000364ec) popup_note2_image_window_t

0xd424,	// (0x00033db9) popup_note2_wait_window_g1_ParamLimits

0xd424,	// (0x00033db9) popup_note2_wait_window_g1

0xd430,	// (0x00033dc5) popup_note2_wait_window_g2_ParamLimits

0xd430,	// (0x00033dc5) popup_note2_wait_window_g2

0xd43c,	// (0x00033dd1) popup_note2_wait_window_g3_ParamLimits

0xd43c,	// (0x00033dd1) popup_note2_wait_window_g3

0x0002,

0xf854,	// (0x000361e9) popup_note2_wait_window_g_ParamLimits

0xf854,	// (0x000361e9) popup_note2_wait_window_g

0x33b1,	// (0x00029d46) popup_note2_wait_window_t1_ParamLimits

0x33b1,	// (0x00029d46) popup_note2_wait_window_t1

0x33cf,	// (0x00029d64) popup_note2_wait_window_t2_ParamLimits

0x33cf,	// (0x00029d64) popup_note2_wait_window_t2

0x33ed,	// (0x00029d82) popup_note2_wait_window_t3_ParamLimits

0x33ed,	// (0x00029d82) popup_note2_wait_window_t3

0x33ff,	// (0x00029d94) popup_note2_wait_window_t4_ParamLimits

0x33ff,	// (0x00029d94) popup_note2_wait_window_t4

0x0003,

0xfb5e,	// (0x000364f3) popup_note2_wait_window_t_ParamLimits

0xfb5e,	// (0x000364f3) popup_note2_wait_window_t

0x3411,	// (0x00029da6) wait_bar2_pane_ParamLimits

0x3411,	// (0x00029da6) wait_bar2_pane

0x3429,	// (0x00029dbe) popup_snote2_single_text_window_g1_ParamLimits

0x3429,	// (0x00029dbe) popup_snote2_single_text_window_g1

0x3451,	// (0x00029de6) popup_snote2_single_text_window_t1_ParamLimits

0x3451,	// (0x00029de6) popup_snote2_single_text_window_t1

0x349d,	// (0x00029e32) popup_snote2_single_text_window_t2_ParamLimits

0x349d,	// (0x00029e32) popup_snote2_single_text_window_t2

0x34e9,	// (0x00029e7e) popup_snote2_single_text_window_t3_ParamLimits

0x34e9,	// (0x00029e7e) popup_snote2_single_text_window_t3

0x352a,	// (0x00029ebf) popup_snote2_single_text_window_t4_ParamLimits

0x352a,	// (0x00029ebf) popup_snote2_single_text_window_t4

0x3560,	// (0x00029ef5) popup_snote2_single_text_window_t5_ParamLimits

0x3560,	// (0x00029ef5) popup_snote2_single_text_window_t5

0x0004,

0xfb67,	// (0x000364fc) popup_snote2_single_text_window_t_ParamLimits

0xfb67,	// (0x000364fc) popup_snote2_single_text_window_t

0x358b,	// (0x00029f20) popup_snote2_single_graphic_window_g1_ParamLimits

0x358b,	// (0x00029f20) popup_snote2_single_graphic_window_g1

0x35b3,	// (0x00029f48) popup_snote2_single_graphic_window_g2_ParamLimits

0x35b3,	// (0x00029f48) popup_snote2_single_graphic_window_g2

0x0001,

0xfb72,	// (0x00036507) popup_snote2_single_graphic_window_g_ParamLimits

0xfb72,	// (0x00036507) popup_snote2_single_graphic_window_g

0x35db,	// (0x00029f70) popup_snote2_single_graphic_window_t1_ParamLimits

0x35db,	// (0x00029f70) popup_snote2_single_graphic_window_t1

0x3627,	// (0x00029fbc) popup_snote2_single_graphic_window_t2_ParamLimits

0x3627,	// (0x00029fbc) popup_snote2_single_graphic_window_t2

0x34e9,	// (0x00029e7e) popup_snote2_single_graphic_window_t3_ParamLimits

0x34e9,	// (0x00029e7e) popup_snote2_single_graphic_window_t3

0x352a,	// (0x00029ebf) popup_snote2_single_graphic_window_t4_ParamLimits

0x352a,	// (0x00029ebf) popup_snote2_single_graphic_window_t4

0x3560,	// (0x00029ef5) popup_snote2_single_graphic_window_t5_ParamLimits

0x3560,	// (0x00029ef5) popup_snote2_single_graphic_window_t5

0x0004,

0xfb77,	// (0x0003650c) popup_snote2_single_graphic_window_t_ParamLimits

0xfb77,	// (0x0003650c) popup_snote2_single_graphic_window_t

0xe92c,	// (0x000352c1) clock_nsta_pane_cp2_t1

0xe92c,	// (0x000352c1) clock_nsta_pane_cp2_t2

0x0001,

0x015e,	// (0x00026af3) clock_nsta_pane_cp2_t

0x4734,	// (0x0002b0c9) form_field_data_wide_pane_g1_ParamLimits

0xbef4,	// (0x00032889) form_field_data_wide_pane_g2_ParamLimits

0xbef4,	// (0x00032889) form_field_data_wide_pane_g2

0xbf00,	// (0x00032895) form_field_data_wide_pane_g3_ParamLimits

0xbf00,	// (0x00032895) form_field_data_wide_pane_g3

0x0002,

0xf697,	// (0x0003602c) form_field_data_wide_pane_g_ParamLimits

0xf697,	// (0x0003602c) form_field_data_wide_pane_g

0xa28b,	// (0x00030c20) grid_touch_3_pane_ParamLimits

0xa28b,	// (0x00030c20) grid_touch_3_pane

0xa6c5,	// (0x0003105a) cell_touch_3_pane_ParamLimits

0xa6c5,	// (0x0003105a) cell_touch_3_pane

0xec1f,	// (0x000355b4) cell_touch_3_pane_g1

0xec1f,	// (0x000355b4) cell_touch_3_pane_g2

0x0001,

0x01e3,	// (0x00026b78) cell_touch_3_pane_g

0xba70,	// (0x00032405) cont_query_data_pane

0xba78,	// (0x0003240d) cont_query_data_pane_cp1

0x36a2,	// (0x0002a037) button_value_adjust_pane_cp7

0x36aa,	// (0x0002a03f) query_popup_pane_cp3

0xc46e,	// (0x00032e03) bg_popup_sub_pane_cp22_ParamLimits

0x10ee,	// (0x00027a83) navi_navi_volume_pane_cp2

0x1109,	// (0x00027a9e) popup_side_volume_key_window_g2

0x1118,	// (0x00027aad) popup_side_volume_key_window_g3

0x0002,

0xf729,	// (0x000360be) popup_side_volume_key_window_g

0x1135,	// (0x00027aca) popup_side_volume_key_window_t2

0x0001,

0xf730,	// (0x000360c5) popup_side_volume_key_window_t

0xc6be,	// (0x00033053) popup_side_volume_key_window_ParamLimits

0x7e9d,	// (0x0002e832) list_double_graphic_pane_g4_ParamLimits

0x7e9d,	// (0x0002e832) list_double_graphic_pane_g4

0x924c,	// (0x0002fbe1) list_single_2heading_msg_pane_ParamLimits

0x924c,	// (0x0002fbe1) list_single_2heading_msg_pane

0x926d,	// (0x0002fc02) list_single_2heading_msg_pane_g1_ParamLimits

0x926d,	// (0x0002fc02) list_single_2heading_msg_pane_g1

0x9279,	// (0x0002fc0e) list_single_2heading_msg_pane_g2_ParamLimits

0x9279,	// (0x0002fc0e) list_single_2heading_msg_pane_g2

0x928c,	// (0x0002fc21) list_single_2heading_msg_pane_g3_ParamLimits

0x928c,	// (0x0002fc21) list_single_2heading_msg_pane_g3

0x692f,	// (0x0002d2c4) list_single_2heading_msg_pane_g4_ParamLimits

0x692f,	// (0x0002d2c4) list_single_2heading_msg_pane_g4

0x0003,

0xfb82,	// (0x00036517) list_single_2heading_msg_pane_g_ParamLimits

0xfb82,	// (0x00036517) list_single_2heading_msg_pane_g

0x6947,	// (0x0002d2dc) list_single_2heading_msg_pane_t1_ParamLimits

0x6947,	// (0x0002d2dc) list_single_2heading_msg_pane_t1

0x9298,	// (0x0002fc2d) list_single_2heading_msg_pane_t2_ParamLimits

0x9298,	// (0x0002fc2d) list_single_2heading_msg_pane_t2

0x9303,	// (0x0002fc98) list_single_2heading_msg_pane_t3_ParamLimits

0x9303,	// (0x0002fc98) list_single_2heading_msg_pane_t3

0x69dc,	// (0x0002d371) list_single_2heading_msg_pane_t4_ParamLimits

0x69dc,	// (0x0002d371) list_single_2heading_msg_pane_t4

0x0003,

0xfb8b,	// (0x00036520) list_single_2heading_msg_pane_t_ParamLimits

0xfb8b,	// (0x00036520) list_single_2heading_msg_pane_t

0xb600,	// (0x00031f95) title_pane_g4_ParamLimits

0xb600,	// (0x00031f95) title_pane_g4

0x0e12,	// (0x000277a7) title_pane_stacon_g3_ParamLimits

0x0e12,	// (0x000277a7) title_pane_stacon_g3

0x31db,	// (0x00029b70) list_single_2graphic_im_pane_g4_ParamLimits

0x31db,	// (0x00029b70) list_single_2graphic_im_pane_g4

0xdd75,	// (0x0003470a) popup_side_volume_key_window_cp

0xe24d,	// (0x00034be2) main_idle_act2_pane_t1

0x1dab,	// (0x00028740) toolbar_button_pane_g10

0x8ca9,	// (0x0002f63e) popup_toolbar_window_cp1

0xe91d,	// (0x000352b2) clock_nsta_pane_cp_t1

0xe91d,	// (0x000352b2) clock_nsta_pane_cp_t2

0x0001,

0x0159,	// (0x00026aee) clock_nsta_pane_cp_t

0x10ee,	// (0x00027a83) navi_navi_volume_pane_cp2_ParamLimits

0x10fd,	// (0x00027a92) popup_side_volume_key_window_g1_ParamLimits

0x1109,	// (0x00027a9e) popup_side_volume_key_window_g2_ParamLimits

0x1118,	// (0x00027aad) popup_side_volume_key_window_g3_ParamLimits

0xf729,	// (0x000360be) popup_side_volume_key_window_g_ParamLimits

0x2aef,	// (0x00029484) fep_hwr_aid_pane

0x2b96,	// (0x0002952b) bg_fep_hwr_top_pane_g4_ParamLimits

0xec8f,	// (0x00035624) fep_hwr_top_pane_g1_ParamLimits

0xeca1,	// (0x00035636) fep_hwr_top_pane_g2_ParamLimits

0x2bb6,	// (0x0002954b) fep_hwr_top_pane_g3_ParamLimits

0xfa43,	// (0x000363d8) fep_hwr_top_pane_g_ParamLimits

0x2bcb,	// (0x00029560) fep_hwr_top_text_pane_ParamLimits

0xdb6a,	// (0x000344ff) aid_touch_tab_arrow_arrow_2

0xdb73,	// (0x00034508) aid_touch_tab_arrow_left_2

0x2b03,	// (0x00029498) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x2b3a,	// (0x000294cf) fep_hwr_prediction_pane

0xedf6,	// (0x0003578b) fep_vkb_prediction_pane

0xa4ac,	// (0x00030e41) fep_vkb_side_pane_g3_ParamLimits

0xa4ac,	// (0x00030e41) fep_vkb_side_pane_g3

0x2e30,	// (0x000297c5) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x2e9c,	// (0x00029831) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x2ea9,	// (0x0002983e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfac5,	// (0x0003645a) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x36cf,	// (0x0002a064) fep_hwr_prediction_pane_g1

0x36d9,	// (0x0002a06e) fep_hwr_prediction_pane_g2

0xec87,	// (0x0003561c) fep_hwr_prediction_pane_g3

0x36e1,	// (0x0002a076) fep_hwr_prediction_pane_g4

0x0003,

0xfb94,	// (0x00036529) fep_hwr_prediction_pane_g

0x36e9,	// (0x0002a07e) fep_vkb_prediction_pane_g1

0x36f3,	// (0x0002a088) fep_vkb_prediction_pane_g2

0x36fb,	// (0x0002a090) fep_vkb_prediction_pane_g3

0x3703,	// (0x0002a098) fep_vkb_prediction_pane_g4

0x0003,

0xfb9d,	// (0x00036532) fep_vkb_prediction_pane_g

0x238f,	// (0x00028d24) slider_set_pane_g3

0x23a3,	// (0x00028d38) slider_set_pane_g4

0x23bb,	// (0x00028d50) slider_set_pane_g5

0x238f,	// (0x00028d24) slider_set_pane_g6

0x23d1,	// (0x00028d66) slider_set_pane_g7

0xdfe2,	// (0x00034977) slider_form_pane_g3

0xdfeb,	// (0x00034980) slider_form_pane_g4

0xdff3,	// (0x00034988) slider_form_pane_g5

0xdfe2,	// (0x00034977) slider_form_pane_g6

0xa100,	// (0x00030a95) slider_form_pane_g7

0xe4eb,	// (0x00034e80) slider_set_pane_vc_g3

0xe4f4,	// (0x00034e89) slider_set_pane_vc_g4

0xe4fd,	// (0x00034e92) slider_set_pane_vc_g5

0xe4eb,	// (0x00034e80) slider_set_pane_vc_g6

0xe506,	// (0x00034e9b) slider_set_pane_vc_g7

0xe4eb,	// (0x00034e80) slider_form_pane_vc_g1

0xe4f4,	// (0x00034e89) slider_form_pane_vc_g2

0xe4fd,	// (0x00034e92) slider_form_pane_vc_g3

0xe4eb,	// (0x00034e80) slider_form_pane_vc_g4

0xe695,	// (0x0003502a) slider_form_pane_vc_g5

0x0004,

0x0132,	// (0x00026ac7) slider_form_pane_vc_g

0xb5e2,	// (0x00031f77) main_idle_act3_pane

0x370b,	// (0x0002a0a0) ai3_links_pane

0xa70e,	// (0x000310a3) popup_ai3_data_window_ParamLimits

0xa70e,	// (0x000310a3) popup_ai3_data_window

0xb5e2,	// (0x00031f77) grid_ai3_links_pane

0xa726,	// (0x000310bb) cell_ai3_links_pane_ParamLimits

0xa726,	// (0x000310bb) cell_ai3_links_pane

0x3744,	// (0x0002a0d9) bg_popup_sub_pane_cp11

0x3751,	// (0x0002a0e6) cell_ai3_links_pane_g1

0xb5e2,	// (0x00031f77) bg_popup_sub_pane_cp12

0x3776,	// (0x0002a10b) heading_ai3_data_pane

0x377e,	// (0x0002a113) list_ai3_gene_pane

0x378a,	// (0x0002a11f) popup_ai3_data_window_g1

0x3792,	// (0x0002a127) heading_ai3_data_pane_g1

0x379a,	// (0x0002a12f) heading_ai3_data_pane_t1

0x37a8,	// (0x0002a13d) list_double_ai3_gene_pane_ParamLimits

0x37a8,	// (0x0002a13d) list_double_ai3_gene_pane

0x37b5,	// (0x0002a14a) list_single_ai3_gene_pane_ParamLimits

0x37b5,	// (0x0002a14a) list_single_ai3_gene_pane

0xebe4,	// (0x00035579) list_highlight_pane_cp7_ParamLimits

0xebe4,	// (0x00035579) list_highlight_pane_cp7

0x37c2,	// (0x0002a157) list_single_a13_gene_pane_t1_ParamLimits

0x37c2,	// (0x0002a157) list_single_a13_gene_pane_t1

0x37d9,	// (0x0002a16e) list_single_ai3_gene_pane_g1

0x37e2,	// (0x0002a177) list_single_ai3_gene_pane_g2

0x0001,

0xfba6,	// (0x0003653b) list_single_ai3_gene_pane_g

0x37ea,	// (0x0002a17f) list_double_ai3_gene_pane_g1_ParamLimits

0x37ea,	// (0x0002a17f) list_double_ai3_gene_pane_g1

0x37f6,	// (0x0002a18b) list_double_ai3_gene_pane_t1_ParamLimits

0x37f6,	// (0x0002a18b) list_double_ai3_gene_pane_t1

0x3812,	// (0x0002a1a7) list_double_ai3_gene_pane_t2_ParamLimits

0x3812,	// (0x0002a1a7) list_double_ai3_gene_pane_t2

0x3827,	// (0x0002a1bc) list_double_ai3_gene_pane_t3_ParamLimits

0x3827,	// (0x0002a1bc) list_double_ai3_gene_pane_t3

0x0002,

0xfbab,	// (0x00036540) list_double_ai3_gene_pane_t_ParamLimits

0xfbab,	// (0x00036540) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x6919,	// (0x0002d2ae) aid_size_min_col_2

0xa6f8,	// (0x0003108d) aid_size_min_msg_ParamLimits

0xa6f8,	// (0x0003108d) aid_size_min_msg

0xa4c0,	// (0x00030e55) fep_vkb_top_text_pane_g2_ParamLimits

0xa4c0,	// (0x00030e55) fep_vkb_top_text_pane_g2

0x0001,

0xfa65,	// (0x000363fa) fep_vkb_top_text_pane_g_ParamLimits

0xfa65,	// (0x000363fa) fep_vkb_top_text_pane_g

0xb5e2,	// (0x00031f77) main_hc_apps_shell_pane

0x3844,	// (0x0002a1d9) grid_hc_apps_pane_ParamLimits

0x3844,	// (0x0002a1d9) grid_hc_apps_pane

0x3853,	// (0x0002a1e8) list_hc_apps_pane

0x385b,	// (0x0002a1f0) scroll_pane_cp37_ParamLimits

0x385b,	// (0x0002a1f0) scroll_pane_cp37

0xa740,	// (0x000310d5) cell_hc_apps_pane_ParamLimits

0xa740,	// (0x000310d5) cell_hc_apps_pane

0xa800,	// (0x00031195) cell_hc_apps_pane_g1_ParamLimits

0xa800,	// (0x00031195) cell_hc_apps_pane_g1

0x3948,	// (0x0002a2dd) cell_hc_apps_pane_g2_ParamLimits

0x3948,	// (0x0002a2dd) cell_hc_apps_pane_g2

0x4761,	// (0x0002b0f6) cell_hc_apps_pane_g3_ParamLimits

0x4761,	// (0x0002b0f6) cell_hc_apps_pane_g3

0x0002,

0xfbb2,	// (0x00036547) cell_hc_apps_pane_g_ParamLimits

0xfbb2,	// (0x00036547) cell_hc_apps_pane_g

0xa82d,	// (0x000311c2) cell_hc_apps_pane_t1_ParamLimits

0xa82d,	// (0x000311c2) cell_hc_apps_pane_t1

0xb785,	// (0x0003211a) grid_highlight_pane_cp10_ParamLimits

0xb785,	// (0x0003211a) grid_highlight_pane_cp10

0xa86b,	// (0x00031200) list_single_hc_apps_pane_ParamLimits

0xa86b,	// (0x00031200) list_single_hc_apps_pane

0x4836,	// (0x0002b1cb) list_single_hc_apps_pane_g1

0x6a01,	// (0x0002d396) list_single_hc_apps_pane_g2

0x0001,

0xfbb9,	// (0x0003654e) list_single_hc_apps_pane_g

0x6a1a,	// (0x0002d3af) list_single_hc_apps_pane_g2_copy1

0x6a36,	// (0x0002d3cb) list_single_hc_apps_pane_t1

0xb652,	// (0x00031fe7) bg_set_opt_pane_cp_ParamLimits

0x0ad1,	// (0x00027466) setting_slider_pane_t1_ParamLimits

0x0aea,	// (0x0002747f) setting_slider_pane_t2_ParamLimits

0x0b03,	// (0x00027498) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x00035f0f) setting_slider_pane_t_ParamLimits

0x0b1a,	// (0x000274af) slider_set_pane_ParamLimits

0x14ce,	// (0x00027e63) control_pane_g5_ParamLimits

0x14ce,	// (0x00027e63) control_pane_g5

0xdfa4,	// (0x00034939) slider_set_pane_g1_ParamLimits

0x2383,	// (0x00028d18) slider_set_pane_g2_ParamLimits

0x238f,	// (0x00028d24) slider_set_pane_g3_ParamLimits

0x23a3,	// (0x00028d38) slider_set_pane_g4_ParamLimits

0x23bb,	// (0x00028d50) slider_set_pane_g5_ParamLimits

0x238f,	// (0x00028d24) slider_set_pane_g6_ParamLimits

0x23d1,	// (0x00028d66) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x00036300) slider_set_pane_g_ParamLimits

0xc79f,	// (0x00033134) navi_icon_text_pane_ParamLimits

0x992e,	// (0x000302c3) aid_fill_nsta_2_ParamLimits

0x9962,	// (0x000302f7) aid_touch_tab_arrow_left_ParamLimits

0x9978,	// (0x0003030d) aid_touch_tab_arrow_right_ParamLimits

0x9a13,	// (0x000303a8) clock_nsta_pane_ParamLimits

0x9ea8,	// (0x0003083d) navi_icon_pane_g1_ParamLimits

0x9eb4,	// (0x00030849) navi_text_pane_t1_ParamLimits

0xa357,	// (0x00030cec) navi_icon_text_pane_g1_ParamLimits

0xa363,	// (0x00030cf8) navi_icon_text_pane_t1_ParamLimits

0x4836,	// (0x0002b1cb) list_single_hc_apps_pane_g1_ParamLimits

0x6a01,	// (0x0002d396) list_single_hc_apps_pane_g2_ParamLimits

0xfbb9,	// (0x0003654e) list_single_hc_apps_pane_g_ParamLimits

0x6a1a,	// (0x0002d3af) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x6a36,	// (0x0002d3cb) list_single_hc_apps_pane_t1_ParamLimits

0x7d3f,	// (0x0002e6d4) popup_toolbar2_fixed_window_ParamLimits

0x7d3f,	// (0x0002e6d4) popup_toolbar2_fixed_window

0x9897,	// (0x0003022c) popup_toolbar2_float_window

0xb5e2,	// (0x00031f77) bg_popup_sub_pane_cp27

0x484f,	// (0x0002b1e4) grid_toolbar2_float_pane

0xb5e2,	// (0x00031f77) bg_popup_sub_pane_cp26

0x484f,	// (0x0002b1e4) grid_toolbar2_fixed_pane

0xa89e,	// (0x00031233) cell_toolbar2_fixed_pane_ParamLimits

0xa89e,	// (0x00031233) cell_toolbar2_fixed_pane

0xa8b9,	// (0x0003124e) cell_toolbar2_fixed_pane_g1

0x4871,	// (0x0002b206) toolbar2_fixed_button_pane

0xce69,	// (0x000337fe) toolbar2_fixed_button_pane_g1

0xce79,	// (0x0003380e) toolbar2_fixed_button_pane_g2

0xce71,	// (0x00033806) toolbar2_fixed_button_pane_g3

0xce89,	// (0x0003381e) toolbar2_fixed_button_pane_g4

0xce81,	// (0x00033816) toolbar2_fixed_button_pane_g5

0xce91,	// (0x00033826) toolbar2_fixed_button_pane_g6

0xce99,	// (0x0003382e) toolbar2_fixed_button_pane_g7

0xcea9,	// (0x0003383e) toolbar2_fixed_button_pane_g8

0xcea1,	// (0x00033836) toolbar2_fixed_button_pane_g9

0x0008,

0xf872,	// (0x00036207) toolbar2_fixed_button_pane_g

0x4879,	// (0x0002b20e) cell_toolbar2_float_pane_ParamLimits

0x4879,	// (0x0002b20e) cell_toolbar2_float_pane

0x488a,	// (0x0002b21f) cell_toolbar2_float_pane_g1

0x4871,	// (0x0002b206) toolbar2_fixed_button_pane_cp

0xa473,	// (0x00030e08) fep_vkb_accented_list_pane_ParamLimits

0xa473,	// (0x00030e08) fep_vkb_accented_list_pane

0x2e10,	// (0x000297a5) bg_popup_fep_shadow_pane_g9

0xc921,	// (0x000332b6) bg_popup_fep_shadow_pane_cp3

0xbfe0,	// (0x00032975) list_accented_list_pane

0x4893,	// (0x0002b228) list_single_accented_list_pane_ParamLimits

0x4893,	// (0x0002b228) list_single_accented_list_pane

0xc921,	// (0x000332b6) list_highlight_pane_cp10

0x48a4,	// (0x0002b239) list_single_accented_list_pane_t1

0x97c1,	// (0x00030156) popup_slider_window_ParamLimits

0x97c1,	// (0x00030156) popup_slider_window

0x36b2,	// (0x0002a047) aid_indentation_list_msg

0xa9b2,	// (0x00031347) bg_popup_window_pane_cp19

0x49c8,	// (0x0002b35d) popup_slider_window_g1

0x49e4,	// (0x0002b379) popup_slider_window_g2

0x4a00,	// (0x0002b395) popup_slider_window_g3

0x0005,

0xfbbe,	// (0x00036553) popup_slider_window_g

0x4a5c,	// (0x0002b3f1) popup_slider_window_t1

0x4ad0,	// (0x0002b465) small_volume_slider_vertical_pane

0xec1f,	// (0x000355b4) small_volume_slider_vertical_pane_g1

0xec1f,	// (0x000355b4) small_volume_slider_vertical_pane_g2

0x4aec,	// (0x0002b481) small_volume_slider_vertical_pane_g3

0x0002,

0xfbd0,	// (0x00036565) small_volume_slider_vertical_pane_g

0x7cad,	// (0x0002e642) area_side_right_pane_ParamLimits

0x7cad,	// (0x0002e642) area_side_right_pane

0x84f7,	// (0x0002ee8c) aid_size_side_button_ParamLimits

0x84f7,	// (0x0002ee8c) aid_size_side_button

0x8510,	// (0x0002eea5) grid_sctrl_middle_pane_ParamLimits

0x8510,	// (0x0002eea5) grid_sctrl_middle_pane

0x3998,	// (0x0002a32d) sctrl_sk_bottom_pane

0x39a9,	// (0x0002a33e) sctrl_sk_top_pane

0x39bb,	// (0x0002a350) aid_touch_sctrl_top

0x39c8,	// (0x0002a35d) bg_sctrl_sk_pane_ParamLimits

0x39c8,	// (0x0002a35d) bg_sctrl_sk_pane

0x39d6,	// (0x0002a36b) sctrl_sk_top_pane_g1

0x39e3,	// (0x0002a378) sctrl_sk_top_pane_t1

0x39bb,	// (0x0002a350) aid_touch_sctrl_bottom

0x39c8,	// (0x0002a35d) bg_sctrl_sk_pane_cp_ParamLimits

0x39c8,	// (0x0002a35d) bg_sctrl_sk_pane_cp

0x39fe,	// (0x0002a393) sctrl_sk_bottom_pane_g1

0x39e3,	// (0x0002a378) sctrl_sk_bottom_pane_t1

0x852a,	// (0x0002eebf) cell_sctrl_middle_pane_ParamLimits

0x852a,	// (0x0002eebf) cell_sctrl_middle_pane

0x853b,	// (0x0002eed0) aid_touch_sctrl_middle_ParamLimits

0x853b,	// (0x0002eed0) aid_touch_sctrl_middle

0x8548,	// (0x0002eedd) bg_sctrl_middle_pane_ParamLimits

0x8548,	// (0x0002eedd) bg_sctrl_middle_pane

0x4067,	// (0x0002a9fc) cell_sctrl_middle_pane_g1_ParamLimits

0x4067,	// (0x0002a9fc) cell_sctrl_middle_pane_g1

0x8556,	// (0x0002eeeb) cell_sctrl_middle_pane_g2_ParamLimits

0x8556,	// (0x0002eeeb) cell_sctrl_middle_pane_g2

0x0001,

0xfbdc,	// (0x00036571) cell_sctrl_middle_pane_g_ParamLimits

0xfbdc,	// (0x00036571) cell_sctrl_middle_pane_g

0xce69,	// (0x000337fe) bg_sctrl_middle_pane_g1

0xce71,	// (0x00033806) bg_sctrl_middle_pane_g2

0xce79,	// (0x0003380e) bg_sctrl_middle_pane_g3

0xce81,	// (0x00033816) bg_sctrl_middle_pane_g4

0xce89,	// (0x0003381e) bg_sctrl_middle_pane_g5

0xce91,	// (0x00033826) bg_sctrl_middle_pane_g6

0xce99,	// (0x0003382e) bg_sctrl_middle_pane_g7

0xcea1,	// (0x00033836) bg_sctrl_middle_pane_g8

0x0007,

0x03a1,	// (0x00026d36) bg_sctrl_middle_pane_g

0xcea9,	// (0x0003383e) bg_sctrl_middle_pane_g8_copy1

0xce69,	// (0x000337fe) bg_sctrl_sk_pane_g1

0xce79,	// (0x0003380e) bg_sctrl_sk_pane_g2

0xce71,	// (0x00033806) bg_sctrl_sk_pane_g3

0x0008,

0xf872,	// (0x00036207) bg_sctrl_sk_pane_g

0xbe13,	// (0x000327a8) aid_size_touch_scroll_bar

0xce89,	// (0x0003381e) bg_sctrl_sk_pane_g4

0xce81,	// (0x00033816) bg_sctrl_sk_pane_g5

0xce91,	// (0x00033826) bg_sctrl_sk_pane_g6

0xce99,	// (0x0003382e) bg_sctrl_sk_pane_g7

0xcea9,	// (0x0003383e) bg_sctrl_sk_pane_g8

0xcea1,	// (0x00033836) bg_sctrl_sk_pane_g9

0xcb9d,	// (0x00033532) popup_fep_china_hwr2_fs_candidate_window

0x9179,	// (0x0002fb0e) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x9179,	// (0x0002fb0e) popup_fep_china_hwr2_fs_control_window

0x2e30,	// (0x000297c5) sctrl_sk_top_pane_g2

0x0001,

0xfbd7,	// (0x0003656c) sctrl_sk_top_pane_g

0xaa6a,	// (0x000313ff) aid_fep_china_hwr2_fs_cell_ParamLimits

0xaa6a,	// (0x000313ff) aid_fep_china_hwr2_fs_cell

0xaa7e,	// (0x00031413) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xaa7e,	// (0x00031413) bg_popup_fep_shadow_pane_cp4

0xaa95,	// (0x0003142a) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xaa95,	// (0x0003142a) bg_popup_fep_shadow_pane_cp5

0xaaa7,	// (0x0003143c) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xaaa7,	// (0x0003143c) popup_fep_china_hwr2_fs_control_bar_grid

0xaabb,	// (0x00031450) popup_fep_china_hwr2_fs_control_funtion_grid

0x4b48,	// (0x0002b4dd) aid_fep_china_hwr2_fs_candi_cell

0xb5e2,	// (0x00031f77) bg_popup_fep_shadow_pane_cp6

0x4b52,	// (0x0002b4e7) popup_fep_china_hwr2_fs_candidate_grid

0xaac3,	// (0x00031458) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xaac3,	// (0x00031458) cell_fep_china_hwr2_fs_funtion_grid

0xec1f,	// (0x000355b4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x4b74,	// (0x0002b509) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x4b74,	// (0x0002b509) cell_fep_china_hwr2_fs_funtion_grid_g1

0x4b82,	// (0x0002b517) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x4b82,	// (0x0002b517) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfbe1,	// (0x00036576) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfbe1,	// (0x00036576) cell_fep_china_hwr2_fs_funtion_grid_g

0xaadb,	// (0x00031470) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xaadb,	// (0x00031470) cell_fep_china_hwr2_fs_funtion_grid_t1

0xaaf0,	// (0x00031485) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xaaf0,	// (0x00031485) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfbe6,	// (0x0003657b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfbe6,	// (0x0003657b) cell_fep_china_hwr2_fs_funtion_grid_t

0x4bc9,	// (0x0002b55e) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x4bd1,	// (0x0002b566) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x4bd9,	// (0x0002b56e) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfbeb,	// (0x00036580) popup_fep_china_hwr2_fs_control_bar_grid_g

0x4be1,	// (0x0002b576) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x4be1,	// (0x0002b576) cell_fep_china_hwr2_fs_candidate_grid

0x4bfa,	// (0x0002b58f) popup_fep_china_hwr2_fs_candidate_grid_g20

0x4c02,	// (0x0002b597) popup_fep_china_hwr2_fs_candidate_grid_g21

0xec1f,	// (0x000355b4) cell_fep_china_hwr2_fs_candidate_grid_g1

0xec1f,	// (0x000355b4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0x01e3,	// (0x00026b78) cell_fep_china_hwr2_fs_candidate_grid_g

0x4c0a,	// (0x0002b59f) cell_fep_china_hwr2_fs_candidate_grid_t1

0xccaa,	// (0x0003363f) clock_nsta_pane_cp_24_ParamLimits

0xccaa,	// (0x0003363f) clock_nsta_pane_cp_24

0xcd12,	// (0x000336a7) indicator_nsta_pane_cp_24_ParamLimits

0xcd12,	// (0x000336a7) indicator_nsta_pane_cp_24

0xda74,	// (0x00034409) heading_pane_g1

0x0001,

0xf8d7,	// (0x0003626c) heading_pane_g

0xe0d8,	// (0x00034a6d) grid_sct_catagory_button_pane

0xd9d8,	// (0x0003436d) scroll_pane_cp5_ParamLimits

0xe988,	// (0x0003531d) button_value_adjust_pane_cp5_ParamLimits

0xe988,	// (0x0003531d) button_value_adjust_pane_cp5

0xea46,	// (0x000353db) form2_midp_time_pane_ParamLimits

0x4c18,	// (0x0002b5ad) cell_sct_catagory_button_pane_ParamLimits

0x4c18,	// (0x0002b5ad) cell_sct_catagory_button_pane

0xebe4,	// (0x00035579) bg_button_pane_cp01_ParamLimits

0xebe4,	// (0x00035579) bg_button_pane_cp01

0xec1f,	// (0x000355b4) cell_sct_catagory_button_pane_g1

0x983a,	// (0x000301cf) popup_tb_extension_window

0xab0c,	// (0x000314a1) aid_size_cell_ext_ParamLimits

0xab0c,	// (0x000314a1) aid_size_cell_ext

0xbc55,	// (0x000325ea) bg_tb_trans_pane_cp1_ParamLimits

0xbc55,	// (0x000325ea) bg_tb_trans_pane_cp1

0xab32,	// (0x000314c7) grid_tb_ext_pane_ParamLimits

0xab32,	// (0x000314c7) grid_tb_ext_pane

0xab72,	// (0x00031507) cell_tb_ext_pane_ParamLimits

0xab72,	// (0x00031507) cell_tb_ext_pane

0xab9a,	// (0x0003152f) cell_tb_ext_pane_g1_ParamLimits

0xab9a,	// (0x0003152f) cell_tb_ext_pane_g1

0x4cb0,	// (0x0002b645) cell_tb_ext_pane_t1

0xb785,	// (0x0003211a) list_highlight_pane_cp11_ParamLimits

0xb785,	// (0x0003211a) list_highlight_pane_cp11

0x0944,	// (0x000272d9) popup_uni_indicator_window_ParamLimits

0x0944,	// (0x000272d9) popup_uni_indicator_window

0xbeda,	// (0x0003286f) bg_popup_sub_pane_cp14

0x4ccb,	// (0x0002b660) list_uniindi_pane

0x4cd7,	// (0x0002b66c) uniindi_top_pane

0xb785,	// (0x0003211a) bg_uniindi_top_pane

0x4cf6,	// (0x0002b68b) uniindi_top_pane_g1

0x4d0c,	// (0x0002b6a1) uniindi_top_pane_g2

0x0003,

0xfbf2,	// (0x00036587) uniindi_top_pane_g

0x4d36,	// (0x0002b6cb) uniindi_top_pane_t1

0x4d60,	// (0x0002b6f5) list_single_uniindi_pane_ParamLimits

0x4d60,	// (0x0002b6f5) list_single_uniindi_pane

0xec1f,	// (0x000355b4) bg_uniindi_top_pane_g1

0x4d72,	// (0x0002b707) list_single_uniindi_pane_g1

0x4d85,	// (0x0002b71a) list_single_uniindi_pane_t1

0x07c8,	// (0x0002715d) control_bg_pane

0x4daa,	// (0x0002b73f) bg_sctrl_sk_pane_cp1

0x4db3,	// (0x0002b748) bg_sctrl_sk_pane_cp2

0x4dbc,	// (0x0002b751) control_bg_pane_g1

0x4dc5,	// (0x0002b75a) control_bg_pane_g2

0x0001,

0xfbfb,	// (0x00036590) control_bg_pane_g

0xe85f,	// (0x000351f4) cell_indicator_nsta_pane_g1_ParamLimits

0xa2be,	// (0x00030c53) cell_indicator_nsta_pane_g2_ParamLimits

0xfa0d,	// (0x000363a2) cell_indicator_nsta_pane_g_ParamLimits

0x66d6,	// (0x0002d06b) form2_midp_time_pane_t1_ParamLimits

0x82dd,	// (0x0002ec72) main_idle_act4_pane_ParamLimits

0x82dd,	// (0x0002ec72) main_idle_act4_pane

0x983a,	// (0x000301cf) popup_tb_extension_window_ParamLimits

0xab59,	// (0x000314ee) tb_ext_find_pane_ParamLimits

0xab59,	// (0x000314ee) tb_ext_find_pane

0x4dce,	// (0x0002b763) ai_gene_pane_1_cp1

0xc9a3,	// (0x00033338) ai_gene_pane_2_cp1

0x4dd6,	// (0x0002b76b) list_single_idle_plugin_calendar_pane

0x4ddf,	// (0x0002b774) list_single_idle_plugin_notification_pane

0x4de8,	// (0x0002b77d) list_single_idle_plugin_player_pane

0xabb7,	// (0x0003154c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xabb7,	// (0x0003154c) list_single_idle_plugin_shortcut_pane

0xabdf,	// (0x00031574) main_idle_act4_pane_t1

0xabf5,	// (0x0003158a) main_idle_act4_pane_t2

0x0001,

0xfc00,	// (0x00036595) main_idle_act4_pane_t

0xac0d,	// (0x000315a2) middle_sk_idle_act4_pane_ParamLimits

0xac0d,	// (0x000315a2) middle_sk_idle_act4_pane

0xac29,	// (0x000315be) popup_clock_digital_analogue_window_cp2

0xac50,	// (0x000315e5) shortcut_wheel_idle_act4_pane_ParamLimits

0xac50,	// (0x000315e5) shortcut_wheel_idle_act4_pane

0xec1f,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g1

0xec1f,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g2

0xec1f,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g3

0xec1f,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g4

0xec1f,	// (0x000355b4) shortcut_wheel_idle_act4_pane_g5

0x4e7b,	// (0x0002b810) shortcut_wheel_idle_act4_pane_g6

0x4e83,	// (0x0002b818) shortcut_wheel_idle_act4_pane_g7

0x4e8b,	// (0x0002b820) shortcut_wheel_idle_act4_pane_g8

0x4e93,	// (0x0002b828) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfc05,	// (0x0003659a) shortcut_wheel_idle_act4_pane_g

0x8562,	// (0x0002eef7) middle_sk_idle_act4_pane_g1_ParamLimits

0x8562,	// (0x0002eef7) middle_sk_idle_act4_pane_g1

0xaccd,	// (0x00031662) middle_sk_idle_act4_pane_g2_ParamLimits

0xaccd,	// (0x00031662) middle_sk_idle_act4_pane_g2

0x0001,

0xfc28,	// (0x000365bd) middle_sk_idle_act4_pane_g_ParamLimits

0xfc28,	// (0x000365bd) middle_sk_idle_act4_pane_g

0xace5,	// (0x0003167a) middle_sk_idle_act4_pane_t1_ParamLimits

0xace5,	// (0x0003167a) middle_sk_idle_act4_pane_t1

0xad14,	// (0x000316a9) grid_ai_shortcut_pane_ParamLimits

0xad14,	// (0x000316a9) grid_ai_shortcut_pane

0xad31,	// (0x000316c6) list_highlight_pane_cp16_ParamLimits

0xad31,	// (0x000316c6) list_highlight_pane_cp16

0xad3e,	// (0x000316d3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xad3e,	// (0x000316d3) list_single_idle_plugin_shortcut_pane_g1

0xad4a,	// (0x000316df) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xad4a,	// (0x000316df) list_single_idle_plugin_shortcut_pane_g2

0xad66,	// (0x000316fb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xad66,	// (0x000316fb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfc2d,	// (0x000365c2) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfc2d,	// (0x000365c2) list_single_idle_plugin_shortcut_pane_g

0xad7b,	// (0x00031710) cell_ai_shortcut_pane_ParamLimits

0xad7b,	// (0x00031710) cell_ai_shortcut_pane

0xad91,	// (0x00031726) cell_ai_shortcut_pane_g1_ParamLimits

0xad91,	// (0x00031726) cell_ai_shortcut_pane_g1

0x4dce,	// (0x0002b763) ai_gene_pane_1_cp2

0x4fc0,	// (0x0002b955) ai_gene_pane_2_cp2

0x4fc8,	// (0x0002b95d) list_highlight_pane_cp15

0x4fd1,	// (0x0002b966) list_single_idle_plugin_calendar_pane_g1

0x4fc8,	// (0x0002b95d) list_highlight_pane_cp17

0x4fd9,	// (0x0002b96e) list_single_idle_plugin_calendar_pane_g1_copy1

0x4fe1,	// (0x0002b976) list_single_idle_plugin_player_pane_g1

0xe2ed,	// (0x00034c82) list_single_idle_plugin_player_pane_g2

0x0001,

0xfc34,	// (0x000365c9) list_single_idle_plugin_player_pane_g

0x4fe9,	// (0x0002b97e) list_single_idle_plugin_player_pane_t1

0x4ff7,	// (0x0002b98c) list_single_idle_plugin_player_pane_t2

0x5005,	// (0x0002b99a) list_single_idle_plugin_player_pane_t3

0x5013,	// (0x0002b9a8) list_single_idle_plugin_player_pane_t4

0x0003,

0xfc39,	// (0x000365ce) list_single_idle_plugin_player_pane_t

0x5021,	// (0x0002b9b6) wait_bar_pane_cp15

0x5029,	// (0x0002b9be) grid_ai_notification_pane

0xe2ed,	// (0x00034c82) list_single_idle_plugin_notification_pane_g1

0xadb3,	// (0x00031748) cell_ai_notification_pane_ParamLimits

0xadb3,	// (0x00031748) cell_ai_notification_pane

0x503f,	// (0x0002b9d4) cell_ai_notification_pane_g1

0x5047,	// (0x0002b9dc) cell_ai_notification_pane_t1

0xadc0,	// (0x00031755) tb_ext_find_button_pane

0xadc8,	// (0x0003175d) tb_ext_find_pane_g1

0xadd0,	// (0x00031765) tb_ext_find_pane_t1

0xc412,	// (0x00032da7) tb_ext_find_button_pane_g1

0x5073,	// (0x0002ba08) tb_ext_find_button_pane_g2

0x0001,

0xfc42,	// (0x000365d7) tb_ext_find_button_pane_g

0xabdf,	// (0x00031574) main_idle_act4_pane_t1_ParamLimits

0xabf5,	// (0x0003158a) main_idle_act4_pane_t2_ParamLimits

0xfc00,	// (0x00036595) main_idle_act4_pane_t_ParamLimits

0xac29,	// (0x000315be) popup_clock_digital_analogue_window_cp2_ParamLimits

0xac40,	// (0x000315d5) sat_plugin_idle_act4_pane_ParamLimits

0xac40,	// (0x000315d5) sat_plugin_idle_act4_pane

0xadde,	// (0x00031773) sat_plugin_idle_act4_pane_t1_ParamLimits

0xadde,	// (0x00031773) sat_plugin_idle_act4_pane_t1

0xadf6,	// (0x0003178b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xadf6,	// (0x0003178b) sat_plugin_idle_act4_pane_t2

0xae0e,	// (0x000317a3) sat_plugin_idle_act4_pane_t3_ParamLimits

0xae0e,	// (0x000317a3) sat_plugin_idle_act4_pane_t3

0xae26,	// (0x000317bb) sat_plugin_idle_act4_pane_t4_ParamLimits

0xae26,	// (0x000317bb) sat_plugin_idle_act4_pane_t4

0x0003,

0xfc47,	// (0x000365dc) sat_plugin_idle_act4_pane_t_ParamLimits

0xfc47,	// (0x000365dc) sat_plugin_idle_act4_pane_t

0x088d,	// (0x00027222) popup_battery_window_ParamLimits

0x088d,	// (0x00027222) popup_battery_window

0xb785,	// (0x0003211a) bg_popup_sub_pane_cp25_ParamLimits

0xb785,	// (0x0003211a) bg_popup_sub_pane_cp25

0x50c8,	// (0x0002ba5d) popup_battery_window_g1_ParamLimits

0x50c8,	// (0x0002ba5d) popup_battery_window_g1

0x50d4,	// (0x0002ba69) popup_battery_window_t1_ParamLimits

0x50d4,	// (0x0002ba69) popup_battery_window_t1

0x50e6,	// (0x0002ba7b) popup_battery_window_t2_ParamLimits

0x50e6,	// (0x0002ba7b) popup_battery_window_t2

0x0001,

0xfc50,	// (0x000365e5) popup_battery_window_t_ParamLimits

0xfc50,	// (0x000365e5) popup_battery_window_t

0x9010,	// (0x0002f9a5) midp_canvas_pane_ParamLimits

0x906d,	// (0x0002fa02) midp_keypad_pane_ParamLimits

0x906d,	// (0x0002fa02) midp_keypad_pane

0xc031,	// (0x000329c6) main_midp_pane_ParamLimits

0xe93b,	// (0x000352d0) signal_pane_g2_cp_ParamLimits

0xae3e,	// (0x000317d3) aid_size_cell_midp_keypad_ParamLimits

0xae3e,	// (0x000317d3) aid_size_cell_midp_keypad

0xae5c,	// (0x000317f1) midp_keyp_game_grid_pane_ParamLimits

0xae5c,	// (0x000317f1) midp_keyp_game_grid_pane

0xae83,	// (0x00031818) midp_keyp_rocker_pane_ParamLimits

0xae83,	// (0x00031818) midp_keyp_rocker_pane

0xaedc,	// (0x00031871) midp_keyp_sk_left_pane_ParamLimits

0xaedc,	// (0x00031871) midp_keyp_sk_left_pane

0xaf30,	// (0x000318c5) midp_keyp_sk_right_pane_ParamLimits

0xaf30,	// (0x000318c5) midp_keyp_sk_right_pane

0xb5e2,	// (0x00031f77) bg_button_pane_cp03

0xaf84,	// (0x00031919) midp_keyp_sk_left_pane_g1

0xb5e2,	// (0x00031f77) bg_button_pane_cp04

0xaf84,	// (0x00031919) midp_keyp_sk_right_pane_g1

0xec1f,	// (0x000355b4) midp_keyp_rocker_pane_g1

0xaf8d,	// (0x00031922) keyp_game_cell_pane_ParamLimits

0xaf8d,	// (0x00031922) keyp_game_cell_pane

0xb5e2,	// (0x00031f77) bg_button_pane_cp02

0xafb1,	// (0x00031946) keyp_game_cell_pane_g1

0x7cef,	// (0x0002e684) popup_fep_vkb2_window_ParamLimits

0x7cef,	// (0x0002e684) popup_fep_vkb2_window

0x8570,	// (0x0002ef05) aid_size_cell_vkb2_ParamLimits

0x8570,	// (0x0002ef05) aid_size_cell_vkb2

0x85a6,	// (0x0002ef3b) popup_fep_vkb2_window_g1_ParamLimits

0x85a6,	// (0x0002ef3b) popup_fep_vkb2_window_g1

0x85ed,	// (0x0002ef82) vkb2_area_bottom_pane_ParamLimits

0x85ed,	// (0x0002ef82) vkb2_area_bottom_pane

0x8641,	// (0x0002efd6) vkb2_area_keypad_pane_ParamLimits

0x8641,	// (0x0002efd6) vkb2_area_keypad_pane

0x8689,	// (0x0002f01e) vkb2_area_top_pane_ParamLimits

0x8689,	// (0x0002f01e) vkb2_area_top_pane

0x870f,	// (0x0002f0a4) vkb2_top_entry_pane_ParamLimits

0x870f,	// (0x0002f0a4) vkb2_top_entry_pane

0x873c,	// (0x0002f0d1) vkb2_top_grid_left_pane_ParamLimits

0x873c,	// (0x0002f0d1) vkb2_top_grid_left_pane

0x875c,	// (0x0002f0f1) vkb2_top_grid_right_pane_ParamLimits

0x875c,	// (0x0002f0f1) vkb2_top_grid_right_pane

0x3c62,	// (0x0002a5f7) vkb2_cell_keypad_pane_ParamLimits

0x3c62,	// (0x0002a5f7) vkb2_cell_keypad_pane

0x87a2,	// (0x0002f137) vkb2_area_bottom_grid_pane_ParamLimits

0x87a2,	// (0x0002f137) vkb2_area_bottom_grid_pane

0x87cc,	// (0x0002f161) vkb2_area_bottom_pane_g1_ParamLimits

0x87cc,	// (0x0002f161) vkb2_area_bottom_pane_g1

0x87f2,	// (0x0002f187) vkb2_area_bottom_pane_g2_ParamLimits

0x87f2,	// (0x0002f187) vkb2_area_bottom_pane_g2

0x8823,	// (0x0002f1b8) vkb2_area_bottom_pane_g3_ParamLimits

0x8823,	// (0x0002f1b8) vkb2_area_bottom_pane_g3

0x0002,

0xfc55,	// (0x000365ea) vkb2_area_bottom_pane_g_ParamLimits

0xfc55,	// (0x000365ea) vkb2_area_bottom_pane_g

0x3e0c,	// (0x0002a7a1) vkb2_top_cell_left_pane_ParamLimits

0x3e0c,	// (0x0002a7a1) vkb2_top_cell_left_pane

0xafba,	// (0x0003194f) vkb2_top_entry_pane_g1_ParamLimits

0xafba,	// (0x0003194f) vkb2_top_entry_pane_g1

0xafc8,	// (0x0003195d) vkb2_top_entry_pane_t1_ParamLimits

0xafc8,	// (0x0003195d) vkb2_top_entry_pane_t1

0x5297,	// (0x0002bc2c) vkb2_top_entry_pane_t2_ParamLimits

0x5297,	// (0x0002bc2c) vkb2_top_entry_pane_t2

0x52c9,	// (0x0002bc5e) vkb2_top_entry_pane_t3_ParamLimits

0x52c9,	// (0x0002bc5e) vkb2_top_entry_pane_t3

0x0002,

0xfc5c,	// (0x000365f1) vkb2_top_entry_pane_t_ParamLimits

0xfc5c,	// (0x000365f1) vkb2_top_entry_pane_t

0x888d,	// (0x0002f222) vkb2_top_grid_right_pane_g1_ParamLimits

0x888d,	// (0x0002f222) vkb2_top_grid_right_pane_g1

0x3e6f,	// (0x0002a804) vkb2_top_grid_right_pane_g2_ParamLimits

0x3e6f,	// (0x0002a804) vkb2_top_grid_right_pane_g2

0x3e87,	// (0x0002a81c) vkb2_top_grid_right_pane_g3_ParamLimits

0x3e87,	// (0x0002a81c) vkb2_top_grid_right_pane_g3

0x88a3,	// (0x0002f238) vkb2_top_grid_right_pane_g4_ParamLimits

0x88a3,	// (0x0002f238) vkb2_top_grid_right_pane_g4

0x0003,

0xfc63,	// (0x000365f8) vkb2_top_grid_right_pane_g_ParamLimits

0xfc63,	// (0x000365f8) vkb2_top_grid_right_pane_g

0x3eb5,	// (0x0002a84a) vkb2_top_cell_left_pane_g1

0x3ecc,	// (0x0002a861) vkb2_cell_keypad_pane_g1_ParamLimits

0x3ecc,	// (0x0002a861) vkb2_cell_keypad_pane_g1

0x52ed,	// (0x0002bc82) vkb2_cell_keypad_pane_t1_ParamLimits

0x52ed,	// (0x0002bc82) vkb2_cell_keypad_pane_t1

0x3eda,	// (0x0002a86f) vkb2_cell_bottom_grid_pane_ParamLimits

0x3eda,	// (0x0002a86f) vkb2_cell_bottom_grid_pane

0x3f13,	// (0x0002a8a8) vkb2_cell_bottom_grid_pane_g1

0xac71,	// (0x00031606) aid_call2_pane_cp02

0xac79,	// (0x0003160e) aid_call_pane_cp02

0xac81,	// (0x00031616) clock_digital_number_pane_cp10

0xac89,	// (0x0003161e) clock_digital_number_pane_cp11

0xac91,	// (0x00031626) clock_digital_number_pane_cp12

0xac99,	// (0x0003162e) clock_digital_number_pane_cp13

0xaca1,	// (0x00031636) clock_digital_separator_pane_cp10

0xc412,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g1

0xc412,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g2

0xaca9,	// (0x0003163e) popup_clock_digital_analogue_window_cp2_g3

0xc412,	// (0x00032da7) popup_clock_digital_analogue_window_cp2_g4

0xaca9,	// (0x0003163e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfc18,	// (0x000365ad) popup_clock_digital_analogue_window_cp2_g

0xacb1,	// (0x00031646) popup_clock_digital_analogue_window_cp2_t1

0xacbf,	// (0x00031654) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfc23,	// (0x000365b8) popup_clock_digital_analogue_window_cp2_t

0xec1f,	// (0x000355b4) clock_digital_number_pane_cp10_g1

0xec1f,	// (0x000355b4) clock_digital_number_pane_cp10_g2

0x0001,

0x01e3,	// (0x00026b78) clock_digital_number_pane_cp10_g

0xec1f,	// (0x000355b4) clock_digital_separator_pane_cp10_g1

0xec1f,	// (0x000355b4) clock_digital_separator_pane_cp10_g2

0x0001,

0x01e3,	// (0x00026b78) clock_digital_separator_pane_cp10_g

0x4d18,	// (0x0002b6ad) uniindi_top_pane_g3

0x4d29,	// (0x0002b6be) uniindi_top_pane_g4

0x3ced,	// (0x0002a682) vkb2_row_keypad_pane_ParamLimits

0x3ced,	// (0x0002a682) vkb2_row_keypad_pane

0x3f33,	// (0x0002a8c8) vkb2_cell_t_keypad_pane_ParamLimits

0x3f33,	// (0x0002a8c8) vkb2_cell_t_keypad_pane

0x3f43,	// (0x0002a8d8) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x3f43,	// (0x0002a8d8) vkb2_cell_t_keypad_pane_cp08

0x3f56,	// (0x0002a8eb) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x3f56,	// (0x0002a8eb) vkb2_cell_t_keypad_pane_cp09

0x3f6a,	// (0x0002a8ff) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x3f6a,	// (0x0002a8ff) vkb2_cell_t_keypad_pane_cp01

0x3f7b,	// (0x0002a910) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x3f7b,	// (0x0002a910) vkb2_cell_t_keypad_pane_cp02

0x3f8c,	// (0x0002a921) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x3f8c,	// (0x0002a921) vkb2_cell_t_keypad_pane_cp03

0x3f9d,	// (0x0002a932) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x3f9d,	// (0x0002a932) vkb2_cell_t_keypad_pane_cp04

0x3fae,	// (0x0002a943) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x3fae,	// (0x0002a943) vkb2_cell_t_keypad_pane_cp05

0x3fbf,	// (0x0002a954) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x3fbf,	// (0x0002a954) vkb2_cell_t_keypad_pane_cp06

0x3fd0,	// (0x0002a965) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x3fd0,	// (0x0002a965) vkb2_cell_t_keypad_pane_cp07

0x3fe1,	// (0x0002a976) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x3fe1,	// (0x0002a976) vkb2_cell_t_keypad_pane_cp10

0x2e30,	// (0x000297c5) vkb2_cell_t_keypad_pane_g1

0x5304,	// (0x0002bc99) vkb2_cell_t_keypad_pane_t1

0x07c8,	// (0x0002715d) popup_grid_graphic2_window

0xb001,	// (0x00031996) aid_size_cell_graphic2_ParamLimits

0xb001,	// (0x00031996) aid_size_cell_graphic2

0xb03f,	// (0x000319d4) bg_popup_window_pane_cp21_ParamLimits

0xb03f,	// (0x000319d4) bg_popup_window_pane_cp21

0xb04d,	// (0x000319e2) graphic2_pages_pane_ParamLimits

0xb04d,	// (0x000319e2) graphic2_pages_pane

0xb0a3,	// (0x00031a38) grid_graphic2_control_pane_ParamLimits

0xb0a3,	// (0x00031a38) grid_graphic2_control_pane

0xb0eb,	// (0x00031a80) grid_graphic2_pane_ParamLimits

0xb0eb,	// (0x00031a80) grid_graphic2_pane

0xb172,	// (0x00031b07) cell_graphic2_pane

0xb5e2,	// (0x00031f77) main_comp_mode_pane

0x377e,	// (0x0002a113) list_ai3_gene_pane_ParamLimits

0xa9b2,	// (0x00031347) bg_popup_window_pane_cp19_ParamLimits

0x496a,	// (0x0002b2ff) bg_touch_area_indi_pane_ParamLimits

0x496a,	// (0x0002b2ff) bg_touch_area_indi_pane

0x4980,	// (0x0002b315) bg_touch_area_indi_pane_cp01_ParamLimits

0x4980,	// (0x0002b315) bg_touch_area_indi_pane_cp01

0x4996,	// (0x0002b32b) bg_touch_area_indi_pane_cp02_ParamLimits

0x4996,	// (0x0002b32b) bg_touch_area_indi_pane_cp02

0x49ae,	// (0x0002b343) bg_touch_area_indi_pane_cp03_ParamLimits

0x49ae,	// (0x0002b343) bg_touch_area_indi_pane_cp03

0x49c8,	// (0x0002b35d) popup_slider_window_g1_ParamLimits

0x49e4,	// (0x0002b379) popup_slider_window_g2_ParamLimits

0x4a00,	// (0x0002b395) popup_slider_window_g3_ParamLimits

0xfbbe,	// (0x00036553) popup_slider_window_g_ParamLimits

0x4a5c,	// (0x0002b3f1) popup_slider_window_t1_ParamLimits

0x4ad0,	// (0x0002b465) small_volume_slider_vertical_pane_ParamLimits

0xb172,	// (0x00031b07) cell_graphic2_pane_ParamLimits

0xb1dc,	// (0x00031b71) bg_button_pane_cp10_ParamLimits

0xb1dc,	// (0x00031b71) bg_button_pane_cp10

0xb1ef,	// (0x00031b84) bg_button_pane_cp11_ParamLimits

0xb1ef,	// (0x00031b84) bg_button_pane_cp11

0xb202,	// (0x00031b97) graphic2_pages_pane_g1_ParamLimits

0xb202,	// (0x00031b97) graphic2_pages_pane_g1

0xb21d,	// (0x00031bb2) graphic2_pages_pane_g2_ParamLimits

0xb21d,	// (0x00031bb2) graphic2_pages_pane_g2

0x0001,

0xfc71,	// (0x00036606) graphic2_pages_pane_g_ParamLimits

0xfc71,	// (0x00036606) graphic2_pages_pane_g

0xb235,	// (0x00031bca) graphic2_pages_pane_t1_ParamLimits

0xb235,	// (0x00031bca) graphic2_pages_pane_t1

0xb24d,	// (0x00031be2) cell_graphic2_control_pane_ParamLimits

0xb24d,	// (0x00031be2) cell_graphic2_control_pane

0xb27f,	// (0x00031c14) cell_graphic2_pane_g1_ParamLimits

0xb27f,	// (0x00031c14) cell_graphic2_pane_g1

0x88b9,	// (0x0002f24e) cell_graphic2_pane_g2_ParamLimits

0x88b9,	// (0x0002f24e) cell_graphic2_pane_g2

0xb1cf,	// (0x00031b64) cell_graphic2_pane_g3_ParamLimits

0xb1cf,	// (0x00031b64) cell_graphic2_pane_g3

0x88c6,	// (0x0002f25b) cell_graphic2_pane_g4_ParamLimits

0x88c6,	// (0x0002f25b) cell_graphic2_pane_g4

0xb28c,	// (0x00031c21) cell_graphic2_pane_g5_ParamLimits

0xb28c,	// (0x00031c21) cell_graphic2_pane_g5

0x0004,

0xfc76,	// (0x0003660b) cell_graphic2_pane_g_ParamLimits

0xfc76,	// (0x0003660b) cell_graphic2_pane_g

0xb2ac,	// (0x00031c41) cell_graphic2_pane_t1_ParamLimits

0xb2ac,	// (0x00031c41) cell_graphic2_pane_t1

0xda68,	// (0x000343fd) grid_highlight_pane_cp11_ParamLimits

0xda68,	// (0x000343fd) grid_highlight_pane_cp11

0xb785,	// (0x0003211a) bg_button_pane_cp05

0xb2e1,	// (0x00031c76) cell_graphic2_control_pane_g1

0xec1f,	// (0x000355b4) bg_touch_area_indi_pane_g1

0x5316,	// (0x0002bcab) aid_cmod_rocker_key_size

0x5320,	// (0x0002bcb5) aid_cmode_itu_key_size

0x532a,	// (0x0002bcbf) main_cmode_video_pane

0x5334,	// (0x0002bcc9) main_comp_mode_itu_pane

0x5340,	// (0x0002bcd5) main_comp_mode_rocker_pane

0x534c,	// (0x0002bce1) cell_cmode_rocker_pane_ParamLimits

0x534c,	// (0x0002bce1) cell_cmode_rocker_pane

0x535e,	// (0x0002bcf3) cell_cmode_itu_pane_ParamLimits

0x535e,	// (0x0002bcf3) cell_cmode_itu_pane

0xbeda,	// (0x0003286f) bg_button_pane_cp06_ParamLimits

0xbeda,	// (0x0003286f) bg_button_pane_cp06

0xeea6,	// (0x0003583b) cell_cmode_rocker_pane_g1_ParamLimits

0xeea6,	// (0x0003583b) cell_cmode_rocker_pane_g1

0x4b74,	// (0x0002b509) cell_cmode_rocker_pane_g2_ParamLimits

0x4b74,	// (0x0002b509) cell_cmode_rocker_pane_g2

0x0001,

0xfc86,	// (0x0003661b) cell_cmode_rocker_pane_g_ParamLimits

0xfc86,	// (0x0003661b) cell_cmode_rocker_pane_g

0xb5e2,	// (0x00031f77) bg_button_pane_cp07

0x5373,	// (0x0002bd08) cell_cmode_itu_pane_g1

0x537c,	// (0x0002bd11) cell_cmode_itu_pane_t1

0x538a,	// (0x0002bd1f) cell_cmode_itu_pane_t2

0x0001,

0xfc8b,	// (0x00036620) cell_cmode_itu_pane_t

0x4d9a,	// (0x0002b72f) aid_touch_ctrl_left

0x4da2,	// (0x0002b737) aid_touch_ctrl_right

0xb5e2,	// (0x00031f77) compa_mode_pane

0xb307,	// (0x00031c9c) aid_cmod_rocker_key_size_cp

0xb311,	// (0x00031ca6) aid_cmode_itu_key_size_cp

0x5398,	// (0x0002bd2d) compa_mode_pane_g1

0x53a0,	// (0x0002bd35) compa_mode_pane_g2

0x53a8,	// (0x0002bd3d) compa_mode_pane_g3

0x0002,

0xfc90,	// (0x00036625) compa_mode_pane_g

0xb31b,	// (0x00031cb0) main_comp_mode_itu_pane_cp

0xb323,	// (0x00031cb8) main_comp_mode_rocker_pane_cp

0xb32b,	// (0x00031cc0) cell_cmode_itu_pane_cp_ParamLimits

0xb32b,	// (0x00031cc0) cell_cmode_itu_pane_cp

0xb340,	// (0x00031cd5) cell_cmode_rocker_pane_cp_ParamLimits

0xb340,	// (0x00031cd5) cell_cmode_rocker_pane_cp

0xbeda,	// (0x0003286f) bg_button_pane_cp06_cp_ParamLimits

0xbeda,	// (0x0003286f) bg_button_pane_cp06_cp

0xeea6,	// (0x0003583b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xeea6,	// (0x0003583b) cell_cmode_rocker_pane_g1_cp

0xec1f,	// (0x000355b4) cell_cmode_rocker_pane_g2_cp

0xb5e2,	// (0x00031f77) bg_button_pane_cp07_cp

0xb352,	// (0x00031ce7) cell_cmode_itu_pane_g1_cp

0xb35b,	// (0x00031cf0) cell_cmode_itu_pane_t1_cp

0xb35b,	// (0x00031cf0) cell_cmode_itu_pane_t2_cp

0xa0f6,	// (0x00030a8b) settings_code_pane_cp2

0xb652,	// (0x00031fe7) bg_popup_window_pane_cp3_ParamLimits

0xbb94,	// (0x00032529) heading_pane_cp3_ParamLimits

0xbba0,	// (0x00032535) listscroll_popup_graphic_pane_ParamLimits

0x2aef,	// (0x00029484) fep_hwr_aid_pane_ParamLimits

0x39bb,	// (0x0002a350) aid_touch_sctrl_top_ParamLimits

0x39d6,	// (0x0002a36b) sctrl_sk_top_pane_g1_ParamLimits

0x2e30,	// (0x000297c5) sctrl_sk_top_pane_g2_ParamLimits

0xfbd7,	// (0x0003656c) sctrl_sk_top_pane_g_ParamLimits

0x39e3,	// (0x0002a378) sctrl_sk_top_pane_t1_ParamLimits

0x39bb,	// (0x0002a350) aid_touch_sctrl_bottom_ParamLimits

0x39e3,	// (0x0002a378) sctrl_sk_bottom_pane_t1_ParamLimits

0x4ce4,	// (0x0002b679) aid_area_touch_clock

0x86d1,	// (0x0002f066) aid_vkb2_area_top_pane_cell_ParamLimits

0x86d1,	// (0x0002f066) aid_vkb2_area_top_pane_cell

0x877c,	// (0x0002f111) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x877c,	// (0x0002f111) aid_vkb2_area_bottom_pane_cell

0x524f,	// (0x0002bbe4) popup_char_count_window

0x53b0,	// (0x0002bd45) popup_char_count_window_g1

0x53b9,	// (0x0002bd4e) popup_char_count_window_g2

0x53c2,	// (0x0002bd57) popup_char_count_window_g3

0x0002,

0xfc97,	// (0x0003662c) popup_char_count_window_g

0x53cb,	// (0x0002bd60) popup_char_count_window_t1

0x3a92,	// (0x0002a427) popup_fep_char_preview_window_ParamLimits

0x3a92,	// (0x0002a427) popup_fep_char_preview_window

0x86f1,	// (0x0002f086) vkb2_top_candi_pane_ParamLimits

0x86f1,	// (0x0002f086) vkb2_top_candi_pane

0xb369,	// (0x00031cfe) cell_vkb2_top_candi_pane_ParamLimits

0xb369,	// (0x00031cfe) cell_vkb2_top_candi_pane

0x3ff6,	// (0x0002a98b) bg_popup_fep_char_preview_window_ParamLimits

0x3ff6,	// (0x0002a98b) bg_popup_fep_char_preview_window

0x4004,	// (0x0002a999) popup_fep_char_preview_window_t1_ParamLimits

0x4004,	// (0x0002a999) popup_fep_char_preview_window_t1

0x53d9,	// (0x0002bd6e) bg_popup_fep_char_preview_window_g1

0x53e1,	// (0x0002bd76) bg_popup_fep_char_preview_window_g2

0x53e9,	// (0x0002bd7e) bg_popup_fep_char_preview_window_g3

0x53f1,	// (0x0002bd86) bg_popup_fep_char_preview_window_g4

0x53f9,	// (0x0002bd8e) bg_popup_fep_char_preview_window_g5

0x403e,	// (0x0002a9d3) bg_popup_fep_char_preview_window_g6

0x5401,	// (0x0002bd96) bg_popup_fep_char_preview_window_g7

0x5409,	// (0x0002bd9e) bg_popup_fep_char_preview_window_g8

0x5411,	// (0x0002bda6) bg_popup_fep_char_preview_window_g9

0x0008,

0xfc9e,	// (0x00036633) bg_popup_fep_char_preview_window_g

0x2e30,	// (0x000297c5) cell_vkb2_top_candi_pane_g1_ParamLimits

0x2e30,	// (0x000297c5) cell_vkb2_top_candi_pane_g1

0x2e3e,	// (0x000297d3) cell_vkb2_top_candi_pane_g2_ParamLimits

0x2e3e,	// (0x000297d3) cell_vkb2_top_candi_pane_g2

0x4740,	// (0x0002b0d5) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4740,	// (0x0002b0d5) cell_vkb2_top_candi_pane_g3

0x4046,	// (0x0002a9db) cell_vkb2_top_candi_pane_g4_ParamLimits

0x4046,	// (0x0002a9db) cell_vkb2_top_candi_pane_g4

0xf2a3,	// (0x00035c38) cell_vkb2_top_candi_pane_g5_ParamLimits

0xf2a3,	// (0x00035c38) cell_vkb2_top_candi_pane_g5

0x4067,	// (0x0002a9fc) cell_vkb2_top_candi_pane_g6_ParamLimits

0x4067,	// (0x0002a9fc) cell_vkb2_top_candi_pane_g6

0x0005,

0xfcb1,	// (0x00036646) cell_vkb2_top_candi_pane_g_ParamLimits

0xfcb1,	// (0x00036646) cell_vkb2_top_candi_pane_g

0x4075,	// (0x0002aa0a) cell_vkb2_top_candi_pane_t1

0x236f,	// (0x00028d04) aid_size_touch_slider_mark_ParamLimits

0x236f,	// (0x00028d04) aid_size_touch_slider_mark

0xb089,	// (0x00031a1e) grid_graphic2_catg_pane_ParamLimits

0xb089,	// (0x00031a1e) grid_graphic2_catg_pane

0xb145,	// (0x00031ada) popup_grid_graphic2_window_t1_ParamLimits

0xb145,	// (0x00031ada) popup_grid_graphic2_window_t1

0xb15b,	// (0x00031af0) popup_grid_graphic2_window_t2_ParamLimits

0xb15b,	// (0x00031af0) popup_grid_graphic2_window_t2

0x0001,

0xfc6c,	// (0x00036601) popup_grid_graphic2_window_t_ParamLimits

0xfc6c,	// (0x00036601) popup_grid_graphic2_window_t

0xb785,	// (0x0003211a) bg_button_pane_cp05_ParamLimits

0xb2e1,	// (0x00031c76) cell_graphic2_control_pane_g1_ParamLimits

0xb3cf,	// (0x00031d64) cell_graphic2_catg_pane_ParamLimits

0xb3cf,	// (0x00031d64) cell_graphic2_catg_pane

0xb5e2,	// (0x00031f77) bg_button_pane_cp12

0xb3e1,	// (0x00031d76) cell_graphic2_catg_pane_g1

0x4cb0,	// (0x0002b645) cell_tb_ext_pane_t1_ParamLimits

0x3e2c,	// (0x0002a7c1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x3e2c,	// (0x0002a7c1) vkb2_top_cell_right_narrow_pane

0x3e44,	// (0x0002a7d9) vkb2_top_cell_right_wide_pane_ParamLimits

0x3e44,	// (0x0002a7d9) vkb2_top_cell_right_wide_pane

0x2ae1,	// (0x00029476) bg_vkb2_func_pane_ParamLimits

0x2ae1,	// (0x00029476) bg_vkb2_func_pane

0x3eb5,	// (0x0002a84a) vkb2_top_cell_left_pane_g1_ParamLimits

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp03_ParamLimits

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp03

0x3f13,	// (0x0002a8a8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xce71,	// (0x00033806) bg_vkb2_func_pane_g1

0xce79,	// (0x0003380e) bg_vkb2_func_pane_g2

0xce89,	// (0x0003381e) bg_vkb2_func_pane_g3

0xce81,	// (0x00033816) bg_vkb2_func_pane_g4

0xce91,	// (0x00033826) bg_vkb2_func_pane_g5

0xce99,	// (0x0003382e) bg_vkb2_func_pane_g6

0xcea1,	// (0x00033836) bg_vkb2_func_pane_g7

0xcea9,	// (0x0003383e) bg_vkb2_func_pane_g8

0xce69,	// (0x000337fe) bg_vkb2_func_pane_g9

0x0008,

0x048f,	// (0x00026e24) bg_vkb2_func_pane_g

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp01_ParamLimits

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp01

0x3eb5,	// (0x0002a84a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x3eb5,	// (0x0002a84a) vkb2_top_cell_right_wide_pane_g1

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp02_ParamLimits

0x2ae1,	// (0x00029476) bg_vkb2_fuc_pane_cp02

0x3f13,	// (0x0002a8a8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x3f13,	// (0x0002a8a8) vkb2_top_cell_right_narrow_pane_g1

0xa8ec,	// (0x00031281) aid_touch_area_decrease_ParamLimits

0xa8ec,	// (0x00031281) aid_touch_area_decrease

0xa926,	// (0x000312bb) aid_touch_area_increase_ParamLimits

0xa926,	// (0x000312bb) aid_touch_area_increase

0xa94e,	// (0x000312e3) aid_touch_area_mute_ParamLimits

0xa94e,	// (0x000312e3) aid_touch_area_mute

0xa97e,	// (0x00031313) aid_touch_area_slider_ParamLimits

0xa97e,	// (0x00031313) aid_touch_area_slider

0xa9be,	// (0x00031353) popup_slider_window_g4_ParamLimits

0xa9be,	// (0x00031353) popup_slider_window_g4

0xa9e6,	// (0x0003137b) popup_slider_window_g5_ParamLimits

0xa9e6,	// (0x0003137b) popup_slider_window_g5

0xaa1a,	// (0x000313af) popup_slider_window_g6_ParamLimits

0xaa1a,	// (0x000313af) popup_slider_window_g6

0x4a8a,	// (0x0002b41f) popup_slider_window_t2_ParamLimits

0x4a8a,	// (0x0002b41f) popup_slider_window_t2

0x0001,

0xfbcb,	// (0x00036560) popup_slider_window_t_ParamLimits

0xfbcb,	// (0x00036560) popup_slider_window_t

0xaa36,	// (0x000313cb) slider_pane_ParamLimits

0xaa36,	// (0x000313cb) slider_pane

0x5419,	// (0x0002bdae) slider_pane_g1_ParamLimits

0x5419,	// (0x0002bdae) slider_pane_g1

0x542d,	// (0x0002bdc2) slider_pane_g2_ParamLimits

0x542d,	// (0x0002bdc2) slider_pane_g2

0x5443,	// (0x0002bdd8) slider_pane_g3_ParamLimits

0x5443,	// (0x0002bdd8) slider_pane_g3

0x0003,

0xfcbe,	// (0x00036653) slider_pane_g_ParamLimits

0xfcbe,	// (0x00036653) slider_pane_g

0x9882,	// (0x00030217) popup_tb_float_extension_window_ParamLimits

0x9882,	// (0x00030217) popup_tb_float_extension_window

0x546f,	// (0x0002be04) aid_size_cell_tb_float_ext

0xb5e2,	// (0x00031f77) bg_popup_sub_window_cp28

0x547b,	// (0x0002be10) grid_tb_float_ext_pane

0x5485,	// (0x0002be1a) cell_tb_float_ext_pane_ParamLimits

0x5485,	// (0x0002be1a) cell_tb_float_ext_pane

0x549f,	// (0x0002be34) cell_tb_float_ext_pane_g1

0x54a8,	// (0x0002be3d) grid_highlight_pane_cp12

0x84d5,	// (0x0002ee6a) cell_last_hwr_side_pane_ParamLimits

0x84d5,	// (0x0002ee6a) cell_last_hwr_side_pane

0xec1f,	// (0x000355b4) cell_last_hwr_side_pane_g1

0x54b1,	// (0x0002be46) cell_last_hwr_side_pane_g2

0x0001,

0xfcc7,	// (0x0003665c) cell_last_hwr_side_pane_g

0x8858,	// (0x0002f1ed) vkb2_area_bottom_space_btn_pane_ParamLimits

0x8858,	// (0x0002f1ed) vkb2_area_bottom_space_btn_pane

0x2e30,	// (0x000297c5) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x5304,	// (0x0002bc99) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x4075,	// (0x0002aa0a) cell_vkb2_top_candi_pane_t1_ParamLimits

0x4094,	// (0x0002aa29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x4094,	// (0x0002aa29) vkb2_area_bottom_space_btn_pane_g1

0x40ce,	// (0x0002aa63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x40ce,	// (0x0002aa63) vkb2_area_bottom_space_btn_pane_g2

0x4104,	// (0x0002aa99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x4104,	// (0x0002aa99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfccc,	// (0x00036661) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfccc,	// (0x00036661) vkb2_area_bottom_space_btn_pane_g

0x2ba4,	// (0x00029539) cel_fep_hwr_func_pane_ParamLimits

0x2ba4,	// (0x00029539) cel_fep_hwr_func_pane

0x84aa,	// (0x0002ee3f) cell_hwr_side_button_pane_ParamLimits

0x84aa,	// (0x0002ee3f) cell_hwr_side_button_pane

0x4ce4,	// (0x0002b679) aid_area_touch_clock_ParamLimits

0xb785,	// (0x0003211a) bg_uniindi_top_pane_ParamLimits

0x4cf6,	// (0x0002b68b) uniindi_top_pane_g1_ParamLimits

0x4d0c,	// (0x0002b6a1) uniindi_top_pane_g2_ParamLimits

0x4d18,	// (0x0002b6ad) uniindi_top_pane_g3_ParamLimits

0x4d29,	// (0x0002b6be) uniindi_top_pane_g4_ParamLimits

0xfbf2,	// (0x00036587) uniindi_top_pane_g_ParamLimits

0x4d36,	// (0x0002b6cb) uniindi_top_pane_t1_ParamLimits

0xb785,	// (0x0003211a) bg_vkb2_func_pane_cp01_ParamLimits

0xb785,	// (0x0003211a) bg_vkb2_func_pane_cp01

0x54ba,	// (0x0002be4f) cel_fep_hwr_func_pane_g1_ParamLimits

0x54ba,	// (0x0002be4f) cel_fep_hwr_func_pane_g1

0xb785,	// (0x0003211a) bg_vkb2_func_pane_cp02_ParamLimits

0xb785,	// (0x0003211a) bg_vkb2_func_pane_cp02

0x54ba,	// (0x0002be4f) cell_hwr_side_button_pane_g1_ParamLimits

0x54ba,	// (0x0002be4f) cell_hwr_side_button_pane_g1

0xcd73,	// (0x00033708) status_pane_g4_ParamLimits

0xcd73,	// (0x00033708) status_pane_g4

0xcd8b,	// (0x00033720) status_pane_t1

0xeaae,	// (0x00035443) form2_midp_gauge_slider_cont_pane

0xeab6,	// (0x0003544b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xa3b2,	// (0x00030d47) form2_midp_gauge_slider_pane_t2_ParamLimits

0xa3c4,	// (0x00030d59) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfa3c,	// (0x000363d1) form2_midp_gauge_slider_pane_t_ParamLimits

0xeac8,	// (0x0003545d) form2_midp_slider_pane_ParamLimits

0x3a52,	// (0x0002a3e7) aid_size_cell_func_vkb2_ParamLimits

0x3a52,	// (0x0002a3e7) aid_size_cell_func_vkb2

0x545b,	// (0x0002bdf0) slider_pane_g4_ParamLimits

0x545b,	// (0x0002bdf0) slider_pane_g4

0x88d3,	// (0x0002f268) form2_midp_gauge_slider_pane_t2_cp01

0x88e1,	// (0x0002f276) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x88e1,	// (0x0002f276) form2_midp_gauge_slider_pane_t3_cp01

0x4179,	// (0x0002ab0e) form2_midp_slider_pane_cp01

0xb5e2,	// (0x00031f77) navi_smil_pane

0x54ea,	// (0x0002be7f) navi_smil_pane_g1

0x54f2,	// (0x0002be87) navi_smil_pane_t1

0x54c8,	// (0x0002be5d) form2_midp_slider_pane_g1

0x54d1,	// (0x0002be66) form2_midp_slider_pane_g2

0x54d9,	// (0x0002be6e) form2_midp_slider_pane_g3

0x54c8,	// (0x0002be5d) form2_midp_slider_pane_g4

0xb3ea,	// (0x00031d7f) form2_midp_slider_pane_g5

0x0004,

0xfcd5,	// (0x0003666a) form2_midp_slider_pane_g

0x413e,	// (0x0002aad3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x413e,	// (0x0002aad3) vkb2_area_bottom_space_btn_pane_g4

0x9a5e,	// (0x000303f3) lc0_navi_pane_ParamLimits

0x9a5e,	// (0x000303f3) lc0_navi_pane

0x9ac8,	// (0x0003045d) lc0_stat_indi_pane_ParamLimits

0x9ac8,	// (0x0003045d) lc0_stat_indi_pane

0x9add,	// (0x00030472) ls0_title_pane_ParamLimits

0x9add,	// (0x00030472) ls0_title_pane

0xbeda,	// (0x0003286f) bg_popup_sub_pane_cp14_ParamLimits

0x4ccb,	// (0x0002b660) list_uniindi_pane_ParamLimits

0x4cd7,	// (0x0002b66c) uniindi_top_pane_ParamLimits

0x4d72,	// (0x0002b707) list_single_uniindi_pane_g1_ParamLimits

0x4d85,	// (0x0002b71a) list_single_uniindi_pane_t1_ParamLimits

0x88fe,	// (0x0002f293) lc0_stat_clock_pane_ParamLimits

0x88fe,	// (0x0002f293) lc0_stat_clock_pane

0xb3f3,	// (0x00031d88) lc0_stat_indi_pane_g1_ParamLimits

0xb3f3,	// (0x00031d88) lc0_stat_indi_pane_g1

0xb400,	// (0x00031d95) lc0_stat_indi_pane_g2_ParamLimits

0xb400,	// (0x00031d95) lc0_stat_indi_pane_g2

0x0001,

0xfce0,	// (0x00036675) lc0_stat_indi_pane_g_ParamLimits

0xfce0,	// (0x00036675) lc0_stat_indi_pane_g

0x890b,	// (0x0002f2a0) lc0_uni_indicator_pane_ParamLimits

0x890b,	// (0x0002f2a0) lc0_uni_indicator_pane

0xb40d,	// (0x00031da2) ls0_title_pane_g1_ParamLimits

0xb40d,	// (0x00031da2) ls0_title_pane_g1

0xb421,	// (0x00031db6) ls0_title_pane_t1_ParamLimits

0xb421,	// (0x00031db6) ls0_title_pane_t1

0x8918,	// (0x0002f2ad) lc0_uni_indicator_pane_g1_ParamLimits

0x8918,	// (0x0002f2ad) lc0_uni_indicator_pane_g1

0x5500,	// (0x0002be95) lc0_stat_clock_pane_t1

0xb5e2,	// (0x00031f77) main_ai5_pane

0x550e,	// (0x0002bea3) ai5_sk_pane_ParamLimits

0x550e,	// (0x0002bea3) ai5_sk_pane

0xb44f,	// (0x00031de4) cell_ai5_widget_pane_ParamLimits

0xb44f,	// (0x00031de4) cell_ai5_widget_pane

0x551b,	// (0x0002beb0) aid_size_cell_widget_grid

0x552f,	// (0x0002bec4) bg_ai5_widget_pane_ParamLimits

0x552f,	// (0x0002bec4) bg_ai5_widget_pane

0xb4d8,	// (0x00031e6d) cell_ai5_widget_pane_g2

0xb4e8,	// (0x00031e7d) cell_ai5_widget_pane_g3

0xb507,	// (0x00031e9c) cell_ai5_widget_pane_g4

0xb513,	// (0x00031ea8) cell_ai5_widget_pane_g5

0xb51f,	// (0x00031eb4) cell_ai5_widget_pane_g6

0xb52b,	// (0x00031ec0) cell_ai5_widget_pane_g7

0xb573,	// (0x00031f08) cell_ai5_widget_pane_t1_ParamLimits

0xb573,	// (0x00031f08) cell_ai5_widget_pane_t1

0xb590,	// (0x00031f25) cell_ai5_widget_pane_t2_ParamLimits

0xb590,	// (0x00031f25) cell_ai5_widget_pane_t2

0xb5a8,	// (0x00031f3d) cell_ai5_widget_pane_t3_ParamLimits

0xb5a8,	// (0x00031f3d) cell_ai5_widget_pane_t3

0xb5c0,	// (0x00031f55) cell_ai5_widget_pane_t4_ParamLimits

0xb5c0,	// (0x00031f55) cell_ai5_widget_pane_t4

0xb793,	// (0x00032128) cell_ai5_widget_pane_t5_ParamLimits

0xb793,	// (0x00032128) cell_ai5_widget_pane_t5

0x553b,	// (0x0002bed0) cell_ai5_widget_pane_t6_ParamLimits

0x553b,	// (0x0002bed0) cell_ai5_widget_pane_t6

0x554d,	// (0x0002bee2) cell_ai5_widget_pane_t7_ParamLimits

0x554d,	// (0x0002bee2) cell_ai5_widget_pane_t7

0xb7b2,	// (0x00032147) cell_ai5_widget_pane_t8_ParamLimits

0xb7b2,	// (0x00032147) cell_ai5_widget_pane_t8

0x0009,

0xfce5,	// (0x0003667a) cell_ai5_widget_pane_t_ParamLimits

0xfce5,	// (0x0003667a) cell_ai5_widget_pane_t

0xb7fe,	// (0x00032193) grid_ai5_widget_pane

0xbeda,	// (0x0003286f) highlight_cell_ai5_widget_pane_ParamLimits

0xbeda,	// (0x0003286f) highlight_cell_ai5_widget_pane

0xb814,	// (0x000321a9) ai5_sk_left_pane

0xb81e,	// (0x000321b3) ai5_sk_middle_pane

0xb828,	// (0x000321bd) ai5_sk_right_pane

0x5566,	// (0x0002befb) bg_ai5_widget_pane_g1_ParamLimits

0x5566,	// (0x0002befb) bg_ai5_widget_pane_g1

0x5572,	// (0x0002bf07) bg_ai5_widget_pane_g2_ParamLimits

0x5572,	// (0x0002bf07) bg_ai5_widget_pane_g2

0x557e,	// (0x0002bf13) bg_ai5_widget_pane_g3_ParamLimits

0x557e,	// (0x0002bf13) bg_ai5_widget_pane_g3

0x558a,	// (0x0002bf1f) bg_ai5_widget_pane_g4_ParamLimits

0x558a,	// (0x0002bf1f) bg_ai5_widget_pane_g4

0x5596,	// (0x0002bf2b) bg_ai5_widget_pane_g5_ParamLimits

0x5596,	// (0x0002bf2b) bg_ai5_widget_pane_g5

0x55a2,	// (0x0002bf37) bg_ai5_widget_pane_g6_ParamLimits

0x55a2,	// (0x0002bf37) bg_ai5_widget_pane_g6

0x55ae,	// (0x0002bf43) bg_ai5_widget_pane_g7_ParamLimits

0x55ae,	// (0x0002bf43) bg_ai5_widget_pane_g7

0x55ba,	// (0x0002bf4f) bg_ai5_widget_pane_g8_ParamLimits

0x55ba,	// (0x0002bf4f) bg_ai5_widget_pane_g8

0x55c6,	// (0x0002bf5b) bg_ai5_widget_pane_g9_ParamLimits

0x55c6,	// (0x0002bf5b) bg_ai5_widget_pane_g9

0x0008,

0xfcfa,	// (0x0003668f) bg_ai5_widget_pane_g_ParamLimits

0xfcfa,	// (0x0003668f) bg_ai5_widget_pane_g

0x55f9,	// (0x0002bf8e) cell_shortcut_ai5_widget_pane_ParamLimits

0x55f9,	// (0x0002bf8e) cell_shortcut_ai5_widget_pane

0xb68e,	// (0x00032023) bg_cell_shortcut_ai5_widget_pane

0x560a,	// (0x0002bf9f) cell_grid_ai5_widget_pane_g1

0x5613,	// (0x0002bfa8) highlight_cell_shortcut_ai5_widget_pane

0xce71,	// (0x00033806) ai5_sk_left_pane_g1

0x561b,	// (0x0002bfb0) ai5_sk_left_pane_g2

0x5623,	// (0x0002bfb8) ai5_sk_left_pane_g3

0x562b,	// (0x0002bfc0) ai5_sk_left_pane_g4

0x0003,

0xfd0d,	// (0x000366a2) ai5_sk_left_pane_g

0x5633,	// (0x0002bfc8) ai5_sk_left_pane_t1

0xce79,	// (0x0003380e) ai5_sk_right_pane_g1

0x5641,	// (0x0002bfd6) ai5_sk_right_pane_g2

0x5649,	// (0x0002bfde) ai5_sk_right_pane_g3

0x5651,	// (0x0002bfe6) ai5_sk_right_pane_g4

0x0003,

0xfd16,	// (0x000366ab) ai5_sk_right_pane_g

0x5659,	// (0x0002bfee) ai5_sk_right_pane_t1

0xce79,	// (0x0003380e) ai5_sk_middle_pane_g1

0xce71,	// (0x00033806) ai5_sk_middle_pane_g2

0xce91,	// (0x00033826) ai5_sk_middle_pane_g3

0x5649,	// (0x0002bfde) ai5_sk_middle_pane_g4

0x5623,	// (0x0002bfb8) ai5_sk_middle_pane_g5

0x5667,	// (0x0002bffc) ai5_sk_middle_pane_g6

0xb832,	// (0x000321c7) ai5_sk_middle_pane_g7

0x0006,

0xfd1f,	// (0x000366b4) ai5_sk_middle_pane_g

0x994a,	// (0x000302df) aid_touch_area_size_lc0_ParamLimits

0x994a,	// (0x000302df) aid_touch_area_size_lc0

0x2e5f,	// (0x000297f4) cell_hwr_candidate_pane_t1_ParamLimits

0xcc95,	// (0x0003362a) aid_touch_navi_pane

0x9bcf,	// (0x00030564) status_dt_navi_pane_ParamLimits

0x9bcf,	// (0x00030564) status_dt_navi_pane

0x9be7,	// (0x0003057c) status_dt_sta_pane_ParamLimits

0x9be7,	// (0x0003057c) status_dt_sta_pane

0xb83a,	// (0x000321cf) dt_sta_controll_pane

0xb847,	// (0x000321dc) dt_sta_indi_pane

0xb854,	// (0x000321e9) dt_sta_title_pane

0xb785,	// (0x0003211a) bg_dt_sta_indi_pane_ParamLimits

0xb785,	// (0x0003211a) bg_dt_sta_indi_pane

0xb866,	// (0x000321fb) dt_sta_battery_pane

0xb86e,	// (0x00032203) dt_sta_indi_pane_g1

0x566f,	// (0x0002c004) dt_sta_indi_pane_g2

0x5678,	// (0x0002c00d) dt_sta_indi_pane_g3

0x0002,

0xfd2e,	// (0x000366c3) dt_sta_indi_pane_g

0x5681,	// (0x0002c016) dt_sta_signal_pane

0xbeda,	// (0x0003286f) bg_dt_sta_title_pane_ParamLimits

0xbeda,	// (0x0003286f) bg_dt_sta_title_pane

0xdb3a,	// (0x000344cf) dt_sta_title_pane_g1

0xb877,	// (0x0003220c) dt_sta_title_pane_t1_ParamLimits

0xb877,	// (0x0003220c) dt_sta_title_pane_t1

0xb5e2,	// (0x00031f77) bg_dt_sta_control_pane

0xb88c,	// (0x00032221) dt_sta_controll_pane_g1

0x568a,	// (0x0002c01f) bg_dt_sta_title_pane_g1

0x5693,	// (0x0002c028) bg_dt_sta_title_pane_g2

0x569c,	// (0x0002c031) bg_dt_sta_title_pane_g3

0x0002,

0xfd35,	// (0x000366ca) bg_dt_sta_title_pane_g

0xec1f,	// (0x000355b4) bg_dt_sta_indi_pane_g1

0x56a5,	// (0x0002c03a) dt_sta_signal_pane_g1

0x56ad,	// (0x0002c042) dt_sta_signal_pane_g2

0x0001,

0xfd3c,	// (0x000366d1) dt_sta_signal_pane_g

0x56b5,	// (0x0002c04a) dt_sta_battery_pane_g1

0x56be,	// (0x0002c053) dt_sta_battery_pane_t1

0xec1f,	// (0x000355b4) bg_dt_sta_control_pane_g1

0xc490,	// (0x00032e25) fep_china_uni_eep_pane

0xc498,	// (0x00032e2d) fep_china_uni_entry_pane_ParamLimits

0xc4a8,	// (0x00032e3d) popup_fep_china_uni_window_g1_ParamLimits

0xc4b8,	// (0x00032e4d) popup_fep_china_uni_window_g2_ParamLimits

0xc4b8,	// (0x00032e4d) popup_fep_china_uni_window_g2

0x0001,

0xf735,	// (0x000360ca) popup_fep_china_uni_window_g_ParamLimits

0xf735,	// (0x000360ca) popup_fep_china_uni_window_g

0x56cd,	// (0x0002c062) fep_china_uni_eep_pane_g1

0x56d5,	// (0x0002c06a) fep_china_uni_eep_pane_t1

0x54e1,	// (0x0002be76) aid_touch_area_size_smil_player

0xcd46,	// (0x000336db) lc0_clock_pane

0xcd7f,	// (0x00033714) status_pane_g5_ParamLimits

0xcd7f,	// (0x00033714) status_pane_g5

0x9416,	// (0x0002fdab) popup_keymap_window

0xcd5f,	// (0x000336f4) status_icon_pane

0xb4e8,	// (0x00031e7d) cell_ai5_widget_pane_g3_ParamLimits

0xb507,	// (0x00031e9c) cell_ai5_widget_pane_g4_ParamLimits

0xb513,	// (0x00031ea8) cell_ai5_widget_pane_g5_ParamLimits

0xb537,	// (0x00031ecc) cell_ai5_widget_pane_g8_ParamLimits

0xb537,	// (0x00031ecc) cell_ai5_widget_pane_g8

0xb54b,	// (0x00031ee0) cell_ai5_widget_pane_g9_ParamLimits

0xb54b,	// (0x00031ee0) cell_ai5_widget_pane_g9

0xb55f,	// (0x00031ef4) cell_ai5_widget_pane_g10_ParamLimits

0xb55f,	// (0x00031ef4) cell_ai5_widget_pane_g10

0x56e4,	// (0x0002c079) status_icon_pane_g1

0xb5e2,	// (0x00031f77) bg_popup_sub_pane_cp13

0x56ec,	// (0x0002c081) popup_keymap_window_t1

0x90c7,	// (0x0002fa5c) control_pane_g6_ParamLimits

0x90c7,	// (0x0002fa5c) control_pane_g6

0x90d4,	// (0x0002fa69) control_pane_g7_ParamLimits

0x90d4,	// (0x0002fa69) control_pane_g7

0x90e1,	// (0x0002fa76) control_pane_g8_ParamLimits

0x90e1,	// (0x0002fa76) control_pane_g8

0xb83a,	// (0x000321cf) dt_sta_controll_pane_ParamLimits

0xb847,	// (0x000321dc) dt_sta_indi_pane_ParamLimits

0xb854,	// (0x000321e9) dt_sta_title_pane_ParamLimits

0xbe1c,	// (0x000327b1) aid_size_touch_scroll_bar_cale

0x08a1,	// (0x00027236) popup_discreet_window_ParamLimits

0x08a1,	// (0x00027236) popup_discreet_window

0x7d35,	// (0x0002e6ca) popup_sk_window

0xd416,	// (0x00033dab) bg_popup_sub_pane_cp28_ParamLimits

0xd416,	// (0x00033dab) bg_popup_sub_pane_cp28

0x56fa,	// (0x0002c08f) popup_discreet_window_g1_ParamLimits

0x56fa,	// (0x0002c08f) popup_discreet_window_g1

0x571a,	// (0x0002c0af) popup_discreet_window_t1_ParamLimits

0x571a,	// (0x0002c0af) popup_discreet_window_t1

0x5738,	// (0x0002c0cd) popup_discreet_window_t2_ParamLimits

0x5738,	// (0x0002c0cd) popup_discreet_window_t2

0x0002,

0xfd41,	// (0x000366d6) popup_discreet_window_t_ParamLimits

0xfd41,	// (0x000366d6) popup_discreet_window_t

0x41b2,	// (0x0002ab47) popup_sk_window_g1

0x41bc,	// (0x0002ab51) popup_sk_window_g2

0x0001,

0xfd48,	// (0x000366dd) popup_sk_window_g

0x578a,	// (0x0002c11f) popup_sk_window_t1

0x5798,	// (0x0002c12d) popup_sk_window_t1_copy1

0xb4d8,	// (0x00031e6d) cell_ai5_widget_pane_g2_ParamLimits

0xb7c4,	// (0x00032159) cell_ai5_widget_pane_t9_ParamLimits

0xb7c4,	// (0x00032159) cell_ai5_widget_pane_t9

0xb5e2,	// (0x00031f77) main_fep_fshwr2_pane

0xb895,	// (0x0003222a) aid_fshwr2_btn_pane

0xb89d,	// (0x00032232) aid_fshwr2_syb_pane

0xb8a5,	// (0x0003223a) aid_fshwr2_txt_pane

0xb8ad,	// (0x00032242) fshwr2_func_candi_pane

0xb8b7,	// (0x0003224c) fshwr2_hwr_syb_pane

0xb8c5,	// (0x0003225a) fshwr2_icf_pane

0xb5e2,	// (0x00031f77) fshwr2_icf_bg_pane

0xb8cf,	// (0x00032264) fshwr2_icf_pane_t1_ParamLimits

0xb8cf,	// (0x00032264) fshwr2_icf_pane_t1

0xec1f,	// (0x000355b4) fshwr2_func_candi_pane_g1

0x57ba,	// (0x0002c14f) fshwr2_func_candi_row_pane_ParamLimits

0x57ba,	// (0x0002c14f) fshwr2_func_candi_row_pane

0xb8e9,	// (0x0003227e) cell_fshwr2_syb_pane_ParamLimits

0xb8e9,	// (0x0003227e) cell_fshwr2_syb_pane

0xeea6,	// (0x0003583b) fshwr2_hwr_syb_pane_g1_ParamLimits

0xeea6,	// (0x0003583b) fshwr2_hwr_syb_pane_g1

0xb5e2,	// (0x00031f77) bg_popup_call_pane_cp01

0x57cb,	// (0x0002c160) fshwr2_func_candi_cell_pane_ParamLimits

0x57cb,	// (0x0002c160) fshwr2_func_candi_cell_pane

0x57fc,	// (0x0002c191) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x57fc,	// (0x0002c191) fshwr2_func_candi_cell_bg_pane

0x5816,	// (0x0002c1ab) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x5816,	// (0x0002c1ab) fshwr2_func_candi_cell_pane_g1

0x5836,	// (0x0002c1cb) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x5836,	// (0x0002c1cb) fshwr2_func_candi_cell_pane_t1

0xb5e2,	// (0x00031f77) bg_button_pane_cp08

0xc921,	// (0x000332b6) cell_fshwr2_syb_bg_pane

0xb903,	// (0x00032298) cell_fshwr2_syb_bg_pane_g1

0x5849,	// (0x0002c1de) cell_fshwr2_syb_bg_pane_t1

0xbeda,	// (0x0003286f) main_tmo_pane

0x9f27,	// (0x000308bc) uni_indicator_pane_g1_ParamLimits

0x9f3c,	// (0x000308d1) uni_indicator_pane_g2_ParamLimits

0x9f51,	// (0x000308e6) uni_indicator_pane_g3_ParamLimits

0xde0a,	// (0x0003479f) uni_indicator_pane_g4_ParamLimits

0xde0a,	// (0x0003479f) uni_indicator_pane_g4

0xde1e,	// (0x000347b3) uni_indicator_pane_g5_ParamLimits

0xde1e,	// (0x000347b3) uni_indicator_pane_g5

0xde32,	// (0x000347c7) uni_indicator_pane_g6_ParamLimits

0xde32,	// (0x000347c7) uni_indicator_pane_g6

0xf92d,	// (0x000362c2) uni_indicator_pane_g_ParamLimits

0xa8ce,	// (0x00031263) popup_tmo_note_window_ParamLimits

0xa8ce,	// (0x00031263) popup_tmo_note_window

0xb5e2,	// (0x00031f77) fshwr2_bg_pane

0x5827,	// (0x0002c1bc) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x5827,	// (0x0002c1bc) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfd4d,	// (0x000366e2) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfd4d,	// (0x000366e2) fshwr2_func_candi_cell_pane_g

0xec1f,	// (0x000355b4) bg_popup_window_pane_cp01

0x5858,	// (0x0002c1ed) bg_popup_window_pane_g1_cp01

0x5861,	// (0x0002c1f6) bg_popup_window_pane_cp22_ParamLimits

0x5861,	// (0x0002c1f6) bg_popup_window_pane_cp22

0x586f,	// (0x0002c204) listscroll_tmo_link_pane_ParamLimits

0x586f,	// (0x0002c204) listscroll_tmo_link_pane

0x58af,	// (0x0002c244) popup_tmo_note_window_g1_ParamLimits

0x58af,	// (0x0002c244) popup_tmo_note_window_g1

0x58bc,	// (0x0002c251) tmo_note_info_pane_ParamLimits

0x58bc,	// (0x0002c251) tmo_note_info_pane

0xb90b,	// (0x000322a0) list_tmo_note_info_pane_g1_ParamLimits

0xb90b,	// (0x000322a0) list_tmo_note_info_pane_g1

0x58d6,	// (0x0002c26b) list_tmo_note_info_pane_g2_ParamLimits

0x58d6,	// (0x0002c26b) list_tmo_note_info_pane_g2

0x0001,

0xfd52,	// (0x000366e7) list_tmo_note_info_pane_g_ParamLimits

0xfd52,	// (0x000366e7) list_tmo_note_info_pane_g

0x58f2,	// (0x0002c287) list_tmo_note_info_text_pane_ParamLimits

0x58f2,	// (0x0002c287) list_tmo_note_info_text_pane

0x5934,	// (0x0002c2c9) list_tmo_link_pane

0x5941,	// (0x0002c2d6) scroll_pane_cp20

0x594e,	// (0x0002c2e3) list_single_tmo_link_pane_ParamLimits

0x594e,	// (0x0002c2e3) list_single_tmo_link_pane

0x595e,	// (0x0002c2f3) list_single_tmo_link_pane_t1

0x596c,	// (0x0002c301) list_tmo_note_info_text_pane_t1_ParamLimits

0x596c,	// (0x0002c301) list_tmo_note_info_text_pane_t1

0x8dae,	// (0x0002f743) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8dae,	// (0x0002f743) aid_size_touch_scroll_bar_cp01

0x8d08,	// (0x0002f69d) aid_size_touch_slider_marker

0x7d25,	// (0x0002e6ba) popup_settings_window_ParamLimits

0x7d25,	// (0x0002e6ba) popup_settings_window

0x62bd,	// (0x0002cc52) popup_candi_list_indi_window

0xcc95,	// (0x0003362a) aid_touch_navi_pane_ParamLimits

0x398f,	// (0x0002a324) rs_clock_indi_pane

0x3998,	// (0x0002a32d) sctrl_sk_bottom_pane_ParamLimits

0x39a9,	// (0x0002a33e) sctrl_sk_top_pane_ParamLimits

0x3aac,	// (0x0002a441) popup_fep_tooltip_window

0x551b,	// (0x0002beb0) aid_size_cell_widget_grid_ParamLimits

0xb4cc,	// (0x00031e61) cell_ai5_widget_pane_g1_ParamLimits

0xb4cc,	// (0x00031e61) cell_ai5_widget_pane_g1

0xb51f,	// (0x00031eb4) cell_ai5_widget_pane_g6_ParamLimits

0xb52b,	// (0x00031ec0) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0x04c9,	// (0x00026e5e) cell_ai5_widget_pane_g_ParamLimits

0x04c9,	// (0x00026e5e) cell_ai5_widget_pane_g

0xb7e8,	// (0x0003217d) cell_ai5_widget_pane_t10_ParamLimits

0xb7e8,	// (0x0003217d) cell_ai5_widget_pane_t10

0xb7fe,	// (0x00032193) grid_ai5_widget_pane_ParamLimits

0x55d2,	// (0x0002bf67) cell_contacts_ai5_widget_pane_ParamLimits

0x55d2,	// (0x0002bf67) cell_contacts_ai5_widget_pane

0x574d,	// (0x0002c0e2) popup_discreet_window_t3_ParamLimits

0x574d,	// (0x0002c0e2) popup_discreet_window_t3

0x57a6,	// (0x0002c13b) popup_fshwr2_char_preview_window_ParamLimits

0x57a6,	// (0x0002c13b) popup_fshwr2_char_preview_window

0xb922,	// (0x000322b7) tmo_note_info_pane_t1

0xb937,	// (0x000322cc) tmo_note_info_pane_t2

0xb950,	// (0x000322e5) tmo_note_info_pane_t3

0x5910,	// (0x0002c2a5) tmo_note_info_pane_t4

0x5922,	// (0x0002c2b7) tmo_note_info_pane_t5

0x0004,

0xfd57,	// (0x000366ec) tmo_note_info_pane_t

0x5934,	// (0x0002c2c9) list_tmo_link_pane_ParamLimits

0x5941,	// (0x0002c2d6) scroll_pane_cp20_ParamLimits

0xb5e2,	// (0x00031f77) bg_popup_fep_char_preview_window_cp01

0x5985,	// (0x0002c31a) popup_fshwr2_char_preview_window_t1

0x5993,	// (0x0002c328) popup_candi_list_indi_window_g1

0x599c,	// (0x0002c331) bg_cell_contacts_ai5_widget_pane

0x59a8,	// (0x0002c33d) cell_contacts_ai5_widget_pane_g1

0x59bc,	// (0x0002c351) cell_contacts_ai5_widget_pane_g2

0x59cb,	// (0x0002c360) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfd62,	// (0x000366f7) cell_contacts_ai5_widget_pane_g

0x59de,	// (0x0002c373) cell_contacts_ai5_widget_pane_t1

0xbeda,	// (0x0003286f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x5a58,	// (0x0002c3ed) settings_container_pane

0xc921,	// (0x000332b6) listscroll_set_pane_copy1

0xe60f,	// (0x00034fa4) scroll_pane_cp121_copy1

0x5a64,	// (0x0002c3f9) set_content_pane_copy1

0x5a6c,	// (0x0002c401) aid_height_set_list_copy1_ParamLimits

0x5a6c,	// (0x0002c401) aid_height_set_list_copy1

0xd9c6,	// (0x0003435b) aid_size_parent_copy1_ParamLimits

0xd9c6,	// (0x0003435b) aid_size_parent_copy1

0x5a78,	// (0x0002c40d) button_value_adjust_pane_cp6_copy1_ParamLimits

0x5a78,	// (0x0002c40d) button_value_adjust_pane_cp6_copy1

0xc031,	// (0x000329c6) list_highlight_pane_cp2_copy1_ParamLimits

0xc031,	// (0x000329c6) list_highlight_pane_cp2_copy1

0x5a8c,	// (0x0002c421) list_set_pane_copy1_ParamLimits

0x5a8c,	// (0x0002c421) list_set_pane_copy1

0x59f3,	// (0x0002c388) main_pane_set_t1_copy1_ParamLimits

0x59f3,	// (0x0002c388) main_pane_set_t1_copy1

0x5a2d,	// (0x0002c3c2) main_pane_set_t2_copy1_ParamLimits

0x5a2d,	// (0x0002c3c2) main_pane_set_t2_copy1

0x5b39,	// (0x0002c4ce) main_pane_set_t3_copy1

0x5b47,	// (0x0002c4dc) main_pane_set_t4_copy1

0x5a4c,	// (0x0002c3e1) set_content_pane_g1_copy1_ParamLimits

0x5a4c,	// (0x0002c3e1) set_content_pane_g1_copy1

0x5b55,	// (0x0002c4ea) setting_code_pane_copy1

0x5b5f,	// (0x0002c4f4) setting_slider_graphic_pane_copy1

0x5b5f,	// (0x0002c4f4) setting_slider_pane_copy1

0x5b5f,	// (0x0002c4f4) setting_text_pane_copy1

0x5b69,	// (0x0002c4fe) setting_volume_pane_copy1

0x5b72,	// (0x0002c507) settings_code_pane_cp2_copy1

0x5b7a,	// (0x0002c50f) settings_code_pane_cp_copy1_ParamLimits

0x5b7a,	// (0x0002c50f) settings_code_pane_cp_copy1

0x5b8e,	// (0x0002c523) volume_set_pane_copy1

0x5b96,	// (0x0002c52b) volume_set_pane_g10_copy1

0x5b9e,	// (0x0002c533) volume_set_pane_g1_copy1

0x5ba6,	// (0x0002c53b) volume_set_pane_g2_copy1

0x5bae,	// (0x0002c543) volume_set_pane_g3_copy1

0x5bb6,	// (0x0002c54b) volume_set_pane_g4_copy1

0x5bbe,	// (0x0002c553) volume_set_pane_g5_copy1

0x5bc6,	// (0x0002c55b) volume_set_pane_g6_copy1

0x5bce,	// (0x0002c563) volume_set_pane_g7_copy1

0x5bd6,	// (0x0002c56b) volume_set_pane_g8_copy1

0x5bde,	// (0x0002c573) volume_set_pane_g9_copy1

0xb652,	// (0x00031fe7) bg_set_opt_pane_cp_copy1_ParamLimits

0xb652,	// (0x00031fe7) bg_set_opt_pane_cp_copy1

0x5be6,	// (0x0002c57b) setting_slider_pane_t1_copy1_ParamLimits

0x5be6,	// (0x0002c57b) setting_slider_pane_t1_copy1

0x5c04,	// (0x0002c599) setting_slider_pane_t2_copy1_ParamLimits

0x5c04,	// (0x0002c599) setting_slider_pane_t2_copy1

0x5c1e,	// (0x0002c5b3) setting_slider_pane_t3_copy1_ParamLimits

0x5c1e,	// (0x0002c5b3) setting_slider_pane_t3_copy1

0x5c36,	// (0x0002c5cb) slider_set_pane_copy1_ParamLimits

0x5c36,	// (0x0002c5cb) slider_set_pane_copy1

0xbf41,	// (0x000328d6) set_opt_bg_pane_g1_copy2

0xbf49,	// (0x000328de) set_opt_bg_pane_g2_copy2

0x5c4c,	// (0x0002c5e1) set_opt_bg_pane_g3_copy2

0xbf59,	// (0x000328ee) set_opt_bg_pane_g4_copy2

0xbf61,	// (0x000328f6) set_opt_bg_pane_g5_copy2

0xbf69,	// (0x000328fe) set_opt_bg_pane_g6_copy2

0x5c56,	// (0x0002c5eb) set_opt_bg_pane_g7_copy2

0x5c5e,	// (0x0002c5f3) set_opt_bg_pane_g8_copy2

0x5c68,	// (0x0002c5fd) set_opt_bg_pane_g9_copy2

0x41c6,	// (0x0002ab5b) aid_size_touch_slider_mark_copy1_ParamLimits

0x41c6,	// (0x0002ab5b) aid_size_touch_slider_mark_copy1

0x5c72,	// (0x0002c607) slider_set_pane_g1_copy1

0x41da,	// (0x0002ab6f) slider_set_pane_g2_copy1

0x238f,	// (0x00028d24) slider_set_pane_g3_copy1_ParamLimits

0x238f,	// (0x00028d24) slider_set_pane_g3_copy1

0x23a3,	// (0x00028d38) slider_set_pane_g4_copy1_ParamLimits

0x23a3,	// (0x00028d38) slider_set_pane_g4_copy1

0x23bb,	// (0x00028d50) slider_set_pane_g5_copy1_ParamLimits

0x23bb,	// (0x00028d50) slider_set_pane_g5_copy1

0x238f,	// (0x00028d24) slider_set_pane_g6_copy1_ParamLimits

0x238f,	// (0x00028d24) slider_set_pane_g6_copy1

0x41e2,	// (0x0002ab77) slider_set_pane_g7_copy1_ParamLimits

0x41e2,	// (0x0002ab77) slider_set_pane_g7_copy1

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp2_copy1

0x5c7b,	// (0x0002c610) setting_slider_graphic_pane_g1_copy1

0x5c84,	// (0x0002c619) setting_slider_graphic_pane_t1_copy1

0x5c94,	// (0x0002c629) setting_slider_graphic_pane_t2_copy1

0x5ca4,	// (0x0002c639) slider_set_pane_cp_copy1

0x5cb4,	// (0x0002c649) input_focus_pane_cp1_copy1

0x5cbd,	// (0x0002c652) list_set_text_pane_copy1

0x5cc5,	// (0x0002c65a) setting_text_pane_g1_copy1

0x6a64,	// (0x0002d3f9) set_text_pane_t1_copy1

0x5cb4,	// (0x0002c649) input_focus_pane_cp2_copy1

0x5cc5,	// (0x0002c65a) setting_code_pane_g1_copy1

0x5cce,	// (0x0002c663) setting_code_pane_t1_copy1

0x5cdc,	// (0x0002c671) list_set_graphic_pane_copy1

0xb5f6,	// (0x00031f8b) bg_set_opt_pane_cp4_copy1

0xc623,	// (0x00032fb8) list_set_graphic_pane_g1_copy1_ParamLimits

0xc623,	// (0x00032fb8) list_set_graphic_pane_g1_copy1

0x5cf0,	// (0x0002c685) list_set_graphic_pane_g2_copy1

0xc63b,	// (0x00032fd0) list_set_graphic_pane_t1_copy1_ParamLimits

0xc63b,	// (0x00032fd0) list_set_graphic_pane_t1_copy1

0xec1f,	// (0x000355b4) rs_clock_indi_pane_g1

0x5cf8,	// (0x0002c68d) rs_clock_indi_pane_t1

0x5d06,	// (0x0002c69b) rs_indi_pane

0x5d0e,	// (0x0002c6a3) rs_indi_pane_g1

0x5d17,	// (0x0002c6ac) rs_indi_pane_g2

0x5d20,	// (0x0002c6b5) rs_indi_pane_g3

0x0002,

0xfd69,	// (0x000366fe) rs_indi_pane_g

0xc921,	// (0x000332b6) bg_popup_preview_window_pane_cp03

0x5d29,	// (0x0002c6be) popup_fep_tooltip_window_t1

0x323c,	// (0x00029bd1) popup_note2_window_g2_ParamLimits

0x323c,	// (0x00029bd1) popup_note2_window_g2

0x0001,

0xfb42,	// (0x000364d7) popup_note2_window_g_ParamLimits

0xfb42,	// (0x000364d7) popup_note2_window_g

0x3744,	// (0x0002a0d9) bg_popup_sub_pane_cp11_ParamLimits

0x3751,	// (0x0002a0e6) cell_ai3_links_pane_g1_ParamLimits

0x3768,	// (0x0002a0fd) cell_ai3_links_pane_t1

0x6a64,	// (0x0002d3f9) set_text_pane_t1_copy1_ParamLimits

0xc830,	// (0x000331c5) cell_graphic_popup_pane_cp2_ParamLimits

0xc830,	// (0x000331c5) cell_graphic_popup_pane_cp2

0x5d37,	// (0x0002c6cc) cell_graphic_popup_pane_g1_cp2

0xbc2f,	// (0x000325c4) cell_graphic_popup_pane_g2_cp2

0x5d3f,	// (0x0002c6d4) cell_graphic_popup_pane_g3_cp2

0x5d47,	// (0x0002c6dc) cell_graphic_popup_pane_t2_cp2

0xbc40,	// (0x000325d5) grid_highlight_pane_cp3_cp2

0xc1db,	// (0x00032b70) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xbeda,	// (0x0003286f) main_tmo_pane_ParamLimits

0xa8c2,	// (0x00031257) popup_tmo_big_image_note_window

0xb4bc,	// (0x00031e51) cell_ai5_widget_list_pane

0xb4c4,	// (0x00031e59) cell_ai5_widget_lrg_icon_pane

0xb922,	// (0x000322b7) tmo_note_info_pane_t1_ParamLimits

0xb937,	// (0x000322cc) tmo_note_info_pane_t2_ParamLimits

0xb950,	// (0x000322e5) tmo_note_info_pane_t3_ParamLimits

0x5910,	// (0x0002c2a5) tmo_note_info_pane_t4_ParamLimits

0x5922,	// (0x0002c2b7) tmo_note_info_pane_t5_ParamLimits

0xfd57,	// (0x000366ec) tmo_note_info_pane_t_ParamLimits

0x5a58,	// (0x0002c3ed) settings_container_pane_ParamLimits

0x5cac,	// (0x0002c641) indicator_popup_pane_cp5

0x5cac,	// (0x0002c641) indicator_popup_pane_cp6

0x5cdc,	// (0x0002c671) list_set_graphic_pane_copy1_ParamLimits

0xb5e2,	// (0x00031f77) bg_popup_window_pane_cp23

0x5d55,	// (0x0002c6ea) popup_tmo_big_image_note_window_g1

0x5d60,	// (0x0002c6f5) popup_tmo_big_image_note_window_t1

0x5d70,	// (0x0002c705) popup_tmo_big_image_note_window_t2

0x5d80,	// (0x0002c715) popup_tmo_big_image_note_window_t3

0x0002,

0xfd70,	// (0x00036705) popup_tmo_big_image_note_window_t

0xb965,	// (0x000322fa) cell_ai5_widget_lrg_icon_pane_g1

0xb96d,	// (0x00032302) cell_ai5_widget_lrg_icon_pane_t1

0xb97b,	// (0x00032310) cell_ai5_widget_list_row_pane_ParamLimits

0xb97b,	// (0x00032310) cell_ai5_widget_list_row_pane

0xb994,	// (0x00032329) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xb994,	// (0x00032329) cell_ai5_widget_list_row_pane_g1

0xb9a1,	// (0x00032336) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xb9a1,	// (0x00032336) cell_ai5_widget_list_row_pane_t1

0xb9b9,	// (0x0003234e) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xb9b9,	// (0x0003234e) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfd77,	// (0x0003670c) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfd77,	// (0x0003670c) cell_ai5_widget_list_row_pane_t

0x07c8,	// (0x0002715d) main_fep_vtchi_ss_pane

0x5d90,	// (0x0002c725) popup_fep_char_pre_window

0x5d98,	// (0x0002c72d) popup_fep_ituss_window

0x5db9,	// (0x0002c74e) popup_fep_vkbss_window

0x5dd8,	// (0x0002c76d) grid_vkbss_keypad_pane_ParamLimits

0x5dd8,	// (0x0002c76d) grid_vkbss_keypad_pane

0x5de8,	// (0x0002c77d) ituss_keypad_pane

0x5e00,	// (0x0002c795) aid_vkbss_key_offset_ParamLimits

0x5e00,	// (0x0002c795) aid_vkbss_key_offset

0x5e0c,	// (0x0002c7a1) cell_vkbss_key_pane_ParamLimits

0x5e0c,	// (0x0002c7a1) cell_vkbss_key_pane

0xddc0,	// (0x00034755) bg_cell_vkbss_key_g1_ParamLimits

0xddc0,	// (0x00034755) bg_cell_vkbss_key_g1

0x5e22,	// (0x0002c7b7) cell_vkbss_key_3p_pane_ParamLimits

0x5e22,	// (0x0002c7b7) cell_vkbss_key_3p_pane

0x5e3c,	// (0x0002c7d1) cell_vkbss_key_g1_ParamLimits

0x5e3c,	// (0x0002c7d1) cell_vkbss_key_g1

0x5e56,	// (0x0002c7eb) cell_vkbss_key_t1_ParamLimits

0x5e56,	// (0x0002c7eb) cell_vkbss_key_t1

0x5e81,	// (0x0002c816) cell_ituss_key_pane_ParamLimits

0x5e81,	// (0x0002c816) cell_ituss_key_pane

0x5e91,	// (0x0002c826) bg_cell_ituss_key_g1_ParamLimits

0x5e91,	// (0x0002c826) bg_cell_ituss_key_g1

0x5e9d,	// (0x0002c832) cell_ituss_key_pane_g1_ParamLimits

0x5e9d,	// (0x0002c832) cell_ituss_key_pane_g1

0x5ea9,	// (0x0002c83e) cell_ituss_key_pane_g2_ParamLimits

0x5ea9,	// (0x0002c83e) cell_ituss_key_pane_g2

0x0001,

0xfd7c,	// (0x00036711) cell_ituss_key_pane_g_ParamLimits

0xfd7c,	// (0x00036711) cell_ituss_key_pane_g

0x5ec2,	// (0x0002c857) cell_ituss_key_t1_ParamLimits

0x5ec2,	// (0x0002c857) cell_ituss_key_t1

0x5ef0,	// (0x0002c885) cell_ituss_key_t2_ParamLimits

0x5ef0,	// (0x0002c885) cell_ituss_key_t2

0x5f21,	// (0x0002c8b6) cell_ituss_key_t3_ParamLimits

0x5f21,	// (0x0002c8b6) cell_ituss_key_t3

0x5f52,	// (0x0002c8e7) cell_ituss_key_t4_ParamLimits

0x5f52,	// (0x0002c8e7) cell_ituss_key_t4

0x0003,

0xfd81,	// (0x00036716) cell_ituss_key_t_ParamLimits

0xfd81,	// (0x00036716) cell_ituss_key_t

0x5f83,	// (0x0002c918) cell_vkbss_key_3p_pane_g1

0x5f8b,	// (0x0002c920) cell_vkbss_key_3p_pane_g2

0x5f93,	// (0x0002c928) cell_vkbss_key_3p_pane_g3

0x0002,

0xfd8a,	// (0x0003671f) cell_vkbss_key_3p_pane_g

0xb5e2,	// (0x00031f77) bg_popup_fep_char_preview_window_cp02

0x5f9b,	// (0x0002c930) popup_fep_char_pre_window_t1

0xb4b2,	// (0x00031e47) main_ai5_sk_pane

0x599c,	// (0x0002c331) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x59a8,	// (0x0002c33d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x59bc,	// (0x0002c351) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x59cb,	// (0x0002c360) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfd62,	// (0x000366f7) cell_contacts_ai5_widget_pane_g_ParamLimits

0x59de,	// (0x0002c373) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xbeda,	// (0x0003286f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xb9cb,	// (0x00032360) main_ai5_sk_pane_g1

0xd254,	// (0x00033be9) popup_query_code_window_g1

0x5dae,	// (0x0002c743) popup_fep_vkb_icf_pane

0x5dc2,	// (0x0002c757) popup_fep_vtchi_icf_pane

0xbeda,	// (0x0003286f) bg_icf_pane

0x5fb9,	// (0x0002c94e) list_vkb_icf_pane

0xbeda,	// (0x0003286f) bg_icf_pane_cp01

0x5fd1,	// (0x0002c966) vtchi_icf_list_pane

0x5fe1,	// (0x0002c976) list_vkb_icf_pane_t1_ParamLimits

0x5fe1,	// (0x0002c976) list_vkb_icf_pane_t1

0x5ffb,	// (0x0002c990) vtchi_icf_list_pane_t1_ParamLimits

0x5ffb,	// (0x0002c990) vtchi_icf_list_pane_t1

0x5d98,	// (0x0002c72d) popup_fep_ituss_window_ParamLimits

0x5dc2,	// (0x0002c757) popup_fep_vtchi_icf_pane_ParamLimits

0x5de8,	// (0x0002c77d) ituss_keypad_pane_ParamLimits

0x5df7,	// (0x0002c78c) ituss_sks_pane

0xbeda,	// (0x0003286f) bg_icf_pane_ParamLimits

0x5faa,	// (0x0002c93f) icf_edit_indi_pane_ParamLimits

0x5faa,	// (0x0002c93f) icf_edit_indi_pane

0x5fb9,	// (0x0002c94e) list_vkb_icf_pane_ParamLimits

0xbeda,	// (0x0003286f) bg_icf_pane_cp01_ParamLimits

0x5fc5,	// (0x0002c95a) icf_edit_indi_pane_cp01_ParamLimits

0x5fc5,	// (0x0002c95a) icf_edit_indi_pane_cp01

0x5fd9,	// (0x0002c96e) vtchi_query_pane

0xeea6,	// (0x0003583b) icf_edit_indi_pane_g1_ParamLimits

0xeea6,	// (0x0003583b) icf_edit_indi_pane_g1

0x6022,	// (0x0002c9b7) icf_edit_indi_pane_g2_ParamLimits

0x6022,	// (0x0002c9b7) icf_edit_indi_pane_g2

0x0001,

0xfd91,	// (0x00036726) icf_edit_indi_pane_g_ParamLimits

0xfd91,	// (0x00036726) icf_edit_indi_pane_g

0x602e,	// (0x0002c9c3) icf_edit_indi_pane_t1

0x603c,	// (0x0002c9d1) bg_input_focus_pane_cp042

0xbe13,	// (0x000327a8) vtchi_button_pane

0x6045,	// (0x0002c9da) vtchi_query_pane_t1

0x6053,	// (0x0002c9e8) vtchi_query_pane_t2

0x6061,	// (0x0002c9f6) vtchi_query_pane_t3

0x0002,

0xfd96,	// (0x0003672b) vtchi_query_pane_t

0xb5e2,	// (0x00031f77) bg_button_pane_cp13

0x606f,	// (0x0002ca04) vtchi_button_pane_g1

0x4dbc,	// (0x0002b751) ituss_sks_pane_g1

0x6077,	// (0x0002ca0c) ituss_sks_pane_g2

0x0001,

0xfd9d,	// (0x00036732) ituss_sks_pane_g

0x6080,	// (0x0002ca15) ituss_sks_pane_t1

0x608e,	// (0x0002ca23) ituss_sks_pane_t2

0x0001,

0xfda2,	// (0x00036737) ituss_sks_pane_t

0xe8ec,	// (0x00035281) indicator_nsta_pane_cp_g1

0xe8f5,	// (0x0003528a) indicator_nsta_pane_cp_g2

0xe8fd,	// (0x00035292) indicator_nsta_pane_cp_g3

0xe905,	// (0x0003529a) indicator_nsta_pane_cp_g4

0xe90d,	// (0x000352a2) indicator_nsta_pane_cp_g5

0xe915,	// (0x000352aa) indicator_nsta_pane_cp_g6

0x0005,

0x014c,	// (0x00026ae1) indicator_nsta_pane_cp_g

0xb2c3,	// (0x00031c58) cell_graphic2_pane_t2_ParamLimits

0xb2c3,	// (0x00031c58) cell_graphic2_pane_t2

0x0001,

0xfc81,	// (0x00036616) cell_graphic2_pane_t_ParamLimits

0xfc81,	// (0x00036616) cell_graphic2_pane_t

0xb2f9,	// (0x00031c8e) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Small

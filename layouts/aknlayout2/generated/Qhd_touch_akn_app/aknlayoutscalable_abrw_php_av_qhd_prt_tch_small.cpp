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

#include "aknlayoutscalable_abrw_php_av_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0002ac1c };

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
0x7700,	// (0x0003231c) Screen

0x7714,	// (0x00032330) application_window_ParamLimits

0x7714,	// (0x00032330) application_window

0x772e,	// (0x0003234a) screen_g1

0x4930,	// (0x0002f54c) area_bottom_pane_ParamLimits

0x4930,	// (0x0002f54c) area_bottom_pane

0x49f0,	// (0x0002f60c) area_top_pane_ParamLimits

0x49f0,	// (0x0002f60c) area_top_pane

0x4a8e,	// (0x0002f6aa) main_pane_ParamLimits

0x4a8e,	// (0x0002f6aa) main_pane

0x7738,	// (0x00032354) misc_graphics

0x989e,	// (0x000344ba) battery_pane_ParamLimits

0x989e,	// (0x000344ba) battery_pane

0xa564,	// (0x00035180) bg_status_flat_pane_g8

0xa56c,	// (0x00035188) bg_status_flat_pane_g9

0x9960,	// (0x0003457c) context_pane_ParamLimits

0x9960,	// (0x0003457c) context_pane

0x9a76,	// (0x00034692) navi_pane_ParamLimits

0x9a76,	// (0x00034692) navi_pane

0x9afa,	// (0x00034716) signal_pane_ParamLimits

0x9afa,	// (0x00034716) signal_pane

0x0008,

0xf879,	// (0x0003a495) bg_status_flat_pane_g

0x9b67,	// (0x00034783) status_pane_g1_ParamLimits

0x9b67,	// (0x00034783) status_pane_g1

0x9b7b,	// (0x00034797) status_pane_g2_ParamLimits

0x9b7b,	// (0x00034797) status_pane_g2

0x9b87,	// (0x000347a3) status_pane_g3_ParamLimits

0x9b87,	// (0x000347a3) status_pane_g3

0x0004,

0xf7a0,	// (0x0003a3bc) status_pane_g_ParamLimits

0xf7a0,	// (0x0003a3bc) status_pane_g

0x9bbb,	// (0x000347d7) title_pane_ParamLimits

0x9bbb,	// (0x000347d7) title_pane

0x9bf8,	// (0x00034814) uni_indicator_pane_ParamLimits

0x9bf8,	// (0x00034814) uni_indicator_pane

0x97c2,	// (0x000343de) bg_list_pane_ParamLimits

0x97c2,	// (0x000343de) bg_list_pane

0x5afe,	// (0x0003071a) find_pane

0x97e2,	// (0x000343fe) listscroll_app_pane_ParamLimits

0x97e2,	// (0x000343fe) listscroll_app_pane

0x97ee,	// (0x0003440a) listscroll_form_pane

0x4866,	// (0x0002f482) listscroll_gen_pane_ParamLimits

0x4866,	// (0x0002f482) listscroll_gen_pane

0x5b06,	// (0x00030722) listscroll_set_pane

0x8a1c,	// (0x00033638) main_idle_act_pane

0x94ca,	// (0x000340e6) main_idle_trad_pane

0x94ca,	// (0x000340e6) main_list_empty_pane

0x9808,	// (0x00034424) main_midp_pane

0x9814,	// (0x00034430) main_pane_g1_ParamLimits

0x9814,	// (0x00034430) main_pane_g1

0x5b1c,	// (0x00030738) popup_ai_message_window_ParamLimits

0x5b1c,	// (0x00030738) popup_ai_message_window

0x5bca,	// (0x000307e6) popup_fep_china_uni_window_ParamLimits

0x5bca,	// (0x000307e6) popup_fep_china_uni_window

0x5c26,	// (0x00030842) popup_fep_japan_candidate_window_ParamLimits

0x5c26,	// (0x00030842) popup_fep_japan_candidate_window

0x5c46,	// (0x00030862) popup_fep_japan_predictive_window_ParamLimits

0x5c46,	// (0x00030862) popup_fep_japan_predictive_window

0x5c76,	// (0x00030892) popup_find_window

0x5c83,	// (0x0003089f) popup_grid_graphic_window_ParamLimits

0x5c83,	// (0x0003089f) popup_grid_graphic_window

0x5cad,	// (0x000308c9) popup_large_graphic_colour_window

0x5cd3,	// (0x000308ef) popup_menu_window_ParamLimits

0x5cd3,	// (0x000308ef) popup_menu_window

0x5e8b,	// (0x00030aa7) popup_note_image_window

0x5e77,	// (0x00030a93) popup_note_wait_window_ParamLimits

0x5e77,	// (0x00030a93) popup_note_wait_window

0x5e77,	// (0x00030a93) popup_note_window_ParamLimits

0x5e77,	// (0x00030a93) popup_note_window

0x5ee1,	// (0x00030afd) popup_query_code_window_ParamLimits

0x5ee1,	// (0x00030afd) popup_query_code_window

0x5ef5,	// (0x00030b11) popup_query_data_code_window_ParamLimits

0x5ef5,	// (0x00030b11) popup_query_data_code_window

0x5f12,	// (0x00030b2e) popup_query_data_window_ParamLimits

0x5f12,	// (0x00030b2e) popup_query_data_window

0x5f2e,	// (0x00030b4a) popup_query_sat_info_window_ParamLimits

0x5f2e,	// (0x00030b4a) popup_query_sat_info_window

0x5f67,	// (0x00030b83) popup_snote_single_graphic_window_ParamLimits

0x5f67,	// (0x00030b83) popup_snote_single_graphic_window

0x5f67,	// (0x00030b83) popup_snote_single_text_window_ParamLimits

0x5f67,	// (0x00030b83) popup_snote_single_text_window

0x5f7c,	// (0x00030b98) popup_sub_window_general

0x60ac,	// (0x00030cc8) popup_window_general_ParamLimits

0x60ac,	// (0x00030cc8) popup_window_general

0x9822,	// (0x0003443e) power_save_pane

0x599a,	// (0x000305b6) control_pane_g1_ParamLimits

0x599a,	// (0x000305b6) control_pane_g1

0x59c1,	// (0x000305dd) control_pane_g2_ParamLimits

0x59c1,	// (0x000305dd) control_pane_g2

0x9785,	// (0x000343a1) control_pane_g3_ParamLimits

0x9785,	// (0x000343a1) control_pane_g3

0x0007,

0xf788,	// (0x0003a3a4) control_pane_g_ParamLimits

0xf788,	// (0x0003a3a4) control_pane_g

0x5a0b,	// (0x00030627) control_pane_t1_ParamLimits

0x5a0b,	// (0x00030627) control_pane_t1

0x5a57,	// (0x00030673) control_pane_t2_ParamLimits

0x5a57,	// (0x00030673) control_pane_t2

0x0002,

0xf799,	// (0x0003a3b5) control_pane_t_ParamLimits

0xf799,	// (0x0003a3b5) control_pane_t

0x96aa,	// (0x000342c6) navi_navi_volume_pane_cp1

0x96b2,	// (0x000342ce) status_small_icon_pane

0x96ba,	// (0x000342d6) status_small_pane_g1_ParamLimits

0x96ba,	// (0x000342d6) status_small_pane_g1

0x96ee,	// (0x0003430a) status_small_pane_g2_ParamLimits

0x96ee,	// (0x0003430a) status_small_pane_g2

0x96fa,	// (0x00034316) status_small_pane_g3_ParamLimits

0x96fa,	// (0x00034316) status_small_pane_g3

0x9706,	// (0x00034322) status_small_pane_g4_ParamLimits

0x9706,	// (0x00034322) status_small_pane_g4

0x9712,	// (0x0003432e) status_small_pane_g5_ParamLimits

0x9712,	// (0x0003432e) status_small_pane_g5

0x9720,	// (0x0003433c) status_small_pane_g6_ParamLimits

0x9720,	// (0x0003433c) status_small_pane_g6

0x0007,

0xf777,	// (0x0003a393) status_small_pane_g_ParamLimits

0xf777,	// (0x0003a393) status_small_pane_g

0x974f,	// (0x0003436b) status_small_pane_t1

0x9771,	// (0x0003438d) status_small_wait_pane_ParamLimits

0x9771,	// (0x0003438d) status_small_wait_pane

0x8f3c,	// (0x00033b58) aid_levels_signal_ParamLimits

0x8f3c,	// (0x00033b58) aid_levels_signal

0x8f4e,	// (0x00033b6a) signal_pane_g1_ParamLimits

0x8f4e,	// (0x00033b6a) signal_pane_g1

0x8f63,	// (0x00033b7f) signal_pane_g2_ParamLimits

0x8f63,	// (0x00033b7f) signal_pane_g2

0x0003,

0xf708,	// (0x0003a324) signal_pane_g_ParamLimits

0xf708,	// (0x0003a324) signal_pane_g

0x8f9e,	// (0x00033bba) context_pane_g1

0x7742,	// (0x0003235e) title_pane_g1

0x7778,	// (0x00032394) title_pane_t1

0x77e0,	// (0x000323fc) title_pane_t2

0x7806,	// (0x00032422) title_pane_t3

0x0002,

0xf557,	// (0x0003a173) title_pane_t

0x9c10,	// (0x0003482c) aid_levels_battery_ParamLimits

0x9c10,	// (0x0003482c) aid_levels_battery

0x9c24,	// (0x00034840) battery_pane_g1_ParamLimits

0x9c24,	// (0x00034840) battery_pane_g1

0x9c3a,	// (0x00034856) battery_pane_g2_ParamLimits

0x9c3a,	// (0x00034856) battery_pane_g2

0x0001,

0xf7ab,	// (0x0003a3c7) battery_pane_g_ParamLimits

0xf7ab,	// (0x0003a3c7) battery_pane_g

0xaea6,	// (0x00035ac2) uni_indicator_pane_g1

0xaebc,	// (0x00035ad8) uni_indicator_pane_g2

0xaed2,	// (0x00035aee) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0003a53d) uni_indicator_pane_g

0x933c,	// (0x00033f58) navi_icon_pane_ParamLimits

0x933c,	// (0x00033f58) navi_icon_pane

0x927a,	// (0x00033e96) navi_midp_pane

0x9358,	// (0x00033f74) navi_navi_pane

0x9362,	// (0x00033f7e) navi_text_pane_ParamLimits

0x9362,	// (0x00033f7e) navi_text_pane

0x772e,	// (0x0003234a) status_small_wait_pane_g1

0x83e6,	// (0x00033002) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0003a538) status_small_wait_pane_g

0xabcb,	// (0x000357e7) navi_navi_icon_text_pane

0xabd3,	// (0x000357ef) navi_navi_pane_g1_ParamLimits

0xabd3,	// (0x000357ef) navi_navi_pane_g1

0xabe5,	// (0x00035801) navi_navi_pane_g2_ParamLimits

0xabe5,	// (0x00035801) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0003a506) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0003a506) navi_navi_pane_g

0xabf7,	// (0x00035813) navi_navi_tabs_pane

0xac00,	// (0x0003581c) navi_navi_text_pane

0xabcb,	// (0x000357e7) navi_navi_volume_pane

0xaba7,	// (0x000357c3) navi_text_pane_t1

0xab9b,	// (0x000357b7) navi_icon_pane_g1

0xaaee,	// (0x0003570a) navi_navi_text_pane_t1

0x647d,	// (0x00031099) navi_navi_volume_pane_g1

0x6485,	// (0x000310a1) volume_small_pane

0xaa48,	// (0x00035664) navi_navi_icon_text_pane_g1

0xaa50,	// (0x0003566c) navi_navi_icon_text_pane_t1

0x9358,	// (0x00033f74) navi_tabs_2_long_pane

0x9358,	// (0x00033f74) navi_tabs_2_pane

0x9358,	// (0x00033f74) navi_tabs_3_long_pane

0x9358,	// (0x00033f74) navi_tabs_3_pane

0x9358,	// (0x00033f74) navi_tabs_4_pane

0x645d,	// (0x00031079) tabs_2_active_pane_ParamLimits

0x645d,	// (0x00031079) tabs_2_active_pane

0x646d,	// (0x00031089) tabs_2_passive_pane_ParamLimits

0x646d,	// (0x00031089) tabs_2_passive_pane

0x642b,	// (0x00031047) tabs_3_active_pane_ParamLimits

0x642b,	// (0x00031047) tabs_3_active_pane

0x643b,	// (0x00031057) tabs_3_passive_pane_ParamLimits

0x643b,	// (0x00031057) tabs_3_passive_pane

0x644c,	// (0x00031068) tabs_3_passive_pane_cp_ParamLimits

0x644c,	// (0x00031068) tabs_3_passive_pane_cp

0x63e7,	// (0x00031003) tabs_4_active_pane_ParamLimits

0x63e7,	// (0x00031003) tabs_4_active_pane

0x63f8,	// (0x00031014) tabs_4_passive_pane_ParamLimits

0x63f8,	// (0x00031014) tabs_4_passive_pane

0x6409,	// (0x00031025) tabs_4_passive_pane_cp_ParamLimits

0x6409,	// (0x00031025) tabs_4_passive_pane_cp

0x641a,	// (0x00031036) tabs_4_passive_pane_cp2_ParamLimits

0x641a,	// (0x00031036) tabs_4_passive_pane_cp2

0x63c3,	// (0x00030fdf) tabs_2_long_active_pane_ParamLimits

0x63c3,	// (0x00030fdf) tabs_2_long_active_pane

0x63d5,	// (0x00030ff1) tabs_2_long_passive_pane_ParamLimits

0x63d5,	// (0x00030ff1) tabs_2_long_passive_pane

0x6384,	// (0x00030fa0) tabs_3_long_active_pane_ParamLimits

0x6384,	// (0x00030fa0) tabs_3_long_active_pane

0x6397,	// (0x00030fb3) tabs_3_long_passive_pane_ParamLimits

0x6397,	// (0x00030fb3) tabs_3_long_passive_pane

0x63b0,	// (0x00030fcc) tabs_3_long_passive_pane_cp_ParamLimits

0x63b0,	// (0x00030fcc) tabs_3_long_passive_pane_cp

0x632a,	// (0x00030f46) volume_small_pane_g1

0x6333,	// (0x00030f4f) volume_small_pane_g2

0x633c,	// (0x00030f58) volume_small_pane_g3

0x6345,	// (0x00030f61) volume_small_pane_g4

0x634e,	// (0x00030f6a) volume_small_pane_g5

0x6357,	// (0x00030f73) volume_small_pane_g6

0x6360,	// (0x00030f7c) volume_small_pane_g7

0x6369,	// (0x00030f85) volume_small_pane_g8

0x6372,	// (0x00030f8e) volume_small_pane_g9

0x637b,	// (0x00030f97) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0003a4d2) volume_small_pane_g

0x7818,	// (0x00032434) bg_active_tab_pane_cp2_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp2

0x7826,	// (0x00032442) tabs_3_active_pane_g1

0x782e,	// (0x0003244a) tabs_3_active_pane_t1

0x7818,	// (0x00032434) bg_passive_tab_pane_cp2_ParamLimits

0x7818,	// (0x00032434) bg_passive_tab_pane_cp2

0x7826,	// (0x00032442) tabs_3_passive_pane_g1

0x782e,	// (0x0003244a) tabs_3_passive_pane_t1

0x7818,	// (0x00032434) bg_active_tab_pane_cp3_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp3

0x7840,	// (0x0003245c) tabs_4_active_pane_g1

0x7848,	// (0x00032464) tabs_4_active_pane_t1

0x7818,	// (0x00032434) bg_passive_tab_pane_cp3_ParamLimits

0x7818,	// (0x00032434) bg_passive_tab_pane_cp3

0x7840,	// (0x0003245c) tabs_4_1_passive_pane_g1

0x7848,	// (0x00032464) tabs_4_1_passive_pane_t1

0x9808,	// (0x00034424) list_highlight_pane_cp2

0xb11a,	// (0x00035d36) list_set_pane_ParamLimits

0xb11a,	// (0x00035d36) list_set_pane

0xb1c0,	// (0x00035ddc) main_pane_set_t1_ParamLimits

0xb1c0,	// (0x00035ddc) main_pane_set_t1

0xb1e0,	// (0x00035dfc) main_pane_set_t2_ParamLimits

0xb1e0,	// (0x00035dfc) main_pane_set_t2

0xb1f4,	// (0x00035e10) main_pane_set_t3_ParamLimits

0xb1f4,	// (0x00035e10) main_pane_set_t3

0xb206,	// (0x00035e22) main_pane_set_t4_ParamLimits

0xb206,	// (0x00035e22) main_pane_set_t4

0x0003,

0xf986,	// (0x0003a5a2) main_pane_set_t_ParamLimits

0xf986,	// (0x0003a5a2) main_pane_set_t

0xb218,	// (0x00035e34) setting_code_pane

0xb224,	// (0x00035e40) setting_slider_graphic_pane

0xb224,	// (0x00035e40) setting_slider_pane

0xb224,	// (0x00035e40) setting_text_pane

0xb224,	// (0x00035e40) setting_volume_pane

0x4cdd,	// (0x0002f8f9) volume_set_pane

0x7818,	// (0x00032434) bg_set_opt_pane_cp

0x4ce5,	// (0x0002f901) setting_slider_pane_t1

0x4cfe,	// (0x0002f91a) setting_slider_pane_t2

0x4d18,	// (0x0002f934) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003a17a) setting_slider_pane_t

0x4d30,	// (0x0002f94c) slider_set_pane

0x7738,	// (0x00032354) bg_set_opt_pane_cp2

0x785a,	// (0x00032476) setting_slider_graphic_pane_g1

0x4d46,	// (0x0002f962) setting_slider_graphic_pane_t1

0x4d56,	// (0x0002f972) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003a181) setting_slider_graphic_pane_t

0x4d66,	// (0x0002f982) slider_set_pane_cp

0x7738,	// (0x00032354) input_focus_pane_cp1

0xb0d9,	// (0x00035cf5) list_set_text_pane

0x772e,	// (0x0003234a) setting_text_pane_g1

0x7738,	// (0x00032354) input_focus_pane_cp2

0x772e,	// (0x0003234a) setting_code_pane_g1

0x7863,	// (0x0003247f) setting_code_pane_t1

0x4d6e,	// (0x0002f98a) set_text_pane_t1_ParamLimits

0x4d6e,	// (0x0002f98a) set_text_pane_t1

0x8893,	// (0x000334af) set_opt_bg_pane_g1

0x889b,	// (0x000334b7) set_opt_bg_pane_g2

0xb0b3,	// (0x00035ccf) set_opt_bg_pane_g3

0x88ab,	// (0x000334c7) set_opt_bg_pane_g4

0x88b3,	// (0x000334cf) set_opt_bg_pane_g5

0x88bb,	// (0x000334d7) set_opt_bg_pane_g6

0xb0bd,	// (0x00035cd9) set_opt_bg_pane_g7

0xb0c5,	// (0x00035ce1) set_opt_bg_pane_g8

0xb0cf,	// (0x00035ceb) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0003a58f) set_opt_bg_pane_g

0xb0a6,	// (0x00035cc2) slider_set_pane_g1

0x651a,	// (0x00031136) slider_set_pane_g2

0x0006,

0xf964,	// (0x0003a580) slider_set_pane_g

0x648e,	// (0x000310aa) volume_set_pane_g1

0x6496,	// (0x000310b2) volume_set_pane_g2

0x649e,	// (0x000310ba) volume_set_pane_g3

0x64a6,	// (0x000310c2) volume_set_pane_g4

0x64ae,	// (0x000310ca) volume_set_pane_g5

0x64b6,	// (0x000310d2) volume_set_pane_g6

0x64be,	// (0x000310da) volume_set_pane_g7

0x64c6,	// (0x000310e2) volume_set_pane_g8

0x64ce,	// (0x000310ea) volume_set_pane_g9

0x64d6,	// (0x000310f2) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0003a558) volume_set_pane_g

0x7871,	// (0x0003248d) indicator_pane_ParamLimits

0x7871,	// (0x0003248d) indicator_pane

0x787d,	// (0x00032499) main_idle_pane_g2_ParamLimits

0x787d,	// (0x00032499) main_idle_pane_g2

0x78a5,	// (0x000324c1) main_pane_idle_g1_ParamLimits

0x78a5,	// (0x000324c1) main_pane_idle_g1

0x78b2,	// (0x000324ce) popup_clock_digital_analogue_window_ParamLimits

0x78b2,	// (0x000324ce) popup_clock_digital_analogue_window

0x78c9,	// (0x000324e5) soft_indicator_pane_ParamLimits

0x78c9,	// (0x000324e5) soft_indicator_pane

0x78d5,	// (0x000324f1) wallpaper_pane_ParamLimits

0x78d5,	// (0x000324f1) wallpaper_pane

0x772e,	// (0x0003234a) wallpaper_pane_g1

0x78e9,	// (0x00032505) indicator_pane_g1_ParamLimits

0x78e9,	// (0x00032505) indicator_pane_g1

0xb4de,	// (0x000360fa) navi_navi_icon_text_pane_srt_g1

0x7904,	// (0x00032520) soft_indicator_pane_t1

0x791e,	// (0x0003253a) aid_ps_area_pane

0x792f,	// (0x0003254b) aid_ps_clock_pane

0x793d,	// (0x00032559) aid_ps_indicator_pane

0x7949,	// (0x00032565) indicator_ps_pane_ParamLimits

0x7949,	// (0x00032565) indicator_ps_pane

0x7958,	// (0x00032574) power_save_pane_g1_ParamLimits

0x7958,	// (0x00032574) power_save_pane_g1

0x7964,	// (0x00032580) power_save_pane_g2_ParamLimits

0x7964,	// (0x00032580) power_save_pane_g2

0x48e4,	// (0x0002f500) aid_navinavi_width_pane

0x791e,	// (0x0003253a) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003a186) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003a186) power_save_pane_g

0x7972,	// (0x0003258e) power_save_pane_t1_ParamLimits

0x7972,	// (0x0003258e) power_save_pane_t1

0x792f,	// (0x0003254b) aid_ps_clock_pane_ParamLimits

0x793d,	// (0x00032559) aid_ps_indicator_pane_ParamLimits

0x7984,	// (0x000325a0) power_save_pane_t4_ParamLimits

0x7984,	// (0x000325a0) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003a18b) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003a18b) power_save_pane_t

0x815f,	// (0x00032d7b) power_save_t3_ParamLimits

0x815f,	// (0x00032d7b) power_save_t3

0x7999,	// (0x000325b5) power_save_t2_ParamLimits

0x7999,	// (0x000325b5) power_save_t2

0x8174,	// (0x00032d90) indicator_ps_pane_g1

0x817d,	// (0x00032d99) ai_gene_pane_ParamLimits

0x817d,	// (0x00032d99) ai_gene_pane

0x8189,	// (0x00032da5) ai_links_pane_ParamLimits

0x8189,	// (0x00032da5) ai_links_pane

0x8195,	// (0x00032db1) indicator_pane_cp1_ParamLimits

0x8195,	// (0x00032db1) indicator_pane_cp1

0x81a1,	// (0x00032dbd) main_pane_idle_g1_cp_ParamLimits

0x81a1,	// (0x00032dbd) main_pane_idle_g1_cp

0x81ad,	// (0x00032dc9) popup_ai_links_title_window

0x81b6,	// (0x00032dd2) soft_indicator_pane_cp1_ParamLimits

0x81b6,	// (0x00032dd2) soft_indicator_pane_cp1

0xae94,	// (0x00035ab0) ai_links_pane_g1

0xae9d,	// (0x00035ab9) grid_ai_links_pane

0xae77,	// (0x00035a93) ai_gene_pane_1

0xae82,	// (0x00035a9e) ai_gene_pane_2

0xae8b,	// (0x00035aa7) list_highlight_pane_cp4

0xae5b,	// (0x00035a77) cell_ai_link_pane_ParamLimits

0xae5b,	// (0x00035a77) cell_ai_link_pane

0xae53,	// (0x00035a6f) cell_ai_link_pane_g1

0x83e6,	// (0x00033002) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0003a533) cell_ai_link_pane_g

0x7738,	// (0x00032354) grid_highlight_cp2

0x7738,	// (0x00032354) bg_popup_sub_pane_cp1

0x81d0,	// (0x00032dec) popup_ai_links_title_window_t1

0xada1,	// (0x000359bd) ai_gene_pane_1_g1_ParamLimits

0xada1,	// (0x000359bd) ai_gene_pane_1_g1

0xadad,	// (0x000359c9) ai_gene_pane_1_g2_ParamLimits

0xadad,	// (0x000359c9) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0003a529) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0003a529) ai_gene_pane_1_g

0xadba,	// (0x000359d6) ai_gene_pane_1_t1_ParamLimits

0xadba,	// (0x000359d6) ai_gene_pane_1_t1

0xadee,	// (0x00035a0a) grid_ai_soft_ind_pane

0xad8c,	// (0x000359a8) ai_gene_pane_2_t1_ParamLimits

0xad8c,	// (0x000359a8) ai_gene_pane_2_t1

0x81df,	// (0x00032dfb) main_pane_empty_t1_ParamLimits

0x81df,	// (0x00032dfb) main_pane_empty_t1

0x81f7,	// (0x00032e13) main_pane_empty_t2_ParamLimits

0x81f7,	// (0x00032e13) main_pane_empty_t2

0x820c,	// (0x00032e28) main_pane_empty_t3_ParamLimits

0x820c,	// (0x00032e28) main_pane_empty_t3

0x821e,	// (0x00032e3a) main_pane_empty_t4_ParamLimits

0x821e,	// (0x00032e3a) main_pane_empty_t4

0x8230,	// (0x00032e4c) main_pane_empty_t5_ParamLimits

0x8230,	// (0x00032e4c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003a190) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003a190) main_pane_empty_t

0x88e4,	// (0x00033500) bg_popup_window_pane_ParamLimits

0x88e4,	// (0x00033500) bg_popup_window_pane

0xaafc,	// (0x00035718) find_popup_pane_cp2_ParamLimits

0xaafc,	// (0x00035718) find_popup_pane_cp2

0xab08,	// (0x00035724) heading_pane_ParamLimits

0xab08,	// (0x00035724) heading_pane

0x7738,	// (0x00032354) bg_popup_sub_pane

0xaa6a,	// (0x00035686) bg_popup_window_pane_g1_ParamLimits

0xaa6a,	// (0x00035686) bg_popup_window_pane_g1

0xaa76,	// (0x00035692) bg_popup_window_pane_g2_ParamLimits

0xaa76,	// (0x00035692) bg_popup_window_pane_g2

0xaa82,	// (0x0003569e) bg_popup_window_pane_g3_ParamLimits

0xaa82,	// (0x0003569e) bg_popup_window_pane_g3

0xaa8e,	// (0x000356aa) bg_popup_window_pane_g4_ParamLimits

0xaa8e,	// (0x000356aa) bg_popup_window_pane_g4

0xaaa6,	// (0x000356c2) bg_popup_window_pane_g5_ParamLimits

0xaaa6,	// (0x000356c2) bg_popup_window_pane_g5

0xaab2,	// (0x000356ce) bg_popup_window_pane_g6_ParamLimits

0xaab2,	// (0x000356ce) bg_popup_window_pane_g6

0xaabe,	// (0x000356da) bg_popup_window_pane_g7_ParamLimits

0xaabe,	// (0x000356da) bg_popup_window_pane_g7

0xaaca,	// (0x000356e6) bg_popup_window_pane_g8_ParamLimits

0xaaca,	// (0x000356e6) bg_popup_window_pane_g8

0xaad6,	// (0x000356f2) bg_popup_window_pane_g9_ParamLimits

0xaad6,	// (0x000356f2) bg_popup_window_pane_g9

0xaae2,	// (0x000356fe) bg_popup_window_pane_g10_ParamLimits

0xaae2,	// (0x000356fe) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0003a4f1) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0003a4f1) bg_popup_window_pane_g

0xa9ff,	// (0x0003561b) bg_popup_heading_pane_ParamLimits

0xa9ff,	// (0x0003561b) bg_popup_heading_pane

0x65d0,	// (0x000311ec) tabs_4_passive_pane_cp_srt_ParamLimits

0x65d0,	// (0x000311ec) tabs_4_passive_pane_cp_srt

0x65e2,	// (0x000311fe) tabs_4_passive_pane_srt_ParamLimits

0xaa13,	// (0x0003562f) heading_pane_g2

0x65e2,	// (0x000311fe) tabs_4_passive_pane_srt

0x9808,	// (0x00034424) bg_passive_tab_pane_cp3_srt_ParamLimits

0x9808,	// (0x00034424) bg_passive_tab_pane_cp3_srt

0xaa1b,	// (0x00035637) heading_pane_t1_ParamLimits

0xaa1b,	// (0x00035637) heading_pane_t1

0xaa32,	// (0x0003564e) heading_pane_t2_ParamLimits

0xaa32,	// (0x0003564e) heading_pane_t2

0x0001,

0xf8d0,	// (0x0003a4ec) heading_pane_t_ParamLimits

0xf8d0,	// (0x0003a4ec) heading_pane_t

0xa52c,	// (0x00035148) bg_popup_heading_pane_g1

0xa5db,	// (0x000351f7) bg_popup_heading_pane_g2

0xa5e5,	// (0x00035201) bg_popup_heading_pane_g3

0xa5ef,	// (0x0003520b) bg_popup_heading_pane_g4

0xa5f9,	// (0x00035215) bg_popup_heading_pane_g5

0xa603,	// (0x0003521f) bg_popup_heading_pane_g6

0xa60b,	// (0x00035227) bg_popup_heading_pane_g7

0xa613,	// (0x0003522f) bg_popup_heading_pane_g8

0xa61d,	// (0x00035239) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0003a4a8) bg_popup_heading_pane_g

0x9d12,	// (0x0003492e) bg_popup_sub_pane_g1

0x9d22,	// (0x0003493e) bg_popup_sub_pane_g2

0x9d1a,	// (0x00034936) bg_popup_sub_pane_g3

0x9d32,	// (0x0003494e) bg_popup_sub_pane_g4

0x9d2a,	// (0x00034946) bg_popup_sub_pane_g5

0x9d3a,	// (0x00034956) bg_popup_sub_pane_g6

0x9d42,	// (0x0003495e) bg_popup_sub_pane_g7

0x9d52,	// (0x0003496e) bg_popup_sub_pane_g8

0x9d4a,	// (0x00034966) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0003a482) bg_popup_sub_pane_g

0x8244,	// (0x00032e60) bg_popup_window_pane_cp5_ParamLimits

0x8244,	// (0x00032e60) bg_popup_window_pane_cp5

0x8260,	// (0x00032e7c) popup_note_window_g1_ParamLimits

0x8260,	// (0x00032e7c) popup_note_window_g1

0x826c,	// (0x00032e88) popup_note_window_t1_ParamLimits

0x826c,	// (0x00032e88) popup_note_window_t1

0x8282,	// (0x00032e9e) popup_note_window_t2_ParamLimits

0x8282,	// (0x00032e9e) popup_note_window_t2

0x8298,	// (0x00032eb4) popup_note_window_t3_ParamLimits

0x8298,	// (0x00032eb4) popup_note_window_t3

0x82ae,	// (0x00032eca) popup_note_window_t4_ParamLimits

0x82ae,	// (0x00032eca) popup_note_window_t4

0x82d6,	// (0x00032ef2) popup_note_window_t5_ParamLimits

0x82d6,	// (0x00032ef2) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003a19b) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003a19b) popup_note_window_t

0x82fa,	// (0x00032f16) bg_popup_window_pane_cp6_ParamLimits

0x82fa,	// (0x00032f16) bg_popup_window_pane_cp6

0xa4a8,	// (0x000350c4) popup_note_image_window_g1_ParamLimits

0xa4a8,	// (0x000350c4) popup_note_image_window_g1

0xa4b4,	// (0x000350d0) popup_note_image_window_g2_ParamLimits

0xa4b4,	// (0x000350d0) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0003a476) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0003a476) popup_note_image_window_g

0xa4cd,	// (0x000350e9) popup_note_image_window_t1_ParamLimits

0xa4cd,	// (0x000350e9) popup_note_image_window_t1

0xa4e6,	// (0x00035102) popup_note_image_window_t2_ParamLimits

0xa4e6,	// (0x00035102) popup_note_image_window_t2

0xa4ff,	// (0x0003511b) popup_note_image_window_t3_ParamLimits

0xa4ff,	// (0x0003511b) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0003a47b) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0003a47b) popup_note_image_window_t

0xa369,	// (0x00034f85) bg_popup_window_pane_cp7_ParamLimits

0xa369,	// (0x00034f85) bg_popup_window_pane_cp7

0xa399,	// (0x00034fb5) popup_note_wait_window_g1_ParamLimits

0xa399,	// (0x00034fb5) popup_note_wait_window_g1

0xa3a5,	// (0x00034fc1) popup_note_wait_window_g2_ParamLimits

0xa3a5,	// (0x00034fc1) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0003a464) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0003a464) popup_note_wait_window_g

0xa3bd,	// (0x00034fd9) popup_note_wait_window_t1_ParamLimits

0xa3bd,	// (0x00034fd9) popup_note_wait_window_t1

0xa3e4,	// (0x00035000) popup_note_wait_window_t2_ParamLimits

0xa3e4,	// (0x00035000) popup_note_wait_window_t2

0xa401,	// (0x0003501d) popup_note_wait_window_t3_ParamLimits

0xa401,	// (0x0003501d) popup_note_wait_window_t3

0xa414,	// (0x00035030) popup_note_wait_window_t4_ParamLimits

0xa414,	// (0x00035030) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0003a46b) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0003a46b) popup_note_wait_window_t

0xa439,	// (0x00035055) wait_bar_pane_ParamLimits

0xa439,	// (0x00035055) wait_bar_pane

0x7738,	// (0x00032354) wait_anim_pane

0x7738,	// (0x00032354) wait_border_pane

0x772e,	// (0x0003234a) wait_anim_pane_g1

0x772e,	// (0x0003234a) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0003a31f) wait_anim_pane_g

0xa30d,	// (0x00034f29) wait_border_pane_g1

0xa318,	// (0x00034f34) wait_border_pane_g2

0xa321,	// (0x00034f3d) wait_border_pane_g3

0x0002,

0xf841,	// (0x0003a45d) wait_border_pane_g

0xa178,	// (0x00034d94) bg_popup_window_pane_cp16_ParamLimits

0xa178,	// (0x00034d94) bg_popup_window_pane_cp16

0xa278,	// (0x00034e94) indicator_popup_pane_cp4_ParamLimits

0xa278,	// (0x00034e94) indicator_popup_pane_cp4

0xa28c,	// (0x00034ea8) popup_query_data_window_t1_ParamLimits

0xa28c,	// (0x00034ea8) popup_query_data_window_t1

0xa29e,	// (0x00034eba) popup_query_data_window_t2_ParamLimits

0xa29e,	// (0x00034eba) popup_query_data_window_t2

0xa2b7,	// (0x00034ed3) popup_query_data_window_t3_ParamLimits

0xa2b7,	// (0x00034ed3) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0003a456) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0003a456) popup_query_data_window_t

0xa2d1,	// (0x00034eed) query_popup_data_pane_ParamLimits

0xa2d1,	// (0x00034eed) query_popup_data_pane

0xa2e5,	// (0x00034f01) query_popup_data_pane_cp1_ParamLimits

0xa2e5,	// (0x00034f01) query_popup_data_pane_cp1

0xa178,	// (0x00034d94) bg_popup_window_pane_cp10_ParamLimits

0xa178,	// (0x00034d94) bg_popup_window_pane_cp10

0xa1aa,	// (0x00034dc6) indicator_popup_pane_ParamLimits

0xa1aa,	// (0x00034dc6) indicator_popup_pane

0xa1cc,	// (0x00034de8) popup_query_code_window_t1_ParamLimits

0xa1cc,	// (0x00034de8) popup_query_code_window_t1

0xa1e6,	// (0x00034e02) popup_query_code_window_t2_ParamLimits

0xa1e6,	// (0x00034e02) popup_query_code_window_t2

0xa22f,	// (0x00034e4b) popup_query_code_window_t3_ParamLimits

0xa22f,	// (0x00034e4b) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0003a44f) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0003a44f) popup_query_code_window_t

0xa25e,	// (0x00034e7a) query_popup_pane_ParamLimits

0xa25e,	// (0x00034e7a) query_popup_pane

0x82fa,	// (0x00032f16) bg_popup_window_pane_cp15_ParamLimits

0x82fa,	// (0x00032f16) bg_popup_window_pane_cp15

0x8318,	// (0x00032f34) indicator_popup_pane_cp1_ParamLimits

0x8318,	// (0x00032f34) indicator_popup_pane_cp1

0x832b,	// (0x00032f47) indicator_popup_pane_cp2_ParamLimits

0x832b,	// (0x00032f47) indicator_popup_pane_cp2

0x833e,	// (0x00032f5a) popup_query_data_code_window_g1_ParamLimits

0x833e,	// (0x00032f5a) popup_query_data_code_window_g1

0x8351,	// (0x00032f6d) popup_query_data_code_window_t1_ParamLimits

0x8351,	// (0x00032f6d) popup_query_data_code_window_t1

0x8363,	// (0x00032f7f) popup_query_data_code_window_t2_ParamLimits

0x8363,	// (0x00032f7f) popup_query_data_code_window_t2

0x8375,	// (0x00032f91) popup_query_data_code_window_t3_ParamLimits

0x8375,	// (0x00032f91) popup_query_data_code_window_t3

0x838b,	// (0x00032fa7) popup_query_data_code_window_t4_ParamLimits

0x838b,	// (0x00032fa7) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003a1a6) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003a1a6) popup_query_data_code_window_t

0x6150,	// (0x00030d6c) list_single_midp_graphic_pane_g3

0x83a3,	// (0x00032fbf) query_popup_data_pane_cp2_ParamLimits

0x83b6,	// (0x00032fd2) query_popup_pane_cp2_ParamLimits

0x83b6,	// (0x00032fd2) query_popup_pane_cp2

0x7738,	// (0x00032354) bg_popup_window_pane_cp11

0xa170,	// (0x00034d8c) heading_pane_cp5

0x84a1,	// (0x000330bd) listscroll_popup_info_pane

0x7738,	// (0x00032354) input_focus_pane_cp3

0x83c9,	// (0x00032fe5) query_popup_pane_t1

0x83d7,	// (0x00032ff3) list_popup_info_pane_ParamLimits

0x83d7,	// (0x00032ff3) list_popup_info_pane

0x83e6,	// (0x00033002) listscroll_popup_info_pane_g1

0x83ee,	// (0x0003300a) scroll_pane_cp7

0x83f8,	// (0x00033014) popup_info_list_pane_t1_ParamLimits

0x83f8,	// (0x00033014) popup_info_list_pane_t1

0x8412,	// (0x0003302e) popup_info_list_pane_t2_ParamLimits

0x8412,	// (0x0003302e) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003a1af) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003a1af) popup_info_list_pane_t

0x7738,	// (0x00032354) bg_popup_window_pane_cp12

0xb4f8,	// (0x00036114) find_popup_pane

0x7818,	// (0x00032434) bg_popup_window_pane_cp3

0x842c,	// (0x00033048) heading_pane_cp3

0x8438,	// (0x00033054) listscroll_popup_graphic_pane

0x7738,	// (0x00032354) bg_popup_window_pane_cp4

0x8497,	// (0x000330b3) heading_pane_cp4

0x84a1,	// (0x000330bd) listscroll_popup_colour_pane

0x84a9,	// (0x000330c5) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x84a9,	// (0x000330c5) cell_large_graphic_colour_none_popup_pane

0x84bd,	// (0x000330d9) grid_large_graphic_colour_popup_pane_ParamLimits

0x84bd,	// (0x000330d9) grid_large_graphic_colour_popup_pane

0x84e9,	// (0x00033105) listscroll_popup_colour_pane_g1_ParamLimits

0x84e9,	// (0x00033105) listscroll_popup_colour_pane_g1

0x8500,	// (0x0003311c) listscroll_popup_colour_pane_g2_ParamLimits

0x8500,	// (0x0003311c) listscroll_popup_colour_pane_g2

0x8517,	// (0x00033133) listscroll_popup_colour_pane_g3_ParamLimits

0x8517,	// (0x00033133) listscroll_popup_colour_pane_g3

0x8527,	// (0x00033143) listscroll_popup_colour_pane_g4_ParamLimits

0x8527,	// (0x00033143) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003a1b4) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003a1b4) listscroll_popup_colour_pane_g

0x853b,	// (0x00033157) scroll_pane_cp6_ParamLimits

0x853b,	// (0x00033157) scroll_pane_cp6

0x854d,	// (0x00033169) cell_large_graphic_colour_popup_pane_ParamLimits

0x854d,	// (0x00033169) cell_large_graphic_colour_popup_pane

0x856c,	// (0x00033188) cell_large_graphic_colour_none_popup_pane_t1

0x7738,	// (0x00032354) grid_highlight_pane_cp5

0x857b,	// (0x00033197) cell_large_graphic_colour_popup_pane_g1

0x8583,	// (0x0003319f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003a1bd) cell_large_graphic_colour_popup_pane_g

0x858b,	// (0x000331a7) cell_large_graphic_colour_popup_pane_g2_copy1

0x8594,	// (0x000331b0) grid_highlight_pane_cp4

0x859c,	// (0x000331b8) bg_popup_window_pane_cp8_ParamLimits

0x859c,	// (0x000331b8) bg_popup_window_pane_cp8

0x85b7,	// (0x000331d3) popup_snote_single_text_window_g1_ParamLimits

0x85b7,	// (0x000331d3) popup_snote_single_text_window_g1

0x85c9,	// (0x000331e5) popup_snote_single_text_window_t1_ParamLimits

0x85c9,	// (0x000331e5) popup_snote_single_text_window_t1

0x85dc,	// (0x000331f8) popup_snote_single_text_window_t2_ParamLimits

0x85dc,	// (0x000331f8) popup_snote_single_text_window_t2

0x85ef,	// (0x0003320b) popup_snote_single_text_window_t3_ParamLimits

0x85ef,	// (0x0003320b) popup_snote_single_text_window_t3

0x8628,	// (0x00033244) popup_snote_single_text_window_t4_ParamLimits

0x8628,	// (0x00033244) popup_snote_single_text_window_t4

0x865c,	// (0x00033278) popup_snote_single_text_window_t5_ParamLimits

0x865c,	// (0x00033278) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003a1c2) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003a1c2) popup_snote_single_text_window_t

0x868b,	// (0x000332a7) bg_popup_window_pane_cp9_ParamLimits

0x868b,	// (0x000332a7) bg_popup_window_pane_cp9

0x85b7,	// (0x000331d3) popup_snote_single_graphic_window_g1_ParamLimits

0x85b7,	// (0x000331d3) popup_snote_single_graphic_window_g1

0x8699,	// (0x000332b5) popup_snote_single_graphic_window_g2_ParamLimits

0x8699,	// (0x000332b5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003a1cd) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003a1cd) popup_snote_single_graphic_window_g

0x86a5,	// (0x000332c1) popup_snote_single_graphic_window_t1_ParamLimits

0x86a5,	// (0x000332c1) popup_snote_single_graphic_window_t1

0x86b8,	// (0x000332d4) popup_snote_single_graphic_window_t2_ParamLimits

0x86b8,	// (0x000332d4) popup_snote_single_graphic_window_t2

0x86cb,	// (0x000332e7) popup_snote_single_graphic_window_t3_ParamLimits

0x86cb,	// (0x000332e7) popup_snote_single_graphic_window_t3

0x8704,	// (0x00033320) popup_snote_single_graphic_window_t4_ParamLimits

0x8704,	// (0x00033320) popup_snote_single_graphic_window_t4

0x8738,	// (0x00033354) popup_snote_single_graphic_window_t5_ParamLimits

0x8738,	// (0x00033354) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003a1d2) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003a1d2) popup_snote_single_graphic_window_t

0xb43b,	// (0x00036057) grid_graphic_popup_pane_ParamLimits

0xb43b,	// (0x00036057) grid_graphic_popup_pane

0xb464,	// (0x00036080) listscroll_popup_graphic_pane_g1_ParamLimits

0xb464,	// (0x00036080) listscroll_popup_graphic_pane_g1

0xb478,	// (0x00036094) listscroll_popup_graphic_pane_g2_ParamLimits

0xb478,	// (0x00036094) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0003a5cc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0003a5cc) listscroll_popup_graphic_pane_g

0xb48c,	// (0x000360a8) scroll_pane_cp5

0xb3d8,	// (0x00035ff4) cell_graphic_popup_pane_ParamLimits

0xb3d8,	// (0x00035ff4) cell_graphic_popup_pane

0xb3b9,	// (0x00035fd5) cell_graphic_popup_pane_g1

0xb3c1,	// (0x00035fdd) cell_graphic_popup_pane_g2

0x858b,	// (0x000331a7) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0003a5c5) cell_graphic_popup_pane_g

0xb3ca,	// (0x00035fe6) cell_graphic_popup_pane_t2

0x8594,	// (0x000331b0) grid_highlight_pane_cp3

0x8779,	// (0x00033395) list_gen_pane_ParamLimits

0x8779,	// (0x00033395) list_gen_pane

0x87ab,	// (0x000333c7) scroll_pane

0xb311,	// (0x00035f2d) bg_list_pane_g1_ParamLimits

0xb311,	// (0x00035f2d) bg_list_pane_g1

0xb32e,	// (0x00035f4a) bg_list_pane_g2_ParamLimits

0xb32e,	// (0x00035f4a) bg_list_pane_g2

0xb343,	// (0x00035f5f) bg_list_pane_g3_ParamLimits

0xb343,	// (0x00035f5f) bg_list_pane_g3

0xb357,	// (0x00035f73) bg_list_pane_g4_ParamLimits

0xb357,	// (0x00035f73) bg_list_pane_g4

0xb36b,	// (0x00035f87) bg_list_pane_g5_ParamLimits

0xb36b,	// (0x00035f87) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0003a5ba) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0003a5ba) bg_list_pane_g

0x79c4,	// (0x000325e0) list_double2_graphic_large_graphic_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double2_graphic_large_graphic_pane

0x79c4,	// (0x000325e0) list_double2_graphic_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double2_graphic_pane

0x79c4,	// (0x000325e0) list_double2_large_graphic_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double2_large_graphic_pane

0x79c4,	// (0x000325e0) list_double2_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double2_pane

0x79c4,	// (0x000325e0) list_double_graphic_heading_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_graphic_heading_pane

0x79c4,	// (0x000325e0) list_double_graphic_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_graphic_pane

0x79c4,	// (0x000325e0) list_double_heading_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_heading_pane

0x79c4,	// (0x000325e0) list_double_large_graphic_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_large_graphic_pane

0x79c4,	// (0x000325e0) list_double_number_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_number_pane

0x79c4,	// (0x000325e0) list_double_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_pane

0x79c4,	// (0x000325e0) list_double_time_pane_ParamLimits

0x79c4,	// (0x000325e0) list_double_time_pane

0x79c4,	// (0x000325e0) list_setting_number_pane_ParamLimits

0x79c4,	// (0x000325e0) list_setting_number_pane

0x79c4,	// (0x000325e0) list_setting_pane_ParamLimits

0x79c4,	// (0x000325e0) list_setting_pane

0x79ff,	// (0x0003261b) list_single_2graphic_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_2graphic_pane

0x79ff,	// (0x0003261b) list_single_graphic_heading_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_graphic_heading_pane

0x79ff,	// (0x0003261b) list_single_graphic_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_graphic_pane

0x79ff,	// (0x0003261b) list_single_heading_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_heading_pane

0x7a3f,	// (0x0003265b) list_single_large_graphic_pane_ParamLimits

0x7a3f,	// (0x0003265b) list_single_large_graphic_pane

0x79ff,	// (0x0003261b) list_single_number_heading_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_number_heading_pane

0x79ff,	// (0x0003261b) list_single_number_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_number_pane

0x79ff,	// (0x0003261b) list_single_pane_ParamLimits

0x79ff,	// (0x0003261b) list_single_pane

0x7738,	// (0x00032354) list_highlight_pane_cp1

0x4d95,	// (0x0002f9b1) list_single_pane_g1_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_pane_g1

0x4da1,	// (0x0002f9bd) list_single_pane_g2_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0003a1e4) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0003a1e4) list_single_pane_g

0x79ae,	// (0x000325ca) list_single_pane_t1_ParamLimits

0x79ae,	// (0x000325ca) list_single_pane_t1

0x4d95,	// (0x0002f9b1) list_single_number_pane_g1_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_number_pane_g1

0x4da1,	// (0x0002f9bd) list_single_number_pane_g2_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0003a1e4) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0003a1e4) list_single_number_pane_g

0x64de,	// (0x000310fa) list_single_number_pane_t1_ParamLimits

0x64de,	// (0x000310fa) list_single_number_pane_t1

0x64f4,	// (0x00031110) list_single_number_pane_t2_ParamLimits

0x64f4,	// (0x00031110) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0003a57b) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0003a57b) list_single_number_pane_t

0x4d89,	// (0x0002f9a5) list_single_graphic_pane_g1_ParamLimits

0x4d89,	// (0x0002f9a5) list_single_graphic_pane_g1

0x4d95,	// (0x0002f9b1) list_single_graphic_pane_g2_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_graphic_pane_g2

0x4da1,	// (0x0002f9bd) list_single_graphic_pane_g3_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003a1dd) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003a1dd) list_single_graphic_pane_g

0x4dad,	// (0x0002f9c9) list_single_graphic_pane_t1_ParamLimits

0x4dad,	// (0x0002f9c9) list_single_graphic_pane_t1

0x4d95,	// (0x0002f9b1) list_single_heading_pane_g1_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_heading_pane_g1

0x4da1,	// (0x0002f9bd) list_single_heading_pane_g2_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1e4) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1e4) list_single_heading_pane_g

0x4dc3,	// (0x0002f9df) list_single_heading_pane_t1_ParamLimits

0x4dc3,	// (0x0002f9df) list_single_heading_pane_t1

0x4dd9,	// (0x0002f9f5) list_single_heading_pane_t2_ParamLimits

0x4dd9,	// (0x0002f9f5) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003a1e9) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003a1e9) list_single_heading_pane_t

0x4d95,	// (0x0002f9b1) list_single_number_heading_pane_g1_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_number_heading_pane_g1

0x4da1,	// (0x0002f9bd) list_single_number_heading_pane_g2_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003a1e4) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003a1e4) list_single_number_heading_pane_g

0x4dc3,	// (0x0002f9df) list_single_number_heading_pane_t1_ParamLimits

0x4dc3,	// (0x0002f9df) list_single_number_heading_pane_t1

0x4deb,	// (0x0002fa07) list_single_number_heading_pane_t2_ParamLimits

0x4deb,	// (0x0002fa07) list_single_number_heading_pane_t2

0x4dfd,	// (0x0002fa19) list_single_number_heading_pane_t3_ParamLimits

0x4dfd,	// (0x0002fa19) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0003a1ee) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0003a1ee) list_single_number_heading_pane_t

0x4e0f,	// (0x0002fa2b) list_single_graphic_heading_pane_g1_ParamLimits

0x4e0f,	// (0x0002fa2b) list_single_graphic_heading_pane_g1

0x4e1b,	// (0x0002fa37) list_single_graphic_heading_pane_g4_ParamLimits

0x4e1b,	// (0x0002fa37) list_single_graphic_heading_pane_g4

0x4da1,	// (0x0002f9bd) list_single_graphic_heading_pane_g5_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0003a1f5) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0003a1f5) list_single_graphic_heading_pane_g

0x4dc3,	// (0x0002f9df) list_single_graphic_heading_pane_t1_ParamLimits

0x4dc3,	// (0x0002f9df) list_single_graphic_heading_pane_t1

0x4e2c,	// (0x0002fa48) list_single_graphic_heading_pane_t2_ParamLimits

0x4e2c,	// (0x0002fa48) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0003a1fc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0003a1fc) list_single_graphic_heading_pane_t

0x4e3e,	// (0x0002fa5a) list_single_large_graphic_pane_g1_ParamLimits

0x4e3e,	// (0x0002fa5a) list_single_large_graphic_pane_g1

0x4e4a,	// (0x0002fa66) list_single_large_graphic_pane_g2_ParamLimits

0x4e4a,	// (0x0002fa66) list_single_large_graphic_pane_g2

0x4e56,	// (0x0002fa72) list_single_large_graphic_pane_g3_ParamLimits

0x4e56,	// (0x0002fa72) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0003a201) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0003a201) list_single_large_graphic_pane_g

0xa318,	// (0x00034f34) wait_border_pane_g2_copy1

0x4e62,	// (0x0002fa7e) list_single_large_graphic_pane_g4_cp2

0x4e6a,	// (0x0002fa86) list_single_large_graphic_pane_t1_ParamLimits

0x4e6a,	// (0x0002fa86) list_single_large_graphic_pane_t1

0x4e80,	// (0x0002fa9c) list_double_pane_g1_ParamLimits

0x4e80,	// (0x0002fa9c) list_double_pane_g1

0x4e8c,	// (0x0002faa8) list_double_pane_g2_ParamLimits

0x4e8c,	// (0x0002faa8) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0003a208) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0003a208) list_double_pane_g

0x4e98,	// (0x0002fab4) list_double_pane_t1_ParamLimits

0x4e98,	// (0x0002fab4) list_double_pane_t1

0x4eae,	// (0x0002faca) list_double_pane_t2_ParamLimits

0x4eae,	// (0x0002faca) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0003a20d) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0003a20d) list_double_pane_t

0x4ec0,	// (0x0002fadc) list_double2_pane_g1_ParamLimits

0x4ec0,	// (0x0002fadc) list_double2_pane_g1

0x4ed1,	// (0x0002faed) list_double2_pane_g2_ParamLimits

0x4ed1,	// (0x0002faed) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0003a212) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0003a212) list_double2_pane_g

0x4edd,	// (0x0002faf9) list_double2_pane_t1_ParamLimits

0x4edd,	// (0x0002faf9) list_double2_pane_t1

0x4ef3,	// (0x0002fb0f) list_double2_pane_t2_ParamLimits

0x4ef3,	// (0x0002fb0f) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0003a217) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0003a217) list_double2_pane_t

0x4e80,	// (0x0002fa9c) list_double_number_pane_g1_ParamLimits

0x4e80,	// (0x0002fa9c) list_double_number_pane_g1

0x4e8c,	// (0x0002faa8) list_double_number_pane_g2_ParamLimits

0x4e8c,	// (0x0002faa8) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0003a208) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0003a208) list_double_number_pane_g

0x4f05,	// (0x0002fb21) list_double_number_pane_t1_ParamLimits

0x4f05,	// (0x0002fb21) list_double_number_pane_t1

0x4f17,	// (0x0002fb33) list_double_number_pane_t2_ParamLimits

0x4f17,	// (0x0002fb33) list_double_number_pane_t2

0x4f2d,	// (0x0002fb49) list_double_number_pane_t3_ParamLimits

0x4f2d,	// (0x0002fb49) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0003a21c) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0003a21c) list_double_number_pane_t

0x4f3f,	// (0x0002fb5b) list_double_graphic_pane_g1_ParamLimits

0x4f3f,	// (0x0002fb5b) list_double_graphic_pane_g1

0x4f4b,	// (0x0002fb67) list_double_graphic_pane_g2_ParamLimits

0x4f4b,	// (0x0002fb67) list_double_graphic_pane_g2

0x4f5a,	// (0x0002fb76) list_double_graphic_pane_g3_ParamLimits

0x4f5a,	// (0x0002fb76) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0003a223) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0003a223) list_double_graphic_pane_g

0x4f72,	// (0x0002fb8e) list_double_graphic_pane_t1_ParamLimits

0x4f72,	// (0x0002fb8e) list_double_graphic_pane_t1

0x4f88,	// (0x0002fba4) list_double_graphic_pane_t2_ParamLimits

0x4f88,	// (0x0002fba4) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0003a22c) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0003a22c) list_double_graphic_pane_t

0x4f9a,	// (0x0002fbb6) list_double2_graphic_pane_g1_ParamLimits

0x4f9a,	// (0x0002fbb6) list_double2_graphic_pane_g1

0x4fa6,	// (0x0002fbc2) list_double2_graphic_pane_g2_ParamLimits

0x4fa6,	// (0x0002fbc2) list_double2_graphic_pane_g2

0x4ed1,	// (0x0002faed) list_double2_graphic_pane_g3_ParamLimits

0x4ed1,	// (0x0002faed) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0003a231) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0003a231) list_double2_graphic_pane_g

0x4fb2,	// (0x0002fbce) list_double2_graphic_pane_t1_ParamLimits

0x4fb2,	// (0x0002fbce) list_double2_graphic_pane_t1

0x4fc8,	// (0x0002fbe4) list_double2_graphic_pane_t2_ParamLimits

0x4fc8,	// (0x0002fbe4) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0003a238) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0003a238) list_double2_graphic_pane_t

0x4fda,	// (0x0002fbf6) list_double_large_graphic_pane_g1_ParamLimits

0x4fda,	// (0x0002fbf6) list_double_large_graphic_pane_g1

0x4fed,	// (0x0002fc09) list_double_large_graphic_pane_g2_ParamLimits

0x4fed,	// (0x0002fc09) list_double_large_graphic_pane_g2

0x4e8c,	// (0x0002faa8) list_double_large_graphic_pane_g3_ParamLimits

0x4e8c,	// (0x0002faa8) list_double_large_graphic_pane_g3

0x4ffe,	// (0x0002fc1a) list_double_large_graphic_pane_g4_ParamLimits

0x4ffe,	// (0x0002fc1a) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0003a23d) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0003a23d) list_double_large_graphic_pane_g

0x5025,	// (0x0002fc41) list_double_large_graphic_pane_t1_ParamLimits

0x5025,	// (0x0002fc41) list_double_large_graphic_pane_t1

0x503e,	// (0x0002fc5a) list_double_large_graphic_pane_t2_ParamLimits

0x503e,	// (0x0002fc5a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003a248) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003a248) list_double_large_graphic_pane_t

0x5050,	// (0x0002fc6c) list_double2_large_graphic_pane_g1_ParamLimits

0x5050,	// (0x0002fc6c) list_double2_large_graphic_pane_g1

0x4ec0,	// (0x0002fadc) list_double2_large_graphic_pane_g2_ParamLimits

0x4ec0,	// (0x0002fadc) list_double2_large_graphic_pane_g2

0x4ed1,	// (0x0002faed) list_double2_large_graphic_pane_g3_ParamLimits

0x4ed1,	// (0x0002faed) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0003a24d) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0003a24d) list_double2_large_graphic_pane_g

0x505c,	// (0x0002fc78) list_double2_large_graphic_pane_t1_ParamLimits

0x505c,	// (0x0002fc78) list_double2_large_graphic_pane_t1

0x5072,	// (0x0002fc8e) list_double2_large_graphic_pane_t2_ParamLimits

0x5072,	// (0x0002fc8e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0003a254) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0003a254) list_double2_large_graphic_pane_t

0x5084,	// (0x0002fca0) list_double_heading_pane_g1_ParamLimits

0x5084,	// (0x0002fca0) list_double_heading_pane_g1

0x5095,	// (0x0002fcb1) list_double_heading_pane_g2_ParamLimits

0x5095,	// (0x0002fcb1) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0003a259) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0003a259) list_double_heading_pane_g

0x50a1,	// (0x0002fcbd) list_double_heading_pane_t1_ParamLimits

0x50a1,	// (0x0002fcbd) list_double_heading_pane_t1

0x4ef3,	// (0x0002fb0f) list_double_heading_pane_t2_ParamLimits

0x4ef3,	// (0x0002fb0f) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0003a25e) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0003a25e) list_double_heading_pane_t

0x50b7,	// (0x0002fcd3) list_double_graphic_heading_pane_g1_ParamLimits

0x50b7,	// (0x0002fcd3) list_double_graphic_heading_pane_g1

0x5084,	// (0x0002fca0) list_double_graphic_heading_pane_g2_ParamLimits

0x5084,	// (0x0002fca0) list_double_graphic_heading_pane_g2

0x5095,	// (0x0002fcb1) list_double_graphic_heading_pane_g3_ParamLimits

0x5095,	// (0x0002fcb1) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0003a263) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0003a263) list_double_graphic_heading_pane_g

0x50c3,	// (0x0002fcdf) list_double_graphic_heading_pane_t1_ParamLimits

0x50c3,	// (0x0002fcdf) list_double_graphic_heading_pane_t1

0x4fc8,	// (0x0002fbe4) list_double_graphic_heading_pane_t2_ParamLimits

0x4fc8,	// (0x0002fbe4) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0003a26a) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0003a26a) list_double_graphic_heading_pane_t

0x4fed,	// (0x0002fc09) list_double_time_pane_g1_ParamLimits

0x4fed,	// (0x0002fc09) list_double_time_pane_g1

0x4e8c,	// (0x0002faa8) list_double_time_pane_g2_ParamLimits

0x4e8c,	// (0x0002faa8) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0003a26f) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0003a26f) list_double_time_pane_g

0x50d9,	// (0x0002fcf5) list_double_time_pane_t1_ParamLimits

0x50d9,	// (0x0002fcf5) list_double_time_pane_t1

0x50ef,	// (0x0002fd0b) list_double_time_pane_t2_ParamLimits

0x50ef,	// (0x0002fd0b) list_double_time_pane_t2

0x5101,	// (0x0002fd1d) list_double_time_pane_t3_ParamLimits

0x5101,	// (0x0002fd1d) list_double_time_pane_t3

0x5113,	// (0x0002fd2f) list_double_time_pane_t4_ParamLimits

0x5113,	// (0x0002fd2f) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0003a274) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0003a274) list_double_time_pane_t

0x4fa6,	// (0x0002fbc2) list_setting_pane_g1_ParamLimits

0x4fa6,	// (0x0002fbc2) list_setting_pane_g1

0x4ed1,	// (0x0002faed) list_setting_pane_g2_ParamLimits

0x4ed1,	// (0x0002faed) list_setting_pane_g2

0x0001,

0xf661,	// (0x0003a27d) list_setting_pane_g_ParamLimits

0xf661,	// (0x0003a27d) list_setting_pane_g

0x5125,	// (0x0002fd41) list_setting_pane_t1_ParamLimits

0x5125,	// (0x0002fd41) list_setting_pane_t1

0x513f,	// (0x0002fd5b) list_setting_pane_t2_ParamLimits

0x513f,	// (0x0002fd5b) list_setting_pane_t2

0x0002,

0xf666,	// (0x0003a282) list_setting_pane_t_ParamLimits

0xf666,	// (0x0003a282) list_setting_pane_t

0x517e,	// (0x0002fd9a) set_value_pane_cp_ParamLimits

0x517e,	// (0x0002fd9a) set_value_pane_cp

0x518a,	// (0x0002fda6) list_setting_number_pane_g1_ParamLimits

0x518a,	// (0x0002fda6) list_setting_number_pane_g1

0x5196,	// (0x0002fdb2) list_setting_number_pane_g2_ParamLimits

0x5196,	// (0x0002fdb2) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0003a289) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0003a289) list_setting_number_pane_g

0x51a2,	// (0x0002fdbe) list_setting_number_pane_t1_ParamLimits

0x51a2,	// (0x0002fdbe) list_setting_number_pane_t1

0x51bb,	// (0x0002fdd7) list_setting_number_pane_t2_ParamLimits

0x51bb,	// (0x0002fdd7) list_setting_number_pane_t2

0x51d5,	// (0x0002fdf1) list_setting_number_pane_t3_ParamLimits

0x51d5,	// (0x0002fdf1) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0003a28e) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0003a28e) list_setting_number_pane_t

0x517e,	// (0x0002fd9a) set_value_pane_ParamLimits

0x517e,	// (0x0002fd9a) set_value_pane

0x87df,	// (0x000333fb) bg_set_opt_pane_ParamLimits

0x87df,	// (0x000333fb) bg_set_opt_pane

0x5218,	// (0x0002fe34) set_value_pane_t1

0x8800,	// (0x0003341c) slider_set_pane_cp3

0x8809,	// (0x00033425) volume_small_pane_cp

0x8812,	// (0x0003342e) list_form_gen_pane

0x881b,	// (0x00033437) scroll_pane_cp8

0x522e,	// (0x0002fe4a) form_field_data_pane_ParamLimits

0x522e,	// (0x0002fe4a) form_field_data_pane

0x524e,	// (0x0002fe6a) form_field_data_wide_pane_ParamLimits

0x524e,	// (0x0002fe6a) form_field_data_wide_pane

0x526f,	// (0x0002fe8b) form_field_popup_pane_ParamLimits

0x526f,	// (0x0002fe8b) form_field_popup_pane

0x528f,	// (0x0002feab) form_field_popup_wide_pane_ParamLimits

0x528f,	// (0x0002feab) form_field_popup_wide_pane

0x52ac,	// (0x0002fec8) form_field_slider_pane_ParamLimits

0x52ac,	// (0x0002fec8) form_field_slider_pane

0x52bf,	// (0x0002fedb) form_field_slider_wide_pane_ParamLimits

0x52bf,	// (0x0002fedb) form_field_slider_wide_pane

0x882c,	// (0x00033448) data_form_pane

0x52dc,	// (0x0002fef8) form_field_data_pane_t1

0x8838,	// (0x00033454) input_focus_pane

0x52f4,	// (0x0002ff10) data_form_wide_pane

0x5311,	// (0x0002ff2d) form_field_data_wide_pane_t1

0x85a9,	// (0x000331c5) input_focus_pane_cp6

0x5333,	// (0x0002ff4f) form_field_popup_pane_t1

0x8838,	// (0x00033454) input_focus_pane_cp7

0x8866,	// (0x00033482) list_form_pane

0x5353,	// (0x0002ff6f) form_field_popup_wide_pane_t1

0x8838,	// (0x00033454) input_focus_pane_cp8

0x8872,	// (0x0003348e) list_form_wide_pane

0x5370,	// (0x0002ff8c) form_field_slider_pane_t1_ParamLimits

0x5370,	// (0x0002ff8c) form_field_slider_pane_t1

0x5386,	// (0x0002ffa2) form_field_slider_pane_t2_ParamLimits

0x5386,	// (0x0002ffa2) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0003a29e) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0003a29e) form_field_slider_pane_t

0x8244,	// (0x00032e60) input_focus_pane_cp9_ParamLimits

0x8244,	// (0x00032e60) input_focus_pane_cp9

0x539b,	// (0x0002ffb7) slider_cont_pane_ParamLimits

0x539b,	// (0x0002ffb7) slider_cont_pane

0x8881,	// (0x0003349d) form_field_slider_wide_pane_t1_ParamLimits

0x8881,	// (0x0003349d) form_field_slider_wide_pane_t1

0x53af,	// (0x0002ffcb) form_field_slider_wide_pane_t2_ParamLimits

0x53af,	// (0x0002ffcb) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0003a2a3) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0003a2a3) form_field_slider_wide_pane_t

0x8244,	// (0x00032e60) input_focus_pane_cp10_ParamLimits

0x8244,	// (0x00032e60) input_focus_pane_cp10

0x53c1,	// (0x0002ffdd) slider_cont_pane_cp1_ParamLimits

0x53c1,	// (0x0002ffdd) slider_cont_pane_cp1

0x53d5,	// (0x0002fff1) slider_form_pane_cp

0x8893,	// (0x000334af) input_focus_pane_g1

0x889b,	// (0x000334b7) input_focus_pane_g2

0x88a3,	// (0x000334bf) input_focus_pane_g3

0x88ab,	// (0x000334c7) input_focus_pane_g4

0x88b3,	// (0x000334cf) input_focus_pane_g5

0x88bb,	// (0x000334d7) input_focus_pane_g6

0x88c3,	// (0x000334df) input_focus_pane_g7

0x88cb,	// (0x000334e7) input_focus_pane_g8

0x88d3,	// (0x000334ef) input_focus_pane_g9

0x772e,	// (0x0003234a) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0003a2a8) input_focus_pane_g

0xa321,	// (0x00034f3d) wait_border_pane_g3_copy1

0x53dd,	// (0x0002fff9) data_form_pane_t1

0x772e,	// (0x0003234a) wait_anim_pane_g1_copy1

0x657e,	// (0x0003119a) data_form_wide_pane_t1

0x53f8,	// (0x00030014) list_form_graphic_pane_cp_ParamLimits

0x53f8,	// (0x00030014) list_form_graphic_pane_cp

0xb24e,	// (0x00035e6a) slider_form_pane_g1

0xb257,	// (0x00035e73) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0003a5ab) slider_form_pane_g

0x5411,	// (0x0003002d) list_form_graphic_pane_ParamLimits

0x5411,	// (0x0003002d) list_form_graphic_pane

0x542d,	// (0x00030049) list_form_graphic_pane_g1

0x5435,	// (0x00030051) list_form_graphic_pane_t1_ParamLimits

0x5435,	// (0x00030051) list_form_graphic_pane_t1

0x7818,	// (0x00032434) list_highlight_pane_cp5_ParamLimits

0x7818,	// (0x00032434) list_highlight_pane_cp5

0x544a,	// (0x00030066) find_pane_g1

0x88db,	// (0x000334f7) input_find_pane

0x5453,	// (0x0003006f) input_find_pane_g1_ParamLimits

0x5453,	// (0x0003006f) input_find_pane_g1

0x545f,	// (0x0003007b) input_find_pane_t1_ParamLimits

0x545f,	// (0x0003007b) input_find_pane_t1

0x5474,	// (0x00030090) input_find_pane_t2_ParamLimits

0x5474,	// (0x00030090) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0003a2bd) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0003a2bd) input_find_pane_t

0x88e4,	// (0x00033500) input_focus_pane_cp5_ParamLimits

0x88e4,	// (0x00033500) input_focus_pane_cp5

0x88fe,	// (0x0003351a) bg_popup_window_pane_cp2_ParamLimits

0x88fe,	// (0x0003351a) bg_popup_window_pane_cp2

0x890b,	// (0x00033527) listscroll_menu_pane_ParamLimits

0x890b,	// (0x00033527) listscroll_menu_pane

0x8917,	// (0x00033533) popup_submenu_window_ParamLimits

0x8917,	// (0x00033533) popup_submenu_window

0x8943,	// (0x0003355f) find_popup_pane_g1

0x894b,	// (0x00033567) input_popup_find_pane_cp

0x88e4,	// (0x00033500) input_focus_pane_cp4_ParamLimits

0x88e4,	// (0x00033500) input_focus_pane_cp4

0x8961,	// (0x0003357d) input_popup_find_pane_t1_ParamLimits

0x8961,	// (0x0003357d) input_popup_find_pane_t1

0x7738,	// (0x00032354) bg_popup_sub_pane_cp

0x898f,	// (0x000335ab) listscroll_popup_sub_pane

0x8997,	// (0x000335b3) list_submenu_pane_ParamLimits

0x8997,	// (0x000335b3) list_submenu_pane

0x89a8,	// (0x000335c4) scroll_pane_cp4

0x89b0,	// (0x000335cc) list_single_popup_submenu_pane_ParamLimits

0x89b0,	// (0x000335cc) list_single_popup_submenu_pane

0x89c4,	// (0x000335e0) list_single_popup_submenu_pane_g1

0x89cc,	// (0x000335e8) list_single_popup_submenu_pane_t1_ParamLimits

0x89cc,	// (0x000335e8) list_single_popup_submenu_pane_t1

0x7818,	// (0x00032434) bg_active_tab_pane_cp1_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp1

0x89e1,	// (0x000335fd) tabs_2_active_pane_g1

0x89e9,	// (0x00033605) tabs_2_active_pane_t1

0x7818,	// (0x00032434) bg_passive_tab_pane_cp1_ParamLimits

0x7818,	// (0x00032434) bg_passive_tab_pane_cp1

0x89e1,	// (0x000335fd) tabs_2_passive_pane_g1

0x89e9,	// (0x00033605) tabs_2_passive_pane_t1

0x89fb,	// (0x00033617) bg_active_tab_pane_cp4

0x8a09,	// (0x00033625) tabs_2_long_active_pane_t1

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp4

0x6158,	// (0x00030d74) list_single_midp_graphic_pane_g4_ParamLimits

0x89fb,	// (0x00033617) bg_active_tab_pane_cp5

0x8a28,	// (0x00033644) tabs_3_long_active_pane_t1

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp5

0x6158,	// (0x00030d74) list_single_midp_graphic_pane_g4

0x7818,	// (0x00032434) bg_popup_window_pane_cp13_ParamLimits

0x7818,	// (0x00032434) bg_popup_window_pane_cp13

0x8a43,	// (0x0003365f) listscroll_popup_fast_pane_ParamLimits

0x8a43,	// (0x0003365f) listscroll_popup_fast_pane

0x8a52,	// (0x0003366e) grid_popup_fast_pane_ParamLimits

0x8a52,	// (0x0003366e) grid_popup_fast_pane

0x8a64,	// (0x00033680) scroll_pane_cp9_ParamLimits

0x8a64,	// (0x00033680) scroll_pane_cp9

0xcb6a,	// (0x00037786) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xcb6a,	// (0x00037786) list_single_graphic_hl_pane_t1_cp2

0x8a88,	// (0x000336a4) input_focus_pane_cp20_ParamLimits

0x8a88,	// (0x000336a4) input_focus_pane_cp20

0x8a96,	// (0x000336b2) query_popup_data_pane_t1_ParamLimits

0x8a96,	// (0x000336b2) query_popup_data_pane_t1

0x8aa9,	// (0x000336c5) query_popup_data_pane_t2_ParamLimits

0x8aa9,	// (0x000336c5) query_popup_data_pane_t2

0x8aef,	// (0x0003370b) query_popup_data_pane_t3_ParamLimits

0x8aef,	// (0x0003370b) query_popup_data_pane_t3

0x8b30,	// (0x0003374c) query_popup_data_pane_t4_ParamLimits

0x8b30,	// (0x0003374c) query_popup_data_pane_t4

0x8b6c,	// (0x00033788) query_popup_data_pane_t5_ParamLimits

0x8b6c,	// (0x00033788) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0003a2c2) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0003a2c2) query_popup_data_pane_t

0x8893,	// (0x000334af) bg_set_opt_pane_g1

0x889b,	// (0x000334b7) bg_set_opt_pane_g2

0x88a3,	// (0x000334bf) bg_set_opt_pane_g3

0x88ab,	// (0x000334c7) bg_set_opt_pane_g4

0x88b3,	// (0x000334cf) bg_set_opt_pane_g5

0x88bb,	// (0x000334d7) bg_set_opt_pane_g6

0x88c3,	// (0x000334df) bg_set_opt_pane_g7

0x88cb,	// (0x000334e7) bg_set_opt_pane_g8

0x88d3,	// (0x000334ef) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0003a2cd) bg_set_opt_pane_g

0x57b0,	// (0x000303cc) control_top_pane_stacon_ParamLimits

0x57b0,	// (0x000303cc) control_top_pane_stacon

0x5803,	// (0x0003041f) signal_pane_stacon_ParamLimits

0x5803,	// (0x0003041f) signal_pane_stacon

0x9158,	// (0x00033d74) stacon_top_pane_g1_ParamLimits

0x9158,	// (0x00033d74) stacon_top_pane_g1

0x5828,	// (0x00030444) title_pane_stacon_ParamLimits

0x5828,	// (0x00030444) title_pane_stacon

0x5852,	// (0x0003046e) uni_indicator_pane_stacon_ParamLimits

0x5852,	// (0x0003046e) uni_indicator_pane_stacon

0x5867,	// (0x00030483) battery_pane_stacon_ParamLimits

0x5867,	// (0x00030483) battery_pane_stacon

0x58ab,	// (0x000304c7) control_bottom_pane_stacon_ParamLimits

0x58ab,	// (0x000304c7) control_bottom_pane_stacon

0x58ce,	// (0x000304ea) navi_pane_stacon_ParamLimits

0x58ce,	// (0x000304ea) navi_pane_stacon

0x917a,	// (0x00033d96) stacon_bottom_pane_g1_ParamLimits

0x917a,	// (0x00033d96) stacon_bottom_pane_g1

0x5489,	// (0x000300a5) aid_levels_signal_lsc_ParamLimits

0x5489,	// (0x000300a5) aid_levels_signal_lsc

0x549f,	// (0x000300bb) signal_pane_stacon_g1_ParamLimits

0x549f,	// (0x000300bb) signal_pane_stacon_g1

0x54b3,	// (0x000300cf) signal_pane_stacon_g2_ParamLimits

0x54b3,	// (0x000300cf) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0003a2e0) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0003a2e0) signal_pane_stacon_g

0x54e8,	// (0x00030104) title_pane_stacon_t1_ParamLimits

0x54e8,	// (0x00030104) title_pane_stacon_t1

0x8bb0,	// (0x000337cc) uni_indicator_pane_stacon_g1

0x8bba,	// (0x000337d6) uni_indicator_pane_stacon_g2

0x8bc4,	// (0x000337e0) uni_indicator_pane_stacon_g3

0x8bce,	// (0x000337ea) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0003a2ec) uni_indicator_pane_stacon_g

0x550d,	// (0x00030129) control_top_pane_stacon_g1

0x5515,	// (0x00030131) control_top_pane_stacon_t1_ParamLimits

0x5515,	// (0x00030131) control_top_pane_stacon_t1

0x554c,	// (0x00030168) aid_levels_battery_lsc_ParamLimits

0x554c,	// (0x00030168) aid_levels_battery_lsc

0x5563,	// (0x0003017f) battery_pane_stacon_g1_ParamLimits

0x5563,	// (0x0003017f) battery_pane_stacon_g1

0x5576,	// (0x00030192) battery_pane_stacon_g2_ParamLimits

0x5576,	// (0x00030192) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0003a2f5) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0003a2f5) battery_pane_stacon_g

0x55b4,	// (0x000301d0) navi_icon_pane_stacon

0x55c8,	// (0x000301e4) navi_navi_pane_stacon

0x55b4,	// (0x000301d0) navi_text_pane_stacon

0x550d,	// (0x00030129) control_bottom_pane_stacon_g1

0x55dc,	// (0x000301f8) control_bottom_pane_stacon_t1_ParamLimits

0x55dc,	// (0x000301f8) control_bottom_pane_stacon_t1

0x8bf2,	// (0x0003380e) grid_app_pane_ParamLimits

0x8bf2,	// (0x0003380e) grid_app_pane

0x8c16,	// (0x00033832) scroll_pane_cp15_ParamLimits

0x8c16,	// (0x00033832) scroll_pane_cp15

0x8c29,	// (0x00033845) cell_app_pane_ParamLimits

0x8c29,	// (0x00033845) cell_app_pane

0x8c4d,	// (0x00033869) cell_app_pane_g1_ParamLimits

0x8c4d,	// (0x00033869) cell_app_pane_g1

0x8c6d,	// (0x00033889) cell_app_pane_g2_ParamLimits

0x8c6d,	// (0x00033889) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0003a2fa) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0003a2fa) cell_app_pane_g

0x8c79,	// (0x00033895) cell_app_pane_t1_ParamLimits

0x8c79,	// (0x00033895) cell_app_pane_t1

0x8c90,	// (0x000338ac) grid_highlight_pane_ParamLimits

0x8c90,	// (0x000338ac) grid_highlight_pane

0x8893,	// (0x000334af) cell_highlight_pane_g1

0x889b,	// (0x000334b7) cell_highlight_pane_g2

0x88a3,	// (0x000334bf) cell_highlight_pane_g3

0x88ab,	// (0x000334c7) cell_highlight_pane_g4

0x88b3,	// (0x000334cf) cell_highlight_pane_g5

0x88bb,	// (0x000334d7) cell_highlight_pane_g6

0x88c3,	// (0x000334df) cell_highlight_pane_g7

0x88cb,	// (0x000334e7) cell_highlight_pane_g8

0x88d3,	// (0x000334ef) cell_highlight_pane_g9

0x772e,	// (0x0003234a) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0003a2a8) cell_highlight_pane_g

0x8ca1,	// (0x000338bd) bg_scroll_pane

0x5626,	// (0x00030242) scroll_handle_pane

0x8ce8,	// (0x00033904) scroll_bg_pane_g1

0x8cfd,	// (0x00033919) scroll_bg_pane_g2

0x8d15,	// (0x00033931) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0003a2ff) scroll_bg_pane_g

0x8d2a,	// (0x00033946) scroll_handle_focus_pane_ParamLimits

0x8d2a,	// (0x00033946) scroll_handle_focus_pane

0x8ce8,	// (0x00033904) scroll_handle_pane_g1

0x8d37,	// (0x00033953) scroll_handle_pane_g2

0x8d15,	// (0x00033931) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0003a306) scroll_handle_pane_g

0x88e4,	// (0x00033500) bg_popup_sub_pane_cp21_ParamLimits

0x88e4,	// (0x00033500) bg_popup_sub_pane_cp21

0x8d4b,	// (0x00033967) popup_fep_japan_predictive_window_t1_ParamLimits

0x8d4b,	// (0x00033967) popup_fep_japan_predictive_window_t1

0x8d65,	// (0x00033981) popup_fep_japan_predictive_window_t2_ParamLimits

0x8d65,	// (0x00033981) popup_fep_japan_predictive_window_t2

0x8d98,	// (0x000339b4) popup_fep_japan_predictive_window_t3_ParamLimits

0x8d98,	// (0x000339b4) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0003a30d) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0003a30d) popup_fep_japan_predictive_window_t

0x7738,	// (0x00032354) bg_popup_sub_pane_cp23

0x8dcf,	// (0x000339eb) listscroll_japin_cand_pane

0x8dd7,	// (0x000339f3) popup_fep_japan_candidate_window_t1

0x8de5,	// (0x00033a01) candidate_pane_ParamLimits

0x8de5,	// (0x00033a01) candidate_pane

0x8df7,	// (0x00033a13) scroll_pane_cp30

0x8dff,	// (0x00033a1b) list_single_popup_jap_candidate_pane_ParamLimits

0x8dff,	// (0x00033a1b) list_single_popup_jap_candidate_pane

0x7738,	// (0x00032354) list_highlight_pane_cp30

0x8e14,	// (0x00033a30) list_single_popup_jap_candidate_pane_t1

0x8e23,	// (0x00033a3f) level_1_signal

0x8e35,	// (0x00033a51) level_2_signal

0x8e48,	// (0x00033a64) level_3_signal

0x8e5b,	// (0x00033a77) level_4_signal

0x8e6e,	// (0x00033a8a) level_5_signal

0x8e81,	// (0x00033a9d) level_6_signal

0x8e94,	// (0x00033ab0) level_7_signal

0x8e23,	// (0x00033a3f) level_1_battery

0x8e35,	// (0x00033a51) level_2_battery

0x8e48,	// (0x00033a64) level_3_battery

0x8e5b,	// (0x00033a77) level_4_battery

0x8e6e,	// (0x00033a8a) level_5_battery

0x8e81,	// (0x00033a9d) level_6_battery

0x8e94,	// (0x00033ab0) level_7_battery

0x8ebf,	// (0x00033adb) list_menu_pane_ParamLimits

0x8ebf,	// (0x00033adb) list_menu_pane

0x8ed5,	// (0x00033af1) scroll_pane_cp25_ParamLimits

0x8ed5,	// (0x00033af1) scroll_pane_cp25

0x8eee,	// (0x00033b0a) list_double2_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double2_graphic_pane_cp2

0x8eee,	// (0x00033b0a) list_double2_large_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double2_large_graphic_pane_cp2

0x8eee,	// (0x00033b0a) list_double2_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double2_pane_cp2

0x8eee,	// (0x00033b0a) list_double_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double_graphic_pane_cp2

0x8eee,	// (0x00033b0a) list_double_large_graphic_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double_large_graphic_pane_cp2

0x8eee,	// (0x00033b0a) list_double_number_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double_number_pane_cp2

0x8eee,	// (0x00033b0a) list_double_pane_cp2_ParamLimits

0x8eee,	// (0x00033b0a) list_double_pane_cp2

0x8f12,	// (0x00033b2e) list_single_2graphic_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_2graphic_pane_cp2

0x8f12,	// (0x00033b2e) list_single_graphic_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_graphic_heading_pane_cp2

0x8f12,	// (0x00033b2e) list_single_graphic_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_graphic_pane_cp2

0x8f12,	// (0x00033b2e) list_single_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_heading_pane_cp2

0x8f2b,	// (0x00033b47) list_single_large_graphic_pane_cp2_ParamLimits

0x8f2b,	// (0x00033b47) list_single_large_graphic_pane_cp2

0x8f12,	// (0x00033b2e) list_single_number_heading_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_number_heading_pane_cp2

0x8f12,	// (0x00033b2e) list_single_number_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_number_pane_cp2

0x8f12,	// (0x00033b2e) list_single_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_pane_cp2

0x8fa7,	// (0x00033bc3) bg_popup_sub_pane_cp22

0x56d8,	// (0x000302f4) popup_side_volume_key_window_g1

0x5702,	// (0x0003031e) popup_side_volume_key_window_t1

0x571e,	// (0x0003033a) volume_small_pane_cp1

0x8244,	// (0x00032e60) bg_popup_sub_pane_cp24_ParamLimits

0x8244,	// (0x00032e60) bg_popup_sub_pane_cp24

0x8fbd,	// (0x00033bd9) fep_china_uni_candidate_pane_ParamLimits

0x8fbd,	// (0x00033bd9) fep_china_uni_candidate_pane

0x8fd1,	// (0x00033bed) fep_china_uni_entry_pane

0x8fe1,	// (0x00033bfd) popup_fep_china_uni_window_g1

0x8ffd,	// (0x00033c19) fep_china_uni_entry_pane_g1

0x9005,	// (0x00033c21) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0003a33e) fep_china_uni_entry_pane_g

0x900d,	// (0x00033c29) fep_entry_item_pane

0x9017,	// (0x00033c33) fep_candidate_item_pane

0x901f,	// (0x00033c3b) fep_china_uni_candidate_pane_g1

0x9027,	// (0x00033c43) fep_china_uni_candidate_pane_g2

0x902f,	// (0x00033c4b) fep_china_uni_candidate_pane_g3

0x9037,	// (0x00033c53) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0003a343) fep_china_uni_candidate_pane_g

0x772e,	// (0x0003234a) fep_entry_item_pane_g1

0x903f,	// (0x00033c5b) fep_entry_item_pane_t1_ParamLimits

0x903f,	// (0x00033c5b) fep_entry_item_pane_t1

0x9055,	// (0x00033c71) fep_candidate_item_pane_t1_ParamLimits

0x9055,	// (0x00033c71) fep_candidate_item_pane_t1

0x906a,	// (0x00033c86) fep_candidate_item_pane_t2_ParamLimits

0x906a,	// (0x00033c86) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0003a34c) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0003a34c) fep_candidate_item_pane_t

0x7818,	// (0x00032434) list_highlight_pane_cp31_ParamLimits

0x7818,	// (0x00032434) list_highlight_pane_cp31

0x907c,	// (0x00033c98) level_1_signal_lsc

0x9085,	// (0x00033ca1) level_2_signal_lsc

0x908e,	// (0x00033caa) level_3_signal_lsc

0x9097,	// (0x00033cb3) level_4_signal_lsc

0x90a0,	// (0x00033cbc) level_5_signal_lsc

0x90a9,	// (0x00033cc5) level_6_signal_lsc

0x90b2,	// (0x00033cce) level_7_signal_lsc

0x90b2,	// (0x00033cce) level_1_battery_lsc

0x90bb,	// (0x00033cd7) level_2_battery_lsc

0x90c4,	// (0x00033ce0) level_3_battery_lsc

0x90cd,	// (0x00033ce9) level_4_battery_lsc

0x90d6,	// (0x00033cf2) level_5_battery_lsc

0x90df,	// (0x00033cfb) level_6_battery_lsc

0x907c,	// (0x00033c98) level_7_battery_lsc

0x90e8,	// (0x00033d04) scroll_handle_focus_pane_g1

0x90f1,	// (0x00033d0d) scroll_handle_focus_pane_g2

0x90fa,	// (0x00033d16) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0003a351) scroll_handle_focus_pane_g

0x5726,	// (0x00030342) list_single_2graphic_pane_g1_ParamLimits

0x5726,	// (0x00030342) list_single_2graphic_pane_g1

0x4e1b,	// (0x0002fa37) list_single_2graphic_pane_g2_ParamLimits

0x4e1b,	// (0x0002fa37) list_single_2graphic_pane_g2

0x4da1,	// (0x0002f9bd) list_single_2graphic_pane_g3_ParamLimits

0x4da1,	// (0x0002f9bd) list_single_2graphic_pane_g3

0x5732,	// (0x0003034e) list_single_2graphic_pane_g4_ParamLimits

0x5732,	// (0x0003034e) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0003a358) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0003a358) list_single_2graphic_pane_g

0x573e,	// (0x0003035a) list_single_2graphic_pane_t1_ParamLimits

0x573e,	// (0x0003035a) list_single_2graphic_pane_t1

0x576c,	// (0x00030388) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x576c,	// (0x00030388) list_double2_graphic_large_graphic_pane_g1

0x4ec0,	// (0x0002fadc) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4ec0,	// (0x0002fadc) list_double2_graphic_large_graphic_pane_g2

0x4ed1,	// (0x0002faed) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4ed1,	// (0x0002faed) list_double2_graphic_large_graphic_pane_g3

0x577c,	// (0x00030398) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x577c,	// (0x00030398) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0003a361) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0003a361) list_double2_graphic_large_graphic_pane_g

0x5788,	// (0x000303a4) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x5788,	// (0x000303a4) list_double2_graphic_large_graphic_pane_t1

0x579e,	// (0x000303ba) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x579e,	// (0x000303ba) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0003a36a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0003a36a) list_double2_graphic_large_graphic_pane_t

0x9242,	// (0x00033e5e) popup_fast_swap_window_ParamLimits

0x9242,	// (0x00033e5e) popup_fast_swap_window

0x925e,	// (0x00033e7a) popup_side_volume_key_window

0x927a,	// (0x00033e96) stacon_top_pane

0x9284,	// (0x00033ea0) status_pane_ParamLimits

0x9284,	// (0x00033ea0) status_pane

0x9292,	// (0x00033eae) status_small_pane

0x7738,	// (0x00032354) control_pane

0x7738,	// (0x00032354) stacon_bottom_pane

0x881b,	// (0x00033437) scroll_pane_cp121

0x8812,	// (0x0003342e) set_content_pane

0x9103,	// (0x00033d1f) bg_active_tab_pane_g1_cp1

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp1

0x9115,	// (0x00033d31) bg_active_tab_pane_g3_cp1

0x9103,	// (0x00033d1f) bg_passive_tab_pane_g1_cp1

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp1

0x9115,	// (0x00033d31) bg_passive_tab_pane_g3_cp1

0x911e,	// (0x00033d3a) bg_active_tab_pane_g1_cp2

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp2

0x9127,	// (0x00033d43) bg_active_tab_pane_g3_cp2

0x911e,	// (0x00033d3a) bg_passive_tab_pane_g1_cp2

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp2

0x9127,	// (0x00033d43) bg_passive_tab_pane_g3_cp2

0x9130,	// (0x00033d4c) bg_active_tab_pane_g1_cp3

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp3

0x9139,	// (0x00033d55) bg_active_tab_pane_g3_cp3

0x9130,	// (0x00033d4c) bg_passive_tab_pane_g1_cp3

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp3

0x9139,	// (0x00033d55) bg_passive_tab_pane_g3_cp3

0x9142,	// (0x00033d5e) bg_active_tab_pane_g1_cp4

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp4

0x914d,	// (0x00033d69) bg_active_tab_pane_g3_cp4

0x9142,	// (0x00033d5e) bg_passive_tab_pane_g1_cp4

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp4

0x914d,	// (0x00033d69) bg_passive_tab_pane_g3_cp4

0x9196,	// (0x00033db2) bg_active_tab_pane_g1_cp5

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp5

0x919f,	// (0x00033dbb) bg_active_tab_pane_g3_cp5

0x9196,	// (0x00033db2) bg_passive_tab_pane_g1_cp5

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp5

0x919f,	// (0x00033dbb) bg_passive_tab_pane_g3_cp5

0x91a8,	// (0x00033dc4) list_set_graphic_pane_ParamLimits

0x91a8,	// (0x00033dc4) list_set_graphic_pane

0x7738,	// (0x00032354) bg_set_opt_pane_cp4

0x91c5,	// (0x00033de1) list_set_graphic_pane_g1_ParamLimits

0x91c5,	// (0x00033de1) list_set_graphic_pane_g1

0x91d1,	// (0x00033ded) list_set_graphic_pane_g2_ParamLimits

0x91d1,	// (0x00033ded) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0003a36f) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0003a36f) list_set_graphic_pane_g

0x0009,

0xfac8,	// (0x0003a6e4) volume_small_pane_cp_g

0x91f5,	// (0x00033e11) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x91f5,	// (0x00033e11) list_double2_large_graphic_pane_g1_cp2

0x9201,	// (0x00033e1d) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x9201,	// (0x00033e1d) list_double2_large_graphic_pane_g2_cp2

0x9212,	// (0x00033e2e) list_double2_large_graphic_pane_g3_cp2

0x921a,	// (0x00033e36) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x921a,	// (0x00033e36) list_double2_large_graphic_pane_t1_cp2

0x9230,	// (0x00033e4c) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x9230,	// (0x00033e4c) list_double2_large_graphic_pane_t2_cp2

0xae00,	// (0x00035a1c) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xae00,	// (0x00035a1c) list_double_large_graphic_pane_g1_cp2

0xae11,	// (0x00035a2d) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xae11,	// (0x00035a2d) list_double_large_graphic_pane_g2_cp2

0x93ab,	// (0x00033fc7) list_double_large_graphic_pane_g3_cp2

0xae22,	// (0x00035a3e) list_double_large_graphic_pane_g4_cp

0xae2a,	// (0x00035a46) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xae2a,	// (0x00035a46) list_double_large_graphic_pane_t1_cp2

0xae41,	// (0x00035a5d) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xae41,	// (0x00035a5d) list_double_large_graphic_pane_t2_cp2

0x929d,	// (0x00033eb9) list_double2_graphic_pane_g1_cp2_ParamLimits

0x929d,	// (0x00033eb9) list_double2_graphic_pane_g1_cp2

0x92ab,	// (0x00033ec7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x92ab,	// (0x00033ec7) list_double2_graphic_pane_g2_cp2

0x92bc,	// (0x00033ed8) list_double2_graphic_pane_g3_cp2

0x92c6,	// (0x00033ee2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x92c6,	// (0x00033ee2) list_double2_graphic_pane_t1_cp2

0x92dc,	// (0x00033ef8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x92dc,	// (0x00033ef8) list_double2_graphic_pane_t2_cp2

0x92ee,	// (0x00033f0a) list_single_number_heading_pane_g1_cp2_ParamLimits

0x92ee,	// (0x00033f0a) list_single_number_heading_pane_g1_cp2

0x92fa,	// (0x00033f16) list_single_number_heading_pane_g2_cp2

0x9302,	// (0x00033f1e) list_single_number_heading_pane_t1_cp2_ParamLimits

0x9302,	// (0x00033f1e) list_single_number_heading_pane_t1_cp2

0x9318,	// (0x00033f34) list_single_number_heading_pane_t2_cp2_ParamLimits

0x9318,	// (0x00033f34) list_single_number_heading_pane_t2_cp2

0x932a,	// (0x00033f46) list_single_number_heading_pane_t3_cp2_ParamLimits

0x932a,	// (0x00033f46) list_single_number_heading_pane_t3_cp2

0x92ee,	// (0x00033f0a) list_single_heading_pane_g1_cp2_ParamLimits

0x92ee,	// (0x00033f0a) list_single_heading_pane_g1_cp2

0x92fa,	// (0x00033f16) list_single_heading_pane_g2_cp2

0x9302,	// (0x00033f1e) list_single_heading_pane_t1_cp2_ParamLimits

0x9302,	// (0x00033f1e) list_single_heading_pane_t1_cp2

0xac08,	// (0x00035824) list_single_heading_pane_t2_cp2_ParamLimits

0xac08,	// (0x00035824) list_single_heading_pane_t2_cp2

0xab50,	// (0x0003576c) list_double_graphic_pane_g1_cp2_ParamLimits

0xab50,	// (0x0003576c) list_double_graphic_pane_g1_cp2

0xab5c,	// (0x00035778) list_double_graphic_pane_g2_cp2_ParamLimits

0xab5c,	// (0x00035778) list_double_graphic_pane_g2_cp2

0xab6b,	// (0x00035787) list_double_graphic_pane_g3_cp2

0xab73,	// (0x0003578f) list_double_graphic_pane_t1_cp2_ParamLimits

0xab73,	// (0x0003578f) list_double_graphic_pane_t1_cp2

0xab89,	// (0x000357a5) list_double_graphic_pane_t2_cp2_ParamLimits

0xab89,	// (0x000357a5) list_double_graphic_pane_t2_cp2

0x939f,	// (0x00033fbb) list_double_number_pane_g1_cp2_ParamLimits

0x939f,	// (0x00033fbb) list_double_number_pane_g1_cp2

0x93ab,	// (0x00033fc7) list_double_number_pane_g2_cp2

0xab14,	// (0x00035730) list_double_number_pane_t1_cp2_ParamLimits

0xab14,	// (0x00035730) list_double_number_pane_t1_cp2

0xab28,	// (0x00035744) list_double_number_pane_t2_cp2_ParamLimits

0xab28,	// (0x00035744) list_double_number_pane_t2_cp2

0xab3e,	// (0x0003575a) list_double_number_pane_t3_cp2_ParamLimits

0xab3e,	// (0x0003575a) list_double_number_pane_t3_cp2

0xa9f1,	// (0x0003560d) list_single_graphic_pane_g1_cp2_ParamLimits

0xa9f1,	// (0x0003560d) list_single_graphic_pane_g1_cp2

0x9403,	// (0x0003401f) list_single_graphic_pane_g2_cp2_ParamLimits

0x9403,	// (0x0003401f) list_single_graphic_pane_g2_cp2

0x940f,	// (0x0003402b) list_single_graphic_pane_g3_cp2

0xa9c7,	// (0x000355e3) list_single_graphic_pane_t1_cp2_ParamLimits

0xa9c7,	// (0x000355e3) list_single_graphic_pane_t1_cp2

0x9403,	// (0x0003401f) list_single_number_pane_g1_cp2_ParamLimits

0x9403,	// (0x0003401f) list_single_number_pane_g1_cp2

0x940f,	// (0x0003402b) list_single_number_pane_g2_cp2

0xa9c7,	// (0x000355e3) list_single_number_pane_t1_cp2_ParamLimits

0xa9c7,	// (0x000355e3) list_single_number_pane_t1_cp2

0xa9dd,	// (0x000355f9) list_single_number_pane_t2_cp2_ParamLimits

0xa9dd,	// (0x000355f9) list_single_number_pane_t2_cp2

0x9201,	// (0x00033e1d) list_double2_pane_g1_cp2_ParamLimits

0x9201,	// (0x00033e1d) list_double2_pane_g1_cp2

0x9212,	// (0x00033e2e) list_double2_pane_g2_cp2

0x9377,	// (0x00033f93) list_double2_pane_t1_cp2_ParamLimits

0x9377,	// (0x00033f93) list_double2_pane_t1_cp2

0x938d,	// (0x00033fa9) list_double2_pane_t2_cp2_ParamLimits

0x938d,	// (0x00033fa9) list_double2_pane_t2_cp2

0x939f,	// (0x00033fbb) list_double_pane_g1_cp2_ParamLimits

0x939f,	// (0x00033fbb) list_double_pane_g1_cp2

0x93ab,	// (0x00033fc7) list_double_pane_g2_cp2

0x93b3,	// (0x00033fcf) list_double_pane_t1_cp2_ParamLimits

0x93b3,	// (0x00033fcf) list_double_pane_t1_cp2

0x93c9,	// (0x00033fe5) list_double_pane_t2_cp2_ParamLimits

0x93c9,	// (0x00033fe5) list_double_pane_t2_cp2

0x93f3,	// (0x0003400f) list_single_pane_cp2_g3

0x9403,	// (0x0003401f) list_single_pane_g1_cp2_ParamLimits

0x9403,	// (0x0003401f) list_single_pane_g1_cp2

0x940f,	// (0x0003402b) list_single_pane_g2_cp2

0x9417,	// (0x00034033) list_single_pane_t1_cp2_ParamLimits

0x9417,	// (0x00034033) list_single_pane_t1_cp2

0x942f,	// (0x0003404b) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x942f,	// (0x0003404b) list_single_large_graphic_pane_g1_cp2

0x943b,	// (0x00034057) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x943b,	// (0x00034057) list_single_large_graphic_pane_g2_cp2

0x9447,	// (0x00034063) list_single_large_graphic_pane_g3_cp2

0x944f,	// (0x0003406b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x944f,	// (0x0003406b) list_single_large_graphic_pane_g4_cp1

0x9469,	// (0x00034085) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9469,	// (0x00034085) list_single_large_graphic_pane_t1_cp2

0xa993,	// (0x000355af) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa993,	// (0x000355af) list_single_graphic_heading_pane_g1_cp2

0xa960,	// (0x0003557c) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa960,	// (0x0003557c) list_single_graphic_heading_pane_g4_cp2

0x940f,	// (0x0003402b) list_single_graphic_heading_pane_g5_cp2

0xa99f,	// (0x000355bb) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa99f,	// (0x000355bb) list_single_graphic_heading_pane_t1_cp2

0xa9b5,	// (0x000355d1) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa9b5,	// (0x000355d1) list_single_graphic_heading_pane_t2_cp2

0xa954,	// (0x00035570) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa954,	// (0x00035570) list_single_2graphic_pane_g1_cp2

0xa960,	// (0x0003557c) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa960,	// (0x0003557c) list_single_2graphic_pane_g2_cp2

0x940f,	// (0x0003402b) list_single_2graphic_pane_g3_cp2

0xa971,	// (0x0003558d) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa971,	// (0x0003558d) list_single_2graphic_pane_g4_cp2

0xa97d,	// (0x00035599) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa97d,	// (0x00035599) list_single_2graphic_pane_t1_cp2

0x772e,	// (0x0003234a) list_highlight_pane_g10_cp1

0xa52c,	// (0x00035148) list_highlight_pane_g1_cp1

0xa534,	// (0x00035150) list_highlight_pane_g2_cp1

0xa53c,	// (0x00035158) list_highlight_pane_g3_cp1

0xa544,	// (0x00035160) list_highlight_pane_g4_cp1

0xa54c,	// (0x00035168) list_highlight_pane_g5_cp1

0xa554,	// (0x00035170) list_highlight_pane_g6_cp1

0xa55c,	// (0x00035178) list_highlight_pane_g7_cp1

0xa564,	// (0x00035180) list_highlight_pane_g8_cp1

0xa56c,	// (0x00035188) list_highlight_pane_g9_cp1

0xa44c,	// (0x00035068) form_field_slider_pane_t3

0xa45a,	// (0x00035076) form_field_slider_pane_t4

0xa468,	// (0x00035084) slider_form_pane_ParamLimits

0xa468,	// (0x00035084) slider_form_pane

0x7738,	// (0x00032354) control_abbreviations

0x7738,	// (0x00032354) control_conventions

0x7738,	// (0x00032354) control_definitions

0x7738,	// (0x00032354) format_table_attribute

0xac52,	// (0x0003586e) bg_popup_preview_window_pane_g9

0x7738,	// (0x00032354) format_table_data2

0x7738,	// (0x00032354) format_table_data3

0x7738,	// (0x00032354) format_table_data_example

0x0008,

0x7738,	// (0x00032354) intro_purpose

0xf8ef,	// (0x0003a50b) bg_popup_preview_window_pane_g

0x7738,	// (0x00032354) texts_category

0x7738,	// (0x00032354) texts_graphics

0x947f,	// (0x0003409b) text_digital

0x948e,	// (0x000340aa) text_primary

0x949d,	// (0x000340b9) text_primary_small

0x94ac,	// (0x000340c8) text_secondary

0x94bb,	// (0x000340d7) text_title

0xb38d,	// (0x00035fa9) bg_passive_tab_pane_g1_cp3_srt

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp3_srt

0xb396,	// (0x00035fb2) bg_passive_tab_pane_g3_cp3_srt

0x7818,	// (0x00032434) bg_active_tab_pane_cp3_srt_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp3_srt

0xb39f,	// (0x00035fbb) tabs_4_active_pane_srt_g1

0xb3a7,	// (0x00035fc3) tabs_4_active_pane_srt_t1_ParamLimits

0xb3a7,	// (0x00035fc3) tabs_4_active_pane_srt_t1

0xb38d,	// (0x00035fa9) bg_active_tab_pane_g1_cp3_copy1

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp3_copy1

0xb396,	// (0x00035fb2) bg_active_tab_pane_g3_cp3_copy1

0x7818,	// (0x00032434) tabs_2_long_active_pane_srt_ParamLimits

0x7818,	// (0x00032434) tabs_2_long_active_pane_srt

0x7818,	// (0x00032434) tabs_2_long_passive_pane_srt_ParamLimits

0x7818,	// (0x00032434) tabs_2_long_passive_pane_srt

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp4_srt_ParamLimits

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp4_srt

0xb081,	// (0x00035c9d) bg_passive_tab_pane_g1_cp4_srt

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp4_srt

0xb08a,	// (0x00035ca6) bg_passive_tab_pane_g3_cp4_srt

0x89fb,	// (0x00033617) bg_active_tab_pane_cp4_srt_ParamLimits

0x89fb,	// (0x00033617) bg_active_tab_pane_cp4_srt

0xb093,	// (0x00035caf) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb093,	// (0x00035caf) tabs_2_long_active_pane_srt_t1

0xb081,	// (0x00035c9d) bg_active_tab_pane_g1_cp4_srt

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp4_srt

0xb08a,	// (0x00035ca6) bg_active_tab_pane_g3_cp4_srt

0x8244,	// (0x00032e60) tabs_3_long_active_pane_srt_ParamLimits

0x8244,	// (0x00032e60) tabs_3_long_active_pane_srt

0x8244,	// (0x00032e60) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8244,	// (0x00032e60) tabs_3_long_passive_pane_cp_srt

0x8244,	// (0x00032e60) tabs_3_long_passive_pane_srt_ParamLimits

0x8244,	// (0x00032e60) tabs_3_long_passive_pane_srt

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp5_srt_ParamLimits

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp5_srt

0x9196,	// (0x00033db2) bg_passive_tab_pane_g1_cp5_srt

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp5_srt

0x919f,	// (0x00033dbb) bg_passive_tab_pane_g3_cp5_srt

0x89fb,	// (0x00033617) bg_active_tab_pane_cp5_srt_ParamLimits

0x89fb,	// (0x00033617) bg_active_tab_pane_cp5_srt

0xb06f,	// (0x00035c8b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb06f,	// (0x00035c8b) tabs_3_long_active_pane_srt_t1

0x9196,	// (0x00033db2) bg_active_tab_pane_g1_cp5_srt

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp5_srt

0x919f,	// (0x00033dbb) bg_active_tab_pane_g3_cp5_srt

0xb061,	// (0x00035c7d) navi_text_pane_srt_t1

0xb059,	// (0x00035c75) navi_icon_pane_srt_g1

0x9684,	// (0x000342a0) midp_editing_number_pane_srt

0x94ca,	// (0x000340e6) midp_ticker_pane_srt

0x968c,	// (0x000342a8) midp_ticker_pane_srt_g1

0x9694,	// (0x000342b0) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0003a38e) midp_ticker_pane_srt_g

0x969c,	// (0x000342b8) midp_ticker_pane_srt_t1

0xb04a,	// (0x00035c66) midp_editing_number_pane_t1_copy1

0x8a1c,	// (0x00033638) listscroll_midp_pane

0x8a1c,	// (0x00033638) midp_form_pane

0x9536,	// (0x00034152) midp_info_popup_window_ParamLimits

0x9536,	// (0x00034152) midp_info_popup_window

0x88e4,	// (0x00033500) bg_popup_sub_pane_cp50_ParamLimits

0x88e4,	// (0x00033500) bg_popup_sub_pane_cp50

0xa164,	// (0x00034d80) listscroll_midp_info_pane_ParamLimits

0xa164,	// (0x00034d80) listscroll_midp_info_pane

0xa14c,	// (0x00034d68) listscroll_form_midp_pane_ParamLimits

0xa14c,	// (0x00034d68) listscroll_form_midp_pane

0xa158,	// (0x00034d74) scroll_bar_cp050

0xa12c,	// (0x00034d48) list_midp_pane

0xbde3,	// (0x000369ff) signal_pane_g2_cp

0xa066,	// (0x00034c82) listscroll_midp_info_pane_t1_ParamLimits

0xa066,	// (0x00034c82) listscroll_midp_info_pane_t1

0xa07e,	// (0x00034c9a) listscroll_midp_info_pane_t2_ParamLimits

0xa07e,	// (0x00034c9a) listscroll_midp_info_pane_t2

0xa0bc,	// (0x00034cd8) listscroll_midp_info_pane_t3_ParamLimits

0xa0bc,	// (0x00034cd8) listscroll_midp_info_pane_t3

0xa0f6,	// (0x00034d12) listscroll_midp_info_pane_t4_ParamLimits

0xa0f6,	// (0x00034d12) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0003a446) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0003a446) listscroll_midp_info_pane_t

0x89a8,	// (0x000335c4) scroll_pane_cp21

0xa004,	// (0x00034c20) form_midp_field_choice_group_pane

0xa00d,	// (0x00034c29) form_midp_field_text_pane

0xa04c,	// (0x00034c68) form_midp_field_time_pane

0xa054,	// (0x00034c70) form_midp_gauge_slider_pane

0xa05d,	// (0x00034c79) form_midp_gauge_wait_pane

0x7738,	// (0x00032354) form_midp_image_pane

0x62f8,	// (0x00030f14) list_single_midp_pane_ParamLimits

0x62f8,	// (0x00030f14) list_single_midp_pane

0x9fbc,	// (0x00034bd8) form_midp_field_text_pane_t1

0x9d86,	// (0x000349a2) input_focus_pane_cp050

0x9ff3,	// (0x00034c0f) list_midp_form_text_pane

0x9f8b,	// (0x00034ba7) form_midp_field_choice_group_pane_t1

0x9f99,	// (0x00034bb5) input_focus_pane_cp051

0x9fad,	// (0x00034bc9) list_midp_choice_pane

0x7738,	// (0x00032354) status_idle_pane

0x9f6f,	// (0x00034b8b) form_midp_field_time_pane_t1

0x772e,	// (0x0003234a) wait_anim_pane_g2_copy1

0x9f7d,	// (0x00034b99) form_midp_field_time_pane_t2

0x0001,

0x95e4,	// (0x00034200) aid_navinavi_width_2_pane

0xf825,	// (0x0003a441) form_midp_field_time_pane_t

0x7738,	// (0x00032354) input_focus_pane_cp052

0x7738,	// (0x00032354) bg_input_focus_pane_cp040

0x9f2f,	// (0x00034b4b) form_midp_gauge_slider_pane_t1

0x9f3d,	// (0x00034b59) form_midp_gauge_slider_pane_t2

0x9f4b,	// (0x00034b67) form_midp_gauge_slider_pane_t3

0x9f59,	// (0x00034b75) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0003a438) form_midp_gauge_slider_pane_t

0x9f67,	// (0x00034b83) form_midp_slider_pane

0x7818,	// (0x00032434) bg_input_focus_pane_cp041_ParamLimits

0x7818,	// (0x00032434) bg_input_focus_pane_cp041

0x9efc,	// (0x00034b18) form_midp_gauge_wait_pane_t1_ParamLimits

0x9efc,	// (0x00034b18) form_midp_gauge_wait_pane_t1

0x9f0e,	// (0x00034b2a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9f0e,	// (0x00034b2a) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0003a433) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0003a433) form_midp_gauge_wait_pane_t

0x9f20,	// (0x00034b3c) form_midp_wait_pane_ParamLimits

0x9f20,	// (0x00034b3c) form_midp_wait_pane

0x9ec6,	// (0x00034ae2) form_midp_image_pane_g1

0x9ecf,	// (0x00034aeb) form_midp_image_pane_t1

0x9ede,	// (0x00034afa) form_midp_image_pane_t2

0x9eed,	// (0x00034b09) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0003a42c) form_midp_image_pane_t

0x9ebd,	// (0x00034ad9) list_single_midp_pane_g1

0x62e9,	// (0x00030f05) list_single_midp_pane_t1

0x9e95,	// (0x00034ab1) list_midp_form_item_pane_ParamLimits

0x9e95,	// (0x00034ab1) list_midp_form_item_pane

0x958c,	// (0x000341a8) list_midp_form_item_pane_t1

0x959b,	// (0x000341b7) midp_ticker_pane_g1

0x95a7,	// (0x000341c3) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0003a374) midp_ticker_pane_g

0x95b3,	// (0x000341cf) midp_ticker_pane_t1

0xb29b,	// (0x00035eb7) midp_editing_number_pane_t1

0xb279,	// (0x00035e95) midp_editing_number_pane

0xb288,	// (0x00035ea4) midp_ticker_pane

0xb03a,	// (0x00035c56) ai_message_heading_pane

0x7738,	// (0x00032354) bg_popup_window_pane_cp14

0xb042,	// (0x00035c5e) listscroll_ai_message_pane

0xafc4,	// (0x00035be0) ai_message_heading_pane_g1_ParamLimits

0xafc4,	// (0x00035be0) ai_message_heading_pane_g1

0xafd0,	// (0x00035bec) ai_message_heading_pane_g2_ParamLimits

0xafd0,	// (0x00035bec) ai_message_heading_pane_g2

0xafdc,	// (0x00035bf8) ai_message_heading_pane_g3_ParamLimits

0xafdc,	// (0x00035bf8) ai_message_heading_pane_g3

0xafe8,	// (0x00035c04) ai_message_heading_pane_g4_ParamLimits

0xafe8,	// (0x00035c04) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0003a56d) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0003a56d) ai_message_heading_pane_g

0xaff4,	// (0x00035c10) ai_message_heading_pane_t1_ParamLimits

0xaff4,	// (0x00035c10) ai_message_heading_pane_t1

0xb00e,	// (0x00035c2a) ai_message_heading_pane_t2_ParamLimits

0xb00e,	// (0x00035c2a) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0003a576) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0003a576) ai_message_heading_pane_t

0xb020,	// (0x00035c3c) bg_popup_heading_pane_cp1_ParamLimits

0xb020,	// (0x00035c3c) bg_popup_heading_pane_cp1

0xafb2,	// (0x00035bce) list_ai_message_pane_ParamLimits

0xafb2,	// (0x00035bce) list_ai_message_pane

0x89a8,	// (0x000335c4) scroll_pane_cp10

0xaf4e,	// (0x00035b6a) list_ai_message_pane_g1

0xaf56,	// (0x00035b72) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0003a54a) list_ai_message_pane_g

0xaf5e,	// (0x00035b7a) list_ai_message_pane_t1_ParamLimits

0xaf5e,	// (0x00035b7a) list_ai_message_pane_t1

0xaf73,	// (0x00035b8f) list_ai_message_pane_t2_ParamLimits

0xaf73,	// (0x00035b8f) list_ai_message_pane_t2

0xaf88,	// (0x00035ba4) list_ai_message_pane_t3_ParamLimits

0xaf88,	// (0x00035ba4) list_ai_message_pane_t3

0xaf9d,	// (0x00035bb9) list_ai_message_pane_t4_ParamLimits

0xaf9d,	// (0x00035bb9) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0003a54f) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0003a54f) list_ai_message_pane_t

0xaf39,	// (0x00035b55) cell_ai_soft_ind_pane_ParamLimits

0xaf39,	// (0x00035b55) cell_ai_soft_ind_pane

0x95c5,	// (0x000341e1) cell_ai_soft_ind_pane_g1_ParamLimits

0x95c5,	// (0x000341e1) cell_ai_soft_ind_pane_g1

0x7738,	// (0x00032354) grid_highlight_cp1

0x95d2,	// (0x000341ee) text_secondary_cp56_ParamLimits

0x95d2,	// (0x000341ee) text_secondary_cp56

0xaf0e,	// (0x00035b2a) example_general_pane_ParamLimits

0xaf0e,	// (0x00035b2a) example_general_pane

0xaf1a,	// (0x00035b36) example_parent_pane_g1_ParamLimits

0xaf1a,	// (0x00035b36) example_parent_pane_g1

0xaf26,	// (0x00035b42) example_parent_pane_t1_ParamLimits

0xaf26,	// (0x00035b42) example_parent_pane_t1

0x5e99,	// (0x00030ab5) popup_preview_text_window_ParamLimits

0x5e99,	// (0x00030ab5) popup_preview_text_window

0x93fb,	// (0x00034017) list_single_pane_cp2_g4

0x82fa,	// (0x00032f16) bg_popup_preview_window_pane_ParamLimits

0x82fa,	// (0x00032f16) bg_popup_preview_window_pane

0xac5a,	// (0x00035876) popup_preview_text_window_t1_ParamLimits

0xac5a,	// (0x00035876) popup_preview_text_window_t1

0xac78,	// (0x00035894) popup_preview_text_window_t2_ParamLimits

0xac78,	// (0x00035894) popup_preview_text_window_t2

0xacc1,	// (0x000358dd) popup_preview_text_window_t3_ParamLimits

0xacc1,	// (0x000358dd) popup_preview_text_window_t3

0xad06,	// (0x00035922) popup_preview_text_window_t4_ParamLimits

0xad06,	// (0x00035922) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0003a51e) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0003a51e) popup_preview_text_window_t

0xad84,	// (0x000359a0) scroll_pane_cp11

0x9d12,	// (0x0003492e) bg_popup_preview_window_pane_g1

0xac1a,	// (0x00035836) bg_popup_preview_window_pane_g2

0xac22,	// (0x0003583e) bg_popup_preview_window_pane_g3

0xac2a,	// (0x00035846) bg_popup_preview_window_pane_g4

0xac32,	// (0x0003584e) bg_popup_preview_window_pane_g5

0xac3a,	// (0x00035856) bg_popup_preview_window_pane_g6

0xac42,	// (0x0003585e) bg_popup_preview_window_pane_g7

0xac4a,	// (0x00035866) bg_popup_preview_window_pane_g8

0x48f0,	// (0x0002f50c) aid_popup_width_pane

0x5e77,	// (0x00030a93) popup_midp_note_alarm_window_ParamLimits

0x5e77,	// (0x00030a93) popup_midp_note_alarm_window

0x882c,	// (0x00033448) data_form_pane_ParamLimits

0x52d2,	// (0x0002feee) form_field_data_pane_g1

0x52dc,	// (0x0002fef8) form_field_data_pane_t1_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_ParamLimits

0x52f4,	// (0x0002ff10) data_form_wide_pane_ParamLimits

0x5305,	// (0x0002ff21) form_field_data_wide_pane_g1

0x5311,	// (0x0002ff2d) form_field_data_wide_pane_t1_ParamLimits

0x85a9,	// (0x000331c5) input_focus_pane_cp6_ParamLimits

0x8955,	// (0x00033571) input_popup_find_pane_g1_ParamLimits

0x8955,	// (0x00033571) input_popup_find_pane_g1

0x5587,	// (0x000301a3) aid_navi_side_left_pane

0x559c,	// (0x000301b8) aid_navi_side_right_pane

0xa627,	// (0x00035243) bg_popup_window_pane_cp30_ParamLimits

0xa627,	// (0x00035243) bg_popup_window_pane_cp30

0xa6a1,	// (0x000352bd) popup_midp_note_alarm_window_g1_ParamLimits

0xa6a1,	// (0x000352bd) popup_midp_note_alarm_window_g1

0xa6d1,	// (0x000352ed) popup_midp_note_alarm_window_t1_ParamLimits

0xa6d1,	// (0x000352ed) popup_midp_note_alarm_window_t1

0xa772,	// (0x0003538e) popup_midp_note_alarm_window_t2_ParamLimits

0xa772,	// (0x0003538e) popup_midp_note_alarm_window_t2

0xa820,	// (0x0003543c) popup_midp_note_alarm_window_t3_ParamLimits

0xa820,	// (0x0003543c) popup_midp_note_alarm_window_t3

0xa852,	// (0x0003546e) popup_midp_note_alarm_window_t4_ParamLimits

0xa852,	// (0x0003546e) popup_midp_note_alarm_window_t4

0xa878,	// (0x00035494) popup_midp_note_alarm_window_t5_ParamLimits

0xa878,	// (0x00035494) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0003a4bb) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0003a4bb) popup_midp_note_alarm_window_t

0xa924,	// (0x00035540) wait_bar_pane_cp1_ParamLimits

0xa924,	// (0x00035540) wait_bar_pane_cp1

0x7738,	// (0x00032354) wait_anim_pane_copy1

0x7738,	// (0x00032354) wait_border_pane_copy1

0xa30d,	// (0x00034f29) wait_border_pane_g1_copy1

0x532b,	// (0x0002ff47) form_field_popup_pane_g1

0x5333,	// (0x0002ff4f) form_field_popup_pane_t1_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_cp7_ParamLimits

0x8866,	// (0x00033482) list_form_pane_ParamLimits

0x534b,	// (0x0002ff67) form_field_popup_wide_pane_g1

0x5353,	// (0x0002ff6f) form_field_popup_wide_pane_t1_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_cp8_ParamLimits

0x8872,	// (0x0003348e) list_form_wide_pane_ParamLimits

0xb425,	// (0x00036041) aid_size_cell_graphic_pane

0x53dd,	// (0x0002fff9) data_form_pane_t1_ParamLimits

0x657e,	// (0x0003119a) data_form_wide_pane_t1_ParamLimits

0x98df,	// (0x000344fb) bg_status_flat_pane

0x7778,	// (0x00032394) title_pane_t1_ParamLimits

0x77e0,	// (0x000323fc) title_pane_t2_ParamLimits

0x7806,	// (0x00032422) title_pane_t3_ParamLimits

0xf557,	// (0x0003a173) title_pane_t_ParamLimits

0x8e23,	// (0x00033a3f) level_1_signal_ParamLimits

0x8e35,	// (0x00033a51) level_2_signal_ParamLimits

0x8e48,	// (0x00033a64) level_3_signal_ParamLimits

0x8e5b,	// (0x00033a77) level_4_signal_ParamLimits

0x8e6e,	// (0x00033a8a) level_5_signal_ParamLimits

0x8e81,	// (0x00033a9d) level_6_signal_ParamLimits

0x8e94,	// (0x00033ab0) level_7_signal_ParamLimits

0x8e23,	// (0x00033a3f) level_1_battery_ParamLimits

0x8e35,	// (0x00033a51) level_2_battery_ParamLimits

0x8e48,	// (0x00033a64) level_3_battery_ParamLimits

0x8e5b,	// (0x00033a77) level_4_battery_ParamLimits

0x8e6e,	// (0x00033a8a) level_5_battery_ParamLimits

0x8e81,	// (0x00033a9d) level_6_battery_ParamLimits

0x8e94,	// (0x00033ab0) level_7_battery_ParamLimits

0xa52c,	// (0x00035148) bg_status_flat_pane_g1

0xa534,	// (0x00035150) bg_status_flat_pane_g2

0xa53c,	// (0x00035158) bg_status_flat_pane_g3

0xa544,	// (0x00035160) bg_status_flat_pane_g4

0xa54c,	// (0x00035168) bg_status_flat_pane_g5

0xa554,	// (0x00035170) bg_status_flat_pane_g6

0xa55c,	// (0x00035178) bg_status_flat_pane_g7

0x782e,	// (0x0003244a) tabs_3_active_pane_t1_ParamLimits

0x782e,	// (0x0003244a) tabs_3_passive_pane_t1_ParamLimits

0x7848,	// (0x00032464) tabs_4_active_pane_t1_ParamLimits

0x7848,	// (0x00032464) tabs_4_1_passive_pane_t1_ParamLimits

0x89e9,	// (0x00033605) tabs_2_active_pane_t1_ParamLimits

0x89e9,	// (0x00033605) tabs_2_passive_pane_t1_ParamLimits

0x89fb,	// (0x00033617) bg_active_tab_pane_cp4_ParamLimits

0x8a09,	// (0x00033625) tabs_2_long_active_pane_t1_ParamLimits

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp4_ParamLimits

0x61c0,	// (0x00030ddc) list_single_midp_graphic_pane_t1_ParamLimits

0x89fb,	// (0x00033617) bg_active_tab_pane_cp5_ParamLimits

0x8a28,	// (0x00033644) tabs_3_long_active_pane_t1_ParamLimits

0x8a1c,	// (0x00033638) bg_passive_tab_pane_cp5_ParamLimits

0x61c0,	// (0x00030ddc) list_single_midp_graphic_pane_t1

0x98df,	// (0x000344fb) bg_status_flat_pane_ParamLimits

0x99a2,	// (0x000345be) indicator_pane_cp2_ParamLimits

0x99a2,	// (0x000345be) indicator_pane_cp2

0x9acd,	// (0x000346e9) navi_pane_srt_ParamLimits

0x9acd,	// (0x000346e9) navi_pane_srt

0x9af1,	// (0x0003470d) popup_clock_digital_analogue_window_cp1

0x78f5,	// (0x00032511) indicator_pane_t1

0x94ca,	// (0x000340e6) copy_highlight_pane

0x94ca,	// (0x000340e6) cursor_graphics_pane

0x94ca,	// (0x000340e6) graphic_within_text_pane

0x94ca,	// (0x000340e6) link_highlight_pane

0xad47,	// (0x00035963) popup_preview_text_window_t5_ParamLimits

0xad47,	// (0x00035963) popup_preview_text_window_t5

0x95ec,	// (0x00034208) cursor_digital_pane

0x95ec,	// (0x00034208) cursor_primary_pane

0x95fd,	// (0x00034219) cursor_primary_small_pane

0x9605,	// (0x00034221) cursor_secondary_pane

0x960d,	// (0x00034229) cursor_title_pane

0x95ec,	// (0x00034208) link_highlight_digital_pane

0x95f4,	// (0x00034210) link_highlight_primary_pane

0x95fd,	// (0x00034219) link_highlight_primary_small_pane

0x9605,	// (0x00034221) link_highlight_secondary_pane

0x960d,	// (0x00034229) link_highlight_title_pane

0x95ec,	// (0x00034208) copy_highlight_digital_pane

0x95ec,	// (0x00034208) copy_highlight_primary_pane

0x95fd,	// (0x00034219) copy_highlight_primary_small_pane

0x9605,	// (0x00034221) copy_highlight_secondary_pane

0x960d,	// (0x00034229) copy_highlight_title_pane

0x9605,	// (0x00034221) graphic_text_digital_pane

0xa5ca,	// (0x000351e6) graphic_text_primary_pane

0xa5d3,	// (0x000351ef) graphic_text_primary_small_pane

0x95fd,	// (0x00034219) graphic_text_secondary_pane

0x95ec,	// (0x00034208) graphic_text_title_pane

0x9615,	// (0x00034231) cursor_primary_pane_g1

0xa5bc,	// (0x000351d8) cursor_text_primary_t1

0xa5a4,	// (0x000351c0) cursor_primary_small_pane_g1

0xa5ae,	// (0x000351ca) cursor_text_primary_small_t1

0xa58c,	// (0x000351a8) cursor_primary_small_pane_g1_copy1

0xa596,	// (0x000351b2) cursor_text_primary_small_t1_copy1

0xa574,	// (0x00035190) cursor_text_title_t1

0xa582,	// (0x0003519e) cursor_title_pane_g1

0x9615,	// (0x00034231) cursor_digital_pane_g1

0x961f,	// (0x0003423b) cursor_text_digital_t1

0x9644,	// (0x00034260) link_highlight_primary_pane_g1

0xa51d,	// (0x00035139) link_highlight_primary_pane_t1

0x962d,	// (0x00034249) link_highlight_primary_small_pane_g1

0x9635,	// (0x00034251) link_highlight_primary_small_pane_t1

0x9644,	// (0x00034260) link_highlight_secondary_pane_g1

0x964c,	// (0x00034268) link_highlight_secondary_pane_t1

0xa491,	// (0x000350ad) link_highlight_title_pane_g1

0xa499,	// (0x000350b5) link_highlight_title_pane_t1

0xa47a,	// (0x00035096) link_highlight_digital_pane_g1

0xa482,	// (0x0003509e) link_highlight_digital_pane_t1

0xa352,	// (0x00034f6e) copy_highlight_primary_pane_g1

0xa35a,	// (0x00034f76) copy_highlight_primary_pane_t1

0xa32c,	// (0x00034f48) copy_highlight_primary_small_pane_g1

0xa343,	// (0x00034f5f) copy_highlight_primary_small_pane_t1

0x965b,	// (0x00034277) copy_highlight_secondary_pane_g1

0x9663,	// (0x0003427f) copy_highlight_secondary_pane_t1

0xa32c,	// (0x00034f48) copy_highlight_title_pane_g1

0xa334,	// (0x00034f50) copy_highlight_title_pane_t1

0xa352,	// (0x00034f6e) copy_highlight_digital_pane_g1

0xb5f0,	// (0x0003620c) copy_highlight_digital_pane_t1

0xb544,	// (0x00036160) graphic_text_primary_pane_g1

0xb5d4,	// (0x000361f0) graphic_text_primary_pane_t1

0xb5e2,	// (0x000361fe) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0003a5ea) graphic_text_primary_pane_t

0xb5b0,	// (0x000361cc) graphic_text_primary_small_pane_g1

0xb5b8,	// (0x000361d4) graphic_text_primary_small_pane_t1

0xb5c6,	// (0x000361e2) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0003a5e5) graphic_text_primary_small_pane_t

0xb58c,	// (0x000361a8) graphic_text_secondary_pane_g1

0xb594,	// (0x000361b0) graphic_text_secondary_pane_t1

0xb5a2,	// (0x000361be) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0003a5e0) graphic_text_secondary_pane_t

0xb568,	// (0x00036184) graphic_text_title_pane_g1

0xb570,	// (0x0003618c) graphic_text_title_pane_t1

0xb57e,	// (0x0003619a) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0003a5db) graphic_text_title_pane_t

0xb544,	// (0x00036160) graphic_text_digital_pane_g1

0xb54c,	// (0x00036168) graphic_text_digital_pane_t1

0xb55a,	// (0x00036176) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0003a5d6) graphic_text_digital_pane_t

0x7818,	// (0x00032434) navi_icon_pane_srt_ParamLimits

0x7818,	// (0x00032434) navi_icon_pane_srt

0x7738,	// (0x00032354) navi_midp_pane_srt

0x7738,	// (0x00032354) navi_navi_pane_srt

0x7818,	// (0x00032434) navi_text_pane_srt_ParamLimits

0x7818,	// (0x00032434) navi_text_pane_srt

0xb50f,	// (0x0003612b) navi_navi_icon_text_pane_srt

0xb517,	// (0x00036133) navi_navi_pane_srt_g1_ParamLimits

0xb517,	// (0x00036133) navi_navi_pane_srt_g1

0xb529,	// (0x00036145) navi_navi_pane_srt_g2_ParamLimits

0xb529,	// (0x00036145) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0003a5d1) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0003a5d1) navi_navi_pane_srt_g

0xb53b,	// (0x00036157) navi_navi_tabs_pane_srt

0xb50f,	// (0x0003612b) navi_navi_text_pane_srt

0xb50f,	// (0x0003612b) navi_navi_volume_pane_srt

0xb500,	// (0x0003611c) navi_navi_text_pane_srt_t1

0x6647,	// (0x00031263) navi_navi_volume_pane_srt_g1

0x664f,	// (0x0003126b) volume_small_pane_srt_ParamLimits

0x664f,	// (0x0003126b) volume_small_pane_srt

0x58f1,	// (0x0003050d) volume_small_pane_srt_g1_ParamLimits

0x58f1,	// (0x0003050d) volume_small_pane_srt_g1

0x5901,	// (0x0003051d) volume_small_pane_srt_g2_ParamLimits

0x5901,	// (0x0003051d) volume_small_pane_srt_g2

0x5912,	// (0x0003052e) volume_small_pane_srt_g3_ParamLimits

0x5912,	// (0x0003052e) volume_small_pane_srt_g3

0x5923,	// (0x0003053f) volume_small_pane_srt_g4_ParamLimits

0x5923,	// (0x0003053f) volume_small_pane_srt_g4

0x5934,	// (0x00030550) volume_small_pane_srt_g5_ParamLimits

0x5934,	// (0x00030550) volume_small_pane_srt_g5

0x5945,	// (0x00030561) volume_small_pane_srt_g6_ParamLimits

0x5945,	// (0x00030561) volume_small_pane_srt_g6

0x5956,	// (0x00030572) volume_small_pane_srt_g7_ParamLimits

0x5956,	// (0x00030572) volume_small_pane_srt_g7

0x5967,	// (0x00030583) volume_small_pane_srt_g8_ParamLimits

0x5967,	// (0x00030583) volume_small_pane_srt_g8

0x5978,	// (0x00030594) volume_small_pane_srt_g9_ParamLimits

0x5978,	// (0x00030594) volume_small_pane_srt_g9

0x5989,	// (0x000305a5) volume_small_pane_srt_g10_ParamLimits

0x5989,	// (0x000305a5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0003a379) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0003a379) volume_small_pane_srt_g

0x83a3,	// (0x00032fbf) query_popup_data_pane_cp2

0xb4e6,	// (0x00036102) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb4e6,	// (0x00036102) navi_navi_icon_text_pane_srt_t1

0xa5ca,	// (0x000351e6) navi_tabs_2_long_pane_srt

0xa5ca,	// (0x000351e6) navi_tabs_2_pane_srt

0xa5ca,	// (0x000351e6) navi_tabs_3_long_pane_srt

0xa5ca,	// (0x000351e6) navi_tabs_3_pane_srt

0xa5ca,	// (0x000351e6) navi_tabs_4_pane_srt

0x6627,	// (0x00031243) tabs_2_active_pane_srt_ParamLimits

0x6627,	// (0x00031243) tabs_2_active_pane_srt

0x6637,	// (0x00031253) tabs_2_passive_pane_srt_ParamLimits

0x6637,	// (0x00031253) tabs_2_passive_pane_srt

0x9808,	// (0x00034424) bg_passive_tab_pane_cp1_srt_ParamLimits

0x9808,	// (0x00034424) bg_passive_tab_pane_cp1_srt

0xb4b2,	// (0x000360ce) bg_passive_tab_pane_g1_cp1_srt

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp1_srt

0xb4bb,	// (0x000360d7) bg_passive_tab_pane_g3_cp1_srt

0x7818,	// (0x00032434) bg_active_tab_pane_cp1_srt_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp1_srt

0xb4c4,	// (0x000360e0) tabs_2_active_pane_srt_g1

0xb4cc,	// (0x000360e8) tabs_2_active_pane_srt_t1_ParamLimits

0xb4cc,	// (0x000360e8) tabs_2_active_pane_srt_t1

0xb4b2,	// (0x000360ce) bg_active_tab_pane_g1_cp1_srt

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp1_srt

0xb4bb,	// (0x000360d7) bg_active_tab_pane_g3_cp1_srt

0x65f4,	// (0x00031210) tabs_3_active_pane_srt_ParamLimits

0x65f4,	// (0x00031210) tabs_3_active_pane_srt

0x6605,	// (0x00031221) tabs_3_passive_pane_cp_srt_ParamLimits

0x6605,	// (0x00031221) tabs_3_passive_pane_cp_srt

0x6616,	// (0x00031232) tabs_3_passive_pane_srt_ParamLimits

0x6616,	// (0x00031232) tabs_3_passive_pane_srt

0x9808,	// (0x00034424) bg_passive_tab_pane_cp2_srt_ParamLimits

0x9808,	// (0x00034424) bg_passive_tab_pane_cp2_srt

0x9672,	// (0x0003428e) bg_passive_tab_pane_g1_cp2_srt

0x910c,	// (0x00033d28) bg_passive_tab_pane_g2_cp2_srt

0x967b,	// (0x00034297) bg_passive_tab_pane_g3_cp2_srt

0x7818,	// (0x00032434) bg_active_tab_pane_cp2_srt_ParamLimits

0x7818,	// (0x00032434) bg_active_tab_pane_cp2_srt

0xb498,	// (0x000360b4) tabs_3_active_pane_srt_g1

0xb4a0,	// (0x000360bc) tabs_3_active_pane_srt_t1_ParamLimits

0xb4a0,	// (0x000360bc) tabs_3_active_pane_srt_t1

0x9672,	// (0x0003428e) bg_active_tab_pane_g1_cp2_srt

0x910c,	// (0x00033d28) bg_active_tab_pane_g2_cp2_srt

0x967b,	// (0x00034297) bg_active_tab_pane_g3_cp2_srt

0x65ac,	// (0x000311c8) tabs_4_active_pane_srt_ParamLimits

0x65ac,	// (0x000311c8) tabs_4_active_pane_srt

0x65be,	// (0x000311da) tabs_4_passive_pane_cp2_srt_ParamLimits

0x65be,	// (0x000311da) tabs_4_passive_pane_cp2_srt

0x5aee,	// (0x0003070a) aid_size_cell_toolbar

0x8a1c,	// (0x00033638) main_idle_act_pane_ParamLimits

0x5cad,	// (0x000308c9) popup_large_graphic_colour_window_ParamLimits

0x6014,	// (0x00030c30) popup_toolbar_window_ParamLimits

0x6014,	// (0x00030c30) popup_toolbar_window

0xb2aa,	// (0x00035ec6) list_single_graphic_2heading_pane_ParamLimits

0xb2aa,	// (0x00035ec6) list_single_graphic_2heading_pane

0x8bd8,	// (0x000337f4) aid_size_cell_apps_grid_lsc_pane

0x8bea,	// (0x00033806) aid_size_cell_apps_grid_prt_pane

0x9808,	// (0x00034424) bg_wml_button_pane_cp1_ParamLimits

0x9808,	// (0x00034424) bg_wml_button_pane_cp1

0x9fbc,	// (0x00034bd8) form_midp_field_text_pane_t1_ParamLimits

0x9d86,	// (0x000349a2) input_focus_pane_cp050_ParamLimits

0x9ff3,	// (0x00034c0f) list_midp_form_text_pane_ParamLimits

0x9f99,	// (0x00034bb5) input_focus_pane_cp051_ParamLimits

0x9fad,	// (0x00034bc9) list_midp_choice_pane_ParamLimits

0x9e3f,	// (0x00034a5b) list_single_2graphic_pane_cp3_ParamLimits

0x9e3f,	// (0x00034a5b) list_single_2graphic_pane_cp3

0x9e63,	// (0x00034a7f) list_single_midp_graphic_pane_ParamLimits

0x9e63,	// (0x00034a7f) list_single_midp_graphic_pane

0x487a,	// (0x0002f496) list_single_graphic_2heading_pane_g1_ParamLimits

0x487a,	// (0x0002f496) list_single_graphic_2heading_pane_g1

0x4886,	// (0x0002f4a2) list_single_graphic_2heading_pane_g4_ParamLimits

0x4886,	// (0x0002f4a2) list_single_graphic_2heading_pane_g4

0x4892,	// (0x0002f4ae) list_single_graphic_2heading_pane_g5_ParamLimits

0x4892,	// (0x0002f4ae) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0003a3cc) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0003a3cc) list_single_graphic_2heading_pane_g

0x489e,	// (0x0002f4ba) list_single_graphic_2heading_pane_t1_ParamLimits

0x489e,	// (0x0002f4ba) list_single_graphic_2heading_pane_t1

0x48b2,	// (0x0002f4ce) list_single_graphic_2heading_pane_t2_ParamLimits

0x48b2,	// (0x0002f4ce) list_single_graphic_2heading_pane_t2

0x48cc,	// (0x0002f4e8) list_single_graphic_2heading_pane_t3_ParamLimits

0x48cc,	// (0x0002f4e8) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003a3d3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003a3d3) list_single_graphic_2heading_pane_t

0x9c50,	// (0x0003486c) bg_popup_sub_pane_cp2

0x9c7a,	// (0x00034896) grid_toobar_pane

0x60c1,	// (0x00030cdd) cell_toolbar_pane_ParamLimits

0x60c1,	// (0x00030cdd) cell_toolbar_pane

0x9cb6,	// (0x000348d2) cell_toolbar_pane_g1_ParamLimits

0x9cb6,	// (0x000348d2) cell_toolbar_pane_g1

0x9cca,	// (0x000348e6) cell_toolbar_pane_g2_ParamLimits

0x9cca,	// (0x000348e6) cell_toolbar_pane_g2

0x0001,

0xf7c5,	// (0x0003a3e1) cell_toolbar_pane_g_ParamLimits

0xf7c5,	// (0x0003a3e1) cell_toolbar_pane_g

0x9cec,	// (0x00034908) grid_highlight_pane_cp2_ParamLimits

0x9cec,	// (0x00034908) grid_highlight_pane_cp2

0x9d06,	// (0x00034922) toolbar_button_pane

0x9d12,	// (0x0003492e) toolbar_button_pane_g1

0x9d1a,	// (0x00034936) toolbar_button_pane_g2

0x9d22,	// (0x0003493e) toolbar_button_pane_g3

0x9d2a,	// (0x00034946) toolbar_button_pane_g4

0x9d32,	// (0x0003494e) toolbar_button_pane_g5

0x9d3a,	// (0x00034956) toolbar_button_pane_g6

0x9d42,	// (0x0003495e) toolbar_button_pane_g7

0x9d4a,	// (0x00034966) toolbar_button_pane_g8

0x9d52,	// (0x0003496e) toolbar_button_pane_g9

0x0009,

0xf7ca,	// (0x0003a3e6) toolbar_button_pane_g

0x6133,	// (0x00030d4f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x6133,	// (0x00030d4f) list_single_2graphic_pane_g1_cp3

0x613f,	// (0x00030d5b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x613f,	// (0x00030d5b) list_single_2graphic_pane_g2_cp3

0x6150,	// (0x00030d6c) list_single_2graphic_pane_g3_cp3

0x6158,	// (0x00030d74) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6158,	// (0x00030d74) list_single_2graphic_pane_g4_cp3

0x6164,	// (0x00030d80) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6164,	// (0x00030d80) list_single_2graphic_pane_t1_cp3

0x61b4,	// (0x00030dd0) list_single_midp_graphic_pane_g2_ParamLimits

0x61b4,	// (0x00030dd0) list_single_midp_graphic_pane_g2

0x5af6,	// (0x00030712) aid_zoom_text_primary

0x485e,	// (0x0002f47a) aid_zoom_text_secondary

0x972c,	// (0x00034348) status_small_pane_g7_ParamLimits

0x972c,	// (0x00034348) status_small_pane_g7

0x974f,	// (0x0003436b) status_small_pane_t1_ParamLimits

0x774f,	// (0x0003236b) title_pane_g2

0x0003,

0xf54e,	// (0x0003a16a) title_pane_g

0x8447,	// (0x00033063) aid_size_cell_colour_1_pane_ParamLimits

0x8447,	// (0x00033063) aid_size_cell_colour_1_pane

0x845b,	// (0x00033077) aid_size_cell_colour_2_pane_ParamLimits

0x845b,	// (0x00033077) aid_size_cell_colour_2_pane

0x846f,	// (0x0003308b) aid_size_cell_colour_3_pane_ParamLimits

0x846f,	// (0x0003308b) aid_size_cell_colour_3_pane

0x8483,	// (0x0003309f) aid_size_cell_colour_4_pane_ParamLimits

0x8483,	// (0x0003309f) aid_size_cell_colour_4_pane

0x54c4,	// (0x000300e0) title_pane_stacon_g1_ParamLimits

0x54c4,	// (0x000300e0) title_pane_stacon_g1

0xa3b1,	// (0x00034fcd) popup_note_wait_window_g3_ParamLimits

0xa3b1,	// (0x00034fcd) popup_note_wait_window_g3

0xa427,	// (0x00035043) popup_note_wait_window_t5_ParamLimits

0xa427,	// (0x00035043) popup_note_wait_window_t5

0x7738,	// (0x00032354) main_feb_china_hwr_fs_writing_pane

0x5b90,	// (0x000307ac) popup_feb_china_hwr_fs_window_ParamLimits

0x5b90,	// (0x000307ac) popup_feb_china_hwr_fs_window

0x624c,	// (0x00030e68) aid_size_cell_hwr_fs_ParamLimits

0x624c,	// (0x00030e68) aid_size_cell_hwr_fs

0x9d86,	// (0x000349a2) bg_popup_sub_pane_cp3_ParamLimits

0x9d86,	// (0x000349a2) bg_popup_sub_pane_cp3

0x6261,	// (0x00030e7d) grid_hwr_fs_pane_ParamLimits

0x6261,	// (0x00030e7d) grid_hwr_fs_pane

0x6279,	// (0x00030e95) linegrid_hwr_fs_pane_ParamLimits

0x6279,	// (0x00030e95) linegrid_hwr_fs_pane

0x6289,	// (0x00030ea5) cell_hwr_fs_pane_ParamLimits

0x6289,	// (0x00030ea5) cell_hwr_fs_pane

0x9d92,	// (0x000349ae) linegrid_hwr_fs_pane_g1_ParamLimits

0x9d92,	// (0x000349ae) linegrid_hwr_fs_pane_g1

0x9d9e,	// (0x000349ba) linegrid_hwr_fs_pane_g2_ParamLimits

0x9d9e,	// (0x000349ba) linegrid_hwr_fs_pane_g2

0x9db0,	// (0x000349cc) linegrid_hwr_fs_pane_g3_ParamLimits

0x9db0,	// (0x000349cc) linegrid_hwr_fs_pane_g3

0x62ab,	// (0x00030ec7) linegrid_hwr_fs_pane_g4_ParamLimits

0x62ab,	// (0x00030ec7) linegrid_hwr_fs_pane_g4

0x62c5,	// (0x00030ee1) linegrid_hwr_fs_pane_g5_ParamLimits

0x62c5,	// (0x00030ee1) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0003a411) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0003a411) linegrid_hwr_fs_pane_g

0x9dbc,	// (0x000349d8) cell_hwr_fs_pane_g1_ParamLimits

0x9dbc,	// (0x000349d8) cell_hwr_fs_pane_g1

0x9b87,	// (0x000347a3) cell_hwr_fs_pane_g2_ParamLimits

0x9b87,	// (0x000347a3) cell_hwr_fs_pane_g2

0x9dd2,	// (0x000349ee) cell_hwr_fs_pane_g3_ParamLimits

0x9dd2,	// (0x000349ee) cell_hwr_fs_pane_g3

0x9ddf,	// (0x000349fb) cell_hwr_fs_pane_g4_ParamLimits

0x9ddf,	// (0x000349fb) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0003a41c) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0003a41c) cell_hwr_fs_pane_g

0x62db,	// (0x00030ef7) cell_hwr_fs_pane_t1

0x7738,	// (0x00032354) grid_highlight_pane_cp6

0x7738,	// (0x00032354) main_idle_act2_pane

0x898f,	// (0x000335ab) aid_inside_area_popup_secondary

0xaa5e,	// (0x0003567a) aid_inside_area_window_primary_ParamLimits

0xaa5e,	// (0x0003567a) aid_inside_area_window_primary

0xb5ff,	// (0x0003621b) ai2_news_ticker_pane

0xb607,	// (0x00036223) aid_size_cell_ai1_link_ParamLimits

0xb607,	// (0x00036223) aid_size_cell_ai1_link

0xb621,	// (0x0003623d) popup_ai2_data_window_ParamLimits

0xb621,	// (0x0003623d) popup_ai2_data_window

0xb637,	// (0x00036253) popup_ai2_link_window_ParamLimits

0xb637,	// (0x00036253) popup_ai2_link_window

0x9d86,	// (0x000349a2) bg_popup_sub_pane_cp4_ParamLimits

0x9d86,	// (0x000349a2) bg_popup_sub_pane_cp4

0xb64b,	// (0x00036267) grid_ai2_link_pane_ParamLimits

0xb64b,	// (0x00036267) grid_ai2_link_pane

0xb662,	// (0x0003627e) popup_ai2_link_window_g1_ParamLimits

0xb662,	// (0x0003627e) popup_ai2_link_window_g1

0xb66e,	// (0x0003628a) popup_ai2_link_window_g2_ParamLimits

0xb66e,	// (0x0003628a) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0003a5ef) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0003a5ef) popup_ai2_link_window_g

0xb67d,	// (0x00036299) ai2_mp_button_pane

0xb685,	// (0x000362a1) ai2_mp_volume_pane

0x9f99,	// (0x00034bb5) bg_popup_sub_pane_cp5_ParamLimits

0x9f99,	// (0x00034bb5) bg_popup_sub_pane_cp5

0xb68d,	// (0x000362a9) heading_ai2_gene_pane_ParamLimits

0xb68d,	// (0x000362a9) heading_ai2_gene_pane

0xb699,	// (0x000362b5) list_ai2_gene_pane_ParamLimits

0xb699,	// (0x000362b5) list_ai2_gene_pane

0xb6e1,	// (0x000362fd) cell_ai2_link_pane_ParamLimits

0xb6e1,	// (0x000362fd) cell_ai2_link_pane

0xb6f7,	// (0x00036313) cell_ai2_link_pane_g1

0x7738,	// (0x00032354) grid_highlight_pane_cp7

0x6664,	// (0x00031280) ai2_mp_volume_pane_g1

0xb7c7,	// (0x000363e3) ai2_mp_volume_pane_g2

0xb73c,	// (0x00036358) list_ai2_gene_pane_t1

0xb7cf,	// (0x000363eb) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0003a608) ai2_mp_volume_pane_g

0x666c,	// (0x00031288) volume_small_pane_cp3

0xb7d7,	// (0x000363f3) aid_size_cell_ai2_button

0xb7df,	// (0x000363fb) grid_ai2_button_pane

0xb7e8,	// (0x00036404) cell_ai2_button_pane_ParamLimits

0xb7e8,	// (0x00036404) cell_ai2_button_pane

0x772e,	// (0x0003234a) cell_ai2_button_pane_g1

0x7738,	// (0x00032354) grid_highlight_pane_cp8

0xb787,	// (0x000363a3) ai2_gene_pane_t1_ParamLimits

0xb787,	// (0x000363a3) ai2_gene_pane_t1

0x5ae4,	// (0x00030700) aid_height_parent_landscape

0xb0e1,	// (0x00035cfd) aid_height_set_list

0xb0f2,	// (0x00035d0e) aid_size_parent

0xb425,	// (0x00036041) aid_size_cell_graphic_pane_ParamLimits

0xb6a9,	// (0x000362c5) popup_ai2_data_window_g1_ParamLimits

0xb6a9,	// (0x000362c5) popup_ai2_data_window_g1

0xb6b5,	// (0x000362d1) ai2_news_ticker_pane_g1

0xb6bd,	// (0x000362d9) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0003a5f4) ai2_news_ticker_pane_g

0xb6c5,	// (0x000362e1) ai2_news_ticker_pane_t1

0xb6d3,	// (0x000362ef) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0003a5f9) ai2_news_ticker_pane_t

0xb700,	// (0x0003631c) heading_ai2_gene_pane_g1

0xb708,	// (0x00036324) heading_ai2_gene_pane_t1_ParamLimits

0xb708,	// (0x00036324) heading_ai2_gene_pane_t1

0xb71d,	// (0x00036339) list_highlight_pane_cp6

0xb725,	// (0x00036341) ai2_gene_pane_ParamLimits

0xb725,	// (0x00036341) ai2_gene_pane

0xb74a,	// (0x00036366) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0003a5fe) list_ai2_gene_pane_t

0xb758,	// (0x00036374) list_highlight_pane_cp8_ParamLimits

0xb758,	// (0x00036374) list_highlight_pane_cp8

0xb769,	// (0x00036385) ai2_gene_pane_g1_ParamLimits

0xb769,	// (0x00036385) ai2_gene_pane_g1

0xb77b,	// (0x00036397) ai2_gene_pane_g2_ParamLimits

0xb77b,	// (0x00036397) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0003a603) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0003a603) ai2_gene_pane_g

0x87ce,	// (0x000333ea) scroll_pane_cp12

0x5aa3,	// (0x000306bf) control_pane_t3_ParamLimits

0x5aa3,	// (0x000306bf) control_pane_t3

0x9740,	// (0x0003435c) status_small_pane_g8_ParamLimits

0x9740,	// (0x0003435c) status_small_pane_g8

0x5c76,	// (0x00030892) popup_find_window_ParamLimits

0x5e8b,	// (0x00030aa7) popup_note_image_window_ParamLimits

0x60f1,	// (0x00030d0d) list_double2_graphic_pane_vc_g1_ParamLimits

0x60f1,	// (0x00030d0d) list_double2_graphic_pane_vc_g1

0x60fd,	// (0x00030d19) list_double2_graphic_pane_vc_g2_ParamLimits

0x60fd,	// (0x00030d19) list_double2_graphic_pane_vc_g2

0x6109,	// (0x00030d25) list_double2_graphic_pane_vc_g3_ParamLimits

0x6109,	// (0x00030d25) list_double2_graphic_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a3da) list_double2_graphic_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3da) list_double2_graphic_pane_vc_g

0x6115,	// (0x00030d31) list_double2_graphic_pane_vc_t1_ParamLimits

0x6115,	// (0x00030d31) list_double2_graphic_pane_vc_t1

0x60fd,	// (0x00030d19) list_single_heading_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_single_heading_pane_vc_g1

0x6109,	// (0x00030d25) list_single_heading_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_single_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_single_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_single_heading_pane_vc_g

0x6180,	// (0x00030d9c) list_single_heading_pane_vc_t1_ParamLimits

0x6180,	// (0x00030d9c) list_single_heading_pane_vc_t1

0x6198,	// (0x00030db4) list_single_heading_pane_vc_t2_ParamLimits

0x6198,	// (0x00030db4) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0003a400) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0003a400) list_single_heading_pane_vc_t

0x61d6,	// (0x00030df2) list_setting_number_pane_vc_g1_ParamLimits

0x61d6,	// (0x00030df2) list_setting_number_pane_vc_g1

0x61e2,	// (0x00030dfe) list_setting_number_pane_vc_g2_ParamLimits

0x61e2,	// (0x00030dfe) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a405) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a405) list_setting_number_pane_vc_g

0x61ee,	// (0x00030e0a) list_setting_number_pane_vc_t1_ParamLimits

0x61ee,	// (0x00030e0a) list_setting_number_pane_vc_t1

0x6202,	// (0x00030e1e) list_setting_number_pane_vc_t2_ParamLimits

0x6202,	// (0x00030e1e) list_setting_number_pane_vc_t2

0x621e,	// (0x00030e3a) list_setting_number_pane_vc_t3_ParamLimits

0x621e,	// (0x00030e3a) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0003a40a) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0003a40a) list_setting_number_pane_vc_t

0x623c,	// (0x00030e58) set_value_pane_vc_ParamLimits

0x623c,	// (0x00030e58) set_value_pane_vc

0xb2aa,	// (0x00035ec6) list_double2_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double2_graphic_pane_vc

0xb2aa,	// (0x00035ec6) list_double2_large_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double2_large_graphic_pane_vc

0xb2aa,	// (0x00035ec6) list_double2_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double2_pane_vc

0xb2aa,	// (0x00035ec6) list_double_graphic_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_graphic_heading_pane_vc

0xb2aa,	// (0x00035ec6) list_double_graphic_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_graphic_pane_vc

0xb2aa,	// (0x00035ec6) list_double_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_heading_pane_vc

0xb2bc,	// (0x00035ed8) list_double_large_graphic_pane_vc_ParamLimits

0xb2bc,	// (0x00035ed8) list_double_large_graphic_pane_vc

0xb2aa,	// (0x00035ec6) list_double_number_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_number_pane_vc

0xb2aa,	// (0x00035ec6) list_double_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_pane_vc

0xb2aa,	// (0x00035ec6) list_double_time_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_double_time_pane_vc

0xb2aa,	// (0x00035ec6) list_setting_number_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_setting_number_pane_vc

0xb2aa,	// (0x00035ec6) list_setting_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_setting_pane_vc

0xb2aa,	// (0x00035ec6) list_single_graphic_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_single_graphic_heading_pane_vc

0xb2aa,	// (0x00035ec6) list_single_heading_pane_vc_ParamLimits

0xb2aa,	// (0x00035ec6) list_single_heading_pane_vc

0x79e0,	// (0x000325fc) list_single_number_heading_pane_vc_ParamLimits

0x79e0,	// (0x000325fc) list_single_number_heading_pane_vc

0x60f1,	// (0x00030d0d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x60f1,	// (0x00030d0d) list_double_graphic_heading_pane_vc_g1

0x60fd,	// (0x00030d19) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x60fd,	// (0x00030d19) list_double_graphic_heading_pane_vc_g2

0x6109,	// (0x00030d25) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6109,	// (0x00030d25) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7be,	// (0x0003a3da) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3da) list_double_graphic_heading_pane_vc_g

0x7a61,	// (0x0003267d) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x7a61,	// (0x0003267d) list_double_graphic_heading_pane_vc_t1

0x7a7d,	// (0x00032699) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x7a7d,	// (0x00032699) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0003a60f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0003a60f) list_double_graphic_heading_pane_vc_t

0x61d6,	// (0x00030df2) list_setting_pane_vc_g1_ParamLimits

0x61d6,	// (0x00030df2) list_setting_pane_vc_g1

0x61e2,	// (0x00030dfe) list_setting_pane_vc_g2_ParamLimits

0x61e2,	// (0x00030dfe) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0003a405) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0003a405) list_setting_pane_vc_g

0x7a9b,	// (0x000326b7) list_setting_pane_vc_t1_ParamLimits

0x7a9b,	// (0x000326b7) list_setting_pane_vc_t1

0x7ab7,	// (0x000326d3) list_setting_pane_vc_t2_ParamLimits

0x7ab7,	// (0x000326d3) list_setting_pane_vc_t2

0x0001,

0xfa21,	// (0x0003a63d) list_setting_pane_vc_t_ParamLimits

0xfa21,	// (0x0003a63d) list_setting_pane_vc_t

0x623c,	// (0x00030e58) set_value_pane_cp_vc_ParamLimits

0x623c,	// (0x00030e58) set_value_pane_cp_vc

0x60fd,	// (0x00030d19) list_single_number_heading_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_single_number_heading_pane_vc_g1

0x6109,	// (0x00030d25) list_single_number_heading_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_single_number_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_single_number_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_single_number_heading_pane_vc_g

0x6180,	// (0x00030d9c) list_single_number_heading_pane_vc_t1_ParamLimits

0x6180,	// (0x00030d9c) list_single_number_heading_pane_vc_t1

0x7ad3,	// (0x000326ef) list_single_number_heading_pane_vc_t2_ParamLimits

0x7ad3,	// (0x000326ef) list_single_number_heading_pane_vc_t2

0x7ae7,	// (0x00032703) list_single_number_heading_pane_vc_t3_ParamLimits

0x7ae7,	// (0x00032703) list_single_number_heading_pane_vc_t3

0x0002,

0xfa26,	// (0x0003a642) list_single_number_heading_pane_vc_t_ParamLimits

0xfa26,	// (0x0003a642) list_single_number_heading_pane_vc_t

0x60f1,	// (0x00030d0d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x60f1,	// (0x00030d0d) list_single_graphic_heading_pane_vc_g1

0x60fd,	// (0x00030d19) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x60fd,	// (0x00030d19) list_single_graphic_heading_pane_vc_g4

0x6109,	// (0x00030d25) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6109,	// (0x00030d25) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7be,	// (0x0003a3da) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7be,	// (0x0003a3da) list_single_graphic_heading_pane_vc_g

0x6180,	// (0x00030d9c) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x6180,	// (0x00030d9c) list_single_graphic_heading_pane_vc_t1

0x7af9,	// (0x00032715) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x7af9,	// (0x00032715) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa2d,	// (0x0003a649) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa2d,	// (0x0003a649) list_single_graphic_heading_pane_vc_t

0x60fd,	// (0x00030d19) list_double2_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_double2_pane_vc_g1

0x6109,	// (0x00030d25) list_double2_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_double2_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_double2_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_double2_pane_vc_g

0x7b0d,	// (0x00032729) list_double2_pane_vc_t1_ParamLimits

0x7b0d,	// (0x00032729) list_double2_pane_vc_t1

0x7b23,	// (0x0003273f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x7b23,	// (0x0003273f) list_double2_large_graphic_pane_vc_g1

0x60fd,	// (0x00030d19) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x60fd,	// (0x00030d19) list_double2_large_graphic_pane_vc_g2

0x6109,	// (0x00030d25) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6109,	// (0x00030d25) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa32,	// (0x0003a64e) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa32,	// (0x0003a64e) list_double2_large_graphic_pane_vc_g

0x7b2f,	// (0x0003274b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x7b2f,	// (0x0003274b) list_double2_large_graphic_pane_vc_t1

0x7b45,	// (0x00032761) list_double_time_pane_vc_g1_ParamLimits

0x7b45,	// (0x00032761) list_double_time_pane_vc_g1

0x7b51,	// (0x0003276d) list_double_time_pane_vc_g2_ParamLimits

0x7b51,	// (0x0003276d) list_double_time_pane_vc_g2

0x0001,

0xfa39,	// (0x0003a655) list_double_time_pane_vc_g_ParamLimits

0xfa39,	// (0x0003a655) list_double_time_pane_vc_g

0x7b5d,	// (0x00032779) list_double_time_pane_vc_t1_ParamLimits

0x7b5d,	// (0x00032779) list_double_time_pane_vc_t1

0x7b81,	// (0x0003279d) list_double_time_pane_vc_t2_ParamLimits

0x7b81,	// (0x0003279d) list_double_time_pane_vc_t2

0x7bd0,	// (0x000327ec) list_double_time_pane_vc_t3_ParamLimits

0x7bd0,	// (0x000327ec) list_double_time_pane_vc_t3

0x7be2,	// (0x000327fe) list_double_time_pane_vc_t4_ParamLimits

0x7be2,	// (0x000327fe) list_double_time_pane_vc_t4

0x0003,

0xfa3e,	// (0x0003a65a) list_double_time_pane_vc_t_ParamLimits

0xfa3e,	// (0x0003a65a) list_double_time_pane_vc_t

0x60fd,	// (0x00030d19) list_double_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_double_pane_vc_g1

0x6109,	// (0x00030d25) list_double_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_double_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_double_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_double_pane_vc_g

0x7bf6,	// (0x00032812) list_double_pane_vc_t1_ParamLimits

0x7bf6,	// (0x00032812) list_double_pane_vc_t1

0x7c0a,	// (0x00032826) list_double_pane_vc_t2_ParamLimits

0x7c0a,	// (0x00032826) list_double_pane_vc_t2

0x0001,

0xfa47,	// (0x0003a663) list_double_pane_vc_t_ParamLimits

0xfa47,	// (0x0003a663) list_double_pane_vc_t

0x60fd,	// (0x00030d19) list_double_number_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_double_number_pane_vc_g1

0x6109,	// (0x00030d25) list_double_number_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_double_number_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_double_number_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_double_number_pane_vc_g

0x7c22,	// (0x0003283e) list_double_number_pane_vc_t1_ParamLimits

0x7c22,	// (0x0003283e) list_double_number_pane_vc_t1

0x7c34,	// (0x00032850) list_double_number_pane_vc_t2_ParamLimits

0x7c34,	// (0x00032850) list_double_number_pane_vc_t2

0x7c48,	// (0x00032864) list_double_number_pane_vc_t3_ParamLimits

0x7c48,	// (0x00032864) list_double_number_pane_vc_t3

0x0002,

0xfa4c,	// (0x0003a668) list_double_number_pane_vc_t_ParamLimits

0xfa4c,	// (0x0003a668) list_double_number_pane_vc_t

0x7c60,	// (0x0003287c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x7c60,	// (0x0003287c) list_double_large_graphic_pane_vc_g1

0x7c82,	// (0x0003289e) list_double_large_graphic_pane_vc_g2_ParamLimits

0x7c82,	// (0x0003289e) list_double_large_graphic_pane_vc_g2

0x7c96,	// (0x000328b2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x7c96,	// (0x000328b2) list_double_large_graphic_pane_vc_g3

0x7ca5,	// (0x000328c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0x7ca5,	// (0x000328c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa53,	// (0x0003a66f) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa53,	// (0x0003a66f) list_double_large_graphic_pane_vc_g

0x7cb1,	// (0x000328cd) list_double_large_graphic_pane_vc_t1_ParamLimits

0x7cb1,	// (0x000328cd) list_double_large_graphic_pane_vc_t1

0x7ccd,	// (0x000328e9) list_double_large_graphic_pane_vc_t2_ParamLimits

0x7ccd,	// (0x000328e9) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa5c,	// (0x0003a678) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa5c,	// (0x0003a678) list_double_large_graphic_pane_vc_t

0x60fd,	// (0x00030d19) list_double_heading_pane_vc_g1_ParamLimits

0x60fd,	// (0x00030d19) list_double_heading_pane_vc_g1

0x6109,	// (0x00030d25) list_double_heading_pane_vc_g2_ParamLimits

0x6109,	// (0x00030d25) list_double_heading_pane_vc_g2

0x0001,

0xf7df,	// (0x0003a3fb) list_double_heading_pane_vc_g_ParamLimits

0xf7df,	// (0x0003a3fb) list_double_heading_pane_vc_g

0x7cef,	// (0x0003290b) list_double_heading_pane_vc_t1_ParamLimits

0x7cef,	// (0x0003290b) list_double_heading_pane_vc_t1

0x6180,	// (0x00030d9c) list_double_heading_pane_vc_t2_ParamLimits

0x6180,	// (0x00030d9c) list_double_heading_pane_vc_t2

0x0001,

0xfa61,	// (0x0003a67d) list_double_heading_pane_vc_t_ParamLimits

0xfa61,	// (0x0003a67d) list_double_heading_pane_vc_t

0x7d03,	// (0x0003291f) list_double_graphic_pane_vc_g1_ParamLimits

0x7d03,	// (0x0003291f) list_double_graphic_pane_vc_g1

0x7d0f,	// (0x0003292b) list_double_graphic_pane_vc_g2_ParamLimits

0x7d0f,	// (0x0003292b) list_double_graphic_pane_vc_g2

0x60fd,	// (0x00030d19) list_double_graphic_pane_vc_g3_ParamLimits

0x60fd,	// (0x00030d19) list_double_graphic_pane_vc_g3

0x0003,

0xfa66,	// (0x0003a682) list_double_graphic_pane_vc_g_ParamLimits

0xfa66,	// (0x0003a682) list_double_graphic_pane_vc_g

0x7d2c,	// (0x00032948) list_double_graphic_pane_vc_t1_ParamLimits

0x7d2c,	// (0x00032948) list_double_graphic_pane_vc_t1

0x7d56,	// (0x00032972) list_double_graphic_pane_vc_t2_ParamLimits

0x7d56,	// (0x00032972) list_double_graphic_pane_vc_t2

0x0001,

0xfa6f,	// (0x0003a68b) list_double_graphic_pane_vc_t_ParamLimits

0xfa6f,	// (0x0003a68b) list_double_graphic_pane_vc_t

0x48fc,	// (0x0002f518) aid_size_cell_fastswap

0x4904,	// (0x0002f520) aid_size_cell_touch_ParamLimits

0x4904,	// (0x0002f520) aid_size_cell_touch

0x4b69,	// (0x0002f785) popup_fast_swap_wide_window_ParamLimits

0x4b69,	// (0x0002f785) popup_fast_swap_wide_window

0x4c7d,	// (0x0002f899) touch_pane_ParamLimits

0x4c7d,	// (0x0002f899) touch_pane

0x8824,	// (0x00033440) button_value_adjust_pane_cp2

0x5226,	// (0x0002fe42) button_value_adjust_pane_cp4

0x5246,	// (0x0002fe62) form_field_data_pane_cp2

0x5265,	// (0x0002fe81) form_field_data_wide_pane_cp2

0x8ca1,	// (0x000338bd) bg_scroll_pane_ParamLimits

0x5626,	// (0x00030242) scroll_handle_pane_ParamLimits

0x563a,	// (0x00030256) scroll_sc2_down_pane_ParamLimits

0x563a,	// (0x00030256) scroll_sc2_down_pane

0x8cd2,	// (0x000338ee) scroll_sc2_up_pane_ParamLimits

0x8cd2,	// (0x000338ee) scroll_sc2_up_pane

0xbeb8,	// (0x00036ad4) grid_wheel_folder_pane_g1_ParamLimits

0xbeb8,	// (0x00036ad4) grid_wheel_folder_pane_g1

0x5889,	// (0x000304a5) clock_nsta_pane_cp2_ParamLimits

0x5889,	// (0x000304a5) clock_nsta_pane_cp2

0x8a1c,	// (0x00033638) listscroll_midp_pane_ParamLimits

0x94d2,	// (0x000340ee) midp_canvas_pane

0x97ba,	// (0x000343d6) nsta_clock_indic_pane

0x97ee,	// (0x0003440a) listscroll_form_pane_vc

0x97f6,	// (0x00034412) listscroll_set_pane_vc_ParamLimits

0x97f6,	// (0x00034412) listscroll_set_pane_vc

0x98fb,	// (0x00034517) clock_nsta_pane

0x9970,	// (0x0003458c) indicator_nsta_pane

0x9c50,	// (0x0003486c) bg_popup_sub_pane_cp2_ParamLimits

0x9c64,	// (0x00034880) find_pane_cp2_ParamLimits

0x9c64,	// (0x00034880) find_pane_cp2

0x9c7a,	// (0x00034896) grid_toobar_pane_ParamLimits

0x9d5a,	// (0x00034976) list_form_gen_pane_vc_ParamLimits

0x9d5a,	// (0x00034976) list_form_gen_pane_vc

0x9d70,	// (0x0003498c) scroll_pane_cp8_vc_ParamLimits

0x9d70,	// (0x0003498c) scroll_pane_cp8_vc

0x9dec,	// (0x00034a08) data_form_wide_pane_vc_ParamLimits

0x9dec,	// (0x00034a08) data_form_wide_pane_vc

0x9df8,	// (0x00034a14) form_field_data_wide_pane_vc_g1

0x9e00,	// (0x00034a1c) form_field_data_wide_pane_vc_t1_ParamLimits

0x9e00,	// (0x00034a1c) form_field_data_wide_pane_vc_t1

0x8838,	// (0x00033454) input_focus_pane_cp6_vc_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_cp6_vc

0xa12c,	// (0x00034d48) list_midp_pane_ParamLimits

0xa138,	// (0x00034d54) scroll_pane_cp16_ParamLimits

0xa138,	// (0x00034d54) scroll_pane_cp16

0xa186,	// (0x00034da2) button_value_adjust_pane_ParamLimits

0xa186,	// (0x00034da2) button_value_adjust_pane

0xb104,	// (0x00035d20) button_value_adjust_pane_cp6_ParamLimits

0xb104,	// (0x00035d20) button_value_adjust_pane_cp6

0xb22e,	// (0x00035e4a) settings_code_pane_cp_ParamLimits

0xb22e,	// (0x00035e4a) settings_code_pane_cp

0x772e,	// (0x0003234a) cell_touch_pane_g1

0x772e,	// (0x0003234a) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0003a31f) cell_touch_pane_g

0xb7fa,	// (0x00036416) cell_touch_pane_cp_ParamLimits

0xb7fa,	// (0x00036416) cell_touch_pane_cp

0xb80a,	// (0x00036426) cell_touch_pane_ParamLimits

0xb80a,	// (0x00036426) cell_touch_pane

0x772e,	// (0x0003234a) scroll_sc2_down_pane_g1

0x772e,	// (0x0003234a) scroll_sc2_up_pane_g1

0x7738,	// (0x00032354) bg_set_opt_pane_cp4_vc

0xb81c,	// (0x00036438) list_set_graphic_pane_vc_g1_ParamLimits

0xb81c,	// (0x00036438) list_set_graphic_pane_vc_g1

0xb828,	// (0x00036444) list_set_graphic_pane_vc_g2_ParamLimits

0xb828,	// (0x00036444) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0003a614) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0003a614) list_set_graphic_pane_vc_g

0xb834,	// (0x00036450) text_primary_small_cp13_vc_ParamLimits

0xb834,	// (0x00036450) text_primary_small_cp13_vc

0xb84c,	// (0x00036468) list_set_graphic_pane_vc_ParamLimits

0xb84c,	// (0x00036468) list_set_graphic_pane_vc

0x7738,	// (0x00032354) input_focus_pane_cp2_vc

0x772e,	// (0x0003234a) setting_code_pane_vc_g1

0x7863,	// (0x0003247f) setting_code_pane_vc_t1

0xb85f,	// (0x0003647b) set_text_pane_vc_t1_ParamLimits

0xb85f,	// (0x0003647b) set_text_pane_vc_t1

0x7738,	// (0x00032354) input_focus_pane_cp1_vc

0xb87b,	// (0x00036497) list_set_text_pane_vc

0x772e,	// (0x0003234a) setting_text_pane_vc_g1

0x7738,	// (0x00032354) bg_set_opt_pane_cp2_vc

0x785a,	// (0x00032476) setting_slider_graphic_pane_vc_g1

0xb885,	// (0x000364a1) setting_slider_graphic_pane_vc_t1

0xb895,	// (0x000364b1) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0003a619) setting_slider_graphic_pane_vc_t

0xb8a5,	// (0x000364c1) slider_set_pane_cp_vc

0xb8ad,	// (0x000364c9) slider_set_pane_vc_g1

0xb8b6,	// (0x000364d2) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0003a61e) slider_set_pane_vc_g

0x8893,	// (0x000334af) set_opt_bg_pane_g1_copy1

0x889b,	// (0x000334b7) set_opt_bg_pane_g2_copy1

0xb8e2,	// (0x000364fe) set_opt_bg_pane_g3_copy1

0x88ab,	// (0x000334c7) set_opt_bg_pane_g4_copy1

0x88b3,	// (0x000334cf) set_opt_bg_pane_g5_copy1

0x88bb,	// (0x000334d7) set_opt_bg_pane_g6_copy1

0xb8ec,	// (0x00036508) set_opt_bg_pane_g7_copy1

0xb8f4,	// (0x00036510) set_opt_bg_pane_g8_copy1

0xb8fe,	// (0x0003651a) set_opt_bg_pane_g9_copy1

0x7738,	// (0x00032354) bg_set_opt_pane_cp_vc

0xb908,	// (0x00036524) setting_slider_pane_vc_t1

0xb917,	// (0x00036533) setting_slider_pane_vc_t2

0xb927,	// (0x00036543) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0003a62d) setting_slider_pane_vc_t

0xb937,	// (0x00036553) slider_set_pane_vc

0x632a,	// (0x00030f46) volume_set_pane_vc_g1

0x6333,	// (0x00030f4f) volume_set_pane_vc_g2

0x633c,	// (0x00030f58) volume_set_pane_vc_g3

0x6345,	// (0x00030f61) volume_set_pane_vc_g4

0x634e,	// (0x00030f6a) volume_set_pane_vc_g5

0x6357,	// (0x00030f73) volume_set_pane_vc_g6

0x6360,	// (0x00030f7c) volume_set_pane_vc_g7

0x6369,	// (0x00030f85) volume_set_pane_vc_g8

0x6372,	// (0x00030f8e) volume_set_pane_vc_g9

0x637b,	// (0x00030f97) volume_set_pane_vc_g10

0x0009,

0xf8b6,	// (0x0003a4d2) volume_set_pane_vc_g

0xb93f,	// (0x0003655b) volume_set_pane_vc

0xb947,	// (0x00036563) button_value_adjust_pane_cp1_vc

0xb951,	// (0x0003656d) list_highlight_pane_cp2_vc

0xb95a,	// (0x00036576) list_set_pane_vc_ParamLimits

0xb95a,	// (0x00036576) list_set_pane_vc

0xb9b8,	// (0x000365d4) main_pane_set_vc_t1_ParamLimits

0xb9b8,	// (0x000365d4) main_pane_set_vc_t1

0xb9cd,	// (0x000365e9) main_pane_set_vc_t2_ParamLimits

0xb9cd,	// (0x000365e9) main_pane_set_vc_t2

0xb9df,	// (0x000365fb) main_pane_set_vc_t3_ParamLimits

0xb9df,	// (0x000365fb) main_pane_set_vc_t3

0xb9f3,	// (0x0003660f) main_pane_set_vc_t4_ParamLimits

0xb9f3,	// (0x0003660f) main_pane_set_vc_t4

0x0003,

0xfa18,	// (0x0003a634) main_pane_set_vc_t_ParamLimits

0xfa18,	// (0x0003a634) main_pane_set_vc_t

0xba07,	// (0x00036623) setting_code_pane_vc_ParamLimits

0xba07,	// (0x00036623) setting_code_pane_vc

0xba18,	// (0x00036634) setting_slider_graphic_pane_vc

0xba18,	// (0x00036634) setting_slider_pane_vc

0xba18,	// (0x00036634) setting_text_pane_vc

0xba18,	// (0x00036634) setting_volume_pane_vc

0xba22,	// (0x0003663e) scroll_pane_cp121_vc

0x8812,	// (0x0003342e) set_content_pane_vc

0xba2a,	// (0x00036646) button_value_adjust_pane_g1

0xba33,	// (0x0003664f) button_value_adjust_pane_g2

0x0001,

0xfa74,	// (0x0003a690) button_value_adjust_pane_g

0xba3c,	// (0x00036658) form_field_slider_wide_pane_vc_t1_ParamLimits

0xba3c,	// (0x00036658) form_field_slider_wide_pane_vc_t1

0xba50,	// (0x0003666c) form_field_slider_wide_pane_vc_t2_ParamLimits

0xba50,	// (0x0003666c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa79,	// (0x0003a695) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa79,	// (0x0003a695) form_field_slider_wide_pane_vc_t

0x8244,	// (0x00032e60) input_focus_pane_cp10_vc_ParamLimits

0x8244,	// (0x00032e60) input_focus_pane_cp10_vc

0xba7e,	// (0x0003669a) slider_cont_pane_cp1_vc_ParamLimits

0xba7e,	// (0x0003669a) slider_cont_pane_cp1_vc

0xba90,	// (0x000366ac) slider_form_pane_g1_cp2

0xb8b6,	// (0x000364d2) slider_form_pane_g2_cp2

0xbabd,	// (0x000366d9) form_field_slider_pane_vc_t3

0xbacb,	// (0x000366e7) form_field_slider_pane_vc_t4

0xbad9,	// (0x000366f5) slider_form_pane_vc_ParamLimits

0xbad9,	// (0x000366f5) slider_form_pane_vc

0xbae6,	// (0x00036702) form_field_slider_pane_vc_t1_ParamLimits

0xbae6,	// (0x00036702) form_field_slider_pane_vc_t1

0xba50,	// (0x0003666c) form_field_slider_pane_vc_t2_ParamLimits

0xba50,	// (0x0003666c) form_field_slider_pane_vc_t2

0x0001,

0xfa8b,	// (0x0003a6a7) form_field_slider_pane_vc_t_ParamLimits

0xfa8b,	// (0x0003a6a7) form_field_slider_pane_vc_t

0x8244,	// (0x00032e60) input_focus_pane_cp9_vc_ParamLimits

0x8244,	// (0x00032e60) input_focus_pane_cp9_vc

0xbb02,	// (0x0003671e) slider_cont_pane_vc_ParamLimits

0xbb02,	// (0x0003671e) slider_cont_pane_vc

0xbb16,	// (0x00036732) list_form_graphic_pane_cp_vc_ParamLimits

0xbb16,	// (0x00036732) list_form_graphic_pane_cp_vc

0x9df8,	// (0x00034a14) form_field_popup_wide_pane_vc_g1

0xbb2b,	// (0x00036747) form_field_popup_wide_pane_vc_t1_ParamLimits

0xbb2b,	// (0x00036747) form_field_popup_wide_pane_vc_t1

0x8838,	// (0x00033454) input_focus_pane_cp8_vc_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_cp8_vc

0xbb70,	// (0x0003678c) list_form_wide_pane_vc_ParamLimits

0xbb70,	// (0x0003678c) list_form_wide_pane_vc

0xbb7c,	// (0x00036798) list_form_graphic_pane_vc_g1

0xbb84,	// (0x000367a0) list_form_graphic_pane_vc_t1_ParamLimits

0xbb84,	// (0x000367a0) list_form_graphic_pane_vc_t1

0x7818,	// (0x00032434) list_highlight_pane_cp5_vc_ParamLimits

0x7818,	// (0x00032434) list_highlight_pane_cp5_vc

0xbba0,	// (0x000367bc) list_form_graphic_pane_vc_ParamLimits

0xbba0,	// (0x000367bc) list_form_graphic_pane_vc

0x9df8,	// (0x00034a14) form_field_popup_pane_vc_g1

0xbbb6,	// (0x000367d2) form_field_popup_pane_vc_t1_ParamLimits

0xbbb6,	// (0x000367d2) form_field_popup_pane_vc_t1

0x8838,	// (0x00033454) input_focus_pane_cp7_vc_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_cp7_vc

0xbbcd,	// (0x000367e9) list_form_pane_vc_ParamLimits

0xbbcd,	// (0x000367e9) list_form_pane_vc

0xbbd9,	// (0x000367f5) data_form_pane_vc_t1_ParamLimits

0xbbd9,	// (0x000367f5) data_form_pane_vc_t1

0x8893,	// (0x000334af) input_focus_pane_vc_g1

0x889b,	// (0x000334b7) input_focus_pane_vc_g2

0x88a3,	// (0x000334bf) input_focus_pane_vc_g3

0x88ab,	// (0x000334c7) input_focus_pane_vc_g4

0x88b3,	// (0x000334cf) input_focus_pane_vc_g5

0x88bb,	// (0x000334d7) input_focus_pane_vc_g6

0x88c3,	// (0x000334df) input_focus_pane_vc_g7

0x88cb,	// (0x000334e7) input_focus_pane_vc_g8

0x88d3,	// (0x000334ef) input_focus_pane_vc_g9

0x772e,	// (0x0003234a) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0003a2a8) input_focus_pane_vc_g

0x9dec,	// (0x00034a08) data_form_pane_vc_ParamLimits

0x9dec,	// (0x00034a08) data_form_pane_vc

0x9df8,	// (0x00034a14) form_field_data_pane_vc_g1

0xbbf4,	// (0x00036810) form_field_data_pane_vc_t1_ParamLimits

0xbbf4,	// (0x00036810) form_field_data_pane_vc_t1

0x8838,	// (0x00033454) input_focus_pane_vc_ParamLimits

0x8838,	// (0x00033454) input_focus_pane_vc

0xbc0e,	// (0x0003682a) button_value_adjust_pane_cp3_vc

0xbc16,	// (0x00036832) button_value_adjust_pane_cp5_vc

0xbc1e,	// (0x0003683a) form_field_data_pane_vc_ParamLimits

0xbc1e,	// (0x0003683a) form_field_data_pane_vc

0xbc35,	// (0x00036851) form_field_data_pane_vc_cp2

0xbc3d,	// (0x00036859) form_field_data_wide_pane_vc_ParamLimits

0xbc3d,	// (0x00036859) form_field_data_wide_pane_vc

0xbc53,	// (0x0003686f) form_field_data_wide_pane_vc_cp2

0xbc5b,	// (0x00036877) form_field_popup_pane_vc_ParamLimits

0xbc5b,	// (0x00036877) form_field_popup_pane_vc

0xbc72,	// (0x0003688e) form_field_popup_wide_pane_vc_ParamLimits

0xbc72,	// (0x0003688e) form_field_popup_wide_pane_vc

0xbc88,	// (0x000368a4) form_field_slider_pane_vc_ParamLimits

0xbc88,	// (0x000368a4) form_field_slider_pane_vc

0xbc9b,	// (0x000368b7) form_field_slider_wide_pane_vc_ParamLimits

0xbc9b,	// (0x000368b7) form_field_slider_wide_pane_vc

0xbcae,	// (0x000368ca) grid_touch_1_pane_ParamLimits

0xbcae,	// (0x000368ca) grid_touch_1_pane

0xbcba,	// (0x000368d6) grid_touch_2_pane_ParamLimits

0xbcba,	// (0x000368d6) grid_touch_2_pane

0x9785,	// (0x000343a1) touch_pane_g1_ParamLimits

0x9785,	// (0x000343a1) touch_pane_g1

0xbcd2,	// (0x000368ee) cell_app_pane_cp_wide_ParamLimits

0xbcd2,	// (0x000368ee) cell_app_pane_cp_wide

0xbce3,	// (0x000368ff) grid_popup_fast_wide_pane_ParamLimits

0xbce3,	// (0x000368ff) grid_popup_fast_wide_pane

0xbcf7,	// (0x00036913) scroll_pane_cp19_ParamLimits

0xbcf7,	// (0x00036913) scroll_pane_cp19

0x7738,	// (0x00032354) bg_popup_window_pane_cp20

0xbd0b,	// (0x00036927) listscroll_popup_fast_wide_pane

0x7818,	// (0x00032434) grid_indicator_nsta_pane

0xbd13,	// (0x0003692f) clock_nsta_pane_g1

0xbd1c,	// (0x00036938) clock_nsta_pane_t1

0xbd38,	// (0x00036954) cell_indicator_nsta_pane_ParamLimits

0xbd38,	// (0x00036954) cell_indicator_nsta_pane

0xbd69,	// (0x00036985) cell_indicator_nsta_pane_g1

0xbd77,	// (0x00036993) cell_indicator_nsta_pane_g2

0x0001,

0xfa9c,	// (0x0003a6b8) cell_indicator_nsta_pane_g

0xbd84,	// (0x000369a0) clock_nsta_pane_cp

0xbd8c,	// (0x000369a8) indicator_nsta_pane_cp

0xbd94,	// (0x000369b0) nsta_clock_indic_pane_g1

0x78e1,	// (0x000324fd) grid_indicator_pane

0x8dc7,	// (0x000339e3) scroll_pane_cp29

0x57d8,	// (0x000303f4) indicator_nsta_pane_cp2_ParamLimits

0x57d8,	// (0x000303f4) indicator_nsta_pane_cp2

0x7818,	// (0x00032434) main_apps_wheel_pane

0xa00d,	// (0x00034c29) form_midp_field_text_pane_ParamLimits

0xa158,	// (0x00034d74) scroll_bar_cp050_ParamLimits

0xbdf5,	// (0x00036a11) cell_indicator_pane_ParamLimits

0xbdf5,	// (0x00036a11) cell_indicator_pane

0xbe0c,	// (0x00036a28) cell_indicator_pane_g1

0xbe16,	// (0x00036a32) grid_wheel_folder_pane_ParamLimits

0xbe16,	// (0x00036a32) grid_wheel_folder_pane

0xbe2c,	// (0x00036a48) list_wheel_apps_pane_ParamLimits

0xbe2c,	// (0x00036a48) list_wheel_apps_pane

0xbe3d,	// (0x00036a59) main_apps_wheel_pane_g1_ParamLimits

0xbe3d,	// (0x00036a59) main_apps_wheel_pane_g1

0xbe51,	// (0x00036a6d) main_apps_wheel_pane_g2_ParamLimits

0xbe51,	// (0x00036a6d) main_apps_wheel_pane_g2

0x0001,

0xfab8,	// (0x0003a6d4) main_apps_wheel_pane_g_ParamLimits

0xfab8,	// (0x0003a6d4) main_apps_wheel_pane_g

0xbe69,	// (0x00036a85) main_apps_wheel_pane_t1_ParamLimits

0xbe69,	// (0x00036a85) main_apps_wheel_pane_t1

0xbe8c,	// (0x00036aa8) list_wheel_apps_pane_g1

0xbe94,	// (0x00036ab0) list_wheel_apps_pane_g2

0xbe9c,	// (0x00036ab8) list_wheel_apps_pane_g3

0xbea4,	// (0x00036ac0) list_wheel_apps_pane_g4

0xbeae,	// (0x00036aca) list_wheel_apps_pane_g5

0x0004,

0xfabd,	// (0x0003a6d9) list_wheel_apps_pane_g

0x934a,	// (0x00033f66) navi_icon_text_pane

0x982a,	// (0x00034446) aid_fill_nsta

0xbed1,	// (0x00036aed) navi_icon_text_pane_g1

0xbedd,	// (0x00036af9) navi_icon_text_pane_t1

0x91dd,	// (0x00033df9) list_set_graphic_pane_t1_ParamLimits

0x91dd,	// (0x00033df9) list_set_graphic_pane_t1

0xa8a7,	// (0x000354c3) popup_midp_note_alarm_window_t6_ParamLimits

0xa8a7,	// (0x000354c3) popup_midp_note_alarm_window_t6

0xa8b9,	// (0x000354d5) popup_midp_note_alarm_window_t7_ParamLimits

0xa8b9,	// (0x000354d5) popup_midp_note_alarm_window_t7

0xa8cb,	// (0x000354e7) popup_midp_note_alarm_window_t8_ParamLimits

0xa8cb,	// (0x000354e7) popup_midp_note_alarm_window_t8

0xa8dd,	// (0x000354f9) popup_midp_note_alarm_window_t9_ParamLimits

0xa8dd,	// (0x000354f9) popup_midp_note_alarm_window_t9

0xa8ef,	// (0x0003550b) popup_midp_note_alarm_window_t10_ParamLimits

0xa8ef,	// (0x0003550b) popup_midp_note_alarm_window_t10

0xa901,	// (0x0003551d) popup_midp_note_alarm_window_t11_ParamLimits

0xa901,	// (0x0003551d) popup_midp_note_alarm_window_t11

0xa913,	// (0x0003552f) scroll_pane_cp17_ParamLimits

0xa913,	// (0x0003552f) scroll_pane_cp17

0x632a,	// (0x00030f46) volume_small_pane_cp_g1

0x6675,	// (0x00031291) volume_small_pane_cp_g2

0x667e,	// (0x0003129a) volume_small_pane_cp_g3

0x6687,	// (0x000312a3) volume_small_pane_cp_g4

0x6690,	// (0x000312ac) volume_small_pane_cp_g5

0x6699,	// (0x000312b5) volume_small_pane_cp_g6

0x66a2,	// (0x000312be) volume_small_pane_cp_g7

0x66ab,	// (0x000312c7) volume_small_pane_cp_g8

0x66b4,	// (0x000312d0) volume_small_pane_cp_g9

0x66bd,	// (0x000312d9) volume_small_pane_cp_g10

0x959b,	// (0x000341b7) midp_ticker_pane_g1_ParamLimits

0x95a7,	// (0x000341c3) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0003a374) midp_ticker_pane_g_ParamLimits

0x95b3,	// (0x000341cf) midp_ticker_pane_t1_ParamLimits

0x9840,	// (0x0003445c) aid_fill_nsta_2

0xa144,	// (0x00034d60) list_form2_midp_pane

0xb279,	// (0x00035e95) midp_editing_number_pane_ParamLimits

0xb288,	// (0x00035ea4) midp_ticker_pane_ParamLimits

0xbeef,	// (0x00036b0b) form2_midp_field_pane

0xbf13,	// (0x00036b2f) scroll_pane_cp51

0xbf33,	// (0x00036b4f) form2_midp_button_pane_ParamLimits

0xbf33,	// (0x00036b4f) form2_midp_button_pane

0xbf51,	// (0x00036b6d) form2_midp_content_pane_ParamLimits

0xbf51,	// (0x00036b6d) form2_midp_content_pane

0xbf6b,	// (0x00036b87) form2_midp_field_choice_group_pane

0xbf73,	// (0x00036b8f) form2_midp_field_pane_g1

0xbf7b,	// (0x00036b97) form2_midp_field_pane_g2

0xbf83,	// (0x00036b9f) form2_midp_field_pane_g3

0xbf8b,	// (0x00036ba7) form2_midp_field_pane_g4

0x0003,

0xfae2,	// (0x0003a6fe) form2_midp_field_pane_g

0xbf93,	// (0x00036baf) form2_midp_gauge_slider_pane

0xbf9b,	// (0x00036bb7) form2_midp_gauge_wait_pane

0xbfa3,	// (0x00036bbf) form2_midp_image_pane_ParamLimits

0xbfa3,	// (0x00036bbf) form2_midp_image_pane

0xbfbe,	// (0x00036bda) form2_midp_label_pane_ParamLimits

0xbfbe,	// (0x00036bda) form2_midp_label_pane

0xbfd7,	// (0x00036bf3) form2_midp_label_pane_cp_ParamLimits

0xbfd7,	// (0x00036bf3) form2_midp_label_pane_cp

0xbff8,	// (0x00036c14) form2_midp_string_pane_ParamLimits

0xbff8,	// (0x00036c14) form2_midp_string_pane

0x7d80,	// (0x0003299c) form2_midp_text_pane_ParamLimits

0x7d80,	// (0x0003299c) form2_midp_text_pane

0xc00a,	// (0x00036c26) form2_midp_time_pane

0xc01a,	// (0x00036c36) input_focus_pane_cp51_ParamLimits

0xc01a,	// (0x00036c36) input_focus_pane_cp51

0xc032,	// (0x00036c4e) form2_midp_label_pane_t1_ParamLimits

0xc032,	// (0x00036c4e) form2_midp_label_pane_t1

0x7d9b,	// (0x000329b7) form2_mdip_text_pane_t1_ParamLimits

0x7d9b,	// (0x000329b7) form2_mdip_text_pane_t1

0x7db9,	// (0x000329d5) form2_midp_time_pane_t1

0xc07b,	// (0x00036c97) form2_midp_gauge_slider_pane_t1

0xc08d,	// (0x00036ca9) form2_midp_gauge_slider_pane_t2

0xc09f,	// (0x00036cbb) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaeb,	// (0x0003a707) form2_midp_gauge_slider_pane_t

0xc0b1,	// (0x00036ccd) form2_midp_slider_pane

0xc0bd,	// (0x00036cd9) form2_midp_gauge_wait_pane_t1

0xc0cb,	// (0x00036ce7) form2_midp_wait_pane_ParamLimits

0xc0cb,	// (0x00036ce7) form2_midp_wait_pane

0x9e3f,	// (0x00034a5b) list_single_2graphic_pane_cp4_ParamLimits

0x9e3f,	// (0x00034a5b) list_single_2graphic_pane_cp4

0xc0f6,	// (0x00036d12) list_single_midp_graphic_pane_cp_ParamLimits

0xc0f6,	// (0x00036d12) list_single_midp_graphic_pane_cp

0x7738,	// (0x00032354) list_highlight_pane_cp20

0xc125,	// (0x00036d41) list_single_2graphic_pane_g1_cp4

0xc12d,	// (0x00036d49) list_single_2graphic_pane_g2_cp4

0xc135,	// (0x00036d51) list_single_2graphic_pane_t1_cp4

0x7818,	// (0x00032434) list_highlight_pane_cp21

0xc144,	// (0x00036d60) list_single_midp_graphic_pane_g4_cp

0xc153,	// (0x00036d6f) list_single_midp_graphic_pane_t1_cp

0xc168,	// (0x00036d84) form2_mdip_string_pane_t1_ParamLimits

0xc168,	// (0x00036d84) form2_mdip_string_pane_t1

0x7738,	// (0x00032354) bg_wml_button_pane_cp2

0x772e,	// (0x0003234a) form2_midp_image_pane_g1

0x5010,	// (0x0002fc2c) list_double_large_graphic_pane_g5_ParamLimits

0x5010,	// (0x0002fc2c) list_double_large_graphic_pane_g5

0x8a1c,	// (0x00033638) midp_form_pane_ParamLimits

0x7818,	// (0x00032434) main_apps_wheel_pane_ParamLimits

0x5eb1,	// (0x00030acd) popup_preview_window_ParamLimits

0x5eb1,	// (0x00030acd) popup_preview_window

0x606c,	// (0x00030c88) popup_touch_info_window_ParamLimits

0x606c,	// (0x00030c88) popup_touch_info_window

0x608a,	// (0x00030ca6) popup_touch_menu_window_ParamLimits

0x608a,	// (0x00030ca6) popup_touch_menu_window

0x7724,	// (0x00032340) bg_popup_sub_pane_cp6

0xc261,	// (0x00036e7d) list_touch_menu_pane

0xc269,	// (0x00036e85) list_single_touch_menu_pane_ParamLimits

0xc269,	// (0x00036e85) list_single_touch_menu_pane

0xc27f,	// (0x00036e9b) list_single_touch_menu_pane_t1

0x7818,	// (0x00032434) bg_popup_sub_pane_cp7_ParamLimits

0x7818,	// (0x00032434) bg_popup_sub_pane_cp7

0xc28d,	// (0x00036ea9) heading_sub_pane

0xc295,	// (0x00036eb1) list_touch_info_pane_ParamLimits

0xc295,	// (0x00036eb1) list_touch_info_pane

0xc2a4,	// (0x00036ec0) list_single_touch_info_pane_ParamLimits

0xc2a4,	// (0x00036ec0) list_single_touch_info_pane

0xc2b6,	// (0x00036ed2) list_single_touch_info_pane_t1

0xc2c4,	// (0x00036ee0) list_single_touch_info_pane_t2

0x0001,

0xfaf9,	// (0x0003a715) list_single_touch_info_pane_t

0x94ca,	// (0x000340e6) bg_popup_heading_pane_cp

0xc2d2,	// (0x00036eee) heading_sub_pane_t1

0x9d86,	// (0x000349a2) bg_popup_preview_window_pane_cp_ParamLimits

0x9d86,	// (0x000349a2) bg_popup_preview_window_pane_cp

0xc28d,	// (0x00036ea9) heading_preview_pane

0xc295,	// (0x00036eb1) list_preview_pane_ParamLimits

0xc295,	// (0x00036eb1) list_preview_pane

0xc2e0,	// (0x00036efc) popup_preview_window_g1

0xc2a4,	// (0x00036ec0) list_single_preview_pane_ParamLimits

0xc2a4,	// (0x00036ec0) list_single_preview_pane

0xc2e8,	// (0x00036f04) list_single_preview_pane_g1

0xc2f0,	// (0x00036f0c) list_single_preview_pane_t1

0xc2b6,	// (0x00036ed2) list_single_preview_pane_t2

0x0001,

0xfafe,	// (0x0003a71a) list_single_preview_pane_t

0xc2fe,	// (0x00036f1a) bg_popup_heading_pane_cp2_ParamLimits

0xc2fe,	// (0x00036f1a) bg_popup_heading_pane_cp2

0xc314,	// (0x00036f30) heading_preview_pane_g1

0xc31c,	// (0x00036f38) heading_preview_pane_t1_ParamLimits

0xc31c,	// (0x00036f38) heading_preview_pane_t1

0x7904,	// (0x00032520) soft_indicator_pane_t1_ParamLimits

0x87ab,	// (0x000333c7) scroll_pane_ParamLimits

0x8cc0,	// (0x000338dc) scroll_sc2_left_pane

0x8cc9,	// (0x000338e5) scroll_sc2_right_pane

0x8ce8,	// (0x00033904) scroll_bg_pane_g1_ParamLimits

0x8cfd,	// (0x00033919) scroll_bg_pane_g2_ParamLimits

0x8d15,	// (0x00033931) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0003a2ff) scroll_bg_pane_g_ParamLimits

0x8ce8,	// (0x00033904) scroll_handle_pane_g1_ParamLimits

0x8d37,	// (0x00033953) scroll_handle_pane_g2_ParamLimits

0x8d15,	// (0x00033931) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0003a306) scroll_handle_pane_g_ParamLimits

0x5b32,	// (0x0003074e) popup_choice_list_window_ParamLimits

0x5b32,	// (0x0003074e) popup_choice_list_window

0x9c5c,	// (0x00034878) choice_list_pane

0x9cde,	// (0x000348fa) cell_toolbar_pane_t1

0x9d06,	// (0x00034922) toolbar_button_pane_ParamLimits

0xadd9,	// (0x000359f5) ai_gene_pane_1_t2_ParamLimits

0xadd9,	// (0x000359f5) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0003a52e) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0003a52e) ai_gene_pane_1_t

0xc339,	// (0x00036f55) scroll_sc2_left_pane_g1

0xc339,	// (0x00036f55) scroll_sc2_right_pane_g1

0x9808,	// (0x00034424) bg_popup_sub_pane_cp10

0xc343,	// (0x00036f5f) list_choice_list_pane

0xc35c,	// (0x00036f78) list_single_choice_list_pane_ParamLimits

0xc35c,	// (0x00036f78) list_single_choice_list_pane

0xc36f,	// (0x00036f8b) list_single_choice_list_pane_g1

0x89cc,	// (0x000335e8) list_single_choice_list_pane_t1_ParamLimits

0x89cc,	// (0x000335e8) list_single_choice_list_pane_t1

0xc377,	// (0x00036f93) choice_list_pane_g1

0xc37f,	// (0x00036f9b) choice_list_pane_t1

0x7724,	// (0x00032340) input_focus_pane_cp11

0x8ba3,	// (0x000337bf) title_pane_stacon_g2_ParamLimits

0x8ba3,	// (0x000337bf) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0003a2e5) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003a2e5) title_pane_stacon_g

0x94ca,	// (0x000340e6) cursor_press_pane

0x5bde,	// (0x000307fa) popup_fep_hwr_window_ParamLimits

0x5bde,	// (0x000307fa) popup_fep_hwr_window

0x5c58,	// (0x00030874) popup_fep_vkb_window_ParamLimits

0x5c58,	// (0x00030874) popup_fep_vkb_window

0xc38d,	// (0x00036fa9) cursor_press_pane_g1

0x0002,

0xfb27,	// (0x0003a743) fep_vkb_side_pane_g_ParamLimits

0x66ff,	// (0x0003131b) fep_hwr_candidate_pane_ParamLimits

0x66ff,	// (0x0003131b) fep_hwr_candidate_pane

0x6729,	// (0x00031345) fep_hwr_side_pane_ParamLimits

0x6729,	// (0x00031345) fep_hwr_side_pane

0x6749,	// (0x00031365) fep_hwr_top_pane_ParamLimits

0x6749,	// (0x00031365) fep_hwr_top_pane

0x6761,	// (0x0003137d) fep_hwr_write_pane_ParamLimits

0x6761,	// (0x0003137d) fep_hwr_write_pane

0xfb27,	// (0x0003a743) fep_vkb_side_pane_g

0xc395,	// (0x00036fb1) fep_hwr_top_pane_g1

0xc3a7,	// (0x00036fc3) fep_hwr_top_pane_g2

0x679b,	// (0x000313b7) fep_hwr_top_pane_g3

0x0002,

0xfb03,	// (0x0003a71f) fep_hwr_top_pane_g

0x67b0,	// (0x000313cc) fep_hwr_top_text_pane

0x8eb7,	// (0x00033ad3) fep_hwr_top_text_pane_g1

0xc3dd,	// (0x00036ff9) fep_hwr_top_text_pane_t1

0x68a6,	// (0x000314c2) fep_hwr_candidate_pane_g1

0xc630,	// (0x0003724c) fep_vkb_keypad_pane_g3_ParamLimits

0xc630,	// (0x0003724c) fep_vkb_keypad_pane_g3

0xc658,	// (0x00037274) fep_vkb_keypad_pane_g4_ParamLimits

0xc658,	// (0x00037274) fep_vkb_keypad_pane_g4

0xc6c7,	// (0x000372e3) fep_vkb_bottom_pane_g2_ParamLimits

0xc6c7,	// (0x000372e3) fep_vkb_bottom_pane_g2

0x0001,

0xfb2e,	// (0x0003a74a) fep_vkb_bottom_pane_g_ParamLimits

0xfb2e,	// (0x0003a74a) fep_vkb_bottom_pane_g

0xc339,	// (0x00036f55) cell_vkb_side_pane_g2

0x0001,

0xfb38,	// (0x0003a754) cell_vkb_side_pane_g

0xc752,	// (0x0003736e) cell_vkb_side_pane_t1

0xc760,	// (0x0003737c) cell_vkb_side_pane_t1_copy1

0xc339,	// (0x00036f55) bg_fep_vkb_candidate_pane_g2

0xc88c,	// (0x000374a8) cell_vkb_candidate_pane_ParamLimits

0xc3eb,	// (0x00037007) aid_size_cell_vkb_ParamLimits

0xc3eb,	// (0x00037007) aid_size_cell_vkb

0xc88c,	// (0x000374a8) cell_vkb_candidate_pane

0x68cd,	// (0x000314e9) bg_popup_fep_shadow_pane_g1

0xc479,	// (0x00037095) fep_vkb_bottom_pane_ParamLimits

0xc479,	// (0x00037095) fep_vkb_bottom_pane

0xc4af,	// (0x000370cb) fep_vkb_candidate_pane_ParamLimits

0xc4af,	// (0x000370cb) fep_vkb_candidate_pane

0xc4cb,	// (0x000370e7) fep_vkb_keypad_pane_ParamLimits

0xc4cb,	// (0x000370e7) fep_vkb_keypad_pane

0xc511,	// (0x0003712d) fep_vkb_side_pane_ParamLimits

0xc511,	// (0x0003712d) fep_vkb_side_pane

0xc54d,	// (0x00037169) fep_vkb_top_pane_ParamLimits

0xc54d,	// (0x00037169) fep_vkb_top_pane

0xc589,	// (0x000371a5) fep_vkb_top_pane_g1_ParamLimits

0xc589,	// (0x000371a5) fep_vkb_top_pane_g1

0xc598,	// (0x000371b4) fep_vkb_top_pane_g2_ParamLimits

0xc598,	// (0x000371b4) fep_vkb_top_pane_g2

0xc5a7,	// (0x000371c3) fep_vkb_top_pane_g3_ParamLimits

0xc5a7,	// (0x000371c3) fep_vkb_top_pane_g3

0x0003,

0xfb1e,	// (0x0003a73a) fep_vkb_top_pane_g_ParamLimits

0xfb1e,	// (0x0003a73a) fep_vkb_top_pane_g

0xc5c5,	// (0x000371e1) fep_vkb_top_text_pane_ParamLimits

0xc5c5,	// (0x000371e1) fep_vkb_top_text_pane

0xc5d6,	// (0x000371f2) fep_vkb_side_pane_g1_ParamLimits

0xc5d6,	// (0x000371f2) fep_vkb_side_pane_g1

0xc61f,	// (0x0003723b) grid_vkb_side_pane_ParamLimits

0xc61f,	// (0x0003723b) grid_vkb_side_pane

0x68d5,	// (0x000314f1) bg_popup_fep_shadow_pane_g2

0x68de,	// (0x000314fa) bg_popup_fep_shadow_pane_g3

0x68e6,	// (0x00031502) bg_popup_fep_shadow_pane_g4

0x68ef,	// (0x0003150b) bg_popup_fep_shadow_pane_g5

0x68f9,	// (0x00031515) bg_popup_fep_shadow_pane_g6

0x6901,	// (0x0003151d) bg_popup_fep_shadow_pane_g7

0x88ab,	// (0x000334c7) bg_popup_fep_shadow_pane_g8

0xc676,	// (0x00037292) grid_vkb_keypad_number_pane_ParamLimits

0xc676,	// (0x00037292) grid_vkb_keypad_number_pane

0xc686,	// (0x000372a2) grid_vkb_keypad_pane_ParamLimits

0xc686,	// (0x000372a2) grid_vkb_keypad_pane

0xc6ac,	// (0x000372c8) fep_vkb_bottom_pane_g1_ParamLimits

0xc6ac,	// (0x000372c8) fep_vkb_bottom_pane_g1

0xc6d5,	// (0x000372f1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc6d5,	// (0x000372f1) grid_vkb_keypad_bottom_left_pane

0xc6ea,	// (0x00037306) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc6ea,	// (0x00037306) grid_vkb_keypad_bottom_right_pane

0xc6ff,	// (0x0003731b) fep_vkb_top_text_pane_g1

0xc71a,	// (0x00037336) fep_vkb_top_text_pane_t1

0xc72f,	// (0x0003734b) cell_vkb_side_pane_ParamLimits

0xc72f,	// (0x0003734b) cell_vkb_side_pane

0xc339,	// (0x00036f55) cell_vkb_side_pane_g1

0xc76e,	// (0x0003738a) cell_vkb_keypad_pane_ParamLimits

0xc76e,	// (0x0003738a) cell_vkb_keypad_pane

0xc7e3,	// (0x000373ff) cell_vkb_keypad_pane_g1

0x0008,

0xfb4b,	// (0x0003a767) bg_popup_fep_shadow_pane_g

0x6913,	// (0x0003152f) cell_hwr_side_pane_g1

0x6913,	// (0x0003152f) cell_hwr_side_pane_g2

0xc7ed,	// (0x00037409) cell_vkb_keypad_pane_t1

0xc7fb,	// (0x00037417) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc7fb,	// (0x00037417) cell_vkb_keypad_bottom_left_pane

0xc818,	// (0x00037434) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc818,	// (0x00037434) cell_vkb_keypad_bottom_right_pane

0xc339,	// (0x00036f55) cell_vkb_keypad_bottom_left_pane_g1

0xc339,	// (0x00036f55) cell_vkb_keypad_bottom_right_pane_g1

0xc851,	// (0x0003746d) cell_vkb_keypad_number_pane_ParamLimits

0xc851,	// (0x0003746d) cell_vkb_keypad_number_pane

0xc870,	// (0x0003748c) cell_vkb_keypad_number_pane_g1

0xc87a,	// (0x00037496) cell_vkb_keypad_number_pane_g2

0xc883,	// (0x0003749f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb3d,	// (0x0003a759) cell_vkb_keypad_number_pane_g

0xc7ed,	// (0x00037409) cell_vkb_keypad_number_pane_t1

0xc8a7,	// (0x000374c3) fep_vkb_candidate_pane_g1

0x0001,

0xfb5e,	// (0x0003a77a) cell_hwr_side_pane_g

0xc8c0,	// (0x000374dc) cell_hwr_side_pane_t1

0x691d,	// (0x00031539) cell_hwr_side_pane_t1_copy1

0x692b,	// (0x00031547) cell_hwr_candidate_pane_g1

0x695a,	// (0x00031576) cell_hwr_candidate_pane_t1

0xc339,	// (0x00036f55) cell_vkb_candidate_pane_g2

0xc904,	// (0x00037520) cell_vkb_candidate_pane_t1

0x66c6,	// (0x000312e2) bg_popup_fep_shadow_pane_ParamLimits

0x66c6,	// (0x000312e2) bg_popup_fep_shadow_pane

0x677b,	// (0x00031397) bg_fep_hwr_top_pane_g4

0xc3b9,	// (0x00036fd5) bg_hwr_side_pane_g1_ParamLimits

0xc3b9,	// (0x00036fd5) bg_hwr_side_pane_g1

0x67ec,	// (0x00031408) cell_hwr_side_pane_ParamLimits

0x67ec,	// (0x00031408) cell_hwr_side_pane

0x6827,	// (0x00031443) fep_hwr_write_pane_g1_ParamLimits

0x6827,	// (0x00031443) fep_hwr_write_pane_g1

0x6834,	// (0x00031450) fep_hwr_write_pane_g2_ParamLimits

0x6834,	// (0x00031450) fep_hwr_write_pane_g2

0x6841,	// (0x0003145d) fep_hwr_write_pane_g3_ParamLimits

0x6841,	// (0x0003145d) fep_hwr_write_pane_g3

0x684f,	// (0x0003146b) fep_hwr_write_pane_g4_ParamLimits

0x684f,	// (0x0003146b) fep_hwr_write_pane_g4

0x0005,

0xfb0a,	// (0x0003a726) fep_hwr_write_pane_g_ParamLimits

0xfb0a,	// (0x0003a726) fep_hwr_write_pane_g

0x677b,	// (0x00031397) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x677b,	// (0x00031397) bg_fep_hwr_candidate_pane_g2

0x6864,	// (0x00031480) cell_hwr_candidate_pane_ParamLimits

0x6864,	// (0x00031480) cell_hwr_candidate_pane

0x68a6,	// (0x000314c2) fep_hwr_candidate_pane_g1_ParamLimits

0xc419,	// (0x00037035) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc419,	// (0x00037035) bg_popup_fep_shadow_pane_cp2

0xc5b7,	// (0x000371d3) fep_vkb_top_pane_g4_ParamLimits

0xc5b7,	// (0x000371d3) fep_vkb_top_pane_g4

0xc5fd,	// (0x00037219) fep_vkb_side_pane_g2_ParamLimits

0xc5fd,	// (0x00037219) fep_vkb_side_pane_g2

0x5153,	// (0x0002fd6f) list_setting_pane_t4_ParamLimits

0x5153,	// (0x0002fd6f) list_setting_pane_t4

0x51ed,	// (0x0002fe09) list_setting_number_pane_t5_ParamLimits

0x51ed,	// (0x0002fe09) list_setting_number_pane_t5

0x8efe,	// (0x00033b1a) list_double_heading_pane_cp2_ParamLimits

0x8efe,	// (0x00033b1a) list_double_heading_pane_cp2

0x8846,	// (0x00033462) list_double_heading_pane_g1_cp2_ParamLimits

0x8846,	// (0x00033462) list_double_heading_pane_g1_cp2

0x8852,	// (0x0003346e) list_double_heading_pane_g2_cp2_ParamLimits

0x8852,	// (0x0003346e) list_double_heading_pane_g2_cp2

0xc912,	// (0x0003752e) list_double_heading_pane_t1_cp2_ParamLimits

0xc912,	// (0x0003752e) list_double_heading_pane_t1_cp2

0xc928,	// (0x00037544) list_double_heading_pane_t2_cp2_ParamLimits

0xc928,	// (0x00037544) list_double_heading_pane_t2_cp2

0x770c,	// (0x00032328) aid_value_unit2

0x4bc3,	// (0x0002f7df) popup_preview_fixed_window

0x8252,	// (0x00032e6e) bg_popup_preview_window_pane_cp02

0xc93a,	// (0x00037556) list_preview_fixed_pane

0xc980,	// (0x0003759c) list_empty_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_empty_pane_fp

0xc980,	// (0x0003759c) list_single_cale_day_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_cale_day_pane_fp

0xc980,	// (0x0003759c) list_single_graphic_heading_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_graphic_heading_pane_fp

0xc980,	// (0x0003759c) list_single_graphic_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_graphic_pane_fp

0xc980,	// (0x0003759c) list_single_heading_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_heading_pane_fp

0xc980,	// (0x0003759c) list_single_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_pane_fp

0xc995,	// (0x000375b1) list_single_pane_fp_g1_ParamLimits

0xc995,	// (0x000375b1) list_single_pane_fp_g1

0x7dcc,	// (0x000329e8) list_single_pane_fp_g2_ParamLimits

0x7dcc,	// (0x000329e8) list_single_pane_fp_g2

0x7dd8,	// (0x000329f4) list_single_pane_fp_g3_ParamLimits

0x7dd8,	// (0x000329f4) list_single_pane_fp_g3

0xc9a1,	// (0x000375bd) list_single_pane_fp_g4_ParamLimits

0xc9a1,	// (0x000375bd) list_single_pane_fp_g4

0x0003,

0xfb71,	// (0x0003a78d) list_single_pane_fp_g_ParamLimits

0xfb71,	// (0x0003a78d) list_single_pane_fp_g

0x7dec,	// (0x00032a08) list_single_pane_fp_t1_ParamLimits

0x7dec,	// (0x00032a08) list_single_pane_fp_t1

0x7e03,	// (0x00032a1f) list_single_graphic_pane_fp_g1_ParamLimits

0x7e03,	// (0x00032a1f) list_single_graphic_pane_fp_g1

0xc995,	// (0x000375b1) list_single_graphic_pane_fp_g2_ParamLimits

0xc995,	// (0x000375b1) list_single_graphic_pane_fp_g2

0x7dcc,	// (0x000329e8) list_single_graphic_pane_fp_g3_ParamLimits

0x7dcc,	// (0x000329e8) list_single_graphic_pane_fp_g3

0x7dd8,	// (0x000329f4) list_single_graphic_pane_fp_g4_ParamLimits

0x7dd8,	// (0x000329f4) list_single_graphic_pane_fp_g4

0xc9a1,	// (0x000375bd) list_single_graphic_pane_fp_g5_ParamLimits

0xc9a1,	// (0x000375bd) list_single_graphic_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a796) list_single_graphic_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a796) list_single_graphic_pane_fp_g

0x7e0f,	// (0x00032a2b) list_single_graphic_pane_fp_t1_ParamLimits

0x7e0f,	// (0x00032a2b) list_single_graphic_pane_fp_t1

0x7e03,	// (0x00032a1f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x7e03,	// (0x00032a1f) list_single_graphic_heading_pane_fp_g1

0xc995,	// (0x000375b1) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc995,	// (0x000375b1) list_single_graphic_heading_pane_fp_g2

0x7dcc,	// (0x000329e8) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7dcc,	// (0x000329e8) list_single_graphic_heading_pane_fp_g3

0x7dd8,	// (0x000329f4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x7dd8,	// (0x000329f4) list_single_graphic_heading_pane_fp_g4

0xc9a1,	// (0x000375bd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x000375bd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a796) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a796) list_single_graphic_heading_pane_fp_g

0x7e25,	// (0x00032a41) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x7e25,	// (0x00032a41) list_single_graphic_heading_pane_fp_t1

0x7e3b,	// (0x00032a57) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x7e3b,	// (0x00032a57) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb85,	// (0x0003a7a1) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb85,	// (0x0003a7a1) list_single_graphic_heading_pane_fp_t

0x7e4d,	// (0x00032a69) list_single_cale_day_pane_fp_g1_ParamLimits

0x7e4d,	// (0x00032a69) list_single_cale_day_pane_fp_g1

0xc9ad,	// (0x000375c9) list_single_cale_day_pane_fp_g2_ParamLimits

0xc9ad,	// (0x000375c9) list_single_cale_day_pane_fp_g2

0x7e85,	// (0x00032aa1) list_single_cale_day_pane_fp_g3_ParamLimits

0x7e85,	// (0x00032aa1) list_single_cale_day_pane_fp_g3

0x7ead,	// (0x00032ac9) list_single_cale_day_pane_fp_g4_ParamLimits

0x7ead,	// (0x00032ac9) list_single_cale_day_pane_fp_g4

0x7ed1,	// (0x00032aed) list_single_cale_day_pane_fp_g5_ParamLimits

0x7ed1,	// (0x00032aed) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8a,	// (0x0003a7a6) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8a,	// (0x0003a7a6) list_single_cale_day_pane_fp_g

0x7ef5,	// (0x00032b11) list_single_cale_day_pane_fp_t1_ParamLimits

0x7ef5,	// (0x00032b11) list_single_cale_day_pane_fp_t1

0x7f1b,	// (0x00032b37) list_single_cale_day_pane_fp_t2_ParamLimits

0x7f1b,	// (0x00032b37) list_single_cale_day_pane_fp_t2

0x7f34,	// (0x00032b50) list_single_cale_day_pane_fp_t3_ParamLimits

0x7f34,	// (0x00032b50) list_single_cale_day_pane_fp_t3

0x0002,

0xfb95,	// (0x0003a7b1) list_single_cale_day_pane_fp_t_ParamLimits

0xfb95,	// (0x0003a7b1) list_single_cale_day_pane_fp_t

0xc995,	// (0x000375b1) list_empty_pane_fp_g1_ParamLimits

0xc995,	// (0x000375b1) list_empty_pane_fp_g1

0x7f4d,	// (0x00032b69) list_empty_pane_fp_t1

0x7f5b,	// (0x00032b77) list_empty_pane_fp_t2

0x0001,

0xfb9c,	// (0x0003a7b8) list_empty_pane_fp_t

0xc995,	// (0x000375b1) list_single_heading_pane_fp_g1_ParamLimits

0xc995,	// (0x000375b1) list_single_heading_pane_fp_g1

0x7dcc,	// (0x000329e8) list_single_heading_pane_fp_g2_ParamLimits

0x7dcc,	// (0x000329e8) list_single_heading_pane_fp_g2

0x7dd8,	// (0x000329f4) list_single_heading_pane_fp_g3_ParamLimits

0x7dd8,	// (0x000329f4) list_single_heading_pane_fp_g3

0x0002,

0xfb7c,	// (0x0003a798) list_single_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003a798) list_single_heading_pane_fp_g

0x7f69,	// (0x00032b85) list_single_heading_pane_fp_t1_ParamLimits

0x7f69,	// (0x00032b85) list_single_heading_pane_fp_t1

0x7f7b,	// (0x00032b97) list_single_heading_pane_fp_t2_ParamLimits

0x7f7b,	// (0x00032b97) list_single_heading_pane_fp_t2

0x0001,

0xfba1,	// (0x0003a7bd) list_single_heading_pane_fp_t_ParamLimits

0xfba1,	// (0x0003a7bd) list_single_heading_pane_fp_t

0x8a3a,	// (0x00033656) aid_size_cell_fast

0x81c2,	// (0x00032dde) soft_indicator_pane_cp1_t1

0x8a77,	// (0x00033693) cell_app_pane_cp2_ParamLimits

0x8a77,	// (0x00033693) cell_app_pane_cp2

0x66e8,	// (0x00031304) fep_hwr_candidate_drop_down_list_pane

0x68c0,	// (0x000314dc) fep_hwr_candidate_pane_g3_ParamLimits

0x68c0,	// (0x000314dc) fep_hwr_candidate_pane_g3

0x384a,	// (0x0002e466) fep_hwr_candidate_pane_g4_ParamLimits

0x384a,	// (0x0002e466) fep_hwr_candidate_pane_g4

0x0002,

0xfb17,	// (0x0003a733) fep_hwr_candidate_pane_g_ParamLimits

0xfb17,	// (0x0003a733) fep_hwr_candidate_pane_g

0xc49e,	// (0x000370ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc49e,	// (0x000370ba) fep_vkb_candidate_drop_down_list_pane

0xc8af,	// (0x000374cb) fep_vkb_candidate_pane_g3

0xc8b7,	// (0x000374d3) fep_vkb_candidate_pane_g4

0x0002,

0xfb44,	// (0x0003a760) fep_vkb_candidate_pane_g

0x692b,	// (0x00031547) cell_hwr_candidate_pane_g1_ParamLimits

0x6939,	// (0x00031555) cell_hwr_candidate_pane_g3_ParamLimits

0x6939,	// (0x00031555) cell_hwr_candidate_pane_g3

0xde4a,	// (0x00038a66) cell_hwr_candidate_pane_g4_ParamLimits

0xde4a,	// (0x00038a66) cell_hwr_candidate_pane_g4

0x0002,

0xfb63,	// (0x0003a77f) cell_hwr_candidate_pane_g_ParamLimits

0xfb63,	// (0x0003a77f) cell_hwr_candidate_pane_g

0xc8ce,	// (0x000374ea) cell_vkb_candidate_pane_g3_ParamLimits

0xc8ce,	// (0x000374ea) cell_vkb_candidate_pane_g3

0xc8e9,	// (0x00037505) cell_vkb_candidate_pane_g4_ParamLimits

0xc8e9,	// (0x00037505) cell_vkb_candidate_pane_g4

0xc9b9,	// (0x000375d5) cell_app_pane_cp2_g1_ParamLimits

0xc9b9,	// (0x000375d5) cell_app_pane_cp2_g1

0xc9d7,	// (0x000375f3) cell_app_pane_cp2_g2_ParamLimits

0xc9d7,	// (0x000375f3) cell_app_pane_cp2_g2

0x0001,

0xfba6,	// (0x0003a7c2) cell_app_pane_cp2_g_ParamLimits

0xfba6,	// (0x0003a7c2) cell_app_pane_cp2_g

0xc9e3,	// (0x000375ff) cell_app_pane_cp2_t1_ParamLimits

0xc9e3,	// (0x000375ff) cell_app_pane_cp2_t1

0x8838,	// (0x00033454) grid_highlight_pane_cp1_ParamLimits

0x8838,	// (0x00033454) grid_highlight_pane_cp1

0x6978,	// (0x00031594) cell_hwr_candidate_pane_cp1_ParamLimits

0x6978,	// (0x00031594) cell_hwr_candidate_pane_cp1

0x692b,	// (0x00031547) fep_hwr_candidate_drop_down_list_pane_g1

0x6997,	// (0x000315b3) fep_hwr_candidate_drop_down_list_pane_g2

0x69a4,	// (0x000315c0) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbab,	// (0x0003a7c7) fep_hwr_candidate_drop_down_list_pane_g

0x69b1,	// (0x000315cd) fep_hwr_candidate_drop_down_list_scroll_pane

0x69ba,	// (0x000315d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x69ba,	// (0x000315d6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x69c7,	// (0x000315e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x69c7,	// (0x000315e3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x69d4,	// (0x000315f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x69d4,	// (0x000315f0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69e1,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69e1,	// (0x000315fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69fc,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69fc,	// (0x00031618) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6a17,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6a17,	// (0x00031633) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6a32,	// (0x0003164e) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6a32,	// (0x0003164e) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6a4d,	// (0x00031669) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6a4d,	// (0x00031669) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb2,	// (0x0003a7ce) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb2,	// (0x0003a7ce) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc9f5,	// (0x00037611) cell_vkb_candidate_pane_cp1_ParamLimits

0xc9f5,	// (0x00037611) cell_vkb_candidate_pane_cp1

0xc5b7,	// (0x000371d3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc5b7,	// (0x000371d3) fep_vkb_candidate_drop_down_list_pane_g1

0xca15,	// (0x00037631) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xca15,	// (0x00037631) fep_vkb_candidate_drop_down_list_pane_g2

0xca22,	// (0x0003763e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xca22,	// (0x0003763e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc3,	// (0x0003a7df) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc3,	// (0x0003a7df) fep_vkb_candidate_drop_down_list_pane_g

0xca2f,	// (0x0003764b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xca2f,	// (0x0003764b) fep_vkb_candidate_drop_down_list_scroll_pane

0xca3c,	// (0x00037658) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xca3c,	// (0x00037658) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xca49,	// (0x00037665) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xca49,	// (0x00037665) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xca55,	// (0x00037671) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xca55,	// (0x00037671) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xca61,	// (0x0003767d) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xca61,	// (0x0003767d) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xca82,	// (0x0003769e) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xca82,	// (0x0003769e) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xcaa3,	// (0x000376bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xcaa3,	// (0x000376bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xcac4,	// (0x000376e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xcac4,	// (0x000376e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xcae5,	// (0x00037701) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xcae5,	// (0x00037701) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbca,	// (0x0003a7e6) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbca,	// (0x0003a7e6) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7742,	// (0x0003235e) title_pane_g1_ParamLimits

0x774f,	// (0x0003236b) title_pane_g2_ParamLimits

0xf54e,	// (0x0003a16a) title_pane_g_ParamLimits

0x8ea7,	// (0x00033ac3) aid_call2_pane

0x8eaf,	// (0x00033acb) aid_call_pane

0x8eb7,	// (0x00033ad3) popup_clock_analogue_window_g1

0x8eb7,	// (0x00033ad3) popup_clock_analogue_window_g2

0x564f,	// (0x0003026b) popup_clock_analogue_window_g3

0x5658,	// (0x00030274) popup_clock_analogue_window_g4

0x772e,	// (0x0003234a) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0003a314) popup_clock_analogue_window_g

0x5660,	// (0x0003027c) popup_clock_analogue_window_t1

0x566e,	// (0x0003028a) clock_digital_number_pane_ParamLimits

0x566e,	// (0x0003028a) clock_digital_number_pane

0x567a,	// (0x00030296) clock_digital_number_pane_cp02_ParamLimits

0x567a,	// (0x00030296) clock_digital_number_pane_cp02

0x5686,	// (0x000302a2) clock_digital_number_pane_cp03_ParamLimits

0x5686,	// (0x000302a2) clock_digital_number_pane_cp03

0x5692,	// (0x000302ae) clock_digital_number_pane_cp04_ParamLimits

0x5692,	// (0x000302ae) clock_digital_number_pane_cp04

0x569e,	// (0x000302ba) clock_digital_separator_pane_ParamLimits

0x569e,	// (0x000302ba) clock_digital_separator_pane

0x56aa,	// (0x000302c6) popup_clock_digital_window_t1_ParamLimits

0x56aa,	// (0x000302c6) popup_clock_digital_window_t1

0x772e,	// (0x0003234a) clock_digital_number_pane_g1

0x772e,	// (0x0003234a) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0003a31f) clock_digital_number_pane_g

0x772e,	// (0x0003234a) clock_digital_separator_pane_g1

0x772e,	// (0x0003234a) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0003a31f) clock_digital_separator_pane_g

0x982a,	// (0x00034446) aid_fill_nsta_ParamLimits

0x9970,	// (0x0003458c) indicator_nsta_pane_ParamLimits

0x9ae9,	// (0x00034705) popup_clock_analogue_window

0x9ae9,	// (0x00034705) popup_clock_digital_window

0x7818,	// (0x00032434) grid_indicator_nsta_pane_ParamLimits

0xbd2a,	// (0x00036946) clock_nsta_pane_t2

0x0001,

0xfa97,	// (0x0003a6b3) clock_nsta_pane_t

0x5613,	// (0x0003022f) aid_size_max_handle

0x561d,	// (0x00030239) aid_size_min_handle

0x94ca,	// (0x000340e6) editor_scroll_pane

0xcb00,	// (0x0003771c) ex_editor_pane

0x89a8,	// (0x000335c4) scroll_pane_cp13

0x87d7,	// (0x000333f3) scroll_pane_cp14

0x8ee6,	// (0x00033b02) scroll_pane_cp36

0x8f12,	// (0x00033b2e) list_single_graphic_hl_pane_cp2_ParamLimits

0x8f12,	// (0x00033b2e) list_single_graphic_hl_pane_cp2

0xb2da,	// (0x00035ef6) list_single_graphic_hl_pane_ParamLimits

0xb2da,	// (0x00035ef6) list_single_graphic_hl_pane

0x7f91,	// (0x00032bad) aid_size_min_hl_cp1

0xcb08,	// (0x00037724) list_highlight_pane_cp34_ParamLimits

0xcb08,	// (0x00037724) list_highlight_pane_cp34

0xcb19,	// (0x00037735) list_single_graphic_hl_pane_g1_ParamLimits

0xcb19,	// (0x00037735) list_single_graphic_hl_pane_g1

0x7f9a,	// (0x00032bb6) list_single_graphic_hl_pane_g2_ParamLimits

0x7f9a,	// (0x00032bb6) list_single_graphic_hl_pane_g2

0x7f9a,	// (0x00032bb6) list_single_graphic_hl_pane_g3_ParamLimits

0x7f9a,	// (0x00032bb6) list_single_graphic_hl_pane_g3

0x7fa6,	// (0x00032bc2) list_single_graphic_hl_pane_g4_ParamLimits

0x7fa6,	// (0x00032bc2) list_single_graphic_hl_pane_g4

0x7fb2,	// (0x00032bce) list_single_graphic_hl_pane_g5_ParamLimits

0x7fb2,	// (0x00032bce) list_single_graphic_hl_pane_g5

0x0004,

0xfbdb,	// (0x0003a7f7) list_single_graphic_hl_pane_g_ParamLimits

0xfbdb,	// (0x0003a7f7) list_single_graphic_hl_pane_g

0x7fc6,	// (0x00032be2) list_single_graphic_hl_pane_t1_ParamLimits

0x7fc6,	// (0x00032be2) list_single_graphic_hl_pane_t1

0xcb26,	// (0x00037742) aid_size_min_hl_cp2

0xcb2f,	// (0x0003774b) list_highlight_pane_cp34_cp2_ParamLimits

0xcb2f,	// (0x0003774b) list_highlight_pane_cp34_cp2

0xcb19,	// (0x00037735) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xcb19,	// (0x00037735) list_single_graphic_hl_pane_g1_cp2

0xcb3c,	// (0x00037758) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xcb3c,	// (0x00037758) list_single_graphic_hl_pane_g2_cp2

0xcb48,	// (0x00037764) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xcb48,	// (0x00037764) list_single_graphic_hl_pane_g3_cp2

0xbf45,	// (0x00036b61) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xbf45,	// (0x00036b61) list_single_graphic_hl_pane_g4_cp2

0xcb56,	// (0x00037772) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xcb56,	// (0x00037772) list_single_graphic_hl_pane_g5_cp2

0x59e8,	// (0x00030604) control_pane_g4_ParamLimits

0x59e8,	// (0x00030604) control_pane_g4

0x9808,	// (0x00034424) bg_popup_sub_pane_cp10_ParamLimits

0xc343,	// (0x00036f5f) list_choice_list_pane_ParamLimits

0xc352,	// (0x00036f6e) scroll_pane_cp23

0x8252,	// (0x00032e6e) bg_popup_preview_window_pane_cp02_ParamLimits

0xc93a,	// (0x00037556) list_preview_fixed_pane_ParamLimits

0xc950,	// (0x0003756c) list_preview_fixed_pane_cp_ParamLimits

0xc950,	// (0x0003756c) list_preview_fixed_pane_cp

0xc95c,	// (0x00037578) popup_preview_fixed_window_g1_ParamLimits

0xc95c,	// (0x00037578) popup_preview_fixed_window_g1

0xc968,	// (0x00037584) popup_preview_fixed_window_g2_ParamLimits

0xc968,	// (0x00037584) popup_preview_fixed_window_g2

0x0002,

0xfb6a,	// (0x0003a786) popup_preview_fixed_window_g_ParamLimits

0xfb6a,	// (0x0003a786) popup_preview_fixed_window_g

0x5587,	// (0x000301a3) aid_navi_side_left_pane_ParamLimits

0x559c,	// (0x000301b8) aid_navi_side_right_pane_ParamLimits

0x55b4,	// (0x000301d0) navi_icon_pane_stacon_ParamLimits

0x55c8,	// (0x000301e4) navi_navi_pane_stacon_ParamLimits

0x55b4,	// (0x000301d0) navi_text_pane_stacon_ParamLimits

0x4a84,	// (0x0002f6a0) main_text_info_pane

0xcb80,	// (0x0003779c) listscroll_text_info_pane

0xcb88,	// (0x000377a4) list_text_info_pane_ParamLimits

0xcb88,	// (0x000377a4) list_text_info_pane

0xcb97,	// (0x000377b3) scroll_pane_cp24_ParamLimits

0xcb97,	// (0x000377b3) scroll_pane_cp24

0xcbb5,	// (0x000377d1) list_text_info_pane_t1_ParamLimits

0xcbb5,	// (0x000377d1) list_text_info_pane_t1

0x5b50,	// (0x0003076c) popup_fast_swap2_window_ParamLimits

0x5b50,	// (0x0003076c) popup_fast_swap2_window

0xcbe6,	// (0x00037802) aid_size_cell_fast2

0x7724,	// (0x00032340) bg_popup_window_pane_cp17

0xa170,	// (0x00034d8c) heading_pane_cp2

0x84a1,	// (0x000330bd) listscroll_fast2_pane

0xcbf0,	// (0x0003780c) grid_fast2_pane

0xcbfa,	// (0x00037816) listscroll_fast2_pane_g1

0xcc02,	// (0x0003781e) listscroll_fast2_pane_g2

0x0001,

0xfbe6,	// (0x0003a802) listscroll_fast2_pane_g

0x89a8,	// (0x000335c4) scroll_pane_cp26

0xcc0c,	// (0x00037828) cell_fast2_pane_ParamLimits

0xcc0c,	// (0x00037828) cell_fast2_pane

0xcc21,	// (0x0003783d) cell_fast2_pane_g1

0xcc2a,	// (0x00037846) cell_fast2_pane_g2

0xcc33,	// (0x0003784f) cell_fast2_pane_g3

0x0002,

0xfbeb,	// (0x0003a807) cell_fast2_pane_g

0x8594,	// (0x000331b0) grid_highlight_pane_cp9

0x5b0e,	// (0x0003072a) main_eswt_pane_ParamLimits

0x5b0e,	// (0x0003072a) main_eswt_pane

0xcbac,	// (0x000377c8) list_single_text_info_pane

0xcc3b,	// (0x00037857) eswt_ctrl_button_pane

0xcc3b,	// (0x00037857) eswt_ctrl_canvas_pane

0xcc43,	// (0x0003785f) eswt_ctrl_combo_pane

0xcc3b,	// (0x00037857) eswt_ctrl_default_pane

0xcc3b,	// (0x00037857) eswt_ctrl_label_pane

0xcc4b,	// (0x00037867) eswt_ctrl_wait_pane

0xcc53,	// (0x0003786f) eswt_shell_pane

0x7724,	// (0x00032340) listscroll_eswt_app_pane

0xcc73,	// (0x0003788f) popup_eswt_tasktip_window_ParamLimits

0xcc73,	// (0x0003788f) popup_eswt_tasktip_window

0x9d86,	// (0x000349a2) bg_popup_window_pane_cp18

0xcc84,	// (0x000378a0) eswt_control_pane_g1_ParamLimits

0xcc84,	// (0x000378a0) eswt_control_pane_g1

0xcc91,	// (0x000378ad) eswt_control_pane_g2_ParamLimits

0xcc91,	// (0x000378ad) eswt_control_pane_g2

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_ParamLimits

0xcc9e,	// (0x000378ba) eswt_control_pane_g3

0xccab,	// (0x000378c7) eswt_control_pane_g4_ParamLimits

0xccab,	// (0x000378c7) eswt_control_pane_g4

0x0003,

0xfbf2,	// (0x0003a80e) eswt_control_pane_g_ParamLimits

0xfbf2,	// (0x0003a80e) eswt_control_pane_g

0x8838,	// (0x00033454) bg_button_pane_ParamLimits

0x8838,	// (0x00033454) bg_button_pane

0x85a9,	// (0x000331c5) common_borders_pane_copy2_ParamLimits

0x85a9,	// (0x000331c5) common_borders_pane_copy2

0xccb8,	// (0x000378d4) control_button_pane_g1_ParamLimits

0xccb8,	// (0x000378d4) control_button_pane_g1

0xccc4,	// (0x000378e0) control_button_pane_g2_ParamLimits

0xccc4,	// (0x000378e0) control_button_pane_g2

0xccd0,	// (0x000378ec) control_button_pane_g3_ParamLimits

0xccd0,	// (0x000378ec) control_button_pane_g3

0x0002,

0xfbfb,	// (0x0003a817) control_button_pane_g_ParamLimits

0xfbfb,	// (0x0003a817) control_button_pane_g

0xcce4,	// (0x00037900) control_button_pane_t1

0xccf2,	// (0x0003790e) control_button_pane_t2

0x0001,

0xfc02,	// (0x0003a81e) control_button_pane_t

0x9d12,	// (0x0003492e) bg_button_pane_g1

0x9d22,	// (0x0003493e) bg_button_pane_g2

0x9d1a,	// (0x00034936) bg_button_pane_g3

0x9d32,	// (0x0003494e) bg_button_pane_g4

0x9d2a,	// (0x00034946) bg_button_pane_g5

0x9d3a,	// (0x00034956) bg_button_pane_g6

0x9d42,	// (0x0003495e) bg_button_pane_g7

0x9d52,	// (0x0003496e) bg_button_pane_g8

0x9d4a,	// (0x00034966) bg_button_pane_g9

0x0008,

0xf866,	// (0x0003a482) bg_button_pane_g

0xc2fe,	// (0x00036f1a) common_borders_pane_ParamLimits

0xc2fe,	// (0x00036f1a) common_borders_pane

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy1_ParamLimits

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy1

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy1_ParamLimits

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy1

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy1_ParamLimits

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy1

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy1_ParamLimits

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy1

0xc339,	// (0x00036f55) bg_eswt_ctrl_canvas_pane_g1

0xc2fe,	// (0x00036f1a) common_borders_pane_cp2_ParamLimits

0xc2fe,	// (0x00036f1a) common_borders_pane_cp2

0xc2fe,	// (0x00036f1a) common_borders_pane_cp3_ParamLimits

0xc2fe,	// (0x00036f1a) common_borders_pane_cp3

0xcd00,	// (0x0003791c) separator_horizontal_pane

0xcd08,	// (0x00037924) separator_vertical_pane

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy2_ParamLimits

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy2

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy2_ParamLimits

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy2

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy2_ParamLimits

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy2

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy2_ParamLimits

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy2

0x7724,	// (0x00032340) common_borders_pane_cp4

0xcd11,	// (0x0003792d) separator_horizontal_pane_g1

0xcd1a,	// (0x00037936) separator_horizontal_pane_g2

0xcd23,	// (0x0003793f) separator_horizontal_pane_g3

0x0002,

0xfc07,	// (0x0003a823) separator_horizontal_pane_g

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy3_ParamLimits

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy3

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy3_ParamLimits

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy3

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy3_ParamLimits

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy3

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy3_ParamLimits

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy3

0x7724,	// (0x00032340) common_borders_pane_cp5

0xcd2c,	// (0x00037948) separator_vertical_pane_g1

0xcd35,	// (0x00037951) separator_vertical_pane_g2

0xcd3e,	// (0x0003795a) separator_vertical_pane_g3

0x0002,

0xfc0e,	// (0x0003a82a) separator_vertical_pane_g

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy4_ParamLimits

0xcc84,	// (0x000378a0) eswt_control_pane_g1_copy4

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy4_ParamLimits

0xcc91,	// (0x000378ad) eswt_control_pane_g2_copy4

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy4_ParamLimits

0xcc9e,	// (0x000378ba) eswt_control_pane_g3_copy4

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy4_ParamLimits

0xccab,	// (0x000378c7) eswt_control_pane_g4_copy4

0xcd47,	// (0x00037963) eswt_ctrl_combo_button_pane

0xcd4f,	// (0x0003796b) eswt_ctrl_input_pane

0xcd57,	// (0x00037973) popup_choice_list_window_cp70

0xcd5f,	// (0x0003797b) eswt_ctrl_input_pane_t1

0x7724,	// (0x00032340) input_focus_pane_cp70

0xc2fe,	// (0x00036f1a) bg_button_pane_cp70_ParamLimits

0xc2fe,	// (0x00036f1a) bg_button_pane_cp70

0xcd6d,	// (0x00037989) eswt_ctrl_combo_button_pane_g1

0xcd75,	// (0x00037991) wait_bar_pane_cp70

0x9d86,	// (0x000349a2) bg_popup_window_pane_cp70_ParamLimits

0x9d86,	// (0x000349a2) bg_popup_window_pane_cp70

0xcd7d,	// (0x00037999) popup_eswt_tasktip_window_t1

0xcd93,	// (0x000379af) wait_bar_pane_cp71_ParamLimits

0xcd93,	// (0x000379af) wait_bar_pane_cp71

0xcd9f,	// (0x000379bb) grid_eswt_app_pane

0x8cc0,	// (0x000338dc) scroll_pane_cp70

0xcda8,	// (0x000379c4) cell_eswt_app_pane_ParamLimits

0xcda8,	// (0x000379c4) cell_eswt_app_pane

0xcdd8,	// (0x000379f4) cell_eswt_app_pane_g1_ParamLimits

0xcdd8,	// (0x000379f4) cell_eswt_app_pane_g1

0xce07,	// (0x00037a23) cell_eswt_app_pane_g2_ParamLimits

0xce07,	// (0x00037a23) cell_eswt_app_pane_g2

0x0001,

0xfc15,	// (0x0003a831) cell_eswt_app_pane_g_ParamLimits

0xfc15,	// (0x0003a831) cell_eswt_app_pane_g

0xce30,	// (0x00037a4c) cell_eswt_app_pane_t1_ParamLimits

0xce30,	// (0x00037a4c) cell_eswt_app_pane_t1

0xce62,	// (0x00037a7e) grid_highlight_pane_cp70_ParamLimits

0xce62,	// (0x00037a7e) grid_highlight_pane_cp70

0x939f,	// (0x00033fbb) set_content_pane_g1

0x9769,	// (0x00034385) status_small_volume_pane

0x6a68,	// (0x00031684) status_small_volume_pane_g1

0x6a70,	// (0x0003168c) volume_small2_pane

0x6a79,	// (0x00031695) volume_small2_pane_g1

0x6a82,	// (0x0003169e) volume_small2_pane_g2

0x6a8b,	// (0x000316a7) volume_small2_pane_g3

0x6a94,	// (0x000316b0) volume_small2_pane_g4

0x6a9d,	// (0x000316b9) volume_small2_pane_g5

0x6aa6,	// (0x000316c2) volume_small2_pane_g6

0x6aaf,	// (0x000316cb) volume_small2_pane_g7

0x6ab8,	// (0x000316d4) volume_small2_pane_g8

0x6ac1,	// (0x000316dd) volume_small2_pane_g9

0x6aca,	// (0x000316e6) volume_small2_pane_g10

0x0009,

0xfc1a,	// (0x0003a836) volume_small2_pane_g

0xc6ff,	// (0x0003731b) fep_vkb_top_text_pane_g1_ParamLimits

0xc71a,	// (0x00037336) fep_vkb_top_text_pane_t1_ParamLimits

0xc974,	// (0x00037590) popup_preview_fixed_window_g3_ParamLimits

0xc974,	// (0x00037590) popup_preview_fixed_window_g3

0x5fff,	// (0x00030c1b) popup_toolbar_trans_pane

0xb0e1,	// (0x00035cfd) aid_height_set_list_ParamLimits

0xb0f2,	// (0x00035d0e) aid_size_parent_ParamLimits

0x9808,	// (0x00034424) list_highlight_pane_cp2_ParamLimits

0x939f,	// (0x00033fbb) set_content_pane_g1_ParamLimits

0xb2f6,	// (0x00035f12) list_single_image_pane_ParamLimits

0xb2f6,	// (0x00035f12) list_single_image_pane

0xce6e,	// (0x00037a8a) aid_size_cell_image_ParamLimits

0xce6e,	// (0x00037a8a) aid_size_cell_image

0xce7b,	// (0x00037a97) grid_single_image_pane_ParamLimits

0xce7b,	// (0x00037a97) grid_single_image_pane

0xaa9a,	// (0x000356b6) list_single_image_pane_g1_ParamLimits

0xaa9a,	// (0x000356b6) list_single_image_pane_g1

0xce87,	// (0x00037aa3) list_single_image_pane_g2_ParamLimits

0xce87,	// (0x00037aa3) list_single_image_pane_g2

0x0001,

0xfc2f,	// (0x0003a84b) list_single_image_pane_g_ParamLimits

0xfc2f,	// (0x0003a84b) list_single_image_pane_g

0xce9b,	// (0x00037ab7) list_single_image_pane_t1_ParamLimits

0xce9b,	// (0x00037ab7) list_single_image_pane_t1

0xceb1,	// (0x00037acd) cell_image_list_pane_ParamLimits

0xceb1,	// (0x00037acd) cell_image_list_pane

0xcec5,	// (0x00037ae1) cell_image_list_pane_g1

0xcece,	// (0x00037aea) cell_image_list_pane_g2

0x0001,

0xfc34,	// (0x0003a850) cell_image_list_pane_g

0xced7,	// (0x00037af3) aid_size_cell_tb_trans_pane

0x8838,	// (0x00033454) bg_tb_trans_pane

0xcee9,	// (0x00037b05) grid_tb_trans_pane

0x9d12,	// (0x0003492e) bg_tb_trans_pane_g1

0x9d22,	// (0x0003493e) bg_tb_trans_pane_g2

0x9d1a,	// (0x00034936) bg_tb_trans_pane_g3

0x9d32,	// (0x0003494e) bg_tb_trans_pane_g4

0x9d2a,	// (0x00034946) bg_tb_trans_pane_g5

0x9d52,	// (0x0003496e) bg_tb_trans_pane_g6

0x9d4a,	// (0x00034966) bg_tb_trans_pane_g7

0x9d3a,	// (0x00034956) bg_tb_trans_pane_g8

0x9d42,	// (0x0003495e) bg_tb_trans_pane_g9

0x0008,

0xfc39,	// (0x0003a855) bg_tb_trans_pane_g

0xcefd,	// (0x00037b19) cell_toolbar_trans_pane_ParamLimits

0xcefd,	// (0x00037b19) cell_toolbar_trans_pane

0xc339,	// (0x00036f55) cell_toolbar_trans_pane_g1

0xbef7,	// (0x00036b13) list_form2_midp_pane_t1

0xbf05,	// (0x00036b21) list_form2_midp_pane_t2

0x0001,

0xfadd,	// (0x0003a6f9) list_form2_midp_pane_t

0xbf13,	// (0x00036b2f) scroll_pane_cp51_ParamLimits

0xc0db,	// (0x00036cf7) form2_midp_wait_pane_g1

0xc0e4,	// (0x00036d00) form2_midp_wait_pane_g2

0xc0ed,	// (0x00036d09) form2_midp_wait_pane_g3

0x0002,

0xfaf2,	// (0x0003a70e) form2_midp_wait_pane_g

0x7818,	// (0x00032434) list_highlight_pane_cp21_ParamLimits

0xc144,	// (0x00036d60) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xc153,	// (0x00036d6f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x79e0,	// (0x000325fc) list_single_2graphic_im_pane_ParamLimits

0x79e0,	// (0x000325fc) list_single_2graphic_im_pane

0xcf23,	// (0x00037b3f) list_single_2graphic_im_pane_g1_ParamLimits

0xcf23,	// (0x00037b3f) list_single_2graphic_im_pane_g1

0xcf34,	// (0x00037b50) list_single_2graphic_im_pane_g2_ParamLimits

0xcf34,	// (0x00037b50) list_single_2graphic_im_pane_g2

0xcf40,	// (0x00037b5c) list_single_2graphic_im_pane_g3_ParamLimits

0xcf40,	// (0x00037b5c) list_single_2graphic_im_pane_g3

0x0003,

0xfc4c,	// (0x0003a868) list_single_2graphic_im_pane_g_ParamLimits

0xfc4c,	// (0x0003a868) list_single_2graphic_im_pane_g

0xcf60,	// (0x00037b7c) list_single_2graphic_im_pane_t1_ParamLimits

0xcf60,	// (0x00037b7c) list_single_2graphic_im_pane_t1

0xc980,	// (0x0003759c) list_single_graphic_2heading_pane_fp_ParamLimits

0xc980,	// (0x0003759c) list_single_graphic_2heading_pane_fp

0x7e03,	// (0x00032a1f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x7e03,	// (0x00032a1f) list_single_graphic_2heading_pane_fp_g1

0xc995,	// (0x000375b1) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc995,	// (0x000375b1) list_single_graphic_2heading_pane_fp_g2

0x7dcc,	// (0x000329e8) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7dcc,	// (0x000329e8) list_single_graphic_2heading_pane_fp_g3

0x7dd8,	// (0x000329f4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x7dd8,	// (0x000329f4) list_single_graphic_2heading_pane_fp_g4

0xc9a1,	// (0x000375bd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc9a1,	// (0x000375bd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7a,	// (0x0003a796) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003a796) list_single_graphic_2heading_pane_fp_g

0x7fdc,	// (0x00032bf8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x7fdc,	// (0x00032bf8) list_single_graphic_2heading_pane_fp_t1

0x7e3b,	// (0x00032a57) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x7e3b,	// (0x00032a57) list_single_graphic_2heading_pane_fp_t2

0x7ff2,	// (0x00032c0e) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7ff2,	// (0x00032c0e) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc55,	// (0x0003a871) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc55,	// (0x0003a871) list_single_graphic_2heading_pane_fp_t

0xc3c5,	// (0x00036fe1) fep_hwr_write_pane_g5_ParamLimits

0xc3c5,	// (0x00036fe1) fep_hwr_write_pane_g5

0xc3d1,	// (0x00036fed) fep_hwr_write_pane_g6_ParamLimits

0xc3d1,	// (0x00036fed) fep_hwr_write_pane_g6

0xcc53,	// (0x0003786f) eswt_shell_pane_ParamLimits

0x9d86,	// (0x000349a2) bg_popup_window_pane_cp18_ParamLimits

0xb03a,	// (0x00035c56) heading_pane_cp70

0xcd7d,	// (0x00037999) popup_eswt_tasktip_window_t1_ParamLimits

0x987f,	// (0x0003449b) aid_touch_tab_arrow_left

0x988e,	// (0x000344aa) aid_touch_tab_arrow_right

0x7760,	// (0x0003237c) title_pane_g3_ParamLimits

0x7760,	// (0x0003237c) title_pane_g3

0x87f7,	// (0x00033413) set_value_pane_g1

0x5fff,	// (0x00030c1b) popup_toolbar_trans_pane_ParamLimits

0xced7,	// (0x00037af3) aid_size_cell_tb_trans_pane_ParamLimits

0x8838,	// (0x00033454) bg_tb_trans_pane_ParamLimits

0xcee9,	// (0x00037b05) grid_tb_trans_pane_ParamLimits

0x8252,	// (0x00032e6e) cont_note_pane_ParamLimits

0x8252,	// (0x00032e6e) cont_note_pane

0x85a9,	// (0x000331c5) cont_snote2_single_text_pane_ParamLimits

0x85a9,	// (0x000331c5) cont_snote2_single_text_pane

0x85a9,	// (0x000331c5) cont_snote2_single_graphic_pane_ParamLimits

0x85a9,	// (0x000331c5) cont_snote2_single_graphic_pane

0xa38b,	// (0x00034fa7) cont_note_wait_pane_ParamLimits

0xa38b,	// (0x00034fa7) cont_note_wait_pane

0xa38b,	// (0x00034fa7) cont_note_image_pane_ParamLimits

0xa38b,	// (0x00034fa7) cont_note_image_pane

0xcf91,	// (0x00037bad) popup_note2_window_g1_ParamLimits

0xcf91,	// (0x00037bad) popup_note2_window_g1

0xcfc2,	// (0x00037bde) popup_note2_window_t1_ParamLimits

0xcfc2,	// (0x00037bde) popup_note2_window_t1

0xd007,	// (0x00037c23) popup_note2_window_t2_ParamLimits

0xd007,	// (0x00037c23) popup_note2_window_t2

0xd04c,	// (0x00037c68) popup_note2_window_t3_ParamLimits

0xd04c,	// (0x00037c68) popup_note2_window_t3

0xd091,	// (0x00037cad) popup_note2_window_t4_ParamLimits

0xd091,	// (0x00037cad) popup_note2_window_t4

0x82d6,	// (0x00032ef2) popup_note2_window_t5_ParamLimits

0x82d6,	// (0x00032ef2) popup_note2_window_t5

0x0004,

0xfc61,	// (0x0003a87d) popup_note2_window_t_ParamLimits

0xfc61,	// (0x0003a87d) popup_note2_window_t

0xd0c0,	// (0x00037cdc) popup_note2_image_window_g1_ParamLimits

0xd0c0,	// (0x00037cdc) popup_note2_image_window_g1

0xd0cc,	// (0x00037ce8) popup_note2_image_window_g2_ParamLimits

0xd0cc,	// (0x00037ce8) popup_note2_image_window_g2

0x0001,

0xfc6c,	// (0x0003a888) popup_note2_image_window_g_ParamLimits

0xfc6c,	// (0x0003a888) popup_note2_image_window_g

0xd0de,	// (0x00037cfa) popup_note2_image_window_t1_ParamLimits

0xd0de,	// (0x00037cfa) popup_note2_image_window_t1

0xd0f6,	// (0x00037d12) popup_note2_image_window_t2_ParamLimits

0xd0f6,	// (0x00037d12) popup_note2_image_window_t2

0xd10e,	// (0x00037d2a) popup_note2_image_window_t3_ParamLimits

0xd10e,	// (0x00037d2a) popup_note2_image_window_t3

0x0002,

0xfc71,	// (0x0003a88d) popup_note2_image_window_t_ParamLimits

0xfc71,	// (0x0003a88d) popup_note2_image_window_t

0xa399,	// (0x00034fb5) popup_note2_wait_window_g1_ParamLimits

0xa399,	// (0x00034fb5) popup_note2_wait_window_g1

0xd12a,	// (0x00037d46) popup_note2_wait_window_g2_ParamLimits

0xd12a,	// (0x00037d46) popup_note2_wait_window_g2

0xa3b1,	// (0x00034fcd) popup_note2_wait_window_g3_ParamLimits

0xa3b1,	// (0x00034fcd) popup_note2_wait_window_g3

0x0002,

0xfc78,	// (0x0003a894) popup_note2_wait_window_g_ParamLimits

0xfc78,	// (0x0003a894) popup_note2_wait_window_g

0xd136,	// (0x00037d52) popup_note2_wait_window_t1_ParamLimits

0xd136,	// (0x00037d52) popup_note2_wait_window_t1

0xd154,	// (0x00037d70) popup_note2_wait_window_t2_ParamLimits

0xd154,	// (0x00037d70) popup_note2_wait_window_t2

0xd172,	// (0x00037d8e) popup_note2_wait_window_t3_ParamLimits

0xd172,	// (0x00037d8e) popup_note2_wait_window_t3

0xd184,	// (0x00037da0) popup_note2_wait_window_t4_ParamLimits

0xd184,	// (0x00037da0) popup_note2_wait_window_t4

0x0003,

0xfc7f,	// (0x0003a89b) popup_note2_wait_window_t_ParamLimits

0xfc7f,	// (0x0003a89b) popup_note2_wait_window_t

0xd196,	// (0x00037db2) wait_bar2_pane_ParamLimits

0xd196,	// (0x00037db2) wait_bar2_pane

0xd1ae,	// (0x00037dca) popup_snote2_single_text_window_g1_ParamLimits

0xd1ae,	// (0x00037dca) popup_snote2_single_text_window_g1

0xd1d6,	// (0x00037df2) popup_snote2_single_text_window_t1_ParamLimits

0xd1d6,	// (0x00037df2) popup_snote2_single_text_window_t1

0xd222,	// (0x00037e3e) popup_snote2_single_text_window_t2_ParamLimits

0xd222,	// (0x00037e3e) popup_snote2_single_text_window_t2

0xd26e,	// (0x00037e8a) popup_snote2_single_text_window_t3_ParamLimits

0xd26e,	// (0x00037e8a) popup_snote2_single_text_window_t3

0xd2af,	// (0x00037ecb) popup_snote2_single_text_window_t4_ParamLimits

0xd2af,	// (0x00037ecb) popup_snote2_single_text_window_t4

0xd2e5,	// (0x00037f01) popup_snote2_single_text_window_t5_ParamLimits

0xd2e5,	// (0x00037f01) popup_snote2_single_text_window_t5

0x0004,

0xfc88,	// (0x0003a8a4) popup_snote2_single_text_window_t_ParamLimits

0xfc88,	// (0x0003a8a4) popup_snote2_single_text_window_t

0xd310,	// (0x00037f2c) popup_snote2_single_graphic_window_g1_ParamLimits

0xd310,	// (0x00037f2c) popup_snote2_single_graphic_window_g1

0xd338,	// (0x00037f54) popup_snote2_single_graphic_window_g2_ParamLimits

0xd338,	// (0x00037f54) popup_snote2_single_graphic_window_g2

0x0001,

0xfc93,	// (0x0003a8af) popup_snote2_single_graphic_window_g_ParamLimits

0xfc93,	// (0x0003a8af) popup_snote2_single_graphic_window_g

0xd360,	// (0x00037f7c) popup_snote2_single_graphic_window_t1_ParamLimits

0xd360,	// (0x00037f7c) popup_snote2_single_graphic_window_t1

0xd3ac,	// (0x00037fc8) popup_snote2_single_graphic_window_t2_ParamLimits

0xd3ac,	// (0x00037fc8) popup_snote2_single_graphic_window_t2

0xd26e,	// (0x00037e8a) popup_snote2_single_graphic_window_t3_ParamLimits

0xd26e,	// (0x00037e8a) popup_snote2_single_graphic_window_t3

0xd2af,	// (0x00037ecb) popup_snote2_single_graphic_window_t4_ParamLimits

0xd2af,	// (0x00037ecb) popup_snote2_single_graphic_window_t4

0xd2e5,	// (0x00037f01) popup_snote2_single_graphic_window_t5_ParamLimits

0xd2e5,	// (0x00037f01) popup_snote2_single_graphic_window_t5

0x0004,

0xfc98,	// (0x0003a8b4) popup_snote2_single_graphic_window_t_ParamLimits

0xfc98,	// (0x0003a8b4) popup_snote2_single_graphic_window_t

0xbdd4,	// (0x000369f0) clock_nsta_pane_cp2_t1

0xbdd4,	// (0x000369f0) clock_nsta_pane_cp2_t2

0x0001,

0xfab3,	// (0x0003a6cf) clock_nsta_pane_cp2_t

0x5305,	// (0x0002ff21) form_field_data_wide_pane_g1_ParamLimits

0x8846,	// (0x00033462) form_field_data_wide_pane_g2_ParamLimits

0x8846,	// (0x00033462) form_field_data_wide_pane_g2

0x8852,	// (0x0003346e) form_field_data_wide_pane_g3_ParamLimits

0x8852,	// (0x0003346e) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0003a297) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0003a297) form_field_data_wide_pane_g

0xbcc6,	// (0x000368e2) grid_touch_3_pane_ParamLimits

0xbcc6,	// (0x000368e2) grid_touch_3_pane

0xd3f8,	// (0x00038014) cell_touch_3_pane_ParamLimits

0xd3f8,	// (0x00038014) cell_touch_3_pane

0xc339,	// (0x00036f55) cell_touch_3_pane_g1

0xc339,	// (0x00036f55) cell_touch_3_pane_g2

0x0001,

0xfb38,	// (0x0003a754) cell_touch_3_pane_g

0x8308,	// (0x00032f24) cont_query_data_pane

0x8310,	// (0x00032f2c) cont_query_data_pane_cp1

0xd426,	// (0x00038042) button_value_adjust_pane_cp7

0xd42e,	// (0x0003804a) query_popup_pane_cp3

0x8fa7,	// (0x00033bc3) bg_popup_sub_pane_cp22_ParamLimits

0x56c9,	// (0x000302e5) navi_navi_volume_pane_cp2

0x56e4,	// (0x00030300) popup_side_volume_key_window_g2

0x56f3,	// (0x0003030f) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0003a32d) popup_side_volume_key_window_g

0x5710,	// (0x0003032c) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0003a334) popup_side_volume_key_window_t

0x925e,	// (0x00033e7a) popup_side_volume_key_window_ParamLimits

0x4f66,	// (0x0002fb82) list_double_graphic_pane_g4_ParamLimits

0x4f66,	// (0x0002fb82) list_double_graphic_pane_g4

0x7a1f,	// (0x0003263b) list_single_2heading_msg_pane_ParamLimits

0x7a1f,	// (0x0003263b) list_single_2heading_msg_pane

0x8012,	// (0x00032c2e) list_single_2heading_msg_pane_g1_ParamLimits

0x8012,	// (0x00032c2e) list_single_2heading_msg_pane_g1

0x4d95,	// (0x0002f9b1) list_single_2heading_msg_pane_g2_ParamLimits

0x4d95,	// (0x0002f9b1) list_single_2heading_msg_pane_g2

0x801e,	// (0x00032c3a) list_single_2heading_msg_pane_g3_ParamLimits

0x801e,	// (0x00032c3a) list_single_2heading_msg_pane_g3

0x802a,	// (0x00032c46) list_single_2heading_msg_pane_g4_ParamLimits

0x802a,	// (0x00032c46) list_single_2heading_msg_pane_g4

0x0003,

0xfca3,	// (0x0003a8bf) list_single_2heading_msg_pane_g_ParamLimits

0xfca3,	// (0x0003a8bf) list_single_2heading_msg_pane_g

0x8042,	// (0x00032c5e) list_single_2heading_msg_pane_t1_ParamLimits

0x8042,	// (0x00032c5e) list_single_2heading_msg_pane_t1

0x806a,	// (0x00032c86) list_single_2heading_msg_pane_t2_ParamLimits

0x806a,	// (0x00032c86) list_single_2heading_msg_pane_t2

0x809e,	// (0x00032cba) list_single_2heading_msg_pane_t3_ParamLimits

0x809e,	// (0x00032cba) list_single_2heading_msg_pane_t3

0x80d7,	// (0x00032cf3) list_single_2heading_msg_pane_t4_ParamLimits

0x80d7,	// (0x00032cf3) list_single_2heading_msg_pane_t4

0x0003,

0xfcac,	// (0x0003a8c8) list_single_2heading_msg_pane_t_ParamLimits

0xfcac,	// (0x0003a8c8) list_single_2heading_msg_pane_t

0x776c,	// (0x00032388) title_pane_g4_ParamLimits

0x776c,	// (0x00032388) title_pane_g4

0x54d8,	// (0x000300f4) title_pane_stacon_g3_ParamLimits

0x54d8,	// (0x000300f4) title_pane_stacon_g3

0xcf54,	// (0x00037b70) list_single_2graphic_im_pane_g4_ParamLimits

0xcf54,	// (0x00037b70) list_single_2graphic_im_pane_g4

0xadf6,	// (0x00035a12) popup_side_volume_key_window_cp

0xb613,	// (0x0003622f) main_idle_act2_pane_t1

0x612b,	// (0x00030d47) toolbar_button_pane_g10

0x87a1,	// (0x000333bd) popup_toolbar_window_cp1

0xbdc5,	// (0x000369e1) clock_nsta_pane_cp_t1

0xbdc5,	// (0x000369e1) clock_nsta_pane_cp_t2

0x0001,

0xfaae,	// (0x0003a6ca) clock_nsta_pane_cp_t

0x56c9,	// (0x000302e5) navi_navi_volume_pane_cp2_ParamLimits

0x56d8,	// (0x000302f4) popup_side_volume_key_window_g1_ParamLimits

0x56e4,	// (0x00030300) popup_side_volume_key_window_g2_ParamLimits

0x56f3,	// (0x0003030f) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0003a32d) popup_side_volume_key_window_g_ParamLimits

0x66d4,	// (0x000312f0) fep_hwr_aid_pane

0x677b,	// (0x00031397) bg_fep_hwr_top_pane_g4_ParamLimits

0xc395,	// (0x00036fb1) fep_hwr_top_pane_g1_ParamLimits

0xc3a7,	// (0x00036fc3) fep_hwr_top_pane_g2_ParamLimits

0x679b,	// (0x000313b7) fep_hwr_top_pane_g3_ParamLimits

0xfb03,	// (0x0003a71f) fep_hwr_top_pane_g_ParamLimits

0x67b0,	// (0x000313cc) fep_hwr_top_text_pane_ParamLimits

0xabb9,	// (0x000357d5) aid_touch_tab_arrow_arrow_2

0xabc2,	// (0x000357de) aid_touch_tab_arrow_left_2

0x66e8,	// (0x00031304) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x671f,	// (0x0003133b) fep_hwr_prediction_pane

0xc507,	// (0x00037123) fep_vkb_prediction_pane

0xc60b,	// (0x00037227) fep_vkb_side_pane_g3_ParamLimits

0xc60b,	// (0x00037227) fep_vkb_side_pane_g3

0x692b,	// (0x00031547) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6997,	// (0x000315b3) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x69a4,	// (0x000315c0) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbab,	// (0x0003a7c7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x6ad3,	// (0x000316ef) fep_hwr_prediction_pane_g1

0x6add,	// (0x000316f9) fep_hwr_prediction_pane_g2

0x6ae5,	// (0x00031701) fep_hwr_prediction_pane_g3

0x6aed,	// (0x00031709) fep_hwr_prediction_pane_g4

0x0003,

0xfcb5,	// (0x0003a8d1) fep_hwr_prediction_pane_g

0xd453,	// (0x0003806f) fep_vkb_prediction_pane_g1

0xd45d,	// (0x00038079) fep_vkb_prediction_pane_g2

0xd465,	// (0x00038081) fep_vkb_prediction_pane_g3

0xd46d,	// (0x00038089) fep_vkb_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0003a8da) fep_vkb_prediction_pane_g

0x6526,	// (0x00031142) slider_set_pane_g3

0x653a,	// (0x00031156) slider_set_pane_g4

0x6552,	// (0x0003116e) slider_set_pane_g5

0x6526,	// (0x00031142) slider_set_pane_g6

0x6568,	// (0x00031184) slider_set_pane_g7

0xb257,	// (0x00035e73) slider_form_pane_g3

0xb260,	// (0x00035e7c) slider_form_pane_g4

0xb268,	// (0x00035e84) slider_form_pane_g5

0xb257,	// (0x00035e73) slider_form_pane_g6

0xb270,	// (0x00035e8c) slider_form_pane_g7

0xb8be,	// (0x000364da) slider_set_pane_vc_g3

0xb8c7,	// (0x000364e3) slider_set_pane_vc_g4

0xb8d0,	// (0x000364ec) slider_set_pane_vc_g5

0xb8be,	// (0x000364da) slider_set_pane_vc_g6

0xb8d9,	// (0x000364f5) slider_set_pane_vc_g7

0xba99,	// (0x000366b5) slider_form_pane_vc_g1

0xbaa2,	// (0x000366be) slider_form_pane_vc_g2

0xbaab,	// (0x000366c7) slider_form_pane_vc_g3

0xba99,	// (0x000366b5) slider_form_pane_vc_g4

0xbab4,	// (0x000366d0) slider_form_pane_vc_g5

0x0004,

0xfa80,	// (0x0003a69c) slider_form_pane_vc_g

0x4a84,	// (0x0002f6a0) main_idle_act3_pane

0xd475,	// (0x00038091) ai3_links_pane

0xd47e,	// (0x0003809a) popup_ai3_data_window_ParamLimits

0xd47e,	// (0x0003809a) popup_ai3_data_window

0x7724,	// (0x00032340) grid_ai3_links_pane

0xd498,	// (0x000380b4) cell_ai3_links_pane_ParamLimits

0xd498,	// (0x000380b4) cell_ai3_links_pane

0xd4b0,	// (0x000380cc) bg_popup_sub_pane_cp11

0xd4bd,	// (0x000380d9) cell_ai3_links_pane_g1

0x7724,	// (0x00032340) bg_popup_sub_pane_cp12

0xd4e2,	// (0x000380fe) heading_ai3_data_pane

0xd4ea,	// (0x00038106) list_ai3_gene_pane

0xd4f6,	// (0x00038112) popup_ai3_data_window_g1

0xd4fe,	// (0x0003811a) heading_ai3_data_pane_g1

0xd506,	// (0x00038122) heading_ai3_data_pane_t1

0xd514,	// (0x00038130) list_double_ai3_gene_pane_ParamLimits

0xd514,	// (0x00038130) list_double_ai3_gene_pane

0xd521,	// (0x0003813d) list_single_ai3_gene_pane_ParamLimits

0xd521,	// (0x0003813d) list_single_ai3_gene_pane

0xc2fe,	// (0x00036f1a) list_highlight_pane_cp7_ParamLimits

0xc2fe,	// (0x00036f1a) list_highlight_pane_cp7

0xd52e,	// (0x0003814a) list_single_a13_gene_pane_t1_ParamLimits

0xd52e,	// (0x0003814a) list_single_a13_gene_pane_t1

0xd545,	// (0x00038161) list_single_ai3_gene_pane_g1

0xd54e,	// (0x0003816a) list_single_ai3_gene_pane_g2

0x0001,

0xfcc7,	// (0x0003a8e3) list_single_ai3_gene_pane_g

0xd556,	// (0x00038172) list_double_ai3_gene_pane_g1_ParamLimits

0xd556,	// (0x00038172) list_double_ai3_gene_pane_g1

0xd562,	// (0x0003817e) list_double_ai3_gene_pane_t1_ParamLimits

0xd562,	// (0x0003817e) list_double_ai3_gene_pane_t1

0xd57e,	// (0x0003819a) list_double_ai3_gene_pane_t2_ParamLimits

0xd57e,	// (0x0003819a) list_double_ai3_gene_pane_t2

0xd594,	// (0x000381b0) list_double_ai3_gene_pane_t3_ParamLimits

0xd594,	// (0x000381b0) list_double_ai3_gene_pane_t3

0x0002,

0xfccc,	// (0x0003a8e8) list_double_ai3_gene_pane_t_ParamLimits

0xfccc,	// (0x0003a8e8) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x8008,	// (0x00032c24) aid_size_min_col_2

0xd43f,	// (0x0003805b) aid_size_min_msg_ParamLimits

0xd43f,	// (0x0003805b) aid_size_min_msg

0xc70b,	// (0x00037327) fep_vkb_top_text_pane_g2_ParamLimits

0xc70b,	// (0x00037327) fep_vkb_top_text_pane_g2

0x0001,

0xfb33,	// (0x0003a74f) fep_vkb_top_text_pane_g_ParamLimits

0xfb33,	// (0x0003a74f) fep_vkb_top_text_pane_g

0x4a84,	// (0x0002f6a0) main_hc_apps_shell_pane

0xd5b1,	// (0x000381cd) grid_hc_apps_pane_ParamLimits

0xd5b1,	// (0x000381cd) grid_hc_apps_pane

0xd5c0,	// (0x000381dc) list_hc_apps_pane

0xd5c8,	// (0x000381e4) scroll_pane_cp37_ParamLimits

0xd5c8,	// (0x000381e4) scroll_pane_cp37

0xd5d4,	// (0x000381f0) cell_hc_apps_pane_ParamLimits

0xd5d4,	// (0x000381f0) cell_hc_apps_pane

0xd682,	// (0x0003829e) cell_hc_apps_pane_g1_ParamLimits

0xd682,	// (0x0003829e) cell_hc_apps_pane_g1

0xd6b3,	// (0x000382cf) cell_hc_apps_pane_g2_ParamLimits

0xd6b3,	// (0x000382cf) cell_hc_apps_pane_g2

0xd6cf,	// (0x000382eb) cell_hc_apps_pane_g3_ParamLimits

0xd6cf,	// (0x000382eb) cell_hc_apps_pane_g3

0x0002,

0xfcd3,	// (0x0003a8ef) cell_hc_apps_pane_g_ParamLimits

0xfcd3,	// (0x0003a8ef) cell_hc_apps_pane_g

0xd6f1,	// (0x0003830d) cell_hc_apps_pane_t1_ParamLimits

0xd6f1,	// (0x0003830d) cell_hc_apps_pane_t1

0x8252,	// (0x00032e6e) grid_highlight_pane_cp10_ParamLimits

0x8252,	// (0x00032e6e) grid_highlight_pane_cp10

0xd731,	// (0x0003834d) list_single_hc_apps_pane_ParamLimits

0xd731,	// (0x0003834d) list_single_hc_apps_pane

0xd78d,	// (0x000383a9) list_single_hc_apps_pane_g1

0x80fc,	// (0x00032d18) list_single_hc_apps_pane_g2

0x0001,

0xfcda,	// (0x0003a8f6) list_single_hc_apps_pane_g

0x8115,	// (0x00032d31) list_single_hc_apps_pane_g2_copy1

0x8131,	// (0x00032d4d) list_single_hc_apps_pane_t1

0x7818,	// (0x00032434) bg_set_opt_pane_cp_ParamLimits

0x4ce5,	// (0x0002f901) setting_slider_pane_t1_ParamLimits

0x4cfe,	// (0x0002f91a) setting_slider_pane_t2_ParamLimits

0x4d18,	// (0x0002f934) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003a17a) setting_slider_pane_t_ParamLimits

0x4d30,	// (0x0002f94c) slider_set_pane_ParamLimits

0x59fc,	// (0x00030618) control_pane_g5_ParamLimits

0x59fc,	// (0x00030618) control_pane_g5

0xb0a6,	// (0x00035cc2) slider_set_pane_g1_ParamLimits

0x651a,	// (0x00031136) slider_set_pane_g2_ParamLimits

0x6526,	// (0x00031142) slider_set_pane_g3_ParamLimits

0x653a,	// (0x00031156) slider_set_pane_g4_ParamLimits

0x6552,	// (0x0003116e) slider_set_pane_g5_ParamLimits

0x6526,	// (0x00031142) slider_set_pane_g6_ParamLimits

0x6568,	// (0x00031184) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0003a580) slider_set_pane_g_ParamLimits

0x934a,	// (0x00033f66) navi_icon_text_pane_ParamLimits

0x9840,	// (0x0003445c) aid_fill_nsta_2_ParamLimits

0x987f,	// (0x0003449b) aid_touch_tab_arrow_left_ParamLimits

0x988e,	// (0x000344aa) aid_touch_tab_arrow_right_ParamLimits

0x98fb,	// (0x00034517) clock_nsta_pane_ParamLimits

0xab9b,	// (0x000357b7) navi_icon_pane_g1_ParamLimits

0xaba7,	// (0x000357c3) navi_text_pane_t1_ParamLimits

0xbed1,	// (0x00036aed) navi_icon_text_pane_g1_ParamLimits

0xbedd,	// (0x00036af9) navi_icon_text_pane_t1_ParamLimits

0xd78d,	// (0x000383a9) list_single_hc_apps_pane_g1_ParamLimits

0x80fc,	// (0x00032d18) list_single_hc_apps_pane_g2_ParamLimits

0xfcda,	// (0x0003a8f6) list_single_hc_apps_pane_g_ParamLimits

0x8115,	// (0x00032d31) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x8131,	// (0x00032d4d) list_single_hc_apps_pane_t1_ParamLimits

0x4bef,	// (0x0002f80b) popup_toolbar2_fixed_window_ParamLimits

0x4bef,	// (0x0002f80b) popup_toolbar2_fixed_window

0x5ff5,	// (0x00030c11) popup_toolbar2_float_window

0x7724,	// (0x00032340) bg_popup_sub_pane_cp27

0xd7a6,	// (0x000383c2) grid_toolbar2_float_pane

0x7724,	// (0x00032340) bg_popup_sub_pane_cp26

0xd7a6,	// (0x000383c2) grid_toolbar2_fixed_pane

0xd7ae,	// (0x000383ca) cell_toolbar2_fixed_pane_ParamLimits

0xd7ae,	// (0x000383ca) cell_toolbar2_fixed_pane

0xd7be,	// (0x000383da) cell_toolbar2_fixed_pane_g1

0xd7c7,	// (0x000383e3) toolbar2_fixed_button_pane

0x9d12,	// (0x0003492e) toolbar2_fixed_button_pane_g1

0x9d22,	// (0x0003493e) toolbar2_fixed_button_pane_g2

0x9d1a,	// (0x00034936) toolbar2_fixed_button_pane_g3

0x9d32,	// (0x0003494e) toolbar2_fixed_button_pane_g4

0x9d2a,	// (0x00034946) toolbar2_fixed_button_pane_g5

0x9d3a,	// (0x00034956) toolbar2_fixed_button_pane_g6

0x9d42,	// (0x0003495e) toolbar2_fixed_button_pane_g7

0x9d52,	// (0x0003496e) toolbar2_fixed_button_pane_g8

0x9d4a,	// (0x00034966) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0003a482) toolbar2_fixed_button_pane_g

0xd7cf,	// (0x000383eb) cell_toolbar2_float_pane_ParamLimits

0xd7cf,	// (0x000383eb) cell_toolbar2_float_pane

0xd7e0,	// (0x000383fc) cell_toolbar2_float_pane_g1

0xd7c7,	// (0x000383e3) toolbar2_fixed_button_pane_cp

0xc467,	// (0x00037083) fep_vkb_accented_list_pane_ParamLimits

0xc467,	// (0x00037083) fep_vkb_accented_list_pane

0x690b,	// (0x00031527) bg_popup_fep_shadow_pane_g9

0x94ca,	// (0x000340e6) bg_popup_fep_shadow_pane_cp3

0x898f,	// (0x000335ab) list_accented_list_pane

0xd7e9,	// (0x00038405) list_single_accented_list_pane_ParamLimits

0xd7e9,	// (0x00038405) list_single_accented_list_pane

0x94ca,	// (0x000340e6) list_highlight_pane_cp10

0xd7fa,	// (0x00038416) list_single_accented_list_pane_t1

0x5f45,	// (0x00030b61) popup_slider_window_ParamLimits

0x5f45,	// (0x00030b61) popup_slider_window

0xd436,	// (0x00038052) aid_indentation_list_msg

0xd8b4,	// (0x000384d0) bg_popup_window_pane_cp19

0xd91e,	// (0x0003853a) popup_slider_window_g1

0xd93a,	// (0x00038556) popup_slider_window_g2

0xd956,	// (0x00038572) popup_slider_window_g3

0x0005,

0xfcdf,	// (0x0003a8fb) popup_slider_window_g

0xd9b2,	// (0x000385ce) popup_slider_window_t1

0xda26,	// (0x00038642) small_volume_slider_vertical_pane

0xc339,	// (0x00036f55) small_volume_slider_vertical_pane_g1

0xc339,	// (0x00036f55) small_volume_slider_vertical_pane_g2

0xda42,	// (0x0003865e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcf1,	// (0x0003a90d) small_volume_slider_vertical_pane_g

0x49a7,	// (0x0002f5c3) area_side_right_pane_ParamLimits

0x49a7,	// (0x0002f5c3) area_side_right_pane

0x6af5,	// (0x00031711) aid_size_side_button_ParamLimits

0x6af5,	// (0x00031711) aid_size_side_button

0x6b09,	// (0x00031725) grid_sctrl_middle_pane_ParamLimits

0x6b09,	// (0x00031725) grid_sctrl_middle_pane

0x6b28,	// (0x00031744) sctrl_sk_bottom_pane

0x6b39,	// (0x00031755) sctrl_sk_top_pane

0x6b4b,	// (0x00031767) aid_touch_sctrl_top

0x6b58,	// (0x00031774) bg_sctrl_sk_pane_ParamLimits

0x6b58,	// (0x00031774) bg_sctrl_sk_pane

0x6b66,	// (0x00031782) sctrl_sk_top_pane_g1

0x6b73,	// (0x0003178f) sctrl_sk_top_pane_t1

0x6b4b,	// (0x00031767) aid_touch_sctrl_bottom

0x6b58,	// (0x00031774) bg_sctrl_sk_pane_cp_ParamLimits

0x6b58,	// (0x00031774) bg_sctrl_sk_pane_cp

0x6b8e,	// (0x000317aa) sctrl_sk_bottom_pane_g1

0x6b73,	// (0x0003178f) sctrl_sk_bottom_pane_t1

0x6b97,	// (0x000317b3) cell_sctrl_middle_pane_ParamLimits

0x6b97,	// (0x000317b3) cell_sctrl_middle_pane

0x6bb2,	// (0x000317ce) aid_touch_sctrl_middle_ParamLimits

0x6bb2,	// (0x000317ce) aid_touch_sctrl_middle

0x6bc4,	// (0x000317e0) bg_sctrl_middle_pane_ParamLimits

0x6bc4,	// (0x000317e0) bg_sctrl_middle_pane

0x692b,	// (0x00031547) cell_sctrl_middle_pane_g1_ParamLimits

0x692b,	// (0x00031547) cell_sctrl_middle_pane_g1

0x6bd2,	// (0x000317ee) cell_sctrl_middle_pane_g2_ParamLimits

0x6bd2,	// (0x000317ee) cell_sctrl_middle_pane_g2

0x0001,

0xfcfd,	// (0x0003a919) cell_sctrl_middle_pane_g_ParamLimits

0xfcfd,	// (0x0003a919) cell_sctrl_middle_pane_g

0x9d12,	// (0x0003492e) bg_sctrl_middle_pane_g1

0x9d1a,	// (0x00034936) bg_sctrl_middle_pane_g2

0x9d22,	// (0x0003493e) bg_sctrl_middle_pane_g3

0x9d2a,	// (0x00034946) bg_sctrl_middle_pane_g4

0x9d32,	// (0x0003494e) bg_sctrl_middle_pane_g5

0x9d3a,	// (0x00034956) bg_sctrl_middle_pane_g6

0x9d42,	// (0x0003495e) bg_sctrl_middle_pane_g7

0x9d4a,	// (0x00034966) bg_sctrl_middle_pane_g8

0x0007,

0xfd02,	// (0x0003a91e) bg_sctrl_middle_pane_g

0x9d52,	// (0x0003496e) bg_sctrl_middle_pane_g8_copy1

0x9d12,	// (0x0003492e) bg_sctrl_sk_pane_g1

0x9d22,	// (0x0003493e) bg_sctrl_sk_pane_g2

0x9d1a,	// (0x00034936) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0003a482) bg_sctrl_sk_pane_g

0x8767,	// (0x00033383) aid_size_touch_scroll_bar

0x9d32,	// (0x0003494e) bg_sctrl_sk_pane_g4

0x9d2a,	// (0x00034946) bg_sctrl_sk_pane_g5

0x9d3a,	// (0x00034956) bg_sctrl_sk_pane_g6

0x9d42,	// (0x0003495e) bg_sctrl_sk_pane_g7

0x9d52,	// (0x0003496e) bg_sctrl_sk_pane_g8

0x9d4a,	// (0x00034966) bg_sctrl_sk_pane_g9

0x5bae,	// (0x000307ca) popup_fep_china_hwr2_fs_candidate_window

0x5bb8,	// (0x000307d4) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5bb8,	// (0x000307d4) popup_fep_china_hwr2_fs_control_window

0x692b,	// (0x00031547) sctrl_sk_top_pane_g2

0x0001,

0xfcf8,	// (0x0003a914) sctrl_sk_top_pane_g

0xda4b,	// (0x00038667) aid_fep_china_hwr2_fs_cell_ParamLimits

0xda4b,	// (0x00038667) aid_fep_china_hwr2_fs_cell

0xda5d,	// (0x00038679) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xda5d,	// (0x00038679) bg_popup_fep_shadow_pane_cp4

0xda74,	// (0x00038690) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xda74,	// (0x00038690) bg_popup_fep_shadow_pane_cp5

0xda86,	// (0x000386a2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xda86,	// (0x000386a2) popup_fep_china_hwr2_fs_control_bar_grid

0xda96,	// (0x000386b2) popup_fep_china_hwr2_fs_control_funtion_grid

0xda9e,	// (0x000386ba) aid_fep_china_hwr2_fs_candi_cell

0x7724,	// (0x00032340) bg_popup_fep_shadow_pane_cp6

0xdaa8,	// (0x000386c4) popup_fep_china_hwr2_fs_candidate_grid

0xdab2,	// (0x000386ce) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdab2,	// (0x000386ce) cell_fep_china_hwr2_fs_funtion_grid

0xc339,	// (0x00036f55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xdaca,	// (0x000386e6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xdaca,	// (0x000386e6) cell_fep_china_hwr2_fs_funtion_grid_g1

0xdad8,	// (0x000386f4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xdad8,	// (0x000386f4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd13,	// (0x0003a92f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd13,	// (0x0003a92f) cell_fep_china_hwr2_fs_funtion_grid_g

0xdaee,	// (0x0003870a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdaee,	// (0x0003870a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb03,	// (0x0003871f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb03,	// (0x0003871f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd18,	// (0x0003a934) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd18,	// (0x0003a934) cell_fep_china_hwr2_fs_funtion_grid_t

0xdb1f,	// (0x0003873b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xdb27,	// (0x00038743) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xdb2f,	// (0x0003874b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd1d,	// (0x0003a939) popup_fep_china_hwr2_fs_control_bar_grid_g

0xdb37,	// (0x00038753) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xdb37,	// (0x00038753) cell_fep_china_hwr2_fs_candidate_grid

0xdb50,	// (0x0003876c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xdb58,	// (0x00038774) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc339,	// (0x00036f55) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc339,	// (0x00036f55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb38,	// (0x0003a754) cell_fep_china_hwr2_fs_candidate_grid_g

0xdb60,	// (0x0003877c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x9908,	// (0x00034524) clock_nsta_pane_cp_24_ParamLimits

0x9908,	// (0x00034524) clock_nsta_pane_cp_24

0x9986,	// (0x000345a2) indicator_nsta_pane_cp_24_ParamLimits

0x9986,	// (0x000345a2) indicator_nsta_pane_cp_24

0xaa0b,	// (0x00035627) heading_pane_g1

0x0001,

0xf8cb,	// (0x0003a4e7) heading_pane_g

0xb45c,	// (0x00036078) grid_sct_catagory_button_pane

0xb48c,	// (0x000360a8) scroll_pane_cp5_ParamLimits

0xbf1f,	// (0x00036b3b) button_value_adjust_pane_cp5_ParamLimits

0xbf1f,	// (0x00036b3b) button_value_adjust_pane_cp5

0xc00a,	// (0x00036c26) form2_midp_time_pane_ParamLimits

0xdb6e,	// (0x0003878a) cell_sct_catagory_button_pane_ParamLimits

0xdb6e,	// (0x0003878a) cell_sct_catagory_button_pane

0xc2fe,	// (0x00036f1a) bg_button_pane_cp01_ParamLimits

0xc2fe,	// (0x00036f1a) bg_button_pane_cp01

0xc339,	// (0x00036f55) cell_sct_catagory_button_pane_g1

0x5f84,	// (0x00030ba0) popup_tb_extension_window

0xdb80,	// (0x0003879c) aid_size_cell_ext_ParamLimits

0xdb80,	// (0x0003879c) aid_size_cell_ext

0x8252,	// (0x00032e6e) bg_tb_trans_pane_cp1_ParamLimits

0x8252,	// (0x00032e6e) bg_tb_trans_pane_cp1

0xdba0,	// (0x000387bc) grid_tb_ext_pane_ParamLimits

0xdba0,	// (0x000387bc) grid_tb_ext_pane

0xdbce,	// (0x000387ea) cell_tb_ext_pane_ParamLimits

0xdbce,	// (0x000387ea) cell_tb_ext_pane

0xdbe5,	// (0x00038801) cell_tb_ext_pane_g1_ParamLimits

0xdbe5,	// (0x00038801) cell_tb_ext_pane_g1

0xdc02,	// (0x0003881e) cell_tb_ext_pane_t1

0x8252,	// (0x00032e6e) list_highlight_pane_cp11_ParamLimits

0x8252,	// (0x00032e6e) list_highlight_pane_cp11

0x4c0e,	// (0x0002f82a) popup_uni_indicator_window_ParamLimits

0x4c0e,	// (0x0002f82a) popup_uni_indicator_window

0x8838,	// (0x00033454) bg_popup_sub_pane_cp14

0xdc1d,	// (0x00038839) list_uniindi_pane

0xdc29,	// (0x00038845) uniindi_top_pane

0x8252,	// (0x00032e6e) bg_uniindi_top_pane

0xdc48,	// (0x00038864) uniindi_top_pane_g1

0xdc5e,	// (0x0003887a) uniindi_top_pane_g2

0x0003,

0xfd24,	// (0x0003a940) uniindi_top_pane_g

0xdc88,	// (0x000388a4) uniindi_top_pane_t1

0xdcb2,	// (0x000388ce) list_single_uniindi_pane_ParamLimits

0xdcb2,	// (0x000388ce) list_single_uniindi_pane

0xc339,	// (0x00036f55) bg_uniindi_top_pane_g1

0xdcc5,	// (0x000388e1) list_single_uniindi_pane_g1

0xdcd8,	// (0x000388f4) list_single_uniindi_pane_t1

0x4a84,	// (0x0002f6a0) control_bg_pane

0xdcfd,	// (0x00038919) bg_sctrl_sk_pane_cp1

0xdd06,	// (0x00038922) bg_sctrl_sk_pane_cp2

0xdd0f,	// (0x0003892b) control_bg_pane_g1

0xdd18,	// (0x00038934) control_bg_pane_g2

0x0001,

0xfd2d,	// (0x0003a949) control_bg_pane_g

0xbd69,	// (0x00036985) cell_indicator_nsta_pane_g1_ParamLimits

0xbd77,	// (0x00036993) cell_indicator_nsta_pane_g2_ParamLimits

0xfa9c,	// (0x0003a6b8) cell_indicator_nsta_pane_g_ParamLimits

0x7db9,	// (0x000329d5) form2_midp_time_pane_t1_ParamLimits

0x5b0e,	// (0x0003072a) main_idle_act4_pane_ParamLimits

0x5b0e,	// (0x0003072a) main_idle_act4_pane

0x5f84,	// (0x00030ba0) popup_tb_extension_window_ParamLimits

0xdbbe,	// (0x000387da) tb_ext_find_pane_ParamLimits

0xdbbe,	// (0x000387da) tb_ext_find_pane

0xdd21,	// (0x0003893d) ai_gene_pane_1_cp1

0x9605,	// (0x00034221) ai_gene_pane_2_cp1

0xdd29,	// (0x00038945) list_single_idle_plugin_calendar_pane

0xdd32,	// (0x0003894e) list_single_idle_plugin_notification_pane

0xdd3b,	// (0x00038957) list_single_idle_plugin_player_pane

0xdd44,	// (0x00038960) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdd44,	// (0x00038960) list_single_idle_plugin_shortcut_pane

0xdd66,	// (0x00038982) main_idle_act4_pane_t1

0xdd78,	// (0x00038994) main_idle_act4_pane_t2

0x0001,

0xfd32,	// (0x0003a94e) main_idle_act4_pane_t

0xdd8a,	// (0x000389a6) middle_sk_idle_act4_pane_ParamLimits

0xdd8a,	// (0x000389a6) middle_sk_idle_act4_pane

0xdda0,	// (0x000389bc) popup_clock_digital_analogue_window_cp2

0xddba,	// (0x000389d6) shortcut_wheel_idle_act4_pane_ParamLimits

0xddba,	// (0x000389d6) shortcut_wheel_idle_act4_pane

0xc339,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g1

0xc339,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g2

0xc339,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g3

0xc339,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g4

0xc339,	// (0x00036f55) shortcut_wheel_idle_act4_pane_g5

0xddce,	// (0x000389ea) shortcut_wheel_idle_act4_pane_g6

0xddd6,	// (0x000389f2) shortcut_wheel_idle_act4_pane_g7

0xddde,	// (0x000389fa) shortcut_wheel_idle_act4_pane_g8

0xdde6,	// (0x00038a02) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd37,	// (0x0003a953) shortcut_wheel_idle_act4_pane_g

0xc5b7,	// (0x000371d3) middle_sk_idle_act4_pane_g1_ParamLimits

0xc5b7,	// (0x000371d3) middle_sk_idle_act4_pane_g1

0xde6b,	// (0x00038a87) middle_sk_idle_act4_pane_g2_ParamLimits

0xde6b,	// (0x00038a87) middle_sk_idle_act4_pane_g2

0x0001,

0xfd5a,	// (0x0003a976) middle_sk_idle_act4_pane_g_ParamLimits

0xfd5a,	// (0x0003a976) middle_sk_idle_act4_pane_g

0xde77,	// (0x00038a93) middle_sk_idle_act4_pane_t1_ParamLimits

0xde77,	// (0x00038a93) middle_sk_idle_act4_pane_t1

0xde94,	// (0x00038ab0) grid_ai_shortcut_pane_ParamLimits

0xde94,	// (0x00038ab0) grid_ai_shortcut_pane

0xdead,	// (0x00038ac9) list_highlight_pane_cp16_ParamLimits

0xdead,	// (0x00038ac9) list_highlight_pane_cp16

0xdeba,	// (0x00038ad6) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdeba,	// (0x00038ad6) list_single_idle_plugin_shortcut_pane_g1

0xdec6,	// (0x00038ae2) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdec6,	// (0x00038ae2) list_single_idle_plugin_shortcut_pane_g2

0xdede,	// (0x00038afa) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdede,	// (0x00038afa) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5f,	// (0x0003a97b) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5f,	// (0x0003a97b) list_single_idle_plugin_shortcut_pane_g

0xdef1,	// (0x00038b0d) cell_ai_shortcut_pane_ParamLimits

0xdef1,	// (0x00038b0d) cell_ai_shortcut_pane

0xdf15,	// (0x00038b31) cell_ai_shortcut_pane_g1_ParamLimits

0xdf15,	// (0x00038b31) cell_ai_shortcut_pane_g1

0xdd21,	// (0x0003893d) ai_gene_pane_1_cp2

0xdf37,	// (0x00038b53) ai_gene_pane_2_cp2

0xdf3f,	// (0x00038b5b) list_highlight_pane_cp15

0xdf48,	// (0x00038b64) list_single_idle_plugin_calendar_pane_g1

0xdf3f,	// (0x00038b5b) list_highlight_pane_cp17

0xdf50,	// (0x00038b6c) list_single_idle_plugin_calendar_pane_g1_copy1

0xdf58,	// (0x00038b74) list_single_idle_plugin_player_pane_g1

0xb6b5,	// (0x000362d1) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd66,	// (0x0003a982) list_single_idle_plugin_player_pane_g

0xdf60,	// (0x00038b7c) list_single_idle_plugin_player_pane_t1

0xdf6e,	// (0x00038b8a) list_single_idle_plugin_player_pane_t2

0xdf7c,	// (0x00038b98) list_single_idle_plugin_player_pane_t3

0xdf8a,	// (0x00038ba6) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd6b,	// (0x0003a987) list_single_idle_plugin_player_pane_t

0xdf98,	// (0x00038bb4) wait_bar_pane_cp15

0xdfa0,	// (0x00038bbc) grid_ai_notification_pane

0xb6b5,	// (0x000362d1) list_single_idle_plugin_notification_pane_g1

0xdfa9,	// (0x00038bc5) cell_ai_notification_pane_ParamLimits

0xdfa9,	// (0x00038bc5) cell_ai_notification_pane

0xdfb6,	// (0x00038bd2) cell_ai_notification_pane_g1

0xdfbe,	// (0x00038bda) cell_ai_notification_pane_t1

0xdfcc,	// (0x00038be8) tb_ext_find_button_pane

0xdfd4,	// (0x00038bf0) tb_ext_find_pane_g1

0xdfdc,	// (0x00038bf8) tb_ext_find_pane_t1

0x8eb7,	// (0x00033ad3) tb_ext_find_button_pane_g1

0xdfea,	// (0x00038c06) tb_ext_find_button_pane_g2

0x0001,

0xfd74,	// (0x0003a990) tb_ext_find_button_pane_g

0xdd66,	// (0x00038982) main_idle_act4_pane_t1_ParamLimits

0xdd78,	// (0x00038994) main_idle_act4_pane_t2_ParamLimits

0xfd32,	// (0x0003a94e) main_idle_act4_pane_t_ParamLimits

0xdda0,	// (0x000389bc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xddae,	// (0x000389ca) sat_plugin_idle_act4_pane_ParamLimits

0xddae,	// (0x000389ca) sat_plugin_idle_act4_pane

0xdff3,	// (0x00038c0f) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdff3,	// (0x00038c0f) sat_plugin_idle_act4_pane_t1

0xe006,	// (0x00038c22) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe006,	// (0x00038c22) sat_plugin_idle_act4_pane_t2

0xe019,	// (0x00038c35) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe019,	// (0x00038c35) sat_plugin_idle_act4_pane_t3

0xe02c,	// (0x00038c48) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe02c,	// (0x00038c48) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd79,	// (0x0003a995) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd79,	// (0x0003a995) sat_plugin_idle_act4_pane_t

0x4b49,	// (0x0002f765) popup_battery_window_ParamLimits

0x4b49,	// (0x0002f765) popup_battery_window

0x8252,	// (0x00032e6e) bg_popup_sub_pane_cp25_ParamLimits

0x8252,	// (0x00032e6e) bg_popup_sub_pane_cp25

0xe03f,	// (0x00038c5b) popup_battery_window_g1_ParamLimits

0xe03f,	// (0x00038c5b) popup_battery_window_g1

0xe04b,	// (0x00038c67) popup_battery_window_t1_ParamLimits

0xe04b,	// (0x00038c67) popup_battery_window_t1

0xe05d,	// (0x00038c79) popup_battery_window_t2_ParamLimits

0xe05d,	// (0x00038c79) popup_battery_window_t2

0x0001,

0xfd82,	// (0x0003a99e) popup_battery_window_t_ParamLimits

0xfd82,	// (0x0003a99e) popup_battery_window_t

0x94d2,	// (0x000340ee) midp_canvas_pane_ParamLimits

0x9549,	// (0x00034165) midp_keypad_pane_ParamLimits

0x9549,	// (0x00034165) midp_keypad_pane

0x9808,	// (0x00034424) main_midp_pane_ParamLimits

0xbde3,	// (0x000369ff) signal_pane_g2_cp_ParamLimits

0xe07a,	// (0x00038c96) aid_size_cell_midp_keypad_ParamLimits

0xe07a,	// (0x00038c96) aid_size_cell_midp_keypad

0xe094,	// (0x00038cb0) midp_keyp_game_grid_pane_ParamLimits

0xe094,	// (0x00038cb0) midp_keyp_game_grid_pane

0xe0b4,	// (0x00038cd0) midp_keyp_rocker_pane_ParamLimits

0xe0b4,	// (0x00038cd0) midp_keyp_rocker_pane

0xe0ed,	// (0x00038d09) midp_keyp_sk_left_pane_ParamLimits

0xe0ed,	// (0x00038d09) midp_keyp_sk_left_pane

0xe147,	// (0x00038d63) midp_keyp_sk_right_pane_ParamLimits

0xe147,	// (0x00038d63) midp_keyp_sk_right_pane

0x7724,	// (0x00032340) bg_button_pane_cp03

0xe1a1,	// (0x00038dbd) midp_keyp_sk_left_pane_g1

0x7724,	// (0x00032340) bg_button_pane_cp04

0xe1a1,	// (0x00038dbd) midp_keyp_sk_right_pane_g1

0xc339,	// (0x00036f55) midp_keyp_rocker_pane_g1

0xe1aa,	// (0x00038dc6) keyp_game_cell_pane_ParamLimits

0xe1aa,	// (0x00038dc6) keyp_game_cell_pane

0x7724,	// (0x00032340) bg_button_pane_cp02

0xe1bd,	// (0x00038dd9) keyp_game_cell_pane_g1

0x4b8d,	// (0x0002f7a9) popup_fep_vkb2_window_ParamLimits

0x4b8d,	// (0x0002f7a9) popup_fep_vkb2_window

0x6bf0,	// (0x0003180c) aid_size_cell_vkb2_ParamLimits

0x6bf0,	// (0x0003180c) aid_size_cell_vkb2

0x6c44,	// (0x00031860) popup_fep_vkb2_window_g1_ParamLimits

0x6c44,	// (0x00031860) popup_fep_vkb2_window_g1

0x6c8c,	// (0x000318a8) vkb2_area_bottom_pane_ParamLimits

0x6c8c,	// (0x000318a8) vkb2_area_bottom_pane

0x6cd8,	// (0x000318f4) vkb2_area_keypad_pane_ParamLimits

0x6cd8,	// (0x000318f4) vkb2_area_keypad_pane

0x6d1a,	// (0x00031936) vkb2_area_top_pane_ParamLimits

0x6d1a,	// (0x00031936) vkb2_area_top_pane

0x6d94,	// (0x000319b0) vkb2_top_entry_pane_ParamLimits

0x6d94,	// (0x000319b0) vkb2_top_entry_pane

0x6dbe,	// (0x000319da) vkb2_top_grid_left_pane_ParamLimits

0x6dbe,	// (0x000319da) vkb2_top_grid_left_pane

0x6ddc,	// (0x000319f8) vkb2_top_grid_right_pane_ParamLimits

0x6ddc,	// (0x000319f8) vkb2_top_grid_right_pane

0x6dfa,	// (0x00031a16) vkb2_cell_keypad_pane_ParamLimits

0x6dfa,	// (0x00031a16) vkb2_cell_keypad_pane

0x6ecb,	// (0x00031ae7) vkb2_area_bottom_grid_pane_ParamLimits

0x6ecb,	// (0x00031ae7) vkb2_area_bottom_grid_pane

0x6ef1,	// (0x00031b0d) vkb2_area_bottom_pane_g1_ParamLimits

0x6ef1,	// (0x00031b0d) vkb2_area_bottom_pane_g1

0x6f15,	// (0x00031b31) vkb2_area_bottom_pane_g2_ParamLimits

0x6f15,	// (0x00031b31) vkb2_area_bottom_pane_g2

0x6f43,	// (0x00031b5f) vkb2_area_bottom_pane_g3_ParamLimits

0x6f43,	// (0x00031b5f) vkb2_area_bottom_pane_g3

0x0002,

0xfd87,	// (0x0003a9a3) vkb2_area_bottom_pane_g_ParamLimits

0xfd87,	// (0x0003a9a3) vkb2_area_bottom_pane_g

0x6fa4,	// (0x00031bc0) vkb2_top_cell_left_pane_ParamLimits

0x6fa4,	// (0x00031bc0) vkb2_top_cell_left_pane

0xe1ce,	// (0x00038dea) vkb2_top_entry_pane_g1_ParamLimits

0xe1ce,	// (0x00038dea) vkb2_top_entry_pane_g1

0xe1dc,	// (0x00038df8) vkb2_top_entry_pane_t1_ParamLimits

0xe1dc,	// (0x00038df8) vkb2_top_entry_pane_t1

0xe20e,	// (0x00038e2a) vkb2_top_entry_pane_t2_ParamLimits

0xe20e,	// (0x00038e2a) vkb2_top_entry_pane_t2

0xe240,	// (0x00038e5c) vkb2_top_entry_pane_t3_ParamLimits

0xe240,	// (0x00038e5c) vkb2_top_entry_pane_t3

0x0002,

0xfd8e,	// (0x0003a9aa) vkb2_top_entry_pane_t_ParamLimits

0xfd8e,	// (0x0003a9aa) vkb2_top_entry_pane_t

0x6ff1,	// (0x00031c0d) vkb2_top_grid_right_pane_g1_ParamLimits

0x6ff1,	// (0x00031c0d) vkb2_top_grid_right_pane_g1

0x7007,	// (0x00031c23) vkb2_top_grid_right_pane_g2_ParamLimits

0x7007,	// (0x00031c23) vkb2_top_grid_right_pane_g2

0x701f,	// (0x00031c3b) vkb2_top_grid_right_pane_g3_ParamLimits

0x701f,	// (0x00031c3b) vkb2_top_grid_right_pane_g3

0x7037,	// (0x00031c53) vkb2_top_grid_right_pane_g4_ParamLimits

0x7037,	// (0x00031c53) vkb2_top_grid_right_pane_g4

0x0003,

0xfd95,	// (0x0003a9b1) vkb2_top_grid_right_pane_g_ParamLimits

0xfd95,	// (0x0003a9b1) vkb2_top_grid_right_pane_g

0x704d,	// (0x00031c69) vkb2_top_cell_left_pane_g1

0x7064,	// (0x00031c80) vkb2_cell_keypad_pane_g1_ParamLimits

0x7064,	// (0x00031c80) vkb2_cell_keypad_pane_g1

0xe264,	// (0x00038e80) vkb2_cell_keypad_pane_t1_ParamLimits

0xe264,	// (0x00038e80) vkb2_cell_keypad_pane_t1

0x7072,	// (0x00031c8e) vkb2_cell_bottom_grid_pane_ParamLimits

0x7072,	// (0x00031c8e) vkb2_cell_bottom_grid_pane

0x70ab,	// (0x00031cc7) vkb2_cell_bottom_grid_pane_g1

0xddee,	// (0x00038a0a) aid_call2_pane_cp02

0xddf6,	// (0x00038a12) aid_call_pane_cp02

0xddfe,	// (0x00038a1a) clock_digital_number_pane_cp10

0xde06,	// (0x00038a22) clock_digital_number_pane_cp11

0xde0e,	// (0x00038a2a) clock_digital_number_pane_cp12

0xde16,	// (0x00038a32) clock_digital_number_pane_cp13

0xde1e,	// (0x00038a3a) clock_digital_separator_pane_cp10

0x8eb7,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g1

0x8eb7,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g2

0xde26,	// (0x00038a42) popup_clock_digital_analogue_window_cp2_g3

0x8eb7,	// (0x00033ad3) popup_clock_digital_analogue_window_cp2_g4

0xde26,	// (0x00038a42) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd4a,	// (0x0003a966) popup_clock_digital_analogue_window_cp2_g

0xde2e,	// (0x00038a4a) popup_clock_digital_analogue_window_cp2_t1

0xde3c,	// (0x00038a58) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd55,	// (0x0003a971) popup_clock_digital_analogue_window_cp2_t

0xc339,	// (0x00036f55) clock_digital_number_pane_cp10_g1

0xc339,	// (0x00036f55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a754) clock_digital_number_pane_cp10_g

0xc339,	// (0x00036f55) clock_digital_separator_pane_cp10_g1

0xc339,	// (0x00036f55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb38,	// (0x0003a754) clock_digital_separator_pane_cp10_g

0xdc6a,	// (0x00038886) uniindi_top_pane_g3

0xdc7b,	// (0x00038897) uniindi_top_pane_g4

0x6e85,	// (0x00031aa1) vkb2_row_keypad_pane_ParamLimits

0x6e85,	// (0x00031aa1) vkb2_row_keypad_pane

0x70c7,	// (0x00031ce3) vkb2_cell_t_keypad_pane_ParamLimits

0x70c7,	// (0x00031ce3) vkb2_cell_t_keypad_pane

0x70d7,	// (0x00031cf3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x70d7,	// (0x00031cf3) vkb2_cell_t_keypad_pane_cp08

0x70ea,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x70ea,	// (0x00031d06) vkb2_cell_t_keypad_pane_cp09

0x70fe,	// (0x00031d1a) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x70fe,	// (0x00031d1a) vkb2_cell_t_keypad_pane_cp01

0x710f,	// (0x00031d2b) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x710f,	// (0x00031d2b) vkb2_cell_t_keypad_pane_cp02

0x7120,	// (0x00031d3c) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x7120,	// (0x00031d3c) vkb2_cell_t_keypad_pane_cp03

0x7131,	// (0x00031d4d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x7131,	// (0x00031d4d) vkb2_cell_t_keypad_pane_cp04

0x7142,	// (0x00031d5e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7142,	// (0x00031d5e) vkb2_cell_t_keypad_pane_cp05

0x7153,	// (0x00031d6f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7153,	// (0x00031d6f) vkb2_cell_t_keypad_pane_cp06

0x7164,	// (0x00031d80) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7164,	// (0x00031d80) vkb2_cell_t_keypad_pane_cp07

0x7175,	// (0x00031d91) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7175,	// (0x00031d91) vkb2_cell_t_keypad_pane_cp10

0x692b,	// (0x00031547) vkb2_cell_t_keypad_pane_g1

0xe27b,	// (0x00038e97) vkb2_cell_t_keypad_pane_t1

0x4a84,	// (0x0002f6a0) popup_grid_graphic2_window

0xe28d,	// (0x00038ea9) aid_size_cell_graphic2_ParamLimits

0xe28d,	// (0x00038ea9) aid_size_cell_graphic2

0xe2c5,	// (0x00038ee1) bg_popup_window_pane_cp21_ParamLimits

0xe2c5,	// (0x00038ee1) bg_popup_window_pane_cp21

0xe2d3,	// (0x00038eef) graphic2_pages_pane_ParamLimits

0xe2d3,	// (0x00038eef) graphic2_pages_pane

0xe319,	// (0x00038f35) grid_graphic2_control_pane_ParamLimits

0xe319,	// (0x00038f35) grid_graphic2_control_pane

0xe357,	// (0x00038f73) grid_graphic2_pane_ParamLimits

0xe357,	// (0x00038f73) grid_graphic2_pane

0xe3cb,	// (0x00038fe7) cell_graphic2_pane

0x4a84,	// (0x0002f6a0) main_comp_mode_pane

0xd4ea,	// (0x00038106) list_ai3_gene_pane_ParamLimits

0xd8b4,	// (0x000384d0) bg_popup_window_pane_cp19_ParamLimits

0xd8c0,	// (0x000384dc) bg_touch_area_indi_pane_ParamLimits

0xd8c0,	// (0x000384dc) bg_touch_area_indi_pane

0xd8d6,	// (0x000384f2) bg_touch_area_indi_pane_cp01_ParamLimits

0xd8d6,	// (0x000384f2) bg_touch_area_indi_pane_cp01

0xd8ec,	// (0x00038508) bg_touch_area_indi_pane_cp02_ParamLimits

0xd8ec,	// (0x00038508) bg_touch_area_indi_pane_cp02

0xd904,	// (0x00038520) bg_touch_area_indi_pane_cp03_ParamLimits

0xd904,	// (0x00038520) bg_touch_area_indi_pane_cp03

0xd91e,	// (0x0003853a) popup_slider_window_g1_ParamLimits

0xd93a,	// (0x00038556) popup_slider_window_g2_ParamLimits

0xd956,	// (0x00038572) popup_slider_window_g3_ParamLimits

0xfcdf,	// (0x0003a8fb) popup_slider_window_g_ParamLimits

0xd9b2,	// (0x000385ce) popup_slider_window_t1_ParamLimits

0xda26,	// (0x00038642) small_volume_slider_vertical_pane_ParamLimits

0xe3cb,	// (0x00038fe7) cell_graphic2_pane_ParamLimits

0xe419,	// (0x00039035) bg_button_pane_cp10_ParamLimits

0xe419,	// (0x00039035) bg_button_pane_cp10

0xe42c,	// (0x00039048) bg_button_pane_cp11_ParamLimits

0xe42c,	// (0x00039048) bg_button_pane_cp11

0xe43f,	// (0x0003905b) graphic2_pages_pane_g1_ParamLimits

0xe43f,	// (0x0003905b) graphic2_pages_pane_g1

0xe45a,	// (0x00039076) graphic2_pages_pane_g2_ParamLimits

0xe45a,	// (0x00039076) graphic2_pages_pane_g2

0x0001,

0xfda3,	// (0x0003a9bf) graphic2_pages_pane_g_ParamLimits

0xfda3,	// (0x0003a9bf) graphic2_pages_pane_g

0xe472,	// (0x0003908e) graphic2_pages_pane_t1_ParamLimits

0xe472,	// (0x0003908e) graphic2_pages_pane_t1

0xe48a,	// (0x000390a6) cell_graphic2_control_pane_ParamLimits

0xe48a,	// (0x000390a6) cell_graphic2_control_pane

0xe4ab,	// (0x000390c7) cell_graphic2_pane_g1_ParamLimits

0xe4ab,	// (0x000390c7) cell_graphic2_pane_g1

0xe4b8,	// (0x000390d4) cell_graphic2_pane_g2_ParamLimits

0xe4b8,	// (0x000390d4) cell_graphic2_pane_g2

0xe4c5,	// (0x000390e1) cell_graphic2_pane_g3_ParamLimits

0xe4c5,	// (0x000390e1) cell_graphic2_pane_g3

0xe4d2,	// (0x000390ee) cell_graphic2_pane_g4_ParamLimits

0xe4d2,	// (0x000390ee) cell_graphic2_pane_g4

0xe4df,	// (0x000390fb) cell_graphic2_pane_g5_ParamLimits

0xe4df,	// (0x000390fb) cell_graphic2_pane_g5

0x0004,

0xfda8,	// (0x0003a9c4) cell_graphic2_pane_g_ParamLimits

0xfda8,	// (0x0003a9c4) cell_graphic2_pane_g

0xe4fa,	// (0x00039116) cell_graphic2_pane_t1_ParamLimits

0xe4fa,	// (0x00039116) cell_graphic2_pane_t1

0x9d86,	// (0x000349a2) grid_highlight_pane_cp11_ParamLimits

0x9d86,	// (0x000349a2) grid_highlight_pane_cp11

0x8252,	// (0x00032e6e) bg_button_pane_cp05

0xe523,	// (0x0003913f) cell_graphic2_control_pane_g1

0xc339,	// (0x00036f55) bg_touch_area_indi_pane_g1

0xe54b,	// (0x00039167) aid_cmod_rocker_key_size

0xe555,	// (0x00039171) aid_cmode_itu_key_size

0xe55f,	// (0x0003917b) main_cmode_video_pane

0xe569,	// (0x00039185) main_comp_mode_itu_pane

0xe575,	// (0x00039191) main_comp_mode_rocker_pane

0xe581,	// (0x0003919d) cell_cmode_rocker_pane_ParamLimits

0xe581,	// (0x0003919d) cell_cmode_rocker_pane

0xe593,	// (0x000391af) cell_cmode_itu_pane_ParamLimits

0xe593,	// (0x000391af) cell_cmode_itu_pane

0x8838,	// (0x00033454) bg_button_pane_cp06_ParamLimits

0x8838,	// (0x00033454) bg_button_pane_cp06

0xc5b7,	// (0x000371d3) cell_cmode_rocker_pane_g1_ParamLimits

0xc5b7,	// (0x000371d3) cell_cmode_rocker_pane_g1

0xdaca,	// (0x000386e6) cell_cmode_rocker_pane_g2_ParamLimits

0xdaca,	// (0x000386e6) cell_cmode_rocker_pane_g2

0x0001,

0xfdb8,	// (0x0003a9d4) cell_cmode_rocker_pane_g_ParamLimits

0xfdb8,	// (0x0003a9d4) cell_cmode_rocker_pane_g

0x7724,	// (0x00032340) bg_button_pane_cp07

0xe5a8,	// (0x000391c4) cell_cmode_itu_pane_g1

0xe5b1,	// (0x000391cd) cell_cmode_itu_pane_t1

0xe5bf,	// (0x000391db) cell_cmode_itu_pane_t2

0x0001,

0xfdbd,	// (0x0003a9d9) cell_cmode_itu_pane_t

0xdced,	// (0x00038909) aid_touch_ctrl_left

0xdcf5,	// (0x00038911) aid_touch_ctrl_right

0x7724,	// (0x00032340) compa_mode_pane

0xe5cd,	// (0x000391e9) aid_cmod_rocker_key_size_cp

0xe5d7,	// (0x000391f3) aid_cmode_itu_key_size_cp

0xe5e1,	// (0x000391fd) compa_mode_pane_g1

0xe5e9,	// (0x00039205) compa_mode_pane_g2

0xe5f1,	// (0x0003920d) compa_mode_pane_g3

0x0002,

0xfdc2,	// (0x0003a9de) compa_mode_pane_g

0xe5f9,	// (0x00039215) main_comp_mode_itu_pane_cp

0xe601,	// (0x0003921d) main_comp_mode_rocker_pane_cp

0xe609,	// (0x00039225) cell_cmode_itu_pane_cp_ParamLimits

0xe609,	// (0x00039225) cell_cmode_itu_pane_cp

0xe61e,	// (0x0003923a) cell_cmode_rocker_pane_cp_ParamLimits

0xe61e,	// (0x0003923a) cell_cmode_rocker_pane_cp

0x8838,	// (0x00033454) bg_button_pane_cp06_cp_ParamLimits

0x8838,	// (0x00033454) bg_button_pane_cp06_cp

0xc5b7,	// (0x000371d3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc5b7,	// (0x000371d3) cell_cmode_rocker_pane_g1_cp

0xc339,	// (0x00036f55) cell_cmode_rocker_pane_g2_cp

0x7724,	// (0x00032340) bg_button_pane_cp07_cp

0xb257,	// (0x00035e73) cell_cmode_itu_pane_g1_cp

0xe630,	// (0x0003924c) cell_cmode_itu_pane_t1_cp

0xe630,	// (0x0003924c) cell_cmode_itu_pane_t2_cp

0xb244,	// (0x00035e60) settings_code_pane_cp2

0x7818,	// (0x00032434) bg_popup_window_pane_cp3_ParamLimits

0x842c,	// (0x00033048) heading_pane_cp3_ParamLimits

0x8438,	// (0x00033054) listscroll_popup_graphic_pane_ParamLimits

0x66d4,	// (0x000312f0) fep_hwr_aid_pane_ParamLimits

0x6b4b,	// (0x00031767) aid_touch_sctrl_top_ParamLimits

0x6b66,	// (0x00031782) sctrl_sk_top_pane_g1_ParamLimits

0x692b,	// (0x00031547) sctrl_sk_top_pane_g2_ParamLimits

0xfcf8,	// (0x0003a914) sctrl_sk_top_pane_g_ParamLimits

0x6b73,	// (0x0003178f) sctrl_sk_top_pane_t1_ParamLimits

0x6b4b,	// (0x00031767) aid_touch_sctrl_bottom_ParamLimits

0x6b73,	// (0x0003178f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdc36,	// (0x00038852) aid_area_touch_clock

0x6d5c,	// (0x00031978) aid_vkb2_area_top_pane_cell_ParamLimits

0x6d5c,	// (0x00031978) aid_vkb2_area_top_pane_cell

0x6ea7,	// (0x00031ac3) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x6ea7,	// (0x00031ac3) aid_vkb2_area_bottom_pane_cell

0xe1c6,	// (0x00038de2) popup_char_count_window

0xe63e,	// (0x0003925a) popup_char_count_window_g1

0xe647,	// (0x00039263) popup_char_count_window_g2

0xe650,	// (0x0003926c) popup_char_count_window_g3

0x0002,

0xfdc9,	// (0x0003a9e5) popup_char_count_window_g

0xe659,	// (0x00039275) popup_char_count_window_t1

0x6c22,	// (0x0003183e) popup_fep_char_preview_window_ParamLimits

0x6c22,	// (0x0003183e) popup_fep_char_preview_window

0x6d7a,	// (0x00031996) vkb2_top_candi_pane_ParamLimits

0x6d7a,	// (0x00031996) vkb2_top_candi_pane

0xe667,	// (0x00039283) cell_vkb2_top_candi_pane_ParamLimits

0xe667,	// (0x00039283) cell_vkb2_top_candi_pane

0x718a,	// (0x00031da6) bg_popup_fep_char_preview_window_ParamLimits

0x718a,	// (0x00031da6) bg_popup_fep_char_preview_window

0x7198,	// (0x00031db4) popup_fep_char_preview_window_t1_ParamLimits

0x7198,	// (0x00031db4) popup_fep_char_preview_window_t1

0xe6b4,	// (0x000392d0) bg_popup_fep_char_preview_window_g1

0xe6bc,	// (0x000392d8) bg_popup_fep_char_preview_window_g2

0xe6c4,	// (0x000392e0) bg_popup_fep_char_preview_window_g3

0xe6cc,	// (0x000392e8) bg_popup_fep_char_preview_window_g4

0xe6d4,	// (0x000392f0) bg_popup_fep_char_preview_window_g5

0x71d2,	// (0x00031dee) bg_popup_fep_char_preview_window_g6

0xe6dc,	// (0x000392f8) bg_popup_fep_char_preview_window_g7

0xe6e4,	// (0x00039300) bg_popup_fep_char_preview_window_g8

0xe6ec,	// (0x00039308) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd0,	// (0x0003a9ec) bg_popup_fep_char_preview_window_g

0x692b,	// (0x00031547) cell_vkb2_top_candi_pane_g1_ParamLimits

0x692b,	// (0x00031547) cell_vkb2_top_candi_pane_g1

0x6939,	// (0x00031555) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6939,	// (0x00031555) cell_vkb2_top_candi_pane_g2

0xde4a,	// (0x00038a66) cell_vkb2_top_candi_pane_g3_ParamLimits

0xde4a,	// (0x00038a66) cell_vkb2_top_candi_pane_g3

0x71da,	// (0x00031df6) cell_vkb2_top_candi_pane_g4_ParamLimits

0x71da,	// (0x00031df6) cell_vkb2_top_candi_pane_g4

0xca82,	// (0x0003769e) cell_vkb2_top_candi_pane_g5_ParamLimits

0xca82,	// (0x0003769e) cell_vkb2_top_candi_pane_g5

0x71fb,	// (0x00031e17) cell_vkb2_top_candi_pane_g6_ParamLimits

0x71fb,	// (0x00031e17) cell_vkb2_top_candi_pane_g6

0x0005,

0xfde3,	// (0x0003a9ff) cell_vkb2_top_candi_pane_g_ParamLimits

0xfde3,	// (0x0003a9ff) cell_vkb2_top_candi_pane_g

0x7209,	// (0x00031e25) cell_vkb2_top_candi_pane_t1

0x6506,	// (0x00031122) aid_size_touch_slider_mark_ParamLimits

0x6506,	// (0x00031122) aid_size_touch_slider_mark

0xe309,	// (0x00038f25) grid_graphic2_catg_pane_ParamLimits

0xe309,	// (0x00038f25) grid_graphic2_catg_pane

0xe3a7,	// (0x00038fc3) popup_grid_graphic2_window_t1_ParamLimits

0xe3a7,	// (0x00038fc3) popup_grid_graphic2_window_t1

0xe3b9,	// (0x00038fd5) popup_grid_graphic2_window_t2_ParamLimits

0xe3b9,	// (0x00038fd5) popup_grid_graphic2_window_t2

0x0001,

0xfd9e,	// (0x0003a9ba) popup_grid_graphic2_window_t_ParamLimits

0xfd9e,	// (0x0003a9ba) popup_grid_graphic2_window_t

0x8252,	// (0x00032e6e) bg_button_pane_cp05_ParamLimits

0xe523,	// (0x0003913f) cell_graphic2_control_pane_g1_ParamLimits

0xe6f4,	// (0x00039310) cell_graphic2_catg_pane_ParamLimits

0xe6f4,	// (0x00039310) cell_graphic2_catg_pane

0x7724,	// (0x00032340) bg_button_pane_cp12

0xe706,	// (0x00039322) cell_graphic2_catg_pane_g1

0xdc02,	// (0x0003881e) cell_tb_ext_pane_t1_ParamLimits

0x6fc4,	// (0x00031be0) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6fc4,	// (0x00031be0) vkb2_top_cell_right_narrow_pane

0x6fdc,	// (0x00031bf8) vkb2_top_cell_right_wide_pane_ParamLimits

0x6fdc,	// (0x00031bf8) vkb2_top_cell_right_wide_pane

0x66c6,	// (0x000312e2) bg_vkb2_func_pane_ParamLimits

0x66c6,	// (0x000312e2) bg_vkb2_func_pane

0x704d,	// (0x00031c69) vkb2_top_cell_left_pane_g1_ParamLimits

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp03_ParamLimits

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp03

0x70ab,	// (0x00031cc7) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x9d1a,	// (0x00034936) bg_vkb2_func_pane_g1

0x9d22,	// (0x0003493e) bg_vkb2_func_pane_g2

0x9d32,	// (0x0003494e) bg_vkb2_func_pane_g3

0x9d2a,	// (0x00034946) bg_vkb2_func_pane_g4

0x9d3a,	// (0x00034956) bg_vkb2_func_pane_g5

0x9d42,	// (0x0003495e) bg_vkb2_func_pane_g6

0x9d4a,	// (0x00034966) bg_vkb2_func_pane_g7

0x9d52,	// (0x0003496e) bg_vkb2_func_pane_g8

0x9d12,	// (0x0003492e) bg_vkb2_func_pane_g9

0x0008,

0xfdf0,	// (0x0003aa0c) bg_vkb2_func_pane_g

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp01_ParamLimits

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp01

0x704d,	// (0x00031c69) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x704d,	// (0x00031c69) vkb2_top_cell_right_wide_pane_g1

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp02_ParamLimits

0x66c6,	// (0x000312e2) bg_vkb2_fuc_pane_cp02

0x70ab,	// (0x00031cc7) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x70ab,	// (0x00031cc7) vkb2_top_cell_right_narrow_pane_g1

0xd838,	// (0x00038454) aid_touch_area_decrease_ParamLimits

0xd838,	// (0x00038454) aid_touch_area_decrease

0xd856,	// (0x00038472) aid_touch_area_increase_ParamLimits

0xd856,	// (0x00038472) aid_touch_area_increase

0xd862,	// (0x0003847e) aid_touch_area_mute_ParamLimits

0xd862,	// (0x0003847e) aid_touch_area_mute

0xd886,	// (0x000384a2) aid_touch_area_slider_ParamLimits

0xd886,	// (0x000384a2) aid_touch_area_slider

0xd972,	// (0x0003858e) popup_slider_window_g4_ParamLimits

0xd972,	// (0x0003858e) popup_slider_window_g4

0xd97e,	// (0x0003859a) popup_slider_window_g5_ParamLimits

0xd97e,	// (0x0003859a) popup_slider_window_g5

0xd9a0,	// (0x000385bc) popup_slider_window_g6_ParamLimits

0xd9a0,	// (0x000385bc) popup_slider_window_g6

0xd9e0,	// (0x000385fc) popup_slider_window_t2_ParamLimits

0xd9e0,	// (0x000385fc) popup_slider_window_t2

0x0001,

0xfcec,	// (0x0003a908) popup_slider_window_t_ParamLimits

0xfcec,	// (0x0003a908) popup_slider_window_t

0xd9f8,	// (0x00038614) slider_pane_ParamLimits

0xd9f8,	// (0x00038614) slider_pane

0xe70f,	// (0x0003932b) slider_pane_g1_ParamLimits

0xe70f,	// (0x0003932b) slider_pane_g1

0xe723,	// (0x0003933f) slider_pane_g2_ParamLimits

0xe723,	// (0x0003933f) slider_pane_g2

0xe739,	// (0x00039355) slider_pane_g3_ParamLimits

0xe739,	// (0x00039355) slider_pane_g3

0x0003,

0xfe03,	// (0x0003aa1f) slider_pane_g_ParamLimits

0xfe03,	// (0x0003aa1f) slider_pane_g

0x5fe0,	// (0x00030bfc) popup_tb_float_extension_window_ParamLimits

0x5fe0,	// (0x00030bfc) popup_tb_float_extension_window

0xe765,	// (0x00039381) aid_size_cell_tb_float_ext

0x7724,	// (0x00032340) bg_popup_sub_window_cp28

0xe771,	// (0x0003938d) grid_tb_float_ext_pane

0xe77b,	// (0x00039397) cell_tb_float_ext_pane_ParamLimits

0xe77b,	// (0x00039397) cell_tb_float_ext_pane

0xe795,	// (0x000393b1) cell_tb_float_ext_pane_g1

0xe79e,	// (0x000393ba) grid_highlight_pane_cp12

0x6815,	// (0x00031431) cell_last_hwr_side_pane_ParamLimits

0x6815,	// (0x00031431) cell_last_hwr_side_pane

0xc339,	// (0x00036f55) cell_last_hwr_side_pane_g1

0xe7a7,	// (0x000393c3) cell_last_hwr_side_pane_g2

0x0001,

0xfe0c,	// (0x0003aa28) cell_last_hwr_side_pane_g

0x6f73,	// (0x00031b8f) vkb2_area_bottom_space_btn_pane_ParamLimits

0x6f73,	// (0x00031b8f) vkb2_area_bottom_space_btn_pane

0x692b,	// (0x00031547) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe27b,	// (0x00038e97) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x7209,	// (0x00031e25) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7228,	// (0x00031e44) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7228,	// (0x00031e44) vkb2_area_bottom_space_btn_pane_g1

0x7262,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7262,	// (0x00031e7e) vkb2_area_bottom_space_btn_pane_g2

0x7298,	// (0x00031eb4) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7298,	// (0x00031eb4) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe11,	// (0x0003aa2d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe11,	// (0x0003aa2d) vkb2_area_bottom_space_btn_pane_g

0x6789,	// (0x000313a5) cel_fep_hwr_func_pane_ParamLimits

0x6789,	// (0x000313a5) cel_fep_hwr_func_pane

0x67c5,	// (0x000313e1) cell_hwr_side_button_pane_ParamLimits

0x67c5,	// (0x000313e1) cell_hwr_side_button_pane

0xdc36,	// (0x00038852) aid_area_touch_clock_ParamLimits

0x8252,	// (0x00032e6e) bg_uniindi_top_pane_ParamLimits

0xdc48,	// (0x00038864) uniindi_top_pane_g1_ParamLimits

0xdc5e,	// (0x0003887a) uniindi_top_pane_g2_ParamLimits

0xdc6a,	// (0x00038886) uniindi_top_pane_g3_ParamLimits

0xdc7b,	// (0x00038897) uniindi_top_pane_g4_ParamLimits

0xfd24,	// (0x0003a940) uniindi_top_pane_g_ParamLimits

0xdc88,	// (0x000388a4) uniindi_top_pane_t1_ParamLimits

0x8252,	// (0x00032e6e) bg_vkb2_func_pane_cp01_ParamLimits

0x8252,	// (0x00032e6e) bg_vkb2_func_pane_cp01

0xe7b0,	// (0x000393cc) cel_fep_hwr_func_pane_g1_ParamLimits

0xe7b0,	// (0x000393cc) cel_fep_hwr_func_pane_g1

0x8252,	// (0x00032e6e) bg_vkb2_func_pane_cp02_ParamLimits

0x8252,	// (0x00032e6e) bg_vkb2_func_pane_cp02

0xe7b0,	// (0x000393cc) cell_hwr_side_button_pane_g1_ParamLimits

0xe7b0,	// (0x000393cc) cell_hwr_side_button_pane_g1

0x9b93,	// (0x000347af) status_pane_g4_ParamLimits

0x9b93,	// (0x000347af) status_pane_g4

0x9bad,	// (0x000347c9) status_pane_t1

0xc073,	// (0x00036c8f) form2_midp_gauge_slider_cont_pane

0xc07b,	// (0x00036c97) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc08d,	// (0x00036ca9) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc09f,	// (0x00036cbb) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaeb,	// (0x0003a707) form2_midp_gauge_slider_pane_t_ParamLimits

0xc0b1,	// (0x00036ccd) form2_midp_slider_pane_ParamLimits

0x6be2,	// (0x000317fe) aid_size_cell_func_vkb2_ParamLimits

0x6be2,	// (0x000317fe) aid_size_cell_func_vkb2

0xe751,	// (0x0003936d) slider_pane_g4_ParamLimits

0xe751,	// (0x0003936d) slider_pane_g4

0x72e2,	// (0x00031efe) form2_midp_gauge_slider_pane_t2_cp01

0x72f0,	// (0x00031f0c) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x72f0,	// (0x00031f0c) form2_midp_gauge_slider_pane_t3_cp01

0x730d,	// (0x00031f29) form2_midp_slider_pane_cp01

0x7724,	// (0x00032340) navi_smil_pane

0xe7e9,	// (0x00039405) navi_smil_pane_g1

0xe7f1,	// (0x0003940d) navi_smil_pane_t1

0xe7be,	// (0x000393da) form2_midp_slider_pane_g1

0xe7c7,	// (0x000393e3) form2_midp_slider_pane_g2

0xe7cf,	// (0x000393eb) form2_midp_slider_pane_g3

0xe7be,	// (0x000393da) form2_midp_slider_pane_g4

0xe7d7,	// (0x000393f3) form2_midp_slider_pane_g5

0x0004,

0xfe1a,	// (0x0003aa36) form2_midp_slider_pane_g

0x72d2,	// (0x00031eee) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x72d2,	// (0x00031eee) vkb2_area_bottom_space_btn_pane_g4

0x99c2,	// (0x000345de) lc0_navi_pane_ParamLimits

0x99c2,	// (0x000345de) lc0_navi_pane

0x9a38,	// (0x00034654) lc0_stat_indi_pane_ParamLimits

0x9a38,	// (0x00034654) lc0_stat_indi_pane

0x9a4f,	// (0x0003466b) ls0_title_pane_ParamLimits

0x9a4f,	// (0x0003466b) ls0_title_pane

0x8838,	// (0x00033454) bg_popup_sub_pane_cp14_ParamLimits

0xdc1d,	// (0x00038839) list_uniindi_pane_ParamLimits

0xdc29,	// (0x00038845) uniindi_top_pane_ParamLimits

0xdcc5,	// (0x000388e1) list_single_uniindi_pane_g1_ParamLimits

0xdcd8,	// (0x000388f4) list_single_uniindi_pane_t1_ParamLimits

0x7316,	// (0x00031f32) lc0_stat_clock_pane_ParamLimits

0x7316,	// (0x00031f32) lc0_stat_clock_pane

0xe7ff,	// (0x0003941b) lc0_stat_indi_pane_g1_ParamLimits

0xe7ff,	// (0x0003941b) lc0_stat_indi_pane_g1

0xe80c,	// (0x00039428) lc0_stat_indi_pane_g2_ParamLimits

0xe80c,	// (0x00039428) lc0_stat_indi_pane_g2

0x0001,

0xfe25,	// (0x0003aa41) lc0_stat_indi_pane_g_ParamLimits

0xfe25,	// (0x0003aa41) lc0_stat_indi_pane_g

0x7323,	// (0x00031f3f) lc0_uni_indicator_pane_ParamLimits

0x7323,	// (0x00031f3f) lc0_uni_indicator_pane

0xe819,	// (0x00039435) ls0_title_pane_g1_ParamLimits

0xe819,	// (0x00039435) ls0_title_pane_g1

0xe82d,	// (0x00039449) ls0_title_pane_t1_ParamLimits

0xe82d,	// (0x00039449) ls0_title_pane_t1

0x7330,	// (0x00031f4c) lc0_uni_indicator_pane_g1_ParamLimits

0x7330,	// (0x00031f4c) lc0_uni_indicator_pane_g1

0xe863,	// (0x0003947f) lc0_stat_clock_pane_t1

0x4a84,	// (0x0002f6a0) main_ai5_pane

0xe871,	// (0x0003948d) ai5_sk_pane_ParamLimits

0xe871,	// (0x0003948d) ai5_sk_pane

0xe87e,	// (0x0003949a) cell_ai5_widget_pane_ParamLimits

0xe87e,	// (0x0003949a) cell_ai5_widget_pane

0xe934,	// (0x00039550) aid_size_cell_widget_grid

0xe94a,	// (0x00039566) bg_ai5_widget_pane_ParamLimits

0xe94a,	// (0x00039566) bg_ai5_widget_pane

0xe9be,	// (0x000395da) cell_ai5_widget_pane_g2

0xe9ce,	// (0x000395ea) cell_ai5_widget_pane_g3

0xe9e5,	// (0x00039601) cell_ai5_widget_pane_g4

0xe9f1,	// (0x0003960d) cell_ai5_widget_pane_g5

0xe9fd,	// (0x00039619) cell_ai5_widget_pane_g6

0xea09,	// (0x00039625) cell_ai5_widget_pane_g7

0xea51,	// (0x0003966d) cell_ai5_widget_pane_t1_ParamLimits

0xea51,	// (0x0003966d) cell_ai5_widget_pane_t1

0xea6e,	// (0x0003968a) cell_ai5_widget_pane_t2_ParamLimits

0xea6e,	// (0x0003968a) cell_ai5_widget_pane_t2

0xea86,	// (0x000396a2) cell_ai5_widget_pane_t3_ParamLimits

0xea86,	// (0x000396a2) cell_ai5_widget_pane_t3

0xea9e,	// (0x000396ba) cell_ai5_widget_pane_t4_ParamLimits

0xea9e,	// (0x000396ba) cell_ai5_widget_pane_t4

0xeabb,	// (0x000396d7) cell_ai5_widget_pane_t5_ParamLimits

0xeabb,	// (0x000396d7) cell_ai5_widget_pane_t5

0xeada,	// (0x000396f6) cell_ai5_widget_pane_t6_ParamLimits

0xeada,	// (0x000396f6) cell_ai5_widget_pane_t6

0xeaec,	// (0x00039708) cell_ai5_widget_pane_t7_ParamLimits

0xeaec,	// (0x00039708) cell_ai5_widget_pane_t7

0xeb05,	// (0x00039721) cell_ai5_widget_pane_t8_ParamLimits

0xeb05,	// (0x00039721) cell_ai5_widget_pane_t8

0x0009,

0xfe3f,	// (0x0003aa5b) cell_ai5_widget_pane_t_ParamLimits

0xfe3f,	// (0x0003aa5b) cell_ai5_widget_pane_t

0xeb59,	// (0x00039775) grid_ai5_widget_pane

0x8838,	// (0x00033454) highlight_cell_ai5_widget_pane_ParamLimits

0x8838,	// (0x00033454) highlight_cell_ai5_widget_pane

0xeb70,	// (0x0003978c) ai5_sk_left_pane

0xeb7a,	// (0x00039796) ai5_sk_middle_pane

0xeb84,	// (0x000397a0) ai5_sk_right_pane

0xeb8e,	// (0x000397aa) bg_ai5_widget_pane_g1_ParamLimits

0xeb8e,	// (0x000397aa) bg_ai5_widget_pane_g1

0xeb9a,	// (0x000397b6) bg_ai5_widget_pane_g2_ParamLimits

0xeb9a,	// (0x000397b6) bg_ai5_widget_pane_g2

0xeba6,	// (0x000397c2) bg_ai5_widget_pane_g3_ParamLimits

0xeba6,	// (0x000397c2) bg_ai5_widget_pane_g3

0xebb2,	// (0x000397ce) bg_ai5_widget_pane_g4_ParamLimits

0xebb2,	// (0x000397ce) bg_ai5_widget_pane_g4

0xebbe,	// (0x000397da) bg_ai5_widget_pane_g5_ParamLimits

0xebbe,	// (0x000397da) bg_ai5_widget_pane_g5

0xebca,	// (0x000397e6) bg_ai5_widget_pane_g6_ParamLimits

0xebca,	// (0x000397e6) bg_ai5_widget_pane_g6

0xebd6,	// (0x000397f2) bg_ai5_widget_pane_g7_ParamLimits

0xebd6,	// (0x000397f2) bg_ai5_widget_pane_g7

0xebe2,	// (0x000397fe) bg_ai5_widget_pane_g8_ParamLimits

0xebe2,	// (0x000397fe) bg_ai5_widget_pane_g8

0xebee,	// (0x0003980a) bg_ai5_widget_pane_g9_ParamLimits

0xebee,	// (0x0003980a) bg_ai5_widget_pane_g9

0x0008,

0xfe54,	// (0x0003aa70) bg_ai5_widget_pane_g_ParamLimits

0xfe54,	// (0x0003aa70) bg_ai5_widget_pane_g

0xec20,	// (0x0003983c) cell_shortcut_ai5_widget_pane_ParamLimits

0xec20,	// (0x0003983c) cell_shortcut_ai5_widget_pane

0x94ca,	// (0x000340e6) bg_cell_shortcut_ai5_widget_pane

0xec31,	// (0x0003984d) cell_grid_ai5_widget_pane_g1

0x94ca,	// (0x000340e6) highlight_cell_shortcut_ai5_widget_pane

0x9d1a,	// (0x00034936) ai5_sk_left_pane_g1

0xec3a,	// (0x00039856) ai5_sk_left_pane_g2

0xec42,	// (0x0003985e) ai5_sk_left_pane_g3

0xec4a,	// (0x00039866) ai5_sk_left_pane_g4

0x0003,

0xfe67,	// (0x0003aa83) ai5_sk_left_pane_g

0xec52,	// (0x0003986e) ai5_sk_left_pane_t1

0x9d22,	// (0x0003493e) ai5_sk_right_pane_g1

0xec60,	// (0x0003987c) ai5_sk_right_pane_g2

0xec68,	// (0x00039884) ai5_sk_right_pane_g3

0xec70,	// (0x0003988c) ai5_sk_right_pane_g4

0x0003,

0xfe70,	// (0x0003aa8c) ai5_sk_right_pane_g

0xec78,	// (0x00039894) ai5_sk_right_pane_t1

0x9d22,	// (0x0003493e) ai5_sk_middle_pane_g1

0x9d1a,	// (0x00034936) ai5_sk_middle_pane_g2

0x9d3a,	// (0x00034956) ai5_sk_middle_pane_g3

0xec68,	// (0x00039884) ai5_sk_middle_pane_g4

0xec42,	// (0x0003985e) ai5_sk_middle_pane_g5

0xec86,	// (0x000398a2) ai5_sk_middle_pane_g6

0xec8e,	// (0x000398aa) ai5_sk_middle_pane_g7

0x0006,

0xfe79,	// (0x0003aa95) ai5_sk_middle_pane_g

0x984e,	// (0x0003446a) aid_touch_area_size_lc0_ParamLimits

0x984e,	// (0x0003446a) aid_touch_area_size_lc0

0x695a,	// (0x00031576) cell_hwr_candidate_pane_t1_ParamLimits

0x986a,	// (0x00034486) aid_touch_navi_pane

0x9b3d,	// (0x00034759) status_dt_navi_pane_ParamLimits

0x9b3d,	// (0x00034759) status_dt_navi_pane

0x9b4a,	// (0x00034766) status_dt_sta_pane_ParamLimits

0x9b4a,	// (0x00034766) status_dt_sta_pane

0xec96,	// (0x000398b2) dt_sta_controll_pane

0xeca3,	// (0x000398bf) dt_sta_indi_pane

0xecb4,	// (0x000398d0) dt_sta_title_pane

0x8252,	// (0x00032e6e) bg_dt_sta_indi_pane_ParamLimits

0x8252,	// (0x00032e6e) bg_dt_sta_indi_pane

0xecc7,	// (0x000398e3) dt_sta_battery_pane

0xeccf,	// (0x000398eb) dt_sta_indi_pane_g1

0xecd8,	// (0x000398f4) dt_sta_indi_pane_g2

0xece1,	// (0x000398fd) dt_sta_indi_pane_g3

0x0002,

0xfe88,	// (0x0003aaa4) dt_sta_indi_pane_g

0xecea,	// (0x00039906) dt_sta_signal_pane

0x8838,	// (0x00033454) bg_dt_sta_title_pane_ParamLimits

0x8838,	// (0x00033454) bg_dt_sta_title_pane

0xecf3,	// (0x0003990f) dt_sta_title_pane_g1

0xecfb,	// (0x00039917) dt_sta_title_pane_t1_ParamLimits

0xecfb,	// (0x00039917) dt_sta_title_pane_t1

0x7724,	// (0x00032340) bg_dt_sta_control_pane

0xed10,	// (0x0003992c) dt_sta_controll_pane_g1

0xed19,	// (0x00039935) bg_dt_sta_title_pane_g1

0xed22,	// (0x0003993e) bg_dt_sta_title_pane_g2

0xed2b,	// (0x00039947) bg_dt_sta_title_pane_g3

0x0002,

0xfe8f,	// (0x0003aaab) bg_dt_sta_title_pane_g

0xc339,	// (0x00036f55) bg_dt_sta_indi_pane_g1

0xed34,	// (0x00039950) dt_sta_signal_pane_g1

0xed3c,	// (0x00039958) dt_sta_signal_pane_g2

0x0001,

0xfe96,	// (0x0003aab2) dt_sta_signal_pane_g

0xed44,	// (0x00039960) dt_sta_battery_pane_g1

0xed4d,	// (0x00039969) dt_sta_battery_pane_t1

0xc339,	// (0x00036f55) bg_dt_sta_control_pane_g1

0x8fc9,	// (0x00033be5) fep_china_uni_eep_pane

0x8fd1,	// (0x00033bed) fep_china_uni_entry_pane_ParamLimits

0x8fe1,	// (0x00033bfd) popup_fep_china_uni_window_g1_ParamLimits

0x8ff1,	// (0x00033c0d) popup_fep_china_uni_window_g2_ParamLimits

0x8ff1,	// (0x00033c0d) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0003a339) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0003a339) popup_fep_china_uni_window_g

0xed5c,	// (0x00039978) fep_china_uni_eep_pane_g1

0xed64,	// (0x00039980) fep_china_uni_eep_pane_t1

0xe7e0,	// (0x000393fc) aid_touch_area_size_smil_player

0x99ba,	// (0x000345d6) lc0_clock_pane

0x9ba1,	// (0x000347bd) status_pane_g5_ParamLimits

0x9ba1,	// (0x000347bd) status_pane_g5

0x5ca5,	// (0x000308c1) popup_keymap_window

0x9b5f,	// (0x0003477b) status_icon_pane

0xe9ce,	// (0x000395ea) cell_ai5_widget_pane_g3_ParamLimits

0xe9e5,	// (0x00039601) cell_ai5_widget_pane_g4_ParamLimits

0xe9f1,	// (0x0003960d) cell_ai5_widget_pane_g5_ParamLimits

0xea15,	// (0x00039631) cell_ai5_widget_pane_g8_ParamLimits

0xea15,	// (0x00039631) cell_ai5_widget_pane_g8

0xea29,	// (0x00039645) cell_ai5_widget_pane_g9_ParamLimits

0xea29,	// (0x00039645) cell_ai5_widget_pane_g9

0xea3d,	// (0x00039659) cell_ai5_widget_pane_g10_ParamLimits

0xea3d,	// (0x00039659) cell_ai5_widget_pane_g10

0xed73,	// (0x0003998f) status_icon_pane_g1

0x7724,	// (0x00032340) bg_popup_sub_pane_cp13

0xed7b,	// (0x00039997) popup_keymap_window_t1

0x9793,	// (0x000343af) control_pane_g6_ParamLimits

0x9793,	// (0x000343af) control_pane_g6

0x97a0,	// (0x000343bc) control_pane_g7_ParamLimits

0x97a0,	// (0x000343bc) control_pane_g7

0x97ad,	// (0x000343c9) control_pane_g8_ParamLimits

0x97ad,	// (0x000343c9) control_pane_g8

0xec96,	// (0x000398b2) dt_sta_controll_pane_ParamLimits

0xeca3,	// (0x000398bf) dt_sta_indi_pane_ParamLimits

0xecb4,	// (0x000398d0) dt_sta_title_pane_ParamLimits

0x8770,	// (0x0003338c) aid_size_touch_scroll_bar_cale

0x4b5d,	// (0x0002f779) popup_discreet_window_ParamLimits

0x4b5d,	// (0x0002f779) popup_discreet_window

0x4be5,	// (0x0002f801) popup_sk_window

0xa38b,	// (0x00034fa7) bg_popup_sub_pane_cp28_ParamLimits

0xa38b,	// (0x00034fa7) bg_popup_sub_pane_cp28

0xed89,	// (0x000399a5) popup_discreet_window_g1_ParamLimits

0xed89,	// (0x000399a5) popup_discreet_window_g1

0xeda9,	// (0x000399c5) popup_discreet_window_t1_ParamLimits

0xeda9,	// (0x000399c5) popup_discreet_window_t1

0xedc7,	// (0x000399e3) popup_discreet_window_t2_ParamLimits

0xedc7,	// (0x000399e3) popup_discreet_window_t2

0x0002,

0xfe9b,	// (0x0003aab7) popup_discreet_window_t_ParamLimits

0xfe9b,	// (0x0003aab7) popup_discreet_window_t

0x7344,	// (0x00031f60) popup_sk_window_g1

0x734e,	// (0x00031f6a) popup_sk_window_g2

0x0001,

0xfea2,	// (0x0003aabe) popup_sk_window_g

0x7358,	// (0x00031f74) popup_sk_window_t1

0x7366,	// (0x00031f82) popup_sk_window_t1_copy1

0xe9be,	// (0x000395da) cell_ai5_widget_pane_g2_ParamLimits

0xeb17,	// (0x00039733) cell_ai5_widget_pane_t9_ParamLimits

0xeb17,	// (0x00039733) cell_ai5_widget_pane_t9

0x7724,	// (0x00032340) main_fep_fshwr2_pane

0x7374,	// (0x00031f90) aid_fshwr2_btn_pane

0x7380,	// (0x00031f9c) aid_fshwr2_syb_pane

0x738c,	// (0x00031fa8) aid_fshwr2_txt_pane

0x7398,	// (0x00031fb4) fshwr2_func_candi_pane

0x73ad,	// (0x00031fc9) fshwr2_hwr_syb_pane

0x73bd,	// (0x00031fd9) fshwr2_icf_pane

0x4a84,	// (0x0002f6a0) fshwr2_icf_bg_pane

0x73e6,	// (0x00032002) fshwr2_icf_pane_t1_ParamLimits

0x73e6,	// (0x00032002) fshwr2_icf_pane_t1

0x8eb7,	// (0x00033ad3) fshwr2_func_candi_pane_g1

0xee19,	// (0x00039a35) fshwr2_func_candi_row_pane_ParamLimits

0xee19,	// (0x00039a35) fshwr2_func_candi_row_pane

0x73fe,	// (0x0003201a) cell_fshwr2_syb_pane_ParamLimits

0x73fe,	// (0x0003201a) cell_fshwr2_syb_pane

0x692b,	// (0x00031547) fshwr2_hwr_syb_pane_g1_ParamLimits

0x692b,	// (0x00031547) fshwr2_hwr_syb_pane_g1

0x4a84,	// (0x0002f6a0) bg_popup_call_pane_cp01

0x7414,	// (0x00032030) fshwr2_func_candi_cell_pane_ParamLimits

0x7414,	// (0x00032030) fshwr2_func_candi_cell_pane

0xee29,	// (0x00039a45) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xee29,	// (0x00039a45) fshwr2_func_candi_cell_bg_pane

0x7449,	// (0x00032065) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7449,	// (0x00032065) fshwr2_func_candi_cell_pane_g1

0x7471,	// (0x0003208d) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7471,	// (0x0003208d) fshwr2_func_candi_cell_pane_t1

0x4a84,	// (0x0002f6a0) bg_button_pane_cp08

0xee35,	// (0x00039a51) cell_fshwr2_syb_bg_pane

0x7484,	// (0x000320a0) cell_fshwr2_syb_bg_pane_g1

0x748c,	// (0x000320a8) cell_fshwr2_syb_bg_pane_t1

0x8838,	// (0x00033454) main_tmo_pane

0xaea6,	// (0x00035ac2) uni_indicator_pane_g1_ParamLimits

0xaebc,	// (0x00035ad8) uni_indicator_pane_g2_ParamLimits

0xaed2,	// (0x00035aee) uni_indicator_pane_g3_ParamLimits

0xaee6,	// (0x00035b02) uni_indicator_pane_g4_ParamLimits

0xaee6,	// (0x00035b02) uni_indicator_pane_g4

0xaefa,	// (0x00035b16) uni_indicator_pane_g5_ParamLimits

0xaefa,	// (0x00035b16) uni_indicator_pane_g5

0xaefa,	// (0x00035b16) uni_indicator_pane_g6_ParamLimits

0xaefa,	// (0x00035b16) uni_indicator_pane_g6

0xf921,	// (0x0003a53d) uni_indicator_pane_g_ParamLimits

0xd814,	// (0x00038430) popup_tmo_note_window_ParamLimits

0xd814,	// (0x00038430) popup_tmo_note_window

0x6bc4,	// (0x000317e0) fshwr2_bg_pane

0x7462,	// (0x0003207e) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7462,	// (0x0003207e) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea7,	// (0x0003aac3) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea7,	// (0x0003aac3) fshwr2_func_candi_cell_pane_g

0x6913,	// (0x0003152f) bg_popup_window_pane_cp01

0x749b,	// (0x000320b7) bg_popup_window_pane_g1_cp01

0xee3d,	// (0x00039a59) bg_popup_window_pane_cp22_ParamLimits

0xee3d,	// (0x00039a59) bg_popup_window_pane_cp22

0xee4b,	// (0x00039a67) listscroll_tmo_link_pane_ParamLimits

0xee4b,	// (0x00039a67) listscroll_tmo_link_pane

0xee8b,	// (0x00039aa7) popup_tmo_note_window_g1_ParamLimits

0xee8b,	// (0x00039aa7) popup_tmo_note_window_g1

0xee98,	// (0x00039ab4) tmo_note_info_pane_ParamLimits

0xee98,	// (0x00039ab4) tmo_note_info_pane

0xeeb2,	// (0x00039ace) list_tmo_note_info_pane_g1_ParamLimits

0xeeb2,	// (0x00039ace) list_tmo_note_info_pane_g1

0xeec9,	// (0x00039ae5) list_tmo_note_info_pane_g2_ParamLimits

0xeec9,	// (0x00039ae5) list_tmo_note_info_pane_g2

0x0001,

0xfeac,	// (0x0003aac8) list_tmo_note_info_pane_g_ParamLimits

0xfeac,	// (0x0003aac8) list_tmo_note_info_pane_g

0xeee5,	// (0x00039b01) list_tmo_note_info_text_pane_ParamLimits

0xeee5,	// (0x00039b01) list_tmo_note_info_text_pane

0xef66,	// (0x00039b82) list_tmo_link_pane

0xef73,	// (0x00039b8f) scroll_pane_cp20

0xef80,	// (0x00039b9c) list_single_tmo_link_pane_ParamLimits

0xef80,	// (0x00039b9c) list_single_tmo_link_pane

0xef90,	// (0x00039bac) list_single_tmo_link_pane_t1

0xef9e,	// (0x00039bba) list_tmo_note_info_text_pane_t1_ParamLimits

0xef9e,	// (0x00039bba) list_tmo_note_info_text_pane_t1

0x88f2,	// (0x0003350e) aid_size_touch_scroll_bar_cp01_ParamLimits

0x88f2,	// (0x0003350e) aid_size_touch_scroll_bar_cp01

0x5368,	// (0x0002ff84) aid_size_touch_slider_marker

0x4bcd,	// (0x0002f7e9) popup_settings_window_ParamLimits

0x4bcd,	// (0x0002f7e9) popup_settings_window

0x5b2a,	// (0x00030746) popup_candi_list_indi_window

0x986a,	// (0x00034486) aid_touch_navi_pane_ParamLimits

0x6b1f,	// (0x0003173b) rs_clock_indi_pane

0x6b28,	// (0x00031744) sctrl_sk_bottom_pane_ParamLimits

0x6b39,	// (0x00031755) sctrl_sk_top_pane_ParamLimits

0x6c3c,	// (0x00031858) popup_fep_tooltip_window

0xe934,	// (0x00039550) aid_size_cell_widget_grid_ParamLimits

0xe9a9,	// (0x000395c5) cell_ai5_widget_pane_g1_ParamLimits

0xe9a9,	// (0x000395c5) cell_ai5_widget_pane_g1

0xe9fd,	// (0x00039619) cell_ai5_widget_pane_g6_ParamLimits

0xea09,	// (0x00039625) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe2a,	// (0x0003aa46) cell_ai5_widget_pane_g_ParamLimits

0xfe2a,	// (0x0003aa46) cell_ai5_widget_pane_g

0xeb3b,	// (0x00039757) cell_ai5_widget_pane_t10_ParamLimits

0xeb3b,	// (0x00039757) cell_ai5_widget_pane_t10

0xeb59,	// (0x00039775) grid_ai5_widget_pane_ParamLimits

0xebfa,	// (0x00039816) cell_contacts_ai5_widget_pane_ParamLimits

0xebfa,	// (0x00039816) cell_contacts_ai5_widget_pane

0xeddc,	// (0x000399f8) popup_discreet_window_t3_ParamLimits

0xeddc,	// (0x000399f8) popup_discreet_window_t3

0x73d2,	// (0x00031fee) popup_fshwr2_char_preview_window_ParamLimits

0x73d2,	// (0x00031fee) popup_fshwr2_char_preview_window

0xef03,	// (0x00039b1f) tmo_note_info_pane_t1

0xef18,	// (0x00039b34) tmo_note_info_pane_t2

0xef2d,	// (0x00039b49) tmo_note_info_pane_t3

0xef42,	// (0x00039b5e) tmo_note_info_pane_t4

0xef54,	// (0x00039b70) tmo_note_info_pane_t5

0x0004,

0xfeb1,	// (0x0003aacd) tmo_note_info_pane_t

0xef66,	// (0x00039b82) list_tmo_link_pane_ParamLimits

0xef73,	// (0x00039b8f) scroll_pane_cp20_ParamLimits

0x4a84,	// (0x0002f6a0) bg_popup_fep_char_preview_window_cp01

0xefb7,	// (0x00039bd3) popup_fshwr2_char_preview_window_t1

0xefc5,	// (0x00039be1) popup_candi_list_indi_window_g1

0xefce,	// (0x00039bea) bg_cell_contacts_ai5_widget_pane

0xefda,	// (0x00039bf6) cell_contacts_ai5_widget_pane_g1

0xc9d7,	// (0x000375f3) cell_contacts_ai5_widget_pane_g2

0xefef,	// (0x00039c0b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfebc,	// (0x0003aad8) cell_contacts_ai5_widget_pane_g

0xeffb,	// (0x00039c17) cell_contacts_ai5_widget_pane_t1

0x8838,	// (0x00033454) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf072,	// (0x00039c8e) settings_container_pane

0x94ca,	// (0x000340e6) listscroll_set_pane_copy1

0xba22,	// (0x0003663e) scroll_pane_cp121_copy1

0xf07e,	// (0x00039c9a) set_content_pane_copy1

0xf086,	// (0x00039ca2) aid_height_set_list_copy1_ParamLimits

0xf086,	// (0x00039ca2) aid_height_set_list_copy1

0xb0f2,	// (0x00035d0e) aid_size_parent_copy1_ParamLimits

0xb0f2,	// (0x00035d0e) aid_size_parent_copy1

0xf092,	// (0x00039cae) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf092,	// (0x00039cae) button_value_adjust_pane_cp6_copy1

0x9808,	// (0x00034424) list_highlight_pane_cp2_copy1_ParamLimits

0x9808,	// (0x00034424) list_highlight_pane_cp2_copy1

0xf0a6,	// (0x00039cc2) list_set_pane_copy1_ParamLimits

0xf0a6,	// (0x00039cc2) list_set_pane_copy1

0xf00d,	// (0x00039c29) main_pane_set_t1_copy1_ParamLimits

0xf00d,	// (0x00039c29) main_pane_set_t1_copy1

0xf047,	// (0x00039c63) main_pane_set_t2_copy1_ParamLimits

0xf047,	// (0x00039c63) main_pane_set_t2_copy1

0xf153,	// (0x00039d6f) main_pane_set_t3_copy1

0xf161,	// (0x00039d7d) main_pane_set_t4_copy1

0xf066,	// (0x00039c82) set_content_pane_g1_copy1_ParamLimits

0xf066,	// (0x00039c82) set_content_pane_g1_copy1

0xf16f,	// (0x00039d8b) setting_code_pane_copy1

0xf177,	// (0x00039d93) setting_slider_graphic_pane_copy1

0xf177,	// (0x00039d93) setting_slider_pane_copy1

0xf177,	// (0x00039d93) setting_text_pane_copy1

0xf177,	// (0x00039d93) setting_volume_pane_copy1

0xf16f,	// (0x00039d8b) settings_code_pane_cp2_copy1

0xf17f,	// (0x00039d9b) settings_code_pane_cp_copy1_ParamLimits

0xf17f,	// (0x00039d9b) settings_code_pane_cp_copy1

0x74a4,	// (0x000320c0) volume_set_pane_copy1

0xf193,	// (0x00039daf) volume_set_pane_g10_copy1

0xf19b,	// (0x00039db7) volume_set_pane_g1_copy1

0xf1a3,	// (0x00039dbf) volume_set_pane_g2_copy1

0xf1ab,	// (0x00039dc7) volume_set_pane_g3_copy1

0xf1b3,	// (0x00039dcf) volume_set_pane_g4_copy1

0xf1bb,	// (0x00039dd7) volume_set_pane_g5_copy1

0xf1c3,	// (0x00039ddf) volume_set_pane_g6_copy1

0xf1cb,	// (0x00039de7) volume_set_pane_g7_copy1

0xf1d3,	// (0x00039def) volume_set_pane_g8_copy1

0xf1db,	// (0x00039df7) volume_set_pane_g9_copy1

0x7818,	// (0x00032434) bg_set_opt_pane_cp_copy1_ParamLimits

0x7818,	// (0x00032434) bg_set_opt_pane_cp_copy1

0x74ac,	// (0x000320c8) setting_slider_pane_t1_copy1_ParamLimits

0x74ac,	// (0x000320c8) setting_slider_pane_t1_copy1

0x74ca,	// (0x000320e6) setting_slider_pane_t2_copy1_ParamLimits

0x74ca,	// (0x000320e6) setting_slider_pane_t2_copy1

0x74e4,	// (0x00032100) setting_slider_pane_t3_copy1_ParamLimits

0x74e4,	// (0x00032100) setting_slider_pane_t3_copy1

0x74fc,	// (0x00032118) slider_set_pane_copy1_ParamLimits

0x74fc,	// (0x00032118) slider_set_pane_copy1

0x8893,	// (0x000334af) set_opt_bg_pane_g1_copy2

0x889b,	// (0x000334b7) set_opt_bg_pane_g2_copy2

0xf1e3,	// (0x00039dff) set_opt_bg_pane_g3_copy2

0x88ab,	// (0x000334c7) set_opt_bg_pane_g4_copy2

0x88b3,	// (0x000334cf) set_opt_bg_pane_g5_copy2

0x88bb,	// (0x000334d7) set_opt_bg_pane_g6_copy2

0xf1ed,	// (0x00039e09) set_opt_bg_pane_g7_copy2

0xf1f5,	// (0x00039e11) set_opt_bg_pane_g8_copy2

0xf1ff,	// (0x00039e1b) set_opt_bg_pane_g9_copy2

0x7512,	// (0x0003212e) aid_size_touch_slider_mark_copy1_ParamLimits

0x7512,	// (0x0003212e) aid_size_touch_slider_mark_copy1

0xf209,	// (0x00039e25) slider_set_pane_g1_copy1

0x7526,	// (0x00032142) slider_set_pane_g2_copy1

0x6526,	// (0x00031142) slider_set_pane_g3_copy1_ParamLimits

0x6526,	// (0x00031142) slider_set_pane_g3_copy1

0x653a,	// (0x00031156) slider_set_pane_g4_copy1_ParamLimits

0x653a,	// (0x00031156) slider_set_pane_g4_copy1

0x6552,	// (0x0003116e) slider_set_pane_g5_copy1_ParamLimits

0x6552,	// (0x0003116e) slider_set_pane_g5_copy1

0x6526,	// (0x00031142) slider_set_pane_g6_copy1_ParamLimits

0x6526,	// (0x00031142) slider_set_pane_g6_copy1

0x752e,	// (0x0003214a) slider_set_pane_g7_copy1_ParamLimits

0x752e,	// (0x0003214a) slider_set_pane_g7_copy1

0x7738,	// (0x00032354) bg_set_opt_pane_cp2_copy1

0xf212,	// (0x00039e2e) setting_slider_graphic_pane_g1_copy1

0xf21b,	// (0x00039e37) setting_slider_graphic_pane_t1_copy1

0xf22b,	// (0x00039e47) setting_slider_graphic_pane_t2_copy1

0xf23b,	// (0x00039e57) slider_set_pane_cp_copy1

0xf24b,	// (0x00039e67) input_focus_pane_cp1_copy1

0xf254,	// (0x00039e70) list_set_text_pane_copy1

0xf25c,	// (0x00039e78) setting_text_pane_g1_copy1

0x4d6e,	// (0x0002f98a) set_text_pane_t1_copy1

0xf24b,	// (0x00039e67) input_focus_pane_cp2_copy1

0xf25c,	// (0x00039e78) setting_code_pane_g1_copy1

0xf265,	// (0x00039e81) setting_code_pane_t1_copy1

0xf273,	// (0x00039e8f) list_set_graphic_pane_copy1

0x7738,	// (0x00032354) bg_set_opt_pane_cp4_copy1

0x91c5,	// (0x00033de1) list_set_graphic_pane_g1_copy1_ParamLimits

0x91c5,	// (0x00033de1) list_set_graphic_pane_g1_copy1

0xf285,	// (0x00039ea1) list_set_graphic_pane_g2_copy1

0x91dd,	// (0x00033df9) list_set_graphic_pane_t1_copy1_ParamLimits

0x91dd,	// (0x00033df9) list_set_graphic_pane_t1_copy1

0xc339,	// (0x00036f55) rs_clock_indi_pane_g1

0xf28d,	// (0x00039ea9) rs_clock_indi_pane_t1

0xf29b,	// (0x00039eb7) rs_indi_pane

0xf2a3,	// (0x00039ebf) rs_indi_pane_g1

0xf2ac,	// (0x00039ec8) rs_indi_pane_g2

0xf2b5,	// (0x00039ed1) rs_indi_pane_g3

0x0002,

0xfec3,	// (0x0003aadf) rs_indi_pane_g

0x94ca,	// (0x000340e6) bg_popup_preview_window_pane_cp03

0xf2be,	// (0x00039eda) popup_fep_tooltip_window_t1

0xcfb5,	// (0x00037bd1) popup_note2_window_g2_ParamLimits

0xcfb5,	// (0x00037bd1) popup_note2_window_g2

0x0001,

0xfc5c,	// (0x0003a878) popup_note2_window_g_ParamLimits

0xfc5c,	// (0x0003a878) popup_note2_window_g

0xd4b0,	// (0x000380cc) bg_popup_sub_pane_cp11_ParamLimits

0xd4bd,	// (0x000380d9) cell_ai3_links_pane_g1_ParamLimits

0xd4d4,	// (0x000380f0) cell_ai3_links_pane_t1

0x4d6e,	// (0x0002f98a) set_text_pane_t1_copy1_ParamLimits

0x93db,	// (0x00033ff7) cell_graphic_popup_pane_cp2_ParamLimits

0x93db,	// (0x00033ff7) cell_graphic_popup_pane_cp2

0xf2cc,	// (0x00039ee8) cell_graphic_popup_pane_g1_cp2

0x8583,	// (0x0003319f) cell_graphic_popup_pane_g2_cp2

0xf2d4,	// (0x00039ef0) cell_graphic_popup_pane_g3_cp2

0xf2dc,	// (0x00039ef8) cell_graphic_popup_pane_t2_cp2

0x8594,	// (0x000331b0) grid_highlight_pane_cp3_cp2

0x8bd8,	// (0x000337f4) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x8838,	// (0x00033454) main_tmo_pane_ParamLimits

0xd808,	// (0x00038424) popup_tmo_big_image_note_window

0xe998,	// (0x000395b4) cell_ai5_widget_list_pane

0xe9a0,	// (0x000395bc) cell_ai5_widget_lrg_icon_pane

0xef03,	// (0x00039b1f) tmo_note_info_pane_t1_ParamLimits

0xef18,	// (0x00039b34) tmo_note_info_pane_t2_ParamLimits

0xef2d,	// (0x00039b49) tmo_note_info_pane_t3_ParamLimits

0xef42,	// (0x00039b5e) tmo_note_info_pane_t4_ParamLimits

0xef54,	// (0x00039b70) tmo_note_info_pane_t5_ParamLimits

0xfeb1,	// (0x0003aacd) tmo_note_info_pane_t_ParamLimits

0xf072,	// (0x00039c8e) settings_container_pane_ParamLimits

0xf243,	// (0x00039e5f) indicator_popup_pane_cp5

0xf243,	// (0x00039e5f) indicator_popup_pane_cp6

0xf273,	// (0x00039e8f) list_set_graphic_pane_copy1_ParamLimits

0x7724,	// (0x00032340) bg_popup_window_pane_cp23

0xf2ea,	// (0x00039f06) popup_tmo_big_image_note_window_g1

0xf2f4,	// (0x00039f10) popup_tmo_big_image_note_window_t1

0xf304,	// (0x00039f20) popup_tmo_big_image_note_window_t2

0xf314,	// (0x00039f30) popup_tmo_big_image_note_window_t3

0x0002,

0xfeca,	// (0x0003aae6) popup_tmo_big_image_note_window_t

0xc339,	// (0x00036f55) cell_ai5_widget_lrg_icon_pane_g1

0xf324,	// (0x00039f40) cell_ai5_widget_lrg_icon_pane_t1

0xf332,	// (0x00039f4e) cell_ai5_widget_list_row_pane_ParamLimits

0xf332,	// (0x00039f4e) cell_ai5_widget_list_row_pane

0xf349,	// (0x00039f65) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf349,	// (0x00039f65) cell_ai5_widget_list_row_pane_g1

0xf356,	// (0x00039f72) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf356,	// (0x00039f72) cell_ai5_widget_list_row_pane_t1

0xf387,	// (0x00039fa3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf387,	// (0x00039fa3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfed1,	// (0x0003aaed) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfed1,	// (0x0003aaed) cell_ai5_widget_list_row_pane_t

0x4a84,	// (0x0002f6a0) main_fep_vtchi_ss_pane

0x7560,	// (0x0003217c) popup_fep_char_pre_window

0x7568,	// (0x00032184) popup_fep_ituss_window

0x7589,	// (0x000321a5) popup_fep_vkbss_window

0xf3af,	// (0x00039fcb) grid_vkbss_keypad_pane_ParamLimits

0xf3af,	// (0x00039fcb) grid_vkbss_keypad_pane

0xf3bf,	// (0x00039fdb) ituss_keypad_pane

0x75b4,	// (0x000321d0) aid_vkbss_key_offset_ParamLimits

0x75b4,	// (0x000321d0) aid_vkbss_key_offset

0x75c0,	// (0x000321dc) cell_vkbss_key_pane_ParamLimits

0x75c0,	// (0x000321dc) cell_vkbss_key_pane

0xf3ce,	// (0x00039fea) bg_cell_vkbss_key_g1_ParamLimits

0xf3ce,	// (0x00039fea) bg_cell_vkbss_key_g1

0xf3da,	// (0x00039ff6) cell_vkbss_key_3p_pane_ParamLimits

0xf3da,	// (0x00039ff6) cell_vkbss_key_3p_pane

0xf3f4,	// (0x0003a010) cell_vkbss_key_g1_ParamLimits

0xf3f4,	// (0x0003a010) cell_vkbss_key_g1

0xf40e,	// (0x0003a02a) cell_vkbss_key_t1_ParamLimits

0xf40e,	// (0x0003a02a) cell_vkbss_key_t1

0x75d6,	// (0x000321f2) cell_ituss_key_pane_ParamLimits

0x75d6,	// (0x000321f2) cell_ituss_key_pane

0xf439,	// (0x0003a055) bg_cell_ituss_key_g1_ParamLimits

0xf439,	// (0x0003a055) bg_cell_ituss_key_g1

0xf445,	// (0x0003a061) cell_ituss_key_pane_g1_ParamLimits

0xf445,	// (0x0003a061) cell_ituss_key_pane_g1

0x75e7,	// (0x00032203) cell_ituss_key_pane_g2_ParamLimits

0x75e7,	// (0x00032203) cell_ituss_key_pane_g2

0x0002,

0xfed8,	// (0x0003aaf4) cell_ituss_key_pane_g_ParamLimits

0xfed8,	// (0x0003aaf4) cell_ituss_key_pane_g

0x7613,	// (0x0003222f) cell_ituss_key_t1_ParamLimits

0x7613,	// (0x0003222f) cell_ituss_key_t1

0x764d,	// (0x00032269) cell_ituss_key_t2_ParamLimits

0x764d,	// (0x00032269) cell_ituss_key_t2

0x767e,	// (0x0003229a) cell_ituss_key_t3_ParamLimits

0x767e,	// (0x0003229a) cell_ituss_key_t3

0x764d,	// (0x00032269) cell_ituss_key_t4_ParamLimits

0x764d,	// (0x00032269) cell_ituss_key_t4

0x0004,

0xfedf,	// (0x0003aafb) cell_ituss_key_t_ParamLimits

0xfedf,	// (0x0003aafb) cell_ituss_key_t

0xf471,	// (0x0003a08d) cell_vkbss_key_3p_pane_g1

0xf479,	// (0x0003a095) cell_vkbss_key_3p_pane_g2

0xf481,	// (0x0003a09d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeea,	// (0x0003ab06) cell_vkbss_key_3p_pane_g

0x4a84,	// (0x0002f6a0) bg_popup_fep_char_preview_window_cp02

0x76c1,	// (0x000322dd) popup_fep_char_pre_window_t1

0xe92a,	// (0x00039546) main_ai5_sk_pane

0xefce,	// (0x00039bea) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xefda,	// (0x00039bf6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc9d7,	// (0x000375f3) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xefef,	// (0x00039c0b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfebc,	// (0x0003aad8) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeffb,	// (0x00039c17) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x8838,	// (0x00033454) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf489,	// (0x0003a0a5) main_ai5_sk_pane_g1

0xa1c4,	// (0x00034de0) popup_query_code_window_g1

0x757e,	// (0x0003219a) popup_fep_vkb_icf_pane

0x7592,	// (0x000321ae) popup_fep_vtchi_icf_pane

0xf492,	// (0x0003a0ae) bg_icf_pane

0xf49e,	// (0x0003a0ba) list_vkb_icf_pane

0xf4aa,	// (0x0003a0c6) bg_icf_pane_cp01

0xf4b6,	// (0x0003a0d2) vtchi_icf_list_pane

0xf4c7,	// (0x0003a0e3) list_vkb_icf_pane_t1_ParamLimits

0xf4c7,	// (0x0003a0e3) list_vkb_icf_pane_t1

0xf4dd,	// (0x0003a0f9) vtchi_icf_list_pane_t1_ParamLimits

0xf4dd,	// (0x0003a0f9) vtchi_icf_list_pane_t1

0x7568,	// (0x00032184) popup_fep_ituss_window_ParamLimits

0x7592,	// (0x000321ae) popup_fep_vtchi_icf_pane_ParamLimits

0xf3bf,	// (0x00039fdb) ituss_keypad_pane_ParamLimits

0x75a8,	// (0x000321c4) ituss_sks_pane

0xf492,	// (0x0003a0ae) bg_icf_pane_ParamLimits

0x7544,	// (0x00032160) icf_edit_indi_pane_ParamLimits

0x7544,	// (0x00032160) icf_edit_indi_pane

0xf49e,	// (0x0003a0ba) list_vkb_icf_pane_ParamLimits

0xf4aa,	// (0x0003a0c6) bg_icf_pane_cp01_ParamLimits

0x7553,	// (0x0003216f) icf_edit_indi_pane_cp01_ParamLimits

0x7553,	// (0x0003216f) icf_edit_indi_pane_cp01

0xf4be,	// (0x0003a0da) vtchi_query_pane

0x692b,	// (0x00031547) icf_edit_indi_pane_g1_ParamLimits

0x692b,	// (0x00031547) icf_edit_indi_pane_g1

0x76e3,	// (0x000322ff) icf_edit_indi_pane_g2_ParamLimits

0x76e3,	// (0x000322ff) icf_edit_indi_pane_g2

0x0001,

0xff02,	// (0x0003ab1e) icf_edit_indi_pane_g_ParamLimits

0xff02,	// (0x0003ab1e) icf_edit_indi_pane_g

0x76f2,	// (0x0003230e) icf_edit_indi_pane_t1

0xf4f7,	// (0x0003a113) bg_input_focus_pane_cp042

0x8767,	// (0x00033383) vtchi_button_pane

0xf500,	// (0x0003a11c) vtchi_query_pane_t1

0xf50e,	// (0x0003a12a) vtchi_query_pane_t2

0xf51c,	// (0x0003a138) vtchi_query_pane_t3

0x0002,

0xfef1,	// (0x0003ab0d) vtchi_query_pane_t

0x4a84,	// (0x0002f6a0) bg_button_pane_cp13

0xf52a,	// (0x0003a146) vtchi_button_pane_g1

0x76d0,	// (0x000322ec) ituss_sks_pane_g1

0x76db,	// (0x000322f7) ituss_sks_pane_g2

0x0001,

0xfef8,	// (0x0003ab14) ituss_sks_pane_g

0xf532,	// (0x0003a14e) ituss_sks_pane_t1

0xf540,	// (0x0003a15c) ituss_sks_pane_t2

0x0001,

0xfefd,	// (0x0003ab19) ituss_sks_pane_t

0xbd9c,	// (0x000369b8) indicator_nsta_pane_cp_g1

0xbda5,	// (0x000369c1) indicator_nsta_pane_cp_g2

0xbdad,	// (0x000369c9) indicator_nsta_pane_cp_g3

0xbdb5,	// (0x000369d1) indicator_nsta_pane_cp_g4

0xbdbd,	// (0x000369d9) indicator_nsta_pane_cp_g5

0xbdbd,	// (0x000369d9) indicator_nsta_pane_cp_g6

0x0005,

0xfaa1,	// (0x0003a6bd) indicator_nsta_pane_cp_g

0xe510,	// (0x0003912c) cell_graphic2_pane_t2_ParamLimits

0xe510,	// (0x0003912c) cell_graphic2_pane_t2

0x0001,

0xfdb3,	// (0x0003a9cf) cell_graphic2_pane_t_ParamLimits

0xfdb3,	// (0x0003a9cf) cell_graphic2_pane_t

0xe53d,	// (0x00039159) cell_graphic2_control_pane_t1

0x8f78,	// (0x00033b94) signal_pane_g3_ParamLimits

0x8f78,	// (0x00033b94) signal_pane_g3

0x8f8a,	// (0x00033ba6) signal_pane_g4_ParamLimits

0x8f8a,	// (0x00033ba6) signal_pane_g4

0xf399,	// (0x00039fb5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf399,	// (0x00039fb5) cell_ai5_widget_list_row_pane_t3

0xf45f,	// (0x0003a07b) cell_ituss_key_pane_t1_ParamLimits

0xf45f,	// (0x0003a07b) cell_ituss_key_pane_t1

0x9e17,	// (0x00034a33) form_field_data_wide_pane_vc_t2_ParamLimits

0x9e17,	// (0x00034a33) form_field_data_wide_pane_vc_t2

0x9e2b,	// (0x00034a47) form_field_data_wide_pane_vc_t3_ParamLimits

0x9e2b,	// (0x00034a47) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0003a425) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0003a425) form_field_data_wide_pane_vc_t

0xba64,	// (0x00036680) form_field_slider_wide_pane_vc_t3_ParamLimits

0xba64,	// (0x00036680) form_field_slider_wide_pane_vc_t3

0xbb42,	// (0x0003675e) form_field_popup_wide_pane_vc_t2_ParamLimits

0xbb42,	// (0x0003675e) form_field_popup_wide_pane_vc_t2

0xbb59,	// (0x00036775) form_field_popup_wide_pane_vc_t3_ParamLimits

0xbb59,	// (0x00036775) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa90,	// (0x0003a6ac) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa90,	// (0x0003a6ac) form_field_popup_wide_pane_vc_t

0x7374,	// (0x00031f90) aid_fshwr2_btn_pane_ParamLimits

0x7380,	// (0x00031f9c) aid_fshwr2_syb_pane_ParamLimits

0x738c,	// (0x00031fa8) aid_fshwr2_txt_pane_ParamLimits

0x6bc4,	// (0x000317e0) fshwr2_bg_pane_ParamLimits

0x7398,	// (0x00031fb4) fshwr2_func_candi_pane_ParamLimits

0x73ad,	// (0x00031fc9) fshwr2_hwr_syb_pane_ParamLimits

0x73bd,	// (0x00031fd9) fshwr2_icf_pane_ParamLimits

0x7d20,	// (0x0003293c) list_double_graphic_pane_vc_g4_ParamLimits

0x7d20,	// (0x0003293c) list_double_graphic_pane_vc_g4

0x7607,	// (0x00032223) cell_ituss_key_pane_g3_ParamLimits

0x7607,	// (0x00032223) cell_ituss_key_pane_g3

0x76af,	// (0x000322cb) cell_ituss_key_t5_ParamLimits

0x76af,	// (0x000322cb) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_php_av_qhd_prt_tch_Small

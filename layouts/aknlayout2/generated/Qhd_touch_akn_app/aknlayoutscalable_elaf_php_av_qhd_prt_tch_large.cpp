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

#include "aknlayoutscalable_elaf_php_av_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0003cf2f };

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
0x7b51,	// (0x00044a80) Screen

0x7b5d,	// (0x00044a8c) application_window_ParamLimits

0x7b5d,	// (0x00044a8c) application_window

0x26dc,	// (0x0003f60b) screen_g1

0x5429,	// (0x00042358) area_bottom_pane_ParamLimits

0x5429,	// (0x00042358) area_bottom_pane

0x54e9,	// (0x00042418) area_top_pane_ParamLimits

0x54e9,	// (0x00042418) area_top_pane

0x557d,	// (0x000424ac) main_pane_ParamLimits

0x557d,	// (0x000424ac) main_pane

0x7b6d,	// (0x00044a9c) misc_graphics

0x957b,	// (0x000464aa) battery_pane_ParamLimits

0x957b,	// (0x000464aa) battery_pane

0xa269,	// (0x00047198) bg_status_flat_pane_g8

0xa271,	// (0x000471a0) bg_status_flat_pane_g9

0x9643,	// (0x00046572) context_pane_ParamLimits

0x9643,	// (0x00046572) context_pane

0x9759,	// (0x00046688) navi_pane_ParamLimits

0x9759,	// (0x00046688) navi_pane

0x97dd,	// (0x0004670c) signal_pane_ParamLimits

0x97dd,	// (0x0004670c) signal_pane

0x0008,

0xf854,	// (0x0004c783) bg_status_flat_pane_g

0x984a,	// (0x00046779) status_pane_g1_ParamLimits

0x984a,	// (0x00046779) status_pane_g1

0x985e,	// (0x0004678d) status_pane_g2_ParamLimits

0x985e,	// (0x0004678d) status_pane_g2

0x986a,	// (0x00046799) status_pane_g3_ParamLimits

0x986a,	// (0x00046799) status_pane_g3

0x0004,

0xf780,	// (0x0004c6af) status_pane_g_ParamLimits

0xf780,	// (0x0004c6af) status_pane_g

0x989e,	// (0x000467cd) title_pane_ParamLimits

0x989e,	// (0x000467cd) title_pane

0x98db,	// (0x0004680a) uni_indicator_pane_ParamLimits

0x98db,	// (0x0004680a) uni_indicator_pane

0x94ab,	// (0x000463da) bg_list_pane_ParamLimits

0x94ab,	// (0x000463da) bg_list_pane

0x5ef5,	// (0x00042e24) find_pane

0x94cb,	// (0x000463fa) listscroll_app_pane_ParamLimits

0x94cb,	// (0x000463fa) listscroll_app_pane

0x94d7,	// (0x00046406) listscroll_form_pane

0x5efd,	// (0x00042e2c) listscroll_gen_pane_ParamLimits

0x5efd,	// (0x00042e2c) listscroll_gen_pane

0x5f11,	// (0x00042e40) listscroll_set_pane

0x86ce,	// (0x000455fd) main_idle_act_pane

0x91a7,	// (0x000460d6) main_idle_trad_pane

0x91a7,	// (0x000460d6) main_list_empty_pane

0x94cb,	// (0x000463fa) main_midp_pane

0x94f1,	// (0x00046420) main_pane_g1_ParamLimits

0x94f1,	// (0x00046420) main_pane_g1

0x5f19,	// (0x00042e48) popup_ai_message_window_ParamLimits

0x5f19,	// (0x00042e48) popup_ai_message_window

0x5fbf,	// (0x00042eee) popup_fep_china_uni_window_ParamLimits

0x5fbf,	// (0x00042eee) popup_fep_china_uni_window

0x601b,	// (0x00042f4a) popup_fep_japan_candidate_window_ParamLimits

0x601b,	// (0x00042f4a) popup_fep_japan_candidate_window

0x603b,	// (0x00042f6a) popup_fep_japan_predictive_window_ParamLimits

0x603b,	// (0x00042f6a) popup_fep_japan_predictive_window

0x606b,	// (0x00042f9a) popup_find_window

0x6078,	// (0x00042fa7) popup_grid_graphic_window_ParamLimits

0x6078,	// (0x00042fa7) popup_grid_graphic_window

0x60a4,	// (0x00042fd3) popup_large_graphic_colour_window

0x60ca,	// (0x00042ff9) popup_menu_window_ParamLimits

0x60ca,	// (0x00042ff9) popup_menu_window

0x6282,	// (0x000431b1) popup_note_image_window

0x626e,	// (0x0004319d) popup_note_wait_window_ParamLimits

0x626e,	// (0x0004319d) popup_note_wait_window

0x626e,	// (0x0004319d) popup_note_window_ParamLimits

0x626e,	// (0x0004319d) popup_note_window

0x62d8,	// (0x00043207) popup_query_code_window_ParamLimits

0x62d8,	// (0x00043207) popup_query_code_window

0x62ec,	// (0x0004321b) popup_query_data_code_window_ParamLimits

0x62ec,	// (0x0004321b) popup_query_data_code_window

0x6309,	// (0x00043238) popup_query_data_window_ParamLimits

0x6309,	// (0x00043238) popup_query_data_window

0x6325,	// (0x00043254) popup_query_sat_info_window_ParamLimits

0x6325,	// (0x00043254) popup_query_sat_info_window

0x635e,	// (0x0004328d) popup_snote_single_graphic_window_ParamLimits

0x635e,	// (0x0004328d) popup_snote_single_graphic_window

0x635e,	// (0x0004328d) popup_snote_single_text_window_ParamLimits

0x635e,	// (0x0004328d) popup_snote_single_text_window

0x6373,	// (0x000432a2) popup_sub_window_general

0x64a3,	// (0x000433d2) popup_window_general_ParamLimits

0x64a3,	// (0x000433d2) popup_window_general

0x94ff,	// (0x0004642e) power_save_pane

0x5d83,	// (0x00042cb2) control_pane_g1_ParamLimits

0x5d83,	// (0x00042cb2) control_pane_g1

0x5daa,	// (0x00042cd9) control_pane_g2_ParamLimits

0x5daa,	// (0x00042cd9) control_pane_g2

0x946e,	// (0x0004639d) control_pane_g3_ParamLimits

0x946e,	// (0x0004639d) control_pane_g3

0x0007,

0xf768,	// (0x0004c697) control_pane_g_ParamLimits

0xf768,	// (0x0004c697) control_pane_g

0x5df4,	// (0x00042d23) control_pane_t1_ParamLimits

0x5df4,	// (0x00042d23) control_pane_t1

0x5e4a,	// (0x00042d79) control_pane_t2_ParamLimits

0x5e4a,	// (0x00042d79) control_pane_t2

0x0002,

0xf779,	// (0x0004c6a8) control_pane_t_ParamLimits

0xf779,	// (0x0004c6a8) control_pane_t

0x9393,	// (0x000462c2) navi_navi_volume_pane_cp1

0x939b,	// (0x000462ca) status_small_icon_pane

0x93a3,	// (0x000462d2) status_small_pane_g1_ParamLimits

0x93a3,	// (0x000462d2) status_small_pane_g1

0x93d7,	// (0x00046306) status_small_pane_g2_ParamLimits

0x93d7,	// (0x00046306) status_small_pane_g2

0x93e3,	// (0x00046312) status_small_pane_g3_ParamLimits

0x93e3,	// (0x00046312) status_small_pane_g3

0x93ef,	// (0x0004631e) status_small_pane_g4_ParamLimits

0x93ef,	// (0x0004631e) status_small_pane_g4

0x93fb,	// (0x0004632a) status_small_pane_g5_ParamLimits

0x93fb,	// (0x0004632a) status_small_pane_g5

0x9409,	// (0x00046338) status_small_pane_g6_ParamLimits

0x9409,	// (0x00046338) status_small_pane_g6

0x0007,

0xf757,	// (0x0004c686) status_small_pane_g_ParamLimits

0xf757,	// (0x0004c686) status_small_pane_g

0x9438,	// (0x00046367) status_small_pane_t1

0x945a,	// (0x00046389) status_small_wait_pane_ParamLimits

0x945a,	// (0x00046389) status_small_wait_pane

0x8c0d,	// (0x00045b3c) aid_levels_signal_ParamLimits

0x8c0d,	// (0x00045b3c) aid_levels_signal

0x8c1f,	// (0x00045b4e) signal_pane_g1_ParamLimits

0x8c1f,	// (0x00045b4e) signal_pane_g1

0x8c34,	// (0x00045b63) signal_pane_g2_ParamLimits

0x8c34,	// (0x00045b63) signal_pane_g2

0x0003,

0xf6e8,	// (0x0004c617) signal_pane_g_ParamLimits

0xf6e8,	// (0x0004c617) signal_pane_g

0x8c6f,	// (0x00045b9e) context_pane_g1

0x7b77,	// (0x00044aa6) title_pane_g1

0x7bad,	// (0x00044adc) title_pane_t1

0x7c15,	// (0x00044b44) title_pane_t2

0x7c3b,	// (0x00044b6a) title_pane_t3

0x0002,

0xf532,	// (0x0004c461) title_pane_t

0x98f3,	// (0x00046822) aid_levels_battery_ParamLimits

0x98f3,	// (0x00046822) aid_levels_battery

0x9907,	// (0x00046836) battery_pane_g1_ParamLimits

0x9907,	// (0x00046836) battery_pane_g1

0x991d,	// (0x0004684c) battery_pane_g2_ParamLimits

0x991d,	// (0x0004684c) battery_pane_g2

0x0001,

0xf78b,	// (0x0004c6ba) battery_pane_g_ParamLimits

0xf78b,	// (0x0004c6ba) battery_pane_g

0xab9f,	// (0x00047ace) uni_indicator_pane_g1

0xabb5,	// (0x00047ae4) uni_indicator_pane_g2

0xabcb,	// (0x00047afa) uni_indicator_pane_g3

0x0005,

0xf8fc,	// (0x0004c82b) uni_indicator_pane_g

0x901c,	// (0x00045f4b) navi_icon_pane_ParamLimits

0x901c,	// (0x00045f4b) navi_icon_pane

0x8f5a,	// (0x00045e89) navi_midp_pane

0x9038,	// (0x00045f67) navi_navi_pane

0x9042,	// (0x00045f71) navi_text_pane_ParamLimits

0x9042,	// (0x00045f71) navi_text_pane

0x26dc,	// (0x0003f60b) status_small_wait_pane_g1

0x8090,	// (0x00044fbf) status_small_wait_pane_g2

0x0001,

0xf8f7,	// (0x0004c826) status_small_wait_pane_g

0xa8c4,	// (0x000477f3) navi_navi_icon_text_pane

0xa8cc,	// (0x000477fb) navi_navi_pane_g1_ParamLimits

0xa8cc,	// (0x000477fb) navi_navi_pane_g1

0xa8de,	// (0x0004780d) navi_navi_pane_g2_ParamLimits

0xa8de,	// (0x0004780d) navi_navi_pane_g2

0x0001,

0xf8c5,	// (0x0004c7f4) navi_navi_pane_g_ParamLimits

0xf8c5,	// (0x0004c7f4) navi_navi_pane_g

0xa8f0,	// (0x0004781f) navi_navi_tabs_pane

0xa8f9,	// (0x00047828) navi_navi_text_pane

0xa8c4,	// (0x000477f3) navi_navi_volume_pane

0xa8a0,	// (0x000477cf) navi_text_pane_t1

0xa894,	// (0x000477c3) navi_icon_pane_g1

0xa7e7,	// (0x00047716) navi_navi_text_pane_t1

0x675b,	// (0x0004368a) navi_navi_volume_pane_g1

0x6763,	// (0x00043692) volume_small_pane

0xa74d,	// (0x0004767c) navi_navi_icon_text_pane_g1

0xa755,	// (0x00047684) navi_navi_icon_text_pane_t1

0x9038,	// (0x00045f67) navi_tabs_2_long_pane

0x9038,	// (0x00045f67) navi_tabs_2_pane

0x9038,	// (0x00045f67) navi_tabs_3_long_pane

0x9038,	// (0x00045f67) navi_tabs_3_pane

0x9038,	// (0x00045f67) navi_tabs_4_pane

0x673b,	// (0x0004366a) tabs_2_active_pane_ParamLimits

0x673b,	// (0x0004366a) tabs_2_active_pane

0x674b,	// (0x0004367a) tabs_2_passive_pane_ParamLimits

0x674b,	// (0x0004367a) tabs_2_passive_pane

0x6709,	// (0x00043638) tabs_3_active_pane_ParamLimits

0x6709,	// (0x00043638) tabs_3_active_pane

0x6719,	// (0x00043648) tabs_3_passive_pane_ParamLimits

0x6719,	// (0x00043648) tabs_3_passive_pane

0x672a,	// (0x00043659) tabs_3_passive_pane_cp_ParamLimits

0x672a,	// (0x00043659) tabs_3_passive_pane_cp

0x66c5,	// (0x000435f4) tabs_4_active_pane_ParamLimits

0x66c5,	// (0x000435f4) tabs_4_active_pane

0x66d6,	// (0x00043605) tabs_4_passive_pane_ParamLimits

0x66d6,	// (0x00043605) tabs_4_passive_pane

0x66e7,	// (0x00043616) tabs_4_passive_pane_cp_ParamLimits

0x66e7,	// (0x00043616) tabs_4_passive_pane_cp

0x66f8,	// (0x00043627) tabs_4_passive_pane_cp2_ParamLimits

0x66f8,	// (0x00043627) tabs_4_passive_pane_cp2

0x66a1,	// (0x000435d0) tabs_2_long_active_pane_ParamLimits

0x66a1,	// (0x000435d0) tabs_2_long_active_pane

0x66b3,	// (0x000435e2) tabs_2_long_passive_pane_ParamLimits

0x66b3,	// (0x000435e2) tabs_2_long_passive_pane

0x6662,	// (0x00043591) tabs_3_long_active_pane_ParamLimits

0x6662,	// (0x00043591) tabs_3_long_active_pane

0x6675,	// (0x000435a4) tabs_3_long_passive_pane_ParamLimits

0x6675,	// (0x000435a4) tabs_3_long_passive_pane

0x668e,	// (0x000435bd) tabs_3_long_passive_pane_cp_ParamLimits

0x668e,	// (0x000435bd) tabs_3_long_passive_pane_cp

0x6608,	// (0x00043537) volume_small_pane_g1

0x6611,	// (0x00043540) volume_small_pane_g2

0x661a,	// (0x00043549) volume_small_pane_g3

0x6623,	// (0x00043552) volume_small_pane_g4

0x662c,	// (0x0004355b) volume_small_pane_g5

0x6635,	// (0x00043564) volume_small_pane_g6

0x663e,	// (0x0004356d) volume_small_pane_g7

0x6647,	// (0x00043576) volume_small_pane_g8

0x6650,	// (0x0004357f) volume_small_pane_g9

0x6659,	// (0x00043588) volume_small_pane_g10

0x0009,

0xf891,	// (0x0004c7c0) volume_small_pane_g

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp2_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp2

0x7c5b,	// (0x00044b8a) tabs_3_active_pane_g1

0x7c63,	// (0x00044b92) tabs_3_active_pane_t1

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp2_ParamLimits

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp2

0x7c5b,	// (0x00044b8a) tabs_3_passive_pane_g1

0x7c63,	// (0x00044b92) tabs_3_passive_pane_t1

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp3_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp3

0x7c75,	// (0x00044ba4) tabs_4_active_pane_g1

0x7c7d,	// (0x00044bac) tabs_4_active_pane_t1

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp3_ParamLimits

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp3

0x7c75,	// (0x00044ba4) tabs_4_1_passive_pane_g1

0x7c7d,	// (0x00044bac) tabs_4_1_passive_pane_t1

0x94cb,	// (0x000463fa) list_highlight_pane_cp2

0xae12,	// (0x00047d41) list_set_pane_ParamLimits

0xae12,	// (0x00047d41) list_set_pane

0xaeb8,	// (0x00047de7) main_pane_set_t1_ParamLimits

0xaeb8,	// (0x00047de7) main_pane_set_t1

0xaed8,	// (0x00047e07) main_pane_set_t2_ParamLimits

0xaed8,	// (0x00047e07) main_pane_set_t2

0xaeec,	// (0x00047e1b) main_pane_set_t3_ParamLimits

0xaeec,	// (0x00047e1b) main_pane_set_t3

0xaefe,	// (0x00047e2d) main_pane_set_t4_ParamLimits

0xaefe,	// (0x00047e2d) main_pane_set_t4

0x0003,

0xf961,	// (0x0004c890) main_pane_set_t_ParamLimits

0xf961,	// (0x0004c890) main_pane_set_t

0xaf10,	// (0x00047e3f) setting_code_pane

0xaf1c,	// (0x00047e4b) setting_slider_graphic_pane

0xaf1c,	// (0x00047e4b) setting_slider_pane

0xaf1c,	// (0x00047e4b) setting_text_pane

0xaf1c,	// (0x00047e4b) setting_volume_pane

0x57cc,	// (0x000426fb) volume_set_pane

0x7c4d,	// (0x00044b7c) bg_set_opt_pane_cp

0x57d4,	// (0x00042703) setting_slider_pane_t1

0x57ed,	// (0x0004271c) setting_slider_pane_t2

0x5807,	// (0x00042736) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0004c468) setting_slider_pane_t

0x581f,	// (0x0004274e) slider_set_pane

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp2

0x7c8f,	// (0x00044bbe) setting_slider_graphic_pane_g1

0x5835,	// (0x00042764) setting_slider_graphic_pane_t1

0x5845,	// (0x00042774) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0004c46f) setting_slider_graphic_pane_t

0x5855,	// (0x00042784) slider_set_pane_cp

0x7b6d,	// (0x00044a9c) input_focus_pane_cp1

0xadd1,	// (0x00047d00) list_set_text_pane

0x26dc,	// (0x0003f60b) setting_text_pane_g1

0x7b6d,	// (0x00044a9c) input_focus_pane_cp2

0x26dc,	// (0x0003f60b) setting_code_pane_g1

0x7c98,	// (0x00044bc7) setting_code_pane_t1

0x44ec,	// (0x0004141b) set_text_pane_t1_ParamLimits

0x44ec,	// (0x0004141b) set_text_pane_t1

0x8532,	// (0x00045461) set_opt_bg_pane_g1

0x853a,	// (0x00045469) set_opt_bg_pane_g2

0xadab,	// (0x00047cda) set_opt_bg_pane_g3

0x854a,	// (0x00045479) set_opt_bg_pane_g4

0x8552,	// (0x00045481) set_opt_bg_pane_g5

0x855a,	// (0x00045489) set_opt_bg_pane_g6

0xadb5,	// (0x00047ce4) set_opt_bg_pane_g7

0xadbd,	// (0x00047cec) set_opt_bg_pane_g8

0xadc7,	// (0x00047cf6) set_opt_bg_pane_g9

0x0008,

0xf94e,	// (0x0004c87d) set_opt_bg_pane_g

0xad9e,	// (0x00047ccd) slider_set_pane_g1

0x67d0,	// (0x000436ff) slider_set_pane_g2

0x0006,

0xf93f,	// (0x0004c86e) slider_set_pane_g

0x676c,	// (0x0004369b) volume_set_pane_g1

0x6774,	// (0x000436a3) volume_set_pane_g2

0x677c,	// (0x000436ab) volume_set_pane_g3

0x6784,	// (0x000436b3) volume_set_pane_g4

0x678c,	// (0x000436bb) volume_set_pane_g5

0x6794,	// (0x000436c3) volume_set_pane_g6

0x679c,	// (0x000436cb) volume_set_pane_g7

0x67a4,	// (0x000436d3) volume_set_pane_g8

0x67ac,	// (0x000436db) volume_set_pane_g9

0x67b4,	// (0x000436e3) volume_set_pane_g10

0x0009,

0xf917,	// (0x0004c846) volume_set_pane_g

0x7ca6,	// (0x00044bd5) indicator_pane_ParamLimits

0x7ca6,	// (0x00044bd5) indicator_pane

0x7cb2,	// (0x00044be1) main_idle_pane_g2_ParamLimits

0x7cb2,	// (0x00044be1) main_idle_pane_g2

0x7cda,	// (0x00044c09) main_pane_idle_g1_ParamLimits

0x7cda,	// (0x00044c09) main_pane_idle_g1

0x7ce7,	// (0x00044c16) popup_clock_digital_analogue_window_ParamLimits

0x7ce7,	// (0x00044c16) popup_clock_digital_analogue_window

0x7cfe,	// (0x00044c2d) soft_indicator_pane_ParamLimits

0x7cfe,	// (0x00044c2d) soft_indicator_pane

0x7d0a,	// (0x00044c39) wallpaper_pane_ParamLimits

0x7d0a,	// (0x00044c39) wallpaper_pane

0x26dc,	// (0x0003f60b) wallpaper_pane_g1

0x7d1e,	// (0x00044c4d) indicator_pane_g1_ParamLimits

0x7d1e,	// (0x00044c4d) indicator_pane_g1

0xb1ca,	// (0x000480f9) navi_navi_icon_text_pane_srt_g1

0x7d39,	// (0x00044c68) soft_indicator_pane_t1

0x7d53,	// (0x00044c82) aid_ps_area_pane

0x7d64,	// (0x00044c93) aid_ps_clock_pane

0x7d72,	// (0x00044ca1) aid_ps_indicator_pane

0x7d7e,	// (0x00044cad) indicator_ps_pane_ParamLimits

0x7d7e,	// (0x00044cad) indicator_ps_pane

0x7d8d,	// (0x00044cbc) power_save_pane_g1_ParamLimits

0x7d8d,	// (0x00044cbc) power_save_pane_g1

0x7d99,	// (0x00044cc8) power_save_pane_g2_ParamLimits

0x7d99,	// (0x00044cc8) power_save_pane_g2

0x53dd,	// (0x0004230c) aid_navinavi_width_pane

0x7d53,	// (0x00044c82) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0004c474) power_save_pane_g_ParamLimits

0xf545,	// (0x0004c474) power_save_pane_g

0x7da7,	// (0x00044cd6) power_save_pane_t1_ParamLimits

0x7da7,	// (0x00044cd6) power_save_pane_t1

0x7d64,	// (0x00044c93) aid_ps_clock_pane_ParamLimits

0x7d72,	// (0x00044ca1) aid_ps_indicator_pane_ParamLimits

0x7db9,	// (0x00044ce8) power_save_pane_t4_ParamLimits

0x7db9,	// (0x00044ce8) power_save_pane_t4

0x0001,

0xf54a,	// (0x0004c479) power_save_pane_t_ParamLimits

0xf54a,	// (0x0004c479) power_save_pane_t

0x7de3,	// (0x00044d12) power_save_t3_ParamLimits

0x7de3,	// (0x00044d12) power_save_t3

0x7dce,	// (0x00044cfd) power_save_t2_ParamLimits

0x7dce,	// (0x00044cfd) power_save_t2

0x7df8,	// (0x00044d27) indicator_ps_pane_g1

0x7e01,	// (0x00044d30) ai_gene_pane_ParamLimits

0x7e01,	// (0x00044d30) ai_gene_pane

0x7e0d,	// (0x00044d3c) ai_links_pane_ParamLimits

0x7e0d,	// (0x00044d3c) ai_links_pane

0x7e19,	// (0x00044d48) indicator_pane_cp1_ParamLimits

0x7e19,	// (0x00044d48) indicator_pane_cp1

0x7e25,	// (0x00044d54) main_pane_idle_g1_cp_ParamLimits

0x7e25,	// (0x00044d54) main_pane_idle_g1_cp

0x7e31,	// (0x00044d60) popup_ai_links_title_window

0x7e3a,	// (0x00044d69) soft_indicator_pane_cp1_ParamLimits

0x7e3a,	// (0x00044d69) soft_indicator_pane_cp1

0xab8d,	// (0x00047abc) ai_links_pane_g1

0xab96,	// (0x00047ac5) grid_ai_links_pane

0xab70,	// (0x00047a9f) ai_gene_pane_1

0xab7b,	// (0x00047aaa) ai_gene_pane_2

0xab84,	// (0x00047ab3) list_highlight_pane_cp4

0xab54,	// (0x00047a83) cell_ai_link_pane_ParamLimits

0xab54,	// (0x00047a83) cell_ai_link_pane

0xab4c,	// (0x00047a7b) cell_ai_link_pane_g1

0x8090,	// (0x00044fbf) cell_ai_link_pane_g2

0x0001,

0xf8f2,	// (0x0004c821) cell_ai_link_pane_g

0x7b6d,	// (0x00044a9c) grid_highlight_cp2

0x7b6d,	// (0x00044a9c) bg_popup_sub_pane_cp1

0x7e54,	// (0x00044d83) popup_ai_links_title_window_t1

0xaa9a,	// (0x000479c9) ai_gene_pane_1_g1_ParamLimits

0xaa9a,	// (0x000479c9) ai_gene_pane_1_g1

0xaaa6,	// (0x000479d5) ai_gene_pane_1_g2_ParamLimits

0xaaa6,	// (0x000479d5) ai_gene_pane_1_g2

0x0001,

0xf8e8,	// (0x0004c817) ai_gene_pane_1_g_ParamLimits

0xf8e8,	// (0x0004c817) ai_gene_pane_1_g

0xaab3,	// (0x000479e2) ai_gene_pane_1_t1_ParamLimits

0xaab3,	// (0x000479e2) ai_gene_pane_1_t1

0xaae7,	// (0x00047a16) grid_ai_soft_ind_pane

0xaa85,	// (0x000479b4) ai_gene_pane_2_t1_ParamLimits

0xaa85,	// (0x000479b4) ai_gene_pane_2_t1

0x7e63,	// (0x00044d92) main_pane_empty_t1_ParamLimits

0x7e63,	// (0x00044d92) main_pane_empty_t1

0x7e7b,	// (0x00044daa) main_pane_empty_t2_ParamLimits

0x7e7b,	// (0x00044daa) main_pane_empty_t2

0x7e90,	// (0x00044dbf) main_pane_empty_t3_ParamLimits

0x7e90,	// (0x00044dbf) main_pane_empty_t3

0x7ea2,	// (0x00044dd1) main_pane_empty_t4_ParamLimits

0x7ea2,	// (0x00044dd1) main_pane_empty_t4

0x7eb4,	// (0x00044de3) main_pane_empty_t5_ParamLimits

0x7eb4,	// (0x00044de3) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0004c47e) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0004c47e) main_pane_empty_t

0x85f9,	// (0x00045528) bg_popup_window_pane_ParamLimits

0x85f9,	// (0x00045528) bg_popup_window_pane

0xa7f5,	// (0x00047724) find_popup_pane_cp2_ParamLimits

0xa7f5,	// (0x00047724) find_popup_pane_cp2

0xa801,	// (0x00047730) heading_pane_ParamLimits

0xa801,	// (0x00047730) heading_pane

0x7b6d,	// (0x00044a9c) bg_popup_sub_pane

0xa76f,	// (0x0004769e) bg_popup_window_pane_g1_ParamLimits

0xa76f,	// (0x0004769e) bg_popup_window_pane_g1

0xa77b,	// (0x000476aa) bg_popup_window_pane_g2_ParamLimits

0xa77b,	// (0x000476aa) bg_popup_window_pane_g2

0xa787,	// (0x000476b6) bg_popup_window_pane_g3_ParamLimits

0xa787,	// (0x000476b6) bg_popup_window_pane_g3

0xa793,	// (0x000476c2) bg_popup_window_pane_g4_ParamLimits

0xa793,	// (0x000476c2) bg_popup_window_pane_g4

0xa79f,	// (0x000476ce) bg_popup_window_pane_g5_ParamLimits

0xa79f,	// (0x000476ce) bg_popup_window_pane_g5

0xa7ab,	// (0x000476da) bg_popup_window_pane_g6_ParamLimits

0xa7ab,	// (0x000476da) bg_popup_window_pane_g6

0xa7b7,	// (0x000476e6) bg_popup_window_pane_g7_ParamLimits

0xa7b7,	// (0x000476e6) bg_popup_window_pane_g7

0xa7c3,	// (0x000476f2) bg_popup_window_pane_g8_ParamLimits

0xa7c3,	// (0x000476f2) bg_popup_window_pane_g8

0xa7cf,	// (0x000476fe) bg_popup_window_pane_g9_ParamLimits

0xa7cf,	// (0x000476fe) bg_popup_window_pane_g9

0xa7db,	// (0x0004770a) bg_popup_window_pane_g10_ParamLimits

0xa7db,	// (0x0004770a) bg_popup_window_pane_g10

0x0009,

0xf8b0,	// (0x0004c7df) bg_popup_window_pane_g_ParamLimits

0xf8b0,	// (0x0004c7df) bg_popup_window_pane_g

0xa704,	// (0x00047633) bg_popup_heading_pane_ParamLimits

0xa704,	// (0x00047633) bg_popup_heading_pane

0x68cf,	// (0x000437fe) tabs_4_passive_pane_cp_srt_ParamLimits

0x68cf,	// (0x000437fe) tabs_4_passive_pane_cp_srt

0x68e1,	// (0x00043810) tabs_4_passive_pane_srt_ParamLimits

0xa718,	// (0x00047647) heading_pane_g2

0x68e1,	// (0x00043810) tabs_4_passive_pane_srt

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp3_srt_ParamLimits

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp3_srt

0xa720,	// (0x0004764f) heading_pane_t1_ParamLimits

0xa720,	// (0x0004764f) heading_pane_t1

0xa737,	// (0x00047666) heading_pane_t2_ParamLimits

0xa737,	// (0x00047666) heading_pane_t2

0x0001,

0xf8ab,	// (0x0004c7da) heading_pane_t_ParamLimits

0xf8ab,	// (0x0004c7da) heading_pane_t

0xa231,	// (0x00047160) bg_popup_heading_pane_g1

0xa2e0,	// (0x0004720f) bg_popup_heading_pane_g2

0xa2ea,	// (0x00047219) bg_popup_heading_pane_g3

0xa2f4,	// (0x00047223) bg_popup_heading_pane_g4

0xa2fe,	// (0x0004722d) bg_popup_heading_pane_g5

0xa308,	// (0x00047237) bg_popup_heading_pane_g6

0xa310,	// (0x0004723f) bg_popup_heading_pane_g7

0xa318,	// (0x00047247) bg_popup_heading_pane_g8

0xa322,	// (0x00047251) bg_popup_heading_pane_g9

0x0008,

0xf867,	// (0x0004c796) bg_popup_heading_pane_g

0x99f5,	// (0x00046924) bg_popup_sub_pane_g1

0x99fd,	// (0x0004692c) bg_popup_sub_pane_g2

0x9a05,	// (0x00046934) bg_popup_sub_pane_g3

0x9a0d,	// (0x0004693c) bg_popup_sub_pane_g4

0x9a15,	// (0x00046944) bg_popup_sub_pane_g5

0x9a1d,	// (0x0004694c) bg_popup_sub_pane_g6

0x9a25,	// (0x00046954) bg_popup_sub_pane_g7

0x9a2d,	// (0x0004695c) bg_popup_sub_pane_g8

0x9a35,	// (0x00046964) bg_popup_sub_pane_g9

0x0008,

0xf841,	// (0x0004c770) bg_popup_sub_pane_g

0x7ec8,	// (0x00044df7) bg_popup_window_pane_cp5_ParamLimits

0x7ec8,	// (0x00044df7) bg_popup_window_pane_cp5

0x7ee4,	// (0x00044e13) popup_note_window_g1_ParamLimits

0x7ee4,	// (0x00044e13) popup_note_window_g1

0x7ef0,	// (0x00044e1f) popup_note_window_t1_ParamLimits

0x7ef0,	// (0x00044e1f) popup_note_window_t1

0x7f06,	// (0x00044e35) popup_note_window_t2_ParamLimits

0x7f06,	// (0x00044e35) popup_note_window_t2

0x7f1c,	// (0x00044e4b) popup_note_window_t3_ParamLimits

0x7f1c,	// (0x00044e4b) popup_note_window_t3

0x7f32,	// (0x00044e61) popup_note_window_t4_ParamLimits

0x7f32,	// (0x00044e61) popup_note_window_t4

0x7f5a,	// (0x00044e89) popup_note_window_t5_ParamLimits

0x7f5a,	// (0x00044e89) popup_note_window_t5

0x0004,

0xf55a,	// (0x0004c489) popup_note_window_t_ParamLimits

0xf55a,	// (0x0004c489) popup_note_window_t

0x7fa4,	// (0x00044ed3) bg_popup_window_pane_cp6_ParamLimits

0x7fa4,	// (0x00044ed3) bg_popup_window_pane_cp6

0xa1ad,	// (0x000470dc) popup_note_image_window_g1_ParamLimits

0xa1ad,	// (0x000470dc) popup_note_image_window_g1

0xa1b9,	// (0x000470e8) popup_note_image_window_g2_ParamLimits

0xa1b9,	// (0x000470e8) popup_note_image_window_g2

0x0001,

0xf835,	// (0x0004c764) popup_note_image_window_g_ParamLimits

0xf835,	// (0x0004c764) popup_note_image_window_g

0xa1d2,	// (0x00047101) popup_note_image_window_t1_ParamLimits

0xa1d2,	// (0x00047101) popup_note_image_window_t1

0xa1eb,	// (0x0004711a) popup_note_image_window_t2_ParamLimits

0xa1eb,	// (0x0004711a) popup_note_image_window_t2

0xa204,	// (0x00047133) popup_note_image_window_t3_ParamLimits

0xa204,	// (0x00047133) popup_note_image_window_t3

0x0002,

0xf83a,	// (0x0004c769) popup_note_image_window_t_ParamLimits

0xf83a,	// (0x0004c769) popup_note_image_window_t

0xa06e,	// (0x00046f9d) bg_popup_window_pane_cp7_ParamLimits

0xa06e,	// (0x00046f9d) bg_popup_window_pane_cp7

0xa09e,	// (0x00046fcd) popup_note_wait_window_g1_ParamLimits

0xa09e,	// (0x00046fcd) popup_note_wait_window_g1

0xa0aa,	// (0x00046fd9) popup_note_wait_window_g2_ParamLimits

0xa0aa,	// (0x00046fd9) popup_note_wait_window_g2

0x0002,

0xf823,	// (0x0004c752) popup_note_wait_window_g_ParamLimits

0xf823,	// (0x0004c752) popup_note_wait_window_g

0xa0c2,	// (0x00046ff1) popup_note_wait_window_t1_ParamLimits

0xa0c2,	// (0x00046ff1) popup_note_wait_window_t1

0xa0e9,	// (0x00047018) popup_note_wait_window_t2_ParamLimits

0xa0e9,	// (0x00047018) popup_note_wait_window_t2

0xa106,	// (0x00047035) popup_note_wait_window_t3_ParamLimits

0xa106,	// (0x00047035) popup_note_wait_window_t3

0xa119,	// (0x00047048) popup_note_wait_window_t4_ParamLimits

0xa119,	// (0x00047048) popup_note_wait_window_t4

0x0004,

0xf82a,	// (0x0004c759) popup_note_wait_window_t_ParamLimits

0xf82a,	// (0x0004c759) popup_note_wait_window_t

0xa13e,	// (0x0004706d) wait_bar_pane_ParamLimits

0xa13e,	// (0x0004706d) wait_bar_pane

0x7b6d,	// (0x00044a9c) wait_anim_pane

0x7b6d,	// (0x00044a9c) wait_border_pane

0x26dc,	// (0x0003f60b) wait_anim_pane_g1

0x26dc,	// (0x0003f60b) wait_anim_pane_g2

0x0001,

0xf6e3,	// (0x0004c612) wait_anim_pane_g

0xa012,	// (0x00046f41) wait_border_pane_g1

0xa01d,	// (0x00046f4c) wait_border_pane_g2

0xa026,	// (0x00046f55) wait_border_pane_g3

0x0002,

0xf81c,	// (0x0004c74b) wait_border_pane_g

0x9e71,	// (0x00046da0) bg_popup_window_pane_cp16_ParamLimits

0x9e71,	// (0x00046da0) bg_popup_window_pane_cp16

0x9f7d,	// (0x00046eac) indicator_popup_pane_cp4_ParamLimits

0x9f7d,	// (0x00046eac) indicator_popup_pane_cp4

0x9f91,	// (0x00046ec0) popup_query_data_window_t1_ParamLimits

0x9f91,	// (0x00046ec0) popup_query_data_window_t1

0x9fa3,	// (0x00046ed2) popup_query_data_window_t2_ParamLimits

0x9fa3,	// (0x00046ed2) popup_query_data_window_t2

0x9fbc,	// (0x00046eeb) popup_query_data_window_t3_ParamLimits

0x9fbc,	// (0x00046eeb) popup_query_data_window_t3

0x0002,

0xf815,	// (0x0004c744) popup_query_data_window_t_ParamLimits

0xf815,	// (0x0004c744) popup_query_data_window_t

0x9fd6,	// (0x00046f05) query_popup_data_pane_ParamLimits

0x9fd6,	// (0x00046f05) query_popup_data_pane

0x9fea,	// (0x00046f19) query_popup_data_pane_cp1_ParamLimits

0x9fea,	// (0x00046f19) query_popup_data_pane_cp1

0x9e71,	// (0x00046da0) bg_popup_window_pane_cp10_ParamLimits

0x9e71,	// (0x00046da0) bg_popup_window_pane_cp10

0x9ea3,	// (0x00046dd2) indicator_popup_pane_ParamLimits

0x9ea3,	// (0x00046dd2) indicator_popup_pane

0x9ec5,	// (0x00046df4) popup_query_code_window_t1_ParamLimits

0x9ec5,	// (0x00046df4) popup_query_code_window_t1

0x9edf,	// (0x00046e0e) popup_query_code_window_t2_ParamLimits

0x9edf,	// (0x00046e0e) popup_query_code_window_t2

0x9f34,	// (0x00046e63) popup_query_code_window_t3_ParamLimits

0x9f34,	// (0x00046e63) popup_query_code_window_t3

0x0002,

0xf80e,	// (0x0004c73d) popup_query_code_window_t_ParamLimits

0xf80e,	// (0x0004c73d) popup_query_code_window_t

0x9f63,	// (0x00046e92) query_popup_pane_ParamLimits

0x9f63,	// (0x00046e92) query_popup_pane

0x7fa4,	// (0x00044ed3) bg_popup_window_pane_cp15_ParamLimits

0x7fa4,	// (0x00044ed3) bg_popup_window_pane_cp15

0x7fc2,	// (0x00044ef1) indicator_popup_pane_cp1_ParamLimits

0x7fc2,	// (0x00044ef1) indicator_popup_pane_cp1

0x7fd5,	// (0x00044f04) indicator_popup_pane_cp2_ParamLimits

0x7fd5,	// (0x00044f04) indicator_popup_pane_cp2

0x7fe8,	// (0x00044f17) popup_query_data_code_window_g1_ParamLimits

0x7fe8,	// (0x00044f17) popup_query_data_code_window_g1

0x7ffb,	// (0x00044f2a) popup_query_data_code_window_t1_ParamLimits

0x7ffb,	// (0x00044f2a) popup_query_data_code_window_t1

0x800d,	// (0x00044f3c) popup_query_data_code_window_t2_ParamLimits

0x800d,	// (0x00044f3c) popup_query_data_code_window_t2

0x801f,	// (0x00044f4e) popup_query_data_code_window_t3_ParamLimits

0x801f,	// (0x00044f4e) popup_query_data_code_window_t3

0x8035,	// (0x00044f64) popup_query_data_code_window_t4_ParamLimits

0x8035,	// (0x00044f64) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0004c494) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0004c494) popup_query_data_code_window_t

0x650d,	// (0x0004343c) list_single_midp_graphic_pane_g3

0x804d,	// (0x00044f7c) query_popup_data_pane_cp2_ParamLimits

0x8060,	// (0x00044f8f) query_popup_pane_cp2_ParamLimits

0x8060,	// (0x00044f8f) query_popup_pane_cp2

0x7b6d,	// (0x00044a9c) bg_popup_window_pane_cp11

0x9e55,	// (0x00046d84) heading_pane_cp5

0x9e5d,	// (0x00046d8c) listscroll_popup_info_pane

0x7b6d,	// (0x00044a9c) input_focus_pane_cp3

0x8073,	// (0x00044fa2) query_popup_pane_t1

0x8081,	// (0x00044fb0) list_popup_info_pane_ParamLimits

0x8081,	// (0x00044fb0) list_popup_info_pane

0x8090,	// (0x00044fbf) listscroll_popup_info_pane_g1

0x8098,	// (0x00044fc7) scroll_pane_cp7

0x80a2,	// (0x00044fd1) popup_info_list_pane_t1_ParamLimits

0x80a2,	// (0x00044fd1) popup_info_list_pane_t1

0x80bc,	// (0x00044feb) popup_info_list_pane_t2_ParamLimits

0x80bc,	// (0x00044feb) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0004c49d) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0004c49d) popup_info_list_pane_t

0x7b6d,	// (0x00044a9c) bg_popup_window_pane_cp12

0xb1e4,	// (0x00048113) find_popup_pane

0x7c4d,	// (0x00044b7c) bg_popup_window_pane_cp3

0x80d6,	// (0x00045005) heading_pane_cp3

0x80e5,	// (0x00045014) listscroll_popup_graphic_pane

0x7b6d,	// (0x00044a9c) bg_popup_window_pane_cp4

0x8145,	// (0x00045074) heading_pane_cp4

0x814f,	// (0x0004507e) listscroll_popup_colour_pane

0x8157,	// (0x00045086) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x8157,	// (0x00045086) cell_large_graphic_colour_none_popup_pane

0x816b,	// (0x0004509a) grid_large_graphic_colour_popup_pane_ParamLimits

0x816b,	// (0x0004509a) grid_large_graphic_colour_popup_pane

0x818f,	// (0x000450be) listscroll_popup_colour_pane_g1_ParamLimits

0x818f,	// (0x000450be) listscroll_popup_colour_pane_g1

0x81a6,	// (0x000450d5) listscroll_popup_colour_pane_g2_ParamLimits

0x81a6,	// (0x000450d5) listscroll_popup_colour_pane_g2

0x81bd,	// (0x000450ec) listscroll_popup_colour_pane_g3_ParamLimits

0x81bd,	// (0x000450ec) listscroll_popup_colour_pane_g3

0x81cd,	// (0x000450fc) listscroll_popup_colour_pane_g4_ParamLimits

0x81cd,	// (0x000450fc) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0004c4a2) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0004c4a2) listscroll_popup_colour_pane_g

0x81dd,	// (0x0004510c) scroll_pane_cp6_ParamLimits

0x81dd,	// (0x0004510c) scroll_pane_cp6

0x81ef,	// (0x0004511e) cell_large_graphic_colour_popup_pane_ParamLimits

0x81ef,	// (0x0004511e) cell_large_graphic_colour_popup_pane

0x820e,	// (0x0004513d) cell_large_graphic_colour_none_popup_pane_t1

0x7b6d,	// (0x00044a9c) grid_highlight_pane_cp5

0x821d,	// (0x0004514c) cell_large_graphic_colour_popup_pane_g1

0x8225,	// (0x00045154) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0004c4ab) cell_large_graphic_colour_popup_pane_g

0x822d,	// (0x0004515c) cell_large_graphic_colour_popup_pane_g2_copy1

0x8236,	// (0x00045165) grid_highlight_pane_cp4

0x823e,	// (0x0004516d) bg_popup_window_pane_cp8_ParamLimits

0x823e,	// (0x0004516d) bg_popup_window_pane_cp8

0x8259,	// (0x00045188) popup_snote_single_text_window_g1_ParamLimits

0x8259,	// (0x00045188) popup_snote_single_text_window_g1

0x826b,	// (0x0004519a) popup_snote_single_text_window_t1_ParamLimits

0x826b,	// (0x0004519a) popup_snote_single_text_window_t1

0x827e,	// (0x000451ad) popup_snote_single_text_window_t2_ParamLimits

0x827e,	// (0x000451ad) popup_snote_single_text_window_t2

0x8291,	// (0x000451c0) popup_snote_single_text_window_t3_ParamLimits

0x8291,	// (0x000451c0) popup_snote_single_text_window_t3

0x82ca,	// (0x000451f9) popup_snote_single_text_window_t4_ParamLimits

0x82ca,	// (0x000451f9) popup_snote_single_text_window_t4

0x82fe,	// (0x0004522d) popup_snote_single_text_window_t5_ParamLimits

0x82fe,	// (0x0004522d) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0004c4b0) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0004c4b0) popup_snote_single_text_window_t

0x832d,	// (0x0004525c) bg_popup_window_pane_cp9_ParamLimits

0x832d,	// (0x0004525c) bg_popup_window_pane_cp9

0x8259,	// (0x00045188) popup_snote_single_graphic_window_g1_ParamLimits

0x8259,	// (0x00045188) popup_snote_single_graphic_window_g1

0x833b,	// (0x0004526a) popup_snote_single_graphic_window_g2_ParamLimits

0x833b,	// (0x0004526a) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0004c4bb) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0004c4bb) popup_snote_single_graphic_window_g

0x8347,	// (0x00045276) popup_snote_single_graphic_window_t1_ParamLimits

0x8347,	// (0x00045276) popup_snote_single_graphic_window_t1

0x835a,	// (0x00045289) popup_snote_single_graphic_window_t2_ParamLimits

0x835a,	// (0x00045289) popup_snote_single_graphic_window_t2

0x836d,	// (0x0004529c) popup_snote_single_graphic_window_t3_ParamLimits

0x836d,	// (0x0004529c) popup_snote_single_graphic_window_t3

0x83a6,	// (0x000452d5) popup_snote_single_graphic_window_t4_ParamLimits

0x83a6,	// (0x000452d5) popup_snote_single_graphic_window_t4

0x83da,	// (0x00045309) popup_snote_single_graphic_window_t5_ParamLimits

0x83da,	// (0x00045309) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0004c4c0) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0004c4c0) popup_snote_single_graphic_window_t

0xb126,	// (0x00048055) grid_graphic_popup_pane_ParamLimits

0xb126,	// (0x00048055) grid_graphic_popup_pane

0xb150,	// (0x0004807f) listscroll_popup_graphic_pane_g1_ParamLimits

0xb150,	// (0x0004807f) listscroll_popup_graphic_pane_g1

0xb164,	// (0x00048093) listscroll_popup_graphic_pane_g2_ParamLimits

0xb164,	// (0x00048093) listscroll_popup_graphic_pane_g2

0x0001,

0xf98b,	// (0x0004c8ba) listscroll_popup_graphic_pane_g_ParamLimits

0xf98b,	// (0x0004c8ba) listscroll_popup_graphic_pane_g

0xb178,	// (0x000480a7) scroll_pane_cp5

0xb0b7,	// (0x00047fe6) cell_graphic_popup_pane_ParamLimits

0xb0b7,	// (0x00047fe6) cell_graphic_popup_pane

0xb098,	// (0x00047fc7) cell_graphic_popup_pane_g1

0xb0a0,	// (0x00047fcf) cell_graphic_popup_pane_g2

0x822d,	// (0x0004515c) cell_graphic_popup_pane_g3

0x0002,

0xf984,	// (0x0004c8b3) cell_graphic_popup_pane_g

0xb0a9,	// (0x00047fd8) cell_graphic_popup_pane_t2

0x8236,	// (0x00045165) grid_highlight_pane_cp3

0x841b,	// (0x0004534a) list_gen_pane_ParamLimits

0x841b,	// (0x0004534a) list_gen_pane

0x844d,	// (0x0004537c) scroll_pane

0xaff0,	// (0x00047f1f) bg_list_pane_g1_ParamLimits

0xaff0,	// (0x00047f1f) bg_list_pane_g1

0xb00d,	// (0x00047f3c) bg_list_pane_g2_ParamLimits

0xb00d,	// (0x00047f3c) bg_list_pane_g2

0xb022,	// (0x00047f51) bg_list_pane_g3_ParamLimits

0xb022,	// (0x00047f51) bg_list_pane_g3

0xb036,	// (0x00047f65) bg_list_pane_g4_ParamLimits

0xb036,	// (0x00047f65) bg_list_pane_g4

0xb04a,	// (0x00047f79) bg_list_pane_g5_ParamLimits

0xb04a,	// (0x00047f79) bg_list_pane_g5

0x0004,

0xf979,	// (0x0004c8a8) bg_list_pane_g_ParamLimits

0xf979,	// (0x0004c8a8) bg_list_pane_g

0x6834,	// (0x00043763) list_double2_graphic_large_graphic_pane_ParamLimits

0x6834,	// (0x00043763) list_double2_graphic_large_graphic_pane

0x6834,	// (0x00043763) list_double2_graphic_pane_ParamLimits

0x6834,	// (0x00043763) list_double2_graphic_pane

0x6834,	// (0x00043763) list_double2_large_graphic_pane_ParamLimits

0x6834,	// (0x00043763) list_double2_large_graphic_pane

0x6834,	// (0x00043763) list_double2_pane_ParamLimits

0x6834,	// (0x00043763) list_double2_pane

0x6834,	// (0x00043763) list_double_graphic_heading_pane_ParamLimits

0x6834,	// (0x00043763) list_double_graphic_heading_pane

0x6834,	// (0x00043763) list_double_graphic_pane_ParamLimits

0x6834,	// (0x00043763) list_double_graphic_pane

0x6834,	// (0x00043763) list_double_heading_pane_ParamLimits

0x6834,	// (0x00043763) list_double_heading_pane

0x6834,	// (0x00043763) list_double_large_graphic_pane_ParamLimits

0x6834,	// (0x00043763) list_double_large_graphic_pane

0x6834,	// (0x00043763) list_double_number_pane_ParamLimits

0x6834,	// (0x00043763) list_double_number_pane

0x6834,	// (0x00043763) list_double_pane_ParamLimits

0x6834,	// (0x00043763) list_double_pane

0x6834,	// (0x00043763) list_double_time_pane_ParamLimits

0x6834,	// (0x00043763) list_double_time_pane

0x6834,	// (0x00043763) list_setting_number_pane_ParamLimits

0x6834,	// (0x00043763) list_setting_number_pane

0x6834,	// (0x00043763) list_setting_pane_ParamLimits

0x6834,	// (0x00043763) list_setting_pane

0x686d,	// (0x0004379c) list_single_2graphic_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_2graphic_pane

0x686d,	// (0x0004379c) list_single_graphic_heading_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_graphic_heading_pane

0x686d,	// (0x0004379c) list_single_graphic_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_graphic_pane

0x686d,	// (0x0004379c) list_single_heading_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_heading_pane

0x4e4a,	// (0x00041d79) list_single_large_graphic_pane_ParamLimits

0x4e4a,	// (0x00041d79) list_single_large_graphic_pane

0x686d,	// (0x0004379c) list_single_number_heading_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_number_heading_pane

0x686d,	// (0x0004379c) list_single_number_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_number_pane

0x686d,	// (0x0004379c) list_single_pane_ParamLimits

0x686d,	// (0x0004379c) list_single_pane

0x7b6d,	// (0x00044a9c) list_highlight_pane_cp1

0x8d26,	// (0x00045c55) list_single_pane_g1_ParamLimits

0x8d26,	// (0x00045c55) list_single_pane_g1

0x585d,	// (0x0004278c) list_single_pane_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_pane_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_single_pane_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_single_pane_g

0x4e1c,	// (0x00041d4b) list_single_pane_t1_ParamLimits

0x4e1c,	// (0x00041d4b) list_single_pane_t1

0x8d26,	// (0x00045c55) list_single_number_pane_g1_ParamLimits

0x8d26,	// (0x00045c55) list_single_number_pane_g1

0x585d,	// (0x0004278c) list_single_number_pane_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_number_pane_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_single_number_pane_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_single_number_pane_g

0x4cf7,	// (0x00041c26) list_single_number_pane_t1_ParamLimits

0x4cf7,	// (0x00041c26) list_single_number_pane_t1

0x4dda,	// (0x00041d09) list_single_number_pane_t2_ParamLimits

0x4dda,	// (0x00041d09) list_single_number_pane_t2

0x0001,

0xf93a,	// (0x0004c869) list_single_number_pane_t_ParamLimits

0xf93a,	// (0x0004c869) list_single_number_pane_t

0x4505,	// (0x00041434) list_single_graphic_pane_g1_ParamLimits

0x4505,	// (0x00041434) list_single_graphic_pane_g1

0x8d26,	// (0x00045c55) list_single_graphic_pane_g2_ParamLimits

0x8d26,	// (0x00045c55) list_single_graphic_pane_g2

0x585d,	// (0x0004278c) list_single_graphic_pane_g3_ParamLimits

0x585d,	// (0x0004278c) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0004c4cb) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0004c4cb) list_single_graphic_pane_g

0x4511,	// (0x00041440) list_single_graphic_pane_t1_ParamLimits

0x4511,	// (0x00041440) list_single_graphic_pane_t1

0x4527,	// (0x00041456) list_single_heading_pane_g1_ParamLimits

0x4527,	// (0x00041456) list_single_heading_pane_g1

0x585d,	// (0x0004278c) list_single_heading_pane_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0004c4d2) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0004c4d2) list_single_heading_pane_g

0x453a,	// (0x00041469) list_single_heading_pane_t1_ParamLimits

0x453a,	// (0x00041469) list_single_heading_pane_t1

0x5869,	// (0x00042798) list_single_heading_pane_t2_ParamLimits

0x5869,	// (0x00042798) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0004c4d7) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0004c4d7) list_single_heading_pane_t

0x8d26,	// (0x00045c55) list_single_number_heading_pane_g1_ParamLimits

0x8d26,	// (0x00045c55) list_single_number_heading_pane_g1

0x585d,	// (0x0004278c) list_single_number_heading_pane_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_number_heading_pane_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_single_number_heading_pane_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_single_number_heading_pane_g

0x4550,	// (0x0004147f) list_single_number_heading_pane_t1_ParamLimits

0x4550,	// (0x0004147f) list_single_number_heading_pane_t1

0x4566,	// (0x00041495) list_single_number_heading_pane_t2_ParamLimits

0x4566,	// (0x00041495) list_single_number_heading_pane_t2

0x4578,	// (0x000414a7) list_single_number_heading_pane_t3_ParamLimits

0x4578,	// (0x000414a7) list_single_number_heading_pane_t3

0x0002,

0xf5b2,	// (0x0004c4e1) list_single_number_heading_pane_t_ParamLimits

0xf5b2,	// (0x0004c4e1) list_single_number_heading_pane_t

0x458a,	// (0x000414b9) list_single_graphic_heading_pane_g1_ParamLimits

0x458a,	// (0x000414b9) list_single_graphic_heading_pane_g1

0x587b,	// (0x000427aa) list_single_graphic_heading_pane_g4_ParamLimits

0x587b,	// (0x000427aa) list_single_graphic_heading_pane_g4

0x585d,	// (0x0004278c) list_single_graphic_heading_pane_g5_ParamLimits

0x585d,	// (0x0004278c) list_single_graphic_heading_pane_g5

0x0002,

0xf5b9,	// (0x0004c4e8) list_single_graphic_heading_pane_g_ParamLimits

0xf5b9,	// (0x0004c4e8) list_single_graphic_heading_pane_g

0x4550,	// (0x0004147f) list_single_graphic_heading_pane_t1_ParamLimits

0x4550,	// (0x0004147f) list_single_graphic_heading_pane_t1

0x45a2,	// (0x000414d1) list_single_graphic_heading_pane_t2_ParamLimits

0x45a2,	// (0x000414d1) list_single_graphic_heading_pane_t2

0x0001,

0xf5c0,	// (0x0004c4ef) list_single_graphic_heading_pane_t_ParamLimits

0xf5c0,	// (0x0004c4ef) list_single_graphic_heading_pane_t

0x45b8,	// (0x000414e7) list_single_large_graphic_pane_g1_ParamLimits

0x45b8,	// (0x000414e7) list_single_large_graphic_pane_g1

0x45c4,	// (0x000414f3) list_single_large_graphic_pane_g2_ParamLimits

0x45c4,	// (0x000414f3) list_single_large_graphic_pane_g2

0x45d0,	// (0x000414ff) list_single_large_graphic_pane_g3_ParamLimits

0x45d0,	// (0x000414ff) list_single_large_graphic_pane_g3

0x0002,

0xf5c5,	// (0x0004c4f4) list_single_large_graphic_pane_g_ParamLimits

0xf5c5,	// (0x0004c4f4) list_single_large_graphic_pane_g

0xa01d,	// (0x00046f4c) wait_border_pane_g2_copy1

0x45dc,	// (0x0004150b) list_single_large_graphic_pane_g4_cp2

0x45e4,	// (0x00041513) list_single_large_graphic_pane_t1_ParamLimits

0x45e4,	// (0x00041513) list_single_large_graphic_pane_t1

0x588c,	// (0x000427bb) list_double_pane_g1_ParamLimits

0x588c,	// (0x000427bb) list_double_pane_g1

0x5898,	// (0x000427c7) list_double_pane_g2_ParamLimits

0x5898,	// (0x000427c7) list_double_pane_g2

0x0001,

0xf5cc,	// (0x0004c4fb) list_double_pane_g_ParamLimits

0xf5cc,	// (0x0004c4fb) list_double_pane_g

0x45fa,	// (0x00041529) list_double_pane_t1_ParamLimits

0x45fa,	// (0x00041529) list_double_pane_t1

0x4610,	// (0x0004153f) list_double_pane_t2_ParamLimits

0x4610,	// (0x0004153f) list_double_pane_t2

0x0001,

0xf5d1,	// (0x0004c500) list_double_pane_t_ParamLimits

0xf5d1,	// (0x0004c500) list_double_pane_t

0x4622,	// (0x00041551) list_double2_pane_g1_ParamLimits

0x4622,	// (0x00041551) list_double2_pane_g1

0x4633,	// (0x00041562) list_double2_pane_g2_ParamLimits

0x4633,	// (0x00041562) list_double2_pane_g2

0x0001,

0xf5d6,	// (0x0004c505) list_double2_pane_g_ParamLimits

0xf5d6,	// (0x0004c505) list_double2_pane_g

0x463f,	// (0x0004156e) list_double2_pane_t1_ParamLimits

0x463f,	// (0x0004156e) list_double2_pane_t1

0x4655,	// (0x00041584) list_double2_pane_t2_ParamLimits

0x4655,	// (0x00041584) list_double2_pane_t2

0x0001,

0xf5db,	// (0x0004c50a) list_double2_pane_t_ParamLimits

0xf5db,	// (0x0004c50a) list_double2_pane_t

0x588c,	// (0x000427bb) list_double_number_pane_g1_ParamLimits

0x588c,	// (0x000427bb) list_double_number_pane_g1

0x5898,	// (0x000427c7) list_double_number_pane_g2_ParamLimits

0x5898,	// (0x000427c7) list_double_number_pane_g2

0x0001,

0xf5cc,	// (0x0004c4fb) list_double_number_pane_g_ParamLimits

0xf5cc,	// (0x0004c4fb) list_double_number_pane_g

0x4667,	// (0x00041596) list_double_number_pane_t1_ParamLimits

0x4667,	// (0x00041596) list_double_number_pane_t1

0x4679,	// (0x000415a8) list_double_number_pane_t2_ParamLimits

0x4679,	// (0x000415a8) list_double_number_pane_t2

0x468f,	// (0x000415be) list_double_number_pane_t3_ParamLimits

0x468f,	// (0x000415be) list_double_number_pane_t3

0x0002,

0xf5e0,	// (0x0004c50f) list_double_number_pane_t_ParamLimits

0xf5e0,	// (0x0004c50f) list_double_number_pane_t

0x46a1,	// (0x000415d0) list_double_graphic_pane_g1_ParamLimits

0x46a1,	// (0x000415d0) list_double_graphic_pane_g1

0x58a4,	// (0x000427d3) list_double_graphic_pane_g2_ParamLimits

0x58a4,	// (0x000427d3) list_double_graphic_pane_g2

0x58b3,	// (0x000427e2) list_double_graphic_pane_g3_ParamLimits

0x58b3,	// (0x000427e2) list_double_graphic_pane_g3

0x0003,

0xf5e7,	// (0x0004c516) list_double_graphic_pane_g_ParamLimits

0xf5e7,	// (0x0004c516) list_double_graphic_pane_g

0x46b9,	// (0x000415e8) list_double_graphic_pane_t1_ParamLimits

0x46b9,	// (0x000415e8) list_double_graphic_pane_t1

0x46cf,	// (0x000415fe) list_double_graphic_pane_t2_ParamLimits

0x46cf,	// (0x000415fe) list_double_graphic_pane_t2

0x0001,

0xf5f0,	// (0x0004c51f) list_double_graphic_pane_t_ParamLimits

0xf5f0,	// (0x0004c51f) list_double_graphic_pane_t

0x46e1,	// (0x00041610) list_double2_graphic_pane_g1_ParamLimits

0x46e1,	// (0x00041610) list_double2_graphic_pane_g1

0x8481,	// (0x000453b0) list_double2_graphic_pane_g2_ParamLimits

0x8481,	// (0x000453b0) list_double2_graphic_pane_g2

0x58bf,	// (0x000427ee) list_double2_graphic_pane_g3_ParamLimits

0x58bf,	// (0x000427ee) list_double2_graphic_pane_g3

0x0002,

0xf5f5,	// (0x0004c524) list_double2_graphic_pane_g_ParamLimits

0xf5f5,	// (0x0004c524) list_double2_graphic_pane_g

0x46ed,	// (0x0004161c) list_double2_graphic_pane_t1_ParamLimits

0x46ed,	// (0x0004161c) list_double2_graphic_pane_t1

0x4703,	// (0x00041632) list_double2_graphic_pane_t2_ParamLimits

0x4703,	// (0x00041632) list_double2_graphic_pane_t2

0x0001,

0xf5fc,	// (0x0004c52b) list_double2_graphic_pane_t_ParamLimits

0xf5fc,	// (0x0004c52b) list_double2_graphic_pane_t

0x4715,	// (0x00041644) list_double_large_graphic_pane_g1_ParamLimits

0x4715,	// (0x00041644) list_double_large_graphic_pane_g1

0x4728,	// (0x00041657) list_double_large_graphic_pane_g2_ParamLimits

0x4728,	// (0x00041657) list_double_large_graphic_pane_g2

0x5898,	// (0x000427c7) list_double_large_graphic_pane_g3_ParamLimits

0x5898,	// (0x000427c7) list_double_large_graphic_pane_g3

0x473e,	// (0x0004166d) list_double_large_graphic_pane_g4_ParamLimits

0x473e,	// (0x0004166d) list_double_large_graphic_pane_g4

0x0004,

0xf601,	// (0x0004c530) list_double_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0004c530) list_double_large_graphic_pane_g

0x474f,	// (0x0004167e) list_double_large_graphic_pane_t1_ParamLimits

0x474f,	// (0x0004167e) list_double_large_graphic_pane_t1

0x4768,	// (0x00041697) list_double_large_graphic_pane_t2_ParamLimits

0x4768,	// (0x00041697) list_double_large_graphic_pane_t2

0x0001,

0xf60c,	// (0x0004c53b) list_double_large_graphic_pane_t_ParamLimits

0xf60c,	// (0x0004c53b) list_double_large_graphic_pane_t

0x477a,	// (0x000416a9) list_double2_large_graphic_pane_g1_ParamLimits

0x477a,	// (0x000416a9) list_double2_large_graphic_pane_g1

0x4786,	// (0x000416b5) list_double2_large_graphic_pane_g2_ParamLimits

0x4786,	// (0x000416b5) list_double2_large_graphic_pane_g2

0x58bf,	// (0x000427ee) list_double2_large_graphic_pane_g3_ParamLimits

0x58bf,	// (0x000427ee) list_double2_large_graphic_pane_g3

0x0002,

0xf611,	// (0x0004c540) list_double2_large_graphic_pane_g_ParamLimits

0xf611,	// (0x0004c540) list_double2_large_graphic_pane_g

0x4797,	// (0x000416c6) list_double2_large_graphic_pane_t1_ParamLimits

0x4797,	// (0x000416c6) list_double2_large_graphic_pane_t1

0x47ad,	// (0x000416dc) list_double2_large_graphic_pane_t2_ParamLimits

0x47ad,	// (0x000416dc) list_double2_large_graphic_pane_t2

0x0001,

0xf618,	// (0x0004c547) list_double2_large_graphic_pane_t_ParamLimits

0xf618,	// (0x0004c547) list_double2_large_graphic_pane_t

0x47bf,	// (0x000416ee) list_double_heading_pane_g1_ParamLimits

0x47bf,	// (0x000416ee) list_double_heading_pane_g1

0x47d0,	// (0x000416ff) list_double_heading_pane_g2_ParamLimits

0x47d0,	// (0x000416ff) list_double_heading_pane_g2

0x0001,

0xf61d,	// (0x0004c54c) list_double_heading_pane_g_ParamLimits

0xf61d,	// (0x0004c54c) list_double_heading_pane_g

0x47dc,	// (0x0004170b) list_double_heading_pane_t1_ParamLimits

0x47dc,	// (0x0004170b) list_double_heading_pane_t1

0x4655,	// (0x00041584) list_double_heading_pane_t2_ParamLimits

0x4655,	// (0x00041584) list_double_heading_pane_t2

0x0001,

0xf622,	// (0x0004c551) list_double_heading_pane_t_ParamLimits

0xf622,	// (0x0004c551) list_double_heading_pane_t

0x47f2,	// (0x00041721) list_double_graphic_heading_pane_g1_ParamLimits

0x47f2,	// (0x00041721) list_double_graphic_heading_pane_g1

0x47bf,	// (0x000416ee) list_double_graphic_heading_pane_g2_ParamLimits

0x47bf,	// (0x000416ee) list_double_graphic_heading_pane_g2

0x47d0,	// (0x000416ff) list_double_graphic_heading_pane_g3_ParamLimits

0x47d0,	// (0x000416ff) list_double_graphic_heading_pane_g3

0x0002,

0xf627,	// (0x0004c556) list_double_graphic_heading_pane_g_ParamLimits

0xf627,	// (0x0004c556) list_double_graphic_heading_pane_g

0x47fe,	// (0x0004172d) list_double_graphic_heading_pane_t1_ParamLimits

0x47fe,	// (0x0004172d) list_double_graphic_heading_pane_t1

0x4703,	// (0x00041632) list_double_graphic_heading_pane_t2_ParamLimits

0x4703,	// (0x00041632) list_double_graphic_heading_pane_t2

0x0001,

0xf62e,	// (0x0004c55d) list_double_graphic_heading_pane_t_ParamLimits

0xf62e,	// (0x0004c55d) list_double_graphic_heading_pane_t

0x4814,	// (0x00041743) list_double_time_pane_g1_ParamLimits

0x4814,	// (0x00041743) list_double_time_pane_g1

0x4825,	// (0x00041754) list_double_time_pane_g2_ParamLimits

0x4825,	// (0x00041754) list_double_time_pane_g2

0x0001,

0xf633,	// (0x0004c562) list_double_time_pane_g_ParamLimits

0xf633,	// (0x0004c562) list_double_time_pane_g

0x4831,	// (0x00041760) list_double_time_pane_t1_ParamLimits

0x4831,	// (0x00041760) list_double_time_pane_t1

0x4847,	// (0x00041776) list_double_time_pane_t2_ParamLimits

0x4847,	// (0x00041776) list_double_time_pane_t2

0x4859,	// (0x00041788) list_double_time_pane_t3_ParamLimits

0x4859,	// (0x00041788) list_double_time_pane_t3

0x486b,	// (0x0004179a) list_double_time_pane_t4_ParamLimits

0x486b,	// (0x0004179a) list_double_time_pane_t4

0x0003,

0xf638,	// (0x0004c567) list_double_time_pane_t_ParamLimits

0xf638,	// (0x0004c567) list_double_time_pane_t

0x487d,	// (0x000417ac) list_setting_pane_g1_ParamLimits

0x487d,	// (0x000417ac) list_setting_pane_g1

0x4889,	// (0x000417b8) list_setting_pane_g2_ParamLimits

0x4889,	// (0x000417b8) list_setting_pane_g2

0x0001,

0xf641,	// (0x0004c570) list_setting_pane_g_ParamLimits

0xf641,	// (0x0004c570) list_setting_pane_g

0x4895,	// (0x000417c4) list_setting_pane_t1_ParamLimits

0x4895,	// (0x000417c4) list_setting_pane_t1

0x48af,	// (0x000417de) list_setting_pane_t2_ParamLimits

0x48af,	// (0x000417de) list_setting_pane_t2

0x0002,

0xf646,	// (0x0004c575) list_setting_pane_t_ParamLimits

0xf646,	// (0x0004c575) list_setting_pane_t

0x48ee,	// (0x0004181d) set_value_pane_cp_ParamLimits

0x48ee,	// (0x0004181d) set_value_pane_cp

0x48fa,	// (0x00041829) list_setting_number_pane_g1_ParamLimits

0x48fa,	// (0x00041829) list_setting_number_pane_g1

0x4906,	// (0x00041835) list_setting_number_pane_g2_ParamLimits

0x4906,	// (0x00041835) list_setting_number_pane_g2

0x0001,

0xf64d,	// (0x0004c57c) list_setting_number_pane_g_ParamLimits

0xf64d,	// (0x0004c57c) list_setting_number_pane_g

0x4912,	// (0x00041841) list_setting_number_pane_t1_ParamLimits

0x4912,	// (0x00041841) list_setting_number_pane_t1

0x492b,	// (0x0004185a) list_setting_number_pane_t2_ParamLimits

0x492b,	// (0x0004185a) list_setting_number_pane_t2

0x4945,	// (0x00041874) list_setting_number_pane_t3_ParamLimits

0x4945,	// (0x00041874) list_setting_number_pane_t3

0x0003,

0xf652,	// (0x0004c581) list_setting_number_pane_t_ParamLimits

0xf652,	// (0x0004c581) list_setting_number_pane_t

0x48ee,	// (0x0004181d) set_value_pane_ParamLimits

0x48ee,	// (0x0004181d) set_value_pane

0x848d,	// (0x000453bc) bg_set_opt_pane_ParamLimits

0x848d,	// (0x000453bc) bg_set_opt_pane

0x4988,	// (0x000418b7) set_value_pane_t1

0x84ae,	// (0x000453dd) slider_set_pane_cp3

0x84b7,	// (0x000453e6) volume_small_pane_cp

0x84c0,	// (0x000453ef) list_form_gen_pane

0x84c9,	// (0x000453f8) scroll_pane_cp8

0x499e,	// (0x000418cd) form_field_data_pane_ParamLimits

0x499e,	// (0x000418cd) form_field_data_pane

0x49c2,	// (0x000418f1) form_field_data_wide_pane_ParamLimits

0x49c2,	// (0x000418f1) form_field_data_wide_pane

0x49e5,	// (0x00041914) form_field_popup_pane_ParamLimits

0x49e5,	// (0x00041914) form_field_popup_pane

0x4a05,	// (0x00041934) form_field_popup_wide_pane_ParamLimits

0x4a05,	// (0x00041934) form_field_popup_wide_pane

0x4a24,	// (0x00041953) form_field_slider_pane_ParamLimits

0x4a24,	// (0x00041953) form_field_slider_pane

0x4a37,	// (0x00041966) form_field_slider_wide_pane_ParamLimits

0x4a37,	// (0x00041966) form_field_slider_wide_pane

0x84da,	// (0x00045409) data_form_pane

0x4a54,	// (0x00041983) form_field_data_pane_t1

0x84e6,	// (0x00045415) input_focus_pane

0x4a6c,	// (0x0004199b) data_form_wide_pane

0x4a89,	// (0x000419b8) form_field_data_wide_pane_t1

0x824b,	// (0x0004517a) input_focus_pane_cp6

0x4aab,	// (0x000419da) form_field_popup_pane_t1

0x84e6,	// (0x00045415) input_focus_pane_cp7

0x8508,	// (0x00045437) list_form_pane

0x4acb,	// (0x000419fa) form_field_popup_wide_pane_t1

0x84e6,	// (0x00045415) input_focus_pane_cp8

0x8514,	// (0x00045443) list_form_wide_pane

0x4ae8,	// (0x00041a17) form_field_slider_pane_t1_ParamLimits

0x4ae8,	// (0x00041a17) form_field_slider_pane_t1

0x4afe,	// (0x00041a2d) form_field_slider_pane_t2_ParamLimits

0x4afe,	// (0x00041a2d) form_field_slider_pane_t2

0x0001,

0xf662,	// (0x0004c591) form_field_slider_pane_t_ParamLimits

0xf662,	// (0x0004c591) form_field_slider_pane_t

0x7ec8,	// (0x00044df7) input_focus_pane_cp9_ParamLimits

0x7ec8,	// (0x00044df7) input_focus_pane_cp9

0x4b13,	// (0x00041a42) slider_cont_pane_ParamLimits

0x4b13,	// (0x00041a42) slider_cont_pane

0x8520,	// (0x0004544f) form_field_slider_wide_pane_t1_ParamLimits

0x8520,	// (0x0004544f) form_field_slider_wide_pane_t1

0x4b27,	// (0x00041a56) form_field_slider_wide_pane_t2_ParamLimits

0x4b27,	// (0x00041a56) form_field_slider_wide_pane_t2

0x0001,

0xf667,	// (0x0004c596) form_field_slider_wide_pane_t_ParamLimits

0xf667,	// (0x0004c596) form_field_slider_wide_pane_t

0x7ec8,	// (0x00044df7) input_focus_pane_cp10_ParamLimits

0x7ec8,	// (0x00044df7) input_focus_pane_cp10

0x4b39,	// (0x00041a68) slider_cont_pane_cp1_ParamLimits

0x4b39,	// (0x00041a68) slider_cont_pane_cp1

0x4b4d,	// (0x00041a7c) slider_form_pane_cp

0x8532,	// (0x00045461) input_focus_pane_g1

0x853a,	// (0x00045469) input_focus_pane_g2

0x8542,	// (0x00045471) input_focus_pane_g3

0x854a,	// (0x00045479) input_focus_pane_g4

0x8552,	// (0x00045481) input_focus_pane_g5

0x855a,	// (0x00045489) input_focus_pane_g6

0x8562,	// (0x00045491) input_focus_pane_g7

0x856a,	// (0x00045499) input_focus_pane_g8

0x8572,	// (0x000454a1) input_focus_pane_g9

0x26dc,	// (0x0003f60b) input_focus_pane_g10

0x0009,

0xf66c,	// (0x0004c59b) input_focus_pane_g

0xa026,	// (0x00046f55) wait_border_pane_g3_copy1

0x4b55,	// (0x00041a84) data_form_pane_t1

0x26dc,	// (0x0003f60b) wait_anim_pane_g1_copy1

0x4dec,	// (0x00041d1b) data_form_wide_pane_t1

0x4b70,	// (0x00041a9f) list_form_graphic_pane_cp_ParamLimits

0x4b70,	// (0x00041a9f) list_form_graphic_pane_cp

0xaf46,	// (0x00047e75) slider_form_pane_g1

0xaf4f,	// (0x00047e7e) slider_form_pane_g2

0x0006,

0xf96a,	// (0x0004c899) slider_form_pane_g

0x4b89,	// (0x00041ab8) list_form_graphic_pane_ParamLimits

0x4b89,	// (0x00041ab8) list_form_graphic_pane

0x4ba5,	// (0x00041ad4) list_form_graphic_pane_g1

0x4bad,	// (0x00041adc) list_form_graphic_pane_t1_ParamLimits

0x4bad,	// (0x00041adc) list_form_graphic_pane_t1

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp5_ParamLimits

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp5

0x4bc2,	// (0x00041af1) find_pane_g1

0x857a,	// (0x000454a9) input_find_pane

0x4bcb,	// (0x00041afa) input_find_pane_g1_ParamLimits

0x4bcb,	// (0x00041afa) input_find_pane_g1

0x4bd7,	// (0x00041b06) input_find_pane_t1_ParamLimits

0x4bd7,	// (0x00041b06) input_find_pane_t1

0x4bec,	// (0x00041b1b) input_find_pane_t2_ParamLimits

0x4bec,	// (0x00041b1b) input_find_pane_t2

0x0001,

0xf681,	// (0x0004c5b0) input_find_pane_t_ParamLimits

0xf681,	// (0x0004c5b0) input_find_pane_t

0x8583,	// (0x000454b2) input_focus_pane_cp5_ParamLimits

0x8583,	// (0x000454b2) input_focus_pane_cp5

0x85a2,	// (0x000454d1) bg_popup_window_pane_cp2_ParamLimits

0x85a2,	// (0x000454d1) bg_popup_window_pane_cp2

0x85af,	// (0x000454de) listscroll_menu_pane_ParamLimits

0x85af,	// (0x000454de) listscroll_menu_pane

0x85bb,	// (0x000454ea) popup_submenu_window_ParamLimits

0x85bb,	// (0x000454ea) popup_submenu_window

0x85e7,	// (0x00045516) find_popup_pane_g1

0x85ef,	// (0x0004551e) input_popup_find_pane_cp

0x85f9,	// (0x00045528) input_focus_pane_cp4_ParamLimits

0x85f9,	// (0x00045528) input_focus_pane_cp4

0x8613,	// (0x00045542) input_popup_find_pane_t1_ParamLimits

0x8613,	// (0x00045542) input_popup_find_pane_t1

0x7b6d,	// (0x00044a9c) bg_popup_sub_pane_cp

0x8641,	// (0x00045570) listscroll_popup_sub_pane

0x8649,	// (0x00045578) list_submenu_pane_ParamLimits

0x8649,	// (0x00045578) list_submenu_pane

0x865a,	// (0x00045589) scroll_pane_cp4

0x8662,	// (0x00045591) list_single_popup_submenu_pane_ParamLimits

0x8662,	// (0x00045591) list_single_popup_submenu_pane

0x8676,	// (0x000455a5) list_single_popup_submenu_pane_g1

0x867e,	// (0x000455ad) list_single_popup_submenu_pane_t1_ParamLimits

0x867e,	// (0x000455ad) list_single_popup_submenu_pane_t1

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp1_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp1

0x8693,	// (0x000455c2) tabs_2_active_pane_g1

0x869b,	// (0x000455ca) tabs_2_active_pane_t1

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp1_ParamLimits

0x7c4d,	// (0x00044b7c) bg_passive_tab_pane_cp1

0x8693,	// (0x000455c2) tabs_2_passive_pane_g1

0x869b,	// (0x000455ca) tabs_2_passive_pane_t1

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp4

0x86bb,	// (0x000455ea) tabs_2_long_active_pane_t1

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp4

0x6515,	// (0x00043444) list_single_midp_graphic_pane_g4_ParamLimits

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp5

0x86da,	// (0x00045609) tabs_3_long_active_pane_t1

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp5

0x6515,	// (0x00043444) list_single_midp_graphic_pane_g4

0x7c4d,	// (0x00044b7c) bg_popup_window_pane_cp13_ParamLimits

0x7c4d,	// (0x00044b7c) bg_popup_window_pane_cp13

0x86f5,	// (0x00045624) listscroll_popup_fast_pane_ParamLimits

0x86f5,	// (0x00045624) listscroll_popup_fast_pane

0x8704,	// (0x00045633) grid_popup_fast_pane_ParamLimits

0x8704,	// (0x00045633) grid_popup_fast_pane

0x8716,	// (0x00045645) scroll_pane_cp9_ParamLimits

0x8716,	// (0x00045645) scroll_pane_cp9

0xc863,	// (0x00049792) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xc863,	// (0x00049792) list_single_graphic_hl_pane_t1_cp2

0x873a,	// (0x00045669) input_focus_pane_cp20_ParamLimits

0x873a,	// (0x00045669) input_focus_pane_cp20

0x8748,	// (0x00045677) query_popup_data_pane_t1_ParamLimits

0x8748,	// (0x00045677) query_popup_data_pane_t1

0x875b,	// (0x0004568a) query_popup_data_pane_t2_ParamLimits

0x875b,	// (0x0004568a) query_popup_data_pane_t2

0x87a1,	// (0x000456d0) query_popup_data_pane_t3_ParamLimits

0x87a1,	// (0x000456d0) query_popup_data_pane_t3

0x87e2,	// (0x00045711) query_popup_data_pane_t4_ParamLimits

0x87e2,	// (0x00045711) query_popup_data_pane_t4

0x881e,	// (0x0004574d) query_popup_data_pane_t5_ParamLimits

0x881e,	// (0x0004574d) query_popup_data_pane_t5

0x0004,

0xf686,	// (0x0004c5b5) query_popup_data_pane_t_ParamLimits

0xf686,	// (0x0004c5b5) query_popup_data_pane_t

0x8532,	// (0x00045461) bg_set_opt_pane_g1

0x853a,	// (0x00045469) bg_set_opt_pane_g2

0x8542,	// (0x00045471) bg_set_opt_pane_g3

0x854a,	// (0x00045479) bg_set_opt_pane_g4

0x8552,	// (0x00045481) bg_set_opt_pane_g5

0x855a,	// (0x00045489) bg_set_opt_pane_g6

0x8562,	// (0x00045491) bg_set_opt_pane_g7

0x856a,	// (0x00045499) bg_set_opt_pane_g8

0x8572,	// (0x000454a1) bg_set_opt_pane_g9

0x0008,

0xf691,	// (0x0004c5c0) bg_set_opt_pane_g

0x5b99,	// (0x00042ac8) control_top_pane_stacon_ParamLimits

0x5b99,	// (0x00042ac8) control_top_pane_stacon

0x5bec,	// (0x00042b1b) signal_pane_stacon_ParamLimits

0x5bec,	// (0x00042b1b) signal_pane_stacon

0x8e35,	// (0x00045d64) stacon_top_pane_g1_ParamLimits

0x8e35,	// (0x00045d64) stacon_top_pane_g1

0x5c11,	// (0x00042b40) title_pane_stacon_ParamLimits

0x5c11,	// (0x00042b40) title_pane_stacon

0x5c3b,	// (0x00042b6a) uni_indicator_pane_stacon_ParamLimits

0x5c3b,	// (0x00042b6a) uni_indicator_pane_stacon

0x5c50,	// (0x00042b7f) battery_pane_stacon_ParamLimits

0x5c50,	// (0x00042b7f) battery_pane_stacon

0x5c94,	// (0x00042bc3) control_bottom_pane_stacon_ParamLimits

0x5c94,	// (0x00042bc3) control_bottom_pane_stacon

0x5cb7,	// (0x00042be6) navi_pane_stacon_ParamLimits

0x5cb7,	// (0x00042be6) navi_pane_stacon

0x8e57,	// (0x00045d86) stacon_bottom_pane_g1_ParamLimits

0x8e57,	// (0x00045d86) stacon_bottom_pane_g1

0x58e0,	// (0x0004280f) aid_levels_signal_lsc_ParamLimits

0x58e0,	// (0x0004280f) aid_levels_signal_lsc

0x58f6,	// (0x00042825) signal_pane_stacon_g1_ParamLimits

0x58f6,	// (0x00042825) signal_pane_stacon_g1

0x590a,	// (0x00042839) signal_pane_stacon_g2_ParamLimits

0x590a,	// (0x00042839) signal_pane_stacon_g2

0x0001,

0xf6a4,	// (0x0004c5d3) signal_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0004c5d3) signal_pane_stacon_g

0x593f,	// (0x0004286e) title_pane_stacon_t1_ParamLimits

0x593f,	// (0x0004286e) title_pane_stacon_t1

0x8862,	// (0x00045791) uni_indicator_pane_stacon_g1

0x886c,	// (0x0004579b) uni_indicator_pane_stacon_g2

0x8876,	// (0x000457a5) uni_indicator_pane_stacon_g3

0x8880,	// (0x000457af) uni_indicator_pane_stacon_g4

0x0003,

0xf6b0,	// (0x0004c5df) uni_indicator_pane_stacon_g

0x5964,	// (0x00042893) control_top_pane_stacon_g1

0x596c,	// (0x0004289b) control_top_pane_stacon_t1_ParamLimits

0x596c,	// (0x0004289b) control_top_pane_stacon_t1

0x59a3,	// (0x000428d2) aid_levels_battery_lsc_ParamLimits

0x59a3,	// (0x000428d2) aid_levels_battery_lsc

0x59ba,	// (0x000428e9) battery_pane_stacon_g1_ParamLimits

0x59ba,	// (0x000428e9) battery_pane_stacon_g1

0x59cd,	// (0x000428fc) battery_pane_stacon_g2_ParamLimits

0x59cd,	// (0x000428fc) battery_pane_stacon_g2

0x0001,

0xf6b9,	// (0x0004c5e8) battery_pane_stacon_g_ParamLimits

0xf6b9,	// (0x0004c5e8) battery_pane_stacon_g

0x5a0b,	// (0x0004293a) navi_icon_pane_stacon

0x5a1f,	// (0x0004294e) navi_navi_pane_stacon

0x5a0b,	// (0x0004293a) navi_text_pane_stacon

0x5964,	// (0x00042893) control_bottom_pane_stacon_g1

0x5a33,	// (0x00042962) control_bottom_pane_stacon_t1_ParamLimits

0x5a33,	// (0x00042962) control_bottom_pane_stacon_t1

0x88a4,	// (0x000457d3) grid_app_pane_ParamLimits

0x88a4,	// (0x000457d3) grid_app_pane

0x88c6,	// (0x000457f5) scroll_pane_cp15_ParamLimits

0x88c6,	// (0x000457f5) scroll_pane_cp15

0x88d9,	// (0x00045808) cell_app_pane_ParamLimits

0x88d9,	// (0x00045808) cell_app_pane

0x8901,	// (0x00045830) cell_app_pane_g1_ParamLimits

0x8901,	// (0x00045830) cell_app_pane_g1

0x8925,	// (0x00045854) cell_app_pane_g2_ParamLimits

0x8925,	// (0x00045854) cell_app_pane_g2

0x0001,

0xf6be,	// (0x0004c5ed) cell_app_pane_g_ParamLimits

0xf6be,	// (0x0004c5ed) cell_app_pane_g

0x8931,	// (0x00045860) cell_app_pane_t1_ParamLimits

0x8931,	// (0x00045860) cell_app_pane_t1

0x8948,	// (0x00045877) grid_highlight_pane_ParamLimits

0x8948,	// (0x00045877) grid_highlight_pane

0x8532,	// (0x00045461) cell_highlight_pane_g1

0x853a,	// (0x00045469) cell_highlight_pane_g2

0x8542,	// (0x00045471) cell_highlight_pane_g3

0x854a,	// (0x00045479) cell_highlight_pane_g4

0x8552,	// (0x00045481) cell_highlight_pane_g5

0x855a,	// (0x00045489) cell_highlight_pane_g6

0x8562,	// (0x00045491) cell_highlight_pane_g7

0x856a,	// (0x00045499) cell_highlight_pane_g8

0x8572,	// (0x000454a1) cell_highlight_pane_g9

0x26dc,	// (0x0003f60b) cell_highlight_pane_g10

0x0009,

0xf66c,	// (0x0004c59b) cell_highlight_pane_g

0x8959,	// (0x00045888) bg_scroll_pane

0x5a7d,	// (0x000429ac) scroll_handle_pane

0x89a0,	// (0x000458cf) scroll_bg_pane_g1

0x89b5,	// (0x000458e4) scroll_bg_pane_g2

0x89cd,	// (0x000458fc) scroll_bg_pane_g3

0x0002,

0xf6c3,	// (0x0004c5f2) scroll_bg_pane_g

0x89e2,	// (0x00045911) scroll_handle_focus_pane_ParamLimits

0x89e2,	// (0x00045911) scroll_handle_focus_pane

0x89a0,	// (0x000458cf) scroll_handle_pane_g1

0x89ef,	// (0x0004591e) scroll_handle_pane_g2

0x89cd,	// (0x000458fc) scroll_handle_pane_g3

0x0002,

0xf6ca,	// (0x0004c5f9) scroll_handle_pane_g

0x85f9,	// (0x00045528) bg_popup_sub_pane_cp21_ParamLimits

0x85f9,	// (0x00045528) bg_popup_sub_pane_cp21

0x8a03,	// (0x00045932) popup_fep_japan_predictive_window_t1_ParamLimits

0x8a03,	// (0x00045932) popup_fep_japan_predictive_window_t1

0x8a1d,	// (0x0004594c) popup_fep_japan_predictive_window_t2_ParamLimits

0x8a1d,	// (0x0004594c) popup_fep_japan_predictive_window_t2

0x8a50,	// (0x0004597f) popup_fep_japan_predictive_window_t3_ParamLimits

0x8a50,	// (0x0004597f) popup_fep_japan_predictive_window_t3

0x0002,

0xf6d1,	// (0x0004c600) popup_fep_japan_predictive_window_t_ParamLimits

0xf6d1,	// (0x0004c600) popup_fep_japan_predictive_window_t

0x7b6d,	// (0x00044a9c) bg_popup_sub_pane_cp23

0x8a87,	// (0x000459b6) listscroll_japin_cand_pane

0x8a8f,	// (0x000459be) popup_fep_japan_candidate_window_t1

0x8a9d,	// (0x000459cc) candidate_pane_ParamLimits

0x8a9d,	// (0x000459cc) candidate_pane

0x8aaf,	// (0x000459de) scroll_pane_cp30

0x8ab7,	// (0x000459e6) list_single_popup_jap_candidate_pane_ParamLimits

0x8ab7,	// (0x000459e6) list_single_popup_jap_candidate_pane

0x7b6d,	// (0x00044a9c) list_highlight_pane_cp30

0x8acc,	// (0x000459fb) list_single_popup_jap_candidate_pane_t1

0x8adb,	// (0x00045a0a) level_1_signal

0x8aed,	// (0x00045a1c) level_2_signal

0x8b00,	// (0x00045a2f) level_3_signal

0x8b13,	// (0x00045a42) level_4_signal

0x8b26,	// (0x00045a55) level_5_signal

0x8b39,	// (0x00045a68) level_6_signal

0x8b4c,	// (0x00045a7b) level_7_signal

0x8adb,	// (0x00045a0a) level_1_battery

0x8aed,	// (0x00045a1c) level_2_battery

0x8b00,	// (0x00045a2f) level_3_battery

0x8b13,	// (0x00045a42) level_4_battery

0x8b26,	// (0x00045a55) level_5_battery

0x8b39,	// (0x00045a68) level_6_battery

0x8b4c,	// (0x00045a7b) level_7_battery

0x8b77,	// (0x00045aa6) list_menu_pane_ParamLimits

0x8b77,	// (0x00045aa6) list_menu_pane

0x8b8d,	// (0x00045abc) scroll_pane_cp25_ParamLimits

0x8b8d,	// (0x00045abc) scroll_pane_cp25

0x8ba6,	// (0x00045ad5) list_double2_graphic_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double2_graphic_pane_cp2

0x8ba6,	// (0x00045ad5) list_double2_large_graphic_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double2_large_graphic_pane_cp2

0x8ba6,	// (0x00045ad5) list_double2_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double2_pane_cp2

0x8ba6,	// (0x00045ad5) list_double_graphic_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double_graphic_pane_cp2

0x8ba6,	// (0x00045ad5) list_double_large_graphic_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double_large_graphic_pane_cp2

0x8ba6,	// (0x00045ad5) list_double_number_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double_number_pane_cp2

0x8ba6,	// (0x00045ad5) list_double_pane_cp2_ParamLimits

0x8ba6,	// (0x00045ad5) list_double_pane_cp2

0x8bca,	// (0x00045af9) list_single_2graphic_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_2graphic_pane_cp2

0x8bca,	// (0x00045af9) list_single_graphic_heading_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_graphic_heading_pane_cp2

0x8bca,	// (0x00045af9) list_single_graphic_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_graphic_pane_cp2

0x8bca,	// (0x00045af9) list_single_heading_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_heading_pane_cp2

0x8be3,	// (0x00045b12) list_single_large_graphic_pane_cp2_ParamLimits

0x8be3,	// (0x00045b12) list_single_large_graphic_pane_cp2

0x8bca,	// (0x00045af9) list_single_number_heading_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_number_heading_pane_cp2

0x8bca,	// (0x00045af9) list_single_number_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_number_pane_cp2

0x8bf4,	// (0x00045b23) list_single_pane_cp2_ParamLimits

0x8bf4,	// (0x00045b23) list_single_pane_cp2

0x8c78,	// (0x00045ba7) bg_popup_sub_pane_cp22

0x5b2f,	// (0x00042a5e) popup_side_volume_key_window_g1

0x5b59,	// (0x00042a88) popup_side_volume_key_window_t1

0x5b75,	// (0x00042aa4) volume_small_pane_cp1

0x7ec8,	// (0x00044df7) bg_popup_sub_pane_cp24_ParamLimits

0x7ec8,	// (0x00044df7) bg_popup_sub_pane_cp24

0x8c8e,	// (0x00045bbd) fep_china_uni_candidate_pane_ParamLimits

0x8c8e,	// (0x00045bbd) fep_china_uni_candidate_pane

0x8ca2,	// (0x00045bd1) fep_china_uni_entry_pane

0x8cb2,	// (0x00045be1) popup_fep_china_uni_window_g1

0x8cce,	// (0x00045bfd) fep_china_uni_entry_pane_g1

0x8cd6,	// (0x00045c05) fep_china_uni_entry_pane_g2

0x0001,

0xf702,	// (0x0004c631) fep_china_uni_entry_pane_g

0x8cde,	// (0x00045c0d) fep_entry_item_pane

0x8ce8,	// (0x00045c17) fep_candidate_item_pane

0x8cf0,	// (0x00045c1f) fep_china_uni_candidate_pane_g1

0x8cf8,	// (0x00045c27) fep_china_uni_candidate_pane_g2

0x8d00,	// (0x00045c2f) fep_china_uni_candidate_pane_g3

0x8d08,	// (0x00045c37) fep_china_uni_candidate_pane_g4

0x0003,

0xf707,	// (0x0004c636) fep_china_uni_candidate_pane_g

0x26dc,	// (0x0003f60b) fep_entry_item_pane_g1

0x8d10,	// (0x00045c3f) fep_entry_item_pane_t1_ParamLimits

0x8d10,	// (0x00045c3f) fep_entry_item_pane_t1

0x8d32,	// (0x00045c61) fep_candidate_item_pane_t1_ParamLimits

0x8d32,	// (0x00045c61) fep_candidate_item_pane_t1

0x8d47,	// (0x00045c76) fep_candidate_item_pane_t2_ParamLimits

0x8d47,	// (0x00045c76) fep_candidate_item_pane_t2

0x0001,

0xf710,	// (0x0004c63f) fep_candidate_item_pane_t_ParamLimits

0xf710,	// (0x0004c63f) fep_candidate_item_pane_t

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp31_ParamLimits

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp31

0x8d59,	// (0x00045c88) level_1_signal_lsc

0x8d62,	// (0x00045c91) level_2_signal_lsc

0x8d6b,	// (0x00045c9a) level_3_signal_lsc

0x8d74,	// (0x00045ca3) level_4_signal_lsc

0x8d7d,	// (0x00045cac) level_5_signal_lsc

0x8d86,	// (0x00045cb5) level_6_signal_lsc

0x8d8f,	// (0x00045cbe) level_7_signal_lsc

0x8d8f,	// (0x00045cbe) level_1_battery_lsc

0x8d98,	// (0x00045cc7) level_2_battery_lsc

0x8da1,	// (0x00045cd0) level_3_battery_lsc

0x8daa,	// (0x00045cd9) level_4_battery_lsc

0x8db3,	// (0x00045ce2) level_5_battery_lsc

0x8dbc,	// (0x00045ceb) level_6_battery_lsc

0x8d59,	// (0x00045c88) level_7_battery_lsc

0x8dc5,	// (0x00045cf4) scroll_handle_focus_pane_g1

0x8dce,	// (0x00045cfd) scroll_handle_focus_pane_g2

0x8dd7,	// (0x00045d06) scroll_handle_focus_pane_g3

0x0002,

0xf715,	// (0x0004c644) scroll_handle_focus_pane_g

0x4c01,	// (0x00041b30) list_single_2graphic_pane_g1_ParamLimits

0x4c01,	// (0x00041b30) list_single_2graphic_pane_g1

0x587b,	// (0x000427aa) list_single_2graphic_pane_g2_ParamLimits

0x587b,	// (0x000427aa) list_single_2graphic_pane_g2

0x585d,	// (0x0004278c) list_single_2graphic_pane_g3_ParamLimits

0x585d,	// (0x0004278c) list_single_2graphic_pane_g3

0x4c0d,	// (0x00041b3c) list_single_2graphic_pane_g4_ParamLimits

0x4c0d,	// (0x00041b3c) list_single_2graphic_pane_g4

0x0003,

0xf71c,	// (0x0004c64b) list_single_2graphic_pane_g_ParamLimits

0xf71c,	// (0x0004c64b) list_single_2graphic_pane_g

0x4c19,	// (0x00041b48) list_single_2graphic_pane_t1_ParamLimits

0x4c19,	// (0x00041b48) list_single_2graphic_pane_t1

0x5b7d,	// (0x00042aac) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x5b7d,	// (0x00042aac) list_double2_graphic_large_graphic_pane_g1

0x4786,	// (0x000416b5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x4786,	// (0x000416b5) list_double2_graphic_large_graphic_pane_g2

0x58bf,	// (0x000427ee) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x58bf,	// (0x000427ee) list_double2_graphic_large_graphic_pane_g3

0x5b8d,	// (0x00042abc) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x5b8d,	// (0x00042abc) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf725,	// (0x0004c654) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf725,	// (0x0004c654) list_double2_graphic_large_graphic_pane_g

0x4c47,	// (0x00041b76) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x4c47,	// (0x00041b76) list_double2_graphic_large_graphic_pane_t1

0x4c5d,	// (0x00041b8c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x4c5d,	// (0x00041b8c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf72e,	// (0x0004c65d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf72e,	// (0x0004c65d) list_double2_graphic_large_graphic_pane_t

0x8f22,	// (0x00045e51) popup_fast_swap_window_ParamLimits

0x8f22,	// (0x00045e51) popup_fast_swap_window

0x8f3e,	// (0x00045e6d) popup_side_volume_key_window

0x8f5a,	// (0x00045e89) stacon_top_pane

0x8f64,	// (0x00045e93) status_pane_ParamLimits

0x8f64,	// (0x00045e93) status_pane

0x8f72,	// (0x00045ea1) status_small_pane

0x7b6d,	// (0x00044a9c) control_pane

0x7b6d,	// (0x00044a9c) stacon_bottom_pane

0x84c9,	// (0x000453f8) scroll_pane_cp121

0x84c0,	// (0x000453ef) set_content_pane

0x8de0,	// (0x00045d0f) bg_active_tab_pane_g1_cp1

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp1

0x8df2,	// (0x00045d21) bg_active_tab_pane_g3_cp1

0x8de0,	// (0x00045d0f) bg_passive_tab_pane_g1_cp1

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp1

0x8df2,	// (0x00045d21) bg_passive_tab_pane_g3_cp1

0x8dfb,	// (0x00045d2a) bg_active_tab_pane_g1_cp2

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp2

0x8e04,	// (0x00045d33) bg_active_tab_pane_g3_cp2

0x8dfb,	// (0x00045d2a) bg_passive_tab_pane_g1_cp2

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp2

0x8e04,	// (0x00045d33) bg_passive_tab_pane_g3_cp2

0x8e0d,	// (0x00045d3c) bg_active_tab_pane_g1_cp3

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp3

0x8e16,	// (0x00045d45) bg_active_tab_pane_g3_cp3

0x8e0d,	// (0x00045d3c) bg_passive_tab_pane_g1_cp3

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp3

0x8e16,	// (0x00045d45) bg_passive_tab_pane_g3_cp3

0x8e1f,	// (0x00045d4e) bg_active_tab_pane_g1_cp4

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp4

0x8e2a,	// (0x00045d59) bg_active_tab_pane_g3_cp4

0x8e1f,	// (0x00045d4e) bg_passive_tab_pane_g1_cp4

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp4

0x8e2a,	// (0x00045d59) bg_passive_tab_pane_g3_cp4

0x8e73,	// (0x00045da2) bg_active_tab_pane_g1_cp5

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp5

0x8e7c,	// (0x00045dab) bg_active_tab_pane_g3_cp5

0x8e73,	// (0x00045da2) bg_passive_tab_pane_g1_cp5

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp5

0x8e7c,	// (0x00045dab) bg_passive_tab_pane_g3_cp5

0x8e85,	// (0x00045db4) list_set_graphic_pane_ParamLimits

0x8e85,	// (0x00045db4) list_set_graphic_pane

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp4

0x8ea5,	// (0x00045dd4) list_set_graphic_pane_g1_ParamLimits

0x8ea5,	// (0x00045dd4) list_set_graphic_pane_g1

0x8eb1,	// (0x00045de0) list_set_graphic_pane_g2_ParamLimits

0x8eb1,	// (0x00045de0) list_set_graphic_pane_g2

0x0001,

0xf733,	// (0x0004c662) list_set_graphic_pane_g_ParamLimits

0xf733,	// (0x0004c662) list_set_graphic_pane_g

0x0009,

0xfaa3,	// (0x0004c9d2) volume_small_pane_cp_g

0x8ed5,	// (0x00045e04) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x8ed5,	// (0x00045e04) list_double2_large_graphic_pane_g1_cp2

0x8ee1,	// (0x00045e10) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x8ee1,	// (0x00045e10) list_double2_large_graphic_pane_g2_cp2

0x8ef2,	// (0x00045e21) list_double2_large_graphic_pane_g3_cp2

0x8efa,	// (0x00045e29) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x8efa,	// (0x00045e29) list_double2_large_graphic_pane_t1_cp2

0x8f10,	// (0x00045e3f) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x8f10,	// (0x00045e3f) list_double2_large_graphic_pane_t2_cp2

0xaaf9,	// (0x00047a28) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xaaf9,	// (0x00047a28) list_double_large_graphic_pane_g1_cp2

0xab0a,	// (0x00047a39) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xab0a,	// (0x00047a39) list_double_large_graphic_pane_g2_cp2

0x908b,	// (0x00045fba) list_double_large_graphic_pane_g3_cp2

0xab1b,	// (0x00047a4a) list_double_large_graphic_pane_g4_cp

0xab23,	// (0x00047a52) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xab23,	// (0x00047a52) list_double_large_graphic_pane_t1_cp2

0xab3a,	// (0x00047a69) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xab3a,	// (0x00047a69) list_double_large_graphic_pane_t2_cp2

0x8f7d,	// (0x00045eac) list_double2_graphic_pane_g1_cp2_ParamLimits

0x8f7d,	// (0x00045eac) list_double2_graphic_pane_g1_cp2

0x8f8b,	// (0x00045eba) list_double2_graphic_pane_g2_cp2_ParamLimits

0x8f8b,	// (0x00045eba) list_double2_graphic_pane_g2_cp2

0x8f9c,	// (0x00045ecb) list_double2_graphic_pane_g3_cp2

0x8fa6,	// (0x00045ed5) list_double2_graphic_pane_t1_cp2_ParamLimits

0x8fa6,	// (0x00045ed5) list_double2_graphic_pane_t1_cp2

0x8fbc,	// (0x00045eeb) list_double2_graphic_pane_t2_cp2_ParamLimits

0x8fbc,	// (0x00045eeb) list_double2_graphic_pane_t2_cp2

0x8fce,	// (0x00045efd) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8fce,	// (0x00045efd) list_single_number_heading_pane_g1_cp2

0x8fda,	// (0x00045f09) list_single_number_heading_pane_g2_cp2

0x8fe2,	// (0x00045f11) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8fe2,	// (0x00045f11) list_single_number_heading_pane_t1_cp2

0x8ff8,	// (0x00045f27) list_single_number_heading_pane_t2_cp2_ParamLimits

0x8ff8,	// (0x00045f27) list_single_number_heading_pane_t2_cp2

0x900a,	// (0x00045f39) list_single_number_heading_pane_t3_cp2_ParamLimits

0x900a,	// (0x00045f39) list_single_number_heading_pane_t3_cp2

0x8fce,	// (0x00045efd) list_single_heading_pane_g1_cp2_ParamLimits

0x8fce,	// (0x00045efd) list_single_heading_pane_g1_cp2

0x8fda,	// (0x00045f09) list_single_heading_pane_g2_cp2

0x8fe2,	// (0x00045f11) list_single_heading_pane_t1_cp2_ParamLimits

0x8fe2,	// (0x00045f11) list_single_heading_pane_t1_cp2

0xa901,	// (0x00047830) list_single_heading_pane_t2_cp2_ParamLimits

0xa901,	// (0x00047830) list_single_heading_pane_t2_cp2

0xa849,	// (0x00047778) list_double_graphic_pane_g1_cp2_ParamLimits

0xa849,	// (0x00047778) list_double_graphic_pane_g1_cp2

0xa855,	// (0x00047784) list_double_graphic_pane_g2_cp2_ParamLimits

0xa855,	// (0x00047784) list_double_graphic_pane_g2_cp2

0xa864,	// (0x00047793) list_double_graphic_pane_g3_cp2

0xa86c,	// (0x0004779b) list_double_graphic_pane_t1_cp2_ParamLimits

0xa86c,	// (0x0004779b) list_double_graphic_pane_t1_cp2

0xa882,	// (0x000477b1) list_double_graphic_pane_t2_cp2_ParamLimits

0xa882,	// (0x000477b1) list_double_graphic_pane_t2_cp2

0x907f,	// (0x00045fae) list_double_number_pane_g1_cp2_ParamLimits

0x907f,	// (0x00045fae) list_double_number_pane_g1_cp2

0x908b,	// (0x00045fba) list_double_number_pane_g2_cp2

0xa80d,	// (0x0004773c) list_double_number_pane_t1_cp2_ParamLimits

0xa80d,	// (0x0004773c) list_double_number_pane_t1_cp2

0xa821,	// (0x00047750) list_double_number_pane_t2_cp2_ParamLimits

0xa821,	// (0x00047750) list_double_number_pane_t2_cp2

0xa837,	// (0x00047766) list_double_number_pane_t3_cp2_ParamLimits

0xa837,	// (0x00047766) list_double_number_pane_t3_cp2

0xa6f6,	// (0x00047625) list_single_graphic_pane_g1_cp2_ParamLimits

0xa6f6,	// (0x00047625) list_single_graphic_pane_g1_cp2

0x90ec,	// (0x0004601b) list_single_graphic_pane_g2_cp2_ParamLimits

0x90ec,	// (0x0004601b) list_single_graphic_pane_g2_cp2

0x90f8,	// (0x00046027) list_single_graphic_pane_g3_cp2

0xa6cc,	// (0x000475fb) list_single_graphic_pane_t1_cp2_ParamLimits

0xa6cc,	// (0x000475fb) list_single_graphic_pane_t1_cp2

0x90ec,	// (0x0004601b) list_single_number_pane_g1_cp2_ParamLimits

0x90ec,	// (0x0004601b) list_single_number_pane_g1_cp2

0x90f8,	// (0x00046027) list_single_number_pane_g2_cp2

0xa6cc,	// (0x000475fb) list_single_number_pane_t1_cp2_ParamLimits

0xa6cc,	// (0x000475fb) list_single_number_pane_t1_cp2

0xa6e2,	// (0x00047611) list_single_number_pane_t2_cp2_ParamLimits

0xa6e2,	// (0x00047611) list_single_number_pane_t2_cp2

0x8ee1,	// (0x00045e10) list_double2_pane_g1_cp2_ParamLimits

0x8ee1,	// (0x00045e10) list_double2_pane_g1_cp2

0x8ef2,	// (0x00045e21) list_double2_pane_g2_cp2

0x9057,	// (0x00045f86) list_double2_pane_t1_cp2_ParamLimits

0x9057,	// (0x00045f86) list_double2_pane_t1_cp2

0x906d,	// (0x00045f9c) list_double2_pane_t2_cp2_ParamLimits

0x906d,	// (0x00045f9c) list_double2_pane_t2_cp2

0x907f,	// (0x00045fae) list_double_pane_g1_cp2_ParamLimits

0x907f,	// (0x00045fae) list_double_pane_g1_cp2

0x908b,	// (0x00045fba) list_double_pane_g2_cp2

0x9093,	// (0x00045fc2) list_double_pane_t1_cp2_ParamLimits

0x9093,	// (0x00045fc2) list_double_pane_t1_cp2

0x90a9,	// (0x00045fd8) list_double_pane_t2_cp2_ParamLimits

0x90a9,	// (0x00045fd8) list_double_pane_t2_cp2

0x90dc,	// (0x0004600b) list_single_pane_cp2_g3

0x90ec,	// (0x0004601b) list_single_pane_g1_cp2_ParamLimits

0x90ec,	// (0x0004601b) list_single_pane_g1_cp2

0x90f8,	// (0x00046027) list_single_pane_g2_cp2

0x9100,	// (0x0004602f) list_single_pane_t1_cp2_ParamLimits

0x9100,	// (0x0004602f) list_single_pane_t1_cp2

0x9118,	// (0x00046047) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9118,	// (0x00046047) list_single_large_graphic_pane_g1_cp2

0x8d26,	// (0x00045c55) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x8d26,	// (0x00045c55) list_single_large_graphic_pane_g2_cp2

0x9124,	// (0x00046053) list_single_large_graphic_pane_g3_cp2

0x912c,	// (0x0004605b) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x912c,	// (0x0004605b) list_single_large_graphic_pane_g4_cp1

0x9146,	// (0x00046075) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x9146,	// (0x00046075) list_single_large_graphic_pane_t1_cp2

0xa698,	// (0x000475c7) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xa698,	// (0x000475c7) list_single_graphic_heading_pane_g1_cp2

0xa665,	// (0x00047594) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xa665,	// (0x00047594) list_single_graphic_heading_pane_g4_cp2

0x90f8,	// (0x00046027) list_single_graphic_heading_pane_g5_cp2

0xa6a4,	// (0x000475d3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xa6a4,	// (0x000475d3) list_single_graphic_heading_pane_t1_cp2

0xa6ba,	// (0x000475e9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xa6ba,	// (0x000475e9) list_single_graphic_heading_pane_t2_cp2

0xa659,	// (0x00047588) list_single_2graphic_pane_g1_cp2_ParamLimits

0xa659,	// (0x00047588) list_single_2graphic_pane_g1_cp2

0xa665,	// (0x00047594) list_single_2graphic_pane_g2_cp2_ParamLimits

0xa665,	// (0x00047594) list_single_2graphic_pane_g2_cp2

0x90f8,	// (0x00046027) list_single_2graphic_pane_g3_cp2

0xa676,	// (0x000475a5) list_single_2graphic_pane_g4_cp2_ParamLimits

0xa676,	// (0x000475a5) list_single_2graphic_pane_g4_cp2

0xa682,	// (0x000475b1) list_single_2graphic_pane_t1_cp2_ParamLimits

0xa682,	// (0x000475b1) list_single_2graphic_pane_t1_cp2

0x26dc,	// (0x0003f60b) list_highlight_pane_g10_cp1

0xa231,	// (0x00047160) list_highlight_pane_g1_cp1

0xa239,	// (0x00047168) list_highlight_pane_g2_cp1

0xa241,	// (0x00047170) list_highlight_pane_g3_cp1

0xa249,	// (0x00047178) list_highlight_pane_g4_cp1

0xa251,	// (0x00047180) list_highlight_pane_g5_cp1

0xa259,	// (0x00047188) list_highlight_pane_g6_cp1

0xa261,	// (0x00047190) list_highlight_pane_g7_cp1

0xa269,	// (0x00047198) list_highlight_pane_g8_cp1

0xa271,	// (0x000471a0) list_highlight_pane_g9_cp1

0xa151,	// (0x00047080) form_field_slider_pane_t3

0xa15f,	// (0x0004708e) form_field_slider_pane_t4

0xa16d,	// (0x0004709c) slider_form_pane_ParamLimits

0xa16d,	// (0x0004709c) slider_form_pane

0x7b6d,	// (0x00044a9c) control_abbreviations

0x7b6d,	// (0x00044a9c) control_conventions

0x7b6d,	// (0x00044a9c) control_definitions

0x7b6d,	// (0x00044a9c) format_table_attribute

0xa94b,	// (0x0004787a) bg_popup_preview_window_pane_g9

0x7b6d,	// (0x00044a9c) format_table_data2

0x7b6d,	// (0x00044a9c) format_table_data3

0x7b6d,	// (0x00044a9c) format_table_data_example

0x0008,

0x7b6d,	// (0x00044a9c) intro_purpose

0xf8ca,	// (0x0004c7f9) bg_popup_preview_window_pane_g

0x7b6d,	// (0x00044a9c) texts_category

0x7b6d,	// (0x00044a9c) texts_graphics

0x915c,	// (0x0004608b) text_digital

0x916b,	// (0x0004609a) text_primary

0x917a,	// (0x000460a9) text_primary_small

0x9189,	// (0x000460b8) text_secondary

0x9198,	// (0x000460c7) text_title

0xb06c,	// (0x00047f9b) bg_passive_tab_pane_g1_cp3_srt

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp3_srt

0xb075,	// (0x00047fa4) bg_passive_tab_pane_g3_cp3_srt

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp3_srt_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp3_srt

0xb07e,	// (0x00047fad) tabs_4_active_pane_srt_g1

0xb086,	// (0x00047fb5) tabs_4_active_pane_srt_t1_ParamLimits

0xb086,	// (0x00047fb5) tabs_4_active_pane_srt_t1

0xb06c,	// (0x00047f9b) bg_active_tab_pane_g1_cp3_copy1

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp3_copy1

0xb075,	// (0x00047fa4) bg_active_tab_pane_g3_cp3_copy1

0x7c4d,	// (0x00044b7c) tabs_2_long_active_pane_srt_ParamLimits

0x7c4d,	// (0x00044b7c) tabs_2_long_active_pane_srt

0x7c4d,	// (0x00044b7c) tabs_2_long_passive_pane_srt_ParamLimits

0x7c4d,	// (0x00044b7c) tabs_2_long_passive_pane_srt

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp4_srt_ParamLimits

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp4_srt

0xad79,	// (0x00047ca8) bg_passive_tab_pane_g1_cp4_srt

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp4_srt

0xad82,	// (0x00047cb1) bg_passive_tab_pane_g3_cp4_srt

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp4_srt_ParamLimits

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp4_srt

0xad8b,	// (0x00047cba) tabs_2_long_active_pane_srt_t1_ParamLimits

0xad8b,	// (0x00047cba) tabs_2_long_active_pane_srt_t1

0xad79,	// (0x00047ca8) bg_active_tab_pane_g1_cp4_srt

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp4_srt

0xad82,	// (0x00047cb1) bg_active_tab_pane_g3_cp4_srt

0x7ec8,	// (0x00044df7) tabs_3_long_active_pane_srt_ParamLimits

0x7ec8,	// (0x00044df7) tabs_3_long_active_pane_srt

0x7ec8,	// (0x00044df7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x7ec8,	// (0x00044df7) tabs_3_long_passive_pane_cp_srt

0x7ec8,	// (0x00044df7) tabs_3_long_passive_pane_srt_ParamLimits

0x7ec8,	// (0x00044df7) tabs_3_long_passive_pane_srt

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp5_srt_ParamLimits

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp5_srt

0x8e73,	// (0x00045da2) bg_passive_tab_pane_g1_cp5_srt

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp5_srt

0x8e7c,	// (0x00045dab) bg_passive_tab_pane_g3_cp5_srt

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp5_srt_ParamLimits

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp5_srt

0xad67,	// (0x00047c96) tabs_3_long_active_pane_srt_t1_ParamLimits

0xad67,	// (0x00047c96) tabs_3_long_active_pane_srt_t1

0x8e73,	// (0x00045da2) bg_active_tab_pane_g1_cp5_srt

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp5_srt

0x8e7c,	// (0x00045dab) bg_active_tab_pane_g3_cp5_srt

0xad59,	// (0x00047c88) navi_text_pane_srt_t1

0xad51,	// (0x00047c80) navi_icon_pane_srt_g1

0x936d,	// (0x0004629c) midp_editing_number_pane_srt

0x91a7,	// (0x000460d6) midp_ticker_pane_srt

0x9375,	// (0x000462a4) midp_ticker_pane_srt_g1

0x937d,	// (0x000462ac) midp_ticker_pane_srt_g2

0x0001,

0xf752,	// (0x0004c681) midp_ticker_pane_srt_g

0x9385,	// (0x000462b4) midp_ticker_pane_srt_t1

0xad42,	// (0x00047c71) midp_editing_number_pane_t1_copy1

0x91af,	// (0x000460de) listscroll_midp_pane

0x91af,	// (0x000460de) midp_form_pane

0x921f,	// (0x0004614e) midp_info_popup_window_ParamLimits

0x921f,	// (0x0004614e) midp_info_popup_window

0x85f9,	// (0x00045528) bg_popup_sub_pane_cp50_ParamLimits

0x85f9,	// (0x00045528) bg_popup_sub_pane_cp50

0x9e49,	// (0x00046d78) listscroll_midp_info_pane_ParamLimits

0x9e49,	// (0x00046d78) listscroll_midp_info_pane

0x9e29,	// (0x00046d58) listscroll_form_midp_pane_ParamLimits

0x9e29,	// (0x00046d58) listscroll_form_midp_pane

0x9e35,	// (0x00046d64) scroll_bar_cp050

0x9e09,	// (0x00046d38) list_midp_pane

0xbae7,	// (0x00048a16) signal_pane_g2_cp

0x9d43,	// (0x00046c72) listscroll_midp_info_pane_t1_ParamLimits

0x9d43,	// (0x00046c72) listscroll_midp_info_pane_t1

0x9d5b,	// (0x00046c8a) listscroll_midp_info_pane_t2_ParamLimits

0x9d5b,	// (0x00046c8a) listscroll_midp_info_pane_t2

0x9d99,	// (0x00046cc8) listscroll_midp_info_pane_t3_ParamLimits

0x9d99,	// (0x00046cc8) listscroll_midp_info_pane_t3

0x9dd3,	// (0x00046d02) listscroll_midp_info_pane_t4_ParamLimits

0x9dd3,	// (0x00046d02) listscroll_midp_info_pane_t4

0x0003,

0xf805,	// (0x0004c734) listscroll_midp_info_pane_t_ParamLimits

0xf805,	// (0x0004c734) listscroll_midp_info_pane_t

0x865a,	// (0x00045589) scroll_pane_cp21

0x9ce1,	// (0x00046c10) form_midp_field_choice_group_pane

0x9cea,	// (0x00046c19) form_midp_field_text_pane

0x9d29,	// (0x00046c58) form_midp_field_time_pane

0x9d31,	// (0x00046c60) form_midp_gauge_slider_pane

0x9d3a,	// (0x00046c69) form_midp_gauge_wait_pane

0x7b6d,	// (0x00044a9c) form_midp_image_pane

0x4db0,	// (0x00041cdf) list_single_midp_pane_ParamLimits

0x4db0,	// (0x00041cdf) list_single_midp_pane

0x9c99,	// (0x00046bc8) form_midp_field_text_pane_t1

0x9a69,	// (0x00046998) input_focus_pane_cp050

0x9cd0,	// (0x00046bff) list_midp_form_text_pane

0x9c68,	// (0x00046b97) form_midp_field_choice_group_pane_t1

0x9c76,	// (0x00046ba5) input_focus_pane_cp051

0x9c8a,	// (0x00046bb9) list_midp_choice_pane

0x7b6d,	// (0x00044a9c) status_idle_pane

0x9c4c,	// (0x00046b7b) form_midp_field_time_pane_t1

0x26dc,	// (0x0003f60b) wait_anim_pane_g2_copy1

0x9c5a,	// (0x00046b89) form_midp_field_time_pane_t2

0x0001,

0x92cd,	// (0x000461fc) aid_navinavi_width_2_pane

0xf800,	// (0x0004c72f) form_midp_field_time_pane_t

0x7b6d,	// (0x00044a9c) input_focus_pane_cp052

0x7b6d,	// (0x00044a9c) bg_input_focus_pane_cp040

0x9c0c,	// (0x00046b3b) form_midp_gauge_slider_pane_t1

0x9c1a,	// (0x00046b49) form_midp_gauge_slider_pane_t2

0x9c28,	// (0x00046b57) form_midp_gauge_slider_pane_t3

0x9c36,	// (0x00046b65) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f7,	// (0x0004c726) form_midp_gauge_slider_pane_t

0x9c44,	// (0x00046b73) form_midp_slider_pane

0x7c4d,	// (0x00044b7c) bg_input_focus_pane_cp041_ParamLimits

0x7c4d,	// (0x00044b7c) bg_input_focus_pane_cp041

0x9bd9,	// (0x00046b08) form_midp_gauge_wait_pane_t1_ParamLimits

0x9bd9,	// (0x00046b08) form_midp_gauge_wait_pane_t1

0x9beb,	// (0x00046b1a) form_midp_gauge_wait_pane_t2_ParamLimits

0x9beb,	// (0x00046b1a) form_midp_gauge_wait_pane_t2

0x0001,

0xf7f2,	// (0x0004c721) form_midp_gauge_wait_pane_t_ParamLimits

0xf7f2,	// (0x0004c721) form_midp_gauge_wait_pane_t

0x9bfd,	// (0x00046b2c) form_midp_wait_pane_ParamLimits

0x9bfd,	// (0x00046b2c) form_midp_wait_pane

0x9ba3,	// (0x00046ad2) form_midp_image_pane_g1

0x9bac,	// (0x00046adb) form_midp_image_pane_t1

0x9bbb,	// (0x00046aea) form_midp_image_pane_t2

0x9bca,	// (0x00046af9) form_midp_image_pane_t3

0x0002,

0xf7eb,	// (0x0004c71a) form_midp_image_pane_t

0x9b9a,	// (0x00046ac9) list_single_midp_pane_g1

0x4da1,	// (0x00041cd0) list_single_midp_pane_t1

0x9b72,	// (0x00046aa1) list_midp_form_item_pane_ParamLimits

0x9b72,	// (0x00046aa1) list_midp_form_item_pane

0x9275,	// (0x000461a4) list_midp_form_item_pane_t1

0x9284,	// (0x000461b3) midp_ticker_pane_g1

0x9290,	// (0x000461bf) midp_ticker_pane_g2

0x0001,

0xf738,	// (0x0004c667) midp_ticker_pane_g

0x929c,	// (0x000461cb) midp_ticker_pane_t1

0xaf93,	// (0x00047ec2) midp_editing_number_pane_t1

0xaf71,	// (0x00047ea0) midp_editing_number_pane

0xaf80,	// (0x00047eaf) midp_ticker_pane

0xad32,	// (0x00047c61) ai_message_heading_pane

0x7b6d,	// (0x00044a9c) bg_popup_window_pane_cp14

0xad3a,	// (0x00047c69) listscroll_ai_message_pane

0xacbc,	// (0x00047beb) ai_message_heading_pane_g1_ParamLimits

0xacbc,	// (0x00047beb) ai_message_heading_pane_g1

0xacc8,	// (0x00047bf7) ai_message_heading_pane_g2_ParamLimits

0xacc8,	// (0x00047bf7) ai_message_heading_pane_g2

0xacd4,	// (0x00047c03) ai_message_heading_pane_g3_ParamLimits

0xacd4,	// (0x00047c03) ai_message_heading_pane_g3

0xace0,	// (0x00047c0f) ai_message_heading_pane_g4_ParamLimits

0xace0,	// (0x00047c0f) ai_message_heading_pane_g4

0x0003,

0xf92c,	// (0x0004c85b) ai_message_heading_pane_g_ParamLimits

0xf92c,	// (0x0004c85b) ai_message_heading_pane_g

0xacec,	// (0x00047c1b) ai_message_heading_pane_t1_ParamLimits

0xacec,	// (0x00047c1b) ai_message_heading_pane_t1

0xad06,	// (0x00047c35) ai_message_heading_pane_t2_ParamLimits

0xad06,	// (0x00047c35) ai_message_heading_pane_t2

0x0001,

0xf935,	// (0x0004c864) ai_message_heading_pane_t_ParamLimits

0xf935,	// (0x0004c864) ai_message_heading_pane_t

0xad18,	// (0x00047c47) bg_popup_heading_pane_cp1_ParamLimits

0xad18,	// (0x00047c47) bg_popup_heading_pane_cp1

0xacaa,	// (0x00047bd9) list_ai_message_pane_ParamLimits

0xacaa,	// (0x00047bd9) list_ai_message_pane

0x865a,	// (0x00045589) scroll_pane_cp10

0xac46,	// (0x00047b75) list_ai_message_pane_g1

0xac4e,	// (0x00047b7d) list_ai_message_pane_g2

0x0001,

0xf909,	// (0x0004c838) list_ai_message_pane_g

0xac56,	// (0x00047b85) list_ai_message_pane_t1_ParamLimits

0xac56,	// (0x00047b85) list_ai_message_pane_t1

0xac6b,	// (0x00047b9a) list_ai_message_pane_t2_ParamLimits

0xac6b,	// (0x00047b9a) list_ai_message_pane_t2

0xac80,	// (0x00047baf) list_ai_message_pane_t3_ParamLimits

0xac80,	// (0x00047baf) list_ai_message_pane_t3

0xac95,	// (0x00047bc4) list_ai_message_pane_t4_ParamLimits

0xac95,	// (0x00047bc4) list_ai_message_pane_t4

0x0003,

0xf90e,	// (0x0004c83d) list_ai_message_pane_t_ParamLimits

0xf90e,	// (0x0004c83d) list_ai_message_pane_t

0xac31,	// (0x00047b60) cell_ai_soft_ind_pane_ParamLimits

0xac31,	// (0x00047b60) cell_ai_soft_ind_pane

0x92ae,	// (0x000461dd) cell_ai_soft_ind_pane_g1_ParamLimits

0x92ae,	// (0x000461dd) cell_ai_soft_ind_pane_g1

0x7b6d,	// (0x00044a9c) grid_highlight_cp1

0x92bb,	// (0x000461ea) text_secondary_cp56_ParamLimits

0x92bb,	// (0x000461ea) text_secondary_cp56

0xac06,	// (0x00047b35) example_general_pane_ParamLimits

0xac06,	// (0x00047b35) example_general_pane

0xac12,	// (0x00047b41) example_parent_pane_g1_ParamLimits

0xac12,	// (0x00047b41) example_parent_pane_g1

0xac1e,	// (0x00047b4d) example_parent_pane_t1_ParamLimits

0xac1e,	// (0x00047b4d) example_parent_pane_t1

0x6290,	// (0x000431bf) popup_preview_text_window_ParamLimits

0x6290,	// (0x000431bf) popup_preview_text_window

0x90e4,	// (0x00046013) list_single_pane_cp2_g4

0x7fa4,	// (0x00044ed3) bg_popup_preview_window_pane_ParamLimits

0x7fa4,	// (0x00044ed3) bg_popup_preview_window_pane

0xa953,	// (0x00047882) popup_preview_text_window_t1_ParamLimits

0xa953,	// (0x00047882) popup_preview_text_window_t1

0xa971,	// (0x000478a0) popup_preview_text_window_t2_ParamLimits

0xa971,	// (0x000478a0) popup_preview_text_window_t2

0xa9ba,	// (0x000478e9) popup_preview_text_window_t3_ParamLimits

0xa9ba,	// (0x000478e9) popup_preview_text_window_t3

0xa9ff,	// (0x0004792e) popup_preview_text_window_t4_ParamLimits

0xa9ff,	// (0x0004792e) popup_preview_text_window_t4

0x0004,

0xf8dd,	// (0x0004c80c) popup_preview_text_window_t_ParamLimits

0xf8dd,	// (0x0004c80c) popup_preview_text_window_t

0xaa7d,	// (0x000479ac) scroll_pane_cp11

0x99f5,	// (0x00046924) bg_popup_preview_window_pane_g1

0xa913,	// (0x00047842) bg_popup_preview_window_pane_g2

0xa91b,	// (0x0004784a) bg_popup_preview_window_pane_g3

0xa923,	// (0x00047852) bg_popup_preview_window_pane_g4

0xa92b,	// (0x0004785a) bg_popup_preview_window_pane_g5

0xa933,	// (0x00047862) bg_popup_preview_window_pane_g6

0xa93b,	// (0x0004786a) bg_popup_preview_window_pane_g7

0xa943,	// (0x00047872) bg_popup_preview_window_pane_g8

0x53e9,	// (0x00042318) aid_popup_width_pane

0x626e,	// (0x0004319d) popup_midp_note_alarm_window_ParamLimits

0x626e,	// (0x0004319d) popup_midp_note_alarm_window

0x84da,	// (0x00045409) data_form_pane_ParamLimits

0x4a4a,	// (0x00041979) form_field_data_pane_g1

0x4a54,	// (0x00041983) form_field_data_pane_t1_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_ParamLimits

0x4a6c,	// (0x0004199b) data_form_wide_pane_ParamLimits

0x4a7d,	// (0x000419ac) form_field_data_wide_pane_g1

0x4a89,	// (0x000419b8) form_field_data_wide_pane_t1_ParamLimits

0x824b,	// (0x0004517a) input_focus_pane_cp6_ParamLimits

0x8607,	// (0x00045536) input_popup_find_pane_g1_ParamLimits

0x8607,	// (0x00045536) input_popup_find_pane_g1

0x59de,	// (0x0004290d) aid_navi_side_left_pane

0x59f3,	// (0x00042922) aid_navi_side_right_pane

0xa32c,	// (0x0004725b) bg_popup_window_pane_cp30_ParamLimits

0xa32c,	// (0x0004725b) bg_popup_window_pane_cp30

0xa3a6,	// (0x000472d5) popup_midp_note_alarm_window_g1_ParamLimits

0xa3a6,	// (0x000472d5) popup_midp_note_alarm_window_g1

0xa3d6,	// (0x00047305) popup_midp_note_alarm_window_t1_ParamLimits

0xa3d6,	// (0x00047305) popup_midp_note_alarm_window_t1

0xa477,	// (0x000473a6) popup_midp_note_alarm_window_t2_ParamLimits

0xa477,	// (0x000473a6) popup_midp_note_alarm_window_t2

0xa525,	// (0x00047454) popup_midp_note_alarm_window_t3_ParamLimits

0xa525,	// (0x00047454) popup_midp_note_alarm_window_t3

0xa557,	// (0x00047486) popup_midp_note_alarm_window_t4_ParamLimits

0xa557,	// (0x00047486) popup_midp_note_alarm_window_t4

0xa57d,	// (0x000474ac) popup_midp_note_alarm_window_t5_ParamLimits

0xa57d,	// (0x000474ac) popup_midp_note_alarm_window_t5

0x000a,

0xf87a,	// (0x0004c7a9) popup_midp_note_alarm_window_t_ParamLimits

0xf87a,	// (0x0004c7a9) popup_midp_note_alarm_window_t

0xa629,	// (0x00047558) wait_bar_pane_cp1_ParamLimits

0xa629,	// (0x00047558) wait_bar_pane_cp1

0x7b6d,	// (0x00044a9c) wait_anim_pane_copy1

0x7b6d,	// (0x00044a9c) wait_border_pane_copy1

0xa012,	// (0x00046f41) wait_border_pane_g1_copy1

0x4aa3,	// (0x000419d2) form_field_popup_pane_g1

0x4aab,	// (0x000419da) form_field_popup_pane_t1_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_cp7_ParamLimits

0x8508,	// (0x00045437) list_form_pane_ParamLimits

0x4ac3,	// (0x000419f2) form_field_popup_wide_pane_g1

0x4acb,	// (0x000419fa) form_field_popup_wide_pane_t1_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_cp8_ParamLimits

0x8514,	// (0x00045443) list_form_wide_pane_ParamLimits

0xb10e,	// (0x0004803d) aid_size_cell_graphic_pane

0x4b55,	// (0x00041a84) data_form_pane_t1_ParamLimits

0x4dec,	// (0x00041d1b) data_form_wide_pane_t1_ParamLimits

0x95bc,	// (0x000464eb) bg_status_flat_pane

0x7bad,	// (0x00044adc) title_pane_t1_ParamLimits

0x7c15,	// (0x00044b44) title_pane_t2_ParamLimits

0x7c3b,	// (0x00044b6a) title_pane_t3_ParamLimits

0xf532,	// (0x0004c461) title_pane_t_ParamLimits

0x8adb,	// (0x00045a0a) level_1_signal_ParamLimits

0x8aed,	// (0x00045a1c) level_2_signal_ParamLimits

0x8b00,	// (0x00045a2f) level_3_signal_ParamLimits

0x8b13,	// (0x00045a42) level_4_signal_ParamLimits

0x8b26,	// (0x00045a55) level_5_signal_ParamLimits

0x8b39,	// (0x00045a68) level_6_signal_ParamLimits

0x8b4c,	// (0x00045a7b) level_7_signal_ParamLimits

0x8adb,	// (0x00045a0a) level_1_battery_ParamLimits

0x8aed,	// (0x00045a1c) level_2_battery_ParamLimits

0x8b00,	// (0x00045a2f) level_3_battery_ParamLimits

0x8b13,	// (0x00045a42) level_4_battery_ParamLimits

0x8b26,	// (0x00045a55) level_5_battery_ParamLimits

0x8b39,	// (0x00045a68) level_6_battery_ParamLimits

0x8b4c,	// (0x00045a7b) level_7_battery_ParamLimits

0xa231,	// (0x00047160) bg_status_flat_pane_g1

0xa239,	// (0x00047168) bg_status_flat_pane_g2

0xa241,	// (0x00047170) bg_status_flat_pane_g3

0xa249,	// (0x00047178) bg_status_flat_pane_g4

0xa251,	// (0x00047180) bg_status_flat_pane_g5

0xa259,	// (0x00047188) bg_status_flat_pane_g6

0xa261,	// (0x00047190) bg_status_flat_pane_g7

0x7c63,	// (0x00044b92) tabs_3_active_pane_t1_ParamLimits

0x7c63,	// (0x00044b92) tabs_3_passive_pane_t1_ParamLimits

0x7c7d,	// (0x00044bac) tabs_4_active_pane_t1_ParamLimits

0x7c7d,	// (0x00044bac) tabs_4_1_passive_pane_t1_ParamLimits

0x869b,	// (0x000455ca) tabs_2_active_pane_t1_ParamLimits

0x869b,	// (0x000455ca) tabs_2_passive_pane_t1_ParamLimits

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp4_ParamLimits

0x86bb,	// (0x000455ea) tabs_2_long_active_pane_t1_ParamLimits

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp4_ParamLimits

0x653d,	// (0x0004346c) list_single_midp_graphic_pane_t1_ParamLimits

0x86ad,	// (0x000455dc) bg_active_tab_pane_cp5_ParamLimits

0x86da,	// (0x00045609) tabs_3_long_active_pane_t1_ParamLimits

0x86ce,	// (0x000455fd) bg_passive_tab_pane_cp5_ParamLimits

0x653d,	// (0x0004346c) list_single_midp_graphic_pane_t1

0x95bc,	// (0x000464eb) bg_status_flat_pane_ParamLimits

0x9685,	// (0x000465b4) indicator_pane_cp2_ParamLimits

0x9685,	// (0x000465b4) indicator_pane_cp2

0x97b0,	// (0x000466df) navi_pane_srt_ParamLimits

0x97b0,	// (0x000466df) navi_pane_srt

0x97d4,	// (0x00046703) popup_clock_digital_analogue_window_cp1

0x7d2a,	// (0x00044c59) indicator_pane_t1

0x91a7,	// (0x000460d6) copy_highlight_pane

0x91a7,	// (0x000460d6) cursor_graphics_pane

0x91a7,	// (0x000460d6) graphic_within_text_pane

0x91a7,	// (0x000460d6) link_highlight_pane

0xaa40,	// (0x0004796f) popup_preview_text_window_t5_ParamLimits

0xaa40,	// (0x0004796f) popup_preview_text_window_t5

0x92d5,	// (0x00046204) cursor_digital_pane

0x92d5,	// (0x00046204) cursor_primary_pane

0x92e6,	// (0x00046215) cursor_primary_small_pane

0x92ee,	// (0x0004621d) cursor_secondary_pane

0x92f6,	// (0x00046225) cursor_title_pane

0x92d5,	// (0x00046204) link_highlight_digital_pane

0x92dd,	// (0x0004620c) link_highlight_primary_pane

0x92e6,	// (0x00046215) link_highlight_primary_small_pane

0x92ee,	// (0x0004621d) link_highlight_secondary_pane

0x92f6,	// (0x00046225) link_highlight_title_pane

0x92d5,	// (0x00046204) copy_highlight_digital_pane

0x92d5,	// (0x00046204) copy_highlight_primary_pane

0x92e6,	// (0x00046215) copy_highlight_primary_small_pane

0x92ee,	// (0x0004621d) copy_highlight_secondary_pane

0x92f6,	// (0x00046225) copy_highlight_title_pane

0x92ee,	// (0x0004621d) graphic_text_digital_pane

0xa2cf,	// (0x000471fe) graphic_text_primary_pane

0xa2d8,	// (0x00047207) graphic_text_primary_small_pane

0x92e6,	// (0x00046215) graphic_text_secondary_pane

0x92d5,	// (0x00046204) graphic_text_title_pane

0x92fe,	// (0x0004622d) cursor_primary_pane_g1

0xa2c1,	// (0x000471f0) cursor_text_primary_t1

0xa2a9,	// (0x000471d8) cursor_primary_small_pane_g1

0xa2b3,	// (0x000471e2) cursor_text_primary_small_t1

0xa291,	// (0x000471c0) cursor_primary_small_pane_g1_copy1

0xa29b,	// (0x000471ca) cursor_text_primary_small_t1_copy1

0xa279,	// (0x000471a8) cursor_text_title_t1

0xa287,	// (0x000471b6) cursor_title_pane_g1

0x92fe,	// (0x0004622d) cursor_digital_pane_g1

0x9308,	// (0x00046237) cursor_text_digital_t1

0x932d,	// (0x0004625c) link_highlight_primary_pane_g1

0xa222,	// (0x00047151) link_highlight_primary_pane_t1

0x9316,	// (0x00046245) link_highlight_primary_small_pane_g1

0x931e,	// (0x0004624d) link_highlight_primary_small_pane_t1

0x932d,	// (0x0004625c) link_highlight_secondary_pane_g1

0x9335,	// (0x00046264) link_highlight_secondary_pane_t1

0xa196,	// (0x000470c5) link_highlight_title_pane_g1

0xa19e,	// (0x000470cd) link_highlight_title_pane_t1

0xa17f,	// (0x000470ae) link_highlight_digital_pane_g1

0xa187,	// (0x000470b6) link_highlight_digital_pane_t1

0xa057,	// (0x00046f86) copy_highlight_primary_pane_g1

0xa05f,	// (0x00046f8e) copy_highlight_primary_pane_t1

0xa031,	// (0x00046f60) copy_highlight_primary_small_pane_g1

0xa048,	// (0x00046f77) copy_highlight_primary_small_pane_t1

0x9344,	// (0x00046273) copy_highlight_secondary_pane_g1

0x934c,	// (0x0004627b) copy_highlight_secondary_pane_t1

0xa031,	// (0x00046f60) copy_highlight_title_pane_g1

0xa039,	// (0x00046f68) copy_highlight_title_pane_t1

0xa057,	// (0x00046f86) copy_highlight_digital_pane_g1

0xb2dc,	// (0x0004820b) copy_highlight_digital_pane_t1

0xb230,	// (0x0004815f) graphic_text_primary_pane_g1

0xb2c0,	// (0x000481ef) graphic_text_primary_pane_t1

0xb2ce,	// (0x000481fd) graphic_text_primary_pane_t2

0x0001,

0xf9a9,	// (0x0004c8d8) graphic_text_primary_pane_t

0xb29c,	// (0x000481cb) graphic_text_primary_small_pane_g1

0xb2a4,	// (0x000481d3) graphic_text_primary_small_pane_t1

0xb2b2,	// (0x000481e1) graphic_text_primary_small_pane_t2

0x0001,

0xf9a4,	// (0x0004c8d3) graphic_text_primary_small_pane_t

0xb278,	// (0x000481a7) graphic_text_secondary_pane_g1

0xb280,	// (0x000481af) graphic_text_secondary_pane_t1

0xb28e,	// (0x000481bd) graphic_text_secondary_pane_t2

0x0001,

0xf99f,	// (0x0004c8ce) graphic_text_secondary_pane_t

0xb254,	// (0x00048183) graphic_text_title_pane_g1

0xb25c,	// (0x0004818b) graphic_text_title_pane_t1

0xb26a,	// (0x00048199) graphic_text_title_pane_t2

0x0001,

0xf99a,	// (0x0004c8c9) graphic_text_title_pane_t

0xb230,	// (0x0004815f) graphic_text_digital_pane_g1

0xb238,	// (0x00048167) graphic_text_digital_pane_t1

0xb246,	// (0x00048175) graphic_text_digital_pane_t2

0x0001,

0xf995,	// (0x0004c8c4) graphic_text_digital_pane_t

0x7c4d,	// (0x00044b7c) navi_icon_pane_srt_ParamLimits

0x7c4d,	// (0x00044b7c) navi_icon_pane_srt

0x7b6d,	// (0x00044a9c) navi_midp_pane_srt

0x7b6d,	// (0x00044a9c) navi_navi_pane_srt

0x7c4d,	// (0x00044b7c) navi_text_pane_srt_ParamLimits

0x7c4d,	// (0x00044b7c) navi_text_pane_srt

0xb1fb,	// (0x0004812a) navi_navi_icon_text_pane_srt

0xb203,	// (0x00048132) navi_navi_pane_srt_g1_ParamLimits

0xb203,	// (0x00048132) navi_navi_pane_srt_g1

0xb215,	// (0x00048144) navi_navi_pane_srt_g2_ParamLimits

0xb215,	// (0x00048144) navi_navi_pane_srt_g2

0x0001,

0xf990,	// (0x0004c8bf) navi_navi_pane_srt_g_ParamLimits

0xf990,	// (0x0004c8bf) navi_navi_pane_srt_g

0xb227,	// (0x00048156) navi_navi_tabs_pane_srt

0xb1fb,	// (0x0004812a) navi_navi_text_pane_srt

0xb1fb,	// (0x0004812a) navi_navi_volume_pane_srt

0xb1ec,	// (0x0004811b) navi_navi_text_pane_srt_t1

0x6946,	// (0x00043875) navi_navi_volume_pane_srt_g1

0x694e,	// (0x0004387d) volume_small_pane_srt_ParamLimits

0x694e,	// (0x0004387d) volume_small_pane_srt

0x5cda,	// (0x00042c09) volume_small_pane_srt_g1_ParamLimits

0x5cda,	// (0x00042c09) volume_small_pane_srt_g1

0x5cea,	// (0x00042c19) volume_small_pane_srt_g2_ParamLimits

0x5cea,	// (0x00042c19) volume_small_pane_srt_g2

0x5cfb,	// (0x00042c2a) volume_small_pane_srt_g3_ParamLimits

0x5cfb,	// (0x00042c2a) volume_small_pane_srt_g3

0x5d0c,	// (0x00042c3b) volume_small_pane_srt_g4_ParamLimits

0x5d0c,	// (0x00042c3b) volume_small_pane_srt_g4

0x5d1d,	// (0x00042c4c) volume_small_pane_srt_g5_ParamLimits

0x5d1d,	// (0x00042c4c) volume_small_pane_srt_g5

0x5d2e,	// (0x00042c5d) volume_small_pane_srt_g6_ParamLimits

0x5d2e,	// (0x00042c5d) volume_small_pane_srt_g6

0x5d3f,	// (0x00042c6e) volume_small_pane_srt_g7_ParamLimits

0x5d3f,	// (0x00042c6e) volume_small_pane_srt_g7

0x5d50,	// (0x00042c7f) volume_small_pane_srt_g8_ParamLimits

0x5d50,	// (0x00042c7f) volume_small_pane_srt_g8

0x5d61,	// (0x00042c90) volume_small_pane_srt_g9_ParamLimits

0x5d61,	// (0x00042c90) volume_small_pane_srt_g9

0x5d72,	// (0x00042ca1) volume_small_pane_srt_g10_ParamLimits

0x5d72,	// (0x00042ca1) volume_small_pane_srt_g10

0x0009,

0xf73d,	// (0x0004c66c) volume_small_pane_srt_g_ParamLimits

0xf73d,	// (0x0004c66c) volume_small_pane_srt_g

0x804d,	// (0x00044f7c) query_popup_data_pane_cp2

0xb1d2,	// (0x00048101) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xb1d2,	// (0x00048101) navi_navi_icon_text_pane_srt_t1

0xa2cf,	// (0x000471fe) navi_tabs_2_long_pane_srt

0xa2cf,	// (0x000471fe) navi_tabs_2_pane_srt

0xa2cf,	// (0x000471fe) navi_tabs_3_long_pane_srt

0xa2cf,	// (0x000471fe) navi_tabs_3_pane_srt

0xa2cf,	// (0x000471fe) navi_tabs_4_pane_srt

0x6926,	// (0x00043855) tabs_2_active_pane_srt_ParamLimits

0x6926,	// (0x00043855) tabs_2_active_pane_srt

0x6936,	// (0x00043865) tabs_2_passive_pane_srt_ParamLimits

0x6936,	// (0x00043865) tabs_2_passive_pane_srt

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp1_srt_ParamLimits

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp1_srt

0xb19e,	// (0x000480cd) bg_passive_tab_pane_g1_cp1_srt

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp1_srt

0xb1a7,	// (0x000480d6) bg_passive_tab_pane_g3_cp1_srt

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp1_srt_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp1_srt

0xb1b0,	// (0x000480df) tabs_2_active_pane_srt_g1

0xb1b8,	// (0x000480e7) tabs_2_active_pane_srt_t1_ParamLimits

0xb1b8,	// (0x000480e7) tabs_2_active_pane_srt_t1

0xb19e,	// (0x000480cd) bg_active_tab_pane_g1_cp1_srt

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp1_srt

0xb1a7,	// (0x000480d6) bg_active_tab_pane_g3_cp1_srt

0x68f3,	// (0x00043822) tabs_3_active_pane_srt_ParamLimits

0x68f3,	// (0x00043822) tabs_3_active_pane_srt

0x6904,	// (0x00043833) tabs_3_passive_pane_cp_srt_ParamLimits

0x6904,	// (0x00043833) tabs_3_passive_pane_cp_srt

0x6915,	// (0x00043844) tabs_3_passive_pane_srt_ParamLimits

0x6915,	// (0x00043844) tabs_3_passive_pane_srt

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp2_srt_ParamLimits

0x94cb,	// (0x000463fa) bg_passive_tab_pane_cp2_srt

0x935b,	// (0x0004628a) bg_passive_tab_pane_g1_cp2_srt

0x8de9,	// (0x00045d18) bg_passive_tab_pane_g2_cp2_srt

0x9364,	// (0x00046293) bg_passive_tab_pane_g3_cp2_srt

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp2_srt_ParamLimits

0x7c4d,	// (0x00044b7c) bg_active_tab_pane_cp2_srt

0xb184,	// (0x000480b3) tabs_3_active_pane_srt_g1

0xb18c,	// (0x000480bb) tabs_3_active_pane_srt_t1_ParamLimits

0xb18c,	// (0x000480bb) tabs_3_active_pane_srt_t1

0x935b,	// (0x0004628a) bg_active_tab_pane_g1_cp2_srt

0x8de9,	// (0x00045d18) bg_active_tab_pane_g2_cp2_srt

0x9364,	// (0x00046293) bg_active_tab_pane_g3_cp2_srt

0x68ab,	// (0x000437da) tabs_4_active_pane_srt_ParamLimits

0x68ab,	// (0x000437da) tabs_4_active_pane_srt

0x68bd,	// (0x000437ec) tabs_4_passive_pane_cp2_srt_ParamLimits

0x68bd,	// (0x000437ec) tabs_4_passive_pane_cp2_srt

0x5ee5,	// (0x00042e14) aid_size_cell_toolbar

0x86ce,	// (0x000455fd) main_idle_act_pane_ParamLimits

0x60a4,	// (0x00042fd3) popup_large_graphic_colour_window_ParamLimits

0x640b,	// (0x0004333a) popup_toolbar_window_ParamLimits

0x640b,	// (0x0004333a) popup_toolbar_window

0xafa2,	// (0x00047ed1) list_single_graphic_2heading_pane_ParamLimits

0xafa2,	// (0x00047ed1) list_single_graphic_2heading_pane

0x888a,	// (0x000457b9) aid_size_cell_apps_grid_lsc_pane

0x889c,	// (0x000457cb) aid_size_cell_apps_grid_prt_pane

0x94cb,	// (0x000463fa) bg_wml_button_pane_cp1_ParamLimits

0x94cb,	// (0x000463fa) bg_wml_button_pane_cp1

0x9c99,	// (0x00046bc8) form_midp_field_text_pane_t1_ParamLimits

0x9a69,	// (0x00046998) input_focus_pane_cp050_ParamLimits

0x9cd0,	// (0x00046bff) list_midp_form_text_pane_ParamLimits

0x9c76,	// (0x00046ba5) input_focus_pane_cp051_ParamLimits

0x9c8a,	// (0x00046bb9) list_midp_choice_pane_ParamLimits

0x9b22,	// (0x00046a51) list_single_2graphic_pane_cp3_ParamLimits

0x9b22,	// (0x00046a51) list_single_2graphic_pane_cp3

0x9b43,	// (0x00046a72) list_single_midp_graphic_pane_ParamLimits

0x9b43,	// (0x00046a72) list_single_midp_graphic_pane

0x4c7f,	// (0x00041bae) list_single_graphic_2heading_pane_g1_ParamLimits

0x4c7f,	// (0x00041bae) list_single_graphic_2heading_pane_g1

0x4c8b,	// (0x00041bba) list_single_graphic_2heading_pane_g4_ParamLimits

0x4c8b,	// (0x00041bba) list_single_graphic_2heading_pane_g4

0x4c97,	// (0x00041bc6) list_single_graphic_2heading_pane_g5_ParamLimits

0x4c97,	// (0x00041bc6) list_single_graphic_2heading_pane_g5

0x0002,

0xf790,	// (0x0004c6bf) list_single_graphic_2heading_pane_g_ParamLimits

0xf790,	// (0x0004c6bf) list_single_graphic_2heading_pane_g

0x4ca3,	// (0x00041bd2) list_single_graphic_2heading_pane_t1_ParamLimits

0x4ca3,	// (0x00041bd2) list_single_graphic_2heading_pane_t1

0x4cb7,	// (0x00041be6) list_single_graphic_2heading_pane_t2_ParamLimits

0x4cb7,	// (0x00041be6) list_single_graphic_2heading_pane_t2

0x4cd3,	// (0x00041c02) list_single_graphic_2heading_pane_t3_ParamLimits

0x4cd3,	// (0x00041c02) list_single_graphic_2heading_pane_t3

0x0002,

0xf797,	// (0x0004c6c6) list_single_graphic_2heading_pane_t_ParamLimits

0xf797,	// (0x0004c6c6) list_single_graphic_2heading_pane_t

0x9933,	// (0x00046862) bg_popup_sub_pane_cp2

0x995d,	// (0x0004688c) grid_toobar_pane

0x64b8,	// (0x000433e7) cell_toolbar_pane_ParamLimits

0x64b8,	// (0x000433e7) cell_toolbar_pane

0x9999,	// (0x000468c8) cell_toolbar_pane_g1_ParamLimits

0x9999,	// (0x000468c8) cell_toolbar_pane_g1

0x99ad,	// (0x000468dc) cell_toolbar_pane_g2_ParamLimits

0x99ad,	// (0x000468dc) cell_toolbar_pane_g2

0x0001,

0xf7a5,	// (0x0004c6d4) cell_toolbar_pane_g_ParamLimits

0xf7a5,	// (0x0004c6d4) cell_toolbar_pane_g

0x99cf,	// (0x000468fe) grid_highlight_pane_cp2_ParamLimits

0x99cf,	// (0x000468fe) grid_highlight_pane_cp2

0x99e9,	// (0x00046918) toolbar_button_pane

0x99f5,	// (0x00046924) toolbar_button_pane_g1

0x99fd,	// (0x0004692c) toolbar_button_pane_g2

0x9a05,	// (0x00046934) toolbar_button_pane_g3

0x9a0d,	// (0x0004693c) toolbar_button_pane_g4

0x9a15,	// (0x00046944) toolbar_button_pane_g5

0x9a1d,	// (0x0004694c) toolbar_button_pane_g6

0x9a25,	// (0x00046954) toolbar_button_pane_g7

0x9a2d,	// (0x0004695c) toolbar_button_pane_g8

0x9a35,	// (0x00046964) toolbar_button_pane_g9

0x0009,

0xf7aa,	// (0x0004c6d9) toolbar_button_pane_g

0x64f0,	// (0x0004341f) list_single_2graphic_pane_g1_cp3_ParamLimits

0x64f0,	// (0x0004341f) list_single_2graphic_pane_g1_cp3

0x64fc,	// (0x0004342b) list_single_2graphic_pane_g2_cp3_ParamLimits

0x64fc,	// (0x0004342b) list_single_2graphic_pane_g2_cp3

0x650d,	// (0x0004343c) list_single_2graphic_pane_g3_cp3

0x6515,	// (0x00043444) list_single_2graphic_pane_g4_cp3_ParamLimits

0x6515,	// (0x00043444) list_single_2graphic_pane_g4_cp3

0x6521,	// (0x00043450) list_single_2graphic_pane_t1_cp3_ParamLimits

0x6521,	// (0x00043450) list_single_2graphic_pane_t1_cp3

0x9f28,	// (0x00046e57) list_single_midp_graphic_pane_g2_ParamLimits

0x9f28,	// (0x00046e57) list_single_midp_graphic_pane_g2

0x4c6f,	// (0x00041b9e) aid_zoom_text_primary

0x5eed,	// (0x00042e1c) aid_zoom_text_secondary

0x9415,	// (0x00046344) status_small_pane_g7_ParamLimits

0x9415,	// (0x00046344) status_small_pane_g7

0x9438,	// (0x00046367) status_small_pane_t1_ParamLimits

0x7b84,	// (0x00044ab3) title_pane_g2

0x0003,

0xf529,	// (0x0004c458) title_pane_g

0x80f5,	// (0x00045024) aid_size_cell_colour_1_pane_ParamLimits

0x80f5,	// (0x00045024) aid_size_cell_colour_1_pane

0x8109,	// (0x00045038) aid_size_cell_colour_2_pane_ParamLimits

0x8109,	// (0x00045038) aid_size_cell_colour_2_pane

0x811d,	// (0x0004504c) aid_size_cell_colour_3_pane_ParamLimits

0x811d,	// (0x0004504c) aid_size_cell_colour_3_pane

0x8131,	// (0x00045060) aid_size_cell_colour_4_pane_ParamLimits

0x8131,	// (0x00045060) aid_size_cell_colour_4_pane

0x591b,	// (0x0004284a) title_pane_stacon_g1_ParamLimits

0x591b,	// (0x0004284a) title_pane_stacon_g1

0xa0b6,	// (0x00046fe5) popup_note_wait_window_g3_ParamLimits

0xa0b6,	// (0x00046fe5) popup_note_wait_window_g3

0xa12c,	// (0x0004705b) popup_note_wait_window_t5_ParamLimits

0xa12c,	// (0x0004705b) popup_note_wait_window_t5

0x7b6d,	// (0x00044a9c) main_feb_china_hwr_fs_writing_pane

0x5f85,	// (0x00042eb4) popup_feb_china_hwr_fs_window_ParamLimits

0x5f85,	// (0x00042eb4) popup_feb_china_hwr_fs_window

0x656b,	// (0x0004349a) aid_size_cell_hwr_fs_ParamLimits

0x656b,	// (0x0004349a) aid_size_cell_hwr_fs

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp3_ParamLimits

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp3

0x6580,	// (0x000434af) grid_hwr_fs_pane_ParamLimits

0x6580,	// (0x000434af) grid_hwr_fs_pane

0x6598,	// (0x000434c7) linegrid_hwr_fs_pane_ParamLimits

0x6598,	// (0x000434c7) linegrid_hwr_fs_pane

0x65a8,	// (0x000434d7) cell_hwr_fs_pane_ParamLimits

0x65a8,	// (0x000434d7) cell_hwr_fs_pane

0x9a75,	// (0x000469a4) linegrid_hwr_fs_pane_g1_ParamLimits

0x9a75,	// (0x000469a4) linegrid_hwr_fs_pane_g1

0x9a81,	// (0x000469b0) linegrid_hwr_fs_pane_g2_ParamLimits

0x9a81,	// (0x000469b0) linegrid_hwr_fs_pane_g2

0x9a93,	// (0x000469c2) linegrid_hwr_fs_pane_g3_ParamLimits

0x9a93,	// (0x000469c2) linegrid_hwr_fs_pane_g3

0x65ca,	// (0x000434f9) linegrid_hwr_fs_pane_g4_ParamLimits

0x65ca,	// (0x000434f9) linegrid_hwr_fs_pane_g4

0x65e4,	// (0x00043513) linegrid_hwr_fs_pane_g5_ParamLimits

0x65e4,	// (0x00043513) linegrid_hwr_fs_pane_g5

0x0004,

0xf7d0,	// (0x0004c6ff) linegrid_hwr_fs_pane_g_ParamLimits

0xf7d0,	// (0x0004c6ff) linegrid_hwr_fs_pane_g

0x9a9f,	// (0x000469ce) cell_hwr_fs_pane_g1_ParamLimits

0x9a9f,	// (0x000469ce) cell_hwr_fs_pane_g1

0x986a,	// (0x00046799) cell_hwr_fs_pane_g2_ParamLimits

0x986a,	// (0x00046799) cell_hwr_fs_pane_g2

0x9ab5,	// (0x000469e4) cell_hwr_fs_pane_g3_ParamLimits

0x9ab5,	// (0x000469e4) cell_hwr_fs_pane_g3

0x9ac2,	// (0x000469f1) cell_hwr_fs_pane_g4_ParamLimits

0x9ac2,	// (0x000469f1) cell_hwr_fs_pane_g4

0x0003,

0xf7db,	// (0x0004c70a) cell_hwr_fs_pane_g_ParamLimits

0xf7db,	// (0x0004c70a) cell_hwr_fs_pane_g

0x65fa,	// (0x00043529) cell_hwr_fs_pane_t1

0x7b6d,	// (0x00044a9c) grid_highlight_pane_cp6

0x7b6d,	// (0x00044a9c) main_idle_act2_pane

0x8641,	// (0x00045570) aid_inside_area_popup_secondary

0xa763,	// (0x00047692) aid_inside_area_window_primary_ParamLimits

0xa763,	// (0x00047692) aid_inside_area_window_primary

0xb2eb,	// (0x0004821a) ai2_news_ticker_pane

0xb2f3,	// (0x00048222) aid_size_cell_ai1_link_ParamLimits

0xb2f3,	// (0x00048222) aid_size_cell_ai1_link

0xb30d,	// (0x0004823c) popup_ai2_data_window_ParamLimits

0xb30d,	// (0x0004823c) popup_ai2_data_window

0xb323,	// (0x00048252) popup_ai2_link_window_ParamLimits

0xb323,	// (0x00048252) popup_ai2_link_window

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp4_ParamLimits

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp4

0xb337,	// (0x00048266) grid_ai2_link_pane_ParamLimits

0xb337,	// (0x00048266) grid_ai2_link_pane

0xb34e,	// (0x0004827d) popup_ai2_link_window_g1_ParamLimits

0xb34e,	// (0x0004827d) popup_ai2_link_window_g1

0xb35a,	// (0x00048289) popup_ai2_link_window_g2_ParamLimits

0xb35a,	// (0x00048289) popup_ai2_link_window_g2

0x0001,

0xf9ae,	// (0x0004c8dd) popup_ai2_link_window_g_ParamLimits

0xf9ae,	// (0x0004c8dd) popup_ai2_link_window_g

0xb369,	// (0x00048298) ai2_mp_button_pane

0xb371,	// (0x000482a0) ai2_mp_volume_pane

0x9c76,	// (0x00046ba5) bg_popup_sub_pane_cp5_ParamLimits

0x9c76,	// (0x00046ba5) bg_popup_sub_pane_cp5

0xb379,	// (0x000482a8) heading_ai2_gene_pane_ParamLimits

0xb379,	// (0x000482a8) heading_ai2_gene_pane

0xb385,	// (0x000482b4) list_ai2_gene_pane_ParamLimits

0xb385,	// (0x000482b4) list_ai2_gene_pane

0xb3cd,	// (0x000482fc) cell_ai2_link_pane_ParamLimits

0xb3cd,	// (0x000482fc) cell_ai2_link_pane

0xb3e3,	// (0x00048312) cell_ai2_link_pane_g1

0x7b6d,	// (0x00044a9c) grid_highlight_pane_cp7

0x6963,	// (0x00043892) ai2_mp_volume_pane_g1

0xb4b3,	// (0x000483e2) ai2_mp_volume_pane_g2

0xb428,	// (0x00048357) list_ai2_gene_pane_t1

0xb4bb,	// (0x000483ea) ai2_mp_volume_pane_g3

0x0002,

0xf9c7,	// (0x0004c8f6) ai2_mp_volume_pane_g

0x696b,	// (0x0004389a) volume_small_pane_cp3

0xb4c3,	// (0x000483f2) aid_size_cell_ai2_button

0xb4cb,	// (0x000483fa) grid_ai2_button_pane

0xb4d4,	// (0x00048403) cell_ai2_button_pane_ParamLimits

0xb4d4,	// (0x00048403) cell_ai2_button_pane

0x26dc,	// (0x0003f60b) cell_ai2_button_pane_g1

0x7b6d,	// (0x00044a9c) grid_highlight_pane_cp8

0xb473,	// (0x000483a2) ai2_gene_pane_t1_ParamLimits

0xb473,	// (0x000483a2) ai2_gene_pane_t1

0x5edb,	// (0x00042e0a) aid_height_parent_landscape

0xadd9,	// (0x00047d08) aid_height_set_list

0xadea,	// (0x00047d19) aid_size_parent

0xb10e,	// (0x0004803d) aid_size_cell_graphic_pane_ParamLimits

0xb395,	// (0x000482c4) popup_ai2_data_window_g1_ParamLimits

0xb395,	// (0x000482c4) popup_ai2_data_window_g1

0xb3a1,	// (0x000482d0) ai2_news_ticker_pane_g1

0xb3a9,	// (0x000482d8) ai2_news_ticker_pane_g2

0x0001,

0xf9b3,	// (0x0004c8e2) ai2_news_ticker_pane_g

0xb3b1,	// (0x000482e0) ai2_news_ticker_pane_t1

0xb3bf,	// (0x000482ee) ai2_news_ticker_pane_t2

0x0001,

0xf9b8,	// (0x0004c8e7) ai2_news_ticker_pane_t

0xb3ec,	// (0x0004831b) heading_ai2_gene_pane_g1

0xb3f4,	// (0x00048323) heading_ai2_gene_pane_t1_ParamLimits

0xb3f4,	// (0x00048323) heading_ai2_gene_pane_t1

0xb409,	// (0x00048338) list_highlight_pane_cp6

0xb411,	// (0x00048340) ai2_gene_pane_ParamLimits

0xb411,	// (0x00048340) ai2_gene_pane

0xb436,	// (0x00048365) list_ai2_gene_pane_t2

0x0001,

0xf9bd,	// (0x0004c8ec) list_ai2_gene_pane_t

0xb444,	// (0x00048373) list_highlight_pane_cp8_ParamLimits

0xb444,	// (0x00048373) list_highlight_pane_cp8

0xb455,	// (0x00048384) ai2_gene_pane_g1_ParamLimits

0xb455,	// (0x00048384) ai2_gene_pane_g1

0xb467,	// (0x00048396) ai2_gene_pane_g2_ParamLimits

0xb467,	// (0x00048396) ai2_gene_pane_g2

0x0001,

0xf9c2,	// (0x0004c8f1) ai2_gene_pane_g_ParamLimits

0xf9c2,	// (0x0004c8f1) ai2_gene_pane_g

0x8470,	// (0x0004539f) scroll_pane_cp12

0x5e98,	// (0x00042dc7) control_pane_t3_ParamLimits

0x5e98,	// (0x00042dc7) control_pane_t3

0x9429,	// (0x00046358) status_small_pane_g8_ParamLimits

0x9429,	// (0x00046358) status_small_pane_g8

0x606b,	// (0x00042f9a) popup_find_window_ParamLimits

0x6282,	// (0x000431b1) popup_note_image_window_ParamLimits

0x4ceb,	// (0x00041c1a) list_double2_graphic_pane_vc_g1_ParamLimits

0x4ceb,	// (0x00041c1a) list_double2_graphic_pane_vc_g1

0x8d26,	// (0x00045c55) list_double2_graphic_pane_vc_g2_ParamLimits

0x8d26,	// (0x00045c55) list_double2_graphic_pane_vc_g2

0x585d,	// (0x0004278c) list_double2_graphic_pane_vc_g3_ParamLimits

0x585d,	// (0x0004278c) list_double2_graphic_pane_vc_g3

0x0002,

0xf79e,	// (0x0004c6cd) list_double2_graphic_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c6cd) list_double2_graphic_pane_vc_g

0x4cf7,	// (0x00041c26) list_double2_graphic_pane_vc_t1_ParamLimits

0x4cf7,	// (0x00041c26) list_double2_graphic_pane_vc_t1

0x8d26,	// (0x00045c55) list_single_heading_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_single_heading_pane_vc_g1

0x585d,	// (0x0004278c) list_single_heading_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_single_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_single_heading_pane_vc_g

0x4d0d,	// (0x00041c3c) list_single_heading_pane_vc_t1_ParamLimits

0x4d0d,	// (0x00041c3c) list_single_heading_pane_vc_t1

0x4d23,	// (0x00041c52) list_single_heading_pane_vc_t2_ParamLimits

0x4d23,	// (0x00041c52) list_single_heading_pane_vc_t2

0x0001,

0xf7bf,	// (0x0004c6ee) list_single_heading_pane_vc_t_ParamLimits

0xf7bf,	// (0x0004c6ee) list_single_heading_pane_vc_t

0x6553,	// (0x00043482) list_setting_number_pane_vc_g1_ParamLimits

0x6553,	// (0x00043482) list_setting_number_pane_vc_g1

0x655f,	// (0x0004348e) list_setting_number_pane_vc_g2_ParamLimits

0x655f,	// (0x0004348e) list_setting_number_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004c6f3) list_setting_number_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004c6f3) list_setting_number_pane_vc_g

0x4d35,	// (0x00041c64) list_setting_number_pane_vc_t1_ParamLimits

0x4d35,	// (0x00041c64) list_setting_number_pane_vc_t1

0x4d49,	// (0x00041c78) list_setting_number_pane_vc_t2_ParamLimits

0x4d49,	// (0x00041c78) list_setting_number_pane_vc_t2

0x4d65,	// (0x00041c94) list_setting_number_pane_vc_t3_ParamLimits

0x4d65,	// (0x00041c94) list_setting_number_pane_vc_t3

0x0002,

0xf7c9,	// (0x0004c6f8) list_setting_number_pane_vc_t_ParamLimits

0xf7c9,	// (0x0004c6f8) list_setting_number_pane_vc_t

0x4d91,	// (0x00041cc0) set_value_pane_vc_ParamLimits

0x4d91,	// (0x00041cc0) set_value_pane_vc

0xafa2,	// (0x00047ed1) list_double2_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double2_graphic_pane_vc

0xafa2,	// (0x00047ed1) list_double2_large_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double2_large_graphic_pane_vc

0xafa2,	// (0x00047ed1) list_double2_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double2_pane_vc

0xafa2,	// (0x00047ed1) list_double_graphic_heading_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_graphic_heading_pane_vc

0xafa2,	// (0x00047ed1) list_double_graphic_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_graphic_pane_vc

0xafa2,	// (0x00047ed1) list_double_heading_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_heading_pane_vc

0xafb4,	// (0x00047ee3) list_double_large_graphic_pane_vc_ParamLimits

0xafb4,	// (0x00047ee3) list_double_large_graphic_pane_vc

0xafa2,	// (0x00047ed1) list_double_number_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_number_pane_vc

0xafa2,	// (0x00047ed1) list_double_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_pane_vc

0xafa2,	// (0x00047ed1) list_double_time_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_double_time_pane_vc

0xafa2,	// (0x00047ed1) list_setting_number_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_setting_number_pane_vc

0xafa2,	// (0x00047ed1) list_setting_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_setting_pane_vc

0xafa2,	// (0x00047ed1) list_single_graphic_heading_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_single_graphic_heading_pane_vc

0xafa2,	// (0x00047ed1) list_single_heading_pane_vc_ParamLimits

0xafa2,	// (0x00047ed1) list_single_heading_pane_vc

0x684f,	// (0x0004377e) list_single_number_heading_pane_vc_ParamLimits

0x684f,	// (0x0004377e) list_single_number_heading_pane_vc

0x4ceb,	// (0x00041c1a) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x4ceb,	// (0x00041c1a) list_double_graphic_heading_pane_vc_g1

0x8d26,	// (0x00045c55) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x8d26,	// (0x00045c55) list_double_graphic_heading_pane_vc_g2

0x585d,	// (0x0004278c) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x585d,	// (0x0004278c) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf79e,	// (0x0004c6cd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c6cd) list_double_graphic_heading_pane_vc_g

0x4e69,	// (0x00041d98) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x4e69,	// (0x00041d98) list_double_graphic_heading_pane_vc_t1

0x4e85,	// (0x00041db4) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x4e85,	// (0x00041db4) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ce,	// (0x0004c8fd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ce,	// (0x0004c8fd) list_double_graphic_heading_pane_vc_t

0x6553,	// (0x00043482) list_setting_pane_vc_g1_ParamLimits

0x6553,	// (0x00043482) list_setting_pane_vc_g1

0x655f,	// (0x0004348e) list_setting_pane_vc_g2_ParamLimits

0x655f,	// (0x0004348e) list_setting_pane_vc_g2

0x0001,

0xf7c4,	// (0x0004c6f3) list_setting_pane_vc_g_ParamLimits

0xf7c4,	// (0x0004c6f3) list_setting_pane_vc_g

0x4ea3,	// (0x00041dd2) list_setting_pane_vc_t1_ParamLimits

0x4ea3,	// (0x00041dd2) list_setting_pane_vc_t1

0x4ebf,	// (0x00041dee) list_setting_pane_vc_t2_ParamLimits

0x4ebf,	// (0x00041dee) list_setting_pane_vc_t2

0x0001,

0xf9fc,	// (0x0004c92b) list_setting_pane_vc_t_ParamLimits

0xf9fc,	// (0x0004c92b) list_setting_pane_vc_t

0x4d91,	// (0x00041cc0) set_value_pane_cp_vc_ParamLimits

0x4d91,	// (0x00041cc0) set_value_pane_cp_vc

0x8d26,	// (0x00045c55) list_single_number_heading_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_single_number_heading_pane_vc_g1

0x585d,	// (0x0004278c) list_single_number_heading_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_single_number_heading_pane_vc_g

0x4edb,	// (0x00041e0a) list_single_number_heading_pane_vc_t1_ParamLimits

0x4edb,	// (0x00041e0a) list_single_number_heading_pane_vc_t1

0x4566,	// (0x00041495) list_single_number_heading_pane_vc_t2_ParamLimits

0x4566,	// (0x00041495) list_single_number_heading_pane_vc_t2

0x4578,	// (0x000414a7) list_single_number_heading_pane_vc_t3_ParamLimits

0x4578,	// (0x000414a7) list_single_number_heading_pane_vc_t3

0x0002,

0xfa01,	// (0x0004c930) list_single_number_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x0004c930) list_single_number_heading_pane_vc_t

0x4ceb,	// (0x00041c1a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x4ceb,	// (0x00041c1a) list_single_graphic_heading_pane_vc_g1

0x8d26,	// (0x00045c55) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x8d26,	// (0x00045c55) list_single_graphic_heading_pane_vc_g4

0x585d,	// (0x0004278c) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x585d,	// (0x0004278c) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf79e,	// (0x0004c6cd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf79e,	// (0x0004c6cd) list_single_graphic_heading_pane_vc_g

0x4edb,	// (0x00041e0a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x4edb,	// (0x00041e0a) list_single_graphic_heading_pane_vc_t1

0x4ef1,	// (0x00041e20) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x4ef1,	// (0x00041e20) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa08,	// (0x0004c937) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa08,	// (0x0004c937) list_single_graphic_heading_pane_vc_t

0x8d26,	// (0x00045c55) list_double2_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_double2_pane_vc_g1

0x585d,	// (0x0004278c) list_double2_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_double2_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_double2_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_double2_pane_vc_g

0x4e1c,	// (0x00041d4b) list_double2_pane_vc_t1_ParamLimits

0x4e1c,	// (0x00041d4b) list_double2_pane_vc_t1

0x6974,	// (0x000438a3) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6974,	// (0x000438a3) list_double2_large_graphic_pane_vc_g1

0x8d26,	// (0x00045c55) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x8d26,	// (0x00045c55) list_double2_large_graphic_pane_vc_g2

0x585d,	// (0x0004278c) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x585d,	// (0x0004278c) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa0d,	// (0x0004c93c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa0d,	// (0x0004c93c) list_double2_large_graphic_pane_vc_g

0x4f03,	// (0x00041e32) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x4f03,	// (0x00041e32) list_double2_large_graphic_pane_vc_t1

0x6980,	// (0x000438af) list_double_time_pane_vc_g1_ParamLimits

0x6980,	// (0x000438af) list_double_time_pane_vc_g1

0x698c,	// (0x000438bb) list_double_time_pane_vc_g2_ParamLimits

0x698c,	// (0x000438bb) list_double_time_pane_vc_g2

0x0001,

0xfa14,	// (0x0004c943) list_double_time_pane_vc_g_ParamLimits

0xfa14,	// (0x0004c943) list_double_time_pane_vc_g

0x4f19,	// (0x00041e48) list_double_time_pane_vc_t1_ParamLimits

0x4f19,	// (0x00041e48) list_double_time_pane_vc_t1

0x4f3d,	// (0x00041e6c) list_double_time_pane_vc_t2_ParamLimits

0x4f3d,	// (0x00041e6c) list_double_time_pane_vc_t2

0x4f8c,	// (0x00041ebb) list_double_time_pane_vc_t3_ParamLimits

0x4f8c,	// (0x00041ebb) list_double_time_pane_vc_t3

0x4f9e,	// (0x00041ecd) list_double_time_pane_vc_t4_ParamLimits

0x4f9e,	// (0x00041ecd) list_double_time_pane_vc_t4

0x0003,

0xfa19,	// (0x0004c948) list_double_time_pane_vc_t_ParamLimits

0xfa19,	// (0x0004c948) list_double_time_pane_vc_t

0x8d26,	// (0x00045c55) list_double_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_double_pane_vc_g1

0x585d,	// (0x0004278c) list_double_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_double_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_double_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_double_pane_vc_g

0x4fb2,	// (0x00041ee1) list_double_pane_vc_t1_ParamLimits

0x4fb2,	// (0x00041ee1) list_double_pane_vc_t1

0x4fc6,	// (0x00041ef5) list_double_pane_vc_t2_ParamLimits

0x4fc6,	// (0x00041ef5) list_double_pane_vc_t2

0x0001,

0xfa22,	// (0x0004c951) list_double_pane_vc_t_ParamLimits

0xfa22,	// (0x0004c951) list_double_pane_vc_t

0x8d26,	// (0x00045c55) list_double_number_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_double_number_pane_vc_g1

0x585d,	// (0x0004278c) list_double_number_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_double_number_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_double_number_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_double_number_pane_vc_g

0x4fde,	// (0x00041f0d) list_double_number_pane_vc_t1_ParamLimits

0x4fde,	// (0x00041f0d) list_double_number_pane_vc_t1

0x4ff0,	// (0x00041f1f) list_double_number_pane_vc_t2_ParamLimits

0x4ff0,	// (0x00041f1f) list_double_number_pane_vc_t2

0x5004,	// (0x00041f33) list_double_number_pane_vc_t3_ParamLimits

0x5004,	// (0x00041f33) list_double_number_pane_vc_t3

0x0002,

0xfa27,	// (0x0004c956) list_double_number_pane_vc_t_ParamLimits

0xfa27,	// (0x0004c956) list_double_number_pane_vc_t

0x6998,	// (0x000438c7) list_double_large_graphic_pane_vc_g1_ParamLimits

0x6998,	// (0x000438c7) list_double_large_graphic_pane_vc_g1

0x69b4,	// (0x000438e3) list_double_large_graphic_pane_vc_g2_ParamLimits

0x69b4,	// (0x000438e3) list_double_large_graphic_pane_vc_g2

0x69c8,	// (0x000438f7) list_double_large_graphic_pane_vc_g3_ParamLimits

0x69c8,	// (0x000438f7) list_double_large_graphic_pane_vc_g3

0x501c,	// (0x00041f4b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x501c,	// (0x00041f4b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2e,	// (0x0004c95d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2e,	// (0x0004c95d) list_double_large_graphic_pane_vc_g

0x502b,	// (0x00041f5a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x502b,	// (0x00041f5a) list_double_large_graphic_pane_vc_t1

0x5047,	// (0x00041f76) list_double_large_graphic_pane_vc_t2_ParamLimits

0x5047,	// (0x00041f76) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa37,	// (0x0004c966) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa37,	// (0x0004c966) list_double_large_graphic_pane_vc_t

0x8d26,	// (0x00045c55) list_double_heading_pane_vc_g1_ParamLimits

0x8d26,	// (0x00045c55) list_double_heading_pane_vc_g1

0x585d,	// (0x0004278c) list_double_heading_pane_vc_g2_ParamLimits

0x585d,	// (0x0004278c) list_double_heading_pane_vc_g2

0x0001,

0xf5ad,	// (0x0004c4dc) list_double_heading_pane_vc_g_ParamLimits

0xf5ad,	// (0x0004c4dc) list_double_heading_pane_vc_g

0x5069,	// (0x00041f98) list_double_heading_pane_vc_t1_ParamLimits

0x5069,	// (0x00041f98) list_double_heading_pane_vc_t1

0x507d,	// (0x00041fac) list_double_heading_pane_vc_t2_ParamLimits

0x507d,	// (0x00041fac) list_double_heading_pane_vc_t2

0x0001,

0xfa3c,	// (0x0004c96b) list_double_heading_pane_vc_t_ParamLimits

0xfa3c,	// (0x0004c96b) list_double_heading_pane_vc_t

0x5095,	// (0x00041fc4) list_double_graphic_pane_vc_g1_ParamLimits

0x5095,	// (0x00041fc4) list_double_graphic_pane_vc_g1

0x69d7,	// (0x00043906) list_double_graphic_pane_vc_g2_ParamLimits

0x69d7,	// (0x00043906) list_double_graphic_pane_vc_g2

0x8d26,	// (0x00045c55) list_double_graphic_pane_vc_g3_ParamLimits

0x8d26,	// (0x00045c55) list_double_graphic_pane_vc_g3

0x0003,

0xfa41,	// (0x0004c970) list_double_graphic_pane_vc_g_ParamLimits

0xfa41,	// (0x0004c970) list_double_graphic_pane_vc_g

0x50a1,	// (0x00041fd0) list_double_graphic_pane_vc_t1_ParamLimits

0x50a1,	// (0x00041fd0) list_double_graphic_pane_vc_t1

0x50cb,	// (0x00041ffa) list_double_graphic_pane_vc_t2_ParamLimits

0x50cb,	// (0x00041ffa) list_double_graphic_pane_vc_t2

0x0001,

0xfa4a,	// (0x0004c979) list_double_graphic_pane_vc_t_ParamLimits

0xfa4a,	// (0x0004c979) list_double_graphic_pane_vc_t

0x53f5,	// (0x00042324) aid_size_cell_fastswap

0x53fd,	// (0x0004232c) aid_size_cell_touch_ParamLimits

0x53fd,	// (0x0004232c) aid_size_cell_touch

0x5658,	// (0x00042587) popup_fast_swap_wide_window_ParamLimits

0x5658,	// (0x00042587) popup_fast_swap_wide_window

0x576c,	// (0x0004269b) touch_pane_ParamLimits

0x576c,	// (0x0004269b) touch_pane

0x84d2,	// (0x00045401) button_value_adjust_pane_cp2

0x4996,	// (0x000418c5) button_value_adjust_pane_cp4

0x49ba,	// (0x000418e9) form_field_data_pane_cp2

0x49db,	// (0x0004190a) form_field_data_wide_pane_cp2

0x8959,	// (0x00045888) bg_scroll_pane_ParamLimits

0x5a7d,	// (0x000429ac) scroll_handle_pane_ParamLimits

0x5a91,	// (0x000429c0) scroll_sc2_down_pane_ParamLimits

0x5a91,	// (0x000429c0) scroll_sc2_down_pane

0x898a,	// (0x000458b9) scroll_sc2_up_pane_ParamLimits

0x898a,	// (0x000458b9) scroll_sc2_up_pane

0xbbbc,	// (0x00048aeb) grid_wheel_folder_pane_g1_ParamLimits

0xbbbc,	// (0x00048aeb) grid_wheel_folder_pane_g1

0x5c72,	// (0x00042ba1) clock_nsta_pane_cp2_ParamLimits

0x5c72,	// (0x00042ba1) clock_nsta_pane_cp2

0x91af,	// (0x000460de) listscroll_midp_pane_ParamLimits

0x91bb,	// (0x000460ea) midp_canvas_pane

0x94a3,	// (0x000463d2) nsta_clock_indic_pane

0x94d7,	// (0x00046406) listscroll_form_pane_vc

0x94df,	// (0x0004640e) listscroll_set_pane_vc_ParamLimits

0x94df,	// (0x0004640e) listscroll_set_pane_vc

0x95d8,	// (0x00046507) clock_nsta_pane

0x9653,	// (0x00046582) indicator_nsta_pane

0x9933,	// (0x00046862) bg_popup_sub_pane_cp2_ParamLimits

0x9947,	// (0x00046876) find_pane_cp2_ParamLimits

0x9947,	// (0x00046876) find_pane_cp2

0x995d,	// (0x0004688c) grid_toobar_pane_ParamLimits

0x9a3d,	// (0x0004696c) list_form_gen_pane_vc_ParamLimits

0x9a3d,	// (0x0004696c) list_form_gen_pane_vc

0x9a53,	// (0x00046982) scroll_pane_cp8_vc_ParamLimits

0x9a53,	// (0x00046982) scroll_pane_cp8_vc

0x9acf,	// (0x000469fe) data_form_wide_pane_vc_ParamLimits

0x9acf,	// (0x000469fe) data_form_wide_pane_vc

0x9adb,	// (0x00046a0a) form_field_data_wide_pane_vc_g1

0x9ae3,	// (0x00046a12) form_field_data_wide_pane_vc_t1_ParamLimits

0x9ae3,	// (0x00046a12) form_field_data_wide_pane_vc_t1

0x84e6,	// (0x00045415) input_focus_pane_cp6_vc_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_cp6_vc

0x9e09,	// (0x00046d38) list_midp_pane_ParamLimits

0x9e15,	// (0x00046d44) scroll_pane_cp16_ParamLimits

0x9e15,	// (0x00046d44) scroll_pane_cp16

0x9e7f,	// (0x00046dae) button_value_adjust_pane_ParamLimits

0x9e7f,	// (0x00046dae) button_value_adjust_pane

0xadfc,	// (0x00047d2b) button_value_adjust_pane_cp6_ParamLimits

0xadfc,	// (0x00047d2b) button_value_adjust_pane_cp6

0xaf26,	// (0x00047e55) settings_code_pane_cp_ParamLimits

0xaf26,	// (0x00047e55) settings_code_pane_cp

0x26dc,	// (0x0003f60b) cell_touch_pane_g1

0x26dc,	// (0x0003f60b) cell_touch_pane_g2

0x0001,

0xf6e3,	// (0x0004c612) cell_touch_pane_g

0xb4e6,	// (0x00048415) cell_touch_pane_cp_ParamLimits

0xb4e6,	// (0x00048415) cell_touch_pane_cp

0xb4f6,	// (0x00048425) cell_touch_pane_ParamLimits

0xb4f6,	// (0x00048425) cell_touch_pane

0x26dc,	// (0x0003f60b) scroll_sc2_down_pane_g1

0x26dc,	// (0x0003f60b) scroll_sc2_up_pane_g1

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp4_vc

0xb508,	// (0x00048437) list_set_graphic_pane_vc_g1_ParamLimits

0xb508,	// (0x00048437) list_set_graphic_pane_vc_g1

0xb514,	// (0x00048443) list_set_graphic_pane_vc_g2_ParamLimits

0xb514,	// (0x00048443) list_set_graphic_pane_vc_g2

0x0001,

0xf9d3,	// (0x0004c902) list_set_graphic_pane_vc_g_ParamLimits

0xf9d3,	// (0x0004c902) list_set_graphic_pane_vc_g

0xb520,	// (0x0004844f) text_primary_small_cp13_vc_ParamLimits

0xb520,	// (0x0004844f) text_primary_small_cp13_vc

0xb538,	// (0x00048467) list_set_graphic_pane_vc_ParamLimits

0xb538,	// (0x00048467) list_set_graphic_pane_vc

0x7b6d,	// (0x00044a9c) input_focus_pane_cp2_vc

0x26dc,	// (0x0003f60b) setting_code_pane_vc_g1

0x7c98,	// (0x00044bc7) setting_code_pane_vc_t1

0xb54b,	// (0x0004847a) set_text_pane_vc_t1_ParamLimits

0xb54b,	// (0x0004847a) set_text_pane_vc_t1

0x7b6d,	// (0x00044a9c) input_focus_pane_cp1_vc

0xb567,	// (0x00048496) list_set_text_pane_vc

0x26dc,	// (0x0003f60b) setting_text_pane_vc_g1

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp2_vc

0x7c8f,	// (0x00044bbe) setting_slider_graphic_pane_vc_g1

0xb571,	// (0x000484a0) setting_slider_graphic_pane_vc_t1

0xb581,	// (0x000484b0) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9d8,	// (0x0004c907) setting_slider_graphic_pane_vc_t

0xb591,	// (0x000484c0) slider_set_pane_cp_vc

0xb599,	// (0x000484c8) slider_set_pane_vc_g1

0xb5a2,	// (0x000484d1) slider_set_pane_vc_g2

0x0006,

0xf9dd,	// (0x0004c90c) slider_set_pane_vc_g

0x8532,	// (0x00045461) set_opt_bg_pane_g1_copy1

0x853a,	// (0x00045469) set_opt_bg_pane_g2_copy1

0xb5ce,	// (0x000484fd) set_opt_bg_pane_g3_copy1

0x854a,	// (0x00045479) set_opt_bg_pane_g4_copy1

0x8552,	// (0x00045481) set_opt_bg_pane_g5_copy1

0x855a,	// (0x00045489) set_opt_bg_pane_g6_copy1

0xb5d8,	// (0x00048507) set_opt_bg_pane_g7_copy1

0xb5e2,	// (0x00048511) set_opt_bg_pane_g8_copy1

0xb5ec,	// (0x0004851b) set_opt_bg_pane_g9_copy1

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp_vc

0xb5f6,	// (0x00048525) setting_slider_pane_vc_t1

0xb605,	// (0x00048534) setting_slider_pane_vc_t2

0xb615,	// (0x00048544) setting_slider_pane_vc_t3

0x0002,

0xf9ec,	// (0x0004c91b) setting_slider_pane_vc_t

0xb625,	// (0x00048554) slider_set_pane_vc

0x6608,	// (0x00043537) volume_set_pane_vc_g1

0x6611,	// (0x00043540) volume_set_pane_vc_g2

0x661a,	// (0x00043549) volume_set_pane_vc_g3

0x6623,	// (0x00043552) volume_set_pane_vc_g4

0x662c,	// (0x0004355b) volume_set_pane_vc_g5

0x6635,	// (0x00043564) volume_set_pane_vc_g6

0x663e,	// (0x0004356d) volume_set_pane_vc_g7

0x6647,	// (0x00043576) volume_set_pane_vc_g8

0x6650,	// (0x0004357f) volume_set_pane_vc_g9

0x6659,	// (0x00043588) volume_set_pane_vc_g10

0x0009,

0xf891,	// (0x0004c7c0) volume_set_pane_vc_g

0xb62d,	// (0x0004855c) volume_set_pane_vc

0xb635,	// (0x00048564) button_value_adjust_pane_cp1_vc

0xb63f,	// (0x0004856e) list_highlight_pane_cp2_vc

0xb648,	// (0x00048577) list_set_pane_vc_ParamLimits

0xb648,	// (0x00048577) list_set_pane_vc

0xb6a6,	// (0x000485d5) main_pane_set_vc_t1_ParamLimits

0xb6a6,	// (0x000485d5) main_pane_set_vc_t1

0xb6bb,	// (0x000485ea) main_pane_set_vc_t2_ParamLimits

0xb6bb,	// (0x000485ea) main_pane_set_vc_t2

0xb6cd,	// (0x000485fc) main_pane_set_vc_t3_ParamLimits

0xb6cd,	// (0x000485fc) main_pane_set_vc_t3

0xb6e1,	// (0x00048610) main_pane_set_vc_t4_ParamLimits

0xb6e1,	// (0x00048610) main_pane_set_vc_t4

0x0003,

0xf9f3,	// (0x0004c922) main_pane_set_vc_t_ParamLimits

0xf9f3,	// (0x0004c922) main_pane_set_vc_t

0xb6f5,	// (0x00048624) setting_code_pane_vc_ParamLimits

0xb6f5,	// (0x00048624) setting_code_pane_vc

0xb706,	// (0x00048635) setting_slider_graphic_pane_vc

0xb706,	// (0x00048635) setting_slider_pane_vc

0xb706,	// (0x00048635) setting_text_pane_vc

0xb706,	// (0x00048635) setting_volume_pane_vc

0xb710,	// (0x0004863f) scroll_pane_cp121_vc

0x84c0,	// (0x000453ef) set_content_pane_vc

0xb718,	// (0x00048647) button_value_adjust_pane_g1

0xb721,	// (0x00048650) button_value_adjust_pane_g2

0x0001,

0xfa4f,	// (0x0004c97e) button_value_adjust_pane_g

0xb72a,	// (0x00048659) form_field_slider_wide_pane_vc_t1_ParamLimits

0xb72a,	// (0x00048659) form_field_slider_wide_pane_vc_t1

0xb73e,	// (0x0004866d) form_field_slider_wide_pane_vc_t2_ParamLimits

0xb73e,	// (0x0004866d) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa54,	// (0x0004c983) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa54,	// (0x0004c983) form_field_slider_wide_pane_vc_t

0x7ec8,	// (0x00044df7) input_focus_pane_cp10_vc_ParamLimits

0x7ec8,	// (0x00044df7) input_focus_pane_cp10_vc

0xb76c,	// (0x0004869b) slider_cont_pane_cp1_vc_ParamLimits

0xb76c,	// (0x0004869b) slider_cont_pane_cp1_vc

0xb77e,	// (0x000486ad) slider_form_pane_g1_cp2

0xb5a2,	// (0x000484d1) slider_form_pane_g2_cp2

0xb7ab,	// (0x000486da) form_field_slider_pane_vc_t3

0xb7b9,	// (0x000486e8) form_field_slider_pane_vc_t4

0xb7c7,	// (0x000486f6) slider_form_pane_vc_ParamLimits

0xb7c7,	// (0x000486f6) slider_form_pane_vc

0xb7d4,	// (0x00048703) form_field_slider_pane_vc_t1_ParamLimits

0xb7d4,	// (0x00048703) form_field_slider_pane_vc_t1

0xb73e,	// (0x0004866d) form_field_slider_pane_vc_t2_ParamLimits

0xb73e,	// (0x0004866d) form_field_slider_pane_vc_t2

0x0001,

0xfa66,	// (0x0004c995) form_field_slider_pane_vc_t_ParamLimits

0xfa66,	// (0x0004c995) form_field_slider_pane_vc_t

0x7ec8,	// (0x00044df7) input_focus_pane_cp9_vc_ParamLimits

0x7ec8,	// (0x00044df7) input_focus_pane_cp9_vc

0xb7f0,	// (0x0004871f) slider_cont_pane_vc_ParamLimits

0xb7f0,	// (0x0004871f) slider_cont_pane_vc

0xb804,	// (0x00048733) list_form_graphic_pane_cp_vc_ParamLimits

0xb804,	// (0x00048733) list_form_graphic_pane_cp_vc

0x9adb,	// (0x00046a0a) form_field_popup_wide_pane_vc_g1

0xb819,	// (0x00048748) form_field_popup_wide_pane_vc_t1_ParamLimits

0xb819,	// (0x00048748) form_field_popup_wide_pane_vc_t1

0x84e6,	// (0x00045415) input_focus_pane_cp8_vc_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_cp8_vc

0xb85e,	// (0x0004878d) list_form_wide_pane_vc_ParamLimits

0xb85e,	// (0x0004878d) list_form_wide_pane_vc

0xb86a,	// (0x00048799) list_form_graphic_pane_vc_g1

0xb872,	// (0x000487a1) list_form_graphic_pane_vc_t1_ParamLimits

0xb872,	// (0x000487a1) list_form_graphic_pane_vc_t1

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp5_vc_ParamLimits

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp5_vc

0xb88e,	// (0x000487bd) list_form_graphic_pane_vc_ParamLimits

0xb88e,	// (0x000487bd) list_form_graphic_pane_vc

0x9adb,	// (0x00046a0a) form_field_popup_pane_vc_g1

0xb8a4,	// (0x000487d3) form_field_popup_pane_vc_t1_ParamLimits

0xb8a4,	// (0x000487d3) form_field_popup_pane_vc_t1

0x84e6,	// (0x00045415) input_focus_pane_cp7_vc_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_cp7_vc

0xb8bb,	// (0x000487ea) list_form_pane_vc_ParamLimits

0xb8bb,	// (0x000487ea) list_form_pane_vc

0xb8c7,	// (0x000487f6) data_form_pane_vc_t1_ParamLimits

0xb8c7,	// (0x000487f6) data_form_pane_vc_t1

0x8532,	// (0x00045461) input_focus_pane_vc_g1

0x853a,	// (0x00045469) input_focus_pane_vc_g2

0x8542,	// (0x00045471) input_focus_pane_vc_g3

0x854a,	// (0x00045479) input_focus_pane_vc_g4

0x8552,	// (0x00045481) input_focus_pane_vc_g5

0x855a,	// (0x00045489) input_focus_pane_vc_g6

0x8562,	// (0x00045491) input_focus_pane_vc_g7

0x856a,	// (0x00045499) input_focus_pane_vc_g8

0x8572,	// (0x000454a1) input_focus_pane_vc_g9

0x26dc,	// (0x0003f60b) input_focus_pane_vc_g10

0x0009,

0xf66c,	// (0x0004c59b) input_focus_pane_vc_g

0x9acf,	// (0x000469fe) data_form_pane_vc_ParamLimits

0x9acf,	// (0x000469fe) data_form_pane_vc

0x9adb,	// (0x00046a0a) form_field_data_pane_vc_g1

0xb8e2,	// (0x00048811) form_field_data_pane_vc_t1_ParamLimits

0xb8e2,	// (0x00048811) form_field_data_pane_vc_t1

0x84e6,	// (0x00045415) input_focus_pane_vc_ParamLimits

0x84e6,	// (0x00045415) input_focus_pane_vc

0xb8fc,	// (0x0004882b) button_value_adjust_pane_cp3_vc

0xb904,	// (0x00048833) button_value_adjust_pane_cp5_vc

0xb90c,	// (0x0004883b) form_field_data_pane_vc_ParamLimits

0xb90c,	// (0x0004883b) form_field_data_pane_vc

0xb923,	// (0x00048852) form_field_data_pane_vc_cp2

0xb92b,	// (0x0004885a) form_field_data_wide_pane_vc_ParamLimits

0xb92b,	// (0x0004885a) form_field_data_wide_pane_vc

0xb941,	// (0x00048870) form_field_data_wide_pane_vc_cp2

0xb949,	// (0x00048878) form_field_popup_pane_vc_ParamLimits

0xb949,	// (0x00048878) form_field_popup_pane_vc

0xb960,	// (0x0004888f) form_field_popup_wide_pane_vc_ParamLimits

0xb960,	// (0x0004888f) form_field_popup_wide_pane_vc

0xb976,	// (0x000488a5) form_field_slider_pane_vc_ParamLimits

0xb976,	// (0x000488a5) form_field_slider_pane_vc

0xb989,	// (0x000488b8) form_field_slider_wide_pane_vc_ParamLimits

0xb989,	// (0x000488b8) form_field_slider_wide_pane_vc

0xb99c,	// (0x000488cb) grid_touch_1_pane_ParamLimits

0xb99c,	// (0x000488cb) grid_touch_1_pane

0xb9a8,	// (0x000488d7) grid_touch_2_pane_ParamLimits

0xb9a8,	// (0x000488d7) grid_touch_2_pane

0x946e,	// (0x0004639d) touch_pane_g1_ParamLimits

0x946e,	// (0x0004639d) touch_pane_g1

0xb9c0,	// (0x000488ef) cell_app_pane_cp_wide_ParamLimits

0xb9c0,	// (0x000488ef) cell_app_pane_cp_wide

0xb9d1,	// (0x00048900) grid_popup_fast_wide_pane_ParamLimits

0xb9d1,	// (0x00048900) grid_popup_fast_wide_pane

0xb9e5,	// (0x00048914) scroll_pane_cp19_ParamLimits

0xb9e5,	// (0x00048914) scroll_pane_cp19

0x7b6d,	// (0x00044a9c) bg_popup_window_pane_cp20

0xb9f9,	// (0x00048928) listscroll_popup_fast_wide_pane

0xba01,	// (0x00048930) grid_indicator_nsta_pane

0xba13,	// (0x00048942) clock_nsta_pane_g1

0xba1c,	// (0x0004894b) clock_nsta_pane_t1

0xba38,	// (0x00048967) cell_indicator_nsta_pane_ParamLimits

0xba38,	// (0x00048967) cell_indicator_nsta_pane

0xba6d,	// (0x0004899c) cell_indicator_nsta_pane_g1

0xba7b,	// (0x000489aa) cell_indicator_nsta_pane_g2

0x0001,

0xfa77,	// (0x0004c9a6) cell_indicator_nsta_pane_g

0xba8d,	// (0x000489bc) clock_nsta_pane_cp

0xba96,	// (0x000489c5) indicator_nsta_pane_cp

0xbaa0,	// (0x000489cf) nsta_clock_indic_pane_g1

0x7d16,	// (0x00044c45) grid_indicator_pane

0x8a7f,	// (0x000459ae) scroll_pane_cp29

0x5bc1,	// (0x00042af0) indicator_nsta_pane_cp2_ParamLimits

0x5bc1,	// (0x00042af0) indicator_nsta_pane_cp2

0x7c4d,	// (0x00044b7c) main_apps_wheel_pane

0x9cea,	// (0x00046c19) form_midp_field_text_pane_ParamLimits

0x9e35,	// (0x00046d64) scroll_bar_cp050_ParamLimits

0xbaf9,	// (0x00048a28) cell_indicator_pane_ParamLimits

0xbaf9,	// (0x00048a28) cell_indicator_pane

0xbb10,	// (0x00048a3f) cell_indicator_pane_g1

0xbb1a,	// (0x00048a49) grid_wheel_folder_pane_ParamLimits

0xbb1a,	// (0x00048a49) grid_wheel_folder_pane

0xbb30,	// (0x00048a5f) list_wheel_apps_pane_ParamLimits

0xbb30,	// (0x00048a5f) list_wheel_apps_pane

0xbb41,	// (0x00048a70) main_apps_wheel_pane_g1_ParamLimits

0xbb41,	// (0x00048a70) main_apps_wheel_pane_g1

0xbb55,	// (0x00048a84) main_apps_wheel_pane_g2_ParamLimits

0xbb55,	// (0x00048a84) main_apps_wheel_pane_g2

0x0001,

0xfa93,	// (0x0004c9c2) main_apps_wheel_pane_g_ParamLimits

0xfa93,	// (0x0004c9c2) main_apps_wheel_pane_g

0xbb6d,	// (0x00048a9c) main_apps_wheel_pane_t1_ParamLimits

0xbb6d,	// (0x00048a9c) main_apps_wheel_pane_t1

0xbb90,	// (0x00048abf) list_wheel_apps_pane_g1

0xbb98,	// (0x00048ac7) list_wheel_apps_pane_g2

0xbba0,	// (0x00048acf) list_wheel_apps_pane_g3

0xbba8,	// (0x00048ad7) list_wheel_apps_pane_g4

0xbbb2,	// (0x00048ae1) list_wheel_apps_pane_g5

0x0004,

0xfa98,	// (0x0004c9c7) list_wheel_apps_pane_g

0x902a,	// (0x00045f59) navi_icon_text_pane

0x9507,	// (0x00046436) aid_fill_nsta

0xbbd5,	// (0x00048b04) navi_icon_text_pane_g1

0xbbe1,	// (0x00048b10) navi_icon_text_pane_t1

0x8ebd,	// (0x00045dec) list_set_graphic_pane_t1_ParamLimits

0x8ebd,	// (0x00045dec) list_set_graphic_pane_t1

0xa5ac,	// (0x000474db) popup_midp_note_alarm_window_t6_ParamLimits

0xa5ac,	// (0x000474db) popup_midp_note_alarm_window_t6

0xa5be,	// (0x000474ed) popup_midp_note_alarm_window_t7_ParamLimits

0xa5be,	// (0x000474ed) popup_midp_note_alarm_window_t7

0xa5d0,	// (0x000474ff) popup_midp_note_alarm_window_t8_ParamLimits

0xa5d0,	// (0x000474ff) popup_midp_note_alarm_window_t8

0xa5e2,	// (0x00047511) popup_midp_note_alarm_window_t9_ParamLimits

0xa5e2,	// (0x00047511) popup_midp_note_alarm_window_t9

0xa5f4,	// (0x00047523) popup_midp_note_alarm_window_t10_ParamLimits

0xa5f4,	// (0x00047523) popup_midp_note_alarm_window_t10

0xa606,	// (0x00047535) popup_midp_note_alarm_window_t11_ParamLimits

0xa606,	// (0x00047535) popup_midp_note_alarm_window_t11

0xa618,	// (0x00047547) scroll_pane_cp17_ParamLimits

0xa618,	// (0x00047547) scroll_pane_cp17

0x6608,	// (0x00043537) volume_small_pane_cp_g1

0x69f4,	// (0x00043923) volume_small_pane_cp_g2

0x69fd,	// (0x0004392c) volume_small_pane_cp_g3

0x6a06,	// (0x00043935) volume_small_pane_cp_g4

0x6a0f,	// (0x0004393e) volume_small_pane_cp_g5

0x6a18,	// (0x00043947) volume_small_pane_cp_g6

0x6a21,	// (0x00043950) volume_small_pane_cp_g7

0x6a2a,	// (0x00043959) volume_small_pane_cp_g8

0x6a33,	// (0x00043962) volume_small_pane_cp_g9

0x6a3c,	// (0x0004396b) volume_small_pane_cp_g10

0x9284,	// (0x000461b3) midp_ticker_pane_g1_ParamLimits

0x9290,	// (0x000461bf) midp_ticker_pane_g2_ParamLimits

0xf738,	// (0x0004c667) midp_ticker_pane_g_ParamLimits

0x929c,	// (0x000461cb) midp_ticker_pane_t1_ParamLimits

0x951d,	// (0x0004644c) aid_fill_nsta_2

0x9e21,	// (0x00046d50) list_form2_midp_pane

0xaf71,	// (0x00047ea0) midp_editing_number_pane_ParamLimits

0xaf80,	// (0x00047eaf) midp_ticker_pane_ParamLimits

0xbbf3,	// (0x00048b22) form2_midp_field_pane

0xbc17,	// (0x00048b46) scroll_pane_cp51

0xbc37,	// (0x00048b66) form2_midp_button_pane_ParamLimits

0xbc37,	// (0x00048b66) form2_midp_button_pane

0xbc49,	// (0x00048b78) form2_midp_content_pane_ParamLimits

0xbc49,	// (0x00048b78) form2_midp_content_pane

0xbc63,	// (0x00048b92) form2_midp_field_choice_group_pane

0xbc6b,	// (0x00048b9a) form2_midp_field_pane_g1

0xbc73,	// (0x00048ba2) form2_midp_field_pane_g2

0xbc7b,	// (0x00048baa) form2_midp_field_pane_g3

0xbc83,	// (0x00048bb2) form2_midp_field_pane_g4

0x0003,

0xfabd,	// (0x0004c9ec) form2_midp_field_pane_g

0xbc8b,	// (0x00048bba) form2_midp_gauge_slider_pane

0xbc93,	// (0x00048bc2) form2_midp_gauge_wait_pane

0xbc9b,	// (0x00048bca) form2_midp_image_pane_ParamLimits

0xbc9b,	// (0x00048bca) form2_midp_image_pane

0xbcb6,	// (0x00048be5) form2_midp_label_pane_ParamLimits

0xbcb6,	// (0x00048be5) form2_midp_label_pane

0xbccf,	// (0x00048bfe) form2_midp_label_pane_cp_ParamLimits

0xbccf,	// (0x00048bfe) form2_midp_label_pane_cp

0xbcf0,	// (0x00048c1f) form2_midp_string_pane_ParamLimits

0xbcf0,	// (0x00048c1f) form2_midp_string_pane

0x50f5,	// (0x00042024) form2_midp_text_pane_ParamLimits

0x50f5,	// (0x00042024) form2_midp_text_pane

0xbd02,	// (0x00048c31) form2_midp_time_pane

0xbd12,	// (0x00048c41) input_focus_pane_cp51_ParamLimits

0xbd12,	// (0x00048c41) input_focus_pane_cp51

0xbd2a,	// (0x00048c59) form2_midp_label_pane_t1_ParamLimits

0xbd2a,	// (0x00048c59) form2_midp_label_pane_t1

0x5114,	// (0x00042043) form2_mdip_text_pane_t1_ParamLimits

0x5114,	// (0x00042043) form2_mdip_text_pane_t1

0x5132,	// (0x00042061) form2_midp_time_pane_t1

0xbd73,	// (0x00048ca2) form2_midp_gauge_slider_pane_t1

0xbd85,	// (0x00048cb4) form2_midp_gauge_slider_pane_t2

0xbd97,	// (0x00048cc6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac6,	// (0x0004c9f5) form2_midp_gauge_slider_pane_t

0xbda9,	// (0x00048cd8) form2_midp_slider_pane

0xbdb5,	// (0x00048ce4) form2_midp_gauge_wait_pane_t1

0xbdc3,	// (0x00048cf2) form2_midp_wait_pane_ParamLimits

0xbdc3,	// (0x00048cf2) form2_midp_wait_pane

0xbdee,	// (0x00048d1d) list_single_2graphic_pane_cp4_ParamLimits

0xbdee,	// (0x00048d1d) list_single_2graphic_pane_cp4

0x9b43,	// (0x00046a72) list_single_midp_graphic_pane_cp_ParamLimits

0x9b43,	// (0x00046a72) list_single_midp_graphic_pane_cp

0x7b6d,	// (0x00044a9c) list_highlight_pane_cp20

0xbe12,	// (0x00048d41) list_single_2graphic_pane_g1_cp4

0xbe1a,	// (0x00048d49) list_single_2graphic_pane_g2_cp4

0xbe22,	// (0x00048d51) list_single_2graphic_pane_t1_cp4

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp21

0xbe31,	// (0x00048d60) list_single_midp_graphic_pane_g4_cp

0xbe40,	// (0x00048d6f) list_single_midp_graphic_pane_t1_cp

0xbe55,	// (0x00048d84) form2_mdip_string_pane_t1_ParamLimits

0xbe55,	// (0x00048d84) form2_mdip_string_pane_t1

0x7b6d,	// (0x00044a9c) bg_wml_button_pane_cp2

0x26dc,	// (0x0003f60b) form2_midp_image_pane_g1

0x58cb,	// (0x000427fa) list_double_large_graphic_pane_g5_ParamLimits

0x58cb,	// (0x000427fa) list_double_large_graphic_pane_g5

0x91af,	// (0x000460de) midp_form_pane_ParamLimits

0x7c4d,	// (0x00044b7c) main_apps_wheel_pane_ParamLimits

0x62a8,	// (0x000431d7) popup_preview_window_ParamLimits

0x62a8,	// (0x000431d7) popup_preview_window

0x6463,	// (0x00043392) popup_touch_info_window_ParamLimits

0x6463,	// (0x00043392) popup_touch_info_window

0x6481,	// (0x000433b0) popup_touch_menu_window_ParamLimits

0x6481,	// (0x000433b0) popup_touch_menu_window

0x26d2,	// (0x0003f601) bg_popup_sub_pane_cp6

0xbf4e,	// (0x00048e7d) list_touch_menu_pane

0xbf56,	// (0x00048e85) list_single_touch_menu_pane_ParamLimits

0xbf56,	// (0x00048e85) list_single_touch_menu_pane

0xbf6c,	// (0x00048e9b) list_single_touch_menu_pane_t1

0x7c4d,	// (0x00044b7c) bg_popup_sub_pane_cp7_ParamLimits

0x7c4d,	// (0x00044b7c) bg_popup_sub_pane_cp7

0xbf7a,	// (0x00048ea9) heading_sub_pane

0xbf82,	// (0x00048eb1) list_touch_info_pane_ParamLimits

0xbf82,	// (0x00048eb1) list_touch_info_pane

0xbf91,	// (0x00048ec0) list_single_touch_info_pane_ParamLimits

0xbf91,	// (0x00048ec0) list_single_touch_info_pane

0xbfa3,	// (0x00048ed2) list_single_touch_info_pane_t1

0xbfb1,	// (0x00048ee0) list_single_touch_info_pane_t2

0x0001,

0xfad4,	// (0x0004ca03) list_single_touch_info_pane_t

0x91a7,	// (0x000460d6) bg_popup_heading_pane_cp

0xbfbf,	// (0x00048eee) heading_sub_pane_t1

0x9a69,	// (0x00046998) bg_popup_preview_window_pane_cp_ParamLimits

0x9a69,	// (0x00046998) bg_popup_preview_window_pane_cp

0xbf7a,	// (0x00048ea9) heading_preview_pane

0xbf82,	// (0x00048eb1) list_preview_pane_ParamLimits

0xbf82,	// (0x00048eb1) list_preview_pane

0xbfcd,	// (0x00048efc) popup_preview_window_g1

0xbf91,	// (0x00048ec0) list_single_preview_pane_ParamLimits

0xbf91,	// (0x00048ec0) list_single_preview_pane

0xbfd5,	// (0x00048f04) list_single_preview_pane_g1

0xbfdd,	// (0x00048f0c) list_single_preview_pane_t1

0xbfa3,	// (0x00048ed2) list_single_preview_pane_t2

0x0001,

0xfad9,	// (0x0004ca08) list_single_preview_pane_t

0xbfeb,	// (0x00048f1a) bg_popup_heading_pane_cp2_ParamLimits

0xbfeb,	// (0x00048f1a) bg_popup_heading_pane_cp2

0xc001,	// (0x00048f30) heading_preview_pane_g1

0xc009,	// (0x00048f38) heading_preview_pane_t1_ParamLimits

0xc009,	// (0x00048f38) heading_preview_pane_t1

0x7d39,	// (0x00044c68) soft_indicator_pane_t1_ParamLimits

0x844d,	// (0x0004537c) scroll_pane_ParamLimits

0x8978,	// (0x000458a7) scroll_sc2_left_pane

0x8981,	// (0x000458b0) scroll_sc2_right_pane

0x89a0,	// (0x000458cf) scroll_bg_pane_g1_ParamLimits

0x89b5,	// (0x000458e4) scroll_bg_pane_g2_ParamLimits

0x89cd,	// (0x000458fc) scroll_bg_pane_g3_ParamLimits

0xf6c3,	// (0x0004c5f2) scroll_bg_pane_g_ParamLimits

0x89a0,	// (0x000458cf) scroll_handle_pane_g1_ParamLimits

0x89ef,	// (0x0004591e) scroll_handle_pane_g2_ParamLimits

0x89cd,	// (0x000458fc) scroll_handle_pane_g3_ParamLimits

0xf6ca,	// (0x0004c5f9) scroll_handle_pane_g_ParamLimits

0x5f27,	// (0x00042e56) popup_choice_list_window_ParamLimits

0x5f27,	// (0x00042e56) popup_choice_list_window

0x993f,	// (0x0004686e) choice_list_pane

0x99c1,	// (0x000468f0) cell_toolbar_pane_t1

0x99e9,	// (0x00046918) toolbar_button_pane_ParamLimits

0xaad2,	// (0x00047a01) ai_gene_pane_1_t2_ParamLimits

0xaad2,	// (0x00047a01) ai_gene_pane_1_t2

0x0001,

0xf8ed,	// (0x0004c81c) ai_gene_pane_1_t_ParamLimits

0xf8ed,	// (0x0004c81c) ai_gene_pane_1_t

0xc026,	// (0x00048f55) scroll_sc2_left_pane_g1

0xc026,	// (0x00048f55) scroll_sc2_right_pane_g1

0x94cb,	// (0x000463fa) bg_popup_sub_pane_cp10

0xc030,	// (0x00048f5f) list_choice_list_pane

0xc049,	// (0x00048f78) list_single_choice_list_pane_ParamLimits

0xc049,	// (0x00048f78) list_single_choice_list_pane

0xc05c,	// (0x00048f8b) list_single_choice_list_pane_g1

0x867e,	// (0x000455ad) list_single_choice_list_pane_t1_ParamLimits

0x867e,	// (0x000455ad) list_single_choice_list_pane_t1

0xc064,	// (0x00048f93) choice_list_pane_g1

0xc06c,	// (0x00048f9b) choice_list_pane_t1

0x26d2,	// (0x0003f601) input_focus_pane_cp11

0x8855,	// (0x00045784) title_pane_stacon_g2_ParamLimits

0x8855,	// (0x00045784) title_pane_stacon_g2

0x0002,

0xf6a9,	// (0x0004c5d8) title_pane_stacon_g_ParamLimits

0xf6a9,	// (0x0004c5d8) title_pane_stacon_g

0x91a7,	// (0x000460d6) cursor_press_pane

0x5fd3,	// (0x00042f02) popup_fep_hwr_window_ParamLimits

0x5fd3,	// (0x00042f02) popup_fep_hwr_window

0x604d,	// (0x00042f7c) popup_fep_vkb_window_ParamLimits

0x604d,	// (0x00042f7c) popup_fep_vkb_window

0xc07a,	// (0x00048fa9) cursor_press_pane_g1

0x0002,

0xfb02,	// (0x0004ca31) fep_vkb_side_pane_g_ParamLimits

0x6a7e,	// (0x000439ad) fep_hwr_candidate_pane_ParamLimits

0x6a7e,	// (0x000439ad) fep_hwr_candidate_pane

0x6aa8,	// (0x000439d7) fep_hwr_side_pane_ParamLimits

0x6aa8,	// (0x000439d7) fep_hwr_side_pane

0x6ac8,	// (0x000439f7) fep_hwr_top_pane_ParamLimits

0x6ac8,	// (0x000439f7) fep_hwr_top_pane

0x6ae0,	// (0x00043a0f) fep_hwr_write_pane_ParamLimits

0x6ae0,	// (0x00043a0f) fep_hwr_write_pane

0xfb02,	// (0x0004ca31) fep_vkb_side_pane_g

0xc082,	// (0x00048fb1) fep_hwr_top_pane_g1

0xc094,	// (0x00048fc3) fep_hwr_top_pane_g2

0x6b0c,	// (0x00043a3b) fep_hwr_top_pane_g3

0x0002,

0xfade,	// (0x0004ca0d) fep_hwr_top_pane_g

0x6b21,	// (0x00043a50) fep_hwr_top_text_pane

0x8b6f,	// (0x00045a9e) fep_hwr_top_text_pane_g1

0xc0ca,	// (0x00048ff9) fep_hwr_top_text_pane_t1

0x6c17,	// (0x00043b46) fep_hwr_candidate_pane_g1

0xc31d,	// (0x0004924c) fep_vkb_keypad_pane_g3_ParamLimits

0xc31d,	// (0x0004924c) fep_vkb_keypad_pane_g3

0xc345,	// (0x00049274) fep_vkb_keypad_pane_g4_ParamLimits

0xc345,	// (0x00049274) fep_vkb_keypad_pane_g4

0xc3b4,	// (0x000492e3) fep_vkb_bottom_pane_g2_ParamLimits

0xc3b4,	// (0x000492e3) fep_vkb_bottom_pane_g2

0x0001,

0xfb09,	// (0x0004ca38) fep_vkb_bottom_pane_g_ParamLimits

0xfb09,	// (0x0004ca38) fep_vkb_bottom_pane_g

0xc026,	// (0x00048f55) cell_vkb_side_pane_g2

0x0001,

0xfb13,	// (0x0004ca42) cell_vkb_side_pane_g

0xc43f,	// (0x0004936e) cell_vkb_side_pane_t1

0xc44d,	// (0x0004937c) cell_vkb_side_pane_t1_copy1

0xc026,	// (0x00048f55) bg_fep_vkb_candidate_pane_g2

0xc579,	// (0x000494a8) cell_vkb_candidate_pane_ParamLimits

0xc0d8,	// (0x00049007) aid_size_cell_vkb_ParamLimits

0xc0d8,	// (0x00049007) aid_size_cell_vkb

0xc579,	// (0x000494a8) cell_vkb_candidate_pane

0x6c31,	// (0x00043b60) bg_popup_fep_shadow_pane_g1

0xc166,	// (0x00049095) fep_vkb_bottom_pane_ParamLimits

0xc166,	// (0x00049095) fep_vkb_bottom_pane

0xc19c,	// (0x000490cb) fep_vkb_candidate_pane_ParamLimits

0xc19c,	// (0x000490cb) fep_vkb_candidate_pane

0xc1b8,	// (0x000490e7) fep_vkb_keypad_pane_ParamLimits

0xc1b8,	// (0x000490e7) fep_vkb_keypad_pane

0xc1fe,	// (0x0004912d) fep_vkb_side_pane_ParamLimits

0xc1fe,	// (0x0004912d) fep_vkb_side_pane

0xc23a,	// (0x00049169) fep_vkb_top_pane_ParamLimits

0xc23a,	// (0x00049169) fep_vkb_top_pane

0xc276,	// (0x000491a5) fep_vkb_top_pane_g1_ParamLimits

0xc276,	// (0x000491a5) fep_vkb_top_pane_g1

0xc285,	// (0x000491b4) fep_vkb_top_pane_g2_ParamLimits

0xc285,	// (0x000491b4) fep_vkb_top_pane_g2

0xc294,	// (0x000491c3) fep_vkb_top_pane_g3_ParamLimits

0xc294,	// (0x000491c3) fep_vkb_top_pane_g3

0x0003,

0xfaf9,	// (0x0004ca28) fep_vkb_top_pane_g_ParamLimits

0xfaf9,	// (0x0004ca28) fep_vkb_top_pane_g

0xc2b2,	// (0x000491e1) fep_vkb_top_text_pane_ParamLimits

0xc2b2,	// (0x000491e1) fep_vkb_top_text_pane

0xc2c3,	// (0x000491f2) fep_vkb_side_pane_g1_ParamLimits

0xc2c3,	// (0x000491f2) fep_vkb_side_pane_g1

0xc30c,	// (0x0004923b) grid_vkb_side_pane_ParamLimits

0xc30c,	// (0x0004923b) grid_vkb_side_pane

0x6c39,	// (0x00043b68) bg_popup_fep_shadow_pane_g2

0x6c42,	// (0x00043b71) bg_popup_fep_shadow_pane_g3

0x6c4a,	// (0x00043b79) bg_popup_fep_shadow_pane_g4

0x6c53,	// (0x00043b82) bg_popup_fep_shadow_pane_g5

0x6c5d,	// (0x00043b8c) bg_popup_fep_shadow_pane_g6

0x6c65,	// (0x00043b94) bg_popup_fep_shadow_pane_g7

0x8552,	// (0x00045481) bg_popup_fep_shadow_pane_g8

0xc363,	// (0x00049292) grid_vkb_keypad_number_pane_ParamLimits

0xc363,	// (0x00049292) grid_vkb_keypad_number_pane

0xc373,	// (0x000492a2) grid_vkb_keypad_pane_ParamLimits

0xc373,	// (0x000492a2) grid_vkb_keypad_pane

0xc399,	// (0x000492c8) fep_vkb_bottom_pane_g1_ParamLimits

0xc399,	// (0x000492c8) fep_vkb_bottom_pane_g1

0xc3c2,	// (0x000492f1) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xc3c2,	// (0x000492f1) grid_vkb_keypad_bottom_left_pane

0xc3d7,	// (0x00049306) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xc3d7,	// (0x00049306) grid_vkb_keypad_bottom_right_pane

0xc3ec,	// (0x0004931b) fep_vkb_top_text_pane_g1

0xc407,	// (0x00049336) fep_vkb_top_text_pane_t1

0xc41c,	// (0x0004934b) cell_vkb_side_pane_ParamLimits

0xc41c,	// (0x0004934b) cell_vkb_side_pane

0xc026,	// (0x00048f55) cell_vkb_side_pane_g1

0xc45b,	// (0x0004938a) cell_vkb_keypad_pane_ParamLimits

0xc45b,	// (0x0004938a) cell_vkb_keypad_pane

0xc4d0,	// (0x000493ff) cell_vkb_keypad_pane_g1

0x0008,

0xfb26,	// (0x0004ca55) bg_popup_fep_shadow_pane_g

0xc026,	// (0x00048f55) cell_hwr_side_pane_g1

0xc026,	// (0x00048f55) cell_hwr_side_pane_g2

0xc4da,	// (0x00049409) cell_vkb_keypad_pane_t1

0xc4e8,	// (0x00049417) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc4e8,	// (0x00049417) cell_vkb_keypad_bottom_left_pane

0xc505,	// (0x00049434) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc505,	// (0x00049434) cell_vkb_keypad_bottom_right_pane

0xc026,	// (0x00048f55) cell_vkb_keypad_bottom_left_pane_g1

0xc026,	// (0x00048f55) cell_vkb_keypad_bottom_right_pane_g1

0xc53e,	// (0x0004946d) cell_vkb_keypad_number_pane_ParamLimits

0xc53e,	// (0x0004946d) cell_vkb_keypad_number_pane

0xc55d,	// (0x0004948c) cell_vkb_keypad_number_pane_g1

0xc567,	// (0x00049496) cell_vkb_keypad_number_pane_g2

0xc570,	// (0x0004949f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb18,	// (0x0004ca47) cell_vkb_keypad_number_pane_g

0xc4da,	// (0x00049409) cell_vkb_keypad_number_pane_t1

0xc594,	// (0x000494c3) fep_vkb_candidate_pane_g1

0x0001,

0xfb13,	// (0x0004ca42) cell_hwr_side_pane_g

0xc5ad,	// (0x000494dc) cell_hwr_side_pane_t1

0x6c77,	// (0x00043ba6) cell_hwr_side_pane_t1_copy1

0xc2a4,	// (0x000491d3) cell_hwr_candidate_pane_g1

0x6c85,	// (0x00043bb4) cell_hwr_candidate_pane_t1

0xc026,	// (0x00048f55) cell_vkb_candidate_pane_g2

0xc633,	// (0x00049562) cell_vkb_candidate_pane_t1

0x6a45,	// (0x00043974) bg_popup_fep_shadow_pane_ParamLimits

0x6a45,	// (0x00043974) bg_popup_fep_shadow_pane

0x26a2,	// (0x0003f5d1) bg_fep_hwr_top_pane_g4

0xc0a6,	// (0x00048fd5) bg_hwr_side_pane_g1_ParamLimits

0xc0a6,	// (0x00048fd5) bg_hwr_side_pane_g1

0x6b5d,	// (0x00043a8c) cell_hwr_side_pane_ParamLimits

0x6b5d,	// (0x00043a8c) cell_hwr_side_pane

0x6b98,	// (0x00043ac7) fep_hwr_write_pane_g1_ParamLimits

0x6b98,	// (0x00043ac7) fep_hwr_write_pane_g1

0x6ba5,	// (0x00043ad4) fep_hwr_write_pane_g2_ParamLimits

0x6ba5,	// (0x00043ad4) fep_hwr_write_pane_g2

0x6bb2,	// (0x00043ae1) fep_hwr_write_pane_g3_ParamLimits

0x6bb2,	// (0x00043ae1) fep_hwr_write_pane_g3

0x6bc0,	// (0x00043aef) fep_hwr_write_pane_g4_ParamLimits

0x6bc0,	// (0x00043aef) fep_hwr_write_pane_g4

0x0005,

0xfae5,	// (0x0004ca14) fep_hwr_write_pane_g_ParamLimits

0xfae5,	// (0x0004ca14) fep_hwr_write_pane_g

0x26a2,	// (0x0003f5d1) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x26a2,	// (0x0003f5d1) bg_fep_hwr_candidate_pane_g2

0x6bd5,	// (0x00043b04) cell_hwr_candidate_pane_ParamLimits

0x6bd5,	// (0x00043b04) cell_hwr_candidate_pane

0x6c17,	// (0x00043b46) fep_hwr_candidate_pane_g1_ParamLimits

0xc106,	// (0x00049035) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xc106,	// (0x00049035) bg_popup_fep_shadow_pane_cp2

0xc2a4,	// (0x000491d3) fep_vkb_top_pane_g4_ParamLimits

0xc2a4,	// (0x000491d3) fep_vkb_top_pane_g4

0xc2ea,	// (0x00049219) fep_vkb_side_pane_g2_ParamLimits

0xc2ea,	// (0x00049219) fep_vkb_side_pane_g2

0x48c3,	// (0x000417f2) list_setting_pane_t4_ParamLimits

0x48c3,	// (0x000417f2) list_setting_pane_t4

0x495d,	// (0x0004188c) list_setting_number_pane_t5_ParamLimits

0x495d,	// (0x0004188c) list_setting_number_pane_t5

0x8bb6,	// (0x00045ae5) list_double_heading_pane_cp2_ParamLimits

0x8bb6,	// (0x00045ae5) list_double_heading_pane_cp2

0x8481,	// (0x000453b0) list_double_heading_pane_g1_cp2_ParamLimits

0x8481,	// (0x000453b0) list_double_heading_pane_g1_cp2

0x84f4,	// (0x00045423) list_double_heading_pane_g2_cp2_ParamLimits

0x84f4,	// (0x00045423) list_double_heading_pane_g2_cp2

0xc641,	// (0x00049570) list_double_heading_pane_t1_cp2_ParamLimits

0xc641,	// (0x00049570) list_double_heading_pane_t1_cp2

0xc657,	// (0x00049586) list_double_heading_pane_t2_cp2_ParamLimits

0xc657,	// (0x00049586) list_double_heading_pane_t2_cp2

0x26ca,	// (0x0003f5f9) aid_value_unit2

0x56b2,	// (0x000425e1) popup_preview_fixed_window

0x7ed6,	// (0x00044e05) bg_popup_preview_window_pane_cp02

0xc669,	// (0x00049598) list_preview_fixed_pane

0xc6af,	// (0x000495de) list_empty_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_empty_pane_fp

0xc6af,	// (0x000495de) list_single_cale_day_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_cale_day_pane_fp

0xc6af,	// (0x000495de) list_single_graphic_heading_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_graphic_heading_pane_fp

0xc6af,	// (0x000495de) list_single_graphic_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_graphic_pane_fp

0xc6af,	// (0x000495de) list_single_heading_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_heading_pane_fp

0xc6af,	// (0x000495de) list_single_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_pane_fp

0xc6c4,	// (0x000495f3) list_single_pane_fp_g1_ParamLimits

0xc6c4,	// (0x000495f3) list_single_pane_fp_g1

0x8481,	// (0x000453b0) list_single_pane_fp_g2_ParamLimits

0x8481,	// (0x000453b0) list_single_pane_fp_g2

0x84f4,	// (0x00045423) list_single_pane_fp_g3_ParamLimits

0x84f4,	// (0x00045423) list_single_pane_fp_g3

0xc6d0,	// (0x000495ff) list_single_pane_fp_g4_ParamLimits

0xc6d0,	// (0x000495ff) list_single_pane_fp_g4

0x0003,

0xfb47,	// (0x0004ca76) list_single_pane_fp_g_ParamLimits

0xfb47,	// (0x0004ca76) list_single_pane_fp_g

0x5145,	// (0x00042074) list_single_pane_fp_t1_ParamLimits

0x5145,	// (0x00042074) list_single_pane_fp_t1

0x515c,	// (0x0004208b) list_single_graphic_pane_fp_g1_ParamLimits

0x515c,	// (0x0004208b) list_single_graphic_pane_fp_g1

0xc6c4,	// (0x000495f3) list_single_graphic_pane_fp_g2_ParamLimits

0xc6c4,	// (0x000495f3) list_single_graphic_pane_fp_g2

0x8481,	// (0x000453b0) list_single_graphic_pane_fp_g3_ParamLimits

0x8481,	// (0x000453b0) list_single_graphic_pane_fp_g3

0x84f4,	// (0x00045423) list_single_graphic_pane_fp_g4_ParamLimits

0x84f4,	// (0x00045423) list_single_graphic_pane_fp_g4

0xc6d0,	// (0x000495ff) list_single_graphic_pane_fp_g5_ParamLimits

0xc6d0,	// (0x000495ff) list_single_graphic_pane_fp_g5

0x0004,

0xfb50,	// (0x0004ca7f) list_single_graphic_pane_fp_g_ParamLimits

0xfb50,	// (0x0004ca7f) list_single_graphic_pane_fp_g

0x5168,	// (0x00042097) list_single_graphic_pane_fp_t1_ParamLimits

0x5168,	// (0x00042097) list_single_graphic_pane_fp_t1

0x515c,	// (0x0004208b) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x515c,	// (0x0004208b) list_single_graphic_heading_pane_fp_g1

0xc6c4,	// (0x000495f3) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x000495f3) list_single_graphic_heading_pane_fp_g2

0x8481,	// (0x000453b0) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x8481,	// (0x000453b0) list_single_graphic_heading_pane_fp_g3

0x84f4,	// (0x00045423) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x84f4,	// (0x00045423) list_single_graphic_heading_pane_fp_g4

0xc6d0,	// (0x000495ff) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x000495ff) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004ca7f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004ca7f) list_single_graphic_heading_pane_fp_g

0x517e,	// (0x000420ad) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x517e,	// (0x000420ad) list_single_graphic_heading_pane_fp_t1

0x5194,	// (0x000420c3) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x5194,	// (0x000420c3) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb5b,	// (0x0004ca8a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb5b,	// (0x0004ca8a) list_single_graphic_heading_pane_fp_t

0x51a6,	// (0x000420d5) list_single_cale_day_pane_fp_g1_ParamLimits

0x51a6,	// (0x000420d5) list_single_cale_day_pane_fp_g1

0xc6dc,	// (0x0004960b) list_single_cale_day_pane_fp_g2_ParamLimits

0xc6dc,	// (0x0004960b) list_single_cale_day_pane_fp_g2

0x6ca3,	// (0x00043bd2) list_single_cale_day_pane_fp_g3_ParamLimits

0x6ca3,	// (0x00043bd2) list_single_cale_day_pane_fp_g3

0x6ccb,	// (0x00043bfa) list_single_cale_day_pane_fp_g4_ParamLimits

0x6ccb,	// (0x00043bfa) list_single_cale_day_pane_fp_g4

0x6cef,	// (0x00043c1e) list_single_cale_day_pane_fp_g5_ParamLimits

0x6cef,	// (0x00043c1e) list_single_cale_day_pane_fp_g5

0x0004,

0xfb60,	// (0x0004ca8f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb60,	// (0x0004ca8f) list_single_cale_day_pane_fp_g

0x51de,	// (0x0004210d) list_single_cale_day_pane_fp_t1_ParamLimits

0x51de,	// (0x0004210d) list_single_cale_day_pane_fp_t1

0x5204,	// (0x00042133) list_single_cale_day_pane_fp_t2_ParamLimits

0x5204,	// (0x00042133) list_single_cale_day_pane_fp_t2

0x521d,	// (0x0004214c) list_single_cale_day_pane_fp_t3_ParamLimits

0x521d,	// (0x0004214c) list_single_cale_day_pane_fp_t3

0x0002,

0xfb6b,	// (0x0004ca9a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb6b,	// (0x0004ca9a) list_single_cale_day_pane_fp_t

0xc6c4,	// (0x000495f3) list_empty_pane_fp_g1_ParamLimits

0xc6c4,	// (0x000495f3) list_empty_pane_fp_g1

0x5236,	// (0x00042165) list_empty_pane_fp_t1

0x5244,	// (0x00042173) list_empty_pane_fp_t2

0x0001,

0xfb72,	// (0x0004caa1) list_empty_pane_fp_t

0xc6c4,	// (0x000495f3) list_single_heading_pane_fp_g1_ParamLimits

0xc6c4,	// (0x000495f3) list_single_heading_pane_fp_g1

0x8481,	// (0x000453b0) list_single_heading_pane_fp_g2_ParamLimits

0x8481,	// (0x000453b0) list_single_heading_pane_fp_g2

0x84f4,	// (0x00045423) list_single_heading_pane_fp_g3_ParamLimits

0x84f4,	// (0x00045423) list_single_heading_pane_fp_g3

0x0002,

0xfb77,	// (0x0004caa6) list_single_heading_pane_fp_g_ParamLimits

0xfb77,	// (0x0004caa6) list_single_heading_pane_fp_g

0x5252,	// (0x00042181) list_single_heading_pane_fp_t1_ParamLimits

0x5252,	// (0x00042181) list_single_heading_pane_fp_t1

0x5264,	// (0x00042193) list_single_heading_pane_fp_t2_ParamLimits

0x5264,	// (0x00042193) list_single_heading_pane_fp_t2

0x0001,

0xfb7e,	// (0x0004caad) list_single_heading_pane_fp_t_ParamLimits

0xfb7e,	// (0x0004caad) list_single_heading_pane_fp_t

0x86ec,	// (0x0004561b) aid_size_cell_fast

0x7e46,	// (0x00044d75) soft_indicator_pane_cp1_t1

0x8729,	// (0x00045658) cell_app_pane_cp2_ParamLimits

0x8729,	// (0x00045658) cell_app_pane_cp2

0x6a67,	// (0x00043996) fep_hwr_candidate_drop_down_list_pane

0x26b0,	// (0x0003f5df) fep_hwr_candidate_pane_g3_ParamLimits

0x26b0,	// (0x0003f5df) fep_hwr_candidate_pane_g3

0x26bd,	// (0x0003f5ec) fep_hwr_candidate_pane_g4_ParamLimits

0x26bd,	// (0x0003f5ec) fep_hwr_candidate_pane_g4

0x0002,

0xfaf2,	// (0x0004ca21) fep_hwr_candidate_pane_g_ParamLimits

0xfaf2,	// (0x0004ca21) fep_hwr_candidate_pane_g

0xc18b,	// (0x000490ba) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xc18b,	// (0x000490ba) fep_vkb_candidate_drop_down_list_pane

0xc59c,	// (0x000494cb) fep_vkb_candidate_pane_g3

0xc5a4,	// (0x000494d3) fep_vkb_candidate_pane_g4

0x0002,

0xfb1f,	// (0x0004ca4e) fep_vkb_candidate_pane_g

0xc2a4,	// (0x000491d3) cell_hwr_candidate_pane_g1_ParamLimits

0xc5bb,	// (0x000494ea) cell_hwr_candidate_pane_g3_ParamLimits

0xc5bb,	// (0x000494ea) cell_hwr_candidate_pane_g3

0xc5dc,	// (0x0004950b) cell_hwr_candidate_pane_g4_ParamLimits

0xc5dc,	// (0x0004950b) cell_hwr_candidate_pane_g4

0x0002,

0xfb39,	// (0x0004ca68) cell_hwr_candidate_pane_g_ParamLimits

0xfb39,	// (0x0004ca68) cell_hwr_candidate_pane_g

0xc5fd,	// (0x0004952c) cell_vkb_candidate_pane_g3_ParamLimits

0xc5fd,	// (0x0004952c) cell_vkb_candidate_pane_g3

0xc618,	// (0x00049547) cell_vkb_candidate_pane_g4_ParamLimits

0xc618,	// (0x00049547) cell_vkb_candidate_pane_g4

0xc6e8,	// (0x00049617) cell_app_pane_cp2_g1_ParamLimits

0xc6e8,	// (0x00049617) cell_app_pane_cp2_g1

0xc706,	// (0x00049635) cell_app_pane_cp2_g2_ParamLimits

0xc706,	// (0x00049635) cell_app_pane_cp2_g2

0x0001,

0xfb83,	// (0x0004cab2) cell_app_pane_cp2_g_ParamLimits

0xfb83,	// (0x0004cab2) cell_app_pane_cp2_g

0xc712,	// (0x00049641) cell_app_pane_cp2_t1_ParamLimits

0xc712,	// (0x00049641) cell_app_pane_cp2_t1

0x84e6,	// (0x00045415) grid_highlight_pane_cp1_ParamLimits

0x84e6,	// (0x00045415) grid_highlight_pane_cp1

0x6d13,	// (0x00043c42) cell_hwr_candidate_pane_cp1_ParamLimits

0x6d13,	// (0x00043c42) cell_hwr_candidate_pane_cp1

0xc2a4,	// (0x000491d3) fep_hwr_candidate_drop_down_list_pane_g1

0xc724,	// (0x00049653) fep_hwr_candidate_drop_down_list_pane_g2

0xc731,	// (0x00049660) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004cab7) fep_hwr_candidate_drop_down_list_pane_g

0x6d32,	// (0x00043c61) fep_hwr_candidate_drop_down_list_scroll_pane

0x6d3b,	// (0x00043c6a) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d3b,	// (0x00043c6a) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6d48,	// (0x00043c77) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d48,	// (0x00043c77) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6d55,	// (0x00043c84) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d55,	// (0x00043c84) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xc5fd,	// (0x0004952c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5fd,	// (0x0004952c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xc618,	// (0x00049547) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc618,	// (0x00049547) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d62,	// (0x00043c91) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d62,	// (0x00043c91) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d7d,	// (0x00043cac) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d7d,	// (0x00043cac) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d98,	// (0x00043cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d98,	// (0x00043cc7) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8f,	// (0x0004cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8f,	// (0x0004cabe) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xc73e,	// (0x0004966d) cell_vkb_candidate_pane_cp1_ParamLimits

0xc73e,	// (0x0004966d) cell_vkb_candidate_pane_cp1

0xc2a4,	// (0x000491d3) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) fep_vkb_candidate_drop_down_list_pane_g1

0xc724,	// (0x00049653) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xc724,	// (0x00049653) fep_vkb_candidate_drop_down_list_pane_g2

0xc731,	// (0x00049660) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xc731,	// (0x00049660) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb88,	// (0x0004cab7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb88,	// (0x0004cab7) fep_vkb_candidate_drop_down_list_pane_g

0xc75e,	// (0x0004968d) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xc75e,	// (0x0004968d) fep_vkb_candidate_drop_down_list_scroll_pane

0xc76b,	// (0x0004969a) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xc76b,	// (0x0004969a) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xc778,	// (0x000496a7) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xc778,	// (0x000496a7) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xc784,	// (0x000496b3) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xc784,	// (0x000496b3) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xc5bb,	// (0x000494ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xc5bb,	// (0x000494ea) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xc5dc,	// (0x0004950b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xc5dc,	// (0x0004950b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xc790,	// (0x000496bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xc790,	// (0x000496bf) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xc7b1,	// (0x000496e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xc7b1,	// (0x000496e0) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xc7d2,	// (0x00049701) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xc7d2,	// (0x00049701) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfba0,	// (0x0004cacf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfba0,	// (0x0004cacf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x7b77,	// (0x00044aa6) title_pane_g1_ParamLimits

0x7b84,	// (0x00044ab3) title_pane_g2_ParamLimits

0xf529,	// (0x0004c458) title_pane_g_ParamLimits

0x8b5f,	// (0x00045a8e) aid_call2_pane

0x8b67,	// (0x00045a96) aid_call_pane

0x8b6f,	// (0x00045a9e) popup_clock_analogue_window_g1

0x8b6f,	// (0x00045a9e) popup_clock_analogue_window_g2

0x5aa6,	// (0x000429d5) popup_clock_analogue_window_g3

0x5aaf,	// (0x000429de) popup_clock_analogue_window_g4

0x26dc,	// (0x0003f60b) popup_clock_analogue_window_g5

0x0004,

0xf6d8,	// (0x0004c607) popup_clock_analogue_window_g

0x5ab7,	// (0x000429e6) popup_clock_analogue_window_t1

0x5ac5,	// (0x000429f4) clock_digital_number_pane_ParamLimits

0x5ac5,	// (0x000429f4) clock_digital_number_pane

0x5ad1,	// (0x00042a00) clock_digital_number_pane_cp02_ParamLimits

0x5ad1,	// (0x00042a00) clock_digital_number_pane_cp02

0x5add,	// (0x00042a0c) clock_digital_number_pane_cp03_ParamLimits

0x5add,	// (0x00042a0c) clock_digital_number_pane_cp03

0x5ae9,	// (0x00042a18) clock_digital_number_pane_cp04_ParamLimits

0x5ae9,	// (0x00042a18) clock_digital_number_pane_cp04

0x5af5,	// (0x00042a24) clock_digital_separator_pane_ParamLimits

0x5af5,	// (0x00042a24) clock_digital_separator_pane

0x5b01,	// (0x00042a30) popup_clock_digital_window_t1_ParamLimits

0x5b01,	// (0x00042a30) popup_clock_digital_window_t1

0x26dc,	// (0x0003f60b) clock_digital_number_pane_g1

0x26dc,	// (0x0003f60b) clock_digital_number_pane_g2

0x0001,

0xf6e3,	// (0x0004c612) clock_digital_number_pane_g

0x26dc,	// (0x0003f60b) clock_digital_separator_pane_g1

0x26dc,	// (0x0003f60b) clock_digital_separator_pane_g2

0x0001,

0xf6e3,	// (0x0004c612) clock_digital_separator_pane_g

0x9507,	// (0x00046436) aid_fill_nsta_ParamLimits

0x9653,	// (0x00046582) indicator_nsta_pane_ParamLimits

0x97cc,	// (0x000466fb) popup_clock_analogue_window

0x97cc,	// (0x000466fb) popup_clock_digital_window

0xba01,	// (0x00048930) grid_indicator_nsta_pane_ParamLimits

0xba2a,	// (0x00048959) clock_nsta_pane_t2

0x0001,

0xfa72,	// (0x0004c9a1) clock_nsta_pane_t

0x5a6a,	// (0x00042999) aid_size_max_handle

0x5a74,	// (0x000429a3) aid_size_min_handle

0x91a7,	// (0x000460d6) editor_scroll_pane

0xc7ed,	// (0x0004971c) ex_editor_pane

0x865a,	// (0x00045589) scroll_pane_cp13

0x8479,	// (0x000453a8) scroll_pane_cp14

0x8b9e,	// (0x00045acd) scroll_pane_cp36

0x8bca,	// (0x00045af9) list_single_graphic_hl_pane_cp2_ParamLimits

0x8bca,	// (0x00045af9) list_single_graphic_hl_pane_cp2

0xafd2,	// (0x00047f01) list_single_graphic_hl_pane_ParamLimits

0xafd2,	// (0x00047f01) list_single_graphic_hl_pane

0x527a,	// (0x000421a9) aid_size_min_hl_cp1

0xc7f5,	// (0x00049724) list_highlight_pane_cp34_ParamLimits

0xc7f5,	// (0x00049724) list_highlight_pane_cp34

0xc806,	// (0x00049735) list_single_graphic_hl_pane_g1_ParamLimits

0xc806,	// (0x00049735) list_single_graphic_hl_pane_g1

0x5283,	// (0x000421b2) list_single_graphic_hl_pane_g2_ParamLimits

0x5283,	// (0x000421b2) list_single_graphic_hl_pane_g2

0x5283,	// (0x000421b2) list_single_graphic_hl_pane_g3_ParamLimits

0x5283,	// (0x000421b2) list_single_graphic_hl_pane_g3

0x90ec,	// (0x0004601b) list_single_graphic_hl_pane_g4_ParamLimits

0x90ec,	// (0x0004601b) list_single_graphic_hl_pane_g4

0x6db3,	// (0x00043ce2) list_single_graphic_hl_pane_g5_ParamLimits

0x6db3,	// (0x00043ce2) list_single_graphic_hl_pane_g5

0x0004,

0xfbb1,	// (0x0004cae0) list_single_graphic_hl_pane_g_ParamLimits

0xfbb1,	// (0x0004cae0) list_single_graphic_hl_pane_g

0x528f,	// (0x000421be) list_single_graphic_hl_pane_t1_ParamLimits

0x528f,	// (0x000421be) list_single_graphic_hl_pane_t1

0xc813,	// (0x00049742) aid_size_min_hl_cp2

0xc81c,	// (0x0004974b) list_highlight_pane_cp34_cp2_ParamLimits

0xc81c,	// (0x0004974b) list_highlight_pane_cp34_cp2

0xc806,	// (0x00049735) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xc806,	// (0x00049735) list_single_graphic_hl_pane_g1_cp2

0xc829,	// (0x00049758) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xc829,	// (0x00049758) list_single_graphic_hl_pane_g2_cp2

0xc835,	// (0x00049764) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc835,	// (0x00049764) list_single_graphic_hl_pane_g3_cp2

0xc843,	// (0x00049772) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc843,	// (0x00049772) list_single_graphic_hl_pane_g4_cp2

0xc84f,	// (0x0004977e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xc84f,	// (0x0004977e) list_single_graphic_hl_pane_g5_cp2

0x5dd1,	// (0x00042d00) control_pane_g4_ParamLimits

0x5dd1,	// (0x00042d00) control_pane_g4

0x94cb,	// (0x000463fa) bg_popup_sub_pane_cp10_ParamLimits

0xc030,	// (0x00048f5f) list_choice_list_pane_ParamLimits

0xc03f,	// (0x00048f6e) scroll_pane_cp23

0x7ed6,	// (0x00044e05) bg_popup_preview_window_pane_cp02_ParamLimits

0xc669,	// (0x00049598) list_preview_fixed_pane_ParamLimits

0xc67f,	// (0x000495ae) list_preview_fixed_pane_cp_ParamLimits

0xc67f,	// (0x000495ae) list_preview_fixed_pane_cp

0xc68b,	// (0x000495ba) popup_preview_fixed_window_g1_ParamLimits

0xc68b,	// (0x000495ba) popup_preview_fixed_window_g1

0xc697,	// (0x000495c6) popup_preview_fixed_window_g2_ParamLimits

0xc697,	// (0x000495c6) popup_preview_fixed_window_g2

0x0002,

0xfb40,	// (0x0004ca6f) popup_preview_fixed_window_g_ParamLimits

0xfb40,	// (0x0004ca6f) popup_preview_fixed_window_g

0x59de,	// (0x0004290d) aid_navi_side_left_pane_ParamLimits

0x59f3,	// (0x00042922) aid_navi_side_right_pane_ParamLimits

0x5a0b,	// (0x0004293a) navi_icon_pane_stacon_ParamLimits

0x5a1f,	// (0x0004294e) navi_navi_pane_stacon_ParamLimits

0x5a0b,	// (0x0004293a) navi_text_pane_stacon_ParamLimits

0x26d2,	// (0x0003f601) main_text_info_pane

0xc879,	// (0x000497a8) listscroll_text_info_pane

0xc881,	// (0x000497b0) list_text_info_pane_ParamLimits

0xc881,	// (0x000497b0) list_text_info_pane

0xc890,	// (0x000497bf) scroll_pane_cp24_ParamLimits

0xc890,	// (0x000497bf) scroll_pane_cp24

0xc8ae,	// (0x000497dd) list_text_info_pane_t1_ParamLimits

0xc8ae,	// (0x000497dd) list_text_info_pane_t1

0x5f45,	// (0x00042e74) popup_fast_swap2_window_ParamLimits

0x5f45,	// (0x00042e74) popup_fast_swap2_window

0xc8df,	// (0x0004980e) aid_size_cell_fast2

0x26d2,	// (0x0003f601) bg_popup_window_pane_cp17

0x9e55,	// (0x00046d84) heading_pane_cp2

0x9e5d,	// (0x00046d8c) listscroll_fast2_pane

0xc8e9,	// (0x00049818) grid_fast2_pane

0xc8f3,	// (0x00049822) listscroll_fast2_pane_g1

0xc8fb,	// (0x0004982a) listscroll_fast2_pane_g2

0x0001,

0xfbbc,	// (0x0004caeb) listscroll_fast2_pane_g

0x865a,	// (0x00045589) scroll_pane_cp26

0xc905,	// (0x00049834) cell_fast2_pane_ParamLimits

0xc905,	// (0x00049834) cell_fast2_pane

0xc91a,	// (0x00049849) cell_fast2_pane_g1

0xc923,	// (0x00049852) cell_fast2_pane_g2

0xc92c,	// (0x0004985b) cell_fast2_pane_g3

0x0002,

0xfbc1,	// (0x0004caf0) cell_fast2_pane_g

0x8236,	// (0x00045165) grid_highlight_pane_cp9

0x824b,	// (0x0004517a) main_eswt_pane_ParamLimits

0x824b,	// (0x0004517a) main_eswt_pane

0xc8a5,	// (0x000497d4) list_single_text_info_pane

0xc934,	// (0x00049863) eswt_ctrl_button_pane

0xc934,	// (0x00049863) eswt_ctrl_canvas_pane

0xc93c,	// (0x0004986b) eswt_ctrl_combo_pane

0xc934,	// (0x00049863) eswt_ctrl_default_pane

0xc934,	// (0x00049863) eswt_ctrl_label_pane

0xc944,	// (0x00049873) eswt_ctrl_wait_pane

0xc94c,	// (0x0004987b) eswt_shell_pane

0x26d2,	// (0x0003f601) listscroll_eswt_app_pane

0xc96c,	// (0x0004989b) popup_eswt_tasktip_window_ParamLimits

0xc96c,	// (0x0004989b) popup_eswt_tasktip_window

0x9a69,	// (0x00046998) bg_popup_window_pane_cp18

0xc97d,	// (0x000498ac) eswt_control_pane_g1_ParamLimits

0xc97d,	// (0x000498ac) eswt_control_pane_g1

0xc98a,	// (0x000498b9) eswt_control_pane_g2_ParamLimits

0xc98a,	// (0x000498b9) eswt_control_pane_g2

0xc997,	// (0x000498c6) eswt_control_pane_g3_ParamLimits

0xc997,	// (0x000498c6) eswt_control_pane_g3

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_ParamLimits

0xc9a4,	// (0x000498d3) eswt_control_pane_g4

0x0003,

0xfbc8,	// (0x0004caf7) eswt_control_pane_g_ParamLimits

0xfbc8,	// (0x0004caf7) eswt_control_pane_g

0x84e6,	// (0x00045415) bg_button_pane_ParamLimits

0x84e6,	// (0x00045415) bg_button_pane

0x824b,	// (0x0004517a) common_borders_pane_copy2_ParamLimits

0x824b,	// (0x0004517a) common_borders_pane_copy2

0xc9b1,	// (0x000498e0) control_button_pane_g1_ParamLimits

0xc9b1,	// (0x000498e0) control_button_pane_g1

0xc9bd,	// (0x000498ec) control_button_pane_g2_ParamLimits

0xc9bd,	// (0x000498ec) control_button_pane_g2

0xc9c9,	// (0x000498f8) control_button_pane_g3_ParamLimits

0xc9c9,	// (0x000498f8) control_button_pane_g3

0x0002,

0xfbd1,	// (0x0004cb00) control_button_pane_g_ParamLimits

0xfbd1,	// (0x0004cb00) control_button_pane_g

0xc9dd,	// (0x0004990c) control_button_pane_t1

0xc9eb,	// (0x0004991a) control_button_pane_t2

0x0001,

0xfbd8,	// (0x0004cb07) control_button_pane_t

0x99f5,	// (0x00046924) bg_button_pane_g1

0x99fd,	// (0x0004692c) bg_button_pane_g2

0x9a05,	// (0x00046934) bg_button_pane_g3

0x9a0d,	// (0x0004693c) bg_button_pane_g4

0x9a15,	// (0x00046944) bg_button_pane_g5

0x9a1d,	// (0x0004694c) bg_button_pane_g6

0x9a25,	// (0x00046954) bg_button_pane_g7

0x9a2d,	// (0x0004695c) bg_button_pane_g8

0x9a35,	// (0x00046964) bg_button_pane_g9

0x0008,

0xf841,	// (0x0004c770) bg_button_pane_g

0xbfeb,	// (0x00048f1a) common_borders_pane_ParamLimits

0xbfeb,	// (0x00048f1a) common_borders_pane

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy1_ParamLimits

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy1

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy1_ParamLimits

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy1

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy1_ParamLimits

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy1

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy1_ParamLimits

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy1

0xc026,	// (0x00048f55) bg_eswt_ctrl_canvas_pane_g1

0xbfeb,	// (0x00048f1a) common_borders_pane_cp2_ParamLimits

0xbfeb,	// (0x00048f1a) common_borders_pane_cp2

0xbfeb,	// (0x00048f1a) common_borders_pane_cp3_ParamLimits

0xbfeb,	// (0x00048f1a) common_borders_pane_cp3

0xc9f9,	// (0x00049928) separator_horizontal_pane

0xca01,	// (0x00049930) separator_vertical_pane

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy2_ParamLimits

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy2

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy2_ParamLimits

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy2

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy2_ParamLimits

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy2

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy2_ParamLimits

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy2

0x26d2,	// (0x0003f601) common_borders_pane_cp4

0xca0a,	// (0x00049939) separator_horizontal_pane_g1

0xca13,	// (0x00049942) separator_horizontal_pane_g2

0xca1c,	// (0x0004994b) separator_horizontal_pane_g3

0x0002,

0xfbdd,	// (0x0004cb0c) separator_horizontal_pane_g

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy3_ParamLimits

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy3

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy3_ParamLimits

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy3

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy3_ParamLimits

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy3

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy3_ParamLimits

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy3

0x26d2,	// (0x0003f601) common_borders_pane_cp5

0xca25,	// (0x00049954) separator_vertical_pane_g1

0xca2e,	// (0x0004995d) separator_vertical_pane_g2

0xca37,	// (0x00049966) separator_vertical_pane_g3

0x0002,

0xfbe4,	// (0x0004cb13) separator_vertical_pane_g

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy4_ParamLimits

0xc97d,	// (0x000498ac) eswt_control_pane_g1_copy4

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy4_ParamLimits

0xc98a,	// (0x000498b9) eswt_control_pane_g2_copy4

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy4_ParamLimits

0xc997,	// (0x000498c6) eswt_control_pane_g3_copy4

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy4_ParamLimits

0xc9a4,	// (0x000498d3) eswt_control_pane_g4_copy4

0xca40,	// (0x0004996f) eswt_ctrl_combo_button_pane

0xca48,	// (0x00049977) eswt_ctrl_input_pane

0xca50,	// (0x0004997f) popup_choice_list_window_cp70

0xca58,	// (0x00049987) eswt_ctrl_input_pane_t1

0x26d2,	// (0x0003f601) input_focus_pane_cp70

0xbfeb,	// (0x00048f1a) bg_button_pane_cp70_ParamLimits

0xbfeb,	// (0x00048f1a) bg_button_pane_cp70

0xca66,	// (0x00049995) eswt_ctrl_combo_button_pane_g1

0xca6e,	// (0x0004999d) wait_bar_pane_cp70

0x9a69,	// (0x00046998) bg_popup_window_pane_cp70_ParamLimits

0x9a69,	// (0x00046998) bg_popup_window_pane_cp70

0xca76,	// (0x000499a5) popup_eswt_tasktip_window_t1

0xca8c,	// (0x000499bb) wait_bar_pane_cp71_ParamLimits

0xca8c,	// (0x000499bb) wait_bar_pane_cp71

0xca98,	// (0x000499c7) grid_eswt_app_pane

0x8981,	// (0x000458b0) scroll_pane_cp70

0xcaa1,	// (0x000499d0) cell_eswt_app_pane_ParamLimits

0xcaa1,	// (0x000499d0) cell_eswt_app_pane

0xcad1,	// (0x00049a00) cell_eswt_app_pane_g1_ParamLimits

0xcad1,	// (0x00049a00) cell_eswt_app_pane_g1

0xcb00,	// (0x00049a2f) cell_eswt_app_pane_g2_ParamLimits

0xcb00,	// (0x00049a2f) cell_eswt_app_pane_g2

0x0001,

0xfbeb,	// (0x0004cb1a) cell_eswt_app_pane_g_ParamLimits

0xfbeb,	// (0x0004cb1a) cell_eswt_app_pane_g

0xcb29,	// (0x00049a58) cell_eswt_app_pane_t1_ParamLimits

0xcb29,	// (0x00049a58) cell_eswt_app_pane_t1

0xcb5b,	// (0x00049a8a) grid_highlight_pane_cp70_ParamLimits

0xcb5b,	// (0x00049a8a) grid_highlight_pane_cp70

0x907f,	// (0x00045fae) set_content_pane_g1

0x9452,	// (0x00046381) status_small_volume_pane

0x6dc7,	// (0x00043cf6) status_small_volume_pane_g1

0x6dcf,	// (0x00043cfe) volume_small2_pane

0x6dd8,	// (0x00043d07) volume_small2_pane_g1

0x6de1,	// (0x00043d10) volume_small2_pane_g2

0x6dea,	// (0x00043d19) volume_small2_pane_g3

0x6df3,	// (0x00043d22) volume_small2_pane_g4

0x6dfc,	// (0x00043d2b) volume_small2_pane_g5

0x6e05,	// (0x00043d34) volume_small2_pane_g6

0x6e0e,	// (0x00043d3d) volume_small2_pane_g7

0x6e17,	// (0x00043d46) volume_small2_pane_g8

0x6e20,	// (0x00043d4f) volume_small2_pane_g9

0x6e29,	// (0x00043d58) volume_small2_pane_g10

0x0009,

0xfbf0,	// (0x0004cb1f) volume_small2_pane_g

0xc3ec,	// (0x0004931b) fep_vkb_top_text_pane_g1_ParamLimits

0xc407,	// (0x00049336) fep_vkb_top_text_pane_t1_ParamLimits

0xc6a3,	// (0x000495d2) popup_preview_fixed_window_g3_ParamLimits

0xc6a3,	// (0x000495d2) popup_preview_fixed_window_g3

0x63f6,	// (0x00043325) popup_toolbar_trans_pane

0xadd9,	// (0x00047d08) aid_height_set_list_ParamLimits

0xadea,	// (0x00047d19) aid_size_parent_ParamLimits

0x94cb,	// (0x000463fa) list_highlight_pane_cp2_ParamLimits

0x907f,	// (0x00045fae) set_content_pane_g1_ParamLimits

0x4e32,	// (0x00041d61) list_single_image_pane_ParamLimits

0x4e32,	// (0x00041d61) list_single_image_pane

0xcb67,	// (0x00049a96) aid_size_cell_image_ParamLimits

0xcb67,	// (0x00049a96) aid_size_cell_image

0xcb74,	// (0x00049aa3) grid_single_image_pane_ParamLimits

0xcb74,	// (0x00049aa3) grid_single_image_pane

0x9f28,	// (0x00046e57) list_single_image_pane_g1_ParamLimits

0x9f28,	// (0x00046e57) list_single_image_pane_g1

0xcb80,	// (0x00049aaf) list_single_image_pane_g2_ParamLimits

0xcb80,	// (0x00049aaf) list_single_image_pane_g2

0x0001,

0xfc05,	// (0x0004cb34) list_single_image_pane_g_ParamLimits

0xfc05,	// (0x0004cb34) list_single_image_pane_g

0xcb94,	// (0x00049ac3) list_single_image_pane_t1_ParamLimits

0xcb94,	// (0x00049ac3) list_single_image_pane_t1

0xcbaa,	// (0x00049ad9) cell_image_list_pane_ParamLimits

0xcbaa,	// (0x00049ad9) cell_image_list_pane

0xcbbe,	// (0x00049aed) cell_image_list_pane_g1

0xcbc7,	// (0x00049af6) cell_image_list_pane_g2

0x0001,

0xfc0a,	// (0x0004cb39) cell_image_list_pane_g

0xcbd0,	// (0x00049aff) aid_size_cell_tb_trans_pane

0x84e6,	// (0x00045415) bg_tb_trans_pane

0xcbe2,	// (0x00049b11) grid_tb_trans_pane

0x99f5,	// (0x00046924) bg_tb_trans_pane_g1

0x99fd,	// (0x0004692c) bg_tb_trans_pane_g2

0x9a05,	// (0x00046934) bg_tb_trans_pane_g3

0x9a0d,	// (0x0004693c) bg_tb_trans_pane_g4

0x9a15,	// (0x00046944) bg_tb_trans_pane_g5

0x9a2d,	// (0x0004695c) bg_tb_trans_pane_g6

0x9a35,	// (0x00046964) bg_tb_trans_pane_g7

0x9a1d,	// (0x0004694c) bg_tb_trans_pane_g8

0x9a25,	// (0x00046954) bg_tb_trans_pane_g9

0x0008,

0xfc0f,	// (0x0004cb3e) bg_tb_trans_pane_g

0xcbf6,	// (0x00049b25) cell_toolbar_trans_pane_ParamLimits

0xcbf6,	// (0x00049b25) cell_toolbar_trans_pane

0xc026,	// (0x00048f55) cell_toolbar_trans_pane_g1

0xbbfb,	// (0x00048b2a) list_form2_midp_pane_t1

0xbc09,	// (0x00048b38) list_form2_midp_pane_t2

0x0001,

0xfab8,	// (0x0004c9e7) list_form2_midp_pane_t

0xbc17,	// (0x00048b46) scroll_pane_cp51_ParamLimits

0xbdd3,	// (0x00048d02) form2_midp_wait_pane_g1

0xbddc,	// (0x00048d0b) form2_midp_wait_pane_g2

0xbde5,	// (0x00048d14) form2_midp_wait_pane_g3

0x0002,

0xfacd,	// (0x0004c9fc) form2_midp_wait_pane_g

0x7c4d,	// (0x00044b7c) list_highlight_pane_cp21_ParamLimits

0xbe31,	// (0x00048d60) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xbe40,	// (0x00048d6f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x684f,	// (0x0004377e) list_single_2graphic_im_pane_ParamLimits

0x684f,	// (0x0004377e) list_single_2graphic_im_pane

0xcc1c,	// (0x00049b4b) list_single_2graphic_im_pane_g1_ParamLimits

0xcc1c,	// (0x00049b4b) list_single_2graphic_im_pane_g1

0xcc2d,	// (0x00049b5c) list_single_2graphic_im_pane_g2_ParamLimits

0xcc2d,	// (0x00049b5c) list_single_2graphic_im_pane_g2

0xcc39,	// (0x00049b68) list_single_2graphic_im_pane_g3_ParamLimits

0xcc39,	// (0x00049b68) list_single_2graphic_im_pane_g3

0x0003,

0xfc22,	// (0x0004cb51) list_single_2graphic_im_pane_g_ParamLimits

0xfc22,	// (0x0004cb51) list_single_2graphic_im_pane_g

0xcc59,	// (0x00049b88) list_single_2graphic_im_pane_t1_ParamLimits

0xcc59,	// (0x00049b88) list_single_2graphic_im_pane_t1

0xc6af,	// (0x000495de) list_single_graphic_2heading_pane_fp_ParamLimits

0xc6af,	// (0x000495de) list_single_graphic_2heading_pane_fp

0x515c,	// (0x0004208b) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x515c,	// (0x0004208b) list_single_graphic_2heading_pane_fp_g1

0xc6c4,	// (0x000495f3) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xc6c4,	// (0x000495f3) list_single_graphic_2heading_pane_fp_g2

0x8481,	// (0x000453b0) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x8481,	// (0x000453b0) list_single_graphic_2heading_pane_fp_g3

0x84f4,	// (0x00045423) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x84f4,	// (0x00045423) list_single_graphic_2heading_pane_fp_g4

0xc6d0,	// (0x000495ff) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xc6d0,	// (0x000495ff) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb50,	// (0x0004ca7f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb50,	// (0x0004ca7f) list_single_graphic_2heading_pane_fp_g

0x52a5,	// (0x000421d4) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x52a5,	// (0x000421d4) list_single_graphic_2heading_pane_fp_t1

0x5194,	// (0x000420c3) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x5194,	// (0x000420c3) list_single_graphic_2heading_pane_fp_t2

0x52bb,	// (0x000421ea) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x52bb,	// (0x000421ea) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc2b,	// (0x0004cb5a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc2b,	// (0x0004cb5a) list_single_graphic_2heading_pane_fp_t

0xc0b2,	// (0x00048fe1) fep_hwr_write_pane_g5_ParamLimits

0xc0b2,	// (0x00048fe1) fep_hwr_write_pane_g5

0xc0be,	// (0x00048fed) fep_hwr_write_pane_g6_ParamLimits

0xc0be,	// (0x00048fed) fep_hwr_write_pane_g6

0xc94c,	// (0x0004987b) eswt_shell_pane_ParamLimits

0x9a69,	// (0x00046998) bg_popup_window_pane_cp18_ParamLimits

0xad32,	// (0x00047c61) heading_pane_cp70

0xca76,	// (0x000499a5) popup_eswt_tasktip_window_t1_ParamLimits

0x955c,	// (0x0004648b) aid_touch_tab_arrow_left

0x956b,	// (0x0004649a) aid_touch_tab_arrow_right

0x7b95,	// (0x00044ac4) title_pane_g3_ParamLimits

0x7b95,	// (0x00044ac4) title_pane_g3

0x84a5,	// (0x000453d4) set_value_pane_g1

0x63f6,	// (0x00043325) popup_toolbar_trans_pane_ParamLimits

0xcbd0,	// (0x00049aff) aid_size_cell_tb_trans_pane_ParamLimits

0x84e6,	// (0x00045415) bg_tb_trans_pane_ParamLimits

0xcbe2,	// (0x00049b11) grid_tb_trans_pane_ParamLimits

0x7ed6,	// (0x00044e05) cont_note_pane_ParamLimits

0x7ed6,	// (0x00044e05) cont_note_pane

0x824b,	// (0x0004517a) cont_snote2_single_text_pane_ParamLimits

0x824b,	// (0x0004517a) cont_snote2_single_text_pane

0x824b,	// (0x0004517a) cont_snote2_single_graphic_pane_ParamLimits

0x824b,	// (0x0004517a) cont_snote2_single_graphic_pane

0xa090,	// (0x00046fbf) cont_note_wait_pane_ParamLimits

0xa090,	// (0x00046fbf) cont_note_wait_pane

0xa090,	// (0x00046fbf) cont_note_image_pane_ParamLimits

0xa090,	// (0x00046fbf) cont_note_image_pane

0xcc8a,	// (0x00049bb9) popup_note2_window_g1_ParamLimits

0xcc8a,	// (0x00049bb9) popup_note2_window_g1

0xccbb,	// (0x00049bea) popup_note2_window_t1_ParamLimits

0xccbb,	// (0x00049bea) popup_note2_window_t1

0xcd00,	// (0x00049c2f) popup_note2_window_t2_ParamLimits

0xcd00,	// (0x00049c2f) popup_note2_window_t2

0xcd45,	// (0x00049c74) popup_note2_window_t3_ParamLimits

0xcd45,	// (0x00049c74) popup_note2_window_t3

0xcd8a,	// (0x00049cb9) popup_note2_window_t4_ParamLimits

0xcd8a,	// (0x00049cb9) popup_note2_window_t4

0x7f5a,	// (0x00044e89) popup_note2_window_t5_ParamLimits

0x7f5a,	// (0x00044e89) popup_note2_window_t5

0x0004,

0xfc37,	// (0x0004cb66) popup_note2_window_t_ParamLimits

0xfc37,	// (0x0004cb66) popup_note2_window_t

0xcdb9,	// (0x00049ce8) popup_note2_image_window_g1_ParamLimits

0xcdb9,	// (0x00049ce8) popup_note2_image_window_g1

0xcdc5,	// (0x00049cf4) popup_note2_image_window_g2_ParamLimits

0xcdc5,	// (0x00049cf4) popup_note2_image_window_g2

0x0001,

0xfc42,	// (0x0004cb71) popup_note2_image_window_g_ParamLimits

0xfc42,	// (0x0004cb71) popup_note2_image_window_g

0xcdd7,	// (0x00049d06) popup_note2_image_window_t1_ParamLimits

0xcdd7,	// (0x00049d06) popup_note2_image_window_t1

0xcdef,	// (0x00049d1e) popup_note2_image_window_t2_ParamLimits

0xcdef,	// (0x00049d1e) popup_note2_image_window_t2

0xce07,	// (0x00049d36) popup_note2_image_window_t3_ParamLimits

0xce07,	// (0x00049d36) popup_note2_image_window_t3

0x0002,

0xfc47,	// (0x0004cb76) popup_note2_image_window_t_ParamLimits

0xfc47,	// (0x0004cb76) popup_note2_image_window_t

0xa09e,	// (0x00046fcd) popup_note2_wait_window_g1_ParamLimits

0xa09e,	// (0x00046fcd) popup_note2_wait_window_g1

0xce23,	// (0x00049d52) popup_note2_wait_window_g2_ParamLimits

0xce23,	// (0x00049d52) popup_note2_wait_window_g2

0xa0b6,	// (0x00046fe5) popup_note2_wait_window_g3_ParamLimits

0xa0b6,	// (0x00046fe5) popup_note2_wait_window_g3

0x0002,

0xfc4e,	// (0x0004cb7d) popup_note2_wait_window_g_ParamLimits

0xfc4e,	// (0x0004cb7d) popup_note2_wait_window_g

0xce2f,	// (0x00049d5e) popup_note2_wait_window_t1_ParamLimits

0xce2f,	// (0x00049d5e) popup_note2_wait_window_t1

0xce4d,	// (0x00049d7c) popup_note2_wait_window_t2_ParamLimits

0xce4d,	// (0x00049d7c) popup_note2_wait_window_t2

0xce6b,	// (0x00049d9a) popup_note2_wait_window_t3_ParamLimits

0xce6b,	// (0x00049d9a) popup_note2_wait_window_t3

0xce7d,	// (0x00049dac) popup_note2_wait_window_t4_ParamLimits

0xce7d,	// (0x00049dac) popup_note2_wait_window_t4

0x0003,

0xfc55,	// (0x0004cb84) popup_note2_wait_window_t_ParamLimits

0xfc55,	// (0x0004cb84) popup_note2_wait_window_t

0xce8f,	// (0x00049dbe) wait_bar2_pane_ParamLimits

0xce8f,	// (0x00049dbe) wait_bar2_pane

0xcea7,	// (0x00049dd6) popup_snote2_single_text_window_g1_ParamLimits

0xcea7,	// (0x00049dd6) popup_snote2_single_text_window_g1

0xcecf,	// (0x00049dfe) popup_snote2_single_text_window_t1_ParamLimits

0xcecf,	// (0x00049dfe) popup_snote2_single_text_window_t1

0xcf1b,	// (0x00049e4a) popup_snote2_single_text_window_t2_ParamLimits

0xcf1b,	// (0x00049e4a) popup_snote2_single_text_window_t2

0xcf67,	// (0x00049e96) popup_snote2_single_text_window_t3_ParamLimits

0xcf67,	// (0x00049e96) popup_snote2_single_text_window_t3

0xcfa8,	// (0x00049ed7) popup_snote2_single_text_window_t4_ParamLimits

0xcfa8,	// (0x00049ed7) popup_snote2_single_text_window_t4

0xcfde,	// (0x00049f0d) popup_snote2_single_text_window_t5_ParamLimits

0xcfde,	// (0x00049f0d) popup_snote2_single_text_window_t5

0x0004,

0xfc5e,	// (0x0004cb8d) popup_snote2_single_text_window_t_ParamLimits

0xfc5e,	// (0x0004cb8d) popup_snote2_single_text_window_t

0xd009,	// (0x00049f38) popup_snote2_single_graphic_window_g1_ParamLimits

0xd009,	// (0x00049f38) popup_snote2_single_graphic_window_g1

0xd031,	// (0x00049f60) popup_snote2_single_graphic_window_g2_ParamLimits

0xd031,	// (0x00049f60) popup_snote2_single_graphic_window_g2

0x0001,

0xfc69,	// (0x0004cb98) popup_snote2_single_graphic_window_g_ParamLimits

0xfc69,	// (0x0004cb98) popup_snote2_single_graphic_window_g

0xd059,	// (0x00049f88) popup_snote2_single_graphic_window_t1_ParamLimits

0xd059,	// (0x00049f88) popup_snote2_single_graphic_window_t1

0xd0a5,	// (0x00049fd4) popup_snote2_single_graphic_window_t2_ParamLimits

0xd0a5,	// (0x00049fd4) popup_snote2_single_graphic_window_t2

0xcf67,	// (0x00049e96) popup_snote2_single_graphic_window_t3_ParamLimits

0xcf67,	// (0x00049e96) popup_snote2_single_graphic_window_t3

0xcfa8,	// (0x00049ed7) popup_snote2_single_graphic_window_t4_ParamLimits

0xcfa8,	// (0x00049ed7) popup_snote2_single_graphic_window_t4

0xcfde,	// (0x00049f0d) popup_snote2_single_graphic_window_t5_ParamLimits

0xcfde,	// (0x00049f0d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc6e,	// (0x0004cb9d) popup_snote2_single_graphic_window_t_ParamLimits

0xfc6e,	// (0x0004cb9d) popup_snote2_single_graphic_window_t

0xbad8,	// (0x00048a07) clock_nsta_pane_cp2_t1

0xbad8,	// (0x00048a07) clock_nsta_pane_cp2_t2

0x0001,

0xfa8e,	// (0x0004c9bd) clock_nsta_pane_cp2_t

0x4a7d,	// (0x000419ac) form_field_data_wide_pane_g1_ParamLimits

0x8481,	// (0x000453b0) form_field_data_wide_pane_g2_ParamLimits

0x8481,	// (0x000453b0) form_field_data_wide_pane_g2

0x84f4,	// (0x00045423) form_field_data_wide_pane_g3_ParamLimits

0x84f4,	// (0x00045423) form_field_data_wide_pane_g3

0x0002,

0xf65b,	// (0x0004c58a) form_field_data_wide_pane_g_ParamLimits

0xf65b,	// (0x0004c58a) form_field_data_wide_pane_g

0xb9b4,	// (0x000488e3) grid_touch_3_pane_ParamLimits

0xb9b4,	// (0x000488e3) grid_touch_3_pane

0xd0f1,	// (0x0004a020) cell_touch_3_pane_ParamLimits

0xd0f1,	// (0x0004a020) cell_touch_3_pane

0xc026,	// (0x00048f55) cell_touch_3_pane_g1

0xc026,	// (0x00048f55) cell_touch_3_pane_g2

0x0001,

0xfb13,	// (0x0004ca42) cell_touch_3_pane_g

0x7fb2,	// (0x00044ee1) cont_query_data_pane

0x7fba,	// (0x00044ee9) cont_query_data_pane_cp1

0xd11f,	// (0x0004a04e) button_value_adjust_pane_cp7

0xd127,	// (0x0004a056) query_popup_pane_cp3

0x8c78,	// (0x00045ba7) bg_popup_sub_pane_cp22_ParamLimits

0x5b20,	// (0x00042a4f) navi_navi_volume_pane_cp2

0x5b3b,	// (0x00042a6a) popup_side_volume_key_window_g2

0x5b4a,	// (0x00042a79) popup_side_volume_key_window_g3

0x0002,

0xf6f1,	// (0x0004c620) popup_side_volume_key_window_g

0x5b67,	// (0x00042a96) popup_side_volume_key_window_t2

0x0001,

0xf6f8,	// (0x0004c627) popup_side_volume_key_window_t

0x8f3e,	// (0x00045e6d) popup_side_volume_key_window_ParamLimits

0x46ad,	// (0x000415dc) list_double_graphic_pane_g4_ParamLimits

0x46ad,	// (0x000415dc) list_double_graphic_pane_g4

0x688c,	// (0x000437bb) list_single_2heading_msg_pane_ParamLimits

0x688c,	// (0x000437bb) list_single_2heading_msg_pane

0x6e32,	// (0x00043d61) list_single_2heading_msg_pane_g1_ParamLimits

0x6e32,	// (0x00043d61) list_single_2heading_msg_pane_g1

0x6e3e,	// (0x00043d6d) list_single_2heading_msg_pane_g2_ParamLimits

0x6e3e,	// (0x00043d6d) list_single_2heading_msg_pane_g2

0x6e4a,	// (0x00043d79) list_single_2heading_msg_pane_g3_ParamLimits

0x6e4a,	// (0x00043d79) list_single_2heading_msg_pane_g3

0x6e56,	// (0x00043d85) list_single_2heading_msg_pane_g4_ParamLimits

0x6e56,	// (0x00043d85) list_single_2heading_msg_pane_g4

0x0003,

0xfc79,	// (0x0004cba8) list_single_2heading_msg_pane_g_ParamLimits

0xfc79,	// (0x0004cba8) list_single_2heading_msg_pane_g

0x52db,	// (0x0004220a) list_single_2heading_msg_pane_t1_ParamLimits

0x52db,	// (0x0004220a) list_single_2heading_msg_pane_t1

0x5303,	// (0x00042232) list_single_2heading_msg_pane_t2_ParamLimits

0x5303,	// (0x00042232) list_single_2heading_msg_pane_t2

0x5337,	// (0x00042266) list_single_2heading_msg_pane_t3_ParamLimits

0x5337,	// (0x00042266) list_single_2heading_msg_pane_t3

0x5370,	// (0x0004229f) list_single_2heading_msg_pane_t4_ParamLimits

0x5370,	// (0x0004229f) list_single_2heading_msg_pane_t4

0x0003,

0xfc82,	// (0x0004cbb1) list_single_2heading_msg_pane_t_ParamLimits

0xfc82,	// (0x0004cbb1) list_single_2heading_msg_pane_t

0x7ba1,	// (0x00044ad0) title_pane_g4_ParamLimits

0x7ba1,	// (0x00044ad0) title_pane_g4

0x592f,	// (0x0004285e) title_pane_stacon_g3_ParamLimits

0x592f,	// (0x0004285e) title_pane_stacon_g3

0xcc4d,	// (0x00049b7c) list_single_2graphic_im_pane_g4_ParamLimits

0xcc4d,	// (0x00049b7c) list_single_2graphic_im_pane_g4

0xaaef,	// (0x00047a1e) popup_side_volume_key_window_cp

0xb2ff,	// (0x0004822e) main_idle_act2_pane_t1

0x64e8,	// (0x00043417) toolbar_button_pane_g10

0x8443,	// (0x00045372) popup_toolbar_window_cp1

0xbac9,	// (0x000489f8) clock_nsta_pane_cp_t1

0xbac9,	// (0x000489f8) clock_nsta_pane_cp_t2

0x0001,

0xfa89,	// (0x0004c9b8) clock_nsta_pane_cp_t

0x5b20,	// (0x00042a4f) navi_navi_volume_pane_cp2_ParamLimits

0x5b2f,	// (0x00042a5e) popup_side_volume_key_window_g1_ParamLimits

0x5b3b,	// (0x00042a6a) popup_side_volume_key_window_g2_ParamLimits

0x5b4a,	// (0x00042a79) popup_side_volume_key_window_g3_ParamLimits

0xf6f1,	// (0x0004c620) popup_side_volume_key_window_g_ParamLimits

0x6a53,	// (0x00043982) fep_hwr_aid_pane

0x26a2,	// (0x0003f5d1) bg_fep_hwr_top_pane_g4_ParamLimits

0xc082,	// (0x00048fb1) fep_hwr_top_pane_g1_ParamLimits

0xc094,	// (0x00048fc3) fep_hwr_top_pane_g2_ParamLimits

0x6b0c,	// (0x00043a3b) fep_hwr_top_pane_g3_ParamLimits

0xfade,	// (0x0004ca0d) fep_hwr_top_pane_g_ParamLimits

0x6b21,	// (0x00043a50) fep_hwr_top_text_pane_ParamLimits

0xa8b2,	// (0x000477e1) aid_touch_tab_arrow_arrow_2

0xa8bb,	// (0x000477ea) aid_touch_tab_arrow_left_2

0x6a67,	// (0x00043996) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x6a9e,	// (0x000439cd) fep_hwr_prediction_pane

0xc1f4,	// (0x00049123) fep_vkb_prediction_pane

0xc2f8,	// (0x00049227) fep_vkb_side_pane_g3_ParamLimits

0xc2f8,	// (0x00049227) fep_vkb_side_pane_g3

0xc2a4,	// (0x000491d3) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xc724,	// (0x00049653) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xc731,	// (0x00049660) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb88,	// (0x0004cab7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xd14c,	// (0x0004a07b) fep_hwr_prediction_pane_g1

0x6e6e,	// (0x00043d9d) fep_hwr_prediction_pane_g2

0x6e76,	// (0x00043da5) fep_hwr_prediction_pane_g3

0x6e7e,	// (0x00043dad) fep_hwr_prediction_pane_g4

0x0003,

0xfc8b,	// (0x0004cbba) fep_hwr_prediction_pane_g

0xd14c,	// (0x0004a07b) fep_vkb_prediction_pane_g1

0xd156,	// (0x0004a085) fep_vkb_prediction_pane_g2

0xd15e,	// (0x0004a08d) fep_vkb_prediction_pane_g3

0xd166,	// (0x0004a095) fep_vkb_prediction_pane_g4

0x0003,

0xfc94,	// (0x0004cbc3) fep_vkb_prediction_pane_g

0x67dc,	// (0x0004370b) slider_set_pane_g3

0x67f0,	// (0x0004371f) slider_set_pane_g4

0x6808,	// (0x00043737) slider_set_pane_g5

0x67dc,	// (0x0004370b) slider_set_pane_g6

0x681e,	// (0x0004374d) slider_set_pane_g7

0xaf4f,	// (0x00047e7e) slider_form_pane_g3

0xaf58,	// (0x00047e87) slider_form_pane_g4

0xaf60,	// (0x00047e8f) slider_form_pane_g5

0xaf4f,	// (0x00047e7e) slider_form_pane_g6

0xaf68,	// (0x00047e97) slider_form_pane_g7

0xb5aa,	// (0x000484d9) slider_set_pane_vc_g3

0xb5b3,	// (0x000484e2) slider_set_pane_vc_g4

0xb5bc,	// (0x000484eb) slider_set_pane_vc_g5

0xb5aa,	// (0x000484d9) slider_set_pane_vc_g6

0xb5c5,	// (0x000484f4) slider_set_pane_vc_g7

0xb787,	// (0x000486b6) slider_form_pane_vc_g1

0xb790,	// (0x000486bf) slider_form_pane_vc_g2

0xb799,	// (0x000486c8) slider_form_pane_vc_g3

0xb787,	// (0x000486b6) slider_form_pane_vc_g4

0xb7a2,	// (0x000486d1) slider_form_pane_vc_g5

0x0004,

0xfa5b,	// (0x0004c98a) slider_form_pane_vc_g

0x26d2,	// (0x0003f601) main_idle_act3_pane

0xd16e,	// (0x0004a09d) ai3_links_pane

0xd177,	// (0x0004a0a6) popup_ai3_data_window_ParamLimits

0xd177,	// (0x0004a0a6) popup_ai3_data_window

0x26d2,	// (0x0003f601) grid_ai3_links_pane

0xd191,	// (0x0004a0c0) cell_ai3_links_pane_ParamLimits

0xd191,	// (0x0004a0c0) cell_ai3_links_pane

0xd1a9,	// (0x0004a0d8) bg_popup_sub_pane_cp11

0xd1b6,	// (0x0004a0e5) cell_ai3_links_pane_g1

0x26d2,	// (0x0003f601) bg_popup_sub_pane_cp12

0xd1db,	// (0x0004a10a) heading_ai3_data_pane

0xd1e3,	// (0x0004a112) list_ai3_gene_pane

0xd1ef,	// (0x0004a11e) popup_ai3_data_window_g1

0xd1f7,	// (0x0004a126) heading_ai3_data_pane_g1

0xd1ff,	// (0x0004a12e) heading_ai3_data_pane_t1

0xd20d,	// (0x0004a13c) list_double_ai3_gene_pane_ParamLimits

0xd20d,	// (0x0004a13c) list_double_ai3_gene_pane

0xd21a,	// (0x0004a149) list_single_ai3_gene_pane_ParamLimits

0xd21a,	// (0x0004a149) list_single_ai3_gene_pane

0xbfeb,	// (0x00048f1a) list_highlight_pane_cp7_ParamLimits

0xbfeb,	// (0x00048f1a) list_highlight_pane_cp7

0xd227,	// (0x0004a156) list_single_a13_gene_pane_t1_ParamLimits

0xd227,	// (0x0004a156) list_single_a13_gene_pane_t1

0xd23e,	// (0x0004a16d) list_single_ai3_gene_pane_g1

0xd247,	// (0x0004a176) list_single_ai3_gene_pane_g2

0x0001,

0xfc9d,	// (0x0004cbcc) list_single_ai3_gene_pane_g

0xd24f,	// (0x0004a17e) list_double_ai3_gene_pane_g1_ParamLimits

0xd24f,	// (0x0004a17e) list_double_ai3_gene_pane_g1

0xd25b,	// (0x0004a18a) list_double_ai3_gene_pane_t1_ParamLimits

0xd25b,	// (0x0004a18a) list_double_ai3_gene_pane_t1

0xd277,	// (0x0004a1a6) list_double_ai3_gene_pane_t2_ParamLimits

0xd277,	// (0x0004a1a6) list_double_ai3_gene_pane_t2

0xd28d,	// (0x0004a1bc) list_double_ai3_gene_pane_t3_ParamLimits

0xd28d,	// (0x0004a1bc) list_double_ai3_gene_pane_t3

0x0002,

0xfca2,	// (0x0004cbd1) list_double_ai3_gene_pane_t_ParamLimits

0xfca2,	// (0x0004cbd1) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x52d1,	// (0x00042200) aid_size_min_col_2

0xd138,	// (0x0004a067) aid_size_min_msg_ParamLimits

0xd138,	// (0x0004a067) aid_size_min_msg

0xc3f8,	// (0x00049327) fep_vkb_top_text_pane_g2_ParamLimits

0xc3f8,	// (0x00049327) fep_vkb_top_text_pane_g2

0x0001,

0xfb0e,	// (0x0004ca3d) fep_vkb_top_text_pane_g_ParamLimits

0xfb0e,	// (0x0004ca3d) fep_vkb_top_text_pane_g

0x26d2,	// (0x0003f601) main_hc_apps_shell_pane

0xd2aa,	// (0x0004a1d9) grid_hc_apps_pane_ParamLimits

0xd2aa,	// (0x0004a1d9) grid_hc_apps_pane

0xd2bc,	// (0x0004a1eb) list_hc_apps_pane

0xd2c4,	// (0x0004a1f3) scroll_pane_cp37_ParamLimits

0xd2c4,	// (0x0004a1f3) scroll_pane_cp37

0xd2d0,	// (0x0004a1ff) cell_hc_apps_pane_ParamLimits

0xd2d0,	// (0x0004a1ff) cell_hc_apps_pane

0xd37e,	// (0x0004a2ad) cell_hc_apps_pane_g1_ParamLimits

0xd37e,	// (0x0004a2ad) cell_hc_apps_pane_g1

0xd3ae,	// (0x0004a2dd) cell_hc_apps_pane_g2_ParamLimits

0xd3ae,	// (0x0004a2dd) cell_hc_apps_pane_g2

0xd3ca,	// (0x0004a2f9) cell_hc_apps_pane_g3_ParamLimits

0xd3ca,	// (0x0004a2f9) cell_hc_apps_pane_g3

0x0002,

0xfca9,	// (0x0004cbd8) cell_hc_apps_pane_g_ParamLimits

0xfca9,	// (0x0004cbd8) cell_hc_apps_pane_g

0xd3ec,	// (0x0004a31b) cell_hc_apps_pane_t1_ParamLimits

0xd3ec,	// (0x0004a31b) cell_hc_apps_pane_t1

0x7ed6,	// (0x00044e05) grid_highlight_pane_cp10_ParamLimits

0x7ed6,	// (0x00044e05) grid_highlight_pane_cp10

0xd42c,	// (0x0004a35b) list_single_hc_apps_pane_ParamLimits

0xd42c,	// (0x0004a35b) list_single_hc_apps_pane

0xd488,	// (0x0004a3b7) list_single_hc_apps_pane_g1

0x6e86,	// (0x00043db5) list_single_hc_apps_pane_g2

0x0001,

0xfcb0,	// (0x0004cbdf) list_single_hc_apps_pane_g

0x6e9f,	// (0x00043dce) list_single_hc_apps_pane_g2_copy1

0x5395,	// (0x000422c4) list_single_hc_apps_pane_t1

0x7c4d,	// (0x00044b7c) bg_set_opt_pane_cp_ParamLimits

0x57d4,	// (0x00042703) setting_slider_pane_t1_ParamLimits

0x57ed,	// (0x0004271c) setting_slider_pane_t2_ParamLimits

0x5807,	// (0x00042736) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0004c468) setting_slider_pane_t_ParamLimits

0x581f,	// (0x0004274e) slider_set_pane_ParamLimits

0x5de5,	// (0x00042d14) control_pane_g5_ParamLimits

0x5de5,	// (0x00042d14) control_pane_g5

0xad9e,	// (0x00047ccd) slider_set_pane_g1_ParamLimits

0x67d0,	// (0x000436ff) slider_set_pane_g2_ParamLimits

0x67dc,	// (0x0004370b) slider_set_pane_g3_ParamLimits

0x67f0,	// (0x0004371f) slider_set_pane_g4_ParamLimits

0x6808,	// (0x00043737) slider_set_pane_g5_ParamLimits

0x67dc,	// (0x0004370b) slider_set_pane_g6_ParamLimits

0x681e,	// (0x0004374d) slider_set_pane_g7_ParamLimits

0xf93f,	// (0x0004c86e) slider_set_pane_g_ParamLimits

0x902a,	// (0x00045f59) navi_icon_text_pane_ParamLimits

0x951d,	// (0x0004644c) aid_fill_nsta_2_ParamLimits

0x955c,	// (0x0004648b) aid_touch_tab_arrow_left_ParamLimits

0x956b,	// (0x0004649a) aid_touch_tab_arrow_right_ParamLimits

0x95d8,	// (0x00046507) clock_nsta_pane_ParamLimits

0xa894,	// (0x000477c3) navi_icon_pane_g1_ParamLimits

0xa8a0,	// (0x000477cf) navi_text_pane_t1_ParamLimits

0xbbd5,	// (0x00048b04) navi_icon_text_pane_g1_ParamLimits

0xbbe1,	// (0x00048b10) navi_icon_text_pane_t1_ParamLimits

0xd488,	// (0x0004a3b7) list_single_hc_apps_pane_g1_ParamLimits

0x6e86,	// (0x00043db5) list_single_hc_apps_pane_g2_ParamLimits

0xfcb0,	// (0x0004cbdf) list_single_hc_apps_pane_g_ParamLimits

0x6e9f,	// (0x00043dce) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x5395,	// (0x000422c4) list_single_hc_apps_pane_t1_ParamLimits

0x56de,	// (0x0004260d) popup_toolbar2_fixed_window_ParamLimits

0x56de,	// (0x0004260d) popup_toolbar2_fixed_window

0x63ec,	// (0x0004331b) popup_toolbar2_float_window

0x26d2,	// (0x0003f601) bg_popup_sub_pane_cp27

0xd4a1,	// (0x0004a3d0) grid_toolbar2_float_pane

0x26d2,	// (0x0003f601) bg_popup_sub_pane_cp26

0xd4a1,	// (0x0004a3d0) grid_toolbar2_fixed_pane

0xd4a9,	// (0x0004a3d8) cell_toolbar2_fixed_pane_ParamLimits

0xd4a9,	// (0x0004a3d8) cell_toolbar2_fixed_pane

0xd4b9,	// (0x0004a3e8) cell_toolbar2_fixed_pane_g1

0xd4c2,	// (0x0004a3f1) toolbar2_fixed_button_pane

0x99f5,	// (0x00046924) toolbar2_fixed_button_pane_g1

0x99fd,	// (0x0004692c) toolbar2_fixed_button_pane_g2

0x9a05,	// (0x00046934) toolbar2_fixed_button_pane_g3

0x9a0d,	// (0x0004693c) toolbar2_fixed_button_pane_g4

0x9a15,	// (0x00046944) toolbar2_fixed_button_pane_g5

0x9a1d,	// (0x0004694c) toolbar2_fixed_button_pane_g6

0x9a25,	// (0x00046954) toolbar2_fixed_button_pane_g7

0x9a2d,	// (0x0004695c) toolbar2_fixed_button_pane_g8

0x9a35,	// (0x00046964) toolbar2_fixed_button_pane_g9

0x0008,

0xf841,	// (0x0004c770) toolbar2_fixed_button_pane_g

0xd4ca,	// (0x0004a3f9) cell_toolbar2_float_pane_ParamLimits

0xd4ca,	// (0x0004a3f9) cell_toolbar2_float_pane

0xd4db,	// (0x0004a40a) cell_toolbar2_float_pane_g1

0xd4c2,	// (0x0004a3f1) toolbar2_fixed_button_pane_cp

0xc154,	// (0x00049083) fep_vkb_accented_list_pane_ParamLimits

0xc154,	// (0x00049083) fep_vkb_accented_list_pane

0x6c6f,	// (0x00043b9e) bg_popup_fep_shadow_pane_g9

0x91a7,	// (0x000460d6) bg_popup_fep_shadow_pane_cp3

0x8641,	// (0x00045570) list_accented_list_pane

0xd4e4,	// (0x0004a413) list_single_accented_list_pane_ParamLimits

0xd4e4,	// (0x0004a413) list_single_accented_list_pane

0x91a7,	// (0x000460d6) list_highlight_pane_cp10

0xd4f5,	// (0x0004a424) list_single_accented_list_pane_t1

0x633c,	// (0x0004326b) popup_slider_window_ParamLimits

0x633c,	// (0x0004326b) popup_slider_window

0xd12f,	// (0x0004a05e) aid_indentation_list_msg

0xd5b9,	// (0x0004a4e8) bg_popup_window_pane_cp19

0xd621,	// (0x0004a550) popup_slider_window_g1

0xd63d,	// (0x0004a56c) popup_slider_window_g2

0xd659,	// (0x0004a588) popup_slider_window_g3

0x0005,

0xfcb5,	// (0x0004cbe4) popup_slider_window_g

0xd6bf,	// (0x0004a5ee) popup_slider_window_t1

0xd733,	// (0x0004a662) small_volume_slider_vertical_pane

0xc026,	// (0x00048f55) small_volume_slider_vertical_pane_g1

0xc026,	// (0x00048f55) small_volume_slider_vertical_pane_g2

0xd74f,	// (0x0004a67e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcc7,	// (0x0004cbf6) small_volume_slider_vertical_pane_g

0x54a0,	// (0x000423cf) area_side_right_pane_ParamLimits

0x54a0,	// (0x000423cf) area_side_right_pane

0x6ebb,	// (0x00043dea) aid_size_side_button_ParamLimits

0x6ebb,	// (0x00043dea) aid_size_side_button

0x6ecf,	// (0x00043dfe) grid_sctrl_middle_pane_ParamLimits

0x6ecf,	// (0x00043dfe) grid_sctrl_middle_pane

0x6eee,	// (0x00043e1d) sctrl_sk_bottom_pane

0x6eff,	// (0x00043e2e) sctrl_sk_top_pane

0x6f11,	// (0x00043e40) aid_touch_sctrl_top

0x7ed6,	// (0x00044e05) bg_sctrl_sk_pane_ParamLimits

0x7ed6,	// (0x00044e05) bg_sctrl_sk_pane

0x6f1e,	// (0x00043e4d) sctrl_sk_top_pane_g1

0x6f2b,	// (0x00043e5a) sctrl_sk_top_pane_t1

0x6f11,	// (0x00043e40) aid_touch_sctrl_bottom

0x7ed6,	// (0x00044e05) bg_sctrl_sk_pane_cp_ParamLimits

0x7ed6,	// (0x00044e05) bg_sctrl_sk_pane_cp

0x6f46,	// (0x00043e75) sctrl_sk_bottom_pane_g1

0x6f2b,	// (0x00043e5a) sctrl_sk_bottom_pane_t1

0x6f4f,	// (0x00043e7e) cell_sctrl_middle_pane_ParamLimits

0x6f4f,	// (0x00043e7e) cell_sctrl_middle_pane

0x6f6a,	// (0x00043e99) aid_touch_sctrl_middle_ParamLimits

0x6f6a,	// (0x00043e99) aid_touch_sctrl_middle

0x84e6,	// (0x00045415) bg_sctrl_middle_pane_ParamLimits

0x84e6,	// (0x00045415) bg_sctrl_middle_pane

0xc2a4,	// (0x000491d3) cell_sctrl_middle_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) cell_sctrl_middle_pane_g1

0x6f7c,	// (0x00043eab) cell_sctrl_middle_pane_g2_ParamLimits

0x6f7c,	// (0x00043eab) cell_sctrl_middle_pane_g2

0x0001,

0xfcd3,	// (0x0004cc02) cell_sctrl_middle_pane_g_ParamLimits

0xfcd3,	// (0x0004cc02) cell_sctrl_middle_pane_g

0x99f5,	// (0x00046924) bg_sctrl_middle_pane_g1

0x99fd,	// (0x0004692c) bg_sctrl_middle_pane_g2

0x9a05,	// (0x00046934) bg_sctrl_middle_pane_g3

0x9a0d,	// (0x0004693c) bg_sctrl_middle_pane_g4

0x9a15,	// (0x00046944) bg_sctrl_middle_pane_g5

0x9a1d,	// (0x0004694c) bg_sctrl_middle_pane_g6

0x9a25,	// (0x00046954) bg_sctrl_middle_pane_g7

0x9a2d,	// (0x0004695c) bg_sctrl_middle_pane_g8

0x0007,

0xfcd8,	// (0x0004cc07) bg_sctrl_middle_pane_g

0x9a35,	// (0x00046964) bg_sctrl_middle_pane_g8_copy1

0x99f5,	// (0x00046924) bg_sctrl_sk_pane_g1

0x99fd,	// (0x0004692c) bg_sctrl_sk_pane_g2

0x9a05,	// (0x00046934) bg_sctrl_sk_pane_g3

0x0008,

0xf841,	// (0x0004c770) bg_sctrl_sk_pane_g

0x8409,	// (0x00045338) aid_size_touch_scroll_bar

0x9a0d,	// (0x0004693c) bg_sctrl_sk_pane_g4

0x9a15,	// (0x00046944) bg_sctrl_sk_pane_g5

0x9a1d,	// (0x0004694c) bg_sctrl_sk_pane_g6

0x9a25,	// (0x00046954) bg_sctrl_sk_pane_g7

0x9a2d,	// (0x0004695c) bg_sctrl_sk_pane_g8

0x9a35,	// (0x00046964) bg_sctrl_sk_pane_g9

0x5fa3,	// (0x00042ed2) popup_fep_china_hwr2_fs_candidate_window

0x5fad,	// (0x00042edc) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x5fad,	// (0x00042edc) popup_fep_china_hwr2_fs_control_window

0xc2a4,	// (0x000491d3) sctrl_sk_top_pane_g2

0x0001,

0xfcce,	// (0x0004cbfd) sctrl_sk_top_pane_g

0xd758,	// (0x0004a687) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd758,	// (0x0004a687) aid_fep_china_hwr2_fs_cell

0xd76a,	// (0x0004a699) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd76a,	// (0x0004a699) bg_popup_fep_shadow_pane_cp4

0xd781,	// (0x0004a6b0) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd781,	// (0x0004a6b0) bg_popup_fep_shadow_pane_cp5

0xd793,	// (0x0004a6c2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd793,	// (0x0004a6c2) popup_fep_china_hwr2_fs_control_bar_grid

0xd7a3,	// (0x0004a6d2) popup_fep_china_hwr2_fs_control_funtion_grid

0xd7ab,	// (0x0004a6da) aid_fep_china_hwr2_fs_candi_cell

0x26d2,	// (0x0003f601) bg_popup_fep_shadow_pane_cp6

0xd7b5,	// (0x0004a6e4) popup_fep_china_hwr2_fs_candidate_grid

0xd7bf,	// (0x0004a6ee) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd7bf,	// (0x0004a6ee) cell_fep_china_hwr2_fs_funtion_grid

0xc026,	// (0x00048f55) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xd7d7,	// (0x0004a706) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xd7d7,	// (0x0004a706) cell_fep_china_hwr2_fs_funtion_grid_g1

0xd7e5,	// (0x0004a714) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xd7e5,	// (0x0004a714) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfce9,	// (0x0004cc18) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfce9,	// (0x0004cc18) cell_fep_china_hwr2_fs_funtion_grid_g

0xd7fb,	// (0x0004a72a) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd7fb,	// (0x0004a72a) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd810,	// (0x0004a73f) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd810,	// (0x0004a73f) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcee,	// (0x0004cc1d) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcee,	// (0x0004cc1d) cell_fep_china_hwr2_fs_funtion_grid_t

0xd82c,	// (0x0004a75b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xd834,	// (0x0004a763) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xd83c,	// (0x0004a76b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf3,	// (0x0004cc22) popup_fep_china_hwr2_fs_control_bar_grid_g

0xd844,	// (0x0004a773) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xd844,	// (0x0004a773) cell_fep_china_hwr2_fs_candidate_grid

0xd85d,	// (0x0004a78c) popup_fep_china_hwr2_fs_candidate_grid_g20

0xd865,	// (0x0004a794) popup_fep_china_hwr2_fs_candidate_grid_g21

0xc026,	// (0x00048f55) cell_fep_china_hwr2_fs_candidate_grid_g1

0xc026,	// (0x00048f55) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb13,	// (0x0004ca42) cell_fep_china_hwr2_fs_candidate_grid_g

0xd86d,	// (0x0004a79c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x95eb,	// (0x0004651a) clock_nsta_pane_cp_24_ParamLimits

0x95eb,	// (0x0004651a) clock_nsta_pane_cp_24

0x9669,	// (0x00046598) indicator_nsta_pane_cp_24_ParamLimits

0x9669,	// (0x00046598) indicator_nsta_pane_cp_24

0xa710,	// (0x0004763f) heading_pane_g1

0x0001,

0xf8a6,	// (0x0004c7d5) heading_pane_g

0xb148,	// (0x00048077) grid_sct_catagory_button_pane

0xb178,	// (0x000480a7) scroll_pane_cp5_ParamLimits

0xbc23,	// (0x00048b52) button_value_adjust_pane_cp5_ParamLimits

0xbc23,	// (0x00048b52) button_value_adjust_pane_cp5

0xbd02,	// (0x00048c31) form2_midp_time_pane_ParamLimits

0xd87b,	// (0x0004a7aa) cell_sct_catagory_button_pane_ParamLimits

0xd87b,	// (0x0004a7aa) cell_sct_catagory_button_pane

0xbfeb,	// (0x00048f1a) bg_button_pane_cp01_ParamLimits

0xbfeb,	// (0x00048f1a) bg_button_pane_cp01

0xc026,	// (0x00048f55) cell_sct_catagory_button_pane_g1

0x637b,	// (0x000432aa) popup_tb_extension_window

0xd88d,	// (0x0004a7bc) aid_size_cell_ext_ParamLimits

0xd88d,	// (0x0004a7bc) aid_size_cell_ext

0x7ed6,	// (0x00044e05) bg_tb_trans_pane_cp1_ParamLimits

0x7ed6,	// (0x00044e05) bg_tb_trans_pane_cp1

0xd8ad,	// (0x0004a7dc) grid_tb_ext_pane_ParamLimits

0xd8ad,	// (0x0004a7dc) grid_tb_ext_pane

0xd8db,	// (0x0004a80a) cell_tb_ext_pane_ParamLimits

0xd8db,	// (0x0004a80a) cell_tb_ext_pane

0xd8f2,	// (0x0004a821) cell_tb_ext_pane_g1_ParamLimits

0xd8f2,	// (0x0004a821) cell_tb_ext_pane_g1

0xd90f,	// (0x0004a83e) cell_tb_ext_pane_t1

0x7ed6,	// (0x00044e05) list_highlight_pane_cp11_ParamLimits

0x7ed6,	// (0x00044e05) list_highlight_pane_cp11

0x56fd,	// (0x0004262c) popup_uni_indicator_window_ParamLimits

0x56fd,	// (0x0004262c) popup_uni_indicator_window

0x84e6,	// (0x00045415) bg_popup_sub_pane_cp14

0xd92a,	// (0x0004a859) list_uniindi_pane

0xd936,	// (0x0004a865) uniindi_top_pane

0x7ed6,	// (0x00044e05) bg_uniindi_top_pane

0xd955,	// (0x0004a884) uniindi_top_pane_g1

0xd96b,	// (0x0004a89a) uniindi_top_pane_g2

0x0003,

0xfcfa,	// (0x0004cc29) uniindi_top_pane_g

0xd995,	// (0x0004a8c4) uniindi_top_pane_t1

0xd9bf,	// (0x0004a8ee) list_single_uniindi_pane_ParamLimits

0xd9bf,	// (0x0004a8ee) list_single_uniindi_pane

0xc026,	// (0x00048f55) bg_uniindi_top_pane_g1

0xd9d2,	// (0x0004a901) list_single_uniindi_pane_g1

0xd9e5,	// (0x0004a914) list_single_uniindi_pane_t1

0x26d2,	// (0x0003f601) control_bg_pane

0xda0a,	// (0x0004a939) bg_sctrl_sk_pane_cp1

0xda13,	// (0x0004a942) bg_sctrl_sk_pane_cp2

0xda1c,	// (0x0004a94b) control_bg_pane_g1

0xda25,	// (0x0004a954) control_bg_pane_g2

0x0001,

0xfd03,	// (0x0004cc32) control_bg_pane_g

0xba6d,	// (0x0004899c) cell_indicator_nsta_pane_g1_ParamLimits

0xba7b,	// (0x000489aa) cell_indicator_nsta_pane_g2_ParamLimits

0xfa77,	// (0x0004c9a6) cell_indicator_nsta_pane_g_ParamLimits

0x5132,	// (0x00042061) form2_midp_time_pane_t1_ParamLimits

0x824b,	// (0x0004517a) main_idle_act4_pane_ParamLimits

0x824b,	// (0x0004517a) main_idle_act4_pane

0x637b,	// (0x000432aa) popup_tb_extension_window_ParamLimits

0xd8cb,	// (0x0004a7fa) tb_ext_find_pane_ParamLimits

0xd8cb,	// (0x0004a7fa) tb_ext_find_pane

0xda2e,	// (0x0004a95d) ai_gene_pane_1_cp1

0x92ee,	// (0x0004621d) ai_gene_pane_2_cp1

0xda36,	// (0x0004a965) list_single_idle_plugin_calendar_pane

0xda3f,	// (0x0004a96e) list_single_idle_plugin_notification_pane

0xda48,	// (0x0004a977) list_single_idle_plugin_player_pane

0xda51,	// (0x0004a980) list_single_idle_plugin_shortcut_pane_ParamLimits

0xda51,	// (0x0004a980) list_single_idle_plugin_shortcut_pane

0xda73,	// (0x0004a9a2) main_idle_act4_pane_t1

0xda85,	// (0x0004a9b4) main_idle_act4_pane_t2

0x0001,

0xfd08,	// (0x0004cc37) main_idle_act4_pane_t

0xda97,	// (0x0004a9c6) middle_sk_idle_act4_pane_ParamLimits

0xda97,	// (0x0004a9c6) middle_sk_idle_act4_pane

0xdaad,	// (0x0004a9dc) popup_clock_digital_analogue_window_cp2

0xdac7,	// (0x0004a9f6) shortcut_wheel_idle_act4_pane_ParamLimits

0xdac7,	// (0x0004a9f6) shortcut_wheel_idle_act4_pane

0xc026,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g1

0xc026,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g2

0xc026,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g3

0xc026,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g4

0xc026,	// (0x00048f55) shortcut_wheel_idle_act4_pane_g5

0xdadb,	// (0x0004aa0a) shortcut_wheel_idle_act4_pane_g6

0xdae3,	// (0x0004aa12) shortcut_wheel_idle_act4_pane_g7

0xdaeb,	// (0x0004aa1a) shortcut_wheel_idle_act4_pane_g8

0xdaf3,	// (0x0004aa22) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd0d,	// (0x0004cc3c) shortcut_wheel_idle_act4_pane_g

0xc2a4,	// (0x000491d3) middle_sk_idle_act4_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) middle_sk_idle_act4_pane_g1

0xdb57,	// (0x0004aa86) middle_sk_idle_act4_pane_g2_ParamLimits

0xdb57,	// (0x0004aa86) middle_sk_idle_act4_pane_g2

0x0001,

0xfd30,	// (0x0004cc5f) middle_sk_idle_act4_pane_g_ParamLimits

0xfd30,	// (0x0004cc5f) middle_sk_idle_act4_pane_g

0xdb63,	// (0x0004aa92) middle_sk_idle_act4_pane_t1_ParamLimits

0xdb63,	// (0x0004aa92) middle_sk_idle_act4_pane_t1

0xdb80,	// (0x0004aaaf) grid_ai_shortcut_pane_ParamLimits

0xdb80,	// (0x0004aaaf) grid_ai_shortcut_pane

0xdb99,	// (0x0004aac8) list_highlight_pane_cp16_ParamLimits

0xdb99,	// (0x0004aac8) list_highlight_pane_cp16

0xdba6,	// (0x0004aad5) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdba6,	// (0x0004aad5) list_single_idle_plugin_shortcut_pane_g1

0xdbb2,	// (0x0004aae1) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdbb2,	// (0x0004aae1) list_single_idle_plugin_shortcut_pane_g2

0xdbca,	// (0x0004aaf9) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdbca,	// (0x0004aaf9) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd35,	// (0x0004cc64) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd35,	// (0x0004cc64) list_single_idle_plugin_shortcut_pane_g

0xdbdd,	// (0x0004ab0c) cell_ai_shortcut_pane_ParamLimits

0xdbdd,	// (0x0004ab0c) cell_ai_shortcut_pane

0xdc01,	// (0x0004ab30) cell_ai_shortcut_pane_g1_ParamLimits

0xdc01,	// (0x0004ab30) cell_ai_shortcut_pane_g1

0xda2e,	// (0x0004a95d) ai_gene_pane_1_cp2

0xdc23,	// (0x0004ab52) ai_gene_pane_2_cp2

0xdc2b,	// (0x0004ab5a) list_highlight_pane_cp15

0xdc34,	// (0x0004ab63) list_single_idle_plugin_calendar_pane_g1

0xdc2b,	// (0x0004ab5a) list_highlight_pane_cp17

0xdc3c,	// (0x0004ab6b) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc44,	// (0x0004ab73) list_single_idle_plugin_player_pane_g1

0xb3a1,	// (0x000482d0) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd3c,	// (0x0004cc6b) list_single_idle_plugin_player_pane_g

0xdc4c,	// (0x0004ab7b) list_single_idle_plugin_player_pane_t1

0xdc5a,	// (0x0004ab89) list_single_idle_plugin_player_pane_t2

0xdc68,	// (0x0004ab97) list_single_idle_plugin_player_pane_t3

0xdc76,	// (0x0004aba5) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd41,	// (0x0004cc70) list_single_idle_plugin_player_pane_t

0xdc84,	// (0x0004abb3) wait_bar_pane_cp15

0xdc8c,	// (0x0004abbb) grid_ai_notification_pane

0xb3a1,	// (0x000482d0) list_single_idle_plugin_notification_pane_g1

0xdc95,	// (0x0004abc4) cell_ai_notification_pane_ParamLimits

0xdc95,	// (0x0004abc4) cell_ai_notification_pane

0xdca2,	// (0x0004abd1) cell_ai_notification_pane_g1

0xdcaa,	// (0x0004abd9) cell_ai_notification_pane_t1

0xdcb8,	// (0x0004abe7) tb_ext_find_button_pane

0xdcc0,	// (0x0004abef) tb_ext_find_pane_g1

0xdcc8,	// (0x0004abf7) tb_ext_find_pane_t1

0x8b6f,	// (0x00045a9e) tb_ext_find_button_pane_g1

0xdcd6,	// (0x0004ac05) tb_ext_find_button_pane_g2

0x0001,

0xfd4a,	// (0x0004cc79) tb_ext_find_button_pane_g

0xda73,	// (0x0004a9a2) main_idle_act4_pane_t1_ParamLimits

0xda85,	// (0x0004a9b4) main_idle_act4_pane_t2_ParamLimits

0xfd08,	// (0x0004cc37) main_idle_act4_pane_t_ParamLimits

0xdaad,	// (0x0004a9dc) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdabb,	// (0x0004a9ea) sat_plugin_idle_act4_pane_ParamLimits

0xdabb,	// (0x0004a9ea) sat_plugin_idle_act4_pane

0xdcdf,	// (0x0004ac0e) sat_plugin_idle_act4_pane_t1_ParamLimits

0xdcdf,	// (0x0004ac0e) sat_plugin_idle_act4_pane_t1

0xdcf2,	// (0x0004ac21) sat_plugin_idle_act4_pane_t2_ParamLimits

0xdcf2,	// (0x0004ac21) sat_plugin_idle_act4_pane_t2

0xdd05,	// (0x0004ac34) sat_plugin_idle_act4_pane_t3_ParamLimits

0xdd05,	// (0x0004ac34) sat_plugin_idle_act4_pane_t3

0xdd18,	// (0x0004ac47) sat_plugin_idle_act4_pane_t4_ParamLimits

0xdd18,	// (0x0004ac47) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd4f,	// (0x0004cc7e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd4f,	// (0x0004cc7e) sat_plugin_idle_act4_pane_t

0x5638,	// (0x00042567) popup_battery_window_ParamLimits

0x5638,	// (0x00042567) popup_battery_window

0x7ed6,	// (0x00044e05) bg_popup_sub_pane_cp25_ParamLimits

0x7ed6,	// (0x00044e05) bg_popup_sub_pane_cp25

0xdd2b,	// (0x0004ac5a) popup_battery_window_g1_ParamLimits

0xdd2b,	// (0x0004ac5a) popup_battery_window_g1

0xdd37,	// (0x0004ac66) popup_battery_window_t1_ParamLimits

0xdd37,	// (0x0004ac66) popup_battery_window_t1

0xdd49,	// (0x0004ac78) popup_battery_window_t2_ParamLimits

0xdd49,	// (0x0004ac78) popup_battery_window_t2

0x0001,

0xfd58,	// (0x0004cc87) popup_battery_window_t_ParamLimits

0xfd58,	// (0x0004cc87) popup_battery_window_t

0x91bb,	// (0x000460ea) midp_canvas_pane_ParamLimits

0x9232,	// (0x00046161) midp_keypad_pane_ParamLimits

0x9232,	// (0x00046161) midp_keypad_pane

0x94cb,	// (0x000463fa) main_midp_pane_ParamLimits

0xbae7,	// (0x00048a16) signal_pane_g2_cp_ParamLimits

0xdd66,	// (0x0004ac95) aid_size_cell_midp_keypad_ParamLimits

0xdd66,	// (0x0004ac95) aid_size_cell_midp_keypad

0xdd80,	// (0x0004acaf) midp_keyp_game_grid_pane_ParamLimits

0xdd80,	// (0x0004acaf) midp_keyp_game_grid_pane

0xdda0,	// (0x0004accf) midp_keyp_rocker_pane_ParamLimits

0xdda0,	// (0x0004accf) midp_keyp_rocker_pane

0xddd9,	// (0x0004ad08) midp_keyp_sk_left_pane_ParamLimits

0xddd9,	// (0x0004ad08) midp_keyp_sk_left_pane

0xde33,	// (0x0004ad62) midp_keyp_sk_right_pane_ParamLimits

0xde33,	// (0x0004ad62) midp_keyp_sk_right_pane

0x26d2,	// (0x0003f601) bg_button_pane_cp03

0xde8d,	// (0x0004adbc) midp_keyp_sk_left_pane_g1

0x26d2,	// (0x0003f601) bg_button_pane_cp04

0xde8d,	// (0x0004adbc) midp_keyp_sk_right_pane_g1

0xc026,	// (0x00048f55) midp_keyp_rocker_pane_g1

0xde96,	// (0x0004adc5) keyp_game_cell_pane_ParamLimits

0xde96,	// (0x0004adc5) keyp_game_cell_pane

0x26d2,	// (0x0003f601) bg_button_pane_cp02

0xdea9,	// (0x0004add8) keyp_game_cell_pane_g1

0x567c,	// (0x000425ab) popup_fep_vkb2_window_ParamLimits

0x567c,	// (0x000425ab) popup_fep_vkb2_window

0x6f9a,	// (0x00043ec9) aid_size_cell_vkb2_ParamLimits

0x6f9a,	// (0x00043ec9) aid_size_cell_vkb2

0x6fe6,	// (0x00043f15) popup_fep_vkb2_window_g1_ParamLimits

0x6fe6,	// (0x00043f15) popup_fep_vkb2_window_g1

0x702e,	// (0x00043f5d) vkb2_area_bottom_pane_ParamLimits

0x702e,	// (0x00043f5d) vkb2_area_bottom_pane

0x707a,	// (0x00043fa9) vkb2_area_keypad_pane_ParamLimits

0x707a,	// (0x00043fa9) vkb2_area_keypad_pane

0x70bc,	// (0x00043feb) vkb2_area_top_pane_ParamLimits

0x70bc,	// (0x00043feb) vkb2_area_top_pane

0x713b,	// (0x0004406a) vkb2_top_entry_pane_ParamLimits

0x713b,	// (0x0004406a) vkb2_top_entry_pane

0x7165,	// (0x00044094) vkb2_top_grid_left_pane_ParamLimits

0x7165,	// (0x00044094) vkb2_top_grid_left_pane

0x7184,	// (0x000440b3) vkb2_top_grid_right_pane_ParamLimits

0x7184,	// (0x000440b3) vkb2_top_grid_right_pane

0x71a3,	// (0x000440d2) vkb2_cell_keypad_pane_ParamLimits

0x71a3,	// (0x000440d2) vkb2_cell_keypad_pane

0x7274,	// (0x000441a3) vkb2_area_bottom_grid_pane_ParamLimits

0x7274,	// (0x000441a3) vkb2_area_bottom_grid_pane

0x729a,	// (0x000441c9) vkb2_area_bottom_pane_g1_ParamLimits

0x729a,	// (0x000441c9) vkb2_area_bottom_pane_g1

0x72be,	// (0x000441ed) vkb2_area_bottom_pane_g2_ParamLimits

0x72be,	// (0x000441ed) vkb2_area_bottom_pane_g2

0x72ec,	// (0x0004421b) vkb2_area_bottom_pane_g3_ParamLimits

0x72ec,	// (0x0004421b) vkb2_area_bottom_pane_g3

0x0002,

0xfd5d,	// (0x0004cc8c) vkb2_area_bottom_pane_g_ParamLimits

0xfd5d,	// (0x0004cc8c) vkb2_area_bottom_pane_g

0x734d,	// (0x0004427c) vkb2_top_cell_left_pane_ParamLimits

0x734d,	// (0x0004427c) vkb2_top_cell_left_pane

0xdeba,	// (0x0004ade9) vkb2_top_entry_pane_g1_ParamLimits

0xdeba,	// (0x0004ade9) vkb2_top_entry_pane_g1

0xdec8,	// (0x0004adf7) vkb2_top_entry_pane_t1_ParamLimits

0xdec8,	// (0x0004adf7) vkb2_top_entry_pane_t1

0xdefa,	// (0x0004ae29) vkb2_top_entry_pane_t2_ParamLimits

0xdefa,	// (0x0004ae29) vkb2_top_entry_pane_t2

0xdf2c,	// (0x0004ae5b) vkb2_top_entry_pane_t3_ParamLimits

0xdf2c,	// (0x0004ae5b) vkb2_top_entry_pane_t3

0x0002,

0xfd64,	// (0x0004cc93) vkb2_top_entry_pane_t_ParamLimits

0xfd64,	// (0x0004cc93) vkb2_top_entry_pane_t

0x739a,	// (0x000442c9) vkb2_top_grid_right_pane_g1_ParamLimits

0x739a,	// (0x000442c9) vkb2_top_grid_right_pane_g1

0x73b0,	// (0x000442df) vkb2_top_grid_right_pane_g2_ParamLimits

0x73b0,	// (0x000442df) vkb2_top_grid_right_pane_g2

0x73c8,	// (0x000442f7) vkb2_top_grid_right_pane_g3_ParamLimits

0x73c8,	// (0x000442f7) vkb2_top_grid_right_pane_g3

0x73e0,	// (0x0004430f) vkb2_top_grid_right_pane_g4_ParamLimits

0x73e0,	// (0x0004430f) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6b,	// (0x0004cc9a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6b,	// (0x0004cc9a) vkb2_top_grid_right_pane_g

0x73f6,	// (0x00044325) vkb2_top_cell_left_pane_g1

0x740d,	// (0x0004433c) vkb2_cell_keypad_pane_g1_ParamLimits

0x740d,	// (0x0004433c) vkb2_cell_keypad_pane_g1

0xdf50,	// (0x0004ae7f) vkb2_cell_keypad_pane_t1_ParamLimits

0xdf50,	// (0x0004ae7f) vkb2_cell_keypad_pane_t1

0x741b,	// (0x0004434a) vkb2_cell_bottom_grid_pane_ParamLimits

0x741b,	// (0x0004434a) vkb2_cell_bottom_grid_pane

0x7454,	// (0x00044383) vkb2_cell_bottom_grid_pane_g1

0xdafb,	// (0x0004aa2a) aid_call2_pane_cp02

0xdb03,	// (0x0004aa32) aid_call_pane_cp02

0xdb0b,	// (0x0004aa3a) clock_digital_number_pane_cp10

0xdb13,	// (0x0004aa42) clock_digital_number_pane_cp11

0xdb1b,	// (0x0004aa4a) clock_digital_number_pane_cp12

0xdb23,	// (0x0004aa52) clock_digital_number_pane_cp13

0xdb2b,	// (0x0004aa5a) clock_digital_separator_pane_cp10

0x8b6f,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g1

0x8b6f,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g2

0xdb33,	// (0x0004aa62) popup_clock_digital_analogue_window_cp2_g3

0x8b6f,	// (0x00045a9e) popup_clock_digital_analogue_window_cp2_g4

0xdb33,	// (0x0004aa62) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd20,	// (0x0004cc4f) popup_clock_digital_analogue_window_cp2_g

0xdb3b,	// (0x0004aa6a) popup_clock_digital_analogue_window_cp2_t1

0xdb49,	// (0x0004aa78) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2b,	// (0x0004cc5a) popup_clock_digital_analogue_window_cp2_t

0xc026,	// (0x00048f55) clock_digital_number_pane_cp10_g1

0xc026,	// (0x00048f55) clock_digital_number_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004ca42) clock_digital_number_pane_cp10_g

0xc026,	// (0x00048f55) clock_digital_separator_pane_cp10_g1

0xc026,	// (0x00048f55) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb13,	// (0x0004ca42) clock_digital_separator_pane_cp10_g

0xd977,	// (0x0004a8a6) uniindi_top_pane_g3

0xd988,	// (0x0004a8b7) uniindi_top_pane_g4

0x722e,	// (0x0004415d) vkb2_row_keypad_pane_ParamLimits

0x722e,	// (0x0004415d) vkb2_row_keypad_pane

0x7474,	// (0x000443a3) vkb2_cell_t_keypad_pane_ParamLimits

0x7474,	// (0x000443a3) vkb2_cell_t_keypad_pane

0x7484,	// (0x000443b3) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x7484,	// (0x000443b3) vkb2_cell_t_keypad_pane_cp08

0x7497,	// (0x000443c6) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x7497,	// (0x000443c6) vkb2_cell_t_keypad_pane_cp09

0x74ab,	// (0x000443da) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x74ab,	// (0x000443da) vkb2_cell_t_keypad_pane_cp01

0x74bc,	// (0x000443eb) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x74bc,	// (0x000443eb) vkb2_cell_t_keypad_pane_cp02

0x74cd,	// (0x000443fc) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x74cd,	// (0x000443fc) vkb2_cell_t_keypad_pane_cp03

0x74de,	// (0x0004440d) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x74de,	// (0x0004440d) vkb2_cell_t_keypad_pane_cp04

0x74ef,	// (0x0004441e) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x74ef,	// (0x0004441e) vkb2_cell_t_keypad_pane_cp05

0x7500,	// (0x0004442f) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7500,	// (0x0004442f) vkb2_cell_t_keypad_pane_cp06

0x7511,	// (0x00044440) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7511,	// (0x00044440) vkb2_cell_t_keypad_pane_cp07

0x7522,	// (0x00044451) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7522,	// (0x00044451) vkb2_cell_t_keypad_pane_cp10

0xc2a4,	// (0x000491d3) vkb2_cell_t_keypad_pane_g1

0xdf67,	// (0x0004ae96) vkb2_cell_t_keypad_pane_t1

0x26d2,	// (0x0003f601) popup_grid_graphic2_window

0xdf79,	// (0x0004aea8) aid_size_cell_graphic2_ParamLimits

0xdf79,	// (0x0004aea8) aid_size_cell_graphic2

0xdfb1,	// (0x0004aee0) bg_popup_window_pane_cp21_ParamLimits

0xdfb1,	// (0x0004aee0) bg_popup_window_pane_cp21

0xdfbf,	// (0x0004aeee) graphic2_pages_pane_ParamLimits

0xdfbf,	// (0x0004aeee) graphic2_pages_pane

0xe005,	// (0x0004af34) grid_graphic2_control_pane_ParamLimits

0xe005,	// (0x0004af34) grid_graphic2_control_pane

0xe043,	// (0x0004af72) grid_graphic2_pane_ParamLimits

0xe043,	// (0x0004af72) grid_graphic2_pane

0xe0b7,	// (0x0004afe6) cell_graphic2_pane

0x26d2,	// (0x0003f601) main_comp_mode_pane

0xd1e3,	// (0x0004a112) list_ai3_gene_pane_ParamLimits

0xd5b9,	// (0x0004a4e8) bg_popup_window_pane_cp19_ParamLimits

0xd5c5,	// (0x0004a4f4) bg_touch_area_indi_pane_ParamLimits

0xd5c5,	// (0x0004a4f4) bg_touch_area_indi_pane

0xd5db,	// (0x0004a50a) bg_touch_area_indi_pane_cp01_ParamLimits

0xd5db,	// (0x0004a50a) bg_touch_area_indi_pane_cp01

0xd5f1,	// (0x0004a520) bg_touch_area_indi_pane_cp02_ParamLimits

0xd5f1,	// (0x0004a520) bg_touch_area_indi_pane_cp02

0xd607,	// (0x0004a536) bg_touch_area_indi_pane_cp03_ParamLimits

0xd607,	// (0x0004a536) bg_touch_area_indi_pane_cp03

0xd621,	// (0x0004a550) popup_slider_window_g1_ParamLimits

0xd63d,	// (0x0004a56c) popup_slider_window_g2_ParamLimits

0xd659,	// (0x0004a588) popup_slider_window_g3_ParamLimits

0xfcb5,	// (0x0004cbe4) popup_slider_window_g_ParamLimits

0xd6bf,	// (0x0004a5ee) popup_slider_window_t1_ParamLimits

0xd733,	// (0x0004a662) small_volume_slider_vertical_pane_ParamLimits

0xe0b7,	// (0x0004afe6) cell_graphic2_pane_ParamLimits

0xe106,	// (0x0004b035) bg_button_pane_cp10_ParamLimits

0xe106,	// (0x0004b035) bg_button_pane_cp10

0xe119,	// (0x0004b048) bg_button_pane_cp11_ParamLimits

0xe119,	// (0x0004b048) bg_button_pane_cp11

0xe12c,	// (0x0004b05b) graphic2_pages_pane_g1_ParamLimits

0xe12c,	// (0x0004b05b) graphic2_pages_pane_g1

0xe147,	// (0x0004b076) graphic2_pages_pane_g2_ParamLimits

0xe147,	// (0x0004b076) graphic2_pages_pane_g2

0x0001,

0xfd79,	// (0x0004cca8) graphic2_pages_pane_g_ParamLimits

0xfd79,	// (0x0004cca8) graphic2_pages_pane_g

0xe15f,	// (0x0004b08e) graphic2_pages_pane_t1_ParamLimits

0xe15f,	// (0x0004b08e) graphic2_pages_pane_t1

0xe177,	// (0x0004b0a6) cell_graphic2_control_pane_ParamLimits

0xe177,	// (0x0004b0a6) cell_graphic2_control_pane

0xe195,	// (0x0004b0c4) cell_graphic2_pane_g1_ParamLimits

0xe195,	// (0x0004b0c4) cell_graphic2_pane_g1

0xe1a2,	// (0x0004b0d1) cell_graphic2_pane_g2_ParamLimits

0xe1a2,	// (0x0004b0d1) cell_graphic2_pane_g2

0xe1af,	// (0x0004b0de) cell_graphic2_pane_g3_ParamLimits

0xe1af,	// (0x0004b0de) cell_graphic2_pane_g3

0xe1bc,	// (0x0004b0eb) cell_graphic2_pane_g4_ParamLimits

0xe1bc,	// (0x0004b0eb) cell_graphic2_pane_g4

0xe1c9,	// (0x0004b0f8) cell_graphic2_pane_g5_ParamLimits

0xe1c9,	// (0x0004b0f8) cell_graphic2_pane_g5

0x0004,

0xfd7e,	// (0x0004ccad) cell_graphic2_pane_g_ParamLimits

0xfd7e,	// (0x0004ccad) cell_graphic2_pane_g

0xe1e2,	// (0x0004b111) cell_graphic2_pane_t1_ParamLimits

0xe1e2,	// (0x0004b111) cell_graphic2_pane_t1

0x9a69,	// (0x00046998) grid_highlight_pane_cp11_ParamLimits

0x9a69,	// (0x00046998) grid_highlight_pane_cp11

0x7ed6,	// (0x00044e05) bg_button_pane_cp05

0xe218,	// (0x0004b147) cell_graphic2_control_pane_g1

0xc026,	// (0x00048f55) bg_touch_area_indi_pane_g1

0xe240,	// (0x0004b16f) aid_cmod_rocker_key_size

0xe24a,	// (0x0004b179) aid_cmode_itu_key_size

0xe254,	// (0x0004b183) main_cmode_video_pane

0xe25e,	// (0x0004b18d) main_comp_mode_itu_pane

0xe26a,	// (0x0004b199) main_comp_mode_rocker_pane

0xe276,	// (0x0004b1a5) cell_cmode_rocker_pane_ParamLimits

0xe276,	// (0x0004b1a5) cell_cmode_rocker_pane

0xe288,	// (0x0004b1b7) cell_cmode_itu_pane_ParamLimits

0xe288,	// (0x0004b1b7) cell_cmode_itu_pane

0x84e6,	// (0x00045415) bg_button_pane_cp06_ParamLimits

0x84e6,	// (0x00045415) bg_button_pane_cp06

0xc2a4,	// (0x000491d3) cell_cmode_rocker_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) cell_cmode_rocker_pane_g1

0xd7d7,	// (0x0004a706) cell_cmode_rocker_pane_g2_ParamLimits

0xd7d7,	// (0x0004a706) cell_cmode_rocker_pane_g2

0x0001,

0xfd8e,	// (0x0004ccbd) cell_cmode_rocker_pane_g_ParamLimits

0xfd8e,	// (0x0004ccbd) cell_cmode_rocker_pane_g

0x26d2,	// (0x0003f601) bg_button_pane_cp07

0xe29d,	// (0x0004b1cc) cell_cmode_itu_pane_g1

0xe2a6,	// (0x0004b1d5) cell_cmode_itu_pane_t1

0xe2b4,	// (0x0004b1e3) cell_cmode_itu_pane_t2

0x0001,

0xfd93,	// (0x0004ccc2) cell_cmode_itu_pane_t

0xd9fa,	// (0x0004a929) aid_touch_ctrl_left

0xda02,	// (0x0004a931) aid_touch_ctrl_right

0x26d2,	// (0x0003f601) compa_mode_pane

0xe2c2,	// (0x0004b1f1) aid_cmod_rocker_key_size_cp

0xe2cc,	// (0x0004b1fb) aid_cmode_itu_key_size_cp

0xe2d6,	// (0x0004b205) compa_mode_pane_g1

0xe2de,	// (0x0004b20d) compa_mode_pane_g2

0xe2e6,	// (0x0004b215) compa_mode_pane_g3

0x0002,

0xfd98,	// (0x0004ccc7) compa_mode_pane_g

0xe2ee,	// (0x0004b21d) main_comp_mode_itu_pane_cp

0xe2f6,	// (0x0004b225) main_comp_mode_rocker_pane_cp

0xe2fe,	// (0x0004b22d) cell_cmode_itu_pane_cp_ParamLimits

0xe2fe,	// (0x0004b22d) cell_cmode_itu_pane_cp

0xe313,	// (0x0004b242) cell_cmode_rocker_pane_cp_ParamLimits

0xe313,	// (0x0004b242) cell_cmode_rocker_pane_cp

0x84e6,	// (0x00045415) bg_button_pane_cp06_cp_ParamLimits

0x84e6,	// (0x00045415) bg_button_pane_cp06_cp

0xc2a4,	// (0x000491d3) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xc2a4,	// (0x000491d3) cell_cmode_rocker_pane_g1_cp

0xc026,	// (0x00048f55) cell_cmode_rocker_pane_g2_cp

0x26d2,	// (0x0003f601) bg_button_pane_cp07_cp

0xaf4f,	// (0x00047e7e) cell_cmode_itu_pane_g1_cp

0xe325,	// (0x0004b254) cell_cmode_itu_pane_t1_cp

0xe325,	// (0x0004b254) cell_cmode_itu_pane_t2_cp

0xaf3c,	// (0x00047e6b) settings_code_pane_cp2

0x7c4d,	// (0x00044b7c) bg_popup_window_pane_cp3_ParamLimits

0x80d6,	// (0x00045005) heading_pane_cp3_ParamLimits

0x80e5,	// (0x00045014) listscroll_popup_graphic_pane_ParamLimits

0x6a53,	// (0x00043982) fep_hwr_aid_pane_ParamLimits

0x6f11,	// (0x00043e40) aid_touch_sctrl_top_ParamLimits

0x6f1e,	// (0x00043e4d) sctrl_sk_top_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) sctrl_sk_top_pane_g2_ParamLimits

0xfcce,	// (0x0004cbfd) sctrl_sk_top_pane_g_ParamLimits

0x6f2b,	// (0x00043e5a) sctrl_sk_top_pane_t1_ParamLimits

0x6f11,	// (0x00043e40) aid_touch_sctrl_bottom_ParamLimits

0x6f2b,	// (0x00043e5a) sctrl_sk_bottom_pane_t1_ParamLimits

0xd943,	// (0x0004a872) aid_area_touch_clock

0x7102,	// (0x00044031) aid_vkb2_area_top_pane_cell_ParamLimits

0x7102,	// (0x00044031) aid_vkb2_area_top_pane_cell

0x7250,	// (0x0004417f) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x7250,	// (0x0004417f) aid_vkb2_area_bottom_pane_cell

0xdeb2,	// (0x0004ade1) popup_char_count_window

0xe333,	// (0x0004b262) popup_char_count_window_g1

0xe33c,	// (0x0004b26b) popup_char_count_window_g2

0xe345,	// (0x0004b274) popup_char_count_window_g3

0x0002,

0xfd9f,	// (0x0004ccce) popup_char_count_window_g

0xe34e,	// (0x0004b27d) popup_char_count_window_t1

0x6fc4,	// (0x00043ef3) popup_fep_char_preview_window_ParamLimits

0x6fc4,	// (0x00043ef3) popup_fep_char_preview_window

0x7120,	// (0x0004404f) vkb2_top_candi_pane_ParamLimits

0x7120,	// (0x0004404f) vkb2_top_candi_pane

0xe35c,	// (0x0004b28b) cell_vkb2_top_candi_pane_ParamLimits

0xe35c,	// (0x0004b28b) cell_vkb2_top_candi_pane

0xa090,	// (0x00046fbf) bg_popup_fep_char_preview_window_ParamLimits

0xa090,	// (0x00046fbf) bg_popup_fep_char_preview_window

0x7537,	// (0x00044466) popup_fep_char_preview_window_t1_ParamLimits

0x7537,	// (0x00044466) popup_fep_char_preview_window_t1

0xe3a6,	// (0x0004b2d5) bg_popup_fep_char_preview_window_g1

0xe3ae,	// (0x0004b2dd) bg_popup_fep_char_preview_window_g2

0xe3b6,	// (0x0004b2e5) bg_popup_fep_char_preview_window_g3

0xe3be,	// (0x0004b2ed) bg_popup_fep_char_preview_window_g4

0xe3c6,	// (0x0004b2f5) bg_popup_fep_char_preview_window_g5

0xe3ce,	// (0x0004b2fd) bg_popup_fep_char_preview_window_g6

0xe3d6,	// (0x0004b305) bg_popup_fep_char_preview_window_g7

0xe3de,	// (0x0004b30d) bg_popup_fep_char_preview_window_g8

0xe3e6,	// (0x0004b315) bg_popup_fep_char_preview_window_g9

0x0009,

0xfda6,	// (0x0004ccd5) bg_popup_fep_char_preview_window_g

0xc2a4,	// (0x000491d3) cell_vkb2_top_candi_pane_g1_ParamLimits

0xc2a4,	// (0x000491d3) cell_vkb2_top_candi_pane_g1

0xc5bb,	// (0x000494ea) cell_vkb2_top_candi_pane_g2_ParamLimits

0xc5bb,	// (0x000494ea) cell_vkb2_top_candi_pane_g2

0xc5dc,	// (0x0004950b) cell_vkb2_top_candi_pane_g3_ParamLimits

0xc5dc,	// (0x0004950b) cell_vkb2_top_candi_pane_g3

0x7579,	// (0x000444a8) cell_vkb2_top_candi_pane_g4_ParamLimits

0x7579,	// (0x000444a8) cell_vkb2_top_candi_pane_g4

0xe3ee,	// (0x0004b31d) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe3ee,	// (0x0004b31d) cell_vkb2_top_candi_pane_g5

0xd7d7,	// (0x0004a706) cell_vkb2_top_candi_pane_g6_ParamLimits

0xd7d7,	// (0x0004a706) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbb,	// (0x0004ccea) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbb,	// (0x0004ccea) cell_vkb2_top_candi_pane_g

0x759a,	// (0x000444c9) cell_vkb2_top_candi_pane_t1

0x67bc,	// (0x000436eb) aid_size_touch_slider_mark_ParamLimits

0x67bc,	// (0x000436eb) aid_size_touch_slider_mark

0xdff5,	// (0x0004af24) grid_graphic2_catg_pane_ParamLimits

0xdff5,	// (0x0004af24) grid_graphic2_catg_pane

0xe093,	// (0x0004afc2) popup_grid_graphic2_window_t1_ParamLimits

0xe093,	// (0x0004afc2) popup_grid_graphic2_window_t1

0xe0a5,	// (0x0004afd4) popup_grid_graphic2_window_t2_ParamLimits

0xe0a5,	// (0x0004afd4) popup_grid_graphic2_window_t2

0x0001,

0xfd74,	// (0x0004cca3) popup_grid_graphic2_window_t_ParamLimits

0xfd74,	// (0x0004cca3) popup_grid_graphic2_window_t

0x7ed6,	// (0x00044e05) bg_button_pane_cp05_ParamLimits

0xe218,	// (0x0004b147) cell_graphic2_control_pane_g1_ParamLimits

0xe40f,	// (0x0004b33e) cell_graphic2_catg_pane_ParamLimits

0xe40f,	// (0x0004b33e) cell_graphic2_catg_pane

0x26d2,	// (0x0003f601) bg_button_pane_cp12

0xe421,	// (0x0004b350) cell_graphic2_catg_pane_g1

0xd90f,	// (0x0004a83e) cell_tb_ext_pane_t1_ParamLimits

0x736d,	// (0x0004429c) vkb2_top_cell_right_narrow_pane_ParamLimits

0x736d,	// (0x0004429c) vkb2_top_cell_right_narrow_pane

0x7385,	// (0x000442b4) vkb2_top_cell_right_wide_pane_ParamLimits

0x7385,	// (0x000442b4) vkb2_top_cell_right_wide_pane

0x6a45,	// (0x00043974) bg_vkb2_func_pane_ParamLimits

0x6a45,	// (0x00043974) bg_vkb2_func_pane

0x73f6,	// (0x00044325) vkb2_top_cell_left_pane_g1_ParamLimits

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp03_ParamLimits

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp03

0x7454,	// (0x00044383) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x99fd,	// (0x0004692c) bg_vkb2_func_pane_g1

0x9a05,	// (0x00046934) bg_vkb2_func_pane_g2

0x9a15,	// (0x00046944) bg_vkb2_func_pane_g3

0x9a0d,	// (0x0004693c) bg_vkb2_func_pane_g4

0x9a1d,	// (0x0004694c) bg_vkb2_func_pane_g5

0x9a25,	// (0x00046954) bg_vkb2_func_pane_g6

0x9a2d,	// (0x0004695c) bg_vkb2_func_pane_g7

0x9a35,	// (0x00046964) bg_vkb2_func_pane_g8

0x99f5,	// (0x00046924) bg_vkb2_func_pane_g9

0x0008,

0xfdc8,	// (0x0004ccf7) bg_vkb2_func_pane_g

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp01_ParamLimits

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp01

0x73f6,	// (0x00044325) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x73f6,	// (0x00044325) vkb2_top_cell_right_wide_pane_g1

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp02_ParamLimits

0x6a45,	// (0x00043974) bg_vkb2_fuc_pane_cp02

0x75b9,	// (0x000444e8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x75b9,	// (0x000444e8) vkb2_top_cell_right_narrow_pane_g1

0xd533,	// (0x0004a462) aid_touch_area_decrease_ParamLimits

0xd533,	// (0x0004a462) aid_touch_area_decrease

0xd557,	// (0x0004a486) aid_touch_area_increase_ParamLimits

0xd557,	// (0x0004a486) aid_touch_area_increase

0xd56f,	// (0x0004a49e) aid_touch_area_mute_ParamLimits

0xd56f,	// (0x0004a49e) aid_touch_area_mute

0xd58b,	// (0x0004a4ba) aid_touch_area_slider_ParamLimits

0xd58b,	// (0x0004a4ba) aid_touch_area_slider

0xd675,	// (0x0004a5a4) popup_slider_window_g4_ParamLimits

0xd675,	// (0x0004a5a4) popup_slider_window_g4

0xd68d,	// (0x0004a5bc) popup_slider_window_g5_ParamLimits

0xd68d,	// (0x0004a5bc) popup_slider_window_g5

0xd6af,	// (0x0004a5de) popup_slider_window_g6_ParamLimits

0xd6af,	// (0x0004a5de) popup_slider_window_g6

0xd6ed,	// (0x0004a61c) popup_slider_window_t2_ParamLimits

0xd6ed,	// (0x0004a61c) popup_slider_window_t2

0x0001,

0xfcc2,	// (0x0004cbf1) popup_slider_window_t_ParamLimits

0xfcc2,	// (0x0004cbf1) popup_slider_window_t

0xd705,	// (0x0004a634) slider_pane_ParamLimits

0xd705,	// (0x0004a634) slider_pane

0xe42a,	// (0x0004b359) slider_pane_g1_ParamLimits

0xe42a,	// (0x0004b359) slider_pane_g1

0xe43e,	// (0x0004b36d) slider_pane_g2_ParamLimits

0xe43e,	// (0x0004b36d) slider_pane_g2

0xe454,	// (0x0004b383) slider_pane_g3_ParamLimits

0xe454,	// (0x0004b383) slider_pane_g3

0x0003,

0xfddb,	// (0x0004cd0a) slider_pane_g_ParamLimits

0xfddb,	// (0x0004cd0a) slider_pane_g

0x63d7,	// (0x00043306) popup_tb_float_extension_window_ParamLimits

0x63d7,	// (0x00043306) popup_tb_float_extension_window

0xe480,	// (0x0004b3af) aid_size_cell_tb_float_ext

0x26d2,	// (0x0003f601) bg_popup_sub_window_cp28

0xe48c,	// (0x0004b3bb) grid_tb_float_ext_pane

0xe496,	// (0x0004b3c5) cell_tb_float_ext_pane_ParamLimits

0xe496,	// (0x0004b3c5) cell_tb_float_ext_pane

0xe4b0,	// (0x0004b3df) cell_tb_float_ext_pane_g1

0xe4b9,	// (0x0004b3e8) grid_highlight_pane_cp12

0x6b86,	// (0x00043ab5) cell_last_hwr_side_pane_ParamLimits

0x6b86,	// (0x00043ab5) cell_last_hwr_side_pane

0xc026,	// (0x00048f55) cell_last_hwr_side_pane_g1

0xe4c2,	// (0x0004b3f1) cell_last_hwr_side_pane_g2

0x0001,

0xfde4,	// (0x0004cd13) cell_last_hwr_side_pane_g

0x731c,	// (0x0004424b) vkb2_area_bottom_space_btn_pane_ParamLimits

0x731c,	// (0x0004424b) vkb2_area_bottom_space_btn_pane

0xc2a4,	// (0x000491d3) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xdf67,	// (0x0004ae96) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x759a,	// (0x000444c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0x75d9,	// (0x00044508) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x75d9,	// (0x00044508) vkb2_area_bottom_space_btn_pane_g1

0x7613,	// (0x00044542) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7613,	// (0x00044542) vkb2_area_bottom_space_btn_pane_g2

0x7649,	// (0x00044578) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x7649,	// (0x00044578) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfde9,	// (0x0004cd18) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfde9,	// (0x0004cd18) vkb2_area_bottom_space_btn_pane_g

0x6afa,	// (0x00043a29) cel_fep_hwr_func_pane_ParamLimits

0x6afa,	// (0x00043a29) cel_fep_hwr_func_pane

0x6b36,	// (0x00043a65) cell_hwr_side_button_pane_ParamLimits

0x6b36,	// (0x00043a65) cell_hwr_side_button_pane

0xd943,	// (0x0004a872) aid_area_touch_clock_ParamLimits

0x7ed6,	// (0x00044e05) bg_uniindi_top_pane_ParamLimits

0xd955,	// (0x0004a884) uniindi_top_pane_g1_ParamLimits

0xd96b,	// (0x0004a89a) uniindi_top_pane_g2_ParamLimits

0xd977,	// (0x0004a8a6) uniindi_top_pane_g3_ParamLimits

0xd988,	// (0x0004a8b7) uniindi_top_pane_g4_ParamLimits

0xfcfa,	// (0x0004cc29) uniindi_top_pane_g_ParamLimits

0xd995,	// (0x0004a8c4) uniindi_top_pane_t1_ParamLimits

0x7ed6,	// (0x00044e05) bg_vkb2_func_pane_cp01_ParamLimits

0x7ed6,	// (0x00044e05) bg_vkb2_func_pane_cp01

0xe4cb,	// (0x0004b3fa) cel_fep_hwr_func_pane_g1_ParamLimits

0xe4cb,	// (0x0004b3fa) cel_fep_hwr_func_pane_g1

0x7ed6,	// (0x00044e05) bg_vkb2_func_pane_cp02_ParamLimits

0x7ed6,	// (0x00044e05) bg_vkb2_func_pane_cp02

0xe4cb,	// (0x0004b3fa) cell_hwr_side_button_pane_g1_ParamLimits

0xe4cb,	// (0x0004b3fa) cell_hwr_side_button_pane_g1

0x9876,	// (0x000467a5) status_pane_g4_ParamLimits

0x9876,	// (0x000467a5) status_pane_g4

0x9890,	// (0x000467bf) status_pane_t1

0xbd6b,	// (0x00048c9a) form2_midp_gauge_slider_cont_pane

0xbd73,	// (0x00048ca2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbd85,	// (0x00048cb4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbd97,	// (0x00048cc6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac6,	// (0x0004c9f5) form2_midp_gauge_slider_pane_t_ParamLimits

0xbda9,	// (0x00048cd8) form2_midp_slider_pane_ParamLimits

0x6f8c,	// (0x00043ebb) aid_size_cell_func_vkb2_ParamLimits

0x6f8c,	// (0x00043ebb) aid_size_cell_func_vkb2

0xe46c,	// (0x0004b39b) slider_pane_g4_ParamLimits

0xe46c,	// (0x0004b39b) slider_pane_g4

0x7693,	// (0x000445c2) form2_midp_gauge_slider_pane_t2_cp01

0x76a1,	// (0x000445d0) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x76a1,	// (0x000445d0) form2_midp_gauge_slider_pane_t3_cp01

0x76be,	// (0x000445ed) form2_midp_slider_pane_cp01

0x26d2,	// (0x0003f601) navi_smil_pane

0xe504,	// (0x0004b433) navi_smil_pane_g1

0xe50c,	// (0x0004b43b) navi_smil_pane_t1

0xe4d9,	// (0x0004b408) form2_midp_slider_pane_g1

0xe4e2,	// (0x0004b411) form2_midp_slider_pane_g2

0xe4ea,	// (0x0004b419) form2_midp_slider_pane_g3

0xe4d9,	// (0x0004b408) form2_midp_slider_pane_g4

0xe4f2,	// (0x0004b421) form2_midp_slider_pane_g5

0x0004,

0xfdf2,	// (0x0004cd21) form2_midp_slider_pane_g

0x7683,	// (0x000445b2) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7683,	// (0x000445b2) vkb2_area_bottom_space_btn_pane_g4

0x96a5,	// (0x000465d4) lc0_navi_pane_ParamLimits

0x96a5,	// (0x000465d4) lc0_navi_pane

0x971b,	// (0x0004664a) lc0_stat_indi_pane_ParamLimits

0x971b,	// (0x0004664a) lc0_stat_indi_pane

0x9732,	// (0x00046661) ls0_title_pane_ParamLimits

0x9732,	// (0x00046661) ls0_title_pane

0x84e6,	// (0x00045415) bg_popup_sub_pane_cp14_ParamLimits

0xd92a,	// (0x0004a859) list_uniindi_pane_ParamLimits

0xd936,	// (0x0004a865) uniindi_top_pane_ParamLimits

0xd9d2,	// (0x0004a901) list_single_uniindi_pane_g1_ParamLimits

0xd9e5,	// (0x0004a914) list_single_uniindi_pane_t1_ParamLimits

0x76c7,	// (0x000445f6) lc0_stat_clock_pane_ParamLimits

0x76c7,	// (0x000445f6) lc0_stat_clock_pane

0xe51a,	// (0x0004b449) lc0_stat_indi_pane_g1_ParamLimits

0xe51a,	// (0x0004b449) lc0_stat_indi_pane_g1

0xe527,	// (0x0004b456) lc0_stat_indi_pane_g2_ParamLimits

0xe527,	// (0x0004b456) lc0_stat_indi_pane_g2

0x0001,

0xfdfd,	// (0x0004cd2c) lc0_stat_indi_pane_g_ParamLimits

0xfdfd,	// (0x0004cd2c) lc0_stat_indi_pane_g

0x76d4,	// (0x00044603) lc0_uni_indicator_pane_ParamLimits

0x76d4,	// (0x00044603) lc0_uni_indicator_pane

0xe534,	// (0x0004b463) ls0_title_pane_g1_ParamLimits

0xe534,	// (0x0004b463) ls0_title_pane_g1

0xe548,	// (0x0004b477) ls0_title_pane_t1_ParamLimits

0xe548,	// (0x0004b477) ls0_title_pane_t1

0x76e1,	// (0x00044610) lc0_uni_indicator_pane_g1_ParamLimits

0x76e1,	// (0x00044610) lc0_uni_indicator_pane_g1

0xe57e,	// (0x0004b4ad) lc0_stat_clock_pane_t1

0x26d2,	// (0x0003f601) main_ai5_pane

0xe58c,	// (0x0004b4bb) ai5_sk_pane_ParamLimits

0xe58c,	// (0x0004b4bb) ai5_sk_pane

0xe599,	// (0x0004b4c8) cell_ai5_widget_pane_ParamLimits

0xe599,	// (0x0004b4c8) cell_ai5_widget_pane

0xe662,	// (0x0004b591) aid_size_cell_widget_grid

0xe678,	// (0x0004b5a7) bg_ai5_widget_pane_ParamLimits

0xe678,	// (0x0004b5a7) bg_ai5_widget_pane

0xe6f4,	// (0x0004b623) cell_ai5_widget_pane_g2

0xe708,	// (0x0004b637) cell_ai5_widget_pane_g3

0xe722,	// (0x0004b651) cell_ai5_widget_pane_g4

0xe732,	// (0x0004b661) cell_ai5_widget_pane_g5

0xe742,	// (0x0004b671) cell_ai5_widget_pane_g6

0xe74e,	// (0x0004b67d) cell_ai5_widget_pane_g7

0xe7ba,	// (0x0004b6e9) cell_ai5_widget_pane_t1_ParamLimits

0xe7ba,	// (0x0004b6e9) cell_ai5_widget_pane_t1

0xe7d7,	// (0x0004b706) cell_ai5_widget_pane_t2_ParamLimits

0xe7d7,	// (0x0004b706) cell_ai5_widget_pane_t2

0xe7ef,	// (0x0004b71e) cell_ai5_widget_pane_t3_ParamLimits

0xe7ef,	// (0x0004b71e) cell_ai5_widget_pane_t3

0xe807,	// (0x0004b736) cell_ai5_widget_pane_t4_ParamLimits

0xe807,	// (0x0004b736) cell_ai5_widget_pane_t4

0xe82d,	// (0x0004b75c) cell_ai5_widget_pane_t5_ParamLimits

0xe82d,	// (0x0004b75c) cell_ai5_widget_pane_t5

0xe84c,	// (0x0004b77b) cell_ai5_widget_pane_t6_ParamLimits

0xe84c,	// (0x0004b77b) cell_ai5_widget_pane_t6

0xe85e,	// (0x0004b78d) cell_ai5_widget_pane_t7_ParamLimits

0xe85e,	// (0x0004b78d) cell_ai5_widget_pane_t7

0xe87d,	// (0x0004b7ac) cell_ai5_widget_pane_t8_ParamLimits

0xe87d,	// (0x0004b7ac) cell_ai5_widget_pane_t8

0x000b,

0xfe1d,	// (0x0004cd4c) cell_ai5_widget_pane_t_ParamLimits

0xfe1d,	// (0x0004cd4c) cell_ai5_widget_pane_t

0xe901,	// (0x0004b830) grid_ai5_widget_pane

0x84e6,	// (0x00045415) highlight_cell_ai5_widget_pane_ParamLimits

0x84e6,	// (0x00045415) highlight_cell_ai5_widget_pane

0xe918,	// (0x0004b847) ai5_sk_left_pane

0xe922,	// (0x0004b851) ai5_sk_middle_pane

0xe92c,	// (0x0004b85b) ai5_sk_right_pane

0xe936,	// (0x0004b865) bg_ai5_widget_pane_g1_ParamLimits

0xe936,	// (0x0004b865) bg_ai5_widget_pane_g1

0xe942,	// (0x0004b871) bg_ai5_widget_pane_g2_ParamLimits

0xe942,	// (0x0004b871) bg_ai5_widget_pane_g2

0xe94e,	// (0x0004b87d) bg_ai5_widget_pane_g3_ParamLimits

0xe94e,	// (0x0004b87d) bg_ai5_widget_pane_g3

0xe95a,	// (0x0004b889) bg_ai5_widget_pane_g4_ParamLimits

0xe95a,	// (0x0004b889) bg_ai5_widget_pane_g4

0xe966,	// (0x0004b895) bg_ai5_widget_pane_g5_ParamLimits

0xe966,	// (0x0004b895) bg_ai5_widget_pane_g5

0xe972,	// (0x0004b8a1) bg_ai5_widget_pane_g6_ParamLimits

0xe972,	// (0x0004b8a1) bg_ai5_widget_pane_g6

0xe97e,	// (0x0004b8ad) bg_ai5_widget_pane_g7_ParamLimits

0xe97e,	// (0x0004b8ad) bg_ai5_widget_pane_g7

0xe98a,	// (0x0004b8b9) bg_ai5_widget_pane_g8_ParamLimits

0xe98a,	// (0x0004b8b9) bg_ai5_widget_pane_g8

0xe996,	// (0x0004b8c5) bg_ai5_widget_pane_g9_ParamLimits

0xe996,	// (0x0004b8c5) bg_ai5_widget_pane_g9

0x0008,

0xfe36,	// (0x0004cd65) bg_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x0004cd65) bg_ai5_widget_pane_g

0xe9c8,	// (0x0004b8f7) cell_shortcut_ai5_widget_pane_ParamLimits

0xe9c8,	// (0x0004b8f7) cell_shortcut_ai5_widget_pane

0x91a7,	// (0x000460d6) bg_cell_shortcut_ai5_widget_pane

0xe9d9,	// (0x0004b908) cell_grid_ai5_widget_pane_g1

0x91a7,	// (0x000460d6) highlight_cell_shortcut_ai5_widget_pane

0x9a05,	// (0x00046934) ai5_sk_left_pane_g1

0xe9e2,	// (0x0004b911) ai5_sk_left_pane_g2

0xe9ea,	// (0x0004b919) ai5_sk_left_pane_g3

0xe9f2,	// (0x0004b921) ai5_sk_left_pane_g4

0x0003,

0xfe49,	// (0x0004cd78) ai5_sk_left_pane_g

0xe9fa,	// (0x0004b929) ai5_sk_left_pane_t1

0x99fd,	// (0x0004692c) ai5_sk_right_pane_g1

0xea08,	// (0x0004b937) ai5_sk_right_pane_g2

0xea10,	// (0x0004b93f) ai5_sk_right_pane_g3

0xea18,	// (0x0004b947) ai5_sk_right_pane_g4

0x0003,

0xfe52,	// (0x0004cd81) ai5_sk_right_pane_g

0xea20,	// (0x0004b94f) ai5_sk_right_pane_t1

0x99fd,	// (0x0004692c) ai5_sk_middle_pane_g1

0x9a05,	// (0x00046934) ai5_sk_middle_pane_g2

0x9a1d,	// (0x0004694c) ai5_sk_middle_pane_g3

0xea10,	// (0x0004b93f) ai5_sk_middle_pane_g4

0xe9ea,	// (0x0004b919) ai5_sk_middle_pane_g5

0xea2e,	// (0x0004b95d) ai5_sk_middle_pane_g6

0xea36,	// (0x0004b965) ai5_sk_middle_pane_g7

0x0006,

0xfe5b,	// (0x0004cd8a) ai5_sk_middle_pane_g

0x952b,	// (0x0004645a) aid_touch_area_size_lc0_ParamLimits

0x952b,	// (0x0004645a) aid_touch_area_size_lc0

0x6c85,	// (0x00043bb4) cell_hwr_candidate_pane_t1_ParamLimits

0x9547,	// (0x00046476) aid_touch_navi_pane

0x9820,	// (0x0004674f) status_dt_navi_pane_ParamLimits

0x9820,	// (0x0004674f) status_dt_navi_pane

0x982d,	// (0x0004675c) status_dt_sta_pane_ParamLimits

0x982d,	// (0x0004675c) status_dt_sta_pane

0xea3e,	// (0x0004b96d) dt_sta_controll_pane

0xea4b,	// (0x0004b97a) dt_sta_indi_pane

0xea5c,	// (0x0004b98b) dt_sta_title_pane

0x7ed6,	// (0x00044e05) bg_dt_sta_indi_pane_ParamLimits

0x7ed6,	// (0x00044e05) bg_dt_sta_indi_pane

0xea6f,	// (0x0004b99e) dt_sta_battery_pane

0xea77,	// (0x0004b9a6) dt_sta_indi_pane_g1

0xea80,	// (0x0004b9af) dt_sta_indi_pane_g2

0xea89,	// (0x0004b9b8) dt_sta_indi_pane_g3

0x0002,

0xfe6a,	// (0x0004cd99) dt_sta_indi_pane_g

0xea92,	// (0x0004b9c1) dt_sta_signal_pane

0x84e6,	// (0x00045415) bg_dt_sta_title_pane_ParamLimits

0x84e6,	// (0x00045415) bg_dt_sta_title_pane

0xea9b,	// (0x0004b9ca) dt_sta_title_pane_g1

0xeaa3,	// (0x0004b9d2) dt_sta_title_pane_t1_ParamLimits

0xeaa3,	// (0x0004b9d2) dt_sta_title_pane_t1

0x26d2,	// (0x0003f601) bg_dt_sta_control_pane

0xeab8,	// (0x0004b9e7) dt_sta_controll_pane_g1

0xeac1,	// (0x0004b9f0) bg_dt_sta_title_pane_g1

0xeaca,	// (0x0004b9f9) bg_dt_sta_title_pane_g2

0xead3,	// (0x0004ba02) bg_dt_sta_title_pane_g3

0x0002,

0xfe71,	// (0x0004cda0) bg_dt_sta_title_pane_g

0xc026,	// (0x00048f55) bg_dt_sta_indi_pane_g1

0xeadc,	// (0x0004ba0b) dt_sta_signal_pane_g1

0xeae4,	// (0x0004ba13) dt_sta_signal_pane_g2

0x0001,

0xfe78,	// (0x0004cda7) dt_sta_signal_pane_g

0xeaec,	// (0x0004ba1b) dt_sta_battery_pane_g1

0xeaf5,	// (0x0004ba24) dt_sta_battery_pane_t1

0xc026,	// (0x00048f55) bg_dt_sta_control_pane_g1

0x8c9a,	// (0x00045bc9) fep_china_uni_eep_pane

0x8ca2,	// (0x00045bd1) fep_china_uni_entry_pane_ParamLimits

0x8cb2,	// (0x00045be1) popup_fep_china_uni_window_g1_ParamLimits

0x8cc2,	// (0x00045bf1) popup_fep_china_uni_window_g2_ParamLimits

0x8cc2,	// (0x00045bf1) popup_fep_china_uni_window_g2

0x0001,

0xf6fd,	// (0x0004c62c) popup_fep_china_uni_window_g_ParamLimits

0xf6fd,	// (0x0004c62c) popup_fep_china_uni_window_g

0xeb04,	// (0x0004ba33) fep_china_uni_eep_pane_g1

0xeb0c,	// (0x0004ba3b) fep_china_uni_eep_pane_t1

0xe4fb,	// (0x0004b42a) aid_touch_area_size_smil_player

0x969d,	// (0x000465cc) lc0_clock_pane

0x9884,	// (0x000467b3) status_pane_g5_ParamLimits

0x9884,	// (0x000467b3) status_pane_g5

0x609c,	// (0x00042fcb) popup_keymap_window

0x9842,	// (0x00046771) status_icon_pane

0xe708,	// (0x0004b637) cell_ai5_widget_pane_g3_ParamLimits

0xe722,	// (0x0004b651) cell_ai5_widget_pane_g4_ParamLimits

0xe732,	// (0x0004b661) cell_ai5_widget_pane_g5_ParamLimits

0xe75a,	// (0x0004b689) cell_ai5_widget_pane_g8_ParamLimits

0xe75a,	// (0x0004b689) cell_ai5_widget_pane_g8

0xe76e,	// (0x0004b69d) cell_ai5_widget_pane_g9_ParamLimits

0xe76e,	// (0x0004b69d) cell_ai5_widget_pane_g9

0xe782,	// (0x0004b6b1) cell_ai5_widget_pane_g10_ParamLimits

0xe782,	// (0x0004b6b1) cell_ai5_widget_pane_g10

0xeb1b,	// (0x0004ba4a) status_icon_pane_g1

0x26d2,	// (0x0003f601) bg_popup_sub_pane_cp13

0xeb23,	// (0x0004ba52) popup_keymap_window_t1

0x947c,	// (0x000463ab) control_pane_g6_ParamLimits

0x947c,	// (0x000463ab) control_pane_g6

0x9489,	// (0x000463b8) control_pane_g7_ParamLimits

0x9489,	// (0x000463b8) control_pane_g7

0x9496,	// (0x000463c5) control_pane_g8_ParamLimits

0x9496,	// (0x000463c5) control_pane_g8

0xea3e,	// (0x0004b96d) dt_sta_controll_pane_ParamLimits

0xea4b,	// (0x0004b97a) dt_sta_indi_pane_ParamLimits

0xea5c,	// (0x0004b98b) dt_sta_title_pane_ParamLimits

0x8412,	// (0x00045341) aid_size_touch_scroll_bar_cale

0x564c,	// (0x0004257b) popup_discreet_window_ParamLimits

0x564c,	// (0x0004257b) popup_discreet_window

0x56d4,	// (0x00042603) popup_sk_window

0xa090,	// (0x00046fbf) bg_popup_sub_pane_cp28_ParamLimits

0xa090,	// (0x00046fbf) bg_popup_sub_pane_cp28

0xeb31,	// (0x0004ba60) popup_discreet_window_g1_ParamLimits

0xeb31,	// (0x0004ba60) popup_discreet_window_g1

0xeb51,	// (0x0004ba80) popup_discreet_window_t1_ParamLimits

0xeb51,	// (0x0004ba80) popup_discreet_window_t1

0xeb6f,	// (0x0004ba9e) popup_discreet_window_t2_ParamLimits

0xeb6f,	// (0x0004ba9e) popup_discreet_window_t2

0x0002,

0xfe7d,	// (0x0004cdac) popup_discreet_window_t_ParamLimits

0xfe7d,	// (0x0004cdac) popup_discreet_window_t

0x76f5,	// (0x00044624) popup_sk_window_g1

0x76ff,	// (0x0004462e) popup_sk_window_g2

0x0001,

0xfe84,	// (0x0004cdb3) popup_sk_window_g

0x7707,	// (0x00044636) popup_sk_window_t1

0x7715,	// (0x00044644) popup_sk_window_t1_copy1

0xe6f4,	// (0x0004b623) cell_ai5_widget_pane_g2_ParamLimits

0xe88f,	// (0x0004b7be) cell_ai5_widget_pane_t9_ParamLimits

0xe88f,	// (0x0004b7be) cell_ai5_widget_pane_t9

0x26d2,	// (0x0003f601) main_fep_fshwr2_pane

0x7723,	// (0x00044652) aid_fshwr2_btn_pane

0x7733,	// (0x00044662) aid_fshwr2_syb_pane

0x7747,	// (0x00044676) aid_fshwr2_txt_pane

0x7757,	// (0x00044686) fshwr2_func_candi_pane

0x777b,	// (0x000446aa) fshwr2_hwr_syb_pane

0x7795,	// (0x000446c4) fshwr2_icf_pane

0x26d2,	// (0x0003f601) fshwr2_icf_bg_pane

0x77c3,	// (0x000446f2) fshwr2_icf_pane_t1_ParamLimits

0x77c3,	// (0x000446f2) fshwr2_icf_pane_t1

0x8b6f,	// (0x00045a9e) fshwr2_func_candi_pane_g1

0xebc1,	// (0x0004baf0) fshwr2_func_candi_row_pane_ParamLimits

0xebc1,	// (0x0004baf0) fshwr2_func_candi_row_pane

0x77db,	// (0x0004470a) cell_fshwr2_syb_pane_ParamLimits

0x77db,	// (0x0004470a) cell_fshwr2_syb_pane

0xe4cb,	// (0x0004b3fa) fshwr2_hwr_syb_pane_g1_ParamLimits

0xe4cb,	// (0x0004b3fa) fshwr2_hwr_syb_pane_g1

0x26d2,	// (0x0003f601) bg_popup_call_pane_cp01

0x77fe,	// (0x0004472d) fshwr2_func_candi_cell_pane_ParamLimits

0x77fe,	// (0x0004472d) fshwr2_func_candi_cell_pane

0xa704,	// (0x00047633) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa704,	// (0x00047633) fshwr2_func_candi_cell_bg_pane

0x7849,	// (0x00044778) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x7849,	// (0x00044778) fshwr2_func_candi_cell_pane_g1

0x7874,	// (0x000447a3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x7874,	// (0x000447a3) fshwr2_func_candi_cell_pane_t1

0x26d2,	// (0x0003f601) bg_button_pane_cp08

0x94cb,	// (0x000463fa) cell_fshwr2_syb_bg_pane

0x7887,	// (0x000447b6) cell_fshwr2_syb_bg_pane_g1

0x789b,	// (0x000447ca) cell_fshwr2_syb_bg_pane_t1

0x84e6,	// (0x00045415) main_tmo_pane

0xab9f,	// (0x00047ace) uni_indicator_pane_g1_ParamLimits

0xabb5,	// (0x00047ae4) uni_indicator_pane_g2_ParamLimits

0xabcb,	// (0x00047afa) uni_indicator_pane_g3_ParamLimits

0xabde,	// (0x00047b0d) uni_indicator_pane_g4_ParamLimits

0xabde,	// (0x00047b0d) uni_indicator_pane_g4

0xabf2,	// (0x00047b21) uni_indicator_pane_g5_ParamLimits

0xabf2,	// (0x00047b21) uni_indicator_pane_g5

0xabf2,	// (0x00047b21) uni_indicator_pane_g6_ParamLimits

0xabf2,	// (0x00047b21) uni_indicator_pane_g6

0xf8fc,	// (0x0004c82b) uni_indicator_pane_g_ParamLimits

0xd50f,	// (0x0004a43e) popup_tmo_note_window_ParamLimits

0xd50f,	// (0x0004a43e) popup_tmo_note_window

0x84e6,	// (0x00045415) fshwr2_bg_pane

0x7865,	// (0x00044794) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x7865,	// (0x00044794) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe89,	// (0x0004cdb8) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe89,	// (0x0004cdb8) fshwr2_func_candi_cell_pane_g

0xc026,	// (0x00048f55) bg_popup_window_pane_cp01

0x78b1,	// (0x000447e0) bg_popup_window_pane_g1_cp01

0xebe8,	// (0x0004bb17) bg_popup_window_pane_cp22_ParamLimits

0xebe8,	// (0x0004bb17) bg_popup_window_pane_cp22

0xebf6,	// (0x0004bb25) listscroll_tmo_link_pane_ParamLimits

0xebf6,	// (0x0004bb25) listscroll_tmo_link_pane

0xec36,	// (0x0004bb65) popup_tmo_note_window_g1_ParamLimits

0xec36,	// (0x0004bb65) popup_tmo_note_window_g1

0xec43,	// (0x0004bb72) tmo_note_info_pane_ParamLimits

0xec43,	// (0x0004bb72) tmo_note_info_pane

0xec5d,	// (0x0004bb8c) list_tmo_note_info_pane_g1_ParamLimits

0xec5d,	// (0x0004bb8c) list_tmo_note_info_pane_g1

0xec74,	// (0x0004bba3) list_tmo_note_info_pane_g2_ParamLimits

0xec74,	// (0x0004bba3) list_tmo_note_info_pane_g2

0x0001,

0xfe8e,	// (0x0004cdbd) list_tmo_note_info_pane_g_ParamLimits

0xfe8e,	// (0x0004cdbd) list_tmo_note_info_pane_g

0xec90,	// (0x0004bbbf) list_tmo_note_info_text_pane_ParamLimits

0xec90,	// (0x0004bbbf) list_tmo_note_info_text_pane

0xed11,	// (0x0004bc40) list_tmo_link_pane

0xed1e,	// (0x0004bc4d) scroll_pane_cp20

0xed2b,	// (0x0004bc5a) list_single_tmo_link_pane_ParamLimits

0xed2b,	// (0x0004bc5a) list_single_tmo_link_pane

0xed3b,	// (0x0004bc6a) list_single_tmo_link_pane_t1

0xed49,	// (0x0004bc78) list_tmo_note_info_text_pane_t1_ParamLimits

0xed49,	// (0x0004bc78) list_tmo_note_info_text_pane_t1

0x8596,	// (0x000454c5) aid_size_touch_scroll_bar_cp01_ParamLimits

0x8596,	// (0x000454c5) aid_size_touch_scroll_bar_cp01

0x4ae0,	// (0x00041a0f) aid_size_touch_slider_marker

0x56bc,	// (0x000425eb) popup_settings_window_ParamLimits

0x56bc,	// (0x000425eb) popup_settings_window

0x4c77,	// (0x00041ba6) popup_candi_list_indi_window

0x9547,	// (0x00046476) aid_touch_navi_pane_ParamLimits

0x6ee5,	// (0x00043e14) rs_clock_indi_pane

0x6eee,	// (0x00043e1d) sctrl_sk_bottom_pane_ParamLimits

0x6eff,	// (0x00043e2e) sctrl_sk_top_pane_ParamLimits

0x6fde,	// (0x00043f0d) popup_fep_tooltip_window

0xe662,	// (0x0004b591) aid_size_cell_widget_grid_ParamLimits

0xe6df,	// (0x0004b60e) cell_ai5_widget_pane_g1_ParamLimits

0xe6df,	// (0x0004b60e) cell_ai5_widget_pane_g1

0xe742,	// (0x0004b671) cell_ai5_widget_pane_g6_ParamLimits

0xe74e,	// (0x0004b67d) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe02,	// (0x0004cd31) cell_ai5_widget_pane_g_ParamLimits

0xfe02,	// (0x0004cd31) cell_ai5_widget_pane_g

0xe8be,	// (0x0004b7ed) cell_ai5_widget_pane_t10_ParamLimits

0xe8be,	// (0x0004b7ed) cell_ai5_widget_pane_t10

0xe901,	// (0x0004b830) grid_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0004b8d1) cell_contacts_ai5_widget_pane_ParamLimits

0xe9a2,	// (0x0004b8d1) cell_contacts_ai5_widget_pane

0xeb84,	// (0x0004bab3) popup_discreet_window_t3_ParamLimits

0xeb84,	// (0x0004bab3) popup_discreet_window_t3

0x77ad,	// (0x000446dc) popup_fshwr2_char_preview_window_ParamLimits

0x77ad,	// (0x000446dc) popup_fshwr2_char_preview_window

0xecae,	// (0x0004bbdd) tmo_note_info_pane_t1

0xecc3,	// (0x0004bbf2) tmo_note_info_pane_t2

0xecd8,	// (0x0004bc07) tmo_note_info_pane_t3

0xeced,	// (0x0004bc1c) tmo_note_info_pane_t4

0xecff,	// (0x0004bc2e) tmo_note_info_pane_t5

0x0004,

0xfe93,	// (0x0004cdc2) tmo_note_info_pane_t

0xed11,	// (0x0004bc40) list_tmo_link_pane_ParamLimits

0xed1e,	// (0x0004bc4d) scroll_pane_cp20_ParamLimits

0x26d2,	// (0x0003f601) bg_popup_fep_char_preview_window_cp01

0xed62,	// (0x0004bc91) popup_fshwr2_char_preview_window_t1

0xed70,	// (0x0004bc9f) popup_candi_list_indi_window_g1

0xed79,	// (0x0004bca8) bg_cell_contacts_ai5_widget_pane

0xed85,	// (0x0004bcb4) cell_contacts_ai5_widget_pane_g1

0xc706,	// (0x00049635) cell_contacts_ai5_widget_pane_g2

0xed9a,	// (0x0004bcc9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe9e,	// (0x0004cdcd) cell_contacts_ai5_widget_pane_g

0xeda6,	// (0x0004bcd5) cell_contacts_ai5_widget_pane_t1

0x84e6,	// (0x00045415) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee1d,	// (0x0004bd4c) settings_container_pane

0x91a7,	// (0x000460d6) listscroll_set_pane_copy1

0xb710,	// (0x0004863f) scroll_pane_cp121_copy1

0x9e21,	// (0x00046d50) set_content_pane_copy1

0xee29,	// (0x0004bd58) aid_height_set_list_copy1_ParamLimits

0xee29,	// (0x0004bd58) aid_height_set_list_copy1

0xadea,	// (0x00047d19) aid_size_parent_copy1_ParamLimits

0xadea,	// (0x00047d19) aid_size_parent_copy1

0xee35,	// (0x0004bd64) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee35,	// (0x0004bd64) button_value_adjust_pane_cp6_copy1

0x94cb,	// (0x000463fa) list_highlight_pane_cp2_copy1_ParamLimits

0x94cb,	// (0x000463fa) list_highlight_pane_cp2_copy1

0xee49,	// (0x0004bd78) list_set_pane_copy1_ParamLimits

0xee49,	// (0x0004bd78) list_set_pane_copy1

0xedb8,	// (0x0004bce7) main_pane_set_t1_copy1_ParamLimits

0xedb8,	// (0x0004bce7) main_pane_set_t1_copy1

0xedf2,	// (0x0004bd21) main_pane_set_t2_copy1_ParamLimits

0xedf2,	// (0x0004bd21) main_pane_set_t2_copy1

0xeef6,	// (0x0004be25) main_pane_set_t3_copy1

0xef04,	// (0x0004be33) main_pane_set_t4_copy1

0xee11,	// (0x0004bd40) set_content_pane_g1_copy1_ParamLimits

0xee11,	// (0x0004bd40) set_content_pane_g1_copy1

0xef12,	// (0x0004be41) setting_code_pane_copy1

0xef1a,	// (0x0004be49) setting_slider_graphic_pane_copy1

0xef1a,	// (0x0004be49) setting_slider_pane_copy1

0xef22,	// (0x0004be51) setting_text_pane_copy1

0xef22,	// (0x0004be51) setting_volume_pane_copy1

0xef12,	// (0x0004be41) settings_code_pane_cp2_copy1

0xef2a,	// (0x0004be59) settings_code_pane_cp_copy1_ParamLimits

0xef2a,	// (0x0004be59) settings_code_pane_cp_copy1

0x78ba,	// (0x000447e9) volume_set_pane_copy1

0xef3e,	// (0x0004be6d) volume_set_pane_g10_copy1

0xef46,	// (0x0004be75) volume_set_pane_g1_copy1

0xef4e,	// (0x0004be7d) volume_set_pane_g2_copy1

0xef56,	// (0x0004be85) volume_set_pane_g3_copy1

0xef5e,	// (0x0004be8d) volume_set_pane_g4_copy1

0xef66,	// (0x0004be95) volume_set_pane_g5_copy1

0xef6e,	// (0x0004be9d) volume_set_pane_g6_copy1

0xef76,	// (0x0004bea5) volume_set_pane_g7_copy1

0xef7e,	// (0x0004bead) volume_set_pane_g8_copy1

0xef86,	// (0x0004beb5) volume_set_pane_g9_copy1

0x7c4d,	// (0x00044b7c) bg_set_opt_pane_cp_copy1_ParamLimits

0x7c4d,	// (0x00044b7c) bg_set_opt_pane_cp_copy1

0x78c2,	// (0x000447f1) setting_slider_pane_t1_copy1_ParamLimits

0x78c2,	// (0x000447f1) setting_slider_pane_t1_copy1

0x78e1,	// (0x00044810) setting_slider_pane_t2_copy1_ParamLimits

0x78e1,	// (0x00044810) setting_slider_pane_t2_copy1

0x78fb,	// (0x0004482a) setting_slider_pane_t3_copy1_ParamLimits

0x78fb,	// (0x0004482a) setting_slider_pane_t3_copy1

0x7913,	// (0x00044842) slider_set_pane_copy1_ParamLimits

0x7913,	// (0x00044842) slider_set_pane_copy1

0x8532,	// (0x00045461) set_opt_bg_pane_g1_copy2

0x853a,	// (0x00045469) set_opt_bg_pane_g2_copy2

0xef8e,	// (0x0004bebd) set_opt_bg_pane_g3_copy2

0x854a,	// (0x00045479) set_opt_bg_pane_g4_copy2

0x8552,	// (0x00045481) set_opt_bg_pane_g5_copy2

0x855a,	// (0x00045489) set_opt_bg_pane_g6_copy2

0xef98,	// (0x0004bec7) set_opt_bg_pane_g7_copy2

0xefa0,	// (0x0004becf) set_opt_bg_pane_g8_copy2

0xefaa,	// (0x0004bed9) set_opt_bg_pane_g9_copy2

0x7929,	// (0x00044858) aid_size_touch_slider_mark_copy1_ParamLimits

0x7929,	// (0x00044858) aid_size_touch_slider_mark_copy1

0xefb4,	// (0x0004bee3) slider_set_pane_g1_copy1

0x793d,	// (0x0004486c) slider_set_pane_g2_copy1

0x67dc,	// (0x0004370b) slider_set_pane_g3_copy1_ParamLimits

0x67dc,	// (0x0004370b) slider_set_pane_g3_copy1

0x67f0,	// (0x0004371f) slider_set_pane_g4_copy1_ParamLimits

0x67f0,	// (0x0004371f) slider_set_pane_g4_copy1

0x6808,	// (0x00043737) slider_set_pane_g5_copy1_ParamLimits

0x6808,	// (0x00043737) slider_set_pane_g5_copy1

0x67dc,	// (0x0004370b) slider_set_pane_g6_copy1_ParamLimits

0x67dc,	// (0x0004370b) slider_set_pane_g6_copy1

0x7945,	// (0x00044874) slider_set_pane_g7_copy1_ParamLimits

0x7945,	// (0x00044874) slider_set_pane_g7_copy1

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp2_copy1

0xefbd,	// (0x0004beec) setting_slider_graphic_pane_g1_copy1

0xefc6,	// (0x0004bef5) setting_slider_graphic_pane_t1_copy1

0xefd6,	// (0x0004bf05) setting_slider_graphic_pane_t2_copy1

0xefe6,	// (0x0004bf15) slider_set_pane_cp_copy1

0xeff6,	// (0x0004bf25) input_focus_pane_cp1_copy1

0xefff,	// (0x0004bf2e) list_set_text_pane_copy1

0xf007,	// (0x0004bf36) setting_text_pane_g1_copy1

0x53c3,	// (0x000422f2) set_text_pane_t1_copy1

0xeff6,	// (0x0004bf25) input_focus_pane_cp2_copy1

0xf007,	// (0x0004bf36) setting_code_pane_g1_copy1

0xf010,	// (0x0004bf3f) setting_code_pane_t1_copy1

0xb538,	// (0x00048467) list_set_graphic_pane_copy1

0x7b6d,	// (0x00044a9c) bg_set_opt_pane_cp4_copy1

0x8ea5,	// (0x00045dd4) list_set_graphic_pane_g1_copy1_ParamLimits

0x8ea5,	// (0x00045dd4) list_set_graphic_pane_g1_copy1

0xf01e,	// (0x0004bf4d) list_set_graphic_pane_g2_copy1

0x8ebd,	// (0x00045dec) list_set_graphic_pane_t1_copy1_ParamLimits

0x8ebd,	// (0x00045dec) list_set_graphic_pane_t1_copy1

0xc026,	// (0x00048f55) rs_clock_indi_pane_g1

0xf026,	// (0x0004bf55) rs_clock_indi_pane_t1

0xf034,	// (0x0004bf63) rs_indi_pane

0xf03c,	// (0x0004bf6b) rs_indi_pane_g1

0xf045,	// (0x0004bf74) rs_indi_pane_g2

0xf04e,	// (0x0004bf7d) rs_indi_pane_g3

0x0002,

0xfea5,	// (0x0004cdd4) rs_indi_pane_g

0x91a7,	// (0x000460d6) bg_popup_preview_window_pane_cp03

0xf057,	// (0x0004bf86) popup_fep_tooltip_window_t1

0xccae,	// (0x00049bdd) popup_note2_window_g2_ParamLimits

0xccae,	// (0x00049bdd) popup_note2_window_g2

0x0001,

0xfc32,	// (0x0004cb61) popup_note2_window_g_ParamLimits

0xfc32,	// (0x0004cb61) popup_note2_window_g

0xd1a9,	// (0x0004a0d8) bg_popup_sub_pane_cp11_ParamLimits

0xd1b6,	// (0x0004a0e5) cell_ai3_links_pane_g1_ParamLimits

0xd1cd,	// (0x0004a0fc) cell_ai3_links_pane_t1

0x53c3,	// (0x000422f2) set_text_pane_t1_copy1_ParamLimits

0x90bb,	// (0x00045fea) cell_graphic_popup_pane_cp2_ParamLimits

0x90bb,	// (0x00045fea) cell_graphic_popup_pane_cp2

0xf065,	// (0x0004bf94) cell_graphic_popup_pane_g1_cp2

0x8225,	// (0x00045154) cell_graphic_popup_pane_g2_cp2

0xf06d,	// (0x0004bf9c) cell_graphic_popup_pane_g3_cp2

0xf075,	// (0x0004bfa4) cell_graphic_popup_pane_t2_cp2

0x8236,	// (0x00045165) grid_highlight_pane_cp3_cp2

0x888a,	// (0x000457b9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x84e6,	// (0x00045415) main_tmo_pane_ParamLimits

0xd503,	// (0x0004a432) popup_tmo_big_image_note_window

0xe6ce,	// (0x0004b5fd) cell_ai5_widget_list_pane

0xe6d6,	// (0x0004b605) cell_ai5_widget_lrg_icon_pane

0xecae,	// (0x0004bbdd) tmo_note_info_pane_t1_ParamLimits

0xecc3,	// (0x0004bbf2) tmo_note_info_pane_t2_ParamLimits

0xecd8,	// (0x0004bc07) tmo_note_info_pane_t3_ParamLimits

0xeced,	// (0x0004bc1c) tmo_note_info_pane_t4_ParamLimits

0xecff,	// (0x0004bc2e) tmo_note_info_pane_t5_ParamLimits

0xfe93,	// (0x0004cdc2) tmo_note_info_pane_t_ParamLimits

0xee1d,	// (0x0004bd4c) settings_container_pane_ParamLimits

0xefee,	// (0x0004bf1d) indicator_popup_pane_cp5

0xefee,	// (0x0004bf1d) indicator_popup_pane_cp6

0xb538,	// (0x00048467) list_set_graphic_pane_copy1_ParamLimits

0x26d2,	// (0x0003f601) bg_popup_window_pane_cp23

0xf083,	// (0x0004bfb2) popup_tmo_big_image_note_window_g1

0xf08d,	// (0x0004bfbc) popup_tmo_big_image_note_window_t1

0xf09d,	// (0x0004bfcc) popup_tmo_big_image_note_window_t2

0xf0ad,	// (0x0004bfdc) popup_tmo_big_image_note_window_t3

0x0002,

0xfeac,	// (0x0004cddb) popup_tmo_big_image_note_window_t

0xc026,	// (0x00048f55) cell_ai5_widget_lrg_icon_pane_g1

0xf0bd,	// (0x0004bfec) cell_ai5_widget_lrg_icon_pane_t1

0xf0cb,	// (0x0004bffa) cell_ai5_widget_list_row_pane_ParamLimits

0xf0cb,	// (0x0004bffa) cell_ai5_widget_list_row_pane

0xf0e2,	// (0x0004c011) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf0e2,	// (0x0004c011) cell_ai5_widget_list_row_pane_g1

0xf0ef,	// (0x0004c01e) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf0ef,	// (0x0004c01e) cell_ai5_widget_list_row_pane_t1

0xf120,	// (0x0004c04f) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf120,	// (0x0004c04f) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb3,	// (0x0004cde2) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb3,	// (0x0004cde2) cell_ai5_widget_list_row_pane_t

0x26d2,	// (0x0003f601) main_fep_vtchi_ss_pane

0xf170,	// (0x0004c09f) popup_fep_char_pre_window

0xf178,	// (0x0004c0a7) popup_fep_ituss_window

0xf1a4,	// (0x0004c0d3) popup_fep_vkbss_window

0x94cb,	// (0x000463fa) grid_vkbss_keypad_pane_ParamLimits

0x94cb,	// (0x000463fa) grid_vkbss_keypad_pane

0xf1e4,	// (0x0004c113) ituss_keypad_pane

0x7965,	// (0x00044894) aid_vkbss_key_offset_ParamLimits

0x7965,	// (0x00044894) aid_vkbss_key_offset

0x7971,	// (0x000448a0) cell_vkbss_key_pane_ParamLimits

0x7971,	// (0x000448a0) cell_vkbss_key_pane

0xf1f0,	// (0x0004c11f) bg_cell_vkbss_key_g1_ParamLimits

0xf1f0,	// (0x0004c11f) bg_cell_vkbss_key_g1

0xf1fc,	// (0x0004c12b) cell_vkbss_key_3p_pane_ParamLimits

0xf1fc,	// (0x0004c12b) cell_vkbss_key_3p_pane

0xf232,	// (0x0004c161) cell_vkbss_key_g1_ParamLimits

0xf232,	// (0x0004c161) cell_vkbss_key_g1

0xf268,	// (0x0004c197) cell_vkbss_key_t1_ParamLimits

0xf268,	// (0x0004c197) cell_vkbss_key_t1

0x79c9,	// (0x000448f8) cell_ituss_key_pane_ParamLimits

0x79c9,	// (0x000448f8) cell_ituss_key_pane

0xf2c4,	// (0x0004c1f3) bg_cell_ituss_key_g1_ParamLimits

0xf2c4,	// (0x0004c1f3) bg_cell_ituss_key_g1

0xf2d0,	// (0x0004c1ff) cell_ituss_key_pane_g1_ParamLimits

0xf2d0,	// (0x0004c1ff) cell_ituss_key_pane_g1

0x79da,	// (0x00044909) cell_ituss_key_pane_g2_ParamLimits

0x79da,	// (0x00044909) cell_ituss_key_pane_g2

0x0005,

0xfeba,	// (0x0004cde9) cell_ituss_key_pane_g_ParamLimits

0xfeba,	// (0x0004cde9) cell_ituss_key_pane_g

0x7a5e,	// (0x0004498d) cell_ituss_key_t1_ParamLimits

0x7a5e,	// (0x0004498d) cell_ituss_key_t1

0x7a98,	// (0x000449c7) cell_ituss_key_t2_ParamLimits

0x7a98,	// (0x000449c7) cell_ituss_key_t2

0x7aca,	// (0x000449f9) cell_ituss_key_t3_ParamLimits

0x7aca,	// (0x000449f9) cell_ituss_key_t3

0x7afb,	// (0x00044a2a) cell_ituss_key_t4_ParamLimits

0x7afb,	// (0x00044a2a) cell_ituss_key_t4

0x0004,

0xfec7,	// (0x0004cdf6) cell_ituss_key_t_ParamLimits

0xfec7,	// (0x0004cdf6) cell_ituss_key_t

0xf2f6,	// (0x0004c225) cell_vkbss_key_3p_pane_g1

0xf2fe,	// (0x0004c22d) cell_vkbss_key_3p_pane_g2

0xf306,	// (0x0004c235) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed2,	// (0x0004ce01) cell_vkbss_key_3p_pane_g

0x91a7,	// (0x000460d6) bg_popup_fep_char_preview_window_cp02

0xf30e,	// (0x0004c23d) popup_fep_char_pre_window_t1

0xe64f,	// (0x0004b57e) main_ai5_sk_pane

0xed79,	// (0x0004bca8) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xed85,	// (0x0004bcb4) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xc706,	// (0x00049635) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xed9a,	// (0x0004bcc9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe9e,	// (0x0004cdcd) cell_contacts_ai5_widget_pane_g_ParamLimits

0xeda6,	// (0x0004bcd5) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x84e6,	// (0x00045415) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf31c,	// (0x0004c24b) main_ai5_sk_pane_g1

0x9ebd,	// (0x00046dec) popup_query_code_window_g1

0xf18e,	// (0x0004c0bd) popup_fep_vkb_icf_pane

0xf1bb,	// (0x0004c0ea) popup_fep_vtchi_icf_pane

0xf325,	// (0x0004c254) bg_icf_pane

0xf325,	// (0x0004c254) list_vkb_icf_pane

0xf331,	// (0x0004c260) bg_icf_pane_cp01

0xf344,	// (0x0004c273) vtchi_icf_list_pane

0xf3a4,	// (0x0004c2d3) list_vkb_icf_pane_t1_ParamLimits

0xf3a4,	// (0x0004c2d3) list_vkb_icf_pane_t1

0xf3c5,	// (0x0004c2f4) vtchi_icf_list_pane_t1_ParamLimits

0xf3c5,	// (0x0004c2f4) vtchi_icf_list_pane_t1

0xf178,	// (0x0004c0a7) popup_fep_ituss_window_ParamLimits

0xf1bb,	// (0x0004c0ea) popup_fep_vtchi_icf_pane_ParamLimits

0xf1e4,	// (0x0004c113) ituss_keypad_pane_ParamLimits

0x795b,	// (0x0004488a) ituss_sks_pane

0xf325,	// (0x0004c254) bg_icf_pane_ParamLimits

0xf148,	// (0x0004c077) icf_edit_indi_pane_ParamLimits

0xf148,	// (0x0004c077) icf_edit_indi_pane

0xf325,	// (0x0004c254) list_vkb_icf_pane_ParamLimits

0xf331,	// (0x0004c260) bg_icf_pane_cp01_ParamLimits

0xf163,	// (0x0004c092) icf_edit_indi_pane_cp01_ParamLimits

0xf163,	// (0x0004c092) icf_edit_indi_pane_cp01

0xf344,	// (0x0004c273) vtchi_query_pane

0xe4cb,	// (0x0004b3fa) icf_edit_indi_pane_g1_ParamLimits

0xe4cb,	// (0x0004b3fa) icf_edit_indi_pane_g1

0xf43a,	// (0x0004c369) icf_edit_indi_pane_g2_ParamLimits

0xf43a,	// (0x0004c369) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0004ce2c) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0004ce2c) icf_edit_indi_pane_g

0xf44e,	// (0x0004c37d) icf_edit_indi_pane_t1

0xf3e3,	// (0x0004c312) bg_input_focus_pane_cp042

0x8409,	// (0x00045338) vtchi_button_pane

0xf3ec,	// (0x0004c31b) vtchi_query_pane_t1

0xf3fa,	// (0x0004c329) vtchi_query_pane_t2

0xf408,	// (0x0004c337) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0004ce1b) vtchi_query_pane_t

0x26d2,	// (0x0003f601) bg_button_pane_cp13

0xf416,	// (0x0004c345) vtchi_button_pane_g1

0x7b3e,	// (0x00044a6d) ituss_sks_pane_g1

0x7b49,	// (0x00044a78) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0004ce22) ituss_sks_pane_g

0xf41e,	// (0x0004c34d) ituss_sks_pane_t1

0xf42c,	// (0x0004c35b) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0004ce27) ituss_sks_pane_t

0xbaa8,	// (0x000489d7) indicator_nsta_pane_cp_g1

0xbab1,	// (0x000489e0) indicator_nsta_pane_cp_g2

0xbab9,	// (0x000489e8) indicator_nsta_pane_cp_g3

0xbac1,	// (0x000489f0) indicator_nsta_pane_cp_g4

0xbab1,	// (0x000489e0) indicator_nsta_pane_cp_g5

0xbab9,	// (0x000489e8) indicator_nsta_pane_cp_g6

0x0005,

0xfa7c,	// (0x0004c9ab) indicator_nsta_pane_cp_g

0xe206,	// (0x0004b135) cell_graphic2_pane_t2_ParamLimits

0xe206,	// (0x0004b135) cell_graphic2_pane_t2

0x0001,

0xfd89,	// (0x0004ccb8) cell_graphic2_pane_t_ParamLimits

0xfd89,	// (0x0004ccb8) cell_graphic2_pane_t

0xe232,	// (0x0004b161) cell_graphic2_control_pane_t1

0x8c49,	// (0x00045b78) signal_pane_g3_ParamLimits

0x8c49,	// (0x00045b78) signal_pane_g3

0x8c5b,	// (0x00045b8a) signal_pane_g4_ParamLimits

0x8c5b,	// (0x00045b8a) signal_pane_g4

0xf132,	// (0x0004c061) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf132,	// (0x0004c061) cell_ai5_widget_list_row_pane_t3

0xf2e4,	// (0x0004c213) cell_ituss_key_pane_t1_ParamLimits

0xf2e4,	// (0x0004c213) cell_ituss_key_pane_t1

0x9afa,	// (0x00046a29) form_field_data_wide_pane_vc_t2_ParamLimits

0x9afa,	// (0x00046a29) form_field_data_wide_pane_vc_t2

0x9b0e,	// (0x00046a3d) form_field_data_wide_pane_vc_t3_ParamLimits

0x9b0e,	// (0x00046a3d) form_field_data_wide_pane_vc_t3

0x0002,

0xf7e4,	// (0x0004c713) form_field_data_wide_pane_vc_t_ParamLimits

0xf7e4,	// (0x0004c713) form_field_data_wide_pane_vc_t

0xb752,	// (0x00048681) form_field_slider_wide_pane_vc_t3_ParamLimits

0xb752,	// (0x00048681) form_field_slider_wide_pane_vc_t3

0xb830,	// (0x0004875f) form_field_popup_wide_pane_vc_t2_ParamLimits

0xb830,	// (0x0004875f) form_field_popup_wide_pane_vc_t2

0xb847,	// (0x00048776) form_field_popup_wide_pane_vc_t3_ParamLimits

0xb847,	// (0x00048776) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa6b,	// (0x0004c99a) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa6b,	// (0x0004c99a) form_field_popup_wide_pane_vc_t

0x7723,	// (0x00044652) aid_fshwr2_btn_pane_ParamLimits

0x7733,	// (0x00044662) aid_fshwr2_syb_pane_ParamLimits

0x7747,	// (0x00044676) aid_fshwr2_txt_pane_ParamLimits

0x84e6,	// (0x00045415) fshwr2_bg_pane_ParamLimits

0x7757,	// (0x00044686) fshwr2_func_candi_pane_ParamLimits

0x777b,	// (0x000446aa) fshwr2_hwr_syb_pane_ParamLimits

0x7795,	// (0x000446c4) fshwr2_icf_pane_ParamLimits

0x69e8,	// (0x00043917) list_double_graphic_pane_vc_g4_ParamLimits

0x69e8,	// (0x00043917) list_double_graphic_pane_vc_g4

0x79fa,	// (0x00044929) cell_ituss_key_pane_g3_ParamLimits

0x79fa,	// (0x00044929) cell_ituss_key_pane_g3

0x7b2c,	// (0x00044a5b) cell_ituss_key_t5_ParamLimits

0x7b2c,	// (0x00044a5b) cell_ituss_key_t5

0xf1a4,	// (0x0004c0d3) popup_fep_vkbss_window_ParamLimits

0xe659,	// (0x0004b588) aid_cell_ai5_quarter

0xf44e,	// (0x0004c37d) icf_edit_indi_pane_t1_ParamLimits

0x7f7e,	// (0x00044ead) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x7f7e,	// (0x00044ead) aid_tch_indicator_popup_pane_cp2

0x7f91,	// (0x00044ec0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x7f91,	// (0x00044ec0) aid_tch_query_popup_data_pane_cp2

0x9e65,	// (0x00046d94) aid_tch_query_popup_pane_ParamLimits

0x9e65,	// (0x00046d94) aid_tch_query_popup_pane

0x9e65,	// (0x00046d94) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x9e65,	// (0x00046d94) aid_tch_query_popup_data_pane_cp1

0x94cb,	// (0x000463fa) cell_fshwr2_syb_bg_pane_ParamLimits

0x7887,	// (0x000447b6) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0x789b,	// (0x000447ca) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf18e,	// (0x0004c0bd) popup_fep_vkb_icf_pane_ParamLimits

0x7571,	// (0x000444a0) bg_popup_fep_char_preview_window_g10

0xe796,	// (0x0004b6c5) cell_ai5_widget_pane_g11_ParamLimits

0xe796,	// (0x0004b6c5) cell_ai5_widget_pane_g11

0xe7a2,	// (0x0004b6d1) cell_ai5_widget_pane_g12_ParamLimits

0xe7a2,	// (0x0004b6d1) cell_ai5_widget_pane_g12

0xe7ae,	// (0x0004b6dd) cell_ai5_widget_pane_g13_ParamLimits

0xe7ae,	// (0x0004b6dd) cell_ai5_widget_pane_g13

0xe8dd,	// (0x0004b80c) cell_ai5_widget_pane_t11_ParamLimits

0xe8dd,	// (0x0004b80c) cell_ai5_widget_pane_t11

0xe8ef,	// (0x0004b81e) cell_ai5_widget_pane_t12_ParamLimits

0xe8ef,	// (0x0004b81e) cell_ai5_widget_pane_t12

0x7a06,	// (0x00044935) cell_ituss_key_pane_g4_ParamLimits

0x7a06,	// (0x00044935) cell_ituss_key_pane_g4

0x7a22,	// (0x00044951) cell_ituss_key_pane_g5_ParamLimits

0x7a22,	// (0x00044951) cell_ituss_key_pane_g5

0x7a3e,	// (0x0004496d) cell_ituss_key_pane_g6_ParamLimits

0x7a3e,	// (0x0004496d) cell_ituss_key_pane_g6

0x99f5,	// (0x00046924) bg_icf_pane_g1

0xf34c,	// (0x0004c27b) bg_icf_pane_g2

0xf358,	// (0x0004c287) bg_icf_pane_g3

0xf362,	// (0x0004c291) bg_icf_pane_g4

0xf36e,	// (0x0004c29d) bg_icf_pane_g5

0xf378,	// (0x0004c2a7) bg_icf_pane_g6

0xf384,	// (0x0004c2b3) bg_icf_pane_g7

0xf38e,	// (0x0004c2bd) bg_icf_pane_g8

0xf39a,	// (0x0004c2c9) bg_icf_pane_g9

0x0008,

0xfed9,	// (0x0004ce08) bg_icf_pane_g

0xf1d1,	// (0x0004c100) popup_hyb_candi_window_ParamLimits

0xf1d1,	// (0x0004c100) popup_hyb_candi_window

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp01_ParamLimits

0x9a69,	// (0x00046998) bg_popup_sub_pane_cp01

0xf467,	// (0x0004c396) entry_hyb_candi_pane_ParamLimits

0xf467,	// (0x0004c396) entry_hyb_candi_pane

0xf476,	// (0x0004c3a5) grid_hyb_candi_pane_ParamLimits

0xf476,	// (0x0004c3a5) grid_hyb_candi_pane

0xf48b,	// (0x0004c3ba) grid_hyb_phrase_pane_ParamLimits

0xf48b,	// (0x0004c3ba) grid_hyb_phrase_pane

0xf49a,	// (0x0004c3c9) cell_hyb_candi_pane_ParamLimits

0xf49a,	// (0x0004c3c9) cell_hyb_candi_pane

0xf4bd,	// (0x0004c3ec) cell_hyb_candi_scroll_pane

0x8b6f,	// (0x00045a9e) cell_hyb_candi_pane_g1

0xf4c6,	// (0x0004c3f5) cell_hyb_candi_pane_t1

0xf4d4,	// (0x0004c403) cell_hyb_phrase_pane

0x8b6f,	// (0x00045a9e) cell_hyb_phrase_pane_g1

0xf4dd,	// (0x0004c40c) cell_hyb_phrase_pane_t1

0xf4eb,	// (0x0004c41a) entry_hyb_candi_pane_t1

0x91a7,	// (0x000460d6) input_focus_pane_cp06

0xf4f9,	// (0x0004c428) cell_hyb_candi_scroll_pane_g1

0xf501,	// (0x0004c430) cell_hyb_candi_scroll_pane_g1_aid

0xf509,	// (0x0004c438) cell_hyb_candi_scroll_pane_g2

0xf511,	// (0x0004c440) cell_hyb_candi_scroll_pane_g2_aid

0xf519,	// (0x0004c448) cell_hyb_candi_scroll_pane_g3

0xf521,	// (0x0004c450) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_php_av_qhd_prt_tch_Large

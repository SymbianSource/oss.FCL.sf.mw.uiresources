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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x0005ae9b };

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
0x9298,	// (0x00064133) Screen

0x92a4,	// (0x0006413f) application_window_ParamLimits

0x92a4,	// (0x0006413f) application_window

0x7f9e,	// (0x00062e39) screen_g1

0x92dc,	// (0x00064177) area_bottom_pane_ParamLimits

0x92dc,	// (0x00064177) area_bottom_pane

0xdcfe,	// (0x00068b99) area_top_pane_ParamLimits

0xdcfe,	// (0x00068b99) area_top_pane

0xdd9c,	// (0x00068c37) main_pane_ParamLimits

0xdd9c,	// (0x00068c37) main_pane

0x7fa8,	// (0x00062e43) misc_graphics

0xbcc0,	// (0x00066b5b) battery_pane_ParamLimits

0xbcc0,	// (0x00066b5b) battery_pane

0x2dbe,	// (0x0005dc59) bg_status_flat_pane_g8

0x2dc6,	// (0x0005dc61) bg_status_flat_pane_g9

0x21b4,	// (0x0005d04f) context_pane_ParamLimits

0x21b4,	// (0x0005d04f) context_pane

0xbe2b,	// (0x00066cc6) navi_pane_ParamLimits

0xbe2b,	// (0x00066cc6) navi_pane

0xbea9,	// (0x00066d44) signal_pane_ParamLimits

0xbea9,	// (0x00066d44) signal_pane

0x0008,

0xf879,	// (0x0006a714) bg_status_flat_pane_g

0xbf39,	// (0x00066dd4) status_pane_g1_ParamLimits

0xbf39,	// (0x00066dd4) status_pane_g1

0xbf4f,	// (0x00066dea) status_pane_g2_ParamLimits

0xbf4f,	// (0x00066dea) status_pane_g2

0x23db,	// (0x0005d276) status_pane_g3_ParamLimits

0x23db,	// (0x0005d276) status_pane_g3

0x0004,

0xf7a5,	// (0x0006a640) status_pane_g_ParamLimits

0xf7a5,	// (0x0006a640) status_pane_g

0xbf5b,	// (0x00066df6) title_pane_ParamLimits

0xbf5b,	// (0x00066df6) title_pane

0xbfbe,	// (0x00066e59) uni_indicator_pane_ParamLimits

0xbfbe,	// (0x00066e59) uni_indicator_pane

0x2010,	// (0x0005ceab) bg_list_pane_ParamLimits

0x2010,	// (0x0005ceab) bg_list_pane

0xa8ee,	// (0x00065789) find_pane

0xa8f6,	// (0x00065791) listscroll_app_pane_ParamLimits

0xa8f6,	// (0x00065791) listscroll_app_pane

0x203c,	// (0x0005ced7) listscroll_form_pane

0xa906,	// (0x000657a1) listscroll_gen_pane_ParamLimits

0xa906,	// (0x000657a1) listscroll_gen_pane

0x0127,	// (0x0005afc2) listscroll_set_pane

0x392f,	// (0x0005e7ca) main_idle_act_pane

0xf49d,	// (0x0006a338) main_idle_trad_pane

0xf49d,	// (0x0006a338) main_list_empty_pane

0x2056,	// (0x0005cef1) main_midp_pane

0x2062,	// (0x0005cefd) main_pane_g1_ParamLimits

0x2062,	// (0x0005cefd) main_pane_g1

0xa91a,	// (0x000657b5) popup_ai_message_window_ParamLimits

0xa91a,	// (0x000657b5) popup_ai_message_window

0xa9cb,	// (0x00065866) popup_fep_china_uni_window_ParamLimits

0xa9cb,	// (0x00065866) popup_fep_china_uni_window

0xaa25,	// (0x000658c0) popup_fep_japan_candidate_window_ParamLimits

0xaa25,	// (0x000658c0) popup_fep_japan_candidate_window

0xaa43,	// (0x000658de) popup_fep_japan_predictive_window_ParamLimits

0xaa43,	// (0x000658de) popup_fep_japan_predictive_window

0xaa55,	// (0x000658f0) popup_find_window

0xaa72,	// (0x0006590d) popup_grid_graphic_window_ParamLimits

0xaa72,	// (0x0006590d) popup_grid_graphic_window

0xab10,	// (0x000659ab) popup_large_graphic_colour_window

0xab36,	// (0x000659d1) popup_menu_window_ParamLimits

0xab36,	// (0x000659d1) popup_menu_window

0xad08,	// (0x00065ba3) popup_note_image_window

0xacce,	// (0x00065b69) popup_note_wait_window_ParamLimits

0xacce,	// (0x00065b69) popup_note_wait_window

0xad20,	// (0x00065bbb) popup_note_window_ParamLimits

0xad20,	// (0x00065bbb) popup_note_window

0xadcf,	// (0x00065c6a) popup_query_code_window_ParamLimits

0xadcf,	// (0x00065c6a) popup_query_code_window

0xae09,	// (0x00065ca4) popup_query_data_code_window_ParamLimits

0xae09,	// (0x00065ca4) popup_query_data_code_window

0xae26,	// (0x00065cc1) popup_query_data_window_ParamLimits

0xae26,	// (0x00065cc1) popup_query_data_window

0xaea8,	// (0x00065d43) popup_query_sat_info_window_ParamLimits

0xaea8,	// (0x00065d43) popup_query_sat_info_window

0xaf3f,	// (0x00065dda) popup_snote_single_graphic_window_ParamLimits

0xaf3f,	// (0x00065dda) popup_snote_single_graphic_window

0xaf3f,	// (0x00065dda) popup_snote_single_text_window_ParamLimits

0xaf3f,	// (0x00065dda) popup_snote_single_text_window

0x0593,	// (0x0005b42e) popup_sub_window_general

0xb09c,	// (0x00065f37) popup_window_general_ParamLimits

0xb09c,	// (0x00065f37) popup_window_general

0x2070,	// (0x0005cf0b) power_save_pane

0xa756,	// (0x000655f1) control_pane_g1_ParamLimits

0xa756,	// (0x000655f1) control_pane_g1

0xa77f,	// (0x0006561a) control_pane_g2_ParamLimits

0xa77f,	// (0x0006561a) control_pane_g2

0x1fd3,	// (0x0005ce6e) control_pane_g3_ParamLimits

0x1fd3,	// (0x0005ce6e) control_pane_g3

0x0007,

0xf78d,	// (0x0006a628) control_pane_g_ParamLimits

0xf78d,	// (0x0006a628) control_pane_g

0xa7e7,	// (0x00065682) control_pane_t1_ParamLimits

0xa7e7,	// (0x00065682) control_pane_t1

0xa845,	// (0x000656e0) control_pane_t2_ParamLimits

0xa845,	// (0x000656e0) control_pane_t2

0x0002,

0xf79e,	// (0x0006a639) control_pane_t_ParamLimits

0xf79e,	// (0x0006a639) control_pane_t

0xa6af,	// (0x0006554a) navi_navi_volume_pane_cp1

0xa6b7,	// (0x00065552) status_small_icon_pane

0x1f08,	// (0x0005cda3) status_small_pane_g1_ParamLimits

0x1f08,	// (0x0005cda3) status_small_pane_g1

0xa6bf,	// (0x0006555a) status_small_pane_g2_ParamLimits

0xa6bf,	// (0x0006555a) status_small_pane_g2

0xa6cb,	// (0x00065566) status_small_pane_g3_ParamLimits

0xa6cb,	// (0x00065566) status_small_pane_g3

0xa6d7,	// (0x00065572) status_small_pane_g4_ParamLimits

0xa6d7,	// (0x00065572) status_small_pane_g4

0xa6e3,	// (0x0006557e) status_small_pane_g5_ParamLimits

0xa6e3,	// (0x0006557e) status_small_pane_g5

0xa6f1,	// (0x0006558c) status_small_pane_g6_ParamLimits

0xa6f1,	// (0x0006558c) status_small_pane_g6

0x0007,

0xf77c,	// (0x0006a617) status_small_pane_g_ParamLimits

0xf77c,	// (0x0006a617) status_small_pane_g

0xa720,	// (0x000655bb) status_small_pane_t1

0xa742,	// (0x000655dd) status_small_wait_pane_ParamLimits

0xa742,	// (0x000655dd) status_small_wait_pane

0xa397,	// (0x00065232) aid_levels_signal_ParamLimits

0xa397,	// (0x00065232) aid_levels_signal

0xa3af,	// (0x0006524a) signal_pane_g1_ParamLimits

0xa3af,	// (0x0006524a) signal_pane_g1

0xa3ca,	// (0x00065265) signal_pane_g2_ParamLimits

0xa3ca,	// (0x00065265) signal_pane_g2

0x0003,

0xf70d,	// (0x0006a5a8) signal_pane_g_ParamLimits

0xf70d,	// (0x0006a5a8) signal_pane_g

0x8844,	// (0x000636df) context_pane_g1

0x94da,	// (0x00064375) title_pane_g1

0x9511,	// (0x000643ac) title_pane_t1

0x7fbe,	// (0x00062e59) title_pane_t2

0x7fe4,	// (0x00062e7f) title_pane_t3

0x0002,

0xf557,	// (0x0006a3f2) title_pane_t

0xbfe6,	// (0x00066e81) aid_levels_battery_ParamLimits

0xbfe6,	// (0x00066e81) aid_levels_battery

0xc002,	// (0x00066e9d) battery_pane_g1_ParamLimits

0xc002,	// (0x00066e9d) battery_pane_g1

0xc01f,	// (0x00066eba) battery_pane_g2_ParamLimits

0xc01f,	// (0x00066eba) battery_pane_g2

0x0001,

0xf7b0,	// (0x0006a64b) battery_pane_g_ParamLimits

0xf7b0,	// (0x0006a64b) battery_pane_g

0xc5f2,	// (0x0006748d) uni_indicator_pane_g1

0xc608,	// (0x000674a3) uni_indicator_pane_g2

0xc61e,	// (0x000674b9) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0006a7bc) uni_indicator_pane_g

0xe0d7,	// (0x00068f72) navi_icon_pane_ParamLimits

0xe0d7,	// (0x00068f72) navi_icon_pane

0xe02c,	// (0x00068ec7) navi_midp_pane

0xe0f3,	// (0x00068f8e) navi_navi_pane

0xe0fd,	// (0x00068f98) navi_text_pane_ParamLimits

0xe0fd,	// (0x00068f98) navi_text_pane

0x7f9e,	// (0x00062e39) status_small_wait_pane_g1

0x8235,	// (0x000630d0) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0006a7b7) status_small_wait_pane_g

0xc54b,	// (0x000673e6) navi_navi_icon_text_pane

0x3411,	// (0x0005e2ac) navi_navi_pane_g1_ParamLimits

0x3411,	// (0x0005e2ac) navi_navi_pane_g1

0x3423,	// (0x0005e2be) navi_navi_pane_g2_ParamLimits

0x3423,	// (0x0005e2be) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0006a785) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0006a785) navi_navi_pane_g

0x3435,	// (0x0005e2d0) navi_navi_tabs_pane

0x343e,	// (0x0005e2d9) navi_navi_text_pane

0xc54b,	// (0x000673e6) navi_navi_volume_pane

0x33e5,	// (0x0005e280) navi_text_pane_t1

0x33d9,	// (0x0005e274) navi_icon_pane_g1

0x332c,	// (0x0005e1c7) navi_navi_text_pane_t1

0xb16f,	// (0x0006600a) navi_navi_volume_pane_g1

0x09ab,	// (0x0005b846) volume_small_pane

0x3292,	// (0x0005e12d) navi_navi_icon_text_pane_g1

0xc4a3,	// (0x0006733e) navi_navi_icon_text_pane_t1

0xe0f3,	// (0x00068f8e) navi_tabs_2_long_pane

0xe0f3,	// (0x00068f8e) navi_tabs_2_pane

0xe0f3,	// (0x00068f8e) navi_tabs_3_long_pane

0xe0f3,	// (0x00068f8e) navi_tabs_3_pane

0xe0f3,	// (0x00068f8e) navi_tabs_4_pane

0x0983,	// (0x0005b81e) tabs_2_active_pane_ParamLimits

0x0983,	// (0x0005b81e) tabs_2_active_pane

0x0993,	// (0x0005b82e) tabs_2_passive_pane_ParamLimits

0x0993,	// (0x0005b82e) tabs_2_passive_pane

0x0951,	// (0x0005b7ec) tabs_3_active_pane_ParamLimits

0x0951,	// (0x0005b7ec) tabs_3_active_pane

0x0961,	// (0x0005b7fc) tabs_3_passive_pane_ParamLimits

0x0961,	// (0x0005b7fc) tabs_3_passive_pane

0x0972,	// (0x0005b80d) tabs_3_passive_pane_cp_ParamLimits

0x0972,	// (0x0005b80d) tabs_3_passive_pane_cp

0x090d,	// (0x0005b7a8) tabs_4_active_pane_ParamLimits

0x090d,	// (0x0005b7a8) tabs_4_active_pane

0x091e,	// (0x0005b7b9) tabs_4_passive_pane_ParamLimits

0x091e,	// (0x0005b7b9) tabs_4_passive_pane

0x092f,	// (0x0005b7ca) tabs_4_passive_pane_cp_ParamLimits

0x092f,	// (0x0005b7ca) tabs_4_passive_pane_cp

0x0940,	// (0x0005b7db) tabs_4_passive_pane_cp2_ParamLimits

0x0940,	// (0x0005b7db) tabs_4_passive_pane_cp2

0x08e9,	// (0x0005b784) tabs_2_long_active_pane_ParamLimits

0x08e9,	// (0x0005b784) tabs_2_long_active_pane

0x08fb,	// (0x0005b796) tabs_2_long_passive_pane_ParamLimits

0x08fb,	// (0x0005b796) tabs_2_long_passive_pane

0x08a4,	// (0x0005b73f) tabs_3_long_active_pane_ParamLimits

0x08a4,	// (0x0005b73f) tabs_3_long_active_pane

0x08bd,	// (0x0005b758) tabs_3_long_passive_pane_ParamLimits

0x08bd,	// (0x0005b758) tabs_3_long_passive_pane

0x08d0,	// (0x0005b76b) tabs_3_long_passive_pane_cp_ParamLimits

0x08d0,	// (0x0005b76b) tabs_3_long_passive_pane_cp

0x084a,	// (0x0005b6e5) volume_small_pane_g1

0x0853,	// (0x0005b6ee) volume_small_pane_g2

0x085c,	// (0x0005b6f7) volume_small_pane_g3

0x0865,	// (0x0005b700) volume_small_pane_g4

0x086e,	// (0x0005b709) volume_small_pane_g5

0x0877,	// (0x0005b712) volume_small_pane_g6

0x0880,	// (0x0005b71b) volume_small_pane_g7

0x0889,	// (0x0005b724) volume_small_pane_g8

0x0892,	// (0x0005b72d) volume_small_pane_g9

0x089b,	// (0x0005b736) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0006a751) volume_small_pane_g

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp2_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp2

0x959d,	// (0x00064438) tabs_3_active_pane_g1

0x95a5,	// (0x00064440) tabs_3_active_pane_t1

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp2_ParamLimits

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp2

0x959d,	// (0x00064438) tabs_3_passive_pane_g1

0x95a5,	// (0x00064440) tabs_3_passive_pane_t1

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp3_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp3

0x95b7,	// (0x00064452) tabs_4_active_pane_g1

0x95bf,	// (0x0006445a) tabs_4_active_pane_t1

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp3_ParamLimits

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp3

0x95b7,	// (0x00064452) tabs_4_1_passive_pane_g1

0x95bf,	// (0x0006445a) tabs_4_1_passive_pane_t1

0x2056,	// (0x0005cef1) list_highlight_pane_cp2

0xc726,	// (0x000675c1) list_set_pane_ParamLimits

0xc726,	// (0x000675c1) list_set_pane

0xc7c0,	// (0x0006765b) main_pane_set_t1_ParamLimits

0xc7c0,	// (0x0006765b) main_pane_set_t1

0xc7e0,	// (0x0006767b) main_pane_set_t2_ParamLimits

0xc7e0,	// (0x0006767b) main_pane_set_t2

0xc7f4,	// (0x0006768f) main_pane_set_t3_ParamLimits

0xc7f4,	// (0x0006768f) main_pane_set_t3

0xc806,	// (0x000676a1) main_pane_set_t4_ParamLimits

0xc806,	// (0x000676a1) main_pane_set_t4

0x0003,

0xf986,	// (0x0006a821) main_pane_set_t_ParamLimits

0xf986,	// (0x0006a821) main_pane_set_t

0xc818,	// (0x000676b3) setting_code_pane

0xc822,	// (0x000676bd) setting_slider_graphic_pane

0xc822,	// (0x000676bd) setting_slider_pane

0xc822,	// (0x000676bd) setting_text_pane

0xc822,	// (0x000676bd) setting_volume_pane

0x95d1,	// (0x0006446c) volume_set_pane

0x7ff6,	// (0x00062e91) bg_set_opt_pane_cp

0x95d9,	// (0x00064474) setting_slider_pane_t1

0x95f2,	// (0x0006448d) setting_slider_pane_t2

0x960c,	// (0x000644a7) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0006a3f9) setting_slider_pane_t

0x9624,	// (0x000644bf) slider_set_pane

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp2

0x8004,	// (0x00062e9f) setting_slider_graphic_pane_g1

0x963a,	// (0x000644d5) setting_slider_graphic_pane_t1

0x964a,	// (0x000644e5) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0006a400) setting_slider_graphic_pane_t

0x965a,	// (0x000644f5) slider_set_pane_cp

0x7fa8,	// (0x00062e43) input_focus_pane_cp1

0x3916,	// (0x0005e7b1) list_set_text_pane

0x7f9e,	// (0x00062e39) setting_text_pane_g1

0x7fa8,	// (0x00062e43) input_focus_pane_cp2

0x7f9e,	// (0x00062e39) setting_code_pane_g1

0x800d,	// (0x00062ea8) setting_code_pane_t1

0xde57,	// (0x00068cf2) set_text_pane_t1_ParamLimits

0xde57,	// (0x00068cf2) set_text_pane_t1

0x8411,	// (0x000632ac) set_opt_bg_pane_g1

0x8419,	// (0x000632b4) set_opt_bg_pane_g2

0xc6db,	// (0x00067576) set_opt_bg_pane_g3

0x8429,	// (0x000632c4) set_opt_bg_pane_g4

0x8431,	// (0x000632cc) set_opt_bg_pane_g5

0x8439,	// (0x000632d4) set_opt_bg_pane_g6

0xc6e5,	// (0x00067580) set_opt_bg_pane_g7

0xc6ed,	// (0x00067588) set_opt_bg_pane_g8

0xc6f7,	// (0x00067592) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0006a80e) set_opt_bg_pane_g

0xc6ce,	// (0x00067569) slider_set_pane_g1

0x0a40,	// (0x0005b8db) slider_set_pane_g2

0x0006,

0xf964,	// (0x0006a7ff) slider_set_pane_g

0xb177,	// (0x00066012) volume_set_pane_g1

0xb17f,	// (0x0006601a) volume_set_pane_g2

0xb187,	// (0x00066022) volume_set_pane_g3

0xb18f,	// (0x0006602a) volume_set_pane_g4

0xb197,	// (0x00066032) volume_set_pane_g5

0xb19f,	// (0x0006603a) volume_set_pane_g6

0xb1a7,	// (0x00066042) volume_set_pane_g7

0xb1af,	// (0x0006604a) volume_set_pane_g8

0xb1b7,	// (0x00066052) volume_set_pane_g9

0xb1bf,	// (0x0006605a) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0006a7d7) volume_set_pane_g

0x9662,	// (0x000644fd) indicator_pane_ParamLimits

0x9662,	// (0x000644fd) indicator_pane

0x968a,	// (0x00064525) main_idle_pane_g2_ParamLimits

0x968a,	// (0x00064525) main_idle_pane_g2

0x96c2,	// (0x0006455d) main_pane_idle_g1_ParamLimits

0x96c2,	// (0x0006455d) main_pane_idle_g1

0x801b,	// (0x00062eb6) popup_clock_digital_analogue_window_ParamLimits

0x801b,	// (0x00062eb6) popup_clock_digital_analogue_window

0x96e9,	// (0x00064584) soft_indicator_pane_ParamLimits

0x96e9,	// (0x00064584) soft_indicator_pane

0x970d,	// (0x000645a8) wallpaper_pane_ParamLimits

0x970d,	// (0x000645a8) wallpaper_pane

0x7f9e,	// (0x00062e39) wallpaper_pane_g1

0x971f,	// (0x000645ba) indicator_pane_g1_ParamLimits

0x971f,	// (0x000645ba) indicator_pane_g1

0x3d7f,	// (0x0005ec1a) navi_navi_icon_text_pane_srt_g1

0x8049,	// (0x00062ee4) soft_indicator_pane_t1

0x8063,	// (0x00062efe) aid_ps_area_pane

0x9735,	// (0x000645d0) aid_ps_clock_pane

0x8074,	// (0x00062f0f) aid_ps_indicator_pane

0x8080,	// (0x00062f1b) indicator_ps_pane_ParamLimits

0x8080,	// (0x00062f1b) indicator_ps_pane

0x808f,	// (0x00062f2a) power_save_pane_g1_ParamLimits

0x808f,	// (0x00062f2a) power_save_pane_g1

0x809b,	// (0x00062f36) power_save_pane_g2_ParamLimits

0x809b,	// (0x00062f36) power_save_pane_g2

0xdcde,	// (0x00068b79) aid_navinavi_width_pane

0x8063,	// (0x00062efe) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0006a405) power_save_pane_g_ParamLimits

0xf56a,	// (0x0006a405) power_save_pane_g

0x80a9,	// (0x00062f44) power_save_pane_t1_ParamLimits

0x80a9,	// (0x00062f44) power_save_pane_t1

0x9735,	// (0x000645d0) aid_ps_clock_pane_ParamLimits

0x8074,	// (0x00062f0f) aid_ps_indicator_pane_ParamLimits

0x80bb,	// (0x00062f56) power_save_pane_t4_ParamLimits

0x80bb,	// (0x00062f56) power_save_pane_t4

0x0001,

0xf56f,	// (0x0006a40a) power_save_pane_t_ParamLimits

0xf56f,	// (0x0006a40a) power_save_pane_t

0x80e5,	// (0x00062f80) power_save_t3_ParamLimits

0x80e5,	// (0x00062f80) power_save_t3

0x80d0,	// (0x00062f6b) power_save_t2_ParamLimits

0x80d0,	// (0x00062f6b) power_save_t2

0x80fa,	// (0x00062f95) indicator_ps_pane_g1

0x9743,	// (0x000645de) ai_gene_pane_ParamLimits

0x9743,	// (0x000645de) ai_gene_pane

0x975a,	// (0x000645f5) ai_links_pane_ParamLimits

0x975a,	// (0x000645f5) ai_links_pane

0x9772,	// (0x0006460d) indicator_pane_cp1_ParamLimits

0x9772,	// (0x0006460d) indicator_pane_cp1

0x9781,	// (0x0006461c) main_pane_idle_g1_cp_ParamLimits

0x9781,	// (0x0006461c) main_pane_idle_g1_cp

0x9799,	// (0x00064634) popup_ai_links_title_window

0x97a2,	// (0x0006463d) soft_indicator_pane_cp1_ParamLimits

0x97a2,	// (0x0006463d) soft_indicator_pane_cp1

0x36d0,	// (0x0005e56b) ai_links_pane_g1

0x36d9,	// (0x0005e574) grid_ai_links_pane

0xc5e9,	// (0x00067484) ai_gene_pane_1

0x36be,	// (0x0005e559) ai_gene_pane_2

0x36c7,	// (0x0005e562) list_highlight_pane_cp4

0xc5c5,	// (0x00067460) cell_ai_link_pane_ParamLimits

0xc5c5,	// (0x00067460) cell_ai_link_pane

0x368f,	// (0x0005e52a) cell_ai_link_pane_g1

0x8235,	// (0x000630d0) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0006a7b2) cell_ai_link_pane_g

0x7fa8,	// (0x00062e43) grid_highlight_cp2

0x7fa8,	// (0x00062e43) bg_popup_sub_pane_cp1

0x8111,	// (0x00062fac) popup_ai_links_title_window_t1

0x35df,	// (0x0005e47a) ai_gene_pane_1_g1_ParamLimits

0x35df,	// (0x0005e47a) ai_gene_pane_1_g1

0x35eb,	// (0x0005e486) ai_gene_pane_1_g2_ParamLimits

0x35eb,	// (0x0005e486) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0006a7a8) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0006a7a8) ai_gene_pane_1_g

0x35f8,	// (0x0005e493) ai_gene_pane_1_t1_ParamLimits

0x35f8,	// (0x0005e493) ai_gene_pane_1_t1

0x362c,	// (0x0005e4c7) grid_ai_soft_ind_pane

0x35ca,	// (0x0005e465) ai_gene_pane_2_t1_ParamLimits

0x35ca,	// (0x0005e465) ai_gene_pane_2_t1

0x97b6,	// (0x00064651) main_pane_empty_t1_ParamLimits

0x97b6,	// (0x00064651) main_pane_empty_t1

0x97ce,	// (0x00064669) main_pane_empty_t2_ParamLimits

0x97ce,	// (0x00064669) main_pane_empty_t2

0x97e3,	// (0x0006467e) main_pane_empty_t3_ParamLimits

0x97e3,	// (0x0006467e) main_pane_empty_t3

0x97f5,	// (0x00064690) main_pane_empty_t4_ParamLimits

0x97f5,	// (0x00064690) main_pane_empty_t4

0x9807,	// (0x000646a2) main_pane_empty_t5_ParamLimits

0x9807,	// (0x000646a2) main_pane_empty_t5

0x0004,

0xf574,	// (0x0006a40f) main_pane_empty_t_ParamLimits

0xf574,	// (0x0006a40f) main_pane_empty_t

0x8462,	// (0x000632fd) bg_popup_window_pane_ParamLimits

0x8462,	// (0x000632fd) bg_popup_window_pane

0xc53f,	// (0x000673da) find_popup_pane_cp2_ParamLimits

0xc53f,	// (0x000673da) find_popup_pane_cp2

0x3346,	// (0x0005e1e1) heading_pane_ParamLimits

0x3346,	// (0x0005e1e1) heading_pane

0x7fa8,	// (0x00062e43) bg_popup_sub_pane

0xc4c0,	// (0x0006735b) bg_popup_window_pane_g1_ParamLimits

0xc4c0,	// (0x0006735b) bg_popup_window_pane_g1

0xc4cf,	// (0x0006736a) bg_popup_window_pane_g2_ParamLimits

0xc4cf,	// (0x0006736a) bg_popup_window_pane_g2

0xc4db,	// (0x00067376) bg_popup_window_pane_g3_ParamLimits

0xc4db,	// (0x00067376) bg_popup_window_pane_g3

0xc4e7,	// (0x00067382) bg_popup_window_pane_g4_ParamLimits

0xc4e7,	// (0x00067382) bg_popup_window_pane_g4

0xc4f6,	// (0x00067391) bg_popup_window_pane_g5_ParamLimits

0xc4f6,	// (0x00067391) bg_popup_window_pane_g5

0xc506,	// (0x000673a1) bg_popup_window_pane_g6_ParamLimits

0xc506,	// (0x000673a1) bg_popup_window_pane_g6

0xc512,	// (0x000673ad) bg_popup_window_pane_g7_ParamLimits

0xc512,	// (0x000673ad) bg_popup_window_pane_g7

0xc521,	// (0x000673bc) bg_popup_window_pane_g8_ParamLimits

0xc521,	// (0x000673bc) bg_popup_window_pane_g8

0xc530,	// (0x000673cb) bg_popup_window_pane_g9_ParamLimits

0xc530,	// (0x000673cb) bg_popup_window_pane_g9

0x3320,	// (0x0005e1bb) bg_popup_window_pane_g10_ParamLimits

0x3320,	// (0x0005e1bb) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0006a770) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0006a770) bg_popup_window_pane_g

0x3249,	// (0x0005e0e4) bg_popup_heading_pane_ParamLimits

0x3249,	// (0x0005e0e4) bg_popup_heading_pane

0x0b47,	// (0x0005b9e2) tabs_4_passive_pane_cp_srt_ParamLimits

0x0b47,	// (0x0005b9e2) tabs_4_passive_pane_cp_srt

0x0b59,	// (0x0005b9f4) tabs_4_passive_pane_srt_ParamLimits

0x325d,	// (0x0005e0f8) heading_pane_g2

0x0b59,	// (0x0005b9f4) tabs_4_passive_pane_srt

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp3_srt_ParamLimits

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp3_srt

0x3265,	// (0x0005e100) heading_pane_t1_ParamLimits

0x3265,	// (0x0005e100) heading_pane_t1

0x327c,	// (0x0005e117) heading_pane_t2_ParamLimits

0x327c,	// (0x0005e117) heading_pane_t2

0x0001,

0xf8d0,	// (0x0006a76b) heading_pane_t_ParamLimits

0xf8d0,	// (0x0006a76b) heading_pane_t

0x2d86,	// (0x0005dc21) bg_popup_heading_pane_g1

0x2e35,	// (0x0005dcd0) bg_popup_heading_pane_g2

0x2e3f,	// (0x0005dcda) bg_popup_heading_pane_g3

0x2e49,	// (0x0005dce4) bg_popup_heading_pane_g4

0x2e53,	// (0x0005dcee) bg_popup_heading_pane_g5

0x2e5d,	// (0x0005dcf8) bg_popup_heading_pane_g6

0x2e65,	// (0x0005dd00) bg_popup_heading_pane_g7

0x2e6d,	// (0x0005dd08) bg_popup_heading_pane_g8

0x2e77,	// (0x0005dd12) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0006a727) bg_popup_heading_pane_g

0x2563,	// (0x0005d3fe) bg_popup_sub_pane_g1

0x2573,	// (0x0005d40e) bg_popup_sub_pane_g2

0x256b,	// (0x0005d406) bg_popup_sub_pane_g3

0x2583,	// (0x0005d41e) bg_popup_sub_pane_g4

0x257b,	// (0x0005d416) bg_popup_sub_pane_g5

0x258b,	// (0x0005d426) bg_popup_sub_pane_g6

0x2593,	// (0x0005d42e) bg_popup_sub_pane_g7

0x25a3,	// (0x0005d43e) bg_popup_sub_pane_g8

0x259b,	// (0x0005d436) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0006a701) bg_popup_sub_pane_g

0x8120,	// (0x00062fbb) bg_popup_window_pane_cp5_ParamLimits

0x8120,	// (0x00062fbb) bg_popup_window_pane_cp5

0x813c,	// (0x00062fd7) popup_note_window_g1_ParamLimits

0x813c,	// (0x00062fd7) popup_note_window_g1

0x8148,	// (0x00062fe3) popup_note_window_t1_ParamLimits

0x8148,	// (0x00062fe3) popup_note_window_t1

0x815e,	// (0x00062ff9) popup_note_window_t2_ParamLimits

0x815e,	// (0x00062ff9) popup_note_window_t2

0x8174,	// (0x0006300f) popup_note_window_t3_ParamLimits

0x8174,	// (0x0006300f) popup_note_window_t3

0x818a,	// (0x00063025) popup_note_window_t4_ParamLimits

0x818a,	// (0x00063025) popup_note_window_t4

0x81b2,	// (0x0006304d) popup_note_window_t5_ParamLimits

0x81b2,	// (0x0006304d) popup_note_window_t5

0x0004,

0xf57f,	// (0x0006a41a) popup_note_window_t_ParamLimits

0xf57f,	// (0x0006a41a) popup_note_window_t

0x81d6,	// (0x00063071) bg_popup_window_pane_cp6_ParamLimits

0x81d6,	// (0x00063071) bg_popup_window_pane_cp6

0x2d02,	// (0x0005db9d) popup_note_image_window_g1_ParamLimits

0x2d02,	// (0x0005db9d) popup_note_image_window_g1

0xc365,	// (0x00067200) popup_note_image_window_g2_ParamLimits

0xc365,	// (0x00067200) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0006a6f5) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0006a6f5) popup_note_image_window_g

0x2d27,	// (0x0005dbc2) popup_note_image_window_t1_ParamLimits

0x2d27,	// (0x0005dbc2) popup_note_image_window_t1

0x2d40,	// (0x0005dbdb) popup_note_image_window_t2_ParamLimits

0x2d40,	// (0x0005dbdb) popup_note_image_window_t2

0x2d59,	// (0x0005dbf4) popup_note_image_window_t3_ParamLimits

0x2d59,	// (0x0005dbf4) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0006a6fa) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0006a6fa) popup_note_image_window_t

0x2bcb,	// (0x0005da66) bg_popup_window_pane_cp7_ParamLimits

0x2bcb,	// (0x0005da66) bg_popup_window_pane_cp7

0x2bfb,	// (0x0005da96) popup_note_wait_window_g1_ParamLimits

0x2bfb,	// (0x0005da96) popup_note_wait_window_g1

0x2c07,	// (0x0005daa2) popup_note_wait_window_g2_ParamLimits

0x2c07,	// (0x0005daa2) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0006a6e3) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0006a6e3) popup_note_wait_window_g

0x2c1f,	// (0x0005daba) popup_note_wait_window_t1_ParamLimits

0x2c1f,	// (0x0005daba) popup_note_wait_window_t1

0xc306,	// (0x000671a1) popup_note_wait_window_t2_ParamLimits

0xc306,	// (0x000671a1) popup_note_wait_window_t2

0xc323,	// (0x000671be) popup_note_wait_window_t3_ParamLimits

0xc323,	// (0x000671be) popup_note_wait_window_t3

0xc336,	// (0x000671d1) popup_note_wait_window_t4_ParamLimits

0xc336,	// (0x000671d1) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0006a6ea) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0006a6ea) popup_note_wait_window_t

0x2c9b,	// (0x0005db36) wait_bar_pane_ParamLimits

0x2c9b,	// (0x0005db36) wait_bar_pane

0x7fa8,	// (0x00062e43) wait_anim_pane

0x7fa8,	// (0x00062e43) wait_border_pane

0x7f9e,	// (0x00062e39) wait_anim_pane_g1

0x7f9e,	// (0x00062e39) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0006a5a3) wait_anim_pane_g

0x2b77,	// (0x0005da12) wait_border_pane_g1

0x2b82,	// (0x0005da1d) wait_border_pane_g2

0x2b8b,	// (0x0005da26) wait_border_pane_g3

0x0002,

0xf841,	// (0x0006a6dc) wait_border_pane_g

0x29e2,	// (0x0005d87d) bg_popup_window_pane_cp16_ParamLimits

0x29e2,	// (0x0005d87d) bg_popup_window_pane_cp16

0xc2b6,	// (0x00067151) indicator_popup_pane_cp4_ParamLimits

0xc2b6,	// (0x00067151) indicator_popup_pane_cp4

0x2af6,	// (0x0005d991) popup_query_data_window_t1_ParamLimits

0x2af6,	// (0x0005d991) popup_query_data_window_t1

0x2b08,	// (0x0005d9a3) popup_query_data_window_t2_ParamLimits

0x2b08,	// (0x0005d9a3) popup_query_data_window_t2

0x2b21,	// (0x0005d9bc) popup_query_data_window_t3_ParamLimits

0x2b21,	// (0x0005d9bc) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0006a6d5) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0006a6d5) popup_query_data_window_t

0xc2ca,	// (0x00067165) query_popup_data_pane_ParamLimits

0xc2ca,	// (0x00067165) query_popup_data_pane

0xc2de,	// (0x00067179) query_popup_data_pane_cp1_ParamLimits

0xc2de,	// (0x00067179) query_popup_data_pane_cp1

0x29e2,	// (0x0005d87d) bg_popup_window_pane_cp10_ParamLimits

0x29e2,	// (0x0005d87d) bg_popup_window_pane_cp10

0xc231,	// (0x000670cc) indicator_popup_pane_ParamLimits

0xc231,	// (0x000670cc) indicator_popup_pane

0xc253,	// (0x000670ee) popup_query_code_window_t1_ParamLimits

0xc253,	// (0x000670ee) popup_query_code_window_t1

0xc26d,	// (0x00067108) popup_query_code_window_t2_ParamLimits

0xc26d,	// (0x00067108) popup_query_code_window_t2

0x2a99,	// (0x0005d934) popup_query_code_window_t3_ParamLimits

0x2a99,	// (0x0005d934) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0006a6ce) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0006a6ce) popup_query_code_window_t

0x2ac8,	// (0x0005d963) query_popup_pane_ParamLimits

0x2ac8,	// (0x0005d963) query_popup_pane

0x81d6,	// (0x00063071) bg_popup_window_pane_cp15_ParamLimits

0x81d6,	// (0x00063071) bg_popup_window_pane_cp15

0x9819,	// (0x000646b4) indicator_popup_pane_cp1_ParamLimits

0x9819,	// (0x000646b4) indicator_popup_pane_cp1

0x982c,	// (0x000646c7) indicator_popup_pane_cp2_ParamLimits

0x982c,	// (0x000646c7) indicator_popup_pane_cp2

0x983f,	// (0x000646da) popup_query_data_code_window_g1_ParamLimits

0x983f,	// (0x000646da) popup_query_data_code_window_g1

0x81f4,	// (0x0006308f) popup_query_data_code_window_t1_ParamLimits

0x81f4,	// (0x0006308f) popup_query_data_code_window_t1

0x8206,	// (0x000630a1) popup_query_data_code_window_t2_ParamLimits

0x8206,	// (0x000630a1) popup_query_data_code_window_t2

0x9852,	// (0x000646ed) popup_query_data_code_window_t3_ParamLimits

0x9852,	// (0x000646ed) popup_query_data_code_window_t3

0x9868,	// (0x00064703) popup_query_data_code_window_t4_ParamLimits

0x9868,	// (0x00064703) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0006a425) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0006a425) popup_query_data_code_window_t

0x072d,	// (0x0005b5c8) list_single_midp_graphic_pane_g3

0x9880,	// (0x0006471b) query_popup_data_pane_cp2_ParamLimits

0x9893,	// (0x0006472e) query_popup_pane_cp2_ParamLimits

0x9893,	// (0x0006472e) query_popup_pane_cp2

0x7fa8,	// (0x00062e43) bg_popup_window_pane_cp11

0x29da,	// (0x0005d875) heading_pane_cp5

0x8262,	// (0x000630fd) listscroll_popup_info_pane

0x7fa8,	// (0x00062e43) input_focus_pane_cp3

0x8218,	// (0x000630b3) query_popup_pane_t1

0x8226,	// (0x000630c1) list_popup_info_pane_ParamLimits

0x8226,	// (0x000630c1) list_popup_info_pane

0x8235,	// (0x000630d0) listscroll_popup_info_pane_g1

0x823d,	// (0x000630d8) scroll_pane_cp7

0x98a6,	// (0x00064741) popup_info_list_pane_t1_ParamLimits

0x98a6,	// (0x00064741) popup_info_list_pane_t1

0x98c0,	// (0x0006475b) popup_info_list_pane_t2_ParamLimits

0x98c0,	// (0x0006475b) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0006a42e) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0006a42e) popup_info_list_pane_t

0x7fa8,	// (0x00062e43) bg_popup_window_pane_cp12

0xc9dc,	// (0x00067877) find_popup_pane

0x7ff6,	// (0x00062e91) bg_popup_window_pane_cp3

0x8247,	// (0x000630e2) heading_pane_cp3

0x8253,	// (0x000630ee) listscroll_popup_graphic_pane

0x7fa8,	// (0x00062e43) bg_popup_window_pane_cp4

0x992a,	// (0x000647c5) heading_pane_cp4

0x8262,	// (0x000630fd) listscroll_popup_colour_pane

0x9932,	// (0x000647cd) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9932,	// (0x000647cd) cell_large_graphic_colour_none_popup_pane

0x9946,	// (0x000647e1) grid_large_graphic_colour_popup_pane_ParamLimits

0x9946,	// (0x000647e1) grid_large_graphic_colour_popup_pane

0x996a,	// (0x00064805) listscroll_popup_colour_pane_g1_ParamLimits

0x996a,	// (0x00064805) listscroll_popup_colour_pane_g1

0x9981,	// (0x0006481c) listscroll_popup_colour_pane_g2_ParamLimits

0x9981,	// (0x0006481c) listscroll_popup_colour_pane_g2

0x9998,	// (0x00064833) listscroll_popup_colour_pane_g3_ParamLimits

0x9998,	// (0x00064833) listscroll_popup_colour_pane_g3

0x99a8,	// (0x00064843) listscroll_popup_colour_pane_g4_ParamLimits

0x99a8,	// (0x00064843) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0006a433) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0006a433) listscroll_popup_colour_pane_g

0x826a,	// (0x00063105) scroll_pane_cp6_ParamLimits

0x826a,	// (0x00063105) scroll_pane_cp6

0x99b8,	// (0x00064853) cell_large_graphic_colour_popup_pane_ParamLimits

0x99b8,	// (0x00064853) cell_large_graphic_colour_popup_pane

0x99d7,	// (0x00064872) cell_large_graphic_colour_none_popup_pane_t1

0x7fa8,	// (0x00062e43) grid_highlight_pane_cp5

0x827c,	// (0x00063117) cell_large_graphic_colour_popup_pane_g1

0x8284,	// (0x0006311f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0006a43c) cell_large_graphic_colour_popup_pane_g

0x828c,	// (0x00063127) cell_large_graphic_colour_popup_pane_g2_copy1

0x8295,	// (0x00063130) grid_highlight_pane_cp4

0x829d,	// (0x00063138) bg_popup_window_pane_cp8_ParamLimits

0x829d,	// (0x00063138) bg_popup_window_pane_cp8

0x99e6,	// (0x00064881) popup_snote_single_text_window_g1_ParamLimits

0x99e6,	// (0x00064881) popup_snote_single_text_window_g1

0x99f8,	// (0x00064893) popup_snote_single_text_window_t1_ParamLimits

0x99f8,	// (0x00064893) popup_snote_single_text_window_t1

0x9a0b,	// (0x000648a6) popup_snote_single_text_window_t2_ParamLimits

0x9a0b,	// (0x000648a6) popup_snote_single_text_window_t2

0x9a1e,	// (0x000648b9) popup_snote_single_text_window_t3_ParamLimits

0x9a1e,	// (0x000648b9) popup_snote_single_text_window_t3

0x9a57,	// (0x000648f2) popup_snote_single_text_window_t4_ParamLimits

0x9a57,	// (0x000648f2) popup_snote_single_text_window_t4

0x9a8b,	// (0x00064926) popup_snote_single_text_window_t5_ParamLimits

0x9a8b,	// (0x00064926) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0006a441) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0006a441) popup_snote_single_text_window_t

0x82b8,	// (0x00063153) bg_popup_window_pane_cp9_ParamLimits

0x82b8,	// (0x00063153) bg_popup_window_pane_cp9

0x99e6,	// (0x00064881) popup_snote_single_graphic_window_g1_ParamLimits

0x99e6,	// (0x00064881) popup_snote_single_graphic_window_g1

0x82c6,	// (0x00063161) popup_snote_single_graphic_window_g2_ParamLimits

0x82c6,	// (0x00063161) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0006a44c) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0006a44c) popup_snote_single_graphic_window_g

0x82d2,	// (0x0006316d) popup_snote_single_graphic_window_t1_ParamLimits

0x82d2,	// (0x0006316d) popup_snote_single_graphic_window_t1

0x82e5,	// (0x00063180) popup_snote_single_graphic_window_t2_ParamLimits

0x82e5,	// (0x00063180) popup_snote_single_graphic_window_t2

0x9a1e,	// (0x000648b9) popup_snote_single_graphic_window_t3_ParamLimits

0x9a1e,	// (0x000648b9) popup_snote_single_graphic_window_t3

0x9a57,	// (0x000648f2) popup_snote_single_graphic_window_t4_ParamLimits

0x9a57,	// (0x000648f2) popup_snote_single_graphic_window_t4

0x9aba,	// (0x00064955) popup_snote_single_graphic_window_t5_ParamLimits

0x9aba,	// (0x00064955) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0006a451) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0006a451) popup_snote_single_graphic_window_t

0x3cdd,	// (0x0005eb78) grid_graphic_popup_pane_ParamLimits

0x3cdd,	// (0x0005eb78) grid_graphic_popup_pane

0x3d05,	// (0x0005eba0) listscroll_popup_graphic_pane_g1_ParamLimits

0x3d05,	// (0x0005eba0) listscroll_popup_graphic_pane_g1

0xc97a,	// (0x00067815) listscroll_popup_graphic_pane_g2_ParamLimits

0xc97a,	// (0x00067815) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0006a84b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0006a84b) listscroll_popup_graphic_pane_g

0x3d2d,	// (0x0005ebc8) scroll_pane_cp5

0xc935,	// (0x000677d0) cell_graphic_popup_pane_ParamLimits

0xc935,	// (0x000677d0) cell_graphic_popup_pane

0x3c5b,	// (0x0005eaf6) cell_graphic_popup_pane_g1

0x3c63,	// (0x0005eafe) cell_graphic_popup_pane_g2

0x828c,	// (0x00063127) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0006a844) cell_graphic_popup_pane_g

0x3c6c,	// (0x0005eb07) cell_graphic_popup_pane_t2

0x8295,	// (0x00063130) grid_highlight_pane_cp3

0x830a,	// (0x000631a5) list_gen_pane_ParamLimits

0x830a,	// (0x000631a5) list_gen_pane

0x8332,	// (0x000631cd) scroll_pane

0xc89f,	// (0x0006773a) bg_list_pane_g1_ParamLimits

0xc89f,	// (0x0006773a) bg_list_pane_g1

0xc8ba,	// (0x00067755) bg_list_pane_g2_ParamLimits

0xc8ba,	// (0x00067755) bg_list_pane_g2

0xc8cd,	// (0x00067768) bg_list_pane_g3_ParamLimits

0xc8cd,	// (0x00067768) bg_list_pane_g3

0xc8df,	// (0x0006777a) bg_list_pane_g4_ParamLimits

0xc8df,	// (0x0006777a) bg_list_pane_g4

0xc8f1,	// (0x0006778c) bg_list_pane_g5_ParamLimits

0xc8f1,	// (0x0006778c) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0006a839) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0006a839) bg_list_pane_g

0xb261,	// (0x000660fc) list_double2_graphic_large_graphic_pane_ParamLimits

0xb261,	// (0x000660fc) list_double2_graphic_large_graphic_pane

0xb261,	// (0x000660fc) list_double2_graphic_pane_ParamLimits

0xb261,	// (0x000660fc) list_double2_graphic_pane

0xb261,	// (0x000660fc) list_double2_large_graphic_pane_ParamLimits

0xb261,	// (0x000660fc) list_double2_large_graphic_pane

0xb261,	// (0x000660fc) list_double2_pane_ParamLimits

0xb261,	// (0x000660fc) list_double2_pane

0xb261,	// (0x000660fc) list_double_graphic_heading_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_graphic_heading_pane

0xb261,	// (0x000660fc) list_double_graphic_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_graphic_pane

0xb261,	// (0x000660fc) list_double_heading_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_heading_pane

0xb261,	// (0x000660fc) list_double_large_graphic_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_large_graphic_pane

0xb261,	// (0x000660fc) list_double_number_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_number_pane

0xb261,	// (0x000660fc) list_double_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_pane

0xb261,	// (0x000660fc) list_double_time_pane_ParamLimits

0xb261,	// (0x000660fc) list_double_time_pane

0xb261,	// (0x000660fc) list_setting_number_pane_ParamLimits

0xb261,	// (0x000660fc) list_setting_number_pane

0xb261,	// (0x000660fc) list_setting_pane_ParamLimits

0xb261,	// (0x000660fc) list_setting_pane

0xc855,	// (0x000676f0) list_single_2graphic_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_2graphic_pane

0xc855,	// (0x000676f0) list_single_graphic_heading_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_graphic_heading_pane

0xc855,	// (0x000676f0) list_single_graphic_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_graphic_pane

0xc855,	// (0x000676f0) list_single_heading_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_heading_pane

0xc855,	// (0x000676f0) list_single_large_graphic_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_large_graphic_pane

0xc855,	// (0x000676f0) list_single_number_heading_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_number_heading_pane

0xc855,	// (0x000676f0) list_single_number_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_number_pane

0xc855,	// (0x000676f0) list_single_pane_ParamLimits

0xc855,	// (0x000676f0) list_single_pane

0x7fa8,	// (0x00062e43) list_highlight_pane_cp1

0xde70,	// (0x00068d0b) list_single_pane_g1_ParamLimits

0xde70,	// (0x00068d0b) list_single_pane_g1

0xde7c,	// (0x00068d17) list_single_pane_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_single_pane_g

0xe31d,	// (0x000691b8) list_single_pane_t1_ParamLimits

0xe31d,	// (0x000691b8) list_single_pane_t1

0xde70,	// (0x00068d0b) list_single_number_pane_g1_ParamLimits

0xde70,	// (0x00068d0b) list_single_number_pane_g1

0xde7c,	// (0x00068d17) list_single_number_pane_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_single_number_pane_g

0xe248,	// (0x000690e3) list_single_number_pane_t1_ParamLimits

0xe248,	// (0x000690e3) list_single_number_pane_t1

0xe30b,	// (0x000691a6) list_single_number_pane_t2_ParamLimits

0xe30b,	// (0x000691a6) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0006a7fa) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0006a7fa) list_single_number_pane_t

0x9af3,	// (0x0006498e) list_single_graphic_pane_g1_ParamLimits

0x9af3,	// (0x0006498e) list_single_graphic_pane_g1

0xde70,	// (0x00068d0b) list_single_graphic_pane_g2_ParamLimits

0xde70,	// (0x00068d0b) list_single_graphic_pane_g2

0xde7c,	// (0x00068d17) list_single_graphic_pane_g3_ParamLimits

0xde7c,	// (0x00068d17) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0006a45c) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0006a45c) list_single_graphic_pane_g

0x9aff,	// (0x0006499a) list_single_graphic_pane_t1_ParamLimits

0x9aff,	// (0x0006499a) list_single_graphic_pane_t1

0x9b15,	// (0x000649b0) list_single_heading_pane_g1_ParamLimits

0x9b15,	// (0x000649b0) list_single_heading_pane_g1

0xde7c,	// (0x00068d17) list_single_heading_pane_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0006a463) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0006a463) list_single_heading_pane_g

0x9b28,	// (0x000649c3) list_single_heading_pane_t1_ParamLimits

0x9b28,	// (0x000649c3) list_single_heading_pane_t1

0x9b3e,	// (0x000649d9) list_single_heading_pane_t2_ParamLimits

0x9b3e,	// (0x000649d9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0006a468) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0006a468) list_single_heading_pane_t

0xde70,	// (0x00068d0b) list_single_number_heading_pane_g1_ParamLimits

0xde70,	// (0x00068d0b) list_single_number_heading_pane_g1

0xde7c,	// (0x00068d17) list_single_number_heading_pane_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_single_number_heading_pane_g

0x9b50,	// (0x000649eb) list_single_number_heading_pane_t1_ParamLimits

0x9b50,	// (0x000649eb) list_single_number_heading_pane_t1

0x9b66,	// (0x00064a01) list_single_number_heading_pane_t2_ParamLimits

0x9b66,	// (0x00064a01) list_single_number_heading_pane_t2

0xde88,	// (0x00068d23) list_single_number_heading_pane_t3_ParamLimits

0xde88,	// (0x00068d23) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0006a472) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0006a472) list_single_number_heading_pane_t

0x9b78,	// (0x00064a13) list_single_graphic_heading_pane_g1_ParamLimits

0x9b78,	// (0x00064a13) list_single_graphic_heading_pane_g1

0x9b8e,	// (0x00064a29) list_single_graphic_heading_pane_g4_ParamLimits

0x9b8e,	// (0x00064a29) list_single_graphic_heading_pane_g4

0xde7c,	// (0x00068d17) list_single_graphic_heading_pane_g5_ParamLimits

0xde7c,	// (0x00068d17) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0006a479) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0006a479) list_single_graphic_heading_pane_g

0x9b50,	// (0x000649eb) list_single_graphic_heading_pane_t1_ParamLimits

0x9b50,	// (0x000649eb) list_single_graphic_heading_pane_t1

0x9b9f,	// (0x00064a3a) list_single_graphic_heading_pane_t2_ParamLimits

0x9b9f,	// (0x00064a3a) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0006a480) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0006a480) list_single_graphic_heading_pane_t

0x3d99,	// (0x0005ec34) list_single_large_graphic_pane_g1_ParamLimits

0x3d99,	// (0x0005ec34) list_single_large_graphic_pane_g1

0xde70,	// (0x00068d0b) list_single_large_graphic_pane_g2_ParamLimits

0xde70,	// (0x00068d0b) list_single_large_graphic_pane_g2

0xde7c,	// (0x00068d17) list_single_large_graphic_pane_g3_ParamLimits

0xde7c,	// (0x00068d17) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0006a485) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0006a485) list_single_large_graphic_pane_g

0x2b82,	// (0x0005da1d) wait_border_pane_g2_copy1

0x9bb7,	// (0x00064a52) list_single_large_graphic_pane_g4_cp2

0xde9a,	// (0x00068d35) list_single_large_graphic_pane_t1_ParamLimits

0xde9a,	// (0x00068d35) list_single_large_graphic_pane_t1

0x3ef4,	// (0x0005ed8f) list_double_pane_g1_ParamLimits

0x3ef4,	// (0x0005ed8f) list_double_pane_g1

0xdeb0,	// (0x00068d4b) list_double_pane_g2_ParamLimits

0xdeb0,	// (0x00068d4b) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0006a48c) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0006a48c) list_double_pane_g

0x9bbf,	// (0x00064a5a) list_double_pane_t1_ParamLimits

0x9bbf,	// (0x00064a5a) list_double_pane_t1

0x9bd5,	// (0x00064a70) list_double_pane_t2_ParamLimits

0x9bd5,	// (0x00064a70) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0006a491) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0006a491) list_double_pane_t

0x9be7,	// (0x00064a82) list_double2_pane_g1_ParamLimits

0x9be7,	// (0x00064a82) list_double2_pane_g1

0x9bf8,	// (0x00064a93) list_double2_pane_g2_ParamLimits

0x9bf8,	// (0x00064a93) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0006a496) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0006a496) list_double2_pane_g

0x9c04,	// (0x00064a9f) list_double2_pane_t1_ParamLimits

0x9c04,	// (0x00064a9f) list_double2_pane_t1

0x9c1a,	// (0x00064ab5) list_double2_pane_t2_ParamLimits

0x9c1a,	// (0x00064ab5) list_double2_pane_t2

0x0001,

0xf600,	// (0x0006a49b) list_double2_pane_t_ParamLimits

0xf600,	// (0x0006a49b) list_double2_pane_t

0x3ef4,	// (0x0005ed8f) list_double_number_pane_g1_ParamLimits

0x3ef4,	// (0x0005ed8f) list_double_number_pane_g1

0xdeb0,	// (0x00068d4b) list_double_number_pane_g2_ParamLimits

0xdeb0,	// (0x00068d4b) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0006a48c) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0006a48c) list_double_number_pane_g

0x9c2c,	// (0x00064ac7) list_double_number_pane_t1_ParamLimits

0x9c2c,	// (0x00064ac7) list_double_number_pane_t1

0xdebc,	// (0x00068d57) list_double_number_pane_t2_ParamLimits

0xdebc,	// (0x00068d57) list_double_number_pane_t2

0x9c3e,	// (0x00064ad9) list_double_number_pane_t3_ParamLimits

0x9c3e,	// (0x00064ad9) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0006a4a0) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0006a4a0) list_double_number_pane_t

0xded2,	// (0x00068d6d) list_double_graphic_pane_g1_ParamLimits

0xded2,	// (0x00068d6d) list_double_graphic_pane_g1

0x9c50,	// (0x00064aeb) list_double_graphic_pane_g2_ParamLimits

0x9c50,	// (0x00064aeb) list_double_graphic_pane_g2

0x9c5f,	// (0x00064afa) list_double_graphic_pane_g3_ParamLimits

0x9c5f,	// (0x00064afa) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0006a4a7) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0006a4a7) list_double_graphic_pane_g

0x9c77,	// (0x00064b12) list_double_graphic_pane_t1_ParamLimits

0x9c77,	// (0x00064b12) list_double_graphic_pane_t1

0x9c8d,	// (0x00064b28) list_double_graphic_pane_t2_ParamLimits

0x9c8d,	// (0x00064b28) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0006a4b0) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0006a4b0) list_double_graphic_pane_t

0x9c9f,	// (0x00064b3a) list_double2_graphic_pane_g1_ParamLimits

0x9c9f,	// (0x00064b3a) list_double2_graphic_pane_g1

0x83c4,	// (0x0006325f) list_double2_graphic_pane_g2_ParamLimits

0x83c4,	// (0x0006325f) list_double2_graphic_pane_g2

0x9cab,	// (0x00064b46) list_double2_graphic_pane_g3_ParamLimits

0x9cab,	// (0x00064b46) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0006a4b5) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0006a4b5) list_double2_graphic_pane_g

0x9cb7,	// (0x00064b52) list_double2_graphic_pane_t1_ParamLimits

0x9cb7,	// (0x00064b52) list_double2_graphic_pane_t1

0x9ccd,	// (0x00064b68) list_double2_graphic_pane_t2_ParamLimits

0x9ccd,	// (0x00064b68) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0006a4bc) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0006a4bc) list_double2_graphic_pane_t

0x9cdf,	// (0x00064b7a) list_double_large_graphic_pane_g1_ParamLimits

0x9cdf,	// (0x00064b7a) list_double_large_graphic_pane_g1

0x9cfe,	// (0x00064b99) list_double_large_graphic_pane_g2_ParamLimits

0x9cfe,	// (0x00064b99) list_double_large_graphic_pane_g2

0xdeb0,	// (0x00068d4b) list_double_large_graphic_pane_g3_ParamLimits

0xdeb0,	// (0x00068d4b) list_double_large_graphic_pane_g3

0x9d14,	// (0x00064baf) list_double_large_graphic_pane_g4_ParamLimits

0x9d14,	// (0x00064baf) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0006a4c1) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0006a4c1) list_double_large_graphic_pane_g

0x9d27,	// (0x00064bc2) list_double_large_graphic_pane_t1_ParamLimits

0x9d27,	// (0x00064bc2) list_double_large_graphic_pane_t1

0x9d40,	// (0x00064bdb) list_double_large_graphic_pane_t2_ParamLimits

0x9d40,	// (0x00064bdb) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0006a4cc) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0006a4cc) list_double_large_graphic_pane_t

0x9d52,	// (0x00064bed) list_double2_large_graphic_pane_g1_ParamLimits

0x9d52,	// (0x00064bed) list_double2_large_graphic_pane_g1

0x9d5e,	// (0x00064bf9) list_double2_large_graphic_pane_g2_ParamLimits

0x9d5e,	// (0x00064bf9) list_double2_large_graphic_pane_g2

0x9cab,	// (0x00064b46) list_double2_large_graphic_pane_g3_ParamLimits

0x9cab,	// (0x00064b46) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0006a4d1) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0006a4d1) list_double2_large_graphic_pane_g

0x9d6f,	// (0x00064c0a) list_double2_large_graphic_pane_t1_ParamLimits

0x9d6f,	// (0x00064c0a) list_double2_large_graphic_pane_t1

0x9d85,	// (0x00064c20) list_double2_large_graphic_pane_t2_ParamLimits

0x9d85,	// (0x00064c20) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0006a4d8) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0006a4d8) list_double2_large_graphic_pane_t

0x9d97,	// (0x00064c32) list_double_heading_pane_g1_ParamLimits

0x9d97,	// (0x00064c32) list_double_heading_pane_g1

0x9da8,	// (0x00064c43) list_double_heading_pane_g2_ParamLimits

0x9da8,	// (0x00064c43) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0006a4dd) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0006a4dd) list_double_heading_pane_g

0x9db4,	// (0x00064c4f) list_double_heading_pane_t1_ParamLimits

0x9db4,	// (0x00064c4f) list_double_heading_pane_t1

0x9c1a,	// (0x00064ab5) list_double_heading_pane_t2_ParamLimits

0x9c1a,	// (0x00064ab5) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0006a4e2) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0006a4e2) list_double_heading_pane_t

0xdef3,	// (0x00068d8e) list_double_graphic_heading_pane_g1_ParamLimits

0xdef3,	// (0x00068d8e) list_double_graphic_heading_pane_g1

0x9d97,	// (0x00064c32) list_double_graphic_heading_pane_g2_ParamLimits

0x9d97,	// (0x00064c32) list_double_graphic_heading_pane_g2

0x9da8,	// (0x00064c43) list_double_graphic_heading_pane_g3_ParamLimits

0x9da8,	// (0x00064c43) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0006a4e7) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0006a4e7) list_double_graphic_heading_pane_g

0x9dca,	// (0x00064c65) list_double_graphic_heading_pane_t1_ParamLimits

0x9dca,	// (0x00064c65) list_double_graphic_heading_pane_t1

0x9ccd,	// (0x00064b68) list_double_graphic_heading_pane_t2_ParamLimits

0x9ccd,	// (0x00064b68) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0006a4ee) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0006a4ee) list_double_graphic_heading_pane_t

0x9de0,	// (0x00064c7b) list_double_time_pane_g1_ParamLimits

0x9de0,	// (0x00064c7b) list_double_time_pane_g1

0xdeff,	// (0x00068d9a) list_double_time_pane_g2_ParamLimits

0xdeff,	// (0x00068d9a) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0006a4f3) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0006a4f3) list_double_time_pane_g

0x9df1,	// (0x00064c8c) list_double_time_pane_t1_ParamLimits

0x9df1,	// (0x00064c8c) list_double_time_pane_t1

0x9e07,	// (0x00064ca2) list_double_time_pane_t2_ParamLimits

0x9e07,	// (0x00064ca2) list_double_time_pane_t2

0x9e19,	// (0x00064cb4) list_double_time_pane_t3_ParamLimits

0x9e19,	// (0x00064cb4) list_double_time_pane_t3

0x9e2b,	// (0x00064cc6) list_double_time_pane_t4_ParamLimits

0x9e2b,	// (0x00064cc6) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0006a4f8) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0006a4f8) list_double_time_pane_t

0x9e3d,	// (0x00064cd8) list_setting_pane_g1_ParamLimits

0x9e3d,	// (0x00064cd8) list_setting_pane_g1

0x9e49,	// (0x00064ce4) list_setting_pane_g2_ParamLimits

0x9e49,	// (0x00064ce4) list_setting_pane_g2

0x0001,

0xf666,	// (0x0006a501) list_setting_pane_g_ParamLimits

0xf666,	// (0x0006a501) list_setting_pane_g

0x9e55,	// (0x00064cf0) list_setting_pane_t1_ParamLimits

0x9e55,	// (0x00064cf0) list_setting_pane_t1

0x9e6f,	// (0x00064d0a) list_setting_pane_t2_ParamLimits

0x9e6f,	// (0x00064d0a) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0006a506) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0006a506) list_setting_pane_t

0x9eae,	// (0x00064d49) set_value_pane_cp_ParamLimits

0x9eae,	// (0x00064d49) set_value_pane_cp

0x9eba,	// (0x00064d55) list_setting_number_pane_g1_ParamLimits

0x9eba,	// (0x00064d55) list_setting_number_pane_g1

0x9ec6,	// (0x00064d61) list_setting_number_pane_g2_ParamLimits

0x9ec6,	// (0x00064d61) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0006a50d) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0006a50d) list_setting_number_pane_g

0x9ed2,	// (0x00064d6d) list_setting_number_pane_t1_ParamLimits

0x9ed2,	// (0x00064d6d) list_setting_number_pane_t1

0x9eeb,	// (0x00064d86) list_setting_number_pane_t2_ParamLimits

0x9eeb,	// (0x00064d86) list_setting_number_pane_t2

0x9f05,	// (0x00064da0) list_setting_number_pane_t3_ParamLimits

0x9f05,	// (0x00064da0) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0006a512) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0006a512) list_setting_number_pane_t

0x9eae,	// (0x00064d49) set_value_pane_ParamLimits

0x9eae,	// (0x00064d49) set_value_pane

0x8366,	// (0x00063201) bg_set_opt_pane_ParamLimits

0x8366,	// (0x00063201) bg_set_opt_pane

0xdf0b,	// (0x00068da6) set_value_pane_t1

0x8387,	// (0x00063222) slider_set_pane_cp3

0x9f48,	// (0x00064de3) volume_small_pane_cp

0x8390,	// (0x0006322b) list_form_gen_pane

0x8399,	// (0x00063234) scroll_pane_cp8

0x9f51,	// (0x00064dec) form_field_data_pane_ParamLimits

0x9f51,	// (0x00064dec) form_field_data_pane

0x9f68,	// (0x00064e03) form_field_data_wide_pane_ParamLimits

0x9f68,	// (0x00064e03) form_field_data_wide_pane

0x9f88,	// (0x00064e23) form_field_popup_pane_ParamLimits

0x9f88,	// (0x00064e23) form_field_popup_pane

0x9fa0,	// (0x00064e3b) form_field_popup_wide_pane_ParamLimits

0x9fa0,	// (0x00064e3b) form_field_popup_wide_pane

0xdf29,	// (0x00068dc4) form_field_slider_pane_ParamLimits

0xdf29,	// (0x00068dc4) form_field_slider_pane

0x9fb7,	// (0x00064e52) form_field_slider_wide_pane_ParamLimits

0x9fb7,	// (0x00064e52) form_field_slider_wide_pane

0x83aa,	// (0x00063245) data_form_pane

0x9fd4,	// (0x00064e6f) form_field_data_pane_t1

0x83b6,	// (0x00063251) input_focus_pane

0x9fee,	// (0x00064e89) data_form_wide_pane

0x9fff,	// (0x00064e9a) form_field_data_wide_pane_t1

0x82aa,	// (0x00063145) input_focus_pane_cp6

0xa019,	// (0x00064eb4) form_field_popup_pane_t1

0x83b6,	// (0x00063251) input_focus_pane_cp7

0x83e4,	// (0x0006327f) list_form_pane

0xdf58,	// (0x00068df3) form_field_popup_wide_pane_t1

0x83b6,	// (0x00063251) input_focus_pane_cp8

0x83f0,	// (0x0006328b) list_form_wide_pane

0xa03b,	// (0x00064ed6) form_field_slider_pane_t1_ParamLimits

0xa03b,	// (0x00064ed6) form_field_slider_pane_t1

0xa053,	// (0x00064eee) form_field_slider_pane_t2_ParamLimits

0xa053,	// (0x00064eee) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0006a522) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0006a522) form_field_slider_pane_t

0x8120,	// (0x00062fbb) input_focus_pane_cp9_ParamLimits

0x8120,	// (0x00062fbb) input_focus_pane_cp9

0xa068,	// (0x00064f03) slider_cont_pane_ParamLimits

0xa068,	// (0x00064f03) slider_cont_pane

0x83ff,	// (0x0006329a) form_field_slider_wide_pane_t1_ParamLimits

0x83ff,	// (0x0006329a) form_field_slider_wide_pane_t1

0xdf6d,	// (0x00068e08) form_field_slider_wide_pane_t2_ParamLimits

0xdf6d,	// (0x00068e08) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0006a527) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0006a527) form_field_slider_wide_pane_t

0x8120,	// (0x00062fbb) input_focus_pane_cp10_ParamLimits

0x8120,	// (0x00062fbb) input_focus_pane_cp10

0xa07c,	// (0x00064f17) slider_cont_pane_cp1_ParamLimits

0xa07c,	// (0x00064f17) slider_cont_pane_cp1

0xa090,	// (0x00064f2b) slider_form_pane_cp

0x8411,	// (0x000632ac) input_focus_pane_g1

0x8419,	// (0x000632b4) input_focus_pane_g2

0x8421,	// (0x000632bc) input_focus_pane_g3

0x8429,	// (0x000632c4) input_focus_pane_g4

0x8431,	// (0x000632cc) input_focus_pane_g5

0x8439,	// (0x000632d4) input_focus_pane_g6

0x8441,	// (0x000632dc) input_focus_pane_g7

0x8449,	// (0x000632e4) input_focus_pane_g8

0x8451,	// (0x000632ec) input_focus_pane_g9

0x7f9e,	// (0x00062e39) input_focus_pane_g10

0x0009,

0xf691,	// (0x0006a52c) input_focus_pane_g

0x2b8b,	// (0x0005da26) wait_border_pane_g3_copy1

0xa098,	// (0x00064f33) data_form_pane_t1

0x7f9e,	// (0x00062e39) wait_anim_pane_g1_copy1

0xb233,	// (0x000660ce) data_form_wide_pane_t1

0xa0b2,	// (0x00064f4d) list_form_graphic_pane_cp_ParamLimits

0xa0b2,	// (0x00064f4d) list_form_graphic_pane_cp

0x3a8b,	// (0x0005e926) slider_form_pane_g1

0x3a94,	// (0x0005e92f) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0006a82a) slider_form_pane_g

0xa0b2,	// (0x00064f4d) list_form_graphic_pane_ParamLimits

0xa0b2,	// (0x00064f4d) list_form_graphic_pane

0xa0c4,	// (0x00064f5f) list_form_graphic_pane_g1

0xa0cc,	// (0x00064f67) list_form_graphic_pane_t1_ParamLimits

0xa0cc,	// (0x00064f67) list_form_graphic_pane_t1

0x7ff6,	// (0x00062e91) list_highlight_pane_cp5_ParamLimits

0x7ff6,	// (0x00062e91) list_highlight_pane_cp5

0xa0e1,	// (0x00064f7c) find_pane_g1

0x8459,	// (0x000632f4) input_find_pane

0xa0ea,	// (0x00064f85) input_find_pane_g1_ParamLimits

0xa0ea,	// (0x00064f85) input_find_pane_g1

0xa0f6,	// (0x00064f91) input_find_pane_t1_ParamLimits

0xa0f6,	// (0x00064f91) input_find_pane_t1

0xa10b,	// (0x00064fa6) input_find_pane_t2_ParamLimits

0xa10b,	// (0x00064fa6) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0006a541) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0006a541) input_find_pane_t

0x8462,	// (0x000632fd) input_focus_pane_cp5_ParamLimits

0x8462,	// (0x000632fd) input_focus_pane_cp5

0x8470,	// (0x0006330b) bg_popup_window_pane_cp2_ParamLimits

0x8470,	// (0x0006330b) bg_popup_window_pane_cp2

0x847d,	// (0x00063318) listscroll_menu_pane_ParamLimits

0x847d,	// (0x00063318) listscroll_menu_pane

0xa12c,	// (0x00064fc7) popup_submenu_window_ParamLimits

0xa12c,	// (0x00064fc7) popup_submenu_window

0x8489,	// (0x00063324) find_popup_pane_g1

0xa154,	// (0x00064fef) input_popup_find_pane_cp

0x8462,	// (0x000632fd) input_focus_pane_cp4_ParamLimits

0x8462,	// (0x000632fd) input_focus_pane_cp4

0x8491,	// (0x0006332c) input_popup_find_pane_t1_ParamLimits

0x8491,	// (0x0006332c) input_popup_find_pane_t1

0x7fa8,	// (0x00062e43) bg_popup_sub_pane_cp

0x84bf,	// (0x0006335a) listscroll_popup_sub_pane

0x84c7,	// (0x00063362) list_submenu_pane_ParamLimits

0x84c7,	// (0x00063362) list_submenu_pane

0x84d8,	// (0x00063373) scroll_pane_cp4

0xa16c,	// (0x00065007) list_single_popup_submenu_pane_ParamLimits

0xa16c,	// (0x00065007) list_single_popup_submenu_pane

0xa180,	// (0x0006501b) list_single_popup_submenu_pane_g1

0xa188,	// (0x00065023) list_single_popup_submenu_pane_t1_ParamLimits

0xa188,	// (0x00065023) list_single_popup_submenu_pane_t1

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp1_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp1

0x84e0,	// (0x0006337b) tabs_2_active_pane_g1

0xa19d,	// (0x00065038) tabs_2_active_pane_t1

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp1_ParamLimits

0x8120,	// (0x00062fbb) bg_passive_tab_pane_cp1

0x84e0,	// (0x0006337b) tabs_2_passive_pane_g1

0xa19d,	// (0x00065038) tabs_2_passive_pane_t1

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp4

0xa1af,	// (0x0006504a) tabs_2_long_active_pane_t1

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp4

0x0735,	// (0x0005b5d0) list_single_midp_graphic_pane_g4_ParamLimits

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp5

0xa1c2,	// (0x0006505d) tabs_3_long_active_pane_t1

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp5

0x0735,	// (0x0005b5d0) list_single_midp_graphic_pane_g4

0x7ff6,	// (0x00062e91) bg_popup_window_pane_cp13_ParamLimits

0x7ff6,	// (0x00062e91) bg_popup_window_pane_cp13

0x84e8,	// (0x00063383) listscroll_popup_fast_pane_ParamLimits

0x84e8,	// (0x00063383) listscroll_popup_fast_pane

0x84f4,	// (0x0006338f) grid_popup_fast_pane_ParamLimits

0x84f4,	// (0x0006338f) grid_popup_fast_pane

0x8506,	// (0x000633a1) scroll_pane_cp9_ParamLimits

0x8506,	// (0x000633a1) scroll_pane_cp9

0x5588,	// (0x00060423) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5588,	// (0x00060423) list_single_graphic_hl_pane_t1_cp2

0x8519,	// (0x000633b4) input_focus_pane_cp20_ParamLimits

0x8519,	// (0x000633b4) input_focus_pane_cp20

0x8527,	// (0x000633c2) query_popup_data_pane_t1_ParamLimits

0x8527,	// (0x000633c2) query_popup_data_pane_t1

0x853a,	// (0x000633d5) query_popup_data_pane_t2_ParamLimits

0x853a,	// (0x000633d5) query_popup_data_pane_t2

0x8580,	// (0x0006341b) query_popup_data_pane_t3_ParamLimits

0x8580,	// (0x0006341b) query_popup_data_pane_t3

0x85c1,	// (0x0006345c) query_popup_data_pane_t4_ParamLimits

0x85c1,	// (0x0006345c) query_popup_data_pane_t4

0x85fd,	// (0x00063498) query_popup_data_pane_t5_ParamLimits

0x85fd,	// (0x00063498) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0006a546) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0006a546) query_popup_data_pane_t

0x8411,	// (0x000632ac) bg_set_opt_pane_g1

0x8419,	// (0x000632b4) bg_set_opt_pane_g2

0x8421,	// (0x000632bc) bg_set_opt_pane_g3

0x8429,	// (0x000632c4) bg_set_opt_pane_g4

0x8431,	// (0x000632cc) bg_set_opt_pane_g5

0x8439,	// (0x000632d4) bg_set_opt_pane_g6

0x8441,	// (0x000632dc) bg_set_opt_pane_g7

0x8449,	// (0x000632e4) bg_set_opt_pane_g8

0x8451,	// (0x000632ec) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0006a551) bg_set_opt_pane_g

0xf2e7,	// (0x0006a182) control_top_pane_stacon_ParamLimits

0xf2e7,	// (0x0006a182) control_top_pane_stacon

0xf33a,	// (0x0006a1d5) signal_pane_stacon_ParamLimits

0xf33a,	// (0x0006a1d5) signal_pane_stacon

0xdf7f,	// (0x00068e1a) stacon_top_pane_g1_ParamLimits

0xdf7f,	// (0x00068e1a) stacon_top_pane_g1

0xf35f,	// (0x0006a1fa) title_pane_stacon_ParamLimits

0xf35f,	// (0x0006a1fa) title_pane_stacon

0xf389,	// (0x0006a224) uni_indicator_pane_stacon_ParamLimits

0xf389,	// (0x0006a224) uni_indicator_pane_stacon

0xf39e,	// (0x0006a239) battery_pane_stacon_ParamLimits

0xf39e,	// (0x0006a239) battery_pane_stacon

0xf3e2,	// (0x0006a27d) control_bottom_pane_stacon_ParamLimits

0xf3e2,	// (0x0006a27d) control_bottom_pane_stacon

0xf405,	// (0x0006a2a0) navi_pane_stacon_ParamLimits

0xf405,	// (0x0006a2a0) navi_pane_stacon

0xdfa1,	// (0x00068e3c) stacon_bottom_pane_g1_ParamLimits

0xdfa1,	// (0x00068e3c) stacon_bottom_pane_g1

0xf0aa,	// (0x00069f45) aid_levels_signal_lsc_ParamLimits

0xf0aa,	// (0x00069f45) aid_levels_signal_lsc

0xf0c0,	// (0x00069f5b) signal_pane_stacon_g1_ParamLimits

0xf0c0,	// (0x00069f5b) signal_pane_stacon_g1

0xf0d4,	// (0x00069f6f) signal_pane_stacon_g2_ParamLimits

0xf0d4,	// (0x00069f6f) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0006a564) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0006a564) signal_pane_stacon_g

0xf109,	// (0x00069fa4) title_pane_stacon_t1_ParamLimits

0xf109,	// (0x00069fa4) title_pane_stacon_t1

0x8641,	// (0x000634dc) uni_indicator_pane_stacon_g1

0x864b,	// (0x000634e6) uni_indicator_pane_stacon_g2

0x8655,	// (0x000634f0) uni_indicator_pane_stacon_g3

0x865f,	// (0x000634fa) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0006a570) uni_indicator_pane_stacon_g

0xf12e,	// (0x00069fc9) control_top_pane_stacon_g1

0xf136,	// (0x00069fd1) control_top_pane_stacon_t1_ParamLimits

0xf136,	// (0x00069fd1) control_top_pane_stacon_t1

0xf16d,	// (0x0006a008) aid_levels_battery_lsc_ParamLimits

0xf16d,	// (0x0006a008) aid_levels_battery_lsc

0xf184,	// (0x0006a01f) battery_pane_stacon_g1_ParamLimits

0xf184,	// (0x0006a01f) battery_pane_stacon_g1

0xf197,	// (0x0006a032) battery_pane_stacon_g2_ParamLimits

0xf197,	// (0x0006a032) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0006a579) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0006a579) battery_pane_stacon_g

0xf1d5,	// (0x0006a070) navi_icon_pane_stacon

0xf1e9,	// (0x0006a084) navi_navi_pane_stacon

0xf1d5,	// (0x0006a070) navi_text_pane_stacon

0xf12e,	// (0x00069fc9) control_bottom_pane_stacon_g1

0xf1fd,	// (0x0006a098) control_bottom_pane_stacon_t1_ParamLimits

0xf1fd,	// (0x0006a098) control_bottom_pane_stacon_t1

0xa1ee,	// (0x00065089) grid_app_pane_ParamLimits

0xa1ee,	// (0x00065089) grid_app_pane

0xa226,	// (0x000650c1) scroll_pane_cp15_ParamLimits

0xa226,	// (0x000650c1) scroll_pane_cp15

0xa23b,	// (0x000650d6) cell_app_pane_ParamLimits

0xa23b,	// (0x000650d6) cell_app_pane

0xa280,	// (0x0006511b) cell_app_pane_g1_ParamLimits

0xa280,	// (0x0006511b) cell_app_pane_g1

0x8683,	// (0x0006351e) cell_app_pane_g2_ParamLimits

0x8683,	// (0x0006351e) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0006a57e) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0006a57e) cell_app_pane_g

0xa2a4,	// (0x0006513f) cell_app_pane_t1_ParamLimits

0xa2a4,	// (0x0006513f) cell_app_pane_t1

0x868f,	// (0x0006352a) grid_highlight_pane_ParamLimits

0x868f,	// (0x0006352a) grid_highlight_pane

0x8411,	// (0x000632ac) cell_highlight_pane_g1

0x8419,	// (0x000632b4) cell_highlight_pane_g2

0x8421,	// (0x000632bc) cell_highlight_pane_g3

0x8429,	// (0x000632c4) cell_highlight_pane_g4

0x8431,	// (0x000632cc) cell_highlight_pane_g5

0x8439,	// (0x000632d4) cell_highlight_pane_g6

0x8441,	// (0x000632dc) cell_highlight_pane_g7

0x8449,	// (0x000632e4) cell_highlight_pane_g8

0x8451,	// (0x000632ec) cell_highlight_pane_g9

0x7f9e,	// (0x00062e39) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0006a52c) cell_highlight_pane_g

0x86a0,	// (0x0006353b) bg_scroll_pane

0xa2c4,	// (0x0006515f) scroll_handle_pane

0x86e7,	// (0x00063582) scroll_bg_pane_g1

0x86fc,	// (0x00063597) scroll_bg_pane_g2

0x8714,	// (0x000635af) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0006a583) scroll_bg_pane_g

0xa2d8,	// (0x00065173) scroll_handle_focus_pane_ParamLimits

0xa2d8,	// (0x00065173) scroll_handle_focus_pane

0x86e7,	// (0x00063582) scroll_handle_pane_g1

0x8729,	// (0x000635c4) scroll_handle_pane_g2

0x8714,	// (0x000635af) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0006a58a) scroll_handle_pane_g

0x8462,	// (0x000632fd) bg_popup_sub_pane_cp21_ParamLimits

0x8462,	// (0x000632fd) bg_popup_sub_pane_cp21

0xa2e5,	// (0x00065180) popup_fep_japan_predictive_window_t1_ParamLimits

0xa2e5,	// (0x00065180) popup_fep_japan_predictive_window_t1

0xa2fc,	// (0x00065197) popup_fep_japan_predictive_window_t2_ParamLimits

0xa2fc,	// (0x00065197) popup_fep_japan_predictive_window_t2

0xa32f,	// (0x000651ca) popup_fep_japan_predictive_window_t3_ParamLimits

0xa32f,	// (0x000651ca) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0006a591) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0006a591) popup_fep_japan_predictive_window_t

0x7fa8,	// (0x00062e43) bg_popup_sub_pane_cp23

0xa366,	// (0x00065201) listscroll_japin_cand_pane

0x873d,	// (0x000635d8) popup_fep_japan_candidate_window_t1

0x874b,	// (0x000635e6) candidate_pane_ParamLimits

0x874b,	// (0x000635e6) candidate_pane

0xa36e,	// (0x00065209) scroll_pane_cp30

0x875d,	// (0x000635f8) list_single_popup_jap_candidate_pane_ParamLimits

0x875d,	// (0x000635f8) list_single_popup_jap_candidate_pane

0x7fa8,	// (0x00062e43) list_highlight_pane_cp30

0x8772,	// (0x0006360d) list_single_popup_jap_candidate_pane_t1

0x8781,	// (0x0006361c) level_1_signal

0x878e,	// (0x00063629) level_2_signal

0x879b,	// (0x00063636) level_3_signal

0x87a8,	// (0x00063643) level_4_signal

0x87b5,	// (0x00063650) level_5_signal

0x87c2,	// (0x0006365d) level_6_signal

0x87cf,	// (0x0006366a) level_7_signal

0x8781,	// (0x0006361c) level_1_battery

0x878e,	// (0x00063629) level_2_battery

0x879b,	// (0x00063636) level_3_battery

0x87a8,	// (0x00063643) level_4_battery

0x87b5,	// (0x00063650) level_5_battery

0x87c2,	// (0x0006365d) level_6_battery

0x87cf,	// (0x0006366a) level_7_battery

0x87f4,	// (0x0006368f) list_menu_pane_ParamLimits

0x87f4,	// (0x0006368f) list_menu_pane

0x880a,	// (0x000636a5) scroll_pane_cp25_ParamLimits

0x880a,	// (0x000636a5) scroll_pane_cp25

0xa376,	// (0x00065211) list_double2_graphic_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double2_graphic_pane_cp2

0xa376,	// (0x00065211) list_double2_large_graphic_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double2_large_graphic_pane_cp2

0xa376,	// (0x00065211) list_double2_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double2_pane_cp2

0xa376,	// (0x00065211) list_double_graphic_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double_graphic_pane_cp2

0xa376,	// (0x00065211) list_double_large_graphic_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double_large_graphic_pane_cp2

0xa376,	// (0x00065211) list_double_number_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double_number_pane_cp2

0xa376,	// (0x00065211) list_double_pane_cp2_ParamLimits

0xa376,	// (0x00065211) list_double_pane_cp2

0xa385,	// (0x00065220) list_single_2graphic_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_2graphic_pane_cp2

0xa385,	// (0x00065220) list_single_graphic_heading_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_graphic_heading_pane_cp2

0xa385,	// (0x00065220) list_single_graphic_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_graphic_pane_cp2

0xa385,	// (0x00065220) list_single_heading_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_heading_pane_cp2

0x8833,	// (0x000636ce) list_single_large_graphic_pane_cp2_ParamLimits

0x8833,	// (0x000636ce) list_single_large_graphic_pane_cp2

0xa385,	// (0x00065220) list_single_number_heading_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_number_heading_pane_cp2

0xa385,	// (0x00065220) list_single_number_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_number_pane_cp2

0xa385,	// (0x00065220) list_single_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_pane_cp2

0x884d,	// (0x000636e8) bg_popup_sub_pane_cp22

0xf2cd,	// (0x0006a168) popup_side_volume_key_window_g1

0xf2d9,	// (0x0006a174) popup_side_volume_key_window_t1

0xa44d,	// (0x000652e8) volume_small_pane_cp1

0x8120,	// (0x00062fbb) bg_popup_sub_pane_cp24_ParamLimits

0x8120,	// (0x00062fbb) bg_popup_sub_pane_cp24

0x8863,	// (0x000636fe) fep_china_uni_candidate_pane_ParamLimits

0x8863,	// (0x000636fe) fep_china_uni_candidate_pane

0x8877,	// (0x00063712) fep_china_uni_entry_pane

0x8887,	// (0x00063722) popup_fep_china_uni_window_g1

0xa455,	// (0x000652f0) fep_china_uni_entry_pane_g1

0xa45d,	// (0x000652f8) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0006a5c2) fep_china_uni_entry_pane_g

0x88a3,	// (0x0006373e) fep_entry_item_pane

0x88ad,	// (0x00063748) fep_candidate_item_pane

0xa465,	// (0x00065300) fep_china_uni_candidate_pane_g1

0x88b5,	// (0x00063750) fep_china_uni_candidate_pane_g2

0x88bd,	// (0x00063758) fep_china_uni_candidate_pane_g3

0xa46d,	// (0x00065308) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0006a5c7) fep_china_uni_candidate_pane_g

0x7f9e,	// (0x00062e39) fep_entry_item_pane_g1

0xbb6b,	// (0x00066a06) fep_entry_item_pane_t1_ParamLimits

0xbb6b,	// (0x00066a06) fep_entry_item_pane_t1

0xbb81,	// (0x00066a1c) fep_candidate_item_pane_t1_ParamLimits

0xbb81,	// (0x00066a1c) fep_candidate_item_pane_t1

0xbb96,	// (0x00066a31) fep_candidate_item_pane_t2_ParamLimits

0xbb96,	// (0x00066a31) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0006a5d0) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0006a5d0) fep_candidate_item_pane_t

0x7ff6,	// (0x00062e91) list_highlight_pane_cp31_ParamLimits

0x7ff6,	// (0x00062e91) list_highlight_pane_cp31

0xbba8,	// (0x00066a43) level_1_signal_lsc

0xbbb1,	// (0x00066a4c) level_2_signal_lsc

0xbbba,	// (0x00066a55) level_3_signal_lsc

0xbbc3,	// (0x00066a5e) level_4_signal_lsc

0xbbcc,	// (0x00066a67) level_5_signal_lsc

0xbbd5,	// (0x00066a70) level_6_signal_lsc

0xbbde,	// (0x00066a79) level_7_signal_lsc

0xbbde,	// (0x00066a79) level_1_battery_lsc

0xbbe7,	// (0x00066a82) level_2_battery_lsc

0xbbf0,	// (0x00066a8b) level_3_battery_lsc

0xbbf9,	// (0x00066a94) level_4_battery_lsc

0xbc02,	// (0x00066a9d) level_5_battery_lsc

0xbc0b,	// (0x00066aa6) level_6_battery_lsc

0xbba8,	// (0x00066a43) level_7_battery_lsc

0xbc14,	// (0x00066aaf) scroll_handle_focus_pane_g1

0xbc1d,	// (0x00066ab8) scroll_handle_focus_pane_g2

0xbc26,	// (0x00066ac1) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0006a5d5) scroll_handle_focus_pane_g

0xa475,	// (0x00065310) list_single_2graphic_pane_g1_ParamLimits

0xa475,	// (0x00065310) list_single_2graphic_pane_g1

0x9b8e,	// (0x00064a29) list_single_2graphic_pane_g2_ParamLimits

0x9b8e,	// (0x00064a29) list_single_2graphic_pane_g2

0xde7c,	// (0x00068d17) list_single_2graphic_pane_g3_ParamLimits

0xde7c,	// (0x00068d17) list_single_2graphic_pane_g3

0xa481,	// (0x0006531c) list_single_2graphic_pane_g4_ParamLimits

0xa481,	// (0x0006531c) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0006a5dc) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0006a5dc) list_single_2graphic_pane_g

0xa48d,	// (0x00065328) list_single_2graphic_pane_t1_ParamLimits

0xa48d,	// (0x00065328) list_single_2graphic_pane_t1

0xa4bb,	// (0x00065356) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa4bb,	// (0x00065356) list_double2_graphic_large_graphic_pane_g1

0x9d5e,	// (0x00064bf9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9d5e,	// (0x00064bf9) list_double2_graphic_large_graphic_pane_g2

0x9cab,	// (0x00064b46) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9cab,	// (0x00064b46) list_double2_graphic_large_graphic_pane_g3

0xa4cd,	// (0x00065368) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa4cd,	// (0x00065368) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0006a5e5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0006a5e5) list_double2_graphic_large_graphic_pane_g

0xa4d9,	// (0x00065374) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa4d9,	// (0x00065374) list_double2_graphic_large_graphic_pane_t1

0xa4ef,	// (0x0006538a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa4ef,	// (0x0006538a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0006a5ee) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0006a5ee) list_double2_graphic_large_graphic_pane_t

0xa574,	// (0x0006540f) popup_fast_swap_window_ParamLimits

0xa574,	// (0x0006540f) popup_fast_swap_window

0xa590,	// (0x0006542b) popup_side_volume_key_window

0xe02c,	// (0x00068ec7) stacon_top_pane

0xe036,	// (0x00068ed1) status_pane_ParamLimits

0xe036,	// (0x00068ed1) status_pane

0xa5aa,	// (0x00065445) status_small_pane

0x7fa8,	// (0x00062e43) control_pane

0x7fa8,	// (0x00062e43) stacon_bottom_pane

0x8399,	// (0x00063234) scroll_pane_cp121

0x8390,	// (0x0006322b) set_content_pane

0xa501,	// (0x0006539c) bg_active_tab_pane_g1_cp1

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp1

0xa513,	// (0x000653ae) bg_active_tab_pane_g3_cp1

0xa501,	// (0x0006539c) bg_passive_tab_pane_g1_cp1

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp1

0xa513,	// (0x000653ae) bg_passive_tab_pane_g3_cp1

0xa51c,	// (0x000653b7) bg_active_tab_pane_g1_cp2

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp2

0xa525,	// (0x000653c0) bg_active_tab_pane_g3_cp2

0xa51c,	// (0x000653b7) bg_passive_tab_pane_g1_cp2

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp2

0xa525,	// (0x000653c0) bg_passive_tab_pane_g3_cp2

0xa52e,	// (0x000653c9) bg_active_tab_pane_g1_cp3

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp3

0xa537,	// (0x000653d2) bg_active_tab_pane_g3_cp3

0xa52e,	// (0x000653c9) bg_passive_tab_pane_g1_cp3

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp3

0xa537,	// (0x000653d2) bg_passive_tab_pane_g3_cp3

0xa540,	// (0x000653db) bg_active_tab_pane_g1_cp4

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp4

0xa54b,	// (0x000653e6) bg_active_tab_pane_g3_cp4

0xa540,	// (0x000653db) bg_passive_tab_pane_g1_cp4

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp4

0xa54b,	// (0x000653e6) bg_passive_tab_pane_g3_cp4

0xa556,	// (0x000653f1) bg_active_tab_pane_g1_cp5

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp5

0xa55f,	// (0x000653fa) bg_active_tab_pane_g3_cp5

0xa556,	// (0x000653f1) bg_passive_tab_pane_g1_cp5

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp5

0xa55f,	// (0x000653fa) bg_passive_tab_pane_g3_cp5

0x4254,	// (0x0005f0ef) list_set_graphic_pane_ParamLimits

0x4254,	// (0x0005f0ef) list_set_graphic_pane

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp4

0xdfbd,	// (0x00068e58) list_set_graphic_pane_g1_ParamLimits

0xdfbd,	// (0x00068e58) list_set_graphic_pane_g1

0xdfc9,	// (0x00068e64) list_set_graphic_pane_g2_ParamLimits

0xdfc9,	// (0x00068e64) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0006a5f3) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0006a5f3) list_set_graphic_pane_g

0x0009,

0xfad6,	// (0x0006a971) volume_small_pane_cp_g

0xa568,	// (0x00065403) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa568,	// (0x00065403) list_double2_large_graphic_pane_g1_cp2

0xdfeb,	// (0x00068e86) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xdfeb,	// (0x00068e86) list_double2_large_graphic_pane_g2_cp2

0xdffc,	// (0x00068e97) list_double2_large_graphic_pane_g3_cp2

0xe004,	// (0x00068e9f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xe004,	// (0x00068e9f) list_double2_large_graphic_pane_t1_cp2

0xe01a,	// (0x00068eb5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xe01a,	// (0x00068eb5) list_double2_large_graphic_pane_t2_cp2

0xc5b4,	// (0x0006744f) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xc5b4,	// (0x0006744f) list_double_large_graphic_pane_g1_cp2

0x364d,	// (0x0005e4e8) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x364d,	// (0x0005e4e8) list_double_large_graphic_pane_g2_cp2

0xe146,	// (0x00068fe1) list_double_large_graphic_pane_g3_cp2

0x365e,	// (0x0005e4f9) list_double_large_graphic_pane_g4_cp

0x3666,	// (0x0005e501) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x3666,	// (0x0005e501) list_double_large_graphic_pane_t1_cp2

0x367d,	// (0x0005e518) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x367d,	// (0x0005e518) list_double_large_graphic_pane_t2_cp2

0xe044,	// (0x00068edf) list_double2_graphic_pane_g1_cp2_ParamLimits

0xe044,	// (0x00068edf) list_double2_graphic_pane_g1_cp2

0xe052,	// (0x00068eed) list_double2_graphic_pane_g2_cp2_ParamLimits

0xe052,	// (0x00068eed) list_double2_graphic_pane_g2_cp2

0xe063,	// (0x00068efe) list_double2_graphic_pane_g3_cp2

0xe06d,	// (0x00068f08) list_double2_graphic_pane_t1_cp2_ParamLimits

0xe06d,	// (0x00068f08) list_double2_graphic_pane_t1_cp2

0xe083,	// (0x00068f1e) list_double2_graphic_pane_t2_cp2_ParamLimits

0xe083,	// (0x00068f1e) list_double2_graphic_pane_t2_cp2

0xbc2f,	// (0x00066aca) list_single_number_heading_pane_g1_cp2_ParamLimits

0xbc2f,	// (0x00066aca) list_single_number_heading_pane_g1_cp2

0xe095,	// (0x00068f30) list_single_number_heading_pane_g2_cp2

0xe09d,	// (0x00068f38) list_single_number_heading_pane_t1_cp2_ParamLimits

0xe09d,	// (0x00068f38) list_single_number_heading_pane_t1_cp2

0xe0b3,	// (0x00068f4e) list_single_number_heading_pane_t2_cp2_ParamLimits

0xe0b3,	// (0x00068f4e) list_single_number_heading_pane_t2_cp2

0xe0c5,	// (0x00068f60) list_single_number_heading_pane_t3_cp2_ParamLimits

0xe0c5,	// (0x00068f60) list_single_number_heading_pane_t3_cp2

0xbc2f,	// (0x00066aca) list_single_heading_pane_g1_cp2_ParamLimits

0xbc2f,	// (0x00066aca) list_single_heading_pane_g1_cp2

0xe095,	// (0x00068f30) list_single_heading_pane_g2_cp2

0xe09d,	// (0x00068f38) list_single_heading_pane_t1_cp2_ParamLimits

0xe09d,	// (0x00068f38) list_single_heading_pane_t1_cp2

0x3446,	// (0x0005e2e1) list_single_heading_pane_t2_cp2_ParamLimits

0x3446,	// (0x0005e2e1) list_single_heading_pane_t2_cp2

0x338e,	// (0x0005e229) list_double_graphic_pane_g1_cp2_ParamLimits

0x338e,	// (0x0005e229) list_double_graphic_pane_g1_cp2

0x339a,	// (0x0005e235) list_double_graphic_pane_g2_cp2_ParamLimits

0x339a,	// (0x0005e235) list_double_graphic_pane_g2_cp2

0x33a9,	// (0x0005e244) list_double_graphic_pane_g3_cp2

0x33b1,	// (0x0005e24c) list_double_graphic_pane_t1_cp2_ParamLimits

0x33b1,	// (0x0005e24c) list_double_graphic_pane_t1_cp2

0x33c7,	// (0x0005e262) list_double_graphic_pane_t2_cp2_ParamLimits

0x33c7,	// (0x0005e262) list_double_graphic_pane_t2_cp2

0xe13a,	// (0x00068fd5) list_double_number_pane_g1_cp2_ParamLimits

0xe13a,	// (0x00068fd5) list_double_number_pane_g1_cp2

0xe146,	// (0x00068fe1) list_double_number_pane_g2_cp2

0x3352,	// (0x0005e1ed) list_double_number_pane_t1_cp2_ParamLimits

0x3352,	// (0x0005e1ed) list_double_number_pane_t1_cp2

0x3366,	// (0x0005e201) list_double_number_pane_t2_cp2_ParamLimits

0x3366,	// (0x0005e201) list_double_number_pane_t2_cp2

0x337c,	// (0x0005e217) list_double_number_pane_t3_cp2_ParamLimits

0x337c,	// (0x0005e217) list_double_number_pane_t3_cp2

0x323b,	// (0x0005e0d6) list_single_graphic_pane_g1_cp2_ParamLimits

0x323b,	// (0x0005e0d6) list_single_graphic_pane_g1_cp2

0xe196,	// (0x00069031) list_single_graphic_pane_g2_cp2_ParamLimits

0xe196,	// (0x00069031) list_single_graphic_pane_g2_cp2

0xe1a2,	// (0x0006903d) list_single_graphic_pane_g3_cp2

0x3211,	// (0x0005e0ac) list_single_graphic_pane_t1_cp2_ParamLimits

0x3211,	// (0x0005e0ac) list_single_graphic_pane_t1_cp2

0xe196,	// (0x00069031) list_single_number_pane_g1_cp2_ParamLimits

0xe196,	// (0x00069031) list_single_number_pane_g1_cp2

0xe1a2,	// (0x0006903d) list_single_number_pane_g2_cp2

0x3211,	// (0x0005e0ac) list_single_number_pane_t1_cp2_ParamLimits

0x3211,	// (0x0005e0ac) list_single_number_pane_t1_cp2

0x3227,	// (0x0005e0c2) list_single_number_pane_t2_cp2_ParamLimits

0x3227,	// (0x0005e0c2) list_single_number_pane_t2_cp2

0xdfeb,	// (0x00068e86) list_double2_pane_g1_cp2_ParamLimits

0xdfeb,	// (0x00068e86) list_double2_pane_g1_cp2

0xdffc,	// (0x00068e97) list_double2_pane_g2_cp2

0xe112,	// (0x00068fad) list_double2_pane_t1_cp2_ParamLimits

0xe112,	// (0x00068fad) list_double2_pane_t1_cp2

0xe128,	// (0x00068fc3) list_double2_pane_t2_cp2_ParamLimits

0xe128,	// (0x00068fc3) list_double2_pane_t2_cp2

0xe13a,	// (0x00068fd5) list_double_pane_g1_cp2_ParamLimits

0xe13a,	// (0x00068fd5) list_double_pane_g1_cp2

0xe146,	// (0x00068fe1) list_double_pane_g2_cp2

0xe14e,	// (0x00068fe9) list_double_pane_t1_cp2_ParamLimits

0xe14e,	// (0x00068fe9) list_double_pane_t1_cp2

0xe164,	// (0x00068fff) list_double_pane_t2_cp2_ParamLimits

0xe164,	// (0x00068fff) list_double_pane_t2_cp2

0xa5b5,	// (0x00065450) list_single_pane_cp2_g3

0xe196,	// (0x00069031) list_single_pane_g1_cp2_ParamLimits

0xe196,	// (0x00069031) list_single_pane_g1_cp2

0xe1a2,	// (0x0006903d) list_single_pane_g2_cp2

0xe1aa,	// (0x00069045) list_single_pane_t1_cp2_ParamLimits

0xe1aa,	// (0x00069045) list_single_pane_t1_cp2

0xa5bd,	// (0x00065458) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa5bd,	// (0x00065458) list_single_large_graphic_pane_g1_cp2

0xf428,	// (0x0006a2c3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf428,	// (0x0006a2c3) list_single_large_graphic_pane_g2_cp2

0xf434,	// (0x0006a2cf) list_single_large_graphic_pane_g3_cp2

0xa5c9,	// (0x00065464) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa5c9,	// (0x00065464) list_single_large_graphic_pane_g4_cp1

0xf43c,	// (0x0006a2d7) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf43c,	// (0x0006a2d7) list_single_large_graphic_pane_t1_cp2

0x31dd,	// (0x0005e078) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x31dd,	// (0x0005e078) list_single_graphic_heading_pane_g1_cp2

0x31aa,	// (0x0005e045) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x31aa,	// (0x0005e045) list_single_graphic_heading_pane_g4_cp2

0xe1a2,	// (0x0006903d) list_single_graphic_heading_pane_g5_cp2

0x31e9,	// (0x0005e084) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x31e9,	// (0x0005e084) list_single_graphic_heading_pane_t1_cp2

0x31ff,	// (0x0005e09a) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x31ff,	// (0x0005e09a) list_single_graphic_heading_pane_t2_cp2

0x319e,	// (0x0005e039) list_single_2graphic_pane_g1_cp2_ParamLimits

0x319e,	// (0x0005e039) list_single_2graphic_pane_g1_cp2

0x31aa,	// (0x0005e045) list_single_2graphic_pane_g2_cp2_ParamLimits

0x31aa,	// (0x0005e045) list_single_2graphic_pane_g2_cp2

0xe1a2,	// (0x0006903d) list_single_2graphic_pane_g3_cp2

0x31bb,	// (0x0005e056) list_single_2graphic_pane_g4_cp2_ParamLimits

0x31bb,	// (0x0005e056) list_single_2graphic_pane_g4_cp2

0x31c7,	// (0x0005e062) list_single_2graphic_pane_t1_cp2_ParamLimits

0x31c7,	// (0x0005e062) list_single_2graphic_pane_t1_cp2

0x7f9e,	// (0x00062e39) list_highlight_pane_g10_cp1

0x2d86,	// (0x0005dc21) list_highlight_pane_g1_cp1

0x2d8e,	// (0x0005dc29) list_highlight_pane_g2_cp1

0x2d96,	// (0x0005dc31) list_highlight_pane_g3_cp1

0x2d9e,	// (0x0005dc39) list_highlight_pane_g4_cp1

0x2da6,	// (0x0005dc41) list_highlight_pane_g5_cp1

0x2dae,	// (0x0005dc49) list_highlight_pane_g6_cp1

0x2db6,	// (0x0005dc51) list_highlight_pane_g7_cp1

0x2dbe,	// (0x0005dc59) list_highlight_pane_g8_cp1

0x2dc6,	// (0x0005dc61) list_highlight_pane_g9_cp1

0xc349,	// (0x000671e4) form_field_slider_pane_t3

0xc357,	// (0x000671f2) form_field_slider_pane_t4

0x2cca,	// (0x0005db65) slider_form_pane_ParamLimits

0x2cca,	// (0x0005db65) slider_form_pane

0x7fa8,	// (0x00062e43) control_abbreviations

0x7fa8,	// (0x00062e43) control_conventions

0x7fa8,	// (0x00062e43) control_definitions

0x7fa8,	// (0x00062e43) format_table_attribute

0xc58b,	// (0x00067426) bg_popup_preview_window_pane_g9

0x7fa8,	// (0x00062e43) format_table_data2

0x7fa8,	// (0x00062e43) format_table_data3

0x7fa8,	// (0x00062e43) format_table_data_example

0x0008,

0x7fa8,	// (0x00062e43) intro_purpose

0xf8ef,	// (0x0006a78a) bg_popup_preview_window_pane_g

0x7fa8,	// (0x00062e43) texts_category

0x7fa8,	// (0x00062e43) texts_graphics

0xf452,	// (0x0006a2ed) text_digital

0xf461,	// (0x0006a2fc) text_primary

0xf470,	// (0x0006a30b) text_primary_small

0xf47f,	// (0x0006a31a) text_secondary

0xf48e,	// (0x0006a329) text_title

0xc905,	// (0x000677a0) bg_passive_tab_pane_g1_cp3_srt

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp3_srt

0xc90e,	// (0x000677a9) bg_passive_tab_pane_g3_cp3_srt

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp3_srt_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp3_srt

0xc917,	// (0x000677b2) tabs_4_active_pane_srt_g1

0xc91f,	// (0x000677ba) tabs_4_active_pane_srt_t1_ParamLimits

0xc91f,	// (0x000677ba) tabs_4_active_pane_srt_t1

0xc905,	// (0x000677a0) bg_active_tab_pane_g1_cp3_copy1

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp3_copy1

0xc90e,	// (0x000677a9) bg_active_tab_pane_g3_cp3_copy1

0x7ff6,	// (0x00062e91) tabs_2_long_active_pane_srt_ParamLimits

0x7ff6,	// (0x00062e91) tabs_2_long_active_pane_srt

0x7ff6,	// (0x00062e91) tabs_2_long_passive_pane_srt_ParamLimits

0x7ff6,	// (0x00062e91) tabs_2_long_passive_pane_srt

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp4_srt

0xc6a5,	// (0x00067540) bg_passive_tab_pane_g1_cp4_srt

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp4_srt

0xc6ae,	// (0x00067549) bg_passive_tab_pane_g3_cp4_srt

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp4_srt_ParamLimits

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp4_srt

0xc6b7,	// (0x00067552) tabs_2_long_active_pane_srt_t1_ParamLimits

0xc6b7,	// (0x00067552) tabs_2_long_active_pane_srt_t1

0xc6a5,	// (0x00067540) bg_active_tab_pane_g1_cp4_srt

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp4_srt

0xc6ae,	// (0x00067549) bg_active_tab_pane_g3_cp4_srt

0x8120,	// (0x00062fbb) tabs_3_long_active_pane_srt_ParamLimits

0x8120,	// (0x00062fbb) tabs_3_long_active_pane_srt

0x8120,	// (0x00062fbb) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x8120,	// (0x00062fbb) tabs_3_long_passive_pane_cp_srt

0x8120,	// (0x00062fbb) tabs_3_long_passive_pane_srt_ParamLimits

0x8120,	// (0x00062fbb) tabs_3_long_passive_pane_srt

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp5_srt

0xa556,	// (0x000653f1) bg_passive_tab_pane_g1_cp5_srt

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp5_srt

0xa55f,	// (0x000653fa) bg_passive_tab_pane_g3_cp5_srt

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp5_srt_ParamLimits

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp5_srt

0xc68f,	// (0x0006752a) tabs_3_long_active_pane_srt_t1_ParamLimits

0xc68f,	// (0x0006752a) tabs_3_long_active_pane_srt_t1

0xa556,	// (0x000653f1) bg_active_tab_pane_g1_cp5_srt

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp5_srt

0xa55f,	// (0x000653fa) bg_active_tab_pane_g3_cp5_srt

0x389e,	// (0x0005e739) navi_text_pane_srt_t1

0x3896,	// (0x0005e731) navi_icon_pane_srt_g1

0x1ed2,	// (0x0005cd6d) midp_editing_number_pane_srt

0xf49d,	// (0x0006a338) midp_ticker_pane_srt

0x1eda,	// (0x0005cd75) midp_ticker_pane_srt_g1

0x1ee2,	// (0x0005cd7d) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0006a612) midp_ticker_pane_srt_g

0x1eea,	// (0x0005cd85) midp_ticker_pane_srt_t1

0x3887,	// (0x0005e722) midp_editing_number_pane_t1_copy1

0x2056,	// (0x0005cef1) listscroll_midp_pane

0x2056,	// (0x0005cef1) midp_form_pane

0xa642,	// (0x000654dd) midp_info_popup_window_ParamLimits

0xa642,	// (0x000654dd) midp_info_popup_window

0x8462,	// (0x000632fd) bg_popup_sub_pane_cp50_ParamLimits

0x8462,	// (0x000632fd) bg_popup_sub_pane_cp50

0x29ce,	// (0x0005d869) listscroll_midp_info_pane_ParamLimits

0x29ce,	// (0x0005d869) listscroll_midp_info_pane

0x29b6,	// (0x0005d851) listscroll_form_midp_pane_ParamLimits

0x29b6,	// (0x0005d851) listscroll_form_midp_pane

0x29c2,	// (0x0005d85d) scroll_bar_cp050

0xc225,	// (0x000670c0) list_midp_pane

0xcaab,	// (0x00067946) signal_pane_g2_cp

0x28d0,	// (0x0005d76b) listscroll_midp_info_pane_t1_ParamLimits

0x28d0,	// (0x0005d76b) listscroll_midp_info_pane_t1

0xc177,	// (0x00067012) listscroll_midp_info_pane_t2_ParamLimits

0xc177,	// (0x00067012) listscroll_midp_info_pane_t2

0xc1b5,	// (0x00067050) listscroll_midp_info_pane_t3_ParamLimits

0xc1b5,	// (0x00067050) listscroll_midp_info_pane_t3

0xc1ef,	// (0x0006708a) listscroll_midp_info_pane_t4_ParamLimits

0xc1ef,	// (0x0006708a) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0006a6c5) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0006a6c5) listscroll_midp_info_pane_t

0x84d8,	// (0x00063373) scroll_pane_cp21

0x2870,	// (0x0005d70b) form_midp_field_choice_group_pane

0xc13a,	// (0x00066fd5) form_midp_field_text_pane

0x28b6,	// (0x0005d751) form_midp_field_time_pane

0x28be,	// (0x0005d759) form_midp_gauge_slider_pane

0x28c7,	// (0x0005d762) form_midp_gauge_wait_pane

0x7fa8,	// (0x00062e43) form_midp_image_pane

0xb159,	// (0x00065ff4) list_single_midp_pane_ParamLimits

0xb159,	// (0x00065ff4) list_single_midp_pane

0xc118,	// (0x00066fb3) form_midp_field_text_pane_t1

0x25ef,	// (0x0005d48a) input_focus_pane_cp050

0x285f,	// (0x0005d6fa) list_midp_form_text_pane

0x27f4,	// (0x0005d68f) form_midp_field_choice_group_pane_t1

0x2802,	// (0x0005d69d) input_focus_pane_cp051

0x2816,	// (0x0005d6b1) list_midp_choice_pane

0x7fa8,	// (0x00062e43) status_idle_pane

0x27d8,	// (0x0005d673) form_midp_field_time_pane_t1

0x7f9e,	// (0x00062e39) wait_anim_pane_g2_copy1

0x27e6,	// (0x0005d681) form_midp_field_time_pane_t2

0x0001,

0x1e3a,	// (0x0005ccd5) aid_navinavi_width_2_pane

0xf825,	// (0x0006a6c0) form_midp_field_time_pane_t

0x7fa8,	// (0x00062e43) input_focus_pane_cp052

0x7fa8,	// (0x00062e43) bg_input_focus_pane_cp040

0x2798,	// (0x0005d633) form_midp_gauge_slider_pane_t1

0x27a6,	// (0x0005d641) form_midp_gauge_slider_pane_t2

0xc0fc,	// (0x00066f97) form_midp_gauge_slider_pane_t3

0xc10a,	// (0x00066fa5) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0006a6b7) form_midp_gauge_slider_pane_t

0x27d0,	// (0x0005d66b) form_midp_slider_pane

0x7ff6,	// (0x00062e91) bg_input_focus_pane_cp041_ParamLimits

0x7ff6,	// (0x00062e91) bg_input_focus_pane_cp041

0x2765,	// (0x0005d600) form_midp_gauge_wait_pane_t1_ParamLimits

0x2765,	// (0x0005d600) form_midp_gauge_wait_pane_t1

0x2777,	// (0x0005d612) form_midp_gauge_wait_pane_t2_ParamLimits

0x2777,	// (0x0005d612) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0006a6b2) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0006a6b2) form_midp_gauge_wait_pane_t

0x2789,	// (0x0005d624) form_midp_wait_pane_ParamLimits

0x2789,	// (0x0005d624) form_midp_wait_pane

0xc0c6,	// (0x00066f61) form_midp_image_pane_g1

0xc0cf,	// (0x00066f6a) form_midp_image_pane_t1

0xc0de,	// (0x00066f79) form_midp_image_pane_t2

0xc0ed,	// (0x00066f88) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0006a6ab) form_midp_image_pane_t

0x2726,	// (0x0005d5c1) list_single_midp_pane_g1

0xe2fc,	// (0x00069197) list_single_midp_pane_t1

0xc0b0,	// (0x00066f4b) list_midp_form_item_pane_ParamLimits

0xc0b0,	// (0x00066f4b) list_midp_form_item_pane

0x1de2,	// (0x0005cc7d) list_midp_form_item_pane_t1

0x1df1,	// (0x0005cc8c) midp_ticker_pane_g1

0x1dfd,	// (0x0005cc98) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0006a5f8) midp_ticker_pane_g

0x1e09,	// (0x0005cca4) midp_ticker_pane_t1

0x3ad8,	// (0x0005e973) midp_editing_number_pane_t1

0x3ab6,	// (0x0005e951) midp_editing_number_pane

0x3ac5,	// (0x0005e960) midp_ticker_pane

0x3877,	// (0x0005e712) ai_message_heading_pane

0x7fa8,	// (0x00062e43) bg_popup_window_pane_cp14

0x387f,	// (0x0005e71a) listscroll_ai_message_pane

0x3801,	// (0x0005e69c) ai_message_heading_pane_g1_ParamLimits

0x3801,	// (0x0005e69c) ai_message_heading_pane_g1

0xc657,	// (0x000674f2) ai_message_heading_pane_g2_ParamLimits

0xc657,	// (0x000674f2) ai_message_heading_pane_g2

0x3819,	// (0x0005e6b4) ai_message_heading_pane_g3_ParamLimits

0x3819,	// (0x0005e6b4) ai_message_heading_pane_g3

0x3825,	// (0x0005e6c0) ai_message_heading_pane_g4_ParamLimits

0x3825,	// (0x0005e6c0) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0006a7ec) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0006a7ec) ai_message_heading_pane_g

0xc663,	// (0x000674fe) ai_message_heading_pane_t1_ParamLimits

0xc663,	// (0x000674fe) ai_message_heading_pane_t1

0xc67d,	// (0x00067518) ai_message_heading_pane_t2_ParamLimits

0xc67d,	// (0x00067518) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0006a7f5) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0006a7f5) ai_message_heading_pane_t

0x385d,	// (0x0005e6f8) bg_popup_heading_pane_cp1_ParamLimits

0x385d,	// (0x0005e6f8) bg_popup_heading_pane_cp1

0x37ef,	// (0x0005e68a) list_ai_message_pane_ParamLimits

0x37ef,	// (0x0005e68a) list_ai_message_pane

0x84d8,	// (0x00063373) scroll_pane_cp10

0x378b,	// (0x0005e626) list_ai_message_pane_g1

0x3793,	// (0x0005e62e) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0006a7c9) list_ai_message_pane_g

0x379b,	// (0x0005e636) list_ai_message_pane_t1_ParamLimits

0x379b,	// (0x0005e636) list_ai_message_pane_t1

0x37b0,	// (0x0005e64b) list_ai_message_pane_t2_ParamLimits

0x37b0,	// (0x0005e64b) list_ai_message_pane_t2

0x37c5,	// (0x0005e660) list_ai_message_pane_t3_ParamLimits

0x37c5,	// (0x0005e660) list_ai_message_pane_t3

0x37da,	// (0x0005e675) list_ai_message_pane_t4_ParamLimits

0x37da,	// (0x0005e675) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0006a7ce) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0006a7ce) list_ai_message_pane_t

0xc633,	// (0x000674ce) cell_ai_soft_ind_pane_ParamLimits

0xc633,	// (0x000674ce) cell_ai_soft_ind_pane

0x1e1b,	// (0x0005ccb6) cell_ai_soft_ind_pane_g1_ParamLimits

0x1e1b,	// (0x0005ccb6) cell_ai_soft_ind_pane_g1

0x7fa8,	// (0x00062e43) grid_highlight_cp1

0x1e28,	// (0x0005ccc3) text_secondary_cp56_ParamLimits

0x1e28,	// (0x0005ccc3) text_secondary_cp56

0x374b,	// (0x0005e5e6) example_general_pane_ParamLimits

0x374b,	// (0x0005e5e6) example_general_pane

0x3757,	// (0x0005e5f2) example_parent_pane_g1_ParamLimits

0x3757,	// (0x0005e5f2) example_parent_pane_g1

0x3763,	// (0x0005e5fe) example_parent_pane_t1_ParamLimits

0x3763,	// (0x0005e5fe) example_parent_pane_t1

0xad52,	// (0x00065bed) popup_preview_text_window_ParamLimits

0xad52,	// (0x00065bed) popup_preview_text_window

0xe18e,	// (0x00069029) list_single_pane_cp2_g4

0x81d6,	// (0x00063071) bg_popup_preview_window_pane_ParamLimits

0x81d6,	// (0x00063071) bg_popup_preview_window_pane

0xc593,	// (0x0006742e) popup_preview_text_window_t1_ParamLimits

0xc593,	// (0x0006742e) popup_preview_text_window_t1

0x34b6,	// (0x0005e351) popup_preview_text_window_t2_ParamLimits

0x34b6,	// (0x0005e351) popup_preview_text_window_t2

0x34ff,	// (0x0005e39a) popup_preview_text_window_t3_ParamLimits

0x34ff,	// (0x0005e39a) popup_preview_text_window_t3

0x3544,	// (0x0005e3df) popup_preview_text_window_t4_ParamLimits

0x3544,	// (0x0005e3df) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0006a79d) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0006a79d) popup_preview_text_window_t

0x35c2,	// (0x0005e45d) scroll_pane_cp11

0x2563,	// (0x0005d3fe) bg_popup_preview_window_pane_g1

0xc553,	// (0x000673ee) bg_popup_preview_window_pane_g2

0xc55b,	// (0x000673f6) bg_popup_preview_window_pane_g3

0xc563,	// (0x000673fe) bg_popup_preview_window_pane_g4

0xc56b,	// (0x00067406) bg_popup_preview_window_pane_g5

0xc573,	// (0x0006740e) bg_popup_preview_window_pane_g6

0xc57b,	// (0x00067416) bg_popup_preview_window_pane_g7

0xc583,	// (0x0006741e) bg_popup_preview_window_pane_g8

0xdcea,	// (0x00068b85) aid_popup_width_pane

0xacce,	// (0x00065b69) popup_midp_note_alarm_window_ParamLimits

0xacce,	// (0x00065b69) popup_midp_note_alarm_window

0x83aa,	// (0x00063245) data_form_pane_ParamLimits

0x9fca,	// (0x00064e65) form_field_data_pane_g1

0x9fd4,	// (0x00064e6f) form_field_data_pane_t1_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_ParamLimits

0x9fee,	// (0x00064e89) data_form_wide_pane_ParamLimits

0xdf3c,	// (0x00068dd7) form_field_data_wide_pane_g1

0x9fff,	// (0x00064e9a) form_field_data_wide_pane_t1_ParamLimits

0x82aa,	// (0x00063145) input_focus_pane_cp6_ParamLimits

0xa15e,	// (0x00064ff9) input_popup_find_pane_g1_ParamLimits

0xa15e,	// (0x00064ff9) input_popup_find_pane_g1

0xf1a8,	// (0x0006a043) aid_navi_side_left_pane

0xf1bd,	// (0x0006a058) aid_navi_side_right_pane

0x2e81,	// (0x0005dd1c) bg_popup_window_pane_cp30_ParamLimits

0x2e81,	// (0x0005dd1c) bg_popup_window_pane_cp30

0x2efb,	// (0x0005dd96) popup_midp_note_alarm_window_g1_ParamLimits

0x2efb,	// (0x0005dd96) popup_midp_note_alarm_window_g1

0x2f2b,	// (0x0005ddc6) popup_midp_note_alarm_window_t1_ParamLimits

0x2f2b,	// (0x0005ddc6) popup_midp_note_alarm_window_t1

0xc39c,	// (0x00067237) popup_midp_note_alarm_window_t2_ParamLimits

0xc39c,	// (0x00067237) popup_midp_note_alarm_window_t2

0xc44a,	// (0x000672e5) popup_midp_note_alarm_window_t3_ParamLimits

0xc44a,	// (0x000672e5) popup_midp_note_alarm_window_t3

0xc472,	// (0x0006730d) popup_midp_note_alarm_window_t4_ParamLimits

0xc472,	// (0x0006730d) popup_midp_note_alarm_window_t4

0x30c2,	// (0x0005df5d) popup_midp_note_alarm_window_t5_ParamLimits

0x30c2,	// (0x0005df5d) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0006a73a) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0006a73a) popup_midp_note_alarm_window_t

0x316e,	// (0x0005e009) wait_bar_pane_cp1_ParamLimits

0x316e,	// (0x0005e009) wait_bar_pane_cp1

0x7fa8,	// (0x00062e43) wait_anim_pane_copy1

0x7fa8,	// (0x00062e43) wait_border_pane_copy1

0x2b77,	// (0x0005da12) wait_border_pane_g1_copy1

0xdf48,	// (0x00068de3) form_field_popup_pane_g1

0xa019,	// (0x00064eb4) form_field_popup_pane_t1_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_cp7_ParamLimits

0x83e4,	// (0x0006327f) list_form_pane_ParamLimits

0xdf50,	// (0x00068deb) form_field_popup_wide_pane_g1

0xdf58,	// (0x00068df3) form_field_popup_wide_pane_t1_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_cp8_ParamLimits

0x83f0,	// (0x0006328b) list_form_wide_pane_ParamLimits

0x3cc7,	// (0x0005eb62) aid_size_cell_graphic_pane

0xa098,	// (0x00064f33) data_form_pane_t1_ParamLimits

0xb233,	// (0x000660ce) data_form_wide_pane_t1_ParamLimits

0xbd1f,	// (0x00066bba) bg_status_flat_pane

0x9511,	// (0x000643ac) title_pane_t1_ParamLimits

0x7fbe,	// (0x00062e59) title_pane_t2_ParamLimits

0x7fe4,	// (0x00062e7f) title_pane_t3_ParamLimits

0xf557,	// (0x0006a3f2) title_pane_t_ParamLimits

0x8781,	// (0x0006361c) level_1_signal_ParamLimits

0x878e,	// (0x00063629) level_2_signal_ParamLimits

0x879b,	// (0x00063636) level_3_signal_ParamLimits

0x87a8,	// (0x00063643) level_4_signal_ParamLimits

0x87b5,	// (0x00063650) level_5_signal_ParamLimits

0x87c2,	// (0x0006365d) level_6_signal_ParamLimits

0x87cf,	// (0x0006366a) level_7_signal_ParamLimits

0x8781,	// (0x0006361c) level_1_battery_ParamLimits

0x878e,	// (0x00063629) level_2_battery_ParamLimits

0x879b,	// (0x00063636) level_3_battery_ParamLimits

0x87a8,	// (0x00063643) level_4_battery_ParamLimits

0x87b5,	// (0x00063650) level_5_battery_ParamLimits

0x87c2,	// (0x0006365d) level_6_battery_ParamLimits

0x87cf,	// (0x0006366a) level_7_battery_ParamLimits

0x2d86,	// (0x0005dc21) bg_status_flat_pane_g1

0x2d8e,	// (0x0005dc29) bg_status_flat_pane_g2

0x2d96,	// (0x0005dc31) bg_status_flat_pane_g3

0x2d9e,	// (0x0005dc39) bg_status_flat_pane_g4

0x2da6,	// (0x0005dc41) bg_status_flat_pane_g5

0x2dae,	// (0x0005dc49) bg_status_flat_pane_g6

0x2db6,	// (0x0005dc51) bg_status_flat_pane_g7

0x95a5,	// (0x00064440) tabs_3_active_pane_t1_ParamLimits

0x95a5,	// (0x00064440) tabs_3_passive_pane_t1_ParamLimits

0x95bf,	// (0x0006445a) tabs_4_active_pane_t1_ParamLimits

0x95bf,	// (0x0006445a) tabs_4_1_passive_pane_t1_ParamLimits

0xa19d,	// (0x00065038) tabs_2_active_pane_t1_ParamLimits

0xa19d,	// (0x00065038) tabs_2_passive_pane_t1_ParamLimits

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp4_ParamLimits

0xa1af,	// (0x0006504a) tabs_2_long_active_pane_t1_ParamLimits

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp4_ParamLimits

0x0769,	// (0x0005b604) list_single_midp_graphic_pane_t1_ParamLimits

0x7ff6,	// (0x00062e91) bg_active_tab_pane_cp5_ParamLimits

0xa1c2,	// (0x0006505d) tabs_3_long_active_pane_t1_ParamLimits

0x2056,	// (0x0005cef1) bg_passive_tab_pane_cp5_ParamLimits

0x0769,	// (0x0005b604) list_single_midp_graphic_pane_t1

0xbd1f,	// (0x00066bba) bg_status_flat_pane_ParamLimits

0x21f6,	// (0x0005d091) indicator_pane_cp2_ParamLimits

0x21f6,	// (0x0005d091) indicator_pane_cp2

0xbe9d,	// (0x00066d38) navi_pane_srt_ParamLimits

0xbe9d,	// (0x00066d38) navi_pane_srt

0x2345,	// (0x0005d1e0) popup_clock_digital_analogue_window_cp1

0x803a,	// (0x00062ed5) indicator_pane_t1

0xf49d,	// (0x0006a338) copy_highlight_pane

0xf49d,	// (0x0006a338) cursor_graphics_pane

0xf49d,	// (0x0006a338) graphic_within_text_pane

0xf49d,	// (0x0006a338) link_highlight_pane

0x3585,	// (0x0005e420) popup_preview_text_window_t5_ParamLimits

0x3585,	// (0x0005e420) popup_preview_text_window_t5

0x1e42,	// (0x0005ccdd) cursor_digital_pane

0x1e42,	// (0x0005ccdd) cursor_primary_pane

0x1e53,	// (0x0005ccee) cursor_primary_small_pane

0x1e5b,	// (0x0005ccf6) cursor_secondary_pane

0x1e63,	// (0x0005ccfe) cursor_title_pane

0x1e42,	// (0x0005ccdd) link_highlight_digital_pane

0x1e4a,	// (0x0005cce5) link_highlight_primary_pane

0x1e53,	// (0x0005ccee) link_highlight_primary_small_pane

0x1e5b,	// (0x0005ccf6) link_highlight_secondary_pane

0x1e63,	// (0x0005ccfe) link_highlight_title_pane

0x1e42,	// (0x0005ccdd) copy_highlight_digital_pane

0x1e42,	// (0x0005ccdd) copy_highlight_primary_pane

0x1e53,	// (0x0005ccee) copy_highlight_primary_small_pane

0x1e5b,	// (0x0005ccf6) copy_highlight_secondary_pane

0x1e63,	// (0x0005ccfe) copy_highlight_title_pane

0x1e5b,	// (0x0005ccf6) graphic_text_digital_pane

0x2e24,	// (0x0005dcbf) graphic_text_primary_pane

0x2e2d,	// (0x0005dcc8) graphic_text_primary_small_pane

0x1e53,	// (0x0005ccee) graphic_text_secondary_pane

0x1e42,	// (0x0005ccdd) graphic_text_title_pane

0xa693,	// (0x0006552e) cursor_primary_pane_g1

0x2e16,	// (0x0005dcb1) cursor_text_primary_t1

0xc392,	// (0x0006722d) cursor_primary_small_pane_g1

0x2e08,	// (0x0005dca3) cursor_text_primary_small_t1

0xc388,	// (0x00067223) cursor_primary_small_pane_g1_copy1

0x2df0,	// (0x0005dc8b) cursor_text_primary_small_t1_copy1

0x2dce,	// (0x0005dc69) cursor_text_title_t1

0xc37e,	// (0x00067219) cursor_title_pane_g1

0xa693,	// (0x0006552e) cursor_digital_pane_g1

0x1e75,	// (0x0005cd10) cursor_text_digital_t1

0x1e83,	// (0x0005cd1e) link_highlight_primary_pane_g1

0x2d77,	// (0x0005dc12) link_highlight_primary_pane_t1

0x1e83,	// (0x0005cd1e) link_highlight_primary_small_pane_g1

0x1e8b,	// (0x0005cd26) link_highlight_primary_small_pane_t1

0x1e83,	// (0x0005cd1e) link_highlight_secondary_pane_g1

0x1e9a,	// (0x0005cd35) link_highlight_secondary_pane_t1

0x2cdc,	// (0x0005db77) link_highlight_title_pane_g1

0x2cf3,	// (0x0005db8e) link_highlight_title_pane_t1

0x2cdc,	// (0x0005db77) link_highlight_digital_pane_g1

0x2ce4,	// (0x0005db7f) link_highlight_digital_pane_t1

0x2b96,	// (0x0005da31) copy_highlight_primary_pane_g1

0x2bbc,	// (0x0005da57) copy_highlight_primary_pane_t1

0x2b96,	// (0x0005da31) copy_highlight_primary_small_pane_g1

0x2bad,	// (0x0005da48) copy_highlight_primary_small_pane_t1

0x1ea9,	// (0x0005cd44) copy_highlight_secondary_pane_g1

0x1eb1,	// (0x0005cd4c) copy_highlight_secondary_pane_t1

0x2b96,	// (0x0005da31) copy_highlight_title_pane_g1

0x2b9e,	// (0x0005da39) copy_highlight_title_pane_t1

0x2b96,	// (0x0005da31) copy_highlight_digital_pane_g1

0x3ff8,	// (0x0005ee93) copy_highlight_digital_pane_t1

0x3f4c,	// (0x0005ede7) graphic_text_primary_pane_g1

0x3fdc,	// (0x0005ee77) graphic_text_primary_pane_t1

0x3fea,	// (0x0005ee85) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0006a869) graphic_text_primary_pane_t

0x3fb8,	// (0x0005ee53) graphic_text_primary_small_pane_g1

0x3fc0,	// (0x0005ee5b) graphic_text_primary_small_pane_t1

0x3fce,	// (0x0005ee69) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0006a864) graphic_text_primary_small_pane_t

0x3f94,	// (0x0005ee2f) graphic_text_secondary_pane_g1

0x3f9c,	// (0x0005ee37) graphic_text_secondary_pane_t1

0x3faa,	// (0x0005ee45) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0006a85f) graphic_text_secondary_pane_t

0x3f70,	// (0x0005ee0b) graphic_text_title_pane_g1

0x3f78,	// (0x0005ee13) graphic_text_title_pane_t1

0x3f86,	// (0x0005ee21) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0006a85a) graphic_text_title_pane_t

0x3f4c,	// (0x0005ede7) graphic_text_digital_pane_g1

0x3f54,	// (0x0005edef) graphic_text_digital_pane_t1

0x3f62,	// (0x0005edfd) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0006a855) graphic_text_digital_pane_t

0x7ff6,	// (0x00062e91) navi_icon_pane_srt_ParamLimits

0x7ff6,	// (0x00062e91) navi_icon_pane_srt

0x7fa8,	// (0x00062e43) navi_midp_pane_srt

0x7fa8,	// (0x00062e43) navi_navi_pane_srt

0x7ff6,	// (0x00062e91) navi_text_pane_srt_ParamLimits

0x7ff6,	// (0x00062e91) navi_text_pane_srt

0x3f17,	// (0x0005edb2) navi_navi_icon_text_pane_srt

0x3f1f,	// (0x0005edba) navi_navi_pane_srt_g1_ParamLimits

0x3f1f,	// (0x0005edba) navi_navi_pane_srt_g1

0x3f31,	// (0x0005edcc) navi_navi_pane_srt_g2_ParamLimits

0x3f31,	// (0x0005edcc) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0006a850) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0006a850) navi_navi_pane_srt_g

0x3f43,	// (0x0005edde) navi_navi_tabs_pane_srt

0x3f17,	// (0x0005edb2) navi_navi_text_pane_srt

0x3f17,	// (0x0005edb2) navi_navi_volume_pane_srt

0x3f08,	// (0x0005eda3) navi_navi_text_pane_srt_t1

0x0bbe,	// (0x0005ba59) navi_navi_volume_pane_srt_g1

0x0bc6,	// (0x0005ba61) volume_small_pane_srt_ParamLimits

0x0bc6,	// (0x0005ba61) volume_small_pane_srt

0xf4a5,	// (0x0006a340) volume_small_pane_srt_g1_ParamLimits

0xf4a5,	// (0x0006a340) volume_small_pane_srt_g1

0xf4b5,	// (0x0006a350) volume_small_pane_srt_g2_ParamLimits

0xf4b5,	// (0x0006a350) volume_small_pane_srt_g2

0xf4c6,	// (0x0006a361) volume_small_pane_srt_g3_ParamLimits

0xf4c6,	// (0x0006a361) volume_small_pane_srt_g3

0xf4d7,	// (0x0006a372) volume_small_pane_srt_g4_ParamLimits

0xf4d7,	// (0x0006a372) volume_small_pane_srt_g4

0xf4e8,	// (0x0006a383) volume_small_pane_srt_g5_ParamLimits

0xf4e8,	// (0x0006a383) volume_small_pane_srt_g5

0xf4f9,	// (0x0006a394) volume_small_pane_srt_g6_ParamLimits

0xf4f9,	// (0x0006a394) volume_small_pane_srt_g6

0xf50a,	// (0x0006a3a5) volume_small_pane_srt_g7_ParamLimits

0xf50a,	// (0x0006a3a5) volume_small_pane_srt_g7

0xf51b,	// (0x0006a3b6) volume_small_pane_srt_g8_ParamLimits

0xf51b,	// (0x0006a3b6) volume_small_pane_srt_g8

0xf52c,	// (0x0006a3c7) volume_small_pane_srt_g9_ParamLimits

0xf52c,	// (0x0006a3c7) volume_small_pane_srt_g9

0xf53d,	// (0x0006a3d8) volume_small_pane_srt_g10_ParamLimits

0xf53d,	// (0x0006a3d8) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0006a5fd) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0006a5fd) volume_small_pane_srt_g

0x9880,	// (0x0006471b) query_popup_data_pane_cp2

0x3d87,	// (0x0005ec22) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3d87,	// (0x0005ec22) navi_navi_icon_text_pane_srt_t1

0x2e24,	// (0x0005dcbf) navi_tabs_2_long_pane_srt

0x2e24,	// (0x0005dcbf) navi_tabs_2_pane_srt

0x2e24,	// (0x0005dcbf) navi_tabs_3_long_pane_srt

0x2e24,	// (0x0005dcbf) navi_tabs_3_pane_srt

0x2e24,	// (0x0005dcbf) navi_tabs_4_pane_srt

0xb2a6,	// (0x00066141) tabs_2_active_pane_srt_ParamLimits

0xb2a6,	// (0x00066141) tabs_2_active_pane_srt

0xb2b6,	// (0x00066151) tabs_2_passive_pane_srt_ParamLimits

0xb2b6,	// (0x00066151) tabs_2_passive_pane_srt

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp1_srt_ParamLimits

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp1_srt

0xc9ac,	// (0x00067847) bg_passive_tab_pane_g1_cp1_srt

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp1_srt

0xc9b5,	// (0x00067850) bg_passive_tab_pane_g3_cp1_srt

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp1_srt_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp1_srt

0xc9be,	// (0x00067859) tabs_2_active_pane_srt_g1

0xc9c6,	// (0x00067861) tabs_2_active_pane_srt_t1_ParamLimits

0xc9c6,	// (0x00067861) tabs_2_active_pane_srt_t1

0xc9ac,	// (0x00067847) bg_active_tab_pane_g1_cp1_srt

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp1_srt

0xc9b5,	// (0x00067850) bg_active_tab_pane_g3_cp1_srt

0xb273,	// (0x0006610e) tabs_3_active_pane_srt_ParamLimits

0xb273,	// (0x0006610e) tabs_3_active_pane_srt

0xb284,	// (0x0006611f) tabs_3_passive_pane_cp_srt_ParamLimits

0xb284,	// (0x0006611f) tabs_3_passive_pane_cp_srt

0xb295,	// (0x00066130) tabs_3_passive_pane_srt_ParamLimits

0xb295,	// (0x00066130) tabs_3_passive_pane_srt

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp2_srt_ParamLimits

0x25ef,	// (0x0005d48a) bg_passive_tab_pane_cp2_srt

0xa69d,	// (0x00065538) bg_passive_tab_pane_g1_cp2_srt

0xa50a,	// (0x000653a5) bg_passive_tab_pane_g2_cp2_srt

0xa6a6,	// (0x00065541) bg_passive_tab_pane_g3_cp2_srt

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp2_srt_ParamLimits

0x8120,	// (0x00062fbb) bg_active_tab_pane_cp2_srt

0xc98e,	// (0x00067829) tabs_3_active_pane_srt_g1

0xc996,	// (0x00067831) tabs_3_active_pane_srt_t1_ParamLimits

0xc996,	// (0x00067831) tabs_3_active_pane_srt_t1

0xa69d,	// (0x00065538) bg_active_tab_pane_g1_cp2_srt

0xa50a,	// (0x000653a5) bg_active_tab_pane_g2_cp2_srt

0xa6a6,	// (0x00065541) bg_active_tab_pane_g3_cp2_srt

0x0b23,	// (0x0005b9be) tabs_4_active_pane_srt_ParamLimits

0x0b23,	// (0x0005b9be) tabs_4_active_pane_srt

0x0b35,	// (0x0005b9d0) tabs_4_passive_pane_cp2_srt_ParamLimits

0x0b35,	// (0x0005b9d0) tabs_4_passive_pane_cp2_srt

0x00fb,	// (0x0005af96) aid_size_cell_toolbar

0x392f,	// (0x0005e7ca) main_idle_act_pane_ParamLimits

0xab10,	// (0x000659ab) popup_large_graphic_colour_window_ParamLimits

0xb004,	// (0x00065e9f) popup_toolbar_window_ParamLimits

0xb004,	// (0x00065e9f) popup_toolbar_window

0x3ae7,	// (0x0005e982) list_single_graphic_2heading_pane_ParamLimits

0x3ae7,	// (0x0005e982) list_single_graphic_2heading_pane

0x8669,	// (0x00063504) aid_size_cell_apps_grid_lsc_pane

0x867b,	// (0x00063516) aid_size_cell_apps_grid_prt_pane

0x2056,	// (0x0005cef1) bg_wml_button_pane_cp1_ParamLimits

0x2056,	// (0x0005cef1) bg_wml_button_pane_cp1

0xc118,	// (0x00066fb3) form_midp_field_text_pane_t1_ParamLimits

0x25ef,	// (0x0005d48a) input_focus_pane_cp050_ParamLimits

0x285f,	// (0x0005d6fa) list_midp_form_text_pane_ParamLimits

0x2802,	// (0x0005d69d) input_focus_pane_cp051_ParamLimits

0x2816,	// (0x0005d6b1) list_midp_choice_pane_ParamLimits

0xc07c,	// (0x00066f17) list_single_2graphic_pane_cp3_ParamLimits

0xc07c,	// (0x00066f17) list_single_2graphic_pane_cp3

0xc090,	// (0x00066f2b) list_single_midp_graphic_pane_ParamLimits

0xc090,	// (0x00066f2b) list_single_midp_graphic_pane

0xe1d2,	// (0x0006906d) list_single_graphic_2heading_pane_g1_ParamLimits

0xe1d2,	// (0x0006906d) list_single_graphic_2heading_pane_g1

0xe1de,	// (0x00069079) list_single_graphic_2heading_pane_g4_ParamLimits

0xe1de,	// (0x00069079) list_single_graphic_2heading_pane_g4

0xe1ea,	// (0x00069085) list_single_graphic_2heading_pane_g5_ParamLimits

0xe1ea,	// (0x00069085) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0006a650) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0006a650) list_single_graphic_2heading_pane_g

0xe1f6,	// (0x00069091) list_single_graphic_2heading_pane_t1_ParamLimits

0xe1f6,	// (0x00069091) list_single_graphic_2heading_pane_t1

0xe20a,	// (0x000690a5) list_single_graphic_2heading_pane_t2_ParamLimits

0xe20a,	// (0x000690a5) list_single_graphic_2heading_pane_t2

0xe224,	// (0x000690bf) list_single_graphic_2heading_pane_t3_ParamLimits

0xe224,	// (0x000690bf) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0006a657) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0006a657) list_single_graphic_2heading_pane_t

0x24a1,	// (0x0005d33c) bg_popup_sub_pane_cp2

0x24cb,	// (0x0005d366) grid_toobar_pane

0x06d8,	// (0x0005b573) cell_toolbar_pane_ParamLimits

0x06d8,	// (0x0005b573) cell_toolbar_pane

0x2507,	// (0x0005d3a2) cell_toolbar_pane_g1_ParamLimits

0x2507,	// (0x0005d3a2) cell_toolbar_pane_g1

0xc03c,	// (0x00066ed7) cell_toolbar_pane_g2_ParamLimits

0xc03c,	// (0x00066ed7) cell_toolbar_pane_g2

0x0001,

0xf7ca,	// (0x0006a665) cell_toolbar_pane_g_ParamLimits

0xf7ca,	// (0x0006a665) cell_toolbar_pane_g

0x253d,	// (0x0005d3d8) grid_highlight_pane_cp2_ParamLimits

0x253d,	// (0x0005d3d8) grid_highlight_pane_cp2

0x2557,	// (0x0005d3f2) toolbar_button_pane

0x2563,	// (0x0005d3fe) toolbar_button_pane_g1

0x256b,	// (0x0005d406) toolbar_button_pane_g2

0x2573,	// (0x0005d40e) toolbar_button_pane_g3

0x257b,	// (0x0005d416) toolbar_button_pane_g4

0x2583,	// (0x0005d41e) toolbar_button_pane_g5

0x258b,	// (0x0005d426) toolbar_button_pane_g6

0x2593,	// (0x0005d42e) toolbar_button_pane_g7

0x259b,	// (0x0005d436) toolbar_button_pane_g8

0x25a3,	// (0x0005d43e) toolbar_button_pane_g9

0x0009,

0xf7cf,	// (0x0006a66a) toolbar_button_pane_g

0x0710,	// (0x0005b5ab) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0710,	// (0x0005b5ab) list_single_2graphic_pane_g1_cp3

0xb0b1,	// (0x00065f4c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb0b1,	// (0x00065f4c) list_single_2graphic_pane_g2_cp3

0x072d,	// (0x0005b5c8) list_single_2graphic_pane_g3_cp3

0x0735,	// (0x0005b5d0) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0735,	// (0x0005b5d0) list_single_2graphic_pane_g4_cp3

0xb0c2,	// (0x00065f5d) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb0c2,	// (0x00065f5d) list_single_2graphic_pane_t1_cp3

0x075d,	// (0x0005b5f8) list_single_midp_graphic_pane_g2_ParamLimits

0x075d,	// (0x0005b5f8) list_single_midp_graphic_pane_g2

0xe1c2,	// (0x0006905d) aid_zoom_text_primary

0x0103,	// (0x0005af9e) aid_zoom_text_secondary

0xa6fd,	// (0x00065598) status_small_pane_g7_ParamLimits

0xa6fd,	// (0x00065598) status_small_pane_g7

0xa720,	// (0x000655bb) status_small_pane_t1_ParamLimits

0x94ed,	// (0x00064388) title_pane_g2

0x0003,

0xf54e,	// (0x0006a3e9) title_pane_g

0x98da,	// (0x00064775) aid_size_cell_colour_1_pane_ParamLimits

0x98da,	// (0x00064775) aid_size_cell_colour_1_pane

0x98ee,	// (0x00064789) aid_size_cell_colour_2_pane_ParamLimits

0x98ee,	// (0x00064789) aid_size_cell_colour_2_pane

0x9902,	// (0x0006479d) aid_size_cell_colour_3_pane_ParamLimits

0x9902,	// (0x0006479d) aid_size_cell_colour_3_pane

0x9916,	// (0x000647b1) aid_size_cell_colour_4_pane_ParamLimits

0x9916,	// (0x000647b1) aid_size_cell_colour_4_pane

0xf0e5,	// (0x00069f80) title_pane_stacon_g1_ParamLimits

0xf0e5,	// (0x00069f80) title_pane_stacon_g1

0x2c13,	// (0x0005daae) popup_note_wait_window_g3_ParamLimits

0x2c13,	// (0x0005daae) popup_note_wait_window_g3

0x2c89,	// (0x0005db24) popup_note_wait_window_t5_ParamLimits

0x2c89,	// (0x0005db24) popup_note_wait_window_t5

0x7fa8,	// (0x00062e43) main_feb_china_hwr_fs_writing_pane

0xa992,	// (0x0006582d) popup_feb_china_hwr_fs_window_ParamLimits

0xa992,	// (0x0006582d) popup_feb_china_hwr_fs_window

0xb0de,	// (0x00065f79) aid_size_cell_hwr_fs_ParamLimits

0xb0de,	// (0x00065f79) aid_size_cell_hwr_fs

0x25ef,	// (0x0005d48a) bg_popup_sub_pane_cp3_ParamLimits

0x25ef,	// (0x0005d48a) bg_popup_sub_pane_cp3

0xb0f3,	// (0x00065f8e) grid_hwr_fs_pane_ParamLimits

0xb0f3,	// (0x00065f8e) grid_hwr_fs_pane

0x07ac,	// (0x0005b647) linegrid_hwr_fs_pane_ParamLimits

0x07ac,	// (0x0005b647) linegrid_hwr_fs_pane

0xb10b,	// (0x00065fa6) cell_hwr_fs_pane_ParamLimits

0xb10b,	// (0x00065fa6) cell_hwr_fs_pane

0x25fb,	// (0x0005d496) linegrid_hwr_fs_pane_g1_ParamLimits

0x25fb,	// (0x0005d496) linegrid_hwr_fs_pane_g1

0xc050,	// (0x00066eeb) linegrid_hwr_fs_pane_g2_ParamLimits

0xc050,	// (0x00066eeb) linegrid_hwr_fs_pane_g2

0x2619,	// (0x0005d4b4) linegrid_hwr_fs_pane_g3_ParamLimits

0x2619,	// (0x0005d4b4) linegrid_hwr_fs_pane_g3

0xb131,	// (0x00065fcc) linegrid_hwr_fs_pane_g4_ParamLimits

0xb131,	// (0x00065fcc) linegrid_hwr_fs_pane_g4

0x07f8,	// (0x0005b693) linegrid_hwr_fs_pane_g5_ParamLimits

0x07f8,	// (0x0005b693) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f5,	// (0x0006a690) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f5,	// (0x0006a690) linegrid_hwr_fs_pane_g

0x2625,	// (0x0005d4c0) cell_hwr_fs_pane_g1_ParamLimits

0x2625,	// (0x0005d4c0) cell_hwr_fs_pane_g1

0x23db,	// (0x0005d276) cell_hwr_fs_pane_g2_ParamLimits

0x23db,	// (0x0005d276) cell_hwr_fs_pane_g2

0xc062,	// (0x00066efd) cell_hwr_fs_pane_g3_ParamLimits

0xc062,	// (0x00066efd) cell_hwr_fs_pane_g3

0xc06f,	// (0x00066f0a) cell_hwr_fs_pane_g4_ParamLimits

0xc06f,	// (0x00066f0a) cell_hwr_fs_pane_g4

0x0003,

0xf800,	// (0x0006a69b) cell_hwr_fs_pane_g_ParamLimits

0xf800,	// (0x0006a69b) cell_hwr_fs_pane_g

0xb14b,	// (0x00065fe6) cell_hwr_fs_pane_t1

0x7fa8,	// (0x00062e43) grid_highlight_pane_cp6

0x7fa8,	// (0x00062e43) main_idle_act2_pane

0x84bf,	// (0x0006335a) aid_inside_area_popup_secondary

0xc4b1,	// (0x0006734c) aid_inside_area_window_primary_ParamLimits

0xc4b1,	// (0x0006734c) aid_inside_area_window_primary

0xc9e4,	// (0x0006787f) ai2_news_ticker_pane

0x400f,	// (0x0005eeaa) aid_size_cell_ai1_link_ParamLimits

0x400f,	// (0x0005eeaa) aid_size_cell_ai1_link

0xc9ec,	// (0x00067887) popup_ai2_data_window_ParamLimits

0xc9ec,	// (0x00067887) popup_ai2_data_window

0x403f,	// (0x0005eeda) popup_ai2_link_window_ParamLimits

0x403f,	// (0x0005eeda) popup_ai2_link_window

0x25ef,	// (0x0005d48a) bg_popup_sub_pane_cp4_ParamLimits

0x25ef,	// (0x0005d48a) bg_popup_sub_pane_cp4

0x4053,	// (0x0005eeee) grid_ai2_link_pane_ParamLimits

0x4053,	// (0x0005eeee) grid_ai2_link_pane

0x406a,	// (0x0005ef05) popup_ai2_link_window_g1_ParamLimits

0x406a,	// (0x0005ef05) popup_ai2_link_window_g1

0x4076,	// (0x0005ef11) popup_ai2_link_window_g2_ParamLimits

0x4076,	// (0x0005ef11) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0006a86e) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0006a86e) popup_ai2_link_window_g

0x4085,	// (0x0005ef20) ai2_mp_button_pane

0x408d,	// (0x0005ef28) ai2_mp_volume_pane

0x2802,	// (0x0005d69d) bg_popup_sub_pane_cp5_ParamLimits

0x2802,	// (0x0005d69d) bg_popup_sub_pane_cp5

0x4095,	// (0x0005ef30) heading_ai2_gene_pane_ParamLimits

0x4095,	// (0x0005ef30) heading_ai2_gene_pane

0x40a1,	// (0x0005ef3c) list_ai2_gene_pane_ParamLimits

0x40a1,	// (0x0005ef3c) list_ai2_gene_pane

0x40e9,	// (0x0005ef84) cell_ai2_link_pane_ParamLimits

0x40e9,	// (0x0005ef84) cell_ai2_link_pane

0x40ff,	// (0x0005ef9a) cell_ai2_link_pane_g1

0x7fa8,	// (0x00062e43) grid_highlight_pane_cp7

0x0bdb,	// (0x0005ba76) ai2_mp_volume_pane_g1

0x41cf,	// (0x0005f06a) ai2_mp_volume_pane_g2

0x4144,	// (0x0005efdf) list_ai2_gene_pane_t1

0x41d7,	// (0x0005f072) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0006a887) ai2_mp_volume_pane_g

0xb2c6,	// (0x00066161) volume_small_pane_cp3

0x41df,	// (0x0005f07a) aid_size_cell_ai2_button

0x41e7,	// (0x0005f082) grid_ai2_button_pane

0x41f0,	// (0x0005f08b) cell_ai2_button_pane_ParamLimits

0x41f0,	// (0x0005f08b) cell_ai2_button_pane

0x7f9e,	// (0x00062e39) cell_ai2_button_pane_g1

0x7fa8,	// (0x00062e43) grid_highlight_pane_cp8

0x418f,	// (0x0005f02a) ai2_gene_pane_t1_ParamLimits

0x418f,	// (0x0005f02a) ai2_gene_pane_t1

0xa8e4,	// (0x0006577f) aid_height_parent_landscape

0xc701,	// (0x0006759c) aid_height_set_list

0x392f,	// (0x0005e7ca) aid_size_parent

0x3cc7,	// (0x0005eb62) aid_size_cell_graphic_pane_ParamLimits

0x40b1,	// (0x0005ef4c) popup_ai2_data_window_g1_ParamLimits

0x40b1,	// (0x0005ef4c) popup_ai2_data_window_g1

0x40bd,	// (0x0005ef58) ai2_news_ticker_pane_g1

0x40c5,	// (0x0005ef60) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0006a873) ai2_news_ticker_pane_g

0x40cd,	// (0x0005ef68) ai2_news_ticker_pane_t1

0x40db,	// (0x0005ef76) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0006a878) ai2_news_ticker_pane_t

0x4108,	// (0x0005efa3) heading_ai2_gene_pane_g1

0x4110,	// (0x0005efab) heading_ai2_gene_pane_t1_ParamLimits

0x4110,	// (0x0005efab) heading_ai2_gene_pane_t1

0x4125,	// (0x0005efc0) list_highlight_pane_cp6

0x412d,	// (0x0005efc8) ai2_gene_pane_ParamLimits

0x412d,	// (0x0005efc8) ai2_gene_pane

0x4152,	// (0x0005efed) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0006a87d) list_ai2_gene_pane_t

0x4160,	// (0x0005effb) list_highlight_pane_cp8_ParamLimits

0x4160,	// (0x0005effb) list_highlight_pane_cp8

0x4171,	// (0x0005f00c) ai2_gene_pane_g1_ParamLimits

0x4171,	// (0x0005f00c) ai2_gene_pane_g1

0x4183,	// (0x0005f01e) ai2_gene_pane_g2_ParamLimits

0x4183,	// (0x0005f01e) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0006a882) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0006a882) ai2_gene_pane_g

0x8355,	// (0x000631f0) scroll_pane_cp12

0xa8a3,	// (0x0006573e) control_pane_t3_ParamLimits

0xa8a3,	// (0x0006573e) control_pane_t3

0xa711,	// (0x000655ac) status_small_pane_g8_ParamLimits

0xa711,	// (0x000655ac) status_small_pane_g8

0xaa55,	// (0x000658f0) popup_find_window_ParamLimits

0xad08,	// (0x00065ba3) popup_note_image_window_ParamLimits

0xe23c,	// (0x000690d7) list_double2_graphic_pane_vc_g1_ParamLimits

0xe23c,	// (0x000690d7) list_double2_graphic_pane_vc_g1

0xde70,	// (0x00068d0b) list_double2_graphic_pane_vc_g2_ParamLimits

0xde70,	// (0x00068d0b) list_double2_graphic_pane_vc_g2

0xde7c,	// (0x00068d17) list_double2_graphic_pane_vc_g3_ParamLimits

0xde7c,	// (0x00068d17) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006a65e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006a65e) list_double2_graphic_pane_vc_g

0xe248,	// (0x000690e3) list_double2_graphic_pane_vc_t1_ParamLimits

0xe248,	// (0x000690e3) list_double2_graphic_pane_vc_t1

0xde70,	// (0x00068d0b) list_single_heading_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_single_heading_pane_vc_g1

0xde7c,	// (0x00068d17) list_single_heading_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_single_heading_pane_vc_g

0xe25e,	// (0x000690f9) list_single_heading_pane_vc_t1_ParamLimits

0xe25e,	// (0x000690f9) list_single_heading_pane_vc_t1

0xe276,	// (0x00069111) list_single_heading_pane_vc_t2_ParamLimits

0xe276,	// (0x00069111) list_single_heading_pane_vc_t2

0x0001,

0xf7e4,	// (0x0006a67f) list_single_heading_pane_vc_t_ParamLimits

0xf7e4,	// (0x0006a67f) list_single_heading_pane_vc_t

0x25ab,	// (0x0005d446) list_setting_number_pane_vc_g1_ParamLimits

0x25ab,	// (0x0005d446) list_setting_number_pane_vc_g1

0x25b7,	// (0x0005d452) list_setting_number_pane_vc_g2_ParamLimits

0x25b7,	// (0x0005d452) list_setting_number_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006a684) list_setting_number_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006a684) list_setting_number_pane_vc_g

0xe292,	// (0x0006912d) list_setting_number_pane_vc_t1_ParamLimits

0xe292,	// (0x0006912d) list_setting_number_pane_vc_t1

0xe2a6,	// (0x00069141) list_setting_number_pane_vc_t2_ParamLimits

0xe2a6,	// (0x00069141) list_setting_number_pane_vc_t2

0xe2c2,	// (0x0006915d) list_setting_number_pane_vc_t3_ParamLimits

0xe2c2,	// (0x0006915d) list_setting_number_pane_vc_t3

0x0002,

0xf7ee,	// (0x0006a689) list_setting_number_pane_vc_t_ParamLimits

0xf7ee,	// (0x0006a689) list_setting_number_pane_vc_t

0xe2ec,	// (0x00069187) set_value_pane_vc_ParamLimits

0xe2ec,	// (0x00069187) set_value_pane_vc

0x3ae7,	// (0x0005e982) list_double2_graphic_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double2_graphic_pane_vc

0x3ae7,	// (0x0005e982) list_double2_large_graphic_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double2_large_graphic_pane_vc

0x3ae7,	// (0x0005e982) list_double2_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double2_pane_vc

0x3ae7,	// (0x0005e982) list_double_graphic_heading_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_graphic_heading_pane_vc

0x3ae7,	// (0x0005e982) list_double_graphic_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_graphic_pane_vc

0x3ae7,	// (0x0005e982) list_double_heading_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_heading_pane_vc

0x3af9,	// (0x0005e994) list_double_large_graphic_pane_vc_ParamLimits

0x3af9,	// (0x0005e994) list_double_large_graphic_pane_vc

0x3ae7,	// (0x0005e982) list_double_number_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_number_pane_vc

0x3ae7,	// (0x0005e982) list_double_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_pane_vc

0x3ae7,	// (0x0005e982) list_double_time_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_double_time_pane_vc

0x3ae7,	// (0x0005e982) list_setting_number_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_setting_number_pane_vc

0x3ae7,	// (0x0005e982) list_setting_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_setting_pane_vc

0x3ae7,	// (0x0005e982) list_single_graphic_heading_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_single_graphic_heading_pane_vc

0x3ae7,	// (0x0005e982) list_single_heading_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_single_heading_pane_vc

0x3ae7,	// (0x0005e982) list_single_number_heading_pane_vc_ParamLimits

0x3ae7,	// (0x0005e982) list_single_number_heading_pane_vc

0xe23c,	// (0x000690d7) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xe23c,	// (0x000690d7) list_double_graphic_heading_pane_vc_g1

0xde70,	// (0x00068d0b) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xde70,	// (0x00068d0b) list_double_graphic_heading_pane_vc_g2

0xde7c,	// (0x00068d17) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xde7c,	// (0x00068d17) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7c3,	// (0x0006a65e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006a65e) list_double_graphic_heading_pane_vc_g

0xe333,	// (0x000691ce) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe333,	// (0x000691ce) list_double_graphic_heading_pane_vc_t1

0xe34f,	// (0x000691ea) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe34f,	// (0x000691ea) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0006a88e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0006a88e) list_double_graphic_heading_pane_vc_t

0x25ab,	// (0x0005d446) list_setting_pane_vc_g1_ParamLimits

0x25ab,	// (0x0005d446) list_setting_pane_vc_g1

0x25b7,	// (0x0005d452) list_setting_pane_vc_g2_ParamLimits

0x25b7,	// (0x0005d452) list_setting_pane_vc_g2

0x0001,

0xf7e9,	// (0x0006a684) list_setting_pane_vc_g_ParamLimits

0xf7e9,	// (0x0006a684) list_setting_pane_vc_g

0xe36d,	// (0x00069208) list_setting_pane_vc_t1_ParamLimits

0xe36d,	// (0x00069208) list_setting_pane_vc_t1

0xe389,	// (0x00069224) list_setting_pane_vc_t2_ParamLimits

0xe389,	// (0x00069224) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0006a8d1) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0006a8d1) list_setting_pane_vc_t

0xe2ec,	// (0x00069187) set_value_pane_cp_vc_ParamLimits

0xe2ec,	// (0x00069187) set_value_pane_cp_vc

0xde70,	// (0x00068d0b) list_single_number_heading_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_single_number_heading_pane_vc_g1

0xde7c,	// (0x00068d17) list_single_number_heading_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_single_number_heading_pane_vc_g

0xe25e,	// (0x000690f9) list_single_number_heading_pane_vc_t1_ParamLimits

0xe25e,	// (0x000690f9) list_single_number_heading_pane_vc_t1

0xe3a3,	// (0x0006923e) list_single_number_heading_pane_vc_t2_ParamLimits

0xe3a3,	// (0x0006923e) list_single_number_heading_pane_vc_t2

0xde88,	// (0x00068d23) list_single_number_heading_pane_vc_t3_ParamLimits

0xde88,	// (0x00068d23) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0006a8d6) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0006a8d6) list_single_number_heading_pane_vc_t

0xe23c,	// (0x000690d7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xe23c,	// (0x000690d7) list_single_graphic_heading_pane_vc_g1

0xde70,	// (0x00068d0b) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xde70,	// (0x00068d0b) list_single_graphic_heading_pane_vc_g4

0xde7c,	// (0x00068d17) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xde7c,	// (0x00068d17) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0006a65e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0006a65e) list_single_graphic_heading_pane_vc_g

0xe25e,	// (0x000690f9) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xe25e,	// (0x000690f9) list_single_graphic_heading_pane_vc_t1

0xe3b7,	// (0x00069252) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xe3b7,	// (0x00069252) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0006a8dd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0006a8dd) list_single_graphic_heading_pane_vc_t

0xde70,	// (0x00068d0b) list_double2_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_double2_pane_vc_g1

0xde7c,	// (0x00068d17) list_double2_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_double2_pane_vc_g

0xe31d,	// (0x000691b8) list_double2_pane_vc_t1_ParamLimits

0xe31d,	// (0x000691b8) list_double2_pane_vc_t1

0x3d99,	// (0x0005ec34) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x3d99,	// (0x0005ec34) list_double2_large_graphic_pane_vc_g1

0xde70,	// (0x00068d0b) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xde70,	// (0x00068d0b) list_double2_large_graphic_pane_vc_g2

0xde7c,	// (0x00068d17) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xde7c,	// (0x00068d17) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0006a485) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0006a485) list_double2_large_graphic_pane_vc_g

0xde9a,	// (0x00068d35) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xde9a,	// (0x00068d35) list_double2_large_graphic_pane_vc_t1

0x3da5,	// (0x0005ec40) list_double_time_pane_vc_g1_ParamLimits

0x3da5,	// (0x0005ec40) list_double_time_pane_vc_g1

0x3db1,	// (0x0005ec4c) list_double_time_pane_vc_g2_ParamLimits

0x3db1,	// (0x0005ec4c) list_double_time_pane_vc_g2

0x0001,

0xfa47,	// (0x0006a8e2) list_double_time_pane_vc_g_ParamLimits

0xfa47,	// (0x0006a8e2) list_double_time_pane_vc_g

0xe3cb,	// (0x00069266) list_double_time_pane_vc_t1_ParamLimits

0xe3cb,	// (0x00069266) list_double_time_pane_vc_t1

0xe3ef,	// (0x0006928a) list_double_time_pane_vc_t2_ParamLimits

0xe3ef,	// (0x0006928a) list_double_time_pane_vc_t2

0xe43e,	// (0x000692d9) list_double_time_pane_vc_t3_ParamLimits

0xe43e,	// (0x000692d9) list_double_time_pane_vc_t3

0xe450,	// (0x000692eb) list_double_time_pane_vc_t4_ParamLimits

0xe450,	// (0x000692eb) list_double_time_pane_vc_t4

0x0003,

0xfa4c,	// (0x0006a8e7) list_double_time_pane_vc_t_ParamLimits

0xfa4c,	// (0x0006a8e7) list_double_time_pane_vc_t

0xde70,	// (0x00068d0b) list_double_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_double_pane_vc_g1

0xde7c,	// (0x00068d17) list_double_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_double_pane_vc_g

0xe464,	// (0x000692ff) list_double_pane_vc_t1_ParamLimits

0xe464,	// (0x000692ff) list_double_pane_vc_t1

0xe478,	// (0x00069313) list_double_pane_vc_t2_ParamLimits

0xe478,	// (0x00069313) list_double_pane_vc_t2

0x0001,

0xfa55,	// (0x0006a8f0) list_double_pane_vc_t_ParamLimits

0xfa55,	// (0x0006a8f0) list_double_pane_vc_t

0xde70,	// (0x00068d0b) list_double_number_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_double_number_pane_vc_g1

0xde7c,	// (0x00068d17) list_double_number_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_double_number_pane_vc_g

0xe30b,	// (0x000691a6) list_double_number_pane_vc_t1_ParamLimits

0xe30b,	// (0x000691a6) list_double_number_pane_vc_t1

0xe490,	// (0x0006932b) list_double_number_pane_vc_t2_ParamLimits

0xe490,	// (0x0006932b) list_double_number_pane_vc_t2

0xe4a4,	// (0x0006933f) list_double_number_pane_vc_t3_ParamLimits

0xe4a4,	// (0x0006933f) list_double_number_pane_vc_t3

0x0002,

0xfa5a,	// (0x0006a8f5) list_double_number_pane_vc_t_ParamLimits

0xfa5a,	// (0x0006a8f5) list_double_number_pane_vc_t

0x3dbd,	// (0x0005ec58) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3dbd,	// (0x0005ec58) list_double_large_graphic_pane_vc_g1

0x3ddf,	// (0x0005ec7a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3ddf,	// (0x0005ec7a) list_double_large_graphic_pane_vc_g2

0x3df3,	// (0x0005ec8e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3df3,	// (0x0005ec8e) list_double_large_graphic_pane_vc_g3

0xe4bc,	// (0x00069357) list_double_large_graphic_pane_vc_g4_ParamLimits

0xe4bc,	// (0x00069357) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa61,	// (0x0006a8fc) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa61,	// (0x0006a8fc) list_double_large_graphic_pane_vc_g

0xe4c8,	// (0x00069363) list_double_large_graphic_pane_vc_t1_ParamLimits

0xe4c8,	// (0x00069363) list_double_large_graphic_pane_vc_t1

0xe4e4,	// (0x0006937f) list_double_large_graphic_pane_vc_t2_ParamLimits

0xe4e4,	// (0x0006937f) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6a,	// (0x0006a905) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6a,	// (0x0006a905) list_double_large_graphic_pane_vc_t

0xde70,	// (0x00068d0b) list_double_heading_pane_vc_g1_ParamLimits

0xde70,	// (0x00068d0b) list_double_heading_pane_vc_g1

0xde7c,	// (0x00068d17) list_double_heading_pane_vc_g2_ParamLimits

0xde7c,	// (0x00068d17) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0006a46d) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0006a46d) list_double_heading_pane_vc_g

0xe506,	// (0x000693a1) list_double_heading_pane_vc_t1_ParamLimits

0xe506,	// (0x000693a1) list_double_heading_pane_vc_t1

0xe25e,	// (0x000690f9) list_double_heading_pane_vc_t2_ParamLimits

0xe25e,	// (0x000690f9) list_double_heading_pane_vc_t2

0x0001,

0xfa6f,	// (0x0006a90a) list_double_heading_pane_vc_t_ParamLimits

0xfa6f,	// (0x0006a90a) list_double_heading_pane_vc_t

0xe51a,	// (0x000693b5) list_double_graphic_pane_vc_g1_ParamLimits

0xe51a,	// (0x000693b5) list_double_graphic_pane_vc_g1

0x3e02,	// (0x0005ec9d) list_double_graphic_pane_vc_g2_ParamLimits

0x3e02,	// (0x0005ec9d) list_double_graphic_pane_vc_g2

0xde70,	// (0x00068d0b) list_double_graphic_pane_vc_g3_ParamLimits

0xde70,	// (0x00068d0b) list_double_graphic_pane_vc_g3

0x0003,

0xfa74,	// (0x0006a90f) list_double_graphic_pane_vc_g_ParamLimits

0xfa74,	// (0x0006a90f) list_double_graphic_pane_vc_g

0xe526,	// (0x000693c1) list_double_graphic_pane_vc_t1_ParamLimits

0xe526,	// (0x000693c1) list_double_graphic_pane_vc_t1

0xe54a,	// (0x000693e5) list_double_graphic_pane_vc_t2_ParamLimits

0xe54a,	// (0x000693e5) list_double_graphic_pane_vc_t2

0x0001,

0xfa7d,	// (0x0006a918) list_double_graphic_pane_vc_t_ParamLimits

0xfa7d,	// (0x0006a918) list_double_graphic_pane_vc_t

0xdcf6,	// (0x00068b91) aid_size_cell_fastswap

0x92b4,	// (0x0006414f) aid_size_cell_touch_ParamLimits

0x92b4,	// (0x0006414f) aid_size_cell_touch

0xf08a,	// (0x00069f25) popup_fast_swap_wide_window_ParamLimits

0xf08a,	// (0x00069f25) popup_fast_swap_wide_window

0x9484,	// (0x0006431f) touch_pane_ParamLimits

0x9484,	// (0x0006431f) touch_pane

0x83a2,	// (0x0006323d) button_value_adjust_pane_cp2

0xdf19,	// (0x00068db4) button_value_adjust_pane_cp4

0xdf21,	// (0x00068dbc) form_field_data_pane_cp2

0x9f7e,	// (0x00064e19) form_field_data_wide_pane_cp2

0x86a0,	// (0x0006353b) bg_scroll_pane_ParamLimits

0xa2c4,	// (0x0006515f) scroll_handle_pane_ParamLimits

0xf23e,	// (0x0006a0d9) scroll_sc2_down_pane_ParamLimits

0xf23e,	// (0x0006a0d9) scroll_sc2_down_pane

0x86d1,	// (0x0006356c) scroll_sc2_up_pane_ParamLimits

0x86d1,	// (0x0006356c) scroll_sc2_up_pane

0xcb33,	// (0x000679ce) grid_wheel_folder_pane_g1_ParamLimits

0xcb33,	// (0x000679ce) grid_wheel_folder_pane_g1

0xf3c0,	// (0x0006a25b) clock_nsta_pane_cp2_ParamLimits

0xf3c0,	// (0x0006a25b) clock_nsta_pane_cp2

0x2056,	// (0x0005cef1) listscroll_midp_pane_ParamLimits

0xa5e3,	// (0x0006547e) midp_canvas_pane

0x2008,	// (0x0005cea3) nsta_clock_indic_pane

0x203c,	// (0x0005ced7) listscroll_form_pane_vc

0x2044,	// (0x0005cedf) listscroll_set_pane_vc_ParamLimits

0x2044,	// (0x0005cedf) listscroll_set_pane_vc

0xbd47,	// (0x00066be2) clock_nsta_pane

0xbd71,	// (0x00066c0c) indicator_nsta_pane

0x24a1,	// (0x0005d33c) bg_popup_sub_pane_cp2_ParamLimits

0x24b5,	// (0x0005d350) find_pane_cp2_ParamLimits

0x24b5,	// (0x0005d350) find_pane_cp2

0x24cb,	// (0x0005d366) grid_toobar_pane_ParamLimits

0x25c3,	// (0x0005d45e) list_form_gen_pane_vc_ParamLimits

0x25c3,	// (0x0005d45e) list_form_gen_pane_vc

0x25d9,	// (0x0005d474) scroll_pane_cp8_vc_ParamLimits

0x25d9,	// (0x0005d474) scroll_pane_cp8_vc

0x2655,	// (0x0005d4f0) data_form_wide_pane_vc_ParamLimits

0x2655,	// (0x0005d4f0) data_form_wide_pane_vc

0x2661,	// (0x0005d4fc) form_field_data_wide_pane_vc_g1

0x2669,	// (0x0005d504) form_field_data_wide_pane_vc_t1_ParamLimits

0x2669,	// (0x0005d504) form_field_data_wide_pane_vc_t1

0x83b6,	// (0x00063251) input_focus_pane_cp6_vc_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_cp6_vc

0xc225,	// (0x000670c0) list_midp_pane_ParamLimits

0x3d2d,	// (0x0005ebc8) scroll_pane_cp16_ParamLimits

0x3d2d,	// (0x0005ebc8) scroll_pane_cp16

0x29f0,	// (0x0005d88b) button_value_adjust_pane_ParamLimits

0x29f0,	// (0x0005d88b) button_value_adjust_pane

0xc712,	// (0x000675ad) button_value_adjust_pane_cp6_ParamLimits

0xc712,	// (0x000675ad) button_value_adjust_pane_cp6

0xc82c,	// (0x000676c7) settings_code_pane_cp_ParamLimits

0xc82c,	// (0x000676c7) settings_code_pane_cp

0x7f9e,	// (0x00062e39) cell_touch_pane_g1

0x7f9e,	// (0x00062e39) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0006a5a3) cell_touch_pane_g

0xca02,	// (0x0006789d) cell_touch_pane_cp_ParamLimits

0xca02,	// (0x0006789d) cell_touch_pane_cp

0xca1e,	// (0x000678b9) cell_touch_pane_ParamLimits

0xca1e,	// (0x000678b9) cell_touch_pane

0x7f9e,	// (0x00062e39) scroll_sc2_down_pane_g1

0x7f9e,	// (0x00062e39) scroll_sc2_up_pane_g1

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp4_vc

0x4224,	// (0x0005f0bf) list_set_graphic_pane_vc_g1_ParamLimits

0x4224,	// (0x0005f0bf) list_set_graphic_pane_vc_g1

0x4230,	// (0x0005f0cb) list_set_graphic_pane_vc_g2_ParamLimits

0x4230,	// (0x0005f0cb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0006a893) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0006a893) list_set_graphic_pane_vc_g

0x423c,	// (0x0005f0d7) text_primary_small_cp13_vc_ParamLimits

0x423c,	// (0x0005f0d7) text_primary_small_cp13_vc

0x4254,	// (0x0005f0ef) list_set_graphic_pane_vc_ParamLimits

0x4254,	// (0x0005f0ef) list_set_graphic_pane_vc

0x7fa8,	// (0x00062e43) input_focus_pane_cp2_vc

0x7f9e,	// (0x00062e39) setting_code_pane_vc_g1

0x800d,	// (0x00062ea8) setting_code_pane_vc_t1

0x4267,	// (0x0005f102) set_text_pane_vc_t1_ParamLimits

0x4267,	// (0x0005f102) set_text_pane_vc_t1

0x7fa8,	// (0x00062e43) input_focus_pane_cp1_vc

0x4283,	// (0x0005f11e) list_set_text_pane_vc

0x7f9e,	// (0x00062e39) setting_text_pane_vc_g1

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp2_vc

0x8004,	// (0x00062e9f) setting_slider_graphic_pane_vc_g1

0x428d,	// (0x0005f128) setting_slider_graphic_pane_vc_t1

0x429d,	// (0x0005f138) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0006a898) setting_slider_graphic_pane_vc_t

0x42ad,	// (0x0005f148) slider_set_pane_cp_vc

0x42b5,	// (0x0005f150) slider_set_pane_vc_g1

0x42be,	// (0x0005f159) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0006a89d) slider_set_pane_vc_g

0x8411,	// (0x000632ac) set_opt_bg_pane_g1_copy1

0x8419,	// (0x000632b4) set_opt_bg_pane_g2_copy1

0x42ea,	// (0x0005f185) set_opt_bg_pane_g3_copy1

0x8429,	// (0x000632c4) set_opt_bg_pane_g4_copy1

0x8431,	// (0x000632cc) set_opt_bg_pane_g5_copy1

0x8439,	// (0x000632d4) set_opt_bg_pane_g6_copy1

0x42f2,	// (0x0005f18d) set_opt_bg_pane_g7_copy1

0x42fa,	// (0x0005f195) set_opt_bg_pane_g8_copy1

0x4302,	// (0x0005f19d) set_opt_bg_pane_g9_copy1

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp_vc

0x430a,	// (0x0005f1a5) setting_slider_pane_vc_t1

0x4319,	// (0x0005f1b4) setting_slider_pane_vc_t2

0x4329,	// (0x0005f1c4) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0006a8ac) setting_slider_pane_vc_t

0x4339,	// (0x0005f1d4) slider_set_pane_vc

0x084a,	// (0x0005b6e5) volume_set_pane_vc_g1

0x0bec,	// (0x0005ba87) volume_set_pane_vc_g2

0x0bf5,	// (0x0005ba90) volume_set_pane_vc_g3

0x0bfe,	// (0x0005ba99) volume_set_pane_vc_g4

0x0c07,	// (0x0005baa2) volume_set_pane_vc_g5

0x0c10,	// (0x0005baab) volume_set_pane_vc_g6

0x0c19,	// (0x0005bab4) volume_set_pane_vc_g7

0x0c22,	// (0x0005babd) volume_set_pane_vc_g8

0x0c2b,	// (0x0005bac6) volume_set_pane_vc_g9

0x0c34,	// (0x0005bacf) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0006a8b3) volume_set_pane_vc_g

0x4341,	// (0x0005f1dc) volume_set_pane_vc

0x4349,	// (0x0005f1e4) button_value_adjust_pane_cp1_vc

0x4353,	// (0x0005f1ee) list_highlight_pane_cp2_vc

0x435c,	// (0x0005f1f7) list_set_pane_vc_ParamLimits

0x435c,	// (0x0005f1f7) list_set_pane_vc

0x43ba,	// (0x0005f255) main_pane_set_vc_t1_ParamLimits

0x43ba,	// (0x0005f255) main_pane_set_vc_t1

0x43cf,	// (0x0005f26a) main_pane_set_vc_t2_ParamLimits

0x43cf,	// (0x0005f26a) main_pane_set_vc_t2

0x43e1,	// (0x0005f27c) main_pane_set_vc_t3_ParamLimits

0x43e1,	// (0x0005f27c) main_pane_set_vc_t3

0x43f3,	// (0x0005f28e) main_pane_set_vc_t4_ParamLimits

0x43f3,	// (0x0005f28e) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0006a8c8) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0006a8c8) main_pane_set_vc_t

0x4405,	// (0x0005f2a0) setting_code_pane_vc_ParamLimits

0x4405,	// (0x0005f2a0) setting_code_pane_vc

0x4414,	// (0x0005f2af) setting_slider_graphic_pane_vc

0x4414,	// (0x0005f2af) setting_slider_pane_vc

0x4414,	// (0x0005f2af) setting_text_pane_vc

0x4414,	// (0x0005f2af) setting_volume_pane_vc

0x441c,	// (0x0005f2b7) scroll_pane_cp121_vc

0x8390,	// (0x0006322b) set_content_pane_vc

0x4424,	// (0x0005f2bf) button_value_adjust_pane_g1

0x442d,	// (0x0005f2c8) button_value_adjust_pane_g2

0x0001,

0xfa82,	// (0x0006a91d) button_value_adjust_pane_g

0x4436,	// (0x0005f2d1) form_field_slider_wide_pane_vc_t1_ParamLimits

0x4436,	// (0x0005f2d1) form_field_slider_wide_pane_vc_t1

0x444a,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t2_ParamLimits

0x444a,	// (0x0005f2e5) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa87,	// (0x0006a922) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa87,	// (0x0006a922) form_field_slider_wide_pane_vc_t

0x8120,	// (0x00062fbb) input_focus_pane_cp10_vc_ParamLimits

0x8120,	// (0x00062fbb) input_focus_pane_cp10_vc

0x4478,	// (0x0005f313) slider_cont_pane_cp1_vc_ParamLimits

0x4478,	// (0x0005f313) slider_cont_pane_cp1_vc

0x448a,	// (0x0005f325) slider_form_pane_g1_cp2

0x42be,	// (0x0005f159) slider_form_pane_g2_cp2

0x44b7,	// (0x0005f352) form_field_slider_pane_vc_t3

0x44c5,	// (0x0005f360) form_field_slider_pane_vc_t4

0x44d3,	// (0x0005f36e) slider_form_pane_vc_ParamLimits

0x44d3,	// (0x0005f36e) slider_form_pane_vc

0x44e0,	// (0x0005f37b) form_field_slider_pane_vc_t1_ParamLimits

0x44e0,	// (0x0005f37b) form_field_slider_pane_vc_t1

0x444a,	// (0x0005f2e5) form_field_slider_pane_vc_t2_ParamLimits

0x444a,	// (0x0005f2e5) form_field_slider_pane_vc_t2

0x0001,

0xfa99,	// (0x0006a934) form_field_slider_pane_vc_t_ParamLimits

0xfa99,	// (0x0006a934) form_field_slider_pane_vc_t

0x8120,	// (0x00062fbb) input_focus_pane_cp9_vc_ParamLimits

0x8120,	// (0x00062fbb) input_focus_pane_cp9_vc

0x44fc,	// (0x0005f397) slider_cont_pane_vc_ParamLimits

0x44fc,	// (0x0005f397) slider_cont_pane_vc

0x4510,	// (0x0005f3ab) list_form_graphic_pane_cp_vc_ParamLimits

0x4510,	// (0x0005f3ab) list_form_graphic_pane_cp_vc

0x2661,	// (0x0005d4fc) form_field_popup_wide_pane_vc_g1

0x4525,	// (0x0005f3c0) form_field_popup_wide_pane_vc_t1_ParamLimits

0x4525,	// (0x0005f3c0) form_field_popup_wide_pane_vc_t1

0x83b6,	// (0x00063251) input_focus_pane_cp8_vc_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_cp8_vc

0x456a,	// (0x0005f405) list_form_wide_pane_vc_ParamLimits

0x456a,	// (0x0005f405) list_form_wide_pane_vc

0x4576,	// (0x0005f411) list_form_graphic_pane_vc_g1

0x457e,	// (0x0005f419) list_form_graphic_pane_vc_t1_ParamLimits

0x457e,	// (0x0005f419) list_form_graphic_pane_vc_t1

0x7ff6,	// (0x00062e91) list_highlight_pane_cp5_vc_ParamLimits

0x7ff6,	// (0x00062e91) list_highlight_pane_cp5_vc

0x459a,	// (0x0005f435) list_form_graphic_pane_vc_ParamLimits

0x459a,	// (0x0005f435) list_form_graphic_pane_vc

0x2661,	// (0x0005d4fc) form_field_popup_pane_vc_g1

0x45b0,	// (0x0005f44b) form_field_popup_pane_vc_t1_ParamLimits

0x45b0,	// (0x0005f44b) form_field_popup_pane_vc_t1

0x83b6,	// (0x00063251) input_focus_pane_cp7_vc_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_cp7_vc

0x45c7,	// (0x0005f462) list_form_pane_vc_ParamLimits

0x45c7,	// (0x0005f462) list_form_pane_vc

0x45d3,	// (0x0005f46e) data_form_pane_vc_t1_ParamLimits

0x45d3,	// (0x0005f46e) data_form_pane_vc_t1

0x8411,	// (0x000632ac) input_focus_pane_vc_g1

0x8419,	// (0x000632b4) input_focus_pane_vc_g2

0x8421,	// (0x000632bc) input_focus_pane_vc_g3

0x8429,	// (0x000632c4) input_focus_pane_vc_g4

0x8431,	// (0x000632cc) input_focus_pane_vc_g5

0x8439,	// (0x000632d4) input_focus_pane_vc_g6

0x8441,	// (0x000632dc) input_focus_pane_vc_g7

0x8449,	// (0x000632e4) input_focus_pane_vc_g8

0x8451,	// (0x000632ec) input_focus_pane_vc_g9

0x7f9e,	// (0x00062e39) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0006a52c) input_focus_pane_vc_g

0x2655,	// (0x0005d4f0) data_form_pane_vc_ParamLimits

0x2655,	// (0x0005d4f0) data_form_pane_vc

0x2661,	// (0x0005d4fc) form_field_data_pane_vc_g1

0x45ee,	// (0x0005f489) form_field_data_pane_vc_t1_ParamLimits

0x45ee,	// (0x0005f489) form_field_data_pane_vc_t1

0x83b6,	// (0x00063251) input_focus_pane_vc_ParamLimits

0x83b6,	// (0x00063251) input_focus_pane_vc

0x4608,	// (0x0005f4a3) button_value_adjust_pane_cp3_vc

0x4610,	// (0x0005f4ab) button_value_adjust_pane_cp5_vc

0x4618,	// (0x0005f4b3) form_field_data_pane_vc_ParamLimits

0x4618,	// (0x0005f4b3) form_field_data_pane_vc

0x462f,	// (0x0005f4ca) form_field_data_pane_vc_cp2

0x4637,	// (0x0005f4d2) form_field_data_wide_pane_vc_ParamLimits

0x4637,	// (0x0005f4d2) form_field_data_wide_pane_vc

0x464d,	// (0x0005f4e8) form_field_data_wide_pane_vc_cp2

0x4655,	// (0x0005f4f0) form_field_popup_pane_vc_ParamLimits

0x4655,	// (0x0005f4f0) form_field_popup_pane_vc

0x466c,	// (0x0005f507) form_field_popup_wide_pane_vc_ParamLimits

0x466c,	// (0x0005f507) form_field_popup_wide_pane_vc

0x4682,	// (0x0005f51d) form_field_slider_pane_vc_ParamLimits

0x4682,	// (0x0005f51d) form_field_slider_pane_vc

0x4695,	// (0x0005f530) form_field_slider_wide_pane_vc_ParamLimits

0x4695,	// (0x0005f530) form_field_slider_wide_pane_vc

0xca3b,	// (0x000678d6) grid_touch_1_pane_ParamLimits

0xca3b,	// (0x000678d6) grid_touch_1_pane

0xca4f,	// (0x000678ea) grid_touch_2_pane_ParamLimits

0xca4f,	// (0x000678ea) grid_touch_2_pane

0x4763,	// (0x0005f5fe) touch_pane_g1_ParamLimits

0x4763,	// (0x0005f5fe) touch_pane_g1

0x46cc,	// (0x0005f567) cell_app_pane_cp_wide_ParamLimits

0x46cc,	// (0x0005f567) cell_app_pane_cp_wide

0x46dd,	// (0x0005f578) grid_popup_fast_wide_pane_ParamLimits

0x46dd,	// (0x0005f578) grid_popup_fast_wide_pane

0x46f1,	// (0x0005f58c) scroll_pane_cp19_ParamLimits

0x46f1,	// (0x0005f58c) scroll_pane_cp19

0x7fa8,	// (0x00062e43) bg_popup_window_pane_cp20

0x4705,	// (0x0005f5a0) listscroll_popup_fast_wide_pane

0xca79,	// (0x00067914) grid_indicator_nsta_pane

0x470d,	// (0x0005f5a8) clock_nsta_pane_g1

0x4716,	// (0x0005f5b1) clock_nsta_pane_t1

0xca87,	// (0x00067922) cell_indicator_nsta_pane_ParamLimits

0xca87,	// (0x00067922) cell_indicator_nsta_pane

0x4763,	// (0x0005f5fe) cell_indicator_nsta_pane_g1

0xca9e,	// (0x00067939) cell_indicator_nsta_pane_g2

0x0001,

0xfaaa,	// (0x0006a945) cell_indicator_nsta_pane_g

0x477e,	// (0x0005f619) clock_nsta_pane_cp

0x4786,	// (0x0005f621) indicator_nsta_pane_cp

0x478e,	// (0x0005f629) nsta_clock_indic_pane_g1

0x8032,	// (0x00062ecd) grid_indicator_pane

0xa35e,	// (0x000651f9) scroll_pane_cp29

0xf30f,	// (0x0006a1aa) indicator_nsta_pane_cp2_ParamLimits

0xf30f,	// (0x0006a1aa) indicator_nsta_pane_cp2

0x7ff6,	// (0x00062e91) main_apps_wheel_pane

0xc13a,	// (0x00066fd5) form_midp_field_text_pane_ParamLimits

0x29c2,	// (0x0005d85d) scroll_bar_cp050_ParamLimits

0x47ef,	// (0x0005f68a) cell_indicator_pane_ParamLimits

0x47ef,	// (0x0005f68a) cell_indicator_pane

0x4808,	// (0x0005f6a3) cell_indicator_pane_g1

0xcabd,	// (0x00067958) grid_wheel_folder_pane_ParamLimits

0xcabd,	// (0x00067958) grid_wheel_folder_pane

0xcacb,	// (0x00067966) list_wheel_apps_pane_ParamLimits

0xcacb,	// (0x00067966) list_wheel_apps_pane

0xcad9,	// (0x00067974) main_apps_wheel_pane_g1_ParamLimits

0xcad9,	// (0x00067974) main_apps_wheel_pane_g1

0xcae5,	// (0x00067980) main_apps_wheel_pane_g2_ParamLimits

0xcae5,	// (0x00067980) main_apps_wheel_pane_g2

0x0001,

0xfac6,	// (0x0006a961) main_apps_wheel_pane_g_ParamLimits

0xfac6,	// (0x0006a961) main_apps_wheel_pane_g

0xcaf3,	// (0x0006798e) main_apps_wheel_pane_t1_ParamLimits

0xcaf3,	// (0x0006798e) main_apps_wheel_pane_t1

0xcb07,	// (0x000679a2) list_wheel_apps_pane_g1

0xcb0f,	// (0x000679aa) list_wheel_apps_pane_g2

0xcb17,	// (0x000679b2) list_wheel_apps_pane_g3

0xcb1f,	// (0x000679ba) list_wheel_apps_pane_g4

0xcb29,	// (0x000679c4) list_wheel_apps_pane_g5

0x0004,

0xfacb,	// (0x0006a966) list_wheel_apps_pane_g

0xe0e5,	// (0x00068f80) navi_icon_text_pane

0xbc3b,	// (0x00066ad6) aid_fill_nsta

0x48cf,	// (0x0005f76a) navi_icon_text_pane_g1

0x48db,	// (0x0005f776) navi_icon_text_pane_t1

0xdfd5,	// (0x00068e70) list_set_graphic_pane_t1_ParamLimits

0xdfd5,	// (0x00068e70) list_set_graphic_pane_t1

0x30f1,	// (0x0005df8c) popup_midp_note_alarm_window_t6_ParamLimits

0x30f1,	// (0x0005df8c) popup_midp_note_alarm_window_t6

0x3103,	// (0x0005df9e) popup_midp_note_alarm_window_t7_ParamLimits

0x3103,	// (0x0005df9e) popup_midp_note_alarm_window_t7

0x3115,	// (0x0005dfb0) popup_midp_note_alarm_window_t8_ParamLimits

0x3115,	// (0x0005dfb0) popup_midp_note_alarm_window_t8

0x3127,	// (0x0005dfc2) popup_midp_note_alarm_window_t9_ParamLimits

0x3127,	// (0x0005dfc2) popup_midp_note_alarm_window_t9

0x3139,	// (0x0005dfd4) popup_midp_note_alarm_window_t10_ParamLimits

0x3139,	// (0x0005dfd4) popup_midp_note_alarm_window_t10

0x314b,	// (0x0005dfe6) popup_midp_note_alarm_window_t11_ParamLimits

0x314b,	// (0x0005dfe6) popup_midp_note_alarm_window_t11

0xc492,	// (0x0006732d) scroll_pane_cp17_ParamLimits

0xc492,	// (0x0006732d) scroll_pane_cp17

0x084a,	// (0x0005b6e5) volume_small_pane_cp_g1

0x0c3d,	// (0x0005bad8) volume_small_pane_cp_g2

0x0c46,	// (0x0005bae1) volume_small_pane_cp_g3

0x0c4f,	// (0x0005baea) volume_small_pane_cp_g4

0x0c58,	// (0x0005baf3) volume_small_pane_cp_g5

0x0c07,	// (0x0005baa2) volume_small_pane_cp_g6

0x0c61,	// (0x0005bafc) volume_small_pane_cp_g7

0x0c6a,	// (0x0005bb05) volume_small_pane_cp_g8

0x0c73,	// (0x0005bb0e) volume_small_pane_cp_g9

0x0c7c,	// (0x0005bb17) volume_small_pane_cp_g10

0x1df1,	// (0x0005cc8c) midp_ticker_pane_g1_ParamLimits

0x1dfd,	// (0x0005cc98) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0006a5f8) midp_ticker_pane_g_ParamLimits

0x1e09,	// (0x0005cca4) midp_ticker_pane_t1_ParamLimits

0xbc5f,	// (0x00066afa) aid_fill_nsta_2

0x29ae,	// (0x0005d849) list_form2_midp_pane

0x3ab6,	// (0x0005e951) midp_editing_number_pane_ParamLimits

0x3ac5,	// (0x0005e960) midp_ticker_pane_ParamLimits

0x48ed,	// (0x0005f788) form2_midp_field_pane

0x4911,	// (0x0005f7ac) scroll_pane_cp51

0x4931,	// (0x0005f7cc) form2_midp_button_pane_ParamLimits

0x4931,	// (0x0005f7cc) form2_midp_button_pane

0x4943,	// (0x0005f7de) form2_midp_content_pane_ParamLimits

0x4943,	// (0x0005f7de) form2_midp_content_pane

0x495d,	// (0x0005f7f8) form2_midp_field_choice_group_pane

0x4965,	// (0x0005f800) form2_midp_field_pane_g1

0x496d,	// (0x0005f808) form2_midp_field_pane_g2

0x4975,	// (0x0005f810) form2_midp_field_pane_g3

0x497d,	// (0x0005f818) form2_midp_field_pane_g4

0x0003,

0xfaf0,	// (0x0006a98b) form2_midp_field_pane_g

0x4985,	// (0x0005f820) form2_midp_gauge_slider_pane

0x498d,	// (0x0005f828) form2_midp_gauge_wait_pane

0x4995,	// (0x0005f830) form2_midp_image_pane_ParamLimits

0x4995,	// (0x0005f830) form2_midp_image_pane

0xcb5c,	// (0x000679f7) form2_midp_label_pane_ParamLimits

0xcb5c,	// (0x000679f7) form2_midp_label_pane

0xcb75,	// (0x00067a10) form2_midp_label_pane_cp_ParamLimits

0xcb75,	// (0x00067a10) form2_midp_label_pane_cp

0x49ea,	// (0x0005f885) form2_midp_string_pane_ParamLimits

0x49ea,	// (0x0005f885) form2_midp_string_pane

0xb2cf,	// (0x0006616a) form2_midp_text_pane_ParamLimits

0xb2cf,	// (0x0006616a) form2_midp_text_pane

0x49fc,	// (0x0005f897) form2_midp_time_pane

0x4a0c,	// (0x0005f8a7) input_focus_pane_cp51_ParamLimits

0x4a0c,	// (0x0005f8a7) input_focus_pane_cp51

0xcb94,	// (0x00067a2f) form2_midp_label_pane_t1_ParamLimits

0xcb94,	// (0x00067a2f) form2_midp_label_pane_t1

0xb2ec,	// (0x00066187) form2_mdip_text_pane_t1_ParamLimits

0xb2ec,	// (0x00066187) form2_mdip_text_pane_t1

0xe574,	// (0x0006940f) form2_midp_time_pane_t1

0x4a6d,	// (0x0005f908) form2_midp_gauge_slider_pane_t1

0xcbd4,	// (0x00067a6f) form2_midp_gauge_slider_pane_t2

0xcbe6,	// (0x00067a81) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf9,	// (0x0006a994) form2_midp_gauge_slider_pane_t

0x4aa3,	// (0x0005f93e) form2_midp_slider_pane

0x4aaf,	// (0x0005f94a) form2_midp_gauge_wait_pane_t1

0x4abd,	// (0x0005f958) form2_midp_wait_pane_ParamLimits

0x4abd,	// (0x0005f958) form2_midp_wait_pane

0xcbf8,	// (0x00067a93) list_single_2graphic_pane_cp4_ParamLimits

0xcbf8,	// (0x00067a93) list_single_2graphic_pane_cp4

0xc090,	// (0x00066f2b) list_single_midp_graphic_pane_cp_ParamLimits

0xc090,	// (0x00066f2b) list_single_midp_graphic_pane_cp

0x7fa8,	// (0x00062e43) list_highlight_pane_cp20

0x4b10,	// (0x0005f9ab) list_single_2graphic_pane_g1_cp4

0x4108,	// (0x0005efa3) list_single_2graphic_pane_g2_cp4

0x4b18,	// (0x0005f9b3) list_single_2graphic_pane_t1_cp4

0x7ff6,	// (0x00062e91) list_highlight_pane_cp21

0x4b27,	// (0x0005f9c2) list_single_midp_graphic_pane_g4_cp

0x4b36,	// (0x0005f9d1) list_single_midp_graphic_pane_t1_cp

0xcc0d,	// (0x00067aa8) form2_mdip_string_pane_t1_ParamLimits

0xcc0d,	// (0x00067aa8) form2_mdip_string_pane_t1

0x7fa8,	// (0x00062e43) bg_wml_button_pane_cp2

0x7f9e,	// (0x00062e39) form2_midp_image_pane_g1

0xdede,	// (0x00068d79) list_double_large_graphic_pane_g5_ParamLimits

0xdede,	// (0x00068d79) list_double_large_graphic_pane_g5

0x2056,	// (0x0005cef1) midp_form_pane_ParamLimits

0x7ff6,	// (0x00062e91) main_apps_wheel_pane_ParamLimits

0xad8f,	// (0x00065c2a) popup_preview_window_ParamLimits

0xad8f,	// (0x00065c2a) popup_preview_window

0xb05c,	// (0x00065ef7) popup_touch_info_window_ParamLimits

0xb05c,	// (0x00065ef7) popup_touch_info_window

0xb07a,	// (0x00065f15) popup_touch_menu_window_ParamLimits

0xb07a,	// (0x00065f15) popup_touch_menu_window

0x7f94,	// (0x00062e2f) bg_popup_sub_pane_cp6

0x4c58,	// (0x0005faf3) list_touch_menu_pane

0xcc85,	// (0x00067b20) list_single_touch_menu_pane_ParamLimits

0xcc85,	// (0x00067b20) list_single_touch_menu_pane

0xcc99,	// (0x00067b34) list_single_touch_menu_pane_t1

0x7ff6,	// (0x00062e91) bg_popup_sub_pane_cp7_ParamLimits

0x7ff6,	// (0x00062e91) bg_popup_sub_pane_cp7

0x4c84,	// (0x0005fb1f) heading_sub_pane

0x4c8c,	// (0x0005fb27) list_touch_info_pane_ParamLimits

0x4c8c,	// (0x0005fb27) list_touch_info_pane

0x4c9b,	// (0x0005fb36) list_single_touch_info_pane_ParamLimits

0x4c9b,	// (0x0005fb36) list_single_touch_info_pane

0x4cad,	// (0x0005fb48) list_single_touch_info_pane_t1

0x4cbb,	// (0x0005fb56) list_single_touch_info_pane_t2

0x0001,

0xfb07,	// (0x0006a9a2) list_single_touch_info_pane_t

0xf49d,	// (0x0006a338) bg_popup_heading_pane_cp

0x4cc9,	// (0x0005fb64) heading_sub_pane_t1

0x25ef,	// (0x0005d48a) bg_popup_preview_window_pane_cp_ParamLimits

0x25ef,	// (0x0005d48a) bg_popup_preview_window_pane_cp

0x4c84,	// (0x0005fb1f) heading_preview_pane

0x4c8c,	// (0x0005fb27) list_preview_pane_ParamLimits

0x4c8c,	// (0x0005fb27) list_preview_pane

0x4cd7,	// (0x0005fb72) popup_preview_window_g1

0x4c9b,	// (0x0005fb36) list_single_preview_pane_ParamLimits

0x4c9b,	// (0x0005fb36) list_single_preview_pane

0x4cdf,	// (0x0005fb7a) list_single_preview_pane_g1

0x4ce7,	// (0x0005fb82) list_single_preview_pane_t1

0x4cad,	// (0x0005fb48) list_single_preview_pane_t2

0x0001,

0xfb0c,	// (0x0006a9a7) list_single_preview_pane_t

0x4cf5,	// (0x0005fb90) bg_popup_heading_pane_cp2_ParamLimits

0x4cf5,	// (0x0005fb90) bg_popup_heading_pane_cp2

0x4d0b,	// (0x0005fba6) heading_preview_pane_g1

0x4d13,	// (0x0005fbae) heading_preview_pane_t1_ParamLimits

0x4d13,	// (0x0005fbae) heading_preview_pane_t1

0x8049,	// (0x00062ee4) soft_indicator_pane_t1_ParamLimits

0x8332,	// (0x000631cd) scroll_pane_ParamLimits

0x86bf,	// (0x0006355a) scroll_sc2_left_pane

0x86c8,	// (0x00063563) scroll_sc2_right_pane

0x86e7,	// (0x00063582) scroll_bg_pane_g1_ParamLimits

0x86fc,	// (0x00063597) scroll_bg_pane_g2_ParamLimits

0x8714,	// (0x000635af) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0006a583) scroll_bg_pane_g_ParamLimits

0x86e7,	// (0x00063582) scroll_handle_pane_g1_ParamLimits

0x8729,	// (0x000635c4) scroll_handle_pane_g2_ParamLimits

0x8714,	// (0x000635af) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0006a58a) scroll_handle_pane_g_ParamLimits

0xa936,	// (0x000657d1) popup_choice_list_window_ParamLimits

0xa936,	// (0x000657d1) popup_choice_list_window

0x24ad,	// (0x0005d348) choice_list_pane

0x252f,	// (0x0005d3ca) cell_toolbar_pane_t1

0x2557,	// (0x0005d3f2) toolbar_button_pane_ParamLimits

0x3617,	// (0x0005e4b2) ai_gene_pane_1_t2_ParamLimits

0x3617,	// (0x0005e4b2) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0006a7ad) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0006a7ad) ai_gene_pane_1_t

0x4d30,	// (0x0005fbcb) scroll_sc2_left_pane_g1

0x4d30,	// (0x0005fbcb) scroll_sc2_right_pane_g1

0x2056,	// (0x0005cef1) bg_popup_sub_pane_cp10

0x4d3a,	// (0x0005fbd5) list_choice_list_pane

0xcca7,	// (0x00067b42) list_single_choice_list_pane_ParamLimits

0xcca7,	// (0x00067b42) list_single_choice_list_pane

0xccba,	// (0x00067b55) list_single_choice_list_pane_g1

0xa188,	// (0x00065023) list_single_choice_list_pane_t1_ParamLimits

0xa188,	// (0x00065023) list_single_choice_list_pane_t1

0x4d6e,	// (0x0005fc09) choice_list_pane_g1

0xccc2,	// (0x00067b5d) choice_list_pane_t1

0x7f94,	// (0x00062e2f) input_focus_pane_cp11

0x8634,	// (0x000634cf) title_pane_stacon_g2_ParamLimits

0x8634,	// (0x000634cf) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0006a569) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0006a569) title_pane_stacon_g

0xf49d,	// (0x0006a338) cursor_press_pane

0xa9dd,	// (0x00065878) popup_fep_hwr_window_ParamLimits

0xa9dd,	// (0x00065878) popup_fep_hwr_window

0x026b,	// (0x0005b106) popup_fep_vkb_window_ParamLimits

0x026b,	// (0x0005b106) popup_fep_vkb_window

0xccd0,	// (0x00067b6b) cursor_press_pane_g1

0x0002,

0xfb35,	// (0x0006a9d0) fep_vkb_side_pane_g_ParamLimits

0x0cf9,	// (0x0005bb94) fep_hwr_candidate_pane_ParamLimits

0x0cf9,	// (0x0005bb94) fep_hwr_candidate_pane

0x0d23,	// (0x0005bbbe) fep_hwr_side_pane_ParamLimits

0x0d23,	// (0x0005bbbe) fep_hwr_side_pane

0x0d43,	// (0x0005bbde) fep_hwr_top_pane_ParamLimits

0x0d43,	// (0x0005bbde) fep_hwr_top_pane

0x0d5b,	// (0x0005bbf6) fep_hwr_write_pane_ParamLimits

0x0d5b,	// (0x0005bbf6) fep_hwr_write_pane

0xfb35,	// (0x0006a9d0) fep_vkb_side_pane_g

0x4d8c,	// (0x0005fc27) fep_hwr_top_pane_g1

0x4d9e,	// (0x0005fc39) fep_hwr_top_pane_g2

0x0d95,	// (0x0005bc30) fep_hwr_top_pane_g3

0x0002,

0xfb11,	// (0x0006a9ac) fep_hwr_top_pane_g

0x0daa,	// (0x0005bc45) fep_hwr_top_text_pane

0x87ec,	// (0x00063687) fep_hwr_top_text_pane_g1

0x4dd4,	// (0x0005fc6f) fep_hwr_top_text_pane_t1

0x0ea0,	// (0x0005bd3b) fep_hwr_candidate_pane_g1

0x5019,	// (0x0005feb4) fep_vkb_keypad_pane_g3_ParamLimits

0x5019,	// (0x0005feb4) fep_vkb_keypad_pane_g3

0x5041,	// (0x0005fedc) fep_vkb_keypad_pane_g4_ParamLimits

0x5041,	// (0x0005fedc) fep_vkb_keypad_pane_g4

0x50b0,	// (0x0005ff4b) fep_vkb_bottom_pane_g2_ParamLimits

0x50b0,	// (0x0005ff4b) fep_vkb_bottom_pane_g2

0x0001,

0xfb3c,	// (0x0006a9d7) fep_vkb_bottom_pane_g_ParamLimits

0xfb3c,	// (0x0006a9d7) fep_vkb_bottom_pane_g

0x4d30,	// (0x0005fbcb) cell_vkb_side_pane_g2

0x0001,

0xfb46,	// (0x0006a9e1) cell_vkb_side_pane_g

0x513b,	// (0x0005ffd6) cell_vkb_side_pane_t1

0x5149,	// (0x0005ffe4) cell_vkb_side_pane_t1_copy1

0x4d30,	// (0x0005fbcb) bg_fep_vkb_candidate_pane_g2

0x5275,	// (0x00060110) cell_vkb_candidate_pane_ParamLimits

0x4de2,	// (0x0005fc7d) aid_size_cell_vkb_ParamLimits

0x4de2,	// (0x0005fc7d) aid_size_cell_vkb

0x5275,	// (0x00060110) cell_vkb_candidate_pane

0x0ec7,	// (0x0005bd62) bg_popup_fep_shadow_pane_g1

0xccea,	// (0x00067b85) fep_vkb_bottom_pane_ParamLimits

0xccea,	// (0x00067b85) fep_vkb_bottom_pane

0x4ea6,	// (0x0005fd41) fep_vkb_candidate_pane_ParamLimits

0x4ea6,	// (0x0005fd41) fep_vkb_candidate_pane

0xcd0f,	// (0x00067baa) fep_vkb_keypad_pane_ParamLimits

0xcd0f,	// (0x00067baa) fep_vkb_keypad_pane

0xcd44,	// (0x00067bdf) fep_vkb_side_pane_ParamLimits

0xcd44,	// (0x00067bdf) fep_vkb_side_pane

0xcd80,	// (0x00067c1b) fep_vkb_top_pane_ParamLimits

0xcd80,	// (0x00067c1b) fep_vkb_top_pane

0x4f72,	// (0x0005fe0d) fep_vkb_top_pane_g1_ParamLimits

0x4f72,	// (0x0005fe0d) fep_vkb_top_pane_g1

0x4f81,	// (0x0005fe1c) fep_vkb_top_pane_g2_ParamLimits

0x4f81,	// (0x0005fe1c) fep_vkb_top_pane_g2

0x4f90,	// (0x0005fe2b) fep_vkb_top_pane_g3_ParamLimits

0x4f90,	// (0x0005fe2b) fep_vkb_top_pane_g3

0x0003,

0xfb2c,	// (0x0006a9c7) fep_vkb_top_pane_g_ParamLimits

0xfb2c,	// (0x0006a9c7) fep_vkb_top_pane_g

0x4fae,	// (0x0005fe49) fep_vkb_top_text_pane_ParamLimits

0x4fae,	// (0x0005fe49) fep_vkb_top_text_pane

0xcdb5,	// (0x00067c50) fep_vkb_side_pane_g1_ParamLimits

0xcdb5,	// (0x00067c50) fep_vkb_side_pane_g1

0x5008,	// (0x0005fea3) grid_vkb_side_pane_ParamLimits

0x5008,	// (0x0005fea3) grid_vkb_side_pane

0x0ecf,	// (0x0005bd6a) bg_popup_fep_shadow_pane_g2

0x0ed8,	// (0x0005bd73) bg_popup_fep_shadow_pane_g3

0x0ee0,	// (0x0005bd7b) bg_popup_fep_shadow_pane_g4

0x0ee9,	// (0x0005bd84) bg_popup_fep_shadow_pane_g5

0x0ef3,	// (0x0005bd8e) bg_popup_fep_shadow_pane_g6

0x0efb,	// (0x0005bd96) bg_popup_fep_shadow_pane_g7

0x8429,	// (0x000632c4) bg_popup_fep_shadow_pane_g8

0x505f,	// (0x0005fefa) grid_vkb_keypad_number_pane_ParamLimits

0x505f,	// (0x0005fefa) grid_vkb_keypad_number_pane

0x506f,	// (0x0005ff0a) grid_vkb_keypad_pane_ParamLimits

0x506f,	// (0x0005ff0a) grid_vkb_keypad_pane

0x5095,	// (0x0005ff30) fep_vkb_bottom_pane_g1_ParamLimits

0x5095,	// (0x0005ff30) fep_vkb_bottom_pane_g1

0x50be,	// (0x0005ff59) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x50be,	// (0x0005ff59) grid_vkb_keypad_bottom_left_pane

0x50d3,	// (0x0005ff6e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x50d3,	// (0x0005ff6e) grid_vkb_keypad_bottom_right_pane

0x50e8,	// (0x0005ff83) fep_vkb_top_text_pane_g1

0xcdfc,	// (0x00067c97) fep_vkb_top_text_pane_t1

0xce0e,	// (0x00067ca9) cell_vkb_side_pane_ParamLimits

0xce0e,	// (0x00067ca9) cell_vkb_side_pane

0x4d30,	// (0x0005fbcb) cell_vkb_side_pane_g1

0x5157,	// (0x0005fff2) cell_vkb_keypad_pane_ParamLimits

0x5157,	// (0x0005fff2) cell_vkb_keypad_pane

0x51cc,	// (0x00060067) cell_vkb_keypad_pane_g1

0x0008,

0xfb59,	// (0x0006a9f4) bg_popup_fep_shadow_pane_g

0x0f0d,	// (0x0005bda8) cell_hwr_side_pane_g1

0x0f0d,	// (0x0005bda8) cell_hwr_side_pane_g2

0x51d6,	// (0x00060071) cell_vkb_keypad_pane_t1

0xce24,	// (0x00067cbf) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xce24,	// (0x00067cbf) cell_vkb_keypad_bottom_left_pane

0xce39,	// (0x00067cd4) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xce39,	// (0x00067cd4) cell_vkb_keypad_bottom_right_pane

0x4d30,	// (0x0005fbcb) cell_vkb_keypad_bottom_left_pane_g1

0x4d30,	// (0x0005fbcb) cell_vkb_keypad_bottom_right_pane_g1

0x523a,	// (0x000600d5) cell_vkb_keypad_number_pane_ParamLimits

0x523a,	// (0x000600d5) cell_vkb_keypad_number_pane

0x5259,	// (0x000600f4) cell_vkb_keypad_number_pane_g1

0x5263,	// (0x000600fe) cell_vkb_keypad_number_pane_g2

0x526c,	// (0x00060107) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4b,	// (0x0006a9e6) cell_vkb_keypad_number_pane_g

0x51d6,	// (0x00060071) cell_vkb_keypad_number_pane_t1

0x5290,	// (0x0006012b) fep_vkb_candidate_pane_g1

0x0001,

0xfb6c,	// (0x0006aa07) cell_hwr_side_pane_g

0x52a9,	// (0x00060144) cell_hwr_side_pane_t1

0x0f17,	// (0x0005bdb2) cell_hwr_side_pane_t1_copy1

0x0f25,	// (0x0005bdc0) cell_hwr_candidate_pane_g1

0x0f54,	// (0x0005bdef) cell_hwr_candidate_pane_t1

0x4d30,	// (0x0005fbcb) cell_vkb_candidate_pane_g2

0x52ed,	// (0x00060188) cell_vkb_candidate_pane_t1

0x0cc0,	// (0x0005bb5b) bg_popup_fep_shadow_pane_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_popup_fep_shadow_pane

0x0d75,	// (0x0005bc10) bg_fep_hwr_top_pane_g4

0x4db0,	// (0x0005fc4b) bg_hwr_side_pane_g1_ParamLimits

0x4db0,	// (0x0005fc4b) bg_hwr_side_pane_g1

0xb31f,	// (0x000661ba) cell_hwr_side_pane_ParamLimits

0xb31f,	// (0x000661ba) cell_hwr_side_pane

0x0e21,	// (0x0005bcbc) fep_hwr_write_pane_g1_ParamLimits

0x0e21,	// (0x0005bcbc) fep_hwr_write_pane_g1

0x0e2e,	// (0x0005bcc9) fep_hwr_write_pane_g2_ParamLimits

0x0e2e,	// (0x0005bcc9) fep_hwr_write_pane_g2

0x0e3b,	// (0x0005bcd6) fep_hwr_write_pane_g3_ParamLimits

0x0e3b,	// (0x0005bcd6) fep_hwr_write_pane_g3

0xb33f,	// (0x000661da) fep_hwr_write_pane_g4_ParamLimits

0xb33f,	// (0x000661da) fep_hwr_write_pane_g4

0x0005,

0xfb18,	// (0x0006a9b3) fep_hwr_write_pane_g_ParamLimits

0xfb18,	// (0x0006a9b3) fep_hwr_write_pane_g

0x0d75,	// (0x0005bc10) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0d75,	// (0x0005bc10) bg_fep_hwr_candidate_pane_g2

0x0e5e,	// (0x0005bcf9) cell_hwr_candidate_pane_ParamLimits

0x0e5e,	// (0x0005bcf9) cell_hwr_candidate_pane

0x0ea0,	// (0x0005bd3b) fep_hwr_candidate_pane_g1_ParamLimits

0x4e10,	// (0x0005fcab) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4e10,	// (0x0005fcab) bg_popup_fep_shadow_pane_cp2

0x4fa0,	// (0x0005fe3b) fep_vkb_top_pane_g4_ParamLimits

0x4fa0,	// (0x0005fe3b) fep_vkb_top_pane_g4

0x4fe6,	// (0x0005fe81) fep_vkb_side_pane_g2_ParamLimits

0x4fe6,	// (0x0005fe81) fep_vkb_side_pane_g2

0x9e83,	// (0x00064d1e) list_setting_pane_t4_ParamLimits

0x9e83,	// (0x00064d1e) list_setting_pane_t4

0x9f1d,	// (0x00064db8) list_setting_number_pane_t5_ParamLimits

0x9f1d,	// (0x00064db8) list_setting_number_pane_t5

0x8823,	// (0x000636be) list_double_heading_pane_cp2_ParamLimits

0x8823,	// (0x000636be) list_double_heading_pane_cp2

0x3ef4,	// (0x0005ed8f) list_double_heading_pane_g1_cp2_ParamLimits

0x3ef4,	// (0x0005ed8f) list_double_heading_pane_g1_cp2

0x52fb,	// (0x00060196) list_double_heading_pane_g2_cp2_ParamLimits

0x52fb,	// (0x00060196) list_double_heading_pane_g2_cp2

0x530f,	// (0x000601aa) list_double_heading_pane_t1_cp2_ParamLimits

0x530f,	// (0x000601aa) list_double_heading_pane_t1_cp2

0x5325,	// (0x000601c0) list_double_heading_pane_t2_cp2_ParamLimits

0x5325,	// (0x000601c0) list_double_heading_pane_t2_cp2

0x7f8c,	// (0x00062e27) aid_value_unit2

0xf0a0,	// (0x00069f3b) popup_preview_fixed_window

0x812e,	// (0x00062fc9) bg_popup_preview_window_pane_cp02

0x5337,	// (0x000601d2) list_preview_fixed_pane

0x537d,	// (0x00060218) list_empty_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_empty_pane_fp

0x537d,	// (0x00060218) list_single_cale_day_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_cale_day_pane_fp

0x537d,	// (0x00060218) list_single_graphic_heading_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_graphic_heading_pane_fp

0x537d,	// (0x00060218) list_single_graphic_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_graphic_pane_fp

0x537d,	// (0x00060218) list_single_heading_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_heading_pane_fp

0x537d,	// (0x00060218) list_single_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_pane_fp

0x5393,	// (0x0006022e) list_single_pane_fp_g1_ParamLimits

0x5393,	// (0x0006022e) list_single_pane_fp_g1

0x539f,	// (0x0006023a) list_single_pane_fp_g2_ParamLimits

0x539f,	// (0x0006023a) list_single_pane_fp_g2

0x53ab,	// (0x00060246) list_single_pane_fp_g3_ParamLimits

0x53ab,	// (0x00060246) list_single_pane_fp_g3

0x53bf,	// (0x0006025a) list_single_pane_fp_g4_ParamLimits

0x53bf,	// (0x0006025a) list_single_pane_fp_g4

0x0003,

0xfb7f,	// (0x0006aa1a) list_single_pane_fp_g_ParamLimits

0xfb7f,	// (0x0006aa1a) list_single_pane_fp_g

0xe594,	// (0x0006942f) list_single_pane_fp_t1_ParamLimits

0xe594,	// (0x0006942f) list_single_pane_fp_t1

0xe5ab,	// (0x00069446) list_single_graphic_pane_fp_g1_ParamLimits

0xe5ab,	// (0x00069446) list_single_graphic_pane_fp_g1

0x5393,	// (0x0006022e) list_single_graphic_pane_fp_g2_ParamLimits

0x5393,	// (0x0006022e) list_single_graphic_pane_fp_g2

0x539f,	// (0x0006023a) list_single_graphic_pane_fp_g3_ParamLimits

0x539f,	// (0x0006023a) list_single_graphic_pane_fp_g3

0x53ab,	// (0x00060246) list_single_graphic_pane_fp_g4_ParamLimits

0x53ab,	// (0x00060246) list_single_graphic_pane_fp_g4

0x53bf,	// (0x0006025a) list_single_graphic_pane_fp_g5_ParamLimits

0x53bf,	// (0x0006025a) list_single_graphic_pane_fp_g5

0x0004,

0xfb88,	// (0x0006aa23) list_single_graphic_pane_fp_g_ParamLimits

0xfb88,	// (0x0006aa23) list_single_graphic_pane_fp_g

0xe5b7,	// (0x00069452) list_single_graphic_pane_fp_t1_ParamLimits

0xe5b7,	// (0x00069452) list_single_graphic_pane_fp_t1

0xe5ab,	// (0x00069446) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xe5ab,	// (0x00069446) list_single_graphic_heading_pane_fp_g1

0x5393,	// (0x0006022e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x5393,	// (0x0006022e) list_single_graphic_heading_pane_fp_g2

0x539f,	// (0x0006023a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x539f,	// (0x0006023a) list_single_graphic_heading_pane_fp_g3

0x53ab,	// (0x00060246) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x53ab,	// (0x00060246) list_single_graphic_heading_pane_fp_g4

0x53bf,	// (0x0006025a) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x53bf,	// (0x0006025a) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb88,	// (0x0006aa23) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb88,	// (0x0006aa23) list_single_graphic_heading_pane_fp_g

0xe5cd,	// (0x00069468) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xe5cd,	// (0x00069468) list_single_graphic_heading_pane_fp_t1

0xe5e3,	// (0x0006947e) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xe5e3,	// (0x0006947e) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb93,	// (0x0006aa2e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb93,	// (0x0006aa2e) list_single_graphic_heading_pane_fp_t

0xe5f5,	// (0x00069490) list_single_cale_day_pane_fp_g1_ParamLimits

0xe5f5,	// (0x00069490) list_single_cale_day_pane_fp_g1

0x53cb,	// (0x00060266) list_single_cale_day_pane_fp_g2_ParamLimits

0x53cb,	// (0x00060266) list_single_cale_day_pane_fp_g2

0x3e1f,	// (0x0005ecba) list_single_cale_day_pane_fp_g3_ParamLimits

0x3e1f,	// (0x0005ecba) list_single_cale_day_pane_fp_g3

0x3e47,	// (0x0005ece2) list_single_cale_day_pane_fp_g4_ParamLimits

0x3e47,	// (0x0005ece2) list_single_cale_day_pane_fp_g4

0x3e6b,	// (0x0005ed06) list_single_cale_day_pane_fp_g5_ParamLimits

0x3e6b,	// (0x0005ed06) list_single_cale_day_pane_fp_g5

0x0004,

0xfb98,	// (0x0006aa33) list_single_cale_day_pane_fp_g_ParamLimits

0xfb98,	// (0x0006aa33) list_single_cale_day_pane_fp_g

0xe62d,	// (0x000694c8) list_single_cale_day_pane_fp_t1_ParamLimits

0xe62d,	// (0x000694c8) list_single_cale_day_pane_fp_t1

0xe653,	// (0x000694ee) list_single_cale_day_pane_fp_t2_ParamLimits

0xe653,	// (0x000694ee) list_single_cale_day_pane_fp_t2

0xe66c,	// (0x00069507) list_single_cale_day_pane_fp_t3_ParamLimits

0xe66c,	// (0x00069507) list_single_cale_day_pane_fp_t3

0x0002,

0xfba3,	// (0x0006aa3e) list_single_cale_day_pane_fp_t_ParamLimits

0xfba3,	// (0x0006aa3e) list_single_cale_day_pane_fp_t

0x5393,	// (0x0006022e) list_empty_pane_fp_g1_ParamLimits

0x5393,	// (0x0006022e) list_empty_pane_fp_g1

0xe685,	// (0x00069520) list_empty_pane_fp_t1

0xe693,	// (0x0006952e) list_empty_pane_fp_t2

0x0001,

0xfbaa,	// (0x0006aa45) list_empty_pane_fp_t

0x5393,	// (0x0006022e) list_single_heading_pane_fp_g1_ParamLimits

0x5393,	// (0x0006022e) list_single_heading_pane_fp_g1

0x539f,	// (0x0006023a) list_single_heading_pane_fp_g2_ParamLimits

0x539f,	// (0x0006023a) list_single_heading_pane_fp_g2

0x53ab,	// (0x00060246) list_single_heading_pane_fp_g3_ParamLimits

0x53ab,	// (0x00060246) list_single_heading_pane_fp_g3

0x0002,

0xfbaf,	// (0x0006aa4a) list_single_heading_pane_fp_g_ParamLimits

0xfbaf,	// (0x0006aa4a) list_single_heading_pane_fp_g

0xe6a1,	// (0x0006953c) list_single_heading_pane_fp_t1_ParamLimits

0xe6a1,	// (0x0006953c) list_single_heading_pane_fp_t1

0xe6b3,	// (0x0006954e) list_single_heading_pane_fp_t2_ParamLimits

0xe6b3,	// (0x0006954e) list_single_heading_pane_fp_t2

0x0001,

0xfbb6,	// (0x0006aa51) list_single_heading_pane_fp_t_ParamLimits

0xfbb6,	// (0x0006aa51) list_single_heading_pane_fp_t

0xa1d4,	// (0x0006506f) aid_size_cell_fast

0x8103,	// (0x00062f9e) soft_indicator_pane_cp1_t1

0xa1dd,	// (0x00065078) cell_app_pane_cp2_ParamLimits

0xa1dd,	// (0x00065078) cell_app_pane_cp2

0x0ce2,	// (0x0005bb7d) fep_hwr_candidate_drop_down_list_pane

0x0eba,	// (0x0005bd55) fep_hwr_candidate_pane_g3_ParamLimits

0x0eba,	// (0x0005bd55) fep_hwr_candidate_pane_g3

0xe587,	// (0x00069422) fep_hwr_candidate_pane_g4_ParamLimits

0xe587,	// (0x00069422) fep_hwr_candidate_pane_g4

0x0002,

0xfb25,	// (0x0006a9c0) fep_hwr_candidate_pane_g_ParamLimits

0xfb25,	// (0x0006a9c0) fep_hwr_candidate_pane_g

0x4e95,	// (0x0005fd30) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4e95,	// (0x0005fd30) fep_vkb_candidate_drop_down_list_pane

0x5298,	// (0x00060133) fep_vkb_candidate_pane_g3

0x52a0,	// (0x0006013b) fep_vkb_candidate_pane_g4

0x0002,

0xfb52,	// (0x0006a9ed) fep_vkb_candidate_pane_g

0x0f25,	// (0x0005bdc0) cell_hwr_candidate_pane_g1_ParamLimits

0x0f33,	// (0x0005bdce) cell_hwr_candidate_pane_g3_ParamLimits

0x0f33,	// (0x0005bdce) cell_hwr_candidate_pane_g3

0x607d,	// (0x00060f18) cell_hwr_candidate_pane_g4_ParamLimits

0x607d,	// (0x00060f18) cell_hwr_candidate_pane_g4

0x0002,

0xfb71,	// (0x0006aa0c) cell_hwr_candidate_pane_g_ParamLimits

0xfb71,	// (0x0006aa0c) cell_hwr_candidate_pane_g

0x52b7,	// (0x00060152) cell_vkb_candidate_pane_g3_ParamLimits

0x52b7,	// (0x00060152) cell_vkb_candidate_pane_g3

0x52d2,	// (0x0006016d) cell_vkb_candidate_pane_g4_ParamLimits

0x52d2,	// (0x0006016d) cell_vkb_candidate_pane_g4

0xce54,	// (0x00067cef) cell_app_pane_cp2_g1_ParamLimits

0xce54,	// (0x00067cef) cell_app_pane_cp2_g1

0x53f5,	// (0x00060290) cell_app_pane_cp2_g2_ParamLimits

0x53f5,	// (0x00060290) cell_app_pane_cp2_g2

0x0001,

0xfbbb,	// (0x0006aa56) cell_app_pane_cp2_g_ParamLimits

0xfbbb,	// (0x0006aa56) cell_app_pane_cp2_g

0x5401,	// (0x0006029c) cell_app_pane_cp2_t1_ParamLimits

0x5401,	// (0x0006029c) cell_app_pane_cp2_t1

0x83b6,	// (0x00063251) grid_highlight_pane_cp1_ParamLimits

0x83b6,	// (0x00063251) grid_highlight_pane_cp1

0x0f72,	// (0x0005be0d) cell_hwr_candidate_pane_cp1_ParamLimits

0x0f72,	// (0x0005be0d) cell_hwr_candidate_pane_cp1

0x0f25,	// (0x0005bdc0) fep_hwr_candidate_drop_down_list_pane_g1

0x0f91,	// (0x0005be2c) fep_hwr_candidate_drop_down_list_pane_g2

0x0f9e,	// (0x0005be39) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc0,	// (0x0006aa5b) fep_hwr_candidate_drop_down_list_pane_g

0x0fab,	// (0x0005be46) fep_hwr_candidate_drop_down_list_scroll_pane

0x0fb4,	// (0x0005be4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0fb4,	// (0x0005be4f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x0fc1,	// (0x0005be5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x0fc1,	// (0x0005be5c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x0fce,	// (0x0005be69) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0fce,	// (0x0005be69) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x0fdb,	// (0x0005be76) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x0fdb,	// (0x0005be76) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x0ff6,	// (0x0005be91) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x0ff6,	// (0x0005be91) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1011,	// (0x0005beac) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1011,	// (0x0005beac) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x102c,	// (0x0005bec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x102c,	// (0x0005bec7) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1047,	// (0x0005bee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1047,	// (0x0005bee2) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc7,	// (0x0006aa62) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc7,	// (0x0006aa62) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x5413,	// (0x000602ae) cell_vkb_candidate_pane_cp1_ParamLimits

0x5413,	// (0x000602ae) cell_vkb_candidate_pane_cp1

0x4fa0,	// (0x0005fe3b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4fa0,	// (0x0005fe3b) fep_vkb_candidate_drop_down_list_pane_g1

0x5433,	// (0x000602ce) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5433,	// (0x000602ce) fep_vkb_candidate_drop_down_list_pane_g2

0x5440,	// (0x000602db) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5440,	// (0x000602db) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd8,	// (0x0006aa73) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd8,	// (0x0006aa73) fep_vkb_candidate_drop_down_list_pane_g

0x544d,	// (0x000602e8) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x544d,	// (0x000602e8) fep_vkb_candidate_drop_down_list_scroll_pane

0x545a,	// (0x000602f5) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x545a,	// (0x000602f5) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x5467,	// (0x00060302) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5467,	// (0x00060302) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5473,	// (0x0006030e) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5473,	// (0x0006030e) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x547f,	// (0x0006031a) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x547f,	// (0x0006031a) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x54a0,	// (0x0006033b) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x54a0,	// (0x0006033b) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x54c1,	// (0x0006035c) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x54c1,	// (0x0006035c) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x54e2,	// (0x0006037d) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x54e2,	// (0x0006037d) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5503,	// (0x0006039e) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5503,	// (0x0006039e) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdf,	// (0x0006aa7a) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdf,	// (0x0006aa7a) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x94da,	// (0x00064375) title_pane_g1_ParamLimits

0x94ed,	// (0x00064388) title_pane_g2_ParamLimits

0xf54e,	// (0x0006a3e9) title_pane_g_ParamLimits

0x87dc,	// (0x00063677) aid_call2_pane

0x87e4,	// (0x0006367f) aid_call_pane

0x87ec,	// (0x00063687) popup_clock_analogue_window_g1

0x87ec,	// (0x00063687) popup_clock_analogue_window_g2

0xf253,	// (0x0006a0ee) popup_clock_analogue_window_g3

0xf25c,	// (0x0006a0f7) popup_clock_analogue_window_g4

0x7f9e,	// (0x00062e39) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0006a598) popup_clock_analogue_window_g

0xf264,	// (0x0006a0ff) popup_clock_analogue_window_t1

0xf272,	// (0x0006a10d) clock_digital_number_pane_ParamLimits

0xf272,	// (0x0006a10d) clock_digital_number_pane

0xf27e,	// (0x0006a119) clock_digital_number_pane_cp02_ParamLimits

0xf27e,	// (0x0006a119) clock_digital_number_pane_cp02

0xf28a,	// (0x0006a125) clock_digital_number_pane_cp03_ParamLimits

0xf28a,	// (0x0006a125) clock_digital_number_pane_cp03

0xf296,	// (0x0006a131) clock_digital_number_pane_cp04_ParamLimits

0xf296,	// (0x0006a131) clock_digital_number_pane_cp04

0xf2a2,	// (0x0006a13d) clock_digital_separator_pane_ParamLimits

0xf2a2,	// (0x0006a13d) clock_digital_separator_pane

0xf2ae,	// (0x0006a149) popup_clock_digital_window_t1_ParamLimits

0xf2ae,	// (0x0006a149) popup_clock_digital_window_t1

0x7f9e,	// (0x00062e39) clock_digital_number_pane_g1

0x7f9e,	// (0x00062e39) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0006a5a3) clock_digital_number_pane_g

0x7f9e,	// (0x00062e39) clock_digital_separator_pane_g1

0x7f9e,	// (0x00062e39) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0006a5a3) clock_digital_separator_pane_g

0xbc3b,	// (0x00066ad6) aid_fill_nsta_ParamLimits

0xbd71,	// (0x00066c0c) indicator_nsta_pane_ParamLimits

0x233d,	// (0x0005d1d8) popup_clock_analogue_window

0x233d,	// (0x0005d1d8) popup_clock_digital_window

0xca79,	// (0x00067914) grid_indicator_nsta_pane_ParamLimits

0x4724,	// (0x0005f5bf) clock_nsta_pane_t2

0x0001,

0xfaa5,	// (0x0006a940) clock_nsta_pane_t

0xf234,	// (0x0006a0cf) aid_size_max_handle

0xa2bb,	// (0x00065156) aid_size_min_handle

0xf49d,	// (0x0006a338) editor_scroll_pane

0x551e,	// (0x000603b9) ex_editor_pane

0x84d8,	// (0x00063373) scroll_pane_cp13

0x835e,	// (0x000631f9) scroll_pane_cp14

0x881b,	// (0x000636b6) scroll_pane_cp36

0xa385,	// (0x00065220) list_single_graphic_hl_pane_cp2_ParamLimits

0xa385,	// (0x00065220) list_single_graphic_hl_pane_cp2

0xc87b,	// (0x00067716) list_single_graphic_hl_pane_ParamLimits

0xc87b,	// (0x00067716) list_single_graphic_hl_pane

0xb354,	// (0x000661ef) aid_size_min_hl_cp1

0x5526,	// (0x000603c1) list_highlight_pane_cp34_ParamLimits

0x5526,	// (0x000603c1) list_highlight_pane_cp34

0x5537,	// (0x000603d2) list_single_graphic_hl_pane_g1_ParamLimits

0x5537,	// (0x000603d2) list_single_graphic_hl_pane_g1

0xb35d,	// (0x000661f8) list_single_graphic_hl_pane_g2_ParamLimits

0xb35d,	// (0x000661f8) list_single_graphic_hl_pane_g2

0xb35d,	// (0x000661f8) list_single_graphic_hl_pane_g3_ParamLimits

0xb35d,	// (0x000661f8) list_single_graphic_hl_pane_g3

0xe196,	// (0x00069031) list_single_graphic_hl_pane_g4_ParamLimits

0xe196,	// (0x00069031) list_single_graphic_hl_pane_g4

0x5574,	// (0x0006040f) list_single_graphic_hl_pane_g5_ParamLimits

0x5574,	// (0x0006040f) list_single_graphic_hl_pane_g5

0x0004,

0xfbf0,	// (0x0006aa8b) list_single_graphic_hl_pane_g_ParamLimits

0xfbf0,	// (0x0006aa8b) list_single_graphic_hl_pane_g

0xb369,	// (0x00066204) list_single_graphic_hl_pane_t1_ParamLimits

0xb369,	// (0x00066204) list_single_graphic_hl_pane_t1

0x5544,	// (0x000603df) aid_size_min_hl_cp2

0x554d,	// (0x000603e8) list_highlight_pane_cp34_cp2_ParamLimits

0x554d,	// (0x000603e8) list_highlight_pane_cp34_cp2

0x5537,	// (0x000603d2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x5537,	// (0x000603d2) list_single_graphic_hl_pane_g1_cp2

0x555a,	// (0x000603f5) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x555a,	// (0x000603f5) list_single_graphic_hl_pane_g2_cp2

0xce72,	// (0x00067d0d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xce72,	// (0x00067d0d) list_single_graphic_hl_pane_g3_cp2

0xe196,	// (0x00069031) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe196,	// (0x00069031) list_single_graphic_hl_pane_g4_cp2

0x5574,	// (0x0006040f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5574,	// (0x0006040f) list_single_graphic_hl_pane_g5_cp2

0xa7a8,	// (0x00065643) control_pane_g4_ParamLimits

0xa7a8,	// (0x00065643) control_pane_g4

0x2056,	// (0x0005cef1) bg_popup_sub_pane_cp10_ParamLimits

0x4d3a,	// (0x0005fbd5) list_choice_list_pane_ParamLimits

0x4d49,	// (0x0005fbe4) scroll_pane_cp23

0x812e,	// (0x00062fc9) bg_popup_preview_window_pane_cp02_ParamLimits

0x5337,	// (0x000601d2) list_preview_fixed_pane_ParamLimits

0x534d,	// (0x000601e8) list_preview_fixed_pane_cp_ParamLimits

0x534d,	// (0x000601e8) list_preview_fixed_pane_cp

0x5359,	// (0x000601f4) popup_preview_fixed_window_g1_ParamLimits

0x5359,	// (0x000601f4) popup_preview_fixed_window_g1

0x5365,	// (0x00060200) popup_preview_fixed_window_g2_ParamLimits

0x5365,	// (0x00060200) popup_preview_fixed_window_g2

0x0002,

0xfb78,	// (0x0006aa13) popup_preview_fixed_window_g_ParamLimits

0xfb78,	// (0x0006aa13) popup_preview_fixed_window_g

0xf1a8,	// (0x0006a043) aid_navi_side_left_pane_ParamLimits

0xf1bd,	// (0x0006a058) aid_navi_side_right_pane_ParamLimits

0xf1d5,	// (0x0006a070) navi_icon_pane_stacon_ParamLimits

0xf1e9,	// (0x0006a084) navi_navi_pane_stacon_ParamLimits

0xf1d5,	// (0x0006a070) navi_text_pane_stacon_ParamLimits

0xdd92,	// (0x00068c2d) main_text_info_pane

0x559e,	// (0x00060439) listscroll_text_info_pane

0x55a6,	// (0x00060441) list_text_info_pane_ParamLimits

0x55a6,	// (0x00060441) list_text_info_pane

0x55b5,	// (0x00060450) scroll_pane_cp24_ParamLimits

0x55b5,	// (0x00060450) scroll_pane_cp24

0xce80,	// (0x00067d1b) list_text_info_pane_t1_ParamLimits

0xce80,	// (0x00067d1b) list_text_info_pane_t1

0xa952,	// (0x000657ed) popup_fast_swap2_window_ParamLimits

0xa952,	// (0x000657ed) popup_fast_swap2_window

0x5607,	// (0x000604a2) aid_size_cell_fast2

0x7f94,	// (0x00062e2f) bg_popup_window_pane_cp17

0x29da,	// (0x0005d875) heading_pane_cp2

0x8262,	// (0x000630fd) listscroll_fast2_pane

0x5611,	// (0x000604ac) grid_fast2_pane

0x561b,	// (0x000604b6) listscroll_fast2_pane_g1

0x5623,	// (0x000604be) listscroll_fast2_pane_g2

0x0001,

0xfbfb,	// (0x0006aa96) listscroll_fast2_pane_g

0x84d8,	// (0x00063373) scroll_pane_cp26

0x562d,	// (0x000604c8) cell_fast2_pane_ParamLimits

0x562d,	// (0x000604c8) cell_fast2_pane

0x5642,	// (0x000604dd) cell_fast2_pane_g1

0x564b,	// (0x000604e6) cell_fast2_pane_g2

0x5654,	// (0x000604ef) cell_fast2_pane_g3

0x0002,

0xfc00,	// (0x0006aa9b) cell_fast2_pane_g

0x8295,	// (0x00063130) grid_highlight_pane_cp9

0x012f,	// (0x0005afca) main_eswt_pane_ParamLimits

0x012f,	// (0x0005afca) main_eswt_pane

0x55ca,	// (0x00060465) list_single_text_info_pane

0x565c,	// (0x000604f7) eswt_ctrl_button_pane

0x565c,	// (0x000604f7) eswt_ctrl_canvas_pane

0xce9c,	// (0x00067d37) eswt_ctrl_combo_pane

0x565c,	// (0x000604f7) eswt_ctrl_default_pane

0x565c,	// (0x000604f7) eswt_ctrl_label_pane

0x566c,	// (0x00060507) eswt_ctrl_wait_pane

0xcea4,	// (0x00067d3f) eswt_shell_pane

0x7f94,	// (0x00062e2f) listscroll_eswt_app_pane

0x5694,	// (0x0006052f) popup_eswt_tasktip_window_ParamLimits

0x5694,	// (0x0006052f) popup_eswt_tasktip_window

0x25ef,	// (0x0005d48a) bg_popup_window_pane_cp18

0x56a5,	// (0x00060540) eswt_control_pane_g1_ParamLimits

0x56a5,	// (0x00060540) eswt_control_pane_g1

0x56b2,	// (0x0006054d) eswt_control_pane_g2_ParamLimits

0x56b2,	// (0x0006054d) eswt_control_pane_g2

0x56bf,	// (0x0006055a) eswt_control_pane_g3_ParamLimits

0x56bf,	// (0x0006055a) eswt_control_pane_g3

0x56cc,	// (0x00060567) eswt_control_pane_g4_ParamLimits

0x56cc,	// (0x00060567) eswt_control_pane_g4

0x0003,

0xfc07,	// (0x0006aaa2) eswt_control_pane_g_ParamLimits

0xfc07,	// (0x0006aaa2) eswt_control_pane_g

0x83b6,	// (0x00063251) bg_button_pane_ParamLimits

0x83b6,	// (0x00063251) bg_button_pane

0x82aa,	// (0x00063145) common_borders_pane_copy2_ParamLimits

0x82aa,	// (0x00063145) common_borders_pane_copy2

0x56d9,	// (0x00060574) control_button_pane_g1_ParamLimits

0x56d9,	// (0x00060574) control_button_pane_g1

0x56e5,	// (0x00060580) control_button_pane_g2_ParamLimits

0x56e5,	// (0x00060580) control_button_pane_g2

0x56f1,	// (0x0006058c) control_button_pane_g3_ParamLimits

0x56f1,	// (0x0006058c) control_button_pane_g3

0x0002,

0xfc10,	// (0x0006aaab) control_button_pane_g_ParamLimits

0xfc10,	// (0x0006aaab) control_button_pane_g

0x5705,	// (0x000605a0) control_button_pane_t1

0x5713,	// (0x000605ae) control_button_pane_t2

0x0001,

0xfc17,	// (0x0006aab2) control_button_pane_t

0x2563,	// (0x0005d3fe) bg_button_pane_g1

0x2573,	// (0x0005d40e) bg_button_pane_g2

0x256b,	// (0x0005d406) bg_button_pane_g3

0x2583,	// (0x0005d41e) bg_button_pane_g4

0x257b,	// (0x0005d416) bg_button_pane_g5

0x258b,	// (0x0005d426) bg_button_pane_g6

0x2593,	// (0x0005d42e) bg_button_pane_g7

0x25a3,	// (0x0005d43e) bg_button_pane_g8

0x259b,	// (0x0005d436) bg_button_pane_g9

0x0008,

0xf866,	// (0x0006a701) bg_button_pane_g

0x4cf5,	// (0x0005fb90) common_borders_pane_ParamLimits

0x4cf5,	// (0x0005fb90) common_borders_pane

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy1_ParamLimits

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy1

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy1_ParamLimits

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy1

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy1_ParamLimits

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy1

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy1_ParamLimits

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy1

0x4d30,	// (0x0005fbcb) bg_eswt_ctrl_canvas_pane_g1

0x4cf5,	// (0x0005fb90) common_borders_pane_cp2_ParamLimits

0x4cf5,	// (0x0005fb90) common_borders_pane_cp2

0x4cf5,	// (0x0005fb90) common_borders_pane_cp3_ParamLimits

0x4cf5,	// (0x0005fb90) common_borders_pane_cp3

0x5721,	// (0x000605bc) separator_horizontal_pane

0x5729,	// (0x000605c4) separator_vertical_pane

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy2_ParamLimits

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy2

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy2_ParamLimits

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy2

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy2_ParamLimits

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy2

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy2_ParamLimits

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy2

0x7f94,	// (0x00062e2f) common_borders_pane_cp4

0x5732,	// (0x000605cd) separator_horizontal_pane_g1

0x573b,	// (0x000605d6) separator_horizontal_pane_g2

0x5744,	// (0x000605df) separator_horizontal_pane_g3

0x0002,

0xfc1c,	// (0x0006aab7) separator_horizontal_pane_g

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy3_ParamLimits

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy3

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy3_ParamLimits

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy3

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy3_ParamLimits

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy3

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy3_ParamLimits

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy3

0x7f94,	// (0x00062e2f) common_borders_pane_cp5

0x574d,	// (0x000605e8) separator_vertical_pane_g1

0x5756,	// (0x000605f1) separator_vertical_pane_g2

0x575f,	// (0x000605fa) separator_vertical_pane_g3

0x0002,

0xfc23,	// (0x0006aabe) separator_vertical_pane_g

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy4_ParamLimits

0x56a5,	// (0x00060540) eswt_control_pane_g1_copy4

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy4_ParamLimits

0x56b2,	// (0x0006054d) eswt_control_pane_g2_copy4

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy4_ParamLimits

0x56bf,	// (0x0006055a) eswt_control_pane_g3_copy4

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy4_ParamLimits

0x56cc,	// (0x00060567) eswt_control_pane_g4_copy4

0xcec4,	// (0x00067d5f) eswt_ctrl_combo_button_pane

0xcecc,	// (0x00067d67) eswt_ctrl_input_pane

0xced4,	// (0x00067d6f) popup_choice_list_window_cp70

0xcedc,	// (0x00067d77) eswt_ctrl_input_pane_t1

0x7f94,	// (0x00062e2f) input_focus_pane_cp70

0x4cf5,	// (0x0005fb90) bg_button_pane_cp70_ParamLimits

0x4cf5,	// (0x0005fb90) bg_button_pane_cp70

0xceea,	// (0x00067d85) eswt_ctrl_combo_button_pane_g1

0x5796,	// (0x00060631) wait_bar_pane_cp70

0x25ef,	// (0x0005d48a) bg_popup_window_pane_cp70_ParamLimits

0x25ef,	// (0x0005d48a) bg_popup_window_pane_cp70

0x579e,	// (0x00060639) popup_eswt_tasktip_window_t1

0x57b4,	// (0x0006064f) wait_bar_pane_cp71_ParamLimits

0x57b4,	// (0x0006064f) wait_bar_pane_cp71

0x57c0,	// (0x0006065b) grid_eswt_app_pane

0x86bf,	// (0x0006355a) scroll_pane_cp70

0xcef2,	// (0x00067d8d) cell_eswt_app_pane_ParamLimits

0xcef2,	// (0x00067d8d) cell_eswt_app_pane

0xcf1c,	// (0x00067db7) cell_eswt_app_pane_g1_ParamLimits

0xcf1c,	// (0x00067db7) cell_eswt_app_pane_g1

0xcf4b,	// (0x00067de6) cell_eswt_app_pane_g2_ParamLimits

0xcf4b,	// (0x00067de6) cell_eswt_app_pane_g2

0x0001,

0xfc2a,	// (0x0006aac5) cell_eswt_app_pane_g_ParamLimits

0xfc2a,	// (0x0006aac5) cell_eswt_app_pane_g

0xcf6f,	// (0x00067e0a) cell_eswt_app_pane_t1_ParamLimits

0xcf6f,	// (0x00067e0a) cell_eswt_app_pane_t1

0x587e,	// (0x00060719) grid_highlight_pane_cp70_ParamLimits

0x587e,	// (0x00060719) grid_highlight_pane_cp70

0xe13a,	// (0x00068fd5) set_content_pane_g1

0xa73a,	// (0x000655d5) status_small_volume_pane

0xb37f,	// (0x0006621a) status_small_volume_pane_g1

0xb387,	// (0x00066222) volume_small2_pane

0xb390,	// (0x0006622b) volume_small2_pane_g1

0xb399,	// (0x00066234) volume_small2_pane_g2

0xb3a2,	// (0x0006623d) volume_small2_pane_g3

0xb3ab,	// (0x00066246) volume_small2_pane_g4

0xb3b4,	// (0x0006624f) volume_small2_pane_g5

0xb3bd,	// (0x00066258) volume_small2_pane_g6

0xb3c6,	// (0x00066261) volume_small2_pane_g7

0xb3cf,	// (0x0006626a) volume_small2_pane_g8

0xb3d8,	// (0x00066273) volume_small2_pane_g9

0xb3e1,	// (0x0006627c) volume_small2_pane_g10

0x0009,

0xfc2f,	// (0x0006aaca) volume_small2_pane_g

0x50e8,	// (0x0005ff83) fep_vkb_top_text_pane_g1_ParamLimits

0xcdfc,	// (0x00067c97) fep_vkb_top_text_pane_t1_ParamLimits

0x5371,	// (0x0006020c) popup_preview_fixed_window_g3_ParamLimits

0x5371,	// (0x0006020c) popup_preview_fixed_window_g3

0xafef,	// (0x00065e8a) popup_toolbar_trans_pane

0xc701,	// (0x0006759c) aid_height_set_list_ParamLimits

0x392f,	// (0x0005e7ca) aid_size_parent_ParamLimits

0x2056,	// (0x0005cef1) list_highlight_pane_cp2_ParamLimits

0xe13a,	// (0x00068fd5) set_content_pane_g1_ParamLimits

0xc88d,	// (0x00067728) list_single_image_pane_ParamLimits

0xc88d,	// (0x00067728) list_single_image_pane

0xcfa1,	// (0x00067e3c) aid_size_cell_image_ParamLimits

0xcfa1,	// (0x00067e3c) aid_size_cell_image

0xcfae,	// (0x00067e49) grid_single_image_pane_ParamLimits

0xcfae,	// (0x00067e49) grid_single_image_pane

0x539f,	// (0x0006023a) list_single_image_pane_g1_ParamLimits

0x539f,	// (0x0006023a) list_single_image_pane_g1

0x53ab,	// (0x00060246) list_single_image_pane_g2_ParamLimits

0x53ab,	// (0x00060246) list_single_image_pane_g2

0x0001,

0xfc44,	// (0x0006aadf) list_single_image_pane_g_ParamLimits

0xfc44,	// (0x0006aadf) list_single_image_pane_g

0x58a5,	// (0x00060740) list_single_image_pane_t1_ParamLimits

0x58a5,	// (0x00060740) list_single_image_pane_t1

0xcfba,	// (0x00067e55) cell_image_list_pane_ParamLimits

0xcfba,	// (0x00067e55) cell_image_list_pane

0xcfce,	// (0x00067e69) cell_image_list_pane_g1

0xcfd7,	// (0x00067e72) cell_image_list_pane_g2

0x0001,

0xfc49,	// (0x0006aae4) cell_image_list_pane_g

0xcfe0,	// (0x00067e7b) aid_size_cell_tb_trans_pane

0x83b6,	// (0x00063251) bg_tb_trans_pane

0xcff2,	// (0x00067e8d) grid_tb_trans_pane

0x2563,	// (0x0005d3fe) bg_tb_trans_pane_g1

0x2573,	// (0x0005d40e) bg_tb_trans_pane_g2

0x256b,	// (0x0005d406) bg_tb_trans_pane_g3

0x2583,	// (0x0005d41e) bg_tb_trans_pane_g4

0x257b,	// (0x0005d416) bg_tb_trans_pane_g5

0x25a3,	// (0x0005d43e) bg_tb_trans_pane_g6

0x259b,	// (0x0005d436) bg_tb_trans_pane_g7

0x258b,	// (0x0005d426) bg_tb_trans_pane_g8

0x2593,	// (0x0005d42e) bg_tb_trans_pane_g9

0x0008,

0xfc4e,	// (0x0006aae9) bg_tb_trans_pane_g

0xd006,	// (0x00067ea1) cell_toolbar_trans_pane_ParamLimits

0xd006,	// (0x00067ea1) cell_toolbar_trans_pane

0x4d30,	// (0x0005fbcb) cell_toolbar_trans_pane_g1

0xcb40,	// (0x000679db) list_form2_midp_pane_t1

0xcb4e,	// (0x000679e9) list_form2_midp_pane_t2

0x0001,

0xfaeb,	// (0x0006a986) list_form2_midp_pane_t

0x4911,	// (0x0005f7ac) scroll_pane_cp51_ParamLimits

0x4acd,	// (0x0005f968) form2_midp_wait_pane_g1

0x4ad6,	// (0x0005f971) form2_midp_wait_pane_g2

0x4adf,	// (0x0005f97a) form2_midp_wait_pane_g3

0x0002,

0xfb00,	// (0x0006a99b) form2_midp_wait_pane_g

0x7ff6,	// (0x00062e91) list_highlight_pane_cp21_ParamLimits

0x4b27,	// (0x0005f9c2) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x4b36,	// (0x0005f9d1) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3ae7,	// (0x0005e982) list_single_2graphic_im_pane_ParamLimits

0x3ae7,	// (0x0005e982) list_single_2graphic_im_pane

0xd02c,	// (0x00067ec7) list_single_2graphic_im_pane_g1_ParamLimits

0xd02c,	// (0x00067ec7) list_single_2graphic_im_pane_g1

0xd03d,	// (0x00067ed8) list_single_2graphic_im_pane_g2_ParamLimits

0xd03d,	// (0x00067ed8) list_single_2graphic_im_pane_g2

0xd049,	// (0x00067ee4) list_single_2graphic_im_pane_g3_ParamLimits

0xd049,	// (0x00067ee4) list_single_2graphic_im_pane_g3

0x0003,

0xfc61,	// (0x0006aafc) list_single_2graphic_im_pane_g_ParamLimits

0xfc61,	// (0x0006aafc) list_single_2graphic_im_pane_g

0xd05d,	// (0x00067ef8) list_single_2graphic_im_pane_t1_ParamLimits

0xd05d,	// (0x00067ef8) list_single_2graphic_im_pane_t1

0x537d,	// (0x00060218) list_single_graphic_2heading_pane_fp_ParamLimits

0x537d,	// (0x00060218) list_single_graphic_2heading_pane_fp

0xe5ab,	// (0x00069446) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xe5ab,	// (0x00069446) list_single_graphic_2heading_pane_fp_g1

0x5393,	// (0x0006022e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x5393,	// (0x0006022e) list_single_graphic_2heading_pane_fp_g2

0x539f,	// (0x0006023a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x539f,	// (0x0006023a) list_single_graphic_2heading_pane_fp_g3

0x53ab,	// (0x00060246) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x53ab,	// (0x00060246) list_single_graphic_2heading_pane_fp_g4

0x53bf,	// (0x0006025a) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x53bf,	// (0x0006025a) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb88,	// (0x0006aa23) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb88,	// (0x0006aa23) list_single_graphic_2heading_pane_fp_g

0xe6c9,	// (0x00069564) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xe6c9,	// (0x00069564) list_single_graphic_2heading_pane_fp_t1

0xe5e3,	// (0x0006947e) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xe5e3,	// (0x0006947e) list_single_graphic_2heading_pane_fp_t2

0xe6df,	// (0x0006957a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xe6df,	// (0x0006957a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6a,	// (0x0006ab05) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6a,	// (0x0006ab05) list_single_graphic_2heading_pane_fp_t

0x4dbc,	// (0x0005fc57) fep_hwr_write_pane_g5_ParamLimits

0x4dbc,	// (0x0005fc57) fep_hwr_write_pane_g5

0x4dc8,	// (0x0005fc63) fep_hwr_write_pane_g6_ParamLimits

0x4dc8,	// (0x0005fc63) fep_hwr_write_pane_g6

0xcea4,	// (0x00067d3f) eswt_shell_pane_ParamLimits

0x25ef,	// (0x0005d48a) bg_popup_window_pane_cp18_ParamLimits

0x3877,	// (0x0005e712) heading_pane_cp70

0x579e,	// (0x00060639) popup_eswt_tasktip_window_t1_ParamLimits

0xbc96,	// (0x00066b31) aid_touch_tab_arrow_left

0xbcac,	// (0x00066b47) aid_touch_tab_arrow_right

0x9505,	// (0x000643a0) title_pane_g3_ParamLimits

0x9505,	// (0x000643a0) title_pane_g3

0x837e,	// (0x00063219) set_value_pane_g1

0xafef,	// (0x00065e8a) popup_toolbar_trans_pane_ParamLimits

0xcfe0,	// (0x00067e7b) aid_size_cell_tb_trans_pane_ParamLimits

0x83b6,	// (0x00063251) bg_tb_trans_pane_ParamLimits

0xcff2,	// (0x00067e8d) grid_tb_trans_pane_ParamLimits

0x812e,	// (0x00062fc9) cont_note_pane_ParamLimits

0x812e,	// (0x00062fc9) cont_note_pane

0x82aa,	// (0x00063145) cont_snote2_single_text_pane_ParamLimits

0x82aa,	// (0x00063145) cont_snote2_single_text_pane

0x82aa,	// (0x00063145) cont_snote2_single_graphic_pane_ParamLimits

0x82aa,	// (0x00063145) cont_snote2_single_graphic_pane

0x2bed,	// (0x0005da88) cont_note_wait_pane_ParamLimits

0x2bed,	// (0x0005da88) cont_note_wait_pane

0x2bed,	// (0x0005da88) cont_note_image_pane_ParamLimits

0x2bed,	// (0x0005da88) cont_note_image_pane

0x599b,	// (0x00060836) popup_note2_window_g1_ParamLimits

0x599b,	// (0x00060836) popup_note2_window_g1

0xd09b,	// (0x00067f36) popup_note2_window_t1_ParamLimits

0xd09b,	// (0x00067f36) popup_note2_window_t1

0xd0e0,	// (0x00067f7b) popup_note2_window_t2_ParamLimits

0xd0e0,	// (0x00067f7b) popup_note2_window_t2

0xd125,	// (0x00067fc0) popup_note2_window_t3_ParamLimits

0xd125,	// (0x00067fc0) popup_note2_window_t3

0x5a9b,	// (0x00060936) popup_note2_window_t4_ParamLimits

0x5a9b,	// (0x00060936) popup_note2_window_t4

0x81b2,	// (0x0006304d) popup_note2_window_t5_ParamLimits

0x81b2,	// (0x0006304d) popup_note2_window_t5

0x0004,

0xfc76,	// (0x0006ab11) popup_note2_window_t_ParamLimits

0xfc76,	// (0x0006ab11) popup_note2_window_t

0x5aca,	// (0x00060965) popup_note2_image_window_g1_ParamLimits

0x5aca,	// (0x00060965) popup_note2_image_window_g1

0xd16a,	// (0x00068005) popup_note2_image_window_g2_ParamLimits

0xd16a,	// (0x00068005) popup_note2_image_window_g2

0x0001,

0xfc81,	// (0x0006ab1c) popup_note2_image_window_g_ParamLimits

0xfc81,	// (0x0006ab1c) popup_note2_image_window_g

0x5ae8,	// (0x00060983) popup_note2_image_window_t1_ParamLimits

0x5ae8,	// (0x00060983) popup_note2_image_window_t1

0x5b00,	// (0x0006099b) popup_note2_image_window_t2_ParamLimits

0x5b00,	// (0x0006099b) popup_note2_image_window_t2

0x5b18,	// (0x000609b3) popup_note2_image_window_t3_ParamLimits

0x5b18,	// (0x000609b3) popup_note2_image_window_t3

0x0002,

0xfc86,	// (0x0006ab21) popup_note2_image_window_t_ParamLimits

0xfc86,	// (0x0006ab21) popup_note2_image_window_t

0x2bfb,	// (0x0005da96) popup_note2_wait_window_g1_ParamLimits

0x2bfb,	// (0x0005da96) popup_note2_wait_window_g1

0x2c07,	// (0x0005daa2) popup_note2_wait_window_g2_ParamLimits

0x2c07,	// (0x0005daa2) popup_note2_wait_window_g2

0x2c13,	// (0x0005daae) popup_note2_wait_window_g3_ParamLimits

0x2c13,	// (0x0005daae) popup_note2_wait_window_g3

0x0002,

0xf848,	// (0x0006a6e3) popup_note2_wait_window_g_ParamLimits

0xf848,	// (0x0006a6e3) popup_note2_wait_window_g

0x5b34,	// (0x000609cf) popup_note2_wait_window_t1_ParamLimits

0x5b34,	// (0x000609cf) popup_note2_wait_window_t1

0x5b52,	// (0x000609ed) popup_note2_wait_window_t2_ParamLimits

0x5b52,	// (0x000609ed) popup_note2_wait_window_t2

0x5b70,	// (0x00060a0b) popup_note2_wait_window_t3_ParamLimits

0x5b70,	// (0x00060a0b) popup_note2_wait_window_t3

0x5b82,	// (0x00060a1d) popup_note2_wait_window_t4_ParamLimits

0x5b82,	// (0x00060a1d) popup_note2_wait_window_t4

0x0003,

0xfc8d,	// (0x0006ab28) popup_note2_wait_window_t_ParamLimits

0xfc8d,	// (0x0006ab28) popup_note2_wait_window_t

0x5b94,	// (0x00060a2f) wait_bar2_pane_ParamLimits

0x5b94,	// (0x00060a2f) wait_bar2_pane

0x5bac,	// (0x00060a47) popup_snote2_single_text_window_g1_ParamLimits

0x5bac,	// (0x00060a47) popup_snote2_single_text_window_g1

0x5bd4,	// (0x00060a6f) popup_snote2_single_text_window_t1_ParamLimits

0x5bd4,	// (0x00060a6f) popup_snote2_single_text_window_t1

0x5c20,	// (0x00060abb) popup_snote2_single_text_window_t2_ParamLimits

0x5c20,	// (0x00060abb) popup_snote2_single_text_window_t2

0x5c6c,	// (0x00060b07) popup_snote2_single_text_window_t3_ParamLimits

0x5c6c,	// (0x00060b07) popup_snote2_single_text_window_t3

0x5cad,	// (0x00060b48) popup_snote2_single_text_window_t4_ParamLimits

0x5cad,	// (0x00060b48) popup_snote2_single_text_window_t4

0x5ce3,	// (0x00060b7e) popup_snote2_single_text_window_t5_ParamLimits

0x5ce3,	// (0x00060b7e) popup_snote2_single_text_window_t5

0x0004,

0xfc96,	// (0x0006ab31) popup_snote2_single_text_window_t_ParamLimits

0xfc96,	// (0x0006ab31) popup_snote2_single_text_window_t

0xd17c,	// (0x00068017) popup_snote2_single_graphic_window_g1_ParamLimits

0xd17c,	// (0x00068017) popup_snote2_single_graphic_window_g1

0x5d36,	// (0x00060bd1) popup_snote2_single_graphic_window_g2_ParamLimits

0x5d36,	// (0x00060bd1) popup_snote2_single_graphic_window_g2

0x0001,

0xfca1,	// (0x0006ab3c) popup_snote2_single_graphic_window_g_ParamLimits

0xfca1,	// (0x0006ab3c) popup_snote2_single_graphic_window_g

0x5d5e,	// (0x00060bf9) popup_snote2_single_graphic_window_t1_ParamLimits

0x5d5e,	// (0x00060bf9) popup_snote2_single_graphic_window_t1

0x5daa,	// (0x00060c45) popup_snote2_single_graphic_window_t2_ParamLimits

0x5daa,	// (0x00060c45) popup_snote2_single_graphic_window_t2

0x5c6c,	// (0x00060b07) popup_snote2_single_graphic_window_t3_ParamLimits

0x5c6c,	// (0x00060b07) popup_snote2_single_graphic_window_t3

0x5cad,	// (0x00060b48) popup_snote2_single_graphic_window_t4_ParamLimits

0x5cad,	// (0x00060b48) popup_snote2_single_graphic_window_t4

0x5ce3,	// (0x00060b7e) popup_snote2_single_graphic_window_t5_ParamLimits

0x5ce3,	// (0x00060b7e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca6,	// (0x0006ab41) popup_snote2_single_graphic_window_t_ParamLimits

0xfca6,	// (0x0006ab41) popup_snote2_single_graphic_window_t

0x47ce,	// (0x0005f669) clock_nsta_pane_cp2_t1

0x47ce,	// (0x0005f669) clock_nsta_pane_cp2_t2

0x0001,

0xfac1,	// (0x0006a95c) clock_nsta_pane_cp2_t

0xdf3c,	// (0x00068dd7) form_field_data_wide_pane_g1_ParamLimits

0x83c4,	// (0x0006325f) form_field_data_wide_pane_g2_ParamLimits

0x83c4,	// (0x0006325f) form_field_data_wide_pane_g2

0x83d0,	// (0x0006326b) form_field_data_wide_pane_g3_ParamLimits

0x83d0,	// (0x0006326b) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0006a51b) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0006a51b) form_field_data_wide_pane_g

0xca63,	// (0x000678fe) grid_touch_3_pane_ParamLimits

0xca63,	// (0x000678fe) grid_touch_3_pane

0xd1a4,	// (0x0006803f) cell_touch_3_pane_ParamLimits

0xd1a4,	// (0x0006803f) cell_touch_3_pane

0x4d30,	// (0x0005fbcb) cell_touch_3_pane_g1

0x4d30,	// (0x0005fbcb) cell_touch_3_pane_g2

0x0001,

0xfb46,	// (0x0006a9e1) cell_touch_3_pane_g

0x81e4,	// (0x0006307f) cont_query_data_pane

0x81ec,	// (0x00063087) cont_query_data_pane_cp1

0x5e24,	// (0x00060cbf) button_value_adjust_pane_cp7

0x5e2c,	// (0x00060cc7) query_popup_pane_cp3

0x884d,	// (0x000636e8) bg_popup_sub_pane_cp22_ParamLimits

0xa412,	// (0x000652ad) navi_navi_volume_pane_cp2

0xa421,	// (0x000652bc) popup_side_volume_key_window_g2

0xa430,	// (0x000652cb) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0006a5b1) popup_side_volume_key_window_g

0xa43f,	// (0x000652da) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0006a5b8) popup_side_volume_key_window_t

0xa590,	// (0x0006542b) popup_side_volume_key_window_ParamLimits

0x9c6b,	// (0x00064b06) list_double_graphic_pane_g4_ParamLimits

0x9c6b,	// (0x00064b06) list_double_graphic_pane_g4

0xc868,	// (0x00067703) list_single_2heading_msg_pane_ParamLimits

0xc868,	// (0x00067703) list_single_2heading_msg_pane

0xd1ed,	// (0x00068088) list_single_2heading_msg_pane_g1_ParamLimits

0xd1ed,	// (0x00068088) list_single_2heading_msg_pane_g1

0xd1f9,	// (0x00068094) list_single_2heading_msg_pane_g2_ParamLimits

0xd1f9,	// (0x00068094) list_single_2heading_msg_pane_g2

0xd20c,	// (0x000680a7) list_single_2heading_msg_pane_g3_ParamLimits

0xd20c,	// (0x000680a7) list_single_2heading_msg_pane_g3

0xd218,	// (0x000680b3) list_single_2heading_msg_pane_g4_ParamLimits

0xd218,	// (0x000680b3) list_single_2heading_msg_pane_g4

0x0003,

0xfcb1,	// (0x0006ab4c) list_single_2heading_msg_pane_g_ParamLimits

0xfcb1,	// (0x0006ab4c) list_single_2heading_msg_pane_g

0xb3ea,	// (0x00066285) list_single_2heading_msg_pane_t1_ParamLimits

0xb3ea,	// (0x00066285) list_single_2heading_msg_pane_t1

0xb412,	// (0x000662ad) list_single_2heading_msg_pane_t2_ParamLimits

0xb412,	// (0x000662ad) list_single_2heading_msg_pane_t2

0xb47d,	// (0x00066318) list_single_2heading_msg_pane_t3_ParamLimits

0xb47d,	// (0x00066318) list_single_2heading_msg_pane_t3

0xe6ff,	// (0x0006959a) list_single_2heading_msg_pane_t4_ParamLimits

0xe6ff,	// (0x0006959a) list_single_2heading_msg_pane_t4

0x0003,

0xfcba,	// (0x0006ab55) list_single_2heading_msg_pane_t_ParamLimits

0xfcba,	// (0x0006ab55) list_single_2heading_msg_pane_t

0x7fb2,	// (0x00062e4d) title_pane_g4_ParamLimits

0x7fb2,	// (0x00062e4d) title_pane_g4

0xf0f9,	// (0x00069f94) title_pane_stacon_g3_ParamLimits

0xf0f9,	// (0x00069f94) title_pane_stacon_g3

0x595e,	// (0x000607f9) list_single_2graphic_im_pane_g4_ParamLimits

0x595e,	// (0x000607f9) list_single_2graphic_im_pane_g4

0xc5ac,	// (0x00067447) popup_side_volume_key_window_cp

0x401b,	// (0x0005eeb6) main_idle_act2_pane_t1

0x0708,	// (0x0005b5a3) toolbar_button_pane_g10

0x9ae9,	// (0x00064984) popup_toolbar_window_cp1

0x47bf,	// (0x0005f65a) clock_nsta_pane_cp_t1

0x47bf,	// (0x0005f65a) clock_nsta_pane_cp_t2

0x0001,

0xfabc,	// (0x0006a957) clock_nsta_pane_cp_t

0xa412,	// (0x000652ad) navi_navi_volume_pane_cp2_ParamLimits

0xf2cd,	// (0x0006a168) popup_side_volume_key_window_g1_ParamLimits

0xa421,	// (0x000652bc) popup_side_volume_key_window_g2_ParamLimits

0xa430,	// (0x000652cb) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0006a5b1) popup_side_volume_key_window_g_ParamLimits

0x0cce,	// (0x0005bb69) fep_hwr_aid_pane

0x0d75,	// (0x0005bc10) bg_fep_hwr_top_pane_g4_ParamLimits

0x4d8c,	// (0x0005fc27) fep_hwr_top_pane_g1_ParamLimits

0x4d9e,	// (0x0005fc39) fep_hwr_top_pane_g2_ParamLimits

0x0d95,	// (0x0005bc30) fep_hwr_top_pane_g3_ParamLimits

0xfb11,	// (0x0006a9ac) fep_hwr_top_pane_g_ParamLimits

0x0daa,	// (0x0005bc45) fep_hwr_top_text_pane_ParamLimits

0x33f7,	// (0x0005e292) aid_touch_tab_arrow_arrow_2

0x3400,	// (0x0005e29b) aid_touch_tab_arrow_left_2

0x0ce2,	// (0x0005bb7d) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x0d19,	// (0x0005bbb4) fep_hwr_prediction_pane

0x4ef7,	// (0x0005fd92) fep_vkb_prediction_pane

0xcddc,	// (0x00067c77) fep_vkb_side_pane_g3_ParamLimits

0xcddc,	// (0x00067c77) fep_vkb_side_pane_g3

0x0f25,	// (0x0005bdc0) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x0f91,	// (0x0005be2c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x0f9e,	// (0x0005be39) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc0,	// (0x0006aa5b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x119c,	// (0x0005c037) fep_hwr_prediction_pane_g1

0x11a6,	// (0x0005c041) fep_hwr_prediction_pane_g2

0x11ae,	// (0x0005c049) fep_hwr_prediction_pane_g3

0x11b6,	// (0x0005c051) fep_hwr_prediction_pane_g4

0x0003,

0xfcc3,	// (0x0006ab5e) fep_hwr_prediction_pane_g

0x5e51,	// (0x00060cec) fep_vkb_prediction_pane_g1

0x5e5b,	// (0x00060cf6) fep_vkb_prediction_pane_g2

0x5e63,	// (0x00060cfe) fep_vkb_prediction_pane_g3

0x5e6b,	// (0x00060d06) fep_vkb_prediction_pane_g4

0x0003,

0xfccc,	// (0x0006ab67) fep_vkb_prediction_pane_g

0xb1db,	// (0x00066076) slider_set_pane_g3

0xb1ef,	// (0x0006608a) slider_set_pane_g4

0xb207,	// (0x000660a2) slider_set_pane_g5

0xb1db,	// (0x00066076) slider_set_pane_g6

0xb21d,	// (0x000660b8) slider_set_pane_g7

0x3a94,	// (0x0005e92f) slider_form_pane_g3

0x3a9d,	// (0x0005e938) slider_form_pane_g4

0x3aa5,	// (0x0005e940) slider_form_pane_g5

0x3a94,	// (0x0005e92f) slider_form_pane_g6

0xc84c,	// (0x000676e7) slider_form_pane_g7

0x42c6,	// (0x0005f161) slider_set_pane_vc_g3

0x42cf,	// (0x0005f16a) slider_set_pane_vc_g4

0x42d8,	// (0x0005f173) slider_set_pane_vc_g5

0x42c6,	// (0x0005f161) slider_set_pane_vc_g6

0x42e1,	// (0x0005f17c) slider_set_pane_vc_g7

0x4493,	// (0x0005f32e) slider_form_pane_vc_g1

0x449c,	// (0x0005f337) slider_form_pane_vc_g2

0x44a5,	// (0x0005f340) slider_form_pane_vc_g3

0x4493,	// (0x0005f32e) slider_form_pane_vc_g4

0x44ae,	// (0x0005f349) slider_form_pane_vc_g5

0x0004,

0xfa8e,	// (0x0006a929) slider_form_pane_vc_g

0xdd92,	// (0x00068c2d) main_idle_act3_pane

0x5e73,	// (0x00060d0e) ai3_links_pane

0xd230,	// (0x000680cb) popup_ai3_data_window_ParamLimits

0xd230,	// (0x000680cb) popup_ai3_data_window

0x7f94,	// (0x00062e2f) grid_ai3_links_pane

0xd248,	// (0x000680e3) cell_ai3_links_pane_ParamLimits

0xd248,	// (0x000680e3) cell_ai3_links_pane

0x5eac,	// (0x00060d47) bg_popup_sub_pane_cp11

0x5eb9,	// (0x00060d54) cell_ai3_links_pane_g1

0x7f94,	// (0x00062e2f) bg_popup_sub_pane_cp12

0x5ede,	// (0x00060d79) heading_ai3_data_pane

0x5ee6,	// (0x00060d81) list_ai3_gene_pane

0x5ef2,	// (0x00060d8d) popup_ai3_data_window_g1

0x5efa,	// (0x00060d95) heading_ai3_data_pane_g1

0x5f02,	// (0x00060d9d) heading_ai3_data_pane_t1

0xd262,	// (0x000680fd) list_double_ai3_gene_pane_ParamLimits

0xd262,	// (0x000680fd) list_double_ai3_gene_pane

0x5f1d,	// (0x00060db8) list_single_ai3_gene_pane_ParamLimits

0x5f1d,	// (0x00060db8) list_single_ai3_gene_pane

0x4cf5,	// (0x0005fb90) list_highlight_pane_cp7_ParamLimits

0x4cf5,	// (0x0005fb90) list_highlight_pane_cp7

0x5f2a,	// (0x00060dc5) list_single_a13_gene_pane_t1_ParamLimits

0x5f2a,	// (0x00060dc5) list_single_a13_gene_pane_t1

0x5f41,	// (0x00060ddc) list_single_ai3_gene_pane_g1

0x5f4a,	// (0x00060de5) list_single_ai3_gene_pane_g2

0x0001,

0xfcd5,	// (0x0006ab70) list_single_ai3_gene_pane_g

0x5f52,	// (0x00060ded) list_double_ai3_gene_pane_g1_ParamLimits

0x5f52,	// (0x00060ded) list_double_ai3_gene_pane_g1

0xd26f,	// (0x0006810a) list_double_ai3_gene_pane_t1_ParamLimits

0xd26f,	// (0x0006810a) list_double_ai3_gene_pane_t1

0x5f7a,	// (0x00060e15) list_double_ai3_gene_pane_t2_ParamLimits

0x5f7a,	// (0x00060e15) list_double_ai3_gene_pane_t2

0x5f8f,	// (0x00060e2a) list_double_ai3_gene_pane_t3_ParamLimits

0x5f8f,	// (0x00060e2a) list_double_ai3_gene_pane_t3

0x0002,

0xfcda,	// (0x0006ab75) list_double_ai3_gene_pane_t_ParamLimits

0xfcda,	// (0x0006ab75) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe6f5,	// (0x00069590) aid_size_min_col_2

0xd1d7,	// (0x00068072) aid_size_min_msg_ParamLimits

0xd1d7,	// (0x00068072) aid_size_min_msg

0xcdf0,	// (0x00067c8b) fep_vkb_top_text_pane_g2_ParamLimits

0xcdf0,	// (0x00067c8b) fep_vkb_top_text_pane_g2

0x0001,

0xfb41,	// (0x0006a9dc) fep_vkb_top_text_pane_g_ParamLimits

0xfb41,	// (0x0006a9dc) fep_vkb_top_text_pane_g

0xdd92,	// (0x00068c2d) main_hc_apps_shell_pane

0x5fac,	// (0x00060e47) grid_hc_apps_pane_ParamLimits

0x5fac,	// (0x00060e47) grid_hc_apps_pane

0x5fbb,	// (0x00060e56) list_hc_apps_pane

0x5fc3,	// (0x00060e5e) scroll_pane_cp37_ParamLimits

0x5fc3,	// (0x00060e5e) scroll_pane_cp37

0xd28b,	// (0x00068126) cell_hc_apps_pane_ParamLimits

0xd28b,	// (0x00068126) cell_hc_apps_pane

0xd349,	// (0x000681e4) cell_hc_apps_pane_g1_ParamLimits

0xd349,	// (0x000681e4) cell_hc_apps_pane_g1

0x60cf,	// (0x00060f6a) cell_hc_apps_pane_g2_ParamLimits

0x60cf,	// (0x00060f6a) cell_hc_apps_pane_g2

0x60eb,	// (0x00060f86) cell_hc_apps_pane_g3_ParamLimits

0x60eb,	// (0x00060f86) cell_hc_apps_pane_g3

0x0002,

0xfce1,	// (0x0006ab7c) cell_hc_apps_pane_g_ParamLimits

0xfce1,	// (0x0006ab7c) cell_hc_apps_pane_g

0xd376,	// (0x00068211) cell_hc_apps_pane_t1_ParamLimits

0xd376,	// (0x00068211) cell_hc_apps_pane_t1

0x812e,	// (0x00062fc9) grid_highlight_pane_cp10_ParamLimits

0x812e,	// (0x00062fc9) grid_highlight_pane_cp10

0xd3b4,	// (0x0006824f) list_single_hc_apps_pane_ParamLimits

0xd3b4,	// (0x0006824f) list_single_hc_apps_pane

0xd3e4,	// (0x0006827f) list_single_hc_apps_pane_g1

0xd3fd,	// (0x00068298) list_single_hc_apps_pane_g2

0x0001,

0xfce8,	// (0x0006ab83) list_single_hc_apps_pane_g

0xd416,	// (0x000682b1) list_single_hc_apps_pane_g2_copy1

0xb4eb,	// (0x00066386) list_single_hc_apps_pane_t1

0x7ff6,	// (0x00062e91) bg_set_opt_pane_cp_ParamLimits

0x95d9,	// (0x00064474) setting_slider_pane_t1_ParamLimits

0x95f2,	// (0x0006448d) setting_slider_pane_t2_ParamLimits

0x960c,	// (0x000644a7) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0006a3f9) setting_slider_pane_t_ParamLimits

0x9624,	// (0x000644bf) slider_set_pane_ParamLimits

0x0009,	// (0x0005aea4) control_pane_g5_ParamLimits

0x0009,	// (0x0005aea4) control_pane_g5

0xc6ce,	// (0x00067569) slider_set_pane_g1_ParamLimits

0x0a40,	// (0x0005b8db) slider_set_pane_g2_ParamLimits

0xb1db,	// (0x00066076) slider_set_pane_g3_ParamLimits

0xb1ef,	// (0x0006608a) slider_set_pane_g4_ParamLimits

0xb207,	// (0x000660a2) slider_set_pane_g5_ParamLimits

0xb1db,	// (0x00066076) slider_set_pane_g6_ParamLimits

0xb21d,	// (0x000660b8) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0006a7ff) slider_set_pane_g_ParamLimits

0xe0e5,	// (0x00068f80) navi_icon_text_pane_ParamLimits

0xbc5f,	// (0x00066afa) aid_fill_nsta_2_ParamLimits

0xbc96,	// (0x00066b31) aid_touch_tab_arrow_left_ParamLimits

0xbcac,	// (0x00066b47) aid_touch_tab_arrow_right_ParamLimits

0xbd47,	// (0x00066be2) clock_nsta_pane_ParamLimits

0x33d9,	// (0x0005e274) navi_icon_pane_g1_ParamLimits

0x33e5,	// (0x0005e280) navi_text_pane_t1_ParamLimits

0x48cf,	// (0x0005f76a) navi_icon_text_pane_g1_ParamLimits

0x48db,	// (0x0005f776) navi_icon_text_pane_t1_ParamLimits

0xd3e4,	// (0x0006827f) list_single_hc_apps_pane_g1_ParamLimits

0xd3fd,	// (0x00068298) list_single_hc_apps_pane_g2_ParamLimits

0xfce8,	// (0x0006ab83) list_single_hc_apps_pane_g_ParamLimits

0xd416,	// (0x000682b1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb4eb,	// (0x00066386) list_single_hc_apps_pane_t1_ParamLimits

0x940a,	// (0x000642a5) popup_toolbar2_fixed_window_ParamLimits

0x940a,	// (0x000642a5) popup_toolbar2_fixed_window

0xafe5,	// (0x00065e80) popup_toolbar2_float_window

0x7f94,	// (0x00062e2f) bg_popup_sub_pane_cp27

0x61c9,	// (0x00061064) grid_toolbar2_float_pane

0x7f94,	// (0x00062e2f) bg_popup_sub_pane_cp26

0x61c9,	// (0x00061064) grid_toolbar2_fixed_pane

0xd432,	// (0x000682cd) cell_toolbar2_fixed_pane_ParamLimits

0xd432,	// (0x000682cd) cell_toolbar2_fixed_pane

0xd44c,	// (0x000682e7) cell_toolbar2_fixed_pane_g1

0x04de,	// (0x0005b379) toolbar2_fixed_button_pane

0x2563,	// (0x0005d3fe) toolbar2_fixed_button_pane_g1

0x2573,	// (0x0005d40e) toolbar2_fixed_button_pane_g2

0x256b,	// (0x0005d406) toolbar2_fixed_button_pane_g3

0x2583,	// (0x0005d41e) toolbar2_fixed_button_pane_g4

0x257b,	// (0x0005d416) toolbar2_fixed_button_pane_g5

0x258b,	// (0x0005d426) toolbar2_fixed_button_pane_g6

0x2593,	// (0x0005d42e) toolbar2_fixed_button_pane_g7

0x25a3,	// (0x0005d43e) toolbar2_fixed_button_pane_g8

0x259b,	// (0x0005d436) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0006a701) toolbar2_fixed_button_pane_g

0x61ea,	// (0x00061085) cell_toolbar2_float_pane_ParamLimits

0x61ea,	// (0x00061085) cell_toolbar2_float_pane

0x61fb,	// (0x00061096) cell_toolbar2_float_pane_g1

0x04de,	// (0x0005b379) toolbar2_fixed_button_pane_cp

0xccd8,	// (0x00067b73) fep_vkb_accented_list_pane_ParamLimits

0xccd8,	// (0x00067b73) fep_vkb_accented_list_pane

0x0f05,	// (0x0005bda0) bg_popup_fep_shadow_pane_g9

0xf49d,	// (0x0006a338) bg_popup_fep_shadow_pane_cp3

0x84bf,	// (0x0006335a) list_accented_list_pane

0x6204,	// (0x0006109f) list_single_accented_list_pane_ParamLimits

0x6204,	// (0x0006109f) list_single_accented_list_pane

0xf49d,	// (0x0006a338) list_highlight_pane_cp10

0x6215,	// (0x000610b0) list_single_accented_list_pane_t1

0xaf0f,	// (0x00065daa) popup_slider_window_ParamLimits

0xaf0f,	// (0x00065daa) popup_slider_window

0x5e34,	// (0x00060ccf) aid_indentation_list_msg

0xd541,	// (0x000683dc) bg_popup_window_pane_cp19

0x6335,	// (0x000611d0) popup_slider_window_g1

0x6351,	// (0x000611ec) popup_slider_window_g2

0x636d,	// (0x00061208) popup_slider_window_g3

0x0005,

0xfced,	// (0x0006ab88) popup_slider_window_g

0x63c9,	// (0x00061264) popup_slider_window_t1

0x643d,	// (0x000612d8) small_volume_slider_vertical_pane

0x4d30,	// (0x0005fbcb) small_volume_slider_vertical_pane_g1

0x4d30,	// (0x0005fbcb) small_volume_slider_vertical_pane_g2

0x6459,	// (0x000612f4) small_volume_slider_vertical_pane_g3

0x0002,

0xfcff,	// (0x0006ab9a) small_volume_slider_vertical_pane_g

0x9358,	// (0x000641f3) area_side_right_pane_ParamLimits

0x9358,	// (0x000641f3) area_side_right_pane

0xb519,	// (0x000663b4) aid_size_side_button_ParamLimits

0xb519,	// (0x000663b4) aid_size_side_button

0xb532,	// (0x000663cd) grid_sctrl_middle_pane_ParamLimits

0xb532,	// (0x000663cd) grid_sctrl_middle_pane

0x121f,	// (0x0005c0ba) sctrl_sk_bottom_pane

0x1230,	// (0x0005c0cb) sctrl_sk_top_pane

0x1242,	// (0x0005c0dd) aid_touch_sctrl_top

0x124f,	// (0x0005c0ea) bg_sctrl_sk_pane_ParamLimits

0x124f,	// (0x0005c0ea) bg_sctrl_sk_pane

0x125d,	// (0x0005c0f8) sctrl_sk_top_pane_g1

0x126a,	// (0x0005c105) sctrl_sk_top_pane_t1

0x1242,	// (0x0005c0dd) aid_touch_sctrl_bottom

0x124f,	// (0x0005c0ea) bg_sctrl_sk_pane_cp_ParamLimits

0x124f,	// (0x0005c0ea) bg_sctrl_sk_pane_cp

0x1285,	// (0x0005c120) sctrl_sk_bottom_pane_g1

0x126a,	// (0x0005c105) sctrl_sk_bottom_pane_t1

0xb54c,	// (0x000663e7) cell_sctrl_middle_pane_ParamLimits

0xb54c,	// (0x000663e7) cell_sctrl_middle_pane

0xb55d,	// (0x000663f8) aid_touch_sctrl_middle_ParamLimits

0xb55d,	// (0x000663f8) aid_touch_sctrl_middle

0xb56a,	// (0x00066405) bg_sctrl_middle_pane_ParamLimits

0xb56a,	// (0x00066405) bg_sctrl_middle_pane

0x18f2,	// (0x0005c78d) cell_sctrl_middle_pane_g1_ParamLimits

0x18f2,	// (0x0005c78d) cell_sctrl_middle_pane_g1

0xb578,	// (0x00066413) cell_sctrl_middle_pane_g2_ParamLimits

0xb578,	// (0x00066413) cell_sctrl_middle_pane_g2

0x0001,

0xfd0b,	// (0x0006aba6) cell_sctrl_middle_pane_g_ParamLimits

0xfd0b,	// (0x0006aba6) cell_sctrl_middle_pane_g

0x2563,	// (0x0005d3fe) bg_sctrl_middle_pane_g1

0x256b,	// (0x0005d406) bg_sctrl_middle_pane_g2

0x2573,	// (0x0005d40e) bg_sctrl_middle_pane_g3

0x257b,	// (0x0005d416) bg_sctrl_middle_pane_g4

0x2583,	// (0x0005d41e) bg_sctrl_middle_pane_g5

0x258b,	// (0x0005d426) bg_sctrl_middle_pane_g6

0x2593,	// (0x0005d42e) bg_sctrl_middle_pane_g7

0x259b,	// (0x0005d436) bg_sctrl_middle_pane_g8

0x0007,

0xfd10,	// (0x0006abab) bg_sctrl_middle_pane_g

0x25a3,	// (0x0005d43e) bg_sctrl_middle_pane_g8_copy1

0x2563,	// (0x0005d3fe) bg_sctrl_sk_pane_g1

0x2573,	// (0x0005d40e) bg_sctrl_sk_pane_g2

0x256b,	// (0x0005d406) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0006a701) bg_sctrl_sk_pane_g

0x82f8,	// (0x00063193) aid_size_touch_scroll_bar

0x2583,	// (0x0005d41e) bg_sctrl_sk_pane_g4

0x257b,	// (0x0005d416) bg_sctrl_sk_pane_g5

0x258b,	// (0x0005d426) bg_sctrl_sk_pane_g6

0x2593,	// (0x0005d42e) bg_sctrl_sk_pane_g7

0x25a3,	// (0x0005d43e) bg_sctrl_sk_pane_g8

0x259b,	// (0x0005d436) bg_sctrl_sk_pane_g9

0x01c5,	// (0x0005b060) popup_fep_china_hwr2_fs_candidate_window

0xa9af,	// (0x0006584a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa9af,	// (0x0006584a) popup_fep_china_hwr2_fs_control_window

0x0f25,	// (0x0005bdc0) sctrl_sk_top_pane_g2

0x0001,

0xfd06,	// (0x0006aba1) sctrl_sk_top_pane_g

0xd5f9,	// (0x00068494) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd5f9,	// (0x00068494) aid_fep_china_hwr2_fs_cell

0xd60d,	// (0x000684a8) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd60d,	// (0x000684a8) bg_popup_fep_shadow_pane_cp4

0xd624,	// (0x000684bf) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd624,	// (0x000684bf) bg_popup_fep_shadow_pane_cp5

0xd636,	// (0x000684d1) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd636,	// (0x000684d1) popup_fep_china_hwr2_fs_control_bar_grid

0xd64a,	// (0x000684e5) popup_fep_china_hwr2_fs_control_funtion_grid

0x64b5,	// (0x00061350) aid_fep_china_hwr2_fs_candi_cell

0x7f94,	// (0x00062e2f) bg_popup_fep_shadow_pane_cp6

0x64bf,	// (0x0006135a) popup_fep_china_hwr2_fs_candidate_grid

0xd652,	// (0x000684ed) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd652,	// (0x000684ed) cell_fep_china_hwr2_fs_funtion_grid

0x4d30,	// (0x0005fbcb) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x64e1,	// (0x0006137c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x64e1,	// (0x0006137c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x64ef,	// (0x0006138a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x64ef,	// (0x0006138a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd21,	// (0x0006abbc) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd21,	// (0x0006abbc) cell_fep_china_hwr2_fs_funtion_grid_g

0xd66a,	// (0x00068505) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd66a,	// (0x00068505) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd67f,	// (0x0006851a) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd67f,	// (0x0006851a) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd26,	// (0x0006abc1) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd26,	// (0x0006abc1) cell_fep_china_hwr2_fs_funtion_grid_t

0x6536,	// (0x000613d1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x653e,	// (0x000613d9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x6546,	// (0x000613e1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2b,	// (0x0006abc6) popup_fep_china_hwr2_fs_control_bar_grid_g

0x654e,	// (0x000613e9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x654e,	// (0x000613e9) cell_fep_china_hwr2_fs_candidate_grid

0x6567,	// (0x00061402) popup_fep_china_hwr2_fs_candidate_grid_g20

0x656f,	// (0x0006140a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4d30,	// (0x0005fbcb) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4d30,	// (0x0005fbcb) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb46,	// (0x0006a9e1) cell_fep_china_hwr2_fs_candidate_grid_g

0x6577,	// (0x00061412) cell_fep_china_hwr2_fs_candidate_grid_t1

0x215c,	// (0x0005cff7) clock_nsta_pane_cp_24_ParamLimits

0x215c,	// (0x0005cff7) clock_nsta_pane_cp_24

0x21da,	// (0x0005d075) indicator_nsta_pane_cp_24_ParamLimits

0x21da,	// (0x0005d075) indicator_nsta_pane_cp_24

0x3255,	// (0x0005e0f0) heading_pane_g1

0x0001,

0xf8cb,	// (0x0006a766) heading_pane_g

0x3cfd,	// (0x0005eb98) grid_sct_catagory_button_pane

0x3d2d,	// (0x0005ebc8) scroll_pane_cp5_ParamLimits

0x491d,	// (0x0005f7b8) button_value_adjust_pane_cp5_ParamLimits

0x491d,	// (0x0005f7b8) button_value_adjust_pane_cp5

0x49fc,	// (0x0005f897) form2_midp_time_pane_ParamLimits

0x6585,	// (0x00061420) cell_sct_catagory_button_pane_ParamLimits

0x6585,	// (0x00061420) cell_sct_catagory_button_pane

0x4cf5,	// (0x0005fb90) bg_button_pane_cp01_ParamLimits

0x4cf5,	// (0x0005fb90) bg_button_pane_cp01

0x4d30,	// (0x0005fbcb) cell_sct_catagory_button_pane_g1

0xaf88,	// (0x00065e23) popup_tb_extension_window

0xd69b,	// (0x00068536) aid_size_cell_ext_ParamLimits

0xd69b,	// (0x00068536) aid_size_cell_ext

0x82aa,	// (0x00063145) bg_tb_trans_pane_cp1_ParamLimits

0x82aa,	// (0x00063145) bg_tb_trans_pane_cp1

0xd6c1,	// (0x0006855c) grid_tb_ext_pane_ParamLimits

0xd6c1,	// (0x0006855c) grid_tb_ext_pane

0xd700,	// (0x0006859b) cell_tb_ext_pane_ParamLimits

0xd700,	// (0x0006859b) cell_tb_ext_pane

0xd728,	// (0x000685c3) cell_tb_ext_pane_g1_ParamLimits

0xd728,	// (0x000685c3) cell_tb_ext_pane_g1

0x661b,	// (0x000614b6) cell_tb_ext_pane_t1

0x812e,	// (0x00062fc9) list_highlight_pane_cp11_ParamLimits

0x812e,	// (0x00062fc9) list_highlight_pane_cp11

0x941f,	// (0x000642ba) popup_uni_indicator_window_ParamLimits

0x941f,	// (0x000642ba) popup_uni_indicator_window

0x83b6,	// (0x00063251) bg_popup_sub_pane_cp14

0xd745,	// (0x000685e0) list_uniindi_pane

0xd751,	// (0x000685ec) uniindi_top_pane

0x812e,	// (0x00062fc9) bg_uniindi_top_pane

0xd770,	// (0x0006860b) uniindi_top_pane_g1

0xd786,	// (0x00068621) uniindi_top_pane_g2

0x0003,

0xfd32,	// (0x0006abcd) uniindi_top_pane_g

0xd7a3,	// (0x0006863e) uniindi_top_pane_t1

0x66cb,	// (0x00061566) list_single_uniindi_pane_ParamLimits

0x66cb,	// (0x00061566) list_single_uniindi_pane

0x4d30,	// (0x0005fbcb) bg_uniindi_top_pane_g1

0x66dd,	// (0x00061578) list_single_uniindi_pane_g1

0x66f0,	// (0x0006158b) list_single_uniindi_pane_t1

0xdd92,	// (0x00068c2d) control_bg_pane

0x6715,	// (0x000615b0) bg_sctrl_sk_pane_cp1

0x671e,	// (0x000615b9) bg_sctrl_sk_pane_cp2

0x6727,	// (0x000615c2) control_bg_pane_g1

0x6730,	// (0x000615cb) control_bg_pane_g2

0x0001,

0xfd3b,	// (0x0006abd6) control_bg_pane_g

0x4763,	// (0x0005f5fe) cell_indicator_nsta_pane_g1_ParamLimits

0xca9e,	// (0x00067939) cell_indicator_nsta_pane_g2_ParamLimits

0xfaaa,	// (0x0006a945) cell_indicator_nsta_pane_g_ParamLimits

0xe574,	// (0x0006940f) form2_midp_time_pane_t1_ParamLimits

0x0cc0,	// (0x0005bb5b) main_idle_act4_pane_ParamLimits

0x0cc0,	// (0x0005bb5b) main_idle_act4_pane

0xaf88,	// (0x00065e23) popup_tb_extension_window_ParamLimits

0xd6e6,	// (0x00068581) tb_ext_find_pane_ParamLimits

0xd6e6,	// (0x00068581) tb_ext_find_pane

0x6739,	// (0x000615d4) ai_gene_pane_1_cp1

0x1e5b,	// (0x0005ccf6) ai_gene_pane_2_cp1

0xd7cd,	// (0x00068668) list_single_idle_plugin_calendar_pane

0x674a,	// (0x000615e5) list_single_idle_plugin_notification_pane

0x6753,	// (0x000615ee) list_single_idle_plugin_player_pane

0xd7d6,	// (0x00068671) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd7d6,	// (0x00068671) list_single_idle_plugin_shortcut_pane

0xd7fe,	// (0x00068699) main_idle_act4_pane_t1

0xd815,	// (0x000686b0) main_idle_act4_pane_t2

0x0001,

0xfd40,	// (0x0006abdb) main_idle_act4_pane_t

0xd82c,	// (0x000686c7) middle_sk_idle_act4_pane_ParamLimits

0xd82c,	// (0x000686c7) middle_sk_idle_act4_pane

0xd848,	// (0x000686e3) popup_clock_digital_analogue_window_cp2

0xd874,	// (0x0006870f) shortcut_wheel_idle_act4_pane_ParamLimits

0xd874,	// (0x0006870f) shortcut_wheel_idle_act4_pane

0x4d30,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g1

0x4d30,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g2

0x4d30,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g3

0x4d30,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g4

0x4d30,	// (0x0005fbcb) shortcut_wheel_idle_act4_pane_g5

0x67e6,	// (0x00061681) shortcut_wheel_idle_act4_pane_g6

0x67ee,	// (0x00061689) shortcut_wheel_idle_act4_pane_g7

0x67f6,	// (0x00061691) shortcut_wheel_idle_act4_pane_g8

0x67fe,	// (0x00061699) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd45,	// (0x0006abe0) shortcut_wheel_idle_act4_pane_g

0xd8f1,	// (0x0006878c) middle_sk_idle_act4_pane_g1_ParamLimits

0xd8f1,	// (0x0006878c) middle_sk_idle_act4_pane_g1

0xd8ff,	// (0x0006879a) middle_sk_idle_act4_pane_g2_ParamLimits

0xd8ff,	// (0x0006879a) middle_sk_idle_act4_pane_g2

0x0001,

0xfd68,	// (0x0006ac03) middle_sk_idle_act4_pane_g_ParamLimits

0xfd68,	// (0x0006ac03) middle_sk_idle_act4_pane_g

0xd917,	// (0x000687b2) middle_sk_idle_act4_pane_t1_ParamLimits

0xd917,	// (0x000687b2) middle_sk_idle_act4_pane_t1

0xd946,	// (0x000687e1) grid_ai_shortcut_pane_ParamLimits

0xd946,	// (0x000687e1) grid_ai_shortcut_pane

0xd963,	// (0x000687fe) list_highlight_pane_cp16_ParamLimits

0xd963,	// (0x000687fe) list_highlight_pane_cp16

0xd970,	// (0x0006880b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd970,	// (0x0006880b) list_single_idle_plugin_shortcut_pane_g1

0xd97c,	// (0x00068817) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd97c,	// (0x00068817) list_single_idle_plugin_shortcut_pane_g2

0xd998,	// (0x00068833) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd998,	// (0x00068833) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6d,	// (0x0006ac08) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6d,	// (0x0006ac08) list_single_idle_plugin_shortcut_pane_g

0xd9ad,	// (0x00068848) cell_ai_shortcut_pane_ParamLimits

0xd9ad,	// (0x00068848) cell_ai_shortcut_pane

0xd9c3,	// (0x0006885e) cell_ai_shortcut_pane_g1_ParamLimits

0xd9c3,	// (0x0006885e) cell_ai_shortcut_pane_g1

0x6739,	// (0x000615d4) ai_gene_pane_1_cp2

0x692e,	// (0x000617c9) ai_gene_pane_2_cp2

0x6936,	// (0x000617d1) list_highlight_pane_cp15

0xd9e5,	// (0x00068880) list_single_idle_plugin_calendar_pane_g1

0x6936,	// (0x000617d1) list_highlight_pane_cp17

0x6947,	// (0x000617e2) list_single_idle_plugin_calendar_pane_g1_copy1

0x694f,	// (0x000617ea) list_single_idle_plugin_player_pane_g1

0x40bd,	// (0x0005ef58) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd74,	// (0x0006ac0f) list_single_idle_plugin_player_pane_g

0x6957,	// (0x000617f2) list_single_idle_plugin_player_pane_t1

0x6965,	// (0x00061800) list_single_idle_plugin_player_pane_t2

0x6973,	// (0x0006180e) list_single_idle_plugin_player_pane_t3

0x6981,	// (0x0006181c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd79,	// (0x0006ac14) list_single_idle_plugin_player_pane_t

0x698f,	// (0x0006182a) wait_bar_pane_cp15

0x6997,	// (0x00061832) grid_ai_notification_pane

0x40bd,	// (0x0005ef58) list_single_idle_plugin_notification_pane_g1

0xd9ed,	// (0x00068888) cell_ai_notification_pane_ParamLimits

0xd9ed,	// (0x00068888) cell_ai_notification_pane

0x69ad,	// (0x00061848) cell_ai_notification_pane_g1

0x69b5,	// (0x00061850) cell_ai_notification_pane_t1

0xd9fa,	// (0x00068895) tb_ext_find_button_pane

0xda02,	// (0x0006889d) tb_ext_find_pane_g1

0xda0a,	// (0x000688a5) tb_ext_find_pane_t1

0x87ec,	// (0x00063687) tb_ext_find_button_pane_g1

0xda18,	// (0x000688b3) tb_ext_find_button_pane_g2

0x0001,

0xfd82,	// (0x0006ac1d) tb_ext_find_button_pane_g

0xd7fe,	// (0x00068699) main_idle_act4_pane_t1_ParamLimits

0xd815,	// (0x000686b0) main_idle_act4_pane_t2_ParamLimits

0xfd40,	// (0x0006abdb) main_idle_act4_pane_t_ParamLimits

0xd848,	// (0x000686e3) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd860,	// (0x000686fb) sat_plugin_idle_act4_pane_ParamLimits

0xd860,	// (0x000686fb) sat_plugin_idle_act4_pane

0xda21,	// (0x000688bc) sat_plugin_idle_act4_pane_t1_ParamLimits

0xda21,	// (0x000688bc) sat_plugin_idle_act4_pane_t1

0xda39,	// (0x000688d4) sat_plugin_idle_act4_pane_t2_ParamLimits

0xda39,	// (0x000688d4) sat_plugin_idle_act4_pane_t2

0xda51,	// (0x000688ec) sat_plugin_idle_act4_pane_t3_ParamLimits

0xda51,	// (0x000688ec) sat_plugin_idle_act4_pane_t3

0xda69,	// (0x00068904) sat_plugin_idle_act4_pane_t4_ParamLimits

0xda69,	// (0x00068904) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd87,	// (0x0006ac22) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd87,	// (0x0006ac22) sat_plugin_idle_act4_pane_t

0x939a,	// (0x00064235) popup_battery_window_ParamLimits

0x939a,	// (0x00064235) popup_battery_window

0x812e,	// (0x00062fc9) bg_popup_sub_pane_cp25_ParamLimits

0x812e,	// (0x00062fc9) bg_popup_sub_pane_cp25

0x6a36,	// (0x000618d1) popup_battery_window_g1_ParamLimits

0x6a36,	// (0x000618d1) popup_battery_window_g1

0x6a42,	// (0x000618dd) popup_battery_window_t1_ParamLimits

0x6a42,	// (0x000618dd) popup_battery_window_t1

0x6a54,	// (0x000618ef) popup_battery_window_t2_ParamLimits

0x6a54,	// (0x000618ef) popup_battery_window_t2

0x0001,

0xfd90,	// (0x0006ac2b) popup_battery_window_t_ParamLimits

0xfd90,	// (0x0006ac2b) popup_battery_window_t

0xa5e3,	// (0x0006547e) midp_canvas_pane_ParamLimits

0xa655,	// (0x000654f0) midp_keypad_pane_ParamLimits

0xa655,	// (0x000654f0) midp_keypad_pane

0x2056,	// (0x0005cef1) main_midp_pane_ParamLimits

0xcaab,	// (0x00067946) signal_pane_g2_cp_ParamLimits

0xda81,	// (0x0006891c) aid_size_cell_midp_keypad_ParamLimits

0xda81,	// (0x0006891c) aid_size_cell_midp_keypad

0xda9f,	// (0x0006893a) midp_keyp_game_grid_pane_ParamLimits

0xda9f,	// (0x0006893a) midp_keyp_game_grid_pane

0xdac6,	// (0x00068961) midp_keyp_rocker_pane_ParamLimits

0xdac6,	// (0x00068961) midp_keyp_rocker_pane

0xdb17,	// (0x000689b2) midp_keyp_sk_left_pane_ParamLimits

0xdb17,	// (0x000689b2) midp_keyp_sk_left_pane

0xdb6b,	// (0x00068a06) midp_keyp_sk_right_pane_ParamLimits

0xdb6b,	// (0x00068a06) midp_keyp_sk_right_pane

0x7f94,	// (0x00062e2f) bg_button_pane_cp03

0xdbbf,	// (0x00068a5a) midp_keyp_sk_left_pane_g1

0x7f94,	// (0x00062e2f) bg_button_pane_cp04

0xdbbf,	// (0x00068a5a) midp_keyp_sk_right_pane_g1

0x4d30,	// (0x0005fbcb) midp_keyp_rocker_pane_g1

0xdbc8,	// (0x00068a63) keyp_game_cell_pane_ParamLimits

0xdbc8,	// (0x00068a63) keyp_game_cell_pane

0x7f94,	// (0x00062e2f) bg_button_pane_cp02

0xdbec,	// (0x00068a87) keyp_game_cell_pane_g1

0x93ba,	// (0x00064255) popup_fep_vkb2_window_ParamLimits

0x93ba,	// (0x00064255) popup_fep_vkb2_window

0xb584,	// (0x0006641f) aid_size_cell_vkb2_ParamLimits

0xb584,	// (0x0006641f) aid_size_cell_vkb2

0xb5c2,	// (0x0006645d) popup_fep_vkb2_window_g1_ParamLimits

0xb5c2,	// (0x0006645d) popup_fep_vkb2_window_g1

0xb612,	// (0x000664ad) vkb2_area_bottom_pane_ParamLimits

0xb612,	// (0x000664ad) vkb2_area_bottom_pane

0xb666,	// (0x00066501) vkb2_area_keypad_pane_ParamLimits

0xb666,	// (0x00066501) vkb2_area_keypad_pane

0xb6ae,	// (0x00066549) vkb2_area_top_pane_ParamLimits

0xb6ae,	// (0x00066549) vkb2_area_top_pane

0xb734,	// (0x000665cf) vkb2_top_entry_pane_ParamLimits

0xb734,	// (0x000665cf) vkb2_top_entry_pane

0xb761,	// (0x000665fc) vkb2_top_grid_left_pane_ParamLimits

0xb761,	// (0x000665fc) vkb2_top_grid_left_pane

0xb781,	// (0x0006661c) vkb2_top_grid_right_pane_ParamLimits

0xb781,	// (0x0006661c) vkb2_top_grid_right_pane

0x14f1,	// (0x0005c38c) vkb2_cell_keypad_pane_ParamLimits

0x14f1,	// (0x0005c38c) vkb2_cell_keypad_pane

0xb7c7,	// (0x00066662) vkb2_area_bottom_grid_pane_ParamLimits

0xb7c7,	// (0x00066662) vkb2_area_bottom_grid_pane

0xb7f1,	// (0x0006668c) vkb2_area_bottom_pane_g1_ParamLimits

0xb7f1,	// (0x0006668c) vkb2_area_bottom_pane_g1

0xb817,	// (0x000666b2) vkb2_area_bottom_pane_g2_ParamLimits

0xb817,	// (0x000666b2) vkb2_area_bottom_pane_g2

0xb848,	// (0x000666e3) vkb2_area_bottom_pane_g3_ParamLimits

0xb848,	// (0x000666e3) vkb2_area_bottom_pane_g3

0x0002,

0xfd95,	// (0x0006ac30) vkb2_area_bottom_pane_g_ParamLimits

0xfd95,	// (0x0006ac30) vkb2_area_bottom_pane_g

0x169b,	// (0x0005c536) vkb2_top_cell_left_pane_ParamLimits

0x169b,	// (0x0005c536) vkb2_top_cell_left_pane

0xdbf5,	// (0x00068a90) vkb2_top_entry_pane_g1_ParamLimits

0xdbf5,	// (0x00068a90) vkb2_top_entry_pane_g1

0xdc03,	// (0x00068a9e) vkb2_top_entry_pane_t1_ParamLimits

0xdc03,	// (0x00068a9e) vkb2_top_entry_pane_t1

0x6c05,	// (0x00061aa0) vkb2_top_entry_pane_t2_ParamLimits

0x6c05,	// (0x00061aa0) vkb2_top_entry_pane_t2

0x6c37,	// (0x00061ad2) vkb2_top_entry_pane_t3_ParamLimits

0x6c37,	// (0x00061ad2) vkb2_top_entry_pane_t3

0x0002,

0xfd9c,	// (0x0006ac37) vkb2_top_entry_pane_t_ParamLimits

0xfd9c,	// (0x0006ac37) vkb2_top_entry_pane_t

0xb8b2,	// (0x0006674d) vkb2_top_grid_right_pane_g1_ParamLimits

0xb8b2,	// (0x0006674d) vkb2_top_grid_right_pane_g1

0x16fe,	// (0x0005c599) vkb2_top_grid_right_pane_g2_ParamLimits

0x16fe,	// (0x0005c599) vkb2_top_grid_right_pane_g2

0x1716,	// (0x0005c5b1) vkb2_top_grid_right_pane_g3_ParamLimits

0x1716,	// (0x0005c5b1) vkb2_top_grid_right_pane_g3

0xb8c8,	// (0x00066763) vkb2_top_grid_right_pane_g4_ParamLimits

0xb8c8,	// (0x00066763) vkb2_top_grid_right_pane_g4

0x0003,

0xfda3,	// (0x0006ac3e) vkb2_top_grid_right_pane_g_ParamLimits

0xfda3,	// (0x0006ac3e) vkb2_top_grid_right_pane_g

0x1744,	// (0x0005c5df) vkb2_top_cell_left_pane_g1

0x175b,	// (0x0005c5f6) vkb2_cell_keypad_pane_g1_ParamLimits

0x175b,	// (0x0005c5f6) vkb2_cell_keypad_pane_g1

0x6c5b,	// (0x00061af6) vkb2_cell_keypad_pane_t1_ParamLimits

0x6c5b,	// (0x00061af6) vkb2_cell_keypad_pane_t1

0x1769,	// (0x0005c604) vkb2_cell_bottom_grid_pane_ParamLimits

0x1769,	// (0x0005c604) vkb2_cell_bottom_grid_pane

0x17a2,	// (0x0005c63d) vkb2_cell_bottom_grid_pane_g1

0xd895,	// (0x00068730) aid_call2_pane_cp02

0xd89d,	// (0x00068738) aid_call_pane_cp02

0xd8a5,	// (0x00068740) clock_digital_number_pane_cp10

0xd8ad,	// (0x00068748) clock_digital_number_pane_cp11

0xd8b5,	// (0x00068750) clock_digital_number_pane_cp12

0xd8bd,	// (0x00068758) clock_digital_number_pane_cp13

0xd8c5,	// (0x00068760) clock_digital_separator_pane_cp10

0x87ec,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g1

0x87ec,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g2

0xd8cd,	// (0x00068768) popup_clock_digital_analogue_window_cp2_g3

0x87ec,	// (0x00063687) popup_clock_digital_analogue_window_cp2_g4

0xd8cd,	// (0x00068768) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd58,	// (0x0006abf3) popup_clock_digital_analogue_window_cp2_g

0xd8d5,	// (0x00068770) popup_clock_digital_analogue_window_cp2_t1

0xd8e3,	// (0x0006877e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd63,	// (0x0006abfe) popup_clock_digital_analogue_window_cp2_t

0x4d30,	// (0x0005fbcb) clock_digital_number_pane_cp10_g1

0x4d30,	// (0x0005fbcb) clock_digital_number_pane_cp10_g2

0x0001,

0xfb46,	// (0x0006a9e1) clock_digital_number_pane_cp10_g

0x4d30,	// (0x0005fbcb) clock_digital_separator_pane_cp10_g1

0x4d30,	// (0x0005fbcb) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb46,	// (0x0006a9e1) clock_digital_separator_pane_cp10_g

0xd792,	// (0x0006862d) uniindi_top_pane_g3

0x6694,	// (0x0006152f) uniindi_top_pane_g4

0x157c,	// (0x0005c417) vkb2_row_keypad_pane_ParamLimits

0x157c,	// (0x0005c417) vkb2_row_keypad_pane

0x17be,	// (0x0005c659) vkb2_cell_t_keypad_pane_ParamLimits

0x17be,	// (0x0005c659) vkb2_cell_t_keypad_pane

0x17ce,	// (0x0005c669) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x17ce,	// (0x0005c669) vkb2_cell_t_keypad_pane_cp08

0x17e1,	// (0x0005c67c) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x17e1,	// (0x0005c67c) vkb2_cell_t_keypad_pane_cp09

0x17f5,	// (0x0005c690) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x17f5,	// (0x0005c690) vkb2_cell_t_keypad_pane_cp01

0x1806,	// (0x0005c6a1) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x1806,	// (0x0005c6a1) vkb2_cell_t_keypad_pane_cp02

0x1817,	// (0x0005c6b2) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x1817,	// (0x0005c6b2) vkb2_cell_t_keypad_pane_cp03

0x1828,	// (0x0005c6c3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x1828,	// (0x0005c6c3) vkb2_cell_t_keypad_pane_cp04

0x1839,	// (0x0005c6d4) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x1839,	// (0x0005c6d4) vkb2_cell_t_keypad_pane_cp05

0x184a,	// (0x0005c6e5) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x184a,	// (0x0005c6e5) vkb2_cell_t_keypad_pane_cp06

0x185b,	// (0x0005c6f6) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x185b,	// (0x0005c6f6) vkb2_cell_t_keypad_pane_cp07

0x186c,	// (0x0005c707) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x186c,	// (0x0005c707) vkb2_cell_t_keypad_pane_cp10

0x0f25,	// (0x0005bdc0) vkb2_cell_t_keypad_pane_g1

0x6c72,	// (0x00061b0d) vkb2_cell_t_keypad_pane_t1

0xdd92,	// (0x00068c2d) popup_grid_graphic2_window

0xdc3c,	// (0x00068ad7) aid_size_cell_graphic2_ParamLimits

0xdc3c,	// (0x00068ad7) aid_size_cell_graphic2

0xdc7a,	// (0x00068b15) bg_popup_window_pane_cp21_ParamLimits

0xdc7a,	// (0x00068b15) bg_popup_window_pane_cp21

0xdc88,	// (0x00068b23) graphic2_pages_pane_ParamLimits

0xdc88,	// (0x00068b23) graphic2_pages_pane

0xe73e,	// (0x000695d9) grid_graphic2_control_pane_ParamLimits

0xe73e,	// (0x000695d9) grid_graphic2_control_pane

0xe786,	// (0x00069621) grid_graphic2_pane_ParamLimits

0xe786,	// (0x00069621) grid_graphic2_pane

0xe80d,	// (0x000696a8) cell_graphic2_pane

0xdd92,	// (0x00068c2d) main_comp_mode_pane

0x5ee6,	// (0x00060d81) list_ai3_gene_pane_ParamLimits

0xd541,	// (0x000683dc) bg_popup_window_pane_cp19_ParamLimits

0x62d7,	// (0x00061172) bg_touch_area_indi_pane_ParamLimits

0x62d7,	// (0x00061172) bg_touch_area_indi_pane

0x62ed,	// (0x00061188) bg_touch_area_indi_pane_cp01_ParamLimits

0x62ed,	// (0x00061188) bg_touch_area_indi_pane_cp01

0x6303,	// (0x0006119e) bg_touch_area_indi_pane_cp02_ParamLimits

0x6303,	// (0x0006119e) bg_touch_area_indi_pane_cp02

0x631b,	// (0x000611b6) bg_touch_area_indi_pane_cp03_ParamLimits

0x631b,	// (0x000611b6) bg_touch_area_indi_pane_cp03

0x6335,	// (0x000611d0) popup_slider_window_g1_ParamLimits

0x6351,	// (0x000611ec) popup_slider_window_g2_ParamLimits

0x636d,	// (0x00061208) popup_slider_window_g3_ParamLimits

0xfced,	// (0x0006ab88) popup_slider_window_g_ParamLimits

0x63c9,	// (0x00061264) popup_slider_window_t1_ParamLimits

0x643d,	// (0x000612d8) small_volume_slider_vertical_pane_ParamLimits

0xe80d,	// (0x000696a8) cell_graphic2_pane_ParamLimits

0xe86a,	// (0x00069705) bg_button_pane_cp10_ParamLimits

0xe86a,	// (0x00069705) bg_button_pane_cp10

0xe87d,	// (0x00069718) bg_button_pane_cp11_ParamLimits

0xe87d,	// (0x00069718) bg_button_pane_cp11

0xe890,	// (0x0006972b) graphic2_pages_pane_g1_ParamLimits

0xe890,	// (0x0006972b) graphic2_pages_pane_g1

0xe8ab,	// (0x00069746) graphic2_pages_pane_g2_ParamLimits

0xe8ab,	// (0x00069746) graphic2_pages_pane_g2

0x0001,

0xfdb1,	// (0x0006ac4c) graphic2_pages_pane_g_ParamLimits

0xfdb1,	// (0x0006ac4c) graphic2_pages_pane_g

0xe8c3,	// (0x0006975e) graphic2_pages_pane_t1_ParamLimits

0xe8c3,	// (0x0006975e) graphic2_pages_pane_t1

0xe8db,	// (0x00069776) cell_graphic2_control_pane_ParamLimits

0xe8db,	// (0x00069776) cell_graphic2_control_pane

0xe90d,	// (0x000697a8) cell_graphic2_pane_g1_ParamLimits

0xe90d,	// (0x000697a8) cell_graphic2_pane_g1

0xdcc4,	// (0x00068b5f) cell_graphic2_pane_g2_ParamLimits

0xdcc4,	// (0x00068b5f) cell_graphic2_pane_g2

0xe587,	// (0x00069422) cell_graphic2_pane_g3_ParamLimits

0xe587,	// (0x00069422) cell_graphic2_pane_g3

0xdcd1,	// (0x00068b6c) cell_graphic2_pane_g4_ParamLimits

0xdcd1,	// (0x00068b6c) cell_graphic2_pane_g4

0xe91a,	// (0x000697b5) cell_graphic2_pane_g5_ParamLimits

0xe91a,	// (0x000697b5) cell_graphic2_pane_g5

0x0004,

0xfdb6,	// (0x0006ac51) cell_graphic2_pane_g_ParamLimits

0xfdb6,	// (0x0006ac51) cell_graphic2_pane_g

0xe93a,	// (0x000697d5) cell_graphic2_pane_t1_ParamLimits

0xe93a,	// (0x000697d5) cell_graphic2_pane_t1

0x3249,	// (0x0005e0e4) grid_highlight_pane_cp11_ParamLimits

0x3249,	// (0x0005e0e4) grid_highlight_pane_cp11

0x812e,	// (0x00062fc9) bg_button_pane_cp05

0xe971,	// (0x0006980c) cell_graphic2_control_pane_g1

0x4d30,	// (0x0005fbcb) bg_touch_area_indi_pane_g1

0x6f42,	// (0x00061ddd) aid_cmod_rocker_key_size

0x6f4c,	// (0x00061de7) aid_cmode_itu_key_size

0x6f56,	// (0x00061df1) main_cmode_video_pane

0x6f60,	// (0x00061dfb) main_comp_mode_itu_pane

0x6f6c,	// (0x00061e07) main_comp_mode_rocker_pane

0x6f78,	// (0x00061e13) cell_cmode_rocker_pane_ParamLimits

0x6f78,	// (0x00061e13) cell_cmode_rocker_pane

0x6f8a,	// (0x00061e25) cell_cmode_itu_pane_ParamLimits

0x6f8a,	// (0x00061e25) cell_cmode_itu_pane

0x83b6,	// (0x00063251) bg_button_pane_cp06_ParamLimits

0x83b6,	// (0x00063251) bg_button_pane_cp06

0x4fa0,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_ParamLimits

0x4fa0,	// (0x0005fe3b) cell_cmode_rocker_pane_g1

0x64e1,	// (0x0006137c) cell_cmode_rocker_pane_g2_ParamLimits

0x64e1,	// (0x0006137c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc6,	// (0x0006ac61) cell_cmode_rocker_pane_g_ParamLimits

0xfdc6,	// (0x0006ac61) cell_cmode_rocker_pane_g

0x7f94,	// (0x00062e2f) bg_button_pane_cp07

0x6f9f,	// (0x00061e3a) cell_cmode_itu_pane_g1

0x6fa8,	// (0x00061e43) cell_cmode_itu_pane_t1

0x6fb6,	// (0x00061e51) cell_cmode_itu_pane_t2

0x0001,

0xfdcb,	// (0x0006ac66) cell_cmode_itu_pane_t

0x6705,	// (0x000615a0) aid_touch_ctrl_left

0x670d,	// (0x000615a8) aid_touch_ctrl_right

0x7f94,	// (0x00062e2f) compa_mode_pane

0xe999,	// (0x00069834) aid_cmod_rocker_key_size_cp

0xe9a3,	// (0x0006983e) aid_cmode_itu_key_size_cp

0x6fd8,	// (0x00061e73) compa_mode_pane_g1

0x6fe0,	// (0x00061e7b) compa_mode_pane_g2

0x6fe8,	// (0x00061e83) compa_mode_pane_g3

0x0002,

0xfdd0,	// (0x0006ac6b) compa_mode_pane_g

0xe9ad,	// (0x00069848) main_comp_mode_itu_pane_cp

0xe9b5,	// (0x00069850) main_comp_mode_rocker_pane_cp

0xe9bd,	// (0x00069858) cell_cmode_itu_pane_cp_ParamLimits

0xe9bd,	// (0x00069858) cell_cmode_itu_pane_cp

0xe9d2,	// (0x0006986d) cell_cmode_rocker_pane_cp_ParamLimits

0xe9d2,	// (0x0006986d) cell_cmode_rocker_pane_cp

0x83b6,	// (0x00063251) bg_button_pane_cp06_cp_ParamLimits

0x83b6,	// (0x00063251) bg_button_pane_cp06_cp

0x4fa0,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4fa0,	// (0x0005fe3b) cell_cmode_rocker_pane_g1_cp

0x4d30,	// (0x0005fbcb) cell_cmode_rocker_pane_g2_cp

0x7f94,	// (0x00062e2f) bg_button_pane_cp07_cp

0xe9e4,	// (0x0006987f) cell_cmode_itu_pane_g1_cp

0xe9ed,	// (0x00069888) cell_cmode_itu_pane_t1_cp

0xe9ed,	// (0x00069888) cell_cmode_itu_pane_t2_cp

0xc842,	// (0x000676dd) settings_code_pane_cp2

0x7ff6,	// (0x00062e91) bg_popup_window_pane_cp3_ParamLimits

0x8247,	// (0x000630e2) heading_pane_cp3_ParamLimits

0x8253,	// (0x000630ee) listscroll_popup_graphic_pane_ParamLimits

0x0cce,	// (0x0005bb69) fep_hwr_aid_pane_ParamLimits

0x1242,	// (0x0005c0dd) aid_touch_sctrl_top_ParamLimits

0x125d,	// (0x0005c0f8) sctrl_sk_top_pane_g1_ParamLimits

0x0f25,	// (0x0005bdc0) sctrl_sk_top_pane_g2_ParamLimits

0xfd06,	// (0x0006aba1) sctrl_sk_top_pane_g_ParamLimits

0x126a,	// (0x0005c105) sctrl_sk_top_pane_t1_ParamLimits

0x1242,	// (0x0005c0dd) aid_touch_sctrl_bottom_ParamLimits

0x126a,	// (0x0005c105) sctrl_sk_bottom_pane_t1_ParamLimits

0xd75e,	// (0x000685f9) aid_area_touch_clock

0xb6f6,	// (0x00066591) aid_vkb2_area_top_pane_cell_ParamLimits

0xb6f6,	// (0x00066591) aid_vkb2_area_top_pane_cell

0xb7a1,	// (0x0006663c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xb7a1,	// (0x0006663c) aid_vkb2_area_bottom_pane_cell

0x6bbd,	// (0x00061a58) popup_char_count_window

0x703e,	// (0x00061ed9) popup_char_count_window_g1

0x7047,	// (0x00061ee2) popup_char_count_window_g2

0x7050,	// (0x00061eeb) popup_char_count_window_g3

0x0002,

0xfdd7,	// (0x0006ac72) popup_char_count_window_g

0x7059,	// (0x00061ef4) popup_char_count_window_t1

0x1319,	// (0x0005c1b4) popup_fep_char_preview_window_ParamLimits

0x1319,	// (0x0005c1b4) popup_fep_char_preview_window

0xb716,	// (0x000665b1) vkb2_top_candi_pane_ParamLimits

0xb716,	// (0x000665b1) vkb2_top_candi_pane

0xe9fb,	// (0x00069896) cell_vkb2_top_candi_pane_ParamLimits

0xe9fb,	// (0x00069896) cell_vkb2_top_candi_pane

0x1881,	// (0x0005c71c) bg_popup_fep_char_preview_window_ParamLimits

0x1881,	// (0x0005c71c) bg_popup_fep_char_preview_window

0x188f,	// (0x0005c72a) popup_fep_char_preview_window_t1_ParamLimits

0x188f,	// (0x0005c72a) popup_fep_char_preview_window_t1

0x70b4,	// (0x00061f4f) bg_popup_fep_char_preview_window_g1

0x70bc,	// (0x00061f57) bg_popup_fep_char_preview_window_g2

0x70c4,	// (0x00061f5f) bg_popup_fep_char_preview_window_g3

0x70cc,	// (0x00061f67) bg_popup_fep_char_preview_window_g4

0x70d4,	// (0x00061f6f) bg_popup_fep_char_preview_window_g5

0x18c9,	// (0x0005c764) bg_popup_fep_char_preview_window_g6

0x70dc,	// (0x00061f77) bg_popup_fep_char_preview_window_g7

0x70e4,	// (0x00061f7f) bg_popup_fep_char_preview_window_g8

0x70ec,	// (0x00061f87) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdde,	// (0x0006ac79) bg_popup_fep_char_preview_window_g

0x0f25,	// (0x0005bdc0) cell_vkb2_top_candi_pane_g1_ParamLimits

0x0f25,	// (0x0005bdc0) cell_vkb2_top_candi_pane_g1

0x0f33,	// (0x0005bdce) cell_vkb2_top_candi_pane_g2_ParamLimits

0x0f33,	// (0x0005bdce) cell_vkb2_top_candi_pane_g2

0x607d,	// (0x00060f18) cell_vkb2_top_candi_pane_g3_ParamLimits

0x607d,	// (0x00060f18) cell_vkb2_top_candi_pane_g3

0x18d1,	// (0x0005c76c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x18d1,	// (0x0005c76c) cell_vkb2_top_candi_pane_g4

0x54a0,	// (0x0006033b) cell_vkb2_top_candi_pane_g5_ParamLimits

0x54a0,	// (0x0006033b) cell_vkb2_top_candi_pane_g5

0x18f2,	// (0x0005c78d) cell_vkb2_top_candi_pane_g6_ParamLimits

0x18f2,	// (0x0005c78d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf1,	// (0x0006ac8c) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf1,	// (0x0006ac8c) cell_vkb2_top_candi_pane_g

0x1900,	// (0x0005c79b) cell_vkb2_top_candi_pane_t1

0xb1c7,	// (0x00066062) aid_size_touch_slider_mark_ParamLimits

0xb1c7,	// (0x00066062) aid_size_touch_slider_mark

0xe724,	// (0x000695bf) grid_graphic2_catg_pane_ParamLimits

0xe724,	// (0x000695bf) grid_graphic2_catg_pane

0xe7e0,	// (0x0006967b) popup_grid_graphic2_window_t1_ParamLimits

0xe7e0,	// (0x0006967b) popup_grid_graphic2_window_t1

0xe7f6,	// (0x00069691) popup_grid_graphic2_window_t2_ParamLimits

0xe7f6,	// (0x00069691) popup_grid_graphic2_window_t2

0x0001,

0xfdac,	// (0x0006ac47) popup_grid_graphic2_window_t_ParamLimits

0xfdac,	// (0x0006ac47) popup_grid_graphic2_window_t

0x812e,	// (0x00062fc9) bg_button_pane_cp05_ParamLimits

0xe971,	// (0x0006980c) cell_graphic2_control_pane_g1_ParamLimits

0xea61,	// (0x000698fc) cell_graphic2_catg_pane_ParamLimits

0xea61,	// (0x000698fc) cell_graphic2_catg_pane

0x7f94,	// (0x00062e2f) bg_button_pane_cp12

0xea73,	// (0x0006990e) cell_graphic2_catg_pane_g1

0x661b,	// (0x000614b6) cell_tb_ext_pane_t1_ParamLimits

0x16bb,	// (0x0005c556) vkb2_top_cell_right_narrow_pane_ParamLimits

0x16bb,	// (0x0005c556) vkb2_top_cell_right_narrow_pane

0x16d3,	// (0x0005c56e) vkb2_top_cell_right_wide_pane_ParamLimits

0x16d3,	// (0x0005c56e) vkb2_top_cell_right_wide_pane

0x0cc0,	// (0x0005bb5b) bg_vkb2_func_pane_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_vkb2_func_pane

0x1744,	// (0x0005c5df) vkb2_top_cell_left_pane_g1_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp03_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp03

0x17a2,	// (0x0005c63d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x256b,	// (0x0005d406) bg_vkb2_func_pane_g1

0x2573,	// (0x0005d40e) bg_vkb2_func_pane_g2

0x2583,	// (0x0005d41e) bg_vkb2_func_pane_g3

0x257b,	// (0x0005d416) bg_vkb2_func_pane_g4

0x258b,	// (0x0005d426) bg_vkb2_func_pane_g5

0x2593,	// (0x0005d42e) bg_vkb2_func_pane_g6

0x259b,	// (0x0005d436) bg_vkb2_func_pane_g7

0x25a3,	// (0x0005d43e) bg_vkb2_func_pane_g8

0x2563,	// (0x0005d3fe) bg_vkb2_func_pane_g9

0x0008,

0xfdfe,	// (0x0006ac99) bg_vkb2_func_pane_g

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp01_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp01

0x1744,	// (0x0005c5df) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x1744,	// (0x0005c5df) vkb2_top_cell_right_wide_pane_g1

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp02_ParamLimits

0x0cc0,	// (0x0005bb5b) bg_vkb2_fuc_pane_cp02

0x17a2,	// (0x0005c63d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x17a2,	// (0x0005c63d) vkb2_top_cell_right_narrow_pane_g1

0xd47f,	// (0x0006831a) aid_touch_area_decrease_ParamLimits

0xd47f,	// (0x0006831a) aid_touch_area_decrease

0xd4b5,	// (0x00068350) aid_touch_area_increase_ParamLimits

0xd4b5,	// (0x00068350) aid_touch_area_increase

0xd4dd,	// (0x00068378) aid_touch_area_mute_ParamLimits

0xd4dd,	// (0x00068378) aid_touch_area_mute

0xd50d,	// (0x000683a8) aid_touch_area_slider_ParamLimits

0xd50d,	// (0x000683a8) aid_touch_area_slider

0xd54d,	// (0x000683e8) popup_slider_window_g4_ParamLimits

0xd54d,	// (0x000683e8) popup_slider_window_g4

0xd575,	// (0x00068410) popup_slider_window_g5_ParamLimits

0xd575,	// (0x00068410) popup_slider_window_g5

0xd5a9,	// (0x00068444) popup_slider_window_g6_ParamLimits

0xd5a9,	// (0x00068444) popup_slider_window_g6

0x63f7,	// (0x00061292) popup_slider_window_t2_ParamLimits

0x63f7,	// (0x00061292) popup_slider_window_t2

0x0001,

0xfcfa,	// (0x0006ab95) popup_slider_window_t_ParamLimits

0xfcfa,	// (0x0006ab95) popup_slider_window_t

0xd5c5,	// (0x00068460) slider_pane_ParamLimits

0xd5c5,	// (0x00068460) slider_pane

0x710f,	// (0x00061faa) slider_pane_g1_ParamLimits

0x710f,	// (0x00061faa) slider_pane_g1

0x7123,	// (0x00061fbe) slider_pane_g2_ParamLimits

0x7123,	// (0x00061fbe) slider_pane_g2

0x7139,	// (0x00061fd4) slider_pane_g3_ParamLimits

0x7139,	// (0x00061fd4) slider_pane_g3

0x0003,

0xfe11,	// (0x0006acac) slider_pane_g_ParamLimits

0xfe11,	// (0x0006acac) slider_pane_g

0xafd0,	// (0x00065e6b) popup_tb_float_extension_window_ParamLimits

0xafd0,	// (0x00065e6b) popup_tb_float_extension_window

0x7165,	// (0x00062000) aid_size_cell_tb_float_ext

0x7f94,	// (0x00062e2f) bg_popup_sub_window_cp28

0xea7c,	// (0x00069917) grid_tb_float_ext_pane

0xea86,	// (0x00069921) cell_tb_float_ext_pane_ParamLimits

0xea86,	// (0x00069921) cell_tb_float_ext_pane

0xeaa0,	// (0x0006993b) cell_tb_float_ext_pane_g1

0xeaa9,	// (0x00069944) grid_highlight_pane_cp12

0xb332,	// (0x000661cd) cell_last_hwr_side_pane_ParamLimits

0xb332,	// (0x000661cd) cell_last_hwr_side_pane

0x4d30,	// (0x0005fbcb) cell_last_hwr_side_pane_g1

0x71a7,	// (0x00062042) cell_last_hwr_side_pane_g2

0x0001,

0xfe1a,	// (0x0006acb5) cell_last_hwr_side_pane_g

0xb87d,	// (0x00066718) vkb2_area_bottom_space_btn_pane_ParamLimits

0xb87d,	// (0x00066718) vkb2_area_bottom_space_btn_pane

0x0f25,	// (0x0005bdc0) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6c72,	// (0x00061b0d) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x1900,	// (0x0005c79b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x191f,	// (0x0005c7ba) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x191f,	// (0x0005c7ba) vkb2_area_bottom_space_btn_pane_g1

0x1959,	// (0x0005c7f4) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x1959,	// (0x0005c7f4) vkb2_area_bottom_space_btn_pane_g2

0x198f,	// (0x0005c82a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x198f,	// (0x0005c82a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1f,	// (0x0006acba) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1f,	// (0x0006acba) vkb2_area_bottom_space_btn_pane_g

0x0d83,	// (0x0005bc1e) cel_fep_hwr_func_pane_ParamLimits

0x0d83,	// (0x0005bc1e) cel_fep_hwr_func_pane

0xb307,	// (0x000661a2) cell_hwr_side_button_pane_ParamLimits

0xb307,	// (0x000661a2) cell_hwr_side_button_pane

0xd75e,	// (0x000685f9) aid_area_touch_clock_ParamLimits

0x812e,	// (0x00062fc9) bg_uniindi_top_pane_ParamLimits

0xd770,	// (0x0006860b) uniindi_top_pane_g1_ParamLimits

0xd786,	// (0x00068621) uniindi_top_pane_g2_ParamLimits

0xd792,	// (0x0006862d) uniindi_top_pane_g3_ParamLimits

0x6694,	// (0x0006152f) uniindi_top_pane_g4_ParamLimits

0xfd32,	// (0x0006abcd) uniindi_top_pane_g_ParamLimits

0xd7a3,	// (0x0006863e) uniindi_top_pane_t1_ParamLimits

0x812e,	// (0x00062fc9) bg_vkb2_func_pane_cp01_ParamLimits

0x812e,	// (0x00062fc9) bg_vkb2_func_pane_cp01

0x71b0,	// (0x0006204b) cel_fep_hwr_func_pane_g1_ParamLimits

0x71b0,	// (0x0006204b) cel_fep_hwr_func_pane_g1

0x812e,	// (0x00062fc9) bg_vkb2_func_pane_cp02_ParamLimits

0x812e,	// (0x00062fc9) bg_vkb2_func_pane_cp02

0x71b0,	// (0x0006204b) cell_hwr_side_button_pane_g1_ParamLimits

0x71b0,	// (0x0006204b) cell_hwr_side_button_pane_g1

0x23e7,	// (0x0005d282) status_pane_g4_ParamLimits

0x23e7,	// (0x0005d282) status_pane_g4

0x2401,	// (0x0005d29c) status_pane_t1

0x4a65,	// (0x0005f900) form2_midp_gauge_slider_cont_pane

0x4a6d,	// (0x0005f908) form2_midp_gauge_slider_pane_t1_ParamLimits

0xcbd4,	// (0x00067a6f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xcbe6,	// (0x00067a81) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf9,	// (0x0006a994) form2_midp_gauge_slider_pane_t_ParamLimits

0x4aa3,	// (0x0005f93e) form2_midp_slider_pane_ParamLimits

0x12d9,	// (0x0005c174) aid_size_cell_func_vkb2_ParamLimits

0x12d9,	// (0x0005c174) aid_size_cell_func_vkb2

0x7151,	// (0x00061fec) slider_pane_g4_ParamLimits

0x7151,	// (0x00061fec) slider_pane_g4

0xb8de,	// (0x00066779) form2_midp_gauge_slider_pane_t2_cp01

0xb8ec,	// (0x00066787) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xb8ec,	// (0x00066787) form2_midp_gauge_slider_pane_t3_cp01

0x1a04,	// (0x0005c89f) form2_midp_slider_pane_cp01

0x7f94,	// (0x00062e2f) navi_smil_pane

0x71e9,	// (0x00062084) navi_smil_pane_g1

0x71f1,	// (0x0006208c) navi_smil_pane_t1

0x71be,	// (0x00062059) form2_midp_slider_pane_g1

0x71c7,	// (0x00062062) form2_midp_slider_pane_g2

0x71cf,	// (0x0006206a) form2_midp_slider_pane_g3

0x71be,	// (0x00062059) form2_midp_slider_pane_g4

0xeab2,	// (0x0006994d) form2_midp_slider_pane_g5

0x0004,

0xfe28,	// (0x0006acc3) form2_midp_slider_pane_g

0x19c9,	// (0x0005c864) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x19c9,	// (0x0005c864) vkb2_area_bottom_space_btn_pane_g4

0xbd92,	// (0x00066c2d) lc0_navi_pane_ParamLimits

0xbd92,	// (0x00066c2d) lc0_navi_pane

0xbdfc,	// (0x00066c97) lc0_stat_indi_pane_ParamLimits

0xbdfc,	// (0x00066c97) lc0_stat_indi_pane

0xbe11,	// (0x00066cac) ls0_title_pane_ParamLimits

0xbe11,	// (0x00066cac) ls0_title_pane

0x83b6,	// (0x00063251) bg_popup_sub_pane_cp14_ParamLimits

0xd745,	// (0x000685e0) list_uniindi_pane_ParamLimits

0xd751,	// (0x000685ec) uniindi_top_pane_ParamLimits

0x66dd,	// (0x00061578) list_single_uniindi_pane_g1_ParamLimits

0x66f0,	// (0x0006158b) list_single_uniindi_pane_t1_ParamLimits

0xb909,	// (0x000667a4) lc0_stat_clock_pane_ParamLimits

0xb909,	// (0x000667a4) lc0_stat_clock_pane

0xeabd,	// (0x00069958) lc0_stat_indi_pane_g1_ParamLimits

0xeabd,	// (0x00069958) lc0_stat_indi_pane_g1

0xeaca,	// (0x00069965) lc0_stat_indi_pane_g2_ParamLimits

0xeaca,	// (0x00069965) lc0_stat_indi_pane_g2

0x0001,

0xfe33,	// (0x0006acce) lc0_stat_indi_pane_g_ParamLimits

0xfe33,	// (0x0006acce) lc0_stat_indi_pane_g

0xb919,	// (0x000667b4) lc0_uni_indicator_pane_ParamLimits

0xb919,	// (0x000667b4) lc0_uni_indicator_pane

0xead7,	// (0x00069972) ls0_title_pane_g1_ParamLimits

0xead7,	// (0x00069972) ls0_title_pane_g1

0xeaeb,	// (0x00069986) ls0_title_pane_t1_ParamLimits

0xeaeb,	// (0x00069986) ls0_title_pane_t1

0xb929,	// (0x000667c4) lc0_uni_indicator_pane_g1_ParamLimits

0xb929,	// (0x000667c4) lc0_uni_indicator_pane_g1

0x7263,	// (0x000620fe) lc0_stat_clock_pane_t1

0xdd92,	// (0x00068c2d) main_ai5_pane

0x7271,	// (0x0006210c) ai5_sk_pane_ParamLimits

0x7271,	// (0x0006210c) ai5_sk_pane

0xeb19,	// (0x000699b4) cell_ai5_widget_pane_ParamLimits

0xeb19,	// (0x000699b4) cell_ai5_widget_pane

0xeb83,	// (0x00069a1e) aid_size_cell_widget_grid

0x7348,	// (0x000621e3) bg_ai5_widget_pane_ParamLimits

0x7348,	// (0x000621e3) bg_ai5_widget_pane

0xebb7,	// (0x00069a52) cell_ai5_widget_pane_g2

0x73cc,	// (0x00062267) cell_ai5_widget_pane_g3

0x73e3,	// (0x0006227e) cell_ai5_widget_pane_g4

0x73ef,	// (0x0006228a) cell_ai5_widget_pane_g5

0xebc7,	// (0x00069a62) cell_ai5_widget_pane_g6

0xebd3,	// (0x00069a6e) cell_ai5_widget_pane_g7

0x744f,	// (0x000622ea) cell_ai5_widget_pane_t1_ParamLimits

0x744f,	// (0x000622ea) cell_ai5_widget_pane_t1

0x746c,	// (0x00062307) cell_ai5_widget_pane_t2_ParamLimits

0x746c,	// (0x00062307) cell_ai5_widget_pane_t2

0x7484,	// (0x0006231f) cell_ai5_widget_pane_t3_ParamLimits

0x7484,	// (0x0006231f) cell_ai5_widget_pane_t3

0xebdf,	// (0x00069a7a) cell_ai5_widget_pane_t4_ParamLimits

0xebdf,	// (0x00069a7a) cell_ai5_widget_pane_t4

0xebfc,	// (0x00069a97) cell_ai5_widget_pane_t5_ParamLimits

0xebfc,	// (0x00069a97) cell_ai5_widget_pane_t5

0x74d8,	// (0x00062373) cell_ai5_widget_pane_t6_ParamLimits

0x74d8,	// (0x00062373) cell_ai5_widget_pane_t6

0x74ea,	// (0x00062385) cell_ai5_widget_pane_t7_ParamLimits

0x74ea,	// (0x00062385) cell_ai5_widget_pane_t7

0x7503,	// (0x0006239e) cell_ai5_widget_pane_t8_ParamLimits

0x7503,	// (0x0006239e) cell_ai5_widget_pane_t8

0x0009,

0xfe4d,	// (0x0006ace8) cell_ai5_widget_pane_t_ParamLimits

0xfe4d,	// (0x0006ace8) cell_ai5_widget_pane_t

0xec1b,	// (0x00069ab6) grid_ai5_widget_pane

0x83b6,	// (0x00063251) highlight_cell_ai5_widget_pane_ParamLimits

0x83b6,	// (0x00063251) highlight_cell_ai5_widget_pane

0xec33,	// (0x00069ace) ai5_sk_left_pane

0xec3d,	// (0x00069ad8) ai5_sk_middle_pane

0xec47,	// (0x00069ae2) ai5_sk_right_pane

0x7583,	// (0x0006241e) bg_ai5_widget_pane_g1_ParamLimits

0x7583,	// (0x0006241e) bg_ai5_widget_pane_g1

0x758f,	// (0x0006242a) bg_ai5_widget_pane_g2_ParamLimits

0x758f,	// (0x0006242a) bg_ai5_widget_pane_g2

0x759b,	// (0x00062436) bg_ai5_widget_pane_g3_ParamLimits

0x759b,	// (0x00062436) bg_ai5_widget_pane_g3

0x75a7,	// (0x00062442) bg_ai5_widget_pane_g4_ParamLimits

0x75a7,	// (0x00062442) bg_ai5_widget_pane_g4

0x75b3,	// (0x0006244e) bg_ai5_widget_pane_g5_ParamLimits

0x75b3,	// (0x0006244e) bg_ai5_widget_pane_g5

0x75bf,	// (0x0006245a) bg_ai5_widget_pane_g6_ParamLimits

0x75bf,	// (0x0006245a) bg_ai5_widget_pane_g6

0x75cb,	// (0x00062466) bg_ai5_widget_pane_g7_ParamLimits

0x75cb,	// (0x00062466) bg_ai5_widget_pane_g7

0x75d7,	// (0x00062472) bg_ai5_widget_pane_g8_ParamLimits

0x75d7,	// (0x00062472) bg_ai5_widget_pane_g8

0x75e3,	// (0x0006247e) bg_ai5_widget_pane_g9_ParamLimits

0x75e3,	// (0x0006247e) bg_ai5_widget_pane_g9

0x0008,

0xfe62,	// (0x0006acfd) bg_ai5_widget_pane_g_ParamLimits

0xfe62,	// (0x0006acfd) bg_ai5_widget_pane_g

0xec77,	// (0x00069b12) cell_shortcut_ai5_widget_pane_ParamLimits

0xec77,	// (0x00069b12) cell_shortcut_ai5_widget_pane

0xf49d,	// (0x0006a338) bg_cell_shortcut_ai5_widget_pane

0x7626,	// (0x000624c1) cell_grid_ai5_widget_pane_g1

0xf49d,	// (0x0006a338) highlight_cell_shortcut_ai5_widget_pane

0x256b,	// (0x0005d406) ai5_sk_left_pane_g1

0x762f,	// (0x000624ca) ai5_sk_left_pane_g2

0x7637,	// (0x000624d2) ai5_sk_left_pane_g3

0x763f,	// (0x000624da) ai5_sk_left_pane_g4

0x0003,

0xfe75,	// (0x0006ad10) ai5_sk_left_pane_g

0x7647,	// (0x000624e2) ai5_sk_left_pane_t1

0x2573,	// (0x0005d40e) ai5_sk_right_pane_g1

0x7655,	// (0x000624f0) ai5_sk_right_pane_g2

0x765d,	// (0x000624f8) ai5_sk_right_pane_g3

0x7665,	// (0x00062500) ai5_sk_right_pane_g4

0x0003,

0xfe7e,	// (0x0006ad19) ai5_sk_right_pane_g

0x766d,	// (0x00062508) ai5_sk_right_pane_t1

0x2573,	// (0x0005d40e) ai5_sk_middle_pane_g1

0x256b,	// (0x0005d406) ai5_sk_middle_pane_g2

0x258b,	// (0x0005d426) ai5_sk_middle_pane_g3

0x765d,	// (0x000624f8) ai5_sk_middle_pane_g4

0x7637,	// (0x000624d2) ai5_sk_middle_pane_g5

0x767b,	// (0x00062516) ai5_sk_middle_pane_g6

0xec88,	// (0x00069b23) ai5_sk_middle_pane_g7

0x0006,

0xfe87,	// (0x0006ad22) ai5_sk_middle_pane_g

0xbc7e,	// (0x00066b19) aid_touch_area_size_lc0_ParamLimits

0xbc7e,	// (0x00066b19) aid_touch_area_size_lc0

0x0f54,	// (0x0005bdef) cell_hwr_candidate_pane_t1_ParamLimits

0x20b8,	// (0x0005cf53) aid_touch_navi_pane

0xbf0a,	// (0x00066da5) status_dt_navi_pane_ParamLimits

0xbf0a,	// (0x00066da5) status_dt_navi_pane

0xbf22,	// (0x00066dbd) status_dt_sta_pane_ParamLimits

0xbf22,	// (0x00066dbd) status_dt_sta_pane

0xec90,	// (0x00069b2b) dt_sta_controll_pane

0xec9d,	// (0x00069b38) dt_sta_indi_pane

0xecaa,	// (0x00069b45) dt_sta_title_pane

0x812e,	// (0x00062fc9) bg_dt_sta_indi_pane_ParamLimits

0x812e,	// (0x00062fc9) bg_dt_sta_indi_pane

0xecbc,	// (0x00069b57) dt_sta_battery_pane

0xecc4,	// (0x00069b5f) dt_sta_indi_pane_g1

0x76cd,	// (0x00062568) dt_sta_indi_pane_g2

0x76d6,	// (0x00062571) dt_sta_indi_pane_g3

0x0002,

0xfe96,	// (0x0006ad31) dt_sta_indi_pane_g

0x76df,	// (0x0006257a) dt_sta_signal_pane

0x83b6,	// (0x00063251) bg_dt_sta_title_pane_ParamLimits

0x83b6,	// (0x00063251) bg_dt_sta_title_pane

0x33a9,	// (0x0005e244) dt_sta_title_pane_g1

0xeccd,	// (0x00069b68) dt_sta_title_pane_t1_ParamLimits

0xeccd,	// (0x00069b68) dt_sta_title_pane_t1

0x7f94,	// (0x00062e2f) bg_dt_sta_control_pane

0xece2,	// (0x00069b7d) dt_sta_controll_pane_g1

0xeceb,	// (0x00069b86) bg_dt_sta_title_pane_g1

0xecf4,	// (0x00069b8f) bg_dt_sta_title_pane_g2

0xecfd,	// (0x00069b98) bg_dt_sta_title_pane_g3

0x0002,

0xfe9d,	// (0x0006ad38) bg_dt_sta_title_pane_g

0x4d30,	// (0x0005fbcb) bg_dt_sta_indi_pane_g1

0x7721,	// (0x000625bc) dt_sta_signal_pane_g1

0x7729,	// (0x000625c4) dt_sta_signal_pane_g2

0x0001,

0xfea4,	// (0x0006ad3f) dt_sta_signal_pane_g

0x7731,	// (0x000625cc) dt_sta_battery_pane_g1

0x773a,	// (0x000625d5) dt_sta_battery_pane_t1

0x4d30,	// (0x0005fbcb) bg_dt_sta_control_pane_g1

0x886f,	// (0x0006370a) fep_china_uni_eep_pane

0x8877,	// (0x00063712) fep_china_uni_entry_pane_ParamLimits

0x8887,	// (0x00063722) popup_fep_china_uni_window_g1_ParamLimits

0x8897,	// (0x00063732) popup_fep_china_uni_window_g2_ParamLimits

0x8897,	// (0x00063732) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0006a5bd) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0006a5bd) popup_fep_china_uni_window_g

0x7749,	// (0x000625e4) fep_china_uni_eep_pane_g1

0x7751,	// (0x000625ec) fep_china_uni_eep_pane_t1

0x71e0,	// (0x0006207b) aid_touch_area_size_smil_player

0x220e,	// (0x0005d0a9) lc0_clock_pane

0x23f5,	// (0x0005d290) status_pane_g5_ParamLimits

0x23f5,	// (0x0005d290) status_pane_g5

0xab06,	// (0x000659a1) popup_keymap_window

0x23b3,	// (0x0005d24e) status_icon_pane

0x73cc,	// (0x00062267) cell_ai5_widget_pane_g3_ParamLimits

0x73e3,	// (0x0006227e) cell_ai5_widget_pane_g4_ParamLimits

0x73ef,	// (0x0006228a) cell_ai5_widget_pane_g5_ParamLimits

0x7413,	// (0x000622ae) cell_ai5_widget_pane_g8_ParamLimits

0x7413,	// (0x000622ae) cell_ai5_widget_pane_g8

0x7427,	// (0x000622c2) cell_ai5_widget_pane_g9_ParamLimits

0x7427,	// (0x000622c2) cell_ai5_widget_pane_g9

0x743b,	// (0x000622d6) cell_ai5_widget_pane_g10_ParamLimits

0x743b,	// (0x000622d6) cell_ai5_widget_pane_g10

0x7760,	// (0x000625fb) status_icon_pane_g1

0x7f94,	// (0x00062e2f) bg_popup_sub_pane_cp13

0x7768,	// (0x00062603) popup_keymap_window_t1

0xa7c0,	// (0x0006565b) control_pane_g6_ParamLimits

0xa7c0,	// (0x0006565b) control_pane_g6

0xa7cd,	// (0x00065668) control_pane_g7_ParamLimits

0xa7cd,	// (0x00065668) control_pane_g7

0xa7da,	// (0x00065675) control_pane_g8_ParamLimits

0xa7da,	// (0x00065675) control_pane_g8

0xec90,	// (0x00069b2b) dt_sta_controll_pane_ParamLimits

0xec9d,	// (0x00069b38) dt_sta_indi_pane_ParamLimits

0xecaa,	// (0x00069b45) dt_sta_title_pane_ParamLimits

0x8301,	// (0x0006319c) aid_size_touch_scroll_bar_cale

0x93ae,	// (0x00064249) popup_discreet_window_ParamLimits

0x93ae,	// (0x00064249) popup_discreet_window

0x9400,	// (0x0006429b) popup_sk_window

0x2bed,	// (0x0005da88) bg_popup_sub_pane_cp28_ParamLimits

0x2bed,	// (0x0005da88) bg_popup_sub_pane_cp28

0x7776,	// (0x00062611) popup_discreet_window_g1_ParamLimits

0x7776,	// (0x00062611) popup_discreet_window_g1

0xed06,	// (0x00069ba1) popup_discreet_window_t1_ParamLimits

0xed06,	// (0x00069ba1) popup_discreet_window_t1

0x77b4,	// (0x0006264f) popup_discreet_window_t2_ParamLimits

0x77b4,	// (0x0006264f) popup_discreet_window_t2

0x0002,

0xfea9,	// (0x0006ad44) popup_discreet_window_t_ParamLimits

0xfea9,	// (0x0006ad44) popup_discreet_window_t

0x1a3b,	// (0x0005c8d6) popup_sk_window_g1

0x1a45,	// (0x0005c8e0) popup_sk_window_g2

0x0001,

0xfeb0,	// (0x0006ad4b) popup_sk_window_g

0xb954,	// (0x000667ef) popup_sk_window_t1

0xb962,	// (0x000667fd) popup_sk_window_t1_copy1

0xebb7,	// (0x00069a52) cell_ai5_widget_pane_g2_ParamLimits

0x7515,	// (0x000623b0) cell_ai5_widget_pane_t9_ParamLimits

0x7515,	// (0x000623b0) cell_ai5_widget_pane_t9

0x7f94,	// (0x00062e2f) main_fep_fshwr2_pane

0xb970,	// (0x0006680b) aid_fshwr2_btn_pane

0xb982,	// (0x0006681d) aid_fshwr2_syb_pane

0xb994,	// (0x0006682f) aid_fshwr2_txt_pane

0xb9a3,	// (0x0006683e) fshwr2_func_candi_pane

0xb9c2,	// (0x0006685d) fshwr2_hwr_syb_pane

0xb9dd,	// (0x00066878) fshwr2_icf_pane

0xdd92,	// (0x00068c2d) fshwr2_icf_bg_pane

0x1add,	// (0x0005c978) fshwr2_icf_pane_t1_ParamLimits

0x1add,	// (0x0005c978) fshwr2_icf_pane_t1

0x87ec,	// (0x00063687) fshwr2_func_candi_pane_g1

0xed24,	// (0x00069bbf) fshwr2_func_candi_row_pane_ParamLimits

0xed24,	// (0x00069bbf) fshwr2_func_candi_row_pane

0xba09,	// (0x000668a4) cell_fshwr2_syb_pane_ParamLimits

0xba09,	// (0x000668a4) cell_fshwr2_syb_pane

0x0f25,	// (0x0005bdc0) fshwr2_hwr_syb_pane_g1_ParamLimits

0x0f25,	// (0x0005bdc0) fshwr2_hwr_syb_pane_g1

0xdd92,	// (0x00068c2d) bg_popup_call_pane_cp01

0xba1f,	// (0x000668ba) fshwr2_func_candi_cell_pane_ParamLimits

0xba1f,	// (0x000668ba) fshwr2_func_candi_cell_pane

0xed47,	// (0x00069be2) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xed47,	// (0x00069be2) fshwr2_func_candi_cell_bg_pane

0xba6a,	// (0x00066905) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xba6a,	// (0x00066905) fshwr2_func_candi_cell_pane_g1

0xbaa1,	// (0x0006693c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xbaa1,	// (0x0006693c) fshwr2_func_candi_cell_pane_t1

0xdd92,	// (0x00068c2d) bg_button_pane_cp08

0x7816,	// (0x000626b1) cell_fshwr2_syb_bg_pane

0xbabc,	// (0x00066957) cell_fshwr2_syb_bg_pane_g1

0xbac4,	// (0x0006695f) cell_fshwr2_syb_bg_pane_t1

0x83b6,	// (0x00063251) main_tmo_pane

0xc5f2,	// (0x0006748d) uni_indicator_pane_g1_ParamLimits

0xc608,	// (0x000674a3) uni_indicator_pane_g2_ParamLimits

0xc61e,	// (0x000674b9) uni_indicator_pane_g3_ParamLimits

0x3723,	// (0x0005e5be) uni_indicator_pane_g4_ParamLimits

0x3723,	// (0x0005e5be) uni_indicator_pane_g4

0x3737,	// (0x0005e5d2) uni_indicator_pane_g5_ParamLimits

0x3737,	// (0x0005e5d2) uni_indicator_pane_g5

0x3737,	// (0x0005e5d2) uni_indicator_pane_g6_ParamLimits

0x3737,	// (0x0005e5d2) uni_indicator_pane_g6

0xf921,	// (0x0006a7bc) uni_indicator_pane_g_ParamLimits

0xd461,	// (0x000682fc) popup_tmo_note_window_ParamLimits

0xd461,	// (0x000682fc) popup_tmo_note_window

0x12bb,	// (0x0005c156) fshwr2_bg_pane

0xba92,	// (0x0006692d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xba92,	// (0x0006692d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb5,	// (0x0006ad50) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb5,	// (0x0006ad50) fshwr2_func_candi_cell_pane_g

0x0f0d,	// (0x0005bda8) bg_popup_window_pane_cp01

0x1ba6,	// (0x0005ca41) bg_popup_window_pane_g1_cp01

0x781e,	// (0x000626b9) bg_popup_window_pane_cp22_ParamLimits

0x781e,	// (0x000626b9) bg_popup_window_pane_cp22

0xed53,	// (0x00069bee) listscroll_tmo_link_pane_ParamLimits

0xed53,	// (0x00069bee) listscroll_tmo_link_pane

0x786c,	// (0x00062707) popup_tmo_note_window_g1_ParamLimits

0x786c,	// (0x00062707) popup_tmo_note_window_g1

0xed93,	// (0x00069c2e) tmo_note_info_pane_ParamLimits

0xed93,	// (0x00069c2e) tmo_note_info_pane

0xedad,	// (0x00069c48) list_tmo_note_info_pane_g1_ParamLimits

0xedad,	// (0x00069c48) list_tmo_note_info_pane_g1

0x78aa,	// (0x00062745) list_tmo_note_info_pane_g2_ParamLimits

0x78aa,	// (0x00062745) list_tmo_note_info_pane_g2

0x0001,

0xfeba,	// (0x0006ad55) list_tmo_note_info_pane_g_ParamLimits

0xfeba,	// (0x0006ad55) list_tmo_note_info_pane_g

0x78c6,	// (0x00062761) list_tmo_note_info_text_pane_ParamLimits

0x78c6,	// (0x00062761) list_tmo_note_info_text_pane

0x7947,	// (0x000627e2) list_tmo_link_pane

0x7954,	// (0x000627ef) scroll_pane_cp20

0x7961,	// (0x000627fc) list_single_tmo_link_pane_ParamLimits

0x7961,	// (0x000627fc) list_single_tmo_link_pane

0x7971,	// (0x0006280c) list_single_tmo_link_pane_t1

0x797f,	// (0x0006281a) list_tmo_note_info_text_pane_t1_ParamLimits

0x797f,	// (0x0006281a) list_tmo_note_info_text_pane_t1

0xa120,	// (0x00064fbb) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa120,	// (0x00064fbb) aid_size_touch_scroll_bar_cp01

0xa033,	// (0x00064ece) aid_size_touch_slider_marker

0x93f0,	// (0x0006428b) popup_settings_window_ParamLimits

0x93f0,	// (0x0006428b) popup_settings_window

0xe1ca,	// (0x00069065) popup_candi_list_indi_window

0x20b8,	// (0x0005cf53) aid_touch_navi_pane_ParamLimits

0x1216,	// (0x0005c0b1) rs_clock_indi_pane

0x121f,	// (0x0005c0ba) sctrl_sk_bottom_pane_ParamLimits

0x1230,	// (0x0005c0cb) sctrl_sk_top_pane_ParamLimits

0xb5ba,	// (0x00066455) popup_fep_tooltip_window

0xeb83,	// (0x00069a1e) aid_size_cell_widget_grid_ParamLimits

0xeba2,	// (0x00069a3d) cell_ai5_widget_pane_g1_ParamLimits

0xeba2,	// (0x00069a3d) cell_ai5_widget_pane_g1

0xebc7,	// (0x00069a62) cell_ai5_widget_pane_g6_ParamLimits

0xebd3,	// (0x00069a6e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe38,	// (0x0006acd3) cell_ai5_widget_pane_g_ParamLimits

0xfe38,	// (0x0006acd3) cell_ai5_widget_pane_g

0x7539,	// (0x000623d4) cell_ai5_widget_pane_t10_ParamLimits

0x7539,	// (0x000623d4) cell_ai5_widget_pane_t10

0xec1b,	// (0x00069ab6) grid_ai5_widget_pane_ParamLimits

0xec51,	// (0x00069aec) cell_contacts_ai5_widget_pane_ParamLimits

0xec51,	// (0x00069aec) cell_contacts_ai5_widget_pane

0x77c9,	// (0x00062664) popup_discreet_window_t3_ParamLimits

0x77c9,	// (0x00062664) popup_discreet_window_t3

0xb9f5,	// (0x00066890) popup_fshwr2_char_preview_window_ParamLimits

0xb9f5,	// (0x00066890) popup_fshwr2_char_preview_window

0xedc4,	// (0x00069c5f) tmo_note_info_pane_t1

0xedd9,	// (0x00069c74) tmo_note_info_pane_t2

0xedf0,	// (0x00069c8b) tmo_note_info_pane_t3

0x7923,	// (0x000627be) tmo_note_info_pane_t4

0x7935,	// (0x000627d0) tmo_note_info_pane_t5

0x0004,

0xfebf,	// (0x0006ad5a) tmo_note_info_pane_t

0x7947,	// (0x000627e2) list_tmo_link_pane_ParamLimits

0x7954,	// (0x000627ef) scroll_pane_cp20_ParamLimits

0xdd92,	// (0x00068c2d) bg_popup_fep_char_preview_window_cp01

0x7998,	// (0x00062833) popup_fshwr2_char_preview_window_t1

0x79a6,	// (0x00062841) popup_candi_list_indi_window_g1

0x79af,	// (0x0006284a) bg_cell_contacts_ai5_widget_pane

0x79bb,	// (0x00062856) cell_contacts_ai5_widget_pane_g1

0x53f5,	// (0x00060290) cell_contacts_ai5_widget_pane_g2

0x79d0,	// (0x0006286b) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeca,	// (0x0006ad65) cell_contacts_ai5_widget_pane_g

0x79dc,	// (0x00062877) cell_contacts_ai5_widget_pane_t1

0x83b6,	// (0x00063251) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7a53,	// (0x000628ee) settings_container_pane

0xf49d,	// (0x0006a338) listscroll_set_pane_copy1

0x441c,	// (0x0005f2b7) scroll_pane_cp121_copy1

0x7a5f,	// (0x000628fa) set_content_pane_copy1

0xee6a,	// (0x00069d05) aid_height_set_list_copy1_ParamLimits

0xee6a,	// (0x00069d05) aid_height_set_list_copy1

0x392f,	// (0x0005e7ca) aid_size_parent_copy1_ParamLimits

0x392f,	// (0x0005e7ca) aid_size_parent_copy1

0xee76,	// (0x00069d11) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee76,	// (0x00069d11) button_value_adjust_pane_cp6_copy1

0x2056,	// (0x0005cef1) list_highlight_pane_cp2_copy1_ParamLimits

0x2056,	// (0x0005cef1) list_highlight_pane_cp2_copy1

0xee8a,	// (0x00069d25) list_set_pane_copy1_ParamLimits

0xee8a,	// (0x00069d25) list_set_pane_copy1

0xee05,	// (0x00069ca0) main_pane_set_t1_copy1_ParamLimits

0xee05,	// (0x00069ca0) main_pane_set_t1_copy1

0xee3f,	// (0x00069cda) main_pane_set_t2_copy1_ParamLimits

0xee3f,	// (0x00069cda) main_pane_set_t2_copy1

0xef37,	// (0x00069dd2) main_pane_set_t3_copy1

0xef45,	// (0x00069de0) main_pane_set_t4_copy1

0xee5e,	// (0x00069cf9) set_content_pane_g1_copy1_ParamLimits

0xee5e,	// (0x00069cf9) set_content_pane_g1_copy1

0xef53,	// (0x00069dee) setting_code_pane_copy1

0x7b58,	// (0x000629f3) setting_slider_graphic_pane_copy1

0x7b58,	// (0x000629f3) setting_slider_pane_copy1

0x7b58,	// (0x000629f3) setting_text_pane_copy1

0x7b58,	// (0x000629f3) setting_volume_pane_copy1

0xef53,	// (0x00069dee) settings_code_pane_cp2_copy1

0xef5b,	// (0x00069df6) settings_code_pane_cp_copy1_ParamLimits

0xef5b,	// (0x00069df6) settings_code_pane_cp_copy1

0xbad3,	// (0x0006696e) volume_set_pane_copy1

0xef6f,	// (0x00069e0a) volume_set_pane_g10_copy1

0xef77,	// (0x00069e12) volume_set_pane_g1_copy1

0xef7f,	// (0x00069e1a) volume_set_pane_g2_copy1

0xef87,	// (0x00069e22) volume_set_pane_g3_copy1

0xef8f,	// (0x00069e2a) volume_set_pane_g4_copy1

0xef97,	// (0x00069e32) volume_set_pane_g5_copy1

0xef9f,	// (0x00069e3a) volume_set_pane_g6_copy1

0xefa7,	// (0x00069e42) volume_set_pane_g7_copy1

0xefaf,	// (0x00069e4a) volume_set_pane_g8_copy1

0xefb7,	// (0x00069e52) volume_set_pane_g9_copy1

0x7ff6,	// (0x00062e91) bg_set_opt_pane_cp_copy1_ParamLimits

0x7ff6,	// (0x00062e91) bg_set_opt_pane_cp_copy1

0xbadb,	// (0x00066976) setting_slider_pane_t1_copy1_ParamLimits

0xbadb,	// (0x00066976) setting_slider_pane_t1_copy1

0xbaf9,	// (0x00066994) setting_slider_pane_t2_copy1_ParamLimits

0xbaf9,	// (0x00066994) setting_slider_pane_t2_copy1

0xbb13,	// (0x000669ae) setting_slider_pane_t3_copy1_ParamLimits

0xbb13,	// (0x000669ae) setting_slider_pane_t3_copy1

0xbb2b,	// (0x000669c6) slider_set_pane_copy1_ParamLimits

0xbb2b,	// (0x000669c6) slider_set_pane_copy1

0x8411,	// (0x000632ac) set_opt_bg_pane_g1_copy2

0x8419,	// (0x000632b4) set_opt_bg_pane_g2_copy2

0x7bc4,	// (0x00062a5f) set_opt_bg_pane_g3_copy2

0x8429,	// (0x000632c4) set_opt_bg_pane_g4_copy2

0x8431,	// (0x000632cc) set_opt_bg_pane_g5_copy2

0x8439,	// (0x000632d4) set_opt_bg_pane_g6_copy2

0xefbf,	// (0x00069e5a) set_opt_bg_pane_g7_copy2

0x7bd6,	// (0x00062a71) set_opt_bg_pane_g8_copy2

0x7be0,	// (0x00062a7b) set_opt_bg_pane_g9_copy2

0xbb41,	// (0x000669dc) aid_size_touch_slider_mark_copy1_ParamLimits

0xbb41,	// (0x000669dc) aid_size_touch_slider_mark_copy1

0xefc7,	// (0x00069e62) slider_set_pane_g1_copy1

0x1c31,	// (0x0005cacc) slider_set_pane_g2_copy1

0xb1db,	// (0x00066076) slider_set_pane_g3_copy1_ParamLimits

0xb1db,	// (0x00066076) slider_set_pane_g3_copy1

0xb1ef,	// (0x0006608a) slider_set_pane_g4_copy1_ParamLimits

0xb1ef,	// (0x0006608a) slider_set_pane_g4_copy1

0xb207,	// (0x000660a2) slider_set_pane_g5_copy1_ParamLimits

0xb207,	// (0x000660a2) slider_set_pane_g5_copy1

0xb1db,	// (0x00066076) slider_set_pane_g6_copy1_ParamLimits

0xb1db,	// (0x00066076) slider_set_pane_g6_copy1

0xbb55,	// (0x000669f0) slider_set_pane_g7_copy1_ParamLimits

0xbb55,	// (0x000669f0) slider_set_pane_g7_copy1

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp2_copy1

0xefd0,	// (0x00069e6b) setting_slider_graphic_pane_g1_copy1

0xefd9,	// (0x00069e74) setting_slider_graphic_pane_t1_copy1

0xefe9,	// (0x00069e84) setting_slider_graphic_pane_t2_copy1

0xeff9,	// (0x00069e94) slider_set_pane_cp_copy1

0x7c2c,	// (0x00062ac7) input_focus_pane_cp1_copy1

0x7c35,	// (0x00062ad0) list_set_text_pane_copy1

0x7c3d,	// (0x00062ad8) setting_text_pane_g1_copy1

0xf009,	// (0x00069ea4) set_text_pane_t1_copy1

0x7c2c,	// (0x00062ac7) input_focus_pane_cp2_copy1

0x7c3d,	// (0x00062ad8) setting_code_pane_g1_copy1

0x7c46,	// (0x00062ae1) setting_code_pane_t1_copy1

0x4254,	// (0x0005f0ef) list_set_graphic_pane_copy1

0x7fa8,	// (0x00062e43) bg_set_opt_pane_cp4_copy1

0xdfbd,	// (0x00068e58) list_set_graphic_pane_g1_copy1_ParamLimits

0xdfbd,	// (0x00068e58) list_set_graphic_pane_g1_copy1

0x7c54,	// (0x00062aef) list_set_graphic_pane_g2_copy1

0xdfd5,	// (0x00068e70) list_set_graphic_pane_t1_copy1_ParamLimits

0xdfd5,	// (0x00068e70) list_set_graphic_pane_t1_copy1

0x4d30,	// (0x0005fbcb) rs_clock_indi_pane_g1

0x7c5c,	// (0x00062af7) rs_clock_indi_pane_t1

0x7c6a,	// (0x00062b05) rs_indi_pane

0x7c72,	// (0x00062b0d) rs_indi_pane_g1

0x7c7b,	// (0x00062b16) rs_indi_pane_g2

0x79a6,	// (0x00062841) rs_indi_pane_g3

0x0002,

0xfed1,	// (0x0006ad6c) rs_indi_pane_g

0xf49d,	// (0x0006a338) bg_popup_preview_window_pane_cp03

0x7c84,	// (0x00062b1f) popup_fep_tooltip_window_t1

0xd08e,	// (0x00067f29) popup_note2_window_g2_ParamLimits

0xd08e,	// (0x00067f29) popup_note2_window_g2

0x0001,

0xfc71,	// (0x0006ab0c) popup_note2_window_g_ParamLimits

0xfc71,	// (0x0006ab0c) popup_note2_window_g

0x5eac,	// (0x00060d47) bg_popup_sub_pane_cp11_ParamLimits

0x5eb9,	// (0x00060d54) cell_ai3_links_pane_g1_ParamLimits

0x5ed0,	// (0x00060d6b) cell_ai3_links_pane_t1

0xf009,	// (0x00069ea4) set_text_pane_t1_copy1_ParamLimits

0xe176,	// (0x00069011) cell_graphic_popup_pane_cp2_ParamLimits

0xe176,	// (0x00069011) cell_graphic_popup_pane_cp2

0xf023,	// (0x00069ebe) cell_graphic_popup_pane_g1_cp2

0x8284,	// (0x0006311f) cell_graphic_popup_pane_g2_cp2

0x7c9a,	// (0x00062b35) cell_graphic_popup_pane_g3_cp2

0xf02b,	// (0x00069ec6) cell_graphic_popup_pane_t2_cp2

0x8295,	// (0x00063130) grid_highlight_pane_cp3_cp2

0x8669,	// (0x00063504) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x83b6,	// (0x00063251) main_tmo_pane_ParamLimits

0xd455,	// (0x000682f0) popup_tmo_big_image_note_window

0x7396,	// (0x00062231) cell_ai5_widget_list_pane

0xeb99,	// (0x00069a34) cell_ai5_widget_lrg_icon_pane

0xedc4,	// (0x00069c5f) tmo_note_info_pane_t1_ParamLimits

0xedd9,	// (0x00069c74) tmo_note_info_pane_t2_ParamLimits

0xedf0,	// (0x00069c8b) tmo_note_info_pane_t3_ParamLimits

0x7923,	// (0x000627be) tmo_note_info_pane_t4_ParamLimits

0x7935,	// (0x000627d0) tmo_note_info_pane_t5_ParamLimits

0xfebf,	// (0x0006ad5a) tmo_note_info_pane_t_ParamLimits

0x7a53,	// (0x000628ee) settings_container_pane_ParamLimits

0xf001,	// (0x00069e9c) indicator_popup_pane_cp5

0xf001,	// (0x00069e9c) indicator_popup_pane_cp6

0x4254,	// (0x0005f0ef) list_set_graphic_pane_copy1_ParamLimits

0x7f94,	// (0x00062e2f) bg_popup_window_pane_cp23

0x7cb0,	// (0x00062b4b) popup_tmo_big_image_note_window_g1

0x7cb9,	// (0x00062b54) popup_tmo_big_image_note_window_t1

0x7cc9,	// (0x00062b64) popup_tmo_big_image_note_window_t2

0x7cd9,	// (0x00062b74) popup_tmo_big_image_note_window_t3

0x0002,

0xfed8,	// (0x0006ad73) popup_tmo_big_image_note_window_t

0x4d30,	// (0x0005fbcb) cell_ai5_widget_lrg_icon_pane_g1

0x7ce9,	// (0x00062b84) cell_ai5_widget_lrg_icon_pane_t1

0xf039,	// (0x00069ed4) cell_ai5_widget_list_row_pane_ParamLimits

0xf039,	// (0x00069ed4) cell_ai5_widget_list_row_pane

0x7d0e,	// (0x00062ba9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7d0e,	// (0x00062ba9) cell_ai5_widget_list_row_pane_g1

0xf050,	// (0x00069eeb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf050,	// (0x00069eeb) cell_ai5_widget_list_row_pane_t1

0x7d46,	// (0x00062be1) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7d46,	// (0x00062be1) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfedf,	// (0x0006ad7a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedf,	// (0x0006ad7a) cell_ai5_widget_list_row_pane_t

0xdd92,	// (0x00068c2d) main_fep_vtchi_ss_pane

0x7d8a,	// (0x00062c25) popup_fep_char_pre_window

0x7d92,	// (0x00062c2d) popup_fep_ituss_window

0x7db3,	// (0x00062c4e) popup_fep_vkbss_window

0x7dd2,	// (0x00062c6d) grid_vkbss_keypad_pane_ParamLimits

0x7dd2,	// (0x00062c6d) grid_vkbss_keypad_pane

0x7de2,	// (0x00062c7d) ituss_keypad_pane

0x1c5b,	// (0x0005caf6) aid_vkbss_key_offset_ParamLimits

0x1c5b,	// (0x0005caf6) aid_vkbss_key_offset

0x1c67,	// (0x0005cb02) cell_vkbss_key_pane_ParamLimits

0x1c67,	// (0x0005cb02) cell_vkbss_key_pane

0x23cf,	// (0x0005d26a) bg_cell_vkbss_key_g1_ParamLimits

0x23cf,	// (0x0005d26a) bg_cell_vkbss_key_g1

0x7df1,	// (0x00062c8c) cell_vkbss_key_3p_pane_ParamLimits

0x7df1,	// (0x00062c8c) cell_vkbss_key_3p_pane

0x7e0b,	// (0x00062ca6) cell_vkbss_key_g1_ParamLimits

0x7e0b,	// (0x00062ca6) cell_vkbss_key_g1

0x7e25,	// (0x00062cc0) cell_vkbss_key_t1_ParamLimits

0x7e25,	// (0x00062cc0) cell_vkbss_key_t1

0x1c7d,	// (0x0005cb18) cell_ituss_key_pane_ParamLimits

0x1c7d,	// (0x0005cb18) cell_ituss_key_pane

0x7e50,	// (0x00062ceb) bg_cell_ituss_key_g1_ParamLimits

0x7e50,	// (0x00062ceb) bg_cell_ituss_key_g1

0x7e5c,	// (0x00062cf7) cell_ituss_key_pane_g1_ParamLimits

0x7e5c,	// (0x00062cf7) cell_ituss_key_pane_g1

0x1c8e,	// (0x0005cb29) cell_ituss_key_pane_g2_ParamLimits

0x1c8e,	// (0x0005cb29) cell_ituss_key_pane_g2

0x0002,

0xfee6,	// (0x0006ad81) cell_ituss_key_pane_g_ParamLimits

0xfee6,	// (0x0006ad81) cell_ituss_key_pane_g

0x1cba,	// (0x0005cb55) cell_ituss_key_t1_ParamLimits

0x1cba,	// (0x0005cb55) cell_ituss_key_t1

0x1cf4,	// (0x0005cb8f) cell_ituss_key_t2_ParamLimits

0x1cf4,	// (0x0005cb8f) cell_ituss_key_t2

0x1d25,	// (0x0005cbc0) cell_ituss_key_t3_ParamLimits

0x1d25,	// (0x0005cbc0) cell_ituss_key_t3

0x1cf4,	// (0x0005cb8f) cell_ituss_key_t4_ParamLimits

0x1cf4,	// (0x0005cb8f) cell_ituss_key_t4

0x0004,

0xfeed,	// (0x0006ad88) cell_ituss_key_t_ParamLimits

0xfeed,	// (0x0006ad88) cell_ituss_key_t

0x7e88,	// (0x00062d23) cell_vkbss_key_3p_pane_g1

0x7e90,	// (0x00062d2b) cell_vkbss_key_3p_pane_g2

0x7e98,	// (0x00062d33) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0006ad93) cell_vkbss_key_3p_pane_g

0xdd92,	// (0x00068c2d) bg_popup_fep_char_preview_window_cp02

0x1d68,	// (0x0005cc03) popup_fep_char_pre_window_t1

0xeb79,	// (0x00069a14) main_ai5_sk_pane

0x79af,	// (0x0006284a) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x79bb,	// (0x00062856) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x53f5,	// (0x00060290) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x79d0,	// (0x0006286b) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeca,	// (0x0006ad65) cell_contacts_ai5_widget_pane_g_ParamLimits

0x79dc,	// (0x00062877) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x83b6,	// (0x00063251) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf081,	// (0x00069f1c) main_ai5_sk_pane_g1

0xc24b,	// (0x000670e6) popup_query_code_window_g1

0x7da8,	// (0x00062c43) popup_fep_vkb_icf_pane

0x7dbc,	// (0x00062c57) popup_fep_vtchi_icf_pane

0x7ea9,	// (0x00062d44) bg_icf_pane

0x7eb5,	// (0x00062d50) list_vkb_icf_pane

0x7ec4,	// (0x00062d5f) bg_icf_pane_cp01

0x7ed7,	// (0x00062d72) vtchi_icf_list_pane

0x7ee7,	// (0x00062d82) list_vkb_icf_pane_t1_ParamLimits

0x7ee7,	// (0x00062d82) list_vkb_icf_pane_t1

0x7efd,	// (0x00062d98) vtchi_icf_list_pane_t1_ParamLimits

0x7efd,	// (0x00062d98) vtchi_icf_list_pane_t1

0x7d92,	// (0x00062c2d) popup_fep_ituss_window_ParamLimits

0x7dbc,	// (0x00062c57) popup_fep_vtchi_icf_pane_ParamLimits

0x7de2,	// (0x00062c7d) ituss_keypad_pane_ParamLimits

0x1c4f,	// (0x0005caea) ituss_sks_pane

0x7ea9,	// (0x00062d44) bg_icf_pane_ParamLimits

0x7d6e,	// (0x00062c09) icf_edit_indi_pane_ParamLimits

0x7d6e,	// (0x00062c09) icf_edit_indi_pane

0x7eb5,	// (0x00062d50) list_vkb_icf_pane_ParamLimits

0x7ec4,	// (0x00062d5f) bg_icf_pane_cp01_ParamLimits

0x7d7d,	// (0x00062c18) icf_edit_indi_pane_cp01_ParamLimits

0x7d7d,	// (0x00062c18) icf_edit_indi_pane_cp01

0x7edf,	// (0x00062d7a) vtchi_query_pane

0x4fa0,	// (0x0005fe3b) icf_edit_indi_pane_g1_ParamLimits

0x4fa0,	// (0x0005fe3b) icf_edit_indi_pane_g1

0x7f6f,	// (0x00062e0a) icf_edit_indi_pane_g2_ParamLimits

0x7f6f,	// (0x00062e0a) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0006adab) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0006adab) icf_edit_indi_pane_g

0x7f7e,	// (0x00062e19) icf_edit_indi_pane_t1

0x7f18,	// (0x00062db3) bg_input_focus_pane_cp042

0x82f8,	// (0x00063193) vtchi_button_pane

0x7f21,	// (0x00062dbc) vtchi_query_pane_t1

0x7f2f,	// (0x00062dca) vtchi_query_pane_t2

0x7f3d,	// (0x00062dd8) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0006ad9a) vtchi_query_pane_t

0xdd92,	// (0x00068c2d) bg_button_pane_cp13

0x7f4b,	// (0x00062de6) vtchi_button_pane_g1

0x1d77,	// (0x0005cc12) ituss_sks_pane_g1

0x1d82,	// (0x0005cc1d) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0006ada1) ituss_sks_pane_g

0x7f53,	// (0x00062dee) ituss_sks_pane_t1

0x7f61,	// (0x00062dfc) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0006ada6) ituss_sks_pane_t

0x4796,	// (0x0005f631) indicator_nsta_pane_cp_g1

0x479f,	// (0x0005f63a) indicator_nsta_pane_cp_g2

0x47a7,	// (0x0005f642) indicator_nsta_pane_cp_g3

0x47af,	// (0x0005f64a) indicator_nsta_pane_cp_g4

0x47b7,	// (0x0005f652) indicator_nsta_pane_cp_g5

0x47b7,	// (0x0005f652) indicator_nsta_pane_cp_g6

0x0005,

0xfaaf,	// (0x0006a94a) indicator_nsta_pane_cp_g

0xe951,	// (0x000697ec) cell_graphic2_pane_t2_ParamLimits

0xe951,	// (0x000697ec) cell_graphic2_pane_t2

0x0001,

0xfdc1,	// (0x0006ac5c) cell_graphic2_pane_t_ParamLimits

0xfdc1,	// (0x0006ac5c) cell_graphic2_pane_t

0xe98b,	// (0x00069826) cell_graphic2_control_pane_t1

0xa3e6,	// (0x00065281) signal_pane_g3_ParamLimits

0xa3e6,	// (0x00065281) signal_pane_g3

0xa3fa,	// (0x00065295) signal_pane_g4_ParamLimits

0xa3fa,	// (0x00065295) signal_pane_g4

0x7d58,	// (0x00062bf3) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d58,	// (0x00062bf3) cell_ai5_widget_list_row_pane_t3

0x7e76,	// (0x00062d11) cell_ituss_key_pane_t1_ParamLimits

0x7e76,	// (0x00062d11) cell_ituss_key_pane_t1

0x267d,	// (0x0005d518) form_field_data_wide_pane_vc_t2_ParamLimits

0x267d,	// (0x0005d518) form_field_data_wide_pane_vc_t2

0x2691,	// (0x0005d52c) form_field_data_wide_pane_vc_t3_ParamLimits

0x2691,	// (0x0005d52c) form_field_data_wide_pane_vc_t3

0x0002,

0xf809,	// (0x0006a6a4) form_field_data_wide_pane_vc_t_ParamLimits

0xf809,	// (0x0006a6a4) form_field_data_wide_pane_vc_t

0x445e,	// (0x0005f2f9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x445e,	// (0x0005f2f9) form_field_slider_wide_pane_vc_t3

0x453c,	// (0x0005f3d7) form_field_popup_wide_pane_vc_t2_ParamLimits

0x453c,	// (0x0005f3d7) form_field_popup_wide_pane_vc_t2

0x4553,	// (0x0005f3ee) form_field_popup_wide_pane_vc_t3_ParamLimits

0x4553,	// (0x0005f3ee) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9e,	// (0x0006a939) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9e,	// (0x0006a939) form_field_popup_wide_pane_vc_t

0xb970,	// (0x0006680b) aid_fshwr2_btn_pane_ParamLimits

0xb982,	// (0x0006681d) aid_fshwr2_syb_pane_ParamLimits

0xb994,	// (0x0006682f) aid_fshwr2_txt_pane_ParamLimits

0x12bb,	// (0x0005c156) fshwr2_bg_pane_ParamLimits

0xb9a3,	// (0x0006683e) fshwr2_func_candi_pane_ParamLimits

0xb9c2,	// (0x0006685d) fshwr2_hwr_syb_pane_ParamLimits

0xb9dd,	// (0x00066878) fshwr2_icf_pane_ParamLimits

0x3e13,	// (0x0005ecae) list_double_graphic_pane_vc_g4_ParamLimits

0x3e13,	// (0x0005ecae) list_double_graphic_pane_vc_g4

0x1cae,	// (0x0005cb49) cell_ituss_key_pane_g3_ParamLimits

0x1cae,	// (0x0005cb49) cell_ituss_key_pane_g3

0x1d56,	// (0x0005cbf1) cell_ituss_key_t5_ParamLimits

0x1d56,	// (0x0005cbf1) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_av_nhd4_lsc_tch_Large

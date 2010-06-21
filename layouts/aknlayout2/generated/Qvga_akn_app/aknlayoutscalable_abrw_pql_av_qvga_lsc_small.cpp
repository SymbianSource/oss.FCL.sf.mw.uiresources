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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x00021895 };

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
0xd0d2,	// (0x0002e967) Screen

0xd0dc,	// (0x0002e971) application_window_ParamLimits

0xd0dc,	// (0x0002e971) application_window

0x0dd8,	// (0x0002266d) screen_g1

0xd0ea,	// (0x0002e97f) area_bottom_pane_ParamLimits

0xd0ea,	// (0x0002e97f) area_bottom_pane

0x0de2,	// (0x00022677) area_top_pane_ParamLimits

0x0de2,	// (0x00022677) area_top_pane

0x5ac6,	// (0x0002735b) main_pane_ParamLimits

0x5ac6,	// (0x0002735b) main_pane

0x0e5a,	// (0x000226ef) misc_graphics

0xe121,	// (0x0002f9b6) battery_pane_ParamLimits

0xe121,	// (0x0002f9b6) battery_pane

0x2921,	// (0x000241b6) bg_status_flat_pane_g8

0x2929,	// (0x000241be) bg_status_flat_pane_g9

0x203a,	// (0x000238cf) context_pane_ParamLimits

0x203a,	// (0x000238cf) context_pane

0xe27b,	// (0x0002fb10) navi_pane_ParamLimits

0xe27b,	// (0x0002fb10) navi_pane

0xe2f0,	// (0x0002fb85) signal_pane_ParamLimits

0xe2f0,	// (0x0002fb85) signal_pane

0x0008,

0xf86d,	// (0x00031102) bg_status_flat_pane_g

0xe37c,	// (0x0002fc11) status_pane_g1_ParamLimits

0xe37c,	// (0x0002fc11) status_pane_g1

0xe388,	// (0x0002fc1d) status_pane_g2_ParamLimits

0xe388,	// (0x0002fc1d) status_pane_g2

0x20a0,	// (0x00023935) status_pane_g3_ParamLimits

0x20a0,	// (0x00023935) status_pane_g3

0x0004,

0xf7a0,	// (0x00031035) status_pane_g_ParamLimits

0xf7a0,	// (0x00031035) status_pane_g

0xe394,	// (0x0002fc29) title_pane_ParamLimits

0xe394,	// (0x0002fc29) title_pane

0xe3ef,	// (0x0002fc84) uni_indicator_pane_ParamLimits

0xe3ef,	// (0x0002fc84) uni_indicator_pane

0x1f91,	// (0x00023826) bg_list_pane_ParamLimits

0x1f91,	// (0x00023826) bg_list_pane

0xd8be,	// (0x0002f153) find_pane

0xc379,	// (0x0002dc0e) listscroll_app_pane_ParamLimits

0xc379,	// (0x0002dc0e) listscroll_app_pane

0x1fb1,	// (0x00023846) listscroll_form_pane

0xd8c6,	// (0x0002f15b) listscroll_gen_pane_ParamLimits

0xd8c6,	// (0x0002f15b) listscroll_gen_pane

0x691f,	// (0x000281b4) listscroll_set_pane

0xc389,	// (0x0002dc1e) main_idle_act_pane

0x1dfc,	// (0x00023691) main_idle_trad_pane

0x1dfc,	// (0x00023691) main_list_empty_pane

0x15de,	// (0x00022e73) main_midp_pane

0x1fcb,	// (0x00023860) main_pane_g1_ParamLimits

0x1fcb,	// (0x00023860) main_pane_g1

0xc39c,	// (0x0002dc31) popup_ai_message_window_ParamLimits

0xc39c,	// (0x0002dc31) popup_ai_message_window

0xc420,	// (0x0002dcb5) popup_fep_china_uni_window_ParamLimits

0xc420,	// (0x0002dcb5) popup_fep_china_uni_window

0x6a09,	// (0x0002829e) popup_fep_japan_candidate_window_ParamLimits

0x6a09,	// (0x0002829e) popup_fep_japan_candidate_window

0x6a27,	// (0x000282bc) popup_fep_japan_predictive_window_ParamLimits

0x6a27,	// (0x000282bc) popup_fep_japan_predictive_window

0xc45e,	// (0x0002dcf3) popup_find_window

0xc477,	// (0x0002dd0c) popup_grid_graphic_window_ParamLimits

0xc477,	// (0x0002dd0c) popup_grid_graphic_window

0x6a7e,	// (0x00028313) popup_large_graphic_colour_window

0xc4f3,	// (0x0002dd88) popup_menu_window_ParamLimits

0xc4f3,	// (0x0002dd88) popup_menu_window

0xc651,	// (0x0002dee6) popup_note_image_window

0xc619,	// (0x0002deae) popup_note_wait_window_ParamLimits

0xc619,	// (0x0002deae) popup_note_wait_window

0xc667,	// (0x0002defc) popup_note_window_ParamLimits

0xc667,	// (0x0002defc) popup_note_window

0xc6fb,	// (0x0002df90) popup_query_code_window_ParamLimits

0xc6fb,	// (0x0002df90) popup_query_code_window

0x6c3b,	// (0x000284d0) popup_query_data_code_window_ParamLimits

0x6c3b,	// (0x000284d0) popup_query_data_code_window

0xc733,	// (0x0002dfc8) popup_query_data_window_ParamLimits

0xc733,	// (0x0002dfc8) popup_query_data_window

0xc7a7,	// (0x0002e03c) popup_query_sat_info_window_ParamLimits

0xc7a7,	// (0x0002e03c) popup_query_sat_info_window

0xc834,	// (0x0002e0c9) popup_snote_single_graphic_window_ParamLimits

0xc834,	// (0x0002e0c9) popup_snote_single_graphic_window

0xc834,	// (0x0002e0c9) popup_snote_single_text_window_ParamLimits

0xc834,	// (0x0002e0c9) popup_snote_single_text_window

0x6caa,	// (0x0002853f) popup_sub_window_general

0x6dae,	// (0x00028643) popup_window_general_ParamLimits

0x6dae,	// (0x00028643) popup_window_general

0x1fd9,	// (0x0002386e) power_save_pane

0xc24a,	// (0x0002dadf) control_pane_g1_ParamLimits

0xc24a,	// (0x0002dadf) control_pane_g1

0x67a9,	// (0x0002803e) control_pane_g2_ParamLimits

0x67a9,	// (0x0002803e) control_pane_g2

0x1f83,	// (0x00023818) control_pane_g3_ParamLimits

0x1f83,	// (0x00023818) control_pane_g3

0x0007,

0xf788,	// (0x0003101d) control_pane_g_ParamLimits

0xf788,	// (0x0003101d) control_pane_g

0xc27f,	// (0x0002db14) control_pane_t1_ParamLimits

0xc27f,	// (0x0002db14) control_pane_t1

0xc2db,	// (0x0002db70) control_pane_t2_ParamLimits

0xc2db,	// (0x0002db70) control_pane_t2

0x0002,

0xf799,	// (0x0003102e) control_pane_t_ParamLimits

0xf799,	// (0x0003102e) control_pane_t

0x1f2b,	// (0x000237c0) navi_navi_volume_pane_cp1

0x1f33,	// (0x000237c8) status_small_icon_pane

0x1f3b,	// (0x000237d0) status_small_pane_g1_ParamLimits

0x1f3b,	// (0x000237d0) status_small_pane_g1

0xe00a,	// (0x0002f89f) status_small_pane_g2_ParamLimits

0xe00a,	// (0x0002f89f) status_small_pane_g2

0xe016,	// (0x0002f8ab) status_small_pane_g3_ParamLimits

0xe016,	// (0x0002f8ab) status_small_pane_g3

0xe022,	// (0x0002f8b7) status_small_pane_g4_ParamLimits

0xe022,	// (0x0002f8b7) status_small_pane_g4

0xe02e,	// (0x0002f8c3) status_small_pane_g5_ParamLimits

0xe02e,	// (0x0002f8c3) status_small_pane_g5

0x1f6f,	// (0x00023804) status_small_pane_g6_ParamLimits

0x1f6f,	// (0x00023804) status_small_pane_g6

0x0007,

0xf777,	// (0x0003100c) status_small_pane_g_ParamLimits

0xf777,	// (0x0003100c) status_small_pane_g

0xe05d,	// (0x0002f8f2) status_small_pane_t1

0xe077,	// (0x0002f90c) status_small_wait_pane_ParamLimits

0xe077,	// (0x0002f90c) status_small_wait_pane

0xde9c,	// (0x0002f731) aid_levels_signal_ParamLimits

0xde9c,	// (0x0002f731) aid_levels_signal

0xdeb0,	// (0x0002f745) signal_pane_g1_ParamLimits

0xdeb0,	// (0x0002f745) signal_pane_g1

0xdeca,	// (0x0002f75f) signal_pane_g2_ParamLimits

0xdeca,	// (0x0002f75f) signal_pane_g2

0x0003,

0xf708,	// (0x00030f9d) signal_pane_g_ParamLimits

0xf708,	// (0x00030f9d) signal_pane_g

0x19a1,	// (0x00023236) context_pane_g1

0xd153,	// (0x0002e9e8) title_pane_g1

0xd195,	// (0x0002ea2a) title_pane_t1

0x0e70,	// (0x00022705) title_pane_t2

0x0e96,	// (0x0002272b) title_pane_t3

0x0002,

0xf557,	// (0x00030dec) title_pane_t

0xe415,	// (0x0002fcaa) aid_levels_battery_ParamLimits

0xe415,	// (0x0002fcaa) aid_levels_battery

0xe42d,	// (0x0002fcc2) battery_pane_g1_ParamLimits

0xe42d,	// (0x0002fcc2) battery_pane_g1

0xe448,	// (0x0002fcdd) battery_pane_g2_ParamLimits

0xe448,	// (0x0002fcdd) battery_pane_g2

0x0001,

0xf7ab,	// (0x00031040) battery_pane_g_ParamLimits

0xf7ab,	// (0x00031040) battery_pane_g

0xe5ee,	// (0x0002fe83) uni_indicator_pane_g1

0xe604,	// (0x0002fe99) uni_indicator_pane_g2

0xe61a,	// (0x0002feaf) uni_indicator_pane_g3

0x0005,

0xf915,	// (0x000311aa) uni_indicator_pane_g

0x1504,	// (0x00022d99) navi_icon_pane_ParamLimits

0x1504,	// (0x00022d99) navi_icon_pane

0x0e5a,	// (0x000226ef) navi_midp_pane

0x0e5a,	// (0x000226ef) navi_navi_pane

0x1504,	// (0x00022d99) navi_text_pane_ParamLimits

0x1504,	// (0x00022d99) navi_text_pane

0x0dd8,	// (0x0002266d) status_small_wait_pane_g1

0x11ab,	// (0x00022a40) status_small_wait_pane_g2

0x0001,

0xf910,	// (0x000311a5) status_small_wait_pane_g

0xe594,	// (0x0002fe29) navi_navi_icon_text_pane

0xe59c,	// (0x0002fe31) navi_navi_pane_g1_ParamLimits

0xe59c,	// (0x0002fe31) navi_navi_pane_g1

0xe5ae,	// (0x0002fe43) navi_navi_pane_g2_ParamLimits

0xe5ae,	// (0x0002fe43) navi_navi_pane_g2

0x0001,

0xf8de,	// (0x00031173) navi_navi_pane_g_ParamLimits

0xf8de,	// (0x00031173) navi_navi_pane_g

0xe5c0,	// (0x0002fe55) navi_navi_tabs_pane

0xe594,	// (0x0002fe29) navi_navi_text_pane

0xe594,	// (0x0002fe29) navi_navi_volume_pane

0x2e67,	// (0x000246fc) navi_text_pane_t1

0x2e5b,	// (0x000246f0) navi_icon_pane_g1

0x2daf,	// (0x00024644) navi_navi_text_pane_t1

0x7443,	// (0x00028cd8) navi_navi_volume_pane_g1

0xca82,	// (0x0002e317) volume_small_pane

0xe4f0,	// (0x0002fd85) navi_navi_icon_text_pane_g1

0xe4f8,	// (0x0002fd8d) navi_navi_icon_text_pane_t1

0x2969,	// (0x000241fe) navi_tabs_2_long_pane

0x2969,	// (0x000241fe) navi_tabs_2_pane

0x2969,	// (0x000241fe) navi_tabs_3_long_pane

0x2969,	// (0x000241fe) navi_tabs_3_pane

0x2969,	// (0x000241fe) navi_tabs_4_pane

0xca62,	// (0x0002e2f7) tabs_2_active_pane_ParamLimits

0xca62,	// (0x0002e2f7) tabs_2_active_pane

0xca72,	// (0x0002e307) tabs_2_passive_pane_ParamLimits

0xca72,	// (0x0002e307) tabs_2_passive_pane

0xca30,	// (0x0002e2c5) tabs_3_active_pane_ParamLimits

0xca30,	// (0x0002e2c5) tabs_3_active_pane

0xca40,	// (0x0002e2d5) tabs_3_passive_pane_ParamLimits

0xca40,	// (0x0002e2d5) tabs_3_passive_pane

0xca51,	// (0x0002e2e6) tabs_3_passive_pane_cp_ParamLimits

0xca51,	// (0x0002e2e6) tabs_3_passive_pane_cp

0xc9ec,	// (0x0002e281) tabs_4_active_pane_ParamLimits

0xc9ec,	// (0x0002e281) tabs_4_active_pane

0xc9fd,	// (0x0002e292) tabs_4_passive_pane_ParamLimits

0xc9fd,	// (0x0002e292) tabs_4_passive_pane

0xca0e,	// (0x0002e2a3) tabs_4_passive_pane_cp_ParamLimits

0xca0e,	// (0x0002e2a3) tabs_4_passive_pane_cp

0xca1f,	// (0x0002e2b4) tabs_4_passive_pane_cp2_ParamLimits

0xca1f,	// (0x0002e2b4) tabs_4_passive_pane_cp2

0xc9cc,	// (0x0002e261) tabs_2_long_active_pane_ParamLimits

0xc9cc,	// (0x0002e261) tabs_2_long_active_pane

0xc9dc,	// (0x0002e271) tabs_2_long_passive_pane_ParamLimits

0xc9dc,	// (0x0002e271) tabs_2_long_passive_pane

0xc995,	// (0x0002e22a) tabs_3_long_active_pane_ParamLimits

0xc995,	// (0x0002e22a) tabs_3_long_active_pane

0xc9a8,	// (0x0002e23d) tabs_3_long_passive_pane_ParamLimits

0xc9a8,	// (0x0002e23d) tabs_3_long_passive_pane

0xc9b9,	// (0x0002e24e) tabs_3_long_passive_pane_cp_ParamLimits

0xc9b9,	// (0x0002e24e) tabs_3_long_passive_pane_cp

0x7270,	// (0x00028b05) volume_small_pane_g1

0x7279,	// (0x00028b0e) volume_small_pane_g2

0x7282,	// (0x00028b17) volume_small_pane_g3

0x728b,	// (0x00028b20) volume_small_pane_g4

0x7294,	// (0x00028b29) volume_small_pane_g5

0x729d,	// (0x00028b32) volume_small_pane_g6

0x72a6,	// (0x00028b3b) volume_small_pane_g7

0x72af,	// (0x00028b44) volume_small_pane_g8

0x72b8,	// (0x00028b4d) volume_small_pane_g9

0x72c1,	// (0x00028b56) volume_small_pane_g10

0x0009,

0xf8aa,	// (0x0003113f) volume_small_pane_g

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp2_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp2

0x0eb6,	// (0x0002274b) tabs_3_active_pane_g1

0xd222,	// (0x0002eab7) tabs_3_active_pane_t1

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp2_ParamLimits

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp2

0x0eb6,	// (0x0002274b) tabs_3_passive_pane_g1

0xd222,	// (0x0002eab7) tabs_3_passive_pane_t1

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp3_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp3

0x32f2,	// (0x00024b87) tabs_4_active_pane_g1

0xd238,	// (0x0002eacd) tabs_4_active_pane_t1

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp3_ParamLimits

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp3

0x32f2,	// (0x00024b87) tabs_4_1_passive_pane_g1

0xd238,	// (0x0002eacd) tabs_4_1_passive_pane_t1

0x15de,	// (0x00022e73) list_highlight_pane_cp2

0xe66f,	// (0x0002ff04) list_set_pane_ParamLimits

0xe66f,	// (0x0002ff04) list_set_pane

0xe6fd,	// (0x0002ff92) main_pane_set_t1_ParamLimits

0xe6fd,	// (0x0002ff92) main_pane_set_t1

0xe71d,	// (0x0002ffb2) main_pane_set_t2_ParamLimits

0xe71d,	// (0x0002ffb2) main_pane_set_t2

0xe731,	// (0x0002ffc6) main_pane_set_t3_ParamLimits

0xe731,	// (0x0002ffc6) main_pane_set_t3

0xe743,	// (0x0002ffd8) main_pane_set_t4_ParamLimits

0xe743,	// (0x0002ffd8) main_pane_set_t4

0x0003,

0xf97a,	// (0x0003120f) main_pane_set_t_ParamLimits

0xf97a,	// (0x0003120f) main_pane_set_t

0xe755,	// (0x0002ffea) setting_code_pane

0xe75d,	// (0x0002fff2) setting_slider_graphic_pane

0xe75d,	// (0x0002fff2) setting_slider_pane

0xe75d,	// (0x0002fff2) setting_text_pane

0xe75d,	// (0x0002fff2) setting_volume_pane

0xc1e3,	// (0x0002da78) volume_set_pane

0x0ebe,	// (0x00022753) bg_set_opt_pane_cp

0x5d8b,	// (0x00027620) setting_slider_pane_t1

0xc1eb,	// (0x0002da80) setting_slider_pane_t2

0xc204,	// (0x0002da99) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00030df3) setting_slider_pane_t

0x5dd1,	// (0x00027666) slider_set_pane

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp2

0x0ecc,	// (0x00022761) setting_slider_graphic_pane_g1

0xc21b,	// (0x0002dab0) setting_slider_graphic_pane_t1

0xc22a,	// (0x0002dabf) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00030dfa) setting_slider_graphic_pane_t

0xc239,	// (0x0002dace) slider_set_pane_cp

0x0e5a,	// (0x000226ef) input_focus_pane_cp1

0x32a3,	// (0x00024b38) list_set_text_pane

0x0dd8,	// (0x0002266d) setting_text_pane_g1

0x0e5a,	// (0x000226ef) input_focus_pane_cp2

0x0dd8,	// (0x0002266d) setting_code_pane_g1

0x0ed5,	// (0x0002276a) setting_code_pane_t1

0xd24e,	// (0x0002eae3) set_text_pane_t1_ParamLimits

0xd24e,	// (0x0002eae3) set_text_pane_t1

0x14b3,	// (0x00022d48) set_opt_bg_pane_g1

0x14bb,	// (0x00022d50) set_opt_bg_pane_g2

0xe62f,	// (0x0002fec4) set_opt_bg_pane_g3

0x14cb,	// (0x00022d60) set_opt_bg_pane_g4

0x14d3,	// (0x00022d68) set_opt_bg_pane_g5

0x14db,	// (0x00022d70) set_opt_bg_pane_g6

0xe637,	// (0x0002fecc) set_opt_bg_pane_g7

0xe63f,	// (0x0002fed4) set_opt_bg_pane_g8

0xe647,	// (0x0002fedc) set_opt_bg_pane_g9

0x0008,

0xf967,	// (0x000311fc) set_opt_bg_pane_g

0x3296,	// (0x00024b2b) slider_set_pane_g1

0x751e,	// (0x00028db3) slider_set_pane_g2

0x0006,

0xf958,	// (0x000311ed) slider_set_pane_g

0xca8b,	// (0x0002e320) volume_set_pane_g1

0xca93,	// (0x0002e328) volume_set_pane_g2

0xca9b,	// (0x0002e330) volume_set_pane_g3

0xcaa3,	// (0x0002e338) volume_set_pane_g4

0xcaab,	// (0x0002e340) volume_set_pane_g5

0xcab3,	// (0x0002e348) volume_set_pane_g6

0xcabb,	// (0x0002e350) volume_set_pane_g7

0xcac3,	// (0x0002e358) volume_set_pane_g8

0xcacb,	// (0x0002e360) volume_set_pane_g9

0xcad3,	// (0x0002e368) volume_set_pane_g10

0x0009,

0xf930,	// (0x000311c5) volume_set_pane_g

0xd268,	// (0x0002eafd) indicator_pane_ParamLimits

0xd268,	// (0x0002eafd) indicator_pane

0xd290,	// (0x0002eb25) main_idle_pane_g2_ParamLimits

0xd290,	// (0x0002eb25) main_idle_pane_g2

0xd2c0,	// (0x0002eb55) main_pane_idle_g1_ParamLimits

0xd2c0,	// (0x0002eb55) main_pane_idle_g1

0x0ee3,	// (0x00022778) popup_clock_digital_analogue_window_ParamLimits

0x0ee3,	// (0x00022778) popup_clock_digital_analogue_window

0xd2e5,	// (0x0002eb7a) soft_indicator_pane_ParamLimits

0xd2e5,	// (0x0002eb7a) soft_indicator_pane

0xd2ff,	// (0x0002eb94) wallpaper_pane_ParamLimits

0xd2ff,	// (0x0002eb94) wallpaper_pane

0x0dd8,	// (0x0002266d) wallpaper_pane_g1

0xd311,	// (0x0002eba6) indicator_pane_g1_ParamLimits

0xd311,	// (0x0002eba6) indicator_pane_g1

0x3408,	// (0x00024c9d) navi_navi_icon_text_pane_srt_g1

0x0f11,	// (0x000227a6) soft_indicator_pane_t1

0x0f2b,	// (0x000227c0) aid_ps_area_pane

0xd32a,	// (0x0002ebbf) aid_ps_clock_pane

0x0f3c,	// (0x000227d1) aid_ps_indicator_pane

0x0f48,	// (0x000227dd) indicator_ps_pane_ParamLimits

0x0f48,	// (0x000227dd) indicator_ps_pane

0x0f57,	// (0x000227ec) power_save_pane_g1_ParamLimits

0x0f57,	// (0x000227ec) power_save_pane_g1

0x0f63,	// (0x000227f8) power_save_pane_g2_ParamLimits

0x0f63,	// (0x000227f8) power_save_pane_g2

0x59d3,	// (0x00027268) aid_navinavi_width_pane

0x0f2b,	// (0x000227c0) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00030dff) power_save_pane_g_ParamLimits

0xf56a,	// (0x00030dff) power_save_pane_g

0x0f71,	// (0x00022806) power_save_pane_t1_ParamLimits

0x0f71,	// (0x00022806) power_save_pane_t1

0xd32a,	// (0x0002ebbf) aid_ps_clock_pane_ParamLimits

0x0f3c,	// (0x000227d1) aid_ps_indicator_pane_ParamLimits

0x0f83,	// (0x00022818) power_save_pane_t4_ParamLimits

0x0f83,	// (0x00022818) power_save_pane_t4

0x0001,

0xf56f,	// (0x00030e04) power_save_pane_t_ParamLimits

0xf56f,	// (0x00030e04) power_save_pane_t

0x0fad,	// (0x00022842) power_save_t3_ParamLimits

0x0fad,	// (0x00022842) power_save_t3

0x0f98,	// (0x0002282d) power_save_t2_ParamLimits

0x0f98,	// (0x0002282d) power_save_t2

0x0fc2,	// (0x00022857) indicator_ps_pane_g1

0xd336,	// (0x0002ebcb) ai_gene_pane_ParamLimits

0xd336,	// (0x0002ebcb) ai_gene_pane

0xdb2c,	// (0x0002f3c1) ai_links_pane_ParamLimits

0xdb2c,	// (0x0002f3c1) ai_links_pane

0xdb3e,	// (0x0002f3d3) indicator_pane_cp1_ParamLimits

0xdb3e,	// (0x0002f3d3) indicator_pane_cp1

0xdb4d,	// (0x0002f3e2) main_pane_idle_g1_cp_ParamLimits

0xdb4d,	// (0x0002f3e2) main_pane_idle_g1_cp

0x0fcb,	// (0x00022860) popup_ai_links_title_window

0xdb65,	// (0x0002f3fa) soft_indicator_pane_cp1_ParamLimits

0xdb65,	// (0x0002f3fa) soft_indicator_pane_cp1

0x30ec,	// (0x00024981) ai_links_pane_g1

0x30f5,	// (0x0002498a) grid_ai_links_pane

0xe5e5,	// (0x0002fe7a) ai_gene_pane_1

0x30da,	// (0x0002496f) ai_gene_pane_2

0x30e3,	// (0x00024978) list_highlight_pane_cp4

0xe5c9,	// (0x0002fe5e) cell_ai_link_pane_ParamLimits

0xe5c9,	// (0x0002fe5e) cell_ai_link_pane

0x30d2,	// (0x00024967) cell_ai_link_pane_g1

0x11ab,	// (0x00022a40) cell_ai_link_pane_g2

0x0001,

0xf90b,	// (0x000311a0) cell_ai_link_pane_g

0x0e5a,	// (0x000226ef) grid_highlight_cp2

0x0e5a,	// (0x000226ef) bg_popup_sub_pane_cp1

0x0fe2,	// (0x00022877) popup_ai_links_title_window_t1

0x3024,	// (0x000248b9) ai_gene_pane_1_g1_ParamLimits

0x3024,	// (0x000248b9) ai_gene_pane_1_g1

0x3030,	// (0x000248c5) ai_gene_pane_1_g2_ParamLimits

0x3030,	// (0x000248c5) ai_gene_pane_1_g2

0x0001,

0xf901,	// (0x00031196) ai_gene_pane_1_g_ParamLimits

0xf901,	// (0x00031196) ai_gene_pane_1_g

0x303d,	// (0x000248d2) ai_gene_pane_1_t1_ParamLimits

0x303d,	// (0x000248d2) ai_gene_pane_1_t1

0x3071,	// (0x00024906) grid_ai_soft_ind_pane

0x300f,	// (0x000248a4) ai_gene_pane_2_t1_ParamLimits

0x300f,	// (0x000248a4) ai_gene_pane_2_t1

0xdb79,	// (0x0002f40e) main_pane_empty_t1_ParamLimits

0xdb79,	// (0x0002f40e) main_pane_empty_t1

0xdb96,	// (0x0002f42b) main_pane_empty_t2_ParamLimits

0xdb96,	// (0x0002f42b) main_pane_empty_t2

0xdbae,	// (0x0002f443) main_pane_empty_t3_ParamLimits

0xdbae,	// (0x0002f443) main_pane_empty_t3

0xdbc1,	// (0x0002f456) main_pane_empty_t4_ParamLimits

0xdbc1,	// (0x0002f456) main_pane_empty_t4

0xdbd4,	// (0x0002f469) main_pane_empty_t5_ParamLimits

0xdbd4,	// (0x0002f469) main_pane_empty_t5

0x0004,

0xf574,	// (0x00030e09) main_pane_empty_t_ParamLimits

0xf574,	// (0x00030e09) main_pane_empty_t

0x1504,	// (0x00022d99) bg_popup_window_pane_ParamLimits

0x1504,	// (0x00022d99) bg_popup_window_pane

0x2dbe,	// (0x00024653) find_popup_pane_cp2_ParamLimits

0x2dbe,	// (0x00024653) find_popup_pane_cp2

0x2dca,	// (0x0002465f) heading_pane_ParamLimits

0x2dca,	// (0x0002465f) heading_pane

0x0e5a,	// (0x000226ef) bg_popup_sub_pane

0xe515,	// (0x0002fdaa) bg_popup_window_pane_g1_ParamLimits

0xe515,	// (0x0002fdaa) bg_popup_window_pane_g1

0xe524,	// (0x0002fdb9) bg_popup_window_pane_g2_ParamLimits

0xe524,	// (0x0002fdb9) bg_popup_window_pane_g2

0xe530,	// (0x0002fdc5) bg_popup_window_pane_g3_ParamLimits

0xe530,	// (0x0002fdc5) bg_popup_window_pane_g3

0xe53c,	// (0x0002fdd1) bg_popup_window_pane_g4_ParamLimits

0xe53c,	// (0x0002fdd1) bg_popup_window_pane_g4

0xe54b,	// (0x0002fde0) bg_popup_window_pane_g5_ParamLimits

0xe54b,	// (0x0002fde0) bg_popup_window_pane_g5

0xe55b,	// (0x0002fdf0) bg_popup_window_pane_g6_ParamLimits

0xe55b,	// (0x0002fdf0) bg_popup_window_pane_g6

0xe567,	// (0x0002fdfc) bg_popup_window_pane_g7_ParamLimits

0xe567,	// (0x0002fdfc) bg_popup_window_pane_g7

0xe576,	// (0x0002fe0b) bg_popup_window_pane_g8_ParamLimits

0xe576,	// (0x0002fe0b) bg_popup_window_pane_g8

0xe585,	// (0x0002fe1a) bg_popup_window_pane_g9_ParamLimits

0xe585,	// (0x0002fe1a) bg_popup_window_pane_g9

0x2da3,	// (0x00024638) bg_popup_window_pane_g10_ParamLimits

0x2da3,	// (0x00024638) bg_popup_window_pane_g10

0x0009,

0xf8c9,	// (0x0003115e) bg_popup_window_pane_g_ParamLimits

0xf8c9,	// (0x0003115e) bg_popup_window_pane_g

0x2d5a,	// (0x000245ef) bg_popup_heading_pane_ParamLimits

0x2d5a,	// (0x000245ef) bg_popup_heading_pane

0x7810,	// (0x000290a5) tabs_4_passive_pane_cp_srt_ParamLimits

0x7810,	// (0x000290a5) tabs_4_passive_pane_cp_srt

0x7822,	// (0x000290b7) tabs_4_passive_pane_srt_ParamLimits

0x2d6e,	// (0x00024603) heading_pane_g2

0x7822,	// (0x000290b7) tabs_4_passive_pane_srt

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp3_srt

0x2d76,	// (0x0002460b) heading_pane_t1_ParamLimits

0x2d76,	// (0x0002460b) heading_pane_t1

0x2d8d,	// (0x00024622) heading_pane_t2_ParamLimits

0x2d8d,	// (0x00024622) heading_pane_t2

0x0001,

0xf8c4,	// (0x00031159) heading_pane_t_ParamLimits

0xf8c4,	// (0x00031159) heading_pane_t

0x28e9,	// (0x0002417e) bg_popup_heading_pane_g1

0x297a,	// (0x0002420f) bg_popup_heading_pane_g2

0x2982,	// (0x00024217) bg_popup_heading_pane_g3

0x298a,	// (0x0002421f) bg_popup_heading_pane_g4

0x2992,	// (0x00024227) bg_popup_heading_pane_g5

0x299a,	// (0x0002422f) bg_popup_heading_pane_g6

0x29a2,	// (0x00024237) bg_popup_heading_pane_g7

0x29aa,	// (0x0002423f) bg_popup_heading_pane_g8

0x29b2,	// (0x00024247) bg_popup_heading_pane_g9

0x0008,

0xf880,	// (0x00031115) bg_popup_heading_pane_g

0x2188,	// (0x00023a1d) bg_popup_sub_pane_g1

0x2190,	// (0x00023a25) bg_popup_sub_pane_g2

0x2198,	// (0x00023a2d) bg_popup_sub_pane_g3

0x21a0,	// (0x00023a35) bg_popup_sub_pane_g4

0x21a8,	// (0x00023a3d) bg_popup_sub_pane_g5

0x21b0,	// (0x00023a45) bg_popup_sub_pane_g6

0x21b8,	// (0x00023a4d) bg_popup_sub_pane_g7

0x21c0,	// (0x00023a55) bg_popup_sub_pane_g8

0x21c8,	// (0x00023a5d) bg_popup_sub_pane_g9

0x0008,

0xf85a,	// (0x000310ef) bg_popup_sub_pane_g

0x0ea8,	// (0x0002273d) bg_popup_window_pane_cp5_ParamLimits

0x0ea8,	// (0x0002273d) bg_popup_window_pane_cp5

0x0fff,	// (0x00022894) popup_note_window_g1_ParamLimits

0x0fff,	// (0x00022894) popup_note_window_g1

0x100b,	// (0x000228a0) popup_note_window_t1_ParamLimits

0x100b,	// (0x000228a0) popup_note_window_t1

0x1021,	// (0x000228b6) popup_note_window_t2_ParamLimits

0x1021,	// (0x000228b6) popup_note_window_t2

0x1037,	// (0x000228cc) popup_note_window_t3_ParamLimits

0x1037,	// (0x000228cc) popup_note_window_t3

0x104d,	// (0x000228e2) popup_note_window_t4_ParamLimits

0x104d,	// (0x000228e2) popup_note_window_t4

0x1075,	// (0x0002290a) popup_note_window_t5_ParamLimits

0x1075,	// (0x0002290a) popup_note_window_t5

0x0004,

0xf57f,	// (0x00030e14) popup_note_window_t_ParamLimits

0xf57f,	// (0x00030e14) popup_note_window_t

0x10bf,	// (0x00022954) bg_popup_window_pane_cp6_ParamLimits

0x10bf,	// (0x00022954) bg_popup_window_pane_cp6

0x2865,	// (0x000240fa) popup_note_image_window_g1_ParamLimits

0x2865,	// (0x000240fa) popup_note_image_window_g1

0x2871,	// (0x00024106) popup_note_image_window_g2_ParamLimits

0x2871,	// (0x00024106) popup_note_image_window_g2

0x0001,

0xf84e,	// (0x000310e3) popup_note_image_window_g_ParamLimits

0xf84e,	// (0x000310e3) popup_note_image_window_g

0x288a,	// (0x0002411f) popup_note_image_window_t1_ParamLimits

0x288a,	// (0x0002411f) popup_note_image_window_t1

0x28a3,	// (0x00024138) popup_note_image_window_t2_ParamLimits

0x28a3,	// (0x00024138) popup_note_image_window_t2

0x28bc,	// (0x00024151) popup_note_image_window_t3_ParamLimits

0x28bc,	// (0x00024151) popup_note_image_window_t3

0x0002,

0xf853,	// (0x000310e8) popup_note_image_window_t_ParamLimits

0xf853,	// (0x000310e8) popup_note_image_window_t

0x2750,	// (0x00023fe5) bg_popup_window_pane_cp7_ParamLimits

0x2750,	// (0x00023fe5) bg_popup_window_pane_cp7

0x2780,	// (0x00024015) popup_note_wait_window_g1_ParamLimits

0x2780,	// (0x00024015) popup_note_wait_window_g1

0x278c,	// (0x00024021) popup_note_wait_window_g2_ParamLimits

0x278c,	// (0x00024021) popup_note_wait_window_g2

0x0002,

0xf83c,	// (0x000310d1) popup_note_wait_window_g_ParamLimits

0xf83c,	// (0x000310d1) popup_note_wait_window_g

0x27a4,	// (0x00024039) popup_note_wait_window_t1_ParamLimits

0x27a4,	// (0x00024039) popup_note_wait_window_t1

0x27cb,	// (0x00024060) popup_note_wait_window_t2_ParamLimits

0x27cb,	// (0x00024060) popup_note_wait_window_t2

0x27e8,	// (0x0002407d) popup_note_wait_window_t3_ParamLimits

0x27e8,	// (0x0002407d) popup_note_wait_window_t3

0x27fb,	// (0x00024090) popup_note_wait_window_t4_ParamLimits

0x27fb,	// (0x00024090) popup_note_wait_window_t4

0x0004,

0xf843,	// (0x000310d8) popup_note_wait_window_t_ParamLimits

0xf843,	// (0x000310d8) popup_note_wait_window_t

0x2820,	// (0x000240b5) wait_bar_pane_ParamLimits

0x2820,	// (0x000240b5) wait_bar_pane

0x0e5a,	// (0x000226ef) wait_anim_pane

0x0e5a,	// (0x000226ef) wait_border_pane

0x0dd8,	// (0x0002266d) wait_anim_pane_g1

0x0dd8,	// (0x0002266d) wait_anim_pane_g2

0x0001,

0xf703,	// (0x00030f98) wait_anim_pane_g

0x2700,	// (0x00023f95) wait_border_pane_g1

0x2709,	// (0x00023f9e) wait_border_pane_g2

0x2712,	// (0x00023fa7) wait_border_pane_g3

0x0002,

0xf835,	// (0x000310ca) wait_border_pane_g

0x2570,	// (0x00023e05) bg_popup_window_pane_cp16_ParamLimits

0x2570,	// (0x00023e05) bg_popup_window_pane_cp16

0x2670,	// (0x00023f05) indicator_popup_pane_cp4_ParamLimits

0x2670,	// (0x00023f05) indicator_popup_pane_cp4

0x2684,	// (0x00023f19) popup_query_data_window_t1_ParamLimits

0x2684,	// (0x00023f19) popup_query_data_window_t1

0x2696,	// (0x00023f2b) popup_query_data_window_t2_ParamLimits

0x2696,	// (0x00023f2b) popup_query_data_window_t2

0x26af,	// (0x00023f44) popup_query_data_window_t3_ParamLimits

0x26af,	// (0x00023f44) popup_query_data_window_t3

0x0002,

0xf82e,	// (0x000310c3) popup_query_data_window_t_ParamLimits

0xf82e,	// (0x000310c3) popup_query_data_window_t

0x26c9,	// (0x00023f5e) query_popup_data_pane_ParamLimits

0x26c9,	// (0x00023f5e) query_popup_data_pane

0x26dd,	// (0x00023f72) query_popup_data_pane_cp1_ParamLimits

0x26dd,	// (0x00023f72) query_popup_data_pane_cp1

0x2570,	// (0x00023e05) bg_popup_window_pane_cp10_ParamLimits

0x2570,	// (0x00023e05) bg_popup_window_pane_cp10

0x25a2,	// (0x00023e37) indicator_popup_pane_ParamLimits

0x25a2,	// (0x00023e37) indicator_popup_pane

0x25c4,	// (0x00023e59) popup_query_code_window_t1_ParamLimits

0x25c4,	// (0x00023e59) popup_query_code_window_t1

0x25de,	// (0x00023e73) popup_query_code_window_t2_ParamLimits

0x25de,	// (0x00023e73) popup_query_code_window_t2

0x2627,	// (0x00023ebc) popup_query_code_window_t3_ParamLimits

0x2627,	// (0x00023ebc) popup_query_code_window_t3

0x0002,

0xf827,	// (0x000310bc) popup_query_code_window_t_ParamLimits

0xf827,	// (0x000310bc) popup_query_code_window_t

0x2656,	// (0x00023eeb) query_popup_pane_ParamLimits

0x2656,	// (0x00023eeb) query_popup_pane

0x10bf,	// (0x00022954) bg_popup_window_pane_cp15_ParamLimits

0x10bf,	// (0x00022954) bg_popup_window_pane_cp15

0x10dd,	// (0x00022972) indicator_popup_pane_cp1_ParamLimits

0x10dd,	// (0x00022972) indicator_popup_pane_cp1

0x10f0,	// (0x00022985) indicator_popup_pane_cp2_ParamLimits

0x10f0,	// (0x00022985) indicator_popup_pane_cp2

0x1103,	// (0x00022998) popup_query_data_code_window_g1_ParamLimits

0x1103,	// (0x00022998) popup_query_data_code_window_g1

0x1116,	// (0x000229ab) popup_query_data_code_window_t1_ParamLimits

0x1116,	// (0x000229ab) popup_query_data_code_window_t1

0x1128,	// (0x000229bd) popup_query_data_code_window_t2_ParamLimits

0x1128,	// (0x000229bd) popup_query_data_code_window_t2

0x113a,	// (0x000229cf) popup_query_data_code_window_t3_ParamLimits

0x113a,	// (0x000229cf) popup_query_data_code_window_t3

0x1150,	// (0x000229e5) popup_query_data_code_window_t4_ParamLimits

0x1150,	// (0x000229e5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00030e1f) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00030e1f) popup_query_data_code_window_t

0x70f7,	// (0x0002898c) list_single_midp_graphic_pane_g3

0x1168,	// (0x000229fd) query_popup_data_pane_cp2_ParamLimits

0x117b,	// (0x00022a10) query_popup_pane_cp2_ParamLimits

0x117b,	// (0x00022a10) query_popup_pane_cp2

0x0e5a,	// (0x000226ef) bg_popup_window_pane_cp11

0x255c,	// (0x00023df1) heading_pane_cp5

0x1207,	// (0x00022a9c) listscroll_popup_info_pane

0x0e5a,	// (0x000226ef) input_focus_pane_cp3

0x118e,	// (0x00022a23) query_popup_pane_t1

0x119c,	// (0x00022a31) list_popup_info_pane_ParamLimits

0x119c,	// (0x00022a31) list_popup_info_pane

0x11ab,	// (0x00022a40) listscroll_popup_info_pane_g1

0x11b3,	// (0x00022a48) scroll_pane_cp7

0x11bb,	// (0x00022a50) popup_info_list_pane_t1_ParamLimits

0x11bb,	// (0x00022a50) popup_info_list_pane_t1

0x11d5,	// (0x00022a6a) popup_info_list_pane_t2_ParamLimits

0x11d5,	// (0x00022a6a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00030e28) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00030e28) popup_info_list_pane_t

0x0e5a,	// (0x000226ef) bg_popup_window_pane_cp12

0x3422,	// (0x00024cb7) find_popup_pane

0x0ebe,	// (0x00022753) bg_popup_window_pane_cp3

0x11ef,	// (0x00022a84) heading_pane_cp3

0x11fb,	// (0x00022a90) listscroll_popup_graphic_pane

0x0e5a,	// (0x000226ef) bg_popup_window_pane_cp4

0xdc37,	// (0x0002f4cc) heading_pane_cp4

0x1207,	// (0x00022a9c) listscroll_popup_colour_pane

0x120f,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x120f,	// (0x00022aa4) cell_large_graphic_colour_none_popup_pane

0xdc3f,	// (0x0002f4d4) grid_large_graphic_colour_popup_pane_ParamLimits

0xdc3f,	// (0x0002f4d4) grid_large_graphic_colour_popup_pane

0xdc5b,	// (0x0002f4f0) listscroll_popup_colour_pane_g1_ParamLimits

0xdc5b,	// (0x0002f4f0) listscroll_popup_colour_pane_g1

0xdc72,	// (0x0002f507) listscroll_popup_colour_pane_g2_ParamLimits

0xdc72,	// (0x0002f507) listscroll_popup_colour_pane_g2

0x121f,	// (0x00022ab4) listscroll_popup_colour_pane_g3_ParamLimits

0x121f,	// (0x00022ab4) listscroll_popup_colour_pane_g3

0xdc86,	// (0x0002f51b) listscroll_popup_colour_pane_g4_ParamLimits

0xdc86,	// (0x0002f51b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00030e2d) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00030e2d) listscroll_popup_colour_pane_g

0x122f,	// (0x00022ac4) scroll_pane_cp6_ParamLimits

0x122f,	// (0x00022ac4) scroll_pane_cp6

0xdc95,	// (0x0002f52a) cell_large_graphic_colour_popup_pane_ParamLimits

0xdc95,	// (0x0002f52a) cell_large_graphic_colour_popup_pane

0x1241,	// (0x00022ad6) cell_large_graphic_colour_none_popup_pane_t1

0x0e5a,	// (0x000226ef) grid_highlight_pane_cp5

0x1250,	// (0x00022ae5) cell_large_graphic_colour_popup_pane_g1

0x1258,	// (0x00022aed) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00030e36) cell_large_graphic_colour_popup_pane_g

0x1260,	// (0x00022af5) cell_large_graphic_colour_popup_pane_g2_copy1

0x1269,	// (0x00022afe) grid_highlight_pane_cp4

0x1271,	// (0x00022b06) bg_popup_window_pane_cp8_ParamLimits

0x1271,	// (0x00022b06) bg_popup_window_pane_cp8

0x128c,	// (0x00022b21) popup_snote_single_text_window_g1_ParamLimits

0x128c,	// (0x00022b21) popup_snote_single_text_window_g1

0x129e,	// (0x00022b33) popup_snote_single_text_window_t1_ParamLimits

0x129e,	// (0x00022b33) popup_snote_single_text_window_t1

0x12b1,	// (0x00022b46) popup_snote_single_text_window_t2_ParamLimits

0x12b1,	// (0x00022b46) popup_snote_single_text_window_t2

0x12c4,	// (0x00022b59) popup_snote_single_text_window_t3_ParamLimits

0x12c4,	// (0x00022b59) popup_snote_single_text_window_t3

0x12fd,	// (0x00022b92) popup_snote_single_text_window_t4_ParamLimits

0x12fd,	// (0x00022b92) popup_snote_single_text_window_t4

0x1331,	// (0x00022bc6) popup_snote_single_text_window_t5_ParamLimits

0x1331,	// (0x00022bc6) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00030e3b) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00030e3b) popup_snote_single_text_window_t

0x1360,	// (0x00022bf5) bg_popup_window_pane_cp9_ParamLimits

0x1360,	// (0x00022bf5) bg_popup_window_pane_cp9

0x128c,	// (0x00022b21) popup_snote_single_graphic_window_g1_ParamLimits

0x128c,	// (0x00022b21) popup_snote_single_graphic_window_g1

0x136e,	// (0x00022c03) popup_snote_single_graphic_window_g2_ParamLimits

0x136e,	// (0x00022c03) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00030e46) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00030e46) popup_snote_single_graphic_window_g

0x137a,	// (0x00022c0f) popup_snote_single_graphic_window_t1_ParamLimits

0x137a,	// (0x00022c0f) popup_snote_single_graphic_window_t1

0x138d,	// (0x00022c22) popup_snote_single_graphic_window_t2_ParamLimits

0x138d,	// (0x00022c22) popup_snote_single_graphic_window_t2

0x12c4,	// (0x00022b59) popup_snote_single_graphic_window_t3_ParamLimits

0x12c4,	// (0x00022b59) popup_snote_single_graphic_window_t3

0x12fd,	// (0x00022b92) popup_snote_single_graphic_window_t4_ParamLimits

0x12fd,	// (0x00022b92) popup_snote_single_graphic_window_t4

0x1331,	// (0x00022bc6) popup_snote_single_graphic_window_t5_ParamLimits

0x1331,	// (0x00022bc6) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00030e4b) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00030e4b) popup_snote_single_graphic_window_t

0xe858,	// (0x000300ed) grid_graphic_popup_pane_ParamLimits

0xe858,	// (0x000300ed) grid_graphic_popup_pane

0xe87b,	// (0x00030110) listscroll_popup_graphic_pane_g1_ParamLimits

0xe87b,	// (0x00030110) listscroll_popup_graphic_pane_g1

0xe88f,	// (0x00030124) listscroll_popup_graphic_pane_g2_ParamLimits

0xe88f,	// (0x00030124) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a4,	// (0x00031239) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a4,	// (0x00031239) listscroll_popup_graphic_pane_g

0x331c,	// (0x00024bb1) scroll_pane_cp5

0xe813,	// (0x000300a8) cell_graphic_popup_pane_ParamLimits

0xe813,	// (0x000300a8) cell_graphic_popup_pane

0x33cb,	// (0x00024c60) cell_graphic_popup_pane_g1

0x33d3,	// (0x00024c68) cell_graphic_popup_pane_g2

0x1260,	// (0x00022af5) cell_graphic_popup_pane_g3

0x0002,

0xf99d,	// (0x00031232) cell_graphic_popup_pane_g

0x33dc,	// (0x00024c71) cell_graphic_popup_pane_t2

0x1269,	// (0x00022afe) grid_highlight_pane_cp3

0x13b2,	// (0x00022c47) list_gen_pane_ParamLimits

0x13b2,	// (0x00022c47) list_gen_pane

0x13db,	// (0x00022c70) scroll_pane

0xe7e6,	// (0x0003007b) bg_list_pane_g1_ParamLimits

0xe7e6,	// (0x0003007b) bg_list_pane_g1

0x3382,	// (0x00024c17) bg_list_pane_g2_ParamLimits

0x3382,	// (0x00024c17) bg_list_pane_g2

0x3395,	// (0x00024c2a) bg_list_pane_g3_ParamLimits

0x3395,	// (0x00024c2a) bg_list_pane_g3

0x33a7,	// (0x00024c3c) bg_list_pane_g4_ParamLimits

0x33a7,	// (0x00024c3c) bg_list_pane_g4

0xe801,	// (0x00030096) bg_list_pane_g5_ParamLimits

0xe801,	// (0x00030096) bg_list_pane_g5

0x0004,

0xf992,	// (0x00031227) bg_list_pane_g_ParamLimits

0xf992,	// (0x00031227) bg_list_pane_g

0xe78a,	// (0x0003001f) list_double2_graphic_large_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double2_graphic_large_graphic_pane

0xe78a,	// (0x0003001f) list_double2_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double2_graphic_pane

0xe78a,	// (0x0003001f) list_double2_large_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double2_large_graphic_pane

0xe79c,	// (0x00030031) list_double2_pane_ParamLimits

0xe79c,	// (0x00030031) list_double2_pane

0xe78a,	// (0x0003001f) list_double_graphic_heading_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_graphic_heading_pane

0xe78a,	// (0x0003001f) list_double_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_graphic_pane

0xe78a,	// (0x0003001f) list_double_heading_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_heading_pane

0xe78a,	// (0x0003001f) list_double_large_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_large_graphic_pane

0xe78a,	// (0x0003001f) list_double_number_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_number_pane

0xe78a,	// (0x0003001f) list_double_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_pane

0xe78a,	// (0x0003001f) list_double_time_pane_ParamLimits

0xe78a,	// (0x0003001f) list_double_time_pane

0xe78a,	// (0x0003001f) list_setting_number_pane_ParamLimits

0xe78a,	// (0x0003001f) list_setting_number_pane

0xe78a,	// (0x0003001f) list_setting_pane_ParamLimits

0xe78a,	// (0x0003001f) list_setting_pane

0xd92e,	// (0x0002f1c3) list_single_2graphic_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_2graphic_pane

0xd92e,	// (0x0002f1c3) list_single_graphic_heading_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_graphic_heading_pane

0xd92e,	// (0x0002f1c3) list_single_graphic_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_graphic_pane

0xd92e,	// (0x0002f1c3) list_single_heading_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_heading_pane

0xe78a,	// (0x0003001f) list_single_large_graphic_pane_ParamLimits

0xe78a,	// (0x0003001f) list_single_large_graphic_pane

0xd92e,	// (0x0002f1c3) list_single_number_heading_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_number_heading_pane

0xd92e,	// (0x0002f1c3) list_single_number_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_number_pane

0xd92e,	// (0x0002f1c3) list_single_pane_ParamLimits

0xd92e,	// (0x0002f1c3) list_single_pane

0x0e5a,	// (0x000226ef) list_highlight_pane_cp1

0x96b1,	// (0x0002af46) list_single_pane_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_pane_g1

0x96bd,	// (0x0002af52) list_single_pane_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_pane_g

0x98ee,	// (0x0002b183) list_single_pane_t1_ParamLimits

0x98ee,	// (0x0002b183) list_single_pane_t1

0x96b1,	// (0x0002af46) list_single_number_pane_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_number_pane_g1

0x96bd,	// (0x0002af52) list_single_number_pane_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_number_pane_g

0x96c9,	// (0x0002af5e) list_single_number_pane_t1_ParamLimits

0x96c9,	// (0x0002af5e) list_single_number_pane_t1

0xd8f1,	// (0x0002f186) list_single_number_pane_t2_ParamLimits

0xd8f1,	// (0x0002f186) list_single_number_pane_t2

0x0001,

0xf953,	// (0x000311e8) list_single_number_pane_t_ParamLimits

0xf953,	// (0x000311e8) list_single_number_pane_t

0x8f8e,	// (0x0002a823) list_single_graphic_pane_g1_ParamLimits

0x8f8e,	// (0x0002a823) list_single_graphic_pane_g1

0x96b1,	// (0x0002af46) list_single_graphic_pane_g2_ParamLimits

0x96b1,	// (0x0002af46) list_single_graphic_pane_g2

0x96bd,	// (0x0002af52) list_single_graphic_pane_g3_ParamLimits

0x96bd,	// (0x0002af52) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00030e56) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00030e56) list_single_graphic_pane_g

0x96c9,	// (0x0002af5e) list_single_graphic_pane_t1_ParamLimits

0x96c9,	// (0x0002af5e) list_single_graphic_pane_t1

0x96b1,	// (0x0002af46) list_single_heading_pane_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_heading_pane_g1

0x96bd,	// (0x0002af52) list_single_heading_pane_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_heading_pane_g

0xd34d,	// (0x0002ebe2) list_single_heading_pane_t1_ParamLimits

0xd34d,	// (0x0002ebe2) list_single_heading_pane_t1

0xd363,	// (0x0002ebf8) list_single_heading_pane_t2_ParamLimits

0xd363,	// (0x0002ebf8) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00030e62) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00030e62) list_single_heading_pane_t

0x96b1,	// (0x0002af46) list_single_number_heading_pane_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_number_heading_pane_g1

0x96bd,	// (0x0002af52) list_single_number_heading_pane_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_number_heading_pane_g

0xd34d,	// (0x0002ebe2) list_single_number_heading_pane_t1_ParamLimits

0xd34d,	// (0x0002ebe2) list_single_number_heading_pane_t1

0xd375,	// (0x0002ec0a) list_single_number_heading_pane_t2_ParamLimits

0xd375,	// (0x0002ec0a) list_single_number_heading_pane_t2

0x98ca,	// (0x0002b15f) list_single_number_heading_pane_t3_ParamLimits

0x98ca,	// (0x0002b15f) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00030e67) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00030e67) list_single_number_heading_pane_t

0x8f8e,	// (0x0002a823) list_single_graphic_heading_pane_g1_ParamLimits

0x8f8e,	// (0x0002a823) list_single_graphic_heading_pane_g1

0xd387,	// (0x0002ec1c) list_single_graphic_heading_pane_g4_ParamLimits

0xd387,	// (0x0002ec1c) list_single_graphic_heading_pane_g4

0x96bd,	// (0x0002af52) list_single_graphic_heading_pane_g5_ParamLimits

0x96bd,	// (0x0002af52) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00030e6e) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00030e6e) list_single_graphic_heading_pane_g

0xd34d,	// (0x0002ebe2) list_single_graphic_heading_pane_t1_ParamLimits

0xd34d,	// (0x0002ebe2) list_single_graphic_heading_pane_t1

0xd398,	// (0x0002ec2d) list_single_graphic_heading_pane_t2_ParamLimits

0xd398,	// (0x0002ec2d) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00030e75) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00030e75) list_single_graphic_heading_pane_t

0x9904,	// (0x0002b199) list_single_large_graphic_pane_g1_ParamLimits

0x9904,	// (0x0002b199) list_single_large_graphic_pane_g1

0x9910,	// (0x0002b1a5) list_single_large_graphic_pane_g2_ParamLimits

0x9910,	// (0x0002b1a5) list_single_large_graphic_pane_g2

0x991c,	// (0x0002b1b1) list_single_large_graphic_pane_g3_ParamLimits

0x991c,	// (0x0002b1b1) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00030e7a) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00030e7a) list_single_large_graphic_pane_g

0x2709,	// (0x00023f9e) wait_border_pane_g2_copy1

0xd3aa,	// (0x0002ec3f) list_single_large_graphic_pane_g4_cp2

0x9928,	// (0x0002b1bd) list_single_large_graphic_pane_t1_ParamLimits

0x9928,	// (0x0002b1bd) list_single_large_graphic_pane_t1

0x8f9a,	// (0x0002a82f) list_double_pane_g1_ParamLimits

0x8f9a,	// (0x0002a82f) list_double_pane_g1

0x8fa6,	// (0x0002a83b) list_double_pane_g2_ParamLimits

0x8fa6,	// (0x0002a83b) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00030e81) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00030e81) list_double_pane_g

0x97d7,	// (0x0002b06c) list_double_pane_t1_ParamLimits

0x97d7,	// (0x0002b06c) list_double_pane_t1

0xd3b2,	// (0x0002ec47) list_double_pane_t2_ParamLimits

0xd3b2,	// (0x0002ec47) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00030e86) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00030e86) list_double_pane_t

0xd3c4,	// (0x0002ec59) list_double2_pane_g1_ParamLimits

0xd3c4,	// (0x0002ec59) list_double2_pane_g1

0x9179,	// (0x0002aa0e) list_double2_pane_g2_ParamLimits

0x9179,	// (0x0002aa0e) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00030e8b) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00030e8b) list_double2_pane_g

0xd3d5,	// (0x0002ec6a) list_double2_pane_t1_ParamLimits

0xd3d5,	// (0x0002ec6a) list_double2_pane_t1

0xd3eb,	// (0x0002ec80) list_double2_pane_t2_ParamLimits

0xd3eb,	// (0x0002ec80) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00030e90) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00030e90) list_double2_pane_t

0x8f9a,	// (0x0002a82f) list_double_number_pane_g1_ParamLimits

0x8f9a,	// (0x0002a82f) list_double_number_pane_g1

0x8fa6,	// (0x0002a83b) list_double_number_pane_g2_ParamLimits

0x8fa6,	// (0x0002a83b) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00030e81) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00030e81) list_double_number_pane_g

0xd3fd,	// (0x0002ec92) list_double_number_pane_t1_ParamLimits

0xd3fd,	// (0x0002ec92) list_double_number_pane_t1

0x8fb2,	// (0x0002a847) list_double_number_pane_t2_ParamLimits

0x8fb2,	// (0x0002a847) list_double_number_pane_t2

0xd40f,	// (0x0002eca4) list_double_number_pane_t3_ParamLimits

0xd40f,	// (0x0002eca4) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00030e95) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00030e95) list_double_number_pane_t

0x8f8e,	// (0x0002a823) list_double_graphic_pane_g1_ParamLimits

0x8f8e,	// (0x0002a823) list_double_graphic_pane_g1

0xd421,	// (0x0002ecb6) list_double_graphic_pane_g2_ParamLimits

0xd421,	// (0x0002ecb6) list_double_graphic_pane_g2

0xd430,	// (0x0002ecc5) list_double_graphic_pane_g3_ParamLimits

0xd430,	// (0x0002ecc5) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00030e9c) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00030e9c) list_double_graphic_pane_g

0xd448,	// (0x0002ecdd) list_double_graphic_pane_t1_ParamLimits

0xd448,	// (0x0002ecdd) list_double_graphic_pane_t1

0xd45e,	// (0x0002ecf3) list_double_graphic_pane_t2_ParamLimits

0xd45e,	// (0x0002ecf3) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00030ea5) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00030ea5) list_double_graphic_pane_t

0xd470,	// (0x0002ed05) list_double2_graphic_pane_g1_ParamLimits

0xd470,	// (0x0002ed05) list_double2_graphic_pane_g1

0x8f9a,	// (0x0002a82f) list_double2_graphic_pane_g2_ParamLimits

0x8f9a,	// (0x0002a82f) list_double2_graphic_pane_g2

0x8fa6,	// (0x0002a83b) list_double2_graphic_pane_g3_ParamLimits

0x8fa6,	// (0x0002a83b) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00030eaa) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00030eaa) list_double2_graphic_pane_g

0xd47c,	// (0x0002ed11) list_double2_graphic_pane_t1_ParamLimits

0xd47c,	// (0x0002ed11) list_double2_graphic_pane_t1

0xd492,	// (0x0002ed27) list_double2_graphic_pane_t2_ParamLimits

0xd492,	// (0x0002ed27) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00030eb1) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00030eb1) list_double2_graphic_pane_t

0xd4a4,	// (0x0002ed39) list_double_large_graphic_pane_g1_ParamLimits

0xd4a4,	// (0x0002ed39) list_double_large_graphic_pane_g1

0xd4cd,	// (0x0002ed62) list_double_large_graphic_pane_g2_ParamLimits

0xd4cd,	// (0x0002ed62) list_double_large_graphic_pane_g2

0x8fa6,	// (0x0002a83b) list_double_large_graphic_pane_g3_ParamLimits

0x8fa6,	// (0x0002a83b) list_double_large_graphic_pane_g3

0xd4de,	// (0x0002ed73) list_double_large_graphic_pane_g4_ParamLimits

0xd4de,	// (0x0002ed73) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00030eb6) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00030eb6) list_double_large_graphic_pane_g

0xd4ef,	// (0x0002ed84) list_double_large_graphic_pane_t1_ParamLimits

0xd4ef,	// (0x0002ed84) list_double_large_graphic_pane_t1

0xd508,	// (0x0002ed9d) list_double_large_graphic_pane_t2_ParamLimits

0xd508,	// (0x0002ed9d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00030ec1) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00030ec1) list_double_large_graphic_pane_t

0xd51a,	// (0x0002edaf) list_double2_large_graphic_pane_g1_ParamLimits

0xd51a,	// (0x0002edaf) list_double2_large_graphic_pane_g1

0xd526,	// (0x0002edbb) list_double2_large_graphic_pane_g2_ParamLimits

0xd526,	// (0x0002edbb) list_double2_large_graphic_pane_g2

0xd537,	// (0x0002edcc) list_double2_large_graphic_pane_g3_ParamLimits

0xd537,	// (0x0002edcc) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00030ec6) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00030ec6) list_double2_large_graphic_pane_g

0xd543,	// (0x0002edd8) list_double2_large_graphic_pane_t1_ParamLimits

0xd543,	// (0x0002edd8) list_double2_large_graphic_pane_t1

0xd559,	// (0x0002edee) list_double2_large_graphic_pane_t2_ParamLimits

0xd559,	// (0x0002edee) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00030ecd) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00030ecd) list_double2_large_graphic_pane_t

0xd56b,	// (0x0002ee00) list_double_heading_pane_g1_ParamLimits

0xd56b,	// (0x0002ee00) list_double_heading_pane_g1

0xd57c,	// (0x0002ee11) list_double_heading_pane_g2_ParamLimits

0xd57c,	// (0x0002ee11) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00030ed2) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00030ed2) list_double_heading_pane_g

0xd588,	// (0x0002ee1d) list_double_heading_pane_t1_ParamLimits

0xd588,	// (0x0002ee1d) list_double_heading_pane_t1

0xd59e,	// (0x0002ee33) list_double_heading_pane_t2_ParamLimits

0xd59e,	// (0x0002ee33) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00030ed7) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00030ed7) list_double_heading_pane_t

0xd5b0,	// (0x0002ee45) list_double_graphic_heading_pane_g1_ParamLimits

0xd5b0,	// (0x0002ee45) list_double_graphic_heading_pane_g1

0xd56b,	// (0x0002ee00) list_double_graphic_heading_pane_g2_ParamLimits

0xd56b,	// (0x0002ee00) list_double_graphic_heading_pane_g2

0xd57c,	// (0x0002ee11) list_double_graphic_heading_pane_g3_ParamLimits

0xd57c,	// (0x0002ee11) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00030edc) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00030edc) list_double_graphic_heading_pane_g

0xd5bc,	// (0x0002ee51) list_double_graphic_heading_pane_t1_ParamLimits

0xd5bc,	// (0x0002ee51) list_double_graphic_heading_pane_t1

0xd492,	// (0x0002ed27) list_double_graphic_heading_pane_t2_ParamLimits

0xd492,	// (0x0002ed27) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00030ee3) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00030ee3) list_double_graphic_heading_pane_t

0xd4cd,	// (0x0002ed62) list_double_time_pane_g1_ParamLimits

0xd4cd,	// (0x0002ed62) list_double_time_pane_g1

0x8fa6,	// (0x0002a83b) list_double_time_pane_g2_ParamLimits

0x8fa6,	// (0x0002a83b) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00030ee8) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00030ee8) list_double_time_pane_g

0x8fc8,	// (0x0002a85d) list_double_time_pane_t1_ParamLimits

0x8fc8,	// (0x0002a85d) list_double_time_pane_t1

0xd5d2,	// (0x0002ee67) list_double_time_pane_t2_ParamLimits

0xd5d2,	// (0x0002ee67) list_double_time_pane_t2

0xd5e4,	// (0x0002ee79) list_double_time_pane_t3_ParamLimits

0xd5e4,	// (0x0002ee79) list_double_time_pane_t3

0xd5f6,	// (0x0002ee8b) list_double_time_pane_t4_ParamLimits

0xd5f6,	// (0x0002ee8b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00030eed) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00030eed) list_double_time_pane_t

0xd608,	// (0x0002ee9d) list_setting_pane_g1_ParamLimits

0xd608,	// (0x0002ee9d) list_setting_pane_g1

0xd57c,	// (0x0002ee11) list_setting_pane_g2_ParamLimits

0xd57c,	// (0x0002ee11) list_setting_pane_g2

0x0001,

0xf661,	// (0x00030ef6) list_setting_pane_g_ParamLimits

0xf661,	// (0x00030ef6) list_setting_pane_g

0xd614,	// (0x0002eea9) list_setting_pane_t1_ParamLimits

0xd614,	// (0x0002eea9) list_setting_pane_t1

0xd62b,	// (0x0002eec0) list_setting_pane_t2_ParamLimits

0xd62b,	// (0x0002eec0) list_setting_pane_t2

0x0002,

0xf666,	// (0x00030efb) list_setting_pane_t_ParamLimits

0xf666,	// (0x00030efb) list_setting_pane_t

0xd668,	// (0x0002eefd) set_value_pane_cp_ParamLimits

0xd668,	// (0x0002eefd) set_value_pane_cp

0xd674,	// (0x0002ef09) list_setting_number_pane_g1_ParamLimits

0xd674,	// (0x0002ef09) list_setting_number_pane_g1

0xd680,	// (0x0002ef15) list_setting_number_pane_g2_ParamLimits

0xd680,	// (0x0002ef15) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x00030f02) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x00030f02) list_setting_number_pane_g

0xd68c,	// (0x0002ef21) list_setting_number_pane_t1_ParamLimits

0xd68c,	// (0x0002ef21) list_setting_number_pane_t1

0xd6a0,	// (0x0002ef35) list_setting_number_pane_t2_ParamLimits

0xd6a0,	// (0x0002ef35) list_setting_number_pane_t2

0xd6b7,	// (0x0002ef4c) list_setting_number_pane_t3_ParamLimits

0xd6b7,	// (0x0002ef4c) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x00030f07) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x00030f07) list_setting_number_pane_t

0xd668,	// (0x0002eefd) set_value_pane_ParamLimits

0xd668,	// (0x0002eefd) set_value_pane

0x1410,	// (0x00022ca5) bg_set_opt_pane_ParamLimits

0x1410,	// (0x00022ca5) bg_set_opt_pane

0x93ec,	// (0x0002ac81) set_value_pane_t1

0x1431,	// (0x00022cc6) slider_set_pane_cp3

0x143a,	// (0x00022ccf) volume_small_pane_cp

0x1443,	// (0x00022cd8) list_form_gen_pane

0x13ff,	// (0x00022c94) scroll_pane_cp8

0xd6fa,	// (0x0002ef8f) form_field_data_pane_ParamLimits

0xd6fa,	// (0x0002ef8f) form_field_data_pane

0xd711,	// (0x0002efa6) form_field_data_wide_pane_ParamLimits

0xd711,	// (0x0002efa6) form_field_data_wide_pane

0xd731,	// (0x0002efc6) form_field_popup_pane_ParamLimits

0xd731,	// (0x0002efc6) form_field_popup_pane

0xd749,	// (0x0002efde) form_field_popup_wide_pane_ParamLimits

0xd749,	// (0x0002efde) form_field_popup_wide_pane

0x9470,	// (0x0002ad05) form_field_slider_pane_ParamLimits

0x9470,	// (0x0002ad05) form_field_slider_pane

0x9483,	// (0x0002ad18) form_field_slider_wide_pane_ParamLimits

0x9483,	// (0x0002ad18) form_field_slider_wide_pane

0x144c,	// (0x00022ce1) data_form_pane

0xdcbc,	// (0x0002f551) form_field_data_pane_t1

0x1458,	// (0x00022ced) input_focus_pane

0x1466,	// (0x00022cfb) data_form_wide_pane

0x94aa,	// (0x0002ad3f) form_field_data_wide_pane_t1

0x127e,	// (0x00022b13) input_focus_pane_cp6

0xd76a,	// (0x0002efff) form_field_popup_pane_t1

0x1458,	// (0x00022ced) input_focus_pane_cp7

0x144c,	// (0x00022ce1) list_form_pane

0x94ec,	// (0x0002ad81) form_field_popup_wide_pane_t1

0x1458,	// (0x00022ced) input_focus_pane_cp8

0x1492,	// (0x00022d27) list_form_wide_pane

0xd78a,	// (0x0002f01f) form_field_slider_pane_t1_ParamLimits

0xd78a,	// (0x0002f01f) form_field_slider_pane_t1

0xd7a0,	// (0x0002f035) form_field_slider_pane_t2_ParamLimits

0xd7a0,	// (0x0002f035) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x00030f17) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x00030f17) form_field_slider_pane_t

0x0ea8,	// (0x0002273d) input_focus_pane_cp9_ParamLimits

0x0ea8,	// (0x0002273d) input_focus_pane_cp9

0xd7b5,	// (0x0002f04a) slider_cont_pane_ParamLimits

0xd7b5,	// (0x0002f04a) slider_cont_pane

0x14a1,	// (0x00022d36) form_field_slider_wide_pane_t1_ParamLimits

0x14a1,	// (0x00022d36) form_field_slider_wide_pane_t1

0x9541,	// (0x0002add6) form_field_slider_wide_pane_t2_ParamLimits

0x9541,	// (0x0002add6) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x00030f1c) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x00030f1c) form_field_slider_wide_pane_t

0x0ea8,	// (0x0002273d) input_focus_pane_cp10_ParamLimits

0x0ea8,	// (0x0002273d) input_focus_pane_cp10

0xd7c9,	// (0x0002f05e) slider_cont_pane_cp1_ParamLimits

0xd7c9,	// (0x0002f05e) slider_cont_pane_cp1

0xd7df,	// (0x0002f074) slider_form_pane_cp

0x14b3,	// (0x00022d48) input_focus_pane_g1

0x14bb,	// (0x00022d50) input_focus_pane_g2

0x14c3,	// (0x00022d58) input_focus_pane_g3

0x14cb,	// (0x00022d60) input_focus_pane_g4

0x14d3,	// (0x00022d68) input_focus_pane_g5

0x14db,	// (0x00022d70) input_focus_pane_g6

0x14e3,	// (0x00022d78) input_focus_pane_g7

0x14eb,	// (0x00022d80) input_focus_pane_g8

0x14f3,	// (0x00022d88) input_focus_pane_g9

0x0dd8,	// (0x0002266d) input_focus_pane_g10

0x0009,

0xf68c,	// (0x00030f21) input_focus_pane_g

0x2712,	// (0x00023fa7) wait_border_pane_g3_copy1

0xd7e7,	// (0x0002f07c) data_form_pane_t1

0x0dd8,	// (0x0002266d) wait_anim_pane_g1_copy1

0xd903,	// (0x0002f198) data_form_wide_pane_t1

0xd800,	// (0x0002f095) list_form_graphic_pane_cp_ParamLimits

0xd800,	// (0x0002f095) list_form_graphic_pane_cp

0x3328,	// (0x00024bbd) slider_form_pane_g1

0x3331,	// (0x00024bc6) slider_form_pane_g2

0x0006,

0xf983,	// (0x00031218) slider_form_pane_g

0xd814,	// (0x0002f0a9) list_form_graphic_pane_ParamLimits

0xd814,	// (0x0002f0a9) list_form_graphic_pane

0x95a1,	// (0x0002ae36) list_form_graphic_pane_g1

0x95a9,	// (0x0002ae3e) list_form_graphic_pane_t1_ParamLimits

0x95a9,	// (0x0002ae3e) list_form_graphic_pane_t1

0x0ebe,	// (0x00022753) list_highlight_pane_cp5_ParamLimits

0x0ebe,	// (0x00022753) list_highlight_pane_cp5

0xd829,	// (0x0002f0be) find_pane_g1

0x14fb,	// (0x00022d90) input_find_pane

0xd834,	// (0x0002f0c9) input_find_pane_g1_ParamLimits

0xd834,	// (0x0002f0c9) input_find_pane_g1

0x95d3,	// (0x0002ae68) input_find_pane_t1_ParamLimits

0x95d3,	// (0x0002ae68) input_find_pane_t1

0x95e8,	// (0x0002ae7d) input_find_pane_t2_ParamLimits

0x95e8,	// (0x0002ae7d) input_find_pane_t2

0x0001,

0xf6a1,	// (0x00030f36) input_find_pane_t_ParamLimits

0xf6a1,	// (0x00030f36) input_find_pane_t

0x1504,	// (0x00022d99) input_focus_pane_cp5_ParamLimits

0x1504,	// (0x00022d99) input_focus_pane_cp5

0x0ea8,	// (0x0002273d) bg_popup_window_pane_cp2_ParamLimits

0x0ea8,	// (0x0002273d) bg_popup_window_pane_cp2

0x151e,	// (0x00022db3) listscroll_menu_pane_ParamLimits

0x151e,	// (0x00022db3) listscroll_menu_pane

0x152a,	// (0x00022dbf) popup_submenu_window_ParamLimits

0x152a,	// (0x00022dbf) popup_submenu_window

0x154e,	// (0x00022de3) find_popup_pane_g1

0x1556,	// (0x00022deb) input_popup_find_pane_cp

0x1504,	// (0x00022d99) input_focus_pane_cp4_ParamLimits

0x1504,	// (0x00022d99) input_focus_pane_cp4

0x1560,	// (0x00022df5) input_popup_find_pane_t1_ParamLimits

0x1560,	// (0x00022df5) input_popup_find_pane_t1

0x0e5a,	// (0x000226ef) bg_popup_sub_pane_cp

0x158e,	// (0x00022e23) listscroll_popup_sub_pane

0x1596,	// (0x00022e2b) list_submenu_pane_ParamLimits

0x1596,	// (0x00022e2b) list_submenu_pane

0x15a7,	// (0x00022e3c) scroll_pane_cp4

0x15af,	// (0x00022e44) list_single_popup_submenu_pane_ParamLimits

0x15af,	// (0x00022e44) list_single_popup_submenu_pane

0x15c1,	// (0x00022e56) list_single_popup_submenu_pane_g1

0x15c9,	// (0x00022e5e) list_single_popup_submenu_pane_t1_ParamLimits

0x15c9,	// (0x00022e5e) list_single_popup_submenu_pane_t1

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp1_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp1

0x3302,	// (0x00024b97) tabs_2_active_pane_g1

0xdce0,	// (0x0002f575) tabs_2_active_pane_t1

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp1_ParamLimits

0x0ea8,	// (0x0002273d) bg_passive_tab_pane_cp1

0x3302,	// (0x00024b97) tabs_2_passive_pane_g1

0xdce0,	// (0x0002f575) tabs_2_passive_pane_t1

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp4

0xdcf6,	// (0x0002f58b) tabs_2_long_active_pane_t1

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp4

0x70ff,	// (0x00028994) list_single_midp_graphic_pane_g4_ParamLimits

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp5

0xdd0d,	// (0x0002f5a2) tabs_3_long_active_pane_t1

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp5

0x70ff,	// (0x00028994) list_single_midp_graphic_pane_g4

0x0ebe,	// (0x00022753) bg_popup_window_pane_cp13_ParamLimits

0x0ebe,	// (0x00022753) bg_popup_window_pane_cp13

0x15f3,	// (0x00022e88) listscroll_popup_fast_pane_ParamLimits

0x15f3,	// (0x00022e88) listscroll_popup_fast_pane

0x1602,	// (0x00022e97) grid_popup_fast_pane_ParamLimits

0x1602,	// (0x00022e97) grid_popup_fast_pane

0x1614,	// (0x00022ea9) scroll_pane_cp9_ParamLimits

0x1614,	// (0x00022ea9) scroll_pane_cp9

0x4609,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4609,	// (0x00025e9e) list_single_graphic_hl_pane_t1_cp2

0x1638,	// (0x00022ecd) input_focus_pane_cp20_ParamLimits

0x1638,	// (0x00022ecd) input_focus_pane_cp20

0x1646,	// (0x00022edb) query_popup_data_pane_t1_ParamLimits

0x1646,	// (0x00022edb) query_popup_data_pane_t1

0x1659,	// (0x00022eee) query_popup_data_pane_t2_ParamLimits

0x1659,	// (0x00022eee) query_popup_data_pane_t2

0x169f,	// (0x00022f34) query_popup_data_pane_t3_ParamLimits

0x169f,	// (0x00022f34) query_popup_data_pane_t3

0x16e0,	// (0x00022f75) query_popup_data_pane_t4_ParamLimits

0x16e0,	// (0x00022f75) query_popup_data_pane_t4

0x171c,	// (0x00022fb1) query_popup_data_pane_t5_ParamLimits

0x171c,	// (0x00022fb1) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x00030f3b) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x00030f3b) query_popup_data_pane_t

0x14b3,	// (0x00022d48) bg_set_opt_pane_g1

0x14bb,	// (0x00022d50) bg_set_opt_pane_g2

0x14c3,	// (0x00022d58) bg_set_opt_pane_g3

0x14cb,	// (0x00022d60) bg_set_opt_pane_g4

0x14d3,	// (0x00022d68) bg_set_opt_pane_g5

0x14db,	// (0x00022d70) bg_set_opt_pane_g6

0x14e3,	// (0x00022d78) bg_set_opt_pane_g7

0x14eb,	// (0x00022d80) bg_set_opt_pane_g8

0x14f3,	// (0x00022d88) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x00030f46) bg_set_opt_pane_g

0x6463,	// (0x00027cf8) control_top_pane_stacon_ParamLimits

0x6463,	// (0x00027cf8) control_top_pane_stacon

0x64b6,	// (0x00027d4b) signal_pane_stacon_ParamLimits

0x64b6,	// (0x00027d4b) signal_pane_stacon

0x1b0f,	// (0x000233a4) stacon_top_pane_g1_ParamLimits

0x1b0f,	// (0x000233a4) stacon_top_pane_g1

0x64db,	// (0x00027d70) title_pane_stacon_ParamLimits

0x64db,	// (0x00027d70) title_pane_stacon

0x64fd,	// (0x00027d92) uni_indicator_pane_stacon_ParamLimits

0x64fd,	// (0x00027d92) uni_indicator_pane_stacon

0x6512,	// (0x00027da7) battery_pane_stacon_ParamLimits

0x6512,	// (0x00027da7) battery_pane_stacon

0x6552,	// (0x00027de7) control_bottom_pane_stacon_ParamLimits

0x6552,	// (0x00027de7) control_bottom_pane_stacon

0x6571,	// (0x00027e06) navi_pane_stacon_ParamLimits

0x6571,	// (0x00027e06) navi_pane_stacon

0x1b31,	// (0x000233c6) stacon_bottom_pane_g1_ParamLimits

0x1b31,	// (0x000233c6) stacon_bottom_pane_g1

0x1753,	// (0x00022fe8) aid_levels_signal_lsc_ParamLimits

0x1753,	// (0x00022fe8) aid_levels_signal_lsc

0x6068,	// (0x000278fd) signal_pane_stacon_g1_ParamLimits

0x6068,	// (0x000278fd) signal_pane_stacon_g1

0x6074,	// (0x00027909) signal_pane_stacon_g2_ParamLimits

0x6074,	// (0x00027909) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x00030f59) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x00030f59) signal_pane_stacon_g

0x60a8,	// (0x0002793d) title_pane_stacon_t1_ParamLimits

0x60a8,	// (0x0002793d) title_pane_stacon_t1

0x1781,	// (0x00023016) uni_indicator_pane_stacon_g1

0x178b,	// (0x00023020) uni_indicator_pane_stacon_g2

0x176d,	// (0x00023002) uni_indicator_pane_stacon_g3

0x1777,	// (0x0002300c) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x00030f65) uni_indicator_pane_stacon_g

0x60cd,	// (0x00027962) control_top_pane_stacon_g1

0x60d5,	// (0x0002796a) control_top_pane_stacon_t1_ParamLimits

0x60d5,	// (0x0002796a) control_top_pane_stacon_t1

0x1795,	// (0x0002302a) aid_levels_battery_lsc_ParamLimits

0x1795,	// (0x0002302a) aid_levels_battery_lsc

0x6106,	// (0x0002799b) battery_pane_stacon_g1_ParamLimits

0x6106,	// (0x0002799b) battery_pane_stacon_g1

0x6112,	// (0x000279a7) battery_pane_stacon_g2_ParamLimits

0x6112,	// (0x000279a7) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x00030f6e) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x00030f6e) battery_pane_stacon_g

0x6141,	// (0x000279d6) navi_icon_pane_stacon

0x6151,	// (0x000279e6) navi_navi_pane_stacon

0x6141,	// (0x000279d6) navi_text_pane_stacon

0x60cd,	// (0x00027962) control_bottom_pane_stacon_g1

0x6161,	// (0x000279f6) control_bottom_pane_stacon_t1_ParamLimits

0x6161,	// (0x000279f6) control_bottom_pane_stacon_t1

0xdd23,	// (0x0002f5b8) grid_app_pane_ParamLimits

0xdd23,	// (0x0002f5b8) grid_app_pane

0xdd51,	// (0x0002f5e6) scroll_pane_cp15_ParamLimits

0xdd51,	// (0x0002f5e6) scroll_pane_cp15

0xdd64,	// (0x0002f5f9) cell_app_pane_ParamLimits

0xdd64,	// (0x0002f5f9) cell_app_pane

0xdda1,	// (0x0002f636) cell_app_pane_g1_ParamLimits

0xdda1,	// (0x0002f636) cell_app_pane_g1

0x17bd,	// (0x00023052) cell_app_pane_g2_ParamLimits

0x17bd,	// (0x00023052) cell_app_pane_g2

0x0001,

0xf6de,	// (0x00030f73) cell_app_pane_g_ParamLimits

0xf6de,	// (0x00030f73) cell_app_pane_g

0xddc5,	// (0x0002f65a) cell_app_pane_t1_ParamLimits

0xddc5,	// (0x0002f65a) cell_app_pane_t1

0x17c9,	// (0x0002305e) grid_highlight_pane_ParamLimits

0x17c9,	// (0x0002305e) grid_highlight_pane

0x14b3,	// (0x00022d48) cell_highlight_pane_g1

0x14bb,	// (0x00022d50) cell_highlight_pane_g2

0x14c3,	// (0x00022d58) cell_highlight_pane_g3

0x14cb,	// (0x00022d60) cell_highlight_pane_g4

0x14d3,	// (0x00022d68) cell_highlight_pane_g5

0x14db,	// (0x00022d70) cell_highlight_pane_g6

0x14e3,	// (0x00022d78) cell_highlight_pane_g7

0x14eb,	// (0x00022d80) cell_highlight_pane_g8

0x14f3,	// (0x00022d88) cell_highlight_pane_g9

0x0dd8,	// (0x0002266d) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x00030f21) cell_highlight_pane_g

0x17da,	// (0x0002306f) bg_scroll_pane

0x6231,	// (0x00027ac6) scroll_handle_pane

0x1821,	// (0x000230b6) scroll_bg_pane_g1

0x1836,	// (0x000230cb) scroll_bg_pane_g2

0x184e,	// (0x000230e3) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x00030f78) scroll_bg_pane_g

0x1863,	// (0x000230f8) scroll_handle_focus_pane_ParamLimits

0x1863,	// (0x000230f8) scroll_handle_focus_pane

0x1821,	// (0x000230b6) scroll_handle_pane_g1

0x1870,	// (0x00023105) scroll_handle_pane_g2

0x184e,	// (0x000230e3) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x00030f7f) scroll_handle_pane_g

0x1504,	// (0x00022d99) bg_popup_sub_pane_cp21_ParamLimits

0x1504,	// (0x00022d99) bg_popup_sub_pane_cp21

0x1884,	// (0x00023119) popup_fep_japan_predictive_window_t1_ParamLimits

0x1884,	// (0x00023119) popup_fep_japan_predictive_window_t1

0x189b,	// (0x00023130) popup_fep_japan_predictive_window_t2_ParamLimits

0x189b,	// (0x00023130) popup_fep_japan_predictive_window_t2

0x18ce,	// (0x00023163) popup_fep_japan_predictive_window_t3_ParamLimits

0x18ce,	// (0x00023163) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x00030f86) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x00030f86) popup_fep_japan_predictive_window_t

0x0e5a,	// (0x000226ef) bg_popup_sub_pane_cp23

0x1905,	// (0x0002319a) listscroll_japin_cand_pane

0x190d,	// (0x000231a2) popup_fep_japan_candidate_window_t1

0x191b,	// (0x000231b0) candidate_pane_ParamLimits

0x191b,	// (0x000231b0) candidate_pane

0x192e,	// (0x000231c3) scroll_pane_cp30

0x1936,	// (0x000231cb) list_single_popup_jap_candidate_pane_ParamLimits

0x1936,	// (0x000231cb) list_single_popup_jap_candidate_pane

0x0e5a,	// (0x000226ef) list_highlight_pane_cp30

0x194b,	// (0x000231e0) list_single_popup_jap_candidate_pane_t1

0xdddc,	// (0x0002f671) level_1_signal

0xddee,	// (0x0002f683) level_2_signal

0xde01,	// (0x0002f696) level_3_signal

0xde14,	// (0x0002f6a9) level_4_signal

0xde27,	// (0x0002f6bc) level_5_signal

0xde3a,	// (0x0002f6cf) level_6_signal

0xde4d,	// (0x0002f6e2) level_7_signal

0xdddc,	// (0x0002f671) level_1_battery

0xddee,	// (0x0002f683) level_2_battery

0xde01,	// (0x0002f696) level_3_battery

0xde14,	// (0x0002f6a9) level_4_battery

0xde27,	// (0x0002f6bc) level_5_battery

0xde3a,	// (0x0002f6cf) level_6_battery

0xde4d,	// (0x0002f6e2) level_7_battery

0x1972,	// (0x00023207) list_menu_pane_ParamLimits

0x1972,	// (0x00023207) list_menu_pane

0x1988,	// (0x0002321d) scroll_pane_cp25_ParamLimits

0x1988,	// (0x0002321d) scroll_pane_cp25

0xde60,	// (0x0002f6f5) list_double2_graphic_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double2_graphic_pane_cp2

0xde60,	// (0x0002f6f5) list_double2_large_graphic_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double2_large_graphic_pane_cp2

0xde60,	// (0x0002f6f5) list_double2_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double2_pane_cp2

0xde60,	// (0x0002f6f5) list_double_graphic_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double_graphic_pane_cp2

0xde60,	// (0x0002f6f5) list_double_large_graphic_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double_large_graphic_pane_cp2

0xde60,	// (0x0002f6f5) list_double_number_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double_number_pane_cp2

0xde60,	// (0x0002f6f5) list_double_pane_cp2_ParamLimits

0xde60,	// (0x0002f6f5) list_double_pane_cp2

0xde7b,	// (0x0002f710) list_single_2graphic_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_2graphic_pane_cp2

0xde7b,	// (0x0002f710) list_single_graphic_heading_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_graphic_heading_pane_cp2

0xde7b,	// (0x0002f710) list_single_graphic_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_graphic_pane_cp2

0xde7b,	// (0x0002f710) list_single_heading_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_heading_pane_cp2

0xde8c,	// (0x0002f721) list_single_large_graphic_pane_cp2_ParamLimits

0xde8c,	// (0x0002f721) list_single_large_graphic_pane_cp2

0xde7b,	// (0x0002f710) list_single_number_heading_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_number_heading_pane_cp2

0xde7b,	// (0x0002f710) list_single_number_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_number_pane_cp2

0xde7b,	// (0x0002f710) list_single_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_pane_cp2

0x19aa,	// (0x0002323f) bg_popup_sub_pane_cp22

0x63d3,	// (0x00027c68) popup_side_volume_key_window_g1

0x63f7,	// (0x00027c8c) popup_side_volume_key_window_t1

0x6413,	// (0x00027ca8) volume_small_pane_cp1

0x0ea8,	// (0x0002273d) bg_popup_sub_pane_cp24_ParamLimits

0x0ea8,	// (0x0002273d) bg_popup_sub_pane_cp24

0x19c0,	// (0x00023255) fep_china_uni_candidate_pane_ParamLimits

0x19c0,	// (0x00023255) fep_china_uni_candidate_pane

0x19d4,	// (0x00023269) fep_china_uni_entry_pane

0x19e4,	// (0x00023279) popup_fep_china_uni_window_g1

0x1a00,	// (0x00023295) fep_china_uni_entry_pane_g1

0x1a08,	// (0x0002329d) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x00030fb7) fep_china_uni_entry_pane_g

0x1a10,	// (0x000232a5) fep_entry_item_pane

0x1a1a,	// (0x000232af) fep_candidate_item_pane

0x1a22,	// (0x000232b7) fep_china_uni_candidate_pane_g1

0x1a2a,	// (0x000232bf) fep_china_uni_candidate_pane_g2

0x1a32,	// (0x000232c7) fep_china_uni_candidate_pane_g3

0x1a3a,	// (0x000232cf) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x00030fbc) fep_china_uni_candidate_pane_g

0x0dd8,	// (0x0002266d) fep_entry_item_pane_g1

0x1a42,	// (0x000232d7) fep_entry_item_pane_t1_ParamLimits

0x1a42,	// (0x000232d7) fep_entry_item_pane_t1

0x1a58,	// (0x000232ed) fep_candidate_item_pane_t1_ParamLimits

0x1a58,	// (0x000232ed) fep_candidate_item_pane_t1

0x1a6d,	// (0x00023302) fep_candidate_item_pane_t2_ParamLimits

0x1a6d,	// (0x00023302) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x00030fc5) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x00030fc5) fep_candidate_item_pane_t

0x0ebe,	// (0x00022753) list_highlight_pane_cp31_ParamLimits

0x0ebe,	// (0x00022753) list_highlight_pane_cp31

0x1a7f,	// (0x00023314) level_1_signal_lsc

0x1a88,	// (0x0002331d) level_2_signal_lsc

0x1a91,	// (0x00023326) level_3_signal_lsc

0x1a9a,	// (0x0002332f) level_4_signal_lsc

0x1aa3,	// (0x00023338) level_5_signal_lsc

0x1aac,	// (0x00023341) level_6_signal_lsc

0x1ab5,	// (0x0002334a) level_7_signal_lsc

0x1ab5,	// (0x0002334a) level_1_battery_lsc

0x1abe,	// (0x00023353) level_2_battery_lsc

0x1ac7,	// (0x0002335c) level_3_battery_lsc

0x1ad0,	// (0x00023365) level_4_battery_lsc

0x1ad9,	// (0x0002336e) level_5_battery_lsc

0x1ae2,	// (0x00023377) level_6_battery_lsc

0x1a7f,	// (0x00023314) level_7_battery_lsc

0x1aeb,	// (0x00023380) scroll_handle_focus_pane_g1

0x1af4,	// (0x00023389) scroll_handle_focus_pane_g2

0x1afd,	// (0x00023392) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x00030fca) scroll_handle_focus_pane_g

0x95fd,	// (0x0002ae92) list_single_2graphic_pane_g1_ParamLimits

0x95fd,	// (0x0002ae92) list_single_2graphic_pane_g1

0xd387,	// (0x0002ec1c) list_single_2graphic_pane_g2_ParamLimits

0xd387,	// (0x0002ec1c) list_single_2graphic_pane_g2

0x96bd,	// (0x0002af52) list_single_2graphic_pane_g3_ParamLimits

0x96bd,	// (0x0002af52) list_single_2graphic_pane_g3

0xd840,	// (0x0002f0d5) list_single_2graphic_pane_g4_ParamLimits

0xd840,	// (0x0002f0d5) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x00030fd1) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x00030fd1) list_single_2graphic_pane_g

0xd84c,	// (0x0002f0e1) list_single_2graphic_pane_t1_ParamLimits

0xd84c,	// (0x0002f0e1) list_single_2graphic_pane_t1

0xd87a,	// (0x0002f10f) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd87a,	// (0x0002f10f) list_double2_graphic_large_graphic_pane_g1

0xd526,	// (0x0002edbb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xd526,	// (0x0002edbb) list_double2_graphic_large_graphic_pane_g2

0xd537,	// (0x0002edcc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xd537,	// (0x0002edcc) list_double2_graphic_large_graphic_pane_g3

0xd88a,	// (0x0002f11f) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xd88a,	// (0x0002f11f) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x00030fda) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x00030fda) list_double2_graphic_large_graphic_pane_g

0xd896,	// (0x0002f12b) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xd896,	// (0x0002f12b) list_double2_graphic_large_graphic_pane_t1

0xd8ac,	// (0x0002f141) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xd8ac,	// (0x0002f141) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x00030fe3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x00030fe3) list_double2_graphic_large_graphic_pane_t

0x1bd8,	// (0x0002346d) popup_fast_swap_window_ParamLimits

0x1bd8,	// (0x0002346d) popup_fast_swap_window

0x1bf4,	// (0x00023489) popup_side_volume_key_window

0x1c0e,	// (0x000234a3) stacon_top_pane

0x1c18,	// (0x000234ad) status_pane_ParamLimits

0x1c18,	// (0x000234ad) status_pane

0xdf5b,	// (0x0002f7f0) status_small_pane

0x0e5a,	// (0x000226ef) control_pane

0x0e5a,	// (0x000226ef) stacon_bottom_pane

0x13ff,	// (0x00022c94) scroll_pane_cp121

0x1443,	// (0x00022cd8) set_content_pane

0x3313,	// (0x00024ba8) bg_active_tab_pane_g1_cp1

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp1

0x330a,	// (0x00024b9f) bg_active_tab_pane_g3_cp1

0x3313,	// (0x00024ba8) bg_passive_tab_pane_g1_cp1

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp1

0x330a,	// (0x00024b9f) bg_passive_tab_pane_g3_cp1

0xdf11,	// (0x0002f7a6) bg_active_tab_pane_g1_cp2

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp2

0xdf1a,	// (0x0002f7af) bg_active_tab_pane_g3_cp2

0xdf11,	// (0x0002f7a6) bg_passive_tab_pane_g1_cp2

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp2

0xdf1a,	// (0x0002f7af) bg_passive_tab_pane_g3_cp2

0xdf23,	// (0x0002f7b8) bg_active_tab_pane_g1_cp3

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp3

0xdf2c,	// (0x0002f7c1) bg_active_tab_pane_g3_cp3

0xdf23,	// (0x0002f7b8) bg_passive_tab_pane_g1_cp3

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp3

0xdf2c,	// (0x0002f7c1) bg_passive_tab_pane_g3_cp3

0xdf35,	// (0x0002f7ca) bg_active_tab_pane_g1_cp4

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp4

0xdf3e,	// (0x0002f7d3) bg_active_tab_pane_g3_cp4

0xdf35,	// (0x0002f7ca) bg_passive_tab_pane_g1_cp4

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp4

0xdf3e,	// (0x0002f7d3) bg_passive_tab_pane_g3_cp4

0x1b56,	// (0x000233eb) bg_active_tab_pane_g1_cp5

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp5

0x1b4d,	// (0x000233e2) bg_active_tab_pane_g3_cp5

0x1b56,	// (0x000233eb) bg_passive_tab_pane_g1_cp5

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp5

0x1b4d,	// (0x000233e2) bg_passive_tab_pane_g3_cp5

0xdf47,	// (0x0002f7dc) list_set_graphic_pane_ParamLimits

0xdf47,	// (0x0002f7dc) list_set_graphic_pane

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp4

0x1b5f,	// (0x000233f4) list_set_graphic_pane_g1_ParamLimits

0x1b5f,	// (0x000233f4) list_set_graphic_pane_g1

0x1b6b,	// (0x00023400) list_set_graphic_pane_g2_ParamLimits

0x1b6b,	// (0x00023400) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x00030fe8) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x00030fe8) list_set_graphic_pane_g

0x0009,

0xfad1,	// (0x00031366) volume_small_pane_cp_g

0x1b8d,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1b8d,	// (0x00023422) list_double2_large_graphic_pane_g1_cp2

0x1b99,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1b99,	// (0x0002342e) list_double2_large_graphic_pane_g2_cp2

0x1ba8,	// (0x0002343d) list_double2_large_graphic_pane_g3_cp2

0x1bb0,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1bb0,	// (0x00023445) list_double2_large_graphic_pane_t1_cp2

0x1bc6,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1bc6,	// (0x0002345b) list_double2_large_graphic_pane_t2_cp2

0x3081,	// (0x00024916) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x3081,	// (0x00024916) list_double_large_graphic_pane_g1_cp2

0x3092,	// (0x00024927) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x3092,	// (0x00024927) list_double_large_graphic_pane_g2_cp2

0x1cf3,	// (0x00023588) list_double_large_graphic_pane_g3_cp2

0x30a1,	// (0x00024936) list_double_large_graphic_pane_g4_cp

0x30a9,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x30a9,	// (0x0002493e) list_double_large_graphic_pane_t1_cp2

0x30c0,	// (0x00024955) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x30c0,	// (0x00024955) list_double_large_graphic_pane_t2_cp2

0x1c26,	// (0x000234bb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1c26,	// (0x000234bb) list_double2_graphic_pane_g1_cp2

0x1c32,	// (0x000234c7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1c32,	// (0x000234c7) list_double2_graphic_pane_g2_cp2

0x1c41,	// (0x000234d6) list_double2_graphic_pane_g3_cp2

0x1c49,	// (0x000234de) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1c49,	// (0x000234de) list_double2_graphic_pane_t1_cp2

0x1c5f,	// (0x000234f4) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1c5f,	// (0x000234f4) list_double2_graphic_pane_t2_cp2

0x1c71,	// (0x00023506) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_number_heading_pane_g1_cp2

0x1c7d,	// (0x00023512) list_single_number_heading_pane_g2_cp2

0x1c85,	// (0x0002351a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1c85,	// (0x0002351a) list_single_number_heading_pane_t1_cp2

0x1c9b,	// (0x00023530) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1c9b,	// (0x00023530) list_single_number_heading_pane_t2_cp2

0x1cad,	// (0x00023542) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1cad,	// (0x00023542) list_single_number_heading_pane_t3_cp2

0x1c71,	// (0x00023506) list_single_heading_pane_g1_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_heading_pane_g1_cp2

0x1c7d,	// (0x00023512) list_single_heading_pane_g2_cp2

0x1c85,	// (0x0002351a) list_single_heading_pane_t1_cp2_ParamLimits

0x1c85,	// (0x0002351a) list_single_heading_pane_t1_cp2

0x2e8b,	// (0x00024720) list_single_heading_pane_t2_cp2_ParamLimits

0x2e8b,	// (0x00024720) list_single_heading_pane_t2_cp2

0x2e10,	// (0x000246a5) list_double_graphic_pane_g1_cp2_ParamLimits

0x2e10,	// (0x000246a5) list_double_graphic_pane_g1_cp2

0x2e1c,	// (0x000246b1) list_double_graphic_pane_g2_cp2_ParamLimits

0x2e1c,	// (0x000246b1) list_double_graphic_pane_g2_cp2

0x2e2b,	// (0x000246c0) list_double_graphic_pane_g3_cp2

0x2e33,	// (0x000246c8) list_double_graphic_pane_t1_cp2_ParamLimits

0x2e33,	// (0x000246c8) list_double_graphic_pane_t1_cp2

0x2e49,	// (0x000246de) list_double_graphic_pane_t2_cp2_ParamLimits

0x2e49,	// (0x000246de) list_double_graphic_pane_t2_cp2

0x1ce7,	// (0x0002357c) list_double_number_pane_g1_cp2_ParamLimits

0x1ce7,	// (0x0002357c) list_double_number_pane_g1_cp2

0x1cf3,	// (0x00023588) list_double_number_pane_g2_cp2

0x2dd6,	// (0x0002466b) list_double_number_pane_t1_cp2_ParamLimits

0x2dd6,	// (0x0002466b) list_double_number_pane_t1_cp2

0x2de8,	// (0x0002467d) list_double_number_pane_t2_cp2_ParamLimits

0x2de8,	// (0x0002467d) list_double_number_pane_t2_cp2

0x2dfe,	// (0x00024693) list_double_number_pane_t3_cp2_ParamLimits

0x2dfe,	// (0x00024693) list_double_number_pane_t3_cp2

0x2d4e,	// (0x000245e3) list_single_graphic_pane_g1_cp2_ParamLimits

0x2d4e,	// (0x000245e3) list_single_graphic_pane_g1_cp2

0x1c71,	// (0x00023506) list_single_graphic_pane_g2_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_graphic_pane_g2_cp2

0x1c7d,	// (0x00023512) list_single_graphic_pane_g3_cp2

0x2d26,	// (0x000245bb) list_single_graphic_pane_t1_cp2_ParamLimits

0x2d26,	// (0x000245bb) list_single_graphic_pane_t1_cp2

0x1c71,	// (0x00023506) list_single_number_pane_g1_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_number_pane_g1_cp2

0x1c7d,	// (0x00023512) list_single_number_pane_g2_cp2

0x2d26,	// (0x000245bb) list_single_number_pane_t1_cp2_ParamLimits

0x2d26,	// (0x000245bb) list_single_number_pane_t1_cp2

0x2d3c,	// (0x000245d1) list_single_number_pane_t2_cp2_ParamLimits

0x2d3c,	// (0x000245d1) list_single_number_pane_t2_cp2

0x1b99,	// (0x0002342e) list_double2_pane_g1_cp2_ParamLimits

0x1b99,	// (0x0002342e) list_double2_pane_g1_cp2

0x1ba8,	// (0x0002343d) list_double2_pane_g2_cp2

0x1cbf,	// (0x00023554) list_double2_pane_t1_cp2_ParamLimits

0x1cbf,	// (0x00023554) list_double2_pane_t1_cp2

0x1cd5,	// (0x0002356a) list_double2_pane_t2_cp2_ParamLimits

0x1cd5,	// (0x0002356a) list_double2_pane_t2_cp2

0x1ce7,	// (0x0002357c) list_double_pane_g1_cp2_ParamLimits

0x1ce7,	// (0x0002357c) list_double_pane_g1_cp2

0x1cf3,	// (0x00023588) list_double_pane_g2_cp2

0x1cfb,	// (0x00023590) list_double_pane_t1_cp2_ParamLimits

0x1cfb,	// (0x00023590) list_double_pane_t1_cp2

0x1d11,	// (0x000235a6) list_double_pane_t2_cp2_ParamLimits

0x1d11,	// (0x000235a6) list_double_pane_t2_cp2

0x1d39,	// (0x000235ce) list_single_pane_cp2_g3

0x1c71,	// (0x00023506) list_single_pane_g1_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_pane_g1_cp2

0x1c7d,	// (0x00023512) list_single_pane_g2_cp2

0x1d49,	// (0x000235de) list_single_pane_t1_cp2_ParamLimits

0x1d49,	// (0x000235de) list_single_pane_t1_cp2

0x1d61,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x1d61,	// (0x000235f6) list_single_large_graphic_pane_g1_cp2

0x1d6d,	// (0x00023602) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x1d6d,	// (0x00023602) list_single_large_graphic_pane_g2_cp2

0x1d79,	// (0x0002360e) list_single_large_graphic_pane_g3_cp2

0x1d81,	// (0x00023616) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x1d81,	// (0x00023616) list_single_large_graphic_pane_g4_cp1

0x1d9b,	// (0x00023630) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x1d9b,	// (0x00023630) list_single_large_graphic_pane_t1_cp2

0x2d08,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2d08,	// (0x0002459d) list_single_graphic_heading_pane_g1_cp2

0x2ce3,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x2ce3,	// (0x00024578) list_single_graphic_heading_pane_g4_cp2

0x1c7d,	// (0x00023512) list_single_graphic_heading_pane_g5_cp2

0x1c85,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x1c85,	// (0x0002351a) list_single_graphic_heading_pane_t1_cp2

0x2d14,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2d14,	// (0x000245a9) list_single_graphic_heading_pane_t2_cp2

0x2cd7,	// (0x0002456c) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2cd7,	// (0x0002456c) list_single_2graphic_pane_g1_cp2

0x2ce3,	// (0x00024578) list_single_2graphic_pane_g2_cp2_ParamLimits

0x2ce3,	// (0x00024578) list_single_2graphic_pane_g2_cp2

0x1c7d,	// (0x00023512) list_single_2graphic_pane_g3_cp2

0x21fa,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x21fa,	// (0x00023a8f) list_single_2graphic_pane_g4_cp2

0x2cf2,	// (0x00024587) list_single_2graphic_pane_t1_cp2_ParamLimits

0x2cf2,	// (0x00024587) list_single_2graphic_pane_t1_cp2

0x0dd8,	// (0x0002266d) list_highlight_pane_g10_cp1

0x28e9,	// (0x0002417e) list_highlight_pane_g1_cp1

0x28f1,	// (0x00024186) list_highlight_pane_g2_cp1

0x28f9,	// (0x0002418e) list_highlight_pane_g3_cp1

0x2901,	// (0x00024196) list_highlight_pane_g4_cp1

0x2909,	// (0x0002419e) list_highlight_pane_g5_cp1

0x2911,	// (0x000241a6) list_highlight_pane_g6_cp1

0x2919,	// (0x000241ae) list_highlight_pane_g7_cp1

0x2921,	// (0x000241b6) list_highlight_pane_g8_cp1

0x2929,	// (0x000241be) list_highlight_pane_g9_cp1

0xe4b6,	// (0x0002fd4b) form_field_slider_pane_t3

0xe4c4,	// (0x0002fd59) form_field_slider_pane_t4

0x2833,	// (0x000240c8) slider_form_pane_ParamLimits

0x2833,	// (0x000240c8) slider_form_pane

0x0e5a,	// (0x000226ef) control_abbreviations

0x0e5a,	// (0x000226ef) control_conventions

0x0e5a,	// (0x000226ef) control_definitions

0x0e5a,	// (0x000226ef) format_table_attribute

0x2ed5,	// (0x0002476a) bg_popup_preview_window_pane_g9

0x0e5a,	// (0x000226ef) format_table_data2

0x0e5a,	// (0x000226ef) format_table_data3

0x0e5a,	// (0x000226ef) format_table_data_example

0x0008,

0x0e5a,	// (0x000226ef) intro_purpose

0xf8e3,	// (0x00031178) bg_popup_preview_window_pane_g

0x0e5a,	// (0x000226ef) texts_category

0x0e5a,	// (0x000226ef) texts_graphics

0x1db1,	// (0x00023646) text_digital

0x1dc0,	// (0x00023655) text_primary

0x1dcf,	// (0x00023664) text_primary_small

0x1dde,	// (0x00023673) text_secondary

0x1ded,	// (0x00023682) text_title

0x33c2,	// (0x00024c57) bg_passive_tab_pane_g1_cp3_srt

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp3_srt

0x33b9,	// (0x00024c4e) bg_passive_tab_pane_g3_cp3_srt

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp3_srt_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp3_srt

0x32f2,	// (0x00024b87) tabs_4_active_pane_srt_g1

0xd238,	// (0x0002eacd) tabs_4_active_pane_srt_t1_ParamLimits

0xd238,	// (0x0002eacd) tabs_4_active_pane_srt_t1

0x33c2,	// (0x00024c57) bg_active_tab_pane_g1_cp3_copy1

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp3_copy1

0x33b9,	// (0x00024c4e) bg_active_tab_pane_g3_cp3_copy1

0x0ebe,	// (0x00022753) tabs_2_long_active_pane_srt_ParamLimits

0x0ebe,	// (0x00022753) tabs_2_long_active_pane_srt

0x0ebe,	// (0x00022753) tabs_2_long_passive_pane_srt_ParamLimits

0x0ebe,	// (0x00022753) tabs_2_long_passive_pane_srt

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp4_srt_ParamLimits

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp4_srt

0x328d,	// (0x00024b22) bg_passive_tab_pane_g1_cp4_srt

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp4_srt

0x3284,	// (0x00024b19) bg_passive_tab_pane_g3_cp4_srt

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp4_srt_ParamLimits

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp4_srt

0xdcf6,	// (0x0002f58b) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdcf6,	// (0x0002f58b) tabs_2_long_active_pane_srt_t1

0x328d,	// (0x00024b22) bg_active_tab_pane_g1_cp4_srt

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp4_srt

0x3284,	// (0x00024b19) bg_active_tab_pane_g3_cp4_srt

0x0ea8,	// (0x0002273d) tabs_3_long_active_pane_srt_ParamLimits

0x0ea8,	// (0x0002273d) tabs_3_long_active_pane_srt

0x0ea8,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x0ea8,	// (0x0002273d) tabs_3_long_passive_pane_cp_srt

0x0ea8,	// (0x0002273d) tabs_3_long_passive_pane_srt_ParamLimits

0x0ea8,	// (0x0002273d) tabs_3_long_passive_pane_srt

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp5_srt_ParamLimits

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp5_srt

0x1b56,	// (0x000233eb) bg_passive_tab_pane_g1_cp5_srt

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp5_srt

0x1b4d,	// (0x000233e2) bg_passive_tab_pane_g3_cp5_srt

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp5_srt_ParamLimits

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp5_srt

0xdd0d,	// (0x0002f5a2) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdd0d,	// (0x0002f5a2) tabs_3_long_active_pane_srt_t1

0x1b56,	// (0x000233eb) bg_active_tab_pane_g1_cp5_srt

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp5_srt

0x1b4d,	// (0x000233e2) bg_active_tab_pane_g3_cp5_srt

0x3276,	// (0x00024b0b) navi_text_pane_srt_t1

0x326e,	// (0x00024b03) navi_icon_pane_srt_g1

0x1f05,	// (0x0002379a) midp_editing_number_pane_srt

0x1dfc,	// (0x00023691) midp_ticker_pane_srt

0x1f0d,	// (0x000237a2) midp_ticker_pane_srt_g1

0x1f15,	// (0x000237aa) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x00031007) midp_ticker_pane_srt_g

0x1f1d,	// (0x000237b2) midp_ticker_pane_srt_t1

0x325f,	// (0x00024af4) midp_editing_number_pane_t1_copy1

0xdf64,	// (0x0002f7f9) listscroll_midp_pane

0xdf64,	// (0x0002f7f9) midp_form_pane

0x1e04,	// (0x00023699) midp_info_popup_window_ParamLimits

0x1e04,	// (0x00023699) midp_info_popup_window

0x1504,	// (0x00022d99) bg_popup_sub_pane_cp50_ParamLimits

0x1504,	// (0x00022d99) bg_popup_sub_pane_cp50

0x2550,	// (0x00023de5) listscroll_midp_info_pane_ParamLimits

0x2550,	// (0x00023de5) listscroll_midp_info_pane

0x2538,	// (0x00023dcd) listscroll_form_midp_pane_ParamLimits

0x2538,	// (0x00023dcd) listscroll_form_midp_pane

0x2544,	// (0x00023dd9) scroll_bar_cp050

0xe4aa,	// (0x0002fd3f) list_midp_pane

0x3b9b,	// (0x00025430) signal_pane_g2_cp

0x246a,	// (0x00023cff) listscroll_midp_info_pane_t1_ParamLimits

0x246a,	// (0x00023cff) listscroll_midp_info_pane_t1

0x2482,	// (0x00023d17) listscroll_midp_info_pane_t2_ParamLimits

0x2482,	// (0x00023d17) listscroll_midp_info_pane_t2

0x24c0,	// (0x00023d55) listscroll_midp_info_pane_t3_ParamLimits

0x24c0,	// (0x00023d55) listscroll_midp_info_pane_t3

0x24fa,	// (0x00023d8f) listscroll_midp_info_pane_t4_ParamLimits

0x24fa,	// (0x00023d8f) listscroll_midp_info_pane_t4

0x0003,

0xf81e,	// (0x000310b3) listscroll_midp_info_pane_t_ParamLimits

0xf81e,	// (0x000310b3) listscroll_midp_info_pane_t

0x15a7,	// (0x00022e3c) scroll_pane_cp21

0x240e,	// (0x00023ca3) form_midp_field_choice_group_pane

0x2417,	// (0x00023cac) form_midp_field_text_pane

0x2450,	// (0x00023ce5) form_midp_field_time_pane

0x2458,	// (0x00023ced) form_midp_gauge_slider_pane

0x2461,	// (0x00023cf6) form_midp_gauge_wait_pane

0x0e5a,	// (0x000226ef) form_midp_image_pane

0xd8db,	// (0x0002f170) list_single_midp_pane_ParamLimits

0xd8db,	// (0x0002f170) list_single_midp_pane

0x23dc,	// (0x00023c71) form_midp_field_text_pane_t1

0x2232,	// (0x00023ac7) input_focus_pane_cp050

0x23fd,	// (0x00023c92) list_midp_form_text_pane

0x23ab,	// (0x00023c40) form_midp_field_choice_group_pane_t1

0x23b9,	// (0x00023c4e) input_focus_pane_cp051

0x23cd,	// (0x00023c62) list_midp_choice_pane

0x0e5a,	// (0x000226ef) status_idle_pane

0x238f,	// (0x00023c24) form_midp_field_time_pane_t1

0x0dd8,	// (0x0002266d) wait_anim_pane_g2_copy1

0x239d,	// (0x00023c32) form_midp_field_time_pane_t2

0x0001,

0x1e6f,	// (0x00023704) aid_navinavi_width_2_pane

0xf819,	// (0x000310ae) form_midp_field_time_pane_t

0x0e5a,	// (0x000226ef) input_focus_pane_cp052

0x0e5a,	// (0x000226ef) bg_input_focus_pane_cp040

0x236b,	// (0x00023c00) form_midp_gauge_slider_pane_t1

0x2379,	// (0x00023c0e) form_midp_gauge_slider_pane_t2

0xe48e,	// (0x0002fd23) form_midp_gauge_slider_pane_t3

0xe49c,	// (0x0002fd31) form_midp_gauge_slider_pane_t4

0x0003,

0xf810,	// (0x000310a5) form_midp_gauge_slider_pane_t

0x2387,	// (0x00023c1c) form_midp_slider_pane

0x0ebe,	// (0x00022753) bg_input_focus_pane_cp041_ParamLimits

0x0ebe,	// (0x00022753) bg_input_focus_pane_cp041

0x233b,	// (0x00023bd0) form_midp_gauge_wait_pane_t1_ParamLimits

0x233b,	// (0x00023bd0) form_midp_gauge_wait_pane_t1

0x234d,	// (0x00023be2) form_midp_gauge_wait_pane_t2_ParamLimits

0x234d,	// (0x00023be2) form_midp_gauge_wait_pane_t2

0x0001,

0xf80b,	// (0x000310a0) form_midp_gauge_wait_pane_t_ParamLimits

0xf80b,	// (0x000310a0) form_midp_gauge_wait_pane_t

0x235f,	// (0x00023bf4) form_midp_wait_pane_ParamLimits

0x235f,	// (0x00023bf4) form_midp_wait_pane

0x2305,	// (0x00023b9a) form_midp_image_pane_g1

0x230e,	// (0x00023ba3) form_midp_image_pane_t1

0x231d,	// (0x00023bb2) form_midp_image_pane_t2

0x232c,	// (0x00023bc1) form_midp_image_pane_t3

0x0002,

0xf804,	// (0x00031099) form_midp_image_pane_t

0x22fc,	// (0x00023b91) list_single_midp_pane_g1

0x9773,	// (0x0002b008) list_single_midp_pane_t1

0x22e8,	// (0x00023b7d) list_midp_form_item_pane_ParamLimits

0x22e8,	// (0x00023b7d) list_midp_form_item_pane

0x1e17,	// (0x000236ac) list_midp_form_item_pane_t1

0x1e26,	// (0x000236bb) midp_ticker_pane_g1

0x1e32,	// (0x000236c7) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x00030fed) midp_ticker_pane_g

0x1e3e,	// (0x000236d3) midp_ticker_pane_t1

0x325f,	// (0x00024af4) midp_editing_number_pane_t1

0x3352,	// (0x00024be7) midp_editing_number_pane

0x335e,	// (0x00024bf3) midp_ticker_pane

0x324f,	// (0x00024ae4) ai_message_heading_pane

0x0e5a,	// (0x000226ef) bg_popup_window_pane_cp14

0x3257,	// (0x00024aec) listscroll_ai_message_pane

0x31d9,	// (0x00024a6e) ai_message_heading_pane_g1_ParamLimits

0x31d9,	// (0x00024a6e) ai_message_heading_pane_g1

0x31e5,	// (0x00024a7a) ai_message_heading_pane_g2_ParamLimits

0x31e5,	// (0x00024a7a) ai_message_heading_pane_g2

0x31f1,	// (0x00024a86) ai_message_heading_pane_g3_ParamLimits

0x31f1,	// (0x00024a86) ai_message_heading_pane_g3

0x31fd,	// (0x00024a92) ai_message_heading_pane_g4_ParamLimits

0x31fd,	// (0x00024a92) ai_message_heading_pane_g4

0x0003,

0xf945,	// (0x000311da) ai_message_heading_pane_g_ParamLimits

0xf945,	// (0x000311da) ai_message_heading_pane_g

0x3209,	// (0x00024a9e) ai_message_heading_pane_t1_ParamLimits

0x3209,	// (0x00024a9e) ai_message_heading_pane_t1

0x3223,	// (0x00024ab8) ai_message_heading_pane_t2_ParamLimits

0x3223,	// (0x00024ab8) ai_message_heading_pane_t2

0x0001,

0xf94e,	// (0x000311e3) ai_message_heading_pane_t_ParamLimits

0xf94e,	// (0x000311e3) ai_message_heading_pane_t

0x3235,	// (0x00024aca) bg_popup_heading_pane_cp1_ParamLimits

0x3235,	// (0x00024aca) bg_popup_heading_pane_cp1

0x31c7,	// (0x00024a5c) list_ai_message_pane_ParamLimits

0x31c7,	// (0x00024a5c) list_ai_message_pane

0x15a7,	// (0x00022e3c) scroll_pane_cp10

0x3163,	// (0x000249f8) list_ai_message_pane_g1

0x316b,	// (0x00024a00) list_ai_message_pane_g2

0x0001,

0xf922,	// (0x000311b7) list_ai_message_pane_g

0x3173,	// (0x00024a08) list_ai_message_pane_t1_ParamLimits

0x3173,	// (0x00024a08) list_ai_message_pane_t1

0x3188,	// (0x00024a1d) list_ai_message_pane_t2_ParamLimits

0x3188,	// (0x00024a1d) list_ai_message_pane_t2

0x319d,	// (0x00024a32) list_ai_message_pane_t3_ParamLimits

0x319d,	// (0x00024a32) list_ai_message_pane_t3

0x31b2,	// (0x00024a47) list_ai_message_pane_t4_ParamLimits

0x31b2,	// (0x00024a47) list_ai_message_pane_t4

0x0003,

0xf927,	// (0x000311bc) list_ai_message_pane_t_ParamLimits

0xf927,	// (0x000311bc) list_ai_message_pane_t

0x3151,	// (0x000249e6) cell_ai_soft_ind_pane_ParamLimits

0x3151,	// (0x000249e6) cell_ai_soft_ind_pane

0x1e50,	// (0x000236e5) cell_ai_soft_ind_pane_g1_ParamLimits

0x1e50,	// (0x000236e5) cell_ai_soft_ind_pane_g1

0x0e5a,	// (0x000226ef) grid_highlight_cp1

0x1e5d,	// (0x000236f2) text_secondary_cp56_ParamLimits

0x1e5d,	// (0x000236f2) text_secondary_cp56

0x3126,	// (0x000249bb) example_general_pane_ParamLimits

0x3126,	// (0x000249bb) example_general_pane

0x3132,	// (0x000249c7) example_parent_pane_g1_ParamLimits

0x3132,	// (0x000249c7) example_parent_pane_g1

0x313e,	// (0x000249d3) example_parent_pane_t1_ParamLimits

0x313e,	// (0x000249d3) example_parent_pane_t1

0xc697,	// (0x0002df2c) popup_preview_text_window_ParamLimits

0xc697,	// (0x0002df2c) popup_preview_text_window

0x1d41,	// (0x000235d6) list_single_pane_cp2_g4

0x10bf,	// (0x00022954) bg_popup_preview_window_pane_ParamLimits

0x10bf,	// (0x00022954) bg_popup_preview_window_pane

0x2edd,	// (0x00024772) popup_preview_text_window_t1_ParamLimits

0x2edd,	// (0x00024772) popup_preview_text_window_t1

0x2efb,	// (0x00024790) popup_preview_text_window_t2_ParamLimits

0x2efb,	// (0x00024790) popup_preview_text_window_t2

0x2f44,	// (0x000247d9) popup_preview_text_window_t3_ParamLimits

0x2f44,	// (0x000247d9) popup_preview_text_window_t3

0x2f89,	// (0x0002481e) popup_preview_text_window_t4_ParamLimits

0x2f89,	// (0x0002481e) popup_preview_text_window_t4

0x0004,

0xf8f6,	// (0x0003118b) popup_preview_text_window_t_ParamLimits

0xf8f6,	// (0x0003118b) popup_preview_text_window_t

0x3007,	// (0x0002489c) scroll_pane_cp11

0x2188,	// (0x00023a1d) bg_popup_preview_window_pane_g1

0x2e9d,	// (0x00024732) bg_popup_preview_window_pane_g2

0x2ea5,	// (0x0002473a) bg_popup_preview_window_pane_g3

0x2ead,	// (0x00024742) bg_popup_preview_window_pane_g4

0x2eb5,	// (0x0002474a) bg_popup_preview_window_pane_g5

0x2ebd,	// (0x00024752) bg_popup_preview_window_pane_g6

0x2ec5,	// (0x0002475a) bg_popup_preview_window_pane_g7

0x2ecd,	// (0x00024762) bg_popup_preview_window_pane_g8

0x59db,	// (0x00027270) aid_popup_width_pane

0xc619,	// (0x0002deae) popup_midp_note_alarm_window_ParamLimits

0xc619,	// (0x0002deae) popup_midp_note_alarm_window

0x144c,	// (0x00022ce1) data_form_pane_ParamLimits

0xd760,	// (0x0002eff5) form_field_data_pane_g1

0xdcbc,	// (0x0002f551) form_field_data_pane_t1_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_ParamLimits

0x1466,	// (0x00022cfb) data_form_wide_pane_ParamLimits

0x949e,	// (0x0002ad33) form_field_data_wide_pane_g1

0x94aa,	// (0x0002ad3f) form_field_data_wide_pane_t1_ParamLimits

0x127e,	// (0x00022b13) input_focus_pane_cp6_ParamLimits

0xdcd4,	// (0x0002f569) input_popup_find_pane_g1_ParamLimits

0xdcd4,	// (0x0002f569) input_popup_find_pane_g1

0x6122,	// (0x000279b7) aid_navi_side_left_pane

0x6132,	// (0x000279c7) aid_navi_side_right_pane

0x29ba,	// (0x0002424f) bg_popup_window_pane_cp30_ParamLimits

0x29ba,	// (0x0002424f) bg_popup_window_pane_cp30

0x2a34,	// (0x000242c9) popup_midp_note_alarm_window_g1_ParamLimits

0x2a34,	// (0x000242c9) popup_midp_note_alarm_window_g1

0x2a64,	// (0x000242f9) popup_midp_note_alarm_window_t1_ParamLimits

0x2a64,	// (0x000242f9) popup_midp_note_alarm_window_t1

0x2b05,	// (0x0002439a) popup_midp_note_alarm_window_t2_ParamLimits

0x2b05,	// (0x0002439a) popup_midp_note_alarm_window_t2

0x2bb3,	// (0x00024448) popup_midp_note_alarm_window_t3_ParamLimits

0x2bb3,	// (0x00024448) popup_midp_note_alarm_window_t3

0x2bdb,	// (0x00024470) popup_midp_note_alarm_window_t4_ParamLimits

0x2bdb,	// (0x00024470) popup_midp_note_alarm_window_t4

0x2bfb,	// (0x00024490) popup_midp_note_alarm_window_t5_ParamLimits

0x2bfb,	// (0x00024490) popup_midp_note_alarm_window_t5

0x000a,

0xf893,	// (0x00031128) popup_midp_note_alarm_window_t_ParamLimits

0xf893,	// (0x00031128) popup_midp_note_alarm_window_t

0x2ca7,	// (0x0002453c) wait_bar_pane_cp1_ParamLimits

0x2ca7,	// (0x0002453c) wait_bar_pane_cp1

0x0e5a,	// (0x000226ef) wait_anim_pane_copy1

0x0e5a,	// (0x000226ef) wait_border_pane_copy1

0x2700,	// (0x00023f95) wait_border_pane_g1_copy1

0x94c4,	// (0x0002ad59) form_field_popup_pane_g1

0xd76a,	// (0x0002efff) form_field_popup_pane_t1_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_cp7_ParamLimits

0x144c,	// (0x00022ce1) list_form_pane_ParamLimits

0x94e4,	// (0x0002ad79) form_field_popup_wide_pane_g1

0x94ec,	// (0x0002ad81) form_field_popup_wide_pane_t1_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_cp8_ParamLimits

0x1492,	// (0x00022d27) list_form_wide_pane_ParamLimits

0x33ea,	// (0x00024c7f) aid_size_cell_graphic_pane

0xd7e7,	// (0x0002f07c) data_form_pane_t1_ParamLimits

0xd903,	// (0x0002f198) data_form_wide_pane_t1_ParamLimits

0xe17e,	// (0x0002fa13) bg_status_flat_pane

0xd195,	// (0x0002ea2a) title_pane_t1_ParamLimits

0x0e70,	// (0x00022705) title_pane_t2_ParamLimits

0x0e96,	// (0x0002272b) title_pane_t3_ParamLimits

0xf557,	// (0x00030dec) title_pane_t_ParamLimits

0xdddc,	// (0x0002f671) level_1_signal_ParamLimits

0xddee,	// (0x0002f683) level_2_signal_ParamLimits

0xde01,	// (0x0002f696) level_3_signal_ParamLimits

0xde14,	// (0x0002f6a9) level_4_signal_ParamLimits

0xde27,	// (0x0002f6bc) level_5_signal_ParamLimits

0xde3a,	// (0x0002f6cf) level_6_signal_ParamLimits

0xde4d,	// (0x0002f6e2) level_7_signal_ParamLimits

0xdddc,	// (0x0002f671) level_1_battery_ParamLimits

0xddee,	// (0x0002f683) level_2_battery_ParamLimits

0xde01,	// (0x0002f696) level_3_battery_ParamLimits

0xde14,	// (0x0002f6a9) level_4_battery_ParamLimits

0xde27,	// (0x0002f6bc) level_5_battery_ParamLimits

0xde3a,	// (0x0002f6cf) level_6_battery_ParamLimits

0xde4d,	// (0x0002f6e2) level_7_battery_ParamLimits

0x28e9,	// (0x0002417e) bg_status_flat_pane_g1

0x28f1,	// (0x00024186) bg_status_flat_pane_g2

0x28f9,	// (0x0002418e) bg_status_flat_pane_g3

0x2901,	// (0x00024196) bg_status_flat_pane_g4

0x2909,	// (0x0002419e) bg_status_flat_pane_g5

0x2911,	// (0x000241a6) bg_status_flat_pane_g6

0x2919,	// (0x000241ae) bg_status_flat_pane_g7

0xd222,	// (0x0002eab7) tabs_3_active_pane_t1_ParamLimits

0xd222,	// (0x0002eab7) tabs_3_passive_pane_t1_ParamLimits

0xd238,	// (0x0002eacd) tabs_4_active_pane_t1_ParamLimits

0xd238,	// (0x0002eacd) tabs_4_1_passive_pane_t1_ParamLimits

0xdce0,	// (0x0002f575) tabs_2_active_pane_t1_ParamLimits

0xdce0,	// (0x0002f575) tabs_2_passive_pane_t1_ParamLimits

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp4_ParamLimits

0xdcf6,	// (0x0002f58b) tabs_2_long_active_pane_t1_ParamLimits

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp4_ParamLimits

0x7131,	// (0x000289c6) list_single_midp_graphic_pane_t1_ParamLimits

0x0ebe,	// (0x00022753) bg_active_tab_pane_cp5_ParamLimits

0xdd0d,	// (0x0002f5a2) tabs_3_long_active_pane_t1_ParamLimits

0x15de,	// (0x00022e73) bg_passive_tab_pane_cp5_ParamLimits

0x7131,	// (0x000289c6) list_single_midp_graphic_pane_t1

0xe17e,	// (0x0002fa13) bg_status_flat_pane_ParamLimits

0x2067,	// (0x000238fc) indicator_pane_cp2_ParamLimits

0x2067,	// (0x000238fc) indicator_pane_cp2

0xe2e4,	// (0x0002fb79) navi_pane_srt_ParamLimits

0xe2e4,	// (0x0002fb79) navi_pane_srt

0x208f,	// (0x00023924) popup_clock_digital_analogue_window_cp1

0x0f02,	// (0x00022797) indicator_pane_t1

0x1dfc,	// (0x00023691) copy_highlight_pane

0x1dfc,	// (0x00023691) cursor_graphics_pane

0x1dfc,	// (0x00023691) graphic_within_text_pane

0x1dfc,	// (0x00023691) link_highlight_pane

0x2fca,	// (0x0002485f) popup_preview_text_window_t5_ParamLimits

0x2fca,	// (0x0002485f) popup_preview_text_window_t5

0x1e77,	// (0x0002370c) cursor_digital_pane

0x1e77,	// (0x0002370c) cursor_primary_pane

0x1e88,	// (0x0002371d) cursor_primary_small_pane

0x1e90,	// (0x00023725) cursor_secondary_pane

0x1e98,	// (0x0002372d) cursor_title_pane

0x1e77,	// (0x0002370c) link_highlight_digital_pane

0x1e7f,	// (0x00023714) link_highlight_primary_pane

0x1e88,	// (0x0002371d) link_highlight_primary_small_pane

0x1e90,	// (0x00023725) link_highlight_secondary_pane

0x1e98,	// (0x0002372d) link_highlight_title_pane

0x1e77,	// (0x0002370c) copy_highlight_digital_pane

0x1e77,	// (0x0002370c) copy_highlight_primary_pane

0x1e88,	// (0x0002371d) copy_highlight_primary_small_pane

0x1e90,	// (0x00023725) copy_highlight_secondary_pane

0x1e98,	// (0x0002372d) copy_highlight_title_pane

0x1e90,	// (0x00023725) graphic_text_digital_pane

0x2969,	// (0x000241fe) graphic_text_primary_pane

0x2972,	// (0x00024207) graphic_text_primary_small_pane

0x1e88,	// (0x0002371d) graphic_text_secondary_pane

0x1e77,	// (0x0002370c) graphic_text_title_pane

0xe000,	// (0x0002f895) cursor_primary_pane_g1

0x295b,	// (0x000241f0) cursor_text_primary_t1

0xe4e6,	// (0x0002fd7b) cursor_primary_small_pane_g1

0x294d,	// (0x000241e2) cursor_text_primary_small_t1

0xe4dc,	// (0x0002fd71) cursor_primary_small_pane_g1_copy1

0x293f,	// (0x000241d4) cursor_text_primary_small_t1_copy1

0x2931,	// (0x000241c6) cursor_text_title_t1

0xe4d2,	// (0x0002fd67) cursor_title_pane_g1

0xe000,	// (0x0002f895) cursor_digital_pane_g1

0x1ea0,	// (0x00023735) cursor_text_digital_t1

0x1eae,	// (0x00023743) link_highlight_primary_pane_g1

0x28da,	// (0x0002416f) link_highlight_primary_pane_t1

0x1eae,	// (0x00023743) link_highlight_primary_small_pane_g1

0x1eb6,	// (0x0002374b) link_highlight_primary_small_pane_t1

0x1ec5,	// (0x0002375a) link_highlight_secondary_pane_g1

0x1ecd,	// (0x00023762) link_highlight_secondary_pane_t1

0x283f,	// (0x000240d4) link_highlight_title_pane_g1

0x2856,	// (0x000240eb) link_highlight_title_pane_t1

0x283f,	// (0x000240d4) link_highlight_digital_pane_g1

0x2847,	// (0x000240dc) link_highlight_digital_pane_t1

0x271b,	// (0x00023fb0) copy_highlight_primary_pane_g1

0x2741,	// (0x00023fd6) copy_highlight_primary_pane_t1

0x271b,	// (0x00023fb0) copy_highlight_primary_small_pane_g1

0x2732,	// (0x00023fc7) copy_highlight_primary_small_pane_t1

0x1edc,	// (0x00023771) copy_highlight_secondary_pane_g1

0x1ee4,	// (0x00023779) copy_highlight_secondary_pane_t1

0x271b,	// (0x00023fb0) copy_highlight_title_pane_g1

0x2723,	// (0x00023fb8) copy_highlight_title_pane_t1

0x271b,	// (0x00023fb0) copy_highlight_digital_pane_g1

0x34e5,	// (0x00024d7a) copy_highlight_digital_pane_t1

0x3439,	// (0x00024cce) graphic_text_primary_pane_g1

0x34c9,	// (0x00024d5e) graphic_text_primary_pane_t1

0x34d7,	// (0x00024d6c) graphic_text_primary_pane_t2

0x0001,

0xf9c2,	// (0x00031257) graphic_text_primary_pane_t

0x34a5,	// (0x00024d3a) graphic_text_primary_small_pane_g1

0x34ad,	// (0x00024d42) graphic_text_primary_small_pane_t1

0x34bb,	// (0x00024d50) graphic_text_primary_small_pane_t2

0x0001,

0xf9bd,	// (0x00031252) graphic_text_primary_small_pane_t

0x3481,	// (0x00024d16) graphic_text_secondary_pane_g1

0x3489,	// (0x00024d1e) graphic_text_secondary_pane_t1

0x3497,	// (0x00024d2c) graphic_text_secondary_pane_t2

0x0001,

0xf9b8,	// (0x0003124d) graphic_text_secondary_pane_t

0x345d,	// (0x00024cf2) graphic_text_title_pane_g1

0x3465,	// (0x00024cfa) graphic_text_title_pane_t1

0x3473,	// (0x00024d08) graphic_text_title_pane_t2

0x0001,

0xf9b3,	// (0x00031248) graphic_text_title_pane_t

0x3439,	// (0x00024cce) graphic_text_digital_pane_g1

0x3441,	// (0x00024cd6) graphic_text_digital_pane_t1

0x344f,	// (0x00024ce4) graphic_text_digital_pane_t2

0x0001,

0xf9ae,	// (0x00031243) graphic_text_digital_pane_t

0x0ebe,	// (0x00022753) navi_icon_pane_srt_ParamLimits

0x0ebe,	// (0x00022753) navi_icon_pane_srt

0x0e5a,	// (0x000226ef) navi_midp_pane_srt

0x0e5a,	// (0x000226ef) navi_navi_pane_srt

0x0ebe,	// (0x00022753) navi_text_pane_srt_ParamLimits

0x0ebe,	// (0x00022753) navi_text_pane_srt

0x32bd,	// (0x00024b52) navi_navi_icon_text_pane_srt

0x32d7,	// (0x00024b6c) navi_navi_pane_srt_g1_ParamLimits

0x32d7,	// (0x00024b6c) navi_navi_pane_srt_g1

0x32c5,	// (0x00024b5a) navi_navi_pane_srt_g2_ParamLimits

0x32c5,	// (0x00024b5a) navi_navi_pane_srt_g2

0x0001,

0xf9a9,	// (0x0003123e) navi_navi_pane_srt_g_ParamLimits

0xf9a9,	// (0x0003123e) navi_navi_pane_srt_g

0x32e9,	// (0x00024b7e) navi_navi_tabs_pane_srt

0x32bd,	// (0x00024b52) navi_navi_text_pane_srt

0x32bd,	// (0x00024b52) navi_navi_volume_pane_srt

0x342a,	// (0x00024cbf) navi_navi_text_pane_srt_t1

0x7887,	// (0x0002911c) navi_navi_volume_pane_srt_g1

0x788f,	// (0x00029124) volume_small_pane_srt_ParamLimits

0x788f,	// (0x00029124) volume_small_pane_srt

0x665e,	// (0x00027ef3) volume_small_pane_srt_g1_ParamLimits

0x665e,	// (0x00027ef3) volume_small_pane_srt_g1

0x666e,	// (0x00027f03) volume_small_pane_srt_g2_ParamLimits

0x666e,	// (0x00027f03) volume_small_pane_srt_g2

0x667f,	// (0x00027f14) volume_small_pane_srt_g3_ParamLimits

0x667f,	// (0x00027f14) volume_small_pane_srt_g3

0x6690,	// (0x00027f25) volume_small_pane_srt_g4_ParamLimits

0x6690,	// (0x00027f25) volume_small_pane_srt_g4

0x66a1,	// (0x00027f36) volume_small_pane_srt_g5_ParamLimits

0x66a1,	// (0x00027f36) volume_small_pane_srt_g5

0x66b2,	// (0x00027f47) volume_small_pane_srt_g6_ParamLimits

0x66b2,	// (0x00027f47) volume_small_pane_srt_g6

0x66c3,	// (0x00027f58) volume_small_pane_srt_g7_ParamLimits

0x66c3,	// (0x00027f58) volume_small_pane_srt_g7

0x66d4,	// (0x00027f69) volume_small_pane_srt_g8_ParamLimits

0x66d4,	// (0x00027f69) volume_small_pane_srt_g8

0x66e5,	// (0x00027f7a) volume_small_pane_srt_g9_ParamLimits

0x66e5,	// (0x00027f7a) volume_small_pane_srt_g9

0x66f6,	// (0x00027f8b) volume_small_pane_srt_g10_ParamLimits

0x66f6,	// (0x00027f8b) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x00030ff2) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x00030ff2) volume_small_pane_srt_g

0x1168,	// (0x000229fd) query_popup_data_pane_cp2

0x3410,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x3410,	// (0x00024ca5) navi_navi_icon_text_pane_srt_t1

0x2969,	// (0x000241fe) navi_tabs_2_long_pane_srt

0x2969,	// (0x000241fe) navi_tabs_2_pane_srt

0x2969,	// (0x000241fe) navi_tabs_3_long_pane_srt

0x2969,	// (0x000241fe) navi_tabs_3_pane_srt

0x2969,	// (0x000241fe) navi_tabs_4_pane_srt

0x7867,	// (0x000290fc) tabs_2_active_pane_srt_ParamLimits

0x7867,	// (0x000290fc) tabs_2_active_pane_srt

0x7877,	// (0x0002910c) tabs_2_passive_pane_srt_ParamLimits

0x7877,	// (0x0002910c) tabs_2_passive_pane_srt

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp1_srt

0x3313,	// (0x00024ba8) bg_passive_tab_pane_g1_cp1_srt

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp1_srt

0x330a,	// (0x00024b9f) bg_passive_tab_pane_g3_cp1_srt

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp1_srt_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp1_srt

0x3302,	// (0x00024b97) tabs_2_active_pane_srt_g1

0xdce0,	// (0x0002f575) tabs_2_active_pane_srt_t1_ParamLimits

0xdce0,	// (0x0002f575) tabs_2_active_pane_srt_t1

0x3313,	// (0x00024ba8) bg_active_tab_pane_g1_cp1_srt

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp1_srt

0x330a,	// (0x00024b9f) bg_active_tab_pane_g3_cp1_srt

0x7834,	// (0x000290c9) tabs_3_active_pane_srt_ParamLimits

0x7834,	// (0x000290c9) tabs_3_active_pane_srt

0x7845,	// (0x000290da) tabs_3_passive_pane_cp_srt_ParamLimits

0x7845,	// (0x000290da) tabs_3_passive_pane_cp_srt

0x7856,	// (0x000290eb) tabs_3_passive_pane_srt_ParamLimits

0x7856,	// (0x000290eb) tabs_3_passive_pane_srt

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2232,	// (0x00023ac7) bg_passive_tab_pane_cp2_srt

0x1efc,	// (0x00023791) bg_passive_tab_pane_g1_cp2_srt

0x1b06,	// (0x0002339b) bg_passive_tab_pane_g2_cp2_srt

0x1ef3,	// (0x00023788) bg_passive_tab_pane_g3_cp2_srt

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp2_srt_ParamLimits

0x0ea8,	// (0x0002273d) bg_active_tab_pane_cp2_srt

0x3400,	// (0x00024c95) tabs_3_active_pane_srt_g1

0xd222,	// (0x0002eab7) tabs_3_active_pane_srt_t1_ParamLimits

0xd222,	// (0x0002eab7) tabs_3_active_pane_srt_t1

0x1efc,	// (0x00023791) bg_active_tab_pane_g1_cp2_srt

0x1b06,	// (0x0002339b) bg_active_tab_pane_g2_cp2_srt

0x1ef3,	// (0x00023788) bg_active_tab_pane_g3_cp2_srt

0x77ec,	// (0x00029081) tabs_4_active_pane_srt_ParamLimits

0x77ec,	// (0x00029081) tabs_4_active_pane_srt

0x77fe,	// (0x00029093) tabs_4_passive_pane_cp2_srt_ParamLimits

0x77fe,	// (0x00029093) tabs_4_passive_pane_cp2_srt

0x6903,	// (0x00028198) aid_size_cell_toolbar

0xc389,	// (0x0002dc1e) main_idle_act_pane_ParamLimits

0x6a7e,	// (0x00028313) popup_large_graphic_colour_window_ParamLimits

0xc8e7,	// (0x0002e17c) popup_toolbar_window_ParamLimits

0xc8e7,	// (0x0002e17c) popup_toolbar_window

0x97ed,	// (0x0002b082) list_single_graphic_2heading_pane_ParamLimits

0x97ed,	// (0x0002b082) list_single_graphic_2heading_pane

0x17a3,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane

0x17b5,	// (0x0002304a) aid_size_cell_apps_grid_prt_pane

0x15de,	// (0x00022e73) bg_wml_button_pane_cp1_ParamLimits

0x15de,	// (0x00022e73) bg_wml_button_pane_cp1

0x23dc,	// (0x00023c71) form_midp_field_text_pane_t1_ParamLimits

0x2232,	// (0x00023ac7) input_focus_pane_cp050_ParamLimits

0x23fd,	// (0x00023c92) list_midp_form_text_pane_ParamLimits

0x23b9,	// (0x00023c4e) input_focus_pane_cp051_ParamLimits

0x23cd,	// (0x00023c62) list_midp_choice_pane_ParamLimits

0x22b6,	// (0x00023b4b) list_single_2graphic_pane_cp3_ParamLimits

0x22b6,	// (0x00023b4b) list_single_2graphic_pane_cp3

0x22c9,	// (0x00023b5e) list_single_midp_graphic_pane_ParamLimits

0x22c9,	// (0x00023b5e) list_single_midp_graphic_pane

0x5951,	// (0x000271e6) list_single_graphic_2heading_pane_g1_ParamLimits

0x5951,	// (0x000271e6) list_single_graphic_2heading_pane_g1

0x595d,	// (0x000271f2) list_single_graphic_2heading_pane_g4_ParamLimits

0x595d,	// (0x000271f2) list_single_graphic_2heading_pane_g4

0x5969,	// (0x000271fe) list_single_graphic_2heading_pane_g5_ParamLimits

0x5969,	// (0x000271fe) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x00031045) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x00031045) list_single_graphic_2heading_pane_g

0x5975,	// (0x0002720a) list_single_graphic_2heading_pane_t1_ParamLimits

0x5975,	// (0x0002720a) list_single_graphic_2heading_pane_t1

0x5989,	// (0x0002721e) list_single_graphic_2heading_pane_t2_ParamLimits

0x5989,	// (0x0002721e) list_single_graphic_2heading_pane_t2

0x59a3,	// (0x00027238) list_single_graphic_2heading_pane_t3_ParamLimits

0x59a3,	// (0x00027238) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0003104c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0003104c) list_single_graphic_2heading_pane_t

0x20d2,	// (0x00023967) bg_popup_sub_pane_cp2

0x20f8,	// (0x0002398d) grid_toobar_pane

0x70ad,	// (0x00028942) cell_toolbar_pane_ParamLimits

0x70ad,	// (0x00028942) cell_toolbar_pane

0x212e,	// (0x000239c3) cell_toolbar_pane_g1_ParamLimits

0x212e,	// (0x000239c3) cell_toolbar_pane_g1

0x2140,	// (0x000239d5) cell_toolbar_pane_g2_ParamLimits

0x2140,	// (0x000239d5) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x00031053) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x00031053) cell_toolbar_pane_g

0x2162,	// (0x000239f7) grid_highlight_pane_cp2_ParamLimits

0x2162,	// (0x000239f7) grid_highlight_pane_cp2

0x217c,	// (0x00023a11) toolbar_button_pane

0x2188,	// (0x00023a1d) toolbar_button_pane_g1

0x2198,	// (0x00023a2d) toolbar_button_pane_g2

0x2190,	// (0x00023a25) toolbar_button_pane_g3

0x21a8,	// (0x00023a3d) toolbar_button_pane_g4

0x21a0,	// (0x00023a35) toolbar_button_pane_g5

0x21b0,	// (0x00023a45) toolbar_button_pane_g6

0x21b8,	// (0x00023a4d) toolbar_button_pane_g7

0x21c8,	// (0x00023a5d) toolbar_button_pane_g8

0x21c0,	// (0x00023a55) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x00031058) toolbar_button_pane_g

0x70dc,	// (0x00028971) list_single_2graphic_pane_g1_cp3_ParamLimits

0x70dc,	// (0x00028971) list_single_2graphic_pane_g1_cp3

0xc929,	// (0x0002e1be) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc929,	// (0x0002e1be) list_single_2graphic_pane_g2_cp3

0x70f7,	// (0x0002898c) list_single_2graphic_pane_g3_cp3

0x70ff,	// (0x00028994) list_single_2graphic_pane_g4_cp3_ParamLimits

0x70ff,	// (0x00028994) list_single_2graphic_pane_g4_cp3

0x710b,	// (0x000289a0) list_single_2graphic_pane_t1_cp3_ParamLimits

0x710b,	// (0x000289a0) list_single_2graphic_pane_t1_cp3

0x7125,	// (0x000289ba) list_single_midp_graphic_pane_g2_ParamLimits

0x7125,	// (0x000289ba) list_single_midp_graphic_pane_g2

0x690b,	// (0x000281a0) aid_zoom_text_primary

0x5949,	// (0x000271de) aid_zoom_text_secondary

0xe03a,	// (0x0002f8cf) status_small_pane_g7_ParamLimits

0xe03a,	// (0x0002f8cf) status_small_pane_g7

0xe05d,	// (0x0002f8f2) status_small_pane_t1_ParamLimits

0xd16a,	// (0x0002e9ff) title_pane_g2

0x0003,

0xf54e,	// (0x00030de3) title_pane_g

0xdbe7,	// (0x0002f47c) aid_size_cell_colour_1_pane_ParamLimits

0xdbe7,	// (0x0002f47c) aid_size_cell_colour_1_pane

0xdbfb,	// (0x0002f490) aid_size_cell_colour_2_pane_ParamLimits

0xdbfb,	// (0x0002f490) aid_size_cell_colour_2_pane

0xdc0f,	// (0x0002f4a4) aid_size_cell_colour_3_pane_ParamLimits

0xdc0f,	// (0x0002f4a4) aid_size_cell_colour_3_pane

0xdc23,	// (0x0002f4b8) aid_size_cell_colour_4_pane_ParamLimits

0xdc23,	// (0x0002f4b8) aid_size_cell_colour_4_pane

0x6084,	// (0x00027919) title_pane_stacon_g1_ParamLimits

0x6084,	// (0x00027919) title_pane_stacon_g1

0x2798,	// (0x0002402d) popup_note_wait_window_g3_ParamLimits

0x2798,	// (0x0002402d) popup_note_wait_window_g3

0x280e,	// (0x000240a3) popup_note_wait_window_t5_ParamLimits

0x280e,	// (0x000240a3) popup_note_wait_window_t5

0x0e5a,	// (0x000226ef) main_feb_china_hwr_fs_writing_pane

0xc3ea,	// (0x0002dc7f) popup_feb_china_hwr_fs_window_ParamLimits

0xc3ea,	// (0x0002dc7f) popup_feb_china_hwr_fs_window

0xc93a,	// (0x0002e1cf) aid_size_cell_hwr_fs_ParamLimits

0xc93a,	// (0x0002e1cf) aid_size_cell_hwr_fs

0x2232,	// (0x00023ac7) bg_popup_sub_pane_cp3_ParamLimits

0x2232,	// (0x00023ac7) bg_popup_sub_pane_cp3

0xc94f,	// (0x0002e1e4) grid_hwr_fs_pane_ParamLimits

0xc94f,	// (0x0002e1e4) grid_hwr_fs_pane

0x7170,	// (0x00028a05) linegrid_hwr_fs_pane_ParamLimits

0x7170,	// (0x00028a05) linegrid_hwr_fs_pane

0xc967,	// (0x0002e1fc) cell_hwr_fs_pane_ParamLimits

0xc967,	// (0x0002e1fc) cell_hwr_fs_pane

0x223e,	// (0x00023ad3) linegrid_hwr_fs_pane_g1_ParamLimits

0x223e,	// (0x00023ad3) linegrid_hwr_fs_pane_g1

0xe462,	// (0x0002fcf7) linegrid_hwr_fs_pane_g2_ParamLimits

0xe462,	// (0x0002fcf7) linegrid_hwr_fs_pane_g2

0x224a,	// (0x00023adf) linegrid_hwr_fs_pane_g3_ParamLimits

0x224a,	// (0x00023adf) linegrid_hwr_fs_pane_g3

0x71b0,	// (0x00028a45) linegrid_hwr_fs_pane_g4_ParamLimits

0x71b0,	// (0x00028a45) linegrid_hwr_fs_pane_g4

0x71ca,	// (0x00028a5f) linegrid_hwr_fs_pane_g5_ParamLimits

0x71ca,	// (0x00028a5f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7e9,	// (0x0003107e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7e9,	// (0x0003107e) linegrid_hwr_fs_pane_g

0x2256,	// (0x00023aeb) cell_hwr_fs_pane_g1_ParamLimits

0x2256,	// (0x00023aeb) cell_hwr_fs_pane_g1

0x20a0,	// (0x00023935) cell_hwr_fs_pane_g2_ParamLimits

0x20a0,	// (0x00023935) cell_hwr_fs_pane_g2

0xe474,	// (0x0002fd09) cell_hwr_fs_pane_g3_ParamLimits

0xe474,	// (0x0002fd09) cell_hwr_fs_pane_g3

0xe481,	// (0x0002fd16) cell_hwr_fs_pane_g4_ParamLimits

0xe481,	// (0x0002fd16) cell_hwr_fs_pane_g4

0x0003,

0xf7f4,	// (0x00031089) cell_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x00031089) cell_hwr_fs_pane_g

0xc987,	// (0x0002e21c) cell_hwr_fs_pane_t1

0x0e5a,	// (0x000226ef) grid_highlight_pane_cp6

0x0e5a,	// (0x000226ef) main_idle_act2_pane

0x158e,	// (0x00022e23) aid_inside_area_popup_secondary

0xe506,	// (0x0002fd9b) aid_inside_area_window_primary_ParamLimits

0xe506,	// (0x0002fd9b) aid_inside_area_window_primary

0x34f4,	// (0x00024d89) ai2_news_ticker_pane

0x34fc,	// (0x00024d91) aid_size_cell_ai1_link_ParamLimits

0x34fc,	// (0x00024d91) aid_size_cell_ai1_link

0xe8a3,	// (0x00030138) popup_ai2_data_window_ParamLimits

0xe8a3,	// (0x00030138) popup_ai2_data_window

0x3516,	// (0x00024dab) popup_ai2_link_window_ParamLimits

0x3516,	// (0x00024dab) popup_ai2_link_window

0x2232,	// (0x00023ac7) bg_popup_sub_pane_cp4_ParamLimits

0x2232,	// (0x00023ac7) bg_popup_sub_pane_cp4

0x352a,	// (0x00024dbf) grid_ai2_link_pane_ParamLimits

0x352a,	// (0x00024dbf) grid_ai2_link_pane

0x3541,	// (0x00024dd6) popup_ai2_link_window_g1_ParamLimits

0x3541,	// (0x00024dd6) popup_ai2_link_window_g1

0x354d,	// (0x00024de2) popup_ai2_link_window_g2_ParamLimits

0x354d,	// (0x00024de2) popup_ai2_link_window_g2

0x0001,

0xf9c7,	// (0x0003125c) popup_ai2_link_window_g_ParamLimits

0xf9c7,	// (0x0003125c) popup_ai2_link_window_g

0x355c,	// (0x00024df1) ai2_mp_button_pane

0x3564,	// (0x00024df9) ai2_mp_volume_pane

0x23b9,	// (0x00023c4e) bg_popup_sub_pane_cp5_ParamLimits

0x23b9,	// (0x00023c4e) bg_popup_sub_pane_cp5

0x356c,	// (0x00024e01) heading_ai2_gene_pane_ParamLimits

0x356c,	// (0x00024e01) heading_ai2_gene_pane

0x3578,	// (0x00024e0d) list_ai2_gene_pane_ParamLimits

0x3578,	// (0x00024e0d) list_ai2_gene_pane

0x35c0,	// (0x00024e55) cell_ai2_link_pane_ParamLimits

0x35c0,	// (0x00024e55) cell_ai2_link_pane

0x35d6,	// (0x00024e6b) cell_ai2_link_pane_g1

0x0e5a,	// (0x000226ef) grid_highlight_pane_cp7

0x78eb,	// (0x00029180) ai2_mp_volume_pane_g1

0x3673,	// (0x00024f08) ai2_mp_volume_pane_g2

0xe8cd,	// (0x00030162) list_ai2_gene_pane_t1

0x366b,	// (0x00024f00) ai2_mp_volume_pane_g3

0x0002,

0xf9e0,	// (0x00031275) ai2_mp_volume_pane_g

0x78f3,	// (0x00029188) volume_small_pane_cp3

0x367b,	// (0x00024f10) aid_size_cell_ai2_button

0x3683,	// (0x00024f18) grid_ai2_button_pane

0x368c,	// (0x00024f21) cell_ai2_button_pane_ParamLimits

0x368c,	// (0x00024f21) cell_ai2_button_pane

0x0dd8,	// (0x0002266d) cell_ai2_button_pane_g1

0x0e5a,	// (0x000226ef) grid_highlight_pane_cp8

0x362b,	// (0x00024ec0) ai2_gene_pane_t1_ParamLimits

0x362b,	// (0x00024ec0) ai2_gene_pane_t1

0xc371,	// (0x0002dc06) aid_height_parent_landscape

0xe64f,	// (0x0002fee4) aid_height_set_list

0x32ab,	// (0x00024b40) aid_size_parent

0x33ea,	// (0x00024c7f) aid_size_cell_graphic_pane_ParamLimits

0x3588,	// (0x00024e1d) popup_ai2_data_window_g1_ParamLimits

0x3588,	// (0x00024e1d) popup_ai2_data_window_g1

0x3594,	// (0x00024e29) ai2_news_ticker_pane_g1

0x359c,	// (0x00024e31) ai2_news_ticker_pane_g2

0x0001,

0xf9cc,	// (0x00031261) ai2_news_ticker_pane_g

0x35a4,	// (0x00024e39) ai2_news_ticker_pane_t1

0x35b2,	// (0x00024e47) ai2_news_ticker_pane_t2

0x0001,

0xf9d1,	// (0x00031266) ai2_news_ticker_pane_t

0x33cb,	// (0x00024c60) heading_ai2_gene_pane_g1

0x35df,	// (0x00024e74) heading_ai2_gene_pane_t1_ParamLimits

0x35df,	// (0x00024e74) heading_ai2_gene_pane_t1

0x35f4,	// (0x00024e89) list_highlight_pane_cp6

0xe8b7,	// (0x0003014c) ai2_gene_pane_ParamLimits

0xe8b7,	// (0x0003014c) ai2_gene_pane

0xe8db,	// (0x00030170) list_ai2_gene_pane_t2

0x0001,

0xf9d6,	// (0x0003126b) list_ai2_gene_pane_t

0x35fc,	// (0x00024e91) list_highlight_pane_cp8_ParamLimits

0x35fc,	// (0x00024e91) list_highlight_pane_cp8

0x360d,	// (0x00024ea2) ai2_gene_pane_g1_ParamLimits

0x360d,	// (0x00024ea2) ai2_gene_pane_g1

0x361f,	// (0x00024eb4) ai2_gene_pane_g2_ParamLimits

0x361f,	// (0x00024eb4) ai2_gene_pane_g2

0x0001,

0xf9db,	// (0x00031270) ai2_gene_pane_g_ParamLimits

0xf9db,	// (0x00031270) ai2_gene_pane_g

0x13ff,	// (0x00022c94) scroll_pane_cp12

0xc330,	// (0x0002dbc5) control_pane_t3_ParamLimits

0xc330,	// (0x0002dbc5) control_pane_t3

0xe04e,	// (0x0002f8e3) status_small_pane_g8_ParamLimits

0xe04e,	// (0x0002f8e3) status_small_pane_g8

0xc45e,	// (0x0002dcf3) popup_find_window_ParamLimits

0xc651,	// (0x0002dee6) popup_note_image_window_ParamLimits

0x8f8e,	// (0x0002a823) list_double2_graphic_pane_vc_g1_ParamLimits

0x8f8e,	// (0x0002a823) list_double2_graphic_pane_vc_g1

0x96b1,	// (0x0002af46) list_double2_graphic_pane_vc_g2_ParamLimits

0x96b1,	// (0x0002af46) list_double2_graphic_pane_vc_g2

0x96bd,	// (0x0002af52) list_double2_graphic_pane_vc_g3_ParamLimits

0x96bd,	// (0x0002af52) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00030e56) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00030e56) list_double2_graphic_pane_vc_g

0x96c9,	// (0x0002af5e) list_double2_graphic_pane_vc_t1_ParamLimits

0x96c9,	// (0x0002af5e) list_double2_graphic_pane_vc_t1

0x96b1,	// (0x0002af46) list_single_heading_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_heading_pane_vc_g1

0x96bd,	// (0x0002af52) list_single_heading_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_heading_pane_vc_g

0x96df,	// (0x0002af74) list_single_heading_pane_vc_t1_ParamLimits

0x96df,	// (0x0002af74) list_single_heading_pane_vc_t1

0x96f5,	// (0x0002af8a) list_single_heading_pane_vc_t2_ParamLimits

0x96f5,	// (0x0002af8a) list_single_heading_pane_vc_t2

0x0001,

0xf7d8,	// (0x0003106d) list_single_heading_pane_vc_t_ParamLimits

0xf7d8,	// (0x0003106d) list_single_heading_pane_vc_t

0x9707,	// (0x0002af9c) list_setting_number_pane_vc_g1_ParamLimits

0x9707,	// (0x0002af9c) list_setting_number_pane_vc_g1

0x9713,	// (0x0002afa8) list_setting_number_pane_vc_g2_ParamLimits

0x9713,	// (0x0002afa8) list_setting_number_pane_vc_g2

0x0001,

0xf7dd,	// (0x00031072) list_setting_number_pane_vc_g_ParamLimits

0xf7dd,	// (0x00031072) list_setting_number_pane_vc_g

0x971f,	// (0x0002afb4) list_setting_number_pane_vc_t1_ParamLimits

0x971f,	// (0x0002afb4) list_setting_number_pane_vc_t1

0x9733,	// (0x0002afc8) list_setting_number_pane_vc_t2_ParamLimits

0x9733,	// (0x0002afc8) list_setting_number_pane_vc_t2

0x974f,	// (0x0002afe4) list_setting_number_pane_vc_t3_ParamLimits

0x974f,	// (0x0002afe4) list_setting_number_pane_vc_t3

0x0002,

0xf7e2,	// (0x00031077) list_setting_number_pane_vc_t_ParamLimits

0xf7e2,	// (0x00031077) list_setting_number_pane_vc_t

0x9767,	// (0x0002affc) set_value_pane_vc_ParamLimits

0x9767,	// (0x0002affc) set_value_pane_vc

0x97ed,	// (0x0002b082) list_double2_graphic_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double2_graphic_pane_vc

0x3371,	// (0x00024c06) list_double2_large_graphic_pane_vc_ParamLimits

0x3371,	// (0x00024c06) list_double2_large_graphic_pane_vc

0x97ed,	// (0x0002b082) list_double2_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double2_pane_vc

0x97ed,	// (0x0002b082) list_double_graphic_heading_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_graphic_heading_pane_vc

0x97ed,	// (0x0002b082) list_double_graphic_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_graphic_pane_vc

0x97ed,	// (0x0002b082) list_double_heading_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_heading_pane_vc

0x9801,	// (0x0002b096) list_double_large_graphic_pane_vc_ParamLimits

0x9801,	// (0x0002b096) list_double_large_graphic_pane_vc

0x97ed,	// (0x0002b082) list_double_number_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_number_pane_vc

0x97ed,	// (0x0002b082) list_double_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_pane_vc

0x97ed,	// (0x0002b082) list_double_time_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_double_time_pane_vc

0x97ed,	// (0x0002b082) list_setting_number_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_setting_number_pane_vc

0x97ed,	// (0x0002b082) list_setting_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_setting_pane_vc

0x97ed,	// (0x0002b082) list_single_graphic_heading_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_single_graphic_heading_pane_vc

0x97ed,	// (0x0002b082) list_single_heading_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_single_heading_pane_vc

0x97ed,	// (0x0002b082) list_single_number_heading_pane_vc_ParamLimits

0x97ed,	// (0x0002b082) list_single_number_heading_pane_vc

0x9856,	// (0x0002b0eb) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x9856,	// (0x0002b0eb) list_double_graphic_heading_pane_vc_g1

0x96b1,	// (0x0002af46) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x96b1,	// (0x0002af46) list_double_graphic_heading_pane_vc_g2

0x96bd,	// (0x0002af52) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x96bd,	// (0x0002af52) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9e7,	// (0x0003127c) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9e7,	// (0x0003127c) list_double_graphic_heading_pane_vc_g

0x9862,	// (0x0002b0f7) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x9862,	// (0x0002b0f7) list_double_graphic_heading_pane_vc_t1

0x9878,	// (0x0002b10d) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x9878,	// (0x0002b10d) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x00031283) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x00031283) list_double_graphic_heading_pane_vc_t

0x9707,	// (0x0002af9c) list_setting_pane_vc_g1_ParamLimits

0x9707,	// (0x0002af9c) list_setting_pane_vc_g1

0x9713,	// (0x0002afa8) list_setting_pane_vc_g2_ParamLimits

0x9713,	// (0x0002afa8) list_setting_pane_vc_g2

0x0001,

0xf7dd,	// (0x00031072) list_setting_pane_vc_g_ParamLimits

0xf7dd,	// (0x00031072) list_setting_pane_vc_g

0x9890,	// (0x0002b125) list_setting_pane_vc_t1_ParamLimits

0x9890,	// (0x0002b125) list_setting_pane_vc_t1

0x98a4,	// (0x0002b139) list_setting_pane_vc_t2_ParamLimits

0x98a4,	// (0x0002b139) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x000312c6) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x000312c6) list_setting_pane_vc_t

0x9767,	// (0x0002affc) set_value_pane_cp_vc_ParamLimits

0x9767,	// (0x0002affc) set_value_pane_cp_vc

0x96b1,	// (0x0002af46) list_single_number_heading_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_single_number_heading_pane_vc_g1

0x96bd,	// (0x0002af52) list_single_number_heading_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_single_number_heading_pane_vc_g

0x96df,	// (0x0002af74) list_single_number_heading_pane_vc_t1_ParamLimits

0x96df,	// (0x0002af74) list_single_number_heading_pane_vc_t1

0x98b8,	// (0x0002b14d) list_single_number_heading_pane_vc_t2_ParamLimits

0x98b8,	// (0x0002b14d) list_single_number_heading_pane_vc_t2

0x98ca,	// (0x0002b15f) list_single_number_heading_pane_vc_t3_ParamLimits

0x98ca,	// (0x0002b15f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x000312cb) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x000312cb) list_single_number_heading_pane_vc_t

0x8f8e,	// (0x0002a823) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x8f8e,	// (0x0002a823) list_single_graphic_heading_pane_vc_g1

0x96b1,	// (0x0002af46) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x96b1,	// (0x0002af46) list_single_graphic_heading_pane_vc_g4

0x96bd,	// (0x0002af52) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x96bd,	// (0x0002af52) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x00030e56) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00030e56) list_single_graphic_heading_pane_vc_g

0x96df,	// (0x0002af74) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x96df,	// (0x0002af74) list_single_graphic_heading_pane_vc_t1

0x98dc,	// (0x0002b171) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x98dc,	// (0x0002b171) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x000312d2) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x000312d2) list_single_graphic_heading_pane_vc_t

0x96b1,	// (0x0002af46) list_double2_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_double2_pane_vc_g1

0x96bd,	// (0x0002af52) list_double2_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_double2_pane_vc_g

0x98ee,	// (0x0002b183) list_double2_pane_vc_t1_ParamLimits

0x98ee,	// (0x0002b183) list_double2_pane_vc_t1

0x9904,	// (0x0002b199) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x9904,	// (0x0002b199) list_double2_large_graphic_pane_vc_g1

0x9910,	// (0x0002b1a5) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x9910,	// (0x0002b1a5) list_double2_large_graphic_pane_vc_g2

0x991c,	// (0x0002b1b1) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x991c,	// (0x0002b1b1) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00030e7a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00030e7a) list_double2_large_graphic_pane_vc_g

0x9928,	// (0x0002b1bd) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x9928,	// (0x0002b1bd) list_double2_large_graphic_pane_vc_t1

0x993e,	// (0x0002b1d3) list_double_time_pane_vc_g1_ParamLimits

0x993e,	// (0x0002b1d3) list_double_time_pane_vc_g1

0x994a,	// (0x0002b1df) list_double_time_pane_vc_g2_ParamLimits

0x994a,	// (0x0002b1df) list_double_time_pane_vc_g2

0x0001,

0xfa42,	// (0x000312d7) list_double_time_pane_vc_g_ParamLimits

0xfa42,	// (0x000312d7) list_double_time_pane_vc_g

0x9956,	// (0x0002b1eb) list_double_time_pane_vc_t1_ParamLimits

0x9956,	// (0x0002b1eb) list_double_time_pane_vc_t1

0x9974,	// (0x0002b209) list_double_time_pane_vc_t2_ParamLimits

0x9974,	// (0x0002b209) list_double_time_pane_vc_t2

0x99b8,	// (0x0002b24d) list_double_time_pane_vc_t3_ParamLimits

0x99b8,	// (0x0002b24d) list_double_time_pane_vc_t3

0x99ca,	// (0x0002b25f) list_double_time_pane_vc_t4_ParamLimits

0x99ca,	// (0x0002b25f) list_double_time_pane_vc_t4

0x0003,

0xfa47,	// (0x000312dc) list_double_time_pane_vc_t_ParamLimits

0xfa47,	// (0x000312dc) list_double_time_pane_vc_t

0x96b1,	// (0x0002af46) list_double_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_double_pane_vc_g1

0x96bd,	// (0x0002af52) list_double_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_double_pane_vc_g

0x99dc,	// (0x0002b271) list_double_pane_vc_t1_ParamLimits

0x99dc,	// (0x0002b271) list_double_pane_vc_t1

0x99ee,	// (0x0002b283) list_double_pane_vc_t2_ParamLimits

0x99ee,	// (0x0002b283) list_double_pane_vc_t2

0x0001,

0xfa50,	// (0x000312e5) list_double_pane_vc_t_ParamLimits

0xfa50,	// (0x000312e5) list_double_pane_vc_t

0x96b1,	// (0x0002af46) list_double_number_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_double_number_pane_vc_g1

0x96bd,	// (0x0002af52) list_double_number_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_double_number_pane_vc_g

0x9a04,	// (0x0002b299) list_double_number_pane_vc_t1_ParamLimits

0x9a04,	// (0x0002b299) list_double_number_pane_vc_t1

0x9a18,	// (0x0002b2ad) list_double_number_pane_vc_t2_ParamLimits

0x9a18,	// (0x0002b2ad) list_double_number_pane_vc_t2

0x9a2a,	// (0x0002b2bf) list_double_number_pane_vc_t3_ParamLimits

0x9a2a,	// (0x0002b2bf) list_double_number_pane_vc_t3

0x0002,

0xfa55,	// (0x000312ea) list_double_number_pane_vc_t_ParamLimits

0xfa55,	// (0x000312ea) list_double_number_pane_vc_t

0x9a40,	// (0x0002b2d5) list_double_large_graphic_pane_vc_g1_ParamLimits

0x9a40,	// (0x0002b2d5) list_double_large_graphic_pane_vc_g1

0x9a4c,	// (0x0002b2e1) list_double_large_graphic_pane_vc_g2_ParamLimits

0x9a4c,	// (0x0002b2e1) list_double_large_graphic_pane_vc_g2

0x9a5d,	// (0x0002b2f2) list_double_large_graphic_pane_vc_g3_ParamLimits

0x9a5d,	// (0x0002b2f2) list_double_large_graphic_pane_vc_g3

0x9a69,	// (0x0002b2fe) list_double_large_graphic_pane_vc_g4_ParamLimits

0x9a69,	// (0x0002b2fe) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5c,	// (0x000312f1) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5c,	// (0x000312f1) list_double_large_graphic_pane_vc_g

0x9a75,	// (0x0002b30a) list_double_large_graphic_pane_vc_t1_ParamLimits

0x9a75,	// (0x0002b30a) list_double_large_graphic_pane_vc_t1

0x9a87,	// (0x0002b31c) list_double_large_graphic_pane_vc_t2_ParamLimits

0x9a87,	// (0x0002b31c) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa65,	// (0x000312fa) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa65,	// (0x000312fa) list_double_large_graphic_pane_vc_t

0x96b1,	// (0x0002af46) list_double_heading_pane_vc_g1_ParamLimits

0x96b1,	// (0x0002af46) list_double_heading_pane_vc_g1

0x96bd,	// (0x0002af52) list_double_heading_pane_vc_g2_ParamLimits

0x96bd,	// (0x0002af52) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00030e5d) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00030e5d) list_double_heading_pane_vc_g

0x9aa1,	// (0x0002b336) list_double_heading_pane_vc_t1_ParamLimits

0x9aa1,	// (0x0002b336) list_double_heading_pane_vc_t1

0x96df,	// (0x0002af74) list_double_heading_pane_vc_t2_ParamLimits

0x96df,	// (0x0002af74) list_double_heading_pane_vc_t2

0x0001,

0xfa6a,	// (0x000312ff) list_double_heading_pane_vc_t_ParamLimits

0xfa6a,	// (0x000312ff) list_double_heading_pane_vc_t

0x9ab3,	// (0x0002b348) list_double_graphic_pane_vc_g1_ParamLimits

0x9ab3,	// (0x0002b348) list_double_graphic_pane_vc_g1

0x9ac6,	// (0x0002b35b) list_double_graphic_pane_vc_g2_ParamLimits

0x9ac6,	// (0x0002b35b) list_double_graphic_pane_vc_g2

0x96b1,	// (0x0002af46) list_double_graphic_pane_vc_g3_ParamLimits

0x96b1,	// (0x0002af46) list_double_graphic_pane_vc_g3

0x0003,

0xfa6f,	// (0x00031304) list_double_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00031304) list_double_graphic_pane_vc_g

0x9ae3,	// (0x0002b378) list_double_graphic_pane_vc_t1_ParamLimits

0x9ae3,	// (0x0002b378) list_double_graphic_pane_vc_t1

0x9b01,	// (0x0002b396) list_double_graphic_pane_vc_t2_ParamLimits

0x9b01,	// (0x0002b396) list_double_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x0003130d) list_double_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x0003130d) list_double_graphic_pane_vc_t

0x59e3,	// (0x00027278) aid_size_cell_fastswap

0xc095,	// (0x0002d92a) aid_size_cell_touch_ParamLimits

0xc095,	// (0x0002d92a) aid_size_cell_touch

0x5b9f,	// (0x00027434) popup_fast_swap_wide_window_ParamLimits

0x5b9f,	// (0x00027434) popup_fast_swap_wide_window

0xc18d,	// (0x0002da22) touch_pane_ParamLimits

0xc18d,	// (0x0002da22) touch_pane

0x93fa,	// (0x0002ac8f) button_value_adjust_pane_cp2

0x32fa,	// (0x00024b8f) button_value_adjust_pane_cp4

0x941a,	// (0x0002acaf) form_field_data_pane_cp2

0xd727,	// (0x0002efbc) form_field_data_wide_pane_cp2

0x17da,	// (0x0002306f) bg_scroll_pane_ParamLimits

0x6231,	// (0x00027ac6) scroll_handle_pane_ParamLimits

0x6245,	// (0x00027ada) scroll_sc2_down_pane_ParamLimits

0x6245,	// (0x00027ada) scroll_sc2_down_pane

0x180b,	// (0x000230a0) scroll_sc2_up_pane_ParamLimits

0x180b,	// (0x000230a0) scroll_sc2_up_pane

0xe9f1,	// (0x00030286) grid_wheel_folder_pane_g1_ParamLimits

0xe9f1,	// (0x00030286) grid_wheel_folder_pane_g1

0x6534,	// (0x00027dc9) clock_nsta_pane_cp2_ParamLimits

0x6534,	// (0x00027dc9) clock_nsta_pane_cp2

0xdf64,	// (0x0002f7f9) listscroll_midp_pane_ParamLimits

0xdf73,	// (0x0002f808) midp_canvas_pane

0x68f1,	// (0x00028186) nsta_clock_indic_pane

0x1fb1,	// (0x00023846) listscroll_form_pane_vc

0x1fb9,	// (0x0002384e) listscroll_set_pane_vc_ParamLimits

0x1fb9,	// (0x0002384e) listscroll_set_pane_vc

0xe1a6,	// (0x0002fa3b) clock_nsta_pane

0xe1c9,	// (0x0002fa5e) indicator_nsta_pane

0x20d2,	// (0x00023967) bg_popup_sub_pane_cp2_ParamLimits

0x20e6,	// (0x0002397b) find_pane_cp2_ParamLimits

0x20e6,	// (0x0002397b) find_pane_cp2

0x20f8,	// (0x0002398d) grid_toobar_pane_ParamLimits

0x2206,	// (0x00023a9b) list_form_gen_pane_vc_ParamLimits

0x2206,	// (0x00023a9b) list_form_gen_pane_vc

0x221c,	// (0x00023ab1) scroll_pane_cp8_vc_ParamLimits

0x221c,	// (0x00023ab1) scroll_pane_cp8_vc

0x226c,	// (0x00023b01) data_form_wide_pane_vc_ParamLimits

0x226c,	// (0x00023b01) data_form_wide_pane_vc

0x2278,	// (0x00023b0d) form_field_data_wide_pane_vc_g1

0x2280,	// (0x00023b15) form_field_data_wide_pane_vc_t1_ParamLimits

0x2280,	// (0x00023b15) form_field_data_wide_pane_vc_t1

0x1458,	// (0x00022ced) input_focus_pane_cp6_vc_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_cp6_vc

0xe4aa,	// (0x0002fd3f) list_midp_pane_ParamLimits

0x331c,	// (0x00024bb1) scroll_pane_cp16_ParamLimits

0x331c,	// (0x00024bb1) scroll_pane_cp16

0x257e,	// (0x00023e13) button_value_adjust_pane_ParamLimits

0x257e,	// (0x00023e13) button_value_adjust_pane

0xe65b,	// (0x0002fef0) button_value_adjust_pane_cp6_ParamLimits

0xe65b,	// (0x0002fef0) button_value_adjust_pane_cp6

0xe765,	// (0x0002fffa) settings_code_pane_cp_ParamLimits

0xe765,	// (0x0002fffa) settings_code_pane_cp

0x0dd8,	// (0x0002266d) cell_touch_pane_g1

0x0dd8,	// (0x0002266d) cell_touch_pane_g2

0x0001,

0xf703,	// (0x00030f98) cell_touch_pane_g

0xe8e9,	// (0x0003017e) cell_touch_pane_cp_ParamLimits

0xe8e9,	// (0x0003017e) cell_touch_pane_cp

0xe905,	// (0x0003019a) cell_touch_pane_ParamLimits

0xe905,	// (0x0003019a) cell_touch_pane

0x0dd8,	// (0x0002266d) scroll_sc2_down_pane_g1

0x0dd8,	// (0x0002266d) scroll_sc2_up_pane_g1

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp4_vc

0x369e,	// (0x00024f33) list_set_graphic_pane_vc_g1_ParamLimits

0x369e,	// (0x00024f33) list_set_graphic_pane_vc_g1

0x36aa,	// (0x00024f3f) list_set_graphic_pane_vc_g2_ParamLimits

0x36aa,	// (0x00024f3f) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x00031288) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x00031288) list_set_graphic_pane_vc_g

0x36b6,	// (0x00024f4b) text_primary_small_cp13_vc_ParamLimits

0x36b6,	// (0x00024f4b) text_primary_small_cp13_vc

0x36ce,	// (0x00024f63) list_set_graphic_pane_vc_ParamLimits

0x36ce,	// (0x00024f63) list_set_graphic_pane_vc

0x0e5a,	// (0x000226ef) input_focus_pane_cp2_vc

0x0dd8,	// (0x0002266d) setting_code_pane_vc_g1

0x36e1,	// (0x00024f76) setting_code_pane_vc_t1

0x36ef,	// (0x00024f84) set_text_pane_vc_t1_ParamLimits

0x36ef,	// (0x00024f84) set_text_pane_vc_t1

0x0e5a,	// (0x000226ef) input_focus_pane_cp1_vc

0x370a,	// (0x00024f9f) list_set_text_pane_vc

0x0dd8,	// (0x0002266d) setting_text_pane_vc_g1

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp2_vc

0x3714,	// (0x00024fa9) setting_slider_graphic_pane_vc_g1

0x371c,	// (0x00024fb1) setting_slider_graphic_pane_vc_t1

0x372a,	// (0x00024fbf) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x0003128d) setting_slider_graphic_pane_vc_t

0x3738,	// (0x00024fcd) slider_set_pane_cp_vc

0x3740,	// (0x00024fd5) slider_set_pane_vc_g1

0x3749,	// (0x00024fde) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x00031292) slider_set_pane_vc_g

0x14b3,	// (0x00022d48) set_opt_bg_pane_g1_copy1

0x14bb,	// (0x00022d50) set_opt_bg_pane_g2_copy1

0x3775,	// (0x0002500a) set_opt_bg_pane_g3_copy1

0x14cb,	// (0x00022d60) set_opt_bg_pane_g4_copy1

0x14d3,	// (0x00022d68) set_opt_bg_pane_g5_copy1

0x14db,	// (0x00022d70) set_opt_bg_pane_g6_copy1

0x377d,	// (0x00025012) set_opt_bg_pane_g7_copy1

0x3785,	// (0x0002501a) set_opt_bg_pane_g8_copy1

0x378d,	// (0x00025022) set_opt_bg_pane_g9_copy1

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp_vc

0x3795,	// (0x0002502a) setting_slider_pane_vc_t1

0x371c,	// (0x00024fb1) setting_slider_pane_vc_t2

0x372a,	// (0x00024fbf) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x000312a1) setting_slider_pane_vc_t

0x3738,	// (0x00024fcd) slider_set_pane_vc

0x7270,	// (0x00028b05) volume_set_pane_vc_g1

0x791e,	// (0x000291b3) volume_set_pane_vc_g2

0x7927,	// (0x000291bc) volume_set_pane_vc_g3

0x7930,	// (0x000291c5) volume_set_pane_vc_g4

0x7939,	// (0x000291ce) volume_set_pane_vc_g5

0x7942,	// (0x000291d7) volume_set_pane_vc_g6

0x794b,	// (0x000291e0) volume_set_pane_vc_g7

0x7954,	// (0x000291e9) volume_set_pane_vc_g8

0x795d,	// (0x000291f2) volume_set_pane_vc_g9

0x7966,	// (0x000291fb) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x000312a8) volume_set_pane_vc_g

0x37a4,	// (0x00025039) volume_set_pane_vc

0x37ac,	// (0x00025041) button_value_adjust_pane_cp1_vc

0x37b6,	// (0x0002504b) list_highlight_pane_cp2_vc

0x37bf,	// (0x00025054) list_set_pane_vc_ParamLimits

0x37bf,	// (0x00025054) list_set_pane_vc

0x3811,	// (0x000250a6) main_pane_set_vc_t1_ParamLimits

0x3811,	// (0x000250a6) main_pane_set_vc_t1

0x3826,	// (0x000250bb) main_pane_set_vc_t2_ParamLimits

0x3826,	// (0x000250bb) main_pane_set_vc_t2

0x3838,	// (0x000250cd) main_pane_set_vc_t3_ParamLimits

0x3838,	// (0x000250cd) main_pane_set_vc_t3

0x384a,	// (0x000250df) main_pane_set_vc_t4_ParamLimits

0x384a,	// (0x000250df) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x000312bd) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x000312bd) main_pane_set_vc_t

0x385c,	// (0x000250f1) setting_code_pane_vc_ParamLimits

0x385c,	// (0x000250f1) setting_code_pane_vc

0x386b,	// (0x00025100) setting_slider_graphic_pane_vc

0x386b,	// (0x00025100) setting_slider_pane_vc

0x386b,	// (0x00025100) setting_text_pane_vc

0x386b,	// (0x00025100) setting_volume_pane_vc

0x3873,	// (0x00025108) scroll_pane_cp121_vc

0x1443,	// (0x00022cd8) set_content_pane_vc

0x387b,	// (0x00025110) button_value_adjust_pane_g1

0x3884,	// (0x00025119) button_value_adjust_pane_g2

0x0001,

0xfa7d,	// (0x00031312) button_value_adjust_pane_g

0x388d,	// (0x00025122) form_field_slider_wide_pane_vc_t1_ParamLimits

0x388d,	// (0x00025122) form_field_slider_wide_pane_vc_t1

0x38a3,	// (0x00025138) form_field_slider_wide_pane_vc_t2_ParamLimits

0x38a3,	// (0x00025138) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa82,	// (0x00031317) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa82,	// (0x00031317) form_field_slider_wide_pane_vc_t

0x0ea8,	// (0x0002273d) input_focus_pane_cp10_vc_ParamLimits

0x0ea8,	// (0x0002273d) input_focus_pane_cp10_vc

0x38ce,	// (0x00025163) slider_cont_pane_cp1_vc_ParamLimits

0x38ce,	// (0x00025163) slider_cont_pane_cp1_vc

0x3740,	// (0x00024fd5) slider_form_pane_g1_cp2

0x3749,	// (0x00024fde) slider_form_pane_g2_cp2

0x38e9,	// (0x0002517e) form_field_slider_pane_vc_t3

0x38f7,	// (0x0002518c) form_field_slider_pane_vc_t4

0x3905,	// (0x0002519a) slider_form_pane_vc_ParamLimits

0x3905,	// (0x0002519a) slider_form_pane_vc

0x3912,	// (0x000251a7) form_field_slider_pane_vc_t1_ParamLimits

0x3912,	// (0x000251a7) form_field_slider_pane_vc_t1

0x3928,	// (0x000251bd) form_field_slider_pane_vc_t2_ParamLimits

0x3928,	// (0x000251bd) form_field_slider_pane_vc_t2

0x0001,

0xfa94,	// (0x00031329) form_field_slider_pane_vc_t_ParamLimits

0xfa94,	// (0x00031329) form_field_slider_pane_vc_t

0x0ea8,	// (0x0002273d) input_focus_pane_cp9_vc_ParamLimits

0x0ea8,	// (0x0002273d) input_focus_pane_cp9_vc

0x393a,	// (0x000251cf) slider_cont_pane_vc_ParamLimits

0x393a,	// (0x000251cf) slider_cont_pane_vc

0x394c,	// (0x000251e1) list_form_graphic_pane_cp_vc_ParamLimits

0x394c,	// (0x000251e1) list_form_graphic_pane_cp_vc

0x2278,	// (0x00023b0d) form_field_popup_wide_pane_vc_g1

0x3961,	// (0x000251f6) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3961,	// (0x000251f6) form_field_popup_wide_pane_vc_t1

0x1458,	// (0x00022ced) input_focus_pane_cp8_vc_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_cp8_vc

0x39a0,	// (0x00025235) list_form_wide_pane_vc_ParamLimits

0x39a0,	// (0x00025235) list_form_wide_pane_vc

0x39ac,	// (0x00025241) list_form_graphic_pane_vc_g1

0x39b4,	// (0x00025249) list_form_graphic_pane_vc_t1_ParamLimits

0x39b4,	// (0x00025249) list_form_graphic_pane_vc_t1

0x0ebe,	// (0x00022753) list_highlight_pane_cp5_vc_ParamLimits

0x0ebe,	// (0x00022753) list_highlight_pane_cp5_vc

0x39d0,	// (0x00025265) list_form_graphic_pane_vc_ParamLimits

0x39d0,	// (0x00025265) list_form_graphic_pane_vc

0x2278,	// (0x00023b0d) form_field_popup_pane_vc_g1

0x39e6,	// (0x0002527b) form_field_popup_pane_vc_t1_ParamLimits

0x39e6,	// (0x0002527b) form_field_popup_pane_vc_t1

0x1458,	// (0x00022ced) input_focus_pane_cp7_vc_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_cp7_vc

0x39fb,	// (0x00025290) list_form_pane_vc_ParamLimits

0x39fb,	// (0x00025290) list_form_pane_vc

0x3a07,	// (0x0002529c) data_form_pane_vc_t1_ParamLimits

0x3a07,	// (0x0002529c) data_form_pane_vc_t1

0x14b3,	// (0x00022d48) input_focus_pane_vc_g1

0x14bb,	// (0x00022d50) input_focus_pane_vc_g2

0x14c3,	// (0x00022d58) input_focus_pane_vc_g3

0x14cb,	// (0x00022d60) input_focus_pane_vc_g4

0x14d3,	// (0x00022d68) input_focus_pane_vc_g5

0x14db,	// (0x00022d70) input_focus_pane_vc_g6

0x14e3,	// (0x00022d78) input_focus_pane_vc_g7

0x14eb,	// (0x00022d80) input_focus_pane_vc_g8

0x14f3,	// (0x00022d88) input_focus_pane_vc_g9

0x0dd8,	// (0x0002266d) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x00030f21) input_focus_pane_vc_g

0x226c,	// (0x00023b01) data_form_pane_vc_ParamLimits

0x226c,	// (0x00023b01) data_form_pane_vc

0x2278,	// (0x00023b0d) form_field_data_pane_vc_g1

0x3a22,	// (0x000252b7) form_field_data_pane_vc_t1_ParamLimits

0x3a22,	// (0x000252b7) form_field_data_pane_vc_t1

0x1458,	// (0x00022ced) input_focus_pane_vc_ParamLimits

0x1458,	// (0x00022ced) input_focus_pane_vc

0x21d0,	// (0x00023a65) button_value_adjust_pane_cp3_vc

0x32fa,	// (0x00024b8f) button_value_adjust_pane_cp5_vc

0x3a38,	// (0x000252cd) form_field_data_pane_vc_ParamLimits

0x3a38,	// (0x000252cd) form_field_data_pane_vc

0x21d8,	// (0x00023a6d) form_field_data_pane_vc_cp2

0x3a4f,	// (0x000252e4) form_field_data_wide_pane_vc_ParamLimits

0x3a4f,	// (0x000252e4) form_field_data_wide_pane_vc

0x3a65,	// (0x000252fa) form_field_data_wide_pane_vc_cp2

0x3a6d,	// (0x00025302) form_field_popup_pane_vc_ParamLimits

0x3a6d,	// (0x00025302) form_field_popup_pane_vc

0x3a84,	// (0x00025319) form_field_popup_wide_pane_vc_ParamLimits

0x3a84,	// (0x00025319) form_field_popup_wide_pane_vc

0x3a9a,	// (0x0002532f) form_field_slider_pane_vc_ParamLimits

0x3a9a,	// (0x0002532f) form_field_slider_pane_vc

0x3aad,	// (0x00025342) form_field_slider_wide_pane_vc_ParamLimits

0x3aad,	// (0x00025342) form_field_slider_wide_pane_vc

0xe923,	// (0x000301b8) grid_touch_1_pane_ParamLimits

0xe923,	// (0x000301b8) grid_touch_1_pane

0xe937,	// (0x000301cc) grid_touch_2_pane_ParamLimits

0xe937,	// (0x000301cc) grid_touch_2_pane

0x3ac0,	// (0x00025355) touch_pane_g1_ParamLimits

0x3ac0,	// (0x00025355) touch_pane_g1

0x3ace,	// (0x00025363) cell_app_pane_cp_wide_ParamLimits

0x3ace,	// (0x00025363) cell_app_pane_cp_wide

0x3ade,	// (0x00025373) grid_popup_fast_wide_pane_ParamLimits

0x3ade,	// (0x00025373) grid_popup_fast_wide_pane

0x3af2,	// (0x00025387) scroll_pane_cp19_ParamLimits

0x3af2,	// (0x00025387) scroll_pane_cp19

0x0e5a,	// (0x000226ef) bg_popup_window_pane_cp20

0x3b06,	// (0x0002539b) listscroll_popup_fast_wide_pane

0x21e0,	// (0x00023a75) grid_indicator_nsta_pane

0x3b0e,	// (0x000253a3) clock_nsta_pane_g1

0x3b17,	// (0x000253ac) clock_nsta_pane_t1

0xe961,	// (0x000301f6) cell_indicator_nsta_pane_ParamLimits

0xe961,	// (0x000301f6) cell_indicator_nsta_pane

0x3ac0,	// (0x00025355) cell_indicator_nsta_pane_g1

0xe978,	// (0x0003020d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa5,	// (0x0003133a) cell_indicator_nsta_pane_g

0x3b33,	// (0x000253c8) clock_nsta_pane_cp

0x3b3b,	// (0x000253d0) indicator_nsta_pane_cp

0x3b44,	// (0x000253d9) nsta_clock_indic_pane_g1

0x0efa,	// (0x0002278f) grid_indicator_pane

0x18fd,	// (0x00023192) scroll_pane_cp29

0x648b,	// (0x00027d20) indicator_nsta_pane_cp2_ParamLimits

0x648b,	// (0x00027d20) indicator_nsta_pane_cp2

0x0ebe,	// (0x00022753) main_apps_wheel_pane

0x2417,	// (0x00023cac) form_midp_field_text_pane_ParamLimits

0x2544,	// (0x00023dd9) scroll_bar_cp050_ParamLimits

0x3bad,	// (0x00025442) cell_indicator_pane_ParamLimits

0x3bad,	// (0x00025442) cell_indicator_pane

0x3bc3,	// (0x00025458) cell_indicator_pane_g1

0xe985,	// (0x0003021a) grid_wheel_folder_pane_ParamLimits

0xe985,	// (0x0003021a) grid_wheel_folder_pane

0xe993,	// (0x00030228) list_wheel_apps_pane_ParamLimits

0xe993,	// (0x00030228) list_wheel_apps_pane

0xe99f,	// (0x00030234) main_apps_wheel_pane_g1_ParamLimits

0xe99f,	// (0x00030234) main_apps_wheel_pane_g1

0xe9ab,	// (0x00030240) main_apps_wheel_pane_g2_ParamLimits

0xe9ab,	// (0x00030240) main_apps_wheel_pane_g2

0x0001,

0xfac1,	// (0x00031356) main_apps_wheel_pane_g_ParamLimits

0xfac1,	// (0x00031356) main_apps_wheel_pane_g

0xe9b7,	// (0x0003024c) main_apps_wheel_pane_t1_ParamLimits

0xe9b7,	// (0x0003024c) main_apps_wheel_pane_t1

0xe9c9,	// (0x0003025e) list_wheel_apps_pane_g1

0xe9d1,	// (0x00030266) list_wheel_apps_pane_g2

0xe9d9,	// (0x0003026e) list_wheel_apps_pane_g3

0xe9e1,	// (0x00030276) list_wheel_apps_pane_g4

0xe9e9,	// (0x0003027e) list_wheel_apps_pane_g5

0x0004,

0xfac6,	// (0x0003135b) list_wheel_apps_pane_g

0x0ebe,	// (0x00022753) navi_icon_text_pane

0xe0b2,	// (0x0002f947) aid_fill_nsta

0x3bcd,	// (0x00025462) navi_icon_text_pane_g1

0x3bd9,	// (0x0002546e) navi_icon_text_pane_t1

0x1b77,	// (0x0002340c) list_set_graphic_pane_t1_ParamLimits

0x1b77,	// (0x0002340c) list_set_graphic_pane_t1

0x2c2a,	// (0x000244bf) popup_midp_note_alarm_window_t6_ParamLimits

0x2c2a,	// (0x000244bf) popup_midp_note_alarm_window_t6

0x2c3c,	// (0x000244d1) popup_midp_note_alarm_window_t7_ParamLimits

0x2c3c,	// (0x000244d1) popup_midp_note_alarm_window_t7

0x2c4e,	// (0x000244e3) popup_midp_note_alarm_window_t8_ParamLimits

0x2c4e,	// (0x000244e3) popup_midp_note_alarm_window_t8

0x2c60,	// (0x000244f5) popup_midp_note_alarm_window_t9_ParamLimits

0x2c60,	// (0x000244f5) popup_midp_note_alarm_window_t9

0x2c72,	// (0x00024507) popup_midp_note_alarm_window_t10_ParamLimits

0x2c72,	// (0x00024507) popup_midp_note_alarm_window_t10

0x2c84,	// (0x00024519) popup_midp_note_alarm_window_t11_ParamLimits

0x2c84,	// (0x00024519) popup_midp_note_alarm_window_t11

0x2c96,	// (0x0002452b) scroll_pane_cp17_ParamLimits

0x2c96,	// (0x0002452b) scroll_pane_cp17

0x7270,	// (0x00028b05) volume_small_pane_cp_g1

0x7a78,	// (0x0002930d) volume_small_pane_cp_g2

0x7a81,	// (0x00029316) volume_small_pane_cp_g3

0x7a8a,	// (0x0002931f) volume_small_pane_cp_g4

0x729d,	// (0x00028b32) volume_small_pane_cp_g5

0x7a93,	// (0x00029328) volume_small_pane_cp_g6

0x7a9c,	// (0x00029331) volume_small_pane_cp_g7

0x7aa5,	// (0x0002933a) volume_small_pane_cp_g8

0x7aae,	// (0x00029343) volume_small_pane_cp_g9

0x7ab7,	// (0x0002934c) volume_small_pane_cp_g10

0x1e26,	// (0x000236bb) midp_ticker_pane_g1_ParamLimits

0x1e32,	// (0x000236c7) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x00030fed) midp_ticker_pane_g_ParamLimits

0x1e3e,	// (0x000236d3) midp_ticker_pane_t1_ParamLimits

0xe0c8,	// (0x0002f95d) aid_fill_nsta_2

0x2530,	// (0x00023dc5) list_form2_midp_pane

0x3352,	// (0x00024be7) midp_editing_number_pane_ParamLimits

0x335e,	// (0x00024bf3) midp_ticker_pane_ParamLimits

0x3beb,	// (0x00025480) form2_midp_field_pane

0x3bf3,	// (0x00025488) scroll_pane_cp51

0x3c13,	// (0x000254a8) form2_midp_button_pane_ParamLimits

0x3c13,	// (0x000254a8) form2_midp_button_pane

0x3c25,	// (0x000254ba) form2_midp_content_pane_ParamLimits

0x3c25,	// (0x000254ba) form2_midp_content_pane

0x3c3f,	// (0x000254d4) form2_midp_field_choice_group_pane

0x3c47,	// (0x000254dc) form2_midp_field_pane_g1

0x3c4f,	// (0x000254e4) form2_midp_field_pane_g2

0x3c57,	// (0x000254ec) form2_midp_field_pane_g3

0x3c5f,	// (0x000254f4) form2_midp_field_pane_g4

0x0003,

0xfaeb,	// (0x00031380) form2_midp_field_pane_g

0x3c67,	// (0x000254fc) form2_midp_gauge_slider_pane

0x3c6f,	// (0x00025504) form2_midp_gauge_wait_pane

0x3c77,	// (0x0002550c) form2_midp_image_pane_ParamLimits

0x3c77,	// (0x0002550c) form2_midp_image_pane

0x3c92,	// (0x00025527) form2_midp_label_pane_ParamLimits

0x3c92,	// (0x00025527) form2_midp_label_pane

0xea1e,	// (0x000302b3) form2_midp_label_pane_cp_ParamLimits

0xea1e,	// (0x000302b3) form2_midp_label_pane_cp

0x3cab,	// (0x00025540) form2_midp_string_pane_ParamLimits

0x3cab,	// (0x00025540) form2_midp_string_pane

0x9b1f,	// (0x0002b3b4) form2_midp_text_pane_ParamLimits

0x9b1f,	// (0x0002b3b4) form2_midp_text_pane

0x3cbd,	// (0x00025552) form2_midp_time_pane

0x3ccd,	// (0x00025562) input_focus_pane_cp51_ParamLimits

0x3ccd,	// (0x00025562) input_focus_pane_cp51

0x3ce5,	// (0x0002557a) form2_midp_label_pane_t1_ParamLimits

0x3ce5,	// (0x0002557a) form2_midp_label_pane_t1

0x9b38,	// (0x0002b3cd) form2_mdip_text_pane_t1_ParamLimits

0x9b38,	// (0x0002b3cd) form2_mdip_text_pane_t1

0x9b53,	// (0x0002b3e8) form2_midp_time_pane_t1

0x3d2d,	// (0x000255c2) form2_midp_gauge_slider_pane_t1

0xea3d,	// (0x000302d2) form2_midp_gauge_slider_pane_t2

0xea4f,	// (0x000302e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf4,	// (0x00031389) form2_midp_gauge_slider_pane_t

0x3d3f,	// (0x000255d4) form2_midp_slider_pane

0x3d4b,	// (0x000255e0) form2_midp_gauge_wait_pane_t1

0x3d59,	// (0x000255ee) form2_midp_wait_pane_ParamLimits

0x3d59,	// (0x000255ee) form2_midp_wait_pane

0x22b6,	// (0x00023b4b) list_single_2graphic_pane_cp4_ParamLimits

0x22b6,	// (0x00023b4b) list_single_2graphic_pane_cp4

0x3d84,	// (0x00025619) list_single_midp_graphic_pane_cp_ParamLimits

0x3d84,	// (0x00025619) list_single_midp_graphic_pane_cp

0x0e5a,	// (0x000226ef) list_highlight_pane_cp20

0x3da2,	// (0x00025637) list_single_2graphic_pane_g1_cp4

0x33cb,	// (0x00024c60) list_single_2graphic_pane_g2_cp4

0x3dc0,	// (0x00025655) list_single_2graphic_pane_t1_cp4

0x0ebe,	// (0x00022753) list_highlight_pane_cp21

0x3dcf,	// (0x00025664) list_single_midp_graphic_pane_g4_cp

0x3dde,	// (0x00025673) list_single_midp_graphic_pane_t1_cp

0x3df3,	// (0x00025688) form2_mdip_string_pane_t1_ParamLimits

0x3df3,	// (0x00025688) form2_mdip_string_pane_t1

0x0e5a,	// (0x000226ef) bg_wml_button_pane_cp2

0x0dd8,	// (0x0002266d) form2_midp_image_pane_g1

0x91d1,	// (0x0002aa66) list_double_large_graphic_pane_g5_ParamLimits

0x91d1,	// (0x0002aa66) list_double_large_graphic_pane_g5

0xdf64,	// (0x0002f7f9) midp_form_pane_ParamLimits

0x0ebe,	// (0x00022753) main_apps_wheel_pane_ParamLimits

0xc6cb,	// (0x0002df60) popup_preview_window_ParamLimits

0xc6cb,	// (0x0002df60) popup_preview_window

0x6d74,	// (0x00028609) popup_touch_info_window_ParamLimits

0x6d74,	// (0x00028609) popup_touch_info_window

0x6d92,	// (0x00028627) popup_touch_menu_window_ParamLimits

0x6d92,	// (0x00028627) popup_touch_menu_window

0x0dce,	// (0x00022663) bg_popup_sub_pane_cp6

0x3e5d,	// (0x000256f2) list_touch_menu_pane

0x3e65,	// (0x000256fa) list_single_touch_menu_pane_ParamLimits

0x3e65,	// (0x000256fa) list_single_touch_menu_pane

0x3e7c,	// (0x00025711) list_single_touch_menu_pane_t1

0x0ebe,	// (0x00022753) bg_popup_sub_pane_cp7_ParamLimits

0x0ebe,	// (0x00022753) bg_popup_sub_pane_cp7

0x3e8a,	// (0x0002571f) heading_sub_pane

0x3e92,	// (0x00025727) list_touch_info_pane_ParamLimits

0x3e92,	// (0x00025727) list_touch_info_pane

0x3ea1,	// (0x00025736) list_single_touch_info_pane_ParamLimits

0x3ea1,	// (0x00025736) list_single_touch_info_pane

0x3eb2,	// (0x00025747) list_single_touch_info_pane_t1

0x3ec0,	// (0x00025755) list_single_touch_info_pane_t2

0x0001,

0xfb02,	// (0x00031397) list_single_touch_info_pane_t

0x1dfc,	// (0x00023691) bg_popup_heading_pane_cp

0x3ece,	// (0x00025763) heading_sub_pane_t1

0x2232,	// (0x00023ac7) bg_popup_preview_window_pane_cp_ParamLimits

0x2232,	// (0x00023ac7) bg_popup_preview_window_pane_cp

0x3e8a,	// (0x0002571f) heading_preview_pane

0x3e92,	// (0x00025727) list_preview_pane_ParamLimits

0x3e92,	// (0x00025727) list_preview_pane

0x3edc,	// (0x00025771) popup_preview_window_g1

0x3ea1,	// (0x00025736) list_single_preview_pane_ParamLimits

0x3ea1,	// (0x00025736) list_single_preview_pane

0x3ee4,	// (0x00025779) list_single_preview_pane_g1

0x3eec,	// (0x00025781) list_single_preview_pane_t1

0x3eb2,	// (0x00025747) list_single_preview_pane_t2

0x0001,

0xfb07,	// (0x0003139c) list_single_preview_pane_t

0x3efa,	// (0x0002578f) bg_popup_heading_pane_cp2_ParamLimits

0x3efa,	// (0x0002578f) bg_popup_heading_pane_cp2

0x3f10,	// (0x000257a5) heading_preview_pane_g1

0x3f18,	// (0x000257ad) heading_preview_pane_t1_ParamLimits

0x3f18,	// (0x000257ad) heading_preview_pane_t1

0x0f11,	// (0x000227a6) soft_indicator_pane_t1_ParamLimits

0x13db,	// (0x00022c70) scroll_pane_ParamLimits

0x1802,	// (0x00023097) scroll_sc2_left_pane

0x17f9,	// (0x0002308e) scroll_sc2_right_pane

0x1821,	// (0x000230b6) scroll_bg_pane_g1_ParamLimits

0x1836,	// (0x000230cb) scroll_bg_pane_g2_ParamLimits

0x184e,	// (0x000230e3) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x00030f78) scroll_bg_pane_g_ParamLimits

0x1821,	// (0x000230b6) scroll_handle_pane_g1_ParamLimits

0x1870,	// (0x00023105) scroll_handle_pane_g2_ParamLimits

0x184e,	// (0x000230e3) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x00030f7f) scroll_handle_pane_g_ParamLimits

0x6941,	// (0x000281d6) popup_choice_list_window_ParamLimits

0x6941,	// (0x000281d6) popup_choice_list_window

0x20de,	// (0x00023973) choice_list_pane

0x2154,	// (0x000239e9) cell_toolbar_pane_t1

0x217c,	// (0x00023a11) toolbar_button_pane_ParamLimits

0x305c,	// (0x000248f1) ai_gene_pane_1_t2_ParamLimits

0x305c,	// (0x000248f1) ai_gene_pane_1_t2

0x0001,

0xf906,	// (0x0003119b) ai_gene_pane_1_t_ParamLimits

0xf906,	// (0x0003119b) ai_gene_pane_1_t

0x3f35,	// (0x000257ca) scroll_sc2_left_pane_g1

0x3f35,	// (0x000257ca) scroll_sc2_right_pane_g1

0x15de,	// (0x00022e73) bg_popup_sub_pane_cp10

0x3f3f,	// (0x000257d4) list_choice_list_pane

0x3f56,	// (0x000257eb) list_single_choice_list_pane_ParamLimits

0x3f56,	// (0x000257eb) list_single_choice_list_pane

0x3f68,	// (0x000257fd) list_single_choice_list_pane_g1

0x15c9,	// (0x00022e5e) list_single_choice_list_pane_t1_ParamLimits

0x15c9,	// (0x00022e5e) list_single_choice_list_pane_t1

0x3f70,	// (0x00025805) choice_list_pane_g1

0x3f78,	// (0x0002580d) choice_list_pane_t1

0x0dce,	// (0x00022663) input_focus_pane_cp11

0x1760,	// (0x00022ff5) title_pane_stacon_g2_ParamLimits

0x1760,	// (0x00022ff5) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x00030f5e) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x00030f5e) title_pane_stacon_g

0x1dfc,	// (0x00023691) cursor_press_pane

0xc432,	// (0x0002dcc7) popup_fep_hwr_window_ParamLimits

0xc432,	// (0x0002dcc7) popup_fep_hwr_window

0x6a39,	// (0x000282ce) popup_fep_vkb_window_ParamLimits

0x6a39,	// (0x000282ce) popup_fep_vkb_window

0x3f86,	// (0x0002581b) cursor_press_pane_g1

0x0002,

0xfb30,	// (0x000313c5) fep_vkb_side_pane_g_ParamLimits

0x7b54,	// (0x000293e9) fep_hwr_candidate_pane_ParamLimits

0x7b54,	// (0x000293e9) fep_hwr_candidate_pane

0x7b7c,	// (0x00029411) fep_hwr_side_pane_ParamLimits

0x7b7c,	// (0x00029411) fep_hwr_side_pane

0x7b9c,	// (0x00029431) fep_hwr_top_pane_ParamLimits

0x7b9c,	// (0x00029431) fep_hwr_top_pane

0x7bb4,	// (0x00029449) fep_hwr_write_pane_ParamLimits

0x7bb4,	// (0x00029449) fep_hwr_write_pane

0xfb30,	// (0x000313c5) fep_vkb_side_pane_g

0x3fa0,	// (0x00025835) fep_hwr_top_pane_g1

0x3f8e,	// (0x00025823) fep_hwr_top_pane_g2

0x7bee,	// (0x00029483) fep_hwr_top_pane_g3

0x0002,

0xfb0c,	// (0x000313a1) fep_hwr_top_pane_g

0x7c03,	// (0x00029498) fep_hwr_top_text_pane

0x196a,	// (0x000231ff) fep_hwr_top_text_pane_g1

0x3fd6,	// (0x0002586b) fep_hwr_top_text_pane_t1

0x7cf1,	// (0x00029586) fep_hwr_candidate_pane_g1

0x419f,	// (0x00025a34) fep_vkb_keypad_pane_g3_ParamLimits

0x419f,	// (0x00025a34) fep_vkb_keypad_pane_g3

0x41c1,	// (0x00025a56) fep_vkb_keypad_pane_g4_ParamLimits

0x41c1,	// (0x00025a56) fep_vkb_keypad_pane_g4

0x4230,	// (0x00025ac5) fep_vkb_bottom_pane_g2_ParamLimits

0x4230,	// (0x00025ac5) fep_vkb_bottom_pane_g2

0x0001,

0xfb37,	// (0x000313cc) fep_vkb_bottom_pane_g_ParamLimits

0xfb37,	// (0x000313cc) fep_vkb_bottom_pane_g

0x3f35,	// (0x000257ca) cell_vkb_side_pane_g2

0x0001,

0xfb41,	// (0x000313d6) cell_vkb_side_pane_g

0x4274,	// (0x00025b09) cell_vkb_side_pane_t1

0x4282,	// (0x00025b17) cell_vkb_side_pane_t1_copy1

0x3f35,	// (0x000257ca) bg_fep_vkb_candidate_pane_g2

0x4350,	// (0x00025be5) cell_vkb_candidate_pane_ParamLimits

0x3fe4,	// (0x00025879) aid_size_cell_vkb_ParamLimits

0x3fe4,	// (0x00025879) aid_size_cell_vkb

0x4350,	// (0x00025be5) cell_vkb_candidate_pane

0x7dfc,	// (0x00029691) bg_popup_fep_shadow_pane_g1

0x404e,	// (0x000258e3) fep_vkb_bottom_pane_ParamLimits

0x404e,	// (0x000258e3) fep_vkb_bottom_pane

0x408b,	// (0x00025920) fep_vkb_candidate_pane_ParamLimits

0x408b,	// (0x00025920) fep_vkb_candidate_pane

0x40a7,	// (0x0002593c) fep_vkb_keypad_pane_ParamLimits

0x40a7,	// (0x0002593c) fep_vkb_keypad_pane

0x40db,	// (0x00025970) fep_vkb_side_pane_ParamLimits

0x40db,	// (0x00025970) fep_vkb_side_pane

0x4107,	// (0x0002599c) fep_vkb_top_pane_ParamLimits

0x4107,	// (0x0002599c) fep_vkb_top_pane

0x4133,	// (0x000259c8) fep_vkb_top_pane_g1_ParamLimits

0x4133,	// (0x000259c8) fep_vkb_top_pane_g1

0x4142,	// (0x000259d7) fep_vkb_top_pane_g2_ParamLimits

0x4142,	// (0x000259d7) fep_vkb_top_pane_g2

0x4151,	// (0x000259e6) fep_vkb_top_pane_g3_ParamLimits

0x4151,	// (0x000259e6) fep_vkb_top_pane_g3

0x0003,

0xfb27,	// (0x000313bc) fep_vkb_top_pane_g_ParamLimits

0xfb27,	// (0x000313bc) fep_vkb_top_pane_g

0x416f,	// (0x00025a04) fep_vkb_top_text_pane_ParamLimits

0x416f,	// (0x00025a04) fep_vkb_top_text_pane

0xea71,	// (0x00030306) fep_vkb_side_pane_g1_ParamLimits

0xea71,	// (0x00030306) fep_vkb_side_pane_g1

0x418e,	// (0x00025a23) grid_vkb_side_pane_ParamLimits

0x418e,	// (0x00025a23) grid_vkb_side_pane

0x7e04,	// (0x00029699) bg_popup_fep_shadow_pane_g2

0x7e0d,	// (0x000296a2) bg_popup_fep_shadow_pane_g3

0x7e15,	// (0x000296aa) bg_popup_fep_shadow_pane_g4

0x7e1e,	// (0x000296b3) bg_popup_fep_shadow_pane_g5

0x7e26,	// (0x000296bb) bg_popup_fep_shadow_pane_g6

0x7e2e,	// (0x000296c3) bg_popup_fep_shadow_pane_g7

0x14cb,	// (0x00022d60) bg_popup_fep_shadow_pane_g8

0x41df,	// (0x00025a74) grid_vkb_keypad_number_pane_ParamLimits

0x41df,	// (0x00025a74) grid_vkb_keypad_number_pane

0x41ef,	// (0x00025a84) grid_vkb_keypad_pane_ParamLimits

0x41ef,	// (0x00025a84) grid_vkb_keypad_pane

0x4215,	// (0x00025aaa) fep_vkb_bottom_pane_g1_ParamLimits

0x4215,	// (0x00025aaa) fep_vkb_bottom_pane_g1

0x423e,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x423e,	// (0x00025ad3) grid_vkb_keypad_bottom_left_pane

0x4253,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4253,	// (0x00025ae8) grid_vkb_keypad_bottom_right_pane

0x4268,	// (0x00025afd) fep_vkb_top_text_pane_g1

0xeab8,	// (0x0003034d) fep_vkb_top_text_pane_t1

0xeaca,	// (0x0003035f) cell_vkb_side_pane_ParamLimits

0xeaca,	// (0x0003035f) cell_vkb_side_pane

0x3f35,	// (0x000257ca) cell_vkb_side_pane_g1

0x4290,	// (0x00025b25) cell_vkb_keypad_pane_ParamLimits

0x4290,	// (0x00025b25) cell_vkb_keypad_pane

0x42fd,	// (0x00025b92) cell_vkb_keypad_pane_g1

0x0008,

0xfb54,	// (0x000313e9) bg_popup_fep_shadow_pane_g

0x7e3e,	// (0x000296d3) cell_hwr_side_pane_g1

0x7e3e,	// (0x000296d3) cell_hwr_side_pane_g2

0x4307,	// (0x00025b9c) cell_vkb_keypad_pane_t1

0xeae0,	// (0x00030375) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xeae0,	// (0x00030375) cell_vkb_keypad_bottom_left_pane

0xeaf5,	// (0x0003038a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xeaf5,	// (0x0003038a) cell_vkb_keypad_bottom_right_pane

0x3f35,	// (0x000257ca) cell_vkb_keypad_bottom_left_pane_g1

0x3f35,	// (0x000257ca) cell_vkb_keypad_bottom_right_pane_g1

0x4315,	// (0x00025baa) cell_vkb_keypad_number_pane_ParamLimits

0x4315,	// (0x00025baa) cell_vkb_keypad_number_pane

0x4334,	// (0x00025bc9) cell_vkb_keypad_number_pane_g1

0x433e,	// (0x00025bd3) cell_vkb_keypad_number_pane_g2

0x4347,	// (0x00025bdc) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb46,	// (0x000313db) cell_vkb_keypad_number_pane_g

0x4307,	// (0x00025b9c) cell_vkb_keypad_number_pane_t1

0x4369,	// (0x00025bfe) fep_vkb_candidate_pane_g1

0x0001,

0xfb67,	// (0x000313fc) cell_hwr_side_pane_g

0x4382,	// (0x00025c17) cell_hwr_side_pane_t1

0x7e48,	// (0x000296dd) cell_hwr_side_pane_t1_copy1

0x7e56,	// (0x000296eb) cell_hwr_candidate_pane_g1

0x7e85,	// (0x0002971a) cell_hwr_candidate_pane_t1

0x3f35,	// (0x000257ca) cell_vkb_candidate_pane_g2

0x4408,	// (0x00025c9d) cell_vkb_candidate_pane_t1

0x7b1f,	// (0x000293b4) bg_popup_fep_shadow_pane_ParamLimits

0x7b1f,	// (0x000293b4) bg_popup_fep_shadow_pane

0x7bce,	// (0x00029463) bg_fep_hwr_top_pane_g4

0x3fb2,	// (0x00025847) bg_hwr_side_pane_g1_ParamLimits

0x3fb2,	// (0x00025847) bg_hwr_side_pane_g1

0xcb09,	// (0x0002e39e) cell_hwr_side_pane_ParamLimits

0xcb09,	// (0x0002e39e) cell_hwr_side_pane

0x7c7a,	// (0x0002950f) fep_hwr_write_pane_g1_ParamLimits

0x7c7a,	// (0x0002950f) fep_hwr_write_pane_g1

0x7c87,	// (0x0002951c) fep_hwr_write_pane_g2_ParamLimits

0x7c87,	// (0x0002951c) fep_hwr_write_pane_g2

0x7c94,	// (0x00029529) fep_hwr_write_pane_g3_ParamLimits

0x7c94,	// (0x00029529) fep_hwr_write_pane_g3

0xcb29,	// (0x0002e3be) fep_hwr_write_pane_g4_ParamLimits

0xcb29,	// (0x0002e3be) fep_hwr_write_pane_g4

0x0005,

0xfb13,	// (0x000313a8) fep_hwr_write_pane_g_ParamLimits

0xfb13,	// (0x000313a8) fep_hwr_write_pane_g

0x7bce,	// (0x00029463) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x7bce,	// (0x00029463) bg_fep_hwr_candidate_pane_g2

0x7cb7,	// (0x0002954c) cell_hwr_candidate_pane_ParamLimits

0x7cb7,	// (0x0002954c) cell_hwr_candidate_pane

0x7cf1,	// (0x00029586) fep_hwr_candidate_pane_g1_ParamLimits

0x4012,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4012,	// (0x000258a7) bg_popup_fep_shadow_pane_cp2

0x4161,	// (0x000259f6) fep_vkb_top_pane_g4_ParamLimits

0x4161,	// (0x000259f6) fep_vkb_top_pane_g4

0x4180,	// (0x00025a15) fep_vkb_side_pane_g2_ParamLimits

0x4180,	// (0x00025a15) fep_vkb_side_pane_g2

0xd63d,	// (0x0002eed2) list_setting_pane_t4_ParamLimits

0xd63d,	// (0x0002eed2) list_setting_pane_t4

0xd6cf,	// (0x0002ef64) list_setting_number_pane_t5_ParamLimits

0xd6cf,	// (0x0002ef64) list_setting_number_pane_t5

0xde6f,	// (0x0002f704) list_double_heading_pane_cp2_ParamLimits

0xde6f,	// (0x0002f704) list_double_heading_pane_cp2

0x1c71,	// (0x00023506) list_double_heading_pane_g1_cp2_ParamLimits

0x1c71,	// (0x00023506) list_double_heading_pane_g1_cp2

0x4416,	// (0x00025cab) list_double_heading_pane_g2_cp2_ParamLimits

0x4416,	// (0x00025cab) list_double_heading_pane_g2_cp2

0x442a,	// (0x00025cbf) list_double_heading_pane_t1_cp2_ParamLimits

0x442a,	// (0x00025cbf) list_double_heading_pane_t1_cp2

0x4440,	// (0x00025cd5) list_double_heading_pane_t2_cp2_ParamLimits

0x4440,	// (0x00025cd5) list_double_heading_pane_t2_cp2

0x0dc6,	// (0x0002265b) aid_value_unit2

0x5bdb,	// (0x00027470) popup_preview_fixed_window

0x0ff1,	// (0x00022886) bg_popup_preview_window_pane_cp02

0x4452,	// (0x00025ce7) list_preview_fixed_pane

0x4498,	// (0x00025d2d) list_empty_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_empty_pane_fp

0x4498,	// (0x00025d2d) list_single_cale_day_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_cale_day_pane_fp

0x4498,	// (0x00025d2d) list_single_graphic_heading_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_graphic_heading_pane_fp

0x4498,	// (0x00025d2d) list_single_graphic_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_graphic_pane_fp

0x4498,	// (0x00025d2d) list_single_heading_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_heading_pane_fp

0x4498,	// (0x00025d2d) list_single_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_pane_fp

0x44ac,	// (0x00025d41) list_single_pane_fp_g1_ParamLimits

0x44ac,	// (0x00025d41) list_single_pane_fp_g1

0x92f2,	// (0x0002ab87) list_single_pane_fp_g2_ParamLimits

0x92f2,	// (0x0002ab87) list_single_pane_fp_g2

0x9b87,	// (0x0002b41c) list_single_pane_fp_g3_ParamLimits

0x9b87,	// (0x0002b41c) list_single_pane_fp_g3

0x44b8,	// (0x00025d4d) list_single_pane_fp_g4_ParamLimits

0x44b8,	// (0x00025d4d) list_single_pane_fp_g4

0x0003,

0xfb7a,	// (0x0003140f) list_single_pane_fp_g_ParamLimits

0xfb7a,	// (0x0003140f) list_single_pane_fp_g

0x9b9b,	// (0x0002b430) list_single_pane_fp_t1_ParamLimits

0x9b9b,	// (0x0002b430) list_single_pane_fp_t1

0x9bb2,	// (0x0002b447) list_single_graphic_pane_fp_g1_ParamLimits

0x9bb2,	// (0x0002b447) list_single_graphic_pane_fp_g1

0x44ac,	// (0x00025d41) list_single_graphic_pane_fp_g2_ParamLimits

0x44ac,	// (0x00025d41) list_single_graphic_pane_fp_g2

0x92f2,	// (0x0002ab87) list_single_graphic_pane_fp_g3_ParamLimits

0x92f2,	// (0x0002ab87) list_single_graphic_pane_fp_g3

0x9b87,	// (0x0002b41c) list_single_graphic_pane_fp_g4_ParamLimits

0x9b87,	// (0x0002b41c) list_single_graphic_pane_fp_g4

0x44b8,	// (0x00025d4d) list_single_graphic_pane_fp_g5_ParamLimits

0x44b8,	// (0x00025d4d) list_single_graphic_pane_fp_g5

0x0004,

0xfb83,	// (0x00031418) list_single_graphic_pane_fp_g_ParamLimits

0xfb83,	// (0x00031418) list_single_graphic_pane_fp_g

0x9bbe,	// (0x0002b453) list_single_graphic_pane_fp_t1_ParamLimits

0x9bbe,	// (0x0002b453) list_single_graphic_pane_fp_t1

0x9bb2,	// (0x0002b447) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x9bb2,	// (0x0002b447) list_single_graphic_heading_pane_fp_g1

0x44ac,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x44ac,	// (0x00025d41) list_single_graphic_heading_pane_fp_g2

0x92f2,	// (0x0002ab87) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x92f2,	// (0x0002ab87) list_single_graphic_heading_pane_fp_g3

0x9b87,	// (0x0002b41c) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x9b87,	// (0x0002b41c) list_single_graphic_heading_pane_fp_g4

0x44b8,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x44b8,	// (0x00025d4d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00031418) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00031418) list_single_graphic_heading_pane_fp_g

0x9bd4,	// (0x0002b469) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x9bd4,	// (0x0002b469) list_single_graphic_heading_pane_fp_t1

0x9bea,	// (0x0002b47f) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x9bea,	// (0x0002b47f) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8e,	// (0x00031423) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8e,	// (0x00031423) list_single_graphic_heading_pane_fp_t

0x9bfc,	// (0x0002b491) list_single_cale_day_pane_fp_g1_ParamLimits

0x9bfc,	// (0x0002b491) list_single_cale_day_pane_fp_g1

0x44c4,	// (0x00025d59) list_single_cale_day_pane_fp_g2_ParamLimits

0x44c4,	// (0x00025d59) list_single_cale_day_pane_fp_g2

0x9c34,	// (0x0002b4c9) list_single_cale_day_pane_fp_g3_ParamLimits

0x9c34,	// (0x0002b4c9) list_single_cale_day_pane_fp_g3

0x9c5c,	// (0x0002b4f1) list_single_cale_day_pane_fp_g4_ParamLimits

0x9c5c,	// (0x0002b4f1) list_single_cale_day_pane_fp_g4

0x9c80,	// (0x0002b515) list_single_cale_day_pane_fp_g5_ParamLimits

0x9c80,	// (0x0002b515) list_single_cale_day_pane_fp_g5

0x0004,

0xfb93,	// (0x00031428) list_single_cale_day_pane_fp_g_ParamLimits

0xfb93,	// (0x00031428) list_single_cale_day_pane_fp_g

0x9ca4,	// (0x0002b539) list_single_cale_day_pane_fp_t1_ParamLimits

0x9ca4,	// (0x0002b539) list_single_cale_day_pane_fp_t1

0x9cca,	// (0x0002b55f) list_single_cale_day_pane_fp_t2_ParamLimits

0x9cca,	// (0x0002b55f) list_single_cale_day_pane_fp_t2

0x9ce3,	// (0x0002b578) list_single_cale_day_pane_fp_t3_ParamLimits

0x9ce3,	// (0x0002b578) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9e,	// (0x00031433) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9e,	// (0x00031433) list_single_cale_day_pane_fp_t

0x44ac,	// (0x00025d41) list_empty_pane_fp_g1_ParamLimits

0x44ac,	// (0x00025d41) list_empty_pane_fp_g1

0x9cfc,	// (0x0002b591) list_empty_pane_fp_t1

0x9d0a,	// (0x0002b59f) list_empty_pane_fp_t2

0x0001,

0xfba5,	// (0x0003143a) list_empty_pane_fp_t

0x44ac,	// (0x00025d41) list_single_heading_pane_fp_g1_ParamLimits

0x44ac,	// (0x00025d41) list_single_heading_pane_fp_g1

0x92f2,	// (0x0002ab87) list_single_heading_pane_fp_g2_ParamLimits

0x92f2,	// (0x0002ab87) list_single_heading_pane_fp_g2

0x9b87,	// (0x0002b41c) list_single_heading_pane_fp_g3_ParamLimits

0x9b87,	// (0x0002b41c) list_single_heading_pane_fp_g3

0x0002,

0xfbaa,	// (0x0003143f) list_single_heading_pane_fp_g_ParamLimits

0xfbaa,	// (0x0003143f) list_single_heading_pane_fp_g

0x9d18,	// (0x0002b5ad) list_single_heading_pane_fp_t1_ParamLimits

0x9d18,	// (0x0002b5ad) list_single_heading_pane_fp_t1

0x9d2a,	// (0x0002b5bf) list_single_heading_pane_fp_t2_ParamLimits

0x9d2a,	// (0x0002b5bf) list_single_heading_pane_fp_t2

0x0001,

0xfbb1,	// (0x00031446) list_single_heading_pane_fp_t_ParamLimits

0xfbb1,	// (0x00031446) list_single_heading_pane_fp_t

0x15ea,	// (0x00022e7f) aid_size_cell_fast

0x0fd4,	// (0x00022869) soft_indicator_pane_cp1_t1

0x1627,	// (0x00022ebc) cell_app_pane_cp2_ParamLimits

0x1627,	// (0x00022ebc) cell_app_pane_cp2

0x7b41,	// (0x000293d6) fep_hwr_candidate_drop_down_list_pane

0x7d0b,	// (0x000295a0) fep_hwr_candidate_pane_g3_ParamLimits

0x7d0b,	// (0x000295a0) fep_hwr_candidate_pane_g3

0x04a6,	// (0x00021d3b) fep_hwr_candidate_pane_g4_ParamLimits

0x04a6,	// (0x00021d3b) fep_hwr_candidate_pane_g4

0x0002,

0xfb20,	// (0x000313b5) fep_hwr_candidate_pane_g_ParamLimits

0xfb20,	// (0x000313b5) fep_hwr_candidate_pane_g

0x407a,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x407a,	// (0x0002590f) fep_vkb_candidate_drop_down_list_pane

0x4371,	// (0x00025c06) fep_vkb_candidate_pane_g3

0x4379,	// (0x00025c0e) fep_vkb_candidate_pane_g4

0x0002,

0xfb4d,	// (0x000313e2) fep_vkb_candidate_pane_g

0x7e56,	// (0x000296eb) cell_hwr_candidate_pane_g1_ParamLimits

0x7e64,	// (0x000296f9) cell_hwr_candidate_pane_g3_ParamLimits

0x7e64,	// (0x000296f9) cell_hwr_candidate_pane_g3

0x9b66,	// (0x0002b3fb) cell_hwr_candidate_pane_g4_ParamLimits

0x9b66,	// (0x0002b3fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb6c,	// (0x00031401) cell_hwr_candidate_pane_g_ParamLimits

0xfb6c,	// (0x00031401) cell_hwr_candidate_pane_g

0x43d2,	// (0x00025c67) cell_vkb_candidate_pane_g3_ParamLimits

0x43d2,	// (0x00025c67) cell_vkb_candidate_pane_g3

0x43ed,	// (0x00025c82) cell_vkb_candidate_pane_g4_ParamLimits

0x43ed,	// (0x00025c82) cell_vkb_candidate_pane_g4

0x44d0,	// (0x00025d65) cell_app_pane_cp2_g1_ParamLimits

0x44d0,	// (0x00025d65) cell_app_pane_cp2_g1

0x44ee,	// (0x00025d83) cell_app_pane_cp2_g2_ParamLimits

0x44ee,	// (0x00025d83) cell_app_pane_cp2_g2

0x0001,

0xfbb6,	// (0x0003144b) cell_app_pane_cp2_g_ParamLimits

0xfbb6,	// (0x0003144b) cell_app_pane_cp2_g

0x44fa,	// (0x00025d8f) cell_app_pane_cp2_t1_ParamLimits

0x44fa,	// (0x00025d8f) cell_app_pane_cp2_t1

0x1458,	// (0x00022ced) grid_highlight_pane_cp1_ParamLimits

0x1458,	// (0x00022ced) grid_highlight_pane_cp1

0x7ea2,	// (0x00029737) cell_hwr_candidate_pane_cp1_ParamLimits

0x7ea2,	// (0x00029737) cell_hwr_candidate_pane_cp1

0x7e56,	// (0x000296eb) fep_hwr_candidate_drop_down_list_pane_g1

0x7ec0,	// (0x00029755) fep_hwr_candidate_drop_down_list_pane_g2

0x7ecd,	// (0x00029762) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbb,	// (0x00031450) fep_hwr_candidate_drop_down_list_pane_g

0x7eda,	// (0x0002976f) fep_hwr_candidate_drop_down_list_scroll_pane

0x7ee3,	// (0x00029778) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7ee3,	// (0x00029778) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x7ef0,	// (0x00029785) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7ef0,	// (0x00029785) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x7efd,	// (0x00029792) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7efd,	// (0x00029792) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x7f0a,	// (0x0002979f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7f0a,	// (0x0002979f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7f25,	// (0x000297ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7f25,	// (0x000297ba) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x7f40,	// (0x000297d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7f40,	// (0x000297d5) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x7f5b,	// (0x000297f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7f5b,	// (0x000297f0) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x7f76,	// (0x0002980b) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7f76,	// (0x0002980b) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc2,	// (0x00031457) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc2,	// (0x00031457) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xeb10,	// (0x000303a5) cell_vkb_candidate_pane_cp1_ParamLimits

0xeb10,	// (0x000303a5) cell_vkb_candidate_pane_cp1

0x4161,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4161,	// (0x000259f6) fep_vkb_candidate_drop_down_list_pane_g1

0x450c,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x450c,	// (0x00025da1) fep_vkb_candidate_drop_down_list_pane_g2

0x4519,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4519,	// (0x00025dae) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd3,	// (0x00031468) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd3,	// (0x00031468) fep_vkb_candidate_drop_down_list_pane_g

0x4526,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4526,	// (0x00025dbb) fep_vkb_candidate_drop_down_list_scroll_pane

0x4533,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4533,	// (0x00025dc8) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4540,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4540,	// (0x00025dd5) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x454c,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x454c,	// (0x00025de1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4390,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4390,	// (0x00025c25) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x43b1,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x43b1,	// (0x00025c46) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4558,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4558,	// (0x00025ded) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4579,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4579,	// (0x00025e0e) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x459a,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x459a,	// (0x00025e2f) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0003146f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0003146f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xd153,	// (0x0002e9e8) title_pane_g1_ParamLimits

0xd16a,	// (0x0002e9ff) title_pane_g2_ParamLimits

0xf54e,	// (0x00030de3) title_pane_g_ParamLimits

0x1962,	// (0x000231f7) aid_call2_pane

0x195a,	// (0x000231ef) aid_call_pane

0x196a,	// (0x000231ff) popup_clock_analogue_window_g1

0x196a,	// (0x000231ff) popup_clock_analogue_window_g2

0x62b5,	// (0x00027b4a) popup_clock_analogue_window_g3

0x62be,	// (0x00027b53) popup_clock_analogue_window_g4

0x0dd8,	// (0x0002266d) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x00030f8d) popup_clock_analogue_window_g

0x62c6,	// (0x00027b5b) popup_clock_analogue_window_t1

0x630a,	// (0x00027b9f) clock_digital_number_pane_ParamLimits

0x630a,	// (0x00027b9f) clock_digital_number_pane

0x6316,	// (0x00027bab) clock_digital_number_pane_cp02_ParamLimits

0x6316,	// (0x00027bab) clock_digital_number_pane_cp02

0x6322,	// (0x00027bb7) clock_digital_number_pane_cp03_ParamLimits

0x6322,	// (0x00027bb7) clock_digital_number_pane_cp03

0x632e,	// (0x00027bc3) clock_digital_number_pane_cp04_ParamLimits

0x632e,	// (0x00027bc3) clock_digital_number_pane_cp04

0x633a,	// (0x00027bcf) clock_digital_separator_pane_ParamLimits

0x633a,	// (0x00027bcf) clock_digital_separator_pane

0x6346,	// (0x00027bdb) popup_clock_digital_window_t1_ParamLimits

0x6346,	// (0x00027bdb) popup_clock_digital_window_t1

0x0dd8,	// (0x0002266d) clock_digital_number_pane_g1

0x0dd8,	// (0x0002266d) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x00030f98) clock_digital_number_pane_g

0x0dd8,	// (0x0002266d) clock_digital_separator_pane_g1

0x0dd8,	// (0x0002266d) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x00030f98) clock_digital_separator_pane_g

0xe0b2,	// (0x0002f947) aid_fill_nsta_ParamLimits

0xe1c9,	// (0x0002fa5e) indicator_nsta_pane_ParamLimits

0x2087,	// (0x0002391c) popup_clock_analogue_window

0x2087,	// (0x0002391c) popup_clock_digital_window

0x21e0,	// (0x00023a75) grid_indicator_nsta_pane_ParamLimits

0x3b25,	// (0x000253ba) clock_nsta_pane_t2

0x0001,

0xfaa0,	// (0x00031335) clock_nsta_pane_t

0x621e,	// (0x00027ab3) aid_size_max_handle

0xc241,	// (0x0002dad6) aid_size_min_handle

0x1dfc,	// (0x00023691) editor_scroll_pane

0x45b5,	// (0x00025e4a) ex_editor_pane

0x15a7,	// (0x00022e3c) scroll_pane_cp13

0x1408,	// (0x00022c9d) scroll_pane_cp14

0x1999,	// (0x0002322e) scroll_pane_cp36

0xde7b,	// (0x0002f710) list_single_graphic_hl_pane_cp2_ParamLimits

0xde7b,	// (0x0002f710) list_single_graphic_hl_pane_cp2

0xe7c2,	// (0x00030057) list_single_graphic_hl_pane_ParamLimits

0xe7c2,	// (0x00030057) list_single_graphic_hl_pane

0x9d40,	// (0x0002b5d5) aid_size_min_hl_cp1

0x45bd,	// (0x00025e52) list_highlight_pane_cp34_ParamLimits

0x45bd,	// (0x00025e52) list_highlight_pane_cp34

0x45ce,	// (0x00025e63) list_single_graphic_hl_pane_g1_ParamLimits

0x45ce,	// (0x00025e63) list_single_graphic_hl_pane_g1

0xd943,	// (0x0002f1d8) list_single_graphic_hl_pane_g2_ParamLimits

0xd943,	// (0x0002f1d8) list_single_graphic_hl_pane_g2

0xd943,	// (0x0002f1d8) list_single_graphic_hl_pane_g3_ParamLimits

0xd943,	// (0x0002f1d8) list_single_graphic_hl_pane_g3

0xd94f,	// (0x0002f1e4) list_single_graphic_hl_pane_g4_ParamLimits

0xd94f,	// (0x0002f1e4) list_single_graphic_hl_pane_g4

0xd95b,	// (0x0002f1f0) list_single_graphic_hl_pane_g5_ParamLimits

0xd95b,	// (0x0002f1f0) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x00031480) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x00031480) list_single_graphic_hl_pane_g

0xd96f,	// (0x0002f204) list_single_graphic_hl_pane_t1_ParamLimits

0xd96f,	// (0x0002f204) list_single_graphic_hl_pane_t1

0x45db,	// (0x00025e70) aid_size_min_hl_cp2

0x45e4,	// (0x00025e79) list_highlight_pane_cp34_cp2_ParamLimits

0x45e4,	// (0x00025e79) list_highlight_pane_cp34_cp2

0x45ce,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x45ce,	// (0x00025e63) list_single_graphic_hl_pane_g1_cp2

0x45f1,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x45f1,	// (0x00025e86) list_single_graphic_hl_pane_g2_cp2

0x45fd,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x45fd,	// (0x00025e92) list_single_graphic_hl_pane_g3_cp2

0x1c71,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1c71,	// (0x00023506) list_single_graphic_hl_pane_g4_cp2

0x4416,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4416,	// (0x00025cab) list_single_graphic_hl_pane_g5_cp2

0xc26b,	// (0x0002db00) control_pane_g4_ParamLimits

0xc26b,	// (0x0002db00) control_pane_g4

0x15de,	// (0x00022e73) bg_popup_sub_pane_cp10_ParamLimits

0x3f3f,	// (0x000257d4) list_choice_list_pane_ParamLimits

0x3f4e,	// (0x000257e3) scroll_pane_cp23

0x0ff1,	// (0x00022886) bg_popup_preview_window_pane_cp02_ParamLimits

0x4452,	// (0x00025ce7) list_preview_fixed_pane_ParamLimits

0x4468,	// (0x00025cfd) list_preview_fixed_pane_cp_ParamLimits

0x4468,	// (0x00025cfd) list_preview_fixed_pane_cp

0x4474,	// (0x00025d09) popup_preview_fixed_window_g1_ParamLimits

0x4474,	// (0x00025d09) popup_preview_fixed_window_g1

0x4480,	// (0x00025d15) popup_preview_fixed_window_g2_ParamLimits

0x4480,	// (0x00025d15) popup_preview_fixed_window_g2

0x0002,

0xfb73,	// (0x00031408) popup_preview_fixed_window_g_ParamLimits

0xfb73,	// (0x00031408) popup_preview_fixed_window_g

0x6122,	// (0x000279b7) aid_navi_side_left_pane_ParamLimits

0x6132,	// (0x000279c7) aid_navi_side_right_pane_ParamLimits

0x6141,	// (0x000279d6) navi_icon_pane_stacon_ParamLimits

0x6151,	// (0x000279e6) navi_navi_pane_stacon_ParamLimits

0x6141,	// (0x000279d6) navi_text_pane_stacon_ParamLimits

0x5abc,	// (0x00027351) main_text_info_pane

0x461f,	// (0x00025eb4) listscroll_text_info_pane

0x4627,	// (0x00025ebc) list_text_info_pane_ParamLimits

0x4627,	// (0x00025ebc) list_text_info_pane

0x4636,	// (0x00025ecb) scroll_pane_cp24_ParamLimits

0x4636,	// (0x00025ecb) scroll_pane_cp24

0xeb30,	// (0x000303c5) list_text_info_pane_t1_ParamLimits

0xeb30,	// (0x000303c5) list_text_info_pane_t1

0xc3b2,	// (0x0002dc47) popup_fast_swap2_window_ParamLimits

0xc3b2,	// (0x0002dc47) popup_fast_swap2_window

0x4654,	// (0x00025ee9) aid_size_cell_fast2

0x0dce,	// (0x00022663) bg_popup_window_pane_cp17

0x255c,	// (0x00023df1) heading_pane_cp2

0x1207,	// (0x00022a9c) listscroll_fast2_pane

0x465e,	// (0x00025ef3) grid_fast2_pane

0x4666,	// (0x00025efb) listscroll_fast2_pane_g1

0x466e,	// (0x00025f03) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0003148b) listscroll_fast2_pane_g

0x15a7,	// (0x00022e3c) scroll_pane_cp26

0x4676,	// (0x00025f0b) cell_fast2_pane_ParamLimits

0x4676,	// (0x00025f0b) cell_fast2_pane

0x468c,	// (0x00025f21) cell_fast2_pane_g1

0x4695,	// (0x00025f2a) cell_fast2_pane_g2

0x469e,	// (0x00025f33) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x00031490) cell_fast2_pane_g

0x1269,	// (0x00022afe) grid_highlight_pane_cp9

0x6927,	// (0x000281bc) main_eswt_pane_ParamLimits

0x6927,	// (0x000281bc) main_eswt_pane

0x464b,	// (0x00025ee0) list_single_text_info_pane

0x46a6,	// (0x00025f3b) eswt_ctrl_button_pane

0x46a6,	// (0x00025f3b) eswt_ctrl_canvas_pane

0x46ae,	// (0x00025f43) eswt_ctrl_combo_pane

0x46a6,	// (0x00025f3b) eswt_ctrl_default_pane

0x46a6,	// (0x00025f3b) eswt_ctrl_label_pane

0x46b6,	// (0x00025f4b) eswt_ctrl_wait_pane

0x46be,	// (0x00025f53) eswt_shell_pane

0x0dce,	// (0x00022663) listscroll_eswt_app_pane

0x46da,	// (0x00025f6f) popup_eswt_tasktip_window_ParamLimits

0x46da,	// (0x00025f6f) popup_eswt_tasktip_window

0x2232,	// (0x00023ac7) bg_popup_window_pane_cp18

0x46eb,	// (0x00025f80) eswt_control_pane_g1_ParamLimits

0x46eb,	// (0x00025f80) eswt_control_pane_g1

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_ParamLimits

0x46f8,	// (0x00025f8d) eswt_control_pane_g2

0x4705,	// (0x00025f9a) eswt_control_pane_g3_ParamLimits

0x4705,	// (0x00025f9a) eswt_control_pane_g3

0x4712,	// (0x00025fa7) eswt_control_pane_g4_ParamLimits

0x4712,	// (0x00025fa7) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x00031497) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x00031497) eswt_control_pane_g

0x1458,	// (0x00022ced) bg_button_pane_ParamLimits

0x1458,	// (0x00022ced) bg_button_pane

0x127e,	// (0x00022b13) common_borders_pane_copy2_ParamLimits

0x127e,	// (0x00022b13) common_borders_pane_copy2

0x471f,	// (0x00025fb4) control_button_pane_g1_ParamLimits

0x471f,	// (0x00025fb4) control_button_pane_g1

0x472b,	// (0x00025fc0) control_button_pane_g2_ParamLimits

0x472b,	// (0x00025fc0) control_button_pane_g2

0x4737,	// (0x00025fcc) control_button_pane_g3_ParamLimits

0x4737,	// (0x00025fcc) control_button_pane_g3

0x0002,

0xfc0b,	// (0x000314a0) control_button_pane_g_ParamLimits

0xfc0b,	// (0x000314a0) control_button_pane_g

0x474b,	// (0x00025fe0) control_button_pane_t1

0x4759,	// (0x00025fee) control_button_pane_t2

0x0001,

0xfc12,	// (0x000314a7) control_button_pane_t

0x2188,	// (0x00023a1d) bg_button_pane_g1

0x2190,	// (0x00023a25) bg_button_pane_g2

0x2198,	// (0x00023a2d) bg_button_pane_g3

0x21a0,	// (0x00023a35) bg_button_pane_g4

0x21a8,	// (0x00023a3d) bg_button_pane_g5

0x21b0,	// (0x00023a45) bg_button_pane_g6

0x21b8,	// (0x00023a4d) bg_button_pane_g7

0x21c0,	// (0x00023a55) bg_button_pane_g8

0x21c8,	// (0x00023a5d) bg_button_pane_g9

0x0008,

0xf85a,	// (0x000310ef) bg_button_pane_g

0x3efa,	// (0x0002578f) common_borders_pane_ParamLimits

0x3efa,	// (0x0002578f) common_borders_pane

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy1_ParamLimits

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy1

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy1_ParamLimits

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy1

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy1_ParamLimits

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy1

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy1_ParamLimits

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy1

0x3f35,	// (0x000257ca) bg_eswt_ctrl_canvas_pane_g1

0x3efa,	// (0x0002578f) common_borders_pane_cp2_ParamLimits

0x3efa,	// (0x0002578f) common_borders_pane_cp2

0x3efa,	// (0x0002578f) common_borders_pane_cp3_ParamLimits

0x3efa,	// (0x0002578f) common_borders_pane_cp3

0x4767,	// (0x00025ffc) separator_horizontal_pane

0x17f9,	// (0x0002308e) separator_vertical_pane

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy2_ParamLimits

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy2

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy2_ParamLimits

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy2

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy2_ParamLimits

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy2

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy2_ParamLimits

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy2

0x0dce,	// (0x00022663) common_borders_pane_cp4

0x476f,	// (0x00026004) separator_horizontal_pane_g1

0x4778,	// (0x0002600d) separator_horizontal_pane_g2

0x4781,	// (0x00026016) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x000314ac) separator_horizontal_pane_g

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy3_ParamLimits

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy3

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy3_ParamLimits

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy3

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy3_ParamLimits

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy3

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy3_ParamLimits

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy3

0x0dce,	// (0x00022663) common_borders_pane_cp5

0x478a,	// (0x0002601f) separator_vertical_pane_g1

0x4793,	// (0x00026028) separator_vertical_pane_g2

0x479c,	// (0x00026031) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x000314b3) separator_vertical_pane_g

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy4_ParamLimits

0x46eb,	// (0x00025f80) eswt_control_pane_g1_copy4

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy4_ParamLimits

0x46f8,	// (0x00025f8d) eswt_control_pane_g2_copy4

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy4_ParamLimits

0x4705,	// (0x00025f9a) eswt_control_pane_g3_copy4

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy4_ParamLimits

0x4712,	// (0x00025fa7) eswt_control_pane_g4_copy4

0xeb4b,	// (0x000303e0) eswt_ctrl_combo_button_pane

0xeb53,	// (0x000303e8) eswt_ctrl_input_pane

0xeb5b,	// (0x000303f0) popup_choice_list_window_cp70

0xeb63,	// (0x000303f8) eswt_ctrl_input_pane_t1

0x0dce,	// (0x00022663) input_focus_pane_cp70

0x3efa,	// (0x0002578f) bg_button_pane_cp70_ParamLimits

0x3efa,	// (0x0002578f) bg_button_pane_cp70

0xeb71,	// (0x00030406) eswt_ctrl_combo_button_pane_g1

0x47a5,	// (0x0002603a) wait_bar_pane_cp70

0x2232,	// (0x00023ac7) bg_popup_window_pane_cp70_ParamLimits

0x2232,	// (0x00023ac7) bg_popup_window_pane_cp70

0x47ad,	// (0x00026042) popup_eswt_tasktip_window_t1

0x47c3,	// (0x00026058) wait_bar_pane_cp71_ParamLimits

0x47c3,	// (0x00026058) wait_bar_pane_cp71

0x47cf,	// (0x00026064) grid_eswt_app_pane

0x1802,	// (0x00023097) scroll_pane_cp70

0xeb79,	// (0x0003040e) cell_eswt_app_pane_ParamLimits

0xeb79,	// (0x0003040e) cell_eswt_app_pane

0xeba1,	// (0x00030436) cell_eswt_app_pane_g1_ParamLimits

0xeba1,	// (0x00030436) cell_eswt_app_pane_g1

0xebd0,	// (0x00030465) cell_eswt_app_pane_g2_ParamLimits

0xebd0,	// (0x00030465) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x000314ba) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x000314ba) cell_eswt_app_pane_g

0xebf9,	// (0x0003048e) cell_eswt_app_pane_t1_ParamLimits

0xebf9,	// (0x0003048e) cell_eswt_app_pane_t1

0x47d8,	// (0x0002606d) grid_highlight_pane_cp70_ParamLimits

0x47d8,	// (0x0002606d) grid_highlight_pane_cp70

0x1472,	// (0x00022d07) set_content_pane_g1

0x1f7b,	// (0x00023810) status_small_volume_pane

0x80b1,	// (0x00029946) status_small_volume_pane_g1

0x80b9,	// (0x0002994e) volume_small2_pane

0x80c2,	// (0x00029957) volume_small2_pane_g1

0x80cb,	// (0x00029960) volume_small2_pane_g2

0x80d4,	// (0x00029969) volume_small2_pane_g3

0x80dd,	// (0x00029972) volume_small2_pane_g4

0x80e6,	// (0x0002997b) volume_small2_pane_g5

0x80ef,	// (0x00029984) volume_small2_pane_g6

0x80f8,	// (0x0002998d) volume_small2_pane_g7

0x8101,	// (0x00029996) volume_small2_pane_g8

0x810a,	// (0x0002999f) volume_small2_pane_g9

0x8113,	// (0x000299a8) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x000314bf) volume_small2_pane_g

0x4268,	// (0x00025afd) fep_vkb_top_text_pane_g1_ParamLimits

0xeab8,	// (0x0003034d) fep_vkb_top_text_pane_t1_ParamLimits

0x448c,	// (0x00025d21) popup_preview_fixed_window_g3_ParamLimits

0x448c,	// (0x00025d21) popup_preview_fixed_window_g3

0xc8d2,	// (0x0002e167) popup_toolbar_trans_pane

0xe64f,	// (0x0002fee4) aid_height_set_list_ParamLimits

0x32ab,	// (0x00024b40) aid_size_parent_ParamLimits

0x15de,	// (0x00022e73) list_highlight_pane_cp2_ParamLimits

0x1472,	// (0x00022d07) set_content_pane_g1_ParamLimits

0xe7d5,	// (0x0003006a) list_single_image_pane_ParamLimits

0xe7d5,	// (0x0003006a) list_single_image_pane

0xec2b,	// (0x000304c0) aid_size_cell_image_ParamLimits

0xec2b,	// (0x000304c0) aid_size_cell_image

0xec38,	// (0x000304cd) grid_single_image_pane_ParamLimits

0xec38,	// (0x000304cd) grid_single_image_pane

0x1472,	// (0x00022d07) list_single_image_pane_g1_ParamLimits

0x1472,	// (0x00022d07) list_single_image_pane_g1

0x147e,	// (0x00022d13) list_single_image_pane_g2_ParamLimits

0x147e,	// (0x00022d13) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x000314d4) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x000314d4) list_single_image_pane_g

0x3daa,	// (0x0002563f) list_single_image_pane_t1_ParamLimits

0x3daa,	// (0x0002563f) list_single_image_pane_t1

0xec44,	// (0x000304d9) cell_image_list_pane_ParamLimits

0xec44,	// (0x000304d9) cell_image_list_pane

0xec58,	// (0x000304ed) cell_image_list_pane_g1

0xec61,	// (0x000304f6) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x000314d9) cell_image_list_pane_g

0x47e4,	// (0x00026079) aid_size_cell_tb_trans_pane

0x1458,	// (0x00022ced) bg_tb_trans_pane

0x47f6,	// (0x0002608b) grid_tb_trans_pane

0x2188,	// (0x00023a1d) bg_tb_trans_pane_g1

0x2190,	// (0x00023a25) bg_tb_trans_pane_g2

0x2198,	// (0x00023a2d) bg_tb_trans_pane_g3

0x21a0,	// (0x00023a35) bg_tb_trans_pane_g4

0x21a8,	// (0x00023a3d) bg_tb_trans_pane_g5

0x21c0,	// (0x00023a55) bg_tb_trans_pane_g6

0x21c8,	// (0x00023a5d) bg_tb_trans_pane_g7

0x21b0,	// (0x00023a45) bg_tb_trans_pane_g8

0x21b8,	// (0x00023a4d) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x000314de) bg_tb_trans_pane_g

0x480a,	// (0x0002609f) cell_toolbar_trans_pane_ParamLimits

0x480a,	// (0x0002609f) cell_toolbar_trans_pane

0x3f35,	// (0x000257ca) cell_toolbar_trans_pane_g1

0xea02,	// (0x00030297) list_form2_midp_pane_t1

0xea10,	// (0x000302a5) list_form2_midp_pane_t2

0x0001,

0xfae6,	// (0x0003137b) list_form2_midp_pane_t

0x3bf3,	// (0x00025488) scroll_pane_cp51_ParamLimits

0x3d69,	// (0x000255fe) form2_midp_wait_pane_g1

0x3d72,	// (0x00025607) form2_midp_wait_pane_g2

0x3d7b,	// (0x00025610) form2_midp_wait_pane_g3

0x0002,

0xfafb,	// (0x00031390) form2_midp_wait_pane_g

0x0ebe,	// (0x00022753) list_highlight_pane_cp21_ParamLimits

0x3dcf,	// (0x00025664) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3dde,	// (0x00025673) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x97ed,	// (0x0002b082) list_single_2graphic_im_pane_ParamLimits

0x97ed,	// (0x0002b082) list_single_2graphic_im_pane

0xec6a,	// (0x000304ff) list_single_2graphic_im_pane_g1_ParamLimits

0xec6a,	// (0x000304ff) list_single_2graphic_im_pane_g1

0xec7b,	// (0x00030510) list_single_2graphic_im_pane_g2_ParamLimits

0xec7b,	// (0x00030510) list_single_2graphic_im_pane_g2

0xec87,	// (0x0003051c) list_single_2graphic_im_pane_g3_ParamLimits

0xec87,	// (0x0003051c) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x000314f1) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x000314f1) list_single_2graphic_im_pane_g

0xec9b,	// (0x00030530) list_single_2graphic_im_pane_t1_ParamLimits

0xec9b,	// (0x00030530) list_single_2graphic_im_pane_t1

0x4498,	// (0x00025d2d) list_single_graphic_2heading_pane_fp_ParamLimits

0x4498,	// (0x00025d2d) list_single_graphic_2heading_pane_fp

0x9bb2,	// (0x0002b447) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x9bb2,	// (0x0002b447) list_single_graphic_2heading_pane_fp_g1

0x44ac,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x44ac,	// (0x00025d41) list_single_graphic_2heading_pane_fp_g2

0x92f2,	// (0x0002ab87) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x92f2,	// (0x0002ab87) list_single_graphic_2heading_pane_fp_g3

0x9b87,	// (0x0002b41c) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x9b87,	// (0x0002b41c) list_single_graphic_2heading_pane_fp_g4

0x44b8,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x44b8,	// (0x00025d4d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb83,	// (0x00031418) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb83,	// (0x00031418) list_single_graphic_2heading_pane_fp_g

0x9d7f,	// (0x0002b614) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x9d7f,	// (0x0002b614) list_single_graphic_2heading_pane_fp_t1

0x9bea,	// (0x0002b47f) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x9bea,	// (0x0002b47f) list_single_graphic_2heading_pane_fp_t2

0x9d95,	// (0x0002b62a) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x9d95,	// (0x0002b62a) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x000314fa) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x000314fa) list_single_graphic_2heading_pane_fp_t

0x3fbe,	// (0x00025853) fep_hwr_write_pane_g5_ParamLimits

0x3fbe,	// (0x00025853) fep_hwr_write_pane_g5

0x3fca,	// (0x0002585f) fep_hwr_write_pane_g6_ParamLimits

0x3fca,	// (0x0002585f) fep_hwr_write_pane_g6

0x46be,	// (0x00025f53) eswt_shell_pane_ParamLimits

0x2232,	// (0x00023ac7) bg_popup_window_pane_cp18_ParamLimits

0x324f,	// (0x00024ae4) heading_pane_cp70

0x47ad,	// (0x00026042) popup_eswt_tasktip_window_t1_ParamLimits

0xe0f6,	// (0x0002f98b) aid_touch_tab_arrow_left

0xe10a,	// (0x0002f99f) aid_touch_tab_arrow_right

0xd189,	// (0x0002ea1e) title_pane_g3_ParamLimits

0xd189,	// (0x0002ea1e) title_pane_g3

0x1428,	// (0x00022cbd) set_value_pane_g1

0xc8d2,	// (0x0002e167) popup_toolbar_trans_pane_ParamLimits

0x47e4,	// (0x00026079) aid_size_cell_tb_trans_pane_ParamLimits

0x1458,	// (0x00022ced) bg_tb_trans_pane_ParamLimits

0x47f6,	// (0x0002608b) grid_tb_trans_pane_ParamLimits

0x0ff1,	// (0x00022886) cont_note_pane_ParamLimits

0x0ff1,	// (0x00022886) cont_note_pane

0x127e,	// (0x00022b13) cont_snote2_single_text_pane_ParamLimits

0x127e,	// (0x00022b13) cont_snote2_single_text_pane

0x127e,	// (0x00022b13) cont_snote2_single_graphic_pane_ParamLimits

0x127e,	// (0x00022b13) cont_snote2_single_graphic_pane

0x2772,	// (0x00024007) cont_note_wait_pane_ParamLimits

0x2772,	// (0x00024007) cont_note_wait_pane

0x2772,	// (0x00024007) cont_note_image_pane_ParamLimits

0x2772,	// (0x00024007) cont_note_image_pane

0x483c,	// (0x000260d1) popup_note2_window_g1_ParamLimits

0x483c,	// (0x000260d1) popup_note2_window_g1

0x486d,	// (0x00026102) popup_note2_window_t1_ParamLimits

0x486d,	// (0x00026102) popup_note2_window_t1

0x48b2,	// (0x00026147) popup_note2_window_t2_ParamLimits

0x48b2,	// (0x00026147) popup_note2_window_t2

0x48f7,	// (0x0002618c) popup_note2_window_t3_ParamLimits

0x48f7,	// (0x0002618c) popup_note2_window_t3

0x493c,	// (0x000261d1) popup_note2_window_t4_ParamLimits

0x493c,	// (0x000261d1) popup_note2_window_t4

0x1075,	// (0x0002290a) popup_note2_window_t5_ParamLimits

0x1075,	// (0x0002290a) popup_note2_window_t5

0x0004,

0xfc71,	// (0x00031506) popup_note2_window_t_ParamLimits

0xfc71,	// (0x00031506) popup_note2_window_t

0x496b,	// (0x00026200) popup_note2_image_window_g1_ParamLimits

0x496b,	// (0x00026200) popup_note2_image_window_g1

0x4977,	// (0x0002620c) popup_note2_image_window_g2_ParamLimits

0x4977,	// (0x0002620c) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x00031511) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x00031511) popup_note2_image_window_g

0x4989,	// (0x0002621e) popup_note2_image_window_t1_ParamLimits

0x4989,	// (0x0002621e) popup_note2_image_window_t1

0x49a1,	// (0x00026236) popup_note2_image_window_t2_ParamLimits

0x49a1,	// (0x00026236) popup_note2_image_window_t2

0x49b9,	// (0x0002624e) popup_note2_image_window_t3_ParamLimits

0x49b9,	// (0x0002624e) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x00031516) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x00031516) popup_note2_image_window_t

0x2780,	// (0x00024015) popup_note2_wait_window_g1_ParamLimits

0x2780,	// (0x00024015) popup_note2_wait_window_g1

0x278c,	// (0x00024021) popup_note2_wait_window_g2_ParamLimits

0x278c,	// (0x00024021) popup_note2_wait_window_g2

0x2798,	// (0x0002402d) popup_note2_wait_window_g3_ParamLimits

0x2798,	// (0x0002402d) popup_note2_wait_window_g3

0x0002,

0xf83c,	// (0x000310d1) popup_note2_wait_window_g_ParamLimits

0xf83c,	// (0x000310d1) popup_note2_wait_window_g

0x49d5,	// (0x0002626a) popup_note2_wait_window_t1_ParamLimits

0x49d5,	// (0x0002626a) popup_note2_wait_window_t1

0x49f3,	// (0x00026288) popup_note2_wait_window_t2_ParamLimits

0x49f3,	// (0x00026288) popup_note2_wait_window_t2

0x4a11,	// (0x000262a6) popup_note2_wait_window_t3_ParamLimits

0x4a11,	// (0x000262a6) popup_note2_wait_window_t3

0x4a23,	// (0x000262b8) popup_note2_wait_window_t4_ParamLimits

0x4a23,	// (0x000262b8) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x0003151d) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x0003151d) popup_note2_wait_window_t

0x4a35,	// (0x000262ca) wait_bar2_pane_ParamLimits

0x4a35,	// (0x000262ca) wait_bar2_pane

0x4a4d,	// (0x000262e2) popup_snote2_single_text_window_g1_ParamLimits

0x4a4d,	// (0x000262e2) popup_snote2_single_text_window_g1

0x4a75,	// (0x0002630a) popup_snote2_single_text_window_t1_ParamLimits

0x4a75,	// (0x0002630a) popup_snote2_single_text_window_t1

0x4ac1,	// (0x00026356) popup_snote2_single_text_window_t2_ParamLimits

0x4ac1,	// (0x00026356) popup_snote2_single_text_window_t2

0x4b0d,	// (0x000263a2) popup_snote2_single_text_window_t3_ParamLimits

0x4b0d,	// (0x000263a2) popup_snote2_single_text_window_t3

0x4b4e,	// (0x000263e3) popup_snote2_single_text_window_t4_ParamLimits

0x4b4e,	// (0x000263e3) popup_snote2_single_text_window_t4

0x4b84,	// (0x00026419) popup_snote2_single_text_window_t5_ParamLimits

0x4b84,	// (0x00026419) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x00031526) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x00031526) popup_snote2_single_text_window_t

0x4baf,	// (0x00026444) popup_snote2_single_graphic_window_g1_ParamLimits

0x4baf,	// (0x00026444) popup_snote2_single_graphic_window_g1

0x4bd7,	// (0x0002646c) popup_snote2_single_graphic_window_g2_ParamLimits

0x4bd7,	// (0x0002646c) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x00031531) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x00031531) popup_snote2_single_graphic_window_g

0x4bff,	// (0x00026494) popup_snote2_single_graphic_window_t1_ParamLimits

0x4bff,	// (0x00026494) popup_snote2_single_graphic_window_t1

0x4c4b,	// (0x000264e0) popup_snote2_single_graphic_window_t2_ParamLimits

0x4c4b,	// (0x000264e0) popup_snote2_single_graphic_window_t2

0x4b0d,	// (0x000263a2) popup_snote2_single_graphic_window_t3_ParamLimits

0x4b0d,	// (0x000263a2) popup_snote2_single_graphic_window_t3

0x4b4e,	// (0x000263e3) popup_snote2_single_graphic_window_t4_ParamLimits

0x4b4e,	// (0x000263e3) popup_snote2_single_graphic_window_t4

0x4b84,	// (0x00026419) popup_snote2_single_graphic_window_t5_ParamLimits

0x4b84,	// (0x00026419) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x00031536) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x00031536) popup_snote2_single_graphic_window_t

0x3b8c,	// (0x00025421) clock_nsta_pane_cp2_t1

0x3b8c,	// (0x00025421) clock_nsta_pane_cp2_t2

0x0001,

0xfabc,	// (0x00031351) clock_nsta_pane_cp2_t

0x949e,	// (0x0002ad33) form_field_data_wide_pane_g1_ParamLimits

0x1472,	// (0x00022d07) form_field_data_wide_pane_g2_ParamLimits

0x1472,	// (0x00022d07) form_field_data_wide_pane_g2

0x147e,	// (0x00022d13) form_field_data_wide_pane_g3_ParamLimits

0x147e,	// (0x00022d13) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x00030f10) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x00030f10) form_field_data_wide_pane_g

0xe94b,	// (0x000301e0) grid_touch_3_pane_ParamLimits

0xe94b,	// (0x000301e0) grid_touch_3_pane

0xeccc,	// (0x00030561) cell_touch_3_pane_ParamLimits

0xeccc,	// (0x00030561) cell_touch_3_pane

0x3f35,	// (0x000257ca) cell_touch_3_pane_g1

0x3f35,	// (0x000257ca) cell_touch_3_pane_g2

0x0001,

0xfb41,	// (0x000313d6) cell_touch_3_pane_g

0x10cd,	// (0x00022962) cont_query_data_pane

0x10d5,	// (0x0002296a) cont_query_data_pane_cp1

0x4c97,	// (0x0002652c) button_value_adjust_pane_cp7

0x4c9f,	// (0x00026534) query_popup_pane_cp3

0x19aa,	// (0x0002323f) bg_popup_sub_pane_cp22_ParamLimits

0x63c7,	// (0x00027c5c) navi_navi_volume_pane_cp2

0x63df,	// (0x00027c74) popup_side_volume_key_window_g2

0x63eb,	// (0x00027c80) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x00030fa6) popup_side_volume_key_window_g

0x6405,	// (0x00027c9a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x00030fad) popup_side_volume_key_window_t

0x1bf4,	// (0x00023489) popup_side_volume_key_window_ParamLimits

0xd43c,	// (0x0002ecd1) list_double_graphic_pane_g4_ParamLimits

0xd43c,	// (0x0002ecd1) list_double_graphic_pane_g4

0xe7ad,	// (0x00030042) list_single_2heading_msg_pane_ParamLimits

0xe7ad,	// (0x00030042) list_single_2heading_msg_pane

0xd985,	// (0x0002f21a) list_single_2heading_msg_pane_g1_ParamLimits

0xd985,	// (0x0002f21a) list_single_2heading_msg_pane_g1

0xd991,	// (0x0002f226) list_single_2heading_msg_pane_g2_ParamLimits

0xd991,	// (0x0002f226) list_single_2heading_msg_pane_g2

0xd9a4,	// (0x0002f239) list_single_2heading_msg_pane_g3_ParamLimits

0xd9a4,	// (0x0002f239) list_single_2heading_msg_pane_g3

0xd9b0,	// (0x0002f245) list_single_2heading_msg_pane_g4_ParamLimits

0xd9b0,	// (0x0002f245) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x00031541) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x00031541) list_single_2heading_msg_pane_g

0xd9c8,	// (0x0002f25d) list_single_2heading_msg_pane_t1_ParamLimits

0xd9c8,	// (0x0002f25d) list_single_2heading_msg_pane_t1

0xd9f0,	// (0x0002f285) list_single_2heading_msg_pane_t2_ParamLimits

0xd9f0,	// (0x0002f285) list_single_2heading_msg_pane_t2

0xda5b,	// (0x0002f2f0) list_single_2heading_msg_pane_t3_ParamLimits

0xda5b,	// (0x0002f2f0) list_single_2heading_msg_pane_t3

0x9e78,	// (0x0002b70d) list_single_2heading_msg_pane_t4_ParamLimits

0x9e78,	// (0x0002b70d) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x0003154a) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x0003154a) list_single_2heading_msg_pane_t

0x0e64,	// (0x000226f9) title_pane_g4_ParamLimits

0x0e64,	// (0x000226f9) title_pane_g4

0x6098,	// (0x0002792d) title_pane_stacon_g3_ParamLimits

0x6098,	// (0x0002792d) title_pane_stacon_g3

0x4830,	// (0x000260c5) list_single_2graphic_im_pane_g4_ParamLimits

0x4830,	// (0x000260c5) list_single_2graphic_im_pane_g4

0x3079,	// (0x0002490e) popup_side_volume_key_window_cp

0x3508,	// (0x00024d9d) main_idle_act2_pane_t1

0x70d4,	// (0x00028969) toolbar_button_pane_g10

0xdcb4,	// (0x0002f549) popup_toolbar_window_cp1

0x3b7d,	// (0x00025412) clock_nsta_pane_cp_t1

0x3b7d,	// (0x00025412) clock_nsta_pane_cp_t2

0x0001,

0xfab7,	// (0x0003134c) clock_nsta_pane_cp_t

0x63c7,	// (0x00027c5c) navi_navi_volume_pane_cp2_ParamLimits

0x63d3,	// (0x00027c68) popup_side_volume_key_window_g1_ParamLimits

0x63df,	// (0x00027c74) popup_side_volume_key_window_g2_ParamLimits

0x63eb,	// (0x00027c80) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x00030fa6) popup_side_volume_key_window_g_ParamLimits

0x7b2d,	// (0x000293c2) fep_hwr_aid_pane

0x7bce,	// (0x00029463) bg_fep_hwr_top_pane_g4_ParamLimits

0x3fa0,	// (0x00025835) fep_hwr_top_pane_g1_ParamLimits

0x3f8e,	// (0x00025823) fep_hwr_top_pane_g2_ParamLimits

0x7bee,	// (0x00029483) fep_hwr_top_pane_g3_ParamLimits

0xfb0c,	// (0x000313a1) fep_hwr_top_pane_g_ParamLimits

0x7c03,	// (0x00029498) fep_hwr_top_text_pane_ParamLimits

0x2e82,	// (0x00024717) aid_touch_tab_arrow_arrow_2

0x2e79,	// (0x0002470e) aid_touch_tab_arrow_left_2

0x7b41,	// (0x000293d6) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x7b74,	// (0x00029409) fep_hwr_prediction_pane

0x40d3,	// (0x00025968) fep_vkb_prediction_pane

0xea98,	// (0x0003032d) fep_vkb_side_pane_g3_ParamLimits

0xea98,	// (0x0003032d) fep_vkb_side_pane_g3

0x7e56,	// (0x000296eb) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7ec0,	// (0x00029755) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7ecd,	// (0x00029762) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbb,	// (0x00031450) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x81fd,	// (0x00029a92) fep_hwr_prediction_pane_g1

0x8207,	// (0x00029a9c) fep_hwr_prediction_pane_g2

0x820f,	// (0x00029aa4) fep_hwr_prediction_pane_g3

0x8217,	// (0x00029aac) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x00031553) fep_hwr_prediction_pane_g

0x4cb0,	// (0x00026545) fep_vkb_prediction_pane_g1

0x4cba,	// (0x0002654f) fep_vkb_prediction_pane_g2

0x4cc2,	// (0x00026557) fep_vkb_prediction_pane_g3

0x4cca,	// (0x0002655f) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0003155c) fep_vkb_prediction_pane_g

0x752a,	// (0x00028dbf) slider_set_pane_g3

0x753e,	// (0x00028dd3) slider_set_pane_g4

0x7556,	// (0x00028deb) slider_set_pane_g5

0x752a,	// (0x00028dbf) slider_set_pane_g6

0xcadb,	// (0x0002e370) slider_set_pane_g7

0x3339,	// (0x00024bce) slider_form_pane_g3

0x3342,	// (0x00024bd7) slider_form_pane_g4

0x334a,	// (0x00024bdf) slider_form_pane_g5

0x3339,	// (0x00024bce) slider_form_pane_g6

0xe781,	// (0x00030016) slider_form_pane_g7

0x3751,	// (0x00024fe6) slider_set_pane_vc_g3

0x375a,	// (0x00024fef) slider_set_pane_vc_g4

0x3763,	// (0x00024ff8) slider_set_pane_vc_g5

0x3751,	// (0x00024fe6) slider_set_pane_vc_g6

0x376c,	// (0x00025001) slider_set_pane_vc_g7

0x3751,	// (0x00024fe6) slider_form_pane_vc_g1

0x375a,	// (0x00024fef) slider_form_pane_vc_g2

0x3763,	// (0x00024ff8) slider_form_pane_vc_g3

0x3751,	// (0x00024fe6) slider_form_pane_vc_g4

0x38e0,	// (0x00025175) slider_form_pane_vc_g5

0x0004,

0xfa89,	// (0x0003131e) slider_form_pane_vc_g

0x5abc,	// (0x00027351) main_idle_act3_pane

0x4cd2,	// (0x00026567) ai3_links_pane

0xed13,	// (0x000305a8) popup_ai3_data_window_ParamLimits

0xed13,	// (0x000305a8) popup_ai3_data_window

0x0dce,	// (0x00022663) grid_ai3_links_pane

0xed2b,	// (0x000305c0) cell_ai3_links_pane_ParamLimits

0xed2b,	// (0x000305c0) cell_ai3_links_pane

0x4cdb,	// (0x00026570) bg_popup_sub_pane_cp11

0x4ce8,	// (0x0002657d) cell_ai3_links_pane_g1

0x0dce,	// (0x00022663) bg_popup_sub_pane_cp12

0x4d0d,	// (0x000265a2) heading_ai3_data_pane

0x4d15,	// (0x000265aa) list_ai3_gene_pane

0x4d21,	// (0x000265b6) popup_ai3_data_window_g1

0x4d29,	// (0x000265be) heading_ai3_data_pane_g1

0x4d31,	// (0x000265c6) heading_ai3_data_pane_t1

0x4d3f,	// (0x000265d4) list_double_ai3_gene_pane_ParamLimits

0x4d3f,	// (0x000265d4) list_double_ai3_gene_pane

0x4d4c,	// (0x000265e1) list_single_ai3_gene_pane_ParamLimits

0x4d4c,	// (0x000265e1) list_single_ai3_gene_pane

0x3efa,	// (0x0002578f) list_highlight_pane_cp7_ParamLimits

0x3efa,	// (0x0002578f) list_highlight_pane_cp7

0x4d59,	// (0x000265ee) list_single_a13_gene_pane_t1_ParamLimits

0x4d59,	// (0x000265ee) list_single_a13_gene_pane_t1

0x4d70,	// (0x00026605) list_single_ai3_gene_pane_g1

0x4d79,	// (0x0002660e) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x00031565) list_single_ai3_gene_pane_g

0x4d81,	// (0x00026616) list_double_ai3_gene_pane_g1_ParamLimits

0x4d81,	// (0x00026616) list_double_ai3_gene_pane_g1

0x4d8d,	// (0x00026622) list_double_ai3_gene_pane_t1_ParamLimits

0x4d8d,	// (0x00026622) list_double_ai3_gene_pane_t1

0x4da9,	// (0x0002663e) list_double_ai3_gene_pane_t2_ParamLimits

0x4da9,	// (0x0002663e) list_double_ai3_gene_pane_t2

0x4dbe,	// (0x00026653) list_double_ai3_gene_pane_t3_ParamLimits

0x4dbe,	// (0x00026653) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x0003156a) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x0003156a) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9dab,	// (0x0002b640) aid_size_min_col_2

0xecff,	// (0x00030594) aid_size_min_msg_ParamLimits

0xecff,	// (0x00030594) aid_size_min_msg

0xeaac,	// (0x00030341) fep_vkb_top_text_pane_g2_ParamLimits

0xeaac,	// (0x00030341) fep_vkb_top_text_pane_g2

0x0001,

0xfb3c,	// (0x000313d1) fep_vkb_top_text_pane_g_ParamLimits

0xfb3c,	// (0x000313d1) fep_vkb_top_text_pane_g

0x5abc,	// (0x00027351) main_hc_apps_shell_pane

0x4ddb,	// (0x00026670) grid_hc_apps_pane_ParamLimits

0x4ddb,	// (0x00026670) grid_hc_apps_pane

0x4dea,	// (0x0002667f) list_hc_apps_pane

0x4df2,	// (0x00026687) scroll_pane_cp37_ParamLimits

0x4df2,	// (0x00026687) scroll_pane_cp37

0xed41,	// (0x000305d6) cell_hc_apps_pane_ParamLimits

0xed41,	// (0x000305d6) cell_hc_apps_pane

0xeddb,	// (0x00030670) cell_hc_apps_pane_g1_ParamLimits

0xeddb,	// (0x00030670) cell_hc_apps_pane_g1

0x4dfe,	// (0x00026693) cell_hc_apps_pane_g2_ParamLimits

0x4dfe,	// (0x00026693) cell_hc_apps_pane_g2

0x4e1a,	// (0x000266af) cell_hc_apps_pane_g3_ParamLimits

0x4e1a,	// (0x000266af) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x00031571) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x00031571) cell_hc_apps_pane_g

0xee08,	// (0x0003069d) cell_hc_apps_pane_t1_ParamLimits

0xee08,	// (0x0003069d) cell_hc_apps_pane_t1

0x0ff1,	// (0x00022886) grid_highlight_pane_cp10_ParamLimits

0x0ff1,	// (0x00022886) grid_highlight_pane_cp10

0xee46,	// (0x000306db) list_single_hc_apps_pane_ParamLimits

0xee46,	// (0x000306db) list_single_hc_apps_pane

0xee72,	// (0x00030707) list_single_hc_apps_pane_g1

0xdac9,	// (0x0002f35e) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x00031578) list_single_hc_apps_pane_g

0xdae2,	// (0x0002f377) list_single_hc_apps_pane_g2_copy1

0xdafe,	// (0x0002f393) list_single_hc_apps_pane_t1

0x0ebe,	// (0x00022753) bg_set_opt_pane_cp_ParamLimits

0x5d8b,	// (0x00027620) setting_slider_pane_t1_ParamLimits

0xc1eb,	// (0x0002da80) setting_slider_pane_t2_ParamLimits

0xc204,	// (0x0002da99) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00030df3) setting_slider_pane_t_ParamLimits

0x5dd1,	// (0x00027666) slider_set_pane_ParamLimits

0x67de,	// (0x00028073) control_pane_g5_ParamLimits

0x67de,	// (0x00028073) control_pane_g5

0x3296,	// (0x00024b2b) slider_set_pane_g1_ParamLimits

0x751e,	// (0x00028db3) slider_set_pane_g2_ParamLimits

0x752a,	// (0x00028dbf) slider_set_pane_g3_ParamLimits

0x753e,	// (0x00028dd3) slider_set_pane_g4_ParamLimits

0x7556,	// (0x00028deb) slider_set_pane_g5_ParamLimits

0x752a,	// (0x00028dbf) slider_set_pane_g6_ParamLimits

0xcadb,	// (0x0002e370) slider_set_pane_g7_ParamLimits

0xf958,	// (0x000311ed) slider_set_pane_g_ParamLimits

0x0ebe,	// (0x00022753) navi_icon_text_pane_ParamLimits

0xe0c8,	// (0x0002f95d) aid_fill_nsta_2_ParamLimits

0xe0f6,	// (0x0002f98b) aid_touch_tab_arrow_left_ParamLimits

0xe10a,	// (0x0002f99f) aid_touch_tab_arrow_right_ParamLimits

0xe1a6,	// (0x0002fa3b) clock_nsta_pane_ParamLimits

0x2e5b,	// (0x000246f0) navi_icon_pane_g1_ParamLimits

0x2e67,	// (0x000246fc) navi_text_pane_t1_ParamLimits

0x3bcd,	// (0x00025462) navi_icon_text_pane_g1_ParamLimits

0x3bd9,	// (0x0002546e) navi_icon_text_pane_t1_ParamLimits

0xee72,	// (0x00030707) list_single_hc_apps_pane_g1_ParamLimits

0xdac9,	// (0x0002f35e) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x00031578) list_single_hc_apps_pane_g_ParamLimits

0xdae2,	// (0x0002f377) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdafe,	// (0x0002f393) list_single_hc_apps_pane_t1_ParamLimits

0xc131,	// (0x0002d9c6) popup_toolbar2_fixed_window_ParamLimits

0xc131,	// (0x0002d9c6) popup_toolbar2_fixed_window

0xc8ca,	// (0x0002e15f) popup_toolbar2_float_window

0x0dce,	// (0x00022663) bg_popup_sub_pane_cp27

0x4e3c,	// (0x000266d1) grid_toolbar2_float_pane

0x0dce,	// (0x00022663) bg_popup_sub_pane_cp26

0x4e3c,	// (0x000266d1) grid_toolbar2_fixed_pane

0xee8b,	// (0x00030720) cell_toolbar2_fixed_pane_ParamLimits

0xee8b,	// (0x00030720) cell_toolbar2_fixed_pane

0xeea6,	// (0x0003073b) cell_toolbar2_fixed_pane_g1

0x4e44,	// (0x000266d9) toolbar2_fixed_button_pane

0x2188,	// (0x00023a1d) toolbar2_fixed_button_pane_g1

0x2190,	// (0x00023a25) toolbar2_fixed_button_pane_g2

0x2198,	// (0x00023a2d) toolbar2_fixed_button_pane_g3

0x21a0,	// (0x00023a35) toolbar2_fixed_button_pane_g4

0x21a8,	// (0x00023a3d) toolbar2_fixed_button_pane_g5

0x21b0,	// (0x00023a45) toolbar2_fixed_button_pane_g6

0x21b8,	// (0x00023a4d) toolbar2_fixed_button_pane_g7

0x21c0,	// (0x00023a55) toolbar2_fixed_button_pane_g8

0x21c8,	// (0x00023a5d) toolbar2_fixed_button_pane_g9

0x0008,

0xf85a,	// (0x000310ef) toolbar2_fixed_button_pane_g

0x4e4c,	// (0x000266e1) cell_toolbar2_float_pane_ParamLimits

0x4e4c,	// (0x000266e1) cell_toolbar2_float_pane

0x4e5d,	// (0x000266f2) cell_toolbar2_float_pane_g1

0x4e44,	// (0x000266d9) toolbar2_fixed_button_pane_cp

0xea61,	// (0x000302f6) fep_vkb_accented_list_pane_ParamLimits

0xea61,	// (0x000302f6) fep_vkb_accented_list_pane

0x7e36,	// (0x000296cb) bg_popup_fep_shadow_pane_g9

0x1dfc,	// (0x00023691) bg_popup_fep_shadow_pane_cp3

0x158e,	// (0x00022e23) list_accented_list_pane

0x4e66,	// (0x000266fb) list_single_accented_list_pane_ParamLimits

0x4e66,	// (0x000266fb) list_single_accented_list_pane

0x1dfc,	// (0x00023691) list_highlight_pane_cp10

0x4e77,	// (0x0002670c) list_single_accented_list_pane_t1

0xc80c,	// (0x0002e0a1) popup_slider_window_ParamLimits

0xc80c,	// (0x0002e0a1) popup_slider_window

0x4ca7,	// (0x0002653c) aid_indentation_list_msg

0xef85,	// (0x0003081a) bg_popup_window_pane_cp19

0x4edd,	// (0x00026772) popup_slider_window_g1

0x4ef9,	// (0x0002678e) popup_slider_window_g2

0x4f15,	// (0x000267aa) popup_slider_window_g3

0x0005,

0xfce8,	// (0x0003157d) popup_slider_window_g

0x4f31,	// (0x000267c6) popup_slider_window_t1

0x4f75,	// (0x0002680a) small_volume_slider_vertical_pane

0x3f35,	// (0x000257ca) small_volume_slider_vertical_pane_g1

0x3f35,	// (0x000257ca) small_volume_slider_vertical_pane_g2

0x4f91,	// (0x00026826) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x0003158f) small_volume_slider_vertical_pane_g

0xc0b5,	// (0x0002d94a) area_side_right_pane_ParamLimits

0xc0b5,	// (0x0002d94a) area_side_right_pane

0xcb3e,	// (0x0002e3d3) aid_size_side_button_ParamLimits

0xcb3e,	// (0x0002e3d3) aid_size_side_button

0xcb57,	// (0x0002e3ec) grid_sctrl_middle_pane_ParamLimits

0xcb57,	// (0x0002e3ec) grid_sctrl_middle_pane

0x84e3,	// (0x00029d78) sctrl_sk_bottom_pane

0x84f4,	// (0x00029d89) sctrl_sk_top_pane

0x8506,	// (0x00029d9b) aid_touch_sctrl_top

0x8513,	// (0x00029da8) bg_sctrl_sk_pane_ParamLimits

0x8513,	// (0x00029da8) bg_sctrl_sk_pane

0x8521,	// (0x00029db6) sctrl_sk_top_pane_g1

0x852e,	// (0x00029dc3) sctrl_sk_top_pane_t1

0x8506,	// (0x00029d9b) aid_touch_sctrl_bottom

0x8513,	// (0x00029da8) bg_sctrl_sk_pane_cp_ParamLimits

0x8513,	// (0x00029da8) bg_sctrl_sk_pane_cp

0x8549,	// (0x00029dde) sctrl_sk_bottom_pane_g1

0x852e,	// (0x00029dc3) sctrl_sk_bottom_pane_t1

0xcb6d,	// (0x0002e402) cell_sctrl_middle_pane_ParamLimits

0xcb6d,	// (0x0002e402) cell_sctrl_middle_pane

0xcb7e,	// (0x0002e413) aid_touch_sctrl_middle_ParamLimits

0xcb7e,	// (0x0002e413) aid_touch_sctrl_middle

0xcb8b,	// (0x0002e420) bg_sctrl_middle_pane_ParamLimits

0xcb8b,	// (0x0002e420) bg_sctrl_middle_pane

0x8b51,	// (0x0002a3e6) cell_sctrl_middle_pane_g1_ParamLimits

0x8b51,	// (0x0002a3e6) cell_sctrl_middle_pane_g1

0xcb99,	// (0x0002e42e) cell_sctrl_middle_pane_g2_ParamLimits

0xcb99,	// (0x0002e42e) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x0003159b) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x0003159b) cell_sctrl_middle_pane_g

0x2188,	// (0x00023a1d) bg_sctrl_middle_pane_g1

0x2198,	// (0x00023a2d) bg_sctrl_middle_pane_g2

0x2190,	// (0x00023a25) bg_sctrl_middle_pane_g3

0x21a8,	// (0x00023a3d) bg_sctrl_middle_pane_g4

0x21a0,	// (0x00023a35) bg_sctrl_middle_pane_g5

0x21b0,	// (0x00023a45) bg_sctrl_middle_pane_g6

0x21b8,	// (0x00023a4d) bg_sctrl_middle_pane_g7

0x21c8,	// (0x00023a5d) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x000315a0) bg_sctrl_middle_pane_g

0x21c0,	// (0x00023a55) bg_sctrl_middle_pane_g8_copy1

0x2188,	// (0x00023a1d) bg_sctrl_sk_pane_g1

0x2190,	// (0x00023a25) bg_sctrl_sk_pane_g2

0x2198,	// (0x00023a2d) bg_sctrl_sk_pane_g3

0x0008,

0xf85a,	// (0x000310ef) bg_sctrl_sk_pane_g

0x13a0,	// (0x00022c35) aid_size_touch_scroll_bar

0x21a0,	// (0x00023a35) bg_sctrl_sk_pane_g4

0x21a8,	// (0x00023a3d) bg_sctrl_sk_pane_g5

0x21b0,	// (0x00023a45) bg_sctrl_sk_pane_g6

0x21b8,	// (0x00023a4d) bg_sctrl_sk_pane_g7

0x21c0,	// (0x00023a55) bg_sctrl_sk_pane_g8

0x21c8,	// (0x00023a5d) bg_sctrl_sk_pane_g9

0x69b1,	// (0x00028246) popup_fep_china_hwr2_fs_candidate_window

0xc407,	// (0x0002dc9c) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc407,	// (0x0002dc9c) popup_fep_china_hwr2_fs_control_window

0x7e56,	// (0x000296eb) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x00031596) sctrl_sk_top_pane_g

0xf03d,	// (0x000308d2) aid_fep_china_hwr2_fs_cell_ParamLimits

0xf03d,	// (0x000308d2) aid_fep_china_hwr2_fs_cell

0xf051,	// (0x000308e6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xf051,	// (0x000308e6) bg_popup_fep_shadow_pane_cp4

0xf068,	// (0x000308fd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xf068,	// (0x000308fd) bg_popup_fep_shadow_pane_cp5

0xf07a,	// (0x0003090f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xf07a,	// (0x0003090f) popup_fep_china_hwr2_fs_control_bar_grid

0xf08e,	// (0x00030923) popup_fep_china_hwr2_fs_control_funtion_grid

0x9f00,	// (0x0002b795) aid_fep_china_hwr2_fs_candi_cell

0x0dce,	// (0x00022663) bg_popup_fep_shadow_pane_cp6

0x9f0a,	// (0x0002b79f) popup_fep_china_hwr2_fs_candidate_grid

0xf096,	// (0x0003092b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xf096,	// (0x0003092b) cell_fep_china_hwr2_fs_funtion_grid

0x3f35,	// (0x000257ca) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9f12,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9f12,	// (0x0002b7a7) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9f20,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9f20,	// (0x0002b7b5) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x000315b1) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x000315b1) cell_fep_china_hwr2_fs_funtion_grid_g

0xf0ae,	// (0x00030943) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xf0ae,	// (0x00030943) cell_fep_china_hwr2_fs_funtion_grid_t1

0xf0c3,	// (0x00030958) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xf0c3,	// (0x00030958) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x000315b6) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x000315b6) cell_fep_china_hwr2_fs_funtion_grid_t

0x9f36,	// (0x0002b7cb) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9f3e,	// (0x0002b7d3) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9f46,	// (0x0002b7db) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x000315bb) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9f4e,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9f4e,	// (0x0002b7e3) cell_fep_china_hwr2_fs_candidate_grid

0x9f67,	// (0x0002b7fc) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9f6f,	// (0x0002b804) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3f35,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3f35,	// (0x000257ca) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb41,	// (0x000313d6) cell_fep_china_hwr2_fs_candidate_grid_g

0x9f77,	// (0x0002b80c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1fed,	// (0x00023882) clock_nsta_pane_cp_24_ParamLimits

0x1fed,	// (0x00023882) clock_nsta_pane_cp_24

0x204a,	// (0x000238df) indicator_nsta_pane_cp_24_ParamLimits

0x204a,	// (0x000238df) indicator_nsta_pane_cp_24

0x2d66,	// (0x000245fb) heading_pane_g1

0x0001,

0xf8bf,	// (0x00031154) heading_pane_g

0xe873,	// (0x00030108) grid_sct_catagory_button_pane

0x331c,	// (0x00024bb1) scroll_pane_cp5_ParamLimits

0x3bff,	// (0x00025494) button_value_adjust_pane_cp5_ParamLimits

0x3bff,	// (0x00025494) button_value_adjust_pane_cp5

0x3cbd,	// (0x00025552) form2_midp_time_pane_ParamLimits

0x9f85,	// (0x0002b81a) cell_sct_catagory_button_pane_ParamLimits

0x9f85,	// (0x0002b81a) cell_sct_catagory_button_pane

0x3efa,	// (0x0002578f) bg_button_pane_cp01_ParamLimits

0x3efa,	// (0x0002578f) bg_button_pane_cp01

0x3f35,	// (0x000257ca) cell_sct_catagory_button_pane_g1

0xc87b,	// (0x0002e110) popup_tb_extension_window

0xf0df,	// (0x00030974) aid_size_cell_ext_ParamLimits

0xf0df,	// (0x00030974) aid_size_cell_ext

0x127e,	// (0x00022b13) bg_tb_trans_pane_cp1_ParamLimits

0x127e,	// (0x00022b13) bg_tb_trans_pane_cp1

0xf105,	// (0x0003099a) grid_tb_ext_pane_ParamLimits

0xf105,	// (0x0003099a) grid_tb_ext_pane

0xf13b,	// (0x000309d0) cell_tb_ext_pane_ParamLimits

0xf13b,	// (0x000309d0) cell_tb_ext_pane

0xf15f,	// (0x000309f4) cell_tb_ext_pane_g1_ParamLimits

0xf15f,	// (0x000309f4) cell_tb_ext_pane_g1

0x9f97,	// (0x0002b82c) cell_tb_ext_pane_t1

0x0ff1,	// (0x00022886) list_highlight_pane_cp11_ParamLimits

0x0ff1,	// (0x00022886) list_highlight_pane_cp11

0xc146,	// (0x0002d9db) popup_uni_indicator_window_ParamLimits

0xc146,	// (0x0002d9db) popup_uni_indicator_window

0x1458,	// (0x00022ced) bg_popup_sub_pane_cp14

0x9fb2,	// (0x0002b847) list_uniindi_pane

0x9fbe,	// (0x0002b853) uniindi_top_pane

0x0ff1,	// (0x00022886) bg_uniindi_top_pane

0x9fdd,	// (0x0002b872) uniindi_top_pane_g1

0x9ff3,	// (0x0002b888) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x000315c2) uniindi_top_pane_g

0xa01d,	// (0x0002b8b2) uniindi_top_pane_t1

0xa047,	// (0x0002b8dc) list_single_uniindi_pane_ParamLimits

0xa047,	// (0x0002b8dc) list_single_uniindi_pane

0x3f35,	// (0x000257ca) bg_uniindi_top_pane_g1

0xa059,	// (0x0002b8ee) list_single_uniindi_pane_g1

0xa06c,	// (0x0002b901) list_single_uniindi_pane_t1

0x5abc,	// (0x00027351) control_bg_pane

0xa091,	// (0x0002b926) bg_sctrl_sk_pane_cp1

0xa09a,	// (0x0002b92f) bg_sctrl_sk_pane_cp2

0xa0a3,	// (0x0002b938) control_bg_pane_g1

0xa0ac,	// (0x0002b941) control_bg_pane_g2

0x0001,

0xfd36,	// (0x000315cb) control_bg_pane_g

0x3ac0,	// (0x00025355) cell_indicator_nsta_pane_g1_ParamLimits

0xe978,	// (0x0003020d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa5,	// (0x0003133a) cell_indicator_nsta_pane_g_ParamLimits

0x9b53,	// (0x0002b3e8) form2_midp_time_pane_t1_ParamLimits

0x7b1f,	// (0x000293b4) main_idle_act4_pane_ParamLimits

0x7b1f,	// (0x000293b4) main_idle_act4_pane

0xc87b,	// (0x0002e110) popup_tb_extension_window_ParamLimits

0xf125,	// (0x000309ba) tb_ext_find_pane_ParamLimits

0xf125,	// (0x000309ba) tb_ext_find_pane

0xa0b5,	// (0x0002b94a) ai_gene_pane_1_cp1

0x1e90,	// (0x00023725) ai_gene_pane_2_cp1

0xa0bd,	// (0x0002b952) list_single_idle_plugin_calendar_pane

0xa0c6,	// (0x0002b95b) list_single_idle_plugin_notification_pane

0xa0cf,	// (0x0002b964) list_single_idle_plugin_player_pane

0xf17c,	// (0x00030a11) list_single_idle_plugin_shortcut_pane_ParamLimits

0xf17c,	// (0x00030a11) list_single_idle_plugin_shortcut_pane

0xf1a4,	// (0x00030a39) main_idle_act4_pane_t1

0xf1ba,	// (0x00030a4f) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x000315d0) main_idle_act4_pane_t

0xf1d0,	// (0x00030a65) middle_sk_idle_act4_pane_ParamLimits

0xf1d0,	// (0x00030a65) middle_sk_idle_act4_pane

0xf1ec,	// (0x00030a81) popup_clock_digital_analogue_window_cp2

0xf212,	// (0x00030aa7) shortcut_wheel_idle_act4_pane_ParamLimits

0xf212,	// (0x00030aa7) shortcut_wheel_idle_act4_pane

0x3f35,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g1

0x3f35,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g2

0x3f35,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g3

0x3f35,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g4

0x3f35,	// (0x000257ca) shortcut_wheel_idle_act4_pane_g5

0xa0d8,	// (0x0002b96d) shortcut_wheel_idle_act4_pane_g6

0xa0e0,	// (0x0002b975) shortcut_wheel_idle_act4_pane_g7

0xa0e8,	// (0x0002b97d) shortcut_wheel_idle_act4_pane_g8

0xa0f0,	// (0x0002b985) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x000315d5) shortcut_wheel_idle_act4_pane_g

0xcba6,	// (0x0002e43b) middle_sk_idle_act4_pane_g1_ParamLimits

0xcba6,	// (0x0002e43b) middle_sk_idle_act4_pane_g1

0xf28d,	// (0x00030b22) middle_sk_idle_act4_pane_g2_ParamLimits

0xf28d,	// (0x00030b22) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x000315f8) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x000315f8) middle_sk_idle_act4_pane_g

0xf2a5,	// (0x00030b3a) middle_sk_idle_act4_pane_t1_ParamLimits

0xf2a5,	// (0x00030b3a) middle_sk_idle_act4_pane_t1

0xf2d4,	// (0x00030b69) grid_ai_shortcut_pane_ParamLimits

0xf2d4,	// (0x00030b69) grid_ai_shortcut_pane

0xf2f1,	// (0x00030b86) list_highlight_pane_cp16_ParamLimits

0xf2f1,	// (0x00030b86) list_highlight_pane_cp16

0xf2fe,	// (0x00030b93) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xf2fe,	// (0x00030b93) list_single_idle_plugin_shortcut_pane_g1

0xf30a,	// (0x00030b9f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xf30a,	// (0x00030b9f) list_single_idle_plugin_shortcut_pane_g2

0xf326,	// (0x00030bbb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xf326,	// (0x00030bbb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x000315fd) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x000315fd) list_single_idle_plugin_shortcut_pane_g

0xf33b,	// (0x00030bd0) cell_ai_shortcut_pane_ParamLimits

0xf33b,	// (0x00030bd0) cell_ai_shortcut_pane

0xf351,	// (0x00030be6) cell_ai_shortcut_pane_g1_ParamLimits

0xf351,	// (0x00030be6) cell_ai_shortcut_pane_g1

0xa0b5,	// (0x0002b94a) ai_gene_pane_1_cp2

0xa0f8,	// (0x0002b98d) ai_gene_pane_2_cp2

0xa100,	// (0x0002b995) list_highlight_pane_cp15

0xa109,	// (0x0002b99e) list_single_idle_plugin_calendar_pane_g1

0xa100,	// (0x0002b995) list_highlight_pane_cp17

0xa111,	// (0x0002b9a6) list_single_idle_plugin_calendar_pane_g1_copy1

0xa119,	// (0x0002b9ae) list_single_idle_plugin_player_pane_g1

0x3594,	// (0x00024e29) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x00031604) list_single_idle_plugin_player_pane_g

0xa121,	// (0x0002b9b6) list_single_idle_plugin_player_pane_t1

0xa12f,	// (0x0002b9c4) list_single_idle_plugin_player_pane_t2

0xa13d,	// (0x0002b9d2) list_single_idle_plugin_player_pane_t3

0xa14b,	// (0x0002b9e0) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x00031609) list_single_idle_plugin_player_pane_t

0xa159,	// (0x0002b9ee) wait_bar_pane_cp15

0xa161,	// (0x0002b9f6) grid_ai_notification_pane

0x3594,	// (0x00024e29) list_single_idle_plugin_notification_pane_g1

0xf373,	// (0x00030c08) cell_ai_notification_pane_ParamLimits

0xf373,	// (0x00030c08) cell_ai_notification_pane

0xa16a,	// (0x0002b9ff) cell_ai_notification_pane_g1

0xa172,	// (0x0002ba07) cell_ai_notification_pane_t1

0xf380,	// (0x00030c15) tb_ext_find_button_pane

0xf388,	// (0x00030c1d) tb_ext_find_pane_g1

0xf390,	// (0x00030c25) tb_ext_find_pane_t1

0x196a,	// (0x000231ff) tb_ext_find_button_pane_g1

0xa180,	// (0x0002ba15) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x00031612) tb_ext_find_button_pane_g

0xf1a4,	// (0x00030a39) main_idle_act4_pane_t1_ParamLimits

0xf1ba,	// (0x00030a4f) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x000315d0) main_idle_act4_pane_t_ParamLimits

0xf1ec,	// (0x00030a81) popup_clock_digital_analogue_window_cp2_ParamLimits

0xf202,	// (0x00030a97) sat_plugin_idle_act4_pane_ParamLimits

0xf202,	// (0x00030a97) sat_plugin_idle_act4_pane

0xf39e,	// (0x00030c33) sat_plugin_idle_act4_pane_t1_ParamLimits

0xf39e,	// (0x00030c33) sat_plugin_idle_act4_pane_t1

0xf3b6,	// (0x00030c4b) sat_plugin_idle_act4_pane_t2_ParamLimits

0xf3b6,	// (0x00030c4b) sat_plugin_idle_act4_pane_t2

0xf3ce,	// (0x00030c63) sat_plugin_idle_act4_pane_t3_ParamLimits

0xf3ce,	// (0x00030c63) sat_plugin_idle_act4_pane_t3

0xf3e6,	// (0x00030c7b) sat_plugin_idle_act4_pane_t4_ParamLimits

0xf3e6,	// (0x00030c7b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x00031617) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x00031617) sat_plugin_idle_act4_pane_t

0x5b7f,	// (0x00027414) popup_battery_window_ParamLimits

0x5b7f,	// (0x00027414) popup_battery_window

0x0ff1,	// (0x00022886) bg_popup_sub_pane_cp25_ParamLimits

0x0ff1,	// (0x00022886) bg_popup_sub_pane_cp25

0xa189,	// (0x0002ba1e) popup_battery_window_g1_ParamLimits

0xa189,	// (0x0002ba1e) popup_battery_window_g1

0xa195,	// (0x0002ba2a) popup_battery_window_t1_ParamLimits

0xa195,	// (0x0002ba2a) popup_battery_window_t1

0xa1a7,	// (0x0002ba3c) popup_battery_window_t2_ParamLimits

0xa1a7,	// (0x0002ba3c) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x00031620) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x00031620) popup_battery_window_t

0xdf73,	// (0x0002f808) midp_canvas_pane_ParamLimits

0xdfc8,	// (0x0002f85d) midp_keypad_pane_ParamLimits

0xdfc8,	// (0x0002f85d) midp_keypad_pane

0x15de,	// (0x00022e73) main_midp_pane_ParamLimits

0x3b9b,	// (0x00025430) signal_pane_g2_cp_ParamLimits

0xf3fe,	// (0x00030c93) aid_size_cell_midp_keypad_ParamLimits

0xf3fe,	// (0x00030c93) aid_size_cell_midp_keypad

0xf41c,	// (0x00030cb1) midp_keyp_game_grid_pane_ParamLimits

0xf41c,	// (0x00030cb1) midp_keyp_game_grid_pane

0xf43b,	// (0x00030cd0) midp_keyp_rocker_pane_ParamLimits

0xf43b,	// (0x00030cd0) midp_keyp_rocker_pane

0xf47c,	// (0x00030d11) midp_keyp_sk_left_pane_ParamLimits

0xf47c,	// (0x00030d11) midp_keyp_sk_left_pane

0xf4ce,	// (0x00030d63) midp_keyp_sk_right_pane_ParamLimits

0xf4ce,	// (0x00030d63) midp_keyp_sk_right_pane

0x0dce,	// (0x00022663) bg_button_pane_cp03

0xf51a,	// (0x00030daf) midp_keyp_sk_left_pane_g1

0x0dce,	// (0x00022663) bg_button_pane_cp04

0xf51a,	// (0x00030daf) midp_keyp_sk_right_pane_g1

0x3f35,	// (0x000257ca) midp_keyp_rocker_pane_g1

0xf523,	// (0x00030db8) keyp_game_cell_pane_ParamLimits

0xf523,	// (0x00030db8) keyp_game_cell_pane

0x0dce,	// (0x00022663) bg_button_pane_cp02

0xf545,	// (0x00030dda) keyp_game_cell_pane_g1

0xc0f7,	// (0x0002d98c) popup_fep_vkb2_window_ParamLimits

0xc0f7,	// (0x0002d98c) popup_fep_vkb2_window

0xcbb4,	// (0x0002e449) aid_size_cell_vkb2_ParamLimits

0xcbb4,	// (0x0002e449) aid_size_cell_vkb2

0xcbea,	// (0x0002e47f) popup_fep_vkb2_window_g1_ParamLimits

0xcbea,	// (0x0002e47f) popup_fep_vkb2_window_g1

0xcc3a,	// (0x0002e4cf) vkb2_area_bottom_pane_ParamLimits

0xcc3a,	// (0x0002e4cf) vkb2_area_bottom_pane

0xcc78,	// (0x0002e50d) vkb2_area_keypad_pane_ParamLimits

0xcc78,	// (0x0002e50d) vkb2_area_keypad_pane

0xccb6,	// (0x0002e54b) vkb2_area_top_pane_ParamLimits

0xccb6,	// (0x0002e54b) vkb2_area_top_pane

0xcd32,	// (0x0002e5c7) vkb2_top_entry_pane_ParamLimits

0xcd32,	// (0x0002e5c7) vkb2_top_entry_pane

0xcd5f,	// (0x0002e5f4) vkb2_top_grid_left_pane_ParamLimits

0xcd5f,	// (0x0002e5f4) vkb2_top_grid_left_pane

0xcd7f,	// (0x0002e614) vkb2_top_grid_right_pane_ParamLimits

0xcd7f,	// (0x0002e614) vkb2_top_grid_right_pane

0x8792,	// (0x0002a027) vkb2_cell_keypad_pane_ParamLimits

0x8792,	// (0x0002a027) vkb2_cell_keypad_pane

0xcdc5,	// (0x0002e65a) vkb2_area_bottom_grid_pane_ParamLimits

0xcdc5,	// (0x0002e65a) vkb2_area_bottom_grid_pane

0xcdeb,	// (0x0002e680) vkb2_area_bottom_pane_g1_ParamLimits

0xcdeb,	// (0x0002e680) vkb2_area_bottom_pane_g1

0xce11,	// (0x0002e6a6) vkb2_area_bottom_pane_g2_ParamLimits

0xce11,	// (0x0002e6a6) vkb2_area_bottom_pane_g2

0xce42,	// (0x0002e6d7) vkb2_area_bottom_pane_g3_ParamLimits

0xce42,	// (0x0002e6d7) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x00031625) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x00031625) vkb2_area_bottom_pane_g

0x890a,	// (0x0002a19f) vkb2_top_cell_left_pane_ParamLimits

0x890a,	// (0x0002a19f) vkb2_top_cell_left_pane

0x0202,	// (0x00021a97) vkb2_top_entry_pane_g1_ParamLimits

0x0202,	// (0x00021a97) vkb2_top_entry_pane_g1

0x0210,	// (0x00021aa5) vkb2_top_entry_pane_t1_ParamLimits

0x0210,	// (0x00021aa5) vkb2_top_entry_pane_t1

0xa1cc,	// (0x0002ba61) vkb2_top_entry_pane_t2_ParamLimits

0xa1cc,	// (0x0002ba61) vkb2_top_entry_pane_t2

0xa1fe,	// (0x0002ba93) vkb2_top_entry_pane_t3_ParamLimits

0xa1fe,	// (0x0002ba93) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x0003162c) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x0003162c) vkb2_top_entry_pane_t

0xce98,	// (0x0002e72d) vkb2_top_grid_right_pane_g1_ParamLimits

0xce98,	// (0x0002e72d) vkb2_top_grid_right_pane_g1

0x896d,	// (0x0002a202) vkb2_top_grid_right_pane_g2_ParamLimits

0x896d,	// (0x0002a202) vkb2_top_grid_right_pane_g2

0x8985,	// (0x0002a21a) vkb2_top_grid_right_pane_g3_ParamLimits

0x8985,	// (0x0002a21a) vkb2_top_grid_right_pane_g3

0xceae,	// (0x0002e743) vkb2_top_grid_right_pane_g4_ParamLimits

0xceae,	// (0x0002e743) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x00031633) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x00031633) vkb2_top_grid_right_pane_g

0x89b3,	// (0x0002a248) vkb2_top_cell_left_pane_g1

0x89ca,	// (0x0002a25f) vkb2_cell_keypad_pane_g1_ParamLimits

0x89ca,	// (0x0002a25f) vkb2_cell_keypad_pane_g1

0xa214,	// (0x0002baa9) vkb2_cell_keypad_pane_t1_ParamLimits

0xa214,	// (0x0002baa9) vkb2_cell_keypad_pane_t1

0x89d8,	// (0x0002a26d) vkb2_cell_bottom_grid_pane_ParamLimits

0x89d8,	// (0x0002a26d) vkb2_cell_bottom_grid_pane

0x8a11,	// (0x0002a2a6) vkb2_cell_bottom_grid_pane_g1

0xf231,	// (0x00030ac6) aid_call2_pane_cp02

0xf239,	// (0x00030ace) aid_call_pane_cp02

0xf241,	// (0x00030ad6) clock_digital_number_pane_cp10

0xf249,	// (0x00030ade) clock_digital_number_pane_cp11

0xf251,	// (0x00030ae6) clock_digital_number_pane_cp12

0xf259,	// (0x00030aee) clock_digital_number_pane_cp13

0xf261,	// (0x00030af6) clock_digital_separator_pane_cp10

0x196a,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g1

0x196a,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g2

0xf269,	// (0x00030afe) popup_clock_digital_analogue_window_cp2_g3

0x196a,	// (0x000231ff) popup_clock_digital_analogue_window_cp2_g4

0xf269,	// (0x00030afe) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x000315e8) popup_clock_digital_analogue_window_cp2_g

0xf271,	// (0x00030b06) popup_clock_digital_analogue_window_cp2_t1

0xf27f,	// (0x00030b14) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x000315f3) popup_clock_digital_analogue_window_cp2_t

0x3f35,	// (0x000257ca) clock_digital_number_pane_cp10_g1

0x3f35,	// (0x000257ca) clock_digital_number_pane_cp10_g2

0x0001,

0xfb41,	// (0x000313d6) clock_digital_number_pane_cp10_g

0x3f35,	// (0x000257ca) clock_digital_separator_pane_cp10_g1

0x3f35,	// (0x000257ca) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb41,	// (0x000313d6) clock_digital_separator_pane_cp10_g

0x9fff,	// (0x0002b894) uniindi_top_pane_g3

0xa010,	// (0x0002b8a5) uniindi_top_pane_g4

0x87fd,	// (0x0002a092) vkb2_row_keypad_pane_ParamLimits

0x87fd,	// (0x0002a092) vkb2_row_keypad_pane

0x8a2d,	// (0x0002a2c2) vkb2_cell_t_keypad_pane_ParamLimits

0x8a2d,	// (0x0002a2c2) vkb2_cell_t_keypad_pane

0x8a3a,	// (0x0002a2cf) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8a3a,	// (0x0002a2cf) vkb2_cell_t_keypad_pane_cp08

0x8a4a,	// (0x0002a2df) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8a4a,	// (0x0002a2df) vkb2_cell_t_keypad_pane_cp09

0x8a5b,	// (0x0002a2f0) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8a5b,	// (0x0002a2f0) vkb2_cell_t_keypad_pane_cp01

0x8a6b,	// (0x0002a300) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8a6b,	// (0x0002a300) vkb2_cell_t_keypad_pane_cp02

0x8a7b,	// (0x0002a310) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8a7b,	// (0x0002a310) vkb2_cell_t_keypad_pane_cp03

0x8a8b,	// (0x0002a320) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8a8b,	// (0x0002a320) vkb2_cell_t_keypad_pane_cp04

0x8a9b,	// (0x0002a330) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8a9b,	// (0x0002a330) vkb2_cell_t_keypad_pane_cp05

0x8aab,	// (0x0002a340) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8aab,	// (0x0002a340) vkb2_cell_t_keypad_pane_cp06

0x8abb,	// (0x0002a350) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8abb,	// (0x0002a350) vkb2_cell_t_keypad_pane_cp07

0x8acb,	// (0x0002a360) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8acb,	// (0x0002a360) vkb2_cell_t_keypad_pane_cp10

0x7e56,	// (0x000296eb) vkb2_cell_t_keypad_pane_g1

0xa22b,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1

0x5abc,	// (0x00027351) popup_grid_graphic2_window

0x0275,	// (0x00021b0a) aid_size_cell_graphic2_ParamLimits

0x0275,	// (0x00021b0a) aid_size_cell_graphic2

0x02b3,	// (0x00021b48) bg_popup_window_pane_cp21_ParamLimits

0x02b3,	// (0x00021b48) bg_popup_window_pane_cp21

0x02c1,	// (0x00021b56) graphic2_pages_pane_ParamLimits

0x02c1,	// (0x00021b56) graphic2_pages_pane

0x030a,	// (0x00021b9f) grid_graphic2_control_pane_ParamLimits

0x030a,	// (0x00021b9f) grid_graphic2_control_pane

0x0348,	// (0x00021bdd) grid_graphic2_pane_ParamLimits

0x0348,	// (0x00021bdd) grid_graphic2_pane

0x03b7,	// (0x00021c4c) cell_graphic2_pane

0x5abc,	// (0x00027351) main_comp_mode_pane

0x4d15,	// (0x000265aa) list_ai3_gene_pane_ParamLimits

0xef85,	// (0x0003081a) bg_popup_window_pane_cp19_ParamLimits

0x4e85,	// (0x0002671a) bg_touch_area_indi_pane_ParamLimits

0x4e85,	// (0x0002671a) bg_touch_area_indi_pane

0x4e9b,	// (0x00026730) bg_touch_area_indi_pane_cp01_ParamLimits

0x4e9b,	// (0x00026730) bg_touch_area_indi_pane_cp01

0x4eb1,	// (0x00026746) bg_touch_area_indi_pane_cp02_ParamLimits

0x4eb1,	// (0x00026746) bg_touch_area_indi_pane_cp02

0x4ec7,	// (0x0002675c) bg_touch_area_indi_pane_cp03_ParamLimits

0x4ec7,	// (0x0002675c) bg_touch_area_indi_pane_cp03

0x4edd,	// (0x00026772) popup_slider_window_g1_ParamLimits

0x4ef9,	// (0x0002678e) popup_slider_window_g2_ParamLimits

0x4f15,	// (0x000267aa) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x0003157d) popup_slider_window_g_ParamLimits

0x4f31,	// (0x000267c6) popup_slider_window_t1_ParamLimits

0x4f75,	// (0x0002680a) small_volume_slider_vertical_pane_ParamLimits

0x03b7,	// (0x00021c4c) cell_graphic2_pane_ParamLimits

0x0402,	// (0x00021c97) bg_button_pane_cp10_ParamLimits

0x0402,	// (0x00021c97) bg_button_pane_cp10

0x0413,	// (0x00021ca8) bg_button_pane_cp11_ParamLimits

0x0413,	// (0x00021ca8) bg_button_pane_cp11

0x0424,	// (0x00021cb9) graphic2_pages_pane_g1_ParamLimits

0x0424,	// (0x00021cb9) graphic2_pages_pane_g1

0x043f,	// (0x00021cd4) graphic2_pages_pane_g2_ParamLimits

0x043f,	// (0x00021cd4) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x00031641) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x00031641) graphic2_pages_pane_g

0x0457,	// (0x00021cec) graphic2_pages_pane_t1_ParamLimits

0x0457,	// (0x00021cec) graphic2_pages_pane_t1

0x046f,	// (0x00021d04) cell_graphic2_control_pane_ParamLimits

0x046f,	// (0x00021d04) cell_graphic2_control_pane

0x0499,	// (0x00021d2e) cell_graphic2_pane_g1_ParamLimits

0x0499,	// (0x00021d2e) cell_graphic2_pane_g1

0xcec4,	// (0x0002e759) cell_graphic2_pane_g2_ParamLimits

0xcec4,	// (0x0002e759) cell_graphic2_pane_g2

0x04a6,	// (0x00021d3b) cell_graphic2_pane_g3_ParamLimits

0x04a6,	// (0x00021d3b) cell_graphic2_pane_g3

0xced1,	// (0x0002e766) cell_graphic2_pane_g4_ParamLimits

0xced1,	// (0x0002e766) cell_graphic2_pane_g4

0x04b3,	// (0x00021d48) cell_graphic2_pane_g5_ParamLimits

0x04b3,	// (0x00021d48) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x00031646) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x00031646) cell_graphic2_pane_g

0x04d3,	// (0x00021d68) cell_graphic2_pane_t1_ParamLimits

0x04d3,	// (0x00021d68) cell_graphic2_pane_t1

0x2d5a,	// (0x000245ef) grid_highlight_pane_cp11_ParamLimits

0x2d5a,	// (0x000245ef) grid_highlight_pane_cp11

0x0ff1,	// (0x00022886) bg_button_pane_cp05

0x0508,	// (0x00021d9d) cell_graphic2_control_pane_g1

0x3f35,	// (0x000257ca) bg_touch_area_indi_pane_g1

0xa23d,	// (0x0002bad2) aid_cmod_rocker_key_size

0xa247,	// (0x0002badc) aid_cmode_itu_key_size

0xa251,	// (0x0002bae6) main_cmode_video_pane

0xa259,	// (0x0002baee) main_comp_mode_itu_pane

0xa263,	// (0x0002baf8) main_comp_mode_rocker_pane

0xa26b,	// (0x0002bb00) cell_cmode_rocker_pane_ParamLimits

0xa26b,	// (0x0002bb00) cell_cmode_rocker_pane

0xa27d,	// (0x0002bb12) cell_cmode_itu_pane_ParamLimits

0xa27d,	// (0x0002bb12) cell_cmode_itu_pane

0x1458,	// (0x00022ced) bg_button_pane_cp06_ParamLimits

0x1458,	// (0x00022ced) bg_button_pane_cp06

0x4161,	// (0x000259f6) cell_cmode_rocker_pane_g1_ParamLimits

0x4161,	// (0x000259f6) cell_cmode_rocker_pane_g1

0x9f12,	// (0x0002b7a7) cell_cmode_rocker_pane_g2_ParamLimits

0x9f12,	// (0x0002b7a7) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x00031656) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x00031656) cell_cmode_rocker_pane_g

0x0dce,	// (0x00022663) bg_button_pane_cp07

0xa292,	// (0x0002bb27) cell_cmode_itu_pane_g1

0xa29b,	// (0x0002bb30) cell_cmode_itu_pane_t1

0xa2a9,	// (0x0002bb3e) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x0003165b) cell_cmode_itu_pane_t

0xa081,	// (0x0002b916) aid_touch_ctrl_left

0xa089,	// (0x0002b91e) aid_touch_ctrl_right

0x0dce,	// (0x00022663) compa_mode_pane

0x0530,	// (0x00021dc5) aid_cmod_rocker_key_size_cp

0x053a,	// (0x00021dcf) aid_cmode_itu_key_size_cp

0xa2b7,	// (0x0002bb4c) compa_mode_pane_g1

0xa2bf,	// (0x0002bb54) compa_mode_pane_g2

0xa2c7,	// (0x0002bb5c) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x00031660) compa_mode_pane_g

0x0544,	// (0x00021dd9) main_comp_mode_itu_pane_cp

0x054e,	// (0x00021de3) main_comp_mode_rocker_pane_cp

0x0558,	// (0x00021ded) cell_cmode_itu_pane_cp_ParamLimits

0x0558,	// (0x00021ded) cell_cmode_itu_pane_cp

0x056d,	// (0x00021e02) cell_cmode_rocker_pane_cp_ParamLimits

0x056d,	// (0x00021e02) cell_cmode_rocker_pane_cp

0x1458,	// (0x00022ced) bg_button_pane_cp06_cp_ParamLimits

0x1458,	// (0x00022ced) bg_button_pane_cp06_cp

0x4161,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4161,	// (0x000259f6) cell_cmode_rocker_pane_g1_cp

0x3f35,	// (0x000257ca) cell_cmode_rocker_pane_g2_cp

0x0dce,	// (0x00022663) bg_button_pane_cp07_cp

0x057f,	// (0x00021e14) cell_cmode_itu_pane_g1_cp

0x0588,	// (0x00021e1d) cell_cmode_itu_pane_t1_cp

0x0596,	// (0x00021e2b) cell_cmode_itu_pane_t2_cp

0xe779,	// (0x0003000e) settings_code_pane_cp2

0x0ebe,	// (0x00022753) bg_popup_window_pane_cp3_ParamLimits

0x11ef,	// (0x00022a84) heading_pane_cp3_ParamLimits

0x11fb,	// (0x00022a90) listscroll_popup_graphic_pane_ParamLimits

0x7b2d,	// (0x000293c2) fep_hwr_aid_pane_ParamLimits

0x8506,	// (0x00029d9b) aid_touch_sctrl_top_ParamLimits

0x8521,	// (0x00029db6) sctrl_sk_top_pane_g1_ParamLimits

0x7e56,	// (0x000296eb) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x00031596) sctrl_sk_top_pane_g_ParamLimits

0x852e,	// (0x00029dc3) sctrl_sk_top_pane_t1_ParamLimits

0x8506,	// (0x00029d9b) aid_touch_sctrl_bottom_ParamLimits

0x852e,	// (0x00029dc3) sctrl_sk_bottom_pane_t1_ParamLimits

0x9fcb,	// (0x0002b860) aid_area_touch_clock

0xccf4,	// (0x0002e589) aid_vkb2_area_top_pane_cell_ParamLimits

0xccf4,	// (0x0002e589) aid_vkb2_area_top_pane_cell

0xcd9f,	// (0x0002e634) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcd9f,	// (0x0002e634) aid_vkb2_area_bottom_pane_cell

0xa1c4,	// (0x0002ba59) popup_char_count_window

0xa2cf,	// (0x0002bb64) popup_char_count_window_g1

0xa2d8,	// (0x0002bb6d) popup_char_count_window_g2

0xa2e1,	// (0x0002bb76) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x00031667) popup_char_count_window_g

0xa2ea,	// (0x0002bb7f) popup_char_count_window_t1

0x85e2,	// (0x00029e77) popup_fep_char_preview_window_ParamLimits

0x85e2,	// (0x00029e77) popup_fep_char_preview_window

0xcd14,	// (0x0002e5a9) vkb2_top_candi_pane_ParamLimits

0xcd14,	// (0x0002e5a9) vkb2_top_candi_pane

0x05a4,	// (0x00021e39) cell_vkb2_top_candi_pane_ParamLimits

0x05a4,	// (0x00021e39) cell_vkb2_top_candi_pane

0x8ae0,	// (0x0002a375) bg_popup_fep_char_preview_window_ParamLimits

0x8ae0,	// (0x0002a375) bg_popup_fep_char_preview_window

0x8aee,	// (0x0002a383) popup_fep_char_preview_window_t1_ParamLimits

0x8aee,	// (0x0002a383) popup_fep_char_preview_window_t1

0xa2f8,	// (0x0002bb8d) bg_popup_fep_char_preview_window_g1

0xa300,	// (0x0002bb95) bg_popup_fep_char_preview_window_g2

0xa308,	// (0x0002bb9d) bg_popup_fep_char_preview_window_g3

0xa310,	// (0x0002bba5) bg_popup_fep_char_preview_window_g4

0xa318,	// (0x0002bbad) bg_popup_fep_char_preview_window_g5

0x8b28,	// (0x0002a3bd) bg_popup_fep_char_preview_window_g6

0xa320,	// (0x0002bbb5) bg_popup_fep_char_preview_window_g7

0xa328,	// (0x0002bbbd) bg_popup_fep_char_preview_window_g8

0xa330,	// (0x0002bbc5) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x0003166e) bg_popup_fep_char_preview_window_g

0x7e56,	// (0x000296eb) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7e56,	// (0x000296eb) cell_vkb2_top_candi_pane_g1

0x7e64,	// (0x000296f9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x7e64,	// (0x000296f9) cell_vkb2_top_candi_pane_g2

0x9b66,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9b66,	// (0x0002b3fb) cell_vkb2_top_candi_pane_g3

0x8b30,	// (0x0002a3c5) cell_vkb2_top_candi_pane_g4_ParamLimits

0x8b30,	// (0x0002a3c5) cell_vkb2_top_candi_pane_g4

0x43b1,	// (0x00025c46) cell_vkb2_top_candi_pane_g5_ParamLimits

0x43b1,	// (0x00025c46) cell_vkb2_top_candi_pane_g5

0x8b51,	// (0x0002a3e6) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8b51,	// (0x0002a3e6) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x00031681) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x00031681) cell_vkb2_top_candi_pane_g

0x8b5f,	// (0x0002a3f4) cell_vkb2_top_candi_pane_t1

0x750a,	// (0x00028d9f) aid_size_touch_slider_mark_ParamLimits

0x750a,	// (0x00028d9f) aid_size_touch_slider_mark

0x02f5,	// (0x00021b8a) grid_graphic2_catg_pane_ParamLimits

0x02f5,	// (0x00021b8a) grid_graphic2_catg_pane

0x038c,	// (0x00021c21) popup_grid_graphic2_window_t1_ParamLimits

0x038c,	// (0x00021c21) popup_grid_graphic2_window_t1

0x03a1,	// (0x00021c36) popup_grid_graphic2_window_t2_ParamLimits

0x03a1,	// (0x00021c36) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x0003163c) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x0003163c) popup_grid_graphic2_window_t

0x0ff1,	// (0x00022886) bg_button_pane_cp05_ParamLimits

0x0508,	// (0x00021d9d) cell_graphic2_control_pane_g1_ParamLimits

0xa047,	// (0x0002b8dc) cell_graphic2_catg_pane_ParamLimits

0xa047,	// (0x0002b8dc) cell_graphic2_catg_pane

0x0dce,	// (0x00022663) bg_button_pane_cp12

0x05ee,	// (0x00021e83) cell_graphic2_catg_pane_g1

0x9f97,	// (0x0002b82c) cell_tb_ext_pane_t1_ParamLimits

0x892a,	// (0x0002a1bf) vkb2_top_cell_right_narrow_pane_ParamLimits

0x892a,	// (0x0002a1bf) vkb2_top_cell_right_narrow_pane

0x8942,	// (0x0002a1d7) vkb2_top_cell_right_wide_pane_ParamLimits

0x8942,	// (0x0002a1d7) vkb2_top_cell_right_wide_pane

0x7b1f,	// (0x000293b4) bg_vkb2_func_pane_ParamLimits

0x7b1f,	// (0x000293b4) bg_vkb2_func_pane

0x89b3,	// (0x0002a248) vkb2_top_cell_left_pane_g1_ParamLimits

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp03

0x8a11,	// (0x0002a2a6) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x2198,	// (0x00023a2d) bg_vkb2_func_pane_g1

0x2190,	// (0x00023a25) bg_vkb2_func_pane_g2

0x21a0,	// (0x00023a35) bg_vkb2_func_pane_g3

0x21a8,	// (0x00023a3d) bg_vkb2_func_pane_g4

0x21b0,	// (0x00023a45) bg_vkb2_func_pane_g5

0x21b8,	// (0x00023a4d) bg_vkb2_func_pane_g6

0x21c8,	// (0x00023a5d) bg_vkb2_func_pane_g7

0x21c0,	// (0x00023a55) bg_vkb2_func_pane_g8

0x2188,	// (0x00023a1d) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x0003168e) bg_vkb2_func_pane_g

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp01

0x89b3,	// (0x0002a248) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x89b3,	// (0x0002a248) vkb2_top_cell_right_wide_pane_g1

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7b1f,	// (0x000293b4) bg_vkb2_fuc_pane_cp02

0x8a11,	// (0x0002a2a6) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8a11,	// (0x0002a2a6) vkb2_top_cell_right_narrow_pane_g1

0xeed3,	// (0x00030768) aid_touch_area_decrease_ParamLimits

0xeed3,	// (0x00030768) aid_touch_area_decrease

0xef01,	// (0x00030796) aid_touch_area_increase_ParamLimits

0xef01,	// (0x00030796) aid_touch_area_increase

0xef29,	// (0x000307be) aid_touch_area_mute_ParamLimits

0xef29,	// (0x000307be) aid_touch_area_mute

0xef51,	// (0x000307e6) aid_touch_area_slider_ParamLimits

0xef51,	// (0x000307e6) aid_touch_area_slider

0xef91,	// (0x00030826) popup_slider_window_g4_ParamLimits

0xef91,	// (0x00030826) popup_slider_window_g4

0xefb9,	// (0x0003084e) popup_slider_window_g5_ParamLimits

0xefb9,	// (0x0003084e) popup_slider_window_g5

0xefed,	// (0x00030882) popup_slider_window_g6_ParamLimits

0xefed,	// (0x00030882) popup_slider_window_g6

0x4f5d,	// (0x000267f2) popup_slider_window_t2_ParamLimits

0x4f5d,	// (0x000267f2) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x0003158a) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x0003158a) popup_slider_window_t

0xf009,	// (0x0003089e) slider_pane_ParamLimits

0xf009,	// (0x0003089e) slider_pane

0xa338,	// (0x0002bbcd) slider_pane_g1_ParamLimits

0xa338,	// (0x0002bbcd) slider_pane_g1

0xa34c,	// (0x0002bbe1) slider_pane_g2_ParamLimits

0xa34c,	// (0x0002bbe1) slider_pane_g2

0xa362,	// (0x0002bbf7) slider_pane_g3_ParamLimits

0xa362,	// (0x0002bbf7) slider_pane_g3

0x0003,

0xfe0c,	// (0x000316a1) slider_pane_g_ParamLimits

0xfe0c,	// (0x000316a1) slider_pane_g

0xc8b7,	// (0x0002e14c) popup_tb_float_extension_window_ParamLimits

0xc8b7,	// (0x0002e14c) popup_tb_float_extension_window

0xa38e,	// (0x0002bc23) aid_size_cell_tb_float_ext

0x0dce,	// (0x00022663) bg_popup_sub_window_cp28

0xa399,	// (0x0002bc2e) grid_tb_float_ext_pane

0xa3a1,	// (0x0002bc36) cell_tb_float_ext_pane_ParamLimits

0xa3a1,	// (0x0002bc36) cell_tb_float_ext_pane

0xa3b9,	// (0x0002bc4e) cell_tb_float_ext_pane_g1

0xa3c2,	// (0x0002bc57) grid_highlight_pane_cp12

0xcb1c,	// (0x0002e3b1) cell_last_hwr_side_pane_ParamLimits

0xcb1c,	// (0x0002e3b1) cell_last_hwr_side_pane

0x3f35,	// (0x000257ca) cell_last_hwr_side_pane_g1

0xa3cb,	// (0x0002bc60) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x000316aa) cell_last_hwr_side_pane_g

0xce73,	// (0x0002e708) vkb2_area_bottom_space_btn_pane_ParamLimits

0xce73,	// (0x0002e708) vkb2_area_bottom_space_btn_pane

0x7e56,	// (0x000296eb) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa22b,	// (0x0002bac0) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x8b5f,	// (0x0002a3f4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x8b75,	// (0x0002a40a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x8b75,	// (0x0002a40a) vkb2_area_bottom_space_btn_pane_g1

0x8bab,	// (0x0002a440) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x8bab,	// (0x0002a440) vkb2_area_bottom_space_btn_pane_g2

0x8be1,	// (0x0002a476) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x8be1,	// (0x0002a476) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x000316af) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x000316af) vkb2_area_bottom_space_btn_pane_g

0x7bdc,	// (0x00029471) cel_fep_hwr_func_pane_ParamLimits

0x7bdc,	// (0x00029471) cel_fep_hwr_func_pane

0xcaf1,	// (0x0002e386) cell_hwr_side_button_pane_ParamLimits

0xcaf1,	// (0x0002e386) cell_hwr_side_button_pane

0x9fcb,	// (0x0002b860) aid_area_touch_clock_ParamLimits

0x0ff1,	// (0x00022886) bg_uniindi_top_pane_ParamLimits

0x9fdd,	// (0x0002b872) uniindi_top_pane_g1_ParamLimits

0x9ff3,	// (0x0002b888) uniindi_top_pane_g2_ParamLimits

0x9fff,	// (0x0002b894) uniindi_top_pane_g3_ParamLimits

0xa010,	// (0x0002b8a5) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x000315c2) uniindi_top_pane_g_ParamLimits

0xa01d,	// (0x0002b8b2) uniindi_top_pane_t1_ParamLimits

0x0ff1,	// (0x00022886) bg_vkb2_func_pane_cp01_ParamLimits

0x0ff1,	// (0x00022886) bg_vkb2_func_pane_cp01

0xa3d4,	// (0x0002bc69) cel_fep_hwr_func_pane_g1_ParamLimits

0xa3d4,	// (0x0002bc69) cel_fep_hwr_func_pane_g1

0x0ff1,	// (0x00022886) bg_vkb2_func_pane_cp02_ParamLimits

0x0ff1,	// (0x00022886) bg_vkb2_func_pane_cp02

0xa3d4,	// (0x0002bc69) cell_hwr_side_button_pane_g1_ParamLimits

0xa3d4,	// (0x0002bc69) cell_hwr_side_button_pane_g1

0x20ac,	// (0x00023941) status_pane_g4_ParamLimits

0x20ac,	// (0x00023941) status_pane_g4

0x20c4,	// (0x00023959) status_pane_t1

0x3d25,	// (0x000255ba) form2_midp_gauge_slider_cont_pane

0x3d2d,	// (0x000255c2) form2_midp_gauge_slider_pane_t1_ParamLimits

0xea3d,	// (0x000302d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0xea4f,	// (0x000302e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf4,	// (0x00031389) form2_midp_gauge_slider_pane_t_ParamLimits

0x3d3f,	// (0x000255d4) form2_midp_slider_pane_ParamLimits

0x85a2,	// (0x00029e37) aid_size_cell_func_vkb2_ParamLimits

0x85a2,	// (0x00029e37) aid_size_cell_func_vkb2

0xa37a,	// (0x0002bc0f) slider_pane_g4_ParamLimits

0xa37a,	// (0x0002bc0f) slider_pane_g4

0xcede,	// (0x0002e773) form2_midp_gauge_slider_pane_t2_cp01

0xceec,	// (0x0002e781) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xceec,	// (0x0002e781) form2_midp_gauge_slider_pane_t3_cp01

0x8c52,	// (0x0002a4e7) form2_midp_slider_pane_cp01

0x0dce,	// (0x00022663) navi_smil_pane

0xa404,	// (0x0002bc99) navi_smil_pane_g1

0xa40c,	// (0x0002bca1) navi_smil_pane_t1

0xa3e2,	// (0x0002bc77) form2_midp_slider_pane_g1

0xa3eb,	// (0x0002bc80) form2_midp_slider_pane_g2

0xa3f3,	// (0x0002bc88) form2_midp_slider_pane_g3

0xa3e2,	// (0x0002bc77) form2_midp_slider_pane_g4

0x0622,	// (0x00021eb7) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x000316b8) form2_midp_slider_pane_g

0x8c17,	// (0x0002a4ac) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x8c17,	// (0x0002a4ac) vkb2_area_bottom_space_btn_pane_g4

0xe1e2,	// (0x0002fa77) lc0_navi_pane_ParamLimits

0xe1e2,	// (0x0002fa77) lc0_navi_pane

0xe24c,	// (0x0002fae1) lc0_stat_indi_pane_ParamLimits

0xe24c,	// (0x0002fae1) lc0_stat_indi_pane

0xe261,	// (0x0002faf6) ls0_title_pane_ParamLimits

0xe261,	// (0x0002faf6) ls0_title_pane

0x1458,	// (0x00022ced) bg_popup_sub_pane_cp14_ParamLimits

0x9fb2,	// (0x0002b847) list_uniindi_pane_ParamLimits

0x9fbe,	// (0x0002b853) uniindi_top_pane_ParamLimits

0xa059,	// (0x0002b8ee) list_single_uniindi_pane_g1_ParamLimits

0xa06c,	// (0x0002b901) list_single_uniindi_pane_t1_ParamLimits

0xcf09,	// (0x0002e79e) lc0_stat_clock_pane_ParamLimits

0xcf09,	// (0x0002e79e) lc0_stat_clock_pane

0x0645,	// (0x00021eda) lc0_stat_indi_pane_g1_ParamLimits

0x0645,	// (0x00021eda) lc0_stat_indi_pane_g1

0x0638,	// (0x00021ecd) lc0_stat_indi_pane_g2_ParamLimits

0x0638,	// (0x00021ecd) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x000316c3) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x000316c3) lc0_stat_indi_pane_g

0xcf16,	// (0x0002e7ab) lc0_uni_indicator_pane_ParamLimits

0xcf16,	// (0x0002e7ab) lc0_uni_indicator_pane

0xa41a,	// (0x0002bcaf) ls0_title_pane_g1_ParamLimits

0xa41a,	// (0x0002bcaf) ls0_title_pane_g1

0x065f,	// (0x00021ef4) ls0_title_pane_t1_ParamLimits

0x065f,	// (0x00021ef4) ls0_title_pane_t1

0xcf23,	// (0x0002e7b8) lc0_uni_indicator_pane_g1_ParamLimits

0xcf23,	// (0x0002e7b8) lc0_uni_indicator_pane_g1

0xa42e,	// (0x0002bcc3) lc0_stat_clock_pane_t1

0x5abc,	// (0x00027351) main_ai5_pane

0xa43c,	// (0x0002bcd1) ai5_sk_pane_ParamLimits

0xa43c,	// (0x0002bcd1) ai5_sk_pane

0x06a2,	// (0x00021f37) cell_ai5_widget_pane_ParamLimits

0x06a2,	// (0x00021f37) cell_ai5_widget_pane

0xa449,	// (0x0002bcde) aid_size_cell_widget_grid

0xa456,	// (0x0002bceb) bg_ai5_widget_pane_ParamLimits

0xa456,	// (0x0002bceb) bg_ai5_widget_pane

0x072f,	// (0x00021fc4) cell_ai5_widget_pane_g2

0x0743,	// (0x00021fd8) cell_ai5_widget_pane_g3

0x075d,	// (0x00021ff2) cell_ai5_widget_pane_g4

0x076d,	// (0x00022002) cell_ai5_widget_pane_g5

0x077d,	// (0x00022012) cell_ai5_widget_pane_g6

0x0789,	// (0x0002201e) cell_ai5_widget_pane_g7

0x07d1,	// (0x00022066) cell_ai5_widget_pane_t1_ParamLimits

0x07d1,	// (0x00022066) cell_ai5_widget_pane_t1

0x07ee,	// (0x00022083) cell_ai5_widget_pane_t2_ParamLimits

0x07ee,	// (0x00022083) cell_ai5_widget_pane_t2

0x0806,	// (0x0002209b) cell_ai5_widget_pane_t3_ParamLimits

0x0806,	// (0x0002209b) cell_ai5_widget_pane_t3

0x081e,	// (0x000220b3) cell_ai5_widget_pane_t4_ParamLimits

0x081e,	// (0x000220b3) cell_ai5_widget_pane_t4

0x0844,	// (0x000220d9) cell_ai5_widget_pane_t5_ParamLimits

0x0844,	// (0x000220d9) cell_ai5_widget_pane_t5

0xa48e,	// (0x0002bd23) cell_ai5_widget_pane_t6_ParamLimits

0xa48e,	// (0x0002bd23) cell_ai5_widget_pane_t6

0xa4a0,	// (0x0002bd35) cell_ai5_widget_pane_t7_ParamLimits

0xa4a0,	// (0x0002bd35) cell_ai5_widget_pane_t7

0x0863,	// (0x000220f8) cell_ai5_widget_pane_t8_ParamLimits

0x0863,	// (0x000220f8) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x000316dd) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x000316dd) cell_ai5_widget_pane_t

0x08c2,	// (0x00022157) grid_ai5_widget_pane

0x1458,	// (0x00022ced) highlight_cell_ai5_widget_pane_ParamLimits

0x1458,	// (0x00022ced) highlight_cell_ai5_widget_pane

0x08ce,	// (0x00022163) ai5_sk_left_pane

0x08d8,	// (0x0002216d) ai5_sk_middle_pane

0x08e2,	// (0x00022177) ai5_sk_right_pane

0xa4b9,	// (0x0002bd4e) bg_ai5_widget_pane_g1_ParamLimits

0xa4b9,	// (0x0002bd4e) bg_ai5_widget_pane_g1

0xa4c5,	// (0x0002bd5a) bg_ai5_widget_pane_g2_ParamLimits

0xa4c5,	// (0x0002bd5a) bg_ai5_widget_pane_g2

0xa4d1,	// (0x0002bd66) bg_ai5_widget_pane_g3_ParamLimits

0xa4d1,	// (0x0002bd66) bg_ai5_widget_pane_g3

0xa4dd,	// (0x0002bd72) bg_ai5_widget_pane_g4_ParamLimits

0xa4dd,	// (0x0002bd72) bg_ai5_widget_pane_g4

0xa4e9,	// (0x0002bd7e) bg_ai5_widget_pane_g5_ParamLimits

0xa4e9,	// (0x0002bd7e) bg_ai5_widget_pane_g5

0xa4f5,	// (0x0002bd8a) bg_ai5_widget_pane_g6_ParamLimits

0xa4f5,	// (0x0002bd8a) bg_ai5_widget_pane_g6

0xa501,	// (0x0002bd96) bg_ai5_widget_pane_g7_ParamLimits

0xa501,	// (0x0002bd96) bg_ai5_widget_pane_g7

0xa50d,	// (0x0002bda2) bg_ai5_widget_pane_g8_ParamLimits

0xa50d,	// (0x0002bda2) bg_ai5_widget_pane_g8

0xa519,	// (0x0002bdae) bg_ai5_widget_pane_g9_ParamLimits

0xa519,	// (0x0002bdae) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x000316f2) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x000316f2) bg_ai5_widget_pane_g

0xa549,	// (0x0002bdde) cell_shortcut_ai5_widget_pane_ParamLimits

0xa549,	// (0x0002bdde) cell_shortcut_ai5_widget_pane

0xa55a,	// (0x0002bdef) bg_cell_shortcut_ai5_widget_pane

0x11ab,	// (0x00022a40) cell_grid_ai5_widget_pane_g1

0x1dfc,	// (0x00023691) highlight_cell_shortcut_ai5_widget_pane

0x2198,	// (0x00023a2d) ai5_sk_left_pane_g1

0xa562,	// (0x0002bdf7) ai5_sk_left_pane_g2

0xa56a,	// (0x0002bdff) ai5_sk_left_pane_g3

0xa572,	// (0x0002be07) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x00031705) ai5_sk_left_pane_g

0xa57a,	// (0x0002be0f) ai5_sk_left_pane_t1

0x2190,	// (0x00023a25) ai5_sk_right_pane_g1

0xa588,	// (0x0002be1d) ai5_sk_right_pane_g2

0xa590,	// (0x0002be25) ai5_sk_right_pane_g3

0xa598,	// (0x0002be2d) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x0003170e) ai5_sk_right_pane_g

0xa5a0,	// (0x0002be35) ai5_sk_right_pane_t1

0x2190,	// (0x00023a25) ai5_sk_middle_pane_g1

0x2198,	// (0x00023a2d) ai5_sk_middle_pane_g2

0x21b0,	// (0x00023a45) ai5_sk_middle_pane_g3

0xa590,	// (0x0002be25) ai5_sk_middle_pane_g4

0xa56a,	// (0x0002bdff) ai5_sk_middle_pane_g5

0xa5ae,	// (0x0002be43) ai5_sk_middle_pane_g6

0x08ec,	// (0x00022181) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x00031717) ai5_sk_middle_pane_g

0xe0e0,	// (0x0002f975) aid_touch_area_size_lc0_ParamLimits

0xe0e0,	// (0x0002f975) aid_touch_area_size_lc0

0x7e85,	// (0x0002971a) cell_hwr_candidate_pane_t1_ParamLimits

0x1fe1,	// (0x00023876) aid_touch_navi_pane

0xe34d,	// (0x0002fbe2) status_dt_navi_pane_ParamLimits

0xe34d,	// (0x0002fbe2) status_dt_navi_pane

0xe365,	// (0x0002fbfa) status_dt_sta_pane_ParamLimits

0xe365,	// (0x0002fbfa) status_dt_sta_pane

0x08f4,	// (0x00022189) dt_sta_controll_pane

0x0901,	// (0x00022196) dt_sta_indi_pane

0x090e,	// (0x000221a3) dt_sta_title_pane

0x0ff1,	// (0x00022886) bg_dt_sta_indi_pane_ParamLimits

0x0ff1,	// (0x00022886) bg_dt_sta_indi_pane

0x0920,	// (0x000221b5) dt_sta_battery_pane

0x0928,	// (0x000221bd) dt_sta_indi_pane_g1

0x0931,	// (0x000221c6) dt_sta_indi_pane_g2

0x093a,	// (0x000221cf) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x00031726) dt_sta_indi_pane_g

0x0943,	// (0x000221d8) dt_sta_signal_pane

0x1458,	// (0x00022ced) bg_dt_sta_title_pane_ParamLimits

0x1458,	// (0x00022ced) bg_dt_sta_title_pane

0x094c,	// (0x000221e1) dt_sta_title_pane_g1

0x0954,	// (0x000221e9) dt_sta_title_pane_t1_ParamLimits

0x0954,	// (0x000221e9) dt_sta_title_pane_t1

0x0dce,	// (0x00022663) bg_dt_sta_control_pane

0x0969,	// (0x000221fe) dt_sta_controll_pane_g1

0x0972,	// (0x00022207) bg_dt_sta_title_pane_g1

0x097b,	// (0x00022210) bg_dt_sta_title_pane_g2

0x0984,	// (0x00022219) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x0003172d) bg_dt_sta_title_pane_g

0x3f35,	// (0x000257ca) bg_dt_sta_indi_pane_g1

0x098d,	// (0x00022222) dt_sta_signal_pane_g1

0x0995,	// (0x0002222a) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x00031734) dt_sta_signal_pane_g

0xa5b6,	// (0x0002be4b) dt_sta_battery_pane_g1

0xa5bf,	// (0x0002be54) dt_sta_battery_pane_t1

0x3f35,	// (0x000257ca) bg_dt_sta_control_pane_g1

0x19cc,	// (0x00023261) fep_china_uni_eep_pane

0x19d4,	// (0x00023269) fep_china_uni_entry_pane_ParamLimits

0x19e4,	// (0x00023279) popup_fep_china_uni_window_g1_ParamLimits

0x19f4,	// (0x00023289) popup_fep_china_uni_window_g2_ParamLimits

0x19f4,	// (0x00023289) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x00030fb2) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x00030fb2) popup_fep_china_uni_window_g

0xa5ce,	// (0x0002be63) fep_china_uni_eep_pane_g1

0xa5d6,	// (0x0002be6b) fep_china_uni_eep_pane_t1

0xa3fb,	// (0x0002bc90) aid_touch_area_size_smil_player

0x207f,	// (0x00023914) lc0_clock_pane

0x20b8,	// (0x0002394d) status_pane_g5_ParamLimits

0x20b8,	// (0x0002394d) status_pane_g5

0xc4eb,	// (0x0002dd80) popup_keymap_window

0x2098,	// (0x0002392d) status_icon_pane

0x0743,	// (0x00021fd8) cell_ai5_widget_pane_g3_ParamLimits

0x075d,	// (0x00021ff2) cell_ai5_widget_pane_g4_ParamLimits

0x076d,	// (0x00022002) cell_ai5_widget_pane_g5_ParamLimits

0x0795,	// (0x0002202a) cell_ai5_widget_pane_g8_ParamLimits

0x0795,	// (0x0002202a) cell_ai5_widget_pane_g8

0x07a9,	// (0x0002203e) cell_ai5_widget_pane_g9_ParamLimits

0x07a9,	// (0x0002203e) cell_ai5_widget_pane_g9

0x07bd,	// (0x00022052) cell_ai5_widget_pane_g10_ParamLimits

0x07bd,	// (0x00022052) cell_ai5_widget_pane_g10

0xa5e5,	// (0x0002be7a) status_icon_pane_g1

0x0dce,	// (0x00022663) bg_popup_sub_pane_cp13

0xa5ed,	// (0x0002be82) popup_keymap_window_t1

0xe08b,	// (0x0002f920) control_pane_g6_ParamLimits

0xe08b,	// (0x0002f920) control_pane_g6

0xe098,	// (0x0002f92d) control_pane_g7_ParamLimits

0xe098,	// (0x0002f92d) control_pane_g7

0xe0a5,	// (0x0002f93a) control_pane_g8_ParamLimits

0xe0a5,	// (0x0002f93a) control_pane_g8

0x08f4,	// (0x00022189) dt_sta_controll_pane_ParamLimits

0x0901,	// (0x00022196) dt_sta_indi_pane_ParamLimits

0x090e,	// (0x000221a3) dt_sta_title_pane_ParamLimits

0x13a9,	// (0x00022c3e) aid_size_touch_scroll_bar_cale

0x5b93,	// (0x00027428) popup_discreet_window_ParamLimits

0x5b93,	// (0x00027428) popup_discreet_window

0xc129,	// (0x0002d9be) popup_sk_window

0x2772,	// (0x00024007) bg_popup_sub_pane_cp28_ParamLimits

0x2772,	// (0x00024007) bg_popup_sub_pane_cp28

0xa5fb,	// (0x0002be90) popup_discreet_window_g1_ParamLimits

0xa5fb,	// (0x0002be90) popup_discreet_window_g1

0xa61b,	// (0x0002beb0) popup_discreet_window_t1_ParamLimits

0xa61b,	// (0x0002beb0) popup_discreet_window_t1

0xa639,	// (0x0002bece) popup_discreet_window_t2_ParamLimits

0xa639,	// (0x0002bece) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x00031739) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x00031739) popup_discreet_window_t

0x8c87,	// (0x0002a51c) popup_sk_window_g1

0x8c90,	// (0x0002a525) popup_sk_window_g2

0x0001,

0xfeab,	// (0x00031740) popup_sk_window_g

0x8c99,	// (0x0002a52e) popup_sk_window_t1

0x8ca7,	// (0x0002a53c) popup_sk_window_t1_copy1

0x072f,	// (0x00021fc4) cell_ai5_widget_pane_g2_ParamLimits

0x0875,	// (0x0002210a) cell_ai5_widget_pane_t9_ParamLimits

0x0875,	// (0x0002210a) cell_ai5_widget_pane_t9

0x0dce,	// (0x00022663) main_fep_fshwr2_pane

0xcf38,	// (0x0002e7cd) aid_fshwr2_btn_pane

0xcf49,	// (0x0002e7de) aid_fshwr2_syb_pane

0xcf5a,	// (0x0002e7ef) aid_fshwr2_txt_pane

0xcf66,	// (0x0002e7fb) fshwr2_func_candi_pane

0xcf80,	// (0x0002e815) fshwr2_hwr_syb_pane

0xcf95,	// (0x0002e82a) fshwr2_icf_pane

0x5abc,	// (0x00027351) fshwr2_icf_bg_pane

0xcfbb,	// (0x0002e850) fshwr2_icf_pane_t1_ParamLimits

0xcfbb,	// (0x0002e850) fshwr2_icf_pane_t1

0x196a,	// (0x000231ff) fshwr2_func_candi_pane_g1

0x0a37,	// (0x000222cc) fshwr2_func_candi_row_pane_ParamLimits

0x0a37,	// (0x000222cc) fshwr2_func_candi_row_pane

0xcfd2,	// (0x0002e867) cell_fshwr2_syb_pane_ParamLimits

0xcfd2,	// (0x0002e867) cell_fshwr2_syb_pane

0x7e56,	// (0x000296eb) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7e56,	// (0x000296eb) fshwr2_hwr_syb_pane_g1

0x5abc,	// (0x00027351) bg_popup_call_pane_cp01

0xcfe6,	// (0x0002e87b) fshwr2_func_candi_cell_pane_ParamLimits

0xcfe6,	// (0x0002e87b) fshwr2_func_candi_cell_pane

0x2564,	// (0x00023df9) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x2564,	// (0x00023df9) fshwr2_func_candi_cell_bg_pane

0xd025,	// (0x0002e8ba) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd025,	// (0x0002e8ba) fshwr2_func_candi_cell_pane_g1

0xd05c,	// (0x0002e8f1) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xd05c,	// (0x0002e8f1) fshwr2_func_candi_cell_pane_t1

0x5abc,	// (0x00027351) bg_button_pane_cp08

0x1dfc,	// (0x00023691) cell_fshwr2_syb_bg_pane

0xd077,	// (0x0002e90c) cell_fshwr2_syb_bg_pane_g1

0xd07f,	// (0x0002e914) cell_fshwr2_syb_bg_pane_t1

0x1458,	// (0x00022ced) main_tmo_pane

0xe5ee,	// (0x0002fe83) uni_indicator_pane_g1_ParamLimits

0xe604,	// (0x0002fe99) uni_indicator_pane_g2_ParamLimits

0xe61a,	// (0x0002feaf) uni_indicator_pane_g3_ParamLimits

0x30fe,	// (0x00024993) uni_indicator_pane_g4_ParamLimits

0x30fe,	// (0x00024993) uni_indicator_pane_g4

0x3112,	// (0x000249a7) uni_indicator_pane_g5_ParamLimits

0x3112,	// (0x000249a7) uni_indicator_pane_g5

0x3112,	// (0x000249a7) uni_indicator_pane_g6_ParamLimits

0x3112,	// (0x000249a7) uni_indicator_pane_g6

0xf915,	// (0x000311aa) uni_indicator_pane_g_ParamLimits

0xeeb7,	// (0x0003074c) popup_tmo_note_window_ParamLimits

0xeeb7,	// (0x0003074c) popup_tmo_note_window

0x857e,	// (0x00029e13) fshwr2_bg_pane

0xd04d,	// (0x0002e8e2) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd04d,	// (0x0002e8e2) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x00031745) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x00031745) fshwr2_func_candi_cell_pane_g

0x7e3e,	// (0x000296d3) bg_popup_window_pane_cp01

0x8dd0,	// (0x0002a665) bg_popup_window_pane_g1_cp01

0xa68b,	// (0x0002bf20) bg_popup_window_pane_cp22_ParamLimits

0xa68b,	// (0x0002bf20) bg_popup_window_pane_cp22

0xa699,	// (0x0002bf2e) listscroll_tmo_link_pane_ParamLimits

0xa699,	// (0x0002bf2e) listscroll_tmo_link_pane

0xa6d9,	// (0x0002bf6e) popup_tmo_note_window_g1_ParamLimits

0xa6d9,	// (0x0002bf6e) popup_tmo_note_window_g1

0xa6e6,	// (0x0002bf7b) tmo_note_info_pane_ParamLimits

0xa6e6,	// (0x0002bf7b) tmo_note_info_pane

0x0b16,	// (0x000223ab) list_tmo_note_info_pane_g1_ParamLimits

0x0b16,	// (0x000223ab) list_tmo_note_info_pane_g1

0xa700,	// (0x0002bf95) list_tmo_note_info_pane_g2_ParamLimits

0xa700,	// (0x0002bf95) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x0003174a) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x0003174a) list_tmo_note_info_pane_g

0xa71c,	// (0x0002bfb1) list_tmo_note_info_text_pane_ParamLimits

0xa71c,	// (0x0002bfb1) list_tmo_note_info_text_pane

0xa75e,	// (0x0002bff3) list_tmo_link_pane

0xa76b,	// (0x0002c000) scroll_pane_cp20

0xa778,	// (0x0002c00d) list_single_tmo_link_pane_ParamLimits

0xa778,	// (0x0002c00d) list_single_tmo_link_pane

0xa788,	// (0x0002c01d) list_single_tmo_link_pane_t1

0xa796,	// (0x0002c02b) list_tmo_note_info_text_pane_t1_ParamLimits

0xa796,	// (0x0002c02b) list_tmo_note_info_text_pane_t1

0x1512,	// (0x00022da7) aid_size_touch_scroll_bar_cp01_ParamLimits

0x1512,	// (0x00022da7) aid_size_touch_scroll_bar_cp01

0xd782,	// (0x0002f017) aid_size_touch_slider_marker

0xc11d,	// (0x0002d9b2) popup_settings_window_ParamLimits

0xc11d,	// (0x0002d9b2) popup_settings_window

0x96a9,	// (0x0002af3e) popup_candi_list_indi_window

0x1fe1,	// (0x00023876) aid_touch_navi_pane_ParamLimits

0x84da,	// (0x00029d6f) rs_clock_indi_pane

0x84e3,	// (0x00029d78) sctrl_sk_bottom_pane_ParamLimits

0x84f4,	// (0x00029d89) sctrl_sk_top_pane_ParamLimits

0x85fc,	// (0x00029e91) popup_fep_tooltip_window

0xa449,	// (0x0002bcde) aid_size_cell_widget_grid_ParamLimits

0x071b,	// (0x00021fb0) cell_ai5_widget_pane_g1_ParamLimits

0x071b,	// (0x00021fb0) cell_ai5_widget_pane_g1

0x077d,	// (0x00022012) cell_ai5_widget_pane_g6_ParamLimits

0x0789,	// (0x0002201e) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x000316c8) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x000316c8) cell_ai5_widget_pane_g

0x08a4,	// (0x00022139) cell_ai5_widget_pane_t10_ParamLimits

0x08a4,	// (0x00022139) cell_ai5_widget_pane_t10

0x08c2,	// (0x00022157) grid_ai5_widget_pane_ParamLimits

0xa525,	// (0x0002bdba) cell_contacts_ai5_widget_pane_ParamLimits

0xa525,	// (0x0002bdba) cell_contacts_ai5_widget_pane

0xa64e,	// (0x0002bee3) popup_discreet_window_t3_ParamLimits

0xa64e,	// (0x0002bee3) popup_discreet_window_t3

0xcfa9,	// (0x0002e83e) popup_fshwr2_char_preview_window_ParamLimits

0xcfa9,	// (0x0002e83e) popup_fshwr2_char_preview_window

0x0b2d,	// (0x000223c2) tmo_note_info_pane_t1

0x0b42,	// (0x000223d7) tmo_note_info_pane_t2

0x0b57,	// (0x000223ec) tmo_note_info_pane_t3

0xa73a,	// (0x0002bfcf) tmo_note_info_pane_t4

0xa74c,	// (0x0002bfe1) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x0003174f) tmo_note_info_pane_t

0xa75e,	// (0x0002bff3) list_tmo_link_pane_ParamLimits

0xa76b,	// (0x0002c000) scroll_pane_cp20_ParamLimits

0x5abc,	// (0x00027351) bg_popup_fep_char_preview_window_cp01

0xa7af,	// (0x0002c044) popup_fshwr2_char_preview_window_t1

0xa7bd,	// (0x0002c052) popup_candi_list_indi_window_g1

0xa7c6,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane

0xa7d2,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1

0xa7e7,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2

0xa7f3,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x0003175a) cell_contacts_ai5_widget_pane_g

0xa7ff,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1

0x1458,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01

0x0bcf,	// (0x00022464) settings_container_pane

0x1dfc,	// (0x00023691) listscroll_set_pane_copy1

0x3873,	// (0x00025108) scroll_pane_cp121_copy1

0xa811,	// (0x0002c0a6) set_content_pane_copy1

0xa819,	// (0x0002c0ae) aid_height_set_list_copy1_ParamLimits

0xa819,	// (0x0002c0ae) aid_height_set_list_copy1

0x32ab,	// (0x00024b40) aid_size_parent_copy1_ParamLimits

0x32ab,	// (0x00024b40) aid_size_parent_copy1

0xa825,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa825,	// (0x0002c0ba) button_value_adjust_pane_cp6_copy1

0x15de,	// (0x00022e73) list_highlight_pane_cp2_copy1_ParamLimits

0x15de,	// (0x00022e73) list_highlight_pane_cp2_copy1

0x0bdb,	// (0x00022470) list_set_pane_copy1_ParamLimits

0x0bdb,	// (0x00022470) list_set_pane_copy1

0x0b6c,	// (0x00022401) main_pane_set_t1_copy1_ParamLimits

0x0b6c,	// (0x00022401) main_pane_set_t1_copy1

0x0ba6,	// (0x0002243b) main_pane_set_t2_copy1_ParamLimits

0x0ba6,	// (0x0002243b) main_pane_set_t2_copy1

0xa839,	// (0x0002c0ce) main_pane_set_t3_copy1

0xa847,	// (0x0002c0dc) main_pane_set_t4_copy1

0x0bc3,	// (0x00022458) set_content_pane_g1_copy1_ParamLimits

0x0bc3,	// (0x00022458) set_content_pane_g1_copy1

0xa855,	// (0x0002c0ea) setting_code_pane_copy1

0xa85d,	// (0x0002c0f2) setting_slider_graphic_pane_copy1

0xa85d,	// (0x0002c0f2) setting_slider_pane_copy1

0xa85d,	// (0x0002c0f2) setting_text_pane_copy1

0xa85d,	// (0x0002c0f2) setting_volume_pane_copy1

0xa865,	// (0x0002c0fa) settings_code_pane_cp2_copy1

0xa86d,	// (0x0002c102) settings_code_pane_cp_copy1_ParamLimits

0xa86d,	// (0x0002c102) settings_code_pane_cp_copy1

0xd08e,	// (0x0002e923) volume_set_pane_copy1

0x0c71,	// (0x00022506) volume_set_pane_g10_copy1

0x0c79,	// (0x0002250e) volume_set_pane_g1_copy1

0x0c81,	// (0x00022516) volume_set_pane_g2_copy1

0x0c89,	// (0x0002251e) volume_set_pane_g3_copy1

0x0c91,	// (0x00022526) volume_set_pane_g4_copy1

0x0c99,	// (0x0002252e) volume_set_pane_g5_copy1

0x0ca1,	// (0x00022536) volume_set_pane_g6_copy1

0x0ca9,	// (0x0002253e) volume_set_pane_g7_copy1

0x0cb1,	// (0x00022546) volume_set_pane_g8_copy1

0x0cb9,	// (0x0002254e) volume_set_pane_g9_copy1

0x0ebe,	// (0x00022753) bg_set_opt_pane_cp_copy1_ParamLimits

0x0ebe,	// (0x00022753) bg_set_opt_pane_cp_copy1

0x5d8b,	// (0x00027620) setting_slider_pane_t1_copy1_ParamLimits

0x5d8b,	// (0x00027620) setting_slider_pane_t1_copy1

0x8de1,	// (0x0002a676) setting_slider_pane_t2_copy1_ParamLimits

0x8de1,	// (0x0002a676) setting_slider_pane_t2_copy1

0x8dfa,	// (0x0002a68f) setting_slider_pane_t3_copy1_ParamLimits

0x8dfa,	// (0x0002a68f) setting_slider_pane_t3_copy1

0x5dd1,	// (0x00027666) slider_set_pane_copy1_ParamLimits

0x5dd1,	// (0x00027666) slider_set_pane_copy1

0x14b3,	// (0x00022d48) set_opt_bg_pane_g1_copy2

0x14bb,	// (0x00022d50) set_opt_bg_pane_g2_copy2

0xa881,	// (0x0002c116) set_opt_bg_pane_g3_copy2

0x14cb,	// (0x00022d60) set_opt_bg_pane_g4_copy2

0x14d3,	// (0x00022d68) set_opt_bg_pane_g5_copy2

0x14db,	// (0x00022d70) set_opt_bg_pane_g6_copy2

0x0cc1,	// (0x00022556) set_opt_bg_pane_g7_copy2

0xa889,	// (0x0002c11e) set_opt_bg_pane_g8_copy2

0xa891,	// (0x0002c126) set_opt_bg_pane_g9_copy2

0x750a,	// (0x00028d9f) aid_size_touch_slider_mark_copy1_ParamLimits

0x750a,	// (0x00028d9f) aid_size_touch_slider_mark_copy1

0x3328,	// (0x00024bbd) slider_set_pane_g1_copy1

0x334a,	// (0x00024bdf) slider_set_pane_g2_copy1

0x752a,	// (0x00028dbf) slider_set_pane_g3_copy1_ParamLimits

0x752a,	// (0x00028dbf) slider_set_pane_g3_copy1

0x753e,	// (0x00028dd3) slider_set_pane_g4_copy1_ParamLimits

0x753e,	// (0x00028dd3) slider_set_pane_g4_copy1

0x7556,	// (0x00028deb) slider_set_pane_g5_copy1_ParamLimits

0x7556,	// (0x00028deb) slider_set_pane_g5_copy1

0x752a,	// (0x00028dbf) slider_set_pane_g6_copy1_ParamLimits

0x752a,	// (0x00028dbf) slider_set_pane_g6_copy1

0xd096,	// (0x0002e92b) slider_set_pane_g7_copy1_ParamLimits

0xd096,	// (0x0002e92b) slider_set_pane_g7_copy1

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp2_copy1

0x0ecc,	// (0x00022761) setting_slider_graphic_pane_g1_copy1

0xd0ac,	// (0x0002e941) setting_slider_graphic_pane_t1_copy1

0xd0bb,	// (0x0002e950) setting_slider_graphic_pane_t2_copy1

0xd0ca,	// (0x0002e95f) slider_set_pane_cp_copy1

0xa8a1,	// (0x0002c136) input_focus_pane_cp1_copy1

0xa8aa,	// (0x0002c13f) list_set_text_pane_copy1

0xa8b2,	// (0x0002c147) setting_text_pane_g1_copy1

0xa8bb,	// (0x0002c150) set_text_pane_t1_copy1

0xa8a1,	// (0x0002c136) input_focus_pane_cp2_copy1

0xa8b2,	// (0x0002c147) setting_code_pane_g1_copy1

0xa8d4,	// (0x0002c169) setting_code_pane_t1_copy1

0xdf47,	// (0x0002f7dc) list_set_graphic_pane_copy1

0x0e5a,	// (0x000226ef) bg_set_opt_pane_cp4_copy1

0xa8e2,	// (0x0002c177) list_set_graphic_pane_g1_copy1_ParamLimits

0xa8e2,	// (0x0002c177) list_set_graphic_pane_g1_copy1

0xa8ee,	// (0x0002c183) list_set_graphic_pane_g2_copy1

0x1b77,	// (0x0002340c) list_set_graphic_pane_t1_copy1_ParamLimits

0x1b77,	// (0x0002340c) list_set_graphic_pane_t1_copy1

0x3f35,	// (0x000257ca) rs_clock_indi_pane_g1

0xa8f6,	// (0x0002c18b) rs_clock_indi_pane_t1

0xa904,	// (0x0002c199) rs_indi_pane

0xa90c,	// (0x0002c1a1) rs_indi_pane_g1

0xa915,	// (0x0002c1aa) rs_indi_pane_g2

0xa7bd,	// (0x0002c052) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x00031761) rs_indi_pane_g

0x1dfc,	// (0x00023691) bg_popup_preview_window_pane_cp03

0xa91e,	// (0x0002c1b3) popup_fep_tooltip_window_t1

0x4860,	// (0x000260f5) popup_note2_window_g2_ParamLimits

0x4860,	// (0x000260f5) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x00031501) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x00031501) popup_note2_window_g

0x4cdb,	// (0x00026570) bg_popup_sub_pane_cp11_ParamLimits

0x4ce8,	// (0x0002657d) cell_ai3_links_pane_g1_ParamLimits

0x4cff,	// (0x00026594) cell_ai3_links_pane_t1

0xa8bb,	// (0x0002c150) set_text_pane_t1_copy1_ParamLimits

0x1d23,	// (0x000235b8) cell_graphic_popup_pane_cp2_ParamLimits

0x1d23,	// (0x000235b8) cell_graphic_popup_pane_cp2

0xa92c,	// (0x0002c1c1) cell_graphic_popup_pane_g1_cp2

0x1258,	// (0x00022aed) cell_graphic_popup_pane_g2_cp2

0xa934,	// (0x0002c1c9) cell_graphic_popup_pane_g3_cp2

0xa93c,	// (0x0002c1d1) cell_graphic_popup_pane_t2_cp2

0x1269,	// (0x00022afe) grid_highlight_pane_cp3_cp2

0x17a3,	// (0x00023038) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1458,	// (0x00022ced) main_tmo_pane_ParamLimits

0xeeaf,	// (0x00030744) popup_tmo_big_image_note_window

0xa486,	// (0x0002bd1b) cell_ai5_widget_list_pane

0x0712,	// (0x00021fa7) cell_ai5_widget_lrg_icon_pane

0x0b2d,	// (0x000223c2) tmo_note_info_pane_t1_ParamLimits

0x0b42,	// (0x000223d7) tmo_note_info_pane_t2_ParamLimits

0x0b57,	// (0x000223ec) tmo_note_info_pane_t3_ParamLimits

0xa73a,	// (0x0002bfcf) tmo_note_info_pane_t4_ParamLimits

0xa74c,	// (0x0002bfe1) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x0003174f) tmo_note_info_pane_t_ParamLimits

0x0bcf,	// (0x00022464) settings_container_pane_ParamLimits

0xa899,	// (0x0002c12e) indicator_popup_pane_cp5

0xa899,	// (0x0002c12e) indicator_popup_pane_cp6

0xdf47,	// (0x0002f7dc) list_set_graphic_pane_copy1_ParamLimits

0x0dce,	// (0x00022663) bg_popup_window_pane_cp23

0xa94a,	// (0x0002c1df) popup_tmo_big_image_note_window_g1

0xa953,	// (0x0002c1e8) popup_tmo_big_image_note_window_t1

0xa961,	// (0x0002c1f6) popup_tmo_big_image_note_window_t2

0xa96f,	// (0x0002c204) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x00031768) popup_tmo_big_image_note_window_t

0x3f35,	// (0x000257ca) cell_ai5_widget_lrg_icon_pane_g1

0xa97d,	// (0x0002c212) cell_ai5_widget_lrg_icon_pane_t1

0x0d05,	// (0x0002259a) cell_ai5_widget_list_row_pane_ParamLimits

0x0d05,	// (0x0002259a) cell_ai5_widget_list_row_pane

0x0d1c,	// (0x000225b1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x0d1c,	// (0x000225b1) cell_ai5_widget_list_row_pane_g1

0x0d29,	// (0x000225be) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x0d29,	// (0x000225be) cell_ai5_widget_list_row_pane_t1

0x0d5a,	// (0x000225ef) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x0d5a,	// (0x000225ef) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x0003176f) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x0003176f) cell_ai5_widget_list_row_pane_t

0x5abc,	// (0x00027351) main_fep_vtchi_ss_pane

0xa9ab,	// (0x0002c240) popup_fep_char_pre_window

0xa9b3,	// (0x0002c248) popup_fep_ituss_window

0x0d82,	// (0x00022617) popup_fep_vkbss_window

0xa9e6,	// (0x0002c27b) grid_vkbss_keypad_pane_ParamLimits

0xa9e6,	// (0x0002c27b) grid_vkbss_keypad_pane

0xa9f6,	// (0x0002c28b) ituss_keypad_pane

0x8e57,	// (0x0002a6ec) aid_vkbss_key_offset_ParamLimits

0x8e57,	// (0x0002a6ec) aid_vkbss_key_offset

0x8e63,	// (0x0002a6f8) cell_vkbss_key_pane_ParamLimits

0x8e63,	// (0x0002a6f8) cell_vkbss_key_pane

0x21ee,	// (0x00023a83) bg_cell_vkbss_key_g1_ParamLimits

0x21ee,	// (0x00023a83) bg_cell_vkbss_key_g1

0xaa05,	// (0x0002c29a) cell_vkbss_key_3p_pane_ParamLimits

0xaa05,	// (0x0002c29a) cell_vkbss_key_3p_pane

0xaa1f,	// (0x0002c2b4) cell_vkbss_key_g1_ParamLimits

0xaa1f,	// (0x0002c2b4) cell_vkbss_key_g1

0xaa39,	// (0x0002c2ce) cell_vkbss_key_t1_ParamLimits

0xaa39,	// (0x0002c2ce) cell_vkbss_key_t1

0x8e79,	// (0x0002a70e) cell_ituss_key_pane_ParamLimits

0x8e79,	// (0x0002a70e) cell_ituss_key_pane

0xaa64,	// (0x0002c2f9) bg_cell_ituss_key_g1_ParamLimits

0xaa64,	// (0x0002c2f9) bg_cell_ituss_key_g1

0xaa70,	// (0x0002c305) cell_ituss_key_pane_g1_ParamLimits

0xaa70,	// (0x0002c305) cell_ituss_key_pane_g1

0x8e8a,	// (0x0002a71f) cell_ituss_key_pane_g2_ParamLimits

0x8e8a,	// (0x0002a71f) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x00031776) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x00031776) cell_ituss_key_pane_g

0x8eb2,	// (0x0002a747) cell_ituss_key_t1_ParamLimits

0x8eb2,	// (0x0002a747) cell_ituss_key_t1

0x8eec,	// (0x0002a781) cell_ituss_key_t2_ParamLimits

0x8eec,	// (0x0002a781) cell_ituss_key_t2

0x8f1d,	// (0x0002a7b2) cell_ituss_key_t3_ParamLimits

0x8f1d,	// (0x0002a7b2) cell_ituss_key_t3

0x8eec,	// (0x0002a781) cell_ituss_key_t4_ParamLimits

0x8eec,	// (0x0002a781) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x0003177d) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0003177d) cell_ituss_key_t

0xaa96,	// (0x0002c32b) cell_vkbss_key_3p_pane_g1

0xaa9e,	// (0x0002c333) cell_vkbss_key_3p_pane_g2

0xaaa6,	// (0x0002c33b) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x00031788) cell_vkbss_key_3p_pane_g

0x1dfc,	// (0x00023691) bg_popup_fep_char_preview_window_cp02

0xaaae,	// (0x0002c343) popup_fep_char_pre_window_t1

0x06ff,	// (0x00021f94) main_ai5_sk_pane

0xa7c6,	// (0x0002c05b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa7d2,	// (0x0002c067) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa7e7,	// (0x0002c07c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa7f3,	// (0x0002c088) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x0003175a) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa7ff,	// (0x0002c094) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1458,	// (0x00022ced) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x0d8f,	// (0x00022624) main_ai5_sk_pane_g1

0x25bc,	// (0x00023e51) popup_query_code_window_g1

0xa9c5,	// (0x0002c25a) popup_fep_vkb_icf_pane

0xa9d0,	// (0x0002c265) popup_fep_vtchi_icf_pane

0xaabc,	// (0x0002c351) bg_icf_pane

0xaac8,	// (0x0002c35d) list_vkb_icf_pane

0xaad4,	// (0x0002c369) bg_icf_pane_cp01

0xaae7,	// (0x0002c37c) vtchi_icf_list_pane

0xaaf7,	// (0x0002c38c) list_vkb_icf_pane_t1_ParamLimits

0xaaf7,	// (0x0002c38c) list_vkb_icf_pane_t1

0xab0c,	// (0x0002c3a1) vtchi_icf_list_pane_t1_ParamLimits

0xab0c,	// (0x0002c3a1) vtchi_icf_list_pane_t1

0xa9b3,	// (0x0002c248) popup_fep_ituss_window_ParamLimits

0xa9d0,	// (0x0002c265) popup_fep_vtchi_icf_pane_ParamLimits

0xa9f6,	// (0x0002c28b) ituss_keypad_pane_ParamLimits

0x8e4d,	// (0x0002a6e2) ituss_sks_pane

0xaabc,	// (0x0002c351) bg_icf_pane_ParamLimits

0xa98b,	// (0x0002c220) icf_edit_indi_pane_ParamLimits

0xa98b,	// (0x0002c220) icf_edit_indi_pane

0xaac8,	// (0x0002c35d) list_vkb_icf_pane_ParamLimits

0xaad4,	// (0x0002c369) bg_icf_pane_cp01_ParamLimits

0xa99e,	// (0x0002c233) icf_edit_indi_pane_cp01_ParamLimits

0xa99e,	// (0x0002c233) icf_edit_indi_pane_cp01

0xaaef,	// (0x0002c384) vtchi_query_pane

0xa3d4,	// (0x0002bc69) icf_edit_indi_pane_g1_ParamLimits

0xa3d4,	// (0x0002bc69) icf_edit_indi_pane_g1

0x0d98,	// (0x0002262d) icf_edit_indi_pane_g2_ParamLimits

0x0d98,	// (0x0002262d) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x000317a0) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x000317a0) icf_edit_indi_pane_g

0x0da8,	// (0x0002263d) icf_edit_indi_pane_t1

0xab23,	// (0x0002c3b8) bg_input_focus_pane_cp042

0xab2c,	// (0x0002c3c1) vtchi_button_pane

0xab35,	// (0x0002c3ca) vtchi_query_pane_t1

0xab43,	// (0x0002c3d8) vtchi_query_pane_t2

0xab51,	// (0x0002c3e6) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0003178f) vtchi_query_pane_t

0x5abc,	// (0x00027351) bg_button_pane_cp13

0xab5f,	// (0x0002c3f4) vtchi_button_pane_g1

0x8f60,	// (0x0002a7f5) ituss_sks_pane_g1

0x8f69,	// (0x0002a7fe) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x00031796) ituss_sks_pane_g

0xab67,	// (0x0002c3fc) ituss_sks_pane_t1

0xab75,	// (0x0002c40a) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0003179b) ituss_sks_pane_t

0x3b4c,	// (0x000253e1) indicator_nsta_pane_cp_g1

0x3b55,	// (0x000253ea) indicator_nsta_pane_cp_g2

0x3b5d,	// (0x000253f2) indicator_nsta_pane_cp_g3

0x3b65,	// (0x000253fa) indicator_nsta_pane_cp_g4

0x3b6d,	// (0x00025402) indicator_nsta_pane_cp_g5

0x3b75,	// (0x0002540a) indicator_nsta_pane_cp_g6

0x0005,

0xfaaa,	// (0x0003133f) indicator_nsta_pane_cp_g

0x04ea,	// (0x00021d7f) cell_graphic2_pane_t2_ParamLimits

0x04ea,	// (0x00021d7f) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x00031651) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x00031651) cell_graphic2_pane_t

0x0522,	// (0x00021db7) cell_graphic2_control_pane_t1

0xdee5,	// (0x0002f77a) signal_pane_g3_ParamLimits

0xdee5,	// (0x0002f77a) signal_pane_g3

0xdef9,	// (0x0002f78e) signal_pane_g4_ParamLimits

0xdef9,	// (0x0002f78e) signal_pane_g4

0x0d6c,	// (0x00022601) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x0d6c,	// (0x00022601) cell_ai5_widget_list_row_pane_t3

0xaa84,	// (0x0002c319) cell_ituss_key_pane_t1_ParamLimits

0xaa84,	// (0x0002c319) cell_ituss_key_pane_t1

0x2292,	// (0x00023b27) form_field_data_wide_pane_vc_t2_ParamLimits

0x2292,	// (0x00023b27) form_field_data_wide_pane_vc_t2

0x22a4,	// (0x00023b39) form_field_data_wide_pane_vc_t3_ParamLimits

0x22a4,	// (0x00023b39) form_field_data_wide_pane_vc_t3

0x0002,

0xf7fd,	// (0x00031092) form_field_data_wide_pane_vc_t_ParamLimits

0xf7fd,	// (0x00031092) form_field_data_wide_pane_vc_t

0x38b8,	// (0x0002514d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x38b8,	// (0x0002514d) form_field_slider_wide_pane_vc_t3

0x3976,	// (0x0002520b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3976,	// (0x0002520b) form_field_popup_wide_pane_vc_t2

0x398b,	// (0x00025220) form_field_popup_wide_pane_vc_t3_ParamLimits

0x398b,	// (0x00025220) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa99,	// (0x0003132e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0003132e) form_field_popup_wide_pane_vc_t

0xcf38,	// (0x0002e7cd) aid_fshwr2_btn_pane_ParamLimits

0xcf49,	// (0x0002e7de) aid_fshwr2_syb_pane_ParamLimits

0xcf5a,	// (0x0002e7ef) aid_fshwr2_txt_pane_ParamLimits

0x857e,	// (0x00029e13) fshwr2_bg_pane_ParamLimits

0xcf66,	// (0x0002e7fb) fshwr2_func_candi_pane_ParamLimits

0xcf80,	// (0x0002e815) fshwr2_hwr_syb_pane_ParamLimits

0xcf95,	// (0x0002e82a) fshwr2_icf_pane_ParamLimits

0x9ad7,	// (0x0002b36c) list_double_graphic_pane_vc_g4_ParamLimits

0x9ad7,	// (0x0002b36c) list_double_graphic_pane_vc_g4

0x8ea6,	// (0x0002a73b) cell_ituss_key_pane_g3_ParamLimits

0x8ea6,	// (0x0002a73b) cell_ituss_key_pane_g3

0x8f4e,	// (0x0002a7e3) cell_ituss_key_t5_ParamLimits

0x8f4e,	// (0x0002a7e3) cell_ituss_key_t5

0x0d82,	// (0x00022617) popup_fep_vkbss_window_ParamLimits

0x0709,	// (0x00021f9e) aid_cell_ai5_quarter

0x0da8,	// (0x0002263d) icf_edit_indi_pane_t1_ParamLimits

0x1099,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x1099,	// (0x0002292e) aid_tch_indicator_popup_pane_cp2

0x10ac,	// (0x00022941) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x10ac,	// (0x00022941) aid_tch_query_popup_data_pane_cp2

0x2564,	// (0x00023df9) aid_tch_query_popup_pane_ParamLimits

0x2564,	// (0x00023df9) aid_tch_query_popup_pane

0x2564,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x2564,	// (0x00023df9) aid_tch_query_popup_data_pane_cp1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Small

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

#include "aknlayoutscalable_elaf_pql_av_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0002e3e7 };

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
0x0580,	// (0x0002e967) Screen

0x058a,	// (0x0002e971) application_window_ParamLimits

0x058a,	// (0x0002e971) application_window

0x41e5,	// (0x000325cc) screen_g1

0x0598,	// (0x0002e97f) area_bottom_pane_ParamLimits

0x0598,	// (0x0002e97f) area_bottom_pane

0x4273,	// (0x0003265a) area_top_pane_ParamLimits

0x4273,	// (0x0003265a) area_top_pane

0x42eb,	// (0x000326d2) main_pane_ParamLimits

0x42eb,	// (0x000326d2) main_pane

0x43a4,	// (0x0003278b) misc_graphics

0x15cf,	// (0x0002f9b6) battery_pane_ParamLimits

0x15cf,	// (0x0002f9b6) battery_pane

0x8189,	// (0x00036570) bg_status_flat_pane_g8

0x8191,	// (0x00036578) bg_status_flat_pane_g9

0x78c0,	// (0x00035ca7) context_pane_ParamLimits

0x78c0,	// (0x00035ca7) context_pane

0x1729,	// (0x0002fb10) navi_pane_ParamLimits

0x1729,	// (0x0002fb10) navi_pane

0x179e,	// (0x0002fb85) signal_pane_ParamLimits

0x179e,	// (0x0002fb85) signal_pane

0x0008,

0xf872,	// (0x0003dc59) bg_status_flat_pane_g

0x182a,	// (0x0002fc11) status_pane_g1_ParamLimits

0x182a,	// (0x0002fc11) status_pane_g1

0x1836,	// (0x0002fc1d) status_pane_g2_ParamLimits

0x1836,	// (0x0002fc1d) status_pane_g2

0x7932,	// (0x00035d19) status_pane_g3_ParamLimits

0x7932,	// (0x00035d19) status_pane_g3

0x0004,

0xf7a5,	// (0x0003db8c) status_pane_g_ParamLimits

0xf7a5,	// (0x0003db8c) status_pane_g

0x1842,	// (0x0002fc29) title_pane_ParamLimits

0x1842,	// (0x0002fc29) title_pane

0x189d,	// (0x0002fc84) uni_indicator_pane_ParamLimits

0x189d,	// (0x0002fc84) uni_indicator_pane

0x7817,	// (0x00035bfe) bg_list_pane_ParamLimits

0x7817,	// (0x00035bfe) bg_list_pane

0xd188,	// (0x0003b56f) find_pane

0xd190,	// (0x0003b577) listscroll_app_pane_ParamLimits

0xd190,	// (0x0003b577) listscroll_app_pane

0x7837,	// (0x00035c1e) listscroll_form_pane

0xd1a0,	// (0x0003b587) listscroll_gen_pane_ParamLimits

0xd1a0,	// (0x0003b587) listscroll_gen_pane

0x5519,	// (0x00033900) listscroll_set_pane

0xd1b5,	// (0x0003b59c) main_idle_act_pane

0x7682,	// (0x00035a69) main_idle_trad_pane

0x7682,	// (0x00035a69) main_list_empty_pane

0x5521,	// (0x00033908) main_midp_pane

0x7851,	// (0x00035c38) main_pane_g1_ParamLimits

0x7851,	// (0x00035c38) main_pane_g1

0xd1c8,	// (0x0003b5af) popup_ai_message_window_ParamLimits

0xd1c8,	// (0x0003b5af) popup_ai_message_window

0xd24c,	// (0x0003b633) popup_fep_china_uni_window_ParamLimits

0xd24c,	// (0x0003b633) popup_fep_china_uni_window

0x5601,	// (0x000339e8) popup_fep_japan_candidate_window_ParamLimits

0x5601,	// (0x000339e8) popup_fep_japan_candidate_window

0x561f,	// (0x00033a06) popup_fep_japan_predictive_window_ParamLimits

0x561f,	// (0x00033a06) popup_fep_japan_predictive_window

0xd28a,	// (0x0003b671) popup_find_window

0xd2a3,	// (0x0003b68a) popup_grid_graphic_window_ParamLimits

0xd2a3,	// (0x0003b68a) popup_grid_graphic_window

0x5676,	// (0x00033a5d) popup_large_graphic_colour_window

0xd31f,	// (0x0003b706) popup_menu_window_ParamLimits

0xd31f,	// (0x0003b706) popup_menu_window

0xd47d,	// (0x0003b864) popup_note_image_window

0xd445,	// (0x0003b82c) popup_note_wait_window_ParamLimits

0xd445,	// (0x0003b82c) popup_note_wait_window

0xd493,	// (0x0003b87a) popup_note_window_ParamLimits

0xd493,	// (0x0003b87a) popup_note_window

0xd527,	// (0x0003b90e) popup_query_code_window_ParamLimits

0xd527,	// (0x0003b90e) popup_query_code_window

0x5833,	// (0x00033c1a) popup_query_data_code_window_ParamLimits

0x5833,	// (0x00033c1a) popup_query_data_code_window

0xd55f,	// (0x0003b946) popup_query_data_window_ParamLimits

0xd55f,	// (0x0003b946) popup_query_data_window

0xd5d3,	// (0x0003b9ba) popup_query_sat_info_window_ParamLimits

0xd5d3,	// (0x0003b9ba) popup_query_sat_info_window

0xd660,	// (0x0003ba47) popup_snote_single_graphic_window_ParamLimits

0xd660,	// (0x0003ba47) popup_snote_single_graphic_window

0xd660,	// (0x0003ba47) popup_snote_single_text_window_ParamLimits

0xd660,	// (0x0003ba47) popup_snote_single_text_window

0x58a2,	// (0x00033c89) popup_sub_window_general

0x59a6,	// (0x00033d8d) popup_window_general_ParamLimits

0x59a6,	// (0x00033d8d) popup_window_general

0x785f,	// (0x00035c46) power_save_pane

0xd059,	// (0x0003b440) control_pane_g1_ParamLimits

0xd059,	// (0x0003b440) control_pane_g1

0x53d6,	// (0x000337bd) control_pane_g2_ParamLimits

0x53d6,	// (0x000337bd) control_pane_g2

0x7809,	// (0x00035bf0) control_pane_g3_ParamLimits

0x7809,	// (0x00035bf0) control_pane_g3

0x0007,

0xf78d,	// (0x0003db74) control_pane_g_ParamLimits

0xf78d,	// (0x0003db74) control_pane_g

0xd08e,	// (0x0003b475) control_pane_t1_ParamLimits

0xd08e,	// (0x0003b475) control_pane_t1

0xd0ea,	// (0x0003b4d1) control_pane_t2_ParamLimits

0xd0ea,	// (0x0003b4d1) control_pane_t2

0x0002,

0xf79e,	// (0x0003db85) control_pane_t_ParamLimits

0xf79e,	// (0x0003db85) control_pane_t

0x77b1,	// (0x00035b98) navi_navi_volume_pane_cp1

0x77b9,	// (0x00035ba0) status_small_icon_pane

0x77c1,	// (0x00035ba8) status_small_pane_g1_ParamLimits

0x77c1,	// (0x00035ba8) status_small_pane_g1

0x14b8,	// (0x0002f89f) status_small_pane_g2_ParamLimits

0x14b8,	// (0x0002f89f) status_small_pane_g2

0x14c4,	// (0x0002f8ab) status_small_pane_g3_ParamLimits

0x14c4,	// (0x0002f8ab) status_small_pane_g3

0x14d0,	// (0x0002f8b7) status_small_pane_g4_ParamLimits

0x14d0,	// (0x0002f8b7) status_small_pane_g4

0x14dc,	// (0x0002f8c3) status_small_pane_g5_ParamLimits

0x14dc,	// (0x0002f8c3) status_small_pane_g5

0x77f5,	// (0x00035bdc) status_small_pane_g6_ParamLimits

0x77f5,	// (0x00035bdc) status_small_pane_g6

0x0007,

0xf77c,	// (0x0003db63) status_small_pane_g_ParamLimits

0xf77c,	// (0x0003db63) status_small_pane_g

0x150b,	// (0x0002f8f2) status_small_pane_t1

0x1525,	// (0x0002f90c) status_small_wait_pane_ParamLimits

0x1525,	// (0x0002f90c) status_small_wait_pane

0x134a,	// (0x0002f731) aid_levels_signal_ParamLimits

0x134a,	// (0x0002f731) aid_levels_signal

0x135e,	// (0x0002f745) signal_pane_g1_ParamLimits

0x135e,	// (0x0002f745) signal_pane_g1

0x1378,	// (0x0002f75f) signal_pane_g2_ParamLimits

0x1378,	// (0x0002f75f) signal_pane_g2

0x0003,

0xf70d,	// (0x0003daf4) signal_pane_g_ParamLimits

0xf70d,	// (0x0003daf4) signal_pane_g

0x7227,	// (0x0003560e) context_pane_g1

0x0601,	// (0x0002e9e8) title_pane_g1

0x0643,	// (0x0002ea2a) title_pane_t1

0x4500,	// (0x000328e7) title_pane_t2

0x4526,	// (0x0003290d) title_pane_t3

0x0002,

0xf557,	// (0x0003d93e) title_pane_t

0x18c3,	// (0x0002fcaa) aid_levels_battery_ParamLimits

0x18c3,	// (0x0002fcaa) aid_levels_battery

0x18db,	// (0x0002fcc2) battery_pane_g1_ParamLimits

0x18db,	// (0x0002fcc2) battery_pane_g1

0x18f6,	// (0x0002fcdd) battery_pane_g2_ParamLimits

0x18f6,	// (0x0002fcdd) battery_pane_g2

0x0001,

0xf7b0,	// (0x0003db97) battery_pane_g_ParamLimits

0xf7b0,	// (0x0003db97) battery_pane_g

0x1a9c,	// (0x0002fe83) uni_indicator_pane_g1

0x1ab2,	// (0x0002fe99) uni_indicator_pane_g2

0x1ac8,	// (0x0002feaf) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0003dd01) uni_indicator_pane_g

0x4cd1,	// (0x000330b8) navi_icon_pane_ParamLimits

0x4cd1,	// (0x000330b8) navi_icon_pane

0x43a4,	// (0x0003278b) navi_midp_pane

0x43a4,	// (0x0003278b) navi_navi_pane

0x4cd1,	// (0x000330b8) navi_text_pane_ParamLimits

0x4cd1,	// (0x000330b8) navi_text_pane

0x41e5,	// (0x000325cc) status_small_wait_pane_g1

0x48c5,	// (0x00032cac) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0003dcfc) status_small_wait_pane_g

0x1a42,	// (0x0002fe29) navi_navi_icon_text_pane

0x1a5c,	// (0x0002fe43) navi_navi_pane_g1_ParamLimits

0x1a5c,	// (0x0002fe43) navi_navi_pane_g1

0x1a4a,	// (0x0002fe31) navi_navi_pane_g2_ParamLimits

0x1a4a,	// (0x0002fe31) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0003dcca) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0003dcca) navi_navi_pane_g

0x1a6e,	// (0x0002fe55) navi_navi_tabs_pane

0x1a42,	// (0x0002fe29) navi_navi_text_pane

0x1a42,	// (0x0002fe29) navi_navi_volume_pane

0x86cf,	// (0x00036ab6) navi_text_pane_t1

0x86c3,	// (0x00036aaa) navi_icon_pane_g1

0x8617,	// (0x000369fe) navi_navi_text_pane_t1

0x5c25,	// (0x0003400c) navi_navi_volume_pane_g1

0xd8ae,	// (0x0003bc95) volume_small_pane

0x199e,	// (0x0002fd85) navi_navi_icon_text_pane_g1

0x19a6,	// (0x0002fd8d) navi_navi_icon_text_pane_t1

0x81d1,	// (0x000365b8) navi_tabs_2_long_pane

0x81d1,	// (0x000365b8) navi_tabs_2_pane

0x81d1,	// (0x000365b8) navi_tabs_3_long_pane

0x81d1,	// (0x000365b8) navi_tabs_3_pane

0x81d1,	// (0x000365b8) navi_tabs_4_pane

0xd88e,	// (0x0003bc75) tabs_2_active_pane_ParamLimits

0xd88e,	// (0x0003bc75) tabs_2_active_pane

0xd89e,	// (0x0003bc85) tabs_2_passive_pane_ParamLimits

0xd89e,	// (0x0003bc85) tabs_2_passive_pane

0xd85c,	// (0x0003bc43) tabs_3_active_pane_ParamLimits

0xd85c,	// (0x0003bc43) tabs_3_active_pane

0xd86c,	// (0x0003bc53) tabs_3_passive_pane_ParamLimits

0xd86c,	// (0x0003bc53) tabs_3_passive_pane

0xd87d,	// (0x0003bc64) tabs_3_passive_pane_cp_ParamLimits

0xd87d,	// (0x0003bc64) tabs_3_passive_pane_cp

0xd818,	// (0x0003bbff) tabs_4_active_pane_ParamLimits

0xd818,	// (0x0003bbff) tabs_4_active_pane

0xd829,	// (0x0003bc10) tabs_4_passive_pane_ParamLimits

0xd829,	// (0x0003bc10) tabs_4_passive_pane

0xd83a,	// (0x0003bc21) tabs_4_passive_pane_cp_ParamLimits

0xd83a,	// (0x0003bc21) tabs_4_passive_pane_cp

0xd84b,	// (0x0003bc32) tabs_4_passive_pane_cp2_ParamLimits

0xd84b,	// (0x0003bc32) tabs_4_passive_pane_cp2

0xd7f8,	// (0x0003bbdf) tabs_2_long_active_pane_ParamLimits

0xd7f8,	// (0x0003bbdf) tabs_2_long_active_pane

0xd808,	// (0x0003bbef) tabs_2_long_passive_pane_ParamLimits

0xd808,	// (0x0003bbef) tabs_2_long_passive_pane

0xd7c1,	// (0x0003bba8) tabs_3_long_active_pane_ParamLimits

0xd7c1,	// (0x0003bba8) tabs_3_long_active_pane

0xd7d4,	// (0x0003bbbb) tabs_3_long_passive_pane_ParamLimits

0xd7d4,	// (0x0003bbbb) tabs_3_long_passive_pane

0xd7e5,	// (0x0003bbcc) tabs_3_long_passive_pane_cp_ParamLimits

0xd7e5,	// (0x0003bbcc) tabs_3_long_passive_pane_cp

0x5ae0,	// (0x00033ec7) volume_small_pane_g1

0x5ae9,	// (0x00033ed0) volume_small_pane_g2

0x5af2,	// (0x00033ed9) volume_small_pane_g3

0x5afb,	// (0x00033ee2) volume_small_pane_g4

0x5b04,	// (0x00033eeb) volume_small_pane_g5

0x5b0d,	// (0x00033ef4) volume_small_pane_g6

0x5b16,	// (0x00033efd) volume_small_pane_g7

0x5b1f,	// (0x00033f06) volume_small_pane_g8

0x5b28,	// (0x00033f0f) volume_small_pane_g9

0x5b31,	// (0x00033f18) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0003dc96) volume_small_pane_g

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp2_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp2

0x4546,	// (0x0003292d) tabs_3_active_pane_g1

0x06d0,	// (0x0002eab7) tabs_3_active_pane_t1

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp2_ParamLimits

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp2

0x4546,	// (0x0003292d) tabs_3_passive_pane_g1

0x06d0,	// (0x0002eab7) tabs_3_passive_pane_t1

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp3_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp3

0x8bfd,	// (0x00036fe4) tabs_4_active_pane_g1

0x06e6,	// (0x0002eacd) tabs_4_active_pane_t1

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp3_ParamLimits

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp3

0x8bfd,	// (0x00036fe4) tabs_4_1_passive_pane_g1

0x06e6,	// (0x0002eacd) tabs_4_1_passive_pane_t1

0x5521,	// (0x00033908) list_highlight_pane_cp2

0x1b1d,	// (0x0002ff04) list_set_pane_ParamLimits

0x1b1d,	// (0x0002ff04) list_set_pane

0x1bab,	// (0x0002ff92) main_pane_set_t1_ParamLimits

0x1bab,	// (0x0002ff92) main_pane_set_t1

0x1bcb,	// (0x0002ffb2) main_pane_set_t2_ParamLimits

0x1bcb,	// (0x0002ffb2) main_pane_set_t2

0x1bdf,	// (0x0002ffc6) main_pane_set_t3_ParamLimits

0x1bdf,	// (0x0002ffc6) main_pane_set_t3

0x1bf1,	// (0x0002ffd8) main_pane_set_t4_ParamLimits

0x1bf1,	// (0x0002ffd8) main_pane_set_t4

0x0003,

0xf97f,	// (0x0003dd66) main_pane_set_t_ParamLimits

0xf97f,	// (0x0003dd66) main_pane_set_t

0x1c03,	// (0x0002ffea) setting_code_pane

0x1c0b,	// (0x0002fff2) setting_slider_graphic_pane

0x1c0b,	// (0x0002fff2) setting_slider_pane

0x1c0b,	// (0x0002fff2) setting_text_pane

0x1c0b,	// (0x0002fff2) setting_volume_pane

0xcf74,	// (0x0003b35b) volume_set_pane

0x4538,	// (0x0003291f) bg_set_opt_pane_cp

0x4556,	// (0x0003293d) setting_slider_pane_t1

0xcf7c,	// (0x0003b363) setting_slider_pane_t2

0xcf95,	// (0x0003b37c) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0003d945) setting_slider_pane_t

0x459c,	// (0x00032983) slider_set_pane

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp2

0x45b2,	// (0x00032999) setting_slider_graphic_pane_g1

0xcfac,	// (0x0003b393) setting_slider_graphic_pane_t1

0xcfbb,	// (0x0003b3a2) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0003d94c) setting_slider_graphic_pane_t

0xcfca,	// (0x0003b3b1) slider_set_pane_cp

0x43a4,	// (0x0003278b) input_focus_pane_cp1

0x8b40,	// (0x00036f27) list_set_text_pane

0x41e5,	// (0x000325cc) setting_text_pane_g1

0x43a4,	// (0x0003278b) input_focus_pane_cp2

0x41e5,	// (0x000325cc) setting_code_pane_g1

0x45e1,	// (0x000329c8) setting_code_pane_t1

0xc68b,	// (0x0003aa72) set_text_pane_t1_ParamLimits

0xc68b,	// (0x0003aa72) set_text_pane_t1

0x4c80,	// (0x00033067) set_opt_bg_pane_g1

0x4c88,	// (0x0003306f) set_opt_bg_pane_g2

0x1add,	// (0x0002fec4) set_opt_bg_pane_g3

0x4c98,	// (0x0003307f) set_opt_bg_pane_g4

0x4ca0,	// (0x00033087) set_opt_bg_pane_g5

0x4ca8,	// (0x0003308f) set_opt_bg_pane_g6

0x1ae5,	// (0x0002fecc) set_opt_bg_pane_g7

0x1aed,	// (0x0002fed4) set_opt_bg_pane_g8

0x1af5,	// (0x0002fedc) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0003dd53) set_opt_bg_pane_g

0x8b33,	// (0x00036f1a) slider_set_pane_g1

0x5c9a,	// (0x00034081) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0003dd44) slider_set_pane_g

0xd8b7,	// (0x0003bc9e) volume_set_pane_g1

0xd8bf,	// (0x0003bca6) volume_set_pane_g2

0xd8c7,	// (0x0003bcae) volume_set_pane_g3

0xd8cf,	// (0x0003bcb6) volume_set_pane_g4

0xd8d7,	// (0x0003bcbe) volume_set_pane_g5

0xd8df,	// (0x0003bcc6) volume_set_pane_g6

0xd8e7,	// (0x0003bcce) volume_set_pane_g7

0xd8ef,	// (0x0003bcd6) volume_set_pane_g8

0xd8f7,	// (0x0003bcde) volume_set_pane_g9

0xd8ff,	// (0x0003bce6) volume_set_pane_g10

0x0009,

0xf935,	// (0x0003dd1c) volume_set_pane_g

0x0716,	// (0x0002eafd) indicator_pane_ParamLimits

0x0716,	// (0x0002eafd) indicator_pane

0x073e,	// (0x0002eb25) main_idle_pane_g2_ParamLimits

0x073e,	// (0x0002eb25) main_idle_pane_g2

0x076e,	// (0x0002eb55) main_pane_idle_g1_ParamLimits

0x076e,	// (0x0002eb55) main_pane_idle_g1

0x45ef,	// (0x000329d6) popup_clock_digital_analogue_window_ParamLimits

0x45ef,	// (0x000329d6) popup_clock_digital_analogue_window

0x0793,	// (0x0002eb7a) soft_indicator_pane_ParamLimits

0x0793,	// (0x0002eb7a) soft_indicator_pane

0x07ad,	// (0x0002eb94) wallpaper_pane_ParamLimits

0x07ad,	// (0x0002eb94) wallpaper_pane

0x41e5,	// (0x000325cc) wallpaper_pane_g1

0x07bf,	// (0x0002eba6) indicator_pane_g1_ParamLimits

0x07bf,	// (0x0002eba6) indicator_pane_g1

0x8c68,	// (0x0003704f) navi_navi_icon_text_pane_srt_g1

0x461d,	// (0x00032a04) soft_indicator_pane_t1

0x4637,	// (0x00032a1e) aid_ps_area_pane

0x07d8,	// (0x0002ebbf) aid_ps_clock_pane

0x4648,	// (0x00032a2f) aid_ps_indicator_pane

0x4654,	// (0x00032a3b) indicator_ps_pane_ParamLimits

0x4654,	// (0x00032a3b) indicator_ps_pane

0x4663,	// (0x00032a4a) power_save_pane_g1_ParamLimits

0x4663,	// (0x00032a4a) power_save_pane_g1

0x466f,	// (0x00032a56) power_save_pane_g2_ParamLimits

0x466f,	// (0x00032a56) power_save_pane_g2

0x41ef,	// (0x000325d6) aid_navinavi_width_pane

0x4637,	// (0x00032a1e) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0003d951) power_save_pane_g_ParamLimits

0xf56a,	// (0x0003d951) power_save_pane_g

0x467d,	// (0x00032a64) power_save_pane_t1_ParamLimits

0x467d,	// (0x00032a64) power_save_pane_t1

0x07d8,	// (0x0002ebbf) aid_ps_clock_pane_ParamLimits

0x4648,	// (0x00032a2f) aid_ps_indicator_pane_ParamLimits

0x468f,	// (0x00032a76) power_save_pane_t4_ParamLimits

0x468f,	// (0x00032a76) power_save_pane_t4

0x0001,

0xf56f,	// (0x0003d956) power_save_pane_t_ParamLimits

0xf56f,	// (0x0003d956) power_save_pane_t

0x46b9,	// (0x00032aa0) power_save_t3_ParamLimits

0x46b9,	// (0x00032aa0) power_save_t3

0x46a4,	// (0x00032a8b) power_save_t2_ParamLimits

0x46a4,	// (0x00032a8b) power_save_t2

0x46ce,	// (0x00032ab5) indicator_ps_pane_g1

0x07e4,	// (0x0002ebcb) ai_gene_pane_ParamLimits

0x07e4,	// (0x0002ebcb) ai_gene_pane

0x0fda,	// (0x0002f3c1) ai_links_pane_ParamLimits

0x0fda,	// (0x0002f3c1) ai_links_pane

0x0fec,	// (0x0002f3d3) indicator_pane_cp1_ParamLimits

0x0fec,	// (0x0002f3d3) indicator_pane_cp1

0x0ffb,	// (0x0002f3e2) main_pane_idle_g1_cp_ParamLimits

0x0ffb,	// (0x0002f3e2) main_pane_idle_g1_cp

0x46d7,	// (0x00032abe) popup_ai_links_title_window

0x1013,	// (0x0002f3fa) soft_indicator_pane_cp1_ParamLimits

0x1013,	// (0x0002f3fa) soft_indicator_pane_cp1

0x8989,	// (0x00036d70) ai_links_pane_g1

0x8992,	// (0x00036d79) grid_ai_links_pane

0x1a93,	// (0x0002fe7a) ai_gene_pane_1

0x8977,	// (0x00036d5e) ai_gene_pane_2

0x8980,	// (0x00036d67) list_highlight_pane_cp4

0x1a77,	// (0x0002fe5e) cell_ai_link_pane_ParamLimits

0x1a77,	// (0x0002fe5e) cell_ai_link_pane

0x896f,	// (0x00036d56) cell_ai_link_pane_g1

0x48c5,	// (0x00032cac) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0003dcf7) cell_ai_link_pane_g

0x43a4,	// (0x0003278b) grid_highlight_cp2

0x43a4,	// (0x0003278b) bg_popup_sub_pane_cp1

0x46ee,	// (0x00032ad5) popup_ai_links_title_window_t1

0x88c1,	// (0x00036ca8) ai_gene_pane_1_g1_ParamLimits

0x88c1,	// (0x00036ca8) ai_gene_pane_1_g1

0x88cd,	// (0x00036cb4) ai_gene_pane_1_g2_ParamLimits

0x88cd,	// (0x00036cb4) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0003dced) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0003dced) ai_gene_pane_1_g

0x88da,	// (0x00036cc1) ai_gene_pane_1_t1_ParamLimits

0x88da,	// (0x00036cc1) ai_gene_pane_1_t1

0x890e,	// (0x00036cf5) grid_ai_soft_ind_pane

0x88ac,	// (0x00036c93) ai_gene_pane_2_t1_ParamLimits

0x88ac,	// (0x00036c93) ai_gene_pane_2_t1

0x1027,	// (0x0002f40e) main_pane_empty_t1_ParamLimits

0x1027,	// (0x0002f40e) main_pane_empty_t1

0x1044,	// (0x0002f42b) main_pane_empty_t2_ParamLimits

0x1044,	// (0x0002f42b) main_pane_empty_t2

0x105c,	// (0x0002f443) main_pane_empty_t3_ParamLimits

0x105c,	// (0x0002f443) main_pane_empty_t3

0x106f,	// (0x0002f456) main_pane_empty_t4_ParamLimits

0x106f,	// (0x0002f456) main_pane_empty_t4

0x1082,	// (0x0002f469) main_pane_empty_t5_ParamLimits

0x1082,	// (0x0002f469) main_pane_empty_t5

0x0004,

0xf574,	// (0x0003d95b) main_pane_empty_t_ParamLimits

0xf574,	// (0x0003d95b) main_pane_empty_t

0x4cd1,	// (0x000330b8) bg_popup_window_pane_ParamLimits

0x4cd1,	// (0x000330b8) bg_popup_window_pane

0x8626,	// (0x00036a0d) find_popup_pane_cp2_ParamLimits

0x8626,	// (0x00036a0d) find_popup_pane_cp2

0x8632,	// (0x00036a19) heading_pane_ParamLimits

0x8632,	// (0x00036a19) heading_pane

0x43a4,	// (0x0003278b) bg_popup_sub_pane

0x19c3,	// (0x0002fdaa) bg_popup_window_pane_g1_ParamLimits

0x19c3,	// (0x0002fdaa) bg_popup_window_pane_g1

0x19d2,	// (0x0002fdb9) bg_popup_window_pane_g2_ParamLimits

0x19d2,	// (0x0002fdb9) bg_popup_window_pane_g2

0x19de,	// (0x0002fdc5) bg_popup_window_pane_g3_ParamLimits

0x19de,	// (0x0002fdc5) bg_popup_window_pane_g3

0x19ea,	// (0x0002fdd1) bg_popup_window_pane_g4_ParamLimits

0x19ea,	// (0x0002fdd1) bg_popup_window_pane_g4

0x19f9,	// (0x0002fde0) bg_popup_window_pane_g5_ParamLimits

0x19f9,	// (0x0002fde0) bg_popup_window_pane_g5

0x1a09,	// (0x0002fdf0) bg_popup_window_pane_g6_ParamLimits

0x1a09,	// (0x0002fdf0) bg_popup_window_pane_g6

0x1a15,	// (0x0002fdfc) bg_popup_window_pane_g7_ParamLimits

0x1a15,	// (0x0002fdfc) bg_popup_window_pane_g7

0x1a24,	// (0x0002fe0b) bg_popup_window_pane_g8_ParamLimits

0x1a24,	// (0x0002fe0b) bg_popup_window_pane_g8

0x1a33,	// (0x0002fe1a) bg_popup_window_pane_g9_ParamLimits

0x1a33,	// (0x0002fe1a) bg_popup_window_pane_g9

0x860b,	// (0x000369f2) bg_popup_window_pane_g10_ParamLimits

0x860b,	// (0x000369f2) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0003dcb5) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0003dcb5) bg_popup_window_pane_g

0x85c2,	// (0x000369a9) bg_popup_heading_pane_ParamLimits

0x85c2,	// (0x000369a9) bg_popup_heading_pane

0x5d67,	// (0x0003414e) tabs_4_passive_pane_cp_srt_ParamLimits

0x5d67,	// (0x0003414e) tabs_4_passive_pane_cp_srt

0x5d79,	// (0x00034160) tabs_4_passive_pane_srt_ParamLimits

0x85d6,	// (0x000369bd) heading_pane_g2

0x5d79,	// (0x00034160) tabs_4_passive_pane_srt

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp3_srt_ParamLimits

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp3_srt

0x85de,	// (0x000369c5) heading_pane_t1_ParamLimits

0x85de,	// (0x000369c5) heading_pane_t1

0x85f5,	// (0x000369dc) heading_pane_t2_ParamLimits

0x85f5,	// (0x000369dc) heading_pane_t2

0x0001,

0xf8c9,	// (0x0003dcb0) heading_pane_t_ParamLimits

0xf8c9,	// (0x0003dcb0) heading_pane_t

0x8151,	// (0x00036538) bg_popup_heading_pane_g1

0x81e2,	// (0x000365c9) bg_popup_heading_pane_g2

0x81ea,	// (0x000365d1) bg_popup_heading_pane_g3

0x81f2,	// (0x000365d9) bg_popup_heading_pane_g4

0x81fa,	// (0x000365e1) bg_popup_heading_pane_g5

0x8202,	// (0x000365e9) bg_popup_heading_pane_g6

0x820a,	// (0x000365f1) bg_popup_heading_pane_g7

0x8212,	// (0x000365f9) bg_popup_heading_pane_g8

0x821a,	// (0x00036601) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0003dc6c) bg_popup_heading_pane_g

0x7a1a,	// (0x00035e01) bg_popup_sub_pane_g1

0x7a22,	// (0x00035e09) bg_popup_sub_pane_g2

0x7a2a,	// (0x00035e11) bg_popup_sub_pane_g3

0x7a32,	// (0x00035e19) bg_popup_sub_pane_g4

0x7a3a,	// (0x00035e21) bg_popup_sub_pane_g5

0x7a42,	// (0x00035e29) bg_popup_sub_pane_g6

0x7a4a,	// (0x00035e31) bg_popup_sub_pane_g7

0x7a52,	// (0x00035e39) bg_popup_sub_pane_g8

0x7a5a,	// (0x00035e41) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0003dc46) bg_popup_sub_pane_g

0x46fd,	// (0x00032ae4) bg_popup_window_pane_cp5_ParamLimits

0x46fd,	// (0x00032ae4) bg_popup_window_pane_cp5

0x4719,	// (0x00032b00) popup_note_window_g1_ParamLimits

0x4719,	// (0x00032b00) popup_note_window_g1

0x4725,	// (0x00032b0c) popup_note_window_t1_ParamLimits

0x4725,	// (0x00032b0c) popup_note_window_t1

0x473b,	// (0x00032b22) popup_note_window_t2_ParamLimits

0x473b,	// (0x00032b22) popup_note_window_t2

0x4751,	// (0x00032b38) popup_note_window_t3_ParamLimits

0x4751,	// (0x00032b38) popup_note_window_t3

0x4767,	// (0x00032b4e) popup_note_window_t4_ParamLimits

0x4767,	// (0x00032b4e) popup_note_window_t4

0x478f,	// (0x00032b76) popup_note_window_t5_ParamLimits

0x478f,	// (0x00032b76) popup_note_window_t5

0x0004,

0xf57f,	// (0x0003d966) popup_note_window_t_ParamLimits

0xf57f,	// (0x0003d966) popup_note_window_t

0x47d9,	// (0x00032bc0) bg_popup_window_pane_cp6_ParamLimits

0x47d9,	// (0x00032bc0) bg_popup_window_pane_cp6

0x80cd,	// (0x000364b4) popup_note_image_window_g1_ParamLimits

0x80cd,	// (0x000364b4) popup_note_image_window_g1

0x80d9,	// (0x000364c0) popup_note_image_window_g2_ParamLimits

0x80d9,	// (0x000364c0) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0003dc3a) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0003dc3a) popup_note_image_window_g

0x80f2,	// (0x000364d9) popup_note_image_window_t1_ParamLimits

0x80f2,	// (0x000364d9) popup_note_image_window_t1

0x810b,	// (0x000364f2) popup_note_image_window_t2_ParamLimits

0x810b,	// (0x000364f2) popup_note_image_window_t2

0x8124,	// (0x0003650b) popup_note_image_window_t3_ParamLimits

0x8124,	// (0x0003650b) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0003dc3f) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0003dc3f) popup_note_image_window_t

0x7fb8,	// (0x0003639f) bg_popup_window_pane_cp7_ParamLimits

0x7fb8,	// (0x0003639f) bg_popup_window_pane_cp7

0x7fe8,	// (0x000363cf) popup_note_wait_window_g1_ParamLimits

0x7fe8,	// (0x000363cf) popup_note_wait_window_g1

0x7ff4,	// (0x000363db) popup_note_wait_window_g2_ParamLimits

0x7ff4,	// (0x000363db) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0003dc28) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0003dc28) popup_note_wait_window_g

0x800c,	// (0x000363f3) popup_note_wait_window_t1_ParamLimits

0x800c,	// (0x000363f3) popup_note_wait_window_t1

0x8033,	// (0x0003641a) popup_note_wait_window_t2_ParamLimits

0x8033,	// (0x0003641a) popup_note_wait_window_t2

0x8050,	// (0x00036437) popup_note_wait_window_t3_ParamLimits

0x8050,	// (0x00036437) popup_note_wait_window_t3

0x8063,	// (0x0003644a) popup_note_wait_window_t4_ParamLimits

0x8063,	// (0x0003644a) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0003dc2f) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0003dc2f) popup_note_wait_window_t

0x8088,	// (0x0003646f) wait_bar_pane_ParamLimits

0x8088,	// (0x0003646f) wait_bar_pane

0x43a4,	// (0x0003278b) wait_anim_pane

0x43a4,	// (0x0003278b) wait_border_pane

0x41e5,	// (0x000325cc) wait_anim_pane_g1

0x41e5,	// (0x000325cc) wait_anim_pane_g2

0x0001,

0xf708,	// (0x0003daef) wait_anim_pane_g

0x7f68,	// (0x0003634f) wait_border_pane_g1

0x7f71,	// (0x00036358) wait_border_pane_g2

0x7f7a,	// (0x00036361) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0003dc21) wait_border_pane_g

0x7dd8,	// (0x000361bf) bg_popup_window_pane_cp16_ParamLimits

0x7dd8,	// (0x000361bf) bg_popup_window_pane_cp16

0x7ed8,	// (0x000362bf) indicator_popup_pane_cp4_ParamLimits

0x7ed8,	// (0x000362bf) indicator_popup_pane_cp4

0x7eec,	// (0x000362d3) popup_query_data_window_t1_ParamLimits

0x7eec,	// (0x000362d3) popup_query_data_window_t1

0x7efe,	// (0x000362e5) popup_query_data_window_t2_ParamLimits

0x7efe,	// (0x000362e5) popup_query_data_window_t2

0x7f17,	// (0x000362fe) popup_query_data_window_t3_ParamLimits

0x7f17,	// (0x000362fe) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0003dc1a) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0003dc1a) popup_query_data_window_t

0x7f31,	// (0x00036318) query_popup_data_pane_ParamLimits

0x7f31,	// (0x00036318) query_popup_data_pane

0x7f45,	// (0x0003632c) query_popup_data_pane_cp1_ParamLimits

0x7f45,	// (0x0003632c) query_popup_data_pane_cp1

0x7dd8,	// (0x000361bf) bg_popup_window_pane_cp10_ParamLimits

0x7dd8,	// (0x000361bf) bg_popup_window_pane_cp10

0x7e0a,	// (0x000361f1) indicator_popup_pane_ParamLimits

0x7e0a,	// (0x000361f1) indicator_popup_pane

0x7e2c,	// (0x00036213) popup_query_code_window_t1_ParamLimits

0x7e2c,	// (0x00036213) popup_query_code_window_t1

0x7e46,	// (0x0003622d) popup_query_code_window_t2_ParamLimits

0x7e46,	// (0x0003622d) popup_query_code_window_t2

0x7e8f,	// (0x00036276) popup_query_code_window_t3_ParamLimits

0x7e8f,	// (0x00036276) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0003dc13) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0003dc13) popup_query_code_window_t

0x7ebe,	// (0x000362a5) query_popup_pane_ParamLimits

0x7ebe,	// (0x000362a5) query_popup_pane

0x47d9,	// (0x00032bc0) bg_popup_window_pane_cp15_ParamLimits

0x47d9,	// (0x00032bc0) bg_popup_window_pane_cp15

0x47f7,	// (0x00032bde) indicator_popup_pane_cp1_ParamLimits

0x47f7,	// (0x00032bde) indicator_popup_pane_cp1

0x480a,	// (0x00032bf1) indicator_popup_pane_cp2_ParamLimits

0x480a,	// (0x00032bf1) indicator_popup_pane_cp2

0x481d,	// (0x00032c04) popup_query_data_code_window_g1_ParamLimits

0x481d,	// (0x00032c04) popup_query_data_code_window_g1

0x4830,	// (0x00032c17) popup_query_data_code_window_t1_ParamLimits

0x4830,	// (0x00032c17) popup_query_data_code_window_t1

0x4842,	// (0x00032c29) popup_query_data_code_window_t2_ParamLimits

0x4842,	// (0x00032c29) popup_query_data_code_window_t2

0x4854,	// (0x00032c3b) popup_query_data_code_window_t3_ParamLimits

0x4854,	// (0x00032c3b) popup_query_data_code_window_t3

0x486a,	// (0x00032c51) popup_query_data_code_window_t4_ParamLimits

0x486a,	// (0x00032c51) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0003d971) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0003d971) popup_query_data_code_window_t

0x7503,	// (0x000358ea) list_single_midp_graphic_pane_g3

0x4882,	// (0x00032c69) query_popup_data_pane_cp2_ParamLimits

0x4895,	// (0x00032c7c) query_popup_pane_cp2_ParamLimits

0x4895,	// (0x00032c7c) query_popup_pane_cp2

0x43a4,	// (0x0003278b) bg_popup_window_pane_cp11

0x7dc4,	// (0x000361ab) heading_pane_cp5

0x4921,	// (0x00032d08) listscroll_popup_info_pane

0x43a4,	// (0x0003278b) input_focus_pane_cp3

0x48a8,	// (0x00032c8f) query_popup_pane_t1

0x48b6,	// (0x00032c9d) list_popup_info_pane_ParamLimits

0x48b6,	// (0x00032c9d) list_popup_info_pane

0x48c5,	// (0x00032cac) listscroll_popup_info_pane_g1

0x48cd,	// (0x00032cb4) scroll_pane_cp7

0x48d5,	// (0x00032cbc) popup_info_list_pane_t1_ParamLimits

0x48d5,	// (0x00032cbc) popup_info_list_pane_t1

0x48ef,	// (0x00032cd6) popup_info_list_pane_t2_ParamLimits

0x48ef,	// (0x00032cd6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0003d97a) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0003d97a) popup_info_list_pane_t

0x43a4,	// (0x0003278b) bg_popup_window_pane_cp12

0x8c82,	// (0x00037069) find_popup_pane

0x4538,	// (0x0003291f) bg_popup_window_pane_cp3

0x4909,	// (0x00032cf0) heading_pane_cp3

0x4915,	// (0x00032cfc) listscroll_popup_graphic_pane

0x43a4,	// (0x0003278b) bg_popup_window_pane_cp4

0x10e5,	// (0x0002f4cc) heading_pane_cp4

0x4921,	// (0x00032d08) listscroll_popup_colour_pane

0x4929,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x4929,	// (0x00032d10) cell_large_graphic_colour_none_popup_pane

0x10ed,	// (0x0002f4d4) grid_large_graphic_colour_popup_pane_ParamLimits

0x10ed,	// (0x0002f4d4) grid_large_graphic_colour_popup_pane

0x1109,	// (0x0002f4f0) listscroll_popup_colour_pane_g1_ParamLimits

0x1109,	// (0x0002f4f0) listscroll_popup_colour_pane_g1

0x1120,	// (0x0002f507) listscroll_popup_colour_pane_g2_ParamLimits

0x1120,	// (0x0002f507) listscroll_popup_colour_pane_g2

0x4939,	// (0x00032d20) listscroll_popup_colour_pane_g3_ParamLimits

0x4939,	// (0x00032d20) listscroll_popup_colour_pane_g3

0x1134,	// (0x0002f51b) listscroll_popup_colour_pane_g4_ParamLimits

0x1134,	// (0x0002f51b) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0003d97f) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0003d97f) listscroll_popup_colour_pane_g

0x4949,	// (0x00032d30) scroll_pane_cp6_ParamLimits

0x4949,	// (0x00032d30) scroll_pane_cp6

0x1143,	// (0x0002f52a) cell_large_graphic_colour_popup_pane_ParamLimits

0x1143,	// (0x0002f52a) cell_large_graphic_colour_popup_pane

0x495b,	// (0x00032d42) cell_large_graphic_colour_none_popup_pane_t1

0x43a4,	// (0x0003278b) grid_highlight_pane_cp5

0x496a,	// (0x00032d51) cell_large_graphic_colour_popup_pane_g1

0x4972,	// (0x00032d59) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0003d988) cell_large_graphic_colour_popup_pane_g

0x497a,	// (0x00032d61) cell_large_graphic_colour_popup_pane_g2_copy1

0x4983,	// (0x00032d6a) grid_highlight_pane_cp4

0x498b,	// (0x00032d72) bg_popup_window_pane_cp8_ParamLimits

0x498b,	// (0x00032d72) bg_popup_window_pane_cp8

0x49a6,	// (0x00032d8d) popup_snote_single_text_window_g1_ParamLimits

0x49a6,	// (0x00032d8d) popup_snote_single_text_window_g1

0x49b8,	// (0x00032d9f) popup_snote_single_text_window_t1_ParamLimits

0x49b8,	// (0x00032d9f) popup_snote_single_text_window_t1

0x49cb,	// (0x00032db2) popup_snote_single_text_window_t2_ParamLimits

0x49cb,	// (0x00032db2) popup_snote_single_text_window_t2

0x49de,	// (0x00032dc5) popup_snote_single_text_window_t3_ParamLimits

0x49de,	// (0x00032dc5) popup_snote_single_text_window_t3

0x4a17,	// (0x00032dfe) popup_snote_single_text_window_t4_ParamLimits

0x4a17,	// (0x00032dfe) popup_snote_single_text_window_t4

0x4a4b,	// (0x00032e32) popup_snote_single_text_window_t5_ParamLimits

0x4a4b,	// (0x00032e32) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0003d98d) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0003d98d) popup_snote_single_text_window_t

0x4a7a,	// (0x00032e61) bg_popup_window_pane_cp9_ParamLimits

0x4a7a,	// (0x00032e61) bg_popup_window_pane_cp9

0x49a6,	// (0x00032d8d) popup_snote_single_graphic_window_g1_ParamLimits

0x49a6,	// (0x00032d8d) popup_snote_single_graphic_window_g1

0x4a88,	// (0x00032e6f) popup_snote_single_graphic_window_g2_ParamLimits

0x4a88,	// (0x00032e6f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0003d998) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0003d998) popup_snote_single_graphic_window_g

0x4a94,	// (0x00032e7b) popup_snote_single_graphic_window_t1_ParamLimits

0x4a94,	// (0x00032e7b) popup_snote_single_graphic_window_t1

0x4aa7,	// (0x00032e8e) popup_snote_single_graphic_window_t2_ParamLimits

0x4aa7,	// (0x00032e8e) popup_snote_single_graphic_window_t2

0x49de,	// (0x00032dc5) popup_snote_single_graphic_window_t3_ParamLimits

0x49de,	// (0x00032dc5) popup_snote_single_graphic_window_t3

0x4a17,	// (0x00032dfe) popup_snote_single_graphic_window_t4_ParamLimits

0x4a17,	// (0x00032dfe) popup_snote_single_graphic_window_t4

0x4a4b,	// (0x00032e32) popup_snote_single_graphic_window_t5_ParamLimits

0x4a4b,	// (0x00032e32) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0003d99d) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0003d99d) popup_snote_single_graphic_window_t

0x1d06,	// (0x000300ed) grid_graphic_popup_pane_ParamLimits

0x1d06,	// (0x000300ed) grid_graphic_popup_pane

0x1d29,	// (0x00030110) listscroll_popup_graphic_pane_g1_ParamLimits

0x1d29,	// (0x00030110) listscroll_popup_graphic_pane_g1

0x1d3d,	// (0x00030124) listscroll_popup_graphic_pane_g2_ParamLimits

0x1d3d,	// (0x00030124) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0003dd90) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0003dd90) listscroll_popup_graphic_pane_g

0x8c3a,	// (0x00037021) scroll_pane_cp5

0x1cc1,	// (0x000300a8) cell_graphic_popup_pane_ParamLimits

0x1cc1,	// (0x000300a8) cell_graphic_popup_pane

0x8c05,	// (0x00036fec) cell_graphic_popup_pane_g1

0x8c0d,	// (0x00036ff4) cell_graphic_popup_pane_g2

0x497a,	// (0x00032d61) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0003dd89) cell_graphic_popup_pane_g

0x8c16,	// (0x00036ffd) cell_graphic_popup_pane_t2

0x4983,	// (0x00032d6a) grid_highlight_pane_cp3

0x4acc,	// (0x00032eb3) list_gen_pane_ParamLimits

0x4acc,	// (0x00032eb3) list_gen_pane

0x4af5,	// (0x00032edc) scroll_pane

0x1c94,	// (0x0003007b) bg_list_pane_g1_ParamLimits

0x1c94,	// (0x0003007b) bg_list_pane_g1

0x8bb4,	// (0x00036f9b) bg_list_pane_g2_ParamLimits

0x8bb4,	// (0x00036f9b) bg_list_pane_g2

0x8bc7,	// (0x00036fae) bg_list_pane_g3_ParamLimits

0x8bc7,	// (0x00036fae) bg_list_pane_g3

0x8bd9,	// (0x00036fc0) bg_list_pane_g4_ParamLimits

0x8bd9,	// (0x00036fc0) bg_list_pane_g4

0x1caf,	// (0x00030096) bg_list_pane_g5_ParamLimits

0x1caf,	// (0x00030096) bg_list_pane_g5

0x0004,

0xf997,	// (0x0003dd7e) bg_list_pane_g_ParamLimits

0xf997,	// (0x0003dd7e) bg_list_pane_g

0x1c4a,	// (0x00030031) list_double2_graphic_large_graphic_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double2_graphic_large_graphic_pane

0x1c4a,	// (0x00030031) list_double2_graphic_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double2_graphic_pane

0x1c4a,	// (0x00030031) list_double2_large_graphic_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double2_large_graphic_pane

0x1c4a,	// (0x00030031) list_double2_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double2_pane

0x1c4a,	// (0x00030031) list_double_graphic_heading_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_graphic_heading_pane

0x1c4a,	// (0x00030031) list_double_graphic_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_graphic_pane

0x1c4a,	// (0x00030031) list_double_heading_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_heading_pane

0x1c4a,	// (0x00030031) list_double_large_graphic_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_large_graphic_pane

0x1c4a,	// (0x00030031) list_double_number_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_number_pane

0x1c4a,	// (0x00030031) list_double_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_pane

0x1c4a,	// (0x00030031) list_double_time_pane_ParamLimits

0x1c4a,	// (0x00030031) list_double_time_pane

0x1c4a,	// (0x00030031) list_setting_number_pane_ParamLimits

0x1c4a,	// (0x00030031) list_setting_number_pane

0x1c4a,	// (0x00030031) list_setting_pane_ParamLimits

0x1c4a,	// (0x00030031) list_setting_pane

0xd91d,	// (0x0003bd04) list_single_2graphic_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_2graphic_pane

0xd91d,	// (0x0003bd04) list_single_graphic_heading_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_graphic_heading_pane

0xd91d,	// (0x0003bd04) list_single_graphic_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_graphic_pane

0xd91d,	// (0x0003bd04) list_single_heading_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_heading_pane

0x1c38,	// (0x0003001f) list_single_large_graphic_pane_ParamLimits

0x1c38,	// (0x0003001f) list_single_large_graphic_pane

0xd91d,	// (0x0003bd04) list_single_number_heading_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_number_heading_pane

0xd91d,	// (0x0003bd04) list_single_number_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_number_pane

0xd91d,	// (0x0003bd04) list_single_pane_ParamLimits

0xd91d,	// (0x0003bd04) list_single_pane

0x43a4,	// (0x0003278b) list_highlight_pane_cp1

0x4b7d,	// (0x00032f64) list_single_pane_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_single_pane_g1

0x4b89,	// (0x00032f70) list_single_pane_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_pane_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_single_pane_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_single_pane_g

0x34b2,	// (0x00031899) list_single_pane_t1_ParamLimits

0x34b2,	// (0x00031899) list_single_pane_t1

0x4b7d,	// (0x00032f64) list_single_number_pane_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_single_number_pane_g1

0x4b89,	// (0x00032f70) list_single_number_pane_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_number_pane_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_single_number_pane_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_single_number_pane_g

0x352f,	// (0x00031916) list_single_number_pane_t1_ParamLimits

0x352f,	// (0x00031916) list_single_number_pane_t1

0xcc45,	// (0x0003b02c) list_single_number_pane_t2_ParamLimits

0xcc45,	// (0x0003b02c) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0003dd3f) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0003dd3f) list_single_number_pane_t

0x3557,	// (0x0003193e) list_single_graphic_pane_g1_ParamLimits

0x3557,	// (0x0003193e) list_single_graphic_pane_g1

0x4b7d,	// (0x00032f64) list_single_graphic_pane_g2_ParamLimits

0x4b7d,	// (0x00032f64) list_single_graphic_pane_g2

0x4b89,	// (0x00032f70) list_single_graphic_pane_g3_ParamLimits

0x4b89,	// (0x00032f70) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0003d9a8) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0003d9a8) list_single_graphic_pane_g

0x352f,	// (0x00031916) list_single_graphic_pane_t1_ParamLimits

0x352f,	// (0x00031916) list_single_graphic_pane_t1

0xc6a4,	// (0x0003aa8b) list_single_heading_pane_g1_ParamLimits

0xc6a4,	// (0x0003aa8b) list_single_heading_pane_g1

0x4b89,	// (0x00032f70) list_single_heading_pane_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0003d9af) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0003d9af) list_single_heading_pane_g

0xc6b7,	// (0x0003aa9e) list_single_heading_pane_t1_ParamLimits

0xc6b7,	// (0x0003aa9e) list_single_heading_pane_t1

0xcfd2,	// (0x0003b3b9) list_single_heading_pane_t2_ParamLimits

0xcfd2,	// (0x0003b3b9) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0003d9b4) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0003d9b4) list_single_heading_pane_t

0x4b7d,	// (0x00032f64) list_single_number_heading_pane_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_single_number_heading_pane_g1

0x4b89,	// (0x00032f70) list_single_number_heading_pane_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_number_heading_pane_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_single_number_heading_pane_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_single_number_heading_pane_g

0xc6cd,	// (0x0003aab4) list_single_number_heading_pane_t1_ParamLimits

0xc6cd,	// (0x0003aab4) list_single_number_heading_pane_t1

0xc6e3,	// (0x0003aaca) list_single_number_heading_pane_t2_ParamLimits

0xc6e3,	// (0x0003aaca) list_single_number_heading_pane_t2

0x3d33,	// (0x0003211a) list_single_number_heading_pane_t3_ParamLimits

0x3d33,	// (0x0003211a) list_single_number_heading_pane_t3

0x0002,

0xf5d7,	// (0x0003d9be) list_single_number_heading_pane_t_ParamLimits

0xf5d7,	// (0x0003d9be) list_single_number_heading_pane_t

0xc6f5,	// (0x0003aadc) list_single_graphic_heading_pane_g1_ParamLimits

0xc6f5,	// (0x0003aadc) list_single_graphic_heading_pane_g1

0xcfe4,	// (0x0003b3cb) list_single_graphic_heading_pane_g4_ParamLimits

0xcfe4,	// (0x0003b3cb) list_single_graphic_heading_pane_g4

0x4b89,	// (0x00032f70) list_single_graphic_heading_pane_g5_ParamLimits

0x4b89,	// (0x00032f70) list_single_graphic_heading_pane_g5

0x0002,

0xf5de,	// (0x0003d9c5) list_single_graphic_heading_pane_g_ParamLimits

0xf5de,	// (0x0003d9c5) list_single_graphic_heading_pane_g

0xc6cd,	// (0x0003aab4) list_single_graphic_heading_pane_t1_ParamLimits

0xc6cd,	// (0x0003aab4) list_single_graphic_heading_pane_t1

0xc70b,	// (0x0003aaf2) list_single_graphic_heading_pane_t2_ParamLimits

0xc70b,	// (0x0003aaf2) list_single_graphic_heading_pane_t2

0x0001,

0xf5e5,	// (0x0003d9cc) list_single_graphic_heading_pane_t_ParamLimits

0xf5e5,	// (0x0003d9cc) list_single_graphic_heading_pane_t

0x4b51,	// (0x00032f38) list_single_large_graphic_pane_g1_ParamLimits

0x4b51,	// (0x00032f38) list_single_large_graphic_pane_g1

0x4b5d,	// (0x00032f44) list_single_large_graphic_pane_g2_ParamLimits

0x4b5d,	// (0x00032f44) list_single_large_graphic_pane_g2

0x4b69,	// (0x00032f50) list_single_large_graphic_pane_g3_ParamLimits

0x4b69,	// (0x00032f50) list_single_large_graphic_pane_g3

0x0002,

0xf5ea,	// (0x0003d9d1) list_single_large_graphic_pane_g_ParamLimits

0xf5ea,	// (0x0003d9d1) list_single_large_graphic_pane_g

0x7f71,	// (0x00036358) wait_border_pane_g2_copy1

0x4b75,	// (0x00032f5c) list_single_large_graphic_pane_g4_cp2

0x349c,	// (0x00031883) list_single_large_graphic_pane_t1_ParamLimits

0x349c,	// (0x00031883) list_single_large_graphic_pane_t1

0xcff5,	// (0x0003b3dc) list_double_pane_g1_ParamLimits

0xcff5,	// (0x0003b3dc) list_double_pane_g1

0xd001,	// (0x0003b3e8) list_double_pane_g2_ParamLimits

0xd001,	// (0x0003b3e8) list_double_pane_g2

0x0001,

0xf5f1,	// (0x0003d9d8) list_double_pane_g_ParamLimits

0xf5f1,	// (0x0003d9d8) list_double_pane_g

0xc723,	// (0x0003ab0a) list_double_pane_t1_ParamLimits

0xc723,	// (0x0003ab0a) list_double_pane_t1

0xc739,	// (0x0003ab20) list_double_pane_t2_ParamLimits

0xc739,	// (0x0003ab20) list_double_pane_t2

0x0001,

0xf5f6,	// (0x0003d9dd) list_double_pane_t_ParamLimits

0xf5f6,	// (0x0003d9dd) list_double_pane_t

0xc74b,	// (0x0003ab32) list_double2_pane_g1_ParamLimits

0xc74b,	// (0x0003ab32) list_double2_pane_g1

0xc75c,	// (0x0003ab43) list_double2_pane_g2_ParamLimits

0xc75c,	// (0x0003ab43) list_double2_pane_g2

0x0001,

0xf5fb,	// (0x0003d9e2) list_double2_pane_g_ParamLimits

0xf5fb,	// (0x0003d9e2) list_double2_pane_g

0xc768,	// (0x0003ab4f) list_double2_pane_t1_ParamLimits

0xc768,	// (0x0003ab4f) list_double2_pane_t1

0xc77e,	// (0x0003ab65) list_double2_pane_t2_ParamLimits

0xc77e,	// (0x0003ab65) list_double2_pane_t2

0x0001,

0xf600,	// (0x0003d9e7) list_double2_pane_t_ParamLimits

0xf600,	// (0x0003d9e7) list_double2_pane_t

0xcff5,	// (0x0003b3dc) list_double_number_pane_g1_ParamLimits

0xcff5,	// (0x0003b3dc) list_double_number_pane_g1

0xd001,	// (0x0003b3e8) list_double_number_pane_g2_ParamLimits

0xd001,	// (0x0003b3e8) list_double_number_pane_g2

0x0001,

0xf5f1,	// (0x0003d9d8) list_double_number_pane_g_ParamLimits

0xf5f1,	// (0x0003d9d8) list_double_number_pane_g

0xc790,	// (0x0003ab77) list_double_number_pane_t1_ParamLimits

0xc790,	// (0x0003ab77) list_double_number_pane_t1

0xc7a2,	// (0x0003ab89) list_double_number_pane_t2_ParamLimits

0xc7a2,	// (0x0003ab89) list_double_number_pane_t2

0xc7b8,	// (0x0003ab9f) list_double_number_pane_t3_ParamLimits

0xc7b8,	// (0x0003ab9f) list_double_number_pane_t3

0x0002,

0xf605,	// (0x0003d9ec) list_double_number_pane_t_ParamLimits

0xf605,	// (0x0003d9ec) list_double_number_pane_t

0x36a0,	// (0x00031a87) list_double_graphic_pane_g1_ParamLimits

0x36a0,	// (0x00031a87) list_double_graphic_pane_g1

0xd00d,	// (0x0003b3f4) list_double_graphic_pane_g2_ParamLimits

0xd00d,	// (0x0003b3f4) list_double_graphic_pane_g2

0xd01c,	// (0x0003b403) list_double_graphic_pane_g3_ParamLimits

0xd01c,	// (0x0003b403) list_double_graphic_pane_g3

0x0003,

0xf60c,	// (0x0003d9f3) list_double_graphic_pane_g_ParamLimits

0xf60c,	// (0x0003d9f3) list_double_graphic_pane_g

0xc7d6,	// (0x0003abbd) list_double_graphic_pane_t1_ParamLimits

0xc7d6,	// (0x0003abbd) list_double_graphic_pane_t1

0xc7ec,	// (0x0003abd3) list_double_graphic_pane_t2_ParamLimits

0xc7ec,	// (0x0003abd3) list_double_graphic_pane_t2

0x0001,

0xf615,	// (0x0003d9fc) list_double_graphic_pane_t_ParamLimits

0xf615,	// (0x0003d9fc) list_double_graphic_pane_t

0x33d9,	// (0x000317c0) list_double2_graphic_pane_g1_ParamLimits

0x33d9,	// (0x000317c0) list_double2_graphic_pane_g1

0x4b2a,	// (0x00032f11) list_double2_graphic_pane_g2_ParamLimits

0x4b2a,	// (0x00032f11) list_double2_graphic_pane_g2

0x4b36,	// (0x00032f1d) list_double2_graphic_pane_g3_ParamLimits

0x4b36,	// (0x00032f1d) list_double2_graphic_pane_g3

0x0002,

0xf61a,	// (0x0003da01) list_double2_graphic_pane_g_ParamLimits

0xf61a,	// (0x0003da01) list_double2_graphic_pane_g

0x33e5,	// (0x000317cc) list_double2_graphic_pane_t1_ParamLimits

0x33e5,	// (0x000317cc) list_double2_graphic_pane_t1

0xc7fe,	// (0x0003abe5) list_double2_graphic_pane_t2_ParamLimits

0xc7fe,	// (0x0003abe5) list_double2_graphic_pane_t2

0x0001,

0xf621,	// (0x0003da08) list_double2_graphic_pane_t_ParamLimits

0xf621,	// (0x0003da08) list_double2_graphic_pane_t

0xc810,	// (0x0003abf7) list_double_large_graphic_pane_g1_ParamLimits

0xc810,	// (0x0003abf7) list_double_large_graphic_pane_g1

0xc834,	// (0x0003ac1b) list_double_large_graphic_pane_g2_ParamLimits

0xc834,	// (0x0003ac1b) list_double_large_graphic_pane_g2

0xd001,	// (0x0003b3e8) list_double_large_graphic_pane_g3_ParamLimits

0xd001,	// (0x0003b3e8) list_double_large_graphic_pane_g3

0xc84a,	// (0x0003ac31) list_double_large_graphic_pane_g4_ParamLimits

0xc84a,	// (0x0003ac31) list_double_large_graphic_pane_g4

0x0004,

0xf626,	// (0x0003da0d) list_double_large_graphic_pane_g_ParamLimits

0xf626,	// (0x0003da0d) list_double_large_graphic_pane_g

0xc85b,	// (0x0003ac42) list_double_large_graphic_pane_t1_ParamLimits

0xc85b,	// (0x0003ac42) list_double_large_graphic_pane_t1

0xc874,	// (0x0003ac5b) list_double_large_graphic_pane_t2_ParamLimits

0xc874,	// (0x0003ac5b) list_double_large_graphic_pane_t2

0x0001,

0xf631,	// (0x0003da18) list_double_large_graphic_pane_t_ParamLimits

0xf631,	// (0x0003da18) list_double_large_graphic_pane_t

0xd028,	// (0x0003b40f) list_double2_large_graphic_pane_g1_ParamLimits

0xd028,	// (0x0003b40f) list_double2_large_graphic_pane_g1

0xc886,	// (0x0003ac6d) list_double2_large_graphic_pane_g2_ParamLimits

0xc886,	// (0x0003ac6d) list_double2_large_graphic_pane_g2

0x4b36,	// (0x00032f1d) list_double2_large_graphic_pane_g3_ParamLimits

0x4b36,	// (0x00032f1d) list_double2_large_graphic_pane_g3

0x0002,

0xf636,	// (0x0003da1d) list_double2_large_graphic_pane_g_ParamLimits

0xf636,	// (0x0003da1d) list_double2_large_graphic_pane_g

0x3436,	// (0x0003181d) list_double2_large_graphic_pane_t1_ParamLimits

0x3436,	// (0x0003181d) list_double2_large_graphic_pane_t1

0xc897,	// (0x0003ac7e) list_double2_large_graphic_pane_t2_ParamLimits

0xc897,	// (0x0003ac7e) list_double2_large_graphic_pane_t2

0x0001,

0xf63d,	// (0x0003da24) list_double2_large_graphic_pane_t_ParamLimits

0xf63d,	// (0x0003da24) list_double2_large_graphic_pane_t

0xc8a9,	// (0x0003ac90) list_double_heading_pane_g1_ParamLimits

0xc8a9,	// (0x0003ac90) list_double_heading_pane_g1

0xd034,	// (0x0003b41b) list_double_heading_pane_g2_ParamLimits

0xd034,	// (0x0003b41b) list_double_heading_pane_g2

0x0001,

0xf642,	// (0x0003da29) list_double_heading_pane_g_ParamLimits

0xf642,	// (0x0003da29) list_double_heading_pane_g

0xc8ba,	// (0x0003aca1) list_double_heading_pane_t1_ParamLimits

0xc8ba,	// (0x0003aca1) list_double_heading_pane_t1

0xc77e,	// (0x0003ab65) list_double_heading_pane_t2_ParamLimits

0xc77e,	// (0x0003ab65) list_double_heading_pane_t2

0x0001,

0xf647,	// (0x0003da2e) list_double_heading_pane_t_ParamLimits

0xf647,	// (0x0003da2e) list_double_heading_pane_t

0x36a0,	// (0x00031a87) list_double_graphic_heading_pane_g1_ParamLimits

0x36a0,	// (0x00031a87) list_double_graphic_heading_pane_g1

0xc8a9,	// (0x0003ac90) list_double_graphic_heading_pane_g2_ParamLimits

0xc8a9,	// (0x0003ac90) list_double_graphic_heading_pane_g2

0xd034,	// (0x0003b41b) list_double_graphic_heading_pane_g3_ParamLimits

0xd034,	// (0x0003b41b) list_double_graphic_heading_pane_g3

0x0002,

0xf64c,	// (0x0003da33) list_double_graphic_heading_pane_g_ParamLimits

0xf64c,	// (0x0003da33) list_double_graphic_heading_pane_g

0xc8d0,	// (0x0003acb7) list_double_graphic_heading_pane_t1_ParamLimits

0xc8d0,	// (0x0003acb7) list_double_graphic_heading_pane_t1

0xc7fe,	// (0x0003abe5) list_double_graphic_heading_pane_t2_ParamLimits

0xc7fe,	// (0x0003abe5) list_double_graphic_heading_pane_t2

0x0001,

0xf653,	// (0x0003da3a) list_double_graphic_heading_pane_t_ParamLimits

0xf653,	// (0x0003da3a) list_double_graphic_heading_pane_t

0xc8e6,	// (0x0003accd) list_double_time_pane_g1_ParamLimits

0xc8e6,	// (0x0003accd) list_double_time_pane_g1

0xc8f7,	// (0x0003acde) list_double_time_pane_g2_ParamLimits

0xc8f7,	// (0x0003acde) list_double_time_pane_g2

0x0001,

0xf658,	// (0x0003da3f) list_double_time_pane_g_ParamLimits

0xf658,	// (0x0003da3f) list_double_time_pane_g

0xc903,	// (0x0003acea) list_double_time_pane_t1_ParamLimits

0xc903,	// (0x0003acea) list_double_time_pane_t1

0xc919,	// (0x0003ad00) list_double_time_pane_t2_ParamLimits

0xc919,	// (0x0003ad00) list_double_time_pane_t2

0xc92b,	// (0x0003ad12) list_double_time_pane_t3_ParamLimits

0xc92b,	// (0x0003ad12) list_double_time_pane_t3

0xc93d,	// (0x0003ad24) list_double_time_pane_t4_ParamLimits

0xc93d,	// (0x0003ad24) list_double_time_pane_t4

0x0003,

0xf65d,	// (0x0003da44) list_double_time_pane_t_ParamLimits

0xf65d,	// (0x0003da44) list_double_time_pane_t

0x3b21,	// (0x00031f08) list_setting_pane_g1_ParamLimits

0x3b21,	// (0x00031f08) list_setting_pane_g1

0x36d1,	// (0x00031ab8) list_setting_pane_g2_ParamLimits

0x36d1,	// (0x00031ab8) list_setting_pane_g2

0x0001,

0xf666,	// (0x0003da4d) list_setting_pane_g_ParamLimits

0xf666,	// (0x0003da4d) list_setting_pane_g

0xc94f,	// (0x0003ad36) list_setting_pane_t1_ParamLimits

0xc94f,	// (0x0003ad36) list_setting_pane_t1

0xc969,	// (0x0003ad50) list_setting_pane_t2_ParamLimits

0xc969,	// (0x0003ad50) list_setting_pane_t2

0x0002,

0xf66b,	// (0x0003da52) list_setting_pane_t_ParamLimits

0xf66b,	// (0x0003da52) list_setting_pane_t

0xc9a6,	// (0x0003ad8d) set_value_pane_cp_ParamLimits

0xc9a6,	// (0x0003ad8d) set_value_pane_cp

0xc9b2,	// (0x0003ad99) list_setting_number_pane_g1_ParamLimits

0xc9b2,	// (0x0003ad99) list_setting_number_pane_g1

0xc9be,	// (0x0003ada5) list_setting_number_pane_g2_ParamLimits

0xc9be,	// (0x0003ada5) list_setting_number_pane_g2

0x0001,

0xf672,	// (0x0003da59) list_setting_number_pane_g_ParamLimits

0xf672,	// (0x0003da59) list_setting_number_pane_g

0xc9ca,	// (0x0003adb1) list_setting_number_pane_t1_ParamLimits

0xc9ca,	// (0x0003adb1) list_setting_number_pane_t1

0xc9e3,	// (0x0003adca) list_setting_number_pane_t2_ParamLimits

0xc9e3,	// (0x0003adca) list_setting_number_pane_t2

0xc9fd,	// (0x0003ade4) list_setting_number_pane_t3_ParamLimits

0xc9fd,	// (0x0003ade4) list_setting_number_pane_t3

0x0003,

0xf677,	// (0x0003da5e) list_setting_number_pane_t_ParamLimits

0xf677,	// (0x0003da5e) list_setting_number_pane_t

0xc9a6,	// (0x0003ad8d) set_value_pane_ParamLimits

0xc9a6,	// (0x0003ad8d) set_value_pane

0x4be9,	// (0x00032fd0) bg_set_opt_pane_ParamLimits

0x4be9,	// (0x00032fd0) bg_set_opt_pane

0x3822,	// (0x00031c09) set_value_pane_t1

0x4c0a,	// (0x00032ff1) slider_set_pane_cp3

0x4c13,	// (0x00032ffa) volume_small_pane_cp

0x4c1c,	// (0x00033003) list_form_gen_pane

0x4b19,	// (0x00032f00) scroll_pane_cp8

0xca40,	// (0x0003ae27) form_field_data_pane_ParamLimits

0xca40,	// (0x0003ae27) form_field_data_pane

0xca57,	// (0x0003ae3e) form_field_data_wide_pane_ParamLimits

0xca57,	// (0x0003ae3e) form_field_data_wide_pane

0xca77,	// (0x0003ae5e) form_field_popup_pane_ParamLimits

0xca77,	// (0x0003ae5e) form_field_popup_pane

0xca8f,	// (0x0003ae76) form_field_popup_wide_pane_ParamLimits

0xca8f,	// (0x0003ae76) form_field_popup_wide_pane

0x38ae,	// (0x00031c95) form_field_slider_pane_ParamLimits

0x38ae,	// (0x00031c95) form_field_slider_pane

0x38c1,	// (0x00031ca8) form_field_slider_wide_pane_ParamLimits

0x38c1,	// (0x00031ca8) form_field_slider_wide_pane

0x4c25,	// (0x0003300c) data_form_pane

0xcab0,	// (0x0003ae97) form_field_data_pane_t1

0x4c31,	// (0x00033018) input_focus_pane

0x4c3f,	// (0x00033026) data_form_wide_pane

0x3900,	// (0x00031ce7) form_field_data_wide_pane_t1

0x4998,	// (0x00032d7f) input_focus_pane_cp6

0xcac8,	// (0x0003aeaf) form_field_popup_pane_t1

0x4c31,	// (0x00033018) input_focus_pane_cp7

0x4c25,	// (0x0003300c) list_form_pane

0x3942,	// (0x00031d29) form_field_popup_wide_pane_t1

0x4c31,	// (0x00033018) input_focus_pane_cp8

0x4c5f,	// (0x00033046) list_form_wide_pane

0xcae8,	// (0x0003aecf) form_field_slider_pane_t1_ParamLimits

0xcae8,	// (0x0003aecf) form_field_slider_pane_t1

0xcafe,	// (0x0003aee5) form_field_slider_pane_t2_ParamLimits

0xcafe,	// (0x0003aee5) form_field_slider_pane_t2

0x0001,

0xf687,	// (0x0003da6e) form_field_slider_pane_t_ParamLimits

0xf687,	// (0x0003da6e) form_field_slider_pane_t

0x46fd,	// (0x00032ae4) input_focus_pane_cp9_ParamLimits

0x46fd,	// (0x00032ae4) input_focus_pane_cp9

0xcb13,	// (0x0003aefa) slider_cont_pane_ParamLimits

0xcb13,	// (0x0003aefa) slider_cont_pane

0x4c6e,	// (0x00033055) form_field_slider_wide_pane_t1_ParamLimits

0x4c6e,	// (0x00033055) form_field_slider_wide_pane_t1

0x399e,	// (0x00031d85) form_field_slider_wide_pane_t2_ParamLimits

0x399e,	// (0x00031d85) form_field_slider_wide_pane_t2

0x0001,

0xf68c,	// (0x0003da73) form_field_slider_wide_pane_t_ParamLimits

0xf68c,	// (0x0003da73) form_field_slider_wide_pane_t

0x46fd,	// (0x00032ae4) input_focus_pane_cp10_ParamLimits

0x46fd,	// (0x00032ae4) input_focus_pane_cp10

0xcb27,	// (0x0003af0e) slider_cont_pane_cp1_ParamLimits

0xcb27,	// (0x0003af0e) slider_cont_pane_cp1

0xcb3d,	// (0x0003af24) slider_form_pane_cp

0x4c80,	// (0x00033067) input_focus_pane_g1

0x4c88,	// (0x0003306f) input_focus_pane_g2

0x4c90,	// (0x00033077) input_focus_pane_g3

0x4c98,	// (0x0003307f) input_focus_pane_g4

0x4ca0,	// (0x00033087) input_focus_pane_g5

0x4ca8,	// (0x0003308f) input_focus_pane_g6

0x4cb0,	// (0x00033097) input_focus_pane_g7

0x4cb8,	// (0x0003309f) input_focus_pane_g8

0x4cc0,	// (0x000330a7) input_focus_pane_g9

0x41e5,	// (0x000325cc) input_focus_pane_g10

0x0009,

0xf691,	// (0x0003da78) input_focus_pane_g

0x7f7a,	// (0x00036361) wait_border_pane_g3_copy1

0xcb45,	// (0x0003af2c) data_form_pane_t1

0x41e5,	// (0x000325cc) wait_anim_pane_g1_copy1

0xcc57,	// (0x0003b03e) data_form_wide_pane_t1

0xcb5d,	// (0x0003af44) list_form_graphic_pane_cp_ParamLimits

0xcb5d,	// (0x0003af44) list_form_graphic_pane_cp

0x8b5a,	// (0x00036f41) slider_form_pane_g1

0x8b63,	// (0x00036f4a) slider_form_pane_g2

0x0006,

0xf988,	// (0x0003dd6f) slider_form_pane_g

0x39e8,	// (0x00031dcf) list_form_graphic_pane_ParamLimits

0x39e8,	// (0x00031dcf) list_form_graphic_pane

0x3a12,	// (0x00031df9) list_form_graphic_pane_g1

0x3a1a,	// (0x00031e01) list_form_graphic_pane_t1_ParamLimits

0x3a1a,	// (0x00031e01) list_form_graphic_pane_t1

0x4538,	// (0x0003291f) list_highlight_pane_cp5_ParamLimits

0x4538,	// (0x0003291f) list_highlight_pane_cp5

0xcb70,	// (0x0003af57) find_pane_g1

0x4cc8,	// (0x000330af) input_find_pane

0xcb7b,	// (0x0003af62) input_find_pane_g1_ParamLimits

0xcb7b,	// (0x0003af62) input_find_pane_g1

0xcb87,	// (0x0003af6e) input_find_pane_t1_ParamLimits

0xcb87,	// (0x0003af6e) input_find_pane_t1

0xcb9c,	// (0x0003af83) input_find_pane_t2_ParamLimits

0xcb9c,	// (0x0003af83) input_find_pane_t2

0x0001,

0xf6a6,	// (0x0003da8d) input_find_pane_t_ParamLimits

0xf6a6,	// (0x0003da8d) input_find_pane_t

0x4cd1,	// (0x000330b8) input_focus_pane_cp5_ParamLimits

0x4cd1,	// (0x000330b8) input_focus_pane_cp5

0x46fd,	// (0x00032ae4) bg_popup_window_pane_cp2_ParamLimits

0x46fd,	// (0x00032ae4) bg_popup_window_pane_cp2

0x4ceb,	// (0x000330d2) listscroll_menu_pane_ParamLimits

0x4ceb,	// (0x000330d2) listscroll_menu_pane

0x4cf7,	// (0x000330de) popup_submenu_window_ParamLimits

0x4cf7,	// (0x000330de) popup_submenu_window

0x4d1b,	// (0x00033102) find_popup_pane_g1

0x4d23,	// (0x0003310a) input_popup_find_pane_cp

0x4cd1,	// (0x000330b8) input_focus_pane_cp4_ParamLimits

0x4cd1,	// (0x000330b8) input_focus_pane_cp4

0x4d2d,	// (0x00033114) input_popup_find_pane_t1_ParamLimits

0x4d2d,	// (0x00033114) input_popup_find_pane_t1

0x43a4,	// (0x0003278b) bg_popup_sub_pane_cp

0x4d5b,	// (0x00033142) listscroll_popup_sub_pane

0x4d63,	// (0x0003314a) list_submenu_pane_ParamLimits

0x4d63,	// (0x0003314a) list_submenu_pane

0x4d74,	// (0x0003315b) scroll_pane_cp4

0x4d7c,	// (0x00033163) list_single_popup_submenu_pane_ParamLimits

0x4d7c,	// (0x00033163) list_single_popup_submenu_pane

0x4d8e,	// (0x00033175) list_single_popup_submenu_pane_g1

0x4d96,	// (0x0003317d) list_single_popup_submenu_pane_t1_ParamLimits

0x4d96,	// (0x0003317d) list_single_popup_submenu_pane_t1

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp1_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp1

0x8c60,	// (0x00037047) tabs_2_active_pane_g1

0x118e,	// (0x0002f575) tabs_2_active_pane_t1

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp1_ParamLimits

0x46fd,	// (0x00032ae4) bg_passive_tab_pane_cp1

0x8c60,	// (0x00037047) tabs_2_passive_pane_g1

0x118e,	// (0x0002f575) tabs_2_passive_pane_t1

0x4538,	// (0x0003291f) bg_active_tab_pane_cp4

0x11a4,	// (0x0002f58b) tabs_2_long_active_pane_t1

0x5521,	// (0x00033908) bg_passive_tab_pane_cp4

0x7a62,	// (0x00035e49) list_single_midp_graphic_pane_g4_ParamLimits

0x4538,	// (0x0003291f) bg_active_tab_pane_cp5

0x11bb,	// (0x0002f5a2) tabs_3_long_active_pane_t1

0x5521,	// (0x00033908) bg_passive_tab_pane_cp5

0x7a62,	// (0x00035e49) list_single_midp_graphic_pane_g4

0x4538,	// (0x0003291f) bg_popup_window_pane_cp13_ParamLimits

0x4538,	// (0x0003291f) bg_popup_window_pane_cp13

0x4db4,	// (0x0003319b) listscroll_popup_fast_pane_ParamLimits

0x4db4,	// (0x0003319b) listscroll_popup_fast_pane

0x4dc3,	// (0x000331aa) grid_popup_fast_pane_ParamLimits

0x4dc3,	// (0x000331aa) grid_popup_fast_pane

0x4dd5,	// (0x000331bc) scroll_pane_cp9_ParamLimits

0x4dd5,	// (0x000331bc) scroll_pane_cp9

0x9e6b,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9e6b,	// (0x00038252) list_single_graphic_hl_pane_t1_cp2

0x4df9,	// (0x000331e0) input_focus_pane_cp20_ParamLimits

0x4df9,	// (0x000331e0) input_focus_pane_cp20

0x4e07,	// (0x000331ee) query_popup_data_pane_t1_ParamLimits

0x4e07,	// (0x000331ee) query_popup_data_pane_t1

0x4e1a,	// (0x00033201) query_popup_data_pane_t2_ParamLimits

0x4e1a,	// (0x00033201) query_popup_data_pane_t2

0x4e60,	// (0x00033247) query_popup_data_pane_t3_ParamLimits

0x4e60,	// (0x00033247) query_popup_data_pane_t3

0x4ea1,	// (0x00033288) query_popup_data_pane_t4_ParamLimits

0x4ea1,	// (0x00033288) query_popup_data_pane_t4

0x4edd,	// (0x000332c4) query_popup_data_pane_t5_ParamLimits

0x4edd,	// (0x000332c4) query_popup_data_pane_t5

0x0004,

0xf6ab,	// (0x0003da92) query_popup_data_pane_t_ParamLimits

0xf6ab,	// (0x0003da92) query_popup_data_pane_t

0x4c80,	// (0x00033067) bg_set_opt_pane_g1

0x4c88,	// (0x0003306f) bg_set_opt_pane_g2

0x4c90,	// (0x00033077) bg_set_opt_pane_g3

0x4c98,	// (0x0003307f) bg_set_opt_pane_g4

0x4ca0,	// (0x00033087) bg_set_opt_pane_g5

0x4ca8,	// (0x0003308f) bg_set_opt_pane_g6

0x4cb0,	// (0x00033097) bg_set_opt_pane_g7

0x4cb8,	// (0x0003309f) bg_set_opt_pane_g8

0x4cc0,	// (0x000330a7) bg_set_opt_pane_g9

0x0008,

0xf6b6,	// (0x0003da9d) bg_set_opt_pane_g

0x51df,	// (0x000335c6) control_top_pane_stacon_ParamLimits

0x51df,	// (0x000335c6) control_top_pane_stacon

0x5232,	// (0x00033619) signal_pane_stacon_ParamLimits

0x5232,	// (0x00033619) signal_pane_stacon

0x7395,	// (0x0003577c) stacon_top_pane_g1_ParamLimits

0x7395,	// (0x0003577c) stacon_top_pane_g1

0x5257,	// (0x0003363e) title_pane_stacon_ParamLimits

0x5257,	// (0x0003363e) title_pane_stacon

0x5279,	// (0x00033660) uni_indicator_pane_stacon_ParamLimits

0x5279,	// (0x00033660) uni_indicator_pane_stacon

0x528e,	// (0x00033675) battery_pane_stacon_ParamLimits

0x528e,	// (0x00033675) battery_pane_stacon

0x52ce,	// (0x000336b5) control_bottom_pane_stacon_ParamLimits

0x52ce,	// (0x000336b5) control_bottom_pane_stacon

0x52ed,	// (0x000336d4) navi_pane_stacon_ParamLimits

0x52ed,	// (0x000336d4) navi_pane_stacon

0x73b7,	// (0x0003579e) stacon_bottom_pane_g1_ParamLimits

0x73b7,	// (0x0003579e) stacon_bottom_pane_g1

0x4f14,	// (0x000332fb) aid_levels_signal_lsc_ParamLimits

0x4f14,	// (0x000332fb) aid_levels_signal_lsc

0x4f21,	// (0x00033308) signal_pane_stacon_g1_ParamLimits

0x4f21,	// (0x00033308) signal_pane_stacon_g1

0x4f2d,	// (0x00033314) signal_pane_stacon_g2_ParamLimits

0x4f2d,	// (0x00033314) signal_pane_stacon_g2

0x0001,

0xf6c9,	// (0x0003dab0) signal_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0003dab0) signal_pane_stacon_g

0x4f6e,	// (0x00033355) title_pane_stacon_t1_ParamLimits

0x4f6e,	// (0x00033355) title_pane_stacon_t1

0x4f93,	// (0x0003337a) uni_indicator_pane_stacon_g1

0x4f9d,	// (0x00033384) uni_indicator_pane_stacon_g2

0x4fa7,	// (0x0003338e) uni_indicator_pane_stacon_g3

0x4fb1,	// (0x00033398) uni_indicator_pane_stacon_g4

0x0003,

0xf6d5,	// (0x0003dabc) uni_indicator_pane_stacon_g

0x4fbb,	// (0x000333a2) control_top_pane_stacon_g1

0x4fc3,	// (0x000333aa) control_top_pane_stacon_t1_ParamLimits

0x4fc3,	// (0x000333aa) control_top_pane_stacon_t1

0x4ff4,	// (0x000333db) aid_levels_battery_lsc_ParamLimits

0x4ff4,	// (0x000333db) aid_levels_battery_lsc

0x5002,	// (0x000333e9) battery_pane_stacon_g1_ParamLimits

0x5002,	// (0x000333e9) battery_pane_stacon_g1

0x500e,	// (0x000333f5) battery_pane_stacon_g2_ParamLimits

0x500e,	// (0x000333f5) battery_pane_stacon_g2

0x0001,

0xf6de,	// (0x0003dac5) battery_pane_stacon_g_ParamLimits

0xf6de,	// (0x0003dac5) battery_pane_stacon_g

0x503d,	// (0x00033424) navi_icon_pane_stacon

0x504d,	// (0x00033434) navi_navi_pane_stacon

0x503d,	// (0x00033424) navi_text_pane_stacon

0x4fbb,	// (0x000333a2) control_bottom_pane_stacon_g1

0x505d,	// (0x00033444) control_bottom_pane_stacon_t1_ParamLimits

0x505d,	// (0x00033444) control_bottom_pane_stacon_t1

0x11d1,	// (0x0002f5b8) grid_app_pane_ParamLimits

0x11d1,	// (0x0002f5b8) grid_app_pane

0x11ff,	// (0x0002f5e6) scroll_pane_cp15_ParamLimits

0x11ff,	// (0x0002f5e6) scroll_pane_cp15

0x1212,	// (0x0002f5f9) cell_app_pane_ParamLimits

0x1212,	// (0x0002f5f9) cell_app_pane

0x124f,	// (0x0002f636) cell_app_pane_g1_ParamLimits

0x124f,	// (0x0002f636) cell_app_pane_g1

0x50a8,	// (0x0003348f) cell_app_pane_g2_ParamLimits

0x50a8,	// (0x0003348f) cell_app_pane_g2

0x0001,

0xf6e3,	// (0x0003daca) cell_app_pane_g_ParamLimits

0xf6e3,	// (0x0003daca) cell_app_pane_g

0x1273,	// (0x0002f65a) cell_app_pane_t1_ParamLimits

0x1273,	// (0x0002f65a) cell_app_pane_t1

0x50b4,	// (0x0003349b) grid_highlight_pane_ParamLimits

0x50b4,	// (0x0003349b) grid_highlight_pane

0x4c80,	// (0x00033067) cell_highlight_pane_g1

0x4c88,	// (0x0003306f) cell_highlight_pane_g2

0x4c90,	// (0x00033077) cell_highlight_pane_g3

0x4c98,	// (0x0003307f) cell_highlight_pane_g4

0x4ca0,	// (0x00033087) cell_highlight_pane_g5

0x4ca8,	// (0x0003308f) cell_highlight_pane_g6

0x4cb0,	// (0x00033097) cell_highlight_pane_g7

0x4cb8,	// (0x0003309f) cell_highlight_pane_g8

0x4cc0,	// (0x000330a7) cell_highlight_pane_g9

0x41e5,	// (0x000325cc) cell_highlight_pane_g10

0x0009,

0xf691,	// (0x0003da78) cell_highlight_pane_g

0x7060,	// (0x00035447) bg_scroll_pane

0x50d8,	// (0x000334bf) scroll_handle_pane

0x70a7,	// (0x0003548e) scroll_bg_pane_g1

0x70bc,	// (0x000354a3) scroll_bg_pane_g2

0x70d4,	// (0x000354bb) scroll_bg_pane_g3

0x0002,

0xf6e8,	// (0x0003dacf) scroll_bg_pane_g

0x70e9,	// (0x000354d0) scroll_handle_focus_pane_ParamLimits

0x70e9,	// (0x000354d0) scroll_handle_focus_pane

0x70a7,	// (0x0003548e) scroll_handle_pane_g1

0x70f6,	// (0x000354dd) scroll_handle_pane_g2

0x70d4,	// (0x000354bb) scroll_handle_pane_g3

0x0002,

0xf6ef,	// (0x0003dad6) scroll_handle_pane_g

0x4cd1,	// (0x000330b8) bg_popup_sub_pane_cp21_ParamLimits

0x4cd1,	// (0x000330b8) bg_popup_sub_pane_cp21

0x710a,	// (0x000354f1) popup_fep_japan_predictive_window_t1_ParamLimits

0x710a,	// (0x000354f1) popup_fep_japan_predictive_window_t1

0x7121,	// (0x00035508) popup_fep_japan_predictive_window_t2_ParamLimits

0x7121,	// (0x00035508) popup_fep_japan_predictive_window_t2

0x7154,	// (0x0003553b) popup_fep_japan_predictive_window_t3_ParamLimits

0x7154,	// (0x0003553b) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f6,	// (0x0003dadd) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f6,	// (0x0003dadd) popup_fep_japan_predictive_window_t

0x43a4,	// (0x0003278b) bg_popup_sub_pane_cp23

0x718b,	// (0x00035572) listscroll_japin_cand_pane

0x7193,	// (0x0003557a) popup_fep_japan_candidate_window_t1

0x71a1,	// (0x00035588) candidate_pane_ParamLimits

0x71a1,	// (0x00035588) candidate_pane

0x71b4,	// (0x0003559b) scroll_pane_cp30

0x71bc,	// (0x000355a3) list_single_popup_jap_candidate_pane_ParamLimits

0x71bc,	// (0x000355a3) list_single_popup_jap_candidate_pane

0x43a4,	// (0x0003278b) list_highlight_pane_cp30

0x71d1,	// (0x000355b8) list_single_popup_jap_candidate_pane_t1

0x128a,	// (0x0002f671) level_1_signal

0x129c,	// (0x0002f683) level_2_signal

0x12af,	// (0x0002f696) level_3_signal

0x12c2,	// (0x0002f6a9) level_4_signal

0x12d5,	// (0x0002f6bc) level_5_signal

0x12e8,	// (0x0002f6cf) level_6_signal

0x12fb,	// (0x0002f6e2) level_7_signal

0x128a,	// (0x0002f671) level_1_battery

0x129c,	// (0x0002f683) level_2_battery

0x12af,	// (0x0002f696) level_3_battery

0x12c2,	// (0x0002f6a9) level_4_battery

0x12d5,	// (0x0002f6bc) level_5_battery

0x12e8,	// (0x0002f6cf) level_6_battery

0x12fb,	// (0x0002f6e2) level_7_battery

0x71f8,	// (0x000355df) list_menu_pane_ParamLimits

0x71f8,	// (0x000355df) list_menu_pane

0x720e,	// (0x000355f5) scroll_pane_cp25_ParamLimits

0x720e,	// (0x000355f5) scroll_pane_cp25

0x130e,	// (0x0002f6f5) list_double2_graphic_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double2_graphic_pane_cp2

0x130e,	// (0x0002f6f5) list_double2_large_graphic_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double2_large_graphic_pane_cp2

0x130e,	// (0x0002f6f5) list_double2_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double2_pane_cp2

0x130e,	// (0x0002f6f5) list_double_graphic_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double_graphic_pane_cp2

0x130e,	// (0x0002f6f5) list_double_large_graphic_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double_large_graphic_pane_cp2

0x130e,	// (0x0002f6f5) list_double_number_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double_number_pane_cp2

0x130e,	// (0x0002f6f5) list_double_pane_cp2_ParamLimits

0x130e,	// (0x0002f6f5) list_double_pane_cp2

0x1329,	// (0x0002f710) list_single_2graphic_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_2graphic_pane_cp2

0x1329,	// (0x0002f710) list_single_graphic_heading_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_graphic_heading_pane_cp2

0x1329,	// (0x0002f710) list_single_graphic_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_graphic_pane_cp2

0x1329,	// (0x0002f710) list_single_heading_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_heading_pane_cp2

0x133a,	// (0x0002f721) list_single_large_graphic_pane_cp2_ParamLimits

0x133a,	// (0x0002f721) list_single_large_graphic_pane_cp2

0x1329,	// (0x0002f710) list_single_number_heading_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_number_heading_pane_cp2

0x1329,	// (0x0002f710) list_single_number_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_number_pane_cp2

0x1329,	// (0x0002f710) list_single_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_pane_cp2

0x7230,	// (0x00035617) bg_popup_sub_pane_cp22

0x5187,	// (0x0003356e) popup_side_volume_key_window_g1

0x51ab,	// (0x00033592) popup_side_volume_key_window_t1

0x51c7,	// (0x000335ae) volume_small_pane_cp1

0x46fd,	// (0x00032ae4) bg_popup_sub_pane_cp24_ParamLimits

0x46fd,	// (0x00032ae4) bg_popup_sub_pane_cp24

0x7246,	// (0x0003562d) fep_china_uni_candidate_pane_ParamLimits

0x7246,	// (0x0003562d) fep_china_uni_candidate_pane

0x725a,	// (0x00035641) fep_china_uni_entry_pane

0x726a,	// (0x00035651) popup_fep_china_uni_window_g1

0x7286,	// (0x0003566d) fep_china_uni_entry_pane_g1

0x728e,	// (0x00035675) fep_china_uni_entry_pane_g2

0x0001,

0xf727,	// (0x0003db0e) fep_china_uni_entry_pane_g

0x7296,	// (0x0003567d) fep_entry_item_pane

0x72a0,	// (0x00035687) fep_candidate_item_pane

0x72a8,	// (0x0003568f) fep_china_uni_candidate_pane_g1

0x72b0,	// (0x00035697) fep_china_uni_candidate_pane_g2

0x72b8,	// (0x0003569f) fep_china_uni_candidate_pane_g3

0x72c0,	// (0x000356a7) fep_china_uni_candidate_pane_g4

0x0003,

0xf72c,	// (0x0003db13) fep_china_uni_candidate_pane_g

0x41e5,	// (0x000325cc) fep_entry_item_pane_g1

0x72c8,	// (0x000356af) fep_entry_item_pane_t1_ParamLimits

0x72c8,	// (0x000356af) fep_entry_item_pane_t1

0x72de,	// (0x000356c5) fep_candidate_item_pane_t1_ParamLimits

0x72de,	// (0x000356c5) fep_candidate_item_pane_t1

0x72f3,	// (0x000356da) fep_candidate_item_pane_t2_ParamLimits

0x72f3,	// (0x000356da) fep_candidate_item_pane_t2

0x0001,

0xf735,	// (0x0003db1c) fep_candidate_item_pane_t_ParamLimits

0xf735,	// (0x0003db1c) fep_candidate_item_pane_t

0x4538,	// (0x0003291f) list_highlight_pane_cp31_ParamLimits

0x4538,	// (0x0003291f) list_highlight_pane_cp31

0x7305,	// (0x000356ec) level_1_signal_lsc

0x730e,	// (0x000356f5) level_2_signal_lsc

0x7317,	// (0x000356fe) level_3_signal_lsc

0x7320,	// (0x00035707) level_4_signal_lsc

0x7329,	// (0x00035710) level_5_signal_lsc

0x7332,	// (0x00035719) level_6_signal_lsc

0x733b,	// (0x00035722) level_7_signal_lsc

0x733b,	// (0x00035722) level_1_battery_lsc

0x7344,	// (0x0003572b) level_2_battery_lsc

0x734d,	// (0x00035734) level_3_battery_lsc

0x7356,	// (0x0003573d) level_4_battery_lsc

0x735f,	// (0x00035746) level_5_battery_lsc

0x7368,	// (0x0003574f) level_6_battery_lsc

0x7305,	// (0x000356ec) level_7_battery_lsc

0x7371,	// (0x00035758) scroll_handle_focus_pane_g1

0x737a,	// (0x00035761) scroll_handle_focus_pane_g2

0x7383,	// (0x0003576a) scroll_handle_focus_pane_g3

0x0002,

0xf73a,	// (0x0003db21) scroll_handle_focus_pane_g

0xcbb1,	// (0x0003af98) list_single_2graphic_pane_g1_ParamLimits

0xcbb1,	// (0x0003af98) list_single_2graphic_pane_g1

0xcfe4,	// (0x0003b3cb) list_single_2graphic_pane_g2_ParamLimits

0xcfe4,	// (0x0003b3cb) list_single_2graphic_pane_g2

0x4b89,	// (0x00032f70) list_single_2graphic_pane_g3_ParamLimits

0x4b89,	// (0x00032f70) list_single_2graphic_pane_g3

0xcbbd,	// (0x0003afa4) list_single_2graphic_pane_g4_ParamLimits

0xcbbd,	// (0x0003afa4) list_single_2graphic_pane_g4

0x0003,

0xf741,	// (0x0003db28) list_single_2graphic_pane_g_ParamLimits

0xf741,	// (0x0003db28) list_single_2graphic_pane_g

0xcbce,	// (0x0003afb5) list_single_2graphic_pane_t1_ParamLimits

0xcbce,	// (0x0003afb5) list_single_2graphic_pane_t1

0xd049,	// (0x0003b430) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xd049,	// (0x0003b430) list_double2_graphic_large_graphic_pane_g1

0xc886,	// (0x0003ac6d) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xc886,	// (0x0003ac6d) list_double2_graphic_large_graphic_pane_g2

0x4b36,	// (0x00032f1d) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x4b36,	// (0x00032f1d) list_double2_graphic_large_graphic_pane_g3

0xcbfc,	// (0x0003afe3) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xcbfc,	// (0x0003afe3) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74a,	// (0x0003db31) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74a,	// (0x0003db31) list_double2_graphic_large_graphic_pane_g

0xcc08,	// (0x0003afef) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xcc08,	// (0x0003afef) list_double2_graphic_large_graphic_pane_t1

0xcc1e,	// (0x0003b005) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xcc1e,	// (0x0003b005) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf753,	// (0x0003db3a) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf753,	// (0x0003db3a) list_double2_graphic_large_graphic_pane_t

0x745e,	// (0x00035845) popup_fast_swap_window_ParamLimits

0x745e,	// (0x00035845) popup_fast_swap_window

0x747a,	// (0x00035861) popup_side_volume_key_window

0x7494,	// (0x0003587b) stacon_top_pane

0x749e,	// (0x00035885) status_pane_ParamLimits

0x749e,	// (0x00035885) status_pane

0x1409,	// (0x0002f7f0) status_small_pane

0x43a4,	// (0x0003278b) control_pane

0x43a4,	// (0x0003278b) stacon_bottom_pane

0x4b19,	// (0x00032f00) scroll_pane_cp121

0x4c1c,	// (0x00033003) set_content_pane

0x8c4e,	// (0x00037035) bg_active_tab_pane_g1_cp1

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp1

0x8c57,	// (0x0003703e) bg_active_tab_pane_g3_cp1

0x8c4e,	// (0x00037035) bg_passive_tab_pane_g1_cp1

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp1

0x8c57,	// (0x0003703e) bg_passive_tab_pane_g3_cp1

0x13c8,	// (0x0002f7af) bg_active_tab_pane_g1_cp2

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp2

0x13bf,	// (0x0002f7a6) bg_active_tab_pane_g3_cp2

0x13c8,	// (0x0002f7af) bg_passive_tab_pane_g1_cp2

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp2

0x13bf,	// (0x0002f7a6) bg_passive_tab_pane_g3_cp2

0x13da,	// (0x0002f7c1) bg_active_tab_pane_g1_cp3

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp3

0x13d1,	// (0x0002f7b8) bg_active_tab_pane_g3_cp3

0x13da,	// (0x0002f7c1) bg_passive_tab_pane_g1_cp3

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp3

0x13d1,	// (0x0002f7b8) bg_passive_tab_pane_g3_cp3

0x13ec,	// (0x0002f7d3) bg_active_tab_pane_g1_cp4

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp4

0x13e3,	// (0x0002f7ca) bg_active_tab_pane_g3_cp4

0x13ec,	// (0x0002f7d3) bg_passive_tab_pane_g1_cp4

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp4

0x13e3,	// (0x0002f7ca) bg_passive_tab_pane_g3_cp4

0x73d3,	// (0x000357ba) bg_active_tab_pane_g1_cp5

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp5

0x73dc,	// (0x000357c3) bg_active_tab_pane_g3_cp5

0x73d3,	// (0x000357ba) bg_passive_tab_pane_g1_cp5

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp5

0x73dc,	// (0x000357c3) bg_passive_tab_pane_g3_cp5

0x13f5,	// (0x0002f7dc) list_set_graphic_pane_ParamLimits

0x13f5,	// (0x0002f7dc) list_set_graphic_pane

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp4

0x73e5,	// (0x000357cc) list_set_graphic_pane_g1_ParamLimits

0x73e5,	// (0x000357cc) list_set_graphic_pane_g1

0x73f1,	// (0x000357d8) list_set_graphic_pane_g2_ParamLimits

0x73f1,	// (0x000357d8) list_set_graphic_pane_g2

0x0001,

0xf758,	// (0x0003db3f) list_set_graphic_pane_g_ParamLimits

0xf758,	// (0x0003db3f) list_set_graphic_pane_g

0x0009,

0xfacf,	// (0x0003deb6) volume_small_pane_cp_g

0x7413,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7413,	// (0x000357fa) list_double2_large_graphic_pane_g1_cp2

0x741f,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x741f,	// (0x00035806) list_double2_large_graphic_pane_g2_cp2

0x742e,	// (0x00035815) list_double2_large_graphic_pane_g3_cp2

0x7436,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7436,	// (0x0003581d) list_double2_large_graphic_pane_t1_cp2

0x744c,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x744c,	// (0x00035833) list_double2_large_graphic_pane_t2_cp2

0x891e,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x891e,	// (0x00036d05) list_double_large_graphic_pane_g1_cp2

0x892f,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x892f,	// (0x00036d16) list_double_large_graphic_pane_g2_cp2

0x7579,	// (0x00035960) list_double_large_graphic_pane_g3_cp2

0x893e,	// (0x00036d25) list_double_large_graphic_pane_g4_cp

0x8946,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x8946,	// (0x00036d2d) list_double_large_graphic_pane_t1_cp2

0x895d,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x895d,	// (0x00036d44) list_double_large_graphic_pane_t2_cp2

0x74ac,	// (0x00035893) list_double2_graphic_pane_g1_cp2_ParamLimits

0x74ac,	// (0x00035893) list_double2_graphic_pane_g1_cp2

0x74b8,	// (0x0003589f) list_double2_graphic_pane_g2_cp2_ParamLimits

0x74b8,	// (0x0003589f) list_double2_graphic_pane_g2_cp2

0x74c7,	// (0x000358ae) list_double2_graphic_pane_g3_cp2

0x74cf,	// (0x000358b6) list_double2_graphic_pane_t1_cp2_ParamLimits

0x74cf,	// (0x000358b6) list_double2_graphic_pane_t1_cp2

0x74e5,	// (0x000358cc) list_double2_graphic_pane_t2_cp2_ParamLimits

0x74e5,	// (0x000358cc) list_double2_graphic_pane_t2_cp2

0x74f7,	// (0x000358de) list_single_number_heading_pane_g1_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_number_heading_pane_g1_cp2

0x7503,	// (0x000358ea) list_single_number_heading_pane_g2_cp2

0x750b,	// (0x000358f2) list_single_number_heading_pane_t1_cp2_ParamLimits

0x750b,	// (0x000358f2) list_single_number_heading_pane_t1_cp2

0x7521,	// (0x00035908) list_single_number_heading_pane_t2_cp2_ParamLimits

0x7521,	// (0x00035908) list_single_number_heading_pane_t2_cp2

0x7533,	// (0x0003591a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x7533,	// (0x0003591a) list_single_number_heading_pane_t3_cp2

0x74f7,	// (0x000358de) list_single_heading_pane_g1_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_heading_pane_g1_cp2

0x7503,	// (0x000358ea) list_single_heading_pane_g2_cp2

0x750b,	// (0x000358f2) list_single_heading_pane_t1_cp2_ParamLimits

0x750b,	// (0x000358f2) list_single_heading_pane_t1_cp2

0x8728,	// (0x00036b0f) list_single_heading_pane_t2_cp2_ParamLimits

0x8728,	// (0x00036b0f) list_single_heading_pane_t2_cp2

0x8678,	// (0x00036a5f) list_double_graphic_pane_g1_cp2_ParamLimits

0x8678,	// (0x00036a5f) list_double_graphic_pane_g1_cp2

0x8684,	// (0x00036a6b) list_double_graphic_pane_g2_cp2_ParamLimits

0x8684,	// (0x00036a6b) list_double_graphic_pane_g2_cp2

0x8693,	// (0x00036a7a) list_double_graphic_pane_g3_cp2

0x869b,	// (0x00036a82) list_double_graphic_pane_t1_cp2_ParamLimits

0x869b,	// (0x00036a82) list_double_graphic_pane_t1_cp2

0x86b1,	// (0x00036a98) list_double_graphic_pane_t2_cp2_ParamLimits

0x86b1,	// (0x00036a98) list_double_graphic_pane_t2_cp2

0x756d,	// (0x00035954) list_double_number_pane_g1_cp2_ParamLimits

0x756d,	// (0x00035954) list_double_number_pane_g1_cp2

0x7579,	// (0x00035960) list_double_number_pane_g2_cp2

0x863e,	// (0x00036a25) list_double_number_pane_t1_cp2_ParamLimits

0x863e,	// (0x00036a25) list_double_number_pane_t1_cp2

0x8650,	// (0x00036a37) list_double_number_pane_t2_cp2_ParamLimits

0x8650,	// (0x00036a37) list_double_number_pane_t2_cp2

0x8666,	// (0x00036a4d) list_double_number_pane_t3_cp2_ParamLimits

0x8666,	// (0x00036a4d) list_double_number_pane_t3_cp2

0x85b6,	// (0x0003699d) list_single_graphic_pane_g1_cp2_ParamLimits

0x85b6,	// (0x0003699d) list_single_graphic_pane_g1_cp2

0x74f7,	// (0x000358de) list_single_graphic_pane_g2_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_graphic_pane_g2_cp2

0x7503,	// (0x000358ea) list_single_graphic_pane_g3_cp2

0x858e,	// (0x00036975) list_single_graphic_pane_t1_cp2_ParamLimits

0x858e,	// (0x00036975) list_single_graphic_pane_t1_cp2

0x74f7,	// (0x000358de) list_single_number_pane_g1_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_number_pane_g1_cp2

0x7503,	// (0x000358ea) list_single_number_pane_g2_cp2

0x858e,	// (0x00036975) list_single_number_pane_t1_cp2_ParamLimits

0x858e,	// (0x00036975) list_single_number_pane_t1_cp2

0x85a4,	// (0x0003698b) list_single_number_pane_t2_cp2_ParamLimits

0x85a4,	// (0x0003698b) list_single_number_pane_t2_cp2

0x741f,	// (0x00035806) list_double2_pane_g1_cp2_ParamLimits

0x741f,	// (0x00035806) list_double2_pane_g1_cp2

0x742e,	// (0x00035815) list_double2_pane_g2_cp2

0x7545,	// (0x0003592c) list_double2_pane_t1_cp2_ParamLimits

0x7545,	// (0x0003592c) list_double2_pane_t1_cp2

0x755b,	// (0x00035942) list_double2_pane_t2_cp2_ParamLimits

0x755b,	// (0x00035942) list_double2_pane_t2_cp2

0x756d,	// (0x00035954) list_double_pane_g1_cp2_ParamLimits

0x756d,	// (0x00035954) list_double_pane_g1_cp2

0x7579,	// (0x00035960) list_double_pane_g2_cp2

0x7581,	// (0x00035968) list_double_pane_t1_cp2_ParamLimits

0x7581,	// (0x00035968) list_double_pane_t1_cp2

0x7597,	// (0x0003597e) list_double_pane_t2_cp2_ParamLimits

0x7597,	// (0x0003597e) list_double_pane_t2_cp2

0x75bf,	// (0x000359a6) list_single_pane_cp2_g3

0x74f7,	// (0x000358de) list_single_pane_g1_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_pane_g1_cp2

0x7503,	// (0x000358ea) list_single_pane_g2_cp2

0x75cf,	// (0x000359b6) list_single_pane_t1_cp2_ParamLimits

0x75cf,	// (0x000359b6) list_single_pane_t1_cp2

0x75e7,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x75e7,	// (0x000359ce) list_single_large_graphic_pane_g1_cp2

0x75f3,	// (0x000359da) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x75f3,	// (0x000359da) list_single_large_graphic_pane_g2_cp2

0x75ff,	// (0x000359e6) list_single_large_graphic_pane_g3_cp2

0x7607,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x7607,	// (0x000359ee) list_single_large_graphic_pane_g4_cp1

0x7621,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x7621,	// (0x00035a08) list_single_large_graphic_pane_t1_cp2

0x8570,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x8570,	// (0x00036957) list_single_graphic_heading_pane_g1_cp2

0x854b,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x854b,	// (0x00036932) list_single_graphic_heading_pane_g4_cp2

0x7503,	// (0x000358ea) list_single_graphic_heading_pane_g5_cp2

0x750b,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x750b,	// (0x000358f2) list_single_graphic_heading_pane_t1_cp2

0x857c,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x857c,	// (0x00036963) list_single_graphic_heading_pane_t2_cp2

0x853f,	// (0x00036926) list_single_2graphic_pane_g1_cp2_ParamLimits

0x853f,	// (0x00036926) list_single_2graphic_pane_g1_cp2

0x854b,	// (0x00036932) list_single_2graphic_pane_g2_cp2_ParamLimits

0x854b,	// (0x00036932) list_single_2graphic_pane_g2_cp2

0x7503,	// (0x000358ea) list_single_2graphic_pane_g3_cp2

0x7a62,	// (0x00035e49) list_single_2graphic_pane_g4_cp2_ParamLimits

0x7a62,	// (0x00035e49) list_single_2graphic_pane_g4_cp2

0x855a,	// (0x00036941) list_single_2graphic_pane_t1_cp2_ParamLimits

0x855a,	// (0x00036941) list_single_2graphic_pane_t1_cp2

0x41e5,	// (0x000325cc) list_highlight_pane_g10_cp1

0x8151,	// (0x00036538) list_highlight_pane_g1_cp1

0x8159,	// (0x00036540) list_highlight_pane_g2_cp1

0x8161,	// (0x00036548) list_highlight_pane_g3_cp1

0x8169,	// (0x00036550) list_highlight_pane_g4_cp1

0x8171,	// (0x00036558) list_highlight_pane_g5_cp1

0x8179,	// (0x00036560) list_highlight_pane_g6_cp1

0x8181,	// (0x00036568) list_highlight_pane_g7_cp1

0x8189,	// (0x00036570) list_highlight_pane_g8_cp1

0x8191,	// (0x00036578) list_highlight_pane_g9_cp1

0x1964,	// (0x0002fd4b) form_field_slider_pane_t3

0x1972,	// (0x0002fd59) form_field_slider_pane_t4

0x809b,	// (0x00036482) slider_form_pane_ParamLimits

0x809b,	// (0x00036482) slider_form_pane

0x43a4,	// (0x0003278b) control_abbreviations

0x43a4,	// (0x0003278b) control_conventions

0x43a4,	// (0x0003278b) control_definitions

0x43a4,	// (0x0003278b) format_table_attribute

0x8772,	// (0x00036b59) bg_popup_preview_window_pane_g9

0x43a4,	// (0x0003278b) format_table_data2

0x43a4,	// (0x0003278b) format_table_data3

0x43a4,	// (0x0003278b) format_table_data_example

0x0008,

0x43a4,	// (0x0003278b) intro_purpose

0xf8e8,	// (0x0003dccf) bg_popup_preview_window_pane_g

0x43a4,	// (0x0003278b) texts_category

0x43a4,	// (0x0003278b) texts_graphics

0x7637,	// (0x00035a1e) text_digital

0x7646,	// (0x00035a2d) text_primary

0x7655,	// (0x00035a3c) text_primary_small

0x7664,	// (0x00035a4b) text_secondary

0x7673,	// (0x00035a5a) text_title

0x8beb,	// (0x00036fd2) bg_passive_tab_pane_g1_cp3_srt

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp3_srt

0x8bf4,	// (0x00036fdb) bg_passive_tab_pane_g3_cp3_srt

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp3_srt_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp3_srt

0x8bfd,	// (0x00036fe4) tabs_4_active_pane_srt_g1

0x06e6,	// (0x0002eacd) tabs_4_active_pane_srt_t1_ParamLimits

0x06e6,	// (0x0002eacd) tabs_4_active_pane_srt_t1

0x8beb,	// (0x00036fd2) bg_active_tab_pane_g1_cp3_copy1

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp3_copy1

0x8bf4,	// (0x00036fdb) bg_active_tab_pane_g3_cp3_copy1

0x4538,	// (0x0003291f) tabs_2_long_active_pane_srt_ParamLimits

0x4538,	// (0x0003291f) tabs_2_long_active_pane_srt

0x4538,	// (0x0003291f) tabs_2_long_passive_pane_srt_ParamLimits

0x4538,	// (0x0003291f) tabs_2_long_passive_pane_srt

0x5521,	// (0x00033908) bg_passive_tab_pane_cp4_srt_ParamLimits

0x5521,	// (0x00033908) bg_passive_tab_pane_cp4_srt

0x8b21,	// (0x00036f08) bg_passive_tab_pane_g1_cp4_srt

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp4_srt

0x8b2a,	// (0x00036f11) bg_passive_tab_pane_g3_cp4_srt

0x4538,	// (0x0003291f) bg_active_tab_pane_cp4_srt_ParamLimits

0x4538,	// (0x0003291f) bg_active_tab_pane_cp4_srt

0x11a4,	// (0x0002f58b) tabs_2_long_active_pane_srt_t1_ParamLimits

0x11a4,	// (0x0002f58b) tabs_2_long_active_pane_srt_t1

0x8b21,	// (0x00036f08) bg_active_tab_pane_g1_cp4_srt

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp4_srt

0x8b2a,	// (0x00036f11) bg_active_tab_pane_g3_cp4_srt

0x46fd,	// (0x00032ae4) tabs_3_long_active_pane_srt_ParamLimits

0x46fd,	// (0x00032ae4) tabs_3_long_active_pane_srt

0x46fd,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x46fd,	// (0x00032ae4) tabs_3_long_passive_pane_cp_srt

0x46fd,	// (0x00032ae4) tabs_3_long_passive_pane_srt_ParamLimits

0x46fd,	// (0x00032ae4) tabs_3_long_passive_pane_srt

0x5521,	// (0x00033908) bg_passive_tab_pane_cp5_srt_ParamLimits

0x5521,	// (0x00033908) bg_passive_tab_pane_cp5_srt

0x73d3,	// (0x000357ba) bg_passive_tab_pane_g1_cp5_srt

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp5_srt

0x73dc,	// (0x000357c3) bg_passive_tab_pane_g3_cp5_srt

0x4538,	// (0x0003291f) bg_active_tab_pane_cp5_srt_ParamLimits

0x4538,	// (0x0003291f) bg_active_tab_pane_cp5_srt

0x11bb,	// (0x0002f5a2) tabs_3_long_active_pane_srt_t1_ParamLimits

0x11bb,	// (0x0002f5a2) tabs_3_long_active_pane_srt_t1

0x73d3,	// (0x000357ba) bg_active_tab_pane_g1_cp5_srt

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp5_srt

0x73dc,	// (0x000357c3) bg_active_tab_pane_g3_cp5_srt

0x8b13,	// (0x00036efa) navi_text_pane_srt_t1

0x8b0b,	// (0x00036ef2) navi_icon_pane_srt_g1

0x778b,	// (0x00035b72) midp_editing_number_pane_srt

0x7682,	// (0x00035a69) midp_ticker_pane_srt

0x7793,	// (0x00035b7a) midp_ticker_pane_srt_g1

0x779b,	// (0x00035b82) midp_ticker_pane_srt_g2

0x0001,

0xf777,	// (0x0003db5e) midp_ticker_pane_srt_g

0x77a3,	// (0x00035b8a) midp_ticker_pane_srt_t1

0x8afc,	// (0x00036ee3) midp_editing_number_pane_t1_copy1

0x1412,	// (0x0002f7f9) listscroll_midp_pane

0x1412,	// (0x0002f7f9) midp_form_pane

0x768a,	// (0x00035a71) midp_info_popup_window_ParamLimits

0x768a,	// (0x00035a71) midp_info_popup_window

0x4cd1,	// (0x000330b8) bg_popup_sub_pane_cp50_ParamLimits

0x4cd1,	// (0x000330b8) bg_popup_sub_pane_cp50

0x7db8,	// (0x0003619f) listscroll_midp_info_pane_ParamLimits

0x7db8,	// (0x0003619f) listscroll_midp_info_pane

0x7da0,	// (0x00036187) listscroll_form_midp_pane_ParamLimits

0x7da0,	// (0x00036187) listscroll_form_midp_pane

0x7dac,	// (0x00036193) scroll_bar_cp050

0x1958,	// (0x0002fd3f) list_midp_pane

0x9413,	// (0x000377fa) signal_pane_g2_cp

0x7cd2,	// (0x000360b9) listscroll_midp_info_pane_t1_ParamLimits

0x7cd2,	// (0x000360b9) listscroll_midp_info_pane_t1

0x7cea,	// (0x000360d1) listscroll_midp_info_pane_t2_ParamLimits

0x7cea,	// (0x000360d1) listscroll_midp_info_pane_t2

0x7d28,	// (0x0003610f) listscroll_midp_info_pane_t3_ParamLimits

0x7d28,	// (0x0003610f) listscroll_midp_info_pane_t3

0x7d62,	// (0x00036149) listscroll_midp_info_pane_t4_ParamLimits

0x7d62,	// (0x00036149) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0003dc0a) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0003dc0a) listscroll_midp_info_pane_t

0x4d74,	// (0x0003315b) scroll_pane_cp21

0x7c76,	// (0x0003605d) form_midp_field_choice_group_pane

0x7c7f,	// (0x00036066) form_midp_field_text_pane

0x7cb8,	// (0x0003609f) form_midp_field_time_pane

0x7cc0,	// (0x000360a7) form_midp_gauge_slider_pane

0x7cc9,	// (0x000360b0) form_midp_gauge_wait_pane

0x43a4,	// (0x0003278b) form_midp_image_pane

0xcc30,	// (0x0003b017) list_single_midp_pane_ParamLimits

0xcc30,	// (0x0003b017) list_single_midp_pane

0x7c44,	// (0x0003602b) form_midp_field_text_pane_t1

0x7a9a,	// (0x00035e81) input_focus_pane_cp050

0x7c65,	// (0x0003604c) list_midp_form_text_pane

0x7c13,	// (0x00035ffa) form_midp_field_choice_group_pane_t1

0x7c21,	// (0x00036008) input_focus_pane_cp051

0x7c35,	// (0x0003601c) list_midp_choice_pane

0x43a4,	// (0x0003278b) status_idle_pane

0x7bf7,	// (0x00035fde) form_midp_field_time_pane_t1

0x41e5,	// (0x000325cc) wait_anim_pane_g2_copy1

0x7c05,	// (0x00035fec) form_midp_field_time_pane_t2

0x0001,

0x76f5,	// (0x00035adc) aid_navinavi_width_2_pane

0xf81e,	// (0x0003dc05) form_midp_field_time_pane_t

0x43a4,	// (0x0003278b) input_focus_pane_cp052

0x43a4,	// (0x0003278b) bg_input_focus_pane_cp040

0x7bd3,	// (0x00035fba) form_midp_gauge_slider_pane_t1

0x7be1,	// (0x00035fc8) form_midp_gauge_slider_pane_t2

0x193c,	// (0x0002fd23) form_midp_gauge_slider_pane_t3

0x194a,	// (0x0002fd31) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0003dbfc) form_midp_gauge_slider_pane_t

0x7bef,	// (0x00035fd6) form_midp_slider_pane

0x4538,	// (0x0003291f) bg_input_focus_pane_cp041_ParamLimits

0x4538,	// (0x0003291f) bg_input_focus_pane_cp041

0x7ba3,	// (0x00035f8a) form_midp_gauge_wait_pane_t1_ParamLimits

0x7ba3,	// (0x00035f8a) form_midp_gauge_wait_pane_t1

0x7bb5,	// (0x00035f9c) form_midp_gauge_wait_pane_t2_ParamLimits

0x7bb5,	// (0x00035f9c) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0003dbf7) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0003dbf7) form_midp_gauge_wait_pane_t

0x7bc7,	// (0x00035fae) form_midp_wait_pane_ParamLimits

0x7bc7,	// (0x00035fae) form_midp_wait_pane

0x7b6d,	// (0x00035f54) form_midp_image_pane_g1

0x7b76,	// (0x00035f5d) form_midp_image_pane_t1

0x7b85,	// (0x00035f6c) form_midp_image_pane_t2

0x7b94,	// (0x00035f7b) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0003dbf0) form_midp_image_pane_t

0x7b64,	// (0x00035f4b) list_single_midp_pane_g1

0x3bfd,	// (0x00031fe4) list_single_midp_pane_t1

0x7b50,	// (0x00035f37) list_midp_form_item_pane_ParamLimits

0x7b50,	// (0x00035f37) list_midp_form_item_pane

0x769d,	// (0x00035a84) list_midp_form_item_pane_t1

0x76ac,	// (0x00035a93) midp_ticker_pane_g1

0x76b8,	// (0x00035a9f) midp_ticker_pane_g2

0x0001,

0xf75d,	// (0x0003db44) midp_ticker_pane_g

0x76c4,	// (0x00035aab) midp_ticker_pane_t1

0x8afc,	// (0x00036ee3) midp_editing_number_pane_t1

0x8b84,	// (0x00036f6b) midp_editing_number_pane

0x8b90,	// (0x00036f77) midp_ticker_pane

0x8aec,	// (0x00036ed3) ai_message_heading_pane

0x43a4,	// (0x0003278b) bg_popup_window_pane_cp14

0x8af4,	// (0x00036edb) listscroll_ai_message_pane

0x8a76,	// (0x00036e5d) ai_message_heading_pane_g1_ParamLimits

0x8a76,	// (0x00036e5d) ai_message_heading_pane_g1

0x8a82,	// (0x00036e69) ai_message_heading_pane_g2_ParamLimits

0x8a82,	// (0x00036e69) ai_message_heading_pane_g2

0x8a8e,	// (0x00036e75) ai_message_heading_pane_g3_ParamLimits

0x8a8e,	// (0x00036e75) ai_message_heading_pane_g3

0x8a9a,	// (0x00036e81) ai_message_heading_pane_g4_ParamLimits

0x8a9a,	// (0x00036e81) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0003dd31) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0003dd31) ai_message_heading_pane_g

0x8aa6,	// (0x00036e8d) ai_message_heading_pane_t1_ParamLimits

0x8aa6,	// (0x00036e8d) ai_message_heading_pane_t1

0x8ac0,	// (0x00036ea7) ai_message_heading_pane_t2_ParamLimits

0x8ac0,	// (0x00036ea7) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0003dd3a) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0003dd3a) ai_message_heading_pane_t

0x8ad2,	// (0x00036eb9) bg_popup_heading_pane_cp1_ParamLimits

0x8ad2,	// (0x00036eb9) bg_popup_heading_pane_cp1

0x8a64,	// (0x00036e4b) list_ai_message_pane_ParamLimits

0x8a64,	// (0x00036e4b) list_ai_message_pane

0x4d74,	// (0x0003315b) scroll_pane_cp10

0x8a00,	// (0x00036de7) list_ai_message_pane_g1

0x8a08,	// (0x00036def) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0003dd0e) list_ai_message_pane_g

0x8a10,	// (0x00036df7) list_ai_message_pane_t1_ParamLimits

0x8a10,	// (0x00036df7) list_ai_message_pane_t1

0x8a25,	// (0x00036e0c) list_ai_message_pane_t2_ParamLimits

0x8a25,	// (0x00036e0c) list_ai_message_pane_t2

0x8a3a,	// (0x00036e21) list_ai_message_pane_t3_ParamLimits

0x8a3a,	// (0x00036e21) list_ai_message_pane_t3

0x8a4f,	// (0x00036e36) list_ai_message_pane_t4_ParamLimits

0x8a4f,	// (0x00036e36) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0003dd13) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0003dd13) list_ai_message_pane_t

0x89ee,	// (0x00036dd5) cell_ai_soft_ind_pane_ParamLimits

0x89ee,	// (0x00036dd5) cell_ai_soft_ind_pane

0x76d6,	// (0x00035abd) cell_ai_soft_ind_pane_g1_ParamLimits

0x76d6,	// (0x00035abd) cell_ai_soft_ind_pane_g1

0x43a4,	// (0x0003278b) grid_highlight_cp1

0x76e3,	// (0x00035aca) text_secondary_cp56_ParamLimits

0x76e3,	// (0x00035aca) text_secondary_cp56

0x89c3,	// (0x00036daa) example_general_pane_ParamLimits

0x89c3,	// (0x00036daa) example_general_pane

0x89cf,	// (0x00036db6) example_parent_pane_g1_ParamLimits

0x89cf,	// (0x00036db6) example_parent_pane_g1

0x89db,	// (0x00036dc2) example_parent_pane_t1_ParamLimits

0x89db,	// (0x00036dc2) example_parent_pane_t1

0xd4c3,	// (0x0003b8aa) popup_preview_text_window_ParamLimits

0xd4c3,	// (0x0003b8aa) popup_preview_text_window

0x75c7,	// (0x000359ae) list_single_pane_cp2_g4

0x47d9,	// (0x00032bc0) bg_popup_preview_window_pane_ParamLimits

0x47d9,	// (0x00032bc0) bg_popup_preview_window_pane

0x877a,	// (0x00036b61) popup_preview_text_window_t1_ParamLimits

0x877a,	// (0x00036b61) popup_preview_text_window_t1

0x8798,	// (0x00036b7f) popup_preview_text_window_t2_ParamLimits

0x8798,	// (0x00036b7f) popup_preview_text_window_t2

0x87e1,	// (0x00036bc8) popup_preview_text_window_t3_ParamLimits

0x87e1,	// (0x00036bc8) popup_preview_text_window_t3

0x8826,	// (0x00036c0d) popup_preview_text_window_t4_ParamLimits

0x8826,	// (0x00036c0d) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0003dce2) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0003dce2) popup_preview_text_window_t

0x88a4,	// (0x00036c8b) scroll_pane_cp11

0x7a1a,	// (0x00035e01) bg_popup_preview_window_pane_g1

0x873a,	// (0x00036b21) bg_popup_preview_window_pane_g2

0x8742,	// (0x00036b29) bg_popup_preview_window_pane_g3

0x874a,	// (0x00036b31) bg_popup_preview_window_pane_g4

0x8752,	// (0x00036b39) bg_popup_preview_window_pane_g5

0x875a,	// (0x00036b41) bg_popup_preview_window_pane_g6

0x8762,	// (0x00036b49) bg_popup_preview_window_pane_g7

0x876a,	// (0x00036b51) bg_popup_preview_window_pane_g8

0x41f7,	// (0x000325de) aid_popup_width_pane

0xd445,	// (0x0003b82c) popup_midp_note_alarm_window_ParamLimits

0xd445,	// (0x0003b82c) popup_midp_note_alarm_window

0x4c25,	// (0x0003300c) data_form_pane_ParamLimits

0xcaa6,	// (0x0003ae8d) form_field_data_pane_g1

0xcab0,	// (0x0003ae97) form_field_data_pane_t1_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_ParamLimits

0x4c3f,	// (0x00033026) data_form_wide_pane_ParamLimits

0x38f4,	// (0x00031cdb) form_field_data_wide_pane_g1

0x3900,	// (0x00031ce7) form_field_data_wide_pane_t1_ParamLimits

0x4998,	// (0x00032d7f) input_focus_pane_cp6_ParamLimits

0x1182,	// (0x0002f569) input_popup_find_pane_g1_ParamLimits

0x1182,	// (0x0002f569) input_popup_find_pane_g1

0x501e,	// (0x00033405) aid_navi_side_left_pane

0x502e,	// (0x00033415) aid_navi_side_right_pane

0x8222,	// (0x00036609) bg_popup_window_pane_cp30_ParamLimits

0x8222,	// (0x00036609) bg_popup_window_pane_cp30

0x829c,	// (0x00036683) popup_midp_note_alarm_window_g1_ParamLimits

0x829c,	// (0x00036683) popup_midp_note_alarm_window_g1

0x82cc,	// (0x000366b3) popup_midp_note_alarm_window_t1_ParamLimits

0x82cc,	// (0x000366b3) popup_midp_note_alarm_window_t1

0x836d,	// (0x00036754) popup_midp_note_alarm_window_t2_ParamLimits

0x836d,	// (0x00036754) popup_midp_note_alarm_window_t2

0x841b,	// (0x00036802) popup_midp_note_alarm_window_t3_ParamLimits

0x841b,	// (0x00036802) popup_midp_note_alarm_window_t3

0x8443,	// (0x0003682a) popup_midp_note_alarm_window_t4_ParamLimits

0x8443,	// (0x0003682a) popup_midp_note_alarm_window_t4

0x8463,	// (0x0003684a) popup_midp_note_alarm_window_t5_ParamLimits

0x8463,	// (0x0003684a) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0003dc7f) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0003dc7f) popup_midp_note_alarm_window_t

0x850f,	// (0x000368f6) wait_bar_pane_cp1_ParamLimits

0x850f,	// (0x000368f6) wait_bar_pane_cp1

0x43a4,	// (0x0003278b) wait_anim_pane_copy1

0x43a4,	// (0x0003278b) wait_border_pane_copy1

0x7f68,	// (0x0003634f) wait_border_pane_g1_copy1

0x391a,	// (0x00031d01) form_field_popup_pane_g1

0xcac8,	// (0x0003aeaf) form_field_popup_pane_t1_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_cp7_ParamLimits

0x4c25,	// (0x0003300c) list_form_pane_ParamLimits

0x393a,	// (0x00031d21) form_field_popup_wide_pane_g1

0x3942,	// (0x00031d29) form_field_popup_wide_pane_t1_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_cp8_ParamLimits

0x4c5f,	// (0x00033046) list_form_wide_pane_ParamLimits

0x8c24,	// (0x0003700b) aid_size_cell_graphic_pane

0xcb45,	// (0x0003af2c) data_form_pane_t1_ParamLimits

0xcc57,	// (0x0003b03e) data_form_wide_pane_t1_ParamLimits

0x162c,	// (0x0002fa13) bg_status_flat_pane

0x0643,	// (0x0002ea2a) title_pane_t1_ParamLimits

0x4500,	// (0x000328e7) title_pane_t2_ParamLimits

0x4526,	// (0x0003290d) title_pane_t3_ParamLimits

0xf557,	// (0x0003d93e) title_pane_t_ParamLimits

0x128a,	// (0x0002f671) level_1_signal_ParamLimits

0x129c,	// (0x0002f683) level_2_signal_ParamLimits

0x12af,	// (0x0002f696) level_3_signal_ParamLimits

0x12c2,	// (0x0002f6a9) level_4_signal_ParamLimits

0x12d5,	// (0x0002f6bc) level_5_signal_ParamLimits

0x12e8,	// (0x0002f6cf) level_6_signal_ParamLimits

0x12fb,	// (0x0002f6e2) level_7_signal_ParamLimits

0x128a,	// (0x0002f671) level_1_battery_ParamLimits

0x129c,	// (0x0002f683) level_2_battery_ParamLimits

0x12af,	// (0x0002f696) level_3_battery_ParamLimits

0x12c2,	// (0x0002f6a9) level_4_battery_ParamLimits

0x12d5,	// (0x0002f6bc) level_5_battery_ParamLimits

0x12e8,	// (0x0002f6cf) level_6_battery_ParamLimits

0x12fb,	// (0x0002f6e2) level_7_battery_ParamLimits

0x8151,	// (0x00036538) bg_status_flat_pane_g1

0x8159,	// (0x00036540) bg_status_flat_pane_g2

0x8161,	// (0x00036548) bg_status_flat_pane_g3

0x8169,	// (0x00036550) bg_status_flat_pane_g4

0x8171,	// (0x00036558) bg_status_flat_pane_g5

0x8179,	// (0x00036560) bg_status_flat_pane_g6

0x8181,	// (0x00036568) bg_status_flat_pane_g7

0x06d0,	// (0x0002eab7) tabs_3_active_pane_t1_ParamLimits

0x06d0,	// (0x0002eab7) tabs_3_passive_pane_t1_ParamLimits

0x06e6,	// (0x0002eacd) tabs_4_active_pane_t1_ParamLimits

0x06e6,	// (0x0002eacd) tabs_4_1_passive_pane_t1_ParamLimits

0x118e,	// (0x0002f575) tabs_2_active_pane_t1_ParamLimits

0x118e,	// (0x0002f575) tabs_2_passive_pane_t1_ParamLimits

0x4538,	// (0x0003291f) bg_active_tab_pane_cp4_ParamLimits

0x11a4,	// (0x0002f58b) tabs_2_long_active_pane_t1_ParamLimits

0x5521,	// (0x00033908) bg_passive_tab_pane_cp4_ParamLimits

0x5a1d,	// (0x00033e04) list_single_midp_graphic_pane_t1_ParamLimits

0x4538,	// (0x0003291f) bg_active_tab_pane_cp5_ParamLimits

0x11bb,	// (0x0002f5a2) tabs_3_long_active_pane_t1_ParamLimits

0x5521,	// (0x00033908) bg_passive_tab_pane_cp5_ParamLimits

0x5a1d,	// (0x00033e04) list_single_midp_graphic_pane_t1

0x162c,	// (0x0002fa13) bg_status_flat_pane_ParamLimits

0x78ed,	// (0x00035cd4) indicator_pane_cp2_ParamLimits

0x78ed,	// (0x00035cd4) indicator_pane_cp2

0x1792,	// (0x0002fb79) navi_pane_srt_ParamLimits

0x1792,	// (0x0002fb79) navi_pane_srt

0x7915,	// (0x00035cfc) popup_clock_digital_analogue_window_cp1

0x460e,	// (0x000329f5) indicator_pane_t1

0x7682,	// (0x00035a69) copy_highlight_pane

0x7682,	// (0x00035a69) cursor_graphics_pane

0x7682,	// (0x00035a69) graphic_within_text_pane

0x7682,	// (0x00035a69) link_highlight_pane

0x8867,	// (0x00036c4e) popup_preview_text_window_t5_ParamLimits

0x8867,	// (0x00036c4e) popup_preview_text_window_t5

0x76fd,	// (0x00035ae4) cursor_digital_pane

0x76fd,	// (0x00035ae4) cursor_primary_pane

0x770e,	// (0x00035af5) cursor_primary_small_pane

0x7716,	// (0x00035afd) cursor_secondary_pane

0x771e,	// (0x00035b05) cursor_title_pane

0x76fd,	// (0x00035ae4) link_highlight_digital_pane

0x7705,	// (0x00035aec) link_highlight_primary_pane

0x770e,	// (0x00035af5) link_highlight_primary_small_pane

0x7716,	// (0x00035afd) link_highlight_secondary_pane

0x771e,	// (0x00035b05) link_highlight_title_pane

0x76fd,	// (0x00035ae4) copy_highlight_digital_pane

0x76fd,	// (0x00035ae4) copy_highlight_primary_pane

0x770e,	// (0x00035af5) copy_highlight_primary_small_pane

0x7716,	// (0x00035afd) copy_highlight_secondary_pane

0x771e,	// (0x00035b05) copy_highlight_title_pane

0x7716,	// (0x00035afd) graphic_text_digital_pane

0x81d1,	// (0x000365b8) graphic_text_primary_pane

0x81da,	// (0x000365c1) graphic_text_primary_small_pane

0x770e,	// (0x00035af5) graphic_text_secondary_pane

0x76fd,	// (0x00035ae4) graphic_text_title_pane

0x14ae,	// (0x0002f895) cursor_primary_pane_g1

0x81c3,	// (0x000365aa) cursor_text_primary_t1

0x1994,	// (0x0002fd7b) cursor_primary_small_pane_g1

0x81b5,	// (0x0003659c) cursor_text_primary_small_t1

0x198a,	// (0x0002fd71) cursor_primary_small_pane_g1_copy1

0x81a7,	// (0x0003658e) cursor_text_primary_small_t1_copy1

0x8199,	// (0x00036580) cursor_text_title_t1

0x1980,	// (0x0002fd67) cursor_title_pane_g1

0x14ae,	// (0x0002f895) cursor_digital_pane_g1

0x7726,	// (0x00035b0d) cursor_text_digital_t1

0x7734,	// (0x00035b1b) link_highlight_primary_pane_g1

0x8142,	// (0x00036529) link_highlight_primary_pane_t1

0x7734,	// (0x00035b1b) link_highlight_primary_small_pane_g1

0x773c,	// (0x00035b23) link_highlight_primary_small_pane_t1

0x774b,	// (0x00035b32) link_highlight_secondary_pane_g1

0x7753,	// (0x00035b3a) link_highlight_secondary_pane_t1

0x80a7,	// (0x0003648e) link_highlight_title_pane_g1

0x80be,	// (0x000364a5) link_highlight_title_pane_t1

0x80a7,	// (0x0003648e) link_highlight_digital_pane_g1

0x80af,	// (0x00036496) link_highlight_digital_pane_t1

0x7f83,	// (0x0003636a) copy_highlight_primary_pane_g1

0x7fa9,	// (0x00036390) copy_highlight_primary_pane_t1

0x7f83,	// (0x0003636a) copy_highlight_primary_small_pane_g1

0x7f9a,	// (0x00036381) copy_highlight_primary_small_pane_t1

0x7762,	// (0x00035b49) copy_highlight_secondary_pane_g1

0x776a,	// (0x00035b51) copy_highlight_secondary_pane_t1

0x7f83,	// (0x0003636a) copy_highlight_title_pane_g1

0x7f8b,	// (0x00036372) copy_highlight_title_pane_t1

0x7f83,	// (0x0003636a) copy_highlight_digital_pane_g1

0x8d45,	// (0x0003712c) copy_highlight_digital_pane_t1

0x8c99,	// (0x00037080) graphic_text_primary_pane_g1

0x8d29,	// (0x00037110) graphic_text_primary_pane_t1

0x8d37,	// (0x0003711e) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0003ddae) graphic_text_primary_pane_t

0x8d05,	// (0x000370ec) graphic_text_primary_small_pane_g1

0x8d0d,	// (0x000370f4) graphic_text_primary_small_pane_t1

0x8d1b,	// (0x00037102) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0003dda9) graphic_text_primary_small_pane_t

0x8ce1,	// (0x000370c8) graphic_text_secondary_pane_g1

0x8ce9,	// (0x000370d0) graphic_text_secondary_pane_t1

0x8cf7,	// (0x000370de) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0003dda4) graphic_text_secondary_pane_t

0x8cbd,	// (0x000370a4) graphic_text_title_pane_g1

0x8cc5,	// (0x000370ac) graphic_text_title_pane_t1

0x8cd3,	// (0x000370ba) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0003dd9f) graphic_text_title_pane_t

0x8c99,	// (0x00037080) graphic_text_digital_pane_g1

0x8ca1,	// (0x00037088) graphic_text_digital_pane_t1

0x8caf,	// (0x00037096) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0003dd9a) graphic_text_digital_pane_t

0x4538,	// (0x0003291f) navi_icon_pane_srt_ParamLimits

0x4538,	// (0x0003291f) navi_icon_pane_srt

0x43a4,	// (0x0003278b) navi_midp_pane_srt

0x43a4,	// (0x0003278b) navi_navi_pane_srt

0x4538,	// (0x0003291f) navi_text_pane_srt_ParamLimits

0x4538,	// (0x0003291f) navi_text_pane_srt

0x86f3,	// (0x00036ada) navi_navi_icon_text_pane_srt

0x86fb,	// (0x00036ae2) navi_navi_pane_srt_g1_ParamLimits

0x86fb,	// (0x00036ae2) navi_navi_pane_srt_g1

0x870d,	// (0x00036af4) navi_navi_pane_srt_g2_ParamLimits

0x870d,	// (0x00036af4) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0003dd95) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0003dd95) navi_navi_pane_srt_g

0x871f,	// (0x00036b06) navi_navi_tabs_pane_srt

0x86f3,	// (0x00036ada) navi_navi_text_pane_srt

0x86f3,	// (0x00036ada) navi_navi_volume_pane_srt

0x8c8a,	// (0x00037071) navi_navi_text_pane_srt_t1

0x5dde,	// (0x000341c5) navi_navi_volume_pane_srt_g1

0x5de6,	// (0x000341cd) volume_small_pane_srt_ParamLimits

0x5de6,	// (0x000341cd) volume_small_pane_srt

0x530c,	// (0x000336f3) volume_small_pane_srt_g1_ParamLimits

0x530c,	// (0x000336f3) volume_small_pane_srt_g1

0x531c,	// (0x00033703) volume_small_pane_srt_g2_ParamLimits

0x531c,	// (0x00033703) volume_small_pane_srt_g2

0x532d,	// (0x00033714) volume_small_pane_srt_g3_ParamLimits

0x532d,	// (0x00033714) volume_small_pane_srt_g3

0x533e,	// (0x00033725) volume_small_pane_srt_g4_ParamLimits

0x533e,	// (0x00033725) volume_small_pane_srt_g4

0x534f,	// (0x00033736) volume_small_pane_srt_g5_ParamLimits

0x534f,	// (0x00033736) volume_small_pane_srt_g5

0x5360,	// (0x00033747) volume_small_pane_srt_g6_ParamLimits

0x5360,	// (0x00033747) volume_small_pane_srt_g6

0x5371,	// (0x00033758) volume_small_pane_srt_g7_ParamLimits

0x5371,	// (0x00033758) volume_small_pane_srt_g7

0x5382,	// (0x00033769) volume_small_pane_srt_g8_ParamLimits

0x5382,	// (0x00033769) volume_small_pane_srt_g8

0x5393,	// (0x0003377a) volume_small_pane_srt_g9_ParamLimits

0x5393,	// (0x0003377a) volume_small_pane_srt_g9

0x53a4,	// (0x0003378b) volume_small_pane_srt_g10_ParamLimits

0x53a4,	// (0x0003378b) volume_small_pane_srt_g10

0x0009,

0xf762,	// (0x0003db49) volume_small_pane_srt_g_ParamLimits

0xf762,	// (0x0003db49) volume_small_pane_srt_g

0x4882,	// (0x00032c69) query_popup_data_pane_cp2

0x8c70,	// (0x00037057) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x8c70,	// (0x00037057) navi_navi_icon_text_pane_srt_t1

0x81d1,	// (0x000365b8) navi_tabs_2_long_pane_srt

0x81d1,	// (0x000365b8) navi_tabs_2_pane_srt

0x81d1,	// (0x000365b8) navi_tabs_3_long_pane_srt

0x81d1,	// (0x000365b8) navi_tabs_3_pane_srt

0x81d1,	// (0x000365b8) navi_tabs_4_pane_srt

0x5dbe,	// (0x000341a5) tabs_2_active_pane_srt_ParamLimits

0x5dbe,	// (0x000341a5) tabs_2_active_pane_srt

0x5dce,	// (0x000341b5) tabs_2_passive_pane_srt_ParamLimits

0x5dce,	// (0x000341b5) tabs_2_passive_pane_srt

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp1_srt_ParamLimits

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp1_srt

0x8c4e,	// (0x00037035) bg_passive_tab_pane_g1_cp1_srt

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp1_srt

0x8c57,	// (0x0003703e) bg_passive_tab_pane_g3_cp1_srt

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp1_srt_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp1_srt

0x8c60,	// (0x00037047) tabs_2_active_pane_srt_g1

0x118e,	// (0x0002f575) tabs_2_active_pane_srt_t1_ParamLimits

0x118e,	// (0x0002f575) tabs_2_active_pane_srt_t1

0x8c4e,	// (0x00037035) bg_active_tab_pane_g1_cp1_srt

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp1_srt

0x8c57,	// (0x0003703e) bg_active_tab_pane_g3_cp1_srt

0x5d8b,	// (0x00034172) tabs_3_active_pane_srt_ParamLimits

0x5d8b,	// (0x00034172) tabs_3_active_pane_srt

0x5d9c,	// (0x00034183) tabs_3_passive_pane_cp_srt_ParamLimits

0x5d9c,	// (0x00034183) tabs_3_passive_pane_cp_srt

0x5dad,	// (0x00034194) tabs_3_passive_pane_srt_ParamLimits

0x5dad,	// (0x00034194) tabs_3_passive_pane_srt

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp2_srt_ParamLimits

0x7a9a,	// (0x00035e81) bg_passive_tab_pane_cp2_srt

0x7779,	// (0x00035b60) bg_passive_tab_pane_g1_cp2_srt

0x738c,	// (0x00035773) bg_passive_tab_pane_g2_cp2_srt

0x7782,	// (0x00035b69) bg_passive_tab_pane_g3_cp2_srt

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp2_srt_ParamLimits

0x46fd,	// (0x00032ae4) bg_active_tab_pane_cp2_srt

0x8c46,	// (0x0003702d) tabs_3_active_pane_srt_g1

0x06d0,	// (0x0002eab7) tabs_3_active_pane_srt_t1_ParamLimits

0x06d0,	// (0x0002eab7) tabs_3_active_pane_srt_t1

0x7779,	// (0x00035b60) bg_active_tab_pane_g1_cp2_srt

0x738c,	// (0x00035773) bg_active_tab_pane_g2_cp2_srt

0x7782,	// (0x00035b69) bg_active_tab_pane_g3_cp2_srt

0x5d43,	// (0x0003412a) tabs_4_active_pane_srt_ParamLimits

0x5d43,	// (0x0003412a) tabs_4_active_pane_srt

0x5d55,	// (0x0003413c) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5d55,	// (0x0003413c) tabs_4_passive_pane_cp2_srt

0x5509,	// (0x000338f0) aid_size_cell_toolbar

0xd1b5,	// (0x0003b59c) main_idle_act_pane_ParamLimits

0x5676,	// (0x00033a5d) popup_large_graphic_colour_window_ParamLimits

0xd713,	// (0x0003bafa) popup_toolbar_window_ParamLimits

0xd713,	// (0x0003bafa) popup_toolbar_window

0x5cfe,	// (0x000340e5) list_single_graphic_2heading_pane_ParamLimits

0x5cfe,	// (0x000340e5) list_single_graphic_2heading_pane

0x508e,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane

0x50a0,	// (0x00033487) aid_size_cell_apps_grid_prt_pane

0x5521,	// (0x00033908) bg_wml_button_pane_cp1_ParamLimits

0x5521,	// (0x00033908) bg_wml_button_pane_cp1

0x7c44,	// (0x0003602b) form_midp_field_text_pane_t1_ParamLimits

0x7a9a,	// (0x00035e81) input_focus_pane_cp050_ParamLimits

0x7c65,	// (0x0003604c) list_midp_form_text_pane_ParamLimits

0x7c21,	// (0x00036008) input_focus_pane_cp051_ParamLimits

0x7c35,	// (0x0003601c) list_midp_choice_pane_ParamLimits

0x7b1e,	// (0x00035f05) list_single_2graphic_pane_cp3_ParamLimits

0x7b1e,	// (0x00035f05) list_single_2graphic_pane_cp3

0x7b31,	// (0x00035f18) list_single_midp_graphic_pane_ParamLimits

0x7b31,	// (0x00035f18) list_single_midp_graphic_pane

0x3b15,	// (0x00031efc) list_single_graphic_2heading_pane_g1_ParamLimits

0x3b15,	// (0x00031efc) list_single_graphic_2heading_pane_g1

0x3b21,	// (0x00031f08) list_single_graphic_2heading_pane_g4_ParamLimits

0x3b21,	// (0x00031f08) list_single_graphic_2heading_pane_g4

0x36d1,	// (0x00031ab8) list_single_graphic_2heading_pane_g5_ParamLimits

0x36d1,	// (0x00031ab8) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b5,	// (0x0003db9c) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b5,	// (0x0003db9c) list_single_graphic_2heading_pane_g

0x3b2d,	// (0x00031f14) list_single_graphic_2heading_pane_t1_ParamLimits

0x3b2d,	// (0x00031f14) list_single_graphic_2heading_pane_t1

0x3b41,	// (0x00031f28) list_single_graphic_2heading_pane_t2_ParamLimits

0x3b41,	// (0x00031f28) list_single_graphic_2heading_pane_t2

0x3b5b,	// (0x00031f42) list_single_graphic_2heading_pane_t3_ParamLimits

0x3b5b,	// (0x00031f42) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bc,	// (0x0003dba3) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bc,	// (0x0003dba3) list_single_graphic_2heading_pane_t

0x7964,	// (0x00035d4b) bg_popup_sub_pane_cp2

0x798a,	// (0x00035d71) grid_toobar_pane

0x59b9,	// (0x00033da0) cell_toolbar_pane_ParamLimits

0x59b9,	// (0x00033da0) cell_toolbar_pane

0x79c0,	// (0x00035da7) cell_toolbar_pane_g1_ParamLimits

0x79c0,	// (0x00035da7) cell_toolbar_pane_g1

0x79d2,	// (0x00035db9) cell_toolbar_pane_g2_ParamLimits

0x79d2,	// (0x00035db9) cell_toolbar_pane_g2

0x0001,

0xf7c3,	// (0x0003dbaa) cell_toolbar_pane_g_ParamLimits

0xf7c3,	// (0x0003dbaa) cell_toolbar_pane_g

0x79f4,	// (0x00035ddb) grid_highlight_pane_cp2_ParamLimits

0x79f4,	// (0x00035ddb) grid_highlight_pane_cp2

0x7a0e,	// (0x00035df5) toolbar_button_pane

0x7a1a,	// (0x00035e01) toolbar_button_pane_g1

0x7a22,	// (0x00035e09) toolbar_button_pane_g2

0x7a2a,	// (0x00035e11) toolbar_button_pane_g3

0x7a32,	// (0x00035e19) toolbar_button_pane_g4

0x7a3a,	// (0x00035e21) toolbar_button_pane_g5

0x7a42,	// (0x00035e29) toolbar_button_pane_g6

0x7a4a,	// (0x00035e31) toolbar_button_pane_g7

0x7a52,	// (0x00035e39) toolbar_button_pane_g8

0x7a5a,	// (0x00035e41) toolbar_button_pane_g9

0x0009,

0xf7c8,	// (0x0003dbaf) toolbar_button_pane_g

0x59e8,	// (0x00033dcf) list_single_2graphic_pane_g1_cp3_ParamLimits

0x59e8,	// (0x00033dcf) list_single_2graphic_pane_g1_cp3

0xd755,	// (0x0003bb3c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd755,	// (0x0003bb3c) list_single_2graphic_pane_g2_cp3

0x7503,	// (0x000358ea) list_single_2graphic_pane_g3_cp3

0x7a62,	// (0x00035e49) list_single_2graphic_pane_g4_cp3_ParamLimits

0x7a62,	// (0x00035e49) list_single_2graphic_pane_g4_cp3

0x5a03,	// (0x00033dea) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5a03,	// (0x00033dea) list_single_2graphic_pane_t1_cp3

0x74f7,	// (0x000358de) list_single_midp_graphic_pane_g2_ParamLimits

0x74f7,	// (0x000358de) list_single_midp_graphic_pane_g2

0x3ae8,	// (0x00031ecf) aid_zoom_text_primary

0x5511,	// (0x000338f8) aid_zoom_text_secondary

0x14e8,	// (0x0002f8cf) status_small_pane_g7_ParamLimits

0x14e8,	// (0x0002f8cf) status_small_pane_g7

0x150b,	// (0x0002f8f2) status_small_pane_t1_ParamLimits

0x0618,	// (0x0002e9ff) title_pane_g2

0x0003,

0xf54e,	// (0x0003d935) title_pane_g

0x1095,	// (0x0002f47c) aid_size_cell_colour_1_pane_ParamLimits

0x1095,	// (0x0002f47c) aid_size_cell_colour_1_pane

0x10a9,	// (0x0002f490) aid_size_cell_colour_2_pane_ParamLimits

0x10a9,	// (0x0002f490) aid_size_cell_colour_2_pane

0x10bd,	// (0x0002f4a4) aid_size_cell_colour_3_pane_ParamLimits

0x10bd,	// (0x0002f4a4) aid_size_cell_colour_3_pane

0x10d1,	// (0x0002f4b8) aid_size_cell_colour_4_pane_ParamLimits

0x10d1,	// (0x0002f4b8) aid_size_cell_colour_4_pane

0x4f3d,	// (0x00033324) title_pane_stacon_g1_ParamLimits

0x4f3d,	// (0x00033324) title_pane_stacon_g1

0x8000,	// (0x000363e7) popup_note_wait_window_g3_ParamLimits

0x8000,	// (0x000363e7) popup_note_wait_window_g3

0x8076,	// (0x0003645d) popup_note_wait_window_t5_ParamLimits

0x8076,	// (0x0003645d) popup_note_wait_window_t5

0x43a4,	// (0x0003278b) main_feb_china_hwr_fs_writing_pane

0xd216,	// (0x0003b5fd) popup_feb_china_hwr_fs_window_ParamLimits

0xd216,	// (0x0003b5fd) popup_feb_china_hwr_fs_window

0xd766,	// (0x0003bb4d) aid_size_cell_hwr_fs_ParamLimits

0xd766,	// (0x0003bb4d) aid_size_cell_hwr_fs

0x7a9a,	// (0x00035e81) bg_popup_sub_pane_cp3_ParamLimits

0x7a9a,	// (0x00035e81) bg_popup_sub_pane_cp3

0xd77b,	// (0x0003bb62) grid_hwr_fs_pane_ParamLimits

0xd77b,	// (0x0003bb62) grid_hwr_fs_pane

0x5a74,	// (0x00033e5b) linegrid_hwr_fs_pane_ParamLimits

0x5a74,	// (0x00033e5b) linegrid_hwr_fs_pane

0xd793,	// (0x0003bb7a) cell_hwr_fs_pane_ParamLimits

0xd793,	// (0x0003bb7a) cell_hwr_fs_pane

0x7aa6,	// (0x00035e8d) linegrid_hwr_fs_pane_g1_ParamLimits

0x7aa6,	// (0x00035e8d) linegrid_hwr_fs_pane_g1

0x1910,	// (0x0002fcf7) linegrid_hwr_fs_pane_g2_ParamLimits

0x1910,	// (0x0002fcf7) linegrid_hwr_fs_pane_g2

0x7ab2,	// (0x00035e99) linegrid_hwr_fs_pane_g3_ParamLimits

0x7ab2,	// (0x00035e99) linegrid_hwr_fs_pane_g3

0x5aa2,	// (0x00033e89) linegrid_hwr_fs_pane_g4_ParamLimits

0x5aa2,	// (0x00033e89) linegrid_hwr_fs_pane_g4

0x5abc,	// (0x00033ea3) linegrid_hwr_fs_pane_g5_ParamLimits

0x5abc,	// (0x00033ea3) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0003dbd5) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0003dbd5) linegrid_hwr_fs_pane_g

0x7abe,	// (0x00035ea5) cell_hwr_fs_pane_g1_ParamLimits

0x7abe,	// (0x00035ea5) cell_hwr_fs_pane_g1

0x7932,	// (0x00035d19) cell_hwr_fs_pane_g2_ParamLimits

0x7932,	// (0x00035d19) cell_hwr_fs_pane_g2

0x1922,	// (0x0002fd09) cell_hwr_fs_pane_g3_ParamLimits

0x1922,	// (0x0002fd09) cell_hwr_fs_pane_g3

0x192f,	// (0x0002fd16) cell_hwr_fs_pane_g4_ParamLimits

0x192f,	// (0x0002fd16) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0003dbe0) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0003dbe0) cell_hwr_fs_pane_g

0xd7b3,	// (0x0003bb9a) cell_hwr_fs_pane_t1

0x43a4,	// (0x0003278b) grid_highlight_pane_cp6

0x43a4,	// (0x0003278b) main_idle_act2_pane

0x4d5b,	// (0x00033142) aid_inside_area_popup_secondary

0x19b4,	// (0x0002fd9b) aid_inside_area_window_primary_ParamLimits

0x19b4,	// (0x0002fd9b) aid_inside_area_window_primary

0x8d54,	// (0x0003713b) ai2_news_ticker_pane

0x8d5c,	// (0x00037143) aid_size_cell_ai1_link_ParamLimits

0x8d5c,	// (0x00037143) aid_size_cell_ai1_link

0x1d51,	// (0x00030138) popup_ai2_data_window_ParamLimits

0x1d51,	// (0x00030138) popup_ai2_data_window

0x8d76,	// (0x0003715d) popup_ai2_link_window_ParamLimits

0x8d76,	// (0x0003715d) popup_ai2_link_window

0x7a9a,	// (0x00035e81) bg_popup_sub_pane_cp4_ParamLimits

0x7a9a,	// (0x00035e81) bg_popup_sub_pane_cp4

0x8d8a,	// (0x00037171) grid_ai2_link_pane_ParamLimits

0x8d8a,	// (0x00037171) grid_ai2_link_pane

0x8da1,	// (0x00037188) popup_ai2_link_window_g1_ParamLimits

0x8da1,	// (0x00037188) popup_ai2_link_window_g1

0x8dad,	// (0x00037194) popup_ai2_link_window_g2_ParamLimits

0x8dad,	// (0x00037194) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0003ddb3) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0003ddb3) popup_ai2_link_window_g

0x8dbc,	// (0x000371a3) ai2_mp_button_pane

0x8dc4,	// (0x000371ab) ai2_mp_volume_pane

0x7c21,	// (0x00036008) bg_popup_sub_pane_cp5_ParamLimits

0x7c21,	// (0x00036008) bg_popup_sub_pane_cp5

0x8dcc,	// (0x000371b3) heading_ai2_gene_pane_ParamLimits

0x8dcc,	// (0x000371b3) heading_ai2_gene_pane

0x8dd8,	// (0x000371bf) list_ai2_gene_pane_ParamLimits

0x8dd8,	// (0x000371bf) list_ai2_gene_pane

0x8e20,	// (0x00037207) cell_ai2_link_pane_ParamLimits

0x8e20,	// (0x00037207) cell_ai2_link_pane

0x8e36,	// (0x0003721d) cell_ai2_link_pane_g1

0x43a4,	// (0x0003278b) grid_highlight_pane_cp7

0x5dfb,	// (0x000341e2) ai2_mp_volume_pane_g1

0x8ecb,	// (0x000372b2) ai2_mp_volume_pane_g2

0x1d7b,	// (0x00030162) list_ai2_gene_pane_t1

0x8ed3,	// (0x000372ba) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0003ddcc) ai2_mp_volume_pane_g

0x5e03,	// (0x000341ea) volume_small_pane_cp3

0x8edb,	// (0x000372c2) aid_size_cell_ai2_button

0x8ee3,	// (0x000372ca) grid_ai2_button_pane

0x8eec,	// (0x000372d3) cell_ai2_button_pane_ParamLimits

0x8eec,	// (0x000372d3) cell_ai2_button_pane

0x41e5,	// (0x000325cc) cell_ai2_button_pane_g1

0x43a4,	// (0x0003278b) grid_highlight_pane_cp8

0x8e8b,	// (0x00037272) ai2_gene_pane_t1_ParamLimits

0x8e8b,	// (0x00037272) ai2_gene_pane_t1

0xd180,	// (0x0003b567) aid_height_parent_landscape

0x1afd,	// (0x0002fee4) aid_height_set_list

0x8b48,	// (0x00036f2f) aid_size_parent

0x8c24,	// (0x0003700b) aid_size_cell_graphic_pane_ParamLimits

0x8de8,	// (0x000371cf) popup_ai2_data_window_g1_ParamLimits

0x8de8,	// (0x000371cf) popup_ai2_data_window_g1

0x8df4,	// (0x000371db) ai2_news_ticker_pane_g1

0x8dfc,	// (0x000371e3) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0003ddb8) ai2_news_ticker_pane_g

0x8e04,	// (0x000371eb) ai2_news_ticker_pane_t1

0x8e12,	// (0x000371f9) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0003ddbd) ai2_news_ticker_pane_t

0x8c05,	// (0x00036fec) heading_ai2_gene_pane_g1

0x8e3f,	// (0x00037226) heading_ai2_gene_pane_t1_ParamLimits

0x8e3f,	// (0x00037226) heading_ai2_gene_pane_t1

0x8e54,	// (0x0003723b) list_highlight_pane_cp6

0x1d65,	// (0x0003014c) ai2_gene_pane_ParamLimits

0x1d65,	// (0x0003014c) ai2_gene_pane

0x1d89,	// (0x00030170) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0003ddc2) list_ai2_gene_pane_t

0x8e5c,	// (0x00037243) list_highlight_pane_cp8_ParamLimits

0x8e5c,	// (0x00037243) list_highlight_pane_cp8

0x8e6d,	// (0x00037254) ai2_gene_pane_g1_ParamLimits

0x8e6d,	// (0x00037254) ai2_gene_pane_g1

0x8e7f,	// (0x00037266) ai2_gene_pane_g2_ParamLimits

0x8e7f,	// (0x00037266) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0003ddc7) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0003ddc7) ai2_gene_pane_g

0x4b19,	// (0x00032f00) scroll_pane_cp12

0xd13f,	// (0x0003b526) control_pane_t3_ParamLimits

0xd13f,	// (0x0003b526) control_pane_t3

0x14fc,	// (0x0002f8e3) status_small_pane_g8_ParamLimits

0x14fc,	// (0x0002f8e3) status_small_pane_g8

0xd28a,	// (0x0003b671) popup_find_window_ParamLimits

0xd47d,	// (0x0003b864) popup_note_image_window_ParamLimits

0x3557,	// (0x0003193e) list_double2_graphic_pane_vc_g1_ParamLimits

0x3557,	// (0x0003193e) list_double2_graphic_pane_vc_g1

0x4b7d,	// (0x00032f64) list_double2_graphic_pane_vc_g2_ParamLimits

0x4b7d,	// (0x00032f64) list_double2_graphic_pane_vc_g2

0x4b89,	// (0x00032f70) list_double2_graphic_pane_vc_g3_ParamLimits

0x4b89,	// (0x00032f70) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x0003d9a8) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003d9a8) list_double2_graphic_pane_vc_g

0x352f,	// (0x00031916) list_double2_graphic_pane_vc_t1_ParamLimits

0x352f,	// (0x00031916) list_double2_graphic_pane_vc_t1

0x4b7d,	// (0x00032f64) list_single_heading_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_single_heading_pane_vc_g1

0x4b89,	// (0x00032f70) list_single_heading_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_single_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_single_heading_pane_vc_g

0x3b73,	// (0x00031f5a) list_single_heading_pane_vc_t1_ParamLimits

0x3b73,	// (0x00031f5a) list_single_heading_pane_vc_t1

0x3b89,	// (0x00031f70) list_single_heading_pane_vc_t2_ParamLimits

0x3b89,	// (0x00031f70) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0003dbc4) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0003dbc4) list_single_heading_pane_vc_t

0x5a33,	// (0x00033e1a) list_setting_number_pane_vc_g1_ParamLimits

0x5a33,	// (0x00033e1a) list_setting_number_pane_vc_g1

0x5a3f,	// (0x00033e26) list_setting_number_pane_vc_g2_ParamLimits

0x5a3f,	// (0x00033e26) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0003dbc9) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0003dbc9) list_setting_number_pane_vc_g

0x3b9b,	// (0x00031f82) list_setting_number_pane_vc_t1_ParamLimits

0x3b9b,	// (0x00031f82) list_setting_number_pane_vc_t1

0x3baf,	// (0x00031f96) list_setting_number_pane_vc_t2_ParamLimits

0x3baf,	// (0x00031f96) list_setting_number_pane_vc_t2

0x3bcb,	// (0x00031fb2) list_setting_number_pane_vc_t3_ParamLimits

0x3bcb,	// (0x00031fb2) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0003dbce) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0003dbce) list_setting_number_pane_vc_t

0x3bf1,	// (0x00031fd8) set_value_pane_vc_ParamLimits

0x3bf1,	// (0x00031fd8) set_value_pane_vc

0x5cfe,	// (0x000340e5) list_double2_graphic_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double2_graphic_pane_vc

0x8ba3,	// (0x00036f8a) list_double2_large_graphic_pane_vc_ParamLimits

0x8ba3,	// (0x00036f8a) list_double2_large_graphic_pane_vc

0x5cfe,	// (0x000340e5) list_double2_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double2_pane_vc

0x5cfe,	// (0x000340e5) list_double_graphic_heading_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_graphic_heading_pane_vc

0x5cfe,	// (0x000340e5) list_double_graphic_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_graphic_pane_vc

0x5cfe,	// (0x000340e5) list_double_heading_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_heading_pane_vc

0x5d11,	// (0x000340f8) list_double_large_graphic_pane_vc_ParamLimits

0x5d11,	// (0x000340f8) list_double_large_graphic_pane_vc

0x5cfe,	// (0x000340e5) list_double_number_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_number_pane_vc

0x5cfe,	// (0x000340e5) list_double_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_pane_vc

0x5cfe,	// (0x000340e5) list_double_time_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_double_time_pane_vc

0x5cfe,	// (0x000340e5) list_setting_number_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_setting_number_pane_vc

0x5cfe,	// (0x000340e5) list_setting_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_setting_pane_vc

0x5cfe,	// (0x000340e5) list_single_graphic_heading_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_single_graphic_heading_pane_vc

0x5cfe,	// (0x000340e5) list_single_heading_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_single_heading_pane_vc

0x5cfe,	// (0x000340e5) list_single_number_heading_pane_vc_ParamLimits

0x5cfe,	// (0x000340e5) list_single_number_heading_pane_vc

0x3557,	// (0x0003193e) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3557,	// (0x0003193e) list_double_graphic_heading_pane_vc_g1

0x4b7d,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4b7d,	// (0x00032f64) list_double_graphic_heading_pane_vc_g2

0x4b89,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x4b89,	// (0x00032f70) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x0003d9a8) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003d9a8) list_double_graphic_heading_pane_vc_g

0x3ccb,	// (0x000320b2) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x3ccb,	// (0x000320b2) list_double_graphic_heading_pane_vc_t1

0x3ce1,	// (0x000320c8) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3ce1,	// (0x000320c8) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ec,	// (0x0003ddd3) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ec,	// (0x0003ddd3) list_double_graphic_heading_pane_vc_t

0x5a33,	// (0x00033e1a) list_setting_pane_vc_g1_ParamLimits

0x5a33,	// (0x00033e1a) list_setting_pane_vc_g1

0x5a3f,	// (0x00033e26) list_setting_pane_vc_g2_ParamLimits

0x5a3f,	// (0x00033e26) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0003dbc9) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0003dbc9) list_setting_pane_vc_g

0x3cf9,	// (0x000320e0) list_setting_pane_vc_t1_ParamLimits

0x3cf9,	// (0x000320e0) list_setting_pane_vc_t1

0x3d0d,	// (0x000320f4) list_setting_pane_vc_t2_ParamLimits

0x3d0d,	// (0x000320f4) list_setting_pane_vc_t2

0x0001,

0xfa2f,	// (0x0003de16) list_setting_pane_vc_t_ParamLimits

0xfa2f,	// (0x0003de16) list_setting_pane_vc_t

0x3bf1,	// (0x00031fd8) set_value_pane_cp_vc_ParamLimits

0x3bf1,	// (0x00031fd8) set_value_pane_cp_vc

0x4b7d,	// (0x00032f64) list_single_number_heading_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_single_number_heading_pane_vc_g1

0x4b89,	// (0x00032f70) list_single_number_heading_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_single_number_heading_pane_vc_g

0x3b73,	// (0x00031f5a) list_single_number_heading_pane_vc_t1_ParamLimits

0x3b73,	// (0x00031f5a) list_single_number_heading_pane_vc_t1

0x3d21,	// (0x00032108) list_single_number_heading_pane_vc_t2_ParamLimits

0x3d21,	// (0x00032108) list_single_number_heading_pane_vc_t2

0x3d33,	// (0x0003211a) list_single_number_heading_pane_vc_t3_ParamLimits

0x3d33,	// (0x0003211a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa34,	// (0x0003de1b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa34,	// (0x0003de1b) list_single_number_heading_pane_vc_t

0x3557,	// (0x0003193e) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3557,	// (0x0003193e) list_single_graphic_heading_pane_vc_g1

0x4b7d,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4b7d,	// (0x00032f64) list_single_graphic_heading_pane_vc_g4

0x4b89,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x4b89,	// (0x00032f70) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x0003d9a8) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x0003d9a8) list_single_graphic_heading_pane_vc_g

0x3b73,	// (0x00031f5a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x3b73,	// (0x00031f5a) list_single_graphic_heading_pane_vc_t1

0x3d45,	// (0x0003212c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3d45,	// (0x0003212c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3b,	// (0x0003de22) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0003de22) list_single_graphic_heading_pane_vc_t

0x4b7d,	// (0x00032f64) list_double2_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_double2_pane_vc_g1

0x4b89,	// (0x00032f70) list_double2_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_double2_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_double2_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_double2_pane_vc_g

0x34b2,	// (0x00031899) list_double2_pane_vc_t1_ParamLimits

0x34b2,	// (0x00031899) list_double2_pane_vc_t1

0x4b51,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x4b51,	// (0x00032f38) list_double2_large_graphic_pane_vc_g1

0x4b5d,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x4b5d,	// (0x00032f44) list_double2_large_graphic_pane_vc_g2

0x4b69,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x4b69,	// (0x00032f50) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5ea,	// (0x0003d9d1) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5ea,	// (0x0003d9d1) list_double2_large_graphic_pane_vc_g

0x349c,	// (0x00031883) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x349c,	// (0x00031883) list_double2_large_graphic_pane_vc_t1

0x5e5d,	// (0x00034244) list_double_time_pane_vc_g1_ParamLimits

0x5e5d,	// (0x00034244) list_double_time_pane_vc_g1

0x5e69,	// (0x00034250) list_double_time_pane_vc_g2_ParamLimits

0x5e69,	// (0x00034250) list_double_time_pane_vc_g2

0x0001,

0xfa40,	// (0x0003de27) list_double_time_pane_vc_g_ParamLimits

0xfa40,	// (0x0003de27) list_double_time_pane_vc_g

0x3d57,	// (0x0003213e) list_double_time_pane_vc_t1_ParamLimits

0x3d57,	// (0x0003213e) list_double_time_pane_vc_t1

0x3d75,	// (0x0003215c) list_double_time_pane_vc_t2_ParamLimits

0x3d75,	// (0x0003215c) list_double_time_pane_vc_t2

0x3db9,	// (0x000321a0) list_double_time_pane_vc_t3_ParamLimits

0x3db9,	// (0x000321a0) list_double_time_pane_vc_t3

0x3dcb,	// (0x000321b2) list_double_time_pane_vc_t4_ParamLimits

0x3dcb,	// (0x000321b2) list_double_time_pane_vc_t4

0x0003,

0xfa45,	// (0x0003de2c) list_double_time_pane_vc_t_ParamLimits

0xfa45,	// (0x0003de2c) list_double_time_pane_vc_t

0x4b7d,	// (0x00032f64) list_double_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_double_pane_vc_g1

0x4b89,	// (0x00032f70) list_double_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_double_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_double_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_double_pane_vc_g

0x3ddd,	// (0x000321c4) list_double_pane_vc_t1_ParamLimits

0x3ddd,	// (0x000321c4) list_double_pane_vc_t1

0x3def,	// (0x000321d6) list_double_pane_vc_t2_ParamLimits

0x3def,	// (0x000321d6) list_double_pane_vc_t2

0x0001,

0xfa4e,	// (0x0003de35) list_double_pane_vc_t_ParamLimits

0xfa4e,	// (0x0003de35) list_double_pane_vc_t

0x4b7d,	// (0x00032f64) list_double_number_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_double_number_pane_vc_g1

0x4b89,	// (0x00032f70) list_double_number_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_double_number_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_double_number_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_double_number_pane_vc_g

0x3e05,	// (0x000321ec) list_double_number_pane_vc_t1_ParamLimits

0x3e05,	// (0x000321ec) list_double_number_pane_vc_t1

0x3e19,	// (0x00032200) list_double_number_pane_vc_t2_ParamLimits

0x3e19,	// (0x00032200) list_double_number_pane_vc_t2

0x3e2b,	// (0x00032212) list_double_number_pane_vc_t3_ParamLimits

0x3e2b,	// (0x00032212) list_double_number_pane_vc_t3

0x0002,

0xfa53,	// (0x0003de3a) list_double_number_pane_vc_t_ParamLimits

0xfa53,	// (0x0003de3a) list_double_number_pane_vc_t

0x5e75,	// (0x0003425c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5e75,	// (0x0003425c) list_double_large_graphic_pane_vc_g1

0x5e9d,	// (0x00034284) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5e9d,	// (0x00034284) list_double_large_graphic_pane_vc_g2

0x5eb1,	// (0x00034298) list_double_large_graphic_pane_vc_g3_ParamLimits

0x5eb1,	// (0x00034298) list_double_large_graphic_pane_vc_g3

0x3e41,	// (0x00032228) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3e41,	// (0x00032228) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa5a,	// (0x0003de41) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa5a,	// (0x0003de41) list_double_large_graphic_pane_vc_g

0x3e51,	// (0x00032238) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3e51,	// (0x00032238) list_double_large_graphic_pane_vc_t1

0x3e6b,	// (0x00032252) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3e6b,	// (0x00032252) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa63,	// (0x0003de4a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa63,	// (0x0003de4a) list_double_large_graphic_pane_vc_t

0x4b7d,	// (0x00032f64) list_double_heading_pane_vc_g1_ParamLimits

0x4b7d,	// (0x00032f64) list_double_heading_pane_vc_g1

0x4b89,	// (0x00032f70) list_double_heading_pane_vc_g2_ParamLimits

0x4b89,	// (0x00032f70) list_double_heading_pane_vc_g2

0x0001,

0xf5d2,	// (0x0003d9b9) list_double_heading_pane_vc_g_ParamLimits

0xf5d2,	// (0x0003d9b9) list_double_heading_pane_vc_g

0x3e8b,	// (0x00032272) list_double_heading_pane_vc_t1_ParamLimits

0x3e8b,	// (0x00032272) list_double_heading_pane_vc_t1

0x3b73,	// (0x00031f5a) list_double_heading_pane_vc_t2_ParamLimits

0x3b73,	// (0x00031f5a) list_double_heading_pane_vc_t2

0x0001,

0xfa68,	// (0x0003de4f) list_double_heading_pane_vc_t_ParamLimits

0xfa68,	// (0x0003de4f) list_double_heading_pane_vc_t

0x3e9d,	// (0x00032284) list_double_graphic_pane_vc_g1_ParamLimits

0x3e9d,	// (0x00032284) list_double_graphic_pane_vc_g1

0x5ec0,	// (0x000342a7) list_double_graphic_pane_vc_g2_ParamLimits

0x5ec0,	// (0x000342a7) list_double_graphic_pane_vc_g2

0x4b7d,	// (0x00032f64) list_double_graphic_pane_vc_g3_ParamLimits

0x4b7d,	// (0x00032f64) list_double_graphic_pane_vc_g3

0x0003,

0xfa6d,	// (0x0003de54) list_double_graphic_pane_vc_g_ParamLimits

0xfa6d,	// (0x0003de54) list_double_graphic_pane_vc_g

0x3ea9,	// (0x00032290) list_double_graphic_pane_vc_t1_ParamLimits

0x3ea9,	// (0x00032290) list_double_graphic_pane_vc_t1

0x3ec7,	// (0x000322ae) list_double_graphic_pane_vc_t2_ParamLimits

0x3ec7,	// (0x000322ae) list_double_graphic_pane_vc_t2

0x0001,

0xfa76,	// (0x0003de5d) list_double_graphic_pane_vc_t_ParamLimits

0xfa76,	// (0x0003de5d) list_double_graphic_pane_vc_t

0x41ff,	// (0x000325e6) aid_size_cell_fastswap

0xce26,	// (0x0003b20d) aid_size_cell_touch_ParamLimits

0xce26,	// (0x0003b20d) aid_size_cell_touch

0x43ce,	// (0x000327b5) popup_fast_swap_wide_window_ParamLimits

0x43ce,	// (0x000327b5) popup_fast_swap_wide_window

0xcf1e,	// (0x0003b305) touch_pane_ParamLimits

0xcf1e,	// (0x0003b305) touch_pane

0x3830,	// (0x00031c17) button_value_adjust_pane_cp2

0x3838,	// (0x00031c1f) button_value_adjust_pane_cp4

0x3858,	// (0x00031c3f) form_field_data_pane_cp2

0xca6d,	// (0x0003ae54) form_field_data_wide_pane_cp2

0x7060,	// (0x00035447) bg_scroll_pane_ParamLimits

0x50d8,	// (0x000334bf) scroll_handle_pane_ParamLimits

0x50ec,	// (0x000334d3) scroll_sc2_down_pane_ParamLimits

0x50ec,	// (0x000334d3) scroll_sc2_down_pane

0x7091,	// (0x00035478) scroll_sc2_up_pane_ParamLimits

0x7091,	// (0x00035478) scroll_sc2_up_pane

0x1e9f,	// (0x00030286) grid_wheel_folder_pane_g1_ParamLimits

0x1e9f,	// (0x00030286) grid_wheel_folder_pane_g1

0x52b0,	// (0x00033697) clock_nsta_pane_cp2_ParamLimits

0x52b0,	// (0x00033697) clock_nsta_pane_cp2

0x1412,	// (0x0002f7f9) listscroll_midp_pane_ParamLimits

0x1421,	// (0x0002f808) midp_canvas_pane

0x54f7,	// (0x000338de) nsta_clock_indic_pane

0x7837,	// (0x00035c1e) listscroll_form_pane_vc

0x783f,	// (0x00035c26) listscroll_set_pane_vc_ParamLimits

0x783f,	// (0x00035c26) listscroll_set_pane_vc

0x1654,	// (0x0002fa3b) clock_nsta_pane

0x1677,	// (0x0002fa5e) indicator_nsta_pane

0x7964,	// (0x00035d4b) bg_popup_sub_pane_cp2_ParamLimits

0x7978,	// (0x00035d5f) find_pane_cp2_ParamLimits

0x7978,	// (0x00035d5f) find_pane_cp2

0x798a,	// (0x00035d71) grid_toobar_pane_ParamLimits

0x7a6e,	// (0x00035e55) list_form_gen_pane_vc_ParamLimits

0x7a6e,	// (0x00035e55) list_form_gen_pane_vc

0x7a84,	// (0x00035e6b) scroll_pane_cp8_vc_ParamLimits

0x7a84,	// (0x00035e6b) scroll_pane_cp8_vc

0x7ad4,	// (0x00035ebb) data_form_wide_pane_vc_ParamLimits

0x7ad4,	// (0x00035ebb) data_form_wide_pane_vc

0x7ae0,	// (0x00035ec7) form_field_data_wide_pane_vc_g1

0x7ae8,	// (0x00035ecf) form_field_data_wide_pane_vc_t1_ParamLimits

0x7ae8,	// (0x00035ecf) form_field_data_wide_pane_vc_t1

0x4c31,	// (0x00033018) input_focus_pane_cp6_vc_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_cp6_vc

0x1958,	// (0x0002fd3f) list_midp_pane_ParamLimits

0x8c3a,	// (0x00037021) scroll_pane_cp16_ParamLimits

0x8c3a,	// (0x00037021) scroll_pane_cp16

0x7de6,	// (0x000361cd) button_value_adjust_pane_ParamLimits

0x7de6,	// (0x000361cd) button_value_adjust_pane

0x1b09,	// (0x0002fef0) button_value_adjust_pane_cp6_ParamLimits

0x1b09,	// (0x0002fef0) button_value_adjust_pane_cp6

0x1c13,	// (0x0002fffa) settings_code_pane_cp_ParamLimits

0x1c13,	// (0x0002fffa) settings_code_pane_cp

0x41e5,	// (0x000325cc) cell_touch_pane_g1

0x41e5,	// (0x000325cc) cell_touch_pane_g2

0x0001,

0xf708,	// (0x0003daef) cell_touch_pane_g

0x1d97,	// (0x0003017e) cell_touch_pane_cp_ParamLimits

0x1d97,	// (0x0003017e) cell_touch_pane_cp

0x1db3,	// (0x0003019a) cell_touch_pane_ParamLimits

0x1db3,	// (0x0003019a) cell_touch_pane

0x41e5,	// (0x000325cc) scroll_sc2_down_pane_g1

0x41e5,	// (0x000325cc) scroll_sc2_up_pane_g1

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp4_vc

0x8efe,	// (0x000372e5) list_set_graphic_pane_vc_g1_ParamLimits

0x8efe,	// (0x000372e5) list_set_graphic_pane_vc_g1

0x8f0a,	// (0x000372f1) list_set_graphic_pane_vc_g2_ParamLimits

0x8f0a,	// (0x000372f1) list_set_graphic_pane_vc_g2

0x0001,

0xf9f1,	// (0x0003ddd8) list_set_graphic_pane_vc_g_ParamLimits

0xf9f1,	// (0x0003ddd8) list_set_graphic_pane_vc_g

0x8f16,	// (0x000372fd) text_primary_small_cp13_vc_ParamLimits

0x8f16,	// (0x000372fd) text_primary_small_cp13_vc

0x8f2e,	// (0x00037315) list_set_graphic_pane_vc_ParamLimits

0x8f2e,	// (0x00037315) list_set_graphic_pane_vc

0x43a4,	// (0x0003278b) input_focus_pane_cp2_vc

0x41e5,	// (0x000325cc) setting_code_pane_vc_g1

0x8f41,	// (0x00037328) setting_code_pane_vc_t1

0x8f4f,	// (0x00037336) set_text_pane_vc_t1_ParamLimits

0x8f4f,	// (0x00037336) set_text_pane_vc_t1

0x43a4,	// (0x0003278b) input_focus_pane_cp1_vc

0x8f6a,	// (0x00037351) list_set_text_pane_vc

0x41e5,	// (0x000325cc) setting_text_pane_vc_g1

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp2_vc

0x8f74,	// (0x0003735b) setting_slider_graphic_pane_vc_g1

0x8f7c,	// (0x00037363) setting_slider_graphic_pane_vc_t1

0x8f8a,	// (0x00037371) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f6,	// (0x0003dddd) setting_slider_graphic_pane_vc_t

0x8f98,	// (0x0003737f) slider_set_pane_cp_vc

0x8fa0,	// (0x00037387) slider_set_pane_vc_g1

0x8fa9,	// (0x00037390) slider_set_pane_vc_g2

0x0006,

0xf9fb,	// (0x0003dde2) slider_set_pane_vc_g

0x4c80,	// (0x00033067) set_opt_bg_pane_g1_copy1

0x4c88,	// (0x0003306f) set_opt_bg_pane_g2_copy1

0x8fd5,	// (0x000373bc) set_opt_bg_pane_g3_copy1

0x4c98,	// (0x0003307f) set_opt_bg_pane_g4_copy1

0x4ca0,	// (0x00033087) set_opt_bg_pane_g5_copy1

0x4ca8,	// (0x0003308f) set_opt_bg_pane_g6_copy1

0x8fdd,	// (0x000373c4) set_opt_bg_pane_g7_copy1

0x8fe5,	// (0x000373cc) set_opt_bg_pane_g8_copy1

0x8fed,	// (0x000373d4) set_opt_bg_pane_g9_copy1

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp_vc

0x8ff5,	// (0x000373dc) setting_slider_pane_vc_t1

0x8f7c,	// (0x00037363) setting_slider_pane_vc_t2

0x8f8a,	// (0x00037371) setting_slider_pane_vc_t3

0x0002,

0xfa0a,	// (0x0003ddf1) setting_slider_pane_vc_t

0x8f98,	// (0x0003737f) slider_set_pane_vc

0x5ae0,	// (0x00033ec7) volume_set_pane_vc_g1

0x5e0c,	// (0x000341f3) volume_set_pane_vc_g2

0x5e15,	// (0x000341fc) volume_set_pane_vc_g3

0x5e1e,	// (0x00034205) volume_set_pane_vc_g4

0x5e27,	// (0x0003420e) volume_set_pane_vc_g5

0x5e30,	// (0x00034217) volume_set_pane_vc_g6

0x5e39,	// (0x00034220) volume_set_pane_vc_g7

0x5e42,	// (0x00034229) volume_set_pane_vc_g8

0x5e4b,	// (0x00034232) volume_set_pane_vc_g9

0x5e54,	// (0x0003423b) volume_set_pane_vc_g10

0x0009,

0xfa11,	// (0x0003ddf8) volume_set_pane_vc_g

0x9004,	// (0x000373eb) volume_set_pane_vc

0x900c,	// (0x000373f3) button_value_adjust_pane_cp1_vc

0x9016,	// (0x000373fd) list_highlight_pane_cp2_vc

0x901f,	// (0x00037406) list_set_pane_vc_ParamLimits

0x901f,	// (0x00037406) list_set_pane_vc

0x9071,	// (0x00037458) main_pane_set_vc_t1_ParamLimits

0x9071,	// (0x00037458) main_pane_set_vc_t1

0x9086,	// (0x0003746d) main_pane_set_vc_t2_ParamLimits

0x9086,	// (0x0003746d) main_pane_set_vc_t2

0x9098,	// (0x0003747f) main_pane_set_vc_t3_ParamLimits

0x9098,	// (0x0003747f) main_pane_set_vc_t3

0x90aa,	// (0x00037491) main_pane_set_vc_t4_ParamLimits

0x90aa,	// (0x00037491) main_pane_set_vc_t4

0x0003,

0xfa26,	// (0x0003de0d) main_pane_set_vc_t_ParamLimits

0xfa26,	// (0x0003de0d) main_pane_set_vc_t

0x90bc,	// (0x000374a3) setting_code_pane_vc_ParamLimits

0x90bc,	// (0x000374a3) setting_code_pane_vc

0x90cb,	// (0x000374b2) setting_slider_graphic_pane_vc

0x90cb,	// (0x000374b2) setting_slider_pane_vc

0x90cb,	// (0x000374b2) setting_text_pane_vc

0x90cb,	// (0x000374b2) setting_volume_pane_vc

0x90d3,	// (0x000374ba) scroll_pane_cp121_vc

0x4c1c,	// (0x00033003) set_content_pane_vc

0x90db,	// (0x000374c2) button_value_adjust_pane_g1

0x90e4,	// (0x000374cb) button_value_adjust_pane_g2

0x0001,

0xfa7b,	// (0x0003de62) button_value_adjust_pane_g

0x90ed,	// (0x000374d4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x90ed,	// (0x000374d4) form_field_slider_wide_pane_vc_t1

0x9103,	// (0x000374ea) form_field_slider_wide_pane_vc_t2_ParamLimits

0x9103,	// (0x000374ea) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa80,	// (0x0003de67) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa80,	// (0x0003de67) form_field_slider_wide_pane_vc_t

0x46fd,	// (0x00032ae4) input_focus_pane_cp10_vc_ParamLimits

0x46fd,	// (0x00032ae4) input_focus_pane_cp10_vc

0x912e,	// (0x00037515) slider_cont_pane_cp1_vc_ParamLimits

0x912e,	// (0x00037515) slider_cont_pane_cp1_vc

0x8fa0,	// (0x00037387) slider_form_pane_g1_cp2

0x8fa9,	// (0x00037390) slider_form_pane_g2_cp2

0x9149,	// (0x00037530) form_field_slider_pane_vc_t3

0x9157,	// (0x0003753e) form_field_slider_pane_vc_t4

0x9165,	// (0x0003754c) slider_form_pane_vc_ParamLimits

0x9165,	// (0x0003754c) slider_form_pane_vc

0x9172,	// (0x00037559) form_field_slider_pane_vc_t1_ParamLimits

0x9172,	// (0x00037559) form_field_slider_pane_vc_t1

0x9188,	// (0x0003756f) form_field_slider_pane_vc_t2_ParamLimits

0x9188,	// (0x0003756f) form_field_slider_pane_vc_t2

0x0001,

0xfa92,	// (0x0003de79) form_field_slider_pane_vc_t_ParamLimits

0xfa92,	// (0x0003de79) form_field_slider_pane_vc_t

0x46fd,	// (0x00032ae4) input_focus_pane_cp9_vc_ParamLimits

0x46fd,	// (0x00032ae4) input_focus_pane_cp9_vc

0x919a,	// (0x00037581) slider_cont_pane_vc_ParamLimits

0x919a,	// (0x00037581) slider_cont_pane_vc

0x91ac,	// (0x00037593) list_form_graphic_pane_cp_vc_ParamLimits

0x91ac,	// (0x00037593) list_form_graphic_pane_cp_vc

0x7ae0,	// (0x00035ec7) form_field_popup_wide_pane_vc_g1

0x91c1,	// (0x000375a8) form_field_popup_wide_pane_vc_t1_ParamLimits

0x91c1,	// (0x000375a8) form_field_popup_wide_pane_vc_t1

0x4c31,	// (0x00033018) input_focus_pane_cp8_vc_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_cp8_vc

0x9200,	// (0x000375e7) list_form_wide_pane_vc_ParamLimits

0x9200,	// (0x000375e7) list_form_wide_pane_vc

0x920c,	// (0x000375f3) list_form_graphic_pane_vc_g1

0x9214,	// (0x000375fb) list_form_graphic_pane_vc_t1_ParamLimits

0x9214,	// (0x000375fb) list_form_graphic_pane_vc_t1

0x4538,	// (0x0003291f) list_highlight_pane_cp5_vc_ParamLimits

0x4538,	// (0x0003291f) list_highlight_pane_cp5_vc

0x9230,	// (0x00037617) list_form_graphic_pane_vc_ParamLimits

0x9230,	// (0x00037617) list_form_graphic_pane_vc

0x7ae0,	// (0x00035ec7) form_field_popup_pane_vc_g1

0x9246,	// (0x0003762d) form_field_popup_pane_vc_t1_ParamLimits

0x9246,	// (0x0003762d) form_field_popup_pane_vc_t1

0x4c31,	// (0x00033018) input_focus_pane_cp7_vc_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_cp7_vc

0x925b,	// (0x00037642) list_form_pane_vc_ParamLimits

0x925b,	// (0x00037642) list_form_pane_vc

0x9267,	// (0x0003764e) data_form_pane_vc_t1_ParamLimits

0x9267,	// (0x0003764e) data_form_pane_vc_t1

0x4c80,	// (0x00033067) input_focus_pane_vc_g1

0x4c88,	// (0x0003306f) input_focus_pane_vc_g2

0x4c90,	// (0x00033077) input_focus_pane_vc_g3

0x4c98,	// (0x0003307f) input_focus_pane_vc_g4

0x4ca0,	// (0x00033087) input_focus_pane_vc_g5

0x4ca8,	// (0x0003308f) input_focus_pane_vc_g6

0x4cb0,	// (0x00033097) input_focus_pane_vc_g7

0x4cb8,	// (0x0003309f) input_focus_pane_vc_g8

0x4cc0,	// (0x000330a7) input_focus_pane_vc_g9

0x41e5,	// (0x000325cc) input_focus_pane_vc_g10

0x0009,

0xf691,	// (0x0003da78) input_focus_pane_vc_g

0x7ad4,	// (0x00035ebb) data_form_pane_vc_ParamLimits

0x7ad4,	// (0x00035ebb) data_form_pane_vc

0x7ae0,	// (0x00035ec7) form_field_data_pane_vc_g1

0x9282,	// (0x00037669) form_field_data_pane_vc_t1_ParamLimits

0x9282,	// (0x00037669) form_field_data_pane_vc_t1

0x4c31,	// (0x00033018) input_focus_pane_vc_ParamLimits

0x4c31,	// (0x00033018) input_focus_pane_vc

0x9298,	// (0x0003767f) button_value_adjust_pane_cp3_vc

0x92a0,	// (0x00037687) button_value_adjust_pane_cp5_vc

0x92a8,	// (0x0003768f) form_field_data_pane_vc_ParamLimits

0x92a8,	// (0x0003768f) form_field_data_pane_vc

0x92bf,	// (0x000376a6) form_field_data_pane_vc_cp2

0x92c7,	// (0x000376ae) form_field_data_wide_pane_vc_ParamLimits

0x92c7,	// (0x000376ae) form_field_data_wide_pane_vc

0x92dd,	// (0x000376c4) form_field_data_wide_pane_vc_cp2

0x92e5,	// (0x000376cc) form_field_popup_pane_vc_ParamLimits

0x92e5,	// (0x000376cc) form_field_popup_pane_vc

0x92fc,	// (0x000376e3) form_field_popup_wide_pane_vc_ParamLimits

0x92fc,	// (0x000376e3) form_field_popup_wide_pane_vc

0x9312,	// (0x000376f9) form_field_slider_pane_vc_ParamLimits

0x9312,	// (0x000376f9) form_field_slider_pane_vc

0x9325,	// (0x0003770c) form_field_slider_wide_pane_vc_ParamLimits

0x9325,	// (0x0003770c) form_field_slider_wide_pane_vc

0x1dd1,	// (0x000301b8) grid_touch_1_pane_ParamLimits

0x1dd1,	// (0x000301b8) grid_touch_1_pane

0x1de5,	// (0x000301cc) grid_touch_2_pane_ParamLimits

0x1de5,	// (0x000301cc) grid_touch_2_pane

0x939d,	// (0x00037784) touch_pane_g1_ParamLimits

0x939d,	// (0x00037784) touch_pane_g1

0x9338,	// (0x0003771f) cell_app_pane_cp_wide_ParamLimits

0x9338,	// (0x0003771f) cell_app_pane_cp_wide

0x9348,	// (0x0003772f) grid_popup_fast_wide_pane_ParamLimits

0x9348,	// (0x0003772f) grid_popup_fast_wide_pane

0x935c,	// (0x00037743) scroll_pane_cp19_ParamLimits

0x935c,	// (0x00037743) scroll_pane_cp19

0x43a4,	// (0x0003278b) bg_popup_window_pane_cp20

0x9370,	// (0x00037757) listscroll_popup_fast_wide_pane

0x7052,	// (0x00035439) grid_indicator_nsta_pane

0x9378,	// (0x0003775f) clock_nsta_pane_g1

0x9381,	// (0x00037768) clock_nsta_pane_t1

0x1e0f,	// (0x000301f6) cell_indicator_nsta_pane_ParamLimits

0x1e0f,	// (0x000301f6) cell_indicator_nsta_pane

0x939d,	// (0x00037784) cell_indicator_nsta_pane_g1

0x1e26,	// (0x0003020d) cell_indicator_nsta_pane_g2

0x0001,

0xfaa3,	// (0x0003de8a) cell_indicator_nsta_pane_g

0x93ab,	// (0x00037792) clock_nsta_pane_cp

0x93b3,	// (0x0003779a) indicator_nsta_pane_cp

0x93bc,	// (0x000377a3) nsta_clock_indic_pane_g1

0x4606,	// (0x000329ed) grid_indicator_pane

0x7183,	// (0x0003556a) scroll_pane_cp29

0x5207,	// (0x000335ee) indicator_nsta_pane_cp2_ParamLimits

0x5207,	// (0x000335ee) indicator_nsta_pane_cp2

0x4538,	// (0x0003291f) main_apps_wheel_pane

0x7c7f,	// (0x00036066) form_midp_field_text_pane_ParamLimits

0x7dac,	// (0x00036193) scroll_bar_cp050_ParamLimits

0x9425,	// (0x0003780c) cell_indicator_pane_ParamLimits

0x9425,	// (0x0003780c) cell_indicator_pane

0x943b,	// (0x00037822) cell_indicator_pane_g1

0x1e33,	// (0x0003021a) grid_wheel_folder_pane_ParamLimits

0x1e33,	// (0x0003021a) grid_wheel_folder_pane

0x1e41,	// (0x00030228) list_wheel_apps_pane_ParamLimits

0x1e41,	// (0x00030228) list_wheel_apps_pane

0x1e4d,	// (0x00030234) main_apps_wheel_pane_g1_ParamLimits

0x1e4d,	// (0x00030234) main_apps_wheel_pane_g1

0x1e59,	// (0x00030240) main_apps_wheel_pane_g2_ParamLimits

0x1e59,	// (0x00030240) main_apps_wheel_pane_g2

0x0001,

0xfabf,	// (0x0003dea6) main_apps_wheel_pane_g_ParamLimits

0xfabf,	// (0x0003dea6) main_apps_wheel_pane_g

0x1e65,	// (0x0003024c) main_apps_wheel_pane_t1_ParamLimits

0x1e65,	// (0x0003024c) main_apps_wheel_pane_t1

0x1e77,	// (0x0003025e) list_wheel_apps_pane_g1

0x1e7f,	// (0x00030266) list_wheel_apps_pane_g2

0x1e87,	// (0x0003026e) list_wheel_apps_pane_g3

0x1e8f,	// (0x00030276) list_wheel_apps_pane_g4

0x1e97,	// (0x0003027e) list_wheel_apps_pane_g5

0x0004,

0xfac4,	// (0x0003deab) list_wheel_apps_pane_g

0x4538,	// (0x0003291f) navi_icon_text_pane

0x1560,	// (0x0002f947) aid_fill_nsta

0x9445,	// (0x0003782c) navi_icon_text_pane_g1

0x9451,	// (0x00037838) navi_icon_text_pane_t1

0x73fd,	// (0x000357e4) list_set_graphic_pane_t1_ParamLimits

0x73fd,	// (0x000357e4) list_set_graphic_pane_t1

0x8492,	// (0x00036879) popup_midp_note_alarm_window_t6_ParamLimits

0x8492,	// (0x00036879) popup_midp_note_alarm_window_t6

0x84a4,	// (0x0003688b) popup_midp_note_alarm_window_t7_ParamLimits

0x84a4,	// (0x0003688b) popup_midp_note_alarm_window_t7

0x84b6,	// (0x0003689d) popup_midp_note_alarm_window_t8_ParamLimits

0x84b6,	// (0x0003689d) popup_midp_note_alarm_window_t8

0x84c8,	// (0x000368af) popup_midp_note_alarm_window_t9_ParamLimits

0x84c8,	// (0x000368af) popup_midp_note_alarm_window_t9

0x84da,	// (0x000368c1) popup_midp_note_alarm_window_t10_ParamLimits

0x84da,	// (0x000368c1) popup_midp_note_alarm_window_t10

0x84ec,	// (0x000368d3) popup_midp_note_alarm_window_t11_ParamLimits

0x84ec,	// (0x000368d3) popup_midp_note_alarm_window_t11

0x84fe,	// (0x000368e5) scroll_pane_cp17_ParamLimits

0x84fe,	// (0x000368e5) scroll_pane_cp17

0x5ae0,	// (0x00033ec7) volume_small_pane_cp_g1

0x5edd,	// (0x000342c4) volume_small_pane_cp_g2

0x5ee6,	// (0x000342cd) volume_small_pane_cp_g3

0x5eef,	// (0x000342d6) volume_small_pane_cp_g4

0x5b0d,	// (0x00033ef4) volume_small_pane_cp_g5

0x5ef8,	// (0x000342df) volume_small_pane_cp_g6

0x5f01,	// (0x000342e8) volume_small_pane_cp_g7

0x5f0a,	// (0x000342f1) volume_small_pane_cp_g8

0x5f13,	// (0x000342fa) volume_small_pane_cp_g9

0x5f1c,	// (0x00034303) volume_small_pane_cp_g10

0x76ac,	// (0x00035a93) midp_ticker_pane_g1_ParamLimits

0x76b8,	// (0x00035a9f) midp_ticker_pane_g2_ParamLimits

0xf75d,	// (0x0003db44) midp_ticker_pane_g_ParamLimits

0x76c4,	// (0x00035aab) midp_ticker_pane_t1_ParamLimits

0x1576,	// (0x0002f95d) aid_fill_nsta_2

0x7d98,	// (0x0003617f) list_form2_midp_pane

0x8b84,	// (0x00036f6b) midp_editing_number_pane_ParamLimits

0x8b90,	// (0x00036f77) midp_ticker_pane_ParamLimits

0x9463,	// (0x0003784a) form2_midp_field_pane

0x946b,	// (0x00037852) scroll_pane_cp51

0x948b,	// (0x00037872) form2_midp_button_pane_ParamLimits

0x948b,	// (0x00037872) form2_midp_button_pane

0x949d,	// (0x00037884) form2_midp_content_pane_ParamLimits

0x949d,	// (0x00037884) form2_midp_content_pane

0x94b7,	// (0x0003789e) form2_midp_field_choice_group_pane

0x94bf,	// (0x000378a6) form2_midp_field_pane_g1

0x94c7,	// (0x000378ae) form2_midp_field_pane_g2

0x94cf,	// (0x000378b6) form2_midp_field_pane_g3

0x94d7,	// (0x000378be) form2_midp_field_pane_g4

0x0003,

0xfae9,	// (0x0003ded0) form2_midp_field_pane_g

0x94df,	// (0x000378c6) form2_midp_gauge_slider_pane

0x94e7,	// (0x000378ce) form2_midp_gauge_wait_pane

0x94ef,	// (0x000378d6) form2_midp_image_pane_ParamLimits

0x94ef,	// (0x000378d6) form2_midp_image_pane

0x950a,	// (0x000378f1) form2_midp_label_pane_ParamLimits

0x950a,	// (0x000378f1) form2_midp_label_pane

0x1ecc,	// (0x000302b3) form2_midp_label_pane_cp_ParamLimits

0x1ecc,	// (0x000302b3) form2_midp_label_pane_cp

0x9523,	// (0x0003790a) form2_midp_string_pane_ParamLimits

0x9523,	// (0x0003790a) form2_midp_string_pane

0x3ee5,	// (0x000322cc) form2_midp_text_pane_ParamLimits

0x3ee5,	// (0x000322cc) form2_midp_text_pane

0x9535,	// (0x0003791c) form2_midp_time_pane

0x9545,	// (0x0003792c) input_focus_pane_cp51_ParamLimits

0x9545,	// (0x0003792c) input_focus_pane_cp51

0x955d,	// (0x00037944) form2_midp_label_pane_t1_ParamLimits

0x955d,	// (0x00037944) form2_midp_label_pane_t1

0x3efe,	// (0x000322e5) form2_mdip_text_pane_t1_ParamLimits

0x3efe,	// (0x000322e5) form2_mdip_text_pane_t1

0x3f17,	// (0x000322fe) form2_midp_time_pane_t1

0x95a5,	// (0x0003798c) form2_midp_gauge_slider_pane_t1

0x1eeb,	// (0x000302d2) form2_midp_gauge_slider_pane_t2

0x1efd,	// (0x000302e4) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf2,	// (0x0003ded9) form2_midp_gauge_slider_pane_t

0x95b7,	// (0x0003799e) form2_midp_slider_pane

0x95c3,	// (0x000379aa) form2_midp_gauge_wait_pane_t1

0x95d1,	// (0x000379b8) form2_midp_wait_pane_ParamLimits

0x95d1,	// (0x000379b8) form2_midp_wait_pane

0x7b1e,	// (0x00035f05) list_single_2graphic_pane_cp4_ParamLimits

0x7b1e,	// (0x00035f05) list_single_2graphic_pane_cp4

0x95fc,	// (0x000379e3) list_single_midp_graphic_pane_cp_ParamLimits

0x95fc,	// (0x000379e3) list_single_midp_graphic_pane_cp

0x43a4,	// (0x0003278b) list_highlight_pane_cp20

0x961a,	// (0x00037a01) list_single_2graphic_pane_g1_cp4

0x8c05,	// (0x00036fec) list_single_2graphic_pane_g2_cp4

0x9622,	// (0x00037a09) list_single_2graphic_pane_t1_cp4

0x4538,	// (0x0003291f) list_highlight_pane_cp21

0x9631,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp

0x9640,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp

0x9655,	// (0x00037a3c) form2_mdip_string_pane_t1_ParamLimits

0x9655,	// (0x00037a3c) form2_mdip_string_pane_t1

0x43a4,	// (0x0003278b) bg_wml_button_pane_cp2

0x41e5,	// (0x000325cc) form2_midp_image_pane_g1

0x4bb9,	// (0x00032fa0) list_double_large_graphic_pane_g5_ParamLimits

0x4bb9,	// (0x00032fa0) list_double_large_graphic_pane_g5

0x1412,	// (0x0002f7f9) midp_form_pane_ParamLimits

0x4538,	// (0x0003291f) main_apps_wheel_pane_ParamLimits

0xd4f7,	// (0x0003b8de) popup_preview_window_ParamLimits

0xd4f7,	// (0x0003b8de) popup_preview_window

0x596c,	// (0x00033d53) popup_touch_info_window_ParamLimits

0x596c,	// (0x00033d53) popup_touch_info_window

0x598a,	// (0x00033d71) popup_touch_menu_window_ParamLimits

0x598a,	// (0x00033d71) popup_touch_menu_window

0x41db,	// (0x000325c2) bg_popup_sub_pane_cp6

0x96bf,	// (0x00037aa6) list_touch_menu_pane

0x96c7,	// (0x00037aae) list_single_touch_menu_pane_ParamLimits

0x96c7,	// (0x00037aae) list_single_touch_menu_pane

0x96de,	// (0x00037ac5) list_single_touch_menu_pane_t1

0x4538,	// (0x0003291f) bg_popup_sub_pane_cp7_ParamLimits

0x4538,	// (0x0003291f) bg_popup_sub_pane_cp7

0x96ec,	// (0x00037ad3) heading_sub_pane

0x96f4,	// (0x00037adb) list_touch_info_pane_ParamLimits

0x96f4,	// (0x00037adb) list_touch_info_pane

0x9703,	// (0x00037aea) list_single_touch_info_pane_ParamLimits

0x9703,	// (0x00037aea) list_single_touch_info_pane

0x9714,	// (0x00037afb) list_single_touch_info_pane_t1

0x9722,	// (0x00037b09) list_single_touch_info_pane_t2

0x0001,

0xfb00,	// (0x0003dee7) list_single_touch_info_pane_t

0x7682,	// (0x00035a69) bg_popup_heading_pane_cp

0x9730,	// (0x00037b17) heading_sub_pane_t1

0x7a9a,	// (0x00035e81) bg_popup_preview_window_pane_cp_ParamLimits

0x7a9a,	// (0x00035e81) bg_popup_preview_window_pane_cp

0x96ec,	// (0x00037ad3) heading_preview_pane

0x96f4,	// (0x00037adb) list_preview_pane_ParamLimits

0x96f4,	// (0x00037adb) list_preview_pane

0x973e,	// (0x00037b25) popup_preview_window_g1

0x9703,	// (0x00037aea) list_single_preview_pane_ParamLimits

0x9703,	// (0x00037aea) list_single_preview_pane

0x9746,	// (0x00037b2d) list_single_preview_pane_g1

0x974e,	// (0x00037b35) list_single_preview_pane_t1

0x9714,	// (0x00037afb) list_single_preview_pane_t2

0x0001,

0xfb05,	// (0x0003deec) list_single_preview_pane_t

0x975c,	// (0x00037b43) bg_popup_heading_pane_cp2_ParamLimits

0x975c,	// (0x00037b43) bg_popup_heading_pane_cp2

0x9772,	// (0x00037b59) heading_preview_pane_g1

0x977a,	// (0x00037b61) heading_preview_pane_t1_ParamLimits

0x977a,	// (0x00037b61) heading_preview_pane_t1

0x461d,	// (0x00032a04) soft_indicator_pane_t1_ParamLimits

0x4af5,	// (0x00032edc) scroll_pane_ParamLimits

0x707f,	// (0x00035466) scroll_sc2_left_pane

0x7088,	// (0x0003546f) scroll_sc2_right_pane

0x70a7,	// (0x0003548e) scroll_bg_pane_g1_ParamLimits

0x70bc,	// (0x000354a3) scroll_bg_pane_g2_ParamLimits

0x70d4,	// (0x000354bb) scroll_bg_pane_g3_ParamLimits

0xf6e8,	// (0x0003dacf) scroll_bg_pane_g_ParamLimits

0x70a7,	// (0x0003548e) scroll_handle_pane_g1_ParamLimits

0x70f6,	// (0x000354dd) scroll_handle_pane_g2_ParamLimits

0x70d4,	// (0x000354bb) scroll_handle_pane_g3_ParamLimits

0xf6ef,	// (0x0003dad6) scroll_handle_pane_g_ParamLimits

0x5539,	// (0x00033920) popup_choice_list_window_ParamLimits

0x5539,	// (0x00033920) popup_choice_list_window

0x7970,	// (0x00035d57) choice_list_pane

0x79e6,	// (0x00035dcd) cell_toolbar_pane_t1

0x7a0e,	// (0x00035df5) toolbar_button_pane_ParamLimits

0x88f9,	// (0x00036ce0) ai_gene_pane_1_t2_ParamLimits

0x88f9,	// (0x00036ce0) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0003dcf2) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0003dcf2) ai_gene_pane_1_t

0x9797,	// (0x00037b7e) scroll_sc2_left_pane_g1

0x9797,	// (0x00037b7e) scroll_sc2_right_pane_g1

0x5521,	// (0x00033908) bg_popup_sub_pane_cp10

0x97a1,	// (0x00037b88) list_choice_list_pane

0x97b8,	// (0x00037b9f) list_single_choice_list_pane_ParamLimits

0x97b8,	// (0x00037b9f) list_single_choice_list_pane

0x97ca,	// (0x00037bb1) list_single_choice_list_pane_g1

0x4d96,	// (0x0003317d) list_single_choice_list_pane_t1_ParamLimits

0x4d96,	// (0x0003317d) list_single_choice_list_pane_t1

0x97d2,	// (0x00037bb9) choice_list_pane_g1

0x97da,	// (0x00037bc1) choice_list_pane_t1

0x41db,	// (0x000325c2) input_focus_pane_cp11

0x4f51,	// (0x00033338) title_pane_stacon_g2_ParamLimits

0x4f51,	// (0x00033338) title_pane_stacon_g2

0x0002,

0xf6ce,	// (0x0003dab5) title_pane_stacon_g_ParamLimits

0xf6ce,	// (0x0003dab5) title_pane_stacon_g

0x7682,	// (0x00035a69) cursor_press_pane

0xd25e,	// (0x0003b645) popup_fep_hwr_window_ParamLimits

0xd25e,	// (0x0003b645) popup_fep_hwr_window

0x5631,	// (0x00033a18) popup_fep_vkb_window_ParamLimits

0x5631,	// (0x00033a18) popup_fep_vkb_window

0x97e8,	// (0x00037bcf) cursor_press_pane_g1

0x0002,

0xfb2e,	// (0x0003df15) fep_vkb_side_pane_g_ParamLimits

0x5f5a,	// (0x00034341) fep_hwr_candidate_pane_ParamLimits

0x5f5a,	// (0x00034341) fep_hwr_candidate_pane

0x5f82,	// (0x00034369) fep_hwr_side_pane_ParamLimits

0x5f82,	// (0x00034369) fep_hwr_side_pane

0x5fa2,	// (0x00034389) fep_hwr_top_pane_ParamLimits

0x5fa2,	// (0x00034389) fep_hwr_top_pane

0x5fba,	// (0x000343a1) fep_hwr_write_pane_ParamLimits

0x5fba,	// (0x000343a1) fep_hwr_write_pane

0xfb2e,	// (0x0003df15) fep_vkb_side_pane_g

0x97f0,	// (0x00037bd7) fep_hwr_top_pane_g1

0x9802,	// (0x00037be9) fep_hwr_top_pane_g2

0x5fe6,	// (0x000343cd) fep_hwr_top_pane_g3

0x0002,

0xfb0a,	// (0x0003def1) fep_hwr_top_pane_g

0x5ffb,	// (0x000343e2) fep_hwr_top_text_pane

0x71f0,	// (0x000355d7) fep_hwr_top_text_pane_g1

0x9838,	// (0x00037c1f) fep_hwr_top_text_pane_t1

0x60e9,	// (0x000344d0) fep_hwr_candidate_pane_g1

0x9a01,	// (0x00037de8) fep_vkb_keypad_pane_g3_ParamLimits

0x9a01,	// (0x00037de8) fep_vkb_keypad_pane_g3

0x9a23,	// (0x00037e0a) fep_vkb_keypad_pane_g4_ParamLimits

0x9a23,	// (0x00037e0a) fep_vkb_keypad_pane_g4

0x9a92,	// (0x00037e79) fep_vkb_bottom_pane_g2_ParamLimits

0x9a92,	// (0x00037e79) fep_vkb_bottom_pane_g2

0x0001,

0xfb35,	// (0x0003df1c) fep_vkb_bottom_pane_g_ParamLimits

0xfb35,	// (0x0003df1c) fep_vkb_bottom_pane_g

0x9797,	// (0x00037b7e) cell_vkb_side_pane_g2

0x0001,

0xfb3f,	// (0x0003df26) cell_vkb_side_pane_g

0x9ad6,	// (0x00037ebd) cell_vkb_side_pane_t1

0x9ae4,	// (0x00037ecb) cell_vkb_side_pane_t1_copy1

0x9797,	// (0x00037b7e) bg_fep_vkb_candidate_pane_g2

0x9bb2,	// (0x00037f99) cell_vkb_candidate_pane_ParamLimits

0x9846,	// (0x00037c2d) aid_size_cell_vkb_ParamLimits

0x9846,	// (0x00037c2d) aid_size_cell_vkb

0x9bb2,	// (0x00037f99) cell_vkb_candidate_pane

0x6103,	// (0x000344ea) bg_popup_fep_shadow_pane_g1

0x98b0,	// (0x00037c97) fep_vkb_bottom_pane_ParamLimits

0x98b0,	// (0x00037c97) fep_vkb_bottom_pane

0x98ed,	// (0x00037cd4) fep_vkb_candidate_pane_ParamLimits

0x98ed,	// (0x00037cd4) fep_vkb_candidate_pane

0x9909,	// (0x00037cf0) fep_vkb_keypad_pane_ParamLimits

0x9909,	// (0x00037cf0) fep_vkb_keypad_pane

0x993d,	// (0x00037d24) fep_vkb_side_pane_ParamLimits

0x993d,	// (0x00037d24) fep_vkb_side_pane

0x9969,	// (0x00037d50) fep_vkb_top_pane_ParamLimits

0x9969,	// (0x00037d50) fep_vkb_top_pane

0x9995,	// (0x00037d7c) fep_vkb_top_pane_g1_ParamLimits

0x9995,	// (0x00037d7c) fep_vkb_top_pane_g1

0x99a4,	// (0x00037d8b) fep_vkb_top_pane_g2_ParamLimits

0x99a4,	// (0x00037d8b) fep_vkb_top_pane_g2

0x99b3,	// (0x00037d9a) fep_vkb_top_pane_g3_ParamLimits

0x99b3,	// (0x00037d9a) fep_vkb_top_pane_g3

0x0003,

0xfb25,	// (0x0003df0c) fep_vkb_top_pane_g_ParamLimits

0xfb25,	// (0x0003df0c) fep_vkb_top_pane_g

0x99d1,	// (0x00037db8) fep_vkb_top_text_pane_ParamLimits

0x99d1,	// (0x00037db8) fep_vkb_top_text_pane

0x1f1f,	// (0x00030306) fep_vkb_side_pane_g1_ParamLimits

0x1f1f,	// (0x00030306) fep_vkb_side_pane_g1

0x99f0,	// (0x00037dd7) grid_vkb_side_pane_ParamLimits

0x99f0,	// (0x00037dd7) grid_vkb_side_pane

0x610b,	// (0x000344f2) bg_popup_fep_shadow_pane_g2

0x6114,	// (0x000344fb) bg_popup_fep_shadow_pane_g3

0x611c,	// (0x00034503) bg_popup_fep_shadow_pane_g4

0x6125,	// (0x0003450c) bg_popup_fep_shadow_pane_g5

0x612d,	// (0x00034514) bg_popup_fep_shadow_pane_g6

0x6135,	// (0x0003451c) bg_popup_fep_shadow_pane_g7

0x4ca0,	// (0x00033087) bg_popup_fep_shadow_pane_g8

0x9a41,	// (0x00037e28) grid_vkb_keypad_number_pane_ParamLimits

0x9a41,	// (0x00037e28) grid_vkb_keypad_number_pane

0x9a51,	// (0x00037e38) grid_vkb_keypad_pane_ParamLimits

0x9a51,	// (0x00037e38) grid_vkb_keypad_pane

0x9a77,	// (0x00037e5e) fep_vkb_bottom_pane_g1_ParamLimits

0x9a77,	// (0x00037e5e) fep_vkb_bottom_pane_g1

0x9aa0,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x9aa0,	// (0x00037e87) grid_vkb_keypad_bottom_left_pane

0x9ab5,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x9ab5,	// (0x00037e9c) grid_vkb_keypad_bottom_right_pane

0x9aca,	// (0x00037eb1) fep_vkb_top_text_pane_g1

0x1f66,	// (0x0003034d) fep_vkb_top_text_pane_t1

0x1f78,	// (0x0003035f) cell_vkb_side_pane_ParamLimits

0x1f78,	// (0x0003035f) cell_vkb_side_pane

0x9797,	// (0x00037b7e) cell_vkb_side_pane_g1

0x9af2,	// (0x00037ed9) cell_vkb_keypad_pane_ParamLimits

0x9af2,	// (0x00037ed9) cell_vkb_keypad_pane

0x9b5f,	// (0x00037f46) cell_vkb_keypad_pane_g1

0x0008,

0xfb52,	// (0x0003df39) bg_popup_fep_shadow_pane_g

0x9797,	// (0x00037b7e) cell_hwr_side_pane_g1

0x9797,	// (0x00037b7e) cell_hwr_side_pane_g2

0x9b69,	// (0x00037f50) cell_vkb_keypad_pane_t1

0x1f8e,	// (0x00030375) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x1f8e,	// (0x00030375) cell_vkb_keypad_bottom_left_pane

0x1fa3,	// (0x0003038a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x1fa3,	// (0x0003038a) cell_vkb_keypad_bottom_right_pane

0x9797,	// (0x00037b7e) cell_vkb_keypad_bottom_left_pane_g1

0x9797,	// (0x00037b7e) cell_vkb_keypad_bottom_right_pane_g1

0x9b77,	// (0x00037f5e) cell_vkb_keypad_number_pane_ParamLimits

0x9b77,	// (0x00037f5e) cell_vkb_keypad_number_pane

0x9b96,	// (0x00037f7d) cell_vkb_keypad_number_pane_g1

0x9ba0,	// (0x00037f87) cell_vkb_keypad_number_pane_g2

0x9ba9,	// (0x00037f90) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb44,	// (0x0003df2b) cell_vkb_keypad_number_pane_g

0x9b69,	// (0x00037f50) cell_vkb_keypad_number_pane_t1

0x9bcb,	// (0x00037fb2) fep_vkb_candidate_pane_g1

0x0001,

0xfb3f,	// (0x0003df26) cell_hwr_side_pane_g

0x9be4,	// (0x00037fcb) cell_hwr_side_pane_t1

0x6145,	// (0x0003452c) cell_hwr_side_pane_t1_copy1

0x99c3,	// (0x00037daa) cell_hwr_candidate_pane_g1

0x6153,	// (0x0003453a) cell_hwr_candidate_pane_t1

0x9797,	// (0x00037b7e) cell_vkb_candidate_pane_g2

0x9c6a,	// (0x00038051) cell_vkb_candidate_pane_t1

0x5f25,	// (0x0003430c) bg_popup_fep_shadow_pane_ParamLimits

0x5f25,	// (0x0003430c) bg_popup_fep_shadow_pane

0x0054,	// (0x0002e43b) bg_fep_hwr_top_pane_g4

0x9814,	// (0x00037bfb) bg_hwr_side_pane_g1_ParamLimits

0x9814,	// (0x00037bfb) bg_hwr_side_pane_g1

0xd949,	// (0x0003bd30) cell_hwr_side_pane_ParamLimits

0xd949,	// (0x0003bd30) cell_hwr_side_pane

0x6072,	// (0x00034459) fep_hwr_write_pane_g1_ParamLimits

0x6072,	// (0x00034459) fep_hwr_write_pane_g1

0x607f,	// (0x00034466) fep_hwr_write_pane_g2_ParamLimits

0x607f,	// (0x00034466) fep_hwr_write_pane_g2

0x608c,	// (0x00034473) fep_hwr_write_pane_g3_ParamLimits

0x608c,	// (0x00034473) fep_hwr_write_pane_g3

0xd969,	// (0x0003bd50) fep_hwr_write_pane_g4_ParamLimits

0xd969,	// (0x0003bd50) fep_hwr_write_pane_g4

0x0005,

0xfb11,	// (0x0003def8) fep_hwr_write_pane_g_ParamLimits

0xfb11,	// (0x0003def8) fep_hwr_write_pane_g

0x0054,	// (0x0002e43b) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x0054,	// (0x0002e43b) bg_fep_hwr_candidate_pane_g2

0x60af,	// (0x00034496) cell_hwr_candidate_pane_ParamLimits

0x60af,	// (0x00034496) cell_hwr_candidate_pane

0x60e9,	// (0x000344d0) fep_hwr_candidate_pane_g1_ParamLimits

0x9874,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x9874,	// (0x00037c5b) bg_popup_fep_shadow_pane_cp2

0x99c3,	// (0x00037daa) fep_vkb_top_pane_g4_ParamLimits

0x99c3,	// (0x00037daa) fep_vkb_top_pane_g4

0x99e2,	// (0x00037dc9) fep_vkb_side_pane_g2_ParamLimits

0x99e2,	// (0x00037dc9) fep_vkb_side_pane_g2

0xc97b,	// (0x0003ad62) list_setting_pane_t4_ParamLimits

0xc97b,	// (0x0003ad62) list_setting_pane_t4

0xca15,	// (0x0003adfc) list_setting_number_pane_t5_ParamLimits

0xca15,	// (0x0003adfc) list_setting_number_pane_t5

0x131d,	// (0x0002f704) list_double_heading_pane_cp2_ParamLimits

0x131d,	// (0x0002f704) list_double_heading_pane_cp2

0x74f7,	// (0x000358de) list_double_heading_pane_g1_cp2_ParamLimits

0x74f7,	// (0x000358de) list_double_heading_pane_g1_cp2

0x9c78,	// (0x0003805f) list_double_heading_pane_g2_cp2_ParamLimits

0x9c78,	// (0x0003805f) list_double_heading_pane_g2_cp2

0x9c8c,	// (0x00038073) list_double_heading_pane_t1_cp2_ParamLimits

0x9c8c,	// (0x00038073) list_double_heading_pane_t1_cp2

0x9ca2,	// (0x00038089) list_double_heading_pane_t2_cp2_ParamLimits

0x9ca2,	// (0x00038089) list_double_heading_pane_t2_cp2

0x41d3,	// (0x000325ba) aid_value_unit2

0x440a,	// (0x000327f1) popup_preview_fixed_window

0x470b,	// (0x00032af2) bg_popup_preview_window_pane_cp02

0x9cb4,	// (0x0003809b) list_preview_fixed_pane

0x9cfa,	// (0x000380e1) list_empty_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_empty_pane_fp

0x9cfa,	// (0x000380e1) list_single_cale_day_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_cale_day_pane_fp

0x9cfa,	// (0x000380e1) list_single_graphic_heading_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_graphic_heading_pane_fp

0x9cfa,	// (0x000380e1) list_single_graphic_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_graphic_pane_fp

0x9cfa,	// (0x000380e1) list_single_heading_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_heading_pane_fp

0x9cfa,	// (0x000380e1) list_single_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_pane_fp

0x9d0e,	// (0x000380f5) list_single_pane_fp_g1_ParamLimits

0x9d0e,	// (0x000380f5) list_single_pane_fp_g1

0x4b7d,	// (0x00032f64) list_single_pane_fp_g2_ParamLimits

0x4b7d,	// (0x00032f64) list_single_pane_fp_g2

0x6170,	// (0x00034557) list_single_pane_fp_g3_ParamLimits

0x6170,	// (0x00034557) list_single_pane_fp_g3

0x9d1a,	// (0x00038101) list_single_pane_fp_g4_ParamLimits

0x9d1a,	// (0x00038101) list_single_pane_fp_g4

0x0003,

0xfb73,	// (0x0003df5a) list_single_pane_fp_g_ParamLimits

0xfb73,	// (0x0003df5a) list_single_pane_fp_g

0x3f2a,	// (0x00032311) list_single_pane_fp_t1_ParamLimits

0x3f2a,	// (0x00032311) list_single_pane_fp_t1

0x3f41,	// (0x00032328) list_single_graphic_pane_fp_g1_ParamLimits

0x3f41,	// (0x00032328) list_single_graphic_pane_fp_g1

0x9d0e,	// (0x000380f5) list_single_graphic_pane_fp_g2_ParamLimits

0x9d0e,	// (0x000380f5) list_single_graphic_pane_fp_g2

0x4b7d,	// (0x00032f64) list_single_graphic_pane_fp_g3_ParamLimits

0x4b7d,	// (0x00032f64) list_single_graphic_pane_fp_g3

0x6170,	// (0x00034557) list_single_graphic_pane_fp_g4_ParamLimits

0x6170,	// (0x00034557) list_single_graphic_pane_fp_g4

0x9d1a,	// (0x00038101) list_single_graphic_pane_fp_g5_ParamLimits

0x9d1a,	// (0x00038101) list_single_graphic_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003df63) list_single_graphic_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003df63) list_single_graphic_pane_fp_g

0x3f4d,	// (0x00032334) list_single_graphic_pane_fp_t1_ParamLimits

0x3f4d,	// (0x00032334) list_single_graphic_pane_fp_t1

0x3f41,	// (0x00032328) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x3f41,	// (0x00032328) list_single_graphic_heading_pane_fp_g1

0x9d0e,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x9d0e,	// (0x000380f5) list_single_graphic_heading_pane_fp_g2

0x4b7d,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4b7d,	// (0x00032f64) list_single_graphic_heading_pane_fp_g3

0x6170,	// (0x00034557) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6170,	// (0x00034557) list_single_graphic_heading_pane_fp_g4

0x9d1a,	// (0x00038101) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x9d1a,	// (0x00038101) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003df63) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003df63) list_single_graphic_heading_pane_fp_g

0x3f63,	// (0x0003234a) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x3f63,	// (0x0003234a) list_single_graphic_heading_pane_fp_t1

0x3f79,	// (0x00032360) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x3f79,	// (0x00032360) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb87,	// (0x0003df6e) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb87,	// (0x0003df6e) list_single_graphic_heading_pane_fp_t

0x3f8b,	// (0x00032372) list_single_cale_day_pane_fp_g1_ParamLimits

0x3f8b,	// (0x00032372) list_single_cale_day_pane_fp_g1

0x9d26,	// (0x0003810d) list_single_cale_day_pane_fp_g2_ParamLimits

0x9d26,	// (0x0003810d) list_single_cale_day_pane_fp_g2

0x6184,	// (0x0003456b) list_single_cale_day_pane_fp_g3_ParamLimits

0x6184,	// (0x0003456b) list_single_cale_day_pane_fp_g3

0x61ac,	// (0x00034593) list_single_cale_day_pane_fp_g4_ParamLimits

0x61ac,	// (0x00034593) list_single_cale_day_pane_fp_g4

0x61d0,	// (0x000345b7) list_single_cale_day_pane_fp_g5_ParamLimits

0x61d0,	// (0x000345b7) list_single_cale_day_pane_fp_g5

0x0004,

0xfb8c,	// (0x0003df73) list_single_cale_day_pane_fp_g_ParamLimits

0xfb8c,	// (0x0003df73) list_single_cale_day_pane_fp_g

0x3fc3,	// (0x000323aa) list_single_cale_day_pane_fp_t1_ParamLimits

0x3fc3,	// (0x000323aa) list_single_cale_day_pane_fp_t1

0x3fe9,	// (0x000323d0) list_single_cale_day_pane_fp_t2_ParamLimits

0x3fe9,	// (0x000323d0) list_single_cale_day_pane_fp_t2

0x4002,	// (0x000323e9) list_single_cale_day_pane_fp_t3_ParamLimits

0x4002,	// (0x000323e9) list_single_cale_day_pane_fp_t3

0x0002,

0xfb97,	// (0x0003df7e) list_single_cale_day_pane_fp_t_ParamLimits

0xfb97,	// (0x0003df7e) list_single_cale_day_pane_fp_t

0x9d0e,	// (0x000380f5) list_empty_pane_fp_g1_ParamLimits

0x9d0e,	// (0x000380f5) list_empty_pane_fp_g1

0x401b,	// (0x00032402) list_empty_pane_fp_t1

0x4029,	// (0x00032410) list_empty_pane_fp_t2

0x0001,

0xfb9e,	// (0x0003df85) list_empty_pane_fp_t

0x9d0e,	// (0x000380f5) list_single_heading_pane_fp_g1_ParamLimits

0x9d0e,	// (0x000380f5) list_single_heading_pane_fp_g1

0x4b7d,	// (0x00032f64) list_single_heading_pane_fp_g2_ParamLimits

0x4b7d,	// (0x00032f64) list_single_heading_pane_fp_g2

0x6170,	// (0x00034557) list_single_heading_pane_fp_g3_ParamLimits

0x6170,	// (0x00034557) list_single_heading_pane_fp_g3

0x0002,

0xfba3,	// (0x0003df8a) list_single_heading_pane_fp_g_ParamLimits

0xfba3,	// (0x0003df8a) list_single_heading_pane_fp_g

0x4037,	// (0x0003241e) list_single_heading_pane_fp_t1_ParamLimits

0x4037,	// (0x0003241e) list_single_heading_pane_fp_t1

0x4049,	// (0x00032430) list_single_heading_pane_fp_t2_ParamLimits

0x4049,	// (0x00032430) list_single_heading_pane_fp_t2

0x0001,

0xfbaa,	// (0x0003df91) list_single_heading_pane_fp_t_ParamLimits

0xfbaa,	// (0x0003df91) list_single_heading_pane_fp_t

0x4dab,	// (0x00033192) aid_size_cell_fast

0x46e0,	// (0x00032ac7) soft_indicator_pane_cp1_t1

0x4de8,	// (0x000331cf) cell_app_pane_cp2_ParamLimits

0x4de8,	// (0x000331cf) cell_app_pane_cp2

0x5f47,	// (0x0003432e) fep_hwr_candidate_drop_down_list_pane

0x0372,	// (0x0002e759) fep_hwr_candidate_pane_g3_ParamLimits

0x0372,	// (0x0002e759) fep_hwr_candidate_pane_g3

0x037f,	// (0x0002e766) fep_hwr_candidate_pane_g4_ParamLimits

0x037f,	// (0x0002e766) fep_hwr_candidate_pane_g4

0x0002,

0xfb1e,	// (0x0003df05) fep_hwr_candidate_pane_g_ParamLimits

0xfb1e,	// (0x0003df05) fep_hwr_candidate_pane_g

0x98dc,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x98dc,	// (0x00037cc3) fep_vkb_candidate_drop_down_list_pane

0x9bd3,	// (0x00037fba) fep_vkb_candidate_pane_g3

0x9bdb,	// (0x00037fc2) fep_vkb_candidate_pane_g4

0x0002,

0xfb4b,	// (0x0003df32) fep_vkb_candidate_pane_g

0x99c3,	// (0x00037daa) cell_hwr_candidate_pane_g1_ParamLimits

0x9bf2,	// (0x00037fd9) cell_hwr_candidate_pane_g3_ParamLimits

0x9bf2,	// (0x00037fd9) cell_hwr_candidate_pane_g3

0x9c13,	// (0x00037ffa) cell_hwr_candidate_pane_g4_ParamLimits

0x9c13,	// (0x00037ffa) cell_hwr_candidate_pane_g4

0x0002,

0xfb65,	// (0x0003df4c) cell_hwr_candidate_pane_g_ParamLimits

0xfb65,	// (0x0003df4c) cell_hwr_candidate_pane_g

0x9c34,	// (0x0003801b) cell_vkb_candidate_pane_g3_ParamLimits

0x9c34,	// (0x0003801b) cell_vkb_candidate_pane_g3

0x9c4f,	// (0x00038036) cell_vkb_candidate_pane_g4_ParamLimits

0x9c4f,	// (0x00038036) cell_vkb_candidate_pane_g4

0x9d32,	// (0x00038119) cell_app_pane_cp2_g1_ParamLimits

0x9d32,	// (0x00038119) cell_app_pane_cp2_g1

0x9d50,	// (0x00038137) cell_app_pane_cp2_g2_ParamLimits

0x9d50,	// (0x00038137) cell_app_pane_cp2_g2

0x0001,

0xfbaf,	// (0x0003df96) cell_app_pane_cp2_g_ParamLimits

0xfbaf,	// (0x0003df96) cell_app_pane_cp2_g

0x9d5c,	// (0x00038143) cell_app_pane_cp2_t1_ParamLimits

0x9d5c,	// (0x00038143) cell_app_pane_cp2_t1

0x4c31,	// (0x00033018) grid_highlight_pane_cp1_ParamLimits

0x4c31,	// (0x00033018) grid_highlight_pane_cp1

0x61f4,	// (0x000345db) cell_hwr_candidate_pane_cp1_ParamLimits

0x61f4,	// (0x000345db) cell_hwr_candidate_pane_cp1

0x99c3,	// (0x00037daa) fep_hwr_candidate_drop_down_list_pane_g1

0x9d6e,	// (0x00038155) fep_hwr_candidate_drop_down_list_pane_g2

0x9d7b,	// (0x00038162) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x0003df9b) fep_hwr_candidate_drop_down_list_pane_g

0x6212,	// (0x000345f9) fep_hwr_candidate_drop_down_list_scroll_pane

0x621b,	// (0x00034602) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x621b,	// (0x00034602) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6228,	// (0x0003460f) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6228,	// (0x0003460f) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6235,	// (0x0003461c) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6235,	// (0x0003461c) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9c34,	// (0x0003801b) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9c34,	// (0x0003801b) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9c4f,	// (0x00038036) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c4f,	// (0x00038036) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6242,	// (0x00034629) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6242,	// (0x00034629) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x625d,	// (0x00034644) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x625d,	// (0x00034644) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6278,	// (0x0003465f) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6278,	// (0x0003465f) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbbb,	// (0x0003dfa2) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbbb,	// (0x0003dfa2) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x1fbe,	// (0x000303a5) cell_vkb_candidate_pane_cp1_ParamLimits

0x1fbe,	// (0x000303a5) cell_vkb_candidate_pane_cp1

0x99c3,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x99c3,	// (0x00037daa) fep_vkb_candidate_drop_down_list_pane_g1

0x9d6e,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x9d6e,	// (0x00038155) fep_vkb_candidate_drop_down_list_pane_g2

0x9d7b,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x9d7b,	// (0x00038162) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb4,	// (0x0003df9b) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb4,	// (0x0003df9b) fep_vkb_candidate_drop_down_list_pane_g

0x9d88,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x9d88,	// (0x0003816f) fep_vkb_candidate_drop_down_list_scroll_pane

0x9d95,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9d95,	// (0x0003817c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x9da2,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9da2,	// (0x00038189) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x9dae,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9dae,	// (0x00038195) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x9bf2,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9bf2,	// (0x00037fd9) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x9c13,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9c13,	// (0x00037ffa) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x9dba,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9dba,	// (0x000381a1) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x9ddb,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9ddb,	// (0x000381c2) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9dfc,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9dfc,	// (0x000381e3) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcc,	// (0x0003dfb3) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcc,	// (0x0003dfb3) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0601,	// (0x0002e9e8) title_pane_g1_ParamLimits

0x0618,	// (0x0002e9ff) title_pane_g2_ParamLimits

0xf54e,	// (0x0003d935) title_pane_g_ParamLimits

0x71e0,	// (0x000355c7) aid_call2_pane

0x71e8,	// (0x000355cf) aid_call_pane

0x71f0,	// (0x000355d7) popup_clock_analogue_window_g1

0x71f0,	// (0x000355d7) popup_clock_analogue_window_g2

0x5101,	// (0x000334e8) popup_clock_analogue_window_g3

0x510a,	// (0x000334f1) popup_clock_analogue_window_g4

0x41e5,	// (0x000325cc) popup_clock_analogue_window_g5

0x0004,

0xf6fd,	// (0x0003dae4) popup_clock_analogue_window_g

0x5112,	// (0x000334f9) popup_clock_analogue_window_t1

0x5120,	// (0x00033507) clock_digital_number_pane_ParamLimits

0x5120,	// (0x00033507) clock_digital_number_pane

0x512c,	// (0x00033513) clock_digital_number_pane_cp02_ParamLimits

0x512c,	// (0x00033513) clock_digital_number_pane_cp02

0x5138,	// (0x0003351f) clock_digital_number_pane_cp03_ParamLimits

0x5138,	// (0x0003351f) clock_digital_number_pane_cp03

0x5144,	// (0x0003352b) clock_digital_number_pane_cp04_ParamLimits

0x5144,	// (0x0003352b) clock_digital_number_pane_cp04

0x5150,	// (0x00033537) clock_digital_separator_pane_ParamLimits

0x5150,	// (0x00033537) clock_digital_separator_pane

0x515c,	// (0x00033543) popup_clock_digital_window_t1_ParamLimits

0x515c,	// (0x00033543) popup_clock_digital_window_t1

0x41e5,	// (0x000325cc) clock_digital_number_pane_g1

0x41e5,	// (0x000325cc) clock_digital_number_pane_g2

0x0001,

0xf708,	// (0x0003daef) clock_digital_number_pane_g

0x41e5,	// (0x000325cc) clock_digital_separator_pane_g1

0x41e5,	// (0x000325cc) clock_digital_separator_pane_g2

0x0001,

0xf708,	// (0x0003daef) clock_digital_separator_pane_g

0x1560,	// (0x0002f947) aid_fill_nsta_ParamLimits

0x1677,	// (0x0002fa5e) indicator_nsta_pane_ParamLimits

0x790d,	// (0x00035cf4) popup_clock_analogue_window

0x790d,	// (0x00035cf4) popup_clock_digital_window

0x7052,	// (0x00035439) grid_indicator_nsta_pane_ParamLimits

0x938f,	// (0x00037776) clock_nsta_pane_t2

0x0001,

0xfa9e,	// (0x0003de85) clock_nsta_pane_t

0x50c5,	// (0x000334ac) aid_size_max_handle

0xd040,	// (0x0003b427) aid_size_min_handle

0x7682,	// (0x00035a69) editor_scroll_pane

0x9e17,	// (0x000381fe) ex_editor_pane

0x4d74,	// (0x0003315b) scroll_pane_cp13

0x4b22,	// (0x00032f09) scroll_pane_cp14

0x721f,	// (0x00035606) scroll_pane_cp36

0x1329,	// (0x0002f710) list_single_graphic_hl_pane_cp2_ParamLimits

0x1329,	// (0x0002f710) list_single_graphic_hl_pane_cp2

0x1c70,	// (0x00030057) list_single_graphic_hl_pane_ParamLimits

0x1c70,	// (0x00030057) list_single_graphic_hl_pane

0x405f,	// (0x00032446) aid_size_min_hl_cp1

0x9e1f,	// (0x00038206) list_highlight_pane_cp34_ParamLimits

0x9e1f,	// (0x00038206) list_highlight_pane_cp34

0x9e30,	// (0x00038217) list_single_graphic_hl_pane_g1_ParamLimits

0x9e30,	// (0x00038217) list_single_graphic_hl_pane_g1

0xcc92,	// (0x0003b079) list_single_graphic_hl_pane_g2_ParamLimits

0xcc92,	// (0x0003b079) list_single_graphic_hl_pane_g2

0xcc92,	// (0x0003b079) list_single_graphic_hl_pane_g3_ParamLimits

0xcc92,	// (0x0003b079) list_single_graphic_hl_pane_g3

0x4ba1,	// (0x00032f88) list_single_graphic_hl_pane_g4_ParamLimits

0x4ba1,	// (0x00032f88) list_single_graphic_hl_pane_g4

0x4c4b,	// (0x00033032) list_single_graphic_hl_pane_g5_ParamLimits

0x4c4b,	// (0x00033032) list_single_graphic_hl_pane_g5

0x0004,

0xfbdd,	// (0x0003dfc4) list_single_graphic_hl_pane_g_ParamLimits

0xfbdd,	// (0x0003dfc4) list_single_graphic_hl_pane_g

0xcc9e,	// (0x0003b085) list_single_graphic_hl_pane_t1_ParamLimits

0xcc9e,	// (0x0003b085) list_single_graphic_hl_pane_t1

0x9e3d,	// (0x00038224) aid_size_min_hl_cp2

0x9e46,	// (0x0003822d) list_highlight_pane_cp34_cp2_ParamLimits

0x9e46,	// (0x0003822d) list_highlight_pane_cp34_cp2

0x9e30,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9e30,	// (0x00038217) list_single_graphic_hl_pane_g1_cp2

0x9e53,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9e53,	// (0x0003823a) list_single_graphic_hl_pane_g2_cp2

0x9e5f,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9e5f,	// (0x00038246) list_single_graphic_hl_pane_g3_cp2

0x74f7,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x74f7,	// (0x000358de) list_single_graphic_hl_pane_g4_cp2

0x9c78,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x9c78,	// (0x0003805f) list_single_graphic_hl_pane_g5_cp2

0xd07a,	// (0x0003b461) control_pane_g4_ParamLimits

0xd07a,	// (0x0003b461) control_pane_g4

0x5521,	// (0x00033908) bg_popup_sub_pane_cp10_ParamLimits

0x97a1,	// (0x00037b88) list_choice_list_pane_ParamLimits

0x97b0,	// (0x00037b97) scroll_pane_cp23

0x470b,	// (0x00032af2) bg_popup_preview_window_pane_cp02_ParamLimits

0x9cb4,	// (0x0003809b) list_preview_fixed_pane_ParamLimits

0x9cca,	// (0x000380b1) list_preview_fixed_pane_cp_ParamLimits

0x9cca,	// (0x000380b1) list_preview_fixed_pane_cp

0x9cd6,	// (0x000380bd) popup_preview_fixed_window_g1_ParamLimits

0x9cd6,	// (0x000380bd) popup_preview_fixed_window_g1

0x9ce2,	// (0x000380c9) popup_preview_fixed_window_g2_ParamLimits

0x9ce2,	// (0x000380c9) popup_preview_fixed_window_g2

0x0002,

0xfb6c,	// (0x0003df53) popup_preview_fixed_window_g_ParamLimits

0xfb6c,	// (0x0003df53) popup_preview_fixed_window_g

0x501e,	// (0x00033405) aid_navi_side_left_pane_ParamLimits

0x502e,	// (0x00033415) aid_navi_side_right_pane_ParamLimits

0x503d,	// (0x00033424) navi_icon_pane_stacon_ParamLimits

0x504d,	// (0x00033434) navi_navi_pane_stacon_ParamLimits

0x503d,	// (0x00033424) navi_text_pane_stacon_ParamLimits

0x41db,	// (0x000325c2) main_text_info_pane

0x9e81,	// (0x00038268) listscroll_text_info_pane

0x9e89,	// (0x00038270) list_text_info_pane_ParamLimits

0x9e89,	// (0x00038270) list_text_info_pane

0x9e98,	// (0x0003827f) scroll_pane_cp24_ParamLimits

0x9e98,	// (0x0003827f) scroll_pane_cp24

0x1fde,	// (0x000303c5) list_text_info_pane_t1_ParamLimits

0x1fde,	// (0x000303c5) list_text_info_pane_t1

0xd1de,	// (0x0003b5c5) popup_fast_swap2_window_ParamLimits

0xd1de,	// (0x0003b5c5) popup_fast_swap2_window

0x9eb6,	// (0x0003829d) aid_size_cell_fast2

0x41db,	// (0x000325c2) bg_popup_window_pane_cp17

0x7dc4,	// (0x000361ab) heading_pane_cp2

0x4921,	// (0x00032d08) listscroll_fast2_pane

0xaa11,	// (0x00038df8) grid_fast2_pane

0xaa19,	// (0x00038e00) listscroll_fast2_pane_g1

0xaa21,	// (0x00038e08) listscroll_fast2_pane_g2

0x0001,

0xfbe8,	// (0x0003dfcf) listscroll_fast2_pane_g

0x4d74,	// (0x0003315b) scroll_pane_cp26

0xaa29,	// (0x00038e10) cell_fast2_pane_ParamLimits

0xaa29,	// (0x00038e10) cell_fast2_pane

0xaa3f,	// (0x00038e26) cell_fast2_pane_g1

0xaa48,	// (0x00038e2f) cell_fast2_pane_g2

0xaa51,	// (0x00038e38) cell_fast2_pane_g3

0x0002,

0xfbed,	// (0x0003dfd4) cell_fast2_pane_g

0x4983,	// (0x00032d6a) grid_highlight_pane_cp9

0x4998,	// (0x00032d7f) main_eswt_pane_ParamLimits

0x4998,	// (0x00032d7f) main_eswt_pane

0x9ead,	// (0x00038294) list_single_text_info_pane

0xaa59,	// (0x00038e40) eswt_ctrl_button_pane

0xaa59,	// (0x00038e40) eswt_ctrl_canvas_pane

0xaa61,	// (0x00038e48) eswt_ctrl_combo_pane

0xaa59,	// (0x00038e40) eswt_ctrl_default_pane

0xaa59,	// (0x00038e40) eswt_ctrl_label_pane

0xaa69,	// (0x00038e50) eswt_ctrl_wait_pane

0xaa71,	// (0x00038e58) eswt_shell_pane

0x41db,	// (0x000325c2) listscroll_eswt_app_pane

0xaa8d,	// (0x00038e74) popup_eswt_tasktip_window_ParamLimits

0xaa8d,	// (0x00038e74) popup_eswt_tasktip_window

0x7a9a,	// (0x00035e81) bg_popup_window_pane_cp18

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_ParamLimits

0xaa9e,	// (0x00038e85) eswt_control_pane_g1

0xaaab,	// (0x00038e92) eswt_control_pane_g2_ParamLimits

0xaaab,	// (0x00038e92) eswt_control_pane_g2

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_ParamLimits

0xaab8,	// (0x00038e9f) eswt_control_pane_g3

0xaac5,	// (0x00038eac) eswt_control_pane_g4_ParamLimits

0xaac5,	// (0x00038eac) eswt_control_pane_g4

0x0003,

0xfbf4,	// (0x0003dfdb) eswt_control_pane_g_ParamLimits

0xfbf4,	// (0x0003dfdb) eswt_control_pane_g

0x4c31,	// (0x00033018) bg_button_pane_ParamLimits

0x4c31,	// (0x00033018) bg_button_pane

0x4998,	// (0x00032d7f) common_borders_pane_copy2_ParamLimits

0x4998,	// (0x00032d7f) common_borders_pane_copy2

0xaad2,	// (0x00038eb9) control_button_pane_g1_ParamLimits

0xaad2,	// (0x00038eb9) control_button_pane_g1

0xaade,	// (0x00038ec5) control_button_pane_g2_ParamLimits

0xaade,	// (0x00038ec5) control_button_pane_g2

0xaaea,	// (0x00038ed1) control_button_pane_g3_ParamLimits

0xaaea,	// (0x00038ed1) control_button_pane_g3

0x0002,

0xfbfd,	// (0x0003dfe4) control_button_pane_g_ParamLimits

0xfbfd,	// (0x0003dfe4) control_button_pane_g

0xaafe,	// (0x00038ee5) control_button_pane_t1

0xab0c,	// (0x00038ef3) control_button_pane_t2

0x0001,

0xfc04,	// (0x0003dfeb) control_button_pane_t

0x7a1a,	// (0x00035e01) bg_button_pane_g1

0x7a22,	// (0x00035e09) bg_button_pane_g2

0x7a2a,	// (0x00035e11) bg_button_pane_g3

0x7a32,	// (0x00035e19) bg_button_pane_g4

0x7a3a,	// (0x00035e21) bg_button_pane_g5

0x7a42,	// (0x00035e29) bg_button_pane_g6

0x7a4a,	// (0x00035e31) bg_button_pane_g7

0x7a52,	// (0x00035e39) bg_button_pane_g8

0x7a5a,	// (0x00035e41) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0003dc46) bg_button_pane_g

0x975c,	// (0x00037b43) common_borders_pane_ParamLimits

0x975c,	// (0x00037b43) common_borders_pane

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy1_ParamLimits

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy1

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy1_ParamLimits

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy1

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy1_ParamLimits

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy1

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy1_ParamLimits

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy1

0x9797,	// (0x00037b7e) bg_eswt_ctrl_canvas_pane_g1

0x975c,	// (0x00037b43) common_borders_pane_cp2_ParamLimits

0x975c,	// (0x00037b43) common_borders_pane_cp2

0x975c,	// (0x00037b43) common_borders_pane_cp3_ParamLimits

0x975c,	// (0x00037b43) common_borders_pane_cp3

0xab1a,	// (0x00038f01) separator_horizontal_pane

0x707f,	// (0x00035466) separator_vertical_pane

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy2_ParamLimits

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy2

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy2_ParamLimits

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy2

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy2_ParamLimits

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy2

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy2_ParamLimits

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy2

0x41db,	// (0x000325c2) common_borders_pane_cp4

0xab22,	// (0x00038f09) separator_horizontal_pane_g1

0xab2b,	// (0x00038f12) separator_horizontal_pane_g2

0xab34,	// (0x00038f1b) separator_horizontal_pane_g3

0x0002,

0xfc09,	// (0x0003dff0) separator_horizontal_pane_g

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy3_ParamLimits

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy3

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy3_ParamLimits

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy3

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy3_ParamLimits

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy3

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy3_ParamLimits

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy3

0x41db,	// (0x000325c2) common_borders_pane_cp5

0xab3d,	// (0x00038f24) separator_vertical_pane_g1

0xab46,	// (0x00038f2d) separator_vertical_pane_g2

0xab4f,	// (0x00038f36) separator_vertical_pane_g3

0x0002,

0xfc10,	// (0x0003dff7) separator_vertical_pane_g

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy4_ParamLimits

0xaa9e,	// (0x00038e85) eswt_control_pane_g1_copy4

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy4_ParamLimits

0xaaab,	// (0x00038e92) eswt_control_pane_g2_copy4

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy4_ParamLimits

0xaab8,	// (0x00038e9f) eswt_control_pane_g3_copy4

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy4_ParamLimits

0xaac5,	// (0x00038eac) eswt_control_pane_g4_copy4

0x1ff9,	// (0x000303e0) eswt_ctrl_combo_button_pane

0x2001,	// (0x000303e8) eswt_ctrl_input_pane

0x2009,	// (0x000303f0) popup_choice_list_window_cp70

0x2011,	// (0x000303f8) eswt_ctrl_input_pane_t1

0x41db,	// (0x000325c2) input_focus_pane_cp70

0x975c,	// (0x00037b43) bg_button_pane_cp70_ParamLimits

0x975c,	// (0x00037b43) bg_button_pane_cp70

0x201f,	// (0x00030406) eswt_ctrl_combo_button_pane_g1

0xab58,	// (0x00038f3f) wait_bar_pane_cp70

0x7a9a,	// (0x00035e81) bg_popup_window_pane_cp70_ParamLimits

0x7a9a,	// (0x00035e81) bg_popup_window_pane_cp70

0xab60,	// (0x00038f47) popup_eswt_tasktip_window_t1

0xab76,	// (0x00038f5d) wait_bar_pane_cp71_ParamLimits

0xab76,	// (0x00038f5d) wait_bar_pane_cp71

0xab82,	// (0x00038f69) grid_eswt_app_pane

0x7088,	// (0x0003546f) scroll_pane_cp70

0x2027,	// (0x0003040e) cell_eswt_app_pane_ParamLimits

0x2027,	// (0x0003040e) cell_eswt_app_pane

0x204f,	// (0x00030436) cell_eswt_app_pane_g1_ParamLimits

0x204f,	// (0x00030436) cell_eswt_app_pane_g1

0x207e,	// (0x00030465) cell_eswt_app_pane_g2_ParamLimits

0x207e,	// (0x00030465) cell_eswt_app_pane_g2

0x0001,

0xfc17,	// (0x0003dffe) cell_eswt_app_pane_g_ParamLimits

0xfc17,	// (0x0003dffe) cell_eswt_app_pane_g

0x20a7,	// (0x0003048e) cell_eswt_app_pane_t1_ParamLimits

0x20a7,	// (0x0003048e) cell_eswt_app_pane_t1

0xab8b,	// (0x00038f72) grid_highlight_pane_cp70_ParamLimits

0xab8b,	// (0x00038f72) grid_highlight_pane_cp70

0x4ba1,	// (0x00032f88) set_content_pane_g1

0x7801,	// (0x00035be8) status_small_volume_pane

0x6293,	// (0x0003467a) status_small_volume_pane_g1

0x629b,	// (0x00034682) volume_small2_pane

0x62a4,	// (0x0003468b) volume_small2_pane_g1

0x62ad,	// (0x00034694) volume_small2_pane_g2

0x62b6,	// (0x0003469d) volume_small2_pane_g3

0x62bf,	// (0x000346a6) volume_small2_pane_g4

0x62c8,	// (0x000346af) volume_small2_pane_g5

0x62d1,	// (0x000346b8) volume_small2_pane_g6

0x62da,	// (0x000346c1) volume_small2_pane_g7

0x62e3,	// (0x000346ca) volume_small2_pane_g8

0x62ec,	// (0x000346d3) volume_small2_pane_g9

0x62f5,	// (0x000346dc) volume_small2_pane_g10

0x0009,

0xfc1c,	// (0x0003e003) volume_small2_pane_g

0x9aca,	// (0x00037eb1) fep_vkb_top_text_pane_g1_ParamLimits

0x1f66,	// (0x0003034d) fep_vkb_top_text_pane_t1_ParamLimits

0x9cee,	// (0x000380d5) popup_preview_fixed_window_g3_ParamLimits

0x9cee,	// (0x000380d5) popup_preview_fixed_window_g3

0xd6fe,	// (0x0003bae5) popup_toolbar_trans_pane

0x1afd,	// (0x0002fee4) aid_height_set_list_ParamLimits

0x8b48,	// (0x00036f2f) aid_size_parent_ParamLimits

0x5521,	// (0x00033908) list_highlight_pane_cp2_ParamLimits

0x4ba1,	// (0x00032f88) set_content_pane_g1_ParamLimits

0x1c83,	// (0x0003006a) list_single_image_pane_ParamLimits

0x1c83,	// (0x0003006a) list_single_image_pane

0x20d9,	// (0x000304c0) aid_size_cell_image_ParamLimits

0x20d9,	// (0x000304c0) aid_size_cell_image

0x20e6,	// (0x000304cd) grid_single_image_pane_ParamLimits

0x20e6,	// (0x000304cd) grid_single_image_pane

0x4ba1,	// (0x00032f88) list_single_image_pane_g1_ParamLimits

0x4ba1,	// (0x00032f88) list_single_image_pane_g1

0x4c4b,	// (0x00033032) list_single_image_pane_g2_ParamLimits

0x4c4b,	// (0x00033032) list_single_image_pane_g2

0x0001,

0xfc31,	// (0x0003e018) list_single_image_pane_g_ParamLimits

0xfc31,	// (0x0003e018) list_single_image_pane_g

0x9ec0,	// (0x000382a7) list_single_image_pane_t1_ParamLimits

0x9ec0,	// (0x000382a7) list_single_image_pane_t1

0x20f2,	// (0x000304d9) cell_image_list_pane_ParamLimits

0x20f2,	// (0x000304d9) cell_image_list_pane

0x2106,	// (0x000304ed) cell_image_list_pane_g1

0x210f,	// (0x000304f6) cell_image_list_pane_g2

0x0001,

0xfc36,	// (0x0003e01d) cell_image_list_pane_g

0xab97,	// (0x00038f7e) aid_size_cell_tb_trans_pane

0x4c31,	// (0x00033018) bg_tb_trans_pane

0xaba9,	// (0x00038f90) grid_tb_trans_pane

0x7a1a,	// (0x00035e01) bg_tb_trans_pane_g1

0x7a22,	// (0x00035e09) bg_tb_trans_pane_g2

0x7a2a,	// (0x00035e11) bg_tb_trans_pane_g3

0x7a32,	// (0x00035e19) bg_tb_trans_pane_g4

0x7a3a,	// (0x00035e21) bg_tb_trans_pane_g5

0x7a52,	// (0x00035e39) bg_tb_trans_pane_g6

0x7a5a,	// (0x00035e41) bg_tb_trans_pane_g7

0x7a42,	// (0x00035e29) bg_tb_trans_pane_g8

0x7a4a,	// (0x00035e31) bg_tb_trans_pane_g9

0x0008,

0xfc3b,	// (0x0003e022) bg_tb_trans_pane_g

0xabbd,	// (0x00038fa4) cell_toolbar_trans_pane_ParamLimits

0xabbd,	// (0x00038fa4) cell_toolbar_trans_pane

0x9797,	// (0x00037b7e) cell_toolbar_trans_pane_g1

0x1eb0,	// (0x00030297) list_form2_midp_pane_t1

0x1ebe,	// (0x000302a5) list_form2_midp_pane_t2

0x0001,

0xfae4,	// (0x0003decb) list_form2_midp_pane_t

0x946b,	// (0x00037852) scroll_pane_cp51_ParamLimits

0x95e1,	// (0x000379c8) form2_midp_wait_pane_g1

0x95ea,	// (0x000379d1) form2_midp_wait_pane_g2

0x95f3,	// (0x000379da) form2_midp_wait_pane_g3

0x0002,

0xfaf9,	// (0x0003dee0) form2_midp_wait_pane_g

0x4538,	// (0x0003291f) list_highlight_pane_cp21_ParamLimits

0x9631,	// (0x00037a18) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x9640,	// (0x00037a27) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5cfe,	// (0x000340e5) list_single_2graphic_im_pane_ParamLimits

0x5cfe,	// (0x000340e5) list_single_2graphic_im_pane

0x2118,	// (0x000304ff) list_single_2graphic_im_pane_g1_ParamLimits

0x2118,	// (0x000304ff) list_single_2graphic_im_pane_g1

0x2129,	// (0x00030510) list_single_2graphic_im_pane_g2_ParamLimits

0x2129,	// (0x00030510) list_single_2graphic_im_pane_g2

0x2135,	// (0x0003051c) list_single_2graphic_im_pane_g3_ParamLimits

0x2135,	// (0x0003051c) list_single_2graphic_im_pane_g3

0x0003,

0xfc4e,	// (0x0003e035) list_single_2graphic_im_pane_g_ParamLimits

0xfc4e,	// (0x0003e035) list_single_2graphic_im_pane_g

0x2149,	// (0x00030530) list_single_2graphic_im_pane_t1_ParamLimits

0x2149,	// (0x00030530) list_single_2graphic_im_pane_t1

0x9cfa,	// (0x000380e1) list_single_graphic_2heading_pane_fp_ParamLimits

0x9cfa,	// (0x000380e1) list_single_graphic_2heading_pane_fp

0x3f41,	// (0x00032328) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x3f41,	// (0x00032328) list_single_graphic_2heading_pane_fp_g1

0x9d0e,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x9d0e,	// (0x000380f5) list_single_graphic_2heading_pane_fp_g2

0x4b7d,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4b7d,	// (0x00032f64) list_single_graphic_2heading_pane_fp_g3

0x6170,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6170,	// (0x00034557) list_single_graphic_2heading_pane_fp_g4

0x9d1a,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x9d1a,	// (0x00038101) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb7c,	// (0x0003df63) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb7c,	// (0x0003df63) list_single_graphic_2heading_pane_fp_g

0x4074,	// (0x0003245b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4074,	// (0x0003245b) list_single_graphic_2heading_pane_fp_t1

0x3f79,	// (0x00032360) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x3f79,	// (0x00032360) list_single_graphic_2heading_pane_fp_t2

0x408a,	// (0x00032471) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x408a,	// (0x00032471) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc57,	// (0x0003e03e) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc57,	// (0x0003e03e) list_single_graphic_2heading_pane_fp_t

0x9820,	// (0x00037c07) fep_hwr_write_pane_g5_ParamLimits

0x9820,	// (0x00037c07) fep_hwr_write_pane_g5

0x982c,	// (0x00037c13) fep_hwr_write_pane_g6_ParamLimits

0x982c,	// (0x00037c13) fep_hwr_write_pane_g6

0xaa71,	// (0x00038e58) eswt_shell_pane_ParamLimits

0x7a9a,	// (0x00035e81) bg_popup_window_pane_cp18_ParamLimits

0x8aec,	// (0x00036ed3) heading_pane_cp70

0xab60,	// (0x00038f47) popup_eswt_tasktip_window_t1_ParamLimits

0x15a4,	// (0x0002f98b) aid_touch_tab_arrow_left

0x15b8,	// (0x0002f99f) aid_touch_tab_arrow_right

0x0637,	// (0x0002ea1e) title_pane_g3_ParamLimits

0x0637,	// (0x0002ea1e) title_pane_g3

0x4c01,	// (0x00032fe8) set_value_pane_g1

0xd6fe,	// (0x0003bae5) popup_toolbar_trans_pane_ParamLimits

0xab97,	// (0x00038f7e) aid_size_cell_tb_trans_pane_ParamLimits

0x4c31,	// (0x00033018) bg_tb_trans_pane_ParamLimits

0xaba9,	// (0x00038f90) grid_tb_trans_pane_ParamLimits

0x470b,	// (0x00032af2) cont_note_pane_ParamLimits

0x470b,	// (0x00032af2) cont_note_pane

0x4998,	// (0x00032d7f) cont_snote2_single_text_pane_ParamLimits

0x4998,	// (0x00032d7f) cont_snote2_single_text_pane

0x4998,	// (0x00032d7f) cont_snote2_single_graphic_pane_ParamLimits

0x4998,	// (0x00032d7f) cont_snote2_single_graphic_pane

0x7fda,	// (0x000363c1) cont_note_wait_pane_ParamLimits

0x7fda,	// (0x000363c1) cont_note_wait_pane

0x7fda,	// (0x000363c1) cont_note_image_pane_ParamLimits

0x7fda,	// (0x000363c1) cont_note_image_pane

0xabef,	// (0x00038fd6) popup_note2_window_g1_ParamLimits

0xabef,	// (0x00038fd6) popup_note2_window_g1

0xac20,	// (0x00039007) popup_note2_window_t1_ParamLimits

0xac20,	// (0x00039007) popup_note2_window_t1

0xac65,	// (0x0003904c) popup_note2_window_t2_ParamLimits

0xac65,	// (0x0003904c) popup_note2_window_t2

0xacaa,	// (0x00039091) popup_note2_window_t3_ParamLimits

0xacaa,	// (0x00039091) popup_note2_window_t3

0xacef,	// (0x000390d6) popup_note2_window_t4_ParamLimits

0xacef,	// (0x000390d6) popup_note2_window_t4

0x478f,	// (0x00032b76) popup_note2_window_t5_ParamLimits

0x478f,	// (0x00032b76) popup_note2_window_t5

0x0004,

0xfc63,	// (0x0003e04a) popup_note2_window_t_ParamLimits

0xfc63,	// (0x0003e04a) popup_note2_window_t

0xad1e,	// (0x00039105) popup_note2_image_window_g1_ParamLimits

0xad1e,	// (0x00039105) popup_note2_image_window_g1

0xad2a,	// (0x00039111) popup_note2_image_window_g2_ParamLimits

0xad2a,	// (0x00039111) popup_note2_image_window_g2

0x0001,

0xfc6e,	// (0x0003e055) popup_note2_image_window_g_ParamLimits

0xfc6e,	// (0x0003e055) popup_note2_image_window_g

0xad3c,	// (0x00039123) popup_note2_image_window_t1_ParamLimits

0xad3c,	// (0x00039123) popup_note2_image_window_t1

0xad54,	// (0x0003913b) popup_note2_image_window_t2_ParamLimits

0xad54,	// (0x0003913b) popup_note2_image_window_t2

0xad6c,	// (0x00039153) popup_note2_image_window_t3_ParamLimits

0xad6c,	// (0x00039153) popup_note2_image_window_t3

0x0002,

0xfc73,	// (0x0003e05a) popup_note2_image_window_t_ParamLimits

0xfc73,	// (0x0003e05a) popup_note2_image_window_t

0x7fe8,	// (0x000363cf) popup_note2_wait_window_g1_ParamLimits

0x7fe8,	// (0x000363cf) popup_note2_wait_window_g1

0x7ff4,	// (0x000363db) popup_note2_wait_window_g2_ParamLimits

0x7ff4,	// (0x000363db) popup_note2_wait_window_g2

0x8000,	// (0x000363e7) popup_note2_wait_window_g3_ParamLimits

0x8000,	// (0x000363e7) popup_note2_wait_window_g3

0x0002,

0xf841,	// (0x0003dc28) popup_note2_wait_window_g_ParamLimits

0xf841,	// (0x0003dc28) popup_note2_wait_window_g

0xad88,	// (0x0003916f) popup_note2_wait_window_t1_ParamLimits

0xad88,	// (0x0003916f) popup_note2_wait_window_t1

0xada6,	// (0x0003918d) popup_note2_wait_window_t2_ParamLimits

0xada6,	// (0x0003918d) popup_note2_wait_window_t2

0xadc4,	// (0x000391ab) popup_note2_wait_window_t3_ParamLimits

0xadc4,	// (0x000391ab) popup_note2_wait_window_t3

0xadd6,	// (0x000391bd) popup_note2_wait_window_t4_ParamLimits

0xadd6,	// (0x000391bd) popup_note2_wait_window_t4

0x0003,

0xfc7a,	// (0x0003e061) popup_note2_wait_window_t_ParamLimits

0xfc7a,	// (0x0003e061) popup_note2_wait_window_t

0xade8,	// (0x000391cf) wait_bar2_pane_ParamLimits

0xade8,	// (0x000391cf) wait_bar2_pane

0xae00,	// (0x000391e7) popup_snote2_single_text_window_g1_ParamLimits

0xae00,	// (0x000391e7) popup_snote2_single_text_window_g1

0xae28,	// (0x0003920f) popup_snote2_single_text_window_t1_ParamLimits

0xae28,	// (0x0003920f) popup_snote2_single_text_window_t1

0xae74,	// (0x0003925b) popup_snote2_single_text_window_t2_ParamLimits

0xae74,	// (0x0003925b) popup_snote2_single_text_window_t2

0xaec0,	// (0x000392a7) popup_snote2_single_text_window_t3_ParamLimits

0xaec0,	// (0x000392a7) popup_snote2_single_text_window_t3

0xaf01,	// (0x000392e8) popup_snote2_single_text_window_t4_ParamLimits

0xaf01,	// (0x000392e8) popup_snote2_single_text_window_t4

0xaf37,	// (0x0003931e) popup_snote2_single_text_window_t5_ParamLimits

0xaf37,	// (0x0003931e) popup_snote2_single_text_window_t5

0x0004,

0xfc83,	// (0x0003e06a) popup_snote2_single_text_window_t_ParamLimits

0xfc83,	// (0x0003e06a) popup_snote2_single_text_window_t

0xaf62,	// (0x00039349) popup_snote2_single_graphic_window_g1_ParamLimits

0xaf62,	// (0x00039349) popup_snote2_single_graphic_window_g1

0xaf8a,	// (0x00039371) popup_snote2_single_graphic_window_g2_ParamLimits

0xaf8a,	// (0x00039371) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8e,	// (0x0003e075) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8e,	// (0x0003e075) popup_snote2_single_graphic_window_g

0xafb2,	// (0x00039399) popup_snote2_single_graphic_window_t1_ParamLimits

0xafb2,	// (0x00039399) popup_snote2_single_graphic_window_t1

0xaffe,	// (0x000393e5) popup_snote2_single_graphic_window_t2_ParamLimits

0xaffe,	// (0x000393e5) popup_snote2_single_graphic_window_t2

0xaec0,	// (0x000392a7) popup_snote2_single_graphic_window_t3_ParamLimits

0xaec0,	// (0x000392a7) popup_snote2_single_graphic_window_t3

0xaf01,	// (0x000392e8) popup_snote2_single_graphic_window_t4_ParamLimits

0xaf01,	// (0x000392e8) popup_snote2_single_graphic_window_t4

0xaf37,	// (0x0003931e) popup_snote2_single_graphic_window_t5_ParamLimits

0xaf37,	// (0x0003931e) popup_snote2_single_graphic_window_t5

0x0004,

0xfc93,	// (0x0003e07a) popup_snote2_single_graphic_window_t_ParamLimits

0xfc93,	// (0x0003e07a) popup_snote2_single_graphic_window_t

0x9404,	// (0x000377eb) clock_nsta_pane_cp2_t1

0x9404,	// (0x000377eb) clock_nsta_pane_cp2_t2

0x0001,

0xfaba,	// (0x0003dea1) clock_nsta_pane_cp2_t

0x38f4,	// (0x00031cdb) form_field_data_wide_pane_g1_ParamLimits

0x4ba1,	// (0x00032f88) form_field_data_wide_pane_g2_ParamLimits

0x4ba1,	// (0x00032f88) form_field_data_wide_pane_g2

0x4c4b,	// (0x00033032) form_field_data_wide_pane_g3_ParamLimits

0x4c4b,	// (0x00033032) form_field_data_wide_pane_g3

0x0002,

0xf680,	// (0x0003da67) form_field_data_wide_pane_g_ParamLimits

0xf680,	// (0x0003da67) form_field_data_wide_pane_g

0x1df9,	// (0x000301e0) grid_touch_3_pane_ParamLimits

0x1df9,	// (0x000301e0) grid_touch_3_pane

0x217a,	// (0x00030561) cell_touch_3_pane_ParamLimits

0x217a,	// (0x00030561) cell_touch_3_pane

0x9797,	// (0x00037b7e) cell_touch_3_pane_g1

0x9797,	// (0x00037b7e) cell_touch_3_pane_g2

0x0001,

0xfb3f,	// (0x0003df26) cell_touch_3_pane_g

0x47e7,	// (0x00032bce) cont_query_data_pane

0x47ef,	// (0x00032bd6) cont_query_data_pane_cp1

0xb04a,	// (0x00039431) button_value_adjust_pane_cp7

0xb052,	// (0x00039439) query_popup_pane_cp3

0x7230,	// (0x00035617) bg_popup_sub_pane_cp22_ParamLimits

0x517b,	// (0x00033562) navi_navi_volume_pane_cp2

0x5193,	// (0x0003357a) popup_side_volume_key_window_g2

0x519f,	// (0x00033586) popup_side_volume_key_window_g3

0x0002,

0xf716,	// (0x0003dafd) popup_side_volume_key_window_g

0x51b9,	// (0x000335a0) popup_side_volume_key_window_t2

0x0001,

0xf71d,	// (0x0003db04) popup_side_volume_key_window_t

0x747a,	// (0x00035861) popup_side_volume_key_window_ParamLimits

0xc7ca,	// (0x0003abb1) list_double_graphic_pane_g4_ParamLimits

0xc7ca,	// (0x0003abb1) list_double_graphic_pane_g4

0xcc7e,	// (0x0003b065) list_single_2heading_msg_pane_ParamLimits

0xcc7e,	// (0x0003b065) list_single_2heading_msg_pane

0xccb4,	// (0x0003b09b) list_single_2heading_msg_pane_g1_ParamLimits

0xccb4,	// (0x0003b09b) list_single_2heading_msg_pane_g1

0xccc0,	// (0x0003b0a7) list_single_2heading_msg_pane_g2_ParamLimits

0xccc0,	// (0x0003b0a7) list_single_2heading_msg_pane_g2

0xccd3,	// (0x0003b0ba) list_single_2heading_msg_pane_g3_ParamLimits

0xccd3,	// (0x0003b0ba) list_single_2heading_msg_pane_g3

0xccdf,	// (0x0003b0c6) list_single_2heading_msg_pane_g4_ParamLimits

0xccdf,	// (0x0003b0c6) list_single_2heading_msg_pane_g4

0x0003,

0xfc9e,	// (0x0003e085) list_single_2heading_msg_pane_g_ParamLimits

0xfc9e,	// (0x0003e085) list_single_2heading_msg_pane_g

0xccf7,	// (0x0003b0de) list_single_2heading_msg_pane_t1_ParamLimits

0xccf7,	// (0x0003b0de) list_single_2heading_msg_pane_t1

0xcd1f,	// (0x0003b106) list_single_2heading_msg_pane_t2_ParamLimits

0xcd1f,	// (0x0003b106) list_single_2heading_msg_pane_t2

0xcd8a,	// (0x0003b171) list_single_2heading_msg_pane_t3_ParamLimits

0xcd8a,	// (0x0003b171) list_single_2heading_msg_pane_t3

0x4168,	// (0x0003254f) list_single_2heading_msg_pane_t4_ParamLimits

0x4168,	// (0x0003254f) list_single_2heading_msg_pane_t4

0x0003,

0xfca7,	// (0x0003e08e) list_single_2heading_msg_pane_t_ParamLimits

0xfca7,	// (0x0003e08e) list_single_2heading_msg_pane_t

0x44f4,	// (0x000328db) title_pane_g4_ParamLimits

0x44f4,	// (0x000328db) title_pane_g4

0x4f5e,	// (0x00033345) title_pane_stacon_g3_ParamLimits

0x4f5e,	// (0x00033345) title_pane_stacon_g3

0xabe3,	// (0x00038fca) list_single_2graphic_im_pane_g4_ParamLimits

0xabe3,	// (0x00038fca) list_single_2graphic_im_pane_g4

0x8916,	// (0x00036cfd) popup_side_volume_key_window_cp

0x8d68,	// (0x0003714f) main_idle_act2_pane_t1

0x59e0,	// (0x00033dc7) toolbar_button_pane_g10

0x1162,	// (0x0002f549) popup_toolbar_window_cp1

0x93f5,	// (0x000377dc) clock_nsta_pane_cp_t1

0x93f5,	// (0x000377dc) clock_nsta_pane_cp_t2

0x0001,

0xfab5,	// (0x0003de9c) clock_nsta_pane_cp_t

0x517b,	// (0x00033562) navi_navi_volume_pane_cp2_ParamLimits

0x5187,	// (0x0003356e) popup_side_volume_key_window_g1_ParamLimits

0x5193,	// (0x0003357a) popup_side_volume_key_window_g2_ParamLimits

0x519f,	// (0x00033586) popup_side_volume_key_window_g3_ParamLimits

0xf716,	// (0x0003dafd) popup_side_volume_key_window_g_ParamLimits

0x5f33,	// (0x0003431a) fep_hwr_aid_pane

0x0054,	// (0x0002e43b) bg_fep_hwr_top_pane_g4_ParamLimits

0x97f0,	// (0x00037bd7) fep_hwr_top_pane_g1_ParamLimits

0x9802,	// (0x00037be9) fep_hwr_top_pane_g2_ParamLimits

0x5fe6,	// (0x000343cd) fep_hwr_top_pane_g3_ParamLimits

0xfb0a,	// (0x0003def1) fep_hwr_top_pane_g_ParamLimits

0x5ffb,	// (0x000343e2) fep_hwr_top_text_pane_ParamLimits

0x86e1,	// (0x00036ac8) aid_touch_tab_arrow_arrow_2

0x86ea,	// (0x00036ad1) aid_touch_tab_arrow_left_2

0x5f47,	// (0x0003432e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5f7a,	// (0x00034361) fep_hwr_prediction_pane

0x9935,	// (0x00037d1c) fep_vkb_prediction_pane

0x1f46,	// (0x0003032d) fep_vkb_side_pane_g3_ParamLimits

0x1f46,	// (0x0003032d) fep_vkb_side_pane_g3

0x99c3,	// (0x00037daa) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9d6e,	// (0x00038155) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9d7b,	// (0x00038162) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb4,	// (0x0003df9b) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xb063,	// (0x0003944a) fep_hwr_prediction_pane_g1

0x62fe,	// (0x000346e5) fep_hwr_prediction_pane_g2

0x6306,	// (0x000346ed) fep_hwr_prediction_pane_g3

0x630e,	// (0x000346f5) fep_hwr_prediction_pane_g4

0x0003,

0xfcb0,	// (0x0003e097) fep_hwr_prediction_pane_g

0xb063,	// (0x0003944a) fep_vkb_prediction_pane_g1

0xb06d,	// (0x00039454) fep_vkb_prediction_pane_g2

0xb075,	// (0x0003945c) fep_vkb_prediction_pane_g3

0xb07d,	// (0x00039464) fep_vkb_prediction_pane_g4

0x0003,

0xfcb9,	// (0x0003e0a0) fep_vkb_prediction_pane_g

0x5ca6,	// (0x0003408d) slider_set_pane_g3

0x5cba,	// (0x000340a1) slider_set_pane_g4

0x5cd2,	// (0x000340b9) slider_set_pane_g5

0x5ca6,	// (0x0003408d) slider_set_pane_g6

0xd907,	// (0x0003bcee) slider_set_pane_g7

0x8b6b,	// (0x00036f52) slider_form_pane_g3

0x8b74,	// (0x00036f5b) slider_form_pane_g4

0x8b7c,	// (0x00036f63) slider_form_pane_g5

0x8b6b,	// (0x00036f52) slider_form_pane_g6

0x1c2f,	// (0x00030016) slider_form_pane_g7

0x8fb1,	// (0x00037398) slider_set_pane_vc_g3

0x8fba,	// (0x000373a1) slider_set_pane_vc_g4

0x8fc3,	// (0x000373aa) slider_set_pane_vc_g5

0x8fb1,	// (0x00037398) slider_set_pane_vc_g6

0x8fcc,	// (0x000373b3) slider_set_pane_vc_g7

0x8fb1,	// (0x00037398) slider_form_pane_vc_g1

0x8fba,	// (0x000373a1) slider_form_pane_vc_g2

0x8fc3,	// (0x000373aa) slider_form_pane_vc_g3

0x8fb1,	// (0x00037398) slider_form_pane_vc_g4

0x9140,	// (0x00037527) slider_form_pane_vc_g5

0x0004,

0xfa87,	// (0x0003de6e) slider_form_pane_vc_g

0x41db,	// (0x000325c2) main_idle_act3_pane

0xb085,	// (0x0003946c) ai3_links_pane

0x21c1,	// (0x000305a8) popup_ai3_data_window_ParamLimits

0x21c1,	// (0x000305a8) popup_ai3_data_window

0x41db,	// (0x000325c2) grid_ai3_links_pane

0x21d9,	// (0x000305c0) cell_ai3_links_pane_ParamLimits

0x21d9,	// (0x000305c0) cell_ai3_links_pane

0xb08e,	// (0x00039475) bg_popup_sub_pane_cp11

0xb09b,	// (0x00039482) cell_ai3_links_pane_g1

0x41db,	// (0x000325c2) bg_popup_sub_pane_cp12

0xb0c0,	// (0x000394a7) heading_ai3_data_pane

0xb0c8,	// (0x000394af) list_ai3_gene_pane

0xb0d4,	// (0x000394bb) popup_ai3_data_window_g1

0xb0dc,	// (0x000394c3) heading_ai3_data_pane_g1

0xb0e4,	// (0x000394cb) heading_ai3_data_pane_t1

0xb0f2,	// (0x000394d9) list_double_ai3_gene_pane_ParamLimits

0xb0f2,	// (0x000394d9) list_double_ai3_gene_pane

0xb0ff,	// (0x000394e6) list_single_ai3_gene_pane_ParamLimits

0xb0ff,	// (0x000394e6) list_single_ai3_gene_pane

0x975c,	// (0x00037b43) list_highlight_pane_cp7_ParamLimits

0x975c,	// (0x00037b43) list_highlight_pane_cp7

0xb10c,	// (0x000394f3) list_single_a13_gene_pane_t1_ParamLimits

0xb10c,	// (0x000394f3) list_single_a13_gene_pane_t1

0xb123,	// (0x0003950a) list_single_ai3_gene_pane_g1

0xb12c,	// (0x00039513) list_single_ai3_gene_pane_g2

0x0001,

0xfcc2,	// (0x0003e0a9) list_single_ai3_gene_pane_g

0xb134,	// (0x0003951b) list_double_ai3_gene_pane_g1_ParamLimits

0xb134,	// (0x0003951b) list_double_ai3_gene_pane_g1

0xb140,	// (0x00039527) list_double_ai3_gene_pane_t1_ParamLimits

0xb140,	// (0x00039527) list_double_ai3_gene_pane_t1

0xb15c,	// (0x00039543) list_double_ai3_gene_pane_t2_ParamLimits

0xb15c,	// (0x00039543) list_double_ai3_gene_pane_t2

0xb171,	// (0x00039558) list_double_ai3_gene_pane_t3_ParamLimits

0xb171,	// (0x00039558) list_double_ai3_gene_pane_t3

0x0002,

0xfcc7,	// (0x0003e0ae) list_double_ai3_gene_pane_t_ParamLimits

0xfcc7,	// (0x0003e0ae) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x40a0,	// (0x00032487) aid_size_min_col_2

0x21ad,	// (0x00030594) aid_size_min_msg_ParamLimits

0x21ad,	// (0x00030594) aid_size_min_msg

0x1f5a,	// (0x00030341) fep_vkb_top_text_pane_g2_ParamLimits

0x1f5a,	// (0x00030341) fep_vkb_top_text_pane_g2

0x0001,

0xfb3a,	// (0x0003df21) fep_vkb_top_text_pane_g_ParamLimits

0xfb3a,	// (0x0003df21) fep_vkb_top_text_pane_g

0x41db,	// (0x000325c2) main_hc_apps_shell_pane

0xb18e,	// (0x00039575) grid_hc_apps_pane_ParamLimits

0xb18e,	// (0x00039575) grid_hc_apps_pane

0xb19d,	// (0x00039584) list_hc_apps_pane

0xb1a5,	// (0x0003958c) scroll_pane_cp37_ParamLimits

0xb1a5,	// (0x0003958c) scroll_pane_cp37

0x21ef,	// (0x000305d6) cell_hc_apps_pane_ParamLimits

0x21ef,	// (0x000305d6) cell_hc_apps_pane

0x2289,	// (0x00030670) cell_hc_apps_pane_g1_ParamLimits

0x2289,	// (0x00030670) cell_hc_apps_pane_g1

0xb1b1,	// (0x00039598) cell_hc_apps_pane_g2_ParamLimits

0xb1b1,	// (0x00039598) cell_hc_apps_pane_g2

0xb1cd,	// (0x000395b4) cell_hc_apps_pane_g3_ParamLimits

0xb1cd,	// (0x000395b4) cell_hc_apps_pane_g3

0x0002,

0xfcce,	// (0x0003e0b5) cell_hc_apps_pane_g_ParamLimits

0xfcce,	// (0x0003e0b5) cell_hc_apps_pane_g

0x22b6,	// (0x0003069d) cell_hc_apps_pane_t1_ParamLimits

0x22b6,	// (0x0003069d) cell_hc_apps_pane_t1

0x470b,	// (0x00032af2) grid_highlight_pane_cp10_ParamLimits

0x470b,	// (0x00032af2) grid_highlight_pane_cp10

0x22f4,	// (0x000306db) list_single_hc_apps_pane_ParamLimits

0x22f4,	// (0x000306db) list_single_hc_apps_pane

0x2320,	// (0x00030707) list_single_hc_apps_pane_g1

0xd97e,	// (0x0003bd65) list_single_hc_apps_pane_g2

0x0001,

0xfcd5,	// (0x0003e0bc) list_single_hc_apps_pane_g

0xd997,	// (0x0003bd7e) list_single_hc_apps_pane_g2_copy1

0xcdf8,	// (0x0003b1df) list_single_hc_apps_pane_t1

0x4538,	// (0x0003291f) bg_set_opt_pane_cp_ParamLimits

0x4556,	// (0x0003293d) setting_slider_pane_t1_ParamLimits

0xcf7c,	// (0x0003b363) setting_slider_pane_t2_ParamLimits

0xcf95,	// (0x0003b37c) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0003d945) setting_slider_pane_t_ParamLimits

0x459c,	// (0x00032983) slider_set_pane_ParamLimits

0x540b,	// (0x000337f2) control_pane_g5_ParamLimits

0x540b,	// (0x000337f2) control_pane_g5

0x8b33,	// (0x00036f1a) slider_set_pane_g1_ParamLimits

0x5c9a,	// (0x00034081) slider_set_pane_g2_ParamLimits

0x5ca6,	// (0x0003408d) slider_set_pane_g3_ParamLimits

0x5cba,	// (0x000340a1) slider_set_pane_g4_ParamLimits

0x5cd2,	// (0x000340b9) slider_set_pane_g5_ParamLimits

0x5ca6,	// (0x0003408d) slider_set_pane_g6_ParamLimits

0xd907,	// (0x0003bcee) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0003dd44) slider_set_pane_g_ParamLimits

0x4538,	// (0x0003291f) navi_icon_text_pane_ParamLimits

0x1576,	// (0x0002f95d) aid_fill_nsta_2_ParamLimits

0x15a4,	// (0x0002f98b) aid_touch_tab_arrow_left_ParamLimits

0x15b8,	// (0x0002f99f) aid_touch_tab_arrow_right_ParamLimits

0x1654,	// (0x0002fa3b) clock_nsta_pane_ParamLimits

0x86c3,	// (0x00036aaa) navi_icon_pane_g1_ParamLimits

0x86cf,	// (0x00036ab6) navi_text_pane_t1_ParamLimits

0x9445,	// (0x0003782c) navi_icon_text_pane_g1_ParamLimits

0x9451,	// (0x00037838) navi_icon_text_pane_t1_ParamLimits

0x2320,	// (0x00030707) list_single_hc_apps_pane_g1_ParamLimits

0xd97e,	// (0x0003bd65) list_single_hc_apps_pane_g2_ParamLimits

0xfcd5,	// (0x0003e0bc) list_single_hc_apps_pane_g_ParamLimits

0xd997,	// (0x0003bd7e) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcdf8,	// (0x0003b1df) list_single_hc_apps_pane_t1_ParamLimits

0xcec2,	// (0x0003b2a9) popup_toolbar2_fixed_window_ParamLimits

0xcec2,	// (0x0003b2a9) popup_toolbar2_fixed_window

0xd6f6,	// (0x0003badd) popup_toolbar2_float_window

0x41db,	// (0x000325c2) bg_popup_sub_pane_cp27

0xb1ef,	// (0x000395d6) grid_toolbar2_float_pane

0x41db,	// (0x000325c2) bg_popup_sub_pane_cp26

0xb1ef,	// (0x000395d6) grid_toolbar2_fixed_pane

0x2339,	// (0x00030720) cell_toolbar2_fixed_pane_ParamLimits

0x2339,	// (0x00030720) cell_toolbar2_fixed_pane

0x2354,	// (0x0003073b) cell_toolbar2_fixed_pane_g1

0xb1f7,	// (0x000395de) toolbar2_fixed_button_pane

0x7a1a,	// (0x00035e01) toolbar2_fixed_button_pane_g1

0x7a22,	// (0x00035e09) toolbar2_fixed_button_pane_g2

0x7a2a,	// (0x00035e11) toolbar2_fixed_button_pane_g3

0x7a32,	// (0x00035e19) toolbar2_fixed_button_pane_g4

0x7a3a,	// (0x00035e21) toolbar2_fixed_button_pane_g5

0x7a42,	// (0x00035e29) toolbar2_fixed_button_pane_g6

0x7a4a,	// (0x00035e31) toolbar2_fixed_button_pane_g7

0x7a52,	// (0x00035e39) toolbar2_fixed_button_pane_g8

0x7a5a,	// (0x00035e41) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0003dc46) toolbar2_fixed_button_pane_g

0xb1ff,	// (0x000395e6) cell_toolbar2_float_pane_ParamLimits

0xb1ff,	// (0x000395e6) cell_toolbar2_float_pane

0xb210,	// (0x000395f7) cell_toolbar2_float_pane_g1

0xb1f7,	// (0x000395de) toolbar2_fixed_button_pane_cp

0x1f0f,	// (0x000302f6) fep_vkb_accented_list_pane_ParamLimits

0x1f0f,	// (0x000302f6) fep_vkb_accented_list_pane

0x613d,	// (0x00034524) bg_popup_fep_shadow_pane_g9

0x7682,	// (0x00035a69) bg_popup_fep_shadow_pane_cp3

0x4d5b,	// (0x00033142) list_accented_list_pane

0xb219,	// (0x00039600) list_single_accented_list_pane_ParamLimits

0xb219,	// (0x00039600) list_single_accented_list_pane

0x7682,	// (0x00035a69) list_highlight_pane_cp10

0xb22a,	// (0x00039611) list_single_accented_list_pane_t1

0xd638,	// (0x0003ba1f) popup_slider_window_ParamLimits

0xd638,	// (0x0003ba1f) popup_slider_window

0xb05a,	// (0x00039441) aid_indentation_list_msg

0x2433,	// (0x0003081a) bg_popup_window_pane_cp19

0xb290,	// (0x00039677) popup_slider_window_g1

0xb2ac,	// (0x00039693) popup_slider_window_g2

0xb2c8,	// (0x000396af) popup_slider_window_g3

0x0005,

0xfcda,	// (0x0003e0c1) popup_slider_window_g

0xb2e4,	// (0x000396cb) popup_slider_window_t1

0xb328,	// (0x0003970f) small_volume_slider_vertical_pane

0x9797,	// (0x00037b7e) small_volume_slider_vertical_pane_g1

0x9797,	// (0x00037b7e) small_volume_slider_vertical_pane_g2

0xb344,	// (0x0003972b) small_volume_slider_vertical_pane_g3

0x0002,

0xfcec,	// (0x0003e0d3) small_volume_slider_vertical_pane_g

0xce46,	// (0x0003b22d) area_side_right_pane_ParamLimits

0xce46,	// (0x0003b22d) area_side_right_pane

0xd9b3,	// (0x0003bd9a) aid_size_side_button_ParamLimits

0xd9b3,	// (0x0003bd9a) aid_size_side_button

0xd9cc,	// (0x0003bdb3) grid_sctrl_middle_pane_ParamLimits

0xd9cc,	// (0x0003bdb3) grid_sctrl_middle_pane

0x637b,	// (0x00034762) sctrl_sk_bottom_pane

0x638c,	// (0x00034773) sctrl_sk_top_pane

0x639e,	// (0x00034785) aid_touch_sctrl_top

0x470b,	// (0x00032af2) bg_sctrl_sk_pane_ParamLimits

0x470b,	// (0x00032af2) bg_sctrl_sk_pane

0x63ab,	// (0x00034792) sctrl_sk_top_pane_g1

0x63b8,	// (0x0003479f) sctrl_sk_top_pane_t1

0x639e,	// (0x00034785) aid_touch_sctrl_bottom

0x470b,	// (0x00032af2) bg_sctrl_sk_pane_cp_ParamLimits

0x470b,	// (0x00032af2) bg_sctrl_sk_pane_cp

0x63d3,	// (0x000347ba) sctrl_sk_bottom_pane_g1

0x63b8,	// (0x0003479f) sctrl_sk_bottom_pane_t1

0xd9e2,	// (0x0003bdc9) cell_sctrl_middle_pane_ParamLimits

0xd9e2,	// (0x0003bdc9) cell_sctrl_middle_pane

0xd9f3,	// (0x0003bdda) aid_touch_sctrl_middle_ParamLimits

0xd9f3,	// (0x0003bdda) aid_touch_sctrl_middle

0xda00,	// (0x0003bde7) bg_sctrl_middle_pane_ParamLimits

0xda00,	// (0x0003bde7) bg_sctrl_middle_pane

0xda0e,	// (0x0003bdf5) cell_sctrl_middle_pane_g1_ParamLimits

0xda0e,	// (0x0003bdf5) cell_sctrl_middle_pane_g1

0xda1c,	// (0x0003be03) cell_sctrl_middle_pane_g2_ParamLimits

0xda1c,	// (0x0003be03) cell_sctrl_middle_pane_g2

0x0001,

0xfcf8,	// (0x0003e0df) cell_sctrl_middle_pane_g_ParamLimits

0xfcf8,	// (0x0003e0df) cell_sctrl_middle_pane_g

0x7a1a,	// (0x00035e01) bg_sctrl_middle_pane_g1

0x7a22,	// (0x00035e09) bg_sctrl_middle_pane_g2

0x7a2a,	// (0x00035e11) bg_sctrl_middle_pane_g3

0x7a32,	// (0x00035e19) bg_sctrl_middle_pane_g4

0x7a3a,	// (0x00035e21) bg_sctrl_middle_pane_g5

0x7a42,	// (0x00035e29) bg_sctrl_middle_pane_g6

0x7a4a,	// (0x00035e31) bg_sctrl_middle_pane_g7

0x7a52,	// (0x00035e39) bg_sctrl_middle_pane_g8

0x0007,

0xfcfd,	// (0x0003e0e4) bg_sctrl_middle_pane_g

0x7a5a,	// (0x00035e41) bg_sctrl_middle_pane_g8_copy1

0x7a1a,	// (0x00035e01) bg_sctrl_sk_pane_g1

0x7a22,	// (0x00035e09) bg_sctrl_sk_pane_g2

0x7a2a,	// (0x00035e11) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0003dc46) bg_sctrl_sk_pane_g

0x4aba,	// (0x00032ea1) aid_size_touch_scroll_bar

0x7a32,	// (0x00035e19) bg_sctrl_sk_pane_g4

0x7a3a,	// (0x00035e21) bg_sctrl_sk_pane_g5

0x7a42,	// (0x00035e29) bg_sctrl_sk_pane_g6

0x7a4a,	// (0x00035e31) bg_sctrl_sk_pane_g7

0x7a52,	// (0x00035e39) bg_sctrl_sk_pane_g8

0x7a5a,	// (0x00035e41) bg_sctrl_sk_pane_g9

0x55a9,	// (0x00033990) popup_fep_china_hwr2_fs_candidate_window

0xd233,	// (0x0003b61a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd233,	// (0x0003b61a) popup_fep_china_hwr2_fs_control_window

0x99c3,	// (0x00037daa) sctrl_sk_top_pane_g2

0x0001,

0xfcf3,	// (0x0003e0da) sctrl_sk_top_pane_g

0x24eb,	// (0x000308d2) aid_fep_china_hwr2_fs_cell_ParamLimits

0x24eb,	// (0x000308d2) aid_fep_china_hwr2_fs_cell

0x24ff,	// (0x000308e6) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x24ff,	// (0x000308e6) bg_popup_fep_shadow_pane_cp4

0x2516,	// (0x000308fd) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2516,	// (0x000308fd) bg_popup_fep_shadow_pane_cp5

0x2528,	// (0x0003090f) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2528,	// (0x0003090f) popup_fep_china_hwr2_fs_control_bar_grid

0x253c,	// (0x00030923) popup_fep_china_hwr2_fs_control_funtion_grid

0xda29,	// (0x0003be10) aid_fep_china_hwr2_fs_candi_cell

0x41db,	// (0x000325c2) bg_popup_fep_shadow_pane_cp6

0xda33,	// (0x0003be1a) popup_fep_china_hwr2_fs_candidate_grid

0x2544,	// (0x0003092b) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2544,	// (0x0003092b) cell_fep_china_hwr2_fs_funtion_grid

0x9797,	// (0x00037b7e) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xda0e,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xda0e,	// (0x0003bdf5) cell_fep_china_hwr2_fs_funtion_grid_g1

0xda3b,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xda3b,	// (0x0003be22) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0e,	// (0x0003e0f5) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0e,	// (0x0003e0f5) cell_fep_china_hwr2_fs_funtion_grid_g

0x255c,	// (0x00030943) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x255c,	// (0x00030943) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2571,	// (0x00030958) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2571,	// (0x00030958) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd13,	// (0x0003e0fa) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd13,	// (0x0003e0fa) cell_fep_china_hwr2_fs_funtion_grid_t

0xda51,	// (0x0003be38) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xda59,	// (0x0003be40) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xda61,	// (0x0003be48) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd18,	// (0x0003e0ff) popup_fep_china_hwr2_fs_control_bar_grid_g

0xda69,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xda69,	// (0x0003be50) cell_fep_china_hwr2_fs_candidate_grid

0xda82,	// (0x0003be69) popup_fep_china_hwr2_fs_candidate_grid_g20

0xda8a,	// (0x0003be71) popup_fep_china_hwr2_fs_candidate_grid_g21

0x9797,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g1

0x9797,	// (0x00037b7e) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3f,	// (0x0003df26) cell_fep_china_hwr2_fs_candidate_grid_g

0xda92,	// (0x0003be79) cell_fep_china_hwr2_fs_candidate_grid_t1

0x7873,	// (0x00035c5a) clock_nsta_pane_cp_24_ParamLimits

0x7873,	// (0x00035c5a) clock_nsta_pane_cp_24

0x78d0,	// (0x00035cb7) indicator_nsta_pane_cp_24_ParamLimits

0x78d0,	// (0x00035cb7) indicator_nsta_pane_cp_24

0x85ce,	// (0x000369b5) heading_pane_g1

0x0001,

0xf8c4,	// (0x0003dcab) heading_pane_g

0x1d21,	// (0x00030108) grid_sct_catagory_button_pane

0x8c3a,	// (0x00037021) scroll_pane_cp5_ParamLimits

0x9477,	// (0x0003785e) button_value_adjust_pane_cp5_ParamLimits

0x9477,	// (0x0003785e) button_value_adjust_pane_cp5

0x9535,	// (0x0003791c) form2_midp_time_pane_ParamLimits

0xdaa0,	// (0x0003be87) cell_sct_catagory_button_pane_ParamLimits

0xdaa0,	// (0x0003be87) cell_sct_catagory_button_pane

0x975c,	// (0x00037b43) bg_button_pane_cp01_ParamLimits

0x975c,	// (0x00037b43) bg_button_pane_cp01

0x9797,	// (0x00037b7e) cell_sct_catagory_button_pane_g1

0xd6a7,	// (0x0003ba8e) popup_tb_extension_window

0x258d,	// (0x00030974) aid_size_cell_ext_ParamLimits

0x258d,	// (0x00030974) aid_size_cell_ext

0x4998,	// (0x00032d7f) bg_tb_trans_pane_cp1_ParamLimits

0x4998,	// (0x00032d7f) bg_tb_trans_pane_cp1

0x25b3,	// (0x0003099a) grid_tb_ext_pane_ParamLimits

0x25b3,	// (0x0003099a) grid_tb_ext_pane

0x25e9,	// (0x000309d0) cell_tb_ext_pane_ParamLimits

0x25e9,	// (0x000309d0) cell_tb_ext_pane

0x260d,	// (0x000309f4) cell_tb_ext_pane_g1_ParamLimits

0x260d,	// (0x000309f4) cell_tb_ext_pane_g1

0xdab2,	// (0x0003be99) cell_tb_ext_pane_t1

0x470b,	// (0x00032af2) list_highlight_pane_cp11_ParamLimits

0x470b,	// (0x00032af2) list_highlight_pane_cp11

0xced7,	// (0x0003b2be) popup_uni_indicator_window_ParamLimits

0xced7,	// (0x0003b2be) popup_uni_indicator_window

0x4c31,	// (0x00033018) bg_popup_sub_pane_cp14

0xdacd,	// (0x0003beb4) list_uniindi_pane

0xdad9,	// (0x0003bec0) uniindi_top_pane

0x470b,	// (0x00032af2) bg_uniindi_top_pane

0xdaf8,	// (0x0003bedf) uniindi_top_pane_g1

0xdb0e,	// (0x0003bef5) uniindi_top_pane_g2

0x0003,

0xfd1f,	// (0x0003e106) uniindi_top_pane_g

0xdb38,	// (0x0003bf1f) uniindi_top_pane_t1

0xdb62,	// (0x0003bf49) list_single_uniindi_pane_ParamLimits

0xdb62,	// (0x0003bf49) list_single_uniindi_pane

0x9797,	// (0x00037b7e) bg_uniindi_top_pane_g1

0xdb74,	// (0x0003bf5b) list_single_uniindi_pane_g1

0xdb87,	// (0x0003bf6e) list_single_uniindi_pane_t1

0x41db,	// (0x000325c2) control_bg_pane

0xdbac,	// (0x0003bf93) bg_sctrl_sk_pane_cp1

0xdbb5,	// (0x0003bf9c) bg_sctrl_sk_pane_cp2

0xdbbe,	// (0x0003bfa5) control_bg_pane_g1

0xdbc7,	// (0x0003bfae) control_bg_pane_g2

0x0001,

0xfd28,	// (0x0003e10f) control_bg_pane_g

0x939d,	// (0x00037784) cell_indicator_nsta_pane_g1_ParamLimits

0x1e26,	// (0x0003020d) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa3,	// (0x0003de8a) cell_indicator_nsta_pane_g_ParamLimits

0x3f17,	// (0x000322fe) form2_midp_time_pane_t1_ParamLimits

0x5f25,	// (0x0003430c) main_idle_act4_pane_ParamLimits

0x5f25,	// (0x0003430c) main_idle_act4_pane

0xd6a7,	// (0x0003ba8e) popup_tb_extension_window_ParamLimits

0x25d3,	// (0x000309ba) tb_ext_find_pane_ParamLimits

0x25d3,	// (0x000309ba) tb_ext_find_pane

0xdbd0,	// (0x0003bfb7) ai_gene_pane_1_cp1

0x7716,	// (0x00035afd) ai_gene_pane_2_cp1

0xdbd8,	// (0x0003bfbf) list_single_idle_plugin_calendar_pane

0xdbe1,	// (0x0003bfc8) list_single_idle_plugin_notification_pane

0xdbea,	// (0x0003bfd1) list_single_idle_plugin_player_pane

0x262a,	// (0x00030a11) list_single_idle_plugin_shortcut_pane_ParamLimits

0x262a,	// (0x00030a11) list_single_idle_plugin_shortcut_pane

0x2652,	// (0x00030a39) main_idle_act4_pane_t1

0x2668,	// (0x00030a4f) main_idle_act4_pane_t2

0x0001,

0xfd2d,	// (0x0003e114) main_idle_act4_pane_t

0x267e,	// (0x00030a65) middle_sk_idle_act4_pane_ParamLimits

0x267e,	// (0x00030a65) middle_sk_idle_act4_pane

0x269a,	// (0x00030a81) popup_clock_digital_analogue_window_cp2

0x26c0,	// (0x00030aa7) shortcut_wheel_idle_act4_pane_ParamLimits

0x26c0,	// (0x00030aa7) shortcut_wheel_idle_act4_pane

0x9797,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g1

0x9797,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g2

0x9797,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g3

0x9797,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g4

0x9797,	// (0x00037b7e) shortcut_wheel_idle_act4_pane_g5

0xdbf3,	// (0x0003bfda) shortcut_wheel_idle_act4_pane_g6

0xdbfb,	// (0x0003bfe2) shortcut_wheel_idle_act4_pane_g7

0xdc03,	// (0x0003bfea) shortcut_wheel_idle_act4_pane_g8

0xdc0b,	// (0x0003bff2) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd32,	// (0x0003e119) shortcut_wheel_idle_act4_pane_g

0x0054,	// (0x0002e43b) middle_sk_idle_act4_pane_g1_ParamLimits

0x0054,	// (0x0002e43b) middle_sk_idle_act4_pane_g1

0x273b,	// (0x00030b22) middle_sk_idle_act4_pane_g2_ParamLimits

0x273b,	// (0x00030b22) middle_sk_idle_act4_pane_g2

0x0001,

0xfd55,	// (0x0003e13c) middle_sk_idle_act4_pane_g_ParamLimits

0xfd55,	// (0x0003e13c) middle_sk_idle_act4_pane_g

0x2753,	// (0x00030b3a) middle_sk_idle_act4_pane_t1_ParamLimits

0x2753,	// (0x00030b3a) middle_sk_idle_act4_pane_t1

0x2782,	// (0x00030b69) grid_ai_shortcut_pane_ParamLimits

0x2782,	// (0x00030b69) grid_ai_shortcut_pane

0x279f,	// (0x00030b86) list_highlight_pane_cp16_ParamLimits

0x279f,	// (0x00030b86) list_highlight_pane_cp16

0x27ac,	// (0x00030b93) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x27ac,	// (0x00030b93) list_single_idle_plugin_shortcut_pane_g1

0x27b8,	// (0x00030b9f) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x27b8,	// (0x00030b9f) list_single_idle_plugin_shortcut_pane_g2

0x27d4,	// (0x00030bbb) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x27d4,	// (0x00030bbb) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd5a,	// (0x0003e141) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd5a,	// (0x0003e141) list_single_idle_plugin_shortcut_pane_g

0x27e9,	// (0x00030bd0) cell_ai_shortcut_pane_ParamLimits

0x27e9,	// (0x00030bd0) cell_ai_shortcut_pane

0x27ff,	// (0x00030be6) cell_ai_shortcut_pane_g1_ParamLimits

0x27ff,	// (0x00030be6) cell_ai_shortcut_pane_g1

0xdbd0,	// (0x0003bfb7) ai_gene_pane_1_cp2

0xdc13,	// (0x0003bffa) ai_gene_pane_2_cp2

0xdc1b,	// (0x0003c002) list_highlight_pane_cp15

0xdc24,	// (0x0003c00b) list_single_idle_plugin_calendar_pane_g1

0xdc1b,	// (0x0003c002) list_highlight_pane_cp17

0xdc2c,	// (0x0003c013) list_single_idle_plugin_calendar_pane_g1_copy1

0xdc34,	// (0x0003c01b) list_single_idle_plugin_player_pane_g1

0x8df4,	// (0x000371db) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd61,	// (0x0003e148) list_single_idle_plugin_player_pane_g

0xdc3c,	// (0x0003c023) list_single_idle_plugin_player_pane_t1

0xdc4a,	// (0x0003c031) list_single_idle_plugin_player_pane_t2

0xdc58,	// (0x0003c03f) list_single_idle_plugin_player_pane_t3

0xdc66,	// (0x0003c04d) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd66,	// (0x0003e14d) list_single_idle_plugin_player_pane_t

0xdc74,	// (0x0003c05b) wait_bar_pane_cp15

0xdc7c,	// (0x0003c063) grid_ai_notification_pane

0x8df4,	// (0x000371db) list_single_idle_plugin_notification_pane_g1

0x2821,	// (0x00030c08) cell_ai_notification_pane_ParamLimits

0x2821,	// (0x00030c08) cell_ai_notification_pane

0xdc85,	// (0x0003c06c) cell_ai_notification_pane_g1

0xdc8d,	// (0x0003c074) cell_ai_notification_pane_t1

0x282e,	// (0x00030c15) tb_ext_find_button_pane

0x2836,	// (0x00030c1d) tb_ext_find_pane_g1

0x283e,	// (0x00030c25) tb_ext_find_pane_t1

0x71f0,	// (0x000355d7) tb_ext_find_button_pane_g1

0xdc9b,	// (0x0003c082) tb_ext_find_button_pane_g2

0x0001,

0xfd6f,	// (0x0003e156) tb_ext_find_button_pane_g

0x2652,	// (0x00030a39) main_idle_act4_pane_t1_ParamLimits

0x2668,	// (0x00030a4f) main_idle_act4_pane_t2_ParamLimits

0xfd2d,	// (0x0003e114) main_idle_act4_pane_t_ParamLimits

0x269a,	// (0x00030a81) popup_clock_digital_analogue_window_cp2_ParamLimits

0x26b0,	// (0x00030a97) sat_plugin_idle_act4_pane_ParamLimits

0x26b0,	// (0x00030a97) sat_plugin_idle_act4_pane

0x284c,	// (0x00030c33) sat_plugin_idle_act4_pane_t1_ParamLimits

0x284c,	// (0x00030c33) sat_plugin_idle_act4_pane_t1

0x2864,	// (0x00030c4b) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2864,	// (0x00030c4b) sat_plugin_idle_act4_pane_t2

0x287c,	// (0x00030c63) sat_plugin_idle_act4_pane_t3_ParamLimits

0x287c,	// (0x00030c63) sat_plugin_idle_act4_pane_t3

0x2894,	// (0x00030c7b) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2894,	// (0x00030c7b) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd74,	// (0x0003e15b) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd74,	// (0x0003e15b) sat_plugin_idle_act4_pane_t

0x43ae,	// (0x00032795) popup_battery_window_ParamLimits

0x43ae,	// (0x00032795) popup_battery_window

0x470b,	// (0x00032af2) bg_popup_sub_pane_cp25_ParamLimits

0x470b,	// (0x00032af2) bg_popup_sub_pane_cp25

0xdca4,	// (0x0003c08b) popup_battery_window_g1_ParamLimits

0xdca4,	// (0x0003c08b) popup_battery_window_g1

0xdcb0,	// (0x0003c097) popup_battery_window_t1_ParamLimits

0xdcb0,	// (0x0003c097) popup_battery_window_t1

0xdcc2,	// (0x0003c0a9) popup_battery_window_t2_ParamLimits

0xdcc2,	// (0x0003c0a9) popup_battery_window_t2

0x0001,

0xfd7d,	// (0x0003e164) popup_battery_window_t_ParamLimits

0xfd7d,	// (0x0003e164) popup_battery_window_t

0x1421,	// (0x0002f808) midp_canvas_pane_ParamLimits

0x1476,	// (0x0002f85d) midp_keypad_pane_ParamLimits

0x1476,	// (0x0002f85d) midp_keypad_pane

0x5521,	// (0x00033908) main_midp_pane_ParamLimits

0x9413,	// (0x000377fa) signal_pane_g2_cp_ParamLimits

0x28ac,	// (0x00030c93) aid_size_cell_midp_keypad_ParamLimits

0x28ac,	// (0x00030c93) aid_size_cell_midp_keypad

0x28ca,	// (0x00030cb1) midp_keyp_game_grid_pane_ParamLimits

0x28ca,	// (0x00030cb1) midp_keyp_game_grid_pane

0x28e9,	// (0x00030cd0) midp_keyp_rocker_pane_ParamLimits

0x28e9,	// (0x00030cd0) midp_keyp_rocker_pane

0x292a,	// (0x00030d11) midp_keyp_sk_left_pane_ParamLimits

0x292a,	// (0x00030d11) midp_keyp_sk_left_pane

0x297c,	// (0x00030d63) midp_keyp_sk_right_pane_ParamLimits

0x297c,	// (0x00030d63) midp_keyp_sk_right_pane

0x41db,	// (0x000325c2) bg_button_pane_cp03

0x29c8,	// (0x00030daf) midp_keyp_sk_left_pane_g1

0x41db,	// (0x000325c2) bg_button_pane_cp04

0x29c8,	// (0x00030daf) midp_keyp_sk_right_pane_g1

0x9797,	// (0x00037b7e) midp_keyp_rocker_pane_g1

0x29d1,	// (0x00030db8) keyp_game_cell_pane_ParamLimits

0x29d1,	// (0x00030db8) keyp_game_cell_pane

0x41db,	// (0x000325c2) bg_button_pane_cp02

0x29f3,	// (0x00030dda) keyp_game_cell_pane_g1

0xce88,	// (0x0003b26f) popup_fep_vkb2_window_ParamLimits

0xce88,	// (0x0003b26f) popup_fep_vkb2_window

0xdcdf,	// (0x0003c0c6) aid_size_cell_vkb2_ParamLimits

0xdcdf,	// (0x0003c0c6) aid_size_cell_vkb2

0xdd15,	// (0x0003c0fc) popup_fep_vkb2_window_g1_ParamLimits

0xdd15,	// (0x0003c0fc) popup_fep_vkb2_window_g1

0xdd65,	// (0x0003c14c) vkb2_area_bottom_pane_ParamLimits

0xdd65,	// (0x0003c14c) vkb2_area_bottom_pane

0xdda3,	// (0x0003c18a) vkb2_area_keypad_pane_ParamLimits

0xdda3,	// (0x0003c18a) vkb2_area_keypad_pane

0xdde1,	// (0x0003c1c8) vkb2_area_top_pane_ParamLimits

0xdde1,	// (0x0003c1c8) vkb2_area_top_pane

0xde5d,	// (0x0003c244) vkb2_top_entry_pane_ParamLimits

0xde5d,	// (0x0003c244) vkb2_top_entry_pane

0xde8a,	// (0x0003c271) vkb2_top_grid_left_pane_ParamLimits

0xde8a,	// (0x0003c271) vkb2_top_grid_left_pane

0xdeaa,	// (0x0003c291) vkb2_top_grid_right_pane_ParamLimits

0xdeaa,	// (0x0003c291) vkb2_top_grid_right_pane

0x660e,	// (0x000349f5) vkb2_cell_keypad_pane_ParamLimits

0x660e,	// (0x000349f5) vkb2_cell_keypad_pane

0xdef0,	// (0x0003c2d7) vkb2_area_bottom_grid_pane_ParamLimits

0xdef0,	// (0x0003c2d7) vkb2_area_bottom_grid_pane

0xdf16,	// (0x0003c2fd) vkb2_area_bottom_pane_g1_ParamLimits

0xdf16,	// (0x0003c2fd) vkb2_area_bottom_pane_g1

0xdf3c,	// (0x0003c323) vkb2_area_bottom_pane_g2_ParamLimits

0xdf3c,	// (0x0003c323) vkb2_area_bottom_pane_g2

0xdf6d,	// (0x0003c354) vkb2_area_bottom_pane_g3_ParamLimits

0xdf6d,	// (0x0003c354) vkb2_area_bottom_pane_g3

0x0002,

0xfd82,	// (0x0003e169) vkb2_area_bottom_pane_g_ParamLimits

0xfd82,	// (0x0003e169) vkb2_area_bottom_pane_g

0x6786,	// (0x00034b6d) vkb2_top_cell_left_pane_ParamLimits

0x6786,	// (0x00034b6d) vkb2_top_cell_left_pane

0xdfcb,	// (0x0003c3b2) vkb2_top_entry_pane_g1_ParamLimits

0xdfcb,	// (0x0003c3b2) vkb2_top_entry_pane_g1

0xdfd9,	// (0x0003c3c0) vkb2_top_entry_pane_t1_ParamLimits

0xdfd9,	// (0x0003c3c0) vkb2_top_entry_pane_t1

0xe012,	// (0x0003c3f9) vkb2_top_entry_pane_t2_ParamLimits

0xe012,	// (0x0003c3f9) vkb2_top_entry_pane_t2

0xe044,	// (0x0003c42b) vkb2_top_entry_pane_t3_ParamLimits

0xe044,	// (0x0003c42b) vkb2_top_entry_pane_t3

0x0002,

0xfd89,	// (0x0003e170) vkb2_top_entry_pane_t_ParamLimits

0xfd89,	// (0x0003e170) vkb2_top_entry_pane_t

0xe05a,	// (0x0003c441) vkb2_top_grid_right_pane_g1_ParamLimits

0xe05a,	// (0x0003c441) vkb2_top_grid_right_pane_g1

0x67e9,	// (0x00034bd0) vkb2_top_grid_right_pane_g2_ParamLimits

0x67e9,	// (0x00034bd0) vkb2_top_grid_right_pane_g2

0x6801,	// (0x00034be8) vkb2_top_grid_right_pane_g3_ParamLimits

0x6801,	// (0x00034be8) vkb2_top_grid_right_pane_g3

0xe070,	// (0x0003c457) vkb2_top_grid_right_pane_g4_ParamLimits

0xe070,	// (0x0003c457) vkb2_top_grid_right_pane_g4

0x0003,

0xfd90,	// (0x0003e177) vkb2_top_grid_right_pane_g_ParamLimits

0xfd90,	// (0x0003e177) vkb2_top_grid_right_pane_g

0x682f,	// (0x00034c16) vkb2_top_cell_left_pane_g1

0x6846,	// (0x00034c2d) vkb2_cell_keypad_pane_g1_ParamLimits

0x6846,	// (0x00034c2d) vkb2_cell_keypad_pane_g1

0xe086,	// (0x0003c46d) vkb2_cell_keypad_pane_t1_ParamLimits

0xe086,	// (0x0003c46d) vkb2_cell_keypad_pane_t1

0x6854,	// (0x00034c3b) vkb2_cell_bottom_grid_pane_ParamLimits

0x6854,	// (0x00034c3b) vkb2_cell_bottom_grid_pane

0x688d,	// (0x00034c74) vkb2_cell_bottom_grid_pane_g1

0x26df,	// (0x00030ac6) aid_call2_pane_cp02

0x26e7,	// (0x00030ace) aid_call_pane_cp02

0x26ef,	// (0x00030ad6) clock_digital_number_pane_cp10

0x26f7,	// (0x00030ade) clock_digital_number_pane_cp11

0x26ff,	// (0x00030ae6) clock_digital_number_pane_cp12

0x2707,	// (0x00030aee) clock_digital_number_pane_cp13

0x270f,	// (0x00030af6) clock_digital_separator_pane_cp10

0x71f0,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g1

0x71f0,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g2

0x2717,	// (0x00030afe) popup_clock_digital_analogue_window_cp2_g3

0x71f0,	// (0x000355d7) popup_clock_digital_analogue_window_cp2_g4

0x2717,	// (0x00030afe) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd45,	// (0x0003e12c) popup_clock_digital_analogue_window_cp2_g

0x271f,	// (0x00030b06) popup_clock_digital_analogue_window_cp2_t1

0x272d,	// (0x00030b14) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd50,	// (0x0003e137) popup_clock_digital_analogue_window_cp2_t

0x9797,	// (0x00037b7e) clock_digital_number_pane_cp10_g1

0x9797,	// (0x00037b7e) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0003df26) clock_digital_number_pane_cp10_g

0x9797,	// (0x00037b7e) clock_digital_separator_pane_cp10_g1

0x9797,	// (0x00037b7e) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3f,	// (0x0003df26) clock_digital_separator_pane_cp10_g

0xdb1a,	// (0x0003bf01) uniindi_top_pane_g3

0xdb2b,	// (0x0003bf12) uniindi_top_pane_g4

0x6679,	// (0x00034a60) vkb2_row_keypad_pane_ParamLimits

0x6679,	// (0x00034a60) vkb2_row_keypad_pane

0x68a9,	// (0x00034c90) vkb2_cell_t_keypad_pane_ParamLimits

0x68a9,	// (0x00034c90) vkb2_cell_t_keypad_pane

0x68b6,	// (0x00034c9d) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x68b6,	// (0x00034c9d) vkb2_cell_t_keypad_pane_cp08

0x68c6,	// (0x00034cad) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x68c6,	// (0x00034cad) vkb2_cell_t_keypad_pane_cp09

0x68d7,	// (0x00034cbe) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x68d7,	// (0x00034cbe) vkb2_cell_t_keypad_pane_cp01

0x68e7,	// (0x00034cce) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x68e7,	// (0x00034cce) vkb2_cell_t_keypad_pane_cp02

0x68f7,	// (0x00034cde) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x68f7,	// (0x00034cde) vkb2_cell_t_keypad_pane_cp03

0x6907,	// (0x00034cee) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x6907,	// (0x00034cee) vkb2_cell_t_keypad_pane_cp04

0x6917,	// (0x00034cfe) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x6917,	// (0x00034cfe) vkb2_cell_t_keypad_pane_cp05

0x6927,	// (0x00034d0e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x6927,	// (0x00034d0e) vkb2_cell_t_keypad_pane_cp06

0x6937,	// (0x00034d1e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x6937,	// (0x00034d1e) vkb2_cell_t_keypad_pane_cp07

0x6947,	// (0x00034d2e) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x6947,	// (0x00034d2e) vkb2_cell_t_keypad_pane_cp10

0x99c3,	// (0x00037daa) vkb2_cell_t_keypad_pane_g1

0xe09d,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1

0x41db,	// (0x000325c2) popup_grid_graphic2_window

0xe0af,	// (0x0003c496) aid_size_cell_graphic2_ParamLimits

0xe0af,	// (0x0003c496) aid_size_cell_graphic2

0xe0ed,	// (0x0003c4d4) bg_popup_window_pane_cp21_ParamLimits

0xe0ed,	// (0x0003c4d4) bg_popup_window_pane_cp21

0xe0fb,	// (0x0003c4e2) graphic2_pages_pane_ParamLimits

0xe0fb,	// (0x0003c4e2) graphic2_pages_pane

0xe144,	// (0x0003c52b) grid_graphic2_control_pane_ParamLimits

0xe144,	// (0x0003c52b) grid_graphic2_control_pane

0xe182,	// (0x0003c569) grid_graphic2_pane_ParamLimits

0xe182,	// (0x0003c569) grid_graphic2_pane

0xe1f1,	// (0x0003c5d8) cell_graphic2_pane

0x41db,	// (0x000325c2) main_comp_mode_pane

0xb0c8,	// (0x000394af) list_ai3_gene_pane_ParamLimits

0x2433,	// (0x0003081a) bg_popup_window_pane_cp19_ParamLimits

0xb238,	// (0x0003961f) bg_touch_area_indi_pane_ParamLimits

0xb238,	// (0x0003961f) bg_touch_area_indi_pane

0xb24e,	// (0x00039635) bg_touch_area_indi_pane_cp01_ParamLimits

0xb24e,	// (0x00039635) bg_touch_area_indi_pane_cp01

0xb264,	// (0x0003964b) bg_touch_area_indi_pane_cp02_ParamLimits

0xb264,	// (0x0003964b) bg_touch_area_indi_pane_cp02

0xb27a,	// (0x00039661) bg_touch_area_indi_pane_cp03_ParamLimits

0xb27a,	// (0x00039661) bg_touch_area_indi_pane_cp03

0xb290,	// (0x00039677) popup_slider_window_g1_ParamLimits

0xb2ac,	// (0x00039693) popup_slider_window_g2_ParamLimits

0xb2c8,	// (0x000396af) popup_slider_window_g3_ParamLimits

0xfcda,	// (0x0003e0c1) popup_slider_window_g_ParamLimits

0xb2e4,	// (0x000396cb) popup_slider_window_t1_ParamLimits

0xb328,	// (0x0003970f) small_volume_slider_vertical_pane_ParamLimits

0xe1f1,	// (0x0003c5d8) cell_graphic2_pane_ParamLimits

0xe23c,	// (0x0003c623) bg_button_pane_cp10_ParamLimits

0xe23c,	// (0x0003c623) bg_button_pane_cp10

0xe24d,	// (0x0003c634) bg_button_pane_cp11_ParamLimits

0xe24d,	// (0x0003c634) bg_button_pane_cp11

0xe25e,	// (0x0003c645) graphic2_pages_pane_g1_ParamLimits

0xe25e,	// (0x0003c645) graphic2_pages_pane_g1

0xe279,	// (0x0003c660) graphic2_pages_pane_g2_ParamLimits

0xe279,	// (0x0003c660) graphic2_pages_pane_g2

0x0001,

0xfd9e,	// (0x0003e185) graphic2_pages_pane_g_ParamLimits

0xfd9e,	// (0x0003e185) graphic2_pages_pane_g

0xe291,	// (0x0003c678) graphic2_pages_pane_t1_ParamLimits

0xe291,	// (0x0003c678) graphic2_pages_pane_t1

0xe2a9,	// (0x0003c690) cell_graphic2_control_pane_ParamLimits

0xe2a9,	// (0x0003c690) cell_graphic2_control_pane

0xe2d3,	// (0x0003c6ba) cell_graphic2_pane_g1_ParamLimits

0xe2d3,	// (0x0003c6ba) cell_graphic2_pane_g1

0x0372,	// (0x0002e759) cell_graphic2_pane_g2_ParamLimits

0x0372,	// (0x0002e759) cell_graphic2_pane_g2

0xe2e0,	// (0x0003c6c7) cell_graphic2_pane_g3_ParamLimits

0xe2e0,	// (0x0003c6c7) cell_graphic2_pane_g3

0x037f,	// (0x0002e766) cell_graphic2_pane_g4_ParamLimits

0x037f,	// (0x0002e766) cell_graphic2_pane_g4

0xe2ed,	// (0x0003c6d4) cell_graphic2_pane_g5_ParamLimits

0xe2ed,	// (0x0003c6d4) cell_graphic2_pane_g5

0x0004,

0xfda3,	// (0x0003e18a) cell_graphic2_pane_g_ParamLimits

0xfda3,	// (0x0003e18a) cell_graphic2_pane_g

0xe30d,	// (0x0003c6f4) cell_graphic2_pane_t1_ParamLimits

0xe30d,	// (0x0003c6f4) cell_graphic2_pane_t1

0x85c2,	// (0x000369a9) grid_highlight_pane_cp11_ParamLimits

0x85c2,	// (0x000369a9) grid_highlight_pane_cp11

0x470b,	// (0x00032af2) bg_button_pane_cp05

0xe342,	// (0x0003c729) cell_graphic2_control_pane_g1

0x9797,	// (0x00037b7e) bg_touch_area_indi_pane_g1

0xe36a,	// (0x0003c751) aid_cmod_rocker_key_size

0xe374,	// (0x0003c75b) aid_cmode_itu_key_size

0xe37e,	// (0x0003c765) main_cmode_video_pane

0xe386,	// (0x0003c76d) main_comp_mode_itu_pane

0xe390,	// (0x0003c777) main_comp_mode_rocker_pane

0xe398,	// (0x0003c77f) cell_cmode_rocker_pane_ParamLimits

0xe398,	// (0x0003c77f) cell_cmode_rocker_pane

0xe3aa,	// (0x0003c791) cell_cmode_itu_pane_ParamLimits

0xe3aa,	// (0x0003c791) cell_cmode_itu_pane

0x4c31,	// (0x00033018) bg_button_pane_cp06_ParamLimits

0x4c31,	// (0x00033018) bg_button_pane_cp06

0x99c3,	// (0x00037daa) cell_cmode_rocker_pane_g1_ParamLimits

0x99c3,	// (0x00037daa) cell_cmode_rocker_pane_g1

0xda0e,	// (0x0003bdf5) cell_cmode_rocker_pane_g2_ParamLimits

0xda0e,	// (0x0003bdf5) cell_cmode_rocker_pane_g2

0x0001,

0xfdb3,	// (0x0003e19a) cell_cmode_rocker_pane_g_ParamLimits

0xfdb3,	// (0x0003e19a) cell_cmode_rocker_pane_g

0x41db,	// (0x000325c2) bg_button_pane_cp07

0xe3bf,	// (0x0003c7a6) cell_cmode_itu_pane_g1

0xe3c8,	// (0x0003c7af) cell_cmode_itu_pane_t1

0xe3d6,	// (0x0003c7bd) cell_cmode_itu_pane_t2

0x0001,

0xfdb8,	// (0x0003e19f) cell_cmode_itu_pane_t

0xdb9c,	// (0x0003bf83) aid_touch_ctrl_left

0xdba4,	// (0x0003bf8b) aid_touch_ctrl_right

0x41db,	// (0x000325c2) compa_mode_pane

0xe3e4,	// (0x0003c7cb) aid_cmod_rocker_key_size_cp

0xe3ee,	// (0x0003c7d5) aid_cmode_itu_key_size_cp

0xe3f8,	// (0x0003c7df) compa_mode_pane_g1

0xe400,	// (0x0003c7e7) compa_mode_pane_g2

0xe408,	// (0x0003c7ef) compa_mode_pane_g3

0x0002,

0xfdbd,	// (0x0003e1a4) compa_mode_pane_g

0xe410,	// (0x0003c7f7) main_comp_mode_itu_pane_cp

0xe41a,	// (0x0003c801) main_comp_mode_rocker_pane_cp

0xe424,	// (0x0003c80b) cell_cmode_itu_pane_cp_ParamLimits

0xe424,	// (0x0003c80b) cell_cmode_itu_pane_cp

0xe439,	// (0x0003c820) cell_cmode_rocker_pane_cp_ParamLimits

0xe439,	// (0x0003c820) cell_cmode_rocker_pane_cp

0x4c31,	// (0x00033018) bg_button_pane_cp06_cp_ParamLimits

0x4c31,	// (0x00033018) bg_button_pane_cp06_cp

0x99c3,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x99c3,	// (0x00037daa) cell_cmode_rocker_pane_g1_cp

0x9797,	// (0x00037b7e) cell_cmode_rocker_pane_g2_cp

0x41db,	// (0x000325c2) bg_button_pane_cp07_cp

0xe44b,	// (0x0003c832) cell_cmode_itu_pane_g1_cp

0xe454,	// (0x0003c83b) cell_cmode_itu_pane_t1_cp

0xe462,	// (0x0003c849) cell_cmode_itu_pane_t2_cp

0x1c27,	// (0x0003000e) settings_code_pane_cp2

0x4538,	// (0x0003291f) bg_popup_window_pane_cp3_ParamLimits

0x4909,	// (0x00032cf0) heading_pane_cp3_ParamLimits

0x4915,	// (0x00032cfc) listscroll_popup_graphic_pane_ParamLimits

0x5f33,	// (0x0003431a) fep_hwr_aid_pane_ParamLimits

0x639e,	// (0x00034785) aid_touch_sctrl_top_ParamLimits

0x63ab,	// (0x00034792) sctrl_sk_top_pane_g1_ParamLimits

0x99c3,	// (0x00037daa) sctrl_sk_top_pane_g2_ParamLimits

0xfcf3,	// (0x0003e0da) sctrl_sk_top_pane_g_ParamLimits

0x63b8,	// (0x0003479f) sctrl_sk_top_pane_t1_ParamLimits

0x639e,	// (0x00034785) aid_touch_sctrl_bottom_ParamLimits

0x63b8,	// (0x0003479f) sctrl_sk_bottom_pane_t1_ParamLimits

0xdae6,	// (0x0003becd) aid_area_touch_clock

0xde1f,	// (0x0003c206) aid_vkb2_area_top_pane_cell_ParamLimits

0xde1f,	// (0x0003c206) aid_vkb2_area_top_pane_cell

0xdeca,	// (0x0003c2b1) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdeca,	// (0x0003c2b1) aid_vkb2_area_bottom_pane_cell

0xdfc3,	// (0x0003c3aa) popup_char_count_window

0xe470,	// (0x0003c857) popup_char_count_window_g1

0xe479,	// (0x0003c860) popup_char_count_window_g2

0xe482,	// (0x0003c869) popup_char_count_window_g3

0x0002,

0xfdc4,	// (0x0003e1ab) popup_char_count_window_g

0xe48b,	// (0x0003c872) popup_char_count_window_t1

0x645e,	// (0x00034845) popup_fep_char_preview_window_ParamLimits

0x645e,	// (0x00034845) popup_fep_char_preview_window

0xde3f,	// (0x0003c226) vkb2_top_candi_pane_ParamLimits

0xde3f,	// (0x0003c226) vkb2_top_candi_pane

0xe499,	// (0x0003c880) cell_vkb2_top_candi_pane_ParamLimits

0xe499,	// (0x0003c880) cell_vkb2_top_candi_pane

0x7fda,	// (0x000363c1) bg_popup_fep_char_preview_window_ParamLimits

0x7fda,	// (0x000363c1) bg_popup_fep_char_preview_window

0x695c,	// (0x00034d43) popup_fep_char_preview_window_t1_ParamLimits

0x695c,	// (0x00034d43) popup_fep_char_preview_window_t1

0xe4e3,	// (0x0003c8ca) bg_popup_fep_char_preview_window_g1

0xe4eb,	// (0x0003c8d2) bg_popup_fep_char_preview_window_g2

0xe4f3,	// (0x0003c8da) bg_popup_fep_char_preview_window_g3

0xe4fb,	// (0x0003c8e2) bg_popup_fep_char_preview_window_g4

0xe503,	// (0x0003c8ea) bg_popup_fep_char_preview_window_g5

0x6996,	// (0x00034d7d) bg_popup_fep_char_preview_window_g6

0xe50b,	// (0x0003c8f2) bg_popup_fep_char_preview_window_g7

0xe513,	// (0x0003c8fa) bg_popup_fep_char_preview_window_g8

0xe51b,	// (0x0003c902) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdcb,	// (0x0003e1b2) bg_popup_fep_char_preview_window_g

0x99c3,	// (0x00037daa) cell_vkb2_top_candi_pane_g1_ParamLimits

0x99c3,	// (0x00037daa) cell_vkb2_top_candi_pane_g1

0x9bf2,	// (0x00037fd9) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9bf2,	// (0x00037fd9) cell_vkb2_top_candi_pane_g2

0x9c13,	// (0x00037ffa) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9c13,	// (0x00037ffa) cell_vkb2_top_candi_pane_g3

0x699e,	// (0x00034d85) cell_vkb2_top_candi_pane_g4_ParamLimits

0x699e,	// (0x00034d85) cell_vkb2_top_candi_pane_g4

0xe523,	// (0x0003c90a) cell_vkb2_top_candi_pane_g5_ParamLimits

0xe523,	// (0x0003c90a) cell_vkb2_top_candi_pane_g5

0xda0e,	// (0x0003bdf5) cell_vkb2_top_candi_pane_g6_ParamLimits

0xda0e,	// (0x0003bdf5) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdde,	// (0x0003e1c5) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdde,	// (0x0003e1c5) cell_vkb2_top_candi_pane_g

0x69bf,	// (0x00034da6) cell_vkb2_top_candi_pane_t1

0x5c86,	// (0x0003406d) aid_size_touch_slider_mark_ParamLimits

0x5c86,	// (0x0003406d) aid_size_touch_slider_mark

0xe12f,	// (0x0003c516) grid_graphic2_catg_pane_ParamLimits

0xe12f,	// (0x0003c516) grid_graphic2_catg_pane

0xe1c6,	// (0x0003c5ad) popup_grid_graphic2_window_t1_ParamLimits

0xe1c6,	// (0x0003c5ad) popup_grid_graphic2_window_t1

0xe1db,	// (0x0003c5c2) popup_grid_graphic2_window_t2_ParamLimits

0xe1db,	// (0x0003c5c2) popup_grid_graphic2_window_t2

0x0001,

0xfd99,	// (0x0003e180) popup_grid_graphic2_window_t_ParamLimits

0xfd99,	// (0x0003e180) popup_grid_graphic2_window_t

0x470b,	// (0x00032af2) bg_button_pane_cp05_ParamLimits

0xe342,	// (0x0003c729) cell_graphic2_control_pane_g1_ParamLimits

0xdb62,	// (0x0003bf49) cell_graphic2_catg_pane_ParamLimits

0xdb62,	// (0x0003bf49) cell_graphic2_catg_pane

0x41db,	// (0x000325c2) bg_button_pane_cp12

0xe544,	// (0x0003c92b) cell_graphic2_catg_pane_g1

0xdab2,	// (0x0003be99) cell_tb_ext_pane_t1_ParamLimits

0x67a6,	// (0x00034b8d) vkb2_top_cell_right_narrow_pane_ParamLimits

0x67a6,	// (0x00034b8d) vkb2_top_cell_right_narrow_pane

0x67be,	// (0x00034ba5) vkb2_top_cell_right_wide_pane_ParamLimits

0x67be,	// (0x00034ba5) vkb2_top_cell_right_wide_pane

0x5f25,	// (0x0003430c) bg_vkb2_func_pane_ParamLimits

0x5f25,	// (0x0003430c) bg_vkb2_func_pane

0x682f,	// (0x00034c16) vkb2_top_cell_left_pane_g1_ParamLimits

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp03

0x688d,	// (0x00034c74) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x7a22,	// (0x00035e09) bg_vkb2_func_pane_g1

0x7a2a,	// (0x00035e11) bg_vkb2_func_pane_g2

0x7a3a,	// (0x00035e21) bg_vkb2_func_pane_g3

0x7a32,	// (0x00035e19) bg_vkb2_func_pane_g4

0x7a42,	// (0x00035e29) bg_vkb2_func_pane_g5

0x7a4a,	// (0x00035e31) bg_vkb2_func_pane_g6

0x7a52,	// (0x00035e39) bg_vkb2_func_pane_g7

0x7a5a,	// (0x00035e41) bg_vkb2_func_pane_g8

0x7a1a,	// (0x00035e01) bg_vkb2_func_pane_g9

0x0008,

0xfdeb,	// (0x0003e1d2) bg_vkb2_func_pane_g

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp01

0x682f,	// (0x00034c16) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x682f,	// (0x00034c16) vkb2_top_cell_right_wide_pane_g1

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x5f25,	// (0x0003430c) bg_vkb2_fuc_pane_cp02

0x688d,	// (0x00034c74) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x688d,	// (0x00034c74) vkb2_top_cell_right_narrow_pane_g1

0x2381,	// (0x00030768) aid_touch_area_decrease_ParamLimits

0x2381,	// (0x00030768) aid_touch_area_decrease

0x23af,	// (0x00030796) aid_touch_area_increase_ParamLimits

0x23af,	// (0x00030796) aid_touch_area_increase

0x23d7,	// (0x000307be) aid_touch_area_mute_ParamLimits

0x23d7,	// (0x000307be) aid_touch_area_mute

0x23ff,	// (0x000307e6) aid_touch_area_slider_ParamLimits

0x23ff,	// (0x000307e6) aid_touch_area_slider

0x243f,	// (0x00030826) popup_slider_window_g4_ParamLimits

0x243f,	// (0x00030826) popup_slider_window_g4

0x2467,	// (0x0003084e) popup_slider_window_g5_ParamLimits

0x2467,	// (0x0003084e) popup_slider_window_g5

0x249b,	// (0x00030882) popup_slider_window_g6_ParamLimits

0x249b,	// (0x00030882) popup_slider_window_g6

0xb310,	// (0x000396f7) popup_slider_window_t2_ParamLimits

0xb310,	// (0x000396f7) popup_slider_window_t2

0x0001,

0xfce7,	// (0x0003e0ce) popup_slider_window_t_ParamLimits

0xfce7,	// (0x0003e0ce) popup_slider_window_t

0x24b7,	// (0x0003089e) slider_pane_ParamLimits

0x24b7,	// (0x0003089e) slider_pane

0xe54d,	// (0x0003c934) slider_pane_g1_ParamLimits

0xe54d,	// (0x0003c934) slider_pane_g1

0xe561,	// (0x0003c948) slider_pane_g2_ParamLimits

0xe561,	// (0x0003c948) slider_pane_g2

0xe577,	// (0x0003c95e) slider_pane_g3_ParamLimits

0xe577,	// (0x0003c95e) slider_pane_g3

0x0003,

0xfdfe,	// (0x0003e1e5) slider_pane_g_ParamLimits

0xfdfe,	// (0x0003e1e5) slider_pane_g

0xd6e3,	// (0x0003baca) popup_tb_float_extension_window_ParamLimits

0xd6e3,	// (0x0003baca) popup_tb_float_extension_window

0xe5a3,	// (0x0003c98a) aid_size_cell_tb_float_ext

0x41db,	// (0x000325c2) bg_popup_sub_window_cp28

0xe5ae,	// (0x0003c995) grid_tb_float_ext_pane

0xe5b6,	// (0x0003c99d) cell_tb_float_ext_pane_ParamLimits

0xe5b6,	// (0x0003c99d) cell_tb_float_ext_pane

0xe5ce,	// (0x0003c9b5) cell_tb_float_ext_pane_g1

0xe5d7,	// (0x0003c9be) grid_highlight_pane_cp12

0xd95c,	// (0x0003bd43) cell_last_hwr_side_pane_ParamLimits

0xd95c,	// (0x0003bd43) cell_last_hwr_side_pane

0x9797,	// (0x00037b7e) cell_last_hwr_side_pane_g1

0xe5e0,	// (0x0003c9c7) cell_last_hwr_side_pane_g2

0x0001,

0xfe07,	// (0x0003e1ee) cell_last_hwr_side_pane_g

0xdf9e,	// (0x0003c385) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdf9e,	// (0x0003c385) vkb2_area_bottom_space_btn_pane

0x99c3,	// (0x00037daa) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xe09d,	// (0x0003c484) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x69bf,	// (0x00034da6) cell_vkb2_top_candi_pane_t1_ParamLimits

0x69d5,	// (0x00034dbc) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x69d5,	// (0x00034dbc) vkb2_area_bottom_space_btn_pane_g1

0x6a0b,	// (0x00034df2) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6a0b,	// (0x00034df2) vkb2_area_bottom_space_btn_pane_g2

0x6a41,	// (0x00034e28) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6a41,	// (0x00034e28) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe0c,	// (0x0003e1f3) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe0c,	// (0x0003e1f3) vkb2_area_bottom_space_btn_pane_g

0x5fd4,	// (0x000343bb) cel_fep_hwr_func_pane_ParamLimits

0x5fd4,	// (0x000343bb) cel_fep_hwr_func_pane

0xd931,	// (0x0003bd18) cell_hwr_side_button_pane_ParamLimits

0xd931,	// (0x0003bd18) cell_hwr_side_button_pane

0xdae6,	// (0x0003becd) aid_area_touch_clock_ParamLimits

0x470b,	// (0x00032af2) bg_uniindi_top_pane_ParamLimits

0xdaf8,	// (0x0003bedf) uniindi_top_pane_g1_ParamLimits

0xdb0e,	// (0x0003bef5) uniindi_top_pane_g2_ParamLimits

0xdb1a,	// (0x0003bf01) uniindi_top_pane_g3_ParamLimits

0xdb2b,	// (0x0003bf12) uniindi_top_pane_g4_ParamLimits

0xfd1f,	// (0x0003e106) uniindi_top_pane_g_ParamLimits

0xdb38,	// (0x0003bf1f) uniindi_top_pane_t1_ParamLimits

0x470b,	// (0x00032af2) bg_vkb2_func_pane_cp01_ParamLimits

0x470b,	// (0x00032af2) bg_vkb2_func_pane_cp01

0xe5e9,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1_ParamLimits

0xe5e9,	// (0x0003c9d0) cel_fep_hwr_func_pane_g1

0x470b,	// (0x00032af2) bg_vkb2_func_pane_cp02_ParamLimits

0x470b,	// (0x00032af2) bg_vkb2_func_pane_cp02

0xe5e9,	// (0x0003c9d0) cell_hwr_side_button_pane_g1_ParamLimits

0xe5e9,	// (0x0003c9d0) cell_hwr_side_button_pane_g1

0x793e,	// (0x00035d25) status_pane_g4_ParamLimits

0x793e,	// (0x00035d25) status_pane_g4

0x7956,	// (0x00035d3d) status_pane_t1

0x959d,	// (0x00037984) form2_midp_gauge_slider_cont_pane

0x95a5,	// (0x0003798c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x1eeb,	// (0x000302d2) form2_midp_gauge_slider_pane_t2_ParamLimits

0x1efd,	// (0x000302e4) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf2,	// (0x0003ded9) form2_midp_gauge_slider_pane_t_ParamLimits

0x95b7,	// (0x0003799e) form2_midp_slider_pane_ParamLimits

0x641e,	// (0x00034805) aid_size_cell_func_vkb2_ParamLimits

0x641e,	// (0x00034805) aid_size_cell_func_vkb2

0xe58f,	// (0x0003c976) slider_pane_g4_ParamLimits

0xe58f,	// (0x0003c976) slider_pane_g4

0xe5f7,	// (0x0003c9de) form2_midp_gauge_slider_pane_t2_cp01

0xe605,	// (0x0003c9ec) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe605,	// (0x0003c9ec) form2_midp_gauge_slider_pane_t3_cp01

0x6ab2,	// (0x00034e99) form2_midp_slider_pane_cp01

0x41db,	// (0x000325c2) navi_smil_pane

0xe64d,	// (0x0003ca34) navi_smil_pane_g1

0xe655,	// (0x0003ca3c) navi_smil_pane_t1

0xe622,	// (0x0003ca09) form2_midp_slider_pane_g1

0xe62b,	// (0x0003ca12) form2_midp_slider_pane_g2

0xe633,	// (0x0003ca1a) form2_midp_slider_pane_g3

0xe622,	// (0x0003ca09) form2_midp_slider_pane_g4

0xe63b,	// (0x0003ca22) form2_midp_slider_pane_g5

0x0004,

0xfe15,	// (0x0003e1fc) form2_midp_slider_pane_g

0x6a77,	// (0x00034e5e) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6a77,	// (0x00034e5e) vkb2_area_bottom_space_btn_pane_g4

0x1690,	// (0x0002fa77) lc0_navi_pane_ParamLimits

0x1690,	// (0x0002fa77) lc0_navi_pane

0x16fa,	// (0x0002fae1) lc0_stat_indi_pane_ParamLimits

0x16fa,	// (0x0002fae1) lc0_stat_indi_pane

0x170f,	// (0x0002faf6) ls0_title_pane_ParamLimits

0x170f,	// (0x0002faf6) ls0_title_pane

0x4c31,	// (0x00033018) bg_popup_sub_pane_cp14_ParamLimits

0xdacd,	// (0x0003beb4) list_uniindi_pane_ParamLimits

0xdad9,	// (0x0003bec0) uniindi_top_pane_ParamLimits

0xdb74,	// (0x0003bf5b) list_single_uniindi_pane_g1_ParamLimits

0xdb87,	// (0x0003bf6e) list_single_uniindi_pane_t1_ParamLimits

0xe663,	// (0x0003ca4a) lc0_stat_clock_pane_ParamLimits

0xe663,	// (0x0003ca4a) lc0_stat_clock_pane

0xe670,	// (0x0003ca57) lc0_stat_indi_pane_g1_ParamLimits

0xe670,	// (0x0003ca57) lc0_stat_indi_pane_g1

0xe67d,	// (0x0003ca64) lc0_stat_indi_pane_g2_ParamLimits

0xe67d,	// (0x0003ca64) lc0_stat_indi_pane_g2

0x0001,

0xfe20,	// (0x0003e207) lc0_stat_indi_pane_g_ParamLimits

0xfe20,	// (0x0003e207) lc0_stat_indi_pane_g

0xe68a,	// (0x0003ca71) lc0_uni_indicator_pane_ParamLimits

0xe68a,	// (0x0003ca71) lc0_uni_indicator_pane

0xe697,	// (0x0003ca7e) ls0_title_pane_g1_ParamLimits

0xe697,	// (0x0003ca7e) ls0_title_pane_g1

0xe6ab,	// (0x0003ca92) ls0_title_pane_t1_ParamLimits

0xe6ab,	// (0x0003ca92) ls0_title_pane_t1

0xe6d9,	// (0x0003cac0) lc0_uni_indicator_pane_g1_ParamLimits

0xe6d9,	// (0x0003cac0) lc0_uni_indicator_pane_g1

0xee12,	// (0x0003d1f9) lc0_stat_clock_pane_t1

0x41db,	// (0x000325c2) main_ai5_pane

0xee20,	// (0x0003d207) ai5_sk_pane_ParamLimits

0xee20,	// (0x0003d207) ai5_sk_pane

0xe6ee,	// (0x0003cad5) cell_ai5_widget_pane_ParamLimits

0xe6ee,	// (0x0003cad5) cell_ai5_widget_pane

0xee2d,	// (0x0003d214) aid_size_cell_widget_grid

0xee3a,	// (0x0003d221) bg_ai5_widget_pane_ParamLimits

0xee3a,	// (0x0003d221) bg_ai5_widget_pane

0xe77b,	// (0x0003cb62) cell_ai5_widget_pane_g2

0xe78f,	// (0x0003cb76) cell_ai5_widget_pane_g3

0xe7a9,	// (0x0003cb90) cell_ai5_widget_pane_g4

0xe7b9,	// (0x0003cba0) cell_ai5_widget_pane_g5

0xe7c9,	// (0x0003cbb0) cell_ai5_widget_pane_g6

0xe7d5,	// (0x0003cbbc) cell_ai5_widget_pane_g7

0xe81d,	// (0x0003cc04) cell_ai5_widget_pane_t1_ParamLimits

0xe81d,	// (0x0003cc04) cell_ai5_widget_pane_t1

0xe83a,	// (0x0003cc21) cell_ai5_widget_pane_t2_ParamLimits

0xe83a,	// (0x0003cc21) cell_ai5_widget_pane_t2

0xe852,	// (0x0003cc39) cell_ai5_widget_pane_t3_ParamLimits

0xe852,	// (0x0003cc39) cell_ai5_widget_pane_t3

0xe86a,	// (0x0003cc51) cell_ai5_widget_pane_t4_ParamLimits

0xe86a,	// (0x0003cc51) cell_ai5_widget_pane_t4

0xe890,	// (0x0003cc77) cell_ai5_widget_pane_t5_ParamLimits

0xe890,	// (0x0003cc77) cell_ai5_widget_pane_t5

0xee72,	// (0x0003d259) cell_ai5_widget_pane_t6_ParamLimits

0xee72,	// (0x0003d259) cell_ai5_widget_pane_t6

0xee84,	// (0x0003d26b) cell_ai5_widget_pane_t7_ParamLimits

0xee84,	// (0x0003d26b) cell_ai5_widget_pane_t7

0xe8af,	// (0x0003cc96) cell_ai5_widget_pane_t8_ParamLimits

0xe8af,	// (0x0003cc96) cell_ai5_widget_pane_t8

0x0009,

0xfe3a,	// (0x0003e221) cell_ai5_widget_pane_t_ParamLimits

0xfe3a,	// (0x0003e221) cell_ai5_widget_pane_t

0xe90e,	// (0x0003ccf5) grid_ai5_widget_pane

0x4c31,	// (0x00033018) highlight_cell_ai5_widget_pane_ParamLimits

0x4c31,	// (0x00033018) highlight_cell_ai5_widget_pane

0xe91a,	// (0x0003cd01) ai5_sk_left_pane

0xe924,	// (0x0003cd0b) ai5_sk_middle_pane

0xe92e,	// (0x0003cd15) ai5_sk_right_pane

0xee9d,	// (0x0003d284) bg_ai5_widget_pane_g1_ParamLimits

0xee9d,	// (0x0003d284) bg_ai5_widget_pane_g1

0xeea9,	// (0x0003d290) bg_ai5_widget_pane_g2_ParamLimits

0xeea9,	// (0x0003d290) bg_ai5_widget_pane_g2

0xeeb5,	// (0x0003d29c) bg_ai5_widget_pane_g3_ParamLimits

0xeeb5,	// (0x0003d29c) bg_ai5_widget_pane_g3

0xeec1,	// (0x0003d2a8) bg_ai5_widget_pane_g4_ParamLimits

0xeec1,	// (0x0003d2a8) bg_ai5_widget_pane_g4

0xeecd,	// (0x0003d2b4) bg_ai5_widget_pane_g5_ParamLimits

0xeecd,	// (0x0003d2b4) bg_ai5_widget_pane_g5

0xeed9,	// (0x0003d2c0) bg_ai5_widget_pane_g6_ParamLimits

0xeed9,	// (0x0003d2c0) bg_ai5_widget_pane_g6

0xeee5,	// (0x0003d2cc) bg_ai5_widget_pane_g7_ParamLimits

0xeee5,	// (0x0003d2cc) bg_ai5_widget_pane_g7

0xeef1,	// (0x0003d2d8) bg_ai5_widget_pane_g8_ParamLimits

0xeef1,	// (0x0003d2d8) bg_ai5_widget_pane_g8

0xeefd,	// (0x0003d2e4) bg_ai5_widget_pane_g9_ParamLimits

0xeefd,	// (0x0003d2e4) bg_ai5_widget_pane_g9

0x0008,

0xfe4f,	// (0x0003e236) bg_ai5_widget_pane_g_ParamLimits

0xfe4f,	// (0x0003e236) bg_ai5_widget_pane_g

0xef2d,	// (0x0003d314) cell_shortcut_ai5_widget_pane_ParamLimits

0xef2d,	// (0x0003d314) cell_shortcut_ai5_widget_pane

0xef3e,	// (0x0003d325) bg_cell_shortcut_ai5_widget_pane

0x48c5,	// (0x00032cac) cell_grid_ai5_widget_pane_g1

0x7682,	// (0x00035a69) highlight_cell_shortcut_ai5_widget_pane

0x7a2a,	// (0x00035e11) ai5_sk_left_pane_g1

0xef46,	// (0x0003d32d) ai5_sk_left_pane_g2

0xef4e,	// (0x0003d335) ai5_sk_left_pane_g3

0xef56,	// (0x0003d33d) ai5_sk_left_pane_g4

0x0003,

0xfe62,	// (0x0003e249) ai5_sk_left_pane_g

0xef5e,	// (0x0003d345) ai5_sk_left_pane_t1

0x7a22,	// (0x00035e09) ai5_sk_right_pane_g1

0xef6c,	// (0x0003d353) ai5_sk_right_pane_g2

0xef74,	// (0x0003d35b) ai5_sk_right_pane_g3

0xef7c,	// (0x0003d363) ai5_sk_right_pane_g4

0x0003,

0xfe6b,	// (0x0003e252) ai5_sk_right_pane_g

0xef84,	// (0x0003d36b) ai5_sk_right_pane_t1

0x7a22,	// (0x00035e09) ai5_sk_middle_pane_g1

0x7a2a,	// (0x00035e11) ai5_sk_middle_pane_g2

0x7a42,	// (0x00035e29) ai5_sk_middle_pane_g3

0xef74,	// (0x0003d35b) ai5_sk_middle_pane_g4

0xef4e,	// (0x0003d335) ai5_sk_middle_pane_g5

0xef92,	// (0x0003d379) ai5_sk_middle_pane_g6

0xe938,	// (0x0003cd1f) ai5_sk_middle_pane_g7

0x0006,

0xfe74,	// (0x0003e25b) ai5_sk_middle_pane_g

0x158e,	// (0x0002f975) aid_touch_area_size_lc0_ParamLimits

0x158e,	// (0x0002f975) aid_touch_area_size_lc0

0x6153,	// (0x0003453a) cell_hwr_candidate_pane_t1_ParamLimits

0x7867,	// (0x00035c4e) aid_touch_navi_pane

0x17fb,	// (0x0002fbe2) status_dt_navi_pane_ParamLimits

0x17fb,	// (0x0002fbe2) status_dt_navi_pane

0x1813,	// (0x0002fbfa) status_dt_sta_pane_ParamLimits

0x1813,	// (0x0002fbfa) status_dt_sta_pane

0xe940,	// (0x0003cd27) dt_sta_controll_pane

0xe94d,	// (0x0003cd34) dt_sta_indi_pane

0xe95a,	// (0x0003cd41) dt_sta_title_pane

0x470b,	// (0x00032af2) bg_dt_sta_indi_pane_ParamLimits

0x470b,	// (0x00032af2) bg_dt_sta_indi_pane

0xe96c,	// (0x0003cd53) dt_sta_battery_pane

0xe974,	// (0x0003cd5b) dt_sta_indi_pane_g1

0xe97d,	// (0x0003cd64) dt_sta_indi_pane_g2

0xe986,	// (0x0003cd6d) dt_sta_indi_pane_g3

0x0002,

0xfe83,	// (0x0003e26a) dt_sta_indi_pane_g

0xe98f,	// (0x0003cd76) dt_sta_signal_pane

0x4c31,	// (0x00033018) bg_dt_sta_title_pane_ParamLimits

0x4c31,	// (0x00033018) bg_dt_sta_title_pane

0xe998,	// (0x0003cd7f) dt_sta_title_pane_g1

0xe9a0,	// (0x0003cd87) dt_sta_title_pane_t1_ParamLimits

0xe9a0,	// (0x0003cd87) dt_sta_title_pane_t1

0x41db,	// (0x000325c2) bg_dt_sta_control_pane

0xe9b5,	// (0x0003cd9c) dt_sta_controll_pane_g1

0xe9be,	// (0x0003cda5) bg_dt_sta_title_pane_g1

0xe9c7,	// (0x0003cdae) bg_dt_sta_title_pane_g2

0xe9d0,	// (0x0003cdb7) bg_dt_sta_title_pane_g3

0x0002,

0xfe8a,	// (0x0003e271) bg_dt_sta_title_pane_g

0x9797,	// (0x00037b7e) bg_dt_sta_indi_pane_g1

0xe9d9,	// (0x0003cdc0) dt_sta_signal_pane_g1

0xe9e1,	// (0x0003cdc8) dt_sta_signal_pane_g2

0x0001,

0xfe91,	// (0x0003e278) dt_sta_signal_pane_g

0xef9a,	// (0x0003d381) dt_sta_battery_pane_g1

0xefa3,	// (0x0003d38a) dt_sta_battery_pane_t1

0x9797,	// (0x00037b7e) bg_dt_sta_control_pane_g1

0x7252,	// (0x00035639) fep_china_uni_eep_pane

0x725a,	// (0x00035641) fep_china_uni_entry_pane_ParamLimits

0x726a,	// (0x00035651) popup_fep_china_uni_window_g1_ParamLimits

0x727a,	// (0x00035661) popup_fep_china_uni_window_g2_ParamLimits

0x727a,	// (0x00035661) popup_fep_china_uni_window_g2

0x0001,

0xf722,	// (0x0003db09) popup_fep_china_uni_window_g_ParamLimits

0xf722,	// (0x0003db09) popup_fep_china_uni_window_g

0xefb2,	// (0x0003d399) fep_china_uni_eep_pane_g1

0xefba,	// (0x0003d3a1) fep_china_uni_eep_pane_t1

0xe644,	// (0x0003ca2b) aid_touch_area_size_smil_player

0x7905,	// (0x00035cec) lc0_clock_pane

0x794a,	// (0x00035d31) status_pane_g5_ParamLimits

0x794a,	// (0x00035d31) status_pane_g5

0xd317,	// (0x0003b6fe) popup_keymap_window

0x791e,	// (0x00035d05) status_icon_pane

0xe78f,	// (0x0003cb76) cell_ai5_widget_pane_g3_ParamLimits

0xe7a9,	// (0x0003cb90) cell_ai5_widget_pane_g4_ParamLimits

0xe7b9,	// (0x0003cba0) cell_ai5_widget_pane_g5_ParamLimits

0xe7e1,	// (0x0003cbc8) cell_ai5_widget_pane_g8_ParamLimits

0xe7e1,	// (0x0003cbc8) cell_ai5_widget_pane_g8

0xe7f5,	// (0x0003cbdc) cell_ai5_widget_pane_g9_ParamLimits

0xe7f5,	// (0x0003cbdc) cell_ai5_widget_pane_g9

0xe809,	// (0x0003cbf0) cell_ai5_widget_pane_g10_ParamLimits

0xe809,	// (0x0003cbf0) cell_ai5_widget_pane_g10

0xefc9,	// (0x0003d3b0) status_icon_pane_g1

0x41db,	// (0x000325c2) bg_popup_sub_pane_cp13

0xefd1,	// (0x0003d3b8) popup_keymap_window_t1

0x1553,	// (0x0002f93a) control_pane_g6_ParamLimits

0x1553,	// (0x0002f93a) control_pane_g6

0x1546,	// (0x0002f92d) control_pane_g7_ParamLimits

0x1546,	// (0x0002f92d) control_pane_g7

0x1539,	// (0x0002f920) control_pane_g8_ParamLimits

0x1539,	// (0x0002f920) control_pane_g8

0xe940,	// (0x0003cd27) dt_sta_controll_pane_ParamLimits

0xe94d,	// (0x0003cd34) dt_sta_indi_pane_ParamLimits

0xe95a,	// (0x0003cd41) dt_sta_title_pane_ParamLimits

0x4ac3,	// (0x00032eaa) aid_size_touch_scroll_bar_cale

0x43c2,	// (0x000327a9) popup_discreet_window_ParamLimits

0x43c2,	// (0x000327a9) popup_discreet_window

0xceba,	// (0x0003b2a1) popup_sk_window

0x7fda,	// (0x000363c1) bg_popup_sub_pane_cp28_ParamLimits

0x7fda,	// (0x000363c1) bg_popup_sub_pane_cp28

0xefdf,	// (0x0003d3c6) popup_discreet_window_g1_ParamLimits

0xefdf,	// (0x0003d3c6) popup_discreet_window_g1

0xefff,	// (0x0003d3e6) popup_discreet_window_t1_ParamLimits

0xefff,	// (0x0003d3e6) popup_discreet_window_t1

0xf01d,	// (0x0003d404) popup_discreet_window_t2_ParamLimits

0xf01d,	// (0x0003d404) popup_discreet_window_t2

0x0002,

0xfe96,	// (0x0003e27d) popup_discreet_window_t_ParamLimits

0xfe96,	// (0x0003e27d) popup_discreet_window_t

0x6ae7,	// (0x00034ece) popup_sk_window_g1

0x6af0,	// (0x00034ed7) popup_sk_window_g2

0x0001,

0xfe9d,	// (0x0003e284) popup_sk_window_g

0x6af9,	// (0x00034ee0) popup_sk_window_t1

0x6b07,	// (0x00034eee) popup_sk_window_t1_copy1

0xe77b,	// (0x0003cb62) cell_ai5_widget_pane_g2_ParamLimits

0xe8c1,	// (0x0003cca8) cell_ai5_widget_pane_t9_ParamLimits

0xe8c1,	// (0x0003cca8) cell_ai5_widget_pane_t9

0x41db,	// (0x000325c2) main_fep_fshwr2_pane

0xe9e9,	// (0x0003cdd0) aid_fshwr2_btn_pane

0xe9fa,	// (0x0003cde1) aid_fshwr2_syb_pane

0xea0b,	// (0x0003cdf2) aid_fshwr2_txt_pane

0xea17,	// (0x0003cdfe) fshwr2_func_candi_pane

0xea31,	// (0x0003ce18) fshwr2_hwr_syb_pane

0xea46,	// (0x0003ce2d) fshwr2_icf_pane

0x41db,	// (0x000325c2) fshwr2_icf_bg_pane

0xea6c,	// (0x0003ce53) fshwr2_icf_pane_t1_ParamLimits

0xea6c,	// (0x0003ce53) fshwr2_icf_pane_t1

0x71f0,	// (0x000355d7) fshwr2_func_candi_pane_g1

0xea83,	// (0x0003ce6a) fshwr2_func_candi_row_pane_ParamLimits

0xea83,	// (0x0003ce6a) fshwr2_func_candi_row_pane

0xeaa6,	// (0x0003ce8d) cell_fshwr2_syb_pane_ParamLimits

0xeaa6,	// (0x0003ce8d) cell_fshwr2_syb_pane

0x99c3,	// (0x00037daa) fshwr2_hwr_syb_pane_g1_ParamLimits

0x99c3,	// (0x00037daa) fshwr2_hwr_syb_pane_g1

0x41db,	// (0x000325c2) bg_popup_call_pane_cp01

0xeaba,	// (0x0003cea1) fshwr2_func_candi_cell_pane_ParamLimits

0xeaba,	// (0x0003cea1) fshwr2_func_candi_cell_pane

0x7dcc,	// (0x000361b3) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7dcc,	// (0x000361b3) fshwr2_func_candi_cell_bg_pane

0xeaf9,	// (0x0003cee0) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeaf9,	// (0x0003cee0) fshwr2_func_candi_cell_pane_g1

0xeb30,	// (0x0003cf17) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeb30,	// (0x0003cf17) fshwr2_func_candi_cell_pane_t1

0x41db,	// (0x000325c2) bg_button_pane_cp08

0x7682,	// (0x00035a69) cell_fshwr2_syb_bg_pane

0xeb4b,	// (0x0003cf32) cell_fshwr2_syb_bg_pane_g1

0xeb53,	// (0x0003cf3a) cell_fshwr2_syb_bg_pane_t1

0x4c31,	// (0x00033018) main_tmo_pane

0x1a9c,	// (0x0002fe83) uni_indicator_pane_g1_ParamLimits

0x1ab2,	// (0x0002fe99) uni_indicator_pane_g2_ParamLimits

0x1ac8,	// (0x0002feaf) uni_indicator_pane_g3_ParamLimits

0x899b,	// (0x00036d82) uni_indicator_pane_g4_ParamLimits

0x899b,	// (0x00036d82) uni_indicator_pane_g4

0x89af,	// (0x00036d96) uni_indicator_pane_g5_ParamLimits

0x89af,	// (0x00036d96) uni_indicator_pane_g5

0x89af,	// (0x00036d96) uni_indicator_pane_g6_ParamLimits

0x89af,	// (0x00036d96) uni_indicator_pane_g6

0xf91a,	// (0x0003dd01) uni_indicator_pane_g_ParamLimits

0x2365,	// (0x0003074c) popup_tmo_note_window_ParamLimits

0x2365,	// (0x0003074c) popup_tmo_note_window

0x4c31,	// (0x00033018) fshwr2_bg_pane

0xeb21,	// (0x0003cf08) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xeb21,	// (0x0003cf08) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfea2,	// (0x0003e289) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfea2,	// (0x0003e289) fshwr2_func_candi_cell_pane_g

0x9797,	// (0x00037b7e) bg_popup_window_pane_cp01

0x6c30,	// (0x00035017) bg_popup_window_pane_g1_cp01

0xf06f,	// (0x0003d456) bg_popup_window_pane_cp22_ParamLimits

0xf06f,	// (0x0003d456) bg_popup_window_pane_cp22

0xf07d,	// (0x0003d464) listscroll_tmo_link_pane_ParamLimits

0xf07d,	// (0x0003d464) listscroll_tmo_link_pane

0xf0bd,	// (0x0003d4a4) popup_tmo_note_window_g1_ParamLimits

0xf0bd,	// (0x0003d4a4) popup_tmo_note_window_g1

0xf0ca,	// (0x0003d4b1) tmo_note_info_pane_ParamLimits

0xf0ca,	// (0x0003d4b1) tmo_note_info_pane

0xeb62,	// (0x0003cf49) list_tmo_note_info_pane_g1_ParamLimits

0xeb62,	// (0x0003cf49) list_tmo_note_info_pane_g1

0xf0e4,	// (0x0003d4cb) list_tmo_note_info_pane_g2_ParamLimits

0xf0e4,	// (0x0003d4cb) list_tmo_note_info_pane_g2

0x0001,

0xfea7,	// (0x0003e28e) list_tmo_note_info_pane_g_ParamLimits

0xfea7,	// (0x0003e28e) list_tmo_note_info_pane_g

0xf100,	// (0x0003d4e7) list_tmo_note_info_text_pane_ParamLimits

0xf100,	// (0x0003d4e7) list_tmo_note_info_text_pane

0xf142,	// (0x0003d529) list_tmo_link_pane

0xf14f,	// (0x0003d536) scroll_pane_cp20

0xf15c,	// (0x0003d543) list_single_tmo_link_pane_ParamLimits

0xf15c,	// (0x0003d543) list_single_tmo_link_pane

0xf16c,	// (0x0003d553) list_single_tmo_link_pane_t1

0xf17a,	// (0x0003d561) list_tmo_note_info_text_pane_t1_ParamLimits

0xf17a,	// (0x0003d561) list_tmo_note_info_text_pane_t1

0x4cdf,	// (0x000330c6) aid_size_touch_scroll_bar_cp01_ParamLimits

0x4cdf,	// (0x000330c6) aid_size_touch_scroll_bar_cp01

0xcae0,	// (0x0003aec7) aid_size_touch_slider_marker

0xceae,	// (0x0003b295) popup_settings_window_ParamLimits

0xceae,	// (0x0003b295) popup_settings_window

0x3b0d,	// (0x00031ef4) popup_candi_list_indi_window

0x7867,	// (0x00035c4e) aid_touch_navi_pane_ParamLimits

0x6372,	// (0x00034759) rs_clock_indi_pane

0x637b,	// (0x00034762) sctrl_sk_bottom_pane_ParamLimits

0x638c,	// (0x00034773) sctrl_sk_top_pane_ParamLimits

0x6478,	// (0x0003485f) popup_fep_tooltip_window

0xee2d,	// (0x0003d214) aid_size_cell_widget_grid_ParamLimits

0xe767,	// (0x0003cb4e) cell_ai5_widget_pane_g1_ParamLimits

0xe767,	// (0x0003cb4e) cell_ai5_widget_pane_g1

0xe7c9,	// (0x0003cbb0) cell_ai5_widget_pane_g6_ParamLimits

0xe7d5,	// (0x0003cbbc) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe25,	// (0x0003e20c) cell_ai5_widget_pane_g_ParamLimits

0xfe25,	// (0x0003e20c) cell_ai5_widget_pane_g

0xe8f0,	// (0x0003ccd7) cell_ai5_widget_pane_t10_ParamLimits

0xe8f0,	// (0x0003ccd7) cell_ai5_widget_pane_t10

0xe90e,	// (0x0003ccf5) grid_ai5_widget_pane_ParamLimits

0xef09,	// (0x0003d2f0) cell_contacts_ai5_widget_pane_ParamLimits

0xef09,	// (0x0003d2f0) cell_contacts_ai5_widget_pane

0xf032,	// (0x0003d419) popup_discreet_window_t3_ParamLimits

0xf032,	// (0x0003d419) popup_discreet_window_t3

0xea5a,	// (0x0003ce41) popup_fshwr2_char_preview_window_ParamLimits

0xea5a,	// (0x0003ce41) popup_fshwr2_char_preview_window

0xeb79,	// (0x0003cf60) tmo_note_info_pane_t1

0xeb8e,	// (0x0003cf75) tmo_note_info_pane_t2

0xeba3,	// (0x0003cf8a) tmo_note_info_pane_t3

0xf11e,	// (0x0003d505) tmo_note_info_pane_t4

0xf130,	// (0x0003d517) tmo_note_info_pane_t5

0x0004,

0xfeac,	// (0x0003e293) tmo_note_info_pane_t

0xf142,	// (0x0003d529) list_tmo_link_pane_ParamLimits

0xf14f,	// (0x0003d536) scroll_pane_cp20_ParamLimits

0x41db,	// (0x000325c2) bg_popup_fep_char_preview_window_cp01

0xf193,	// (0x0003d57a) popup_fshwr2_char_preview_window_t1

0xf1a1,	// (0x0003d588) popup_candi_list_indi_window_g1

0xf1aa,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane

0xf1b6,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1

0xf1cb,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2

0xf1d7,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb7,	// (0x0003e29e) cell_contacts_ai5_widget_pane_g

0xf1e3,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1

0x4c31,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01

0xec1b,	// (0x0003d002) settings_container_pane

0x7682,	// (0x00035a69) listscroll_set_pane_copy1

0x90d3,	// (0x000374ba) scroll_pane_cp121_copy1

0xf1f5,	// (0x0003d5dc) set_content_pane_copy1

0xf1fd,	// (0x0003d5e4) aid_height_set_list_copy1_ParamLimits

0xf1fd,	// (0x0003d5e4) aid_height_set_list_copy1

0x8b48,	// (0x00036f2f) aid_size_parent_copy1_ParamLimits

0x8b48,	// (0x00036f2f) aid_size_parent_copy1

0xf209,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf209,	// (0x0003d5f0) button_value_adjust_pane_cp6_copy1

0x5521,	// (0x00033908) list_highlight_pane_cp2_copy1_ParamLimits

0x5521,	// (0x00033908) list_highlight_pane_cp2_copy1

0xec27,	// (0x0003d00e) list_set_pane_copy1_ParamLimits

0xec27,	// (0x0003d00e) list_set_pane_copy1

0xebb8,	// (0x0003cf9f) main_pane_set_t1_copy1_ParamLimits

0xebb8,	// (0x0003cf9f) main_pane_set_t1_copy1

0xebf2,	// (0x0003cfd9) main_pane_set_t2_copy1_ParamLimits

0xebf2,	// (0x0003cfd9) main_pane_set_t2_copy1

0xf21d,	// (0x0003d604) main_pane_set_t3_copy1

0xf22b,	// (0x0003d612) main_pane_set_t4_copy1

0xec0f,	// (0x0003cff6) set_content_pane_g1_copy1_ParamLimits

0xec0f,	// (0x0003cff6) set_content_pane_g1_copy1

0xf239,	// (0x0003d620) setting_code_pane_copy1

0xf241,	// (0x0003d628) setting_slider_graphic_pane_copy1

0xf241,	// (0x0003d628) setting_slider_pane_copy1

0xf241,	// (0x0003d628) setting_text_pane_copy1

0xf241,	// (0x0003d628) setting_volume_pane_copy1

0xf249,	// (0x0003d630) settings_code_pane_cp2_copy1

0xf251,	// (0x0003d638) settings_code_pane_cp_copy1_ParamLimits

0xf251,	// (0x0003d638) settings_code_pane_cp_copy1

0xecb5,	// (0x0003d09c) volume_set_pane_copy1

0xecbd,	// (0x0003d0a4) volume_set_pane_g10_copy1

0xecc5,	// (0x0003d0ac) volume_set_pane_g1_copy1

0xeccd,	// (0x0003d0b4) volume_set_pane_g2_copy1

0xecd5,	// (0x0003d0bc) volume_set_pane_g3_copy1

0xecdd,	// (0x0003d0c4) volume_set_pane_g4_copy1

0xece5,	// (0x0003d0cc) volume_set_pane_g5_copy1

0xeced,	// (0x0003d0d4) volume_set_pane_g6_copy1

0xecf5,	// (0x0003d0dc) volume_set_pane_g7_copy1

0xecfd,	// (0x0003d0e4) volume_set_pane_g8_copy1

0xed05,	// (0x0003d0ec) volume_set_pane_g9_copy1

0x4538,	// (0x0003291f) bg_set_opt_pane_cp_copy1_ParamLimits

0x4538,	// (0x0003291f) bg_set_opt_pane_cp_copy1

0x4556,	// (0x0003293d) setting_slider_pane_t1_copy1_ParamLimits

0x4556,	// (0x0003293d) setting_slider_pane_t1_copy1

0x6de4,	// (0x000351cb) setting_slider_pane_t2_copy1_ParamLimits

0x6de4,	// (0x000351cb) setting_slider_pane_t2_copy1

0x6dfd,	// (0x000351e4) setting_slider_pane_t3_copy1_ParamLimits

0x6dfd,	// (0x000351e4) setting_slider_pane_t3_copy1

0x459c,	// (0x00032983) slider_set_pane_copy1_ParamLimits

0x459c,	// (0x00032983) slider_set_pane_copy1

0x4c80,	// (0x00033067) set_opt_bg_pane_g1_copy2

0x4c88,	// (0x0003306f) set_opt_bg_pane_g2_copy2

0xf265,	// (0x0003d64c) set_opt_bg_pane_g3_copy2

0x4c98,	// (0x0003307f) set_opt_bg_pane_g4_copy2

0x4ca0,	// (0x00033087) set_opt_bg_pane_g5_copy2

0x4ca8,	// (0x0003308f) set_opt_bg_pane_g6_copy2

0xed0d,	// (0x0003d0f4) set_opt_bg_pane_g7_copy2

0xf26d,	// (0x0003d654) set_opt_bg_pane_g8_copy2

0xf275,	// (0x0003d65c) set_opt_bg_pane_g9_copy2

0x5c86,	// (0x0003406d) aid_size_touch_slider_mark_copy1_ParamLimits

0x5c86,	// (0x0003406d) aid_size_touch_slider_mark_copy1

0x8b5a,	// (0x00036f41) slider_set_pane_g1_copy1

0x8b63,	// (0x00036f4a) slider_set_pane_g2_copy1

0x5ca6,	// (0x0003408d) slider_set_pane_g3_copy1_ParamLimits

0x5ca6,	// (0x0003408d) slider_set_pane_g3_copy1

0x5cba,	// (0x000340a1) slider_set_pane_g4_copy1_ParamLimits

0x5cba,	// (0x000340a1) slider_set_pane_g4_copy1

0x5cd2,	// (0x000340b9) slider_set_pane_g5_copy1_ParamLimits

0x5cd2,	// (0x000340b9) slider_set_pane_g5_copy1

0x5ca6,	// (0x0003408d) slider_set_pane_g6_copy1_ParamLimits

0x5ca6,	// (0x0003408d) slider_set_pane_g6_copy1

0xed15,	// (0x0003d0fc) slider_set_pane_g7_copy1_ParamLimits

0xed15,	// (0x0003d0fc) slider_set_pane_g7_copy1

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp2_copy1

0x45b2,	// (0x00032999) setting_slider_graphic_pane_g1_copy1

0xed2b,	// (0x0003d112) setting_slider_graphic_pane_t1_copy1

0xed3a,	// (0x0003d121) setting_slider_graphic_pane_t2_copy1

0xed49,	// (0x0003d130) slider_set_pane_cp_copy1

0xf285,	// (0x0003d66c) input_focus_pane_cp1_copy1

0xf28e,	// (0x0003d675) list_set_text_pane_copy1

0xf296,	// (0x0003d67d) setting_text_pane_g1_copy1

0x41bb,	// (0x000325a2) set_text_pane_t1_copy1

0xf285,	// (0x0003d66c) input_focus_pane_cp2_copy1

0xf296,	// (0x0003d67d) setting_code_pane_g1_copy1

0xf29f,	// (0x0003d686) setting_code_pane_t1_copy1

0x13f5,	// (0x0002f7dc) list_set_graphic_pane_copy1

0x43a4,	// (0x0003278b) bg_set_opt_pane_cp4_copy1

0xf2ad,	// (0x0003d694) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2ad,	// (0x0003d694) list_set_graphic_pane_g1_copy1

0xf2b9,	// (0x0003d6a0) list_set_graphic_pane_g2_copy1

0x73fd,	// (0x000357e4) list_set_graphic_pane_t1_copy1_ParamLimits

0x73fd,	// (0x000357e4) list_set_graphic_pane_t1_copy1

0x9797,	// (0x00037b7e) rs_clock_indi_pane_g1

0xf2c1,	// (0x0003d6a8) rs_clock_indi_pane_t1

0xf2cf,	// (0x0003d6b6) rs_indi_pane

0xf2d7,	// (0x0003d6be) rs_indi_pane_g1

0xf2e0,	// (0x0003d6c7) rs_indi_pane_g2

0xf1a1,	// (0x0003d588) rs_indi_pane_g3

0x0002,

0xfebe,	// (0x0003e2a5) rs_indi_pane_g

0x7682,	// (0x00035a69) bg_popup_preview_window_pane_cp03

0xf2e9,	// (0x0003d6d0) popup_fep_tooltip_window_t1

0xac13,	// (0x00038ffa) popup_note2_window_g2_ParamLimits

0xac13,	// (0x00038ffa) popup_note2_window_g2

0x0001,

0xfc5e,	// (0x0003e045) popup_note2_window_g_ParamLimits

0xfc5e,	// (0x0003e045) popup_note2_window_g

0xb08e,	// (0x00039475) bg_popup_sub_pane_cp11_ParamLimits

0xb09b,	// (0x00039482) cell_ai3_links_pane_g1_ParamLimits

0xb0b2,	// (0x00039499) cell_ai3_links_pane_t1

0x41bb,	// (0x000325a2) set_text_pane_t1_copy1_ParamLimits

0x75a9,	// (0x00035990) cell_graphic_popup_pane_cp2_ParamLimits

0x75a9,	// (0x00035990) cell_graphic_popup_pane_cp2

0xf2f7,	// (0x0003d6de) cell_graphic_popup_pane_g1_cp2

0x4972,	// (0x00032d59) cell_graphic_popup_pane_g2_cp2

0xf2ff,	// (0x0003d6e6) cell_graphic_popup_pane_g3_cp2

0xf307,	// (0x0003d6ee) cell_graphic_popup_pane_t2_cp2

0x4983,	// (0x00032d6a) grid_highlight_pane_cp3_cp2

0x508e,	// (0x00033475) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x4c31,	// (0x00033018) main_tmo_pane_ParamLimits

0x235d,	// (0x00030744) popup_tmo_big_image_note_window

0xee6a,	// (0x0003d251) cell_ai5_widget_list_pane

0xe75e,	// (0x0003cb45) cell_ai5_widget_lrg_icon_pane

0xeb79,	// (0x0003cf60) tmo_note_info_pane_t1_ParamLimits

0xeb8e,	// (0x0003cf75) tmo_note_info_pane_t2_ParamLimits

0xeba3,	// (0x0003cf8a) tmo_note_info_pane_t3_ParamLimits

0xf11e,	// (0x0003d505) tmo_note_info_pane_t4_ParamLimits

0xf130,	// (0x0003d517) tmo_note_info_pane_t5_ParamLimits

0xfeac,	// (0x0003e293) tmo_note_info_pane_t_ParamLimits

0xec1b,	// (0x0003d002) settings_container_pane_ParamLimits

0xf27d,	// (0x0003d664) indicator_popup_pane_cp5

0xf27d,	// (0x0003d664) indicator_popup_pane_cp6

0x13f5,	// (0x0002f7dc) list_set_graphic_pane_copy1_ParamLimits

0x41db,	// (0x000325c2) bg_popup_window_pane_cp23

0xf315,	// (0x0003d6fc) popup_tmo_big_image_note_window_g1

0xf31e,	// (0x0003d705) popup_tmo_big_image_note_window_t1

0xf32c,	// (0x0003d713) popup_tmo_big_image_note_window_t2

0xf33a,	// (0x0003d721) popup_tmo_big_image_note_window_t3

0x0002,

0xfec5,	// (0x0003e2ac) popup_tmo_big_image_note_window_t

0x9797,	// (0x00037b7e) cell_ai5_widget_lrg_icon_pane_g1

0xf348,	// (0x0003d72f) cell_ai5_widget_lrg_icon_pane_t1

0xed51,	// (0x0003d138) cell_ai5_widget_list_row_pane_ParamLimits

0xed51,	// (0x0003d138) cell_ai5_widget_list_row_pane

0xed68,	// (0x0003d14f) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xed68,	// (0x0003d14f) cell_ai5_widget_list_row_pane_g1

0xed75,	// (0x0003d15c) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xed75,	// (0x0003d15c) cell_ai5_widget_list_row_pane_t1

0xeda6,	// (0x0003d18d) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xeda6,	// (0x0003d18d) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfecc,	// (0x0003e2b3) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfecc,	// (0x0003e2b3) cell_ai5_widget_list_row_pane_t

0x41db,	// (0x000325c2) main_fep_vtchi_ss_pane

0xf376,	// (0x0003d75d) popup_fep_char_pre_window

0xf37e,	// (0x0003d765) popup_fep_ituss_window

0xedce,	// (0x0003d1b5) popup_fep_vkbss_window

0xf3b1,	// (0x0003d798) grid_vkbss_keypad_pane_ParamLimits

0xf3b1,	// (0x0003d798) grid_vkbss_keypad_pane

0xf3c1,	// (0x0003d7a8) ituss_keypad_pane

0x6f02,	// (0x000352e9) aid_vkbss_key_offset_ParamLimits

0x6f02,	// (0x000352e9) aid_vkbss_key_offset

0x6f0e,	// (0x000352f5) cell_vkbss_key_pane_ParamLimits

0x6f0e,	// (0x000352f5) cell_vkbss_key_pane

0x7926,	// (0x00035d0d) bg_cell_vkbss_key_g1_ParamLimits

0x7926,	// (0x00035d0d) bg_cell_vkbss_key_g1

0xf3d0,	// (0x0003d7b7) cell_vkbss_key_3p_pane_ParamLimits

0xf3d0,	// (0x0003d7b7) cell_vkbss_key_3p_pane

0xf3ea,	// (0x0003d7d1) cell_vkbss_key_g1_ParamLimits

0xf3ea,	// (0x0003d7d1) cell_vkbss_key_g1

0xf404,	// (0x0003d7eb) cell_vkbss_key_t1_ParamLimits

0xf404,	// (0x0003d7eb) cell_vkbss_key_t1

0x6f24,	// (0x0003530b) cell_ituss_key_pane_ParamLimits

0x6f24,	// (0x0003530b) cell_ituss_key_pane

0xf42f,	// (0x0003d816) bg_cell_ituss_key_g1_ParamLimits

0xf42f,	// (0x0003d816) bg_cell_ituss_key_g1

0xf43b,	// (0x0003d822) cell_ituss_key_pane_g1_ParamLimits

0xf43b,	// (0x0003d822) cell_ituss_key_pane_g1

0x6f35,	// (0x0003531c) cell_ituss_key_pane_g2_ParamLimits

0x6f35,	// (0x0003531c) cell_ituss_key_pane_g2

0x0002,

0xfed3,	// (0x0003e2ba) cell_ituss_key_pane_g_ParamLimits

0xfed3,	// (0x0003e2ba) cell_ituss_key_pane_g

0x6f5d,	// (0x00035344) cell_ituss_key_t1_ParamLimits

0x6f5d,	// (0x00035344) cell_ituss_key_t1

0x6f97,	// (0x0003537e) cell_ituss_key_t2_ParamLimits

0x6f97,	// (0x0003537e) cell_ituss_key_t2

0x6fc8,	// (0x000353af) cell_ituss_key_t3_ParamLimits

0x6fc8,	// (0x000353af) cell_ituss_key_t3

0x6f97,	// (0x0003537e) cell_ituss_key_t4_ParamLimits

0x6f97,	// (0x0003537e) cell_ituss_key_t4

0x0004,

0xfeda,	// (0x0003e2c1) cell_ituss_key_t_ParamLimits

0xfeda,	// (0x0003e2c1) cell_ituss_key_t

0xf461,	// (0x0003d848) cell_vkbss_key_3p_pane_g1

0xf469,	// (0x0003d850) cell_vkbss_key_3p_pane_g2

0xf471,	// (0x0003d858) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee5,	// (0x0003e2cc) cell_vkbss_key_3p_pane_g

0x7682,	// (0x00035a69) bg_popup_fep_char_preview_window_cp02

0xf479,	// (0x0003d860) popup_fep_char_pre_window_t1

0xe74b,	// (0x0003cb32) main_ai5_sk_pane

0xf1aa,	// (0x0003d591) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf1b6,	// (0x0003d59d) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf1cb,	// (0x0003d5b2) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf1d7,	// (0x0003d5be) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb7,	// (0x0003e29e) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf1e3,	// (0x0003d5ca) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x4c31,	// (0x00033018) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xeddb,	// (0x0003d1c2) main_ai5_sk_pane_g1

0x7e24,	// (0x0003620b) popup_query_code_window_g1

0xf390,	// (0x0003d777) popup_fep_vkb_icf_pane

0xf39b,	// (0x0003d782) popup_fep_vtchi_icf_pane

0xf487,	// (0x0003d86e) bg_icf_pane

0xf493,	// (0x0003d87a) list_vkb_icf_pane

0xf49f,	// (0x0003d886) bg_icf_pane_cp01

0xf4b2,	// (0x0003d899) vtchi_icf_list_pane

0xf4c2,	// (0x0003d8a9) list_vkb_icf_pane_t1_ParamLimits

0xf4c2,	// (0x0003d8a9) list_vkb_icf_pane_t1

0xf4d7,	// (0x0003d8be) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x0003d8be) vtchi_icf_list_pane_t1

0xf37e,	// (0x0003d765) popup_fep_ituss_window_ParamLimits

0xf39b,	// (0x0003d782) popup_fep_vtchi_icf_pane_ParamLimits

0xf3c1,	// (0x0003d7a8) ituss_keypad_pane_ParamLimits

0x6ef8,	// (0x000352df) ituss_sks_pane

0xf487,	// (0x0003d86e) bg_icf_pane_ParamLimits

0xf356,	// (0x0003d73d) icf_edit_indi_pane_ParamLimits

0xf356,	// (0x0003d73d) icf_edit_indi_pane

0xf493,	// (0x0003d87a) list_vkb_icf_pane_ParamLimits

0xf49f,	// (0x0003d886) bg_icf_pane_cp01_ParamLimits

0xf369,	// (0x0003d750) icf_edit_indi_pane_cp01_ParamLimits

0xf369,	// (0x0003d750) icf_edit_indi_pane_cp01

0xf4ba,	// (0x0003d8a1) vtchi_query_pane

0xe5e9,	// (0x0003c9d0) icf_edit_indi_pane_g1_ParamLimits

0xe5e9,	// (0x0003c9d0) icf_edit_indi_pane_g1

0xede4,	// (0x0003d1cb) icf_edit_indi_pane_g2_ParamLimits

0xede4,	// (0x0003d1cb) icf_edit_indi_pane_g2

0x0001,

0xfefd,	// (0x0003e2e4) icf_edit_indi_pane_g_ParamLimits

0xfefd,	// (0x0003e2e4) icf_edit_indi_pane_g

0xedf4,	// (0x0003d1db) icf_edit_indi_pane_t1

0xf4ee,	// (0x0003d8d5) bg_input_focus_pane_cp042

0xf4f7,	// (0x0003d8de) vtchi_button_pane

0xf500,	// (0x0003d8e7) vtchi_query_pane_t1

0xf50e,	// (0x0003d8f5) vtchi_query_pane_t2

0xf51c,	// (0x0003d903) vtchi_query_pane_t3

0x0002,

0xfeec,	// (0x0003e2d3) vtchi_query_pane_t

0x41db,	// (0x000325c2) bg_button_pane_cp13

0xf52a,	// (0x0003d911) vtchi_button_pane_g1

0x7014,	// (0x000353fb) ituss_sks_pane_g1

0x701d,	// (0x00035404) ituss_sks_pane_g2

0x0001,

0xfef3,	// (0x0003e2da) ituss_sks_pane_g

0xf532,	// (0x0003d919) ituss_sks_pane_t1

0xf540,	// (0x0003d927) ituss_sks_pane_t2

0x0001,

0xfef8,	// (0x0003e2df) ituss_sks_pane_t

0x93c4,	// (0x000377ab) indicator_nsta_pane_cp_g1

0x93cd,	// (0x000377b4) indicator_nsta_pane_cp_g2

0x93d5,	// (0x000377bc) indicator_nsta_pane_cp_g3

0x93dd,	// (0x000377c4) indicator_nsta_pane_cp_g4

0x93e5,	// (0x000377cc) indicator_nsta_pane_cp_g5

0x93ed,	// (0x000377d4) indicator_nsta_pane_cp_g6

0x0005,

0xfaa8,	// (0x0003de8f) indicator_nsta_pane_cp_g

0xe324,	// (0x0003c70b) cell_graphic2_pane_t2_ParamLimits

0xe324,	// (0x0003c70b) cell_graphic2_pane_t2

0x0001,

0xfdae,	// (0x0003e195) cell_graphic2_pane_t_ParamLimits

0xfdae,	// (0x0003e195) cell_graphic2_pane_t

0xe35c,	// (0x0003c743) cell_graphic2_control_pane_t1

0x1393,	// (0x0002f77a) signal_pane_g3_ParamLimits

0x1393,	// (0x0002f77a) signal_pane_g3

0x13a7,	// (0x0002f78e) signal_pane_g4_ParamLimits

0x13a7,	// (0x0002f78e) signal_pane_g4

0xedb8,	// (0x0003d19f) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xedb8,	// (0x0003d19f) cell_ai5_widget_list_row_pane_t3

0xf44f,	// (0x0003d836) cell_ituss_key_pane_t1_ParamLimits

0xf44f,	// (0x0003d836) cell_ituss_key_pane_t1

0x7afa,	// (0x00035ee1) form_field_data_wide_pane_vc_t2_ParamLimits

0x7afa,	// (0x00035ee1) form_field_data_wide_pane_vc_t2

0x7b0c,	// (0x00035ef3) form_field_data_wide_pane_vc_t3_ParamLimits

0x7b0c,	// (0x00035ef3) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0003dbe9) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0003dbe9) form_field_data_wide_pane_vc_t

0x9118,	// (0x000374ff) form_field_slider_wide_pane_vc_t3_ParamLimits

0x9118,	// (0x000374ff) form_field_slider_wide_pane_vc_t3

0x91d6,	// (0x000375bd) form_field_popup_wide_pane_vc_t2_ParamLimits

0x91d6,	// (0x000375bd) form_field_popup_wide_pane_vc_t2

0x91eb,	// (0x000375d2) form_field_popup_wide_pane_vc_t3_ParamLimits

0x91eb,	// (0x000375d2) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa97,	// (0x0003de7e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa97,	// (0x0003de7e) form_field_popup_wide_pane_vc_t

0xe9e9,	// (0x0003cdd0) aid_fshwr2_btn_pane_ParamLimits

0xe9fa,	// (0x0003cde1) aid_fshwr2_syb_pane_ParamLimits

0xea0b,	// (0x0003cdf2) aid_fshwr2_txt_pane_ParamLimits

0x4c31,	// (0x00033018) fshwr2_bg_pane_ParamLimits

0xea17,	// (0x0003cdfe) fshwr2_func_candi_pane_ParamLimits

0xea31,	// (0x0003ce18) fshwr2_hwr_syb_pane_ParamLimits

0xea46,	// (0x0003ce2d) fshwr2_icf_pane_ParamLimits

0x5ed1,	// (0x000342b8) list_double_graphic_pane_vc_g4_ParamLimits

0x5ed1,	// (0x000342b8) list_double_graphic_pane_vc_g4

0x6f51,	// (0x00035338) cell_ituss_key_pane_g3_ParamLimits

0x6f51,	// (0x00035338) cell_ituss_key_pane_g3

0x6ff9,	// (0x000353e0) cell_ituss_key_t5_ParamLimits

0x6ff9,	// (0x000353e0) cell_ituss_key_t5

0xedce,	// (0x0003d1b5) popup_fep_vkbss_window_ParamLimits

0xe755,	// (0x0003cb3c) aid_cell_ai5_quarter

0xedf4,	// (0x0003d1db) icf_edit_indi_pane_t1_ParamLimits

0x47b3,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x47b3,	// (0x00032b9a) aid_tch_indicator_popup_pane_cp2

0x47c6,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x47c6,	// (0x00032bad) aid_tch_query_popup_data_pane_cp2

0x7dcc,	// (0x000361b3) aid_tch_query_popup_pane_ParamLimits

0x7dcc,	// (0x000361b3) aid_tch_query_popup_pane

0x7dcc,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x7dcc,	// (0x000361b3) aid_tch_query_popup_data_pane_cp1
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

} // end of namespace AknLayoutScalable_Elaf_pql_av_qvga_lsc_Large

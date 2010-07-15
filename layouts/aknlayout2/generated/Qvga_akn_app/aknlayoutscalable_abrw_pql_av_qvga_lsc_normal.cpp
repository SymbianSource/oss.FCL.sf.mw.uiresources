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

#include "aknlayoutscalable_abrw_pql_av_qvga_lsc_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000a783 };

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
0x0264,	// (0x0000a9e7) Screen

0x026e,	// (0x0000a9f1) application_window_ParamLimits

0x026e,	// (0x0000a9f1) application_window

0x64f4,	// (0x00010c77) screen_g1

0x029c,	// (0x0000aa1f) area_bottom_pane_ParamLimits

0x029c,	// (0x0000aa1f) area_bottom_pane

0x6563,	// (0x00010ce6) area_top_pane_ParamLimits

0x6563,	// (0x00010ce6) area_top_pane

0x43f8,	// (0x0000eb7b) main_pane_ParamLimits

0x43f8,	// (0x0000eb7b) main_pane

0x65db,	// (0x00010d5e) misc_graphics

0x187f,	// (0x0000c002) battery_pane_ParamLimits

0x187f,	// (0x0000c002) battery_pane

0x9254,	// (0x000139d7) bg_status_flat_pane_g8

0x925c,	// (0x000139df) bg_status_flat_pane_g9

0x8616,	// (0x00012d99) context_pane_ParamLimits

0x8616,	// (0x00012d99) context_pane

0x19d9,	// (0x0000c15c) navi_pane_ParamLimits

0x19d9,	// (0x0000c15c) navi_pane

0x1a4e,	// (0x0000c1d1) signal_pane_ParamLimits

0x1a4e,	// (0x0000c1d1) signal_pane

0x0008,

0xf85e,	// (0x00019fe1) bg_status_flat_pane_g

0x1ada,	// (0x0000c25d) status_pane_g1_ParamLimits

0x1ada,	// (0x0000c25d) status_pane_g1

0x1ae6,	// (0x0000c269) status_pane_g2_ParamLimits

0x1ae6,	// (0x0000c269) status_pane_g2

0x882b,	// (0x00012fae) status_pane_g3_ParamLimits

0x882b,	// (0x00012fae) status_pane_g3

0x0004,

0xf791,	// (0x00019f14) status_pane_g_ParamLimits

0xf791,	// (0x00019f14) status_pane_g

0x1af2,	// (0x0000c275) title_pane_ParamLimits

0x1af2,	// (0x0000c275) title_pane

0x1b4d,	// (0x0000c2d0) uni_indicator_pane_ParamLimits

0x1b4d,	// (0x0000c2d0) uni_indicator_pane

0x8477,	// (0x00012bfa) bg_list_pane_ParamLimits

0x8477,	// (0x00012bfa) bg_list_pane

0x1243,	// (0x0000b9c6) find_pane

0xde09,	// (0x0001858c) listscroll_app_pane_ParamLimits

0xde09,	// (0x0001858c) listscroll_app_pane

0x84ab,	// (0x00012c2e) listscroll_form_pane

0x125b,	// (0x0000b9de) listscroll_gen_pane_ParamLimits

0x125b,	// (0x0000b9de) listscroll_gen_pane

0x4bf7,	// (0x0000f37a) listscroll_set_pane

0xde19,	// (0x0001859c) main_idle_act_pane

0x818b,	// (0x0001290e) main_idle_trad_pane

0x818b,	// (0x0001290e) main_list_empty_pane

0x84da,	// (0x00012c5d) main_midp_pane

0x84e6,	// (0x00012c69) main_pane_g1_ParamLimits

0x84e6,	// (0x00012c69) main_pane_g1

0xde2c,	// (0x000185af) popup_ai_message_window_ParamLimits

0xde2c,	// (0x000185af) popup_ai_message_window

0xdeb0,	// (0x00018633) popup_fep_china_uni_window_ParamLimits

0xdeb0,	// (0x00018633) popup_fep_china_uni_window

0x4ce1,	// (0x0000f464) popup_fep_japan_candidate_window_ParamLimits

0x4ce1,	// (0x0000f464) popup_fep_japan_candidate_window

0x4cff,	// (0x0000f482) popup_fep_japan_predictive_window_ParamLimits

0x4cff,	// (0x0000f482) popup_fep_japan_predictive_window

0xdeee,	// (0x00018671) popup_find_window

0xdf07,	// (0x0001868a) popup_grid_graphic_window_ParamLimits

0xdf07,	// (0x0001868a) popup_grid_graphic_window

0x4d56,	// (0x0000f4d9) popup_large_graphic_colour_window

0xdf83,	// (0x00018706) popup_menu_window_ParamLimits

0xdf83,	// (0x00018706) popup_menu_window

0xe0e1,	// (0x00018864) popup_note_image_window

0xe0a9,	// (0x0001882c) popup_note_wait_window_ParamLimits

0xe0a9,	// (0x0001882c) popup_note_wait_window

0xe0f7,	// (0x0001887a) popup_note_window_ParamLimits

0xe0f7,	// (0x0001887a) popup_note_window

0xe18b,	// (0x0001890e) popup_query_code_window_ParamLimits

0xe18b,	// (0x0001890e) popup_query_code_window

0x4f13,	// (0x0000f696) popup_query_data_code_window_ParamLimits

0x4f13,	// (0x0000f696) popup_query_data_code_window

0xe1c3,	// (0x00018946) popup_query_data_window_ParamLimits

0xe1c3,	// (0x00018946) popup_query_data_window

0xe237,	// (0x000189ba) popup_query_sat_info_window_ParamLimits

0xe237,	// (0x000189ba) popup_query_sat_info_window

0xe2c4,	// (0x00018a47) popup_snote_single_graphic_window_ParamLimits

0xe2c4,	// (0x00018a47) popup_snote_single_graphic_window

0xe2c4,	// (0x00018a47) popup_snote_single_text_window_ParamLimits

0xe2c4,	// (0x00018a47) popup_snote_single_text_window

0x4f82,	// (0x0000f705) popup_sub_window_general

0x5086,	// (0x0000f809) popup_window_general_ParamLimits

0x5086,	// (0x0000f809) popup_window_general

0x84fc,	// (0x00012c7f) power_save_pane

0xdcda,	// (0x0001845d) control_pane_g1_ParamLimits

0xdcda,	// (0x0001845d) control_pane_g1

0x4aac,	// (0x0000f22f) control_pane_g2_ParamLimits

0x4aac,	// (0x0000f22f) control_pane_g2

0x8442,	// (0x00012bc5) control_pane_g3_ParamLimits

0x8442,	// (0x00012bc5) control_pane_g3

0x0007,

0xf779,	// (0x00019efc) control_pane_g_ParamLimits

0xf779,	// (0x00019efc) control_pane_g

0xdd0f,	// (0x00018492) control_pane_t1_ParamLimits

0xdd0f,	// (0x00018492) control_pane_t1

0xdd6b,	// (0x000184ee) control_pane_t2_ParamLimits

0xdd6b,	// (0x000184ee) control_pane_t2

0x0002,

0xf78a,	// (0x00019f0d) control_pane_t_ParamLimits

0xf78a,	// (0x00019f0d) control_pane_t

0x8369,	// (0x00012aec) navi_navi_volume_pane_cp1

0x8371,	// (0x00012af4) status_small_icon_pane

0x8379,	// (0x00012afc) status_small_pane_g1_ParamLimits

0x8379,	// (0x00012afc) status_small_pane_g1

0x106c,	// (0x0000b7ef) status_small_pane_g2_ParamLimits

0x106c,	// (0x0000b7ef) status_small_pane_g2

0x1078,	// (0x0000b7fb) status_small_pane_g3_ParamLimits

0x1078,	// (0x0000b7fb) status_small_pane_g3

0x1084,	// (0x0000b807) status_small_pane_g4_ParamLimits

0x1084,	// (0x0000b807) status_small_pane_g4

0x1090,	// (0x0000b813) status_small_pane_g5_ParamLimits

0x1090,	// (0x0000b813) status_small_pane_g5

0x83dd,	// (0x00012b60) status_small_pane_g6_ParamLimits

0x83dd,	// (0x00012b60) status_small_pane_g6

0x0007,

0xf768,	// (0x00019eeb) status_small_pane_g_ParamLimits

0xf768,	// (0x00019eeb) status_small_pane_g

0x10bf,	// (0x0000b842) status_small_pane_t1

0x10d9,	// (0x0000b85c) status_small_wait_pane_ParamLimits

0x10d9,	// (0x0000b85c) status_small_wait_pane

0x0e74,	// (0x0000b5f7) aid_levels_signal_ParamLimits

0x0e74,	// (0x0000b5f7) aid_levels_signal

0x0e88,	// (0x0000b60b) signal_pane_g1_ParamLimits

0x0e88,	// (0x0000b60b) signal_pane_g1

0x0ea2,	// (0x0000b625) signal_pane_g2_ParamLimits

0x0ea2,	// (0x0000b625) signal_pane_g2

0x0003,

0xf6f9,	// (0x00019e7c) signal_pane_g_ParamLimits

0xf6f9,	// (0x00019e7c) signal_pane_g

0x7c55,	// (0x000123d8) context_pane_g1

0x0433,	// (0x0000abb6) title_pane_g1

0x0475,	// (0x0000abf8) title_pane_t1

0x6683,	// (0x00010e06) title_pane_t2

0x66a9,	// (0x00010e2c) title_pane_t3

0x0002,

0xf557,	// (0x00019cda) title_pane_t

0x1b73,	// (0x0000c2f6) aid_levels_battery_ParamLimits

0x1b73,	// (0x0000c2f6) aid_levels_battery

0x1b8b,	// (0x0000c30e) battery_pane_g1_ParamLimits

0x1b8b,	// (0x0000c30e) battery_pane_g1

0x1ba6,	// (0x0000c329) battery_pane_g2_ParamLimits

0x1ba6,	// (0x0000c329) battery_pane_g2

0x0001,

0xf79c,	// (0x00019f1f) battery_pane_g_ParamLimits

0xf79c,	// (0x00019f1f) battery_pane_g

0x1ec4,	// (0x0000c647) uni_indicator_pane_g1

0x1eda,	// (0x0000c65d) uni_indicator_pane_g2

0x1ef0,	// (0x0000c673) uni_indicator_pane_g3

0x0005,

0xf906,	// (0x0001a089) uni_indicator_pane_g

0x75e0,	// (0x00011d63) navi_icon_pane_ParamLimits

0x75e0,	// (0x00011d63) navi_icon_pane

0x65db,	// (0x00010d5e) navi_midp_pane

0x65db,	// (0x00010d5e) navi_navi_pane

0x75e0,	// (0x00011d63) navi_text_pane_ParamLimits

0x75e0,	// (0x00011d63) navi_text_pane

0x64f4,	// (0x00010c77) status_small_wait_pane_g1

0x6b1c,	// (0x0001129f) status_small_wait_pane_g2

0x0001,

0xf901,	// (0x0001a084) status_small_wait_pane_g

0x1e6a,	// (0x0000c5ed) navi_navi_icon_text_pane

0x1e84,	// (0x0000c607) navi_navi_pane_g1_ParamLimits

0x1e84,	// (0x0000c607) navi_navi_pane_g1

0x1e72,	// (0x0000c5f5) navi_navi_pane_g2_ParamLimits

0x1e72,	// (0x0000c5f5) navi_navi_pane_g2

0x0001,

0xf8cf,	// (0x0001a052) navi_navi_pane_g_ParamLimits

0xf8cf,	// (0x0001a052) navi_navi_pane_g

0x1e96,	// (0x0000c619) navi_navi_tabs_pane

0x1e6a,	// (0x0000c5ed) navi_navi_text_pane

0x1e6a,	// (0x0000c5ed) navi_navi_volume_pane

0x9840,	// (0x00013fc3) navi_text_pane_t1

0x9834,	// (0x00013fb7) navi_icon_pane_g1

0x9788,	// (0x00013f0b) navi_navi_text_pane_t1

0x5377,	// (0x0000fafa) navi_navi_volume_pane_g1

0xe512,	// (0x00018c95) volume_small_pane

0x1dbd,	// (0x0000c540) navi_navi_icon_text_pane_g1

0x1dc5,	// (0x0000c548) navi_navi_icon_text_pane_t1

0x92b4,	// (0x00013a37) navi_tabs_2_long_pane

0x92b4,	// (0x00013a37) navi_tabs_2_pane

0x92b4,	// (0x00013a37) navi_tabs_3_long_pane

0x92b4,	// (0x00013a37) navi_tabs_3_pane

0x92b4,	// (0x00013a37) navi_tabs_4_pane

0xe4f2,	// (0x00018c75) tabs_2_active_pane_ParamLimits

0xe4f2,	// (0x00018c75) tabs_2_active_pane

0xe502,	// (0x00018c85) tabs_2_passive_pane_ParamLimits

0xe502,	// (0x00018c85) tabs_2_passive_pane

0xe4c0,	// (0x00018c43) tabs_3_active_pane_ParamLimits

0xe4c0,	// (0x00018c43) tabs_3_active_pane

0xe4d0,	// (0x00018c53) tabs_3_passive_pane_ParamLimits

0xe4d0,	// (0x00018c53) tabs_3_passive_pane

0xe4e1,	// (0x00018c64) tabs_3_passive_pane_cp_ParamLimits

0xe4e1,	// (0x00018c64) tabs_3_passive_pane_cp

0xe47c,	// (0x00018bff) tabs_4_active_pane_ParamLimits

0xe47c,	// (0x00018bff) tabs_4_active_pane

0xe48d,	// (0x00018c10) tabs_4_passive_pane_ParamLimits

0xe48d,	// (0x00018c10) tabs_4_passive_pane

0xe49e,	// (0x00018c21) tabs_4_passive_pane_cp_ParamLimits

0xe49e,	// (0x00018c21) tabs_4_passive_pane_cp

0xe4af,	// (0x00018c32) tabs_4_passive_pane_cp2_ParamLimits

0xe4af,	// (0x00018c32) tabs_4_passive_pane_cp2

0xe45c,	// (0x00018bdf) tabs_2_long_active_pane_ParamLimits

0xe45c,	// (0x00018bdf) tabs_2_long_active_pane

0xe46c,	// (0x00018bef) tabs_2_long_passive_pane_ParamLimits

0xe46c,	// (0x00018bef) tabs_2_long_passive_pane

0xe425,	// (0x00018ba8) tabs_3_long_active_pane_ParamLimits

0xe425,	// (0x00018ba8) tabs_3_long_active_pane

0xe438,	// (0x00018bbb) tabs_3_long_passive_pane_ParamLimits

0xe438,	// (0x00018bbb) tabs_3_long_passive_pane

0xe449,	// (0x00018bcc) tabs_3_long_passive_pane_cp_ParamLimits

0xe449,	// (0x00018bcc) tabs_3_long_passive_pane_cp

0x5232,	// (0x0000f9b5) volume_small_pane_g1

0x523b,	// (0x0000f9be) volume_small_pane_g2

0x5244,	// (0x0000f9c7) volume_small_pane_g3

0x524d,	// (0x0000f9d0) volume_small_pane_g4

0x5256,	// (0x0000f9d9) volume_small_pane_g5

0x525f,	// (0x0000f9e2) volume_small_pane_g6

0x5268,	// (0x0000f9eb) volume_small_pane_g7

0x5271,	// (0x0000f9f4) volume_small_pane_g8

0x527a,	// (0x0000f9fd) volume_small_pane_g9

0x5283,	// (0x0000fa06) volume_small_pane_g10

0x0009,

0xf89b,	// (0x0001a01e) volume_small_pane_g

0x6954,	// (0x000110d7) bg_active_tab_pane_cp2_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp2

0x66c9,	// (0x00010e4c) tabs_3_active_pane_g1

0x0502,	// (0x0000ac85) tabs_3_active_pane_t1

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp2_ParamLimits

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp2

0x66c9,	// (0x00010e4c) tabs_3_passive_pane_g1

0x0502,	// (0x0000ac85) tabs_3_passive_pane_t1

0x6954,	// (0x000110d7) bg_active_tab_pane_cp3_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp3

0xa05e,	// (0x000147e1) tabs_4_active_pane_g1

0x0518,	// (0x0000ac9b) tabs_4_active_pane_t1

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp3_ParamLimits

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp3

0xa05e,	// (0x000147e1) tabs_4_1_passive_pane_g1

0x0518,	// (0x0000ac9b) tabs_4_1_passive_pane_t1

0x84da,	// (0x00012c5d) list_highlight_pane_cp2

0x1fbd,	// (0x0000c740) list_set_pane_ParamLimits

0x1fbd,	// (0x0000c740) list_set_pane

0x204b,	// (0x0000c7ce) main_pane_set_t1_ParamLimits

0x204b,	// (0x0000c7ce) main_pane_set_t1

0x206b,	// (0x0000c7ee) main_pane_set_t2_ParamLimits

0x206b,	// (0x0000c7ee) main_pane_set_t2

0x207f,	// (0x0000c802) main_pane_set_t3_ParamLimits

0x207f,	// (0x0000c802) main_pane_set_t3

0x2091,	// (0x0000c814) main_pane_set_t4_ParamLimits

0x2091,	// (0x0000c814) main_pane_set_t4

0x0003,

0xf96b,	// (0x0001a0ee) main_pane_set_t_ParamLimits

0xf96b,	// (0x0001a0ee) main_pane_set_t

0x20a3,	// (0x0000c826) setting_code_pane

0x20ab,	// (0x0000c82e) setting_slider_graphic_pane

0x20ab,	// (0x0000c82e) setting_slider_pane

0x20ab,	// (0x0000c82e) setting_text_pane

0x20ab,	// (0x0000c82e) setting_volume_pane

0xdc73,	// (0x000183f6) volume_set_pane

0x66bb,	// (0x00010e3e) bg_set_opt_pane_cp

0x45ff,	// (0x0000ed82) setting_slider_pane_t1

0xdc7b,	// (0x000183fe) setting_slider_pane_t2

0xdc94,	// (0x00018417) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00019ce1) setting_slider_pane_t

0x4645,	// (0x0000edc8) slider_set_pane

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp2

0x66fd,	// (0x00010e80) setting_slider_graphic_pane_g1

0xdcab,	// (0x0001842e) setting_slider_graphic_pane_t1

0xdcba,	// (0x0001843d) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00019ce8) setting_slider_graphic_pane_t

0xdcc9,	// (0x0001844c) slider_set_pane_cp

0x65db,	// (0x00010d5e) input_focus_pane_cp1

0x9d49,	// (0x000144cc) list_set_text_pane

0x64f4,	// (0x00010c77) setting_text_pane_g1

0x65db,	// (0x00010d5e) input_focus_pane_cp2

0x64f4,	// (0x00010c77) setting_code_pane_g1

0x6706,	// (0x00010e89) setting_code_pane_t1

0xeb66,	// (0x000192e9) set_text_pane_t1_ParamLimits

0xeb66,	// (0x000192e9) set_text_pane_t1

0x74ee,	// (0x00011c71) set_opt_bg_pane_g1

0x74f6,	// (0x00011c79) set_opt_bg_pane_g2

0x1f7d,	// (0x0000c700) set_opt_bg_pane_g3

0x7506,	// (0x00011c89) set_opt_bg_pane_g4

0x750e,	// (0x00011c91) set_opt_bg_pane_g5

0x7516,	// (0x00011c99) set_opt_bg_pane_g6

0x1f85,	// (0x0000c708) set_opt_bg_pane_g7

0x1f8d,	// (0x0000c710) set_opt_bg_pane_g8

0x1f95,	// (0x0000c718) set_opt_bg_pane_g9

0x0008,

0xf958,	// (0x0001a0db) set_opt_bg_pane_g

0x9d1c,	// (0x0001449f) slider_set_pane_g1

0x53ec,	// (0x0000fb6f) slider_set_pane_g2

0x0006,

0xf949,	// (0x0001a0cc) slider_set_pane_g

0xe51b,	// (0x00018c9e) volume_set_pane_g1

0xe523,	// (0x00018ca6) volume_set_pane_g2

0xe52b,	// (0x00018cae) volume_set_pane_g3

0xe533,	// (0x00018cb6) volume_set_pane_g4

0xe53b,	// (0x00018cbe) volume_set_pane_g5

0xe543,	// (0x00018cc6) volume_set_pane_g6

0xe54b,	// (0x00018cce) volume_set_pane_g7

0xe553,	// (0x00018cd6) volume_set_pane_g8

0xe55b,	// (0x00018cde) volume_set_pane_g9

0xe563,	// (0x00018ce6) volume_set_pane_g10

0x0009,

0xf921,	// (0x0001a0a4) volume_set_pane_g

0x058c,	// (0x0000ad0f) indicator_pane_ParamLimits

0x058c,	// (0x0000ad0f) indicator_pane

0x05b4,	// (0x0000ad37) main_idle_pane_g2_ParamLimits

0x05b4,	// (0x0000ad37) main_idle_pane_g2

0x05e4,	// (0x0000ad67) main_pane_idle_g1_ParamLimits

0x05e4,	// (0x0000ad67) main_pane_idle_g1

0x676c,	// (0x00010eef) popup_clock_digital_analogue_window_ParamLimits

0x676c,	// (0x00010eef) popup_clock_digital_analogue_window

0x0609,	// (0x0000ad8c) soft_indicator_pane_ParamLimits

0x0609,	// (0x0000ad8c) soft_indicator_pane

0x0623,	// (0x0000ada6) wallpaper_pane_ParamLimits

0x0623,	// (0x0000ada6) wallpaper_pane

0x64f4,	// (0x00010c77) wallpaper_pane_g1

0x0635,	// (0x0000adb8) indicator_pane_g1_ParamLimits

0x0635,	// (0x0000adb8) indicator_pane_g1

0xa15b,	// (0x000148de) navi_navi_icon_text_pane_srt_g1

0x67be,	// (0x00010f41) soft_indicator_pane_t1

0x67d8,	// (0x00010f5b) aid_ps_area_pane

0x064e,	// (0x0000add1) aid_ps_clock_pane

0x67f5,	// (0x00010f78) aid_ps_indicator_pane

0x6801,	// (0x00010f84) indicator_ps_pane_ParamLimits

0x6801,	// (0x00010f84) indicator_ps_pane

0x6810,	// (0x00010f93) power_save_pane_g1_ParamLimits

0x6810,	// (0x00010f93) power_save_pane_g1

0x681c,	// (0x00010f9f) power_save_pane_g2_ParamLimits

0x681c,	// (0x00010f9f) power_save_pane_g2

0x436a,	// (0x0000eaed) aid_navinavi_width_pane

0x67d8,	// (0x00010f5b) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00019ced) power_save_pane_g_ParamLimits

0xf56a,	// (0x00019ced) power_save_pane_g

0x682a,	// (0x00010fad) power_save_pane_t1_ParamLimits

0x682a,	// (0x00010fad) power_save_pane_t1

0x064e,	// (0x0000add1) aid_ps_clock_pane_ParamLimits

0x67f5,	// (0x00010f78) aid_ps_indicator_pane_ParamLimits

0x683c,	// (0x00010fbf) power_save_pane_t4_ParamLimits

0x683c,	// (0x00010fbf) power_save_pane_t4

0x0001,

0xf56f,	// (0x00019cf2) power_save_pane_t_ParamLimits

0xf56f,	// (0x00019cf2) power_save_pane_t

0x6866,	// (0x00010fe9) power_save_t3_ParamLimits

0x6866,	// (0x00010fe9) power_save_t3

0x6851,	// (0x00010fd4) power_save_t2_ParamLimits

0x6851,	// (0x00010fd4) power_save_t2

0x687b,	// (0x00010ffe) indicator_ps_pane_g1

0x065a,	// (0x0000addd) ai_gene_pane_ParamLimits

0x065a,	// (0x0000addd) ai_gene_pane

0x0671,	// (0x0000adf4) ai_links_pane_ParamLimits

0x0671,	// (0x0000adf4) ai_links_pane

0x0683,	// (0x0000ae06) indicator_pane_cp1_ParamLimits

0x0683,	// (0x0000ae06) indicator_pane_cp1

0x0692,	// (0x0000ae15) main_pane_idle_g1_cp_ParamLimits

0x0692,	// (0x0000ae15) main_pane_idle_g1_cp

0x68b4,	// (0x00011037) popup_ai_links_title_window

0x06aa,	// (0x0000ae2d) soft_indicator_pane_cp1_ParamLimits

0x06aa,	// (0x0000ae2d) soft_indicator_pane_cp1

0x9b1f,	// (0x000142a2) ai_links_pane_g1

0x9b28,	// (0x000142ab) grid_ai_links_pane

0x1ebb,	// (0x0000c63e) ai_gene_pane_1

0x9b0d,	// (0x00014290) ai_gene_pane_2

0x9b16,	// (0x00014299) list_highlight_pane_cp4

0x1e9f,	// (0x0000c622) cell_ai_link_pane_ParamLimits

0x1e9f,	// (0x0000c622) cell_ai_link_pane

0x9ae0,	// (0x00014263) cell_ai_link_pane_g1

0x6b1c,	// (0x0001129f) cell_ai_link_pane_g2

0x0001,

0xf8fc,	// (0x0001a07f) cell_ai_link_pane_g

0x65db,	// (0x00010d5e) grid_highlight_cp2

0x65db,	// (0x00010d5e) bg_popup_sub_pane_cp1

0x68d7,	// (0x0001105a) popup_ai_links_title_window_t1

0x9a32,	// (0x000141b5) ai_gene_pane_1_g1_ParamLimits

0x9a32,	// (0x000141b5) ai_gene_pane_1_g1

0x9a3e,	// (0x000141c1) ai_gene_pane_1_g2_ParamLimits

0x9a3e,	// (0x000141c1) ai_gene_pane_1_g2

0x0001,

0xf8f2,	// (0x0001a075) ai_gene_pane_1_g_ParamLimits

0xf8f2,	// (0x0001a075) ai_gene_pane_1_g

0x9a4b,	// (0x000141ce) ai_gene_pane_1_t1_ParamLimits

0x9a4b,	// (0x000141ce) ai_gene_pane_1_t1

0x9a7f,	// (0x00014202) grid_ai_soft_ind_pane

0x9a1d,	// (0x000141a0) ai_gene_pane_2_t1_ParamLimits

0x9a1d,	// (0x000141a0) ai_gene_pane_2_t1

0x06be,	// (0x0000ae41) main_pane_empty_t1_ParamLimits

0x06be,	// (0x0000ae41) main_pane_empty_t1

0x06db,	// (0x0000ae5e) main_pane_empty_t2_ParamLimits

0x06db,	// (0x0000ae5e) main_pane_empty_t2

0x06f3,	// (0x0000ae76) main_pane_empty_t3_ParamLimits

0x06f3,	// (0x0000ae76) main_pane_empty_t3

0x0706,	// (0x0000ae89) main_pane_empty_t4_ParamLimits

0x0706,	// (0x0000ae89) main_pane_empty_t4

0x0719,	// (0x0000ae9c) main_pane_empty_t5_ParamLimits

0x0719,	// (0x0000ae9c) main_pane_empty_t5

0x0004,

0xf574,	// (0x00019cf7) main_pane_empty_t_ParamLimits

0xf574,	// (0x00019cf7) main_pane_empty_t

0x75e0,	// (0x00011d63) bg_popup_window_pane_ParamLimits

0x75e0,	// (0x00011d63) bg_popup_window_pane

0x9797,	// (0x00013f1a) find_popup_pane_cp2_ParamLimits

0x9797,	// (0x00013f1a) find_popup_pane_cp2

0x97a3,	// (0x00013f26) heading_pane_ParamLimits

0x97a3,	// (0x00013f26) heading_pane

0x65db,	// (0x00010d5e) bg_popup_sub_pane

0x1de2,	// (0x0000c565) bg_popup_window_pane_g1_ParamLimits

0x1de2,	// (0x0000c565) bg_popup_window_pane_g1

0x1df1,	// (0x0000c574) bg_popup_window_pane_g2_ParamLimits

0x1df1,	// (0x0000c574) bg_popup_window_pane_g2

0x1dfd,	// (0x0000c580) bg_popup_window_pane_g3_ParamLimits

0x1dfd,	// (0x0000c580) bg_popup_window_pane_g3

0x1e09,	// (0x0000c58c) bg_popup_window_pane_g4_ParamLimits

0x1e09,	// (0x0000c58c) bg_popup_window_pane_g4

0x1e18,	// (0x0000c59b) bg_popup_window_pane_g5_ParamLimits

0x1e18,	// (0x0000c59b) bg_popup_window_pane_g5

0x1e28,	// (0x0000c5ab) bg_popup_window_pane_g6_ParamLimits

0x1e28,	// (0x0000c5ab) bg_popup_window_pane_g6

0x1e34,	// (0x0000c5b7) bg_popup_window_pane_g7_ParamLimits

0x1e34,	// (0x0000c5b7) bg_popup_window_pane_g7

0x1e43,	// (0x0000c5c6) bg_popup_window_pane_g8_ParamLimits

0x1e43,	// (0x0000c5c6) bg_popup_window_pane_g8

0x1e52,	// (0x0000c5d5) bg_popup_window_pane_g9_ParamLimits

0x1e52,	// (0x0000c5d5) bg_popup_window_pane_g9

0x977c,	// (0x00013eff) bg_popup_window_pane_g10_ParamLimits

0x977c,	// (0x00013eff) bg_popup_window_pane_g10

0x0009,

0xf8ba,	// (0x0001a03d) bg_popup_window_pane_g_ParamLimits

0xf8ba,	// (0x0001a03d) bg_popup_window_pane_g

0x96a5,	// (0x00013e28) bg_popup_heading_pane_ParamLimits

0x96a5,	// (0x00013e28) bg_popup_heading_pane

0x5474,	// (0x0000fbf7) tabs_4_passive_pane_cp_srt_ParamLimits

0x5474,	// (0x0000fbf7) tabs_4_passive_pane_cp_srt

0x5486,	// (0x0000fc09) tabs_4_passive_pane_srt_ParamLimits

0x96b9,	// (0x00013e3c) heading_pane_g2

0x5486,	// (0x0000fc09) tabs_4_passive_pane_srt

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp3_srt_ParamLimits

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp3_srt

0x96c1,	// (0x00013e44) heading_pane_t1_ParamLimits

0x96c1,	// (0x00013e44) heading_pane_t1

0x96d8,	// (0x00013e5b) heading_pane_t2_ParamLimits

0x96d8,	// (0x00013e5b) heading_pane_t2

0x0001,

0xf8b5,	// (0x0001a038) heading_pane_t_ParamLimits

0xf8b5,	// (0x0001a038) heading_pane_t

0x921c,	// (0x0001399f) bg_popup_heading_pane_g1

0x92c5,	// (0x00013a48) bg_popup_heading_pane_g2

0x92cd,	// (0x00013a50) bg_popup_heading_pane_g3

0x92d5,	// (0x00013a58) bg_popup_heading_pane_g4

0x92dd,	// (0x00013a60) bg_popup_heading_pane_g5

0x92e5,	// (0x00013a68) bg_popup_heading_pane_g6

0x92ed,	// (0x00013a70) bg_popup_heading_pane_g7

0x92f5,	// (0x00013a78) bg_popup_heading_pane_g8

0x92fd,	// (0x00013a80) bg_popup_heading_pane_g9

0x0008,

0xf871,	// (0x00019ff4) bg_popup_heading_pane_g

0x89a3,	// (0x00013126) bg_popup_sub_pane_g1

0x89b3,	// (0x00013136) bg_popup_sub_pane_g2

0x89ab,	// (0x0001312e) bg_popup_sub_pane_g3

0x89c3,	// (0x00013146) bg_popup_sub_pane_g4

0x89bb,	// (0x0001313e) bg_popup_sub_pane_g5

0x89cb,	// (0x0001314e) bg_popup_sub_pane_g6

0x89d3,	// (0x00013156) bg_popup_sub_pane_g7

0x89e3,	// (0x00013166) bg_popup_sub_pane_g8

0x89db,	// (0x0001315e) bg_popup_sub_pane_g9

0x0008,

0xf84b,	// (0x00019fce) bg_popup_sub_pane_g

0x6954,	// (0x000110d7) bg_popup_window_pane_cp5_ParamLimits

0x6954,	// (0x000110d7) bg_popup_window_pane_cp5

0x6970,	// (0x000110f3) popup_note_window_g1_ParamLimits

0x6970,	// (0x000110f3) popup_note_window_g1

0x697c,	// (0x000110ff) popup_note_window_t1_ParamLimits

0x697c,	// (0x000110ff) popup_note_window_t1

0x6992,	// (0x00011115) popup_note_window_t2_ParamLimits

0x6992,	// (0x00011115) popup_note_window_t2

0x69a8,	// (0x0001112b) popup_note_window_t3_ParamLimits

0x69a8,	// (0x0001112b) popup_note_window_t3

0x69be,	// (0x00011141) popup_note_window_t4_ParamLimits

0x69be,	// (0x00011141) popup_note_window_t4

0x69e6,	// (0x00011169) popup_note_window_t5_ParamLimits

0x69e6,	// (0x00011169) popup_note_window_t5

0x0004,

0xf57f,	// (0x00019d02) popup_note_window_t_ParamLimits

0xf57f,	// (0x00019d02) popup_note_window_t

0x6a30,	// (0x000111b3) bg_popup_window_pane_cp6_ParamLimits

0x6a30,	// (0x000111b3) bg_popup_window_pane_cp6

0x9198,	// (0x0001391b) popup_note_image_window_g1_ParamLimits

0x9198,	// (0x0001391b) popup_note_image_window_g1

0x91a4,	// (0x00013927) popup_note_image_window_g2_ParamLimits

0x91a4,	// (0x00013927) popup_note_image_window_g2

0x0001,

0xf83f,	// (0x00019fc2) popup_note_image_window_g_ParamLimits

0xf83f,	// (0x00019fc2) popup_note_image_window_g

0x91bd,	// (0x00013940) popup_note_image_window_t1_ParamLimits

0x91bd,	// (0x00013940) popup_note_image_window_t1

0x91d6,	// (0x00013959) popup_note_image_window_t2_ParamLimits

0x91d6,	// (0x00013959) popup_note_image_window_t2

0x91ef,	// (0x00013972) popup_note_image_window_t3_ParamLimits

0x91ef,	// (0x00013972) popup_note_image_window_t3

0x0002,

0xf844,	// (0x00019fc7) popup_note_image_window_t_ParamLimits

0xf844,	// (0x00019fc7) popup_note_image_window_t

0x9067,	// (0x000137ea) bg_popup_window_pane_cp7_ParamLimits

0x9067,	// (0x000137ea) bg_popup_window_pane_cp7

0x9097,	// (0x0001381a) popup_note_wait_window_g1_ParamLimits

0x9097,	// (0x0001381a) popup_note_wait_window_g1

0x90a3,	// (0x00013826) popup_note_wait_window_g2_ParamLimits

0x90a3,	// (0x00013826) popup_note_wait_window_g2

0x0002,

0xf82d,	// (0x00019fb0) popup_note_wait_window_g_ParamLimits

0xf82d,	// (0x00019fb0) popup_note_wait_window_g

0x90bb,	// (0x0001383e) popup_note_wait_window_t1_ParamLimits

0x90bb,	// (0x0001383e) popup_note_wait_window_t1

0x90e2,	// (0x00013865) popup_note_wait_window_t2_ParamLimits

0x90e2,	// (0x00013865) popup_note_wait_window_t2

0x90ff,	// (0x00013882) popup_note_wait_window_t3_ParamLimits

0x90ff,	// (0x00013882) popup_note_wait_window_t3

0x9112,	// (0x00013895) popup_note_wait_window_t4_ParamLimits

0x9112,	// (0x00013895) popup_note_wait_window_t4

0x0004,

0xf834,	// (0x00019fb7) popup_note_wait_window_t_ParamLimits

0xf834,	// (0x00019fb7) popup_note_wait_window_t

0x9137,	// (0x000138ba) wait_bar_pane_ParamLimits

0x9137,	// (0x000138ba) wait_bar_pane

0x65db,	// (0x00010d5e) wait_anim_pane

0x65db,	// (0x00010d5e) wait_border_pane

0x64f4,	// (0x00010c77) wait_anim_pane_g1

0x64f4,	// (0x00010c77) wait_anim_pane_g2

0x0001,

0xf6f4,	// (0x00019e77) wait_anim_pane_g

0x9017,	// (0x0001379a) wait_border_pane_g1

0x9020,	// (0x000137a3) wait_border_pane_g2

0x9029,	// (0x000137ac) wait_border_pane_g3

0x0002,

0xf826,	// (0x00019fa9) wait_border_pane_g

0x8e87,	// (0x0001360a) bg_popup_window_pane_cp16_ParamLimits

0x8e87,	// (0x0001360a) bg_popup_window_pane_cp16

0x8f87,	// (0x0001370a) indicator_popup_pane_cp4_ParamLimits

0x8f87,	// (0x0001370a) indicator_popup_pane_cp4

0x8f9b,	// (0x0001371e) popup_query_data_window_t1_ParamLimits

0x8f9b,	// (0x0001371e) popup_query_data_window_t1

0x8fad,	// (0x00013730) popup_query_data_window_t2_ParamLimits

0x8fad,	// (0x00013730) popup_query_data_window_t2

0x8fc6,	// (0x00013749) popup_query_data_window_t3_ParamLimits

0x8fc6,	// (0x00013749) popup_query_data_window_t3

0x0002,

0xf81f,	// (0x00019fa2) popup_query_data_window_t_ParamLimits

0xf81f,	// (0x00019fa2) popup_query_data_window_t

0x8fe0,	// (0x00013763) query_popup_data_pane_ParamLimits

0x8fe0,	// (0x00013763) query_popup_data_pane

0x8ff4,	// (0x00013777) query_popup_data_pane_cp1_ParamLimits

0x8ff4,	// (0x00013777) query_popup_data_pane_cp1

0x8e87,	// (0x0001360a) bg_popup_window_pane_cp10_ParamLimits

0x8e87,	// (0x0001360a) bg_popup_window_pane_cp10

0x8eb9,	// (0x0001363c) indicator_popup_pane_ParamLimits

0x8eb9,	// (0x0001363c) indicator_popup_pane

0x8edb,	// (0x0001365e) popup_query_code_window_t1_ParamLimits

0x8edb,	// (0x0001365e) popup_query_code_window_t1

0x8ef5,	// (0x00013678) popup_query_code_window_t2_ParamLimits

0x8ef5,	// (0x00013678) popup_query_code_window_t2

0x8f3e,	// (0x000136c1) popup_query_code_window_t3_ParamLimits

0x8f3e,	// (0x000136c1) popup_query_code_window_t3

0x0002,

0xf818,	// (0x00019f9b) popup_query_code_window_t_ParamLimits

0xf818,	// (0x00019f9b) popup_query_code_window_t

0x8f6d,	// (0x000136f0) query_popup_pane_ParamLimits

0x8f6d,	// (0x000136f0) query_popup_pane

0x6a30,	// (0x000111b3) bg_popup_window_pane_cp15_ParamLimits

0x6a30,	// (0x000111b3) bg_popup_window_pane_cp15

0x6a4e,	// (0x000111d1) indicator_popup_pane_cp1_ParamLimits

0x6a4e,	// (0x000111d1) indicator_popup_pane_cp1

0x6a61,	// (0x000111e4) indicator_popup_pane_cp2_ParamLimits

0x6a61,	// (0x000111e4) indicator_popup_pane_cp2

0x6a74,	// (0x000111f7) popup_query_data_code_window_g1_ParamLimits

0x6a74,	// (0x000111f7) popup_query_data_code_window_g1

0x6a87,	// (0x0001120a) popup_query_data_code_window_t1_ParamLimits

0x6a87,	// (0x0001120a) popup_query_data_code_window_t1

0x6a99,	// (0x0001121c) popup_query_data_code_window_t2_ParamLimits

0x6a99,	// (0x0001121c) popup_query_data_code_window_t2

0x6aab,	// (0x0001122e) popup_query_data_code_window_t3_ParamLimits

0x6aab,	// (0x0001122e) popup_query_data_code_window_t3

0x6ac1,	// (0x00011244) popup_query_data_code_window_t4_ParamLimits

0x6ac1,	// (0x00011244) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00019d0d) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00019d0d) popup_query_data_code_window_t

0x514d,	// (0x0000f8d0) list_single_midp_graphic_pane_g3

0x6ad9,	// (0x0001125c) query_popup_data_pane_cp2_ParamLimits

0x6aec,	// (0x0001126f) query_popup_pane_cp2_ParamLimits

0x6aec,	// (0x0001126f) query_popup_pane_cp2

0x65db,	// (0x00010d5e) bg_popup_window_pane_cp11

0x8e73,	// (0x000135f6) heading_pane_cp5

0x6bd0,	// (0x00011353) listscroll_popup_info_pane

0x65db,	// (0x00010d5e) input_focus_pane_cp3

0x6aff,	// (0x00011282) query_popup_pane_t1

0x6b0d,	// (0x00011290) list_popup_info_pane_ParamLimits

0x6b0d,	// (0x00011290) list_popup_info_pane

0x6b1c,	// (0x0001129f) listscroll_popup_info_pane_g1

0x6b24,	// (0x000112a7) scroll_pane_cp7

0x6b2c,	// (0x000112af) popup_info_list_pane_t1_ParamLimits

0x6b2c,	// (0x000112af) popup_info_list_pane_t1

0x6b46,	// (0x000112c9) popup_info_list_pane_t2_ParamLimits

0x6b46,	// (0x000112c9) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00019d16) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00019d16) popup_info_list_pane_t

0x65db,	// (0x00010d5e) bg_popup_window_pane_cp12

0xa175,	// (0x000148f8) find_popup_pane

0x66bb,	// (0x00010e3e) bg_popup_window_pane_cp3

0x6b60,	// (0x000112e3) heading_pane_cp3

0x6b6c,	// (0x000112ef) listscroll_popup_graphic_pane

0x65db,	// (0x00010d5e) bg_popup_window_pane_cp4

0x077c,	// (0x0000aeff) heading_pane_cp4

0x6bd0,	// (0x00011353) listscroll_popup_colour_pane

0x6bd8,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x6bd8,	// (0x0001135b) cell_large_graphic_colour_none_popup_pane

0x0784,	// (0x0000af07) grid_large_graphic_colour_popup_pane_ParamLimits

0x0784,	// (0x0000af07) grid_large_graphic_colour_popup_pane

0x07a0,	// (0x0000af23) listscroll_popup_colour_pane_g1_ParamLimits

0x07a0,	// (0x0000af23) listscroll_popup_colour_pane_g1

0x07b7,	// (0x0000af3a) listscroll_popup_colour_pane_g2_ParamLimits

0x07b7,	// (0x0000af3a) listscroll_popup_colour_pane_g2

0x6c2f,	// (0x000113b2) listscroll_popup_colour_pane_g3_ParamLimits

0x6c2f,	// (0x000113b2) listscroll_popup_colour_pane_g3

0x07cb,	// (0x0000af4e) listscroll_popup_colour_pane_g4_ParamLimits

0x07cb,	// (0x0000af4e) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00019d1b) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00019d1b) listscroll_popup_colour_pane_g

0x6c4e,	// (0x000113d1) scroll_pane_cp6_ParamLimits

0x6c4e,	// (0x000113d1) scroll_pane_cp6

0x07da,	// (0x0000af5d) cell_large_graphic_colour_popup_pane_ParamLimits

0x07da,	// (0x0000af5d) cell_large_graphic_colour_popup_pane

0x6c7f,	// (0x00011402) cell_large_graphic_colour_none_popup_pane_t1

0x65db,	// (0x00010d5e) grid_highlight_pane_cp5

0x6c8e,	// (0x00011411) cell_large_graphic_colour_popup_pane_g1

0x6c96,	// (0x00011419) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x00019d24) cell_large_graphic_colour_popup_pane_g

0x6c9e,	// (0x00011421) cell_large_graphic_colour_popup_pane_g2_copy1

0x6ca7,	// (0x0001142a) grid_highlight_pane_cp4

0x6caf,	// (0x00011432) bg_popup_window_pane_cp8_ParamLimits

0x6caf,	// (0x00011432) bg_popup_window_pane_cp8

0x6cca,	// (0x0001144d) popup_snote_single_text_window_g1_ParamLimits

0x6cca,	// (0x0001144d) popup_snote_single_text_window_g1

0x6cdc,	// (0x0001145f) popup_snote_single_text_window_t1_ParamLimits

0x6cdc,	// (0x0001145f) popup_snote_single_text_window_t1

0x6cef,	// (0x00011472) popup_snote_single_text_window_t2_ParamLimits

0x6cef,	// (0x00011472) popup_snote_single_text_window_t2

0x6d02,	// (0x00011485) popup_snote_single_text_window_t3_ParamLimits

0x6d02,	// (0x00011485) popup_snote_single_text_window_t3

0x6d3b,	// (0x000114be) popup_snote_single_text_window_t4_ParamLimits

0x6d3b,	// (0x000114be) popup_snote_single_text_window_t4

0x6d6f,	// (0x000114f2) popup_snote_single_text_window_t5_ParamLimits

0x6d6f,	// (0x000114f2) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x00019d29) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x00019d29) popup_snote_single_text_window_t

0x6d9e,	// (0x00011521) bg_popup_window_pane_cp9_ParamLimits

0x6d9e,	// (0x00011521) bg_popup_window_pane_cp9

0x6cca,	// (0x0001144d) popup_snote_single_graphic_window_g1_ParamLimits

0x6cca,	// (0x0001144d) popup_snote_single_graphic_window_g1

0x6dac,	// (0x0001152f) popup_snote_single_graphic_window_g2_ParamLimits

0x6dac,	// (0x0001152f) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x00019d34) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x00019d34) popup_snote_single_graphic_window_g

0x6db8,	// (0x0001153b) popup_snote_single_graphic_window_t1_ParamLimits

0x6db8,	// (0x0001153b) popup_snote_single_graphic_window_t1

0x6dcb,	// (0x0001154e) popup_snote_single_graphic_window_t2_ParamLimits

0x6dcb,	// (0x0001154e) popup_snote_single_graphic_window_t2

0x6d02,	// (0x00011485) popup_snote_single_graphic_window_t3_ParamLimits

0x6d02,	// (0x00011485) popup_snote_single_graphic_window_t3

0x6d3b,	// (0x000114be) popup_snote_single_graphic_window_t4_ParamLimits

0x6d3b,	// (0x000114be) popup_snote_single_graphic_window_t4

0x6d6f,	// (0x000114f2) popup_snote_single_graphic_window_t5_ParamLimits

0x6d6f,	// (0x000114f2) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x00019d39) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x00019d39) popup_snote_single_graphic_window_t

0x21d3,	// (0x0000c956) grid_graphic_popup_pane_ParamLimits

0x21d3,	// (0x0000c956) grid_graphic_popup_pane

0x21f6,	// (0x0000c979) listscroll_popup_graphic_pane_g1_ParamLimits

0x21f6,	// (0x0000c979) listscroll_popup_graphic_pane_g1

0x220a,	// (0x0000c98d) listscroll_popup_graphic_pane_g2_ParamLimits

0x220a,	// (0x0000c98d) listscroll_popup_graphic_pane_g2

0x0001,

0xf995,	// (0x0001a118) listscroll_popup_graphic_pane_g_ParamLimits

0xf995,	// (0x0001a118) listscroll_popup_graphic_pane_g

0xa12d,	// (0x000148b0) scroll_pane_cp5

0x218e,	// (0x0000c911) cell_graphic_popup_pane_ParamLimits

0x218e,	// (0x0000c911) cell_graphic_popup_pane

0xa066,	// (0x000147e9) cell_graphic_popup_pane_g1

0xa06e,	// (0x000147f1) cell_graphic_popup_pane_g2

0x6c9e,	// (0x00011421) cell_graphic_popup_pane_g3

0x0002,

0xf98e,	// (0x0001a111) cell_graphic_popup_pane_g

0xa077,	// (0x000147fa) cell_graphic_popup_pane_t2

0x6ca7,	// (0x0001142a) grid_highlight_pane_cp3

0x6df0,	// (0x00011573) list_gen_pane_ParamLimits

0x6df0,	// (0x00011573) list_gen_pane

0x6e21,	// (0x000115a4) scroll_pane

0x2161,	// (0x0000c8e4) bg_list_pane_g1_ParamLimits

0x2161,	// (0x0000c8e4) bg_list_pane_g1

0x9ffd,	// (0x00014780) bg_list_pane_g2_ParamLimits

0x9ffd,	// (0x00014780) bg_list_pane_g2

0xa010,	// (0x00014793) bg_list_pane_g3_ParamLimits

0xa010,	// (0x00014793) bg_list_pane_g3

0xa022,	// (0x000147a5) bg_list_pane_g4_ParamLimits

0xa022,	// (0x000147a5) bg_list_pane_g4

0x217c,	// (0x0000c8ff) bg_list_pane_g5_ParamLimits

0x217c,	// (0x0000c8ff) bg_list_pane_g5

0x0004,

0xf983,	// (0x0001a106) bg_list_pane_g_ParamLimits

0xf983,	// (0x0001a106) bg_list_pane_g

0x20f1,	// (0x0000c874) list_double2_graphic_large_graphic_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double2_graphic_large_graphic_pane

0x20f1,	// (0x0000c874) list_double2_graphic_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double2_graphic_pane

0x20f1,	// (0x0000c874) list_double2_large_graphic_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double2_large_graphic_pane

0x20f1,	// (0x0000c874) list_double2_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double2_pane

0x20f1,	// (0x0000c874) list_double_graphic_heading_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_graphic_heading_pane

0x20f1,	// (0x0000c874) list_double_graphic_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_graphic_pane

0x20f1,	// (0x0000c874) list_double_heading_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_heading_pane

0x20f1,	// (0x0000c874) list_double_large_graphic_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_large_graphic_pane

0x20f1,	// (0x0000c874) list_double_number_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_number_pane

0x20f1,	// (0x0000c874) list_double_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_pane

0x20f1,	// (0x0000c874) list_double_time_pane_ParamLimits

0x20f1,	// (0x0000c874) list_double_time_pane

0x20f1,	// (0x0000c874) list_setting_number_pane_ParamLimits

0x20f1,	// (0x0000c874) list_setting_number_pane

0x20f1,	// (0x0000c874) list_setting_pane_ParamLimits

0x20f1,	// (0x0000c874) list_setting_pane

0x2102,	// (0x0000c885) list_single_2graphic_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_2graphic_pane

0x2102,	// (0x0000c885) list_single_graphic_heading_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_graphic_heading_pane

0x2102,	// (0x0000c885) list_single_graphic_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_graphic_pane

0x2102,	// (0x0000c885) list_single_heading_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_heading_pane

0x214f,	// (0x0000c8d2) list_single_large_graphic_pane_ParamLimits

0x214f,	// (0x0000c8d2) list_single_large_graphic_pane

0x2102,	// (0x0000c885) list_single_number_heading_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_number_heading_pane

0x2102,	// (0x0000c885) list_single_number_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_number_pane

0x2102,	// (0x0000c885) list_single_pane_ParamLimits

0x2102,	// (0x0000c885) list_single_pane

0x65db,	// (0x00010d5e) list_highlight_pane_cp1

0x7063,	// (0x000117e6) list_single_pane_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_pane_g1

0x6f8e,	// (0x00011711) list_single_pane_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_pane_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_pane_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_pane_g

0x6f9a,	// (0x0001171d) list_single_pane_t1_ParamLimits

0x6f9a,	// (0x0001171d) list_single_pane_t1

0x7063,	// (0x000117e6) list_single_number_pane_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_number_pane_g1

0x6f8e,	// (0x00011711) list_single_number_pane_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_number_pane_g

0x706f,	// (0x000117f2) list_single_number_pane_t1_ParamLimits

0x706f,	// (0x000117f2) list_single_number_pane_t1

0x1f55,	// (0x0000c6d8) list_single_number_pane_t2_ParamLimits

0x1f55,	// (0x0000c6d8) list_single_number_pane_t2

0x0001,

0xf944,	// (0x0001a0c7) list_single_number_pane_t_ParamLimits

0xf944,	// (0x0001a0c7) list_single_number_pane_t

0x7057,	// (0x000117da) list_single_graphic_pane_g1_ParamLimits

0x7057,	// (0x000117da) list_single_graphic_pane_g1

0x7063,	// (0x000117e6) list_single_graphic_pane_g2_ParamLimits

0x7063,	// (0x000117e6) list_single_graphic_pane_g2

0x6f8e,	// (0x00011711) list_single_graphic_pane_g3_ParamLimits

0x6f8e,	// (0x00011711) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x00019d44) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x00019d44) list_single_graphic_pane_g

0x706f,	// (0x000117f2) list_single_graphic_pane_t1_ParamLimits

0x706f,	// (0x000117f2) list_single_graphic_pane_t1

0x7063,	// (0x000117e6) list_single_heading_pane_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_heading_pane_g1

0x6f8e,	// (0x00011711) list_single_heading_pane_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_heading_pane_g

0x712c,	// (0x000118af) list_single_heading_pane_t1_ParamLimits

0x712c,	// (0x000118af) list_single_heading_pane_t1

0x0801,	// (0x0000af84) list_single_heading_pane_t2_ParamLimits

0x0801,	// (0x0000af84) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00019d50) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00019d50) list_single_heading_pane_t

0x7063,	// (0x000117e6) list_single_number_heading_pane_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_number_heading_pane_g1

0x6f8e,	// (0x00011711) list_single_number_heading_pane_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_number_heading_pane_g

0x712c,	// (0x000118af) list_single_number_heading_pane_t1_ParamLimits

0x712c,	// (0x000118af) list_single_number_heading_pane_t1

0x0813,	// (0x0000af96) list_single_number_heading_pane_t2_ParamLimits

0x0813,	// (0x0000af96) list_single_number_heading_pane_t2

0xa6ad,	// (0x00014e30) list_single_number_heading_pane_t3_ParamLimits

0xa6ad,	// (0x00014e30) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00019d55) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00019d55) list_single_number_heading_pane_t

0x7057,	// (0x000117da) list_single_graphic_heading_pane_g1_ParamLimits

0x7057,	// (0x000117da) list_single_graphic_heading_pane_g1

0x0825,	// (0x0000afa8) list_single_graphic_heading_pane_g4_ParamLimits

0x0825,	// (0x0000afa8) list_single_graphic_heading_pane_g4

0x6f8e,	// (0x00011711) list_single_graphic_heading_pane_g5_ParamLimits

0x6f8e,	// (0x00011711) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x00019d5c) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x00019d5c) list_single_graphic_heading_pane_g

0x712c,	// (0x000118af) list_single_graphic_heading_pane_t1_ParamLimits

0x712c,	// (0x000118af) list_single_graphic_heading_pane_t1

0x0836,	// (0x0000afb9) list_single_graphic_heading_pane_t2_ParamLimits

0x0836,	// (0x0000afb9) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00019d63) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00019d63) list_single_graphic_heading_pane_t

0x6efd,	// (0x00011680) list_single_large_graphic_pane_g1_ParamLimits

0x6efd,	// (0x00011680) list_single_large_graphic_pane_g1

0x6f09,	// (0x0001168c) list_single_large_graphic_pane_g2_ParamLimits

0x6f09,	// (0x0001168c) list_single_large_graphic_pane_g2

0x6f15,	// (0x00011698) list_single_large_graphic_pane_g3_ParamLimits

0x6f15,	// (0x00011698) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x00019d68) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x00019d68) list_single_large_graphic_pane_g

0x9020,	// (0x000137a3) wait_border_pane_g2_copy1

0x6f21,	// (0x000116a4) list_single_large_graphic_pane_g4_cp2

0x6f29,	// (0x000116ac) list_single_large_graphic_pane_t1_ParamLimits

0x6f29,	// (0x000116ac) list_single_large_graphic_pane_t1

0x0848,	// (0x0000afcb) list_double_pane_g1_ParamLimits

0x0848,	// (0x0000afcb) list_double_pane_g1

0x0854,	// (0x0000afd7) list_double_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00019d6f) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00019d6f) list_double_pane_g

0x0860,	// (0x0000afe3) list_double_pane_t1_ParamLimits

0x0860,	// (0x0000afe3) list_double_pane_t1

0x0876,	// (0x0000aff9) list_double_pane_t2_ParamLimits

0x0876,	// (0x0000aff9) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00019d74) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00019d74) list_double_pane_t

0x0888,	// (0x0000b00b) list_double2_pane_g1_ParamLimits

0x0888,	// (0x0000b00b) list_double2_pane_g1

0x0854,	// (0x0000afd7) list_double2_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x00019d79) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x00019d79) list_double2_pane_g

0x0860,	// (0x0000afe3) list_double2_pane_t1_ParamLimits

0x0860,	// (0x0000afe3) list_double2_pane_t1

0x0899,	// (0x0000b01c) list_double2_pane_t2_ParamLimits

0x0899,	// (0x0000b01c) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00019d7e) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00019d7e) list_double2_pane_t

0x0848,	// (0x0000afcb) list_double_number_pane_g1_ParamLimits

0x0848,	// (0x0000afcb) list_double_number_pane_g1

0x0854,	// (0x0000afd7) list_double_number_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00019d6f) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00019d6f) list_double_number_pane_g

0x08ab,	// (0x0000b02e) list_double_number_pane_t1_ParamLimits

0x08ab,	// (0x0000b02e) list_double_number_pane_t1

0x08bd,	// (0x0000b040) list_double_number_pane_t2_ParamLimits

0x08bd,	// (0x0000b040) list_double_number_pane_t2

0x08d3,	// (0x0000b056) list_double_number_pane_t3_ParamLimits

0x08d3,	// (0x0000b056) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00019d83) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00019d83) list_double_number_pane_t

0x08e5,	// (0x0000b068) list_double_graphic_pane_g1_ParamLimits

0x08e5,	// (0x0000b068) list_double_graphic_pane_g1

0x08f1,	// (0x0000b074) list_double_graphic_pane_g2_ParamLimits

0x08f1,	// (0x0000b074) list_double_graphic_pane_g2

0x0900,	// (0x0000b083) list_double_graphic_pane_g3_ParamLimits

0x0900,	// (0x0000b083) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00019d8a) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00019d8a) list_double_graphic_pane_g

0x0918,	// (0x0000b09b) list_double_graphic_pane_t1_ParamLimits

0x0918,	// (0x0000b09b) list_double_graphic_pane_t1

0x092e,	// (0x0000b0b1) list_double_graphic_pane_t2_ParamLimits

0x092e,	// (0x0000b0b1) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00019d93) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00019d93) list_double_graphic_pane_t

0x08e5,	// (0x0000b068) list_double2_graphic_pane_g1_ParamLimits

0x08e5,	// (0x0000b068) list_double2_graphic_pane_g1

0x0848,	// (0x0000afcb) list_double2_graphic_pane_g2_ParamLimits

0x0848,	// (0x0000afcb) list_double2_graphic_pane_g2

0x0854,	// (0x0000afd7) list_double2_graphic_pane_g3_ParamLimits

0x0854,	// (0x0000afd7) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00019d98) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00019d98) list_double2_graphic_pane_g

0x08bd,	// (0x0000b040) list_double2_graphic_pane_t1_ParamLimits

0x08bd,	// (0x0000b040) list_double2_graphic_pane_t1

0x0940,	// (0x0000b0c3) list_double2_graphic_pane_t2_ParamLimits

0x0940,	// (0x0000b0c3) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00019d9f) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00019d9f) list_double2_graphic_pane_t

0x0952,	// (0x0000b0d5) list_double_large_graphic_pane_g1_ParamLimits

0x0952,	// (0x0000b0d5) list_double_large_graphic_pane_g1

0x0888,	// (0x0000b00b) list_double_large_graphic_pane_g2_ParamLimits

0x0888,	// (0x0000b00b) list_double_large_graphic_pane_g2

0x0854,	// (0x0000afd7) list_double_large_graphic_pane_g3_ParamLimits

0x0854,	// (0x0000afd7) list_double_large_graphic_pane_g3

0x097b,	// (0x0000b0fe) list_double_large_graphic_pane_g4_ParamLimits

0x097b,	// (0x0000b0fe) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00019da4) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00019da4) list_double_large_graphic_pane_g

0x098c,	// (0x0000b10f) list_double_large_graphic_pane_t1_ParamLimits

0x098c,	// (0x0000b10f) list_double_large_graphic_pane_t1

0x09a5,	// (0x0000b128) list_double_large_graphic_pane_t2_ParamLimits

0x09a5,	// (0x0000b128) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00019daf) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00019daf) list_double_large_graphic_pane_t

0x09b7,	// (0x0000b13a) list_double2_large_graphic_pane_g1_ParamLimits

0x09b7,	// (0x0000b13a) list_double2_large_graphic_pane_g1

0x0888,	// (0x0000b00b) list_double2_large_graphic_pane_g2_ParamLimits

0x0888,	// (0x0000b00b) list_double2_large_graphic_pane_g2

0x0854,	// (0x0000afd7) list_double2_large_graphic_pane_g3_ParamLimits

0x0854,	// (0x0000afd7) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00019db4) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00019db4) list_double2_large_graphic_pane_g

0x09c3,	// (0x0000b146) list_double2_large_graphic_pane_t1_ParamLimits

0x09c3,	// (0x0000b146) list_double2_large_graphic_pane_t1

0x09d9,	// (0x0000b15c) list_double2_large_graphic_pane_t2_ParamLimits

0x09d9,	// (0x0000b15c) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00019dbb) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00019dbb) list_double2_large_graphic_pane_t

0x09eb,	// (0x0000b16e) list_double_heading_pane_g1_ParamLimits

0x09eb,	// (0x0000b16e) list_double_heading_pane_g1

0x6e6e,	// (0x000115f1) list_double_heading_pane_g2_ParamLimits

0x6e6e,	// (0x000115f1) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00019dc0) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00019dc0) list_double_heading_pane_g

0x09fc,	// (0x0000b17f) list_double_heading_pane_t1_ParamLimits

0x09fc,	// (0x0000b17f) list_double_heading_pane_t1

0x0a12,	// (0x0000b195) list_double_heading_pane_t2_ParamLimits

0x0a12,	// (0x0000b195) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00019dc5) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00019dc5) list_double_heading_pane_t

0x6ffc,	// (0x0001177f) list_double_graphic_heading_pane_g1_ParamLimits

0x6ffc,	// (0x0001177f) list_double_graphic_heading_pane_g1

0x09eb,	// (0x0000b16e) list_double_graphic_heading_pane_g2_ParamLimits

0x09eb,	// (0x0000b16e) list_double_graphic_heading_pane_g2

0x6e6e,	// (0x000115f1) list_double_graphic_heading_pane_g3_ParamLimits

0x6e6e,	// (0x000115f1) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00019dca) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00019dca) list_double_graphic_heading_pane_g

0x0a24,	// (0x0000b1a7) list_double_graphic_heading_pane_t1_ParamLimits

0x0a24,	// (0x0000b1a7) list_double_graphic_heading_pane_t1

0x0a3a,	// (0x0000b1bd) list_double_graphic_heading_pane_t2_ParamLimits

0x0a3a,	// (0x0000b1bd) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00019dd1) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00019dd1) list_double_graphic_heading_pane_t

0x0888,	// (0x0000b00b) list_double_time_pane_g1_ParamLimits

0x0888,	// (0x0000b00b) list_double_time_pane_g1

0x0854,	// (0x0000afd7) list_double_time_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_double_time_pane_g2

0x0001,

0xf5f6,	// (0x00019d79) list_double_time_pane_g_ParamLimits

0xf5f6,	// (0x00019d79) list_double_time_pane_g

0x09c3,	// (0x0000b146) list_double_time_pane_t1_ParamLimits

0x09c3,	// (0x0000b146) list_double_time_pane_t1

0x0a4c,	// (0x0000b1cf) list_double_time_pane_t2_ParamLimits

0x0a4c,	// (0x0000b1cf) list_double_time_pane_t2

0x0a5e,	// (0x0000b1e1) list_double_time_pane_t3_ParamLimits

0x0a5e,	// (0x0000b1e1) list_double_time_pane_t3

0x0a70,	// (0x0000b1f3) list_double_time_pane_t4_ParamLimits

0x0a70,	// (0x0000b1f3) list_double_time_pane_t4

0x0003,

0xf653,	// (0x00019dd6) list_double_time_pane_t_ParamLimits

0xf653,	// (0x00019dd6) list_double_time_pane_t

0x0848,	// (0x0000afcb) list_setting_pane_g1_ParamLimits

0x0848,	// (0x0000afcb) list_setting_pane_g1

0x0854,	// (0x0000afd7) list_setting_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_setting_pane_g2

0x0001,

0xf5ec,	// (0x00019d6f) list_setting_pane_g_ParamLimits

0xf5ec,	// (0x00019d6f) list_setting_pane_g

0x0a82,	// (0x0000b205) list_setting_pane_t1_ParamLimits

0x0a82,	// (0x0000b205) list_setting_pane_t1

0x0a9c,	// (0x0000b21f) list_setting_pane_t2_ParamLimits

0x0a9c,	// (0x0000b21f) list_setting_pane_t2

0x0002,

0xf65c,	// (0x00019ddf) list_setting_pane_t_ParamLimits

0xf65c,	// (0x00019ddf) list_setting_pane_t

0x0ad9,	// (0x0000b25c) set_value_pane_cp_ParamLimits

0x0ad9,	// (0x0000b25c) set_value_pane_cp

0x0848,	// (0x0000afcb) list_setting_number_pane_g1_ParamLimits

0x0848,	// (0x0000afcb) list_setting_number_pane_g1

0x0854,	// (0x0000afd7) list_setting_number_pane_g2_ParamLimits

0x0854,	// (0x0000afd7) list_setting_number_pane_g2

0x0001,

0xf5ec,	// (0x00019d6f) list_setting_number_pane_g_ParamLimits

0xf5ec,	// (0x00019d6f) list_setting_number_pane_g

0x0ae5,	// (0x0000b268) list_setting_number_pane_t1_ParamLimits

0x0ae5,	// (0x0000b268) list_setting_number_pane_t1

0x0afe,	// (0x0000b281) list_setting_number_pane_t2_ParamLimits

0x0afe,	// (0x0000b281) list_setting_number_pane_t2

0x0b18,	// (0x0000b29b) list_setting_number_pane_t3_ParamLimits

0x0b18,	// (0x0000b29b) list_setting_number_pane_t3

0x0003,

0xf663,	// (0x00019de6) list_setting_number_pane_t_ParamLimits

0xf663,	// (0x00019de6) list_setting_number_pane_t

0x0ad9,	// (0x0000b25c) set_value_pane_ParamLimits

0x0ad9,	// (0x0000b25c) set_value_pane

0x72b1,	// (0x00011a34) bg_set_opt_pane_ParamLimits

0x72b1,	// (0x00011a34) bg_set_opt_pane

0x72d2,	// (0x00011a55) set_value_pane_t1

0x72e0,	// (0x00011a63) slider_set_pane_cp3

0x72e9,	// (0x00011a6c) volume_small_pane_cp

0x72f2,	// (0x00011a75) list_form_gen_pane

0x6e45,	// (0x000115c8) scroll_pane_cp8

0xaa84,	// (0x00015207) form_field_data_pane_ParamLimits

0xaa84,	// (0x00015207) form_field_data_pane

0x0b5b,	// (0x0000b2de) form_field_data_wide_pane_ParamLimits

0x0b5b,	// (0x0000b2de) form_field_data_wide_pane

0x0b7b,	// (0x0000b2fe) form_field_popup_pane_ParamLimits

0x0b7b,	// (0x0000b2fe) form_field_popup_pane

0x0b93,	// (0x0000b316) form_field_popup_wide_pane_ParamLimits

0x0b93,	// (0x0000b316) form_field_popup_wide_pane

0x7379,	// (0x00011afc) form_field_slider_pane_ParamLimits

0x7379,	// (0x00011afc) form_field_slider_pane

0x738c,	// (0x00011b0f) form_field_slider_wide_pane_ParamLimits

0x738c,	// (0x00011b0f) form_field_slider_wide_pane

0x739f,	// (0x00011b22) data_form_pane

0x0bb4,	// (0x0000b337) form_field_data_pane_t1

0x73cb,	// (0x00011b4e) input_focus_pane

0x73d9,	// (0x00011b5c) data_form_wide_pane

0x7405,	// (0x00011b88) form_field_data_wide_pane_t1

0x6cbc,	// (0x0001143f) input_focus_pane_cp6

0x0bcc,	// (0x0000b34f) form_field_popup_pane_t1

0x73cb,	// (0x00011b4e) input_focus_pane_cp7

0x739f,	// (0x00011b22) list_form_pane

0x7444,	// (0x00011bc7) form_field_popup_wide_pane_t1

0x73cb,	// (0x00011b4e) input_focus_pane_cp8

0x7459,	// (0x00011bdc) list_form_wide_pane

0x0bec,	// (0x0000b36f) form_field_slider_pane_t1_ParamLimits

0x0bec,	// (0x0000b36f) form_field_slider_pane_t1

0x0c02,	// (0x0000b385) form_field_slider_pane_t2_ParamLimits

0x0c02,	// (0x0000b385) form_field_slider_pane_t2

0x0001,

0xf673,	// (0x00019df6) form_field_slider_pane_t_ParamLimits

0xf673,	// (0x00019df6) form_field_slider_pane_t

0x6954,	// (0x000110d7) input_focus_pane_cp9_ParamLimits

0x6954,	// (0x000110d7) input_focus_pane_cp9

0x0c17,	// (0x0000b39a) slider_cont_pane_ParamLimits

0x0c17,	// (0x0000b39a) slider_cont_pane

0x74ac,	// (0x00011c2f) form_field_slider_wide_pane_t1_ParamLimits

0x74ac,	// (0x00011c2f) form_field_slider_wide_pane_t1

0x74be,	// (0x00011c41) form_field_slider_wide_pane_t2_ParamLimits

0x74be,	// (0x00011c41) form_field_slider_wide_pane_t2

0x0001,

0xf678,	// (0x00019dfb) form_field_slider_wide_pane_t_ParamLimits

0xf678,	// (0x00019dfb) form_field_slider_wide_pane_t

0x6954,	// (0x000110d7) input_focus_pane_cp10_ParamLimits

0x6954,	// (0x000110d7) input_focus_pane_cp10

0x0c2b,	// (0x0000b3ae) slider_cont_pane_cp1_ParamLimits

0x0c2b,	// (0x0000b3ae) slider_cont_pane_cp1

0x0c41,	// (0x0000b3c4) slider_form_pane_cp

0x74ee,	// (0x00011c71) input_focus_pane_g1

0x74f6,	// (0x00011c79) input_focus_pane_g2

0x74fe,	// (0x00011c81) input_focus_pane_g3

0x7506,	// (0x00011c89) input_focus_pane_g4

0x750e,	// (0x00011c91) input_focus_pane_g5

0x7516,	// (0x00011c99) input_focus_pane_g6

0x751e,	// (0x00011ca1) input_focus_pane_g7

0x7526,	// (0x00011ca9) input_focus_pane_g8

0x752e,	// (0x00011cb1) input_focus_pane_g9

0x64f4,	// (0x00010c77) input_focus_pane_g10

0x0009,

0xf67d,	// (0x00019e00) input_focus_pane_g

0x9029,	// (0x000137ac) wait_border_pane_g3_copy1

0x0c49,	// (0x0000b3cc) data_form_pane_t1

0x64f4,	// (0x00010c77) wait_anim_pane_g1_copy1

0x20d8,	// (0x0000c85b) data_form_wide_pane_t1

0xa4b8,	// (0x00014c3b) list_form_graphic_pane_cp_ParamLimits

0xa4b8,	// (0x00014c3b) list_form_graphic_pane_cp

0x9e93,	// (0x00014616) slider_form_pane_g1

0x9e9c,	// (0x0001461f) slider_form_pane_g2

0x0006,

0xf974,	// (0x0001a0f7) slider_form_pane_g

0x7550,	// (0x00011cd3) list_form_graphic_pane_ParamLimits

0x7550,	// (0x00011cd3) list_form_graphic_pane

0x757b,	// (0x00011cfe) list_form_graphic_pane_g1

0x7583,	// (0x00011d06) list_form_graphic_pane_t1_ParamLimits

0x7583,	// (0x00011d06) list_form_graphic_pane_t1

0x66bb,	// (0x00010e3e) list_highlight_pane_cp5_ParamLimits

0x66bb,	// (0x00010e3e) list_highlight_pane_cp5

0x0c62,	// (0x0000b3e5) find_pane_g1

0x75a1,	// (0x00011d24) input_find_pane

0x0c6d,	// (0x0000b3f0) input_find_pane_g1_ParamLimits

0x0c6d,	// (0x0000b3f0) input_find_pane_g1

0x0c79,	// (0x0000b3fc) input_find_pane_t1_ParamLimits

0x0c79,	// (0x0000b3fc) input_find_pane_t1

0x0c8e,	// (0x0000b411) input_find_pane_t2_ParamLimits

0x0c8e,	// (0x0000b411) input_find_pane_t2

0x0001,

0xf692,	// (0x00019e15) input_find_pane_t_ParamLimits

0xf692,	// (0x00019e15) input_find_pane_t

0x75e0,	// (0x00011d63) input_focus_pane_cp5_ParamLimits

0x75e0,	// (0x00011d63) input_focus_pane_cp5

0x6954,	// (0x000110d7) bg_popup_window_pane_cp2_ParamLimits

0x6954,	// (0x000110d7) bg_popup_window_pane_cp2

0x75fa,	// (0x00011d7d) listscroll_menu_pane_ParamLimits

0x75fa,	// (0x00011d7d) listscroll_menu_pane

0x7606,	// (0x00011d89) popup_submenu_window_ParamLimits

0x7606,	// (0x00011d89) popup_submenu_window

0x762a,	// (0x00011dad) find_popup_pane_g1

0x7632,	// (0x00011db5) input_popup_find_pane_cp

0x75e0,	// (0x00011d63) input_focus_pane_cp4_ParamLimits

0x75e0,	// (0x00011d63) input_focus_pane_cp4

0x7648,	// (0x00011dcb) input_popup_find_pane_t1_ParamLimits

0x7648,	// (0x00011dcb) input_popup_find_pane_t1

0x65db,	// (0x00010d5e) bg_popup_sub_pane_cp

0x7676,	// (0x00011df9) listscroll_popup_sub_pane

0x767e,	// (0x00011e01) list_submenu_pane_ParamLimits

0x767e,	// (0x00011e01) list_submenu_pane

0x768f,	// (0x00011e12) scroll_pane_cp4

0x7697,	// (0x00011e1a) list_single_popup_submenu_pane_ParamLimits

0x7697,	// (0x00011e1a) list_single_popup_submenu_pane

0x76a9,	// (0x00011e2c) list_single_popup_submenu_pane_g1

0x76b1,	// (0x00011e34) list_single_popup_submenu_pane_t1_ParamLimits

0x76b1,	// (0x00011e34) list_single_popup_submenu_pane_t1

0x6954,	// (0x000110d7) bg_active_tab_pane_cp1_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp1

0xa153,	// (0x000148d6) tabs_2_active_pane_g1

0x0caf,	// (0x0000b432) tabs_2_active_pane_t1

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp1_ParamLimits

0x6954,	// (0x000110d7) bg_passive_tab_pane_cp1

0xa153,	// (0x000148d6) tabs_2_passive_pane_g1

0x0caf,	// (0x0000b432) tabs_2_passive_pane_t1

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp4

0x0cc5,	// (0x0000b448) tabs_2_long_active_pane_t1

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp4

0x5155,	// (0x0000f8d8) list_single_midp_graphic_pane_g4_ParamLimits

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp5

0x0cdc,	// (0x0000b45f) tabs_3_long_active_pane_t1

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp5

0x5155,	// (0x0000f8d8) list_single_midp_graphic_pane_g4

0x66bb,	// (0x00010e3e) bg_popup_window_pane_cp13_ParamLimits

0x66bb,	// (0x00010e3e) bg_popup_window_pane_cp13

0x7728,	// (0x00011eab) listscroll_popup_fast_pane_ParamLimits

0x7728,	// (0x00011eab) listscroll_popup_fast_pane

0x7737,	// (0x00011eba) grid_popup_fast_pane_ParamLimits

0x7737,	// (0x00011eba) grid_popup_fast_pane

0x7749,	// (0x00011ecc) scroll_pane_cp9_ParamLimits

0x7749,	// (0x00011ecc) scroll_pane_cp9

0xbabe,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0xbabe,	// (0x00016241) list_single_graphic_hl_pane_t1_cp2

0x776d,	// (0x00011ef0) input_focus_pane_cp20_ParamLimits

0x776d,	// (0x00011ef0) input_focus_pane_cp20

0x777b,	// (0x00011efe) query_popup_data_pane_t1_ParamLimits

0x777b,	// (0x00011efe) query_popup_data_pane_t1

0x778e,	// (0x00011f11) query_popup_data_pane_t2_ParamLimits

0x778e,	// (0x00011f11) query_popup_data_pane_t2

0x77d4,	// (0x00011f57) query_popup_data_pane_t3_ParamLimits

0x77d4,	// (0x00011f57) query_popup_data_pane_t3

0x7815,	// (0x00011f98) query_popup_data_pane_t4_ParamLimits

0x7815,	// (0x00011f98) query_popup_data_pane_t4

0x7851,	// (0x00011fd4) query_popup_data_pane_t5_ParamLimits

0x7851,	// (0x00011fd4) query_popup_data_pane_t5

0x0004,

0xf697,	// (0x00019e1a) query_popup_data_pane_t_ParamLimits

0xf697,	// (0x00019e1a) query_popup_data_pane_t

0x74ee,	// (0x00011c71) bg_set_opt_pane_g1

0x74f6,	// (0x00011c79) bg_set_opt_pane_g2

0x74fe,	// (0x00011c81) bg_set_opt_pane_g3

0x7506,	// (0x00011c89) bg_set_opt_pane_g4

0x750e,	// (0x00011c91) bg_set_opt_pane_g5

0x7516,	// (0x00011c99) bg_set_opt_pane_g6

0x751e,	// (0x00011ca1) bg_set_opt_pane_g7

0x7526,	// (0x00011ca9) bg_set_opt_pane_g8

0x752e,	// (0x00011cb1) bg_set_opt_pane_g9

0x0008,

0xf6a2,	// (0x00019e25) bg_set_opt_pane_g

0x48b5,	// (0x0000f038) control_top_pane_stacon_ParamLimits

0x48b5,	// (0x0000f038) control_top_pane_stacon

0x4908,	// (0x0000f08b) signal_pane_stacon_ParamLimits

0x4908,	// (0x0000f08b) signal_pane_stacon

0x7e95,	// (0x00012618) stacon_top_pane_g1_ParamLimits

0x7e95,	// (0x00012618) stacon_top_pane_g1

0x492d,	// (0x0000f0b0) title_pane_stacon_ParamLimits

0x492d,	// (0x0000f0b0) title_pane_stacon

0x494f,	// (0x0000f0d2) uni_indicator_pane_stacon_ParamLimits

0x494f,	// (0x0000f0d2) uni_indicator_pane_stacon

0x4964,	// (0x0000f0e7) battery_pane_stacon_ParamLimits

0x4964,	// (0x0000f0e7) battery_pane_stacon

0x49a4,	// (0x0000f127) control_bottom_pane_stacon_ParamLimits

0x49a4,	// (0x0000f127) control_bottom_pane_stacon

0x49c3,	// (0x0000f146) navi_pane_stacon_ParamLimits

0x49c3,	// (0x0000f146) navi_pane_stacon

0x7eb7,	// (0x0001263a) stacon_bottom_pane_g1_ParamLimits

0x7eb7,	// (0x0001263a) stacon_bottom_pane_g1

0x7888,	// (0x0001200b) aid_levels_signal_lsc_ParamLimits

0x7888,	// (0x0001200b) aid_levels_signal_lsc

0x4681,	// (0x0000ee04) signal_pane_stacon_g1_ParamLimits

0x4681,	// (0x0000ee04) signal_pane_stacon_g1

0x468d,	// (0x0000ee10) signal_pane_stacon_g2_ParamLimits

0x468d,	// (0x0000ee10) signal_pane_stacon_g2

0x0001,

0xf6b5,	// (0x00019e38) signal_pane_stacon_g_ParamLimits

0xf6b5,	// (0x00019e38) signal_pane_stacon_g

0x46c1,	// (0x0000ee44) title_pane_stacon_t1_ParamLimits

0x46c1,	// (0x0000ee44) title_pane_stacon_t1

0x78a2,	// (0x00012025) uni_indicator_pane_stacon_g1

0x78ac,	// (0x0001202f) uni_indicator_pane_stacon_g2

0x78b6,	// (0x00012039) uni_indicator_pane_stacon_g3

0x78c0,	// (0x00012043) uni_indicator_pane_stacon_g4

0x0003,

0xf6c1,	// (0x00019e44) uni_indicator_pane_stacon_g

0x46e6,	// (0x0000ee69) control_top_pane_stacon_g1

0x46ee,	// (0x0000ee71) control_top_pane_stacon_t1_ParamLimits

0x46ee,	// (0x0000ee71) control_top_pane_stacon_t1

0x78ca,	// (0x0001204d) aid_levels_battery_lsc_ParamLimits

0x78ca,	// (0x0001204d) aid_levels_battery_lsc

0x471f,	// (0x0000eea2) battery_pane_stacon_g1_ParamLimits

0x471f,	// (0x0000eea2) battery_pane_stacon_g1

0x472b,	// (0x0000eeae) battery_pane_stacon_g2_ParamLimits

0x472b,	// (0x0000eeae) battery_pane_stacon_g2

0x0001,

0xf6ca,	// (0x00019e4d) battery_pane_stacon_g_ParamLimits

0xf6ca,	// (0x00019e4d) battery_pane_stacon_g

0x475a,	// (0x0000eedd) navi_icon_pane_stacon

0x476a,	// (0x0000eeed) navi_navi_pane_stacon

0x475a,	// (0x0000eedd) navi_text_pane_stacon

0x46e6,	// (0x0000ee69) control_bottom_pane_stacon_g1

0x477a,	// (0x0000eefd) control_bottom_pane_stacon_t1_ParamLimits

0x477a,	// (0x0000eefd) control_bottom_pane_stacon_t1

0x0cf2,	// (0x0000b475) grid_app_pane_ParamLimits

0x0cf2,	// (0x0000b475) grid_app_pane

0x0d20,	// (0x0000b4a3) scroll_pane_cp15_ParamLimits

0x0d20,	// (0x0000b4a3) scroll_pane_cp15

0x0d33,	// (0x0000b4b6) cell_app_pane_ParamLimits

0x0d33,	// (0x0000b4b6) cell_app_pane

0x0d70,	// (0x0000b4f3) cell_app_pane_g1_ParamLimits

0x0d70,	// (0x0000b4f3) cell_app_pane_g1

0x7967,	// (0x000120ea) cell_app_pane_g2_ParamLimits

0x7967,	// (0x000120ea) cell_app_pane_g2

0x0001,

0xf6cf,	// (0x00019e52) cell_app_pane_g_ParamLimits

0xf6cf,	// (0x00019e52) cell_app_pane_g

0x0d94,	// (0x0000b517) cell_app_pane_t1_ParamLimits

0x0d94,	// (0x0000b517) cell_app_pane_t1

0x798a,	// (0x0001210d) grid_highlight_pane_ParamLimits

0x798a,	// (0x0001210d) grid_highlight_pane

0x74ee,	// (0x00011c71) cell_highlight_pane_g1

0x74f6,	// (0x00011c79) cell_highlight_pane_g2

0x74fe,	// (0x00011c81) cell_highlight_pane_g3

0x7506,	// (0x00011c89) cell_highlight_pane_g4

0x750e,	// (0x00011c91) cell_highlight_pane_g5

0x7516,	// (0x00011c99) cell_highlight_pane_g6

0x751e,	// (0x00011ca1) cell_highlight_pane_g7

0x7526,	// (0x00011ca9) cell_highlight_pane_g8

0x752e,	// (0x00011cb1) cell_highlight_pane_g9

0x64f4,	// (0x00010c77) cell_highlight_pane_g10

0x0009,

0xf67d,	// (0x00019e00) cell_highlight_pane_g

0x799b,	// (0x0001211e) bg_scroll_pane

0x47be,	// (0x0000ef41) scroll_handle_pane

0x79e2,	// (0x00012165) scroll_bg_pane_g1

0x79f7,	// (0x0001217a) scroll_bg_pane_g2

0x7a0f,	// (0x00012192) scroll_bg_pane_g3

0x0002,

0xf6d4,	// (0x00019e57) scroll_bg_pane_g

0x7a24,	// (0x000121a7) scroll_handle_focus_pane_ParamLimits

0x7a24,	// (0x000121a7) scroll_handle_focus_pane

0x79e2,	// (0x00012165) scroll_handle_pane_g1

0x7a31,	// (0x000121b4) scroll_handle_pane_g2

0x7a0f,	// (0x00012192) scroll_handle_pane_g3

0x0002,

0xf6db,	// (0x00019e5e) scroll_handle_pane_g

0x75e0,	// (0x00011d63) bg_popup_sub_pane_cp21_ParamLimits

0x75e0,	// (0x00011d63) bg_popup_sub_pane_cp21

0x7a45,	// (0x000121c8) popup_fep_japan_predictive_window_t1_ParamLimits

0x7a45,	// (0x000121c8) popup_fep_japan_predictive_window_t1

0x7a5c,	// (0x000121df) popup_fep_japan_predictive_window_t2_ParamLimits

0x7a5c,	// (0x000121df) popup_fep_japan_predictive_window_t2

0x7a8f,	// (0x00012212) popup_fep_japan_predictive_window_t3_ParamLimits

0x7a8f,	// (0x00012212) popup_fep_japan_predictive_window_t3

0x0002,

0xf6e2,	// (0x00019e65) popup_fep_japan_predictive_window_t_ParamLimits

0xf6e2,	// (0x00019e65) popup_fep_japan_predictive_window_t

0x65db,	// (0x00010d5e) bg_popup_sub_pane_cp23

0x7ac6,	// (0x00012249) listscroll_japin_cand_pane

0x7ace,	// (0x00012251) popup_fep_japan_candidate_window_t1

0x7adc,	// (0x0001225f) candidate_pane_ParamLimits

0x7adc,	// (0x0001225f) candidate_pane

0x7aef,	// (0x00012272) scroll_pane_cp30

0x7af7,	// (0x0001227a) list_single_popup_jap_candidate_pane_ParamLimits

0x7af7,	// (0x0001227a) list_single_popup_jap_candidate_pane

0x65db,	// (0x00010d5e) list_highlight_pane_cp30

0x7b0c,	// (0x0001228f) list_single_popup_jap_candidate_pane_t1

0x0db4,	// (0x0000b537) level_1_signal

0x0dc6,	// (0x0000b549) level_2_signal

0x0dd9,	// (0x0000b55c) level_3_signal

0x0dec,	// (0x0000b56f) level_4_signal

0x0dff,	// (0x0000b582) level_5_signal

0x0e12,	// (0x0000b595) level_6_signal

0x0e25,	// (0x0000b5a8) level_7_signal

0x0db4,	// (0x0000b537) level_1_battery

0x0dc6,	// (0x0000b549) level_2_battery

0x0dd9,	// (0x0000b55c) level_3_battery

0x0dec,	// (0x0000b56f) level_4_battery

0x0dff,	// (0x0000b582) level_5_battery

0x0e12,	// (0x0000b595) level_6_battery

0x0e25,	// (0x0000b5a8) level_7_battery

0x7b8e,	// (0x00012311) list_menu_pane_ParamLimits

0x7b8e,	// (0x00012311) list_menu_pane

0x7ba4,	// (0x00012327) scroll_pane_cp25_ParamLimits

0x7ba4,	// (0x00012327) scroll_pane_cp25

0x0e38,	// (0x0000b5bb) list_double2_graphic_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double2_graphic_pane_cp2

0x0e38,	// (0x0000b5bb) list_double2_large_graphic_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double2_large_graphic_pane_cp2

0x0e38,	// (0x0000b5bb) list_double2_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double2_pane_cp2

0x0e38,	// (0x0000b5bb) list_double_graphic_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double_graphic_pane_cp2

0x0e38,	// (0x0000b5bb) list_double_large_graphic_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double_large_graphic_pane_cp2

0x0e38,	// (0x0000b5bb) list_double_number_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double_number_pane_cp2

0x0e38,	// (0x0000b5bb) list_double_pane_cp2_ParamLimits

0x0e38,	// (0x0000b5bb) list_double_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_2graphic_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_2graphic_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_graphic_heading_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_graphic_heading_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_graphic_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_graphic_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_heading_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_heading_pane_cp2

0x0e64,	// (0x0000b5e7) list_single_large_graphic_pane_cp2_ParamLimits

0x0e64,	// (0x0000b5e7) list_single_large_graphic_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_number_heading_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_number_heading_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_number_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_number_pane_cp2

0x0e53,	// (0x0000b5d6) list_single_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_pane_cp2

0x7c5e,	// (0x000123e1) bg_popup_sub_pane_cp22

0x486d,	// (0x0000eff0) popup_side_volume_key_window_g1

0x4891,	// (0x0000f014) popup_side_volume_key_window_t1

0x48ad,	// (0x0000f030) volume_small_pane_cp1

0x6954,	// (0x000110d7) bg_popup_sub_pane_cp24_ParamLimits

0x6954,	// (0x000110d7) bg_popup_sub_pane_cp24

0x7c74,	// (0x000123f7) fep_china_uni_candidate_pane_ParamLimits

0x7c74,	// (0x000123f7) fep_china_uni_candidate_pane

0x7c88,	// (0x0001240b) fep_china_uni_entry_pane

0x7c98,	// (0x0001241b) popup_fep_china_uni_window_g1

0x7cb4,	// (0x00012437) fep_china_uni_entry_pane_g1

0x7cbc,	// (0x0001243f) fep_china_uni_entry_pane_g2

0x0001,

0xf713,	// (0x00019e96) fep_china_uni_entry_pane_g

0x7cc4,	// (0x00012447) fep_entry_item_pane

0x7cce,	// (0x00012451) fep_candidate_item_pane

0x7cd6,	// (0x00012459) fep_china_uni_candidate_pane_g1

0x7cde,	// (0x00012461) fep_china_uni_candidate_pane_g2

0x7ce6,	// (0x00012469) fep_china_uni_candidate_pane_g3

0x7cee,	// (0x00012471) fep_china_uni_candidate_pane_g4

0x0003,

0xf718,	// (0x00019e9b) fep_china_uni_candidate_pane_g

0x64f4,	// (0x00010c77) fep_entry_item_pane_g1

0x7cf6,	// (0x00012479) fep_entry_item_pane_t1_ParamLimits

0x7cf6,	// (0x00012479) fep_entry_item_pane_t1

0x7d0c,	// (0x0001248f) fep_candidate_item_pane_t1_ParamLimits

0x7d0c,	// (0x0001248f) fep_candidate_item_pane_t1

0x7d21,	// (0x000124a4) fep_candidate_item_pane_t2_ParamLimits

0x7d21,	// (0x000124a4) fep_candidate_item_pane_t2

0x0001,

0xf721,	// (0x00019ea4) fep_candidate_item_pane_t_ParamLimits

0xf721,	// (0x00019ea4) fep_candidate_item_pane_t

0x66bb,	// (0x00010e3e) list_highlight_pane_cp31_ParamLimits

0x66bb,	// (0x00010e3e) list_highlight_pane_cp31

0x7d33,	// (0x000124b6) level_1_signal_lsc

0x7d3c,	// (0x000124bf) level_2_signal_lsc

0x7d45,	// (0x000124c8) level_3_signal_lsc

0x7d4e,	// (0x000124d1) level_4_signal_lsc

0x7d57,	// (0x000124da) level_5_signal_lsc

0x7d60,	// (0x000124e3) level_6_signal_lsc

0x7d69,	// (0x000124ec) level_7_signal_lsc

0x7d69,	// (0x000124ec) level_1_battery_lsc

0x7d72,	// (0x000124f5) level_2_battery_lsc

0x7d7b,	// (0x000124fe) level_3_battery_lsc

0x7d84,	// (0x00012507) level_4_battery_lsc

0x7d8d,	// (0x00012510) level_5_battery_lsc

0x7d96,	// (0x00012519) level_6_battery_lsc

0x7d33,	// (0x000124b6) level_7_battery_lsc

0x7d9f,	// (0x00012522) scroll_handle_focus_pane_g1

0x7da8,	// (0x0001252b) scroll_handle_focus_pane_g2

0x7db1,	// (0x00012534) scroll_handle_focus_pane_g3

0x0002,

0xf726,	// (0x00019ea9) scroll_handle_focus_pane_g

0x0ee9,	// (0x0000b66c) list_single_2graphic_pane_g1_ParamLimits

0x0ee9,	// (0x0000b66c) list_single_2graphic_pane_g1

0x0825,	// (0x0000afa8) list_single_2graphic_pane_g2_ParamLimits

0x0825,	// (0x0000afa8) list_single_2graphic_pane_g2

0x6f8e,	// (0x00011711) list_single_2graphic_pane_g3_ParamLimits

0x6f8e,	// (0x00011711) list_single_2graphic_pane_g3

0x0ef5,	// (0x0000b678) list_single_2graphic_pane_g4_ParamLimits

0x0ef5,	// (0x0000b678) list_single_2graphic_pane_g4

0x0003,

0xf72d,	// (0x00019eb0) list_single_2graphic_pane_g_ParamLimits

0xf72d,	// (0x00019eb0) list_single_2graphic_pane_g

0x0f01,	// (0x0000b684) list_single_2graphic_pane_t1_ParamLimits

0x0f01,	// (0x0000b684) list_single_2graphic_pane_t1

0x0f2f,	// (0x0000b6b2) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x0f2f,	// (0x0000b6b2) list_double2_graphic_large_graphic_pane_g1

0x0888,	// (0x0000b00b) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x0888,	// (0x0000b00b) list_double2_graphic_large_graphic_pane_g2

0x0854,	// (0x0000afd7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x0854,	// (0x0000afd7) list_double2_graphic_large_graphic_pane_g3

0x0f3f,	// (0x0000b6c2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x0f3f,	// (0x0000b6c2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf736,	// (0x00019eb9) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf736,	// (0x00019eb9) list_double2_graphic_large_graphic_pane_g

0x0f4b,	// (0x0000b6ce) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x0f4b,	// (0x0000b6ce) list_double2_graphic_large_graphic_pane_t1

0x0f61,	// (0x0000b6e4) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x0f61,	// (0x0000b6e4) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf73f,	// (0x00019ec2) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf73f,	// (0x00019ec2) list_double2_graphic_large_graphic_pane_t

0x7f5e,	// (0x000126e1) popup_fast_swap_window_ParamLimits

0x7f5e,	// (0x000126e1) popup_fast_swap_window

0x7f7a,	// (0x000126fd) popup_side_volume_key_window

0x7f94,	// (0x00012717) stacon_top_pane

0x7f9e,	// (0x00012721) status_pane_ParamLimits

0x7f9e,	// (0x00012721) status_pane

0x0fbd,	// (0x0000b740) status_small_pane

0x65db,	// (0x00010d5e) control_pane

0x65db,	// (0x00010d5e) stacon_bottom_pane

0x6e45,	// (0x000115c8) scroll_pane_cp121

0x72f2,	// (0x00011a75) set_content_pane

0xa141,	// (0x000148c4) bg_active_tab_pane_g1_cp1

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp1

0xa14a,	// (0x000148cd) bg_active_tab_pane_g3_cp1

0xa141,	// (0x000148c4) bg_passive_tab_pane_g1_cp1

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp1

0xa14a,	// (0x000148cd) bg_passive_tab_pane_g3_cp1

0x0f7c,	// (0x0000b6ff) bg_active_tab_pane_g1_cp2

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp2

0x0f73,	// (0x0000b6f6) bg_active_tab_pane_g3_cp2

0x0f7c,	// (0x0000b6ff) bg_passive_tab_pane_g1_cp2

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp2

0x0f73,	// (0x0000b6f6) bg_passive_tab_pane_g3_cp2

0x0f8e,	// (0x0000b711) bg_active_tab_pane_g1_cp3

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp3

0x0f85,	// (0x0000b708) bg_active_tab_pane_g3_cp3

0x0f8e,	// (0x0000b711) bg_passive_tab_pane_g1_cp3

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp3

0x0f85,	// (0x0000b708) bg_passive_tab_pane_g3_cp3

0x0fa0,	// (0x0000b723) bg_active_tab_pane_g1_cp4

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp4

0x0f97,	// (0x0000b71a) bg_active_tab_pane_g3_cp4

0x0fa0,	// (0x0000b723) bg_passive_tab_pane_g1_cp4

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp4

0x0f97,	// (0x0000b71a) bg_passive_tab_pane_g3_cp4

0x7ed3,	// (0x00012656) bg_active_tab_pane_g1_cp5

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp5

0x7edc,	// (0x0001265f) bg_active_tab_pane_g3_cp5

0x7ed3,	// (0x00012656) bg_passive_tab_pane_g1_cp5

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp5

0x7edc,	// (0x0001265f) bg_passive_tab_pane_g3_cp5

0x0fa9,	// (0x0000b72c) list_set_graphic_pane_ParamLimits

0x0fa9,	// (0x0000b72c) list_set_graphic_pane

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp4

0x7ee5,	// (0x00012668) list_set_graphic_pane_g1_ParamLimits

0x7ee5,	// (0x00012668) list_set_graphic_pane_g1

0x7ef1,	// (0x00012674) list_set_graphic_pane_g2_ParamLimits

0x7ef1,	// (0x00012674) list_set_graphic_pane_g2

0x0001,

0xf744,	// (0x00019ec7) list_set_graphic_pane_g_ParamLimits

0xf744,	// (0x00019ec7) list_set_graphic_pane_g

0x0009,

0xfabb,	// (0x0001a23e) volume_small_pane_cp_g

0x7f13,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x7f13,	// (0x00012696) list_double2_large_graphic_pane_g1_cp2

0x7f1f,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x7f1f,	// (0x000126a2) list_double2_large_graphic_pane_g2_cp2

0x7f2e,	// (0x000126b1) list_double2_large_graphic_pane_g3_cp2

0x7f36,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x7f36,	// (0x000126b9) list_double2_large_graphic_pane_t1_cp2

0x7f4c,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x7f4c,	// (0x000126cf) list_double2_large_graphic_pane_t2_cp2

0x9a8f,	// (0x00014212) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x9a8f,	// (0x00014212) list_double_large_graphic_pane_g1_cp2

0x9aa0,	// (0x00014223) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x9aa0,	// (0x00014223) list_double_large_graphic_pane_g2_cp2

0x8082,	// (0x00012805) list_double_large_graphic_pane_g3_cp2

0x9aaf,	// (0x00014232) list_double_large_graphic_pane_g4_cp

0x9ab7,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x9ab7,	// (0x0001423a) list_double_large_graphic_pane_t1_cp2

0x9ace,	// (0x00014251) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x9ace,	// (0x00014251) list_double_large_graphic_pane_t2_cp2

0x7fb5,	// (0x00012738) list_double2_graphic_pane_g1_cp2_ParamLimits

0x7fb5,	// (0x00012738) list_double2_graphic_pane_g1_cp2

0x7fc1,	// (0x00012744) list_double2_graphic_pane_g2_cp2_ParamLimits

0x7fc1,	// (0x00012744) list_double2_graphic_pane_g2_cp2

0x7fd0,	// (0x00012753) list_double2_graphic_pane_g3_cp2

0x7fd8,	// (0x0001275b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x7fd8,	// (0x0001275b) list_double2_graphic_pane_t1_cp2

0x7fee,	// (0x00012771) list_double2_graphic_pane_t2_cp2_ParamLimits

0x7fee,	// (0x00012771) list_double2_graphic_pane_t2_cp2

0x8000,	// (0x00012783) list_single_number_heading_pane_g1_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_number_heading_pane_g1_cp2

0x800c,	// (0x0001278f) list_single_number_heading_pane_g2_cp2

0x8014,	// (0x00012797) list_single_number_heading_pane_t1_cp2_ParamLimits

0x8014,	// (0x00012797) list_single_number_heading_pane_t1_cp2

0x802a,	// (0x000127ad) list_single_number_heading_pane_t2_cp2_ParamLimits

0x802a,	// (0x000127ad) list_single_number_heading_pane_t2_cp2

0x803c,	// (0x000127bf) list_single_number_heading_pane_t3_cp2_ParamLimits

0x803c,	// (0x000127bf) list_single_number_heading_pane_t3_cp2

0x8000,	// (0x00012783) list_single_heading_pane_g1_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_heading_pane_g1_cp2

0x800c,	// (0x0001278f) list_single_heading_pane_g2_cp2

0x8014,	// (0x00012797) list_single_heading_pane_t1_cp2_ParamLimits

0x8014,	// (0x00012797) list_single_heading_pane_t1_cp2

0x9899,	// (0x0001401c) list_single_heading_pane_t2_cp2_ParamLimits

0x9899,	// (0x0001401c) list_single_heading_pane_t2_cp2

0x97e9,	// (0x00013f6c) list_double_graphic_pane_g1_cp2_ParamLimits

0x97e9,	// (0x00013f6c) list_double_graphic_pane_g1_cp2

0x97f5,	// (0x00013f78) list_double_graphic_pane_g2_cp2_ParamLimits

0x97f5,	// (0x00013f78) list_double_graphic_pane_g2_cp2

0x9804,	// (0x00013f87) list_double_graphic_pane_g3_cp2

0x980c,	// (0x00013f8f) list_double_graphic_pane_t1_cp2_ParamLimits

0x980c,	// (0x00013f8f) list_double_graphic_pane_t1_cp2

0x9822,	// (0x00013fa5) list_double_graphic_pane_t2_cp2_ParamLimits

0x9822,	// (0x00013fa5) list_double_graphic_pane_t2_cp2

0x8076,	// (0x000127f9) list_double_number_pane_g1_cp2_ParamLimits

0x8076,	// (0x000127f9) list_double_number_pane_g1_cp2

0x8082,	// (0x00012805) list_double_number_pane_g2_cp2

0x97af,	// (0x00013f32) list_double_number_pane_t1_cp2_ParamLimits

0x97af,	// (0x00013f32) list_double_number_pane_t1_cp2

0x97c1,	// (0x00013f44) list_double_number_pane_t2_cp2_ParamLimits

0x97c1,	// (0x00013f44) list_double_number_pane_t2_cp2

0x97d7,	// (0x00013f5a) list_double_number_pane_t3_cp2_ParamLimits

0x97d7,	// (0x00013f5a) list_double_number_pane_t3_cp2

0x9699,	// (0x00013e1c) list_single_graphic_pane_g1_cp2_ParamLimits

0x9699,	// (0x00013e1c) list_single_graphic_pane_g1_cp2

0x8000,	// (0x00012783) list_single_graphic_pane_g2_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_graphic_pane_g2_cp2

0x800c,	// (0x0001278f) list_single_graphic_pane_g3_cp2

0x9671,	// (0x00013df4) list_single_graphic_pane_t1_cp2_ParamLimits

0x9671,	// (0x00013df4) list_single_graphic_pane_t1_cp2

0x8000,	// (0x00012783) list_single_number_pane_g1_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_number_pane_g1_cp2

0x800c,	// (0x0001278f) list_single_number_pane_g2_cp2

0x9671,	// (0x00013df4) list_single_number_pane_t1_cp2_ParamLimits

0x9671,	// (0x00013df4) list_single_number_pane_t1_cp2

0x9687,	// (0x00013e0a) list_single_number_pane_t2_cp2_ParamLimits

0x9687,	// (0x00013e0a) list_single_number_pane_t2_cp2

0x7f1f,	// (0x000126a2) list_double2_pane_g1_cp2_ParamLimits

0x7f1f,	// (0x000126a2) list_double2_pane_g1_cp2

0x7f2e,	// (0x000126b1) list_double2_pane_g2_cp2

0x804e,	// (0x000127d1) list_double2_pane_t1_cp2_ParamLimits

0x804e,	// (0x000127d1) list_double2_pane_t1_cp2

0x8064,	// (0x000127e7) list_double2_pane_t2_cp2_ParamLimits

0x8064,	// (0x000127e7) list_double2_pane_t2_cp2

0x8076,	// (0x000127f9) list_double_pane_g1_cp2_ParamLimits

0x8076,	// (0x000127f9) list_double_pane_g1_cp2

0x8082,	// (0x00012805) list_double_pane_g2_cp2

0x808a,	// (0x0001280d) list_double_pane_t1_cp2_ParamLimits

0x808a,	// (0x0001280d) list_double_pane_t1_cp2

0x80a0,	// (0x00012823) list_double_pane_t2_cp2_ParamLimits

0x80a0,	// (0x00012823) list_double_pane_t2_cp2

0x80c8,	// (0x0001284b) list_single_pane_cp2_g3

0x8000,	// (0x00012783) list_single_pane_g1_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_pane_g1_cp2

0x800c,	// (0x0001278f) list_single_pane_g2_cp2

0x80d8,	// (0x0001285b) list_single_pane_t1_cp2_ParamLimits

0x80d8,	// (0x0001285b) list_single_pane_t1_cp2

0x80f0,	// (0x00012873) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x80f0,	// (0x00012873) list_single_large_graphic_pane_g1_cp2

0x80fc,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x80fc,	// (0x0001287f) list_single_large_graphic_pane_g2_cp2

0x8108,	// (0x0001288b) list_single_large_graphic_pane_g3_cp2

0x8110,	// (0x00012893) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x8110,	// (0x00012893) list_single_large_graphic_pane_g4_cp1

0x812a,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x812a,	// (0x000128ad) list_single_large_graphic_pane_t1_cp2

0x9653,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x9653,	// (0x00013dd6) list_single_graphic_heading_pane_g1_cp2

0x962e,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x962e,	// (0x00013db1) list_single_graphic_heading_pane_g4_cp2

0x800c,	// (0x0001278f) list_single_graphic_heading_pane_g5_cp2

0x8014,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x8014,	// (0x00012797) list_single_graphic_heading_pane_t1_cp2

0x965f,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x965f,	// (0x00013de2) list_single_graphic_heading_pane_t2_cp2

0x9622,	// (0x00013da5) list_single_2graphic_pane_g1_cp2_ParamLimits

0x9622,	// (0x00013da5) list_single_2graphic_pane_g1_cp2

0x962e,	// (0x00013db1) list_single_2graphic_pane_g2_cp2_ParamLimits

0x962e,	// (0x00013db1) list_single_2graphic_pane_g2_cp2

0x800c,	// (0x0001278f) list_single_2graphic_pane_g3_cp2

0x8db3,	// (0x00013536) list_single_2graphic_pane_g4_cp2_ParamLimits

0x8db3,	// (0x00013536) list_single_2graphic_pane_g4_cp2

0x963d,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2_ParamLimits

0x963d,	// (0x00013dc0) list_single_2graphic_pane_t1_cp2

0x64f4,	// (0x00010c77) list_highlight_pane_g10_cp1

0x921c,	// (0x0001399f) list_highlight_pane_g1_cp1

0x9224,	// (0x000139a7) list_highlight_pane_g2_cp1

0x922c,	// (0x000139af) list_highlight_pane_g3_cp1

0x9234,	// (0x000139b7) list_highlight_pane_g4_cp1

0x923c,	// (0x000139bf) list_highlight_pane_g5_cp1

0x9244,	// (0x000139c7) list_highlight_pane_g6_cp1

0x924c,	// (0x000139cf) list_highlight_pane_g7_cp1

0x9254,	// (0x000139d7) list_highlight_pane_g8_cp1

0x925c,	// (0x000139df) list_highlight_pane_g9_cp1

0x1c96,	// (0x0000c419) form_field_slider_pane_t3

0x1ca4,	// (0x0000c427) form_field_slider_pane_t4

0x9166,	// (0x000138e9) slider_form_pane_ParamLimits

0x9166,	// (0x000138e9) slider_form_pane

0x65db,	// (0x00010d5e) control_abbreviations

0x65db,	// (0x00010d5e) control_conventions

0x65db,	// (0x00010d5e) control_definitions

0x65db,	// (0x00010d5e) format_table_attribute

0x98e3,	// (0x00014066) bg_popup_preview_window_pane_g9

0x65db,	// (0x00010d5e) format_table_data2

0x65db,	// (0x00010d5e) format_table_data3

0x65db,	// (0x00010d5e) format_table_data_example

0x0008,

0x65db,	// (0x00010d5e) intro_purpose

0xf8d4,	// (0x0001a057) bg_popup_preview_window_pane_g

0x65db,	// (0x00010d5e) texts_category

0x65db,	// (0x00010d5e) texts_graphics

0x8140,	// (0x000128c3) text_digital

0x814f,	// (0x000128d2) text_primary

0x815e,	// (0x000128e1) text_primary_small

0x816d,	// (0x000128f0) text_secondary

0x817c,	// (0x000128ff) text_title

0xa04c,	// (0x000147cf) bg_passive_tab_pane_g1_cp3_srt

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp3_srt

0xa055,	// (0x000147d8) bg_passive_tab_pane_g3_cp3_srt

0x6954,	// (0x000110d7) bg_active_tab_pane_cp3_srt_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp3_srt

0xa05e,	// (0x000147e1) tabs_4_active_pane_srt_g1

0x0518,	// (0x0000ac9b) tabs_4_active_pane_srt_t1_ParamLimits

0x0518,	// (0x0000ac9b) tabs_4_active_pane_srt_t1

0xa04c,	// (0x000147cf) bg_active_tab_pane_g1_cp3_copy1

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp3_copy1

0xa055,	// (0x000147d8) bg_active_tab_pane_g3_cp3_copy1

0x66bb,	// (0x00010e3e) tabs_2_long_active_pane_srt_ParamLimits

0x66bb,	// (0x00010e3e) tabs_2_long_active_pane_srt

0x66bb,	// (0x00010e3e) tabs_2_long_passive_pane_srt_ParamLimits

0x66bb,	// (0x00010e3e) tabs_2_long_passive_pane_srt

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp4_srt

0x9d0a,	// (0x0001448d) bg_passive_tab_pane_g1_cp4_srt

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp4_srt

0x9d13,	// (0x00014496) bg_passive_tab_pane_g3_cp4_srt

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp4_srt_ParamLimits

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp4_srt

0x0cc5,	// (0x0000b448) tabs_2_long_active_pane_srt_t1_ParamLimits

0x0cc5,	// (0x0000b448) tabs_2_long_active_pane_srt_t1

0x9d0a,	// (0x0001448d) bg_active_tab_pane_g1_cp4_srt

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp4_srt

0x9d13,	// (0x00014496) bg_active_tab_pane_g3_cp4_srt

0x6954,	// (0x000110d7) tabs_3_long_active_pane_srt_ParamLimits

0x6954,	// (0x000110d7) tabs_3_long_active_pane_srt

0x6954,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x6954,	// (0x000110d7) tabs_3_long_passive_pane_cp_srt

0x6954,	// (0x000110d7) tabs_3_long_passive_pane_srt_ParamLimits

0x6954,	// (0x000110d7) tabs_3_long_passive_pane_srt

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp5_srt

0x7ed3,	// (0x00012656) bg_passive_tab_pane_g1_cp5_srt

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp5_srt

0x7edc,	// (0x0001265f) bg_passive_tab_pane_g3_cp5_srt

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp5_srt_ParamLimits

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp5_srt

0x0cdc,	// (0x0000b45f) tabs_3_long_active_pane_srt_t1_ParamLimits

0x0cdc,	// (0x0000b45f) tabs_3_long_active_pane_srt_t1

0x7ed3,	// (0x00012656) bg_active_tab_pane_g1_cp5_srt

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp5_srt

0x7edc,	// (0x0001265f) bg_active_tab_pane_g3_cp5_srt

0x9cfc,	// (0x0001447f) navi_text_pane_srt_t1

0x9cf4,	// (0x00014477) navi_icon_pane_srt_g1

0x8343,	// (0x00012ac6) midp_editing_number_pane_srt

0x818b,	// (0x0001290e) midp_ticker_pane_srt

0x834b,	// (0x00012ace) midp_ticker_pane_srt_g1

0x8353,	// (0x00012ad6) midp_ticker_pane_srt_g2

0x0001,

0xf763,	// (0x00019ee6) midp_ticker_pane_srt_g

0x835b,	// (0x00012ade) midp_ticker_pane_srt_t1

0x9ce5,	// (0x00014468) midp_editing_number_pane_t1_copy1

0x0fc6,	// (0x0000b749) listscroll_midp_pane

0x0fc6,	// (0x0000b749) midp_form_pane

0x81fb,	// (0x0001297e) midp_info_popup_window_ParamLimits

0x81fb,	// (0x0001297e) midp_info_popup_window

0x75e0,	// (0x00011d63) bg_popup_sub_pane_cp50_ParamLimits

0x75e0,	// (0x00011d63) bg_popup_sub_pane_cp50

0x8e67,	// (0x000135ea) listscroll_midp_info_pane_ParamLimits

0x8e67,	// (0x000135ea) listscroll_midp_info_pane

0x8e4f,	// (0x000135d2) listscroll_form_midp_pane_ParamLimits

0x8e4f,	// (0x000135d2) listscroll_form_midp_pane

0x8e5b,	// (0x000135de) scroll_bar_cp050

0x1c8a,	// (0x0000c40d) list_midp_pane

0xac49,	// (0x000153cc) signal_pane_g2_cp

0x8d5d,	// (0x000134e0) listscroll_midp_info_pane_t1_ParamLimits

0x8d5d,	// (0x000134e0) listscroll_midp_info_pane_t1

0x8d75,	// (0x000134f8) listscroll_midp_info_pane_t2_ParamLimits

0x8d75,	// (0x000134f8) listscroll_midp_info_pane_t2

0x8dbf,	// (0x00013542) listscroll_midp_info_pane_t3_ParamLimits

0x8dbf,	// (0x00013542) listscroll_midp_info_pane_t3

0x8df9,	// (0x0001357c) listscroll_midp_info_pane_t4_ParamLimits

0x8df9,	// (0x0001357c) listscroll_midp_info_pane_t4

0x0003,

0xf80f,	// (0x00019f92) listscroll_midp_info_pane_t_ParamLimits

0xf80f,	// (0x00019f92) listscroll_midp_info_pane_t

0x768f,	// (0x00011e12) scroll_pane_cp21

0x8d01,	// (0x00013484) form_midp_field_choice_group_pane

0x8d0a,	// (0x0001348d) form_midp_field_text_pane

0x8d43,	// (0x000134c6) form_midp_field_time_pane

0x8d4b,	// (0x000134ce) form_midp_gauge_slider_pane

0x8d54,	// (0x000134d7) form_midp_gauge_wait_pane

0x65db,	// (0x00010d5e) form_midp_image_pane

0x1c74,	// (0x0000c3f7) list_single_midp_pane_ParamLimits

0x1c74,	// (0x0000c3f7) list_single_midp_pane

0x8cba,	// (0x0001343d) form_midp_field_text_pane_t1

0x8ab9,	// (0x0001323c) input_focus_pane_cp050

0x8cdb,	// (0x0001345e) list_midp_form_text_pane

0x8c89,	// (0x0001340c) form_midp_field_choice_group_pane_t1

0x8c97,	// (0x0001341a) input_focus_pane_cp051

0x8cab,	// (0x0001342e) list_midp_choice_pane

0x65db,	// (0x00010d5e) status_idle_pane

0x8c6d,	// (0x000133f0) form_midp_field_time_pane_t1

0x64f4,	// (0x00010c77) wait_anim_pane_g2_copy1

0x8c7b,	// (0x000133fe) form_midp_field_time_pane_t2

0x0001,

0x82a5,	// (0x00012a28) aid_navinavi_width_2_pane

0xf80a,	// (0x00019f8d) form_midp_field_time_pane_t

0x65db,	// (0x00010d5e) input_focus_pane_cp052

0x65db,	// (0x00010d5e) bg_input_focus_pane_cp040

0x8c2d,	// (0x000133b0) form_midp_gauge_slider_pane_t1

0x8c3b,	// (0x000133be) form_midp_gauge_slider_pane_t2

0x1c58,	// (0x0000c3db) form_midp_gauge_slider_pane_t3

0x1c66,	// (0x0000c3e9) form_midp_gauge_slider_pane_t4

0x0003,

0xf801,	// (0x00019f84) form_midp_gauge_slider_pane_t

0x8c65,	// (0x000133e8) form_midp_slider_pane

0x66bb,	// (0x00010e3e) bg_input_focus_pane_cp041_ParamLimits

0x66bb,	// (0x00010e3e) bg_input_focus_pane_cp041

0x8bfd,	// (0x00013380) form_midp_gauge_wait_pane_t1_ParamLimits

0x8bfd,	// (0x00013380) form_midp_gauge_wait_pane_t1

0x8c0f,	// (0x00013392) form_midp_gauge_wait_pane_t2_ParamLimits

0x8c0f,	// (0x00013392) form_midp_gauge_wait_pane_t2

0x0001,

0xf7fc,	// (0x00019f7f) form_midp_gauge_wait_pane_t_ParamLimits

0xf7fc,	// (0x00019f7f) form_midp_gauge_wait_pane_t

0x8c21,	// (0x000133a4) form_midp_wait_pane_ParamLimits

0x8c21,	// (0x000133a4) form_midp_wait_pane

0x8bc7,	// (0x0001334a) form_midp_image_pane_g1

0x8bd0,	// (0x00013353) form_midp_image_pane_t1

0x8bdf,	// (0x00013362) form_midp_image_pane_t2

0x8bee,	// (0x00013371) form_midp_image_pane_t3

0x0002,

0xf7f5,	// (0x00019f78) form_midp_image_pane_t

0x8baf,	// (0x00013332) list_single_midp_pane_g1

0x8bb8,	// (0x0001333b) list_single_midp_pane_t1

0x8b9b,	// (0x0001331e) list_midp_form_item_pane_ParamLimits

0x8b9b,	// (0x0001331e) list_midp_form_item_pane

0x824d,	// (0x000129d0) list_midp_form_item_pane_t1

0x825c,	// (0x000129df) midp_ticker_pane_g1

0x8268,	// (0x000129eb) midp_ticker_pane_g2

0x0001,

0xf749,	// (0x00019ecc) midp_ticker_pane_g

0x8274,	// (0x000129f7) midp_ticker_pane_t1

0x9ce5,	// (0x00014468) midp_editing_number_pane_t1

0x9ef6,	// (0x00014679) midp_editing_number_pane

0x9f02,	// (0x00014685) midp_ticker_pane

0x9cc3,	// (0x00014446) ai_message_heading_pane

0x65db,	// (0x00010d5e) bg_popup_window_pane_cp14

0x9ccb,	// (0x0001444e) listscroll_ai_message_pane

0x9c4d,	// (0x000143d0) ai_message_heading_pane_g1_ParamLimits

0x9c4d,	// (0x000143d0) ai_message_heading_pane_g1

0x9c59,	// (0x000143dc) ai_message_heading_pane_g2_ParamLimits

0x9c59,	// (0x000143dc) ai_message_heading_pane_g2

0x9c65,	// (0x000143e8) ai_message_heading_pane_g3_ParamLimits

0x9c65,	// (0x000143e8) ai_message_heading_pane_g3

0x9c71,	// (0x000143f4) ai_message_heading_pane_g4_ParamLimits

0x9c71,	// (0x000143f4) ai_message_heading_pane_g4

0x0003,

0xf936,	// (0x0001a0b9) ai_message_heading_pane_g_ParamLimits

0xf936,	// (0x0001a0b9) ai_message_heading_pane_g

0x9c7d,	// (0x00014400) ai_message_heading_pane_t1_ParamLimits

0x9c7d,	// (0x00014400) ai_message_heading_pane_t1

0x9c97,	// (0x0001441a) ai_message_heading_pane_t2_ParamLimits

0x9c97,	// (0x0001441a) ai_message_heading_pane_t2

0x0001,

0xf93f,	// (0x0001a0c2) ai_message_heading_pane_t_ParamLimits

0xf93f,	// (0x0001a0c2) ai_message_heading_pane_t

0x9ca9,	// (0x0001442c) bg_popup_heading_pane_cp1_ParamLimits

0x9ca9,	// (0x0001442c) bg_popup_heading_pane_cp1

0x9c3b,	// (0x000143be) list_ai_message_pane_ParamLimits

0x9c3b,	// (0x000143be) list_ai_message_pane

0x768f,	// (0x00011e12) scroll_pane_cp10

0x9bd7,	// (0x0001435a) list_ai_message_pane_g1

0x9bdf,	// (0x00014362) list_ai_message_pane_g2

0x0001,

0xf913,	// (0x0001a096) list_ai_message_pane_g

0x9be7,	// (0x0001436a) list_ai_message_pane_t1_ParamLimits

0x9be7,	// (0x0001436a) list_ai_message_pane_t1

0x9bfc,	// (0x0001437f) list_ai_message_pane_t2_ParamLimits

0x9bfc,	// (0x0001437f) list_ai_message_pane_t2

0x9c11,	// (0x00014394) list_ai_message_pane_t3_ParamLimits

0x9c11,	// (0x00014394) list_ai_message_pane_t3

0x9c26,	// (0x000143a9) list_ai_message_pane_t4_ParamLimits

0x9c26,	// (0x000143a9) list_ai_message_pane_t4

0x0003,

0xf918,	// (0x0001a09b) list_ai_message_pane_t_ParamLimits

0xf918,	// (0x0001a09b) list_ai_message_pane_t

0x9bc5,	// (0x00014348) cell_ai_soft_ind_pane_ParamLimits

0x9bc5,	// (0x00014348) cell_ai_soft_ind_pane

0x8286,	// (0x00012a09) cell_ai_soft_ind_pane_g1_ParamLimits

0x8286,	// (0x00012a09) cell_ai_soft_ind_pane_g1

0x65db,	// (0x00010d5e) grid_highlight_cp1

0x8293,	// (0x00012a16) text_secondary_cp56_ParamLimits

0x8293,	// (0x00012a16) text_secondary_cp56

0x9b9a,	// (0x0001431d) example_general_pane_ParamLimits

0x9b9a,	// (0x0001431d) example_general_pane

0x9ba6,	// (0x00014329) example_parent_pane_g1_ParamLimits

0x9ba6,	// (0x00014329) example_parent_pane_g1

0x9bb2,	// (0x00014335) example_parent_pane_t1_ParamLimits

0x9bb2,	// (0x00014335) example_parent_pane_t1

0xe127,	// (0x000188aa) popup_preview_text_window_ParamLimits

0xe127,	// (0x000188aa) popup_preview_text_window

0x80d0,	// (0x00012853) list_single_pane_cp2_g4

0x6a30,	// (0x000111b3) bg_popup_preview_window_pane_ParamLimits

0x6a30,	// (0x000111b3) bg_popup_preview_window_pane

0x98eb,	// (0x0001406e) popup_preview_text_window_t1_ParamLimits

0x98eb,	// (0x0001406e) popup_preview_text_window_t1

0x9909,	// (0x0001408c) popup_preview_text_window_t2_ParamLimits

0x9909,	// (0x0001408c) popup_preview_text_window_t2

0x9952,	// (0x000140d5) popup_preview_text_window_t3_ParamLimits

0x9952,	// (0x000140d5) popup_preview_text_window_t3

0x9997,	// (0x0001411a) popup_preview_text_window_t4_ParamLimits

0x9997,	// (0x0001411a) popup_preview_text_window_t4

0x0004,

0xf8e7,	// (0x0001a06a) popup_preview_text_window_t_ParamLimits

0xf8e7,	// (0x0001a06a) popup_preview_text_window_t

0x9a15,	// (0x00014198) scroll_pane_cp11

0x89a3,	// (0x00013126) bg_popup_preview_window_pane_g1

0x98ab,	// (0x0001402e) bg_popup_preview_window_pane_g2

0x98b3,	// (0x00014036) bg_popup_preview_window_pane_g3

0x98bb,	// (0x0001403e) bg_popup_preview_window_pane_g4

0x98c3,	// (0x00014046) bg_popup_preview_window_pane_g5

0x98cb,	// (0x0001404e) bg_popup_preview_window_pane_g6

0x98d3,	// (0x00014056) bg_popup_preview_window_pane_g7

0x98db,	// (0x0001405e) bg_popup_preview_window_pane_g8

0x4372,	// (0x0000eaf5) aid_popup_width_pane

0xe0a9,	// (0x0001882c) popup_midp_note_alarm_window_ParamLimits

0xe0a9,	// (0x0001882c) popup_midp_note_alarm_window

0x739f,	// (0x00011b22) data_form_pane_ParamLimits

0x0baa,	// (0x0000b32d) form_field_data_pane_g1

0x0bb4,	// (0x0000b337) form_field_data_pane_t1_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_ParamLimits

0x73d9,	// (0x00011b5c) data_form_wide_pane_ParamLimits

0x73e5,	// (0x00011b68) form_field_data_wide_pane_g1

0x7405,	// (0x00011b88) form_field_data_wide_pane_t1_ParamLimits

0x6cbc,	// (0x0001143f) input_focus_pane_cp6_ParamLimits

0x0ca3,	// (0x0000b426) input_popup_find_pane_g1_ParamLimits

0x0ca3,	// (0x0000b426) input_popup_find_pane_g1

0x473b,	// (0x0000eebe) aid_navi_side_left_pane

0x474b,	// (0x0000eece) aid_navi_side_right_pane

0x9305,	// (0x00013a88) bg_popup_window_pane_cp30_ParamLimits

0x9305,	// (0x00013a88) bg_popup_window_pane_cp30

0x937f,	// (0x00013b02) popup_midp_note_alarm_window_g1_ParamLimits

0x937f,	// (0x00013b02) popup_midp_note_alarm_window_g1

0x93af,	// (0x00013b32) popup_midp_note_alarm_window_t1_ParamLimits

0x93af,	// (0x00013b32) popup_midp_note_alarm_window_t1

0x9450,	// (0x00013bd3) popup_midp_note_alarm_window_t2_ParamLimits

0x9450,	// (0x00013bd3) popup_midp_note_alarm_window_t2

0x94fe,	// (0x00013c81) popup_midp_note_alarm_window_t3_ParamLimits

0x94fe,	// (0x00013c81) popup_midp_note_alarm_window_t3

0x9526,	// (0x00013ca9) popup_midp_note_alarm_window_t4_ParamLimits

0x9526,	// (0x00013ca9) popup_midp_note_alarm_window_t4

0x9546,	// (0x00013cc9) popup_midp_note_alarm_window_t5_ParamLimits

0x9546,	// (0x00013cc9) popup_midp_note_alarm_window_t5

0x000a,

0xf884,	// (0x0001a007) popup_midp_note_alarm_window_t_ParamLimits

0xf884,	// (0x0001a007) popup_midp_note_alarm_window_t

0x95f2,	// (0x00013d75) wait_bar_pane_cp1_ParamLimits

0x95f2,	// (0x00013d75) wait_bar_pane_cp1

0x65db,	// (0x00010d5e) wait_anim_pane_copy1

0x65db,	// (0x00010d5e) wait_border_pane_copy1

0x9017,	// (0x0001379a) wait_border_pane_g1_copy1

0x741c,	// (0x00011b9f) form_field_popup_pane_g1

0x0bcc,	// (0x0000b34f) form_field_popup_pane_t1_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_cp7_ParamLimits

0x739f,	// (0x00011b22) list_form_pane_ParamLimits

0x743c,	// (0x00011bbf) form_field_popup_wide_pane_g1

0x7444,	// (0x00011bc7) form_field_popup_wide_pane_t1_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_cp8_ParamLimits

0x7459,	// (0x00011bdc) list_form_wide_pane_ParamLimits

0xa0cc,	// (0x0001484f) aid_size_cell_graphic_pane

0x0c49,	// (0x0000b3cc) data_form_pane_t1_ParamLimits

0x20d8,	// (0x0000c85b) data_form_wide_pane_t1_ParamLimits

0x18dc,	// (0x0000c05f) bg_status_flat_pane

0x0475,	// (0x0000abf8) title_pane_t1_ParamLimits

0x6683,	// (0x00010e06) title_pane_t2_ParamLimits

0x66a9,	// (0x00010e2c) title_pane_t3_ParamLimits

0xf557,	// (0x00019cda) title_pane_t_ParamLimits

0x0db4,	// (0x0000b537) level_1_signal_ParamLimits

0x0dc6,	// (0x0000b549) level_2_signal_ParamLimits

0x0dd9,	// (0x0000b55c) level_3_signal_ParamLimits

0x0dec,	// (0x0000b56f) level_4_signal_ParamLimits

0x0dff,	// (0x0000b582) level_5_signal_ParamLimits

0x0e12,	// (0x0000b595) level_6_signal_ParamLimits

0x0e25,	// (0x0000b5a8) level_7_signal_ParamLimits

0x0db4,	// (0x0000b537) level_1_battery_ParamLimits

0x0dc6,	// (0x0000b549) level_2_battery_ParamLimits

0x0dd9,	// (0x0000b55c) level_3_battery_ParamLimits

0x0dec,	// (0x0000b56f) level_4_battery_ParamLimits

0x0dff,	// (0x0000b582) level_5_battery_ParamLimits

0x0e12,	// (0x0000b595) level_6_battery_ParamLimits

0x0e25,	// (0x0000b5a8) level_7_battery_ParamLimits

0x921c,	// (0x0001399f) bg_status_flat_pane_g1

0x9224,	// (0x000139a7) bg_status_flat_pane_g2

0x922c,	// (0x000139af) bg_status_flat_pane_g3

0x9234,	// (0x000139b7) bg_status_flat_pane_g4

0x923c,	// (0x000139bf) bg_status_flat_pane_g5

0x9244,	// (0x000139c7) bg_status_flat_pane_g6

0x924c,	// (0x000139cf) bg_status_flat_pane_g7

0x0502,	// (0x0000ac85) tabs_3_active_pane_t1_ParamLimits

0x0502,	// (0x0000ac85) tabs_3_passive_pane_t1_ParamLimits

0x0518,	// (0x0000ac9b) tabs_4_active_pane_t1_ParamLimits

0x0518,	// (0x0000ac9b) tabs_4_1_passive_pane_t1_ParamLimits

0x0caf,	// (0x0000b432) tabs_2_active_pane_t1_ParamLimits

0x0caf,	// (0x0000b432) tabs_2_passive_pane_t1_ParamLimits

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp4_ParamLimits

0x0cc5,	// (0x0000b448) tabs_2_long_active_pane_t1_ParamLimits

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp4_ParamLimits

0x5187,	// (0x0000f90a) list_single_midp_graphic_pane_t1_ParamLimits

0x66bb,	// (0x00010e3e) bg_active_tab_pane_cp5_ParamLimits

0x0cdc,	// (0x0000b45f) tabs_3_long_active_pane_t1_ParamLimits

0x84da,	// (0x00012c5d) bg_passive_tab_pane_cp5_ParamLimits

0x5187,	// (0x0000f90a) list_single_midp_graphic_pane_t1

0x18dc,	// (0x0000c05f) bg_status_flat_pane_ParamLimits

0x8659,	// (0x00012ddc) indicator_pane_cp2_ParamLimits

0x8659,	// (0x00012ddc) indicator_pane_cp2

0x1a42,	// (0x0000c1c5) navi_pane_srt_ParamLimits

0x1a42,	// (0x0000c1c5) navi_pane_srt

0x87a1,	// (0x00012f24) popup_clock_digital_analogue_window_cp1

0x67af,	// (0x00010f32) indicator_pane_t1

0x818b,	// (0x0001290e) copy_highlight_pane

0x818b,	// (0x0001290e) cursor_graphics_pane

0x818b,	// (0x0001290e) graphic_within_text_pane

0x818b,	// (0x0001290e) link_highlight_pane

0x99d8,	// (0x0001415b) popup_preview_text_window_t5_ParamLimits

0x99d8,	// (0x0001415b) popup_preview_text_window_t5

0x82ad,	// (0x00012a30) cursor_digital_pane

0x82ad,	// (0x00012a30) cursor_primary_pane

0x82be,	// (0x00012a41) cursor_primary_small_pane

0x82c6,	// (0x00012a49) cursor_secondary_pane

0x82ce,	// (0x00012a51) cursor_title_pane

0x82ad,	// (0x00012a30) link_highlight_digital_pane

0x82b5,	// (0x00012a38) link_highlight_primary_pane

0x82be,	// (0x00012a41) link_highlight_primary_small_pane

0x82c6,	// (0x00012a49) link_highlight_secondary_pane

0x82ce,	// (0x00012a51) link_highlight_title_pane

0x82ad,	// (0x00012a30) copy_highlight_digital_pane

0x82ad,	// (0x00012a30) copy_highlight_primary_pane

0x82be,	// (0x00012a41) copy_highlight_primary_small_pane

0x82c6,	// (0x00012a49) copy_highlight_secondary_pane

0x82ce,	// (0x00012a51) copy_highlight_title_pane

0x82c6,	// (0x00012a49) graphic_text_digital_pane

0x92b4,	// (0x00013a37) graphic_text_primary_pane

0x92bd,	// (0x00013a40) graphic_text_primary_small_pane

0x82be,	// (0x00012a41) graphic_text_secondary_pane

0x82ad,	// (0x00012a30) graphic_text_title_pane

0x1062,	// (0x0000b7e5) cursor_primary_pane_g1

0x92a6,	// (0x00013a29) cursor_text_primary_t1

0x1cc6,	// (0x0000c449) cursor_primary_small_pane_g1

0x9298,	// (0x00013a1b) cursor_text_primary_small_t1

0x1cbc,	// (0x0000c43f) cursor_primary_small_pane_g1_copy1

0x9282,	// (0x00013a05) cursor_text_primary_small_t1_copy1

0x9264,	// (0x000139e7) cursor_text_title_t1

0x1cb2,	// (0x0000c435) cursor_title_pane_g1

0x1062,	// (0x0000b7e5) cursor_digital_pane_g1

0x82de,	// (0x00012a61) cursor_text_digital_t1

0x82ec,	// (0x00012a6f) link_highlight_primary_pane_g1

0x920d,	// (0x00013990) link_highlight_primary_pane_t1

0x82ec,	// (0x00012a6f) link_highlight_primary_small_pane_g1

0x82f4,	// (0x00012a77) link_highlight_primary_small_pane_t1

0x8303,	// (0x00012a86) link_highlight_secondary_pane_g1

0x830b,	// (0x00012a8e) link_highlight_secondary_pane_t1

0x9172,	// (0x000138f5) link_highlight_title_pane_g1

0x9189,	// (0x0001390c) link_highlight_title_pane_t1

0x9172,	// (0x000138f5) link_highlight_digital_pane_g1

0x917a,	// (0x000138fd) link_highlight_digital_pane_t1

0x9032,	// (0x000137b5) copy_highlight_primary_pane_g1

0x9058,	// (0x000137db) copy_highlight_primary_pane_t1

0x9032,	// (0x000137b5) copy_highlight_primary_small_pane_g1

0x9049,	// (0x000137cc) copy_highlight_primary_small_pane_t1

0x831a,	// (0x00012a9d) copy_highlight_secondary_pane_g1

0x8322,	// (0x00012aa5) copy_highlight_secondary_pane_t1

0x9032,	// (0x000137b5) copy_highlight_title_pane_g1

0x903a,	// (0x000137bd) copy_highlight_title_pane_t1

0x9032,	// (0x000137b5) copy_highlight_digital_pane_g1

0xa238,	// (0x000149bb) copy_highlight_digital_pane_t1

0xa18c,	// (0x0001490f) graphic_text_primary_pane_g1

0xa21c,	// (0x0001499f) graphic_text_primary_pane_t1

0xa22a,	// (0x000149ad) graphic_text_primary_pane_t2

0x0001,

0xf9b3,	// (0x0001a136) graphic_text_primary_pane_t

0xa1f8,	// (0x0001497b) graphic_text_primary_small_pane_g1

0xa200,	// (0x00014983) graphic_text_primary_small_pane_t1

0xa20e,	// (0x00014991) graphic_text_primary_small_pane_t2

0x0001,

0xf9ae,	// (0x0001a131) graphic_text_primary_small_pane_t

0xa1d4,	// (0x00014957) graphic_text_secondary_pane_g1

0xa1dc,	// (0x0001495f) graphic_text_secondary_pane_t1

0xa1ea,	// (0x0001496d) graphic_text_secondary_pane_t2

0x0001,

0xf9a9,	// (0x0001a12c) graphic_text_secondary_pane_t

0xa1b0,	// (0x00014933) graphic_text_title_pane_g1

0xa1b8,	// (0x0001493b) graphic_text_title_pane_t1

0xa1c6,	// (0x00014949) graphic_text_title_pane_t2

0x0001,

0xf9a4,	// (0x0001a127) graphic_text_title_pane_t

0xa18c,	// (0x0001490f) graphic_text_digital_pane_g1

0xa194,	// (0x00014917) graphic_text_digital_pane_t1

0xa1a2,	// (0x00014925) graphic_text_digital_pane_t2

0x0001,

0xf99f,	// (0x0001a122) graphic_text_digital_pane_t

0x66bb,	// (0x00010e3e) navi_icon_pane_srt_ParamLimits

0x66bb,	// (0x00010e3e) navi_icon_pane_srt

0x65db,	// (0x00010d5e) navi_midp_pane_srt

0x65db,	// (0x00010d5e) navi_navi_pane_srt

0x66bb,	// (0x00010e3e) navi_text_pane_srt_ParamLimits

0x66bb,	// (0x00010e3e) navi_text_pane_srt

0x9864,	// (0x00013fe7) navi_navi_icon_text_pane_srt

0x986c,	// (0x00013fef) navi_navi_pane_srt_g1_ParamLimits

0x986c,	// (0x00013fef) navi_navi_pane_srt_g1

0x987e,	// (0x00014001) navi_navi_pane_srt_g2_ParamLimits

0x987e,	// (0x00014001) navi_navi_pane_srt_g2

0x0001,

0xf99a,	// (0x0001a11d) navi_navi_pane_srt_g_ParamLimits

0xf99a,	// (0x0001a11d) navi_navi_pane_srt_g

0x9890,	// (0x00014013) navi_navi_tabs_pane_srt

0x9864,	// (0x00013fe7) navi_navi_text_pane_srt

0x9864,	// (0x00013fe7) navi_navi_volume_pane_srt

0xa17d,	// (0x00014900) navi_navi_text_pane_srt_t1

0x54eb,	// (0x0000fc6e) navi_navi_volume_pane_srt_g1

0x54f3,	// (0x0000fc76) volume_small_pane_srt_ParamLimits

0x54f3,	// (0x0000fc76) volume_small_pane_srt

0x49e2,	// (0x0000f165) volume_small_pane_srt_g1_ParamLimits

0x49e2,	// (0x0000f165) volume_small_pane_srt_g1

0x49f2,	// (0x0000f175) volume_small_pane_srt_g2_ParamLimits

0x49f2,	// (0x0000f175) volume_small_pane_srt_g2

0x4a03,	// (0x0000f186) volume_small_pane_srt_g3_ParamLimits

0x4a03,	// (0x0000f186) volume_small_pane_srt_g3

0x4a14,	// (0x0000f197) volume_small_pane_srt_g4_ParamLimits

0x4a14,	// (0x0000f197) volume_small_pane_srt_g4

0x4a25,	// (0x0000f1a8) volume_small_pane_srt_g5_ParamLimits

0x4a25,	// (0x0000f1a8) volume_small_pane_srt_g5

0x4a36,	// (0x0000f1b9) volume_small_pane_srt_g6_ParamLimits

0x4a36,	// (0x0000f1b9) volume_small_pane_srt_g6

0x4a47,	// (0x0000f1ca) volume_small_pane_srt_g7_ParamLimits

0x4a47,	// (0x0000f1ca) volume_small_pane_srt_g7

0x4a58,	// (0x0000f1db) volume_small_pane_srt_g8_ParamLimits

0x4a58,	// (0x0000f1db) volume_small_pane_srt_g8

0x4a69,	// (0x0000f1ec) volume_small_pane_srt_g9_ParamLimits

0x4a69,	// (0x0000f1ec) volume_small_pane_srt_g9

0x4a7a,	// (0x0000f1fd) volume_small_pane_srt_g10_ParamLimits

0x4a7a,	// (0x0000f1fd) volume_small_pane_srt_g10

0x0009,

0xf74e,	// (0x00019ed1) volume_small_pane_srt_g_ParamLimits

0xf74e,	// (0x00019ed1) volume_small_pane_srt_g

0x6ad9,	// (0x0001125c) query_popup_data_pane_cp2

0xa163,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xa163,	// (0x000148e6) navi_navi_icon_text_pane_srt_t1

0x92b4,	// (0x00013a37) navi_tabs_2_long_pane_srt

0x92b4,	// (0x00013a37) navi_tabs_2_pane_srt

0x92b4,	// (0x00013a37) navi_tabs_3_long_pane_srt

0x92b4,	// (0x00013a37) navi_tabs_3_pane_srt

0x92b4,	// (0x00013a37) navi_tabs_4_pane_srt

0x54cb,	// (0x0000fc4e) tabs_2_active_pane_srt_ParamLimits

0x54cb,	// (0x0000fc4e) tabs_2_active_pane_srt

0x54db,	// (0x0000fc5e) tabs_2_passive_pane_srt_ParamLimits

0x54db,	// (0x0000fc5e) tabs_2_passive_pane_srt

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp1_srt_ParamLimits

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp1_srt

0xa141,	// (0x000148c4) bg_passive_tab_pane_g1_cp1_srt

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp1_srt

0xa14a,	// (0x000148cd) bg_passive_tab_pane_g3_cp1_srt

0x6954,	// (0x000110d7) bg_active_tab_pane_cp1_srt_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp1_srt

0xa153,	// (0x000148d6) tabs_2_active_pane_srt_g1

0x0caf,	// (0x0000b432) tabs_2_active_pane_srt_t1_ParamLimits

0x0caf,	// (0x0000b432) tabs_2_active_pane_srt_t1

0xa141,	// (0x000148c4) bg_active_tab_pane_g1_cp1_srt

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp1_srt

0xa14a,	// (0x000148cd) bg_active_tab_pane_g3_cp1_srt

0x5498,	// (0x0000fc1b) tabs_3_active_pane_srt_ParamLimits

0x5498,	// (0x0000fc1b) tabs_3_active_pane_srt

0x54a9,	// (0x0000fc2c) tabs_3_passive_pane_cp_srt_ParamLimits

0x54a9,	// (0x0000fc2c) tabs_3_passive_pane_cp_srt

0x54ba,	// (0x0000fc3d) tabs_3_passive_pane_srt_ParamLimits

0x54ba,	// (0x0000fc3d) tabs_3_passive_pane_srt

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp2_srt_ParamLimits

0x8ab9,	// (0x0001323c) bg_passive_tab_pane_cp2_srt

0x8331,	// (0x00012ab4) bg_passive_tab_pane_g1_cp2_srt

0x7e4d,	// (0x000125d0) bg_passive_tab_pane_g2_cp2_srt

0x833a,	// (0x00012abd) bg_passive_tab_pane_g3_cp2_srt

0x6954,	// (0x000110d7) bg_active_tab_pane_cp2_srt_ParamLimits

0x6954,	// (0x000110d7) bg_active_tab_pane_cp2_srt

0xa139,	// (0x000148bc) tabs_3_active_pane_srt_g1

0x0502,	// (0x0000ac85) tabs_3_active_pane_srt_t1_ParamLimits

0x0502,	// (0x0000ac85) tabs_3_active_pane_srt_t1

0x8331,	// (0x00012ab4) bg_active_tab_pane_g1_cp2_srt

0x7e4d,	// (0x000125d0) bg_active_tab_pane_g2_cp2_srt

0x833a,	// (0x00012abd) bg_active_tab_pane_g3_cp2_srt

0x5450,	// (0x0000fbd3) tabs_4_active_pane_srt_ParamLimits

0x5450,	// (0x0000fbd3) tabs_4_active_pane_srt

0x5462,	// (0x0000fbe5) tabs_4_passive_pane_cp2_srt_ParamLimits

0x5462,	// (0x0000fbe5) tabs_4_passive_pane_cp2_srt

0x4bdf,	// (0x0000f362) aid_size_cell_toolbar

0xde19,	// (0x0001859c) main_idle_act_pane_ParamLimits

0x4d56,	// (0x0000f4d9) popup_large_graphic_colour_window_ParamLimits

0xe377,	// (0x00018afa) popup_toolbar_window_ParamLimits

0xe377,	// (0x00018afa) popup_toolbar_window

0x9f27,	// (0x000146aa) list_single_graphic_2heading_pane_ParamLimits

0x9f27,	// (0x000146aa) list_single_graphic_2heading_pane

0x78d8,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane

0x78ea,	// (0x0001206d) aid_size_cell_apps_grid_prt_pane

0x84da,	// (0x00012c5d) bg_wml_button_pane_cp1_ParamLimits

0x84da,	// (0x00012c5d) bg_wml_button_pane_cp1

0x8cba,	// (0x0001343d) form_midp_field_text_pane_t1_ParamLimits

0x8ab9,	// (0x0001323c) input_focus_pane_cp050_ParamLimits

0x8cdb,	// (0x0001345e) list_midp_form_text_pane_ParamLimits

0x8c97,	// (0x0001341a) input_focus_pane_cp051_ParamLimits

0x8cab,	// (0x0001342e) list_midp_choice_pane_ParamLimits

0x8b69,	// (0x000132ec) list_single_2graphic_pane_cp3_ParamLimits

0x8b69,	// (0x000132ec) list_single_2graphic_pane_cp3

0x8b7c,	// (0x000132ff) list_single_midp_graphic_pane_ParamLimits

0x8b7c,	// (0x000132ff) list_single_midp_graphic_pane

0x5099,	// (0x0000f81c) list_single_graphic_2heading_pane_g1_ParamLimits

0x5099,	// (0x0000f81c) list_single_graphic_2heading_pane_g1

0x50a5,	// (0x0000f828) list_single_graphic_2heading_pane_g4_ParamLimits

0x50a5,	// (0x0000f828) list_single_graphic_2heading_pane_g4

0x50b1,	// (0x0000f834) list_single_graphic_2heading_pane_g5_ParamLimits

0x50b1,	// (0x0000f834) list_single_graphic_2heading_pane_g5

0x0002,

0xf7a1,	// (0x00019f24) list_single_graphic_2heading_pane_g_ParamLimits

0xf7a1,	// (0x00019f24) list_single_graphic_2heading_pane_g

0x50bd,	// (0x0000f840) list_single_graphic_2heading_pane_t1_ParamLimits

0x50bd,	// (0x0000f840) list_single_graphic_2heading_pane_t1

0x50d1,	// (0x0000f854) list_single_graphic_2heading_pane_t2_ParamLimits

0x50d1,	// (0x0000f854) list_single_graphic_2heading_pane_t2

0x50eb,	// (0x0000f86e) list_single_graphic_2heading_pane_t3_ParamLimits

0x50eb,	// (0x0000f86e) list_single_graphic_2heading_pane_t3

0x0002,

0xf7a8,	// (0x00019f2b) list_single_graphic_2heading_pane_t_ParamLimits

0xf7a8,	// (0x00019f2b) list_single_graphic_2heading_pane_t

0x88ed,	// (0x00013070) bg_popup_sub_pane_cp2

0x8913,	// (0x00013096) grid_toobar_pane

0x5103,	// (0x0000f886) cell_toolbar_pane_ParamLimits

0x5103,	// (0x0000f886) cell_toolbar_pane

0x8949,	// (0x000130cc) cell_toolbar_pane_g1_ParamLimits

0x8949,	// (0x000130cc) cell_toolbar_pane_g1

0x895b,	// (0x000130de) cell_toolbar_pane_g2_ParamLimits

0x895b,	// (0x000130de) cell_toolbar_pane_g2

0x0001,

0xf7af,	// (0x00019f32) cell_toolbar_pane_g_ParamLimits

0xf7af,	// (0x00019f32) cell_toolbar_pane_g

0x897d,	// (0x00013100) grid_highlight_pane_cp2_ParamLimits

0x897d,	// (0x00013100) grid_highlight_pane_cp2

0x8997,	// (0x0001311a) toolbar_button_pane

0x89a3,	// (0x00013126) toolbar_button_pane_g1

0x89ab,	// (0x0001312e) toolbar_button_pane_g2

0x89b3,	// (0x00013136) toolbar_button_pane_g3

0x89bb,	// (0x0001313e) toolbar_button_pane_g4

0x89c3,	// (0x00013146) toolbar_button_pane_g5

0x89cb,	// (0x0001314e) toolbar_button_pane_g6

0x89d3,	// (0x00013156) toolbar_button_pane_g7

0x89db,	// (0x0001315e) toolbar_button_pane_g8

0x89e3,	// (0x00013166) toolbar_button_pane_g9

0x0009,

0xf7b4,	// (0x00019f37) toolbar_button_pane_g

0x5132,	// (0x0000f8b5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x5132,	// (0x0000f8b5) list_single_2graphic_pane_g1_cp3

0xe3b9,	// (0x00018b3c) list_single_2graphic_pane_g2_cp3_ParamLimits

0xe3b9,	// (0x00018b3c) list_single_2graphic_pane_g2_cp3

0x514d,	// (0x0000f8d0) list_single_2graphic_pane_g3_cp3

0x5155,	// (0x0000f8d8) list_single_2graphic_pane_g4_cp3_ParamLimits

0x5155,	// (0x0000f8d8) list_single_2graphic_pane_g4_cp3

0x5161,	// (0x0000f8e4) list_single_2graphic_pane_t1_cp3_ParamLimits

0x5161,	// (0x0000f8e4) list_single_2graphic_pane_t1_cp3

0x517b,	// (0x0000f8fe) list_single_midp_graphic_pane_g2_ParamLimits

0x517b,	// (0x0000f8fe) list_single_midp_graphic_pane_g2

0x4be7,	// (0x0000f36a) aid_zoom_text_primary

0x4bef,	// (0x0000f372) aid_zoom_text_secondary

0x109c,	// (0x0000b81f) status_small_pane_g7_ParamLimits

0x109c,	// (0x0000b81f) status_small_pane_g7

0x10bf,	// (0x0000b842) status_small_pane_t1_ParamLimits

0x044a,	// (0x0000abcd) title_pane_g2

0x0003,

0xf54e,	// (0x00019cd1) title_pane_g

0x072c,	// (0x0000aeaf) aid_size_cell_colour_1_pane_ParamLimits

0x072c,	// (0x0000aeaf) aid_size_cell_colour_1_pane

0x0740,	// (0x0000aec3) aid_size_cell_colour_2_pane_ParamLimits

0x0740,	// (0x0000aec3) aid_size_cell_colour_2_pane

0x0754,	// (0x0000aed7) aid_size_cell_colour_3_pane_ParamLimits

0x0754,	// (0x0000aed7) aid_size_cell_colour_3_pane

0x0768,	// (0x0000aeeb) aid_size_cell_colour_4_pane_ParamLimits

0x0768,	// (0x0000aeeb) aid_size_cell_colour_4_pane

0x469d,	// (0x0000ee20) title_pane_stacon_g1_ParamLimits

0x469d,	// (0x0000ee20) title_pane_stacon_g1

0x90af,	// (0x00013832) popup_note_wait_window_g3_ParamLimits

0x90af,	// (0x00013832) popup_note_wait_window_g3

0x9125,	// (0x000138a8) popup_note_wait_window_t5_ParamLimits

0x9125,	// (0x000138a8) popup_note_wait_window_t5

0x65db,	// (0x00010d5e) main_feb_china_hwr_fs_writing_pane

0xde7a,	// (0x000185fd) popup_feb_china_hwr_fs_window_ParamLimits

0xde7a,	// (0x000185fd) popup_feb_china_hwr_fs_window

0xe3ca,	// (0x00018b4d) aid_size_cell_hwr_fs_ParamLimits

0xe3ca,	// (0x00018b4d) aid_size_cell_hwr_fs

0x8ab9,	// (0x0001323c) bg_popup_sub_pane_cp3_ParamLimits

0x8ab9,	// (0x0001323c) bg_popup_sub_pane_cp3

0xe3df,	// (0x00018b62) grid_hwr_fs_pane_ParamLimits

0xe3df,	// (0x00018b62) grid_hwr_fs_pane

0x51c6,	// (0x0000f949) linegrid_hwr_fs_pane_ParamLimits

0x51c6,	// (0x0000f949) linegrid_hwr_fs_pane

0xe3f7,	// (0x00018b7a) cell_hwr_fs_pane_ParamLimits

0xe3f7,	// (0x00018b7a) cell_hwr_fs_pane

0x8ac5,	// (0x00013248) linegrid_hwr_fs_pane_g1_ParamLimits

0x8ac5,	// (0x00013248) linegrid_hwr_fs_pane_g1

0x1c1e,	// (0x0000c3a1) linegrid_hwr_fs_pane_g2_ParamLimits

0x1c1e,	// (0x0000c3a1) linegrid_hwr_fs_pane_g2

0x8ae3,	// (0x00013266) linegrid_hwr_fs_pane_g3_ParamLimits

0x8ae3,	// (0x00013266) linegrid_hwr_fs_pane_g3

0x51f4,	// (0x0000f977) linegrid_hwr_fs_pane_g4_ParamLimits

0x51f4,	// (0x0000f977) linegrid_hwr_fs_pane_g4

0x520e,	// (0x0000f991) linegrid_hwr_fs_pane_g5_ParamLimits

0x520e,	// (0x0000f991) linegrid_hwr_fs_pane_g5

0x0004,

0xf7da,	// (0x00019f5d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7da,	// (0x00019f5d) linegrid_hwr_fs_pane_g

0x8aef,	// (0x00013272) cell_hwr_fs_pane_g1_ParamLimits

0x8aef,	// (0x00013272) cell_hwr_fs_pane_g1

0x882b,	// (0x00012fae) cell_hwr_fs_pane_g2_ParamLimits

0x882b,	// (0x00012fae) cell_hwr_fs_pane_g2

0x1c30,	// (0x0000c3b3) cell_hwr_fs_pane_g3_ParamLimits

0x1c30,	// (0x0000c3b3) cell_hwr_fs_pane_g3

0x1c3d,	// (0x0000c3c0) cell_hwr_fs_pane_g4_ParamLimits

0x1c3d,	// (0x0000c3c0) cell_hwr_fs_pane_g4

0x0003,

0xf7e5,	// (0x00019f68) cell_hwr_fs_pane_g_ParamLimits

0xf7e5,	// (0x00019f68) cell_hwr_fs_pane_g

0xe417,	// (0x00018b9a) cell_hwr_fs_pane_t1

0x65db,	// (0x00010d5e) grid_highlight_pane_cp6

0x65db,	// (0x00010d5e) main_idle_act2_pane

0x7676,	// (0x00011df9) aid_inside_area_popup_secondary

0x1dd3,	// (0x0000c556) aid_inside_area_window_primary_ParamLimits

0x1dd3,	// (0x0000c556) aid_inside_area_window_primary

0xa247,	// (0x000149ca) ai2_news_ticker_pane

0xa24f,	// (0x000149d2) aid_size_cell_ai1_link_ParamLimits

0xa24f,	// (0x000149d2) aid_size_cell_ai1_link

0x221e,	// (0x0000c9a1) popup_ai2_data_window_ParamLimits

0x221e,	// (0x0000c9a1) popup_ai2_data_window

0xa27d,	// (0x00014a00) popup_ai2_link_window_ParamLimits

0xa27d,	// (0x00014a00) popup_ai2_link_window

0x8ab9,	// (0x0001323c) bg_popup_sub_pane_cp4_ParamLimits

0x8ab9,	// (0x0001323c) bg_popup_sub_pane_cp4

0xa291,	// (0x00014a14) grid_ai2_link_pane_ParamLimits

0xa291,	// (0x00014a14) grid_ai2_link_pane

0xa2a8,	// (0x00014a2b) popup_ai2_link_window_g1_ParamLimits

0xa2a8,	// (0x00014a2b) popup_ai2_link_window_g1

0xa2b4,	// (0x00014a37) popup_ai2_link_window_g2_ParamLimits

0xa2b4,	// (0x00014a37) popup_ai2_link_window_g2

0x0001,

0xf9b8,	// (0x0001a13b) popup_ai2_link_window_g_ParamLimits

0xf9b8,	// (0x0001a13b) popup_ai2_link_window_g

0xa2c3,	// (0x00014a46) ai2_mp_button_pane

0xa2cb,	// (0x00014a4e) ai2_mp_volume_pane

0x8c97,	// (0x0001341a) bg_popup_sub_pane_cp5_ParamLimits

0x8c97,	// (0x0001341a) bg_popup_sub_pane_cp5

0xa2d3,	// (0x00014a56) heading_ai2_gene_pane_ParamLimits

0xa2d3,	// (0x00014a56) heading_ai2_gene_pane

0xa2df,	// (0x00014a62) list_ai2_gene_pane_ParamLimits

0xa2df,	// (0x00014a62) list_ai2_gene_pane

0xa327,	// (0x00014aaa) cell_ai2_link_pane_ParamLimits

0xa327,	// (0x00014aaa) cell_ai2_link_pane

0xa33d,	// (0x00014ac0) cell_ai2_link_pane_g1

0x65db,	// (0x00010d5e) grid_highlight_pane_cp7

0x5508,	// (0x0000fc8b) ai2_mp_volume_pane_g1

0xa405,	// (0x00014b88) ai2_mp_volume_pane_g2

0x2248,	// (0x0000c9cb) list_ai2_gene_pane_t1

0xa40d,	// (0x00014b90) ai2_mp_volume_pane_g3

0x0002,

0xf9d1,	// (0x0001a154) ai2_mp_volume_pane_g

0x5510,	// (0x0000fc93) volume_small_pane_cp3

0xa415,	// (0x00014b98) aid_size_cell_ai2_button

0xa41d,	// (0x00014ba0) grid_ai2_button_pane

0xa426,	// (0x00014ba9) cell_ai2_button_pane_ParamLimits

0xa426,	// (0x00014ba9) cell_ai2_button_pane

0x64f4,	// (0x00010c77) cell_ai2_button_pane_g1

0x65db,	// (0x00010d5e) grid_highlight_pane_cp8

0xa3c5,	// (0x00014b48) ai2_gene_pane_t1_ParamLimits

0xa3c5,	// (0x00014b48) ai2_gene_pane_t1

0xde01,	// (0x00018584) aid_height_parent_landscape

0x1f9d,	// (0x0000c720) aid_height_set_list

0x9d5d,	// (0x000144e0) aid_size_parent

0xa0cc,	// (0x0001484f) aid_size_cell_graphic_pane_ParamLimits

0xa2ef,	// (0x00014a72) popup_ai2_data_window_g1_ParamLimits

0xa2ef,	// (0x00014a72) popup_ai2_data_window_g1

0xa2fb,	// (0x00014a7e) ai2_news_ticker_pane_g1

0xa303,	// (0x00014a86) ai2_news_ticker_pane_g2

0x0001,

0xf9bd,	// (0x0001a140) ai2_news_ticker_pane_g

0xa30b,	// (0x00014a8e) ai2_news_ticker_pane_t1

0xa319,	// (0x00014a9c) ai2_news_ticker_pane_t2

0x0001,

0xf9c2,	// (0x0001a145) ai2_news_ticker_pane_t

0xa066,	// (0x000147e9) heading_ai2_gene_pane_g1

0xa346,	// (0x00014ac9) heading_ai2_gene_pane_t1_ParamLimits

0xa346,	// (0x00014ac9) heading_ai2_gene_pane_t1

0xa35b,	// (0x00014ade) list_highlight_pane_cp6

0x2232,	// (0x0000c9b5) ai2_gene_pane_ParamLimits

0x2232,	// (0x0000c9b5) ai2_gene_pane

0x2256,	// (0x0000c9d9) list_ai2_gene_pane_t2

0x0001,

0xf9c7,	// (0x0001a14a) list_ai2_gene_pane_t

0xa396,	// (0x00014b19) list_highlight_pane_cp8_ParamLimits

0xa396,	// (0x00014b19) list_highlight_pane_cp8

0xa3a7,	// (0x00014b2a) ai2_gene_pane_g1_ParamLimits

0xa3a7,	// (0x00014b2a) ai2_gene_pane_g1

0xa3b9,	// (0x00014b3c) ai2_gene_pane_g2_ParamLimits

0xa3b9,	// (0x00014b3c) ai2_gene_pane_g2

0x0001,

0xf9cc,	// (0x0001a14f) ai2_gene_pane_g_ParamLimits

0xf9cc,	// (0x0001a14f) ai2_gene_pane_g

0x6e45,	// (0x000115c8) scroll_pane_cp12

0xddc0,	// (0x00018543) control_pane_t3_ParamLimits

0xddc0,	// (0x00018543) control_pane_t3

0x10b0,	// (0x0000b833) status_small_pane_g8_ParamLimits

0x10b0,	// (0x0000b833) status_small_pane_g8

0xdeee,	// (0x00018671) popup_find_window_ParamLimits

0xe0e1,	// (0x00018864) popup_note_image_window_ParamLimits

0x7057,	// (0x000117da) list_double2_graphic_pane_vc_g1_ParamLimits

0x7057,	// (0x000117da) list_double2_graphic_pane_vc_g1

0x7063,	// (0x000117e6) list_double2_graphic_pane_vc_g2_ParamLimits

0x7063,	// (0x000117e6) list_double2_graphic_pane_vc_g2

0x6f8e,	// (0x00011711) list_double2_graphic_pane_vc_g3_ParamLimits

0x6f8e,	// (0x00011711) list_double2_graphic_pane_vc_g3

0x0002,

0xf5c1,	// (0x00019d44) list_double2_graphic_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019d44) list_double2_graphic_pane_vc_g

0x706f,	// (0x000117f2) list_double2_graphic_pane_vc_t1_ParamLimits

0x706f,	// (0x000117f2) list_double2_graphic_pane_vc_t1

0x7063,	// (0x000117e6) list_single_heading_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_heading_pane_vc_g1

0x6f8e,	// (0x00011711) list_single_heading_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_heading_pane_vc_g

0x89eb,	// (0x0001316e) list_single_heading_pane_vc_t1_ParamLimits

0x89eb,	// (0x0001316e) list_single_heading_pane_vc_t1

0x8a01,	// (0x00013184) list_single_heading_pane_vc_t2_ParamLimits

0x8a01,	// (0x00013184) list_single_heading_pane_vc_t2

0x0001,

0xf7c9,	// (0x00019f4c) list_single_heading_pane_vc_t_ParamLimits

0xf7c9,	// (0x00019f4c) list_single_heading_pane_vc_t

0x8a13,	// (0x00013196) list_setting_number_pane_vc_g1_ParamLimits

0x8a13,	// (0x00013196) list_setting_number_pane_vc_g1

0x8a1f,	// (0x000131a2) list_setting_number_pane_vc_g2_ParamLimits

0x8a1f,	// (0x000131a2) list_setting_number_pane_vc_g2

0x0001,

0xf7ce,	// (0x00019f51) list_setting_number_pane_vc_g_ParamLimits

0xf7ce,	// (0x00019f51) list_setting_number_pane_vc_g

0x8a2b,	// (0x000131ae) list_setting_number_pane_vc_t1_ParamLimits

0x8a2b,	// (0x000131ae) list_setting_number_pane_vc_t1

0x8a3f,	// (0x000131c2) list_setting_number_pane_vc_t2_ParamLimits

0x8a3f,	// (0x000131c2) list_setting_number_pane_vc_t2

0x8a5b,	// (0x000131de) list_setting_number_pane_vc_t3_ParamLimits

0x8a5b,	// (0x000131de) list_setting_number_pane_vc_t3

0x0002,

0xf7d3,	// (0x00019f56) list_setting_number_pane_vc_t_ParamLimits

0xf7d3,	// (0x00019f56) list_setting_number_pane_vc_t

0x8a81,	// (0x00013204) set_value_pane_vc_ParamLimits

0x8a81,	// (0x00013204) set_value_pane_vc

0x9f27,	// (0x000146aa) list_double2_graphic_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double2_graphic_pane_vc

0x9f3a,	// (0x000146bd) list_double2_large_graphic_pane_vc_ParamLimits

0x9f3a,	// (0x000146bd) list_double2_large_graphic_pane_vc

0x9f27,	// (0x000146aa) list_double2_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double2_pane_vc

0x9f27,	// (0x000146aa) list_double_graphic_heading_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_graphic_heading_pane_vc

0x9f27,	// (0x000146aa) list_double_graphic_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_graphic_pane_vc

0x9f27,	// (0x000146aa) list_double_heading_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_heading_pane_vc

0x9f4b,	// (0x000146ce) list_double_large_graphic_pane_vc_ParamLimits

0x9f4b,	// (0x000146ce) list_double_large_graphic_pane_vc

0x9f27,	// (0x000146aa) list_double_number_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_number_pane_vc

0x9f27,	// (0x000146aa) list_double_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_pane_vc

0x9f27,	// (0x000146aa) list_double_time_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_double_time_pane_vc

0x9f27,	// (0x000146aa) list_setting_number_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_setting_number_pane_vc

0x9f27,	// (0x000146aa) list_setting_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_setting_pane_vc

0x9f27,	// (0x000146aa) list_single_graphic_heading_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_single_graphic_heading_pane_vc

0x9f27,	// (0x000146aa) list_single_heading_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_single_heading_pane_vc

0x9f27,	// (0x000146aa) list_single_number_heading_pane_vc_ParamLimits

0x9f27,	// (0x000146aa) list_single_number_heading_pane_vc

0x7057,	// (0x000117da) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x7057,	// (0x000117da) list_double_graphic_heading_pane_vc_g1

0x7063,	// (0x000117e6) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x7063,	// (0x000117e6) list_double_graphic_heading_pane_vc_g2

0x6f8e,	// (0x00011711) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x6f8e,	// (0x00011711) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf5c1,	// (0x00019d44) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019d44) list_double_graphic_heading_pane_vc_g

0xa45a,	// (0x00014bdd) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xa45a,	// (0x00014bdd) list_double_graphic_heading_pane_vc_t1

0xa470,	// (0x00014bf3) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xa470,	// (0x00014bf3) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9d8,	// (0x0001a15b) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9d8,	// (0x0001a15b) list_double_graphic_heading_pane_vc_t

0x8a13,	// (0x00013196) list_setting_pane_vc_g1_ParamLimits

0x8a13,	// (0x00013196) list_setting_pane_vc_g1

0x8a1f,	// (0x000131a2) list_setting_pane_vc_g2_ParamLimits

0x8a1f,	// (0x000131a2) list_setting_pane_vc_g2

0x0001,

0xf7ce,	// (0x00019f51) list_setting_pane_vc_g_ParamLimits

0xf7ce,	// (0x00019f51) list_setting_pane_vc_g

0xa665,	// (0x00014de8) list_setting_pane_vc_t1_ParamLimits

0xa665,	// (0x00014de8) list_setting_pane_vc_t1

0xa679,	// (0x00014dfc) list_setting_pane_vc_t2_ParamLimits

0xa679,	// (0x00014dfc) list_setting_pane_vc_t2

0x0001,

0xfa1b,	// (0x0001a19e) list_setting_pane_vc_t_ParamLimits

0xfa1b,	// (0x0001a19e) list_setting_pane_vc_t

0x8a81,	// (0x00013204) set_value_pane_cp_vc_ParamLimits

0x8a81,	// (0x00013204) set_value_pane_cp_vc

0x7063,	// (0x000117e6) list_single_number_heading_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_single_number_heading_pane_vc_g1

0x6f8e,	// (0x00011711) list_single_number_heading_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_single_number_heading_pane_vc_g

0x89eb,	// (0x0001316e) list_single_number_heading_pane_vc_t1_ParamLimits

0x89eb,	// (0x0001316e) list_single_number_heading_pane_vc_t1

0xa69b,	// (0x00014e1e) list_single_number_heading_pane_vc_t2_ParamLimits

0xa69b,	// (0x00014e1e) list_single_number_heading_pane_vc_t2

0xa6ad,	// (0x00014e30) list_single_number_heading_pane_vc_t3_ParamLimits

0xa6ad,	// (0x00014e30) list_single_number_heading_pane_vc_t3

0x0002,

0xfa20,	// (0x0001a1a3) list_single_number_heading_pane_vc_t_ParamLimits

0xfa20,	// (0x0001a1a3) list_single_number_heading_pane_vc_t

0x7057,	// (0x000117da) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x7057,	// (0x000117da) list_single_graphic_heading_pane_vc_g1

0x7063,	// (0x000117e6) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x7063,	// (0x000117e6) list_single_graphic_heading_pane_vc_g4

0x6f8e,	// (0x00011711) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x6f8e,	// (0x00011711) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf5c1,	// (0x00019d44) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf5c1,	// (0x00019d44) list_single_graphic_heading_pane_vc_g

0x89eb,	// (0x0001316e) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x89eb,	// (0x0001316e) list_single_graphic_heading_pane_vc_t1

0xa6bf,	// (0x00014e42) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xa6bf,	// (0x00014e42) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa27,	// (0x0001a1aa) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa27,	// (0x0001a1aa) list_single_graphic_heading_pane_vc_t

0x7063,	// (0x000117e6) list_double2_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_double2_pane_vc_g1

0x6f8e,	// (0x00011711) list_double2_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_double2_pane_vc_g

0x6f9a,	// (0x0001171d) list_double2_pane_vc_t1_ParamLimits

0x6f9a,	// (0x0001171d) list_double2_pane_vc_t1

0x6efd,	// (0x00011680) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x6efd,	// (0x00011680) list_double2_large_graphic_pane_vc_g1

0x6f09,	// (0x0001168c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x6f09,	// (0x0001168c) list_double2_large_graphic_pane_vc_g2

0x6f15,	// (0x00011698) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x6f15,	// (0x00011698) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x00019d68) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x00019d68) list_double2_large_graphic_pane_vc_g

0x6f29,	// (0x000116ac) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x6f29,	// (0x000116ac) list_double2_large_graphic_pane_vc_t1

0xa6d1,	// (0x00014e54) list_double_time_pane_vc_g1_ParamLimits

0xa6d1,	// (0x00014e54) list_double_time_pane_vc_g1

0xa6dd,	// (0x00014e60) list_double_time_pane_vc_g2_ParamLimits

0xa6dd,	// (0x00014e60) list_double_time_pane_vc_g2

0x0001,

0xfa2c,	// (0x0001a1af) list_double_time_pane_vc_g_ParamLimits

0xfa2c,	// (0x0001a1af) list_double_time_pane_vc_g

0xa6e9,	// (0x00014e6c) list_double_time_pane_vc_t1_ParamLimits

0xa6e9,	// (0x00014e6c) list_double_time_pane_vc_t1

0xa707,	// (0x00014e8a) list_double_time_pane_vc_t2_ParamLimits

0xa707,	// (0x00014e8a) list_double_time_pane_vc_t2

0xa72b,	// (0x00014eae) list_double_time_pane_vc_t3_ParamLimits

0xa72b,	// (0x00014eae) list_double_time_pane_vc_t3

0xa73d,	// (0x00014ec0) list_double_time_pane_vc_t4_ParamLimits

0xa73d,	// (0x00014ec0) list_double_time_pane_vc_t4

0x0003,

0xfa31,	// (0x0001a1b4) list_double_time_pane_vc_t_ParamLimits

0xfa31,	// (0x0001a1b4) list_double_time_pane_vc_t

0x7063,	// (0x000117e6) list_double_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_double_pane_vc_g1

0x6f8e,	// (0x00011711) list_double_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_double_pane_vc_g

0xa74f,	// (0x00014ed2) list_double_pane_vc_t1_ParamLimits

0xa74f,	// (0x00014ed2) list_double_pane_vc_t1

0xa761,	// (0x00014ee4) list_double_pane_vc_t2_ParamLimits

0xa761,	// (0x00014ee4) list_double_pane_vc_t2

0x0001,

0xfa3a,	// (0x0001a1bd) list_double_pane_vc_t_ParamLimits

0xfa3a,	// (0x0001a1bd) list_double_pane_vc_t

0x7063,	// (0x000117e6) list_double_number_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_double_number_pane_vc_g1

0x6f8e,	// (0x00011711) list_double_number_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_double_number_pane_vc_g

0xa777,	// (0x00014efa) list_double_number_pane_vc_t1_ParamLimits

0xa777,	// (0x00014efa) list_double_number_pane_vc_t1

0xa78b,	// (0x00014f0e) list_double_number_pane_vc_t2_ParamLimits

0xa78b,	// (0x00014f0e) list_double_number_pane_vc_t2

0xa79d,	// (0x00014f20) list_double_number_pane_vc_t3_ParamLimits

0xa79d,	// (0x00014f20) list_double_number_pane_vc_t3

0x0002,

0xfa3f,	// (0x0001a1c2) list_double_number_pane_vc_t_ParamLimits

0xfa3f,	// (0x0001a1c2) list_double_number_pane_vc_t

0xa7b3,	// (0x00014f36) list_double_large_graphic_pane_vc_g1_ParamLimits

0xa7b3,	// (0x00014f36) list_double_large_graphic_pane_vc_g1

0xa7db,	// (0x00014f5e) list_double_large_graphic_pane_vc_g2_ParamLimits

0xa7db,	// (0x00014f5e) list_double_large_graphic_pane_vc_g2

0xa7ef,	// (0x00014f72) list_double_large_graphic_pane_vc_g3_ParamLimits

0xa7ef,	// (0x00014f72) list_double_large_graphic_pane_vc_g3

0xa7fe,	// (0x00014f81) list_double_large_graphic_pane_vc_g4_ParamLimits

0xa7fe,	// (0x00014f81) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa46,	// (0x0001a1c9) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa46,	// (0x0001a1c9) list_double_large_graphic_pane_vc_g

0xa80e,	// (0x00014f91) list_double_large_graphic_pane_vc_t1_ParamLimits

0xa80e,	// (0x00014f91) list_double_large_graphic_pane_vc_t1

0xa828,	// (0x00014fab) list_double_large_graphic_pane_vc_t2_ParamLimits

0xa828,	// (0x00014fab) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa4f,	// (0x0001a1d2) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa4f,	// (0x0001a1d2) list_double_large_graphic_pane_vc_t

0x7063,	// (0x000117e6) list_double_heading_pane_vc_g1_ParamLimits

0x7063,	// (0x000117e6) list_double_heading_pane_vc_g1

0x6f8e,	// (0x00011711) list_double_heading_pane_vc_g2_ParamLimits

0x6f8e,	// (0x00011711) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x00019d4b) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x00019d4b) list_double_heading_pane_vc_g

0xa848,	// (0x00014fcb) list_double_heading_pane_vc_t1_ParamLimits

0xa848,	// (0x00014fcb) list_double_heading_pane_vc_t1

0x89eb,	// (0x0001316e) list_double_heading_pane_vc_t2_ParamLimits

0x89eb,	// (0x0001316e) list_double_heading_pane_vc_t2

0x0001,

0xfa54,	// (0x0001a1d7) list_double_heading_pane_vc_t_ParamLimits

0xfa54,	// (0x0001a1d7) list_double_heading_pane_vc_t

0xa85a,	// (0x00014fdd) list_double_graphic_pane_vc_g1_ParamLimits

0xa85a,	// (0x00014fdd) list_double_graphic_pane_vc_g1

0xa866,	// (0x00014fe9) list_double_graphic_pane_vc_g2_ParamLimits

0xa866,	// (0x00014fe9) list_double_graphic_pane_vc_g2

0x7063,	// (0x000117e6) list_double_graphic_pane_vc_g3_ParamLimits

0x7063,	// (0x000117e6) list_double_graphic_pane_vc_g3

0x0003,

0xfa59,	// (0x0001a1dc) list_double_graphic_pane_vc_g_ParamLimits

0xfa59,	// (0x0001a1dc) list_double_graphic_pane_vc_g

0xa883,	// (0x00015006) list_double_graphic_pane_vc_t1_ParamLimits

0xa883,	// (0x00015006) list_double_graphic_pane_vc_t1

0xa8a1,	// (0x00015024) list_double_graphic_pane_vc_t2_ParamLimits

0xa8a1,	// (0x00015024) list_double_graphic_pane_vc_t2

0x0001,

0xfa62,	// (0x0001a1e5) list_double_graphic_pane_vc_t_ParamLimits

0xfa62,	// (0x0001a1e5) list_double_graphic_pane_vc_t

0x437a,	// (0x0000eafd) aid_size_cell_fastswap

0xdb25,	// (0x000182a8) aid_size_cell_touch_ParamLimits

0xdb25,	// (0x000182a8) aid_size_cell_touch

0x44d1,	// (0x0000ec54) popup_fast_swap_wide_window_ParamLimits

0x44d1,	// (0x0000ec54) popup_fast_swap_wide_window

0xdc1d,	// (0x000183a0) touch_pane_ParamLimits

0xdc1d,	// (0x000183a0) touch_pane

0x72fb,	// (0x00011a7e) button_value_adjust_pane_cp2

0x7303,	// (0x00011a86) button_value_adjust_pane_cp4

0x7323,	// (0x00011aa6) form_field_data_pane_cp2

0x0b71,	// (0x0000b2f4) form_field_data_wide_pane_cp2

0x799b,	// (0x0001211e) bg_scroll_pane_ParamLimits

0x47be,	// (0x0000ef41) scroll_handle_pane_ParamLimits

0x47d2,	// (0x0000ef55) scroll_sc2_down_pane_ParamLimits

0x47d2,	// (0x0000ef55) scroll_sc2_down_pane

0x79cc,	// (0x0001214f) scroll_sc2_up_pane_ParamLimits

0x79cc,	// (0x0001214f) scroll_sc2_up_pane

0x236c,	// (0x0000caef) grid_wheel_folder_pane_g1_ParamLimits

0x236c,	// (0x0000caef) grid_wheel_folder_pane_g1

0x4986,	// (0x0000f109) clock_nsta_pane_cp2_ParamLimits

0x4986,	// (0x0000f109) clock_nsta_pane_cp2

0x0fc6,	// (0x0000b749) listscroll_midp_pane_ParamLimits

0x0fd5,	// (0x0000b758) midp_canvas_pane

0x4bcd,	// (0x0000f350) nsta_clock_indic_pane

0x84ab,	// (0x00012c2e) listscroll_form_pane_vc

0x84c8,	// (0x00012c4b) listscroll_set_pane_vc_ParamLimits

0x84c8,	// (0x00012c4b) listscroll_set_pane_vc

0x1904,	// (0x0000c087) clock_nsta_pane

0x1927,	// (0x0000c0aa) indicator_nsta_pane

0x88ed,	// (0x00013070) bg_popup_sub_pane_cp2_ParamLimits

0x8901,	// (0x00013084) find_pane_cp2_ParamLimits

0x8901,	// (0x00013084) find_pane_cp2

0x8913,	// (0x00013096) grid_toobar_pane_ParamLimits

0x8a8d,	// (0x00013210) list_form_gen_pane_vc_ParamLimits

0x8a8d,	// (0x00013210) list_form_gen_pane_vc

0x8aa3,	// (0x00013226) scroll_pane_cp8_vc_ParamLimits

0x8aa3,	// (0x00013226) scroll_pane_cp8_vc

0x8b1f,	// (0x000132a2) data_form_wide_pane_vc_ParamLimits

0x8b1f,	// (0x000132a2) data_form_wide_pane_vc

0x8b2b,	// (0x000132ae) form_field_data_wide_pane_vc_g1

0x8b33,	// (0x000132b6) form_field_data_wide_pane_vc_t1_ParamLimits

0x8b33,	// (0x000132b6) form_field_data_wide_pane_vc_t1

0x73cb,	// (0x00011b4e) input_focus_pane_cp6_vc_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_cp6_vc

0x1c8a,	// (0x0000c40d) list_midp_pane_ParamLimits

0xa12d,	// (0x000148b0) scroll_pane_cp16_ParamLimits

0xa12d,	// (0x000148b0) scroll_pane_cp16

0x8e95,	// (0x00013618) button_value_adjust_pane_ParamLimits

0x8e95,	// (0x00013618) button_value_adjust_pane

0x1fa9,	// (0x0000c72c) button_value_adjust_pane_cp6_ParamLimits

0x1fa9,	// (0x0000c72c) button_value_adjust_pane_cp6

0x20b3,	// (0x0000c836) settings_code_pane_cp_ParamLimits

0x20b3,	// (0x0000c836) settings_code_pane_cp

0x64f4,	// (0x00010c77) cell_touch_pane_g1

0x64f4,	// (0x00010c77) cell_touch_pane_g2

0x0001,

0xf6f4,	// (0x00019e77) cell_touch_pane_g

0x2264,	// (0x0000c9e7) cell_touch_pane_cp_ParamLimits

0x2264,	// (0x0000c9e7) cell_touch_pane_cp

0x2280,	// (0x0000ca03) cell_touch_pane_ParamLimits

0x2280,	// (0x0000ca03) cell_touch_pane

0x64f4,	// (0x00010c77) scroll_sc2_down_pane_g1

0x64f4,	// (0x00010c77) scroll_sc2_up_pane_g1

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp4_vc

0xa488,	// (0x00014c0b) list_set_graphic_pane_vc_g1_ParamLimits

0xa488,	// (0x00014c0b) list_set_graphic_pane_vc_g1

0xa494,	// (0x00014c17) list_set_graphic_pane_vc_g2_ParamLimits

0xa494,	// (0x00014c17) list_set_graphic_pane_vc_g2

0x0001,

0xf9dd,	// (0x0001a160) list_set_graphic_pane_vc_g_ParamLimits

0xf9dd,	// (0x0001a160) list_set_graphic_pane_vc_g

0xa4a0,	// (0x00014c23) text_primary_small_cp13_vc_ParamLimits

0xa4a0,	// (0x00014c23) text_primary_small_cp13_vc

0xa4b8,	// (0x00014c3b) list_set_graphic_pane_vc_ParamLimits

0xa4b8,	// (0x00014c3b) list_set_graphic_pane_vc

0x65db,	// (0x00010d5e) input_focus_pane_cp2_vc

0x64f4,	// (0x00010c77) setting_code_pane_vc_g1

0xa4cb,	// (0x00014c4e) setting_code_pane_vc_t1

0xa4d9,	// (0x00014c5c) set_text_pane_vc_t1_ParamLimits

0xa4d9,	// (0x00014c5c) set_text_pane_vc_t1

0x65db,	// (0x00010d5e) input_focus_pane_cp1_vc

0xa4f4,	// (0x00014c77) list_set_text_pane_vc

0x64f4,	// (0x00010c77) setting_text_pane_vc_g1

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp2_vc

0xa4fe,	// (0x00014c81) setting_slider_graphic_pane_vc_g1

0xa506,	// (0x00014c89) setting_slider_graphic_pane_vc_t1

0xa514,	// (0x00014c97) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9e2,	// (0x0001a165) setting_slider_graphic_pane_vc_t

0xa522,	// (0x00014ca5) slider_set_pane_cp_vc

0xa52a,	// (0x00014cad) slider_set_pane_vc_g1

0xa533,	// (0x00014cb6) slider_set_pane_vc_g2

0x0006,

0xf9e7,	// (0x0001a16a) slider_set_pane_vc_g

0x74ee,	// (0x00011c71) set_opt_bg_pane_g1_copy1

0x74f6,	// (0x00011c79) set_opt_bg_pane_g2_copy1

0xa55f,	// (0x00014ce2) set_opt_bg_pane_g3_copy1

0x7506,	// (0x00011c89) set_opt_bg_pane_g4_copy1

0x750e,	// (0x00011c91) set_opt_bg_pane_g5_copy1

0x7516,	// (0x00011c99) set_opt_bg_pane_g6_copy1

0xa567,	// (0x00014cea) set_opt_bg_pane_g7_copy1

0xa56f,	// (0x00014cf2) set_opt_bg_pane_g8_copy1

0xa577,	// (0x00014cfa) set_opt_bg_pane_g9_copy1

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp_vc

0xa57f,	// (0x00014d02) setting_slider_pane_vc_t1

0xa506,	// (0x00014c89) setting_slider_pane_vc_t2

0xa514,	// (0x00014c97) setting_slider_pane_vc_t3

0x0002,

0xf9f6,	// (0x0001a179) setting_slider_pane_vc_t

0xa522,	// (0x00014ca5) slider_set_pane_vc

0x5232,	// (0x0000f9b5) volume_set_pane_vc_g1

0x5519,	// (0x0000fc9c) volume_set_pane_vc_g2

0x5522,	// (0x0000fca5) volume_set_pane_vc_g3

0x552b,	// (0x0000fcae) volume_set_pane_vc_g4

0x5534,	// (0x0000fcb7) volume_set_pane_vc_g5

0x553d,	// (0x0000fcc0) volume_set_pane_vc_g6

0x5546,	// (0x0000fcc9) volume_set_pane_vc_g7

0x554f,	// (0x0000fcd2) volume_set_pane_vc_g8

0x5558,	// (0x0000fcdb) volume_set_pane_vc_g9

0x5561,	// (0x0000fce4) volume_set_pane_vc_g10

0x0009,

0xf9fd,	// (0x0001a180) volume_set_pane_vc_g

0xa58e,	// (0x00014d11) volume_set_pane_vc

0xa596,	// (0x00014d19) button_value_adjust_pane_cp1_vc

0xa5a0,	// (0x00014d23) list_highlight_pane_cp2_vc

0xa5a9,	// (0x00014d2c) list_set_pane_vc_ParamLimits

0xa5a9,	// (0x00014d2c) list_set_pane_vc

0xa5fb,	// (0x00014d7e) main_pane_set_vc_t1_ParamLimits

0xa5fb,	// (0x00014d7e) main_pane_set_vc_t1

0xa610,	// (0x00014d93) main_pane_set_vc_t2_ParamLimits

0xa610,	// (0x00014d93) main_pane_set_vc_t2

0xa622,	// (0x00014da5) main_pane_set_vc_t3_ParamLimits

0xa622,	// (0x00014da5) main_pane_set_vc_t3

0xa634,	// (0x00014db7) main_pane_set_vc_t4_ParamLimits

0xa634,	// (0x00014db7) main_pane_set_vc_t4

0x0003,

0xfa12,	// (0x0001a195) main_pane_set_vc_t_ParamLimits

0xfa12,	// (0x0001a195) main_pane_set_vc_t

0xa646,	// (0x00014dc9) setting_code_pane_vc_ParamLimits

0xa646,	// (0x00014dc9) setting_code_pane_vc

0xa655,	// (0x00014dd8) setting_slider_graphic_pane_vc

0xa655,	// (0x00014dd8) setting_slider_pane_vc

0xa655,	// (0x00014dd8) setting_text_pane_vc

0xa655,	// (0x00014dd8) setting_volume_pane_vc

0xa65d,	// (0x00014de0) scroll_pane_cp121_vc

0x72f2,	// (0x00011a75) set_content_pane_vc

0xa8bf,	// (0x00015042) button_value_adjust_pane_g1

0xa8c8,	// (0x0001504b) button_value_adjust_pane_g2

0x0001,

0xfa67,	// (0x0001a1ea) button_value_adjust_pane_g

0xa8d1,	// (0x00015054) form_field_slider_wide_pane_vc_t1_ParamLimits

0xa8d1,	// (0x00015054) form_field_slider_wide_pane_vc_t1

0xa8e7,	// (0x0001506a) form_field_slider_wide_pane_vc_t2_ParamLimits

0xa8e7,	// (0x0001506a) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa6c,	// (0x0001a1ef) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa6c,	// (0x0001a1ef) form_field_slider_wide_pane_vc_t

0x6954,	// (0x000110d7) input_focus_pane_cp10_vc_ParamLimits

0x6954,	// (0x000110d7) input_focus_pane_cp10_vc

0xa912,	// (0x00015095) slider_cont_pane_cp1_vc_ParamLimits

0xa912,	// (0x00015095) slider_cont_pane_cp1_vc

0xa52a,	// (0x00014cad) slider_form_pane_g1_cp2

0xa533,	// (0x00014cb6) slider_form_pane_g2_cp2

0xa92d,	// (0x000150b0) form_field_slider_pane_vc_t3

0xa93b,	// (0x000150be) form_field_slider_pane_vc_t4

0xa949,	// (0x000150cc) slider_form_pane_vc_ParamLimits

0xa949,	// (0x000150cc) slider_form_pane_vc

0xa956,	// (0x000150d9) form_field_slider_pane_vc_t1_ParamLimits

0xa956,	// (0x000150d9) form_field_slider_pane_vc_t1

0xa96c,	// (0x000150ef) form_field_slider_pane_vc_t2_ParamLimits

0xa96c,	// (0x000150ef) form_field_slider_pane_vc_t2

0x0001,

0xfa7e,	// (0x0001a201) form_field_slider_pane_vc_t_ParamLimits

0xfa7e,	// (0x0001a201) form_field_slider_pane_vc_t

0x6954,	// (0x000110d7) input_focus_pane_cp9_vc_ParamLimits

0x6954,	// (0x000110d7) input_focus_pane_cp9_vc

0xa97e,	// (0x00015101) slider_cont_pane_vc_ParamLimits

0xa97e,	// (0x00015101) slider_cont_pane_vc

0xa990,	// (0x00015113) list_form_graphic_pane_cp_vc_ParamLimits

0xa990,	// (0x00015113) list_form_graphic_pane_cp_vc

0x8b2b,	// (0x000132ae) form_field_popup_wide_pane_vc_g1

0xa9a5,	// (0x00015128) form_field_popup_wide_pane_vc_t1_ParamLimits

0xa9a5,	// (0x00015128) form_field_popup_wide_pane_vc_t1

0x73cb,	// (0x00011b4e) input_focus_pane_cp8_vc_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_cp8_vc

0xa9e4,	// (0x00015167) list_form_wide_pane_vc_ParamLimits

0xa9e4,	// (0x00015167) list_form_wide_pane_vc

0xa9f0,	// (0x00015173) list_form_graphic_pane_vc_g1

0xa9f8,	// (0x0001517b) list_form_graphic_pane_vc_t1_ParamLimits

0xa9f8,	// (0x0001517b) list_form_graphic_pane_vc_t1

0x66bb,	// (0x00010e3e) list_highlight_pane_cp5_vc_ParamLimits

0x66bb,	// (0x00010e3e) list_highlight_pane_cp5_vc

0xaa14,	// (0x00015197) list_form_graphic_pane_vc_ParamLimits

0xaa14,	// (0x00015197) list_form_graphic_pane_vc

0x8b2b,	// (0x000132ae) form_field_popup_pane_vc_g1

0xaa2a,	// (0x000151ad) form_field_popup_pane_vc_t1_ParamLimits

0xaa2a,	// (0x000151ad) form_field_popup_pane_vc_t1

0x73cb,	// (0x00011b4e) input_focus_pane_cp7_vc_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_cp7_vc

0xaa3f,	// (0x000151c2) list_form_pane_vc_ParamLimits

0xaa3f,	// (0x000151c2) list_form_pane_vc

0xaa4b,	// (0x000151ce) data_form_pane_vc_t1_ParamLimits

0xaa4b,	// (0x000151ce) data_form_pane_vc_t1

0x74ee,	// (0x00011c71) input_focus_pane_vc_g1

0x74f6,	// (0x00011c79) input_focus_pane_vc_g2

0x74fe,	// (0x00011c81) input_focus_pane_vc_g3

0x7506,	// (0x00011c89) input_focus_pane_vc_g4

0x750e,	// (0x00011c91) input_focus_pane_vc_g5

0x7516,	// (0x00011c99) input_focus_pane_vc_g6

0x751e,	// (0x00011ca1) input_focus_pane_vc_g7

0x7526,	// (0x00011ca9) input_focus_pane_vc_g8

0x752e,	// (0x00011cb1) input_focus_pane_vc_g9

0x64f4,	// (0x00010c77) input_focus_pane_vc_g10

0x0009,

0xf67d,	// (0x00019e00) input_focus_pane_vc_g

0x8b1f,	// (0x000132a2) data_form_pane_vc_ParamLimits

0x8b1f,	// (0x000132a2) data_form_pane_vc

0x8b2b,	// (0x000132ae) form_field_data_pane_vc_g1

0xaa66,	// (0x000151e9) form_field_data_pane_vc_t1_ParamLimits

0xaa66,	// (0x000151e9) form_field_data_pane_vc_t1

0x73cb,	// (0x00011b4e) input_focus_pane_vc_ParamLimits

0x73cb,	// (0x00011b4e) input_focus_pane_vc

0x72fb,	// (0x00011a7e) button_value_adjust_pane_cp3_vc

0xaa7c,	// (0x000151ff) button_value_adjust_pane_cp5_vc

0xaa84,	// (0x00015207) form_field_data_pane_vc_ParamLimits

0xaa84,	// (0x00015207) form_field_data_pane_vc

0x7323,	// (0x00011aa6) form_field_data_pane_vc_cp2

0xaa9b,	// (0x0001521e) form_field_data_wide_pane_vc_ParamLimits

0xaa9b,	// (0x0001521e) form_field_data_wide_pane_vc

0xaab1,	// (0x00015234) form_field_data_wide_pane_vc_cp2

0xaab9,	// (0x0001523c) form_field_popup_pane_vc_ParamLimits

0xaab9,	// (0x0001523c) form_field_popup_pane_vc

0xaad0,	// (0x00015253) form_field_popup_wide_pane_vc_ParamLimits

0xaad0,	// (0x00015253) form_field_popup_wide_pane_vc

0xaae6,	// (0x00015269) form_field_slider_pane_vc_ParamLimits

0xaae6,	// (0x00015269) form_field_slider_pane_vc

0xaaf9,	// (0x0001527c) form_field_slider_wide_pane_vc_ParamLimits

0xaaf9,	// (0x0001527c) form_field_slider_wide_pane_vc

0x229e,	// (0x0000ca21) grid_touch_1_pane_ParamLimits

0x229e,	// (0x0000ca21) grid_touch_1_pane

0x22b2,	// (0x0000ca35) grid_touch_2_pane_ParamLimits

0x22b2,	// (0x0000ca35) grid_touch_2_pane

0xabc6,	// (0x00015349) touch_pane_g1_ParamLimits

0xabc6,	// (0x00015349) touch_pane_g1

0xab30,	// (0x000152b3) cell_app_pane_cp_wide_ParamLimits

0xab30,	// (0x000152b3) cell_app_pane_cp_wide

0xab40,	// (0x000152c3) grid_popup_fast_wide_pane_ParamLimits

0xab40,	// (0x000152c3) grid_popup_fast_wide_pane

0xab54,	// (0x000152d7) scroll_pane_cp19_ParamLimits

0xab54,	// (0x000152d7) scroll_pane_cp19

0x65db,	// (0x00010d5e) bg_popup_window_pane_cp20

0xab68,	// (0x000152eb) listscroll_popup_fast_wide_pane

0x76e0,	// (0x00011e63) grid_indicator_nsta_pane

0xab70,	// (0x000152f3) clock_nsta_pane_g1

0xab79,	// (0x000152fc) clock_nsta_pane_t1

0x22dc,	// (0x0000ca5f) cell_indicator_nsta_pane_ParamLimits

0x22dc,	// (0x0000ca5f) cell_indicator_nsta_pane

0xabc6,	// (0x00015349) cell_indicator_nsta_pane_g1

0x22f3,	// (0x0000ca76) cell_indicator_nsta_pane_g2

0x0001,

0xfa8f,	// (0x0001a212) cell_indicator_nsta_pane_g

0xabe1,	// (0x00015364) clock_nsta_pane_cp

0xabe9,	// (0x0001536c) indicator_nsta_pane_cp

0xabf2,	// (0x00015375) nsta_clock_indic_pane_g1

0x679b,	// (0x00010f1e) grid_indicator_pane

0x7abe,	// (0x00012241) scroll_pane_cp29

0x48dd,	// (0x0000f060) indicator_nsta_pane_cp2_ParamLimits

0x48dd,	// (0x0000f060) indicator_nsta_pane_cp2

0x66bb,	// (0x00010e3e) main_apps_wheel_pane

0x8d0a,	// (0x0001348d) form_midp_field_text_pane_ParamLimits

0x8e5b,	// (0x000135de) scroll_bar_cp050_ParamLimits

0xac5b,	// (0x000153de) cell_indicator_pane_ParamLimits

0xac5b,	// (0x000153de) cell_indicator_pane

0xac71,	// (0x000153f4) cell_indicator_pane_g1

0x2300,	// (0x0000ca83) grid_wheel_folder_pane_ParamLimits

0x2300,	// (0x0000ca83) grid_wheel_folder_pane

0x230e,	// (0x0000ca91) list_wheel_apps_pane_ParamLimits

0x230e,	// (0x0000ca91) list_wheel_apps_pane

0x231a,	// (0x0000ca9d) main_apps_wheel_pane_g1_ParamLimits

0x231a,	// (0x0000ca9d) main_apps_wheel_pane_g1

0x2326,	// (0x0000caa9) main_apps_wheel_pane_g2_ParamLimits

0x2326,	// (0x0000caa9) main_apps_wheel_pane_g2

0x0001,

0xfaab,	// (0x0001a22e) main_apps_wheel_pane_g_ParamLimits

0xfaab,	// (0x0001a22e) main_apps_wheel_pane_g

0x2332,	// (0x0000cab5) main_apps_wheel_pane_t1_ParamLimits

0x2332,	// (0x0000cab5) main_apps_wheel_pane_t1

0x2344,	// (0x0000cac7) list_wheel_apps_pane_g1

0x234c,	// (0x0000cacf) list_wheel_apps_pane_g2

0x2354,	// (0x0000cad7) list_wheel_apps_pane_g3

0x235c,	// (0x0000cadf) list_wheel_apps_pane_g4

0x2364,	// (0x0000cae7) list_wheel_apps_pane_g5

0x0004,

0xfab0,	// (0x0001a233) list_wheel_apps_pane_g

0x66bb,	// (0x00010e3e) navi_icon_text_pane

0x1810,	// (0x0000bf93) aid_fill_nsta

0xad22,	// (0x000154a5) navi_icon_text_pane_g1

0xad2e,	// (0x000154b1) navi_icon_text_pane_t1

0x7efd,	// (0x00012680) list_set_graphic_pane_t1_ParamLimits

0x7efd,	// (0x00012680) list_set_graphic_pane_t1

0x9575,	// (0x00013cf8) popup_midp_note_alarm_window_t6_ParamLimits

0x9575,	// (0x00013cf8) popup_midp_note_alarm_window_t6

0x9587,	// (0x00013d0a) popup_midp_note_alarm_window_t7_ParamLimits

0x9587,	// (0x00013d0a) popup_midp_note_alarm_window_t7

0x9599,	// (0x00013d1c) popup_midp_note_alarm_window_t8_ParamLimits

0x9599,	// (0x00013d1c) popup_midp_note_alarm_window_t8

0x95ab,	// (0x00013d2e) popup_midp_note_alarm_window_t9_ParamLimits

0x95ab,	// (0x00013d2e) popup_midp_note_alarm_window_t9

0x95bd,	// (0x00013d40) popup_midp_note_alarm_window_t10_ParamLimits

0x95bd,	// (0x00013d40) popup_midp_note_alarm_window_t10

0x95cf,	// (0x00013d52) popup_midp_note_alarm_window_t11_ParamLimits

0x95cf,	// (0x00013d52) popup_midp_note_alarm_window_t11

0x95e1,	// (0x00013d64) scroll_pane_cp17_ParamLimits

0x95e1,	// (0x00013d64) scroll_pane_cp17

0x5232,	// (0x0000f9b5) volume_small_pane_cp_g1

0x556a,	// (0x0000fced) volume_small_pane_cp_g2

0x5573,	// (0x0000fcf6) volume_small_pane_cp_g3

0x557c,	// (0x0000fcff) volume_small_pane_cp_g4

0x525f,	// (0x0000f9e2) volume_small_pane_cp_g5

0x5585,	// (0x0000fd08) volume_small_pane_cp_g6

0x558e,	// (0x0000fd11) volume_small_pane_cp_g7

0x5597,	// (0x0000fd1a) volume_small_pane_cp_g8

0x55a0,	// (0x0000fd23) volume_small_pane_cp_g9

0x55a9,	// (0x0000fd2c) volume_small_pane_cp_g10

0x825c,	// (0x000129df) midp_ticker_pane_g1_ParamLimits

0x8268,	// (0x000129eb) midp_ticker_pane_g2_ParamLimits

0xf749,	// (0x00019ecc) midp_ticker_pane_g_ParamLimits

0x8274,	// (0x000129f7) midp_ticker_pane_t1_ParamLimits

0x1826,	// (0x0000bfa9) aid_fill_nsta_2

0x8e47,	// (0x000135ca) list_form2_midp_pane

0x9ef6,	// (0x00014679) midp_editing_number_pane_ParamLimits

0x9f02,	// (0x00014685) midp_ticker_pane_ParamLimits

0xad40,	// (0x000154c3) form2_midp_field_pane

0xad64,	// (0x000154e7) scroll_pane_cp51

0xad84,	// (0x00015507) form2_midp_button_pane_ParamLimits

0xad84,	// (0x00015507) form2_midp_button_pane

0xad96,	// (0x00015519) form2_midp_content_pane_ParamLimits

0xad96,	// (0x00015519) form2_midp_content_pane

0xadb0,	// (0x00015533) form2_midp_field_choice_group_pane

0xadb8,	// (0x0001553b) form2_midp_field_pane_g1

0xadc0,	// (0x00015543) form2_midp_field_pane_g2

0xadc8,	// (0x0001554b) form2_midp_field_pane_g3

0xadd0,	// (0x00015553) form2_midp_field_pane_g4

0x0003,

0xfad5,	// (0x0001a258) form2_midp_field_pane_g

0xadd8,	// (0x0001555b) form2_midp_gauge_slider_pane

0xade0,	// (0x00015563) form2_midp_gauge_wait_pane

0xade8,	// (0x0001556b) form2_midp_image_pane_ParamLimits

0xade8,	// (0x0001556b) form2_midp_image_pane

0xae03,	// (0x00015586) form2_midp_label_pane_ParamLimits

0xae03,	// (0x00015586) form2_midp_label_pane

0x2399,	// (0x0000cb1c) form2_midp_label_pane_cp_ParamLimits

0x2399,	// (0x0000cb1c) form2_midp_label_pane_cp

0xae3b,	// (0x000155be) form2_midp_string_pane_ParamLimits

0xae3b,	// (0x000155be) form2_midp_string_pane

0xae4d,	// (0x000155d0) form2_midp_text_pane_ParamLimits

0xae4d,	// (0x000155d0) form2_midp_text_pane

0xae66,	// (0x000155e9) form2_midp_time_pane

0xae76,	// (0x000155f9) input_focus_pane_cp51_ParamLimits

0xae76,	// (0x000155f9) input_focus_pane_cp51

0xae8e,	// (0x00015611) form2_midp_label_pane_t1_ParamLimits

0xae8e,	// (0x00015611) form2_midp_label_pane_t1

0x7536,	// (0x00011cb9) form2_mdip_text_pane_t1_ParamLimits

0x7536,	// (0x00011cb9) form2_mdip_text_pane_t1

0xaece,	// (0x00015651) form2_midp_time_pane_t1

0xaee9,	// (0x0001566c) form2_midp_gauge_slider_pane_t1

0x23b8,	// (0x0000cb3b) form2_midp_gauge_slider_pane_t2

0x23ca,	// (0x0000cb4d) form2_midp_gauge_slider_pane_t3

0x0002,

0xfade,	// (0x0001a261) form2_midp_gauge_slider_pane_t

0xaf1f,	// (0x000156a2) form2_midp_slider_pane

0xaf2b,	// (0x000156ae) form2_midp_gauge_wait_pane_t1

0xaf39,	// (0x000156bc) form2_midp_wait_pane_ParamLimits

0xaf39,	// (0x000156bc) form2_midp_wait_pane

0x8b69,	// (0x000132ec) list_single_2graphic_pane_cp4_ParamLimits

0x8b69,	// (0x000132ec) list_single_2graphic_pane_cp4

0xaf64,	// (0x000156e7) list_single_midp_graphic_pane_cp_ParamLimits

0xaf64,	// (0x000156e7) list_single_midp_graphic_pane_cp

0x65db,	// (0x00010d5e) list_highlight_pane_cp20

0xaf82,	// (0x00015705) list_single_2graphic_pane_g1_cp4

0xa066,	// (0x000147e9) list_single_2graphic_pane_g2_cp4

0xaf8a,	// (0x0001570d) list_single_2graphic_pane_t1_cp4

0x66bb,	// (0x00010e3e) list_highlight_pane_cp21

0xaf99,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp

0xafa8,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp

0xafbd,	// (0x00015740) form2_mdip_string_pane_t1_ParamLimits

0xafbd,	// (0x00015740) form2_mdip_string_pane_t1

0x65db,	// (0x00010d5e) bg_wml_button_pane_cp2

0x64f4,	// (0x00010c77) form2_midp_image_pane_g1

0x70e0,	// (0x00011863) list_double_large_graphic_pane_g5_ParamLimits

0x70e0,	// (0x00011863) list_double_large_graphic_pane_g5

0x0fc6,	// (0x0000b749) midp_form_pane_ParamLimits

0x66bb,	// (0x00010e3e) main_apps_wheel_pane_ParamLimits

0xe15b,	// (0x000188de) popup_preview_window_ParamLimits

0xe15b,	// (0x000188de) popup_preview_window

0x504c,	// (0x0000f7cf) popup_touch_info_window_ParamLimits

0x504c,	// (0x0000f7cf) popup_touch_info_window

0x506a,	// (0x0000f7ed) popup_touch_menu_window_ParamLimits

0x506a,	// (0x0000f7ed) popup_touch_menu_window

0x64ea,	// (0x00010c6d) bg_popup_sub_pane_cp6

0xb027,	// (0x000157aa) list_touch_menu_pane

0xb02f,	// (0x000157b2) list_single_touch_menu_pane_ParamLimits

0xb02f,	// (0x000157b2) list_single_touch_menu_pane

0xb046,	// (0x000157c9) list_single_touch_menu_pane_t1

0x66bb,	// (0x00010e3e) bg_popup_sub_pane_cp7_ParamLimits

0x66bb,	// (0x00010e3e) bg_popup_sub_pane_cp7

0xb054,	// (0x000157d7) heading_sub_pane

0xb05c,	// (0x000157df) list_touch_info_pane_ParamLimits

0xb05c,	// (0x000157df) list_touch_info_pane

0xb06b,	// (0x000157ee) list_single_touch_info_pane_ParamLimits

0xb06b,	// (0x000157ee) list_single_touch_info_pane

0xb07c,	// (0x000157ff) list_single_touch_info_pane_t1

0xb08a,	// (0x0001580d) list_single_touch_info_pane_t2

0x0001,

0xfaec,	// (0x0001a26f) list_single_touch_info_pane_t

0x818b,	// (0x0001290e) bg_popup_heading_pane_cp

0xb098,	// (0x0001581b) heading_sub_pane_t1

0x8ab9,	// (0x0001323c) bg_popup_preview_window_pane_cp_ParamLimits

0x8ab9,	// (0x0001323c) bg_popup_preview_window_pane_cp

0xb054,	// (0x000157d7) heading_preview_pane

0xb05c,	// (0x000157df) list_preview_pane_ParamLimits

0xb05c,	// (0x000157df) list_preview_pane

0xb0a6,	// (0x00015829) popup_preview_window_g1

0xb06b,	// (0x000157ee) list_single_preview_pane_ParamLimits

0xb06b,	// (0x000157ee) list_single_preview_pane

0xb0ae,	// (0x00015831) list_single_preview_pane_g1

0xb0b6,	// (0x00015839) list_single_preview_pane_t1

0xb07c,	// (0x000157ff) list_single_preview_pane_t2

0x0001,

0xfaf1,	// (0x0001a274) list_single_preview_pane_t

0xb0c4,	// (0x00015847) bg_popup_heading_pane_cp2_ParamLimits

0xb0c4,	// (0x00015847) bg_popup_heading_pane_cp2

0xb0da,	// (0x0001585d) heading_preview_pane_g1

0xb0e2,	// (0x00015865) heading_preview_pane_t1_ParamLimits

0xb0e2,	// (0x00015865) heading_preview_pane_t1

0x67be,	// (0x00010f41) soft_indicator_pane_t1_ParamLimits

0x6e21,	// (0x000115a4) scroll_pane_ParamLimits

0x79ba,	// (0x0001213d) scroll_sc2_left_pane

0x79c3,	// (0x00012146) scroll_sc2_right_pane

0x79e2,	// (0x00012165) scroll_bg_pane_g1_ParamLimits

0x79f7,	// (0x0001217a) scroll_bg_pane_g2_ParamLimits

0x7a0f,	// (0x00012192) scroll_bg_pane_g3_ParamLimits

0xf6d4,	// (0x00019e57) scroll_bg_pane_g_ParamLimits

0x79e2,	// (0x00012165) scroll_handle_pane_g1_ParamLimits

0x7a31,	// (0x000121b4) scroll_handle_pane_g2_ParamLimits

0x7a0f,	// (0x00012192) scroll_handle_pane_g3_ParamLimits

0xf6db,	// (0x00019e5e) scroll_handle_pane_g_ParamLimits

0x4c19,	// (0x0000f39c) popup_choice_list_window_ParamLimits

0x4c19,	// (0x0000f39c) popup_choice_list_window

0x88f9,	// (0x0001307c) choice_list_pane

0x896f,	// (0x000130f2) cell_toolbar_pane_t1

0x8997,	// (0x0001311a) toolbar_button_pane_ParamLimits

0x9a6a,	// (0x000141ed) ai_gene_pane_1_t2_ParamLimits

0x9a6a,	// (0x000141ed) ai_gene_pane_1_t2

0x0001,

0xf8f7,	// (0x0001a07a) ai_gene_pane_1_t_ParamLimits

0xf8f7,	// (0x0001a07a) ai_gene_pane_1_t

0xb0ff,	// (0x00015882) scroll_sc2_left_pane_g1

0xb0ff,	// (0x00015882) scroll_sc2_right_pane_g1

0x84da,	// (0x00012c5d) bg_popup_sub_pane_cp10

0xb109,	// (0x0001588c) list_choice_list_pane

0xb120,	// (0x000158a3) list_single_choice_list_pane_ParamLimits

0xb120,	// (0x000158a3) list_single_choice_list_pane

0xb132,	// (0x000158b5) list_single_choice_list_pane_g1

0x76b1,	// (0x00011e34) list_single_choice_list_pane_t1_ParamLimits

0x76b1,	// (0x00011e34) list_single_choice_list_pane_t1

0xb13a,	// (0x000158bd) choice_list_pane_g1

0xb142,	// (0x000158c5) choice_list_pane_t1

0x64ea,	// (0x00010c6d) input_focus_pane_cp11

0x7895,	// (0x00012018) title_pane_stacon_g2_ParamLimits

0x7895,	// (0x00012018) title_pane_stacon_g2

0x0002,

0xf6ba,	// (0x00019e3d) title_pane_stacon_g_ParamLimits

0xf6ba,	// (0x00019e3d) title_pane_stacon_g

0x818b,	// (0x0001290e) cursor_press_pane

0xdec2,	// (0x00018645) popup_fep_hwr_window_ParamLimits

0xdec2,	// (0x00018645) popup_fep_hwr_window

0x4d11,	// (0x0000f494) popup_fep_vkb_window_ParamLimits

0x4d11,	// (0x0000f494) popup_fep_vkb_window

0xb150,	// (0x000158d3) cursor_press_pane_g1

0x0002,

0xfb1a,	// (0x0001a29d) fep_vkb_side_pane_g_ParamLimits

0x55e7,	// (0x0000fd6a) fep_hwr_candidate_pane_ParamLimits

0x55e7,	// (0x0000fd6a) fep_hwr_candidate_pane

0x560f,	// (0x0000fd92) fep_hwr_side_pane_ParamLimits

0x560f,	// (0x0000fd92) fep_hwr_side_pane

0x562f,	// (0x0000fdb2) fep_hwr_top_pane_ParamLimits

0x562f,	// (0x0000fdb2) fep_hwr_top_pane

0x5647,	// (0x0000fdca) fep_hwr_write_pane_ParamLimits

0x5647,	// (0x0000fdca) fep_hwr_write_pane

0xfb1a,	// (0x0001a29d) fep_vkb_side_pane_g

0xb158,	// (0x000158db) fep_hwr_top_pane_g1

0xb16a,	// (0x000158ed) fep_hwr_top_pane_g2

0x5681,	// (0x0000fe04) fep_hwr_top_pane_g3

0x0002,

0xfaf6,	// (0x0001a279) fep_hwr_top_pane_g

0x5696,	// (0x0000fe19) fep_hwr_top_text_pane

0x7b86,	// (0x00012309) fep_hwr_top_text_pane_g1

0xb1a0,	// (0x00015923) fep_hwr_top_text_pane_t1

0x5784,	// (0x0000ff07) fep_hwr_candidate_pane_g1

0xb3b0,	// (0x00015b33) fep_vkb_keypad_pane_g3_ParamLimits

0xb3b0,	// (0x00015b33) fep_vkb_keypad_pane_g3

0xb3d2,	// (0x00015b55) fep_vkb_keypad_pane_g4_ParamLimits

0xb3d2,	// (0x00015b55) fep_vkb_keypad_pane_g4

0xb441,	// (0x00015bc4) fep_vkb_bottom_pane_g2_ParamLimits

0xb441,	// (0x00015bc4) fep_vkb_bottom_pane_g2

0x0001,

0xfb21,	// (0x0001a2a4) fep_vkb_bottom_pane_g_ParamLimits

0xfb21,	// (0x0001a2a4) fep_vkb_bottom_pane_g

0xb0ff,	// (0x00015882) cell_vkb_side_pane_g2

0x0001,

0xfb2b,	// (0x0001a2ae) cell_vkb_side_pane_g

0xb4cc,	// (0x00015c4f) cell_vkb_side_pane_t1

0xb4da,	// (0x00015c5d) cell_vkb_side_pane_t1_copy1

0xb0ff,	// (0x00015882) bg_fep_vkb_candidate_pane_g2

0xb5fe,	// (0x00015d81) cell_vkb_candidate_pane_ParamLimits

0xb1ae,	// (0x00015931) aid_size_cell_vkb_ParamLimits

0xb1ae,	// (0x00015931) aid_size_cell_vkb

0xb5fe,	// (0x00015d81) cell_vkb_candidate_pane

0x57ab,	// (0x0000ff2e) bg_popup_fep_shadow_pane_g1

0xb224,	// (0x000159a7) fep_vkb_bottom_pane_ParamLimits

0xb224,	// (0x000159a7) fep_vkb_bottom_pane

0xb261,	// (0x000159e4) fep_vkb_candidate_pane_ParamLimits

0xb261,	// (0x000159e4) fep_vkb_candidate_pane

0xb27d,	// (0x00015a00) fep_vkb_keypad_pane_ParamLimits

0xb27d,	// (0x00015a00) fep_vkb_keypad_pane

0xb2b1,	// (0x00015a34) fep_vkb_side_pane_ParamLimits

0xb2b1,	// (0x00015a34) fep_vkb_side_pane

0xb2dd,	// (0x00015a60) fep_vkb_top_pane_ParamLimits

0xb2dd,	// (0x00015a60) fep_vkb_top_pane

0xb309,	// (0x00015a8c) fep_vkb_top_pane_g1_ParamLimits

0xb309,	// (0x00015a8c) fep_vkb_top_pane_g1

0xb318,	// (0x00015a9b) fep_vkb_top_pane_g2_ParamLimits

0xb318,	// (0x00015a9b) fep_vkb_top_pane_g2

0xb327,	// (0x00015aaa) fep_vkb_top_pane_g3_ParamLimits

0xb327,	// (0x00015aaa) fep_vkb_top_pane_g3

0x0003,

0xfb11,	// (0x0001a294) fep_vkb_top_pane_g_ParamLimits

0xfb11,	// (0x0001a294) fep_vkb_top_pane_g

0xb345,	// (0x00015ac8) fep_vkb_top_text_pane_ParamLimits

0xb345,	// (0x00015ac8) fep_vkb_top_text_pane

0x2439,	// (0x0000cbbc) fep_vkb_side_pane_g1_ParamLimits

0x2439,	// (0x0000cbbc) fep_vkb_side_pane_g1

0xb39f,	// (0x00015b22) grid_vkb_side_pane_ParamLimits

0xb39f,	// (0x00015b22) grid_vkb_side_pane

0x57b3,	// (0x0000ff36) bg_popup_fep_shadow_pane_g2

0x57bc,	// (0x0000ff3f) bg_popup_fep_shadow_pane_g3

0x57c4,	// (0x0000ff47) bg_popup_fep_shadow_pane_g4

0x57cd,	// (0x0000ff50) bg_popup_fep_shadow_pane_g5

0x57d5,	// (0x0000ff58) bg_popup_fep_shadow_pane_g6

0x57dd,	// (0x0000ff60) bg_popup_fep_shadow_pane_g7

0x7506,	// (0x00011c89) bg_popup_fep_shadow_pane_g8

0xb3f0,	// (0x00015b73) grid_vkb_keypad_number_pane_ParamLimits

0xb3f0,	// (0x00015b73) grid_vkb_keypad_number_pane

0xb400,	// (0x00015b83) grid_vkb_keypad_pane_ParamLimits

0xb400,	// (0x00015b83) grid_vkb_keypad_pane

0xb426,	// (0x00015ba9) fep_vkb_bottom_pane_g1_ParamLimits

0xb426,	// (0x00015ba9) fep_vkb_bottom_pane_g1

0xb44f,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0xb44f,	// (0x00015bd2) grid_vkb_keypad_bottom_left_pane

0xb464,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0xb464,	// (0x00015be7) grid_vkb_keypad_bottom_right_pane

0xb479,	// (0x00015bfc) fep_vkb_top_text_pane_g1

0x2480,	// (0x0000cc03) fep_vkb_top_text_pane_t1

0x2492,	// (0x0000cc15) cell_vkb_side_pane_ParamLimits

0x2492,	// (0x0000cc15) cell_vkb_side_pane

0xb0ff,	// (0x00015882) cell_vkb_side_pane_g1

0xb4e8,	// (0x00015c6b) cell_vkb_keypad_pane_ParamLimits

0xb4e8,	// (0x00015c6b) cell_vkb_keypad_pane

0xb555,	// (0x00015cd8) cell_vkb_keypad_pane_g1

0x0008,

0xfb3e,	// (0x0001a2c1) bg_popup_fep_shadow_pane_g

0x57ed,	// (0x0000ff70) cell_hwr_side_pane_g1

0x57ed,	// (0x0000ff70) cell_hwr_side_pane_g2

0xb55f,	// (0x00015ce2) cell_vkb_keypad_pane_t1

0x24a8,	// (0x0000cc2b) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x24a8,	// (0x0000cc2b) cell_vkb_keypad_bottom_left_pane

0x24bd,	// (0x0000cc40) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x24bd,	// (0x0000cc40) cell_vkb_keypad_bottom_right_pane

0xb0ff,	// (0x00015882) cell_vkb_keypad_bottom_left_pane_g1

0xb0ff,	// (0x00015882) cell_vkb_keypad_bottom_right_pane_g1

0xb5c3,	// (0x00015d46) cell_vkb_keypad_number_pane_ParamLimits

0xb5c3,	// (0x00015d46) cell_vkb_keypad_number_pane

0xb5e2,	// (0x00015d65) cell_vkb_keypad_number_pane_g1

0xb5ec,	// (0x00015d6f) cell_vkb_keypad_number_pane_g2

0xb5f5,	// (0x00015d78) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb30,	// (0x0001a2b3) cell_vkb_keypad_number_pane_g

0xb55f,	// (0x00015ce2) cell_vkb_keypad_number_pane_t1

0xb617,	// (0x00015d9a) fep_vkb_candidate_pane_g1

0x0001,

0xfb51,	// (0x0001a2d4) cell_hwr_side_pane_g

0xb630,	// (0x00015db3) cell_hwr_side_pane_t1

0x57f7,	// (0x0000ff7a) cell_hwr_side_pane_t1_copy1

0x5805,	// (0x0000ff88) cell_hwr_candidate_pane_g1

0x5834,	// (0x0000ffb7) cell_hwr_candidate_pane_t1

0xb0ff,	// (0x00015882) cell_vkb_candidate_pane_g2

0xb674,	// (0x00015df7) cell_vkb_candidate_pane_t1

0x55b2,	// (0x0000fd35) bg_popup_fep_shadow_pane_ParamLimits

0x55b2,	// (0x0000fd35) bg_popup_fep_shadow_pane

0x5661,	// (0x0000fde4) bg_fep_hwr_top_pane_g4

0xb17c,	// (0x000158ff) bg_hwr_side_pane_g1_ParamLimits

0xb17c,	// (0x000158ff) bg_hwr_side_pane_g1

0xe599,	// (0x00018d1c) cell_hwr_side_pane_ParamLimits

0xe599,	// (0x00018d1c) cell_hwr_side_pane

0x570d,	// (0x0000fe90) fep_hwr_write_pane_g1_ParamLimits

0x570d,	// (0x0000fe90) fep_hwr_write_pane_g1

0x571a,	// (0x0000fe9d) fep_hwr_write_pane_g2_ParamLimits

0x571a,	// (0x0000fe9d) fep_hwr_write_pane_g2

0x5727,	// (0x0000feaa) fep_hwr_write_pane_g3_ParamLimits

0x5727,	// (0x0000feaa) fep_hwr_write_pane_g3

0xe5b9,	// (0x00018d3c) fep_hwr_write_pane_g4_ParamLimits

0xe5b9,	// (0x00018d3c) fep_hwr_write_pane_g4

0x0005,

0xfafd,	// (0x0001a280) fep_hwr_write_pane_g_ParamLimits

0xfafd,	// (0x0001a280) fep_hwr_write_pane_g

0x5661,	// (0x0000fde4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x5661,	// (0x0000fde4) bg_fep_hwr_candidate_pane_g2

0x574a,	// (0x0000fecd) cell_hwr_candidate_pane_ParamLimits

0x574a,	// (0x0000fecd) cell_hwr_candidate_pane

0x5784,	// (0x0000ff07) fep_hwr_candidate_pane_g1_ParamLimits

0xb1dc,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2_ParamLimits

0xb1dc,	// (0x0001595f) bg_popup_fep_shadow_pane_cp2

0xb337,	// (0x00015aba) fep_vkb_top_pane_g4_ParamLimits

0xb337,	// (0x00015aba) fep_vkb_top_pane_g4

0xb37d,	// (0x00015b00) fep_vkb_side_pane_g2_ParamLimits

0xb37d,	// (0x00015b00) fep_vkb_side_pane_g2

0x0aae,	// (0x0000b231) list_setting_pane_t4_ParamLimits

0x0aae,	// (0x0000b231) list_setting_pane_t4

0x0b30,	// (0x0000b2b3) list_setting_number_pane_t5_ParamLimits

0x0b30,	// (0x0000b2b3) list_setting_number_pane_t5

0x0e47,	// (0x0000b5ca) list_double_heading_pane_cp2_ParamLimits

0x0e47,	// (0x0000b5ca) list_double_heading_pane_cp2

0x8000,	// (0x00012783) list_double_heading_pane_g1_cp2_ParamLimits

0x8000,	// (0x00012783) list_double_heading_pane_g1_cp2

0xb682,	// (0x00015e05) list_double_heading_pane_g2_cp2_ParamLimits

0xb682,	// (0x00015e05) list_double_heading_pane_g2_cp2

0xb696,	// (0x00015e19) list_double_heading_pane_t1_cp2_ParamLimits

0xb696,	// (0x00015e19) list_double_heading_pane_t1_cp2

0xb6ac,	// (0x00015e2f) list_double_heading_pane_t2_cp2_ParamLimits

0xb6ac,	// (0x00015e2f) list_double_heading_pane_t2_cp2

0x64d4,	// (0x00010c57) aid_value_unit2

0x450d,	// (0x0000ec90) popup_preview_fixed_window

0x6962,	// (0x000110e5) bg_popup_preview_window_pane_cp02

0xb6be,	// (0x00015e41) list_preview_fixed_pane

0xb746,	// (0x00015ec9) list_empty_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_empty_pane_fp

0xb746,	// (0x00015ec9) list_single_cale_day_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_cale_day_pane_fp

0xb746,	// (0x00015ec9) list_single_graphic_heading_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_graphic_heading_pane_fp

0xb746,	// (0x00015ec9) list_single_graphic_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_graphic_pane_fp

0xb746,	// (0x00015ec9) list_single_heading_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_heading_pane_fp

0xb746,	// (0x00015ec9) list_single_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_pane_fp

0xb75a,	// (0x00015edd) list_single_pane_fp_g1_ParamLimits

0xb75a,	// (0x00015edd) list_single_pane_fp_g1

0x7063,	// (0x000117e6) list_single_pane_fp_g2_ParamLimits

0x7063,	// (0x000117e6) list_single_pane_fp_g2

0xb766,	// (0x00015ee9) list_single_pane_fp_g3_ParamLimits

0xb766,	// (0x00015ee9) list_single_pane_fp_g3

0xb77a,	// (0x00015efd) list_single_pane_fp_g4_ParamLimits

0xb77a,	// (0x00015efd) list_single_pane_fp_g4

0x0003,

0xfb64,	// (0x0001a2e7) list_single_pane_fp_g_ParamLimits

0xfb64,	// (0x0001a2e7) list_single_pane_fp_g

0xb786,	// (0x00015f09) list_single_pane_fp_t1_ParamLimits

0xb786,	// (0x00015f09) list_single_pane_fp_t1

0xb79d,	// (0x00015f20) list_single_graphic_pane_fp_g1_ParamLimits

0xb79d,	// (0x00015f20) list_single_graphic_pane_fp_g1

0xb75a,	// (0x00015edd) list_single_graphic_pane_fp_g2_ParamLimits

0xb75a,	// (0x00015edd) list_single_graphic_pane_fp_g2

0x7063,	// (0x000117e6) list_single_graphic_pane_fp_g3_ParamLimits

0x7063,	// (0x000117e6) list_single_graphic_pane_fp_g3

0xb766,	// (0x00015ee9) list_single_graphic_pane_fp_g4_ParamLimits

0xb766,	// (0x00015ee9) list_single_graphic_pane_fp_g4

0xb77a,	// (0x00015efd) list_single_graphic_pane_fp_g5_ParamLimits

0xb77a,	// (0x00015efd) list_single_graphic_pane_fp_g5

0x0004,

0xfb6d,	// (0x0001a2f0) list_single_graphic_pane_fp_g_ParamLimits

0xfb6d,	// (0x0001a2f0) list_single_graphic_pane_fp_g

0xb7a9,	// (0x00015f2c) list_single_graphic_pane_fp_t1_ParamLimits

0xb7a9,	// (0x00015f2c) list_single_graphic_pane_fp_t1

0xb79d,	// (0x00015f20) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xb79d,	// (0x00015f20) list_single_graphic_heading_pane_fp_g1

0xb75a,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2_ParamLimits

0xb75a,	// (0x00015edd) list_single_graphic_heading_pane_fp_g2

0x7063,	// (0x000117e6) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x7063,	// (0x000117e6) list_single_graphic_heading_pane_fp_g3

0xb766,	// (0x00015ee9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xb766,	// (0x00015ee9) list_single_graphic_heading_pane_fp_g4

0xb77a,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5_ParamLimits

0xb77a,	// (0x00015efd) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb6d,	// (0x0001a2f0) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb6d,	// (0x0001a2f0) list_single_graphic_heading_pane_fp_g

0xb7bf,	// (0x00015f42) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xb7bf,	// (0x00015f42) list_single_graphic_heading_pane_fp_t1

0xb7d5,	// (0x00015f58) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xb7d5,	// (0x00015f58) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb78,	// (0x0001a2fb) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb78,	// (0x0001a2fb) list_single_graphic_heading_pane_fp_t

0xb7e7,	// (0x00015f6a) list_single_cale_day_pane_fp_g1_ParamLimits

0xb7e7,	// (0x00015f6a) list_single_cale_day_pane_fp_g1

0xb81f,	// (0x00015fa2) list_single_cale_day_pane_fp_g2_ParamLimits

0xb81f,	// (0x00015fa2) list_single_cale_day_pane_fp_g2

0xb82b,	// (0x00015fae) list_single_cale_day_pane_fp_g3_ParamLimits

0xb82b,	// (0x00015fae) list_single_cale_day_pane_fp_g3

0xb853,	// (0x00015fd6) list_single_cale_day_pane_fp_g4_ParamLimits

0xb853,	// (0x00015fd6) list_single_cale_day_pane_fp_g4

0xb877,	// (0x00015ffa) list_single_cale_day_pane_fp_g5_ParamLimits

0xb877,	// (0x00015ffa) list_single_cale_day_pane_fp_g5

0x0004,

0xfb7d,	// (0x0001a300) list_single_cale_day_pane_fp_g_ParamLimits

0xfb7d,	// (0x0001a300) list_single_cale_day_pane_fp_g

0xb89b,	// (0x0001601e) list_single_cale_day_pane_fp_t1_ParamLimits

0xb89b,	// (0x0001601e) list_single_cale_day_pane_fp_t1

0xb8c1,	// (0x00016044) list_single_cale_day_pane_fp_t2_ParamLimits

0xb8c1,	// (0x00016044) list_single_cale_day_pane_fp_t2

0xb8da,	// (0x0001605d) list_single_cale_day_pane_fp_t3_ParamLimits

0xb8da,	// (0x0001605d) list_single_cale_day_pane_fp_t3

0x0002,

0xfb88,	// (0x0001a30b) list_single_cale_day_pane_fp_t_ParamLimits

0xfb88,	// (0x0001a30b) list_single_cale_day_pane_fp_t

0xb75a,	// (0x00015edd) list_empty_pane_fp_g1_ParamLimits

0xb75a,	// (0x00015edd) list_empty_pane_fp_g1

0xb8f3,	// (0x00016076) list_empty_pane_fp_t1

0xb901,	// (0x00016084) list_empty_pane_fp_t2

0x0001,

0xfb8f,	// (0x0001a312) list_empty_pane_fp_t

0xb75a,	// (0x00015edd) list_single_heading_pane_fp_g1_ParamLimits

0xb75a,	// (0x00015edd) list_single_heading_pane_fp_g1

0x7063,	// (0x000117e6) list_single_heading_pane_fp_g2_ParamLimits

0x7063,	// (0x000117e6) list_single_heading_pane_fp_g2

0xb766,	// (0x00015ee9) list_single_heading_pane_fp_g3_ParamLimits

0xb766,	// (0x00015ee9) list_single_heading_pane_fp_g3

0x0002,

0xfb94,	// (0x0001a317) list_single_heading_pane_fp_g_ParamLimits

0xfb94,	// (0x0001a317) list_single_heading_pane_fp_g

0xb90f,	// (0x00016092) list_single_heading_pane_fp_t1_ParamLimits

0xb90f,	// (0x00016092) list_single_heading_pane_fp_t1

0xb921,	// (0x000160a4) list_single_heading_pane_fp_t2_ParamLimits

0xb921,	// (0x000160a4) list_single_heading_pane_fp_t2

0x0001,

0xfb9b,	// (0x0001a31e) list_single_heading_pane_fp_t_ParamLimits

0xfb9b,	// (0x0001a31e) list_single_heading_pane_fp_t

0x771f,	// (0x00011ea2) aid_size_cell_fast

0x68c9,	// (0x0001104c) soft_indicator_pane_cp1_t1

0x775c,	// (0x00011edf) cell_app_pane_cp2_ParamLimits

0x775c,	// (0x00011edf) cell_app_pane_cp2

0x55d4,	// (0x0000fd57) fep_hwr_candidate_drop_down_list_pane

0x579e,	// (0x0000ff21) fep_hwr_candidate_pane_g3_ParamLimits

0x579e,	// (0x0000ff21) fep_hwr_candidate_pane_g3

0x36b7,	// (0x0000de3a) fep_hwr_candidate_pane_g4_ParamLimits

0x36b7,	// (0x0000de3a) fep_hwr_candidate_pane_g4

0x0002,

0xfb0a,	// (0x0001a28d) fep_hwr_candidate_pane_g_ParamLimits

0xfb0a,	// (0x0001a28d) fep_hwr_candidate_pane_g

0xb250,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0xb250,	// (0x000159d3) fep_vkb_candidate_drop_down_list_pane

0xb61f,	// (0x00015da2) fep_vkb_candidate_pane_g3

0xb627,	// (0x00015daa) fep_vkb_candidate_pane_g4

0x0002,

0xfb37,	// (0x0001a2ba) fep_vkb_candidate_pane_g

0x5805,	// (0x0000ff88) cell_hwr_candidate_pane_g1_ParamLimits

0x5813,	// (0x0000ff96) cell_hwr_candidate_pane_g3_ParamLimits

0x5813,	// (0x0000ff96) cell_hwr_candidate_pane_g3

0xeb7f,	// (0x00019302) cell_hwr_candidate_pane_g4_ParamLimits

0xeb7f,	// (0x00019302) cell_hwr_candidate_pane_g4

0x0002,

0xfb56,	// (0x0001a2d9) cell_hwr_candidate_pane_g_ParamLimits

0xfb56,	// (0x0001a2d9) cell_hwr_candidate_pane_g

0xb63e,	// (0x00015dc1) cell_vkb_candidate_pane_g3_ParamLimits

0xb63e,	// (0x00015dc1) cell_vkb_candidate_pane_g3

0xb659,	// (0x00015ddc) cell_vkb_candidate_pane_g4_ParamLimits

0xb659,	// (0x00015ddc) cell_vkb_candidate_pane_g4

0xb937,	// (0x000160ba) cell_app_pane_cp2_g1_ParamLimits

0xb937,	// (0x000160ba) cell_app_pane_cp2_g1

0xb955,	// (0x000160d8) cell_app_pane_cp2_g2_ParamLimits

0xb955,	// (0x000160d8) cell_app_pane_cp2_g2

0x0001,

0xfba0,	// (0x0001a323) cell_app_pane_cp2_g_ParamLimits

0xfba0,	// (0x0001a323) cell_app_pane_cp2_g

0xb961,	// (0x000160e4) cell_app_pane_cp2_t1_ParamLimits

0xb961,	// (0x000160e4) cell_app_pane_cp2_t1

0x73cb,	// (0x00011b4e) grid_highlight_pane_cp1_ParamLimits

0x73cb,	// (0x00011b4e) grid_highlight_pane_cp1

0x5851,	// (0x0000ffd4) cell_hwr_candidate_pane_cp1_ParamLimits

0x5851,	// (0x0000ffd4) cell_hwr_candidate_pane_cp1

0x5805,	// (0x0000ff88) fep_hwr_candidate_drop_down_list_pane_g1

0x586f,	// (0x0000fff2) fep_hwr_candidate_drop_down_list_pane_g2

0x587c,	// (0x0000ffff) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfba5,	// (0x0001a328) fep_hwr_candidate_drop_down_list_pane_g

0x5889,	// (0x0001000c) fep_hwr_candidate_drop_down_list_scroll_pane

0x5892,	// (0x00010015) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5892,	// (0x00010015) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x589f,	// (0x00010022) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x589f,	// (0x00010022) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x58ac,	// (0x0001002f) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x58ac,	// (0x0001002f) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x58b9,	// (0x0001003c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x58b9,	// (0x0001003c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x58d4,	// (0x00010057) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x58d4,	// (0x00010057) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x58ef,	// (0x00010072) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x58ef,	// (0x00010072) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x590a,	// (0x0001008d) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x590a,	// (0x0001008d) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x5925,	// (0x000100a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5925,	// (0x000100a8) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbac,	// (0x0001a32f) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbac,	// (0x0001a32f) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x24d8,	// (0x0000cc5b) cell_vkb_candidate_pane_cp1_ParamLimits

0x24d8,	// (0x0000cc5b) cell_vkb_candidate_pane_cp1

0xb337,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0xb337,	// (0x00015aba) fep_vkb_candidate_drop_down_list_pane_g1

0xb973,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0xb973,	// (0x000160f6) fep_vkb_candidate_drop_down_list_pane_g2

0xb980,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0xb980,	// (0x00016103) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0001a340) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbd,	// (0x0001a340) fep_vkb_candidate_drop_down_list_pane_g

0xb9b0,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0xb9b0,	// (0x00016133) fep_vkb_candidate_drop_down_list_scroll_pane

0xb9bd,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xb9bd,	// (0x00016140) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0xb9ca,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xb9ca,	// (0x0001614d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0xb9d6,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xb9d6,	// (0x00016159) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0xb6e0,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xb6e0,	// (0x00015e63) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0xb701,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xb701,	// (0x00015e84) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0xb9e2,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xb9e2,	// (0x00016165) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0xba03,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xba03,	// (0x00016186) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0xba24,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xba24,	// (0x000161a7) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0001a347) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0001a347) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x0433,	// (0x0000abb6) title_pane_g1_ParamLimits

0x044a,	// (0x0000abcd) title_pane_g2_ParamLimits

0xf54e,	// (0x00019cd1) title_pane_g_ParamLimits

0x7b76,	// (0x000122f9) aid_call2_pane

0x7b7e,	// (0x00012301) aid_call_pane

0x7b86,	// (0x00012309) popup_clock_analogue_window_g1

0x7b86,	// (0x00012309) popup_clock_analogue_window_g2

0x47e7,	// (0x0000ef6a) popup_clock_analogue_window_g3

0x47f0,	// (0x0000ef73) popup_clock_analogue_window_g4

0x64f4,	// (0x00010c77) popup_clock_analogue_window_g5

0x0004,

0xf6e9,	// (0x00019e6c) popup_clock_analogue_window_g

0x47f8,	// (0x0000ef7b) popup_clock_analogue_window_t1

0x4806,	// (0x0000ef89) clock_digital_number_pane_ParamLimits

0x4806,	// (0x0000ef89) clock_digital_number_pane

0x4812,	// (0x0000ef95) clock_digital_number_pane_cp02_ParamLimits

0x4812,	// (0x0000ef95) clock_digital_number_pane_cp02

0x481e,	// (0x0000efa1) clock_digital_number_pane_cp03_ParamLimits

0x481e,	// (0x0000efa1) clock_digital_number_pane_cp03

0x482a,	// (0x0000efad) clock_digital_number_pane_cp04_ParamLimits

0x482a,	// (0x0000efad) clock_digital_number_pane_cp04

0x4836,	// (0x0000efb9) clock_digital_separator_pane_ParamLimits

0x4836,	// (0x0000efb9) clock_digital_separator_pane

0x4842,	// (0x0000efc5) popup_clock_digital_window_t1_ParamLimits

0x4842,	// (0x0000efc5) popup_clock_digital_window_t1

0x64f4,	// (0x00010c77) clock_digital_number_pane_g1

0x64f4,	// (0x00010c77) clock_digital_number_pane_g2

0x0001,

0xf6f4,	// (0x00019e77) clock_digital_number_pane_g

0x64f4,	// (0x00010c77) clock_digital_separator_pane_g1

0x64f4,	// (0x00010c77) clock_digital_separator_pane_g2

0x0001,

0xf6f4,	// (0x00019e77) clock_digital_separator_pane_g

0x1810,	// (0x0000bf93) aid_fill_nsta_ParamLimits

0x1927,	// (0x0000c0aa) indicator_nsta_pane_ParamLimits

0x8799,	// (0x00012f1c) popup_clock_analogue_window

0x8799,	// (0x00012f1c) popup_clock_digital_window

0x76e0,	// (0x00011e63) grid_indicator_nsta_pane_ParamLimits

0xab87,	// (0x0001530a) clock_nsta_pane_t2

0x0001,

0xfa8a,	// (0x0001a20d) clock_nsta_pane_t

0x47ab,	// (0x0000ef2e) aid_size_max_handle

0xdcd1,	// (0x00018454) aid_size_min_handle

0x818b,	// (0x0001290e) editor_scroll_pane

0xba3f,	// (0x000161c2) ex_editor_pane

0x768f,	// (0x00011e12) scroll_pane_cp13

0x6e4e,	// (0x000115d1) scroll_pane_cp14

0x7bb5,	// (0x00012338) scroll_pane_cp36

0x0e53,	// (0x0000b5d6) list_single_graphic_hl_pane_cp2_ParamLimits

0x0e53,	// (0x0000b5d6) list_single_graphic_hl_pane_cp2

0x212b,	// (0x0000c8ae) list_single_graphic_hl_pane_ParamLimits

0x212b,	// (0x0000c8ae) list_single_graphic_hl_pane

0xba47,	// (0x000161ca) aid_size_min_hl_cp1

0xba50,	// (0x000161d3) list_highlight_pane_cp34_ParamLimits

0xba50,	// (0x000161d3) list_highlight_pane_cp34

0xba61,	// (0x000161e4) list_single_graphic_hl_pane_g1_ParamLimits

0xba61,	// (0x000161e4) list_single_graphic_hl_pane_g1

0x24f8,	// (0x0000cc7b) list_single_graphic_hl_pane_g2_ParamLimits

0x24f8,	// (0x0000cc7b) list_single_graphic_hl_pane_g2

0x24f8,	// (0x0000cc7b) list_single_graphic_hl_pane_g3_ParamLimits

0x24f8,	// (0x0000cc7b) list_single_graphic_hl_pane_g3

0x6e62,	// (0x000115e5) list_single_graphic_hl_pane_g4_ParamLimits

0x6e62,	// (0x000115e5) list_single_graphic_hl_pane_g4

0x73f1,	// (0x00011b74) list_single_graphic_hl_pane_g5_ParamLimits

0x73f1,	// (0x00011b74) list_single_graphic_hl_pane_g5

0x0004,

0xfbd5,	// (0x0001a358) list_single_graphic_hl_pane_g_ParamLimits

0xfbd5,	// (0x0001a358) list_single_graphic_hl_pane_g

0x2504,	// (0x0000cc87) list_single_graphic_hl_pane_t1_ParamLimits

0x2504,	// (0x0000cc87) list_single_graphic_hl_pane_t1

0xba90,	// (0x00016213) aid_size_min_hl_cp2

0xba99,	// (0x0001621c) list_highlight_pane_cp34_cp2_ParamLimits

0xba99,	// (0x0001621c) list_highlight_pane_cp34_cp2

0xba61,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0xba61,	// (0x000161e4) list_single_graphic_hl_pane_g1_cp2

0xbaa6,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0xbaa6,	// (0x00016229) list_single_graphic_hl_pane_g2_cp2

0xbab2,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbab2,	// (0x00016235) list_single_graphic_hl_pane_g3_cp2

0x8000,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x8000,	// (0x00012783) list_single_graphic_hl_pane_g4_cp2

0xb682,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0xb682,	// (0x00015e05) list_single_graphic_hl_pane_g5_cp2

0xdcfb,	// (0x0001847e) control_pane_g4_ParamLimits

0xdcfb,	// (0x0001847e) control_pane_g4

0x84da,	// (0x00012c5d) bg_popup_sub_pane_cp10_ParamLimits

0xb109,	// (0x0001588c) list_choice_list_pane_ParamLimits

0xb118,	// (0x0001589b) scroll_pane_cp23

0x6962,	// (0x000110e5) bg_popup_preview_window_pane_cp02_ParamLimits

0xb6be,	// (0x00015e41) list_preview_fixed_pane_ParamLimits

0xb6d4,	// (0x00015e57) list_preview_fixed_pane_cp_ParamLimits

0xb6d4,	// (0x00015e57) list_preview_fixed_pane_cp

0xb722,	// (0x00015ea5) popup_preview_fixed_window_g1_ParamLimits

0xb722,	// (0x00015ea5) popup_preview_fixed_window_g1

0xb72e,	// (0x00015eb1) popup_preview_fixed_window_g2_ParamLimits

0xb72e,	// (0x00015eb1) popup_preview_fixed_window_g2

0x0002,

0xfb5d,	// (0x0001a2e0) popup_preview_fixed_window_g_ParamLimits

0xfb5d,	// (0x0001a2e0) popup_preview_fixed_window_g

0x473b,	// (0x0000eebe) aid_navi_side_left_pane_ParamLimits

0x474b,	// (0x0000eece) aid_navi_side_right_pane_ParamLimits

0x475a,	// (0x0000eedd) navi_icon_pane_stacon_ParamLimits

0x476a,	// (0x0000eeed) navi_navi_pane_stacon_ParamLimits

0x475a,	// (0x0000eedd) navi_text_pane_stacon_ParamLimits

0x43ee,	// (0x0000eb71) main_text_info_pane

0xbad4,	// (0x00016257) listscroll_text_info_pane

0xbadc,	// (0x0001625f) list_text_info_pane_ParamLimits

0xbadc,	// (0x0001625f) list_text_info_pane

0xbaeb,	// (0x0001626e) scroll_pane_cp24_ParamLimits

0xbaeb,	// (0x0001626e) scroll_pane_cp24

0x251a,	// (0x0000cc9d) list_text_info_pane_t1_ParamLimits

0x251a,	// (0x0000cc9d) list_text_info_pane_t1

0xde42,	// (0x000185c5) popup_fast_swap2_window_ParamLimits

0xde42,	// (0x000185c5) popup_fast_swap2_window

0xbb26,	// (0x000162a9) aid_size_cell_fast2

0x64ea,	// (0x00010c6d) bg_popup_window_pane_cp17

0x8e73,	// (0x000135f6) heading_pane_cp2

0x6bd0,	// (0x00011353) listscroll_fast2_pane

0xbb30,	// (0x000162b3) grid_fast2_pane

0xbb38,	// (0x000162bb) listscroll_fast2_pane_g1

0xbb40,	// (0x000162c3) listscroll_fast2_pane_g2

0x0001,

0xfbe0,	// (0x0001a363) listscroll_fast2_pane_g

0x768f,	// (0x00011e12) scroll_pane_cp26

0xbb48,	// (0x000162cb) cell_fast2_pane_ParamLimits

0xbb48,	// (0x000162cb) cell_fast2_pane

0xbb5e,	// (0x000162e1) cell_fast2_pane_g1

0xbb67,	// (0x000162ea) cell_fast2_pane_g2

0xbb70,	// (0x000162f3) cell_fast2_pane_g3

0x0002,

0xfbe5,	// (0x0001a368) cell_fast2_pane_g

0x6ca7,	// (0x0001142a) grid_highlight_pane_cp9

0x4bff,	// (0x0000f382) main_eswt_pane_ParamLimits

0x4bff,	// (0x0000f382) main_eswt_pane

0xbb00,	// (0x00016283) list_single_text_info_pane

0xbb78,	// (0x000162fb) eswt_ctrl_button_pane

0xbb78,	// (0x000162fb) eswt_ctrl_canvas_pane

0xbb80,	// (0x00016303) eswt_ctrl_combo_pane

0xbb78,	// (0x000162fb) eswt_ctrl_default_pane

0xbb78,	// (0x000162fb) eswt_ctrl_label_pane

0xbb88,	// (0x0001630b) eswt_ctrl_wait_pane

0xbb90,	// (0x00016313) eswt_shell_pane

0x64ea,	// (0x00010c6d) listscroll_eswt_app_pane

0xbbac,	// (0x0001632f) popup_eswt_tasktip_window_ParamLimits

0xbbac,	// (0x0001632f) popup_eswt_tasktip_window

0x8ab9,	// (0x0001323c) bg_popup_window_pane_cp18

0xbbbd,	// (0x00016340) eswt_control_pane_g1_ParamLimits

0xbbbd,	// (0x00016340) eswt_control_pane_g1

0xbbca,	// (0x0001634d) eswt_control_pane_g2_ParamLimits

0xbbca,	// (0x0001634d) eswt_control_pane_g2

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_ParamLimits

0xbbd7,	// (0x0001635a) eswt_control_pane_g3

0xbbe4,	// (0x00016367) eswt_control_pane_g4_ParamLimits

0xbbe4,	// (0x00016367) eswt_control_pane_g4

0x0003,

0xfbec,	// (0x0001a36f) eswt_control_pane_g_ParamLimits

0xfbec,	// (0x0001a36f) eswt_control_pane_g

0x73cb,	// (0x00011b4e) bg_button_pane_ParamLimits

0x73cb,	// (0x00011b4e) bg_button_pane

0x6cbc,	// (0x0001143f) common_borders_pane_copy2_ParamLimits

0x6cbc,	// (0x0001143f) common_borders_pane_copy2

0xbbf1,	// (0x00016374) control_button_pane_g1_ParamLimits

0xbbf1,	// (0x00016374) control_button_pane_g1

0xbbfd,	// (0x00016380) control_button_pane_g2_ParamLimits

0xbbfd,	// (0x00016380) control_button_pane_g2

0xbc09,	// (0x0001638c) control_button_pane_g3_ParamLimits

0xbc09,	// (0x0001638c) control_button_pane_g3

0x0002,

0xfbf5,	// (0x0001a378) control_button_pane_g_ParamLimits

0xfbf5,	// (0x0001a378) control_button_pane_g

0xbc1d,	// (0x000163a0) control_button_pane_t1

0xbc2b,	// (0x000163ae) control_button_pane_t2

0x0001,

0xfbfc,	// (0x0001a37f) control_button_pane_t

0x89a3,	// (0x00013126) bg_button_pane_g1

0x89b3,	// (0x00013136) bg_button_pane_g2

0x89ab,	// (0x0001312e) bg_button_pane_g3

0x89c3,	// (0x00013146) bg_button_pane_g4

0x89bb,	// (0x0001313e) bg_button_pane_g5

0x89cb,	// (0x0001314e) bg_button_pane_g6

0x89d3,	// (0x00013156) bg_button_pane_g7

0x89e3,	// (0x00013166) bg_button_pane_g8

0x89db,	// (0x0001315e) bg_button_pane_g9

0x0008,

0xf84b,	// (0x00019fce) bg_button_pane_g

0xb0c4,	// (0x00015847) common_borders_pane_ParamLimits

0xb0c4,	// (0x00015847) common_borders_pane

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy1_ParamLimits

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy1

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy1_ParamLimits

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy1

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy1_ParamLimits

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy1

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy1_ParamLimits

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy1

0xb0ff,	// (0x00015882) bg_eswt_ctrl_canvas_pane_g1

0xb0c4,	// (0x00015847) common_borders_pane_cp2_ParamLimits

0xb0c4,	// (0x00015847) common_borders_pane_cp2

0xb0c4,	// (0x00015847) common_borders_pane_cp3_ParamLimits

0xb0c4,	// (0x00015847) common_borders_pane_cp3

0xbc39,	// (0x000163bc) separator_horizontal_pane

0x79c3,	// (0x00012146) separator_vertical_pane

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy2_ParamLimits

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy2

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy2_ParamLimits

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy2

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy2_ParamLimits

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy2

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy2_ParamLimits

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy2

0x64ea,	// (0x00010c6d) common_borders_pane_cp4

0xbc41,	// (0x000163c4) separator_horizontal_pane_g1

0xbc4a,	// (0x000163cd) separator_horizontal_pane_g2

0xbc53,	// (0x000163d6) separator_horizontal_pane_g3

0x0002,

0xfc01,	// (0x0001a384) separator_horizontal_pane_g

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy3_ParamLimits

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy3

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy3_ParamLimits

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy3

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy3_ParamLimits

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy3

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy3_ParamLimits

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy3

0x64ea,	// (0x00010c6d) common_borders_pane_cp5

0xbc5c,	// (0x000163df) separator_vertical_pane_g1

0xbc65,	// (0x000163e8) separator_vertical_pane_g2

0xbc6e,	// (0x000163f1) separator_vertical_pane_g3

0x0002,

0xfc08,	// (0x0001a38b) separator_vertical_pane_g

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy4_ParamLimits

0xbbbd,	// (0x00016340) eswt_control_pane_g1_copy4

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy4_ParamLimits

0xbbca,	// (0x0001634d) eswt_control_pane_g2_copy4

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy4_ParamLimits

0xbbd7,	// (0x0001635a) eswt_control_pane_g3_copy4

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy4_ParamLimits

0xbbe4,	// (0x00016367) eswt_control_pane_g4_copy4

0x2535,	// (0x0000ccb8) eswt_ctrl_combo_button_pane

0x253d,	// (0x0000ccc0) eswt_ctrl_input_pane

0x2545,	// (0x0000ccc8) popup_choice_list_window_cp70

0x254d,	// (0x0000ccd0) eswt_ctrl_input_pane_t1

0x64ea,	// (0x00010c6d) input_focus_pane_cp70

0xb0c4,	// (0x00015847) bg_button_pane_cp70_ParamLimits

0xb0c4,	// (0x00015847) bg_button_pane_cp70

0x255b,	// (0x0000ccde) eswt_ctrl_combo_button_pane_g1

0xbca5,	// (0x00016428) wait_bar_pane_cp70

0x8ab9,	// (0x0001323c) bg_popup_window_pane_cp70_ParamLimits

0x8ab9,	// (0x0001323c) bg_popup_window_pane_cp70

0xbcad,	// (0x00016430) popup_eswt_tasktip_window_t1

0xbcc3,	// (0x00016446) wait_bar_pane_cp71_ParamLimits

0xbcc3,	// (0x00016446) wait_bar_pane_cp71

0xbccf,	// (0x00016452) grid_eswt_app_pane

0x79ba,	// (0x0001213d) scroll_pane_cp70

0x2563,	// (0x0000cce6) cell_eswt_app_pane_ParamLimits

0x2563,	// (0x0000cce6) cell_eswt_app_pane

0x258b,	// (0x0000cd0e) cell_eswt_app_pane_g1_ParamLimits

0x258b,	// (0x0000cd0e) cell_eswt_app_pane_g1

0x25ba,	// (0x0000cd3d) cell_eswt_app_pane_g2_ParamLimits

0x25ba,	// (0x0000cd3d) cell_eswt_app_pane_g2

0x0001,

0xfc0f,	// (0x0001a392) cell_eswt_app_pane_g_ParamLimits

0xfc0f,	// (0x0001a392) cell_eswt_app_pane_g

0x25e3,	// (0x0000cd66) cell_eswt_app_pane_t1_ParamLimits

0x25e3,	// (0x0000cd66) cell_eswt_app_pane_t1

0xbd8a,	// (0x0001650d) grid_highlight_pane_cp70_ParamLimits

0xbd8a,	// (0x0001650d) grid_highlight_pane_cp70

0x6e62,	// (0x000115e5) set_content_pane_g1

0x8426,	// (0x00012ba9) status_small_volume_pane

0x5940,	// (0x000100c3) status_small_volume_pane_g1

0x5948,	// (0x000100cb) volume_small2_pane

0x5951,	// (0x000100d4) volume_small2_pane_g1

0x595a,	// (0x000100dd) volume_small2_pane_g2

0x5963,	// (0x000100e6) volume_small2_pane_g3

0x596c,	// (0x000100ef) volume_small2_pane_g4

0x5975,	// (0x000100f8) volume_small2_pane_g5

0x597e,	// (0x00010101) volume_small2_pane_g6

0x5987,	// (0x0001010a) volume_small2_pane_g7

0x5990,	// (0x00010113) volume_small2_pane_g8

0x5999,	// (0x0001011c) volume_small2_pane_g9

0x59a2,	// (0x00010125) volume_small2_pane_g10

0x0009,

0xfc14,	// (0x0001a397) volume_small2_pane_g

0xb479,	// (0x00015bfc) fep_vkb_top_text_pane_g1_ParamLimits

0x2480,	// (0x0000cc03) fep_vkb_top_text_pane_t1_ParamLimits

0xb73a,	// (0x00015ebd) popup_preview_fixed_window_g3_ParamLimits

0xb73a,	// (0x00015ebd) popup_preview_fixed_window_g3

0xe362,	// (0x00018ae5) popup_toolbar_trans_pane

0x1f9d,	// (0x0000c720) aid_height_set_list_ParamLimits

0x9d5d,	// (0x000144e0) aid_size_parent_ParamLimits

0x84da,	// (0x00012c5d) list_highlight_pane_cp2_ParamLimits

0x6e62,	// (0x000115e5) set_content_pane_g1_ParamLimits

0x213e,	// (0x0000c8c1) list_single_image_pane_ParamLimits

0x213e,	// (0x0000c8c1) list_single_image_pane

0x2615,	// (0x0000cd98) aid_size_cell_image_ParamLimits

0x2615,	// (0x0000cd98) aid_size_cell_image

0x2622,	// (0x0000cda5) grid_single_image_pane_ParamLimits

0x2622,	// (0x0000cda5) grid_single_image_pane

0x6e62,	// (0x000115e5) list_single_image_pane_g1_ParamLimits

0x6e62,	// (0x000115e5) list_single_image_pane_g1

0x73f1,	// (0x00011b74) list_single_image_pane_g2_ParamLimits

0x73f1,	// (0x00011b74) list_single_image_pane_g2

0x0001,

0xfc29,	// (0x0001a3ac) list_single_image_pane_g_ParamLimits

0xfc29,	// (0x0001a3ac) list_single_image_pane_g

0x9ee0,	// (0x00014663) list_single_image_pane_t1_ParamLimits

0x9ee0,	// (0x00014663) list_single_image_pane_t1

0x262e,	// (0x0000cdb1) cell_image_list_pane_ParamLimits

0x262e,	// (0x0000cdb1) cell_image_list_pane

0x2642,	// (0x0000cdc5) cell_image_list_pane_g1

0x264b,	// (0x0000cdce) cell_image_list_pane_g2

0x0001,

0xfc2e,	// (0x0001a3b1) cell_image_list_pane_g

0xbdd4,	// (0x00016557) aid_size_cell_tb_trans_pane

0x73cb,	// (0x00011b4e) bg_tb_trans_pane

0xbde6,	// (0x00016569) grid_tb_trans_pane

0x89a3,	// (0x00013126) bg_tb_trans_pane_g1

0x89b3,	// (0x00013136) bg_tb_trans_pane_g2

0x89ab,	// (0x0001312e) bg_tb_trans_pane_g3

0x89c3,	// (0x00013146) bg_tb_trans_pane_g4

0x89bb,	// (0x0001313e) bg_tb_trans_pane_g5

0x89e3,	// (0x00013166) bg_tb_trans_pane_g6

0x89db,	// (0x0001315e) bg_tb_trans_pane_g7

0x89cb,	// (0x0001314e) bg_tb_trans_pane_g8

0x89d3,	// (0x00013156) bg_tb_trans_pane_g9

0x0008,

0xfc33,	// (0x0001a3b6) bg_tb_trans_pane_g

0xbdfa,	// (0x0001657d) cell_toolbar_trans_pane_ParamLimits

0xbdfa,	// (0x0001657d) cell_toolbar_trans_pane

0xb0ff,	// (0x00015882) cell_toolbar_trans_pane_g1

0x237d,	// (0x0000cb00) list_form2_midp_pane_t1

0x238b,	// (0x0000cb0e) list_form2_midp_pane_t2

0x0001,

0xfad0,	// (0x0001a253) list_form2_midp_pane_t

0xad64,	// (0x000154e7) scroll_pane_cp51_ParamLimits

0xaf49,	// (0x000156cc) form2_midp_wait_pane_g1

0xaf52,	// (0x000156d5) form2_midp_wait_pane_g2

0xaf5b,	// (0x000156de) form2_midp_wait_pane_g3

0x0002,

0xfae5,	// (0x0001a268) form2_midp_wait_pane_g

0x66bb,	// (0x00010e3e) list_highlight_pane_cp21_ParamLimits

0xaf99,	// (0x0001571c) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xafa8,	// (0x0001572b) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x9f27,	// (0x000146aa) list_single_2graphic_im_pane_ParamLimits

0x9f27,	// (0x000146aa) list_single_2graphic_im_pane

0x2654,	// (0x0000cdd7) list_single_2graphic_im_pane_g1_ParamLimits

0x2654,	// (0x0000cdd7) list_single_2graphic_im_pane_g1

0x2665,	// (0x0000cde8) list_single_2graphic_im_pane_g2_ParamLimits

0x2665,	// (0x0000cde8) list_single_2graphic_im_pane_g2

0x2671,	// (0x0000cdf4) list_single_2graphic_im_pane_g3_ParamLimits

0x2671,	// (0x0000cdf4) list_single_2graphic_im_pane_g3

0x0003,

0xfc46,	// (0x0001a3c9) list_single_2graphic_im_pane_g_ParamLimits

0xfc46,	// (0x0001a3c9) list_single_2graphic_im_pane_g

0x2685,	// (0x0000ce08) list_single_2graphic_im_pane_t1_ParamLimits

0x2685,	// (0x0000ce08) list_single_2graphic_im_pane_t1

0xb746,	// (0x00015ec9) list_single_graphic_2heading_pane_fp_ParamLimits

0xb746,	// (0x00015ec9) list_single_graphic_2heading_pane_fp

0xb79d,	// (0x00015f20) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xb79d,	// (0x00015f20) list_single_graphic_2heading_pane_fp_g1

0xb75a,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0xb75a,	// (0x00015edd) list_single_graphic_2heading_pane_fp_g2

0x7063,	// (0x000117e6) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x7063,	// (0x000117e6) list_single_graphic_2heading_pane_fp_g3

0xb766,	// (0x00015ee9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xb766,	// (0x00015ee9) list_single_graphic_2heading_pane_fp_g4

0xb77a,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0xb77a,	// (0x00015efd) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb6d,	// (0x0001a2f0) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb6d,	// (0x0001a2f0) list_single_graphic_2heading_pane_fp_g

0xbe8e,	// (0x00016611) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbe8e,	// (0x00016611) list_single_graphic_2heading_pane_fp_t1

0xb7d5,	// (0x00015f58) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xb7d5,	// (0x00015f58) list_single_graphic_2heading_pane_fp_t2

0xbea4,	// (0x00016627) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbea4,	// (0x00016627) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc4f,	// (0x0001a3d2) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc4f,	// (0x0001a3d2) list_single_graphic_2heading_pane_fp_t

0xb188,	// (0x0001590b) fep_hwr_write_pane_g5_ParamLimits

0xb188,	// (0x0001590b) fep_hwr_write_pane_g5

0xb194,	// (0x00015917) fep_hwr_write_pane_g6_ParamLimits

0xb194,	// (0x00015917) fep_hwr_write_pane_g6

0xbb90,	// (0x00016313) eswt_shell_pane_ParamLimits

0x8ab9,	// (0x0001323c) bg_popup_window_pane_cp18_ParamLimits

0x9cc3,	// (0x00014446) heading_pane_cp70

0xbcad,	// (0x00016430) popup_eswt_tasktip_window_t1_ParamLimits

0x1854,	// (0x0000bfd7) aid_touch_tab_arrow_left

0x1868,	// (0x0000bfeb) aid_touch_tab_arrow_right

0x0469,	// (0x0000abec) title_pane_g3_ParamLimits

0x0469,	// (0x0000abec) title_pane_g3

0x72c9,	// (0x00011a4c) set_value_pane_g1

0xe362,	// (0x00018ae5) popup_toolbar_trans_pane_ParamLimits

0xbdd4,	// (0x00016557) aid_size_cell_tb_trans_pane_ParamLimits

0x73cb,	// (0x00011b4e) bg_tb_trans_pane_ParamLimits

0xbde6,	// (0x00016569) grid_tb_trans_pane_ParamLimits

0x6962,	// (0x000110e5) cont_note_pane_ParamLimits

0x6962,	// (0x000110e5) cont_note_pane

0x6cbc,	// (0x0001143f) cont_snote2_single_text_pane_ParamLimits

0x6cbc,	// (0x0001143f) cont_snote2_single_text_pane

0x6cbc,	// (0x0001143f) cont_snote2_single_graphic_pane_ParamLimits

0x6cbc,	// (0x0001143f) cont_snote2_single_graphic_pane

0x9089,	// (0x0001380c) cont_note_wait_pane_ParamLimits

0x9089,	// (0x0001380c) cont_note_wait_pane

0x9089,	// (0x0001380c) cont_note_image_pane_ParamLimits

0x9089,	// (0x0001380c) cont_note_image_pane

0xbeba,	// (0x0001663d) popup_note2_window_g1_ParamLimits

0xbeba,	// (0x0001663d) popup_note2_window_g1

0xbeeb,	// (0x0001666e) popup_note2_window_t1_ParamLimits

0xbeeb,	// (0x0001666e) popup_note2_window_t1

0xbf30,	// (0x000166b3) popup_note2_window_t2_ParamLimits

0xbf30,	// (0x000166b3) popup_note2_window_t2

0xbf75,	// (0x000166f8) popup_note2_window_t3_ParamLimits

0xbf75,	// (0x000166f8) popup_note2_window_t3

0xbfba,	// (0x0001673d) popup_note2_window_t4_ParamLimits

0xbfba,	// (0x0001673d) popup_note2_window_t4

0x69e6,	// (0x00011169) popup_note2_window_t5_ParamLimits

0x69e6,	// (0x00011169) popup_note2_window_t5

0x0004,

0xfc5b,	// (0x0001a3de) popup_note2_window_t_ParamLimits

0xfc5b,	// (0x0001a3de) popup_note2_window_t

0xbfe9,	// (0x0001676c) popup_note2_image_window_g1_ParamLimits

0xbfe9,	// (0x0001676c) popup_note2_image_window_g1

0xbff5,	// (0x00016778) popup_note2_image_window_g2_ParamLimits

0xbff5,	// (0x00016778) popup_note2_image_window_g2

0x0001,

0xfc66,	// (0x0001a3e9) popup_note2_image_window_g_ParamLimits

0xfc66,	// (0x0001a3e9) popup_note2_image_window_g

0xc007,	// (0x0001678a) popup_note2_image_window_t1_ParamLimits

0xc007,	// (0x0001678a) popup_note2_image_window_t1

0xc01f,	// (0x000167a2) popup_note2_image_window_t2_ParamLimits

0xc01f,	// (0x000167a2) popup_note2_image_window_t2

0xc037,	// (0x000167ba) popup_note2_image_window_t3_ParamLimits

0xc037,	// (0x000167ba) popup_note2_image_window_t3

0x0002,

0xfc6b,	// (0x0001a3ee) popup_note2_image_window_t_ParamLimits

0xfc6b,	// (0x0001a3ee) popup_note2_image_window_t

0x9097,	// (0x0001381a) popup_note2_wait_window_g1_ParamLimits

0x9097,	// (0x0001381a) popup_note2_wait_window_g1

0x90a3,	// (0x00013826) popup_note2_wait_window_g2_ParamLimits

0x90a3,	// (0x00013826) popup_note2_wait_window_g2

0x90af,	// (0x00013832) popup_note2_wait_window_g3_ParamLimits

0x90af,	// (0x00013832) popup_note2_wait_window_g3

0x0002,

0xf82d,	// (0x00019fb0) popup_note2_wait_window_g_ParamLimits

0xf82d,	// (0x00019fb0) popup_note2_wait_window_g

0xc053,	// (0x000167d6) popup_note2_wait_window_t1_ParamLimits

0xc053,	// (0x000167d6) popup_note2_wait_window_t1

0xc071,	// (0x000167f4) popup_note2_wait_window_t2_ParamLimits

0xc071,	// (0x000167f4) popup_note2_wait_window_t2

0xc08f,	// (0x00016812) popup_note2_wait_window_t3_ParamLimits

0xc08f,	// (0x00016812) popup_note2_wait_window_t3

0xc0a1,	// (0x00016824) popup_note2_wait_window_t4_ParamLimits

0xc0a1,	// (0x00016824) popup_note2_wait_window_t4

0x0003,

0xfc72,	// (0x0001a3f5) popup_note2_wait_window_t_ParamLimits

0xfc72,	// (0x0001a3f5) popup_note2_wait_window_t

0xc0b3,	// (0x00016836) wait_bar2_pane_ParamLimits

0xc0b3,	// (0x00016836) wait_bar2_pane

0xc0cb,	// (0x0001684e) popup_snote2_single_text_window_g1_ParamLimits

0xc0cb,	// (0x0001684e) popup_snote2_single_text_window_g1

0xc0f3,	// (0x00016876) popup_snote2_single_text_window_t1_ParamLimits

0xc0f3,	// (0x00016876) popup_snote2_single_text_window_t1

0xc13f,	// (0x000168c2) popup_snote2_single_text_window_t2_ParamLimits

0xc13f,	// (0x000168c2) popup_snote2_single_text_window_t2

0xc18b,	// (0x0001690e) popup_snote2_single_text_window_t3_ParamLimits

0xc18b,	// (0x0001690e) popup_snote2_single_text_window_t3

0xc1cc,	// (0x0001694f) popup_snote2_single_text_window_t4_ParamLimits

0xc1cc,	// (0x0001694f) popup_snote2_single_text_window_t4

0xc202,	// (0x00016985) popup_snote2_single_text_window_t5_ParamLimits

0xc202,	// (0x00016985) popup_snote2_single_text_window_t5

0x0004,

0xfc7b,	// (0x0001a3fe) popup_snote2_single_text_window_t_ParamLimits

0xfc7b,	// (0x0001a3fe) popup_snote2_single_text_window_t

0xc22d,	// (0x000169b0) popup_snote2_single_graphic_window_g1_ParamLimits

0xc22d,	// (0x000169b0) popup_snote2_single_graphic_window_g1

0xc255,	// (0x000169d8) popup_snote2_single_graphic_window_g2_ParamLimits

0xc255,	// (0x000169d8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc86,	// (0x0001a409) popup_snote2_single_graphic_window_g_ParamLimits

0xfc86,	// (0x0001a409) popup_snote2_single_graphic_window_g

0xc27d,	// (0x00016a00) popup_snote2_single_graphic_window_t1_ParamLimits

0xc27d,	// (0x00016a00) popup_snote2_single_graphic_window_t1

0xc2c9,	// (0x00016a4c) popup_snote2_single_graphic_window_t2_ParamLimits

0xc2c9,	// (0x00016a4c) popup_snote2_single_graphic_window_t2

0xc18b,	// (0x0001690e) popup_snote2_single_graphic_window_t3_ParamLimits

0xc18b,	// (0x0001690e) popup_snote2_single_graphic_window_t3

0xc1cc,	// (0x0001694f) popup_snote2_single_graphic_window_t4_ParamLimits

0xc1cc,	// (0x0001694f) popup_snote2_single_graphic_window_t4

0xc202,	// (0x00016985) popup_snote2_single_graphic_window_t5_ParamLimits

0xc202,	// (0x00016985) popup_snote2_single_graphic_window_t5

0x0004,

0xfc8b,	// (0x0001a40e) popup_snote2_single_graphic_window_t_ParamLimits

0xfc8b,	// (0x0001a40e) popup_snote2_single_graphic_window_t

0xac3a,	// (0x000153bd) clock_nsta_pane_cp2_t1

0xac3a,	// (0x000153bd) clock_nsta_pane_cp2_t2

0x0001,

0xfaa6,	// (0x0001a229) clock_nsta_pane_cp2_t

0x73e5,	// (0x00011b68) form_field_data_wide_pane_g1_ParamLimits

0x6e62,	// (0x000115e5) form_field_data_wide_pane_g2_ParamLimits

0x6e62,	// (0x000115e5) form_field_data_wide_pane_g2

0x73f1,	// (0x00011b74) form_field_data_wide_pane_g3_ParamLimits

0x73f1,	// (0x00011b74) form_field_data_wide_pane_g3

0x0002,

0xf66c,	// (0x00019def) form_field_data_wide_pane_g_ParamLimits

0xf66c,	// (0x00019def) form_field_data_wide_pane_g

0x22c6,	// (0x0000ca49) grid_touch_3_pane_ParamLimits

0x22c6,	// (0x0000ca49) grid_touch_3_pane

0x26b6,	// (0x0000ce39) cell_touch_3_pane_ParamLimits

0x26b6,	// (0x0000ce39) cell_touch_3_pane

0xb0ff,	// (0x00015882) cell_touch_3_pane_g1

0xb0ff,	// (0x00015882) cell_touch_3_pane_g2

0x0001,

0xfb2b,	// (0x0001a2ae) cell_touch_3_pane_g

0x6a3e,	// (0x000111c1) cont_query_data_pane

0x6a46,	// (0x000111c9) cont_query_data_pane_cp1

0xc342,	// (0x00016ac5) button_value_adjust_pane_cp7

0xc34a,	// (0x00016acd) query_popup_pane_cp3

0x7c5e,	// (0x000123e1) bg_popup_sub_pane_cp22_ParamLimits

0x4861,	// (0x0000efe4) navi_navi_volume_pane_cp2

0x4879,	// (0x0000effc) popup_side_volume_key_window_g2

0x4885,	// (0x0000f008) popup_side_volume_key_window_g3

0x0002,

0xf702,	// (0x00019e85) popup_side_volume_key_window_g

0x489f,	// (0x0000f022) popup_side_volume_key_window_t2

0x0001,

0xf709,	// (0x00019e8c) popup_side_volume_key_window_t

0x7f7a,	// (0x000126fd) popup_side_volume_key_window_ParamLimits

0x090c,	// (0x0000b08f) list_double_graphic_pane_g4_ParamLimits

0x090c,	// (0x0000b08f) list_double_graphic_pane_g4

0x2116,	// (0x0000c899) list_single_2heading_msg_pane_ParamLimits

0x2116,	// (0x0000c899) list_single_2heading_msg_pane

0x26fd,	// (0x0000ce80) list_single_2heading_msg_pane_g1_ParamLimits

0x26fd,	// (0x0000ce80) list_single_2heading_msg_pane_g1

0x2709,	// (0x0000ce8c) list_single_2heading_msg_pane_g2_ParamLimits

0x2709,	// (0x0000ce8c) list_single_2heading_msg_pane_g2

0x271c,	// (0x0000ce9f) list_single_2heading_msg_pane_g3_ParamLimits

0x271c,	// (0x0000ce9f) list_single_2heading_msg_pane_g3

0xc39b,	// (0x00016b1e) list_single_2heading_msg_pane_g4_ParamLimits

0xc39b,	// (0x00016b1e) list_single_2heading_msg_pane_g4

0x0003,

0xfc96,	// (0x0001a419) list_single_2heading_msg_pane_g_ParamLimits

0xfc96,	// (0x0001a419) list_single_2heading_msg_pane_g

0x2728,	// (0x0000ceab) list_single_2heading_msg_pane_t1_ParamLimits

0x2728,	// (0x0000ceab) list_single_2heading_msg_pane_t1

0x2750,	// (0x0000ced3) list_single_2heading_msg_pane_t2_ParamLimits

0x2750,	// (0x0000ced3) list_single_2heading_msg_pane_t2

0x27bb,	// (0x0000cf3e) list_single_2heading_msg_pane_t3_ParamLimits

0x27bb,	// (0x0000cf3e) list_single_2heading_msg_pane_t3

0xc443,	// (0x00016bc6) list_single_2heading_msg_pane_t4_ParamLimits

0xc443,	// (0x00016bc6) list_single_2heading_msg_pane_t4

0x0003,

0xfc9f,	// (0x0001a422) list_single_2heading_msg_pane_t_ParamLimits

0xfc9f,	// (0x0001a422) list_single_2heading_msg_pane_t

0x660f,	// (0x00010d92) title_pane_g4_ParamLimits

0x660f,	// (0x00010d92) title_pane_g4

0x46b1,	// (0x0000ee34) title_pane_stacon_g3_ParamLimits

0x46b1,	// (0x0000ee34) title_pane_stacon_g3

0xbe51,	// (0x000165d4) list_single_2graphic_im_pane_g4_ParamLimits

0xbe51,	// (0x000165d4) list_single_2graphic_im_pane_g4

0x9a87,	// (0x0001420a) popup_side_volume_key_window_cp

0xa25b,	// (0x000149de) main_idle_act2_pane_t1

0x512a,	// (0x0000f8ad) toolbar_button_pane_g10

0x07f9,	// (0x0000af7c) popup_toolbar_window_cp1

0xac2b,	// (0x000153ae) clock_nsta_pane_cp_t1

0xac2b,	// (0x000153ae) clock_nsta_pane_cp_t2

0x0001,

0xfaa1,	// (0x0001a224) clock_nsta_pane_cp_t

0x4861,	// (0x0000efe4) navi_navi_volume_pane_cp2_ParamLimits

0x486d,	// (0x0000eff0) popup_side_volume_key_window_g1_ParamLimits

0x4879,	// (0x0000effc) popup_side_volume_key_window_g2_ParamLimits

0x4885,	// (0x0000f008) popup_side_volume_key_window_g3_ParamLimits

0xf702,	// (0x00019e85) popup_side_volume_key_window_g_ParamLimits

0x55c0,	// (0x0000fd43) fep_hwr_aid_pane

0x5661,	// (0x0000fde4) bg_fep_hwr_top_pane_g4_ParamLimits

0xb158,	// (0x000158db) fep_hwr_top_pane_g1_ParamLimits

0xb16a,	// (0x000158ed) fep_hwr_top_pane_g2_ParamLimits

0x5681,	// (0x0000fe04) fep_hwr_top_pane_g3_ParamLimits

0xfaf6,	// (0x0001a279) fep_hwr_top_pane_g_ParamLimits

0x5696,	// (0x0000fe19) fep_hwr_top_text_pane_ParamLimits

0x9852,	// (0x00013fd5) aid_touch_tab_arrow_arrow_2

0x985b,	// (0x00013fde) aid_touch_tab_arrow_left_2

0x55d4,	// (0x0000fd57) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x5607,	// (0x0000fd8a) fep_hwr_prediction_pane

0xb2a9,	// (0x00015a2c) fep_vkb_prediction_pane

0x2460,	// (0x0000cbe3) fep_vkb_side_pane_g3_ParamLimits

0x2460,	// (0x0000cbe3) fep_vkb_side_pane_g3

0x5805,	// (0x0000ff88) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x586f,	// (0x0000fff2) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x587c,	// (0x0000ffff) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfba5,	// (0x0001a328) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x59ab,	// (0x0001012e) fep_hwr_prediction_pane_g1

0x59b5,	// (0x00010138) fep_hwr_prediction_pane_g2

0x59bd,	// (0x00010140) fep_hwr_prediction_pane_g3

0x59c5,	// (0x00010148) fep_hwr_prediction_pane_g4

0x0003,

0xfca8,	// (0x0001a42b) fep_hwr_prediction_pane_g

0xc468,	// (0x00016beb) fep_vkb_prediction_pane_g1

0xc472,	// (0x00016bf5) fep_vkb_prediction_pane_g2

0xc47a,	// (0x00016bfd) fep_vkb_prediction_pane_g3

0xc482,	// (0x00016c05) fep_vkb_prediction_pane_g4

0x0003,

0xfcb1,	// (0x0001a434) fep_vkb_prediction_pane_g

0x53f8,	// (0x0000fb7b) slider_set_pane_g3

0x540c,	// (0x0000fb8f) slider_set_pane_g4

0x5424,	// (0x0000fba7) slider_set_pane_g5

0x53f8,	// (0x0000fb7b) slider_set_pane_g6

0xe56b,	// (0x00018cee) slider_set_pane_g7

0x9ea4,	// (0x00014627) slider_form_pane_g3

0x9ead,	// (0x00014630) slider_form_pane_g4

0x9eb5,	// (0x00014638) slider_form_pane_g5

0x9ea4,	// (0x00014627) slider_form_pane_g6

0x20cf,	// (0x0000c852) slider_form_pane_g7

0xa53b,	// (0x00014cbe) slider_set_pane_vc_g3

0xa544,	// (0x00014cc7) slider_set_pane_vc_g4

0xa54d,	// (0x00014cd0) slider_set_pane_vc_g5

0xa53b,	// (0x00014cbe) slider_set_pane_vc_g6

0xa556,	// (0x00014cd9) slider_set_pane_vc_g7

0xa53b,	// (0x00014cbe) slider_form_pane_vc_g1

0xa544,	// (0x00014cc7) slider_form_pane_vc_g2

0xa54d,	// (0x00014cd0) slider_form_pane_vc_g3

0xa53b,	// (0x00014cbe) slider_form_pane_vc_g4

0xa924,	// (0x000150a7) slider_form_pane_vc_g5

0x0004,

0xfa73,	// (0x0001a1f6) slider_form_pane_vc_g

0x43ee,	// (0x0000eb71) main_idle_act3_pane

0xc48a,	// (0x00016c0d) ai3_links_pane

0x2829,	// (0x0000cfac) popup_ai3_data_window_ParamLimits

0x2829,	// (0x0000cfac) popup_ai3_data_window

0x64ea,	// (0x00010c6d) grid_ai3_links_pane

0x2841,	// (0x0000cfc4) cell_ai3_links_pane_ParamLimits

0x2841,	// (0x0000cfc4) cell_ai3_links_pane

0xc4bf,	// (0x00016c42) bg_popup_sub_pane_cp11

0xc4cc,	// (0x00016c4f) cell_ai3_links_pane_g1

0x64ea,	// (0x00010c6d) bg_popup_sub_pane_cp12

0xc4f1,	// (0x00016c74) heading_ai3_data_pane

0xc4f9,	// (0x00016c7c) list_ai3_gene_pane

0xc505,	// (0x00016c88) popup_ai3_data_window_g1

0xc50d,	// (0x00016c90) heading_ai3_data_pane_g1

0xc515,	// (0x00016c98) heading_ai3_data_pane_t1

0xc523,	// (0x00016ca6) list_double_ai3_gene_pane_ParamLimits

0xc523,	// (0x00016ca6) list_double_ai3_gene_pane

0xc530,	// (0x00016cb3) list_single_ai3_gene_pane_ParamLimits

0xc530,	// (0x00016cb3) list_single_ai3_gene_pane

0xb0c4,	// (0x00015847) list_highlight_pane_cp7_ParamLimits

0xb0c4,	// (0x00015847) list_highlight_pane_cp7

0xc53d,	// (0x00016cc0) list_single_a13_gene_pane_t1_ParamLimits

0xc53d,	// (0x00016cc0) list_single_a13_gene_pane_t1

0xc554,	// (0x00016cd7) list_single_ai3_gene_pane_g1

0xc55d,	// (0x00016ce0) list_single_ai3_gene_pane_g2

0x0001,

0xfcba,	// (0x0001a43d) list_single_ai3_gene_pane_g

0xc565,	// (0x00016ce8) list_double_ai3_gene_pane_g1_ParamLimits

0xc565,	// (0x00016ce8) list_double_ai3_gene_pane_g1

0xc571,	// (0x00016cf4) list_double_ai3_gene_pane_t1_ParamLimits

0xc571,	// (0x00016cf4) list_double_ai3_gene_pane_t1

0xc58d,	// (0x00016d10) list_double_ai3_gene_pane_t2_ParamLimits

0xc58d,	// (0x00016d10) list_double_ai3_gene_pane_t2

0xc5a2,	// (0x00016d25) list_double_ai3_gene_pane_t3_ParamLimits

0xc5a2,	// (0x00016d25) list_double_ai3_gene_pane_t3

0x0002,

0xfcbf,	// (0x0001a442) list_double_ai3_gene_pane_t_ParamLimits

0xfcbf,	// (0x0001a442) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc35b,	// (0x00016ade) aid_size_min_col_2

0x26e9,	// (0x0000ce6c) aid_size_min_msg_ParamLimits

0x26e9,	// (0x0000ce6c) aid_size_min_msg

0x2474,	// (0x0000cbf7) fep_vkb_top_text_pane_g2_ParamLimits

0x2474,	// (0x0000cbf7) fep_vkb_top_text_pane_g2

0x0001,

0xfb26,	// (0x0001a2a9) fep_vkb_top_text_pane_g_ParamLimits

0xfb26,	// (0x0001a2a9) fep_vkb_top_text_pane_g

0x43ee,	// (0x0000eb71) main_hc_apps_shell_pane

0xc5bf,	// (0x00016d42) grid_hc_apps_pane_ParamLimits

0xc5bf,	// (0x00016d42) grid_hc_apps_pane

0xc5ce,	// (0x00016d51) list_hc_apps_pane

0xc5d6,	// (0x00016d59) scroll_pane_cp37_ParamLimits

0xc5d6,	// (0x00016d59) scroll_pane_cp37

0x2857,	// (0x0000cfda) cell_hc_apps_pane_ParamLimits

0x2857,	// (0x0000cfda) cell_hc_apps_pane

0x28f1,	// (0x0000d074) cell_hc_apps_pane_g1_ParamLimits

0x28f1,	// (0x0000d074) cell_hc_apps_pane_g1

0xc69d,	// (0x00016e20) cell_hc_apps_pane_g2_ParamLimits

0xc69d,	// (0x00016e20) cell_hc_apps_pane_g2

0xc6b9,	// (0x00016e3c) cell_hc_apps_pane_g3_ParamLimits

0xc6b9,	// (0x00016e3c) cell_hc_apps_pane_g3

0x0002,

0xfcc6,	// (0x0001a449) cell_hc_apps_pane_g_ParamLimits

0xfcc6,	// (0x0001a449) cell_hc_apps_pane_g

0x291e,	// (0x0000d0a1) cell_hc_apps_pane_t1_ParamLimits

0x291e,	// (0x0000d0a1) cell_hc_apps_pane_t1

0x6962,	// (0x000110e5) grid_highlight_pane_cp10_ParamLimits

0x6962,	// (0x000110e5) grid_highlight_pane_cp10

0x295c,	// (0x0000d0df) list_single_hc_apps_pane_ParamLimits

0x295c,	// (0x0000d0df) list_single_hc_apps_pane

0x2988,	// (0x0000d10b) list_single_hc_apps_pane_g1

0x29a1,	// (0x0000d124) list_single_hc_apps_pane_g2

0x0001,

0xfccd,	// (0x0001a450) list_single_hc_apps_pane_g

0x29ba,	// (0x0000d13d) list_single_hc_apps_pane_g2_copy1

0x29d6,	// (0x0000d159) list_single_hc_apps_pane_t1

0x66bb,	// (0x00010e3e) bg_set_opt_pane_cp_ParamLimits

0x45ff,	// (0x0000ed82) setting_slider_pane_t1_ParamLimits

0xdc7b,	// (0x000183fe) setting_slider_pane_t2_ParamLimits

0xdc94,	// (0x00018417) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00019ce1) setting_slider_pane_t_ParamLimits

0x4645,	// (0x0000edc8) slider_set_pane_ParamLimits

0x4ae1,	// (0x0000f264) control_pane_g5_ParamLimits

0x4ae1,	// (0x0000f264) control_pane_g5

0x9d1c,	// (0x0001449f) slider_set_pane_g1_ParamLimits

0x53ec,	// (0x0000fb6f) slider_set_pane_g2_ParamLimits

0x53f8,	// (0x0000fb7b) slider_set_pane_g3_ParamLimits

0x540c,	// (0x0000fb8f) slider_set_pane_g4_ParamLimits

0x5424,	// (0x0000fba7) slider_set_pane_g5_ParamLimits

0x53f8,	// (0x0000fb7b) slider_set_pane_g6_ParamLimits

0xe56b,	// (0x00018cee) slider_set_pane_g7_ParamLimits

0xf949,	// (0x0001a0cc) slider_set_pane_g_ParamLimits

0x66bb,	// (0x00010e3e) navi_icon_text_pane_ParamLimits

0x1826,	// (0x0000bfa9) aid_fill_nsta_2_ParamLimits

0x1854,	// (0x0000bfd7) aid_touch_tab_arrow_left_ParamLimits

0x1868,	// (0x0000bfeb) aid_touch_tab_arrow_right_ParamLimits

0x1904,	// (0x0000c087) clock_nsta_pane_ParamLimits

0x9834,	// (0x00013fb7) navi_icon_pane_g1_ParamLimits

0x9840,	// (0x00013fc3) navi_text_pane_t1_ParamLimits

0xad22,	// (0x000154a5) navi_icon_text_pane_g1_ParamLimits

0xad2e,	// (0x000154b1) navi_icon_text_pane_t1_ParamLimits

0x2988,	// (0x0000d10b) list_single_hc_apps_pane_g1_ParamLimits

0x29a1,	// (0x0000d124) list_single_hc_apps_pane_g2_ParamLimits

0xfccd,	// (0x0001a450) list_single_hc_apps_pane_g_ParamLimits

0x29ba,	// (0x0000d13d) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x29d6,	// (0x0000d159) list_single_hc_apps_pane_t1_ParamLimits

0xdbc1,	// (0x00018344) popup_toolbar2_fixed_window_ParamLimits

0xdbc1,	// (0x00018344) popup_toolbar2_fixed_window

0xe35a,	// (0x00018add) popup_toolbar2_float_window

0x64ea,	// (0x00010c6d) bg_popup_sub_pane_cp27

0xc7c5,	// (0x00016f48) grid_toolbar2_float_pane

0x64ea,	// (0x00010c6d) bg_popup_sub_pane_cp26

0xc7c5,	// (0x00016f48) grid_toolbar2_fixed_pane

0x2a04,	// (0x0000d187) cell_toolbar2_fixed_pane_ParamLimits

0x2a04,	// (0x0000d187) cell_toolbar2_fixed_pane

0x2a1f,	// (0x0000d1a2) cell_toolbar2_fixed_pane_g1

0xc7e7,	// (0x00016f6a) toolbar2_fixed_button_pane

0x89a3,	// (0x00013126) toolbar2_fixed_button_pane_g1

0x89b3,	// (0x00013136) toolbar2_fixed_button_pane_g2

0x89ab,	// (0x0001312e) toolbar2_fixed_button_pane_g3

0x89c3,	// (0x00013146) toolbar2_fixed_button_pane_g4

0x89bb,	// (0x0001313e) toolbar2_fixed_button_pane_g5

0x89cb,	// (0x0001314e) toolbar2_fixed_button_pane_g6

0x89d3,	// (0x00013156) toolbar2_fixed_button_pane_g7

0x89e3,	// (0x00013166) toolbar2_fixed_button_pane_g8

0x89db,	// (0x0001315e) toolbar2_fixed_button_pane_g9

0x0008,

0xf84b,	// (0x00019fce) toolbar2_fixed_button_pane_g

0xc7ef,	// (0x00016f72) cell_toolbar2_float_pane_ParamLimits

0xc7ef,	// (0x00016f72) cell_toolbar2_float_pane

0xc800,	// (0x00016f83) cell_toolbar2_float_pane_g1

0xc7e7,	// (0x00016f6a) toolbar2_fixed_button_pane_cp

0x2429,	// (0x0000cbac) fep_vkb_accented_list_pane_ParamLimits

0x2429,	// (0x0000cbac) fep_vkb_accented_list_pane

0x57e5,	// (0x0000ff68) bg_popup_fep_shadow_pane_g9

0x818b,	// (0x0001290e) bg_popup_fep_shadow_pane_cp3

0x7676,	// (0x00011df9) list_accented_list_pane

0xc809,	// (0x00016f8c) list_single_accented_list_pane_ParamLimits

0xc809,	// (0x00016f8c) list_single_accented_list_pane

0x818b,	// (0x0001290e) list_highlight_pane_cp10

0xc81a,	// (0x00016f9d) list_single_accented_list_pane_t1

0xe29c,	// (0x00018a1f) popup_slider_window_ParamLimits

0xe29c,	// (0x00018a1f) popup_slider_window

0xc352,	// (0x00016ad5) aid_indentation_list_msg

0x2afe,	// (0x0000d281) bg_popup_window_pane_cp19

0xc91e,	// (0x000170a1) popup_slider_window_g1

0xc93a,	// (0x000170bd) popup_slider_window_g2

0xc956,	// (0x000170d9) popup_slider_window_g3

0x0005,

0xfcd2,	// (0x0001a455) popup_slider_window_g

0xc9b2,	// (0x00017135) popup_slider_window_t1

0xca24,	// (0x000171a7) small_volume_slider_vertical_pane

0xb0ff,	// (0x00015882) small_volume_slider_vertical_pane_g1

0xb0ff,	// (0x00015882) small_volume_slider_vertical_pane_g2

0xca40,	// (0x000171c3) small_volume_slider_vertical_pane_g3

0x0002,

0xfce4,	// (0x0001a467) small_volume_slider_vertical_pane_g

0xdb45,	// (0x000182c8) area_side_right_pane_ParamLimits

0xdb45,	// (0x000182c8) area_side_right_pane

0xe5ce,	// (0x00018d51) aid_size_side_button_ParamLimits

0xe5ce,	// (0x00018d51) aid_size_side_button

0xe5e7,	// (0x00018d6a) grid_sctrl_middle_pane_ParamLimits

0xe5e7,	// (0x00018d6a) grid_sctrl_middle_pane

0x59fd,	// (0x00010180) sctrl_sk_bottom_pane

0x5a0e,	// (0x00010191) sctrl_sk_top_pane

0x5a20,	// (0x000101a3) aid_touch_sctrl_top

0x5a2d,	// (0x000101b0) bg_sctrl_sk_pane_ParamLimits

0x5a2d,	// (0x000101b0) bg_sctrl_sk_pane

0x5a3b,	// (0x000101be) sctrl_sk_top_pane_g1

0x5a48,	// (0x000101cb) sctrl_sk_top_pane_t1

0x5a20,	// (0x000101a3) aid_touch_sctrl_bottom

0x5a2d,	// (0x000101b0) bg_sctrl_sk_pane_cp_ParamLimits

0x5a2d,	// (0x000101b0) bg_sctrl_sk_pane_cp

0x5a63,	// (0x000101e6) sctrl_sk_bottom_pane_g1

0x5a48,	// (0x000101cb) sctrl_sk_bottom_pane_t1

0xe5fd,	// (0x00018d80) cell_sctrl_middle_pane_ParamLimits

0xe5fd,	// (0x00018d80) cell_sctrl_middle_pane

0xe60e,	// (0x00018d91) aid_touch_sctrl_middle_ParamLimits

0xe60e,	// (0x00018d91) aid_touch_sctrl_middle

0xe61b,	// (0x00018d9e) bg_sctrl_middle_pane_ParamLimits

0xe61b,	// (0x00018d9e) bg_sctrl_middle_pane

0x606b,	// (0x000107ee) cell_sctrl_middle_pane_g1_ParamLimits

0x606b,	// (0x000107ee) cell_sctrl_middle_pane_g1

0xe629,	// (0x00018dac) cell_sctrl_middle_pane_g2_ParamLimits

0xe629,	// (0x00018dac) cell_sctrl_middle_pane_g2

0x0001,

0xfcf0,	// (0x0001a473) cell_sctrl_middle_pane_g_ParamLimits

0xfcf0,	// (0x0001a473) cell_sctrl_middle_pane_g

0x89a3,	// (0x00013126) bg_sctrl_middle_pane_g1

0x89ab,	// (0x0001312e) bg_sctrl_middle_pane_g2

0x89b3,	// (0x00013136) bg_sctrl_middle_pane_g3

0x89bb,	// (0x0001313e) bg_sctrl_middle_pane_g4

0x89c3,	// (0x00013146) bg_sctrl_middle_pane_g5

0x89cb,	// (0x0001314e) bg_sctrl_middle_pane_g6

0x89d3,	// (0x00013156) bg_sctrl_middle_pane_g7

0x89db,	// (0x0001315e) bg_sctrl_middle_pane_g8

0x0007,

0xfcf5,	// (0x0001a478) bg_sctrl_middle_pane_g

0x89e3,	// (0x00013166) bg_sctrl_middle_pane_g8_copy1

0x89a3,	// (0x00013126) bg_sctrl_sk_pane_g1

0x89b3,	// (0x00013136) bg_sctrl_sk_pane_g2

0x89ab,	// (0x0001312e) bg_sctrl_sk_pane_g3

0x0008,

0xf84b,	// (0x00019fce) bg_sctrl_sk_pane_g

0x6dde,	// (0x00011561) aid_size_touch_scroll_bar

0x89c3,	// (0x00013146) bg_sctrl_sk_pane_g4

0x89bb,	// (0x0001313e) bg_sctrl_sk_pane_g5

0x89cb,	// (0x0001314e) bg_sctrl_sk_pane_g6

0x89d3,	// (0x00013156) bg_sctrl_sk_pane_g7

0x89e3,	// (0x00013166) bg_sctrl_sk_pane_g8

0x89db,	// (0x0001315e) bg_sctrl_sk_pane_g9

0x4c89,	// (0x0000f40c) popup_fep_china_hwr2_fs_candidate_window

0xde97,	// (0x0001861a) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xde97,	// (0x0001861a) popup_fep_china_hwr2_fs_control_window

0x5805,	// (0x0000ff88) sctrl_sk_top_pane_g2

0x0001,

0xfceb,	// (0x0001a46e) sctrl_sk_top_pane_g

0x2c1e,	// (0x0000d3a1) aid_fep_china_hwr2_fs_cell_ParamLimits

0x2c1e,	// (0x0000d3a1) aid_fep_china_hwr2_fs_cell

0x2c32,	// (0x0000d3b5) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x2c32,	// (0x0000d3b5) bg_popup_fep_shadow_pane_cp4

0x2c49,	// (0x0000d3cc) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x2c49,	// (0x0000d3cc) bg_popup_fep_shadow_pane_cp5

0x2c5b,	// (0x0000d3de) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x2c5b,	// (0x0000d3de) popup_fep_china_hwr2_fs_control_bar_grid

0x2c6f,	// (0x0000d3f2) popup_fep_china_hwr2_fs_control_funtion_grid

0xca9b,	// (0x0001721e) aid_fep_china_hwr2_fs_candi_cell

0x64ea,	// (0x00010c6d) bg_popup_fep_shadow_pane_cp6

0xcaa5,	// (0x00017228) popup_fep_china_hwr2_fs_candidate_grid

0x2c77,	// (0x0000d3fa) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x2c77,	// (0x0000d3fa) cell_fep_china_hwr2_fs_funtion_grid

0xb0ff,	// (0x00015882) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0xcac5,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0xcac5,	// (0x00017248) cell_fep_china_hwr2_fs_funtion_grid_g1

0xcad3,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0xcad3,	// (0x00017256) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd06,	// (0x0001a489) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd06,	// (0x0001a489) cell_fep_china_hwr2_fs_funtion_grid_g

0x2c8f,	// (0x0000d412) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x2c8f,	// (0x0000d412) cell_fep_china_hwr2_fs_funtion_grid_t1

0x2ca4,	// (0x0000d427) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x2ca4,	// (0x0000d427) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd0b,	// (0x0001a48e) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd0b,	// (0x0001a48e) cell_fep_china_hwr2_fs_funtion_grid_t

0xcb1a,	// (0x0001729d) popup_fep_china_hwr2_fs_control_bar_grid_g1

0xcb22,	// (0x000172a5) popup_fep_china_hwr2_fs_control_bar_grid_g2

0xcb2a,	// (0x000172ad) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd10,	// (0x0001a493) popup_fep_china_hwr2_fs_control_bar_grid_g

0xcb32,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0xcb32,	// (0x000172b5) cell_fep_china_hwr2_fs_candidate_grid

0xcb4b,	// (0x000172ce) popup_fep_china_hwr2_fs_candidate_grid_g20

0xcb53,	// (0x000172d6) popup_fep_china_hwr2_fs_candidate_grid_g21

0xb0ff,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g1

0xb0ff,	// (0x00015882) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb2b,	// (0x0001a2ae) cell_fep_china_hwr2_fs_candidate_grid_g

0xcb5b,	// (0x000172de) cell_fep_china_hwr2_fs_candidate_grid_t1

0x85c9,	// (0x00012d4c) clock_nsta_pane_cp_24_ParamLimits

0x85c9,	// (0x00012d4c) clock_nsta_pane_cp_24

0x863c,	// (0x00012dbf) indicator_nsta_pane_cp_24_ParamLimits

0x863c,	// (0x00012dbf) indicator_nsta_pane_cp_24

0x96b1,	// (0x00013e34) heading_pane_g1

0x0001,

0xf8b0,	// (0x0001a033) heading_pane_g

0x21ee,	// (0x0000c971) grid_sct_catagory_button_pane

0xa12d,	// (0x000148b0) scroll_pane_cp5_ParamLimits

0xad70,	// (0x000154f3) button_value_adjust_pane_cp5_ParamLimits

0xad70,	// (0x000154f3) button_value_adjust_pane_cp5

0xae66,	// (0x000155e9) form2_midp_time_pane_ParamLimits

0xcb69,	// (0x000172ec) cell_sct_catagory_button_pane_ParamLimits

0xcb69,	// (0x000172ec) cell_sct_catagory_button_pane

0xb0c4,	// (0x00015847) bg_button_pane_cp01_ParamLimits

0xb0c4,	// (0x00015847) bg_button_pane_cp01

0xb0ff,	// (0x00015882) cell_sct_catagory_button_pane_g1

0xe30b,	// (0x00018a8e) popup_tb_extension_window

0x2cc0,	// (0x0000d443) aid_size_cell_ext_ParamLimits

0x2cc0,	// (0x0000d443) aid_size_cell_ext

0x6cbc,	// (0x0001143f) bg_tb_trans_pane_cp1_ParamLimits

0x6cbc,	// (0x0001143f) bg_tb_trans_pane_cp1

0x2ce6,	// (0x0000d469) grid_tb_ext_pane_ParamLimits

0x2ce6,	// (0x0000d469) grid_tb_ext_pane

0x2d1c,	// (0x0000d49f) cell_tb_ext_pane_ParamLimits

0x2d1c,	// (0x0000d49f) cell_tb_ext_pane

0x2d40,	// (0x0000d4c3) cell_tb_ext_pane_g1_ParamLimits

0x2d40,	// (0x0000d4c3) cell_tb_ext_pane_g1

0xcbf3,	// (0x00017376) cell_tb_ext_pane_t1

0x6962,	// (0x000110e5) list_highlight_pane_cp11_ParamLimits

0x6962,	// (0x000110e5) list_highlight_pane_cp11

0xdbd6,	// (0x00018359) popup_uni_indicator_window_ParamLimits

0xdbd6,	// (0x00018359) popup_uni_indicator_window

0x73cb,	// (0x00011b4e) bg_popup_sub_pane_cp14

0xcc0e,	// (0x00017391) list_uniindi_pane

0xcc1a,	// (0x0001739d) uniindi_top_pane

0x6962,	// (0x000110e5) bg_uniindi_top_pane

0xcc39,	// (0x000173bc) uniindi_top_pane_g1

0xcc4f,	// (0x000173d2) uniindi_top_pane_g2

0x0003,

0xfd17,	// (0x0001a49a) uniindi_top_pane_g

0xcc79,	// (0x000173fc) uniindi_top_pane_t1

0xcca3,	// (0x00017426) list_single_uniindi_pane_ParamLimits

0xcca3,	// (0x00017426) list_single_uniindi_pane

0xb0ff,	// (0x00015882) bg_uniindi_top_pane_g1

0xccb5,	// (0x00017438) list_single_uniindi_pane_g1

0xccc8,	// (0x0001744b) list_single_uniindi_pane_t1

0x43ee,	// (0x0000eb71) control_bg_pane

0xcced,	// (0x00017470) bg_sctrl_sk_pane_cp1

0xccf6,	// (0x00017479) bg_sctrl_sk_pane_cp2

0xccff,	// (0x00017482) control_bg_pane_g1

0xcd08,	// (0x0001748b) control_bg_pane_g2

0x0001,

0xfd20,	// (0x0001a4a3) control_bg_pane_g

0xabc6,	// (0x00015349) cell_indicator_nsta_pane_g1_ParamLimits

0x22f3,	// (0x0000ca76) cell_indicator_nsta_pane_g2_ParamLimits

0xfa8f,	// (0x0001a212) cell_indicator_nsta_pane_g_ParamLimits

0xaece,	// (0x00015651) form2_midp_time_pane_t1_ParamLimits

0x55b2,	// (0x0000fd35) main_idle_act4_pane_ParamLimits

0x55b2,	// (0x0000fd35) main_idle_act4_pane

0xe30b,	// (0x00018a8e) popup_tb_extension_window_ParamLimits

0x2d06,	// (0x0000d489) tb_ext_find_pane_ParamLimits

0x2d06,	// (0x0000d489) tb_ext_find_pane

0xcd11,	// (0x00017494) ai_gene_pane_1_cp1

0x82c6,	// (0x00012a49) ai_gene_pane_2_cp1

0xcd19,	// (0x0001749c) list_single_idle_plugin_calendar_pane

0xcd22,	// (0x000174a5) list_single_idle_plugin_notification_pane

0xcd2b,	// (0x000174ae) list_single_idle_plugin_player_pane

0x2d5d,	// (0x0000d4e0) list_single_idle_plugin_shortcut_pane_ParamLimits

0x2d5d,	// (0x0000d4e0) list_single_idle_plugin_shortcut_pane

0x2d85,	// (0x0000d508) main_idle_act4_pane_t1

0x2d9b,	// (0x0000d51e) main_idle_act4_pane_t2

0x0001,

0xfd25,	// (0x0001a4a8) main_idle_act4_pane_t

0x2db1,	// (0x0000d534) middle_sk_idle_act4_pane_ParamLimits

0x2db1,	// (0x0000d534) middle_sk_idle_act4_pane

0x2dcd,	// (0x0000d550) popup_clock_digital_analogue_window_cp2

0x2df3,	// (0x0000d576) shortcut_wheel_idle_act4_pane_ParamLimits

0x2df3,	// (0x0000d576) shortcut_wheel_idle_act4_pane

0xb0ff,	// (0x00015882) shortcut_wheel_idle_act4_pane_g1

0xb0ff,	// (0x00015882) shortcut_wheel_idle_act4_pane_g2

0xb0ff,	// (0x00015882) shortcut_wheel_idle_act4_pane_g3

0xb0ff,	// (0x00015882) shortcut_wheel_idle_act4_pane_g4

0xb0ff,	// (0x00015882) shortcut_wheel_idle_act4_pane_g5

0xcdbe,	// (0x00017541) shortcut_wheel_idle_act4_pane_g6

0xcdc6,	// (0x00017549) shortcut_wheel_idle_act4_pane_g7

0xcdce,	// (0x00017551) shortcut_wheel_idle_act4_pane_g8

0xcdd6,	// (0x00017559) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2a,	// (0x0001a4ad) shortcut_wheel_idle_act4_pane_g

0xeba0,	// (0x00019323) middle_sk_idle_act4_pane_g1_ParamLimits

0xeba0,	// (0x00019323) middle_sk_idle_act4_pane_g1

0x2e6e,	// (0x0000d5f1) middle_sk_idle_act4_pane_g2_ParamLimits

0x2e6e,	// (0x0000d5f1) middle_sk_idle_act4_pane_g2

0x0001,

0xfd4d,	// (0x0001a4d0) middle_sk_idle_act4_pane_g_ParamLimits

0xfd4d,	// (0x0001a4d0) middle_sk_idle_act4_pane_g

0x2e86,	// (0x0000d609) middle_sk_idle_act4_pane_t1_ParamLimits

0x2e86,	// (0x0000d609) middle_sk_idle_act4_pane_t1

0x2eb5,	// (0x0000d638) grid_ai_shortcut_pane_ParamLimits

0x2eb5,	// (0x0000d638) grid_ai_shortcut_pane

0x2ed2,	// (0x0000d655) list_highlight_pane_cp16_ParamLimits

0x2ed2,	// (0x0000d655) list_highlight_pane_cp16

0x2edf,	// (0x0000d662) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x2edf,	// (0x0000d662) list_single_idle_plugin_shortcut_pane_g1

0x2eeb,	// (0x0000d66e) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x2eeb,	// (0x0000d66e) list_single_idle_plugin_shortcut_pane_g2

0x2f07,	// (0x0000d68a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x2f07,	// (0x0000d68a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd52,	// (0x0001a4d5) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd52,	// (0x0001a4d5) list_single_idle_plugin_shortcut_pane_g

0x2f1c,	// (0x0000d69f) cell_ai_shortcut_pane_ParamLimits

0x2f1c,	// (0x0000d69f) cell_ai_shortcut_pane

0x2f32,	// (0x0000d6b5) cell_ai_shortcut_pane_g1_ParamLimits

0x2f32,	// (0x0000d6b5) cell_ai_shortcut_pane_g1

0xcd11,	// (0x00017494) ai_gene_pane_1_cp2

0xcf03,	// (0x00017686) ai_gene_pane_2_cp2

0xcf0b,	// (0x0001768e) list_highlight_pane_cp15

0xcf14,	// (0x00017697) list_single_idle_plugin_calendar_pane_g1

0xcf0b,	// (0x0001768e) list_highlight_pane_cp17

0xcf1c,	// (0x0001769f) list_single_idle_plugin_calendar_pane_g1_copy1

0xcf24,	// (0x000176a7) list_single_idle_plugin_player_pane_g1

0xa2fb,	// (0x00014a7e) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd59,	// (0x0001a4dc) list_single_idle_plugin_player_pane_g

0xcf2c,	// (0x000176af) list_single_idle_plugin_player_pane_t1

0xcf3a,	// (0x000176bd) list_single_idle_plugin_player_pane_t2

0xcf48,	// (0x000176cb) list_single_idle_plugin_player_pane_t3

0xcf56,	// (0x000176d9) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd5e,	// (0x0001a4e1) list_single_idle_plugin_player_pane_t

0xcf64,	// (0x000176e7) wait_bar_pane_cp15

0xcf6c,	// (0x000176ef) grid_ai_notification_pane

0xa2fb,	// (0x00014a7e) list_single_idle_plugin_notification_pane_g1

0x2f54,	// (0x0000d6d7) cell_ai_notification_pane_ParamLimits

0x2f54,	// (0x0000d6d7) cell_ai_notification_pane

0xcf82,	// (0x00017705) cell_ai_notification_pane_g1

0xcf8a,	// (0x0001770d) cell_ai_notification_pane_t1

0x2f61,	// (0x0000d6e4) tb_ext_find_button_pane

0x2f69,	// (0x0000d6ec) tb_ext_find_pane_g1

0x2f71,	// (0x0000d6f4) tb_ext_find_pane_t1

0x7b86,	// (0x00012309) tb_ext_find_button_pane_g1

0xcfb6,	// (0x00017739) tb_ext_find_button_pane_g2

0x0001,

0xfd67,	// (0x0001a4ea) tb_ext_find_button_pane_g

0x2d85,	// (0x0000d508) main_idle_act4_pane_t1_ParamLimits

0x2d9b,	// (0x0000d51e) main_idle_act4_pane_t2_ParamLimits

0xfd25,	// (0x0001a4a8) main_idle_act4_pane_t_ParamLimits

0x2dcd,	// (0x0000d550) popup_clock_digital_analogue_window_cp2_ParamLimits

0x2de3,	// (0x0000d566) sat_plugin_idle_act4_pane_ParamLimits

0x2de3,	// (0x0000d566) sat_plugin_idle_act4_pane

0x2f7f,	// (0x0000d702) sat_plugin_idle_act4_pane_t1_ParamLimits

0x2f7f,	// (0x0000d702) sat_plugin_idle_act4_pane_t1

0x2f97,	// (0x0000d71a) sat_plugin_idle_act4_pane_t2_ParamLimits

0x2f97,	// (0x0000d71a) sat_plugin_idle_act4_pane_t2

0x2faf,	// (0x0000d732) sat_plugin_idle_act4_pane_t3_ParamLimits

0x2faf,	// (0x0000d732) sat_plugin_idle_act4_pane_t3

0x2fc7,	// (0x0000d74a) sat_plugin_idle_act4_pane_t4_ParamLimits

0x2fc7,	// (0x0000d74a) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd6c,	// (0x0001a4ef) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd6c,	// (0x0001a4ef) sat_plugin_idle_act4_pane_t

0x44b1,	// (0x0000ec34) popup_battery_window_ParamLimits

0x44b1,	// (0x0000ec34) popup_battery_window

0x6962,	// (0x000110e5) bg_popup_sub_pane_cp25_ParamLimits

0x6962,	// (0x000110e5) bg_popup_sub_pane_cp25

0xd00b,	// (0x0001778e) popup_battery_window_g1_ParamLimits

0xd00b,	// (0x0001778e) popup_battery_window_g1

0xd017,	// (0x0001779a) popup_battery_window_t1_ParamLimits

0xd017,	// (0x0001779a) popup_battery_window_t1

0xd029,	// (0x000177ac) popup_battery_window_t2_ParamLimits

0xd029,	// (0x000177ac) popup_battery_window_t2

0x0001,

0xfd75,	// (0x0001a4f8) popup_battery_window_t_ParamLimits

0xfd75,	// (0x0001a4f8) popup_battery_window_t

0x0fd5,	// (0x0000b758) midp_canvas_pane_ParamLimits

0x102a,	// (0x0000b7ad) midp_keypad_pane_ParamLimits

0x102a,	// (0x0000b7ad) midp_keypad_pane

0x84da,	// (0x00012c5d) main_midp_pane_ParamLimits

0xac49,	// (0x000153cc) signal_pane_g2_cp_ParamLimits

0x2fdf,	// (0x0000d762) aid_size_cell_midp_keypad_ParamLimits

0x2fdf,	// (0x0000d762) aid_size_cell_midp_keypad

0x2ffd,	// (0x0000d780) midp_keyp_game_grid_pane_ParamLimits

0x2ffd,	// (0x0000d780) midp_keyp_game_grid_pane

0x301c,	// (0x0000d79f) midp_keyp_rocker_pane_ParamLimits

0x301c,	// (0x0000d79f) midp_keyp_rocker_pane

0x305d,	// (0x0000d7e0) midp_keyp_sk_left_pane_ParamLimits

0x305d,	// (0x0000d7e0) midp_keyp_sk_left_pane

0x30af,	// (0x0000d832) midp_keyp_sk_right_pane_ParamLimits

0x30af,	// (0x0000d832) midp_keyp_sk_right_pane

0x64ea,	// (0x00010c6d) bg_button_pane_cp03

0x30fb,	// (0x0000d87e) midp_keyp_sk_left_pane_g1

0x64ea,	// (0x00010c6d) bg_button_pane_cp04

0x30fb,	// (0x0000d87e) midp_keyp_sk_right_pane_g1

0xb0ff,	// (0x00015882) midp_keyp_rocker_pane_g1

0x3104,	// (0x0000d887) keyp_game_cell_pane_ParamLimits

0x3104,	// (0x0000d887) keyp_game_cell_pane

0x64ea,	// (0x00010c6d) bg_button_pane_cp02

0x3126,	// (0x0000d8a9) keyp_game_cell_pane_g1

0xdb87,	// (0x0001830a) popup_fep_vkb2_window_ParamLimits

0xdb87,	// (0x0001830a) popup_fep_vkb2_window

0xe636,	// (0x00018db9) aid_size_cell_vkb2_ParamLimits

0xe636,	// (0x00018db9) aid_size_cell_vkb2

0xe66c,	// (0x00018def) popup_fep_vkb2_window_g1_ParamLimits

0xe66c,	// (0x00018def) popup_fep_vkb2_window_g1

0xe6bc,	// (0x00018e3f) vkb2_area_bottom_pane_ParamLimits

0xe6bc,	// (0x00018e3f) vkb2_area_bottom_pane

0xe6fa,	// (0x00018e7d) vkb2_area_keypad_pane_ParamLimits

0xe6fa,	// (0x00018e7d) vkb2_area_keypad_pane

0xe738,	// (0x00018ebb) vkb2_area_top_pane_ParamLimits

0xe738,	// (0x00018ebb) vkb2_area_top_pane

0xe7b4,	// (0x00018f37) vkb2_top_entry_pane_ParamLimits

0xe7b4,	// (0x00018f37) vkb2_top_entry_pane

0xe7e1,	// (0x00018f64) vkb2_top_grid_left_pane_ParamLimits

0xe7e1,	// (0x00018f64) vkb2_top_grid_left_pane

0xe801,	// (0x00018f84) vkb2_top_grid_right_pane_ParamLimits

0xe801,	// (0x00018f84) vkb2_top_grid_right_pane

0x5cac,	// (0x0001042f) vkb2_cell_keypad_pane_ParamLimits

0x5cac,	// (0x0001042f) vkb2_cell_keypad_pane

0xe847,	// (0x00018fca) vkb2_area_bottom_grid_pane_ParamLimits

0xe847,	// (0x00018fca) vkb2_area_bottom_grid_pane

0xe86d,	// (0x00018ff0) vkb2_area_bottom_pane_g1_ParamLimits

0xe86d,	// (0x00018ff0) vkb2_area_bottom_pane_g1

0xe893,	// (0x00019016) vkb2_area_bottom_pane_g2_ParamLimits

0xe893,	// (0x00019016) vkb2_area_bottom_pane_g2

0xe8c4,	// (0x00019047) vkb2_area_bottom_pane_g3_ParamLimits

0xe8c4,	// (0x00019047) vkb2_area_bottom_pane_g3

0x0002,

0xfd7a,	// (0x0001a4fd) vkb2_area_bottom_pane_g_ParamLimits

0xfd7a,	// (0x0001a4fd) vkb2_area_bottom_pane_g

0x5e24,	// (0x000105a7) vkb2_top_cell_left_pane_ParamLimits

0x5e24,	// (0x000105a7) vkb2_top_cell_left_pane

0x3413,	// (0x0000db96) vkb2_top_entry_pane_g1_ParamLimits

0x3413,	// (0x0000db96) vkb2_top_entry_pane_g1

0x3421,	// (0x0000dba4) vkb2_top_entry_pane_t1_ParamLimits

0x3421,	// (0x0000dba4) vkb2_top_entry_pane_t1

0xebb6,	// (0x00019339) vkb2_top_entry_pane_t2_ParamLimits

0xebb6,	// (0x00019339) vkb2_top_entry_pane_t2

0xebe8,	// (0x0001936b) vkb2_top_entry_pane_t3_ParamLimits

0xebe8,	// (0x0001936b) vkb2_top_entry_pane_t3

0x0002,

0xfd81,	// (0x0001a504) vkb2_top_entry_pane_t_ParamLimits

0xfd81,	// (0x0001a504) vkb2_top_entry_pane_t

0xe91a,	// (0x0001909d) vkb2_top_grid_right_pane_g1_ParamLimits

0xe91a,	// (0x0001909d) vkb2_top_grid_right_pane_g1

0x5e87,	// (0x0001060a) vkb2_top_grid_right_pane_g2_ParamLimits

0x5e87,	// (0x0001060a) vkb2_top_grid_right_pane_g2

0x5e9f,	// (0x00010622) vkb2_top_grid_right_pane_g3_ParamLimits

0x5e9f,	// (0x00010622) vkb2_top_grid_right_pane_g3

0xe930,	// (0x000190b3) vkb2_top_grid_right_pane_g4_ParamLimits

0xe930,	// (0x000190b3) vkb2_top_grid_right_pane_g4

0x0003,

0xfd88,	// (0x0001a50b) vkb2_top_grid_right_pane_g_ParamLimits

0xfd88,	// (0x0001a50b) vkb2_top_grid_right_pane_g

0x5ecd,	// (0x00010650) vkb2_top_cell_left_pane_g1

0x5ee4,	// (0x00010667) vkb2_cell_keypad_pane_g1_ParamLimits

0x5ee4,	// (0x00010667) vkb2_cell_keypad_pane_g1

0xebfe,	// (0x00019381) vkb2_cell_keypad_pane_t1_ParamLimits

0xebfe,	// (0x00019381) vkb2_cell_keypad_pane_t1

0x5ef2,	// (0x00010675) vkb2_cell_bottom_grid_pane_ParamLimits

0x5ef2,	// (0x00010675) vkb2_cell_bottom_grid_pane

0x5f2b,	// (0x000106ae) vkb2_cell_bottom_grid_pane_g1

0x2e12,	// (0x0000d595) aid_call2_pane_cp02

0x2e1a,	// (0x0000d59d) aid_call_pane_cp02

0x2e22,	// (0x0000d5a5) clock_digital_number_pane_cp10

0x2e2a,	// (0x0000d5ad) clock_digital_number_pane_cp11

0x2e32,	// (0x0000d5b5) clock_digital_number_pane_cp12

0x2e3a,	// (0x0000d5bd) clock_digital_number_pane_cp13

0x2e42,	// (0x0000d5c5) clock_digital_separator_pane_cp10

0x7b86,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g1

0x7b86,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g2

0x2e4a,	// (0x0000d5cd) popup_clock_digital_analogue_window_cp2_g3

0x7b86,	// (0x00012309) popup_clock_digital_analogue_window_cp2_g4

0x2e4a,	// (0x0000d5cd) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd3d,	// (0x0001a4c0) popup_clock_digital_analogue_window_cp2_g

0x2e52,	// (0x0000d5d5) popup_clock_digital_analogue_window_cp2_t1

0x2e60,	// (0x0000d5e3) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd48,	// (0x0001a4cb) popup_clock_digital_analogue_window_cp2_t

0xb0ff,	// (0x00015882) clock_digital_number_pane_cp10_g1

0xb0ff,	// (0x00015882) clock_digital_number_pane_cp10_g2

0x0001,

0xfb2b,	// (0x0001a2ae) clock_digital_number_pane_cp10_g

0xb0ff,	// (0x00015882) clock_digital_separator_pane_cp10_g1

0xb0ff,	// (0x00015882) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb2b,	// (0x0001a2ae) clock_digital_separator_pane_cp10_g

0xcc5b,	// (0x000173de) uniindi_top_pane_g3

0xcc6c,	// (0x000173ef) uniindi_top_pane_g4

0x5d17,	// (0x0001049a) vkb2_row_keypad_pane_ParamLimits

0x5d17,	// (0x0001049a) vkb2_row_keypad_pane

0x5f47,	// (0x000106ca) vkb2_cell_t_keypad_pane_ParamLimits

0x5f47,	// (0x000106ca) vkb2_cell_t_keypad_pane

0x5f54,	// (0x000106d7) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x5f54,	// (0x000106d7) vkb2_cell_t_keypad_pane_cp08

0x5f64,	// (0x000106e7) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x5f64,	// (0x000106e7) vkb2_cell_t_keypad_pane_cp09

0x5f75,	// (0x000106f8) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x5f75,	// (0x000106f8) vkb2_cell_t_keypad_pane_cp01

0x5f85,	// (0x00010708) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x5f85,	// (0x00010708) vkb2_cell_t_keypad_pane_cp02

0x5f95,	// (0x00010718) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x5f95,	// (0x00010718) vkb2_cell_t_keypad_pane_cp03

0x5fa5,	// (0x00010728) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x5fa5,	// (0x00010728) vkb2_cell_t_keypad_pane_cp04

0x5fb5,	// (0x00010738) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x5fb5,	// (0x00010738) vkb2_cell_t_keypad_pane_cp05

0x5fc5,	// (0x00010748) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x5fc5,	// (0x00010748) vkb2_cell_t_keypad_pane_cp06

0x5fd5,	// (0x00010758) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x5fd5,	// (0x00010758) vkb2_cell_t_keypad_pane_cp07

0x5fe5,	// (0x00010768) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x5fe5,	// (0x00010768) vkb2_cell_t_keypad_pane_cp10

0x5805,	// (0x0000ff88) vkb2_cell_t_keypad_pane_g1

0xec15,	// (0x00019398) vkb2_cell_t_keypad_pane_t1

0x43ee,	// (0x0000eb71) popup_grid_graphic2_window

0x3486,	// (0x0000dc09) aid_size_cell_graphic2_ParamLimits

0x3486,	// (0x0000dc09) aid_size_cell_graphic2

0x34c4,	// (0x0000dc47) bg_popup_window_pane_cp21_ParamLimits

0x34c4,	// (0x0000dc47) bg_popup_window_pane_cp21

0x34d2,	// (0x0000dc55) graphic2_pages_pane_ParamLimits

0x34d2,	// (0x0000dc55) graphic2_pages_pane

0x351b,	// (0x0000dc9e) grid_graphic2_control_pane_ParamLimits

0x351b,	// (0x0000dc9e) grid_graphic2_control_pane

0x3559,	// (0x0000dcdc) grid_graphic2_pane_ParamLimits

0x3559,	// (0x0000dcdc) grid_graphic2_pane

0x35c8,	// (0x0000dd4b) cell_graphic2_pane

0x43ee,	// (0x0000eb71) main_comp_mode_pane

0xc4f9,	// (0x00016c7c) list_ai3_gene_pane_ParamLimits

0x2afe,	// (0x0000d281) bg_popup_window_pane_cp19_ParamLimits

0xc8c6,	// (0x00017049) bg_touch_area_indi_pane_ParamLimits

0xc8c6,	// (0x00017049) bg_touch_area_indi_pane

0xc8dc,	// (0x0001705f) bg_touch_area_indi_pane_cp01_ParamLimits

0xc8dc,	// (0x0001705f) bg_touch_area_indi_pane_cp01

0xc8f2,	// (0x00017075) bg_touch_area_indi_pane_cp02_ParamLimits

0xc8f2,	// (0x00017075) bg_touch_area_indi_pane_cp02

0xc908,	// (0x0001708b) bg_touch_area_indi_pane_cp03_ParamLimits

0xc908,	// (0x0001708b) bg_touch_area_indi_pane_cp03

0xc91e,	// (0x000170a1) popup_slider_window_g1_ParamLimits

0xc93a,	// (0x000170bd) popup_slider_window_g2_ParamLimits

0xc956,	// (0x000170d9) popup_slider_window_g3_ParamLimits

0xfcd2,	// (0x0001a455) popup_slider_window_g_ParamLimits

0xc9b2,	// (0x00017135) popup_slider_window_t1_ParamLimits

0xca24,	// (0x000171a7) small_volume_slider_vertical_pane_ParamLimits

0x35c8,	// (0x0000dd4b) cell_graphic2_pane_ParamLimits

0x3613,	// (0x0000dd96) bg_button_pane_cp10_ParamLimits

0x3613,	// (0x0000dd96) bg_button_pane_cp10

0x3624,	// (0x0000dda7) bg_button_pane_cp11_ParamLimits

0x3624,	// (0x0000dda7) bg_button_pane_cp11

0x3635,	// (0x0000ddb8) graphic2_pages_pane_g1_ParamLimits

0x3635,	// (0x0000ddb8) graphic2_pages_pane_g1

0x3650,	// (0x0000ddd3) graphic2_pages_pane_g2_ParamLimits

0x3650,	// (0x0000ddd3) graphic2_pages_pane_g2

0x0001,

0xfd96,	// (0x0001a519) graphic2_pages_pane_g_ParamLimits

0xfd96,	// (0x0001a519) graphic2_pages_pane_g

0x3668,	// (0x0000ddeb) graphic2_pages_pane_t1_ParamLimits

0x3668,	// (0x0000ddeb) graphic2_pages_pane_t1

0x3680,	// (0x0000de03) cell_graphic2_control_pane_ParamLimits

0x3680,	// (0x0000de03) cell_graphic2_control_pane

0x36aa,	// (0x0000de2d) cell_graphic2_pane_g1_ParamLimits

0x36aa,	// (0x0000de2d) cell_graphic2_pane_g1

0xec27,	// (0x000193aa) cell_graphic2_pane_g2_ParamLimits

0xec27,	// (0x000193aa) cell_graphic2_pane_g2

0x36b7,	// (0x0000de3a) cell_graphic2_pane_g3_ParamLimits

0x36b7,	// (0x0000de3a) cell_graphic2_pane_g3

0xec34,	// (0x000193b7) cell_graphic2_pane_g4_ParamLimits

0xec34,	// (0x000193b7) cell_graphic2_pane_g4

0x36c4,	// (0x0000de47) cell_graphic2_pane_g5_ParamLimits

0x36c4,	// (0x0000de47) cell_graphic2_pane_g5

0x0004,

0xfd9b,	// (0x0001a51e) cell_graphic2_pane_g_ParamLimits

0xfd9b,	// (0x0001a51e) cell_graphic2_pane_g

0x36e4,	// (0x0000de67) cell_graphic2_pane_t1_ParamLimits

0x36e4,	// (0x0000de67) cell_graphic2_pane_t1

0x96a5,	// (0x00013e28) grid_highlight_pane_cp11_ParamLimits

0x96a5,	// (0x00013e28) grid_highlight_pane_cp11

0x6962,	// (0x000110e5) bg_button_pane_cp05

0x3719,	// (0x0000de9c) cell_graphic2_control_pane_g1

0xb0ff,	// (0x00015882) bg_touch_area_indi_pane_g1

0xec41,	// (0x000193c4) aid_cmod_rocker_key_size

0xec4b,	// (0x000193ce) aid_cmode_itu_key_size

0xec55,	// (0x000193d8) main_cmode_video_pane

0xec5d,	// (0x000193e0) main_comp_mode_itu_pane

0xec67,	// (0x000193ea) main_comp_mode_rocker_pane

0xec6f,	// (0x000193f2) cell_cmode_rocker_pane_ParamLimits

0xec6f,	// (0x000193f2) cell_cmode_rocker_pane

0xec81,	// (0x00019404) cell_cmode_itu_pane_ParamLimits

0xec81,	// (0x00019404) cell_cmode_itu_pane

0x73cb,	// (0x00011b4e) bg_button_pane_cp06_ParamLimits

0x73cb,	// (0x00011b4e) bg_button_pane_cp06

0xb337,	// (0x00015aba) cell_cmode_rocker_pane_g1_ParamLimits

0xb337,	// (0x00015aba) cell_cmode_rocker_pane_g1

0xcac5,	// (0x00017248) cell_cmode_rocker_pane_g2_ParamLimits

0xcac5,	// (0x00017248) cell_cmode_rocker_pane_g2

0x0001,

0xfdab,	// (0x0001a52e) cell_cmode_rocker_pane_g_ParamLimits

0xfdab,	// (0x0001a52e) cell_cmode_rocker_pane_g

0x64ea,	// (0x00010c6d) bg_button_pane_cp07

0xec96,	// (0x00019419) cell_cmode_itu_pane_g1

0xec9f,	// (0x00019422) cell_cmode_itu_pane_t1

0xecad,	// (0x00019430) cell_cmode_itu_pane_t2

0x0001,

0xfdb0,	// (0x0001a533) cell_cmode_itu_pane_t

0xccdd,	// (0x00017460) aid_touch_ctrl_left

0xcce5,	// (0x00017468) aid_touch_ctrl_right

0x64ea,	// (0x00010c6d) compa_mode_pane

0x3741,	// (0x0000dec4) aid_cmod_rocker_key_size_cp

0x374b,	// (0x0000dece) aid_cmode_itu_key_size_cp

0xecbb,	// (0x0001943e) compa_mode_pane_g1

0xecc3,	// (0x00019446) compa_mode_pane_g2

0xeccb,	// (0x0001944e) compa_mode_pane_g3

0x0002,

0xfdb5,	// (0x0001a538) compa_mode_pane_g

0x3755,	// (0x0000ded8) main_comp_mode_itu_pane_cp

0x375f,	// (0x0000dee2) main_comp_mode_rocker_pane_cp

0x3769,	// (0x0000deec) cell_cmode_itu_pane_cp_ParamLimits

0x3769,	// (0x0000deec) cell_cmode_itu_pane_cp

0x377e,	// (0x0000df01) cell_cmode_rocker_pane_cp_ParamLimits

0x377e,	// (0x0000df01) cell_cmode_rocker_pane_cp

0x73cb,	// (0x00011b4e) bg_button_pane_cp06_cp_ParamLimits

0x73cb,	// (0x00011b4e) bg_button_pane_cp06_cp

0xb337,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp_ParamLimits

0xb337,	// (0x00015aba) cell_cmode_rocker_pane_g1_cp

0xb0ff,	// (0x00015882) cell_cmode_rocker_pane_g2_cp

0x64ea,	// (0x00010c6d) bg_button_pane_cp07_cp

0x3790,	// (0x0000df13) cell_cmode_itu_pane_g1_cp

0x3799,	// (0x0000df1c) cell_cmode_itu_pane_t1_cp

0x37a7,	// (0x0000df2a) cell_cmode_itu_pane_t2_cp

0x20c7,	// (0x0000c84a) settings_code_pane_cp2

0x66bb,	// (0x00010e3e) bg_popup_window_pane_cp3_ParamLimits

0x6b60,	// (0x000112e3) heading_pane_cp3_ParamLimits

0x6b6c,	// (0x000112ef) listscroll_popup_graphic_pane_ParamLimits

0x55c0,	// (0x0000fd43) fep_hwr_aid_pane_ParamLimits

0x5a20,	// (0x000101a3) aid_touch_sctrl_top_ParamLimits

0x5a3b,	// (0x000101be) sctrl_sk_top_pane_g1_ParamLimits

0x5805,	// (0x0000ff88) sctrl_sk_top_pane_g2_ParamLimits

0xfceb,	// (0x0001a46e) sctrl_sk_top_pane_g_ParamLimits

0x5a48,	// (0x000101cb) sctrl_sk_top_pane_t1_ParamLimits

0x5a20,	// (0x000101a3) aid_touch_sctrl_bottom_ParamLimits

0x5a48,	// (0x000101cb) sctrl_sk_bottom_pane_t1_ParamLimits

0xcc27,	// (0x000173aa) aid_area_touch_clock

0xe776,	// (0x00018ef9) aid_vkb2_area_top_pane_cell_ParamLimits

0xe776,	// (0x00018ef9) aid_vkb2_area_top_pane_cell

0xe821,	// (0x00018fa4) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe821,	// (0x00018fa4) aid_vkb2_area_bottom_pane_cell

0xebae,	// (0x00019331) popup_char_count_window

0xecd3,	// (0x00019456) popup_char_count_window_g1

0xecdc,	// (0x0001945f) popup_char_count_window_g2

0xece5,	// (0x00019468) popup_char_count_window_g3

0x0002,

0xfdbc,	// (0x0001a53f) popup_char_count_window_g

0xecee,	// (0x00019471) popup_char_count_window_t1

0x5afc,	// (0x0001027f) popup_fep_char_preview_window_ParamLimits

0x5afc,	// (0x0001027f) popup_fep_char_preview_window

0xe796,	// (0x00018f19) vkb2_top_candi_pane_ParamLimits

0xe796,	// (0x00018f19) vkb2_top_candi_pane

0x37b5,	// (0x0000df38) cell_vkb2_top_candi_pane_ParamLimits

0x37b5,	// (0x0000df38) cell_vkb2_top_candi_pane

0x5ffa,	// (0x0001077d) bg_popup_fep_char_preview_window_ParamLimits

0x5ffa,	// (0x0001077d) bg_popup_fep_char_preview_window

0x6008,	// (0x0001078b) popup_fep_char_preview_window_t1_ParamLimits

0x6008,	// (0x0001078b) popup_fep_char_preview_window_t1

0xecfc,	// (0x0001947f) bg_popup_fep_char_preview_window_g1

0xed04,	// (0x00019487) bg_popup_fep_char_preview_window_g2

0xed0c,	// (0x0001948f) bg_popup_fep_char_preview_window_g3

0xed14,	// (0x00019497) bg_popup_fep_char_preview_window_g4

0xed1c,	// (0x0001949f) bg_popup_fep_char_preview_window_g5

0x6042,	// (0x000107c5) bg_popup_fep_char_preview_window_g6

0xed24,	// (0x000194a7) bg_popup_fep_char_preview_window_g7

0xed2c,	// (0x000194af) bg_popup_fep_char_preview_window_g8

0xed34,	// (0x000194b7) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc3,	// (0x0001a546) bg_popup_fep_char_preview_window_g

0x5805,	// (0x0000ff88) cell_vkb2_top_candi_pane_g1_ParamLimits

0x5805,	// (0x0000ff88) cell_vkb2_top_candi_pane_g1

0x5813,	// (0x0000ff96) cell_vkb2_top_candi_pane_g2_ParamLimits

0x5813,	// (0x0000ff96) cell_vkb2_top_candi_pane_g2

0xeb7f,	// (0x00019302) cell_vkb2_top_candi_pane_g3_ParamLimits

0xeb7f,	// (0x00019302) cell_vkb2_top_candi_pane_g3

0x604a,	// (0x000107cd) cell_vkb2_top_candi_pane_g4_ParamLimits

0x604a,	// (0x000107cd) cell_vkb2_top_candi_pane_g4

0xb701,	// (0x00015e84) cell_vkb2_top_candi_pane_g5_ParamLimits

0xb701,	// (0x00015e84) cell_vkb2_top_candi_pane_g5

0x606b,	// (0x000107ee) cell_vkb2_top_candi_pane_g6_ParamLimits

0x606b,	// (0x000107ee) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdd6,	// (0x0001a559) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdd6,	// (0x0001a559) cell_vkb2_top_candi_pane_g

0x6079,	// (0x000107fc) cell_vkb2_top_candi_pane_t1

0x53d8,	// (0x0000fb5b) aid_size_touch_slider_mark_ParamLimits

0x53d8,	// (0x0000fb5b) aid_size_touch_slider_mark

0x3506,	// (0x0000dc89) grid_graphic2_catg_pane_ParamLimits

0x3506,	// (0x0000dc89) grid_graphic2_catg_pane

0x359d,	// (0x0000dd20) popup_grid_graphic2_window_t1_ParamLimits

0x359d,	// (0x0000dd20) popup_grid_graphic2_window_t1

0x35b2,	// (0x0000dd35) popup_grid_graphic2_window_t2_ParamLimits

0x35b2,	// (0x0000dd35) popup_grid_graphic2_window_t2

0x0001,

0xfd91,	// (0x0001a514) popup_grid_graphic2_window_t_ParamLimits

0xfd91,	// (0x0001a514) popup_grid_graphic2_window_t

0x6962,	// (0x000110e5) bg_button_pane_cp05_ParamLimits

0x3719,	// (0x0000de9c) cell_graphic2_control_pane_g1_ParamLimits

0xcca3,	// (0x00017426) cell_graphic2_catg_pane_ParamLimits

0xcca3,	// (0x00017426) cell_graphic2_catg_pane

0x64ea,	// (0x00010c6d) bg_button_pane_cp12

0x37ff,	// (0x0000df82) cell_graphic2_catg_pane_g1

0xcbf3,	// (0x00017376) cell_tb_ext_pane_t1_ParamLimits

0x5e44,	// (0x000105c7) vkb2_top_cell_right_narrow_pane_ParamLimits

0x5e44,	// (0x000105c7) vkb2_top_cell_right_narrow_pane

0x5e5c,	// (0x000105df) vkb2_top_cell_right_wide_pane_ParamLimits

0x5e5c,	// (0x000105df) vkb2_top_cell_right_wide_pane

0x55b2,	// (0x0000fd35) bg_vkb2_func_pane_ParamLimits

0x55b2,	// (0x0000fd35) bg_vkb2_func_pane

0x5ecd,	// (0x00010650) vkb2_top_cell_left_pane_g1_ParamLimits

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp03_ParamLimits

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp03

0x5f2b,	// (0x000106ae) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x89ab,	// (0x0001312e) bg_vkb2_func_pane_g1

0x89b3,	// (0x00013136) bg_vkb2_func_pane_g2

0x89c3,	// (0x00013146) bg_vkb2_func_pane_g3

0x89bb,	// (0x0001313e) bg_vkb2_func_pane_g4

0x89cb,	// (0x0001314e) bg_vkb2_func_pane_g5

0x89d3,	// (0x00013156) bg_vkb2_func_pane_g6

0x89db,	// (0x0001315e) bg_vkb2_func_pane_g7

0x89e3,	// (0x00013166) bg_vkb2_func_pane_g8

0x89a3,	// (0x00013126) bg_vkb2_func_pane_g9

0x0008,

0xfde3,	// (0x0001a566) bg_vkb2_func_pane_g

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp01_ParamLimits

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp01

0x5ecd,	// (0x00010650) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x5ecd,	// (0x00010650) vkb2_top_cell_right_wide_pane_g1

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp02_ParamLimits

0x55b2,	// (0x0000fd35) bg_vkb2_fuc_pane_cp02

0x5f2b,	// (0x000106ae) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x5f2b,	// (0x000106ae) vkb2_top_cell_right_narrow_pane_g1

0x2a4c,	// (0x0000d1cf) aid_touch_area_decrease_ParamLimits

0x2a4c,	// (0x0000d1cf) aid_touch_area_decrease

0x2a7a,	// (0x0000d1fd) aid_touch_area_increase_ParamLimits

0x2a7a,	// (0x0000d1fd) aid_touch_area_increase

0x2aa2,	// (0x0000d225) aid_touch_area_mute_ParamLimits

0x2aa2,	// (0x0000d225) aid_touch_area_mute

0x2aca,	// (0x0000d24d) aid_touch_area_slider_ParamLimits

0x2aca,	// (0x0000d24d) aid_touch_area_slider

0x2b0a,	// (0x0000d28d) popup_slider_window_g4_ParamLimits

0x2b0a,	// (0x0000d28d) popup_slider_window_g4

0x2b32,	// (0x0000d2b5) popup_slider_window_g5_ParamLimits

0x2b32,	// (0x0000d2b5) popup_slider_window_g5

0x2b66,	// (0x0000d2e9) popup_slider_window_g6_ParamLimits

0x2b66,	// (0x0000d2e9) popup_slider_window_g6

0xc9de,	// (0x00017161) popup_slider_window_t2_ParamLimits

0xc9de,	// (0x00017161) popup_slider_window_t2

0x0001,

0xfcdf,	// (0x0001a462) popup_slider_window_t_ParamLimits

0xfcdf,	// (0x0001a462) popup_slider_window_t

0x2b82,	// (0x0000d305) slider_pane_ParamLimits

0x2b82,	// (0x0000d305) slider_pane

0xed3c,	// (0x000194bf) slider_pane_g1_ParamLimits

0xed3c,	// (0x000194bf) slider_pane_g1

0xed50,	// (0x000194d3) slider_pane_g2_ParamLimits

0xed50,	// (0x000194d3) slider_pane_g2

0xed66,	// (0x000194e9) slider_pane_g3_ParamLimits

0xed66,	// (0x000194e9) slider_pane_g3

0x0003,

0xfdf6,	// (0x0001a579) slider_pane_g_ParamLimits

0xfdf6,	// (0x0001a579) slider_pane_g

0xe347,	// (0x00018aca) popup_tb_float_extension_window_ParamLimits

0xe347,	// (0x00018aca) popup_tb_float_extension_window

0xed92,	// (0x00019515) aid_size_cell_tb_float_ext

0x64ea,	// (0x00010c6d) bg_popup_sub_window_cp28

0xed9d,	// (0x00019520) grid_tb_float_ext_pane

0xeda5,	// (0x00019528) cell_tb_float_ext_pane_ParamLimits

0xeda5,	// (0x00019528) cell_tb_float_ext_pane

0xedbd,	// (0x00019540) cell_tb_float_ext_pane_g1

0xedc6,	// (0x00019549) grid_highlight_pane_cp12

0xe5ac,	// (0x00018d2f) cell_last_hwr_side_pane_ParamLimits

0xe5ac,	// (0x00018d2f) cell_last_hwr_side_pane

0xb0ff,	// (0x00015882) cell_last_hwr_side_pane_g1

0xedcf,	// (0x00019552) cell_last_hwr_side_pane_g2

0x0001,

0xfdff,	// (0x0001a582) cell_last_hwr_side_pane_g

0xe8f5,	// (0x00019078) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe8f5,	// (0x00019078) vkb2_area_bottom_space_btn_pane

0x5805,	// (0x0000ff88) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xec15,	// (0x00019398) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6079,	// (0x000107fc) cell_vkb2_top_candi_pane_t1_ParamLimits

0x608f,	// (0x00010812) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x608f,	// (0x00010812) vkb2_area_bottom_space_btn_pane_g1

0x60c5,	// (0x00010848) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x60c5,	// (0x00010848) vkb2_area_bottom_space_btn_pane_g2

0x60fb,	// (0x0001087e) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x60fb,	// (0x0001087e) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe04,	// (0x0001a587) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe04,	// (0x0001a587) vkb2_area_bottom_space_btn_pane_g

0x566f,	// (0x0000fdf2) cel_fep_hwr_func_pane_ParamLimits

0x566f,	// (0x0000fdf2) cel_fep_hwr_func_pane

0xe581,	// (0x00018d04) cell_hwr_side_button_pane_ParamLimits

0xe581,	// (0x00018d04) cell_hwr_side_button_pane

0xcc27,	// (0x000173aa) aid_area_touch_clock_ParamLimits

0x6962,	// (0x000110e5) bg_uniindi_top_pane_ParamLimits

0xcc39,	// (0x000173bc) uniindi_top_pane_g1_ParamLimits

0xcc4f,	// (0x000173d2) uniindi_top_pane_g2_ParamLimits

0xcc5b,	// (0x000173de) uniindi_top_pane_g3_ParamLimits

0xcc6c,	// (0x000173ef) uniindi_top_pane_g4_ParamLimits

0xfd17,	// (0x0001a49a) uniindi_top_pane_g_ParamLimits

0xcc79,	// (0x000173fc) uniindi_top_pane_t1_ParamLimits

0x6962,	// (0x000110e5) bg_vkb2_func_pane_cp01_ParamLimits

0x6962,	// (0x000110e5) bg_vkb2_func_pane_cp01

0xedd8,	// (0x0001955b) cel_fep_hwr_func_pane_g1_ParamLimits

0xedd8,	// (0x0001955b) cel_fep_hwr_func_pane_g1

0x6962,	// (0x000110e5) bg_vkb2_func_pane_cp02_ParamLimits

0x6962,	// (0x000110e5) bg_vkb2_func_pane_cp02

0xedd8,	// (0x0001955b) cell_hwr_side_button_pane_g1_ParamLimits

0xedd8,	// (0x0001955b) cell_hwr_side_button_pane_g1

0x8837,	// (0x00012fba) status_pane_g4_ParamLimits

0x8837,	// (0x00012fba) status_pane_g4

0x884f,	// (0x00012fd2) status_pane_t1

0xaee1,	// (0x00015664) form2_midp_gauge_slider_cont_pane

0xaee9,	// (0x0001566c) form2_midp_gauge_slider_pane_t1_ParamLimits

0x23b8,	// (0x0000cb3b) form2_midp_gauge_slider_pane_t2_ParamLimits

0x23ca,	// (0x0000cb4d) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfade,	// (0x0001a261) form2_midp_gauge_slider_pane_t_ParamLimits

0xaf1f,	// (0x000156a2) form2_midp_slider_pane_ParamLimits

0x5abc,	// (0x0001023f) aid_size_cell_func_vkb2_ParamLimits

0x5abc,	// (0x0001023f) aid_size_cell_func_vkb2

0xed7e,	// (0x00019501) slider_pane_g4_ParamLimits

0xed7e,	// (0x00019501) slider_pane_g4

0xe946,	// (0x000190c9) form2_midp_gauge_slider_pane_t2_cp01

0xe954,	// (0x000190d7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe954,	// (0x000190d7) form2_midp_gauge_slider_pane_t3_cp01

0x616c,	// (0x000108ef) form2_midp_slider_pane_cp01

0x64ea,	// (0x00010c6d) navi_smil_pane

0xee08,	// (0x0001958b) navi_smil_pane_g1

0xee10,	// (0x00019593) navi_smil_pane_t1

0xede6,	// (0x00019569) form2_midp_slider_pane_g1

0xedef,	// (0x00019572) form2_midp_slider_pane_g2

0xedf7,	// (0x0001957a) form2_midp_slider_pane_g3

0xede6,	// (0x00019569) form2_midp_slider_pane_g4

0x3833,	// (0x0000dfb6) form2_midp_slider_pane_g5

0x0004,

0xfe0d,	// (0x0001a590) form2_midp_slider_pane_g

0x6131,	// (0x000108b4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6131,	// (0x000108b4) vkb2_area_bottom_space_btn_pane_g4

0x1940,	// (0x0000c0c3) lc0_navi_pane_ParamLimits

0x1940,	// (0x0000c0c3) lc0_navi_pane

0x19aa,	// (0x0000c12d) lc0_stat_indi_pane_ParamLimits

0x19aa,	// (0x0000c12d) lc0_stat_indi_pane

0x19bf,	// (0x0000c142) ls0_title_pane_ParamLimits

0x19bf,	// (0x0000c142) ls0_title_pane

0x73cb,	// (0x00011b4e) bg_popup_sub_pane_cp14_ParamLimits

0xcc0e,	// (0x00017391) list_uniindi_pane_ParamLimits

0xcc1a,	// (0x0001739d) uniindi_top_pane_ParamLimits

0xccb5,	// (0x00017438) list_single_uniindi_pane_g1_ParamLimits

0xccc8,	// (0x0001744b) list_single_uniindi_pane_t1_ParamLimits

0xe971,	// (0x000190f4) lc0_stat_clock_pane_ParamLimits

0xe971,	// (0x000190f4) lc0_stat_clock_pane

0x3856,	// (0x0000dfd9) lc0_stat_indi_pane_g1_ParamLimits

0x3856,	// (0x0000dfd9) lc0_stat_indi_pane_g1

0x3849,	// (0x0000dfcc) lc0_stat_indi_pane_g2_ParamLimits

0x3849,	// (0x0000dfcc) lc0_stat_indi_pane_g2

0x0001,

0xfe18,	// (0x0001a59b) lc0_stat_indi_pane_g_ParamLimits

0xfe18,	// (0x0001a59b) lc0_stat_indi_pane_g

0xe97e,	// (0x00019101) lc0_uni_indicator_pane_ParamLimits

0xe97e,	// (0x00019101) lc0_uni_indicator_pane

0xee1e,	// (0x000195a1) ls0_title_pane_g1_ParamLimits

0xee1e,	// (0x000195a1) ls0_title_pane_g1

0x3870,	// (0x0000dff3) ls0_title_pane_t1_ParamLimits

0x3870,	// (0x0000dff3) ls0_title_pane_t1

0xe98b,	// (0x0001910e) lc0_uni_indicator_pane_g1_ParamLimits

0xe98b,	// (0x0001910e) lc0_uni_indicator_pane_g1

0xee32,	// (0x000195b5) lc0_stat_clock_pane_t1

0x43ee,	// (0x0000eb71) main_ai5_pane

0xee40,	// (0x000195c3) ai5_sk_pane_ParamLimits

0xee40,	// (0x000195c3) ai5_sk_pane

0x38b3,	// (0x0000e036) cell_ai5_widget_pane_ParamLimits

0x38b3,	// (0x0000e036) cell_ai5_widget_pane

0xee4d,	// (0x000195d0) aid_size_cell_widget_grid

0xee5a,	// (0x000195dd) bg_ai5_widget_pane_ParamLimits

0xee5a,	// (0x000195dd) bg_ai5_widget_pane

0x3940,	// (0x0000e0c3) cell_ai5_widget_pane_g2

0x3954,	// (0x0000e0d7) cell_ai5_widget_pane_g3

0x396e,	// (0x0000e0f1) cell_ai5_widget_pane_g4

0x397e,	// (0x0000e101) cell_ai5_widget_pane_g5

0x398e,	// (0x0000e111) cell_ai5_widget_pane_g6

0x399a,	// (0x0000e11d) cell_ai5_widget_pane_g7

0x39e2,	// (0x0000e165) cell_ai5_widget_pane_t1_ParamLimits

0x39e2,	// (0x0000e165) cell_ai5_widget_pane_t1

0x39ff,	// (0x0000e182) cell_ai5_widget_pane_t2_ParamLimits

0x39ff,	// (0x0000e182) cell_ai5_widget_pane_t2

0x3a17,	// (0x0000e19a) cell_ai5_widget_pane_t3_ParamLimits

0x3a17,	// (0x0000e19a) cell_ai5_widget_pane_t3

0x3a2f,	// (0x0000e1b2) cell_ai5_widget_pane_t4_ParamLimits

0x3a2f,	// (0x0000e1b2) cell_ai5_widget_pane_t4

0x3a55,	// (0x0000e1d8) cell_ai5_widget_pane_t5_ParamLimits

0x3a55,	// (0x0000e1d8) cell_ai5_widget_pane_t5

0xee92,	// (0x00019615) cell_ai5_widget_pane_t6_ParamLimits

0xee92,	// (0x00019615) cell_ai5_widget_pane_t6

0xeea4,	// (0x00019627) cell_ai5_widget_pane_t7_ParamLimits

0xeea4,	// (0x00019627) cell_ai5_widget_pane_t7

0x3a74,	// (0x0000e1f7) cell_ai5_widget_pane_t8_ParamLimits

0x3a74,	// (0x0000e1f7) cell_ai5_widget_pane_t8

0x0009,

0xfe32,	// (0x0001a5b5) cell_ai5_widget_pane_t_ParamLimits

0xfe32,	// (0x0001a5b5) cell_ai5_widget_pane_t

0x3ad3,	// (0x0000e256) grid_ai5_widget_pane

0x73cb,	// (0x00011b4e) highlight_cell_ai5_widget_pane_ParamLimits

0x73cb,	// (0x00011b4e) highlight_cell_ai5_widget_pane

0x3adf,	// (0x0000e262) ai5_sk_left_pane

0x3ae9,	// (0x0000e26c) ai5_sk_middle_pane

0x3af3,	// (0x0000e276) ai5_sk_right_pane

0xeebd,	// (0x00019640) bg_ai5_widget_pane_g1_ParamLimits

0xeebd,	// (0x00019640) bg_ai5_widget_pane_g1

0xeec9,	// (0x0001964c) bg_ai5_widget_pane_g2_ParamLimits

0xeec9,	// (0x0001964c) bg_ai5_widget_pane_g2

0xeed5,	// (0x00019658) bg_ai5_widget_pane_g3_ParamLimits

0xeed5,	// (0x00019658) bg_ai5_widget_pane_g3

0xeee1,	// (0x00019664) bg_ai5_widget_pane_g4_ParamLimits

0xeee1,	// (0x00019664) bg_ai5_widget_pane_g4

0xeeed,	// (0x00019670) bg_ai5_widget_pane_g5_ParamLimits

0xeeed,	// (0x00019670) bg_ai5_widget_pane_g5

0xeef9,	// (0x0001967c) bg_ai5_widget_pane_g6_ParamLimits

0xeef9,	// (0x0001967c) bg_ai5_widget_pane_g6

0xef05,	// (0x00019688) bg_ai5_widget_pane_g7_ParamLimits

0xef05,	// (0x00019688) bg_ai5_widget_pane_g7

0xef11,	// (0x00019694) bg_ai5_widget_pane_g8_ParamLimits

0xef11,	// (0x00019694) bg_ai5_widget_pane_g8

0xef1d,	// (0x000196a0) bg_ai5_widget_pane_g9_ParamLimits

0xef1d,	// (0x000196a0) bg_ai5_widget_pane_g9

0x0008,

0xfe47,	// (0x0001a5ca) bg_ai5_widget_pane_g_ParamLimits

0xfe47,	// (0x0001a5ca) bg_ai5_widget_pane_g

0xef4d,	// (0x000196d0) cell_shortcut_ai5_widget_pane_ParamLimits

0xef4d,	// (0x000196d0) cell_shortcut_ai5_widget_pane

0xef5e,	// (0x000196e1) bg_cell_shortcut_ai5_widget_pane

0x6b1c,	// (0x0001129f) cell_grid_ai5_widget_pane_g1

0x818b,	// (0x0001290e) highlight_cell_shortcut_ai5_widget_pane

0x89ab,	// (0x0001312e) ai5_sk_left_pane_g1

0xef66,	// (0x000196e9) ai5_sk_left_pane_g2

0xef6e,	// (0x000196f1) ai5_sk_left_pane_g3

0xef76,	// (0x000196f9) ai5_sk_left_pane_g4

0x0003,

0xfe5a,	// (0x0001a5dd) ai5_sk_left_pane_g

0xef7e,	// (0x00019701) ai5_sk_left_pane_t1

0x89b3,	// (0x00013136) ai5_sk_right_pane_g1

0xef8c,	// (0x0001970f) ai5_sk_right_pane_g2

0xef94,	// (0x00019717) ai5_sk_right_pane_g3

0xef9c,	// (0x0001971f) ai5_sk_right_pane_g4

0x0003,

0xfe63,	// (0x0001a5e6) ai5_sk_right_pane_g

0xefa4,	// (0x00019727) ai5_sk_right_pane_t1

0x89b3,	// (0x00013136) ai5_sk_middle_pane_g1

0x89ab,	// (0x0001312e) ai5_sk_middle_pane_g2

0x89cb,	// (0x0001314e) ai5_sk_middle_pane_g3

0xef94,	// (0x00019717) ai5_sk_middle_pane_g4

0xef6e,	// (0x000196f1) ai5_sk_middle_pane_g5

0xefb2,	// (0x00019735) ai5_sk_middle_pane_g6

0x3afd,	// (0x0000e280) ai5_sk_middle_pane_g7

0x0006,

0xfe6c,	// (0x0001a5ef) ai5_sk_middle_pane_g

0x183e,	// (0x0000bfc1) aid_touch_area_size_lc0_ParamLimits

0x183e,	// (0x0000bfc1) aid_touch_area_size_lc0

0x5834,	// (0x0000ffb7) cell_hwr_candidate_pane_t1_ParamLimits

0x853a,	// (0x00012cbd) aid_touch_navi_pane

0x1aab,	// (0x0000c22e) status_dt_navi_pane_ParamLimits

0x1aab,	// (0x0000c22e) status_dt_navi_pane

0x1ac3,	// (0x0000c246) status_dt_sta_pane_ParamLimits

0x1ac3,	// (0x0000c246) status_dt_sta_pane

0x3b05,	// (0x0000e288) dt_sta_controll_pane

0x3b12,	// (0x0000e295) dt_sta_indi_pane

0x3b1f,	// (0x0000e2a2) dt_sta_title_pane

0x6962,	// (0x000110e5) bg_dt_sta_indi_pane_ParamLimits

0x6962,	// (0x000110e5) bg_dt_sta_indi_pane

0x3b31,	// (0x0000e2b4) dt_sta_battery_pane

0x3b39,	// (0x0000e2bc) dt_sta_indi_pane_g1

0x3b42,	// (0x0000e2c5) dt_sta_indi_pane_g2

0x3b4b,	// (0x0000e2ce) dt_sta_indi_pane_g3

0x0002,

0xfe7b,	// (0x0001a5fe) dt_sta_indi_pane_g

0x3b54,	// (0x0000e2d7) dt_sta_signal_pane

0x73cb,	// (0x00011b4e) bg_dt_sta_title_pane_ParamLimits

0x73cb,	// (0x00011b4e) bg_dt_sta_title_pane

0x3b5d,	// (0x0000e2e0) dt_sta_title_pane_g1

0x3b65,	// (0x0000e2e8) dt_sta_title_pane_t1_ParamLimits

0x3b65,	// (0x0000e2e8) dt_sta_title_pane_t1

0x64ea,	// (0x00010c6d) bg_dt_sta_control_pane

0x3b7a,	// (0x0000e2fd) dt_sta_controll_pane_g1

0x3b83,	// (0x0000e306) bg_dt_sta_title_pane_g1

0x3b8c,	// (0x0000e30f) bg_dt_sta_title_pane_g2

0x3b95,	// (0x0000e318) bg_dt_sta_title_pane_g3

0x0002,

0xfe82,	// (0x0001a605) bg_dt_sta_title_pane_g

0xb0ff,	// (0x00015882) bg_dt_sta_indi_pane_g1

0x3b9e,	// (0x0000e321) dt_sta_signal_pane_g1

0x3ba6,	// (0x0000e329) dt_sta_signal_pane_g2

0x0001,

0xfe89,	// (0x0001a60c) dt_sta_signal_pane_g

0xefba,	// (0x0001973d) dt_sta_battery_pane_g1

0xefc3,	// (0x00019746) dt_sta_battery_pane_t1

0xb0ff,	// (0x00015882) bg_dt_sta_control_pane_g1

0x7c80,	// (0x00012403) fep_china_uni_eep_pane

0x7c88,	// (0x0001240b) fep_china_uni_entry_pane_ParamLimits

0x7c98,	// (0x0001241b) popup_fep_china_uni_window_g1_ParamLimits

0x7ca8,	// (0x0001242b) popup_fep_china_uni_window_g2_ParamLimits

0x7ca8,	// (0x0001242b) popup_fep_china_uni_window_g2

0x0001,

0xf70e,	// (0x00019e91) popup_fep_china_uni_window_g_ParamLimits

0xf70e,	// (0x00019e91) popup_fep_china_uni_window_g

0xefd2,	// (0x00019755) fep_china_uni_eep_pane_g1

0xefda,	// (0x0001975d) fep_china_uni_eep_pane_t1

0xedff,	// (0x00019582) aid_touch_area_size_smil_player

0x8671,	// (0x00012df4) lc0_clock_pane

0x8843,	// (0x00012fc6) status_pane_g5_ParamLimits

0x8843,	// (0x00012fc6) status_pane_g5

0xdf7b,	// (0x000186fe) popup_keymap_window

0x880b,	// (0x00012f8e) status_icon_pane

0x3954,	// (0x0000e0d7) cell_ai5_widget_pane_g3_ParamLimits

0x396e,	// (0x0000e0f1) cell_ai5_widget_pane_g4_ParamLimits

0x397e,	// (0x0000e101) cell_ai5_widget_pane_g5_ParamLimits

0x39a6,	// (0x0000e129) cell_ai5_widget_pane_g8_ParamLimits

0x39a6,	// (0x0000e129) cell_ai5_widget_pane_g8

0x39ba,	// (0x0000e13d) cell_ai5_widget_pane_g9_ParamLimits

0x39ba,	// (0x0000e13d) cell_ai5_widget_pane_g9

0x39ce,	// (0x0000e151) cell_ai5_widget_pane_g10_ParamLimits

0x39ce,	// (0x0000e151) cell_ai5_widget_pane_g10

0xefe9,	// (0x0001976c) status_icon_pane_g1

0x64ea,	// (0x00010c6d) bg_popup_sub_pane_cp13

0xeff1,	// (0x00019774) popup_keymap_window_t1

0x113c,	// (0x0000b8bf) control_pane_g6_ParamLimits

0x113c,	// (0x0000b8bf) control_pane_g6

0x112f,	// (0x0000b8b2) control_pane_g7_ParamLimits

0x112f,	// (0x0000b8b2) control_pane_g7

0x1122,	// (0x0000b8a5) control_pane_g8_ParamLimits

0x1122,	// (0x0000b8a5) control_pane_g8

0x3b05,	// (0x0000e288) dt_sta_controll_pane_ParamLimits

0x3b12,	// (0x0000e295) dt_sta_indi_pane_ParamLimits

0x3b1f,	// (0x0000e2a2) dt_sta_title_pane_ParamLimits

0x6de7,	// (0x0001156a) aid_size_touch_scroll_bar_cale

0x44c5,	// (0x0000ec48) popup_discreet_window_ParamLimits

0x44c5,	// (0x0000ec48) popup_discreet_window

0xdbb9,	// (0x0001833c) popup_sk_window

0x9089,	// (0x0001380c) bg_popup_sub_pane_cp28_ParamLimits

0x9089,	// (0x0001380c) bg_popup_sub_pane_cp28

0xefff,	// (0x00019782) popup_discreet_window_g1_ParamLimits

0xefff,	// (0x00019782) popup_discreet_window_g1

0xf01f,	// (0x000197a2) popup_discreet_window_t1_ParamLimits

0xf01f,	// (0x000197a2) popup_discreet_window_t1

0xf03d,	// (0x000197c0) popup_discreet_window_t2_ParamLimits

0xf03d,	// (0x000197c0) popup_discreet_window_t2

0x0002,

0xfe8e,	// (0x0001a611) popup_discreet_window_t_ParamLimits

0xfe8e,	// (0x0001a611) popup_discreet_window_t

0x61a1,	// (0x00010924) popup_sk_window_g1

0x61aa,	// (0x0001092d) popup_sk_window_g2

0x0001,

0xfe95,	// (0x0001a618) popup_sk_window_g

0x61b3,	// (0x00010936) popup_sk_window_t1

0x61c1,	// (0x00010944) popup_sk_window_t1_copy1

0x3940,	// (0x0000e0c3) cell_ai5_widget_pane_g2_ParamLimits

0x3a86,	// (0x0000e209) cell_ai5_widget_pane_t9_ParamLimits

0x3a86,	// (0x0000e209) cell_ai5_widget_pane_t9

0x64ea,	// (0x00010c6d) main_fep_fshwr2_pane

0xe9a0,	// (0x00019123) aid_fshwr2_btn_pane

0xe9b4,	// (0x00019137) aid_fshwr2_syb_pane

0xe9c8,	// (0x0001914b) aid_fshwr2_txt_pane

0xe9d8,	// (0x0001915b) fshwr2_func_candi_pane

0xe9f0,	// (0x00019173) fshwr2_hwr_syb_pane

0xea08,	// (0x0001918b) fshwr2_icf_pane

0x43ee,	// (0x0000eb71) fshwr2_icf_bg_pane

0xea32,	// (0x000191b5) fshwr2_icf_pane_t1_ParamLimits

0xea32,	// (0x000191b5) fshwr2_icf_pane_t1

0x7b86,	// (0x00012309) fshwr2_func_candi_pane_g1

0x3c57,	// (0x0000e3da) fshwr2_func_candi_row_pane_ParamLimits

0x3c57,	// (0x0000e3da) fshwr2_func_candi_row_pane

0xea49,	// (0x000191cc) cell_fshwr2_syb_pane_ParamLimits

0xea49,	// (0x000191cc) cell_fshwr2_syb_pane

0x627e,	// (0x00010a01) fshwr2_hwr_syb_pane_g1_ParamLimits

0x627e,	// (0x00010a01) fshwr2_hwr_syb_pane_g1

0x43ee,	// (0x0000eb71) bg_popup_call_pane_cp01

0xea6b,	// (0x000191ee) fshwr2_func_candi_cell_pane_ParamLimits

0xea6b,	// (0x000191ee) fshwr2_func_candi_cell_pane

0x8e7b,	// (0x000135fe) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x8e7b,	// (0x000135fe) fshwr2_func_candi_cell_bg_pane

0xeaaa,	// (0x0001922d) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xeaaa,	// (0x0001922d) fshwr2_func_candi_cell_pane_g1

0xeae1,	// (0x00019264) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xeae1,	// (0x00019264) fshwr2_func_candi_cell_pane_t1

0x43ee,	// (0x0000eb71) bg_button_pane_cp08

0x84da,	// (0x00012c5d) cell_fshwr2_syb_bg_pane

0xeafc,	// (0x0001927f) cell_fshwr2_syb_bg_pane_g1

0xeb0c,	// (0x0001928f) cell_fshwr2_syb_bg_pane_t1

0x73cb,	// (0x00011b4e) main_tmo_pane

0x1ec4,	// (0x0000c647) uni_indicator_pane_g1_ParamLimits

0x1eda,	// (0x0000c65d) uni_indicator_pane_g2_ParamLimits

0x1ef0,	// (0x0000c673) uni_indicator_pane_g3_ParamLimits

0x9b72,	// (0x000142f5) uni_indicator_pane_g4_ParamLimits

0x9b72,	// (0x000142f5) uni_indicator_pane_g4

0x9b86,	// (0x00014309) uni_indicator_pane_g5_ParamLimits

0x9b86,	// (0x00014309) uni_indicator_pane_g5

0x9b86,	// (0x00014309) uni_indicator_pane_g6_ParamLimits

0x9b86,	// (0x00014309) uni_indicator_pane_g6

0xf906,	// (0x0001a089) uni_indicator_pane_g_ParamLimits

0x2a30,	// (0x0000d1b3) popup_tmo_note_window_ParamLimits

0x2a30,	// (0x0000d1b3) popup_tmo_note_window

0x5a98,	// (0x0001021b) fshwr2_bg_pane

0xead2,	// (0x00019255) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xead2,	// (0x00019255) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9a,	// (0x0001a61d) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9a,	// (0x0001a61d) fshwr2_func_candi_cell_pane_g

0x57ed,	// (0x0000ff70) bg_popup_window_pane_cp01

0x6328,	// (0x00010aab) bg_popup_window_pane_g1_cp01

0xf08f,	// (0x00019812) bg_popup_window_pane_cp22_ParamLimits

0xf08f,	// (0x00019812) bg_popup_window_pane_cp22

0xf09d,	// (0x00019820) listscroll_tmo_link_pane_ParamLimits

0xf09d,	// (0x00019820) listscroll_tmo_link_pane

0xf0dd,	// (0x00019860) popup_tmo_note_window_g1_ParamLimits

0xf0dd,	// (0x00019860) popup_tmo_note_window_g1

0xf0ea,	// (0x0001986d) tmo_note_info_pane_ParamLimits

0xf0ea,	// (0x0001986d) tmo_note_info_pane

0x3d53,	// (0x0000e4d6) list_tmo_note_info_pane_g1_ParamLimits

0x3d53,	// (0x0000e4d6) list_tmo_note_info_pane_g1

0xf104,	// (0x00019887) list_tmo_note_info_pane_g2_ParamLimits

0xf104,	// (0x00019887) list_tmo_note_info_pane_g2

0x0001,

0xfe9f,	// (0x0001a622) list_tmo_note_info_pane_g_ParamLimits

0xfe9f,	// (0x0001a622) list_tmo_note_info_pane_g

0xf120,	// (0x000198a3) list_tmo_note_info_text_pane_ParamLimits

0xf120,	// (0x000198a3) list_tmo_note_info_text_pane

0xf162,	// (0x000198e5) list_tmo_link_pane

0xf16f,	// (0x000198f2) scroll_pane_cp20

0xf17c,	// (0x000198ff) list_single_tmo_link_pane_ParamLimits

0xf17c,	// (0x000198ff) list_single_tmo_link_pane

0xf18c,	// (0x0001990f) list_single_tmo_link_pane_t1

0xf19a,	// (0x0001991d) list_tmo_note_info_text_pane_t1_ParamLimits

0xf19a,	// (0x0001991d) list_tmo_note_info_text_pane_t1

0x75ee,	// (0x00011d71) aid_size_touch_scroll_bar_cp01_ParamLimits

0x75ee,	// (0x00011d71) aid_size_touch_scroll_bar_cp01

0x0be4,	// (0x0000b367) aid_size_touch_slider_marker

0xdbad,	// (0x00018330) popup_settings_window_ParamLimits

0xdbad,	// (0x00018330) popup_settings_window

0x84f4,	// (0x00012c77) popup_candi_list_indi_window

0x853a,	// (0x00012cbd) aid_touch_navi_pane_ParamLimits

0x59f4,	// (0x00010177) rs_clock_indi_pane

0x59fd,	// (0x00010180) sctrl_sk_bottom_pane_ParamLimits

0x5a0e,	// (0x00010191) sctrl_sk_top_pane_ParamLimits

0x5b16,	// (0x00010299) popup_fep_tooltip_window

0xee4d,	// (0x000195d0) aid_size_cell_widget_grid_ParamLimits

0x392c,	// (0x0000e0af) cell_ai5_widget_pane_g1_ParamLimits

0x392c,	// (0x0000e0af) cell_ai5_widget_pane_g1

0x398e,	// (0x0000e111) cell_ai5_widget_pane_g6_ParamLimits

0x399a,	// (0x0000e11d) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe1d,	// (0x0001a5a0) cell_ai5_widget_pane_g_ParamLimits

0xfe1d,	// (0x0001a5a0) cell_ai5_widget_pane_g

0x3ab5,	// (0x0000e238) cell_ai5_widget_pane_t10_ParamLimits

0x3ab5,	// (0x0000e238) cell_ai5_widget_pane_t10

0x3ad3,	// (0x0000e256) grid_ai5_widget_pane_ParamLimits

0xef29,	// (0x000196ac) cell_contacts_ai5_widget_pane_ParamLimits

0xef29,	// (0x000196ac) cell_contacts_ai5_widget_pane

0xf052,	// (0x000197d5) popup_discreet_window_t3_ParamLimits

0xf052,	// (0x000197d5) popup_discreet_window_t3

0xea20,	// (0x000191a3) popup_fshwr2_char_preview_window_ParamLimits

0xea20,	// (0x000191a3) popup_fshwr2_char_preview_window

0x3d6a,	// (0x0000e4ed) tmo_note_info_pane_t1

0x3d7f,	// (0x0000e502) tmo_note_info_pane_t2

0x3d94,	// (0x0000e517) tmo_note_info_pane_t3

0xf13e,	// (0x000198c1) tmo_note_info_pane_t4

0xf150,	// (0x000198d3) tmo_note_info_pane_t5

0x0004,

0xfea4,	// (0x0001a627) tmo_note_info_pane_t

0xf162,	// (0x000198e5) list_tmo_link_pane_ParamLimits

0xf16f,	// (0x000198f2) scroll_pane_cp20_ParamLimits

0x43ee,	// (0x0000eb71) bg_popup_fep_char_preview_window_cp01

0xf1b3,	// (0x00019936) popup_fshwr2_char_preview_window_t1

0xf1c1,	// (0x00019944) popup_candi_list_indi_window_g1

0xf1ca,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane

0xf1d6,	// (0x00019959) cell_contacts_ai5_widget_pane_g1

0xf1eb,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2

0xf1f7,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeaf,	// (0x0001a632) cell_contacts_ai5_widget_pane_g

0xf203,	// (0x00019986) cell_contacts_ai5_widget_pane_t1

0x73cb,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01

0x3e0c,	// (0x0000e58f) settings_container_pane

0x818b,	// (0x0001290e) listscroll_set_pane_copy1

0xa65d,	// (0x00014de0) scroll_pane_cp121_copy1

0xf215,	// (0x00019998) set_content_pane_copy1

0xf21d,	// (0x000199a0) aid_height_set_list_copy1_ParamLimits

0xf21d,	// (0x000199a0) aid_height_set_list_copy1

0x9d5d,	// (0x000144e0) aid_size_parent_copy1_ParamLimits

0x9d5d,	// (0x000144e0) aid_size_parent_copy1

0xf229,	// (0x000199ac) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf229,	// (0x000199ac) button_value_adjust_pane_cp6_copy1

0x84da,	// (0x00012c5d) list_highlight_pane_cp2_copy1_ParamLimits

0x84da,	// (0x00012c5d) list_highlight_pane_cp2_copy1

0x3e18,	// (0x0000e59b) list_set_pane_copy1_ParamLimits

0x3e18,	// (0x0000e59b) list_set_pane_copy1

0x3da9,	// (0x0000e52c) main_pane_set_t1_copy1_ParamLimits

0x3da9,	// (0x0000e52c) main_pane_set_t1_copy1

0x3de3,	// (0x0000e566) main_pane_set_t2_copy1_ParamLimits

0x3de3,	// (0x0000e566) main_pane_set_t2_copy1

0xf23d,	// (0x000199c0) main_pane_set_t3_copy1

0xf24b,	// (0x000199ce) main_pane_set_t4_copy1

0x3e00,	// (0x0000e583) set_content_pane_g1_copy1_ParamLimits

0x3e00,	// (0x0000e583) set_content_pane_g1_copy1

0xf259,	// (0x000199dc) setting_code_pane_copy1

0xf261,	// (0x000199e4) setting_slider_graphic_pane_copy1

0xf261,	// (0x000199e4) setting_slider_pane_copy1

0xf261,	// (0x000199e4) setting_text_pane_copy1

0xf261,	// (0x000199e4) setting_volume_pane_copy1

0xf269,	// (0x000199ec) settings_code_pane_cp2_copy1

0xf271,	// (0x000199f4) settings_code_pane_cp_copy1_ParamLimits

0xf271,	// (0x000199f4) settings_code_pane_cp_copy1

0xeb22,	// (0x000192a5) volume_set_pane_copy1

0x3eae,	// (0x0000e631) volume_set_pane_g10_copy1

0x3eb6,	// (0x0000e639) volume_set_pane_g1_copy1

0x3ebe,	// (0x0000e641) volume_set_pane_g2_copy1

0x3ec6,	// (0x0000e649) volume_set_pane_g3_copy1

0x3ece,	// (0x0000e651) volume_set_pane_g4_copy1

0x3ed6,	// (0x0000e659) volume_set_pane_g5_copy1

0x3ede,	// (0x0000e661) volume_set_pane_g6_copy1

0x3ee6,	// (0x0000e669) volume_set_pane_g7_copy1

0x3eee,	// (0x0000e671) volume_set_pane_g8_copy1

0x3ef6,	// (0x0000e679) volume_set_pane_g9_copy1

0x66bb,	// (0x00010e3e) bg_set_opt_pane_cp_copy1_ParamLimits

0x66bb,	// (0x00010e3e) bg_set_opt_pane_cp_copy1

0x45ff,	// (0x0000ed82) setting_slider_pane_t1_copy1_ParamLimits

0x45ff,	// (0x0000ed82) setting_slider_pane_t1_copy1

0x6339,	// (0x00010abc) setting_slider_pane_t2_copy1_ParamLimits

0x6339,	// (0x00010abc) setting_slider_pane_t2_copy1

0x6352,	// (0x00010ad5) setting_slider_pane_t3_copy1_ParamLimits

0x6352,	// (0x00010ad5) setting_slider_pane_t3_copy1

0x4645,	// (0x0000edc8) slider_set_pane_copy1_ParamLimits

0x4645,	// (0x0000edc8) slider_set_pane_copy1

0x74ee,	// (0x00011c71) set_opt_bg_pane_g1_copy2

0x74f6,	// (0x00011c79) set_opt_bg_pane_g2_copy2

0xf285,	// (0x00019a08) set_opt_bg_pane_g3_copy2

0x7506,	// (0x00011c89) set_opt_bg_pane_g4_copy2

0x750e,	// (0x00011c91) set_opt_bg_pane_g5_copy2

0x7516,	// (0x00011c99) set_opt_bg_pane_g6_copy2

0x3efe,	// (0x0000e681) set_opt_bg_pane_g7_copy2

0xf28d,	// (0x00019a10) set_opt_bg_pane_g8_copy2

0xf295,	// (0x00019a18) set_opt_bg_pane_g9_copy2

0x53d8,	// (0x0000fb5b) aid_size_touch_slider_mark_copy1_ParamLimits

0x53d8,	// (0x0000fb5b) aid_size_touch_slider_mark_copy1

0x9e93,	// (0x00014616) slider_set_pane_g1_copy1

0x9eb5,	// (0x00014638) slider_set_pane_g2_copy1

0x53f8,	// (0x0000fb7b) slider_set_pane_g3_copy1_ParamLimits

0x53f8,	// (0x0000fb7b) slider_set_pane_g3_copy1

0x540c,	// (0x0000fb8f) slider_set_pane_g4_copy1_ParamLimits

0x540c,	// (0x0000fb8f) slider_set_pane_g4_copy1

0x5424,	// (0x0000fba7) slider_set_pane_g5_copy1_ParamLimits

0x5424,	// (0x0000fba7) slider_set_pane_g5_copy1

0x53f8,	// (0x0000fb7b) slider_set_pane_g6_copy1_ParamLimits

0x53f8,	// (0x0000fb7b) slider_set_pane_g6_copy1

0xeb2a,	// (0x000192ad) slider_set_pane_g7_copy1_ParamLimits

0xeb2a,	// (0x000192ad) slider_set_pane_g7_copy1

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp2_copy1

0x66fd,	// (0x00010e80) setting_slider_graphic_pane_g1_copy1

0xeb40,	// (0x000192c3) setting_slider_graphic_pane_t1_copy1

0xeb4f,	// (0x000192d2) setting_slider_graphic_pane_t2_copy1

0xeb5e,	// (0x000192e1) slider_set_pane_cp_copy1

0xf2a5,	// (0x00019a28) input_focus_pane_cp1_copy1

0xf2ae,	// (0x00019a31) list_set_text_pane_copy1

0xf2b6,	// (0x00019a39) setting_text_pane_g1_copy1

0xeb66,	// (0x000192e9) set_text_pane_t1_copy1

0xf2a5,	// (0x00019a28) input_focus_pane_cp2_copy1

0xf2b6,	// (0x00019a39) setting_code_pane_g1_copy1

0xf2bf,	// (0x00019a42) setting_code_pane_t1_copy1

0x0fa9,	// (0x0000b72c) list_set_graphic_pane_copy1

0x65db,	// (0x00010d5e) bg_set_opt_pane_cp4_copy1

0xf2cd,	// (0x00019a50) list_set_graphic_pane_g1_copy1_ParamLimits

0xf2cd,	// (0x00019a50) list_set_graphic_pane_g1_copy1

0xf2d9,	// (0x00019a5c) list_set_graphic_pane_g2_copy1

0x7efd,	// (0x00012680) list_set_graphic_pane_t1_copy1_ParamLimits

0x7efd,	// (0x00012680) list_set_graphic_pane_t1_copy1

0xb0ff,	// (0x00015882) rs_clock_indi_pane_g1

0xf2e1,	// (0x00019a64) rs_clock_indi_pane_t1

0xf2ef,	// (0x00019a72) rs_indi_pane

0xf2f7,	// (0x00019a7a) rs_indi_pane_g1

0xf300,	// (0x00019a83) rs_indi_pane_g2

0xf1c1,	// (0x00019944) rs_indi_pane_g3

0x0002,

0xfeb6,	// (0x0001a639) rs_indi_pane_g

0x818b,	// (0x0001290e) bg_popup_preview_window_pane_cp03

0xf309,	// (0x00019a8c) popup_fep_tooltip_window_t1

0xbede,	// (0x00016661) popup_note2_window_g2_ParamLimits

0xbede,	// (0x00016661) popup_note2_window_g2

0x0001,

0xfc56,	// (0x0001a3d9) popup_note2_window_g_ParamLimits

0xfc56,	// (0x0001a3d9) popup_note2_window_g

0xc4bf,	// (0x00016c42) bg_popup_sub_pane_cp11_ParamLimits

0xc4cc,	// (0x00016c4f) cell_ai3_links_pane_g1_ParamLimits

0xc4e3,	// (0x00016c66) cell_ai3_links_pane_t1

0xeb66,	// (0x000192e9) set_text_pane_t1_copy1_ParamLimits

0x80b2,	// (0x00012835) cell_graphic_popup_pane_cp2_ParamLimits

0x80b2,	// (0x00012835) cell_graphic_popup_pane_cp2

0xf317,	// (0x00019a9a) cell_graphic_popup_pane_g1_cp2

0x6c96,	// (0x00011419) cell_graphic_popup_pane_g2_cp2

0xf31f,	// (0x00019aa2) cell_graphic_popup_pane_g3_cp2

0xf327,	// (0x00019aaa) cell_graphic_popup_pane_t2_cp2

0x6ca7,	// (0x0001142a) grid_highlight_pane_cp3_cp2

0x78d8,	// (0x0001205b) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x73cb,	// (0x00011b4e) main_tmo_pane_ParamLimits

0x2a28,	// (0x0000d1ab) popup_tmo_big_image_note_window

0xee8a,	// (0x0001960d) cell_ai5_widget_list_pane

0x3923,	// (0x0000e0a6) cell_ai5_widget_lrg_icon_pane

0x3d6a,	// (0x0000e4ed) tmo_note_info_pane_t1_ParamLimits

0x3d7f,	// (0x0000e502) tmo_note_info_pane_t2_ParamLimits

0x3d94,	// (0x0000e517) tmo_note_info_pane_t3_ParamLimits

0xf13e,	// (0x000198c1) tmo_note_info_pane_t4_ParamLimits

0xf150,	// (0x000198d3) tmo_note_info_pane_t5_ParamLimits

0xfea4,	// (0x0001a627) tmo_note_info_pane_t_ParamLimits

0x3e0c,	// (0x0000e58f) settings_container_pane_ParamLimits

0xf29d,	// (0x00019a20) indicator_popup_pane_cp5

0xf29d,	// (0x00019a20) indicator_popup_pane_cp6

0x0fa9,	// (0x0000b72c) list_set_graphic_pane_copy1_ParamLimits

0x64ea,	// (0x00010c6d) bg_popup_window_pane_cp23

0xf335,	// (0x00019ab8) popup_tmo_big_image_note_window_g1

0xf33e,	// (0x00019ac1) popup_tmo_big_image_note_window_t1

0xf34c,	// (0x00019acf) popup_tmo_big_image_note_window_t2

0xf35a,	// (0x00019add) popup_tmo_big_image_note_window_t3

0x0002,

0xfebd,	// (0x0001a640) popup_tmo_big_image_note_window_t

0xb0ff,	// (0x00015882) cell_ai5_widget_lrg_icon_pane_g1

0xf368,	// (0x00019aeb) cell_ai5_widget_lrg_icon_pane_t1

0x3f42,	// (0x0000e6c5) cell_ai5_widget_list_row_pane_ParamLimits

0x3f42,	// (0x0000e6c5) cell_ai5_widget_list_row_pane

0x3f59,	// (0x0000e6dc) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3f59,	// (0x0000e6dc) cell_ai5_widget_list_row_pane_g1

0x3f66,	// (0x0000e6e9) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3f66,	// (0x0000e6e9) cell_ai5_widget_list_row_pane_t1

0x3f97,	// (0x0000e71a) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3f97,	// (0x0000e71a) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec4,	// (0x0001a647) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec4,	// (0x0001a647) cell_ai5_widget_list_row_pane_t

0x43ee,	// (0x0000eb71) main_fep_vtchi_ss_pane

0xf396,	// (0x00019b19) popup_fep_char_pre_window

0xf39e,	// (0x00019b21) popup_fep_ituss_window

0x3fce,	// (0x0000e751) popup_fep_vkbss_window

0xf3c6,	// (0x00019b49) grid_vkbss_keypad_pane_ParamLimits

0xf3c6,	// (0x00019b49) grid_vkbss_keypad_pane

0xf3d6,	// (0x00019b59) ituss_keypad_pane

0x63af,	// (0x00010b32) aid_vkbss_key_offset_ParamLimits

0x63af,	// (0x00010b32) aid_vkbss_key_offset

0x63bb,	// (0x00010b3e) cell_vkbss_key_pane_ParamLimits

0x63bb,	// (0x00010b3e) cell_vkbss_key_pane

0x881f,	// (0x00012fa2) bg_cell_vkbss_key_g1_ParamLimits

0x881f,	// (0x00012fa2) bg_cell_vkbss_key_g1

0xf3e5,	// (0x00019b68) cell_vkbss_key_3p_pane_ParamLimits

0xf3e5,	// (0x00019b68) cell_vkbss_key_3p_pane

0xf3ff,	// (0x00019b82) cell_vkbss_key_g1_ParamLimits

0xf3ff,	// (0x00019b82) cell_vkbss_key_g1

0xf419,	// (0x00019b9c) cell_vkbss_key_t1_ParamLimits

0xf419,	// (0x00019b9c) cell_vkbss_key_t1

0x63d1,	// (0x00010b54) cell_ituss_key_pane_ParamLimits

0x63d1,	// (0x00010b54) cell_ituss_key_pane

0xf444,	// (0x00019bc7) bg_cell_ituss_key_g1_ParamLimits

0xf444,	// (0x00019bc7) bg_cell_ituss_key_g1

0xf450,	// (0x00019bd3) cell_ituss_key_pane_g1_ParamLimits

0xf450,	// (0x00019bd3) cell_ituss_key_pane_g1

0x63e2,	// (0x00010b65) cell_ituss_key_pane_g2_ParamLimits

0x63e2,	// (0x00010b65) cell_ituss_key_pane_g2

0x0002,

0xfecb,	// (0x0001a64e) cell_ituss_key_pane_g_ParamLimits

0xfecb,	// (0x0001a64e) cell_ituss_key_pane_g

0x640e,	// (0x00010b91) cell_ituss_key_t1_ParamLimits

0x640e,	// (0x00010b91) cell_ituss_key_t1

0x6444,	// (0x00010bc7) cell_ituss_key_t2_ParamLimits

0x6444,	// (0x00010bc7) cell_ituss_key_t2

0x6475,	// (0x00010bf8) cell_ituss_key_t3_ParamLimits

0x6475,	// (0x00010bf8) cell_ituss_key_t3

0x6444,	// (0x00010bc7) cell_ituss_key_t4_ParamLimits

0x6444,	// (0x00010bc7) cell_ituss_key_t4

0x0004,

0xfed2,	// (0x0001a655) cell_ituss_key_t_ParamLimits

0xfed2,	// (0x0001a655) cell_ituss_key_t

0xf476,	// (0x00019bf9) cell_vkbss_key_3p_pane_g1

0xf47e,	// (0x00019c01) cell_vkbss_key_3p_pane_g2

0xf486,	// (0x00019c09) cell_vkbss_key_3p_pane_g3

0x0002,

0xfedd,	// (0x0001a660) cell_vkbss_key_3p_pane_g

0x818b,	// (0x0001290e) bg_popup_fep_char_preview_window_cp02

0xf48e,	// (0x00019c11) popup_fep_char_pre_window_t1

0x3910,	// (0x0000e093) main_ai5_sk_pane

0xf1ca,	// (0x0001994d) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xf1d6,	// (0x00019959) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xf1eb,	// (0x0001996e) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xf1f7,	// (0x0001997a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeaf,	// (0x0001a632) cell_contacts_ai5_widget_pane_g_ParamLimits

0xf203,	// (0x00019986) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x73cb,	// (0x00011b4e) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3fdb,	// (0x0000e75e) main_ai5_sk_pane_g1

0x8ed3,	// (0x00013656) popup_query_code_window_g1

0x3fbf,	// (0x0000e742) popup_fep_vkb_icf_pane

0xf3b0,	// (0x00019b33) popup_fep_vtchi_icf_pane

0xf49c,	// (0x00019c1f) bg_icf_pane

0xf4a8,	// (0x00019c2b) list_vkb_icf_pane

0xf4b4,	// (0x00019c37) bg_icf_pane_cp01

0xf4c7,	// (0x00019c4a) vtchi_icf_list_pane

0x3fe4,	// (0x0000e767) list_vkb_icf_pane_t1_ParamLimits

0x3fe4,	// (0x0000e767) list_vkb_icf_pane_t1

0xf4d7,	// (0x00019c5a) vtchi_icf_list_pane_t1_ParamLimits

0xf4d7,	// (0x00019c5a) vtchi_icf_list_pane_t1

0xf39e,	// (0x00019b21) popup_fep_ituss_window_ParamLimits

0xf3b0,	// (0x00019b33) popup_fep_vtchi_icf_pane_ParamLimits

0xf3d6,	// (0x00019b59) ituss_keypad_pane_ParamLimits

0x63a5,	// (0x00010b28) ituss_sks_pane

0xf49c,	// (0x00019c1f) bg_icf_pane_ParamLimits

0xf376,	// (0x00019af9) icf_edit_indi_pane_ParamLimits

0xf376,	// (0x00019af9) icf_edit_indi_pane

0xf4a8,	// (0x00019c2b) list_vkb_icf_pane_ParamLimits

0xf4b4,	// (0x00019c37) bg_icf_pane_cp01_ParamLimits

0xf389,	// (0x00019b0c) icf_edit_indi_pane_cp01_ParamLimits

0xf389,	// (0x00019b0c) icf_edit_indi_pane_cp01

0xf4cf,	// (0x00019c52) vtchi_query_pane

0xedd8,	// (0x0001955b) icf_edit_indi_pane_g1_ParamLimits

0xedd8,	// (0x0001955b) icf_edit_indi_pane_g1

0x3ffa,	// (0x0000e77d) icf_edit_indi_pane_g2_ParamLimits

0x3ffa,	// (0x0000e77d) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x0001a678) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x0001a678) icf_edit_indi_pane_g

0x400a,	// (0x0000e78d) icf_edit_indi_pane_t1

0xf4ee,	// (0x00019c71) bg_input_focus_pane_cp042

0xf4f7,	// (0x00019c7a) vtchi_button_pane

0xf500,	// (0x00019c83) vtchi_query_pane_t1

0xf50e,	// (0x00019c91) vtchi_query_pane_t2

0xf51c,	// (0x00019c9f) vtchi_query_pane_t3

0x0002,

0xfee4,	// (0x0001a667) vtchi_query_pane_t

0x43ee,	// (0x0000eb71) bg_button_pane_cp13

0xf52a,	// (0x00019cad) vtchi_button_pane_g1

0x64b8,	// (0x00010c3b) ituss_sks_pane_g1

0x64c1,	// (0x00010c44) ituss_sks_pane_g2

0x0001,

0xfeeb,	// (0x0001a66e) ituss_sks_pane_g

0xf532,	// (0x00019cb5) ituss_sks_pane_t1

0xf540,	// (0x00019cc3) ituss_sks_pane_t2

0x0001,

0xfef0,	// (0x0001a673) ituss_sks_pane_t

0xabfa,	// (0x0001537d) indicator_nsta_pane_cp_g1

0xac03,	// (0x00015386) indicator_nsta_pane_cp_g2

0xac0b,	// (0x0001538e) indicator_nsta_pane_cp_g3

0xac13,	// (0x00015396) indicator_nsta_pane_cp_g4

0xac1b,	// (0x0001539e) indicator_nsta_pane_cp_g5

0xac23,	// (0x000153a6) indicator_nsta_pane_cp_g6

0x0005,

0xfa94,	// (0x0001a217) indicator_nsta_pane_cp_g

0x36fb,	// (0x0000de7e) cell_graphic2_pane_t2_ParamLimits

0x36fb,	// (0x0000de7e) cell_graphic2_pane_t2

0x0001,

0xfda6,	// (0x0001a529) cell_graphic2_pane_t_ParamLimits

0xfda6,	// (0x0001a529) cell_graphic2_pane_t

0x3733,	// (0x0000deb6) cell_graphic2_control_pane_t1

0x0ebd,	// (0x0000b640) signal_pane_g3_ParamLimits

0x0ebd,	// (0x0000b640) signal_pane_g3

0x0ed1,	// (0x0000b654) signal_pane_g4_ParamLimits

0x0ed1,	// (0x0000b654) signal_pane_g4

0x3fa9,	// (0x0000e72c) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3fa9,	// (0x0000e72c) cell_ai5_widget_list_row_pane_t3

0xf464,	// (0x00019be7) cell_ituss_key_pane_t1_ParamLimits

0xf464,	// (0x00019be7) cell_ituss_key_pane_t1

0x8b45,	// (0x000132c8) form_field_data_wide_pane_vc_t2_ParamLimits

0x8b45,	// (0x000132c8) form_field_data_wide_pane_vc_t2

0x8b57,	// (0x000132da) form_field_data_wide_pane_vc_t3_ParamLimits

0x8b57,	// (0x000132da) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ee,	// (0x00019f71) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ee,	// (0x00019f71) form_field_data_wide_pane_vc_t

0xa8fc,	// (0x0001507f) form_field_slider_wide_pane_vc_t3_ParamLimits

0xa8fc,	// (0x0001507f) form_field_slider_wide_pane_vc_t3

0xa9ba,	// (0x0001513d) form_field_popup_wide_pane_vc_t2_ParamLimits

0xa9ba,	// (0x0001513d) form_field_popup_wide_pane_vc_t2

0xa9cf,	// (0x00015152) form_field_popup_wide_pane_vc_t3_ParamLimits

0xa9cf,	// (0x00015152) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa83,	// (0x0001a206) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa83,	// (0x0001a206) form_field_popup_wide_pane_vc_t

0xe9a0,	// (0x00019123) aid_fshwr2_btn_pane_ParamLimits

0xe9b4,	// (0x00019137) aid_fshwr2_syb_pane_ParamLimits

0xe9c8,	// (0x0001914b) aid_fshwr2_txt_pane_ParamLimits

0x5a98,	// (0x0001021b) fshwr2_bg_pane_ParamLimits

0xe9d8,	// (0x0001915b) fshwr2_func_candi_pane_ParamLimits

0xe9f0,	// (0x00019173) fshwr2_hwr_syb_pane_ParamLimits

0xea08,	// (0x0001918b) fshwr2_icf_pane_ParamLimits

0xa877,	// (0x00014ffa) list_double_graphic_pane_vc_g4_ParamLimits

0xa877,	// (0x00014ffa) list_double_graphic_pane_vc_g4

0x6402,	// (0x00010b85) cell_ituss_key_pane_g3_ParamLimits

0x6402,	// (0x00010b85) cell_ituss_key_pane_g3

0x64a6,	// (0x00010c29) cell_ituss_key_t5_ParamLimits

0x64a6,	// (0x00010c29) cell_ituss_key_t5

0x3fce,	// (0x0000e751) popup_fep_vkbss_window_ParamLimits

0x391a,	// (0x0000e09d) aid_cell_ai5_quarter

0x400a,	// (0x0000e78d) icf_edit_indi_pane_t1_ParamLimits

0x6a0a,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x6a0a,	// (0x0001118d) aid_tch_indicator_popup_pane_cp2

0x6a1d,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x6a1d,	// (0x000111a0) aid_tch_query_popup_data_pane_cp2

0x8e7b,	// (0x000135fe) aid_tch_query_popup_pane_ParamLimits

0x8e7b,	// (0x000135fe) aid_tch_query_popup_pane

0x8e7b,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x8e7b,	// (0x000135fe) aid_tch_query_popup_data_pane_cp1

0x84da,	// (0x00012c5d) cell_fshwr2_syb_bg_pane_ParamLimits

0xeafc,	// (0x0001927f) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xeb0c,	// (0x0001928f) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0x3fbf,	// (0x0000e742) popup_fep_vkb_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pql_av_qvga_lsc_Normal

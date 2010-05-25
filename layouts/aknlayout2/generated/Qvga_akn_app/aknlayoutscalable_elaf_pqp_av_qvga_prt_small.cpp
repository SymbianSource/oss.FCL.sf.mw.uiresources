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

#include "aknlayoutscalable_elaf_pqp_av_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000e93f };

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
0x21b0,	// (0x00010aef) Screen

0x21c2,	// (0x00010b01) application_window_ParamLimits

0x21c2,	// (0x00010b01) application_window

0x21da,	// (0x00010b19) screen_g1

0xbe8b,	// (0x0001a7ca) area_bottom_pane_ParamLimits

0xbe8b,	// (0x0001a7ca) area_bottom_pane

0xbf4b,	// (0x0001a88a) area_top_pane_ParamLimits

0xbf4b,	// (0x0001a88a) area_top_pane

0xbfd5,	// (0x0001a914) main_pane_ParamLimits

0xbfd5,	// (0x0001a914) main_pane

0x21e4,	// (0x00010b23) misc_graphics

0x4199,	// (0x00012ad8) battery_pane_ParamLimits

0x4199,	// (0x00012ad8) battery_pane

0x4ec6,	// (0x00013805) bg_status_flat_pane_g8

0x4ece,	// (0x0001380d) bg_status_flat_pane_g9

0x4259,	// (0x00012b98) context_pane_ParamLimits

0x4259,	// (0x00012b98) context_pane

0x436f,	// (0x00012cae) navi_pane_ParamLimits

0x436f,	// (0x00012cae) navi_pane

0x43ed,	// (0x00012d2c) signal_pane_ParamLimits

0x43ed,	// (0x00012d2c) signal_pane

0x0008,

0xf872,	// (0x0001e1b1) bg_status_flat_pane_g

0x4456,	// (0x00012d95) status_pane_g1_ParamLimits

0x4456,	// (0x00012d95) status_pane_g1

0x446a,	// (0x00012da9) status_pane_g2_ParamLimits

0x446a,	// (0x00012da9) status_pane_g2

0x4476,	// (0x00012db5) status_pane_g3_ParamLimits

0x4476,	// (0x00012db5) status_pane_g3

0x0004,

0xf7a0,	// (0x0001e0df) status_pane_g_ParamLimits

0xf7a0,	// (0x0001e0df) status_pane_g

0x44a8,	// (0x00012de7) title_pane_ParamLimits

0x44a8,	// (0x00012de7) title_pane

0x44e5,	// (0x00012e24) uni_indicator_pane_ParamLimits

0x44e5,	// (0x00012e24) uni_indicator_pane

0x40b9,	// (0x000129f8) bg_list_pane_ParamLimits

0x40b9,	// (0x000129f8) bg_list_pane

0x40d9,	// (0x00012a18) find_pane

0x40e1,	// (0x00012a20) listscroll_app_pane_ParamLimits

0x40e1,	// (0x00012a20) listscroll_app_pane

0x40ed,	// (0x00012a2c) listscroll_form_pane

0xc832,	// (0x0001b171) listscroll_gen_pane_ParamLimits

0xc832,	// (0x0001b171) listscroll_gen_pane

0xc846,	// (0x0001b185) listscroll_set_pane

0x32fd,	// (0x00011c3c) main_idle_act_pane

0x3dc5,	// (0x00012704) main_idle_trad_pane

0x3dc5,	// (0x00012704) main_list_empty_pane

0x4107,	// (0x00012a46) main_midp_pane

0x4113,	// (0x00012a52) main_pane_g1_ParamLimits

0x4113,	// (0x00012a52) main_pane_g1

0xc84e,	// (0x0001b18d) popup_ai_message_window_ParamLimits

0xc84e,	// (0x0001b18d) popup_ai_message_window

0xc8e4,	// (0x0001b223) popup_fep_china_uni_window_ParamLimits

0xc8e4,	// (0x0001b223) popup_fep_china_uni_window

0xc922,	// (0x0001b261) popup_fep_japan_candidate_window_ParamLimits

0xc922,	// (0x0001b261) popup_fep_japan_candidate_window

0xc940,	// (0x0001b27f) popup_fep_japan_predictive_window_ParamLimits

0xc940,	// (0x0001b27f) popup_fep_japan_predictive_window

0xc96c,	// (0x0001b2ab) popup_find_window

0xc979,	// (0x0001b2b8) popup_grid_graphic_window_ParamLimits

0xc979,	// (0x0001b2b8) popup_grid_graphic_window

0xc99f,	// (0x0001b2de) popup_large_graphic_colour_window

0xc9c3,	// (0x0001b302) popup_menu_window_ParamLimits

0xc9c3,	// (0x0001b302) popup_menu_window

0xcb0b,	// (0x0001b44a) popup_note_image_window

0xcaf9,	// (0x0001b438) popup_note_wait_window_ParamLimits

0xcaf9,	// (0x0001b438) popup_note_wait_window

0xcaf9,	// (0x0001b438) popup_note_window_ParamLimits

0xcaf9,	// (0x0001b438) popup_note_window

0xcb5f,	// (0x0001b49e) popup_query_code_window_ParamLimits

0xcb5f,	// (0x0001b49e) popup_query_code_window

0xcb71,	// (0x0001b4b0) popup_query_data_code_window_ParamLimits

0xcb71,	// (0x0001b4b0) popup_query_data_code_window

0xcb86,	// (0x0001b4c5) popup_query_data_window_ParamLimits

0xcb86,	// (0x0001b4c5) popup_query_data_window

0xcb9c,	// (0x0001b4db) popup_query_sat_info_window_ParamLimits

0xcb9c,	// (0x0001b4db) popup_query_sat_info_window

0xcbcd,	// (0x0001b50c) popup_snote_single_graphic_window_ParamLimits

0xcbcd,	// (0x0001b50c) popup_snote_single_graphic_window

0xcbcd,	// (0x0001b50c) popup_snote_single_text_window_ParamLimits

0xcbcd,	// (0x0001b50c) popup_snote_single_text_window

0xcbe0,	// (0x0001b51f) popup_sub_window_general

0xccee,	// (0x0001b62d) popup_window_general_ParamLimits

0xccee,	// (0x0001b62d) popup_window_general

0x4129,	// (0x00012a68) power_save_pane

0xc6c7,	// (0x0001b006) control_pane_g1_ParamLimits

0xc6c7,	// (0x0001b006) control_pane_g1

0xc6ee,	// (0x0001b02d) control_pane_g2_ParamLimits

0xc6ee,	// (0x0001b02d) control_pane_g2

0x407c,	// (0x000129bb) control_pane_g3_ParamLimits

0x407c,	// (0x000129bb) control_pane_g3

0x0007,

0xf788,	// (0x0001e0c7) control_pane_g_ParamLimits

0xf788,	// (0x0001e0c7) control_pane_g

0xc736,	// (0x0001b075) control_pane_t1_ParamLimits

0xc736,	// (0x0001b075) control_pane_t1

0xc789,	// (0x0001b0c8) control_pane_t2_ParamLimits

0xc789,	// (0x0001b0c8) control_pane_t2

0x0002,

0xf799,	// (0x0001e0d8) control_pane_t_ParamLimits

0xf799,	// (0x0001e0d8) control_pane_t

0x3fa3,	// (0x000128e2) navi_navi_volume_pane_cp1

0x3fab,	// (0x000128ea) status_small_icon_pane

0x3fb3,	// (0x000128f2) status_small_pane_g1_ParamLimits

0x3fb3,	// (0x000128f2) status_small_pane_g1

0x3fe7,	// (0x00012926) status_small_pane_g2_ParamLimits

0x3fe7,	// (0x00012926) status_small_pane_g2

0x3ff3,	// (0x00012932) status_small_pane_g3_ParamLimits

0x3ff3,	// (0x00012932) status_small_pane_g3

0x3fff,	// (0x0001293e) status_small_pane_g4_ParamLimits

0x3fff,	// (0x0001293e) status_small_pane_g4

0x400b,	// (0x0001294a) status_small_pane_g5_ParamLimits

0x400b,	// (0x0001294a) status_small_pane_g5

0x4017,	// (0x00012956) status_small_pane_g6_ParamLimits

0x4017,	// (0x00012956) status_small_pane_g6

0x0007,

0xf777,	// (0x0001e0b6) status_small_pane_g_ParamLimits

0xf777,	// (0x0001e0b6) status_small_pane_g

0x4046,	// (0x00012985) status_small_pane_t1

0x4068,	// (0x000129a7) status_small_wait_pane_ParamLimits

0x4068,	// (0x000129a7) status_small_wait_pane

0x37e5,	// (0x00012124) aid_levels_signal_ParamLimits

0x37e5,	// (0x00012124) aid_levels_signal

0x37f4,	// (0x00012133) signal_pane_g1_ParamLimits

0x37f4,	// (0x00012133) signal_pane_g1

0x3809,	// (0x00012148) signal_pane_g2_ParamLimits

0x3809,	// (0x00012148) signal_pane_g2

0x0003,

0xf708,	// (0x0001e047) signal_pane_g_ParamLimits

0xf708,	// (0x0001e047) signal_pane_g

0x383a,	// (0x00012179) context_pane_g1

0x21ee,	// (0x00010b2d) title_pane_g1

0x2224,	// (0x00010b63) title_pane_t1

0x228c,	// (0x00010bcb) title_pane_t2

0x22b2,	// (0x00010bf1) title_pane_t3

0x0002,

0xf557,	// (0x0001de96) title_pane_t

0x44fb,	// (0x00012e3a) aid_levels_battery_ParamLimits

0x44fb,	// (0x00012e3a) aid_levels_battery

0x450c,	// (0x00012e4b) battery_pane_g1_ParamLimits

0x450c,	// (0x00012e4b) battery_pane_g1

0x4522,	// (0x00012e61) battery_pane_g2_ParamLimits

0x4522,	// (0x00012e61) battery_pane_g2

0x0001,

0xf7ab,	// (0x0001e0ea) battery_pane_g_ParamLimits

0xf7ab,	// (0x0001e0ea) battery_pane_g

0x57c8,	// (0x00014107) uni_indicator_pane_g1

0x57db,	// (0x0001411a) uni_indicator_pane_g2

0x57ed,	// (0x0001412c) uni_indicator_pane_g3

0x0005,

0xf91a,	// (0x0001e259) uni_indicator_pane_g

0x3c45,	// (0x00012584) navi_icon_pane_ParamLimits

0x3c45,	// (0x00012584) navi_icon_pane

0x3b8b,	// (0x000124ca) navi_midp_pane

0x3c61,	// (0x000125a0) navi_navi_pane

0x3c6b,	// (0x000125aa) navi_text_pane_ParamLimits

0x3c6b,	// (0x000125aa) navi_text_pane

0x21da,	// (0x00010b19) status_small_wait_pane_g1

0x26f1,	// (0x00011030) status_small_wait_pane_g2

0x0001,

0xf915,	// (0x0001e254) status_small_wait_pane_g

0x54f7,	// (0x00013e36) navi_navi_icon_text_pane

0x5511,	// (0x00013e50) navi_navi_pane_g1_ParamLimits

0x5511,	// (0x00013e50) navi_navi_pane_g1

0x54ff,	// (0x00013e3e) navi_navi_pane_g2_ParamLimits

0x54ff,	// (0x00013e3e) navi_navi_pane_g2

0x0001,

0xf8e3,	// (0x0001e222) navi_navi_pane_g_ParamLimits

0xf8e3,	// (0x0001e222) navi_navi_pane_g

0x5523,	// (0x00013e62) navi_navi_tabs_pane

0x552c,	// (0x00013e6b) navi_navi_text_pane

0x54f7,	// (0x00013e36) navi_navi_volume_pane

0x54d3,	// (0x00013e12) navi_text_pane_t1

0x54c7,	// (0x00013e06) navi_icon_pane_g1

0x541c,	// (0x00013d5b) navi_navi_text_pane_t1

0xcf56,	// (0x0001b895) navi_navi_volume_pane_g1

0xcf5e,	// (0x0001b89d) volume_small_pane

0x5382,	// (0x00013cc1) navi_navi_icon_text_pane_g1

0x538a,	// (0x00013cc9) navi_navi_icon_text_pane_t1

0x3c61,	// (0x000125a0) navi_tabs_2_long_pane

0x3c61,	// (0x000125a0) navi_tabs_2_pane

0x3c61,	// (0x000125a0) navi_tabs_3_long_pane

0x3c61,	// (0x000125a0) navi_tabs_3_pane

0x3c61,	// (0x000125a0) navi_tabs_4_pane

0xcf36,	// (0x0001b875) tabs_2_active_pane_ParamLimits

0xcf36,	// (0x0001b875) tabs_2_active_pane

0xcf46,	// (0x0001b885) tabs_2_passive_pane_ParamLimits

0xcf46,	// (0x0001b885) tabs_2_passive_pane

0xcf04,	// (0x0001b843) tabs_3_active_pane_ParamLimits

0xcf04,	// (0x0001b843) tabs_3_active_pane

0xcf14,	// (0x0001b853) tabs_3_passive_pane_ParamLimits

0xcf14,	// (0x0001b853) tabs_3_passive_pane

0xcf25,	// (0x0001b864) tabs_3_passive_pane_cp_ParamLimits

0xcf25,	// (0x0001b864) tabs_3_passive_pane_cp

0xcec0,	// (0x0001b7ff) tabs_4_active_pane_ParamLimits

0xcec0,	// (0x0001b7ff) tabs_4_active_pane

0xced1,	// (0x0001b810) tabs_4_passive_pane_ParamLimits

0xced1,	// (0x0001b810) tabs_4_passive_pane

0xcee2,	// (0x0001b821) tabs_4_passive_pane_cp_ParamLimits

0xcee2,	// (0x0001b821) tabs_4_passive_pane_cp

0xcef3,	// (0x0001b832) tabs_4_passive_pane_cp2_ParamLimits

0xcef3,	// (0x0001b832) tabs_4_passive_pane_cp2

0xcea0,	// (0x0001b7df) tabs_2_long_active_pane_ParamLimits

0xcea0,	// (0x0001b7df) tabs_2_long_active_pane

0xceb0,	// (0x0001b7ef) tabs_2_long_passive_pane_ParamLimits

0xceb0,	// (0x0001b7ef) tabs_2_long_passive_pane

0xce6d,	// (0x0001b7ac) tabs_3_long_active_pane_ParamLimits

0xce6d,	// (0x0001b7ac) tabs_3_long_active_pane

0xce7e,	// (0x0001b7bd) tabs_3_long_passive_pane_ParamLimits

0xce7e,	// (0x0001b7bd) tabs_3_long_passive_pane

0xce8f,	// (0x0001b7ce) tabs_3_long_passive_pane_cp_ParamLimits

0xce8f,	// (0x0001b7ce) tabs_3_long_passive_pane_cp

0xce13,	// (0x0001b752) volume_small_pane_g1

0xce1c,	// (0x0001b75b) volume_small_pane_g2

0xce25,	// (0x0001b764) volume_small_pane_g3

0xce2e,	// (0x0001b76d) volume_small_pane_g4

0xce37,	// (0x0001b776) volume_small_pane_g5

0xce40,	// (0x0001b77f) volume_small_pane_g6

0xce49,	// (0x0001b788) volume_small_pane_g7

0xce52,	// (0x0001b791) volume_small_pane_g8

0xce5b,	// (0x0001b79a) volume_small_pane_g9

0xce64,	// (0x0001b7a3) volume_small_pane_g10

0x0009,

0xf8af,	// (0x0001e1ee) volume_small_pane_g

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp2_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp2

0x22d2,	// (0x00010c11) tabs_3_active_pane_g1

0x22da,	// (0x00010c19) tabs_3_active_pane_t1

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp2_ParamLimits

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp2

0x22d2,	// (0x00010c11) tabs_3_passive_pane_g1

0x22da,	// (0x00010c19) tabs_3_passive_pane_t1

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp3_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp3

0x22ec,	// (0x00010c2b) tabs_4_active_pane_g1

0x22f4,	// (0x00010c33) tabs_4_active_pane_t1

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp3_ParamLimits

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp3

0x22ec,	// (0x00010c2b) tabs_4_1_passive_pane_g1

0x22f4,	// (0x00010c33) tabs_4_1_passive_pane_t1

0x4107,	// (0x00012a46) list_highlight_pane_cp2

0x5a37,	// (0x00014376) list_set_pane_ParamLimits

0x5a37,	// (0x00014376) list_set_pane

0x5ac5,	// (0x00014404) main_pane_set_t1_ParamLimits

0x5ac5,	// (0x00014404) main_pane_set_t1

0x5ae5,	// (0x00014424) main_pane_set_t2_ParamLimits

0x5ae5,	// (0x00014424) main_pane_set_t2

0x5af7,	// (0x00014436) main_pane_set_t3_ParamLimits

0x5af7,	// (0x00014436) main_pane_set_t3

0x5b09,	// (0x00014448) main_pane_set_t4_ParamLimits

0x5b09,	// (0x00014448) main_pane_set_t4

0x0003,

0xf97f,	// (0x0001e2be) main_pane_set_t_ParamLimits

0xf97f,	// (0x0001e2be) main_pane_set_t

0x5b1b,	// (0x0001445a) setting_code_pane

0x5b23,	// (0x00014462) setting_slider_graphic_pane

0x5b23,	// (0x00014462) setting_slider_pane

0x5b23,	// (0x00014462) setting_text_pane

0x5b23,	// (0x00014462) setting_volume_pane

0xc1d6,	// (0x0001ab15) volume_set_pane

0x22c4,	// (0x00010c03) bg_set_opt_pane_cp

0xc1de,	// (0x0001ab1d) setting_slider_pane_t1

0xc1f7,	// (0x0001ab36) setting_slider_pane_t2

0xc210,	// (0x0001ab4f) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001de9d) setting_slider_pane_t

0xc227,	// (0x0001ab66) slider_set_pane

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp2

0x2306,	// (0x00010c45) setting_slider_graphic_pane_g1

0xc23d,	// (0x0001ab7c) setting_slider_graphic_pane_t1

0xc24c,	// (0x0001ab8b) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001dea4) setting_slider_graphic_pane_t

0xc25b,	// (0x0001ab9a) slider_set_pane_cp

0x21e4,	// (0x00010b23) input_focus_pane_cp1

0x59f8,	// (0x00014337) list_set_text_pane

0x21da,	// (0x00010b19) setting_text_pane_g1

0x21e4,	// (0x00010b23) input_focus_pane_cp2

0x21da,	// (0x00010b19) setting_code_pane_g1

0x230f,	// (0x00010c4e) setting_code_pane_t1

0xae76,	// (0x000197b5) set_text_pane_t1_ParamLimits

0xae76,	// (0x000197b5) set_text_pane_t1

0x30f6,	// (0x00011a35) set_opt_bg_pane_g1

0x30fe,	// (0x00011a3d) set_opt_bg_pane_g2

0x59d8,	// (0x00014317) set_opt_bg_pane_g3

0x310e,	// (0x00011a4d) set_opt_bg_pane_g4

0x3116,	// (0x00011a55) set_opt_bg_pane_g5

0x311e,	// (0x00011a5d) set_opt_bg_pane_g6

0x59e0,	// (0x0001431f) set_opt_bg_pane_g7

0x59e8,	// (0x00014327) set_opt_bg_pane_g8

0x59f0,	// (0x0001432f) set_opt_bg_pane_g9

0x0008,

0xf96c,	// (0x0001e2ab) set_opt_bg_pane_g

0x59cb,	// (0x0001430a) slider_set_pane_g1

0xcfcb,	// (0x0001b90a) slider_set_pane_g2

0x0006,

0xf95d,	// (0x0001e29c) slider_set_pane_g

0xcf67,	// (0x0001b8a6) volume_set_pane_g1

0xcf6f,	// (0x0001b8ae) volume_set_pane_g2

0xcf77,	// (0x0001b8b6) volume_set_pane_g3

0xcf7f,	// (0x0001b8be) volume_set_pane_g4

0xcf87,	// (0x0001b8c6) volume_set_pane_g5

0xcf8f,	// (0x0001b8ce) volume_set_pane_g6

0xcf97,	// (0x0001b8d6) volume_set_pane_g7

0xcf9f,	// (0x0001b8de) volume_set_pane_g8

0xcfa7,	// (0x0001b8e6) volume_set_pane_g9

0xcfaf,	// (0x0001b8ee) volume_set_pane_g10

0x0009,

0xf935,	// (0x0001e274) volume_set_pane_g

0x2337,	// (0x00010c76) indicator_pane_ParamLimits

0x2337,	// (0x00010c76) indicator_pane

0x2343,	// (0x00010c82) main_idle_pane_g2_ParamLimits

0x2343,	// (0x00010c82) main_idle_pane_g2

0x2365,	// (0x00010ca4) main_pane_idle_g1_ParamLimits

0x2365,	// (0x00010ca4) main_pane_idle_g1

0x2372,	// (0x00010cb1) popup_clock_digital_analogue_window_ParamLimits

0x2372,	// (0x00010cb1) popup_clock_digital_analogue_window

0x2389,	// (0x00010cc8) soft_indicator_pane_ParamLimits

0x2389,	// (0x00010cc8) soft_indicator_pane

0x2395,	// (0x00010cd4) wallpaper_pane_ParamLimits

0x2395,	// (0x00010cd4) wallpaper_pane

0x21da,	// (0x00010b19) wallpaper_pane_g1

0x23a9,	// (0x00010ce8) indicator_pane_g1_ParamLimits

0x23a9,	// (0x00010ce8) indicator_pane_g1

0x5e27,	// (0x00014766) navi_navi_icon_text_pane_srt_g1

0x23c4,	// (0x00010d03) soft_indicator_pane_t1

0x23de,	// (0x00010d1d) aid_ps_area_pane

0x23ef,	// (0x00010d2e) aid_ps_clock_pane

0x23fb,	// (0x00010d3a) aid_ps_indicator_pane

0x2407,	// (0x00010d46) indicator_ps_pane_ParamLimits

0x2407,	// (0x00010d46) indicator_ps_pane

0x2416,	// (0x00010d55) power_save_pane_g1_ParamLimits

0x2416,	// (0x00010d55) power_save_pane_g1

0x2422,	// (0x00010d61) power_save_pane_g2_ParamLimits

0x2422,	// (0x00010d61) power_save_pane_g2

0xbe47,	// (0x0001a786) aid_navinavi_width_pane

0x23de,	// (0x00010d1d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x0001dea9) power_save_pane_g_ParamLimits

0xf56a,	// (0x0001dea9) power_save_pane_g

0x2430,	// (0x00010d6f) power_save_pane_t1_ParamLimits

0x2430,	// (0x00010d6f) power_save_pane_t1

0x23ef,	// (0x00010d2e) aid_ps_clock_pane_ParamLimits

0x23fb,	// (0x00010d3a) aid_ps_indicator_pane_ParamLimits

0x2442,	// (0x00010d81) power_save_pane_t4_ParamLimits

0x2442,	// (0x00010d81) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001deae) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001deae) power_save_pane_t

0x246c,	// (0x00010dab) power_save_t3_ParamLimits

0x246c,	// (0x00010dab) power_save_t3

0x2457,	// (0x00010d96) power_save_t2_ParamLimits

0x2457,	// (0x00010d96) power_save_t2

0x2481,	// (0x00010dc0) indicator_ps_pane_g1

0x248a,	// (0x00010dc9) ai_gene_pane_ParamLimits

0x248a,	// (0x00010dc9) ai_gene_pane

0x2496,	// (0x00010dd5) ai_links_pane_ParamLimits

0x2496,	// (0x00010dd5) ai_links_pane

0x24a2,	// (0x00010de1) indicator_pane_cp1_ParamLimits

0x24a2,	// (0x00010de1) indicator_pane_cp1

0x24ae,	// (0x00010ded) main_pane_idle_g1_cp_ParamLimits

0x24ae,	// (0x00010ded) main_pane_idle_g1_cp

0x24ba,	// (0x00010df9) popup_ai_links_title_window

0x24c3,	// (0x00010e02) soft_indicator_pane_cp1_ParamLimits

0x24c3,	// (0x00010e02) soft_indicator_pane_cp1

0x57b6,	// (0x000140f5) ai_links_pane_g1

0x57bf,	// (0x000140fe) grid_ai_links_pane

0x579b,	// (0x000140da) ai_gene_pane_1

0x57a4,	// (0x000140e3) ai_gene_pane_2

0x57ad,	// (0x000140ec) list_highlight_pane_cp4

0x5783,	// (0x000140c2) cell_ai_link_pane_ParamLimits

0x5783,	// (0x000140c2) cell_ai_link_pane

0x577b,	// (0x000140ba) cell_ai_link_pane_g1

0x26f1,	// (0x00011030) cell_ai_link_pane_g2

0x0001,

0xf910,	// (0x0001e24f) cell_ai_link_pane_g

0x21e4,	// (0x00010b23) grid_highlight_cp2

0x21e4,	// (0x00010b23) bg_popup_sub_pane_cp1

0x24dd,	// (0x00010e1c) popup_ai_links_title_window_t1

0x56cd,	// (0x0001400c) ai_gene_pane_1_g1_ParamLimits

0x56cd,	// (0x0001400c) ai_gene_pane_1_g1

0x56d9,	// (0x00014018) ai_gene_pane_1_g2_ParamLimits

0x56d9,	// (0x00014018) ai_gene_pane_1_g2

0x0001,

0xf906,	// (0x0001e245) ai_gene_pane_1_g_ParamLimits

0xf906,	// (0x0001e245) ai_gene_pane_1_g

0x56e6,	// (0x00014025) ai_gene_pane_1_t1_ParamLimits

0x56e6,	// (0x00014025) ai_gene_pane_1_t1

0x571a,	// (0x00014059) grid_ai_soft_ind_pane

0x56b8,	// (0x00013ff7) ai_gene_pane_2_t1_ParamLimits

0x56b8,	// (0x00013ff7) ai_gene_pane_2_t1

0x24ec,	// (0x00010e2b) main_pane_empty_t1_ParamLimits

0x24ec,	// (0x00010e2b) main_pane_empty_t1

0x2504,	// (0x00010e43) main_pane_empty_t2_ParamLimits

0x2504,	// (0x00010e43) main_pane_empty_t2

0x2519,	// (0x00010e58) main_pane_empty_t3_ParamLimits

0x2519,	// (0x00010e58) main_pane_empty_t3

0x252b,	// (0x00010e6a) main_pane_empty_t4_ParamLimits

0x252b,	// (0x00010e6a) main_pane_empty_t4

0x253d,	// (0x00010e7c) main_pane_empty_t5_ParamLimits

0x253d,	// (0x00010e7c) main_pane_empty_t5

0x0004,

0xf574,	// (0x0001deb3) main_pane_empty_t_ParamLimits

0xf574,	// (0x0001deb3) main_pane_empty_t

0x31ce,	// (0x00011b0d) bg_popup_window_pane_ParamLimits

0x31ce,	// (0x00011b0d) bg_popup_window_pane

0x542a,	// (0x00013d69) find_popup_pane_cp2_ParamLimits

0x542a,	// (0x00013d69) find_popup_pane_cp2

0x5436,	// (0x00013d75) heading_pane_ParamLimits

0x5436,	// (0x00013d75) heading_pane

0x21e4,	// (0x00010b23) bg_popup_sub_pane

0x53a4,	// (0x00013ce3) bg_popup_window_pane_g1_ParamLimits

0x53a4,	// (0x00013ce3) bg_popup_window_pane_g1

0x53b0,	// (0x00013cef) bg_popup_window_pane_g2_ParamLimits

0x53b0,	// (0x00013cef) bg_popup_window_pane_g2

0x53bc,	// (0x00013cfb) bg_popup_window_pane_g3_ParamLimits

0x53bc,	// (0x00013cfb) bg_popup_window_pane_g3

0x53c8,	// (0x00013d07) bg_popup_window_pane_g4_ParamLimits

0x53c8,	// (0x00013d07) bg_popup_window_pane_g4

0x53d4,	// (0x00013d13) bg_popup_window_pane_g5_ParamLimits

0x53d4,	// (0x00013d13) bg_popup_window_pane_g5

0x53e0,	// (0x00013d1f) bg_popup_window_pane_g6_ParamLimits

0x53e0,	// (0x00013d1f) bg_popup_window_pane_g6

0x53ec,	// (0x00013d2b) bg_popup_window_pane_g7_ParamLimits

0x53ec,	// (0x00013d2b) bg_popup_window_pane_g7

0x53f8,	// (0x00013d37) bg_popup_window_pane_g8_ParamLimits

0x53f8,	// (0x00013d37) bg_popup_window_pane_g8

0x5404,	// (0x00013d43) bg_popup_window_pane_g9_ParamLimits

0x5404,	// (0x00013d43) bg_popup_window_pane_g9

0x5410,	// (0x00013d4f) bg_popup_window_pane_g10_ParamLimits

0x5410,	// (0x00013d4f) bg_popup_window_pane_g10

0x0009,

0xf8ce,	// (0x0001e20d) bg_popup_window_pane_g_ParamLimits

0xf8ce,	// (0x0001e20d) bg_popup_window_pane_g

0x5339,	// (0x00013c78) bg_popup_heading_pane_ParamLimits

0x5339,	// (0x00013c78) bg_popup_heading_pane

0xd053,	// (0x0001b992) tabs_4_passive_pane_cp_srt_ParamLimits

0xd053,	// (0x0001b992) tabs_4_passive_pane_cp_srt

0xd065,	// (0x0001b9a4) tabs_4_passive_pane_srt_ParamLimits

0x534d,	// (0x00013c8c) heading_pane_g2

0xd065,	// (0x0001b9a4) tabs_4_passive_pane_srt

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp3_srt

0x5355,	// (0x00013c94) heading_pane_t1_ParamLimits

0x5355,	// (0x00013c94) heading_pane_t1

0x536c,	// (0x00013cab) heading_pane_t2_ParamLimits

0x536c,	// (0x00013cab) heading_pane_t2

0x0001,

0xf8c9,	// (0x0001e208) heading_pane_t_ParamLimits

0xf8c9,	// (0x0001e208) heading_pane_t

0x4e8e,	// (0x000137cd) bg_popup_heading_pane_g1

0x4f37,	// (0x00013876) bg_popup_heading_pane_g2

0x4f3f,	// (0x0001387e) bg_popup_heading_pane_g3

0x4f47,	// (0x00013886) bg_popup_heading_pane_g4

0x4f4f,	// (0x0001388e) bg_popup_heading_pane_g5

0x4f57,	// (0x00013896) bg_popup_heading_pane_g6

0x4f5f,	// (0x0001389e) bg_popup_heading_pane_g7

0x4f67,	// (0x000138a6) bg_popup_heading_pane_g8

0x4f6f,	// (0x000138ae) bg_popup_heading_pane_g9

0x0008,

0xf885,	// (0x0001e1c4) bg_popup_heading_pane_g

0x4623,	// (0x00012f62) bg_popup_sub_pane_g1

0x4633,	// (0x00012f72) bg_popup_sub_pane_g2

0x462b,	// (0x00012f6a) bg_popup_sub_pane_g3

0x4643,	// (0x00012f82) bg_popup_sub_pane_g4

0x463b,	// (0x00012f7a) bg_popup_sub_pane_g5

0x464b,	// (0x00012f8a) bg_popup_sub_pane_g6

0x4653,	// (0x00012f92) bg_popup_sub_pane_g7

0x4663,	// (0x00012fa2) bg_popup_sub_pane_g8

0x465b,	// (0x00012f9a) bg_popup_sub_pane_g9

0x0008,

0xf85f,	// (0x0001e19e) bg_popup_sub_pane_g

0x254f,	// (0x00010e8e) bg_popup_window_pane_cp5_ParamLimits

0x254f,	// (0x00010e8e) bg_popup_window_pane_cp5

0x256b,	// (0x00010eaa) popup_note_window_g1_ParamLimits

0x256b,	// (0x00010eaa) popup_note_window_g1

0x2577,	// (0x00010eb6) popup_note_window_t1_ParamLimits

0x2577,	// (0x00010eb6) popup_note_window_t1

0x258d,	// (0x00010ecc) popup_note_window_t2_ParamLimits

0x258d,	// (0x00010ecc) popup_note_window_t2

0x25a3,	// (0x00010ee2) popup_note_window_t3_ParamLimits

0x25a3,	// (0x00010ee2) popup_note_window_t3

0x25b9,	// (0x00010ef8) popup_note_window_t4_ParamLimits

0x25b9,	// (0x00010ef8) popup_note_window_t4

0x25e1,	// (0x00010f20) popup_note_window_t5_ParamLimits

0x25e1,	// (0x00010f20) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001debe) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001debe) popup_note_window_t

0x2605,	// (0x00010f44) bg_popup_window_pane_cp6_ParamLimits

0x2605,	// (0x00010f44) bg_popup_window_pane_cp6

0x4e0a,	// (0x00013749) popup_note_image_window_g1_ParamLimits

0x4e0a,	// (0x00013749) popup_note_image_window_g1

0x4e16,	// (0x00013755) popup_note_image_window_g2_ParamLimits

0x4e16,	// (0x00013755) popup_note_image_window_g2

0x0001,

0xf853,	// (0x0001e192) popup_note_image_window_g_ParamLimits

0xf853,	// (0x0001e192) popup_note_image_window_g

0x4e2f,	// (0x0001376e) popup_note_image_window_t1_ParamLimits

0x4e2f,	// (0x0001376e) popup_note_image_window_t1

0x4e48,	// (0x00013787) popup_note_image_window_t2_ParamLimits

0x4e48,	// (0x00013787) popup_note_image_window_t2

0x4e61,	// (0x000137a0) popup_note_image_window_t3_ParamLimits

0x4e61,	// (0x000137a0) popup_note_image_window_t3

0x0002,

0xf858,	// (0x0001e197) popup_note_image_window_t_ParamLimits

0xf858,	// (0x0001e197) popup_note_image_window_t

0x4cd3,	// (0x00013612) bg_popup_window_pane_cp7_ParamLimits

0x4cd3,	// (0x00013612) bg_popup_window_pane_cp7

0x4d03,	// (0x00013642) popup_note_wait_window_g1_ParamLimits

0x4d03,	// (0x00013642) popup_note_wait_window_g1

0x4d0f,	// (0x0001364e) popup_note_wait_window_g2_ParamLimits

0x4d0f,	// (0x0001364e) popup_note_wait_window_g2

0x0002,

0xf841,	// (0x0001e180) popup_note_wait_window_g_ParamLimits

0xf841,	// (0x0001e180) popup_note_wait_window_g

0x4d27,	// (0x00013666) popup_note_wait_window_t1_ParamLimits

0x4d27,	// (0x00013666) popup_note_wait_window_t1

0x4d4e,	// (0x0001368d) popup_note_wait_window_t2_ParamLimits

0x4d4e,	// (0x0001368d) popup_note_wait_window_t2

0x4d6b,	// (0x000136aa) popup_note_wait_window_t3_ParamLimits

0x4d6b,	// (0x000136aa) popup_note_wait_window_t3

0x4d7e,	// (0x000136bd) popup_note_wait_window_t4_ParamLimits

0x4d7e,	// (0x000136bd) popup_note_wait_window_t4

0x0004,

0xf848,	// (0x0001e187) popup_note_wait_window_t_ParamLimits

0xf848,	// (0x0001e187) popup_note_wait_window_t

0x4da3,	// (0x000136e2) wait_bar_pane_ParamLimits

0x4da3,	// (0x000136e2) wait_bar_pane

0x21e4,	// (0x00010b23) wait_anim_pane

0x21e4,	// (0x00010b23) wait_border_pane

0x21da,	// (0x00010b19) wait_anim_pane_g1

0x21da,	// (0x00010b19) wait_anim_pane_g2

0x0001,

0xf703,	// (0x0001e042) wait_anim_pane_g

0x4c83,	// (0x000135c2) wait_border_pane_g1

0x4c8c,	// (0x000135cb) wait_border_pane_g2

0x4c95,	// (0x000135d4) wait_border_pane_g3

0x0002,

0xf83a,	// (0x0001e179) wait_border_pane_g

0x4af3,	// (0x00013432) bg_popup_window_pane_cp16_ParamLimits

0x4af3,	// (0x00013432) bg_popup_window_pane_cp16

0x4bf3,	// (0x00013532) indicator_popup_pane_cp4_ParamLimits

0x4bf3,	// (0x00013532) indicator_popup_pane_cp4

0x4c07,	// (0x00013546) popup_query_data_window_t1_ParamLimits

0x4c07,	// (0x00013546) popup_query_data_window_t1

0x4c19,	// (0x00013558) popup_query_data_window_t2_ParamLimits

0x4c19,	// (0x00013558) popup_query_data_window_t2

0x4c32,	// (0x00013571) popup_query_data_window_t3_ParamLimits

0x4c32,	// (0x00013571) popup_query_data_window_t3

0x0002,

0xf833,	// (0x0001e172) popup_query_data_window_t_ParamLimits

0xf833,	// (0x0001e172) popup_query_data_window_t

0x4c4c,	// (0x0001358b) query_popup_data_pane_ParamLimits

0x4c4c,	// (0x0001358b) query_popup_data_pane

0x4c60,	// (0x0001359f) query_popup_data_pane_cp1_ParamLimits

0x4c60,	// (0x0001359f) query_popup_data_pane_cp1

0x4af3,	// (0x00013432) bg_popup_window_pane_cp10_ParamLimits

0x4af3,	// (0x00013432) bg_popup_window_pane_cp10

0x4b25,	// (0x00013464) indicator_popup_pane_ParamLimits

0x4b25,	// (0x00013464) indicator_popup_pane

0x4b47,	// (0x00013486) popup_query_code_window_t1_ParamLimits

0x4b47,	// (0x00013486) popup_query_code_window_t1

0x4b61,	// (0x000134a0) popup_query_code_window_t2_ParamLimits

0x4b61,	// (0x000134a0) popup_query_code_window_t2

0x4baa,	// (0x000134e9) popup_query_code_window_t3_ParamLimits

0x4baa,	// (0x000134e9) popup_query_code_window_t3

0x0002,

0xf82c,	// (0x0001e16b) popup_query_code_window_t_ParamLimits

0xf82c,	// (0x0001e16b) popup_query_code_window_t

0x4bd9,	// (0x00013518) query_popup_pane_ParamLimits

0x4bd9,	// (0x00013518) query_popup_pane

0x2605,	// (0x00010f44) bg_popup_window_pane_cp15_ParamLimits

0x2605,	// (0x00010f44) bg_popup_window_pane_cp15

0x2623,	// (0x00010f62) indicator_popup_pane_cp1_ParamLimits

0x2623,	// (0x00010f62) indicator_popup_pane_cp1

0x2636,	// (0x00010f75) indicator_popup_pane_cp2_ParamLimits

0x2636,	// (0x00010f75) indicator_popup_pane_cp2

0x2649,	// (0x00010f88) popup_query_data_code_window_g1_ParamLimits

0x2649,	// (0x00010f88) popup_query_data_code_window_g1

0x265c,	// (0x00010f9b) popup_query_data_code_window_t1_ParamLimits

0x265c,	// (0x00010f9b) popup_query_data_code_window_t1

0x266e,	// (0x00010fad) popup_query_data_code_window_t2_ParamLimits

0x266e,	// (0x00010fad) popup_query_data_code_window_t2

0x2680,	// (0x00010fbf) popup_query_data_code_window_t3_ParamLimits

0x2680,	// (0x00010fbf) popup_query_data_code_window_t3

0x2696,	// (0x00010fd5) popup_query_data_code_window_t4_ParamLimits

0x2696,	// (0x00010fd5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x0001dec9) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x0001dec9) popup_query_data_code_window_t

0x3c03,	// (0x00012542) list_single_midp_graphic_pane_g3

0x26ae,	// (0x00010fed) query_popup_data_pane_cp2_ParamLimits

0x26c1,	// (0x00011000) query_popup_pane_cp2_ParamLimits

0x26c1,	// (0x00011000) query_popup_pane_cp2

0x21e4,	// (0x00010b23) bg_popup_window_pane_cp11

0x4aeb,	// (0x0001342a) heading_pane_cp5

0x27a8,	// (0x000110e7) listscroll_popup_info_pane

0x21e4,	// (0x00010b23) input_focus_pane_cp3

0x26d4,	// (0x00011013) query_popup_pane_t1

0x26e2,	// (0x00011021) list_popup_info_pane_ParamLimits

0x26e2,	// (0x00011021) list_popup_info_pane

0x26f1,	// (0x00011030) listscroll_popup_info_pane_g1

0x26f9,	// (0x00011038) scroll_pane_cp7

0x2701,	// (0x00011040) popup_info_list_pane_t1_ParamLimits

0x2701,	// (0x00011040) popup_info_list_pane_t1

0x271b,	// (0x0001105a) popup_info_list_pane_t2_ParamLimits

0x271b,	// (0x0001105a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x0001ded2) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x0001ded2) popup_info_list_pane_t

0x21e4,	// (0x00010b23) bg_popup_window_pane_cp12

0x5e41,	// (0x00014780) find_popup_pane

0x22c4,	// (0x00010c03) bg_popup_window_pane_cp3

0x2735,	// (0x00011074) heading_pane_cp3

0x2741,	// (0x00011080) listscroll_popup_graphic_pane

0x21e4,	// (0x00010b23) bg_popup_window_pane_cp4

0x27a0,	// (0x000110df) heading_pane_cp4

0x27a8,	// (0x000110e7) listscroll_popup_colour_pane

0x27b0,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x27b0,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane

0x27c0,	// (0x000110ff) grid_large_graphic_colour_popup_pane_ParamLimits

0x27c0,	// (0x000110ff) grid_large_graphic_colour_popup_pane

0x27dc,	// (0x0001111b) listscroll_popup_colour_pane_g1_ParamLimits

0x27dc,	// (0x0001111b) listscroll_popup_colour_pane_g1

0x27f3,	// (0x00011132) listscroll_popup_colour_pane_g2_ParamLimits

0x27f3,	// (0x00011132) listscroll_popup_colour_pane_g2

0x280a,	// (0x00011149) listscroll_popup_colour_pane_g3_ParamLimits

0x280a,	// (0x00011149) listscroll_popup_colour_pane_g3

0x281a,	// (0x00011159) listscroll_popup_colour_pane_g4_ParamLimits

0x281a,	// (0x00011159) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x0001ded7) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x0001ded7) listscroll_popup_colour_pane_g

0x2829,	// (0x00011168) scroll_pane_cp6_ParamLimits

0x2829,	// (0x00011168) scroll_pane_cp6

0x283b,	// (0x0001117a) cell_large_graphic_colour_popup_pane_ParamLimits

0x283b,	// (0x0001117a) cell_large_graphic_colour_popup_pane

0x285a,	// (0x00011199) cell_large_graphic_colour_none_popup_pane_t1

0x21e4,	// (0x00010b23) grid_highlight_pane_cp5

0x2869,	// (0x000111a8) cell_large_graphic_colour_popup_pane_g1

0x2871,	// (0x000111b0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001dee0) cell_large_graphic_colour_popup_pane_g

0x2879,	// (0x000111b8) cell_large_graphic_colour_popup_pane_g2_copy1

0x2882,	// (0x000111c1) grid_highlight_pane_cp4

0x288a,	// (0x000111c9) bg_popup_window_pane_cp8_ParamLimits

0x288a,	// (0x000111c9) bg_popup_window_pane_cp8

0x28a5,	// (0x000111e4) popup_snote_single_text_window_g1_ParamLimits

0x28a5,	// (0x000111e4) popup_snote_single_text_window_g1

0x28b7,	// (0x000111f6) popup_snote_single_text_window_t1_ParamLimits

0x28b7,	// (0x000111f6) popup_snote_single_text_window_t1

0x28ca,	// (0x00011209) popup_snote_single_text_window_t2_ParamLimits

0x28ca,	// (0x00011209) popup_snote_single_text_window_t2

0x28dd,	// (0x0001121c) popup_snote_single_text_window_t3_ParamLimits

0x28dd,	// (0x0001121c) popup_snote_single_text_window_t3

0x2916,	// (0x00011255) popup_snote_single_text_window_t4_ParamLimits

0x2916,	// (0x00011255) popup_snote_single_text_window_t4

0x294a,	// (0x00011289) popup_snote_single_text_window_t5_ParamLimits

0x294a,	// (0x00011289) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x0001dee5) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x0001dee5) popup_snote_single_text_window_t

0x2979,	// (0x000112b8) bg_popup_window_pane_cp9_ParamLimits

0x2979,	// (0x000112b8) bg_popup_window_pane_cp9

0x28a5,	// (0x000111e4) popup_snote_single_graphic_window_g1_ParamLimits

0x28a5,	// (0x000111e4) popup_snote_single_graphic_window_g1

0x2987,	// (0x000112c6) popup_snote_single_graphic_window_g2_ParamLimits

0x2987,	// (0x000112c6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x0001def0) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x0001def0) popup_snote_single_graphic_window_g

0x2993,	// (0x000112d2) popup_snote_single_graphic_window_t1_ParamLimits

0x2993,	// (0x000112d2) popup_snote_single_graphic_window_t1

0x29a6,	// (0x000112e5) popup_snote_single_graphic_window_t2_ParamLimits

0x29a6,	// (0x000112e5) popup_snote_single_graphic_window_t2

0x28dd,	// (0x0001121c) popup_snote_single_graphic_window_t3_ParamLimits

0x28dd,	// (0x0001121c) popup_snote_single_graphic_window_t3

0x2916,	// (0x00011255) popup_snote_single_graphic_window_t4_ParamLimits

0x2916,	// (0x00011255) popup_snote_single_graphic_window_t4

0x294a,	// (0x00011289) popup_snote_single_graphic_window_t5_ParamLimits

0x294a,	// (0x00011289) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x0001def5) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x0001def5) popup_snote_single_graphic_window_t

0x5d89,	// (0x000146c8) grid_graphic_popup_pane_ParamLimits

0x5d89,	// (0x000146c8) grid_graphic_popup_pane

0x5dad,	// (0x000146ec) listscroll_popup_graphic_pane_g1_ParamLimits

0x5dad,	// (0x000146ec) listscroll_popup_graphic_pane_g1

0x5dc1,	// (0x00014700) listscroll_popup_graphic_pane_g2_ParamLimits

0x5dc1,	// (0x00014700) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a9,	// (0x0001e2e8) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a9,	// (0x0001e2e8) listscroll_popup_graphic_pane_g

0x5dd5,	// (0x00014714) scroll_pane_cp5

0x5d32,	// (0x00014671) cell_graphic_popup_pane_ParamLimits

0x5d32,	// (0x00014671) cell_graphic_popup_pane

0x5d13,	// (0x00014652) cell_graphic_popup_pane_g1

0x5d1b,	// (0x0001465a) cell_graphic_popup_pane_g2

0x2879,	// (0x000111b8) cell_graphic_popup_pane_g3

0x0002,

0xf9a2,	// (0x0001e2e1) cell_graphic_popup_pane_g

0x5d24,	// (0x00014663) cell_graphic_popup_pane_t2

0x2882,	// (0x000111c1) grid_highlight_pane_cp3

0x29cb,	// (0x0001130a) list_gen_pane_ParamLimits

0x29cb,	// (0x0001130a) list_gen_pane

0x29fd,	// (0x0001133c) scroll_pane

0x5c83,	// (0x000145c2) bg_list_pane_g1_ParamLimits

0x5c83,	// (0x000145c2) bg_list_pane_g1

0x5c9a,	// (0x000145d9) bg_list_pane_g2_ParamLimits

0x5c9a,	// (0x000145d9) bg_list_pane_g2

0x5cad,	// (0x000145ec) bg_list_pane_g3_ParamLimits

0x5cad,	// (0x000145ec) bg_list_pane_g3

0x5cbf,	// (0x000145fe) bg_list_pane_g4_ParamLimits

0x5cbf,	// (0x000145fe) bg_list_pane_g4

0x5cd1,	// (0x00014610) bg_list_pane_g5_ParamLimits

0x5cd1,	// (0x00014610) bg_list_pane_g5

0x0004,

0xf997,	// (0x0001e2d6) bg_list_pane_g_ParamLimits

0xf997,	// (0x0001e2d6) bg_list_pane_g

0x5bd5,	// (0x00014514) list_double2_graphic_large_graphic_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double2_graphic_large_graphic_pane

0x5bd5,	// (0x00014514) list_double2_graphic_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double2_graphic_pane

0x5bd5,	// (0x00014514) list_double2_large_graphic_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double2_large_graphic_pane

0x5bd5,	// (0x00014514) list_double2_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double2_pane

0x5bd5,	// (0x00014514) list_double_graphic_heading_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_graphic_heading_pane

0x5bd5,	// (0x00014514) list_double_graphic_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_graphic_pane

0x5bd5,	// (0x00014514) list_double_heading_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_heading_pane

0x5bd5,	// (0x00014514) list_double_large_graphic_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_large_graphic_pane

0x5bd5,	// (0x00014514) list_double_number_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_number_pane

0x5bd5,	// (0x00014514) list_double_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_pane

0x5bd5,	// (0x00014514) list_double_time_pane_ParamLimits

0x5bd5,	// (0x00014514) list_double_time_pane

0x5bd5,	// (0x00014514) list_setting_number_pane_ParamLimits

0x5bd5,	// (0x00014514) list_setting_number_pane

0x5bd5,	// (0x00014514) list_setting_pane_ParamLimits

0x5bd5,	// (0x00014514) list_setting_pane

0x5c26,	// (0x00014565) list_single_2graphic_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_2graphic_pane

0x5c26,	// (0x00014565) list_single_graphic_heading_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_graphic_heading_pane

0x5c26,	// (0x00014565) list_single_graphic_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_graphic_pane

0x5c26,	// (0x00014565) list_single_heading_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_heading_pane

0x5c6e,	// (0x000145ad) list_single_large_graphic_pane_ParamLimits

0x5c6e,	// (0x000145ad) list_single_large_graphic_pane

0x5c26,	// (0x00014565) list_single_number_heading_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_number_heading_pane

0x5c26,	// (0x00014565) list_single_number_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_number_pane

0x5c26,	// (0x00014565) list_single_pane_ParamLimits

0x5c26,	// (0x00014565) list_single_pane

0x21e4,	// (0x00010b23) list_highlight_pane_cp1

0xae9c,	// (0x000197db) list_single_pane_g1_ParamLimits

0xae9c,	// (0x000197db) list_single_pane_g1

0xaea8,	// (0x000197e7) list_single_pane_g2_ParamLimits

0xaea8,	// (0x000197e7) list_single_pane_g2

0x0001,

0xf5c8,	// (0x0001df07) list_single_pane_g_ParamLimits

0xf5c8,	// (0x0001df07) list_single_pane_g

0xb757,	// (0x0001a096) list_single_pane_t1_ParamLimits

0xb757,	// (0x0001a096) list_single_pane_t1

0xae9c,	// (0x000197db) list_single_number_pane_g1_ParamLimits

0xae9c,	// (0x000197db) list_single_number_pane_g1

0xaea8,	// (0x000197e7) list_single_number_pane_g2_ParamLimits

0xaea8,	// (0x000197e7) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x0001df07) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x0001df07) list_single_number_pane_g

0xb703,	// (0x0001a042) list_single_number_pane_t1_ParamLimits

0xb703,	// (0x0001a042) list_single_number_pane_t1

0xb719,	// (0x0001a058) list_single_number_pane_t2_ParamLimits

0xb719,	// (0x0001a058) list_single_number_pane_t2

0x0001,

0xf958,	// (0x0001e297) list_single_number_pane_t_ParamLimits

0xf958,	// (0x0001e297) list_single_number_pane_t

0xae90,	// (0x000197cf) list_single_graphic_pane_g1_ParamLimits

0xae90,	// (0x000197cf) list_single_graphic_pane_g1

0xae9c,	// (0x000197db) list_single_graphic_pane_g2_ParamLimits

0xae9c,	// (0x000197db) list_single_graphic_pane_g2

0xaea8,	// (0x000197e7) list_single_graphic_pane_g3_ParamLimits

0xaea8,	// (0x000197e7) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x0001df00) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x0001df00) list_single_graphic_pane_g

0xaeb4,	// (0x000197f3) list_single_graphic_pane_t1_ParamLimits

0xaeb4,	// (0x000197f3) list_single_graphic_pane_t1

0xae9c,	// (0x000197db) list_single_heading_pane_g1_ParamLimits

0xae9c,	// (0x000197db) list_single_heading_pane_g1

0xaea8,	// (0x000197e7) list_single_heading_pane_g2_ParamLimits

0xaea8,	// (0x000197e7) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001df07) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001df07) list_single_heading_pane_g

0xaeca,	// (0x00019809) list_single_heading_pane_t1_ParamLimits

0xaeca,	// (0x00019809) list_single_heading_pane_t1

0xaee0,	// (0x0001981f) list_single_heading_pane_t2_ParamLimits

0xaee0,	// (0x0001981f) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x0001df0c) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x0001df0c) list_single_heading_pane_t

0xae9c,	// (0x000197db) list_single_number_heading_pane_g1_ParamLimits

0xae9c,	// (0x000197db) list_single_number_heading_pane_g1

0xaea8,	// (0x000197e7) list_single_number_heading_pane_g2_ParamLimits

0xaea8,	// (0x000197e7) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x0001df07) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x0001df07) list_single_number_heading_pane_g

0xaeca,	// (0x00019809) list_single_number_heading_pane_t1_ParamLimits

0xaeca,	// (0x00019809) list_single_number_heading_pane_t1

0xaef2,	// (0x00019831) list_single_number_heading_pane_t2_ParamLimits

0xaef2,	// (0x00019831) list_single_number_heading_pane_t2

0xaf04,	// (0x00019843) list_single_number_heading_pane_t3_ParamLimits

0xaf04,	// (0x00019843) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x0001df11) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x0001df11) list_single_number_heading_pane_t

0xaf16,	// (0x00019855) list_single_graphic_heading_pane_g1_ParamLimits

0xaf16,	// (0x00019855) list_single_graphic_heading_pane_g1

0xaf22,	// (0x00019861) list_single_graphic_heading_pane_g4_ParamLimits

0xaf22,	// (0x00019861) list_single_graphic_heading_pane_g4

0xaea8,	// (0x000197e7) list_single_graphic_heading_pane_g5_ParamLimits

0xaea8,	// (0x000197e7) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001df18) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001df18) list_single_graphic_heading_pane_g

0xaeca,	// (0x00019809) list_single_graphic_heading_pane_t1_ParamLimits

0xaeca,	// (0x00019809) list_single_graphic_heading_pane_t1

0xaf31,	// (0x00019870) list_single_graphic_heading_pane_t2_ParamLimits

0xaf31,	// (0x00019870) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x0001df1f) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x0001df1f) list_single_graphic_heading_pane_t

0xaf43,	// (0x00019882) list_single_large_graphic_pane_g1_ParamLimits

0xaf43,	// (0x00019882) list_single_large_graphic_pane_g1

0xaf4f,	// (0x0001988e) list_single_large_graphic_pane_g2_ParamLimits

0xaf4f,	// (0x0001988e) list_single_large_graphic_pane_g2

0xaf5b,	// (0x0001989a) list_single_large_graphic_pane_g3_ParamLimits

0xaf5b,	// (0x0001989a) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001df24) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001df24) list_single_large_graphic_pane_g

0x4c8c,	// (0x000135cb) wait_border_pane_g2_copy1

0xaf67,	// (0x000198a6) list_single_large_graphic_pane_g4_cp2

0xaf6f,	// (0x000198ae) list_single_large_graphic_pane_t1_ParamLimits

0xaf6f,	// (0x000198ae) list_single_large_graphic_pane_t1

0xaf85,	// (0x000198c4) list_double_pane_g1_ParamLimits

0xaf85,	// (0x000198c4) list_double_pane_g1

0xaf91,	// (0x000198d0) list_double_pane_g2_ParamLimits

0xaf91,	// (0x000198d0) list_double_pane_g2

0x0001,

0xf5ec,	// (0x0001df2b) list_double_pane_g_ParamLimits

0xf5ec,	// (0x0001df2b) list_double_pane_g

0xaf9d,	// (0x000198dc) list_double_pane_t1_ParamLimits

0xaf9d,	// (0x000198dc) list_double_pane_t1

0xafb3,	// (0x000198f2) list_double_pane_t2_ParamLimits

0xafb3,	// (0x000198f2) list_double_pane_t2

0x0001,

0xf5f1,	// (0x0001df30) list_double_pane_t_ParamLimits

0xf5f1,	// (0x0001df30) list_double_pane_t

0xafc5,	// (0x00019904) list_double2_pane_g1_ParamLimits

0xafc5,	// (0x00019904) list_double2_pane_g1

0xafd4,	// (0x00019913) list_double2_pane_g2_ParamLimits

0xafd4,	// (0x00019913) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001df35) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001df35) list_double2_pane_g

0xafe0,	// (0x0001991f) list_double2_pane_t1_ParamLimits

0xafe0,	// (0x0001991f) list_double2_pane_t1

0xaff6,	// (0x00019935) list_double2_pane_t2_ParamLimits

0xaff6,	// (0x00019935) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x0001df3a) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x0001df3a) list_double2_pane_t

0xaf85,	// (0x000198c4) list_double_number_pane_g1_ParamLimits

0xaf85,	// (0x000198c4) list_double_number_pane_g1

0xaf91,	// (0x000198d0) list_double_number_pane_g2_ParamLimits

0xaf91,	// (0x000198d0) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x0001df2b) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x0001df2b) list_double_number_pane_g

0xb008,	// (0x00019947) list_double_number_pane_t1_ParamLimits

0xb008,	// (0x00019947) list_double_number_pane_t1

0xb01a,	// (0x00019959) list_double_number_pane_t2_ParamLimits

0xb01a,	// (0x00019959) list_double_number_pane_t2

0xb030,	// (0x0001996f) list_double_number_pane_t3_ParamLimits

0xb030,	// (0x0001996f) list_double_number_pane_t3

0x0002,

0xf600,	// (0x0001df3f) list_double_number_pane_t_ParamLimits

0xf600,	// (0x0001df3f) list_double_number_pane_t

0xb042,	// (0x00019981) list_double_graphic_pane_g1_ParamLimits

0xb042,	// (0x00019981) list_double_graphic_pane_g1

0xb04e,	// (0x0001998d) list_double_graphic_pane_g2_ParamLimits

0xb04e,	// (0x0001998d) list_double_graphic_pane_g2

0xb05d,	// (0x0001999c) list_double_graphic_pane_g3_ParamLimits

0xb05d,	// (0x0001999c) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001df46) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001df46) list_double_graphic_pane_g

0xb075,	// (0x000199b4) list_double_graphic_pane_t1_ParamLimits

0xb075,	// (0x000199b4) list_double_graphic_pane_t1

0xb08b,	// (0x000199ca) list_double_graphic_pane_t2_ParamLimits

0xb08b,	// (0x000199ca) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001df4f) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001df4f) list_double_graphic_pane_t

0xb09d,	// (0x000199dc) list_double2_graphic_pane_g1_ParamLimits

0xb09d,	// (0x000199dc) list_double2_graphic_pane_g1

0xaf85,	// (0x000198c4) list_double2_graphic_pane_g2_ParamLimits

0xaf85,	// (0x000198c4) list_double2_graphic_pane_g2

0xaf91,	// (0x000198d0) list_double2_graphic_pane_g3_ParamLimits

0xaf91,	// (0x000198d0) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001df54) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001df54) list_double2_graphic_pane_g

0xb0a9,	// (0x000199e8) list_double2_graphic_pane_t1_ParamLimits

0xb0a9,	// (0x000199e8) list_double2_graphic_pane_t1

0xb0bf,	// (0x000199fe) list_double2_graphic_pane_t2_ParamLimits

0xb0bf,	// (0x000199fe) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001df5b) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001df5b) list_double2_graphic_pane_t

0xb0d1,	// (0x00019a10) list_double_large_graphic_pane_g1_ParamLimits

0xb0d1,	// (0x00019a10) list_double_large_graphic_pane_g1

0xb0f0,	// (0x00019a2f) list_double_large_graphic_pane_g2_ParamLimits

0xb0f0,	// (0x00019a2f) list_double_large_graphic_pane_g2

0xaf91,	// (0x000198d0) list_double_large_graphic_pane_g3_ParamLimits

0xaf91,	// (0x000198d0) list_double_large_graphic_pane_g3

0xb0ff,	// (0x00019a3e) list_double_large_graphic_pane_g4_ParamLimits

0xb0ff,	// (0x00019a3e) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001df60) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001df60) list_double_large_graphic_pane_g

0xb125,	// (0x00019a64) list_double_large_graphic_pane_t1_ParamLimits

0xb125,	// (0x00019a64) list_double_large_graphic_pane_t1

0xb13e,	// (0x00019a7d) list_double_large_graphic_pane_t2_ParamLimits

0xb13e,	// (0x00019a7d) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001df6b) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001df6b) list_double_large_graphic_pane_t

0xb150,	// (0x00019a8f) list_double2_large_graphic_pane_g1_ParamLimits

0xb150,	// (0x00019a8f) list_double2_large_graphic_pane_g1

0xafc5,	// (0x00019904) list_double2_large_graphic_pane_g2_ParamLimits

0xafc5,	// (0x00019904) list_double2_large_graphic_pane_g2

0xafd4,	// (0x00019913) list_double2_large_graphic_pane_g3_ParamLimits

0xafd4,	// (0x00019913) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001df70) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001df70) list_double2_large_graphic_pane_g

0xb15c,	// (0x00019a9b) list_double2_large_graphic_pane_t1_ParamLimits

0xb15c,	// (0x00019a9b) list_double2_large_graphic_pane_t1

0xb172,	// (0x00019ab1) list_double2_large_graphic_pane_t2_ParamLimits

0xb172,	// (0x00019ab1) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001df77) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001df77) list_double2_large_graphic_pane_t

0xb184,	// (0x00019ac3) list_double_heading_pane_g1_ParamLimits

0xb184,	// (0x00019ac3) list_double_heading_pane_g1

0xb193,	// (0x00019ad2) list_double_heading_pane_g2_ParamLimits

0xb193,	// (0x00019ad2) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001df7c) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001df7c) list_double_heading_pane_g

0xb19f,	// (0x00019ade) list_double_heading_pane_t1_ParamLimits

0xb19f,	// (0x00019ade) list_double_heading_pane_t1

0xaff6,	// (0x00019935) list_double_heading_pane_t2_ParamLimits

0xaff6,	// (0x00019935) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x0001df81) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x0001df81) list_double_heading_pane_t

0xb1b5,	// (0x00019af4) list_double_graphic_heading_pane_g1_ParamLimits

0xb1b5,	// (0x00019af4) list_double_graphic_heading_pane_g1

0xb184,	// (0x00019ac3) list_double_graphic_heading_pane_g2_ParamLimits

0xb184,	// (0x00019ac3) list_double_graphic_heading_pane_g2

0xb193,	// (0x00019ad2) list_double_graphic_heading_pane_g3_ParamLimits

0xb193,	// (0x00019ad2) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001df86) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001df86) list_double_graphic_heading_pane_g

0xb1c1,	// (0x00019b00) list_double_graphic_heading_pane_t1_ParamLimits

0xb1c1,	// (0x00019b00) list_double_graphic_heading_pane_t1

0xb0bf,	// (0x000199fe) list_double_graphic_heading_pane_t2_ParamLimits

0xb0bf,	// (0x000199fe) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001df8d) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001df8d) list_double_graphic_heading_pane_t

0xb0f0,	// (0x00019a2f) list_double_time_pane_g1_ParamLimits

0xb0f0,	// (0x00019a2f) list_double_time_pane_g1

0xaf91,	// (0x000198d0) list_double_time_pane_g2_ParamLimits

0xaf91,	// (0x000198d0) list_double_time_pane_g2

0x0001,

0xf653,	// (0x0001df92) list_double_time_pane_g_ParamLimits

0xf653,	// (0x0001df92) list_double_time_pane_g

0xb1d7,	// (0x00019b16) list_double_time_pane_t1_ParamLimits

0xb1d7,	// (0x00019b16) list_double_time_pane_t1

0xb1ed,	// (0x00019b2c) list_double_time_pane_t2_ParamLimits

0xb1ed,	// (0x00019b2c) list_double_time_pane_t2

0xb1ff,	// (0x00019b3e) list_double_time_pane_t3_ParamLimits

0xb1ff,	// (0x00019b3e) list_double_time_pane_t3

0xb211,	// (0x00019b50) list_double_time_pane_t4_ParamLimits

0xb211,	// (0x00019b50) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001df97) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001df97) list_double_time_pane_t

0xb223,	// (0x00019b62) list_setting_pane_g1_ParamLimits

0xb223,	// (0x00019b62) list_setting_pane_g1

0xafd4,	// (0x00019913) list_setting_pane_g2_ParamLimits

0xafd4,	// (0x00019913) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001dfa0) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001dfa0) list_setting_pane_g

0xb22f,	// (0x00019b6e) list_setting_pane_t1_ParamLimits

0xb22f,	// (0x00019b6e) list_setting_pane_t1

0xb249,	// (0x00019b88) list_setting_pane_t2_ParamLimits

0xb249,	// (0x00019b88) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001dfa5) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001dfa5) list_setting_pane_t

0xb286,	// (0x00019bc5) set_value_pane_cp_ParamLimits

0xb286,	// (0x00019bc5) set_value_pane_cp

0xb292,	// (0x00019bd1) list_setting_number_pane_g1_ParamLimits

0xb292,	// (0x00019bd1) list_setting_number_pane_g1

0xb29e,	// (0x00019bdd) list_setting_number_pane_g2_ParamLimits

0xb29e,	// (0x00019bdd) list_setting_number_pane_g2

0x0001,

0xf66d,	// (0x0001dfac) list_setting_number_pane_g_ParamLimits

0xf66d,	// (0x0001dfac) list_setting_number_pane_g

0xb2aa,	// (0x00019be9) list_setting_number_pane_t1_ParamLimits

0xb2aa,	// (0x00019be9) list_setting_number_pane_t1

0xb2c1,	// (0x00019c00) list_setting_number_pane_t2_ParamLimits

0xb2c1,	// (0x00019c00) list_setting_number_pane_t2

0xb2db,	// (0x00019c1a) list_setting_number_pane_t3_ParamLimits

0xb2db,	// (0x00019c1a) list_setting_number_pane_t3

0x0003,

0xf672,	// (0x0001dfb1) list_setting_number_pane_t_ParamLimits

0xf672,	// (0x0001dfb1) list_setting_number_pane_t

0xb286,	// (0x00019bc5) set_value_pane_ParamLimits

0xb286,	// (0x00019bc5) set_value_pane

0x2e9a,	// (0x000117d9) bg_set_opt_pane_ParamLimits

0x2e9a,	// (0x000117d9) bg_set_opt_pane

0xb31c,	// (0x00019c5b) set_value_pane_t1

0x2ec9,	// (0x00011808) slider_set_pane_cp3

0x2ed2,	// (0x00011811) volume_small_pane_cp

0x2edb,	// (0x0001181a) list_form_gen_pane

0x2ee4,	// (0x00011823) scroll_pane_cp8

0xb332,	// (0x00019c71) form_field_data_pane_ParamLimits

0xb332,	// (0x00019c71) form_field_data_pane

0xb352,	// (0x00019c91) form_field_data_wide_pane_ParamLimits

0xb352,	// (0x00019c91) form_field_data_wide_pane

0xb371,	// (0x00019cb0) form_field_popup_pane_ParamLimits

0xb371,	// (0x00019cb0) form_field_popup_pane

0xb389,	// (0x00019cc8) form_field_popup_wide_pane_ParamLimits

0xb389,	// (0x00019cc8) form_field_popup_wide_pane

0xb3a0,	// (0x00019cdf) form_field_slider_pane_ParamLimits

0xb3a0,	// (0x00019cdf) form_field_slider_pane

0xb3b3,	// (0x00019cf2) form_field_slider_wide_pane_ParamLimits

0xb3b3,	// (0x00019cf2) form_field_slider_wide_pane

0x2f89,	// (0x000118c8) data_form_pane

0xb3ce,	// (0x00019d0d) form_field_data_pane_t1

0x2fb5,	// (0x000118f4) input_focus_pane

0xb3e6,	// (0x00019d25) data_form_wide_pane

0xb403,	// (0x00019d42) form_field_data_wide_pane_t1

0x2897,	// (0x000111d6) input_focus_pane_cp6

0xb425,	// (0x00019d64) form_field_popup_pane_t1

0x2fb5,	// (0x000118f4) input_focus_pane_cp7

0x303a,	// (0x00011979) list_form_pane

0xb445,	// (0x00019d84) form_field_popup_wide_pane_t1

0x2fb5,	// (0x000118f4) input_focus_pane_cp8

0x3063,	// (0x000119a2) list_form_wide_pane

0xb462,	// (0x00019da1) form_field_slider_pane_t1_ParamLimits

0xb462,	// (0x00019da1) form_field_slider_pane_t1

0xb474,	// (0x00019db3) form_field_slider_pane_t2_ParamLimits

0xb474,	// (0x00019db3) form_field_slider_pane_t2

0x0001,

0xf682,	// (0x0001dfc1) form_field_slider_pane_t_ParamLimits

0xf682,	// (0x0001dfc1) form_field_slider_pane_t

0x254f,	// (0x00010e8e) input_focus_pane_cp9_ParamLimits

0x254f,	// (0x00010e8e) input_focus_pane_cp9

0xb486,	// (0x00019dc5) slider_cont_pane_ParamLimits

0xb486,	// (0x00019dc5) slider_cont_pane

0x30b6,	// (0x000119f5) form_field_slider_wide_pane_t1_ParamLimits

0x30b6,	// (0x000119f5) form_field_slider_wide_pane_t1

0xb49a,	// (0x00019dd9) form_field_slider_wide_pane_t2_ParamLimits

0xb49a,	// (0x00019dd9) form_field_slider_wide_pane_t2

0x0001,

0xf687,	// (0x0001dfc6) form_field_slider_wide_pane_t_ParamLimits

0xf687,	// (0x0001dfc6) form_field_slider_wide_pane_t

0x254f,	// (0x00010e8e) input_focus_pane_cp10_ParamLimits

0x254f,	// (0x00010e8e) input_focus_pane_cp10

0xb4ac,	// (0x00019deb) slider_cont_pane_cp1_ParamLimits

0xb4ac,	// (0x00019deb) slider_cont_pane_cp1

0xb4c0,	// (0x00019dff) slider_form_pane_cp

0x30f6,	// (0x00011a35) input_focus_pane_g1

0x30fe,	// (0x00011a3d) input_focus_pane_g2

0x3106,	// (0x00011a45) input_focus_pane_g3

0x310e,	// (0x00011a4d) input_focus_pane_g4

0x3116,	// (0x00011a55) input_focus_pane_g5

0x311e,	// (0x00011a5d) input_focus_pane_g6

0x3126,	// (0x00011a65) input_focus_pane_g7

0x312e,	// (0x00011a6d) input_focus_pane_g8

0x3136,	// (0x00011a75) input_focus_pane_g9

0x21da,	// (0x00010b19) input_focus_pane_g10

0x0009,

0xf68c,	// (0x0001dfcb) input_focus_pane_g

0x4c95,	// (0x000135d4) wait_border_pane_g3_copy1

0xb4c8,	// (0x00019e07) data_form_pane_t1

0x21da,	// (0x00010b19) wait_anim_pane_g1_copy1

0xb72b,	// (0x0001a06a) data_form_wide_pane_t1

0xb4e2,	// (0x00019e21) list_form_graphic_pane_cp_ParamLimits

0xb4e2,	// (0x00019e21) list_form_graphic_pane_cp

0x5b47,	// (0x00014486) slider_form_pane_g1

0x5b50,	// (0x0001448f) slider_form_pane_g2

0x0006,

0xf988,	// (0x0001e2c7) slider_form_pane_g

0xb4e2,	// (0x00019e21) list_form_graphic_pane_ParamLimits

0xb4e2,	// (0x00019e21) list_form_graphic_pane

0xb4f3,	// (0x00019e32) list_form_graphic_pane_g1

0xb4fb,	// (0x00019e3a) list_form_graphic_pane_t1_ParamLimits

0xb4fb,	// (0x00019e3a) list_form_graphic_pane_t1

0x22c4,	// (0x00010c03) list_highlight_pane_cp5_ParamLimits

0x22c4,	// (0x00010c03) list_highlight_pane_cp5

0xb510,	// (0x00019e4f) find_pane_g1

0x318f,	// (0x00011ace) input_find_pane

0xb519,	// (0x00019e58) input_find_pane_g1_ParamLimits

0xb519,	// (0x00019e58) input_find_pane_g1

0xb525,	// (0x00019e64) input_find_pane_t1_ParamLimits

0xb525,	// (0x00019e64) input_find_pane_t1

0xb53a,	// (0x00019e79) input_find_pane_t2_ParamLimits

0xb53a,	// (0x00019e79) input_find_pane_t2

0x0001,

0xf6a1,	// (0x0001dfe0) input_find_pane_t_ParamLimits

0xf6a1,	// (0x0001dfe0) input_find_pane_t

0x31ce,	// (0x00011b0d) input_focus_pane_cp5_ParamLimits

0x31ce,	// (0x00011b0d) input_focus_pane_cp5

0x31e8,	// (0x00011b27) bg_popup_window_pane_cp2_ParamLimits

0x31e8,	// (0x00011b27) bg_popup_window_pane_cp2

0x31f5,	// (0x00011b34) listscroll_menu_pane_ParamLimits

0x31f5,	// (0x00011b34) listscroll_menu_pane

0x3201,	// (0x00011b40) popup_submenu_window_ParamLimits

0x3201,	// (0x00011b40) popup_submenu_window

0x3225,	// (0x00011b64) find_popup_pane_g1

0x322d,	// (0x00011b6c) input_popup_find_pane_cp

0x31ce,	// (0x00011b0d) input_focus_pane_cp4_ParamLimits

0x31ce,	// (0x00011b0d) input_focus_pane_cp4

0x3243,	// (0x00011b82) input_popup_find_pane_t1_ParamLimits

0x3243,	// (0x00011b82) input_popup_find_pane_t1

0x21e4,	// (0x00010b23) bg_popup_sub_pane_cp

0x3271,	// (0x00011bb0) listscroll_popup_sub_pane

0x3279,	// (0x00011bb8) list_submenu_pane_ParamLimits

0x3279,	// (0x00011bb8) list_submenu_pane

0x328a,	// (0x00011bc9) scroll_pane_cp4

0x3292,	// (0x00011bd1) list_single_popup_submenu_pane_ParamLimits

0x3292,	// (0x00011bd1) list_single_popup_submenu_pane

0x32a5,	// (0x00011be4) list_single_popup_submenu_pane_g1

0x32ad,	// (0x00011bec) list_single_popup_submenu_pane_t1_ParamLimits

0x32ad,	// (0x00011bec) list_single_popup_submenu_pane_t1

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp1_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp1

0x32c2,	// (0x00011c01) tabs_2_active_pane_g1

0x32ca,	// (0x00011c09) tabs_2_active_pane_t1

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp1_ParamLimits

0x22c4,	// (0x00010c03) bg_passive_tab_pane_cp1

0x32c2,	// (0x00011c01) tabs_2_passive_pane_g1

0x32ca,	// (0x00011c09) tabs_2_passive_pane_t1

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp4

0x32ea,	// (0x00011c29) tabs_2_long_active_pane_t1

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp4

0x8895,	// (0x000171d4) list_single_midp_graphic_pane_g4_ParamLimits

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp5

0x3309,	// (0x00011c48) tabs_3_long_active_pane_t1

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp5

0x8895,	// (0x000171d4) list_single_midp_graphic_pane_g4

0x22c4,	// (0x00010c03) bg_popup_window_pane_cp13_ParamLimits

0x22c4,	// (0x00010c03) bg_popup_window_pane_cp13

0x3324,	// (0x00011c63) listscroll_popup_fast_pane_ParamLimits

0x3324,	// (0x00011c63) listscroll_popup_fast_pane

0x3333,	// (0x00011c72) grid_popup_fast_pane_ParamLimits

0x3333,	// (0x00011c72) grid_popup_fast_pane

0x3345,	// (0x00011c84) scroll_pane_cp9_ParamLimits

0x3345,	// (0x00011c84) scroll_pane_cp9

0x9093,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x9093,	// (0x000179d2) list_single_graphic_hl_pane_t1_cp2

0x3369,	// (0x00011ca8) input_focus_pane_cp20_ParamLimits

0x3369,	// (0x00011ca8) input_focus_pane_cp20

0x3377,	// (0x00011cb6) query_popup_data_pane_t1_ParamLimits

0x3377,	// (0x00011cb6) query_popup_data_pane_t1

0x338a,	// (0x00011cc9) query_popup_data_pane_t2_ParamLimits

0x338a,	// (0x00011cc9) query_popup_data_pane_t2

0x33d0,	// (0x00011d0f) query_popup_data_pane_t3_ParamLimits

0x33d0,	// (0x00011d0f) query_popup_data_pane_t3

0x3411,	// (0x00011d50) query_popup_data_pane_t4_ParamLimits

0x3411,	// (0x00011d50) query_popup_data_pane_t4

0x344d,	// (0x00011d8c) query_popup_data_pane_t5_ParamLimits

0x344d,	// (0x00011d8c) query_popup_data_pane_t5

0x0004,

0xf6a6,	// (0x0001dfe5) query_popup_data_pane_t_ParamLimits

0xf6a6,	// (0x0001dfe5) query_popup_data_pane_t

0x30f6,	// (0x00011a35) bg_set_opt_pane_g1

0x30fe,	// (0x00011a3d) bg_set_opt_pane_g2

0x3106,	// (0x00011a45) bg_set_opt_pane_g3

0x310e,	// (0x00011a4d) bg_set_opt_pane_g4

0x3116,	// (0x00011a55) bg_set_opt_pane_g5

0x311e,	// (0x00011a5d) bg_set_opt_pane_g6

0x3126,	// (0x00011a65) bg_set_opt_pane_g7

0x312e,	// (0x00011a6d) bg_set_opt_pane_g8

0x3136,	// (0x00011a75) bg_set_opt_pane_g9

0x0008,

0xf6b1,	// (0x0001dff0) bg_set_opt_pane_g

0xc4f1,	// (0x0001ae30) control_top_pane_stacon_ParamLimits

0xc4f1,	// (0x0001ae30) control_top_pane_stacon

0xc544,	// (0x0001ae83) signal_pane_stacon_ParamLimits

0xc544,	// (0x0001ae83) signal_pane_stacon

0x3a7a,	// (0x000123b9) stacon_top_pane_g1_ParamLimits

0x3a7a,	// (0x000123b9) stacon_top_pane_g1

0xc569,	// (0x0001aea8) title_pane_stacon_ParamLimits

0xc569,	// (0x0001aea8) title_pane_stacon

0xc58b,	// (0x0001aeca) uni_indicator_pane_stacon_ParamLimits

0xc58b,	// (0x0001aeca) uni_indicator_pane_stacon

0xc5a0,	// (0x0001aedf) battery_pane_stacon_ParamLimits

0xc5a0,	// (0x0001aedf) battery_pane_stacon

0xc5e0,	// (0x0001af1f) control_bottom_pane_stacon_ParamLimits

0xc5e0,	// (0x0001af1f) control_bottom_pane_stacon

0xc5ff,	// (0x0001af3e) navi_pane_stacon_ParamLimits

0xc5ff,	// (0x0001af3e) navi_pane_stacon

0x3a9c,	// (0x000123db) stacon_bottom_pane_g1_ParamLimits

0x3a9c,	// (0x000123db) stacon_bottom_pane_g1

0xc263,	// (0x0001aba2) aid_levels_signal_lsc_ParamLimits

0xc263,	// (0x0001aba2) aid_levels_signal_lsc

0xc27a,	// (0x0001abb9) signal_pane_stacon_g1_ParamLimits

0xc27a,	// (0x0001abb9) signal_pane_stacon_g1

0xc28e,	// (0x0001abcd) signal_pane_stacon_g2_ParamLimits

0xc28e,	// (0x0001abcd) signal_pane_stacon_g2

0x0001,

0xf6c4,	// (0x0001e003) signal_pane_stacon_g_ParamLimits

0xf6c4,	// (0x0001e003) signal_pane_stacon_g

0xc2c3,	// (0x0001ac02) title_pane_stacon_t1_ParamLimits

0xc2c3,	// (0x0001ac02) title_pane_stacon_t1

0x34a5,	// (0x00011de4) uni_indicator_pane_stacon_g1

0x34af,	// (0x00011dee) uni_indicator_pane_stacon_g2

0x3491,	// (0x00011dd0) uni_indicator_pane_stacon_g3

0x349b,	// (0x00011dda) uni_indicator_pane_stacon_g4

0x0003,

0xf6d0,	// (0x0001e00f) uni_indicator_pane_stacon_g

0xc2e8,	// (0x0001ac27) control_top_pane_stacon_g1

0xc2f0,	// (0x0001ac2f) control_top_pane_stacon_t1_ParamLimits

0xc2f0,	// (0x0001ac2f) control_top_pane_stacon_t1

0xc327,	// (0x0001ac66) aid_levels_battery_lsc_ParamLimits

0xc327,	// (0x0001ac66) aid_levels_battery_lsc

0xc33f,	// (0x0001ac7e) battery_pane_stacon_g1_ParamLimits

0xc33f,	// (0x0001ac7e) battery_pane_stacon_g1

0xc352,	// (0x0001ac91) battery_pane_stacon_g2_ParamLimits

0xc352,	// (0x0001ac91) battery_pane_stacon_g2

0x0001,

0xf6d9,	// (0x0001e018) battery_pane_stacon_g_ParamLimits

0xf6d9,	// (0x0001e018) battery_pane_stacon_g

0xc388,	// (0x0001acc7) navi_icon_pane_stacon

0xc39c,	// (0x0001acdb) navi_navi_pane_stacon

0xc388,	// (0x0001acc7) navi_text_pane_stacon

0xc2e8,	// (0x0001ac27) control_bottom_pane_stacon_g1

0xc3b0,	// (0x0001acef) control_bottom_pane_stacon_t1_ParamLimits

0xc3b0,	// (0x0001acef) control_bottom_pane_stacon_t1

0x34d3,	// (0x00011e12) grid_app_pane_ParamLimits

0x34d3,	// (0x00011e12) grid_app_pane

0x34f1,	// (0x00011e30) scroll_pane_cp15_ParamLimits

0x34f1,	// (0x00011e30) scroll_pane_cp15

0x3502,	// (0x00011e41) cell_app_pane_ParamLimits

0x3502,	// (0x00011e41) cell_app_pane

0x3526,	// (0x00011e65) cell_app_pane_g1_ParamLimits

0x3526,	// (0x00011e65) cell_app_pane_g1

0x354a,	// (0x00011e89) cell_app_pane_g2_ParamLimits

0x354a,	// (0x00011e89) cell_app_pane_g2

0x0001,

0xf6de,	// (0x0001e01d) cell_app_pane_g_ParamLimits

0xf6de,	// (0x0001e01d) cell_app_pane_g

0x3556,	// (0x00011e95) cell_app_pane_t1_ParamLimits

0x3556,	// (0x00011e95) cell_app_pane_t1

0x356d,	// (0x00011eac) grid_highlight_pane_ParamLimits

0x356d,	// (0x00011eac) grid_highlight_pane

0x30f6,	// (0x00011a35) cell_highlight_pane_g1

0x30fe,	// (0x00011a3d) cell_highlight_pane_g2

0x3106,	// (0x00011a45) cell_highlight_pane_g3

0x310e,	// (0x00011a4d) cell_highlight_pane_g4

0x3116,	// (0x00011a55) cell_highlight_pane_g5

0x311e,	// (0x00011a5d) cell_highlight_pane_g6

0x3126,	// (0x00011a65) cell_highlight_pane_g7

0x312e,	// (0x00011a6d) cell_highlight_pane_g8

0x3136,	// (0x00011a75) cell_highlight_pane_g9

0x21da,	// (0x00010b19) cell_highlight_pane_g10

0x0009,

0xf68c,	// (0x0001dfcb) cell_highlight_pane_g

0x357e,	// (0x00011ebd) bg_scroll_pane

0xc3fa,	// (0x0001ad39) scroll_handle_pane

0x35c5,	// (0x00011f04) scroll_bg_pane_g1

0x35da,	// (0x00011f19) scroll_bg_pane_g2

0x35f2,	// (0x00011f31) scroll_bg_pane_g3

0x0002,

0xf6e3,	// (0x0001e022) scroll_bg_pane_g

0x3607,	// (0x00011f46) scroll_handle_focus_pane_ParamLimits

0x3607,	// (0x00011f46) scroll_handle_focus_pane

0x35c5,	// (0x00011f04) scroll_handle_pane_g1

0x3614,	// (0x00011f53) scroll_handle_pane_g2

0x35f2,	// (0x00011f31) scroll_handle_pane_g3

0x0002,

0xf6ea,	// (0x0001e029) scroll_handle_pane_g

0x31ce,	// (0x00011b0d) bg_popup_sub_pane_cp21_ParamLimits

0x31ce,	// (0x00011b0d) bg_popup_sub_pane_cp21

0x3628,	// (0x00011f67) popup_fep_japan_predictive_window_t1_ParamLimits

0x3628,	// (0x00011f67) popup_fep_japan_predictive_window_t1

0x363f,	// (0x00011f7e) popup_fep_japan_predictive_window_t2_ParamLimits

0x363f,	// (0x00011f7e) popup_fep_japan_predictive_window_t2

0x3672,	// (0x00011fb1) popup_fep_japan_predictive_window_t3_ParamLimits

0x3672,	// (0x00011fb1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f1,	// (0x0001e030) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f1,	// (0x0001e030) popup_fep_japan_predictive_window_t

0x21e4,	// (0x00010b23) bg_popup_sub_pane_cp23

0x36a9,	// (0x00011fe8) listscroll_japin_cand_pane

0x36b1,	// (0x00011ff0) popup_fep_japan_candidate_window_t1

0x36bf,	// (0x00011ffe) candidate_pane_ParamLimits

0x36bf,	// (0x00011ffe) candidate_pane

0x36d1,	// (0x00012010) scroll_pane_cp30

0x36d9,	// (0x00012018) list_single_popup_jap_candidate_pane_ParamLimits

0x36d9,	// (0x00012018) list_single_popup_jap_candidate_pane

0x21e4,	// (0x00010b23) list_highlight_pane_cp30

0x36ee,	// (0x0001202d) list_single_popup_jap_candidate_pane_t1

0x36fd,	// (0x0001203c) level_1_signal

0x370a,	// (0x00012049) level_2_signal

0x3717,	// (0x00012056) level_3_signal

0x3724,	// (0x00012063) level_4_signal

0x3731,	// (0x00012070) level_5_signal

0x373e,	// (0x0001207d) level_6_signal

0x374b,	// (0x0001208a) level_7_signal

0x36fd,	// (0x0001203c) level_1_battery

0x370a,	// (0x00012049) level_2_battery

0x3717,	// (0x00012056) level_3_battery

0x3724,	// (0x00012063) level_4_battery

0x3731,	// (0x00012070) level_5_battery

0x373e,	// (0x0001207d) level_6_battery

0x374b,	// (0x0001208a) level_7_battery

0x3770,	// (0x000120af) list_menu_pane_ParamLimits

0x3770,	// (0x000120af) list_menu_pane

0x3786,	// (0x000120c5) scroll_pane_cp25_ParamLimits

0x3786,	// (0x000120c5) scroll_pane_cp25

0x379f,	// (0x000120de) list_double2_graphic_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double2_graphic_pane_cp2

0x379f,	// (0x000120de) list_double2_large_graphic_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double2_large_graphic_pane_cp2

0x379f,	// (0x000120de) list_double2_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double2_pane_cp2

0x379f,	// (0x000120de) list_double_graphic_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double_graphic_pane_cp2

0x379f,	// (0x000120de) list_double_large_graphic_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double_large_graphic_pane_cp2

0x379f,	// (0x000120de) list_double_number_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double_number_pane_cp2

0x379f,	// (0x000120de) list_double_pane_cp2_ParamLimits

0x379f,	// (0x000120de) list_double_pane_cp2

0x37c0,	// (0x000120ff) list_single_2graphic_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_2graphic_pane_cp2

0x37c0,	// (0x000120ff) list_single_graphic_heading_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_graphic_heading_pane_cp2

0x37c0,	// (0x000120ff) list_single_graphic_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_graphic_pane_cp2

0x37c0,	// (0x000120ff) list_single_heading_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_heading_pane_cp2

0x37d4,	// (0x00012113) list_single_large_graphic_pane_cp2_ParamLimits

0x37d4,	// (0x00012113) list_single_large_graphic_pane_cp2

0x37c0,	// (0x000120ff) list_single_number_heading_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_number_heading_pane_cp2

0x37c0,	// (0x000120ff) list_single_number_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_number_pane_cp2

0x37c0,	// (0x000120ff) list_single_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_pane_cp2

0x3843,	// (0x00012182) bg_popup_sub_pane_cp22

0xc4a9,	// (0x0001ade8) popup_side_volume_key_window_g1

0xc4cd,	// (0x0001ae0c) popup_side_volume_key_window_t1

0xc4e9,	// (0x0001ae28) volume_small_pane_cp1

0x254f,	// (0x00010e8e) bg_popup_sub_pane_cp24_ParamLimits

0x254f,	// (0x00010e8e) bg_popup_sub_pane_cp24

0x3859,	// (0x00012198) fep_china_uni_candidate_pane_ParamLimits

0x3859,	// (0x00012198) fep_china_uni_candidate_pane

0x386d,	// (0x000121ac) fep_china_uni_entry_pane

0x387d,	// (0x000121bc) popup_fep_china_uni_window_g1

0x3899,	// (0x000121d8) fep_china_uni_entry_pane_g1

0x38a1,	// (0x000121e0) fep_china_uni_entry_pane_g2

0x0001,

0xf722,	// (0x0001e061) fep_china_uni_entry_pane_g

0x38a9,	// (0x000121e8) fep_entry_item_pane

0x38b3,	// (0x000121f2) fep_candidate_item_pane

0x38bb,	// (0x000121fa) fep_china_uni_candidate_pane_g1

0x38c3,	// (0x00012202) fep_china_uni_candidate_pane_g2

0x38cb,	// (0x0001220a) fep_china_uni_candidate_pane_g3

0x38d3,	// (0x00012212) fep_china_uni_candidate_pane_g4

0x0003,

0xf727,	// (0x0001e066) fep_china_uni_candidate_pane_g

0x21da,	// (0x00010b19) fep_entry_item_pane_g1

0x38db,	// (0x0001221a) fep_entry_item_pane_t1_ParamLimits

0x38db,	// (0x0001221a) fep_entry_item_pane_t1

0x38f1,	// (0x00012230) fep_candidate_item_pane_t1_ParamLimits

0x38f1,	// (0x00012230) fep_candidate_item_pane_t1

0x3906,	// (0x00012245) fep_candidate_item_pane_t2_ParamLimits

0x3906,	// (0x00012245) fep_candidate_item_pane_t2

0x0001,

0xf730,	// (0x0001e06f) fep_candidate_item_pane_t_ParamLimits

0xf730,	// (0x0001e06f) fep_candidate_item_pane_t

0x22c4,	// (0x00010c03) list_highlight_pane_cp31_ParamLimits

0x22c4,	// (0x00010c03) list_highlight_pane_cp31

0x3918,	// (0x00012257) level_1_signal_lsc

0x3921,	// (0x00012260) level_2_signal_lsc

0x392a,	// (0x00012269) level_3_signal_lsc

0x3933,	// (0x00012272) level_4_signal_lsc

0x393c,	// (0x0001227b) level_5_signal_lsc

0x3945,	// (0x00012284) level_6_signal_lsc

0x394e,	// (0x0001228d) level_7_signal_lsc

0x394e,	// (0x0001228d) level_1_battery_lsc

0x3957,	// (0x00012296) level_2_battery_lsc

0x3960,	// (0x0001229f) level_3_battery_lsc

0x3969,	// (0x000122a8) level_4_battery_lsc

0x3972,	// (0x000122b1) level_5_battery_lsc

0x397b,	// (0x000122ba) level_6_battery_lsc

0x3918,	// (0x00012257) level_7_battery_lsc

0x3984,	// (0x000122c3) scroll_handle_focus_pane_g1

0x398d,	// (0x000122cc) scroll_handle_focus_pane_g2

0x3996,	// (0x000122d5) scroll_handle_focus_pane_g3

0x0002,

0xf735,	// (0x0001e074) scroll_handle_focus_pane_g

0xb54f,	// (0x00019e8e) list_single_2graphic_pane_g1_ParamLimits

0xb54f,	// (0x00019e8e) list_single_2graphic_pane_g1

0xaf22,	// (0x00019861) list_single_2graphic_pane_g2_ParamLimits

0xaf22,	// (0x00019861) list_single_2graphic_pane_g2

0xaea8,	// (0x000197e7) list_single_2graphic_pane_g3_ParamLimits

0xaea8,	// (0x000197e7) list_single_2graphic_pane_g3

0xb55b,	// (0x00019e9a) list_single_2graphic_pane_g4_ParamLimits

0xb55b,	// (0x00019e9a) list_single_2graphic_pane_g4

0x0003,

0xf73c,	// (0x0001e07b) list_single_2graphic_pane_g_ParamLimits

0xf73c,	// (0x0001e07b) list_single_2graphic_pane_g

0xb56c,	// (0x00019eab) list_single_2graphic_pane_t1_ParamLimits

0xb56c,	// (0x00019eab) list_single_2graphic_pane_t1

0xb59a,	// (0x00019ed9) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb59a,	// (0x00019ed9) list_double2_graphic_large_graphic_pane_g1

0xafc5,	// (0x00019904) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xafc5,	// (0x00019904) list_double2_graphic_large_graphic_pane_g2

0xafd4,	// (0x00019913) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xafd4,	// (0x00019913) list_double2_graphic_large_graphic_pane_g3

0xb5aa,	// (0x00019ee9) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb5aa,	// (0x00019ee9) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf745,	// (0x0001e084) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf745,	// (0x0001e084) list_double2_graphic_large_graphic_pane_g

0xb5b6,	// (0x00019ef5) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb5b6,	// (0x00019ef5) list_double2_graphic_large_graphic_pane_t1

0xb5cc,	// (0x00019f0b) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb5cc,	// (0x00019f0b) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74e,	// (0x0001e08d) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74e,	// (0x0001e08d) list_double2_graphic_large_graphic_pane_t

0x3b55,	// (0x00012494) popup_fast_swap_window_ParamLimits

0x3b55,	// (0x00012494) popup_fast_swap_window

0x3b71,	// (0x000124b0) popup_side_volume_key_window

0x3b8b,	// (0x000124ca) stacon_top_pane

0x3b95,	// (0x000124d4) status_pane_ParamLimits

0x3b95,	// (0x000124d4) status_pane

0x3ba3,	// (0x000124e2) status_small_pane

0x21e4,	// (0x00010b23) control_pane

0x21e4,	// (0x00010b23) stacon_bottom_pane

0x2ee4,	// (0x00011823) scroll_pane_cp121

0x2edb,	// (0x0001181a) set_content_pane

0x3a3b,	// (0x0001237a) bg_active_tab_pane_g1_cp1

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp1

0x3a29,	// (0x00012368) bg_active_tab_pane_g3_cp1

0x3a3b,	// (0x0001237a) bg_passive_tab_pane_g1_cp1

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp1

0x3a29,	// (0x00012368) bg_passive_tab_pane_g3_cp1

0x3a4d,	// (0x0001238c) bg_active_tab_pane_g1_cp2

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp2

0x3a44,	// (0x00012383) bg_active_tab_pane_g3_cp2

0x3a4d,	// (0x0001238c) bg_passive_tab_pane_g1_cp2

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp2

0x3a44,	// (0x00012383) bg_passive_tab_pane_g3_cp2

0x3a5f,	// (0x0001239e) bg_active_tab_pane_g1_cp3

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp3

0x3a56,	// (0x00012395) bg_active_tab_pane_g3_cp3

0x3a5f,	// (0x0001239e) bg_passive_tab_pane_g1_cp3

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp3

0x3a56,	// (0x00012395) bg_passive_tab_pane_g3_cp3

0x3a71,	// (0x000123b0) bg_active_tab_pane_g1_cp4

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp4

0x3a68,	// (0x000123a7) bg_active_tab_pane_g3_cp4

0x3a71,	// (0x000123b0) bg_passive_tab_pane_g1_cp4

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp4

0x3a68,	// (0x000123a7) bg_passive_tab_pane_g3_cp4

0x3ac1,	// (0x00012400) bg_active_tab_pane_g1_cp5

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp5

0x3ab8,	// (0x000123f7) bg_active_tab_pane_g3_cp5

0x3ac1,	// (0x00012400) bg_passive_tab_pane_g1_cp5

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp5

0x3ab8,	// (0x000123f7) bg_passive_tab_pane_g3_cp5

0x3aca,	// (0x00012409) list_set_graphic_pane_ParamLimits

0x3aca,	// (0x00012409) list_set_graphic_pane

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp4

0x3adc,	// (0x0001241b) list_set_graphic_pane_g1_ParamLimits

0x3adc,	// (0x0001241b) list_set_graphic_pane_g1

0x3ae8,	// (0x00012427) list_set_graphic_pane_g2_ParamLimits

0x3ae8,	// (0x00012427) list_set_graphic_pane_g2

0x0001,

0xf753,	// (0x0001e092) list_set_graphic_pane_g_ParamLimits

0xf753,	// (0x0001e092) list_set_graphic_pane_g

0x0009,

0xfadd,	// (0x0001e41c) volume_small_pane_cp_g

0x3b0a,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3b0a,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2

0x3b16,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3b16,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2

0x3b25,	// (0x00012464) list_double2_large_graphic_pane_g3_cp2

0x3b2d,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3b2d,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2

0x3b43,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3b43,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2

0x572a,	// (0x00014069) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x572a,	// (0x00014069) list_double_large_graphic_pane_g1_cp2

0x573b,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x573b,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2

0x3ca8,	// (0x000125e7) list_double_large_graphic_pane_g3_cp2

0x574a,	// (0x00014089) list_double_large_graphic_pane_g4_cp

0x5752,	// (0x00014091) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5752,	// (0x00014091) list_double_large_graphic_pane_t1_cp2

0x5769,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5769,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2

0x3bac,	// (0x000124eb) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3bac,	// (0x000124eb) list_double2_graphic_pane_g1_cp2

0x3bb8,	// (0x000124f7) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3bb8,	// (0x000124f7) list_double2_graphic_pane_g2_cp2

0x3bc7,	// (0x00012506) list_double2_graphic_pane_g3_cp2

0x3bcf,	// (0x0001250e) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3bcf,	// (0x0001250e) list_double2_graphic_pane_t1_cp2

0x3be5,	// (0x00012524) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3be5,	// (0x00012524) list_double2_graphic_pane_t2_cp2

0x3bf7,	// (0x00012536) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3bf7,	// (0x00012536) list_single_number_heading_pane_g1_cp2

0x3c03,	// (0x00012542) list_single_number_heading_pane_g2_cp2

0x3c0b,	// (0x0001254a) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3c0b,	// (0x0001254a) list_single_number_heading_pane_t1_cp2

0x3c21,	// (0x00012560) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3c21,	// (0x00012560) list_single_number_heading_pane_t2_cp2

0x3c33,	// (0x00012572) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3c33,	// (0x00012572) list_single_number_heading_pane_t3_cp2

0x3bf7,	// (0x00012536) list_single_heading_pane_g1_cp2_ParamLimits

0x3bf7,	// (0x00012536) list_single_heading_pane_g1_cp2

0x3c03,	// (0x00012542) list_single_heading_pane_g2_cp2

0x3c0b,	// (0x0001254a) list_single_heading_pane_t1_cp2_ParamLimits

0x3c0b,	// (0x0001254a) list_single_heading_pane_t1_cp2

0x5534,	// (0x00013e73) list_single_heading_pane_t2_cp2_ParamLimits

0x5534,	// (0x00013e73) list_single_heading_pane_t2_cp2

0x547c,	// (0x00013dbb) list_double_graphic_pane_g1_cp2_ParamLimits

0x547c,	// (0x00013dbb) list_double_graphic_pane_g1_cp2

0x5488,	// (0x00013dc7) list_double_graphic_pane_g2_cp2_ParamLimits

0x5488,	// (0x00013dc7) list_double_graphic_pane_g2_cp2

0x5497,	// (0x00013dd6) list_double_graphic_pane_g3_cp2

0x549f,	// (0x00013dde) list_double_graphic_pane_t1_cp2_ParamLimits

0x549f,	// (0x00013dde) list_double_graphic_pane_t1_cp2

0x54b5,	// (0x00013df4) list_double_graphic_pane_t2_cp2_ParamLimits

0x54b5,	// (0x00013df4) list_double_graphic_pane_t2_cp2

0x2a3d,	// (0x0001137c) list_double_number_pane_g1_cp2_ParamLimits

0x2a3d,	// (0x0001137c) list_double_number_pane_g1_cp2

0x3ca8,	// (0x000125e7) list_double_number_pane_g2_cp2

0x5442,	// (0x00013d81) list_double_number_pane_t1_cp2_ParamLimits

0x5442,	// (0x00013d81) list_double_number_pane_t1_cp2

0x5454,	// (0x00013d93) list_double_number_pane_t2_cp2_ParamLimits

0x5454,	// (0x00013d93) list_double_number_pane_t2_cp2

0x546a,	// (0x00013da9) list_double_number_pane_t3_cp2_ParamLimits

0x546a,	// (0x00013da9) list_double_number_pane_t3_cp2

0x532d,	// (0x00013c6c) list_single_graphic_pane_g1_cp2_ParamLimits

0x532d,	// (0x00013c6c) list_single_graphic_pane_g1_cp2

0x3cfe,	// (0x0001263d) list_single_graphic_pane_g2_cp2_ParamLimits

0x3cfe,	// (0x0001263d) list_single_graphic_pane_g2_cp2

0x3d0a,	// (0x00012649) list_single_graphic_pane_g3_cp2

0x5305,	// (0x00013c44) list_single_graphic_pane_t1_cp2_ParamLimits

0x5305,	// (0x00013c44) list_single_graphic_pane_t1_cp2

0x3cfe,	// (0x0001263d) list_single_number_pane_g1_cp2_ParamLimits

0x3cfe,	// (0x0001263d) list_single_number_pane_g1_cp2

0x3d0a,	// (0x00012649) list_single_number_pane_g2_cp2

0x5305,	// (0x00013c44) list_single_number_pane_t1_cp2_ParamLimits

0x5305,	// (0x00013c44) list_single_number_pane_t1_cp2

0x531b,	// (0x00013c5a) list_single_number_pane_t2_cp2_ParamLimits

0x531b,	// (0x00013c5a) list_single_number_pane_t2_cp2

0x3b16,	// (0x00012455) list_double2_pane_g1_cp2_ParamLimits

0x3b16,	// (0x00012455) list_double2_pane_g1_cp2

0x3b25,	// (0x00012464) list_double2_pane_g2_cp2

0x3c80,	// (0x000125bf) list_double2_pane_t1_cp2_ParamLimits

0x3c80,	// (0x000125bf) list_double2_pane_t1_cp2

0x3c96,	// (0x000125d5) list_double2_pane_t2_cp2_ParamLimits

0x3c96,	// (0x000125d5) list_double2_pane_t2_cp2

0x2a3d,	// (0x0001137c) list_double_pane_g1_cp2_ParamLimits

0x2a3d,	// (0x0001137c) list_double_pane_g1_cp2

0x3ca8,	// (0x000125e7) list_double_pane_g2_cp2

0x3cb0,	// (0x000125ef) list_double_pane_t1_cp2_ParamLimits

0x3cb0,	// (0x000125ef) list_double_pane_t1_cp2

0x3cc6,	// (0x00012605) list_double_pane_t2_cp2_ParamLimits

0x3cc6,	// (0x00012605) list_double_pane_t2_cp2

0x3cee,	// (0x0001262d) list_single_pane_cp2_g3

0x3cfe,	// (0x0001263d) list_single_pane_g1_cp2_ParamLimits

0x3cfe,	// (0x0001263d) list_single_pane_g1_cp2

0x3d0a,	// (0x00012649) list_single_pane_g2_cp2

0x3d12,	// (0x00012651) list_single_pane_t1_cp2_ParamLimits

0x3d12,	// (0x00012651) list_single_pane_t1_cp2

0x3d2a,	// (0x00012669) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3d2a,	// (0x00012669) list_single_large_graphic_pane_g1_cp2

0x3d36,	// (0x00012675) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3d36,	// (0x00012675) list_single_large_graphic_pane_g2_cp2

0x3d42,	// (0x00012681) list_single_large_graphic_pane_g3_cp2

0x3d4a,	// (0x00012689) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3d4a,	// (0x00012689) list_single_large_graphic_pane_g4_cp1

0x3d64,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3d64,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2

0x52d1,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x52d1,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2

0x52a0,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x52a0,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2

0x3d0a,	// (0x00012649) list_single_graphic_heading_pane_g5_cp2

0x52dd,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x52dd,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2

0x52f3,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x52f3,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2

0x5294,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5294,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2

0x52a0,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2_ParamLimits

0x52a0,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2

0x3d0a,	// (0x00012649) list_single_2graphic_pane_g3_cp2

0x52af,	// (0x00013bee) list_single_2graphic_pane_g4_cp2_ParamLimits

0x52af,	// (0x00013bee) list_single_2graphic_pane_g4_cp2

0x52bb,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2_ParamLimits

0x52bb,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2

0x21da,	// (0x00010b19) list_highlight_pane_g10_cp1

0x4e8e,	// (0x000137cd) list_highlight_pane_g1_cp1

0x4e96,	// (0x000137d5) list_highlight_pane_g2_cp1

0x4e9e,	// (0x000137dd) list_highlight_pane_g3_cp1

0x4ea6,	// (0x000137e5) list_highlight_pane_g4_cp1

0x4eae,	// (0x000137ed) list_highlight_pane_g5_cp1

0x4eb6,	// (0x000137f5) list_highlight_pane_g6_cp1

0x4ebe,	// (0x000137fd) list_highlight_pane_g7_cp1

0x4ec6,	// (0x00013805) list_highlight_pane_g8_cp1

0x4ece,	// (0x0001380d) list_highlight_pane_g9_cp1

0x4db6,	// (0x000136f5) form_field_slider_pane_t3

0x4dc4,	// (0x00013703) form_field_slider_pane_t4

0x4dd2,	// (0x00013711) slider_form_pane_ParamLimits

0x4dd2,	// (0x00013711) slider_form_pane

0x21e4,	// (0x00010b23) control_abbreviations

0x21e4,	// (0x00010b23) control_conventions

0x21e4,	// (0x00010b23) control_definitions

0x21e4,	// (0x00010b23) format_table_attribute

0x557e,	// (0x00013ebd) bg_popup_preview_window_pane_g9

0x21e4,	// (0x00010b23) format_table_data2

0x21e4,	// (0x00010b23) format_table_data3

0x21e4,	// (0x00010b23) format_table_data_example

0x0008,

0x21e4,	// (0x00010b23) intro_purpose

0xf8e8,	// (0x0001e227) bg_popup_preview_window_pane_g

0x21e4,	// (0x00010b23) texts_category

0x21e4,	// (0x00010b23) texts_graphics

0x3d7a,	// (0x000126b9) text_digital

0x3d89,	// (0x000126c8) text_primary

0x3d98,	// (0x000126d7) text_primary_small

0x3da7,	// (0x000126e6) text_secondary

0x3db6,	// (0x000126f5) text_title

0x5cf0,	// (0x0001462f) bg_passive_tab_pane_g1_cp3_srt

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp3_srt

0x5ce7,	// (0x00014626) bg_passive_tab_pane_g3_cp3_srt

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp3_srt_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp3_srt

0x5cf9,	// (0x00014638) tabs_4_active_pane_srt_g1

0x5d01,	// (0x00014640) tabs_4_active_pane_srt_t1_ParamLimits

0x5d01,	// (0x00014640) tabs_4_active_pane_srt_t1

0x5cf0,	// (0x0001462f) bg_active_tab_pane_g1_cp3_copy1

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp3_copy1

0x5ce7,	// (0x00014626) bg_active_tab_pane_g3_cp3_copy1

0x22c4,	// (0x00010c03) tabs_2_long_active_pane_srt_ParamLimits

0x22c4,	// (0x00010c03) tabs_2_long_active_pane_srt

0x22c4,	// (0x00010c03) tabs_2_long_passive_pane_srt_ParamLimits

0x22c4,	// (0x00010c03) tabs_2_long_passive_pane_srt

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp4_srt

0x59af,	// (0x000142ee) bg_passive_tab_pane_g1_cp4_srt

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp4_srt

0x59a6,	// (0x000142e5) bg_passive_tab_pane_g3_cp4_srt

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp4_srt_ParamLimits

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp4_srt

0x59b8,	// (0x000142f7) tabs_2_long_active_pane_srt_t1_ParamLimits

0x59b8,	// (0x000142f7) tabs_2_long_active_pane_srt_t1

0x59af,	// (0x000142ee) bg_active_tab_pane_g1_cp4_srt

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp4_srt

0x59a6,	// (0x000142e5) bg_active_tab_pane_g3_cp4_srt

0x254f,	// (0x00010e8e) tabs_3_long_active_pane_srt_ParamLimits

0x254f,	// (0x00010e8e) tabs_3_long_active_pane_srt

0x254f,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x254f,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt

0x254f,	// (0x00010e8e) tabs_3_long_passive_pane_srt_ParamLimits

0x254f,	// (0x00010e8e) tabs_3_long_passive_pane_srt

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp5_srt

0x3ac1,	// (0x00012400) bg_passive_tab_pane_g1_cp5_srt

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp5_srt

0x3ab8,	// (0x000123f7) bg_passive_tab_pane_g3_cp5_srt

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp5_srt_ParamLimits

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp5_srt

0x5994,	// (0x000142d3) tabs_3_long_active_pane_srt_t1_ParamLimits

0x5994,	// (0x000142d3) tabs_3_long_active_pane_srt_t1

0x3ac1,	// (0x00012400) bg_active_tab_pane_g1_cp5_srt

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp5_srt

0x3ab8,	// (0x000123f7) bg_active_tab_pane_g3_cp5_srt

0x5986,	// (0x000142c5) navi_text_pane_srt_t1

0x597e,	// (0x000142bd) navi_icon_pane_srt_g1

0x3f7d,	// (0x000128bc) midp_editing_number_pane_srt

0x3dc5,	// (0x00012704) midp_ticker_pane_srt

0x3f85,	// (0x000128c4) midp_ticker_pane_srt_g1

0x3f8d,	// (0x000128cc) midp_ticker_pane_srt_g2

0x0001,

0xf772,	// (0x0001e0b1) midp_ticker_pane_srt_g

0x3f95,	// (0x000128d4) midp_ticker_pane_srt_t1

0x596f,	// (0x000142ae) midp_editing_number_pane_t1_copy1

0x3dcd,	// (0x0001270c) listscroll_midp_pane

0x3dcd,	// (0x0001270c) midp_form_pane

0x3e35,	// (0x00012774) midp_info_popup_window_ParamLimits

0x3e35,	// (0x00012774) midp_info_popup_window

0x31ce,	// (0x00011b0d) bg_popup_sub_pane_cp50_ParamLimits

0x31ce,	// (0x00011b0d) bg_popup_sub_pane_cp50

0x4adf,	// (0x0001341e) listscroll_midp_info_pane_ParamLimits

0x4adf,	// (0x0001341e) listscroll_midp_info_pane

0x4abf,	// (0x000133fe) listscroll_form_midp_pane_ParamLimits

0x4abf,	// (0x000133fe) listscroll_form_midp_pane

0x4acb,	// (0x0001340a) scroll_bar_cp050

0x4a9f,	// (0x000133de) list_midp_pane

0x69a2,	// (0x000152e1) signal_pane_g2_cp

0x49d9,	// (0x00013318) listscroll_midp_info_pane_t1_ParamLimits

0x49d9,	// (0x00013318) listscroll_midp_info_pane_t1

0x49f1,	// (0x00013330) listscroll_midp_info_pane_t2_ParamLimits

0x49f1,	// (0x00013330) listscroll_midp_info_pane_t2

0x4a2f,	// (0x0001336e) listscroll_midp_info_pane_t3_ParamLimits

0x4a2f,	// (0x0001336e) listscroll_midp_info_pane_t3

0x4a69,	// (0x000133a8) listscroll_midp_info_pane_t4_ParamLimits

0x4a69,	// (0x000133a8) listscroll_midp_info_pane_t4

0x0003,

0xf823,	// (0x0001e162) listscroll_midp_info_pane_t_ParamLimits

0xf823,	// (0x0001e162) listscroll_midp_info_pane_t

0x328a,	// (0x00011bc9) scroll_pane_cp21

0x497d,	// (0x000132bc) form_midp_field_choice_group_pane

0x4986,	// (0x000132c5) form_midp_field_text_pane

0x49bf,	// (0x000132fe) form_midp_field_time_pane

0x49c7,	// (0x00013306) form_midp_gauge_slider_pane

0x49d0,	// (0x0001330f) form_midp_gauge_wait_pane

0x21e4,	// (0x00010b23) form_midp_image_pane

0xb6ed,	// (0x0001a02c) list_single_midp_pane_ParamLimits

0xb6ed,	// (0x0001a02c) list_single_midp_pane

0x4937,	// (0x00013276) form_midp_field_text_pane_t1

0x4739,	// (0x00013078) input_focus_pane_cp050

0x4957,	// (0x00013296) list_midp_form_text_pane

0x4906,	// (0x00013245) form_midp_field_choice_group_pane_t1

0x4914,	// (0x00013253) input_focus_pane_cp051

0x4928,	// (0x00013267) list_midp_choice_pane

0x21e4,	// (0x00010b23) status_idle_pane

0x48ea,	// (0x00013229) form_midp_field_time_pane_t1

0x21da,	// (0x00010b19) wait_anim_pane_g2_copy1

0x48f8,	// (0x00013237) form_midp_field_time_pane_t2

0x0001,

0x3edf,	// (0x0001281e) aid_navinavi_width_2_pane

0xf81e,	// (0x0001e15d) form_midp_field_time_pane_t

0x21e4,	// (0x00010b23) input_focus_pane_cp052

0x21e4,	// (0x00010b23) bg_input_focus_pane_cp040

0x48aa,	// (0x000131e9) form_midp_gauge_slider_pane_t1

0x48b8,	// (0x000131f7) form_midp_gauge_slider_pane_t2

0x48c6,	// (0x00013205) form_midp_gauge_slider_pane_t3

0x48d4,	// (0x00013213) form_midp_gauge_slider_pane_t4

0x0003,

0xf815,	// (0x0001e154) form_midp_gauge_slider_pane_t

0x48e2,	// (0x00013221) form_midp_slider_pane

0x22c4,	// (0x00010c03) bg_input_focus_pane_cp041_ParamLimits

0x22c4,	// (0x00010c03) bg_input_focus_pane_cp041

0x487a,	// (0x000131b9) form_midp_gauge_wait_pane_t1_ParamLimits

0x487a,	// (0x000131b9) form_midp_gauge_wait_pane_t1

0x488c,	// (0x000131cb) form_midp_gauge_wait_pane_t2_ParamLimits

0x488c,	// (0x000131cb) form_midp_gauge_wait_pane_t2

0x0001,

0xf810,	// (0x0001e14f) form_midp_gauge_wait_pane_t_ParamLimits

0xf810,	// (0x0001e14f) form_midp_gauge_wait_pane_t

0x489e,	// (0x000131dd) form_midp_wait_pane_ParamLimits

0x489e,	// (0x000131dd) form_midp_wait_pane

0x4844,	// (0x00013183) form_midp_image_pane_g1

0x484d,	// (0x0001318c) form_midp_image_pane_t1

0x485c,	// (0x0001319b) form_midp_image_pane_t2

0x486b,	// (0x000131aa) form_midp_image_pane_t3

0x0002,

0xf809,	// (0x0001e148) form_midp_image_pane_t

0x482c,	// (0x0001316b) list_single_midp_pane_g1

0xb6de,	// (0x0001a01d) list_single_midp_pane_t1

0x4819,	// (0x00013158) list_midp_form_item_pane_ParamLimits

0x4819,	// (0x00013158) list_midp_form_item_pane

0x3e87,	// (0x000127c6) list_midp_form_item_pane_t1

0x3e96,	// (0x000127d5) midp_ticker_pane_g1

0x3ea2,	// (0x000127e1) midp_ticker_pane_g2

0x0001,

0xf758,	// (0x0001e097) midp_ticker_pane_g

0x3eae,	// (0x000127ed) midp_ticker_pane_t1

0x5bc6,	// (0x00014505) midp_editing_number_pane_t1

0x5ba4,	// (0x000144e3) midp_editing_number_pane

0x5bb3,	// (0x000144f2) midp_ticker_pane

0x594d,	// (0x0001428c) ai_message_heading_pane

0x21e4,	// (0x00010b23) bg_popup_window_pane_cp14

0x5955,	// (0x00014294) listscroll_ai_message_pane

0x58d7,	// (0x00014216) ai_message_heading_pane_g1_ParamLimits

0x58d7,	// (0x00014216) ai_message_heading_pane_g1

0x58e3,	// (0x00014222) ai_message_heading_pane_g2_ParamLimits

0x58e3,	// (0x00014222) ai_message_heading_pane_g2

0x58ef,	// (0x0001422e) ai_message_heading_pane_g3_ParamLimits

0x58ef,	// (0x0001422e) ai_message_heading_pane_g3

0x58fb,	// (0x0001423a) ai_message_heading_pane_g4_ParamLimits

0x58fb,	// (0x0001423a) ai_message_heading_pane_g4

0x0003,

0xf94a,	// (0x0001e289) ai_message_heading_pane_g_ParamLimits

0xf94a,	// (0x0001e289) ai_message_heading_pane_g

0x5907,	// (0x00014246) ai_message_heading_pane_t1_ParamLimits

0x5907,	// (0x00014246) ai_message_heading_pane_t1

0x5921,	// (0x00014260) ai_message_heading_pane_t2_ParamLimits

0x5921,	// (0x00014260) ai_message_heading_pane_t2

0x0001,

0xf953,	// (0x0001e292) ai_message_heading_pane_t_ParamLimits

0xf953,	// (0x0001e292) ai_message_heading_pane_t

0x5933,	// (0x00014272) bg_popup_heading_pane_cp1_ParamLimits

0x5933,	// (0x00014272) bg_popup_heading_pane_cp1

0x58c5,	// (0x00014204) list_ai_message_pane_ParamLimits

0x58c5,	// (0x00014204) list_ai_message_pane

0x328a,	// (0x00011bc9) scroll_pane_cp10

0x5861,	// (0x000141a0) list_ai_message_pane_g1

0x5869,	// (0x000141a8) list_ai_message_pane_g2

0x0001,

0xf927,	// (0x0001e266) list_ai_message_pane_g

0x5871,	// (0x000141b0) list_ai_message_pane_t1_ParamLimits

0x5871,	// (0x000141b0) list_ai_message_pane_t1

0x5886,	// (0x000141c5) list_ai_message_pane_t2_ParamLimits

0x5886,	// (0x000141c5) list_ai_message_pane_t2

0x589b,	// (0x000141da) list_ai_message_pane_t3_ParamLimits

0x589b,	// (0x000141da) list_ai_message_pane_t3

0x58b0,	// (0x000141ef) list_ai_message_pane_t4_ParamLimits

0x58b0,	// (0x000141ef) list_ai_message_pane_t4

0x0003,

0xf92c,	// (0x0001e26b) list_ai_message_pane_t_ParamLimits

0xf92c,	// (0x0001e26b) list_ai_message_pane_t

0x584f,	// (0x0001418e) cell_ai_soft_ind_pane_ParamLimits

0x584f,	// (0x0001418e) cell_ai_soft_ind_pane

0x3ec0,	// (0x000127ff) cell_ai_soft_ind_pane_g1_ParamLimits

0x3ec0,	// (0x000127ff) cell_ai_soft_ind_pane_g1

0x21e4,	// (0x00010b23) grid_highlight_cp1

0x3ecd,	// (0x0001280c) text_secondary_cp56_ParamLimits

0x3ecd,	// (0x0001280c) text_secondary_cp56

0x5824,	// (0x00014163) example_general_pane_ParamLimits

0x5824,	// (0x00014163) example_general_pane

0x5830,	// (0x0001416f) example_parent_pane_g1_ParamLimits

0x5830,	// (0x0001416f) example_parent_pane_g1

0x583c,	// (0x0001417b) example_parent_pane_t1_ParamLimits

0x583c,	// (0x0001417b) example_parent_pane_t1

0xcb17,	// (0x0001b456) popup_preview_text_window_ParamLimits

0xcb17,	// (0x0001b456) popup_preview_text_window

0x3cf6,	// (0x00012635) list_single_pane_cp2_g4

0x2605,	// (0x00010f44) bg_popup_preview_window_pane_ParamLimits

0x2605,	// (0x00010f44) bg_popup_preview_window_pane

0x5586,	// (0x00013ec5) popup_preview_text_window_t1_ParamLimits

0x5586,	// (0x00013ec5) popup_preview_text_window_t1

0x55a4,	// (0x00013ee3) popup_preview_text_window_t2_ParamLimits

0x55a4,	// (0x00013ee3) popup_preview_text_window_t2

0x55ed,	// (0x00013f2c) popup_preview_text_window_t3_ParamLimits

0x55ed,	// (0x00013f2c) popup_preview_text_window_t3

0x5632,	// (0x00013f71) popup_preview_text_window_t4_ParamLimits

0x5632,	// (0x00013f71) popup_preview_text_window_t4

0x0004,

0xf8fb,	// (0x0001e23a) popup_preview_text_window_t_ParamLimits

0xf8fb,	// (0x0001e23a) popup_preview_text_window_t

0x56b0,	// (0x00013fef) scroll_pane_cp11

0x4623,	// (0x00012f62) bg_popup_preview_window_pane_g1

0x5546,	// (0x00013e85) bg_popup_preview_window_pane_g2

0x554e,	// (0x00013e8d) bg_popup_preview_window_pane_g3

0x5556,	// (0x00013e95) bg_popup_preview_window_pane_g4

0x555e,	// (0x00013e9d) bg_popup_preview_window_pane_g5

0x5566,	// (0x00013ea5) bg_popup_preview_window_pane_g6

0x556e,	// (0x00013ead) bg_popup_preview_window_pane_g7

0x5576,	// (0x00013eb5) bg_popup_preview_window_pane_g8

0xbe4f,	// (0x0001a78e) aid_popup_width_pane

0xcaf9,	// (0x0001b438) popup_midp_note_alarm_window_ParamLimits

0xcaf9,	// (0x0001b438) popup_midp_note_alarm_window

0x2f89,	// (0x000118c8) data_form_pane_ParamLimits

0xb3c6,	// (0x00019d05) form_field_data_pane_g1

0xb3ce,	// (0x00019d0d) form_field_data_pane_t1_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_ParamLimits

0xb3e6,	// (0x00019d25) data_form_wide_pane_ParamLimits

0xb3f7,	// (0x00019d36) form_field_data_wide_pane_g1

0xb403,	// (0x00019d42) form_field_data_wide_pane_t1_ParamLimits

0x2897,	// (0x000111d6) input_focus_pane_cp6_ParamLimits

0x3237,	// (0x00011b76) input_popup_find_pane_g1_ParamLimits

0x3237,	// (0x00011b76) input_popup_find_pane_g1

0xc363,	// (0x0001aca2) aid_navi_side_left_pane

0xc374,	// (0x0001acb3) aid_navi_side_right_pane

0x4f77,	// (0x000138b6) bg_popup_window_pane_cp30_ParamLimits

0x4f77,	// (0x000138b6) bg_popup_window_pane_cp30

0x4ff1,	// (0x00013930) popup_midp_note_alarm_window_g1_ParamLimits

0x4ff1,	// (0x00013930) popup_midp_note_alarm_window_g1

0x5021,	// (0x00013960) popup_midp_note_alarm_window_t1_ParamLimits

0x5021,	// (0x00013960) popup_midp_note_alarm_window_t1

0x50c2,	// (0x00013a01) popup_midp_note_alarm_window_t2_ParamLimits

0x50c2,	// (0x00013a01) popup_midp_note_alarm_window_t2

0x5170,	// (0x00013aaf) popup_midp_note_alarm_window_t3_ParamLimits

0x5170,	// (0x00013aaf) popup_midp_note_alarm_window_t3

0x5198,	// (0x00013ad7) popup_midp_note_alarm_window_t4_ParamLimits

0x5198,	// (0x00013ad7) popup_midp_note_alarm_window_t4

0x51b8,	// (0x00013af7) popup_midp_note_alarm_window_t5_ParamLimits

0x51b8,	// (0x00013af7) popup_midp_note_alarm_window_t5

0x000a,

0xf898,	// (0x0001e1d7) popup_midp_note_alarm_window_t_ParamLimits

0xf898,	// (0x0001e1d7) popup_midp_note_alarm_window_t

0x5264,	// (0x00013ba3) wait_bar_pane_cp1_ParamLimits

0x5264,	// (0x00013ba3) wait_bar_pane_cp1

0x21e4,	// (0x00010b23) wait_anim_pane_copy1

0x21e4,	// (0x00010b23) wait_border_pane_copy1

0x4c83,	// (0x000135c2) wait_border_pane_g1_copy1

0xb41d,	// (0x00019d5c) form_field_popup_pane_g1

0xb425,	// (0x00019d64) form_field_popup_pane_t1_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_cp7_ParamLimits

0x303a,	// (0x00011979) list_form_pane_ParamLimits

0xb43d,	// (0x00019d7c) form_field_popup_wide_pane_g1

0xb445,	// (0x00019d84) form_field_popup_wide_pane_t1_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_cp8_ParamLimits

0x3063,	// (0x000119a2) list_form_wide_pane_ParamLimits

0x5d73,	// (0x000146b2) aid_size_cell_graphic_pane

0xb4c8,	// (0x00019e07) data_form_pane_t1_ParamLimits

0xb72b,	// (0x0001a06a) data_form_wide_pane_t1_ParamLimits

0x41d8,	// (0x00012b17) bg_status_flat_pane

0x2224,	// (0x00010b63) title_pane_t1_ParamLimits

0x228c,	// (0x00010bcb) title_pane_t2_ParamLimits

0x22b2,	// (0x00010bf1) title_pane_t3_ParamLimits

0xf557,	// (0x0001de96) title_pane_t_ParamLimits

0x36fd,	// (0x0001203c) level_1_signal_ParamLimits

0x370a,	// (0x00012049) level_2_signal_ParamLimits

0x3717,	// (0x00012056) level_3_signal_ParamLimits

0x3724,	// (0x00012063) level_4_signal_ParamLimits

0x3731,	// (0x00012070) level_5_signal_ParamLimits

0x373e,	// (0x0001207d) level_6_signal_ParamLimits

0x374b,	// (0x0001208a) level_7_signal_ParamLimits

0x36fd,	// (0x0001203c) level_1_battery_ParamLimits

0x370a,	// (0x00012049) level_2_battery_ParamLimits

0x3717,	// (0x00012056) level_3_battery_ParamLimits

0x3724,	// (0x00012063) level_4_battery_ParamLimits

0x3731,	// (0x00012070) level_5_battery_ParamLimits

0x373e,	// (0x0001207d) level_6_battery_ParamLimits

0x374b,	// (0x0001208a) level_7_battery_ParamLimits

0x4e8e,	// (0x000137cd) bg_status_flat_pane_g1

0x4e96,	// (0x000137d5) bg_status_flat_pane_g2

0x4e9e,	// (0x000137dd) bg_status_flat_pane_g3

0x4ea6,	// (0x000137e5) bg_status_flat_pane_g4

0x4eae,	// (0x000137ed) bg_status_flat_pane_g5

0x4eb6,	// (0x000137f5) bg_status_flat_pane_g6

0x4ebe,	// (0x000137fd) bg_status_flat_pane_g7

0x22da,	// (0x00010c19) tabs_3_active_pane_t1_ParamLimits

0x22da,	// (0x00010c19) tabs_3_passive_pane_t1_ParamLimits

0x22f4,	// (0x00010c33) tabs_4_active_pane_t1_ParamLimits

0x22f4,	// (0x00010c33) tabs_4_1_passive_pane_t1_ParamLimits

0x32ca,	// (0x00011c09) tabs_2_active_pane_t1_ParamLimits

0x32ca,	// (0x00011c09) tabs_2_passive_pane_t1_ParamLimits

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp4_ParamLimits

0x32ea,	// (0x00011c29) tabs_2_long_active_pane_t1_ParamLimits

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp4_ParamLimits

0xcd68,	// (0x0001b6a7) list_single_midp_graphic_pane_t1_ParamLimits

0x32dc,	// (0x00011c1b) bg_active_tab_pane_cp5_ParamLimits

0x3309,	// (0x00011c48) tabs_3_long_active_pane_t1_ParamLimits

0x32fd,	// (0x00011c3c) bg_passive_tab_pane_cp5_ParamLimits

0xcd68,	// (0x0001b6a7) list_single_midp_graphic_pane_t1

0x41d8,	// (0x00012b17) bg_status_flat_pane_ParamLimits

0x429b,	// (0x00012bda) indicator_pane_cp2_ParamLimits

0x429b,	// (0x00012bda) indicator_pane_cp2

0x43c0,	// (0x00012cff) navi_pane_srt_ParamLimits

0x43c0,	// (0x00012cff) navi_pane_srt

0x43e4,	// (0x00012d23) popup_clock_digital_analogue_window_cp1

0x23b5,	// (0x00010cf4) indicator_pane_t1

0x3dc5,	// (0x00012704) copy_highlight_pane

0x3dc5,	// (0x00012704) cursor_graphics_pane

0x3dc5,	// (0x00012704) graphic_within_text_pane

0x3dc5,	// (0x00012704) link_highlight_pane

0x5673,	// (0x00013fb2) popup_preview_text_window_t5_ParamLimits

0x5673,	// (0x00013fb2) popup_preview_text_window_t5

0x3ee7,	// (0x00012826) cursor_digital_pane

0x3ee7,	// (0x00012826) cursor_primary_pane

0x3ef8,	// (0x00012837) cursor_primary_small_pane

0x3f00,	// (0x0001283f) cursor_secondary_pane

0x3f08,	// (0x00012847) cursor_title_pane

0x3ee7,	// (0x00012826) link_highlight_digital_pane

0x3eef,	// (0x0001282e) link_highlight_primary_pane

0x3ef8,	// (0x00012837) link_highlight_primary_small_pane

0x3f00,	// (0x0001283f) link_highlight_secondary_pane

0x3f08,	// (0x00012847) link_highlight_title_pane

0x3ee7,	// (0x00012826) copy_highlight_digital_pane

0x3ee7,	// (0x00012826) copy_highlight_primary_pane

0x3ef8,	// (0x00012837) copy_highlight_primary_small_pane

0x3f00,	// (0x0001283f) copy_highlight_secondary_pane

0x3f08,	// (0x00012847) copy_highlight_title_pane

0x3f00,	// (0x0001283f) graphic_text_digital_pane

0x4f26,	// (0x00013865) graphic_text_primary_pane

0x4f2f,	// (0x0001386e) graphic_text_primary_small_pane

0x3ef8,	// (0x00012837) graphic_text_secondary_pane

0x3ee7,	// (0x00012826) graphic_text_title_pane

0x3f10,	// (0x0001284f) cursor_primary_pane_g1

0x4f18,	// (0x00013857) cursor_text_primary_t1

0x4f02,	// (0x00013841) cursor_primary_small_pane_g1

0x4f0a,	// (0x00013849) cursor_text_primary_small_t1

0x4eec,	// (0x0001382b) cursor_primary_small_pane_g1_copy1

0x4ef4,	// (0x00013833) cursor_text_primary_small_t1_copy1

0x4ed6,	// (0x00013815) cursor_text_title_t1

0x4ee4,	// (0x00013823) cursor_title_pane_g1

0x3f10,	// (0x0001284f) cursor_digital_pane_g1

0x3f18,	// (0x00012857) cursor_text_digital_t1

0x3f26,	// (0x00012865) link_highlight_primary_pane_g1

0x4e7f,	// (0x000137be) link_highlight_primary_pane_t1

0x3f26,	// (0x00012865) link_highlight_primary_small_pane_g1

0x3f2e,	// (0x0001286d) link_highlight_primary_small_pane_t1

0x3f3d,	// (0x0001287c) link_highlight_secondary_pane_g1

0x3f45,	// (0x00012884) link_highlight_secondary_pane_t1

0x4de4,	// (0x00013723) link_highlight_title_pane_g1

0x4dfb,	// (0x0001373a) link_highlight_title_pane_t1

0x4de4,	// (0x00013723) link_highlight_digital_pane_g1

0x4dec,	// (0x0001372b) link_highlight_digital_pane_t1

0x4c9e,	// (0x000135dd) copy_highlight_primary_pane_g1

0x4cc4,	// (0x00013603) copy_highlight_primary_pane_t1

0x4c9e,	// (0x000135dd) copy_highlight_primary_small_pane_g1

0x4cb5,	// (0x000135f4) copy_highlight_primary_small_pane_t1

0x3f54,	// (0x00012893) copy_highlight_secondary_pane_g1

0x3f5c,	// (0x0001289b) copy_highlight_secondary_pane_t1

0x4c9e,	// (0x000135dd) copy_highlight_title_pane_g1

0x4ca6,	// (0x000135e5) copy_highlight_title_pane_t1

0x4c9e,	// (0x000135dd) copy_highlight_digital_pane_g1

0x5f39,	// (0x00014878) copy_highlight_digital_pane_t1

0x5e8d,	// (0x000147cc) graphic_text_primary_pane_g1

0x5f1d,	// (0x0001485c) graphic_text_primary_pane_t1

0x5f2b,	// (0x0001486a) graphic_text_primary_pane_t2

0x0001,

0xf9c7,	// (0x0001e306) graphic_text_primary_pane_t

0x5ef9,	// (0x00014838) graphic_text_primary_small_pane_g1

0x5f01,	// (0x00014840) graphic_text_primary_small_pane_t1

0x5f0f,	// (0x0001484e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c2,	// (0x0001e301) graphic_text_primary_small_pane_t

0x5ed5,	// (0x00014814) graphic_text_secondary_pane_g1

0x5edd,	// (0x0001481c) graphic_text_secondary_pane_t1

0x5eeb,	// (0x0001482a) graphic_text_secondary_pane_t2

0x0001,

0xf9bd,	// (0x0001e2fc) graphic_text_secondary_pane_t

0x5eb1,	// (0x000147f0) graphic_text_title_pane_g1

0x5eb9,	// (0x000147f8) graphic_text_title_pane_t1

0x5ec7,	// (0x00014806) graphic_text_title_pane_t2

0x0001,

0xf9b8,	// (0x0001e2f7) graphic_text_title_pane_t

0x5e8d,	// (0x000147cc) graphic_text_digital_pane_g1

0x5e95,	// (0x000147d4) graphic_text_digital_pane_t1

0x5ea3,	// (0x000147e2) graphic_text_digital_pane_t2

0x0001,

0xf9b3,	// (0x0001e2f2) graphic_text_digital_pane_t

0x22c4,	// (0x00010c03) navi_icon_pane_srt_ParamLimits

0x22c4,	// (0x00010c03) navi_icon_pane_srt

0x21e4,	// (0x00010b23) navi_midp_pane_srt

0x21e4,	// (0x00010b23) navi_navi_pane_srt

0x22c4,	// (0x00010c03) navi_text_pane_srt_ParamLimits

0x22c4,	// (0x00010c03) navi_text_pane_srt

0x5e58,	// (0x00014797) navi_navi_icon_text_pane_srt

0x5e72,	// (0x000147b1) navi_navi_pane_srt_g1_ParamLimits

0x5e72,	// (0x000147b1) navi_navi_pane_srt_g1

0x5e60,	// (0x0001479f) navi_navi_pane_srt_g2_ParamLimits

0x5e60,	// (0x0001479f) navi_navi_pane_srt_g2

0x0001,

0xf9ae,	// (0x0001e2ed) navi_navi_pane_srt_g_ParamLimits

0xf9ae,	// (0x0001e2ed) navi_navi_pane_srt_g

0x5e84,	// (0x000147c3) navi_navi_tabs_pane_srt

0x5e58,	// (0x00014797) navi_navi_text_pane_srt

0x5e58,	// (0x00014797) navi_navi_volume_pane_srt

0x5e49,	// (0x00014788) navi_navi_text_pane_srt_t1

0xd0ca,	// (0x0001ba09) navi_navi_volume_pane_srt_g1

0xd0d2,	// (0x0001ba11) volume_small_pane_srt_ParamLimits

0xd0d2,	// (0x0001ba11) volume_small_pane_srt

0xc61e,	// (0x0001af5d) volume_small_pane_srt_g1_ParamLimits

0xc61e,	// (0x0001af5d) volume_small_pane_srt_g1

0xc62e,	// (0x0001af6d) volume_small_pane_srt_g2_ParamLimits

0xc62e,	// (0x0001af6d) volume_small_pane_srt_g2

0xc63f,	// (0x0001af7e) volume_small_pane_srt_g3_ParamLimits

0xc63f,	// (0x0001af7e) volume_small_pane_srt_g3

0xc650,	// (0x0001af8f) volume_small_pane_srt_g4_ParamLimits

0xc650,	// (0x0001af8f) volume_small_pane_srt_g4

0xc661,	// (0x0001afa0) volume_small_pane_srt_g5_ParamLimits

0xc661,	// (0x0001afa0) volume_small_pane_srt_g5

0xc672,	// (0x0001afb1) volume_small_pane_srt_g6_ParamLimits

0xc672,	// (0x0001afb1) volume_small_pane_srt_g6

0xc683,	// (0x0001afc2) volume_small_pane_srt_g7_ParamLimits

0xc683,	// (0x0001afc2) volume_small_pane_srt_g7

0xc694,	// (0x0001afd3) volume_small_pane_srt_g8_ParamLimits

0xc694,	// (0x0001afd3) volume_small_pane_srt_g8

0xc6a5,	// (0x0001afe4) volume_small_pane_srt_g9_ParamLimits

0xc6a5,	// (0x0001afe4) volume_small_pane_srt_g9

0xc6b6,	// (0x0001aff5) volume_small_pane_srt_g10_ParamLimits

0xc6b6,	// (0x0001aff5) volume_small_pane_srt_g10

0x0009,

0xf75d,	// (0x0001e09c) volume_small_pane_srt_g_ParamLimits

0xf75d,	// (0x0001e09c) volume_small_pane_srt_g

0x26ae,	// (0x00010fed) query_popup_data_pane_cp2

0x5e2f,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5e2f,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1

0x4f26,	// (0x00013865) navi_tabs_2_long_pane_srt

0x4f26,	// (0x00013865) navi_tabs_2_pane_srt

0x4f26,	// (0x00013865) navi_tabs_3_long_pane_srt

0x4f26,	// (0x00013865) navi_tabs_3_pane_srt

0x4f26,	// (0x00013865) navi_tabs_4_pane_srt

0xd0aa,	// (0x0001b9e9) tabs_2_active_pane_srt_ParamLimits

0xd0aa,	// (0x0001b9e9) tabs_2_active_pane_srt

0xd0ba,	// (0x0001b9f9) tabs_2_passive_pane_srt_ParamLimits

0xd0ba,	// (0x0001b9f9) tabs_2_passive_pane_srt

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp1_srt

0x5e04,	// (0x00014743) bg_passive_tab_pane_g1_cp1_srt

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp1_srt

0x5dfb,	// (0x0001473a) bg_passive_tab_pane_g3_cp1_srt

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp1_srt_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp1_srt

0x5e0d,	// (0x0001474c) tabs_2_active_pane_srt_g1

0x5e15,	// (0x00014754) tabs_2_active_pane_srt_t1_ParamLimits

0x5e15,	// (0x00014754) tabs_2_active_pane_srt_t1

0x5e04,	// (0x00014743) bg_active_tab_pane_g1_cp1_srt

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp1_srt

0x5dfb,	// (0x0001473a) bg_active_tab_pane_g3_cp1_srt

0xd077,	// (0x0001b9b6) tabs_3_active_pane_srt_ParamLimits

0xd077,	// (0x0001b9b6) tabs_3_active_pane_srt

0xd088,	// (0x0001b9c7) tabs_3_passive_pane_cp_srt_ParamLimits

0xd088,	// (0x0001b9c7) tabs_3_passive_pane_cp_srt

0xd099,	// (0x0001b9d8) tabs_3_passive_pane_srt_ParamLimits

0xd099,	// (0x0001b9d8) tabs_3_passive_pane_srt

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4107,	// (0x00012a46) bg_passive_tab_pane_cp2_srt

0x3f74,	// (0x000128b3) bg_passive_tab_pane_g1_cp2_srt

0x3a32,	// (0x00012371) bg_passive_tab_pane_g2_cp2_srt

0x3f6b,	// (0x000128aa) bg_passive_tab_pane_g3_cp2_srt

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp2_srt_ParamLimits

0x22c4,	// (0x00010c03) bg_active_tab_pane_cp2_srt

0x5de1,	// (0x00014720) tabs_3_active_pane_srt_g1

0x5de9,	// (0x00014728) tabs_3_active_pane_srt_t1_ParamLimits

0x5de9,	// (0x00014728) tabs_3_active_pane_srt_t1

0x3f74,	// (0x000128b3) bg_active_tab_pane_g1_cp2_srt

0x3a32,	// (0x00012371) bg_active_tab_pane_g2_cp2_srt

0x3f6b,	// (0x000128aa) bg_active_tab_pane_g3_cp2_srt

0xd02f,	// (0x0001b96e) tabs_4_active_pane_srt_ParamLimits

0xd02f,	// (0x0001b96e) tabs_4_active_pane_srt

0xd041,	// (0x0001b980) tabs_4_passive_pane_cp2_srt_ParamLimits

0xd041,	// (0x0001b980) tabs_4_passive_pane_cp2_srt

0xc822,	// (0x0001b161) aid_size_cell_toolbar

0x32fd,	// (0x00011c3c) main_idle_act_pane_ParamLimits

0xc99f,	// (0x0001b2de) popup_large_graphic_colour_window_ParamLimits

0xcc64,	// (0x0001b5a3) popup_toolbar_window_ParamLimits

0xcc64,	// (0x0001b5a3) popup_toolbar_window

0x5be7,	// (0x00014526) list_single_graphic_2heading_pane_ParamLimits

0x5be7,	// (0x00014526) list_single_graphic_2heading_pane

0x34b9,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane

0x34cb,	// (0x00011e0a) aid_size_cell_apps_grid_prt_pane

0x4107,	// (0x00012a46) bg_wml_button_pane_cp1_ParamLimits

0x4107,	// (0x00012a46) bg_wml_button_pane_cp1

0x4937,	// (0x00013276) form_midp_field_text_pane_t1_ParamLimits

0x4739,	// (0x00013078) input_focus_pane_cp050_ParamLimits

0x4957,	// (0x00013296) list_midp_form_text_pane_ParamLimits

0x4914,	// (0x00013253) input_focus_pane_cp051_ParamLimits

0x4928,	// (0x00013267) list_midp_choice_pane_ParamLimits

0x47e9,	// (0x00013128) list_single_2graphic_pane_cp3_ParamLimits

0x47e9,	// (0x00013128) list_single_2graphic_pane_cp3

0x47fb,	// (0x0001313a) list_single_midp_graphic_pane_ParamLimits

0x47fb,	// (0x0001313a) list_single_midp_graphic_pane

0xaf16,	// (0x00019855) list_single_graphic_2heading_pane_g1_ParamLimits

0xaf16,	// (0x00019855) list_single_graphic_2heading_pane_g1

0xb5ee,	// (0x00019f2d) list_single_graphic_2heading_pane_g4_ParamLimits

0xb5ee,	// (0x00019f2d) list_single_graphic_2heading_pane_g4

0xb5fa,	// (0x00019f39) list_single_graphic_2heading_pane_g5_ParamLimits

0xb5fa,	// (0x00019f39) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b0,	// (0x0001e0ef) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b0,	// (0x0001e0ef) list_single_graphic_2heading_pane_g

0xb606,	// (0x00019f45) list_single_graphic_2heading_pane_t1_ParamLimits

0xb606,	// (0x00019f45) list_single_graphic_2heading_pane_t1

0xb61a,	// (0x00019f59) list_single_graphic_2heading_pane_t2_ParamLimits

0xb61a,	// (0x00019f59) list_single_graphic_2heading_pane_t2

0xb634,	// (0x00019f73) list_single_graphic_2heading_pane_t3_ParamLimits

0xb634,	// (0x00019f73) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b7,	// (0x0001e0f6) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b7,	// (0x0001e0f6) list_single_graphic_2heading_pane_t

0x4535,	// (0x00012e74) bg_popup_sub_pane_cp2

0x455f,	// (0x00012e9e) grid_toobar_pane

0xcd01,	// (0x0001b640) cell_toolbar_pane_ParamLimits

0xcd01,	// (0x0001b640) cell_toolbar_pane

0x45c7,	// (0x00012f06) cell_toolbar_pane_g1_ParamLimits

0x45c7,	// (0x00012f06) cell_toolbar_pane_g1

0x45db,	// (0x00012f1a) cell_toolbar_pane_g2_ParamLimits

0x45db,	// (0x00012f1a) cell_toolbar_pane_g2

0x0001,

0xf7be,	// (0x0001e0fd) cell_toolbar_pane_g_ParamLimits

0xf7be,	// (0x0001e0fd) cell_toolbar_pane_g

0x45fd,	// (0x00012f3c) grid_highlight_pane_cp2_ParamLimits

0x45fd,	// (0x00012f3c) grid_highlight_pane_cp2

0x4617,	// (0x00012f56) toolbar_button_pane

0x4623,	// (0x00012f62) toolbar_button_pane_g1

0x4633,	// (0x00012f72) toolbar_button_pane_g2

0x462b,	// (0x00012f6a) toolbar_button_pane_g3

0x4643,	// (0x00012f82) toolbar_button_pane_g4

0x463b,	// (0x00012f7a) toolbar_button_pane_g5

0x464b,	// (0x00012f8a) toolbar_button_pane_g6

0x4653,	// (0x00012f92) toolbar_button_pane_g7

0x4663,	// (0x00012fa2) toolbar_button_pane_g8

0x465b,	// (0x00012f9a) toolbar_button_pane_g9

0x0009,

0xf7c3,	// (0x0001e102) toolbar_button_pane_g

0xcd33,	// (0x0001b672) list_single_2graphic_pane_g1_cp3_ParamLimits

0xcd33,	// (0x0001b672) list_single_2graphic_pane_g1_cp3

0xcd3f,	// (0x0001b67e) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcd3f,	// (0x0001b67e) list_single_2graphic_pane_g2_cp3

0x3c03,	// (0x00012542) list_single_2graphic_pane_g3_cp3

0x8895,	// (0x000171d4) list_single_2graphic_pane_g4_cp3_ParamLimits

0x8895,	// (0x000171d4) list_single_2graphic_pane_g4_cp3

0xcd4e,	// (0x0001b68d) list_single_2graphic_pane_t1_cp3_ParamLimits

0xcd4e,	// (0x0001b68d) list_single_2graphic_pane_t1_cp3

0x3bf7,	// (0x00012536) list_single_midp_graphic_pane_g2_ParamLimits

0x3bf7,	// (0x00012536) list_single_midp_graphic_pane_g2

0xc82a,	// (0x0001b169) aid_zoom_text_primary

0xb5de,	// (0x00019f1d) aid_zoom_text_secondary

0x4023,	// (0x00012962) status_small_pane_g7_ParamLimits

0x4023,	// (0x00012962) status_small_pane_g7

0x4046,	// (0x00012985) status_small_pane_t1_ParamLimits

0x21fb,	// (0x00010b3a) title_pane_g2

0x0003,

0xf54e,	// (0x0001de8d) title_pane_g

0x2750,	// (0x0001108f) aid_size_cell_colour_1_pane_ParamLimits

0x2750,	// (0x0001108f) aid_size_cell_colour_1_pane

0x2764,	// (0x000110a3) aid_size_cell_colour_2_pane_ParamLimits

0x2764,	// (0x000110a3) aid_size_cell_colour_2_pane

0x2778,	// (0x000110b7) aid_size_cell_colour_3_pane_ParamLimits

0x2778,	// (0x000110b7) aid_size_cell_colour_3_pane

0x278c,	// (0x000110cb) aid_size_cell_colour_4_pane_ParamLimits

0x278c,	// (0x000110cb) aid_size_cell_colour_4_pane

0xc29f,	// (0x0001abde) title_pane_stacon_g1_ParamLimits

0xc29f,	// (0x0001abde) title_pane_stacon_g1

0x4d1b,	// (0x0001365a) popup_note_wait_window_g3_ParamLimits

0x4d1b,	// (0x0001365a) popup_note_wait_window_g3

0x4d91,	// (0x000136d0) popup_note_wait_window_t5_ParamLimits

0x4d91,	// (0x000136d0) popup_note_wait_window_t5

0x21e4,	// (0x00010b23) main_feb_china_hwr_fs_writing_pane

0xc8ac,	// (0x0001b1eb) popup_feb_china_hwr_fs_window_ParamLimits

0xc8ac,	// (0x0001b1eb) popup_feb_china_hwr_fs_window

0xcd7e,	// (0x0001b6bd) aid_size_cell_hwr_fs_ParamLimits

0xcd7e,	// (0x0001b6bd) aid_size_cell_hwr_fs

0x4739,	// (0x00013078) bg_popup_sub_pane_cp3_ParamLimits

0x4739,	// (0x00013078) bg_popup_sub_pane_cp3

0xcd93,	// (0x0001b6d2) grid_hwr_fs_pane_ParamLimits

0xcd93,	// (0x0001b6d2) grid_hwr_fs_pane

0xcda7,	// (0x0001b6e6) linegrid_hwr_fs_pane_ParamLimits

0xcda7,	// (0x0001b6e6) linegrid_hwr_fs_pane

0xcdb7,	// (0x0001b6f6) cell_hwr_fs_pane_ParamLimits

0xcdb7,	// (0x0001b6f6) cell_hwr_fs_pane

0x4745,	// (0x00013084) linegrid_hwr_fs_pane_g1_ParamLimits

0x4745,	// (0x00013084) linegrid_hwr_fs_pane_g1

0x4751,	// (0x00013090) linegrid_hwr_fs_pane_g2_ParamLimits

0x4751,	// (0x00013090) linegrid_hwr_fs_pane_g2

0x4763,	// (0x000130a2) linegrid_hwr_fs_pane_g3_ParamLimits

0x4763,	// (0x000130a2) linegrid_hwr_fs_pane_g3

0xcdd5,	// (0x0001b714) linegrid_hwr_fs_pane_g4_ParamLimits

0xcdd5,	// (0x0001b714) linegrid_hwr_fs_pane_g4

0xcdef,	// (0x0001b72e) linegrid_hwr_fs_pane_g5_ParamLimits

0xcdef,	// (0x0001b72e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7ee,	// (0x0001e12d) linegrid_hwr_fs_pane_g_ParamLimits

0xf7ee,	// (0x0001e12d) linegrid_hwr_fs_pane_g

0x476f,	// (0x000130ae) cell_hwr_fs_pane_g1_ParamLimits

0x476f,	// (0x000130ae) cell_hwr_fs_pane_g1

0x4476,	// (0x00012db5) cell_hwr_fs_pane_g2_ParamLimits

0x4476,	// (0x00012db5) cell_hwr_fs_pane_g2

0x4785,	// (0x000130c4) cell_hwr_fs_pane_g3_ParamLimits

0x4785,	// (0x000130c4) cell_hwr_fs_pane_g3

0x4792,	// (0x000130d1) cell_hwr_fs_pane_g4_ParamLimits

0x4792,	// (0x000130d1) cell_hwr_fs_pane_g4

0x0003,

0xf7f9,	// (0x0001e138) cell_hwr_fs_pane_g_ParamLimits

0xf7f9,	// (0x0001e138) cell_hwr_fs_pane_g

0xce05,	// (0x0001b744) cell_hwr_fs_pane_t1

0x21e4,	// (0x00010b23) grid_highlight_pane_cp6

0x21e4,	// (0x00010b23) main_idle_act2_pane

0x3271,	// (0x00011bb0) aid_inside_area_popup_secondary

0x5398,	// (0x00013cd7) aid_inside_area_window_primary_ParamLimits

0x5398,	// (0x00013cd7) aid_inside_area_window_primary

0x5f48,	// (0x00014887) ai2_news_ticker_pane

0x5f50,	// (0x0001488f) aid_size_cell_ai1_link_ParamLimits

0x5f50,	// (0x0001488f) aid_size_cell_ai1_link

0x5f6a,	// (0x000148a9) popup_ai2_data_window_ParamLimits

0x5f6a,	// (0x000148a9) popup_ai2_data_window

0x5f7e,	// (0x000148bd) popup_ai2_link_window_ParamLimits

0x5f7e,	// (0x000148bd) popup_ai2_link_window

0x4739,	// (0x00013078) bg_popup_sub_pane_cp4_ParamLimits

0x4739,	// (0x00013078) bg_popup_sub_pane_cp4

0x5f92,	// (0x000148d1) grid_ai2_link_pane_ParamLimits

0x5f92,	// (0x000148d1) grid_ai2_link_pane

0x5fa9,	// (0x000148e8) popup_ai2_link_window_g1_ParamLimits

0x5fa9,	// (0x000148e8) popup_ai2_link_window_g1

0x5fb5,	// (0x000148f4) popup_ai2_link_window_g2_ParamLimits

0x5fb5,	// (0x000148f4) popup_ai2_link_window_g2

0x0001,

0xf9cc,	// (0x0001e30b) popup_ai2_link_window_g_ParamLimits

0xf9cc,	// (0x0001e30b) popup_ai2_link_window_g

0x5fc4,	// (0x00014903) ai2_mp_button_pane

0x5fcc,	// (0x0001490b) ai2_mp_volume_pane

0x4914,	// (0x00013253) bg_popup_sub_pane_cp5_ParamLimits

0x4914,	// (0x00013253) bg_popup_sub_pane_cp5

0x5fd4,	// (0x00014913) heading_ai2_gene_pane_ParamLimits

0x5fd4,	// (0x00014913) heading_ai2_gene_pane

0x5fe0,	// (0x0001491f) list_ai2_gene_pane_ParamLimits

0x5fe0,	// (0x0001491f) list_ai2_gene_pane

0x6028,	// (0x00014967) cell_ai2_link_pane_ParamLimits

0x6028,	// (0x00014967) cell_ai2_link_pane

0x603e,	// (0x0001497d) cell_ai2_link_pane_g1

0x21e4,	// (0x00010b23) grid_highlight_pane_cp7

0xd0e7,	// (0x0001ba26) ai2_mp_volume_pane_g1

0x6115,	// (0x00014a54) ai2_mp_volume_pane_g2

0x6082,	// (0x000149c1) list_ai2_gene_pane_t1

0x610d,	// (0x00014a4c) ai2_mp_volume_pane_g3

0x0002,

0xf9e5,	// (0x0001e324) ai2_mp_volume_pane_g

0xd0ef,	// (0x0001ba2e) volume_small_pane_cp3

0x611d,	// (0x00014a5c) aid_size_cell_ai2_button

0x6125,	// (0x00014a64) grid_ai2_button_pane

0x612e,	// (0x00014a6d) cell_ai2_button_pane_ParamLimits

0x612e,	// (0x00014a6d) cell_ai2_button_pane

0x21da,	// (0x00010b19) cell_ai2_button_pane_g1

0x21e4,	// (0x00010b23) grid_highlight_pane_cp8

0x60cd,	// (0x00014a0c) ai2_gene_pane_t1_ParamLimits

0x60cd,	// (0x00014a0c) ai2_gene_pane_t1

0xc818,	// (0x0001b157) aid_height_parent_landscape

0x5a00,	// (0x0001433f) aid_height_set_list

0x5a11,	// (0x00014350) aid_size_parent

0x5d73,	// (0x000146b2) aid_size_cell_graphic_pane_ParamLimits

0x5ff0,	// (0x0001492f) popup_ai2_data_window_g1_ParamLimits

0x5ff0,	// (0x0001492f) popup_ai2_data_window_g1

0x5ffc,	// (0x0001493b) ai2_news_ticker_pane_g1

0x6004,	// (0x00014943) ai2_news_ticker_pane_g2

0x0001,

0xf9d1,	// (0x0001e310) ai2_news_ticker_pane_g

0x600c,	// (0x0001494b) ai2_news_ticker_pane_t1

0x601a,	// (0x00014959) ai2_news_ticker_pane_t2

0x0001,

0xf9d6,	// (0x0001e315) ai2_news_ticker_pane_t

0x6047,	// (0x00014986) heading_ai2_gene_pane_g1

0x604f,	// (0x0001498e) heading_ai2_gene_pane_t1_ParamLimits

0x604f,	// (0x0001498e) heading_ai2_gene_pane_t1

0x6064,	// (0x000149a3) list_highlight_pane_cp6

0x606c,	// (0x000149ab) ai2_gene_pane_ParamLimits

0x606c,	// (0x000149ab) ai2_gene_pane

0x6090,	// (0x000149cf) list_ai2_gene_pane_t2

0x0001,

0xf9db,	// (0x0001e31a) list_ai2_gene_pane_t

0x609e,	// (0x000149dd) list_highlight_pane_cp8_ParamLimits

0x609e,	// (0x000149dd) list_highlight_pane_cp8

0x60af,	// (0x000149ee) ai2_gene_pane_g1_ParamLimits

0x60af,	// (0x000149ee) ai2_gene_pane_g1

0x60c1,	// (0x00014a00) ai2_gene_pane_g2_ParamLimits

0x60c1,	// (0x00014a00) ai2_gene_pane_g2

0x0001,

0xf9e0,	// (0x0001e31f) ai2_gene_pane_g_ParamLimits

0xf9e0,	// (0x0001e31f) ai2_gene_pane_g

0x2a20,	// (0x0001135f) scroll_pane_cp12

0xc7d5,	// (0x0001b114) control_pane_t3_ParamLimits

0xc7d5,	// (0x0001b114) control_pane_t3

0x4037,	// (0x00012976) status_small_pane_g8_ParamLimits

0x4037,	// (0x00012976) status_small_pane_g8

0xc96c,	// (0x0001b2ab) popup_find_window_ParamLimits

0xcb0b,	// (0x0001b44a) popup_note_image_window_ParamLimits

0xaf16,	// (0x00019855) list_double2_graphic_pane_vc_g1_ParamLimits

0xaf16,	// (0x00019855) list_double2_graphic_pane_vc_g1

0xb5ee,	// (0x00019f2d) list_double2_graphic_pane_vc_g2_ParamLimits

0xb5ee,	// (0x00019f2d) list_double2_graphic_pane_vc_g2

0xb5fa,	// (0x00019f39) list_double2_graphic_pane_vc_g3_ParamLimits

0xb5fa,	// (0x00019f39) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b0,	// (0x0001e0ef) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b0,	// (0x0001e0ef) list_double2_graphic_pane_vc_g

0xb64c,	// (0x00019f8b) list_double2_graphic_pane_vc_t1_ParamLimits

0xb64c,	// (0x00019f8b) list_double2_graphic_pane_vc_t1

0xb5ee,	// (0x00019f2d) list_single_heading_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_single_heading_pane_vc_g1

0xb5fa,	// (0x00019f39) list_single_heading_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_single_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_single_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_single_heading_pane_vc_g

0xb662,	// (0x00019fa1) list_single_heading_pane_vc_t1_ParamLimits

0xb662,	// (0x00019fa1) list_single_heading_pane_vc_t1

0xb678,	// (0x00019fb7) list_single_heading_pane_vc_t2_ParamLimits

0xb678,	// (0x00019fb7) list_single_heading_pane_vc_t2

0x0001,

0xf7dd,	// (0x0001e11c) list_single_heading_pane_vc_t_ParamLimits

0xf7dd,	// (0x0001e11c) list_single_heading_pane_vc_t

0x4693,	// (0x00012fd2) list_setting_number_pane_vc_g1_ParamLimits

0x4693,	// (0x00012fd2) list_setting_number_pane_vc_g1

0x469f,	// (0x00012fde) list_setting_number_pane_vc_g2_ParamLimits

0x469f,	// (0x00012fde) list_setting_number_pane_vc_g2

0x0001,

0xf7e2,	// (0x0001e121) list_setting_number_pane_vc_g_ParamLimits

0xf7e2,	// (0x0001e121) list_setting_number_pane_vc_g

0xb68a,	// (0x00019fc9) list_setting_number_pane_vc_t1_ParamLimits

0xb68a,	// (0x00019fc9) list_setting_number_pane_vc_t1

0xb69e,	// (0x00019fdd) list_setting_number_pane_vc_t2_ParamLimits

0xb69e,	// (0x00019fdd) list_setting_number_pane_vc_t2

0xb6b6,	// (0x00019ff5) list_setting_number_pane_vc_t3_ParamLimits

0xb6b6,	// (0x00019ff5) list_setting_number_pane_vc_t3

0x0002,

0xf7e7,	// (0x0001e126) list_setting_number_pane_vc_t_ParamLimits

0xf7e7,	// (0x0001e126) list_setting_number_pane_vc_t

0xb6ce,	// (0x0001a00d) set_value_pane_vc_ParamLimits

0xb6ce,	// (0x0001a00d) set_value_pane_vc

0x5be7,	// (0x00014526) list_double2_graphic_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double2_graphic_pane_vc

0x5be7,	// (0x00014526) list_double2_large_graphic_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double2_large_graphic_pane_vc

0x5be7,	// (0x00014526) list_double2_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double2_pane_vc

0x5be7,	// (0x00014526) list_double_graphic_heading_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_graphic_heading_pane_vc

0x5be7,	// (0x00014526) list_double_graphic_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_graphic_pane_vc

0x5be7,	// (0x00014526) list_double_heading_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_heading_pane_vc

0x5bf8,	// (0x00014537) list_double_large_graphic_pane_vc_ParamLimits

0x5bf8,	// (0x00014537) list_double_large_graphic_pane_vc

0x5be7,	// (0x00014526) list_double_number_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_number_pane_vc

0x5be7,	// (0x00014526) list_double_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_pane_vc

0x5be7,	// (0x00014526) list_double_time_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_double_time_pane_vc

0x5be7,	// (0x00014526) list_setting_number_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_setting_number_pane_vc

0x5be7,	// (0x00014526) list_setting_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_setting_pane_vc

0x5be7,	// (0x00014526) list_single_graphic_heading_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_single_graphic_heading_pane_vc

0x5be7,	// (0x00014526) list_single_heading_pane_vc_ParamLimits

0x5be7,	// (0x00014526) list_single_heading_pane_vc

0x5c14,	// (0x00014553) list_single_number_heading_pane_vc_ParamLimits

0x5c14,	// (0x00014553) list_single_number_heading_pane_vc

0xb76d,	// (0x0001a0ac) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xb76d,	// (0x0001a0ac) list_double_graphic_heading_pane_vc_g1

0xb5ee,	// (0x00019f2d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xb5ee,	// (0x00019f2d) list_double_graphic_heading_pane_vc_g2

0xb5fa,	// (0x00019f39) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xb5fa,	// (0x00019f39) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ec,	// (0x0001e32b) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ec,	// (0x0001e32b) list_double_graphic_heading_pane_vc_g

0xb779,	// (0x0001a0b8) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xb779,	// (0x0001a0b8) list_double_graphic_heading_pane_vc_t1

0xb78f,	// (0x0001a0ce) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xb78f,	// (0x0001a0ce) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f3,	// (0x0001e332) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f3,	// (0x0001e332) list_double_graphic_heading_pane_vc_t

0x4693,	// (0x00012fd2) list_setting_pane_vc_g1_ParamLimits

0x4693,	// (0x00012fd2) list_setting_pane_vc_g1

0x469f,	// (0x00012fde) list_setting_pane_vc_g2_ParamLimits

0x469f,	// (0x00012fde) list_setting_pane_vc_g2

0x0001,

0xf7e2,	// (0x0001e121) list_setting_pane_vc_g_ParamLimits

0xf7e2,	// (0x0001e121) list_setting_pane_vc_g

0xb7a7,	// (0x0001a0e6) list_setting_pane_vc_t1_ParamLimits

0xb7a7,	// (0x0001a0e6) list_setting_pane_vc_t1

0xb7bf,	// (0x0001a0fe) list_setting_pane_vc_t2_ParamLimits

0xb7bf,	// (0x0001a0fe) list_setting_pane_vc_t2

0x0001,

0xfa36,	// (0x0001e375) list_setting_pane_vc_t_ParamLimits

0xfa36,	// (0x0001e375) list_setting_pane_vc_t

0xb6ce,	// (0x0001a00d) set_value_pane_cp_vc_ParamLimits

0xb6ce,	// (0x0001a00d) set_value_pane_cp_vc

0xb5ee,	// (0x00019f2d) list_single_number_heading_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_single_number_heading_pane_vc_g1

0xb5fa,	// (0x00019f39) list_single_number_heading_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_single_number_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_single_number_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_single_number_heading_pane_vc_g

0xb7d5,	// (0x0001a114) list_single_number_heading_pane_vc_t1_ParamLimits

0xb7d5,	// (0x0001a114) list_single_number_heading_pane_vc_t1

0xb7eb,	// (0x0001a12a) list_single_number_heading_pane_vc_t2_ParamLimits

0xb7eb,	// (0x0001a12a) list_single_number_heading_pane_vc_t2

0xb7fd,	// (0x0001a13c) list_single_number_heading_pane_vc_t3_ParamLimits

0xb7fd,	// (0x0001a13c) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3b,	// (0x0001e37a) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3b,	// (0x0001e37a) list_single_number_heading_pane_vc_t

0xaf16,	// (0x00019855) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xaf16,	// (0x00019855) list_single_graphic_heading_pane_vc_g1

0xb5ee,	// (0x00019f2d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xb5ee,	// (0x00019f2d) list_single_graphic_heading_pane_vc_g4

0xb5fa,	// (0x00019f39) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xb5fa,	// (0x00019f39) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b0,	// (0x0001e0ef) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b0,	// (0x0001e0ef) list_single_graphic_heading_pane_vc_g

0xb7d5,	// (0x0001a114) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xb7d5,	// (0x0001a114) list_single_graphic_heading_pane_vc_t1

0xb80f,	// (0x0001a14e) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xb80f,	// (0x0001a14e) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa42,	// (0x0001e381) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0001e381) list_single_graphic_heading_pane_vc_t

0xb5ee,	// (0x00019f2d) list_double2_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_double2_pane_vc_g1

0xb5fa,	// (0x00019f39) list_double2_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_double2_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_double2_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_double2_pane_vc_g

0xb821,	// (0x0001a160) list_double2_pane_vc_t1_ParamLimits

0xb821,	// (0x0001a160) list_double2_pane_vc_t1

0xb837,	// (0x0001a176) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xb837,	// (0x0001a176) list_double2_large_graphic_pane_vc_g1

0xb5ee,	// (0x00019f2d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xb5ee,	// (0x00019f2d) list_double2_large_graphic_pane_vc_g2

0xb5fa,	// (0x00019f39) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xb5fa,	// (0x00019f39) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa47,	// (0x0001e386) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa47,	// (0x0001e386) list_double2_large_graphic_pane_vc_g

0xb843,	// (0x0001a182) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xb843,	// (0x0001a182) list_double2_large_graphic_pane_vc_t1

0xb859,	// (0x0001a198) list_double_time_pane_vc_g1_ParamLimits

0xb859,	// (0x0001a198) list_double_time_pane_vc_g1

0xb865,	// (0x0001a1a4) list_double_time_pane_vc_g2_ParamLimits

0xb865,	// (0x0001a1a4) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0001e38d) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0001e38d) list_double_time_pane_vc_g

0xb871,	// (0x0001a1b0) list_double_time_pane_vc_t1_ParamLimits

0xb871,	// (0x0001a1b0) list_double_time_pane_vc_t1

0xb88f,	// (0x0001a1ce) list_double_time_pane_vc_t2_ParamLimits

0xb88f,	// (0x0001a1ce) list_double_time_pane_vc_t2

0xb8cd,	// (0x0001a20c) list_double_time_pane_vc_t3_ParamLimits

0xb8cd,	// (0x0001a20c) list_double_time_pane_vc_t3

0xb8df,	// (0x0001a21e) list_double_time_pane_vc_t4_ParamLimits

0xb8df,	// (0x0001a21e) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0001e392) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0001e392) list_double_time_pane_vc_t

0xb5ee,	// (0x00019f2d) list_double_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_double_pane_vc_g1

0xb5fa,	// (0x00019f39) list_double_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_double_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_double_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_double_pane_vc_g

0xb8f1,	// (0x0001a230) list_double_pane_vc_t1_ParamLimits

0xb8f1,	// (0x0001a230) list_double_pane_vc_t1

0xb903,	// (0x0001a242) list_double_pane_vc_t2_ParamLimits

0xb903,	// (0x0001a242) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0001e39b) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0001e39b) list_double_pane_vc_t

0xb5ee,	// (0x00019f2d) list_double_number_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_double_number_pane_vc_g1

0xb5fa,	// (0x00019f39) list_double_number_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_double_number_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_double_number_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_double_number_pane_vc_g

0xb919,	// (0x0001a258) list_double_number_pane_vc_t1_ParamLimits

0xb919,	// (0x0001a258) list_double_number_pane_vc_t1

0xb92b,	// (0x0001a26a) list_double_number_pane_vc_t2_ParamLimits

0xb92b,	// (0x0001a26a) list_double_number_pane_vc_t2

0xb903,	// (0x0001a242) list_double_number_pane_vc_t3_ParamLimits

0xb903,	// (0x0001a242) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0001e3a0) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0001e3a0) list_double_number_pane_vc_t

0xb93d,	// (0x0001a27c) list_double_large_graphic_pane_vc_g1_ParamLimits

0xb93d,	// (0x0001a27c) list_double_large_graphic_pane_vc_g1

0xb959,	// (0x0001a298) list_double_large_graphic_pane_vc_g2_ParamLimits

0xb959,	// (0x0001a298) list_double_large_graphic_pane_vc_g2

0xb96d,	// (0x0001a2ac) list_double_large_graphic_pane_vc_g3_ParamLimits

0xb96d,	// (0x0001a2ac) list_double_large_graphic_pane_vc_g3

0xb97c,	// (0x0001a2bb) list_double_large_graphic_pane_vc_g4_ParamLimits

0xb97c,	// (0x0001a2bb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0001e3a7) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0001e3a7) list_double_large_graphic_pane_vc_g

0xb988,	// (0x0001a2c7) list_double_large_graphic_pane_vc_t1_ParamLimits

0xb988,	// (0x0001a2c7) list_double_large_graphic_pane_vc_t1

0xb9a2,	// (0x0001a2e1) list_double_large_graphic_pane_vc_t2_ParamLimits

0xb9a2,	// (0x0001a2e1) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0001e3b0) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0001e3b0) list_double_large_graphic_pane_vc_t

0xb5ee,	// (0x00019f2d) list_double_heading_pane_vc_g1_ParamLimits

0xb5ee,	// (0x00019f2d) list_double_heading_pane_vc_g1

0xb5fa,	// (0x00019f39) list_double_heading_pane_vc_g2_ParamLimits

0xb5fa,	// (0x00019f39) list_double_heading_pane_vc_g2

0x0001,

0xf7d8,	// (0x0001e117) list_double_heading_pane_vc_g_ParamLimits

0xf7d8,	// (0x0001e117) list_double_heading_pane_vc_g

0xb9c2,	// (0x0001a301) list_double_heading_pane_vc_t1_ParamLimits

0xb9c2,	// (0x0001a301) list_double_heading_pane_vc_t1

0xb9d4,	// (0x0001a313) list_double_heading_pane_vc_t2_ParamLimits

0xb9d4,	// (0x0001a313) list_double_heading_pane_vc_t2

0x0001,

0xfa76,	// (0x0001e3b5) list_double_heading_pane_vc_t_ParamLimits

0xfa76,	// (0x0001e3b5) list_double_heading_pane_vc_t

0xb9ea,	// (0x0001a329) list_double_graphic_pane_vc_g1_ParamLimits

0xb9ea,	// (0x0001a329) list_double_graphic_pane_vc_g1

0xb9fd,	// (0x0001a33c) list_double_graphic_pane_vc_g2_ParamLimits

0xb9fd,	// (0x0001a33c) list_double_graphic_pane_vc_g2

0xb5ee,	// (0x00019f2d) list_double_graphic_pane_vc_g3_ParamLimits

0xb5ee,	// (0x00019f2d) list_double_graphic_pane_vc_g3

0x0003,

0xfa7b,	// (0x0001e3ba) list_double_graphic_pane_vc_g_ParamLimits

0xfa7b,	// (0x0001e3ba) list_double_graphic_pane_vc_g

0xba1a,	// (0x0001a359) list_double_graphic_pane_vc_t1_ParamLimits

0xba1a,	// (0x0001a359) list_double_graphic_pane_vc_t1

0xba38,	// (0x0001a377) list_double_graphic_pane_vc_t2_ParamLimits

0xba38,	// (0x0001a377) list_double_graphic_pane_vc_t2

0x0001,

0xfa84,	// (0x0001e3c3) list_double_graphic_pane_vc_t_ParamLimits

0xfa84,	// (0x0001e3c3) list_double_graphic_pane_vc_t

0xbe57,	// (0x0001a796) aid_size_cell_fastswap

0xbe5f,	// (0x0001a79e) aid_size_cell_touch_ParamLimits

0xbe5f,	// (0x0001a79e) aid_size_cell_touch

0xc0b0,	// (0x0001a9ef) popup_fast_swap_wide_window_ParamLimits

0xc0b0,	// (0x0001a9ef) popup_fast_swap_wide_window

0xc176,	// (0x0001aab5) touch_pane_ParamLimits

0xc176,	// (0x0001aab5) touch_pane

0x2eed,	// (0x0001182c) button_value_adjust_pane_cp2

0xb32a,	// (0x00019c69) button_value_adjust_pane_cp4

0xb34a,	// (0x00019c89) form_field_data_pane_cp2

0xb369,	// (0x00019ca8) form_field_data_wide_pane_cp2

0x357e,	// (0x00011ebd) bg_scroll_pane_ParamLimits

0xc3fa,	// (0x0001ad39) scroll_handle_pane_ParamLimits

0xc40e,	// (0x0001ad4d) scroll_sc2_down_pane_ParamLimits

0xc40e,	// (0x0001ad4d) scroll_sc2_down_pane

0x35af,	// (0x00011eee) scroll_sc2_up_pane_ParamLimits

0x35af,	// (0x00011eee) scroll_sc2_up_pane

0x6a62,	// (0x000153a1) grid_wheel_folder_pane_g1_ParamLimits

0x6a62,	// (0x000153a1) grid_wheel_folder_pane_g1

0xc5c2,	// (0x0001af01) clock_nsta_pane_cp2_ParamLimits

0xc5c2,	// (0x0001af01) clock_nsta_pane_cp2

0x3dcd,	// (0x0001270c) listscroll_midp_pane_ParamLimits

0x3dd9,	// (0x00012718) midp_canvas_pane

0x40b1,	// (0x000129f0) nsta_clock_indic_pane

0x40ed,	// (0x00012a2c) listscroll_form_pane_vc

0x40f5,	// (0x00012a34) listscroll_set_pane_vc_ParamLimits

0x40f5,	// (0x00012a34) listscroll_set_pane_vc

0x41f4,	// (0x00012b33) clock_nsta_pane

0x4269,	// (0x00012ba8) indicator_nsta_pane

0x4535,	// (0x00012e74) bg_popup_sub_pane_cp2_ParamLimits

0x4549,	// (0x00012e88) find_pane_cp2_ParamLimits

0x4549,	// (0x00012e88) find_pane_cp2

0x455f,	// (0x00012e9e) grid_toobar_pane_ParamLimits

0x470d,	// (0x0001304c) list_form_gen_pane_vc_ParamLimits

0x470d,	// (0x0001304c) list_form_gen_pane_vc

0x4723,	// (0x00013062) scroll_pane_cp8_vc_ParamLimits

0x4723,	// (0x00013062) scroll_pane_cp8_vc

0x479f,	// (0x000130de) data_form_wide_pane_vc_ParamLimits

0x479f,	// (0x000130de) data_form_wide_pane_vc

0x47ab,	// (0x000130ea) form_field_data_wide_pane_vc_g1

0x47b3,	// (0x000130f2) form_field_data_wide_pane_vc_t1_ParamLimits

0x47b3,	// (0x000130f2) form_field_data_wide_pane_vc_t1

0x2fb5,	// (0x000118f4) input_focus_pane_cp6_vc_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_cp6_vc

0x4a9f,	// (0x000133de) list_midp_pane_ParamLimits

0x4aab,	// (0x000133ea) scroll_pane_cp16_ParamLimits

0x4aab,	// (0x000133ea) scroll_pane_cp16

0x4b01,	// (0x00013440) button_value_adjust_pane_ParamLimits

0x4b01,	// (0x00013440) button_value_adjust_pane

0x5a23,	// (0x00014362) button_value_adjust_pane_cp6_ParamLimits

0x5a23,	// (0x00014362) button_value_adjust_pane_cp6

0x5b2b,	// (0x0001446a) settings_code_pane_cp_ParamLimits

0x5b2b,	// (0x0001446a) settings_code_pane_cp

0x21da,	// (0x00010b19) cell_touch_pane_g1

0x21da,	// (0x00010b19) cell_touch_pane_g2

0x0001,

0xf703,	// (0x0001e042) cell_touch_pane_g

0x6140,	// (0x00014a7f) cell_touch_pane_cp_ParamLimits

0x6140,	// (0x00014a7f) cell_touch_pane_cp

0x6150,	// (0x00014a8f) cell_touch_pane_ParamLimits

0x6150,	// (0x00014a8f) cell_touch_pane

0x21da,	// (0x00010b19) scroll_sc2_down_pane_g1

0x21da,	// (0x00010b19) scroll_sc2_up_pane_g1

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp4_vc

0x6190,	// (0x00014acf) list_set_graphic_pane_vc_g1_ParamLimits

0x6190,	// (0x00014acf) list_set_graphic_pane_vc_g1

0x619c,	// (0x00014adb) list_set_graphic_pane_vc_g2_ParamLimits

0x619c,	// (0x00014adb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f8,	// (0x0001e337) list_set_graphic_pane_vc_g_ParamLimits

0xf9f8,	// (0x0001e337) list_set_graphic_pane_vc_g

0x61a8,	// (0x00014ae7) text_primary_small_cp13_vc_ParamLimits

0x61a8,	// (0x00014ae7) text_primary_small_cp13_vc

0x61c0,	// (0x00014aff) list_set_graphic_pane_vc_ParamLimits

0x61c0,	// (0x00014aff) list_set_graphic_pane_vc

0x21e4,	// (0x00010b23) input_focus_pane_cp2_vc

0x21da,	// (0x00010b19) setting_code_pane_vc_g1

0x230f,	// (0x00010c4e) setting_code_pane_vc_t1

0x61d1,	// (0x00014b10) set_text_pane_vc_t1_ParamLimits

0x61d1,	// (0x00014b10) set_text_pane_vc_t1

0x21e4,	// (0x00010b23) input_focus_pane_cp1_vc

0x61eb,	// (0x00014b2a) list_set_text_pane_vc

0x21da,	// (0x00010b19) setting_text_pane_vc_g1

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp2_vc

0x2306,	// (0x00010c45) setting_slider_graphic_pane_vc_g1

0x61f5,	// (0x00014b34) setting_slider_graphic_pane_vc_t1

0x6204,	// (0x00014b43) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fd,	// (0x0001e33c) setting_slider_graphic_pane_vc_t

0x6213,	// (0x00014b52) slider_set_pane_cp_vc

0x621b,	// (0x00014b5a) slider_set_pane_vc_g1

0x6224,	// (0x00014b63) slider_set_pane_vc_g2

0x0006,

0xfa02,	// (0x0001e341) slider_set_pane_vc_g

0x30f6,	// (0x00011a35) set_opt_bg_pane_g1_copy1

0x30fe,	// (0x00011a3d) set_opt_bg_pane_g2_copy1

0x6250,	// (0x00014b8f) set_opt_bg_pane_g3_copy1

0x310e,	// (0x00011a4d) set_opt_bg_pane_g4_copy1

0x3116,	// (0x00011a55) set_opt_bg_pane_g5_copy1

0x311e,	// (0x00011a5d) set_opt_bg_pane_g6_copy1

0x6258,	// (0x00014b97) set_opt_bg_pane_g7_copy1

0x6260,	// (0x00014b9f) set_opt_bg_pane_g8_copy1

0x6268,	// (0x00014ba7) set_opt_bg_pane_g9_copy1

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp_vc

0x6270,	// (0x00014baf) setting_slider_pane_vc_t1

0x627f,	// (0x00014bbe) setting_slider_pane_vc_t2

0x628e,	// (0x00014bcd) setting_slider_pane_vc_t3

0x0002,

0xfa11,	// (0x0001e350) setting_slider_pane_vc_t

0x629d,	// (0x00014bdc) slider_set_pane_vc

0xce13,	// (0x0001b752) volume_set_pane_vc_g1

0xd0f8,	// (0x0001ba37) volume_set_pane_vc_g2

0xd101,	// (0x0001ba40) volume_set_pane_vc_g3

0xd10a,	// (0x0001ba49) volume_set_pane_vc_g4

0xd113,	// (0x0001ba52) volume_set_pane_vc_g5

0xd11c,	// (0x0001ba5b) volume_set_pane_vc_g6

0xd125,	// (0x0001ba64) volume_set_pane_vc_g7

0xd12e,	// (0x0001ba6d) volume_set_pane_vc_g8

0xd137,	// (0x0001ba76) volume_set_pane_vc_g9

0xd140,	// (0x0001ba7f) volume_set_pane_vc_g10

0x0009,

0xfa18,	// (0x0001e357) volume_set_pane_vc_g

0x62a5,	// (0x00014be4) volume_set_pane_vc

0x62ad,	// (0x00014bec) button_value_adjust_pane_cp1_vc

0x62b5,	// (0x00014bf4) list_highlight_pane_cp2_vc

0x62be,	// (0x00014bfd) list_set_pane_vc_ParamLimits

0x62be,	// (0x00014bfd) list_set_pane_vc

0x6310,	// (0x00014c4f) main_pane_set_vc_t1_ParamLimits

0x6310,	// (0x00014c4f) main_pane_set_vc_t1

0x6325,	// (0x00014c64) main_pane_set_vc_t2_ParamLimits

0x6325,	// (0x00014c64) main_pane_set_vc_t2

0x6337,	// (0x00014c76) main_pane_set_vc_t3_ParamLimits

0x6337,	// (0x00014c76) main_pane_set_vc_t3

0x6349,	// (0x00014c88) main_pane_set_vc_t4_ParamLimits

0x6349,	// (0x00014c88) main_pane_set_vc_t4

0x0003,

0xfa2d,	// (0x0001e36c) main_pane_set_vc_t_ParamLimits

0xfa2d,	// (0x0001e36c) main_pane_set_vc_t

0x635b,	// (0x00014c9a) setting_code_pane_vc_ParamLimits

0x635b,	// (0x00014c9a) setting_code_pane_vc

0x636a,	// (0x00014ca9) setting_slider_graphic_pane_vc

0x636a,	// (0x00014ca9) setting_slider_pane_vc

0x636a,	// (0x00014ca9) setting_text_pane_vc

0x636a,	// (0x00014ca9) setting_volume_pane_vc

0x6372,	// (0x00014cb1) scroll_pane_cp121_vc

0x2edb,	// (0x0001181a) set_content_pane_vc

0x6618,	// (0x00014f57) button_value_adjust_pane_g1

0x6621,	// (0x00014f60) button_value_adjust_pane_g2

0x0001,

0xfa89,	// (0x0001e3c8) button_value_adjust_pane_g

0x662a,	// (0x00014f69) form_field_slider_wide_pane_vc_t1_ParamLimits

0x662a,	// (0x00014f69) form_field_slider_wide_pane_vc_t1

0x663c,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x663c,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8e,	// (0x0001e3cd) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8e,	// (0x0001e3cd) form_field_slider_wide_pane_vc_t

0x254f,	// (0x00010e8e) input_focus_pane_cp10_vc_ParamLimits

0x254f,	// (0x00010e8e) input_focus_pane_cp10_vc

0x6664,	// (0x00014fa3) slider_cont_pane_cp1_vc_ParamLimits

0x6664,	// (0x00014fa3) slider_cont_pane_cp1_vc

0x6674,	// (0x00014fb3) slider_form_pane_g1_cp2

0x6224,	// (0x00014b63) slider_form_pane_g2_cp2

0x66a1,	// (0x00014fe0) form_field_slider_pane_vc_t3

0x66af,	// (0x00014fee) form_field_slider_pane_vc_t4

0x66bd,	// (0x00014ffc) slider_form_pane_vc_ParamLimits

0x66bd,	// (0x00014ffc) slider_form_pane_vc

0x66ca,	// (0x00015009) form_field_slider_pane_vc_t1_ParamLimits

0x66ca,	// (0x00015009) form_field_slider_pane_vc_t1

0x663c,	// (0x00014f7b) form_field_slider_pane_vc_t2_ParamLimits

0x663c,	// (0x00014f7b) form_field_slider_pane_vc_t2

0x0001,

0xfaa0,	// (0x0001e3df) form_field_slider_pane_vc_t_ParamLimits

0xfaa0,	// (0x0001e3df) form_field_slider_pane_vc_t

0x254f,	// (0x00010e8e) input_focus_pane_cp9_vc_ParamLimits

0x254f,	// (0x00010e8e) input_focus_pane_cp9_vc

0x66e0,	// (0x0001501f) slider_cont_pane_vc_ParamLimits

0x66e0,	// (0x0001501f) slider_cont_pane_vc

0x66f2,	// (0x00015031) list_form_graphic_pane_cp_vc_ParamLimits

0x66f2,	// (0x00015031) list_form_graphic_pane_cp_vc

0x47ab,	// (0x000130ea) form_field_popup_wide_pane_vc_g1

0x6707,	// (0x00015046) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6707,	// (0x00015046) form_field_popup_wide_pane_vc_t1

0x2fb5,	// (0x000118f4) input_focus_pane_cp8_vc_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_cp8_vc

0x6746,	// (0x00015085) list_form_wide_pane_vc_ParamLimits

0x6746,	// (0x00015085) list_form_wide_pane_vc

0x6752,	// (0x00015091) list_form_graphic_pane_vc_g1

0x675a,	// (0x00015099) list_form_graphic_pane_vc_t1_ParamLimits

0x675a,	// (0x00015099) list_form_graphic_pane_vc_t1

0x22c4,	// (0x00010c03) list_highlight_pane_cp5_vc_ParamLimits

0x22c4,	// (0x00010c03) list_highlight_pane_cp5_vc

0x6776,	// (0x000150b5) list_form_graphic_pane_vc_ParamLimits

0x6776,	// (0x000150b5) list_form_graphic_pane_vc

0x47ab,	// (0x000130ea) form_field_popup_pane_vc_g1

0x678c,	// (0x000150cb) form_field_popup_pane_vc_t1_ParamLimits

0x678c,	// (0x000150cb) form_field_popup_pane_vc_t1

0x2fb5,	// (0x000118f4) input_focus_pane_cp7_vc_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_cp7_vc

0x67a1,	// (0x000150e0) list_form_pane_vc_ParamLimits

0x67a1,	// (0x000150e0) list_form_pane_vc

0x67ad,	// (0x000150ec) data_form_pane_vc_t1_ParamLimits

0x67ad,	// (0x000150ec) data_form_pane_vc_t1

0x30f6,	// (0x00011a35) input_focus_pane_vc_g1

0x30fe,	// (0x00011a3d) input_focus_pane_vc_g2

0x3106,	// (0x00011a45) input_focus_pane_vc_g3

0x310e,	// (0x00011a4d) input_focus_pane_vc_g4

0x3116,	// (0x00011a55) input_focus_pane_vc_g5

0x311e,	// (0x00011a5d) input_focus_pane_vc_g6

0x3126,	// (0x00011a65) input_focus_pane_vc_g7

0x312e,	// (0x00011a6d) input_focus_pane_vc_g8

0x3136,	// (0x00011a75) input_focus_pane_vc_g9

0x21da,	// (0x00010b19) input_focus_pane_vc_g10

0x0009,

0xf68c,	// (0x0001dfcb) input_focus_pane_vc_g

0x479f,	// (0x000130de) data_form_pane_vc_ParamLimits

0x479f,	// (0x000130de) data_form_pane_vc

0x47ab,	// (0x000130ea) form_field_data_pane_vc_g1

0x67c8,	// (0x00015107) form_field_data_pane_vc_t1_ParamLimits

0x67c8,	// (0x00015107) form_field_data_pane_vc_t1

0x2fb5,	// (0x000118f4) input_focus_pane_vc_ParamLimits

0x2fb5,	// (0x000118f4) input_focus_pane_vc

0x67de,	// (0x0001511d) button_value_adjust_pane_cp3_vc

0x67e6,	// (0x00015125) button_value_adjust_pane_cp5_vc

0x67ee,	// (0x0001512d) form_field_data_pane_vc_ParamLimits

0x67ee,	// (0x0001512d) form_field_data_pane_vc

0x6805,	// (0x00015144) form_field_data_pane_vc_cp2

0x680d,	// (0x0001514c) form_field_data_wide_pane_vc_ParamLimits

0x680d,	// (0x0001514c) form_field_data_wide_pane_vc

0x6823,	// (0x00015162) form_field_data_wide_pane_vc_cp2

0x682b,	// (0x0001516a) form_field_popup_pane_vc_ParamLimits

0x682b,	// (0x0001516a) form_field_popup_pane_vc

0x6842,	// (0x00015181) form_field_popup_wide_pane_vc_ParamLimits

0x6842,	// (0x00015181) form_field_popup_wide_pane_vc

0x6858,	// (0x00015197) form_field_slider_pane_vc_ParamLimits

0x6858,	// (0x00015197) form_field_slider_pane_vc

0x686b,	// (0x000151aa) form_field_slider_wide_pane_vc_ParamLimits

0x686b,	// (0x000151aa) form_field_slider_wide_pane_vc

0x687e,	// (0x000151bd) grid_touch_1_pane_ParamLimits

0x687e,	// (0x000151bd) grid_touch_1_pane

0x688a,	// (0x000151c9) grid_touch_2_pane_ParamLimits

0x688a,	// (0x000151c9) grid_touch_2_pane

0x407c,	// (0x000129bb) touch_pane_g1_ParamLimits

0x407c,	// (0x000129bb) touch_pane_g1

0x68a2,	// (0x000151e1) cell_app_pane_cp_wide_ParamLimits

0x68a2,	// (0x000151e1) cell_app_pane_cp_wide

0x68b3,	// (0x000151f2) grid_popup_fast_wide_pane_ParamLimits

0x68b3,	// (0x000151f2) grid_popup_fast_wide_pane

0x68c7,	// (0x00015206) scroll_pane_cp19_ParamLimits

0x68c7,	// (0x00015206) scroll_pane_cp19

0x21e4,	// (0x00010b23) bg_popup_window_pane_cp20

0x68db,	// (0x0001521a) listscroll_popup_fast_wide_pane

0x22c4,	// (0x00010c03) grid_indicator_nsta_pane

0x68e3,	// (0x00015222) clock_nsta_pane_g1

0x68ec,	// (0x0001522b) clock_nsta_pane_t1

0x6908,	// (0x00015247) cell_indicator_nsta_pane_ParamLimits

0x6908,	// (0x00015247) cell_indicator_nsta_pane

0x6939,	// (0x00015278) cell_indicator_nsta_pane_g1

0x6947,	// (0x00015286) cell_indicator_nsta_pane_g2

0x0001,

0xfab1,	// (0x0001e3f0) cell_indicator_nsta_pane_g

0x6954,	// (0x00015293) clock_nsta_pane_cp

0x695c,	// (0x0001529b) indicator_nsta_pane_cp

0x6964,	// (0x000152a3) nsta_clock_indic_pane_g1

0x23a1,	// (0x00010ce0) grid_indicator_pane

0x36a1,	// (0x00011fe0) scroll_pane_cp29

0xc519,	// (0x0001ae58) indicator_nsta_pane_cp2_ParamLimits

0xc519,	// (0x0001ae58) indicator_nsta_pane_cp2

0x22c4,	// (0x00010c03) main_apps_wheel_pane

0x4986,	// (0x000132c5) form_midp_field_text_pane_ParamLimits

0x4acb,	// (0x0001340a) scroll_bar_cp050_ParamLimits

0x69b4,	// (0x000152f3) cell_indicator_pane_ParamLimits

0x69b4,	// (0x000152f3) cell_indicator_pane

0x69c8,	// (0x00015307) cell_indicator_pane_g1

0x69d2,	// (0x00015311) grid_wheel_folder_pane_ParamLimits

0x69d2,	// (0x00015311) grid_wheel_folder_pane

0x69e4,	// (0x00015323) list_wheel_apps_pane_ParamLimits

0x69e4,	// (0x00015323) list_wheel_apps_pane

0x69f3,	// (0x00015332) main_apps_wheel_pane_g1_ParamLimits

0x69f3,	// (0x00015332) main_apps_wheel_pane_g1

0x6a07,	// (0x00015346) main_apps_wheel_pane_g2_ParamLimits

0x6a07,	// (0x00015346) main_apps_wheel_pane_g2

0x0001,

0xfacd,	// (0x0001e40c) main_apps_wheel_pane_g_ParamLimits

0xfacd,	// (0x0001e40c) main_apps_wheel_pane_g

0x6a1b,	// (0x0001535a) main_apps_wheel_pane_t1_ParamLimits

0x6a1b,	// (0x0001535a) main_apps_wheel_pane_t1

0x6a3a,	// (0x00015379) list_wheel_apps_pane_g1

0x6a42,	// (0x00015381) list_wheel_apps_pane_g2

0x6a4a,	// (0x00015389) list_wheel_apps_pane_g3

0x6a52,	// (0x00015391) list_wheel_apps_pane_g4

0x6a5a,	// (0x00015399) list_wheel_apps_pane_g5

0x0004,

0xfad2,	// (0x0001e411) list_wheel_apps_pane_g

0x3c53,	// (0x00012592) navi_icon_text_pane

0x4131,	// (0x00012a70) aid_fill_nsta

0x6a77,	// (0x000153b6) navi_icon_text_pane_g1

0x6a83,	// (0x000153c2) navi_icon_text_pane_t1

0x3af4,	// (0x00012433) list_set_graphic_pane_t1_ParamLimits

0x3af4,	// (0x00012433) list_set_graphic_pane_t1

0x51e7,	// (0x00013b26) popup_midp_note_alarm_window_t6_ParamLimits

0x51e7,	// (0x00013b26) popup_midp_note_alarm_window_t6

0x51f9,	// (0x00013b38) popup_midp_note_alarm_window_t7_ParamLimits

0x51f9,	// (0x00013b38) popup_midp_note_alarm_window_t7

0x520b,	// (0x00013b4a) popup_midp_note_alarm_window_t8_ParamLimits

0x520b,	// (0x00013b4a) popup_midp_note_alarm_window_t8

0x521d,	// (0x00013b5c) popup_midp_note_alarm_window_t9_ParamLimits

0x521d,	// (0x00013b5c) popup_midp_note_alarm_window_t9

0x522f,	// (0x00013b6e) popup_midp_note_alarm_window_t10_ParamLimits

0x522f,	// (0x00013b6e) popup_midp_note_alarm_window_t10

0x5241,	// (0x00013b80) popup_midp_note_alarm_window_t11_ParamLimits

0x5241,	// (0x00013b80) popup_midp_note_alarm_window_t11

0x5253,	// (0x00013b92) scroll_pane_cp17_ParamLimits

0x5253,	// (0x00013b92) scroll_pane_cp17

0xce13,	// (0x0001b752) volume_small_pane_cp_g1

0xd149,	// (0x0001ba88) volume_small_pane_cp_g2

0xd152,	// (0x0001ba91) volume_small_pane_cp_g3

0xd15b,	// (0x0001ba9a) volume_small_pane_cp_g4

0xd164,	// (0x0001baa3) volume_small_pane_cp_g5

0xd16d,	// (0x0001baac) volume_small_pane_cp_g6

0xd176,	// (0x0001bab5) volume_small_pane_cp_g7

0xd17f,	// (0x0001babe) volume_small_pane_cp_g8

0xd188,	// (0x0001bac7) volume_small_pane_cp_g9

0xd191,	// (0x0001bad0) volume_small_pane_cp_g10

0x3e96,	// (0x000127d5) midp_ticker_pane_g1_ParamLimits

0x3ea2,	// (0x000127e1) midp_ticker_pane_g2_ParamLimits

0xf758,	// (0x0001e097) midp_ticker_pane_g_ParamLimits

0x3eae,	// (0x000127ed) midp_ticker_pane_t1_ParamLimits

0x4141,	// (0x00012a80) aid_fill_nsta_2

0x4ab7,	// (0x000133f6) list_form2_midp_pane

0x5ba4,	// (0x000144e3) midp_editing_number_pane_ParamLimits

0x5bb3,	// (0x000144f2) midp_ticker_pane_ParamLimits

0x6a95,	// (0x000153d4) form2_midp_field_pane

0x6ab9,	// (0x000153f8) scroll_pane_cp51

0x6ad9,	// (0x00015418) form2_midp_button_pane_ParamLimits

0x6ad9,	// (0x00015418) form2_midp_button_pane

0x6aeb,	// (0x0001542a) form2_midp_content_pane_ParamLimits

0x6aeb,	// (0x0001542a) form2_midp_content_pane

0x6b05,	// (0x00015444) form2_midp_field_choice_group_pane

0x6b0d,	// (0x0001544c) form2_midp_field_pane_g1

0x6b15,	// (0x00015454) form2_midp_field_pane_g2

0x6b1d,	// (0x0001545c) form2_midp_field_pane_g3

0x6b25,	// (0x00015464) form2_midp_field_pane_g4

0x0003,

0xfaf7,	// (0x0001e436) form2_midp_field_pane_g

0x6b2d,	// (0x0001546c) form2_midp_gauge_slider_pane

0x6b35,	// (0x00015474) form2_midp_gauge_wait_pane

0x6b3d,	// (0x0001547c) form2_midp_image_pane_ParamLimits

0x6b3d,	// (0x0001547c) form2_midp_image_pane

0x6b58,	// (0x00015497) form2_midp_label_pane_ParamLimits

0x6b58,	// (0x00015497) form2_midp_label_pane

0x6b71,	// (0x000154b0) form2_midp_label_pane_cp_ParamLimits

0x6b71,	// (0x000154b0) form2_midp_label_pane_cp

0x6b90,	// (0x000154cf) form2_midp_string_pane_ParamLimits

0x6b90,	// (0x000154cf) form2_midp_string_pane

0xba56,	// (0x0001a395) form2_midp_text_pane_ParamLimits

0xba56,	// (0x0001a395) form2_midp_text_pane

0x6bbb,	// (0x000154fa) form2_midp_time_pane

0x6bcb,	// (0x0001550a) input_focus_pane_cp51_ParamLimits

0x6bcb,	// (0x0001550a) input_focus_pane_cp51

0x6be3,	// (0x00015522) form2_midp_label_pane_t1_ParamLimits

0x6be3,	// (0x00015522) form2_midp_label_pane_t1

0xba6f,	// (0x0001a3ae) form2_mdip_text_pane_t1_ParamLimits

0xba6f,	// (0x0001a3ae) form2_mdip_text_pane_t1

0xba8a,	// (0x0001a3c9) form2_midp_time_pane_t1

0x6c54,	// (0x00015593) form2_midp_gauge_slider_pane_t1

0x6c66,	// (0x000155a5) form2_midp_gauge_slider_pane_t2

0x6c78,	// (0x000155b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb00,	// (0x0001e43f) form2_midp_gauge_slider_pane_t

0x6c8a,	// (0x000155c9) form2_midp_slider_pane

0x6c96,	// (0x000155d5) form2_midp_gauge_wait_pane_t1

0x6ca4,	// (0x000155e3) form2_midp_wait_pane_ParamLimits

0x6ca4,	// (0x000155e3) form2_midp_wait_pane

0x6ccf,	// (0x0001560e) list_single_2graphic_pane_cp4_ParamLimits

0x6ccf,	// (0x0001560e) list_single_2graphic_pane_cp4

0x47fb,	// (0x0001313a) list_single_midp_graphic_pane_cp_ParamLimits

0x47fb,	// (0x0001313a) list_single_midp_graphic_pane_cp

0x21e4,	// (0x00010b23) list_highlight_pane_cp20

0x6ce2,	// (0x00015621) list_single_2graphic_pane_g1_cp4

0x6047,	// (0x00014986) list_single_2graphic_pane_g2_cp4

0x6cea,	// (0x00015629) list_single_2graphic_pane_t1_cp4

0x22c4,	// (0x00010c03) list_highlight_pane_cp21

0x6cf9,	// (0x00015638) list_single_midp_graphic_pane_g4_cp

0x6d08,	// (0x00015647) list_single_midp_graphic_pane_t1_cp

0x6d1d,	// (0x0001565c) form2_mdip_string_pane_t1_ParamLimits

0x6d1d,	// (0x0001565c) form2_mdip_string_pane_t1

0x21e4,	// (0x00010b23) bg_wml_button_pane_cp2

0x21da,	// (0x00010b19) form2_midp_image_pane_g1

0xb110,	// (0x00019a4f) list_double_large_graphic_pane_g5_ParamLimits

0xb110,	// (0x00019a4f) list_double_large_graphic_pane_g5

0x3dcd,	// (0x0001270c) midp_form_pane_ParamLimits

0x22c4,	// (0x00010c03) main_apps_wheel_pane_ParamLimits

0xcb2f,	// (0x0001b46e) popup_preview_window_ParamLimits

0xcb2f,	// (0x0001b46e) popup_preview_window

0xccb0,	// (0x0001b5ef) popup_touch_info_window_ParamLimits

0xccb0,	// (0x0001b5ef) popup_touch_info_window

0xccce,	// (0x0001b60d) popup_touch_menu_window_ParamLimits

0xccce,	// (0x0001b60d) popup_touch_menu_window

0x21d0,	// (0x00010b0f) bg_popup_sub_pane_cp6

0x6d87,	// (0x000156c6) list_touch_menu_pane

0x6d8f,	// (0x000156ce) list_single_touch_menu_pane_ParamLimits

0x6d8f,	// (0x000156ce) list_single_touch_menu_pane

0x6da3,	// (0x000156e2) list_single_touch_menu_pane_t1

0x22c4,	// (0x00010c03) bg_popup_sub_pane_cp7_ParamLimits

0x22c4,	// (0x00010c03) bg_popup_sub_pane_cp7

0x6db1,	// (0x000156f0) heading_sub_pane

0x6db9,	// (0x000156f8) list_touch_info_pane_ParamLimits

0x6db9,	// (0x000156f8) list_touch_info_pane

0x6dc8,	// (0x00015707) list_single_touch_info_pane_ParamLimits

0x6dc8,	// (0x00015707) list_single_touch_info_pane

0x6dd9,	// (0x00015718) list_single_touch_info_pane_t1

0x6de7,	// (0x00015726) list_single_touch_info_pane_t2

0x0001,

0xfb0e,	// (0x0001e44d) list_single_touch_info_pane_t

0x3dc5,	// (0x00012704) bg_popup_heading_pane_cp

0x6df5,	// (0x00015734) heading_sub_pane_t1

0x4739,	// (0x00013078) bg_popup_preview_window_pane_cp_ParamLimits

0x4739,	// (0x00013078) bg_popup_preview_window_pane_cp

0x6db1,	// (0x000156f0) heading_preview_pane

0x6db9,	// (0x000156f8) list_preview_pane_ParamLimits

0x6db9,	// (0x000156f8) list_preview_pane

0x6e03,	// (0x00015742) popup_preview_window_g1

0x6dc8,	// (0x00015707) list_single_preview_pane_ParamLimits

0x6dc8,	// (0x00015707) list_single_preview_pane

0x6e0b,	// (0x0001574a) list_single_preview_pane_g1

0x6e13,	// (0x00015752) list_single_preview_pane_t1

0x6dd9,	// (0x00015718) list_single_preview_pane_t2

0x0001,

0xfb13,	// (0x0001e452) list_single_preview_pane_t

0x6e21,	// (0x00015760) bg_popup_heading_pane_cp2_ParamLimits

0x6e21,	// (0x00015760) bg_popup_heading_pane_cp2

0x6e37,	// (0x00015776) heading_preview_pane_g1

0x6e3f,	// (0x0001577e) heading_preview_pane_t1_ParamLimits

0x6e3f,	// (0x0001577e) heading_preview_pane_t1

0x23c4,	// (0x00010d03) soft_indicator_pane_t1_ParamLimits

0x29fd,	// (0x0001133c) scroll_pane_ParamLimits

0x35a6,	// (0x00011ee5) scroll_sc2_left_pane

0x359d,	// (0x00011edc) scroll_sc2_right_pane

0x35c5,	// (0x00011f04) scroll_bg_pane_g1_ParamLimits

0x35da,	// (0x00011f19) scroll_bg_pane_g2_ParamLimits

0x35f2,	// (0x00011f31) scroll_bg_pane_g3_ParamLimits

0xf6e3,	// (0x0001e022) scroll_bg_pane_g_ParamLimits

0x35c5,	// (0x00011f04) scroll_handle_pane_g1_ParamLimits

0x3614,	// (0x00011f53) scroll_handle_pane_g2_ParamLimits

0x35f2,	// (0x00011f31) scroll_handle_pane_g3_ParamLimits

0xf6ea,	// (0x0001e029) scroll_handle_pane_g_ParamLimits

0xc85a,	// (0x0001b199) popup_choice_list_window_ParamLimits

0xc85a,	// (0x0001b199) popup_choice_list_window

0x4541,	// (0x00012e80) choice_list_pane

0x45ef,	// (0x00012f2e) cell_toolbar_pane_t1

0x4617,	// (0x00012f56) toolbar_button_pane_ParamLimits

0x5705,	// (0x00014044) ai_gene_pane_1_t2_ParamLimits

0x5705,	// (0x00014044) ai_gene_pane_1_t2

0x0001,

0xf90b,	// (0x0001e24a) ai_gene_pane_1_t_ParamLimits

0xf90b,	// (0x0001e24a) ai_gene_pane_1_t

0x6e5c,	// (0x0001579b) scroll_sc2_left_pane_g1

0x6e5c,	// (0x0001579b) scroll_sc2_right_pane_g1

0x4107,	// (0x00012a46) bg_popup_sub_pane_cp10

0x6e66,	// (0x000157a5) list_choice_list_pane

0x6e7d,	// (0x000157bc) list_single_choice_list_pane_ParamLimits

0x6e7d,	// (0x000157bc) list_single_choice_list_pane

0x6e91,	// (0x000157d0) list_single_choice_list_pane_g1

0x32ad,	// (0x00011bec) list_single_choice_list_pane_t1_ParamLimits

0x32ad,	// (0x00011bec) list_single_choice_list_pane_t1

0x6e99,	// (0x000157d8) choice_list_pane_g1

0x6ea1,	// (0x000157e0) choice_list_pane_t1

0x21d0,	// (0x00010b0f) input_focus_pane_cp11

0x3484,	// (0x00011dc3) title_pane_stacon_g2_ParamLimits

0x3484,	// (0x00011dc3) title_pane_stacon_g2

0x0002,

0xf6c9,	// (0x0001e008) title_pane_stacon_g_ParamLimits

0xf6c9,	// (0x0001e008) title_pane_stacon_g

0x3dc5,	// (0x00012704) cursor_press_pane

0xc8f6,	// (0x0001b235) popup_fep_hwr_window_ParamLimits

0xc8f6,	// (0x0001b235) popup_fep_hwr_window

0xc952,	// (0x0001b291) popup_fep_vkb_window_ParamLimits

0xc952,	// (0x0001b291) popup_fep_vkb_window

0x6eaf,	// (0x000157ee) cursor_press_pane_g1

0x0002,

0xfb3c,	// (0x0001e47b) fep_vkb_side_pane_g_ParamLimits

0xd1cf,	// (0x0001bb0e) fep_hwr_candidate_pane_ParamLimits

0xd1cf,	// (0x0001bb0e) fep_hwr_candidate_pane

0xd1f7,	// (0x0001bb36) fep_hwr_side_pane_ParamLimits

0xd1f7,	// (0x0001bb36) fep_hwr_side_pane

0xd217,	// (0x0001bb56) fep_hwr_top_pane_ParamLimits

0xd217,	// (0x0001bb56) fep_hwr_top_pane

0xd22f,	// (0x0001bb6e) fep_hwr_write_pane_ParamLimits

0xd22f,	// (0x0001bb6e) fep_hwr_write_pane

0xfb3c,	// (0x0001e47b) fep_vkb_side_pane_g

0x6ec9,	// (0x00015808) fep_hwr_top_pane_g1

0x6eb7,	// (0x000157f6) fep_hwr_top_pane_g2

0xd25b,	// (0x0001bb9a) fep_hwr_top_pane_g3

0x0002,

0xfb18,	// (0x0001e457) fep_hwr_top_pane_g

0xd270,	// (0x0001bbaf) fep_hwr_top_text_pane

0x3768,	// (0x000120a7) fep_hwr_top_text_pane_g1

0x6eff,	// (0x0001583e) fep_hwr_top_text_pane_t1

0xd35e,	// (0x0001bc9d) fep_hwr_candidate_pane_g1

0x8a5c,	// (0x0001739b) fep_vkb_keypad_pane_g3_ParamLimits

0x8a5c,	// (0x0001739b) fep_vkb_keypad_pane_g3

0x8a7e,	// (0x000173bd) fep_vkb_keypad_pane_g4_ParamLimits

0x8a7e,	// (0x000173bd) fep_vkb_keypad_pane_g4

0x8aed,	// (0x0001742c) fep_vkb_bottom_pane_g2_ParamLimits

0x8aed,	// (0x0001742c) fep_vkb_bottom_pane_g2

0x0001,

0xfb43,	// (0x0001e482) fep_vkb_bottom_pane_g_ParamLimits

0xfb43,	// (0x0001e482) fep_vkb_bottom_pane_g

0x6e5c,	// (0x0001579b) cell_vkb_side_pane_g2

0x0001,

0xfb4d,	// (0x0001e48c) cell_vkb_side_pane_g

0x8b31,	// (0x00017470) cell_vkb_side_pane_t1

0x8b3f,	// (0x0001747e) cell_vkb_side_pane_t1_copy1

0x6e5c,	// (0x0001579b) bg_fep_vkb_candidate_pane_g2

0x8c0d,	// (0x0001754c) cell_vkb_candidate_pane_ParamLimits

0x88a1,	// (0x000171e0) aid_size_cell_vkb_ParamLimits

0x88a1,	// (0x000171e0) aid_size_cell_vkb

0x8c0d,	// (0x0001754c) cell_vkb_candidate_pane

0xd45c,	// (0x0001bd9b) bg_popup_fep_shadow_pane_g1

0x890b,	// (0x0001724a) fep_vkb_bottom_pane_ParamLimits

0x890b,	// (0x0001724a) fep_vkb_bottom_pane

0x8948,	// (0x00017287) fep_vkb_candidate_pane_ParamLimits

0x8948,	// (0x00017287) fep_vkb_candidate_pane

0x8964,	// (0x000172a3) fep_vkb_keypad_pane_ParamLimits

0x8964,	// (0x000172a3) fep_vkb_keypad_pane

0x8998,	// (0x000172d7) fep_vkb_side_pane_ParamLimits

0x8998,	// (0x000172d7) fep_vkb_side_pane

0x89c4,	// (0x00017303) fep_vkb_top_pane_ParamLimits

0x89c4,	// (0x00017303) fep_vkb_top_pane

0x89f0,	// (0x0001732f) fep_vkb_top_pane_g1_ParamLimits

0x89f0,	// (0x0001732f) fep_vkb_top_pane_g1

0x89ff,	// (0x0001733e) fep_vkb_top_pane_g2_ParamLimits

0x89ff,	// (0x0001733e) fep_vkb_top_pane_g2

0x8a0e,	// (0x0001734d) fep_vkb_top_pane_g3_ParamLimits

0x8a0e,	// (0x0001734d) fep_vkb_top_pane_g3

0x0003,

0xfb33,	// (0x0001e472) fep_vkb_top_pane_g_ParamLimits

0xfb33,	// (0x0001e472) fep_vkb_top_pane_g

0x8a2c,	// (0x0001736b) fep_vkb_top_text_pane_ParamLimits

0x8a2c,	// (0x0001736b) fep_vkb_top_text_pane

0xd384,	// (0x0001bcc3) fep_vkb_side_pane_g1_ParamLimits

0xd384,	// (0x0001bcc3) fep_vkb_side_pane_g1

0x8a4b,	// (0x0001738a) grid_vkb_side_pane_ParamLimits

0x8a4b,	// (0x0001738a) grid_vkb_side_pane

0xd464,	// (0x0001bda3) bg_popup_fep_shadow_pane_g2

0xd46d,	// (0x0001bdac) bg_popup_fep_shadow_pane_g3

0xd475,	// (0x0001bdb4) bg_popup_fep_shadow_pane_g4

0xd47e,	// (0x0001bdbd) bg_popup_fep_shadow_pane_g5

0xd486,	// (0x0001bdc5) bg_popup_fep_shadow_pane_g6

0xd48e,	// (0x0001bdcd) bg_popup_fep_shadow_pane_g7

0x3116,	// (0x00011a55) bg_popup_fep_shadow_pane_g8

0x8a9c,	// (0x000173db) grid_vkb_keypad_number_pane_ParamLimits

0x8a9c,	// (0x000173db) grid_vkb_keypad_number_pane

0x8aac,	// (0x000173eb) grid_vkb_keypad_pane_ParamLimits

0x8aac,	// (0x000173eb) grid_vkb_keypad_pane

0x8ad2,	// (0x00017411) fep_vkb_bottom_pane_g1_ParamLimits

0x8ad2,	// (0x00017411) fep_vkb_bottom_pane_g1

0x8afb,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x8afb,	// (0x0001743a) grid_vkb_keypad_bottom_left_pane

0x8b10,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x8b10,	// (0x0001744f) grid_vkb_keypad_bottom_right_pane

0x8b25,	// (0x00017464) fep_vkb_top_text_pane_g1

0xd3ce,	// (0x0001bd0d) fep_vkb_top_text_pane_t1

0xd3e3,	// (0x0001bd22) cell_vkb_side_pane_ParamLimits

0xd3e3,	// (0x0001bd22) cell_vkb_side_pane

0x6e5c,	// (0x0001579b) cell_vkb_side_pane_g1

0x8b4d,	// (0x0001748c) cell_vkb_keypad_pane_ParamLimits

0x8b4d,	// (0x0001748c) cell_vkb_keypad_pane

0x8bba,	// (0x000174f9) cell_vkb_keypad_pane_g1

0x0008,

0xfb60,	// (0x0001e49f) bg_popup_fep_shadow_pane_g

0x6e5c,	// (0x0001579b) cell_hwr_side_pane_g1

0x6e5c,	// (0x0001579b) cell_hwr_side_pane_g2

0x8bc4,	// (0x00017503) cell_vkb_keypad_pane_t1

0xd406,	// (0x0001bd45) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd406,	// (0x0001bd45) cell_vkb_keypad_bottom_left_pane

0xd423,	// (0x0001bd62) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd423,	// (0x0001bd62) cell_vkb_keypad_bottom_right_pane

0x6e5c,	// (0x0001579b) cell_vkb_keypad_bottom_left_pane_g1

0x6e5c,	// (0x0001579b) cell_vkb_keypad_bottom_right_pane_g1

0x8bd2,	// (0x00017511) cell_vkb_keypad_number_pane_ParamLimits

0x8bd2,	// (0x00017511) cell_vkb_keypad_number_pane

0x8bf1,	// (0x00017530) cell_vkb_keypad_number_pane_g1

0x8bfb,	// (0x0001753a) cell_vkb_keypad_number_pane_g2

0x8c04,	// (0x00017543) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb52,	// (0x0001e491) cell_vkb_keypad_number_pane_g

0x8bc4,	// (0x00017503) cell_vkb_keypad_number_pane_t1

0x8c26,	// (0x00017565) fep_vkb_candidate_pane_g1

0x0001,

0xfb4d,	// (0x0001e48c) cell_hwr_side_pane_g

0x8c3f,	// (0x0001757e) cell_hwr_side_pane_t1

0xd49e,	// (0x0001bddd) cell_hwr_side_pane_t1_copy1

0x8a1e,	// (0x0001735d) cell_hwr_candidate_pane_g1

0xd4ac,	// (0x0001bdeb) cell_hwr_candidate_pane_t1

0x6e5c,	// (0x0001579b) cell_vkb_candidate_pane_g2

0x8c83,	// (0x000175c2) cell_vkb_candidate_pane_t1

0xd19a,	// (0x0001bad9) bg_popup_fep_shadow_pane_ParamLimits

0xd19a,	// (0x0001bad9) bg_popup_fep_shadow_pane

0x9a39,	// (0x00018378) bg_fep_hwr_top_pane_g4

0x6edb,	// (0x0001581a) bg_hwr_side_pane_g1_ParamLimits

0x6edb,	// (0x0001581a) bg_hwr_side_pane_g1

0xd2ac,	// (0x0001bbeb) cell_hwr_side_pane_ParamLimits

0xd2ac,	// (0x0001bbeb) cell_hwr_side_pane

0xd2e7,	// (0x0001bc26) fep_hwr_write_pane_g1_ParamLimits

0xd2e7,	// (0x0001bc26) fep_hwr_write_pane_g1

0xd2f4,	// (0x0001bc33) fep_hwr_write_pane_g2_ParamLimits

0xd2f4,	// (0x0001bc33) fep_hwr_write_pane_g2

0xd301,	// (0x0001bc40) fep_hwr_write_pane_g3_ParamLimits

0xd301,	// (0x0001bc40) fep_hwr_write_pane_g3

0xd30f,	// (0x0001bc4e) fep_hwr_write_pane_g4_ParamLimits

0xd30f,	// (0x0001bc4e) fep_hwr_write_pane_g4

0x0005,

0xfb1f,	// (0x0001e45e) fep_hwr_write_pane_g_ParamLimits

0xfb1f,	// (0x0001e45e) fep_hwr_write_pane_g

0x9a39,	// (0x00018378) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x9a39,	// (0x00018378) bg_fep_hwr_candidate_pane_g2

0xd324,	// (0x0001bc63) cell_hwr_candidate_pane_ParamLimits

0xd324,	// (0x0001bc63) cell_hwr_candidate_pane

0xd35e,	// (0x0001bc9d) fep_hwr_candidate_pane_g1_ParamLimits

0x88cf,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x88cf,	// (0x0001720e) bg_popup_fep_shadow_pane_cp2

0x8a1e,	// (0x0001735d) fep_vkb_top_pane_g4_ParamLimits

0x8a1e,	// (0x0001735d) fep_vkb_top_pane_g4

0x8a3d,	// (0x0001737c) fep_vkb_side_pane_g2_ParamLimits

0x8a3d,	// (0x0001737c) fep_vkb_side_pane_g2

0xb25b,	// (0x00019b9a) list_setting_pane_t4_ParamLimits

0xb25b,	// (0x00019b9a) list_setting_pane_t4

0xb2f1,	// (0x00019c30) list_setting_number_pane_t5_ParamLimits

0xb2f1,	// (0x00019c30) list_setting_number_pane_t5

0x37af,	// (0x000120ee) list_double_heading_pane_cp2_ParamLimits

0x37af,	// (0x000120ee) list_double_heading_pane_cp2

0x2fe0,	// (0x0001191f) list_double_heading_pane_g1_cp2_ParamLimits

0x2fe0,	// (0x0001191f) list_double_heading_pane_g1_cp2

0x2fec,	// (0x0001192b) list_double_heading_pane_g2_cp2_ParamLimits

0x2fec,	// (0x0001192b) list_double_heading_pane_g2_cp2

0x8c91,	// (0x000175d0) list_double_heading_pane_t1_cp2_ParamLimits

0x8c91,	// (0x000175d0) list_double_heading_pane_t1_cp2

0x8ca7,	// (0x000175e6) list_double_heading_pane_t2_cp2_ParamLimits

0x8ca7,	// (0x000175e6) list_double_heading_pane_t2_cp2

0x21ba,	// (0x00010af9) aid_value_unit2

0xc0ec,	// (0x0001aa2b) popup_preview_fixed_window

0x255d,	// (0x00010e9c) bg_popup_preview_window_pane_cp02

0x8cb9,	// (0x000175f8) list_preview_fixed_pane

0x8cff,	// (0x0001763e) list_empty_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_empty_pane_fp

0x8cff,	// (0x0001763e) list_single_cale_day_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_cale_day_pane_fp

0x8cff,	// (0x0001763e) list_single_graphic_heading_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_graphic_heading_pane_fp

0x8cff,	// (0x0001763e) list_single_graphic_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_graphic_pane_fp

0x8cff,	// (0x0001763e) list_single_heading_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_heading_pane_fp

0x8cff,	// (0x0001763e) list_single_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_pane_fp

0x8d12,	// (0x00017651) list_single_pane_fp_g1_ParamLimits

0x8d12,	// (0x00017651) list_single_pane_fp_g1

0xba9d,	// (0x0001a3dc) list_single_pane_fp_g2_ParamLimits

0xba9d,	// (0x0001a3dc) list_single_pane_fp_g2

0xbaa9,	// (0x0001a3e8) list_single_pane_fp_g3_ParamLimits

0xbaa9,	// (0x0001a3e8) list_single_pane_fp_g3

0x8d3e,	// (0x0001767d) list_single_pane_fp_g4_ParamLimits

0x8d3e,	// (0x0001767d) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x0001e4c0) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x0001e4c0) list_single_pane_fp_g

0xbabd,	// (0x0001a3fc) list_single_pane_fp_t1_ParamLimits

0xbabd,	// (0x0001a3fc) list_single_pane_fp_t1

0xbad4,	// (0x0001a413) list_single_graphic_pane_fp_g1_ParamLimits

0xbad4,	// (0x0001a413) list_single_graphic_pane_fp_g1

0x8d12,	// (0x00017651) list_single_graphic_pane_fp_g2_ParamLimits

0x8d12,	// (0x00017651) list_single_graphic_pane_fp_g2

0xba9d,	// (0x0001a3dc) list_single_graphic_pane_fp_g3_ParamLimits

0xba9d,	// (0x0001a3dc) list_single_graphic_pane_fp_g3

0xbaa9,	// (0x0001a3e8) list_single_graphic_pane_fp_g4_ParamLimits

0xbaa9,	// (0x0001a3e8) list_single_graphic_pane_fp_g4

0x8d3e,	// (0x0001767d) list_single_graphic_pane_fp_g5_ParamLimits

0x8d3e,	// (0x0001767d) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001e4c9) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001e4c9) list_single_graphic_pane_fp_g

0xbae0,	// (0x0001a41f) list_single_graphic_pane_fp_t1_ParamLimits

0xbae0,	// (0x0001a41f) list_single_graphic_pane_fp_t1

0xbad4,	// (0x0001a413) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xbad4,	// (0x0001a413) list_single_graphic_heading_pane_fp_g1

0x8d12,	// (0x00017651) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x8d12,	// (0x00017651) list_single_graphic_heading_pane_fp_g2

0xba9d,	// (0x0001a3dc) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xba9d,	// (0x0001a3dc) list_single_graphic_heading_pane_fp_g3

0xbaa9,	// (0x0001a3e8) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xbaa9,	// (0x0001a3e8) list_single_graphic_heading_pane_fp_g4

0x8d3e,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x8d3e,	// (0x0001767d) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001e4c9) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001e4c9) list_single_graphic_heading_pane_fp_g

0xbaf6,	// (0x0001a435) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xbaf6,	// (0x0001a435) list_single_graphic_heading_pane_fp_t1

0xbb0c,	// (0x0001a44b) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xbb0c,	// (0x0001a44b) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x0001e4d4) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x0001e4d4) list_single_graphic_heading_pane_fp_t

0xbb1e,	// (0x0001a45d) list_single_cale_day_pane_fp_g1_ParamLimits

0xbb1e,	// (0x0001a45d) list_single_cale_day_pane_fp_g1

0x8de3,	// (0x00017722) list_single_cale_day_pane_fp_g2_ParamLimits

0x8de3,	// (0x00017722) list_single_cale_day_pane_fp_g2

0xbb56,	// (0x0001a495) list_single_cale_day_pane_fp_g3_ParamLimits

0xbb56,	// (0x0001a495) list_single_cale_day_pane_fp_g3

0xbb7e,	// (0x0001a4bd) list_single_cale_day_pane_fp_g4_ParamLimits

0xbb7e,	// (0x0001a4bd) list_single_cale_day_pane_fp_g4

0xbba2,	// (0x0001a4e1) list_single_cale_day_pane_fp_g5_ParamLimits

0xbba2,	// (0x0001a4e1) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x0001e4d9) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x0001e4d9) list_single_cale_day_pane_fp_g

0xbbc6,	// (0x0001a505) list_single_cale_day_pane_fp_t1_ParamLimits

0xbbc6,	// (0x0001a505) list_single_cale_day_pane_fp_t1

0xbbec,	// (0x0001a52b) list_single_cale_day_pane_fp_t2_ParamLimits

0xbbec,	// (0x0001a52b) list_single_cale_day_pane_fp_t2

0xbc05,	// (0x0001a544) list_single_cale_day_pane_fp_t3_ParamLimits

0xbc05,	// (0x0001a544) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x0001e4e4) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x0001e4e4) list_single_cale_day_pane_fp_t

0x8d12,	// (0x00017651) list_empty_pane_fp_g1_ParamLimits

0x8d12,	// (0x00017651) list_empty_pane_fp_g1

0xbc1e,	// (0x0001a55d) list_empty_pane_fp_t1

0xbc2c,	// (0x0001a56b) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x0001e4eb) list_empty_pane_fp_t

0x8d12,	// (0x00017651) list_single_heading_pane_fp_g1_ParamLimits

0x8d12,	// (0x00017651) list_single_heading_pane_fp_g1

0xba9d,	// (0x0001a3dc) list_single_heading_pane_fp_g2_ParamLimits

0xba9d,	// (0x0001a3dc) list_single_heading_pane_fp_g2

0xbaa9,	// (0x0001a3e8) list_single_heading_pane_fp_g3_ParamLimits

0xbaa9,	// (0x0001a3e8) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x0001e4f0) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x0001e4f0) list_single_heading_pane_fp_g

0xbc3a,	// (0x0001a579) list_single_heading_pane_fp_t1_ParamLimits

0xbc3a,	// (0x0001a579) list_single_heading_pane_fp_t1

0xbc4c,	// (0x0001a58b) list_single_heading_pane_fp_t2_ParamLimits

0xbc4c,	// (0x0001a58b) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x0001e4f7) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x0001e4f7) list_single_heading_pane_fp_t

0x331b,	// (0x00011c5a) aid_size_cell_fast

0x24cf,	// (0x00010e0e) soft_indicator_pane_cp1_t1

0x3358,	// (0x00011c97) cell_app_pane_cp2_ParamLimits

0x3358,	// (0x00011c97) cell_app_pane_cp2

0xd1bc,	// (0x0001bafb) fep_hwr_candidate_drop_down_list_pane

0x9a47,	// (0x00018386) fep_hwr_candidate_pane_g3_ParamLimits

0x9a47,	// (0x00018386) fep_hwr_candidate_pane_g3

0x9a54,	// (0x00018393) fep_hwr_candidate_pane_g4_ParamLimits

0x9a54,	// (0x00018393) fep_hwr_candidate_pane_g4

0x0002,

0xfb2c,	// (0x0001e46b) fep_hwr_candidate_pane_g_ParamLimits

0xfb2c,	// (0x0001e46b) fep_hwr_candidate_pane_g

0x8937,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x8937,	// (0x00017276) fep_vkb_candidate_drop_down_list_pane

0x8c2e,	// (0x0001756d) fep_vkb_candidate_pane_g3

0x8c36,	// (0x00017575) fep_vkb_candidate_pane_g4

0x0002,

0xfb59,	// (0x0001e498) fep_vkb_candidate_pane_g

0x8a1e,	// (0x0001735d) cell_hwr_candidate_pane_g1_ParamLimits

0x8f83,	// (0x000178c2) cell_hwr_candidate_pane_g3_ParamLimits

0x8f83,	// (0x000178c2) cell_hwr_candidate_pane_g3

0x8fa4,	// (0x000178e3) cell_hwr_candidate_pane_g4_ParamLimits

0x8fa4,	// (0x000178e3) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x0001e4b2) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x0001e4b2) cell_hwr_candidate_pane_g

0x8c4d,	// (0x0001758c) cell_vkb_candidate_pane_g3_ParamLimits

0x8c4d,	// (0x0001758c) cell_vkb_candidate_pane_g3

0x8c68,	// (0x000175a7) cell_vkb_candidate_pane_g4_ParamLimits

0x8c68,	// (0x000175a7) cell_vkb_candidate_pane_g4

0x8efb,	// (0x0001783a) cell_app_pane_cp2_g1_ParamLimits

0x8efb,	// (0x0001783a) cell_app_pane_cp2_g1

0x8f19,	// (0x00017858) cell_app_pane_cp2_g2_ParamLimits

0x8f19,	// (0x00017858) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x0001e4fc) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x0001e4fc) cell_app_pane_cp2_g

0x8f25,	// (0x00017864) cell_app_pane_cp2_t1_ParamLimits

0x8f25,	// (0x00017864) cell_app_pane_cp2_t1

0x2fb5,	// (0x000118f4) grid_highlight_pane_cp1_ParamLimits

0x2fb5,	// (0x000118f4) grid_highlight_pane_cp1

0xd4c9,	// (0x0001be08) cell_hwr_candidate_pane_cp1_ParamLimits

0xd4c9,	// (0x0001be08) cell_hwr_candidate_pane_cp1

0x8a1e,	// (0x0001735d) fep_hwr_candidate_drop_down_list_pane_g1

0x8f37,	// (0x00017876) fep_hwr_candidate_drop_down_list_pane_g2

0x8f44,	// (0x00017883) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0001e501) fep_hwr_candidate_drop_down_list_pane_g

0xd4e7,	// (0x0001be26) fep_hwr_candidate_drop_down_list_scroll_pane

0xd4f0,	// (0x0001be2f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xd4f0,	// (0x0001be2f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xd4fd,	// (0x0001be3c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xd4fd,	// (0x0001be3c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xd50a,	// (0x0001be49) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xd50a,	// (0x0001be49) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x8c4d,	// (0x0001758c) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8c4d,	// (0x0001758c) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x8c68,	// (0x000175a7) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8c68,	// (0x000175a7) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xd517,	// (0x0001be56) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xd517,	// (0x0001be56) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xd532,	// (0x0001be71) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xd532,	// (0x0001be71) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xd54d,	// (0x0001be8c) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xd54d,	// (0x0001be8c) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x0001e508) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x0001e508) fep_hwr_candidate_drop_down_list_scroll_pane_g

0xd568,	// (0x0001bea7) cell_vkb_candidate_pane_cp1_ParamLimits

0xd568,	// (0x0001bea7) cell_vkb_candidate_pane_cp1

0x8a1e,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) fep_vkb_candidate_drop_down_list_pane_g1

0x8f37,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x8f37,	// (0x00017876) fep_vkb_candidate_drop_down_list_pane_g2

0x8f44,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x8f44,	// (0x00017883) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x0001e501) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbc2,	// (0x0001e501) fep_vkb_candidate_drop_down_list_pane_g

0x8f51,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x8f51,	// (0x00017890) fep_vkb_candidate_drop_down_list_scroll_pane

0x8f5e,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x8f5e,	// (0x0001789d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x8f6b,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x8f6b,	// (0x000178aa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x8f77,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x8f77,	// (0x000178b6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x8f83,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x8f83,	// (0x000178c2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x8fa4,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x8fa4,	// (0x000178e3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x8fc5,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x8fc5,	// (0x00017904) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x8fe6,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x8fe6,	// (0x00017925) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x9007,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9007,	// (0x00017946) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbda,	// (0x0001e519) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbda,	// (0x0001e519) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x21ee,	// (0x00010b2d) title_pane_g1_ParamLimits

0x21fb,	// (0x00010b3a) title_pane_g2_ParamLimits

0xf54e,	// (0x0001de8d) title_pane_g_ParamLimits

0x3760,	// (0x0001209f) aid_call2_pane

0x3758,	// (0x00012097) aid_call_pane

0x3768,	// (0x000120a7) popup_clock_analogue_window_g1

0x3768,	// (0x000120a7) popup_clock_analogue_window_g2

0xc423,	// (0x0001ad62) popup_clock_analogue_window_g3

0xc42c,	// (0x0001ad6b) popup_clock_analogue_window_g4

0x21da,	// (0x00010b19) popup_clock_analogue_window_g5

0x0004,

0xf6f8,	// (0x0001e037) popup_clock_analogue_window_g

0xc434,	// (0x0001ad73) popup_clock_analogue_window_t1

0xc442,	// (0x0001ad81) clock_digital_number_pane_ParamLimits

0xc442,	// (0x0001ad81) clock_digital_number_pane

0xc44e,	// (0x0001ad8d) clock_digital_number_pane_cp02_ParamLimits

0xc44e,	// (0x0001ad8d) clock_digital_number_pane_cp02

0xc45a,	// (0x0001ad99) clock_digital_number_pane_cp03_ParamLimits

0xc45a,	// (0x0001ad99) clock_digital_number_pane_cp03

0xc466,	// (0x0001ada5) clock_digital_number_pane_cp04_ParamLimits

0xc466,	// (0x0001ada5) clock_digital_number_pane_cp04

0xc472,	// (0x0001adb1) clock_digital_separator_pane_ParamLimits

0xc472,	// (0x0001adb1) clock_digital_separator_pane

0xc47e,	// (0x0001adbd) popup_clock_digital_window_t1_ParamLimits

0xc47e,	// (0x0001adbd) popup_clock_digital_window_t1

0x21da,	// (0x00010b19) clock_digital_number_pane_g1

0x21da,	// (0x00010b19) clock_digital_number_pane_g2

0x0001,

0xf703,	// (0x0001e042) clock_digital_number_pane_g

0x21da,	// (0x00010b19) clock_digital_separator_pane_g1

0x21da,	// (0x00010b19) clock_digital_separator_pane_g2

0x0001,

0xf703,	// (0x0001e042) clock_digital_separator_pane_g

0x4131,	// (0x00012a70) aid_fill_nsta_ParamLimits

0x4269,	// (0x00012ba8) indicator_nsta_pane_ParamLimits

0x43dc,	// (0x00012d1b) popup_clock_analogue_window

0x43dc,	// (0x00012d1b) popup_clock_digital_window

0x22c4,	// (0x00010c03) grid_indicator_nsta_pane_ParamLimits

0x68fa,	// (0x00015239) clock_nsta_pane_t2

0x0001,

0xfaac,	// (0x0001e3eb) clock_nsta_pane_t

0xc3e7,	// (0x0001ad26) aid_size_max_handle

0xc3f1,	// (0x0001ad30) aid_size_min_handle

0x3dc5,	// (0x00012704) editor_scroll_pane

0x9022,	// (0x00017961) ex_editor_pane

0x328a,	// (0x00011bc9) scroll_pane_cp13

0x2a29,	// (0x00011368) scroll_pane_cp14

0x3797,	// (0x000120d6) scroll_pane_cp36

0x37c0,	// (0x000120ff) list_single_graphic_hl_pane_cp2_ParamLimits

0x37c0,	// (0x000120ff) list_single_graphic_hl_pane_cp2

0x5c4c,	// (0x0001458b) list_single_graphic_hl_pane_ParamLimits

0x5c4c,	// (0x0001458b) list_single_graphic_hl_pane

0xbc62,	// (0x0001a5a1) aid_size_min_hl_cp1

0x9033,	// (0x00017972) list_highlight_pane_cp34_ParamLimits

0x9033,	// (0x00017972) list_highlight_pane_cp34

0x9044,	// (0x00017983) list_single_graphic_hl_pane_g1_ParamLimits

0x9044,	// (0x00017983) list_single_graphic_hl_pane_g1

0xbc6b,	// (0x0001a5aa) list_single_graphic_hl_pane_g2_ParamLimits

0xbc6b,	// (0x0001a5aa) list_single_graphic_hl_pane_g2

0xbc6b,	// (0x0001a5aa) list_single_graphic_hl_pane_g3_ParamLimits

0xbc6b,	// (0x0001a5aa) list_single_graphic_hl_pane_g3

0xbc77,	// (0x0001a5b6) list_single_graphic_hl_pane_g4_ParamLimits

0xbc77,	// (0x0001a5b6) list_single_graphic_hl_pane_g4

0xbc83,	// (0x0001a5c2) list_single_graphic_hl_pane_g5_ParamLimits

0xbc83,	// (0x0001a5c2) list_single_graphic_hl_pane_g5

0x0004,

0xfbeb,	// (0x0001e52a) list_single_graphic_hl_pane_g_ParamLimits

0xfbeb,	// (0x0001e52a) list_single_graphic_hl_pane_g

0xbc97,	// (0x0001a5d6) list_single_graphic_hl_pane_t1_ParamLimits

0xbc97,	// (0x0001a5d6) list_single_graphic_hl_pane_t1

0x9051,	// (0x00017990) aid_size_min_hl_cp2

0x905a,	// (0x00017999) list_highlight_pane_cp34_cp2_ParamLimits

0x905a,	// (0x00017999) list_highlight_pane_cp34_cp2

0x9044,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x9044,	// (0x00017983) list_single_graphic_hl_pane_g1_cp2

0x9067,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x9067,	// (0x000179a6) list_single_graphic_hl_pane_g2_cp2

0x9073,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x9073,	// (0x000179b2) list_single_graphic_hl_pane_g3_cp2

0x3cfe,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x3cfe,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2

0x907f,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x907f,	// (0x000179be) list_single_graphic_hl_pane_g5_cp2

0xc715,	// (0x0001b054) control_pane_g4_ParamLimits

0xc715,	// (0x0001b054) control_pane_g4

0x4107,	// (0x00012a46) bg_popup_sub_pane_cp10_ParamLimits

0x6e66,	// (0x000157a5) list_choice_list_pane_ParamLimits

0x6e75,	// (0x000157b4) scroll_pane_cp23

0x255d,	// (0x00010e9c) bg_popup_preview_window_pane_cp02_ParamLimits

0x8cb9,	// (0x000175f8) list_preview_fixed_pane_ParamLimits

0x8ccf,	// (0x0001760e) list_preview_fixed_pane_cp_ParamLimits

0x8ccf,	// (0x0001760e) list_preview_fixed_pane_cp

0x8cdb,	// (0x0001761a) popup_preview_fixed_window_g1_ParamLimits

0x8cdb,	// (0x0001761a) popup_preview_fixed_window_g1

0x8ce7,	// (0x00017626) popup_preview_fixed_window_g2_ParamLimits

0x8ce7,	// (0x00017626) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x0001e4b9) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x0001e4b9) popup_preview_fixed_window_g

0xc363,	// (0x0001aca2) aid_navi_side_left_pane_ParamLimits

0xc374,	// (0x0001acb3) aid_navi_side_right_pane_ParamLimits

0xc388,	// (0x0001acc7) navi_icon_pane_stacon_ParamLimits

0xc39c,	// (0x0001acdb) navi_navi_pane_stacon_ParamLimits

0xc388,	// (0x0001acc7) navi_text_pane_stacon_ParamLimits

0x21d0,	// (0x00010b0f) main_text_info_pane

0x90a9,	// (0x000179e8) listscroll_text_info_pane

0x90b1,	// (0x000179f0) list_text_info_pane_ParamLimits

0x90b1,	// (0x000179f0) list_text_info_pane

0x90c0,	// (0x000179ff) scroll_pane_cp24_ParamLimits

0x90c0,	// (0x000179ff) scroll_pane_cp24

0xd58b,	// (0x0001beca) list_text_info_pane_t1_ParamLimits

0xd58b,	// (0x0001beca) list_text_info_pane_t1

0xc874,	// (0x0001b1b3) popup_fast_swap2_window_ParamLimits

0xc874,	// (0x0001b1b3) popup_fast_swap2_window

0x90de,	// (0x00017a1d) aid_size_cell_fast2

0x21d0,	// (0x00010b0f) bg_popup_window_pane_cp17

0x4aeb,	// (0x0001342a) heading_pane_cp2

0x27a8,	// (0x000110e7) listscroll_fast2_pane

0x90e8,	// (0x00017a27) grid_fast2_pane

0x90f0,	// (0x00017a2f) listscroll_fast2_pane_g1

0x90f8,	// (0x00017a37) listscroll_fast2_pane_g2

0x0001,

0xfbf6,	// (0x0001e535) listscroll_fast2_pane_g

0x328a,	// (0x00011bc9) scroll_pane_cp26

0x9100,	// (0x00017a3f) cell_fast2_pane_ParamLimits

0x9100,	// (0x00017a3f) cell_fast2_pane

0x9115,	// (0x00017a54) cell_fast2_pane_g1

0x911e,	// (0x00017a5d) cell_fast2_pane_g2

0x9127,	// (0x00017a66) cell_fast2_pane_g3

0x0002,

0xfbfb,	// (0x0001e53a) cell_fast2_pane_g

0x2882,	// (0x000111c1) grid_highlight_pane_cp9

0x2897,	// (0x000111d6) main_eswt_pane_ParamLimits

0x2897,	// (0x000111d6) main_eswt_pane

0x90d5,	// (0x00017a14) list_single_text_info_pane

0x912f,	// (0x00017a6e) eswt_ctrl_button_pane

0x912f,	// (0x00017a6e) eswt_ctrl_canvas_pane

0x9137,	// (0x00017a76) eswt_ctrl_combo_pane

0x912f,	// (0x00017a6e) eswt_ctrl_default_pane

0x912f,	// (0x00017a6e) eswt_ctrl_label_pane

0x913f,	// (0x00017a7e) eswt_ctrl_wait_pane

0x9147,	// (0x00017a86) eswt_shell_pane

0x21d0,	// (0x00010b0f) listscroll_eswt_app_pane

0x9163,	// (0x00017aa2) popup_eswt_tasktip_window_ParamLimits

0x9163,	// (0x00017aa2) popup_eswt_tasktip_window

0x4739,	// (0x00013078) bg_popup_window_pane_cp18

0x9174,	// (0x00017ab3) eswt_control_pane_g1_ParamLimits

0x9174,	// (0x00017ab3) eswt_control_pane_g1

0x9181,	// (0x00017ac0) eswt_control_pane_g2_ParamLimits

0x9181,	// (0x00017ac0) eswt_control_pane_g2

0x918e,	// (0x00017acd) eswt_control_pane_g3_ParamLimits

0x918e,	// (0x00017acd) eswt_control_pane_g3

0x919b,	// (0x00017ada) eswt_control_pane_g4_ParamLimits

0x919b,	// (0x00017ada) eswt_control_pane_g4

0x0003,

0xfc02,	// (0x0001e541) eswt_control_pane_g_ParamLimits

0xfc02,	// (0x0001e541) eswt_control_pane_g

0x2fb5,	// (0x000118f4) bg_button_pane_ParamLimits

0x2fb5,	// (0x000118f4) bg_button_pane

0x2897,	// (0x000111d6) common_borders_pane_copy2_ParamLimits

0x2897,	// (0x000111d6) common_borders_pane_copy2

0x91a8,	// (0x00017ae7) control_button_pane_g1_ParamLimits

0x91a8,	// (0x00017ae7) control_button_pane_g1

0x91b4,	// (0x00017af3) control_button_pane_g2_ParamLimits

0x91b4,	// (0x00017af3) control_button_pane_g2

0x91c0,	// (0x00017aff) control_button_pane_g3_ParamLimits

0x91c0,	// (0x00017aff) control_button_pane_g3

0x0002,

0xfc0b,	// (0x0001e54a) control_button_pane_g_ParamLimits

0xfc0b,	// (0x0001e54a) control_button_pane_g

0x91d4,	// (0x00017b13) control_button_pane_t1

0x91e2,	// (0x00017b21) control_button_pane_t2

0x0001,

0xfc12,	// (0x0001e551) control_button_pane_t

0x4623,	// (0x00012f62) bg_button_pane_g1

0x4633,	// (0x00012f72) bg_button_pane_g2

0x462b,	// (0x00012f6a) bg_button_pane_g3

0x4643,	// (0x00012f82) bg_button_pane_g4

0x463b,	// (0x00012f7a) bg_button_pane_g5

0x464b,	// (0x00012f8a) bg_button_pane_g6

0x4653,	// (0x00012f92) bg_button_pane_g7

0x4663,	// (0x00012fa2) bg_button_pane_g8

0x465b,	// (0x00012f9a) bg_button_pane_g9

0x0008,

0xf85f,	// (0x0001e19e) bg_button_pane_g

0x6e21,	// (0x00015760) common_borders_pane_ParamLimits

0x6e21,	// (0x00015760) common_borders_pane

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy1_ParamLimits

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy1

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy1_ParamLimits

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy1

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy1_ParamLimits

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy1

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy1_ParamLimits

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy1

0x6e5c,	// (0x0001579b) bg_eswt_ctrl_canvas_pane_g1

0x6e21,	// (0x00015760) common_borders_pane_cp2_ParamLimits

0x6e21,	// (0x00015760) common_borders_pane_cp2

0x6e21,	// (0x00015760) common_borders_pane_cp3_ParamLimits

0x6e21,	// (0x00015760) common_borders_pane_cp3

0x91f0,	// (0x00017b2f) separator_horizontal_pane

0x91f8,	// (0x00017b37) separator_vertical_pane

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy2_ParamLimits

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy2

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy2_ParamLimits

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy2

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy2_ParamLimits

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy2

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy2_ParamLimits

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy2

0x21d0,	// (0x00010b0f) common_borders_pane_cp4

0x9201,	// (0x00017b40) separator_horizontal_pane_g1

0x920a,	// (0x00017b49) separator_horizontal_pane_g2

0x9213,	// (0x00017b52) separator_horizontal_pane_g3

0x0002,

0xfc17,	// (0x0001e556) separator_horizontal_pane_g

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy3_ParamLimits

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy3

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy3_ParamLimits

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy3

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy3_ParamLimits

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy3

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy3_ParamLimits

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy3

0x21d0,	// (0x00010b0f) common_borders_pane_cp5

0x921c,	// (0x00017b5b) separator_vertical_pane_g1

0x9225,	// (0x00017b64) separator_vertical_pane_g2

0x922e,	// (0x00017b6d) separator_vertical_pane_g3

0x0002,

0xfc1e,	// (0x0001e55d) separator_vertical_pane_g

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy4_ParamLimits

0x9174,	// (0x00017ab3) eswt_control_pane_g1_copy4

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy4_ParamLimits

0x9181,	// (0x00017ac0) eswt_control_pane_g2_copy4

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy4_ParamLimits

0x918e,	// (0x00017acd) eswt_control_pane_g3_copy4

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy4_ParamLimits

0x919b,	// (0x00017ada) eswt_control_pane_g4_copy4

0xd5a6,	// (0x0001bee5) eswt_ctrl_combo_button_pane

0xd5ae,	// (0x0001beed) eswt_ctrl_input_pane

0xd5b6,	// (0x0001bef5) popup_choice_list_window_cp70

0xd5be,	// (0x0001befd) eswt_ctrl_input_pane_t1

0x21d0,	// (0x00010b0f) input_focus_pane_cp70

0x6e21,	// (0x00015760) bg_button_pane_cp70_ParamLimits

0x6e21,	// (0x00015760) bg_button_pane_cp70

0xd5cc,	// (0x0001bf0b) eswt_ctrl_combo_button_pane_g1

0x9237,	// (0x00017b76) wait_bar_pane_cp70

0x4739,	// (0x00013078) bg_popup_window_pane_cp70_ParamLimits

0x4739,	// (0x00013078) bg_popup_window_pane_cp70

0x923f,	// (0x00017b7e) popup_eswt_tasktip_window_t1

0x9255,	// (0x00017b94) wait_bar_pane_cp71_ParamLimits

0x9255,	// (0x00017b94) wait_bar_pane_cp71

0x9261,	// (0x00017ba0) grid_eswt_app_pane

0x359d,	// (0x00011edc) scroll_pane_cp70

0xd5d4,	// (0x0001bf13) cell_eswt_app_pane_ParamLimits

0xd5d4,	// (0x0001bf13) cell_eswt_app_pane

0xd5fc,	// (0x0001bf3b) cell_eswt_app_pane_g1_ParamLimits

0xd5fc,	// (0x0001bf3b) cell_eswt_app_pane_g1

0xd62b,	// (0x0001bf6a) cell_eswt_app_pane_g2_ParamLimits

0xd62b,	// (0x0001bf6a) cell_eswt_app_pane_g2

0x0001,

0xfc25,	// (0x0001e564) cell_eswt_app_pane_g_ParamLimits

0xfc25,	// (0x0001e564) cell_eswt_app_pane_g

0xd654,	// (0x0001bf93) cell_eswt_app_pane_t1_ParamLimits

0xd654,	// (0x0001bf93) cell_eswt_app_pane_t1

0x926a,	// (0x00017ba9) grid_highlight_pane_cp70_ParamLimits

0x926a,	// (0x00017ba9) grid_highlight_pane_cp70

0x2a3d,	// (0x0001137c) set_content_pane_g1

0x4060,	// (0x0001299f) status_small_volume_pane

0xd686,	// (0x0001bfc5) status_small_volume_pane_g1

0xd68e,	// (0x0001bfcd) volume_small2_pane

0xd697,	// (0x0001bfd6) volume_small2_pane_g1

0xd6a0,	// (0x0001bfdf) volume_small2_pane_g2

0xd6a9,	// (0x0001bfe8) volume_small2_pane_g3

0xd6b2,	// (0x0001bff1) volume_small2_pane_g4

0xd6bb,	// (0x0001bffa) volume_small2_pane_g5

0xd6c4,	// (0x0001c003) volume_small2_pane_g6

0xd6cd,	// (0x0001c00c) volume_small2_pane_g7

0xd6d6,	// (0x0001c015) volume_small2_pane_g8

0xd6df,	// (0x0001c01e) volume_small2_pane_g9

0xd6e8,	// (0x0001c027) volume_small2_pane_g10

0x0009,

0xfc2a,	// (0x0001e569) volume_small2_pane_g

0x8b25,	// (0x00017464) fep_vkb_top_text_pane_g1_ParamLimits

0xd3ce,	// (0x0001bd0d) fep_vkb_top_text_pane_t1_ParamLimits

0x8cf3,	// (0x00017632) popup_preview_fixed_window_g3_ParamLimits

0x8cf3,	// (0x00017632) popup_preview_fixed_window_g3

0xcc4f,	// (0x0001b58e) popup_toolbar_trans_pane

0x5a00,	// (0x0001433f) aid_height_set_list_ParamLimits

0x5a11,	// (0x00014350) aid_size_parent_ParamLimits

0x4107,	// (0x00012a46) list_highlight_pane_cp2_ParamLimits

0x2a3d,	// (0x0001137c) set_content_pane_g1_ParamLimits

0x5c5d,	// (0x0001459c) list_single_image_pane_ParamLimits

0x5c5d,	// (0x0001459c) list_single_image_pane

0xd6f1,	// (0x0001c030) aid_size_cell_image_ParamLimits

0xd6f1,	// (0x0001c030) aid_size_cell_image

0xd6fe,	// (0x0001c03d) grid_single_image_pane_ParamLimits

0xd6fe,	// (0x0001c03d) grid_single_image_pane

0x2fe0,	// (0x0001191f) list_single_image_pane_g1_ParamLimits

0x2fe0,	// (0x0001191f) list_single_image_pane_g1

0x2fec,	// (0x0001192b) list_single_image_pane_g2_ParamLimits

0x2fec,	// (0x0001192b) list_single_image_pane_g2

0x0001,

0xfc3f,	// (0x0001e57e) list_single_image_pane_g_ParamLimits

0xfc3f,	// (0x0001e57e) list_single_image_pane_g

0x887f,	// (0x000171be) list_single_image_pane_t1_ParamLimits

0x887f,	// (0x000171be) list_single_image_pane_t1

0xd70a,	// (0x0001c049) cell_image_list_pane_ParamLimits

0xd70a,	// (0x0001c049) cell_image_list_pane

0xd71d,	// (0x0001c05c) cell_image_list_pane_g1

0xd726,	// (0x0001c065) cell_image_list_pane_g2

0x0001,

0xfc44,	// (0x0001e583) cell_image_list_pane_g

0x9276,	// (0x00017bb5) aid_size_cell_tb_trans_pane

0x2fb5,	// (0x000118f4) bg_tb_trans_pane

0x9288,	// (0x00017bc7) grid_tb_trans_pane

0x4623,	// (0x00012f62) bg_tb_trans_pane_g1

0x4633,	// (0x00012f72) bg_tb_trans_pane_g2

0x462b,	// (0x00012f6a) bg_tb_trans_pane_g3

0x4643,	// (0x00012f82) bg_tb_trans_pane_g4

0x463b,	// (0x00012f7a) bg_tb_trans_pane_g5

0x4663,	// (0x00012fa2) bg_tb_trans_pane_g6

0x465b,	// (0x00012f9a) bg_tb_trans_pane_g7

0x464b,	// (0x00012f8a) bg_tb_trans_pane_g8

0x4653,	// (0x00012f92) bg_tb_trans_pane_g9

0x0008,

0xfc49,	// (0x0001e588) bg_tb_trans_pane_g

0x929c,	// (0x00017bdb) cell_toolbar_trans_pane_ParamLimits

0x929c,	// (0x00017bdb) cell_toolbar_trans_pane

0x6e5c,	// (0x0001579b) cell_toolbar_trans_pane_g1

0x6a9d,	// (0x000153dc) list_form2_midp_pane_t1

0x6aab,	// (0x000153ea) list_form2_midp_pane_t2

0x0001,

0xfaf2,	// (0x0001e431) list_form2_midp_pane_t

0x6ab9,	// (0x000153f8) scroll_pane_cp51_ParamLimits

0x6cb4,	// (0x000155f3) form2_midp_wait_pane_g1

0x6cbd,	// (0x000155fc) form2_midp_wait_pane_g2

0x6cc6,	// (0x00015605) form2_midp_wait_pane_g3

0x0002,

0xfb07,	// (0x0001e446) form2_midp_wait_pane_g

0x22c4,	// (0x00010c03) list_highlight_pane_cp21_ParamLimits

0x6cf9,	// (0x00015638) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x6d08,	// (0x00015647) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x5c14,	// (0x00014553) list_single_2graphic_im_pane_ParamLimits

0x5c14,	// (0x00014553) list_single_2graphic_im_pane

0xd72f,	// (0x0001c06e) list_single_2graphic_im_pane_g1_ParamLimits

0xd72f,	// (0x0001c06e) list_single_2graphic_im_pane_g1

0x92c2,	// (0x00017c01) list_single_2graphic_im_pane_g2_ParamLimits

0x92c2,	// (0x00017c01) list_single_2graphic_im_pane_g2

0x92ce,	// (0x00017c0d) list_single_2graphic_im_pane_g3_ParamLimits

0x92ce,	// (0x00017c0d) list_single_2graphic_im_pane_g3

0x0003,

0xfc5c,	// (0x0001e59b) list_single_2graphic_im_pane_g_ParamLimits

0xfc5c,	// (0x0001e59b) list_single_2graphic_im_pane_g

0xd740,	// (0x0001c07f) list_single_2graphic_im_pane_t1_ParamLimits

0xd740,	// (0x0001c07f) list_single_2graphic_im_pane_t1

0x8cff,	// (0x0001763e) list_single_graphic_2heading_pane_fp_ParamLimits

0x8cff,	// (0x0001763e) list_single_graphic_2heading_pane_fp

0xbad4,	// (0x0001a413) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xbad4,	// (0x0001a413) list_single_graphic_2heading_pane_fp_g1

0x8d12,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x8d12,	// (0x00017651) list_single_graphic_2heading_pane_fp_g2

0xba9d,	// (0x0001a3dc) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xba9d,	// (0x0001a3dc) list_single_graphic_2heading_pane_fp_g3

0xbaa9,	// (0x0001a3e8) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xbaa9,	// (0x0001a3e8) list_single_graphic_2heading_pane_fp_g4

0x8d3e,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x8d3e,	// (0x0001767d) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x0001e4c9) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x0001e4c9) list_single_graphic_2heading_pane_fp_g

0xbcad,	// (0x0001a5ec) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xbcad,	// (0x0001a5ec) list_single_graphic_2heading_pane_fp_t1

0xbb0c,	// (0x0001a44b) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xbb0c,	// (0x0001a44b) list_single_graphic_2heading_pane_fp_t2

0xbcc3,	// (0x0001a602) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xbcc3,	// (0x0001a602) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc65,	// (0x0001e5a4) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc65,	// (0x0001e5a4) list_single_graphic_2heading_pane_fp_t

0x6ee7,	// (0x00015826) fep_hwr_write_pane_g5_ParamLimits

0x6ee7,	// (0x00015826) fep_hwr_write_pane_g5

0x6ef3,	// (0x00015832) fep_hwr_write_pane_g6_ParamLimits

0x6ef3,	// (0x00015832) fep_hwr_write_pane_g6

0x9147,	// (0x00017a86) eswt_shell_pane_ParamLimits

0x4739,	// (0x00013078) bg_popup_window_pane_cp18_ParamLimits

0x594d,	// (0x0001428c) heading_pane_cp70

0x923f,	// (0x00017b7e) popup_eswt_tasktip_window_t1_ParamLimits

0x417a,	// (0x00012ab9) aid_touch_tab_arrow_left

0x4189,	// (0x00012ac8) aid_touch_tab_arrow_right

0x220c,	// (0x00010b4b) title_pane_g3_ParamLimits

0x220c,	// (0x00010b4b) title_pane_g3

0x2eb2,	// (0x000117f1) set_value_pane_g1

0xcc4f,	// (0x0001b58e) popup_toolbar_trans_pane_ParamLimits

0x9276,	// (0x00017bb5) aid_size_cell_tb_trans_pane_ParamLimits

0x2fb5,	// (0x000118f4) bg_tb_trans_pane_ParamLimits

0x9288,	// (0x00017bc7) grid_tb_trans_pane_ParamLimits

0x255d,	// (0x00010e9c) cont_note_pane_ParamLimits

0x255d,	// (0x00010e9c) cont_note_pane

0x2897,	// (0x000111d6) cont_snote2_single_text_pane_ParamLimits

0x2897,	// (0x000111d6) cont_snote2_single_text_pane

0x2897,	// (0x000111d6) cont_snote2_single_graphic_pane_ParamLimits

0x2897,	// (0x000111d6) cont_snote2_single_graphic_pane

0x4cf5,	// (0x00013634) cont_note_wait_pane_ParamLimits

0x4cf5,	// (0x00013634) cont_note_wait_pane

0x4cf5,	// (0x00013634) cont_note_image_pane_ParamLimits

0x4cf5,	// (0x00013634) cont_note_image_pane

0x931a,	// (0x00017c59) popup_note2_window_g1_ParamLimits

0x931a,	// (0x00017c59) popup_note2_window_g1

0x934b,	// (0x00017c8a) popup_note2_window_t1_ParamLimits

0x934b,	// (0x00017c8a) popup_note2_window_t1

0x9390,	// (0x00017ccf) popup_note2_window_t2_ParamLimits

0x9390,	// (0x00017ccf) popup_note2_window_t2

0x93d5,	// (0x00017d14) popup_note2_window_t3_ParamLimits

0x93d5,	// (0x00017d14) popup_note2_window_t3

0x941a,	// (0x00017d59) popup_note2_window_t4_ParamLimits

0x941a,	// (0x00017d59) popup_note2_window_t4

0x25e1,	// (0x00010f20) popup_note2_window_t5_ParamLimits

0x25e1,	// (0x00010f20) popup_note2_window_t5

0x0004,

0xfc71,	// (0x0001e5b0) popup_note2_window_t_ParamLimits

0xfc71,	// (0x0001e5b0) popup_note2_window_t

0x9449,	// (0x00017d88) popup_note2_image_window_g1_ParamLimits

0x9449,	// (0x00017d88) popup_note2_image_window_g1

0x9455,	// (0x00017d94) popup_note2_image_window_g2_ParamLimits

0x9455,	// (0x00017d94) popup_note2_image_window_g2

0x0001,

0xfc7c,	// (0x0001e5bb) popup_note2_image_window_g_ParamLimits

0xfc7c,	// (0x0001e5bb) popup_note2_image_window_g

0x9467,	// (0x00017da6) popup_note2_image_window_t1_ParamLimits

0x9467,	// (0x00017da6) popup_note2_image_window_t1

0x947f,	// (0x00017dbe) popup_note2_image_window_t2_ParamLimits

0x947f,	// (0x00017dbe) popup_note2_image_window_t2

0x9497,	// (0x00017dd6) popup_note2_image_window_t3_ParamLimits

0x9497,	// (0x00017dd6) popup_note2_image_window_t3

0x0002,

0xfc81,	// (0x0001e5c0) popup_note2_image_window_t_ParamLimits

0xfc81,	// (0x0001e5c0) popup_note2_image_window_t

0x4d03,	// (0x00013642) popup_note2_wait_window_g1_ParamLimits

0x4d03,	// (0x00013642) popup_note2_wait_window_g1

0x4d0f,	// (0x0001364e) popup_note2_wait_window_g2_ParamLimits

0x4d0f,	// (0x0001364e) popup_note2_wait_window_g2

0x4d1b,	// (0x0001365a) popup_note2_wait_window_g3_ParamLimits

0x4d1b,	// (0x0001365a) popup_note2_wait_window_g3

0x0002,

0xf841,	// (0x0001e180) popup_note2_wait_window_g_ParamLimits

0xf841,	// (0x0001e180) popup_note2_wait_window_g

0x94b3,	// (0x00017df2) popup_note2_wait_window_t1_ParamLimits

0x94b3,	// (0x00017df2) popup_note2_wait_window_t1

0x94d1,	// (0x00017e10) popup_note2_wait_window_t2_ParamLimits

0x94d1,	// (0x00017e10) popup_note2_wait_window_t2

0x94ef,	// (0x00017e2e) popup_note2_wait_window_t3_ParamLimits

0x94ef,	// (0x00017e2e) popup_note2_wait_window_t3

0x9501,	// (0x00017e40) popup_note2_wait_window_t4_ParamLimits

0x9501,	// (0x00017e40) popup_note2_wait_window_t4

0x0003,

0xfc88,	// (0x0001e5c7) popup_note2_wait_window_t_ParamLimits

0xfc88,	// (0x0001e5c7) popup_note2_wait_window_t

0x9513,	// (0x00017e52) wait_bar2_pane_ParamLimits

0x9513,	// (0x00017e52) wait_bar2_pane

0x952b,	// (0x00017e6a) popup_snote2_single_text_window_g1_ParamLimits

0x952b,	// (0x00017e6a) popup_snote2_single_text_window_g1

0x9553,	// (0x00017e92) popup_snote2_single_text_window_t1_ParamLimits

0x9553,	// (0x00017e92) popup_snote2_single_text_window_t1

0x959f,	// (0x00017ede) popup_snote2_single_text_window_t2_ParamLimits

0x959f,	// (0x00017ede) popup_snote2_single_text_window_t2

0x95eb,	// (0x00017f2a) popup_snote2_single_text_window_t3_ParamLimits

0x95eb,	// (0x00017f2a) popup_snote2_single_text_window_t3

0x962c,	// (0x00017f6b) popup_snote2_single_text_window_t4_ParamLimits

0x962c,	// (0x00017f6b) popup_snote2_single_text_window_t4

0x9662,	// (0x00017fa1) popup_snote2_single_text_window_t5_ParamLimits

0x9662,	// (0x00017fa1) popup_snote2_single_text_window_t5

0x0004,

0xfc91,	// (0x0001e5d0) popup_snote2_single_text_window_t_ParamLimits

0xfc91,	// (0x0001e5d0) popup_snote2_single_text_window_t

0x968d,	// (0x00017fcc) popup_snote2_single_graphic_window_g1_ParamLimits

0x968d,	// (0x00017fcc) popup_snote2_single_graphic_window_g1

0x96b5,	// (0x00017ff4) popup_snote2_single_graphic_window_g2_ParamLimits

0x96b5,	// (0x00017ff4) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9c,	// (0x0001e5db) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9c,	// (0x0001e5db) popup_snote2_single_graphic_window_g

0x96dd,	// (0x0001801c) popup_snote2_single_graphic_window_t1_ParamLimits

0x96dd,	// (0x0001801c) popup_snote2_single_graphic_window_t1

0x9729,	// (0x00018068) popup_snote2_single_graphic_window_t2_ParamLimits

0x9729,	// (0x00018068) popup_snote2_single_graphic_window_t2

0x95eb,	// (0x00017f2a) popup_snote2_single_graphic_window_t3_ParamLimits

0x95eb,	// (0x00017f2a) popup_snote2_single_graphic_window_t3

0x962c,	// (0x00017f6b) popup_snote2_single_graphic_window_t4_ParamLimits

0x962c,	// (0x00017f6b) popup_snote2_single_graphic_window_t4

0x9662,	// (0x00017fa1) popup_snote2_single_graphic_window_t5_ParamLimits

0x9662,	// (0x00017fa1) popup_snote2_single_graphic_window_t5

0x0004,

0xfca1,	// (0x0001e5e0) popup_snote2_single_graphic_window_t_ParamLimits

0xfca1,	// (0x0001e5e0) popup_snote2_single_graphic_window_t

0x6993,	// (0x000152d2) clock_nsta_pane_cp2_t1

0x6993,	// (0x000152d2) clock_nsta_pane_cp2_t2

0x0001,

0xfac8,	// (0x0001e407) clock_nsta_pane_cp2_t

0xb3f7,	// (0x00019d36) form_field_data_wide_pane_g1_ParamLimits

0x2fe0,	// (0x0001191f) form_field_data_wide_pane_g2_ParamLimits

0x2fe0,	// (0x0001191f) form_field_data_wide_pane_g2

0x2fec,	// (0x0001192b) form_field_data_wide_pane_g3_ParamLimits

0x2fec,	// (0x0001192b) form_field_data_wide_pane_g3

0x0002,

0xf67b,	// (0x0001dfba) form_field_data_wide_pane_g_ParamLimits

0xf67b,	// (0x0001dfba) form_field_data_wide_pane_g

0x6896,	// (0x000151d5) grid_touch_3_pane_ParamLimits

0x6896,	// (0x000151d5) grid_touch_3_pane

0xd771,	// (0x0001c0b0) cell_touch_3_pane_ParamLimits

0xd771,	// (0x0001c0b0) cell_touch_3_pane

0x6e5c,	// (0x0001579b) cell_touch_3_pane_g1

0x6e5c,	// (0x0001579b) cell_touch_3_pane_g2

0x0001,

0xfb4d,	// (0x0001e48c) cell_touch_3_pane_g

0x2613,	// (0x00010f52) cont_query_data_pane

0x261b,	// (0x00010f5a) cont_query_data_pane_cp1

0x9775,	// (0x000180b4) button_value_adjust_pane_cp7

0x977d,	// (0x000180bc) query_popup_pane_cp3

0x3843,	// (0x00012182) bg_popup_sub_pane_cp22_ParamLimits

0xc49d,	// (0x0001addc) navi_navi_volume_pane_cp2

0xc4b5,	// (0x0001adf4) popup_side_volume_key_window_g2

0xc4c1,	// (0x0001ae00) popup_side_volume_key_window_g3

0x0002,

0xf711,	// (0x0001e050) popup_side_volume_key_window_g

0xc4db,	// (0x0001ae1a) popup_side_volume_key_window_t2

0x0001,

0xf718,	// (0x0001e057) popup_side_volume_key_window_t

0x3b71,	// (0x000124b0) popup_side_volume_key_window_ParamLimits

0xb069,	// (0x000199a8) list_double_graphic_pane_g4_ParamLimits

0xb069,	// (0x000199a8) list_double_graphic_pane_g4

0x5c39,	// (0x00014578) list_single_2heading_msg_pane_ParamLimits

0x5c39,	// (0x00014578) list_single_2heading_msg_pane

0xbce1,	// (0x0001a620) list_single_2heading_msg_pane_g1_ParamLimits

0xbce1,	// (0x0001a620) list_single_2heading_msg_pane_g1

0xae9c,	// (0x000197db) list_single_2heading_msg_pane_g2_ParamLimits

0xae9c,	// (0x000197db) list_single_2heading_msg_pane_g2

0xbced,	// (0x0001a62c) list_single_2heading_msg_pane_g3_ParamLimits

0xbced,	// (0x0001a62c) list_single_2heading_msg_pane_g3

0xbcf9,	// (0x0001a638) list_single_2heading_msg_pane_g4_ParamLimits

0xbcf9,	// (0x0001a638) list_single_2heading_msg_pane_g4

0x0003,

0xfcac,	// (0x0001e5eb) list_single_2heading_msg_pane_g_ParamLimits

0xfcac,	// (0x0001e5eb) list_single_2heading_msg_pane_g

0xbd11,	// (0x0001a650) list_single_2heading_msg_pane_t1_ParamLimits

0xbd11,	// (0x0001a650) list_single_2heading_msg_pane_t1

0xbd39,	// (0x0001a678) list_single_2heading_msg_pane_t2_ParamLimits

0xbd39,	// (0x0001a678) list_single_2heading_msg_pane_t2

0xbd6d,	// (0x0001a6ac) list_single_2heading_msg_pane_t3_ParamLimits

0xbd6d,	// (0x0001a6ac) list_single_2heading_msg_pane_t3

0xbda6,	// (0x0001a6e5) list_single_2heading_msg_pane_t4_ParamLimits

0xbda6,	// (0x0001a6e5) list_single_2heading_msg_pane_t4

0x0003,

0xfcb5,	// (0x0001e5f4) list_single_2heading_msg_pane_t_ParamLimits

0xfcb5,	// (0x0001e5f4) list_single_2heading_msg_pane_t

0x2218,	// (0x00010b57) title_pane_g4_ParamLimits

0x2218,	// (0x00010b57) title_pane_g4

0xc2b3,	// (0x0001abf2) title_pane_stacon_g3_ParamLimits

0xc2b3,	// (0x0001abf2) title_pane_stacon_g3

0x92e2,	// (0x00017c21) list_single_2graphic_im_pane_g4_ParamLimits

0x92e2,	// (0x00017c21) list_single_2graphic_im_pane_g4

0x5722,	// (0x00014061) popup_side_volume_key_window_cp

0x5f5c,	// (0x0001489b) main_idle_act2_pane_t1

0xcd2b,	// (0x0001b66a) toolbar_button_pane_g10

0x29f3,	// (0x00011332) popup_toolbar_window_cp1

0x6984,	// (0x000152c3) clock_nsta_pane_cp_t1

0x6984,	// (0x000152c3) clock_nsta_pane_cp_t2

0x0001,

0xfac3,	// (0x0001e402) clock_nsta_pane_cp_t

0xc49d,	// (0x0001addc) navi_navi_volume_pane_cp2_ParamLimits

0xc4a9,	// (0x0001ade8) popup_side_volume_key_window_g1_ParamLimits

0xc4b5,	// (0x0001adf4) popup_side_volume_key_window_g2_ParamLimits

0xc4c1,	// (0x0001ae00) popup_side_volume_key_window_g3_ParamLimits

0xf711,	// (0x0001e050) popup_side_volume_key_window_g_ParamLimits

0xd1a8,	// (0x0001bae7) fep_hwr_aid_pane

0x9a39,	// (0x00018378) bg_fep_hwr_top_pane_g4_ParamLimits

0x6ec9,	// (0x00015808) fep_hwr_top_pane_g1_ParamLimits

0x6eb7,	// (0x000157f6) fep_hwr_top_pane_g2_ParamLimits

0xd25b,	// (0x0001bb9a) fep_hwr_top_pane_g3_ParamLimits

0xfb18,	// (0x0001e457) fep_hwr_top_pane_g_ParamLimits

0xd270,	// (0x0001bbaf) fep_hwr_top_text_pane_ParamLimits

0x54ee,	// (0x00013e2d) aid_touch_tab_arrow_arrow_2

0x54e5,	// (0x00013e24) aid_touch_tab_arrow_left_2

0xd1bc,	// (0x0001bafb) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xd1ef,	// (0x0001bb2e) fep_hwr_prediction_pane

0x8990,	// (0x000172cf) fep_vkb_prediction_pane

0xd3ab,	// (0x0001bcea) fep_vkb_side_pane_g3_ParamLimits

0xd3ab,	// (0x0001bcea) fep_vkb_side_pane_g3

0x8a1e,	// (0x0001735d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x8f37,	// (0x00017876) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x8f44,	// (0x00017883) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x0001e501) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x97d3,	// (0x00018112) fep_hwr_prediction_pane_g1

0xd7b2,	// (0x0001c0f1) fep_hwr_prediction_pane_g2

0x5b61,	// (0x000144a0) fep_hwr_prediction_pane_g3

0xd7ba,	// (0x0001c0f9) fep_hwr_prediction_pane_g4

0x0003,

0xfcbe,	// (0x0001e5fd) fep_hwr_prediction_pane_g

0x97d3,	// (0x00018112) fep_vkb_prediction_pane_g1

0x97dd,	// (0x0001811c) fep_vkb_prediction_pane_g2

0x97e5,	// (0x00018124) fep_vkb_prediction_pane_g3

0x97ed,	// (0x0001812c) fep_vkb_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0001e606) fep_vkb_prediction_pane_g

0xcfd7,	// (0x0001b916) slider_set_pane_g3

0xcfeb,	// (0x0001b92a) slider_set_pane_g4

0xd003,	// (0x0001b942) slider_set_pane_g5

0xcfd7,	// (0x0001b916) slider_set_pane_g6

0xd019,	// (0x0001b958) slider_set_pane_g7

0x5b50,	// (0x0001448f) slider_form_pane_g3

0x5b59,	// (0x00014498) slider_form_pane_g4

0x5b61,	// (0x000144a0) slider_form_pane_g5

0x5b50,	// (0x0001448f) slider_form_pane_g6

0x5b69,	// (0x000144a8) slider_form_pane_g7

0x622c,	// (0x00014b6b) slider_set_pane_vc_g3

0x6235,	// (0x00014b74) slider_set_pane_vc_g4

0x623e,	// (0x00014b7d) slider_set_pane_vc_g5

0x622c,	// (0x00014b6b) slider_set_pane_vc_g6

0x6247,	// (0x00014b86) slider_set_pane_vc_g7

0x667d,	// (0x00014fbc) slider_form_pane_vc_g1

0x6686,	// (0x00014fc5) slider_form_pane_vc_g2

0x668f,	// (0x00014fce) slider_form_pane_vc_g3

0x667d,	// (0x00014fbc) slider_form_pane_vc_g4

0x6698,	// (0x00014fd7) slider_form_pane_vc_g5

0x0004,

0xfa95,	// (0x0001e3d4) slider_form_pane_vc_g

0x21d0,	// (0x00010b0f) main_idle_act3_pane

0x97f5,	// (0x00018134) ai3_links_pane

0xd7c2,	// (0x0001c101) popup_ai3_data_window_ParamLimits

0xd7c2,	// (0x0001c101) popup_ai3_data_window

0x21d0,	// (0x00010b0f) grid_ai3_links_pane

0xd7da,	// (0x0001c119) cell_ai3_links_pane_ParamLimits

0xd7da,	// (0x0001c119) cell_ai3_links_pane

0x97fe,	// (0x0001813d) bg_popup_sub_pane_cp11

0x980b,	// (0x0001814a) cell_ai3_links_pane_g1

0x21d0,	// (0x00010b0f) bg_popup_sub_pane_cp12

0x9830,	// (0x0001816f) heading_ai3_data_pane

0x9838,	// (0x00018177) list_ai3_gene_pane

0x9844,	// (0x00018183) popup_ai3_data_window_g1

0x984c,	// (0x0001818b) heading_ai3_data_pane_g1

0x9854,	// (0x00018193) heading_ai3_data_pane_t1

0x9862,	// (0x000181a1) list_double_ai3_gene_pane_ParamLimits

0x9862,	// (0x000181a1) list_double_ai3_gene_pane

0x986f,	// (0x000181ae) list_single_ai3_gene_pane_ParamLimits

0x986f,	// (0x000181ae) list_single_ai3_gene_pane

0x6e21,	// (0x00015760) list_highlight_pane_cp7_ParamLimits

0x6e21,	// (0x00015760) list_highlight_pane_cp7

0x987c,	// (0x000181bb) list_single_a13_gene_pane_t1_ParamLimits

0x987c,	// (0x000181bb) list_single_a13_gene_pane_t1

0x9893,	// (0x000181d2) list_single_ai3_gene_pane_g1

0x989c,	// (0x000181db) list_single_ai3_gene_pane_g2

0x0001,

0xfcd0,	// (0x0001e60f) list_single_ai3_gene_pane_g

0x98a4,	// (0x000181e3) list_double_ai3_gene_pane_g1_ParamLimits

0x98a4,	// (0x000181e3) list_double_ai3_gene_pane_g1

0x98b0,	// (0x000181ef) list_double_ai3_gene_pane_t1_ParamLimits

0x98b0,	// (0x000181ef) list_double_ai3_gene_pane_t1

0x98cc,	// (0x0001820b) list_double_ai3_gene_pane_t2_ParamLimits

0x98cc,	// (0x0001820b) list_double_ai3_gene_pane_t2

0x98e2,	// (0x00018221) list_double_ai3_gene_pane_t3_ParamLimits

0x98e2,	// (0x00018221) list_double_ai3_gene_pane_t3

0x0002,

0xfcd5,	// (0x0001e614) list_double_ai3_gene_pane_t_ParamLimits

0xfcd5,	// (0x0001e614) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbcd9,	// (0x0001a618) aid_size_min_col_2

0xd79e,	// (0x0001c0dd) aid_size_min_msg_ParamLimits

0xd79e,	// (0x0001c0dd) aid_size_min_msg

0xd3bf,	// (0x0001bcfe) fep_vkb_top_text_pane_g2_ParamLimits

0xd3bf,	// (0x0001bcfe) fep_vkb_top_text_pane_g2

0x0001,

0xfb48,	// (0x0001e487) fep_vkb_top_text_pane_g_ParamLimits

0xfb48,	// (0x0001e487) fep_vkb_top_text_pane_g

0x21d0,	// (0x00010b0f) main_hc_apps_shell_pane

0x98ff,	// (0x0001823e) grid_hc_apps_pane_ParamLimits

0x98ff,	// (0x0001823e) grid_hc_apps_pane

0x990e,	// (0x0001824d) list_hc_apps_pane

0x9916,	// (0x00018255) scroll_pane_cp37_ParamLimits

0x9916,	// (0x00018255) scroll_pane_cp37

0xd7ee,	// (0x0001c12d) cell_hc_apps_pane_ParamLimits

0xd7ee,	// (0x0001c12d) cell_hc_apps_pane

0xd87c,	// (0x0001c1bb) cell_hc_apps_pane_g1_ParamLimits

0xd87c,	// (0x0001c1bb) cell_hc_apps_pane_g1

0x9922,	// (0x00018261) cell_hc_apps_pane_g2_ParamLimits

0x9922,	// (0x00018261) cell_hc_apps_pane_g2

0x993e,	// (0x0001827d) cell_hc_apps_pane_g3_ParamLimits

0x993e,	// (0x0001827d) cell_hc_apps_pane_g3

0x0002,

0xfcdc,	// (0x0001e61b) cell_hc_apps_pane_g_ParamLimits

0xfcdc,	// (0x0001e61b) cell_hc_apps_pane_g

0xd8a9,	// (0x0001c1e8) cell_hc_apps_pane_t1_ParamLimits

0xd8a9,	// (0x0001c1e8) cell_hc_apps_pane_t1

0x255d,	// (0x00010e9c) grid_highlight_pane_cp10_ParamLimits

0x255d,	// (0x00010e9c) grid_highlight_pane_cp10

0xd8e7,	// (0x0001c226) list_single_hc_apps_pane_ParamLimits

0xd8e7,	// (0x0001c226) list_single_hc_apps_pane

0xd913,	// (0x0001c252) list_single_hc_apps_pane_g1

0xbdcb,	// (0x0001a70a) list_single_hc_apps_pane_g2

0x0001,

0xfce3,	// (0x0001e622) list_single_hc_apps_pane_g

0xbde4,	// (0x0001a723) list_single_hc_apps_pane_g2_copy1

0xbe00,	// (0x0001a73f) list_single_hc_apps_pane_t1

0x22c4,	// (0x00010c03) bg_set_opt_pane_cp_ParamLimits

0xc1de,	// (0x0001ab1d) setting_slider_pane_t1_ParamLimits

0xc1f7,	// (0x0001ab36) setting_slider_pane_t2_ParamLimits

0xc210,	// (0x0001ab4f) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001de9d) setting_slider_pane_t_ParamLimits

0xc227,	// (0x0001ab66) slider_set_pane_ParamLimits

0xc729,	// (0x0001b068) control_pane_g5_ParamLimits

0xc729,	// (0x0001b068) control_pane_g5

0x59cb,	// (0x0001430a) slider_set_pane_g1_ParamLimits

0xcfcb,	// (0x0001b90a) slider_set_pane_g2_ParamLimits

0xcfd7,	// (0x0001b916) slider_set_pane_g3_ParamLimits

0xcfeb,	// (0x0001b92a) slider_set_pane_g4_ParamLimits

0xd003,	// (0x0001b942) slider_set_pane_g5_ParamLimits

0xcfd7,	// (0x0001b916) slider_set_pane_g6_ParamLimits

0xd019,	// (0x0001b958) slider_set_pane_g7_ParamLimits

0xf95d,	// (0x0001e29c) slider_set_pane_g_ParamLimits

0x3c53,	// (0x00012592) navi_icon_text_pane_ParamLimits

0x4141,	// (0x00012a80) aid_fill_nsta_2_ParamLimits

0x417a,	// (0x00012ab9) aid_touch_tab_arrow_left_ParamLimits

0x4189,	// (0x00012ac8) aid_touch_tab_arrow_right_ParamLimits

0x41f4,	// (0x00012b33) clock_nsta_pane_ParamLimits

0x54c7,	// (0x00013e06) navi_icon_pane_g1_ParamLimits

0x54d3,	// (0x00013e12) navi_text_pane_t1_ParamLimits

0x6a77,	// (0x000153b6) navi_icon_text_pane_g1_ParamLimits

0x6a83,	// (0x000153c2) navi_icon_text_pane_t1_ParamLimits

0xd913,	// (0x0001c252) list_single_hc_apps_pane_g1_ParamLimits

0xbdcb,	// (0x0001a70a) list_single_hc_apps_pane_g2_ParamLimits

0xfce3,	// (0x0001e622) list_single_hc_apps_pane_g_ParamLimits

0xbde4,	// (0x0001a723) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xbe00,	// (0x0001a73f) list_single_hc_apps_pane_t1_ParamLimits

0xc110,	// (0x0001aa4f) popup_toolbar2_fixed_window_ParamLimits

0xc110,	// (0x0001aa4f) popup_toolbar2_fixed_window

0xcc47,	// (0x0001b586) popup_toolbar2_float_window

0x21d0,	// (0x00010b0f) bg_popup_sub_pane_cp27

0x9960,	// (0x0001829f) grid_toolbar2_float_pane

0x21d0,	// (0x00010b0f) bg_popup_sub_pane_cp26

0x9960,	// (0x0001829f) grid_toolbar2_fixed_pane

0xd92c,	// (0x0001c26b) cell_toolbar2_fixed_pane_ParamLimits

0xd92c,	// (0x0001c26b) cell_toolbar2_fixed_pane

0xd93d,	// (0x0001c27c) cell_toolbar2_fixed_pane_g1

0x9968,	// (0x000182a7) toolbar2_fixed_button_pane

0x4623,	// (0x00012f62) toolbar2_fixed_button_pane_g1

0x4633,	// (0x00012f72) toolbar2_fixed_button_pane_g2

0x462b,	// (0x00012f6a) toolbar2_fixed_button_pane_g3

0x4643,	// (0x00012f82) toolbar2_fixed_button_pane_g4

0x463b,	// (0x00012f7a) toolbar2_fixed_button_pane_g5

0x464b,	// (0x00012f8a) toolbar2_fixed_button_pane_g6

0x4653,	// (0x00012f92) toolbar2_fixed_button_pane_g7

0x4663,	// (0x00012fa2) toolbar2_fixed_button_pane_g8

0x465b,	// (0x00012f9a) toolbar2_fixed_button_pane_g9

0x0008,

0xf85f,	// (0x0001e19e) toolbar2_fixed_button_pane_g

0x9970,	// (0x000182af) cell_toolbar2_float_pane_ParamLimits

0x9970,	// (0x000182af) cell_toolbar2_float_pane

0x9981,	// (0x000182c0) cell_toolbar2_float_pane_g1

0x9968,	// (0x000182a7) toolbar2_fixed_button_pane_cp

0xd378,	// (0x0001bcb7) fep_vkb_accented_list_pane_ParamLimits

0xd378,	// (0x0001bcb7) fep_vkb_accented_list_pane

0xd496,	// (0x0001bdd5) bg_popup_fep_shadow_pane_g9

0x3dc5,	// (0x00012704) bg_popup_fep_shadow_pane_cp3

0x3271,	// (0x00011bb0) list_accented_list_pane

0x998a,	// (0x000182c9) list_single_accented_list_pane_ParamLimits

0x998a,	// (0x000182c9) list_single_accented_list_pane

0x3dc5,	// (0x00012704) list_highlight_pane_cp10

0x999b,	// (0x000182da) list_single_accented_list_pane_t1

0xcbb1,	// (0x0001b4f0) popup_slider_window_ParamLimits

0xcbb1,	// (0x0001b4f0) popup_slider_window

0x9785,	// (0x000180c4) aid_indentation_list_msg

0xd9d8,	// (0x0001c317) bg_popup_window_pane_cp19

0x9a01,	// (0x00018340) popup_slider_window_g1

0x9a1d,	// (0x0001835c) popup_slider_window_g2

0x9a61,	// (0x000183a0) popup_slider_window_g3

0x0005,

0xfce8,	// (0x0001e627) popup_slider_window_g

0x9a7d,	// (0x000183bc) popup_slider_window_t1

0x9ac1,	// (0x00018400) small_volume_slider_vertical_pane

0x6e5c,	// (0x0001579b) small_volume_slider_vertical_pane_g1

0x6e5c,	// (0x0001579b) small_volume_slider_vertical_pane_g2

0x9add,	// (0x0001841c) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfa,	// (0x0001e639) small_volume_slider_vertical_pane_g

0xbf02,	// (0x0001a841) area_side_right_pane_ParamLimits

0xbf02,	// (0x0001a841) area_side_right_pane

0xda52,	// (0x0001c391) aid_size_side_button_ParamLimits

0xda52,	// (0x0001c391) aid_size_side_button

0xda66,	// (0x0001c3a5) grid_sctrl_middle_pane_ParamLimits

0xda66,	// (0x0001c3a5) grid_sctrl_middle_pane

0xda81,	// (0x0001c3c0) sctrl_sk_bottom_pane

0xda92,	// (0x0001c3d1) sctrl_sk_top_pane

0xdaa4,	// (0x0001c3e3) aid_touch_sctrl_top

0x255d,	// (0x00010e9c) bg_sctrl_sk_pane_ParamLimits

0x255d,	// (0x00010e9c) bg_sctrl_sk_pane

0xdab1,	// (0x0001c3f0) sctrl_sk_top_pane_g1

0xdabe,	// (0x0001c3fd) sctrl_sk_top_pane_t1

0xdaa4,	// (0x0001c3e3) aid_touch_sctrl_bottom

0x255d,	// (0x00010e9c) bg_sctrl_sk_pane_cp_ParamLimits

0x255d,	// (0x00010e9c) bg_sctrl_sk_pane_cp

0xdad9,	// (0x0001c418) sctrl_sk_bottom_pane_g1

0xdabe,	// (0x0001c3fd) sctrl_sk_bottom_pane_t1

0xdae2,	// (0x0001c421) cell_sctrl_middle_pane_ParamLimits

0xdae2,	// (0x0001c421) cell_sctrl_middle_pane

0xdafd,	// (0x0001c43c) aid_touch_sctrl_middle_ParamLimits

0xdafd,	// (0x0001c43c) aid_touch_sctrl_middle

0x2fb5,	// (0x000118f4) bg_sctrl_middle_pane_ParamLimits

0x2fb5,	// (0x000118f4) bg_sctrl_middle_pane

0x8a1e,	// (0x0001735d) cell_sctrl_middle_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) cell_sctrl_middle_pane_g1

0xdb0f,	// (0x0001c44e) cell_sctrl_middle_pane_g2_ParamLimits

0xdb0f,	// (0x0001c44e) cell_sctrl_middle_pane_g2

0x0001,

0xfd06,	// (0x0001e645) cell_sctrl_middle_pane_g_ParamLimits

0xfd06,	// (0x0001e645) cell_sctrl_middle_pane_g

0x4623,	// (0x00012f62) bg_sctrl_middle_pane_g1

0x4633,	// (0x00012f72) bg_sctrl_middle_pane_g2

0x462b,	// (0x00012f6a) bg_sctrl_middle_pane_g3

0x4643,	// (0x00012f82) bg_sctrl_middle_pane_g4

0x463b,	// (0x00012f7a) bg_sctrl_middle_pane_g5

0x464b,	// (0x00012f8a) bg_sctrl_middle_pane_g6

0x4653,	// (0x00012f92) bg_sctrl_middle_pane_g7

0x4663,	// (0x00012fa2) bg_sctrl_middle_pane_g8

0x0007,

0xfd0b,	// (0x0001e64a) bg_sctrl_middle_pane_g

0x465b,	// (0x00012f9a) bg_sctrl_middle_pane_g8_copy1

0x4623,	// (0x00012f62) bg_sctrl_sk_pane_g1

0x4633,	// (0x00012f72) bg_sctrl_sk_pane_g2

0x462b,	// (0x00012f6a) bg_sctrl_sk_pane_g3

0x0008,

0xf85f,	// (0x0001e19e) bg_sctrl_sk_pane_g

0x29b9,	// (0x000112f8) aid_size_touch_scroll_bar

0x4643,	// (0x00012f82) bg_sctrl_sk_pane_g4

0x463b,	// (0x00012f7a) bg_sctrl_sk_pane_g5

0x464b,	// (0x00012f8a) bg_sctrl_sk_pane_g6

0x4653,	// (0x00012f92) bg_sctrl_sk_pane_g7

0x4663,	// (0x00012fa2) bg_sctrl_sk_pane_g8

0x465b,	// (0x00012f9a) bg_sctrl_sk_pane_g9

0xc8ca,	// (0x0001b209) popup_fep_china_hwr2_fs_candidate_window

0xc8d2,	// (0x0001b211) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc8d2,	// (0x0001b211) popup_fep_china_hwr2_fs_control_window

0x8a1e,	// (0x0001735d) sctrl_sk_top_pane_g2

0x0001,

0xfd01,	// (0x0001e640) sctrl_sk_top_pane_g

0xdb1f,	// (0x0001c45e) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdb1f,	// (0x0001c45e) aid_fep_china_hwr2_fs_cell

0xdb30,	// (0x0001c46f) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdb30,	// (0x0001c46f) bg_popup_fep_shadow_pane_cp4

0xdb47,	// (0x0001c486) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdb47,	// (0x0001c486) bg_popup_fep_shadow_pane_cp5

0xdb59,	// (0x0001c498) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdb59,	// (0x0001c498) popup_fep_china_hwr2_fs_control_bar_grid

0xdb69,	// (0x0001c4a8) popup_fep_china_hwr2_fs_control_funtion_grid

0x9ae6,	// (0x00018425) aid_fep_china_hwr2_fs_candi_cell

0x21d0,	// (0x00010b0f) bg_popup_fep_shadow_pane_cp6

0x9af0,	// (0x0001842f) popup_fep_china_hwr2_fs_candidate_grid

0xdb71,	// (0x0001c4b0) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdb71,	// (0x0001c4b0) cell_fep_china_hwr2_fs_funtion_grid

0x6e5c,	// (0x0001579b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x9af8,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x9af8,	// (0x00018437) cell_fep_china_hwr2_fs_funtion_grid_g1

0x9b06,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x9b06,	// (0x00018445) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1c,	// (0x0001e65b) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1c,	// (0x0001e65b) cell_fep_china_hwr2_fs_funtion_grid_g

0xdb89,	// (0x0001c4c8) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdb89,	// (0x0001c4c8) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdb9e,	// (0x0001c4dd) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdb9e,	// (0x0001c4dd) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd21,	// (0x0001e660) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd21,	// (0x0001e660) cell_fep_china_hwr2_fs_funtion_grid_t

0x9b1c,	// (0x0001845b) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x9b24,	// (0x00018463) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x9b2c,	// (0x0001846b) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd26,	// (0x0001e665) popup_fep_china_hwr2_fs_control_bar_grid_g

0x9b34,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x9b34,	// (0x00018473) cell_fep_china_hwr2_fs_candidate_grid

0x9b4d,	// (0x0001848c) popup_fep_china_hwr2_fs_candidate_grid_g20

0x9b55,	// (0x00018494) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6e5c,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6e5c,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4d,	// (0x0001e48c) cell_fep_china_hwr2_fs_candidate_grid_g

0x9b5d,	// (0x0001849c) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4201,	// (0x00012b40) clock_nsta_pane_cp_24_ParamLimits

0x4201,	// (0x00012b40) clock_nsta_pane_cp_24

0x427f,	// (0x00012bbe) indicator_nsta_pane_cp_24_ParamLimits

0x427f,	// (0x00012bbe) indicator_nsta_pane_cp_24

0x5345,	// (0x00013c84) heading_pane_g1

0x0001,

0xf8c4,	// (0x0001e203) heading_pane_g

0x5da5,	// (0x000146e4) grid_sct_catagory_button_pane

0x5dd5,	// (0x00014714) scroll_pane_cp5_ParamLimits

0x6ac5,	// (0x00015404) button_value_adjust_pane_cp5_ParamLimits

0x6ac5,	// (0x00015404) button_value_adjust_pane_cp5

0x6bbb,	// (0x000154fa) form2_midp_time_pane_ParamLimits

0x9b6b,	// (0x000184aa) cell_sct_catagory_button_pane_ParamLimits

0x9b6b,	// (0x000184aa) cell_sct_catagory_button_pane

0x6e21,	// (0x00015760) bg_button_pane_cp01_ParamLimits

0x6e21,	// (0x00015760) bg_button_pane_cp01

0x6e5c,	// (0x0001579b) cell_sct_catagory_button_pane_g1

0xcbe8,	// (0x0001b527) popup_tb_extension_window

0xdbba,	// (0x0001c4f9) aid_size_cell_ext_ParamLimits

0xdbba,	// (0x0001c4f9) aid_size_cell_ext

0x255d,	// (0x00010e9c) bg_tb_trans_pane_cp1_ParamLimits

0x255d,	// (0x00010e9c) bg_tb_trans_pane_cp1

0xdbd7,	// (0x0001c516) grid_tb_ext_pane_ParamLimits

0xdbd7,	// (0x0001c516) grid_tb_ext_pane

0xdbfb,	// (0x0001c53a) cell_tb_ext_pane_ParamLimits

0xdbfb,	// (0x0001c53a) cell_tb_ext_pane

0xdc10,	// (0x0001c54f) cell_tb_ext_pane_g1_ParamLimits

0xdc10,	// (0x0001c54f) cell_tb_ext_pane_g1

0x9b7d,	// (0x000184bc) cell_tb_ext_pane_t1

0x255d,	// (0x00010e9c) list_highlight_pane_cp11_ParamLimits

0x255d,	// (0x00010e9c) list_highlight_pane_cp11

0xc12f,	// (0x0001aa6e) popup_uni_indicator_window_ParamLimits

0xc12f,	// (0x0001aa6e) popup_uni_indicator_window

0x2fb5,	// (0x000118f4) bg_popup_sub_pane_cp14

0x9b98,	// (0x000184d7) list_uniindi_pane

0x9ba4,	// (0x000184e3) uniindi_top_pane

0x255d,	// (0x00010e9c) bg_uniindi_top_pane

0x9bc3,	// (0x00018502) uniindi_top_pane_g1

0x9bd9,	// (0x00018518) uniindi_top_pane_g2

0x0003,

0xfd2d,	// (0x0001e66c) uniindi_top_pane_g

0x9c03,	// (0x00018542) uniindi_top_pane_t1

0x9c2d,	// (0x0001856c) list_single_uniindi_pane_ParamLimits

0x9c2d,	// (0x0001856c) list_single_uniindi_pane

0x6e5c,	// (0x0001579b) bg_uniindi_top_pane_g1

0x9c3f,	// (0x0001857e) list_single_uniindi_pane_g1

0x9c52,	// (0x00018591) list_single_uniindi_pane_t1

0x21d0,	// (0x00010b0f) control_bg_pane

0x9c77,	// (0x000185b6) bg_sctrl_sk_pane_cp1

0x9c80,	// (0x000185bf) bg_sctrl_sk_pane_cp2

0x9c89,	// (0x000185c8) control_bg_pane_g1

0x9c92,	// (0x000185d1) control_bg_pane_g2

0x0001,

0xfd36,	// (0x0001e675) control_bg_pane_g

0x6939,	// (0x00015278) cell_indicator_nsta_pane_g1_ParamLimits

0x6947,	// (0x00015286) cell_indicator_nsta_pane_g2_ParamLimits

0xfab1,	// (0x0001e3f0) cell_indicator_nsta_pane_g_ParamLimits

0xba8a,	// (0x0001a3c9) form2_midp_time_pane_t1_ParamLimits

0x2897,	// (0x000111d6) main_idle_act4_pane_ParamLimits

0x2897,	// (0x000111d6) main_idle_act4_pane

0xcbe8,	// (0x0001b527) popup_tb_extension_window_ParamLimits

0xdbef,	// (0x0001c52e) tb_ext_find_pane_ParamLimits

0xdbef,	// (0x0001c52e) tb_ext_find_pane

0x9c9b,	// (0x000185da) ai_gene_pane_1_cp1

0x3f00,	// (0x0001283f) ai_gene_pane_2_cp1

0x9ca3,	// (0x000185e2) list_single_idle_plugin_calendar_pane

0x9cac,	// (0x000185eb) list_single_idle_plugin_notification_pane

0x9cb5,	// (0x000185f4) list_single_idle_plugin_player_pane

0xdc2d,	// (0x0001c56c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xdc2d,	// (0x0001c56c) list_single_idle_plugin_shortcut_pane

0xdc49,	// (0x0001c588) main_idle_act4_pane_t1

0xdc5b,	// (0x0001c59a) main_idle_act4_pane_t2

0x0001,

0xfd3b,	// (0x0001e67a) main_idle_act4_pane_t

0xdc6d,	// (0x0001c5ac) middle_sk_idle_act4_pane_ParamLimits

0xdc6d,	// (0x0001c5ac) middle_sk_idle_act4_pane

0xdc83,	// (0x0001c5c2) popup_clock_digital_analogue_window_cp2

0xdc9d,	// (0x0001c5dc) shortcut_wheel_idle_act4_pane_ParamLimits

0xdc9d,	// (0x0001c5dc) shortcut_wheel_idle_act4_pane

0x6e5c,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g1

0x6e5c,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g2

0x6e5c,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g3

0x6e5c,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g4

0x6e5c,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g5

0x9cbe,	// (0x000185fd) shortcut_wheel_idle_act4_pane_g6

0x9cc6,	// (0x00018605) shortcut_wheel_idle_act4_pane_g7

0x9cce,	// (0x0001860d) shortcut_wheel_idle_act4_pane_g8

0x9cd6,	// (0x00018615) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd40,	// (0x0001e67f) shortcut_wheel_idle_act4_pane_g

0x8a1e,	// (0x0001735d) middle_sk_idle_act4_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) middle_sk_idle_act4_pane_g1

0xdd0d,	// (0x0001c64c) middle_sk_idle_act4_pane_g2_ParamLimits

0xdd0d,	// (0x0001c64c) middle_sk_idle_act4_pane_g2

0x0001,

0xfd63,	// (0x0001e6a2) middle_sk_idle_act4_pane_g_ParamLimits

0xfd63,	// (0x0001e6a2) middle_sk_idle_act4_pane_g

0xdd19,	// (0x0001c658) middle_sk_idle_act4_pane_t1_ParamLimits

0xdd19,	// (0x0001c658) middle_sk_idle_act4_pane_t1

0xdd36,	// (0x0001c675) grid_ai_shortcut_pane_ParamLimits

0xdd36,	// (0x0001c675) grid_ai_shortcut_pane

0xdd4f,	// (0x0001c68e) list_highlight_pane_cp16_ParamLimits

0xdd4f,	// (0x0001c68e) list_highlight_pane_cp16

0xdd5c,	// (0x0001c69b) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xdd5c,	// (0x0001c69b) list_single_idle_plugin_shortcut_pane_g1

0xdd68,	// (0x0001c6a7) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xdd68,	// (0x0001c6a7) list_single_idle_plugin_shortcut_pane_g2

0xdd80,	// (0x0001c6bf) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xdd80,	// (0x0001c6bf) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd68,	// (0x0001e6a7) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd68,	// (0x0001e6a7) list_single_idle_plugin_shortcut_pane_g

0xdd93,	// (0x0001c6d2) cell_ai_shortcut_pane_ParamLimits

0xdd93,	// (0x0001c6d2) cell_ai_shortcut_pane

0xddb4,	// (0x0001c6f3) cell_ai_shortcut_pane_g1_ParamLimits

0xddb4,	// (0x0001c6f3) cell_ai_shortcut_pane_g1

0x9c9b,	// (0x000185da) ai_gene_pane_1_cp2

0x9cde,	// (0x0001861d) ai_gene_pane_2_cp2

0x9ce6,	// (0x00018625) list_highlight_pane_cp15

0x9cef,	// (0x0001862e) list_single_idle_plugin_calendar_pane_g1

0x9ce6,	// (0x00018625) list_highlight_pane_cp17

0x9cf7,	// (0x00018636) list_single_idle_plugin_calendar_pane_g1_copy1

0x9cff,	// (0x0001863e) list_single_idle_plugin_player_pane_g1

0x5ffc,	// (0x0001493b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd6f,	// (0x0001e6ae) list_single_idle_plugin_player_pane_g

0x9d07,	// (0x00018646) list_single_idle_plugin_player_pane_t1

0x9d15,	// (0x00018654) list_single_idle_plugin_player_pane_t2

0x9d23,	// (0x00018662) list_single_idle_plugin_player_pane_t3

0x9d31,	// (0x00018670) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd74,	// (0x0001e6b3) list_single_idle_plugin_player_pane_t

0x9d3f,	// (0x0001867e) wait_bar_pane_cp15

0x9d47,	// (0x00018686) grid_ai_notification_pane

0x5ffc,	// (0x0001493b) list_single_idle_plugin_notification_pane_g1

0xddd6,	// (0x0001c715) cell_ai_notification_pane_ParamLimits

0xddd6,	// (0x0001c715) cell_ai_notification_pane

0x9d50,	// (0x0001868f) cell_ai_notification_pane_g1

0x9d58,	// (0x00018697) cell_ai_notification_pane_t1

0xdde3,	// (0x0001c722) tb_ext_find_button_pane

0xddeb,	// (0x0001c72a) tb_ext_find_pane_g1

0xddf3,	// (0x0001c732) tb_ext_find_pane_t1

0x3768,	// (0x000120a7) tb_ext_find_button_pane_g1

0x9d66,	// (0x000186a5) tb_ext_find_button_pane_g2

0x0001,

0xfd7d,	// (0x0001e6bc) tb_ext_find_button_pane_g

0xdc49,	// (0x0001c588) main_idle_act4_pane_t1_ParamLimits

0xdc5b,	// (0x0001c59a) main_idle_act4_pane_t2_ParamLimits

0xfd3b,	// (0x0001e67a) main_idle_act4_pane_t_ParamLimits

0xdc83,	// (0x0001c5c2) popup_clock_digital_analogue_window_cp2_ParamLimits

0xdc91,	// (0x0001c5d0) sat_plugin_idle_act4_pane_ParamLimits

0xdc91,	// (0x0001c5d0) sat_plugin_idle_act4_pane

0xde01,	// (0x0001c740) sat_plugin_idle_act4_pane_t1_ParamLimits

0xde01,	// (0x0001c740) sat_plugin_idle_act4_pane_t1

0xde14,	// (0x0001c753) sat_plugin_idle_act4_pane_t2_ParamLimits

0xde14,	// (0x0001c753) sat_plugin_idle_act4_pane_t2

0xde27,	// (0x0001c766) sat_plugin_idle_act4_pane_t3_ParamLimits

0xde27,	// (0x0001c766) sat_plugin_idle_act4_pane_t3

0xde3a,	// (0x0001c779) sat_plugin_idle_act4_pane_t4_ParamLimits

0xde3a,	// (0x0001c779) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd82,	// (0x0001e6c1) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd82,	// (0x0001e6c1) sat_plugin_idle_act4_pane_t

0xc090,	// (0x0001a9cf) popup_battery_window_ParamLimits

0xc090,	// (0x0001a9cf) popup_battery_window

0x255d,	// (0x00010e9c) bg_popup_sub_pane_cp25_ParamLimits

0x255d,	// (0x00010e9c) bg_popup_sub_pane_cp25

0x9d6f,	// (0x000186ae) popup_battery_window_g1_ParamLimits

0x9d6f,	// (0x000186ae) popup_battery_window_g1

0x9d7b,	// (0x000186ba) popup_battery_window_t1_ParamLimits

0x9d7b,	// (0x000186ba) popup_battery_window_t1

0x9d8d,	// (0x000186cc) popup_battery_window_t2_ParamLimits

0x9d8d,	// (0x000186cc) popup_battery_window_t2

0x0001,

0xfd8b,	// (0x0001e6ca) popup_battery_window_t_ParamLimits

0xfd8b,	// (0x0001e6ca) popup_battery_window_t

0x3dd9,	// (0x00012718) midp_canvas_pane_ParamLimits

0x3e48,	// (0x00012787) midp_keypad_pane_ParamLimits

0x3e48,	// (0x00012787) midp_keypad_pane

0x4107,	// (0x00012a46) main_midp_pane_ParamLimits

0x69a2,	// (0x000152e1) signal_pane_g2_cp_ParamLimits

0xde4d,	// (0x0001c78c) aid_size_cell_midp_keypad_ParamLimits

0xde4d,	// (0x0001c78c) aid_size_cell_midp_keypad

0xde67,	// (0x0001c7a6) midp_keyp_game_grid_pane_ParamLimits

0xde67,	// (0x0001c7a6) midp_keyp_game_grid_pane

0xde81,	// (0x0001c7c0) midp_keyp_rocker_pane_ParamLimits

0xde81,	// (0x0001c7c0) midp_keyp_rocker_pane

0xdeae,	// (0x0001c7ed) midp_keyp_sk_left_pane_ParamLimits

0xdeae,	// (0x0001c7ed) midp_keyp_sk_left_pane

0xdf06,	// (0x0001c845) midp_keyp_sk_right_pane_ParamLimits

0xdf06,	// (0x0001c845) midp_keyp_sk_right_pane

0x21d0,	// (0x00010b0f) bg_button_pane_cp03

0xdf58,	// (0x0001c897) midp_keyp_sk_left_pane_g1

0x21d0,	// (0x00010b0f) bg_button_pane_cp04

0xdf58,	// (0x0001c897) midp_keyp_sk_right_pane_g1

0x6e5c,	// (0x0001579b) midp_keyp_rocker_pane_g1

0xdf61,	// (0x0001c8a0) keyp_game_cell_pane_ParamLimits

0xdf61,	// (0x0001c8a0) keyp_game_cell_pane

0x21d0,	// (0x00010b0f) bg_button_pane_cp02

0xdf72,	// (0x0001c8b1) keyp_game_cell_pane_g1

0xc0c6,	// (0x0001aa05) popup_fep_vkb2_window_ParamLimits

0xc0c6,	// (0x0001aa05) popup_fep_vkb2_window

0xdf89,	// (0x0001c8c8) aid_size_cell_vkb2_ParamLimits

0xdf89,	// (0x0001c8c8) aid_size_cell_vkb2

0xdfdd,	// (0x0001c91c) popup_fep_vkb2_window_g1_ParamLimits

0xdfdd,	// (0x0001c91c) popup_fep_vkb2_window_g1

0xe025,	// (0x0001c964) vkb2_area_bottom_pane_ParamLimits

0xe025,	// (0x0001c964) vkb2_area_bottom_pane

0xe05d,	// (0x0001c99c) vkb2_area_keypad_pane_ParamLimits

0xe05d,	// (0x0001c99c) vkb2_area_keypad_pane

0xe095,	// (0x0001c9d4) vkb2_area_top_pane_ParamLimits

0xe095,	// (0x0001c9d4) vkb2_area_top_pane

0xe105,	// (0x0001ca44) vkb2_top_entry_pane_ParamLimits

0xe105,	// (0x0001ca44) vkb2_top_entry_pane

0xe12f,	// (0x0001ca6e) vkb2_top_grid_left_pane_ParamLimits

0xe12f,	// (0x0001ca6e) vkb2_top_grid_left_pane

0xe14d,	// (0x0001ca8c) vkb2_top_grid_right_pane_ParamLimits

0xe14d,	// (0x0001ca8c) vkb2_top_grid_right_pane

0xe16b,	// (0x0001caaa) vkb2_cell_keypad_pane_ParamLimits

0xe16b,	// (0x0001caaa) vkb2_cell_keypad_pane

0xe21c,	// (0x0001cb5b) vkb2_area_bottom_grid_pane_ParamLimits

0xe21c,	// (0x0001cb5b) vkb2_area_bottom_grid_pane

0xe240,	// (0x0001cb7f) vkb2_area_bottom_pane_g1_ParamLimits

0xe240,	// (0x0001cb7f) vkb2_area_bottom_pane_g1

0xe264,	// (0x0001cba3) vkb2_area_bottom_pane_g2_ParamLimits

0xe264,	// (0x0001cba3) vkb2_area_bottom_pane_g2

0xe292,	// (0x0001cbd1) vkb2_area_bottom_pane_g3_ParamLimits

0xe292,	// (0x0001cbd1) vkb2_area_bottom_pane_g3

0x0002,

0xfd90,	// (0x0001e6cf) vkb2_area_bottom_pane_g_ParamLimits

0xfd90,	// (0x0001e6cf) vkb2_area_bottom_pane_g

0xe2e3,	// (0x0001cc22) vkb2_top_cell_left_pane_ParamLimits

0xe2e3,	// (0x0001cc22) vkb2_top_cell_left_pane

0xe303,	// (0x0001cc42) vkb2_top_entry_pane_g1_ParamLimits

0xe303,	// (0x0001cc42) vkb2_top_entry_pane_g1

0xe311,	// (0x0001cc50) vkb2_top_entry_pane_t1_ParamLimits

0xe311,	// (0x0001cc50) vkb2_top_entry_pane_t1

0x9db2,	// (0x000186f1) vkb2_top_entry_pane_t2_ParamLimits

0x9db2,	// (0x000186f1) vkb2_top_entry_pane_t2

0x9de4,	// (0x00018723) vkb2_top_entry_pane_t3_ParamLimits

0x9de4,	// (0x00018723) vkb2_top_entry_pane_t3

0x0002,

0xfd97,	// (0x0001e6d6) vkb2_top_entry_pane_t_ParamLimits

0xfd97,	// (0x0001e6d6) vkb2_top_entry_pane_t

0xe370,	// (0x0001ccaf) vkb2_top_grid_right_pane_g1_ParamLimits

0xe370,	// (0x0001ccaf) vkb2_top_grid_right_pane_g1

0xe386,	// (0x0001ccc5) vkb2_top_grid_right_pane_g2_ParamLimits

0xe386,	// (0x0001ccc5) vkb2_top_grid_right_pane_g2

0xe39e,	// (0x0001ccdd) vkb2_top_grid_right_pane_g3_ParamLimits

0xe39e,	// (0x0001ccdd) vkb2_top_grid_right_pane_g3

0xe3b6,	// (0x0001ccf5) vkb2_top_grid_right_pane_g4_ParamLimits

0xe3b6,	// (0x0001ccf5) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9e,	// (0x0001e6dd) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9e,	// (0x0001e6dd) vkb2_top_grid_right_pane_g

0xe3cc,	// (0x0001cd0b) vkb2_top_cell_left_pane_g1

0xe3e3,	// (0x0001cd22) vkb2_cell_keypad_pane_g1_ParamLimits

0xe3e3,	// (0x0001cd22) vkb2_cell_keypad_pane_g1

0x9e08,	// (0x00018747) vkb2_cell_keypad_pane_t1_ParamLimits

0x9e08,	// (0x00018747) vkb2_cell_keypad_pane_t1

0xe3f1,	// (0x0001cd30) vkb2_cell_bottom_grid_pane_ParamLimits

0xe3f1,	// (0x0001cd30) vkb2_cell_bottom_grid_pane

0xe42a,	// (0x0001cd69) vkb2_cell_bottom_grid_pane_g1

0xdcb1,	// (0x0001c5f0) aid_call2_pane_cp02

0xdcb9,	// (0x0001c5f8) aid_call_pane_cp02

0xdcc1,	// (0x0001c600) clock_digital_number_pane_cp10

0xdcc9,	// (0x0001c608) clock_digital_number_pane_cp11

0xdcd1,	// (0x0001c610) clock_digital_number_pane_cp12

0xdcd9,	// (0x0001c618) clock_digital_number_pane_cp13

0xdce1,	// (0x0001c620) clock_digital_separator_pane_cp10

0x3768,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g1

0x3768,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g2

0xdce9,	// (0x0001c628) popup_clock_digital_analogue_window_cp2_g3

0x3768,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g4

0xdce9,	// (0x0001c628) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd53,	// (0x0001e692) popup_clock_digital_analogue_window_cp2_g

0xdcf1,	// (0x0001c630) popup_clock_digital_analogue_window_cp2_t1

0xdcff,	// (0x0001c63e) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5e,	// (0x0001e69d) popup_clock_digital_analogue_window_cp2_t

0x6e5c,	// (0x0001579b) clock_digital_number_pane_cp10_g1

0x6e5c,	// (0x0001579b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0001e48c) clock_digital_number_pane_cp10_g

0x6e5c,	// (0x0001579b) clock_digital_separator_pane_cp10_g1

0x6e5c,	// (0x0001579b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4d,	// (0x0001e48c) clock_digital_separator_pane_cp10_g

0x9be5,	// (0x00018524) uniindi_top_pane_g3

0x9bf6,	// (0x00018535) uniindi_top_pane_g4

0xe1d6,	// (0x0001cb15) vkb2_row_keypad_pane_ParamLimits

0xe1d6,	// (0x0001cb15) vkb2_row_keypad_pane

0xe446,	// (0x0001cd85) vkb2_cell_t_keypad_pane_ParamLimits

0xe446,	// (0x0001cd85) vkb2_cell_t_keypad_pane

0xe453,	// (0x0001cd92) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe453,	// (0x0001cd92) vkb2_cell_t_keypad_pane_cp08

0xe463,	// (0x0001cda2) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe463,	// (0x0001cda2) vkb2_cell_t_keypad_pane_cp09

0xe474,	// (0x0001cdb3) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe474,	// (0x0001cdb3) vkb2_cell_t_keypad_pane_cp01

0xe484,	// (0x0001cdc3) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe484,	// (0x0001cdc3) vkb2_cell_t_keypad_pane_cp02

0xe494,	// (0x0001cdd3) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe494,	// (0x0001cdd3) vkb2_cell_t_keypad_pane_cp03

0xe4a4,	// (0x0001cde3) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe4a4,	// (0x0001cde3) vkb2_cell_t_keypad_pane_cp04

0xe4b4,	// (0x0001cdf3) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe4b4,	// (0x0001cdf3) vkb2_cell_t_keypad_pane_cp05

0xe4c4,	// (0x0001ce03) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe4c4,	// (0x0001ce03) vkb2_cell_t_keypad_pane_cp06

0xe4d4,	// (0x0001ce13) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe4d4,	// (0x0001ce13) vkb2_cell_t_keypad_pane_cp07

0xe4e4,	// (0x0001ce23) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe4e4,	// (0x0001ce23) vkb2_cell_t_keypad_pane_cp10

0x8a1e,	// (0x0001735d) vkb2_cell_t_keypad_pane_g1

0x9e1f,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1

0x21d0,	// (0x00010b0f) popup_grid_graphic2_window

0xe4f9,	// (0x0001ce38) aid_size_cell_graphic2_ParamLimits

0xe4f9,	// (0x0001ce38) aid_size_cell_graphic2

0xe531,	// (0x0001ce70) bg_popup_window_pane_cp21_ParamLimits

0xe531,	// (0x0001ce70) bg_popup_window_pane_cp21

0xe53f,	// (0x0001ce7e) graphic2_pages_pane_ParamLimits

0xe53f,	// (0x0001ce7e) graphic2_pages_pane

0xe579,	// (0x0001ceb8) grid_graphic2_control_pane_ParamLimits

0xe579,	// (0x0001ceb8) grid_graphic2_control_pane

0xe5af,	// (0x0001ceee) grid_graphic2_pane_ParamLimits

0xe5af,	// (0x0001ceee) grid_graphic2_pane

0xe60f,	// (0x0001cf4e) cell_graphic2_pane

0x21d0,	// (0x00010b0f) main_comp_mode_pane

0x9838,	// (0x00018177) list_ai3_gene_pane_ParamLimits

0xd9d8,	// (0x0001c317) bg_popup_window_pane_cp19_ParamLimits

0x99a9,	// (0x000182e8) bg_touch_area_indi_pane_ParamLimits

0x99a9,	// (0x000182e8) bg_touch_area_indi_pane

0x99bf,	// (0x000182fe) bg_touch_area_indi_pane_cp01_ParamLimits

0x99bf,	// (0x000182fe) bg_touch_area_indi_pane_cp01

0x99d5,	// (0x00018314) bg_touch_area_indi_pane_cp02_ParamLimits

0x99d5,	// (0x00018314) bg_touch_area_indi_pane_cp02

0x99eb,	// (0x0001832a) bg_touch_area_indi_pane_cp03_ParamLimits

0x99eb,	// (0x0001832a) bg_touch_area_indi_pane_cp03

0x9a01,	// (0x00018340) popup_slider_window_g1_ParamLimits

0x9a1d,	// (0x0001835c) popup_slider_window_g2_ParamLimits

0x9a61,	// (0x000183a0) popup_slider_window_g3_ParamLimits

0xfce8,	// (0x0001e627) popup_slider_window_g_ParamLimits

0x9a7d,	// (0x000183bc) popup_slider_window_t1_ParamLimits

0x9ac1,	// (0x00018400) small_volume_slider_vertical_pane_ParamLimits

0xe60f,	// (0x0001cf4e) cell_graphic2_pane_ParamLimits

0xe64c,	// (0x0001cf8b) bg_button_pane_cp10_ParamLimits

0xe64c,	// (0x0001cf8b) bg_button_pane_cp10

0xe65f,	// (0x0001cf9e) bg_button_pane_cp11_ParamLimits

0xe65f,	// (0x0001cf9e) bg_button_pane_cp11

0xe672,	// (0x0001cfb1) graphic2_pages_pane_g1_ParamLimits

0xe672,	// (0x0001cfb1) graphic2_pages_pane_g1

0xe68d,	// (0x0001cfcc) graphic2_pages_pane_g2_ParamLimits

0xe68d,	// (0x0001cfcc) graphic2_pages_pane_g2

0x0001,

0xfdac,	// (0x0001e6eb) graphic2_pages_pane_g_ParamLimits

0xfdac,	// (0x0001e6eb) graphic2_pages_pane_g

0xe6a5,	// (0x0001cfe4) graphic2_pages_pane_t1_ParamLimits

0xe6a5,	// (0x0001cfe4) graphic2_pages_pane_t1

0xe6bb,	// (0x0001cffa) cell_graphic2_control_pane_ParamLimits

0xe6bb,	// (0x0001cffa) cell_graphic2_control_pane

0xe6d7,	// (0x0001d016) cell_graphic2_pane_g1_ParamLimits

0xe6d7,	// (0x0001d016) cell_graphic2_pane_g1

0xe6e4,	// (0x0001d023) cell_graphic2_pane_g2_ParamLimits

0xe6e4,	// (0x0001d023) cell_graphic2_pane_g2

0xe6f1,	// (0x0001d030) cell_graphic2_pane_g3_ParamLimits

0xe6f1,	// (0x0001d030) cell_graphic2_pane_g3

0xe6fe,	// (0x0001d03d) cell_graphic2_pane_g4_ParamLimits

0xe6fe,	// (0x0001d03d) cell_graphic2_pane_g4

0xe70b,	// (0x0001d04a) cell_graphic2_pane_g5_ParamLimits

0xe70b,	// (0x0001d04a) cell_graphic2_pane_g5

0x0004,

0xfdb1,	// (0x0001e6f0) cell_graphic2_pane_g_ParamLimits

0xfdb1,	// (0x0001e6f0) cell_graphic2_pane_g

0xe726,	// (0x0001d065) cell_graphic2_pane_t1_ParamLimits

0xe726,	// (0x0001d065) cell_graphic2_pane_t1

0x4739,	// (0x00013078) grid_highlight_pane_cp11_ParamLimits

0x4739,	// (0x00013078) grid_highlight_pane_cp11

0x255d,	// (0x00010e9c) bg_button_pane_cp05

0xe75d,	// (0x0001d09c) cell_graphic2_control_pane_g1

0x6e5c,	// (0x0001579b) bg_touch_area_indi_pane_g1

0x9e31,	// (0x00018770) aid_cmod_rocker_key_size

0x9e3b,	// (0x0001877a) aid_cmode_itu_key_size

0x9e45,	// (0x00018784) main_cmode_video_pane

0x9e4d,	// (0x0001878c) main_comp_mode_itu_pane

0x9e57,	// (0x00018796) main_comp_mode_rocker_pane

0x9e5f,	// (0x0001879e) cell_cmode_rocker_pane_ParamLimits

0x9e5f,	// (0x0001879e) cell_cmode_rocker_pane

0x9e71,	// (0x000187b0) cell_cmode_itu_pane_ParamLimits

0x9e71,	// (0x000187b0) cell_cmode_itu_pane

0x2fb5,	// (0x000118f4) bg_button_pane_cp06_ParamLimits

0x2fb5,	// (0x000118f4) bg_button_pane_cp06

0x8a1e,	// (0x0001735d) cell_cmode_rocker_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) cell_cmode_rocker_pane_g1

0x9af8,	// (0x00018437) cell_cmode_rocker_pane_g2_ParamLimits

0x9af8,	// (0x00018437) cell_cmode_rocker_pane_g2

0x0001,

0xfdc1,	// (0x0001e700) cell_cmode_rocker_pane_g_ParamLimits

0xfdc1,	// (0x0001e700) cell_cmode_rocker_pane_g

0x21d0,	// (0x00010b0f) bg_button_pane_cp07

0x9e86,	// (0x000187c5) cell_cmode_itu_pane_g1

0x9eb0,	// (0x000187ef) cell_cmode_itu_pane_t1

0x9ebe,	// (0x000187fd) cell_cmode_itu_pane_t2

0x0001,

0xfdc6,	// (0x0001e705) cell_cmode_itu_pane_t

0x9c67,	// (0x000185a6) aid_touch_ctrl_left

0x9c6f,	// (0x000185ae) aid_touch_ctrl_right

0x21d0,	// (0x00010b0f) compa_mode_pane

0xe785,	// (0x0001d0c4) aid_cmod_rocker_key_size_cp

0xe78f,	// (0x0001d0ce) aid_cmode_itu_key_size_cp

0x9ecc,	// (0x0001880b) compa_mode_pane_g1

0x9ed4,	// (0x00018813) compa_mode_pane_g2

0x9edc,	// (0x0001881b) compa_mode_pane_g3

0x0002,

0xfdcb,	// (0x0001e70a) compa_mode_pane_g

0xe799,	// (0x0001d0d8) main_comp_mode_itu_pane_cp

0xe7a1,	// (0x0001d0e0) main_comp_mode_rocker_pane_cp

0xe7a9,	// (0x0001d0e8) cell_cmode_itu_pane_cp_ParamLimits

0xe7a9,	// (0x0001d0e8) cell_cmode_itu_pane_cp

0xe7be,	// (0x0001d0fd) cell_cmode_rocker_pane_cp_ParamLimits

0xe7be,	// (0x0001d0fd) cell_cmode_rocker_pane_cp

0x2fb5,	// (0x000118f4) bg_button_pane_cp06_cp_ParamLimits

0x2fb5,	// (0x000118f4) bg_button_pane_cp06_cp

0x8a1e,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x8a1e,	// (0x0001735d) cell_cmode_rocker_pane_g1_cp

0x6e5c,	// (0x0001579b) cell_cmode_rocker_pane_g2_cp

0x21d0,	// (0x00010b0f) bg_button_pane_cp07_cp

0xe7d0,	// (0x0001d10f) cell_cmode_itu_pane_g1_cp

0xe7d9,	// (0x0001d118) cell_cmode_itu_pane_t1_cp

0xe7d9,	// (0x0001d118) cell_cmode_itu_pane_t2_cp

0x5b3f,	// (0x0001447e) settings_code_pane_cp2

0x22c4,	// (0x00010c03) bg_popup_window_pane_cp3_ParamLimits

0x2735,	// (0x00011074) heading_pane_cp3_ParamLimits

0x2741,	// (0x00011080) listscroll_popup_graphic_pane_ParamLimits

0xd1a8,	// (0x0001bae7) fep_hwr_aid_pane_ParamLimits

0xdaa4,	// (0x0001c3e3) aid_touch_sctrl_top_ParamLimits

0xdab1,	// (0x0001c3f0) sctrl_sk_top_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) sctrl_sk_top_pane_g2_ParamLimits

0xfd01,	// (0x0001e640) sctrl_sk_top_pane_g_ParamLimits

0xdabe,	// (0x0001c3fd) sctrl_sk_top_pane_t1_ParamLimits

0xdaa4,	// (0x0001c3e3) aid_touch_sctrl_bottom_ParamLimits

0xdabe,	// (0x0001c3fd) sctrl_sk_bottom_pane_t1_ParamLimits

0x9bb1,	// (0x000184f0) aid_area_touch_clock

0xe0cd,	// (0x0001ca0c) aid_vkb2_area_top_pane_cell_ParamLimits

0xe0cd,	// (0x0001ca0c) aid_vkb2_area_top_pane_cell

0xe1f8,	// (0x0001cb37) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe1f8,	// (0x0001cb37) aid_vkb2_area_bottom_pane_cell

0x9daa,	// (0x000186e9) popup_char_count_window

0x9ee4,	// (0x00018823) popup_char_count_window_g1

0x9eed,	// (0x0001882c) popup_char_count_window_g2

0x9ef6,	// (0x00018835) popup_char_count_window_g3

0x0002,

0xfdd2,	// (0x0001e711) popup_char_count_window_g

0x9eff,	// (0x0001883e) popup_char_count_window_t1

0xdfbb,	// (0x0001c8fa) popup_fep_char_preview_window_ParamLimits

0xdfbb,	// (0x0001c8fa) popup_fep_char_preview_window

0xe0eb,	// (0x0001ca2a) vkb2_top_candi_pane_ParamLimits

0xe0eb,	// (0x0001ca2a) vkb2_top_candi_pane

0xe7e7,	// (0x0001d126) cell_vkb2_top_candi_pane_ParamLimits

0xe7e7,	// (0x0001d126) cell_vkb2_top_candi_pane

0x4cf5,	// (0x00013634) bg_popup_fep_char_preview_window_ParamLimits

0x4cf5,	// (0x00013634) bg_popup_fep_char_preview_window

0xe820,	// (0x0001d15f) popup_fep_char_preview_window_t1_ParamLimits

0xe820,	// (0x0001d15f) popup_fep_char_preview_window_t1

0x9f1d,	// (0x0001885c) bg_popup_fep_char_preview_window_g1

0x9f15,	// (0x00018854) bg_popup_fep_char_preview_window_g2

0x9f0d,	// (0x0001884c) bg_popup_fep_char_preview_window_g3

0x9f3d,	// (0x0001887c) bg_popup_fep_char_preview_window_g4

0x9f35,	// (0x00018874) bg_popup_fep_char_preview_window_g5

0xe85a,	// (0x0001d199) bg_popup_fep_char_preview_window_g6

0x9f2d,	// (0x0001886c) bg_popup_fep_char_preview_window_g7

0x9f25,	// (0x00018864) bg_popup_fep_char_preview_window_g8

0x9f45,	// (0x00018884) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdd9,	// (0x0001e718) bg_popup_fep_char_preview_window_g

0x8a1e,	// (0x0001735d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) cell_vkb2_top_candi_pane_g1

0x8f83,	// (0x000178c2) cell_vkb2_top_candi_pane_g2_ParamLimits

0x8f83,	// (0x000178c2) cell_vkb2_top_candi_pane_g2

0x8fa4,	// (0x000178e3) cell_vkb2_top_candi_pane_g3_ParamLimits

0x8fa4,	// (0x000178e3) cell_vkb2_top_candi_pane_g3

0xe862,	// (0x0001d1a1) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe862,	// (0x0001d1a1) cell_vkb2_top_candi_pane_g4

0x9e8f,	// (0x000187ce) cell_vkb2_top_candi_pane_g5_ParamLimits

0x9e8f,	// (0x000187ce) cell_vkb2_top_candi_pane_g5

0x9af8,	// (0x00018437) cell_vkb2_top_candi_pane_g6_ParamLimits

0x9af8,	// (0x00018437) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdec,	// (0x0001e72b) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdec,	// (0x0001e72b) cell_vkb2_top_candi_pane_g

0xe883,	// (0x0001d1c2) cell_vkb2_top_candi_pane_t1

0xcfb7,	// (0x0001b8f6) aid_size_touch_slider_mark_ParamLimits

0xcfb7,	// (0x0001b8f6) aid_size_touch_slider_mark

0xe56d,	// (0x0001ceac) grid_graphic2_catg_pane_ParamLimits

0xe56d,	// (0x0001ceac) grid_graphic2_catg_pane

0xe5eb,	// (0x0001cf2a) popup_grid_graphic2_window_t1_ParamLimits

0xe5eb,	// (0x0001cf2a) popup_grid_graphic2_window_t1

0xe5fd,	// (0x0001cf3c) popup_grid_graphic2_window_t2_ParamLimits

0xe5fd,	// (0x0001cf3c) popup_grid_graphic2_window_t2

0x0001,

0xfda7,	// (0x0001e6e6) popup_grid_graphic2_window_t_ParamLimits

0xfda7,	// (0x0001e6e6) popup_grid_graphic2_window_t

0x255d,	// (0x00010e9c) bg_button_pane_cp05_ParamLimits

0xe75d,	// (0x0001d09c) cell_graphic2_control_pane_g1_ParamLimits

0xe8a1,	// (0x0001d1e0) cell_graphic2_catg_pane_ParamLimits

0xe8a1,	// (0x0001d1e0) cell_graphic2_catg_pane

0x21d0,	// (0x00010b0f) bg_button_pane_cp12

0xe8b3,	// (0x0001d1f2) cell_graphic2_catg_pane_g1

0x9b7d,	// (0x000184bc) cell_tb_ext_pane_t1_ParamLimits

0xe343,	// (0x0001cc82) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe343,	// (0x0001cc82) vkb2_top_cell_right_narrow_pane

0xe35b,	// (0x0001cc9a) vkb2_top_cell_right_wide_pane_ParamLimits

0xe35b,	// (0x0001cc9a) vkb2_top_cell_right_wide_pane

0xd19a,	// (0x0001bad9) bg_vkb2_func_pane_ParamLimits

0xd19a,	// (0x0001bad9) bg_vkb2_func_pane

0xe3cc,	// (0x0001cd0b) vkb2_top_cell_left_pane_g1_ParamLimits

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp03_ParamLimits

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp03

0xe42a,	// (0x0001cd69) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4633,	// (0x00012f72) bg_vkb2_func_pane_g1

0x462b,	// (0x00012f6a) bg_vkb2_func_pane_g2

0x463b,	// (0x00012f7a) bg_vkb2_func_pane_g3

0x4643,	// (0x00012f82) bg_vkb2_func_pane_g4

0x464b,	// (0x00012f8a) bg_vkb2_func_pane_g5

0x4653,	// (0x00012f92) bg_vkb2_func_pane_g6

0x4663,	// (0x00012fa2) bg_vkb2_func_pane_g7

0x465b,	// (0x00012f9a) bg_vkb2_func_pane_g8

0x4623,	// (0x00012f62) bg_vkb2_func_pane_g9

0x0008,

0xfdf9,	// (0x0001e738) bg_vkb2_func_pane_g

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp01_ParamLimits

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp01

0xe3cc,	// (0x0001cd0b) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe3cc,	// (0x0001cd0b) vkb2_top_cell_right_wide_pane_g1

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp02_ParamLimits

0xd19a,	// (0x0001bad9) bg_vkb2_fuc_pane_cp02

0xe42a,	// (0x0001cd69) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe42a,	// (0x0001cd69) vkb2_top_cell_right_narrow_pane_g1

0xd96a,	// (0x0001c2a9) aid_touch_area_decrease_ParamLimits

0xd96a,	// (0x0001c2a9) aid_touch_area_decrease

0xd982,	// (0x0001c2c1) aid_touch_area_increase_ParamLimits

0xd982,	// (0x0001c2c1) aid_touch_area_increase

0xd98e,	// (0x0001c2cd) aid_touch_area_mute_ParamLimits

0xd98e,	// (0x0001c2cd) aid_touch_area_mute

0xd9aa,	// (0x0001c2e9) aid_touch_area_slider_ParamLimits

0xd9aa,	// (0x0001c2e9) aid_touch_area_slider

0xd9e4,	// (0x0001c323) popup_slider_window_g4_ParamLimits

0xd9e4,	// (0x0001c323) popup_slider_window_g4

0xd9f0,	// (0x0001c32f) popup_slider_window_g5_ParamLimits

0xd9f0,	// (0x0001c32f) popup_slider_window_g5

0xda12,	// (0x0001c351) popup_slider_window_g6_ParamLimits

0xda12,	// (0x0001c351) popup_slider_window_g6

0x9aa9,	// (0x000183e8) popup_slider_window_t2_ParamLimits

0x9aa9,	// (0x000183e8) popup_slider_window_t2

0x0001,

0xfcf5,	// (0x0001e634) popup_slider_window_t_ParamLimits

0xfcf5,	// (0x0001e634) popup_slider_window_t

0xda24,	// (0x0001c363) slider_pane_ParamLimits

0xda24,	// (0x0001c363) slider_pane

0x9f4d,	// (0x0001888c) slider_pane_g1_ParamLimits

0x9f4d,	// (0x0001888c) slider_pane_g1

0x9f61,	// (0x000188a0) slider_pane_g2_ParamLimits

0x9f61,	// (0x000188a0) slider_pane_g2

0x9f77,	// (0x000188b6) slider_pane_g3_ParamLimits

0x9f77,	// (0x000188b6) slider_pane_g3

0x0003,

0xfe0c,	// (0x0001e74b) slider_pane_g_ParamLimits

0xfe0c,	// (0x0001e74b) slider_pane_g

0xcc34,	// (0x0001b573) popup_tb_float_extension_window_ParamLimits

0xcc34,	// (0x0001b573) popup_tb_float_extension_window

0x9fa3,	// (0x000188e2) aid_size_cell_tb_float_ext

0x21d0,	// (0x00010b0f) bg_popup_sub_window_cp28

0x9fae,	// (0x000188ed) grid_tb_float_ext_pane

0x9fb6,	// (0x000188f5) cell_tb_float_ext_pane_ParamLimits

0x9fb6,	// (0x000188f5) cell_tb_float_ext_pane

0x9fce,	// (0x0001890d) cell_tb_float_ext_pane_g1

0x9fd7,	// (0x00018916) grid_highlight_pane_cp12

0xd2d5,	// (0x0001bc14) cell_last_hwr_side_pane_ParamLimits

0xd2d5,	// (0x0001bc14) cell_last_hwr_side_pane

0x6e5c,	// (0x0001579b) cell_last_hwr_side_pane_g1

0x9fe0,	// (0x0001891f) cell_last_hwr_side_pane_g2

0x0001,

0xfe15,	// (0x0001e754) cell_last_hwr_side_pane_g

0xe2c0,	// (0x0001cbff) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe2c0,	// (0x0001cbff) vkb2_area_bottom_space_btn_pane

0x8a1e,	// (0x0001735d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9e1f,	// (0x0001875e) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe883,	// (0x0001d1c2) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe8bc,	// (0x0001d1fb) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe8bc,	// (0x0001d1fb) vkb2_area_bottom_space_btn_pane_g1

0xe8f2,	// (0x0001d231) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe8f2,	// (0x0001d231) vkb2_area_bottom_space_btn_pane_g2

0xe928,	// (0x0001d267) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe928,	// (0x0001d267) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1a,	// (0x0001e759) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1a,	// (0x0001e759) vkb2_area_bottom_space_btn_pane_g

0xd249,	// (0x0001bb88) cel_fep_hwr_func_pane_ParamLimits

0xd249,	// (0x0001bb88) cel_fep_hwr_func_pane

0xd285,	// (0x0001bbc4) cell_hwr_side_button_pane_ParamLimits

0xd285,	// (0x0001bbc4) cell_hwr_side_button_pane

0x9bb1,	// (0x000184f0) aid_area_touch_clock_ParamLimits

0x255d,	// (0x00010e9c) bg_uniindi_top_pane_ParamLimits

0x9bc3,	// (0x00018502) uniindi_top_pane_g1_ParamLimits

0x9bd9,	// (0x00018518) uniindi_top_pane_g2_ParamLimits

0x9be5,	// (0x00018524) uniindi_top_pane_g3_ParamLimits

0x9bf6,	// (0x00018535) uniindi_top_pane_g4_ParamLimits

0xfd2d,	// (0x0001e66c) uniindi_top_pane_g_ParamLimits

0x9c03,	// (0x00018542) uniindi_top_pane_t1_ParamLimits

0x255d,	// (0x00010e9c) bg_vkb2_func_pane_cp01_ParamLimits

0x255d,	// (0x00010e9c) bg_vkb2_func_pane_cp01

0x9fe9,	// (0x00018928) cel_fep_hwr_func_pane_g1_ParamLimits

0x9fe9,	// (0x00018928) cel_fep_hwr_func_pane_g1

0x255d,	// (0x00010e9c) bg_vkb2_func_pane_cp02_ParamLimits

0x255d,	// (0x00010e9c) bg_vkb2_func_pane_cp02

0x9fe9,	// (0x00018928) cell_hwr_side_button_pane_g1_ParamLimits

0x9fe9,	// (0x00018928) cell_hwr_side_button_pane_g1

0x4482,	// (0x00012dc1) status_pane_g4_ParamLimits

0x4482,	// (0x00012dc1) status_pane_g4

0x449a,	// (0x00012dd9) status_pane_t1

0x6c4c,	// (0x0001558b) form2_midp_gauge_slider_cont_pane

0x6c54,	// (0x00015593) form2_midp_gauge_slider_pane_t1_ParamLimits

0x6c66,	// (0x000155a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0x6c78,	// (0x000155b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb00,	// (0x0001e43f) form2_midp_gauge_slider_pane_t_ParamLimits

0x6c8a,	// (0x000155c9) form2_midp_slider_pane_ParamLimits

0xdf7b,	// (0x0001c8ba) aid_size_cell_func_vkb2_ParamLimits

0xdf7b,	// (0x0001c8ba) aid_size_cell_func_vkb2

0x9f8f,	// (0x000188ce) slider_pane_g4_ParamLimits

0x9f8f,	// (0x000188ce) slider_pane_g4

0xe96e,	// (0x0001d2ad) form2_midp_gauge_slider_pane_t2_cp01

0xe97c,	// (0x0001d2bb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe97c,	// (0x0001d2bb) form2_midp_gauge_slider_pane_t3_cp01

0xe999,	// (0x0001d2d8) form2_midp_slider_pane_cp01

0x21d0,	// (0x00010b0f) navi_smil_pane

0xa019,	// (0x00018958) navi_smil_pane_g1

0xa021,	// (0x00018960) navi_smil_pane_t1

0x9ff7,	// (0x00018936) form2_midp_slider_pane_g1

0xa000,	// (0x0001893f) form2_midp_slider_pane_g2

0xa008,	// (0x00018947) form2_midp_slider_pane_g3

0x9ff7,	// (0x00018936) form2_midp_slider_pane_g4

0xe9a2,	// (0x0001d2e1) form2_midp_slider_pane_g5

0x0004,

0xfe23,	// (0x0001e762) form2_midp_slider_pane_g

0xe95e,	// (0x0001d29d) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe95e,	// (0x0001d29d) vkb2_area_bottom_space_btn_pane_g4

0x42bb,	// (0x00012bfa) lc0_navi_pane_ParamLimits

0x42bb,	// (0x00012bfa) lc0_navi_pane

0x4331,	// (0x00012c70) lc0_stat_indi_pane_ParamLimits

0x4331,	// (0x00012c70) lc0_stat_indi_pane

0x4348,	// (0x00012c87) ls0_title_pane_ParamLimits

0x4348,	// (0x00012c87) ls0_title_pane

0x2fb5,	// (0x000118f4) bg_popup_sub_pane_cp14_ParamLimits

0x9b98,	// (0x000184d7) list_uniindi_pane_ParamLimits

0x9ba4,	// (0x000184e3) uniindi_top_pane_ParamLimits

0x9c3f,	// (0x0001857e) list_single_uniindi_pane_g1_ParamLimits

0x9c52,	// (0x00018591) list_single_uniindi_pane_t1_ParamLimits

0xe9ab,	// (0x0001d2ea) lc0_stat_clock_pane_ParamLimits

0xe9ab,	// (0x0001d2ea) lc0_stat_clock_pane

0xe9b8,	// (0x0001d2f7) lc0_stat_indi_pane_g1_ParamLimits

0xe9b8,	// (0x0001d2f7) lc0_stat_indi_pane_g1

0xe9c5,	// (0x0001d304) lc0_stat_indi_pane_g2_ParamLimits

0xe9c5,	// (0x0001d304) lc0_stat_indi_pane_g2

0x0001,

0xfe2e,	// (0x0001e76d) lc0_stat_indi_pane_g_ParamLimits

0xfe2e,	// (0x0001e76d) lc0_stat_indi_pane_g

0xe9d2,	// (0x0001d311) lc0_uni_indicator_pane_ParamLimits

0xe9d2,	// (0x0001d311) lc0_uni_indicator_pane

0xa02f,	// (0x0001896e) ls0_title_pane_g1_ParamLimits

0xa02f,	// (0x0001896e) ls0_title_pane_g1

0xe9df,	// (0x0001d31e) ls0_title_pane_t1_ParamLimits

0xe9df,	// (0x0001d31e) ls0_title_pane_t1

0xea15,	// (0x0001d354) lc0_uni_indicator_pane_g1_ParamLimits

0xea15,	// (0x0001d354) lc0_uni_indicator_pane_g1

0xa043,	// (0x00018982) lc0_stat_clock_pane_t1

0x21d0,	// (0x00010b0f) main_ai5_pane

0xa051,	// (0x00018990) ai5_sk_pane_ParamLimits

0xa051,	// (0x00018990) ai5_sk_pane

0xea27,	// (0x0001d366) cell_ai5_widget_pane_ParamLimits

0xea27,	// (0x0001d366) cell_ai5_widget_pane

0xa05e,	// (0x0001899d) aid_size_cell_widget_grid

0xa06c,	// (0x000189ab) bg_ai5_widget_pane_ParamLimits

0xa06c,	// (0x000189ab) bg_ai5_widget_pane

0xa0c0,	// (0x000189ff) cell_ai5_widget_pane_g2

0xa0d0,	// (0x00018a0f) cell_ai5_widget_pane_g3

0xa0e7,	// (0x00018a26) cell_ai5_widget_pane_g4

0xa0f3,	// (0x00018a32) cell_ai5_widget_pane_g5

0xa0ff,	// (0x00018a3e) cell_ai5_widget_pane_g6

0xa10b,	// (0x00018a4a) cell_ai5_widget_pane_g7

0xa153,	// (0x00018a92) cell_ai5_widget_pane_t1_ParamLimits

0xa153,	// (0x00018a92) cell_ai5_widget_pane_t1

0xa170,	// (0x00018aaf) cell_ai5_widget_pane_t2_ParamLimits

0xa170,	// (0x00018aaf) cell_ai5_widget_pane_t2

0xa188,	// (0x00018ac7) cell_ai5_widget_pane_t3_ParamLimits

0xa188,	// (0x00018ac7) cell_ai5_widget_pane_t3

0xa1a0,	// (0x00018adf) cell_ai5_widget_pane_t4_ParamLimits

0xa1a0,	// (0x00018adf) cell_ai5_widget_pane_t4

0xa1bd,	// (0x00018afc) cell_ai5_widget_pane_t5_ParamLimits

0xa1bd,	// (0x00018afc) cell_ai5_widget_pane_t5

0xa1dc,	// (0x00018b1b) cell_ai5_widget_pane_t6_ParamLimits

0xa1dc,	// (0x00018b1b) cell_ai5_widget_pane_t6

0xa1ee,	// (0x00018b2d) cell_ai5_widget_pane_t7_ParamLimits

0xa1ee,	// (0x00018b2d) cell_ai5_widget_pane_t7

0xa207,	// (0x00018b46) cell_ai5_widget_pane_t8_ParamLimits

0xa207,	// (0x00018b46) cell_ai5_widget_pane_t8

0x0009,

0xfe48,	// (0x0001e787) cell_ai5_widget_pane_t_ParamLimits

0xfe48,	// (0x0001e787) cell_ai5_widget_pane_t

0xa25b,	// (0x00018b9a) grid_ai5_widget_pane

0x2fb5,	// (0x000118f4) highlight_cell_ai5_widget_pane_ParamLimits

0x2fb5,	// (0x000118f4) highlight_cell_ai5_widget_pane

0xea8f,	// (0x0001d3ce) ai5_sk_left_pane

0xea99,	// (0x0001d3d8) ai5_sk_middle_pane

0xeaa3,	// (0x0001d3e2) ai5_sk_right_pane

0xa267,	// (0x00018ba6) bg_ai5_widget_pane_g1_ParamLimits

0xa267,	// (0x00018ba6) bg_ai5_widget_pane_g1

0xa273,	// (0x00018bb2) bg_ai5_widget_pane_g2_ParamLimits

0xa273,	// (0x00018bb2) bg_ai5_widget_pane_g2

0xa27f,	// (0x00018bbe) bg_ai5_widget_pane_g3_ParamLimits

0xa27f,	// (0x00018bbe) bg_ai5_widget_pane_g3

0xa28b,	// (0x00018bca) bg_ai5_widget_pane_g4_ParamLimits

0xa28b,	// (0x00018bca) bg_ai5_widget_pane_g4

0xa297,	// (0x00018bd6) bg_ai5_widget_pane_g5_ParamLimits

0xa297,	// (0x00018bd6) bg_ai5_widget_pane_g5

0xa2a3,	// (0x00018be2) bg_ai5_widget_pane_g6_ParamLimits

0xa2a3,	// (0x00018be2) bg_ai5_widget_pane_g6

0xa2af,	// (0x00018bee) bg_ai5_widget_pane_g7_ParamLimits

0xa2af,	// (0x00018bee) bg_ai5_widget_pane_g7

0xa2bb,	// (0x00018bfa) bg_ai5_widget_pane_g8_ParamLimits

0xa2bb,	// (0x00018bfa) bg_ai5_widget_pane_g8

0xa2c7,	// (0x00018c06) bg_ai5_widget_pane_g9_ParamLimits

0xa2c7,	// (0x00018c06) bg_ai5_widget_pane_g9

0x0008,

0xfe5d,	// (0x0001e79c) bg_ai5_widget_pane_g_ParamLimits

0xfe5d,	// (0x0001e79c) bg_ai5_widget_pane_g

0xa2f9,	// (0x00018c38) cell_shortcut_ai5_widget_pane_ParamLimits

0xa2f9,	// (0x00018c38) cell_shortcut_ai5_widget_pane

0x3dc5,	// (0x00012704) bg_cell_shortcut_ai5_widget_pane

0xa30a,	// (0x00018c49) cell_grid_ai5_widget_pane_g1

0x3dc5,	// (0x00012704) highlight_cell_shortcut_ai5_widget_pane

0x462b,	// (0x00012f6a) ai5_sk_left_pane_g1

0xa313,	// (0x00018c52) ai5_sk_left_pane_g2

0xa31b,	// (0x00018c5a) ai5_sk_left_pane_g3

0xa323,	// (0x00018c62) ai5_sk_left_pane_g4

0x0003,

0xfe70,	// (0x0001e7af) ai5_sk_left_pane_g

0xa32b,	// (0x00018c6a) ai5_sk_left_pane_t1

0x4633,	// (0x00012f72) ai5_sk_right_pane_g1

0xa339,	// (0x00018c78) ai5_sk_right_pane_g2

0xa341,	// (0x00018c80) ai5_sk_right_pane_g3

0xa349,	// (0x00018c88) ai5_sk_right_pane_g4

0x0003,

0xfe79,	// (0x0001e7b8) ai5_sk_right_pane_g

0xa351,	// (0x00018c90) ai5_sk_right_pane_t1

0x4633,	// (0x00012f72) ai5_sk_middle_pane_g1

0x462b,	// (0x00012f6a) ai5_sk_middle_pane_g2

0x464b,	// (0x00012f8a) ai5_sk_middle_pane_g3

0xa341,	// (0x00018c80) ai5_sk_middle_pane_g4

0xa31b,	// (0x00018c5a) ai5_sk_middle_pane_g5

0xa35f,	// (0x00018c9e) ai5_sk_middle_pane_g6

0xeaad,	// (0x0001d3ec) ai5_sk_middle_pane_g7

0x0006,

0xfe82,	// (0x0001e7c1) ai5_sk_middle_pane_g

0x414d,	// (0x00012a8c) aid_touch_area_size_lc0_ParamLimits

0x414d,	// (0x00012a8c) aid_touch_area_size_lc0

0xd4ac,	// (0x0001bdeb) cell_hwr_candidate_pane_t1_ParamLimits

0x4167,	// (0x00012aa6) aid_touch_navi_pane

0x442c,	// (0x00012d6b) status_dt_navi_pane_ParamLimits

0x442c,	// (0x00012d6b) status_dt_navi_pane

0x4439,	// (0x00012d78) status_dt_sta_pane_ParamLimits

0x4439,	// (0x00012d78) status_dt_sta_pane

0xeab5,	// (0x0001d3f4) dt_sta_controll_pane

0xeac2,	// (0x0001d401) dt_sta_indi_pane

0xeacf,	// (0x0001d40e) dt_sta_title_pane

0x255d,	// (0x00010e9c) bg_dt_sta_indi_pane_ParamLimits

0x255d,	// (0x00010e9c) bg_dt_sta_indi_pane

0xa367,	// (0x00018ca6) dt_sta_battery_pane

0xa36f,	// (0x00018cae) dt_sta_indi_pane_g1

0xa378,	// (0x00018cb7) dt_sta_indi_pane_g2

0xa381,	// (0x00018cc0) dt_sta_indi_pane_g3

0x0002,

0xfe91,	// (0x0001e7d0) dt_sta_indi_pane_g

0xa38a,	// (0x00018cc9) dt_sta_signal_pane

0x2fb5,	// (0x000118f4) bg_dt_sta_title_pane_ParamLimits

0x2fb5,	// (0x000118f4) bg_dt_sta_title_pane

0xa393,	// (0x00018cd2) dt_sta_title_pane_g1

0xa39b,	// (0x00018cda) dt_sta_title_pane_t1_ParamLimits

0xa39b,	// (0x00018cda) dt_sta_title_pane_t1

0x21d0,	// (0x00010b0f) bg_dt_sta_control_pane

0xa3b0,	// (0x00018cef) dt_sta_controll_pane_g1

0xa3b9,	// (0x00018cf8) bg_dt_sta_title_pane_g1

0xa3c2,	// (0x00018d01) bg_dt_sta_title_pane_g2

0xa3cb,	// (0x00018d0a) bg_dt_sta_title_pane_g3

0x0002,

0xfe98,	// (0x0001e7d7) bg_dt_sta_title_pane_g

0x6e5c,	// (0x0001579b) bg_dt_sta_indi_pane_g1

0xa3d4,	// (0x00018d13) dt_sta_signal_pane_g1

0xa3dc,	// (0x00018d1b) dt_sta_signal_pane_g2

0x0001,

0xfe9f,	// (0x0001e7de) dt_sta_signal_pane_g

0xa3e4,	// (0x00018d23) dt_sta_battery_pane_g1

0xa3ed,	// (0x00018d2c) dt_sta_battery_pane_t1

0x6e5c,	// (0x0001579b) bg_dt_sta_control_pane_g1

0x3865,	// (0x000121a4) fep_china_uni_eep_pane

0x386d,	// (0x000121ac) fep_china_uni_entry_pane_ParamLimits

0x387d,	// (0x000121bc) popup_fep_china_uni_window_g1_ParamLimits

0x388d,	// (0x000121cc) popup_fep_china_uni_window_g2_ParamLimits

0x388d,	// (0x000121cc) popup_fep_china_uni_window_g2

0x0001,

0xf71d,	// (0x0001e05c) popup_fep_china_uni_window_g_ParamLimits

0xf71d,	// (0x0001e05c) popup_fep_china_uni_window_g

0xa3fc,	// (0x00018d3b) fep_china_uni_eep_pane_g1

0xa404,	// (0x00018d43) fep_china_uni_eep_pane_t1

0xa010,	// (0x0001894f) aid_touch_area_size_smil_player

0x42b3,	// (0x00012bf2) lc0_clock_pane

0x448e,	// (0x00012dcd) status_pane_g5_ParamLimits

0x448e,	// (0x00012dcd) status_pane_g5

0xc997,	// (0x0001b2d6) popup_keymap_window

0x444e,	// (0x00012d8d) status_icon_pane

0xa0d0,	// (0x00018a0f) cell_ai5_widget_pane_g3_ParamLimits

0xa0e7,	// (0x00018a26) cell_ai5_widget_pane_g4_ParamLimits

0xa0f3,	// (0x00018a32) cell_ai5_widget_pane_g5_ParamLimits

0xa117,	// (0x00018a56) cell_ai5_widget_pane_g8_ParamLimits

0xa117,	// (0x00018a56) cell_ai5_widget_pane_g8

0xa12b,	// (0x00018a6a) cell_ai5_widget_pane_g9_ParamLimits

0xa12b,	// (0x00018a6a) cell_ai5_widget_pane_g9

0xa13f,	// (0x00018a7e) cell_ai5_widget_pane_g10_ParamLimits

0xa13f,	// (0x00018a7e) cell_ai5_widget_pane_g10

0xa413,	// (0x00018d52) status_icon_pane_g1

0x21d0,	// (0x00010b0f) bg_popup_sub_pane_cp13

0xa41b,	// (0x00018d5a) popup_keymap_window_t1

0x40a4,	// (0x000129e3) control_pane_g6_ParamLimits

0x40a4,	// (0x000129e3) control_pane_g6

0x4097,	// (0x000129d6) control_pane_g7_ParamLimits

0x4097,	// (0x000129d6) control_pane_g7

0x408a,	// (0x000129c9) control_pane_g8_ParamLimits

0x408a,	// (0x000129c9) control_pane_g8

0xeab5,	// (0x0001d3f4) dt_sta_controll_pane_ParamLimits

0xeac2,	// (0x0001d401) dt_sta_indi_pane_ParamLimits

0xeacf,	// (0x0001d40e) dt_sta_title_pane_ParamLimits

0x29c2,	// (0x00011301) aid_size_touch_scroll_bar_cale

0xc0a4,	// (0x0001a9e3) popup_discreet_window_ParamLimits

0xc0a4,	// (0x0001a9e3) popup_discreet_window

0xc108,	// (0x0001aa47) popup_sk_window

0x4cf5,	// (0x00013634) bg_popup_sub_pane_cp28_ParamLimits

0x4cf5,	// (0x00013634) bg_popup_sub_pane_cp28

0xa429,	// (0x00018d68) popup_discreet_window_g1_ParamLimits

0xa429,	// (0x00018d68) popup_discreet_window_g1

0xa449,	// (0x00018d88) popup_discreet_window_t1_ParamLimits

0xa449,	// (0x00018d88) popup_discreet_window_t1

0xa467,	// (0x00018da6) popup_discreet_window_t2_ParamLimits

0xa467,	// (0x00018da6) popup_discreet_window_t2

0x0002,

0xfea4,	// (0x0001e7e3) popup_discreet_window_t_ParamLimits

0xfea4,	// (0x0001e7e3) popup_discreet_window_t

0xeae0,	// (0x0001d41f) popup_sk_window_g1

0xeaea,	// (0x0001d429) popup_sk_window_g2

0x0001,

0xfeab,	// (0x0001e7ea) popup_sk_window_g

0xeaf2,	// (0x0001d431) popup_sk_window_t1

0xeb00,	// (0x0001d43f) popup_sk_window_t1_copy1

0xa0c0,	// (0x000189ff) cell_ai5_widget_pane_g2_ParamLimits

0xa219,	// (0x00018b58) cell_ai5_widget_pane_t9_ParamLimits

0xa219,	// (0x00018b58) cell_ai5_widget_pane_t9

0x21d0,	// (0x00010b0f) main_fep_fshwr2_pane

0xeb0e,	// (0x0001d44d) aid_fshwr2_btn_pane

0xeb1a,	// (0x0001d459) aid_fshwr2_syb_pane

0xeb26,	// (0x0001d465) aid_fshwr2_txt_pane

0xeb32,	// (0x0001d471) fshwr2_func_candi_pane

0xeb43,	// (0x0001d482) fshwr2_hwr_syb_pane

0xeb4f,	// (0x0001d48e) fshwr2_icf_pane

0x21d0,	// (0x00010b0f) fshwr2_icf_bg_pane

0xeb74,	// (0x0001d4b3) fshwr2_icf_pane_t1_ParamLimits

0xeb74,	// (0x0001d4b3) fshwr2_icf_pane_t1

0x3768,	// (0x000120a7) fshwr2_func_candi_pane_g1

0xeb8c,	// (0x0001d4cb) fshwr2_func_candi_row_pane_ParamLimits

0xeb8c,	// (0x0001d4cb) fshwr2_func_candi_row_pane

0xeb9c,	// (0x0001d4db) cell_fshwr2_syb_pane_ParamLimits

0xeb9c,	// (0x0001d4db) cell_fshwr2_syb_pane

0x8a1e,	// (0x0001735d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) fshwr2_hwr_syb_pane_g1

0x21d0,	// (0x00010b0f) bg_popup_call_pane_cp01

0xebb0,	// (0x0001d4ef) fshwr2_func_candi_cell_pane_ParamLimits

0xebb0,	// (0x0001d4ef) fshwr2_func_candi_cell_pane

0x5339,	// (0x00013c78) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x5339,	// (0x00013c78) fshwr2_func_candi_cell_bg_pane

0xebef,	// (0x0001d52e) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xebef,	// (0x0001d52e) fshwr2_func_candi_cell_pane_g1

0xec0f,	// (0x0001d54e) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xec0f,	// (0x0001d54e) fshwr2_func_candi_cell_pane_t1

0x21d0,	// (0x00010b0f) bg_button_pane_cp08

0x3dc5,	// (0x00012704) cell_fshwr2_syb_bg_pane

0xec22,	// (0x0001d561) cell_fshwr2_syb_bg_pane_g1

0xec2a,	// (0x0001d569) cell_fshwr2_syb_bg_pane_t1

0x2fb5,	// (0x000118f4) main_tmo_pane

0x57c8,	// (0x00014107) uni_indicator_pane_g1_ParamLimits

0x57db,	// (0x0001411a) uni_indicator_pane_g2_ParamLimits

0x57ed,	// (0x0001412c) uni_indicator_pane_g3_ParamLimits

0x57fc,	// (0x0001413b) uni_indicator_pane_g4_ParamLimits

0x57fc,	// (0x0001413b) uni_indicator_pane_g4

0x5810,	// (0x0001414f) uni_indicator_pane_g5_ParamLimits

0x5810,	// (0x0001414f) uni_indicator_pane_g5

0x5810,	// (0x0001414f) uni_indicator_pane_g6_ParamLimits

0x5810,	// (0x0001414f) uni_indicator_pane_g6

0xf91a,	// (0x0001e259) uni_indicator_pane_g_ParamLimits

0xd94e,	// (0x0001c28d) popup_tmo_note_window_ParamLimits

0xd94e,	// (0x0001c28d) popup_tmo_note_window

0x2fb5,	// (0x000118f4) fshwr2_bg_pane

0xec00,	// (0x0001d53f) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xec00,	// (0x0001d53f) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb0,	// (0x0001e7ef) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb0,	// (0x0001e7ef) fshwr2_func_candi_cell_pane_g

0x6e5c,	// (0x0001579b) bg_popup_window_pane_cp01

0xec39,	// (0x0001d578) bg_popup_window_pane_g1_cp01

0xec42,	// (0x0001d581) bg_popup_window_pane_cp22_ParamLimits

0xec42,	// (0x0001d581) bg_popup_window_pane_cp22

0xec50,	// (0x0001d58f) listscroll_tmo_link_pane_ParamLimits

0xec50,	// (0x0001d58f) listscroll_tmo_link_pane

0xec90,	// (0x0001d5cf) popup_tmo_note_window_g1_ParamLimits

0xec90,	// (0x0001d5cf) popup_tmo_note_window_g1

0xec9d,	// (0x0001d5dc) tmo_note_info_pane_ParamLimits

0xec9d,	// (0x0001d5dc) tmo_note_info_pane

0xecb7,	// (0x0001d5f6) list_tmo_note_info_pane_g1_ParamLimits

0xecb7,	// (0x0001d5f6) list_tmo_note_info_pane_g1

0xecce,	// (0x0001d60d) list_tmo_note_info_pane_g2_ParamLimits

0xecce,	// (0x0001d60d) list_tmo_note_info_pane_g2

0x0001,

0xfeb5,	// (0x0001e7f4) list_tmo_note_info_pane_g_ParamLimits

0xfeb5,	// (0x0001e7f4) list_tmo_note_info_pane_g

0xecea,	// (0x0001d629) list_tmo_note_info_text_pane_ParamLimits

0xecea,	// (0x0001d629) list_tmo_note_info_text_pane

0xed6b,	// (0x0001d6aa) list_tmo_link_pane

0xed78,	// (0x0001d6b7) scroll_pane_cp20

0xed85,	// (0x0001d6c4) list_single_tmo_link_pane_ParamLimits

0xed85,	// (0x0001d6c4) list_single_tmo_link_pane

0xed95,	// (0x0001d6d4) list_single_tmo_link_pane_t1

0xeda3,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1_ParamLimits

0xeda3,	// (0x0001d6e2) list_tmo_note_info_text_pane_t1

0x31dc,	// (0x00011b1b) aid_size_touch_scroll_bar_cp01_ParamLimits

0x31dc,	// (0x00011b1b) aid_size_touch_scroll_bar_cp01

0xb45a,	// (0x00019d99) aid_size_touch_slider_marker

0xc0f4,	// (0x0001aa33) popup_settings_window_ParamLimits

0xc0f4,	// (0x0001aa33) popup_settings_window

0xb5e6,	// (0x00019f25) popup_candi_list_indi_window

0x4167,	// (0x00012aa6) aid_touch_navi_pane_ParamLimits

0xda78,	// (0x0001c3b7) rs_clock_indi_pane

0xda81,	// (0x0001c3c0) sctrl_sk_bottom_pane_ParamLimits

0xda92,	// (0x0001c3d1) sctrl_sk_top_pane_ParamLimits

0xdfd5,	// (0x0001c914) popup_fep_tooltip_window

0xa05e,	// (0x0001899d) aid_size_cell_widget_grid_ParamLimits

0xa0ab,	// (0x000189ea) cell_ai5_widget_pane_g1_ParamLimits

0xa0ab,	// (0x000189ea) cell_ai5_widget_pane_g1

0xa0ff,	// (0x00018a3e) cell_ai5_widget_pane_g6_ParamLimits

0xa10b,	// (0x00018a4a) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe33,	// (0x0001e772) cell_ai5_widget_pane_g_ParamLimits

0xfe33,	// (0x0001e772) cell_ai5_widget_pane_g

0xa23d,	// (0x00018b7c) cell_ai5_widget_pane_t10_ParamLimits

0xa23d,	// (0x00018b7c) cell_ai5_widget_pane_t10

0xa25b,	// (0x00018b9a) grid_ai5_widget_pane_ParamLimits

0xa2d3,	// (0x00018c12) cell_contacts_ai5_widget_pane_ParamLimits

0xa2d3,	// (0x00018c12) cell_contacts_ai5_widget_pane

0xa47c,	// (0x00018dbb) popup_discreet_window_t3_ParamLimits

0xa47c,	// (0x00018dbb) popup_discreet_window_t3

0xeb62,	// (0x0001d4a1) popup_fshwr2_char_preview_window_ParamLimits

0xeb62,	// (0x0001d4a1) popup_fshwr2_char_preview_window

0xed08,	// (0x0001d647) tmo_note_info_pane_t1

0xed1d,	// (0x0001d65c) tmo_note_info_pane_t2

0xed32,	// (0x0001d671) tmo_note_info_pane_t3

0xed47,	// (0x0001d686) tmo_note_info_pane_t4

0xed59,	// (0x0001d698) tmo_note_info_pane_t5

0x0004,

0xfeba,	// (0x0001e7f9) tmo_note_info_pane_t

0xed6b,	// (0x0001d6aa) list_tmo_link_pane_ParamLimits

0xed78,	// (0x0001d6b7) scroll_pane_cp20_ParamLimits

0x21d0,	// (0x00010b0f) bg_popup_fep_char_preview_window_cp01

0xedbc,	// (0x0001d6fb) popup_fshwr2_char_preview_window_t1

0xedca,	// (0x0001d709) popup_candi_list_indi_window_g1

0xedd3,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane

0xeddf,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1

0xedf4,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2

0xee00,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec5,	// (0x0001e804) cell_contacts_ai5_widget_pane_g

0xee0c,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1

0x2fb5,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01

0xee81,	// (0x0001d7c0) settings_container_pane

0x3dc5,	// (0x00012704) listscroll_set_pane_copy1

0x6372,	// (0x00014cb1) scroll_pane_cp121_copy1

0x4ab7,	// (0x000133f6) set_content_pane_copy1

0xee8d,	// (0x0001d7cc) aid_height_set_list_copy1_ParamLimits

0xee8d,	// (0x0001d7cc) aid_height_set_list_copy1

0x5a11,	// (0x00014350) aid_size_parent_copy1_ParamLimits

0x5a11,	// (0x00014350) aid_size_parent_copy1

0xee99,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1_ParamLimits

0xee99,	// (0x0001d7d8) button_value_adjust_pane_cp6_copy1

0x4107,	// (0x00012a46) list_highlight_pane_cp2_copy1_ParamLimits

0x4107,	// (0x00012a46) list_highlight_pane_cp2_copy1

0xeead,	// (0x0001d7ec) list_set_pane_copy1_ParamLimits

0xeead,	// (0x0001d7ec) list_set_pane_copy1

0xee1e,	// (0x0001d75d) main_pane_set_t1_copy1_ParamLimits

0xee1e,	// (0x0001d75d) main_pane_set_t1_copy1

0xee58,	// (0x0001d797) main_pane_set_t2_copy1_ParamLimits

0xee58,	// (0x0001d797) main_pane_set_t2_copy1

0xef3c,	// (0x0001d87b) main_pane_set_t3_copy1

0xef4a,	// (0x0001d889) main_pane_set_t4_copy1

0xee75,	// (0x0001d7b4) set_content_pane_g1_copy1_ParamLimits

0xee75,	// (0x0001d7b4) set_content_pane_g1_copy1

0xef58,	// (0x0001d897) setting_code_pane_copy1

0xef60,	// (0x0001d89f) setting_slider_graphic_pane_copy1

0xef60,	// (0x0001d89f) setting_slider_pane_copy1

0xef60,	// (0x0001d89f) setting_text_pane_copy1

0xef60,	// (0x0001d89f) setting_volume_pane_copy1

0xef58,	// (0x0001d897) settings_code_pane_cp2_copy1

0xef68,	// (0x0001d8a7) settings_code_pane_cp_copy1_ParamLimits

0xef68,	// (0x0001d8a7) settings_code_pane_cp_copy1

0xef7c,	// (0x0001d8bb) volume_set_pane_copy1

0xef84,	// (0x0001d8c3) volume_set_pane_g10_copy1

0xef8c,	// (0x0001d8cb) volume_set_pane_g1_copy1

0xef94,	// (0x0001d8d3) volume_set_pane_g2_copy1

0xef9c,	// (0x0001d8db) volume_set_pane_g3_copy1

0xefa4,	// (0x0001d8e3) volume_set_pane_g4_copy1

0xefac,	// (0x0001d8eb) volume_set_pane_g5_copy1

0xefb4,	// (0x0001d8f3) volume_set_pane_g6_copy1

0xefbc,	// (0x0001d8fb) volume_set_pane_g7_copy1

0xefc4,	// (0x0001d903) volume_set_pane_g8_copy1

0xefcc,	// (0x0001d90b) volume_set_pane_g9_copy1

0x22c4,	// (0x00010c03) bg_set_opt_pane_cp_copy1_ParamLimits

0x22c4,	// (0x00010c03) bg_set_opt_pane_cp_copy1

0xefd4,	// (0x0001d913) setting_slider_pane_t1_copy1_ParamLimits

0xefd4,	// (0x0001d913) setting_slider_pane_t1_copy1

0xeff2,	// (0x0001d931) setting_slider_pane_t2_copy1_ParamLimits

0xeff2,	// (0x0001d931) setting_slider_pane_t2_copy1

0xf00b,	// (0x0001d94a) setting_slider_pane_t3_copy1_ParamLimits

0xf00b,	// (0x0001d94a) setting_slider_pane_t3_copy1

0xf022,	// (0x0001d961) slider_set_pane_copy1_ParamLimits

0xf022,	// (0x0001d961) slider_set_pane_copy1

0x30f6,	// (0x00011a35) set_opt_bg_pane_g1_copy2

0x30fe,	// (0x00011a3d) set_opt_bg_pane_g2_copy2

0xf038,	// (0x0001d977) set_opt_bg_pane_g3_copy2

0x310e,	// (0x00011a4d) set_opt_bg_pane_g4_copy2

0x3116,	// (0x00011a55) set_opt_bg_pane_g5_copy2

0x311e,	// (0x00011a5d) set_opt_bg_pane_g6_copy2

0xf040,	// (0x0001d97f) set_opt_bg_pane_g7_copy2

0xf048,	// (0x0001d987) set_opt_bg_pane_g8_copy2

0xf050,	// (0x0001d98f) set_opt_bg_pane_g9_copy2

0xf058,	// (0x0001d997) aid_size_touch_slider_mark_copy1_ParamLimits

0xf058,	// (0x0001d997) aid_size_touch_slider_mark_copy1

0xf06c,	// (0x0001d9ab) slider_set_pane_g1_copy1

0xf075,	// (0x0001d9b4) slider_set_pane_g2_copy1

0xcfd7,	// (0x0001b916) slider_set_pane_g3_copy1_ParamLimits

0xcfd7,	// (0x0001b916) slider_set_pane_g3_copy1

0xcfeb,	// (0x0001b92a) slider_set_pane_g4_copy1_ParamLimits

0xcfeb,	// (0x0001b92a) slider_set_pane_g4_copy1

0xd003,	// (0x0001b942) slider_set_pane_g5_copy1_ParamLimits

0xd003,	// (0x0001b942) slider_set_pane_g5_copy1

0xcfd7,	// (0x0001b916) slider_set_pane_g6_copy1_ParamLimits

0xcfd7,	// (0x0001b916) slider_set_pane_g6_copy1

0xf07d,	// (0x0001d9bc) slider_set_pane_g7_copy1_ParamLimits

0xf07d,	// (0x0001d9bc) slider_set_pane_g7_copy1

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp2_copy1

0xf093,	// (0x0001d9d2) setting_slider_graphic_pane_g1_copy1

0xf09c,	// (0x0001d9db) setting_slider_graphic_pane_t1_copy1

0xf0ab,	// (0x0001d9ea) setting_slider_graphic_pane_t2_copy1

0xf0ba,	// (0x0001d9f9) slider_set_pane_cp_copy1

0xf0ca,	// (0x0001da09) input_focus_pane_cp1_copy1

0xf0d3,	// (0x0001da12) list_set_text_pane_copy1

0xf0db,	// (0x0001da1a) setting_text_pane_g1_copy1

0xbe2e,	// (0x0001a76d) set_text_pane_t1_copy1

0xf0ca,	// (0x0001da09) input_focus_pane_cp2_copy1

0xf0db,	// (0x0001da1a) setting_code_pane_g1_copy1

0xf0e4,	// (0x0001da23) setting_code_pane_t1_copy1

0x3aca,	// (0x00012409) list_set_graphic_pane_copy1

0x21e4,	// (0x00010b23) bg_set_opt_pane_cp4_copy1

0x3adc,	// (0x0001241b) list_set_graphic_pane_g1_copy1_ParamLimits

0x3adc,	// (0x0001241b) list_set_graphic_pane_g1_copy1

0xf0f2,	// (0x0001da31) list_set_graphic_pane_g2_copy1

0x3af4,	// (0x00012433) list_set_graphic_pane_t1_copy1_ParamLimits

0x3af4,	// (0x00012433) list_set_graphic_pane_t1_copy1

0x6e5c,	// (0x0001579b) rs_clock_indi_pane_g1

0xf0fa,	// (0x0001da39) rs_clock_indi_pane_t1

0xf108,	// (0x0001da47) rs_indi_pane

0xf110,	// (0x0001da4f) rs_indi_pane_g1

0xf119,	// (0x0001da58) rs_indi_pane_g2

0xf122,	// (0x0001da61) rs_indi_pane_g3

0x0002,

0xfecc,	// (0x0001e80b) rs_indi_pane_g

0x3dc5,	// (0x00012704) bg_popup_preview_window_pane_cp03

0xf12b,	// (0x0001da6a) popup_fep_tooltip_window_t1

0x933e,	// (0x00017c7d) popup_note2_window_g2_ParamLimits

0x933e,	// (0x00017c7d) popup_note2_window_g2

0x0001,

0xfc6c,	// (0x0001e5ab) popup_note2_window_g_ParamLimits

0xfc6c,	// (0x0001e5ab) popup_note2_window_g

0x97fe,	// (0x0001813d) bg_popup_sub_pane_cp11_ParamLimits

0x980b,	// (0x0001814a) cell_ai3_links_pane_g1_ParamLimits

0x9822,	// (0x00018161) cell_ai3_links_pane_t1

0xbe2e,	// (0x0001a76d) set_text_pane_t1_copy1_ParamLimits

0x3cd8,	// (0x00012617) cell_graphic_popup_pane_cp2_ParamLimits

0x3cd8,	// (0x00012617) cell_graphic_popup_pane_cp2

0xf139,	// (0x0001da78) cell_graphic_popup_pane_g1_cp2

0x2871,	// (0x000111b0) cell_graphic_popup_pane_g2_cp2

0xf141,	// (0x0001da80) cell_graphic_popup_pane_g3_cp2

0xf149,	// (0x0001da88) cell_graphic_popup_pane_t2_cp2

0x2882,	// (0x000111c1) grid_highlight_pane_cp3_cp2

0x34b9,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2fb5,	// (0x000118f4) main_tmo_pane_ParamLimits

0xd946,	// (0x0001c285) popup_tmo_big_image_note_window

0xa09a,	// (0x000189d9) cell_ai5_widget_list_pane

0xa0a2,	// (0x000189e1) cell_ai5_widget_lrg_icon_pane

0xed08,	// (0x0001d647) tmo_note_info_pane_t1_ParamLimits

0xed1d,	// (0x0001d65c) tmo_note_info_pane_t2_ParamLimits

0xed32,	// (0x0001d671) tmo_note_info_pane_t3_ParamLimits

0xed47,	// (0x0001d686) tmo_note_info_pane_t4_ParamLimits

0xed59,	// (0x0001d698) tmo_note_info_pane_t5_ParamLimits

0xfeba,	// (0x0001e7f9) tmo_note_info_pane_t_ParamLimits

0xee81,	// (0x0001d7c0) settings_container_pane_ParamLimits

0xf0c2,	// (0x0001da01) indicator_popup_pane_cp5

0xf0c2,	// (0x0001da01) indicator_popup_pane_cp6

0x3aca,	// (0x00012409) list_set_graphic_pane_copy1_ParamLimits

0x21d0,	// (0x00010b0f) bg_popup_window_pane_cp23

0xf157,	// (0x0001da96) popup_tmo_big_image_note_window_g1

0xf160,	// (0x0001da9f) popup_tmo_big_image_note_window_t1

0xf16e,	// (0x0001daad) popup_tmo_big_image_note_window_t2

0xf17c,	// (0x0001dabb) popup_tmo_big_image_note_window_t3

0x0002,

0xfed3,	// (0x0001e812) popup_tmo_big_image_note_window_t

0x6e5c,	// (0x0001579b) cell_ai5_widget_lrg_icon_pane_g1

0xf18a,	// (0x0001dac9) cell_ai5_widget_lrg_icon_pane_t1

0xf198,	// (0x0001dad7) cell_ai5_widget_list_row_pane_ParamLimits

0xf198,	// (0x0001dad7) cell_ai5_widget_list_row_pane

0xf1af,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf1af,	// (0x0001daee) cell_ai5_widget_list_row_pane_g1

0xf1bc,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf1bc,	// (0x0001dafb) cell_ai5_widget_list_row_pane_t1

0xf1ea,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf1ea,	// (0x0001db29) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeda,	// (0x0001e819) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeda,	// (0x0001e819) cell_ai5_widget_list_row_pane_t

0x21d0,	// (0x00010b0f) main_fep_vtchi_ss_pane

0xf22e,	// (0x0001db6d) popup_fep_char_pre_window

0xf236,	// (0x0001db75) popup_fep_ituss_window

0xf253,	// (0x0001db92) popup_fep_vkbss_window

0xf27b,	// (0x0001dbba) grid_vkbss_keypad_pane_ParamLimits

0xf27b,	// (0x0001dbba) grid_vkbss_keypad_pane

0xf287,	// (0x0001dbc6) ituss_keypad_pane

0xf2a0,	// (0x0001dbdf) aid_vkbss_key_offset_ParamLimits

0xf2a0,	// (0x0001dbdf) aid_vkbss_key_offset

0xf2ac,	// (0x0001dbeb) cell_vkbss_key_pane_ParamLimits

0xf2ac,	// (0x0001dbeb) cell_vkbss_key_pane

0x446a,	// (0x00012da9) bg_cell_vkbss_key_g1_ParamLimits

0x446a,	// (0x00012da9) bg_cell_vkbss_key_g1

0xf2c2,	// (0x0001dc01) cell_vkbss_key_3p_pane_ParamLimits

0xf2c2,	// (0x0001dc01) cell_vkbss_key_3p_pane

0xf2d6,	// (0x0001dc15) cell_vkbss_key_g1_ParamLimits

0xf2d6,	// (0x0001dc15) cell_vkbss_key_g1

0xf2ea,	// (0x0001dc29) cell_vkbss_key_t1_ParamLimits

0xf2ea,	// (0x0001dc29) cell_vkbss_key_t1

0xf315,	// (0x0001dc54) cell_ituss_key_pane_ParamLimits

0xf315,	// (0x0001dc54) cell_ituss_key_pane

0xf326,	// (0x0001dc65) bg_cell_ituss_key_g1_ParamLimits

0xf326,	// (0x0001dc65) bg_cell_ituss_key_g1

0xf332,	// (0x0001dc71) cell_ituss_key_pane_g1_ParamLimits

0xf332,	// (0x0001dc71) cell_ituss_key_pane_g1

0xf346,	// (0x0001dc85) cell_ituss_key_pane_g2_ParamLimits

0xf346,	// (0x0001dc85) cell_ituss_key_pane_g2

0x0002,

0xfee1,	// (0x0001e820) cell_ituss_key_pane_g_ParamLimits

0xfee1,	// (0x0001e820) cell_ituss_key_pane_g

0xf380,	// (0x0001dcbf) cell_ituss_key_t1_ParamLimits

0xf380,	// (0x0001dcbf) cell_ituss_key_t1

0xf3ba,	// (0x0001dcf9) cell_ituss_key_t2_ParamLimits

0xf3ba,	// (0x0001dcf9) cell_ituss_key_t2

0xf3eb,	// (0x0001dd2a) cell_ituss_key_t3_ParamLimits

0xf3eb,	// (0x0001dd2a) cell_ituss_key_t3

0xf3ba,	// (0x0001dcf9) cell_ituss_key_t4_ParamLimits

0xf3ba,	// (0x0001dcf9) cell_ituss_key_t4

0x0004,

0xfee8,	// (0x0001e827) cell_ituss_key_t_ParamLimits

0xfee8,	// (0x0001e827) cell_ituss_key_t

0xf42e,	// (0x0001dd6d) cell_vkbss_key_3p_pane_g1

0xf436,	// (0x0001dd75) cell_vkbss_key_3p_pane_g2

0xf43e,	// (0x0001dd7d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef3,	// (0x0001e832) cell_vkbss_key_3p_pane_g

0x21d0,	// (0x00010b0f) bg_popup_fep_char_preview_window_cp02

0xf446,	// (0x0001dd85) popup_fep_char_pre_window_t1

0xea85,	// (0x0001d3c4) main_ai5_sk_pane

0xedd3,	// (0x0001d712) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xeddf,	// (0x0001d71e) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xedf4,	// (0x0001d733) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xee00,	// (0x0001d73f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec5,	// (0x0001e804) cell_contacts_ai5_widget_pane_g_ParamLimits

0xee0c,	// (0x0001d74b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2fb5,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf455,	// (0x0001dd94) main_ai5_sk_pane_g1

0x4b3f,	// (0x0001347e) popup_query_code_window_g1

0xf248,	// (0x0001db87) popup_fep_vkb_icf_pane

0xf265,	// (0x0001dba4) popup_fep_vtchi_icf_pane

0xf45e,	// (0x0001dd9d) bg_icf_pane

0xf46a,	// (0x0001dda9) list_vkb_icf_pane

0xf479,	// (0x0001ddb8) bg_icf_pane_cp01

0xf48c,	// (0x0001ddcb) vtchi_icf_list_pane

0xf49c,	// (0x0001dddb) list_vkb_icf_pane_t1_ParamLimits

0xf49c,	// (0x0001dddb) list_vkb_icf_pane_t1

0xf4b1,	// (0x0001ddf0) vtchi_icf_list_pane_t1_ParamLimits

0xf4b1,	// (0x0001ddf0) vtchi_icf_list_pane_t1

0xf236,	// (0x0001db75) popup_fep_ituss_window_ParamLimits

0xf265,	// (0x0001dba4) popup_fep_vtchi_icf_pane_ParamLimits

0xf287,	// (0x0001dbc6) ituss_keypad_pane_ParamLimits

0xf296,	// (0x0001dbd5) ituss_sks_pane

0xf45e,	// (0x0001dd9d) bg_icf_pane_ParamLimits

0xf212,	// (0x0001db51) icf_edit_indi_pane_ParamLimits

0xf212,	// (0x0001db51) icf_edit_indi_pane

0xf46a,	// (0x0001dda9) list_vkb_icf_pane_ParamLimits

0xf479,	// (0x0001ddb8) bg_icf_pane_cp01_ParamLimits

0xf221,	// (0x0001db60) icf_edit_indi_pane_cp01_ParamLimits

0xf221,	// (0x0001db60) icf_edit_indi_pane_cp01

0xf494,	// (0x0001ddd3) vtchi_query_pane

0x8a1e,	// (0x0001735d) icf_edit_indi_pane_g1_ParamLimits

0x8a1e,	// (0x0001735d) icf_edit_indi_pane_g1

0xf531,	// (0x0001de70) icf_edit_indi_pane_g2_ParamLimits

0xf531,	// (0x0001de70) icf_edit_indi_pane_g2

0x0001,

0xff0b,	// (0x0001e84a) icf_edit_indi_pane_g_ParamLimits

0xff0b,	// (0x0001e84a) icf_edit_indi_pane_g

0xf540,	// (0x0001de7f) icf_edit_indi_pane_t1

0xf4c8,	// (0x0001de07) bg_input_focus_pane_cp042

0x29b9,	// (0x000112f8) vtchi_button_pane

0xf4d1,	// (0x0001de10) vtchi_query_pane_t1

0xf4df,	// (0x0001de1e) vtchi_query_pane_t2

0xf4ed,	// (0x0001de2c) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x0001e839) vtchi_query_pane_t

0x21d0,	// (0x00010b0f) bg_button_pane_cp13

0xf4fb,	// (0x0001de3a) vtchi_button_pane_g1

0xf503,	// (0x0001de42) ituss_sks_pane_g1

0xf50d,	// (0x0001de4c) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001e840) ituss_sks_pane_g

0xf515,	// (0x0001de54) ituss_sks_pane_t1

0xf523,	// (0x0001de62) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x0001e845) ituss_sks_pane_t

0x696c,	// (0x000152ab) indicator_nsta_pane_cp_g1

0x6974,	// (0x000152b3) indicator_nsta_pane_cp_g2

0x697c,	// (0x000152bb) indicator_nsta_pane_cp_g3

0x696c,	// (0x000152ab) indicator_nsta_pane_cp_g4

0x6974,	// (0x000152b3) indicator_nsta_pane_cp_g5

0x697c,	// (0x000152bb) indicator_nsta_pane_cp_g6

0x0005,

0xfab6,	// (0x0001e3f5) indicator_nsta_pane_cp_g

0xe74a,	// (0x0001d089) cell_graphic2_pane_t2_ParamLimits

0xe74a,	// (0x0001d089) cell_graphic2_pane_t2

0x0001,

0xfdbc,	// (0x0001e6fb) cell_graphic2_pane_t_ParamLimits

0xfdbc,	// (0x0001e6fb) cell_graphic2_pane_t

0xe777,	// (0x0001d0b6) cell_graphic2_control_pane_t1

0x381b,	// (0x0001215a) signal_pane_g3_ParamLimits

0x381b,	// (0x0001215a) signal_pane_g3

0x382a,	// (0x00012169) signal_pane_g4_ParamLimits

0x382a,	// (0x00012169) signal_pane_g4

0xf1fc,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf1fc,	// (0x0001db3b) cell_ai5_widget_list_row_pane_t3

0xf36e,	// (0x0001dcad) cell_ituss_key_pane_t1_ParamLimits

0xf36e,	// (0x0001dcad) cell_ituss_key_pane_t1

0x47c5,	// (0x00013104) form_field_data_wide_pane_vc_t2_ParamLimits

0x47c5,	// (0x00013104) form_field_data_wide_pane_vc_t2

0x47d7,	// (0x00013116) form_field_data_wide_pane_vc_t3_ParamLimits

0x47d7,	// (0x00013116) form_field_data_wide_pane_vc_t3

0x0002,

0xf802,	// (0x0001e141) form_field_data_wide_pane_vc_t_ParamLimits

0xf802,	// (0x0001e141) form_field_data_wide_pane_vc_t

0x664e,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x664e,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3

0x671c,	// (0x0001505b) form_field_popup_wide_pane_vc_t2_ParamLimits

0x671c,	// (0x0001505b) form_field_popup_wide_pane_vc_t2

0x6731,	// (0x00015070) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6731,	// (0x00015070) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa5,	// (0x0001e3e4) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa5,	// (0x0001e3e4) form_field_popup_wide_pane_vc_t

0xeb0e,	// (0x0001d44d) aid_fshwr2_btn_pane_ParamLimits

0xeb1a,	// (0x0001d459) aid_fshwr2_syb_pane_ParamLimits

0xeb26,	// (0x0001d465) aid_fshwr2_txt_pane_ParamLimits

0x2fb5,	// (0x000118f4) fshwr2_bg_pane_ParamLimits

0xeb32,	// (0x0001d471) fshwr2_func_candi_pane_ParamLimits

0xeb43,	// (0x0001d482) fshwr2_hwr_syb_pane_ParamLimits

0xeb4f,	// (0x0001d48e) fshwr2_icf_pane_ParamLimits

0xba0e,	// (0x0001a34d) list_double_graphic_pane_vc_g4_ParamLimits

0xba0e,	// (0x0001a34d) list_double_graphic_pane_vc_g4

0xf362,	// (0x0001dca1) cell_ituss_key_pane_g3_ParamLimits

0xf362,	// (0x0001dca1) cell_ituss_key_pane_g3

0xf41c,	// (0x0001dd5b) cell_ituss_key_t5_ParamLimits

0xf41c,	// (0x0001dd5b) cell_ituss_key_t5

0xf253,	// (0x0001db92) popup_fep_vkbss_window_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

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

#include "aknlayoutscalable_abrw_pqp_av_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x000062fe };

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
0xa7f1,	// (0x00010aef) Screen

0xa803,	// (0x00010b01) application_window_ParamLimits

0xa803,	// (0x00010b01) application_window

0xa81b,	// (0x00010b19) screen_g1

0x8523,	// (0x0000e821) area_bottom_pane_ParamLimits

0x8523,	// (0x0000e821) area_bottom_pane

0x85e3,	// (0x0000e8e1) area_top_pane_ParamLimits

0x85e3,	// (0x0000e8e1) area_top_pane

0x8677,	// (0x0000e975) main_pane_ParamLimits

0x8677,	// (0x0000e975) main_pane

0xa825,	// (0x00010b23) misc_graphics

0xc7da,	// (0x00012ad8) battery_pane_ParamLimits

0xc7da,	// (0x00012ad8) battery_pane

0xd507,	// (0x00013805) bg_status_flat_pane_g8

0xd50f,	// (0x0001380d) bg_status_flat_pane_g9

0xc89a,	// (0x00012b98) context_pane_ParamLimits

0xc89a,	// (0x00012b98) context_pane

0xc9b0,	// (0x00012cae) navi_pane_ParamLimits

0xc9b0,	// (0x00012cae) navi_pane

0xca2e,	// (0x00012d2c) signal_pane_ParamLimits

0xca2e,	// (0x00012d2c) signal_pane

0x0008,

0xf874,	// (0x00015b72) bg_status_flat_pane_g

0xca97,	// (0x00012d95) status_pane_g1_ParamLimits

0xca97,	// (0x00012d95) status_pane_g1

0xcaab,	// (0x00012da9) status_pane_g2_ParamLimits

0xcaab,	// (0x00012da9) status_pane_g2

0xcab7,	// (0x00012db5) status_pane_g3_ParamLimits

0xcab7,	// (0x00012db5) status_pane_g3

0x0004,

0xf79b,	// (0x00015a99) status_pane_g_ParamLimits

0xf79b,	// (0x00015a99) status_pane_g

0xcae9,	// (0x00012de7) title_pane_ParamLimits

0xcae9,	// (0x00012de7) title_pane

0xcb26,	// (0x00012e24) uni_indicator_pane_ParamLimits

0xcb26,	// (0x00012e24) uni_indicator_pane

0xc6fa,	// (0x000129f8) bg_list_pane_ParamLimits

0xc6fa,	// (0x000129f8) bg_list_pane

0xc71a,	// (0x00012a18) find_pane

0xc722,	// (0x00012a20) listscroll_app_pane_ParamLimits

0xc722,	// (0x00012a20) listscroll_app_pane

0xc72e,	// (0x00012a2c) listscroll_form_pane

0x8edc,	// (0x0000f1da) listscroll_gen_pane_ParamLimits

0x8edc,	// (0x0000f1da) listscroll_gen_pane

0x8ef0,	// (0x0000f1ee) listscroll_set_pane

0xb93e,	// (0x00011c3c) main_idle_act_pane

0xc406,	// (0x00012704) main_idle_trad_pane

0xc406,	// (0x00012704) main_list_empty_pane

0xc748,	// (0x00012a46) main_midp_pane

0xc754,	// (0x00012a52) main_pane_g1_ParamLimits

0xc754,	// (0x00012a52) main_pane_g1

0x8f06,	// (0x0000f204) popup_ai_message_window_ParamLimits

0x8f06,	// (0x0000f204) popup_ai_message_window

0x8f9c,	// (0x0000f29a) popup_fep_china_uni_window_ParamLimits

0x8f9c,	// (0x0000f29a) popup_fep_china_uni_window

0x8fda,	// (0x0000f2d8) popup_fep_japan_candidate_window_ParamLimits

0x8fda,	// (0x0000f2d8) popup_fep_japan_candidate_window

0x8ff8,	// (0x0000f2f6) popup_fep_japan_predictive_window_ParamLimits

0x8ff8,	// (0x0000f2f6) popup_fep_japan_predictive_window

0x9024,	// (0x0000f322) popup_find_window

0x9031,	// (0x0000f32f) popup_grid_graphic_window_ParamLimits

0x9031,	// (0x0000f32f) popup_grid_graphic_window

0x9057,	// (0x0000f355) popup_large_graphic_colour_window

0x907b,	// (0x0000f379) popup_menu_window_ParamLimits

0x907b,	// (0x0000f379) popup_menu_window

0x91c3,	// (0x0000f4c1) popup_note_image_window

0x91b1,	// (0x0000f4af) popup_note_wait_window_ParamLimits

0x91b1,	// (0x0000f4af) popup_note_wait_window

0x91b1,	// (0x0000f4af) popup_note_window_ParamLimits

0x91b1,	// (0x0000f4af) popup_note_window

0x9217,	// (0x0000f515) popup_query_code_window_ParamLimits

0x9217,	// (0x0000f515) popup_query_code_window

0x9229,	// (0x0000f527) popup_query_data_code_window_ParamLimits

0x9229,	// (0x0000f527) popup_query_data_code_window

0x923e,	// (0x0000f53c) popup_query_data_window_ParamLimits

0x923e,	// (0x0000f53c) popup_query_data_window

0x9254,	// (0x0000f552) popup_query_sat_info_window_ParamLimits

0x9254,	// (0x0000f552) popup_query_sat_info_window

0x9285,	// (0x0000f583) popup_snote_single_graphic_window_ParamLimits

0x9285,	// (0x0000f583) popup_snote_single_graphic_window

0x9285,	// (0x0000f583) popup_snote_single_text_window_ParamLimits

0x9285,	// (0x0000f583) popup_snote_single_text_window

0x9298,	// (0x0000f596) popup_sub_window_general

0x93a6,	// (0x0000f6a4) popup_window_general_ParamLimits

0x93a6,	// (0x0000f6a4) popup_window_general

0xc76a,	// (0x00012a68) power_save_pane

0x8d69,	// (0x0000f067) control_pane_g1_ParamLimits

0x8d69,	// (0x0000f067) control_pane_g1

0x8d90,	// (0x0000f08e) control_pane_g2_ParamLimits

0x8d90,	// (0x0000f08e) control_pane_g2

0xc6bd,	// (0x000129bb) control_pane_g3_ParamLimits

0xc6bd,	// (0x000129bb) control_pane_g3

0x0007,

0xf783,	// (0x00015a81) control_pane_g_ParamLimits

0xf783,	// (0x00015a81) control_pane_g

0x8dd8,	// (0x0000f0d6) control_pane_t1_ParamLimits

0x8dd8,	// (0x0000f0d6) control_pane_t1

0x8e2b,	// (0x0000f129) control_pane_t2_ParamLimits

0x8e2b,	// (0x0000f129) control_pane_t2

0x0002,

0xf794,	// (0x00015a92) control_pane_t_ParamLimits

0xf794,	// (0x00015a92) control_pane_t

0xc5e4,	// (0x000128e2) navi_navi_volume_pane_cp1

0xc5ec,	// (0x000128ea) status_small_icon_pane

0xc5f4,	// (0x000128f2) status_small_pane_g1_ParamLimits

0xc5f4,	// (0x000128f2) status_small_pane_g1

0xc628,	// (0x00012926) status_small_pane_g2_ParamLimits

0xc628,	// (0x00012926) status_small_pane_g2

0xc634,	// (0x00012932) status_small_pane_g3_ParamLimits

0xc634,	// (0x00012932) status_small_pane_g3

0xc640,	// (0x0001293e) status_small_pane_g4_ParamLimits

0xc640,	// (0x0001293e) status_small_pane_g4

0xc64c,	// (0x0001294a) status_small_pane_g5_ParamLimits

0xc64c,	// (0x0001294a) status_small_pane_g5

0xc658,	// (0x00012956) status_small_pane_g6_ParamLimits

0xc658,	// (0x00012956) status_small_pane_g6

0x0007,

0xf772,	// (0x00015a70) status_small_pane_g_ParamLimits

0xf772,	// (0x00015a70) status_small_pane_g

0xc687,	// (0x00012985) status_small_pane_t1

0xc6a9,	// (0x000129a7) status_small_wait_pane_ParamLimits

0xc6a9,	// (0x000129a7) status_small_wait_pane

0xbe26,	// (0x00012124) aid_levels_signal_ParamLimits

0xbe26,	// (0x00012124) aid_levels_signal

0xbe35,	// (0x00012133) signal_pane_g1_ParamLimits

0xbe35,	// (0x00012133) signal_pane_g1

0xbe4a,	// (0x00012148) signal_pane_g2_ParamLimits

0xbe4a,	// (0x00012148) signal_pane_g2

0x0003,

0xf703,	// (0x00015a01) signal_pane_g_ParamLimits

0xf703,	// (0x00015a01) signal_pane_g

0xbe7b,	// (0x00012179) context_pane_g1

0xa82f,	// (0x00010b2d) title_pane_g1

0xa865,	// (0x00010b63) title_pane_t1

0xa8cd,	// (0x00010bcb) title_pane_t2

0xa8f3,	// (0x00010bf1) title_pane_t3

0x0002,

0xf557,	// (0x00015855) title_pane_t

0xcb3c,	// (0x00012e3a) aid_levels_battery_ParamLimits

0xcb3c,	// (0x00012e3a) aid_levels_battery

0xcb4d,	// (0x00012e4b) battery_pane_g1_ParamLimits

0xcb4d,	// (0x00012e4b) battery_pane_g1

0xcb63,	// (0x00012e61) battery_pane_g2_ParamLimits

0xcb63,	// (0x00012e61) battery_pane_g2

0x0001,

0xf7a6,	// (0x00015aa4) battery_pane_g_ParamLimits

0xf7a6,	// (0x00015aa4) battery_pane_g

0xde09,	// (0x00014107) uni_indicator_pane_g1

0xde1c,	// (0x0001411a) uni_indicator_pane_g2

0xde2e,	// (0x0001412c) uni_indicator_pane_g3

0x0005,

0xf91c,	// (0x00015c1a) uni_indicator_pane_g

0xc286,	// (0x00012584) navi_icon_pane_ParamLimits

0xc286,	// (0x00012584) navi_icon_pane

0xc1cc,	// (0x000124ca) navi_midp_pane

0xc2a2,	// (0x000125a0) navi_navi_pane

0xc2ac,	// (0x000125aa) navi_text_pane_ParamLimits

0xc2ac,	// (0x000125aa) navi_text_pane

0xa81b,	// (0x00010b19) status_small_wait_pane_g1

0xad32,	// (0x00011030) status_small_wait_pane_g2

0x0001,

0xf917,	// (0x00015c15) status_small_wait_pane_g

0xdb38,	// (0x00013e36) navi_navi_icon_text_pane

0xdb40,	// (0x00013e3e) navi_navi_pane_g1_ParamLimits

0xdb40,	// (0x00013e3e) navi_navi_pane_g1

0xdb52,	// (0x00013e50) navi_navi_pane_g2_ParamLimits

0xdb52,	// (0x00013e50) navi_navi_pane_g2

0x0001,

0xf8e5,	// (0x00015be3) navi_navi_pane_g_ParamLimits

0xf8e5,	// (0x00015be3) navi_navi_pane_g

0xdb64,	// (0x00013e62) navi_navi_tabs_pane

0xdb6d,	// (0x00013e6b) navi_navi_text_pane

0xdb38,	// (0x00013e36) navi_navi_volume_pane

0xdb14,	// (0x00013e12) navi_text_pane_t1

0xdb08,	// (0x00013e06) navi_icon_pane_g1

0xda5d,	// (0x00013d5b) navi_navi_text_pane_t1

0x9698,	// (0x0000f996) navi_navi_volume_pane_g1

0x96a0,	// (0x0000f99e) volume_small_pane

0xd9c3,	// (0x00013cc1) navi_navi_icon_text_pane_g1

0xd9cb,	// (0x00013cc9) navi_navi_icon_text_pane_t1

0xc2a2,	// (0x000125a0) navi_tabs_2_long_pane

0xc2a2,	// (0x000125a0) navi_tabs_2_pane

0xc2a2,	// (0x000125a0) navi_tabs_3_long_pane

0xc2a2,	// (0x000125a0) navi_tabs_3_pane

0xc2a2,	// (0x000125a0) navi_tabs_4_pane

0x9678,	// (0x0000f976) tabs_2_active_pane_ParamLimits

0x9678,	// (0x0000f976) tabs_2_active_pane

0x9688,	// (0x0000f986) tabs_2_passive_pane_ParamLimits

0x9688,	// (0x0000f986) tabs_2_passive_pane

0x9646,	// (0x0000f944) tabs_3_active_pane_ParamLimits

0x9646,	// (0x0000f944) tabs_3_active_pane

0x9656,	// (0x0000f954) tabs_3_passive_pane_ParamLimits

0x9656,	// (0x0000f954) tabs_3_passive_pane

0x9667,	// (0x0000f965) tabs_3_passive_pane_cp_ParamLimits

0x9667,	// (0x0000f965) tabs_3_passive_pane_cp

0x9602,	// (0x0000f900) tabs_4_active_pane_ParamLimits

0x9602,	// (0x0000f900) tabs_4_active_pane

0x9613,	// (0x0000f911) tabs_4_passive_pane_ParamLimits

0x9613,	// (0x0000f911) tabs_4_passive_pane

0x9624,	// (0x0000f922) tabs_4_passive_pane_cp_ParamLimits

0x9624,	// (0x0000f922) tabs_4_passive_pane_cp

0x9635,	// (0x0000f933) tabs_4_passive_pane_cp2_ParamLimits

0x9635,	// (0x0000f933) tabs_4_passive_pane_cp2

0x95e2,	// (0x0000f8e0) tabs_2_long_active_pane_ParamLimits

0x95e2,	// (0x0000f8e0) tabs_2_long_active_pane

0x95f2,	// (0x0000f8f0) tabs_2_long_passive_pane_ParamLimits

0x95f2,	// (0x0000f8f0) tabs_2_long_passive_pane

0x95af,	// (0x0000f8ad) tabs_3_long_active_pane_ParamLimits

0x95af,	// (0x0000f8ad) tabs_3_long_active_pane

0x95c0,	// (0x0000f8be) tabs_3_long_passive_pane_ParamLimits

0x95c0,	// (0x0000f8be) tabs_3_long_passive_pane

0x95d1,	// (0x0000f8cf) tabs_3_long_passive_pane_cp_ParamLimits

0x95d1,	// (0x0000f8cf) tabs_3_long_passive_pane_cp

0x9555,	// (0x0000f853) volume_small_pane_g1

0x955e,	// (0x0000f85c) volume_small_pane_g2

0x9567,	// (0x0000f865) volume_small_pane_g3

0x9570,	// (0x0000f86e) volume_small_pane_g4

0x9579,	// (0x0000f877) volume_small_pane_g5

0x9582,	// (0x0000f880) volume_small_pane_g6

0x958b,	// (0x0000f889) volume_small_pane_g7

0x9594,	// (0x0000f892) volume_small_pane_g8

0x959d,	// (0x0000f89b) volume_small_pane_g9

0x95a6,	// (0x0000f8a4) volume_small_pane_g10

0x0009,

0xf8b1,	// (0x00015baf) volume_small_pane_g

0xa905,	// (0x00010c03) bg_active_tab_pane_cp2_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp2

0xa913,	// (0x00010c11) tabs_3_active_pane_g1

0xa91b,	// (0x00010c19) tabs_3_active_pane_t1

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp2_ParamLimits

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp2

0xa913,	// (0x00010c11) tabs_3_passive_pane_g1

0xa91b,	// (0x00010c19) tabs_3_passive_pane_t1

0xa905,	// (0x00010c03) bg_active_tab_pane_cp3_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp3

0xa92d,	// (0x00010c2b) tabs_4_active_pane_g1

0xa935,	// (0x00010c33) tabs_4_active_pane_t1

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp3_ParamLimits

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp3

0xa92d,	// (0x00010c2b) tabs_4_1_passive_pane_g1

0xa935,	// (0x00010c33) tabs_4_1_passive_pane_t1

0xc748,	// (0x00012a46) list_highlight_pane_cp2

0xe078,	// (0x00014376) list_set_pane_ParamLimits

0xe078,	// (0x00014376) list_set_pane

0xe106,	// (0x00014404) main_pane_set_t1_ParamLimits

0xe106,	// (0x00014404) main_pane_set_t1

0xe126,	// (0x00014424) main_pane_set_t2_ParamLimits

0xe126,	// (0x00014424) main_pane_set_t2

0xe138,	// (0x00014436) main_pane_set_t3_ParamLimits

0xe138,	// (0x00014436) main_pane_set_t3

0xe14a,	// (0x00014448) main_pane_set_t4_ParamLimits

0xe14a,	// (0x00014448) main_pane_set_t4

0x0003,

0xf981,	// (0x00015c7f) main_pane_set_t_ParamLimits

0xf981,	// (0x00015c7f) main_pane_set_t

0xe15c,	// (0x0001445a) setting_code_pane

0xe164,	// (0x00014462) setting_slider_graphic_pane

0xe164,	// (0x00014462) setting_slider_pane

0xe164,	// (0x00014462) setting_text_pane

0xe164,	// (0x00014462) setting_volume_pane

0x8878,	// (0x0000eb76) volume_set_pane

0xa905,	// (0x00010c03) bg_set_opt_pane_cp

0x8880,	// (0x0000eb7e) setting_slider_pane_t1

0x8899,	// (0x0000eb97) setting_slider_pane_t2

0x88b2,	// (0x0000ebb0) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x0001585c) setting_slider_pane_t

0x88c9,	// (0x0000ebc7) slider_set_pane

0xa825,	// (0x00010b23) bg_set_opt_pane_cp2

0xa947,	// (0x00010c45) setting_slider_graphic_pane_g1

0x88df,	// (0x0000ebdd) setting_slider_graphic_pane_t1

0x88ee,	// (0x0000ebec) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x00015863) setting_slider_graphic_pane_t

0x88fd,	// (0x0000ebfb) slider_set_pane_cp

0xa825,	// (0x00010b23) input_focus_pane_cp1

0xe039,	// (0x00014337) list_set_text_pane

0xa81b,	// (0x00010b19) setting_text_pane_g1

0xa825,	// (0x00010b23) input_focus_pane_cp2

0xa81b,	// (0x00010b19) setting_code_pane_g1

0xa950,	// (0x00010c4e) setting_code_pane_t1

0xa95e,	// (0x00010c5c) set_text_pane_t1_ParamLimits

0xa95e,	// (0x00010c5c) set_text_pane_t1

0xb737,	// (0x00011a35) set_opt_bg_pane_g1

0xb73f,	// (0x00011a3d) set_opt_bg_pane_g2

0xe019,	// (0x00014317) set_opt_bg_pane_g3

0xb74f,	// (0x00011a4d) set_opt_bg_pane_g4

0xb757,	// (0x00011a55) set_opt_bg_pane_g5

0xb75f,	// (0x00011a5d) set_opt_bg_pane_g6

0xe021,	// (0x0001431f) set_opt_bg_pane_g7

0xe029,	// (0x00014327) set_opt_bg_pane_g8

0xe031,	// (0x0001432f) set_opt_bg_pane_g9

0x0008,

0xf96e,	// (0x00015c6c) set_opt_bg_pane_g

0xe00c,	// (0x0001430a) slider_set_pane_g1

0x970d,	// (0x0000fa0b) slider_set_pane_g2

0x0006,

0xf95f,	// (0x00015c5d) slider_set_pane_g

0x96a9,	// (0x0000f9a7) volume_set_pane_g1

0x96b1,	// (0x0000f9af) volume_set_pane_g2

0x96b9,	// (0x0000f9b7) volume_set_pane_g3

0x96c1,	// (0x0000f9bf) volume_set_pane_g4

0x96c9,	// (0x0000f9c7) volume_set_pane_g5

0x96d1,	// (0x0000f9cf) volume_set_pane_g6

0x96d9,	// (0x0000f9d7) volume_set_pane_g7

0x96e1,	// (0x0000f9df) volume_set_pane_g8

0x96e9,	// (0x0000f9e7) volume_set_pane_g9

0x96f1,	// (0x0000f9ef) volume_set_pane_g10

0x0009,

0xf937,	// (0x00015c35) volume_set_pane_g

0xa978,	// (0x00010c76) indicator_pane_ParamLimits

0xa978,	// (0x00010c76) indicator_pane

0xa984,	// (0x00010c82) main_idle_pane_g2_ParamLimits

0xa984,	// (0x00010c82) main_idle_pane_g2

0xa9a6,	// (0x00010ca4) main_pane_idle_g1_ParamLimits

0xa9a6,	// (0x00010ca4) main_pane_idle_g1

0xa9b3,	// (0x00010cb1) popup_clock_digital_analogue_window_ParamLimits

0xa9b3,	// (0x00010cb1) popup_clock_digital_analogue_window

0xa9ca,	// (0x00010cc8) soft_indicator_pane_ParamLimits

0xa9ca,	// (0x00010cc8) soft_indicator_pane

0xa9d6,	// (0x00010cd4) wallpaper_pane_ParamLimits

0xa9d6,	// (0x00010cd4) wallpaper_pane

0xa81b,	// (0x00010b19) wallpaper_pane_g1

0xa9ea,	// (0x00010ce8) indicator_pane_g1_ParamLimits

0xa9ea,	// (0x00010ce8) indicator_pane_g1

0xe468,	// (0x00014766) navi_navi_icon_text_pane_srt_g1

0xaa05,	// (0x00010d03) soft_indicator_pane_t1

0xaa1f,	// (0x00010d1d) aid_ps_area_pane

0xaa30,	// (0x00010d2e) aid_ps_clock_pane

0xaa3c,	// (0x00010d3a) aid_ps_indicator_pane

0xaa48,	// (0x00010d46) indicator_ps_pane_ParamLimits

0xaa48,	// (0x00010d46) indicator_ps_pane

0xaa57,	// (0x00010d55) power_save_pane_g1_ParamLimits

0xaa57,	// (0x00010d55) power_save_pane_g1

0xaa63,	// (0x00010d61) power_save_pane_g2_ParamLimits

0xaa63,	// (0x00010d61) power_save_pane_g2

0x84df,	// (0x0000e7dd) aid_navinavi_width_pane

0xaa1f,	// (0x00010d1d) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x00015868) power_save_pane_g_ParamLimits

0xf56a,	// (0x00015868) power_save_pane_g

0xaa71,	// (0x00010d6f) power_save_pane_t1_ParamLimits

0xaa71,	// (0x00010d6f) power_save_pane_t1

0xaa30,	// (0x00010d2e) aid_ps_clock_pane_ParamLimits

0xaa3c,	// (0x00010d3a) aid_ps_indicator_pane_ParamLimits

0xaa83,	// (0x00010d81) power_save_pane_t4_ParamLimits

0xaa83,	// (0x00010d81) power_save_pane_t4

0x0001,

0xf56f,	// (0x0001586d) power_save_pane_t_ParamLimits

0xf56f,	// (0x0001586d) power_save_pane_t

0xaaad,	// (0x00010dab) power_save_t3_ParamLimits

0xaaad,	// (0x00010dab) power_save_t3

0xaa98,	// (0x00010d96) power_save_t2_ParamLimits

0xaa98,	// (0x00010d96) power_save_t2

0xaac2,	// (0x00010dc0) indicator_ps_pane_g1

0xaacb,	// (0x00010dc9) ai_gene_pane_ParamLimits

0xaacb,	// (0x00010dc9) ai_gene_pane

0xaad7,	// (0x00010dd5) ai_links_pane_ParamLimits

0xaad7,	// (0x00010dd5) ai_links_pane

0xaae3,	// (0x00010de1) indicator_pane_cp1_ParamLimits

0xaae3,	// (0x00010de1) indicator_pane_cp1

0xaaef,	// (0x00010ded) main_pane_idle_g1_cp_ParamLimits

0xaaef,	// (0x00010ded) main_pane_idle_g1_cp

0xaafb,	// (0x00010df9) popup_ai_links_title_window

0xab04,	// (0x00010e02) soft_indicator_pane_cp1_ParamLimits

0xab04,	// (0x00010e02) soft_indicator_pane_cp1

0xddf7,	// (0x000140f5) ai_links_pane_g1

0xde00,	// (0x000140fe) grid_ai_links_pane

0xdddc,	// (0x000140da) ai_gene_pane_1

0xdde5,	// (0x000140e3) ai_gene_pane_2

0xddee,	// (0x000140ec) list_highlight_pane_cp4

0xddc4,	// (0x000140c2) cell_ai_link_pane_ParamLimits

0xddc4,	// (0x000140c2) cell_ai_link_pane

0xddbc,	// (0x000140ba) cell_ai_link_pane_g1

0xad32,	// (0x00011030) cell_ai_link_pane_g2

0x0001,

0xf912,	// (0x00015c10) cell_ai_link_pane_g

0xa825,	// (0x00010b23) grid_highlight_cp2

0xa825,	// (0x00010b23) bg_popup_sub_pane_cp1

0xab1e,	// (0x00010e1c) popup_ai_links_title_window_t1

0xdd0e,	// (0x0001400c) ai_gene_pane_1_g1_ParamLimits

0xdd0e,	// (0x0001400c) ai_gene_pane_1_g1

0xdd1a,	// (0x00014018) ai_gene_pane_1_g2_ParamLimits

0xdd1a,	// (0x00014018) ai_gene_pane_1_g2

0x0001,

0xf908,	// (0x00015c06) ai_gene_pane_1_g_ParamLimits

0xf908,	// (0x00015c06) ai_gene_pane_1_g

0xdd27,	// (0x00014025) ai_gene_pane_1_t1_ParamLimits

0xdd27,	// (0x00014025) ai_gene_pane_1_t1

0xdd5b,	// (0x00014059) grid_ai_soft_ind_pane

0xdcf9,	// (0x00013ff7) ai_gene_pane_2_t1_ParamLimits

0xdcf9,	// (0x00013ff7) ai_gene_pane_2_t1

0xab2d,	// (0x00010e2b) main_pane_empty_t1_ParamLimits

0xab2d,	// (0x00010e2b) main_pane_empty_t1

0xab45,	// (0x00010e43) main_pane_empty_t2_ParamLimits

0xab45,	// (0x00010e43) main_pane_empty_t2

0xab5a,	// (0x00010e58) main_pane_empty_t3_ParamLimits

0xab5a,	// (0x00010e58) main_pane_empty_t3

0xab6c,	// (0x00010e6a) main_pane_empty_t4_ParamLimits

0xab6c,	// (0x00010e6a) main_pane_empty_t4

0xab7e,	// (0x00010e7c) main_pane_empty_t5_ParamLimits

0xab7e,	// (0x00010e7c) main_pane_empty_t5

0x0004,

0xf574,	// (0x00015872) main_pane_empty_t_ParamLimits

0xf574,	// (0x00015872) main_pane_empty_t

0xb80f,	// (0x00011b0d) bg_popup_window_pane_ParamLimits

0xb80f,	// (0x00011b0d) bg_popup_window_pane

0xda6b,	// (0x00013d69) find_popup_pane_cp2_ParamLimits

0xda6b,	// (0x00013d69) find_popup_pane_cp2

0xda77,	// (0x00013d75) heading_pane_ParamLimits

0xda77,	// (0x00013d75) heading_pane

0xa825,	// (0x00010b23) bg_popup_sub_pane

0xd9e5,	// (0x00013ce3) bg_popup_window_pane_g1_ParamLimits

0xd9e5,	// (0x00013ce3) bg_popup_window_pane_g1

0xd9f1,	// (0x00013cef) bg_popup_window_pane_g2_ParamLimits

0xd9f1,	// (0x00013cef) bg_popup_window_pane_g2

0xd9fd,	// (0x00013cfb) bg_popup_window_pane_g3_ParamLimits

0xd9fd,	// (0x00013cfb) bg_popup_window_pane_g3

0xda09,	// (0x00013d07) bg_popup_window_pane_g4_ParamLimits

0xda09,	// (0x00013d07) bg_popup_window_pane_g4

0xda15,	// (0x00013d13) bg_popup_window_pane_g5_ParamLimits

0xda15,	// (0x00013d13) bg_popup_window_pane_g5

0xda21,	// (0x00013d1f) bg_popup_window_pane_g6_ParamLimits

0xda21,	// (0x00013d1f) bg_popup_window_pane_g6

0xda2d,	// (0x00013d2b) bg_popup_window_pane_g7_ParamLimits

0xda2d,	// (0x00013d2b) bg_popup_window_pane_g7

0xda39,	// (0x00013d37) bg_popup_window_pane_g8_ParamLimits

0xda39,	// (0x00013d37) bg_popup_window_pane_g8

0xda45,	// (0x00013d43) bg_popup_window_pane_g9_ParamLimits

0xda45,	// (0x00013d43) bg_popup_window_pane_g9

0xda51,	// (0x00013d4f) bg_popup_window_pane_g10_ParamLimits

0xda51,	// (0x00013d4f) bg_popup_window_pane_g10

0x0009,

0xf8d0,	// (0x00015bce) bg_popup_window_pane_g_ParamLimits

0xf8d0,	// (0x00015bce) bg_popup_window_pane_g

0xd97a,	// (0x00013c78) bg_popup_heading_pane_ParamLimits

0xd97a,	// (0x00013c78) bg_popup_heading_pane

0x9795,	// (0x0000fa93) tabs_4_passive_pane_cp_srt_ParamLimits

0x9795,	// (0x0000fa93) tabs_4_passive_pane_cp_srt

0x97a7,	// (0x0000faa5) tabs_4_passive_pane_srt_ParamLimits

0xd98e,	// (0x00013c8c) heading_pane_g2

0x97a7,	// (0x0000faa5) tabs_4_passive_pane_srt

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp3_srt_ParamLimits

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp3_srt

0xd996,	// (0x00013c94) heading_pane_t1_ParamLimits

0xd996,	// (0x00013c94) heading_pane_t1

0xd9ad,	// (0x00013cab) heading_pane_t2_ParamLimits

0xd9ad,	// (0x00013cab) heading_pane_t2

0x0001,

0xf8cb,	// (0x00015bc9) heading_pane_t_ParamLimits

0xf8cb,	// (0x00015bc9) heading_pane_t

0xd4cf,	// (0x000137cd) bg_popup_heading_pane_g1

0xd578,	// (0x00013876) bg_popup_heading_pane_g2

0xd580,	// (0x0001387e) bg_popup_heading_pane_g3

0xd588,	// (0x00013886) bg_popup_heading_pane_g4

0xd590,	// (0x0001388e) bg_popup_heading_pane_g5

0xd598,	// (0x00013896) bg_popup_heading_pane_g6

0xd5a0,	// (0x0001389e) bg_popup_heading_pane_g7

0xd5a8,	// (0x000138a6) bg_popup_heading_pane_g8

0xd5b0,	// (0x000138ae) bg_popup_heading_pane_g9

0x0008,

0xf887,	// (0x00015b85) bg_popup_heading_pane_g

0xcc64,	// (0x00012f62) bg_popup_sub_pane_g1

0xcc74,	// (0x00012f72) bg_popup_sub_pane_g2

0xcc6c,	// (0x00012f6a) bg_popup_sub_pane_g3

0xcc84,	// (0x00012f82) bg_popup_sub_pane_g4

0xcc7c,	// (0x00012f7a) bg_popup_sub_pane_g5

0xcc8c,	// (0x00012f8a) bg_popup_sub_pane_g6

0xcc94,	// (0x00012f92) bg_popup_sub_pane_g7

0xcca4,	// (0x00012fa2) bg_popup_sub_pane_g8

0xcc9c,	// (0x00012f9a) bg_popup_sub_pane_g9

0x0008,

0xf861,	// (0x00015b5f) bg_popup_sub_pane_g

0xab90,	// (0x00010e8e) bg_popup_window_pane_cp5_ParamLimits

0xab90,	// (0x00010e8e) bg_popup_window_pane_cp5

0xabac,	// (0x00010eaa) popup_note_window_g1_ParamLimits

0xabac,	// (0x00010eaa) popup_note_window_g1

0xabb8,	// (0x00010eb6) popup_note_window_t1_ParamLimits

0xabb8,	// (0x00010eb6) popup_note_window_t1

0xabce,	// (0x00010ecc) popup_note_window_t2_ParamLimits

0xabce,	// (0x00010ecc) popup_note_window_t2

0xabe4,	// (0x00010ee2) popup_note_window_t3_ParamLimits

0xabe4,	// (0x00010ee2) popup_note_window_t3

0xabfa,	// (0x00010ef8) popup_note_window_t4_ParamLimits

0xabfa,	// (0x00010ef8) popup_note_window_t4

0xac22,	// (0x00010f20) popup_note_window_t5_ParamLimits

0xac22,	// (0x00010f20) popup_note_window_t5

0x0004,

0xf57f,	// (0x0001587d) popup_note_window_t_ParamLimits

0xf57f,	// (0x0001587d) popup_note_window_t

0xac46,	// (0x00010f44) bg_popup_window_pane_cp6_ParamLimits

0xac46,	// (0x00010f44) bg_popup_window_pane_cp6

0xd44b,	// (0x00013749) popup_note_image_window_g1_ParamLimits

0xd44b,	// (0x00013749) popup_note_image_window_g1

0xd457,	// (0x00013755) popup_note_image_window_g2_ParamLimits

0xd457,	// (0x00013755) popup_note_image_window_g2

0x0001,

0xf855,	// (0x00015b53) popup_note_image_window_g_ParamLimits

0xf855,	// (0x00015b53) popup_note_image_window_g

0xd470,	// (0x0001376e) popup_note_image_window_t1_ParamLimits

0xd470,	// (0x0001376e) popup_note_image_window_t1

0xd489,	// (0x00013787) popup_note_image_window_t2_ParamLimits

0xd489,	// (0x00013787) popup_note_image_window_t2

0xd4a2,	// (0x000137a0) popup_note_image_window_t3_ParamLimits

0xd4a2,	// (0x000137a0) popup_note_image_window_t3

0x0002,

0xf85a,	// (0x00015b58) popup_note_image_window_t_ParamLimits

0xf85a,	// (0x00015b58) popup_note_image_window_t

0xd314,	// (0x00013612) bg_popup_window_pane_cp7_ParamLimits

0xd314,	// (0x00013612) bg_popup_window_pane_cp7

0xd344,	// (0x00013642) popup_note_wait_window_g1_ParamLimits

0xd344,	// (0x00013642) popup_note_wait_window_g1

0xd350,	// (0x0001364e) popup_note_wait_window_g2_ParamLimits

0xd350,	// (0x0001364e) popup_note_wait_window_g2

0x0002,

0xf843,	// (0x00015b41) popup_note_wait_window_g_ParamLimits

0xf843,	// (0x00015b41) popup_note_wait_window_g

0xd368,	// (0x00013666) popup_note_wait_window_t1_ParamLimits

0xd368,	// (0x00013666) popup_note_wait_window_t1

0xd38f,	// (0x0001368d) popup_note_wait_window_t2_ParamLimits

0xd38f,	// (0x0001368d) popup_note_wait_window_t2

0xd3ac,	// (0x000136aa) popup_note_wait_window_t3_ParamLimits

0xd3ac,	// (0x000136aa) popup_note_wait_window_t3

0xd3bf,	// (0x000136bd) popup_note_wait_window_t4_ParamLimits

0xd3bf,	// (0x000136bd) popup_note_wait_window_t4

0x0004,

0xf84a,	// (0x00015b48) popup_note_wait_window_t_ParamLimits

0xf84a,	// (0x00015b48) popup_note_wait_window_t

0xd3e4,	// (0x000136e2) wait_bar_pane_ParamLimits

0xd3e4,	// (0x000136e2) wait_bar_pane

0xa825,	// (0x00010b23) wait_anim_pane

0xa825,	// (0x00010b23) wait_border_pane

0xa81b,	// (0x00010b19) wait_anim_pane_g1

0xa81b,	// (0x00010b19) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x000159fc) wait_anim_pane_g

0xd2c4,	// (0x000135c2) wait_border_pane_g1

0xd2cd,	// (0x000135cb) wait_border_pane_g2

0xd2d6,	// (0x000135d4) wait_border_pane_g3

0x0002,

0xf83c,	// (0x00015b3a) wait_border_pane_g

0xd134,	// (0x00013432) bg_popup_window_pane_cp16_ParamLimits

0xd134,	// (0x00013432) bg_popup_window_pane_cp16

0xd234,	// (0x00013532) indicator_popup_pane_cp4_ParamLimits

0xd234,	// (0x00013532) indicator_popup_pane_cp4

0xd248,	// (0x00013546) popup_query_data_window_t1_ParamLimits

0xd248,	// (0x00013546) popup_query_data_window_t1

0xd25a,	// (0x00013558) popup_query_data_window_t2_ParamLimits

0xd25a,	// (0x00013558) popup_query_data_window_t2

0xd273,	// (0x00013571) popup_query_data_window_t3_ParamLimits

0xd273,	// (0x00013571) popup_query_data_window_t3

0x0002,

0xf835,	// (0x00015b33) popup_query_data_window_t_ParamLimits

0xf835,	// (0x00015b33) popup_query_data_window_t

0xd28d,	// (0x0001358b) query_popup_data_pane_ParamLimits

0xd28d,	// (0x0001358b) query_popup_data_pane

0xd2a1,	// (0x0001359f) query_popup_data_pane_cp1_ParamLimits

0xd2a1,	// (0x0001359f) query_popup_data_pane_cp1

0xd134,	// (0x00013432) bg_popup_window_pane_cp10_ParamLimits

0xd134,	// (0x00013432) bg_popup_window_pane_cp10

0xd166,	// (0x00013464) indicator_popup_pane_ParamLimits

0xd166,	// (0x00013464) indicator_popup_pane

0xd188,	// (0x00013486) popup_query_code_window_t1_ParamLimits

0xd188,	// (0x00013486) popup_query_code_window_t1

0xd1a2,	// (0x000134a0) popup_query_code_window_t2_ParamLimits

0xd1a2,	// (0x000134a0) popup_query_code_window_t2

0xd1eb,	// (0x000134e9) popup_query_code_window_t3_ParamLimits

0xd1eb,	// (0x000134e9) popup_query_code_window_t3

0x0002,

0xf82e,	// (0x00015b2c) popup_query_code_window_t_ParamLimits

0xf82e,	// (0x00015b2c) popup_query_code_window_t

0xd21a,	// (0x00013518) query_popup_pane_ParamLimits

0xd21a,	// (0x00013518) query_popup_pane

0xac46,	// (0x00010f44) bg_popup_window_pane_cp15_ParamLimits

0xac46,	// (0x00010f44) bg_popup_window_pane_cp15

0xac64,	// (0x00010f62) indicator_popup_pane_cp1_ParamLimits

0xac64,	// (0x00010f62) indicator_popup_pane_cp1

0xac77,	// (0x00010f75) indicator_popup_pane_cp2_ParamLimits

0xac77,	// (0x00010f75) indicator_popup_pane_cp2

0xac8a,	// (0x00010f88) popup_query_data_code_window_g1_ParamLimits

0xac8a,	// (0x00010f88) popup_query_data_code_window_g1

0xac9d,	// (0x00010f9b) popup_query_data_code_window_t1_ParamLimits

0xac9d,	// (0x00010f9b) popup_query_data_code_window_t1

0xacaf,	// (0x00010fad) popup_query_data_code_window_t2_ParamLimits

0xacaf,	// (0x00010fad) popup_query_data_code_window_t2

0xacc1,	// (0x00010fbf) popup_query_data_code_window_t3_ParamLimits

0xacc1,	// (0x00010fbf) popup_query_data_code_window_t3

0xacd7,	// (0x00010fd5) popup_query_data_code_window_t4_ParamLimits

0xacd7,	// (0x00010fd5) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x00015888) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x00015888) popup_query_data_code_window_t

0x9470,	// (0x0000f76e) list_single_midp_graphic_pane_g3

0xacef,	// (0x00010fed) query_popup_data_pane_cp2_ParamLimits

0xad02,	// (0x00011000) query_popup_pane_cp2_ParamLimits

0xad02,	// (0x00011000) query_popup_pane_cp2

0xa825,	// (0x00010b23) bg_popup_window_pane_cp11

0xd12c,	// (0x0001342a) heading_pane_cp5

0xade9,	// (0x000110e7) listscroll_popup_info_pane

0xa825,	// (0x00010b23) input_focus_pane_cp3

0xad15,	// (0x00011013) query_popup_pane_t1

0xad23,	// (0x00011021) list_popup_info_pane_ParamLimits

0xad23,	// (0x00011021) list_popup_info_pane

0xad32,	// (0x00011030) listscroll_popup_info_pane_g1

0xad3a,	// (0x00011038) scroll_pane_cp7

0xad42,	// (0x00011040) popup_info_list_pane_t1_ParamLimits

0xad42,	// (0x00011040) popup_info_list_pane_t1

0xad5c,	// (0x0001105a) popup_info_list_pane_t2_ParamLimits

0xad5c,	// (0x0001105a) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x00015891) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x00015891) popup_info_list_pane_t

0xa825,	// (0x00010b23) bg_popup_window_pane_cp12

0xe482,	// (0x00014780) find_popup_pane

0xa905,	// (0x00010c03) bg_popup_window_pane_cp3

0xad76,	// (0x00011074) heading_pane_cp3

0xad82,	// (0x00011080) listscroll_popup_graphic_pane

0xa825,	// (0x00010b23) bg_popup_window_pane_cp4

0xade1,	// (0x000110df) heading_pane_cp4

0xade9,	// (0x000110e7) listscroll_popup_colour_pane

0xadf1,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xadf1,	// (0x000110ef) cell_large_graphic_colour_none_popup_pane

0xae01,	// (0x000110ff) grid_large_graphic_colour_popup_pane_ParamLimits

0xae01,	// (0x000110ff) grid_large_graphic_colour_popup_pane

0xae1d,	// (0x0001111b) listscroll_popup_colour_pane_g1_ParamLimits

0xae1d,	// (0x0001111b) listscroll_popup_colour_pane_g1

0xae34,	// (0x00011132) listscroll_popup_colour_pane_g2_ParamLimits

0xae34,	// (0x00011132) listscroll_popup_colour_pane_g2

0xae4b,	// (0x00011149) listscroll_popup_colour_pane_g3_ParamLimits

0xae4b,	// (0x00011149) listscroll_popup_colour_pane_g3

0xae5b,	// (0x00011159) listscroll_popup_colour_pane_g4_ParamLimits

0xae5b,	// (0x00011159) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x00015896) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x00015896) listscroll_popup_colour_pane_g

0xae6a,	// (0x00011168) scroll_pane_cp6_ParamLimits

0xae6a,	// (0x00011168) scroll_pane_cp6

0xae7c,	// (0x0001117a) cell_large_graphic_colour_popup_pane_ParamLimits

0xae7c,	// (0x0001117a) cell_large_graphic_colour_popup_pane

0xae9b,	// (0x00011199) cell_large_graphic_colour_none_popup_pane_t1

0xa825,	// (0x00010b23) grid_highlight_pane_cp5

0xaeaa,	// (0x000111a8) cell_large_graphic_colour_popup_pane_g1

0xaeb2,	// (0x000111b0) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x0001589f) cell_large_graphic_colour_popup_pane_g

0xaeba,	// (0x000111b8) cell_large_graphic_colour_popup_pane_g2_copy1

0xaec3,	// (0x000111c1) grid_highlight_pane_cp4

0xaecb,	// (0x000111c9) bg_popup_window_pane_cp8_ParamLimits

0xaecb,	// (0x000111c9) bg_popup_window_pane_cp8

0xaee6,	// (0x000111e4) popup_snote_single_text_window_g1_ParamLimits

0xaee6,	// (0x000111e4) popup_snote_single_text_window_g1

0xaef8,	// (0x000111f6) popup_snote_single_text_window_t1_ParamLimits

0xaef8,	// (0x000111f6) popup_snote_single_text_window_t1

0xaf0b,	// (0x00011209) popup_snote_single_text_window_t2_ParamLimits

0xaf0b,	// (0x00011209) popup_snote_single_text_window_t2

0xaf1e,	// (0x0001121c) popup_snote_single_text_window_t3_ParamLimits

0xaf1e,	// (0x0001121c) popup_snote_single_text_window_t3

0xaf57,	// (0x00011255) popup_snote_single_text_window_t4_ParamLimits

0xaf57,	// (0x00011255) popup_snote_single_text_window_t4

0xaf8b,	// (0x00011289) popup_snote_single_text_window_t5_ParamLimits

0xaf8b,	// (0x00011289) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000158a4) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000158a4) popup_snote_single_text_window_t

0xafba,	// (0x000112b8) bg_popup_window_pane_cp9_ParamLimits

0xafba,	// (0x000112b8) bg_popup_window_pane_cp9

0xaee6,	// (0x000111e4) popup_snote_single_graphic_window_g1_ParamLimits

0xaee6,	// (0x000111e4) popup_snote_single_graphic_window_g1

0xafc8,	// (0x000112c6) popup_snote_single_graphic_window_g2_ParamLimits

0xafc8,	// (0x000112c6) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000158af) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000158af) popup_snote_single_graphic_window_g

0xafd4,	// (0x000112d2) popup_snote_single_graphic_window_t1_ParamLimits

0xafd4,	// (0x000112d2) popup_snote_single_graphic_window_t1

0xafe7,	// (0x000112e5) popup_snote_single_graphic_window_t2_ParamLimits

0xafe7,	// (0x000112e5) popup_snote_single_graphic_window_t2

0xaf1e,	// (0x0001121c) popup_snote_single_graphic_window_t3_ParamLimits

0xaf1e,	// (0x0001121c) popup_snote_single_graphic_window_t3

0xaf57,	// (0x00011255) popup_snote_single_graphic_window_t4_ParamLimits

0xaf57,	// (0x00011255) popup_snote_single_graphic_window_t4

0xaf8b,	// (0x00011289) popup_snote_single_graphic_window_t5_ParamLimits

0xaf8b,	// (0x00011289) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000158b4) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000158b4) popup_snote_single_graphic_window_t

0xe3ca,	// (0x000146c8) grid_graphic_popup_pane_ParamLimits

0xe3ca,	// (0x000146c8) grid_graphic_popup_pane

0xe3ee,	// (0x000146ec) listscroll_popup_graphic_pane_g1_ParamLimits

0xe3ee,	// (0x000146ec) listscroll_popup_graphic_pane_g1

0xe402,	// (0x00014700) listscroll_popup_graphic_pane_g2_ParamLimits

0xe402,	// (0x00014700) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ab,	// (0x00015ca9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ab,	// (0x00015ca9) listscroll_popup_graphic_pane_g

0xe416,	// (0x00014714) scroll_pane_cp5

0xe373,	// (0x00014671) cell_graphic_popup_pane_ParamLimits

0xe373,	// (0x00014671) cell_graphic_popup_pane

0xe354,	// (0x00014652) cell_graphic_popup_pane_g1

0xe35c,	// (0x0001465a) cell_graphic_popup_pane_g2

0xaeba,	// (0x000111b8) cell_graphic_popup_pane_g3

0x0002,

0xf9a4,	// (0x00015ca2) cell_graphic_popup_pane_g

0xe365,	// (0x00014663) cell_graphic_popup_pane_t2

0xaec3,	// (0x000111c1) grid_highlight_pane_cp3

0xb00c,	// (0x0001130a) list_gen_pane_ParamLimits

0xb00c,	// (0x0001130a) list_gen_pane

0xb03e,	// (0x0001133c) scroll_pane

0xe2c4,	// (0x000145c2) bg_list_pane_g1_ParamLimits

0xe2c4,	// (0x000145c2) bg_list_pane_g1

0xe2db,	// (0x000145d9) bg_list_pane_g2_ParamLimits

0xe2db,	// (0x000145d9) bg_list_pane_g2

0xe2ee,	// (0x000145ec) bg_list_pane_g3_ParamLimits

0xe2ee,	// (0x000145ec) bg_list_pane_g3

0xe300,	// (0x000145fe) bg_list_pane_g4_ParamLimits

0xe300,	// (0x000145fe) bg_list_pane_g4

0xe312,	// (0x00014610) bg_list_pane_g5_ParamLimits

0xe312,	// (0x00014610) bg_list_pane_g5

0x0004,

0xf999,	// (0x00015c97) bg_list_pane_g_ParamLimits

0xf999,	// (0x00015c97) bg_list_pane_g

0xe216,	// (0x00014514) list_double2_graphic_large_graphic_pane_ParamLimits

0xe216,	// (0x00014514) list_double2_graphic_large_graphic_pane

0xe216,	// (0x00014514) list_double2_graphic_pane_ParamLimits

0xe216,	// (0x00014514) list_double2_graphic_pane

0xe216,	// (0x00014514) list_double2_large_graphic_pane_ParamLimits

0xe216,	// (0x00014514) list_double2_large_graphic_pane

0xe216,	// (0x00014514) list_double2_pane_ParamLimits

0xe216,	// (0x00014514) list_double2_pane

0xe216,	// (0x00014514) list_double_graphic_heading_pane_ParamLimits

0xe216,	// (0x00014514) list_double_graphic_heading_pane

0xe216,	// (0x00014514) list_double_graphic_pane_ParamLimits

0xe216,	// (0x00014514) list_double_graphic_pane

0xe216,	// (0x00014514) list_double_heading_pane_ParamLimits

0xe216,	// (0x00014514) list_double_heading_pane

0xe216,	// (0x00014514) list_double_large_graphic_pane_ParamLimits

0xe216,	// (0x00014514) list_double_large_graphic_pane

0xe216,	// (0x00014514) list_double_number_pane_ParamLimits

0xe216,	// (0x00014514) list_double_number_pane

0xe216,	// (0x00014514) list_double_pane_ParamLimits

0xe216,	// (0x00014514) list_double_pane

0xe216,	// (0x00014514) list_double_time_pane_ParamLimits

0xe216,	// (0x00014514) list_double_time_pane

0xe216,	// (0x00014514) list_setting_number_pane_ParamLimits

0xe216,	// (0x00014514) list_setting_number_pane

0xe216,	// (0x00014514) list_setting_pane_ParamLimits

0xe216,	// (0x00014514) list_setting_pane

0xe267,	// (0x00014565) list_single_2graphic_pane_ParamLimits

0xe267,	// (0x00014565) list_single_2graphic_pane

0xe267,	// (0x00014565) list_single_graphic_heading_pane_ParamLimits

0xe267,	// (0x00014565) list_single_graphic_heading_pane

0xe267,	// (0x00014565) list_single_graphic_pane_ParamLimits

0xe267,	// (0x00014565) list_single_graphic_pane

0xe267,	// (0x00014565) list_single_heading_pane_ParamLimits

0xe267,	// (0x00014565) list_single_heading_pane

0xe2af,	// (0x000145ad) list_single_large_graphic_pane_ParamLimits

0xe2af,	// (0x000145ad) list_single_large_graphic_pane

0xe267,	// (0x00014565) list_single_number_heading_pane_ParamLimits

0xe267,	// (0x00014565) list_single_number_heading_pane

0xe267,	// (0x00014565) list_single_number_pane_ParamLimits

0xe267,	// (0x00014565) list_single_number_pane

0xe267,	// (0x00014565) list_single_pane_ParamLimits

0xe267,	// (0x00014565) list_single_pane

0xa825,	// (0x00010b23) list_highlight_pane_cp1

0xb07e,	// (0x0001137c) list_single_pane_g1_ParamLimits

0xb07e,	// (0x0001137c) list_single_pane_g1

0xb08a,	// (0x00011388) list_single_pane_g2_ParamLimits

0xb08a,	// (0x00011388) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000158c6) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000158c6) list_single_pane_g

0xe1cf,	// (0x000144cd) list_single_pane_t1_ParamLimits

0xe1cf,	// (0x000144cd) list_single_pane_t1

0xb07e,	// (0x0001137c) list_single_number_pane_g1_ParamLimits

0xb07e,	// (0x0001137c) list_single_number_pane_g1

0xb08a,	// (0x00011388) list_single_number_pane_g2_ParamLimits

0xb08a,	// (0x00011388) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000158c6) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000158c6) list_single_number_pane_g

0xdae0,	// (0x00013dde) list_single_number_pane_t1_ParamLimits

0xdae0,	// (0x00013dde) list_single_number_pane_t1

0xdf9e,	// (0x0001429c) list_single_number_pane_t2_ParamLimits

0xdf9e,	// (0x0001429c) list_single_number_pane_t2

0x0001,

0xf95a,	// (0x00015c58) list_single_number_pane_t_ParamLimits

0xf95a,	// (0x00015c58) list_single_number_pane_t

0xb072,	// (0x00011370) list_single_graphic_pane_g1_ParamLimits

0xb072,	// (0x00011370) list_single_graphic_pane_g1

0xb07e,	// (0x0001137c) list_single_graphic_pane_g2_ParamLimits

0xb07e,	// (0x0001137c) list_single_graphic_pane_g2

0xb08a,	// (0x00011388) list_single_graphic_pane_g3_ParamLimits

0xb08a,	// (0x00011388) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000158bf) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000158bf) list_single_graphic_pane_g

0xb096,	// (0x00011394) list_single_graphic_pane_t1_ParamLimits

0xb096,	// (0x00011394) list_single_graphic_pane_t1

0xb07e,	// (0x0001137c) list_single_heading_pane_g1_ParamLimits

0xb07e,	// (0x0001137c) list_single_heading_pane_g1

0xb08a,	// (0x00011388) list_single_heading_pane_g2_ParamLimits

0xb08a,	// (0x00011388) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000158c6) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000158c6) list_single_heading_pane_g

0xb0ac,	// (0x000113aa) list_single_heading_pane_t1_ParamLimits

0xb0ac,	// (0x000113aa) list_single_heading_pane_t1

0xb0c2,	// (0x000113c0) list_single_heading_pane_t2_ParamLimits

0xb0c2,	// (0x000113c0) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x000158cb) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x000158cb) list_single_heading_pane_t

0xb07e,	// (0x0001137c) list_single_number_heading_pane_g1_ParamLimits

0xb07e,	// (0x0001137c) list_single_number_heading_pane_g1

0xb08a,	// (0x00011388) list_single_number_heading_pane_g2_ParamLimits

0xb08a,	// (0x00011388) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000158c6) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000158c6) list_single_number_heading_pane_g

0xb0ac,	// (0x000113aa) list_single_number_heading_pane_t1_ParamLimits

0xb0ac,	// (0x000113aa) list_single_number_heading_pane_t1

0xb0d4,	// (0x000113d2) list_single_number_heading_pane_t2_ParamLimits

0xb0d4,	// (0x000113d2) list_single_number_heading_pane_t2

0xb0e6,	// (0x000113e4) list_single_number_heading_pane_t3_ParamLimits

0xb0e6,	// (0x000113e4) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x000158d0) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x000158d0) list_single_number_heading_pane_t

0xb0f8,	// (0x000113f6) list_single_graphic_heading_pane_g1_ParamLimits

0xb0f8,	// (0x000113f6) list_single_graphic_heading_pane_g1

0xb104,	// (0x00011402) list_single_graphic_heading_pane_g4_ParamLimits

0xb104,	// (0x00011402) list_single_graphic_heading_pane_g4

0xb08a,	// (0x00011388) list_single_graphic_heading_pane_g5_ParamLimits

0xb08a,	// (0x00011388) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x000158d7) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x000158d7) list_single_graphic_heading_pane_g

0xb0ac,	// (0x000113aa) list_single_graphic_heading_pane_t1_ParamLimits

0xb0ac,	// (0x000113aa) list_single_graphic_heading_pane_t1

0xb113,	// (0x00011411) list_single_graphic_heading_pane_t2_ParamLimits

0xb113,	// (0x00011411) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x000158de) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x000158de) list_single_graphic_heading_pane_t

0xb125,	// (0x00011423) list_single_large_graphic_pane_g1_ParamLimits

0xb125,	// (0x00011423) list_single_large_graphic_pane_g1

0xb131,	// (0x0001142f) list_single_large_graphic_pane_g2_ParamLimits

0xb131,	// (0x0001142f) list_single_large_graphic_pane_g2

0xb13d,	// (0x0001143b) list_single_large_graphic_pane_g3_ParamLimits

0xb13d,	// (0x0001143b) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x000158e3) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x000158e3) list_single_large_graphic_pane_g

0xd2cd,	// (0x000135cb) wait_border_pane_g2_copy1

0xb149,	// (0x00011447) list_single_large_graphic_pane_g4_cp2

0xb151,	// (0x0001144f) list_single_large_graphic_pane_t1_ParamLimits

0xb151,	// (0x0001144f) list_single_large_graphic_pane_t1

0xb167,	// (0x00011465) list_double_pane_g1_ParamLimits

0xb167,	// (0x00011465) list_double_pane_g1

0xb173,	// (0x00011471) list_double_pane_g2_ParamLimits

0xb173,	// (0x00011471) list_double_pane_g2

0x0001,

0xf5ec,	// (0x000158ea) list_double_pane_g_ParamLimits

0xf5ec,	// (0x000158ea) list_double_pane_g

0xb17f,	// (0x0001147d) list_double_pane_t1_ParamLimits

0xb17f,	// (0x0001147d) list_double_pane_t1

0xb195,	// (0x00011493) list_double_pane_t2_ParamLimits

0xb195,	// (0x00011493) list_double_pane_t2

0x0001,

0xf5f1,	// (0x000158ef) list_double_pane_t_ParamLimits

0xf5f1,	// (0x000158ef) list_double_pane_t

0xb1a7,	// (0x000114a5) list_double2_pane_g1_ParamLimits

0xb1a7,	// (0x000114a5) list_double2_pane_g1

0xb1b6,	// (0x000114b4) list_double2_pane_g2_ParamLimits

0xb1b6,	// (0x000114b4) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x000158f4) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x000158f4) list_double2_pane_g

0xb1c2,	// (0x000114c0) list_double2_pane_t1_ParamLimits

0xb1c2,	// (0x000114c0) list_double2_pane_t1

0xb1d8,	// (0x000114d6) list_double2_pane_t2_ParamLimits

0xb1d8,	// (0x000114d6) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x000158f9) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x000158f9) list_double2_pane_t

0xb167,	// (0x00011465) list_double_number_pane_g1_ParamLimits

0xb167,	// (0x00011465) list_double_number_pane_g1

0xb173,	// (0x00011471) list_double_number_pane_g2_ParamLimits

0xb173,	// (0x00011471) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x000158ea) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x000158ea) list_double_number_pane_g

0xb1ea,	// (0x000114e8) list_double_number_pane_t1_ParamLimits

0xb1ea,	// (0x000114e8) list_double_number_pane_t1

0xb1fc,	// (0x000114fa) list_double_number_pane_t2_ParamLimits

0xb1fc,	// (0x000114fa) list_double_number_pane_t2

0xb212,	// (0x00011510) list_double_number_pane_t3_ParamLimits

0xb212,	// (0x00011510) list_double_number_pane_t3

0x0002,

0xf600,	// (0x000158fe) list_double_number_pane_t_ParamLimits

0xf600,	// (0x000158fe) list_double_number_pane_t

0xb224,	// (0x00011522) list_double_graphic_pane_g1_ParamLimits

0xb224,	// (0x00011522) list_double_graphic_pane_g1

0xb230,	// (0x0001152e) list_double_graphic_pane_g2_ParamLimits

0xb230,	// (0x0001152e) list_double_graphic_pane_g2

0xb23f,	// (0x0001153d) list_double_graphic_pane_g3_ParamLimits

0xb23f,	// (0x0001153d) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x00015905) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x00015905) list_double_graphic_pane_g

0xb257,	// (0x00011555) list_double_graphic_pane_t1_ParamLimits

0xb257,	// (0x00011555) list_double_graphic_pane_t1

0xb26d,	// (0x0001156b) list_double_graphic_pane_t2_ParamLimits

0xb26d,	// (0x0001156b) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x0001590e) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x0001590e) list_double_graphic_pane_t

0xb27f,	// (0x0001157d) list_double2_graphic_pane_g1_ParamLimits

0xb27f,	// (0x0001157d) list_double2_graphic_pane_g1

0xb28b,	// (0x00011589) list_double2_graphic_pane_g2_ParamLimits

0xb28b,	// (0x00011589) list_double2_graphic_pane_g2

0xb1b6,	// (0x000114b4) list_double2_graphic_pane_g3_ParamLimits

0xb1b6,	// (0x000114b4) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x00015913) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x00015913) list_double2_graphic_pane_g

0xb297,	// (0x00011595) list_double2_graphic_pane_t1_ParamLimits

0xb297,	// (0x00011595) list_double2_graphic_pane_t1

0xb2ad,	// (0x000115ab) list_double2_graphic_pane_t2_ParamLimits

0xb2ad,	// (0x000115ab) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x0001591a) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x0001591a) list_double2_graphic_pane_t

0xb2bf,	// (0x000115bd) list_double_large_graphic_pane_g1_ParamLimits

0xb2bf,	// (0x000115bd) list_double_large_graphic_pane_g1

0xb2de,	// (0x000115dc) list_double_large_graphic_pane_g2_ParamLimits

0xb2de,	// (0x000115dc) list_double_large_graphic_pane_g2

0xb173,	// (0x00011471) list_double_large_graphic_pane_g3_ParamLimits

0xb173,	// (0x00011471) list_double_large_graphic_pane_g3

0xb2ed,	// (0x000115eb) list_double_large_graphic_pane_g4_ParamLimits

0xb2ed,	// (0x000115eb) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x0001591f) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x0001591f) list_double_large_graphic_pane_g

0xb313,	// (0x00011611) list_double_large_graphic_pane_t1_ParamLimits

0xb313,	// (0x00011611) list_double_large_graphic_pane_t1

0xb32c,	// (0x0001162a) list_double_large_graphic_pane_t2_ParamLimits

0xb32c,	// (0x0001162a) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x0001592a) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x0001592a) list_double_large_graphic_pane_t

0xb33e,	// (0x0001163c) list_double2_large_graphic_pane_g1_ParamLimits

0xb33e,	// (0x0001163c) list_double2_large_graphic_pane_g1

0xb1a7,	// (0x000114a5) list_double2_large_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x000114a5) list_double2_large_graphic_pane_g2

0xb1b6,	// (0x000114b4) list_double2_large_graphic_pane_g3_ParamLimits

0xb1b6,	// (0x000114b4) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x0001592f) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x0001592f) list_double2_large_graphic_pane_g

0xb34a,	// (0x00011648) list_double2_large_graphic_pane_t1_ParamLimits

0xb34a,	// (0x00011648) list_double2_large_graphic_pane_t1

0xb360,	// (0x0001165e) list_double2_large_graphic_pane_t2_ParamLimits

0xb360,	// (0x0001165e) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x00015936) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x00015936) list_double2_large_graphic_pane_t

0xb372,	// (0x00011670) list_double_heading_pane_g1_ParamLimits

0xb372,	// (0x00011670) list_double_heading_pane_g1

0xb381,	// (0x0001167f) list_double_heading_pane_g2_ParamLimits

0xb381,	// (0x0001167f) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x0001593b) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x0001593b) list_double_heading_pane_g

0xb38d,	// (0x0001168b) list_double_heading_pane_t1_ParamLimits

0xb38d,	// (0x0001168b) list_double_heading_pane_t1

0xb1d8,	// (0x000114d6) list_double_heading_pane_t2_ParamLimits

0xb1d8,	// (0x000114d6) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00015940) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00015940) list_double_heading_pane_t

0xb3a3,	// (0x000116a1) list_double_graphic_heading_pane_g1_ParamLimits

0xb3a3,	// (0x000116a1) list_double_graphic_heading_pane_g1

0xb372,	// (0x00011670) list_double_graphic_heading_pane_g2_ParamLimits

0xb372,	// (0x00011670) list_double_graphic_heading_pane_g2

0xb381,	// (0x0001167f) list_double_graphic_heading_pane_g3_ParamLimits

0xb381,	// (0x0001167f) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x00015945) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x00015945) list_double_graphic_heading_pane_g

0xb3af,	// (0x000116ad) list_double_graphic_heading_pane_t1_ParamLimits

0xb3af,	// (0x000116ad) list_double_graphic_heading_pane_t1

0xb2ad,	// (0x000115ab) list_double_graphic_heading_pane_t2_ParamLimits

0xb2ad,	// (0x000115ab) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x0001594c) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x0001594c) list_double_graphic_heading_pane_t

0xb2de,	// (0x000115dc) list_double_time_pane_g1_ParamLimits

0xb2de,	// (0x000115dc) list_double_time_pane_g1

0xb173,	// (0x00011471) list_double_time_pane_g2_ParamLimits

0xb173,	// (0x00011471) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00015951) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00015951) list_double_time_pane_g

0xb3c5,	// (0x000116c3) list_double_time_pane_t1_ParamLimits

0xb3c5,	// (0x000116c3) list_double_time_pane_t1

0xb3db,	// (0x000116d9) list_double_time_pane_t2_ParamLimits

0xb3db,	// (0x000116d9) list_double_time_pane_t2

0xb3ed,	// (0x000116eb) list_double_time_pane_t3_ParamLimits

0xb3ed,	// (0x000116eb) list_double_time_pane_t3

0xb3ff,	// (0x000116fd) list_double_time_pane_t4_ParamLimits

0xb3ff,	// (0x000116fd) list_double_time_pane_t4

0x0003,

0xf658,	// (0x00015956) list_double_time_pane_t_ParamLimits

0xf658,	// (0x00015956) list_double_time_pane_t

0xb28b,	// (0x00011589) list_setting_pane_g1_ParamLimits

0xb28b,	// (0x00011589) list_setting_pane_g1

0xb1b6,	// (0x000114b4) list_setting_pane_g2_ParamLimits

0xb1b6,	// (0x000114b4) list_setting_pane_g2

0x0001,

0xf661,	// (0x0001595f) list_setting_pane_g_ParamLimits

0xf661,	// (0x0001595f) list_setting_pane_g

0xb411,	// (0x0001170f) list_setting_pane_t1_ParamLimits

0xb411,	// (0x0001170f) list_setting_pane_t1

0xb428,	// (0x00011726) list_setting_pane_t2_ParamLimits

0xb428,	// (0x00011726) list_setting_pane_t2

0x0002,

0xf666,	// (0x00015964) list_setting_pane_t_ParamLimits

0xf666,	// (0x00015964) list_setting_pane_t

0xb465,	// (0x00011763) set_value_pane_cp_ParamLimits

0xb465,	// (0x00011763) set_value_pane_cp

0xb28b,	// (0x00011589) list_setting_number_pane_g1_ParamLimits

0xb28b,	// (0x00011589) list_setting_number_pane_g1

0xb1b6,	// (0x000114b4) list_setting_number_pane_g2_ParamLimits

0xb1b6,	// (0x000114b4) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x0001595f) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x0001595f) list_setting_number_pane_g

0xb471,	// (0x0001176f) list_setting_number_pane_t1_ParamLimits

0xb471,	// (0x0001176f) list_setting_number_pane_t1

0xb483,	// (0x00011781) list_setting_number_pane_t2_ParamLimits

0xb483,	// (0x00011781) list_setting_number_pane_t2

0xb49a,	// (0x00011798) list_setting_number_pane_t3_ParamLimits

0xb49a,	// (0x00011798) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x0001596b) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x0001596b) list_setting_number_pane_t

0xb465,	// (0x00011763) set_value_pane_ParamLimits

0xb465,	// (0x00011763) set_value_pane

0xb4db,	// (0x000117d9) bg_set_opt_pane_ParamLimits

0xb4db,	// (0x000117d9) bg_set_opt_pane

0xb4fc,	// (0x000117fa) set_value_pane_t1

0xb50a,	// (0x00011808) slider_set_pane_cp3

0xb513,	// (0x00011811) volume_small_pane_cp

0xb51c,	// (0x0001181a) list_form_gen_pane

0xb525,	// (0x00011823) scroll_pane_cp8

0xb536,	// (0x00011834) form_field_data_pane_ParamLimits

0xb536,	// (0x00011834) form_field_data_pane

0xb556,	// (0x00011854) form_field_data_wide_pane_ParamLimits

0xb556,	// (0x00011854) form_field_data_wide_pane

0xb575,	// (0x00011873) form_field_popup_pane_ParamLimits

0xb575,	// (0x00011873) form_field_popup_pane

0xb58d,	// (0x0001188b) form_field_popup_wide_pane_ParamLimits

0xb58d,	// (0x0001188b) form_field_popup_wide_pane

0xb5a4,	// (0x000118a2) form_field_slider_pane_ParamLimits

0xb5a4,	// (0x000118a2) form_field_slider_pane

0xb5b7,	// (0x000118b5) form_field_slider_wide_pane_ParamLimits

0xb5b7,	// (0x000118b5) form_field_slider_wide_pane

0xb5ca,	// (0x000118c8) data_form_pane

0xb5de,	// (0x000118dc) form_field_data_pane_t1

0xb5f6,	// (0x000118f4) input_focus_pane

0xb604,	// (0x00011902) data_form_wide_pane

0xb641,	// (0x0001193f) form_field_data_wide_pane_t1

0xaed8,	// (0x000111d6) input_focus_pane_cp6

0xb663,	// (0x00011961) form_field_popup_pane_t1

0xb5f6,	// (0x000118f4) input_focus_pane_cp7

0xb67b,	// (0x00011979) list_form_pane

0xb68f,	// (0x0001198d) form_field_popup_wide_pane_t1

0xb5f6,	// (0x000118f4) input_focus_pane_cp8

0xb6a4,	// (0x000119a2) list_form_wide_pane

0xb6b8,	// (0x000119b6) form_field_slider_pane_t1_ParamLimits

0xb6b8,	// (0x000119b6) form_field_slider_pane_t1

0xb6ce,	// (0x000119cc) form_field_slider_pane_t2_ParamLimits

0xb6ce,	// (0x000119cc) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x0001597b) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x0001597b) form_field_slider_pane_t

0xab90,	// (0x00010e8e) input_focus_pane_cp9_ParamLimits

0xab90,	// (0x00010e8e) input_focus_pane_cp9

0xb6e3,	// (0x000119e1) slider_cont_pane_ParamLimits

0xb6e3,	// (0x000119e1) slider_cont_pane

0xb6f7,	// (0x000119f5) form_field_slider_wide_pane_t1_ParamLimits

0xb6f7,	// (0x000119f5) form_field_slider_wide_pane_t1

0xb709,	// (0x00011a07) form_field_slider_wide_pane_t2_ParamLimits

0xb709,	// (0x00011a07) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x00015980) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x00015980) form_field_slider_wide_pane_t

0xab90,	// (0x00010e8e) input_focus_pane_cp10_ParamLimits

0xab90,	// (0x00010e8e) input_focus_pane_cp10

0xb71b,	// (0x00011a19) slider_cont_pane_cp1_ParamLimits

0xb71b,	// (0x00011a19) slider_cont_pane_cp1

0xb72f,	// (0x00011a2d) slider_form_pane_cp

0xb737,	// (0x00011a35) input_focus_pane_g1

0xb73f,	// (0x00011a3d) input_focus_pane_g2

0xb747,	// (0x00011a45) input_focus_pane_g3

0xb74f,	// (0x00011a4d) input_focus_pane_g4

0xb757,	// (0x00011a55) input_focus_pane_g5

0xb75f,	// (0x00011a5d) input_focus_pane_g6

0xb767,	// (0x00011a65) input_focus_pane_g7

0xb76f,	// (0x00011a6d) input_focus_pane_g8

0xb777,	// (0x00011a75) input_focus_pane_g9

0xa81b,	// (0x00010b19) input_focus_pane_g10

0x0009,

0xf687,	// (0x00015985) input_focus_pane_g

0xd2d6,	// (0x000135d4) wait_border_pane_g3_copy1

0xb77f,	// (0x00011a7d) data_form_pane_t1

0xa81b,	// (0x00010b19) wait_anim_pane_g1_copy1

0xe1b3,	// (0x000144b1) data_form_wide_pane_t1

0xb799,	// (0x00011a97) list_form_graphic_pane_cp_ParamLimits

0xb799,	// (0x00011a97) list_form_graphic_pane_cp

0xe188,	// (0x00014486) slider_form_pane_g1

0xe191,	// (0x0001448f) slider_form_pane_g2

0x0006,

0xf98a,	// (0x00015c88) slider_form_pane_g

0xb799,	// (0x00011a97) list_form_graphic_pane_ParamLimits

0xb799,	// (0x00011a97) list_form_graphic_pane

0xb7aa,	// (0x00011aa8) list_form_graphic_pane_g1

0xb7b2,	// (0x00011ab0) list_form_graphic_pane_t1_ParamLimits

0xb7b2,	// (0x00011ab0) list_form_graphic_pane_t1

0xa905,	// (0x00010c03) list_highlight_pane_cp5_ParamLimits

0xa905,	// (0x00010c03) list_highlight_pane_cp5

0xb7c7,	// (0x00011ac5) find_pane_g1

0xb7d0,	// (0x00011ace) input_find_pane

0xb7d9,	// (0x00011ad7) input_find_pane_g1_ParamLimits

0xb7d9,	// (0x00011ad7) input_find_pane_g1

0xb7e5,	// (0x00011ae3) input_find_pane_t1_ParamLimits

0xb7e5,	// (0x00011ae3) input_find_pane_t1

0xb7fa,	// (0x00011af8) input_find_pane_t2_ParamLimits

0xb7fa,	// (0x00011af8) input_find_pane_t2

0x0001,

0xf69c,	// (0x0001599a) input_find_pane_t_ParamLimits

0xf69c,	// (0x0001599a) input_find_pane_t

0xb80f,	// (0x00011b0d) input_focus_pane_cp5_ParamLimits

0xb80f,	// (0x00011b0d) input_focus_pane_cp5

0xb829,	// (0x00011b27) bg_popup_window_pane_cp2_ParamLimits

0xb829,	// (0x00011b27) bg_popup_window_pane_cp2

0xb836,	// (0x00011b34) listscroll_menu_pane_ParamLimits

0xb836,	// (0x00011b34) listscroll_menu_pane

0xb842,	// (0x00011b40) popup_submenu_window_ParamLimits

0xb842,	// (0x00011b40) popup_submenu_window

0xb866,	// (0x00011b64) find_popup_pane_g1

0xb86e,	// (0x00011b6c) input_popup_find_pane_cp

0xb80f,	// (0x00011b0d) input_focus_pane_cp4_ParamLimits

0xb80f,	// (0x00011b0d) input_focus_pane_cp4

0xb884,	// (0x00011b82) input_popup_find_pane_t1_ParamLimits

0xb884,	// (0x00011b82) input_popup_find_pane_t1

0xa825,	// (0x00010b23) bg_popup_sub_pane_cp

0xb8b2,	// (0x00011bb0) listscroll_popup_sub_pane

0xb8ba,	// (0x00011bb8) list_submenu_pane_ParamLimits

0xb8ba,	// (0x00011bb8) list_submenu_pane

0xb8cb,	// (0x00011bc9) scroll_pane_cp4

0xb8d3,	// (0x00011bd1) list_single_popup_submenu_pane_ParamLimits

0xb8d3,	// (0x00011bd1) list_single_popup_submenu_pane

0xb8e6,	// (0x00011be4) list_single_popup_submenu_pane_g1

0xb8ee,	// (0x00011bec) list_single_popup_submenu_pane_t1_ParamLimits

0xb8ee,	// (0x00011bec) list_single_popup_submenu_pane_t1

0xa905,	// (0x00010c03) bg_active_tab_pane_cp1_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp1

0xb903,	// (0x00011c01) tabs_2_active_pane_g1

0xb90b,	// (0x00011c09) tabs_2_active_pane_t1

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp1_ParamLimits

0xa905,	// (0x00010c03) bg_passive_tab_pane_cp1

0xb903,	// (0x00011c01) tabs_2_passive_pane_g1

0xb90b,	// (0x00011c09) tabs_2_passive_pane_t1

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp4

0xb92b,	// (0x00011c29) tabs_2_long_active_pane_t1

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp4

0x9478,	// (0x0000f776) list_single_midp_graphic_pane_g4_ParamLimits

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp5

0xb94a,	// (0x00011c48) tabs_3_long_active_pane_t1

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp5

0x9478,	// (0x0000f776) list_single_midp_graphic_pane_g4

0xa905,	// (0x00010c03) bg_popup_window_pane_cp13_ParamLimits

0xa905,	// (0x00010c03) bg_popup_window_pane_cp13

0xb965,	// (0x00011c63) listscroll_popup_fast_pane_ParamLimits

0xb965,	// (0x00011c63) listscroll_popup_fast_pane

0xb974,	// (0x00011c72) grid_popup_fast_pane_ParamLimits

0xb974,	// (0x00011c72) grid_popup_fast_pane

0xb986,	// (0x00011c84) scroll_pane_cp9_ParamLimits

0xb986,	// (0x00011c84) scroll_pane_cp9

0x0a65,	// (0x00006d63) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x0a65,	// (0x00006d63) list_single_graphic_hl_pane_t1_cp2

0xb9aa,	// (0x00011ca8) input_focus_pane_cp20_ParamLimits

0xb9aa,	// (0x00011ca8) input_focus_pane_cp20

0xb9b8,	// (0x00011cb6) query_popup_data_pane_t1_ParamLimits

0xb9b8,	// (0x00011cb6) query_popup_data_pane_t1

0xb9cb,	// (0x00011cc9) query_popup_data_pane_t2_ParamLimits

0xb9cb,	// (0x00011cc9) query_popup_data_pane_t2

0xba11,	// (0x00011d0f) query_popup_data_pane_t3_ParamLimits

0xba11,	// (0x00011d0f) query_popup_data_pane_t3

0xba52,	// (0x00011d50) query_popup_data_pane_t4_ParamLimits

0xba52,	// (0x00011d50) query_popup_data_pane_t4

0xba8e,	// (0x00011d8c) query_popup_data_pane_t5_ParamLimits

0xba8e,	// (0x00011d8c) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x0001599f) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x0001599f) query_popup_data_pane_t

0xb737,	// (0x00011a35) bg_set_opt_pane_g1

0xb73f,	// (0x00011a3d) bg_set_opt_pane_g2

0xb747,	// (0x00011a45) bg_set_opt_pane_g3

0xb74f,	// (0x00011a4d) bg_set_opt_pane_g4

0xb757,	// (0x00011a55) bg_set_opt_pane_g5

0xb75f,	// (0x00011a5d) bg_set_opt_pane_g6

0xb767,	// (0x00011a65) bg_set_opt_pane_g7

0xb76f,	// (0x00011a6d) bg_set_opt_pane_g8

0xb777,	// (0x00011a75) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000159aa) bg_set_opt_pane_g

0x8b93,	// (0x0000ee91) control_top_pane_stacon_ParamLimits

0x8b93,	// (0x0000ee91) control_top_pane_stacon

0x8be6,	// (0x0000eee4) signal_pane_stacon_ParamLimits

0x8be6,	// (0x0000eee4) signal_pane_stacon

0xc0bb,	// (0x000123b9) stacon_top_pane_g1_ParamLimits

0xc0bb,	// (0x000123b9) stacon_top_pane_g1

0x8c0b,	// (0x0000ef09) title_pane_stacon_ParamLimits

0x8c0b,	// (0x0000ef09) title_pane_stacon

0x8c2d,	// (0x0000ef2b) uni_indicator_pane_stacon_ParamLimits

0x8c2d,	// (0x0000ef2b) uni_indicator_pane_stacon

0x8c42,	// (0x0000ef40) battery_pane_stacon_ParamLimits

0x8c42,	// (0x0000ef40) battery_pane_stacon

0x8c82,	// (0x0000ef80) control_bottom_pane_stacon_ParamLimits

0x8c82,	// (0x0000ef80) control_bottom_pane_stacon

0x8ca1,	// (0x0000ef9f) navi_pane_stacon_ParamLimits

0x8ca1,	// (0x0000ef9f) navi_pane_stacon

0xc0dd,	// (0x000123db) stacon_bottom_pane_g1_ParamLimits

0xc0dd,	// (0x000123db) stacon_bottom_pane_g1

0x8905,	// (0x0000ec03) aid_levels_signal_lsc_ParamLimits

0x8905,	// (0x0000ec03) aid_levels_signal_lsc

0x891c,	// (0x0000ec1a) signal_pane_stacon_g1_ParamLimits

0x891c,	// (0x0000ec1a) signal_pane_stacon_g1

0x8930,	// (0x0000ec2e) signal_pane_stacon_g2_ParamLimits

0x8930,	// (0x0000ec2e) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000159bd) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000159bd) signal_pane_stacon_g

0x8965,	// (0x0000ec63) title_pane_stacon_t1_ParamLimits

0x8965,	// (0x0000ec63) title_pane_stacon_t1

0xbad2,	// (0x00011dd0) uni_indicator_pane_stacon_g1

0xbadc,	// (0x00011dda) uni_indicator_pane_stacon_g2

0xbae6,	// (0x00011de4) uni_indicator_pane_stacon_g3

0xbaf0,	// (0x00011dee) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x000159c9) uni_indicator_pane_stacon_g

0x898a,	// (0x0000ec88) control_top_pane_stacon_g1

0x8992,	// (0x0000ec90) control_top_pane_stacon_t1_ParamLimits

0x8992,	// (0x0000ec90) control_top_pane_stacon_t1

0x89c9,	// (0x0000ecc7) aid_levels_battery_lsc_ParamLimits

0x89c9,	// (0x0000ecc7) aid_levels_battery_lsc

0x89e1,	// (0x0000ecdf) battery_pane_stacon_g1_ParamLimits

0x89e1,	// (0x0000ecdf) battery_pane_stacon_g1

0x89f4,	// (0x0000ecf2) battery_pane_stacon_g2_ParamLimits

0x89f4,	// (0x0000ecf2) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x000159d2) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x000159d2) battery_pane_stacon_g

0x8a2a,	// (0x0000ed28) navi_icon_pane_stacon

0x8a3e,	// (0x0000ed3c) navi_navi_pane_stacon

0x8a2a,	// (0x0000ed28) navi_text_pane_stacon

0x898a,	// (0x0000ec88) control_bottom_pane_stacon_g1

0x8a52,	// (0x0000ed50) control_bottom_pane_stacon_t1_ParamLimits

0x8a52,	// (0x0000ed50) control_bottom_pane_stacon_t1

0xbb14,	// (0x00011e12) grid_app_pane_ParamLimits

0xbb14,	// (0x00011e12) grid_app_pane

0xbb32,	// (0x00011e30) scroll_pane_cp15_ParamLimits

0xbb32,	// (0x00011e30) scroll_pane_cp15

0xbb43,	// (0x00011e41) cell_app_pane_ParamLimits

0xbb43,	// (0x00011e41) cell_app_pane

0xbb67,	// (0x00011e65) cell_app_pane_g1_ParamLimits

0xbb67,	// (0x00011e65) cell_app_pane_g1

0xbb8b,	// (0x00011e89) cell_app_pane_g2_ParamLimits

0xbb8b,	// (0x00011e89) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x000159d7) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x000159d7) cell_app_pane_g

0xbb97,	// (0x00011e95) cell_app_pane_t1_ParamLimits

0xbb97,	// (0x00011e95) cell_app_pane_t1

0xbbae,	// (0x00011eac) grid_highlight_pane_ParamLimits

0xbbae,	// (0x00011eac) grid_highlight_pane

0xb737,	// (0x00011a35) cell_highlight_pane_g1

0xb73f,	// (0x00011a3d) cell_highlight_pane_g2

0xb747,	// (0x00011a45) cell_highlight_pane_g3

0xb74f,	// (0x00011a4d) cell_highlight_pane_g4

0xb757,	// (0x00011a55) cell_highlight_pane_g5

0xb75f,	// (0x00011a5d) cell_highlight_pane_g6

0xb767,	// (0x00011a65) cell_highlight_pane_g7

0xb76f,	// (0x00011a6d) cell_highlight_pane_g8

0xb777,	// (0x00011a75) cell_highlight_pane_g9

0xa81b,	// (0x00010b19) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x00015985) cell_highlight_pane_g

0xbbbf,	// (0x00011ebd) bg_scroll_pane

0x8a9c,	// (0x0000ed9a) scroll_handle_pane

0xbc06,	// (0x00011f04) scroll_bg_pane_g1

0xbc1b,	// (0x00011f19) scroll_bg_pane_g2

0xbc33,	// (0x00011f31) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x000159dc) scroll_bg_pane_g

0xbc48,	// (0x00011f46) scroll_handle_focus_pane_ParamLimits

0xbc48,	// (0x00011f46) scroll_handle_focus_pane

0xbc06,	// (0x00011f04) scroll_handle_pane_g1

0xbc55,	// (0x00011f53) scroll_handle_pane_g2

0xbc33,	// (0x00011f31) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x000159e3) scroll_handle_pane_g

0xb80f,	// (0x00011b0d) bg_popup_sub_pane_cp21_ParamLimits

0xb80f,	// (0x00011b0d) bg_popup_sub_pane_cp21

0xbc69,	// (0x00011f67) popup_fep_japan_predictive_window_t1_ParamLimits

0xbc69,	// (0x00011f67) popup_fep_japan_predictive_window_t1

0xbc80,	// (0x00011f7e) popup_fep_japan_predictive_window_t2_ParamLimits

0xbc80,	// (0x00011f7e) popup_fep_japan_predictive_window_t2

0xbcb3,	// (0x00011fb1) popup_fep_japan_predictive_window_t3_ParamLimits

0xbcb3,	// (0x00011fb1) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x000159ea) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x000159ea) popup_fep_japan_predictive_window_t

0xa825,	// (0x00010b23) bg_popup_sub_pane_cp23

0xbcea,	// (0x00011fe8) listscroll_japin_cand_pane

0xbcf2,	// (0x00011ff0) popup_fep_japan_candidate_window_t1

0xbd00,	// (0x00011ffe) candidate_pane_ParamLimits

0xbd00,	// (0x00011ffe) candidate_pane

0xbd12,	// (0x00012010) scroll_pane_cp30

0xbd1a,	// (0x00012018) list_single_popup_jap_candidate_pane_ParamLimits

0xbd1a,	// (0x00012018) list_single_popup_jap_candidate_pane

0xa825,	// (0x00010b23) list_highlight_pane_cp30

0xbd2f,	// (0x0001202d) list_single_popup_jap_candidate_pane_t1

0xbd3e,	// (0x0001203c) level_1_signal

0xbd4b,	// (0x00012049) level_2_signal

0xbd58,	// (0x00012056) level_3_signal

0xbd65,	// (0x00012063) level_4_signal

0xbd72,	// (0x00012070) level_5_signal

0xbd7f,	// (0x0001207d) level_6_signal

0xbd8c,	// (0x0001208a) level_7_signal

0xbd3e,	// (0x0001203c) level_1_battery

0xbd4b,	// (0x00012049) level_2_battery

0xbd58,	// (0x00012056) level_3_battery

0xbd65,	// (0x00012063) level_4_battery

0xbd72,	// (0x00012070) level_5_battery

0xbd7f,	// (0x0001207d) level_6_battery

0xbd8c,	// (0x0001208a) level_7_battery

0xbdb1,	// (0x000120af) list_menu_pane_ParamLimits

0xbdb1,	// (0x000120af) list_menu_pane

0xbdc7,	// (0x000120c5) scroll_pane_cp25_ParamLimits

0xbdc7,	// (0x000120c5) scroll_pane_cp25

0xbde0,	// (0x000120de) list_double2_graphic_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double2_graphic_pane_cp2

0xbde0,	// (0x000120de) list_double2_large_graphic_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double2_large_graphic_pane_cp2

0xbde0,	// (0x000120de) list_double2_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double2_pane_cp2

0xbde0,	// (0x000120de) list_double_graphic_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double_graphic_pane_cp2

0xbde0,	// (0x000120de) list_double_large_graphic_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double_large_graphic_pane_cp2

0xbde0,	// (0x000120de) list_double_number_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double_number_pane_cp2

0xbde0,	// (0x000120de) list_double_pane_cp2_ParamLimits

0xbde0,	// (0x000120de) list_double_pane_cp2

0xbe01,	// (0x000120ff) list_single_2graphic_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_2graphic_pane_cp2

0xbe01,	// (0x000120ff) list_single_graphic_heading_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_graphic_heading_pane_cp2

0xbe01,	// (0x000120ff) list_single_graphic_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_graphic_pane_cp2

0xbe01,	// (0x000120ff) list_single_heading_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_heading_pane_cp2

0xbe15,	// (0x00012113) list_single_large_graphic_pane_cp2_ParamLimits

0xbe15,	// (0x00012113) list_single_large_graphic_pane_cp2

0xbe01,	// (0x000120ff) list_single_number_heading_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_number_heading_pane_cp2

0xbe01,	// (0x000120ff) list_single_number_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_number_pane_cp2

0xbe01,	// (0x000120ff) list_single_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_pane_cp2

0xbe84,	// (0x00012182) bg_popup_sub_pane_cp22

0x8b4b,	// (0x0000ee49) popup_side_volume_key_window_g1

0x8b6f,	// (0x0000ee6d) popup_side_volume_key_window_t1

0x8b8b,	// (0x0000ee89) volume_small_pane_cp1

0xab90,	// (0x00010e8e) bg_popup_sub_pane_cp24_ParamLimits

0xab90,	// (0x00010e8e) bg_popup_sub_pane_cp24

0xbe9a,	// (0x00012198) fep_china_uni_candidate_pane_ParamLimits

0xbe9a,	// (0x00012198) fep_china_uni_candidate_pane

0xbeae,	// (0x000121ac) fep_china_uni_entry_pane

0xbebe,	// (0x000121bc) popup_fep_china_uni_window_g1

0xbeda,	// (0x000121d8) fep_china_uni_entry_pane_g1

0xbee2,	// (0x000121e0) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00015a1b) fep_china_uni_entry_pane_g

0xbeea,	// (0x000121e8) fep_entry_item_pane

0xbef4,	// (0x000121f2) fep_candidate_item_pane

0xbefc,	// (0x000121fa) fep_china_uni_candidate_pane_g1

0xbf04,	// (0x00012202) fep_china_uni_candidate_pane_g2

0xbf0c,	// (0x0001220a) fep_china_uni_candidate_pane_g3

0xbf14,	// (0x00012212) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00015a20) fep_china_uni_candidate_pane_g

0xa81b,	// (0x00010b19) fep_entry_item_pane_g1

0xbf1c,	// (0x0001221a) fep_entry_item_pane_t1_ParamLimits

0xbf1c,	// (0x0001221a) fep_entry_item_pane_t1

0xbf32,	// (0x00012230) fep_candidate_item_pane_t1_ParamLimits

0xbf32,	// (0x00012230) fep_candidate_item_pane_t1

0xbf47,	// (0x00012245) fep_candidate_item_pane_t2_ParamLimits

0xbf47,	// (0x00012245) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00015a29) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00015a29) fep_candidate_item_pane_t

0xa905,	// (0x00010c03) list_highlight_pane_cp31_ParamLimits

0xa905,	// (0x00010c03) list_highlight_pane_cp31

0xbf59,	// (0x00012257) level_1_signal_lsc

0xbf62,	// (0x00012260) level_2_signal_lsc

0xbf6b,	// (0x00012269) level_3_signal_lsc

0xbf74,	// (0x00012272) level_4_signal_lsc

0xbf7d,	// (0x0001227b) level_5_signal_lsc

0xbf86,	// (0x00012284) level_6_signal_lsc

0xbf8f,	// (0x0001228d) level_7_signal_lsc

0xbf8f,	// (0x0001228d) level_1_battery_lsc

0xbf98,	// (0x00012296) level_2_battery_lsc

0xbfa1,	// (0x0001229f) level_3_battery_lsc

0xbfaa,	// (0x000122a8) level_4_battery_lsc

0xbfb3,	// (0x000122b1) level_5_battery_lsc

0xbfbc,	// (0x000122ba) level_6_battery_lsc

0xbf59,	// (0x00012257) level_7_battery_lsc

0xbfc5,	// (0x000122c3) scroll_handle_focus_pane_g1

0xbfce,	// (0x000122cc) scroll_handle_focus_pane_g2

0xbfd7,	// (0x000122d5) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00015a2e) scroll_handle_focus_pane_g

0xbfe0,	// (0x000122de) list_single_2graphic_pane_g1_ParamLimits

0xbfe0,	// (0x000122de) list_single_2graphic_pane_g1

0xb104,	// (0x00011402) list_single_2graphic_pane_g2_ParamLimits

0xb104,	// (0x00011402) list_single_2graphic_pane_g2

0xb08a,	// (0x00011388) list_single_2graphic_pane_g3_ParamLimits

0xb08a,	// (0x00011388) list_single_2graphic_pane_g3

0xbfec,	// (0x000122ea) list_single_2graphic_pane_g4_ParamLimits

0xbfec,	// (0x000122ea) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x00015a35) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x00015a35) list_single_2graphic_pane_g

0xbff8,	// (0x000122f6) list_single_2graphic_pane_t1_ParamLimits

0xbff8,	// (0x000122f6) list_single_2graphic_pane_t1

0xc026,	// (0x00012324) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc026,	// (0x00012324) list_double2_graphic_large_graphic_pane_g1

0xb1a7,	// (0x000114a5) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb1a7,	// (0x000114a5) list_double2_graphic_large_graphic_pane_g2

0xb1b6,	// (0x000114b4) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb1b6,	// (0x000114b4) list_double2_graphic_large_graphic_pane_g3

0xc036,	// (0x00012334) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc036,	// (0x00012334) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00015a3e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00015a3e) list_double2_graphic_large_graphic_pane_g

0xc042,	// (0x00012340) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc042,	// (0x00012340) list_double2_graphic_large_graphic_pane_t1

0xc058,	// (0x00012356) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc058,	// (0x00012356) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x00015a47) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x00015a47) list_double2_graphic_large_graphic_pane_t

0xc196,	// (0x00012494) popup_fast_swap_window_ParamLimits

0xc196,	// (0x00012494) popup_fast_swap_window

0xc1b2,	// (0x000124b0) popup_side_volume_key_window

0xc1cc,	// (0x000124ca) stacon_top_pane

0xc1d6,	// (0x000124d4) status_pane_ParamLimits

0xc1d6,	// (0x000124d4) status_pane

0xc1e4,	// (0x000124e2) status_small_pane

0xa825,	// (0x00010b23) control_pane

0xa825,	// (0x00010b23) stacon_bottom_pane

0xb525,	// (0x00011823) scroll_pane_cp121

0xb51c,	// (0x0001181a) set_content_pane

0xc06a,	// (0x00012368) bg_active_tab_pane_g1_cp1

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp1

0xc07c,	// (0x0001237a) bg_active_tab_pane_g3_cp1

0xc06a,	// (0x00012368) bg_passive_tab_pane_g1_cp1

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp1

0xc07c,	// (0x0001237a) bg_passive_tab_pane_g3_cp1

0xc085,	// (0x00012383) bg_active_tab_pane_g1_cp2

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp2

0xc08e,	// (0x0001238c) bg_active_tab_pane_g3_cp2

0xc085,	// (0x00012383) bg_passive_tab_pane_g1_cp2

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp2

0xc08e,	// (0x0001238c) bg_passive_tab_pane_g3_cp2

0xc097,	// (0x00012395) bg_active_tab_pane_g1_cp3

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp3

0xc0a0,	// (0x0001239e) bg_active_tab_pane_g3_cp3

0xc097,	// (0x00012395) bg_passive_tab_pane_g1_cp3

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp3

0xc0a0,	// (0x0001239e) bg_passive_tab_pane_g3_cp3

0xc0a9,	// (0x000123a7) bg_active_tab_pane_g1_cp4

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp4

0xc0b2,	// (0x000123b0) bg_active_tab_pane_g3_cp4

0xc0a9,	// (0x000123a7) bg_passive_tab_pane_g1_cp4

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp4

0xc0b2,	// (0x000123b0) bg_passive_tab_pane_g3_cp4

0xc0f9,	// (0x000123f7) bg_active_tab_pane_g1_cp5

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp5

0xc102,	// (0x00012400) bg_active_tab_pane_g3_cp5

0xc0f9,	// (0x000123f7) bg_passive_tab_pane_g1_cp5

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp5

0xc102,	// (0x00012400) bg_passive_tab_pane_g3_cp5

0xc10b,	// (0x00012409) list_set_graphic_pane_ParamLimits

0xc10b,	// (0x00012409) list_set_graphic_pane

0xa825,	// (0x00010b23) bg_set_opt_pane_cp4

0xc11d,	// (0x0001241b) list_set_graphic_pane_g1_ParamLimits

0xc11d,	// (0x0001241b) list_set_graphic_pane_g1

0xc129,	// (0x00012427) list_set_graphic_pane_g2_ParamLimits

0xc129,	// (0x00012427) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00015a4c) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00015a4c) list_set_graphic_pane_g

0x0009,

0xfad8,	// (0x00015dd6) volume_small_pane_cp_g

0xc14b,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xc14b,	// (0x00012449) list_double2_large_graphic_pane_g1_cp2

0xc157,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xc157,	// (0x00012455) list_double2_large_graphic_pane_g2_cp2

0xc166,	// (0x00012464) list_double2_large_graphic_pane_g3_cp2

0xc16e,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xc16e,	// (0x0001246c) list_double2_large_graphic_pane_t1_cp2

0xc184,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xc184,	// (0x00012482) list_double2_large_graphic_pane_t2_cp2

0xdd6b,	// (0x00014069) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xdd6b,	// (0x00014069) list_double_large_graphic_pane_g1_cp2

0xdd7c,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xdd7c,	// (0x0001407a) list_double_large_graphic_pane_g2_cp2

0xc2e9,	// (0x000125e7) list_double_large_graphic_pane_g3_cp2

0xdd8b,	// (0x00014089) list_double_large_graphic_pane_g4_cp

0xdd93,	// (0x00014091) list_double_large_graphic_pane_t1_cp2_ParamLimits

0xdd93,	// (0x00014091) list_double_large_graphic_pane_t1_cp2

0xddaa,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0xddaa,	// (0x000140a8) list_double_large_graphic_pane_t2_cp2

0xc1ed,	// (0x000124eb) list_double2_graphic_pane_g1_cp2_ParamLimits

0xc1ed,	// (0x000124eb) list_double2_graphic_pane_g1_cp2

0xc1f9,	// (0x000124f7) list_double2_graphic_pane_g2_cp2_ParamLimits

0xc1f9,	// (0x000124f7) list_double2_graphic_pane_g2_cp2

0xc208,	// (0x00012506) list_double2_graphic_pane_g3_cp2

0xc210,	// (0x0001250e) list_double2_graphic_pane_t1_cp2_ParamLimits

0xc210,	// (0x0001250e) list_double2_graphic_pane_t1_cp2

0xc226,	// (0x00012524) list_double2_graphic_pane_t2_cp2_ParamLimits

0xc226,	// (0x00012524) list_double2_graphic_pane_t2_cp2

0xc238,	// (0x00012536) list_single_number_heading_pane_g1_cp2_ParamLimits

0xc238,	// (0x00012536) list_single_number_heading_pane_g1_cp2

0xc244,	// (0x00012542) list_single_number_heading_pane_g2_cp2

0xc24c,	// (0x0001254a) list_single_number_heading_pane_t1_cp2_ParamLimits

0xc24c,	// (0x0001254a) list_single_number_heading_pane_t1_cp2

0xc262,	// (0x00012560) list_single_number_heading_pane_t2_cp2_ParamLimits

0xc262,	// (0x00012560) list_single_number_heading_pane_t2_cp2

0xc274,	// (0x00012572) list_single_number_heading_pane_t3_cp2_ParamLimits

0xc274,	// (0x00012572) list_single_number_heading_pane_t3_cp2

0xc238,	// (0x00012536) list_single_heading_pane_g1_cp2_ParamLimits

0xc238,	// (0x00012536) list_single_heading_pane_g1_cp2

0xc244,	// (0x00012542) list_single_heading_pane_g2_cp2

0xc24c,	// (0x0001254a) list_single_heading_pane_t1_cp2_ParamLimits

0xc24c,	// (0x0001254a) list_single_heading_pane_t1_cp2

0xdb75,	// (0x00013e73) list_single_heading_pane_t2_cp2_ParamLimits

0xdb75,	// (0x00013e73) list_single_heading_pane_t2_cp2

0xdabd,	// (0x00013dbb) list_double_graphic_pane_g1_cp2_ParamLimits

0xdabd,	// (0x00013dbb) list_double_graphic_pane_g1_cp2

0xdac9,	// (0x00013dc7) list_double_graphic_pane_g2_cp2_ParamLimits

0xdac9,	// (0x00013dc7) list_double_graphic_pane_g2_cp2

0xdad8,	// (0x00013dd6) list_double_graphic_pane_g3_cp2

0xdae0,	// (0x00013dde) list_double_graphic_pane_t1_cp2_ParamLimits

0xdae0,	// (0x00013dde) list_double_graphic_pane_t1_cp2

0xdaf6,	// (0x00013df4) list_double_graphic_pane_t2_cp2_ParamLimits

0xdaf6,	// (0x00013df4) list_double_graphic_pane_t2_cp2

0xb07e,	// (0x0001137c) list_double_number_pane_g1_cp2_ParamLimits

0xb07e,	// (0x0001137c) list_double_number_pane_g1_cp2

0xc2e9,	// (0x000125e7) list_double_number_pane_g2_cp2

0xda83,	// (0x00013d81) list_double_number_pane_t1_cp2_ParamLimits

0xda83,	// (0x00013d81) list_double_number_pane_t1_cp2

0xda95,	// (0x00013d93) list_double_number_pane_t2_cp2_ParamLimits

0xda95,	// (0x00013d93) list_double_number_pane_t2_cp2

0xdaab,	// (0x00013da9) list_double_number_pane_t3_cp2_ParamLimits

0xdaab,	// (0x00013da9) list_double_number_pane_t3_cp2

0xd96e,	// (0x00013c6c) list_single_graphic_pane_g1_cp2_ParamLimits

0xd96e,	// (0x00013c6c) list_single_graphic_pane_g1_cp2

0xc33f,	// (0x0001263d) list_single_graphic_pane_g2_cp2_ParamLimits

0xc33f,	// (0x0001263d) list_single_graphic_pane_g2_cp2

0xc34b,	// (0x00012649) list_single_graphic_pane_g3_cp2

0xd946,	// (0x00013c44) list_single_graphic_pane_t1_cp2_ParamLimits

0xd946,	// (0x00013c44) list_single_graphic_pane_t1_cp2

0xc33f,	// (0x0001263d) list_single_number_pane_g1_cp2_ParamLimits

0xc33f,	// (0x0001263d) list_single_number_pane_g1_cp2

0xc34b,	// (0x00012649) list_single_number_pane_g2_cp2

0xd946,	// (0x00013c44) list_single_number_pane_t1_cp2_ParamLimits

0xd946,	// (0x00013c44) list_single_number_pane_t1_cp2

0xd95c,	// (0x00013c5a) list_single_number_pane_t2_cp2_ParamLimits

0xd95c,	// (0x00013c5a) list_single_number_pane_t2_cp2

0xc157,	// (0x00012455) list_double2_pane_g1_cp2_ParamLimits

0xc157,	// (0x00012455) list_double2_pane_g1_cp2

0xc166,	// (0x00012464) list_double2_pane_g2_cp2

0xc2c1,	// (0x000125bf) list_double2_pane_t1_cp2_ParamLimits

0xc2c1,	// (0x000125bf) list_double2_pane_t1_cp2

0xc2d7,	// (0x000125d5) list_double2_pane_t2_cp2_ParamLimits

0xc2d7,	// (0x000125d5) list_double2_pane_t2_cp2

0xb07e,	// (0x0001137c) list_double_pane_g1_cp2_ParamLimits

0xb07e,	// (0x0001137c) list_double_pane_g1_cp2

0xc2e9,	// (0x000125e7) list_double_pane_g2_cp2

0xc2f1,	// (0x000125ef) list_double_pane_t1_cp2_ParamLimits

0xc2f1,	// (0x000125ef) list_double_pane_t1_cp2

0xc307,	// (0x00012605) list_double_pane_t2_cp2_ParamLimits

0xc307,	// (0x00012605) list_double_pane_t2_cp2

0xc32f,	// (0x0001262d) list_single_pane_cp2_g3

0xc33f,	// (0x0001263d) list_single_pane_g1_cp2_ParamLimits

0xc33f,	// (0x0001263d) list_single_pane_g1_cp2

0xc34b,	// (0x00012649) list_single_pane_g2_cp2

0xc353,	// (0x00012651) list_single_pane_t1_cp2_ParamLimits

0xc353,	// (0x00012651) list_single_pane_t1_cp2

0xc36b,	// (0x00012669) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xc36b,	// (0x00012669) list_single_large_graphic_pane_g1_cp2

0xc377,	// (0x00012675) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xc377,	// (0x00012675) list_single_large_graphic_pane_g2_cp2

0xc383,	// (0x00012681) list_single_large_graphic_pane_g3_cp2

0xc38b,	// (0x00012689) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xc38b,	// (0x00012689) list_single_large_graphic_pane_g4_cp1

0xc3a5,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xc3a5,	// (0x000126a3) list_single_large_graphic_pane_t1_cp2

0xd912,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0xd912,	// (0x00013c10) list_single_graphic_heading_pane_g1_cp2

0xd8e1,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd8e1,	// (0x00013bdf) list_single_graphic_heading_pane_g4_cp2

0xc34b,	// (0x00012649) list_single_graphic_heading_pane_g5_cp2

0xd91e,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0xd91e,	// (0x00013c1c) list_single_graphic_heading_pane_t1_cp2

0xd934,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd934,	// (0x00013c32) list_single_graphic_heading_pane_t2_cp2

0xd8d5,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2_ParamLimits

0xd8d5,	// (0x00013bd3) list_single_2graphic_pane_g1_cp2

0xd8e1,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd8e1,	// (0x00013bdf) list_single_2graphic_pane_g2_cp2

0xc34b,	// (0x00012649) list_single_2graphic_pane_g3_cp2

0xd8f0,	// (0x00013bee) list_single_2graphic_pane_g4_cp2_ParamLimits

0xd8f0,	// (0x00013bee) list_single_2graphic_pane_g4_cp2

0xd8fc,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2_ParamLimits

0xd8fc,	// (0x00013bfa) list_single_2graphic_pane_t1_cp2

0xa81b,	// (0x00010b19) list_highlight_pane_g10_cp1

0xd4cf,	// (0x000137cd) list_highlight_pane_g1_cp1

0xd4d7,	// (0x000137d5) list_highlight_pane_g2_cp1

0xd4df,	// (0x000137dd) list_highlight_pane_g3_cp1

0xd4e7,	// (0x000137e5) list_highlight_pane_g4_cp1

0xd4ef,	// (0x000137ed) list_highlight_pane_g5_cp1

0xd4f7,	// (0x000137f5) list_highlight_pane_g6_cp1

0xd4ff,	// (0x000137fd) list_highlight_pane_g7_cp1

0xd507,	// (0x00013805) list_highlight_pane_g8_cp1

0xd50f,	// (0x0001380d) list_highlight_pane_g9_cp1

0xd3f7,	// (0x000136f5) form_field_slider_pane_t3

0xd405,	// (0x00013703) form_field_slider_pane_t4

0xd413,	// (0x00013711) slider_form_pane_ParamLimits

0xd413,	// (0x00013711) slider_form_pane

0xa825,	// (0x00010b23) control_abbreviations

0xa825,	// (0x00010b23) control_conventions

0xa825,	// (0x00010b23) control_definitions

0xa825,	// (0x00010b23) format_table_attribute

0xdbbf,	// (0x00013ebd) bg_popup_preview_window_pane_g9

0xa825,	// (0x00010b23) format_table_data2

0xa825,	// (0x00010b23) format_table_data3

0xa825,	// (0x00010b23) format_table_data_example

0x0008,

0xa825,	// (0x00010b23) intro_purpose

0xf8ea,	// (0x00015be8) bg_popup_preview_window_pane_g

0xa825,	// (0x00010b23) texts_category

0xa825,	// (0x00010b23) texts_graphics

0xc3bb,	// (0x000126b9) text_digital

0xc3ca,	// (0x000126c8) text_primary

0xc3d9,	// (0x000126d7) text_primary_small

0xc3e8,	// (0x000126e6) text_secondary

0xc3f7,	// (0x000126f5) text_title

0xe328,	// (0x00014626) bg_passive_tab_pane_g1_cp3_srt

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp3_srt

0xe331,	// (0x0001462f) bg_passive_tab_pane_g3_cp3_srt

0xa905,	// (0x00010c03) bg_active_tab_pane_cp3_srt_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp3_srt

0xe33a,	// (0x00014638) tabs_4_active_pane_srt_g1

0xe342,	// (0x00014640) tabs_4_active_pane_srt_t1_ParamLimits

0xe342,	// (0x00014640) tabs_4_active_pane_srt_t1

0xe328,	// (0x00014626) bg_active_tab_pane_g1_cp3_copy1

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp3_copy1

0xe331,	// (0x0001462f) bg_active_tab_pane_g3_cp3_copy1

0xa905,	// (0x00010c03) tabs_2_long_active_pane_srt_ParamLimits

0xa905,	// (0x00010c03) tabs_2_long_active_pane_srt

0xa905,	// (0x00010c03) tabs_2_long_passive_pane_srt_ParamLimits

0xa905,	// (0x00010c03) tabs_2_long_passive_pane_srt

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp4_srt_ParamLimits

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp4_srt

0xdfe7,	// (0x000142e5) bg_passive_tab_pane_g1_cp4_srt

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp4_srt

0xdff0,	// (0x000142ee) bg_passive_tab_pane_g3_cp4_srt

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp4_srt_ParamLimits

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp4_srt

0xdff9,	// (0x000142f7) tabs_2_long_active_pane_srt_t1_ParamLimits

0xdff9,	// (0x000142f7) tabs_2_long_active_pane_srt_t1

0xdfe7,	// (0x000142e5) bg_active_tab_pane_g1_cp4_srt

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp4_srt

0xdff0,	// (0x000142ee) bg_active_tab_pane_g3_cp4_srt

0xab90,	// (0x00010e8e) tabs_3_long_active_pane_srt_ParamLimits

0xab90,	// (0x00010e8e) tabs_3_long_active_pane_srt

0xab90,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xab90,	// (0x00010e8e) tabs_3_long_passive_pane_cp_srt

0xab90,	// (0x00010e8e) tabs_3_long_passive_pane_srt_ParamLimits

0xab90,	// (0x00010e8e) tabs_3_long_passive_pane_srt

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp5_srt_ParamLimits

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp5_srt

0xc0f9,	// (0x000123f7) bg_passive_tab_pane_g1_cp5_srt

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp5_srt

0xc102,	// (0x00012400) bg_passive_tab_pane_g3_cp5_srt

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp5_srt_ParamLimits

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp5_srt

0xdfd5,	// (0x000142d3) tabs_3_long_active_pane_srt_t1_ParamLimits

0xdfd5,	// (0x000142d3) tabs_3_long_active_pane_srt_t1

0xc0f9,	// (0x000123f7) bg_active_tab_pane_g1_cp5_srt

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp5_srt

0xc102,	// (0x00012400) bg_active_tab_pane_g3_cp5_srt

0xdfc7,	// (0x000142c5) navi_text_pane_srt_t1

0xdfbf,	// (0x000142bd) navi_icon_pane_srt_g1

0xc5be,	// (0x000128bc) midp_editing_number_pane_srt

0xc406,	// (0x00012704) midp_ticker_pane_srt

0xc5c6,	// (0x000128c4) midp_ticker_pane_srt_g1

0xc5ce,	// (0x000128cc) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x00015a6b) midp_ticker_pane_srt_g

0xc5d6,	// (0x000128d4) midp_ticker_pane_srt_t1

0xdfb0,	// (0x000142ae) midp_editing_number_pane_t1_copy1

0xc40e,	// (0x0001270c) listscroll_midp_pane

0xc40e,	// (0x0001270c) midp_form_pane

0xc476,	// (0x00012774) midp_info_popup_window_ParamLimits

0xc476,	// (0x00012774) midp_info_popup_window

0xb80f,	// (0x00011b0d) bg_popup_sub_pane_cp50_ParamLimits

0xb80f,	// (0x00011b0d) bg_popup_sub_pane_cp50

0xd120,	// (0x0001341e) listscroll_midp_info_pane_ParamLimits

0xd120,	// (0x0001341e) listscroll_midp_info_pane

0xd100,	// (0x000133fe) listscroll_form_midp_pane_ParamLimits

0xd100,	// (0x000133fe) listscroll_form_midp_pane

0xd10c,	// (0x0001340a) scroll_bar_cp050

0xd0e0,	// (0x000133de) list_midp_pane

0xefe3,	// (0x000152e1) signal_pane_g2_cp

0xd01a,	// (0x00013318) listscroll_midp_info_pane_t1_ParamLimits

0xd01a,	// (0x00013318) listscroll_midp_info_pane_t1

0xd032,	// (0x00013330) listscroll_midp_info_pane_t2_ParamLimits

0xd032,	// (0x00013330) listscroll_midp_info_pane_t2

0xd070,	// (0x0001336e) listscroll_midp_info_pane_t3_ParamLimits

0xd070,	// (0x0001336e) listscroll_midp_info_pane_t3

0xd0aa,	// (0x000133a8) listscroll_midp_info_pane_t4_ParamLimits

0xd0aa,	// (0x000133a8) listscroll_midp_info_pane_t4

0x0003,

0xf825,	// (0x00015b23) listscroll_midp_info_pane_t_ParamLimits

0xf825,	// (0x00015b23) listscroll_midp_info_pane_t

0xb8cb,	// (0x00011bc9) scroll_pane_cp21

0xcfbe,	// (0x000132bc) form_midp_field_choice_group_pane

0xcfc7,	// (0x000132c5) form_midp_field_text_pane

0xd000,	// (0x000132fe) form_midp_field_time_pane

0xd008,	// (0x00013306) form_midp_gauge_slider_pane

0xd011,	// (0x0001330f) form_midp_gauge_wait_pane

0xa825,	// (0x00010b23) form_midp_image_pane

0xcfa9,	// (0x000132a7) list_single_midp_pane_ParamLimits

0xcfa9,	// (0x000132a7) list_single_midp_pane

0xcf78,	// (0x00013276) form_midp_field_text_pane_t1

0xcd7a,	// (0x00013078) input_focus_pane_cp050

0xcf98,	// (0x00013296) list_midp_form_text_pane

0xcf47,	// (0x00013245) form_midp_field_choice_group_pane_t1

0xcf55,	// (0x00013253) input_focus_pane_cp051

0xcf69,	// (0x00013267) list_midp_choice_pane

0xa825,	// (0x00010b23) status_idle_pane

0xcf2b,	// (0x00013229) form_midp_field_time_pane_t1

0xa81b,	// (0x00010b19) wait_anim_pane_g2_copy1

0xcf39,	// (0x00013237) form_midp_field_time_pane_t2

0x0001,

0xc520,	// (0x0001281e) aid_navinavi_width_2_pane

0xf820,	// (0x00015b1e) form_midp_field_time_pane_t

0xa825,	// (0x00010b23) input_focus_pane_cp052

0xa825,	// (0x00010b23) bg_input_focus_pane_cp040

0xceeb,	// (0x000131e9) form_midp_gauge_slider_pane_t1

0xcef9,	// (0x000131f7) form_midp_gauge_slider_pane_t2

0xcf07,	// (0x00013205) form_midp_gauge_slider_pane_t3

0xcf15,	// (0x00013213) form_midp_gauge_slider_pane_t4

0x0003,

0xf817,	// (0x00015b15) form_midp_gauge_slider_pane_t

0xcf23,	// (0x00013221) form_midp_slider_pane

0xa905,	// (0x00010c03) bg_input_focus_pane_cp041_ParamLimits

0xa905,	// (0x00010c03) bg_input_focus_pane_cp041

0xcebb,	// (0x000131b9) form_midp_gauge_wait_pane_t1_ParamLimits

0xcebb,	// (0x000131b9) form_midp_gauge_wait_pane_t1

0xcecd,	// (0x000131cb) form_midp_gauge_wait_pane_t2_ParamLimits

0xcecd,	// (0x000131cb) form_midp_gauge_wait_pane_t2

0x0001,

0xf812,	// (0x00015b10) form_midp_gauge_wait_pane_t_ParamLimits

0xf812,	// (0x00015b10) form_midp_gauge_wait_pane_t

0xcedf,	// (0x000131dd) form_midp_wait_pane_ParamLimits

0xcedf,	// (0x000131dd) form_midp_wait_pane

0xce85,	// (0x00013183) form_midp_image_pane_g1

0xce8e,	// (0x0001318c) form_midp_image_pane_t1

0xce9d,	// (0x0001319b) form_midp_image_pane_t2

0xceac,	// (0x000131aa) form_midp_image_pane_t3

0x0002,

0xf80b,	// (0x00015b09) form_midp_image_pane_t

0xce6d,	// (0x0001316b) list_single_midp_pane_g1

0xce76,	// (0x00013174) list_single_midp_pane_t1

0xce5a,	// (0x00013158) list_midp_form_item_pane_ParamLimits

0xce5a,	// (0x00013158) list_midp_form_item_pane

0xc4c8,	// (0x000127c6) list_midp_form_item_pane_t1

0xc4d7,	// (0x000127d5) midp_ticker_pane_g1

0xc4e3,	// (0x000127e1) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00015a51) midp_ticker_pane_g

0xc4ef,	// (0x000127ed) midp_ticker_pane_t1

0xe207,	// (0x00014505) midp_editing_number_pane_t1

0xe1e5,	// (0x000144e3) midp_editing_number_pane

0xe1f4,	// (0x000144f2) midp_ticker_pane

0xdf8e,	// (0x0001428c) ai_message_heading_pane

0xa825,	// (0x00010b23) bg_popup_window_pane_cp14

0xdf96,	// (0x00014294) listscroll_ai_message_pane

0xdf18,	// (0x00014216) ai_message_heading_pane_g1_ParamLimits

0xdf18,	// (0x00014216) ai_message_heading_pane_g1

0xdf24,	// (0x00014222) ai_message_heading_pane_g2_ParamLimits

0xdf24,	// (0x00014222) ai_message_heading_pane_g2

0xdf30,	// (0x0001422e) ai_message_heading_pane_g3_ParamLimits

0xdf30,	// (0x0001422e) ai_message_heading_pane_g3

0xdf3c,	// (0x0001423a) ai_message_heading_pane_g4_ParamLimits

0xdf3c,	// (0x0001423a) ai_message_heading_pane_g4

0x0003,

0xf94c,	// (0x00015c4a) ai_message_heading_pane_g_ParamLimits

0xf94c,	// (0x00015c4a) ai_message_heading_pane_g

0xdf48,	// (0x00014246) ai_message_heading_pane_t1_ParamLimits

0xdf48,	// (0x00014246) ai_message_heading_pane_t1

0xdf62,	// (0x00014260) ai_message_heading_pane_t2_ParamLimits

0xdf62,	// (0x00014260) ai_message_heading_pane_t2

0x0001,

0xf955,	// (0x00015c53) ai_message_heading_pane_t_ParamLimits

0xf955,	// (0x00015c53) ai_message_heading_pane_t

0xdf74,	// (0x00014272) bg_popup_heading_pane_cp1_ParamLimits

0xdf74,	// (0x00014272) bg_popup_heading_pane_cp1

0xdf06,	// (0x00014204) list_ai_message_pane_ParamLimits

0xdf06,	// (0x00014204) list_ai_message_pane

0xb8cb,	// (0x00011bc9) scroll_pane_cp10

0xdea2,	// (0x000141a0) list_ai_message_pane_g1

0xdeaa,	// (0x000141a8) list_ai_message_pane_g2

0x0001,

0xf929,	// (0x00015c27) list_ai_message_pane_g

0xdeb2,	// (0x000141b0) list_ai_message_pane_t1_ParamLimits

0xdeb2,	// (0x000141b0) list_ai_message_pane_t1

0xdec7,	// (0x000141c5) list_ai_message_pane_t2_ParamLimits

0xdec7,	// (0x000141c5) list_ai_message_pane_t2

0xdedc,	// (0x000141da) list_ai_message_pane_t3_ParamLimits

0xdedc,	// (0x000141da) list_ai_message_pane_t3

0xdef1,	// (0x000141ef) list_ai_message_pane_t4_ParamLimits

0xdef1,	// (0x000141ef) list_ai_message_pane_t4

0x0003,

0xf92e,	// (0x00015c2c) list_ai_message_pane_t_ParamLimits

0xf92e,	// (0x00015c2c) list_ai_message_pane_t

0xde90,	// (0x0001418e) cell_ai_soft_ind_pane_ParamLimits

0xde90,	// (0x0001418e) cell_ai_soft_ind_pane

0xc501,	// (0x000127ff) cell_ai_soft_ind_pane_g1_ParamLimits

0xc501,	// (0x000127ff) cell_ai_soft_ind_pane_g1

0xa825,	// (0x00010b23) grid_highlight_cp1

0xc50e,	// (0x0001280c) text_secondary_cp56_ParamLimits

0xc50e,	// (0x0001280c) text_secondary_cp56

0xde65,	// (0x00014163) example_general_pane_ParamLimits

0xde65,	// (0x00014163) example_general_pane

0xde71,	// (0x0001416f) example_parent_pane_g1_ParamLimits

0xde71,	// (0x0001416f) example_parent_pane_g1

0xde7d,	// (0x0001417b) example_parent_pane_t1_ParamLimits

0xde7d,	// (0x0001417b) example_parent_pane_t1

0x91cf,	// (0x0000f4cd) popup_preview_text_window_ParamLimits

0x91cf,	// (0x0000f4cd) popup_preview_text_window

0xc337,	// (0x00012635) list_single_pane_cp2_g4

0xac46,	// (0x00010f44) bg_popup_preview_window_pane_ParamLimits

0xac46,	// (0x00010f44) bg_popup_preview_window_pane

0xdbc7,	// (0x00013ec5) popup_preview_text_window_t1_ParamLimits

0xdbc7,	// (0x00013ec5) popup_preview_text_window_t1

0xdbe5,	// (0x00013ee3) popup_preview_text_window_t2_ParamLimits

0xdbe5,	// (0x00013ee3) popup_preview_text_window_t2

0xdc2e,	// (0x00013f2c) popup_preview_text_window_t3_ParamLimits

0xdc2e,	// (0x00013f2c) popup_preview_text_window_t3

0xdc73,	// (0x00013f71) popup_preview_text_window_t4_ParamLimits

0xdc73,	// (0x00013f71) popup_preview_text_window_t4

0x0004,

0xf8fd,	// (0x00015bfb) popup_preview_text_window_t_ParamLimits

0xf8fd,	// (0x00015bfb) popup_preview_text_window_t

0xdcf1,	// (0x00013fef) scroll_pane_cp11

0xcc64,	// (0x00012f62) bg_popup_preview_window_pane_g1

0xdb87,	// (0x00013e85) bg_popup_preview_window_pane_g2

0xdb8f,	// (0x00013e8d) bg_popup_preview_window_pane_g3

0xdb97,	// (0x00013e95) bg_popup_preview_window_pane_g4

0xdb9f,	// (0x00013e9d) bg_popup_preview_window_pane_g5

0xdba7,	// (0x00013ea5) bg_popup_preview_window_pane_g6

0xdbaf,	// (0x00013ead) bg_popup_preview_window_pane_g7

0xdbb7,	// (0x00013eb5) bg_popup_preview_window_pane_g8

0x84e7,	// (0x0000e7e5) aid_popup_width_pane

0x91b1,	// (0x0000f4af) popup_midp_note_alarm_window_ParamLimits

0x91b1,	// (0x0000f4af) popup_midp_note_alarm_window

0xb5ca,	// (0x000118c8) data_form_pane_ParamLimits

0xb5d6,	// (0x000118d4) form_field_data_pane_g1

0xb5de,	// (0x000118dc) form_field_data_pane_t1_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_ParamLimits

0xb604,	// (0x00011902) data_form_wide_pane_ParamLimits

0xb615,	// (0x00011913) form_field_data_wide_pane_g1

0xb641,	// (0x0001193f) form_field_data_wide_pane_t1_ParamLimits

0xaed8,	// (0x000111d6) input_focus_pane_cp6_ParamLimits

0xb878,	// (0x00011b76) input_popup_find_pane_g1_ParamLimits

0xb878,	// (0x00011b76) input_popup_find_pane_g1

0x8a05,	// (0x0000ed03) aid_navi_side_left_pane

0x8a16,	// (0x0000ed14) aid_navi_side_right_pane

0xd5b8,	// (0x000138b6) bg_popup_window_pane_cp30_ParamLimits

0xd5b8,	// (0x000138b6) bg_popup_window_pane_cp30

0xd632,	// (0x00013930) popup_midp_note_alarm_window_g1_ParamLimits

0xd632,	// (0x00013930) popup_midp_note_alarm_window_g1

0xd662,	// (0x00013960) popup_midp_note_alarm_window_t1_ParamLimits

0xd662,	// (0x00013960) popup_midp_note_alarm_window_t1

0xd703,	// (0x00013a01) popup_midp_note_alarm_window_t2_ParamLimits

0xd703,	// (0x00013a01) popup_midp_note_alarm_window_t2

0xd7b1,	// (0x00013aaf) popup_midp_note_alarm_window_t3_ParamLimits

0xd7b1,	// (0x00013aaf) popup_midp_note_alarm_window_t3

0xd7d9,	// (0x00013ad7) popup_midp_note_alarm_window_t4_ParamLimits

0xd7d9,	// (0x00013ad7) popup_midp_note_alarm_window_t4

0xd7f9,	// (0x00013af7) popup_midp_note_alarm_window_t5_ParamLimits

0xd7f9,	// (0x00013af7) popup_midp_note_alarm_window_t5

0x000a,

0xf89a,	// (0x00015b98) popup_midp_note_alarm_window_t_ParamLimits

0xf89a,	// (0x00015b98) popup_midp_note_alarm_window_t

0xd8a5,	// (0x00013ba3) wait_bar_pane_cp1_ParamLimits

0xd8a5,	// (0x00013ba3) wait_bar_pane_cp1

0xa825,	// (0x00010b23) wait_anim_pane_copy1

0xa825,	// (0x00010b23) wait_border_pane_copy1

0xd2c4,	// (0x000135c2) wait_border_pane_g1_copy1

0xb65b,	// (0x00011959) form_field_popup_pane_g1

0xb663,	// (0x00011961) form_field_popup_pane_t1_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_cp7_ParamLimits

0xb67b,	// (0x00011979) list_form_pane_ParamLimits

0xb687,	// (0x00011985) form_field_popup_wide_pane_g1

0xb68f,	// (0x0001198d) form_field_popup_wide_pane_t1_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_cp8_ParamLimits

0xb6a4,	// (0x000119a2) list_form_wide_pane_ParamLimits

0xe3b4,	// (0x000146b2) aid_size_cell_graphic_pane

0xb77f,	// (0x00011a7d) data_form_pane_t1_ParamLimits

0xe1b3,	// (0x000144b1) data_form_wide_pane_t1_ParamLimits

0xc819,	// (0x00012b17) bg_status_flat_pane

0xa865,	// (0x00010b63) title_pane_t1_ParamLimits

0xa8cd,	// (0x00010bcb) title_pane_t2_ParamLimits

0xa8f3,	// (0x00010bf1) title_pane_t3_ParamLimits

0xf557,	// (0x00015855) title_pane_t_ParamLimits

0xbd3e,	// (0x0001203c) level_1_signal_ParamLimits

0xbd4b,	// (0x00012049) level_2_signal_ParamLimits

0xbd58,	// (0x00012056) level_3_signal_ParamLimits

0xbd65,	// (0x00012063) level_4_signal_ParamLimits

0xbd72,	// (0x00012070) level_5_signal_ParamLimits

0xbd7f,	// (0x0001207d) level_6_signal_ParamLimits

0xbd8c,	// (0x0001208a) level_7_signal_ParamLimits

0xbd3e,	// (0x0001203c) level_1_battery_ParamLimits

0xbd4b,	// (0x00012049) level_2_battery_ParamLimits

0xbd58,	// (0x00012056) level_3_battery_ParamLimits

0xbd65,	// (0x00012063) level_4_battery_ParamLimits

0xbd72,	// (0x00012070) level_5_battery_ParamLimits

0xbd7f,	// (0x0001207d) level_6_battery_ParamLimits

0xbd8c,	// (0x0001208a) level_7_battery_ParamLimits

0xd4cf,	// (0x000137cd) bg_status_flat_pane_g1

0xd4d7,	// (0x000137d5) bg_status_flat_pane_g2

0xd4df,	// (0x000137dd) bg_status_flat_pane_g3

0xd4e7,	// (0x000137e5) bg_status_flat_pane_g4

0xd4ef,	// (0x000137ed) bg_status_flat_pane_g5

0xd4f7,	// (0x000137f5) bg_status_flat_pane_g6

0xd4ff,	// (0x000137fd) bg_status_flat_pane_g7

0xa91b,	// (0x00010c19) tabs_3_active_pane_t1_ParamLimits

0xa91b,	// (0x00010c19) tabs_3_passive_pane_t1_ParamLimits

0xa935,	// (0x00010c33) tabs_4_active_pane_t1_ParamLimits

0xa935,	// (0x00010c33) tabs_4_1_passive_pane_t1_ParamLimits

0xb90b,	// (0x00011c09) tabs_2_active_pane_t1_ParamLimits

0xb90b,	// (0x00011c09) tabs_2_passive_pane_t1_ParamLimits

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp4_ParamLimits

0xb92b,	// (0x00011c29) tabs_2_long_active_pane_t1_ParamLimits

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp4_ParamLimits

0x94aa,	// (0x0000f7a8) list_single_midp_graphic_pane_t1_ParamLimits

0xb91d,	// (0x00011c1b) bg_active_tab_pane_cp5_ParamLimits

0xb94a,	// (0x00011c48) tabs_3_long_active_pane_t1_ParamLimits

0xb93e,	// (0x00011c3c) bg_passive_tab_pane_cp5_ParamLimits

0x94aa,	// (0x0000f7a8) list_single_midp_graphic_pane_t1

0xc819,	// (0x00012b17) bg_status_flat_pane_ParamLimits

0xc8dc,	// (0x00012bda) indicator_pane_cp2_ParamLimits

0xc8dc,	// (0x00012bda) indicator_pane_cp2

0xca01,	// (0x00012cff) navi_pane_srt_ParamLimits

0xca01,	// (0x00012cff) navi_pane_srt

0xca25,	// (0x00012d23) popup_clock_digital_analogue_window_cp1

0xa9f6,	// (0x00010cf4) indicator_pane_t1

0xc406,	// (0x00012704) copy_highlight_pane

0xc406,	// (0x00012704) cursor_graphics_pane

0xc406,	// (0x00012704) graphic_within_text_pane

0xc406,	// (0x00012704) link_highlight_pane

0xdcb4,	// (0x00013fb2) popup_preview_text_window_t5_ParamLimits

0xdcb4,	// (0x00013fb2) popup_preview_text_window_t5

0xc528,	// (0x00012826) cursor_digital_pane

0xc528,	// (0x00012826) cursor_primary_pane

0xc539,	// (0x00012837) cursor_primary_small_pane

0xc541,	// (0x0001283f) cursor_secondary_pane

0xc549,	// (0x00012847) cursor_title_pane

0xc528,	// (0x00012826) link_highlight_digital_pane

0xc530,	// (0x0001282e) link_highlight_primary_pane

0xc539,	// (0x00012837) link_highlight_primary_small_pane

0xc541,	// (0x0001283f) link_highlight_secondary_pane

0xc549,	// (0x00012847) link_highlight_title_pane

0xc528,	// (0x00012826) copy_highlight_digital_pane

0xc528,	// (0x00012826) copy_highlight_primary_pane

0xc539,	// (0x00012837) copy_highlight_primary_small_pane

0xc541,	// (0x0001283f) copy_highlight_secondary_pane

0xc549,	// (0x00012847) copy_highlight_title_pane

0xc541,	// (0x0001283f) graphic_text_digital_pane

0xd567,	// (0x00013865) graphic_text_primary_pane

0xd570,	// (0x0001386e) graphic_text_primary_small_pane

0xc539,	// (0x00012837) graphic_text_secondary_pane

0xc528,	// (0x00012826) graphic_text_title_pane

0xc551,	// (0x0001284f) cursor_primary_pane_g1

0xd559,	// (0x00013857) cursor_text_primary_t1

0xd543,	// (0x00013841) cursor_primary_small_pane_g1

0xd54b,	// (0x00013849) cursor_text_primary_small_t1

0xd52d,	// (0x0001382b) cursor_primary_small_pane_g1_copy1

0xd535,	// (0x00013833) cursor_text_primary_small_t1_copy1

0xd517,	// (0x00013815) cursor_text_title_t1

0xd525,	// (0x00013823) cursor_title_pane_g1

0xc551,	// (0x0001284f) cursor_digital_pane_g1

0xc559,	// (0x00012857) cursor_text_digital_t1

0xc567,	// (0x00012865) link_highlight_primary_pane_g1

0xd4c0,	// (0x000137be) link_highlight_primary_pane_t1

0xc567,	// (0x00012865) link_highlight_primary_small_pane_g1

0xc56f,	// (0x0001286d) link_highlight_primary_small_pane_t1

0xc57e,	// (0x0001287c) link_highlight_secondary_pane_g1

0xc586,	// (0x00012884) link_highlight_secondary_pane_t1

0xd425,	// (0x00013723) link_highlight_title_pane_g1

0xd43c,	// (0x0001373a) link_highlight_title_pane_t1

0xd425,	// (0x00013723) link_highlight_digital_pane_g1

0xd42d,	// (0x0001372b) link_highlight_digital_pane_t1

0xd2df,	// (0x000135dd) copy_highlight_primary_pane_g1

0xd305,	// (0x00013603) copy_highlight_primary_pane_t1

0xd2df,	// (0x000135dd) copy_highlight_primary_small_pane_g1

0xd2f6,	// (0x000135f4) copy_highlight_primary_small_pane_t1

0xc595,	// (0x00012893) copy_highlight_secondary_pane_g1

0xc59d,	// (0x0001289b) copy_highlight_secondary_pane_t1

0xd2df,	// (0x000135dd) copy_highlight_title_pane_g1

0xd2e7,	// (0x000135e5) copy_highlight_title_pane_t1

0xd2df,	// (0x000135dd) copy_highlight_digital_pane_g1

0xe57a,	// (0x00014878) copy_highlight_digital_pane_t1

0xe4ce,	// (0x000147cc) graphic_text_primary_pane_g1

0xe55e,	// (0x0001485c) graphic_text_primary_pane_t1

0xe56c,	// (0x0001486a) graphic_text_primary_pane_t2

0x0001,

0xf9c9,	// (0x00015cc7) graphic_text_primary_pane_t

0xe53a,	// (0x00014838) graphic_text_primary_small_pane_g1

0xe542,	// (0x00014840) graphic_text_primary_small_pane_t1

0xe550,	// (0x0001484e) graphic_text_primary_small_pane_t2

0x0001,

0xf9c4,	// (0x00015cc2) graphic_text_primary_small_pane_t

0xe516,	// (0x00014814) graphic_text_secondary_pane_g1

0xe51e,	// (0x0001481c) graphic_text_secondary_pane_t1

0xe52c,	// (0x0001482a) graphic_text_secondary_pane_t2

0x0001,

0xf9bf,	// (0x00015cbd) graphic_text_secondary_pane_t

0xe4f2,	// (0x000147f0) graphic_text_title_pane_g1

0xe4fa,	// (0x000147f8) graphic_text_title_pane_t1

0xe508,	// (0x00014806) graphic_text_title_pane_t2

0x0001,

0xf9ba,	// (0x00015cb8) graphic_text_title_pane_t

0xe4ce,	// (0x000147cc) graphic_text_digital_pane_g1

0xe4d6,	// (0x000147d4) graphic_text_digital_pane_t1

0xe4e4,	// (0x000147e2) graphic_text_digital_pane_t2

0x0001,

0xf9b5,	// (0x00015cb3) graphic_text_digital_pane_t

0xa905,	// (0x00010c03) navi_icon_pane_srt_ParamLimits

0xa905,	// (0x00010c03) navi_icon_pane_srt

0xa825,	// (0x00010b23) navi_midp_pane_srt

0xa825,	// (0x00010b23) navi_navi_pane_srt

0xa905,	// (0x00010c03) navi_text_pane_srt_ParamLimits

0xa905,	// (0x00010c03) navi_text_pane_srt

0xe499,	// (0x00014797) navi_navi_icon_text_pane_srt

0xe4a1,	// (0x0001479f) navi_navi_pane_srt_g1_ParamLimits

0xe4a1,	// (0x0001479f) navi_navi_pane_srt_g1

0xe4b3,	// (0x000147b1) navi_navi_pane_srt_g2_ParamLimits

0xe4b3,	// (0x000147b1) navi_navi_pane_srt_g2

0x0001,

0xf9b0,	// (0x00015cae) navi_navi_pane_srt_g_ParamLimits

0xf9b0,	// (0x00015cae) navi_navi_pane_srt_g

0xe4c5,	// (0x000147c3) navi_navi_tabs_pane_srt

0xe499,	// (0x00014797) navi_navi_text_pane_srt

0xe499,	// (0x00014797) navi_navi_volume_pane_srt

0xe48a,	// (0x00014788) navi_navi_text_pane_srt_t1

0x980c,	// (0x0000fb0a) navi_navi_volume_pane_srt_g1

0x9814,	// (0x0000fb12) volume_small_pane_srt_ParamLimits

0x9814,	// (0x0000fb12) volume_small_pane_srt

0x8cc0,	// (0x0000efbe) volume_small_pane_srt_g1_ParamLimits

0x8cc0,	// (0x0000efbe) volume_small_pane_srt_g1

0x8cd0,	// (0x0000efce) volume_small_pane_srt_g2_ParamLimits

0x8cd0,	// (0x0000efce) volume_small_pane_srt_g2

0x8ce1,	// (0x0000efdf) volume_small_pane_srt_g3_ParamLimits

0x8ce1,	// (0x0000efdf) volume_small_pane_srt_g3

0x8cf2,	// (0x0000eff0) volume_small_pane_srt_g4_ParamLimits

0x8cf2,	// (0x0000eff0) volume_small_pane_srt_g4

0x8d03,	// (0x0000f001) volume_small_pane_srt_g5_ParamLimits

0x8d03,	// (0x0000f001) volume_small_pane_srt_g5

0x8d14,	// (0x0000f012) volume_small_pane_srt_g6_ParamLimits

0x8d14,	// (0x0000f012) volume_small_pane_srt_g6

0x8d25,	// (0x0000f023) volume_small_pane_srt_g7_ParamLimits

0x8d25,	// (0x0000f023) volume_small_pane_srt_g7

0x8d36,	// (0x0000f034) volume_small_pane_srt_g8_ParamLimits

0x8d36,	// (0x0000f034) volume_small_pane_srt_g8

0x8d47,	// (0x0000f045) volume_small_pane_srt_g9_ParamLimits

0x8d47,	// (0x0000f045) volume_small_pane_srt_g9

0x8d58,	// (0x0000f056) volume_small_pane_srt_g10_ParamLimits

0x8d58,	// (0x0000f056) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x00015a56) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x00015a56) volume_small_pane_srt_g

0xacef,	// (0x00010fed) query_popup_data_pane_cp2

0xe470,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1_ParamLimits

0xe470,	// (0x0001476e) navi_navi_icon_text_pane_srt_t1

0xd567,	// (0x00013865) navi_tabs_2_long_pane_srt

0xd567,	// (0x00013865) navi_tabs_2_pane_srt

0xd567,	// (0x00013865) navi_tabs_3_long_pane_srt

0xd567,	// (0x00013865) navi_tabs_3_pane_srt

0xd567,	// (0x00013865) navi_tabs_4_pane_srt

0x97ec,	// (0x0000faea) tabs_2_active_pane_srt_ParamLimits

0x97ec,	// (0x0000faea) tabs_2_active_pane_srt

0x97fc,	// (0x0000fafa) tabs_2_passive_pane_srt_ParamLimits

0x97fc,	// (0x0000fafa) tabs_2_passive_pane_srt

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp1_srt_ParamLimits

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp1_srt

0xe43c,	// (0x0001473a) bg_passive_tab_pane_g1_cp1_srt

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp1_srt

0xe445,	// (0x00014743) bg_passive_tab_pane_g3_cp1_srt

0xa905,	// (0x00010c03) bg_active_tab_pane_cp1_srt_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp1_srt

0xe44e,	// (0x0001474c) tabs_2_active_pane_srt_g1

0xe456,	// (0x00014754) tabs_2_active_pane_srt_t1_ParamLimits

0xe456,	// (0x00014754) tabs_2_active_pane_srt_t1

0xe43c,	// (0x0001473a) bg_active_tab_pane_g1_cp1_srt

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp1_srt

0xe445,	// (0x00014743) bg_active_tab_pane_g3_cp1_srt

0x97b9,	// (0x0000fab7) tabs_3_active_pane_srt_ParamLimits

0x97b9,	// (0x0000fab7) tabs_3_active_pane_srt

0x97ca,	// (0x0000fac8) tabs_3_passive_pane_cp_srt_ParamLimits

0x97ca,	// (0x0000fac8) tabs_3_passive_pane_cp_srt

0x97db,	// (0x0000fad9) tabs_3_passive_pane_srt_ParamLimits

0x97db,	// (0x0000fad9) tabs_3_passive_pane_srt

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp2_srt_ParamLimits

0xc748,	// (0x00012a46) bg_passive_tab_pane_cp2_srt

0xc5ac,	// (0x000128aa) bg_passive_tab_pane_g1_cp2_srt

0xc073,	// (0x00012371) bg_passive_tab_pane_g2_cp2_srt

0xc5b5,	// (0x000128b3) bg_passive_tab_pane_g3_cp2_srt

0xa905,	// (0x00010c03) bg_active_tab_pane_cp2_srt_ParamLimits

0xa905,	// (0x00010c03) bg_active_tab_pane_cp2_srt

0xe422,	// (0x00014720) tabs_3_active_pane_srt_g1

0xe42a,	// (0x00014728) tabs_3_active_pane_srt_t1_ParamLimits

0xe42a,	// (0x00014728) tabs_3_active_pane_srt_t1

0xc5ac,	// (0x000128aa) bg_active_tab_pane_g1_cp2_srt

0xc073,	// (0x00012371) bg_active_tab_pane_g2_cp2_srt

0xc5b5,	// (0x000128b3) bg_active_tab_pane_g3_cp2_srt

0x9771,	// (0x0000fa6f) tabs_4_active_pane_srt_ParamLimits

0x9771,	// (0x0000fa6f) tabs_4_active_pane_srt

0x9783,	// (0x0000fa81) tabs_4_passive_pane_cp2_srt_ParamLimits

0x9783,	// (0x0000fa81) tabs_4_passive_pane_cp2_srt

0x8ec4,	// (0x0000f1c2) aid_size_cell_toolbar

0xb93e,	// (0x00011c3c) main_idle_act_pane_ParamLimits

0x9057,	// (0x0000f355) popup_large_graphic_colour_window_ParamLimits

0x931c,	// (0x0000f61a) popup_toolbar_window_ParamLimits

0x931c,	// (0x0000f61a) popup_toolbar_window

0xe228,	// (0x00014526) list_single_graphic_2heading_pane_ParamLimits

0xe228,	// (0x00014526) list_single_graphic_2heading_pane

0xbafa,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane

0xbb0c,	// (0x00011e0a) aid_size_cell_apps_grid_prt_pane

0xc748,	// (0x00012a46) bg_wml_button_pane_cp1_ParamLimits

0xc748,	// (0x00012a46) bg_wml_button_pane_cp1

0xcf78,	// (0x00013276) form_midp_field_text_pane_t1_ParamLimits

0xcd7a,	// (0x00013078) input_focus_pane_cp050_ParamLimits

0xcf98,	// (0x00013296) list_midp_form_text_pane_ParamLimits

0xcf55,	// (0x00013253) input_focus_pane_cp051_ParamLimits

0xcf69,	// (0x00013267) list_midp_choice_pane_ParamLimits

0xce2a,	// (0x00013128) list_single_2graphic_pane_cp3_ParamLimits

0xce2a,	// (0x00013128) list_single_2graphic_pane_cp3

0xce3c,	// (0x0001313a) list_single_midp_graphic_pane_ParamLimits

0xce3c,	// (0x0001313a) list_single_midp_graphic_pane

0x93b9,	// (0x0000f6b7) list_single_graphic_2heading_pane_g1_ParamLimits

0x93b9,	// (0x0000f6b7) list_single_graphic_2heading_pane_g1

0x93c5,	// (0x0000f6c3) list_single_graphic_2heading_pane_g4_ParamLimits

0x93c5,	// (0x0000f6c3) list_single_graphic_2heading_pane_g4

0x93d1,	// (0x0000f6cf) list_single_graphic_2heading_pane_g5_ParamLimits

0x93d1,	// (0x0000f6cf) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x00015aa9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x00015aa9) list_single_graphic_2heading_pane_g

0x93dd,	// (0x0000f6db) list_single_graphic_2heading_pane_t1_ParamLimits

0x93dd,	// (0x0000f6db) list_single_graphic_2heading_pane_t1

0x93f1,	// (0x0000f6ef) list_single_graphic_2heading_pane_t2_ParamLimits

0x93f1,	// (0x0000f6ef) list_single_graphic_2heading_pane_t2

0x940b,	// (0x0000f709) list_single_graphic_2heading_pane_t3_ParamLimits

0x940b,	// (0x0000f709) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x00015ab0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x00015ab0) list_single_graphic_2heading_pane_t

0xcb76,	// (0x00012e74) bg_popup_sub_pane_cp2

0xcba0,	// (0x00012e9e) grid_toobar_pane

0x9423,	// (0x0000f721) cell_toolbar_pane_ParamLimits

0x9423,	// (0x0000f721) cell_toolbar_pane

0xcc08,	// (0x00012f06) cell_toolbar_pane_g1_ParamLimits

0xcc08,	// (0x00012f06) cell_toolbar_pane_g1

0xcc1c,	// (0x00012f1a) cell_toolbar_pane_g2_ParamLimits

0xcc1c,	// (0x00012f1a) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x00015abe) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x00015abe) cell_toolbar_pane_g

0xcc3e,	// (0x00012f3c) grid_highlight_pane_cp2_ParamLimits

0xcc3e,	// (0x00012f3c) grid_highlight_pane_cp2

0xcc58,	// (0x00012f56) toolbar_button_pane

0xcc64,	// (0x00012f62) toolbar_button_pane_g1

0xcc6c,	// (0x00012f6a) toolbar_button_pane_g2

0xcc74,	// (0x00012f72) toolbar_button_pane_g3

0xcc7c,	// (0x00012f7a) toolbar_button_pane_g4

0xcc84,	// (0x00012f82) toolbar_button_pane_g5

0xcc8c,	// (0x00012f8a) toolbar_button_pane_g6

0xcc94,	// (0x00012f92) toolbar_button_pane_g7

0xcc9c,	// (0x00012f9a) toolbar_button_pane_g8

0xcca4,	// (0x00012fa2) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x00015ac3) toolbar_button_pane_g

0x9455,	// (0x0000f753) list_single_2graphic_pane_g1_cp3_ParamLimits

0x9455,	// (0x0000f753) list_single_2graphic_pane_g1_cp3

0x9461,	// (0x0000f75f) list_single_2graphic_pane_g2_cp3_ParamLimits

0x9461,	// (0x0000f75f) list_single_2graphic_pane_g2_cp3

0x9470,	// (0x0000f76e) list_single_2graphic_pane_g3_cp3

0x9478,	// (0x0000f776) list_single_2graphic_pane_g4_cp3_ParamLimits

0x9478,	// (0x0000f776) list_single_2graphic_pane_g4_cp3

0x9484,	// (0x0000f782) list_single_2graphic_pane_t1_cp3_ParamLimits

0x9484,	// (0x0000f782) list_single_2graphic_pane_t1_cp3

0x949e,	// (0x0000f79c) list_single_midp_graphic_pane_g2_ParamLimits

0x949e,	// (0x0000f79c) list_single_midp_graphic_pane_g2

0x8ecc,	// (0x0000f1ca) aid_zoom_text_primary

0x8ed4,	// (0x0000f1d2) aid_zoom_text_secondary

0xc664,	// (0x00012962) status_small_pane_g7_ParamLimits

0xc664,	// (0x00012962) status_small_pane_g7

0xc687,	// (0x00012985) status_small_pane_t1_ParamLimits

0xa83c,	// (0x00010b3a) title_pane_g2

0x0003,

0xf54e,	// (0x0001584c) title_pane_g

0xad91,	// (0x0001108f) aid_size_cell_colour_1_pane_ParamLimits

0xad91,	// (0x0001108f) aid_size_cell_colour_1_pane

0xada5,	// (0x000110a3) aid_size_cell_colour_2_pane_ParamLimits

0xada5,	// (0x000110a3) aid_size_cell_colour_2_pane

0xadb9,	// (0x000110b7) aid_size_cell_colour_3_pane_ParamLimits

0xadb9,	// (0x000110b7) aid_size_cell_colour_3_pane

0xadcd,	// (0x000110cb) aid_size_cell_colour_4_pane_ParamLimits

0xadcd,	// (0x000110cb) aid_size_cell_colour_4_pane

0x8941,	// (0x0000ec3f) title_pane_stacon_g1_ParamLimits

0x8941,	// (0x0000ec3f) title_pane_stacon_g1

0xd35c,	// (0x0001365a) popup_note_wait_window_g3_ParamLimits

0xd35c,	// (0x0001365a) popup_note_wait_window_g3

0xd3d2,	// (0x000136d0) popup_note_wait_window_t5_ParamLimits

0xd3d2,	// (0x000136d0) popup_note_wait_window_t5

0xa825,	// (0x00010b23) main_feb_china_hwr_fs_writing_pane

0x8f64,	// (0x0000f262) popup_feb_china_hwr_fs_window_ParamLimits

0x8f64,	// (0x0000f262) popup_feb_china_hwr_fs_window

0x94c0,	// (0x0000f7be) aid_size_cell_hwr_fs_ParamLimits

0x94c0,	// (0x0000f7be) aid_size_cell_hwr_fs

0xcd7a,	// (0x00013078) bg_popup_sub_pane_cp3_ParamLimits

0xcd7a,	// (0x00013078) bg_popup_sub_pane_cp3

0x94d5,	// (0x0000f7d3) grid_hwr_fs_pane_ParamLimits

0x94d5,	// (0x0000f7d3) grid_hwr_fs_pane

0x94e9,	// (0x0000f7e7) linegrid_hwr_fs_pane_ParamLimits

0x94e9,	// (0x0000f7e7) linegrid_hwr_fs_pane

0x94f9,	// (0x0000f7f7) cell_hwr_fs_pane_ParamLimits

0x94f9,	// (0x0000f7f7) cell_hwr_fs_pane

0xcd86,	// (0x00013084) linegrid_hwr_fs_pane_g1_ParamLimits

0xcd86,	// (0x00013084) linegrid_hwr_fs_pane_g1

0xcd92,	// (0x00013090) linegrid_hwr_fs_pane_g2_ParamLimits

0xcd92,	// (0x00013090) linegrid_hwr_fs_pane_g2

0xcda4,	// (0x000130a2) linegrid_hwr_fs_pane_g3_ParamLimits

0xcda4,	// (0x000130a2) linegrid_hwr_fs_pane_g3

0x9517,	// (0x0000f815) linegrid_hwr_fs_pane_g4_ParamLimits

0x9517,	// (0x0000f815) linegrid_hwr_fs_pane_g4

0x9531,	// (0x0000f82f) linegrid_hwr_fs_pane_g5_ParamLimits

0x9531,	// (0x0000f82f) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f0,	// (0x00015aee) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f0,	// (0x00015aee) linegrid_hwr_fs_pane_g

0xcdb0,	// (0x000130ae) cell_hwr_fs_pane_g1_ParamLimits

0xcdb0,	// (0x000130ae) cell_hwr_fs_pane_g1

0xcab7,	// (0x00012db5) cell_hwr_fs_pane_g2_ParamLimits

0xcab7,	// (0x00012db5) cell_hwr_fs_pane_g2

0xcdc6,	// (0x000130c4) cell_hwr_fs_pane_g3_ParamLimits

0xcdc6,	// (0x000130c4) cell_hwr_fs_pane_g3

0xcdd3,	// (0x000130d1) cell_hwr_fs_pane_g4_ParamLimits

0xcdd3,	// (0x000130d1) cell_hwr_fs_pane_g4

0x0003,

0xf7fb,	// (0x00015af9) cell_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x00015af9) cell_hwr_fs_pane_g

0x9547,	// (0x0000f845) cell_hwr_fs_pane_t1

0xa825,	// (0x00010b23) grid_highlight_pane_cp6

0xa825,	// (0x00010b23) main_idle_act2_pane

0xb8b2,	// (0x00011bb0) aid_inside_area_popup_secondary

0xd9d9,	// (0x00013cd7) aid_inside_area_window_primary_ParamLimits

0xd9d9,	// (0x00013cd7) aid_inside_area_window_primary

0xe589,	// (0x00014887) ai2_news_ticker_pane

0xe591,	// (0x0001488f) aid_size_cell_ai1_link_ParamLimits

0xe591,	// (0x0001488f) aid_size_cell_ai1_link

0xe5ab,	// (0x000148a9) popup_ai2_data_window_ParamLimits

0xe5ab,	// (0x000148a9) popup_ai2_data_window

0xe5bf,	// (0x000148bd) popup_ai2_link_window_ParamLimits

0xe5bf,	// (0x000148bd) popup_ai2_link_window

0xcd7a,	// (0x00013078) bg_popup_sub_pane_cp4_ParamLimits

0xcd7a,	// (0x00013078) bg_popup_sub_pane_cp4

0xe5d3,	// (0x000148d1) grid_ai2_link_pane_ParamLimits

0xe5d3,	// (0x000148d1) grid_ai2_link_pane

0xe5ea,	// (0x000148e8) popup_ai2_link_window_g1_ParamLimits

0xe5ea,	// (0x000148e8) popup_ai2_link_window_g1

0xe5f6,	// (0x000148f4) popup_ai2_link_window_g2_ParamLimits

0xe5f6,	// (0x000148f4) popup_ai2_link_window_g2

0x0001,

0xf9ce,	// (0x00015ccc) popup_ai2_link_window_g_ParamLimits

0xf9ce,	// (0x00015ccc) popup_ai2_link_window_g

0xe605,	// (0x00014903) ai2_mp_button_pane

0xe60d,	// (0x0001490b) ai2_mp_volume_pane

0xcf55,	// (0x00013253) bg_popup_sub_pane_cp5_ParamLimits

0xcf55,	// (0x00013253) bg_popup_sub_pane_cp5

0xe615,	// (0x00014913) heading_ai2_gene_pane_ParamLimits

0xe615,	// (0x00014913) heading_ai2_gene_pane

0xe621,	// (0x0001491f) list_ai2_gene_pane_ParamLimits

0xe621,	// (0x0001491f) list_ai2_gene_pane

0xe669,	// (0x00014967) cell_ai2_link_pane_ParamLimits

0xe669,	// (0x00014967) cell_ai2_link_pane

0xe67f,	// (0x0001497d) cell_ai2_link_pane_g1

0xa825,	// (0x00010b23) grid_highlight_pane_cp7

0x9829,	// (0x0000fb27) ai2_mp_volume_pane_g1

0xe74e,	// (0x00014a4c) ai2_mp_volume_pane_g2

0xe6c3,	// (0x000149c1) list_ai2_gene_pane_t1

0xe756,	// (0x00014a54) ai2_mp_volume_pane_g3

0x0002,

0xf9e7,	// (0x00015ce5) ai2_mp_volume_pane_g

0x9831,	// (0x0000fb2f) volume_small_pane_cp3

0xe75e,	// (0x00014a5c) aid_size_cell_ai2_button

0xe766,	// (0x00014a64) grid_ai2_button_pane

0xe76f,	// (0x00014a6d) cell_ai2_button_pane_ParamLimits

0xe76f,	// (0x00014a6d) cell_ai2_button_pane

0xa81b,	// (0x00010b19) cell_ai2_button_pane_g1

0xa825,	// (0x00010b23) grid_highlight_pane_cp8

0xe70e,	// (0x00014a0c) ai2_gene_pane_t1_ParamLimits

0xe70e,	// (0x00014a0c) ai2_gene_pane_t1

0x8eba,	// (0x0000f1b8) aid_height_parent_landscape

0xe041,	// (0x0001433f) aid_height_set_list

0xe052,	// (0x00014350) aid_size_parent

0xe3b4,	// (0x000146b2) aid_size_cell_graphic_pane_ParamLimits

0xe631,	// (0x0001492f) popup_ai2_data_window_g1_ParamLimits

0xe631,	// (0x0001492f) popup_ai2_data_window_g1

0xe63d,	// (0x0001493b) ai2_news_ticker_pane_g1

0xe645,	// (0x00014943) ai2_news_ticker_pane_g2

0x0001,

0xf9d3,	// (0x00015cd1) ai2_news_ticker_pane_g

0xe64d,	// (0x0001494b) ai2_news_ticker_pane_t1

0xe65b,	// (0x00014959) ai2_news_ticker_pane_t2

0x0001,

0xf9d8,	// (0x00015cd6) ai2_news_ticker_pane_t

0xe688,	// (0x00014986) heading_ai2_gene_pane_g1

0xe690,	// (0x0001498e) heading_ai2_gene_pane_t1_ParamLimits

0xe690,	// (0x0001498e) heading_ai2_gene_pane_t1

0xe6a5,	// (0x000149a3) list_highlight_pane_cp6

0xe6ad,	// (0x000149ab) ai2_gene_pane_ParamLimits

0xe6ad,	// (0x000149ab) ai2_gene_pane

0xe6d1,	// (0x000149cf) list_ai2_gene_pane_t2

0x0001,

0xf9dd,	// (0x00015cdb) list_ai2_gene_pane_t

0xe6df,	// (0x000149dd) list_highlight_pane_cp8_ParamLimits

0xe6df,	// (0x000149dd) list_highlight_pane_cp8

0xe6f0,	// (0x000149ee) ai2_gene_pane_g1_ParamLimits

0xe6f0,	// (0x000149ee) ai2_gene_pane_g1

0xe702,	// (0x00014a00) ai2_gene_pane_g2_ParamLimits

0xe702,	// (0x00014a00) ai2_gene_pane_g2

0x0001,

0xf9e2,	// (0x00015ce0) ai2_gene_pane_g_ParamLimits

0xf9e2,	// (0x00015ce0) ai2_gene_pane_g

0xb061,	// (0x0001135f) scroll_pane_cp12

0x8e77,	// (0x0000f175) control_pane_t3_ParamLimits

0x8e77,	// (0x0000f175) control_pane_t3

0xc678,	// (0x00012976) status_small_pane_g8_ParamLimits

0xc678,	// (0x00012976) status_small_pane_g8

0x9024,	// (0x0000f322) popup_find_window_ParamLimits

0x91c3,	// (0x0000f4c1) popup_note_image_window_ParamLimits

0xcbda,	// (0x00012ed8) list_double2_graphic_pane_vc_g1_ParamLimits

0xcbda,	// (0x00012ed8) list_double2_graphic_pane_vc_g1

0xc33f,	// (0x0001263d) list_double2_graphic_pane_vc_g2_ParamLimits

0xc33f,	// (0x0001263d) list_double2_graphic_pane_vc_g2

0xcbe6,	// (0x00012ee4) list_double2_graphic_pane_vc_g3_ParamLimits

0xcbe6,	// (0x00012ee4) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x00015ab7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x00015ab7) list_double2_graphic_pane_vc_g

0xcbf2,	// (0x00012ef0) list_double2_graphic_pane_vc_t1_ParamLimits

0xcbf2,	// (0x00012ef0) list_double2_graphic_pane_vc_t1

0xc33f,	// (0x0001263d) list_single_heading_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_single_heading_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_single_heading_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_single_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_single_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_single_heading_pane_vc_g

0xccac,	// (0x00012faa) list_single_heading_pane_vc_t1_ParamLimits

0xccac,	// (0x00012faa) list_single_heading_pane_vc_t1

0xccc2,	// (0x00012fc0) list_single_heading_pane_vc_t2_ParamLimits

0xccc2,	// (0x00012fc0) list_single_heading_pane_vc_t2

0x0001,

0xf7df,	// (0x00015add) list_single_heading_pane_vc_t_ParamLimits

0xf7df,	// (0x00015add) list_single_heading_pane_vc_t

0xccd4,	// (0x00012fd2) list_setting_number_pane_vc_g1_ParamLimits

0xccd4,	// (0x00012fd2) list_setting_number_pane_vc_g1

0xcce0,	// (0x00012fde) list_setting_number_pane_vc_g2_ParamLimits

0xcce0,	// (0x00012fde) list_setting_number_pane_vc_g2

0x0001,

0xf7e4,	// (0x00015ae2) list_setting_number_pane_vc_g_ParamLimits

0xf7e4,	// (0x00015ae2) list_setting_number_pane_vc_g

0xccec,	// (0x00012fea) list_setting_number_pane_vc_t1_ParamLimits

0xccec,	// (0x00012fea) list_setting_number_pane_vc_t1

0xcd00,	// (0x00012ffe) list_setting_number_pane_vc_t2_ParamLimits

0xcd00,	// (0x00012ffe) list_setting_number_pane_vc_t2

0xcd18,	// (0x00013016) list_setting_number_pane_vc_t3_ParamLimits

0xcd18,	// (0x00013016) list_setting_number_pane_vc_t3

0x0002,

0xf7e9,	// (0x00015ae7) list_setting_number_pane_vc_t_ParamLimits

0xf7e9,	// (0x00015ae7) list_setting_number_pane_vc_t

0xcd3e,	// (0x0001303c) set_value_pane_vc_ParamLimits

0xcd3e,	// (0x0001303c) set_value_pane_vc

0xe228,	// (0x00014526) list_double2_graphic_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double2_graphic_pane_vc

0xe228,	// (0x00014526) list_double2_large_graphic_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double2_large_graphic_pane_vc

0xe228,	// (0x00014526) list_double2_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double2_pane_vc

0xe228,	// (0x00014526) list_double_graphic_heading_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_graphic_heading_pane_vc

0xe228,	// (0x00014526) list_double_graphic_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_graphic_pane_vc

0xe228,	// (0x00014526) list_double_heading_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_heading_pane_vc

0xe239,	// (0x00014537) list_double_large_graphic_pane_vc_ParamLimits

0xe239,	// (0x00014537) list_double_large_graphic_pane_vc

0xe228,	// (0x00014526) list_double_number_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_number_pane_vc

0xe228,	// (0x00014526) list_double_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_pane_vc

0xe228,	// (0x00014526) list_double_time_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_double_time_pane_vc

0xe228,	// (0x00014526) list_setting_number_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_setting_number_pane_vc

0xe228,	// (0x00014526) list_setting_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_setting_pane_vc

0xe228,	// (0x00014526) list_single_graphic_heading_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_single_graphic_heading_pane_vc

0xe228,	// (0x00014526) list_single_heading_pane_vc_ParamLimits

0xe228,	// (0x00014526) list_single_heading_pane_vc

0xe255,	// (0x00014553) list_single_number_heading_pane_vc_ParamLimits

0xe255,	// (0x00014553) list_single_number_heading_pane_vc

0xcbda,	// (0x00012ed8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xcbda,	// (0x00012ed8) list_double_graphic_heading_pane_vc_g1

0xc33f,	// (0x0001263d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xc33f,	// (0x0001263d) list_double_graphic_heading_pane_vc_g2

0xcbe6,	// (0x00012ee4) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xcbe6,	// (0x00012ee4) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x00015ab7) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00015ab7) list_double_graphic_heading_pane_vc_g

0xe7a3,	// (0x00014aa1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xe7a3,	// (0x00014aa1) list_double_graphic_heading_pane_vc_t1

0xe7b9,	// (0x00014ab7) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xe7b9,	// (0x00014ab7) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9ee,	// (0x00015cec) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9ee,	// (0x00015cec) list_double_graphic_heading_pane_vc_t

0xccd4,	// (0x00012fd2) list_setting_pane_vc_g1_ParamLimits

0xccd4,	// (0x00012fd2) list_setting_pane_vc_g1

0xcce0,	// (0x00012fde) list_setting_pane_vc_g2_ParamLimits

0xcce0,	// (0x00012fde) list_setting_pane_vc_g2

0x0001,

0xf7e4,	// (0x00015ae2) list_setting_pane_vc_g_ParamLimits

0xf7e4,	// (0x00015ae2) list_setting_pane_vc_g

0xe9bb,	// (0x00014cb9) list_setting_pane_vc_t1_ParamLimits

0xe9bb,	// (0x00014cb9) list_setting_pane_vc_t1

0xe9d3,	// (0x00014cd1) list_setting_pane_vc_t2_ParamLimits

0xe9d3,	// (0x00014cd1) list_setting_pane_vc_t2

0x0001,

0xfa31,	// (0x00015d2f) list_setting_pane_vc_t_ParamLimits

0xfa31,	// (0x00015d2f) list_setting_pane_vc_t

0xcd3e,	// (0x0001303c) set_value_pane_cp_vc_ParamLimits

0xcd3e,	// (0x0001303c) set_value_pane_cp_vc

0xc33f,	// (0x0001263d) list_single_number_heading_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_single_number_heading_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_single_number_heading_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_single_number_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_single_number_heading_pane_vc_g

0xe9e9,	// (0x00014ce7) list_single_number_heading_pane_vc_t1_ParamLimits

0xe9e9,	// (0x00014ce7) list_single_number_heading_pane_vc_t1

0xe9ff,	// (0x00014cfd) list_single_number_heading_pane_vc_t2_ParamLimits

0xe9ff,	// (0x00014cfd) list_single_number_heading_pane_vc_t2

0xea11,	// (0x00014d0f) list_single_number_heading_pane_vc_t3_ParamLimits

0xea11,	// (0x00014d0f) list_single_number_heading_pane_vc_t3

0x0002,

0xfa36,	// (0x00015d34) list_single_number_heading_pane_vc_t_ParamLimits

0xfa36,	// (0x00015d34) list_single_number_heading_pane_vc_t

0xcbda,	// (0x00012ed8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xcbda,	// (0x00012ed8) list_single_graphic_heading_pane_vc_g1

0xc33f,	// (0x0001263d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xc33f,	// (0x0001263d) list_single_graphic_heading_pane_vc_g4

0xcbe6,	// (0x00012ee4) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xcbe6,	// (0x00012ee4) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x00015ab7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x00015ab7) list_single_graphic_heading_pane_vc_g

0xea23,	// (0x00014d21) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xea23,	// (0x00014d21) list_single_graphic_heading_pane_vc_t1

0xea39,	// (0x00014d37) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xea39,	// (0x00014d37) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa3d,	// (0x00015d3b) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa3d,	// (0x00015d3b) list_single_graphic_heading_pane_vc_t

0xc33f,	// (0x0001263d) list_double2_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_double2_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_double2_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_double2_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_double2_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_double2_pane_vc_g

0xea4b,	// (0x00014d49) list_double2_pane_vc_t1_ParamLimits

0xea4b,	// (0x00014d49) list_double2_pane_vc_t1

0xea61,	// (0x00014d5f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xea61,	// (0x00014d5f) list_double2_large_graphic_pane_vc_g1

0xc33f,	// (0x0001263d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc33f,	// (0x0001263d) list_double2_large_graphic_pane_vc_g2

0xcbe6,	// (0x00012ee4) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xcbe6,	// (0x00012ee4) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa42,	// (0x00015d40) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa42,	// (0x00015d40) list_double2_large_graphic_pane_vc_g

0xea6d,	// (0x00014d6b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xea6d,	// (0x00014d6b) list_double2_large_graphic_pane_vc_t1

0xea83,	// (0x00014d81) list_double_time_pane_vc_g1_ParamLimits

0xea83,	// (0x00014d81) list_double_time_pane_vc_g1

0xea8f,	// (0x00014d8d) list_double_time_pane_vc_g2_ParamLimits

0xea8f,	// (0x00014d8d) list_double_time_pane_vc_g2

0x0001,

0xfa49,	// (0x00015d47) list_double_time_pane_vc_g_ParamLimits

0xfa49,	// (0x00015d47) list_double_time_pane_vc_g

0xea9b,	// (0x00014d99) list_double_time_pane_vc_t1_ParamLimits

0xea9b,	// (0x00014d99) list_double_time_pane_vc_t1

0xeab9,	// (0x00014db7) list_double_time_pane_vc_t2_ParamLimits

0xeab9,	// (0x00014db7) list_double_time_pane_vc_t2

0xead7,	// (0x00014dd5) list_double_time_pane_vc_t3_ParamLimits

0xead7,	// (0x00014dd5) list_double_time_pane_vc_t3

0xeae9,	// (0x00014de7) list_double_time_pane_vc_t4_ParamLimits

0xeae9,	// (0x00014de7) list_double_time_pane_vc_t4

0x0003,

0xfa4e,	// (0x00015d4c) list_double_time_pane_vc_t_ParamLimits

0xfa4e,	// (0x00015d4c) list_double_time_pane_vc_t

0xc33f,	// (0x0001263d) list_double_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_double_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_double_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_double_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_double_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_double_pane_vc_g

0xeafb,	// (0x00014df9) list_double_pane_vc_t1_ParamLimits

0xeafb,	// (0x00014df9) list_double_pane_vc_t1

0xeb0d,	// (0x00014e0b) list_double_pane_vc_t2_ParamLimits

0xeb0d,	// (0x00014e0b) list_double_pane_vc_t2

0x0001,

0xfa57,	// (0x00015d55) list_double_pane_vc_t_ParamLimits

0xfa57,	// (0x00015d55) list_double_pane_vc_t

0xc33f,	// (0x0001263d) list_double_number_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_double_number_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_double_number_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_double_number_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_double_number_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_double_number_pane_vc_g

0xeb23,	// (0x00014e21) list_double_number_pane_vc_t1_ParamLimits

0xeb23,	// (0x00014e21) list_double_number_pane_vc_t1

0xeb35,	// (0x00014e33) list_double_number_pane_vc_t2_ParamLimits

0xeb35,	// (0x00014e33) list_double_number_pane_vc_t2

0xeb0d,	// (0x00014e0b) list_double_number_pane_vc_t3_ParamLimits

0xeb0d,	// (0x00014e0b) list_double_number_pane_vc_t3

0x0002,

0xfa5c,	// (0x00015d5a) list_double_number_pane_vc_t_ParamLimits

0xfa5c,	// (0x00015d5a) list_double_number_pane_vc_t

0xeb47,	// (0x00014e45) list_double_large_graphic_pane_vc_g1_ParamLimits

0xeb47,	// (0x00014e45) list_double_large_graphic_pane_vc_g1

0xeb63,	// (0x00014e61) list_double_large_graphic_pane_vc_g2_ParamLimits

0xeb63,	// (0x00014e61) list_double_large_graphic_pane_vc_g2

0xeb77,	// (0x00014e75) list_double_large_graphic_pane_vc_g3_ParamLimits

0xeb77,	// (0x00014e75) list_double_large_graphic_pane_vc_g3

0xeb86,	// (0x00014e84) list_double_large_graphic_pane_vc_g4_ParamLimits

0xeb86,	// (0x00014e84) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa63,	// (0x00015d61) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa63,	// (0x00015d61) list_double_large_graphic_pane_vc_g

0xeb92,	// (0x00014e90) list_double_large_graphic_pane_vc_t1_ParamLimits

0xeb92,	// (0x00014e90) list_double_large_graphic_pane_vc_t1

0xebac,	// (0x00014eaa) list_double_large_graphic_pane_vc_t2_ParamLimits

0xebac,	// (0x00014eaa) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6c,	// (0x00015d6a) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6c,	// (0x00015d6a) list_double_large_graphic_pane_vc_t

0xc33f,	// (0x0001263d) list_double_heading_pane_vc_g1_ParamLimits

0xc33f,	// (0x0001263d) list_double_heading_pane_vc_g1

0xcbe6,	// (0x00012ee4) list_double_heading_pane_vc_g2_ParamLimits

0xcbe6,	// (0x00012ee4) list_double_heading_pane_vc_g2

0x0001,

0xf7da,	// (0x00015ad8) list_double_heading_pane_vc_g_ParamLimits

0xf7da,	// (0x00015ad8) list_double_heading_pane_vc_g

0xebcc,	// (0x00014eca) list_double_heading_pane_vc_t1_ParamLimits

0xebcc,	// (0x00014eca) list_double_heading_pane_vc_t1

0xebde,	// (0x00014edc) list_double_heading_pane_vc_t2_ParamLimits

0xebde,	// (0x00014edc) list_double_heading_pane_vc_t2

0x0001,

0xfa71,	// (0x00015d6f) list_double_heading_pane_vc_t_ParamLimits

0xfa71,	// (0x00015d6f) list_double_heading_pane_vc_t

0xebf4,	// (0x00014ef2) list_double_graphic_pane_vc_g1_ParamLimits

0xebf4,	// (0x00014ef2) list_double_graphic_pane_vc_g1

0xec00,	// (0x00014efe) list_double_graphic_pane_vc_g2_ParamLimits

0xec00,	// (0x00014efe) list_double_graphic_pane_vc_g2

0xc33f,	// (0x0001263d) list_double_graphic_pane_vc_g3_ParamLimits

0xc33f,	// (0x0001263d) list_double_graphic_pane_vc_g3

0x0003,

0xfa76,	// (0x00015d74) list_double_graphic_pane_vc_g_ParamLimits

0xfa76,	// (0x00015d74) list_double_graphic_pane_vc_g

0xec1d,	// (0x00014f1b) list_double_graphic_pane_vc_t1_ParamLimits

0xec1d,	// (0x00014f1b) list_double_graphic_pane_vc_t1

0xec3b,	// (0x00014f39) list_double_graphic_pane_vc_t2_ParamLimits

0xec3b,	// (0x00014f39) list_double_graphic_pane_vc_t2

0x0001,

0xfa7f,	// (0x00015d7d) list_double_graphic_pane_vc_t_ParamLimits

0xfa7f,	// (0x00015d7d) list_double_graphic_pane_vc_t

0x84ef,	// (0x0000e7ed) aid_size_cell_fastswap

0x84f7,	// (0x0000e7f5) aid_size_cell_touch_ParamLimits

0x84f7,	// (0x0000e7f5) aid_size_cell_touch

0x8752,	// (0x0000ea50) popup_fast_swap_wide_window_ParamLimits

0x8752,	// (0x0000ea50) popup_fast_swap_wide_window

0x8818,	// (0x0000eb16) touch_pane_ParamLimits

0x8818,	// (0x0000eb16) touch_pane

0xb52e,	// (0x0001182c) button_value_adjust_pane_cp2

0xb52e,	// (0x0001182c) button_value_adjust_pane_cp4

0xb54e,	// (0x0001184c) form_field_data_pane_cp2

0xb56d,	// (0x0001186b) form_field_data_wide_pane_cp2

0xbbbf,	// (0x00011ebd) bg_scroll_pane_ParamLimits

0x8a9c,	// (0x0000ed9a) scroll_handle_pane_ParamLimits

0x8ab0,	// (0x0000edae) scroll_sc2_down_pane_ParamLimits

0x8ab0,	// (0x0000edae) scroll_sc2_down_pane

0xbbf0,	// (0x00011eee) scroll_sc2_up_pane_ParamLimits

0xbbf0,	// (0x00011eee) scroll_sc2_up_pane

0xf0a3,	// (0x000153a1) grid_wheel_folder_pane_g1_ParamLimits

0xf0a3,	// (0x000153a1) grid_wheel_folder_pane_g1

0x8c64,	// (0x0000ef62) clock_nsta_pane_cp2_ParamLimits

0x8c64,	// (0x0000ef62) clock_nsta_pane_cp2

0xc40e,	// (0x0001270c) listscroll_midp_pane_ParamLimits

0xc41a,	// (0x00012718) midp_canvas_pane

0xc6f2,	// (0x000129f0) nsta_clock_indic_pane

0xc72e,	// (0x00012a2c) listscroll_form_pane_vc

0xc736,	// (0x00012a34) listscroll_set_pane_vc_ParamLimits

0xc736,	// (0x00012a34) listscroll_set_pane_vc

0xc835,	// (0x00012b33) clock_nsta_pane

0xc8aa,	// (0x00012ba8) indicator_nsta_pane

0xcb76,	// (0x00012e74) bg_popup_sub_pane_cp2_ParamLimits

0xcb8a,	// (0x00012e88) find_pane_cp2_ParamLimits

0xcb8a,	// (0x00012e88) find_pane_cp2

0xcba0,	// (0x00012e9e) grid_toobar_pane_ParamLimits

0xcd4e,	// (0x0001304c) list_form_gen_pane_vc_ParamLimits

0xcd4e,	// (0x0001304c) list_form_gen_pane_vc

0xcd64,	// (0x00013062) scroll_pane_cp8_vc_ParamLimits

0xcd64,	// (0x00013062) scroll_pane_cp8_vc

0xcde0,	// (0x000130de) data_form_wide_pane_vc_ParamLimits

0xcde0,	// (0x000130de) data_form_wide_pane_vc

0xcdec,	// (0x000130ea) form_field_data_wide_pane_vc_g1

0xcdf4,	// (0x000130f2) form_field_data_wide_pane_vc_t1_ParamLimits

0xcdf4,	// (0x000130f2) form_field_data_wide_pane_vc_t1

0xb5f6,	// (0x000118f4) input_focus_pane_cp6_vc_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_cp6_vc

0xd0e0,	// (0x000133de) list_midp_pane_ParamLimits

0xd0ec,	// (0x000133ea) scroll_pane_cp16_ParamLimits

0xd0ec,	// (0x000133ea) scroll_pane_cp16

0xd142,	// (0x00013440) button_value_adjust_pane_ParamLimits

0xd142,	// (0x00013440) button_value_adjust_pane

0xe064,	// (0x00014362) button_value_adjust_pane_cp6_ParamLimits

0xe064,	// (0x00014362) button_value_adjust_pane_cp6

0xe16c,	// (0x0001446a) settings_code_pane_cp_ParamLimits

0xe16c,	// (0x0001446a) settings_code_pane_cp

0xa81b,	// (0x00010b19) cell_touch_pane_g1

0xa81b,	// (0x00010b19) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x000159fc) cell_touch_pane_g

0xe781,	// (0x00014a7f) cell_touch_pane_cp_ParamLimits

0xe781,	// (0x00014a7f) cell_touch_pane_cp

0xe791,	// (0x00014a8f) cell_touch_pane_ParamLimits

0xe791,	// (0x00014a8f) cell_touch_pane

0xa81b,	// (0x00010b19) scroll_sc2_down_pane_g1

0xa81b,	// (0x00010b19) scroll_sc2_up_pane_g1

0xa825,	// (0x00010b23) bg_set_opt_pane_cp4_vc

0xe7d1,	// (0x00014acf) list_set_graphic_pane_vc_g1_ParamLimits

0xe7d1,	// (0x00014acf) list_set_graphic_pane_vc_g1

0xe7dd,	// (0x00014adb) list_set_graphic_pane_vc_g2_ParamLimits

0xe7dd,	// (0x00014adb) list_set_graphic_pane_vc_g2

0x0001,

0xf9f3,	// (0x00015cf1) list_set_graphic_pane_vc_g_ParamLimits

0xf9f3,	// (0x00015cf1) list_set_graphic_pane_vc_g

0xe7e9,	// (0x00014ae7) text_primary_small_cp13_vc_ParamLimits

0xe7e9,	// (0x00014ae7) text_primary_small_cp13_vc

0xe801,	// (0x00014aff) list_set_graphic_pane_vc_ParamLimits

0xe801,	// (0x00014aff) list_set_graphic_pane_vc

0xa825,	// (0x00010b23) input_focus_pane_cp2_vc

0xa81b,	// (0x00010b19) setting_code_pane_vc_g1

0xa950,	// (0x00010c4e) setting_code_pane_vc_t1

0xe812,	// (0x00014b10) set_text_pane_vc_t1_ParamLimits

0xe812,	// (0x00014b10) set_text_pane_vc_t1

0xa825,	// (0x00010b23) input_focus_pane_cp1_vc

0xe82c,	// (0x00014b2a) list_set_text_pane_vc

0xa81b,	// (0x00010b19) setting_text_pane_vc_g1

0xa825,	// (0x00010b23) bg_set_opt_pane_cp2_vc

0xa947,	// (0x00010c45) setting_slider_graphic_pane_vc_g1

0xe836,	// (0x00014b34) setting_slider_graphic_pane_vc_t1

0xe845,	// (0x00014b43) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f8,	// (0x00015cf6) setting_slider_graphic_pane_vc_t

0xe854,	// (0x00014b52) slider_set_pane_cp_vc

0xe85c,	// (0x00014b5a) slider_set_pane_vc_g1

0xe865,	// (0x00014b63) slider_set_pane_vc_g2

0x0006,

0xf9fd,	// (0x00015cfb) slider_set_pane_vc_g

0xb737,	// (0x00011a35) set_opt_bg_pane_g1_copy1

0xb73f,	// (0x00011a3d) set_opt_bg_pane_g2_copy1

0xe891,	// (0x00014b8f) set_opt_bg_pane_g3_copy1

0xb74f,	// (0x00011a4d) set_opt_bg_pane_g4_copy1

0xb757,	// (0x00011a55) set_opt_bg_pane_g5_copy1

0xb75f,	// (0x00011a5d) set_opt_bg_pane_g6_copy1

0xe899,	// (0x00014b97) set_opt_bg_pane_g7_copy1

0xe8a1,	// (0x00014b9f) set_opt_bg_pane_g8_copy1

0xe8a9,	// (0x00014ba7) set_opt_bg_pane_g9_copy1

0xa825,	// (0x00010b23) bg_set_opt_pane_cp_vc

0xe8b1,	// (0x00014baf) setting_slider_pane_vc_t1

0xe8c0,	// (0x00014bbe) setting_slider_pane_vc_t2

0xe8cf,	// (0x00014bcd) setting_slider_pane_vc_t3

0x0002,

0xfa0c,	// (0x00015d0a) setting_slider_pane_vc_t

0xe8de,	// (0x00014bdc) slider_set_pane_vc

0x9555,	// (0x0000f853) volume_set_pane_vc_g1

0x983a,	// (0x0000fb38) volume_set_pane_vc_g2

0x9843,	// (0x0000fb41) volume_set_pane_vc_g3

0x984c,	// (0x0000fb4a) volume_set_pane_vc_g4

0x9855,	// (0x0000fb53) volume_set_pane_vc_g5

0x985e,	// (0x0000fb5c) volume_set_pane_vc_g6

0x9867,	// (0x0000fb65) volume_set_pane_vc_g7

0x9870,	// (0x0000fb6e) volume_set_pane_vc_g8

0x9879,	// (0x0000fb77) volume_set_pane_vc_g9

0x9882,	// (0x0000fb80) volume_set_pane_vc_g10

0x0009,

0xfa13,	// (0x00015d11) volume_set_pane_vc_g

0xe8e6,	// (0x00014be4) volume_set_pane_vc

0xe8ee,	// (0x00014bec) button_value_adjust_pane_cp1_vc

0xe8f6,	// (0x00014bf4) list_highlight_pane_cp2_vc

0xe8ff,	// (0x00014bfd) list_set_pane_vc_ParamLimits

0xe8ff,	// (0x00014bfd) list_set_pane_vc

0xe951,	// (0x00014c4f) main_pane_set_vc_t1_ParamLimits

0xe951,	// (0x00014c4f) main_pane_set_vc_t1

0xe966,	// (0x00014c64) main_pane_set_vc_t2_ParamLimits

0xe966,	// (0x00014c64) main_pane_set_vc_t2

0xe978,	// (0x00014c76) main_pane_set_vc_t3_ParamLimits

0xe978,	// (0x00014c76) main_pane_set_vc_t3

0xe98a,	// (0x00014c88) main_pane_set_vc_t4_ParamLimits

0xe98a,	// (0x00014c88) main_pane_set_vc_t4

0x0003,

0xfa28,	// (0x00015d26) main_pane_set_vc_t_ParamLimits

0xfa28,	// (0x00015d26) main_pane_set_vc_t

0xe99c,	// (0x00014c9a) setting_code_pane_vc_ParamLimits

0xe99c,	// (0x00014c9a) setting_code_pane_vc

0xe9ab,	// (0x00014ca9) setting_slider_graphic_pane_vc

0xe9ab,	// (0x00014ca9) setting_slider_pane_vc

0xe9ab,	// (0x00014ca9) setting_text_pane_vc

0xe9ab,	// (0x00014ca9) setting_volume_pane_vc

0xe9b3,	// (0x00014cb1) scroll_pane_cp121_vc

0xb51c,	// (0x0001181a) set_content_pane_vc

0xec59,	// (0x00014f57) button_value_adjust_pane_g1

0xec62,	// (0x00014f60) button_value_adjust_pane_g2

0x0001,

0xfa84,	// (0x00015d82) button_value_adjust_pane_g

0xec6b,	// (0x00014f69) form_field_slider_wide_pane_vc_t1_ParamLimits

0xec6b,	// (0x00014f69) form_field_slider_wide_pane_vc_t1

0xec7d,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2_ParamLimits

0xec7d,	// (0x00014f7b) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa89,	// (0x00015d87) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa89,	// (0x00015d87) form_field_slider_wide_pane_vc_t

0xab90,	// (0x00010e8e) input_focus_pane_cp10_vc_ParamLimits

0xab90,	// (0x00010e8e) input_focus_pane_cp10_vc

0xeca5,	// (0x00014fa3) slider_cont_pane_cp1_vc_ParamLimits

0xeca5,	// (0x00014fa3) slider_cont_pane_cp1_vc

0xecb5,	// (0x00014fb3) slider_form_pane_g1_cp2

0xe865,	// (0x00014b63) slider_form_pane_g2_cp2

0xece2,	// (0x00014fe0) form_field_slider_pane_vc_t3

0xecf0,	// (0x00014fee) form_field_slider_pane_vc_t4

0xecfe,	// (0x00014ffc) slider_form_pane_vc_ParamLimits

0xecfe,	// (0x00014ffc) slider_form_pane_vc

0xed0b,	// (0x00015009) form_field_slider_pane_vc_t1_ParamLimits

0xed0b,	// (0x00015009) form_field_slider_pane_vc_t1

0xec7d,	// (0x00014f7b) form_field_slider_pane_vc_t2_ParamLimits

0xec7d,	// (0x00014f7b) form_field_slider_pane_vc_t2

0x0001,

0xfa9b,	// (0x00015d99) form_field_slider_pane_vc_t_ParamLimits

0xfa9b,	// (0x00015d99) form_field_slider_pane_vc_t

0xab90,	// (0x00010e8e) input_focus_pane_cp9_vc_ParamLimits

0xab90,	// (0x00010e8e) input_focus_pane_cp9_vc

0xed21,	// (0x0001501f) slider_cont_pane_vc_ParamLimits

0xed21,	// (0x0001501f) slider_cont_pane_vc

0xed33,	// (0x00015031) list_form_graphic_pane_cp_vc_ParamLimits

0xed33,	// (0x00015031) list_form_graphic_pane_cp_vc

0xcdec,	// (0x000130ea) form_field_popup_wide_pane_vc_g1

0xed48,	// (0x00015046) form_field_popup_wide_pane_vc_t1_ParamLimits

0xed48,	// (0x00015046) form_field_popup_wide_pane_vc_t1

0xb5f6,	// (0x000118f4) input_focus_pane_cp8_vc_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_cp8_vc

0xed87,	// (0x00015085) list_form_wide_pane_vc_ParamLimits

0xed87,	// (0x00015085) list_form_wide_pane_vc

0xed93,	// (0x00015091) list_form_graphic_pane_vc_g1

0xed9b,	// (0x00015099) list_form_graphic_pane_vc_t1_ParamLimits

0xed9b,	// (0x00015099) list_form_graphic_pane_vc_t1

0xa905,	// (0x00010c03) list_highlight_pane_cp5_vc_ParamLimits

0xa905,	// (0x00010c03) list_highlight_pane_cp5_vc

0xedb7,	// (0x000150b5) list_form_graphic_pane_vc_ParamLimits

0xedb7,	// (0x000150b5) list_form_graphic_pane_vc

0xcdec,	// (0x000130ea) form_field_popup_pane_vc_g1

0xedcd,	// (0x000150cb) form_field_popup_pane_vc_t1_ParamLimits

0xedcd,	// (0x000150cb) form_field_popup_pane_vc_t1

0xb5f6,	// (0x000118f4) input_focus_pane_cp7_vc_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_cp7_vc

0xede2,	// (0x000150e0) list_form_pane_vc_ParamLimits

0xede2,	// (0x000150e0) list_form_pane_vc

0xedee,	// (0x000150ec) data_form_pane_vc_t1_ParamLimits

0xedee,	// (0x000150ec) data_form_pane_vc_t1

0xb737,	// (0x00011a35) input_focus_pane_vc_g1

0xb73f,	// (0x00011a3d) input_focus_pane_vc_g2

0xb747,	// (0x00011a45) input_focus_pane_vc_g3

0xb74f,	// (0x00011a4d) input_focus_pane_vc_g4

0xb757,	// (0x00011a55) input_focus_pane_vc_g5

0xb75f,	// (0x00011a5d) input_focus_pane_vc_g6

0xb767,	// (0x00011a65) input_focus_pane_vc_g7

0xb76f,	// (0x00011a6d) input_focus_pane_vc_g8

0xb777,	// (0x00011a75) input_focus_pane_vc_g9

0xa81b,	// (0x00010b19) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x00015985) input_focus_pane_vc_g

0xcde0,	// (0x000130de) data_form_pane_vc_ParamLimits

0xcde0,	// (0x000130de) data_form_pane_vc

0xcdec,	// (0x000130ea) form_field_data_pane_vc_g1

0xee09,	// (0x00015107) form_field_data_pane_vc_t1_ParamLimits

0xee09,	// (0x00015107) form_field_data_pane_vc_t1

0xb5f6,	// (0x000118f4) input_focus_pane_vc_ParamLimits

0xb5f6,	// (0x000118f4) input_focus_pane_vc

0xee1f,	// (0x0001511d) button_value_adjust_pane_cp3_vc

0xee27,	// (0x00015125) button_value_adjust_pane_cp5_vc

0xee2f,	// (0x0001512d) form_field_data_pane_vc_ParamLimits

0xee2f,	// (0x0001512d) form_field_data_pane_vc

0xee46,	// (0x00015144) form_field_data_pane_vc_cp2

0xee4e,	// (0x0001514c) form_field_data_wide_pane_vc_ParamLimits

0xee4e,	// (0x0001514c) form_field_data_wide_pane_vc

0xee64,	// (0x00015162) form_field_data_wide_pane_vc_cp2

0xee6c,	// (0x0001516a) form_field_popup_pane_vc_ParamLimits

0xee6c,	// (0x0001516a) form_field_popup_pane_vc

0xee83,	// (0x00015181) form_field_popup_wide_pane_vc_ParamLimits

0xee83,	// (0x00015181) form_field_popup_wide_pane_vc

0xee99,	// (0x00015197) form_field_slider_pane_vc_ParamLimits

0xee99,	// (0x00015197) form_field_slider_pane_vc

0xeeac,	// (0x000151aa) form_field_slider_wide_pane_vc_ParamLimits

0xeeac,	// (0x000151aa) form_field_slider_wide_pane_vc

0xeebf,	// (0x000151bd) grid_touch_1_pane_ParamLimits

0xeebf,	// (0x000151bd) grid_touch_1_pane

0xeecb,	// (0x000151c9) grid_touch_2_pane_ParamLimits

0xeecb,	// (0x000151c9) grid_touch_2_pane

0xc6bd,	// (0x000129bb) touch_pane_g1_ParamLimits

0xc6bd,	// (0x000129bb) touch_pane_g1

0xeee3,	// (0x000151e1) cell_app_pane_cp_wide_ParamLimits

0xeee3,	// (0x000151e1) cell_app_pane_cp_wide

0xeef4,	// (0x000151f2) grid_popup_fast_wide_pane_ParamLimits

0xeef4,	// (0x000151f2) grid_popup_fast_wide_pane

0xef08,	// (0x00015206) scroll_pane_cp19_ParamLimits

0xef08,	// (0x00015206) scroll_pane_cp19

0xa825,	// (0x00010b23) bg_popup_window_pane_cp20

0xef1c,	// (0x0001521a) listscroll_popup_fast_wide_pane

0xa905,	// (0x00010c03) grid_indicator_nsta_pane

0xef24,	// (0x00015222) clock_nsta_pane_g1

0xef2d,	// (0x0001522b) clock_nsta_pane_t1

0xef49,	// (0x00015247) cell_indicator_nsta_pane_ParamLimits

0xef49,	// (0x00015247) cell_indicator_nsta_pane

0xef7a,	// (0x00015278) cell_indicator_nsta_pane_g1

0xef88,	// (0x00015286) cell_indicator_nsta_pane_g2

0x0001,

0xfaac,	// (0x00015daa) cell_indicator_nsta_pane_g

0xef95,	// (0x00015293) clock_nsta_pane_cp

0xef9d,	// (0x0001529b) indicator_nsta_pane_cp

0xefa5,	// (0x000152a3) nsta_clock_indic_pane_g1

0xa9e2,	// (0x00010ce0) grid_indicator_pane

0xbce2,	// (0x00011fe0) scroll_pane_cp29

0x8bbb,	// (0x0000eeb9) indicator_nsta_pane_cp2_ParamLimits

0x8bbb,	// (0x0000eeb9) indicator_nsta_pane_cp2

0xa905,	// (0x00010c03) main_apps_wheel_pane

0xcfc7,	// (0x000132c5) form_midp_field_text_pane_ParamLimits

0xd10c,	// (0x0001340a) scroll_bar_cp050_ParamLimits

0xeff5,	// (0x000152f3) cell_indicator_pane_ParamLimits

0xeff5,	// (0x000152f3) cell_indicator_pane

0xf009,	// (0x00015307) cell_indicator_pane_g1

0xf013,	// (0x00015311) grid_wheel_folder_pane_ParamLimits

0xf013,	// (0x00015311) grid_wheel_folder_pane

0xf025,	// (0x00015323) list_wheel_apps_pane_ParamLimits

0xf025,	// (0x00015323) list_wheel_apps_pane

0xf034,	// (0x00015332) main_apps_wheel_pane_g1_ParamLimits

0xf034,	// (0x00015332) main_apps_wheel_pane_g1

0xf048,	// (0x00015346) main_apps_wheel_pane_g2_ParamLimits

0xf048,	// (0x00015346) main_apps_wheel_pane_g2

0x0001,

0xfac8,	// (0x00015dc6) main_apps_wheel_pane_g_ParamLimits

0xfac8,	// (0x00015dc6) main_apps_wheel_pane_g

0xf05c,	// (0x0001535a) main_apps_wheel_pane_t1_ParamLimits

0xf05c,	// (0x0001535a) main_apps_wheel_pane_t1

0xf07b,	// (0x00015379) list_wheel_apps_pane_g1

0xf083,	// (0x00015381) list_wheel_apps_pane_g2

0xf08b,	// (0x00015389) list_wheel_apps_pane_g3

0xf093,	// (0x00015391) list_wheel_apps_pane_g4

0xf09b,	// (0x00015399) list_wheel_apps_pane_g5

0x0004,

0xfacd,	// (0x00015dcb) list_wheel_apps_pane_g

0xc294,	// (0x00012592) navi_icon_text_pane

0xc772,	// (0x00012a70) aid_fill_nsta

0xf0b8,	// (0x000153b6) navi_icon_text_pane_g1

0xf0c4,	// (0x000153c2) navi_icon_text_pane_t1

0xc135,	// (0x00012433) list_set_graphic_pane_t1_ParamLimits

0xc135,	// (0x00012433) list_set_graphic_pane_t1

0xd828,	// (0x00013b26) popup_midp_note_alarm_window_t6_ParamLimits

0xd828,	// (0x00013b26) popup_midp_note_alarm_window_t6

0xd83a,	// (0x00013b38) popup_midp_note_alarm_window_t7_ParamLimits

0xd83a,	// (0x00013b38) popup_midp_note_alarm_window_t7

0xd84c,	// (0x00013b4a) popup_midp_note_alarm_window_t8_ParamLimits

0xd84c,	// (0x00013b4a) popup_midp_note_alarm_window_t8

0xd85e,	// (0x00013b5c) popup_midp_note_alarm_window_t9_ParamLimits

0xd85e,	// (0x00013b5c) popup_midp_note_alarm_window_t9

0xd870,	// (0x00013b6e) popup_midp_note_alarm_window_t10_ParamLimits

0xd870,	// (0x00013b6e) popup_midp_note_alarm_window_t10

0xd882,	// (0x00013b80) popup_midp_note_alarm_window_t11_ParamLimits

0xd882,	// (0x00013b80) popup_midp_note_alarm_window_t11

0xd894,	// (0x00013b92) scroll_pane_cp17_ParamLimits

0xd894,	// (0x00013b92) scroll_pane_cp17

0x9555,	// (0x0000f853) volume_small_pane_cp_g1

0x988b,	// (0x0000fb89) volume_small_pane_cp_g2

0x9894,	// (0x0000fb92) volume_small_pane_cp_g3

0x989d,	// (0x0000fb9b) volume_small_pane_cp_g4

0x98a6,	// (0x0000fba4) volume_small_pane_cp_g5

0x98af,	// (0x0000fbad) volume_small_pane_cp_g6

0x98b8,	// (0x0000fbb6) volume_small_pane_cp_g7

0x98c1,	// (0x0000fbbf) volume_small_pane_cp_g8

0x98ca,	// (0x0000fbc8) volume_small_pane_cp_g9

0x98d3,	// (0x0000fbd1) volume_small_pane_cp_g10

0xc4d7,	// (0x000127d5) midp_ticker_pane_g1_ParamLimits

0xc4e3,	// (0x000127e1) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00015a51) midp_ticker_pane_g_ParamLimits

0xc4ef,	// (0x000127ed) midp_ticker_pane_t1_ParamLimits

0xc782,	// (0x00012a80) aid_fill_nsta_2

0xd0f8,	// (0x000133f6) list_form2_midp_pane

0xe1e5,	// (0x000144e3) midp_editing_number_pane_ParamLimits

0xe1f4,	// (0x000144f2) midp_ticker_pane_ParamLimits

0xf0d6,	// (0x000153d4) form2_midp_field_pane

0xf0fa,	// (0x000153f8) scroll_pane_cp51

0xf11a,	// (0x00015418) form2_midp_button_pane_ParamLimits

0xf11a,	// (0x00015418) form2_midp_button_pane

0xf12c,	// (0x0001542a) form2_midp_content_pane_ParamLimits

0xf12c,	// (0x0001542a) form2_midp_content_pane

0xf146,	// (0x00015444) form2_midp_field_choice_group_pane

0xf14e,	// (0x0001544c) form2_midp_field_pane_g1

0xf156,	// (0x00015454) form2_midp_field_pane_g2

0xf15e,	// (0x0001545c) form2_midp_field_pane_g3

0xf166,	// (0x00015464) form2_midp_field_pane_g4

0x0003,

0xfaf2,	// (0x00015df0) form2_midp_field_pane_g

0xf16e,	// (0x0001546c) form2_midp_gauge_slider_pane

0xf176,	// (0x00015474) form2_midp_gauge_wait_pane

0xf17e,	// (0x0001547c) form2_midp_image_pane_ParamLimits

0xf17e,	// (0x0001547c) form2_midp_image_pane

0xf199,	// (0x00015497) form2_midp_label_pane_ParamLimits

0xf199,	// (0x00015497) form2_midp_label_pane

0xf1b2,	// (0x000154b0) form2_midp_label_pane_cp_ParamLimits

0xf1b2,	// (0x000154b0) form2_midp_label_pane_cp

0xf1d1,	// (0x000154cf) form2_midp_string_pane_ParamLimits

0xf1d1,	// (0x000154cf) form2_midp_string_pane

0xf1e3,	// (0x000154e1) form2_midp_text_pane_ParamLimits

0xf1e3,	// (0x000154e1) form2_midp_text_pane

0xf1fc,	// (0x000154fa) form2_midp_time_pane

0xf20c,	// (0x0001550a) input_focus_pane_cp51_ParamLimits

0xf20c,	// (0x0001550a) input_focus_pane_cp51

0xf224,	// (0x00015522) form2_midp_label_pane_t1_ParamLimits

0xf224,	// (0x00015522) form2_midp_label_pane_t1

0xf261,	// (0x0001555f) form2_mdip_text_pane_t1_ParamLimits

0xf261,	// (0x0001555f) form2_mdip_text_pane_t1

0xf27a,	// (0x00015578) form2_midp_time_pane_t1

0xf295,	// (0x00015593) form2_midp_gauge_slider_pane_t1

0xf2a7,	// (0x000155a5) form2_midp_gauge_slider_pane_t2

0xf2b9,	// (0x000155b7) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafb,	// (0x00015df9) form2_midp_gauge_slider_pane_t

0xf2cb,	// (0x000155c9) form2_midp_slider_pane

0xf2d7,	// (0x000155d5) form2_midp_gauge_wait_pane_t1

0xf2e5,	// (0x000155e3) form2_midp_wait_pane_ParamLimits

0xf2e5,	// (0x000155e3) form2_midp_wait_pane

0xf310,	// (0x0001560e) list_single_2graphic_pane_cp4_ParamLimits

0xf310,	// (0x0001560e) list_single_2graphic_pane_cp4

0xce3c,	// (0x0001313a) list_single_midp_graphic_pane_cp_ParamLimits

0xce3c,	// (0x0001313a) list_single_midp_graphic_pane_cp

0xa825,	// (0x00010b23) list_highlight_pane_cp20

0xf323,	// (0x00015621) list_single_2graphic_pane_g1_cp4

0xe688,	// (0x00014986) list_single_2graphic_pane_g2_cp4

0xf32b,	// (0x00015629) list_single_2graphic_pane_t1_cp4

0xa905,	// (0x00010c03) list_highlight_pane_cp21

0xf33a,	// (0x00015638) list_single_midp_graphic_pane_g4_cp

0xf349,	// (0x00015647) list_single_midp_graphic_pane_t1_cp

0xf35e,	// (0x0001565c) form2_mdip_string_pane_t1_ParamLimits

0xf35e,	// (0x0001565c) form2_mdip_string_pane_t1

0xa825,	// (0x00010b23) bg_wml_button_pane_cp2

0xa81b,	// (0x00010b19) form2_midp_image_pane_g1

0xb2fe,	// (0x000115fc) list_double_large_graphic_pane_g5_ParamLimits

0xb2fe,	// (0x000115fc) list_double_large_graphic_pane_g5

0xc40e,	// (0x0001270c) midp_form_pane_ParamLimits

0xa905,	// (0x00010c03) main_apps_wheel_pane_ParamLimits

0x91e7,	// (0x0000f4e5) popup_preview_window_ParamLimits

0x91e7,	// (0x0000f4e5) popup_preview_window

0x9368,	// (0x0000f666) popup_touch_info_window_ParamLimits

0x9368,	// (0x0000f666) popup_touch_info_window

0x9386,	// (0x0000f684) popup_touch_menu_window_ParamLimits

0x9386,	// (0x0000f684) popup_touch_menu_window

0xa811,	// (0x00010b0f) bg_popup_sub_pane_cp6

0xf3c8,	// (0x000156c6) list_touch_menu_pane

0xf3d0,	// (0x000156ce) list_single_touch_menu_pane_ParamLimits

0xf3d0,	// (0x000156ce) list_single_touch_menu_pane

0xf3e4,	// (0x000156e2) list_single_touch_menu_pane_t1

0xa905,	// (0x00010c03) bg_popup_sub_pane_cp7_ParamLimits

0xa905,	// (0x00010c03) bg_popup_sub_pane_cp7

0xf3f2,	// (0x000156f0) heading_sub_pane

0xf3fa,	// (0x000156f8) list_touch_info_pane_ParamLimits

0xf3fa,	// (0x000156f8) list_touch_info_pane

0xf409,	// (0x00015707) list_single_touch_info_pane_ParamLimits

0xf409,	// (0x00015707) list_single_touch_info_pane

0xf41a,	// (0x00015718) list_single_touch_info_pane_t1

0xf428,	// (0x00015726) list_single_touch_info_pane_t2

0x0001,

0xfb09,	// (0x00015e07) list_single_touch_info_pane_t

0xc406,	// (0x00012704) bg_popup_heading_pane_cp

0xf436,	// (0x00015734) heading_sub_pane_t1

0xcd7a,	// (0x00013078) bg_popup_preview_window_pane_cp_ParamLimits

0xcd7a,	// (0x00013078) bg_popup_preview_window_pane_cp

0xf3f2,	// (0x000156f0) heading_preview_pane

0xf3fa,	// (0x000156f8) list_preview_pane_ParamLimits

0xf3fa,	// (0x000156f8) list_preview_pane

0xf444,	// (0x00015742) popup_preview_window_g1

0xf409,	// (0x00015707) list_single_preview_pane_ParamLimits

0xf409,	// (0x00015707) list_single_preview_pane

0xf44c,	// (0x0001574a) list_single_preview_pane_g1

0xf454,	// (0x00015752) list_single_preview_pane_t1

0xf41a,	// (0x00015718) list_single_preview_pane_t2

0x0001,

0xfb0e,	// (0x00015e0c) list_single_preview_pane_t

0xf462,	// (0x00015760) bg_popup_heading_pane_cp2_ParamLimits

0xf462,	// (0x00015760) bg_popup_heading_pane_cp2

0xf478,	// (0x00015776) heading_preview_pane_g1

0xf480,	// (0x0001577e) heading_preview_pane_t1_ParamLimits

0xf480,	// (0x0001577e) heading_preview_pane_t1

0xaa05,	// (0x00010d03) soft_indicator_pane_t1_ParamLimits

0xb03e,	// (0x0001133c) scroll_pane_ParamLimits

0xbbde,	// (0x00011edc) scroll_sc2_left_pane

0xbbe7,	// (0x00011ee5) scroll_sc2_right_pane

0xbc06,	// (0x00011f04) scroll_bg_pane_g1_ParamLimits

0xbc1b,	// (0x00011f19) scroll_bg_pane_g2_ParamLimits

0xbc33,	// (0x00011f31) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x000159dc) scroll_bg_pane_g_ParamLimits

0xbc06,	// (0x00011f04) scroll_handle_pane_g1_ParamLimits

0xbc55,	// (0x00011f53) scroll_handle_pane_g2_ParamLimits

0xbc33,	// (0x00011f31) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x000159e3) scroll_handle_pane_g_ParamLimits

0x8f12,	// (0x0000f210) popup_choice_list_window_ParamLimits

0x8f12,	// (0x0000f210) popup_choice_list_window

0xcb82,	// (0x00012e80) choice_list_pane

0xcc30,	// (0x00012f2e) cell_toolbar_pane_t1

0xcc58,	// (0x00012f56) toolbar_button_pane_ParamLimits

0xdd46,	// (0x00014044) ai_gene_pane_1_t2_ParamLimits

0xdd46,	// (0x00014044) ai_gene_pane_1_t2

0x0001,

0xf90d,	// (0x00015c0b) ai_gene_pane_1_t_ParamLimits

0xf90d,	// (0x00015c0b) ai_gene_pane_1_t

0xf49d,	// (0x0001579b) scroll_sc2_left_pane_g1

0xf49d,	// (0x0001579b) scroll_sc2_right_pane_g1

0xc748,	// (0x00012a46) bg_popup_sub_pane_cp10

0xf4a7,	// (0x000157a5) list_choice_list_pane

0xf4be,	// (0x000157bc) list_single_choice_list_pane_ParamLimits

0xf4be,	// (0x000157bc) list_single_choice_list_pane

0xf4d2,	// (0x000157d0) list_single_choice_list_pane_g1

0xb8ee,	// (0x00011bec) list_single_choice_list_pane_t1_ParamLimits

0xb8ee,	// (0x00011bec) list_single_choice_list_pane_t1

0xf4da,	// (0x000157d8) choice_list_pane_g1

0xf4e2,	// (0x000157e0) choice_list_pane_t1

0xa811,	// (0x00010b0f) input_focus_pane_cp11

0xbac5,	// (0x00011dc3) title_pane_stacon_g2_ParamLimits

0xbac5,	// (0x00011dc3) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000159c2) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000159c2) title_pane_stacon_g

0xc406,	// (0x00012704) cursor_press_pane

0x8fae,	// (0x0000f2ac) popup_fep_hwr_window_ParamLimits

0x8fae,	// (0x0000f2ac) popup_fep_hwr_window

0x900a,	// (0x0000f308) popup_fep_vkb_window_ParamLimits

0x900a,	// (0x0000f308) popup_fep_vkb_window

0xf4f0,	// (0x000157ee) cursor_press_pane_g1

0x0002,

0xfb37,	// (0x00015e35) fep_vkb_side_pane_g_ParamLimits

0x9911,	// (0x0000fc0f) fep_hwr_candidate_pane_ParamLimits

0x9911,	// (0x0000fc0f) fep_hwr_candidate_pane

0x9939,	// (0x0000fc37) fep_hwr_side_pane_ParamLimits

0x9939,	// (0x0000fc37) fep_hwr_side_pane

0x9959,	// (0x0000fc57) fep_hwr_top_pane_ParamLimits

0x9959,	// (0x0000fc57) fep_hwr_top_pane

0x9971,	// (0x0000fc6f) fep_hwr_write_pane_ParamLimits

0x9971,	// (0x0000fc6f) fep_hwr_write_pane

0xfb37,	// (0x00015e35) fep_vkb_side_pane_g

0xf4f8,	// (0x000157f6) fep_hwr_top_pane_g1

0xf50a,	// (0x00015808) fep_hwr_top_pane_g2

0x99ab,	// (0x0000fca9) fep_hwr_top_pane_g3

0x0002,

0xfb13,	// (0x00015e11) fep_hwr_top_pane_g

0x99c0,	// (0x0000fcbe) fep_hwr_top_text_pane

0xbda9,	// (0x000120a7) fep_hwr_top_text_pane_g1

0xf540,	// (0x0001583e) fep_hwr_top_text_pane_t1

0x9aae,	// (0x0000fdac) fep_hwr_candidate_pane_g1

0x0220,	// (0x0000651e) fep_vkb_keypad_pane_g3_ParamLimits

0x0220,	// (0x0000651e) fep_vkb_keypad_pane_g3

0x0242,	// (0x00006540) fep_vkb_keypad_pane_g4_ParamLimits

0x0242,	// (0x00006540) fep_vkb_keypad_pane_g4

0x02b1,	// (0x000065af) fep_vkb_bottom_pane_g2_ParamLimits

0x02b1,	// (0x000065af) fep_vkb_bottom_pane_g2

0x0001,

0xfb3e,	// (0x00015e3c) fep_vkb_bottom_pane_g_ParamLimits

0xfb3e,	// (0x00015e3c) fep_vkb_bottom_pane_g

0xf49d,	// (0x0001579b) cell_vkb_side_pane_g2

0x0001,

0xfb48,	// (0x00015e46) cell_vkb_side_pane_g

0x033c,	// (0x0000663a) cell_vkb_side_pane_t1

0x034a,	// (0x00006648) cell_vkb_side_pane_t1_copy1

0xf49d,	// (0x0001579b) bg_fep_vkb_candidate_pane_g2

0x046e,	// (0x0000676c) cell_vkb_candidate_pane_ParamLimits

0x001e,	// (0x0000631c) aid_size_cell_vkb_ParamLimits

0x001e,	// (0x0000631c) aid_size_cell_vkb

0x046e,	// (0x0000676c) cell_vkb_candidate_pane

0x9ad5,	// (0x0000fdd3) bg_popup_fep_shadow_pane_g1

0x0094,	// (0x00006392) fep_vkb_bottom_pane_ParamLimits

0x0094,	// (0x00006392) fep_vkb_bottom_pane

0x00d1,	// (0x000063cf) fep_vkb_candidate_pane_ParamLimits

0x00d1,	// (0x000063cf) fep_vkb_candidate_pane

0x00ed,	// (0x000063eb) fep_vkb_keypad_pane_ParamLimits

0x00ed,	// (0x000063eb) fep_vkb_keypad_pane

0x0121,	// (0x0000641f) fep_vkb_side_pane_ParamLimits

0x0121,	// (0x0000641f) fep_vkb_side_pane

0x014d,	// (0x0000644b) fep_vkb_top_pane_ParamLimits

0x014d,	// (0x0000644b) fep_vkb_top_pane

0x0179,	// (0x00006477) fep_vkb_top_pane_g1_ParamLimits

0x0179,	// (0x00006477) fep_vkb_top_pane_g1

0x0188,	// (0x00006486) fep_vkb_top_pane_g2_ParamLimits

0x0188,	// (0x00006486) fep_vkb_top_pane_g2

0x0197,	// (0x00006495) fep_vkb_top_pane_g3_ParamLimits

0x0197,	// (0x00006495) fep_vkb_top_pane_g3

0x0003,

0xfb2e,	// (0x00015e2c) fep_vkb_top_pane_g_ParamLimits

0xfb2e,	// (0x00015e2c) fep_vkb_top_pane_g

0x01b5,	// (0x000064b3) fep_vkb_top_text_pane_ParamLimits

0x01b5,	// (0x000064b3) fep_vkb_top_text_pane

0x01c6,	// (0x000064c4) fep_vkb_side_pane_g1_ParamLimits

0x01c6,	// (0x000064c4) fep_vkb_side_pane_g1

0x020f,	// (0x0000650d) grid_vkb_side_pane_ParamLimits

0x020f,	// (0x0000650d) grid_vkb_side_pane

0x9add,	// (0x0000fddb) bg_popup_fep_shadow_pane_g2

0x9ae6,	// (0x0000fde4) bg_popup_fep_shadow_pane_g3

0x9aee,	// (0x0000fdec) bg_popup_fep_shadow_pane_g4

0x9af7,	// (0x0000fdf5) bg_popup_fep_shadow_pane_g5

0x9aff,	// (0x0000fdfd) bg_popup_fep_shadow_pane_g6

0x9b07,	// (0x0000fe05) bg_popup_fep_shadow_pane_g7

0xb74f,	// (0x00011a4d) bg_popup_fep_shadow_pane_g8

0x0260,	// (0x0000655e) grid_vkb_keypad_number_pane_ParamLimits

0x0260,	// (0x0000655e) grid_vkb_keypad_number_pane

0x0270,	// (0x0000656e) grid_vkb_keypad_pane_ParamLimits

0x0270,	// (0x0000656e) grid_vkb_keypad_pane

0x0296,	// (0x00006594) fep_vkb_bottom_pane_g1_ParamLimits

0x0296,	// (0x00006594) fep_vkb_bottom_pane_g1

0x02bf,	// (0x000065bd) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x02bf,	// (0x000065bd) grid_vkb_keypad_bottom_left_pane

0x02d4,	// (0x000065d2) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x02d4,	// (0x000065d2) grid_vkb_keypad_bottom_right_pane

0x02e9,	// (0x000065e7) fep_vkb_top_text_pane_g1

0x0304,	// (0x00006602) fep_vkb_top_text_pane_t1

0x0319,	// (0x00006617) cell_vkb_side_pane_ParamLimits

0x0319,	// (0x00006617) cell_vkb_side_pane

0xf49d,	// (0x0001579b) cell_vkb_side_pane_g1

0x0358,	// (0x00006656) cell_vkb_keypad_pane_ParamLimits

0x0358,	// (0x00006656) cell_vkb_keypad_pane

0x03c5,	// (0x000066c3) cell_vkb_keypad_pane_g1

0x0008,

0xfb5b,	// (0x00015e59) bg_popup_fep_shadow_pane_g

0x9b17,	// (0x0000fe15) cell_hwr_side_pane_g1

0x9b17,	// (0x0000fe15) cell_hwr_side_pane_g2

0x03cf,	// (0x000066cd) cell_vkb_keypad_pane_t1

0x03dd,	// (0x000066db) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x03dd,	// (0x000066db) cell_vkb_keypad_bottom_left_pane

0x03fa,	// (0x000066f8) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x03fa,	// (0x000066f8) cell_vkb_keypad_bottom_right_pane

0xf49d,	// (0x0001579b) cell_vkb_keypad_bottom_left_pane_g1

0xf49d,	// (0x0001579b) cell_vkb_keypad_bottom_right_pane_g1

0x0433,	// (0x00006731) cell_vkb_keypad_number_pane_ParamLimits

0x0433,	// (0x00006731) cell_vkb_keypad_number_pane

0x0452,	// (0x00006750) cell_vkb_keypad_number_pane_g1

0x045c,	// (0x0000675a) cell_vkb_keypad_number_pane_g2

0x0465,	// (0x00006763) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4d,	// (0x00015e4b) cell_vkb_keypad_number_pane_g

0x03cf,	// (0x000066cd) cell_vkb_keypad_number_pane_t1

0x0487,	// (0x00006785) fep_vkb_candidate_pane_g1

0x0001,

0xfb6e,	// (0x00015e6c) cell_hwr_side_pane_g

0x04e2,	// (0x000067e0) cell_hwr_side_pane_t1

0x9b21,	// (0x0000fe1f) cell_hwr_side_pane_t1_copy1

0x9b2f,	// (0x0000fe2d) cell_hwr_candidate_pane_g1

0x9b5e,	// (0x0000fe5c) cell_hwr_candidate_pane_t1

0xf49d,	// (0x0001579b) cell_vkb_candidate_pane_g2

0x0593,	// (0x00006891) cell_vkb_candidate_pane_t1

0x98dc,	// (0x0000fbda) bg_popup_fep_shadow_pane_ParamLimits

0x98dc,	// (0x0000fbda) bg_popup_fep_shadow_pane

0x998b,	// (0x0000fc89) bg_fep_hwr_top_pane_g4

0xf51c,	// (0x0001581a) bg_hwr_side_pane_g1_ParamLimits

0xf51c,	// (0x0001581a) bg_hwr_side_pane_g1

0x99fc,	// (0x0000fcfa) cell_hwr_side_pane_ParamLimits

0x99fc,	// (0x0000fcfa) cell_hwr_side_pane

0x9a37,	// (0x0000fd35) fep_hwr_write_pane_g1_ParamLimits

0x9a37,	// (0x0000fd35) fep_hwr_write_pane_g1

0x9a44,	// (0x0000fd42) fep_hwr_write_pane_g2_ParamLimits

0x9a44,	// (0x0000fd42) fep_hwr_write_pane_g2

0x9a51,	// (0x0000fd4f) fep_hwr_write_pane_g3_ParamLimits

0x9a51,	// (0x0000fd4f) fep_hwr_write_pane_g3

0x9a5f,	// (0x0000fd5d) fep_hwr_write_pane_g4_ParamLimits

0x9a5f,	// (0x0000fd5d) fep_hwr_write_pane_g4

0x0005,

0xfb1a,	// (0x00015e18) fep_hwr_write_pane_g_ParamLimits

0xfb1a,	// (0x00015e18) fep_hwr_write_pane_g

0x998b,	// (0x0000fc89) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x998b,	// (0x0000fc89) bg_fep_hwr_candidate_pane_g2

0x9a74,	// (0x0000fd72) cell_hwr_candidate_pane_ParamLimits

0x9a74,	// (0x0000fd72) cell_hwr_candidate_pane

0x9aae,	// (0x0000fdac) fep_hwr_candidate_pane_g1_ParamLimits

0x004c,	// (0x0000634a) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x004c,	// (0x0000634a) bg_popup_fep_shadow_pane_cp2

0x01a7,	// (0x000064a5) fep_vkb_top_pane_g4_ParamLimits

0x01a7,	// (0x000064a5) fep_vkb_top_pane_g4

0x01ed,	// (0x000064eb) fep_vkb_side_pane_g2_ParamLimits

0x01ed,	// (0x000064eb) fep_vkb_side_pane_g2

0xb43a,	// (0x00011738) list_setting_pane_t4_ParamLimits

0xb43a,	// (0x00011738) list_setting_pane_t4

0xb4b0,	// (0x000117ae) list_setting_number_pane_t5_ParamLimits

0xb4b0,	// (0x000117ae) list_setting_number_pane_t5

0xbdf0,	// (0x000120ee) list_double_heading_pane_cp2_ParamLimits

0xbdf0,	// (0x000120ee) list_double_heading_pane_cp2

0xb621,	// (0x0001191f) list_double_heading_pane_g1_cp2_ParamLimits

0xb621,	// (0x0001191f) list_double_heading_pane_g1_cp2

0xb62d,	// (0x0001192b) list_double_heading_pane_g2_cp2_ParamLimits

0xb62d,	// (0x0001192b) list_double_heading_pane_g2_cp2

0x05a1,	// (0x0000689f) list_double_heading_pane_t1_cp2_ParamLimits

0x05a1,	// (0x0000689f) list_double_heading_pane_t1_cp2

0x05b7,	// (0x000068b5) list_double_heading_pane_t2_cp2_ParamLimits

0x05b7,	// (0x000068b5) list_double_heading_pane_t2_cp2

0xa7fb,	// (0x00010af9) aid_value_unit2

0x878e,	// (0x0000ea8c) popup_preview_fixed_window

0xab9e,	// (0x00010e9c) bg_popup_preview_window_pane_cp02

0x05c9,	// (0x000068c7) list_preview_fixed_pane

0x060f,	// (0x0000690d) list_empty_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_empty_pane_fp

0x060f,	// (0x0000690d) list_single_cale_day_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_cale_day_pane_fp

0x060f,	// (0x0000690d) list_single_graphic_heading_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_graphic_heading_pane_fp

0x060f,	// (0x0000690d) list_single_graphic_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_graphic_pane_fp

0x060f,	// (0x0000690d) list_single_heading_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_heading_pane_fp

0x060f,	// (0x0000690d) list_single_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_pane_fp

0x0622,	// (0x00006920) list_single_pane_fp_g1_ParamLimits

0x0622,	// (0x00006920) list_single_pane_fp_g1

0x062e,	// (0x0000692c) list_single_pane_fp_g2_ParamLimits

0x062e,	// (0x0000692c) list_single_pane_fp_g2

0x063a,	// (0x00006938) list_single_pane_fp_g3_ParamLimits

0x063a,	// (0x00006938) list_single_pane_fp_g3

0x064e,	// (0x0000694c) list_single_pane_fp_g4_ParamLimits

0x064e,	// (0x0000694c) list_single_pane_fp_g4

0x0003,

0xfb81,	// (0x00015e7f) list_single_pane_fp_g_ParamLimits

0xfb81,	// (0x00015e7f) list_single_pane_fp_g

0x065a,	// (0x00006958) list_single_pane_fp_t1_ParamLimits

0x065a,	// (0x00006958) list_single_pane_fp_t1

0x0671,	// (0x0000696f) list_single_graphic_pane_fp_g1_ParamLimits

0x0671,	// (0x0000696f) list_single_graphic_pane_fp_g1

0x0622,	// (0x00006920) list_single_graphic_pane_fp_g2_ParamLimits

0x0622,	// (0x00006920) list_single_graphic_pane_fp_g2

0x062e,	// (0x0000692c) list_single_graphic_pane_fp_g3_ParamLimits

0x062e,	// (0x0000692c) list_single_graphic_pane_fp_g3

0x063a,	// (0x00006938) list_single_graphic_pane_fp_g4_ParamLimits

0x063a,	// (0x00006938) list_single_graphic_pane_fp_g4

0x064e,	// (0x0000694c) list_single_graphic_pane_fp_g5_ParamLimits

0x064e,	// (0x0000694c) list_single_graphic_pane_fp_g5

0x0004,

0xfb8a,	// (0x00015e88) list_single_graphic_pane_fp_g_ParamLimits

0xfb8a,	// (0x00015e88) list_single_graphic_pane_fp_g

0x067d,	// (0x0000697b) list_single_graphic_pane_fp_t1_ParamLimits

0x067d,	// (0x0000697b) list_single_graphic_pane_fp_t1

0x0671,	// (0x0000696f) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x0671,	// (0x0000696f) list_single_graphic_heading_pane_fp_g1

0x0622,	// (0x00006920) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x0622,	// (0x00006920) list_single_graphic_heading_pane_fp_g2

0x062e,	// (0x0000692c) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x062e,	// (0x0000692c) list_single_graphic_heading_pane_fp_g3

0x063a,	// (0x00006938) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x063a,	// (0x00006938) list_single_graphic_heading_pane_fp_g4

0x064e,	// (0x0000694c) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x064e,	// (0x0000694c) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00015e88) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00015e88) list_single_graphic_heading_pane_fp_g

0x0693,	// (0x00006991) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x0693,	// (0x00006991) list_single_graphic_heading_pane_fp_t1

0x06a9,	// (0x000069a7) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x06a9,	// (0x000069a7) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb95,	// (0x00015e93) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb95,	// (0x00015e93) list_single_graphic_heading_pane_fp_t

0x06bb,	// (0x000069b9) list_single_cale_day_pane_fp_g1_ParamLimits

0x06bb,	// (0x000069b9) list_single_cale_day_pane_fp_g1

0x06f3,	// (0x000069f1) list_single_cale_day_pane_fp_g2_ParamLimits

0x06f3,	// (0x000069f1) list_single_cale_day_pane_fp_g2

0x06ff,	// (0x000069fd) list_single_cale_day_pane_fp_g3_ParamLimits

0x06ff,	// (0x000069fd) list_single_cale_day_pane_fp_g3

0x0727,	// (0x00006a25) list_single_cale_day_pane_fp_g4_ParamLimits

0x0727,	// (0x00006a25) list_single_cale_day_pane_fp_g4

0x074b,	// (0x00006a49) list_single_cale_day_pane_fp_g5_ParamLimits

0x074b,	// (0x00006a49) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9a,	// (0x00015e98) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9a,	// (0x00015e98) list_single_cale_day_pane_fp_g

0x076f,	// (0x00006a6d) list_single_cale_day_pane_fp_t1_ParamLimits

0x076f,	// (0x00006a6d) list_single_cale_day_pane_fp_t1

0x0795,	// (0x00006a93) list_single_cale_day_pane_fp_t2_ParamLimits

0x0795,	// (0x00006a93) list_single_cale_day_pane_fp_t2

0x07ae,	// (0x00006aac) list_single_cale_day_pane_fp_t3_ParamLimits

0x07ae,	// (0x00006aac) list_single_cale_day_pane_fp_t3

0x0002,

0xfba5,	// (0x00015ea3) list_single_cale_day_pane_fp_t_ParamLimits

0xfba5,	// (0x00015ea3) list_single_cale_day_pane_fp_t

0x0622,	// (0x00006920) list_empty_pane_fp_g1_ParamLimits

0x0622,	// (0x00006920) list_empty_pane_fp_g1

0x07c7,	// (0x00006ac5) list_empty_pane_fp_t1

0x07d5,	// (0x00006ad3) list_empty_pane_fp_t2

0x0001,

0xfbac,	// (0x00015eaa) list_empty_pane_fp_t

0x0622,	// (0x00006920) list_single_heading_pane_fp_g1_ParamLimits

0x0622,	// (0x00006920) list_single_heading_pane_fp_g1

0x062e,	// (0x0000692c) list_single_heading_pane_fp_g2_ParamLimits

0x062e,	// (0x0000692c) list_single_heading_pane_fp_g2

0x063a,	// (0x00006938) list_single_heading_pane_fp_g3_ParamLimits

0x063a,	// (0x00006938) list_single_heading_pane_fp_g3

0x0002,

0xfbb1,	// (0x00015eaf) list_single_heading_pane_fp_g_ParamLimits

0xfbb1,	// (0x00015eaf) list_single_heading_pane_fp_g

0x07e3,	// (0x00006ae1) list_single_heading_pane_fp_t1_ParamLimits

0x07e3,	// (0x00006ae1) list_single_heading_pane_fp_t1

0x07f5,	// (0x00006af3) list_single_heading_pane_fp_t2_ParamLimits

0x07f5,	// (0x00006af3) list_single_heading_pane_fp_t2

0x0001,

0xfbb8,	// (0x00015eb6) list_single_heading_pane_fp_t_ParamLimits

0xfbb8,	// (0x00015eb6) list_single_heading_pane_fp_t

0xb95c,	// (0x00011c5a) aid_size_cell_fast

0xab10,	// (0x00010e0e) soft_indicator_pane_cp1_t1

0xb999,	// (0x00011c97) cell_app_pane_cp2_ParamLimits

0xb999,	// (0x00011c97) cell_app_pane_cp2

0x98fe,	// (0x0000fbfc) fep_hwr_candidate_drop_down_list_pane

0x9ac8,	// (0x0000fdc6) fep_hwr_candidate_pane_g3_ParamLimits

0x9ac8,	// (0x0000fdc6) fep_hwr_candidate_pane_g3

0x7cbc,	// (0x0000dfba) fep_hwr_candidate_pane_g4_ParamLimits

0x7cbc,	// (0x0000dfba) fep_hwr_candidate_pane_g4

0x0002,

0xfb27,	// (0x00015e25) fep_hwr_candidate_pane_g_ParamLimits

0xfb27,	// (0x00015e25) fep_hwr_candidate_pane_g

0x00c0,	// (0x000063be) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x00c0,	// (0x000063be) fep_vkb_candidate_drop_down_list_pane

0x048f,	// (0x0000678d) fep_vkb_candidate_pane_g3

0x0497,	// (0x00006795) fep_vkb_candidate_pane_g4

0x0002,

0xfb54,	// (0x00015e52) fep_vkb_candidate_pane_g

0x9b2f,	// (0x0000fe2d) cell_hwr_candidate_pane_g1_ParamLimits

0x9b3d,	// (0x0000fe3b) cell_hwr_candidate_pane_g3_ParamLimits

0x9b3d,	// (0x0000fe3b) cell_hwr_candidate_pane_g3

0x2cef,	// (0x00008fed) cell_hwr_candidate_pane_g4_ParamLimits

0x2cef,	// (0x00008fed) cell_hwr_candidate_pane_g4

0x0002,

0xfb73,	// (0x00015e71) cell_hwr_candidate_pane_g_ParamLimits

0xfb73,	// (0x00015e71) cell_hwr_candidate_pane_g

0x055d,	// (0x0000685b) cell_vkb_candidate_pane_g3_ParamLimits

0x055d,	// (0x0000685b) cell_vkb_candidate_pane_g3

0x0578,	// (0x00006876) cell_vkb_candidate_pane_g4_ParamLimits

0x0578,	// (0x00006876) cell_vkb_candidate_pane_g4

0x080b,	// (0x00006b09) cell_app_pane_cp2_g1_ParamLimits

0x080b,	// (0x00006b09) cell_app_pane_cp2_g1

0x0829,	// (0x00006b27) cell_app_pane_cp2_g2_ParamLimits

0x0829,	// (0x00006b27) cell_app_pane_cp2_g2

0x0001,

0xfbbd,	// (0x00015ebb) cell_app_pane_cp2_g_ParamLimits

0xfbbd,	// (0x00015ebb) cell_app_pane_cp2_g

0x0835,	// (0x00006b33) cell_app_pane_cp2_t1_ParamLimits

0x0835,	// (0x00006b33) cell_app_pane_cp2_t1

0xb5f6,	// (0x000118f4) grid_highlight_pane_cp1_ParamLimits

0xb5f6,	// (0x000118f4) grid_highlight_pane_cp1

0x9b7b,	// (0x0000fe79) cell_hwr_candidate_pane_cp1_ParamLimits

0x9b7b,	// (0x0000fe79) cell_hwr_candidate_pane_cp1

0x9b2f,	// (0x0000fe2d) fep_hwr_candidate_drop_down_list_pane_g1

0x9b99,	// (0x0000fe97) fep_hwr_candidate_drop_down_list_pane_g2

0x9ba6,	// (0x0000fea4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc2,	// (0x00015ec0) fep_hwr_candidate_drop_down_list_pane_g

0x9bb3,	// (0x0000feb1) fep_hwr_candidate_drop_down_list_scroll_pane

0x9bbc,	// (0x0000feba) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x9bbc,	// (0x0000feba) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x9bc9,	// (0x0000fec7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x9bc9,	// (0x0000fec7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x9bd6,	// (0x0000fed4) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x9bd6,	// (0x0000fed4) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x9be3,	// (0x0000fee1) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x9be3,	// (0x0000fee1) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x9bfe,	// (0x0000fefc) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x9bfe,	// (0x0000fefc) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x9c19,	// (0x0000ff17) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x9c19,	// (0x0000ff17) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x9c34,	// (0x0000ff32) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x9c34,	// (0x0000ff32) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x9c4f,	// (0x0000ff4d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x9c4f,	// (0x0000ff4d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00015ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00015ec7) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x0900,	// (0x00006bfe) cell_vkb_candidate_pane_cp1_ParamLimits

0x0900,	// (0x00006bfe) cell_vkb_candidate_pane_cp1

0x01a7,	// (0x000064a5) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x01a7,	// (0x000064a5) fep_vkb_candidate_drop_down_list_pane_g1

0x0865,	// (0x00006b63) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x0865,	// (0x00006b63) fep_vkb_candidate_drop_down_list_pane_g2

0x0872,	// (0x00006b70) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x0872,	// (0x00006b70) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbda,	// (0x00015ed8) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbda,	// (0x00015ed8) fep_vkb_candidate_drop_down_list_pane_g

0x0923,	// (0x00006c21) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x0923,	// (0x00006c21) fep_vkb_candidate_drop_down_list_scroll_pane

0x0930,	// (0x00006c2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x0930,	// (0x00006c2e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x093d,	// (0x00006c3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x093d,	// (0x00006c3b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x0949,	// (0x00006c47) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x0949,	// (0x00006c47) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x04fe,	// (0x000067fc) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x04fe,	// (0x000067fc) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x051f,	// (0x0000681d) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x051f,	// (0x0000681d) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x0955,	// (0x00006c53) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x0955,	// (0x00006c53) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x0976,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x0976,	// (0x00006c74) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x0997,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x0997,	// (0x00006c95) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe1,	// (0x00015edf) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe1,	// (0x00015edf) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xa82f,	// (0x00010b2d) title_pane_g1_ParamLimits

0xa83c,	// (0x00010b3a) title_pane_g2_ParamLimits

0xf54e,	// (0x0001584c) title_pane_g_ParamLimits

0xbd99,	// (0x00012097) aid_call2_pane

0xbda1,	// (0x0001209f) aid_call_pane

0xbda9,	// (0x000120a7) popup_clock_analogue_window_g1

0xbda9,	// (0x000120a7) popup_clock_analogue_window_g2

0x8ac5,	// (0x0000edc3) popup_clock_analogue_window_g3

0x8ace,	// (0x0000edcc) popup_clock_analogue_window_g4

0xa81b,	// (0x00010b19) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x000159f1) popup_clock_analogue_window_g

0x8ad6,	// (0x0000edd4) popup_clock_analogue_window_t1

0x8ae4,	// (0x0000ede2) clock_digital_number_pane_ParamLimits

0x8ae4,	// (0x0000ede2) clock_digital_number_pane

0x8af0,	// (0x0000edee) clock_digital_number_pane_cp02_ParamLimits

0x8af0,	// (0x0000edee) clock_digital_number_pane_cp02

0x8afc,	// (0x0000edfa) clock_digital_number_pane_cp03_ParamLimits

0x8afc,	// (0x0000edfa) clock_digital_number_pane_cp03

0x8b08,	// (0x0000ee06) clock_digital_number_pane_cp04_ParamLimits

0x8b08,	// (0x0000ee06) clock_digital_number_pane_cp04

0x8b14,	// (0x0000ee12) clock_digital_separator_pane_ParamLimits

0x8b14,	// (0x0000ee12) clock_digital_separator_pane

0x8b20,	// (0x0000ee1e) popup_clock_digital_window_t1_ParamLimits

0x8b20,	// (0x0000ee1e) popup_clock_digital_window_t1

0xa81b,	// (0x00010b19) clock_digital_number_pane_g1

0xa81b,	// (0x00010b19) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x000159fc) clock_digital_number_pane_g

0xa81b,	// (0x00010b19) clock_digital_separator_pane_g1

0xa81b,	// (0x00010b19) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x000159fc) clock_digital_separator_pane_g

0xc772,	// (0x00012a70) aid_fill_nsta_ParamLimits

0xc8aa,	// (0x00012ba8) indicator_nsta_pane_ParamLimits

0xca1d,	// (0x00012d1b) popup_clock_analogue_window

0xca1d,	// (0x00012d1b) popup_clock_digital_window

0xa905,	// (0x00010c03) grid_indicator_nsta_pane_ParamLimits

0xef3b,	// (0x00015239) clock_nsta_pane_t2

0x0001,

0xfaa7,	// (0x00015da5) clock_nsta_pane_t

0x8a89,	// (0x0000ed87) aid_size_max_handle

0x8a93,	// (0x0000ed91) aid_size_min_handle

0xc406,	// (0x00012704) editor_scroll_pane

0x09b2,	// (0x00006cb0) ex_editor_pane

0xb8cb,	// (0x00011bc9) scroll_pane_cp13

0xb06a,	// (0x00011368) scroll_pane_cp14

0xbdd8,	// (0x000120d6) scroll_pane_cp36

0xbe01,	// (0x000120ff) list_single_graphic_hl_pane_cp2_ParamLimits

0xbe01,	// (0x000120ff) list_single_graphic_hl_pane_cp2

0xe28d,	// (0x0001458b) list_single_graphic_hl_pane_ParamLimits

0xe28d,	// (0x0001458b) list_single_graphic_hl_pane

0x09ba,	// (0x00006cb8) aid_size_min_hl_cp1

0x09c3,	// (0x00006cc1) list_highlight_pane_cp34_ParamLimits

0x09c3,	// (0x00006cc1) list_highlight_pane_cp34

0x09d4,	// (0x00006cd2) list_single_graphic_hl_pane_g1_ParamLimits

0x09d4,	// (0x00006cd2) list_single_graphic_hl_pane_g1

0x09e1,	// (0x00006cdf) list_single_graphic_hl_pane_g2_ParamLimits

0x09e1,	// (0x00006cdf) list_single_graphic_hl_pane_g2

0x09e1,	// (0x00006cdf) list_single_graphic_hl_pane_g3_ParamLimits

0x09e1,	// (0x00006cdf) list_single_graphic_hl_pane_g3

0x09ed,	// (0x00006ceb) list_single_graphic_hl_pane_g4_ParamLimits

0x09ed,	// (0x00006ceb) list_single_graphic_hl_pane_g4

0x09f9,	// (0x00006cf7) list_single_graphic_hl_pane_g5_ParamLimits

0x09f9,	// (0x00006cf7) list_single_graphic_hl_pane_g5

0x0004,

0xfbf2,	// (0x00015ef0) list_single_graphic_hl_pane_g_ParamLimits

0xfbf2,	// (0x00015ef0) list_single_graphic_hl_pane_g

0x0a0d,	// (0x00006d0b) list_single_graphic_hl_pane_t1_ParamLimits

0x0a0d,	// (0x00006d0b) list_single_graphic_hl_pane_t1

0x0a23,	// (0x00006d21) aid_size_min_hl_cp2

0x0a2c,	// (0x00006d2a) list_highlight_pane_cp34_cp2_ParamLimits

0x0a2c,	// (0x00006d2a) list_highlight_pane_cp34_cp2

0x09d4,	// (0x00006cd2) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x09d4,	// (0x00006cd2) list_single_graphic_hl_pane_g1_cp2

0x0a39,	// (0x00006d37) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x0a39,	// (0x00006d37) list_single_graphic_hl_pane_g2_cp2

0x0a45,	// (0x00006d43) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x0a45,	// (0x00006d43) list_single_graphic_hl_pane_g3_cp2

0xc33f,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xc33f,	// (0x0001263d) list_single_graphic_hl_pane_g4_cp2

0x0a51,	// (0x00006d4f) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x0a51,	// (0x00006d4f) list_single_graphic_hl_pane_g5_cp2

0x8db7,	// (0x0000f0b5) control_pane_g4_ParamLimits

0x8db7,	// (0x0000f0b5) control_pane_g4

0xc748,	// (0x00012a46) bg_popup_sub_pane_cp10_ParamLimits

0xf4a7,	// (0x000157a5) list_choice_list_pane_ParamLimits

0xf4b6,	// (0x000157b4) scroll_pane_cp23

0xab9e,	// (0x00010e9c) bg_popup_preview_window_pane_cp02_ParamLimits

0x05c9,	// (0x000068c7) list_preview_fixed_pane_ParamLimits

0x05df,	// (0x000068dd) list_preview_fixed_pane_cp_ParamLimits

0x05df,	// (0x000068dd) list_preview_fixed_pane_cp

0x05eb,	// (0x000068e9) popup_preview_fixed_window_g1_ParamLimits

0x05eb,	// (0x000068e9) popup_preview_fixed_window_g1

0x05f7,	// (0x000068f5) popup_preview_fixed_window_g2_ParamLimits

0x05f7,	// (0x000068f5) popup_preview_fixed_window_g2

0x0002,

0xfb7a,	// (0x00015e78) popup_preview_fixed_window_g_ParamLimits

0xfb7a,	// (0x00015e78) popup_preview_fixed_window_g

0x8a05,	// (0x0000ed03) aid_navi_side_left_pane_ParamLimits

0x8a16,	// (0x0000ed14) aid_navi_side_right_pane_ParamLimits

0x8a2a,	// (0x0000ed28) navi_icon_pane_stacon_ParamLimits

0x8a3e,	// (0x0000ed3c) navi_navi_pane_stacon_ParamLimits

0x8a2a,	// (0x0000ed28) navi_text_pane_stacon_ParamLimits

0x866d,	// (0x0000e96b) main_text_info_pane

0x0a7b,	// (0x00006d79) listscroll_text_info_pane

0x0a83,	// (0x00006d81) list_text_info_pane_ParamLimits

0x0a83,	// (0x00006d81) list_text_info_pane

0x0a92,	// (0x00006d90) scroll_pane_cp24_ParamLimits

0x0a92,	// (0x00006d90) scroll_pane_cp24

0x0ab0,	// (0x00006dae) list_text_info_pane_t1_ParamLimits

0x0ab0,	// (0x00006dae) list_text_info_pane_t1

0x8f2c,	// (0x0000f22a) popup_fast_swap2_window_ParamLimits

0x8f2c,	// (0x0000f22a) popup_fast_swap2_window

0x0acb,	// (0x00006dc9) aid_size_cell_fast2

0xa811,	// (0x00010b0f) bg_popup_window_pane_cp17

0xd12c,	// (0x0001342a) heading_pane_cp2

0xade9,	// (0x000110e7) listscroll_fast2_pane

0x0ad5,	// (0x00006dd3) grid_fast2_pane

0x0add,	// (0x00006ddb) listscroll_fast2_pane_g1

0x0ae5,	// (0x00006de3) listscroll_fast2_pane_g2

0x0001,

0xfbfd,	// (0x00015efb) listscroll_fast2_pane_g

0xb8cb,	// (0x00011bc9) scroll_pane_cp26

0x0aed,	// (0x00006deb) cell_fast2_pane_ParamLimits

0x0aed,	// (0x00006deb) cell_fast2_pane

0x0b02,	// (0x00006e00) cell_fast2_pane_g1

0x0b0b,	// (0x00006e09) cell_fast2_pane_g2

0x0b14,	// (0x00006e12) cell_fast2_pane_g3

0x0002,

0xfc02,	// (0x00015f00) cell_fast2_pane_g

0xaec3,	// (0x000111c1) grid_highlight_pane_cp9

0x8ef8,	// (0x0000f1f6) main_eswt_pane_ParamLimits

0x8ef8,	// (0x0000f1f6) main_eswt_pane

0x0aa7,	// (0x00006da5) list_single_text_info_pane

0x0b1c,	// (0x00006e1a) eswt_ctrl_button_pane

0x0b1c,	// (0x00006e1a) eswt_ctrl_canvas_pane

0x0b24,	// (0x00006e22) eswt_ctrl_combo_pane

0x0b1c,	// (0x00006e1a) eswt_ctrl_default_pane

0x0b1c,	// (0x00006e1a) eswt_ctrl_label_pane

0x0b2c,	// (0x00006e2a) eswt_ctrl_wait_pane

0x0b34,	// (0x00006e32) eswt_shell_pane

0xa811,	// (0x00010b0f) listscroll_eswt_app_pane

0x0b50,	// (0x00006e4e) popup_eswt_tasktip_window_ParamLimits

0x0b50,	// (0x00006e4e) popup_eswt_tasktip_window

0xcd7a,	// (0x00013078) bg_popup_window_pane_cp18

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_ParamLimits

0x0b61,	// (0x00006e5f) eswt_control_pane_g1

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_ParamLimits

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_ParamLimits

0x0b7b,	// (0x00006e79) eswt_control_pane_g3

0x0b88,	// (0x00006e86) eswt_control_pane_g4_ParamLimits

0x0b88,	// (0x00006e86) eswt_control_pane_g4

0x0003,

0xfc09,	// (0x00015f07) eswt_control_pane_g_ParamLimits

0xfc09,	// (0x00015f07) eswt_control_pane_g

0xb5f6,	// (0x000118f4) bg_button_pane_ParamLimits

0xb5f6,	// (0x000118f4) bg_button_pane

0xaed8,	// (0x000111d6) common_borders_pane_copy2_ParamLimits

0xaed8,	// (0x000111d6) common_borders_pane_copy2

0x0b95,	// (0x00006e93) control_button_pane_g1_ParamLimits

0x0b95,	// (0x00006e93) control_button_pane_g1

0x0ba1,	// (0x00006e9f) control_button_pane_g2_ParamLimits

0x0ba1,	// (0x00006e9f) control_button_pane_g2

0x0bad,	// (0x00006eab) control_button_pane_g3_ParamLimits

0x0bad,	// (0x00006eab) control_button_pane_g3

0x0002,

0xfc12,	// (0x00015f10) control_button_pane_g_ParamLimits

0xfc12,	// (0x00015f10) control_button_pane_g

0x0bc1,	// (0x00006ebf) control_button_pane_t1

0x0bcf,	// (0x00006ecd) control_button_pane_t2

0x0001,

0xfc19,	// (0x00015f17) control_button_pane_t

0xcc64,	// (0x00012f62) bg_button_pane_g1

0xcc74,	// (0x00012f72) bg_button_pane_g2

0xcc6c,	// (0x00012f6a) bg_button_pane_g3

0xcc84,	// (0x00012f82) bg_button_pane_g4

0xcc7c,	// (0x00012f7a) bg_button_pane_g5

0xcc8c,	// (0x00012f8a) bg_button_pane_g6

0xcc94,	// (0x00012f92) bg_button_pane_g7

0xcca4,	// (0x00012fa2) bg_button_pane_g8

0xcc9c,	// (0x00012f9a) bg_button_pane_g9

0x0008,

0xf861,	// (0x00015b5f) bg_button_pane_g

0xf462,	// (0x00015760) common_borders_pane_ParamLimits

0xf462,	// (0x00015760) common_borders_pane

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy1_ParamLimits

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy1

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy1_ParamLimits

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy1

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy1_ParamLimits

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy1

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy1_ParamLimits

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy1

0xf49d,	// (0x0001579b) bg_eswt_ctrl_canvas_pane_g1

0xf462,	// (0x00015760) common_borders_pane_cp2_ParamLimits

0xf462,	// (0x00015760) common_borders_pane_cp2

0xf462,	// (0x00015760) common_borders_pane_cp3_ParamLimits

0xf462,	// (0x00015760) common_borders_pane_cp3

0x0bdd,	// (0x00006edb) separator_horizontal_pane

0x0be5,	// (0x00006ee3) separator_vertical_pane

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy2_ParamLimits

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy2

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy2_ParamLimits

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy2

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy2_ParamLimits

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy2

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy2_ParamLimits

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy2

0xa811,	// (0x00010b0f) common_borders_pane_cp4

0x0bee,	// (0x00006eec) separator_horizontal_pane_g1

0x0bf7,	// (0x00006ef5) separator_horizontal_pane_g2

0x0c00,	// (0x00006efe) separator_horizontal_pane_g3

0x0002,

0xfc1e,	// (0x00015f1c) separator_horizontal_pane_g

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy3_ParamLimits

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy3

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy3_ParamLimits

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy3

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy3_ParamLimits

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy3

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy3_ParamLimits

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy3

0xa811,	// (0x00010b0f) common_borders_pane_cp5

0x0c09,	// (0x00006f07) separator_vertical_pane_g1

0x0c12,	// (0x00006f10) separator_vertical_pane_g2

0x0c1b,	// (0x00006f19) separator_vertical_pane_g3

0x0002,

0xfc25,	// (0x00015f23) separator_vertical_pane_g

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy4_ParamLimits

0x0b61,	// (0x00006e5f) eswt_control_pane_g1_copy4

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy4_ParamLimits

0x0b6e,	// (0x00006e6c) eswt_control_pane_g2_copy4

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy4_ParamLimits

0x0b7b,	// (0x00006e79) eswt_control_pane_g3_copy4

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy4_ParamLimits

0x0b88,	// (0x00006e86) eswt_control_pane_g4_copy4

0x0c24,	// (0x00006f22) eswt_ctrl_combo_button_pane

0x0c2c,	// (0x00006f2a) eswt_ctrl_input_pane

0x0c34,	// (0x00006f32) popup_choice_list_window_cp70

0x0c3c,	// (0x00006f3a) eswt_ctrl_input_pane_t1

0xa811,	// (0x00010b0f) input_focus_pane_cp70

0xf462,	// (0x00015760) bg_button_pane_cp70_ParamLimits

0xf462,	// (0x00015760) bg_button_pane_cp70

0x0c4a,	// (0x00006f48) eswt_ctrl_combo_button_pane_g1

0x0c52,	// (0x00006f50) wait_bar_pane_cp70

0xcd7a,	// (0x00013078) bg_popup_window_pane_cp70_ParamLimits

0xcd7a,	// (0x00013078) bg_popup_window_pane_cp70

0x0c5a,	// (0x00006f58) popup_eswt_tasktip_window_t1

0x0c70,	// (0x00006f6e) wait_bar_pane_cp71_ParamLimits

0x0c70,	// (0x00006f6e) wait_bar_pane_cp71

0x0c7c,	// (0x00006f7a) grid_eswt_app_pane

0xbbde,	// (0x00011edc) scroll_pane_cp70

0x0c85,	// (0x00006f83) cell_eswt_app_pane_ParamLimits

0x0c85,	// (0x00006f83) cell_eswt_app_pane

0x0cad,	// (0x00006fab) cell_eswt_app_pane_g1_ParamLimits

0x0cad,	// (0x00006fab) cell_eswt_app_pane_g1

0x0cdc,	// (0x00006fda) cell_eswt_app_pane_g2_ParamLimits

0x0cdc,	// (0x00006fda) cell_eswt_app_pane_g2

0x0001,

0xfc2c,	// (0x00015f2a) cell_eswt_app_pane_g_ParamLimits

0xfc2c,	// (0x00015f2a) cell_eswt_app_pane_g

0x0d05,	// (0x00007003) cell_eswt_app_pane_t1_ParamLimits

0x0d05,	// (0x00007003) cell_eswt_app_pane_t1

0x0d37,	// (0x00007035) grid_highlight_pane_cp70_ParamLimits

0x0d37,	// (0x00007035) grid_highlight_pane_cp70

0xb07e,	// (0x0001137c) set_content_pane_g1

0xc6a1,	// (0x0001299f) status_small_volume_pane

0x9c6a,	// (0x0000ff68) status_small_volume_pane_g1

0x9c72,	// (0x0000ff70) volume_small2_pane

0x9c7b,	// (0x0000ff79) volume_small2_pane_g1

0x9c84,	// (0x0000ff82) volume_small2_pane_g2

0x9c8d,	// (0x0000ff8b) volume_small2_pane_g3

0x9c96,	// (0x0000ff94) volume_small2_pane_g4

0x9c9f,	// (0x0000ff9d) volume_small2_pane_g5

0x9ca8,	// (0x0000ffa6) volume_small2_pane_g6

0x9cb1,	// (0x0000ffaf) volume_small2_pane_g7

0x9cba,	// (0x0000ffb8) volume_small2_pane_g8

0x9cc3,	// (0x0000ffc1) volume_small2_pane_g9

0x9ccc,	// (0x0000ffca) volume_small2_pane_g10

0x0009,

0xfc31,	// (0x00015f2f) volume_small2_pane_g

0x02e9,	// (0x000065e7) fep_vkb_top_text_pane_g1_ParamLimits

0x0304,	// (0x00006602) fep_vkb_top_text_pane_t1_ParamLimits

0x0603,	// (0x00006901) popup_preview_fixed_window_g3_ParamLimits

0x0603,	// (0x00006901) popup_preview_fixed_window_g3

0x9307,	// (0x0000f605) popup_toolbar_trans_pane

0xe041,	// (0x0001433f) aid_height_set_list_ParamLimits

0xe052,	// (0x00014350) aid_size_parent_ParamLimits

0xc748,	// (0x00012a46) list_highlight_pane_cp2_ParamLimits

0xb07e,	// (0x0001137c) set_content_pane_g1_ParamLimits

0xe29e,	// (0x0001459c) list_single_image_pane_ParamLimits

0xe29e,	// (0x0001459c) list_single_image_pane

0x0dae,	// (0x000070ac) aid_size_cell_image_ParamLimits

0x0dae,	// (0x000070ac) aid_size_cell_image

0x0dbb,	// (0x000070b9) grid_single_image_pane_ParamLimits

0x0dbb,	// (0x000070b9) grid_single_image_pane

0xb621,	// (0x0001191f) list_single_image_pane_g1_ParamLimits

0xb621,	// (0x0001191f) list_single_image_pane_g1

0xb62d,	// (0x0001192b) list_single_image_pane_g2_ParamLimits

0xb62d,	// (0x0001192b) list_single_image_pane_g2

0x0001,

0xfc46,	// (0x00015f44) list_single_image_pane_g_ParamLimits

0xfc46,	// (0x00015f44) list_single_image_pane_g

0x0dc7,	// (0x000070c5) list_single_image_pane_t1_ParamLimits

0x0dc7,	// (0x000070c5) list_single_image_pane_t1

0x0ddd,	// (0x000070db) cell_image_list_pane_ParamLimits

0x0ddd,	// (0x000070db) cell_image_list_pane

0x0df0,	// (0x000070ee) cell_image_list_pane_g1

0x0df9,	// (0x000070f7) cell_image_list_pane_g2

0x0001,

0xfc4b,	// (0x00015f49) cell_image_list_pane_g

0x0e02,	// (0x00007100) aid_size_cell_tb_trans_pane

0xb5f6,	// (0x000118f4) bg_tb_trans_pane

0x0e14,	// (0x00007112) grid_tb_trans_pane

0xcc64,	// (0x00012f62) bg_tb_trans_pane_g1

0xcc74,	// (0x00012f72) bg_tb_trans_pane_g2

0xcc6c,	// (0x00012f6a) bg_tb_trans_pane_g3

0xcc84,	// (0x00012f82) bg_tb_trans_pane_g4

0xcc7c,	// (0x00012f7a) bg_tb_trans_pane_g5

0xcca4,	// (0x00012fa2) bg_tb_trans_pane_g6

0xcc9c,	// (0x00012f9a) bg_tb_trans_pane_g7

0xcc8c,	// (0x00012f8a) bg_tb_trans_pane_g8

0xcc94,	// (0x00012f92) bg_tb_trans_pane_g9

0x0008,

0xfc50,	// (0x00015f4e) bg_tb_trans_pane_g

0x0e28,	// (0x00007126) cell_toolbar_trans_pane_ParamLimits

0x0e28,	// (0x00007126) cell_toolbar_trans_pane

0xf49d,	// (0x0001579b) cell_toolbar_trans_pane_g1

0xf0de,	// (0x000153dc) list_form2_midp_pane_t1

0xf0ec,	// (0x000153ea) list_form2_midp_pane_t2

0x0001,

0xfaed,	// (0x00015deb) list_form2_midp_pane_t

0xf0fa,	// (0x000153f8) scroll_pane_cp51_ParamLimits

0xf2f5,	// (0x000155f3) form2_midp_wait_pane_g1

0xf2fe,	// (0x000155fc) form2_midp_wait_pane_g2

0xf307,	// (0x00015605) form2_midp_wait_pane_g3

0x0002,

0xfb02,	// (0x00015e00) form2_midp_wait_pane_g

0xa905,	// (0x00010c03) list_highlight_pane_cp21_ParamLimits

0xf33a,	// (0x00015638) list_single_midp_graphic_pane_g4_cp_ParamLimits

0xf349,	// (0x00015647) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xe255,	// (0x00014553) list_single_2graphic_im_pane_ParamLimits

0xe255,	// (0x00014553) list_single_2graphic_im_pane

0x0e4e,	// (0x0000714c) list_single_2graphic_im_pane_g1_ParamLimits

0x0e4e,	// (0x0000714c) list_single_2graphic_im_pane_g1

0x0e5f,	// (0x0000715d) list_single_2graphic_im_pane_g2_ParamLimits

0x0e5f,	// (0x0000715d) list_single_2graphic_im_pane_g2

0x0e6b,	// (0x00007169) list_single_2graphic_im_pane_g3_ParamLimits

0x0e6b,	// (0x00007169) list_single_2graphic_im_pane_g3

0x0003,

0xfc63,	// (0x00015f61) list_single_2graphic_im_pane_g_ParamLimits

0xfc63,	// (0x00015f61) list_single_2graphic_im_pane_g

0x0e8b,	// (0x00007189) list_single_2graphic_im_pane_t1_ParamLimits

0x0e8b,	// (0x00007189) list_single_2graphic_im_pane_t1

0x060f,	// (0x0000690d) list_single_graphic_2heading_pane_fp_ParamLimits

0x060f,	// (0x0000690d) list_single_graphic_2heading_pane_fp

0x0671,	// (0x0000696f) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x0671,	// (0x0000696f) list_single_graphic_2heading_pane_fp_g1

0x0622,	// (0x00006920) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x0622,	// (0x00006920) list_single_graphic_2heading_pane_fp_g2

0x062e,	// (0x0000692c) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x062e,	// (0x0000692c) list_single_graphic_2heading_pane_fp_g3

0x063a,	// (0x00006938) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x063a,	// (0x00006938) list_single_graphic_2heading_pane_fp_g4

0x064e,	// (0x0000694c) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x064e,	// (0x0000694c) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8a,	// (0x00015e88) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8a,	// (0x00015e88) list_single_graphic_2heading_pane_fp_g

0x0ebc,	// (0x000071ba) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0ebc,	// (0x000071ba) list_single_graphic_2heading_pane_fp_t1

0x06a9,	// (0x000069a7) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x06a9,	// (0x000069a7) list_single_graphic_2heading_pane_fp_t2

0x0ed2,	// (0x000071d0) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0ed2,	// (0x000071d0) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc6c,	// (0x00015f6a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc6c,	// (0x00015f6a) list_single_graphic_2heading_pane_fp_t

0xf528,	// (0x00015826) fep_hwr_write_pane_g5_ParamLimits

0xf528,	// (0x00015826) fep_hwr_write_pane_g5

0xf534,	// (0x00015832) fep_hwr_write_pane_g6_ParamLimits

0xf534,	// (0x00015832) fep_hwr_write_pane_g6

0x0b34,	// (0x00006e32) eswt_shell_pane_ParamLimits

0xcd7a,	// (0x00013078) bg_popup_window_pane_cp18_ParamLimits

0xdf8e,	// (0x0001428c) heading_pane_cp70

0x0c5a,	// (0x00006f58) popup_eswt_tasktip_window_t1_ParamLimits

0xc7bb,	// (0x00012ab9) aid_touch_tab_arrow_left

0xc7ca,	// (0x00012ac8) aid_touch_tab_arrow_right

0xa84d,	// (0x00010b4b) title_pane_g3_ParamLimits

0xa84d,	// (0x00010b4b) title_pane_g3

0xb4f3,	// (0x000117f1) set_value_pane_g1

0x9307,	// (0x0000f605) popup_toolbar_trans_pane_ParamLimits

0x0e02,	// (0x00007100) aid_size_cell_tb_trans_pane_ParamLimits

0xb5f6,	// (0x000118f4) bg_tb_trans_pane_ParamLimits

0x0e14,	// (0x00007112) grid_tb_trans_pane_ParamLimits

0xab9e,	// (0x00010e9c) cont_note_pane_ParamLimits

0xab9e,	// (0x00010e9c) cont_note_pane

0xaed8,	// (0x000111d6) cont_snote2_single_text_pane_ParamLimits

0xaed8,	// (0x000111d6) cont_snote2_single_text_pane

0xaed8,	// (0x000111d6) cont_snote2_single_graphic_pane_ParamLimits

0xaed8,	// (0x000111d6) cont_snote2_single_graphic_pane

0xd336,	// (0x00013634) cont_note_wait_pane_ParamLimits

0xd336,	// (0x00013634) cont_note_wait_pane

0xd336,	// (0x00013634) cont_note_image_pane_ParamLimits

0xd336,	// (0x00013634) cont_note_image_pane

0x0ee8,	// (0x000071e6) popup_note2_window_g1_ParamLimits

0x0ee8,	// (0x000071e6) popup_note2_window_g1

0x0f19,	// (0x00007217) popup_note2_window_t1_ParamLimits

0x0f19,	// (0x00007217) popup_note2_window_t1

0x0f5e,	// (0x0000725c) popup_note2_window_t2_ParamLimits

0x0f5e,	// (0x0000725c) popup_note2_window_t2

0x0fa3,	// (0x000072a1) popup_note2_window_t3_ParamLimits

0x0fa3,	// (0x000072a1) popup_note2_window_t3

0x0fe8,	// (0x000072e6) popup_note2_window_t4_ParamLimits

0x0fe8,	// (0x000072e6) popup_note2_window_t4

0xac22,	// (0x00010f20) popup_note2_window_t5_ParamLimits

0xac22,	// (0x00010f20) popup_note2_window_t5

0x0004,

0xfc78,	// (0x00015f76) popup_note2_window_t_ParamLimits

0xfc78,	// (0x00015f76) popup_note2_window_t

0x1017,	// (0x00007315) popup_note2_image_window_g1_ParamLimits

0x1017,	// (0x00007315) popup_note2_image_window_g1

0x1023,	// (0x00007321) popup_note2_image_window_g2_ParamLimits

0x1023,	// (0x00007321) popup_note2_image_window_g2

0x0001,

0xfc83,	// (0x00015f81) popup_note2_image_window_g_ParamLimits

0xfc83,	// (0x00015f81) popup_note2_image_window_g

0x1035,	// (0x00007333) popup_note2_image_window_t1_ParamLimits

0x1035,	// (0x00007333) popup_note2_image_window_t1

0x104d,	// (0x0000734b) popup_note2_image_window_t2_ParamLimits

0x104d,	// (0x0000734b) popup_note2_image_window_t2

0x1065,	// (0x00007363) popup_note2_image_window_t3_ParamLimits

0x1065,	// (0x00007363) popup_note2_image_window_t3

0x0002,

0xfc88,	// (0x00015f86) popup_note2_image_window_t_ParamLimits

0xfc88,	// (0x00015f86) popup_note2_image_window_t

0xd344,	// (0x00013642) popup_note2_wait_window_g1_ParamLimits

0xd344,	// (0x00013642) popup_note2_wait_window_g1

0xd350,	// (0x0001364e) popup_note2_wait_window_g2_ParamLimits

0xd350,	// (0x0001364e) popup_note2_wait_window_g2

0xd35c,	// (0x0001365a) popup_note2_wait_window_g3_ParamLimits

0xd35c,	// (0x0001365a) popup_note2_wait_window_g3

0x0002,

0xf843,	// (0x00015b41) popup_note2_wait_window_g_ParamLimits

0xf843,	// (0x00015b41) popup_note2_wait_window_g

0x1081,	// (0x0000737f) popup_note2_wait_window_t1_ParamLimits

0x1081,	// (0x0000737f) popup_note2_wait_window_t1

0x109f,	// (0x0000739d) popup_note2_wait_window_t2_ParamLimits

0x109f,	// (0x0000739d) popup_note2_wait_window_t2

0x10bd,	// (0x000073bb) popup_note2_wait_window_t3_ParamLimits

0x10bd,	// (0x000073bb) popup_note2_wait_window_t3

0x10cf,	// (0x000073cd) popup_note2_wait_window_t4_ParamLimits

0x10cf,	// (0x000073cd) popup_note2_wait_window_t4

0x0003,

0xfc8f,	// (0x00015f8d) popup_note2_wait_window_t_ParamLimits

0xfc8f,	// (0x00015f8d) popup_note2_wait_window_t

0x10e1,	// (0x000073df) wait_bar2_pane_ParamLimits

0x10e1,	// (0x000073df) wait_bar2_pane

0x10f9,	// (0x000073f7) popup_snote2_single_text_window_g1_ParamLimits

0x10f9,	// (0x000073f7) popup_snote2_single_text_window_g1

0x1121,	// (0x0000741f) popup_snote2_single_text_window_t1_ParamLimits

0x1121,	// (0x0000741f) popup_snote2_single_text_window_t1

0x116d,	// (0x0000746b) popup_snote2_single_text_window_t2_ParamLimits

0x116d,	// (0x0000746b) popup_snote2_single_text_window_t2

0x11b9,	// (0x000074b7) popup_snote2_single_text_window_t3_ParamLimits

0x11b9,	// (0x000074b7) popup_snote2_single_text_window_t3

0x11fa,	// (0x000074f8) popup_snote2_single_text_window_t4_ParamLimits

0x11fa,	// (0x000074f8) popup_snote2_single_text_window_t4

0x1230,	// (0x0000752e) popup_snote2_single_text_window_t5_ParamLimits

0x1230,	// (0x0000752e) popup_snote2_single_text_window_t5

0x0004,

0xfc98,	// (0x00015f96) popup_snote2_single_text_window_t_ParamLimits

0xfc98,	// (0x00015f96) popup_snote2_single_text_window_t

0x125b,	// (0x00007559) popup_snote2_single_graphic_window_g1_ParamLimits

0x125b,	// (0x00007559) popup_snote2_single_graphic_window_g1

0x1283,	// (0x00007581) popup_snote2_single_graphic_window_g2_ParamLimits

0x1283,	// (0x00007581) popup_snote2_single_graphic_window_g2

0x0001,

0xfca3,	// (0x00015fa1) popup_snote2_single_graphic_window_g_ParamLimits

0xfca3,	// (0x00015fa1) popup_snote2_single_graphic_window_g

0x12ab,	// (0x000075a9) popup_snote2_single_graphic_window_t1_ParamLimits

0x12ab,	// (0x000075a9) popup_snote2_single_graphic_window_t1

0x12f7,	// (0x000075f5) popup_snote2_single_graphic_window_t2_ParamLimits

0x12f7,	// (0x000075f5) popup_snote2_single_graphic_window_t2

0x11b9,	// (0x000074b7) popup_snote2_single_graphic_window_t3_ParamLimits

0x11b9,	// (0x000074b7) popup_snote2_single_graphic_window_t3

0x11fa,	// (0x000074f8) popup_snote2_single_graphic_window_t4_ParamLimits

0x11fa,	// (0x000074f8) popup_snote2_single_graphic_window_t4

0x1230,	// (0x0000752e) popup_snote2_single_graphic_window_t5_ParamLimits

0x1230,	// (0x0000752e) popup_snote2_single_graphic_window_t5

0x0004,

0xfca8,	// (0x00015fa6) popup_snote2_single_graphic_window_t_ParamLimits

0xfca8,	// (0x00015fa6) popup_snote2_single_graphic_window_t

0xefd4,	// (0x000152d2) clock_nsta_pane_cp2_t1

0xefd4,	// (0x000152d2) clock_nsta_pane_cp2_t2

0x0001,

0xfac3,	// (0x00015dc1) clock_nsta_pane_cp2_t

0xb615,	// (0x00011913) form_field_data_wide_pane_g1_ParamLimits

0xb621,	// (0x0001191f) form_field_data_wide_pane_g2_ParamLimits

0xb621,	// (0x0001191f) form_field_data_wide_pane_g2

0xb62d,	// (0x0001192b) form_field_data_wide_pane_g3_ParamLimits

0xb62d,	// (0x0001192b) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x00015974) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x00015974) form_field_data_wide_pane_g

0xeed7,	// (0x000151d5) grid_touch_3_pane_ParamLimits

0xeed7,	// (0x000151d5) grid_touch_3_pane

0x1343,	// (0x00007641) cell_touch_3_pane_ParamLimits

0x1343,	// (0x00007641) cell_touch_3_pane

0xf49d,	// (0x0001579b) cell_touch_3_pane_g1

0xf49d,	// (0x0001579b) cell_touch_3_pane_g2

0x0001,

0xfb48,	// (0x00015e46) cell_touch_3_pane_g

0xac54,	// (0x00010f52) cont_query_data_pane

0xac5c,	// (0x00010f5a) cont_query_data_pane_cp1

0x1370,	// (0x0000766e) button_value_adjust_pane_cp7

0x1378,	// (0x00007676) query_popup_pane_cp3

0xbe84,	// (0x00012182) bg_popup_sub_pane_cp22_ParamLimits

0x8b3f,	// (0x0000ee3d) navi_navi_volume_pane_cp2

0x8b57,	// (0x0000ee55) popup_side_volume_key_window_g2

0x8b63,	// (0x0000ee61) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00015a0a) popup_side_volume_key_window_g

0x8b7d,	// (0x0000ee7b) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00015a11) popup_side_volume_key_window_t

0xc1b2,	// (0x000124b0) popup_side_volume_key_window_ParamLimits

0xb24b,	// (0x00011549) list_double_graphic_pane_g4_ParamLimits

0xb24b,	// (0x00011549) list_double_graphic_pane_g4

0xe27a,	// (0x00014578) list_single_2heading_msg_pane_ParamLimits

0xe27a,	// (0x00014578) list_single_2heading_msg_pane

0x13a5,	// (0x000076a3) list_single_2heading_msg_pane_g1_ParamLimits

0x13a5,	// (0x000076a3) list_single_2heading_msg_pane_g1

0xb07e,	// (0x0001137c) list_single_2heading_msg_pane_g2_ParamLimits

0xb07e,	// (0x0001137c) list_single_2heading_msg_pane_g2

0x13b1,	// (0x000076af) list_single_2heading_msg_pane_g3_ParamLimits

0x13b1,	// (0x000076af) list_single_2heading_msg_pane_g3

0x13bd,	// (0x000076bb) list_single_2heading_msg_pane_g4_ParamLimits

0x13bd,	// (0x000076bb) list_single_2heading_msg_pane_g4

0x0003,

0xfcb3,	// (0x00015fb1) list_single_2heading_msg_pane_g_ParamLimits

0xfcb3,	// (0x00015fb1) list_single_2heading_msg_pane_g

0x13d5,	// (0x000076d3) list_single_2heading_msg_pane_t1_ParamLimits

0x13d5,	// (0x000076d3) list_single_2heading_msg_pane_t1

0x13fd,	// (0x000076fb) list_single_2heading_msg_pane_t2_ParamLimits

0x13fd,	// (0x000076fb) list_single_2heading_msg_pane_t2

0x142c,	// (0x0000772a) list_single_2heading_msg_pane_t3_ParamLimits

0x142c,	// (0x0000772a) list_single_2heading_msg_pane_t3

0x1465,	// (0x00007763) list_single_2heading_msg_pane_t4_ParamLimits

0x1465,	// (0x00007763) list_single_2heading_msg_pane_t4

0x0003,

0xfcbc,	// (0x00015fba) list_single_2heading_msg_pane_t_ParamLimits

0xfcbc,	// (0x00015fba) list_single_2heading_msg_pane_t

0xa859,	// (0x00010b57) title_pane_g4_ParamLimits

0xa859,	// (0x00010b57) title_pane_g4

0x8955,	// (0x0000ec53) title_pane_stacon_g3_ParamLimits

0x8955,	// (0x0000ec53) title_pane_stacon_g3

0x0e7f,	// (0x0000717d) list_single_2graphic_im_pane_g4_ParamLimits

0x0e7f,	// (0x0000717d) list_single_2graphic_im_pane_g4

0xdd63,	// (0x00014061) popup_side_volume_key_window_cp

0xe59d,	// (0x0001489b) main_idle_act2_pane_t1

0x944d,	// (0x0000f74b) toolbar_button_pane_g10

0xb034,	// (0x00011332) popup_toolbar_window_cp1

0xefc5,	// (0x000152c3) clock_nsta_pane_cp_t1

0xefc5,	// (0x000152c3) clock_nsta_pane_cp_t2

0x0001,

0xfabe,	// (0x00015dbc) clock_nsta_pane_cp_t

0x8b3f,	// (0x0000ee3d) navi_navi_volume_pane_cp2_ParamLimits

0x8b4b,	// (0x0000ee49) popup_side_volume_key_window_g1_ParamLimits

0x8b57,	// (0x0000ee55) popup_side_volume_key_window_g2_ParamLimits

0x8b63,	// (0x0000ee61) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00015a0a) popup_side_volume_key_window_g_ParamLimits

0x98ea,	// (0x0000fbe8) fep_hwr_aid_pane

0x998b,	// (0x0000fc89) bg_fep_hwr_top_pane_g4_ParamLimits

0xf4f8,	// (0x000157f6) fep_hwr_top_pane_g1_ParamLimits

0xf50a,	// (0x00015808) fep_hwr_top_pane_g2_ParamLimits

0x99ab,	// (0x0000fca9) fep_hwr_top_pane_g3_ParamLimits

0xfb13,	// (0x00015e11) fep_hwr_top_pane_g_ParamLimits

0x99c0,	// (0x0000fcbe) fep_hwr_top_text_pane_ParamLimits

0xdb26,	// (0x00013e24) aid_touch_tab_arrow_arrow_2

0xdb2f,	// (0x00013e2d) aid_touch_tab_arrow_left_2

0x98fe,	// (0x0000fbfc) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x9931,	// (0x0000fc2f) fep_hwr_prediction_pane

0x0119,	// (0x00006417) fep_vkb_prediction_pane

0x01fb,	// (0x000064f9) fep_vkb_side_pane_g3_ParamLimits

0x01fb,	// (0x000064f9) fep_vkb_side_pane_g3

0x9b2f,	// (0x0000fe2d) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x9b99,	// (0x0000fe97) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x9ba6,	// (0x0000fea4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc2,	// (0x00015ec0) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x9cd5,	// (0x0000ffd3) fep_hwr_prediction_pane_g1

0x9cdf,	// (0x0000ffdd) fep_hwr_prediction_pane_g2

0x9ce7,	// (0x0000ffe5) fep_hwr_prediction_pane_g3

0x9cef,	// (0x0000ffed) fep_hwr_prediction_pane_g4

0x0003,

0xfcc5,	// (0x00015fc3) fep_hwr_prediction_pane_g

0x148a,	// (0x00007788) fep_vkb_prediction_pane_g1

0x14a4,	// (0x000077a2) fep_vkb_prediction_pane_g2

0x14ac,	// (0x000077aa) fep_vkb_prediction_pane_g3

0x14b4,	// (0x000077b2) fep_vkb_prediction_pane_g4

0x0003,

0xfcce,	// (0x00015fcc) fep_vkb_prediction_pane_g

0x9719,	// (0x0000fa17) slider_set_pane_g3

0x972d,	// (0x0000fa2b) slider_set_pane_g4

0x9745,	// (0x0000fa43) slider_set_pane_g5

0x9719,	// (0x0000fa17) slider_set_pane_g6

0x975b,	// (0x0000fa59) slider_set_pane_g7

0xe191,	// (0x0001448f) slider_form_pane_g3

0xe19a,	// (0x00014498) slider_form_pane_g4

0xe1a2,	// (0x000144a0) slider_form_pane_g5

0xe191,	// (0x0001448f) slider_form_pane_g6

0xe1aa,	// (0x000144a8) slider_form_pane_g7

0xe86d,	// (0x00014b6b) slider_set_pane_vc_g3

0xe876,	// (0x00014b74) slider_set_pane_vc_g4

0xe87f,	// (0x00014b7d) slider_set_pane_vc_g5

0xe86d,	// (0x00014b6b) slider_set_pane_vc_g6

0xe888,	// (0x00014b86) slider_set_pane_vc_g7

0xecbe,	// (0x00014fbc) slider_form_pane_vc_g1

0xecc7,	// (0x00014fc5) slider_form_pane_vc_g2

0xecd0,	// (0x00014fce) slider_form_pane_vc_g3

0xecbe,	// (0x00014fbc) slider_form_pane_vc_g4

0xecd9,	// (0x00014fd7) slider_form_pane_vc_g5

0x0004,

0xfa90,	// (0x00015d8e) slider_form_pane_vc_g

0x866d,	// (0x0000e96b) main_idle_act3_pane

0x14bc,	// (0x000077ba) ai3_links_pane

0x14c5,	// (0x000077c3) popup_ai3_data_window_ParamLimits

0x14c5,	// (0x000077c3) popup_ai3_data_window

0xa811,	// (0x00010b0f) grid_ai3_links_pane

0x14dd,	// (0x000077db) cell_ai3_links_pane_ParamLimits

0x14dd,	// (0x000077db) cell_ai3_links_pane

0x14f1,	// (0x000077ef) bg_popup_sub_pane_cp11

0x14fe,	// (0x000077fc) cell_ai3_links_pane_g1

0xa811,	// (0x00010b0f) bg_popup_sub_pane_cp12

0x1523,	// (0x00007821) heading_ai3_data_pane

0x152b,	// (0x00007829) list_ai3_gene_pane

0x1537,	// (0x00007835) popup_ai3_data_window_g1

0x153f,	// (0x0000783d) heading_ai3_data_pane_g1

0x1547,	// (0x00007845) heading_ai3_data_pane_t1

0x1555,	// (0x00007853) list_double_ai3_gene_pane_ParamLimits

0x1555,	// (0x00007853) list_double_ai3_gene_pane

0x1562,	// (0x00007860) list_single_ai3_gene_pane_ParamLimits

0x1562,	// (0x00007860) list_single_ai3_gene_pane

0xf462,	// (0x00015760) list_highlight_pane_cp7_ParamLimits

0xf462,	// (0x00015760) list_highlight_pane_cp7

0x156f,	// (0x0000786d) list_single_a13_gene_pane_t1_ParamLimits

0x156f,	// (0x0000786d) list_single_a13_gene_pane_t1

0x1586,	// (0x00007884) list_single_ai3_gene_pane_g1

0x158f,	// (0x0000788d) list_single_ai3_gene_pane_g2

0x0001,

0xfcd7,	// (0x00015fd5) list_single_ai3_gene_pane_g

0x1597,	// (0x00007895) list_double_ai3_gene_pane_g1_ParamLimits

0x1597,	// (0x00007895) list_double_ai3_gene_pane_g1

0x15a3,	// (0x000078a1) list_double_ai3_gene_pane_t1_ParamLimits

0x15a3,	// (0x000078a1) list_double_ai3_gene_pane_t1

0x15bf,	// (0x000078bd) list_double_ai3_gene_pane_t2_ParamLimits

0x15bf,	// (0x000078bd) list_double_ai3_gene_pane_t2

0x15d5,	// (0x000078d3) list_double_ai3_gene_pane_t3_ParamLimits

0x15d5,	// (0x000078d3) list_double_ai3_gene_pane_t3

0x0002,

0xfcdc,	// (0x00015fda) list_double_ai3_gene_pane_t_ParamLimits

0xfcdc,	// (0x00015fda) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1389,	// (0x00007687) aid_size_min_col_2

0x1391,	// (0x0000768f) aid_size_min_msg_ParamLimits

0x1391,	// (0x0000768f) aid_size_min_msg

0x02f5,	// (0x000065f3) fep_vkb_top_text_pane_g2_ParamLimits

0x02f5,	// (0x000065f3) fep_vkb_top_text_pane_g2

0x0001,

0xfb43,	// (0x00015e41) fep_vkb_top_text_pane_g_ParamLimits

0xfb43,	// (0x00015e41) fep_vkb_top_text_pane_g

0x866d,	// (0x0000e96b) main_hc_apps_shell_pane

0x15f2,	// (0x000078f0) grid_hc_apps_pane_ParamLimits

0x15f2,	// (0x000078f0) grid_hc_apps_pane

0x1601,	// (0x000078ff) list_hc_apps_pane

0x1609,	// (0x00007907) scroll_pane_cp37_ParamLimits

0x1609,	// (0x00007907) scroll_pane_cp37

0x1615,	// (0x00007913) cell_hc_apps_pane_ParamLimits

0x1615,	// (0x00007913) cell_hc_apps_pane

0x16a3,	// (0x000079a1) cell_hc_apps_pane_g1_ParamLimits

0x16a3,	// (0x000079a1) cell_hc_apps_pane_g1

0x16d0,	// (0x000079ce) cell_hc_apps_pane_g2_ParamLimits

0x16d0,	// (0x000079ce) cell_hc_apps_pane_g2

0x16ec,	// (0x000079ea) cell_hc_apps_pane_g3_ParamLimits

0x16ec,	// (0x000079ea) cell_hc_apps_pane_g3

0x0002,

0xfce3,	// (0x00015fe1) cell_hc_apps_pane_g_ParamLimits

0xfce3,	// (0x00015fe1) cell_hc_apps_pane_g

0x170e,	// (0x00007a0c) cell_hc_apps_pane_t1_ParamLimits

0x170e,	// (0x00007a0c) cell_hc_apps_pane_t1

0xab9e,	// (0x00010e9c) grid_highlight_pane_cp10_ParamLimits

0xab9e,	// (0x00010e9c) grid_highlight_pane_cp10

0x174c,	// (0x00007a4a) list_single_hc_apps_pane_ParamLimits

0x174c,	// (0x00007a4a) list_single_hc_apps_pane

0x1778,	// (0x00007a76) list_single_hc_apps_pane_g1

0x1791,	// (0x00007a8f) list_single_hc_apps_pane_g2

0x0001,

0xfcea,	// (0x00015fe8) list_single_hc_apps_pane_g

0x17aa,	// (0x00007aa8) list_single_hc_apps_pane_g2_copy1

0x17c6,	// (0x00007ac4) list_single_hc_apps_pane_t1

0xa905,	// (0x00010c03) bg_set_opt_pane_cp_ParamLimits

0x8880,	// (0x0000eb7e) setting_slider_pane_t1_ParamLimits

0x8899,	// (0x0000eb97) setting_slider_pane_t2_ParamLimits

0x88b2,	// (0x0000ebb0) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x0001585c) setting_slider_pane_t_ParamLimits

0x88c9,	// (0x0000ebc7) slider_set_pane_ParamLimits

0x8dcb,	// (0x0000f0c9) control_pane_g5_ParamLimits

0x8dcb,	// (0x0000f0c9) control_pane_g5

0xe00c,	// (0x0001430a) slider_set_pane_g1_ParamLimits

0x970d,	// (0x0000fa0b) slider_set_pane_g2_ParamLimits

0x9719,	// (0x0000fa17) slider_set_pane_g3_ParamLimits

0x972d,	// (0x0000fa2b) slider_set_pane_g4_ParamLimits

0x9745,	// (0x0000fa43) slider_set_pane_g5_ParamLimits

0x9719,	// (0x0000fa17) slider_set_pane_g6_ParamLimits

0x975b,	// (0x0000fa59) slider_set_pane_g7_ParamLimits

0xf95f,	// (0x00015c5d) slider_set_pane_g_ParamLimits

0xc294,	// (0x00012592) navi_icon_text_pane_ParamLimits

0xc782,	// (0x00012a80) aid_fill_nsta_2_ParamLimits

0xc7bb,	// (0x00012ab9) aid_touch_tab_arrow_left_ParamLimits

0xc7ca,	// (0x00012ac8) aid_touch_tab_arrow_right_ParamLimits

0xc835,	// (0x00012b33) clock_nsta_pane_ParamLimits

0xdb08,	// (0x00013e06) navi_icon_pane_g1_ParamLimits

0xdb14,	// (0x00013e12) navi_text_pane_t1_ParamLimits

0xf0b8,	// (0x000153b6) navi_icon_text_pane_g1_ParamLimits

0xf0c4,	// (0x000153c2) navi_icon_text_pane_t1_ParamLimits

0x1778,	// (0x00007a76) list_single_hc_apps_pane_g1_ParamLimits

0x1791,	// (0x00007a8f) list_single_hc_apps_pane_g2_ParamLimits

0xfcea,	// (0x00015fe8) list_single_hc_apps_pane_g_ParamLimits

0x17aa,	// (0x00007aa8) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x17c6,	// (0x00007ac4) list_single_hc_apps_pane_t1_ParamLimits

0x87b2,	// (0x0000eab0) popup_toolbar2_fixed_window_ParamLimits

0x87b2,	// (0x0000eab0) popup_toolbar2_fixed_window

0x92ff,	// (0x0000f5fd) popup_toolbar2_float_window

0xa811,	// (0x00010b0f) bg_popup_sub_pane_cp27

0x17f4,	// (0x00007af2) grid_toolbar2_float_pane

0xa811,	// (0x00010b0f) bg_popup_sub_pane_cp26

0x17f4,	// (0x00007af2) grid_toolbar2_fixed_pane

0x17fc,	// (0x00007afa) cell_toolbar2_fixed_pane_ParamLimits

0x17fc,	// (0x00007afa) cell_toolbar2_fixed_pane

0x180d,	// (0x00007b0b) cell_toolbar2_fixed_pane_g1

0x1816,	// (0x00007b14) toolbar2_fixed_button_pane

0xcc64,	// (0x00012f62) toolbar2_fixed_button_pane_g1

0xcc74,	// (0x00012f72) toolbar2_fixed_button_pane_g2

0xcc6c,	// (0x00012f6a) toolbar2_fixed_button_pane_g3

0xcc84,	// (0x00012f82) toolbar2_fixed_button_pane_g4

0xcc7c,	// (0x00012f7a) toolbar2_fixed_button_pane_g5

0xcc8c,	// (0x00012f8a) toolbar2_fixed_button_pane_g6

0xcc94,	// (0x00012f92) toolbar2_fixed_button_pane_g7

0xcca4,	// (0x00012fa2) toolbar2_fixed_button_pane_g8

0xcc9c,	// (0x00012f9a) toolbar2_fixed_button_pane_g9

0x0008,

0xf861,	// (0x00015b5f) toolbar2_fixed_button_pane_g

0x181e,	// (0x00007b1c) cell_toolbar2_float_pane_ParamLimits

0x181e,	// (0x00007b1c) cell_toolbar2_float_pane

0x182f,	// (0x00007b2d) cell_toolbar2_float_pane_g1

0x1816,	// (0x00007b14) toolbar2_fixed_button_pane_cp

0x0088,	// (0x00006386) fep_vkb_accented_list_pane_ParamLimits

0x0088,	// (0x00006386) fep_vkb_accented_list_pane

0x9b0f,	// (0x0000fe0d) bg_popup_fep_shadow_pane_g9

0xc406,	// (0x00012704) bg_popup_fep_shadow_pane_cp3

0xb8b2,	// (0x00011bb0) list_accented_list_pane

0x1838,	// (0x00007b36) list_single_accented_list_pane_ParamLimits

0x1838,	// (0x00007b36) list_single_accented_list_pane

0xc406,	// (0x00012704) list_highlight_pane_cp10

0x1849,	// (0x00007b47) list_single_accented_list_pane_t1

0x9269,	// (0x0000f567) popup_slider_window_ParamLimits

0x9269,	// (0x0000f567) popup_slider_window

0x1380,	// (0x0000767e) aid_indentation_list_msg

0x18e9,	// (0x00007be7) bg_popup_window_pane_cp19

0x194d,	// (0x00007c4b) popup_slider_window_g1

0x1969,	// (0x00007c67) popup_slider_window_g2

0x1985,	// (0x00007c83) popup_slider_window_g3

0x0005,

0xfcef,	// (0x00015fed) popup_slider_window_g

0x19e1,	// (0x00007cdf) popup_slider_window_t1

0x1a53,	// (0x00007d51) small_volume_slider_vertical_pane

0xf49d,	// (0x0001579b) small_volume_slider_vertical_pane_g1

0xf49d,	// (0x0001579b) small_volume_slider_vertical_pane_g2

0x1a6f,	// (0x00007d6d) small_volume_slider_vertical_pane_g3

0x0002,

0xfd01,	// (0x00015fff) small_volume_slider_vertical_pane_g

0x859a,	// (0x0000e898) area_side_right_pane_ParamLimits

0x859a,	// (0x0000e898) area_side_right_pane

0x9cf7,	// (0x0000fff5) aid_size_side_button_ParamLimits

0x9cf7,	// (0x0000fff5) aid_size_side_button

0x9d0b,	// (0x00010009) grid_sctrl_middle_pane_ParamLimits

0x9d0b,	// (0x00010009) grid_sctrl_middle_pane

0x9d26,	// (0x00010024) sctrl_sk_bottom_pane

0x9d37,	// (0x00010035) sctrl_sk_top_pane

0x9d49,	// (0x00010047) aid_touch_sctrl_top

0x9d56,	// (0x00010054) bg_sctrl_sk_pane_ParamLimits

0x9d56,	// (0x00010054) bg_sctrl_sk_pane

0x9d64,	// (0x00010062) sctrl_sk_top_pane_g1

0x9d71,	// (0x0001006f) sctrl_sk_top_pane_t1

0x9d49,	// (0x00010047) aid_touch_sctrl_bottom

0x9d56,	// (0x00010054) bg_sctrl_sk_pane_cp_ParamLimits

0x9d56,	// (0x00010054) bg_sctrl_sk_pane_cp

0x9d8c,	// (0x0001008a) sctrl_sk_bottom_pane_g1

0x9d71,	// (0x0001006f) sctrl_sk_bottom_pane_t1

0x9d95,	// (0x00010093) cell_sctrl_middle_pane_ParamLimits

0x9d95,	// (0x00010093) cell_sctrl_middle_pane

0x9db0,	// (0x000100ae) aid_touch_sctrl_middle_ParamLimits

0x9db0,	// (0x000100ae) aid_touch_sctrl_middle

0x9dc2,	// (0x000100c0) bg_sctrl_middle_pane_ParamLimits

0x9dc2,	// (0x000100c0) bg_sctrl_middle_pane

0x9b2f,	// (0x0000fe2d) cell_sctrl_middle_pane_g1_ParamLimits

0x9b2f,	// (0x0000fe2d) cell_sctrl_middle_pane_g1

0x9dd0,	// (0x000100ce) cell_sctrl_middle_pane_g2_ParamLimits

0x9dd0,	// (0x000100ce) cell_sctrl_middle_pane_g2

0x0001,

0xfd0d,	// (0x0001600b) cell_sctrl_middle_pane_g_ParamLimits

0xfd0d,	// (0x0001600b) cell_sctrl_middle_pane_g

0xcc64,	// (0x00012f62) bg_sctrl_middle_pane_g1

0xcc6c,	// (0x00012f6a) bg_sctrl_middle_pane_g2

0xcc74,	// (0x00012f72) bg_sctrl_middle_pane_g3

0xcc7c,	// (0x00012f7a) bg_sctrl_middle_pane_g4

0xcc84,	// (0x00012f82) bg_sctrl_middle_pane_g5

0xcc8c,	// (0x00012f8a) bg_sctrl_middle_pane_g6

0xcc94,	// (0x00012f92) bg_sctrl_middle_pane_g7

0xcc9c,	// (0x00012f9a) bg_sctrl_middle_pane_g8

0x0007,

0xfd12,	// (0x00016010) bg_sctrl_middle_pane_g

0xcca4,	// (0x00012fa2) bg_sctrl_middle_pane_g8_copy1

0xcc64,	// (0x00012f62) bg_sctrl_sk_pane_g1

0xcc74,	// (0x00012f72) bg_sctrl_sk_pane_g2

0xcc6c,	// (0x00012f6a) bg_sctrl_sk_pane_g3

0x0008,

0xf861,	// (0x00015b5f) bg_sctrl_sk_pane_g

0xaffa,	// (0x000112f8) aid_size_touch_scroll_bar

0xcc84,	// (0x00012f82) bg_sctrl_sk_pane_g4

0xcc7c,	// (0x00012f7a) bg_sctrl_sk_pane_g5

0xcc8c,	// (0x00012f8a) bg_sctrl_sk_pane_g6

0xcc94,	// (0x00012f92) bg_sctrl_sk_pane_g7

0xcca4,	// (0x00012fa2) bg_sctrl_sk_pane_g8

0xcc9c,	// (0x00012f9a) bg_sctrl_sk_pane_g9

0x8f82,	// (0x0000f280) popup_fep_china_hwr2_fs_candidate_window

0x8f8a,	// (0x0000f288) popup_fep_china_hwr2_fs_control_window_ParamLimits

0x8f8a,	// (0x0000f288) popup_fep_china_hwr2_fs_control_window

0x9b2f,	// (0x0000fe2d) sctrl_sk_top_pane_g2

0x0001,

0xfd08,	// (0x00016006) sctrl_sk_top_pane_g

0x1b45,	// (0x00007e43) aid_fep_china_hwr2_fs_cell_ParamLimits

0x1b45,	// (0x00007e43) aid_fep_china_hwr2_fs_cell

0x1b56,	// (0x00007e54) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x1b56,	// (0x00007e54) bg_popup_fep_shadow_pane_cp4

0x1b6d,	// (0x00007e6b) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x1b6d,	// (0x00007e6b) bg_popup_fep_shadow_pane_cp5

0x1b7f,	// (0x00007e7d) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x1b7f,	// (0x00007e7d) popup_fep_china_hwr2_fs_control_bar_grid

0x1b8f,	// (0x00007e8d) popup_fep_china_hwr2_fs_control_funtion_grid

0x1b97,	// (0x00007e95) aid_fep_china_hwr2_fs_candi_cell

0xa811,	// (0x00010b0f) bg_popup_fep_shadow_pane_cp6

0x1ba1,	// (0x00007e9f) popup_fep_china_hwr2_fs_candidate_grid

0x1ba9,	// (0x00007ea7) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x1ba9,	// (0x00007ea7) cell_fep_china_hwr2_fs_funtion_grid

0xf49d,	// (0x0001579b) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x1bc1,	// (0x00007ebf) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x1bc1,	// (0x00007ebf) cell_fep_china_hwr2_fs_funtion_grid_g1

0x1bcf,	// (0x00007ecd) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x1bcf,	// (0x00007ecd) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd23,	// (0x00016021) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd23,	// (0x00016021) cell_fep_china_hwr2_fs_funtion_grid_g

0x1be5,	// (0x00007ee3) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x1be5,	// (0x00007ee3) cell_fep_china_hwr2_fs_funtion_grid_t1

0x1bfa,	// (0x00007ef8) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x1bfa,	// (0x00007ef8) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd28,	// (0x00016026) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd28,	// (0x00016026) cell_fep_china_hwr2_fs_funtion_grid_t

0x1c16,	// (0x00007f14) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x1c1e,	// (0x00007f1c) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x1c26,	// (0x00007f24) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2d,	// (0x0001602b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x1c2e,	// (0x00007f2c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x1c2e,	// (0x00007f2c) cell_fep_china_hwr2_fs_candidate_grid

0x1c47,	// (0x00007f45) popup_fep_china_hwr2_fs_candidate_grid_g20

0x1c4f,	// (0x00007f4d) popup_fep_china_hwr2_fs_candidate_grid_g21

0xf49d,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g1

0xf49d,	// (0x0001579b) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb48,	// (0x00015e46) cell_fep_china_hwr2_fs_candidate_grid_g

0x1c57,	// (0x00007f55) cell_fep_china_hwr2_fs_candidate_grid_t1

0xc842,	// (0x00012b40) clock_nsta_pane_cp_24_ParamLimits

0xc842,	// (0x00012b40) clock_nsta_pane_cp_24

0xc8c0,	// (0x00012bbe) indicator_nsta_pane_cp_24_ParamLimits

0xc8c0,	// (0x00012bbe) indicator_nsta_pane_cp_24

0xd986,	// (0x00013c84) heading_pane_g1

0x0001,

0xf8c6,	// (0x00015bc4) heading_pane_g

0xe3e6,	// (0x000146e4) grid_sct_catagory_button_pane

0xe416,	// (0x00014714) scroll_pane_cp5_ParamLimits

0xf106,	// (0x00015404) button_value_adjust_pane_cp5_ParamLimits

0xf106,	// (0x00015404) button_value_adjust_pane_cp5

0xf1fc,	// (0x000154fa) form2_midp_time_pane_ParamLimits

0x1c65,	// (0x00007f63) cell_sct_catagory_button_pane_ParamLimits

0x1c65,	// (0x00007f63) cell_sct_catagory_button_pane

0xf462,	// (0x00015760) bg_button_pane_cp01_ParamLimits

0xf462,	// (0x00015760) bg_button_pane_cp01

0xf49d,	// (0x0001579b) cell_sct_catagory_button_pane_g1

0x92a0,	// (0x0000f59e) popup_tb_extension_window

0x1c77,	// (0x00007f75) aid_size_cell_ext_ParamLimits

0x1c77,	// (0x00007f75) aid_size_cell_ext

0xab9e,	// (0x00010e9c) bg_tb_trans_pane_cp1_ParamLimits

0xab9e,	// (0x00010e9c) bg_tb_trans_pane_cp1

0x1c94,	// (0x00007f92) grid_tb_ext_pane_ParamLimits

0x1c94,	// (0x00007f92) grid_tb_ext_pane

0x1cb8,	// (0x00007fb6) cell_tb_ext_pane_ParamLimits

0x1cb8,	// (0x00007fb6) cell_tb_ext_pane

0x1ccd,	// (0x00007fcb) cell_tb_ext_pane_g1_ParamLimits

0x1ccd,	// (0x00007fcb) cell_tb_ext_pane_g1

0x1cea,	// (0x00007fe8) cell_tb_ext_pane_t1

0xab9e,	// (0x00010e9c) list_highlight_pane_cp11_ParamLimits

0xab9e,	// (0x00010e9c) list_highlight_pane_cp11

0x87d1,	// (0x0000eacf) popup_uni_indicator_window_ParamLimits

0x87d1,	// (0x0000eacf) popup_uni_indicator_window

0xb5f6,	// (0x000118f4) bg_popup_sub_pane_cp14

0x1d05,	// (0x00008003) list_uniindi_pane

0x1d11,	// (0x0000800f) uniindi_top_pane

0xab9e,	// (0x00010e9c) bg_uniindi_top_pane

0x1d30,	// (0x0000802e) uniindi_top_pane_g1

0x1d46,	// (0x00008044) uniindi_top_pane_g2

0x0003,

0xfd34,	// (0x00016032) uniindi_top_pane_g

0x1d70,	// (0x0000806e) uniindi_top_pane_t1

0x1d9a,	// (0x00008098) list_single_uniindi_pane_ParamLimits

0x1d9a,	// (0x00008098) list_single_uniindi_pane

0xf49d,	// (0x0001579b) bg_uniindi_top_pane_g1

0x1dac,	// (0x000080aa) list_single_uniindi_pane_g1

0x1dbf,	// (0x000080bd) list_single_uniindi_pane_t1

0x866d,	// (0x0000e96b) control_bg_pane

0x1de4,	// (0x000080e2) bg_sctrl_sk_pane_cp1

0x1ded,	// (0x000080eb) bg_sctrl_sk_pane_cp2

0x1df6,	// (0x000080f4) control_bg_pane_g1

0x1dff,	// (0x000080fd) control_bg_pane_g2

0x0001,

0xfd3d,	// (0x0001603b) control_bg_pane_g

0xef7a,	// (0x00015278) cell_indicator_nsta_pane_g1_ParamLimits

0xef88,	// (0x00015286) cell_indicator_nsta_pane_g2_ParamLimits

0xfaac,	// (0x00015daa) cell_indicator_nsta_pane_g_ParamLimits

0xf27a,	// (0x00015578) form2_midp_time_pane_t1_ParamLimits

0x8ef8,	// (0x0000f1f6) main_idle_act4_pane_ParamLimits

0x8ef8,	// (0x0000f1f6) main_idle_act4_pane

0x92a0,	// (0x0000f59e) popup_tb_extension_window_ParamLimits

0x1cac,	// (0x00007faa) tb_ext_find_pane_ParamLimits

0x1cac,	// (0x00007faa) tb_ext_find_pane

0x1e08,	// (0x00008106) ai_gene_pane_1_cp1

0xc541,	// (0x0001283f) ai_gene_pane_2_cp1

0x1e10,	// (0x0000810e) list_single_idle_plugin_calendar_pane

0x1e19,	// (0x00008117) list_single_idle_plugin_notification_pane

0x1e22,	// (0x00008120) list_single_idle_plugin_player_pane

0x1e2b,	// (0x00008129) list_single_idle_plugin_shortcut_pane_ParamLimits

0x1e2b,	// (0x00008129) list_single_idle_plugin_shortcut_pane

0x1e47,	// (0x00008145) main_idle_act4_pane_t1

0x1e59,	// (0x00008157) main_idle_act4_pane_t2

0x0001,

0xfd42,	// (0x00016040) main_idle_act4_pane_t

0x1e6b,	// (0x00008169) middle_sk_idle_act4_pane_ParamLimits

0x1e6b,	// (0x00008169) middle_sk_idle_act4_pane

0x1e81,	// (0x0000817f) popup_clock_digital_analogue_window_cp2

0x1e9b,	// (0x00008199) shortcut_wheel_idle_act4_pane_ParamLimits

0x1e9b,	// (0x00008199) shortcut_wheel_idle_act4_pane

0xf49d,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g1

0xf49d,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g2

0xf49d,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g3

0xf49d,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g4

0xf49d,	// (0x0001579b) shortcut_wheel_idle_act4_pane_g5

0x1eaf,	// (0x000081ad) shortcut_wheel_idle_act4_pane_g6

0x1eb7,	// (0x000081b5) shortcut_wheel_idle_act4_pane_g7

0x1ebf,	// (0x000081bd) shortcut_wheel_idle_act4_pane_g8

0x1ec7,	// (0x000081c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd47,	// (0x00016045) shortcut_wheel_idle_act4_pane_g

0x01a7,	// (0x000064a5) middle_sk_idle_act4_pane_g1_ParamLimits

0x01a7,	// (0x000064a5) middle_sk_idle_act4_pane_g1

0x1f2b,	// (0x00008229) middle_sk_idle_act4_pane_g2_ParamLimits

0x1f2b,	// (0x00008229) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6a,	// (0x00016068) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6a,	// (0x00016068) middle_sk_idle_act4_pane_g

0x1f37,	// (0x00008235) middle_sk_idle_act4_pane_t1_ParamLimits

0x1f37,	// (0x00008235) middle_sk_idle_act4_pane_t1

0x1f54,	// (0x00008252) grid_ai_shortcut_pane_ParamLimits

0x1f54,	// (0x00008252) grid_ai_shortcut_pane

0x1f6d,	// (0x0000826b) list_highlight_pane_cp16_ParamLimits

0x1f6d,	// (0x0000826b) list_highlight_pane_cp16

0x1f7a,	// (0x00008278) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x1f7a,	// (0x00008278) list_single_idle_plugin_shortcut_pane_g1

0x1f86,	// (0x00008284) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x1f86,	// (0x00008284) list_single_idle_plugin_shortcut_pane_g2

0x1f9e,	// (0x0000829c) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x1f9e,	// (0x0000829c) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6f,	// (0x0001606d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6f,	// (0x0001606d) list_single_idle_plugin_shortcut_pane_g

0x1fb1,	// (0x000082af) cell_ai_shortcut_pane_ParamLimits

0x1fb1,	// (0x000082af) cell_ai_shortcut_pane

0x1fd2,	// (0x000082d0) cell_ai_shortcut_pane_g1_ParamLimits

0x1fd2,	// (0x000082d0) cell_ai_shortcut_pane_g1

0x1e08,	// (0x00008106) ai_gene_pane_1_cp2

0x1ff4,	// (0x000082f2) ai_gene_pane_2_cp2

0x1ffc,	// (0x000082fa) list_highlight_pane_cp15

0x2005,	// (0x00008303) list_single_idle_plugin_calendar_pane_g1

0x1ffc,	// (0x000082fa) list_highlight_pane_cp17

0x200d,	// (0x0000830b) list_single_idle_plugin_calendar_pane_g1_copy1

0x2015,	// (0x00008313) list_single_idle_plugin_player_pane_g1

0xe63d,	// (0x0001493b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd76,	// (0x00016074) list_single_idle_plugin_player_pane_g

0x201d,	// (0x0000831b) list_single_idle_plugin_player_pane_t1

0x202b,	// (0x00008329) list_single_idle_plugin_player_pane_t2

0x2039,	// (0x00008337) list_single_idle_plugin_player_pane_t3

0x2047,	// (0x00008345) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7b,	// (0x00016079) list_single_idle_plugin_player_pane_t

0x2055,	// (0x00008353) wait_bar_pane_cp15

0x205d,	// (0x0000835b) grid_ai_notification_pane

0xe63d,	// (0x0001493b) list_single_idle_plugin_notification_pane_g1

0x2066,	// (0x00008364) cell_ai_notification_pane_ParamLimits

0x2066,	// (0x00008364) cell_ai_notification_pane

0x2073,	// (0x00008371) cell_ai_notification_pane_g1

0x207b,	// (0x00008379) cell_ai_notification_pane_t1

0x2089,	// (0x00008387) tb_ext_find_button_pane

0x2091,	// (0x0000838f) tb_ext_find_pane_g1

0x2099,	// (0x00008397) tb_ext_find_pane_t1

0xbda9,	// (0x000120a7) tb_ext_find_button_pane_g1

0x20a7,	// (0x000083a5) tb_ext_find_button_pane_g2

0x0001,

0xfd84,	// (0x00016082) tb_ext_find_button_pane_g

0x1e47,	// (0x00008145) main_idle_act4_pane_t1_ParamLimits

0x1e59,	// (0x00008157) main_idle_act4_pane_t2_ParamLimits

0xfd42,	// (0x00016040) main_idle_act4_pane_t_ParamLimits

0x1e81,	// (0x0000817f) popup_clock_digital_analogue_window_cp2_ParamLimits

0x1e8f,	// (0x0000818d) sat_plugin_idle_act4_pane_ParamLimits

0x1e8f,	// (0x0000818d) sat_plugin_idle_act4_pane

0x20b0,	// (0x000083ae) sat_plugin_idle_act4_pane_t1_ParamLimits

0x20b0,	// (0x000083ae) sat_plugin_idle_act4_pane_t1

0x20c3,	// (0x000083c1) sat_plugin_idle_act4_pane_t2_ParamLimits

0x20c3,	// (0x000083c1) sat_plugin_idle_act4_pane_t2

0x20d6,	// (0x000083d4) sat_plugin_idle_act4_pane_t3_ParamLimits

0x20d6,	// (0x000083d4) sat_plugin_idle_act4_pane_t3

0x20e9,	// (0x000083e7) sat_plugin_idle_act4_pane_t4_ParamLimits

0x20e9,	// (0x000083e7) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd89,	// (0x00016087) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd89,	// (0x00016087) sat_plugin_idle_act4_pane_t

0x8732,	// (0x0000ea30) popup_battery_window_ParamLimits

0x8732,	// (0x0000ea30) popup_battery_window

0xab9e,	// (0x00010e9c) bg_popup_sub_pane_cp25_ParamLimits

0xab9e,	// (0x00010e9c) bg_popup_sub_pane_cp25

0x20fc,	// (0x000083fa) popup_battery_window_g1_ParamLimits

0x20fc,	// (0x000083fa) popup_battery_window_g1

0x2108,	// (0x00008406) popup_battery_window_t1_ParamLimits

0x2108,	// (0x00008406) popup_battery_window_t1

0x211a,	// (0x00008418) popup_battery_window_t2_ParamLimits

0x211a,	// (0x00008418) popup_battery_window_t2

0x0001,

0xfd92,	// (0x00016090) popup_battery_window_t_ParamLimits

0xfd92,	// (0x00016090) popup_battery_window_t

0xc41a,	// (0x00012718) midp_canvas_pane_ParamLimits

0xc489,	// (0x00012787) midp_keypad_pane_ParamLimits

0xc489,	// (0x00012787) midp_keypad_pane

0xc748,	// (0x00012a46) main_midp_pane_ParamLimits

0xefe3,	// (0x000152e1) signal_pane_g2_cp_ParamLimits

0x2137,	// (0x00008435) aid_size_cell_midp_keypad_ParamLimits

0x2137,	// (0x00008435) aid_size_cell_midp_keypad

0x2151,	// (0x0000844f) midp_keyp_game_grid_pane_ParamLimits

0x2151,	// (0x0000844f) midp_keyp_game_grid_pane

0x216b,	// (0x00008469) midp_keyp_rocker_pane_ParamLimits

0x216b,	// (0x00008469) midp_keyp_rocker_pane

0x2198,	// (0x00008496) midp_keyp_sk_left_pane_ParamLimits

0x2198,	// (0x00008496) midp_keyp_sk_left_pane

0x21f0,	// (0x000084ee) midp_keyp_sk_right_pane_ParamLimits

0x21f0,	// (0x000084ee) midp_keyp_sk_right_pane

0xa811,	// (0x00010b0f) bg_button_pane_cp03

0x2242,	// (0x00008540) midp_keyp_sk_left_pane_g1

0xa811,	// (0x00010b0f) bg_button_pane_cp04

0x2242,	// (0x00008540) midp_keyp_sk_right_pane_g1

0xf49d,	// (0x0001579b) midp_keyp_rocker_pane_g1

0x224b,	// (0x00008549) keyp_game_cell_pane_ParamLimits

0x224b,	// (0x00008549) keyp_game_cell_pane

0xa811,	// (0x00010b0f) bg_button_pane_cp02

0x225c,	// (0x0000855a) keyp_game_cell_pane_g1

0x8768,	// (0x0000ea66) popup_fep_vkb2_window_ParamLimits

0x8768,	// (0x0000ea66) popup_fep_vkb2_window

0x9dee,	// (0x000100ec) aid_size_cell_vkb2_ParamLimits

0x9dee,	// (0x000100ec) aid_size_cell_vkb2

0x9e42,	// (0x00010140) popup_fep_vkb2_window_g1_ParamLimits

0x9e42,	// (0x00010140) popup_fep_vkb2_window_g1

0x9e8a,	// (0x00010188) vkb2_area_bottom_pane_ParamLimits

0x9e8a,	// (0x00010188) vkb2_area_bottom_pane

0x9ec2,	// (0x000101c0) vkb2_area_keypad_pane_ParamLimits

0x9ec2,	// (0x000101c0) vkb2_area_keypad_pane

0x9efa,	// (0x000101f8) vkb2_area_top_pane_ParamLimits

0x9efa,	// (0x000101f8) vkb2_area_top_pane

0x9f6a,	// (0x00010268) vkb2_top_entry_pane_ParamLimits

0x9f6a,	// (0x00010268) vkb2_top_entry_pane

0x9f94,	// (0x00010292) vkb2_top_grid_left_pane_ParamLimits

0x9f94,	// (0x00010292) vkb2_top_grid_left_pane

0x9fb2,	// (0x000102b0) vkb2_top_grid_right_pane_ParamLimits

0x9fb2,	// (0x000102b0) vkb2_top_grid_right_pane

0x9fd0,	// (0x000102ce) vkb2_cell_keypad_pane_ParamLimits

0x9fd0,	// (0x000102ce) vkb2_cell_keypad_pane

0xa081,	// (0x0001037f) vkb2_area_bottom_grid_pane_ParamLimits

0xa081,	// (0x0001037f) vkb2_area_bottom_grid_pane

0xa0a5,	// (0x000103a3) vkb2_area_bottom_pane_g1_ParamLimits

0xa0a5,	// (0x000103a3) vkb2_area_bottom_pane_g1

0xa0c9,	// (0x000103c7) vkb2_area_bottom_pane_g2_ParamLimits

0xa0c9,	// (0x000103c7) vkb2_area_bottom_pane_g2

0xa0f7,	// (0x000103f5) vkb2_area_bottom_pane_g3_ParamLimits

0xa0f7,	// (0x000103f5) vkb2_area_bottom_pane_g3

0x0002,

0xfd97,	// (0x00016095) vkb2_area_bottom_pane_g_ParamLimits

0xfd97,	// (0x00016095) vkb2_area_bottom_pane_g

0xa148,	// (0x00010446) vkb2_top_cell_left_pane_ParamLimits

0xa148,	// (0x00010446) vkb2_top_cell_left_pane

0x25f5,	// (0x000088f3) vkb2_top_entry_pane_g1_ParamLimits

0x25f5,	// (0x000088f3) vkb2_top_entry_pane_g1

0x2603,	// (0x00008901) vkb2_top_entry_pane_t1_ParamLimits

0x2603,	// (0x00008901) vkb2_top_entry_pane_t1

0x2635,	// (0x00008933) vkb2_top_entry_pane_t2_ParamLimits

0x2635,	// (0x00008933) vkb2_top_entry_pane_t2

0x2667,	// (0x00008965) vkb2_top_entry_pane_t3_ParamLimits

0x2667,	// (0x00008965) vkb2_top_entry_pane_t3

0x0002,

0xfd9e,	// (0x0001609c) vkb2_top_entry_pane_t_ParamLimits

0xfd9e,	// (0x0001609c) vkb2_top_entry_pane_t

0xa195,	// (0x00010493) vkb2_top_grid_right_pane_g1_ParamLimits

0xa195,	// (0x00010493) vkb2_top_grid_right_pane_g1

0xa1ab,	// (0x000104a9) vkb2_top_grid_right_pane_g2_ParamLimits

0xa1ab,	// (0x000104a9) vkb2_top_grid_right_pane_g2

0xa1c3,	// (0x000104c1) vkb2_top_grid_right_pane_g3_ParamLimits

0xa1c3,	// (0x000104c1) vkb2_top_grid_right_pane_g3

0xa1db,	// (0x000104d9) vkb2_top_grid_right_pane_g4_ParamLimits

0xa1db,	// (0x000104d9) vkb2_top_grid_right_pane_g4

0x0003,

0xfda5,	// (0x000160a3) vkb2_top_grid_right_pane_g_ParamLimits

0xfda5,	// (0x000160a3) vkb2_top_grid_right_pane_g

0xa1f1,	// (0x000104ef) vkb2_top_cell_left_pane_g1

0xa208,	// (0x00010506) vkb2_cell_keypad_pane_g1_ParamLimits

0xa208,	// (0x00010506) vkb2_cell_keypad_pane_g1

0x2739,	// (0x00008a37) vkb2_cell_keypad_pane_t1_ParamLimits

0x2739,	// (0x00008a37) vkb2_cell_keypad_pane_t1

0xa216,	// (0x00010514) vkb2_cell_bottom_grid_pane_ParamLimits

0xa216,	// (0x00010514) vkb2_cell_bottom_grid_pane

0xa24f,	// (0x0001054d) vkb2_cell_bottom_grid_pane_g1

0x1ecf,	// (0x000081cd) aid_call2_pane_cp02

0x1ed7,	// (0x000081d5) aid_call_pane_cp02

0x1edf,	// (0x000081dd) clock_digital_number_pane_cp10

0x1ee7,	// (0x000081e5) clock_digital_number_pane_cp11

0x1eef,	// (0x000081ed) clock_digital_number_pane_cp12

0x1ef7,	// (0x000081f5) clock_digital_number_pane_cp13

0x1eff,	// (0x000081fd) clock_digital_separator_pane_cp10

0xbda9,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g1

0xbda9,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g2

0x1f07,	// (0x00008205) popup_clock_digital_analogue_window_cp2_g3

0xbda9,	// (0x000120a7) popup_clock_digital_analogue_window_cp2_g4

0x1f07,	// (0x00008205) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5a,	// (0x00016058) popup_clock_digital_analogue_window_cp2_g

0x1f0f,	// (0x0000820d) popup_clock_digital_analogue_window_cp2_t1

0x1f1d,	// (0x0000821b) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd65,	// (0x00016063) popup_clock_digital_analogue_window_cp2_t

0xf49d,	// (0x0001579b) clock_digital_number_pane_cp10_g1

0xf49d,	// (0x0001579b) clock_digital_number_pane_cp10_g2

0x0001,

0xfb48,	// (0x00015e46) clock_digital_number_pane_cp10_g

0xf49d,	// (0x0001579b) clock_digital_separator_pane_cp10_g1

0xf49d,	// (0x0001579b) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb48,	// (0x00015e46) clock_digital_separator_pane_cp10_g

0x1d52,	// (0x00008050) uniindi_top_pane_g3

0x1d63,	// (0x00008061) uniindi_top_pane_g4

0xa03b,	// (0x00010339) vkb2_row_keypad_pane_ParamLimits

0xa03b,	// (0x00010339) vkb2_row_keypad_pane

0xa26b,	// (0x00010569) vkb2_cell_t_keypad_pane_ParamLimits

0xa26b,	// (0x00010569) vkb2_cell_t_keypad_pane

0xa278,	// (0x00010576) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xa278,	// (0x00010576) vkb2_cell_t_keypad_pane_cp08

0xa288,	// (0x00010586) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xa288,	// (0x00010586) vkb2_cell_t_keypad_pane_cp09

0xa299,	// (0x00010597) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xa299,	// (0x00010597) vkb2_cell_t_keypad_pane_cp01

0xa2a9,	// (0x000105a7) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xa2a9,	// (0x000105a7) vkb2_cell_t_keypad_pane_cp02

0xa2b9,	// (0x000105b7) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xa2b9,	// (0x000105b7) vkb2_cell_t_keypad_pane_cp03

0xa2c9,	// (0x000105c7) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xa2c9,	// (0x000105c7) vkb2_cell_t_keypad_pane_cp04

0xa2d9,	// (0x000105d7) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xa2d9,	// (0x000105d7) vkb2_cell_t_keypad_pane_cp05

0xa2e9,	// (0x000105e7) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xa2e9,	// (0x000105e7) vkb2_cell_t_keypad_pane_cp06

0xa2f9,	// (0x000105f7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xa2f9,	// (0x000105f7) vkb2_cell_t_keypad_pane_cp07

0xa309,	// (0x00010607) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xa309,	// (0x00010607) vkb2_cell_t_keypad_pane_cp10

0x9b2f,	// (0x0000fe2d) vkb2_cell_t_keypad_pane_g1

0x2858,	// (0x00008b56) vkb2_cell_t_keypad_pane_t1

0x866d,	// (0x0000e96b) popup_grid_graphic2_window

0x286a,	// (0x00008b68) aid_size_cell_graphic2_ParamLimits

0x286a,	// (0x00008b68) aid_size_cell_graphic2

0x28a2,	// (0x00008ba0) bg_popup_window_pane_cp21_ParamLimits

0x28a2,	// (0x00008ba0) bg_popup_window_pane_cp21

0x28b0,	// (0x00008bae) graphic2_pages_pane_ParamLimits

0x28b0,	// (0x00008bae) graphic2_pages_pane

0x28ea,	// (0x00008be8) grid_graphic2_control_pane_ParamLimits

0x28ea,	// (0x00008be8) grid_graphic2_control_pane

0x2920,	// (0x00008c1e) grid_graphic2_pane_ParamLimits

0x2920,	// (0x00008c1e) grid_graphic2_pane

0x2980,	// (0x00008c7e) cell_graphic2_pane

0x866d,	// (0x0000e96b) main_comp_mode_pane

0x152b,	// (0x00007829) list_ai3_gene_pane_ParamLimits

0x18e9,	// (0x00007be7) bg_popup_window_pane_cp19_ParamLimits

0x18f5,	// (0x00007bf3) bg_touch_area_indi_pane_ParamLimits

0x18f5,	// (0x00007bf3) bg_touch_area_indi_pane

0x190b,	// (0x00007c09) bg_touch_area_indi_pane_cp01_ParamLimits

0x190b,	// (0x00007c09) bg_touch_area_indi_pane_cp01

0x1921,	// (0x00007c1f) bg_touch_area_indi_pane_cp02_ParamLimits

0x1921,	// (0x00007c1f) bg_touch_area_indi_pane_cp02

0x1937,	// (0x00007c35) bg_touch_area_indi_pane_cp03_ParamLimits

0x1937,	// (0x00007c35) bg_touch_area_indi_pane_cp03

0x194d,	// (0x00007c4b) popup_slider_window_g1_ParamLimits

0x1969,	// (0x00007c67) popup_slider_window_g2_ParamLimits

0x1985,	// (0x00007c83) popup_slider_window_g3_ParamLimits

0xfcef,	// (0x00015fed) popup_slider_window_g_ParamLimits

0x19e1,	// (0x00007cdf) popup_slider_window_t1_ParamLimits

0x1a53,	// (0x00007d51) small_volume_slider_vertical_pane_ParamLimits

0x2980,	// (0x00008c7e) cell_graphic2_pane_ParamLimits

0x29bd,	// (0x00008cbb) bg_button_pane_cp10_ParamLimits

0x29bd,	// (0x00008cbb) bg_button_pane_cp10

0x29d0,	// (0x00008cce) bg_button_pane_cp11_ParamLimits

0x29d0,	// (0x00008cce) bg_button_pane_cp11

0x29e3,	// (0x00008ce1) graphic2_pages_pane_g1_ParamLimits

0x29e3,	// (0x00008ce1) graphic2_pages_pane_g1

0x29fe,	// (0x00008cfc) graphic2_pages_pane_g2_ParamLimits

0x29fe,	// (0x00008cfc) graphic2_pages_pane_g2

0x0001,

0xfdb3,	// (0x000160b1) graphic2_pages_pane_g_ParamLimits

0xfdb3,	// (0x000160b1) graphic2_pages_pane_g

0x2a16,	// (0x00008d14) graphic2_pages_pane_t1_ParamLimits

0x2a16,	// (0x00008d14) graphic2_pages_pane_t1

0x2a2c,	// (0x00008d2a) cell_graphic2_control_pane_ParamLimits

0x2a2c,	// (0x00008d2a) cell_graphic2_control_pane

0x2a48,	// (0x00008d46) cell_graphic2_pane_g1_ParamLimits

0x2a48,	// (0x00008d46) cell_graphic2_pane_g1

0x2a55,	// (0x00008d53) cell_graphic2_pane_g2_ParamLimits

0x2a55,	// (0x00008d53) cell_graphic2_pane_g2

0x2a62,	// (0x00008d60) cell_graphic2_pane_g3_ParamLimits

0x2a62,	// (0x00008d60) cell_graphic2_pane_g3

0x2a6f,	// (0x00008d6d) cell_graphic2_pane_g4_ParamLimits

0x2a6f,	// (0x00008d6d) cell_graphic2_pane_g4

0x2a7c,	// (0x00008d7a) cell_graphic2_pane_g5_ParamLimits

0x2a7c,	// (0x00008d7a) cell_graphic2_pane_g5

0x0004,

0xfdb8,	// (0x000160b6) cell_graphic2_pane_g_ParamLimits

0xfdb8,	// (0x000160b6) cell_graphic2_pane_g

0x2a97,	// (0x00008d95) cell_graphic2_pane_t1_ParamLimits

0x2a97,	// (0x00008d95) cell_graphic2_pane_t1

0xcd7a,	// (0x00013078) grid_highlight_pane_cp11_ParamLimits

0xcd7a,	// (0x00013078) grid_highlight_pane_cp11

0xab9e,	// (0x00010e9c) bg_button_pane_cp05

0x2ace,	// (0x00008dcc) cell_graphic2_control_pane_g1

0xf49d,	// (0x0001579b) bg_touch_area_indi_pane_g1

0x2af6,	// (0x00008df4) aid_cmod_rocker_key_size

0x2b00,	// (0x00008dfe) aid_cmode_itu_key_size

0x2b0a,	// (0x00008e08) main_cmode_video_pane

0x2b12,	// (0x00008e10) main_comp_mode_itu_pane

0x2b1c,	// (0x00008e1a) main_comp_mode_rocker_pane

0x2b24,	// (0x00008e22) cell_cmode_rocker_pane_ParamLimits

0x2b24,	// (0x00008e22) cell_cmode_rocker_pane

0x2b36,	// (0x00008e34) cell_cmode_itu_pane_ParamLimits

0x2b36,	// (0x00008e34) cell_cmode_itu_pane

0xb5f6,	// (0x000118f4) bg_button_pane_cp06_ParamLimits

0xb5f6,	// (0x000118f4) bg_button_pane_cp06

0x01a7,	// (0x000064a5) cell_cmode_rocker_pane_g1_ParamLimits

0x01a7,	// (0x000064a5) cell_cmode_rocker_pane_g1

0x1bc1,	// (0x00007ebf) cell_cmode_rocker_pane_g2_ParamLimits

0x1bc1,	// (0x00007ebf) cell_cmode_rocker_pane_g2

0x0001,

0xfdc8,	// (0x000160c6) cell_cmode_rocker_pane_g_ParamLimits

0xfdc8,	// (0x000160c6) cell_cmode_rocker_pane_g

0xa811,	// (0x00010b0f) bg_button_pane_cp07

0x2b4b,	// (0x00008e49) cell_cmode_itu_pane_g1

0x2b54,	// (0x00008e52) cell_cmode_itu_pane_t1

0x2b62,	// (0x00008e60) cell_cmode_itu_pane_t2

0x0001,

0xfdcd,	// (0x000160cb) cell_cmode_itu_pane_t

0x1dd4,	// (0x000080d2) aid_touch_ctrl_left

0x1ddc,	// (0x000080da) aid_touch_ctrl_right

0xa811,	// (0x00010b0f) compa_mode_pane

0x2b70,	// (0x00008e6e) aid_cmod_rocker_key_size_cp

0x2b7a,	// (0x00008e78) aid_cmode_itu_key_size_cp

0x2b84,	// (0x00008e82) compa_mode_pane_g1

0x2b8c,	// (0x00008e8a) compa_mode_pane_g2

0x2b94,	// (0x00008e92) compa_mode_pane_g3

0x0002,

0xfdd2,	// (0x000160d0) compa_mode_pane_g

0x2b9c,	// (0x00008e9a) main_comp_mode_itu_pane_cp

0x2ba4,	// (0x00008ea2) main_comp_mode_rocker_pane_cp

0x2bac,	// (0x00008eaa) cell_cmode_itu_pane_cp_ParamLimits

0x2bac,	// (0x00008eaa) cell_cmode_itu_pane_cp

0x2bc1,	// (0x00008ebf) cell_cmode_rocker_pane_cp_ParamLimits

0x2bc1,	// (0x00008ebf) cell_cmode_rocker_pane_cp

0xb5f6,	// (0x000118f4) bg_button_pane_cp06_cp_ParamLimits

0xb5f6,	// (0x000118f4) bg_button_pane_cp06_cp

0x01a7,	// (0x000064a5) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x01a7,	// (0x000064a5) cell_cmode_rocker_pane_g1_cp

0xf49d,	// (0x0001579b) cell_cmode_rocker_pane_g2_cp

0xa811,	// (0x00010b0f) bg_button_pane_cp07_cp

0x2bd3,	// (0x00008ed1) cell_cmode_itu_pane_g1_cp

0x2bdc,	// (0x00008eda) cell_cmode_itu_pane_t1_cp

0x2bdc,	// (0x00008eda) cell_cmode_itu_pane_t2_cp

0xe180,	// (0x0001447e) settings_code_pane_cp2

0xa905,	// (0x00010c03) bg_popup_window_pane_cp3_ParamLimits

0xad76,	// (0x00011074) heading_pane_cp3_ParamLimits

0xad82,	// (0x00011080) listscroll_popup_graphic_pane_ParamLimits

0x98ea,	// (0x0000fbe8) fep_hwr_aid_pane_ParamLimits

0x9d49,	// (0x00010047) aid_touch_sctrl_top_ParamLimits

0x9d64,	// (0x00010062) sctrl_sk_top_pane_g1_ParamLimits

0x9b2f,	// (0x0000fe2d) sctrl_sk_top_pane_g2_ParamLimits

0xfd08,	// (0x00016006) sctrl_sk_top_pane_g_ParamLimits

0x9d71,	// (0x0001006f) sctrl_sk_top_pane_t1_ParamLimits

0x9d49,	// (0x00010047) aid_touch_sctrl_bottom_ParamLimits

0x9d71,	// (0x0001006f) sctrl_sk_bottom_pane_t1_ParamLimits

0x1d1e,	// (0x0000801c) aid_area_touch_clock

0x9f32,	// (0x00010230) aid_vkb2_area_top_pane_cell_ParamLimits

0x9f32,	// (0x00010230) aid_vkb2_area_top_pane_cell

0xa05d,	// (0x0001035b) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xa05d,	// (0x0001035b) aid_vkb2_area_bottom_pane_cell

0x25ed,	// (0x000088eb) popup_char_count_window

0x2bea,	// (0x00008ee8) popup_char_count_window_g1

0x2bf3,	// (0x00008ef1) popup_char_count_window_g2

0x2bfc,	// (0x00008efa) popup_char_count_window_g3

0x0002,

0xfdd9,	// (0x000160d7) popup_char_count_window_g

0x2c05,	// (0x00008f03) popup_char_count_window_t1

0x9e20,	// (0x0001011e) popup_fep_char_preview_window_ParamLimits

0x9e20,	// (0x0001011e) popup_fep_char_preview_window

0x9f50,	// (0x0001024e) vkb2_top_candi_pane_ParamLimits

0x9f50,	// (0x0001024e) vkb2_top_candi_pane

0x2c13,	// (0x00008f11) cell_vkb2_top_candi_pane_ParamLimits

0x2c13,	// (0x00008f11) cell_vkb2_top_candi_pane

0xa31e,	// (0x0001061c) bg_popup_fep_char_preview_window_ParamLimits

0xa31e,	// (0x0001061c) bg_popup_fep_char_preview_window

0xa32c,	// (0x0001062a) popup_fep_char_preview_window_t1_ParamLimits

0xa32c,	// (0x0001062a) popup_fep_char_preview_window_t1

0x2c96,	// (0x00008f94) bg_popup_fep_char_preview_window_g1

0x2c8e,	// (0x00008f8c) bg_popup_fep_char_preview_window_g2

0x2c86,	// (0x00008f84) bg_popup_fep_char_preview_window_g3

0x2cbe,	// (0x00008fbc) bg_popup_fep_char_preview_window_g4

0x2cb6,	// (0x00008fb4) bg_popup_fep_char_preview_window_g5

0xa366,	// (0x00010664) bg_popup_fep_char_preview_window_g6

0x2ca6,	// (0x00008fa4) bg_popup_fep_char_preview_window_g7

0x2c9e,	// (0x00008f9c) bg_popup_fep_char_preview_window_g8

0x2cc6,	// (0x00008fc4) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde0,	// (0x000160de) bg_popup_fep_char_preview_window_g

0x9b2f,	// (0x0000fe2d) cell_vkb2_top_candi_pane_g1_ParamLimits

0x9b2f,	// (0x0000fe2d) cell_vkb2_top_candi_pane_g1

0x9b3d,	// (0x0000fe3b) cell_vkb2_top_candi_pane_g2_ParamLimits

0x9b3d,	// (0x0000fe3b) cell_vkb2_top_candi_pane_g2

0x2cef,	// (0x00008fed) cell_vkb2_top_candi_pane_g3_ParamLimits

0x2cef,	// (0x00008fed) cell_vkb2_top_candi_pane_g3

0xa36e,	// (0x0001066c) cell_vkb2_top_candi_pane_g4_ParamLimits

0xa36e,	// (0x0001066c) cell_vkb2_top_candi_pane_g4

0x051f,	// (0x0000681d) cell_vkb2_top_candi_pane_g5_ParamLimits

0x051f,	// (0x0000681d) cell_vkb2_top_candi_pane_g5

0xa38f,	// (0x0001068d) cell_vkb2_top_candi_pane_g6_ParamLimits

0xa38f,	// (0x0001068d) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf3,	// (0x000160f1) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf3,	// (0x000160f1) cell_vkb2_top_candi_pane_g

0xa39d,	// (0x0001069b) cell_vkb2_top_candi_pane_t1

0x96f9,	// (0x0000f9f7) aid_size_touch_slider_mark_ParamLimits

0x96f9,	// (0x0000f9f7) aid_size_touch_slider_mark

0x28de,	// (0x00008bdc) grid_graphic2_catg_pane_ParamLimits

0x28de,	// (0x00008bdc) grid_graphic2_catg_pane

0x295c,	// (0x00008c5a) popup_grid_graphic2_window_t1_ParamLimits

0x295c,	// (0x00008c5a) popup_grid_graphic2_window_t1

0x296e,	// (0x00008c6c) popup_grid_graphic2_window_t2_ParamLimits

0x296e,	// (0x00008c6c) popup_grid_graphic2_window_t2

0x0001,

0xfdae,	// (0x000160ac) popup_grid_graphic2_window_t_ParamLimits

0xfdae,	// (0x000160ac) popup_grid_graphic2_window_t

0xab9e,	// (0x00010e9c) bg_button_pane_cp05_ParamLimits

0x2ace,	// (0x00008dcc) cell_graphic2_control_pane_g1_ParamLimits

0x2d2e,	// (0x0000902c) cell_graphic2_catg_pane_ParamLimits

0x2d2e,	// (0x0000902c) cell_graphic2_catg_pane

0xa811,	// (0x00010b0f) bg_button_pane_cp12

0x2d40,	// (0x0000903e) cell_graphic2_catg_pane_g1

0x1cea,	// (0x00007fe8) cell_tb_ext_pane_t1_ParamLimits

0xa168,	// (0x00010466) vkb2_top_cell_right_narrow_pane_ParamLimits

0xa168,	// (0x00010466) vkb2_top_cell_right_narrow_pane

0xa180,	// (0x0001047e) vkb2_top_cell_right_wide_pane_ParamLimits

0xa180,	// (0x0001047e) vkb2_top_cell_right_wide_pane

0x98dc,	// (0x0000fbda) bg_vkb2_func_pane_ParamLimits

0x98dc,	// (0x0000fbda) bg_vkb2_func_pane

0xa1f1,	// (0x000104ef) vkb2_top_cell_left_pane_g1_ParamLimits

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp03_ParamLimits

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp03

0xa24f,	// (0x0001054d) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0xcc6c,	// (0x00012f6a) bg_vkb2_func_pane_g1

0xcc74,	// (0x00012f72) bg_vkb2_func_pane_g2

0xcc84,	// (0x00012f82) bg_vkb2_func_pane_g3

0xcc7c,	// (0x00012f7a) bg_vkb2_func_pane_g4

0xcc8c,	// (0x00012f8a) bg_vkb2_func_pane_g5

0xcc94,	// (0x00012f92) bg_vkb2_func_pane_g6

0xcc9c,	// (0x00012f9a) bg_vkb2_func_pane_g7

0xcca4,	// (0x00012fa2) bg_vkb2_func_pane_g8

0xcc64,	// (0x00012f62) bg_vkb2_func_pane_g9

0x0008,

0xfe00,	// (0x000160fe) bg_vkb2_func_pane_g

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp01_ParamLimits

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp01

0xa1f1,	// (0x000104ef) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xa1f1,	// (0x000104ef) vkb2_top_cell_right_wide_pane_g1

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp02_ParamLimits

0x98dc,	// (0x0000fbda) bg_vkb2_fuc_pane_cp02

0xa24f,	// (0x0001054d) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xa24f,	// (0x0001054d) vkb2_top_cell_right_narrow_pane_g1

0x187b,	// (0x00007b79) aid_touch_area_decrease_ParamLimits

0x187b,	// (0x00007b79) aid_touch_area_decrease

0x1893,	// (0x00007b91) aid_touch_area_increase_ParamLimits

0x1893,	// (0x00007b91) aid_touch_area_increase

0x189f,	// (0x00007b9d) aid_touch_area_mute_ParamLimits

0x189f,	// (0x00007b9d) aid_touch_area_mute

0x18bb,	// (0x00007bb9) aid_touch_area_slider_ParamLimits

0x18bb,	// (0x00007bb9) aid_touch_area_slider

0x19a1,	// (0x00007c9f) popup_slider_window_g4_ParamLimits

0x19a1,	// (0x00007c9f) popup_slider_window_g4

0x19ad,	// (0x00007cab) popup_slider_window_g5_ParamLimits

0x19ad,	// (0x00007cab) popup_slider_window_g5

0x19cf,	// (0x00007ccd) popup_slider_window_g6_ParamLimits

0x19cf,	// (0x00007ccd) popup_slider_window_g6

0x1a0d,	// (0x00007d0b) popup_slider_window_t2_ParamLimits

0x1a0d,	// (0x00007d0b) popup_slider_window_t2

0x0001,

0xfcfc,	// (0x00015ffa) popup_slider_window_t_ParamLimits

0xfcfc,	// (0x00015ffa) popup_slider_window_t

0x1a25,	// (0x00007d23) slider_pane_ParamLimits

0x1a25,	// (0x00007d23) slider_pane

0x2d49,	// (0x00009047) slider_pane_g1_ParamLimits

0x2d49,	// (0x00009047) slider_pane_g1

0x2d5d,	// (0x0000905b) slider_pane_g2_ParamLimits

0x2d5d,	// (0x0000905b) slider_pane_g2

0x2d73,	// (0x00009071) slider_pane_g3_ParamLimits

0x2d73,	// (0x00009071) slider_pane_g3

0x0003,

0xfe13,	// (0x00016111) slider_pane_g_ParamLimits

0xfe13,	// (0x00016111) slider_pane_g

0x92ec,	// (0x0000f5ea) popup_tb_float_extension_window_ParamLimits

0x92ec,	// (0x0000f5ea) popup_tb_float_extension_window

0x2d9f,	// (0x0000909d) aid_size_cell_tb_float_ext

0xa811,	// (0x00010b0f) bg_popup_sub_window_cp28

0x2daa,	// (0x000090a8) grid_tb_float_ext_pane

0x2db2,	// (0x000090b0) cell_tb_float_ext_pane_ParamLimits

0x2db2,	// (0x000090b0) cell_tb_float_ext_pane

0x2dca,	// (0x000090c8) cell_tb_float_ext_pane_g1

0x2dd3,	// (0x000090d1) grid_highlight_pane_cp12

0x9a25,	// (0x0000fd23) cell_last_hwr_side_pane_ParamLimits

0x9a25,	// (0x0000fd23) cell_last_hwr_side_pane

0xf49d,	// (0x0001579b) cell_last_hwr_side_pane_g1

0x2ddc,	// (0x000090da) cell_last_hwr_side_pane_g2

0x0001,

0xfe1c,	// (0x0001611a) cell_last_hwr_side_pane_g

0xa125,	// (0x00010423) vkb2_area_bottom_space_btn_pane_ParamLimits

0xa125,	// (0x00010423) vkb2_area_bottom_space_btn_pane

0x9b2f,	// (0x0000fe2d) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x2858,	// (0x00008b56) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xa39d,	// (0x0001069b) cell_vkb2_top_candi_pane_t1_ParamLimits

0xa3bb,	// (0x000106b9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xa3bb,	// (0x000106b9) vkb2_area_bottom_space_btn_pane_g1

0xa3f1,	// (0x000106ef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xa3f1,	// (0x000106ef) vkb2_area_bottom_space_btn_pane_g2

0xa427,	// (0x00010725) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xa427,	// (0x00010725) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe21,	// (0x0001611f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe21,	// (0x0001611f) vkb2_area_bottom_space_btn_pane_g

0x9999,	// (0x0000fc97) cel_fep_hwr_func_pane_ParamLimits

0x9999,	// (0x0000fc97) cel_fep_hwr_func_pane

0x99d5,	// (0x0000fcd3) cell_hwr_side_button_pane_ParamLimits

0x99d5,	// (0x0000fcd3) cell_hwr_side_button_pane

0x1d1e,	// (0x0000801c) aid_area_touch_clock_ParamLimits

0xab9e,	// (0x00010e9c) bg_uniindi_top_pane_ParamLimits

0x1d30,	// (0x0000802e) uniindi_top_pane_g1_ParamLimits

0x1d46,	// (0x00008044) uniindi_top_pane_g2_ParamLimits

0x1d52,	// (0x00008050) uniindi_top_pane_g3_ParamLimits

0x1d63,	// (0x00008061) uniindi_top_pane_g4_ParamLimits

0xfd34,	// (0x00016032) uniindi_top_pane_g_ParamLimits

0x1d70,	// (0x0000806e) uniindi_top_pane_t1_ParamLimits

0xab9e,	// (0x00010e9c) bg_vkb2_func_pane_cp01_ParamLimits

0xab9e,	// (0x00010e9c) bg_vkb2_func_pane_cp01

0x2e97,	// (0x00009195) cel_fep_hwr_func_pane_g1_ParamLimits

0x2e97,	// (0x00009195) cel_fep_hwr_func_pane_g1

0xab9e,	// (0x00010e9c) bg_vkb2_func_pane_cp02_ParamLimits

0xab9e,	// (0x00010e9c) bg_vkb2_func_pane_cp02

0x2e97,	// (0x00009195) cell_hwr_side_button_pane_g1_ParamLimits

0x2e97,	// (0x00009195) cell_hwr_side_button_pane_g1

0xcac3,	// (0x00012dc1) status_pane_g4_ParamLimits

0xcac3,	// (0x00012dc1) status_pane_g4

0xcadb,	// (0x00012dd9) status_pane_t1

0xf28d,	// (0x0001558b) form2_midp_gauge_slider_cont_pane

0xf295,	// (0x00015593) form2_midp_gauge_slider_pane_t1_ParamLimits

0xf2a7,	// (0x000155a5) form2_midp_gauge_slider_pane_t2_ParamLimits

0xf2b9,	// (0x000155b7) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafb,	// (0x00015df9) form2_midp_gauge_slider_pane_t_ParamLimits

0xf2cb,	// (0x000155c9) form2_midp_slider_pane_ParamLimits

0x9de0,	// (0x000100de) aid_size_cell_func_vkb2_ParamLimits

0x9de0,	// (0x000100de) aid_size_cell_func_vkb2

0x2d8b,	// (0x00009089) slider_pane_g4_ParamLimits

0x2d8b,	// (0x00009089) slider_pane_g4

0xa46d,	// (0x0001076b) form2_midp_gauge_slider_pane_t2_cp01

0xa47b,	// (0x00010779) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xa47b,	// (0x00010779) form2_midp_gauge_slider_pane_t3_cp01

0xa498,	// (0x00010796) form2_midp_slider_pane_cp01

0xa811,	// (0x00010b0f) navi_smil_pane

0x2f04,	// (0x00009202) navi_smil_pane_g1

0x2f0c,	// (0x0000920a) navi_smil_pane_t1

0x2ed9,	// (0x000091d7) form2_midp_slider_pane_g1

0x2ee2,	// (0x000091e0) form2_midp_slider_pane_g2

0x2eea,	// (0x000091e8) form2_midp_slider_pane_g3

0x2ed9,	// (0x000091d7) form2_midp_slider_pane_g4

0x2ef2,	// (0x000091f0) form2_midp_slider_pane_g5

0x0004,

0xfe2a,	// (0x00016128) form2_midp_slider_pane_g

0xa45d,	// (0x0001075b) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xa45d,	// (0x0001075b) vkb2_area_bottom_space_btn_pane_g4

0xc8fc,	// (0x00012bfa) lc0_navi_pane_ParamLimits

0xc8fc,	// (0x00012bfa) lc0_navi_pane

0xc972,	// (0x00012c70) lc0_stat_indi_pane_ParamLimits

0xc972,	// (0x00012c70) lc0_stat_indi_pane

0xc989,	// (0x00012c87) ls0_title_pane_ParamLimits

0xc989,	// (0x00012c87) ls0_title_pane

0xb5f6,	// (0x000118f4) bg_popup_sub_pane_cp14_ParamLimits

0x1d05,	// (0x00008003) list_uniindi_pane_ParamLimits

0x1d11,	// (0x0000800f) uniindi_top_pane_ParamLimits

0x1dac,	// (0x000080aa) list_single_uniindi_pane_g1_ParamLimits

0x1dbf,	// (0x000080bd) list_single_uniindi_pane_t1_ParamLimits

0xa4a1,	// (0x0001079f) lc0_stat_clock_pane_ParamLimits

0xa4a1,	// (0x0001079f) lc0_stat_clock_pane

0x2f34,	// (0x00009232) lc0_stat_indi_pane_g1_ParamLimits

0x2f34,	// (0x00009232) lc0_stat_indi_pane_g1

0x2f27,	// (0x00009225) lc0_stat_indi_pane_g2_ParamLimits

0x2f27,	// (0x00009225) lc0_stat_indi_pane_g2

0x0001,

0xfe35,	// (0x00016133) lc0_stat_indi_pane_g_ParamLimits

0xfe35,	// (0x00016133) lc0_stat_indi_pane_g

0xa4ae,	// (0x000107ac) lc0_uni_indicator_pane_ParamLimits

0xa4ae,	// (0x000107ac) lc0_uni_indicator_pane

0x2f4e,	// (0x0000924c) ls0_title_pane_g1_ParamLimits

0x2f4e,	// (0x0000924c) ls0_title_pane_g1

0x2f62,	// (0x00009260) ls0_title_pane_t1_ParamLimits

0x2f62,	// (0x00009260) ls0_title_pane_t1

0xa4bb,	// (0x000107b9) lc0_uni_indicator_pane_g1_ParamLimits

0xa4bb,	// (0x000107b9) lc0_uni_indicator_pane_g1

0x2faa,	// (0x000092a8) lc0_stat_clock_pane_t1

0x866d,	// (0x0000e96b) main_ai5_pane

0x2fb8,	// (0x000092b6) ai5_sk_pane_ParamLimits

0x2fb8,	// (0x000092b6) ai5_sk_pane

0x2fc5,	// (0x000092c3) cell_ai5_widget_pane_ParamLimits

0x2fc5,	// (0x000092c3) cell_ai5_widget_pane

0x302d,	// (0x0000932b) aid_size_cell_widget_grid

0x303b,	// (0x00009339) bg_ai5_widget_pane_ParamLimits

0x303b,	// (0x00009339) bg_ai5_widget_pane

0x308f,	// (0x0000938d) cell_ai5_widget_pane_g2

0x309f,	// (0x0000939d) cell_ai5_widget_pane_g3

0x30b6,	// (0x000093b4) cell_ai5_widget_pane_g4

0x30c2,	// (0x000093c0) cell_ai5_widget_pane_g5

0x30ce,	// (0x000093cc) cell_ai5_widget_pane_g6

0x30da,	// (0x000093d8) cell_ai5_widget_pane_g7

0x3122,	// (0x00009420) cell_ai5_widget_pane_t1_ParamLimits

0x3122,	// (0x00009420) cell_ai5_widget_pane_t1

0x313f,	// (0x0000943d) cell_ai5_widget_pane_t2_ParamLimits

0x313f,	// (0x0000943d) cell_ai5_widget_pane_t2

0x3157,	// (0x00009455) cell_ai5_widget_pane_t3_ParamLimits

0x3157,	// (0x00009455) cell_ai5_widget_pane_t3

0x316f,	// (0x0000946d) cell_ai5_widget_pane_t4_ParamLimits

0x316f,	// (0x0000946d) cell_ai5_widget_pane_t4

0x318c,	// (0x0000948a) cell_ai5_widget_pane_t5_ParamLimits

0x318c,	// (0x0000948a) cell_ai5_widget_pane_t5

0x31ab,	// (0x000094a9) cell_ai5_widget_pane_t6_ParamLimits

0x31ab,	// (0x000094a9) cell_ai5_widget_pane_t6

0x31bd,	// (0x000094bb) cell_ai5_widget_pane_t7_ParamLimits

0x31bd,	// (0x000094bb) cell_ai5_widget_pane_t7

0x31d6,	// (0x000094d4) cell_ai5_widget_pane_t8_ParamLimits

0x31d6,	// (0x000094d4) cell_ai5_widget_pane_t8

0x0009,

0xfe4f,	// (0x0001614d) cell_ai5_widget_pane_t_ParamLimits

0xfe4f,	// (0x0001614d) cell_ai5_widget_pane_t

0x322a,	// (0x00009528) grid_ai5_widget_pane

0xb5f6,	// (0x000118f4) highlight_cell_ai5_widget_pane_ParamLimits

0xb5f6,	// (0x000118f4) highlight_cell_ai5_widget_pane

0x3236,	// (0x00009534) ai5_sk_left_pane

0x3240,	// (0x0000953e) ai5_sk_middle_pane

0x324a,	// (0x00009548) ai5_sk_right_pane

0x3254,	// (0x00009552) bg_ai5_widget_pane_g1_ParamLimits

0x3254,	// (0x00009552) bg_ai5_widget_pane_g1

0x3260,	// (0x0000955e) bg_ai5_widget_pane_g2_ParamLimits

0x3260,	// (0x0000955e) bg_ai5_widget_pane_g2

0x326c,	// (0x0000956a) bg_ai5_widget_pane_g3_ParamLimits

0x326c,	// (0x0000956a) bg_ai5_widget_pane_g3

0x3278,	// (0x00009576) bg_ai5_widget_pane_g4_ParamLimits

0x3278,	// (0x00009576) bg_ai5_widget_pane_g4

0x3284,	// (0x00009582) bg_ai5_widget_pane_g5_ParamLimits

0x3284,	// (0x00009582) bg_ai5_widget_pane_g5

0x3290,	// (0x0000958e) bg_ai5_widget_pane_g6_ParamLimits

0x3290,	// (0x0000958e) bg_ai5_widget_pane_g6

0x329c,	// (0x0000959a) bg_ai5_widget_pane_g7_ParamLimits

0x329c,	// (0x0000959a) bg_ai5_widget_pane_g7

0x32a8,	// (0x000095a6) bg_ai5_widget_pane_g8_ParamLimits

0x32a8,	// (0x000095a6) bg_ai5_widget_pane_g8

0x32b4,	// (0x000095b2) bg_ai5_widget_pane_g9_ParamLimits

0x32b4,	// (0x000095b2) bg_ai5_widget_pane_g9

0x0008,

0xfe64,	// (0x00016162) bg_ai5_widget_pane_g_ParamLimits

0xfe64,	// (0x00016162) bg_ai5_widget_pane_g

0x32e6,	// (0x000095e4) cell_shortcut_ai5_widget_pane_ParamLimits

0x32e6,	// (0x000095e4) cell_shortcut_ai5_widget_pane

0xc406,	// (0x00012704) bg_cell_shortcut_ai5_widget_pane

0x32f7,	// (0x000095f5) cell_grid_ai5_widget_pane_g1

0xc406,	// (0x00012704) highlight_cell_shortcut_ai5_widget_pane

0xcc6c,	// (0x00012f6a) ai5_sk_left_pane_g1

0x3300,	// (0x000095fe) ai5_sk_left_pane_g2

0x3308,	// (0x00009606) ai5_sk_left_pane_g3

0x3310,	// (0x0000960e) ai5_sk_left_pane_g4

0x0003,

0xfe77,	// (0x00016175) ai5_sk_left_pane_g

0x3318,	// (0x00009616) ai5_sk_left_pane_t1

0xcc74,	// (0x00012f72) ai5_sk_right_pane_g1

0x3326,	// (0x00009624) ai5_sk_right_pane_g2

0x332e,	// (0x0000962c) ai5_sk_right_pane_g3

0x3336,	// (0x00009634) ai5_sk_right_pane_g4

0x0003,

0xfe80,	// (0x0001617e) ai5_sk_right_pane_g

0x333e,	// (0x0000963c) ai5_sk_right_pane_t1

0xcc74,	// (0x00012f72) ai5_sk_middle_pane_g1

0xcc6c,	// (0x00012f6a) ai5_sk_middle_pane_g2

0xcc8c,	// (0x00012f8a) ai5_sk_middle_pane_g3

0x332e,	// (0x0000962c) ai5_sk_middle_pane_g4

0x3308,	// (0x00009606) ai5_sk_middle_pane_g5

0x334c,	// (0x0000964a) ai5_sk_middle_pane_g6

0x3354,	// (0x00009652) ai5_sk_middle_pane_g7

0x0006,

0xfe89,	// (0x00016187) ai5_sk_middle_pane_g

0xc78e,	// (0x00012a8c) aid_touch_area_size_lc0_ParamLimits

0xc78e,	// (0x00012a8c) aid_touch_area_size_lc0

0x9b5e,	// (0x0000fe5c) cell_hwr_candidate_pane_t1_ParamLimits

0xc7a8,	// (0x00012aa6) aid_touch_navi_pane

0xca6d,	// (0x00012d6b) status_dt_navi_pane_ParamLimits

0xca6d,	// (0x00012d6b) status_dt_navi_pane

0xca7a,	// (0x00012d78) status_dt_sta_pane_ParamLimits

0xca7a,	// (0x00012d78) status_dt_sta_pane

0x335c,	// (0x0000965a) dt_sta_controll_pane

0x3369,	// (0x00009667) dt_sta_indi_pane

0x3376,	// (0x00009674) dt_sta_title_pane

0xab9e,	// (0x00010e9c) bg_dt_sta_indi_pane_ParamLimits

0xab9e,	// (0x00010e9c) bg_dt_sta_indi_pane

0x3387,	// (0x00009685) dt_sta_battery_pane

0x338f,	// (0x0000968d) dt_sta_indi_pane_g1

0x3398,	// (0x00009696) dt_sta_indi_pane_g2

0x33a1,	// (0x0000969f) dt_sta_indi_pane_g3

0x0002,

0xfe98,	// (0x00016196) dt_sta_indi_pane_g

0x33aa,	// (0x000096a8) dt_sta_signal_pane

0xb5f6,	// (0x000118f4) bg_dt_sta_title_pane_ParamLimits

0xb5f6,	// (0x000118f4) bg_dt_sta_title_pane

0x33b3,	// (0x000096b1) dt_sta_title_pane_g1

0x33bb,	// (0x000096b9) dt_sta_title_pane_t1_ParamLimits

0x33bb,	// (0x000096b9) dt_sta_title_pane_t1

0xa811,	// (0x00010b0f) bg_dt_sta_control_pane

0x33d0,	// (0x000096ce) dt_sta_controll_pane_g1

0x33d9,	// (0x000096d7) bg_dt_sta_title_pane_g1

0x33e2,	// (0x000096e0) bg_dt_sta_title_pane_g2

0x33eb,	// (0x000096e9) bg_dt_sta_title_pane_g3

0x0002,

0xfe9f,	// (0x0001619d) bg_dt_sta_title_pane_g

0xf49d,	// (0x0001579b) bg_dt_sta_indi_pane_g1

0x33f4,	// (0x000096f2) dt_sta_signal_pane_g1

0x33fc,	// (0x000096fa) dt_sta_signal_pane_g2

0x0001,

0xfea6,	// (0x000161a4) dt_sta_signal_pane_g

0x3404,	// (0x00009702) dt_sta_battery_pane_g1

0x340d,	// (0x0000970b) dt_sta_battery_pane_t1

0xf49d,	// (0x0001579b) bg_dt_sta_control_pane_g1

0xbea6,	// (0x000121a4) fep_china_uni_eep_pane

0xbeae,	// (0x000121ac) fep_china_uni_entry_pane_ParamLimits

0xbebe,	// (0x000121bc) popup_fep_china_uni_window_g1_ParamLimits

0xbece,	// (0x000121cc) popup_fep_china_uni_window_g2_ParamLimits

0xbece,	// (0x000121cc) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x00015a16) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x00015a16) popup_fep_china_uni_window_g

0x341c,	// (0x0000971a) fep_china_uni_eep_pane_g1

0x3424,	// (0x00009722) fep_china_uni_eep_pane_t1

0x2efb,	// (0x000091f9) aid_touch_area_size_smil_player

0xc8f4,	// (0x00012bf2) lc0_clock_pane

0xcacf,	// (0x00012dcd) status_pane_g5_ParamLimits

0xcacf,	// (0x00012dcd) status_pane_g5

0x904f,	// (0x0000f34d) popup_keymap_window

0xca8f,	// (0x00012d8d) status_icon_pane

0x309f,	// (0x0000939d) cell_ai5_widget_pane_g3_ParamLimits

0x30b6,	// (0x000093b4) cell_ai5_widget_pane_g4_ParamLimits

0x30c2,	// (0x000093c0) cell_ai5_widget_pane_g5_ParamLimits

0x30e6,	// (0x000093e4) cell_ai5_widget_pane_g8_ParamLimits

0x30e6,	// (0x000093e4) cell_ai5_widget_pane_g8

0x30fa,	// (0x000093f8) cell_ai5_widget_pane_g9_ParamLimits

0x30fa,	// (0x000093f8) cell_ai5_widget_pane_g9

0x310e,	// (0x0000940c) cell_ai5_widget_pane_g10_ParamLimits

0x310e,	// (0x0000940c) cell_ai5_widget_pane_g10

0x3433,	// (0x00009731) status_icon_pane_g1

0xa811,	// (0x00010b0f) bg_popup_sub_pane_cp13

0x343b,	// (0x00009739) popup_keymap_window_t1

0xc6cb,	// (0x000129c9) control_pane_g6_ParamLimits

0xc6cb,	// (0x000129c9) control_pane_g6

0xc6d8,	// (0x000129d6) control_pane_g7_ParamLimits

0xc6d8,	// (0x000129d6) control_pane_g7

0xc6e5,	// (0x000129e3) control_pane_g8_ParamLimits

0xc6e5,	// (0x000129e3) control_pane_g8

0x335c,	// (0x0000965a) dt_sta_controll_pane_ParamLimits

0x3369,	// (0x00009667) dt_sta_indi_pane_ParamLimits

0x3376,	// (0x00009674) dt_sta_title_pane_ParamLimits

0xb003,	// (0x00011301) aid_size_touch_scroll_bar_cale

0x8746,	// (0x0000ea44) popup_discreet_window_ParamLimits

0x8746,	// (0x0000ea44) popup_discreet_window

0x87aa,	// (0x0000eaa8) popup_sk_window

0xd336,	// (0x00013634) bg_popup_sub_pane_cp28_ParamLimits

0xd336,	// (0x00013634) bg_popup_sub_pane_cp28

0x3449,	// (0x00009747) popup_discreet_window_g1_ParamLimits

0x3449,	// (0x00009747) popup_discreet_window_g1

0x3469,	// (0x00009767) popup_discreet_window_t1_ParamLimits

0x3469,	// (0x00009767) popup_discreet_window_t1

0x3487,	// (0x00009785) popup_discreet_window_t2_ParamLimits

0x3487,	// (0x00009785) popup_discreet_window_t2

0x0002,

0xfeab,	// (0x000161a9) popup_discreet_window_t_ParamLimits

0xfeab,	// (0x000161a9) popup_discreet_window_t

0xa4cd,	// (0x000107cb) popup_sk_window_g1

0xa4d7,	// (0x000107d5) popup_sk_window_g2

0x0001,

0xfeb2,	// (0x000161b0) popup_sk_window_g

0xa4df,	// (0x000107dd) popup_sk_window_t1

0xa4ed,	// (0x000107eb) popup_sk_window_t1_copy1

0x308f,	// (0x0000938d) cell_ai5_widget_pane_g2_ParamLimits

0x31e8,	// (0x000094e6) cell_ai5_widget_pane_t9_ParamLimits

0x31e8,	// (0x000094e6) cell_ai5_widget_pane_t9

0xa811,	// (0x00010b0f) main_fep_fshwr2_pane

0xa4fb,	// (0x000107f9) aid_fshwr2_btn_pane

0xa507,	// (0x00010805) aid_fshwr2_syb_pane

0xa513,	// (0x00010811) aid_fshwr2_txt_pane

0xa51f,	// (0x0001081d) fshwr2_func_candi_pane

0xa530,	// (0x0001082e) fshwr2_hwr_syb_pane

0xa53c,	// (0x0001083a) fshwr2_icf_pane

0x866d,	// (0x0000e96b) fshwr2_icf_bg_pane

0xa561,	// (0x0001085f) fshwr2_icf_pane_t1_ParamLimits

0xa561,	// (0x0001085f) fshwr2_icf_pane_t1

0xbda9,	// (0x000120a7) fshwr2_func_candi_pane_g1

0x3585,	// (0x00009883) fshwr2_func_candi_row_pane_ParamLimits

0x3585,	// (0x00009883) fshwr2_func_candi_row_pane

0xa579,	// (0x00010877) cell_fshwr2_syb_pane_ParamLimits

0xa579,	// (0x00010877) cell_fshwr2_syb_pane

0x9b2f,	// (0x0000fe2d) fshwr2_hwr_syb_pane_g1_ParamLimits

0x9b2f,	// (0x0000fe2d) fshwr2_hwr_syb_pane_g1

0x866d,	// (0x0000e96b) bg_popup_call_pane_cp01

0xa58d,	// (0x0001088b) fshwr2_func_candi_cell_pane_ParamLimits

0xa58d,	// (0x0001088b) fshwr2_func_candi_cell_pane

0xd97a,	// (0x00013c78) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xd97a,	// (0x00013c78) fshwr2_func_candi_cell_bg_pane

0xa5cc,	// (0x000108ca) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa5cc,	// (0x000108ca) fshwr2_func_candi_cell_pane_g1

0xa5ec,	// (0x000108ea) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa5ec,	// (0x000108ea) fshwr2_func_candi_cell_pane_t1

0x866d,	// (0x0000e96b) bg_button_pane_cp08

0xc406,	// (0x00012704) cell_fshwr2_syb_bg_pane

0xa5ff,	// (0x000108fd) cell_fshwr2_syb_bg_pane_g1

0xa607,	// (0x00010905) cell_fshwr2_syb_bg_pane_t1

0xb5f6,	// (0x000118f4) main_tmo_pane

0xde09,	// (0x00014107) uni_indicator_pane_g1_ParamLimits

0xde1c,	// (0x0001411a) uni_indicator_pane_g2_ParamLimits

0xde2e,	// (0x0001412c) uni_indicator_pane_g3_ParamLimits

0xde3d,	// (0x0001413b) uni_indicator_pane_g4_ParamLimits

0xde3d,	// (0x0001413b) uni_indicator_pane_g4

0xde51,	// (0x0001414f) uni_indicator_pane_g5_ParamLimits

0xde51,	// (0x0001414f) uni_indicator_pane_g5

0xde51,	// (0x0001414f) uni_indicator_pane_g6_ParamLimits

0xde51,	// (0x0001414f) uni_indicator_pane_g6

0xf91c,	// (0x00015c1a) uni_indicator_pane_g_ParamLimits

0x185f,	// (0x00007b5d) popup_tmo_note_window_ParamLimits

0x185f,	// (0x00007b5d) popup_tmo_note_window

0x9dc2,	// (0x000100c0) fshwr2_bg_pane

0xa5dd,	// (0x000108db) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa5dd,	// (0x000108db) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb7,	// (0x000161b5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb7,	// (0x000161b5) fshwr2_func_candi_cell_pane_g

0x9b17,	// (0x0000fe15) bg_popup_window_pane_cp01

0xa616,	// (0x00010914) bg_popup_window_pane_g1_cp01

0x363b,	// (0x00009939) bg_popup_window_pane_cp22_ParamLimits

0x363b,	// (0x00009939) bg_popup_window_pane_cp22

0x3649,	// (0x00009947) listscroll_tmo_link_pane_ParamLimits

0x3649,	// (0x00009947) listscroll_tmo_link_pane

0x3689,	// (0x00009987) popup_tmo_note_window_g1_ParamLimits

0x3689,	// (0x00009987) popup_tmo_note_window_g1

0x3696,	// (0x00009994) tmo_note_info_pane_ParamLimits

0x3696,	// (0x00009994) tmo_note_info_pane

0x36b0,	// (0x000099ae) list_tmo_note_info_pane_g1_ParamLimits

0x36b0,	// (0x000099ae) list_tmo_note_info_pane_g1

0x36c7,	// (0x000099c5) list_tmo_note_info_pane_g2_ParamLimits

0x36c7,	// (0x000099c5) list_tmo_note_info_pane_g2

0x0001,

0xfebc,	// (0x000161ba) list_tmo_note_info_pane_g_ParamLimits

0xfebc,	// (0x000161ba) list_tmo_note_info_pane_g

0x36e3,	// (0x000099e1) list_tmo_note_info_text_pane_ParamLimits

0x36e3,	// (0x000099e1) list_tmo_note_info_text_pane

0x3764,	// (0x00009a62) list_tmo_link_pane

0x3771,	// (0x00009a6f) scroll_pane_cp20

0x377e,	// (0x00009a7c) list_single_tmo_link_pane_ParamLimits

0x377e,	// (0x00009a7c) list_single_tmo_link_pane

0x378e,	// (0x00009a8c) list_single_tmo_link_pane_t1

0x379c,	// (0x00009a9a) list_tmo_note_info_text_pane_t1_ParamLimits

0x379c,	// (0x00009a9a) list_tmo_note_info_text_pane_t1

0xb81d,	// (0x00011b1b) aid_size_touch_scroll_bar_cp01_ParamLimits

0xb81d,	// (0x00011b1b) aid_size_touch_scroll_bar_cp01

0xb6b0,	// (0x000119ae) aid_size_touch_slider_marker

0x8796,	// (0x0000ea94) popup_settings_window_ParamLimits

0x8796,	// (0x0000ea94) popup_settings_window

0xc762,	// (0x00012a60) popup_candi_list_indi_window

0xc7a8,	// (0x00012aa6) aid_touch_navi_pane_ParamLimits

0x9d1d,	// (0x0001001b) rs_clock_indi_pane

0x9d26,	// (0x00010024) sctrl_sk_bottom_pane_ParamLimits

0x9d37,	// (0x00010035) sctrl_sk_top_pane_ParamLimits

0x9e3a,	// (0x00010138) popup_fep_tooltip_window

0x302d,	// (0x0000932b) aid_size_cell_widget_grid_ParamLimits

0x307a,	// (0x00009378) cell_ai5_widget_pane_g1_ParamLimits

0x307a,	// (0x00009378) cell_ai5_widget_pane_g1

0x30ce,	// (0x000093cc) cell_ai5_widget_pane_g6_ParamLimits

0x30da,	// (0x000093d8) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3a,	// (0x00016138) cell_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x00016138) cell_ai5_widget_pane_g

0x320c,	// (0x0000950a) cell_ai5_widget_pane_t10_ParamLimits

0x320c,	// (0x0000950a) cell_ai5_widget_pane_t10

0x322a,	// (0x00009528) grid_ai5_widget_pane_ParamLimits

0x32c0,	// (0x000095be) cell_contacts_ai5_widget_pane_ParamLimits

0x32c0,	// (0x000095be) cell_contacts_ai5_widget_pane

0x349c,	// (0x0000979a) popup_discreet_window_t3_ParamLimits

0x349c,	// (0x0000979a) popup_discreet_window_t3

0xa54f,	// (0x0001084d) popup_fshwr2_char_preview_window_ParamLimits

0xa54f,	// (0x0001084d) popup_fshwr2_char_preview_window

0x3701,	// (0x000099ff) tmo_note_info_pane_t1

0x3716,	// (0x00009a14) tmo_note_info_pane_t2

0x372b,	// (0x00009a29) tmo_note_info_pane_t3

0x3740,	// (0x00009a3e) tmo_note_info_pane_t4

0x3752,	// (0x00009a50) tmo_note_info_pane_t5

0x0004,

0xfec1,	// (0x000161bf) tmo_note_info_pane_t

0x3764,	// (0x00009a62) list_tmo_link_pane_ParamLimits

0x3771,	// (0x00009a6f) scroll_pane_cp20_ParamLimits

0x866d,	// (0x0000e96b) bg_popup_fep_char_preview_window_cp01

0x37b5,	// (0x00009ab3) popup_fshwr2_char_preview_window_t1

0x37c3,	// (0x00009ac1) popup_candi_list_indi_window_g1

0x37cc,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane

0x37d8,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1

0x37ed,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2

0x37f9,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfecc,	// (0x000161ca) cell_contacts_ai5_widget_pane_g

0x3805,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1

0xb5f6,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x387a,	// (0x00009b78) settings_container_pane

0xc406,	// (0x00012704) listscroll_set_pane_copy1

0xe9b3,	// (0x00014cb1) scroll_pane_cp121_copy1

0xd0f8,	// (0x000133f6) set_content_pane_copy1

0x3886,	// (0x00009b84) aid_height_set_list_copy1_ParamLimits

0x3886,	// (0x00009b84) aid_height_set_list_copy1

0xe052,	// (0x00014350) aid_size_parent_copy1_ParamLimits

0xe052,	// (0x00014350) aid_size_parent_copy1

0x3892,	// (0x00009b90) button_value_adjust_pane_cp6_copy1_ParamLimits

0x3892,	// (0x00009b90) button_value_adjust_pane_cp6_copy1

0xc748,	// (0x00012a46) list_highlight_pane_cp2_copy1_ParamLimits

0xc748,	// (0x00012a46) list_highlight_pane_cp2_copy1

0x38a6,	// (0x00009ba4) list_set_pane_copy1_ParamLimits

0x38a6,	// (0x00009ba4) list_set_pane_copy1

0x3817,	// (0x00009b15) main_pane_set_t1_copy1_ParamLimits

0x3817,	// (0x00009b15) main_pane_set_t1_copy1

0x3851,	// (0x00009b4f) main_pane_set_t2_copy1_ParamLimits

0x3851,	// (0x00009b4f) main_pane_set_t2_copy1

0x3935,	// (0x00009c33) main_pane_set_t3_copy1

0x3943,	// (0x00009c41) main_pane_set_t4_copy1

0x386e,	// (0x00009b6c) set_content_pane_g1_copy1_ParamLimits

0x386e,	// (0x00009b6c) set_content_pane_g1_copy1

0x3951,	// (0x00009c4f) setting_code_pane_copy1

0x3959,	// (0x00009c57) setting_slider_graphic_pane_copy1

0x3959,	// (0x00009c57) setting_slider_pane_copy1

0x3959,	// (0x00009c57) setting_text_pane_copy1

0x3959,	// (0x00009c57) setting_volume_pane_copy1

0x3951,	// (0x00009c4f) settings_code_pane_cp2_copy1

0x3961,	// (0x00009c5f) settings_code_pane_cp_copy1_ParamLimits

0x3961,	// (0x00009c5f) settings_code_pane_cp_copy1

0xa61f,	// (0x0001091d) volume_set_pane_copy1

0x397d,	// (0x00009c7b) volume_set_pane_g10_copy1

0x3985,	// (0x00009c83) volume_set_pane_g1_copy1

0x398d,	// (0x00009c8b) volume_set_pane_g2_copy1

0x3995,	// (0x00009c93) volume_set_pane_g3_copy1

0x399d,	// (0x00009c9b) volume_set_pane_g4_copy1

0x39a5,	// (0x00009ca3) volume_set_pane_g5_copy1

0x39ad,	// (0x00009cab) volume_set_pane_g6_copy1

0x39b5,	// (0x00009cb3) volume_set_pane_g7_copy1

0x39bd,	// (0x00009cbb) volume_set_pane_g8_copy1

0x39c5,	// (0x00009cc3) volume_set_pane_g9_copy1

0xa905,	// (0x00010c03) bg_set_opt_pane_cp_copy1_ParamLimits

0xa905,	// (0x00010c03) bg_set_opt_pane_cp_copy1

0xa627,	// (0x00010925) setting_slider_pane_t1_copy1_ParamLimits

0xa627,	// (0x00010925) setting_slider_pane_t1_copy1

0xa645,	// (0x00010943) setting_slider_pane_t2_copy1_ParamLimits

0xa645,	// (0x00010943) setting_slider_pane_t2_copy1

0xa65e,	// (0x0001095c) setting_slider_pane_t3_copy1_ParamLimits

0xa65e,	// (0x0001095c) setting_slider_pane_t3_copy1

0xa675,	// (0x00010973) slider_set_pane_copy1_ParamLimits

0xa675,	// (0x00010973) slider_set_pane_copy1

0xb737,	// (0x00011a35) set_opt_bg_pane_g1_copy2

0xb73f,	// (0x00011a3d) set_opt_bg_pane_g2_copy2

0x3a31,	// (0x00009d2f) set_opt_bg_pane_g3_copy2

0xb74f,	// (0x00011a4d) set_opt_bg_pane_g4_copy2

0xb757,	// (0x00011a55) set_opt_bg_pane_g5_copy2

0xb75f,	// (0x00011a5d) set_opt_bg_pane_g6_copy2

0x3a39,	// (0x00009d37) set_opt_bg_pane_g7_copy2

0x3a41,	// (0x00009d3f) set_opt_bg_pane_g8_copy2

0x3a49,	// (0x00009d47) set_opt_bg_pane_g9_copy2

0xa68b,	// (0x00010989) aid_size_touch_slider_mark_copy1_ParamLimits

0xa68b,	// (0x00010989) aid_size_touch_slider_mark_copy1

0x3a65,	// (0x00009d63) slider_set_pane_g1_copy1

0xa69f,	// (0x0001099d) slider_set_pane_g2_copy1

0x9719,	// (0x0000fa17) slider_set_pane_g3_copy1_ParamLimits

0x9719,	// (0x0000fa17) slider_set_pane_g3_copy1

0x972d,	// (0x0000fa2b) slider_set_pane_g4_copy1_ParamLimits

0x972d,	// (0x0000fa2b) slider_set_pane_g4_copy1

0x9745,	// (0x0000fa43) slider_set_pane_g5_copy1_ParamLimits

0x9745,	// (0x0000fa43) slider_set_pane_g5_copy1

0x9719,	// (0x0000fa17) slider_set_pane_g6_copy1_ParamLimits

0x9719,	// (0x0000fa17) slider_set_pane_g6_copy1

0xa6a7,	// (0x000109a5) slider_set_pane_g7_copy1_ParamLimits

0xa6a7,	// (0x000109a5) slider_set_pane_g7_copy1

0xa825,	// (0x00010b23) bg_set_opt_pane_cp2_copy1

0x3a8c,	// (0x00009d8a) setting_slider_graphic_pane_g1_copy1

0x3aa4,	// (0x00009da2) setting_slider_graphic_pane_t1_copy1

0x3a95,	// (0x00009d93) setting_slider_graphic_pane_t2_copy1

0x3ab3,	// (0x00009db1) slider_set_pane_cp_copy1

0x3ac3,	// (0x00009dc1) input_focus_pane_cp1_copy1

0x3acc,	// (0x00009dca) list_set_text_pane_copy1

0x3ad4,	// (0x00009dd2) setting_text_pane_g1_copy1

0x3add,	// (0x00009ddb) set_text_pane_t1_copy1

0x3ac3,	// (0x00009dc1) input_focus_pane_cp2_copy1

0x3ad4,	// (0x00009dd2) setting_code_pane_g1_copy1

0x3af5,	// (0x00009df3) setting_code_pane_t1_copy1

0xc10b,	// (0x00012409) list_set_graphic_pane_copy1

0xa825,	// (0x00010b23) bg_set_opt_pane_cp4_copy1

0xc11d,	// (0x0001241b) list_set_graphic_pane_g1_copy1_ParamLimits

0xc11d,	// (0x0001241b) list_set_graphic_pane_g1_copy1

0x3b03,	// (0x00009e01) list_set_graphic_pane_g2_copy1

0xc135,	// (0x00012433) list_set_graphic_pane_t1_copy1_ParamLimits

0xc135,	// (0x00012433) list_set_graphic_pane_t1_copy1

0xf49d,	// (0x0001579b) rs_clock_indi_pane_g1

0x3b0b,	// (0x00009e09) rs_clock_indi_pane_t1

0x3b19,	// (0x00009e17) rs_indi_pane

0x3b21,	// (0x00009e1f) rs_indi_pane_g1

0x3b2a,	// (0x00009e28) rs_indi_pane_g2

0x3b33,	// (0x00009e31) rs_indi_pane_g3

0x0002,

0xfed3,	// (0x000161d1) rs_indi_pane_g

0xc406,	// (0x00012704) bg_popup_preview_window_pane_cp03

0x3b3c,	// (0x00009e3a) popup_fep_tooltip_window_t1

0x0f0c,	// (0x0000720a) popup_note2_window_g2_ParamLimits

0x0f0c,	// (0x0000720a) popup_note2_window_g2

0x0001,

0xfc73,	// (0x00015f71) popup_note2_window_g_ParamLimits

0xfc73,	// (0x00015f71) popup_note2_window_g

0x14f1,	// (0x000077ef) bg_popup_sub_pane_cp11_ParamLimits

0x14fe,	// (0x000077fc) cell_ai3_links_pane_g1_ParamLimits

0x1515,	// (0x00007813) cell_ai3_links_pane_t1

0x3add,	// (0x00009ddb) set_text_pane_t1_copy1_ParamLimits

0xc319,	// (0x00012617) cell_graphic_popup_pane_cp2_ParamLimits

0xc319,	// (0x00012617) cell_graphic_popup_pane_cp2

0x3b4a,	// (0x00009e48) cell_graphic_popup_pane_g1_cp2

0xaeb2,	// (0x000111b0) cell_graphic_popup_pane_g2_cp2

0x3b52,	// (0x00009e50) cell_graphic_popup_pane_g3_cp2

0x3b5a,	// (0x00009e58) cell_graphic_popup_pane_t2_cp2

0xaec3,	// (0x000111c1) grid_highlight_pane_cp3_cp2

0xbafa,	// (0x00011df8) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xb5f6,	// (0x000118f4) main_tmo_pane_ParamLimits

0x1857,	// (0x00007b55) popup_tmo_big_image_note_window

0x3069,	// (0x00009367) cell_ai5_widget_list_pane

0x3071,	// (0x0000936f) cell_ai5_widget_lrg_icon_pane

0x3701,	// (0x000099ff) tmo_note_info_pane_t1_ParamLimits

0x3716,	// (0x00009a14) tmo_note_info_pane_t2_ParamLimits

0x372b,	// (0x00009a29) tmo_note_info_pane_t3_ParamLimits

0x3740,	// (0x00009a3e) tmo_note_info_pane_t4_ParamLimits

0x3752,	// (0x00009a50) tmo_note_info_pane_t5_ParamLimits

0xfec1,	// (0x000161bf) tmo_note_info_pane_t_ParamLimits

0x387a,	// (0x00009b78) settings_container_pane_ParamLimits

0x3abb,	// (0x00009db9) indicator_popup_pane_cp5

0x3abb,	// (0x00009db9) indicator_popup_pane_cp6

0xc10b,	// (0x00012409) list_set_graphic_pane_copy1_ParamLimits

0xa811,	// (0x00010b0f) bg_popup_window_pane_cp23

0x3b68,	// (0x00009e66) popup_tmo_big_image_note_window_g1

0x3b71,	// (0x00009e6f) popup_tmo_big_image_note_window_t1

0x3b7f,	// (0x00009e7d) popup_tmo_big_image_note_window_t2

0x3b8d,	// (0x00009e8b) popup_tmo_big_image_note_window_t3

0x0002,

0xfeda,	// (0x000161d8) popup_tmo_big_image_note_window_t

0xf49d,	// (0x0001579b) cell_ai5_widget_lrg_icon_pane_g1

0x3b9b,	// (0x00009e99) cell_ai5_widget_lrg_icon_pane_t1

0x3ba9,	// (0x00009ea7) cell_ai5_widget_list_row_pane_ParamLimits

0x3ba9,	// (0x00009ea7) cell_ai5_widget_list_row_pane

0x3bc0,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x3bc0,	// (0x00009ebe) cell_ai5_widget_list_row_pane_g1

0x3bcd,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x3bcd,	// (0x00009ecb) cell_ai5_widget_list_row_pane_t1

0x3bfb,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x3bfb,	// (0x00009ef9) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee1,	// (0x000161df) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee1,	// (0x000161df) cell_ai5_widget_list_row_pane_t

0x866d,	// (0x0000e96b) main_fep_vtchi_ss_pane

0x3c3f,	// (0x00009f3d) popup_fep_char_pre_window

0x3c47,	// (0x00009f45) popup_fep_ituss_window

0x3c64,	// (0x00009f62) popup_fep_vkbss_window

0x3c8c,	// (0x00009f8a) grid_vkbss_keypad_pane_ParamLimits

0x3c8c,	// (0x00009f8a) grid_vkbss_keypad_pane

0x3c98,	// (0x00009f96) ituss_keypad_pane

0xa6c7,	// (0x000109c5) aid_vkbss_key_offset_ParamLimits

0xa6c7,	// (0x000109c5) aid_vkbss_key_offset

0xa6d3,	// (0x000109d1) cell_vkbss_key_pane_ParamLimits

0xa6d3,	// (0x000109d1) cell_vkbss_key_pane

0xcaab,	// (0x00012da9) bg_cell_vkbss_key_g1_ParamLimits

0xcaab,	// (0x00012da9) bg_cell_vkbss_key_g1

0x3cd3,	// (0x00009fd1) cell_vkbss_key_3p_pane_ParamLimits

0x3cd3,	// (0x00009fd1) cell_vkbss_key_3p_pane

0x3ce7,	// (0x00009fe5) cell_vkbss_key_g1_ParamLimits

0x3ce7,	// (0x00009fe5) cell_vkbss_key_g1

0x3cfb,	// (0x00009ff9) cell_vkbss_key_t1_ParamLimits

0x3cfb,	// (0x00009ff9) cell_vkbss_key_t1

0xa6e9,	// (0x000109e7) cell_ituss_key_pane_ParamLimits

0xa6e9,	// (0x000109e7) cell_ituss_key_pane

0x3d37,	// (0x0000a035) bg_cell_ituss_key_g1_ParamLimits

0x3d37,	// (0x0000a035) bg_cell_ituss_key_g1

0x3d43,	// (0x0000a041) cell_ituss_key_pane_g1_ParamLimits

0x3d43,	// (0x0000a041) cell_ituss_key_pane_g1

0xa6fa,	// (0x000109f8) cell_ituss_key_pane_g2_ParamLimits

0xa6fa,	// (0x000109f8) cell_ituss_key_pane_g2

0x0002,

0xfee8,	// (0x000161e6) cell_ituss_key_pane_g_ParamLimits

0xfee8,	// (0x000161e6) cell_ituss_key_pane_g

0xa722,	// (0x00010a20) cell_ituss_key_t1_ParamLimits

0xa722,	// (0x00010a20) cell_ituss_key_t1

0xa75c,	// (0x00010a5a) cell_ituss_key_t2_ParamLimits

0xa75c,	// (0x00010a5a) cell_ituss_key_t2

0xa78d,	// (0x00010a8b) cell_ituss_key_t3_ParamLimits

0xa78d,	// (0x00010a8b) cell_ituss_key_t3

0xa75c,	// (0x00010a5a) cell_ituss_key_t4_ParamLimits

0xa75c,	// (0x00010a5a) cell_ituss_key_t4

0x0004,

0xfeef,	// (0x000161ed) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x000161ed) cell_ituss_key_t

0x3e4f,	// (0x0000a14d) cell_vkbss_key_3p_pane_g1

0x3e47,	// (0x0000a145) cell_vkbss_key_3p_pane_g2

0x3e3f,	// (0x0000a13d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfefa,	// (0x000161f8) cell_vkbss_key_3p_pane_g

0x866d,	// (0x0000e96b) bg_popup_fep_char_preview_window_cp02

0xa7d0,	// (0x00010ace) popup_fep_char_pre_window_t1

0x3023,	// (0x00009321) main_ai5_sk_pane

0x37cc,	// (0x00009aca) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x37d8,	// (0x00009ad6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x37ed,	// (0x00009aeb) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x37f9,	// (0x00009af7) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfecc,	// (0x000161ca) cell_contacts_ai5_widget_pane_g_ParamLimits

0x3805,	// (0x00009b03) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xb5f6,	// (0x000118f4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x3e66,	// (0x0000a164) main_ai5_sk_pane_g1

0xd180,	// (0x0001347e) popup_query_code_window_g1

0x3c59,	// (0x00009f57) popup_fep_vkb_icf_pane

0x3c76,	// (0x00009f74) popup_fep_vtchi_icf_pane

0x3e6f,	// (0x0000a16d) bg_icf_pane

0x3e7b,	// (0x0000a179) list_vkb_icf_pane

0x3e8a,	// (0x0000a188) bg_icf_pane_cp01

0x3e9d,	// (0x0000a19b) vtchi_icf_list_pane

0x3ead,	// (0x0000a1ab) list_vkb_icf_pane_t1_ParamLimits

0x3ead,	// (0x0000a1ab) list_vkb_icf_pane_t1

0x3ec2,	// (0x0000a1c0) vtchi_icf_list_pane_t1_ParamLimits

0x3ec2,	// (0x0000a1c0) vtchi_icf_list_pane_t1

0x3c47,	// (0x00009f45) popup_fep_ituss_window_ParamLimits

0x3c76,	// (0x00009f74) popup_fep_vtchi_icf_pane_ParamLimits

0x3c98,	// (0x00009f96) ituss_keypad_pane_ParamLimits

0xa6bd,	// (0x000109bb) ituss_sks_pane

0x3e6f,	// (0x0000a16d) bg_icf_pane_ParamLimits

0x3c23,	// (0x00009f21) icf_edit_indi_pane_ParamLimits

0x3c23,	// (0x00009f21) icf_edit_indi_pane

0x3e7b,	// (0x0000a179) list_vkb_icf_pane_ParamLimits

0x3e8a,	// (0x0000a188) bg_icf_pane_cp01_ParamLimits

0x3c32,	// (0x00009f30) icf_edit_indi_pane_cp01_ParamLimits

0x3c32,	// (0x00009f30) icf_edit_indi_pane_cp01

0x3ea5,	// (0x0000a1a3) vtchi_query_pane

0x01a7,	// (0x000064a5) icf_edit_indi_pane_g1_ParamLimits

0x01a7,	// (0x000064a5) icf_edit_indi_pane_g1

0x3f42,	// (0x0000a240) icf_edit_indi_pane_g2_ParamLimits

0x3f42,	// (0x0000a240) icf_edit_indi_pane_g2

0x0001,

0xff12,	// (0x00016210) icf_edit_indi_pane_g_ParamLimits

0xff12,	// (0x00016210) icf_edit_indi_pane_g

0x3f51,	// (0x0000a24f) icf_edit_indi_pane_t1

0x3ed9,	// (0x0000a1d7) bg_input_focus_pane_cp042

0xaffa,	// (0x000112f8) vtchi_button_pane

0x3ee2,	// (0x0000a1e0) vtchi_query_pane_t1

0x3ef0,	// (0x0000a1ee) vtchi_query_pane_t2

0x3efe,	// (0x0000a1fc) vtchi_query_pane_t3

0x0002,

0xff01,	// (0x000161ff) vtchi_query_pane_t

0x866d,	// (0x0000e96b) bg_button_pane_cp13

0x3f0c,	// (0x0000a20a) vtchi_button_pane_g1

0xa7df,	// (0x00010add) ituss_sks_pane_g1

0xa7e9,	// (0x00010ae7) ituss_sks_pane_g2

0x0001,

0xff08,	// (0x00016206) ituss_sks_pane_g

0x3f34,	// (0x0000a232) ituss_sks_pane_t1

0x3f26,	// (0x0000a224) ituss_sks_pane_t2

0x0001,

0xff0d,	// (0x0001620b) ituss_sks_pane_t

0xefad,	// (0x000152ab) indicator_nsta_pane_cp_g1

0xefb5,	// (0x000152b3) indicator_nsta_pane_cp_g2

0xefbd,	// (0x000152bb) indicator_nsta_pane_cp_g3

0xefad,	// (0x000152ab) indicator_nsta_pane_cp_g4

0xefb5,	// (0x000152b3) indicator_nsta_pane_cp_g5

0xefbd,	// (0x000152bb) indicator_nsta_pane_cp_g6

0x0005,

0xfab1,	// (0x00015daf) indicator_nsta_pane_cp_g

0x2abb,	// (0x00008db9) cell_graphic2_pane_t2_ParamLimits

0x2abb,	// (0x00008db9) cell_graphic2_pane_t2

0x0001,

0xfdc3,	// (0x000160c1) cell_graphic2_pane_t_ParamLimits

0xfdc3,	// (0x000160c1) cell_graphic2_pane_t

0x2ae8,	// (0x00008de6) cell_graphic2_control_pane_t1

0xbe5c,	// (0x0001215a) signal_pane_g3_ParamLimits

0xbe5c,	// (0x0001215a) signal_pane_g3

0xbe6b,	// (0x00012169) signal_pane_g4_ParamLimits

0xbe6b,	// (0x00012169) signal_pane_g4

0x3c0d,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x3c0d,	// (0x00009f0b) cell_ai5_widget_list_row_pane_t3

0x3d7f,	// (0x0000a07d) cell_ituss_key_pane_t1_ParamLimits

0x3d7f,	// (0x0000a07d) cell_ituss_key_pane_t1

0xce06,	// (0x00013104) form_field_data_wide_pane_vc_t2_ParamLimits

0xce06,	// (0x00013104) form_field_data_wide_pane_vc_t2

0xce18,	// (0x00013116) form_field_data_wide_pane_vc_t3_ParamLimits

0xce18,	// (0x00013116) form_field_data_wide_pane_vc_t3

0x0002,

0xf804,	// (0x00015b02) form_field_data_wide_pane_vc_t_ParamLimits

0xf804,	// (0x00015b02) form_field_data_wide_pane_vc_t

0xec8f,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3_ParamLimits

0xec8f,	// (0x00014f8d) form_field_slider_wide_pane_vc_t3

0xed5d,	// (0x0001505b) form_field_popup_wide_pane_vc_t2_ParamLimits

0xed5d,	// (0x0001505b) form_field_popup_wide_pane_vc_t2

0xed72,	// (0x00015070) form_field_popup_wide_pane_vc_t3_ParamLimits

0xed72,	// (0x00015070) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa0,	// (0x00015d9e) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa0,	// (0x00015d9e) form_field_popup_wide_pane_vc_t

0xa4fb,	// (0x000107f9) aid_fshwr2_btn_pane_ParamLimits

0xa507,	// (0x00010805) aid_fshwr2_syb_pane_ParamLimits

0xa513,	// (0x00010811) aid_fshwr2_txt_pane_ParamLimits

0x9dc2,	// (0x000100c0) fshwr2_bg_pane_ParamLimits

0xa51f,	// (0x0001081d) fshwr2_func_candi_pane_ParamLimits

0xa530,	// (0x0001082e) fshwr2_hwr_syb_pane_ParamLimits

0xa53c,	// (0x0001083a) fshwr2_icf_pane_ParamLimits

0xec11,	// (0x00014f0f) list_double_graphic_pane_vc_g4_ParamLimits

0xec11,	// (0x00014f0f) list_double_graphic_pane_vc_g4

0xa716,	// (0x00010a14) cell_ituss_key_pane_g3_ParamLimits

0xa716,	// (0x00010a14) cell_ituss_key_pane_g3

0xa7be,	// (0x00010abc) cell_ituss_key_t5_ParamLimits

0xa7be,	// (0x00010abc) cell_ituss_key_t5

0x3c64,	// (0x00009f62) popup_fep_vkbss_window_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_av_qvga_prt_Normal

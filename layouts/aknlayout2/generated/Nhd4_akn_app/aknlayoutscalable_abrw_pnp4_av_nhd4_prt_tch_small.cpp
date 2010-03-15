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

#include "aknlayoutscalable_abrw_pnp4_av_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00020303 };

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
0x160c,	// (0x0002190f) Screen

0x1620,	// (0x00021923) application_window_ParamLimits

0x1620,	// (0x00021923) application_window

0x163a,	// (0x0002193d) screen_g1

0xb6a6,	// (0x0002b9a9) area_bottom_pane_ParamLimits

0xb6a6,	// (0x0002b9a9) area_bottom_pane

0xb766,	// (0x0002ba69) area_top_pane_ParamLimits

0xb766,	// (0x0002ba69) area_top_pane

0xb804,	// (0x0002bb07) main_pane_ParamLimits

0xb804,	// (0x0002bb07) main_pane

0x1644,	// (0x00021947) misc_graphics

0x2fa2,	// (0x000232a5) battery_pane_ParamLimits

0x2fa2,	// (0x000232a5) battery_pane

0x3c77,	// (0x00023f7a) bg_status_flat_pane_g8

0x3c7f,	// (0x00023f82) bg_status_flat_pane_g9

0x3064,	// (0x00023367) context_pane_ParamLimits

0x3064,	// (0x00023367) context_pane

0x317a,	// (0x0002347d) navi_pane_ParamLimits

0x317a,	// (0x0002347d) navi_pane

0x31f8,	// (0x000234fb) signal_pane_ParamLimits

0x31f8,	// (0x000234fb) signal_pane

0x0008,

0xf87f,	// (0x0002fb82) bg_status_flat_pane_g

0x3265,	// (0x00023568) status_pane_g1_ParamLimits

0x3265,	// (0x00023568) status_pane_g1

0x3279,	// (0x0002357c) status_pane_g2_ParamLimits

0x3279,	// (0x0002357c) status_pane_g2

0x3285,	// (0x00023588) status_pane_g3_ParamLimits

0x3285,	// (0x00023588) status_pane_g3

0x0004,

0xf7a6,	// (0x0002faa9) status_pane_g_ParamLimits

0xf7a6,	// (0x0002faa9) status_pane_g

0x32b9,	// (0x000235bc) title_pane_ParamLimits

0x32b9,	// (0x000235bc) title_pane

0x32f6,	// (0x000235f9) uni_indicator_pane_ParamLimits

0x32f6,	// (0x000235f9) uni_indicator_pane

0x2ec6,	// (0x000231c9) bg_list_pane_ParamLimits

0x2ec6,	// (0x000231c9) bg_list_pane

0xec48,	// (0x0002ef4b) find_pane

0x2ee6,	// (0x000231e9) listscroll_app_pane_ParamLimits

0x2ee6,	// (0x000231e9) listscroll_app_pane

0x2ef2,	// (0x000231f5) listscroll_form_pane

0xb5dc,	// (0x0002b8df) listscroll_gen_pane_ParamLimits

0xb5dc,	// (0x0002b8df) listscroll_gen_pane

0x2ef2,	// (0x000231f5) listscroll_set_pane

0x2169,	// (0x0002246c) main_idle_act_pane

0x2bd0,	// (0x00022ed3) main_idle_trad_pane

0x2bd0,	// (0x00022ed3) main_list_empty_pane

0x2f0c,	// (0x0002320f) main_midp_pane

0x2f18,	// (0x0002321b) main_pane_g1_ParamLimits

0x2f18,	// (0x0002321b) main_pane_g1

0xc0bc,	// (0x0002c3bf) popup_ai_message_window_ParamLimits

0xc0bc,	// (0x0002c3bf) popup_ai_message_window

0xc160,	// (0x0002c463) popup_fep_china_uni_window_ParamLimits

0xc160,	// (0x0002c463) popup_fep_china_uni_window

0xc1ba,	// (0x0002c4bd) popup_fep_japan_candidate_window_ParamLimits

0xc1ba,	// (0x0002c4bd) popup_fep_japan_candidate_window

0xc1d8,	// (0x0002c4db) popup_fep_japan_predictive_window_ParamLimits

0xc1d8,	// (0x0002c4db) popup_fep_japan_predictive_window

0xc208,	// (0x0002c50b) popup_find_window

0xc215,	// (0x0002c518) popup_grid_graphic_window_ParamLimits

0xc215,	// (0x0002c518) popup_grid_graphic_window

0xc23d,	// (0x0002c540) popup_large_graphic_colour_window

0xc263,	// (0x0002c566) popup_menu_window_ParamLimits

0xc263,	// (0x0002c566) popup_menu_window

0xc41d,	// (0x0002c720) popup_note_image_window

0xc409,	// (0x0002c70c) popup_note_wait_window_ParamLimits

0xc409,	// (0x0002c70c) popup_note_wait_window

0xc409,	// (0x0002c70c) popup_note_window_ParamLimits

0xc409,	// (0x0002c70c) popup_note_window

0xc473,	// (0x0002c776) popup_query_code_window_ParamLimits

0xc473,	// (0x0002c776) popup_query_code_window

0xc487,	// (0x0002c78a) popup_query_data_code_window_ParamLimits

0xc487,	// (0x0002c78a) popup_query_data_code_window

0xc4a2,	// (0x0002c7a5) popup_query_data_window_ParamLimits

0xc4a2,	// (0x0002c7a5) popup_query_data_window

0xc4bc,	// (0x0002c7bf) popup_query_sat_info_window_ParamLimits

0xc4bc,	// (0x0002c7bf) popup_query_sat_info_window

0xc4f5,	// (0x0002c7f8) popup_snote_single_graphic_window_ParamLimits

0xc4f5,	// (0x0002c7f8) popup_snote_single_graphic_window

0xc4f5,	// (0x0002c7f8) popup_snote_single_text_window_ParamLimits

0xc4f5,	// (0x0002c7f8) popup_snote_single_text_window

0xc50a,	// (0x0002c80d) popup_sub_window_general

0xc638,	// (0x0002c93b) popup_window_general_ParamLimits

0xc638,	// (0x0002c93b) popup_window_general

0x2f26,	// (0x00023229) power_save_pane

0xbf4c,	// (0x0002c24f) control_pane_g1_ParamLimits

0xbf4c,	// (0x0002c24f) control_pane_g1

0xbf73,	// (0x0002c276) control_pane_g2_ParamLimits

0xbf73,	// (0x0002c276) control_pane_g2

0x2e89,	// (0x0002318c) control_pane_g3_ParamLimits

0x2e89,	// (0x0002318c) control_pane_g3

0x0007,

0xf78e,	// (0x0002fa91) control_pane_g_ParamLimits

0xf78e,	// (0x0002fa91) control_pane_g

0xbfbb,	// (0x0002c2be) control_pane_t1_ParamLimits

0xbfbb,	// (0x0002c2be) control_pane_t1

0xc007,	// (0x0002c30a) control_pane_t2_ParamLimits

0xc007,	// (0x0002c30a) control_pane_t2

0x0002,

0xf79f,	// (0x0002faa2) control_pane_t_ParamLimits

0xf79f,	// (0x0002faa2) control_pane_t

0x2daa,	// (0x000230ad) navi_navi_volume_pane_cp1

0x2db3,	// (0x000230b6) status_small_icon_pane

0x2dbb,	// (0x000230be) status_small_pane_g1_ParamLimits

0x2dbb,	// (0x000230be) status_small_pane_g1

0x2def,	// (0x000230f2) status_small_pane_g2_ParamLimits

0x2def,	// (0x000230f2) status_small_pane_g2

0x2dfb,	// (0x000230fe) status_small_pane_g3_ParamLimits

0x2dfb,	// (0x000230fe) status_small_pane_g3

0x2e07,	// (0x0002310a) status_small_pane_g4_ParamLimits

0x2e07,	// (0x0002310a) status_small_pane_g4

0x2e13,	// (0x00023116) status_small_pane_g5_ParamLimits

0x2e13,	// (0x00023116) status_small_pane_g5

0x2e22,	// (0x00023125) status_small_pane_g6_ParamLimits

0x2e22,	// (0x00023125) status_small_pane_g6

0x0007,

0xf77d,	// (0x0002fa80) status_small_pane_g_ParamLimits

0xf77d,	// (0x0002fa80) status_small_pane_g

0x2e52,	// (0x00023155) status_small_pane_t1

0x2e75,	// (0x00023178) status_small_wait_pane_ParamLimits

0x2e75,	// (0x00023178) status_small_wait_pane

0x265b,	// (0x0002295e) aid_levels_signal_ParamLimits

0x265b,	// (0x0002295e) aid_levels_signal

0x266d,	// (0x00022970) signal_pane_g1_ParamLimits

0x266d,	// (0x00022970) signal_pane_g1

0x2682,	// (0x00022985) signal_pane_g2_ParamLimits

0x2682,	// (0x00022985) signal_pane_g2

0x0003,

0xf70e,	// (0x0002fa11) signal_pane_g_ParamLimits

0xf70e,	// (0x0002fa11) signal_pane_g

0x26bc,	// (0x000229bf) context_pane_g1

0x164e,	// (0x00021951) title_pane_g1

0x1684,	// (0x00021987) title_pane_t1

0x16ec,	// (0x000219ef) title_pane_t2

0x1712,	// (0x00021a15) title_pane_t3

0x0002,

0xf55d,	// (0x0002f860) title_pane_t

0x330e,	// (0x00023611) aid_levels_battery_ParamLimits

0x330e,	// (0x00023611) aid_levels_battery

0x3322,	// (0x00023625) battery_pane_g1_ParamLimits

0x3322,	// (0x00023625) battery_pane_g1

0x3338,	// (0x0002363b) battery_pane_g2_ParamLimits

0x3338,	// (0x0002363b) battery_pane_g2

0x0001,

0xf7b1,	// (0x0002fab4) battery_pane_g_ParamLimits

0xf7b1,	// (0x0002fab4) battery_pane_g

0x45ab,	// (0x000248ae) uni_indicator_pane_g1

0x45c0,	// (0x000248c3) uni_indicator_pane_g2

0x45d6,	// (0x000248d9) uni_indicator_pane_g3

0x0005,

0xf927,	// (0x0002fc2a) uni_indicator_pane_g

0x2a4e,	// (0x00022d51) navi_icon_pane_ParamLimits

0x2a4e,	// (0x00022d51) navi_icon_pane

0x2997,	// (0x00022c9a) navi_midp_pane

0x2a6a,	// (0x00022d6d) navi_navi_pane

0x2a74,	// (0x00022d77) navi_text_pane_ParamLimits

0x2a74,	// (0x00022d77) navi_text_pane

0x163a,	// (0x0002193d) status_small_wait_pane_g1

0x1b35,	// (0x00021e38) status_small_wait_pane_g2

0x0001,

0xf922,	// (0x0002fc25) status_small_wait_pane_g

0x42d2,	// (0x000245d5) navi_navi_icon_text_pane

0x42ec,	// (0x000245ef) navi_navi_pane_g1_ParamLimits

0x42ec,	// (0x000245ef) navi_navi_pane_g1

0x42da,	// (0x000245dd) navi_navi_pane_g2_ParamLimits

0x42da,	// (0x000245dd) navi_navi_pane_g2

0x0001,

0xf8f0,	// (0x0002fbf3) navi_navi_pane_g_ParamLimits

0xf8f0,	// (0x0002fbf3) navi_navi_pane_g

0x42fe,	// (0x00024601) navi_navi_tabs_pane

0x4307,	// (0x0002460a) navi_navi_text_pane

0x42d2,	// (0x000245d5) navi_navi_volume_pane

0x42ae,	// (0x000245b1) navi_text_pane_t1

0x42a2,	// (0x000245a5) navi_icon_pane_g1

0x41f5,	// (0x000244f8) navi_navi_text_pane_t1

0xc8dc,	// (0x0002cbdf) navi_navi_volume_pane_g1

0xc8e4,	// (0x0002cbe7) volume_small_pane

0x415b,	// (0x0002445e) navi_navi_icon_text_pane_g1

0x4163,	// (0x00024466) navi_navi_icon_text_pane_t1

0x2a6a,	// (0x00022d6d) navi_tabs_2_long_pane

0x2a6a,	// (0x00022d6d) navi_tabs_2_pane

0x2a6a,	// (0x00022d6d) navi_tabs_3_long_pane

0x2a6a,	// (0x00022d6d) navi_tabs_3_pane

0x2a6a,	// (0x00022d6d) navi_tabs_4_pane

0xc8bc,	// (0x0002cbbf) tabs_2_active_pane_ParamLimits

0xc8bc,	// (0x0002cbbf) tabs_2_active_pane

0xc8cc,	// (0x0002cbcf) tabs_2_passive_pane_ParamLimits

0xc8cc,	// (0x0002cbcf) tabs_2_passive_pane

0xc88a,	// (0x0002cb8d) tabs_3_active_pane_ParamLimits

0xc88a,	// (0x0002cb8d) tabs_3_active_pane

0xc89a,	// (0x0002cb9d) tabs_3_passive_pane_ParamLimits

0xc89a,	// (0x0002cb9d) tabs_3_passive_pane

0xc8ab,	// (0x0002cbae) tabs_3_passive_pane_cp_ParamLimits

0xc8ab,	// (0x0002cbae) tabs_3_passive_pane_cp

0xc846,	// (0x0002cb49) tabs_4_active_pane_ParamLimits

0xc846,	// (0x0002cb49) tabs_4_active_pane

0xc857,	// (0x0002cb5a) tabs_4_passive_pane_ParamLimits

0xc857,	// (0x0002cb5a) tabs_4_passive_pane

0xc868,	// (0x0002cb6b) tabs_4_passive_pane_cp_ParamLimits

0xc868,	// (0x0002cb6b) tabs_4_passive_pane_cp

0xc879,	// (0x0002cb7c) tabs_4_passive_pane_cp2_ParamLimits

0xc879,	// (0x0002cb7c) tabs_4_passive_pane_cp2

0xc822,	// (0x0002cb25) tabs_2_long_active_pane_ParamLimits

0xc822,	// (0x0002cb25) tabs_2_long_active_pane

0xc834,	// (0x0002cb37) tabs_2_long_passive_pane_ParamLimits

0xc834,	// (0x0002cb37) tabs_2_long_passive_pane

0xc7e9,	// (0x0002caec) tabs_3_long_active_pane_ParamLimits

0xc7e9,	// (0x0002caec) tabs_3_long_active_pane

0xc7fc,	// (0x0002caff) tabs_3_long_passive_pane_ParamLimits

0xc7fc,	// (0x0002caff) tabs_3_long_passive_pane

0xc80f,	// (0x0002cb12) tabs_3_long_passive_pane_cp_ParamLimits

0xc80f,	// (0x0002cb12) tabs_3_long_passive_pane_cp

0xc78f,	// (0x0002ca92) volume_small_pane_g1

0xc798,	// (0x0002ca9b) volume_small_pane_g2

0xc7a1,	// (0x0002caa4) volume_small_pane_g3

0xc7aa,	// (0x0002caad) volume_small_pane_g4

0xc7b3,	// (0x0002cab6) volume_small_pane_g5

0xc7bc,	// (0x0002cabf) volume_small_pane_g6

0xc7c5,	// (0x0002cac8) volume_small_pane_g7

0xc7ce,	// (0x0002cad1) volume_small_pane_g8

0xc7d7,	// (0x0002cada) volume_small_pane_g9

0xc7e0,	// (0x0002cae3) volume_small_pane_g10

0x0009,

0xf8bc,	// (0x0002fbbf) volume_small_pane_g

0x1724,	// (0x00021a27) bg_active_tab_pane_cp2_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp2

0x1732,	// (0x00021a35) tabs_3_active_pane_g1

0x173a,	// (0x00021a3d) tabs_3_active_pane_t1

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp2_ParamLimits

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp2

0x1732,	// (0x00021a35) tabs_3_passive_pane_g1

0x173a,	// (0x00021a3d) tabs_3_passive_pane_t1

0x1724,	// (0x00021a27) bg_active_tab_pane_cp3_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp3

0x174c,	// (0x00021a4f) tabs_4_active_pane_g1

0x1754,	// (0x00021a57) tabs_4_active_pane_t1

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp3_ParamLimits

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp3

0x174c,	// (0x00021a4f) tabs_4_1_passive_pane_g1

0x1754,	// (0x00021a57) tabs_4_1_passive_pane_t1

0x2f0c,	// (0x0002320f) list_highlight_pane_cp2

0x482f,	// (0x00024b32) list_set_pane_ParamLimits

0x482f,	// (0x00024b32) list_set_pane

0x48d5,	// (0x00024bd8) main_pane_set_t1_ParamLimits

0x48d5,	// (0x00024bd8) main_pane_set_t1

0x48f5,	// (0x00024bf8) main_pane_set_t2_ParamLimits

0x48f5,	// (0x00024bf8) main_pane_set_t2

0x4909,	// (0x00024c0c) main_pane_set_t3_ParamLimits

0x4909,	// (0x00024c0c) main_pane_set_t3

0x491b,	// (0x00024c1e) main_pane_set_t4_ParamLimits

0x491b,	// (0x00024c1e) main_pane_set_t4

0x0003,

0xf98c,	// (0x0002fc8f) main_pane_set_t_ParamLimits

0xf98c,	// (0x0002fc8f) main_pane_set_t

0x492d,	// (0x00024c30) setting_code_pane

0x4937,	// (0x00024c3a) setting_slider_graphic_pane

0x4937,	// (0x00024c3a) setting_slider_pane

0x4937,	// (0x00024c3a) setting_text_pane

0x4937,	// (0x00024c3a) setting_volume_pane

0xba3b,	// (0x0002bd3e) volume_set_pane

0x1724,	// (0x00021a27) bg_set_opt_pane_cp

0xba43,	// (0x0002bd46) setting_slider_pane_t1

0xba5c,	// (0x0002bd5f) setting_slider_pane_t2

0xba76,	// (0x0002bd79) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0002f867) setting_slider_pane_t

0xba8e,	// (0x0002bd91) slider_set_pane

0x1644,	// (0x00021947) bg_set_opt_pane_cp2

0x1766,	// (0x00021a69) setting_slider_graphic_pane_g1

0xbaa4,	// (0x0002bda7) setting_slider_graphic_pane_t1

0xbab4,	// (0x0002bdb7) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0002f86e) setting_slider_graphic_pane_t

0xbac4,	// (0x0002bdc7) slider_set_pane_cp

0x1644,	// (0x00021947) input_focus_pane_cp1

0x47ee,	// (0x00024af1) list_set_text_pane

0x163a,	// (0x0002193d) setting_text_pane_g1

0x1644,	// (0x00021947) input_focus_pane_cp2

0x163a,	// (0x0002193d) setting_code_pane_g1

0x176f,	// (0x00021a72) setting_code_pane_t1

0xe4c3,	// (0x0002e7c6) set_text_pane_t1_ParamLimits

0xe4c3,	// (0x0002e7c6) set_text_pane_t1

0x1fe2,	// (0x000222e5) set_opt_bg_pane_g1

0x1fea,	// (0x000222ed) set_opt_bg_pane_g2

0x47ce,	// (0x00024ad1) set_opt_bg_pane_g3

0x1ffa,	// (0x000222fd) set_opt_bg_pane_g4

0x2002,	// (0x00022305) set_opt_bg_pane_g5

0x200a,	// (0x0002230d) set_opt_bg_pane_g6

0x47d6,	// (0x00024ad9) set_opt_bg_pane_g7

0x47de,	// (0x00024ae1) set_opt_bg_pane_g8

0x47e6,	// (0x00024ae9) set_opt_bg_pane_g9

0x0008,

0xf979,	// (0x0002fc7c) set_opt_bg_pane_g

0x47c1,	// (0x00024ac4) slider_set_pane_g1

0xc951,	// (0x0002cc54) slider_set_pane_g2

0x0006,

0xf96a,	// (0x0002fc6d) slider_set_pane_g

0xc8ed,	// (0x0002cbf0) volume_set_pane_g1

0xc8f5,	// (0x0002cbf8) volume_set_pane_g2

0xc8fd,	// (0x0002cc00) volume_set_pane_g3

0xc905,	// (0x0002cc08) volume_set_pane_g4

0xc90d,	// (0x0002cc10) volume_set_pane_g5

0xc915,	// (0x0002cc18) volume_set_pane_g6

0xc91d,	// (0x0002cc20) volume_set_pane_g7

0xc925,	// (0x0002cc28) volume_set_pane_g8

0xc92d,	// (0x0002cc30) volume_set_pane_g9

0xc935,	// (0x0002cc38) volume_set_pane_g10

0x0009,

0xf942,	// (0x0002fc45) volume_set_pane_g

0x177d,	// (0x00021a80) indicator_pane_ParamLimits

0x177d,	// (0x00021a80) indicator_pane

0x1789,	// (0x00021a8c) main_idle_pane_g2_ParamLimits

0x1789,	// (0x00021a8c) main_idle_pane_g2

0x17b1,	// (0x00021ab4) main_pane_idle_g1_ParamLimits

0x17b1,	// (0x00021ab4) main_pane_idle_g1

0x17be,	// (0x00021ac1) popup_clock_digital_analogue_window_ParamLimits

0x17be,	// (0x00021ac1) popup_clock_digital_analogue_window

0x17d5,	// (0x00021ad8) soft_indicator_pane_ParamLimits

0x17d5,	// (0x00021ad8) soft_indicator_pane

0x17e1,	// (0x00021ae4) wallpaper_pane_ParamLimits

0x17e1,	// (0x00021ae4) wallpaper_pane

0x163a,	// (0x0002193d) wallpaper_pane_g1

0x17f5,	// (0x00021af8) indicator_pane_g1_ParamLimits

0x17f5,	// (0x00021af8) indicator_pane_g1

0x4bc4,	// (0x00024ec7) navi_navi_icon_text_pane_srt_g1

0x1810,	// (0x00021b13) soft_indicator_pane_t1

0x182a,	// (0x00021b2d) aid_ps_area_pane

0x183b,	// (0x00021b3e) aid_ps_clock_pane

0x1849,	// (0x00021b4c) aid_ps_indicator_pane

0x1855,	// (0x00021b58) indicator_ps_pane_ParamLimits

0x1855,	// (0x00021b58) indicator_ps_pane

0x1864,	// (0x00021b67) power_save_pane_g1_ParamLimits

0x1864,	// (0x00021b67) power_save_pane_g1

0x1870,	// (0x00021b73) power_save_pane_g2_ParamLimits

0x1870,	// (0x00021b73) power_save_pane_g2

0xb65a,	// (0x0002b95d) aid_navinavi_width_pane

0x182a,	// (0x00021b2d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0002f873) power_save_pane_g_ParamLimits

0xf570,	// (0x0002f873) power_save_pane_g

0x187e,	// (0x00021b81) power_save_pane_t1_ParamLimits

0x187e,	// (0x00021b81) power_save_pane_t1

0x183b,	// (0x00021b3e) aid_ps_clock_pane_ParamLimits

0x1849,	// (0x00021b4c) aid_ps_indicator_pane_ParamLimits

0x1890,	// (0x00021b93) power_save_pane_t4_ParamLimits

0x1890,	// (0x00021b93) power_save_pane_t4

0x0001,

0xf575,	// (0x0002f878) power_save_pane_t_ParamLimits

0xf575,	// (0x0002f878) power_save_pane_t

0x18ba,	// (0x00021bbd) power_save_t3_ParamLimits

0x18ba,	// (0x00021bbd) power_save_t3

0x18a5,	// (0x00021ba8) power_save_t2_ParamLimits

0x18a5,	// (0x00021ba8) power_save_t2

0x18cf,	// (0x00021bd2) indicator_ps_pane_g1

0x18d8,	// (0x00021bdb) ai_gene_pane_ParamLimits

0x18d8,	// (0x00021bdb) ai_gene_pane

0x18e4,	// (0x00021be7) ai_links_pane_ParamLimits

0x18e4,	// (0x00021be7) ai_links_pane

0x18f0,	// (0x00021bf3) indicator_pane_cp1_ParamLimits

0x18f0,	// (0x00021bf3) indicator_pane_cp1

0x18fc,	// (0x00021bff) main_pane_idle_g1_cp_ParamLimits

0x18fc,	// (0x00021bff) main_pane_idle_g1_cp

0x1908,	// (0x00021c0b) popup_ai_links_title_window

0x1911,	// (0x00021c14) soft_indicator_pane_cp1_ParamLimits

0x1911,	// (0x00021c14) soft_indicator_pane_cp1

0x4599,	// (0x0002489c) ai_links_pane_g1

0x45a2,	// (0x000248a5) grid_ai_links_pane

0x457c,	// (0x0002487f) ai_gene_pane_1

0x4587,	// (0x0002488a) ai_gene_pane_2

0x4590,	// (0x00024893) list_highlight_pane_cp4

0x4560,	// (0x00024863) cell_ai_link_pane_ParamLimits

0x4560,	// (0x00024863) cell_ai_link_pane

0x4558,	// (0x0002485b) cell_ai_link_pane_g1

0x1b35,	// (0x00021e38) cell_ai_link_pane_g2

0x0001,

0xf91d,	// (0x0002fc20) cell_ai_link_pane_g

0x1644,	// (0x00021947) grid_highlight_cp2

0x1644,	// (0x00021947) bg_popup_sub_pane_cp1

0x192b,	// (0x00021c2e) popup_ai_links_title_window_t1

0x44a8,	// (0x000247ab) ai_gene_pane_1_g1_ParamLimits

0x44a8,	// (0x000247ab) ai_gene_pane_1_g1

0x44b4,	// (0x000247b7) ai_gene_pane_1_g2_ParamLimits

0x44b4,	// (0x000247b7) ai_gene_pane_1_g2

0x0001,

0xf913,	// (0x0002fc16) ai_gene_pane_1_g_ParamLimits

0xf913,	// (0x0002fc16) ai_gene_pane_1_g

0x44c1,	// (0x000247c4) ai_gene_pane_1_t1_ParamLimits

0x44c1,	// (0x000247c4) ai_gene_pane_1_t1

0x44f5,	// (0x000247f8) grid_ai_soft_ind_pane

0x4493,	// (0x00024796) ai_gene_pane_2_t1_ParamLimits

0x4493,	// (0x00024796) ai_gene_pane_2_t1

0x193a,	// (0x00021c3d) main_pane_empty_t1_ParamLimits

0x193a,	// (0x00021c3d) main_pane_empty_t1

0x1952,	// (0x00021c55) main_pane_empty_t2_ParamLimits

0x1952,	// (0x00021c55) main_pane_empty_t2

0x1967,	// (0x00021c6a) main_pane_empty_t3_ParamLimits

0x1967,	// (0x00021c6a) main_pane_empty_t3

0x1979,	// (0x00021c7c) main_pane_empty_t4_ParamLimits

0x1979,	// (0x00021c7c) main_pane_empty_t4

0x198b,	// (0x00021c8e) main_pane_empty_t5_ParamLimits

0x198b,	// (0x00021c8e) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0002f87d) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0002f87d) main_pane_empty_t

0x2033,	// (0x00022336) bg_popup_window_pane_ParamLimits

0x2033,	// (0x00022336) bg_popup_window_pane

0x4203,	// (0x00024506) find_popup_pane_cp2_ParamLimits

0x4203,	// (0x00024506) find_popup_pane_cp2

0x420f,	// (0x00024512) heading_pane_ParamLimits

0x420f,	// (0x00024512) heading_pane

0x1644,	// (0x00021947) bg_popup_sub_pane

0x417d,	// (0x00024480) bg_popup_window_pane_g1_ParamLimits

0x417d,	// (0x00024480) bg_popup_window_pane_g1

0x4189,	// (0x0002448c) bg_popup_window_pane_g2_ParamLimits

0x4189,	// (0x0002448c) bg_popup_window_pane_g2

0x4195,	// (0x00024498) bg_popup_window_pane_g3_ParamLimits

0x4195,	// (0x00024498) bg_popup_window_pane_g3

0x41a1,	// (0x000244a4) bg_popup_window_pane_g4_ParamLimits

0x41a1,	// (0x000244a4) bg_popup_window_pane_g4

0x41ad,	// (0x000244b0) bg_popup_window_pane_g5_ParamLimits

0x41ad,	// (0x000244b0) bg_popup_window_pane_g5

0x41b9,	// (0x000244bc) bg_popup_window_pane_g6_ParamLimits

0x41b9,	// (0x000244bc) bg_popup_window_pane_g6

0x41c5,	// (0x000244c8) bg_popup_window_pane_g7_ParamLimits

0x41c5,	// (0x000244c8) bg_popup_window_pane_g7

0x41d1,	// (0x000244d4) bg_popup_window_pane_g8_ParamLimits

0x41d1,	// (0x000244d4) bg_popup_window_pane_g8

0x41dd,	// (0x000244e0) bg_popup_window_pane_g9_ParamLimits

0x41dd,	// (0x000244e0) bg_popup_window_pane_g9

0x41e9,	// (0x000244ec) bg_popup_window_pane_g10_ParamLimits

0x41e9,	// (0x000244ec) bg_popup_window_pane_g10

0x0009,

0xf8db,	// (0x0002fbde) bg_popup_window_pane_g_ParamLimits

0xf8db,	// (0x0002fbde) bg_popup_window_pane_g

0x4112,	// (0x00024415) bg_popup_heading_pane_ParamLimits

0x4112,	// (0x00024415) bg_popup_heading_pane

0xc9d9,	// (0x0002ccdc) tabs_4_passive_pane_cp_srt_ParamLimits

0xc9d9,	// (0x0002ccdc) tabs_4_passive_pane_cp_srt

0xc9eb,	// (0x0002ccee) tabs_4_passive_pane_srt_ParamLimits

0x4126,	// (0x00024429) heading_pane_g2

0xc9eb,	// (0x0002ccee) tabs_4_passive_pane_srt

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp3_srt_ParamLimits

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp3_srt

0x412e,	// (0x00024431) heading_pane_t1_ParamLimits

0x412e,	// (0x00024431) heading_pane_t1

0x4145,	// (0x00024448) heading_pane_t2_ParamLimits

0x4145,	// (0x00024448) heading_pane_t2

0x0001,

0xf8d6,	// (0x0002fbd9) heading_pane_t_ParamLimits

0xf8d6,	// (0x0002fbd9) heading_pane_t

0x3c3f,	// (0x00023f42) bg_popup_heading_pane_g1

0x3cee,	// (0x00023ff1) bg_popup_heading_pane_g2

0x3cf8,	// (0x00023ffb) bg_popup_heading_pane_g3

0x3d02,	// (0x00024005) bg_popup_heading_pane_g4

0x3d0c,	// (0x0002400f) bg_popup_heading_pane_g5

0x3d16,	// (0x00024019) bg_popup_heading_pane_g6

0x3d1e,	// (0x00024021) bg_popup_heading_pane_g7

0x3d26,	// (0x00024029) bg_popup_heading_pane_g8

0x3d30,	// (0x00024033) bg_popup_heading_pane_g9

0x0008,

0xf892,	// (0x0002fb95) bg_popup_heading_pane_g

0x3410,	// (0x00023713) bg_popup_sub_pane_g1

0x3418,	// (0x0002371b) bg_popup_sub_pane_g2

0x3420,	// (0x00023723) bg_popup_sub_pane_g3

0x3428,	// (0x0002372b) bg_popup_sub_pane_g4

0x3430,	// (0x00023733) bg_popup_sub_pane_g5

0x3438,	// (0x0002373b) bg_popup_sub_pane_g6

0x3440,	// (0x00023743) bg_popup_sub_pane_g7

0x3448,	// (0x0002374b) bg_popup_sub_pane_g8

0x3450,	// (0x00023753) bg_popup_sub_pane_g9

0x0008,

0xf86c,	// (0x0002fb6f) bg_popup_sub_pane_g

0x199f,	// (0x00021ca2) bg_popup_window_pane_cp5_ParamLimits

0x199f,	// (0x00021ca2) bg_popup_window_pane_cp5

0x19bb,	// (0x00021cbe) popup_note_window_g1_ParamLimits

0x19bb,	// (0x00021cbe) popup_note_window_g1

0x19c7,	// (0x00021cca) popup_note_window_t1_ParamLimits

0x19c7,	// (0x00021cca) popup_note_window_t1

0x19d9,	// (0x00021cdc) popup_note_window_t2_ParamLimits

0x19d9,	// (0x00021cdc) popup_note_window_t2

0x19eb,	// (0x00021cee) popup_note_window_t3_ParamLimits

0x19eb,	// (0x00021cee) popup_note_window_t3

0x19fd,	// (0x00021d00) popup_note_window_t4_ParamLimits

0x19fd,	// (0x00021d00) popup_note_window_t4

0x1a25,	// (0x00021d28) popup_note_window_t5_ParamLimits

0x1a25,	// (0x00021d28) popup_note_window_t5

0x0004,

0xf585,	// (0x0002f888) popup_note_window_t_ParamLimits

0xf585,	// (0x0002f888) popup_note_window_t

0x1a49,	// (0x00021d4c) bg_popup_window_pane_cp6_ParamLimits

0x1a49,	// (0x00021d4c) bg_popup_window_pane_cp6

0x3bb3,	// (0x00023eb6) popup_note_image_window_g1_ParamLimits

0x3bb3,	// (0x00023eb6) popup_note_image_window_g1

0x3bbf,	// (0x00023ec2) popup_note_image_window_g2_ParamLimits

0x3bbf,	// (0x00023ec2) popup_note_image_window_g2

0x0001,

0xf860,	// (0x0002fb63) popup_note_image_window_g_ParamLimits

0xf860,	// (0x0002fb63) popup_note_image_window_g

0x3bd8,	// (0x00023edb) popup_note_image_window_t1_ParamLimits

0x3bd8,	// (0x00023edb) popup_note_image_window_t1

0x3bf1,	// (0x00023ef4) popup_note_image_window_t2_ParamLimits

0x3bf1,	// (0x00023ef4) popup_note_image_window_t2

0x3c0a,	// (0x00023f0d) popup_note_image_window_t3_ParamLimits

0x3c0a,	// (0x00023f0d) popup_note_image_window_t3

0x0002,

0xf865,	// (0x0002fb68) popup_note_image_window_t_ParamLimits

0xf865,	// (0x0002fb68) popup_note_image_window_t

0x3a74,	// (0x00023d77) bg_popup_window_pane_cp7_ParamLimits

0x3a74,	// (0x00023d77) bg_popup_window_pane_cp7

0x3aa4,	// (0x00023da7) popup_note_wait_window_g1_ParamLimits

0x3aa4,	// (0x00023da7) popup_note_wait_window_g1

0x3ab0,	// (0x00023db3) popup_note_wait_window_g2_ParamLimits

0x3ab0,	// (0x00023db3) popup_note_wait_window_g2

0x0002,

0xf84e,	// (0x0002fb51) popup_note_wait_window_g_ParamLimits

0xf84e,	// (0x0002fb51) popup_note_wait_window_g

0x3ac8,	// (0x00023dcb) popup_note_wait_window_t1_ParamLimits

0x3ac8,	// (0x00023dcb) popup_note_wait_window_t1

0x3aef,	// (0x00023df2) popup_note_wait_window_t2_ParamLimits

0x3aef,	// (0x00023df2) popup_note_wait_window_t2

0x3b0c,	// (0x00023e0f) popup_note_wait_window_t3_ParamLimits

0x3b0c,	// (0x00023e0f) popup_note_wait_window_t3

0x3b1f,	// (0x00023e22) popup_note_wait_window_t4_ParamLimits

0x3b1f,	// (0x00023e22) popup_note_wait_window_t4

0x0004,

0xf855,	// (0x0002fb58) popup_note_wait_window_t_ParamLimits

0xf855,	// (0x0002fb58) popup_note_wait_window_t

0x3b44,	// (0x00023e47) wait_bar_pane_ParamLimits

0x3b44,	// (0x00023e47) wait_bar_pane

0x1644,	// (0x00021947) wait_anim_pane

0x1644,	// (0x00021947) wait_border_pane

0x163a,	// (0x0002193d) wait_anim_pane_g1

0x163a,	// (0x0002193d) wait_anim_pane_g2

0x0001,

0xf709,	// (0x0002fa0c) wait_anim_pane_g

0x3a18,	// (0x00023d1b) wait_border_pane_g1

0x3a23,	// (0x00023d26) wait_border_pane_g2

0x3a2c,	// (0x00023d2f) wait_border_pane_g3

0x0002,

0xf847,	// (0x0002fb4a) wait_border_pane_g

0x3888,	// (0x00023b8b) bg_popup_window_pane_cp16_ParamLimits

0x3888,	// (0x00023b8b) bg_popup_window_pane_cp16

0x3988,	// (0x00023c8b) indicator_popup_pane_cp4_ParamLimits

0x3988,	// (0x00023c8b) indicator_popup_pane_cp4

0x399c,	// (0x00023c9f) popup_query_data_window_t1_ParamLimits

0x399c,	// (0x00023c9f) popup_query_data_window_t1

0x39ae,	// (0x00023cb1) popup_query_data_window_t2_ParamLimits

0x39ae,	// (0x00023cb1) popup_query_data_window_t2

0x39c7,	// (0x00023cca) popup_query_data_window_t3_ParamLimits

0x39c7,	// (0x00023cca) popup_query_data_window_t3

0x0002,

0xf840,	// (0x0002fb43) popup_query_data_window_t_ParamLimits

0xf840,	// (0x0002fb43) popup_query_data_window_t

0x39e1,	// (0x00023ce4) query_popup_data_pane_ParamLimits

0x39e1,	// (0x00023ce4) query_popup_data_pane

0x39f5,	// (0x00023cf8) query_popup_data_pane_cp1_ParamLimits

0x39f5,	// (0x00023cf8) query_popup_data_pane_cp1

0x3888,	// (0x00023b8b) bg_popup_window_pane_cp10_ParamLimits

0x3888,	// (0x00023b8b) bg_popup_window_pane_cp10

0x38ba,	// (0x00023bbd) indicator_popup_pane_ParamLimits

0x38ba,	// (0x00023bbd) indicator_popup_pane

0x38dc,	// (0x00023bdf) popup_query_code_window_t1_ParamLimits

0x38dc,	// (0x00023bdf) popup_query_code_window_t1

0x38f6,	// (0x00023bf9) popup_query_code_window_t2_ParamLimits

0x38f6,	// (0x00023bf9) popup_query_code_window_t2

0x393f,	// (0x00023c42) popup_query_code_window_t3_ParamLimits

0x393f,	// (0x00023c42) popup_query_code_window_t3

0x0002,

0xf839,	// (0x0002fb3c) popup_query_code_window_t_ParamLimits

0xf839,	// (0x0002fb3c) popup_query_code_window_t

0x396e,	// (0x00023c71) query_popup_pane_ParamLimits

0x396e,	// (0x00023c71) query_popup_pane

0x1a49,	// (0x00021d4c) bg_popup_window_pane_cp15_ParamLimits

0x1a49,	// (0x00021d4c) bg_popup_window_pane_cp15

0x1a67,	// (0x00021d6a) indicator_popup_pane_cp1_ParamLimits

0x1a67,	// (0x00021d6a) indicator_popup_pane_cp1

0x1a7a,	// (0x00021d7d) indicator_popup_pane_cp2_ParamLimits

0x1a7a,	// (0x00021d7d) indicator_popup_pane_cp2

0x1a8d,	// (0x00021d90) popup_query_data_code_window_g1_ParamLimits

0x1a8d,	// (0x00021d90) popup_query_data_code_window_g1

0x1aa0,	// (0x00021da3) popup_query_data_code_window_t1_ParamLimits

0x1aa0,	// (0x00021da3) popup_query_data_code_window_t1

0x1ab2,	// (0x00021db5) popup_query_data_code_window_t2_ParamLimits

0x1ab2,	// (0x00021db5) popup_query_data_code_window_t2

0x1ac4,	// (0x00021dc7) popup_query_data_code_window_t3_ParamLimits

0x1ac4,	// (0x00021dc7) popup_query_data_code_window_t3

0x1ada,	// (0x00021ddd) popup_query_data_code_window_t4_ParamLimits

0x1ada,	// (0x00021ddd) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0002f893) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0002f893) popup_query_data_code_window_t

0xc6a2,	// (0x0002c9a5) list_single_midp_graphic_pane_g3

0x1af2,	// (0x00021df5) query_popup_data_pane_cp2_ParamLimits

0x1b05,	// (0x00021e08) query_popup_pane_cp2_ParamLimits

0x1b05,	// (0x00021e08) query_popup_pane_cp2

0x1644,	// (0x00021947) bg_popup_window_pane_cp11

0x3880,	// (0x00023b83) heading_pane_cp5

0x1bed,	// (0x00021ef0) listscroll_popup_info_pane

0x1644,	// (0x00021947) input_focus_pane_cp3

0x1b18,	// (0x00021e1b) query_popup_pane_t1

0x1b26,	// (0x00021e29) list_popup_info_pane_ParamLimits

0x1b26,	// (0x00021e29) list_popup_info_pane

0x1b35,	// (0x00021e38) listscroll_popup_info_pane_g1

0x1b3d,	// (0x00021e40) scroll_pane_cp7

0x1b47,	// (0x00021e4a) popup_info_list_pane_t1_ParamLimits

0x1b47,	// (0x00021e4a) popup_info_list_pane_t1

0x1b61,	// (0x00021e64) popup_info_list_pane_t2_ParamLimits

0x1b61,	// (0x00021e64) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0002f89c) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0002f89c) popup_info_list_pane_t

0x1644,	// (0x00021947) bg_popup_window_pane_cp12

0x4bde,	// (0x00024ee1) find_popup_pane

0x1724,	// (0x00021a27) bg_popup_window_pane_cp3

0x1b7b,	// (0x00021e7e) heading_pane_cp3

0x1b87,	// (0x00021e8a) listscroll_popup_graphic_pane

0x1644,	// (0x00021947) bg_popup_window_pane_cp4

0x1be3,	// (0x00021ee6) heading_pane_cp4

0x1bed,	// (0x00021ef0) listscroll_popup_colour_pane

0x1bf5,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x1bf5,	// (0x00021ef8) cell_large_graphic_colour_none_popup_pane

0x1c09,	// (0x00021f0c) grid_large_graphic_colour_popup_pane_ParamLimits

0x1c09,	// (0x00021f0c) grid_large_graphic_colour_popup_pane

0x1c31,	// (0x00021f34) listscroll_popup_colour_pane_g1_ParamLimits

0x1c31,	// (0x00021f34) listscroll_popup_colour_pane_g1

0x1c48,	// (0x00021f4b) listscroll_popup_colour_pane_g2_ParamLimits

0x1c48,	// (0x00021f4b) listscroll_popup_colour_pane_g2

0x1c5f,	// (0x00021f62) listscroll_popup_colour_pane_g3_ParamLimits

0x1c5f,	// (0x00021f62) listscroll_popup_colour_pane_g3

0x1c6f,	// (0x00021f72) listscroll_popup_colour_pane_g4_ParamLimits

0x1c6f,	// (0x00021f72) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0002f8a1) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0002f8a1) listscroll_popup_colour_pane_g

0x1c7e,	// (0x00021f81) scroll_pane_cp6_ParamLimits

0x1c7e,	// (0x00021f81) scroll_pane_cp6

0x1c90,	// (0x00021f93) cell_large_graphic_colour_popup_pane_ParamLimits

0x1c90,	// (0x00021f93) cell_large_graphic_colour_popup_pane

0x1caf,	// (0x00021fb2) cell_large_graphic_colour_none_popup_pane_t1

0x1644,	// (0x00021947) grid_highlight_pane_cp5

0x1cbe,	// (0x00021fc1) cell_large_graphic_colour_popup_pane_g1

0x1cc6,	// (0x00021fc9) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0002f8aa) cell_large_graphic_colour_popup_pane_g

0x1cce,	// (0x00021fd1) cell_large_graphic_colour_popup_pane_g2_copy1

0x1cd7,	// (0x00021fda) grid_highlight_pane_cp4

0x1cdf,	// (0x00021fe2) bg_popup_window_pane_cp8_ParamLimits

0x1cdf,	// (0x00021fe2) bg_popup_window_pane_cp8

0x1cfa,	// (0x00021ffd) popup_snote_single_text_window_g1_ParamLimits

0x1cfa,	// (0x00021ffd) popup_snote_single_text_window_g1

0x1d0c,	// (0x0002200f) popup_snote_single_text_window_t1_ParamLimits

0x1d0c,	// (0x0002200f) popup_snote_single_text_window_t1

0x1d1f,	// (0x00022022) popup_snote_single_text_window_t2_ParamLimits

0x1d1f,	// (0x00022022) popup_snote_single_text_window_t2

0x1d32,	// (0x00022035) popup_snote_single_text_window_t3_ParamLimits

0x1d32,	// (0x00022035) popup_snote_single_text_window_t3

0x1d6b,	// (0x0002206e) popup_snote_single_text_window_t4_ParamLimits

0x1d6b,	// (0x0002206e) popup_snote_single_text_window_t4

0x1d9f,	// (0x000220a2) popup_snote_single_text_window_t5_ParamLimits

0x1d9f,	// (0x000220a2) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002f8af) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002f8af) popup_snote_single_text_window_t

0x1dce,	// (0x000220d1) bg_popup_window_pane_cp9_ParamLimits

0x1dce,	// (0x000220d1) bg_popup_window_pane_cp9

0x1cfa,	// (0x00021ffd) popup_snote_single_graphic_window_g1_ParamLimits

0x1cfa,	// (0x00021ffd) popup_snote_single_graphic_window_g1

0x1ddc,	// (0x000220df) popup_snote_single_graphic_window_g2_ParamLimits

0x1ddc,	// (0x000220df) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0002f8ba) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0002f8ba) popup_snote_single_graphic_window_g

0x1de8,	// (0x000220eb) popup_snote_single_graphic_window_t1_ParamLimits

0x1de8,	// (0x000220eb) popup_snote_single_graphic_window_t1

0x1dfb,	// (0x000220fe) popup_snote_single_graphic_window_t2_ParamLimits

0x1dfb,	// (0x000220fe) popup_snote_single_graphic_window_t2

0x1e0e,	// (0x00022111) popup_snote_single_graphic_window_t3_ParamLimits

0x1e0e,	// (0x00022111) popup_snote_single_graphic_window_t3

0x1e47,	// (0x0002214a) popup_snote_single_graphic_window_t4_ParamLimits

0x1e47,	// (0x0002214a) popup_snote_single_graphic_window_t4

0x1e7b,	// (0x0002217e) popup_snote_single_graphic_window_t5_ParamLimits

0x1e7b,	// (0x0002217e) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002f8bf) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002f8bf) popup_snote_single_graphic_window_t

0x4ae0,	// (0x00024de3) grid_graphic_popup_pane_ParamLimits

0x4ae0,	// (0x00024de3) grid_graphic_popup_pane

0x4b08,	// (0x00024e0b) listscroll_popup_graphic_pane_g1_ParamLimits

0x4b08,	// (0x00024e0b) listscroll_popup_graphic_pane_g1

0x4b1c,	// (0x00024e1f) listscroll_popup_graphic_pane_g2_ParamLimits

0x4b1c,	// (0x00024e1f) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b6,	// (0x0002fcb9) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b6,	// (0x0002fcb9) listscroll_popup_graphic_pane_g

0x4b72,	// (0x00024e75) scroll_pane_cp5

0x4a8b,	// (0x00024d8e) cell_graphic_popup_pane_ParamLimits

0x4a8b,	// (0x00024d8e) cell_graphic_popup_pane

0x4a6c,	// (0x00024d6f) cell_graphic_popup_pane_g1

0x4a74,	// (0x00024d77) cell_graphic_popup_pane_g2

0x1cce,	// (0x00021fd1) cell_graphic_popup_pane_g3

0x0002,

0xf9af,	// (0x0002fcb2) cell_graphic_popup_pane_g

0x4a7d,	// (0x00024d80) cell_graphic_popup_pane_t2

0x1cd7,	// (0x00021fda) grid_highlight_pane_cp3

0x1ebc,	// (0x000221bf) list_gen_pane_ParamLimits

0x1ebc,	// (0x000221bf) list_gen_pane

0x1eee,	// (0x000221f1) scroll_pane

0x49ce,	// (0x00024cd1) bg_list_pane_g1_ParamLimits

0x49ce,	// (0x00024cd1) bg_list_pane_g1

0x49e9,	// (0x00024cec) bg_list_pane_g2_ParamLimits

0x49e9,	// (0x00024cec) bg_list_pane_g2

0x49fc,	// (0x00024cff) bg_list_pane_g3_ParamLimits

0x49fc,	// (0x00024cff) bg_list_pane_g3

0x4a0e,	// (0x00024d11) bg_list_pane_g4_ParamLimits

0x4a0e,	// (0x00024d11) bg_list_pane_g4

0x4a20,	// (0x00024d23) bg_list_pane_g5_ParamLimits

0x4a20,	// (0x00024d23) bg_list_pane_g5

0x0004,

0xf9a4,	// (0x0002fca7) bg_list_pane_g_ParamLimits

0xf9a4,	// (0x0002fca7) bg_list_pane_g

0xedc9,	// (0x0002f0cc) list_double2_graphic_large_graphic_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double2_graphic_large_graphic_pane

0xedc9,	// (0x0002f0cc) list_double2_graphic_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double2_graphic_pane

0xedc9,	// (0x0002f0cc) list_double2_large_graphic_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double2_large_graphic_pane

0xedc9,	// (0x0002f0cc) list_double2_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double2_pane

0xedc9,	// (0x0002f0cc) list_double_graphic_heading_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_graphic_heading_pane

0xedc9,	// (0x0002f0cc) list_double_graphic_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_graphic_pane

0xedc9,	// (0x0002f0cc) list_double_heading_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_heading_pane

0xedc9,	// (0x0002f0cc) list_double_large_graphic_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_large_graphic_pane

0xedc9,	// (0x0002f0cc) list_double_number_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_number_pane

0xedc9,	// (0x0002f0cc) list_double_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_pane

0xedc9,	// (0x0002f0cc) list_double_time_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_double_time_pane

0xedc9,	// (0x0002f0cc) list_setting_number_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_setting_number_pane

0xedc9,	// (0x0002f0cc) list_setting_pane_ParamLimits

0xedc9,	// (0x0002f0cc) list_setting_pane

0xee0b,	// (0x0002f10e) list_single_2graphic_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_2graphic_pane

0xee0b,	// (0x0002f10e) list_single_graphic_heading_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_graphic_heading_pane

0xee0b,	// (0x0002f10e) list_single_graphic_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_graphic_pane

0xee0b,	// (0x0002f10e) list_single_heading_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_heading_pane

0xee94,	// (0x0002f197) list_single_large_graphic_pane_ParamLimits

0xee94,	// (0x0002f197) list_single_large_graphic_pane

0xee0b,	// (0x0002f10e) list_single_number_heading_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_number_heading_pane

0xee0b,	// (0x0002f10e) list_single_number_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_number_pane

0xee0b,	// (0x0002f10e) list_single_pane_ParamLimits

0xee0b,	// (0x0002f10e) list_single_pane

0x1644,	// (0x00021947) list_highlight_pane_cp1

0xe4e9,	// (0x0002e7ec) list_single_pane_g1_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_pane_g1

0xe4f5,	// (0x0002e7f8) list_single_pane_g2_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002f8d1) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002f8d1) list_single_pane_g

0xedb3,	// (0x0002f0b6) list_single_pane_t1_ParamLimits

0xedb3,	// (0x0002f0b6) list_single_pane_t1

0xe4e9,	// (0x0002e7ec) list_single_number_pane_g1_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_number_pane_g1

0xe4f5,	// (0x0002e7f8) list_single_number_pane_g2_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002f8d1) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002f8d1) list_single_number_pane_g

0xed5d,	// (0x0002f060) list_single_number_pane_t1_ParamLimits

0xed5d,	// (0x0002f060) list_single_number_pane_t1

0xed73,	// (0x0002f076) list_single_number_pane_t2_ParamLimits

0xed73,	// (0x0002f076) list_single_number_pane_t2

0x0001,

0xf965,	// (0x0002fc68) list_single_number_pane_t_ParamLimits

0xf965,	// (0x0002fc68) list_single_number_pane_t

0xe4dd,	// (0x0002e7e0) list_single_graphic_pane_g1_ParamLimits

0xe4dd,	// (0x0002e7e0) list_single_graphic_pane_g1

0xe4e9,	// (0x0002e7ec) list_single_graphic_pane_g2_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_graphic_pane_g2

0xe4f5,	// (0x0002e7f8) list_single_graphic_pane_g3_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0002f8ca) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0002f8ca) list_single_graphic_pane_g

0xe501,	// (0x0002e804) list_single_graphic_pane_t1_ParamLimits

0xe501,	// (0x0002e804) list_single_graphic_pane_t1

0xe4e9,	// (0x0002e7ec) list_single_heading_pane_g1_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_heading_pane_g1

0xe4f5,	// (0x0002e7f8) list_single_heading_pane_g2_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f8d1) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f8d1) list_single_heading_pane_g

0xe517,	// (0x0002e81a) list_single_heading_pane_t1_ParamLimits

0xe517,	// (0x0002e81a) list_single_heading_pane_t1

0xe52d,	// (0x0002e830) list_single_heading_pane_t2_ParamLimits

0xe52d,	// (0x0002e830) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0002f8d6) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0002f8d6) list_single_heading_pane_t

0xe4e9,	// (0x0002e7ec) list_single_number_heading_pane_g1_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_number_heading_pane_g1

0xe4f5,	// (0x0002e7f8) list_single_number_heading_pane_g2_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002f8d1) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002f8d1) list_single_number_heading_pane_g

0xe517,	// (0x0002e81a) list_single_number_heading_pane_t1_ParamLimits

0xe517,	// (0x0002e81a) list_single_number_heading_pane_t1

0xe53f,	// (0x0002e842) list_single_number_heading_pane_t2_ParamLimits

0xe53f,	// (0x0002e842) list_single_number_heading_pane_t2

0xe551,	// (0x0002e854) list_single_number_heading_pane_t3_ParamLimits

0xe551,	// (0x0002e854) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x0002f8db) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x0002f8db) list_single_number_heading_pane_t

0xe563,	// (0x0002e866) list_single_graphic_heading_pane_g1_ParamLimits

0xe563,	// (0x0002e866) list_single_graphic_heading_pane_g1

0xe56f,	// (0x0002e872) list_single_graphic_heading_pane_g4_ParamLimits

0xe56f,	// (0x0002e872) list_single_graphic_heading_pane_g4

0xe4f5,	// (0x0002e7f8) list_single_graphic_heading_pane_g5_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x0002f8e2) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x0002f8e2) list_single_graphic_heading_pane_g

0xe517,	// (0x0002e81a) list_single_graphic_heading_pane_t1_ParamLimits

0xe517,	// (0x0002e81a) list_single_graphic_heading_pane_t1

0xe580,	// (0x0002e883) list_single_graphic_heading_pane_t2_ParamLimits

0xe580,	// (0x0002e883) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x0002f8e9) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x0002f8e9) list_single_graphic_heading_pane_t

0xe592,	// (0x0002e895) list_single_large_graphic_pane_g1_ParamLimits

0xe592,	// (0x0002e895) list_single_large_graphic_pane_g1

0xe59e,	// (0x0002e8a1) list_single_large_graphic_pane_g2_ParamLimits

0xe59e,	// (0x0002e8a1) list_single_large_graphic_pane_g2

0xe5aa,	// (0x0002e8ad) list_single_large_graphic_pane_g3_ParamLimits

0xe5aa,	// (0x0002e8ad) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002f8ee) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002f8ee) list_single_large_graphic_pane_g

0x3a23,	// (0x00023d26) wait_border_pane_g2_copy1

0xe5b6,	// (0x0002e8b9) list_single_large_graphic_pane_g4_cp2

0xe5be,	// (0x0002e8c1) list_single_large_graphic_pane_t1_ParamLimits

0xe5be,	// (0x0002e8c1) list_single_large_graphic_pane_t1

0xe5d4,	// (0x0002e8d7) list_double_pane_g1_ParamLimits

0xe5d4,	// (0x0002e8d7) list_double_pane_g1

0xe5e0,	// (0x0002e8e3) list_double_pane_g2_ParamLimits

0xe5e0,	// (0x0002e8e3) list_double_pane_g2

0x0001,

0xf5f2,	// (0x0002f8f5) list_double_pane_g_ParamLimits

0xf5f2,	// (0x0002f8f5) list_double_pane_g

0xe5ec,	// (0x0002e8ef) list_double_pane_t1_ParamLimits

0xe5ec,	// (0x0002e8ef) list_double_pane_t1

0xe602,	// (0x0002e905) list_double_pane_t2_ParamLimits

0xe602,	// (0x0002e905) list_double_pane_t2

0x0001,

0xf5f7,	// (0x0002f8fa) list_double_pane_t_ParamLimits

0xf5f7,	// (0x0002f8fa) list_double_pane_t

0xe614,	// (0x0002e917) list_double2_pane_g1_ParamLimits

0xe614,	// (0x0002e917) list_double2_pane_g1

0xe625,	// (0x0002e928) list_double2_pane_g2_ParamLimits

0xe625,	// (0x0002e928) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002f8ff) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002f8ff) list_double2_pane_g

0xe631,	// (0x0002e934) list_double2_pane_t1_ParamLimits

0xe631,	// (0x0002e934) list_double2_pane_t1

0xe647,	// (0x0002e94a) list_double2_pane_t2_ParamLimits

0xe647,	// (0x0002e94a) list_double2_pane_t2

0x0001,

0xf601,	// (0x0002f904) list_double2_pane_t_ParamLimits

0xf601,	// (0x0002f904) list_double2_pane_t

0xe5d4,	// (0x0002e8d7) list_double_number_pane_g1_ParamLimits

0xe5d4,	// (0x0002e8d7) list_double_number_pane_g1

0xe5e0,	// (0x0002e8e3) list_double_number_pane_g2_ParamLimits

0xe5e0,	// (0x0002e8e3) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x0002f8f5) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x0002f8f5) list_double_number_pane_g

0xe659,	// (0x0002e95c) list_double_number_pane_t1_ParamLimits

0xe659,	// (0x0002e95c) list_double_number_pane_t1

0xe66b,	// (0x0002e96e) list_double_number_pane_t2_ParamLimits

0xe66b,	// (0x0002e96e) list_double_number_pane_t2

0xe681,	// (0x0002e984) list_double_number_pane_t3_ParamLimits

0xe681,	// (0x0002e984) list_double_number_pane_t3

0x0002,

0xf606,	// (0x0002f909) list_double_number_pane_t_ParamLimits

0xf606,	// (0x0002f909) list_double_number_pane_t

0xe693,	// (0x0002e996) list_double_graphic_pane_g1_ParamLimits

0xe693,	// (0x0002e996) list_double_graphic_pane_g1

0xe69f,	// (0x0002e9a2) list_double_graphic_pane_g2_ParamLimits

0xe69f,	// (0x0002e9a2) list_double_graphic_pane_g2

0xe6ae,	// (0x0002e9b1) list_double_graphic_pane_g3_ParamLimits

0xe6ae,	// (0x0002e9b1) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002f910) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002f910) list_double_graphic_pane_g

0xe6c6,	// (0x0002e9c9) list_double_graphic_pane_t1_ParamLimits

0xe6c6,	// (0x0002e9c9) list_double_graphic_pane_t1

0xe6dc,	// (0x0002e9df) list_double_graphic_pane_t2_ParamLimits

0xe6dc,	// (0x0002e9df) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x0002f919) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x0002f919) list_double_graphic_pane_t

0xe6ee,	// (0x0002e9f1) list_double2_graphic_pane_g1_ParamLimits

0xe6ee,	// (0x0002e9f1) list_double2_graphic_pane_g1

0xe5d4,	// (0x0002e8d7) list_double2_graphic_pane_g2_ParamLimits

0xe5d4,	// (0x0002e8d7) list_double2_graphic_pane_g2

0xe5e0,	// (0x0002e8e3) list_double2_graphic_pane_g3_ParamLimits

0xe5e0,	// (0x0002e8e3) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002f91e) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002f91e) list_double2_graphic_pane_g

0xe6fa,	// (0x0002e9fd) list_double2_graphic_pane_t1_ParamLimits

0xe6fa,	// (0x0002e9fd) list_double2_graphic_pane_t1

0xe710,	// (0x0002ea13) list_double2_graphic_pane_t2_ParamLimits

0xe710,	// (0x0002ea13) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x0002f925) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x0002f925) list_double2_graphic_pane_t

0xe722,	// (0x0002ea25) list_double_large_graphic_pane_g1_ParamLimits

0xe722,	// (0x0002ea25) list_double_large_graphic_pane_g1

0xe74d,	// (0x0002ea50) list_double_large_graphic_pane_g2_ParamLimits

0xe74d,	// (0x0002ea50) list_double_large_graphic_pane_g2

0xe5e0,	// (0x0002e8e3) list_double_large_graphic_pane_g3_ParamLimits

0xe5e0,	// (0x0002e8e3) list_double_large_graphic_pane_g3

0xe75e,	// (0x0002ea61) list_double_large_graphic_pane_g4_ParamLimits

0xe75e,	// (0x0002ea61) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x0002f92a) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x0002f92a) list_double_large_graphic_pane_g

0xe786,	// (0x0002ea89) list_double_large_graphic_pane_t1_ParamLimits

0xe786,	// (0x0002ea89) list_double_large_graphic_pane_t1

0xe79f,	// (0x0002eaa2) list_double_large_graphic_pane_t2_ParamLimits

0xe79f,	// (0x0002eaa2) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x0002f935) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x0002f935) list_double_large_graphic_pane_t

0xe7b1,	// (0x0002eab4) list_double2_large_graphic_pane_g1_ParamLimits

0xe7b1,	// (0x0002eab4) list_double2_large_graphic_pane_g1

0xe614,	// (0x0002e917) list_double2_large_graphic_pane_g2_ParamLimits

0xe614,	// (0x0002e917) list_double2_large_graphic_pane_g2

0xe625,	// (0x0002e928) list_double2_large_graphic_pane_g3_ParamLimits

0xe625,	// (0x0002e928) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x0002f93a) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x0002f93a) list_double2_large_graphic_pane_g

0xe7bd,	// (0x0002eac0) list_double2_large_graphic_pane_t1_ParamLimits

0xe7bd,	// (0x0002eac0) list_double2_large_graphic_pane_t1

0xe7d3,	// (0x0002ead6) list_double2_large_graphic_pane_t2_ParamLimits

0xe7d3,	// (0x0002ead6) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002f941) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002f941) list_double2_large_graphic_pane_t

0xe7e5,	// (0x0002eae8) list_double_heading_pane_g1_ParamLimits

0xe7e5,	// (0x0002eae8) list_double_heading_pane_g1

0xe7f6,	// (0x0002eaf9) list_double_heading_pane_g2_ParamLimits

0xe7f6,	// (0x0002eaf9) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x0002f946) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x0002f946) list_double_heading_pane_g

0xe802,	// (0x0002eb05) list_double_heading_pane_t1_ParamLimits

0xe802,	// (0x0002eb05) list_double_heading_pane_t1

0xe647,	// (0x0002e94a) list_double_heading_pane_t2_ParamLimits

0xe647,	// (0x0002e94a) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x0002f94b) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x0002f94b) list_double_heading_pane_t

0xe6ee,	// (0x0002e9f1) list_double_graphic_heading_pane_g1_ParamLimits

0xe6ee,	// (0x0002e9f1) list_double_graphic_heading_pane_g1

0xe7e5,	// (0x0002eae8) list_double_graphic_heading_pane_g2_ParamLimits

0xe7e5,	// (0x0002eae8) list_double_graphic_heading_pane_g2

0xe7f6,	// (0x0002eaf9) list_double_graphic_heading_pane_g3_ParamLimits

0xe7f6,	// (0x0002eaf9) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x0002f950) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x0002f950) list_double_graphic_heading_pane_g

0xe818,	// (0x0002eb1b) list_double_graphic_heading_pane_t1_ParamLimits

0xe818,	// (0x0002eb1b) list_double_graphic_heading_pane_t1

0xe710,	// (0x0002ea13) list_double_graphic_heading_pane_t2_ParamLimits

0xe710,	// (0x0002ea13) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x0002f957) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x0002f957) list_double_graphic_heading_pane_t

0xe74d,	// (0x0002ea50) list_double_time_pane_g1_ParamLimits

0xe74d,	// (0x0002ea50) list_double_time_pane_g1

0xe5e0,	// (0x0002e8e3) list_double_time_pane_g2_ParamLimits

0xe5e0,	// (0x0002e8e3) list_double_time_pane_g2

0x0001,

0xf659,	// (0x0002f95c) list_double_time_pane_g_ParamLimits

0xf659,	// (0x0002f95c) list_double_time_pane_g

0xe82e,	// (0x0002eb31) list_double_time_pane_t1_ParamLimits

0xe82e,	// (0x0002eb31) list_double_time_pane_t1

0xe844,	// (0x0002eb47) list_double_time_pane_t2_ParamLimits

0xe844,	// (0x0002eb47) list_double_time_pane_t2

0xe856,	// (0x0002eb59) list_double_time_pane_t3_ParamLimits

0xe856,	// (0x0002eb59) list_double_time_pane_t3

0xe868,	// (0x0002eb6b) list_double_time_pane_t4_ParamLimits

0xe868,	// (0x0002eb6b) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x0002f961) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x0002f961) list_double_time_pane_t

0xe87a,	// (0x0002eb7d) list_setting_pane_g1_ParamLimits

0xe87a,	// (0x0002eb7d) list_setting_pane_g1

0xe7f6,	// (0x0002eaf9) list_setting_pane_g2_ParamLimits

0xe7f6,	// (0x0002eaf9) list_setting_pane_g2

0x0001,

0xf667,	// (0x0002f96a) list_setting_pane_g_ParamLimits

0xf667,	// (0x0002f96a) list_setting_pane_g

0xe886,	// (0x0002eb89) list_setting_pane_t1_ParamLimits

0xe886,	// (0x0002eb89) list_setting_pane_t1

0xe89d,	// (0x0002eba0) list_setting_pane_t2_ParamLimits

0xe89d,	// (0x0002eba0) list_setting_pane_t2

0x0002,

0xf66c,	// (0x0002f96f) list_setting_pane_t_ParamLimits

0xf66c,	// (0x0002f96f) list_setting_pane_t

0xe8da,	// (0x0002ebdd) set_value_pane_cp_ParamLimits

0xe8da,	// (0x0002ebdd) set_value_pane_cp

0xe8e6,	// (0x0002ebe9) list_setting_number_pane_g1_ParamLimits

0xe8e6,	// (0x0002ebe9) list_setting_number_pane_g1

0xe8f2,	// (0x0002ebf5) list_setting_number_pane_g2_ParamLimits

0xe8f2,	// (0x0002ebf5) list_setting_number_pane_g2

0x0001,

0xf673,	// (0x0002f976) list_setting_number_pane_g_ParamLimits

0xf673,	// (0x0002f976) list_setting_number_pane_g

0xe8fe,	// (0x0002ec01) list_setting_number_pane_t1_ParamLimits

0xe8fe,	// (0x0002ec01) list_setting_number_pane_t1

0xe912,	// (0x0002ec15) list_setting_number_pane_t2_ParamLimits

0xe912,	// (0x0002ec15) list_setting_number_pane_t2

0xe929,	// (0x0002ec2c) list_setting_number_pane_t3_ParamLimits

0xe929,	// (0x0002ec2c) list_setting_number_pane_t3

0x0003,

0xf678,	// (0x0002f97b) list_setting_number_pane_t_ParamLimits

0xf678,	// (0x0002f97b) list_setting_number_pane_t

0xe8da,	// (0x0002ebdd) set_value_pane_ParamLimits

0xe8da,	// (0x0002ebdd) set_value_pane

0x1f22,	// (0x00022225) bg_set_opt_pane_ParamLimits

0x1f22,	// (0x00022225) bg_set_opt_pane

0xe96c,	// (0x0002ec6f) set_value_pane_t1

0x1f43,	// (0x00022246) slider_set_pane_cp3

0x1f4c,	// (0x0002224f) volume_small_pane_cp

0x1f55,	// (0x00022258) list_form_gen_pane

0x1f5e,	// (0x00022261) scroll_pane_cp8

0xe982,	// (0x0002ec85) form_field_data_pane_ParamLimits

0xe982,	// (0x0002ec85) form_field_data_pane

0xe9a2,	// (0x0002eca5) form_field_data_wide_pane_ParamLimits

0xe9a2,	// (0x0002eca5) form_field_data_wide_pane

0xe9c3,	// (0x0002ecc6) form_field_popup_pane_ParamLimits

0xe9c3,	// (0x0002ecc6) form_field_popup_pane

0xe9e1,	// (0x0002ece4) form_field_popup_wide_pane_ParamLimits

0xe9e1,	// (0x0002ece4) form_field_popup_wide_pane

0xe9fe,	// (0x0002ed01) form_field_slider_pane_ParamLimits

0xe9fe,	// (0x0002ed01) form_field_slider_pane

0xea11,	// (0x0002ed14) form_field_slider_wide_pane_ParamLimits

0xea11,	// (0x0002ed14) form_field_slider_wide_pane

0x1f87,	// (0x0002228a) data_form_pane

0xea2e,	// (0x0002ed31) form_field_data_pane_t1

0x1f93,	// (0x00022296) input_focus_pane

0xea48,	// (0x0002ed4b) data_form_wide_pane

0xea65,	// (0x0002ed68) form_field_data_wide_pane_t1

0x1cec,	// (0x00021fef) input_focus_pane_cp6

0xea87,	// (0x0002ed8a) form_field_popup_pane_t1

0x1f93,	// (0x00022296) input_focus_pane_cp7

0x1fb5,	// (0x000222b8) list_form_pane

0xeaa9,	// (0x0002edac) form_field_popup_wide_pane_t1

0x1f93,	// (0x00022296) input_focus_pane_cp8

0x1fc1,	// (0x000222c4) list_form_wide_pane

0xeac6,	// (0x0002edc9) form_field_slider_pane_t1_ParamLimits

0xeac6,	// (0x0002edc9) form_field_slider_pane_t1

0xeada,	// (0x0002eddd) form_field_slider_pane_t2_ParamLimits

0xeada,	// (0x0002eddd) form_field_slider_pane_t2

0x0001,

0xf688,	// (0x0002f98b) form_field_slider_pane_t_ParamLimits

0xf688,	// (0x0002f98b) form_field_slider_pane_t

0x199f,	// (0x00021ca2) input_focus_pane_cp9_ParamLimits

0x199f,	// (0x00021ca2) input_focus_pane_cp9

0xeaec,	// (0x0002edef) slider_cont_pane_ParamLimits

0xeaec,	// (0x0002edef) slider_cont_pane

0x1fd0,	// (0x000222d3) form_field_slider_wide_pane_t1_ParamLimits

0x1fd0,	// (0x000222d3) form_field_slider_wide_pane_t1

0xeb00,	// (0x0002ee03) form_field_slider_wide_pane_t2_ParamLimits

0xeb00,	// (0x0002ee03) form_field_slider_wide_pane_t2

0x0001,

0xf68d,	// (0x0002f990) form_field_slider_wide_pane_t_ParamLimits

0xf68d,	// (0x0002f990) form_field_slider_wide_pane_t

0x199f,	// (0x00021ca2) input_focus_pane_cp10_ParamLimits

0x199f,	// (0x00021ca2) input_focus_pane_cp10

0xeb12,	// (0x0002ee15) slider_cont_pane_cp1_ParamLimits

0xeb12,	// (0x0002ee15) slider_cont_pane_cp1

0xeb26,	// (0x0002ee29) slider_form_pane_cp

0x1fe2,	// (0x000222e5) input_focus_pane_g1

0x1fea,	// (0x000222ed) input_focus_pane_g2

0x1ff2,	// (0x000222f5) input_focus_pane_g3

0x1ffa,	// (0x000222fd) input_focus_pane_g4

0x2002,	// (0x00022305) input_focus_pane_g5

0x200a,	// (0x0002230d) input_focus_pane_g6

0x2012,	// (0x00022315) input_focus_pane_g7

0x201a,	// (0x0002231d) input_focus_pane_g8

0x2022,	// (0x00022325) input_focus_pane_g9

0x163a,	// (0x0002193d) input_focus_pane_g10

0x0009,

0xf692,	// (0x0002f995) input_focus_pane_g

0x3a2c,	// (0x00023d2f) wait_border_pane_g3_copy1

0xeb2e,	// (0x0002ee31) data_form_pane_t1

0x163a,	// (0x0002193d) wait_anim_pane_g1_copy1

0xed85,	// (0x0002f088) data_form_wide_pane_t1

0xeb49,	// (0x0002ee4c) list_form_graphic_pane_cp_ParamLimits

0xeb49,	// (0x0002ee4c) list_form_graphic_pane_cp

0x495f,	// (0x00024c62) slider_form_pane_g1

0x4968,	// (0x00024c6b) slider_form_pane_g2

0x0006,

0xf995,	// (0x0002fc98) slider_form_pane_g

0xeb49,	// (0x0002ee4c) list_form_graphic_pane_ParamLimits

0xeb49,	// (0x0002ee4c) list_form_graphic_pane

0xeb60,	// (0x0002ee63) list_form_graphic_pane_g1

0xeb68,	// (0x0002ee6b) list_form_graphic_pane_t1_ParamLimits

0xeb68,	// (0x0002ee6b) list_form_graphic_pane_t1

0x1724,	// (0x00021a27) list_highlight_pane_cp5_ParamLimits

0x1724,	// (0x00021a27) list_highlight_pane_cp5

0xeb7d,	// (0x0002ee80) find_pane_g1

0x202a,	// (0x0002232d) input_find_pane

0xeb86,	// (0x0002ee89) input_find_pane_g1_ParamLimits

0xeb86,	// (0x0002ee89) input_find_pane_g1

0xeb92,	// (0x0002ee95) input_find_pane_t1_ParamLimits

0xeb92,	// (0x0002ee95) input_find_pane_t1

0xeba7,	// (0x0002eeaa) input_find_pane_t2_ParamLimits

0xeba7,	// (0x0002eeaa) input_find_pane_t2

0x0001,

0xf6a7,	// (0x0002f9aa) input_find_pane_t_ParamLimits

0xf6a7,	// (0x0002f9aa) input_find_pane_t

0x2033,	// (0x00022336) input_focus_pane_cp5_ParamLimits

0x2033,	// (0x00022336) input_focus_pane_cp5

0x204d,	// (0x00022350) bg_popup_window_pane_cp2_ParamLimits

0x204d,	// (0x00022350) bg_popup_window_pane_cp2

0x205a,	// (0x0002235d) listscroll_menu_pane_ParamLimits

0x205a,	// (0x0002235d) listscroll_menu_pane

0x2066,	// (0x00022369) popup_submenu_window_ParamLimits

0x2066,	// (0x00022369) popup_submenu_window

0x208e,	// (0x00022391) find_popup_pane_g1

0x2096,	// (0x00022399) input_popup_find_pane_cp

0x2033,	// (0x00022336) input_focus_pane_cp4_ParamLimits

0x2033,	// (0x00022336) input_focus_pane_cp4

0x20ae,	// (0x000223b1) input_popup_find_pane_t1_ParamLimits

0x20ae,	// (0x000223b1) input_popup_find_pane_t1

0x1644,	// (0x00021947) bg_popup_sub_pane_cp

0x20dc,	// (0x000223df) listscroll_popup_sub_pane

0x20e4,	// (0x000223e7) list_submenu_pane_ParamLimits

0x20e4,	// (0x000223e7) list_submenu_pane

0x20f5,	// (0x000223f8) scroll_pane_cp4

0x20fd,	// (0x00022400) list_single_popup_submenu_pane_ParamLimits

0x20fd,	// (0x00022400) list_single_popup_submenu_pane

0x2111,	// (0x00022414) list_single_popup_submenu_pane_g1

0x2119,	// (0x0002241c) list_single_popup_submenu_pane_t1_ParamLimits

0x2119,	// (0x0002241c) list_single_popup_submenu_pane_t1

0x1724,	// (0x00021a27) bg_active_tab_pane_cp1_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp1

0x212e,	// (0x00022431) tabs_2_active_pane_g1

0x2136,	// (0x00022439) tabs_2_active_pane_t1

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp1_ParamLimits

0x1724,	// (0x00021a27) bg_passive_tab_pane_cp1

0x212e,	// (0x00022431) tabs_2_passive_pane_g1

0x2136,	// (0x00022439) tabs_2_passive_pane_t1

0x2148,	// (0x0002244b) bg_active_tab_pane_cp4

0x2156,	// (0x00022459) tabs_2_long_active_pane_t1

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp4

0xc6aa,	// (0x0002c9ad) list_single_midp_graphic_pane_g4_ParamLimits

0x2148,	// (0x0002244b) bg_active_tab_pane_cp5

0x2175,	// (0x00022478) tabs_3_long_active_pane_t1

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp5

0xc6aa,	// (0x0002c9ad) list_single_midp_graphic_pane_g4

0x1724,	// (0x00021a27) bg_popup_window_pane_cp13_ParamLimits

0x1724,	// (0x00021a27) bg_popup_window_pane_cp13

0x2190,	// (0x00022493) listscroll_popup_fast_pane_ParamLimits

0x2190,	// (0x00022493) listscroll_popup_fast_pane

0x219c,	// (0x0002249f) grid_popup_fast_pane_ParamLimits

0x219c,	// (0x0002249f) grid_popup_fast_pane

0x21ae,	// (0x000224b1) scroll_pane_cp9_ParamLimits

0x21ae,	// (0x000224b1) scroll_pane_cp9

0x6257,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6257,	// (0x0002655a) list_single_graphic_hl_pane_t1_cp2

0x21d2,	// (0x000224d5) input_focus_pane_cp20_ParamLimits

0x21d2,	// (0x000224d5) input_focus_pane_cp20

0x21e0,	// (0x000224e3) query_popup_data_pane_t1_ParamLimits

0x21e0,	// (0x000224e3) query_popup_data_pane_t1

0x21f3,	// (0x000224f6) query_popup_data_pane_t2_ParamLimits

0x21f3,	// (0x000224f6) query_popup_data_pane_t2

0x2239,	// (0x0002253c) query_popup_data_pane_t3_ParamLimits

0x2239,	// (0x0002253c) query_popup_data_pane_t3

0x227a,	// (0x0002257d) query_popup_data_pane_t4_ParamLimits

0x227a,	// (0x0002257d) query_popup_data_pane_t4

0x22b6,	// (0x000225b9) query_popup_data_pane_t5_ParamLimits

0x22b6,	// (0x000225b9) query_popup_data_pane_t5

0x0004,

0xf6ac,	// (0x0002f9af) query_popup_data_pane_t_ParamLimits

0xf6ac,	// (0x0002f9af) query_popup_data_pane_t

0x1fe2,	// (0x000222e5) bg_set_opt_pane_g1

0x1fea,	// (0x000222ed) bg_set_opt_pane_g2

0x1ff2,	// (0x000222f5) bg_set_opt_pane_g3

0x1ffa,	// (0x000222fd) bg_set_opt_pane_g4

0x2002,	// (0x00022305) bg_set_opt_pane_g5

0x200a,	// (0x0002230d) bg_set_opt_pane_g6

0x2012,	// (0x00022315) bg_set_opt_pane_g7

0x201a,	// (0x0002231d) bg_set_opt_pane_g8

0x2022,	// (0x00022325) bg_set_opt_pane_g9

0x0008,

0xf6b7,	// (0x0002f9ba) bg_set_opt_pane_g

0xbd62,	// (0x0002c065) control_top_pane_stacon_ParamLimits

0xbd62,	// (0x0002c065) control_top_pane_stacon

0xbdb5,	// (0x0002c0b8) signal_pane_stacon_ParamLimits

0xbdb5,	// (0x0002c0b8) signal_pane_stacon

0x2876,	// (0x00022b79) stacon_top_pane_g1_ParamLimits

0x2876,	// (0x00022b79) stacon_top_pane_g1

0xbdda,	// (0x0002c0dd) title_pane_stacon_ParamLimits

0xbdda,	// (0x0002c0dd) title_pane_stacon

0xbe04,	// (0x0002c107) uni_indicator_pane_stacon_ParamLimits

0xbe04,	// (0x0002c107) uni_indicator_pane_stacon

0xbe19,	// (0x0002c11c) battery_pane_stacon_ParamLimits

0xbe19,	// (0x0002c11c) battery_pane_stacon

0xbe5d,	// (0x0002c160) control_bottom_pane_stacon_ParamLimits

0xbe5d,	// (0x0002c160) control_bottom_pane_stacon

0xbe80,	// (0x0002c183) navi_pane_stacon_ParamLimits

0xbe80,	// (0x0002c183) navi_pane_stacon

0x2898,	// (0x00022b9b) stacon_bottom_pane_g1_ParamLimits

0x2898,	// (0x00022b9b) stacon_bottom_pane_g1

0xbacc,	// (0x0002bdcf) aid_levels_signal_lsc_ParamLimits

0xbacc,	// (0x0002bdcf) aid_levels_signal_lsc

0xbae3,	// (0x0002bde6) signal_pane_stacon_g1_ParamLimits

0xbae3,	// (0x0002bde6) signal_pane_stacon_g1

0xbaf7,	// (0x0002bdfa) signal_pane_stacon_g2_ParamLimits

0xbaf7,	// (0x0002bdfa) signal_pane_stacon_g2

0x0001,

0xf6ca,	// (0x0002f9cd) signal_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002f9cd) signal_pane_stacon_g

0xbb2c,	// (0x0002be2f) title_pane_stacon_t1_ParamLimits

0xbb2c,	// (0x0002be2f) title_pane_stacon_t1

0x230e,	// (0x00022611) uni_indicator_pane_stacon_g1

0x2318,	// (0x0002261b) uni_indicator_pane_stacon_g2

0x22fa,	// (0x000225fd) uni_indicator_pane_stacon_g3

0x2304,	// (0x00022607) uni_indicator_pane_stacon_g4

0x0003,

0xf6d6,	// (0x0002f9d9) uni_indicator_pane_stacon_g

0xbb51,	// (0x0002be54) control_top_pane_stacon_g1

0xbb59,	// (0x0002be5c) control_top_pane_stacon_t1_ParamLimits

0xbb59,	// (0x0002be5c) control_top_pane_stacon_t1

0xbb90,	// (0x0002be93) aid_levels_battery_lsc_ParamLimits

0xbb90,	// (0x0002be93) aid_levels_battery_lsc

0xbba8,	// (0x0002beab) battery_pane_stacon_g1_ParamLimits

0xbba8,	// (0x0002beab) battery_pane_stacon_g1

0xbbbb,	// (0x0002bebe) battery_pane_stacon_g2_ParamLimits

0xbbbb,	// (0x0002bebe) battery_pane_stacon_g2

0x0001,

0xf6df,	// (0x0002f9e2) battery_pane_stacon_g_ParamLimits

0xf6df,	// (0x0002f9e2) battery_pane_stacon_g

0xbbf9,	// (0x0002befc) navi_icon_pane_stacon

0xbc0d,	// (0x0002bf10) navi_navi_pane_stacon

0xbbf9,	// (0x0002befc) navi_text_pane_stacon

0xbb51,	// (0x0002be54) control_bottom_pane_stacon_g1

0xbc21,	// (0x0002bf24) control_bottom_pane_stacon_t1_ParamLimits

0xbc21,	// (0x0002bf24) control_bottom_pane_stacon_t1

0x233c,	// (0x0002263f) grid_app_pane_ParamLimits

0x233c,	// (0x0002263f) grid_app_pane

0x235e,	// (0x00022661) scroll_pane_cp15_ParamLimits

0x235e,	// (0x00022661) scroll_pane_cp15

0x2373,	// (0x00022676) cell_app_pane_ParamLimits

0x2373,	// (0x00022676) cell_app_pane

0x2399,	// (0x0002269c) cell_app_pane_g1_ParamLimits

0x2399,	// (0x0002269c) cell_app_pane_g1

0x23b9,	// (0x000226bc) cell_app_pane_g2_ParamLimits

0x23b9,	// (0x000226bc) cell_app_pane_g2

0x0001,

0xf6e4,	// (0x0002f9e7) cell_app_pane_g_ParamLimits

0xf6e4,	// (0x0002f9e7) cell_app_pane_g

0x23c5,	// (0x000226c8) cell_app_pane_t1_ParamLimits

0x23c5,	// (0x000226c8) cell_app_pane_t1

0x23dc,	// (0x000226df) grid_highlight_pane_ParamLimits

0x23dc,	// (0x000226df) grid_highlight_pane

0x1fe2,	// (0x000222e5) cell_highlight_pane_g1

0x1fea,	// (0x000222ed) cell_highlight_pane_g2

0x1ff2,	// (0x000222f5) cell_highlight_pane_g3

0x1ffa,	// (0x000222fd) cell_highlight_pane_g4

0x2002,	// (0x00022305) cell_highlight_pane_g5

0x200a,	// (0x0002230d) cell_highlight_pane_g6

0x2012,	// (0x00022315) cell_highlight_pane_g7

0x201a,	// (0x0002231d) cell_highlight_pane_g8

0x2022,	// (0x00022325) cell_highlight_pane_g9

0x163a,	// (0x0002193d) cell_highlight_pane_g10

0x0009,

0xf692,	// (0x0002f995) cell_highlight_pane_g

0x23ed,	// (0x000226f0) bg_scroll_pane

0xbc6b,	// (0x0002bf6e) scroll_handle_pane

0x2434,	// (0x00022737) scroll_bg_pane_g1

0x2449,	// (0x0002274c) scroll_bg_pane_g2

0x2461,	// (0x00022764) scroll_bg_pane_g3

0x0002,

0xf6e9,	// (0x0002f9ec) scroll_bg_pane_g

0x2476,	// (0x00022779) scroll_handle_focus_pane_ParamLimits

0x2476,	// (0x00022779) scroll_handle_focus_pane

0x2434,	// (0x00022737) scroll_handle_pane_g1

0x2483,	// (0x00022786) scroll_handle_pane_g2

0x2461,	// (0x00022764) scroll_handle_pane_g3

0x0002,

0xf6f0,	// (0x0002f9f3) scroll_handle_pane_g

0x2033,	// (0x00022336) bg_popup_sub_pane_cp21_ParamLimits

0x2033,	// (0x00022336) bg_popup_sub_pane_cp21

0x2497,	// (0x0002279a) popup_fep_japan_predictive_window_t1_ParamLimits

0x2497,	// (0x0002279a) popup_fep_japan_predictive_window_t1

0x24b1,	// (0x000227b4) popup_fep_japan_predictive_window_t2_ParamLimits

0x24b1,	// (0x000227b4) popup_fep_japan_predictive_window_t2

0x24e4,	// (0x000227e7) popup_fep_japan_predictive_window_t3_ParamLimits

0x24e4,	// (0x000227e7) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f7,	// (0x0002f9fa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f7,	// (0x0002f9fa) popup_fep_japan_predictive_window_t

0x1644,	// (0x00021947) bg_popup_sub_pane_cp23

0x251b,	// (0x0002281e) listscroll_japin_cand_pane

0x2523,	// (0x00022826) popup_fep_japan_candidate_window_t1

0x2531,	// (0x00022834) candidate_pane_ParamLimits

0x2531,	// (0x00022834) candidate_pane

0x2543,	// (0x00022846) scroll_pane_cp30

0x254b,	// (0x0002284e) list_single_popup_jap_candidate_pane_ParamLimits

0x254b,	// (0x0002284e) list_single_popup_jap_candidate_pane

0x1644,	// (0x00021947) list_highlight_pane_cp30

0x255f,	// (0x00022862) list_single_popup_jap_candidate_pane_t1

0x256e,	// (0x00022871) level_1_signal

0x257b,	// (0x0002287e) level_2_signal

0x2588,	// (0x0002288b) level_3_signal

0x2595,	// (0x00022898) level_4_signal

0x25a2,	// (0x000228a5) level_5_signal

0x25af,	// (0x000228b2) level_6_signal

0x25bc,	// (0x000228bf) level_7_signal

0x256e,	// (0x00022871) level_1_battery

0x257b,	// (0x0002287e) level_2_battery

0x2588,	// (0x0002288b) level_3_battery

0x2595,	// (0x00022898) level_4_battery

0x25a2,	// (0x000228a5) level_5_battery

0x25af,	// (0x000228b2) level_6_battery

0x25bc,	// (0x000228bf) level_7_battery

0x25e1,	// (0x000228e4) list_menu_pane_ParamLimits

0x25e1,	// (0x000228e4) list_menu_pane

0x25f7,	// (0x000228fa) scroll_pane_cp25_ParamLimits

0x25f7,	// (0x000228fa) scroll_pane_cp25

0x2610,	// (0x00022913) list_double2_graphic_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double2_graphic_pane_cp2

0x2610,	// (0x00022913) list_double2_large_graphic_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double2_large_graphic_pane_cp2

0x2610,	// (0x00022913) list_double2_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double2_pane_cp2

0x2610,	// (0x00022913) list_double_graphic_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double_graphic_pane_cp2

0x2610,	// (0x00022913) list_double_large_graphic_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double_large_graphic_pane_cp2

0x2610,	// (0x00022913) list_double_number_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double_number_pane_cp2

0x2610,	// (0x00022913) list_double_pane_cp2_ParamLimits

0x2610,	// (0x00022913) list_double_pane_cp2

0x2634,	// (0x00022937) list_single_2graphic_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_2graphic_pane_cp2

0x2634,	// (0x00022937) list_single_graphic_heading_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_graphic_heading_pane_cp2

0x2634,	// (0x00022937) list_single_graphic_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_graphic_pane_cp2

0x2634,	// (0x00022937) list_single_heading_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_heading_pane_cp2

0x264a,	// (0x0002294d) list_single_large_graphic_pane_cp2_ParamLimits

0x264a,	// (0x0002294d) list_single_large_graphic_pane_cp2

0x2634,	// (0x00022937) list_single_number_heading_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_number_heading_pane_cp2

0x2634,	// (0x00022937) list_single_number_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_number_pane_cp2

0x2634,	// (0x00022937) list_single_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_pane_cp2

0x26c5,	// (0x000229c8) bg_popup_sub_pane_cp22

0xbd1a,	// (0x0002c01d) popup_side_volume_key_window_g1

0xbd3e,	// (0x0002c041) popup_side_volume_key_window_t1

0xbd5a,	// (0x0002c05d) volume_small_pane_cp1

0x199f,	// (0x00021ca2) bg_popup_sub_pane_cp24_ParamLimits

0x199f,	// (0x00021ca2) bg_popup_sub_pane_cp24

0x26db,	// (0x000229de) fep_china_uni_candidate_pane_ParamLimits

0x26db,	// (0x000229de) fep_china_uni_candidate_pane

0x26ef,	// (0x000229f2) fep_china_uni_entry_pane

0x26ff,	// (0x00022a02) popup_fep_china_uni_window_g1

0x271b,	// (0x00022a1e) fep_china_uni_entry_pane_g1

0x2723,	// (0x00022a26) fep_china_uni_entry_pane_g2

0x0001,

0xf728,	// (0x0002fa2b) fep_china_uni_entry_pane_g

0x272b,	// (0x00022a2e) fep_entry_item_pane

0x2735,	// (0x00022a38) fep_candidate_item_pane

0x273d,	// (0x00022a40) fep_china_uni_candidate_pane_g1

0x2745,	// (0x00022a48) fep_china_uni_candidate_pane_g2

0x274d,	// (0x00022a50) fep_china_uni_candidate_pane_g3

0x2755,	// (0x00022a58) fep_china_uni_candidate_pane_g4

0x0003,

0xf72d,	// (0x0002fa30) fep_china_uni_candidate_pane_g

0x163a,	// (0x0002193d) fep_entry_item_pane_g1

0x275d,	// (0x00022a60) fep_entry_item_pane_t1_ParamLimits

0x275d,	// (0x00022a60) fep_entry_item_pane_t1

0x2773,	// (0x00022a76) fep_candidate_item_pane_t1_ParamLimits

0x2773,	// (0x00022a76) fep_candidate_item_pane_t1

0x2788,	// (0x00022a8b) fep_candidate_item_pane_t2_ParamLimits

0x2788,	// (0x00022a8b) fep_candidate_item_pane_t2

0x0001,

0xf736,	// (0x0002fa39) fep_candidate_item_pane_t_ParamLimits

0xf736,	// (0x0002fa39) fep_candidate_item_pane_t

0x1724,	// (0x00021a27) list_highlight_pane_cp31_ParamLimits

0x1724,	// (0x00021a27) list_highlight_pane_cp31

0x279a,	// (0x00022a9d) level_1_signal_lsc

0x27a3,	// (0x00022aa6) level_2_signal_lsc

0x27ac,	// (0x00022aaf) level_3_signal_lsc

0x27b5,	// (0x00022ab8) level_4_signal_lsc

0x27be,	// (0x00022ac1) level_5_signal_lsc

0x27c7,	// (0x00022aca) level_6_signal_lsc

0x27d0,	// (0x00022ad3) level_7_signal_lsc

0x27d0,	// (0x00022ad3) level_1_battery_lsc

0x27d9,	// (0x00022adc) level_2_battery_lsc

0x27e2,	// (0x00022ae5) level_3_battery_lsc

0x27eb,	// (0x00022aee) level_4_battery_lsc

0x27f4,	// (0x00022af7) level_5_battery_lsc

0x27fd,	// (0x00022b00) level_6_battery_lsc

0x279a,	// (0x00022a9d) level_7_battery_lsc

0x2806,	// (0x00022b09) scroll_handle_focus_pane_g1

0x280f,	// (0x00022b12) scroll_handle_focus_pane_g2

0x2818,	// (0x00022b1b) scroll_handle_focus_pane_g3

0x0002,

0xf73b,	// (0x0002fa3e) scroll_handle_focus_pane_g

0xebbc,	// (0x0002eebf) list_single_2graphic_pane_g1_ParamLimits

0xebbc,	// (0x0002eebf) list_single_2graphic_pane_g1

0xe56f,	// (0x0002e872) list_single_2graphic_pane_g2_ParamLimits

0xe56f,	// (0x0002e872) list_single_2graphic_pane_g2

0xe4f5,	// (0x0002e7f8) list_single_2graphic_pane_g3_ParamLimits

0xe4f5,	// (0x0002e7f8) list_single_2graphic_pane_g3

0xebc8,	// (0x0002eecb) list_single_2graphic_pane_g4_ParamLimits

0xebc8,	// (0x0002eecb) list_single_2graphic_pane_g4

0x0003,

0xf742,	// (0x0002fa45) list_single_2graphic_pane_g_ParamLimits

0xf742,	// (0x0002fa45) list_single_2graphic_pane_g

0xebd4,	// (0x0002eed7) list_single_2graphic_pane_t1_ParamLimits

0xebd4,	// (0x0002eed7) list_single_2graphic_pane_t1

0xec02,	// (0x0002ef05) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xec02,	// (0x0002ef05) list_double2_graphic_large_graphic_pane_g1

0xe614,	// (0x0002e917) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xe614,	// (0x0002e917) list_double2_graphic_large_graphic_pane_g2

0xe625,	// (0x0002e928) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xe625,	// (0x0002e928) list_double2_graphic_large_graphic_pane_g3

0xec14,	// (0x0002ef17) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xec14,	// (0x0002ef17) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf74b,	// (0x0002fa4e) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf74b,	// (0x0002fa4e) list_double2_graphic_large_graphic_pane_g

0xec20,	// (0x0002ef23) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xec20,	// (0x0002ef23) list_double2_graphic_large_graphic_pane_t1

0xec36,	// (0x0002ef39) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xec36,	// (0x0002ef39) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf754,	// (0x0002fa57) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf754,	// (0x0002fa57) list_double2_graphic_large_graphic_pane_t

0x2961,	// (0x00022c64) popup_fast_swap_window_ParamLimits

0x2961,	// (0x00022c64) popup_fast_swap_window

0x297d,	// (0x00022c80) popup_side_volume_key_window

0x2997,	// (0x00022c9a) stacon_top_pane

0x29a1,	// (0x00022ca4) status_pane_ParamLimits

0x29a1,	// (0x00022ca4) status_pane

0x2997,	// (0x00022c9a) status_small_pane

0x1644,	// (0x00021947) control_pane

0x1644,	// (0x00021947) stacon_bottom_pane

0x1f5e,	// (0x00022261) scroll_pane_cp121

0x1f55,	// (0x00022258) set_content_pane

0x2833,	// (0x00022b36) bg_active_tab_pane_g1_cp1

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp1

0x2821,	// (0x00022b24) bg_active_tab_pane_g3_cp1

0x2833,	// (0x00022b36) bg_passive_tab_pane_g1_cp1

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1

0x2821,	// (0x00022b24) bg_passive_tab_pane_g3_cp1

0x2845,	// (0x00022b48) bg_active_tab_pane_g1_cp2

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp2

0x283c,	// (0x00022b3f) bg_active_tab_pane_g3_cp2

0x2845,	// (0x00022b48) bg_passive_tab_pane_g1_cp2

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2

0x283c,	// (0x00022b3f) bg_passive_tab_pane_g3_cp2

0x2857,	// (0x00022b5a) bg_active_tab_pane_g1_cp3

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp3

0x284e,	// (0x00022b51) bg_active_tab_pane_g3_cp3

0x2857,	// (0x00022b5a) bg_passive_tab_pane_g1_cp3

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3

0x284e,	// (0x00022b51) bg_passive_tab_pane_g3_cp3

0x286b,	// (0x00022b6e) bg_active_tab_pane_g1_cp4

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp4

0x2860,	// (0x00022b63) bg_active_tab_pane_g3_cp4

0x286b,	// (0x00022b6e) bg_passive_tab_pane_g1_cp4

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4

0x2860,	// (0x00022b63) bg_passive_tab_pane_g3_cp4

0x28bd,	// (0x00022bc0) bg_active_tab_pane_g1_cp5

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp5

0x28b4,	// (0x00022bb7) bg_active_tab_pane_g3_cp5

0x28bd,	// (0x00022bc0) bg_passive_tab_pane_g1_cp5

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5

0x28b4,	// (0x00022bb7) bg_passive_tab_pane_g3_cp5

0x28c6,	// (0x00022bc9) list_set_graphic_pane_ParamLimits

0x28c6,	// (0x00022bc9) list_set_graphic_pane

0x1644,	// (0x00021947) bg_set_opt_pane_cp4

0x28e6,	// (0x00022be9) list_set_graphic_pane_g1_ParamLimits

0x28e6,	// (0x00022be9) list_set_graphic_pane_g1

0x28f2,	// (0x00022bf5) list_set_graphic_pane_g2_ParamLimits

0x28f2,	// (0x00022bf5) list_set_graphic_pane_g2

0x0001,

0xf759,	// (0x0002fa5c) list_set_graphic_pane_g_ParamLimits

0xf759,	// (0x0002fa5c) list_set_graphic_pane_g

0x0009,

0xfae8,	// (0x0002fdeb) volume_small_pane_cp_g

0x2914,	// (0x00022c17) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x2914,	// (0x00022c17) list_double2_large_graphic_pane_g1_cp2

0x2920,	// (0x00022c23) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x2920,	// (0x00022c23) list_double2_large_graphic_pane_g2_cp2

0x2931,	// (0x00022c34) list_double2_large_graphic_pane_g3_cp2

0x2939,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x2939,	// (0x00022c3c) list_double2_large_graphic_pane_t1_cp2

0x294f,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x294f,	// (0x00022c52) list_double2_large_graphic_pane_t2_cp2

0x4505,	// (0x00024808) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x4505,	// (0x00024808) list_double_large_graphic_pane_g1_cp2

0x4516,	// (0x00024819) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x4516,	// (0x00024819) list_double_large_graphic_pane_g2_cp2

0x2abd,	// (0x00022dc0) list_double_large_graphic_pane_g3_cp2

0x4527,	// (0x0002482a) list_double_large_graphic_pane_g4_cp

0x452f,	// (0x00024832) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x452f,	// (0x00024832) list_double_large_graphic_pane_t1_cp2

0x4546,	// (0x00024849) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x4546,	// (0x00024849) list_double_large_graphic_pane_t2_cp2

0x29af,	// (0x00022cb2) list_double2_graphic_pane_g1_cp2_ParamLimits

0x29af,	// (0x00022cb2) list_double2_graphic_pane_g1_cp2

0x29bd,	// (0x00022cc0) list_double2_graphic_pane_g2_cp2_ParamLimits

0x29bd,	// (0x00022cc0) list_double2_graphic_pane_g2_cp2

0x29ce,	// (0x00022cd1) list_double2_graphic_pane_g3_cp2

0x29d8,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2_ParamLimits

0x29d8,	// (0x00022cdb) list_double2_graphic_pane_t1_cp2

0x29ee,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2_ParamLimits

0x29ee,	// (0x00022cf1) list_double2_graphic_pane_t2_cp2

0x2a00,	// (0x00022d03) list_single_number_heading_pane_g1_cp2_ParamLimits

0x2a00,	// (0x00022d03) list_single_number_heading_pane_g1_cp2

0x2a0c,	// (0x00022d0f) list_single_number_heading_pane_g2_cp2

0x2a14,	// (0x00022d17) list_single_number_heading_pane_t1_cp2_ParamLimits

0x2a14,	// (0x00022d17) list_single_number_heading_pane_t1_cp2

0x2a2a,	// (0x00022d2d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x2a2a,	// (0x00022d2d) list_single_number_heading_pane_t2_cp2

0x2a3c,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x2a3c,	// (0x00022d3f) list_single_number_heading_pane_t3_cp2

0x2a00,	// (0x00022d03) list_single_heading_pane_g1_cp2_ParamLimits

0x2a00,	// (0x00022d03) list_single_heading_pane_g1_cp2

0x2a0c,	// (0x00022d0f) list_single_heading_pane_g2_cp2

0x2a14,	// (0x00022d17) list_single_heading_pane_t1_cp2_ParamLimits

0x2a14,	// (0x00022d17) list_single_heading_pane_t1_cp2

0x430f,	// (0x00024612) list_single_heading_pane_t2_cp2_ParamLimits

0x430f,	// (0x00024612) list_single_heading_pane_t2_cp2

0x4257,	// (0x0002455a) list_double_graphic_pane_g1_cp2_ParamLimits

0x4257,	// (0x0002455a) list_double_graphic_pane_g1_cp2

0x4263,	// (0x00024566) list_double_graphic_pane_g2_cp2_ParamLimits

0x4263,	// (0x00024566) list_double_graphic_pane_g2_cp2

0x4272,	// (0x00024575) list_double_graphic_pane_g3_cp2

0x427a,	// (0x0002457d) list_double_graphic_pane_t1_cp2_ParamLimits

0x427a,	// (0x0002457d) list_double_graphic_pane_t1_cp2

0x4290,	// (0x00024593) list_double_graphic_pane_t2_cp2_ParamLimits

0x4290,	// (0x00024593) list_double_graphic_pane_t2_cp2

0x2ab1,	// (0x00022db4) list_double_number_pane_g1_cp2_ParamLimits

0x2ab1,	// (0x00022db4) list_double_number_pane_g1_cp2

0x2abd,	// (0x00022dc0) list_double_number_pane_g2_cp2

0x421b,	// (0x0002451e) list_double_number_pane_t1_cp2_ParamLimits

0x421b,	// (0x0002451e) list_double_number_pane_t1_cp2

0x422f,	// (0x00024532) list_double_number_pane_t2_cp2_ParamLimits

0x422f,	// (0x00024532) list_double_number_pane_t2_cp2

0x4245,	// (0x00024548) list_double_number_pane_t3_cp2_ParamLimits

0x4245,	// (0x00024548) list_double_number_pane_t3_cp2

0x4104,	// (0x00024407) list_single_graphic_pane_g1_cp2_ParamLimits

0x4104,	// (0x00024407) list_single_graphic_pane_g1_cp2

0x1f7b,	// (0x0002227e) list_single_graphic_pane_g2_cp2_ParamLimits

0x1f7b,	// (0x0002227e) list_single_graphic_pane_g2_cp2

0x2b15,	// (0x00022e18) list_single_graphic_pane_g3_cp2

0x40da,	// (0x000243dd) list_single_graphic_pane_t1_cp2_ParamLimits

0x40da,	// (0x000243dd) list_single_graphic_pane_t1_cp2

0x1f7b,	// (0x0002227e) list_single_number_pane_g1_cp2_ParamLimits

0x1f7b,	// (0x0002227e) list_single_number_pane_g1_cp2

0x2b15,	// (0x00022e18) list_single_number_pane_g2_cp2

0x40da,	// (0x000243dd) list_single_number_pane_t1_cp2_ParamLimits

0x40da,	// (0x000243dd) list_single_number_pane_t1_cp2

0x40f0,	// (0x000243f3) list_single_number_pane_t2_cp2_ParamLimits

0x40f0,	// (0x000243f3) list_single_number_pane_t2_cp2

0x2920,	// (0x00022c23) list_double2_pane_g1_cp2_ParamLimits

0x2920,	// (0x00022c23) list_double2_pane_g1_cp2

0x2931,	// (0x00022c34) list_double2_pane_g2_cp2

0x2a89,	// (0x00022d8c) list_double2_pane_t1_cp2_ParamLimits

0x2a89,	// (0x00022d8c) list_double2_pane_t1_cp2

0x2a9f,	// (0x00022da2) list_double2_pane_t2_cp2_ParamLimits

0x2a9f,	// (0x00022da2) list_double2_pane_t2_cp2

0x2ab1,	// (0x00022db4) list_double_pane_g1_cp2_ParamLimits

0x2ab1,	// (0x00022db4) list_double_pane_g1_cp2

0x2abd,	// (0x00022dc0) list_double_pane_g2_cp2

0x2ac5,	// (0x00022dc8) list_double_pane_t1_cp2_ParamLimits

0x2ac5,	// (0x00022dc8) list_double_pane_t1_cp2

0x2adb,	// (0x00022dde) list_double_pane_t2_cp2_ParamLimits

0x2adb,	// (0x00022dde) list_double_pane_t2_cp2

0x2b05,	// (0x00022e08) list_single_pane_cp2_g3

0x1f7b,	// (0x0002227e) list_single_pane_g1_cp2_ParamLimits

0x1f7b,	// (0x0002227e) list_single_pane_g1_cp2

0x2b15,	// (0x00022e18) list_single_pane_g2_cp2

0x2b1d,	// (0x00022e20) list_single_pane_t1_cp2_ParamLimits

0x2b1d,	// (0x00022e20) list_single_pane_t1_cp2

0x2b35,	// (0x00022e38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x2b35,	// (0x00022e38) list_single_large_graphic_pane_g1_cp2

0x2b41,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x2b41,	// (0x00022e44) list_single_large_graphic_pane_g2_cp2

0x2b4d,	// (0x00022e50) list_single_large_graphic_pane_g3_cp2

0x2b55,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2b55,	// (0x00022e58) list_single_large_graphic_pane_g4_cp1

0x2b6f,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2b6f,	// (0x00022e72) list_single_large_graphic_pane_t1_cp2

0x40a6,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x40a6,	// (0x000243a9) list_single_graphic_heading_pane_g1_cp2

0x4073,	// (0x00024376) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4073,	// (0x00024376) list_single_graphic_heading_pane_g4_cp2

0x2b15,	// (0x00022e18) list_single_graphic_heading_pane_g5_cp2

0x40b2,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x40b2,	// (0x000243b5) list_single_graphic_heading_pane_t1_cp2

0x40c8,	// (0x000243cb) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x40c8,	// (0x000243cb) list_single_graphic_heading_pane_t2_cp2

0x4067,	// (0x0002436a) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4067,	// (0x0002436a) list_single_2graphic_pane_g1_cp2

0x4073,	// (0x00024376) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4073,	// (0x00024376) list_single_2graphic_pane_g2_cp2

0x2b15,	// (0x00022e18) list_single_2graphic_pane_g3_cp2

0x4084,	// (0x00024387) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4084,	// (0x00024387) list_single_2graphic_pane_g4_cp2

0x4090,	// (0x00024393) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4090,	// (0x00024393) list_single_2graphic_pane_t1_cp2

0x163a,	// (0x0002193d) list_highlight_pane_g10_cp1

0x3c3f,	// (0x00023f42) list_highlight_pane_g1_cp1

0x3c47,	// (0x00023f4a) list_highlight_pane_g2_cp1

0x3c4f,	// (0x00023f52) list_highlight_pane_g3_cp1

0x3c57,	// (0x00023f5a) list_highlight_pane_g4_cp1

0x3c5f,	// (0x00023f62) list_highlight_pane_g5_cp1

0x3c67,	// (0x00023f6a) list_highlight_pane_g6_cp1

0x3c6f,	// (0x00023f72) list_highlight_pane_g7_cp1

0x3c77,	// (0x00023f7a) list_highlight_pane_g8_cp1

0x3c7f,	// (0x00023f82) list_highlight_pane_g9_cp1

0x3b57,	// (0x00023e5a) form_field_slider_pane_t3

0x3b65,	// (0x00023e68) form_field_slider_pane_t4

0x3b73,	// (0x00023e76) slider_form_pane_ParamLimits

0x3b73,	// (0x00023e76) slider_form_pane

0x1644,	// (0x00021947) control_abbreviations

0x1644,	// (0x00021947) control_conventions

0x1644,	// (0x00021947) control_definitions

0x1644,	// (0x00021947) format_table_attribute

0x4359,	// (0x0002465c) bg_popup_preview_window_pane_g9

0x1644,	// (0x00021947) format_table_data2

0x1644,	// (0x00021947) format_table_data3

0x1644,	// (0x00021947) format_table_data_example

0x0008,

0x1644,	// (0x00021947) intro_purpose

0xf8f5,	// (0x0002fbf8) bg_popup_preview_window_pane_g

0x1644,	// (0x00021947) texts_category

0x1644,	// (0x00021947) texts_graphics

0x2b85,	// (0x00022e88) text_digital

0x2b94,	// (0x00022e97) text_primary

0x2ba3,	// (0x00022ea6) text_primary_small

0x2bb2,	// (0x00022eb5) text_secondary

0x2bc1,	// (0x00022ec4) text_title

0x4a49,	// (0x00024d4c) bg_passive_tab_pane_g1_cp3_srt

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp3_srt

0x4a40,	// (0x00024d43) bg_passive_tab_pane_g3_cp3_srt

0x1724,	// (0x00021a27) bg_active_tab_pane_cp3_srt_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp3_srt

0x4a52,	// (0x00024d55) tabs_4_active_pane_srt_g1

0x4a5a,	// (0x00024d5d) tabs_4_active_pane_srt_t1_ParamLimits

0x4a5a,	// (0x00024d5d) tabs_4_active_pane_srt_t1

0x4a49,	// (0x00024d4c) bg_active_tab_pane_g1_cp3_copy1

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp3_copy1

0x4a40,	// (0x00024d43) bg_active_tab_pane_g3_cp3_copy1

0x1724,	// (0x00021a27) tabs_2_long_active_pane_srt_ParamLimits

0x1724,	// (0x00021a27) tabs_2_long_active_pane_srt

0x1724,	// (0x00021a27) tabs_2_long_passive_pane_srt_ParamLimits

0x1724,	// (0x00021a27) tabs_2_long_passive_pane_srt

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp4_srt

0x47a5,	// (0x00024aa8) bg_passive_tab_pane_g1_cp4_srt

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp4_srt

0x479c,	// (0x00024a9f) bg_passive_tab_pane_g3_cp4_srt

0x2148,	// (0x0002244b) bg_active_tab_pane_cp4_srt_ParamLimits

0x2148,	// (0x0002244b) bg_active_tab_pane_cp4_srt

0x47ae,	// (0x00024ab1) tabs_2_long_active_pane_srt_t1_ParamLimits

0x47ae,	// (0x00024ab1) tabs_2_long_active_pane_srt_t1

0x47a5,	// (0x00024aa8) bg_active_tab_pane_g1_cp4_srt

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp4_srt

0x479c,	// (0x00024a9f) bg_active_tab_pane_g3_cp4_srt

0x199f,	// (0x00021ca2) tabs_3_long_active_pane_srt_ParamLimits

0x199f,	// (0x00021ca2) tabs_3_long_active_pane_srt

0x199f,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x199f,	// (0x00021ca2) tabs_3_long_passive_pane_cp_srt

0x199f,	// (0x00021ca2) tabs_3_long_passive_pane_srt_ParamLimits

0x199f,	// (0x00021ca2) tabs_3_long_passive_pane_srt

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp5_srt

0x28bd,	// (0x00022bc0) bg_passive_tab_pane_g1_cp5_srt

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp5_srt

0x28b4,	// (0x00022bb7) bg_passive_tab_pane_g3_cp5_srt

0x2148,	// (0x0002244b) bg_active_tab_pane_cp5_srt_ParamLimits

0x2148,	// (0x0002244b) bg_active_tab_pane_cp5_srt

0x478a,	// (0x00024a8d) tabs_3_long_active_pane_srt_t1_ParamLimits

0x478a,	// (0x00024a8d) tabs_3_long_active_pane_srt_t1

0x28bd,	// (0x00022bc0) bg_active_tab_pane_g1_cp5_srt

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp5_srt

0x28b4,	// (0x00022bb7) bg_active_tab_pane_g3_cp5_srt

0x477c,	// (0x00024a7f) navi_text_pane_srt_t1

0x4774,	// (0x00024a77) navi_icon_pane_srt_g1

0x2d84,	// (0x00023087) midp_editing_number_pane_srt

0x2bd0,	// (0x00022ed3) midp_ticker_pane_srt

0x2d8c,	// (0x0002308f) midp_ticker_pane_srt_g1

0x2d94,	// (0x00023097) midp_ticker_pane_srt_g2

0x0001,

0xf778,	// (0x0002fa7b) midp_ticker_pane_srt_g

0x2d9c,	// (0x0002309f) midp_ticker_pane_srt_t1

0x4765,	// (0x00024a68) midp_editing_number_pane_t1_copy1

0x2169,	// (0x0002246c) listscroll_midp_pane

0x2169,	// (0x0002246c) midp_form_pane

0x2c3c,	// (0x00022f3f) midp_info_popup_window_ParamLimits

0x2c3c,	// (0x00022f3f) midp_info_popup_window

0x2033,	// (0x00022336) bg_popup_sub_pane_cp50_ParamLimits

0x2033,	// (0x00022336) bg_popup_sub_pane_cp50

0x3874,	// (0x00023b77) listscroll_midp_info_pane_ParamLimits

0x3874,	// (0x00023b77) listscroll_midp_info_pane

0x385c,	// (0x00023b5f) listscroll_form_midp_pane_ParamLimits

0x385c,	// (0x00023b5f) listscroll_form_midp_pane

0x3868,	// (0x00023b6b) scroll_bar_cp050

0x383c,	// (0x00023b3f) list_midp_pane

0x54c6,	// (0x000257c9) signal_pane_g2_cp

0x3776,	// (0x00023a79) listscroll_midp_info_pane_t1_ParamLimits

0x3776,	// (0x00023a79) listscroll_midp_info_pane_t1

0x378e,	// (0x00023a91) listscroll_midp_info_pane_t2_ParamLimits

0x378e,	// (0x00023a91) listscroll_midp_info_pane_t2

0x37cc,	// (0x00023acf) listscroll_midp_info_pane_t3_ParamLimits

0x37cc,	// (0x00023acf) listscroll_midp_info_pane_t3

0x3806,	// (0x00023b09) listscroll_midp_info_pane_t4_ParamLimits

0x3806,	// (0x00023b09) listscroll_midp_info_pane_t4

0x0003,

0xf830,	// (0x0002fb33) listscroll_midp_info_pane_t_ParamLimits

0xf830,	// (0x0002fb33) listscroll_midp_info_pane_t

0x20f5,	// (0x000223f8) scroll_pane_cp21

0x3718,	// (0x00023a1b) form_midp_field_choice_group_pane

0x3721,	// (0x00023a24) form_midp_field_text_pane

0x375c,	// (0x00023a5f) form_midp_field_time_pane

0x3764,	// (0x00023a67) form_midp_gauge_slider_pane

0x376d,	// (0x00023a70) form_midp_gauge_wait_pane

0x1644,	// (0x00021947) form_midp_image_pane

0xed23,	// (0x0002f026) list_single_midp_pane_ParamLimits

0xed23,	// (0x0002f026) list_single_midp_pane

0x36cc,	// (0x000239cf) form_midp_field_text_pane_t1

0x3484,	// (0x00023787) input_focus_pane_cp050

0x3707,	// (0x00023a0a) list_midp_form_text_pane

0x369b,	// (0x0002399e) form_midp_field_choice_group_pane_t1

0x36a9,	// (0x000239ac) input_focus_pane_cp051

0x36bd,	// (0x000239c0) list_midp_choice_pane

0x1644,	// (0x00021947) status_idle_pane

0x367f,	// (0x00023982) form_midp_field_time_pane_t1

0x163a,	// (0x0002193d) wait_anim_pane_g2_copy1

0x368d,	// (0x00023990) form_midp_field_time_pane_t2

0x0001,

0x2cec,	// (0x00022fef) aid_navinavi_width_2_pane

0xf82b,	// (0x0002fb2e) form_midp_field_time_pane_t

0x1644,	// (0x00021947) input_focus_pane_cp052

0x1644,	// (0x00021947) bg_input_focus_pane_cp040

0x363f,	// (0x00023942) form_midp_gauge_slider_pane_t1

0x364d,	// (0x00023950) form_midp_gauge_slider_pane_t2

0x365b,	// (0x0002395e) form_midp_gauge_slider_pane_t3

0x3669,	// (0x0002396c) form_midp_gauge_slider_pane_t4

0x0003,

0xf822,	// (0x0002fb25) form_midp_gauge_slider_pane_t

0x3677,	// (0x0002397a) form_midp_slider_pane

0x1724,	// (0x00021a27) bg_input_focus_pane_cp041_ParamLimits

0x1724,	// (0x00021a27) bg_input_focus_pane_cp041

0x360c,	// (0x0002390f) form_midp_gauge_wait_pane_t1_ParamLimits

0x360c,	// (0x0002390f) form_midp_gauge_wait_pane_t1

0x361e,	// (0x00023921) form_midp_gauge_wait_pane_t2_ParamLimits

0x361e,	// (0x00023921) form_midp_gauge_wait_pane_t2

0x0001,

0xf81d,	// (0x0002fb20) form_midp_gauge_wait_pane_t_ParamLimits

0xf81d,	// (0x0002fb20) form_midp_gauge_wait_pane_t

0x3630,	// (0x00023933) form_midp_wait_pane_ParamLimits

0x3630,	// (0x00023933) form_midp_wait_pane

0x35d6,	// (0x000238d9) form_midp_image_pane_g1

0x35df,	// (0x000238e2) form_midp_image_pane_t1

0x35ee,	// (0x000238f1) form_midp_image_pane_t2

0x35fd,	// (0x00023900) form_midp_image_pane_t3

0x0002,

0xf816,	// (0x0002fb19) form_midp_image_pane_t

0x35cd,	// (0x000238d0) list_single_midp_pane_g1

0xed14,	// (0x0002f017) list_single_midp_pane_t1

0x359e,	// (0x000238a1) list_midp_form_item_pane_ParamLimits

0x359e,	// (0x000238a1) list_midp_form_item_pane

0x2c94,	// (0x00022f97) list_midp_form_item_pane_t1

0x2ca3,	// (0x00022fa6) midp_ticker_pane_g1

0x2caf,	// (0x00022fb2) midp_ticker_pane_g2

0x0001,

0xf75e,	// (0x0002fa61) midp_ticker_pane_g

0x2cbb,	// (0x00022fbe) midp_ticker_pane_t1

0x49ac,	// (0x00024caf) midp_editing_number_pane_t1

0x498a,	// (0x00024c8d) midp_editing_number_pane

0x4999,	// (0x00024c9c) midp_ticker_pane

0x4755,	// (0x00024a58) ai_message_heading_pane

0x1644,	// (0x00021947) bg_popup_window_pane_cp14

0x475d,	// (0x00024a60) listscroll_ai_message_pane

0x46df,	// (0x000249e2) ai_message_heading_pane_g1_ParamLimits

0x46df,	// (0x000249e2) ai_message_heading_pane_g1

0x46eb,	// (0x000249ee) ai_message_heading_pane_g2_ParamLimits

0x46eb,	// (0x000249ee) ai_message_heading_pane_g2

0x46f7,	// (0x000249fa) ai_message_heading_pane_g3_ParamLimits

0x46f7,	// (0x000249fa) ai_message_heading_pane_g3

0x4703,	// (0x00024a06) ai_message_heading_pane_g4_ParamLimits

0x4703,	// (0x00024a06) ai_message_heading_pane_g4

0x0003,

0xf957,	// (0x0002fc5a) ai_message_heading_pane_g_ParamLimits

0xf957,	// (0x0002fc5a) ai_message_heading_pane_g

0x470f,	// (0x00024a12) ai_message_heading_pane_t1_ParamLimits

0x470f,	// (0x00024a12) ai_message_heading_pane_t1

0x4729,	// (0x00024a2c) ai_message_heading_pane_t2_ParamLimits

0x4729,	// (0x00024a2c) ai_message_heading_pane_t2

0x0001,

0xf960,	// (0x0002fc63) ai_message_heading_pane_t_ParamLimits

0xf960,	// (0x0002fc63) ai_message_heading_pane_t

0x473b,	// (0x00024a3e) bg_popup_heading_pane_cp1_ParamLimits

0x473b,	// (0x00024a3e) bg_popup_heading_pane_cp1

0x46cd,	// (0x000249d0) list_ai_message_pane_ParamLimits

0x46cd,	// (0x000249d0) list_ai_message_pane

0x20f5,	// (0x000223f8) scroll_pane_cp10

0x4669,	// (0x0002496c) list_ai_message_pane_g1

0x4671,	// (0x00024974) list_ai_message_pane_g2

0x0001,

0xf934,	// (0x0002fc37) list_ai_message_pane_g

0x4679,	// (0x0002497c) list_ai_message_pane_t1_ParamLimits

0x4679,	// (0x0002497c) list_ai_message_pane_t1

0x468e,	// (0x00024991) list_ai_message_pane_t2_ParamLimits

0x468e,	// (0x00024991) list_ai_message_pane_t2

0x46a3,	// (0x000249a6) list_ai_message_pane_t3_ParamLimits

0x46a3,	// (0x000249a6) list_ai_message_pane_t3

0x46b8,	// (0x000249bb) list_ai_message_pane_t4_ParamLimits

0x46b8,	// (0x000249bb) list_ai_message_pane_t4

0x0003,

0xf939,	// (0x0002fc3c) list_ai_message_pane_t_ParamLimits

0xf939,	// (0x0002fc3c) list_ai_message_pane_t

0x4653,	// (0x00024956) cell_ai_soft_ind_pane_ParamLimits

0x4653,	// (0x00024956) cell_ai_soft_ind_pane

0x2ccd,	// (0x00022fd0) cell_ai_soft_ind_pane_g1_ParamLimits

0x2ccd,	// (0x00022fd0) cell_ai_soft_ind_pane_g1

0x1644,	// (0x00021947) grid_highlight_cp1

0x2cda,	// (0x00022fdd) text_secondary_cp56_ParamLimits

0x2cda,	// (0x00022fdd) text_secondary_cp56

0x4628,	// (0x0002492b) example_general_pane_ParamLimits

0x4628,	// (0x0002492b) example_general_pane

0x4634,	// (0x00024937) example_parent_pane_g1_ParamLimits

0x4634,	// (0x00024937) example_parent_pane_g1

0x4640,	// (0x00024943) example_parent_pane_t1_ParamLimits

0x4640,	// (0x00024943) example_parent_pane_t1

0xc42b,	// (0x0002c72e) popup_preview_text_window_ParamLimits

0xc42b,	// (0x0002c72e) popup_preview_text_window

0x2b0d,	// (0x00022e10) list_single_pane_cp2_g4

0x1a49,	// (0x00021d4c) bg_popup_preview_window_pane_ParamLimits

0x1a49,	// (0x00021d4c) bg_popup_preview_window_pane

0x4361,	// (0x00024664) popup_preview_text_window_t1_ParamLimits

0x4361,	// (0x00024664) popup_preview_text_window_t1

0x437f,	// (0x00024682) popup_preview_text_window_t2_ParamLimits

0x437f,	// (0x00024682) popup_preview_text_window_t2

0x43c8,	// (0x000246cb) popup_preview_text_window_t3_ParamLimits

0x43c8,	// (0x000246cb) popup_preview_text_window_t3

0x440d,	// (0x00024710) popup_preview_text_window_t4_ParamLimits

0x440d,	// (0x00024710) popup_preview_text_window_t4

0x0004,

0xf908,	// (0x0002fc0b) popup_preview_text_window_t_ParamLimits

0xf908,	// (0x0002fc0b) popup_preview_text_window_t

0x448b,	// (0x0002478e) scroll_pane_cp11

0x3410,	// (0x00023713) bg_popup_preview_window_pane_g1

0x4321,	// (0x00024624) bg_popup_preview_window_pane_g2

0x4329,	// (0x0002462c) bg_popup_preview_window_pane_g3

0x4331,	// (0x00024634) bg_popup_preview_window_pane_g4

0x4339,	// (0x0002463c) bg_popup_preview_window_pane_g5

0x4341,	// (0x00024644) bg_popup_preview_window_pane_g6

0x4349,	// (0x0002464c) bg_popup_preview_window_pane_g7

0x4351,	// (0x00024654) bg_popup_preview_window_pane_g8

0xb666,	// (0x0002b969) aid_popup_width_pane

0xc409,	// (0x0002c70c) popup_midp_note_alarm_window_ParamLimits

0xc409,	// (0x0002c70c) popup_midp_note_alarm_window

0x1f87,	// (0x0002228a) data_form_pane_ParamLimits

0xea24,	// (0x0002ed27) form_field_data_pane_g1

0xea2e,	// (0x0002ed31) form_field_data_pane_t1_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_ParamLimits

0xea48,	// (0x0002ed4b) data_form_wide_pane_ParamLimits

0xea59,	// (0x0002ed5c) form_field_data_wide_pane_g1

0xea65,	// (0x0002ed68) form_field_data_wide_pane_t1_ParamLimits

0x1cec,	// (0x00021fef) input_focus_pane_cp6_ParamLimits

0x20a0,	// (0x000223a3) input_popup_find_pane_g1_ParamLimits

0x20a0,	// (0x000223a3) input_popup_find_pane_g1

0xbbcc,	// (0x0002becf) aid_navi_side_left_pane

0xbbe1,	// (0x0002bee4) aid_navi_side_right_pane

0x3d3a,	// (0x0002403d) bg_popup_window_pane_cp30_ParamLimits

0x3d3a,	// (0x0002403d) bg_popup_window_pane_cp30

0x3db4,	// (0x000240b7) popup_midp_note_alarm_window_g1_ParamLimits

0x3db4,	// (0x000240b7) popup_midp_note_alarm_window_g1

0x3de4,	// (0x000240e7) popup_midp_note_alarm_window_t1_ParamLimits

0x3de4,	// (0x000240e7) popup_midp_note_alarm_window_t1

0x3e85,	// (0x00024188) popup_midp_note_alarm_window_t2_ParamLimits

0x3e85,	// (0x00024188) popup_midp_note_alarm_window_t2

0x3f33,	// (0x00024236) popup_midp_note_alarm_window_t3_ParamLimits

0x3f33,	// (0x00024236) popup_midp_note_alarm_window_t3

0x3f65,	// (0x00024268) popup_midp_note_alarm_window_t4_ParamLimits

0x3f65,	// (0x00024268) popup_midp_note_alarm_window_t4

0x3f8b,	// (0x0002428e) popup_midp_note_alarm_window_t5_ParamLimits

0x3f8b,	// (0x0002428e) popup_midp_note_alarm_window_t5

0x000a,

0xf8a5,	// (0x0002fba8) popup_midp_note_alarm_window_t_ParamLimits

0xf8a5,	// (0x0002fba8) popup_midp_note_alarm_window_t

0x4037,	// (0x0002433a) wait_bar_pane_cp1_ParamLimits

0x4037,	// (0x0002433a) wait_bar_pane_cp1

0x1644,	// (0x00021947) wait_anim_pane_copy1

0x1644,	// (0x00021947) wait_border_pane_copy1

0x3a18,	// (0x00023d1b) wait_border_pane_g1_copy1

0xea7f,	// (0x0002ed82) form_field_popup_pane_g1

0xea87,	// (0x0002ed8a) form_field_popup_pane_t1_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_cp7_ParamLimits

0x1fb5,	// (0x000222b8) list_form_pane_ParamLimits

0xeaa1,	// (0x0002eda4) form_field_popup_wide_pane_g1

0xeaa9,	// (0x0002edac) form_field_popup_wide_pane_t1_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_cp8_ParamLimits

0x1fc1,	// (0x000222c4) list_form_wide_pane_ParamLimits

0x4aca,	// (0x00024dcd) aid_size_cell_graphic_pane

0xeb2e,	// (0x0002ee31) data_form_pane_t1_ParamLimits

0xed85,	// (0x0002f088) data_form_wide_pane_t1_ParamLimits

0x2fe3,	// (0x000232e6) bg_status_flat_pane

0x1684,	// (0x00021987) title_pane_t1_ParamLimits

0x16ec,	// (0x000219ef) title_pane_t2_ParamLimits

0x1712,	// (0x00021a15) title_pane_t3_ParamLimits

0xf55d,	// (0x0002f860) title_pane_t_ParamLimits

0x256e,	// (0x00022871) level_1_signal_ParamLimits

0x257b,	// (0x0002287e) level_2_signal_ParamLimits

0x2588,	// (0x0002288b) level_3_signal_ParamLimits

0x2595,	// (0x00022898) level_4_signal_ParamLimits

0x25a2,	// (0x000228a5) level_5_signal_ParamLimits

0x25af,	// (0x000228b2) level_6_signal_ParamLimits

0x25bc,	// (0x000228bf) level_7_signal_ParamLimits

0x256e,	// (0x00022871) level_1_battery_ParamLimits

0x257b,	// (0x0002287e) level_2_battery_ParamLimits

0x2588,	// (0x0002288b) level_3_battery_ParamLimits

0x2595,	// (0x00022898) level_4_battery_ParamLimits

0x25a2,	// (0x000228a5) level_5_battery_ParamLimits

0x25af,	// (0x000228b2) level_6_battery_ParamLimits

0x25bc,	// (0x000228bf) level_7_battery_ParamLimits

0x3c3f,	// (0x00023f42) bg_status_flat_pane_g1

0x3c47,	// (0x00023f4a) bg_status_flat_pane_g2

0x3c4f,	// (0x00023f52) bg_status_flat_pane_g3

0x3c57,	// (0x00023f5a) bg_status_flat_pane_g4

0x3c5f,	// (0x00023f62) bg_status_flat_pane_g5

0x3c67,	// (0x00023f6a) bg_status_flat_pane_g6

0x3c6f,	// (0x00023f72) bg_status_flat_pane_g7

0x173a,	// (0x00021a3d) tabs_3_active_pane_t1_ParamLimits

0x173a,	// (0x00021a3d) tabs_3_passive_pane_t1_ParamLimits

0x1754,	// (0x00021a57) tabs_4_active_pane_t1_ParamLimits

0x1754,	// (0x00021a57) tabs_4_1_passive_pane_t1_ParamLimits

0x2136,	// (0x00022439) tabs_2_active_pane_t1_ParamLimits

0x2136,	// (0x00022439) tabs_2_passive_pane_t1_ParamLimits

0x2148,	// (0x0002244b) bg_active_tab_pane_cp4_ParamLimits

0x2156,	// (0x00022459) tabs_2_long_active_pane_t1_ParamLimits

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp4_ParamLimits

0xc6dc,	// (0x0002c9df) list_single_midp_graphic_pane_t1_ParamLimits

0x2148,	// (0x0002244b) bg_active_tab_pane_cp5_ParamLimits

0x2175,	// (0x00022478) tabs_3_long_active_pane_t1_ParamLimits

0x2169,	// (0x0002246c) bg_passive_tab_pane_cp5_ParamLimits

0xc6dc,	// (0x0002c9df) list_single_midp_graphic_pane_t1

0x2fe3,	// (0x000232e6) bg_status_flat_pane_ParamLimits

0x30a6,	// (0x000233a9) indicator_pane_cp2_ParamLimits

0x30a6,	// (0x000233a9) indicator_pane_cp2

0x31cb,	// (0x000234ce) navi_pane_srt_ParamLimits

0x31cb,	// (0x000234ce) navi_pane_srt

0x31ef,	// (0x000234f2) popup_clock_digital_analogue_window_cp1

0x1801,	// (0x00021b04) indicator_pane_t1

0x2bd0,	// (0x00022ed3) copy_highlight_pane

0x2bd0,	// (0x00022ed3) cursor_graphics_pane

0x2bd0,	// (0x00022ed3) graphic_within_text_pane

0x2bd0,	// (0x00022ed3) link_highlight_pane

0x444e,	// (0x00024751) popup_preview_text_window_t5_ParamLimits

0x444e,	// (0x00024751) popup_preview_text_window_t5

0x2cf4,	// (0x00022ff7) cursor_digital_pane

0x2cf4,	// (0x00022ff7) cursor_primary_pane

0x2d05,	// (0x00023008) cursor_primary_small_pane

0x2d0d,	// (0x00023010) cursor_secondary_pane

0x2d15,	// (0x00023018) cursor_title_pane

0x2cf4,	// (0x00022ff7) link_highlight_digital_pane

0x2cfc,	// (0x00022fff) link_highlight_primary_pane

0x2d05,	// (0x00023008) link_highlight_primary_small_pane

0x2d0d,	// (0x00023010) link_highlight_secondary_pane

0x2d15,	// (0x00023018) link_highlight_title_pane

0x2cf4,	// (0x00022ff7) copy_highlight_digital_pane

0x2cf4,	// (0x00022ff7) copy_highlight_primary_pane

0x2d05,	// (0x00023008) copy_highlight_primary_small_pane

0x2d0d,	// (0x00023010) copy_highlight_secondary_pane

0x2d15,	// (0x00023018) copy_highlight_title_pane

0x2d0d,	// (0x00023010) graphic_text_digital_pane

0x3cdd,	// (0x00023fe0) graphic_text_primary_pane

0x3ce6,	// (0x00023fe9) graphic_text_primary_small_pane

0x2d05,	// (0x00023008) graphic_text_secondary_pane

0x2cf4,	// (0x00022ff7) graphic_text_title_pane

0x2d1d,	// (0x00023020) cursor_primary_pane_g1

0x3ccf,	// (0x00023fd2) cursor_text_primary_t1

0x3cb7,	// (0x00023fba) cursor_primary_small_pane_g1

0x3cc1,	// (0x00023fc4) cursor_text_primary_small_t1

0x3c9f,	// (0x00023fa2) cursor_primary_small_pane_g1_copy1

0x3ca9,	// (0x00023fac) cursor_text_primary_small_t1_copy1

0x3c87,	// (0x00023f8a) cursor_text_title_t1

0x3c95,	// (0x00023f98) cursor_title_pane_g1

0x2d1d,	// (0x00023020) cursor_digital_pane_g1

0x2d27,	// (0x0002302a) cursor_text_digital_t1

0x3c28,	// (0x00023f2b) link_highlight_primary_pane_g1

0x3c30,	// (0x00023f33) link_highlight_primary_pane_t1

0x2d35,	// (0x00023038) link_highlight_primary_small_pane_g1

0x2d3d,	// (0x00023040) link_highlight_primary_small_pane_t1

0x2d35,	// (0x00023038) link_highlight_secondary_pane_g1

0x2d4c,	// (0x0002304f) link_highlight_secondary_pane_t1

0x3b9c,	// (0x00023e9f) link_highlight_title_pane_g1

0x3ba4,	// (0x00023ea7) link_highlight_title_pane_t1

0x3b85,	// (0x00023e88) link_highlight_digital_pane_g1

0x3b8d,	// (0x00023e90) link_highlight_digital_pane_t1

0x3a5d,	// (0x00023d60) copy_highlight_primary_pane_g1

0x3a65,	// (0x00023d68) copy_highlight_primary_pane_t1

0x3a37,	// (0x00023d3a) copy_highlight_primary_small_pane_g1

0x3a4e,	// (0x00023d51) copy_highlight_primary_small_pane_t1

0x2d5b,	// (0x0002305e) copy_highlight_secondary_pane_g1

0x2d63,	// (0x00023066) copy_highlight_secondary_pane_t1

0x3a37,	// (0x00023d3a) copy_highlight_title_pane_g1

0x3a3f,	// (0x00023d42) copy_highlight_title_pane_t1

0x3a5d,	// (0x00023d60) copy_highlight_digital_pane_g1

0x4cd6,	// (0x00024fd9) copy_highlight_digital_pane_t1

0x4c2a,	// (0x00024f2d) graphic_text_primary_pane_g1

0x4cba,	// (0x00024fbd) graphic_text_primary_pane_t1

0x4cc8,	// (0x00024fcb) graphic_text_primary_pane_t2

0x0001,

0xf9d4,	// (0x0002fcd7) graphic_text_primary_pane_t

0x4c96,	// (0x00024f99) graphic_text_primary_small_pane_g1

0x4c9e,	// (0x00024fa1) graphic_text_primary_small_pane_t1

0x4cac,	// (0x00024faf) graphic_text_primary_small_pane_t2

0x0001,

0xf9cf,	// (0x0002fcd2) graphic_text_primary_small_pane_t

0x4c72,	// (0x00024f75) graphic_text_secondary_pane_g1

0x4c7a,	// (0x00024f7d) graphic_text_secondary_pane_t1

0x4c88,	// (0x00024f8b) graphic_text_secondary_pane_t2

0x0001,

0xf9ca,	// (0x0002fccd) graphic_text_secondary_pane_t

0x4c4e,	// (0x00024f51) graphic_text_title_pane_g1

0x4c56,	// (0x00024f59) graphic_text_title_pane_t1

0x4c64,	// (0x00024f67) graphic_text_title_pane_t2

0x0001,

0xf9c5,	// (0x0002fcc8) graphic_text_title_pane_t

0x4c2a,	// (0x00024f2d) graphic_text_digital_pane_g1

0x4c32,	// (0x00024f35) graphic_text_digital_pane_t1

0x4c40,	// (0x00024f43) graphic_text_digital_pane_t2

0x0001,

0xf9c0,	// (0x0002fcc3) graphic_text_digital_pane_t

0x1724,	// (0x00021a27) navi_icon_pane_srt_ParamLimits

0x1724,	// (0x00021a27) navi_icon_pane_srt

0x1644,	// (0x00021947) navi_midp_pane_srt

0x1644,	// (0x00021947) navi_navi_pane_srt

0x1724,	// (0x00021a27) navi_text_pane_srt_ParamLimits

0x1724,	// (0x00021a27) navi_text_pane_srt

0x4bf5,	// (0x00024ef8) navi_navi_icon_text_pane_srt

0x4c0f,	// (0x00024f12) navi_navi_pane_srt_g1_ParamLimits

0x4c0f,	// (0x00024f12) navi_navi_pane_srt_g1

0x4bfd,	// (0x00024f00) navi_navi_pane_srt_g2_ParamLimits

0x4bfd,	// (0x00024f00) navi_navi_pane_srt_g2

0x0001,

0xf9bb,	// (0x0002fcbe) navi_navi_pane_srt_g_ParamLimits

0xf9bb,	// (0x0002fcbe) navi_navi_pane_srt_g

0x4c21,	// (0x00024f24) navi_navi_tabs_pane_srt

0x4bf5,	// (0x00024ef8) navi_navi_text_pane_srt

0x4bf5,	// (0x00024ef8) navi_navi_volume_pane_srt

0x4be6,	// (0x00024ee9) navi_navi_text_pane_srt_t1

0xca50,	// (0x0002cd53) navi_navi_volume_pane_srt_g1

0xca58,	// (0x0002cd5b) volume_small_pane_srt_ParamLimits

0xca58,	// (0x0002cd5b) volume_small_pane_srt

0xbea3,	// (0x0002c1a6) volume_small_pane_srt_g1_ParamLimits

0xbea3,	// (0x0002c1a6) volume_small_pane_srt_g1

0xbeb3,	// (0x0002c1b6) volume_small_pane_srt_g2_ParamLimits

0xbeb3,	// (0x0002c1b6) volume_small_pane_srt_g2

0xbec4,	// (0x0002c1c7) volume_small_pane_srt_g3_ParamLimits

0xbec4,	// (0x0002c1c7) volume_small_pane_srt_g3

0xbed5,	// (0x0002c1d8) volume_small_pane_srt_g4_ParamLimits

0xbed5,	// (0x0002c1d8) volume_small_pane_srt_g4

0xbee6,	// (0x0002c1e9) volume_small_pane_srt_g5_ParamLimits

0xbee6,	// (0x0002c1e9) volume_small_pane_srt_g5

0xbef7,	// (0x0002c1fa) volume_small_pane_srt_g6_ParamLimits

0xbef7,	// (0x0002c1fa) volume_small_pane_srt_g6

0xbf08,	// (0x0002c20b) volume_small_pane_srt_g7_ParamLimits

0xbf08,	// (0x0002c20b) volume_small_pane_srt_g7

0xbf19,	// (0x0002c21c) volume_small_pane_srt_g8_ParamLimits

0xbf19,	// (0x0002c21c) volume_small_pane_srt_g8

0xbf2a,	// (0x0002c22d) volume_small_pane_srt_g9_ParamLimits

0xbf2a,	// (0x0002c22d) volume_small_pane_srt_g9

0xbf3b,	// (0x0002c23e) volume_small_pane_srt_g10_ParamLimits

0xbf3b,	// (0x0002c23e) volume_small_pane_srt_g10

0x0009,

0xf763,	// (0x0002fa66) volume_small_pane_srt_g_ParamLimits

0xf763,	// (0x0002fa66) volume_small_pane_srt_g

0x1af2,	// (0x00021df5) query_popup_data_pane_cp2

0x4bcc,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x4bcc,	// (0x00024ecf) navi_navi_icon_text_pane_srt_t1

0x3cdd,	// (0x00023fe0) navi_tabs_2_long_pane_srt

0x3cdd,	// (0x00023fe0) navi_tabs_2_pane_srt

0x3cdd,	// (0x00023fe0) navi_tabs_3_long_pane_srt

0x3cdd,	// (0x00023fe0) navi_tabs_3_pane_srt

0x3cdd,	// (0x00023fe0) navi_tabs_4_pane_srt

0xca30,	// (0x0002cd33) tabs_2_active_pane_srt_ParamLimits

0xca30,	// (0x0002cd33) tabs_2_active_pane_srt

0xca40,	// (0x0002cd43) tabs_2_passive_pane_srt_ParamLimits

0xca40,	// (0x0002cd43) tabs_2_passive_pane_srt

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp1_srt_ParamLimits

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp1_srt

0x4ba1,	// (0x00024ea4) bg_passive_tab_pane_g1_cp1_srt

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp1_srt

0x4b98,	// (0x00024e9b) bg_passive_tab_pane_g3_cp1_srt

0x1724,	// (0x00021a27) bg_active_tab_pane_cp1_srt_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp1_srt

0x4baa,	// (0x00024ead) tabs_2_active_pane_srt_g1

0x4bb2,	// (0x00024eb5) tabs_2_active_pane_srt_t1_ParamLimits

0x4bb2,	// (0x00024eb5) tabs_2_active_pane_srt_t1

0x4ba1,	// (0x00024ea4) bg_active_tab_pane_g1_cp1_srt

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp1_srt

0x4b98,	// (0x00024e9b) bg_active_tab_pane_g3_cp1_srt

0xc9fd,	// (0x0002cd00) tabs_3_active_pane_srt_ParamLimits

0xc9fd,	// (0x0002cd00) tabs_3_active_pane_srt

0xca0e,	// (0x0002cd11) tabs_3_passive_pane_cp_srt_ParamLimits

0xca0e,	// (0x0002cd11) tabs_3_passive_pane_cp_srt

0xca1f,	// (0x0002cd22) tabs_3_passive_pane_srt_ParamLimits

0xca1f,	// (0x0002cd22) tabs_3_passive_pane_srt

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp2_srt_ParamLimits

0x2f0c,	// (0x0002320f) bg_passive_tab_pane_cp2_srt

0x2d7b,	// (0x0002307e) bg_passive_tab_pane_g1_cp2_srt

0x282a,	// (0x00022b2d) bg_passive_tab_pane_g2_cp2_srt

0x2d72,	// (0x00023075) bg_passive_tab_pane_g3_cp2_srt

0x1724,	// (0x00021a27) bg_active_tab_pane_cp2_srt_ParamLimits

0x1724,	// (0x00021a27) bg_active_tab_pane_cp2_srt

0x4b7e,	// (0x00024e81) tabs_3_active_pane_srt_g1

0x4b86,	// (0x00024e89) tabs_3_active_pane_srt_t1_ParamLimits

0x4b86,	// (0x00024e89) tabs_3_active_pane_srt_t1

0x2d7b,	// (0x0002307e) bg_active_tab_pane_g1_cp2_srt

0x282a,	// (0x00022b2d) bg_active_tab_pane_g2_cp2_srt

0x2d72,	// (0x00023075) bg_active_tab_pane_g3_cp2_srt

0xc9b5,	// (0x0002ccb8) tabs_4_active_pane_srt_ParamLimits

0xc9b5,	// (0x0002ccb8) tabs_4_active_pane_srt

0xc9c7,	// (0x0002ccca) tabs_4_passive_pane_cp2_srt_ParamLimits

0xc9c7,	// (0x0002ccca) tabs_4_passive_pane_cp2_srt

0xc09e,	// (0x0002c3a1) aid_size_cell_toolbar

0x2169,	// (0x0002246c) main_idle_act_pane_ParamLimits

0xc23d,	// (0x0002c540) popup_large_graphic_colour_window_ParamLimits

0xc5a2,	// (0x0002c8a5) popup_toolbar_window_ParamLimits

0xc5a2,	// (0x0002c8a5) popup_toolbar_window

0x49bb,	// (0x00024cbe) list_single_graphic_2heading_pane_ParamLimits

0x49bb,	// (0x00024cbe) list_single_graphic_2heading_pane

0x2322,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane

0x2334,	// (0x00022637) aid_size_cell_apps_grid_prt_pane

0x2f0c,	// (0x0002320f) bg_wml_button_pane_cp1_ParamLimits

0x2f0c,	// (0x0002320f) bg_wml_button_pane_cp1

0x36cc,	// (0x000239cf) form_midp_field_text_pane_t1_ParamLimits

0x3484,	// (0x00023787) input_focus_pane_cp050_ParamLimits

0x3707,	// (0x00023a0a) list_midp_form_text_pane_ParamLimits

0x36a9,	// (0x000239ac) input_focus_pane_cp051_ParamLimits

0x36bd,	// (0x000239c0) list_midp_choice_pane_ParamLimits

0x353a,	// (0x0002383d) list_single_2graphic_pane_cp3_ParamLimits

0x353a,	// (0x0002383d) list_single_2graphic_pane_cp3

0x3565,	// (0x00023868) list_single_midp_graphic_pane_ParamLimits

0x3565,	// (0x00023868) list_single_midp_graphic_pane

0xb5f0,	// (0x0002b8f3) list_single_graphic_2heading_pane_g1_ParamLimits

0xb5f0,	// (0x0002b8f3) list_single_graphic_2heading_pane_g1

0xb5fc,	// (0x0002b8ff) list_single_graphic_2heading_pane_g4_ParamLimits

0xb5fc,	// (0x0002b8ff) list_single_graphic_2heading_pane_g4

0xb608,	// (0x0002b90b) list_single_graphic_2heading_pane_g5_ParamLimits

0xb608,	// (0x0002b90b) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b6,	// (0x0002fab9) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b6,	// (0x0002fab9) list_single_graphic_2heading_pane_g

0xb614,	// (0x0002b917) list_single_graphic_2heading_pane_t1_ParamLimits

0xb614,	// (0x0002b917) list_single_graphic_2heading_pane_t1

0xb628,	// (0x0002b92b) list_single_graphic_2heading_pane_t2_ParamLimits

0xb628,	// (0x0002b92b) list_single_graphic_2heading_pane_t2

0xb642,	// (0x0002b945) list_single_graphic_2heading_pane_t3_ParamLimits

0xb642,	// (0x0002b945) list_single_graphic_2heading_pane_t3

0x0002,

0xf7bd,	// (0x0002fac0) list_single_graphic_2heading_pane_t_ParamLimits

0xf7bd,	// (0x0002fac0) list_single_graphic_2heading_pane_t

0x334e,	// (0x00023651) bg_popup_sub_pane_cp2

0x3378,	// (0x0002367b) grid_toobar_pane

0xc64d,	// (0x0002c950) cell_toolbar_pane_ParamLimits

0xc64d,	// (0x0002c950) cell_toolbar_pane

0x33b4,	// (0x000236b7) cell_toolbar_pane_g1_ParamLimits

0x33b4,	// (0x000236b7) cell_toolbar_pane_g1

0x33c8,	// (0x000236cb) cell_toolbar_pane_g2_ParamLimits

0x33c8,	// (0x000236cb) cell_toolbar_pane_g2

0x0001,

0xf7cb,	// (0x0002face) cell_toolbar_pane_g_ParamLimits

0xf7cb,	// (0x0002face) cell_toolbar_pane_g

0x33ea,	// (0x000236ed) grid_highlight_pane_cp2_ParamLimits

0x33ea,	// (0x000236ed) grid_highlight_pane_cp2

0x3404,	// (0x00023707) toolbar_button_pane

0x3410,	// (0x00023713) toolbar_button_pane_g1

0x3420,	// (0x00023723) toolbar_button_pane_g2

0x3418,	// (0x0002371b) toolbar_button_pane_g3

0x3430,	// (0x00023733) toolbar_button_pane_g4

0x3428,	// (0x0002372b) toolbar_button_pane_g5

0x3438,	// (0x0002373b) toolbar_button_pane_g6

0x3440,	// (0x00023743) toolbar_button_pane_g7

0x3450,	// (0x00023753) toolbar_button_pane_g8

0x3448,	// (0x0002374b) toolbar_button_pane_g9

0x0009,

0xf7d0,	// (0x0002fad3) toolbar_button_pane_g

0xc685,	// (0x0002c988) list_single_2graphic_pane_g1_cp3_ParamLimits

0xc685,	// (0x0002c988) list_single_2graphic_pane_g1_cp3

0xc691,	// (0x0002c994) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc691,	// (0x0002c994) list_single_2graphic_pane_g2_cp3

0xc6a2,	// (0x0002c9a5) list_single_2graphic_pane_g3_cp3

0xc6aa,	// (0x0002c9ad) list_single_2graphic_pane_g4_cp3_ParamLimits

0xc6aa,	// (0x0002c9ad) list_single_2graphic_pane_g4_cp3

0xc6b6,	// (0x0002c9b9) list_single_2graphic_pane_t1_cp3_ParamLimits

0xc6b6,	// (0x0002c9b9) list_single_2graphic_pane_t1_cp3

0xc6d0,	// (0x0002c9d3) list_single_midp_graphic_pane_g2_ParamLimits

0xc6d0,	// (0x0002c9d3) list_single_midp_graphic_pane_g2

0xc0a6,	// (0x0002c3a9) aid_zoom_text_primary

0xb5d4,	// (0x0002b8d7) aid_zoom_text_secondary

0x2e2f,	// (0x00023132) status_small_pane_g7_ParamLimits

0x2e2f,	// (0x00023132) status_small_pane_g7

0x2e52,	// (0x00023155) status_small_pane_t1_ParamLimits

0x165b,	// (0x0002195e) title_pane_g2

0x0003,

0xf554,	// (0x0002f857) title_pane_g

0x1b93,	// (0x00021e96) aid_size_cell_colour_1_pane_ParamLimits

0x1b93,	// (0x00021e96) aid_size_cell_colour_1_pane

0x1ba7,	// (0x00021eaa) aid_size_cell_colour_2_pane_ParamLimits

0x1ba7,	// (0x00021eaa) aid_size_cell_colour_2_pane

0x1bbb,	// (0x00021ebe) aid_size_cell_colour_3_pane_ParamLimits

0x1bbb,	// (0x00021ebe) aid_size_cell_colour_3_pane

0x1bcf,	// (0x00021ed2) aid_size_cell_colour_4_pane_ParamLimits

0x1bcf,	// (0x00021ed2) aid_size_cell_colour_4_pane

0xbb08,	// (0x0002be0b) title_pane_stacon_g1_ParamLimits

0xbb08,	// (0x0002be0b) title_pane_stacon_g1

0x3abc,	// (0x00023dbf) popup_note_wait_window_g3_ParamLimits

0x3abc,	// (0x00023dbf) popup_note_wait_window_g3

0x3b32,	// (0x00023e35) popup_note_wait_window_t5_ParamLimits

0x3b32,	// (0x00023e35) popup_note_wait_window_t5

0x1644,	// (0x00021947) main_feb_china_hwr_fs_writing_pane

0xc126,	// (0x0002c429) popup_feb_china_hwr_fs_window_ParamLimits

0xc126,	// (0x0002c429) popup_feb_china_hwr_fs_window

0xc6f2,	// (0x0002c9f5) aid_size_cell_hwr_fs_ParamLimits

0xc6f2,	// (0x0002c9f5) aid_size_cell_hwr_fs

0x3484,	// (0x00023787) bg_popup_sub_pane_cp3_ParamLimits

0x3484,	// (0x00023787) bg_popup_sub_pane_cp3

0xc707,	// (0x0002ca0a) grid_hwr_fs_pane_ParamLimits

0xc707,	// (0x0002ca0a) grid_hwr_fs_pane

0xc71f,	// (0x0002ca22) linegrid_hwr_fs_pane_ParamLimits

0xc71f,	// (0x0002ca22) linegrid_hwr_fs_pane

0xc72f,	// (0x0002ca32) cell_hwr_fs_pane_ParamLimits

0xc72f,	// (0x0002ca32) cell_hwr_fs_pane

0x3490,	// (0x00023793) linegrid_hwr_fs_pane_g1_ParamLimits

0x3490,	// (0x00023793) linegrid_hwr_fs_pane_g1

0x349c,	// (0x0002379f) linegrid_hwr_fs_pane_g2_ParamLimits

0x349c,	// (0x0002379f) linegrid_hwr_fs_pane_g2

0x34ae,	// (0x000237b1) linegrid_hwr_fs_pane_g3_ParamLimits

0x34ae,	// (0x000237b1) linegrid_hwr_fs_pane_g3

0xc751,	// (0x0002ca54) linegrid_hwr_fs_pane_g4_ParamLimits

0xc751,	// (0x0002ca54) linegrid_hwr_fs_pane_g4

0xc76b,	// (0x0002ca6e) linegrid_hwr_fs_pane_g5_ParamLimits

0xc76b,	// (0x0002ca6e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fb,	// (0x0002fafe) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fb,	// (0x0002fafe) linegrid_hwr_fs_pane_g

0x34ba,	// (0x000237bd) cell_hwr_fs_pane_g1_ParamLimits

0x34ba,	// (0x000237bd) cell_hwr_fs_pane_g1

0x3285,	// (0x00023588) cell_hwr_fs_pane_g2_ParamLimits

0x3285,	// (0x00023588) cell_hwr_fs_pane_g2

0x34d0,	// (0x000237d3) cell_hwr_fs_pane_g3_ParamLimits

0x34d0,	// (0x000237d3) cell_hwr_fs_pane_g3

0x34dd,	// (0x000237e0) cell_hwr_fs_pane_g4_ParamLimits

0x34dd,	// (0x000237e0) cell_hwr_fs_pane_g4

0x0003,

0xf806,	// (0x0002fb09) cell_hwr_fs_pane_g_ParamLimits

0xf806,	// (0x0002fb09) cell_hwr_fs_pane_g

0xc781,	// (0x0002ca84) cell_hwr_fs_pane_t1

0x1644,	// (0x00021947) grid_highlight_pane_cp6

0x1644,	// (0x00021947) main_idle_act2_pane

0x20dc,	// (0x000223df) aid_inside_area_popup_secondary

0x4171,	// (0x00024474) aid_inside_area_window_primary_ParamLimits

0x4171,	// (0x00024474) aid_inside_area_window_primary

0x4ce5,	// (0x00024fe8) ai2_news_ticker_pane

0x4ced,	// (0x00024ff0) aid_size_cell_ai1_link_ParamLimits

0x4ced,	// (0x00024ff0) aid_size_cell_ai1_link

0x4d07,	// (0x0002500a) popup_ai2_data_window_ParamLimits

0x4d07,	// (0x0002500a) popup_ai2_data_window

0x4d1b,	// (0x0002501e) popup_ai2_link_window_ParamLimits

0x4d1b,	// (0x0002501e) popup_ai2_link_window

0x3484,	// (0x00023787) bg_popup_sub_pane_cp4_ParamLimits

0x3484,	// (0x00023787) bg_popup_sub_pane_cp4

0x4d2f,	// (0x00025032) grid_ai2_link_pane_ParamLimits

0x4d2f,	// (0x00025032) grid_ai2_link_pane

0x4d46,	// (0x00025049) popup_ai2_link_window_g1_ParamLimits

0x4d46,	// (0x00025049) popup_ai2_link_window_g1

0x4d52,	// (0x00025055) popup_ai2_link_window_g2_ParamLimits

0x4d52,	// (0x00025055) popup_ai2_link_window_g2

0x0001,

0xf9d9,	// (0x0002fcdc) popup_ai2_link_window_g_ParamLimits

0xf9d9,	// (0x0002fcdc) popup_ai2_link_window_g

0x4d61,	// (0x00025064) ai2_mp_button_pane

0x4d69,	// (0x0002506c) ai2_mp_volume_pane

0x36a9,	// (0x000239ac) bg_popup_sub_pane_cp5_ParamLimits

0x36a9,	// (0x000239ac) bg_popup_sub_pane_cp5

0x4d71,	// (0x00025074) heading_ai2_gene_pane_ParamLimits

0x4d71,	// (0x00025074) heading_ai2_gene_pane

0x4d7d,	// (0x00025080) list_ai2_gene_pane_ParamLimits

0x4d7d,	// (0x00025080) list_ai2_gene_pane

0x4dc5,	// (0x000250c8) cell_ai2_link_pane_ParamLimits

0x4dc5,	// (0x000250c8) cell_ai2_link_pane

0x4ddb,	// (0x000250de) cell_ai2_link_pane_g1

0x1644,	// (0x00021947) grid_highlight_pane_cp7

0xca6d,	// (0x0002cd70) ai2_mp_volume_pane_g1

0x4eb4,	// (0x000251b7) ai2_mp_volume_pane_g2

0x4e21,	// (0x00025124) list_ai2_gene_pane_t1

0x4eac,	// (0x000251af) ai2_mp_volume_pane_g3

0x0002,

0xf9f2,	// (0x0002fcf5) ai2_mp_volume_pane_g

0xca75,	// (0x0002cd78) volume_small_pane_cp3

0x4ebc,	// (0x000251bf) aid_size_cell_ai2_button

0x4ec4,	// (0x000251c7) grid_ai2_button_pane

0x4ecd,	// (0x000251d0) cell_ai2_button_pane_ParamLimits

0x4ecd,	// (0x000251d0) cell_ai2_button_pane

0x163a,	// (0x0002193d) cell_ai2_button_pane_g1

0x1644,	// (0x00021947) grid_highlight_pane_cp8

0x4e6c,	// (0x0002516f) ai2_gene_pane_t1_ParamLimits

0x4e6c,	// (0x0002516f) ai2_gene_pane_t1

0xc094,	// (0x0002c397) aid_height_parent_landscape

0x47f6,	// (0x00024af9) aid_height_set_list

0x4807,	// (0x00024b0a) aid_size_parent

0x4aca,	// (0x00024dcd) aid_size_cell_graphic_pane_ParamLimits

0x4d8d,	// (0x00025090) popup_ai2_data_window_g1_ParamLimits

0x4d8d,	// (0x00025090) popup_ai2_data_window_g1

0x4d99,	// (0x0002509c) ai2_news_ticker_pane_g1

0x4da1,	// (0x000250a4) ai2_news_ticker_pane_g2

0x0001,

0xf9de,	// (0x0002fce1) ai2_news_ticker_pane_g

0x4da9,	// (0x000250ac) ai2_news_ticker_pane_t1

0x4db7,	// (0x000250ba) ai2_news_ticker_pane_t2

0x0001,

0xf9e3,	// (0x0002fce6) ai2_news_ticker_pane_t

0x4de4,	// (0x000250e7) heading_ai2_gene_pane_g1

0x4dec,	// (0x000250ef) heading_ai2_gene_pane_t1_ParamLimits

0x4dec,	// (0x000250ef) heading_ai2_gene_pane_t1

0x4e01,	// (0x00025104) list_highlight_pane_cp6

0x4e09,	// (0x0002510c) ai2_gene_pane_ParamLimits

0x4e09,	// (0x0002510c) ai2_gene_pane

0x4e2f,	// (0x00025132) list_ai2_gene_pane_t2

0x0001,

0xf9e8,	// (0x0002fceb) list_ai2_gene_pane_t

0x4e3d,	// (0x00025140) list_highlight_pane_cp8_ParamLimits

0x4e3d,	// (0x00025140) list_highlight_pane_cp8

0x4e4e,	// (0x00025151) ai2_gene_pane_g1_ParamLimits

0x4e4e,	// (0x00025151) ai2_gene_pane_g1

0x4e60,	// (0x00025163) ai2_gene_pane_g2_ParamLimits

0x4e60,	// (0x00025163) ai2_gene_pane_g2

0x0001,

0xf9ed,	// (0x0002fcf0) ai2_gene_pane_g_ParamLimits

0xf9ed,	// (0x0002fcf0) ai2_gene_pane_g

0x1f11,	// (0x00022214) scroll_pane_cp12

0xc053,	// (0x0002c356) control_pane_t3_ParamLimits

0xc053,	// (0x0002c356) control_pane_t3

0x2e43,	// (0x00023146) status_small_pane_g8_ParamLimits

0x2e43,	// (0x00023146) status_small_pane_g8

0xc208,	// (0x0002c50b) popup_find_window_ParamLimits

0xc41d,	// (0x0002c720) popup_note_image_window_ParamLimits

0xec58,	// (0x0002ef5b) list_double2_graphic_pane_vc_g1_ParamLimits

0xec58,	// (0x0002ef5b) list_double2_graphic_pane_vc_g1

0xe59e,	// (0x0002e8a1) list_double2_graphic_pane_vc_g2_ParamLimits

0xe59e,	// (0x0002e8a1) list_double2_graphic_pane_vc_g2

0xe5aa,	// (0x0002e8ad) list_double2_graphic_pane_vc_g3_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c4,	// (0x0002fac7) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002fac7) list_double2_graphic_pane_vc_g

0xec64,	// (0x0002ef67) list_double2_graphic_pane_vc_t1_ParamLimits

0xec64,	// (0x0002ef67) list_double2_graphic_pane_vc_t1

0xe59e,	// (0x0002e8a1) list_single_heading_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_single_heading_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_single_heading_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_single_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_single_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_single_heading_pane_vc_g

0xec7a,	// (0x0002ef7d) list_single_heading_pane_vc_t1_ParamLimits

0xec7a,	// (0x0002ef7d) list_single_heading_pane_vc_t1

0xec90,	// (0x0002ef93) list_single_heading_pane_vc_t2_ParamLimits

0xec90,	// (0x0002ef93) list_single_heading_pane_vc_t2

0x0001,

0xf7ea,	// (0x0002faed) list_single_heading_pane_vc_t_ParamLimits

0xf7ea,	// (0x0002faed) list_single_heading_pane_vc_t

0xeca4,	// (0x0002efa7) list_setting_number_pane_vc_g1_ParamLimits

0xeca4,	// (0x0002efa7) list_setting_number_pane_vc_g1

0xecb0,	// (0x0002efb3) list_setting_number_pane_vc_g2_ParamLimits

0xecb0,	// (0x0002efb3) list_setting_number_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002faf2) list_setting_number_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002faf2) list_setting_number_pane_vc_g

0xecbc,	// (0x0002efbf) list_setting_number_pane_vc_t1_ParamLimits

0xecbc,	// (0x0002efbf) list_setting_number_pane_vc_t1

0xecd0,	// (0x0002efd3) list_setting_number_pane_vc_t2_ParamLimits

0xecd0,	// (0x0002efd3) list_setting_number_pane_vc_t2

0xecea,	// (0x0002efed) list_setting_number_pane_vc_t3_ParamLimits

0xecea,	// (0x0002efed) list_setting_number_pane_vc_t3

0x0002,

0xf7f4,	// (0x0002faf7) list_setting_number_pane_vc_t_ParamLimits

0xf7f4,	// (0x0002faf7) list_setting_number_pane_vc_t

0xed04,	// (0x0002f007) set_value_pane_vc_ParamLimits

0xed04,	// (0x0002f007) set_value_pane_vc

0x49bb,	// (0x00024cbe) list_double2_graphic_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double2_graphic_pane_vc

0x49bb,	// (0x00024cbe) list_double2_large_graphic_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double2_large_graphic_pane_vc

0x49bb,	// (0x00024cbe) list_double2_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double2_pane_vc

0x49bb,	// (0x00024cbe) list_double_graphic_heading_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_graphic_heading_pane_vc

0x49bb,	// (0x00024cbe) list_double_graphic_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_graphic_pane_vc

0x49bb,	// (0x00024cbe) list_double_heading_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_heading_pane_vc

0x49bb,	// (0x00024cbe) list_double_large_graphic_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_large_graphic_pane_vc

0x49bb,	// (0x00024cbe) list_double_number_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_number_pane_vc

0x49bb,	// (0x00024cbe) list_double_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_pane_vc

0x49bb,	// (0x00024cbe) list_double_time_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_double_time_pane_vc

0x49bb,	// (0x00024cbe) list_setting_number_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_setting_number_pane_vc

0x49bb,	// (0x00024cbe) list_setting_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_setting_pane_vc

0x49bb,	// (0x00024cbe) list_single_graphic_heading_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_single_graphic_heading_pane_vc

0x49bb,	// (0x00024cbe) list_single_heading_pane_vc_ParamLimits

0x49bb,	// (0x00024cbe) list_single_heading_pane_vc

0xede8,	// (0x0002f0eb) list_single_number_heading_pane_vc_ParamLimits

0xede8,	// (0x0002f0eb) list_single_number_heading_pane_vc

0xeeba,	// (0x0002f1bd) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xeeba,	// (0x0002f1bd) list_double_graphic_heading_pane_vc_g1

0xe59e,	// (0x0002e8a1) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xe59e,	// (0x0002e8a1) list_double_graphic_heading_pane_vc_g2

0xe5aa,	// (0x0002e8ad) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f9,	// (0x0002fcfc) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f9,	// (0x0002fcfc) list_double_graphic_heading_pane_vc_g

0xeec6,	// (0x0002f1c9) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xeec6,	// (0x0002f1c9) list_double_graphic_heading_pane_vc_t1

0xeee2,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xeee2,	// (0x0002f1e5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa00,	// (0x0002fd03) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa00,	// (0x0002fd03) list_double_graphic_heading_pane_vc_t

0xeca4,	// (0x0002efa7) list_setting_pane_vc_g1_ParamLimits

0xeca4,	// (0x0002efa7) list_setting_pane_vc_g1

0xecb0,	// (0x0002efb3) list_setting_pane_vc_g2_ParamLimits

0xecb0,	// (0x0002efb3) list_setting_pane_vc_g2

0x0001,

0xf7ef,	// (0x0002faf2) list_setting_pane_vc_g_ParamLimits

0xf7ef,	// (0x0002faf2) list_setting_pane_vc_g

0xeefa,	// (0x0002f1fd) list_setting_pane_vc_t1_ParamLimits

0xeefa,	// (0x0002f1fd) list_setting_pane_vc_t1

0xef14,	// (0x0002f217) list_setting_pane_vc_t2_ParamLimits

0xef14,	// (0x0002f217) list_setting_pane_vc_t2

0x0001,

0xfa43,	// (0x0002fd46) list_setting_pane_vc_t_ParamLimits

0xfa43,	// (0x0002fd46) list_setting_pane_vc_t

0xed04,	// (0x0002f007) set_value_pane_cp_vc_ParamLimits

0xed04,	// (0x0002f007) set_value_pane_cp_vc

0xe59e,	// (0x0002e8a1) list_single_number_heading_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_single_number_heading_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_single_number_heading_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_single_number_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_single_number_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_single_number_heading_pane_vc_g

0xec7a,	// (0x0002ef7d) list_single_number_heading_pane_vc_t1_ParamLimits

0xec7a,	// (0x0002ef7d) list_single_number_heading_pane_vc_t1

0xef2c,	// (0x0002f22f) list_single_number_heading_pane_vc_t2_ParamLimits

0xef2c,	// (0x0002f22f) list_single_number_heading_pane_vc_t2

0xef40,	// (0x0002f243) list_single_number_heading_pane_vc_t3_ParamLimits

0xef40,	// (0x0002f243) list_single_number_heading_pane_vc_t3

0x0002,

0xfa48,	// (0x0002fd4b) list_single_number_heading_pane_vc_t_ParamLimits

0xfa48,	// (0x0002fd4b) list_single_number_heading_pane_vc_t

0xec58,	// (0x0002ef5b) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xec58,	// (0x0002ef5b) list_single_graphic_heading_pane_vc_g1

0xe59e,	// (0x0002e8a1) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xe59e,	// (0x0002e8a1) list_single_graphic_heading_pane_vc_g4

0xe5aa,	// (0x0002e8ad) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xe5aa,	// (0x0002e8ad) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c4,	// (0x0002fac7) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c4,	// (0x0002fac7) list_single_graphic_heading_pane_vc_g

0xec7a,	// (0x0002ef7d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xec7a,	// (0x0002ef7d) list_single_graphic_heading_pane_vc_t1

0xef52,	// (0x0002f255) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xef52,	// (0x0002f255) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa4f,	// (0x0002fd52) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa4f,	// (0x0002fd52) list_single_graphic_heading_pane_vc_t

0xe59e,	// (0x0002e8a1) list_double2_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_double2_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_double2_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double2_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_double2_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_double2_pane_vc_g

0xef66,	// (0x0002f269) list_double2_pane_vc_t1_ParamLimits

0xef66,	// (0x0002f269) list_double2_pane_vc_t1

0xef7c,	// (0x0002f27f) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xef7c,	// (0x0002f27f) list_double2_large_graphic_pane_vc_g1

0xe59e,	// (0x0002e8a1) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xe59e,	// (0x0002e8a1) list_double2_large_graphic_pane_vc_g2

0xe5aa,	// (0x0002e8ad) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa54,	// (0x0002fd57) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa54,	// (0x0002fd57) list_double2_large_graphic_pane_vc_g

0xef88,	// (0x0002f28b) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xef88,	// (0x0002f28b) list_double2_large_graphic_pane_vc_t1

0xef9e,	// (0x0002f2a1) list_double_time_pane_vc_g1_ParamLimits

0xef9e,	// (0x0002f2a1) list_double_time_pane_vc_g1

0xefaa,	// (0x0002f2ad) list_double_time_pane_vc_g2_ParamLimits

0xefaa,	// (0x0002f2ad) list_double_time_pane_vc_g2

0x0001,

0xfa5b,	// (0x0002fd5e) list_double_time_pane_vc_g_ParamLimits

0xfa5b,	// (0x0002fd5e) list_double_time_pane_vc_g

0xefb6,	// (0x0002f2b9) list_double_time_pane_vc_t1_ParamLimits

0xefb6,	// (0x0002f2b9) list_double_time_pane_vc_t1

0xefda,	// (0x0002f2dd) list_double_time_pane_vc_t2_ParamLimits

0xefda,	// (0x0002f2dd) list_double_time_pane_vc_t2

0xf024,	// (0x0002f327) list_double_time_pane_vc_t3_ParamLimits

0xf024,	// (0x0002f327) list_double_time_pane_vc_t3

0xf036,	// (0x0002f339) list_double_time_pane_vc_t4_ParamLimits

0xf036,	// (0x0002f339) list_double_time_pane_vc_t4

0x0003,

0xfa60,	// (0x0002fd63) list_double_time_pane_vc_t_ParamLimits

0xfa60,	// (0x0002fd63) list_double_time_pane_vc_t

0xe59e,	// (0x0002e8a1) list_double_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_double_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_double_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_double_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_double_pane_vc_g

0xf04a,	// (0x0002f34d) list_double_pane_vc_t1_ParamLimits

0xf04a,	// (0x0002f34d) list_double_pane_vc_t1

0xf05e,	// (0x0002f361) list_double_pane_vc_t2_ParamLimits

0xf05e,	// (0x0002f361) list_double_pane_vc_t2

0x0001,

0xfa69,	// (0x0002fd6c) list_double_pane_vc_t_ParamLimits

0xfa69,	// (0x0002fd6c) list_double_pane_vc_t

0xe59e,	// (0x0002e8a1) list_double_number_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_double_number_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_double_number_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_double_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_double_number_pane_vc_g

0xf076,	// (0x0002f379) list_double_number_pane_vc_t1_ParamLimits

0xf076,	// (0x0002f379) list_double_number_pane_vc_t1

0xf08a,	// (0x0002f38d) list_double_number_pane_vc_t2_ParamLimits

0xf08a,	// (0x0002f38d) list_double_number_pane_vc_t2

0xf05e,	// (0x0002f361) list_double_number_pane_vc_t3_ParamLimits

0xf05e,	// (0x0002f361) list_double_number_pane_vc_t3

0x0002,

0xfa6e,	// (0x0002fd71) list_double_number_pane_vc_t_ParamLimits

0xfa6e,	// (0x0002fd71) list_double_number_pane_vc_t

0xf09e,	// (0x0002f3a1) list_double_large_graphic_pane_vc_g1_ParamLimits

0xf09e,	// (0x0002f3a1) list_double_large_graphic_pane_vc_g1

0xf0af,	// (0x0002f3b2) list_double_large_graphic_pane_vc_g2_ParamLimits

0xf0af,	// (0x0002f3b2) list_double_large_graphic_pane_vc_g2

0xe5aa,	// (0x0002e8ad) list_double_large_graphic_pane_vc_g3_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double_large_graphic_pane_vc_g3

0xf0be,	// (0x0002f3c1) list_double_large_graphic_pane_vc_g4_ParamLimits

0xf0be,	// (0x0002f3c1) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa75,	// (0x0002fd78) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa75,	// (0x0002fd78) list_double_large_graphic_pane_vc_g

0xf0ca,	// (0x0002f3cd) list_double_large_graphic_pane_vc_t1_ParamLimits

0xf0ca,	// (0x0002f3cd) list_double_large_graphic_pane_vc_t1

0xf0e3,	// (0x0002f3e6) list_double_large_graphic_pane_vc_t2_ParamLimits

0xf0e3,	// (0x0002f3e6) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa7e,	// (0x0002fd81) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa7e,	// (0x0002fd81) list_double_large_graphic_pane_vc_t

0xe59e,	// (0x0002e8a1) list_double_heading_pane_vc_g1_ParamLimits

0xe59e,	// (0x0002e8a1) list_double_heading_pane_vc_g1

0xe5aa,	// (0x0002e8ad) list_double_heading_pane_vc_g2_ParamLimits

0xe5aa,	// (0x0002e8ad) list_double_heading_pane_vc_g2

0x0001,

0xf7e5,	// (0x0002fae8) list_double_heading_pane_vc_g_ParamLimits

0xf7e5,	// (0x0002fae8) list_double_heading_pane_vc_g

0xf0fc,	// (0x0002f3ff) list_double_heading_pane_vc_t1_ParamLimits

0xf0fc,	// (0x0002f3ff) list_double_heading_pane_vc_t1

0xec7a,	// (0x0002ef7d) list_double_heading_pane_vc_t2_ParamLimits

0xec7a,	// (0x0002ef7d) list_double_heading_pane_vc_t2

0x0001,

0xfa83,	// (0x0002fd86) list_double_heading_pane_vc_t_ParamLimits

0xfa83,	// (0x0002fd86) list_double_heading_pane_vc_t

0xf110,	// (0x0002f413) list_double_graphic_pane_vc_g1_ParamLimits

0xf110,	// (0x0002f413) list_double_graphic_pane_vc_g1

0xf120,	// (0x0002f423) list_double_graphic_pane_vc_g2_ParamLimits

0xf120,	// (0x0002f423) list_double_graphic_pane_vc_g2

0xf12f,	// (0x0002f432) list_double_graphic_pane_vc_g3_ParamLimits

0xf12f,	// (0x0002f432) list_double_graphic_pane_vc_g3

0x0002,

0xfa88,	// (0x0002fd8b) list_double_graphic_pane_vc_g_ParamLimits

0xfa88,	// (0x0002fd8b) list_double_graphic_pane_vc_g

0xf13b,	// (0x0002f43e) list_double_graphic_pane_vc_t1_ParamLimits

0xf13b,	// (0x0002f43e) list_double_graphic_pane_vc_t1

0xf14f,	// (0x0002f452) list_double_graphic_pane_vc_t2_ParamLimits

0xf14f,	// (0x0002f452) list_double_graphic_pane_vc_t2

0x0001,

0xfa8f,	// (0x0002fd92) list_double_graphic_pane_vc_t_ParamLimits

0xfa8f,	// (0x0002fd92) list_double_graphic_pane_vc_t

0xb672,	// (0x0002b975) aid_size_cell_fastswap

0xb67a,	// (0x0002b97d) aid_size_cell_touch_ParamLimits

0xb67a,	// (0x0002b97d) aid_size_cell_touch

0xb8df,	// (0x0002bbe2) popup_fast_swap_wide_window_ParamLimits

0xb8df,	// (0x0002bbe2) popup_fast_swap_wide_window

0xb9db,	// (0x0002bcde) touch_pane_ParamLimits

0xb9db,	// (0x0002bcde) touch_pane

0x1f67,	// (0x0002226a) button_value_adjust_pane_cp2

0xe97a,	// (0x0002ec7d) button_value_adjust_pane_cp4

0xe99a,	// (0x0002ec9d) form_field_data_pane_cp2

0xe9b9,	// (0x0002ecbc) form_field_data_wide_pane_cp2

0x23ed,	// (0x000226f0) bg_scroll_pane_ParamLimits

0xbc6b,	// (0x0002bf6e) scroll_handle_pane_ParamLimits

0xbc7f,	// (0x0002bf82) scroll_sc2_down_pane_ParamLimits

0xbc7f,	// (0x0002bf82) scroll_sc2_down_pane

0x241e,	// (0x00022721) scroll_sc2_up_pane_ParamLimits

0x241e,	// (0x00022721) scroll_sc2_up_pane

0x55a1,	// (0x000258a4) grid_wheel_folder_pane_g1_ParamLimits

0x55a1,	// (0x000258a4) grid_wheel_folder_pane_g1

0xbe3b,	// (0x0002c13e) clock_nsta_pane_cp2_ParamLimits

0xbe3b,	// (0x0002c13e) clock_nsta_pane_cp2

0x2169,	// (0x0002246c) listscroll_midp_pane_ParamLimits

0x2bd8,	// (0x00022edb) midp_canvas_pane

0x2ebe,	// (0x000231c1) nsta_clock_indic_pane

0x2ef2,	// (0x000231f5) listscroll_form_pane_vc

0x2efa,	// (0x000231fd) listscroll_set_pane_vc_ParamLimits

0x2efa,	// (0x000231fd) listscroll_set_pane_vc

0x2fff,	// (0x00023302) clock_nsta_pane

0x3074,	// (0x00023377) indicator_nsta_pane

0x334e,	// (0x00023651) bg_popup_sub_pane_cp2_ParamLimits

0x3362,	// (0x00023665) find_pane_cp2_ParamLimits

0x3362,	// (0x00023665) find_pane_cp2

0x3378,	// (0x0002367b) grid_toobar_pane_ParamLimits

0x3458,	// (0x0002375b) list_form_gen_pane_vc_ParamLimits

0x3458,	// (0x0002375b) list_form_gen_pane_vc

0x346e,	// (0x00023771) scroll_pane_cp8_vc_ParamLimits

0x346e,	// (0x00023771) scroll_pane_cp8_vc

0x34ea,	// (0x000237ed) data_form_wide_pane_vc_ParamLimits

0x34ea,	// (0x000237ed) data_form_wide_pane_vc

0x34f6,	// (0x000237f9) form_field_data_wide_pane_vc_g1

0x34fe,	// (0x00023801) form_field_data_wide_pane_vc_t1_ParamLimits

0x34fe,	// (0x00023801) form_field_data_wide_pane_vc_t1

0x1f93,	// (0x00022296) input_focus_pane_cp6_vc_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_cp6_vc

0x383c,	// (0x00023b3f) list_midp_pane_ParamLimits

0x3848,	// (0x00023b4b) scroll_pane_cp16_ParamLimits

0x3848,	// (0x00023b4b) scroll_pane_cp16

0x3896,	// (0x00023b99) button_value_adjust_pane_ParamLimits

0x3896,	// (0x00023b99) button_value_adjust_pane

0x4819,	// (0x00024b1c) button_value_adjust_pane_cp6_ParamLimits

0x4819,	// (0x00024b1c) button_value_adjust_pane_cp6

0x493f,	// (0x00024c42) settings_code_pane_cp_ParamLimits

0x493f,	// (0x00024c42) settings_code_pane_cp

0x163a,	// (0x0002193d) cell_touch_pane_g1

0x163a,	// (0x0002193d) cell_touch_pane_g2

0x0001,

0xf709,	// (0x0002fa0c) cell_touch_pane_g

0x4edf,	// (0x000251e2) cell_touch_pane_cp_ParamLimits

0x4edf,	// (0x000251e2) cell_touch_pane_cp

0x4eef,	// (0x000251f2) cell_touch_pane_ParamLimits

0x4eef,	// (0x000251f2) cell_touch_pane

0x163a,	// (0x0002193d) scroll_sc2_down_pane_g1

0x163a,	// (0x0002193d) scroll_sc2_up_pane_g1

0x1644,	// (0x00021947) bg_set_opt_pane_cp4_vc

0x4f00,	// (0x00025203) list_set_graphic_pane_vc_g1_ParamLimits

0x4f00,	// (0x00025203) list_set_graphic_pane_vc_g1

0x4f0c,	// (0x0002520f) list_set_graphic_pane_vc_g2_ParamLimits

0x4f0c,	// (0x0002520f) list_set_graphic_pane_vc_g2

0x0001,

0xfa05,	// (0x0002fd08) list_set_graphic_pane_vc_g_ParamLimits

0xfa05,	// (0x0002fd08) list_set_graphic_pane_vc_g

0x4f18,	// (0x0002521b) text_primary_small_cp13_vc_ParamLimits

0x4f18,	// (0x0002521b) text_primary_small_cp13_vc

0x4f30,	// (0x00025233) list_set_graphic_pane_vc_ParamLimits

0x4f30,	// (0x00025233) list_set_graphic_pane_vc

0x1644,	// (0x00021947) input_focus_pane_cp2_vc

0x163a,	// (0x0002193d) setting_code_pane_vc_g1

0x176f,	// (0x00021a72) setting_code_pane_vc_t1

0x4f43,	// (0x00025246) set_text_pane_vc_t1_ParamLimits

0x4f43,	// (0x00025246) set_text_pane_vc_t1

0x1644,	// (0x00021947) input_focus_pane_cp1_vc

0x4f60,	// (0x00025263) list_set_text_pane_vc

0x163a,	// (0x0002193d) setting_text_pane_vc_g1

0x1644,	// (0x00021947) bg_set_opt_pane_cp2_vc

0x1766,	// (0x00021a69) setting_slider_graphic_pane_vc_g1

0x4f6a,	// (0x0002526d) setting_slider_graphic_pane_vc_t1

0x4f7a,	// (0x0002527d) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0a,	// (0x0002fd0d) setting_slider_graphic_pane_vc_t

0x4f8a,	// (0x0002528d) slider_set_pane_cp_vc

0x4f92,	// (0x00025295) slider_set_pane_vc_g1

0x4f9b,	// (0x0002529e) slider_set_pane_vc_g2

0x0006,

0xfa0f,	// (0x0002fd12) slider_set_pane_vc_g

0x1fe2,	// (0x000222e5) set_opt_bg_pane_g1_copy1

0x1fea,	// (0x000222ed) set_opt_bg_pane_g2_copy1

0x4fc7,	// (0x000252ca) set_opt_bg_pane_g3_copy1

0x1ffa,	// (0x000222fd) set_opt_bg_pane_g4_copy1

0x2002,	// (0x00022305) set_opt_bg_pane_g5_copy1

0x200a,	// (0x0002230d) set_opt_bg_pane_g6_copy1

0x4fcf,	// (0x000252d2) set_opt_bg_pane_g7_copy1

0x4fd9,	// (0x000252dc) set_opt_bg_pane_g8_copy1

0x4fe1,	// (0x000252e4) set_opt_bg_pane_g9_copy1

0x1644,	// (0x00021947) bg_set_opt_pane_cp_vc

0x4fe9,	// (0x000252ec) setting_slider_pane_vc_t1

0x4ff8,	// (0x000252fb) setting_slider_pane_vc_t2

0x5008,	// (0x0002530b) setting_slider_pane_vc_t3

0x0002,

0xfa1e,	// (0x0002fd21) setting_slider_pane_vc_t

0x5018,	// (0x0002531b) slider_set_pane_vc

0xc78f,	// (0x0002ca92) volume_set_pane_vc_g1

0xca7e,	// (0x0002cd81) volume_set_pane_vc_g2

0xca87,	// (0x0002cd8a) volume_set_pane_vc_g3

0xca90,	// (0x0002cd93) volume_set_pane_vc_g4

0xca99,	// (0x0002cd9c) volume_set_pane_vc_g5

0xcaa2,	// (0x0002cda5) volume_set_pane_vc_g6

0xc7bc,	// (0x0002cabf) volume_set_pane_vc_g7

0xcaab,	// (0x0002cdae) volume_set_pane_vc_g8

0xcab4,	// (0x0002cdb7) volume_set_pane_vc_g9

0xcabd,	// (0x0002cdc0) volume_set_pane_vc_g10

0x0009,

0xfa25,	// (0x0002fd28) volume_set_pane_vc_g

0x5020,	// (0x00025323) volume_set_pane_vc

0x5028,	// (0x0002532b) button_value_adjust_pane_cp1_vc

0x5032,	// (0x00025335) list_highlight_pane_cp2_vc

0x503b,	// (0x0002533e) list_set_pane_vc_ParamLimits

0x503b,	// (0x0002533e) list_set_pane_vc

0x5099,	// (0x0002539c) main_pane_set_vc_t1_ParamLimits

0x5099,	// (0x0002539c) main_pane_set_vc_t1

0x50ae,	// (0x000253b1) main_pane_set_vc_t2_ParamLimits

0x50ae,	// (0x000253b1) main_pane_set_vc_t2

0x50c0,	// (0x000253c3) main_pane_set_vc_t3_ParamLimits

0x50c0,	// (0x000253c3) main_pane_set_vc_t3

0x50d2,	// (0x000253d5) main_pane_set_vc_t4_ParamLimits

0x50d2,	// (0x000253d5) main_pane_set_vc_t4

0x0003,

0xfa3a,	// (0x0002fd3d) main_pane_set_vc_t_ParamLimits

0xfa3a,	// (0x0002fd3d) main_pane_set_vc_t

0x50e4,	// (0x000253e7) setting_code_pane_vc_ParamLimits

0x50e4,	// (0x000253e7) setting_code_pane_vc

0x50f3,	// (0x000253f6) setting_slider_graphic_pane_vc

0x50f3,	// (0x000253f6) setting_slider_pane_vc

0x50f3,	// (0x000253f6) setting_text_pane_vc

0x50f3,	// (0x000253f6) setting_volume_pane_vc

0x50fb,	// (0x000253fe) scroll_pane_cp121_vc

0x1f55,	// (0x00022258) set_content_pane_vc

0x5103,	// (0x00025406) button_value_adjust_pane_g1

0x510c,	// (0x0002540f) button_value_adjust_pane_g2

0x0001,

0xfa94,	// (0x0002fd97) button_value_adjust_pane_g

0x5115,	// (0x00025418) form_field_slider_wide_pane_vc_t1_ParamLimits

0x5115,	// (0x00025418) form_field_slider_wide_pane_vc_t1

0x5129,	// (0x0002542c) form_field_slider_wide_pane_vc_t2_ParamLimits

0x5129,	// (0x0002542c) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa99,	// (0x0002fd9c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa99,	// (0x0002fd9c) form_field_slider_wide_pane_vc_t

0x199f,	// (0x00021ca2) input_focus_pane_cp10_vc_ParamLimits

0x199f,	// (0x00021ca2) input_focus_pane_cp10_vc

0x5155,	// (0x00025458) slider_cont_pane_cp1_vc_ParamLimits

0x5155,	// (0x00025458) slider_cont_pane_cp1_vc

0x5165,	// (0x00025468) slider_form_pane_g1_cp2

0x4f9b,	// (0x0002529e) slider_form_pane_g2_cp2

0x5192,	// (0x00025495) form_field_slider_pane_vc_t3

0x51a0,	// (0x000254a3) form_field_slider_pane_vc_t4

0x51ae,	// (0x000254b1) slider_form_pane_vc_ParamLimits

0x51ae,	// (0x000254b1) slider_form_pane_vc

0x51bb,	// (0x000254be) form_field_slider_pane_vc_t1_ParamLimits

0x51bb,	// (0x000254be) form_field_slider_pane_vc_t1

0x5129,	// (0x0002542c) form_field_slider_pane_vc_t2_ParamLimits

0x5129,	// (0x0002542c) form_field_slider_pane_vc_t2

0x0001,

0xfaab,	// (0x0002fdae) form_field_slider_pane_vc_t_ParamLimits

0xfaab,	// (0x0002fdae) form_field_slider_pane_vc_t

0x199f,	// (0x00021ca2) input_focus_pane_cp9_vc_ParamLimits

0x199f,	// (0x00021ca2) input_focus_pane_cp9_vc

0x51d7,	// (0x000254da) slider_cont_pane_vc_ParamLimits

0x51d7,	// (0x000254da) slider_cont_pane_vc

0x51e9,	// (0x000254ec) list_form_graphic_pane_cp_vc_ParamLimits

0x51e9,	// (0x000254ec) list_form_graphic_pane_cp_vc

0x34f6,	// (0x000237f9) form_field_popup_wide_pane_vc_g1

0x51fe,	// (0x00025501) form_field_popup_wide_pane_vc_t1_ParamLimits

0x51fe,	// (0x00025501) form_field_popup_wide_pane_vc_t1

0x1f93,	// (0x00022296) input_focus_pane_cp8_vc_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_cp8_vc

0x5243,	// (0x00025546) list_form_wide_pane_vc_ParamLimits

0x5243,	// (0x00025546) list_form_wide_pane_vc

0x524f,	// (0x00025552) list_form_graphic_pane_vc_g1

0x5257,	// (0x0002555a) list_form_graphic_pane_vc_t1_ParamLimits

0x5257,	// (0x0002555a) list_form_graphic_pane_vc_t1

0x1724,	// (0x00021a27) list_highlight_pane_cp5_vc_ParamLimits

0x1724,	// (0x00021a27) list_highlight_pane_cp5_vc

0x5273,	// (0x00025576) list_form_graphic_pane_vc_ParamLimits

0x5273,	// (0x00025576) list_form_graphic_pane_vc

0x34f6,	// (0x000237f9) form_field_popup_pane_vc_g1

0x5289,	// (0x0002558c) form_field_popup_pane_vc_t1_ParamLimits

0x5289,	// (0x0002558c) form_field_popup_pane_vc_t1

0x1f93,	// (0x00022296) input_focus_pane_cp7_vc_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_cp7_vc

0x52a0,	// (0x000255a3) list_form_pane_vc_ParamLimits

0x52a0,	// (0x000255a3) list_form_pane_vc

0x52ac,	// (0x000255af) data_form_pane_vc_t1_ParamLimits

0x52ac,	// (0x000255af) data_form_pane_vc_t1

0x1fe2,	// (0x000222e5) input_focus_pane_vc_g1

0x1fea,	// (0x000222ed) input_focus_pane_vc_g2

0x1ff2,	// (0x000222f5) input_focus_pane_vc_g3

0x1ffa,	// (0x000222fd) input_focus_pane_vc_g4

0x2002,	// (0x00022305) input_focus_pane_vc_g5

0x200a,	// (0x0002230d) input_focus_pane_vc_g6

0x2012,	// (0x00022315) input_focus_pane_vc_g7

0x201a,	// (0x0002231d) input_focus_pane_vc_g8

0x2022,	// (0x00022325) input_focus_pane_vc_g9

0x163a,	// (0x0002193d) input_focus_pane_vc_g10

0x0009,

0xf692,	// (0x0002f995) input_focus_pane_vc_g

0x34ea,	// (0x000237ed) data_form_pane_vc_ParamLimits

0x34ea,	// (0x000237ed) data_form_pane_vc

0x34f6,	// (0x000237f9) form_field_data_pane_vc_g1

0x52c7,	// (0x000255ca) form_field_data_pane_vc_t1_ParamLimits

0x52c7,	// (0x000255ca) form_field_data_pane_vc_t1

0x1f93,	// (0x00022296) input_focus_pane_vc_ParamLimits

0x1f93,	// (0x00022296) input_focus_pane_vc

0x52e1,	// (0x000255e4) button_value_adjust_pane_cp3_vc

0x52e9,	// (0x000255ec) button_value_adjust_pane_cp5_vc

0x52f1,	// (0x000255f4) form_field_data_pane_vc_ParamLimits

0x52f1,	// (0x000255f4) form_field_data_pane_vc

0x5308,	// (0x0002560b) form_field_data_pane_vc_cp2

0x5310,	// (0x00025613) form_field_data_wide_pane_vc_ParamLimits

0x5310,	// (0x00025613) form_field_data_wide_pane_vc

0x5326,	// (0x00025629) form_field_data_wide_pane_vc_cp2

0x532e,	// (0x00025631) form_field_popup_pane_vc_ParamLimits

0x532e,	// (0x00025631) form_field_popup_pane_vc

0x5345,	// (0x00025648) form_field_popup_wide_pane_vc_ParamLimits

0x5345,	// (0x00025648) form_field_popup_wide_pane_vc

0x535b,	// (0x0002565e) form_field_slider_pane_vc_ParamLimits

0x535b,	// (0x0002565e) form_field_slider_pane_vc

0x536e,	// (0x00025671) form_field_slider_wide_pane_vc_ParamLimits

0x536e,	// (0x00025671) form_field_slider_wide_pane_vc

0x5381,	// (0x00025684) grid_touch_1_pane_ParamLimits

0x5381,	// (0x00025684) grid_touch_1_pane

0x538d,	// (0x00025690) grid_touch_2_pane_ParamLimits

0x538d,	// (0x00025690) grid_touch_2_pane

0x2e89,	// (0x0002318c) touch_pane_g1_ParamLimits

0x2e89,	// (0x0002318c) touch_pane_g1

0x53a5,	// (0x000256a8) cell_app_pane_cp_wide_ParamLimits

0x53a5,	// (0x000256a8) cell_app_pane_cp_wide

0x53b6,	// (0x000256b9) grid_popup_fast_wide_pane_ParamLimits

0x53b6,	// (0x000256b9) grid_popup_fast_wide_pane

0x53ca,	// (0x000256cd) scroll_pane_cp19_ParamLimits

0x53ca,	// (0x000256cd) scroll_pane_cp19

0x1644,	// (0x00021947) bg_popup_window_pane_cp20

0x53de,	// (0x000256e1) listscroll_popup_fast_wide_pane

0x1724,	// (0x00021a27) grid_indicator_nsta_pane

0x53e6,	// (0x000256e9) clock_nsta_pane_g1

0x53ef,	// (0x000256f2) clock_nsta_pane_t1

0x540b,	// (0x0002570e) cell_indicator_nsta_pane_ParamLimits

0x540b,	// (0x0002570e) cell_indicator_nsta_pane

0x5443,	// (0x00025746) cell_indicator_nsta_pane_g1

0x5451,	// (0x00025754) cell_indicator_nsta_pane_g2

0x0001,

0xfabc,	// (0x0002fdbf) cell_indicator_nsta_pane_g

0x5467,	// (0x0002576a) clock_nsta_pane_cp

0x546f,	// (0x00025772) indicator_nsta_pane_cp

0x5477,	// (0x0002577a) nsta_clock_indic_pane_g1

0x17ed,	// (0x00021af0) grid_indicator_pane

0x2513,	// (0x00022816) scroll_pane_cp29

0xbd8a,	// (0x0002c08d) indicator_nsta_pane_cp2_ParamLimits

0xbd8a,	// (0x0002c08d) indicator_nsta_pane_cp2

0x1724,	// (0x00021a27) main_apps_wheel_pane

0x3721,	// (0x00023a24) form_midp_field_text_pane_ParamLimits

0x3868,	// (0x00023b6b) scroll_bar_cp050_ParamLimits

0x54d8,	// (0x000257db) cell_indicator_pane_ParamLimits

0x54d8,	// (0x000257db) cell_indicator_pane

0x54f3,	// (0x000257f6) cell_indicator_pane_g1

0x54fd,	// (0x00025800) grid_wheel_folder_pane_ParamLimits

0x54fd,	// (0x00025800) grid_wheel_folder_pane

0x5513,	// (0x00025816) list_wheel_apps_pane_ParamLimits

0x5513,	// (0x00025816) list_wheel_apps_pane

0x5524,	// (0x00025827) main_apps_wheel_pane_g1_ParamLimits

0x5524,	// (0x00025827) main_apps_wheel_pane_g1

0x5538,	// (0x0002583b) main_apps_wheel_pane_g2_ParamLimits

0x5538,	// (0x0002583b) main_apps_wheel_pane_g2

0x0001,

0xfad8,	// (0x0002fddb) main_apps_wheel_pane_g_ParamLimits

0xfad8,	// (0x0002fddb) main_apps_wheel_pane_g

0x5550,	// (0x00025853) main_apps_wheel_pane_t1_ParamLimits

0x5550,	// (0x00025853) main_apps_wheel_pane_t1

0x5573,	// (0x00025876) list_wheel_apps_pane_g1

0x557b,	// (0x0002587e) list_wheel_apps_pane_g2

0x5583,	// (0x00025886) list_wheel_apps_pane_g3

0x558d,	// (0x00025890) list_wheel_apps_pane_g4

0x5597,	// (0x0002589a) list_wheel_apps_pane_g5

0x0004,

0xfadd,	// (0x0002fde0) list_wheel_apps_pane_g

0x2a5c,	// (0x00022d5f) navi_icon_text_pane

0x2f2e,	// (0x00023231) aid_fill_nsta

0x55ba,	// (0x000258bd) navi_icon_text_pane_g1

0x55c6,	// (0x000258c9) navi_icon_text_pane_t1

0x28fe,	// (0x00022c01) list_set_graphic_pane_t1_ParamLimits

0x28fe,	// (0x00022c01) list_set_graphic_pane_t1

0x3fba,	// (0x000242bd) popup_midp_note_alarm_window_t6_ParamLimits

0x3fba,	// (0x000242bd) popup_midp_note_alarm_window_t6

0x3fcc,	// (0x000242cf) popup_midp_note_alarm_window_t7_ParamLimits

0x3fcc,	// (0x000242cf) popup_midp_note_alarm_window_t7

0x3fde,	// (0x000242e1) popup_midp_note_alarm_window_t8_ParamLimits

0x3fde,	// (0x000242e1) popup_midp_note_alarm_window_t8

0x3ff0,	// (0x000242f3) popup_midp_note_alarm_window_t9_ParamLimits

0x3ff0,	// (0x000242f3) popup_midp_note_alarm_window_t9

0x4002,	// (0x00024305) popup_midp_note_alarm_window_t10_ParamLimits

0x4002,	// (0x00024305) popup_midp_note_alarm_window_t10

0x4014,	// (0x00024317) popup_midp_note_alarm_window_t11_ParamLimits

0x4014,	// (0x00024317) popup_midp_note_alarm_window_t11

0x4026,	// (0x00024329) scroll_pane_cp17_ParamLimits

0x4026,	// (0x00024329) scroll_pane_cp17

0xc78f,	// (0x0002ca92) volume_small_pane_cp_g1

0xcac6,	// (0x0002cdc9) volume_small_pane_cp_g2

0xcacf,	// (0x0002cdd2) volume_small_pane_cp_g3

0xc7a1,	// (0x0002caa4) volume_small_pane_cp_g4

0xcad8,	// (0x0002cddb) volume_small_pane_cp_g5

0xca99,	// (0x0002cd9c) volume_small_pane_cp_g6

0xc7b3,	// (0x0002cab6) volume_small_pane_cp_g7

0xcae1,	// (0x0002cde4) volume_small_pane_cp_g8

0xcaea,	// (0x0002cded) volume_small_pane_cp_g9

0xc7c5,	// (0x0002cac8) volume_small_pane_cp_g10

0x2ca3,	// (0x00022fa6) midp_ticker_pane_g1_ParamLimits

0x2caf,	// (0x00022fb2) midp_ticker_pane_g2_ParamLimits

0xf75e,	// (0x0002fa61) midp_ticker_pane_g_ParamLimits

0x2cbb,	// (0x00022fbe) midp_ticker_pane_t1_ParamLimits

0x2f44,	// (0x00023247) aid_fill_nsta_2

0x3854,	// (0x00023b57) list_form2_midp_pane

0x498a,	// (0x00024c8d) midp_editing_number_pane_ParamLimits

0x4999,	// (0x00024c9c) midp_ticker_pane_ParamLimits

0x55d8,	// (0x000258db) form2_midp_field_pane

0x55fc,	// (0x000258ff) scroll_pane_cp51

0x561c,	// (0x0002591f) form2_midp_button_pane_ParamLimits

0x561c,	// (0x0002591f) form2_midp_button_pane

0x562e,	// (0x00025931) form2_midp_content_pane_ParamLimits

0x562e,	// (0x00025931) form2_midp_content_pane

0x5648,	// (0x0002594b) form2_midp_field_choice_group_pane

0x5650,	// (0x00025953) form2_midp_field_pane_g1

0x5658,	// (0x0002595b) form2_midp_field_pane_g2

0x5660,	// (0x00025963) form2_midp_field_pane_g3

0x5668,	// (0x0002596b) form2_midp_field_pane_g4

0x0003,

0xfb02,	// (0x0002fe05) form2_midp_field_pane_g

0x5670,	// (0x00025973) form2_midp_gauge_slider_pane

0x5678,	// (0x0002597b) form2_midp_gauge_wait_pane

0x5680,	// (0x00025983) form2_midp_image_pane_ParamLimits

0x5680,	// (0x00025983) form2_midp_image_pane

0x569b,	// (0x0002599e) form2_midp_label_pane_ParamLimits

0x569b,	// (0x0002599e) form2_midp_label_pane

0x56b4,	// (0x000259b7) form2_midp_label_pane_cp_ParamLimits

0x56b4,	// (0x000259b7) form2_midp_label_pane_cp

0x56d5,	// (0x000259d8) form2_midp_string_pane_ParamLimits

0x56d5,	// (0x000259d8) form2_midp_string_pane

0xf167,	// (0x0002f46a) form2_midp_text_pane_ParamLimits

0xf167,	// (0x0002f46a) form2_midp_text_pane

0x56e7,	// (0x000259ea) form2_midp_time_pane

0x56f7,	// (0x000259fa) input_focus_pane_cp51_ParamLimits

0x56f7,	// (0x000259fa) input_focus_pane_cp51

0x570f,	// (0x00025a12) form2_midp_label_pane_t1_ParamLimits

0x570f,	// (0x00025a12) form2_midp_label_pane_t1

0xf180,	// (0x0002f483) form2_mdip_text_pane_t1_ParamLimits

0xf180,	// (0x0002f483) form2_mdip_text_pane_t1

0xf19e,	// (0x0002f4a1) form2_midp_time_pane_t1

0x5757,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1

0x5769,	// (0x00025a6c) form2_midp_gauge_slider_pane_t2

0x577b,	// (0x00025a7e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfb0b,	// (0x0002fe0e) form2_midp_gauge_slider_pane_t

0x578d,	// (0x00025a90) form2_midp_slider_pane

0x5799,	// (0x00025a9c) form2_midp_gauge_wait_pane_t1

0x57a7,	// (0x00025aaa) form2_midp_wait_pane_ParamLimits

0x57a7,	// (0x00025aaa) form2_midp_wait_pane

0x57d3,	// (0x00025ad6) list_single_2graphic_pane_cp4_ParamLimits

0x57d3,	// (0x00025ad6) list_single_2graphic_pane_cp4

0x3565,	// (0x00023868) list_single_midp_graphic_pane_cp_ParamLimits

0x3565,	// (0x00023868) list_single_midp_graphic_pane_cp

0x1644,	// (0x00021947) list_highlight_pane_cp20

0x5801,	// (0x00025b04) list_single_2graphic_pane_g1_cp4

0x4de4,	// (0x000250e7) list_single_2graphic_pane_g2_cp4

0x5809,	// (0x00025b0c) list_single_2graphic_pane_t1_cp4

0x1724,	// (0x00021a27) list_highlight_pane_cp21

0x5818,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp

0x5827,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp

0x583c,	// (0x00025b3f) form2_mdip_string_pane_t1_ParamLimits

0x583c,	// (0x00025b3f) form2_mdip_string_pane_t1

0x1644,	// (0x00021947) bg_wml_button_pane_cp2

0x163a,	// (0x0002193d) form2_midp_image_pane_g1

0xe771,	// (0x0002ea74) list_double_large_graphic_pane_g5_ParamLimits

0xe771,	// (0x0002ea74) list_double_large_graphic_pane_g5

0x2169,	// (0x0002246c) midp_form_pane_ParamLimits

0x1724,	// (0x00021a27) main_apps_wheel_pane_ParamLimits

0xc443,	// (0x0002c746) popup_preview_window_ParamLimits

0xc443,	// (0x0002c746) popup_preview_window

0xc5fa,	// (0x0002c8fd) popup_touch_info_window_ParamLimits

0xc5fa,	// (0x0002c8fd) popup_touch_info_window

0xc618,	// (0x0002c91b) popup_touch_menu_window_ParamLimits

0xc618,	// (0x0002c91b) popup_touch_menu_window

0x1630,	// (0x00021933) bg_popup_sub_pane_cp6

0x595f,	// (0x00025c62) list_touch_menu_pane

0x5967,	// (0x00025c6a) list_single_touch_menu_pane_ParamLimits

0x5967,	// (0x00025c6a) list_single_touch_menu_pane

0x597b,	// (0x00025c7e) list_single_touch_menu_pane_t1

0x1724,	// (0x00021a27) bg_popup_sub_pane_cp7_ParamLimits

0x1724,	// (0x00021a27) bg_popup_sub_pane_cp7

0x5989,	// (0x00025c8c) heading_sub_pane

0x5991,	// (0x00025c94) list_touch_info_pane_ParamLimits

0x5991,	// (0x00025c94) list_touch_info_pane

0x59a0,	// (0x00025ca3) list_single_touch_info_pane_ParamLimits

0x59a0,	// (0x00025ca3) list_single_touch_info_pane

0x59b2,	// (0x00025cb5) list_single_touch_info_pane_t1

0x59c0,	// (0x00025cc3) list_single_touch_info_pane_t2

0x0001,

0xfb19,	// (0x0002fe1c) list_single_touch_info_pane_t

0x2bd0,	// (0x00022ed3) bg_popup_heading_pane_cp

0x59ce,	// (0x00025cd1) heading_sub_pane_t1

0x3484,	// (0x00023787) bg_popup_preview_window_pane_cp_ParamLimits

0x3484,	// (0x00023787) bg_popup_preview_window_pane_cp

0x5989,	// (0x00025c8c) heading_preview_pane

0x5991,	// (0x00025c94) list_preview_pane_ParamLimits

0x5991,	// (0x00025c94) list_preview_pane

0x59dc,	// (0x00025cdf) popup_preview_window_g1

0x59a0,	// (0x00025ca3) list_single_preview_pane_ParamLimits

0x59a0,	// (0x00025ca3) list_single_preview_pane

0x59e4,	// (0x00025ce7) list_single_preview_pane_g1

0x59ec,	// (0x00025cef) list_single_preview_pane_t1

0x59b2,	// (0x00025cb5) list_single_preview_pane_t2

0x0001,

0xfb1e,	// (0x0002fe21) list_single_preview_pane_t

0x59fa,	// (0x00025cfd) bg_popup_heading_pane_cp2_ParamLimits

0x59fa,	// (0x00025cfd) bg_popup_heading_pane_cp2

0x5a10,	// (0x00025d13) heading_preview_pane_g1

0x5a18,	// (0x00025d1b) heading_preview_pane_t1_ParamLimits

0x5a18,	// (0x00025d1b) heading_preview_pane_t1

0x1810,	// (0x00021b13) soft_indicator_pane_t1_ParamLimits

0x1eee,	// (0x000221f1) scroll_pane_ParamLimits

0x2415,	// (0x00022718) scroll_sc2_left_pane

0x240c,	// (0x0002270f) scroll_sc2_right_pane

0x2434,	// (0x00022737) scroll_bg_pane_g1_ParamLimits

0x2449,	// (0x0002274c) scroll_bg_pane_g2_ParamLimits

0x2461,	// (0x00022764) scroll_bg_pane_g3_ParamLimits

0xf6e9,	// (0x0002f9ec) scroll_bg_pane_g_ParamLimits

0x2434,	// (0x00022737) scroll_handle_pane_g1_ParamLimits

0x2483,	// (0x00022786) scroll_handle_pane_g2_ParamLimits

0x2461,	// (0x00022764) scroll_handle_pane_g3_ParamLimits

0xf6f0,	// (0x0002f9f3) scroll_handle_pane_g_ParamLimits

0xc0ca,	// (0x0002c3cd) popup_choice_list_window_ParamLimits

0xc0ca,	// (0x0002c3cd) popup_choice_list_window

0x335a,	// (0x0002365d) choice_list_pane

0x33dc,	// (0x000236df) cell_toolbar_pane_t1

0x3404,	// (0x00023707) toolbar_button_pane_ParamLimits

0x44e0,	// (0x000247e3) ai_gene_pane_1_t2_ParamLimits

0x44e0,	// (0x000247e3) ai_gene_pane_1_t2

0x0001,

0xf918,	// (0x0002fc1b) ai_gene_pane_1_t_ParamLimits

0xf918,	// (0x0002fc1b) ai_gene_pane_1_t

0x5a35,	// (0x00025d38) scroll_sc2_left_pane_g1

0x5a35,	// (0x00025d38) scroll_sc2_right_pane_g1

0x2f0c,	// (0x0002320f) bg_popup_sub_pane_cp10

0x5a3f,	// (0x00025d42) list_choice_list_pane

0x5a58,	// (0x00025d5b) list_single_choice_list_pane_ParamLimits

0x5a58,	// (0x00025d5b) list_single_choice_list_pane

0x5a6b,	// (0x00025d6e) list_single_choice_list_pane_g1

0x2119,	// (0x0002241c) list_single_choice_list_pane_t1_ParamLimits

0x2119,	// (0x0002241c) list_single_choice_list_pane_t1

0x5a73,	// (0x00025d76) choice_list_pane_g1

0x5a7b,	// (0x00025d7e) choice_list_pane_t1

0x1630,	// (0x00021933) input_focus_pane_cp11

0x22ed,	// (0x000225f0) title_pane_stacon_g2_ParamLimits

0x22ed,	// (0x000225f0) title_pane_stacon_g2

0x0002,

0xf6cf,	// (0x0002f9d2) title_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0002f9d2) title_pane_stacon_g

0x2bd0,	// (0x00022ed3) cursor_press_pane

0xc172,	// (0x0002c475) popup_fep_hwr_window_ParamLimits

0xc172,	// (0x0002c475) popup_fep_hwr_window

0xc1ea,	// (0x0002c4ed) popup_fep_vkb_window_ParamLimits

0xc1ea,	// (0x0002c4ed) popup_fep_vkb_window

0x5a89,	// (0x00025d8c) cursor_press_pane_g1

0x0002,

0xfb47,	// (0x0002fe4a) fep_vkb_side_pane_g_ParamLimits

0xcb2c,	// (0x0002ce2f) fep_hwr_candidate_pane_ParamLimits

0xcb2c,	// (0x0002ce2f) fep_hwr_candidate_pane

0xcb56,	// (0x0002ce59) fep_hwr_side_pane_ParamLimits

0xcb56,	// (0x0002ce59) fep_hwr_side_pane

0xcb76,	// (0x0002ce79) fep_hwr_top_pane_ParamLimits

0xcb76,	// (0x0002ce79) fep_hwr_top_pane

0xcb8e,	// (0x0002ce91) fep_hwr_write_pane_ParamLimits

0xcb8e,	// (0x0002ce91) fep_hwr_write_pane

0xfb47,	// (0x0002fe4a) fep_vkb_side_pane_g

0x5aa3,	// (0x00025da6) fep_hwr_top_pane_g1

0x5a91,	// (0x00025d94) fep_hwr_top_pane_g2

0xcbc8,	// (0x0002cecb) fep_hwr_top_pane_g3

0x0002,

0xfb23,	// (0x0002fe26) fep_hwr_top_pane_g

0xcbdd,	// (0x0002cee0) fep_hwr_top_text_pane

0x25d9,	// (0x000228dc) fep_hwr_top_text_pane_g1

0x5ad9,	// (0x00025ddc) fep_hwr_top_text_pane_t1

0xccd3,	// (0x0002cfd6) fep_hwr_candidate_pane_g1

0x5d1c,	// (0x0002601f) fep_vkb_keypad_pane_g3_ParamLimits

0x5d1c,	// (0x0002601f) fep_vkb_keypad_pane_g3

0x5d44,	// (0x00026047) fep_vkb_keypad_pane_g4_ParamLimits

0x5d44,	// (0x00026047) fep_vkb_keypad_pane_g4

0x5db3,	// (0x000260b6) fep_vkb_bottom_pane_g2_ParamLimits

0x5db3,	// (0x000260b6) fep_vkb_bottom_pane_g2

0x0001,

0xfb4e,	// (0x0002fe51) fep_vkb_bottom_pane_g_ParamLimits

0xfb4e,	// (0x0002fe51) fep_vkb_bottom_pane_g

0x5a35,	// (0x00025d38) cell_vkb_side_pane_g2

0x0001,

0xfb58,	// (0x0002fe5b) cell_vkb_side_pane_g

0x5e3e,	// (0x00026141) cell_vkb_side_pane_t1

0x5e4c,	// (0x0002614f) cell_vkb_side_pane_t1_copy1

0x5a35,	// (0x00025d38) bg_fep_vkb_candidate_pane_g2

0x5f78,	// (0x0002627b) cell_vkb_candidate_pane_ParamLimits

0x5ae7,	// (0x00025dea) aid_size_cell_vkb_ParamLimits

0x5ae7,	// (0x00025dea) aid_size_cell_vkb

0x5f78,	// (0x0002627b) cell_vkb_candidate_pane

0xccfa,	// (0x0002cffd) bg_popup_fep_shadow_pane_g1

0x5b73,	// (0x00025e76) fep_vkb_bottom_pane_ParamLimits

0x5b73,	// (0x00025e76) fep_vkb_bottom_pane

0x5ba9,	// (0x00025eac) fep_vkb_candidate_pane_ParamLimits

0x5ba9,	// (0x00025eac) fep_vkb_candidate_pane

0x5bc5,	// (0x00025ec8) fep_vkb_keypad_pane_ParamLimits

0x5bc5,	// (0x00025ec8) fep_vkb_keypad_pane

0x5c04,	// (0x00025f07) fep_vkb_side_pane_ParamLimits

0x5c04,	// (0x00025f07) fep_vkb_side_pane

0x5c40,	// (0x00025f43) fep_vkb_top_pane_ParamLimits

0x5c40,	// (0x00025f43) fep_vkb_top_pane

0x5c75,	// (0x00025f78) fep_vkb_top_pane_g1_ParamLimits

0x5c75,	// (0x00025f78) fep_vkb_top_pane_g1

0x5c84,	// (0x00025f87) fep_vkb_top_pane_g2_ParamLimits

0x5c84,	// (0x00025f87) fep_vkb_top_pane_g2

0x5c93,	// (0x00025f96) fep_vkb_top_pane_g3_ParamLimits

0x5c93,	// (0x00025f96) fep_vkb_top_pane_g3

0x0003,

0xfb3e,	// (0x0002fe41) fep_vkb_top_pane_g_ParamLimits

0xfb3e,	// (0x0002fe41) fep_vkb_top_pane_g

0x5cb1,	// (0x00025fb4) fep_vkb_top_text_pane_ParamLimits

0x5cb1,	// (0x00025fb4) fep_vkb_top_text_pane

0x5cc2,	// (0x00025fc5) fep_vkb_side_pane_g1_ParamLimits

0x5cc2,	// (0x00025fc5) fep_vkb_side_pane_g1

0x5d0b,	// (0x0002600e) grid_vkb_side_pane_ParamLimits

0x5d0b,	// (0x0002600e) grid_vkb_side_pane

0xcd02,	// (0x0002d005) bg_popup_fep_shadow_pane_g2

0xcd0b,	// (0x0002d00e) bg_popup_fep_shadow_pane_g3

0xcd13,	// (0x0002d016) bg_popup_fep_shadow_pane_g4

0xcd1c,	// (0x0002d01f) bg_popup_fep_shadow_pane_g5

0xcd26,	// (0x0002d029) bg_popup_fep_shadow_pane_g6

0xcd2e,	// (0x0002d031) bg_popup_fep_shadow_pane_g7

0x1ffa,	// (0x000222fd) bg_popup_fep_shadow_pane_g8

0x5d62,	// (0x00026065) grid_vkb_keypad_number_pane_ParamLimits

0x5d62,	// (0x00026065) grid_vkb_keypad_number_pane

0x5d72,	// (0x00026075) grid_vkb_keypad_pane_ParamLimits

0x5d72,	// (0x00026075) grid_vkb_keypad_pane

0x5d98,	// (0x0002609b) fep_vkb_bottom_pane_g1_ParamLimits

0x5d98,	// (0x0002609b) fep_vkb_bottom_pane_g1

0x5dc1,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x5dc1,	// (0x000260c4) grid_vkb_keypad_bottom_left_pane

0x5dd6,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x5dd6,	// (0x000260d9) grid_vkb_keypad_bottom_right_pane

0x5deb,	// (0x000260ee) fep_vkb_top_text_pane_g1

0x5e06,	// (0x00026109) fep_vkb_top_text_pane_t1

0x5e1b,	// (0x0002611e) cell_vkb_side_pane_ParamLimits

0x5e1b,	// (0x0002611e) cell_vkb_side_pane

0x5a35,	// (0x00025d38) cell_vkb_side_pane_g1

0x5e5a,	// (0x0002615d) cell_vkb_keypad_pane_ParamLimits

0x5e5a,	// (0x0002615d) cell_vkb_keypad_pane

0x5ecf,	// (0x000261d2) cell_vkb_keypad_pane_g1

0x0008,

0xfb6b,	// (0x0002fe6e) bg_popup_fep_shadow_pane_g

0xcd40,	// (0x0002d043) cell_hwr_side_pane_g1

0xcd40,	// (0x0002d043) cell_hwr_side_pane_g2

0x5ed9,	// (0x000261dc) cell_vkb_keypad_pane_t1

0x5ee7,	// (0x000261ea) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x5ee7,	// (0x000261ea) cell_vkb_keypad_bottom_left_pane

0x5f04,	// (0x00026207) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x5f04,	// (0x00026207) cell_vkb_keypad_bottom_right_pane

0x5a35,	// (0x00025d38) cell_vkb_keypad_bottom_left_pane_g1

0x5a35,	// (0x00025d38) cell_vkb_keypad_bottom_right_pane_g1

0x5f3d,	// (0x00026240) cell_vkb_keypad_number_pane_ParamLimits

0x5f3d,	// (0x00026240) cell_vkb_keypad_number_pane

0x5f5c,	// (0x0002625f) cell_vkb_keypad_number_pane_g1

0x5f66,	// (0x00026269) cell_vkb_keypad_number_pane_g2

0x5f6f,	// (0x00026272) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb5d,	// (0x0002fe60) cell_vkb_keypad_number_pane_g

0x5ed9,	// (0x000261dc) cell_vkb_keypad_number_pane_t1

0x5f93,	// (0x00026296) fep_vkb_candidate_pane_g1

0x0001,

0xfb7e,	// (0x0002fe81) cell_hwr_side_pane_g

0x5fac,	// (0x000262af) cell_hwr_side_pane_t1

0xcd4a,	// (0x0002d04d) cell_hwr_side_pane_t1_copy1

0xcd58,	// (0x0002d05b) cell_hwr_candidate_pane_g1

0xcd87,	// (0x0002d08a) cell_hwr_candidate_pane_t1

0x5a35,	// (0x00025d38) cell_vkb_candidate_pane_g2

0x5ff0,	// (0x000262f3) cell_vkb_candidate_pane_t1

0xcaf3,	// (0x0002cdf6) bg_popup_fep_shadow_pane_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_popup_fep_shadow_pane

0xcba8,	// (0x0002ceab) bg_fep_hwr_top_pane_g4

0x5ab5,	// (0x00025db8) bg_hwr_side_pane_g1_ParamLimits

0x5ab5,	// (0x00025db8) bg_hwr_side_pane_g1

0xcc19,	// (0x0002cf1c) cell_hwr_side_pane_ParamLimits

0xcc19,	// (0x0002cf1c) cell_hwr_side_pane

0xcc54,	// (0x0002cf57) fep_hwr_write_pane_g1_ParamLimits

0xcc54,	// (0x0002cf57) fep_hwr_write_pane_g1

0xcc61,	// (0x0002cf64) fep_hwr_write_pane_g2_ParamLimits

0xcc61,	// (0x0002cf64) fep_hwr_write_pane_g2

0xcc6e,	// (0x0002cf71) fep_hwr_write_pane_g3_ParamLimits

0xcc6e,	// (0x0002cf71) fep_hwr_write_pane_g3

0xcc7c,	// (0x0002cf7f) fep_hwr_write_pane_g4_ParamLimits

0xcc7c,	// (0x0002cf7f) fep_hwr_write_pane_g4

0x0005,

0xfb2a,	// (0x0002fe2d) fep_hwr_write_pane_g_ParamLimits

0xfb2a,	// (0x0002fe2d) fep_hwr_write_pane_g

0xcba8,	// (0x0002ceab) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xcba8,	// (0x0002ceab) bg_fep_hwr_candidate_pane_g2

0xcc91,	// (0x0002cf94) cell_hwr_candidate_pane_ParamLimits

0xcc91,	// (0x0002cf94) cell_hwr_candidate_pane

0xccd3,	// (0x0002cfd6) fep_hwr_candidate_pane_g1_ParamLimits

0x5b15,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x5b15,	// (0x00025e18) bg_popup_fep_shadow_pane_cp2

0x5ca3,	// (0x00025fa6) fep_vkb_top_pane_g4_ParamLimits

0x5ca3,	// (0x00025fa6) fep_vkb_top_pane_g4

0x5ce9,	// (0x00025fec) fep_vkb_side_pane_g2_ParamLimits

0x5ce9,	// (0x00025fec) fep_vkb_side_pane_g2

0xe8af,	// (0x0002ebb2) list_setting_pane_t4_ParamLimits

0xe8af,	// (0x0002ebb2) list_setting_pane_t4

0xe941,	// (0x0002ec44) list_setting_number_pane_t5_ParamLimits

0xe941,	// (0x0002ec44) list_setting_number_pane_t5

0x2620,	// (0x00022923) list_double_heading_pane_cp2_ParamLimits

0x2620,	// (0x00022923) list_double_heading_pane_cp2

0x1f6f,	// (0x00022272) list_double_heading_pane_g1_cp2_ParamLimits

0x1f6f,	// (0x00022272) list_double_heading_pane_g1_cp2

0x1fa1,	// (0x000222a4) list_double_heading_pane_g2_cp2_ParamLimits

0x1fa1,	// (0x000222a4) list_double_heading_pane_g2_cp2

0x5ffe,	// (0x00026301) list_double_heading_pane_t1_cp2_ParamLimits

0x5ffe,	// (0x00026301) list_double_heading_pane_t1_cp2

0x6014,	// (0x00026317) list_double_heading_pane_t2_cp2_ParamLimits

0x6014,	// (0x00026317) list_double_heading_pane_t2_cp2

0x1618,	// (0x0002191b) aid_value_unit2

0xb92b,	// (0x0002bc2e) popup_preview_fixed_window

0x19ad,	// (0x00021cb0) bg_popup_preview_window_pane_cp02

0x6026,	// (0x00026329) list_preview_fixed_pane

0x606c,	// (0x0002636f) list_empty_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_empty_pane_fp

0x606c,	// (0x0002636f) list_single_cale_day_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_cale_day_pane_fp

0x606c,	// (0x0002636f) list_single_graphic_heading_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_graphic_heading_pane_fp

0x606c,	// (0x0002636f) list_single_graphic_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_graphic_pane_fp

0x606c,	// (0x0002636f) list_single_heading_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_heading_pane_fp

0x606c,	// (0x0002636f) list_single_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_pane_fp

0x6082,	// (0x00026385) list_single_pane_fp_g1_ParamLimits

0x6082,	// (0x00026385) list_single_pane_fp_g1

0xe5d4,	// (0x0002e8d7) list_single_pane_fp_g2_ParamLimits

0xe5d4,	// (0x0002e8d7) list_single_pane_fp_g2

0xf1b1,	// (0x0002f4b4) list_single_pane_fp_g3_ParamLimits

0xf1b1,	// (0x0002f4b4) list_single_pane_fp_g3

0x608e,	// (0x00026391) list_single_pane_fp_g4_ParamLimits

0x608e,	// (0x00026391) list_single_pane_fp_g4

0x0003,

0xfb91,	// (0x0002fe94) list_single_pane_fp_g_ParamLimits

0xfb91,	// (0x0002fe94) list_single_pane_fp_g

0xf1c5,	// (0x0002f4c8) list_single_pane_fp_t1_ParamLimits

0xf1c5,	// (0x0002f4c8) list_single_pane_fp_t1

0xf1dc,	// (0x0002f4df) list_single_graphic_pane_fp_g1_ParamLimits

0xf1dc,	// (0x0002f4df) list_single_graphic_pane_fp_g1

0x6082,	// (0x00026385) list_single_graphic_pane_fp_g2_ParamLimits

0x6082,	// (0x00026385) list_single_graphic_pane_fp_g2

0xe5d4,	// (0x0002e8d7) list_single_graphic_pane_fp_g3_ParamLimits

0xe5d4,	// (0x0002e8d7) list_single_graphic_pane_fp_g3

0xf1b1,	// (0x0002f4b4) list_single_graphic_pane_fp_g4_ParamLimits

0xf1b1,	// (0x0002f4b4) list_single_graphic_pane_fp_g4

0x608e,	// (0x00026391) list_single_graphic_pane_fp_g5_ParamLimits

0x608e,	// (0x00026391) list_single_graphic_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002fe9d) list_single_graphic_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002fe9d) list_single_graphic_pane_fp_g

0xf1e8,	// (0x0002f4eb) list_single_graphic_pane_fp_t1_ParamLimits

0xf1e8,	// (0x0002f4eb) list_single_graphic_pane_fp_t1

0xf1dc,	// (0x0002f4df) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xf1dc,	// (0x0002f4df) list_single_graphic_heading_pane_fp_g1

0x6082,	// (0x00026385) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6082,	// (0x00026385) list_single_graphic_heading_pane_fp_g2

0xe5d4,	// (0x0002e8d7) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe5d4,	// (0x0002e8d7) list_single_graphic_heading_pane_fp_g3

0xf1b1,	// (0x0002f4b4) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xf1b1,	// (0x0002f4b4) list_single_graphic_heading_pane_fp_g4

0x608e,	// (0x00026391) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x608e,	// (0x00026391) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002fe9d) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002fe9d) list_single_graphic_heading_pane_fp_g

0xf1fe,	// (0x0002f501) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xf1fe,	// (0x0002f501) list_single_graphic_heading_pane_fp_t1

0xf214,	// (0x0002f517) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xf214,	// (0x0002f517) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfba5,	// (0x0002fea8) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfba5,	// (0x0002fea8) list_single_graphic_heading_pane_fp_t

0xf226,	// (0x0002f529) list_single_cale_day_pane_fp_g1_ParamLimits

0xf226,	// (0x0002f529) list_single_cale_day_pane_fp_g1

0x609a,	// (0x0002639d) list_single_cale_day_pane_fp_g2_ParamLimits

0x609a,	// (0x0002639d) list_single_cale_day_pane_fp_g2

0xf25e,	// (0x0002f561) list_single_cale_day_pane_fp_g3_ParamLimits

0xf25e,	// (0x0002f561) list_single_cale_day_pane_fp_g3

0xf286,	// (0x0002f589) list_single_cale_day_pane_fp_g4_ParamLimits

0xf286,	// (0x0002f589) list_single_cale_day_pane_fp_g4

0xf2aa,	// (0x0002f5ad) list_single_cale_day_pane_fp_g5_ParamLimits

0xf2aa,	// (0x0002f5ad) list_single_cale_day_pane_fp_g5

0x0004,

0xfbaa,	// (0x0002fead) list_single_cale_day_pane_fp_g_ParamLimits

0xfbaa,	// (0x0002fead) list_single_cale_day_pane_fp_g

0xf2ce,	// (0x0002f5d1) list_single_cale_day_pane_fp_t1_ParamLimits

0xf2ce,	// (0x0002f5d1) list_single_cale_day_pane_fp_t1

0xf2f4,	// (0x0002f5f7) list_single_cale_day_pane_fp_t2_ParamLimits

0xf2f4,	// (0x0002f5f7) list_single_cale_day_pane_fp_t2

0xf30d,	// (0x0002f610) list_single_cale_day_pane_fp_t3_ParamLimits

0xf30d,	// (0x0002f610) list_single_cale_day_pane_fp_t3

0x0002,

0xfbb5,	// (0x0002feb8) list_single_cale_day_pane_fp_t_ParamLimits

0xfbb5,	// (0x0002feb8) list_single_cale_day_pane_fp_t

0x6082,	// (0x00026385) list_empty_pane_fp_g1_ParamLimits

0x6082,	// (0x00026385) list_empty_pane_fp_g1

0xf326,	// (0x0002f629) list_empty_pane_fp_t1

0xf334,	// (0x0002f637) list_empty_pane_fp_t2

0x0001,

0xfbbc,	// (0x0002febf) list_empty_pane_fp_t

0x6082,	// (0x00026385) list_single_heading_pane_fp_g1_ParamLimits

0x6082,	// (0x00026385) list_single_heading_pane_fp_g1

0xe5d4,	// (0x0002e8d7) list_single_heading_pane_fp_g2_ParamLimits

0xe5d4,	// (0x0002e8d7) list_single_heading_pane_fp_g2

0xf1b1,	// (0x0002f4b4) list_single_heading_pane_fp_g3_ParamLimits

0xf1b1,	// (0x0002f4b4) list_single_heading_pane_fp_g3

0x0002,

0xfbc1,	// (0x0002fec4) list_single_heading_pane_fp_g_ParamLimits

0xfbc1,	// (0x0002fec4) list_single_heading_pane_fp_g

0xf342,	// (0x0002f645) list_single_heading_pane_fp_t1_ParamLimits

0xf342,	// (0x0002f645) list_single_heading_pane_fp_t1

0xf354,	// (0x0002f657) list_single_heading_pane_fp_t2_ParamLimits

0xf354,	// (0x0002f657) list_single_heading_pane_fp_t2

0x0001,

0xfbc8,	// (0x0002fecb) list_single_heading_pane_fp_t_ParamLimits

0xfbc8,	// (0x0002fecb) list_single_heading_pane_fp_t

0x2187,	// (0x0002248a) aid_size_cell_fast

0x191d,	// (0x00021c20) soft_indicator_pane_cp1_t1

0x21c1,	// (0x000224c4) cell_app_pane_cp2_ParamLimits

0x21c1,	// (0x000224c4) cell_app_pane_cp2

0xcb15,	// (0x0002ce18) fep_hwr_candidate_drop_down_list_pane

0xcced,	// (0x0002cff0) fep_hwr_candidate_pane_g3_ParamLimits

0xcced,	// (0x0002cff0) fep_hwr_candidate_pane_g3

0x9469,	// (0x0002976c) fep_hwr_candidate_pane_g4_ParamLimits

0x9469,	// (0x0002976c) fep_hwr_candidate_pane_g4

0x0002,

0xfb37,	// (0x0002fe3a) fep_hwr_candidate_pane_g_ParamLimits

0xfb37,	// (0x0002fe3a) fep_hwr_candidate_pane_g

0x5b98,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x5b98,	// (0x00025e9b) fep_vkb_candidate_drop_down_list_pane

0x5f9b,	// (0x0002629e) fep_vkb_candidate_pane_g3

0x5fa3,	// (0x000262a6) fep_vkb_candidate_pane_g4

0x0002,

0xfb64,	// (0x0002fe67) fep_vkb_candidate_pane_g

0xcd58,	// (0x0002d05b) cell_hwr_candidate_pane_g1_ParamLimits

0xcd66,	// (0x0002d069) cell_hwr_candidate_pane_g3_ParamLimits

0xcd66,	// (0x0002d069) cell_hwr_candidate_pane_g3

0x9aa4,	// (0x00029da7) cell_hwr_candidate_pane_g4_ParamLimits

0x9aa4,	// (0x00029da7) cell_hwr_candidate_pane_g4

0x0002,

0xfb83,	// (0x0002fe86) cell_hwr_candidate_pane_g_ParamLimits

0xfb83,	// (0x0002fe86) cell_hwr_candidate_pane_g

0x5fba,	// (0x000262bd) cell_vkb_candidate_pane_g3_ParamLimits

0x5fba,	// (0x000262bd) cell_vkb_candidate_pane_g3

0x5fd5,	// (0x000262d8) cell_vkb_candidate_pane_g4_ParamLimits

0x5fd5,	// (0x000262d8) cell_vkb_candidate_pane_g4

0x60a6,	// (0x000263a9) cell_app_pane_cp2_g1_ParamLimits

0x60a6,	// (0x000263a9) cell_app_pane_cp2_g1

0x60c4,	// (0x000263c7) cell_app_pane_cp2_g2_ParamLimits

0x60c4,	// (0x000263c7) cell_app_pane_cp2_g2

0x0001,

0xfbcd,	// (0x0002fed0) cell_app_pane_cp2_g_ParamLimits

0xfbcd,	// (0x0002fed0) cell_app_pane_cp2_g

0x60d0,	// (0x000263d3) cell_app_pane_cp2_t1_ParamLimits

0x60d0,	// (0x000263d3) cell_app_pane_cp2_t1

0x1f93,	// (0x00022296) grid_highlight_pane_cp1_ParamLimits

0x1f93,	// (0x00022296) grid_highlight_pane_cp1

0xcda5,	// (0x0002d0a8) cell_hwr_candidate_pane_cp1_ParamLimits

0xcda5,	// (0x0002d0a8) cell_hwr_candidate_pane_cp1

0xcd58,	// (0x0002d05b) fep_hwr_candidate_drop_down_list_pane_g1

0xcdc4,	// (0x0002d0c7) fep_hwr_candidate_drop_down_list_pane_g2

0xcdd1,	// (0x0002d0d4) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbd2,	// (0x0002fed5) fep_hwr_candidate_drop_down_list_pane_g

0xcdde,	// (0x0002d0e1) fep_hwr_candidate_drop_down_list_scroll_pane

0xcde7,	// (0x0002d0ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xcde7,	// (0x0002d0ea) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xcdf4,	// (0x0002d0f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xcdf4,	// (0x0002d0f7) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xce01,	// (0x0002d104) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xce01,	// (0x0002d104) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xce0e,	// (0x0002d111) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xce0e,	// (0x0002d111) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xce29,	// (0x0002d12c) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xce29,	// (0x0002d12c) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xce44,	// (0x0002d147) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xce44,	// (0x0002d147) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xce5f,	// (0x0002d162) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xce5f,	// (0x0002d162) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xce7a,	// (0x0002d17d) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xce7a,	// (0x0002d17d) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd9,	// (0x0002fedc) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd9,	// (0x0002fedc) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x60e2,	// (0x000263e5) cell_vkb_candidate_pane_cp1_ParamLimits

0x60e2,	// (0x000263e5) cell_vkb_candidate_pane_cp1

0x5ca3,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x5ca3,	// (0x00025fa6) fep_vkb_candidate_drop_down_list_pane_g1

0x6102,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6102,	// (0x00026405) fep_vkb_candidate_drop_down_list_pane_g2

0x610f,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x610f,	// (0x00026412) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbea,	// (0x0002feed) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbea,	// (0x0002feed) fep_vkb_candidate_drop_down_list_pane_g

0x611c,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x611c,	// (0x0002641f) fep_vkb_candidate_drop_down_list_scroll_pane

0x6129,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6129,	// (0x0002642c) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6136,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6136,	// (0x00026439) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6142,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6142,	// (0x00026445) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x614e,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x614e,	// (0x00026451) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x616f,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x616f,	// (0x00026472) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6190,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6190,	// (0x00026493) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x61b1,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x61b1,	// (0x000264b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x61d2,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x61d2,	// (0x000264d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbf1,	// (0x0002fef4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbf1,	// (0x0002fef4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x164e,	// (0x00021951) title_pane_g1_ParamLimits

0x165b,	// (0x0002195e) title_pane_g2_ParamLimits

0xf554,	// (0x0002f857) title_pane_g_ParamLimits

0x25d1,	// (0x000228d4) aid_call2_pane

0x25c9,	// (0x000228cc) aid_call_pane

0x25d9,	// (0x000228dc) popup_clock_analogue_window_g1

0x25d9,	// (0x000228dc) popup_clock_analogue_window_g2

0xbc94,	// (0x0002bf97) popup_clock_analogue_window_g3

0xbc9d,	// (0x0002bfa0) popup_clock_analogue_window_g4

0x163a,	// (0x0002193d) popup_clock_analogue_window_g5

0x0004,

0xf6fe,	// (0x0002fa01) popup_clock_analogue_window_g

0xbca5,	// (0x0002bfa8) popup_clock_analogue_window_t1

0xbcb3,	// (0x0002bfb6) clock_digital_number_pane_ParamLimits

0xbcb3,	// (0x0002bfb6) clock_digital_number_pane

0xbcbf,	// (0x0002bfc2) clock_digital_number_pane_cp02_ParamLimits

0xbcbf,	// (0x0002bfc2) clock_digital_number_pane_cp02

0xbccb,	// (0x0002bfce) clock_digital_number_pane_cp03_ParamLimits

0xbccb,	// (0x0002bfce) clock_digital_number_pane_cp03

0xbcd7,	// (0x0002bfda) clock_digital_number_pane_cp04_ParamLimits

0xbcd7,	// (0x0002bfda) clock_digital_number_pane_cp04

0xbce3,	// (0x0002bfe6) clock_digital_separator_pane_ParamLimits

0xbce3,	// (0x0002bfe6) clock_digital_separator_pane

0xbcef,	// (0x0002bff2) popup_clock_digital_window_t1_ParamLimits

0xbcef,	// (0x0002bff2) popup_clock_digital_window_t1

0x163a,	// (0x0002193d) clock_digital_number_pane_g1

0x163a,	// (0x0002193d) clock_digital_number_pane_g2

0x0001,

0xf709,	// (0x0002fa0c) clock_digital_number_pane_g

0x163a,	// (0x0002193d) clock_digital_separator_pane_g1

0x163a,	// (0x0002193d) clock_digital_separator_pane_g2

0x0001,

0xf709,	// (0x0002fa0c) clock_digital_separator_pane_g

0x2f2e,	// (0x00023231) aid_fill_nsta_ParamLimits

0x3074,	// (0x00023377) indicator_nsta_pane_ParamLimits

0x31e7,	// (0x000234ea) popup_clock_analogue_window

0x31e7,	// (0x000234ea) popup_clock_digital_window

0x1724,	// (0x00021a27) grid_indicator_nsta_pane_ParamLimits

0x53fd,	// (0x00025700) clock_nsta_pane_t2

0x0001,

0xfab7,	// (0x0002fdba) clock_nsta_pane_t

0xbc58,	// (0x0002bf5b) aid_size_max_handle

0xbc62,	// (0x0002bf65) aid_size_min_handle

0x2bd0,	// (0x00022ed3) editor_scroll_pane

0x61ed,	// (0x000264f0) ex_editor_pane

0x20f5,	// (0x000223f8) scroll_pane_cp13

0x1f1a,	// (0x0002221d) scroll_pane_cp14

0x2608,	// (0x0002290b) scroll_pane_cp36

0x2634,	// (0x00022937) list_single_graphic_hl_pane_cp2_ParamLimits

0x2634,	// (0x00022937) list_single_graphic_hl_pane_cp2

0xee53,	// (0x0002f156) list_single_graphic_hl_pane_ParamLimits

0xee53,	// (0x0002f156) list_single_graphic_hl_pane

0xf36a,	// (0x0002f66d) aid_size_min_hl_cp1

0x61f5,	// (0x000264f8) list_highlight_pane_cp34_ParamLimits

0x61f5,	// (0x000264f8) list_highlight_pane_cp34

0x6206,	// (0x00026509) list_single_graphic_hl_pane_g1_ParamLimits

0x6206,	// (0x00026509) list_single_graphic_hl_pane_g1

0xf373,	// (0x0002f676) list_single_graphic_hl_pane_g2_ParamLimits

0xf373,	// (0x0002f676) list_single_graphic_hl_pane_g2

0xf373,	// (0x0002f676) list_single_graphic_hl_pane_g3_ParamLimits

0xf373,	// (0x0002f676) list_single_graphic_hl_pane_g3

0xf37f,	// (0x0002f682) list_single_graphic_hl_pane_g4_ParamLimits

0xf37f,	// (0x0002f682) list_single_graphic_hl_pane_g4

0xf38b,	// (0x0002f68e) list_single_graphic_hl_pane_g5_ParamLimits

0xf38b,	// (0x0002f68e) list_single_graphic_hl_pane_g5

0x0004,

0xfc02,	// (0x0002ff05) list_single_graphic_hl_pane_g_ParamLimits

0xfc02,	// (0x0002ff05) list_single_graphic_hl_pane_g

0xf39f,	// (0x0002f6a2) list_single_graphic_hl_pane_t1_ParamLimits

0xf39f,	// (0x0002f6a2) list_single_graphic_hl_pane_t1

0x6213,	// (0x00026516) aid_size_min_hl_cp2

0x621c,	// (0x0002651f) list_highlight_pane_cp34_cp2_ParamLimits

0x621c,	// (0x0002651f) list_highlight_pane_cp34_cp2

0x6206,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6206,	// (0x00026509) list_single_graphic_hl_pane_g1_cp2

0x6229,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6229,	// (0x0002652c) list_single_graphic_hl_pane_g2_cp2

0x6235,	// (0x00026538) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6235,	// (0x00026538) list_single_graphic_hl_pane_g3_cp2

0x1f7b,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x1f7b,	// (0x0002227e) list_single_graphic_hl_pane_g4_cp2

0x6243,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6243,	// (0x00026546) list_single_graphic_hl_pane_g5_cp2

0xbf9a,	// (0x0002c29d) control_pane_g4_ParamLimits

0xbf9a,	// (0x0002c29d) control_pane_g4

0x2f0c,	// (0x0002320f) bg_popup_sub_pane_cp10_ParamLimits

0x5a3f,	// (0x00025d42) list_choice_list_pane_ParamLimits

0x5a4e,	// (0x00025d51) scroll_pane_cp23

0x19ad,	// (0x00021cb0) bg_popup_preview_window_pane_cp02_ParamLimits

0x6026,	// (0x00026329) list_preview_fixed_pane_ParamLimits

0x603c,	// (0x0002633f) list_preview_fixed_pane_cp_ParamLimits

0x603c,	// (0x0002633f) list_preview_fixed_pane_cp

0x6048,	// (0x0002634b) popup_preview_fixed_window_g1_ParamLimits

0x6048,	// (0x0002634b) popup_preview_fixed_window_g1

0x6054,	// (0x00026357) popup_preview_fixed_window_g2_ParamLimits

0x6054,	// (0x00026357) popup_preview_fixed_window_g2

0x0002,

0xfb8a,	// (0x0002fe8d) popup_preview_fixed_window_g_ParamLimits

0xfb8a,	// (0x0002fe8d) popup_preview_fixed_window_g

0xbbcc,	// (0x0002becf) aid_navi_side_left_pane_ParamLimits

0xbbe1,	// (0x0002bee4) aid_navi_side_right_pane_ParamLimits

0xbbf9,	// (0x0002befc) navi_icon_pane_stacon_ParamLimits

0xbc0d,	// (0x0002bf10) navi_navi_pane_stacon_ParamLimits

0xbbf9,	// (0x0002befc) navi_text_pane_stacon_ParamLimits

0xb7fa,	// (0x0002bafd) main_text_info_pane

0x626d,	// (0x00026570) listscroll_text_info_pane

0x6275,	// (0x00026578) list_text_info_pane_ParamLimits

0x6275,	// (0x00026578) list_text_info_pane

0x6284,	// (0x00026587) scroll_pane_cp24_ParamLimits

0x6284,	// (0x00026587) scroll_pane_cp24

0x62a2,	// (0x000265a5) list_text_info_pane_t1_ParamLimits

0x62a2,	// (0x000265a5) list_text_info_pane_t1

0xc0e6,	// (0x0002c3e9) popup_fast_swap2_window_ParamLimits

0xc0e6,	// (0x0002c3e9) popup_fast_swap2_window

0x62d7,	// (0x000265da) aid_size_cell_fast2

0x1630,	// (0x00021933) bg_popup_window_pane_cp17

0x3880,	// (0x00023b83) heading_pane_cp2

0x1bed,	// (0x00021ef0) listscroll_fast2_pane

0x62e1,	// (0x000265e4) grid_fast2_pane

0x62eb,	// (0x000265ee) listscroll_fast2_pane_g1

0x62f3,	// (0x000265f6) listscroll_fast2_pane_g2

0x0001,

0xfc0d,	// (0x0002ff10) listscroll_fast2_pane_g

0x20f5,	// (0x000223f8) scroll_pane_cp26

0x62fd,	// (0x00026600) cell_fast2_pane_ParamLimits

0x62fd,	// (0x00026600) cell_fast2_pane

0x6312,	// (0x00026615) cell_fast2_pane_g1

0x631b,	// (0x0002661e) cell_fast2_pane_g2

0x6324,	// (0x00026627) cell_fast2_pane_g3

0x0002,

0xfc12,	// (0x0002ff15) cell_fast2_pane_g

0x1cd7,	// (0x00021fda) grid_highlight_pane_cp9

0xc0ae,	// (0x0002c3b1) main_eswt_pane_ParamLimits

0xc0ae,	// (0x0002c3b1) main_eswt_pane

0x6299,	// (0x0002659c) list_single_text_info_pane

0x632c,	// (0x0002662f) eswt_ctrl_button_pane

0x632c,	// (0x0002662f) eswt_ctrl_canvas_pane

0x6334,	// (0x00026637) eswt_ctrl_combo_pane

0x632c,	// (0x0002662f) eswt_ctrl_default_pane

0x632c,	// (0x0002662f) eswt_ctrl_label_pane

0x633c,	// (0x0002663f) eswt_ctrl_wait_pane

0x6344,	// (0x00026647) eswt_shell_pane

0x1630,	// (0x00021933) listscroll_eswt_app_pane

0x6364,	// (0x00026667) popup_eswt_tasktip_window_ParamLimits

0x6364,	// (0x00026667) popup_eswt_tasktip_window

0x3484,	// (0x00023787) bg_popup_window_pane_cp18

0x6375,	// (0x00026678) eswt_control_pane_g1_ParamLimits

0x6375,	// (0x00026678) eswt_control_pane_g1

0x6382,	// (0x00026685) eswt_control_pane_g2_ParamLimits

0x6382,	// (0x00026685) eswt_control_pane_g2

0x638f,	// (0x00026692) eswt_control_pane_g3_ParamLimits

0x638f,	// (0x00026692) eswt_control_pane_g3

0x639c,	// (0x0002669f) eswt_control_pane_g4_ParamLimits

0x639c,	// (0x0002669f) eswt_control_pane_g4

0x0003,

0xfc19,	// (0x0002ff1c) eswt_control_pane_g_ParamLimits

0xfc19,	// (0x0002ff1c) eswt_control_pane_g

0x1f93,	// (0x00022296) bg_button_pane_ParamLimits

0x1f93,	// (0x00022296) bg_button_pane

0x1cec,	// (0x00021fef) common_borders_pane_copy2_ParamLimits

0x1cec,	// (0x00021fef) common_borders_pane_copy2

0x63a9,	// (0x000266ac) control_button_pane_g1_ParamLimits

0x63a9,	// (0x000266ac) control_button_pane_g1

0x63b5,	// (0x000266b8) control_button_pane_g2_ParamLimits

0x63b5,	// (0x000266b8) control_button_pane_g2

0x63c1,	// (0x000266c4) control_button_pane_g3_ParamLimits

0x63c1,	// (0x000266c4) control_button_pane_g3

0x0002,

0xfc22,	// (0x0002ff25) control_button_pane_g_ParamLimits

0xfc22,	// (0x0002ff25) control_button_pane_g

0x63d5,	// (0x000266d8) control_button_pane_t1

0x63e3,	// (0x000266e6) control_button_pane_t2

0x0001,

0xfc29,	// (0x0002ff2c) control_button_pane_t

0x3410,	// (0x00023713) bg_button_pane_g1

0x3418,	// (0x0002371b) bg_button_pane_g2

0x3420,	// (0x00023723) bg_button_pane_g3

0x3428,	// (0x0002372b) bg_button_pane_g4

0x3430,	// (0x00023733) bg_button_pane_g5

0x3438,	// (0x0002373b) bg_button_pane_g6

0x3440,	// (0x00023743) bg_button_pane_g7

0x3448,	// (0x0002374b) bg_button_pane_g8

0x3450,	// (0x00023753) bg_button_pane_g9

0x0008,

0xf86c,	// (0x0002fb6f) bg_button_pane_g

0x59fa,	// (0x00025cfd) common_borders_pane_ParamLimits

0x59fa,	// (0x00025cfd) common_borders_pane

0x6375,	// (0x00026678) eswt_control_pane_g1_copy1_ParamLimits

0x6375,	// (0x00026678) eswt_control_pane_g1_copy1

0x6382,	// (0x00026685) eswt_control_pane_g2_copy1_ParamLimits

0x6382,	// (0x00026685) eswt_control_pane_g2_copy1

0x638f,	// (0x00026692) eswt_control_pane_g3_copy1_ParamLimits

0x638f,	// (0x00026692) eswt_control_pane_g3_copy1

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy1_ParamLimits

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy1

0x5a35,	// (0x00025d38) bg_eswt_ctrl_canvas_pane_g1

0x59fa,	// (0x00025cfd) common_borders_pane_cp2_ParamLimits

0x59fa,	// (0x00025cfd) common_borders_pane_cp2

0x59fa,	// (0x00025cfd) common_borders_pane_cp3_ParamLimits

0x59fa,	// (0x00025cfd) common_borders_pane_cp3

0x63f1,	// (0x000266f4) separator_horizontal_pane

0x63f9,	// (0x000266fc) separator_vertical_pane

0x6375,	// (0x00026678) eswt_control_pane_g1_copy2_ParamLimits

0x6375,	// (0x00026678) eswt_control_pane_g1_copy2

0x6382,	// (0x00026685) eswt_control_pane_g2_copy2_ParamLimits

0x6382,	// (0x00026685) eswt_control_pane_g2_copy2

0x638f,	// (0x00026692) eswt_control_pane_g3_copy2_ParamLimits

0x638f,	// (0x00026692) eswt_control_pane_g3_copy2

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy2_ParamLimits

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy2

0x1630,	// (0x00021933) common_borders_pane_cp4

0x6402,	// (0x00026705) separator_horizontal_pane_g1

0x640b,	// (0x0002670e) separator_horizontal_pane_g2

0x6414,	// (0x00026717) separator_horizontal_pane_g3

0x0002,

0xfc2e,	// (0x0002ff31) separator_horizontal_pane_g

0x6375,	// (0x00026678) eswt_control_pane_g1_copy3_ParamLimits

0x6375,	// (0x00026678) eswt_control_pane_g1_copy3

0x6382,	// (0x00026685) eswt_control_pane_g2_copy3_ParamLimits

0x6382,	// (0x00026685) eswt_control_pane_g2_copy3

0x638f,	// (0x00026692) eswt_control_pane_g3_copy3_ParamLimits

0x638f,	// (0x00026692) eswt_control_pane_g3_copy3

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy3_ParamLimits

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy3

0x1630,	// (0x00021933) common_borders_pane_cp5

0x641d,	// (0x00026720) separator_vertical_pane_g1

0x6426,	// (0x00026729) separator_vertical_pane_g2

0x642f,	// (0x00026732) separator_vertical_pane_g3

0x0002,

0xfc35,	// (0x0002ff38) separator_vertical_pane_g

0x6375,	// (0x00026678) eswt_control_pane_g1_copy4_ParamLimits

0x6375,	// (0x00026678) eswt_control_pane_g1_copy4

0x6382,	// (0x00026685) eswt_control_pane_g2_copy4_ParamLimits

0x6382,	// (0x00026685) eswt_control_pane_g2_copy4

0x638f,	// (0x00026692) eswt_control_pane_g3_copy4_ParamLimits

0x638f,	// (0x00026692) eswt_control_pane_g3_copy4

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy4_ParamLimits

0x639c,	// (0x0002669f) eswt_control_pane_g4_copy4

0x6438,	// (0x0002673b) eswt_ctrl_combo_button_pane

0x6440,	// (0x00026743) eswt_ctrl_input_pane

0x6448,	// (0x0002674b) popup_choice_list_window_cp70

0x6450,	// (0x00026753) eswt_ctrl_input_pane_t1

0x1630,	// (0x00021933) input_focus_pane_cp70

0x59fa,	// (0x00025cfd) bg_button_pane_cp70_ParamLimits

0x59fa,	// (0x00025cfd) bg_button_pane_cp70

0x645e,	// (0x00026761) eswt_ctrl_combo_button_pane_g1

0x6466,	// (0x00026769) wait_bar_pane_cp70

0x3484,	// (0x00023787) bg_popup_window_pane_cp70_ParamLimits

0x3484,	// (0x00023787) bg_popup_window_pane_cp70

0x646e,	// (0x00026771) popup_eswt_tasktip_window_t1

0x6484,	// (0x00026787) wait_bar_pane_cp71_ParamLimits

0x6484,	// (0x00026787) wait_bar_pane_cp71

0x6490,	// (0x00026793) grid_eswt_app_pane

0x2415,	// (0x00022718) scroll_pane_cp70

0x6499,	// (0x0002679c) cell_eswt_app_pane_ParamLimits

0x6499,	// (0x0002679c) cell_eswt_app_pane

0x64cd,	// (0x000267d0) cell_eswt_app_pane_g1_ParamLimits

0x64cd,	// (0x000267d0) cell_eswt_app_pane_g1

0x64fc,	// (0x000267ff) cell_eswt_app_pane_g2_ParamLimits

0x64fc,	// (0x000267ff) cell_eswt_app_pane_g2

0x0001,

0xfc3c,	// (0x0002ff3f) cell_eswt_app_pane_g_ParamLimits

0xfc3c,	// (0x0002ff3f) cell_eswt_app_pane_g

0x6520,	// (0x00026823) cell_eswt_app_pane_t1_ParamLimits

0x6520,	// (0x00026823) cell_eswt_app_pane_t1

0x6552,	// (0x00026855) grid_highlight_pane_cp70_ParamLimits

0x6552,	// (0x00026855) grid_highlight_pane_cp70

0x2ab1,	// (0x00022db4) set_content_pane_g1

0x2e6c,	// (0x0002316f) status_small_volume_pane

0xce95,	// (0x0002d198) status_small_volume_pane_g1

0xce9d,	// (0x0002d1a0) volume_small2_pane

0xcea6,	// (0x0002d1a9) volume_small2_pane_g1

0xceaf,	// (0x0002d1b2) volume_small2_pane_g2

0xceb8,	// (0x0002d1bb) volume_small2_pane_g3

0xcec1,	// (0x0002d1c4) volume_small2_pane_g4

0xceca,	// (0x0002d1cd) volume_small2_pane_g5

0xced3,	// (0x0002d1d6) volume_small2_pane_g6

0xcedc,	// (0x0002d1df) volume_small2_pane_g7

0xcee5,	// (0x0002d1e8) volume_small2_pane_g8

0xceee,	// (0x0002d1f1) volume_small2_pane_g9

0xcef7,	// (0x0002d1fa) volume_small2_pane_g10

0x0009,

0xfc41,	// (0x0002ff44) volume_small2_pane_g

0x5deb,	// (0x000260ee) fep_vkb_top_text_pane_g1_ParamLimits

0x5e06,	// (0x00026109) fep_vkb_top_text_pane_t1_ParamLimits

0x6060,	// (0x00026363) popup_preview_fixed_window_g3_ParamLimits

0x6060,	// (0x00026363) popup_preview_fixed_window_g3

0xc58d,	// (0x0002c890) popup_toolbar_trans_pane

0x47f6,	// (0x00024af9) aid_height_set_list_ParamLimits

0x4807,	// (0x00024b0a) aid_size_parent_ParamLimits

0x2f0c,	// (0x0002320f) list_highlight_pane_cp2_ParamLimits

0x2ab1,	// (0x00022db4) set_content_pane_g1_ParamLimits

0xee75,	// (0x0002f178) list_single_image_pane_ParamLimits

0xee75,	// (0x0002f178) list_single_image_pane

0x655e,	// (0x00026861) aid_size_cell_image_ParamLimits

0x655e,	// (0x00026861) aid_size_cell_image

0x656b,	// (0x0002686e) grid_single_image_pane_ParamLimits

0x656b,	// (0x0002686e) grid_single_image_pane

0x6577,	// (0x0002687a) list_single_image_pane_g1_ParamLimits

0x6577,	// (0x0002687a) list_single_image_pane_g1

0x6583,	// (0x00026886) list_single_image_pane_g2_ParamLimits

0x6583,	// (0x00026886) list_single_image_pane_g2

0x0001,

0xfc56,	// (0x0002ff59) list_single_image_pane_g_ParamLimits

0xfc56,	// (0x0002ff59) list_single_image_pane_g

0x6597,	// (0x0002689a) list_single_image_pane_t1_ParamLimits

0x6597,	// (0x0002689a) list_single_image_pane_t1

0x65ad,	// (0x000268b0) cell_image_list_pane_ParamLimits

0x65ad,	// (0x000268b0) cell_image_list_pane

0x65c1,	// (0x000268c4) cell_image_list_pane_g1

0x65ca,	// (0x000268cd) cell_image_list_pane_g2

0x0001,

0xfc5b,	// (0x0002ff5e) cell_image_list_pane_g

0x65d3,	// (0x000268d6) aid_size_cell_tb_trans_pane

0x1f93,	// (0x00022296) bg_tb_trans_pane

0x65e5,	// (0x000268e8) grid_tb_trans_pane

0x3410,	// (0x00023713) bg_tb_trans_pane_g1

0x3418,	// (0x0002371b) bg_tb_trans_pane_g2

0x3420,	// (0x00023723) bg_tb_trans_pane_g3

0x3428,	// (0x0002372b) bg_tb_trans_pane_g4

0x3430,	// (0x00023733) bg_tb_trans_pane_g5

0x3448,	// (0x0002374b) bg_tb_trans_pane_g6

0x3450,	// (0x00023753) bg_tb_trans_pane_g7

0x3438,	// (0x0002373b) bg_tb_trans_pane_g8

0x3440,	// (0x00023743) bg_tb_trans_pane_g9

0x0008,

0xfc60,	// (0x0002ff63) bg_tb_trans_pane_g

0x65f9,	// (0x000268fc) cell_toolbar_trans_pane_ParamLimits

0x65f9,	// (0x000268fc) cell_toolbar_trans_pane

0x5a35,	// (0x00025d38) cell_toolbar_trans_pane_g1

0x55e0,	// (0x000258e3) list_form2_midp_pane_t1

0x55ee,	// (0x000258f1) list_form2_midp_pane_t2

0x0001,

0xfafd,	// (0x0002fe00) list_form2_midp_pane_t

0x55fc,	// (0x000258ff) scroll_pane_cp51_ParamLimits

0x57b8,	// (0x00025abb) form2_midp_wait_pane_g1

0x57c1,	// (0x00025ac4) form2_midp_wait_pane_g2

0x57ca,	// (0x00025acd) form2_midp_wait_pane_g3

0x0002,

0xfb12,	// (0x0002fe15) form2_midp_wait_pane_g

0x1724,	// (0x00021a27) list_highlight_pane_cp21_ParamLimits

0x5818,	// (0x00025b1b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5827,	// (0x00025b2a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xede8,	// (0x0002f0eb) list_single_2graphic_im_pane_ParamLimits

0xede8,	// (0x0002f0eb) list_single_2graphic_im_pane

0x661f,	// (0x00026922) list_single_2graphic_im_pane_g1_ParamLimits

0x661f,	// (0x00026922) list_single_2graphic_im_pane_g1

0x6630,	// (0x00026933) list_single_2graphic_im_pane_g2_ParamLimits

0x6630,	// (0x00026933) list_single_2graphic_im_pane_g2

0x663c,	// (0x0002693f) list_single_2graphic_im_pane_g3_ParamLimits

0x663c,	// (0x0002693f) list_single_2graphic_im_pane_g3

0x0003,

0xfc73,	// (0x0002ff76) list_single_2graphic_im_pane_g_ParamLimits

0xfc73,	// (0x0002ff76) list_single_2graphic_im_pane_g

0x665c,	// (0x0002695f) list_single_2graphic_im_pane_t1_ParamLimits

0x665c,	// (0x0002695f) list_single_2graphic_im_pane_t1

0x606c,	// (0x0002636f) list_single_graphic_2heading_pane_fp_ParamLimits

0x606c,	// (0x0002636f) list_single_graphic_2heading_pane_fp

0xf1dc,	// (0x0002f4df) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xf1dc,	// (0x0002f4df) list_single_graphic_2heading_pane_fp_g1

0x6082,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6082,	// (0x00026385) list_single_graphic_2heading_pane_fp_g2

0xe5d4,	// (0x0002e8d7) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe5d4,	// (0x0002e8d7) list_single_graphic_2heading_pane_fp_g3

0xf1b1,	// (0x0002f4b4) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xf1b1,	// (0x0002f4b4) list_single_graphic_2heading_pane_fp_g4

0x608e,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x608e,	// (0x00026391) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb9a,	// (0x0002fe9d) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb9a,	// (0x0002fe9d) list_single_graphic_2heading_pane_fp_g

0xf3b5,	// (0x0002f6b8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xf3b5,	// (0x0002f6b8) list_single_graphic_2heading_pane_fp_t1

0xf214,	// (0x0002f517) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xf214,	// (0x0002f517) list_single_graphic_2heading_pane_fp_t2

0xf3cb,	// (0x0002f6ce) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xf3cb,	// (0x0002f6ce) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc7c,	// (0x0002ff7f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc7c,	// (0x0002ff7f) list_single_graphic_2heading_pane_fp_t

0x5ac1,	// (0x00025dc4) fep_hwr_write_pane_g5_ParamLimits

0x5ac1,	// (0x00025dc4) fep_hwr_write_pane_g5

0x5acd,	// (0x00025dd0) fep_hwr_write_pane_g6_ParamLimits

0x5acd,	// (0x00025dd0) fep_hwr_write_pane_g6

0x6344,	// (0x00026647) eswt_shell_pane_ParamLimits

0x3484,	// (0x00023787) bg_popup_window_pane_cp18_ParamLimits

0x4755,	// (0x00024a58) heading_pane_cp70

0x646e,	// (0x00026771) popup_eswt_tasktip_window_t1_ParamLimits

0x2f83,	// (0x00023286) aid_touch_tab_arrow_left

0x2f92,	// (0x00023295) aid_touch_tab_arrow_right

0x166c,	// (0x0002196f) title_pane_g3_ParamLimits

0x166c,	// (0x0002196f) title_pane_g3

0x1f3a,	// (0x0002223d) set_value_pane_g1

0xc58d,	// (0x0002c890) popup_toolbar_trans_pane_ParamLimits

0x65d3,	// (0x000268d6) aid_size_cell_tb_trans_pane_ParamLimits

0x1f93,	// (0x00022296) bg_tb_trans_pane_ParamLimits

0x65e5,	// (0x000268e8) grid_tb_trans_pane_ParamLimits

0x19ad,	// (0x00021cb0) cont_note_pane_ParamLimits

0x19ad,	// (0x00021cb0) cont_note_pane

0x1cec,	// (0x00021fef) cont_snote2_single_text_pane_ParamLimits

0x1cec,	// (0x00021fef) cont_snote2_single_text_pane

0x1cec,	// (0x00021fef) cont_snote2_single_graphic_pane_ParamLimits

0x1cec,	// (0x00021fef) cont_snote2_single_graphic_pane

0x3a96,	// (0x00023d99) cont_note_wait_pane_ParamLimits

0x3a96,	// (0x00023d99) cont_note_wait_pane

0x3a96,	// (0x00023d99) cont_note_image_pane_ParamLimits

0x3a96,	// (0x00023d99) cont_note_image_pane

0x83f7,	// (0x000286fa) popup_note2_window_g1_ParamLimits

0x83f7,	// (0x000286fa) popup_note2_window_g1

0x8428,	// (0x0002872b) popup_note2_window_t1_ParamLimits

0x8428,	// (0x0002872b) popup_note2_window_t1

0x846d,	// (0x00028770) popup_note2_window_t2_ParamLimits

0x846d,	// (0x00028770) popup_note2_window_t2

0x84b2,	// (0x000287b5) popup_note2_window_t3_ParamLimits

0x84b2,	// (0x000287b5) popup_note2_window_t3

0x84f7,	// (0x000287fa) popup_note2_window_t4_ParamLimits

0x84f7,	// (0x000287fa) popup_note2_window_t4

0x1a25,	// (0x00021d28) popup_note2_window_t5_ParamLimits

0x1a25,	// (0x00021d28) popup_note2_window_t5

0x0004,

0xfc88,	// (0x0002ff8b) popup_note2_window_t_ParamLimits

0xfc88,	// (0x0002ff8b) popup_note2_window_t

0x8526,	// (0x00028829) popup_note2_image_window_g1_ParamLimits

0x8526,	// (0x00028829) popup_note2_image_window_g1

0x8532,	// (0x00028835) popup_note2_image_window_g2_ParamLimits

0x8532,	// (0x00028835) popup_note2_image_window_g2

0x0001,

0xfc93,	// (0x0002ff96) popup_note2_image_window_g_ParamLimits

0xfc93,	// (0x0002ff96) popup_note2_image_window_g

0x8544,	// (0x00028847) popup_note2_image_window_t1_ParamLimits

0x8544,	// (0x00028847) popup_note2_image_window_t1

0x855c,	// (0x0002885f) popup_note2_image_window_t2_ParamLimits

0x855c,	// (0x0002885f) popup_note2_image_window_t2

0x8574,	// (0x00028877) popup_note2_image_window_t3_ParamLimits

0x8574,	// (0x00028877) popup_note2_image_window_t3

0x0002,

0xfc98,	// (0x0002ff9b) popup_note2_image_window_t_ParamLimits

0xfc98,	// (0x0002ff9b) popup_note2_image_window_t

0x3aa4,	// (0x00023da7) popup_note2_wait_window_g1_ParamLimits

0x3aa4,	// (0x00023da7) popup_note2_wait_window_g1

0x8590,	// (0x00028893) popup_note2_wait_window_g2_ParamLimits

0x8590,	// (0x00028893) popup_note2_wait_window_g2

0x3abc,	// (0x00023dbf) popup_note2_wait_window_g3_ParamLimits

0x3abc,	// (0x00023dbf) popup_note2_wait_window_g3

0x0002,

0xfc9f,	// (0x0002ffa2) popup_note2_wait_window_g_ParamLimits

0xfc9f,	// (0x0002ffa2) popup_note2_wait_window_g

0x859c,	// (0x0002889f) popup_note2_wait_window_t1_ParamLimits

0x859c,	// (0x0002889f) popup_note2_wait_window_t1

0x85ba,	// (0x000288bd) popup_note2_wait_window_t2_ParamLimits

0x85ba,	// (0x000288bd) popup_note2_wait_window_t2

0x85d8,	// (0x000288db) popup_note2_wait_window_t3_ParamLimits

0x85d8,	// (0x000288db) popup_note2_wait_window_t3

0x85ea,	// (0x000288ed) popup_note2_wait_window_t4_ParamLimits

0x85ea,	// (0x000288ed) popup_note2_wait_window_t4

0x0003,

0xfca6,	// (0x0002ffa9) popup_note2_wait_window_t_ParamLimits

0xfca6,	// (0x0002ffa9) popup_note2_wait_window_t

0x85fc,	// (0x000288ff) wait_bar2_pane_ParamLimits

0x85fc,	// (0x000288ff) wait_bar2_pane

0x8614,	// (0x00028917) popup_snote2_single_text_window_g1_ParamLimits

0x8614,	// (0x00028917) popup_snote2_single_text_window_g1

0x863c,	// (0x0002893f) popup_snote2_single_text_window_t1_ParamLimits

0x863c,	// (0x0002893f) popup_snote2_single_text_window_t1

0x8688,	// (0x0002898b) popup_snote2_single_text_window_t2_ParamLimits

0x8688,	// (0x0002898b) popup_snote2_single_text_window_t2

0x86d4,	// (0x000289d7) popup_snote2_single_text_window_t3_ParamLimits

0x86d4,	// (0x000289d7) popup_snote2_single_text_window_t3

0x8715,	// (0x00028a18) popup_snote2_single_text_window_t4_ParamLimits

0x8715,	// (0x00028a18) popup_snote2_single_text_window_t4

0x874b,	// (0x00028a4e) popup_snote2_single_text_window_t5_ParamLimits

0x874b,	// (0x00028a4e) popup_snote2_single_text_window_t5

0x0004,

0xfcaf,	// (0x0002ffb2) popup_snote2_single_text_window_t_ParamLimits

0xfcaf,	// (0x0002ffb2) popup_snote2_single_text_window_t

0x8776,	// (0x00028a79) popup_snote2_single_graphic_window_g1_ParamLimits

0x8776,	// (0x00028a79) popup_snote2_single_graphic_window_g1

0x879e,	// (0x00028aa1) popup_snote2_single_graphic_window_g2_ParamLimits

0x879e,	// (0x00028aa1) popup_snote2_single_graphic_window_g2

0x0001,

0xfcba,	// (0x0002ffbd) popup_snote2_single_graphic_window_g_ParamLimits

0xfcba,	// (0x0002ffbd) popup_snote2_single_graphic_window_g

0x87c6,	// (0x00028ac9) popup_snote2_single_graphic_window_t1_ParamLimits

0x87c6,	// (0x00028ac9) popup_snote2_single_graphic_window_t1

0x8812,	// (0x00028b15) popup_snote2_single_graphic_window_t2_ParamLimits

0x8812,	// (0x00028b15) popup_snote2_single_graphic_window_t2

0x86d4,	// (0x000289d7) popup_snote2_single_graphic_window_t3_ParamLimits

0x86d4,	// (0x000289d7) popup_snote2_single_graphic_window_t3

0x8715,	// (0x00028a18) popup_snote2_single_graphic_window_t4_ParamLimits

0x8715,	// (0x00028a18) popup_snote2_single_graphic_window_t4

0x874b,	// (0x00028a4e) popup_snote2_single_graphic_window_t5_ParamLimits

0x874b,	// (0x00028a4e) popup_snote2_single_graphic_window_t5

0x0004,

0xfcbf,	// (0x0002ffc2) popup_snote2_single_graphic_window_t_ParamLimits

0xfcbf,	// (0x0002ffc2) popup_snote2_single_graphic_window_t

0x54b7,	// (0x000257ba) clock_nsta_pane_cp2_t1

0x54b7,	// (0x000257ba) clock_nsta_pane_cp2_t2

0x0001,

0xfad3,	// (0x0002fdd6) clock_nsta_pane_cp2_t

0xea59,	// (0x0002ed5c) form_field_data_wide_pane_g1_ParamLimits

0x1f6f,	// (0x00022272) form_field_data_wide_pane_g2_ParamLimits

0x1f6f,	// (0x00022272) form_field_data_wide_pane_g2

0x1fa1,	// (0x000222a4) form_field_data_wide_pane_g3_ParamLimits

0x1fa1,	// (0x000222a4) form_field_data_wide_pane_g3

0x0002,

0xf681,	// (0x0002f984) form_field_data_wide_pane_g_ParamLimits

0xf681,	// (0x0002f984) form_field_data_wide_pane_g

0x5399,	// (0x0002569c) grid_touch_3_pane_ParamLimits

0x5399,	// (0x0002569c) grid_touch_3_pane

0xcf00,	// (0x0002d203) cell_touch_3_pane_ParamLimits

0xcf00,	// (0x0002d203) cell_touch_3_pane

0x5a35,	// (0x00025d38) cell_touch_3_pane_g1

0x5a35,	// (0x00025d38) cell_touch_3_pane_g2

0x0001,

0xfb58,	// (0x0002fe5b) cell_touch_3_pane_g

0x1a57,	// (0x00021d5a) cont_query_data_pane

0x1a5f,	// (0x00021d62) cont_query_data_pane_cp1

0x885e,	// (0x00028b61) button_value_adjust_pane_cp7

0x8866,	// (0x00028b69) query_popup_pane_cp3

0x26c5,	// (0x000229c8) bg_popup_sub_pane_cp22_ParamLimits

0xbd0e,	// (0x0002c011) navi_navi_volume_pane_cp2

0xbd26,	// (0x0002c029) popup_side_volume_key_window_g2

0xbd32,	// (0x0002c035) popup_side_volume_key_window_g3

0x0002,

0xf717,	// (0x0002fa1a) popup_side_volume_key_window_g

0xbd4c,	// (0x0002c04f) popup_side_volume_key_window_t2

0x0001,

0xf71e,	// (0x0002fa21) popup_side_volume_key_window_t

0x297d,	// (0x00022c80) popup_side_volume_key_window_ParamLimits

0xe6ba,	// (0x0002e9bd) list_double_graphic_pane_g4_ParamLimits

0xe6ba,	// (0x0002e9bd) list_double_graphic_pane_g4

0xee2f,	// (0x0002f132) list_single_2heading_msg_pane_ParamLimits

0xee2f,	// (0x0002f132) list_single_2heading_msg_pane

0xf3eb,	// (0x0002f6ee) list_single_2heading_msg_pane_g1_ParamLimits

0xf3eb,	// (0x0002f6ee) list_single_2heading_msg_pane_g1

0xe4e9,	// (0x0002e7ec) list_single_2heading_msg_pane_g2_ParamLimits

0xe4e9,	// (0x0002e7ec) list_single_2heading_msg_pane_g2

0xf3f7,	// (0x0002f6fa) list_single_2heading_msg_pane_g3_ParamLimits

0xf3f7,	// (0x0002f6fa) list_single_2heading_msg_pane_g3

0xf403,	// (0x0002f706) list_single_2heading_msg_pane_g4_ParamLimits

0xf403,	// (0x0002f706) list_single_2heading_msg_pane_g4

0x0003,

0xfcca,	// (0x0002ffcd) list_single_2heading_msg_pane_g_ParamLimits

0xfcca,	// (0x0002ffcd) list_single_2heading_msg_pane_g

0xf41b,	// (0x0002f71e) list_single_2heading_msg_pane_t1_ParamLimits

0xf41b,	// (0x0002f71e) list_single_2heading_msg_pane_t1

0xf443,	// (0x0002f746) list_single_2heading_msg_pane_t2_ParamLimits

0xf443,	// (0x0002f746) list_single_2heading_msg_pane_t2

0xf477,	// (0x0002f77a) list_single_2heading_msg_pane_t3_ParamLimits

0xf477,	// (0x0002f77a) list_single_2heading_msg_pane_t3

0xf4b0,	// (0x0002f7b3) list_single_2heading_msg_pane_t4_ParamLimits

0xf4b0,	// (0x0002f7b3) list_single_2heading_msg_pane_t4

0x0003,

0xfcd3,	// (0x0002ffd6) list_single_2heading_msg_pane_t_ParamLimits

0xfcd3,	// (0x0002ffd6) list_single_2heading_msg_pane_t

0x1678,	// (0x0002197b) title_pane_g4_ParamLimits

0x1678,	// (0x0002197b) title_pane_g4

0xbb1c,	// (0x0002be1f) title_pane_stacon_g3_ParamLimits

0xbb1c,	// (0x0002be1f) title_pane_stacon_g3

0x6650,	// (0x00026953) list_single_2graphic_im_pane_g4_ParamLimits

0x6650,	// (0x00026953) list_single_2graphic_im_pane_g4

0x44fd,	// (0x00024800) popup_side_volume_key_window_cp

0x4cf9,	// (0x00024ffc) main_idle_act2_pane_t1

0xc67d,	// (0x0002c980) toolbar_button_pane_g10

0x1ee4,	// (0x000221e7) popup_toolbar_window_cp1

0x54a8,	// (0x000257ab) clock_nsta_pane_cp_t1

0x54a8,	// (0x000257ab) clock_nsta_pane_cp_t2

0x0001,

0xface,	// (0x0002fdd1) clock_nsta_pane_cp_t

0xbd0e,	// (0x0002c011) navi_navi_volume_pane_cp2_ParamLimits

0xbd1a,	// (0x0002c01d) popup_side_volume_key_window_g1_ParamLimits

0xbd26,	// (0x0002c029) popup_side_volume_key_window_g2_ParamLimits

0xbd32,	// (0x0002c035) popup_side_volume_key_window_g3_ParamLimits

0xf717,	// (0x0002fa1a) popup_side_volume_key_window_g_ParamLimits

0xcb01,	// (0x0002ce04) fep_hwr_aid_pane

0xcba8,	// (0x0002ceab) bg_fep_hwr_top_pane_g4_ParamLimits

0x5aa3,	// (0x00025da6) fep_hwr_top_pane_g1_ParamLimits

0x5a91,	// (0x00025d94) fep_hwr_top_pane_g2_ParamLimits

0xcbc8,	// (0x0002cecb) fep_hwr_top_pane_g3_ParamLimits

0xfb23,	// (0x0002fe26) fep_hwr_top_pane_g_ParamLimits

0xcbdd,	// (0x0002cee0) fep_hwr_top_text_pane_ParamLimits

0x42c9,	// (0x000245cc) aid_touch_tab_arrow_arrow_2

0x42c0,	// (0x000245c3) aid_touch_tab_arrow_left_2

0xcb15,	// (0x0002ce18) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xcb4c,	// (0x0002ce4f) fep_hwr_prediction_pane

0x5bfa,	// (0x00025efd) fep_vkb_prediction_pane

0x5cf7,	// (0x00025ffa) fep_vkb_side_pane_g3_ParamLimits

0x5cf7,	// (0x00025ffa) fep_vkb_side_pane_g3

0xcd58,	// (0x0002d05b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xcdc4,	// (0x0002d0c7) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xcdd1,	// (0x0002d0d4) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbd2,	// (0x0002fed5) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xcf45,	// (0x0002d248) fep_hwr_prediction_pane_g1

0xcf4f,	// (0x0002d252) fep_hwr_prediction_pane_g2

0xcf57,	// (0x0002d25a) fep_hwr_prediction_pane_g3

0xcf5f,	// (0x0002d262) fep_hwr_prediction_pane_g4

0x0003,

0xfcdc,	// (0x0002ffdf) fep_hwr_prediction_pane_g

0x8877,	// (0x00028b7a) fep_vkb_prediction_pane_g1

0x8881,	// (0x00028b84) fep_vkb_prediction_pane_g2

0x8889,	// (0x00028b8c) fep_vkb_prediction_pane_g3

0x8891,	// (0x00028b94) fep_vkb_prediction_pane_g4

0x0003,

0xfce5,	// (0x0002ffe8) fep_vkb_prediction_pane_g

0xc95d,	// (0x0002cc60) slider_set_pane_g3

0xc971,	// (0x0002cc74) slider_set_pane_g4

0xc989,	// (0x0002cc8c) slider_set_pane_g5

0xc95d,	// (0x0002cc60) slider_set_pane_g6

0xc99f,	// (0x0002cca2) slider_set_pane_g7

0x4968,	// (0x00024c6b) slider_form_pane_g3

0x4971,	// (0x00024c74) slider_form_pane_g4

0x4979,	// (0x00024c7c) slider_form_pane_g5

0x4968,	// (0x00024c6b) slider_form_pane_g6

0x4981,	// (0x00024c84) slider_form_pane_g7

0x4fa3,	// (0x000252a6) slider_set_pane_vc_g3

0x4fac,	// (0x000252af) slider_set_pane_vc_g4

0x4fb5,	// (0x000252b8) slider_set_pane_vc_g5

0x4fa3,	// (0x000252a6) slider_set_pane_vc_g6

0x4fbe,	// (0x000252c1) slider_set_pane_vc_g7

0x516e,	// (0x00025471) slider_form_pane_vc_g1

0x5177,	// (0x0002547a) slider_form_pane_vc_g2

0x5180,	// (0x00025483) slider_form_pane_vc_g3

0x516e,	// (0x00025471) slider_form_pane_vc_g4

0x5189,	// (0x0002548c) slider_form_pane_vc_g5

0x0004,

0xfaa0,	// (0x0002fda3) slider_form_pane_vc_g

0xb7fa,	// (0x0002bafd) main_idle_act3_pane

0x8899,	// (0x00028b9c) ai3_links_pane

0xcf67,	// (0x0002d26a) popup_ai3_data_window_ParamLimits

0xcf67,	// (0x0002d26a) popup_ai3_data_window

0x1630,	// (0x00021933) grid_ai3_links_pane

0xcf7f,	// (0x0002d282) cell_ai3_links_pane_ParamLimits

0xcf7f,	// (0x0002d282) cell_ai3_links_pane

0x88a2,	// (0x00028ba5) bg_popup_sub_pane_cp11

0x88af,	// (0x00028bb2) cell_ai3_links_pane_g1

0x1630,	// (0x00021933) bg_popup_sub_pane_cp12

0x88d4,	// (0x00028bd7) heading_ai3_data_pane

0x88dc,	// (0x00028bdf) list_ai3_gene_pane

0x88e8,	// (0x00028beb) popup_ai3_data_window_g1

0x88f0,	// (0x00028bf3) heading_ai3_data_pane_g1

0x88f8,	// (0x00028bfb) heading_ai3_data_pane_t1

0x8906,	// (0x00028c09) list_double_ai3_gene_pane_ParamLimits

0x8906,	// (0x00028c09) list_double_ai3_gene_pane

0x8913,	// (0x00028c16) list_single_ai3_gene_pane_ParamLimits

0x8913,	// (0x00028c16) list_single_ai3_gene_pane

0x59fa,	// (0x00025cfd) list_highlight_pane_cp7_ParamLimits

0x59fa,	// (0x00025cfd) list_highlight_pane_cp7

0x8920,	// (0x00028c23) list_single_a13_gene_pane_t1_ParamLimits

0x8920,	// (0x00028c23) list_single_a13_gene_pane_t1

0x8937,	// (0x00028c3a) list_single_ai3_gene_pane_g1

0x8940,	// (0x00028c43) list_single_ai3_gene_pane_g2

0x0001,

0xfcee,	// (0x0002fff1) list_single_ai3_gene_pane_g

0x8948,	// (0x00028c4b) list_double_ai3_gene_pane_g1_ParamLimits

0x8948,	// (0x00028c4b) list_double_ai3_gene_pane_g1

0x8954,	// (0x00028c57) list_double_ai3_gene_pane_t1_ParamLimits

0x8954,	// (0x00028c57) list_double_ai3_gene_pane_t1

0x8970,	// (0x00028c73) list_double_ai3_gene_pane_t2_ParamLimits

0x8970,	// (0x00028c73) list_double_ai3_gene_pane_t2

0x8985,	// (0x00028c88) list_double_ai3_gene_pane_t3_ParamLimits

0x8985,	// (0x00028c88) list_double_ai3_gene_pane_t3

0x0002,

0xfcf3,	// (0x0002fff6) list_double_ai3_gene_pane_t_ParamLimits

0xfcf3,	// (0x0002fff6) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf3e1,	// (0x0002f6e4) aid_size_min_col_2

0xcf31,	// (0x0002d234) aid_size_min_msg_ParamLimits

0xcf31,	// (0x0002d234) aid_size_min_msg

0x5df7,	// (0x000260fa) fep_vkb_top_text_pane_g2_ParamLimits

0x5df7,	// (0x000260fa) fep_vkb_top_text_pane_g2

0x0001,

0xfb53,	// (0x0002fe56) fep_vkb_top_text_pane_g_ParamLimits

0xfb53,	// (0x0002fe56) fep_vkb_top_text_pane_g

0xb7fa,	// (0x0002bafd) main_hc_apps_shell_pane

0x89a2,	// (0x00028ca5) grid_hc_apps_pane_ParamLimits

0x89a2,	// (0x00028ca5) grid_hc_apps_pane

0x89b1,	// (0x00028cb4) list_hc_apps_pane

0x89b9,	// (0x00028cbc) scroll_pane_cp37_ParamLimits

0x89b9,	// (0x00028cbc) scroll_pane_cp37

0xcf97,	// (0x0002d29a) cell_hc_apps_pane_ParamLimits

0xcf97,	// (0x0002d29a) cell_hc_apps_pane

0xd045,	// (0x0002d348) cell_hc_apps_pane_g1_ParamLimits

0xd045,	// (0x0002d348) cell_hc_apps_pane_g1

0x89c5,	// (0x00028cc8) cell_hc_apps_pane_g2_ParamLimits

0x89c5,	// (0x00028cc8) cell_hc_apps_pane_g2

0x89e1,	// (0x00028ce4) cell_hc_apps_pane_g3_ParamLimits

0x89e1,	// (0x00028ce4) cell_hc_apps_pane_g3

0x0002,

0xfcfa,	// (0x0002fffd) cell_hc_apps_pane_g_ParamLimits

0xfcfa,	// (0x0002fffd) cell_hc_apps_pane_g

0xd076,	// (0x0002d379) cell_hc_apps_pane_t1_ParamLimits

0xd076,	// (0x0002d379) cell_hc_apps_pane_t1

0x19ad,	// (0x00021cb0) grid_highlight_pane_cp10_ParamLimits

0x19ad,	// (0x00021cb0) grid_highlight_pane_cp10

0xd0b6,	// (0x0002d3b9) list_single_hc_apps_pane_ParamLimits

0xd0b6,	// (0x0002d3b9) list_single_hc_apps_pane

0xd11e,	// (0x0002d421) list_single_hc_apps_pane_g1

0xf4d5,	// (0x0002f7d8) list_single_hc_apps_pane_g2

0x0001,

0xfd01,	// (0x00030004) list_single_hc_apps_pane_g

0xf4ee,	// (0x0002f7f1) list_single_hc_apps_pane_g2_copy1

0xf50a,	// (0x0002f80d) list_single_hc_apps_pane_t1

0x1724,	// (0x00021a27) bg_set_opt_pane_cp_ParamLimits

0xba43,	// (0x0002bd46) setting_slider_pane_t1_ParamLimits

0xba5c,	// (0x0002bd5f) setting_slider_pane_t2_ParamLimits

0xba76,	// (0x0002bd79) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0002f867) setting_slider_pane_t_ParamLimits

0xba8e,	// (0x0002bd91) slider_set_pane_ParamLimits

0xbfae,	// (0x0002c2b1) control_pane_g5_ParamLimits

0xbfae,	// (0x0002c2b1) control_pane_g5

0x47c1,	// (0x00024ac4) slider_set_pane_g1_ParamLimits

0xc951,	// (0x0002cc54) slider_set_pane_g2_ParamLimits

0xc95d,	// (0x0002cc60) slider_set_pane_g3_ParamLimits

0xc971,	// (0x0002cc74) slider_set_pane_g4_ParamLimits

0xc989,	// (0x0002cc8c) slider_set_pane_g5_ParamLimits

0xc95d,	// (0x0002cc60) slider_set_pane_g6_ParamLimits

0xc99f,	// (0x0002cca2) slider_set_pane_g7_ParamLimits

0xf96a,	// (0x0002fc6d) slider_set_pane_g_ParamLimits

0x2a5c,	// (0x00022d5f) navi_icon_text_pane_ParamLimits

0x2f44,	// (0x00023247) aid_fill_nsta_2_ParamLimits

0x2f83,	// (0x00023286) aid_touch_tab_arrow_left_ParamLimits

0x2f92,	// (0x00023295) aid_touch_tab_arrow_right_ParamLimits

0x2fff,	// (0x00023302) clock_nsta_pane_ParamLimits

0x42a2,	// (0x000245a5) navi_icon_pane_g1_ParamLimits

0x42ae,	// (0x000245b1) navi_text_pane_t1_ParamLimits

0x55ba,	// (0x000258bd) navi_icon_text_pane_g1_ParamLimits

0x55c6,	// (0x000258c9) navi_icon_text_pane_t1_ParamLimits

0xd11e,	// (0x0002d421) list_single_hc_apps_pane_g1_ParamLimits

0xf4d5,	// (0x0002f7d8) list_single_hc_apps_pane_g2_ParamLimits

0xfd01,	// (0x00030004) list_single_hc_apps_pane_g_ParamLimits

0xf4ee,	// (0x0002f7f1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xf50a,	// (0x0002f80d) list_single_hc_apps_pane_t1_ParamLimits

0xb957,	// (0x0002bc5a) popup_toolbar2_fixed_window_ParamLimits

0xb957,	// (0x0002bc5a) popup_toolbar2_fixed_window

0xc583,	// (0x0002c886) popup_toolbar2_float_window

0x1630,	// (0x00021933) bg_popup_sub_pane_cp27

0x8a03,	// (0x00028d06) grid_toolbar2_float_pane

0x1630,	// (0x00021933) bg_popup_sub_pane_cp26

0x8a03,	// (0x00028d06) grid_toolbar2_fixed_pane

0xd137,	// (0x0002d43a) cell_toolbar2_fixed_pane_ParamLimits

0xd137,	// (0x0002d43a) cell_toolbar2_fixed_pane

0xd148,	// (0x0002d44b) cell_toolbar2_fixed_pane_g1

0x3390,	// (0x00023693) toolbar2_fixed_button_pane

0x3410,	// (0x00023713) toolbar2_fixed_button_pane_g1

0x3418,	// (0x0002371b) toolbar2_fixed_button_pane_g2

0x3420,	// (0x00023723) toolbar2_fixed_button_pane_g3

0x3428,	// (0x0002372b) toolbar2_fixed_button_pane_g4

0x3430,	// (0x00023733) toolbar2_fixed_button_pane_g5

0x3438,	// (0x0002373b) toolbar2_fixed_button_pane_g6

0x3440,	// (0x00023743) toolbar2_fixed_button_pane_g7

0x3448,	// (0x0002374b) toolbar2_fixed_button_pane_g8

0x3450,	// (0x00023753) toolbar2_fixed_button_pane_g9

0x0008,

0xf86c,	// (0x0002fb6f) toolbar2_fixed_button_pane_g

0x8a0b,	// (0x00028d0e) cell_toolbar2_float_pane_ParamLimits

0x8a0b,	// (0x00028d0e) cell_toolbar2_float_pane

0x8a1f,	// (0x00028d22) cell_toolbar2_float_pane_g1

0x3390,	// (0x00023693) toolbar2_fixed_button_pane_cp

0x5b61,	// (0x00025e64) fep_vkb_accented_list_pane_ParamLimits

0x5b61,	// (0x00025e64) fep_vkb_accented_list_pane

0xcd38,	// (0x0002d03b) bg_popup_fep_shadow_pane_g9

0x2bd0,	// (0x00022ed3) bg_popup_fep_shadow_pane_cp3

0x20dc,	// (0x000223df) list_accented_list_pane

0x8a28,	// (0x00028d2b) list_single_accented_list_pane_ParamLimits

0x8a28,	// (0x00028d2b) list_single_accented_list_pane

0x2bd0,	// (0x00022ed3) list_highlight_pane_cp10

0x8a39,	// (0x00028d3c) list_single_accented_list_pane_t1

0xc4d3,	// (0x0002c7d6) popup_slider_window_ParamLimits

0xc4d3,	// (0x0002c7d6) popup_slider_window

0x886e,	// (0x00028b71) aid_indentation_list_msg

0xd1fd,	// (0x0002d500) bg_popup_window_pane_cp19

0x8aa5,	// (0x00028da8) popup_slider_window_g1

0x8ac1,	// (0x00028dc4) popup_slider_window_g2

0x8add,	// (0x00028de0) popup_slider_window_g3

0x0005,

0xfd06,	// (0x00030009) popup_slider_window_g

0x8af9,	// (0x00028dfc) popup_slider_window_t1

0x8b3f,	// (0x00028e42) small_volume_slider_vertical_pane

0x5a35,	// (0x00025d38) small_volume_slider_vertical_pane_g1

0x5a35,	// (0x00025d38) small_volume_slider_vertical_pane_g2

0x8b5b,	// (0x00028e5e) small_volume_slider_vertical_pane_g3

0x0002,

0xfd18,	// (0x0003001b) small_volume_slider_vertical_pane_g

0xb71d,	// (0x0002ba20) area_side_right_pane_ParamLimits

0xb71d,	// (0x0002ba20) area_side_right_pane

0xd277,	// (0x0002d57a) aid_size_side_button_ParamLimits

0xd277,	// (0x0002d57a) aid_size_side_button

0xd28b,	// (0x0002d58e) grid_sctrl_middle_pane_ParamLimits

0xd28b,	// (0x0002d58e) grid_sctrl_middle_pane

0xd2aa,	// (0x0002d5ad) sctrl_sk_bottom_pane

0xd2bb,	// (0x0002d5be) sctrl_sk_top_pane

0xd2cd,	// (0x0002d5d0) aid_touch_sctrl_top

0xd2da,	// (0x0002d5dd) bg_sctrl_sk_pane_ParamLimits

0xd2da,	// (0x0002d5dd) bg_sctrl_sk_pane

0xd2e8,	// (0x0002d5eb) sctrl_sk_top_pane_g1

0xd2f5,	// (0x0002d5f8) sctrl_sk_top_pane_t1

0xd2cd,	// (0x0002d5d0) aid_touch_sctrl_bottom

0xd2da,	// (0x0002d5dd) bg_sctrl_sk_pane_cp_ParamLimits

0xd2da,	// (0x0002d5dd) bg_sctrl_sk_pane_cp

0xd310,	// (0x0002d613) sctrl_sk_bottom_pane_g1

0xd2f5,	// (0x0002d5f8) sctrl_sk_bottom_pane_t1

0xd319,	// (0x0002d61c) cell_sctrl_middle_pane_ParamLimits

0xd319,	// (0x0002d61c) cell_sctrl_middle_pane

0xd334,	// (0x0002d637) aid_touch_sctrl_middle_ParamLimits

0xd334,	// (0x0002d637) aid_touch_sctrl_middle

0xd346,	// (0x0002d649) bg_sctrl_middle_pane_ParamLimits

0xd346,	// (0x0002d649) bg_sctrl_middle_pane

0xcd58,	// (0x0002d05b) cell_sctrl_middle_pane_g1_ParamLimits

0xcd58,	// (0x0002d05b) cell_sctrl_middle_pane_g1

0xd354,	// (0x0002d657) cell_sctrl_middle_pane_g2_ParamLimits

0xd354,	// (0x0002d657) cell_sctrl_middle_pane_g2

0x0001,

0xfd24,	// (0x00030027) cell_sctrl_middle_pane_g_ParamLimits

0xfd24,	// (0x00030027) cell_sctrl_middle_pane_g

0x3410,	// (0x00023713) bg_sctrl_middle_pane_g1

0x3420,	// (0x00023723) bg_sctrl_middle_pane_g2

0x3418,	// (0x0002371b) bg_sctrl_middle_pane_g3

0x3430,	// (0x00023733) bg_sctrl_middle_pane_g4

0x3428,	// (0x0002372b) bg_sctrl_middle_pane_g5

0x3438,	// (0x0002373b) bg_sctrl_middle_pane_g6

0x3440,	// (0x00023743) bg_sctrl_middle_pane_g7

0x3450,	// (0x00023753) bg_sctrl_middle_pane_g8

0x0007,

0xfd29,	// (0x0003002c) bg_sctrl_middle_pane_g

0x3448,	// (0x0002374b) bg_sctrl_middle_pane_g8_copy1

0x3410,	// (0x00023713) bg_sctrl_sk_pane_g1

0x3418,	// (0x0002371b) bg_sctrl_sk_pane_g2

0x3420,	// (0x00023723) bg_sctrl_sk_pane_g3

0x0008,

0xf86c,	// (0x0002fb6f) bg_sctrl_sk_pane_g

0x1eaa,	// (0x000221ad) aid_size_touch_scroll_bar

0x3428,	// (0x0002372b) bg_sctrl_sk_pane_g4

0x3430,	// (0x00023733) bg_sctrl_sk_pane_g5

0x3438,	// (0x0002373b) bg_sctrl_sk_pane_g6

0x3440,	// (0x00023743) bg_sctrl_sk_pane_g7

0x3448,	// (0x0002374b) bg_sctrl_sk_pane_g8

0x3450,	// (0x00023753) bg_sctrl_sk_pane_g9

0xc144,	// (0x0002c447) popup_fep_china_hwr2_fs_candidate_window

0xc14e,	// (0x0002c451) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc14e,	// (0x0002c451) popup_fep_china_hwr2_fs_control_window

0xcd58,	// (0x0002d05b) sctrl_sk_top_pane_g2

0x0001,

0xfd1f,	// (0x00030022) sctrl_sk_top_pane_g

0xd364,	// (0x0002d667) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd364,	// (0x0002d667) aid_fep_china_hwr2_fs_cell

0xd376,	// (0x0002d679) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd376,	// (0x0002d679) bg_popup_fep_shadow_pane_cp4

0xd38d,	// (0x0002d690) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd38d,	// (0x0002d690) bg_popup_fep_shadow_pane_cp5

0xd39f,	// (0x0002d6a2) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd39f,	// (0x0002d6a2) popup_fep_china_hwr2_fs_control_bar_grid

0xd3af,	// (0x0002d6b2) popup_fep_china_hwr2_fs_control_funtion_grid

0x8bdd,	// (0x00028ee0) aid_fep_china_hwr2_fs_candi_cell

0x1630,	// (0x00021933) bg_popup_fep_shadow_pane_cp6

0x8be7,	// (0x00028eea) popup_fep_china_hwr2_fs_candidate_grid

0xd3b7,	// (0x0002d6ba) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd3b7,	// (0x0002d6ba) cell_fep_china_hwr2_fs_funtion_grid

0x5a35,	// (0x00025d38) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8bc3,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8bc3,	// (0x00028ec6) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8bf1,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8bf1,	// (0x00028ef4) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd3a,	// (0x0003003d) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd3a,	// (0x0003003d) cell_fep_china_hwr2_fs_funtion_grid_g

0xd3cf,	// (0x0002d6d2) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd3cf,	// (0x0002d6d2) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd3e4,	// (0x0002d6e7) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd3e4,	// (0x0002d6e7) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd3f,	// (0x00030042) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd3f,	// (0x00030042) cell_fep_china_hwr2_fs_funtion_grid_t

0x8c07,	// (0x00028f0a) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8c0f,	// (0x00028f12) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8c17,	// (0x00028f1a) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd44,	// (0x00030047) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8c1f,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8c1f,	// (0x00028f22) cell_fep_china_hwr2_fs_candidate_grid

0x8c38,	// (0x00028f3b) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8c40,	// (0x00028f43) popup_fep_china_hwr2_fs_candidate_grid_g21

0x5a35,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g1

0x5a35,	// (0x00025d38) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb58,	// (0x0002fe5b) cell_fep_china_hwr2_fs_candidate_grid_g

0x8c48,	// (0x00028f4b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x300c,	// (0x0002330f) clock_nsta_pane_cp_24_ParamLimits

0x300c,	// (0x0002330f) clock_nsta_pane_cp_24

0x308a,	// (0x0002338d) indicator_nsta_pane_cp_24_ParamLimits

0x308a,	// (0x0002338d) indicator_nsta_pane_cp_24

0x411e,	// (0x00024421) heading_pane_g1

0x0001,

0xf8d1,	// (0x0002fbd4) heading_pane_g

0x4b00,	// (0x00024e03) grid_sct_catagory_button_pane

0x4b72,	// (0x00024e75) scroll_pane_cp5_ParamLimits

0x5608,	// (0x0002590b) button_value_adjust_pane_cp5_ParamLimits

0x5608,	// (0x0002590b) button_value_adjust_pane_cp5

0x56e7,	// (0x000259ea) form2_midp_time_pane_ParamLimits

0x8c56,	// (0x00028f59) cell_sct_catagory_button_pane_ParamLimits

0x8c56,	// (0x00028f59) cell_sct_catagory_button_pane

0x59fa,	// (0x00025cfd) bg_button_pane_cp01_ParamLimits

0x59fa,	// (0x00025cfd) bg_button_pane_cp01

0x5a35,	// (0x00025d38) cell_sct_catagory_button_pane_g1

0xc512,	// (0x0002c815) popup_tb_extension_window

0xd400,	// (0x0002d703) aid_size_cell_ext_ParamLimits

0xd400,	// (0x0002d703) aid_size_cell_ext

0x19ad,	// (0x00021cb0) bg_tb_trans_pane_cp1_ParamLimits

0x19ad,	// (0x00021cb0) bg_tb_trans_pane_cp1

0xd420,	// (0x0002d723) grid_tb_ext_pane_ParamLimits

0xd420,	// (0x0002d723) grid_tb_ext_pane

0xd452,	// (0x0002d755) cell_tb_ext_pane_ParamLimits

0xd452,	// (0x0002d755) cell_tb_ext_pane

0xd469,	// (0x0002d76c) cell_tb_ext_pane_g1_ParamLimits

0xd469,	// (0x0002d76c) cell_tb_ext_pane_g1

0x8c68,	// (0x00028f6b) cell_tb_ext_pane_t1

0x19ad,	// (0x00021cb0) list_highlight_pane_cp11_ParamLimits

0x19ad,	// (0x00021cb0) list_highlight_pane_cp11

0xb976,	// (0x0002bc79) popup_uni_indicator_window_ParamLimits

0xb976,	// (0x0002bc79) popup_uni_indicator_window

0x1f93,	// (0x00022296) bg_popup_sub_pane_cp14

0x8c83,	// (0x00028f86) list_uniindi_pane

0x8c8f,	// (0x00028f92) uniindi_top_pane

0x19ad,	// (0x00021cb0) bg_uniindi_top_pane

0x8cae,	// (0x00028fb1) uniindi_top_pane_g1

0x8cc4,	// (0x00028fc7) uniindi_top_pane_g2

0x0003,

0xfd4b,	// (0x0003004e) uniindi_top_pane_g

0x8cee,	// (0x00028ff1) uniindi_top_pane_t1

0x8d18,	// (0x0002901b) list_single_uniindi_pane_ParamLimits

0x8d18,	// (0x0002901b) list_single_uniindi_pane

0x5a35,	// (0x00025d38) bg_uniindi_top_pane_g1

0x8d2b,	// (0x0002902e) list_single_uniindi_pane_g1

0x8d3e,	// (0x00029041) list_single_uniindi_pane_t1

0xb7fa,	// (0x0002bafd) control_bg_pane

0x8d63,	// (0x00029066) bg_sctrl_sk_pane_cp1

0x8d6c,	// (0x0002906f) bg_sctrl_sk_pane_cp2

0x8d75,	// (0x00029078) control_bg_pane_g1

0x8d7e,	// (0x00029081) control_bg_pane_g2

0x0001,

0xfd54,	// (0x00030057) control_bg_pane_g

0x5443,	// (0x00025746) cell_indicator_nsta_pane_g1_ParamLimits

0x5451,	// (0x00025754) cell_indicator_nsta_pane_g2_ParamLimits

0xfabc,	// (0x0002fdbf) cell_indicator_nsta_pane_g_ParamLimits

0xf19e,	// (0x0002f4a1) form2_midp_time_pane_t1_ParamLimits

0xc0ae,	// (0x0002c3b1) main_idle_act4_pane_ParamLimits

0xc0ae,	// (0x0002c3b1) main_idle_act4_pane

0xc512,	// (0x0002c815) popup_tb_extension_window_ParamLimits

0xd442,	// (0x0002d745) tb_ext_find_pane_ParamLimits

0xd442,	// (0x0002d745) tb_ext_find_pane

0x8d87,	// (0x0002908a) ai_gene_pane_1_cp1

0x2d0d,	// (0x00023010) ai_gene_pane_2_cp1

0x8d8f,	// (0x00029092) list_single_idle_plugin_calendar_pane

0x8d98,	// (0x0002909b) list_single_idle_plugin_notification_pane

0x8da1,	// (0x000290a4) list_single_idle_plugin_player_pane

0xd486,	// (0x0002d789) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd486,	// (0x0002d789) list_single_idle_plugin_shortcut_pane

0xd4a8,	// (0x0002d7ab) main_idle_act4_pane_t1

0xd4ba,	// (0x0002d7bd) main_idle_act4_pane_t2

0x0001,

0xfd59,	// (0x0003005c) main_idle_act4_pane_t

0xd4cc,	// (0x0002d7cf) middle_sk_idle_act4_pane_ParamLimits

0xd4cc,	// (0x0002d7cf) middle_sk_idle_act4_pane

0xd4e2,	// (0x0002d7e5) popup_clock_digital_analogue_window_cp2

0xd4fc,	// (0x0002d7ff) shortcut_wheel_idle_act4_pane_ParamLimits

0xd4fc,	// (0x0002d7ff) shortcut_wheel_idle_act4_pane

0x5a35,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g1

0x5a35,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g2

0x5a35,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g3

0x5a35,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g4

0x5a35,	// (0x00025d38) shortcut_wheel_idle_act4_pane_g5

0x8daa,	// (0x000290ad) shortcut_wheel_idle_act4_pane_g6

0x8db2,	// (0x000290b5) shortcut_wheel_idle_act4_pane_g7

0x8dba,	// (0x000290bd) shortcut_wheel_idle_act4_pane_g8

0x8dc2,	// (0x000290c5) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd5e,	// (0x00030061) shortcut_wheel_idle_act4_pane_g

0x5ca3,	// (0x00025fa6) middle_sk_idle_act4_pane_g1_ParamLimits

0x5ca3,	// (0x00025fa6) middle_sk_idle_act4_pane_g1

0xd56c,	// (0x0002d86f) middle_sk_idle_act4_pane_g2_ParamLimits

0xd56c,	// (0x0002d86f) middle_sk_idle_act4_pane_g2

0x0001,

0xfd81,	// (0x00030084) middle_sk_idle_act4_pane_g_ParamLimits

0xfd81,	// (0x00030084) middle_sk_idle_act4_pane_g

0xd578,	// (0x0002d87b) middle_sk_idle_act4_pane_t1_ParamLimits

0xd578,	// (0x0002d87b) middle_sk_idle_act4_pane_t1

0xd595,	// (0x0002d898) grid_ai_shortcut_pane_ParamLimits

0xd595,	// (0x0002d898) grid_ai_shortcut_pane

0xd5ae,	// (0x0002d8b1) list_highlight_pane_cp16_ParamLimits

0xd5ae,	// (0x0002d8b1) list_highlight_pane_cp16

0xd5bb,	// (0x0002d8be) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd5bb,	// (0x0002d8be) list_single_idle_plugin_shortcut_pane_g1

0xd5c7,	// (0x0002d8ca) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd5c7,	// (0x0002d8ca) list_single_idle_plugin_shortcut_pane_g2

0xd5df,	// (0x0002d8e2) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd5df,	// (0x0002d8e2) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd86,	// (0x00030089) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd86,	// (0x00030089) list_single_idle_plugin_shortcut_pane_g

0xd5f2,	// (0x0002d8f5) cell_ai_shortcut_pane_ParamLimits

0xd5f2,	// (0x0002d8f5) cell_ai_shortcut_pane

0xd613,	// (0x0002d916) cell_ai_shortcut_pane_g1_ParamLimits

0xd613,	// (0x0002d916) cell_ai_shortcut_pane_g1

0x8d87,	// (0x0002908a) ai_gene_pane_1_cp2

0x8dca,	// (0x000290cd) ai_gene_pane_2_cp2

0x8dd2,	// (0x000290d5) list_highlight_pane_cp15

0x8ddb,	// (0x000290de) list_single_idle_plugin_calendar_pane_g1

0x8dd2,	// (0x000290d5) list_highlight_pane_cp17

0x8de3,	// (0x000290e6) list_single_idle_plugin_calendar_pane_g1_copy1

0x8deb,	// (0x000290ee) list_single_idle_plugin_player_pane_g1

0x4d99,	// (0x0002509c) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd8d,	// (0x00030090) list_single_idle_plugin_player_pane_g

0x8df3,	// (0x000290f6) list_single_idle_plugin_player_pane_t1

0x8e01,	// (0x00029104) list_single_idle_plugin_player_pane_t2

0x8e0f,	// (0x00029112) list_single_idle_plugin_player_pane_t3

0x8e1d,	// (0x00029120) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd92,	// (0x00030095) list_single_idle_plugin_player_pane_t

0x8e2b,	// (0x0002912e) wait_bar_pane_cp15

0x8e33,	// (0x00029136) grid_ai_notification_pane

0x4d99,	// (0x0002509c) list_single_idle_plugin_notification_pane_g1

0xd635,	// (0x0002d938) cell_ai_notification_pane_ParamLimits

0xd635,	// (0x0002d938) cell_ai_notification_pane

0x8e3c,	// (0x0002913f) cell_ai_notification_pane_g1

0x8e44,	// (0x00029147) cell_ai_notification_pane_t1

0xd642,	// (0x0002d945) tb_ext_find_button_pane

0xd64a,	// (0x0002d94d) tb_ext_find_pane_g1

0xd652,	// (0x0002d955) tb_ext_find_pane_t1

0x25d9,	// (0x000228dc) tb_ext_find_button_pane_g1

0x98d6,	// (0x00029bd9) tb_ext_find_button_pane_g2

0x0001,

0xfd9b,	// (0x0003009e) tb_ext_find_button_pane_g

0xd4a8,	// (0x0002d7ab) main_idle_act4_pane_t1_ParamLimits

0xd4ba,	// (0x0002d7bd) main_idle_act4_pane_t2_ParamLimits

0xfd59,	// (0x0003005c) main_idle_act4_pane_t_ParamLimits

0xd4e2,	// (0x0002d7e5) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd4f0,	// (0x0002d7f3) sat_plugin_idle_act4_pane_ParamLimits

0xd4f0,	// (0x0002d7f3) sat_plugin_idle_act4_pane

0xd660,	// (0x0002d963) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd660,	// (0x0002d963) sat_plugin_idle_act4_pane_t1

0xd673,	// (0x0002d976) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd673,	// (0x0002d976) sat_plugin_idle_act4_pane_t2

0xd686,	// (0x0002d989) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd686,	// (0x0002d989) sat_plugin_idle_act4_pane_t3

0xd699,	// (0x0002d99c) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd699,	// (0x0002d99c) sat_plugin_idle_act4_pane_t4

0x0003,

0xfda0,	// (0x000300a3) sat_plugin_idle_act4_pane_t_ParamLimits

0xfda0,	// (0x000300a3) sat_plugin_idle_act4_pane_t

0xb8bf,	// (0x0002bbc2) popup_battery_window_ParamLimits

0xb8bf,	// (0x0002bbc2) popup_battery_window

0x19ad,	// (0x00021cb0) bg_popup_sub_pane_cp25_ParamLimits

0x19ad,	// (0x00021cb0) bg_popup_sub_pane_cp25

0x98df,	// (0x00029be2) popup_battery_window_g1_ParamLimits

0x98df,	// (0x00029be2) popup_battery_window_g1

0x98eb,	// (0x00029bee) popup_battery_window_t1_ParamLimits

0x98eb,	// (0x00029bee) popup_battery_window_t1

0x98fd,	// (0x00029c00) popup_battery_window_t2_ParamLimits

0x98fd,	// (0x00029c00) popup_battery_window_t2

0x0001,

0xfda9,	// (0x000300ac) popup_battery_window_t_ParamLimits

0xfda9,	// (0x000300ac) popup_battery_window_t

0x2bd8,	// (0x00022edb) midp_canvas_pane_ParamLimits

0x2c4f,	// (0x00022f52) midp_keypad_pane_ParamLimits

0x2c4f,	// (0x00022f52) midp_keypad_pane

0x2f0c,	// (0x0002320f) main_midp_pane_ParamLimits

0x54c6,	// (0x000257c9) signal_pane_g2_cp_ParamLimits

0xd6ac,	// (0x0002d9af) aid_size_cell_midp_keypad_ParamLimits

0xd6ac,	// (0x0002d9af) aid_size_cell_midp_keypad

0xd6c6,	// (0x0002d9c9) midp_keyp_game_grid_pane_ParamLimits

0xd6c6,	// (0x0002d9c9) midp_keyp_game_grid_pane

0xd6e6,	// (0x0002d9e9) midp_keyp_rocker_pane_ParamLimits

0xd6e6,	// (0x0002d9e9) midp_keyp_rocker_pane

0xd71b,	// (0x0002da1e) midp_keyp_sk_left_pane_ParamLimits

0xd71b,	// (0x0002da1e) midp_keyp_sk_left_pane

0xd773,	// (0x0002da76) midp_keyp_sk_right_pane_ParamLimits

0xd773,	// (0x0002da76) midp_keyp_sk_right_pane

0x1630,	// (0x00021933) bg_button_pane_cp03

0xd7cb,	// (0x0002dace) midp_keyp_sk_left_pane_g1

0x1630,	// (0x00021933) bg_button_pane_cp04

0xd7cb,	// (0x0002dace) midp_keyp_sk_right_pane_g1

0x5a35,	// (0x00025d38) midp_keyp_rocker_pane_g1

0xd7d4,	// (0x0002dad7) keyp_game_cell_pane_ParamLimits

0xd7d4,	// (0x0002dad7) keyp_game_cell_pane

0x1630,	// (0x00021933) bg_button_pane_cp02

0xd7e7,	// (0x0002daea) keyp_game_cell_pane_g1

0xb8f5,	// (0x0002bbf8) popup_fep_vkb2_window_ParamLimits

0xb8f5,	// (0x0002bbf8) popup_fep_vkb2_window

0xd7fe,	// (0x0002db01) aid_size_cell_vkb2_ParamLimits

0xd7fe,	// (0x0002db01) aid_size_cell_vkb2

0xd852,	// (0x0002db55) popup_fep_vkb2_window_g1_ParamLimits

0xd852,	// (0x0002db55) popup_fep_vkb2_window_g1

0xd89a,	// (0x0002db9d) vkb2_area_bottom_pane_ParamLimits

0xd89a,	// (0x0002db9d) vkb2_area_bottom_pane

0xd8e6,	// (0x0002dbe9) vkb2_area_keypad_pane_ParamLimits

0xd8e6,	// (0x0002dbe9) vkb2_area_keypad_pane

0xd928,	// (0x0002dc2b) vkb2_area_top_pane_ParamLimits

0xd928,	// (0x0002dc2b) vkb2_area_top_pane

0xd9a2,	// (0x0002dca5) vkb2_top_entry_pane_ParamLimits

0xd9a2,	// (0x0002dca5) vkb2_top_entry_pane

0xd9cc,	// (0x0002dccf) vkb2_top_grid_left_pane_ParamLimits

0xd9cc,	// (0x0002dccf) vkb2_top_grid_left_pane

0xd9ea,	// (0x0002dced) vkb2_top_grid_right_pane_ParamLimits

0xd9ea,	// (0x0002dced) vkb2_top_grid_right_pane

0xda08,	// (0x0002dd0b) vkb2_cell_keypad_pane_ParamLimits

0xda08,	// (0x0002dd0b) vkb2_cell_keypad_pane

0xdad9,	// (0x0002dddc) vkb2_area_bottom_grid_pane_ParamLimits

0xdad9,	// (0x0002dddc) vkb2_area_bottom_grid_pane

0xdaff,	// (0x0002de02) vkb2_area_bottom_pane_g1_ParamLimits

0xdaff,	// (0x0002de02) vkb2_area_bottom_pane_g1

0xdb23,	// (0x0002de26) vkb2_area_bottom_pane_g2_ParamLimits

0xdb23,	// (0x0002de26) vkb2_area_bottom_pane_g2

0xdb51,	// (0x0002de54) vkb2_area_bottom_pane_g3_ParamLimits

0xdb51,	// (0x0002de54) vkb2_area_bottom_pane_g3

0x0002,

0xfdae,	// (0x000300b1) vkb2_area_bottom_pane_g_ParamLimits

0xfdae,	// (0x000300b1) vkb2_area_bottom_pane_g

0xdbb2,	// (0x0002deb5) vkb2_top_cell_left_pane_ParamLimits

0xdbb2,	// (0x0002deb5) vkb2_top_cell_left_pane

0xdbd2,	// (0x0002ded5) vkb2_top_entry_pane_g1_ParamLimits

0xdbd2,	// (0x0002ded5) vkb2_top_entry_pane_g1

0xdbe0,	// (0x0002dee3) vkb2_top_entry_pane_t1_ParamLimits

0xdbe0,	// (0x0002dee3) vkb2_top_entry_pane_t1

0x9922,	// (0x00029c25) vkb2_top_entry_pane_t2_ParamLimits

0x9922,	// (0x00029c25) vkb2_top_entry_pane_t2

0x9954,	// (0x00029c57) vkb2_top_entry_pane_t3_ParamLimits

0x9954,	// (0x00029c57) vkb2_top_entry_pane_t3

0x0002,

0xfdb5,	// (0x000300b8) vkb2_top_entry_pane_t_ParamLimits

0xfdb5,	// (0x000300b8) vkb2_top_entry_pane_t

0xdc3f,	// (0x0002df42) vkb2_top_grid_right_pane_g1_ParamLimits

0xdc3f,	// (0x0002df42) vkb2_top_grid_right_pane_g1

0xdc55,	// (0x0002df58) vkb2_top_grid_right_pane_g2_ParamLimits

0xdc55,	// (0x0002df58) vkb2_top_grid_right_pane_g2

0xdc6d,	// (0x0002df70) vkb2_top_grid_right_pane_g3_ParamLimits

0xdc6d,	// (0x0002df70) vkb2_top_grid_right_pane_g3

0xdc85,	// (0x0002df88) vkb2_top_grid_right_pane_g4_ParamLimits

0xdc85,	// (0x0002df88) vkb2_top_grid_right_pane_g4

0x0003,

0xfdbc,	// (0x000300bf) vkb2_top_grid_right_pane_g_ParamLimits

0xfdbc,	// (0x000300bf) vkb2_top_grid_right_pane_g

0xdc9b,	// (0x0002df9e) vkb2_top_cell_left_pane_g1

0xdcb2,	// (0x0002dfb5) vkb2_cell_keypad_pane_g1_ParamLimits

0xdcb2,	// (0x0002dfb5) vkb2_cell_keypad_pane_g1

0x9978,	// (0x00029c7b) vkb2_cell_keypad_pane_t1_ParamLimits

0x9978,	// (0x00029c7b) vkb2_cell_keypad_pane_t1

0xdcc0,	// (0x0002dfc3) vkb2_cell_bottom_grid_pane_ParamLimits

0xdcc0,	// (0x0002dfc3) vkb2_cell_bottom_grid_pane

0xdcf9,	// (0x0002dffc) vkb2_cell_bottom_grid_pane_g1

0xd510,	// (0x0002d813) aid_call2_pane_cp02

0xd518,	// (0x0002d81b) aid_call_pane_cp02

0xd520,	// (0x0002d823) clock_digital_number_pane_cp10

0xd528,	// (0x0002d82b) clock_digital_number_pane_cp11

0xd530,	// (0x0002d833) clock_digital_number_pane_cp12

0xd538,	// (0x0002d83b) clock_digital_number_pane_cp13

0xd540,	// (0x0002d843) clock_digital_separator_pane_cp10

0x25d9,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g1

0x25d9,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g2

0xd548,	// (0x0002d84b) popup_clock_digital_analogue_window_cp2_g3

0x25d9,	// (0x000228dc) popup_clock_digital_analogue_window_cp2_g4

0xd548,	// (0x0002d84b) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd71,	// (0x00030074) popup_clock_digital_analogue_window_cp2_g

0xd550,	// (0x0002d853) popup_clock_digital_analogue_window_cp2_t1

0xd55e,	// (0x0002d861) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd7c,	// (0x0003007f) popup_clock_digital_analogue_window_cp2_t

0x5a35,	// (0x00025d38) clock_digital_number_pane_cp10_g1

0x5a35,	// (0x00025d38) clock_digital_number_pane_cp10_g2

0x0001,

0xfb58,	// (0x0002fe5b) clock_digital_number_pane_cp10_g

0x5a35,	// (0x00025d38) clock_digital_separator_pane_cp10_g1

0x5a35,	// (0x00025d38) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb58,	// (0x0002fe5b) clock_digital_separator_pane_cp10_g

0x8cd0,	// (0x00028fd3) uniindi_top_pane_g3

0x8ce1,	// (0x00028fe4) uniindi_top_pane_g4

0xda93,	// (0x0002dd96) vkb2_row_keypad_pane_ParamLimits

0xda93,	// (0x0002dd96) vkb2_row_keypad_pane

0xdd19,	// (0x0002e01c) vkb2_cell_t_keypad_pane_ParamLimits

0xdd19,	// (0x0002e01c) vkb2_cell_t_keypad_pane

0xdd29,	// (0x0002e02c) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xdd29,	// (0x0002e02c) vkb2_cell_t_keypad_pane_cp08

0xdd3c,	// (0x0002e03f) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xdd3c,	// (0x0002e03f) vkb2_cell_t_keypad_pane_cp09

0xdd50,	// (0x0002e053) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xdd50,	// (0x0002e053) vkb2_cell_t_keypad_pane_cp01

0xdd61,	// (0x0002e064) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xdd61,	// (0x0002e064) vkb2_cell_t_keypad_pane_cp02

0xdd72,	// (0x0002e075) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xdd72,	// (0x0002e075) vkb2_cell_t_keypad_pane_cp03

0xdd83,	// (0x0002e086) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xdd83,	// (0x0002e086) vkb2_cell_t_keypad_pane_cp04

0xdd94,	// (0x0002e097) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xdd94,	// (0x0002e097) vkb2_cell_t_keypad_pane_cp05

0xdda5,	// (0x0002e0a8) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xdda5,	// (0x0002e0a8) vkb2_cell_t_keypad_pane_cp06

0xddb6,	// (0x0002e0b9) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xddb6,	// (0x0002e0b9) vkb2_cell_t_keypad_pane_cp07

0xddc7,	// (0x0002e0ca) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xddc7,	// (0x0002e0ca) vkb2_cell_t_keypad_pane_cp10

0xcd58,	// (0x0002d05b) vkb2_cell_t_keypad_pane_g1

0x998f,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1

0xb7fa,	// (0x0002bafd) popup_grid_graphic2_window

0xdddc,	// (0x0002e0df) aid_size_cell_graphic2_ParamLimits

0xdddc,	// (0x0002e0df) aid_size_cell_graphic2

0xde14,	// (0x0002e117) bg_popup_window_pane_cp21_ParamLimits

0xde14,	// (0x0002e117) bg_popup_window_pane_cp21

0xde22,	// (0x0002e125) graphic2_pages_pane_ParamLimits

0xde22,	// (0x0002e125) graphic2_pages_pane

0xde68,	// (0x0002e16b) grid_graphic2_control_pane_ParamLimits

0xde68,	// (0x0002e16b) grid_graphic2_control_pane

0xdea6,	// (0x0002e1a9) grid_graphic2_pane_ParamLimits

0xdea6,	// (0x0002e1a9) grid_graphic2_pane

0xdf1a,	// (0x0002e21d) cell_graphic2_pane

0xb7fa,	// (0x0002bafd) main_comp_mode_pane

0x88dc,	// (0x00028bdf) list_ai3_gene_pane_ParamLimits

0xd1fd,	// (0x0002d500) bg_popup_window_pane_cp19_ParamLimits

0x8a47,	// (0x00028d4a) bg_touch_area_indi_pane_ParamLimits

0x8a47,	// (0x00028d4a) bg_touch_area_indi_pane

0x8a5d,	// (0x00028d60) bg_touch_area_indi_pane_cp01_ParamLimits

0x8a5d,	// (0x00028d60) bg_touch_area_indi_pane_cp01

0x8a73,	// (0x00028d76) bg_touch_area_indi_pane_cp02_ParamLimits

0x8a73,	// (0x00028d76) bg_touch_area_indi_pane_cp02

0x8a8b,	// (0x00028d8e) bg_touch_area_indi_pane_cp03_ParamLimits

0x8a8b,	// (0x00028d8e) bg_touch_area_indi_pane_cp03

0x8aa5,	// (0x00028da8) popup_slider_window_g1_ParamLimits

0x8ac1,	// (0x00028dc4) popup_slider_window_g2_ParamLimits

0x8add,	// (0x00028de0) popup_slider_window_g3_ParamLimits

0xfd06,	// (0x00030009) popup_slider_window_g_ParamLimits

0x8af9,	// (0x00028dfc) popup_slider_window_t1_ParamLimits

0x8b3f,	// (0x00028e42) small_volume_slider_vertical_pane_ParamLimits

0xdf1a,	// (0x0002e21d) cell_graphic2_pane_ParamLimits

0xdf68,	// (0x0002e26b) bg_button_pane_cp10_ParamLimits

0xdf68,	// (0x0002e26b) bg_button_pane_cp10

0xdf7b,	// (0x0002e27e) bg_button_pane_cp11_ParamLimits

0xdf7b,	// (0x0002e27e) bg_button_pane_cp11

0xdf8e,	// (0x0002e291) graphic2_pages_pane_g1_ParamLimits

0xdf8e,	// (0x0002e291) graphic2_pages_pane_g1

0xdfa9,	// (0x0002e2ac) graphic2_pages_pane_g2_ParamLimits

0xdfa9,	// (0x0002e2ac) graphic2_pages_pane_g2

0x0001,

0xfdca,	// (0x000300cd) graphic2_pages_pane_g_ParamLimits

0xfdca,	// (0x000300cd) graphic2_pages_pane_g

0xdfc1,	// (0x0002e2c4) graphic2_pages_pane_t1_ParamLimits

0xdfc1,	// (0x0002e2c4) graphic2_pages_pane_t1

0xdfd7,	// (0x0002e2da) cell_graphic2_control_pane_ParamLimits

0xdfd7,	// (0x0002e2da) cell_graphic2_control_pane

0xdff8,	// (0x0002e2fb) cell_graphic2_pane_g1_ParamLimits

0xdff8,	// (0x0002e2fb) cell_graphic2_pane_g1

0xe005,	// (0x0002e308) cell_graphic2_pane_g2_ParamLimits

0xe005,	// (0x0002e308) cell_graphic2_pane_g2

0xe012,	// (0x0002e315) cell_graphic2_pane_g3_ParamLimits

0xe012,	// (0x0002e315) cell_graphic2_pane_g3

0xe01f,	// (0x0002e322) cell_graphic2_pane_g4_ParamLimits

0xe01f,	// (0x0002e322) cell_graphic2_pane_g4

0xe02c,	// (0x0002e32f) cell_graphic2_pane_g5_ParamLimits

0xe02c,	// (0x0002e32f) cell_graphic2_pane_g5

0x0004,

0xfdcf,	// (0x000300d2) cell_graphic2_pane_g_ParamLimits

0xfdcf,	// (0x000300d2) cell_graphic2_pane_g

0xe047,	// (0x0002e34a) cell_graphic2_pane_t1_ParamLimits

0xe047,	// (0x0002e34a) cell_graphic2_pane_t1

0x3484,	// (0x00023787) grid_highlight_pane_cp11_ParamLimits

0x3484,	// (0x00023787) grid_highlight_pane_cp11

0x19ad,	// (0x00021cb0) bg_button_pane_cp05

0xe070,	// (0x0002e373) cell_graphic2_control_pane_g1

0x5a35,	// (0x00025d38) bg_touch_area_indi_pane_g1

0x99a1,	// (0x00029ca4) aid_cmod_rocker_key_size

0x99ab,	// (0x00029cae) aid_cmode_itu_key_size

0x99b5,	// (0x00029cb8) main_cmode_video_pane

0x99bf,	// (0x00029cc2) main_comp_mode_itu_pane

0x99cb,	// (0x00029cce) main_comp_mode_rocker_pane

0x99d7,	// (0x00029cda) cell_cmode_rocker_pane_ParamLimits

0x99d7,	// (0x00029cda) cell_cmode_rocker_pane

0x99e9,	// (0x00029cec) cell_cmode_itu_pane_ParamLimits

0x99e9,	// (0x00029cec) cell_cmode_itu_pane

0x1f93,	// (0x00022296) bg_button_pane_cp06_ParamLimits

0x1f93,	// (0x00022296) bg_button_pane_cp06

0x5ca3,	// (0x00025fa6) cell_cmode_rocker_pane_g1_ParamLimits

0x5ca3,	// (0x00025fa6) cell_cmode_rocker_pane_g1

0x8bc3,	// (0x00028ec6) cell_cmode_rocker_pane_g2_ParamLimits

0x8bc3,	// (0x00028ec6) cell_cmode_rocker_pane_g2

0x0001,

0xfddf,	// (0x000300e2) cell_cmode_rocker_pane_g_ParamLimits

0xfddf,	// (0x000300e2) cell_cmode_rocker_pane_g

0x1630,	// (0x00021933) bg_button_pane_cp07

0x99fe,	// (0x00029d01) cell_cmode_itu_pane_g1

0x9a07,	// (0x00029d0a) cell_cmode_itu_pane_t1

0x9a15,	// (0x00029d18) cell_cmode_itu_pane_t2

0x0001,

0xfde4,	// (0x000300e7) cell_cmode_itu_pane_t

0x8d53,	// (0x00029056) aid_touch_ctrl_left

0x8d5b,	// (0x0002905e) aid_touch_ctrl_right

0x1630,	// (0x00021933) compa_mode_pane

0xe098,	// (0x0002e39b) aid_cmod_rocker_key_size_cp

0xe0a2,	// (0x0002e3a5) aid_cmode_itu_key_size_cp

0x9a23,	// (0x00029d26) compa_mode_pane_g1

0x9a2b,	// (0x00029d2e) compa_mode_pane_g2

0x9a33,	// (0x00029d36) compa_mode_pane_g3

0x0002,

0xfde9,	// (0x000300ec) compa_mode_pane_g

0xe0ac,	// (0x0002e3af) main_comp_mode_itu_pane_cp

0xe0b4,	// (0x0002e3b7) main_comp_mode_rocker_pane_cp

0xe0bc,	// (0x0002e3bf) cell_cmode_itu_pane_cp_ParamLimits

0xe0bc,	// (0x0002e3bf) cell_cmode_itu_pane_cp

0xe0d1,	// (0x0002e3d4) cell_cmode_rocker_pane_cp_ParamLimits

0xe0d1,	// (0x0002e3d4) cell_cmode_rocker_pane_cp

0x1f93,	// (0x00022296) bg_button_pane_cp06_cp_ParamLimits

0x1f93,	// (0x00022296) bg_button_pane_cp06_cp

0x5ca3,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x5ca3,	// (0x00025fa6) cell_cmode_rocker_pane_g1_cp

0x5a35,	// (0x00025d38) cell_cmode_rocker_pane_g2_cp

0x1630,	// (0x00021933) bg_button_pane_cp07_cp

0xe0e3,	// (0x0002e3e6) cell_cmode_itu_pane_g1_cp

0xe0ec,	// (0x0002e3ef) cell_cmode_itu_pane_t1_cp

0xe0ec,	// (0x0002e3ef) cell_cmode_itu_pane_t2_cp

0x4955,	// (0x00024c58) settings_code_pane_cp2

0x1724,	// (0x00021a27) bg_popup_window_pane_cp3_ParamLimits

0x1b7b,	// (0x00021e7e) heading_pane_cp3_ParamLimits

0x1b87,	// (0x00021e8a) listscroll_popup_graphic_pane_ParamLimits

0xcb01,	// (0x0002ce04) fep_hwr_aid_pane_ParamLimits

0xd2cd,	// (0x0002d5d0) aid_touch_sctrl_top_ParamLimits

0xd2e8,	// (0x0002d5eb) sctrl_sk_top_pane_g1_ParamLimits

0xcd58,	// (0x0002d05b) sctrl_sk_top_pane_g2_ParamLimits

0xfd1f,	// (0x00030022) sctrl_sk_top_pane_g_ParamLimits

0xd2f5,	// (0x0002d5f8) sctrl_sk_top_pane_t1_ParamLimits

0xd2cd,	// (0x0002d5d0) aid_touch_sctrl_bottom_ParamLimits

0xd2f5,	// (0x0002d5f8) sctrl_sk_bottom_pane_t1_ParamLimits

0x8c9c,	// (0x00028f9f) aid_area_touch_clock

0xd96a,	// (0x0002dc6d) aid_vkb2_area_top_pane_cell_ParamLimits

0xd96a,	// (0x0002dc6d) aid_vkb2_area_top_pane_cell

0xdab5,	// (0x0002ddb8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xdab5,	// (0x0002ddb8) aid_vkb2_area_bottom_pane_cell

0x991a,	// (0x00029c1d) popup_char_count_window

0x9a3b,	// (0x00029d3e) popup_char_count_window_g1

0x9a44,	// (0x00029d47) popup_char_count_window_g2

0x9a4d,	// (0x00029d50) popup_char_count_window_g3

0x0002,

0xfdf0,	// (0x000300f3) popup_char_count_window_g

0x9a56,	// (0x00029d59) popup_char_count_window_t1

0xd830,	// (0x0002db33) popup_fep_char_preview_window_ParamLimits

0xd830,	// (0x0002db33) popup_fep_char_preview_window

0xd988,	// (0x0002dc8b) vkb2_top_candi_pane_ParamLimits

0xd988,	// (0x0002dc8b) vkb2_top_candi_pane

0xe0fa,	// (0x0002e3fd) cell_vkb2_top_candi_pane_ParamLimits

0xe0fa,	// (0x0002e3fd) cell_vkb2_top_candi_pane

0xe147,	// (0x0002e44a) bg_popup_fep_char_preview_window_ParamLimits

0xe147,	// (0x0002e44a) bg_popup_fep_char_preview_window

0xe155,	// (0x0002e458) popup_fep_char_preview_window_t1_ParamLimits

0xe155,	// (0x0002e458) popup_fep_char_preview_window_t1

0x9a74,	// (0x00029d77) bg_popup_fep_char_preview_window_g1

0x9a6c,	// (0x00029d6f) bg_popup_fep_char_preview_window_g2

0x9a64,	// (0x00029d67) bg_popup_fep_char_preview_window_g3

0x9a94,	// (0x00029d97) bg_popup_fep_char_preview_window_g4

0x9a8c,	// (0x00029d8f) bg_popup_fep_char_preview_window_g5

0xe18f,	// (0x0002e492) bg_popup_fep_char_preview_window_g6

0x9a84,	// (0x00029d87) bg_popup_fep_char_preview_window_g7

0x9a7c,	// (0x00029d7f) bg_popup_fep_char_preview_window_g8

0x9a9c,	// (0x00029d9f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdf7,	// (0x000300fa) bg_popup_fep_char_preview_window_g

0xcd58,	// (0x0002d05b) cell_vkb2_top_candi_pane_g1_ParamLimits

0xcd58,	// (0x0002d05b) cell_vkb2_top_candi_pane_g1

0xcd66,	// (0x0002d069) cell_vkb2_top_candi_pane_g2_ParamLimits

0xcd66,	// (0x0002d069) cell_vkb2_top_candi_pane_g2

0x9aa4,	// (0x00029da7) cell_vkb2_top_candi_pane_g3_ParamLimits

0x9aa4,	// (0x00029da7) cell_vkb2_top_candi_pane_g3

0xe197,	// (0x0002e49a) cell_vkb2_top_candi_pane_g4_ParamLimits

0xe197,	// (0x0002e49a) cell_vkb2_top_candi_pane_g4

0x616f,	// (0x00026472) cell_vkb2_top_candi_pane_g5_ParamLimits

0x616f,	// (0x00026472) cell_vkb2_top_candi_pane_g5

0xe1b8,	// (0x0002e4bb) cell_vkb2_top_candi_pane_g6_ParamLimits

0xe1b8,	// (0x0002e4bb) cell_vkb2_top_candi_pane_g6

0x0005,

0xfe0a,	// (0x0003010d) cell_vkb2_top_candi_pane_g_ParamLimits

0xfe0a,	// (0x0003010d) cell_vkb2_top_candi_pane_g

0xe1c6,	// (0x0002e4c9) cell_vkb2_top_candi_pane_t1

0xc93d,	// (0x0002cc40) aid_size_touch_slider_mark_ParamLimits

0xc93d,	// (0x0002cc40) aid_size_touch_slider_mark

0xde58,	// (0x0002e15b) grid_graphic2_catg_pane_ParamLimits

0xde58,	// (0x0002e15b) grid_graphic2_catg_pane

0xdef6,	// (0x0002e1f9) popup_grid_graphic2_window_t1_ParamLimits

0xdef6,	// (0x0002e1f9) popup_grid_graphic2_window_t1

0xdf08,	// (0x0002e20b) popup_grid_graphic2_window_t2_ParamLimits

0xdf08,	// (0x0002e20b) popup_grid_graphic2_window_t2

0x0001,

0xfdc5,	// (0x000300c8) popup_grid_graphic2_window_t_ParamLimits

0xfdc5,	// (0x000300c8) popup_grid_graphic2_window_t

0x19ad,	// (0x00021cb0) bg_button_pane_cp05_ParamLimits

0xe070,	// (0x0002e373) cell_graphic2_control_pane_g1_ParamLimits

0xe1e5,	// (0x0002e4e8) cell_graphic2_catg_pane_ParamLimits

0xe1e5,	// (0x0002e4e8) cell_graphic2_catg_pane

0x1630,	// (0x00021933) bg_button_pane_cp12

0xe1f7,	// (0x0002e4fa) cell_graphic2_catg_pane_g1

0x8c68,	// (0x00028f6b) cell_tb_ext_pane_t1_ParamLimits

0xdc12,	// (0x0002df15) vkb2_top_cell_right_narrow_pane_ParamLimits

0xdc12,	// (0x0002df15) vkb2_top_cell_right_narrow_pane

0xdc2a,	// (0x0002df2d) vkb2_top_cell_right_wide_pane_ParamLimits

0xdc2a,	// (0x0002df2d) vkb2_top_cell_right_wide_pane

0xcaf3,	// (0x0002cdf6) bg_vkb2_func_pane_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_vkb2_func_pane

0xdc9b,	// (0x0002df9e) vkb2_top_cell_left_pane_g1_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp03_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp03

0xdcf9,	// (0x0002dffc) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3420,	// (0x00023723) bg_vkb2_func_pane_g1

0x3418,	// (0x0002371b) bg_vkb2_func_pane_g2

0x3428,	// (0x0002372b) bg_vkb2_func_pane_g3

0x3430,	// (0x00023733) bg_vkb2_func_pane_g4

0x3438,	// (0x0002373b) bg_vkb2_func_pane_g5

0x3440,	// (0x00023743) bg_vkb2_func_pane_g6

0x3450,	// (0x00023753) bg_vkb2_func_pane_g7

0x3448,	// (0x0002374b) bg_vkb2_func_pane_g8

0x3410,	// (0x00023713) bg_vkb2_func_pane_g9

0x0008,

0xfe17,	// (0x0003011a) bg_vkb2_func_pane_g

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp01_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp01

0xdc9b,	// (0x0002df9e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xdc9b,	// (0x0002df9e) vkb2_top_cell_right_wide_pane_g1

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp02_ParamLimits

0xcaf3,	// (0x0002cdf6) bg_vkb2_fuc_pane_cp02

0xdcf9,	// (0x0002dffc) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xdcf9,	// (0x0002dffc) vkb2_top_cell_right_narrow_pane_g1

0xd17b,	// (0x0002d47e) aid_touch_area_decrease_ParamLimits

0xd17b,	// (0x0002d47e) aid_touch_area_decrease

0xd19f,	// (0x0002d4a2) aid_touch_area_increase_ParamLimits

0xd19f,	// (0x0002d4a2) aid_touch_area_increase

0xd1ab,	// (0x0002d4ae) aid_touch_area_mute_ParamLimits

0xd1ab,	// (0x0002d4ae) aid_touch_area_mute

0xd1cf,	// (0x0002d4d2) aid_touch_area_slider_ParamLimits

0xd1cf,	// (0x0002d4d2) aid_touch_area_slider

0xd209,	// (0x0002d50c) popup_slider_window_g4_ParamLimits

0xd209,	// (0x0002d50c) popup_slider_window_g4

0xd215,	// (0x0002d518) popup_slider_window_g5_ParamLimits

0xd215,	// (0x0002d518) popup_slider_window_g5

0xd237,	// (0x0002d53a) popup_slider_window_g6_ParamLimits

0xd237,	// (0x0002d53a) popup_slider_window_g6

0x8b27,	// (0x00028e2a) popup_slider_window_t2_ParamLimits

0x8b27,	// (0x00028e2a) popup_slider_window_t2

0x0001,

0xfd13,	// (0x00030016) popup_slider_window_t_ParamLimits

0xfd13,	// (0x00030016) popup_slider_window_t

0xd249,	// (0x0002d54c) slider_pane_ParamLimits

0xd249,	// (0x0002d54c) slider_pane

0x9ac5,	// (0x00029dc8) slider_pane_g1_ParamLimits

0x9ac5,	// (0x00029dc8) slider_pane_g1

0x9ad9,	// (0x00029ddc) slider_pane_g2_ParamLimits

0x9ad9,	// (0x00029ddc) slider_pane_g2

0x9aef,	// (0x00029df2) slider_pane_g3_ParamLimits

0x9aef,	// (0x00029df2) slider_pane_g3

0x0003,

0xfe2a,	// (0x0003012d) slider_pane_g_ParamLimits

0xfe2a,	// (0x0003012d) slider_pane_g

0xc56e,	// (0x0002c871) popup_tb_float_extension_window_ParamLimits

0xc56e,	// (0x0002c871) popup_tb_float_extension_window

0x9b1b,	// (0x00029e1e) aid_size_cell_tb_float_ext

0x1630,	// (0x00021933) bg_popup_sub_window_cp28

0x9b27,	// (0x00029e2a) grid_tb_float_ext_pane

0x9b31,	// (0x00029e34) cell_tb_float_ext_pane_ParamLimits

0x9b31,	// (0x00029e34) cell_tb_float_ext_pane

0x9b4b,	// (0x00029e4e) cell_tb_float_ext_pane_g1

0x9b54,	// (0x00029e57) grid_highlight_pane_cp12

0xcc42,	// (0x0002cf45) cell_last_hwr_side_pane_ParamLimits

0xcc42,	// (0x0002cf45) cell_last_hwr_side_pane

0x5a35,	// (0x00025d38) cell_last_hwr_side_pane_g1

0x9b5d,	// (0x00029e60) cell_last_hwr_side_pane_g2

0x0001,

0xfe33,	// (0x00030136) cell_last_hwr_side_pane_g

0xdb81,	// (0x0002de84) vkb2_area_bottom_space_btn_pane_ParamLimits

0xdb81,	// (0x0002de84) vkb2_area_bottom_space_btn_pane

0xcd58,	// (0x0002d05b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x998f,	// (0x00029c92) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xe1c6,	// (0x0002e4c9) cell_vkb2_top_candi_pane_t1_ParamLimits

0xe200,	// (0x0002e503) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xe200,	// (0x0002e503) vkb2_area_bottom_space_btn_pane_g1

0xe23a,	// (0x0002e53d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xe23a,	// (0x0002e53d) vkb2_area_bottom_space_btn_pane_g2

0xe270,	// (0x0002e573) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xe270,	// (0x0002e573) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe38,	// (0x0003013b) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe38,	// (0x0003013b) vkb2_area_bottom_space_btn_pane_g

0xcbb6,	// (0x0002ceb9) cel_fep_hwr_func_pane_ParamLimits

0xcbb6,	// (0x0002ceb9) cel_fep_hwr_func_pane

0xcbf2,	// (0x0002cef5) cell_hwr_side_button_pane_ParamLimits

0xcbf2,	// (0x0002cef5) cell_hwr_side_button_pane

0x8c9c,	// (0x00028f9f) aid_area_touch_clock_ParamLimits

0x19ad,	// (0x00021cb0) bg_uniindi_top_pane_ParamLimits

0x8cae,	// (0x00028fb1) uniindi_top_pane_g1_ParamLimits

0x8cc4,	// (0x00028fc7) uniindi_top_pane_g2_ParamLimits

0x8cd0,	// (0x00028fd3) uniindi_top_pane_g3_ParamLimits

0x8ce1,	// (0x00028fe4) uniindi_top_pane_g4_ParamLimits

0xfd4b,	// (0x0003004e) uniindi_top_pane_g_ParamLimits

0x8cee,	// (0x00028ff1) uniindi_top_pane_t1_ParamLimits

0x19ad,	// (0x00021cb0) bg_vkb2_func_pane_cp01_ParamLimits

0x19ad,	// (0x00021cb0) bg_vkb2_func_pane_cp01

0x9b66,	// (0x00029e69) cel_fep_hwr_func_pane_g1_ParamLimits

0x9b66,	// (0x00029e69) cel_fep_hwr_func_pane_g1

0x19ad,	// (0x00021cb0) bg_vkb2_func_pane_cp02_ParamLimits

0x19ad,	// (0x00021cb0) bg_vkb2_func_pane_cp02

0x9b66,	// (0x00029e69) cell_hwr_side_button_pane_g1_ParamLimits

0x9b66,	// (0x00029e69) cell_hwr_side_button_pane_g1

0x3291,	// (0x00023594) status_pane_g4_ParamLimits

0x3291,	// (0x00023594) status_pane_g4

0x32ab,	// (0x000235ae) status_pane_t1

0x574f,	// (0x00025a52) form2_midp_gauge_slider_cont_pane

0x5757,	// (0x00025a5a) form2_midp_gauge_slider_pane_t1_ParamLimits

0x5769,	// (0x00025a6c) form2_midp_gauge_slider_pane_t2_ParamLimits

0x577b,	// (0x00025a7e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfb0b,	// (0x0002fe0e) form2_midp_gauge_slider_pane_t_ParamLimits

0x578d,	// (0x00025a90) form2_midp_slider_pane_ParamLimits

0xd7f0,	// (0x0002daf3) aid_size_cell_func_vkb2_ParamLimits

0xd7f0,	// (0x0002daf3) aid_size_cell_func_vkb2

0x9b07,	// (0x00029e0a) slider_pane_g4_ParamLimits

0x9b07,	// (0x00029e0a) slider_pane_g4

0xe2ba,	// (0x0002e5bd) form2_midp_gauge_slider_pane_t2_cp01

0xe2c8,	// (0x0002e5cb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xe2c8,	// (0x0002e5cb) form2_midp_gauge_slider_pane_t3_cp01

0xe2e5,	// (0x0002e5e8) form2_midp_slider_pane_cp01

0x1630,	// (0x00021933) navi_smil_pane

0x9bbe,	// (0x00029ec1) navi_smil_pane_g1

0x9bc6,	// (0x00029ec9) navi_smil_pane_t1

0x9b9c,	// (0x00029e9f) form2_midp_slider_pane_g1

0x9ba5,	// (0x00029ea8) form2_midp_slider_pane_g2

0x9bad,	// (0x00029eb0) form2_midp_slider_pane_g3

0x9b9c,	// (0x00029e9f) form2_midp_slider_pane_g4

0x11b4,	// (0x000214b7) form2_midp_slider_pane_g5

0x0004,

0xfe41,	// (0x00030144) form2_midp_slider_pane_g

0xe2aa,	// (0x0002e5ad) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xe2aa,	// (0x0002e5ad) vkb2_area_bottom_space_btn_pane_g4

0x30c6,	// (0x000233c9) lc0_navi_pane_ParamLimits

0x30c6,	// (0x000233c9) lc0_navi_pane

0x313c,	// (0x0002343f) lc0_stat_indi_pane_ParamLimits

0x313c,	// (0x0002343f) lc0_stat_indi_pane

0x3153,	// (0x00023456) ls0_title_pane_ParamLimits

0x3153,	// (0x00023456) ls0_title_pane

0x1f93,	// (0x00022296) bg_popup_sub_pane_cp14_ParamLimits

0x8c83,	// (0x00028f86) list_uniindi_pane_ParamLimits

0x8c8f,	// (0x00028f92) uniindi_top_pane_ParamLimits

0x8d2b,	// (0x0002902e) list_single_uniindi_pane_g1_ParamLimits

0x8d3e,	// (0x00029041) list_single_uniindi_pane_t1_ParamLimits

0xe2ee,	// (0x0002e5f1) lc0_stat_clock_pane_ParamLimits

0xe2ee,	// (0x0002e5f1) lc0_stat_clock_pane

0x11d7,	// (0x000214da) lc0_stat_indi_pane_g1_ParamLimits

0x11d7,	// (0x000214da) lc0_stat_indi_pane_g1

0x11ca,	// (0x000214cd) lc0_stat_indi_pane_g2_ParamLimits

0x11ca,	// (0x000214cd) lc0_stat_indi_pane_g2

0x0001,

0xfe4c,	// (0x0003014f) lc0_stat_indi_pane_g_ParamLimits

0xfe4c,	// (0x0003014f) lc0_stat_indi_pane_g

0xe2fb,	// (0x0002e5fe) lc0_uni_indicator_pane_ParamLimits

0xe2fb,	// (0x0002e5fe) lc0_uni_indicator_pane

0x11f1,	// (0x000214f4) ls0_title_pane_g1_ParamLimits

0x11f1,	// (0x000214f4) ls0_title_pane_g1

0x1205,	// (0x00021508) ls0_title_pane_t1_ParamLimits

0x1205,	// (0x00021508) ls0_title_pane_t1

0xe308,	// (0x0002e60b) lc0_uni_indicator_pane_g1_ParamLimits

0xe308,	// (0x0002e60b) lc0_uni_indicator_pane_g1

0x9bd4,	// (0x00029ed7) lc0_stat_clock_pane_t1

0xb7fa,	// (0x0002bafd) main_ai5_pane

0x9be2,	// (0x00029ee5) ai5_sk_pane_ParamLimits

0x9be2,	// (0x00029ee5) ai5_sk_pane

0x1250,	// (0x00021553) cell_ai5_widget_pane_ParamLimits

0x1250,	// (0x00021553) cell_ai5_widget_pane

0x9bef,	// (0x00029ef2) aid_size_cell_widget_grid

0x9c05,	// (0x00029f08) bg_ai5_widget_pane_ParamLimits

0x9c05,	// (0x00029f08) bg_ai5_widget_pane

0x9c6f,	// (0x00029f72) cell_ai5_widget_pane_g2

0x9c7f,	// (0x00029f82) cell_ai5_widget_pane_g3

0x9c9e,	// (0x00029fa1) cell_ai5_widget_pane_g4

0x9caa,	// (0x00029fad) cell_ai5_widget_pane_g5

0x9cb6,	// (0x00029fb9) cell_ai5_widget_pane_g6

0x9cc2,	// (0x00029fc5) cell_ai5_widget_pane_g7

0x9d0a,	// (0x0002a00d) cell_ai5_widget_pane_t1_ParamLimits

0x9d0a,	// (0x0002a00d) cell_ai5_widget_pane_t1

0x9d27,	// (0x0002a02a) cell_ai5_widget_pane_t2_ParamLimits

0x9d27,	// (0x0002a02a) cell_ai5_widget_pane_t2

0x9d3f,	// (0x0002a042) cell_ai5_widget_pane_t3_ParamLimits

0x9d3f,	// (0x0002a042) cell_ai5_widget_pane_t3

0x9d57,	// (0x0002a05a) cell_ai5_widget_pane_t4_ParamLimits

0x9d57,	// (0x0002a05a) cell_ai5_widget_pane_t4

0x9d71,	// (0x0002a074) cell_ai5_widget_pane_t5_ParamLimits

0x9d71,	// (0x0002a074) cell_ai5_widget_pane_t5

0x9d90,	// (0x0002a093) cell_ai5_widget_pane_t6_ParamLimits

0x9d90,	// (0x0002a093) cell_ai5_widget_pane_t6

0x9da2,	// (0x0002a0a5) cell_ai5_widget_pane_t7_ParamLimits

0x9da2,	// (0x0002a0a5) cell_ai5_widget_pane_t7

0x9dbb,	// (0x0002a0be) cell_ai5_widget_pane_t8_ParamLimits

0x9dbb,	// (0x0002a0be) cell_ai5_widget_pane_t8

0x0009,

0xfe66,	// (0x00030169) cell_ai5_widget_pane_t_ParamLimits

0xfe66,	// (0x00030169) cell_ai5_widget_pane_t

0x9e07,	// (0x0002a10a) grid_ai5_widget_pane

0x1f93,	// (0x00022296) highlight_cell_ai5_widget_pane_ParamLimits

0x1f93,	// (0x00022296) highlight_cell_ai5_widget_pane

0x131a,	// (0x0002161d) ai5_sk_left_pane

0x1324,	// (0x00021627) ai5_sk_middle_pane

0x132e,	// (0x00021631) ai5_sk_right_pane

0x9e1f,	// (0x0002a122) bg_ai5_widget_pane_g1_ParamLimits

0x9e1f,	// (0x0002a122) bg_ai5_widget_pane_g1

0x9e2b,	// (0x0002a12e) bg_ai5_widget_pane_g2_ParamLimits

0x9e2b,	// (0x0002a12e) bg_ai5_widget_pane_g2

0x9e37,	// (0x0002a13a) bg_ai5_widget_pane_g3_ParamLimits

0x9e37,	// (0x0002a13a) bg_ai5_widget_pane_g3

0x9e43,	// (0x0002a146) bg_ai5_widget_pane_g4_ParamLimits

0x9e43,	// (0x0002a146) bg_ai5_widget_pane_g4

0x9e4f,	// (0x0002a152) bg_ai5_widget_pane_g5_ParamLimits

0x9e4f,	// (0x0002a152) bg_ai5_widget_pane_g5

0x9e5b,	// (0x0002a15e) bg_ai5_widget_pane_g6_ParamLimits

0x9e5b,	// (0x0002a15e) bg_ai5_widget_pane_g6

0x9e67,	// (0x0002a16a) bg_ai5_widget_pane_g7_ParamLimits

0x9e67,	// (0x0002a16a) bg_ai5_widget_pane_g7

0x9e73,	// (0x0002a176) bg_ai5_widget_pane_g8_ParamLimits

0x9e73,	// (0x0002a176) bg_ai5_widget_pane_g8

0x9e7f,	// (0x0002a182) bg_ai5_widget_pane_g9_ParamLimits

0x9e7f,	// (0x0002a182) bg_ai5_widget_pane_g9

0x0008,

0xfe7b,	// (0x0003017e) bg_ai5_widget_pane_g_ParamLimits

0xfe7b,	// (0x0003017e) bg_ai5_widget_pane_g

0x9eb2,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane_ParamLimits

0x9eb2,	// (0x0002a1b5) cell_shortcut_ai5_widget_pane

0x2bd0,	// (0x00022ed3) bg_cell_shortcut_ai5_widget_pane

0x9ec3,	// (0x0002a1c6) cell_grid_ai5_widget_pane_g1

0x9ecc,	// (0x0002a1cf) highlight_cell_shortcut_ai5_widget_pane

0x3420,	// (0x00023723) ai5_sk_left_pane_g1

0x9ed4,	// (0x0002a1d7) ai5_sk_left_pane_g2

0x9edc,	// (0x0002a1df) ai5_sk_left_pane_g3

0x9ee4,	// (0x0002a1e7) ai5_sk_left_pane_g4

0x0003,

0xfe8e,	// (0x00030191) ai5_sk_left_pane_g

0x9eec,	// (0x0002a1ef) ai5_sk_left_pane_t1

0x3418,	// (0x0002371b) ai5_sk_right_pane_g1

0x9efa,	// (0x0002a1fd) ai5_sk_right_pane_g2

0x9f02,	// (0x0002a205) ai5_sk_right_pane_g3

0x9f0a,	// (0x0002a20d) ai5_sk_right_pane_g4

0x0003,

0xfe97,	// (0x0003019a) ai5_sk_right_pane_g

0x9f12,	// (0x0002a215) ai5_sk_right_pane_t1

0x3418,	// (0x0002371b) ai5_sk_middle_pane_g1

0x3420,	// (0x00023723) ai5_sk_middle_pane_g2

0x3438,	// (0x0002373b) ai5_sk_middle_pane_g3

0x9f02,	// (0x0002a205) ai5_sk_middle_pane_g4

0x9edc,	// (0x0002a1df) ai5_sk_middle_pane_g5

0x9f20,	// (0x0002a223) ai5_sk_middle_pane_g6

0x1338,	// (0x0002163b) ai5_sk_middle_pane_g7

0x0006,

0xfea0,	// (0x000301a3) ai5_sk_middle_pane_g

0x2f52,	// (0x00023255) aid_touch_area_size_lc0_ParamLimits

0x2f52,	// (0x00023255) aid_touch_area_size_lc0

0xcd87,	// (0x0002d08a) cell_hwr_candidate_pane_t1_ParamLimits

0x2f6e,	// (0x00023271) aid_touch_navi_pane

0x323b,	// (0x0002353e) status_dt_navi_pane_ParamLimits

0x323b,	// (0x0002353e) status_dt_navi_pane

0x3248,	// (0x0002354b) status_dt_sta_pane_ParamLimits

0x3248,	// (0x0002354b) status_dt_sta_pane

0x1340,	// (0x00021643) dt_sta_controll_pane

0x134d,	// (0x00021650) dt_sta_indi_pane

0x135e,	// (0x00021661) dt_sta_title_pane

0x19ad,	// (0x00021cb0) bg_dt_sta_indi_pane_ParamLimits

0x19ad,	// (0x00021cb0) bg_dt_sta_indi_pane

0x9f28,	// (0x0002a22b) dt_sta_battery_pane

0x1371,	// (0x00021674) dt_sta_indi_pane_g1

0x137a,	// (0x0002167d) dt_sta_indi_pane_g2

0x1383,	// (0x00021686) dt_sta_indi_pane_g3

0x0002,

0xfeaf,	// (0x000301b2) dt_sta_indi_pane_g

0x138c,	// (0x0002168f) dt_sta_signal_pane

0x1f93,	// (0x00022296) bg_dt_sta_title_pane_ParamLimits

0x1f93,	// (0x00022296) bg_dt_sta_title_pane

0x9f30,	// (0x0002a233) dt_sta_title_pane_g1

0x1395,	// (0x00021698) dt_sta_title_pane_t1_ParamLimits

0x1395,	// (0x00021698) dt_sta_title_pane_t1

0x1630,	// (0x00021933) bg_dt_sta_control_pane

0x13aa,	// (0x000216ad) dt_sta_controll_pane_g1

0x9f38,	// (0x0002a23b) bg_dt_sta_title_pane_g1

0x9f41,	// (0x0002a244) bg_dt_sta_title_pane_g2

0x9f4a,	// (0x0002a24d) bg_dt_sta_title_pane_g3

0x0002,

0xfeb6,	// (0x000301b9) bg_dt_sta_title_pane_g

0x5a35,	// (0x00025d38) bg_dt_sta_indi_pane_g1

0x9f53,	// (0x0002a256) dt_sta_signal_pane_g1

0x9f5b,	// (0x0002a25e) dt_sta_signal_pane_g2

0x0001,

0xfebd,	// (0x000301c0) dt_sta_signal_pane_g

0x9f63,	// (0x0002a266) dt_sta_battery_pane_g1

0x9f6c,	// (0x0002a26f) dt_sta_battery_pane_t1

0x5a35,	// (0x00025d38) bg_dt_sta_control_pane_g1

0x26e7,	// (0x000229ea) fep_china_uni_eep_pane

0x26ef,	// (0x000229f2) fep_china_uni_entry_pane_ParamLimits

0x26ff,	// (0x00022a02) popup_fep_china_uni_window_g1_ParamLimits

0x270f,	// (0x00022a12) popup_fep_china_uni_window_g2_ParamLimits

0x270f,	// (0x00022a12) popup_fep_china_uni_window_g2

0x0001,

0xf723,	// (0x0002fa26) popup_fep_china_uni_window_g_ParamLimits

0xf723,	// (0x0002fa26) popup_fep_china_uni_window_g

0x9f7b,	// (0x0002a27e) fep_china_uni_eep_pane_g1

0x9f83,	// (0x0002a286) fep_china_uni_eep_pane_t1

0x9bb5,	// (0x00029eb8) aid_touch_area_size_smil_player

0x30be,	// (0x000233c1) lc0_clock_pane

0x329f,	// (0x000235a2) status_pane_g5_ParamLimits

0x329f,	// (0x000235a2) status_pane_g5

0xc235,	// (0x0002c538) popup_keymap_window

0x325d,	// (0x00023560) status_icon_pane

0x9c7f,	// (0x00029f82) cell_ai5_widget_pane_g3_ParamLimits

0x9c9e,	// (0x00029fa1) cell_ai5_widget_pane_g4_ParamLimits

0x9caa,	// (0x00029fad) cell_ai5_widget_pane_g5_ParamLimits

0x9cce,	// (0x00029fd1) cell_ai5_widget_pane_g8_ParamLimits

0x9cce,	// (0x00029fd1) cell_ai5_widget_pane_g8

0x9ce2,	// (0x00029fe5) cell_ai5_widget_pane_g9_ParamLimits

0x9ce2,	// (0x00029fe5) cell_ai5_widget_pane_g9

0x9cf6,	// (0x00029ff9) cell_ai5_widget_pane_g10_ParamLimits

0x9cf6,	// (0x00029ff9) cell_ai5_widget_pane_g10

0x9f92,	// (0x0002a295) status_icon_pane_g1

0x1630,	// (0x00021933) bg_popup_sub_pane_cp13

0x9f9a,	// (0x0002a29d) popup_keymap_window_t1

0x2eb1,	// (0x000231b4) control_pane_g6_ParamLimits

0x2eb1,	// (0x000231b4) control_pane_g6

0x2ea4,	// (0x000231a7) control_pane_g7_ParamLimits

0x2ea4,	// (0x000231a7) control_pane_g7

0x2e97,	// (0x0002319a) control_pane_g8_ParamLimits

0x2e97,	// (0x0002319a) control_pane_g8

0x1340,	// (0x00021643) dt_sta_controll_pane_ParamLimits

0x134d,	// (0x00021650) dt_sta_indi_pane_ParamLimits

0x135e,	// (0x00021661) dt_sta_title_pane_ParamLimits

0x1eb3,	// (0x000221b6) aid_size_touch_scroll_bar_cale

0xb8d3,	// (0x0002bbd6) popup_discreet_window_ParamLimits

0xb8d3,	// (0x0002bbd6) popup_discreet_window

0xb94d,	// (0x0002bc50) popup_sk_window

0x3a96,	// (0x00023d99) bg_popup_sub_pane_cp28_ParamLimits

0x3a96,	// (0x00023d99) bg_popup_sub_pane_cp28

0x9fa8,	// (0x0002a2ab) popup_discreet_window_g1_ParamLimits

0x9fa8,	// (0x0002a2ab) popup_discreet_window_g1

0x9fc8,	// (0x0002a2cb) popup_discreet_window_t1_ParamLimits

0x9fc8,	// (0x0002a2cb) popup_discreet_window_t1

0x9fe6,	// (0x0002a2e9) popup_discreet_window_t2_ParamLimits

0x9fe6,	// (0x0002a2e9) popup_discreet_window_t2

0x0002,

0xfec2,	// (0x000301c5) popup_discreet_window_t_ParamLimits

0xfec2,	// (0x000301c5) popup_discreet_window_t

0xe31d,	// (0x0002e620) popup_sk_window_g1

0xe327,	// (0x0002e62a) popup_sk_window_g2

0x0001,

0xfec9,	// (0x000301cc) popup_sk_window_g

0xe331,	// (0x0002e634) popup_sk_window_t1

0xe33f,	// (0x0002e642) popup_sk_window_t1_copy1

0x9c6f,	// (0x00029f72) cell_ai5_widget_pane_g2_ParamLimits

0x9dcd,	// (0x0002a0d0) cell_ai5_widget_pane_t9_ParamLimits

0x9dcd,	// (0x0002a0d0) cell_ai5_widget_pane_t9

0x1630,	// (0x00021933) main_fep_fshwr2_pane

0xe34d,	// (0x0002e650) aid_fshwr2_btn_pane

0xe359,	// (0x0002e65c) aid_fshwr2_syb_pane

0xe365,	// (0x0002e668) aid_fshwr2_txt_pane

0xe371,	// (0x0002e674) fshwr2_func_candi_pane

0xe386,	// (0x0002e689) fshwr2_hwr_syb_pane

0xe396,	// (0x0002e699) fshwr2_icf_pane

0x1630,	// (0x00021933) fshwr2_icf_bg_pane

0x1455,	// (0x00021758) fshwr2_icf_pane_t1_ParamLimits

0x1455,	// (0x00021758) fshwr2_icf_pane_t1

0x5a35,	// (0x00025d38) fshwr2_func_candi_pane_g1

0xa038,	// (0x0002a33b) fshwr2_func_candi_row_pane_ParamLimits

0xa038,	// (0x0002a33b) fshwr2_func_candi_row_pane

0x146c,	// (0x0002176f) cell_fshwr2_syb_pane_ParamLimits

0x146c,	// (0x0002176f) cell_fshwr2_syb_pane

0x5ca3,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x5ca3,	// (0x00025fa6) fshwr2_hwr_syb_pane_g1

0x1630,	// (0x00021933) bg_popup_call_pane_cp01

0xa049,	// (0x0002a34c) fshwr2_func_candi_cell_pane_ParamLimits

0xa049,	// (0x0002a34c) fshwr2_func_candi_cell_pane

0xa077,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xa077,	// (0x0002a37a) fshwr2_func_candi_cell_bg_pane

0xa091,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xa091,	// (0x0002a394) fshwr2_func_candi_cell_pane_g1

0xa0b1,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xa0b1,	// (0x0002a3b4) fshwr2_func_candi_cell_pane_t1

0x1630,	// (0x00021933) bg_button_pane_cp08

0x2bd0,	// (0x00022ed3) cell_fshwr2_syb_bg_pane

0x1488,	// (0x0002178b) cell_fshwr2_syb_bg_pane_g1

0x1490,	// (0x00021793) cell_fshwr2_syb_bg_pane_t1

0x1f93,	// (0x00022296) main_tmo_pane

0x45ab,	// (0x000248ae) uni_indicator_pane_g1_ParamLimits

0x45c0,	// (0x000248c3) uni_indicator_pane_g2_ParamLimits

0x45d6,	// (0x000248d9) uni_indicator_pane_g3_ParamLimits

0x45ec,	// (0x000248ef) uni_indicator_pane_g4_ParamLimits

0x45ec,	// (0x000248ef) uni_indicator_pane_g4

0x4600,	// (0x00024903) uni_indicator_pane_g5_ParamLimits

0x4600,	// (0x00024903) uni_indicator_pane_g5

0x4614,	// (0x00024917) uni_indicator_pane_g6_ParamLimits

0x4614,	// (0x00024917) uni_indicator_pane_g6

0xf927,	// (0x0002fc2a) uni_indicator_pane_g_ParamLimits

0xd15d,	// (0x0002d460) popup_tmo_note_window_ParamLimits

0xd15d,	// (0x0002d460) popup_tmo_note_window

0xd346,	// (0x0002d649) fshwr2_bg_pane

0xa0a2,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xa0a2,	// (0x0002a3a5) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfece,	// (0x000301d1) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfece,	// (0x000301d1) fshwr2_func_candi_cell_pane_g

0x5a35,	// (0x00025d38) bg_popup_window_pane_cp01

0xa0c4,	// (0x0002a3c7) bg_popup_window_pane_g1_cp01

0xa0cd,	// (0x0002a3d0) bg_popup_window_pane_cp22_ParamLimits

0xa0cd,	// (0x0002a3d0) bg_popup_window_pane_cp22

0xa0db,	// (0x0002a3de) listscroll_tmo_link_pane_ParamLimits

0xa0db,	// (0x0002a3de) listscroll_tmo_link_pane

0xa11b,	// (0x0002a41e) popup_tmo_note_window_g1_ParamLimits

0xa11b,	// (0x0002a41e) popup_tmo_note_window_g1

0xa128,	// (0x0002a42b) tmo_note_info_pane_ParamLimits

0xa128,	// (0x0002a42b) tmo_note_info_pane

0x149f,	// (0x000217a2) list_tmo_note_info_pane_g1_ParamLimits

0x149f,	// (0x000217a2) list_tmo_note_info_pane_g1

0xa142,	// (0x0002a445) list_tmo_note_info_pane_g2_ParamLimits

0xa142,	// (0x0002a445) list_tmo_note_info_pane_g2

0x0001,

0xfed3,	// (0x000301d6) list_tmo_note_info_pane_g_ParamLimits

0xfed3,	// (0x000301d6) list_tmo_note_info_pane_g

0xa15e,	// (0x0002a461) list_tmo_note_info_text_pane_ParamLimits

0xa15e,	// (0x0002a461) list_tmo_note_info_text_pane

0xa1a0,	// (0x0002a4a3) list_tmo_link_pane

0xa1ad,	// (0x0002a4b0) scroll_pane_cp20

0xa1ba,	// (0x0002a4bd) list_single_tmo_link_pane_ParamLimits

0xa1ba,	// (0x0002a4bd) list_single_tmo_link_pane

0xa1ca,	// (0x0002a4cd) list_single_tmo_link_pane_t1

0xa1d8,	// (0x0002a4db) list_tmo_note_info_text_pane_t1_ParamLimits

0xa1d8,	// (0x0002a4db) list_tmo_note_info_text_pane_t1

0x2041,	// (0x00022344) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2041,	// (0x00022344) aid_size_touch_scroll_bar_cp01

0xeabe,	// (0x0002edc1) aid_size_touch_slider_marker

0xb935,	// (0x0002bc38) popup_settings_window_ParamLimits

0xb935,	// (0x0002bc38) popup_settings_window

0xec50,	// (0x0002ef53) popup_candi_list_indi_window

0x2f6e,	// (0x00023271) aid_touch_navi_pane_ParamLimits

0xd2a1,	// (0x0002d5a4) rs_clock_indi_pane

0xd2aa,	// (0x0002d5ad) sctrl_sk_bottom_pane_ParamLimits

0xd2bb,	// (0x0002d5be) sctrl_sk_top_pane_ParamLimits

0xd84a,	// (0x0002db4d) popup_fep_tooltip_window

0x9bef,	// (0x00029ef2) aid_size_cell_widget_grid_ParamLimits

0x9c63,	// (0x00029f66) cell_ai5_widget_pane_g1_ParamLimits

0x9c63,	// (0x00029f66) cell_ai5_widget_pane_g1

0x9cb6,	// (0x00029fb9) cell_ai5_widget_pane_g6_ParamLimits

0x9cc2,	// (0x00029fc5) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe51,	// (0x00030154) cell_ai5_widget_pane_g_ParamLimits

0xfe51,	// (0x00030154) cell_ai5_widget_pane_g

0x9df1,	// (0x0002a0f4) cell_ai5_widget_pane_t10_ParamLimits

0x9df1,	// (0x0002a0f4) cell_ai5_widget_pane_t10

0x9e07,	// (0x0002a10a) grid_ai5_widget_pane_ParamLimits

0x9e8b,	// (0x0002a18e) cell_contacts_ai5_widget_pane_ParamLimits

0x9e8b,	// (0x0002a18e) cell_contacts_ai5_widget_pane

0x9ffb,	// (0x0002a2fe) popup_discreet_window_t3_ParamLimits

0x9ffb,	// (0x0002a2fe) popup_discreet_window_t3

0xe3ab,	// (0x0002e6ae) popup_fshwr2_char_preview_window_ParamLimits

0xe3ab,	// (0x0002e6ae) popup_fshwr2_char_preview_window

0x14b6,	// (0x000217b9) tmo_note_info_pane_t1

0x14cb,	// (0x000217ce) tmo_note_info_pane_t2

0x14e2,	// (0x000217e5) tmo_note_info_pane_t3

0xa17c,	// (0x0002a47f) tmo_note_info_pane_t4

0xa18e,	// (0x0002a491) tmo_note_info_pane_t5

0x0004,

0xfed8,	// (0x000301db) tmo_note_info_pane_t

0xa1a0,	// (0x0002a4a3) list_tmo_link_pane_ParamLimits

0xa1ad,	// (0x0002a4b0) scroll_pane_cp20_ParamLimits

0x1630,	// (0x00021933) bg_popup_fep_char_preview_window_cp01

0xa1f1,	// (0x0002a4f4) popup_fshwr2_char_preview_window_t1

0xa1ff,	// (0x0002a502) popup_candi_list_indi_window_g1

0xa208,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane

0xa214,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1

0xa227,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2

0xa233,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfee3,	// (0x000301e6) cell_contacts_ai5_widget_pane_g

0xa245,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1

0x1f93,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01

0xa2bf,	// (0x0002a5c2) settings_container_pane

0x2bd0,	// (0x00022ed3) listscroll_set_pane_copy1

0x50fb,	// (0x000253fe) scroll_pane_cp121_copy1

0xa2cb,	// (0x0002a5ce) set_content_pane_copy1

0xa2d3,	// (0x0002a5d6) aid_height_set_list_copy1_ParamLimits

0xa2d3,	// (0x0002a5d6) aid_height_set_list_copy1

0x4807,	// (0x00024b0a) aid_size_parent_copy1_ParamLimits

0x4807,	// (0x00024b0a) aid_size_parent_copy1

0xa2df,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1_ParamLimits

0xa2df,	// (0x0002a5e2) button_value_adjust_pane_cp6_copy1

0x2f0c,	// (0x0002320f) list_highlight_pane_cp2_copy1_ParamLimits

0x2f0c,	// (0x0002320f) list_highlight_pane_cp2_copy1

0xa2f3,	// (0x0002a5f6) list_set_pane_copy1_ParamLimits

0xa2f3,	// (0x0002a5f6) list_set_pane_copy1

0xa25a,	// (0x0002a55d) main_pane_set_t1_copy1_ParamLimits

0xa25a,	// (0x0002a55d) main_pane_set_t1_copy1

0xa294,	// (0x0002a597) main_pane_set_t2_copy1_ParamLimits

0xa294,	// (0x0002a597) main_pane_set_t2_copy1

0xa3a0,	// (0x0002a6a3) main_pane_set_t3_copy1

0xa3ae,	// (0x0002a6b1) main_pane_set_t4_copy1

0xa2b3,	// (0x0002a5b6) set_content_pane_g1_copy1_ParamLimits

0xa2b3,	// (0x0002a5b6) set_content_pane_g1_copy1

0xa3bc,	// (0x0002a6bf) setting_code_pane_copy1

0xa3c4,	// (0x0002a6c7) setting_slider_graphic_pane_copy1

0xa3c4,	// (0x0002a6c7) setting_slider_pane_copy1

0xa3c4,	// (0x0002a6c7) setting_text_pane_copy1

0xa3c4,	// (0x0002a6c7) setting_volume_pane_copy1

0xa3bc,	// (0x0002a6bf) settings_code_pane_cp2_copy1

0xa3cc,	// (0x0002a6cf) settings_code_pane_cp_copy1_ParamLimits

0xa3cc,	// (0x0002a6cf) settings_code_pane_cp_copy1

0xe3bf,	// (0x0002e6c2) volume_set_pane_copy1

0xa3e0,	// (0x0002a6e3) volume_set_pane_g10_copy1

0xa3e8,	// (0x0002a6eb) volume_set_pane_g1_copy1

0xa3f0,	// (0x0002a6f3) volume_set_pane_g2_copy1

0xa3f8,	// (0x0002a6fb) volume_set_pane_g3_copy1

0xa400,	// (0x0002a703) volume_set_pane_g4_copy1

0xa408,	// (0x0002a70b) volume_set_pane_g5_copy1

0xa410,	// (0x0002a713) volume_set_pane_g6_copy1

0xa418,	// (0x0002a71b) volume_set_pane_g7_copy1

0xa420,	// (0x0002a723) volume_set_pane_g8_copy1

0xa428,	// (0x0002a72b) volume_set_pane_g9_copy1

0x1724,	// (0x00021a27) bg_set_opt_pane_cp_copy1_ParamLimits

0x1724,	// (0x00021a27) bg_set_opt_pane_cp_copy1

0xe3c7,	// (0x0002e6ca) setting_slider_pane_t1_copy1_ParamLimits

0xe3c7,	// (0x0002e6ca) setting_slider_pane_t1_copy1

0xe3e5,	// (0x0002e6e8) setting_slider_pane_t2_copy1_ParamLimits

0xe3e5,	// (0x0002e6e8) setting_slider_pane_t2_copy1

0xe3ff,	// (0x0002e702) setting_slider_pane_t3_copy1_ParamLimits

0xe3ff,	// (0x0002e702) setting_slider_pane_t3_copy1

0xe417,	// (0x0002e71a) slider_set_pane_copy1_ParamLimits

0xe417,	// (0x0002e71a) slider_set_pane_copy1

0x1fe2,	// (0x000222e5) set_opt_bg_pane_g1_copy2

0x1fea,	// (0x000222ed) set_opt_bg_pane_g2_copy2

0xa430,	// (0x0002a733) set_opt_bg_pane_g3_copy2

0x1ffa,	// (0x000222fd) set_opt_bg_pane_g4_copy2

0x2002,	// (0x00022305) set_opt_bg_pane_g5_copy2

0x200a,	// (0x0002230d) set_opt_bg_pane_g6_copy2

0xa43a,	// (0x0002a73d) set_opt_bg_pane_g7_copy2

0xa442,	// (0x0002a745) set_opt_bg_pane_g8_copy2

0xa44c,	// (0x0002a74f) set_opt_bg_pane_g9_copy2

0xa456,	// (0x0002a759) aid_size_touch_slider_mark_copy1_ParamLimits

0xa456,	// (0x0002a759) aid_size_touch_slider_mark_copy1

0xa46a,	// (0x0002a76d) slider_set_pane_g1_copy1

0xa473,	// (0x0002a776) slider_set_pane_g2_copy1

0x4b30,	// (0x00024e33) slider_set_pane_g3_copy1_ParamLimits

0x4b30,	// (0x00024e33) slider_set_pane_g3_copy1

0x4b44,	// (0x00024e47) slider_set_pane_g4_copy1_ParamLimits

0x4b44,	// (0x00024e47) slider_set_pane_g4_copy1

0x4b5c,	// (0x00024e5f) slider_set_pane_g5_copy1_ParamLimits

0x4b5c,	// (0x00024e5f) slider_set_pane_g5_copy1

0x4b30,	// (0x00024e33) slider_set_pane_g6_copy1_ParamLimits

0x4b30,	// (0x00024e33) slider_set_pane_g6_copy1

0xa47b,	// (0x0002a77e) slider_set_pane_g7_copy1_ParamLimits

0xa47b,	// (0x0002a77e) slider_set_pane_g7_copy1

0x1644,	// (0x00021947) bg_set_opt_pane_cp2_copy1

0xa491,	// (0x0002a794) setting_slider_graphic_pane_g1_copy1

0xa4aa,	// (0x0002a7ad) setting_slider_graphic_pane_t1_copy1

0xa49a,	// (0x0002a79d) setting_slider_graphic_pane_t2_copy1

0xa4ba,	// (0x0002a7bd) slider_set_pane_cp_copy1

0xa4ca,	// (0x0002a7cd) input_focus_pane_cp1_copy1

0xa4d3,	// (0x0002a7d6) list_set_text_pane_copy1

0xa4db,	// (0x0002a7de) setting_text_pane_g1_copy1

0xf538,	// (0x0002f83b) set_text_pane_t1_copy1

0xa4ca,	// (0x0002a7cd) input_focus_pane_cp2_copy1

0xa4db,	// (0x0002a7de) setting_code_pane_g1_copy1

0xa4e4,	// (0x0002a7e7) setting_code_pane_t1_copy1

0x4f30,	// (0x00025233) list_set_graphic_pane_copy1

0x1644,	// (0x00021947) bg_set_opt_pane_cp4_copy1

0x28e6,	// (0x00022be9) list_set_graphic_pane_g1_copy1_ParamLimits

0x28e6,	// (0x00022be9) list_set_graphic_pane_g1_copy1

0xa4f2,	// (0x0002a7f5) list_set_graphic_pane_g2_copy1

0x28fe,	// (0x00022c01) list_set_graphic_pane_t1_copy1_ParamLimits

0x28fe,	// (0x00022c01) list_set_graphic_pane_t1_copy1

0x5a35,	// (0x00025d38) rs_clock_indi_pane_g1

0xa4fa,	// (0x0002a7fd) rs_clock_indi_pane_t1

0xa508,	// (0x0002a80b) rs_indi_pane

0xa510,	// (0x0002a813) rs_indi_pane_g1

0xa519,	// (0x0002a81c) rs_indi_pane_g2

0xa522,	// (0x0002a825) rs_indi_pane_g3

0x0002,

0xfeea,	// (0x000301ed) rs_indi_pane_g

0x2bd0,	// (0x00022ed3) bg_popup_preview_window_pane_cp03

0xa52b,	// (0x0002a82e) popup_fep_tooltip_window_t1

0x841b,	// (0x0002871e) popup_note2_window_g2_ParamLimits

0x841b,	// (0x0002871e) popup_note2_window_g2

0x0001,

0xfc83,	// (0x0002ff86) popup_note2_window_g_ParamLimits

0xfc83,	// (0x0002ff86) popup_note2_window_g

0x88a2,	// (0x00028ba5) bg_popup_sub_pane_cp11_ParamLimits

0x88af,	// (0x00028bb2) cell_ai3_links_pane_g1_ParamLimits

0x88c6,	// (0x00028bc9) cell_ai3_links_pane_t1

0xf538,	// (0x0002f83b) set_text_pane_t1_copy1_ParamLimits

0x2aed,	// (0x00022df0) cell_graphic_popup_pane_cp2_ParamLimits

0x2aed,	// (0x00022df0) cell_graphic_popup_pane_cp2

0x1565,	// (0x00021868) cell_graphic_popup_pane_g1_cp2

0x1cc6,	// (0x00021fc9) cell_graphic_popup_pane_g2_cp2

0xa539,	// (0x0002a83c) cell_graphic_popup_pane_g3_cp2

0xa541,	// (0x0002a844) cell_graphic_popup_pane_t2_cp2

0x1cd7,	// (0x00021fda) grid_highlight_pane_cp3_cp2

0x2322,	// (0x00022625) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x1f93,	// (0x00022296) main_tmo_pane_ParamLimits

0xd151,	// (0x0002d454) popup_tmo_big_image_note_window

0x9c53,	// (0x00029f56) cell_ai5_widget_list_pane

0x9c5b,	// (0x00029f5e) cell_ai5_widget_lrg_icon_pane

0x14b6,	// (0x000217b9) tmo_note_info_pane_t1_ParamLimits

0x14cb,	// (0x000217ce) tmo_note_info_pane_t2_ParamLimits

0x14e2,	// (0x000217e5) tmo_note_info_pane_t3_ParamLimits

0xa17c,	// (0x0002a47f) tmo_note_info_pane_t4_ParamLimits

0xa18e,	// (0x0002a491) tmo_note_info_pane_t5_ParamLimits

0xfed8,	// (0x000301db) tmo_note_info_pane_t_ParamLimits

0xa2bf,	// (0x0002a5c2) settings_container_pane_ParamLimits

0xa4c2,	// (0x0002a7c5) indicator_popup_pane_cp5

0xa4c2,	// (0x0002a7c5) indicator_popup_pane_cp6

0x4f30,	// (0x00025233) list_set_graphic_pane_copy1_ParamLimits

0x1630,	// (0x00021933) bg_popup_window_pane_cp23

0xa54f,	// (0x0002a852) popup_tmo_big_image_note_window_g1

0xa558,	// (0x0002a85b) popup_tmo_big_image_note_window_t1

0xa568,	// (0x0002a86b) popup_tmo_big_image_note_window_t2

0xa578,	// (0x0002a87b) popup_tmo_big_image_note_window_t3

0x0002,

0xfef1,	// (0x000301f4) popup_tmo_big_image_note_window_t

0xa588,	// (0x0002a88b) cell_ai5_widget_lrg_icon_pane_g1

0xa590,	// (0x0002a893) cell_ai5_widget_lrg_icon_pane_t1

0xa59e,	// (0x0002a8a1) cell_ai5_widget_list_row_pane_ParamLimits

0xa59e,	// (0x0002a8a1) cell_ai5_widget_list_row_pane

0xa5b6,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa5b6,	// (0x0002a8b9) cell_ai5_widget_list_row_pane_g1

0xa5c3,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa5c3,	// (0x0002a8c6) cell_ai5_widget_list_row_pane_t1

0xa5db,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa5db,	// (0x0002a8de) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfef8,	// (0x000301fb) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfef8,	// (0x000301fb) cell_ai5_widget_list_row_pane_t

0xb7fa,	// (0x0002bafd) main_fep_vtchi_ss_pane

0xe43c,	// (0x0002e73f) popup_fep_char_pre_window

0xe444,	// (0x0002e747) popup_fep_ituss_window

0xe465,	// (0x0002e768) popup_fep_vkbss_window

0xa603,	// (0x0002a906) grid_vkbss_keypad_pane_ParamLimits

0xa603,	// (0x0002a906) grid_vkbss_keypad_pane

0xa613,	// (0x0002a916) ituss_keypad_pane

0xe490,	// (0x0002e793) aid_vkbss_key_offset_ParamLimits

0xe490,	// (0x0002e793) aid_vkbss_key_offset

0xe49c,	// (0x0002e79f) cell_vkbss_key_pane_ParamLimits

0xe49c,	// (0x0002e79f) cell_vkbss_key_pane

0x3279,	// (0x0002357c) bg_cell_vkbss_key_g1_ParamLimits

0x3279,	// (0x0002357c) bg_cell_vkbss_key_g1

0xa623,	// (0x0002a926) cell_vkbss_key_3p_pane_ParamLimits

0xa623,	// (0x0002a926) cell_vkbss_key_3p_pane

0xa63d,	// (0x0002a940) cell_vkbss_key_g1_ParamLimits

0xa63d,	// (0x0002a940) cell_vkbss_key_g1

0xa657,	// (0x0002a95a) cell_vkbss_key_t1_ParamLimits

0xa657,	// (0x0002a95a) cell_vkbss_key_t1

0xe4b2,	// (0x0002e7b5) cell_ituss_key_pane_ParamLimits

0xe4b2,	// (0x0002e7b5) cell_ituss_key_pane

0xa682,	// (0x0002a985) bg_cell_ituss_key_g1_ParamLimits

0xa682,	// (0x0002a985) bg_cell_ituss_key_g1

0xa68e,	// (0x0002a991) cell_ituss_key_pane_g1_ParamLimits

0xa68e,	// (0x0002a991) cell_ituss_key_pane_g1

0xa6a2,	// (0x0002a9a5) cell_ituss_key_pane_g2_ParamLimits

0xa6a2,	// (0x0002a9a5) cell_ituss_key_pane_g2

0x0001,

0xfeff,	// (0x00030202) cell_ituss_key_pane_g_ParamLimits

0xfeff,	// (0x00030202) cell_ituss_key_pane_g

0xa6d0,	// (0x0002a9d3) cell_ituss_key_t1_ParamLimits

0xa6d0,	// (0x0002a9d3) cell_ituss_key_t1

0xa706,	// (0x0002aa09) cell_ituss_key_t2_ParamLimits

0xa706,	// (0x0002aa09) cell_ituss_key_t2

0xa737,	// (0x0002aa3a) cell_ituss_key_t3_ParamLimits

0xa737,	// (0x0002aa3a) cell_ituss_key_t3

0xa771,	// (0x0002aa74) cell_ituss_key_t4_ParamLimits

0xa771,	// (0x0002aa74) cell_ituss_key_t4

0x0003,

0xff04,	// (0x00030207) cell_ituss_key_t_ParamLimits

0xff04,	// (0x00030207) cell_ituss_key_t

0xa7bb,	// (0x0002aabe) cell_vkbss_key_3p_pane_g1

0xa7b3,	// (0x0002aab6) cell_vkbss_key_3p_pane_g2

0xa7ab,	// (0x0002aaae) cell_vkbss_key_3p_pane_g3

0x0002,

0xff0d,	// (0x00030210) cell_vkbss_key_3p_pane_g

0x1630,	// (0x00021933) bg_popup_fep_char_preview_window_cp02

0xa7c3,	// (0x0002aac6) popup_fep_char_pre_window_t1

0x1310,	// (0x00021613) main_ai5_sk_pane

0xa208,	// (0x0002a50b) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa214,	// (0x0002a517) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa227,	// (0x0002a52a) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa233,	// (0x0002a536) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfee3,	// (0x000301e6) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa245,	// (0x0002a548) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x1f93,	// (0x00022296) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0x1603,	// (0x00021906) main_ai5_sk_pane_g1

0x38d4,	// (0x00023bd7) popup_query_code_window_g1

0xe45a,	// (0x0002e75d) popup_fep_vkb_icf_pane

0xe46e,	// (0x0002e771) popup_fep_vtchi_icf_pane

0x1f93,	// (0x00022296) bg_icf_pane

0xa801,	// (0x0002ab04) list_vkb_icf_pane

0x1f93,	// (0x00022296) bg_icf_pane_cp01

0xa80d,	// (0x0002ab10) vtchi_icf_list_pane

0xa81e,	// (0x0002ab21) list_vkb_icf_pane_t1_ParamLimits

0xa81e,	// (0x0002ab21) list_vkb_icf_pane_t1

0xa837,	// (0x0002ab3a) vtchi_icf_list_pane_t1_ParamLimits

0xa837,	// (0x0002ab3a) vtchi_icf_list_pane_t1

0xe444,	// (0x0002e747) popup_fep_ituss_window_ParamLimits

0xe46e,	// (0x0002e771) popup_fep_vtchi_icf_pane_ParamLimits

0xa613,	// (0x0002a916) ituss_keypad_pane_ParamLimits

0xe484,	// (0x0002e787) ituss_sks_pane

0x1f93,	// (0x00022296) bg_icf_pane_ParamLimits

0xe42d,	// (0x0002e730) icf_edit_indi_pane_ParamLimits

0xe42d,	// (0x0002e730) icf_edit_indi_pane

0xa801,	// (0x0002ab04) list_vkb_icf_pane_ParamLimits

0x1f93,	// (0x00022296) bg_icf_pane_cp01_ParamLimits

0xe42d,	// (0x0002e730) icf_edit_indi_pane_cp01_ParamLimits

0xe42d,	// (0x0002e730) icf_edit_indi_pane_cp01

0xa815,	// (0x0002ab18) vtchi_query_pane

0x5ca3,	// (0x00025fa6) icf_edit_indi_pane_g1_ParamLimits

0x5ca3,	// (0x00025fa6) icf_edit_indi_pane_g1

0xa8c4,	// (0x0002abc7) icf_edit_indi_pane_g2_ParamLimits

0xa8c4,	// (0x0002abc7) icf_edit_indi_pane_g2

0x0001,

0xff25,	// (0x00030228) icf_edit_indi_pane_g_ParamLimits

0xff25,	// (0x00030228) icf_edit_indi_pane_g

0xa8d3,	// (0x0002abd6) icf_edit_indi_pane_t1

0xa85a,	// (0x0002ab5d) bg_input_focus_pane_cp042

0x1eaa,	// (0x000221ad) vtchi_button_pane

0xa863,	// (0x0002ab66) vtchi_query_pane_t1

0xa871,	// (0x0002ab74) vtchi_query_pane_t2

0xa87f,	// (0x0002ab82) vtchi_query_pane_t3

0x0002,

0xff14,	// (0x00030217) vtchi_query_pane_t

0x1630,	// (0x00021933) bg_button_pane_cp13

0xa88d,	// (0x0002ab90) vtchi_button_pane_g1

0xa895,	// (0x0002ab98) ituss_sks_pane_g1

0xa8a0,	// (0x0002aba3) ituss_sks_pane_g2

0x0001,

0xff1b,	// (0x0003021e) ituss_sks_pane_g

0xa8a8,	// (0x0002abab) ituss_sks_pane_t1

0xa8b6,	// (0x0002abb9) ituss_sks_pane_t2

0x0001,

0xff20,	// (0x00030223) ituss_sks_pane_t

0x547f,	// (0x00025782) indicator_nsta_pane_cp_g1

0x5488,	// (0x0002578b) indicator_nsta_pane_cp_g2

0x5490,	// (0x00025793) indicator_nsta_pane_cp_g3

0x5498,	// (0x0002579b) indicator_nsta_pane_cp_g4

0x54a0,	// (0x000257a3) indicator_nsta_pane_cp_g5

0x54a0,	// (0x000257a3) indicator_nsta_pane_cp_g6

0x0005,

0xfac1,	// (0x0002fdc4) indicator_nsta_pane_cp_g

0xe05d,	// (0x0002e360) cell_graphic2_pane_t2_ParamLimits

0xe05d,	// (0x0002e360) cell_graphic2_pane_t2

0x0001,

0xfdda,	// (0x000300dd) cell_graphic2_pane_t_ParamLimits

0xfdda,	// (0x000300dd) cell_graphic2_pane_t

0xe08a,	// (0x0002e38d) cell_graphic2_control_pane_t1

0x2697,	// (0x0002299a) signal_pane_g3_ParamLimits

0x2697,	// (0x0002299a) signal_pane_g3

0x26a9,	// (0x000229ac) signal_pane_g4_ParamLimits

0x26a9,	// (0x000229ac) signal_pane_g4

0xa5ed,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa5ed,	// (0x0002a8f0) cell_ai5_widget_list_row_pane_t3

0xa6be,	// (0x0002a9c1) cell_ituss_key_pane_t1_ParamLimits

0xa6be,	// (0x0002a9c1) cell_ituss_key_pane_t1

0x3512,	// (0x00023815) form_field_data_wide_pane_vc_t2_ParamLimits

0x3512,	// (0x00023815) form_field_data_wide_pane_vc_t2

0x3526,	// (0x00023829) form_field_data_wide_pane_vc_t3_ParamLimits

0x3526,	// (0x00023829) form_field_data_wide_pane_vc_t3

0x0002,

0xf80f,	// (0x0002fb12) form_field_data_wide_pane_vc_t_ParamLimits

0xf80f,	// (0x0002fb12) form_field_data_wide_pane_vc_t

0x513b,	// (0x0002543e) form_field_slider_wide_pane_vc_t3_ParamLimits

0x513b,	// (0x0002543e) form_field_slider_wide_pane_vc_t3

0x5215,	// (0x00025518) form_field_popup_wide_pane_vc_t2_ParamLimits

0x5215,	// (0x00025518) form_field_popup_wide_pane_vc_t2

0x522c,	// (0x0002552f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x522c,	// (0x0002552f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfab0,	// (0x0002fdb3) form_field_popup_wide_pane_vc_t_ParamLimits

0xfab0,	// (0x0002fdb3) form_field_popup_wide_pane_vc_t

0xe34d,	// (0x0002e650) aid_fshwr2_btn_pane_ParamLimits

0xe359,	// (0x0002e65c) aid_fshwr2_syb_pane_ParamLimits

0xe365,	// (0x0002e668) aid_fshwr2_txt_pane_ParamLimits

0xd346,	// (0x0002d649) fshwr2_bg_pane_ParamLimits

0xe371,	// (0x0002e674) fshwr2_func_candi_pane_ParamLimits

0xe386,	// (0x0002e689) fshwr2_hwr_syb_pane_ParamLimits

0xe396,	// (0x0002e699) fshwr2_icf_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_av_nhd4_prt_tch_Small

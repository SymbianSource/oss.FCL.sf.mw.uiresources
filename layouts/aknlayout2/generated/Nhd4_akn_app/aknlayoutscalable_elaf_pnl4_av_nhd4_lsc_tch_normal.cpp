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

#include "aknlayoutscalable_elaf_pnl4_av_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002036 };

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
0x9478,	// (0x0000b4ae) Screen

0x9484,	// (0x0000b4ba) application_window_ParamLimits

0x9484,	// (0x0000b4ba) application_window

0xe6a6,	// (0x000106dc) screen_g1

0x94bc,	// (0x0000b4f2) area_bottom_pane_ParamLimits

0x94bc,	// (0x0000b4f2) area_bottom_pane

0xe6d0,	// (0x00010706) area_top_pane_ParamLimits

0xe6d0,	// (0x00010706) area_top_pane

0xe764,	// (0x0001079a) main_pane_ParamLimits

0xe764,	// (0x0001079a) main_pane

0xe81f,	// (0x00010855) misc_graphics

0xb2d0,	// (0x0000d306) battery_pane_ParamLimits

0xb2d0,	// (0x0000d306) battery_pane

0x2042,	// (0x00004078) bg_status_flat_pane_g8

0x204a,	// (0x00004080) bg_status_flat_pane_g9

0x11bf,	// (0x000031f5) context_pane_ParamLimits

0x11bf,	// (0x000031f5) context_pane

0xb43b,	// (0x0000d471) navi_pane_ParamLimits

0xb43b,	// (0x0000d471) navi_pane

0xb4b9,	// (0x0000d4ef) signal_pane_ParamLimits

0xb4b9,	// (0x0000d4ef) signal_pane

0x0008,

0xf86f,	// (0x000118a5) bg_status_flat_pane_g

0xb549,	// (0x0000d57f) status_pane_g1_ParamLimits

0xb549,	// (0x0000d57f) status_pane_g1

0xb55f,	// (0x0000d595) status_pane_g2_ParamLimits

0xb55f,	// (0x0000d595) status_pane_g2

0x13e6,	// (0x0000341c) status_pane_g3_ParamLimits

0x13e6,	// (0x0000341c) status_pane_g3

0x0004,

0xf79b,	// (0x000117d1) status_pane_g_ParamLimits

0xf79b,	// (0x000117d1) status_pane_g

0xb56b,	// (0x0000d5a1) title_pane_ParamLimits

0xb56b,	// (0x0000d5a1) title_pane

0xb5ce,	// (0x0000d604) uni_indicator_pane_ParamLimits

0xb5ce,	// (0x0000d604) uni_indicator_pane

0x0a54,	// (0x00002a8a) bg_list_pane_ParamLimits

0x0a54,	// (0x00002a8a) bg_list_pane

0xaa88,	// (0x0000cabe) find_pane

0xaa90,	// (0x0000cac6) listscroll_app_pane_ParamLimits

0xaa90,	// (0x0000cac6) listscroll_app_pane

0x0a88,	// (0x00002abe) listscroll_form_pane

0xaaa0,	// (0x0000cad6) listscroll_gen_pane_ParamLimits

0xaaa0,	// (0x0000cad6) listscroll_gen_pane

0x0aa4,	// (0x00002ada) listscroll_set_pane

0x2e0d,	// (0x00004e43) main_idle_act_pane

0x054b,	// (0x00002581) main_idle_trad_pane

0x054b,	// (0x00002581) main_list_empty_pane

0x0abe,	// (0x00002af4) main_midp_pane

0x0aca,	// (0x00002b00) main_pane_g1_ParamLimits

0x0aca,	// (0x00002b00) main_pane_g1

0xaab4,	// (0x0000caea) popup_ai_message_window_ParamLimits

0xaab4,	// (0x0000caea) popup_ai_message_window

0xab65,	// (0x0000cb9b) popup_fep_china_uni_window_ParamLimits

0xab65,	// (0x0000cb9b) popup_fep_china_uni_window

0xabbf,	// (0x0000cbf5) popup_fep_japan_candidate_window_ParamLimits

0xabbf,	// (0x0000cbf5) popup_fep_japan_candidate_window

0xabdd,	// (0x0000cc13) popup_fep_japan_predictive_window_ParamLimits

0xabdd,	// (0x0000cc13) popup_fep_japan_predictive_window

0xabef,	// (0x0000cc25) popup_find_window

0xac0c,	// (0x0000cc42) popup_grid_graphic_window_ParamLimits

0xac0c,	// (0x0000cc42) popup_grid_graphic_window

0xacaa,	// (0x0000cce0) popup_large_graphic_colour_window

0xacd0,	// (0x0000cd06) popup_menu_window_ParamLimits

0xacd0,	// (0x0000cd06) popup_menu_window

0xaea2,	// (0x0000ced8) popup_note_image_window

0xae68,	// (0x0000ce9e) popup_note_wait_window_ParamLimits

0xae68,	// (0x0000ce9e) popup_note_wait_window

0xaeba,	// (0x0000cef0) popup_note_window_ParamLimits

0xaeba,	// (0x0000cef0) popup_note_window

0xaf69,	// (0x0000cf9f) popup_query_code_window_ParamLimits

0xaf69,	// (0x0000cf9f) popup_query_code_window

0xafa3,	// (0x0000cfd9) popup_query_data_code_window_ParamLimits

0xafa3,	// (0x0000cfd9) popup_query_data_code_window

0xafc0,	// (0x0000cff6) popup_query_data_window_ParamLimits

0xafc0,	// (0x0000cff6) popup_query_data_window

0xb042,	// (0x0000d078) popup_query_sat_info_window_ParamLimits

0xb042,	// (0x0000d078) popup_query_sat_info_window

0xb0d9,	// (0x0000d10f) popup_snote_single_graphic_window_ParamLimits

0xb0d9,	// (0x0000d10f) popup_snote_single_graphic_window

0xb0d9,	// (0x0000d10f) popup_snote_single_text_window_ParamLimits

0xb0d9,	// (0x0000d10f) popup_snote_single_text_window

0x0f36,	// (0x00002f6c) popup_sub_window_general

0xb236,	// (0x0000d26c) popup_window_general_ParamLimits

0xb236,	// (0x0000d26c) popup_window_general

0x107b,	// (0x000030b1) power_save_pane

0xa8f0,	// (0x0000c926) control_pane_g1_ParamLimits

0xa8f0,	// (0x0000c926) control_pane_g1

0xa919,	// (0x0000c94f) control_pane_g2_ParamLimits

0xa919,	// (0x0000c94f) control_pane_g2

0x08f9,	// (0x0000292f) control_pane_g3_ParamLimits

0x08f9,	// (0x0000292f) control_pane_g3

0x0007,

0xf783,	// (0x000117b9) control_pane_g_ParamLimits

0xf783,	// (0x000117b9) control_pane_g

0xa981,	// (0x0000c9b7) control_pane_t1_ParamLimits

0xa981,	// (0x0000c9b7) control_pane_t1

0xa9df,	// (0x0000ca15) control_pane_t2_ParamLimits

0xa9df,	// (0x0000ca15) control_pane_t2

0x0002,

0xf794,	// (0x000117ca) control_pane_t_ParamLimits

0xf794,	// (0x000117ca) control_pane_t

0xa849,	// (0x0000c87f) navi_navi_volume_pane_cp1

0xa851,	// (0x0000c887) status_small_icon_pane

0x07e0,	// (0x00002816) status_small_pane_g1_ParamLimits

0x07e0,	// (0x00002816) status_small_pane_g1

0xa859,	// (0x0000c88f) status_small_pane_g2_ParamLimits

0xa859,	// (0x0000c88f) status_small_pane_g2

0xa865,	// (0x0000c89b) status_small_pane_g3_ParamLimits

0xa865,	// (0x0000c89b) status_small_pane_g3

0xa871,	// (0x0000c8a7) status_small_pane_g4_ParamLimits

0xa871,	// (0x0000c8a7) status_small_pane_g4

0xa87d,	// (0x0000c8b3) status_small_pane_g5_ParamLimits

0xa87d,	// (0x0000c8b3) status_small_pane_g5

0xa88b,	// (0x0000c8c1) status_small_pane_g6_ParamLimits

0xa88b,	// (0x0000c8c1) status_small_pane_g6

0x0007,

0xf772,	// (0x000117a8) status_small_pane_g_ParamLimits

0xf772,	// (0x000117a8) status_small_pane_g

0xa8ba,	// (0x0000c8f0) status_small_pane_t1

0xa8dc,	// (0x0000c912) status_small_wait_pane_ParamLimits

0xa8dc,	// (0x0000c912) status_small_wait_pane

0xa531,	// (0x0000c567) aid_levels_signal_ParamLimits

0xa531,	// (0x0000c567) aid_levels_signal

0xa549,	// (0x0000c57f) signal_pane_g1_ParamLimits

0xa549,	// (0x0000c57f) signal_pane_g1

0xa564,	// (0x0000c59a) signal_pane_g2_ParamLimits

0xa564,	// (0x0000c59a) signal_pane_g2

0x0003,

0xf703,	// (0x00011739) signal_pane_g_ParamLimits

0xf703,	// (0x00011739) signal_pane_g

0xf3ef,	// (0x00011425) context_pane_g1

0x96ba,	// (0x0000b6f0) title_pane_g1

0x96f1,	// (0x0000b727) title_pane_t1

0xe855,	// (0x0001088b) title_pane_t2

0xe87b,	// (0x000108b1) title_pane_t3

0x0002,

0xf557,	// (0x0001158d) title_pane_t

0xb5f6,	// (0x0000d62c) aid_levels_battery_ParamLimits

0xb5f6,	// (0x0000d62c) aid_levels_battery

0xb612,	// (0x0000d648) battery_pane_g1_ParamLimits

0xb612,	// (0x0000d648) battery_pane_g1

0xb62f,	// (0x0000d665) battery_pane_g2_ParamLimits

0xb62f,	// (0x0000d665) battery_pane_g2

0x0001,

0xf7a6,	// (0x000117dc) battery_pane_g_ParamLimits

0xf7a6,	// (0x000117dc) battery_pane_g

0xbccc,	// (0x0000dd02) uni_indicator_pane_g1

0xbce2,	// (0x0000dd18) uni_indicator_pane_g2

0xbcf8,	// (0x0000dd2e) uni_indicator_pane_g3

0x0005,

0xf917,	// (0x0001194d) uni_indicator_pane_g

0x03bd,	// (0x000023f3) navi_icon_pane_ParamLimits

0x03bd,	// (0x000023f3) navi_icon_pane

0x0307,	// (0x0000233d) navi_midp_pane

0x03d9,	// (0x0000240f) navi_navi_pane

0x03e3,	// (0x00002419) navi_text_pane_ParamLimits

0x03e3,	// (0x00002419) navi_text_pane

0xe6a6,	// (0x000106dc) status_small_wait_pane_g1

0xeae6,	// (0x00010b1c) status_small_wait_pane_g2

0x0001,

0xf912,	// (0x00011948) status_small_wait_pane_g

0xbc25,	// (0x0000dc5b) navi_navi_icon_text_pane

0x27ff,	// (0x00004835) navi_navi_pane_g1_ParamLimits

0x27ff,	// (0x00004835) navi_navi_pane_g1

0x2811,	// (0x00004847) navi_navi_pane_g2_ParamLimits

0x2811,	// (0x00004847) navi_navi_pane_g2

0x0001,

0xf8e0,	// (0x00011916) navi_navi_pane_g_ParamLimits

0xf8e0,	// (0x00011916) navi_navi_pane_g

0x2823,	// (0x00004859) navi_navi_tabs_pane

0x282c,	// (0x00004862) navi_navi_text_pane

0xbc25,	// (0x0000dc5b) navi_navi_volume_pane

0x27d3,	// (0x00004809) navi_text_pane_t1

0x27c7,	// (0x000047fd) navi_icon_pane_g1

0x271a,	// (0x00004750) navi_navi_text_pane_t1

0xbc11,	// (0x0000dc47) navi_navi_volume_pane_g1

0x2711,	// (0x00004747) volume_small_pane

0x266f,	// (0x000046a5) navi_navi_icon_text_pane_g1

0xbb75,	// (0x0000dbab) navi_navi_icon_text_pane_t1

0x03d9,	// (0x0000240f) navi_tabs_2_long_pane

0x03d9,	// (0x0000240f) navi_tabs_2_pane

0x03d9,	// (0x0000240f) navi_tabs_3_long_pane

0x03d9,	// (0x0000240f) navi_tabs_3_pane

0x03d9,	// (0x0000240f) navi_tabs_4_pane

0x25ce,	// (0x00004604) tabs_2_active_pane_ParamLimits

0x25ce,	// (0x00004604) tabs_2_active_pane

0x25de,	// (0x00004614) tabs_2_passive_pane_ParamLimits

0x25de,	// (0x00004614) tabs_2_passive_pane

0x259c,	// (0x000045d2) tabs_3_active_pane_ParamLimits

0x259c,	// (0x000045d2) tabs_3_active_pane

0x25ac,	// (0x000045e2) tabs_3_passive_pane_ParamLimits

0x25ac,	// (0x000045e2) tabs_3_passive_pane

0x25bd,	// (0x000045f3) tabs_3_passive_pane_cp_ParamLimits

0x25bd,	// (0x000045f3) tabs_3_passive_pane_cp

0x2558,	// (0x0000458e) tabs_4_active_pane_ParamLimits

0x2558,	// (0x0000458e) tabs_4_active_pane

0x2569,	// (0x0000459f) tabs_4_passive_pane_ParamLimits

0x2569,	// (0x0000459f) tabs_4_passive_pane

0x257a,	// (0x000045b0) tabs_4_passive_pane_cp_ParamLimits

0x257a,	// (0x000045b0) tabs_4_passive_pane_cp

0x258b,	// (0x000045c1) tabs_4_passive_pane_cp2_ParamLimits

0x258b,	// (0x000045c1) tabs_4_passive_pane_cp2

0x2534,	// (0x0000456a) tabs_2_long_active_pane_ParamLimits

0x2534,	// (0x0000456a) tabs_2_long_active_pane

0x2546,	// (0x0000457c) tabs_2_long_passive_pane_ParamLimits

0x2546,	// (0x0000457c) tabs_2_long_passive_pane

0x24ef,	// (0x00004525) tabs_3_long_active_pane_ParamLimits

0x24ef,	// (0x00004525) tabs_3_long_active_pane

0x2508,	// (0x0000453e) tabs_3_long_passive_pane_ParamLimits

0x2508,	// (0x0000453e) tabs_3_long_passive_pane

0x251b,	// (0x00004551) tabs_3_long_passive_pane_cp_ParamLimits

0x251b,	// (0x00004551) tabs_3_long_passive_pane_cp

0x2495,	// (0x000044cb) volume_small_pane_g1

0x249e,	// (0x000044d4) volume_small_pane_g2

0x24a7,	// (0x000044dd) volume_small_pane_g3

0x24b0,	// (0x000044e6) volume_small_pane_g4

0x24b9,	// (0x000044ef) volume_small_pane_g5

0x24c2,	// (0x000044f8) volume_small_pane_g6

0x24cb,	// (0x00004501) volume_small_pane_g7

0x24d4,	// (0x0000450a) volume_small_pane_g8

0x24dd,	// (0x00004513) volume_small_pane_g9

0x24e6,	// (0x0000451c) volume_small_pane_g10

0x0009,

0xf8ac,	// (0x000118e2) volume_small_pane_g

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp2_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp2

0x977d,	// (0x0000b7b3) tabs_3_active_pane_g1

0x9785,	// (0x0000b7bb) tabs_3_active_pane_t1

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp2_ParamLimits

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp2

0x977d,	// (0x0000b7b3) tabs_3_passive_pane_g1

0x9785,	// (0x0000b7bb) tabs_3_passive_pane_t1

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp3_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp3

0x9797,	// (0x0000b7cd) tabs_4_active_pane_g1

0x979f,	// (0x0000b7d5) tabs_4_active_pane_t1

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp3_ParamLimits

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp3

0x9797,	// (0x0000b7cd) tabs_4_1_passive_pane_g1

0x979f,	// (0x0000b7d5) tabs_4_1_passive_pane_t1

0x0abe,	// (0x00002af4) list_highlight_pane_cp2

0xbebc,	// (0x0000def2) list_set_pane_ParamLimits

0xbebc,	// (0x0000def2) list_set_pane

0xbf56,	// (0x0000df8c) main_pane_set_t1_ParamLimits

0xbf56,	// (0x0000df8c) main_pane_set_t1

0xbf76,	// (0x0000dfac) main_pane_set_t2_ParamLimits

0xbf76,	// (0x0000dfac) main_pane_set_t2

0xbf8a,	// (0x0000dfc0) main_pane_set_t3_ParamLimits

0xbf8a,	// (0x0000dfc0) main_pane_set_t3

0xbf9c,	// (0x0000dfd2) main_pane_set_t4_ParamLimits

0xbf9c,	// (0x0000dfd2) main_pane_set_t4

0x0003,

0xf97c,	// (0x000119b2) main_pane_set_t_ParamLimits

0xf97c,	// (0x000119b2) main_pane_set_t

0xbfae,	// (0x0000dfe4) setting_code_pane

0xbfb8,	// (0x0000dfee) setting_slider_graphic_pane

0xbfb8,	// (0x0000dfee) setting_slider_pane

0xbfb8,	// (0x0000dfee) setting_text_pane

0xbfb8,	// (0x0000dfee) setting_volume_pane

0x97b1,	// (0x0000b7e7) volume_set_pane

0xe89b,	// (0x000108d1) bg_set_opt_pane_cp

0x97b9,	// (0x0000b7ef) setting_slider_pane_t1

0x97d2,	// (0x0000b808) setting_slider_pane_t2

0x97ec,	// (0x0000b822) setting_slider_pane_t3

0x0002,

0xf55e,	// (0x00011594) setting_slider_pane_t

0x9804,	// (0x0000b83a) slider_set_pane

0xe81f,	// (0x00010855) bg_set_opt_pane_cp2

0xe8a9,	// (0x000108df) setting_slider_graphic_pane_g1

0x981a,	// (0x0000b850) setting_slider_graphic_pane_t1

0x982a,	// (0x0000b860) setting_slider_graphic_pane_t2

0x0001,

0xf565,	// (0x0001159b) setting_slider_graphic_pane_t

0x983a,	// (0x0000b870) slider_set_pane_cp

0xe81f,	// (0x00010855) input_focus_pane_cp1

0x2df4,	// (0x00004e2a) list_set_text_pane

0xe6a6,	// (0x000106dc) setting_text_pane_g1

0xe81f,	// (0x00010855) input_focus_pane_cp2

0xe6a6,	// (0x000106dc) setting_code_pane_g1

0xe8b2,	// (0x000108e8) setting_code_pane_t1

0xe8c0,	// (0x000108f6) set_text_pane_t1_ParamLimits

0xe8c0,	// (0x000108f6) set_text_pane_t1

0xed7b,	// (0x00010db1) set_opt_bg_pane_g1

0xed83,	// (0x00010db9) set_opt_bg_pane_g2

0xbe71,	// (0x0000dea7) set_opt_bg_pane_g3

0xed93,	// (0x00010dc9) set_opt_bg_pane_g4

0xed9b,	// (0x00010dd1) set_opt_bg_pane_g5

0xeda3,	// (0x00010dd9) set_opt_bg_pane_g6

0xbe7b,	// (0x0000deb1) set_opt_bg_pane_g7

0xbe83,	// (0x0000deb9) set_opt_bg_pane_g8

0xbe8d,	// (0x0000dec3) set_opt_bg_pane_g9

0x0008,

0xf969,	// (0x0001199f) set_opt_bg_pane_g

0xbe0c,	// (0x0000de42) slider_set_pane_g1

0x2d6a,	// (0x00004da0) slider_set_pane_g2

0x0006,

0xf95a,	// (0x00011990) slider_set_pane_g

0xbd31,	// (0x0000dd67) volume_set_pane_g1

0xbd39,	// (0x0000dd6f) volume_set_pane_g2

0xbd41,	// (0x0000dd77) volume_set_pane_g3

0xbd49,	// (0x0000dd7f) volume_set_pane_g4

0xbd51,	// (0x0000dd87) volume_set_pane_g5

0xbd59,	// (0x0000dd8f) volume_set_pane_g6

0xbd61,	// (0x0000dd97) volume_set_pane_g7

0xbd69,	// (0x0000dd9f) volume_set_pane_g8

0xbd71,	// (0x0000dda7) volume_set_pane_g9

0xbd79,	// (0x0000ddaf) volume_set_pane_g10

0x0009,

0xf932,	// (0x00011968) volume_set_pane_g

0x9842,	// (0x0000b878) indicator_pane_ParamLimits

0x9842,	// (0x0000b878) indicator_pane

0x986a,	// (0x0000b8a0) main_idle_pane_g2_ParamLimits

0x986a,	// (0x0000b8a0) main_idle_pane_g2

0x98a2,	// (0x0000b8d8) main_pane_idle_g1_ParamLimits

0x98a2,	// (0x0000b8d8) main_pane_idle_g1

0xe8da,	// (0x00010910) popup_clock_digital_analogue_window_ParamLimits

0xe8da,	// (0x00010910) popup_clock_digital_analogue_window

0x98c9,	// (0x0000b8ff) soft_indicator_pane_ParamLimits

0x98c9,	// (0x0000b8ff) soft_indicator_pane

0x98ed,	// (0x0000b923) wallpaper_pane_ParamLimits

0x98ed,	// (0x0000b923) wallpaper_pane

0xe6a6,	// (0x000106dc) wallpaper_pane_g1

0x98ff,	// (0x0000b935) indicator_pane_g1_ParamLimits

0x98ff,	// (0x0000b935) indicator_pane_g1

0x3366,	// (0x0000539c) navi_navi_icon_text_pane_srt_g1

0xe908,	// (0x0001093e) soft_indicator_pane_t1

0xe922,	// (0x00010958) aid_ps_area_pane

0x9915,	// (0x0000b94b) aid_ps_clock_pane

0xe933,	// (0x00010969) aid_ps_indicator_pane

0xe93f,	// (0x00010975) indicator_ps_pane_ParamLimits

0xe93f,	// (0x00010975) indicator_ps_pane

0xe94e,	// (0x00010984) power_save_pane_g1_ParamLimits

0xe94e,	// (0x00010984) power_save_pane_g1

0xe95a,	// (0x00010990) power_save_pane_g2_ParamLimits

0xe95a,	// (0x00010990) power_save_pane_g2

0xe6b0,	// (0x000106e6) aid_navinavi_width_pane

0xe922,	// (0x00010958) aid_ps_area_pane_ParamLimits

0x0001,

0xf56a,	// (0x000115a0) power_save_pane_g_ParamLimits

0xf56a,	// (0x000115a0) power_save_pane_g

0xe968,	// (0x0001099e) power_save_pane_t1_ParamLimits

0xe968,	// (0x0001099e) power_save_pane_t1

0x9915,	// (0x0000b94b) aid_ps_clock_pane_ParamLimits

0xe933,	// (0x00010969) aid_ps_indicator_pane_ParamLimits

0xe97a,	// (0x000109b0) power_save_pane_t4_ParamLimits

0xe97a,	// (0x000109b0) power_save_pane_t4

0x0001,

0xf56f,	// (0x000115a5) power_save_pane_t_ParamLimits

0xf56f,	// (0x000115a5) power_save_pane_t

0xe9a4,	// (0x000109da) power_save_t3_ParamLimits

0xe9a4,	// (0x000109da) power_save_t3

0xe98f,	// (0x000109c5) power_save_t2_ParamLimits

0xe98f,	// (0x000109c5) power_save_t2

0xe9b9,	// (0x000109ef) indicator_ps_pane_g1

0x9923,	// (0x0000b959) ai_gene_pane_ParamLimits

0x9923,	// (0x0000b959) ai_gene_pane

0x993a,	// (0x0000b970) ai_links_pane_ParamLimits

0x993a,	// (0x0000b970) ai_links_pane

0x9952,	// (0x0000b988) indicator_pane_cp1_ParamLimits

0x9952,	// (0x0000b988) indicator_pane_cp1

0x9961,	// (0x0000b997) main_pane_idle_g1_cp_ParamLimits

0x9961,	// (0x0000b997) main_pane_idle_g1_cp

0x9979,	// (0x0000b9af) popup_ai_links_title_window

0x9982,	// (0x0000b9b8) soft_indicator_pane_cp1_ParamLimits

0x9982,	// (0x0000b9b8) soft_indicator_pane_cp1

0x2abe,	// (0x00004af4) ai_links_pane_g1

0x2ac7,	// (0x00004afd) grid_ai_links_pane

0xbcc3,	// (0x0000dcf9) ai_gene_pane_1

0x2aac,	// (0x00004ae2) ai_gene_pane_2

0x2ab5,	// (0x00004aeb) list_highlight_pane_cp4

0xbc9f,	// (0x0000dcd5) cell_ai_link_pane_ParamLimits

0xbc9f,	// (0x0000dcd5) cell_ai_link_pane

0x2a7d,	// (0x00004ab3) cell_ai_link_pane_g1

0xeae6,	// (0x00010b1c) cell_ai_link_pane_g2

0x0001,

0xf90d,	// (0x00011943) cell_ai_link_pane_g

0xe81f,	// (0x00010855) grid_highlight_cp2

0xe81f,	// (0x00010855) bg_popup_sub_pane_cp1

0xe9d0,	// (0x00010a06) popup_ai_links_title_window_t1

0x29cd,	// (0x00004a03) ai_gene_pane_1_g1_ParamLimits

0x29cd,	// (0x00004a03) ai_gene_pane_1_g1

0x29d9,	// (0x00004a0f) ai_gene_pane_1_g2_ParamLimits

0x29d9,	// (0x00004a0f) ai_gene_pane_1_g2

0x0001,

0xf903,	// (0x00011939) ai_gene_pane_1_g_ParamLimits

0xf903,	// (0x00011939) ai_gene_pane_1_g

0x29e6,	// (0x00004a1c) ai_gene_pane_1_t1_ParamLimits

0x29e6,	// (0x00004a1c) ai_gene_pane_1_t1

0x2a1a,	// (0x00004a50) grid_ai_soft_ind_pane

0x29b8,	// (0x000049ee) ai_gene_pane_2_t1_ParamLimits

0x29b8,	// (0x000049ee) ai_gene_pane_2_t1

0x9996,	// (0x0000b9cc) main_pane_empty_t1_ParamLimits

0x9996,	// (0x0000b9cc) main_pane_empty_t1

0x99ae,	// (0x0000b9e4) main_pane_empty_t2_ParamLimits

0x99ae,	// (0x0000b9e4) main_pane_empty_t2

0x99c3,	// (0x0000b9f9) main_pane_empty_t3_ParamLimits

0x99c3,	// (0x0000b9f9) main_pane_empty_t3

0x99d5,	// (0x0000ba0b) main_pane_empty_t4_ParamLimits

0x99d5,	// (0x0000ba0b) main_pane_empty_t4

0x99e7,	// (0x0000ba1d) main_pane_empty_t5_ParamLimits

0x99e7,	// (0x0000ba1d) main_pane_empty_t5

0x0004,

0xf574,	// (0x000115aa) main_pane_empty_t_ParamLimits

0xf574,	// (0x000115aa) main_pane_empty_t

0xedcc,	// (0x00010e02) bg_popup_window_pane_ParamLimits

0xedcc,	// (0x00010e02) bg_popup_window_pane

0xbc19,	// (0x0000dc4f) find_popup_pane_cp2_ParamLimits

0xbc19,	// (0x0000dc4f) find_popup_pane_cp2

0x2734,	// (0x0000476a) heading_pane_ParamLimits

0x2734,	// (0x0000476a) heading_pane

0xe81f,	// (0x00010855) bg_popup_sub_pane

0xbb92,	// (0x0000dbc8) bg_popup_window_pane_g1_ParamLimits

0xbb92,	// (0x0000dbc8) bg_popup_window_pane_g1

0xbba1,	// (0x0000dbd7) bg_popup_window_pane_g2_ParamLimits

0xbba1,	// (0x0000dbd7) bg_popup_window_pane_g2

0xbbad,	// (0x0000dbe3) bg_popup_window_pane_g3_ParamLimits

0xbbad,	// (0x0000dbe3) bg_popup_window_pane_g3

0xbbb9,	// (0x0000dbef) bg_popup_window_pane_g4_ParamLimits

0xbbb9,	// (0x0000dbef) bg_popup_window_pane_g4

0xbbc8,	// (0x0000dbfe) bg_popup_window_pane_g5_ParamLimits

0xbbc8,	// (0x0000dbfe) bg_popup_window_pane_g5

0xbbd8,	// (0x0000dc0e) bg_popup_window_pane_g6_ParamLimits

0xbbd8,	// (0x0000dc0e) bg_popup_window_pane_g6

0xbbe4,	// (0x0000dc1a) bg_popup_window_pane_g7_ParamLimits

0xbbe4,	// (0x0000dc1a) bg_popup_window_pane_g7

0xbbf3,	// (0x0000dc29) bg_popup_window_pane_g8_ParamLimits

0xbbf3,	// (0x0000dc29) bg_popup_window_pane_g8

0xbc02,	// (0x0000dc38) bg_popup_window_pane_g9_ParamLimits

0xbc02,	// (0x0000dc38) bg_popup_window_pane_g9

0x26fd,	// (0x00004733) bg_popup_window_pane_g10_ParamLimits

0x26fd,	// (0x00004733) bg_popup_window_pane_g10

0x0009,

0xf8cb,	// (0x00011901) bg_popup_window_pane_g_ParamLimits

0xf8cb,	// (0x00011901) bg_popup_window_pane_g

0x2626,	// (0x0000465c) bg_popup_heading_pane_ParamLimits

0x2626,	// (0x0000465c) bg_popup_heading_pane

0x32a9,	// (0x000052df) tabs_4_passive_pane_cp_srt_ParamLimits

0x32a9,	// (0x000052df) tabs_4_passive_pane_cp_srt

0x32bb,	// (0x000052f1) tabs_4_passive_pane_srt_ParamLimits

0x263a,	// (0x00004670) heading_pane_g2

0x32bb,	// (0x000052f1) tabs_4_passive_pane_srt

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp3_srt_ParamLimits

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp3_srt

0x2642,	// (0x00004678) heading_pane_t1_ParamLimits

0x2642,	// (0x00004678) heading_pane_t1

0x2659,	// (0x0000468f) heading_pane_t2_ParamLimits

0x2659,	// (0x0000468f) heading_pane_t2

0x0001,

0xf8c6,	// (0x000118fc) heading_pane_t_ParamLimits

0xf8c6,	// (0x000118fc) heading_pane_t

0x200a,	// (0x00004040) bg_popup_heading_pane_g1

0x20b9,	// (0x000040ef) bg_popup_heading_pane_g2

0x20c3,	// (0x000040f9) bg_popup_heading_pane_g3

0x20cd,	// (0x00004103) bg_popup_heading_pane_g4

0x20d7,	// (0x0000410d) bg_popup_heading_pane_g5

0x20e1,	// (0x00004117) bg_popup_heading_pane_g6

0x20e9,	// (0x0000411f) bg_popup_heading_pane_g7

0x20f1,	// (0x00004127) bg_popup_heading_pane_g8

0x20fb,	// (0x00004131) bg_popup_heading_pane_g9

0x0008,

0xf882,	// (0x000118b8) bg_popup_heading_pane_g

0x1612,	// (0x00003648) bg_popup_sub_pane_g1

0x161a,	// (0x00003650) bg_popup_sub_pane_g2

0x1622,	// (0x00003658) bg_popup_sub_pane_g3

0x162a,	// (0x00003660) bg_popup_sub_pane_g4

0x1632,	// (0x00003668) bg_popup_sub_pane_g5

0x163a,	// (0x00003670) bg_popup_sub_pane_g6

0x1642,	// (0x00003678) bg_popup_sub_pane_g7

0x164a,	// (0x00003680) bg_popup_sub_pane_g8

0x1652,	// (0x00003688) bg_popup_sub_pane_g9

0x0008,

0xf85c,	// (0x00011892) bg_popup_sub_pane_g

0xe88d,	// (0x000108c3) bg_popup_window_pane_cp5_ParamLimits

0xe88d,	// (0x000108c3) bg_popup_window_pane_cp5

0xe9ed,	// (0x00010a23) popup_note_window_g1_ParamLimits

0xe9ed,	// (0x00010a23) popup_note_window_g1

0xe9f9,	// (0x00010a2f) popup_note_window_t1_ParamLimits

0xe9f9,	// (0x00010a2f) popup_note_window_t1

0xea0f,	// (0x00010a45) popup_note_window_t2_ParamLimits

0xea0f,	// (0x00010a45) popup_note_window_t2

0xea25,	// (0x00010a5b) popup_note_window_t3_ParamLimits

0xea25,	// (0x00010a5b) popup_note_window_t3

0xea3b,	// (0x00010a71) popup_note_window_t4_ParamLimits

0xea3b,	// (0x00010a71) popup_note_window_t4

0xea63,	// (0x00010a99) popup_note_window_t5_ParamLimits

0xea63,	// (0x00010a99) popup_note_window_t5

0x0004,

0xf57f,	// (0x000115b5) popup_note_window_t_ParamLimits

0xf57f,	// (0x000115b5) popup_note_window_t

0xea87,	// (0x00010abd) bg_popup_window_pane_cp6_ParamLimits

0xea87,	// (0x00010abd) bg_popup_window_pane_cp6

0x1f86,	// (0x00003fbc) popup_note_image_window_g1_ParamLimits

0x1f86,	// (0x00003fbc) popup_note_image_window_g1

0xba37,	// (0x0000da6d) popup_note_image_window_g2_ParamLimits

0xba37,	// (0x0000da6d) popup_note_image_window_g2

0x0001,

0xf850,	// (0x00011886) popup_note_image_window_g_ParamLimits

0xf850,	// (0x00011886) popup_note_image_window_g

0x1fab,	// (0x00003fe1) popup_note_image_window_t1_ParamLimits

0x1fab,	// (0x00003fe1) popup_note_image_window_t1

0x1fc4,	// (0x00003ffa) popup_note_image_window_t2_ParamLimits

0x1fc4,	// (0x00003ffa) popup_note_image_window_t2

0x1fdd,	// (0x00004013) popup_note_image_window_t3_ParamLimits

0x1fdd,	// (0x00004013) popup_note_image_window_t3

0x0002,

0xf855,	// (0x0001188b) popup_note_image_window_t_ParamLimits

0xf855,	// (0x0001188b) popup_note_image_window_t

0x1e4f,	// (0x00003e85) bg_popup_window_pane_cp7_ParamLimits

0x1e4f,	// (0x00003e85) bg_popup_window_pane_cp7

0x1e7f,	// (0x00003eb5) popup_note_wait_window_g1_ParamLimits

0x1e7f,	// (0x00003eb5) popup_note_wait_window_g1

0x1e8b,	// (0x00003ec1) popup_note_wait_window_g2_ParamLimits

0x1e8b,	// (0x00003ec1) popup_note_wait_window_g2

0x0002,

0xf83e,	// (0x00011874) popup_note_wait_window_g_ParamLimits

0xf83e,	// (0x00011874) popup_note_wait_window_g

0x1ea3,	// (0x00003ed9) popup_note_wait_window_t1_ParamLimits

0x1ea3,	// (0x00003ed9) popup_note_wait_window_t1

0xb9d8,	// (0x0000da0e) popup_note_wait_window_t2_ParamLimits

0xb9d8,	// (0x0000da0e) popup_note_wait_window_t2

0xb9f5,	// (0x0000da2b) popup_note_wait_window_t3_ParamLimits

0xb9f5,	// (0x0000da2b) popup_note_wait_window_t3

0xba08,	// (0x0000da3e) popup_note_wait_window_t4_ParamLimits

0xba08,	// (0x0000da3e) popup_note_wait_window_t4

0x0004,

0xf845,	// (0x0001187b) popup_note_wait_window_t_ParamLimits

0xf845,	// (0x0001187b) popup_note_wait_window_t

0x1f1f,	// (0x00003f55) wait_bar_pane_ParamLimits

0x1f1f,	// (0x00003f55) wait_bar_pane

0xe81f,	// (0x00010855) wait_anim_pane

0xe81f,	// (0x00010855) wait_border_pane

0xe6a6,	// (0x000106dc) wait_anim_pane_g1

0xe6a6,	// (0x000106dc) wait_anim_pane_g2

0x0001,

0xf6fe,	// (0x00011734) wait_anim_pane_g

0x1dfb,	// (0x00003e31) wait_border_pane_g1

0x1e06,	// (0x00003e3c) wait_border_pane_g2

0x1e0f,	// (0x00003e45) wait_border_pane_g3

0x0002,

0xf837,	// (0x0001186d) wait_border_pane_g

0x1c66,	// (0x00003c9c) bg_popup_window_pane_cp16_ParamLimits

0x1c66,	// (0x00003c9c) bg_popup_window_pane_cp16

0xb988,	// (0x0000d9be) indicator_popup_pane_cp4_ParamLimits

0xb988,	// (0x0000d9be) indicator_popup_pane_cp4

0x1d7a,	// (0x00003db0) popup_query_data_window_t1_ParamLimits

0x1d7a,	// (0x00003db0) popup_query_data_window_t1

0x1d8c,	// (0x00003dc2) popup_query_data_window_t2_ParamLimits

0x1d8c,	// (0x00003dc2) popup_query_data_window_t2

0x1da5,	// (0x00003ddb) popup_query_data_window_t3_ParamLimits

0x1da5,	// (0x00003ddb) popup_query_data_window_t3

0x0002,

0xf830,	// (0x00011866) popup_query_data_window_t_ParamLimits

0xf830,	// (0x00011866) popup_query_data_window_t

0xb99c,	// (0x0000d9d2) query_popup_data_pane_ParamLimits

0xb99c,	// (0x0000d9d2) query_popup_data_pane

0xb9b0,	// (0x0000d9e6) query_popup_data_pane_cp1_ParamLimits

0xb9b0,	// (0x0000d9e6) query_popup_data_pane_cp1

0x1c66,	// (0x00003c9c) bg_popup_window_pane_cp10_ParamLimits

0x1c66,	// (0x00003c9c) bg_popup_window_pane_cp10

0xb903,	// (0x0000d939) indicator_popup_pane_ParamLimits

0xb903,	// (0x0000d939) indicator_popup_pane

0xb925,	// (0x0000d95b) popup_query_code_window_t1_ParamLimits

0xb925,	// (0x0000d95b) popup_query_code_window_t1

0xb93f,	// (0x0000d975) popup_query_code_window_t2_ParamLimits

0xb93f,	// (0x0000d975) popup_query_code_window_t2

0x1d1d,	// (0x00003d53) popup_query_code_window_t3_ParamLimits

0x1d1d,	// (0x00003d53) popup_query_code_window_t3

0x0002,

0xf829,	// (0x0001185f) popup_query_code_window_t_ParamLimits

0xf829,	// (0x0001185f) popup_query_code_window_t

0x1d4c,	// (0x00003d82) query_popup_pane_ParamLimits

0x1d4c,	// (0x00003d82) query_popup_pane

0xea87,	// (0x00010abd) bg_popup_window_pane_cp15_ParamLimits

0xea87,	// (0x00010abd) bg_popup_window_pane_cp15

0x99f9,	// (0x0000ba2f) indicator_popup_pane_cp1_ParamLimits

0x99f9,	// (0x0000ba2f) indicator_popup_pane_cp1

0x9a0c,	// (0x0000ba42) indicator_popup_pane_cp2_ParamLimits

0x9a0c,	// (0x0000ba42) indicator_popup_pane_cp2

0x9a1f,	// (0x0000ba55) popup_query_data_code_window_g1_ParamLimits

0x9a1f,	// (0x0000ba55) popup_query_data_code_window_g1

0xeaa5,	// (0x00010adb) popup_query_data_code_window_t1_ParamLimits

0xeaa5,	// (0x00010adb) popup_query_data_code_window_t1

0xeab7,	// (0x00010aed) popup_query_data_code_window_t2_ParamLimits

0xeab7,	// (0x00010aed) popup_query_data_code_window_t2

0x9a32,	// (0x0000ba68) popup_query_data_code_window_t3_ParamLimits

0x9a32,	// (0x0000ba68) popup_query_data_code_window_t3

0x9a48,	// (0x0000ba7e) popup_query_data_code_window_t4_ParamLimits

0x9a48,	// (0x0000ba7e) popup_query_data_code_window_t4

0x0003,

0xf58a,	// (0x000115c0) popup_query_data_code_window_t_ParamLimits

0xf58a,	// (0x000115c0) popup_query_data_code_window_t

0x037b,	// (0x000023b1) list_single_midp_graphic_pane_g3

0x9a60,	// (0x0000ba96) query_popup_data_pane_cp2_ParamLimits

0x9a73,	// (0x0000baa9) query_popup_pane_cp2_ParamLimits

0x9a73,	// (0x0000baa9) query_popup_pane_cp2

0xe81f,	// (0x00010855) bg_popup_window_pane_cp11

0x1c5e,	// (0x00003c94) heading_pane_cp5

0xeb13,	// (0x00010b49) listscroll_popup_info_pane

0xe81f,	// (0x00010855) input_focus_pane_cp3

0xeac9,	// (0x00010aff) query_popup_pane_t1

0xead7,	// (0x00010b0d) list_popup_info_pane_ParamLimits

0xead7,	// (0x00010b0d) list_popup_info_pane

0xeae6,	// (0x00010b1c) listscroll_popup_info_pane_g1

0xeaee,	// (0x00010b24) scroll_pane_cp7

0x9a86,	// (0x0000babc) popup_info_list_pane_t1_ParamLimits

0x9a86,	// (0x0000babc) popup_info_list_pane_t1

0x9aa0,	// (0x0000bad6) popup_info_list_pane_t2_ParamLimits

0x9aa0,	// (0x0000bad6) popup_info_list_pane_t2

0x0001,

0xf593,	// (0x000115c9) popup_info_list_pane_t_ParamLimits

0xf593,	// (0x000115c9) popup_info_list_pane_t

0xe81f,	// (0x00010855) bg_popup_window_pane_cp12

0xc1f3,	// (0x0000e229) find_popup_pane

0xe89b,	// (0x000108d1) bg_popup_window_pane_cp3

0xeaf8,	// (0x00010b2e) heading_pane_cp3

0xeb04,	// (0x00010b3a) listscroll_popup_graphic_pane

0xe81f,	// (0x00010855) bg_popup_window_pane_cp4

0x9b0a,	// (0x0000bb40) heading_pane_cp4

0xeb13,	// (0x00010b49) listscroll_popup_colour_pane

0x9b12,	// (0x0000bb48) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9b12,	// (0x0000bb48) cell_large_graphic_colour_none_popup_pane

0x9b26,	// (0x0000bb5c) grid_large_graphic_colour_popup_pane_ParamLimits

0x9b26,	// (0x0000bb5c) grid_large_graphic_colour_popup_pane

0x9b4a,	// (0x0000bb80) listscroll_popup_colour_pane_g1_ParamLimits

0x9b4a,	// (0x0000bb80) listscroll_popup_colour_pane_g1

0x9b61,	// (0x0000bb97) listscroll_popup_colour_pane_g2_ParamLimits

0x9b61,	// (0x0000bb97) listscroll_popup_colour_pane_g2

0x9b78,	// (0x0000bbae) listscroll_popup_colour_pane_g3_ParamLimits

0x9b78,	// (0x0000bbae) listscroll_popup_colour_pane_g3

0x9b88,	// (0x0000bbbe) listscroll_popup_colour_pane_g4_ParamLimits

0x9b88,	// (0x0000bbbe) listscroll_popup_colour_pane_g4

0x0003,

0xf598,	// (0x000115ce) listscroll_popup_colour_pane_g_ParamLimits

0xf598,	// (0x000115ce) listscroll_popup_colour_pane_g

0xeb1b,	// (0x00010b51) scroll_pane_cp6_ParamLimits

0xeb1b,	// (0x00010b51) scroll_pane_cp6

0x9b98,	// (0x0000bbce) cell_large_graphic_colour_popup_pane_ParamLimits

0x9b98,	// (0x0000bbce) cell_large_graphic_colour_popup_pane

0x9bb7,	// (0x0000bbed) cell_large_graphic_colour_none_popup_pane_t1

0xe81f,	// (0x00010855) grid_highlight_pane_cp5

0xeb2d,	// (0x00010b63) cell_large_graphic_colour_popup_pane_g1

0xeb35,	// (0x00010b6b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a1,	// (0x000115d7) cell_large_graphic_colour_popup_pane_g

0xeb3d,	// (0x00010b73) cell_large_graphic_colour_popup_pane_g2_copy1

0xeb46,	// (0x00010b7c) grid_highlight_pane_cp4

0xeb4e,	// (0x00010b84) bg_popup_window_pane_cp8_ParamLimits

0xeb4e,	// (0x00010b84) bg_popup_window_pane_cp8

0x9bc6,	// (0x0000bbfc) popup_snote_single_text_window_g1_ParamLimits

0x9bc6,	// (0x0000bbfc) popup_snote_single_text_window_g1

0x9bd8,	// (0x0000bc0e) popup_snote_single_text_window_t1_ParamLimits

0x9bd8,	// (0x0000bc0e) popup_snote_single_text_window_t1

0x9beb,	// (0x0000bc21) popup_snote_single_text_window_t2_ParamLimits

0x9beb,	// (0x0000bc21) popup_snote_single_text_window_t2

0x9bfe,	// (0x0000bc34) popup_snote_single_text_window_t3_ParamLimits

0x9bfe,	// (0x0000bc34) popup_snote_single_text_window_t3

0x9c37,	// (0x0000bc6d) popup_snote_single_text_window_t4_ParamLimits

0x9c37,	// (0x0000bc6d) popup_snote_single_text_window_t4

0x9c6b,	// (0x0000bca1) popup_snote_single_text_window_t5_ParamLimits

0x9c6b,	// (0x0000bca1) popup_snote_single_text_window_t5

0x0004,

0xf5a6,	// (0x000115dc) popup_snote_single_text_window_t_ParamLimits

0xf5a6,	// (0x000115dc) popup_snote_single_text_window_t

0xeb69,	// (0x00010b9f) bg_popup_window_pane_cp9_ParamLimits

0xeb69,	// (0x00010b9f) bg_popup_window_pane_cp9

0x9bc6,	// (0x0000bbfc) popup_snote_single_graphic_window_g1_ParamLimits

0x9bc6,	// (0x0000bbfc) popup_snote_single_graphic_window_g1

0xeb77,	// (0x00010bad) popup_snote_single_graphic_window_g2_ParamLimits

0xeb77,	// (0x00010bad) popup_snote_single_graphic_window_g2

0x0001,

0xf5b1,	// (0x000115e7) popup_snote_single_graphic_window_g_ParamLimits

0xf5b1,	// (0x000115e7) popup_snote_single_graphic_window_g

0xeb83,	// (0x00010bb9) popup_snote_single_graphic_window_t1_ParamLimits

0xeb83,	// (0x00010bb9) popup_snote_single_graphic_window_t1

0xeb96,	// (0x00010bcc) popup_snote_single_graphic_window_t2_ParamLimits

0xeb96,	// (0x00010bcc) popup_snote_single_graphic_window_t2

0x9bfe,	// (0x0000bc34) popup_snote_single_graphic_window_t3_ParamLimits

0x9bfe,	// (0x0000bc34) popup_snote_single_graphic_window_t3

0x9c37,	// (0x0000bc6d) popup_snote_single_graphic_window_t4_ParamLimits

0x9c37,	// (0x0000bc6d) popup_snote_single_graphic_window_t4

0x9c9a,	// (0x0000bcd0) popup_snote_single_graphic_window_t5_ParamLimits

0x9c9a,	// (0x0000bcd0) popup_snote_single_graphic_window_t5

0x0004,

0xf5b6,	// (0x000115ec) popup_snote_single_graphic_window_t_ParamLimits

0xf5b6,	// (0x000115ec) popup_snote_single_graphic_window_t

0x3229,	// (0x0000525f) grid_graphic_popup_pane_ParamLimits

0x3229,	// (0x0000525f) grid_graphic_popup_pane

0x3251,	// (0x00005287) listscroll_popup_graphic_pane_g1_ParamLimits

0x3251,	// (0x00005287) listscroll_popup_graphic_pane_g1

0xc13e,	// (0x0000e174) listscroll_popup_graphic_pane_g2_ParamLimits

0xc13e,	// (0x0000e174) listscroll_popup_graphic_pane_g2

0x0001,

0xf9a6,	// (0x000119dc) listscroll_popup_graphic_pane_g_ParamLimits

0xf9a6,	// (0x000119dc) listscroll_popup_graphic_pane_g

0x3279,	// (0x000052af) scroll_pane_cp5

0xc0f9,	// (0x0000e12f) cell_graphic_popup_pane_ParamLimits

0xc0f9,	// (0x0000e12f) cell_graphic_popup_pane

0x31a7,	// (0x000051dd) cell_graphic_popup_pane_g1

0x31af,	// (0x000051e5) cell_graphic_popup_pane_g2

0xeb3d,	// (0x00010b73) cell_graphic_popup_pane_g3

0x0002,

0xf99f,	// (0x000119d5) cell_graphic_popup_pane_g

0x31b8,	// (0x000051ee) cell_graphic_popup_pane_t2

0xeb46,	// (0x00010b7c) grid_highlight_pane_cp3

0xebbb,	// (0x00010bf1) list_gen_pane_ParamLimits

0xebbb,	// (0x00010bf1) list_gen_pane

0xebe3,	// (0x00010c19) scroll_pane

0xc063,	// (0x0000e099) bg_list_pane_g1_ParamLimits

0xc063,	// (0x0000e099) bg_list_pane_g1

0xc07e,	// (0x0000e0b4) bg_list_pane_g2_ParamLimits

0xc07e,	// (0x0000e0b4) bg_list_pane_g2

0xc091,	// (0x0000e0c7) bg_list_pane_g3_ParamLimits

0xc091,	// (0x0000e0c7) bg_list_pane_g3

0xc0a3,	// (0x0000e0d9) bg_list_pane_g4_ParamLimits

0xc0a3,	// (0x0000e0d9) bg_list_pane_g4

0xc0b5,	// (0x0000e0eb) bg_list_pane_g5_ParamLimits

0xc0b5,	// (0x0000e0eb) bg_list_pane_g5

0x0004,

0xf994,	// (0x000119ca) bg_list_pane_g_ParamLimits

0xf994,	// (0x000119ca) bg_list_pane_g

0xc007,	// (0x0000e03d) list_double2_graphic_large_graphic_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double2_graphic_large_graphic_pane

0xc007,	// (0x0000e03d) list_double2_graphic_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double2_graphic_pane

0xc007,	// (0x0000e03d) list_double2_large_graphic_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double2_large_graphic_pane

0xc007,	// (0x0000e03d) list_double2_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double2_pane

0xc007,	// (0x0000e03d) list_double_graphic_heading_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_graphic_heading_pane

0xc007,	// (0x0000e03d) list_double_graphic_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_graphic_pane

0xc007,	// (0x0000e03d) list_double_heading_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_heading_pane

0xc007,	// (0x0000e03d) list_double_large_graphic_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_large_graphic_pane

0xc007,	// (0x0000e03d) list_double_number_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_number_pane

0xc007,	// (0x0000e03d) list_double_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_pane

0xc007,	// (0x0000e03d) list_double_time_pane_ParamLimits

0xc007,	// (0x0000e03d) list_double_time_pane

0xc007,	// (0x0000e03d) list_setting_number_pane_ParamLimits

0xc007,	// (0x0000e03d) list_setting_number_pane

0xc007,	// (0x0000e03d) list_setting_pane_ParamLimits

0xc007,	// (0x0000e03d) list_setting_pane

0xc019,	// (0x0000e04f) list_single_2graphic_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_2graphic_pane

0xc019,	// (0x0000e04f) list_single_graphic_heading_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_graphic_heading_pane

0xc019,	// (0x0000e04f) list_single_graphic_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_graphic_pane

0xc019,	// (0x0000e04f) list_single_heading_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_heading_pane

0xc019,	// (0x0000e04f) list_single_large_graphic_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_large_graphic_pane

0xc019,	// (0x0000e04f) list_single_number_heading_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_number_heading_pane

0xc019,	// (0x0000e04f) list_single_number_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_number_pane

0xc019,	// (0x0000e04f) list_single_pane_ParamLimits

0xc019,	// (0x0000e04f) list_single_pane

0xe81f,	// (0x00010855) list_highlight_pane_cp1

0xec17,	// (0x00010c4d) list_single_pane_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_pane_g1

0xec23,	// (0x00010c59) list_single_pane_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_pane_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_pane_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_pane_g

0x39cd,	// (0x00005a03) list_single_pane_t1_ParamLimits

0x39cd,	// (0x00005a03) list_single_pane_t1

0xec17,	// (0x00010c4d) list_single_number_pane_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_number_pane_g1

0xec23,	// (0x00010c59) list_single_number_pane_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_number_pane_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_number_pane_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_number_pane_g

0x15a0,	// (0x000035d6) list_single_number_pane_t1_ParamLimits

0x15a0,	// (0x000035d6) list_single_number_pane_t1

0x3ac2,	// (0x00005af8) list_single_number_pane_t2_ParamLimits

0x3ac2,	// (0x00005af8) list_single_number_pane_t2

0x0001,

0xf955,	// (0x0001198b) list_single_number_pane_t_ParamLimits

0xf955,	// (0x0001198b) list_single_number_pane_t

0x9cd3,	// (0x0000bd09) list_single_graphic_pane_g1_ParamLimits

0x9cd3,	// (0x0000bd09) list_single_graphic_pane_g1

0xec17,	// (0x00010c4d) list_single_graphic_pane_g2_ParamLimits

0xec17,	// (0x00010c4d) list_single_graphic_pane_g2

0xec23,	// (0x00010c59) list_single_graphic_pane_g3_ParamLimits

0xec23,	// (0x00010c59) list_single_graphic_pane_g3

0x0002,

0xf5c1,	// (0x000115f7) list_single_graphic_pane_g_ParamLimits

0xf5c1,	// (0x000115f7) list_single_graphic_pane_g

0x9cdf,	// (0x0000bd15) list_single_graphic_pane_t1_ParamLimits

0x9cdf,	// (0x0000bd15) list_single_graphic_pane_t1

0xec17,	// (0x00010c4d) list_single_heading_pane_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_heading_pane_g1

0xec23,	// (0x00010c59) list_single_heading_pane_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_heading_pane_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_heading_pane_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_heading_pane_g

0x9cf5,	// (0x0000bd2b) list_single_heading_pane_t1_ParamLimits

0x9cf5,	// (0x0000bd2b) list_single_heading_pane_t1

0x9d0b,	// (0x0000bd41) list_single_heading_pane_t2_ParamLimits

0x9d0b,	// (0x0000bd41) list_single_heading_pane_t2

0x0001,

0xf5cd,	// (0x00011603) list_single_heading_pane_t_ParamLimits

0xf5cd,	// (0x00011603) list_single_heading_pane_t

0xec17,	// (0x00010c4d) list_single_number_heading_pane_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_number_heading_pane_g1

0xec23,	// (0x00010c59) list_single_number_heading_pane_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_number_heading_pane_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_number_heading_pane_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_number_heading_pane_g

0x9cf5,	// (0x0000bd2b) list_single_number_heading_pane_t1_ParamLimits

0x9cf5,	// (0x0000bd2b) list_single_number_heading_pane_t1

0x9d1d,	// (0x0000bd53) list_single_number_heading_pane_t2_ParamLimits

0x9d1d,	// (0x0000bd53) list_single_number_heading_pane_t2

0x39a7,	// (0x000059dd) list_single_number_heading_pane_t3_ParamLimits

0x39a7,	// (0x000059dd) list_single_number_heading_pane_t3

0x0002,

0xf5d2,	// (0x00011608) list_single_number_heading_pane_t_ParamLimits

0xf5d2,	// (0x00011608) list_single_number_heading_pane_t

0x1594,	// (0x000035ca) list_single_graphic_heading_pane_g1_ParamLimits

0x1594,	// (0x000035ca) list_single_graphic_heading_pane_g1

0x9d2f,	// (0x0000bd65) list_single_graphic_heading_pane_g4_ParamLimits

0x9d2f,	// (0x0000bd65) list_single_graphic_heading_pane_g4

0xec23,	// (0x00010c59) list_single_graphic_heading_pane_g5_ParamLimits

0xec23,	// (0x00010c59) list_single_graphic_heading_pane_g5

0x0002,

0xf5d9,	// (0x0001160f) list_single_graphic_heading_pane_g_ParamLimits

0xf5d9,	// (0x0001160f) list_single_graphic_heading_pane_g

0x9cf5,	// (0x0000bd2b) list_single_graphic_heading_pane_t1_ParamLimits

0x9cf5,	// (0x0000bd2b) list_single_graphic_heading_pane_t1

0x9d40,	// (0x0000bd76) list_single_graphic_heading_pane_t2_ParamLimits

0x9d40,	// (0x0000bd76) list_single_graphic_heading_pane_t2

0x0001,

0xf5e0,	// (0x00011616) list_single_graphic_heading_pane_t_ParamLimits

0xf5e0,	// (0x00011616) list_single_graphic_heading_pane_t

0x39e3,	// (0x00005a19) list_single_large_graphic_pane_g1_ParamLimits

0x39e3,	// (0x00005a19) list_single_large_graphic_pane_g1

0xec17,	// (0x00010c4d) list_single_large_graphic_pane_g2_ParamLimits

0xec17,	// (0x00010c4d) list_single_large_graphic_pane_g2

0xec23,	// (0x00010c59) list_single_large_graphic_pane_g3_ParamLimits

0xec23,	// (0x00010c59) list_single_large_graphic_pane_g3

0x0002,

0xf5e5,	// (0x0001161b) list_single_large_graphic_pane_g_ParamLimits

0xf5e5,	// (0x0001161b) list_single_large_graphic_pane_g

0x1e06,	// (0x00003e3c) wait_border_pane_g2_copy1

0x9d52,	// (0x0000bd88) list_single_large_graphic_pane_g4_cp2

0x39ef,	// (0x00005a25) list_single_large_graphic_pane_t1_ParamLimits

0x39ef,	// (0x00005a25) list_single_large_graphic_pane_t1

0x9d5a,	// (0x0000bd90) list_double_pane_g1_ParamLimits

0x9d5a,	// (0x0000bd90) list_double_pane_g1

0x9d66,	// (0x0000bd9c) list_double_pane_g2_ParamLimits

0x9d66,	// (0x0000bd9c) list_double_pane_g2

0x0001,

0xf5ec,	// (0x00011622) list_double_pane_g_ParamLimits

0xf5ec,	// (0x00011622) list_double_pane_g

0x9d72,	// (0x0000bda8) list_double_pane_t1_ParamLimits

0x9d72,	// (0x0000bda8) list_double_pane_t1

0x9d88,	// (0x0000bdbe) list_double_pane_t2_ParamLimits

0x9d88,	// (0x0000bdbe) list_double_pane_t2

0x0001,

0xf5f1,	// (0x00011627) list_double_pane_t_ParamLimits

0xf5f1,	// (0x00011627) list_double_pane_t

0x9d9a,	// (0x0000bdd0) list_double2_pane_g1_ParamLimits

0x9d9a,	// (0x0000bdd0) list_double2_pane_g1

0x9dab,	// (0x0000bde1) list_double2_pane_g2_ParamLimits

0x9dab,	// (0x0000bde1) list_double2_pane_g2

0x0001,

0xf5f6,	// (0x0001162c) list_double2_pane_g_ParamLimits

0xf5f6,	// (0x0001162c) list_double2_pane_g

0x9db7,	// (0x0000bded) list_double2_pane_t1_ParamLimits

0x9db7,	// (0x0000bded) list_double2_pane_t1

0x9dcd,	// (0x0000be03) list_double2_pane_t2_ParamLimits

0x9dcd,	// (0x0000be03) list_double2_pane_t2

0x0001,

0xf5fb,	// (0x00011631) list_double2_pane_t_ParamLimits

0xf5fb,	// (0x00011631) list_double2_pane_t

0x9d5a,	// (0x0000bd90) list_double_number_pane_g1_ParamLimits

0x9d5a,	// (0x0000bd90) list_double_number_pane_g1

0x9d66,	// (0x0000bd9c) list_double_number_pane_g2_ParamLimits

0x9d66,	// (0x0000bd9c) list_double_number_pane_g2

0x0001,

0xf5ec,	// (0x00011622) list_double_number_pane_g_ParamLimits

0xf5ec,	// (0x00011622) list_double_number_pane_g

0x9ddf,	// (0x0000be15) list_double_number_pane_t1_ParamLimits

0x9ddf,	// (0x0000be15) list_double_number_pane_t1

0x9df1,	// (0x0000be27) list_double_number_pane_t2_ParamLimits

0x9df1,	// (0x0000be27) list_double_number_pane_t2

0x9e07,	// (0x0000be3d) list_double_number_pane_t3_ParamLimits

0x9e07,	// (0x0000be3d) list_double_number_pane_t3

0x0002,

0xf600,	// (0x00011636) list_double_number_pane_t_ParamLimits

0xf600,	// (0x00011636) list_double_number_pane_t

0x9e19,	// (0x0000be4f) list_double_graphic_pane_g1_ParamLimits

0x9e19,	// (0x0000be4f) list_double_graphic_pane_g1

0x9e25,	// (0x0000be5b) list_double_graphic_pane_g2_ParamLimits

0x9e25,	// (0x0000be5b) list_double_graphic_pane_g2

0x9e34,	// (0x0000be6a) list_double_graphic_pane_g3_ParamLimits

0x9e34,	// (0x0000be6a) list_double_graphic_pane_g3

0x0003,

0xf607,	// (0x0001163d) list_double_graphic_pane_g_ParamLimits

0xf607,	// (0x0001163d) list_double_graphic_pane_g

0x9e4c,	// (0x0000be82) list_double_graphic_pane_t1_ParamLimits

0x9e4c,	// (0x0000be82) list_double_graphic_pane_t1

0x9e62,	// (0x0000be98) list_double_graphic_pane_t2_ParamLimits

0x9e62,	// (0x0000be98) list_double_graphic_pane_t2

0x0001,

0xf610,	// (0x00011646) list_double_graphic_pane_t_ParamLimits

0xf610,	// (0x00011646) list_double_graphic_pane_t

0xec2f,	// (0x00010c65) list_double2_graphic_pane_g1_ParamLimits

0xec2f,	// (0x00010c65) list_double2_graphic_pane_g1

0x4e4e,	// (0x00006e84) list_double2_graphic_pane_g2_ParamLimits

0x4e4e,	// (0x00006e84) list_double2_graphic_pane_g2

0x9dab,	// (0x0000bde1) list_double2_graphic_pane_g3_ParamLimits

0x9dab,	// (0x0000bde1) list_double2_graphic_pane_g3

0x0002,

0xf615,	// (0x0001164b) list_double2_graphic_pane_g_ParamLimits

0xf615,	// (0x0001164b) list_double2_graphic_pane_g

0x9e74,	// (0x0000beaa) list_double2_graphic_pane_t1_ParamLimits

0x9e74,	// (0x0000beaa) list_double2_graphic_pane_t1

0x9e8a,	// (0x0000bec0) list_double2_graphic_pane_t2_ParamLimits

0x9e8a,	// (0x0000bec0) list_double2_graphic_pane_t2

0x0001,

0xf61c,	// (0x00011652) list_double2_graphic_pane_t_ParamLimits

0xf61c,	// (0x00011652) list_double2_graphic_pane_t

0x9e9c,	// (0x0000bed2) list_double_large_graphic_pane_g1_ParamLimits

0x9e9c,	// (0x0000bed2) list_double_large_graphic_pane_g1

0x9ebb,	// (0x0000bef1) list_double_large_graphic_pane_g2_ParamLimits

0x9ebb,	// (0x0000bef1) list_double_large_graphic_pane_g2

0x9d66,	// (0x0000bd9c) list_double_large_graphic_pane_g3_ParamLimits

0x9d66,	// (0x0000bd9c) list_double_large_graphic_pane_g3

0x9ecc,	// (0x0000bf02) list_double_large_graphic_pane_g4_ParamLimits

0x9ecc,	// (0x0000bf02) list_double_large_graphic_pane_g4

0x0004,

0xf621,	// (0x00011657) list_double_large_graphic_pane_g_ParamLimits

0xf621,	// (0x00011657) list_double_large_graphic_pane_g

0x9edf,	// (0x0000bf15) list_double_large_graphic_pane_t1_ParamLimits

0x9edf,	// (0x0000bf15) list_double_large_graphic_pane_t1

0x9ef8,	// (0x0000bf2e) list_double_large_graphic_pane_t2_ParamLimits

0x9ef8,	// (0x0000bf2e) list_double_large_graphic_pane_t2

0x0001,

0xf62c,	// (0x00011662) list_double_large_graphic_pane_t_ParamLimits

0xf62c,	// (0x00011662) list_double_large_graphic_pane_t

0x9f0a,	// (0x0000bf40) list_double2_large_graphic_pane_g1_ParamLimits

0x9f0a,	// (0x0000bf40) list_double2_large_graphic_pane_g1

0x9d9a,	// (0x0000bdd0) list_double2_large_graphic_pane_g2_ParamLimits

0x9d9a,	// (0x0000bdd0) list_double2_large_graphic_pane_g2

0x9dab,	// (0x0000bde1) list_double2_large_graphic_pane_g3_ParamLimits

0x9dab,	// (0x0000bde1) list_double2_large_graphic_pane_g3

0x0002,

0xf631,	// (0x00011667) list_double2_large_graphic_pane_g_ParamLimits

0xf631,	// (0x00011667) list_double2_large_graphic_pane_g

0x9f16,	// (0x0000bf4c) list_double2_large_graphic_pane_t1_ParamLimits

0x9f16,	// (0x0000bf4c) list_double2_large_graphic_pane_t1

0x9f2c,	// (0x0000bf62) list_double2_large_graphic_pane_t2_ParamLimits

0x9f2c,	// (0x0000bf62) list_double2_large_graphic_pane_t2

0x0001,

0xf638,	// (0x0001166e) list_double2_large_graphic_pane_t_ParamLimits

0xf638,	// (0x0001166e) list_double2_large_graphic_pane_t

0x9f3e,	// (0x0000bf74) list_double_heading_pane_g1_ParamLimits

0x9f3e,	// (0x0000bf74) list_double_heading_pane_g1

0x9f4f,	// (0x0000bf85) list_double_heading_pane_g2_ParamLimits

0x9f4f,	// (0x0000bf85) list_double_heading_pane_g2

0x0001,

0xf63d,	// (0x00011673) list_double_heading_pane_g_ParamLimits

0xf63d,	// (0x00011673) list_double_heading_pane_g

0x9f5b,	// (0x0000bf91) list_double_heading_pane_t1_ParamLimits

0x9f5b,	// (0x0000bf91) list_double_heading_pane_t1

0x9f71,	// (0x0000bfa7) list_double_heading_pane_t2_ParamLimits

0x9f71,	// (0x0000bfa7) list_double_heading_pane_t2

0x0001,

0xf642,	// (0x00011678) list_double_heading_pane_t_ParamLimits

0xf642,	// (0x00011678) list_double_heading_pane_t

0x9e19,	// (0x0000be4f) list_double_graphic_heading_pane_g1_ParamLimits

0x9e19,	// (0x0000be4f) list_double_graphic_heading_pane_g1

0x9f3e,	// (0x0000bf74) list_double_graphic_heading_pane_g2_ParamLimits

0x9f3e,	// (0x0000bf74) list_double_graphic_heading_pane_g2

0x9f4f,	// (0x0000bf85) list_double_graphic_heading_pane_g3_ParamLimits

0x9f4f,	// (0x0000bf85) list_double_graphic_heading_pane_g3

0x0002,

0xf647,	// (0x0001167d) list_double_graphic_heading_pane_g_ParamLimits

0xf647,	// (0x0001167d) list_double_graphic_heading_pane_g

0x9f83,	// (0x0000bfb9) list_double_graphic_heading_pane_t1_ParamLimits

0x9f83,	// (0x0000bfb9) list_double_graphic_heading_pane_t1

0x9f99,	// (0x0000bfcf) list_double_graphic_heading_pane_t2_ParamLimits

0x9f99,	// (0x0000bfcf) list_double_graphic_heading_pane_t2

0x0001,

0xf64e,	// (0x00011684) list_double_graphic_heading_pane_t_ParamLimits

0xf64e,	// (0x00011684) list_double_graphic_heading_pane_t

0x9ebb,	// (0x0000bef1) list_double_time_pane_g1_ParamLimits

0x9ebb,	// (0x0000bef1) list_double_time_pane_g1

0x9d66,	// (0x0000bd9c) list_double_time_pane_g2_ParamLimits

0x9d66,	// (0x0000bd9c) list_double_time_pane_g2

0x0001,

0xf653,	// (0x00011689) list_double_time_pane_g_ParamLimits

0xf653,	// (0x00011689) list_double_time_pane_g

0x9fab,	// (0x0000bfe1) list_double_time_pane_t1_ParamLimits

0x9fab,	// (0x0000bfe1) list_double_time_pane_t1

0x9fc1,	// (0x0000bff7) list_double_time_pane_t2_ParamLimits

0x9fc1,	// (0x0000bff7) list_double_time_pane_t2

0x9fd3,	// (0x0000c009) list_double_time_pane_t3_ParamLimits

0x9fd3,	// (0x0000c009) list_double_time_pane_t3

0x9fe5,	// (0x0000c01b) list_double_time_pane_t4_ParamLimits

0x9fe5,	// (0x0000c01b) list_double_time_pane_t4

0x0003,

0xf658,	// (0x0001168e) list_double_time_pane_t_ParamLimits

0xf658,	// (0x0001168e) list_double_time_pane_t

0x4e4e,	// (0x00006e84) list_setting_pane_g1_ParamLimits

0x4e4e,	// (0x00006e84) list_setting_pane_g1

0x9dab,	// (0x0000bde1) list_setting_pane_g2_ParamLimits

0x9dab,	// (0x0000bde1) list_setting_pane_g2

0x0001,

0xf661,	// (0x00011697) list_setting_pane_g_ParamLimits

0xf661,	// (0x00011697) list_setting_pane_g

0x9ff7,	// (0x0000c02d) list_setting_pane_t1_ParamLimits

0x9ff7,	// (0x0000c02d) list_setting_pane_t1

0xa00e,	// (0x0000c044) list_setting_pane_t2_ParamLimits

0xa00e,	// (0x0000c044) list_setting_pane_t2

0x0002,

0xf666,	// (0x0001169c) list_setting_pane_t_ParamLimits

0xf666,	// (0x0001169c) list_setting_pane_t

0xa04d,	// (0x0000c083) set_value_pane_cp_ParamLimits

0xa04d,	// (0x0000c083) set_value_pane_cp

0x4e4e,	// (0x00006e84) list_setting_number_pane_g1_ParamLimits

0x4e4e,	// (0x00006e84) list_setting_number_pane_g1

0x9dab,	// (0x0000bde1) list_setting_number_pane_g2_ParamLimits

0x9dab,	// (0x0000bde1) list_setting_number_pane_g2

0x0001,

0xf661,	// (0x00011697) list_setting_number_pane_g_ParamLimits

0xf661,	// (0x00011697) list_setting_number_pane_g

0xa059,	// (0x0000c08f) list_setting_number_pane_t1_ParamLimits

0xa059,	// (0x0000c08f) list_setting_number_pane_t1

0xa06d,	// (0x0000c0a3) list_setting_number_pane_t2_ParamLimits

0xa06d,	// (0x0000c0a3) list_setting_number_pane_t2

0xa084,	// (0x0000c0ba) list_setting_number_pane_t3_ParamLimits

0xa084,	// (0x0000c0ba) list_setting_number_pane_t3

0x0003,

0xf66d,	// (0x000116a3) list_setting_number_pane_t_ParamLimits

0xf66d,	// (0x000116a3) list_setting_number_pane_t

0xa04d,	// (0x0000c083) set_value_pane_ParamLimits

0xa04d,	// (0x0000c083) set_value_pane

0xec68,	// (0x00010c9e) bg_set_opt_pane_ParamLimits

0xec68,	// (0x00010c9e) bg_set_opt_pane

0xec89,	// (0x00010cbf) set_value_pane_t1

0xec97,	// (0x00010ccd) slider_set_pane_cp3

0xa0c7,	// (0x0000c0fd) volume_small_pane_cp

0xeca0,	// (0x00010cd6) list_form_gen_pane

0xeca9,	// (0x00010cdf) scroll_pane_cp8

0xa0d0,	// (0x0000c106) form_field_data_pane_ParamLimits

0xa0d0,	// (0x0000c106) form_field_data_pane

0xa0e7,	// (0x0000c11d) form_field_data_wide_pane_ParamLimits

0xa0e7,	// (0x0000c11d) form_field_data_wide_pane

0xa107,	// (0x0000c13d) form_field_popup_pane_ParamLimits

0xa107,	// (0x0000c13d) form_field_popup_pane

0xa127,	// (0x0000c15d) form_field_popup_wide_pane_ParamLimits

0xa127,	// (0x0000c15d) form_field_popup_wide_pane

0xecca,	// (0x00010d00) form_field_slider_pane_ParamLimits

0xecca,	// (0x00010d00) form_field_slider_pane

0xa13e,	// (0x0000c174) form_field_slider_wide_pane_ParamLimits

0xa13e,	// (0x0000c174) form_field_slider_wide_pane

0xecdd,	// (0x00010d13) data_form_pane

0xa15b,	// (0x0000c191) form_field_data_pane_t1

0xece9,	// (0x00010d1f) input_focus_pane

0xa175,	// (0x0000c1ab) data_form_wide_pane

0xa186,	// (0x0000c1bc) form_field_data_wide_pane_t1

0xeb5b,	// (0x00010b91) input_focus_pane_cp6

0xa1a0,	// (0x0000c1d6) form_field_popup_pane_t1

0xece9,	// (0x00010d1f) input_focus_pane_cp7

0xed1f,	// (0x00010d55) list_form_pane

0xed33,	// (0x00010d69) form_field_popup_wide_pane_t1

0xece9,	// (0x00010d1f) input_focus_pane_cp8

0xed48,	// (0x00010d7e) list_form_wide_pane

0xa1c2,	// (0x0000c1f8) form_field_slider_pane_t1_ParamLimits

0xa1c2,	// (0x0000c1f8) form_field_slider_pane_t1

0xa1da,	// (0x0000c210) form_field_slider_pane_t2_ParamLimits

0xa1da,	// (0x0000c210) form_field_slider_pane_t2

0x0001,

0xf67d,	// (0x000116b3) form_field_slider_pane_t_ParamLimits

0xf67d,	// (0x000116b3) form_field_slider_pane_t

0xe88d,	// (0x000108c3) input_focus_pane_cp9_ParamLimits

0xe88d,	// (0x000108c3) input_focus_pane_cp9

0xa1ef,	// (0x0000c225) slider_cont_pane_ParamLimits

0xa1ef,	// (0x0000c225) slider_cont_pane

0xed57,	// (0x00010d8d) form_field_slider_wide_pane_t1_ParamLimits

0xed57,	// (0x00010d8d) form_field_slider_wide_pane_t1

0xed69,	// (0x00010d9f) form_field_slider_wide_pane_t2_ParamLimits

0xed69,	// (0x00010d9f) form_field_slider_wide_pane_t2

0x0001,

0xf682,	// (0x000116b8) form_field_slider_wide_pane_t_ParamLimits

0xf682,	// (0x000116b8) form_field_slider_wide_pane_t

0xe88d,	// (0x000108c3) input_focus_pane_cp10_ParamLimits

0xe88d,	// (0x000108c3) input_focus_pane_cp10

0xa203,	// (0x0000c239) slider_cont_pane_cp1_ParamLimits

0xa203,	// (0x0000c239) slider_cont_pane_cp1

0xa217,	// (0x0000c24d) slider_form_pane_cp

0xed7b,	// (0x00010db1) input_focus_pane_g1

0xed83,	// (0x00010db9) input_focus_pane_g2

0xed8b,	// (0x00010dc1) input_focus_pane_g3

0xed93,	// (0x00010dc9) input_focus_pane_g4

0xed9b,	// (0x00010dd1) input_focus_pane_g5

0xeda3,	// (0x00010dd9) input_focus_pane_g6

0xedab,	// (0x00010de1) input_focus_pane_g7

0xedb3,	// (0x00010de9) input_focus_pane_g8

0xedbb,	// (0x00010df1) input_focus_pane_g9

0xe6a6,	// (0x000106dc) input_focus_pane_g10

0x0009,

0xf687,	// (0x000116bd) input_focus_pane_g

0x1e0f,	// (0x00003e45) wait_border_pane_g3_copy1

0xa21f,	// (0x0000c255) data_form_pane_t1

0xe6a6,	// (0x000106dc) wait_anim_pane_g1_copy1

0xbfeb,	// (0x0000e021) data_form_wide_pane_t1

0xa239,	// (0x0000c26f) list_form_graphic_pane_cp_ParamLimits

0xa239,	// (0x0000c26f) list_form_graphic_pane_cp

0x2f69,	// (0x00004f9f) slider_form_pane_g1

0x2f72,	// (0x00004fa8) slider_form_pane_g2

0x0006,

0xf985,	// (0x000119bb) slider_form_pane_g

0xa24b,	// (0x0000c281) list_form_graphic_pane_ParamLimits

0xa24b,	// (0x0000c281) list_form_graphic_pane

0xa25e,	// (0x0000c294) list_form_graphic_pane_g1

0xa266,	// (0x0000c29c) list_form_graphic_pane_t1_ParamLimits

0xa266,	// (0x0000c29c) list_form_graphic_pane_t1

0xe89b,	// (0x000108d1) list_highlight_pane_cp5_ParamLimits

0xe89b,	// (0x000108d1) list_highlight_pane_cp5

0xa27b,	// (0x0000c2b1) find_pane_g1

0xedc3,	// (0x00010df9) input_find_pane

0xa284,	// (0x0000c2ba) input_find_pane_g1_ParamLimits

0xa284,	// (0x0000c2ba) input_find_pane_g1

0xa290,	// (0x0000c2c6) input_find_pane_t1_ParamLimits

0xa290,	// (0x0000c2c6) input_find_pane_t1

0xa2a5,	// (0x0000c2db) input_find_pane_t2_ParamLimits

0xa2a5,	// (0x0000c2db) input_find_pane_t2

0x0001,

0xf69c,	// (0x000116d2) input_find_pane_t_ParamLimits

0xf69c,	// (0x000116d2) input_find_pane_t

0xedcc,	// (0x00010e02) input_focus_pane_cp5_ParamLimits

0xedcc,	// (0x00010e02) input_focus_pane_cp5

0xedda,	// (0x00010e10) bg_popup_window_pane_cp2_ParamLimits

0xedda,	// (0x00010e10) bg_popup_window_pane_cp2

0xede7,	// (0x00010e1d) listscroll_menu_pane_ParamLimits

0xede7,	// (0x00010e1d) listscroll_menu_pane

0xa2c6,	// (0x0000c2fc) popup_submenu_window_ParamLimits

0xa2c6,	// (0x0000c2fc) popup_submenu_window

0xedf3,	// (0x00010e29) find_popup_pane_g1

0xa2ee,	// (0x0000c324) input_popup_find_pane_cp

0xedcc,	// (0x00010e02) input_focus_pane_cp4_ParamLimits

0xedcc,	// (0x00010e02) input_focus_pane_cp4

0xedfb,	// (0x00010e31) input_popup_find_pane_t1_ParamLimits

0xedfb,	// (0x00010e31) input_popup_find_pane_t1

0xe81f,	// (0x00010855) bg_popup_sub_pane_cp

0xee29,	// (0x00010e5f) listscroll_popup_sub_pane

0xee31,	// (0x00010e67) list_submenu_pane_ParamLimits

0xee31,	// (0x00010e67) list_submenu_pane

0xee42,	// (0x00010e78) scroll_pane_cp4

0xa306,	// (0x0000c33c) list_single_popup_submenu_pane_ParamLimits

0xa306,	// (0x0000c33c) list_single_popup_submenu_pane

0xa31a,	// (0x0000c350) list_single_popup_submenu_pane_g1

0xa322,	// (0x0000c358) list_single_popup_submenu_pane_t1_ParamLimits

0xa322,	// (0x0000c358) list_single_popup_submenu_pane_t1

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp1_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp1

0xee4a,	// (0x00010e80) tabs_2_active_pane_g1

0xa337,	// (0x0000c36d) tabs_2_active_pane_t1

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp1_ParamLimits

0xe88d,	// (0x000108c3) bg_passive_tab_pane_cp1

0xee4a,	// (0x00010e80) tabs_2_passive_pane_g1

0xa337,	// (0x0000c36d) tabs_2_passive_pane_t1

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp4

0xa349,	// (0x0000c37f) tabs_2_long_active_pane_t1

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp4

0x001c,	// (0x00002052) list_single_midp_graphic_pane_g4_ParamLimits

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp5

0xa35c,	// (0x0000c392) tabs_3_long_active_pane_t1

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp5

0x001c,	// (0x00002052) list_single_midp_graphic_pane_g4

0xe89b,	// (0x000108d1) bg_popup_window_pane_cp13_ParamLimits

0xe89b,	// (0x000108d1) bg_popup_window_pane_cp13

0xee52,	// (0x00010e88) listscroll_popup_fast_pane_ParamLimits

0xee52,	// (0x00010e88) listscroll_popup_fast_pane

0xee5e,	// (0x00010e94) grid_popup_fast_pane_ParamLimits

0xee5e,	// (0x00010e94) grid_popup_fast_pane

0xee70,	// (0x00010ea6) scroll_pane_cp9_ParamLimits

0xee70,	// (0x00010ea6) scroll_pane_cp9

0x5335,	// (0x0000736b) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x5335,	// (0x0000736b) list_single_graphic_hl_pane_t1_cp2

0xee83,	// (0x00010eb9) input_focus_pane_cp20_ParamLimits

0xee83,	// (0x00010eb9) input_focus_pane_cp20

0xee91,	// (0x00010ec7) query_popup_data_pane_t1_ParamLimits

0xee91,	// (0x00010ec7) query_popup_data_pane_t1

0xeea4,	// (0x00010eda) query_popup_data_pane_t2_ParamLimits

0xeea4,	// (0x00010eda) query_popup_data_pane_t2

0xef00,	// (0x00010f36) query_popup_data_pane_t3_ParamLimits

0xef00,	// (0x00010f36) query_popup_data_pane_t3

0xef41,	// (0x00010f77) query_popup_data_pane_t4_ParamLimits

0xef41,	// (0x00010f77) query_popup_data_pane_t4

0xef7d,	// (0x00010fb3) query_popup_data_pane_t5_ParamLimits

0xef7d,	// (0x00010fb3) query_popup_data_pane_t5

0x0004,

0xf6a1,	// (0x000116d7) query_popup_data_pane_t_ParamLimits

0xf6a1,	// (0x000116d7) query_popup_data_pane_t

0xed7b,	// (0x00010db1) bg_set_opt_pane_g1

0xed83,	// (0x00010db9) bg_set_opt_pane_g2

0xed8b,	// (0x00010dc1) bg_set_opt_pane_g3

0xed93,	// (0x00010dc9) bg_set_opt_pane_g4

0xed9b,	// (0x00010dd1) bg_set_opt_pane_g5

0xeda3,	// (0x00010dd9) bg_set_opt_pane_g6

0xedab,	// (0x00010de1) bg_set_opt_pane_g7

0xedb3,	// (0x00010de9) bg_set_opt_pane_g8

0xedbb,	// (0x00010df1) bg_set_opt_pane_g9

0x0008,

0xf6ac,	// (0x000116e2) bg_set_opt_pane_g

0x00a5,	// (0x000020db) control_top_pane_stacon_ParamLimits

0x00a5,	// (0x000020db) control_top_pane_stacon

0x00f8,	// (0x0000212e) signal_pane_stacon_ParamLimits

0x00f8,	// (0x0000212e) signal_pane_stacon

0x011d,	// (0x00002153) stacon_top_pane_g1_ParamLimits

0x011d,	// (0x00002153) stacon_top_pane_g1

0x013f,	// (0x00002175) title_pane_stacon_ParamLimits

0x013f,	// (0x00002175) title_pane_stacon

0x0169,	// (0x0000219f) uni_indicator_pane_stacon_ParamLimits

0x0169,	// (0x0000219f) uni_indicator_pane_stacon

0x017e,	// (0x000021b4) battery_pane_stacon_ParamLimits

0x017e,	// (0x000021b4) battery_pane_stacon

0x01c2,	// (0x000021f8) control_bottom_pane_stacon_ParamLimits

0x01c2,	// (0x000021f8) control_bottom_pane_stacon

0x01e5,	// (0x0000221b) navi_pane_stacon_ParamLimits

0x01e5,	// (0x0000221b) navi_pane_stacon

0x0208,	// (0x0000223e) stacon_bottom_pane_g1_ParamLimits

0x0208,	// (0x0000223e) stacon_bottom_pane_g1

0xefb4,	// (0x00010fea) aid_levels_signal_lsc_ParamLimits

0xefb4,	// (0x00010fea) aid_levels_signal_lsc

0xefca,	// (0x00011000) signal_pane_stacon_g1_ParamLimits

0xefca,	// (0x00011000) signal_pane_stacon_g1

0xefde,	// (0x00011014) signal_pane_stacon_g2_ParamLimits

0xefde,	// (0x00011014) signal_pane_stacon_g2

0x0001,

0xf6bf,	// (0x000116f5) signal_pane_stacon_g_ParamLimits

0xf6bf,	// (0x000116f5) signal_pane_stacon_g

0xf020,	// (0x00011056) title_pane_stacon_t1_ParamLimits

0xf020,	// (0x00011056) title_pane_stacon_t1

0xf045,	// (0x0001107b) uni_indicator_pane_stacon_g1

0xf04f,	// (0x00011085) uni_indicator_pane_stacon_g2

0xf059,	// (0x0001108f) uni_indicator_pane_stacon_g3

0xf063,	// (0x00011099) uni_indicator_pane_stacon_g4

0x0003,

0xf6cb,	// (0x00011701) uni_indicator_pane_stacon_g

0xf06d,	// (0x000110a3) control_top_pane_stacon_g1

0xf075,	// (0x000110ab) control_top_pane_stacon_t1_ParamLimits

0xf075,	// (0x000110ab) control_top_pane_stacon_t1

0xf0ac,	// (0x000110e2) aid_levels_battery_lsc_ParamLimits

0xf0ac,	// (0x000110e2) aid_levels_battery_lsc

0xf0c3,	// (0x000110f9) battery_pane_stacon_g1_ParamLimits

0xf0c3,	// (0x000110f9) battery_pane_stacon_g1

0xf0d6,	// (0x0001110c) battery_pane_stacon_g2_ParamLimits

0xf0d6,	// (0x0001110c) battery_pane_stacon_g2

0x0001,

0xf6d4,	// (0x0001170a) battery_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0001170a) battery_pane_stacon_g

0xf114,	// (0x0001114a) navi_icon_pane_stacon

0xf128,	// (0x0001115e) navi_navi_pane_stacon

0xf114,	// (0x0001114a) navi_text_pane_stacon

0xf06d,	// (0x000110a3) control_bottom_pane_stacon_g1

0xf13c,	// (0x00011172) control_bottom_pane_stacon_t1_ParamLimits

0xf13c,	// (0x00011172) control_bottom_pane_stacon_t1

0xa388,	// (0x0000c3be) grid_app_pane_ParamLimits

0xa388,	// (0x0000c3be) grid_app_pane

0xa3c0,	// (0x0000c3f6) scroll_pane_cp15_ParamLimits

0xa3c0,	// (0x0000c3f6) scroll_pane_cp15

0xa3d5,	// (0x0000c40b) cell_app_pane_ParamLimits

0xa3d5,	// (0x0000c40b) cell_app_pane

0xa41a,	// (0x0000c450) cell_app_pane_g1_ParamLimits

0xa41a,	// (0x0000c450) cell_app_pane_g1

0xf18d,	// (0x000111c3) cell_app_pane_g2_ParamLimits

0xf18d,	// (0x000111c3) cell_app_pane_g2

0x0001,

0xf6d9,	// (0x0001170f) cell_app_pane_g_ParamLimits

0xf6d9,	// (0x0001170f) cell_app_pane_g

0xa43e,	// (0x0000c474) cell_app_pane_t1_ParamLimits

0xa43e,	// (0x0000c474) cell_app_pane_t1

0xf199,	// (0x000111cf) grid_highlight_pane_ParamLimits

0xf199,	// (0x000111cf) grid_highlight_pane

0xed7b,	// (0x00010db1) cell_highlight_pane_g1

0xed83,	// (0x00010db9) cell_highlight_pane_g2

0xed8b,	// (0x00010dc1) cell_highlight_pane_g3

0xed93,	// (0x00010dc9) cell_highlight_pane_g4

0xed9b,	// (0x00010dd1) cell_highlight_pane_g5

0xeda3,	// (0x00010dd9) cell_highlight_pane_g6

0xedab,	// (0x00010de1) cell_highlight_pane_g7

0xedb3,	// (0x00010de9) cell_highlight_pane_g8

0xedbb,	// (0x00010df1) cell_highlight_pane_g9

0xe6a6,	// (0x000106dc) cell_highlight_pane_g10

0x0009,

0xf687,	// (0x000116bd) cell_highlight_pane_g

0xf1b4,	// (0x000111ea) bg_scroll_pane

0xa45e,	// (0x0000c494) scroll_handle_pane

0xf210,	// (0x00011246) scroll_bg_pane_g1

0xf225,	// (0x0001125b) scroll_bg_pane_g2

0xf23d,	// (0x00011273) scroll_bg_pane_g3

0x0002,

0xf6de,	// (0x00011714) scroll_bg_pane_g

0xa472,	// (0x0000c4a8) scroll_handle_focus_pane_ParamLimits

0xa472,	// (0x0000c4a8) scroll_handle_focus_pane

0xf210,	// (0x00011246) scroll_handle_pane_g1

0xf252,	// (0x00011288) scroll_handle_pane_g2

0xf23d,	// (0x00011273) scroll_handle_pane_g3

0x0002,

0xf6e5,	// (0x0001171b) scroll_handle_pane_g

0xedcc,	// (0x00010e02) bg_popup_sub_pane_cp21_ParamLimits

0xedcc,	// (0x00010e02) bg_popup_sub_pane_cp21

0xa47f,	// (0x0000c4b5) popup_fep_japan_predictive_window_t1_ParamLimits

0xa47f,	// (0x0000c4b5) popup_fep_japan_predictive_window_t1

0xa496,	// (0x0000c4cc) popup_fep_japan_predictive_window_t2_ParamLimits

0xa496,	// (0x0000c4cc) popup_fep_japan_predictive_window_t2

0xa4c9,	// (0x0000c4ff) popup_fep_japan_predictive_window_t3_ParamLimits

0xa4c9,	// (0x0000c4ff) popup_fep_japan_predictive_window_t3

0x0002,

0xf6ec,	// (0x00011722) popup_fep_japan_predictive_window_t_ParamLimits

0xf6ec,	// (0x00011722) popup_fep_japan_predictive_window_t

0xe81f,	// (0x00010855) bg_popup_sub_pane_cp23

0xa500,	// (0x0000c536) listscroll_japin_cand_pane

0xf266,	// (0x0001129c) popup_fep_japan_candidate_window_t1

0xf274,	// (0x000112aa) candidate_pane_ParamLimits

0xf274,	// (0x000112aa) candidate_pane

0xa508,	// (0x0000c53e) scroll_pane_cp30

0xf28e,	// (0x000112c4) list_single_popup_jap_candidate_pane_ParamLimits

0xf28e,	// (0x000112c4) list_single_popup_jap_candidate_pane

0xe81f,	// (0x00010855) list_highlight_pane_cp30

0xf2a3,	// (0x000112d9) list_single_popup_jap_candidate_pane_t1

0xf2b2,	// (0x000112e8) level_1_signal

0xf2bf,	// (0x000112f5) level_2_signal

0xf2cc,	// (0x00011302) level_3_signal

0xf2d9,	// (0x0001130f) level_4_signal

0xf2e6,	// (0x0001131c) level_5_signal

0xf2f3,	// (0x00011329) level_6_signal

0xf300,	// (0x00011336) level_7_signal

0xf2b2,	// (0x000112e8) level_1_battery

0xf2bf,	// (0x000112f5) level_2_battery

0xf2cc,	// (0x00011302) level_3_battery

0xf2d9,	// (0x0001130f) level_4_battery

0xf2e6,	// (0x0001131c) level_5_battery

0xf2f3,	// (0x00011329) level_6_battery

0xf300,	// (0x00011336) level_7_battery

0xf344,	// (0x0001137a) list_menu_pane_ParamLimits

0xf344,	// (0x0001137a) list_menu_pane

0xf35a,	// (0x00011390) scroll_pane_cp25_ParamLimits

0xf35a,	// (0x00011390) scroll_pane_cp25

0xa510,	// (0x0000c546) list_double2_graphic_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double2_graphic_pane_cp2

0xa510,	// (0x0000c546) list_double2_large_graphic_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double2_large_graphic_pane_cp2

0xa510,	// (0x0000c546) list_double2_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double2_pane_cp2

0xa510,	// (0x0000c546) list_double_graphic_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double_graphic_pane_cp2

0xa510,	// (0x0000c546) list_double_large_graphic_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double_large_graphic_pane_cp2

0xa510,	// (0x0000c546) list_double_number_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double_number_pane_cp2

0xa510,	// (0x0000c546) list_double_pane_cp2_ParamLimits

0xa510,	// (0x0000c546) list_double_pane_cp2

0xa51f,	// (0x0000c555) list_single_2graphic_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_2graphic_pane_cp2

0xa51f,	// (0x0000c555) list_single_graphic_heading_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_graphic_heading_pane_cp2

0xa51f,	// (0x0000c555) list_single_graphic_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_graphic_pane_cp2

0xa51f,	// (0x0000c555) list_single_heading_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_heading_pane_cp2

0xf383,	// (0x000113b9) list_single_large_graphic_pane_cp2_ParamLimits

0xf383,	// (0x000113b9) list_single_large_graphic_pane_cp2

0xa51f,	// (0x0000c555) list_single_number_heading_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_number_heading_pane_cp2

0xa51f,	// (0x0000c555) list_single_number_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_number_pane_cp2

0xa51f,	// (0x0000c555) list_single_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_pane_cp2

0xf3f8,	// (0x0001142e) bg_popup_sub_pane_cp22

0xf40e,	// (0x00011444) popup_side_volume_key_window_g1

0xf41a,	// (0x00011450) popup_side_volume_key_window_t1

0xa5e7,	// (0x0000c61d) volume_small_pane_cp1

0xe88d,	// (0x000108c3) bg_popup_sub_pane_cp24_ParamLimits

0xe88d,	// (0x000108c3) bg_popup_sub_pane_cp24

0xf428,	// (0x0001145e) fep_china_uni_candidate_pane_ParamLimits

0xf428,	// (0x0001145e) fep_china_uni_candidate_pane

0xf43c,	// (0x00011472) fep_china_uni_entry_pane

0xf44c,	// (0x00011482) popup_fep_china_uni_window_g1

0xa5ef,	// (0x0000c625) fep_china_uni_entry_pane_g1

0xa5f7,	// (0x0000c62d) fep_china_uni_entry_pane_g2

0x0001,

0xf71d,	// (0x00011753) fep_china_uni_entry_pane_g

0xf468,	// (0x0001149e) fep_entry_item_pane

0xf472,	// (0x000114a8) fep_candidate_item_pane

0xa5ff,	// (0x0000c635) fep_china_uni_candidate_pane_g1

0xf47a,	// (0x000114b0) fep_china_uni_candidate_pane_g2

0xf482,	// (0x000114b8) fep_china_uni_candidate_pane_g3

0xa607,	// (0x0000c63d) fep_china_uni_candidate_pane_g4

0x0003,

0xf722,	// (0x00011758) fep_china_uni_candidate_pane_g

0xe6a6,	// (0x000106dc) fep_entry_item_pane_g1

0xf48a,	// (0x000114c0) fep_entry_item_pane_t1_ParamLimits

0xf48a,	// (0x000114c0) fep_entry_item_pane_t1

0xf4a0,	// (0x000114d6) fep_candidate_item_pane_t1_ParamLimits

0xf4a0,	// (0x000114d6) fep_candidate_item_pane_t1

0xf4b5,	// (0x000114eb) fep_candidate_item_pane_t2_ParamLimits

0xf4b5,	// (0x000114eb) fep_candidate_item_pane_t2

0x0001,

0xf72b,	// (0x00011761) fep_candidate_item_pane_t_ParamLimits

0xf72b,	// (0x00011761) fep_candidate_item_pane_t

0xe89b,	// (0x000108d1) list_highlight_pane_cp31_ParamLimits

0xe89b,	// (0x000108d1) list_highlight_pane_cp31

0xf4c7,	// (0x000114fd) level_1_signal_lsc

0xf4d0,	// (0x00011506) level_2_signal_lsc

0xf4d9,	// (0x0001150f) level_3_signal_lsc

0xf4e2,	// (0x00011518) level_4_signal_lsc

0xf4eb,	// (0x00011521) level_5_signal_lsc

0xf4f4,	// (0x0001152a) level_6_signal_lsc

0xf4fd,	// (0x00011533) level_7_signal_lsc

0xf4fd,	// (0x00011533) level_1_battery_lsc

0xf506,	// (0x0001153c) level_2_battery_lsc

0xf50f,	// (0x00011545) level_3_battery_lsc

0xf518,	// (0x0001154e) level_4_battery_lsc

0xf521,	// (0x00011557) level_5_battery_lsc

0xf52a,	// (0x00011560) level_6_battery_lsc

0xf4c7,	// (0x000114fd) level_7_battery_lsc

0xf533,	// (0x00011569) scroll_handle_focus_pane_g1

0xf53c,	// (0x00011572) scroll_handle_focus_pane_g2

0xf545,	// (0x0001157b) scroll_handle_focus_pane_g3

0x0002,

0xf730,	// (0x00011766) scroll_handle_focus_pane_g

0xa60f,	// (0x0000c645) list_single_2graphic_pane_g1_ParamLimits

0xa60f,	// (0x0000c645) list_single_2graphic_pane_g1

0x9d2f,	// (0x0000bd65) list_single_2graphic_pane_g2_ParamLimits

0x9d2f,	// (0x0000bd65) list_single_2graphic_pane_g2

0xec23,	// (0x00010c59) list_single_2graphic_pane_g3_ParamLimits

0xec23,	// (0x00010c59) list_single_2graphic_pane_g3

0xa61b,	// (0x0000c651) list_single_2graphic_pane_g4_ParamLimits

0xa61b,	// (0x0000c651) list_single_2graphic_pane_g4

0x0003,

0xf737,	// (0x0001176d) list_single_2graphic_pane_g_ParamLimits

0xf737,	// (0x0001176d) list_single_2graphic_pane_g

0xa627,	// (0x0000c65d) list_single_2graphic_pane_t1_ParamLimits

0xa627,	// (0x0000c65d) list_single_2graphic_pane_t1

0xa655,	// (0x0000c68b) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa655,	// (0x0000c68b) list_double2_graphic_large_graphic_pane_g1

0x9d9a,	// (0x0000bdd0) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9d9a,	// (0x0000bdd0) list_double2_graphic_large_graphic_pane_g2

0x9dab,	// (0x0000bde1) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9dab,	// (0x0000bde1) list_double2_graphic_large_graphic_pane_g3

0xa667,	// (0x0000c69d) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa667,	// (0x0000c69d) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf740,	// (0x00011776) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf740,	// (0x00011776) list_double2_graphic_large_graphic_pane_g

0xa673,	// (0x0000c6a9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa673,	// (0x0000c6a9) list_double2_graphic_large_graphic_pane_t1

0xa689,	// (0x0000c6bf) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa689,	// (0x0000c6bf) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf749,	// (0x0001177f) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf749,	// (0x0001177f) list_double2_graphic_large_graphic_pane_t

0xa70e,	// (0x0000c744) popup_fast_swap_window_ParamLimits

0xa70e,	// (0x0000c744) popup_fast_swap_window

0xa72a,	// (0x0000c760) popup_side_volume_key_window

0x0307,	// (0x0000233d) stacon_top_pane

0x0311,	// (0x00002347) status_pane_ParamLimits

0x0311,	// (0x00002347) status_pane

0xa744,	// (0x0000c77a) status_small_pane

0xe81f,	// (0x00010855) control_pane

0xe81f,	// (0x00010855) stacon_bottom_pane

0xeca9,	// (0x00010cdf) scroll_pane_cp121

0xeca0,	// (0x00010cd6) set_content_pane

0xa69b,	// (0x0000c6d1) bg_active_tab_pane_g1_cp1

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp1

0xa6ad,	// (0x0000c6e3) bg_active_tab_pane_g3_cp1

0xa69b,	// (0x0000c6d1) bg_passive_tab_pane_g1_cp1

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp1

0xa6ad,	// (0x0000c6e3) bg_passive_tab_pane_g3_cp1

0xa6b6,	// (0x0000c6ec) bg_active_tab_pane_g1_cp2

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp2

0xa6bf,	// (0x0000c6f5) bg_active_tab_pane_g3_cp2

0xa6b6,	// (0x0000c6ec) bg_passive_tab_pane_g1_cp2

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp2

0xa6bf,	// (0x0000c6f5) bg_passive_tab_pane_g3_cp2

0xa6c8,	// (0x0000c6fe) bg_active_tab_pane_g1_cp3

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp3

0xa6d1,	// (0x0000c707) bg_active_tab_pane_g3_cp3

0xa6c8,	// (0x0000c6fe) bg_passive_tab_pane_g1_cp3

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp3

0xa6d1,	// (0x0000c707) bg_passive_tab_pane_g3_cp3

0xa6da,	// (0x0000c710) bg_active_tab_pane_g1_cp4

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp4

0xa6e5,	// (0x0000c71b) bg_active_tab_pane_g3_cp4

0xa6da,	// (0x0000c710) bg_passive_tab_pane_g1_cp4

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp4

0xa6e5,	// (0x0000c71b) bg_passive_tab_pane_g3_cp4

0xa6f0,	// (0x0000c726) bg_active_tab_pane_g1_cp5

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp5

0xa6f9,	// (0x0000c72f) bg_active_tab_pane_g3_cp5

0xa6f0,	// (0x0000c726) bg_passive_tab_pane_g1_cp5

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp5

0xa6f9,	// (0x0000c72f) bg_passive_tab_pane_g3_cp5

0x373c,	// (0x00005772) list_set_graphic_pane_ParamLimits

0x373c,	// (0x00005772) list_set_graphic_pane

0xe81f,	// (0x00010855) bg_set_opt_pane_cp4

0x0256,	// (0x0000228c) list_set_graphic_pane_g1_ParamLimits

0x0256,	// (0x0000228c) list_set_graphic_pane_g1

0x0262,	// (0x00002298) list_set_graphic_pane_g2_ParamLimits

0x0262,	// (0x00002298) list_set_graphic_pane_g2

0x0001,

0xf74e,	// (0x00011784) list_set_graphic_pane_g_ParamLimits

0xf74e,	// (0x00011784) list_set_graphic_pane_g

0x0009,

0xfacc,	// (0x00011b02) volume_small_pane_cp_g

0xa702,	// (0x0000c738) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa702,	// (0x0000c738) list_double2_large_graphic_pane_g1_cp2

0x0290,	// (0x000022c6) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x0290,	// (0x000022c6) list_double2_large_graphic_pane_g2_cp2

0x02a1,	// (0x000022d7) list_double2_large_graphic_pane_g3_cp2

0x02a9,	// (0x000022df) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x02a9,	// (0x000022df) list_double2_large_graphic_pane_t1_cp2

0x02bf,	// (0x000022f5) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x02bf,	// (0x000022f5) list_double2_large_graphic_pane_t2_cp2

0xbc8e,	// (0x0000dcc4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xbc8e,	// (0x0000dcc4) list_double_large_graphic_pane_g1_cp2

0x2a3b,	// (0x00004a71) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x2a3b,	// (0x00004a71) list_double_large_graphic_pane_g2_cp2

0x042c,	// (0x00002462) list_double_large_graphic_pane_g3_cp2

0x2a4c,	// (0x00004a82) list_double_large_graphic_pane_g4_cp

0x2a54,	// (0x00004a8a) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2a54,	// (0x00004a8a) list_double_large_graphic_pane_t1_cp2

0x2a6b,	// (0x00004aa1) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2a6b,	// (0x00004aa1) list_double_large_graphic_pane_t2_cp2

0x032a,	// (0x00002360) list_double2_graphic_pane_g1_cp2_ParamLimits

0x032a,	// (0x00002360) list_double2_graphic_pane_g1_cp2

0x0338,	// (0x0000236e) list_double2_graphic_pane_g2_cp2_ParamLimits

0x0338,	// (0x0000236e) list_double2_graphic_pane_g2_cp2

0x0349,	// (0x0000237f) list_double2_graphic_pane_g3_cp2

0x0353,	// (0x00002389) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0353,	// (0x00002389) list_double2_graphic_pane_t1_cp2

0x0369,	// (0x0000239f) list_double2_graphic_pane_t2_cp2_ParamLimits

0x0369,	// (0x0000239f) list_double2_graphic_pane_t2_cp2

0xec5c,	// (0x00010c92) list_single_number_heading_pane_g1_cp2_ParamLimits

0xec5c,	// (0x00010c92) list_single_number_heading_pane_g1_cp2

0x037b,	// (0x000023b1) list_single_number_heading_pane_g2_cp2

0x0383,	// (0x000023b9) list_single_number_heading_pane_t1_cp2_ParamLimits

0x0383,	// (0x000023b9) list_single_number_heading_pane_t1_cp2

0x0399,	// (0x000023cf) list_single_number_heading_pane_t2_cp2_ParamLimits

0x0399,	// (0x000023cf) list_single_number_heading_pane_t2_cp2

0x03ab,	// (0x000023e1) list_single_number_heading_pane_t3_cp2_ParamLimits

0x03ab,	// (0x000023e1) list_single_number_heading_pane_t3_cp2

0xec5c,	// (0x00010c92) list_single_heading_pane_g1_cp2_ParamLimits

0xec5c,	// (0x00010c92) list_single_heading_pane_g1_cp2

0x037b,	// (0x000023b1) list_single_heading_pane_g2_cp2

0x0383,	// (0x000023b9) list_single_heading_pane_t1_cp2_ParamLimits

0x0383,	// (0x000023b9) list_single_heading_pane_t1_cp2

0x2834,	// (0x0000486a) list_single_heading_pane_t2_cp2_ParamLimits

0x2834,	// (0x0000486a) list_single_heading_pane_t2_cp2

0x277c,	// (0x000047b2) list_double_graphic_pane_g1_cp2_ParamLimits

0x277c,	// (0x000047b2) list_double_graphic_pane_g1_cp2

0x2788,	// (0x000047be) list_double_graphic_pane_g2_cp2_ParamLimits

0x2788,	// (0x000047be) list_double_graphic_pane_g2_cp2

0x2797,	// (0x000047cd) list_double_graphic_pane_g3_cp2

0x279f,	// (0x000047d5) list_double_graphic_pane_t1_cp2_ParamLimits

0x279f,	// (0x000047d5) list_double_graphic_pane_t1_cp2

0x27b5,	// (0x000047eb) list_double_graphic_pane_t2_cp2_ParamLimits

0x27b5,	// (0x000047eb) list_double_graphic_pane_t2_cp2

0x0420,	// (0x00002456) list_double_number_pane_g1_cp2_ParamLimits

0x0420,	// (0x00002456) list_double_number_pane_g1_cp2

0x042c,	// (0x00002462) list_double_number_pane_g2_cp2

0x2740,	// (0x00004776) list_double_number_pane_t1_cp2_ParamLimits

0x2740,	// (0x00004776) list_double_number_pane_t1_cp2

0x2754,	// (0x0000478a) list_double_number_pane_t2_cp2_ParamLimits

0x2754,	// (0x0000478a) list_double_number_pane_t2_cp2

0x276a,	// (0x000047a0) list_double_number_pane_t3_cp2_ParamLimits

0x276a,	// (0x000047a0) list_double_number_pane_t3_cp2

0x2618,	// (0x0000464e) list_single_graphic_pane_g1_cp2_ParamLimits

0x2618,	// (0x0000464e) list_single_graphic_pane_g1_cp2

0x0484,	// (0x000024ba) list_single_graphic_pane_g2_cp2_ParamLimits

0x0484,	// (0x000024ba) list_single_graphic_pane_g2_cp2

0x0490,	// (0x000024c6) list_single_graphic_pane_g3_cp2

0x25ee,	// (0x00004624) list_single_graphic_pane_t1_cp2_ParamLimits

0x25ee,	// (0x00004624) list_single_graphic_pane_t1_cp2

0x0484,	// (0x000024ba) list_single_number_pane_g1_cp2_ParamLimits

0x0484,	// (0x000024ba) list_single_number_pane_g1_cp2

0x0490,	// (0x000024c6) list_single_number_pane_g2_cp2

0x25ee,	// (0x00004624) list_single_number_pane_t1_cp2_ParamLimits

0x25ee,	// (0x00004624) list_single_number_pane_t1_cp2

0x2604,	// (0x0000463a) list_single_number_pane_t2_cp2_ParamLimits

0x2604,	// (0x0000463a) list_single_number_pane_t2_cp2

0x0290,	// (0x000022c6) list_double2_pane_g1_cp2_ParamLimits

0x0290,	// (0x000022c6) list_double2_pane_g1_cp2

0x02a1,	// (0x000022d7) list_double2_pane_g2_cp2

0x03f8,	// (0x0000242e) list_double2_pane_t1_cp2_ParamLimits

0x03f8,	// (0x0000242e) list_double2_pane_t1_cp2

0x040e,	// (0x00002444) list_double2_pane_t2_cp2_ParamLimits

0x040e,	// (0x00002444) list_double2_pane_t2_cp2

0x0420,	// (0x00002456) list_double_pane_g1_cp2_ParamLimits

0x0420,	// (0x00002456) list_double_pane_g1_cp2

0x042c,	// (0x00002462) list_double_pane_g2_cp2

0x0434,	// (0x0000246a) list_double_pane_t1_cp2_ParamLimits

0x0434,	// (0x0000246a) list_double_pane_t1_cp2

0x044a,	// (0x00002480) list_double_pane_t2_cp2_ParamLimits

0x044a,	// (0x00002480) list_double_pane_t2_cp2

0xa74f,	// (0x0000c785) list_single_pane_cp2_g3

0x0484,	// (0x000024ba) list_single_pane_g1_cp2_ParamLimits

0x0484,	// (0x000024ba) list_single_pane_g1_cp2

0x0490,	// (0x000024c6) list_single_pane_g2_cp2

0x0498,	// (0x000024ce) list_single_pane_t1_cp2_ParamLimits

0x0498,	// (0x000024ce) list_single_pane_t1_cp2

0xa757,	// (0x0000c78d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa757,	// (0x0000c78d) list_single_large_graphic_pane_g1_cp2

0x04bc,	// (0x000024f2) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x04bc,	// (0x000024f2) list_single_large_graphic_pane_g2_cp2

0x04c8,	// (0x000024fe) list_single_large_graphic_pane_g3_cp2

0xa763,	// (0x0000c799) list_single_large_graphic_pane_g4_cp1_ParamLimits

0xa763,	// (0x0000c799) list_single_large_graphic_pane_g4_cp1

0x04ea,	// (0x00002520) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x04ea,	// (0x00002520) list_single_large_graphic_pane_t1_cp2

0x2461,	// (0x00004497) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x2461,	// (0x00004497) list_single_graphic_heading_pane_g1_cp2

0x242e,	// (0x00004464) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x242e,	// (0x00004464) list_single_graphic_heading_pane_g4_cp2

0x0490,	// (0x000024c6) list_single_graphic_heading_pane_g5_cp2

0x246d,	// (0x000044a3) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x246d,	// (0x000044a3) list_single_graphic_heading_pane_t1_cp2

0x2483,	// (0x000044b9) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x2483,	// (0x000044b9) list_single_graphic_heading_pane_t2_cp2

0x2422,	// (0x00004458) list_single_2graphic_pane_g1_cp2_ParamLimits

0x2422,	// (0x00004458) list_single_2graphic_pane_g1_cp2

0x242e,	// (0x00004464) list_single_2graphic_pane_g2_cp2_ParamLimits

0x242e,	// (0x00004464) list_single_2graphic_pane_g2_cp2

0x0490,	// (0x000024c6) list_single_2graphic_pane_g3_cp2

0x243f,	// (0x00004475) list_single_2graphic_pane_g4_cp2_ParamLimits

0x243f,	// (0x00004475) list_single_2graphic_pane_g4_cp2

0x244b,	// (0x00004481) list_single_2graphic_pane_t1_cp2_ParamLimits

0x244b,	// (0x00004481) list_single_2graphic_pane_t1_cp2

0xe6a6,	// (0x000106dc) list_highlight_pane_g10_cp1

0x200a,	// (0x00004040) list_highlight_pane_g1_cp1

0x2012,	// (0x00004048) list_highlight_pane_g2_cp1

0x201a,	// (0x00004050) list_highlight_pane_g3_cp1

0x2022,	// (0x00004058) list_highlight_pane_g4_cp1

0x202a,	// (0x00004060) list_highlight_pane_g5_cp1

0x2032,	// (0x00004068) list_highlight_pane_g6_cp1

0x203a,	// (0x00004070) list_highlight_pane_g7_cp1

0x2042,	// (0x00004078) list_highlight_pane_g8_cp1

0x204a,	// (0x00004080) list_highlight_pane_g9_cp1

0xba1b,	// (0x0000da51) form_field_slider_pane_t3

0xba29,	// (0x0000da5f) form_field_slider_pane_t4

0x1f4e,	// (0x00003f84) slider_form_pane_ParamLimits

0x1f4e,	// (0x00003f84) slider_form_pane

0xe81f,	// (0x00010855) control_abbreviations

0xe81f,	// (0x00010855) control_conventions

0xe81f,	// (0x00010855) control_definitions

0xe81f,	// (0x00010855) format_table_attribute

0xbc65,	// (0x0000dc9b) bg_popup_preview_window_pane_g9

0xe81f,	// (0x00010855) format_table_data2

0xe81f,	// (0x00010855) format_table_data3

0xe81f,	// (0x00010855) format_table_data_example

0x0008,

0xe81f,	// (0x00010855) intro_purpose

0xf8e5,	// (0x0001191b) bg_popup_preview_window_pane_g

0xe81f,	// (0x00010855) texts_category

0xe81f,	// (0x00010855) texts_graphics

0x0500,	// (0x00002536) text_digital

0x050f,	// (0x00002545) text_primary

0x051e,	// (0x00002554) text_primary_small

0x052d,	// (0x00002563) text_secondary

0x053c,	// (0x00002572) text_title

0xc0c9,	// (0x0000e0ff) bg_passive_tab_pane_g1_cp3_srt

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp3_srt

0xc0d2,	// (0x0000e108) bg_passive_tab_pane_g3_cp3_srt

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp3_srt_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp3_srt

0xc0db,	// (0x0000e111) tabs_4_active_pane_srt_g1

0xc0e3,	// (0x0000e119) tabs_4_active_pane_srt_t1_ParamLimits

0xc0e3,	// (0x0000e119) tabs_4_active_pane_srt_t1

0xc0c9,	// (0x0000e0ff) bg_active_tab_pane_g1_cp3_copy1

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp3_copy1

0xc0d2,	// (0x0000e108) bg_active_tab_pane_g3_cp3_copy1

0xe89b,	// (0x000108d1) tabs_2_long_active_pane_srt_ParamLimits

0xe89b,	// (0x000108d1) tabs_2_long_active_pane_srt

0xe89b,	// (0x000108d1) tabs_2_long_passive_pane_srt_ParamLimits

0xe89b,	// (0x000108d1) tabs_2_long_passive_pane_srt

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp4_srt

0xbdcf,	// (0x0000de05) bg_passive_tab_pane_g1_cp4_srt

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp4_srt

0xbdd8,	// (0x0000de0e) bg_passive_tab_pane_g3_cp4_srt

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp4_srt_ParamLimits

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp4_srt

0xbde1,	// (0x0000de17) tabs_2_long_active_pane_srt_t1_ParamLimits

0xbde1,	// (0x0000de17) tabs_2_long_active_pane_srt_t1

0xbdcf,	// (0x0000de05) bg_active_tab_pane_g1_cp4_srt

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp4_srt

0xbdd8,	// (0x0000de0e) bg_active_tab_pane_g3_cp4_srt

0xe88d,	// (0x000108c3) tabs_3_long_active_pane_srt_ParamLimits

0xe88d,	// (0x000108c3) tabs_3_long_active_pane_srt

0xe88d,	// (0x000108c3) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe88d,	// (0x000108c3) tabs_3_long_passive_pane_cp_srt

0xe88d,	// (0x000108c3) tabs_3_long_passive_pane_srt_ParamLimits

0xe88d,	// (0x000108c3) tabs_3_long_passive_pane_srt

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp5_srt

0xa6f0,	// (0x0000c726) bg_passive_tab_pane_g1_cp5_srt

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp5_srt

0xa6f9,	// (0x0000c72f) bg_passive_tab_pane_g3_cp5_srt

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp5_srt_ParamLimits

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp5_srt

0xbdb9,	// (0x0000ddef) tabs_3_long_active_pane_srt_t1_ParamLimits

0xbdb9,	// (0x0000ddef) tabs_3_long_active_pane_srt_t1

0xa6f0,	// (0x0000c726) bg_active_tab_pane_g1_cp5_srt

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp5_srt

0xa6f9,	// (0x0000c72f) bg_active_tab_pane_g3_cp5_srt

0x2d04,	// (0x00004d3a) navi_text_pane_srt_t1

0x2cfc,	// (0x00004d32) navi_icon_pane_srt_g1

0x07aa,	// (0x000027e0) midp_editing_number_pane_srt

0x054b,	// (0x00002581) midp_ticker_pane_srt

0x07b2,	// (0x000027e8) midp_ticker_pane_srt_g1

0x07ba,	// (0x000027f0) midp_ticker_pane_srt_g2

0x0001,

0xf76d,	// (0x000117a3) midp_ticker_pane_srt_g

0x07c2,	// (0x000027f8) midp_ticker_pane_srt_t1

0x2ced,	// (0x00004d23) midp_editing_number_pane_t1_copy1

0x0abe,	// (0x00002af4) listscroll_midp_pane

0x0abe,	// (0x00002af4) midp_form_pane

0xa7dc,	// (0x0000c812) midp_info_popup_window_ParamLimits

0xa7dc,	// (0x0000c812) midp_info_popup_window

0xedcc,	// (0x00010e02) bg_popup_sub_pane_cp50_ParamLimits

0xedcc,	// (0x00010e02) bg_popup_sub_pane_cp50

0x1c52,	// (0x00003c88) listscroll_midp_info_pane_ParamLimits

0x1c52,	// (0x00003c88) listscroll_midp_info_pane

0x1c3a,	// (0x00003c70) listscroll_form_midp_pane_ParamLimits

0x1c3a,	// (0x00003c70) listscroll_form_midp_pane

0x1c46,	// (0x00003c7c) scroll_bar_cp050

0xb8f7,	// (0x0000d92d) list_midp_pane

0xc2bd,	// (0x0000e2f3) signal_pane_g2_cp

0x1b54,	// (0x00003b8a) listscroll_midp_info_pane_t1_ParamLimits

0x1b54,	// (0x00003b8a) listscroll_midp_info_pane_t1

0xb849,	// (0x0000d87f) listscroll_midp_info_pane_t2_ParamLimits

0xb849,	// (0x0000d87f) listscroll_midp_info_pane_t2

0xb887,	// (0x0000d8bd) listscroll_midp_info_pane_t3_ParamLimits

0xb887,	// (0x0000d8bd) listscroll_midp_info_pane_t3

0xb8c1,	// (0x0000d8f7) listscroll_midp_info_pane_t4_ParamLimits

0xb8c1,	// (0x0000d8f7) listscroll_midp_info_pane_t4

0x0003,

0xf820,	// (0x00011856) listscroll_midp_info_pane_t_ParamLimits

0xf820,	// (0x00011856) listscroll_midp_info_pane_t

0xee42,	// (0x00010e78) scroll_pane_cp21

0x1af4,	// (0x00003b2a) form_midp_field_choice_group_pane

0xb80c,	// (0x0000d842) form_midp_field_text_pane

0x1b3a,	// (0x00003b70) form_midp_field_time_pane

0x1b42,	// (0x00003b78) form_midp_gauge_slider_pane

0x1b4b,	// (0x00003b81) form_midp_gauge_wait_pane

0xe81f,	// (0x00010855) form_midp_image_pane

0xb7f2,	// (0x0000d828) list_single_midp_pane_ParamLimits

0xb7f2,	// (0x0000d828) list_single_midp_pane

0xb7d0,	// (0x0000d806) form_midp_field_text_pane_t1

0x17aa,	// (0x000037e0) input_focus_pane_cp050

0x1ab1,	// (0x00003ae7) list_midp_form_text_pane

0x1a46,	// (0x00003a7c) form_midp_field_choice_group_pane_t1

0x1a54,	// (0x00003a8a) input_focus_pane_cp051

0x1a68,	// (0x00003a9e) list_midp_choice_pane

0xe81f,	// (0x00010855) status_idle_pane

0x1a2a,	// (0x00003a60) form_midp_field_time_pane_t1

0xe6a6,	// (0x000106dc) wait_anim_pane_g2_copy1

0x1a38,	// (0x00003a6e) form_midp_field_time_pane_t2

0x0001,

0x0669,	// (0x0000269f) aid_navinavi_width_2_pane

0xf81b,	// (0x00011851) form_midp_field_time_pane_t

0xe81f,	// (0x00010855) input_focus_pane_cp052

0xe81f,	// (0x00010855) bg_input_focus_pane_cp040

0x19ea,	// (0x00003a20) form_midp_gauge_slider_pane_t1

0x19f8,	// (0x00003a2e) form_midp_gauge_slider_pane_t2

0xb7b4,	// (0x0000d7ea) form_midp_gauge_slider_pane_t3

0xb7c2,	// (0x0000d7f8) form_midp_gauge_slider_pane_t4

0x0003,

0xf812,	// (0x00011848) form_midp_gauge_slider_pane_t

0x1a22,	// (0x00003a58) form_midp_slider_pane

0xe89b,	// (0x000108d1) bg_input_focus_pane_cp041_ParamLimits

0xe89b,	// (0x000108d1) bg_input_focus_pane_cp041

0x19b7,	// (0x000039ed) form_midp_gauge_wait_pane_t1_ParamLimits

0x19b7,	// (0x000039ed) form_midp_gauge_wait_pane_t1

0x19c9,	// (0x000039ff) form_midp_gauge_wait_pane_t2_ParamLimits

0x19c9,	// (0x000039ff) form_midp_gauge_wait_pane_t2

0x0001,

0xf80d,	// (0x00011843) form_midp_gauge_wait_pane_t_ParamLimits

0xf80d,	// (0x00011843) form_midp_gauge_wait_pane_t

0x19db,	// (0x00003a11) form_midp_wait_pane_ParamLimits

0x19db,	// (0x00003a11) form_midp_wait_pane

0xb77e,	// (0x0000d7b4) form_midp_image_pane_g1

0xb787,	// (0x0000d7bd) form_midp_image_pane_t1

0xb796,	// (0x0000d7cc) form_midp_image_pane_t2

0xb7a5,	// (0x0000d7db) form_midp_image_pane_t3

0x0002,

0xf806,	// (0x0001183c) form_midp_image_pane_t

0x1969,	// (0x0000399f) list_single_midp_pane_g1

0x1972,	// (0x000039a8) list_single_midp_pane_t1

0xb768,	// (0x0000d79e) list_midp_form_item_pane_ParamLimits

0xb768,	// (0x0000d79e) list_midp_form_item_pane

0x0611,	// (0x00002647) list_midp_form_item_pane_t1

0x0620,	// (0x00002656) midp_ticker_pane_g1

0x062c,	// (0x00002662) midp_ticker_pane_g2

0x0001,

0xf753,	// (0x00011789) midp_ticker_pane_g

0x0638,	// (0x0000266e) midp_ticker_pane_t1

0x2fe9,	// (0x0000501f) midp_editing_number_pane_t1

0x2fc7,	// (0x00004ffd) midp_editing_number_pane

0x2fd6,	// (0x0000500c) midp_ticker_pane

0x2cb5,	// (0x00004ceb) ai_message_heading_pane

0xe81f,	// (0x00010855) bg_popup_window_pane_cp14

0x2cbd,	// (0x00004cf3) listscroll_ai_message_pane

0x2c3f,	// (0x00004c75) ai_message_heading_pane_g1_ParamLimits

0x2c3f,	// (0x00004c75) ai_message_heading_pane_g1

0xbd81,	// (0x0000ddb7) ai_message_heading_pane_g2_ParamLimits

0xbd81,	// (0x0000ddb7) ai_message_heading_pane_g2

0x2c57,	// (0x00004c8d) ai_message_heading_pane_g3_ParamLimits

0x2c57,	// (0x00004c8d) ai_message_heading_pane_g3

0x2c63,	// (0x00004c99) ai_message_heading_pane_g4_ParamLimits

0x2c63,	// (0x00004c99) ai_message_heading_pane_g4

0x0003,

0xf947,	// (0x0001197d) ai_message_heading_pane_g_ParamLimits

0xf947,	// (0x0001197d) ai_message_heading_pane_g

0xbd8d,	// (0x0000ddc3) ai_message_heading_pane_t1_ParamLimits

0xbd8d,	// (0x0000ddc3) ai_message_heading_pane_t1

0xbda7,	// (0x0000dddd) ai_message_heading_pane_t2_ParamLimits

0xbda7,	// (0x0000dddd) ai_message_heading_pane_t2

0x0001,

0xf950,	// (0x00011986) ai_message_heading_pane_t_ParamLimits

0xf950,	// (0x00011986) ai_message_heading_pane_t

0x2c9b,	// (0x00004cd1) bg_popup_heading_pane_cp1_ParamLimits

0x2c9b,	// (0x00004cd1) bg_popup_heading_pane_cp1

0x2c2d,	// (0x00004c63) list_ai_message_pane_ParamLimits

0x2c2d,	// (0x00004c63) list_ai_message_pane

0xee42,	// (0x00010e78) scroll_pane_cp10

0x2b79,	// (0x00004baf) list_ai_message_pane_g1

0x2b81,	// (0x00004bb7) list_ai_message_pane_g2

0x0001,

0xf924,	// (0x0001195a) list_ai_message_pane_g

0x2b89,	// (0x00004bbf) list_ai_message_pane_t1_ParamLimits

0x2b89,	// (0x00004bbf) list_ai_message_pane_t1

0x2b9e,	// (0x00004bd4) list_ai_message_pane_t2_ParamLimits

0x2b9e,	// (0x00004bd4) list_ai_message_pane_t2

0x2bb3,	// (0x00004be9) list_ai_message_pane_t3_ParamLimits

0x2bb3,	// (0x00004be9) list_ai_message_pane_t3

0x2bc8,	// (0x00004bfe) list_ai_message_pane_t4_ParamLimits

0x2bc8,	// (0x00004bfe) list_ai_message_pane_t4

0x0003,

0xf929,	// (0x0001195f) list_ai_message_pane_t_ParamLimits

0xf929,	// (0x0001195f) list_ai_message_pane_t

0xbd0d,	// (0x0000dd43) cell_ai_soft_ind_pane_ParamLimits

0xbd0d,	// (0x0000dd43) cell_ai_soft_ind_pane

0x064a,	// (0x00002680) cell_ai_soft_ind_pane_g1_ParamLimits

0x064a,	// (0x00002680) cell_ai_soft_ind_pane_g1

0xe81f,	// (0x00010855) grid_highlight_cp1

0x0657,	// (0x0000268d) text_secondary_cp56_ParamLimits

0x0657,	// (0x0000268d) text_secondary_cp56

0x2b39,	// (0x00004b6f) example_general_pane_ParamLimits

0x2b39,	// (0x00004b6f) example_general_pane

0x2b45,	// (0x00004b7b) example_parent_pane_g1_ParamLimits

0x2b45,	// (0x00004b7b) example_parent_pane_g1

0x2b51,	// (0x00004b87) example_parent_pane_t1_ParamLimits

0x2b51,	// (0x00004b87) example_parent_pane_t1

0xaeec,	// (0x0000cf22) popup_preview_text_window_ParamLimits

0xaeec,	// (0x0000cf22) popup_preview_text_window

0x047c,	// (0x000024b2) list_single_pane_cp2_g4

0xea87,	// (0x00010abd) bg_popup_preview_window_pane_ParamLimits

0xea87,	// (0x00010abd) bg_popup_preview_window_pane

0xbc6d,	// (0x0000dca3) popup_preview_text_window_t1_ParamLimits

0xbc6d,	// (0x0000dca3) popup_preview_text_window_t1

0x28a4,	// (0x000048da) popup_preview_text_window_t2_ParamLimits

0x28a4,	// (0x000048da) popup_preview_text_window_t2

0x28ed,	// (0x00004923) popup_preview_text_window_t3_ParamLimits

0x28ed,	// (0x00004923) popup_preview_text_window_t3

0x2932,	// (0x00004968) popup_preview_text_window_t4_ParamLimits

0x2932,	// (0x00004968) popup_preview_text_window_t4

0x0004,

0xf8f8,	// (0x0001192e) popup_preview_text_window_t_ParamLimits

0xf8f8,	// (0x0001192e) popup_preview_text_window_t

0x29b0,	// (0x000049e6) scroll_pane_cp11

0x1612,	// (0x00003648) bg_popup_preview_window_pane_g1

0xbc2d,	// (0x0000dc63) bg_popup_preview_window_pane_g2

0xbc35,	// (0x0000dc6b) bg_popup_preview_window_pane_g3

0xbc3d,	// (0x0000dc73) bg_popup_preview_window_pane_g4

0xbc45,	// (0x0000dc7b) bg_popup_preview_window_pane_g5

0xbc4d,	// (0x0000dc83) bg_popup_preview_window_pane_g6

0xbc55,	// (0x0000dc8b) bg_popup_preview_window_pane_g7

0xbc5d,	// (0x0000dc93) bg_popup_preview_window_pane_g8

0xe6bc,	// (0x000106f2) aid_popup_width_pane

0xae68,	// (0x0000ce9e) popup_midp_note_alarm_window_ParamLimits

0xae68,	// (0x0000ce9e) popup_midp_note_alarm_window

0xecdd,	// (0x00010d13) data_form_pane_ParamLimits

0xa151,	// (0x0000c187) form_field_data_pane_g1

0xa15b,	// (0x0000c191) form_field_data_pane_t1_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_ParamLimits

0xa175,	// (0x0000c1ab) data_form_wide_pane_ParamLimits

0xecf7,	// (0x00010d2d) form_field_data_wide_pane_g1

0xa186,	// (0x0000c1bc) form_field_data_wide_pane_t1_ParamLimits

0xeb5b,	// (0x00010b91) input_focus_pane_cp6_ParamLimits

0xa2f8,	// (0x0000c32e) input_popup_find_pane_g1_ParamLimits

0xa2f8,	// (0x0000c32e) input_popup_find_pane_g1

0xf0e7,	// (0x0001111d) aid_navi_side_left_pane

0xf0fc,	// (0x00011132) aid_navi_side_right_pane

0x2105,	// (0x0000413b) bg_popup_window_pane_cp30_ParamLimits

0x2105,	// (0x0000413b) bg_popup_window_pane_cp30

0x217f,	// (0x000041b5) popup_midp_note_alarm_window_g1_ParamLimits

0x217f,	// (0x000041b5) popup_midp_note_alarm_window_g1

0x21af,	// (0x000041e5) popup_midp_note_alarm_window_t1_ParamLimits

0x21af,	// (0x000041e5) popup_midp_note_alarm_window_t1

0xba6e,	// (0x0000daa4) popup_midp_note_alarm_window_t2_ParamLimits

0xba6e,	// (0x0000daa4) popup_midp_note_alarm_window_t2

0xbb1c,	// (0x0000db52) popup_midp_note_alarm_window_t3_ParamLimits

0xbb1c,	// (0x0000db52) popup_midp_note_alarm_window_t3

0xbb44,	// (0x0000db7a) popup_midp_note_alarm_window_t4_ParamLimits

0xbb44,	// (0x0000db7a) popup_midp_note_alarm_window_t4

0x2346,	// (0x0000437c) popup_midp_note_alarm_window_t5_ParamLimits

0x2346,	// (0x0000437c) popup_midp_note_alarm_window_t5

0x000a,

0xf895,	// (0x000118cb) popup_midp_note_alarm_window_t_ParamLimits

0xf895,	// (0x000118cb) popup_midp_note_alarm_window_t

0x23f2,	// (0x00004428) wait_bar_pane_cp1_ParamLimits

0x23f2,	// (0x00004428) wait_bar_pane_cp1

0xe81f,	// (0x00010855) wait_anim_pane_copy1

0xe81f,	// (0x00010855) wait_border_pane_copy1

0x1dfb,	// (0x00003e31) wait_border_pane_g1_copy1

0xed17,	// (0x00010d4d) form_field_popup_pane_g1

0xa1a0,	// (0x0000c1d6) form_field_popup_pane_t1_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_cp7_ParamLimits

0xed1f,	// (0x00010d55) list_form_pane_ParamLimits

0xed2b,	// (0x00010d61) form_field_popup_wide_pane_g1

0xed33,	// (0x00010d69) form_field_popup_wide_pane_t1_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_cp8_ParamLimits

0xed48,	// (0x00010d7e) list_form_wide_pane_ParamLimits

0x3213,	// (0x00005249) aid_size_cell_graphic_pane

0xa21f,	// (0x0000c255) data_form_pane_t1_ParamLimits

0xbfeb,	// (0x0000e021) data_form_wide_pane_t1_ParamLimits

0xb32f,	// (0x0000d365) bg_status_flat_pane

0x96f1,	// (0x0000b727) title_pane_t1_ParamLimits

0xe855,	// (0x0001088b) title_pane_t2_ParamLimits

0xe87b,	// (0x000108b1) title_pane_t3_ParamLimits

0xf557,	// (0x0001158d) title_pane_t_ParamLimits

0xf2b2,	// (0x000112e8) level_1_signal_ParamLimits

0xf2bf,	// (0x000112f5) level_2_signal_ParamLimits

0xf2cc,	// (0x00011302) level_3_signal_ParamLimits

0xf2d9,	// (0x0001130f) level_4_signal_ParamLimits

0xf2e6,	// (0x0001131c) level_5_signal_ParamLimits

0xf2f3,	// (0x00011329) level_6_signal_ParamLimits

0xf300,	// (0x00011336) level_7_signal_ParamLimits

0xf2b2,	// (0x000112e8) level_1_battery_ParamLimits

0xf2bf,	// (0x000112f5) level_2_battery_ParamLimits

0xf2cc,	// (0x00011302) level_3_battery_ParamLimits

0xf2d9,	// (0x0001130f) level_4_battery_ParamLimits

0xf2e6,	// (0x0001131c) level_5_battery_ParamLimits

0xf2f3,	// (0x00011329) level_6_battery_ParamLimits

0xf300,	// (0x00011336) level_7_battery_ParamLimits

0x200a,	// (0x00004040) bg_status_flat_pane_g1

0x2012,	// (0x00004048) bg_status_flat_pane_g2

0x201a,	// (0x00004050) bg_status_flat_pane_g3

0x2022,	// (0x00004058) bg_status_flat_pane_g4

0x202a,	// (0x00004060) bg_status_flat_pane_g5

0x2032,	// (0x00004068) bg_status_flat_pane_g6

0x203a,	// (0x00004070) bg_status_flat_pane_g7

0x9785,	// (0x0000b7bb) tabs_3_active_pane_t1_ParamLimits

0x9785,	// (0x0000b7bb) tabs_3_passive_pane_t1_ParamLimits

0x979f,	// (0x0000b7d5) tabs_4_active_pane_t1_ParamLimits

0x979f,	// (0x0000b7d5) tabs_4_1_passive_pane_t1_ParamLimits

0xa337,	// (0x0000c36d) tabs_2_active_pane_t1_ParamLimits

0xa337,	// (0x0000c36d) tabs_2_passive_pane_t1_ParamLimits

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp4_ParamLimits

0xa349,	// (0x0000c37f) tabs_2_long_active_pane_t1_ParamLimits

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp4_ParamLimits

0x16cf,	// (0x00003705) list_single_midp_graphic_pane_t1_ParamLimits

0xe89b,	// (0x000108d1) bg_active_tab_pane_cp5_ParamLimits

0xa35c,	// (0x0000c392) tabs_3_long_active_pane_t1_ParamLimits

0x0abe,	// (0x00002af4) bg_passive_tab_pane_cp5_ParamLimits

0x16cf,	// (0x00003705) list_single_midp_graphic_pane_t1

0xb32f,	// (0x0000d365) bg_status_flat_pane_ParamLimits

0x1201,	// (0x00003237) indicator_pane_cp2_ParamLimits

0x1201,	// (0x00003237) indicator_pane_cp2

0xb4ad,	// (0x0000d4e3) navi_pane_srt_ParamLimits

0xb4ad,	// (0x0000d4e3) navi_pane_srt

0x1350,	// (0x00003386) popup_clock_digital_analogue_window_cp1

0xe8f9,	// (0x0001092f) indicator_pane_t1

0x054b,	// (0x00002581) copy_highlight_pane

0x054b,	// (0x00002581) cursor_graphics_pane

0x054b,	// (0x00002581) graphic_within_text_pane

0x054b,	// (0x00002581) link_highlight_pane

0x2973,	// (0x000049a9) popup_preview_text_window_t5_ParamLimits

0x2973,	// (0x000049a9) popup_preview_text_window_t5

0x0671,	// (0x000026a7) cursor_digital_pane

0x0671,	// (0x000026a7) cursor_primary_pane

0x0682,	// (0x000026b8) cursor_primary_small_pane

0x068a,	// (0x000026c0) cursor_secondary_pane

0x0692,	// (0x000026c8) cursor_title_pane

0x0671,	// (0x000026a7) link_highlight_digital_pane

0x0679,	// (0x000026af) link_highlight_primary_pane

0x0682,	// (0x000026b8) link_highlight_primary_small_pane

0x068a,	// (0x000026c0) link_highlight_secondary_pane

0x0692,	// (0x000026c8) link_highlight_title_pane

0x0671,	// (0x000026a7) copy_highlight_digital_pane

0x0671,	// (0x000026a7) copy_highlight_primary_pane

0x0682,	// (0x000026b8) copy_highlight_primary_small_pane

0x068a,	// (0x000026c0) copy_highlight_secondary_pane

0x0692,	// (0x000026c8) copy_highlight_title_pane

0x068a,	// (0x000026c0) graphic_text_digital_pane

0x20a8,	// (0x000040de) graphic_text_primary_pane

0x20b1,	// (0x000040e7) graphic_text_primary_small_pane

0x0682,	// (0x000026b8) graphic_text_secondary_pane

0x0671,	// (0x000026a7) graphic_text_title_pane

0xa82d,	// (0x0000c863) cursor_primary_pane_g1

0x209a,	// (0x000040d0) cursor_text_primary_t1

0xba64,	// (0x0000da9a) cursor_primary_small_pane_g1

0x208c,	// (0x000040c2) cursor_text_primary_small_t1

0xba5a,	// (0x0000da90) cursor_primary_small_pane_g1_copy1

0x2074,	// (0x000040aa) cursor_text_primary_small_t1_copy1

0x2052,	// (0x00004088) cursor_text_title_t1

0xba50,	// (0x0000da86) cursor_title_pane_g1

0xa82d,	// (0x0000c863) cursor_digital_pane_g1

0x06a4,	// (0x000026da) cursor_text_digital_t1

0x06b2,	// (0x000026e8) link_highlight_primary_pane_g1

0x1ffb,	// (0x00004031) link_highlight_primary_pane_t1

0x06b2,	// (0x000026e8) link_highlight_primary_small_pane_g1

0x06ba,	// (0x000026f0) link_highlight_primary_small_pane_t1

0x06b2,	// (0x000026e8) link_highlight_secondary_pane_g1

0x06c9,	// (0x000026ff) link_highlight_secondary_pane_t1

0x1f60,	// (0x00003f96) link_highlight_title_pane_g1

0x1f77,	// (0x00003fad) link_highlight_title_pane_t1

0x1f60,	// (0x00003f96) link_highlight_digital_pane_g1

0x1f68,	// (0x00003f9e) link_highlight_digital_pane_t1

0x1e1a,	// (0x00003e50) copy_highlight_primary_pane_g1

0x1e40,	// (0x00003e76) copy_highlight_primary_pane_t1

0x1e1a,	// (0x00003e50) copy_highlight_primary_small_pane_g1

0x1e31,	// (0x00003e67) copy_highlight_primary_small_pane_t1

0x06d8,	// (0x0000270e) copy_highlight_secondary_pane_g1

0x06e0,	// (0x00002716) copy_highlight_secondary_pane_t1

0x1e1a,	// (0x00003e50) copy_highlight_title_pane_g1

0x1e22,	// (0x00003e58) copy_highlight_title_pane_t1

0x1e1a,	// (0x00003e50) copy_highlight_digital_pane_g1

0x3495,	// (0x000054cb) copy_highlight_digital_pane_t1

0x33e9,	// (0x0000541f) graphic_text_primary_pane_g1

0x3479,	// (0x000054af) graphic_text_primary_pane_t1

0x3487,	// (0x000054bd) graphic_text_primary_pane_t2

0x0001,

0xf9c4,	// (0x000119fa) graphic_text_primary_pane_t

0x3455,	// (0x0000548b) graphic_text_primary_small_pane_g1

0x345d,	// (0x00005493) graphic_text_primary_small_pane_t1

0x346b,	// (0x000054a1) graphic_text_primary_small_pane_t2

0x0001,

0xf9bf,	// (0x000119f5) graphic_text_primary_small_pane_t

0x3431,	// (0x00005467) graphic_text_secondary_pane_g1

0x3439,	// (0x0000546f) graphic_text_secondary_pane_t1

0x3447,	// (0x0000547d) graphic_text_secondary_pane_t2

0x0001,

0xf9ba,	// (0x000119f0) graphic_text_secondary_pane_t

0x340d,	// (0x00005443) graphic_text_title_pane_g1

0x3415,	// (0x0000544b) graphic_text_title_pane_t1

0x3423,	// (0x00005459) graphic_text_title_pane_t2

0x0001,

0xf9b5,	// (0x000119eb) graphic_text_title_pane_t

0x33e9,	// (0x0000541f) graphic_text_digital_pane_g1

0x33f1,	// (0x00005427) graphic_text_digital_pane_t1

0x33ff,	// (0x00005435) graphic_text_digital_pane_t2

0x0001,

0xf9b0,	// (0x000119e6) graphic_text_digital_pane_t

0xe89b,	// (0x000108d1) navi_icon_pane_srt_ParamLimits

0xe89b,	// (0x000108d1) navi_icon_pane_srt

0xe81f,	// (0x00010855) navi_midp_pane_srt

0xe81f,	// (0x00010855) navi_navi_pane_srt

0xe89b,	// (0x000108d1) navi_text_pane_srt_ParamLimits

0xe89b,	// (0x000108d1) navi_text_pane_srt

0x33b4,	// (0x000053ea) navi_navi_icon_text_pane_srt

0x33bc,	// (0x000053f2) navi_navi_pane_srt_g1_ParamLimits

0x33bc,	// (0x000053f2) navi_navi_pane_srt_g1

0x33ce,	// (0x00005404) navi_navi_pane_srt_g2_ParamLimits

0x33ce,	// (0x00005404) navi_navi_pane_srt_g2

0x0001,

0xf9ab,	// (0x000119e1) navi_navi_pane_srt_g_ParamLimits

0xf9ab,	// (0x000119e1) navi_navi_pane_srt_g

0x33e0,	// (0x00005416) navi_navi_tabs_pane_srt

0x33b4,	// (0x000053ea) navi_navi_text_pane_srt

0x33b4,	// (0x000053ea) navi_navi_volume_pane_srt

0x33a5,	// (0x000053db) navi_navi_text_pane_srt_t1

0x3380,	// (0x000053b6) navi_navi_volume_pane_srt_g1

0x3388,	// (0x000053be) volume_small_pane_srt_ParamLimits

0x3388,	// (0x000053be) volume_small_pane_srt

0x06ef,	// (0x00002725) volume_small_pane_srt_g1_ParamLimits

0x06ef,	// (0x00002725) volume_small_pane_srt_g1

0x06ff,	// (0x00002735) volume_small_pane_srt_g2_ParamLimits

0x06ff,	// (0x00002735) volume_small_pane_srt_g2

0x0710,	// (0x00002746) volume_small_pane_srt_g3_ParamLimits

0x0710,	// (0x00002746) volume_small_pane_srt_g3

0x0721,	// (0x00002757) volume_small_pane_srt_g4_ParamLimits

0x0721,	// (0x00002757) volume_small_pane_srt_g4

0x0732,	// (0x00002768) volume_small_pane_srt_g5_ParamLimits

0x0732,	// (0x00002768) volume_small_pane_srt_g5

0x0743,	// (0x00002779) volume_small_pane_srt_g6_ParamLimits

0x0743,	// (0x00002779) volume_small_pane_srt_g6

0x0754,	// (0x0000278a) volume_small_pane_srt_g7_ParamLimits

0x0754,	// (0x0000278a) volume_small_pane_srt_g7

0x0765,	// (0x0000279b) volume_small_pane_srt_g8_ParamLimits

0x0765,	// (0x0000279b) volume_small_pane_srt_g8

0x0776,	// (0x000027ac) volume_small_pane_srt_g9_ParamLimits

0x0776,	// (0x000027ac) volume_small_pane_srt_g9

0x0787,	// (0x000027bd) volume_small_pane_srt_g10_ParamLimits

0x0787,	// (0x000027bd) volume_small_pane_srt_g10

0x0009,

0xf758,	// (0x0001178e) volume_small_pane_srt_g_ParamLimits

0xf758,	// (0x0001178e) volume_small_pane_srt_g

0x9a60,	// (0x0000ba96) query_popup_data_pane_cp2

0x336e,	// (0x000053a4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x336e,	// (0x000053a4) navi_navi_icon_text_pane_srt_t1

0x20a8,	// (0x000040de) navi_tabs_2_long_pane_srt

0x20a8,	// (0x000040de) navi_tabs_2_pane_srt

0x20a8,	// (0x000040de) navi_tabs_3_long_pane_srt

0x20a8,	// (0x000040de) navi_tabs_3_pane_srt

0x20a8,	// (0x000040de) navi_tabs_4_pane_srt

0xc1d3,	// (0x0000e209) tabs_2_active_pane_srt_ParamLimits

0xc1d3,	// (0x0000e209) tabs_2_active_pane_srt

0xc1e3,	// (0x0000e219) tabs_2_passive_pane_srt_ParamLimits

0xc1e3,	// (0x0000e219) tabs_2_passive_pane_srt

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp1_srt_ParamLimits

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp1_srt

0xc1a3,	// (0x0000e1d9) bg_passive_tab_pane_g1_cp1_srt

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp1_srt

0xc1ac,	// (0x0000e1e2) bg_passive_tab_pane_g3_cp1_srt

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp1_srt_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp1_srt

0xc1b5,	// (0x0000e1eb) tabs_2_active_pane_srt_g1

0xc1bd,	// (0x0000e1f3) tabs_2_active_pane_srt_t1_ParamLimits

0xc1bd,	// (0x0000e1f3) tabs_2_active_pane_srt_t1

0xc1a3,	// (0x0000e1d9) bg_active_tab_pane_g1_cp1_srt

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp1_srt

0xc1ac,	// (0x0000e1e2) bg_active_tab_pane_g3_cp1_srt

0xc170,	// (0x0000e1a6) tabs_3_active_pane_srt_ParamLimits

0xc170,	// (0x0000e1a6) tabs_3_active_pane_srt

0xc181,	// (0x0000e1b7) tabs_3_passive_pane_cp_srt_ParamLimits

0xc181,	// (0x0000e1b7) tabs_3_passive_pane_cp_srt

0xc192,	// (0x0000e1c8) tabs_3_passive_pane_srt_ParamLimits

0xc192,	// (0x0000e1c8) tabs_3_passive_pane_srt

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp2_srt_ParamLimits

0x17aa,	// (0x000037e0) bg_passive_tab_pane_cp2_srt

0xa837,	// (0x0000c86d) bg_passive_tab_pane_g1_cp2_srt

0xa6a4,	// (0x0000c6da) bg_passive_tab_pane_g2_cp2_srt

0xa840,	// (0x0000c876) bg_passive_tab_pane_g3_cp2_srt

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp2_srt_ParamLimits

0xe88d,	// (0x000108c3) bg_active_tab_pane_cp2_srt

0xc152,	// (0x0000e188) tabs_3_active_pane_srt_g1

0xc15a,	// (0x0000e190) tabs_3_active_pane_srt_t1_ParamLimits

0xc15a,	// (0x0000e190) tabs_3_active_pane_srt_t1

0xa837,	// (0x0000c86d) bg_active_tab_pane_g1_cp2_srt

0xa6a4,	// (0x0000c6da) bg_active_tab_pane_g2_cp2_srt

0xa840,	// (0x0000c876) bg_active_tab_pane_g3_cp2_srt

0x3285,	// (0x000052bb) tabs_4_active_pane_srt_ParamLimits

0x3285,	// (0x000052bb) tabs_4_active_pane_srt

0x3297,	// (0x000052cd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x3297,	// (0x000052cd) tabs_4_passive_pane_cp2_srt

0x0a3c,	// (0x00002a72) aid_size_cell_toolbar

0x2e0d,	// (0x00004e43) main_idle_act_pane_ParamLimits

0xacaa,	// (0x0000cce0) popup_large_graphic_colour_window_ParamLimits

0xb19e,	// (0x0000d1d4) popup_toolbar_window_ParamLimits

0xb19e,	// (0x0000d1d4) popup_toolbar_window

0x3014,	// (0x0000504a) list_single_graphic_2heading_pane_ParamLimits

0x3014,	// (0x0000504a) list_single_graphic_2heading_pane

0xf173,	// (0x000111a9) aid_size_cell_apps_grid_lsc_pane

0xf185,	// (0x000111bb) aid_size_cell_apps_grid_prt_pane

0x0abe,	// (0x00002af4) bg_wml_button_pane_cp1_ParamLimits

0x0abe,	// (0x00002af4) bg_wml_button_pane_cp1

0xb7d0,	// (0x0000d806) form_midp_field_text_pane_t1_ParamLimits

0x17aa,	// (0x000037e0) input_focus_pane_cp050_ParamLimits

0x1ab1,	// (0x00003ae7) list_midp_form_text_pane_ParamLimits

0x1a54,	// (0x00003a8a) input_focus_pane_cp051_ParamLimits

0x1a68,	// (0x00003a9e) list_midp_choice_pane_ParamLimits

0xb734,	// (0x0000d76a) list_single_2graphic_pane_cp3_ParamLimits

0xb734,	// (0x0000d76a) list_single_2graphic_pane_cp3

0xb748,	// (0x0000d77e) list_single_midp_graphic_pane_ParamLimits

0xb748,	// (0x0000d77e) list_single_midp_graphic_pane

0x14ac,	// (0x000034e2) list_single_graphic_2heading_pane_g1_ParamLimits

0x14ac,	// (0x000034e2) list_single_graphic_2heading_pane_g1

0xec17,	// (0x00010c4d) list_single_graphic_2heading_pane_g4_ParamLimits

0xec17,	// (0x00010c4d) list_single_graphic_2heading_pane_g4

0xec23,	// (0x00010c59) list_single_graphic_2heading_pane_g5_ParamLimits

0xec23,	// (0x00010c59) list_single_graphic_2heading_pane_g5

0x0002,

0xf7ab,	// (0x000117e1) list_single_graphic_2heading_pane_g_ParamLimits

0xf7ab,	// (0x000117e1) list_single_graphic_2heading_pane_g

0x14b8,	// (0x000034ee) list_single_graphic_2heading_pane_t1_ParamLimits

0x14b8,	// (0x000034ee) list_single_graphic_2heading_pane_t1

0x14cc,	// (0x00003502) list_single_graphic_2heading_pane_t2_ParamLimits

0x14cc,	// (0x00003502) list_single_graphic_2heading_pane_t2

0x14e6,	// (0x0000351c) list_single_graphic_2heading_pane_t3_ParamLimits

0x14e6,	// (0x0000351c) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b2,	// (0x000117e8) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b2,	// (0x000117e8) list_single_graphic_2heading_pane_t

0x14fe,	// (0x00003534) bg_popup_sub_pane_cp2

0x1528,	// (0x0000355e) grid_toobar_pane

0x1564,	// (0x0000359a) cell_toolbar_pane_ParamLimits

0x1564,	// (0x0000359a) cell_toolbar_pane

0x15b6,	// (0x000035ec) cell_toolbar_pane_g1_ParamLimits

0x15b6,	// (0x000035ec) cell_toolbar_pane_g1

0xb64c,	// (0x0000d682) cell_toolbar_pane_g2_ParamLimits

0xb64c,	// (0x0000d682) cell_toolbar_pane_g2

0x0001,

0xf7c0,	// (0x000117f6) cell_toolbar_pane_g_ParamLimits

0xf7c0,	// (0x000117f6) cell_toolbar_pane_g

0x15ec,	// (0x00003622) grid_highlight_pane_cp2_ParamLimits

0x15ec,	// (0x00003622) grid_highlight_pane_cp2

0x1606,	// (0x0000363c) toolbar_button_pane

0x1612,	// (0x00003648) toolbar_button_pane_g1

0x161a,	// (0x00003650) toolbar_button_pane_g2

0x1622,	// (0x00003658) toolbar_button_pane_g3

0x162a,	// (0x00003660) toolbar_button_pane_g4

0x1632,	// (0x00003668) toolbar_button_pane_g5

0x163a,	// (0x00003670) toolbar_button_pane_g6

0x1642,	// (0x00003678) toolbar_button_pane_g7

0x164a,	// (0x00003680) toolbar_button_pane_g8

0x1652,	// (0x00003688) toolbar_button_pane_g9

0x0009,

0xf7c5,	// (0x000117fb) toolbar_button_pane_g

0x1662,	// (0x00003698) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1662,	// (0x00003698) list_single_2graphic_pane_g1_cp3

0xb660,	// (0x0000d696) list_single_2graphic_pane_g2_cp3_ParamLimits

0xb660,	// (0x0000d696) list_single_2graphic_pane_g2_cp3

0x037b,	// (0x000023b1) list_single_2graphic_pane_g3_cp3

0x001c,	// (0x00002052) list_single_2graphic_pane_g4_cp3_ParamLimits

0x001c,	// (0x00002052) list_single_2graphic_pane_g4_cp3

0xb671,	// (0x0000d6a7) list_single_2graphic_pane_t1_cp3_ParamLimits

0xb671,	// (0x0000d6a7) list_single_2graphic_pane_t1_cp3

0xec5c,	// (0x00010c92) list_single_midp_graphic_pane_g2_ParamLimits

0xec5c,	// (0x00010c92) list_single_midp_graphic_pane_g2

0x0a44,	// (0x00002a7a) aid_zoom_text_primary

0x0a4c,	// (0x00002a82) aid_zoom_text_secondary

0xa897,	// (0x0000c8cd) status_small_pane_g7_ParamLimits

0xa897,	// (0x0000c8cd) status_small_pane_g7

0xa8ba,	// (0x0000c8f0) status_small_pane_t1_ParamLimits

0x96cd,	// (0x0000b703) title_pane_g2

0x0003,

0xf54e,	// (0x00011584) title_pane_g

0x9aba,	// (0x0000baf0) aid_size_cell_colour_1_pane_ParamLimits

0x9aba,	// (0x0000baf0) aid_size_cell_colour_1_pane

0x9ace,	// (0x0000bb04) aid_size_cell_colour_2_pane_ParamLimits

0x9ace,	// (0x0000bb04) aid_size_cell_colour_2_pane

0x9ae2,	// (0x0000bb18) aid_size_cell_colour_3_pane_ParamLimits

0x9ae2,	// (0x0000bb18) aid_size_cell_colour_3_pane

0x9af6,	// (0x0000bb2c) aid_size_cell_colour_4_pane_ParamLimits

0x9af6,	// (0x0000bb2c) aid_size_cell_colour_4_pane

0xefef,	// (0x00011025) title_pane_stacon_g1_ParamLimits

0xefef,	// (0x00011025) title_pane_stacon_g1

0x1e97,	// (0x00003ecd) popup_note_wait_window_g3_ParamLimits

0x1e97,	// (0x00003ecd) popup_note_wait_window_g3

0x1f0d,	// (0x00003f43) popup_note_wait_window_t5_ParamLimits

0x1f0d,	// (0x00003f43) popup_note_wait_window_t5

0xe81f,	// (0x00010855) main_feb_china_hwr_fs_writing_pane

0xab2c,	// (0x0000cb62) popup_feb_china_hwr_fs_window_ParamLimits

0xab2c,	// (0x0000cb62) popup_feb_china_hwr_fs_window

0xb68d,	// (0x0000d6c3) aid_size_cell_hwr_fs_ParamLimits

0xb68d,	// (0x0000d6c3) aid_size_cell_hwr_fs

0x17aa,	// (0x000037e0) bg_popup_sub_pane_cp3_ParamLimits

0x17aa,	// (0x000037e0) bg_popup_sub_pane_cp3

0xb6a2,	// (0x0000d6d8) grid_hwr_fs_pane_ParamLimits

0xb6a2,	// (0x0000d6d8) grid_hwr_fs_pane

0x17ce,	// (0x00003804) linegrid_hwr_fs_pane_ParamLimits

0x17ce,	// (0x00003804) linegrid_hwr_fs_pane

0xb6ba,	// (0x0000d6f0) cell_hwr_fs_pane_ParamLimits

0xb6ba,	// (0x0000d6f0) cell_hwr_fs_pane

0x1800,	// (0x00003836) linegrid_hwr_fs_pane_g1_ParamLimits

0x1800,	// (0x00003836) linegrid_hwr_fs_pane_g1

0xb6e0,	// (0x0000d716) linegrid_hwr_fs_pane_g2_ParamLimits

0xb6e0,	// (0x0000d716) linegrid_hwr_fs_pane_g2

0x181e,	// (0x00003854) linegrid_hwr_fs_pane_g3_ParamLimits

0x181e,	// (0x00003854) linegrid_hwr_fs_pane_g3

0xb6f2,	// (0x0000d728) linegrid_hwr_fs_pane_g4_ParamLimits

0xb6f2,	// (0x0000d728) linegrid_hwr_fs_pane_g4

0x1844,	// (0x0000387a) linegrid_hwr_fs_pane_g5_ParamLimits

0x1844,	// (0x0000387a) linegrid_hwr_fs_pane_g5

0x0004,

0xf7eb,	// (0x00011821) linegrid_hwr_fs_pane_g_ParamLimits

0xf7eb,	// (0x00011821) linegrid_hwr_fs_pane_g

0x185a,	// (0x00003890) cell_hwr_fs_pane_g1_ParamLimits

0x185a,	// (0x00003890) cell_hwr_fs_pane_g1

0x13e6,	// (0x0000341c) cell_hwr_fs_pane_g2_ParamLimits

0x13e6,	// (0x0000341c) cell_hwr_fs_pane_g2

0xb70c,	// (0x0000d742) cell_hwr_fs_pane_g3_ParamLimits

0xb70c,	// (0x0000d742) cell_hwr_fs_pane_g3

0xb719,	// (0x0000d74f) cell_hwr_fs_pane_g4_ParamLimits

0xb719,	// (0x0000d74f) cell_hwr_fs_pane_g4

0x0003,

0xf7f6,	// (0x0001182c) cell_hwr_fs_pane_g_ParamLimits

0xf7f6,	// (0x0001182c) cell_hwr_fs_pane_g

0xb726,	// (0x0000d75c) cell_hwr_fs_pane_t1

0xe81f,	// (0x00010855) grid_highlight_pane_cp6

0xe81f,	// (0x00010855) main_idle_act2_pane

0xee29,	// (0x00010e5f) aid_inside_area_popup_secondary

0xbb83,	// (0x0000dbb9) aid_inside_area_window_primary_ParamLimits

0xbb83,	// (0x0000dbb9) aid_inside_area_window_primary

0xc1fb,	// (0x0000e231) ai2_news_ticker_pane

0x34ac,	// (0x000054e2) aid_size_cell_ai1_link_ParamLimits

0x34ac,	// (0x000054e2) aid_size_cell_ai1_link

0xc203,	// (0x0000e239) popup_ai2_data_window_ParamLimits

0xc203,	// (0x0000e239) popup_ai2_data_window

0x34dc,	// (0x00005512) popup_ai2_link_window_ParamLimits

0x34dc,	// (0x00005512) popup_ai2_link_window

0x17aa,	// (0x000037e0) bg_popup_sub_pane_cp4_ParamLimits

0x17aa,	// (0x000037e0) bg_popup_sub_pane_cp4

0x34f0,	// (0x00005526) grid_ai2_link_pane_ParamLimits

0x34f0,	// (0x00005526) grid_ai2_link_pane

0x3507,	// (0x0000553d) popup_ai2_link_window_g1_ParamLimits

0x3507,	// (0x0000553d) popup_ai2_link_window_g1

0x3513,	// (0x00005549) popup_ai2_link_window_g2_ParamLimits

0x3513,	// (0x00005549) popup_ai2_link_window_g2

0x0001,

0xf9c9,	// (0x000119ff) popup_ai2_link_window_g_ParamLimits

0xf9c9,	// (0x000119ff) popup_ai2_link_window_g

0x3522,	// (0x00005558) ai2_mp_button_pane

0x352a,	// (0x00005560) ai2_mp_volume_pane

0x1a54,	// (0x00003a8a) bg_popup_sub_pane_cp5_ParamLimits

0x1a54,	// (0x00003a8a) bg_popup_sub_pane_cp5

0x3532,	// (0x00005568) heading_ai2_gene_pane_ParamLimits

0x3532,	// (0x00005568) heading_ai2_gene_pane

0x353e,	// (0x00005574) list_ai2_gene_pane_ParamLimits

0x353e,	// (0x00005574) list_ai2_gene_pane

0x3586,	// (0x000055bc) cell_ai2_link_pane_ParamLimits

0x3586,	// (0x000055bc) cell_ai2_link_pane

0x359c,	// (0x000055d2) cell_ai2_link_pane_g1

0xe81f,	// (0x00010855) grid_highlight_pane_cp7

0x366c,	// (0x000056a2) ai2_mp_volume_pane_g1

0x3674,	// (0x000056aa) ai2_mp_volume_pane_g2

0x35e1,	// (0x00005617) list_ai2_gene_pane_t1

0x367c,	// (0x000056b2) ai2_mp_volume_pane_g3

0x0002,

0xf9e2,	// (0x00011a18) ai2_mp_volume_pane_g

0xc219,	// (0x0000e24f) volume_small_pane_cp3

0x368d,	// (0x000056c3) aid_size_cell_ai2_button

0x3695,	// (0x000056cb) grid_ai2_button_pane

0x369e,	// (0x000056d4) cell_ai2_button_pane_ParamLimits

0x369e,	// (0x000056d4) cell_ai2_button_pane

0xe6a6,	// (0x000106dc) cell_ai2_button_pane_g1

0xe81f,	// (0x00010855) grid_highlight_pane_cp8

0x362c,	// (0x00005662) ai2_gene_pane_t1_ParamLimits

0x362c,	// (0x00005662) ai2_gene_pane_t1

0xaa7e,	// (0x0000cab4) aid_height_parent_landscape

0xbe97,	// (0x0000decd) aid_height_set_list

0x2e0d,	// (0x00004e43) aid_size_parent

0x3213,	// (0x00005249) aid_size_cell_graphic_pane_ParamLimits

0x354e,	// (0x00005584) popup_ai2_data_window_g1_ParamLimits

0x354e,	// (0x00005584) popup_ai2_data_window_g1

0x355a,	// (0x00005590) ai2_news_ticker_pane_g1

0x3562,	// (0x00005598) ai2_news_ticker_pane_g2

0x0001,

0xf9ce,	// (0x00011a04) ai2_news_ticker_pane_g

0x356a,	// (0x000055a0) ai2_news_ticker_pane_t1

0x3578,	// (0x000055ae) ai2_news_ticker_pane_t2

0x0001,

0xf9d3,	// (0x00011a09) ai2_news_ticker_pane_t

0x35a5,	// (0x000055db) heading_ai2_gene_pane_g1

0x35ad,	// (0x000055e3) heading_ai2_gene_pane_t1_ParamLimits

0x35ad,	// (0x000055e3) heading_ai2_gene_pane_t1

0x35c2,	// (0x000055f8) list_highlight_pane_cp6

0x35ca,	// (0x00005600) ai2_gene_pane_ParamLimits

0x35ca,	// (0x00005600) ai2_gene_pane

0x35ef,	// (0x00005625) list_ai2_gene_pane_t2

0x0001,

0xf9d8,	// (0x00011a0e) list_ai2_gene_pane_t

0x35fd,	// (0x00005633) list_highlight_pane_cp8_ParamLimits

0x35fd,	// (0x00005633) list_highlight_pane_cp8

0x360e,	// (0x00005644) ai2_gene_pane_g1_ParamLimits

0x360e,	// (0x00005644) ai2_gene_pane_g1

0x3620,	// (0x00005656) ai2_gene_pane_g2_ParamLimits

0x3620,	// (0x00005656) ai2_gene_pane_g2

0x0001,

0xf9dd,	// (0x00011a13) ai2_gene_pane_g_ParamLimits

0xf9dd,	// (0x00011a13) ai2_gene_pane_g

0xec06,	// (0x00010c3c) scroll_pane_cp12

0xaa3d,	// (0x0000ca73) control_pane_t3_ParamLimits

0xaa3d,	// (0x0000ca73) control_pane_t3

0xa8ab,	// (0x0000c8e1) status_small_pane_g8_ParamLimits

0xa8ab,	// (0x0000c8e1) status_small_pane_g8

0xabef,	// (0x0000cc25) popup_find_window_ParamLimits

0xaea2,	// (0x0000ced8) popup_note_image_window_ParamLimits

0x1594,	// (0x000035ca) list_double2_graphic_pane_vc_g1_ParamLimits

0x1594,	// (0x000035ca) list_double2_graphic_pane_vc_g1

0xec17,	// (0x00010c4d) list_double2_graphic_pane_vc_g2_ParamLimits

0xec17,	// (0x00010c4d) list_double2_graphic_pane_vc_g2

0xec23,	// (0x00010c59) list_double2_graphic_pane_vc_g3_ParamLimits

0xec23,	// (0x00010c59) list_double2_graphic_pane_vc_g3

0x0002,

0xf7b9,	// (0x000117ef) list_double2_graphic_pane_vc_g_ParamLimits

0xf7b9,	// (0x000117ef) list_double2_graphic_pane_vc_g

0x15a0,	// (0x000035d6) list_double2_graphic_pane_vc_t1_ParamLimits

0x15a0,	// (0x000035d6) list_double2_graphic_pane_vc_t1

0xec17,	// (0x00010c4d) list_single_heading_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_heading_pane_vc_g1

0xec23,	// (0x00010c59) list_single_heading_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_heading_pane_vc_g

0x169b,	// (0x000036d1) list_single_heading_pane_vc_t1_ParamLimits

0x169b,	// (0x000036d1) list_single_heading_pane_vc_t1

0x16b3,	// (0x000036e9) list_single_heading_pane_vc_t2_ParamLimits

0x16b3,	// (0x000036e9) list_single_heading_pane_vc_t2

0x0001,

0xf7da,	// (0x00011810) list_single_heading_pane_vc_t_ParamLimits

0xf7da,	// (0x00011810) list_single_heading_pane_vc_t

0x16e5,	// (0x0000371b) list_setting_number_pane_vc_g1_ParamLimits

0x16e5,	// (0x0000371b) list_setting_number_pane_vc_g1

0x16f1,	// (0x00003727) list_setting_number_pane_vc_g2_ParamLimits

0x16f1,	// (0x00003727) list_setting_number_pane_vc_g2

0x0001,

0xf7df,	// (0x00011815) list_setting_number_pane_vc_g_ParamLimits

0xf7df,	// (0x00011815) list_setting_number_pane_vc_g

0x16fd,	// (0x00003733) list_setting_number_pane_vc_t1_ParamLimits

0x16fd,	// (0x00003733) list_setting_number_pane_vc_t1

0x1711,	// (0x00003747) list_setting_number_pane_vc_t2_ParamLimits

0x1711,	// (0x00003747) list_setting_number_pane_vc_t2

0x172d,	// (0x00003763) list_setting_number_pane_vc_t3_ParamLimits

0x172d,	// (0x00003763) list_setting_number_pane_vc_t3

0x0002,

0xf7e4,	// (0x0001181a) list_setting_number_pane_vc_t_ParamLimits

0xf7e4,	// (0x0001181a) list_setting_number_pane_vc_t

0x1759,	// (0x0000378f) set_value_pane_vc_ParamLimits

0x1759,	// (0x0000378f) set_value_pane_vc

0x3014,	// (0x0000504a) list_double2_graphic_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double2_graphic_pane_vc

0x3014,	// (0x0000504a) list_double2_large_graphic_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double2_large_graphic_pane_vc

0x3014,	// (0x0000504a) list_double2_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double2_pane_vc

0x3014,	// (0x0000504a) list_double_graphic_heading_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_graphic_heading_pane_vc

0x3014,	// (0x0000504a) list_double_graphic_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_graphic_pane_vc

0x3014,	// (0x0000504a) list_double_heading_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_heading_pane_vc

0x3026,	// (0x0000505c) list_double_large_graphic_pane_vc_ParamLimits

0x3026,	// (0x0000505c) list_double_large_graphic_pane_vc

0x3014,	// (0x0000504a) list_double_number_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_number_pane_vc

0x3014,	// (0x0000504a) list_double_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_pane_vc

0x3014,	// (0x0000504a) list_double_time_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_double_time_pane_vc

0x3014,	// (0x0000504a) list_setting_number_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_setting_number_pane_vc

0x3014,	// (0x0000504a) list_setting_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_setting_pane_vc

0x3014,	// (0x0000504a) list_single_graphic_heading_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_single_graphic_heading_pane_vc

0x3014,	// (0x0000504a) list_single_heading_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_single_heading_pane_vc

0x3014,	// (0x0000504a) list_single_number_heading_pane_vc_ParamLimits

0x3014,	// (0x0000504a) list_single_number_heading_pane_vc

0x1594,	// (0x000035ca) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1594,	// (0x000035ca) list_double_graphic_heading_pane_vc_g1

0xec17,	// (0x00010c4d) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xec17,	// (0x00010c4d) list_double_graphic_heading_pane_vc_g2

0xec23,	// (0x00010c59) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xec23,	// (0x00010c59) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf7b9,	// (0x000117ef) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000117ef) list_double_graphic_heading_pane_vc_g

0x36d2,	// (0x00005708) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x36d2,	// (0x00005708) list_double_graphic_heading_pane_vc_t1

0x36ee,	// (0x00005724) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x36ee,	// (0x00005724) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9e9,	// (0x00011a1f) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9e9,	// (0x00011a1f) list_double_graphic_heading_pane_vc_t

0x16e5,	// (0x0000371b) list_setting_pane_vc_g1_ParamLimits

0x16e5,	// (0x0000371b) list_setting_pane_vc_g1

0x16f1,	// (0x00003727) list_setting_pane_vc_g2_ParamLimits

0x16f1,	// (0x00003727) list_setting_pane_vc_g2

0x0001,

0xf7df,	// (0x00011815) list_setting_pane_vc_g_ParamLimits

0xf7df,	// (0x00011815) list_setting_pane_vc_g

0x395d,	// (0x00005993) list_setting_pane_vc_t1_ParamLimits

0x395d,	// (0x00005993) list_setting_pane_vc_t1

0x3979,	// (0x000059af) list_setting_pane_vc_t2_ParamLimits

0x3979,	// (0x000059af) list_setting_pane_vc_t2

0x0001,

0xfa2c,	// (0x00011a62) list_setting_pane_vc_t_ParamLimits

0xfa2c,	// (0x00011a62) list_setting_pane_vc_t

0x1759,	// (0x0000378f) set_value_pane_cp_vc_ParamLimits

0x1759,	// (0x0000378f) set_value_pane_cp_vc

0xec17,	// (0x00010c4d) list_single_number_heading_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_single_number_heading_pane_vc_g1

0xec23,	// (0x00010c59) list_single_number_heading_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_single_number_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_single_number_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_single_number_heading_pane_vc_g

0x169b,	// (0x000036d1) list_single_number_heading_pane_vc_t1_ParamLimits

0x169b,	// (0x000036d1) list_single_number_heading_pane_vc_t1

0x3993,	// (0x000059c9) list_single_number_heading_pane_vc_t2_ParamLimits

0x3993,	// (0x000059c9) list_single_number_heading_pane_vc_t2

0x39a7,	// (0x000059dd) list_single_number_heading_pane_vc_t3_ParamLimits

0x39a7,	// (0x000059dd) list_single_number_heading_pane_vc_t3

0x0002,

0xfa31,	// (0x00011a67) list_single_number_heading_pane_vc_t_ParamLimits

0xfa31,	// (0x00011a67) list_single_number_heading_pane_vc_t

0x1594,	// (0x000035ca) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1594,	// (0x000035ca) list_single_graphic_heading_pane_vc_g1

0xec17,	// (0x00010c4d) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xec17,	// (0x00010c4d) list_single_graphic_heading_pane_vc_g4

0xec23,	// (0x00010c59) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xec23,	// (0x00010c59) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7b9,	// (0x000117ef) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7b9,	// (0x000117ef) list_single_graphic_heading_pane_vc_g

0x169b,	// (0x000036d1) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x169b,	// (0x000036d1) list_single_graphic_heading_pane_vc_t1

0x39b9,	// (0x000059ef) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x39b9,	// (0x000059ef) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00011a6e) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00011a6e) list_single_graphic_heading_pane_vc_t

0xec17,	// (0x00010c4d) list_double2_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_double2_pane_vc_g1

0xec23,	// (0x00010c59) list_double2_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_double2_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_double2_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_double2_pane_vc_g

0x39cd,	// (0x00005a03) list_double2_pane_vc_t1_ParamLimits

0x39cd,	// (0x00005a03) list_double2_pane_vc_t1

0x39e3,	// (0x00005a19) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x39e3,	// (0x00005a19) list_double2_large_graphic_pane_vc_g1

0xec17,	// (0x00010c4d) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xec17,	// (0x00010c4d) list_double2_large_graphic_pane_vc_g2

0xec23,	// (0x00010c59) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xec23,	// (0x00010c59) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5e5,	// (0x0001161b) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5e5,	// (0x0001161b) list_double2_large_graphic_pane_vc_g

0x39ef,	// (0x00005a25) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x39ef,	// (0x00005a25) list_double2_large_graphic_pane_vc_t1

0x3a05,	// (0x00005a3b) list_double_time_pane_vc_g1_ParamLimits

0x3a05,	// (0x00005a3b) list_double_time_pane_vc_g1

0x3a11,	// (0x00005a47) list_double_time_pane_vc_g2_ParamLimits

0x3a11,	// (0x00005a47) list_double_time_pane_vc_g2

0x0001,

0xfa3d,	// (0x00011a73) list_double_time_pane_vc_g_ParamLimits

0xfa3d,	// (0x00011a73) list_double_time_pane_vc_g

0x3a1d,	// (0x00005a53) list_double_time_pane_vc_t1_ParamLimits

0x3a1d,	// (0x00005a53) list_double_time_pane_vc_t1

0x3a41,	// (0x00005a77) list_double_time_pane_vc_t2_ParamLimits

0x3a41,	// (0x00005a77) list_double_time_pane_vc_t2

0x3a70,	// (0x00005aa6) list_double_time_pane_vc_t3_ParamLimits

0x3a70,	// (0x00005aa6) list_double_time_pane_vc_t3

0x3a82,	// (0x00005ab8) list_double_time_pane_vc_t4_ParamLimits

0x3a82,	// (0x00005ab8) list_double_time_pane_vc_t4

0x0003,

0xfa42,	// (0x00011a78) list_double_time_pane_vc_t_ParamLimits

0xfa42,	// (0x00011a78) list_double_time_pane_vc_t

0xec17,	// (0x00010c4d) list_double_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_double_pane_vc_g1

0xec23,	// (0x00010c59) list_double_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_double_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_double_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_double_pane_vc_g

0x3a96,	// (0x00005acc) list_double_pane_vc_t1_ParamLimits

0x3a96,	// (0x00005acc) list_double_pane_vc_t1

0x3aaa,	// (0x00005ae0) list_double_pane_vc_t2_ParamLimits

0x3aaa,	// (0x00005ae0) list_double_pane_vc_t2

0x0001,

0xfa4b,	// (0x00011a81) list_double_pane_vc_t_ParamLimits

0xfa4b,	// (0x00011a81) list_double_pane_vc_t

0xec17,	// (0x00010c4d) list_double_number_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_double_number_pane_vc_g1

0xec23,	// (0x00010c59) list_double_number_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_double_number_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_double_number_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_double_number_pane_vc_g

0x3ac2,	// (0x00005af8) list_double_number_pane_vc_t1_ParamLimits

0x3ac2,	// (0x00005af8) list_double_number_pane_vc_t1

0x3ad4,	// (0x00005b0a) list_double_number_pane_vc_t2_ParamLimits

0x3ad4,	// (0x00005b0a) list_double_number_pane_vc_t2

0x3ae8,	// (0x00005b1e) list_double_number_pane_vc_t3_ParamLimits

0x3ae8,	// (0x00005b1e) list_double_number_pane_vc_t3

0x0002,

0xfa50,	// (0x00011a86) list_double_number_pane_vc_t_ParamLimits

0xfa50,	// (0x00011a86) list_double_number_pane_vc_t

0x3b00,	// (0x00005b36) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3b00,	// (0x00005b36) list_double_large_graphic_pane_vc_g1

0x3b22,	// (0x00005b58) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3b22,	// (0x00005b58) list_double_large_graphic_pane_vc_g2

0x3b36,	// (0x00005b6c) list_double_large_graphic_pane_vc_g3_ParamLimits

0x3b36,	// (0x00005b6c) list_double_large_graphic_pane_vc_g3

0x3b45,	// (0x00005b7b) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3b45,	// (0x00005b7b) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa57,	// (0x00011a8d) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa57,	// (0x00011a8d) list_double_large_graphic_pane_vc_g

0x3b51,	// (0x00005b87) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3b51,	// (0x00005b87) list_double_large_graphic_pane_vc_t1

0x3b6d,	// (0x00005ba3) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3b6d,	// (0x00005ba3) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa60,	// (0x00011a96) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa60,	// (0x00011a96) list_double_large_graphic_pane_vc_t

0xec17,	// (0x00010c4d) list_double_heading_pane_vc_g1_ParamLimits

0xec17,	// (0x00010c4d) list_double_heading_pane_vc_g1

0xec23,	// (0x00010c59) list_double_heading_pane_vc_g2_ParamLimits

0xec23,	// (0x00010c59) list_double_heading_pane_vc_g2

0x0001,

0xf5c8,	// (0x000115fe) list_double_heading_pane_vc_g_ParamLimits

0xf5c8,	// (0x000115fe) list_double_heading_pane_vc_g

0x3b8f,	// (0x00005bc5) list_double_heading_pane_vc_t1_ParamLimits

0x3b8f,	// (0x00005bc5) list_double_heading_pane_vc_t1

0x169b,	// (0x000036d1) list_double_heading_pane_vc_t2_ParamLimits

0x169b,	// (0x000036d1) list_double_heading_pane_vc_t2

0x0001,

0xfa65,	// (0x00011a9b) list_double_heading_pane_vc_t_ParamLimits

0xfa65,	// (0x00011a9b) list_double_heading_pane_vc_t

0x3ba3,	// (0x00005bd9) list_double_graphic_pane_vc_g1_ParamLimits

0x3ba3,	// (0x00005bd9) list_double_graphic_pane_vc_g1

0x3baf,	// (0x00005be5) list_double_graphic_pane_vc_g2_ParamLimits

0x3baf,	// (0x00005be5) list_double_graphic_pane_vc_g2

0xec17,	// (0x00010c4d) list_double_graphic_pane_vc_g3_ParamLimits

0xec17,	// (0x00010c4d) list_double_graphic_pane_vc_g3

0x0003,

0xfa6a,	// (0x00011aa0) list_double_graphic_pane_vc_g_ParamLimits

0xfa6a,	// (0x00011aa0) list_double_graphic_pane_vc_g

0x3bcc,	// (0x00005c02) list_double_graphic_pane_vc_t1_ParamLimits

0x3bcc,	// (0x00005c02) list_double_graphic_pane_vc_t1

0x3bf0,	// (0x00005c26) list_double_graphic_pane_vc_t2_ParamLimits

0x3bf0,	// (0x00005c26) list_double_graphic_pane_vc_t2

0x0001,

0xfa73,	// (0x00011aa9) list_double_graphic_pane_vc_t_ParamLimits

0xfa73,	// (0x00011aa9) list_double_graphic_pane_vc_t

0xe6c8,	// (0x000106fe) aid_size_cell_fastswap

0x9494,	// (0x0000b4ca) aid_size_cell_touch_ParamLimits

0x9494,	// (0x0000b4ca) aid_size_cell_touch

0xe829,	// (0x0001085f) popup_fast_swap_wide_window_ParamLimits

0xe829,	// (0x0001085f) popup_fast_swap_wide_window

0x9664,	// (0x0000b69a) touch_pane_ParamLimits

0x9664,	// (0x0000b69a) touch_pane

0xecb2,	// (0x00010ce8) button_value_adjust_pane_cp2

0xecba,	// (0x00010cf0) button_value_adjust_pane_cp4

0xecc2,	// (0x00010cf8) form_field_data_pane_cp2

0xa0fd,	// (0x0000c133) form_field_data_wide_pane_cp2

0xf1b4,	// (0x000111ea) bg_scroll_pane_ParamLimits

0xa45e,	// (0x0000c494) scroll_handle_pane_ParamLimits

0xf1d3,	// (0x00011209) scroll_sc2_down_pane_ParamLimits

0xf1d3,	// (0x00011209) scroll_sc2_down_pane

0xf1fa,	// (0x00011230) scroll_sc2_up_pane_ParamLimits

0xf1fa,	// (0x00011230) scroll_sc2_up_pane

0xc345,	// (0x0000e37b) grid_wheel_folder_pane_g1_ParamLimits

0xc345,	// (0x0000e37b) grid_wheel_folder_pane_g1

0x01a0,	// (0x000021d6) clock_nsta_pane_cp2_ParamLimits

0x01a0,	// (0x000021d6) clock_nsta_pane_cp2

0x0abe,	// (0x00002af4) listscroll_midp_pane_ParamLimits

0xa77d,	// (0x0000c7b3) midp_canvas_pane

0x0a2a,	// (0x00002a60) nsta_clock_indic_pane

0x0a88,	// (0x00002abe) listscroll_form_pane_vc

0x0aac,	// (0x00002ae2) listscroll_set_pane_vc_ParamLimits

0x0aac,	// (0x00002ae2) listscroll_set_pane_vc

0xb357,	// (0x0000d38d) clock_nsta_pane

0xb381,	// (0x0000d3b7) indicator_nsta_pane

0x14fe,	// (0x00003534) bg_popup_sub_pane_cp2_ParamLimits

0x1512,	// (0x00003548) find_pane_cp2_ParamLimits

0x1512,	// (0x00003548) find_pane_cp2

0x1528,	// (0x0000355e) grid_toobar_pane_ParamLimits

0x1769,	// (0x0000379f) list_form_gen_pane_vc_ParamLimits

0x1769,	// (0x0000379f) list_form_gen_pane_vc

0x177f,	// (0x000037b5) scroll_pane_cp8_vc_ParamLimits

0x177f,	// (0x000037b5) scroll_pane_cp8_vc

0x1898,	// (0x000038ce) data_form_wide_pane_vc_ParamLimits

0x1898,	// (0x000038ce) data_form_wide_pane_vc

0x18a4,	// (0x000038da) form_field_data_wide_pane_vc_g1

0x18ac,	// (0x000038e2) form_field_data_wide_pane_vc_t1_ParamLimits

0x18ac,	// (0x000038e2) form_field_data_wide_pane_vc_t1

0xece9,	// (0x00010d1f) input_focus_pane_cp6_vc_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_cp6_vc

0xb8f7,	// (0x0000d92d) list_midp_pane_ParamLimits

0x3279,	// (0x000052af) scroll_pane_cp16_ParamLimits

0x3279,	// (0x000052af) scroll_pane_cp16

0x1c74,	// (0x00003caa) button_value_adjust_pane_ParamLimits

0x1c74,	// (0x00003caa) button_value_adjust_pane

0xbea8,	// (0x0000dede) button_value_adjust_pane_cp6_ParamLimits

0xbea8,	// (0x0000dede) button_value_adjust_pane_cp6

0xbfc2,	// (0x0000dff8) settings_code_pane_cp_ParamLimits

0xbfc2,	// (0x0000dff8) settings_code_pane_cp

0xe6a6,	// (0x000106dc) cell_touch_pane_g1

0xe6a6,	// (0x000106dc) cell_touch_pane_g2

0x0001,

0xf6fe,	// (0x00011734) cell_touch_pane_g

0xc222,	// (0x0000e258) cell_touch_pane_cp_ParamLimits

0xc222,	// (0x0000e258) cell_touch_pane_cp

0xc23e,	// (0x0000e274) cell_touch_pane_ParamLimits

0xc23e,	// (0x0000e274) cell_touch_pane

0xe6a6,	// (0x000106dc) scroll_sc2_down_pane_g1

0xe6a6,	// (0x000106dc) scroll_sc2_up_pane_g1

0xe81f,	// (0x00010855) bg_set_opt_pane_cp4_vc

0x370c,	// (0x00005742) list_set_graphic_pane_vc_g1_ParamLimits

0x370c,	// (0x00005742) list_set_graphic_pane_vc_g1

0x3718,	// (0x0000574e) list_set_graphic_pane_vc_g2_ParamLimits

0x3718,	// (0x0000574e) list_set_graphic_pane_vc_g2

0x0001,

0xf9ee,	// (0x00011a24) list_set_graphic_pane_vc_g_ParamLimits

0xf9ee,	// (0x00011a24) list_set_graphic_pane_vc_g

0x3724,	// (0x0000575a) text_primary_small_cp13_vc_ParamLimits

0x3724,	// (0x0000575a) text_primary_small_cp13_vc

0x373c,	// (0x00005772) list_set_graphic_pane_vc_ParamLimits

0x373c,	// (0x00005772) list_set_graphic_pane_vc

0xe81f,	// (0x00010855) input_focus_pane_cp2_vc

0xe6a6,	// (0x000106dc) setting_code_pane_vc_g1

0xe8b2,	// (0x000108e8) setting_code_pane_vc_t1

0x374f,	// (0x00005785) set_text_pane_vc_t1_ParamLimits

0x374f,	// (0x00005785) set_text_pane_vc_t1

0xe81f,	// (0x00010855) input_focus_pane_cp1_vc

0x376b,	// (0x000057a1) list_set_text_pane_vc

0xe6a6,	// (0x000106dc) setting_text_pane_vc_g1

0xe81f,	// (0x00010855) bg_set_opt_pane_cp2_vc

0xe8a9,	// (0x000108df) setting_slider_graphic_pane_vc_g1

0x3775,	// (0x000057ab) setting_slider_graphic_pane_vc_t1

0x3785,	// (0x000057bb) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9f3,	// (0x00011a29) setting_slider_graphic_pane_vc_t

0x3795,	// (0x000057cb) slider_set_pane_cp_vc

0x379d,	// (0x000057d3) slider_set_pane_vc_g1

0x37a6,	// (0x000057dc) slider_set_pane_vc_g2

0x0006,

0xf9f8,	// (0x00011a2e) slider_set_pane_vc_g

0xed7b,	// (0x00010db1) set_opt_bg_pane_g1_copy1

0xed83,	// (0x00010db9) set_opt_bg_pane_g2_copy1

0x37d2,	// (0x00005808) set_opt_bg_pane_g3_copy1

0xed93,	// (0x00010dc9) set_opt_bg_pane_g4_copy1

0xed9b,	// (0x00010dd1) set_opt_bg_pane_g5_copy1

0xeda3,	// (0x00010dd9) set_opt_bg_pane_g6_copy1

0x37da,	// (0x00005810) set_opt_bg_pane_g7_copy1

0x37e2,	// (0x00005818) set_opt_bg_pane_g8_copy1

0x37ea,	// (0x00005820) set_opt_bg_pane_g9_copy1

0xe81f,	// (0x00010855) bg_set_opt_pane_cp_vc

0x37f2,	// (0x00005828) setting_slider_pane_vc_t1

0x3801,	// (0x00005837) setting_slider_pane_vc_t2

0x3811,	// (0x00005847) setting_slider_pane_vc_t3

0x0002,

0xfa07,	// (0x00011a3d) setting_slider_pane_vc_t

0x3821,	// (0x00005857) slider_set_pane_vc

0x2495,	// (0x000044cb) volume_set_pane_vc_g1

0x3829,	// (0x0000585f) volume_set_pane_vc_g2

0x3832,	// (0x00005868) volume_set_pane_vc_g3

0x383b,	// (0x00005871) volume_set_pane_vc_g4

0x3844,	// (0x0000587a) volume_set_pane_vc_g5

0x384d,	// (0x00005883) volume_set_pane_vc_g6

0x3856,	// (0x0000588c) volume_set_pane_vc_g7

0x385f,	// (0x00005895) volume_set_pane_vc_g8

0x3868,	// (0x0000589e) volume_set_pane_vc_g9

0x3871,	// (0x000058a7) volume_set_pane_vc_g10

0x0009,

0xfa0e,	// (0x00011a44) volume_set_pane_vc_g

0x387a,	// (0x000058b0) volume_set_pane_vc

0x3882,	// (0x000058b8) button_value_adjust_pane_cp1_vc

0x388c,	// (0x000058c2) list_highlight_pane_cp2_vc

0x3895,	// (0x000058cb) list_set_pane_vc_ParamLimits

0x3895,	// (0x000058cb) list_set_pane_vc

0x38f3,	// (0x00005929) main_pane_set_vc_t1_ParamLimits

0x38f3,	// (0x00005929) main_pane_set_vc_t1

0x3908,	// (0x0000593e) main_pane_set_vc_t2_ParamLimits

0x3908,	// (0x0000593e) main_pane_set_vc_t2

0x391a,	// (0x00005950) main_pane_set_vc_t3_ParamLimits

0x391a,	// (0x00005950) main_pane_set_vc_t3

0x392c,	// (0x00005962) main_pane_set_vc_t4_ParamLimits

0x392c,	// (0x00005962) main_pane_set_vc_t4

0x0003,

0xfa23,	// (0x00011a59) main_pane_set_vc_t_ParamLimits

0xfa23,	// (0x00011a59) main_pane_set_vc_t

0x393e,	// (0x00005974) setting_code_pane_vc_ParamLimits

0x393e,	// (0x00005974) setting_code_pane_vc

0x394d,	// (0x00005983) setting_slider_graphic_pane_vc

0x394d,	// (0x00005983) setting_slider_pane_vc

0x394d,	// (0x00005983) setting_text_pane_vc

0x394d,	// (0x00005983) setting_volume_pane_vc

0x3955,	// (0x0000598b) scroll_pane_cp121_vc

0xeca0,	// (0x00010cd6) set_content_pane_vc

0x3c1a,	// (0x00005c50) button_value_adjust_pane_g1

0x3c23,	// (0x00005c59) button_value_adjust_pane_g2

0x0001,

0xfa78,	// (0x00011aae) button_value_adjust_pane_g

0x3c2c,	// (0x00005c62) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3c2c,	// (0x00005c62) form_field_slider_wide_pane_vc_t1

0x3c40,	// (0x00005c76) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3c40,	// (0x00005c76) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa7d,	// (0x00011ab3) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa7d,	// (0x00011ab3) form_field_slider_wide_pane_vc_t

0xe88d,	// (0x000108c3) input_focus_pane_cp10_vc_ParamLimits

0xe88d,	// (0x000108c3) input_focus_pane_cp10_vc

0x3c6e,	// (0x00005ca4) slider_cont_pane_cp1_vc_ParamLimits

0x3c6e,	// (0x00005ca4) slider_cont_pane_cp1_vc

0x3c80,	// (0x00005cb6) slider_form_pane_g1_cp2

0x37a6,	// (0x000057dc) slider_form_pane_g2_cp2

0x3cad,	// (0x00005ce3) form_field_slider_pane_vc_t3

0x3cbb,	// (0x00005cf1) form_field_slider_pane_vc_t4

0x3cc9,	// (0x00005cff) slider_form_pane_vc_ParamLimits

0x3cc9,	// (0x00005cff) slider_form_pane_vc

0x3cd6,	// (0x00005d0c) form_field_slider_pane_vc_t1_ParamLimits

0x3cd6,	// (0x00005d0c) form_field_slider_pane_vc_t1

0x3c40,	// (0x00005c76) form_field_slider_pane_vc_t2_ParamLimits

0x3c40,	// (0x00005c76) form_field_slider_pane_vc_t2

0x0001,

0xfa8f,	// (0x00011ac5) form_field_slider_pane_vc_t_ParamLimits

0xfa8f,	// (0x00011ac5) form_field_slider_pane_vc_t

0xe88d,	// (0x000108c3) input_focus_pane_cp9_vc_ParamLimits

0xe88d,	// (0x000108c3) input_focus_pane_cp9_vc

0x3cf2,	// (0x00005d28) slider_cont_pane_vc_ParamLimits

0x3cf2,	// (0x00005d28) slider_cont_pane_vc

0x3d06,	// (0x00005d3c) list_form_graphic_pane_cp_vc_ParamLimits

0x3d06,	// (0x00005d3c) list_form_graphic_pane_cp_vc

0x18a4,	// (0x000038da) form_field_popup_wide_pane_vc_g1

0x3d1b,	// (0x00005d51) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3d1b,	// (0x00005d51) form_field_popup_wide_pane_vc_t1

0xece9,	// (0x00010d1f) input_focus_pane_cp8_vc_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_cp8_vc

0x3d60,	// (0x00005d96) list_form_wide_pane_vc_ParamLimits

0x3d60,	// (0x00005d96) list_form_wide_pane_vc

0x3d6c,	// (0x00005da2) list_form_graphic_pane_vc_g1

0x3d74,	// (0x00005daa) list_form_graphic_pane_vc_t1_ParamLimits

0x3d74,	// (0x00005daa) list_form_graphic_pane_vc_t1

0xe89b,	// (0x000108d1) list_highlight_pane_cp5_vc_ParamLimits

0xe89b,	// (0x000108d1) list_highlight_pane_cp5_vc

0x3d90,	// (0x00005dc6) list_form_graphic_pane_vc_ParamLimits

0x3d90,	// (0x00005dc6) list_form_graphic_pane_vc

0x18a4,	// (0x000038da) form_field_popup_pane_vc_g1

0x3da6,	// (0x00005ddc) form_field_popup_pane_vc_t1_ParamLimits

0x3da6,	// (0x00005ddc) form_field_popup_pane_vc_t1

0xece9,	// (0x00010d1f) input_focus_pane_cp7_vc_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_cp7_vc

0x3dbd,	// (0x00005df3) list_form_pane_vc_ParamLimits

0x3dbd,	// (0x00005df3) list_form_pane_vc

0x3dc9,	// (0x00005dff) data_form_pane_vc_t1_ParamLimits

0x3dc9,	// (0x00005dff) data_form_pane_vc_t1

0xed7b,	// (0x00010db1) input_focus_pane_vc_g1

0xed83,	// (0x00010db9) input_focus_pane_vc_g2

0xed8b,	// (0x00010dc1) input_focus_pane_vc_g3

0xed93,	// (0x00010dc9) input_focus_pane_vc_g4

0xed9b,	// (0x00010dd1) input_focus_pane_vc_g5

0xeda3,	// (0x00010dd9) input_focus_pane_vc_g6

0xedab,	// (0x00010de1) input_focus_pane_vc_g7

0xedb3,	// (0x00010de9) input_focus_pane_vc_g8

0xedbb,	// (0x00010df1) input_focus_pane_vc_g9

0xe6a6,	// (0x000106dc) input_focus_pane_vc_g10

0x0009,

0xf687,	// (0x000116bd) input_focus_pane_vc_g

0x1898,	// (0x000038ce) data_form_pane_vc_ParamLimits

0x1898,	// (0x000038ce) data_form_pane_vc

0x18a4,	// (0x000038da) form_field_data_pane_vc_g1

0x3de4,	// (0x00005e1a) form_field_data_pane_vc_t1_ParamLimits

0x3de4,	// (0x00005e1a) form_field_data_pane_vc_t1

0xece9,	// (0x00010d1f) input_focus_pane_vc_ParamLimits

0xece9,	// (0x00010d1f) input_focus_pane_vc

0x3dfe,	// (0x00005e34) button_value_adjust_pane_cp3_vc

0x3e06,	// (0x00005e3c) button_value_adjust_pane_cp5_vc

0x3e0e,	// (0x00005e44) form_field_data_pane_vc_ParamLimits

0x3e0e,	// (0x00005e44) form_field_data_pane_vc

0x3e25,	// (0x00005e5b) form_field_data_pane_vc_cp2

0x3e2d,	// (0x00005e63) form_field_data_wide_pane_vc_ParamLimits

0x3e2d,	// (0x00005e63) form_field_data_wide_pane_vc

0x3e43,	// (0x00005e79) form_field_data_wide_pane_vc_cp2

0x3e4b,	// (0x00005e81) form_field_popup_pane_vc_ParamLimits

0x3e4b,	// (0x00005e81) form_field_popup_pane_vc

0x3e62,	// (0x00005e98) form_field_popup_wide_pane_vc_ParamLimits

0x3e62,	// (0x00005e98) form_field_popup_wide_pane_vc

0x3e78,	// (0x00005eae) form_field_slider_pane_vc_ParamLimits

0x3e78,	// (0x00005eae) form_field_slider_pane_vc

0x3e8b,	// (0x00005ec1) form_field_slider_wide_pane_vc_ParamLimits

0x3e8b,	// (0x00005ec1) form_field_slider_wide_pane_vc

0xc25b,	// (0x0000e291) grid_touch_1_pane_ParamLimits

0xc25b,	// (0x0000e291) grid_touch_1_pane

0xc26f,	// (0x0000e2a5) grid_touch_2_pane_ParamLimits

0xc26f,	// (0x0000e2a5) grid_touch_2_pane

0x3f59,	// (0x00005f8f) touch_pane_g1_ParamLimits

0x3f59,	// (0x00005f8f) touch_pane_g1

0x3ec2,	// (0x00005ef8) cell_app_pane_cp_wide_ParamLimits

0x3ec2,	// (0x00005ef8) cell_app_pane_cp_wide

0x3ed3,	// (0x00005f09) grid_popup_fast_wide_pane_ParamLimits

0x3ed3,	// (0x00005f09) grid_popup_fast_wide_pane

0x3ee7,	// (0x00005f1d) scroll_pane_cp19_ParamLimits

0x3ee7,	// (0x00005f1d) scroll_pane_cp19

0xe81f,	// (0x00010855) bg_popup_window_pane_cp20

0x3efb,	// (0x00005f31) listscroll_popup_fast_wide_pane

0xeeea,	// (0x00010f20) grid_indicator_nsta_pane

0x3f03,	// (0x00005f39) clock_nsta_pane_g1

0x3f0c,	// (0x00005f42) clock_nsta_pane_t1

0xc299,	// (0x0000e2cf) cell_indicator_nsta_pane_ParamLimits

0xc299,	// (0x0000e2cf) cell_indicator_nsta_pane

0x3f59,	// (0x00005f8f) cell_indicator_nsta_pane_g1

0xc2b0,	// (0x0000e2e6) cell_indicator_nsta_pane_g2

0x0001,

0xfaa0,	// (0x00011ad6) cell_indicator_nsta_pane_g

0x3f74,	// (0x00005faa) clock_nsta_pane_cp

0x3f7c,	// (0x00005fb2) indicator_nsta_pane_cp

0x3f84,	// (0x00005fba) nsta_clock_indic_pane_g1

0xe8f1,	// (0x00010927) grid_indicator_pane

0xa4f8,	// (0x0000c52e) scroll_pane_cp29

0x00cd,	// (0x00002103) indicator_nsta_pane_cp2_ParamLimits

0x00cd,	// (0x00002103) indicator_nsta_pane_cp2

0xe89b,	// (0x000108d1) main_apps_wheel_pane

0xb80c,	// (0x0000d842) form_midp_field_text_pane_ParamLimits

0x1c46,	// (0x00003c7c) scroll_bar_cp050_ParamLimits

0x3fe5,	// (0x0000601b) cell_indicator_pane_ParamLimits

0x3fe5,	// (0x0000601b) cell_indicator_pane

0x3ffe,	// (0x00006034) cell_indicator_pane_g1

0xc2cf,	// (0x0000e305) grid_wheel_folder_pane_ParamLimits

0xc2cf,	// (0x0000e305) grid_wheel_folder_pane

0xc2dd,	// (0x0000e313) list_wheel_apps_pane_ParamLimits

0xc2dd,	// (0x0000e313) list_wheel_apps_pane

0xc2eb,	// (0x0000e321) main_apps_wheel_pane_g1_ParamLimits

0xc2eb,	// (0x0000e321) main_apps_wheel_pane_g1

0xc2f7,	// (0x0000e32d) main_apps_wheel_pane_g2_ParamLimits

0xc2f7,	// (0x0000e32d) main_apps_wheel_pane_g2

0x0001,

0xfabc,	// (0x00011af2) main_apps_wheel_pane_g_ParamLimits

0xfabc,	// (0x00011af2) main_apps_wheel_pane_g

0xc305,	// (0x0000e33b) main_apps_wheel_pane_t1_ParamLimits

0xc305,	// (0x0000e33b) main_apps_wheel_pane_t1

0xc319,	// (0x0000e34f) list_wheel_apps_pane_g1

0xc321,	// (0x0000e357) list_wheel_apps_pane_g2

0xc329,	// (0x0000e35f) list_wheel_apps_pane_g3

0xc331,	// (0x0000e367) list_wheel_apps_pane_g4

0xc33b,	// (0x0000e371) list_wheel_apps_pane_g5

0x0004,

0xfac1,	// (0x00011af7) list_wheel_apps_pane_g

0x03cb,	// (0x00002401) navi_icon_text_pane

0xb24b,	// (0x0000d281) aid_fill_nsta

0x40c5,	// (0x000060fb) navi_icon_text_pane_g1

0x40d1,	// (0x00006107) navi_icon_text_pane_t1

0x026e,	// (0x000022a4) list_set_graphic_pane_t1_ParamLimits

0x026e,	// (0x000022a4) list_set_graphic_pane_t1

0x2375,	// (0x000043ab) popup_midp_note_alarm_window_t6_ParamLimits

0x2375,	// (0x000043ab) popup_midp_note_alarm_window_t6

0x2387,	// (0x000043bd) popup_midp_note_alarm_window_t7_ParamLimits

0x2387,	// (0x000043bd) popup_midp_note_alarm_window_t7

0x2399,	// (0x000043cf) popup_midp_note_alarm_window_t8_ParamLimits

0x2399,	// (0x000043cf) popup_midp_note_alarm_window_t8

0x23ab,	// (0x000043e1) popup_midp_note_alarm_window_t9_ParamLimits

0x23ab,	// (0x000043e1) popup_midp_note_alarm_window_t9

0x23bd,	// (0x000043f3) popup_midp_note_alarm_window_t10_ParamLimits

0x23bd,	// (0x000043f3) popup_midp_note_alarm_window_t10

0x23cf,	// (0x00004405) popup_midp_note_alarm_window_t11_ParamLimits

0x23cf,	// (0x00004405) popup_midp_note_alarm_window_t11

0xbb64,	// (0x0000db9a) scroll_pane_cp17_ParamLimits

0xbb64,	// (0x0000db9a) scroll_pane_cp17

0x2495,	// (0x000044cb) volume_small_pane_cp_g1

0x40e3,	// (0x00006119) volume_small_pane_cp_g2

0x40ec,	// (0x00006122) volume_small_pane_cp_g3

0x40f5,	// (0x0000612b) volume_small_pane_cp_g4

0x40fe,	// (0x00006134) volume_small_pane_cp_g5

0x3844,	// (0x0000587a) volume_small_pane_cp_g6

0x4107,	// (0x0000613d) volume_small_pane_cp_g7

0x4110,	// (0x00006146) volume_small_pane_cp_g8

0x4119,	// (0x0000614f) volume_small_pane_cp_g9

0x4122,	// (0x00006158) volume_small_pane_cp_g10

0x0620,	// (0x00002656) midp_ticker_pane_g1_ParamLimits

0x062c,	// (0x00002662) midp_ticker_pane_g2_ParamLimits

0xf753,	// (0x00011789) midp_ticker_pane_g_ParamLimits

0x0638,	// (0x0000266e) midp_ticker_pane_t1_ParamLimits

0xb26f,	// (0x0000d2a5) aid_fill_nsta_2

0x1c32,	// (0x00003c68) list_form2_midp_pane

0x2fc7,	// (0x00004ffd) midp_editing_number_pane_ParamLimits

0x2fd6,	// (0x0000500c) midp_ticker_pane_ParamLimits

0x412b,	// (0x00006161) form2_midp_field_pane

0x414f,	// (0x00006185) scroll_pane_cp51

0x416f,	// (0x000061a5) form2_midp_button_pane_ParamLimits

0x416f,	// (0x000061a5) form2_midp_button_pane

0x4181,	// (0x000061b7) form2_midp_content_pane_ParamLimits

0x4181,	// (0x000061b7) form2_midp_content_pane

0x419b,	// (0x000061d1) form2_midp_field_choice_group_pane

0x41a3,	// (0x000061d9) form2_midp_field_pane_g1

0x41ab,	// (0x000061e1) form2_midp_field_pane_g2

0x41b3,	// (0x000061e9) form2_midp_field_pane_g3

0x41bb,	// (0x000061f1) form2_midp_field_pane_g4

0x0003,

0xfae6,	// (0x00011b1c) form2_midp_field_pane_g

0x41c3,	// (0x000061f9) form2_midp_gauge_slider_pane

0x41cb,	// (0x00006201) form2_midp_gauge_wait_pane

0x41d3,	// (0x00006209) form2_midp_image_pane_ParamLimits

0x41d3,	// (0x00006209) form2_midp_image_pane

0xc36e,	// (0x0000e3a4) form2_midp_label_pane_ParamLimits

0xc36e,	// (0x0000e3a4) form2_midp_label_pane

0xc387,	// (0x0000e3bd) form2_midp_label_pane_cp_ParamLimits

0xc387,	// (0x0000e3bd) form2_midp_label_pane_cp

0x4228,	// (0x0000625e) form2_midp_string_pane_ParamLimits

0x4228,	// (0x0000625e) form2_midp_string_pane

0xc3a6,	// (0x0000e3dc) form2_midp_text_pane_ParamLimits

0xc3a6,	// (0x0000e3dc) form2_midp_text_pane

0x4255,	// (0x0000628b) form2_midp_time_pane

0x4265,	// (0x0000629b) input_focus_pane_cp51_ParamLimits

0x4265,	// (0x0000629b) input_focus_pane_cp51

0xc3bf,	// (0x0000e3f5) form2_midp_label_pane_t1_ParamLimits

0xc3bf,	// (0x0000e3f5) form2_midp_label_pane_t1

0xc3ff,	// (0x0000e435) form2_mdip_text_pane_t1_ParamLimits

0xc3ff,	// (0x0000e435) form2_mdip_text_pane_t1

0x42dd,	// (0x00006313) form2_midp_time_pane_t1

0x42f8,	// (0x0000632e) form2_midp_gauge_slider_pane_t1

0xc41b,	// (0x0000e451) form2_midp_gauge_slider_pane_t2

0xc42d,	// (0x0000e463) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaef,	// (0x00011b25) form2_midp_gauge_slider_pane_t

0x432e,	// (0x00006364) form2_midp_slider_pane

0x433a,	// (0x00006370) form2_midp_gauge_wait_pane_t1

0x4348,	// (0x0000637e) form2_midp_wait_pane_ParamLimits

0x4348,	// (0x0000637e) form2_midp_wait_pane

0xc43f,	// (0x0000e475) list_single_2graphic_pane_cp4_ParamLimits

0xc43f,	// (0x0000e475) list_single_2graphic_pane_cp4

0xb748,	// (0x0000d77e) list_single_midp_graphic_pane_cp_ParamLimits

0xb748,	// (0x0000d77e) list_single_midp_graphic_pane_cp

0xe81f,	// (0x00010855) list_highlight_pane_cp20

0x439b,	// (0x000063d1) list_single_2graphic_pane_g1_cp4

0x35a5,	// (0x000055db) list_single_2graphic_pane_g2_cp4

0x43a3,	// (0x000063d9) list_single_2graphic_pane_t1_cp4

0xe89b,	// (0x000108d1) list_highlight_pane_cp21

0x43b2,	// (0x000063e8) list_single_midp_graphic_pane_g4_cp

0x43c1,	// (0x000063f7) list_single_midp_graphic_pane_t1_cp

0xc454,	// (0x0000e48a) form2_mdip_string_pane_t1_ParamLimits

0xc454,	// (0x0000e48a) form2_mdip_string_pane_t1

0xe81f,	// (0x00010855) bg_wml_button_pane_cp2

0xe6a6,	// (0x000106dc) form2_midp_image_pane_g1

0xec3b,	// (0x00010c71) list_double_large_graphic_pane_g5_ParamLimits

0xec3b,	// (0x00010c71) list_double_large_graphic_pane_g5

0x0abe,	// (0x00002af4) midp_form_pane_ParamLimits

0xe89b,	// (0x000108d1) main_apps_wheel_pane_ParamLimits

0xaf29,	// (0x0000cf5f) popup_preview_window_ParamLimits

0xaf29,	// (0x0000cf5f) popup_preview_window

0xb1f6,	// (0x0000d22c) popup_touch_info_window_ParamLimits

0xb1f6,	// (0x0000d22c) popup_touch_info_window

0xb214,	// (0x0000d24a) popup_touch_menu_window_ParamLimits

0xb214,	// (0x0000d24a) popup_touch_menu_window

0xe69c,	// (0x000106d2) bg_popup_sub_pane_cp6

0x44e3,	// (0x00006519) list_touch_menu_pane

0xc4cc,	// (0x0000e502) list_single_touch_menu_pane_ParamLimits

0xc4cc,	// (0x0000e502) list_single_touch_menu_pane

0xc4e0,	// (0x0000e516) list_single_touch_menu_pane_t1

0xe89b,	// (0x000108d1) bg_popup_sub_pane_cp7_ParamLimits

0xe89b,	// (0x000108d1) bg_popup_sub_pane_cp7

0x450f,	// (0x00006545) heading_sub_pane

0x4517,	// (0x0000654d) list_touch_info_pane_ParamLimits

0x4517,	// (0x0000654d) list_touch_info_pane

0x4526,	// (0x0000655c) list_single_touch_info_pane_ParamLimits

0x4526,	// (0x0000655c) list_single_touch_info_pane

0x4538,	// (0x0000656e) list_single_touch_info_pane_t1

0x4546,	// (0x0000657c) list_single_touch_info_pane_t2

0x0001,

0xfafd,	// (0x00011b33) list_single_touch_info_pane_t

0x054b,	// (0x00002581) bg_popup_heading_pane_cp

0x4554,	// (0x0000658a) heading_sub_pane_t1

0x17aa,	// (0x000037e0) bg_popup_preview_window_pane_cp_ParamLimits

0x17aa,	// (0x000037e0) bg_popup_preview_window_pane_cp

0x450f,	// (0x00006545) heading_preview_pane

0x4517,	// (0x0000654d) list_preview_pane_ParamLimits

0x4517,	// (0x0000654d) list_preview_pane

0x4562,	// (0x00006598) popup_preview_window_g1

0x4526,	// (0x0000655c) list_single_preview_pane_ParamLimits

0x4526,	// (0x0000655c) list_single_preview_pane

0x456a,	// (0x000065a0) list_single_preview_pane_g1

0x4572,	// (0x000065a8) list_single_preview_pane_t1

0x4538,	// (0x0000656e) list_single_preview_pane_t2

0x0001,

0xfb02,	// (0x00011b38) list_single_preview_pane_t

0x4580,	// (0x000065b6) bg_popup_heading_pane_cp2_ParamLimits

0x4580,	// (0x000065b6) bg_popup_heading_pane_cp2

0x4596,	// (0x000065cc) heading_preview_pane_g1

0x459e,	// (0x000065d4) heading_preview_pane_t1_ParamLimits

0x459e,	// (0x000065d4) heading_preview_pane_t1

0xe908,	// (0x0001093e) soft_indicator_pane_t1_ParamLimits

0xebe3,	// (0x00010c19) scroll_pane_ParamLimits

0xf1e8,	// (0x0001121e) scroll_sc2_left_pane

0xf1f1,	// (0x00011227) scroll_sc2_right_pane

0xf210,	// (0x00011246) scroll_bg_pane_g1_ParamLimits

0xf225,	// (0x0001125b) scroll_bg_pane_g2_ParamLimits

0xf23d,	// (0x00011273) scroll_bg_pane_g3_ParamLimits

0xf6de,	// (0x00011714) scroll_bg_pane_g_ParamLimits

0xf210,	// (0x00011246) scroll_handle_pane_g1_ParamLimits

0xf252,	// (0x00011288) scroll_handle_pane_g2_ParamLimits

0xf23d,	// (0x00011273) scroll_handle_pane_g3_ParamLimits

0xf6e5,	// (0x0001171b) scroll_handle_pane_g_ParamLimits

0xaad0,	// (0x0000cb06) popup_choice_list_window_ParamLimits

0xaad0,	// (0x0000cb06) popup_choice_list_window

0x150a,	// (0x00003540) choice_list_pane

0x15de,	// (0x00003614) cell_toolbar_pane_t1

0x1606,	// (0x0000363c) toolbar_button_pane_ParamLimits

0x2a05,	// (0x00004a3b) ai_gene_pane_1_t2_ParamLimits

0x2a05,	// (0x00004a3b) ai_gene_pane_1_t2

0x0001,

0xf908,	// (0x0001193e) ai_gene_pane_1_t_ParamLimits

0xf908,	// (0x0001193e) ai_gene_pane_1_t

0x45bb,	// (0x000065f1) scroll_sc2_left_pane_g1

0x45bb,	// (0x000065f1) scroll_sc2_right_pane_g1

0x0abe,	// (0x00002af4) bg_popup_sub_pane_cp10

0x45c5,	// (0x000065fb) list_choice_list_pane

0xc4ee,	// (0x0000e524) list_single_choice_list_pane_ParamLimits

0xc4ee,	// (0x0000e524) list_single_choice_list_pane

0xeef8,	// (0x00010f2e) list_single_choice_list_pane_g1

0xa322,	// (0x0000c358) list_single_choice_list_pane_t1_ParamLimits

0xa322,	// (0x0000c358) list_single_choice_list_pane_t1

0x45f9,	// (0x0000662f) choice_list_pane_g1

0xc501,	// (0x0000e537) choice_list_pane_t1

0xe69c,	// (0x000106d2) input_focus_pane_cp11

0xf003,	// (0x00011039) title_pane_stacon_g2_ParamLimits

0xf003,	// (0x00011039) title_pane_stacon_g2

0x0002,

0xf6c4,	// (0x000116fa) title_pane_stacon_g_ParamLimits

0xf6c4,	// (0x000116fa) title_pane_stacon_g

0x054b,	// (0x00002581) cursor_press_pane

0xab77,	// (0x0000cbad) popup_fep_hwr_window_ParamLimits

0xab77,	// (0x0000cbad) popup_fep_hwr_window

0x0c0e,	// (0x00002c44) popup_fep_vkb_window_ParamLimits

0x0c0e,	// (0x00002c44) popup_fep_vkb_window

0xc50f,	// (0x0000e545) cursor_press_pane_g1

0x0002,

0xfb2b,	// (0x00011b61) fep_vkb_side_pane_g_ParamLimits

0x4650,	// (0x00006686) fep_hwr_candidate_pane_ParamLimits

0x4650,	// (0x00006686) fep_hwr_candidate_pane

0x467a,	// (0x000066b0) fep_hwr_side_pane_ParamLimits

0x467a,	// (0x000066b0) fep_hwr_side_pane

0x469a,	// (0x000066d0) fep_hwr_top_pane_ParamLimits

0x469a,	// (0x000066d0) fep_hwr_top_pane

0x46b2,	// (0x000066e8) fep_hwr_write_pane_ParamLimits

0x46b2,	// (0x000066e8) fep_hwr_write_pane

0xfb2b,	// (0x00011b61) fep_vkb_side_pane_g

0x46ec,	// (0x00006722) fep_hwr_top_pane_g1

0x46fe,	// (0x00006734) fep_hwr_top_pane_g2

0x4710,	// (0x00006746) fep_hwr_top_pane_g3

0x0002,

0xfb07,	// (0x00011b3d) fep_hwr_top_pane_g

0x4725,	// (0x0000675b) fep_hwr_top_text_pane

0xf31d,	// (0x00011353) fep_hwr_top_text_pane_g1

0x47fd,	// (0x00006833) fep_hwr_top_text_pane_t1

0x484d,	// (0x00006883) fep_hwr_candidate_pane_g1

0x4ab8,	// (0x00006aee) fep_vkb_keypad_pane_g3_ParamLimits

0x4ab8,	// (0x00006aee) fep_vkb_keypad_pane_g3

0x4ae0,	// (0x00006b16) fep_vkb_keypad_pane_g4_ParamLimits

0x4ae0,	// (0x00006b16) fep_vkb_keypad_pane_g4

0x4b4f,	// (0x00006b85) fep_vkb_bottom_pane_g2_ParamLimits

0x4b4f,	// (0x00006b85) fep_vkb_bottom_pane_g2

0x0001,

0xfb32,	// (0x00011b68) fep_vkb_bottom_pane_g_ParamLimits

0xfb32,	// (0x00011b68) fep_vkb_bottom_pane_g

0x45bb,	// (0x000065f1) cell_vkb_side_pane_g2

0x0001,

0xfb3c,	// (0x00011b72) cell_vkb_side_pane_g

0x4bda,	// (0x00006c10) cell_vkb_side_pane_t1

0x4be8,	// (0x00006c1e) cell_vkb_side_pane_t1_copy1

0x45bb,	// (0x000065f1) bg_fep_vkb_candidate_pane_g2

0x4d14,	// (0x00006d4a) cell_vkb_candidate_pane_ParamLimits

0x4881,	// (0x000068b7) aid_size_cell_vkb_ParamLimits

0x4881,	// (0x000068b7) aid_size_cell_vkb

0x4d14,	// (0x00006d4a) cell_vkb_candidate_pane

0x4d48,	// (0x00006d7e) bg_popup_fep_shadow_pane_g1

0xc576,	// (0x0000e5ac) fep_vkb_bottom_pane_ParamLimits

0xc576,	// (0x0000e5ac) fep_vkb_bottom_pane

0x4945,	// (0x0000697b) fep_vkb_candidate_pane_ParamLimits

0x4945,	// (0x0000697b) fep_vkb_candidate_pane

0xc59b,	// (0x0000e5d1) fep_vkb_keypad_pane_ParamLimits

0xc59b,	// (0x0000e5d1) fep_vkb_keypad_pane

0xc5d0,	// (0x0000e606) fep_vkb_side_pane_ParamLimits

0xc5d0,	// (0x0000e606) fep_vkb_side_pane

0xc60c,	// (0x0000e642) fep_vkb_top_pane_ParamLimits

0xc60c,	// (0x0000e642) fep_vkb_top_pane

0x4a11,	// (0x00006a47) fep_vkb_top_pane_g1_ParamLimits

0x4a11,	// (0x00006a47) fep_vkb_top_pane_g1

0x4a20,	// (0x00006a56) fep_vkb_top_pane_g2_ParamLimits

0x4a20,	// (0x00006a56) fep_vkb_top_pane_g2

0x4a2f,	// (0x00006a65) fep_vkb_top_pane_g3_ParamLimits

0x4a2f,	// (0x00006a65) fep_vkb_top_pane_g3

0x0003,

0xfb22,	// (0x00011b58) fep_vkb_top_pane_g_ParamLimits

0xfb22,	// (0x00011b58) fep_vkb_top_pane_g

0x4a4d,	// (0x00006a83) fep_vkb_top_text_pane_ParamLimits

0x4a4d,	// (0x00006a83) fep_vkb_top_text_pane

0xc641,	// (0x0000e677) fep_vkb_side_pane_g1_ParamLimits

0xc641,	// (0x0000e677) fep_vkb_side_pane_g1

0x4aa7,	// (0x00006add) grid_vkb_side_pane_ParamLimits

0x4aa7,	// (0x00006add) grid_vkb_side_pane

0x4d50,	// (0x00006d86) bg_popup_fep_shadow_pane_g2

0x4d59,	// (0x00006d8f) bg_popup_fep_shadow_pane_g3

0x4d61,	// (0x00006d97) bg_popup_fep_shadow_pane_g4

0x4d6a,	// (0x00006da0) bg_popup_fep_shadow_pane_g5

0x4d74,	// (0x00006daa) bg_popup_fep_shadow_pane_g6

0x4d7c,	// (0x00006db2) bg_popup_fep_shadow_pane_g7

0xed9b,	// (0x00010dd1) bg_popup_fep_shadow_pane_g8

0x4afe,	// (0x00006b34) grid_vkb_keypad_number_pane_ParamLimits

0x4afe,	// (0x00006b34) grid_vkb_keypad_number_pane

0x4b0e,	// (0x00006b44) grid_vkb_keypad_pane_ParamLimits

0x4b0e,	// (0x00006b44) grid_vkb_keypad_pane

0x4b34,	// (0x00006b6a) fep_vkb_bottom_pane_g1_ParamLimits

0x4b34,	// (0x00006b6a) fep_vkb_bottom_pane_g1

0x4b5d,	// (0x00006b93) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x4b5d,	// (0x00006b93) grid_vkb_keypad_bottom_left_pane

0x4b72,	// (0x00006ba8) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4b72,	// (0x00006ba8) grid_vkb_keypad_bottom_right_pane

0x4b87,	// (0x00006bbd) fep_vkb_top_text_pane_g1

0xc688,	// (0x0000e6be) fep_vkb_top_text_pane_t1

0xc69a,	// (0x0000e6d0) cell_vkb_side_pane_ParamLimits

0xc69a,	// (0x0000e6d0) cell_vkb_side_pane

0x45bb,	// (0x000065f1) cell_vkb_side_pane_g1

0x4bf6,	// (0x00006c2c) cell_vkb_keypad_pane_ParamLimits

0x4bf6,	// (0x00006c2c) cell_vkb_keypad_pane

0x4c6b,	// (0x00006ca1) cell_vkb_keypad_pane_g1

0x0008,

0xfb4f,	// (0x00011b85) bg_popup_fep_shadow_pane_g

0x45bb,	// (0x000065f1) cell_hwr_side_pane_g1

0x45bb,	// (0x000065f1) cell_hwr_side_pane_g2

0x4c75,	// (0x00006cab) cell_vkb_keypad_pane_t1

0xc6b0,	// (0x0000e6e6) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xc6b0,	// (0x0000e6e6) cell_vkb_keypad_bottom_left_pane

0xc6c5,	// (0x0000e6fb) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xc6c5,	// (0x0000e6fb) cell_vkb_keypad_bottom_right_pane

0x45bb,	// (0x000065f1) cell_vkb_keypad_bottom_left_pane_g1

0x45bb,	// (0x000065f1) cell_vkb_keypad_bottom_right_pane_g1

0x4cd9,	// (0x00006d0f) cell_vkb_keypad_number_pane_ParamLimits

0x4cd9,	// (0x00006d0f) cell_vkb_keypad_number_pane

0x4cf8,	// (0x00006d2e) cell_vkb_keypad_number_pane_g1

0x4d02,	// (0x00006d38) cell_vkb_keypad_number_pane_g2

0x4d0b,	// (0x00006d41) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb41,	// (0x00011b77) cell_vkb_keypad_number_pane_g

0x4c75,	// (0x00006cab) cell_vkb_keypad_number_pane_t1

0x4d2f,	// (0x00006d65) fep_vkb_candidate_pane_g1

0x0001,

0xfb3c,	// (0x00011b72) cell_hwr_side_pane_g

0x4d8e,	// (0x00006dc4) cell_hwr_side_pane_t1

0x4d9c,	// (0x00006dd2) cell_hwr_side_pane_t1_copy1

0x4a3f,	// (0x00006a75) cell_hwr_candidate_pane_g1

0x4dec,	// (0x00006e22) cell_hwr_candidate_pane_t1

0x45bb,	// (0x000065f1) cell_vkb_candidate_pane_g2

0x4e40,	// (0x00006e76) cell_vkb_candidate_pane_t1

0x4617,	// (0x0000664d) bg_popup_fep_shadow_pane_ParamLimits

0x4617,	// (0x0000664d) bg_popup_fep_shadow_pane

0x46cc,	// (0x00006702) bg_fep_hwr_top_pane_g4

0x473a,	// (0x00006770) bg_hwr_side_pane_g1_ParamLimits

0x473a,	// (0x00006770) bg_hwr_side_pane_g1

0xc52f,	// (0x0000e565) cell_hwr_side_pane_ParamLimits

0xc52f,	// (0x0000e565) cell_hwr_side_pane

0x47a8,	// (0x000067de) fep_hwr_write_pane_g1_ParamLimits

0x47a8,	// (0x000067de) fep_hwr_write_pane_g1

0x47b5,	// (0x000067eb) fep_hwr_write_pane_g2_ParamLimits

0x47b5,	// (0x000067eb) fep_hwr_write_pane_g2

0x47c2,	// (0x000067f8) fep_hwr_write_pane_g3_ParamLimits

0x47c2,	// (0x000067f8) fep_hwr_write_pane_g3

0xc54f,	// (0x0000e585) fep_hwr_write_pane_g4_ParamLimits

0xc54f,	// (0x0000e585) fep_hwr_write_pane_g4

0x0005,

0xfb0e,	// (0x00011b44) fep_hwr_write_pane_g_ParamLimits

0xfb0e,	// (0x00011b44) fep_hwr_write_pane_g

0x46cc,	// (0x00006702) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x46cc,	// (0x00006702) bg_fep_hwr_candidate_pane_g2

0x480b,	// (0x00006841) cell_hwr_candidate_pane_ParamLimits

0x480b,	// (0x00006841) cell_hwr_candidate_pane

0x484d,	// (0x00006883) fep_hwr_candidate_pane_g1_ParamLimits

0x48af,	// (0x000068e5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x48af,	// (0x000068e5) bg_popup_fep_shadow_pane_cp2

0x4a3f,	// (0x00006a75) fep_vkb_top_pane_g4_ParamLimits

0x4a3f,	// (0x00006a75) fep_vkb_top_pane_g4

0x4a85,	// (0x00006abb) fep_vkb_side_pane_g2_ParamLimits

0x4a85,	// (0x00006abb) fep_vkb_side_pane_g2

0xa022,	// (0x0000c058) list_setting_pane_t4_ParamLimits

0xa022,	// (0x0000c058) list_setting_pane_t4

0xa09c,	// (0x0000c0d2) list_setting_number_pane_t5_ParamLimits

0xa09c,	// (0x0000c0d2) list_setting_number_pane_t5

0xf373,	// (0x000113a9) list_double_heading_pane_cp2_ParamLimits

0xf373,	// (0x000113a9) list_double_heading_pane_cp2

0x4e4e,	// (0x00006e84) list_double_heading_pane_g1_cp2_ParamLimits

0x4e4e,	// (0x00006e84) list_double_heading_pane_g1_cp2

0x4e5a,	// (0x00006e90) list_double_heading_pane_g2_cp2_ParamLimits

0x4e5a,	// (0x00006e90) list_double_heading_pane_g2_cp2

0x4e6e,	// (0x00006ea4) list_double_heading_pane_t1_cp2_ParamLimits

0x4e6e,	// (0x00006ea4) list_double_heading_pane_t1_cp2

0x4e84,	// (0x00006eba) list_double_heading_pane_t2_cp2_ParamLimits

0x4e84,	// (0x00006eba) list_double_heading_pane_t2_cp2

0xe694,	// (0x000106ca) aid_value_unit2

0xe83f,	// (0x00010875) popup_preview_fixed_window

0xe9df,	// (0x00010a15) bg_popup_preview_window_pane_cp02

0x4e96,	// (0x00006ecc) list_preview_fixed_pane

0x4edc,	// (0x00006f12) list_empty_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_empty_pane_fp

0x4edc,	// (0x00006f12) list_single_cale_day_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_cale_day_pane_fp

0x4edc,	// (0x00006f12) list_single_graphic_heading_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_graphic_heading_pane_fp

0x4edc,	// (0x00006f12) list_single_graphic_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_graphic_pane_fp

0x4edc,	// (0x00006f12) list_single_heading_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_heading_pane_fp

0x4edc,	// (0x00006f12) list_single_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_pane_fp

0x4ef2,	// (0x00006f28) list_single_pane_fp_g1_ParamLimits

0x4ef2,	// (0x00006f28) list_single_pane_fp_g1

0x4efe,	// (0x00006f34) list_single_pane_fp_g2_ParamLimits

0x4efe,	// (0x00006f34) list_single_pane_fp_g2

0x4f0a,	// (0x00006f40) list_single_pane_fp_g3_ParamLimits

0x4f0a,	// (0x00006f40) list_single_pane_fp_g3

0x4f1e,	// (0x00006f54) list_single_pane_fp_g4_ParamLimits

0x4f1e,	// (0x00006f54) list_single_pane_fp_g4

0x0003,

0xfb70,	// (0x00011ba6) list_single_pane_fp_g_ParamLimits

0xfb70,	// (0x00011ba6) list_single_pane_fp_g

0x4f2a,	// (0x00006f60) list_single_pane_fp_t1_ParamLimits

0x4f2a,	// (0x00006f60) list_single_pane_fp_t1

0x4f41,	// (0x00006f77) list_single_graphic_pane_fp_g1_ParamLimits

0x4f41,	// (0x00006f77) list_single_graphic_pane_fp_g1

0x4ef2,	// (0x00006f28) list_single_graphic_pane_fp_g2_ParamLimits

0x4ef2,	// (0x00006f28) list_single_graphic_pane_fp_g2

0x4efe,	// (0x00006f34) list_single_graphic_pane_fp_g3_ParamLimits

0x4efe,	// (0x00006f34) list_single_graphic_pane_fp_g3

0x4f0a,	// (0x00006f40) list_single_graphic_pane_fp_g4_ParamLimits

0x4f0a,	// (0x00006f40) list_single_graphic_pane_fp_g4

0x4f1e,	// (0x00006f54) list_single_graphic_pane_fp_g5_ParamLimits

0x4f1e,	// (0x00006f54) list_single_graphic_pane_fp_g5

0x0004,

0xfb79,	// (0x00011baf) list_single_graphic_pane_fp_g_ParamLimits

0xfb79,	// (0x00011baf) list_single_graphic_pane_fp_g

0x4f4d,	// (0x00006f83) list_single_graphic_pane_fp_t1_ParamLimits

0x4f4d,	// (0x00006f83) list_single_graphic_pane_fp_t1

0x4f41,	// (0x00006f77) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4f41,	// (0x00006f77) list_single_graphic_heading_pane_fp_g1

0x4ef2,	// (0x00006f28) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4ef2,	// (0x00006f28) list_single_graphic_heading_pane_fp_g2

0x4efe,	// (0x00006f34) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4efe,	// (0x00006f34) list_single_graphic_heading_pane_fp_g3

0x4f0a,	// (0x00006f40) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4f0a,	// (0x00006f40) list_single_graphic_heading_pane_fp_g4

0x4f1e,	// (0x00006f54) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4f1e,	// (0x00006f54) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb79,	// (0x00011baf) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb79,	// (0x00011baf) list_single_graphic_heading_pane_fp_g

0x4f63,	// (0x00006f99) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4f63,	// (0x00006f99) list_single_graphic_heading_pane_fp_t1

0x4f79,	// (0x00006faf) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4f79,	// (0x00006faf) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb84,	// (0x00011bba) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb84,	// (0x00011bba) list_single_graphic_heading_pane_fp_t

0x4f8b,	// (0x00006fc1) list_single_cale_day_pane_fp_g1_ParamLimits

0x4f8b,	// (0x00006fc1) list_single_cale_day_pane_fp_g1

0x4fc3,	// (0x00006ff9) list_single_cale_day_pane_fp_g2_ParamLimits

0x4fc3,	// (0x00006ff9) list_single_cale_day_pane_fp_g2

0x4fcf,	// (0x00007005) list_single_cale_day_pane_fp_g3_ParamLimits

0x4fcf,	// (0x00007005) list_single_cale_day_pane_fp_g3

0x4ff7,	// (0x0000702d) list_single_cale_day_pane_fp_g4_ParamLimits

0x4ff7,	// (0x0000702d) list_single_cale_day_pane_fp_g4

0x501b,	// (0x00007051) list_single_cale_day_pane_fp_g5_ParamLimits

0x501b,	// (0x00007051) list_single_cale_day_pane_fp_g5

0x0004,

0xfb89,	// (0x00011bbf) list_single_cale_day_pane_fp_g_ParamLimits

0xfb89,	// (0x00011bbf) list_single_cale_day_pane_fp_g

0x503f,	// (0x00007075) list_single_cale_day_pane_fp_t1_ParamLimits

0x503f,	// (0x00007075) list_single_cale_day_pane_fp_t1

0x5065,	// (0x0000709b) list_single_cale_day_pane_fp_t2_ParamLimits

0x5065,	// (0x0000709b) list_single_cale_day_pane_fp_t2

0x507e,	// (0x000070b4) list_single_cale_day_pane_fp_t3_ParamLimits

0x507e,	// (0x000070b4) list_single_cale_day_pane_fp_t3

0x0002,

0xfb94,	// (0x00011bca) list_single_cale_day_pane_fp_t_ParamLimits

0xfb94,	// (0x00011bca) list_single_cale_day_pane_fp_t

0x4ef2,	// (0x00006f28) list_empty_pane_fp_g1_ParamLimits

0x4ef2,	// (0x00006f28) list_empty_pane_fp_g1

0x5097,	// (0x000070cd) list_empty_pane_fp_t1

0x50a5,	// (0x000070db) list_empty_pane_fp_t2

0x0001,

0xfb9b,	// (0x00011bd1) list_empty_pane_fp_t

0x4ef2,	// (0x00006f28) list_single_heading_pane_fp_g1_ParamLimits

0x4ef2,	// (0x00006f28) list_single_heading_pane_fp_g1

0x4efe,	// (0x00006f34) list_single_heading_pane_fp_g2_ParamLimits

0x4efe,	// (0x00006f34) list_single_heading_pane_fp_g2

0x4f0a,	// (0x00006f40) list_single_heading_pane_fp_g3_ParamLimits

0x4f0a,	// (0x00006f40) list_single_heading_pane_fp_g3

0x0002,

0xfba0,	// (0x00011bd6) list_single_heading_pane_fp_g_ParamLimits

0xfba0,	// (0x00011bd6) list_single_heading_pane_fp_g

0x50b3,	// (0x000070e9) list_single_heading_pane_fp_t1_ParamLimits

0x50b3,	// (0x000070e9) list_single_heading_pane_fp_t1

0x50c5,	// (0x000070fb) list_single_heading_pane_fp_t2_ParamLimits

0x50c5,	// (0x000070fb) list_single_heading_pane_fp_t2

0x0001,

0xfba7,	// (0x00011bdd) list_single_heading_pane_fp_t_ParamLimits

0xfba7,	// (0x00011bdd) list_single_heading_pane_fp_t

0xa36e,	// (0x0000c3a4) aid_size_cell_fast

0xe9c2,	// (0x000109f8) soft_indicator_pane_cp1_t1

0xa377,	// (0x0000c3ad) cell_app_pane_cp2_ParamLimits

0xa377,	// (0x0000c3ad) cell_app_pane_cp2

0x4639,	// (0x0000666f) fep_hwr_candidate_drop_down_list_pane

0x4867,	// (0x0000689d) fep_hwr_candidate_pane_g3_ParamLimits

0x4867,	// (0x0000689d) fep_hwr_candidate_pane_g3

0x4874,	// (0x000068aa) fep_hwr_candidate_pane_g4_ParamLimits

0x4874,	// (0x000068aa) fep_hwr_candidate_pane_g4

0x0002,

0xfb1b,	// (0x00011b51) fep_hwr_candidate_pane_g_ParamLimits

0xfb1b,	// (0x00011b51) fep_hwr_candidate_pane_g

0x4934,	// (0x0000696a) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x4934,	// (0x0000696a) fep_vkb_candidate_drop_down_list_pane

0x4d37,	// (0x00006d6d) fep_vkb_candidate_pane_g3

0x4d3f,	// (0x00006d75) fep_vkb_candidate_pane_g4

0x0002,

0xfb48,	// (0x00011b7e) fep_vkb_candidate_pane_g

0x4a3f,	// (0x00006a75) cell_hwr_candidate_pane_g1_ParamLimits

0x4daa,	// (0x00006de0) cell_hwr_candidate_pane_g3_ParamLimits

0x4daa,	// (0x00006de0) cell_hwr_candidate_pane_g3

0x4dcb,	// (0x00006e01) cell_hwr_candidate_pane_g4_ParamLimits

0x4dcb,	// (0x00006e01) cell_hwr_candidate_pane_g4

0x0002,

0xfb62,	// (0x00011b98) cell_hwr_candidate_pane_g_ParamLimits

0xfb62,	// (0x00011b98) cell_hwr_candidate_pane_g

0x4e0a,	// (0x00006e40) cell_vkb_candidate_pane_g3_ParamLimits

0x4e0a,	// (0x00006e40) cell_vkb_candidate_pane_g3

0x4e25,	// (0x00006e5b) cell_vkb_candidate_pane_g4_ParamLimits

0x4e25,	// (0x00006e5b) cell_vkb_candidate_pane_g4

0xc6e0,	// (0x0000e716) cell_app_pane_cp2_g1_ParamLimits

0xc6e0,	// (0x0000e716) cell_app_pane_cp2_g1

0x50f9,	// (0x0000712f) cell_app_pane_cp2_g2_ParamLimits

0x50f9,	// (0x0000712f) cell_app_pane_cp2_g2

0x0001,

0xfbac,	// (0x00011be2) cell_app_pane_cp2_g_ParamLimits

0xfbac,	// (0x00011be2) cell_app_pane_cp2_g

0x5105,	// (0x0000713b) cell_app_pane_cp2_t1_ParamLimits

0x5105,	// (0x0000713b) cell_app_pane_cp2_t1

0xece9,	// (0x00010d1f) grid_highlight_pane_cp1_ParamLimits

0xece9,	// (0x00010d1f) grid_highlight_pane_cp1

0x5117,	// (0x0000714d) cell_hwr_candidate_pane_cp1_ParamLimits

0x5117,	// (0x0000714d) cell_hwr_candidate_pane_cp1

0x4a3f,	// (0x00006a75) fep_hwr_candidate_drop_down_list_pane_g1

0x5136,	// (0x0000716c) fep_hwr_candidate_drop_down_list_pane_g2

0x5143,	// (0x00007179) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00011be7) fep_hwr_candidate_drop_down_list_pane_g

0x5150,	// (0x00007186) fep_hwr_candidate_drop_down_list_scroll_pane

0x5159,	// (0x0000718f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x5159,	// (0x0000718f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x5166,	// (0x0000719c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x5166,	// (0x0000719c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x5173,	// (0x000071a9) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5173,	// (0x000071a9) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x4e0a,	// (0x00006e40) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4e0a,	// (0x00006e40) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4e25,	// (0x00006e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4e25,	// (0x00006e5b) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x5180,	// (0x000071b6) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5180,	// (0x000071b6) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x519b,	// (0x000071d1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x519b,	// (0x000071d1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x51b6,	// (0x000071ec) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x51b6,	// (0x000071ec) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbb8,	// (0x00011bee) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbb8,	// (0x00011bee) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x51d1,	// (0x00007207) cell_vkb_candidate_pane_cp1_ParamLimits

0x51d1,	// (0x00007207) cell_vkb_candidate_pane_cp1

0x4a3f,	// (0x00006a75) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) fep_vkb_candidate_drop_down_list_pane_g1

0x5136,	// (0x0000716c) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x5136,	// (0x0000716c) fep_vkb_candidate_drop_down_list_pane_g2

0x5143,	// (0x00007179) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x5143,	// (0x00007179) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbb1,	// (0x00011be7) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbb1,	// (0x00011be7) fep_vkb_candidate_drop_down_list_pane_g

0x51f1,	// (0x00007227) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x51f1,	// (0x00007227) fep_vkb_candidate_drop_down_list_scroll_pane

0x51fe,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x51fe,	// (0x00007234) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x520b,	// (0x00007241) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x520b,	// (0x00007241) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x5217,	// (0x0000724d) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x5217,	// (0x0000724d) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4daa,	// (0x00006de0) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4daa,	// (0x00006de0) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4dcb,	// (0x00006e01) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4dcb,	// (0x00006e01) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x5223,	// (0x00007259) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x5223,	// (0x00007259) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x5244,	// (0x0000727a) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x5244,	// (0x0000727a) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x5265,	// (0x0000729b) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x5265,	// (0x0000729b) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc9,	// (0x00011bff) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc9,	// (0x00011bff) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x96ba,	// (0x0000b6f0) title_pane_g1_ParamLimits

0x96cd,	// (0x0000b703) title_pane_g2_ParamLimits

0xf54e,	// (0x00011584) title_pane_g_ParamLimits

0xf30d,	// (0x00011343) aid_call2_pane

0xf315,	// (0x0001134b) aid_call_pane

0xf31d,	// (0x00011353) popup_clock_analogue_window_g1

0xf31d,	// (0x00011353) popup_clock_analogue_window_g2

0xf325,	// (0x0001135b) popup_clock_analogue_window_g3

0xf32e,	// (0x00011364) popup_clock_analogue_window_g4

0xe6a6,	// (0x000106dc) popup_clock_analogue_window_g5

0x0004,

0xf6f3,	// (0x00011729) popup_clock_analogue_window_g

0xf336,	// (0x0001136c) popup_clock_analogue_window_t1

0xf394,	// (0x000113ca) clock_digital_number_pane_ParamLimits

0xf394,	// (0x000113ca) clock_digital_number_pane

0xf3a0,	// (0x000113d6) clock_digital_number_pane_cp02_ParamLimits

0xf3a0,	// (0x000113d6) clock_digital_number_pane_cp02

0xf3ac,	// (0x000113e2) clock_digital_number_pane_cp03_ParamLimits

0xf3ac,	// (0x000113e2) clock_digital_number_pane_cp03

0xf3b8,	// (0x000113ee) clock_digital_number_pane_cp04_ParamLimits

0xf3b8,	// (0x000113ee) clock_digital_number_pane_cp04

0xf3c4,	// (0x000113fa) clock_digital_separator_pane_ParamLimits

0xf3c4,	// (0x000113fa) clock_digital_separator_pane

0xf3d0,	// (0x00011406) popup_clock_digital_window_t1_ParamLimits

0xf3d0,	// (0x00011406) popup_clock_digital_window_t1

0xe6a6,	// (0x000106dc) clock_digital_number_pane_g1

0xe6a6,	// (0x000106dc) clock_digital_number_pane_g2

0x0001,

0xf6fe,	// (0x00011734) clock_digital_number_pane_g

0xe6a6,	// (0x000106dc) clock_digital_separator_pane_g1

0xe6a6,	// (0x000106dc) clock_digital_separator_pane_g2

0x0001,

0xf6fe,	// (0x00011734) clock_digital_separator_pane_g

0xb24b,	// (0x0000d281) aid_fill_nsta_ParamLimits

0xb381,	// (0x0000d3b7) indicator_nsta_pane_ParamLimits

0x1348,	// (0x0000337e) popup_clock_analogue_window

0x1348,	// (0x0000337e) popup_clock_digital_window

0xeeea,	// (0x00010f20) grid_indicator_nsta_pane_ParamLimits

0x3f1a,	// (0x00005f50) clock_nsta_pane_t2

0x0001,

0xfa9b,	// (0x00011ad1) clock_nsta_pane_t

0xf1aa,	// (0x000111e0) aid_size_max_handle

0xa455,	// (0x0000c48b) aid_size_min_handle

0x054b,	// (0x00002581) editor_scroll_pane

0x5280,	// (0x000072b6) ex_editor_pane

0xee42,	// (0x00010e78) scroll_pane_cp13

0xec0f,	// (0x00010c45) scroll_pane_cp14

0xf36b,	// (0x000113a1) scroll_pane_cp36

0xa51f,	// (0x0000c555) list_single_graphic_hl_pane_cp2_ParamLimits

0xa51f,	// (0x0000c555) list_single_graphic_hl_pane_cp2

0xc03f,	// (0x0000e075) list_single_graphic_hl_pane_ParamLimits

0xc03f,	// (0x0000e075) list_single_graphic_hl_pane

0xc6fe,	// (0x0000e734) aid_size_min_hl_cp1

0x5291,	// (0x000072c7) list_highlight_pane_cp34_ParamLimits

0x5291,	// (0x000072c7) list_highlight_pane_cp34

0x52a2,	// (0x000072d8) list_single_graphic_hl_pane_g1_ParamLimits

0x52a2,	// (0x000072d8) list_single_graphic_hl_pane_g1

0xc707,	// (0x0000e73d) list_single_graphic_hl_pane_g2_ParamLimits

0xc707,	// (0x0000e73d) list_single_graphic_hl_pane_g2

0xc707,	// (0x0000e73d) list_single_graphic_hl_pane_g3_ParamLimits

0xc707,	// (0x0000e73d) list_single_graphic_hl_pane_g3

0x0484,	// (0x000024ba) list_single_graphic_hl_pane_g4_ParamLimits

0x0484,	// (0x000024ba) list_single_graphic_hl_pane_g4

0x5321,	// (0x00007357) list_single_graphic_hl_pane_g5_ParamLimits

0x5321,	// (0x00007357) list_single_graphic_hl_pane_g5

0x0004,

0xfbda,	// (0x00011c10) list_single_graphic_hl_pane_g_ParamLimits

0xfbda,	// (0x00011c10) list_single_graphic_hl_pane_g

0x25ee,	// (0x00004624) list_single_graphic_hl_pane_t1_ParamLimits

0x25ee,	// (0x00004624) list_single_graphic_hl_pane_t1

0x52f1,	// (0x00007327) aid_size_min_hl_cp2

0x52fa,	// (0x00007330) list_highlight_pane_cp34_cp2_ParamLimits

0x52fa,	// (0x00007330) list_highlight_pane_cp34_cp2

0x52a2,	// (0x000072d8) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x52a2,	// (0x000072d8) list_single_graphic_hl_pane_g1_cp2

0x5307,	// (0x0000733d) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x5307,	// (0x0000733d) list_single_graphic_hl_pane_g2_cp2

0xc713,	// (0x0000e749) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xc713,	// (0x0000e749) list_single_graphic_hl_pane_g3_cp2

0x0484,	// (0x000024ba) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0484,	// (0x000024ba) list_single_graphic_hl_pane_g4_cp2

0x5321,	// (0x00007357) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x5321,	// (0x00007357) list_single_graphic_hl_pane_g5_cp2

0xa942,	// (0x0000c978) control_pane_g4_ParamLimits

0xa942,	// (0x0000c978) control_pane_g4

0x0abe,	// (0x00002af4) bg_popup_sub_pane_cp10_ParamLimits

0x45c5,	// (0x000065fb) list_choice_list_pane_ParamLimits

0x45d4,	// (0x0000660a) scroll_pane_cp23

0xe9df,	// (0x00010a15) bg_popup_preview_window_pane_cp02_ParamLimits

0x4e96,	// (0x00006ecc) list_preview_fixed_pane_ParamLimits

0x4eac,	// (0x00006ee2) list_preview_fixed_pane_cp_ParamLimits

0x4eac,	// (0x00006ee2) list_preview_fixed_pane_cp

0x4eb8,	// (0x00006eee) popup_preview_fixed_window_g1_ParamLimits

0x4eb8,	// (0x00006eee) popup_preview_fixed_window_g1

0x4ec4,	// (0x00006efa) popup_preview_fixed_window_g2_ParamLimits

0x4ec4,	// (0x00006efa) popup_preview_fixed_window_g2

0x0002,

0xfb69,	// (0x00011b9f) popup_preview_fixed_window_g_ParamLimits

0xfb69,	// (0x00011b9f) popup_preview_fixed_window_g

0xf0e7,	// (0x0001111d) aid_navi_side_left_pane_ParamLimits

0xf0fc,	// (0x00011132) aid_navi_side_right_pane_ParamLimits

0xf114,	// (0x0001114a) navi_icon_pane_stacon_ParamLimits

0xf128,	// (0x0001115e) navi_navi_pane_stacon_ParamLimits

0xf114,	// (0x0001114a) navi_text_pane_stacon_ParamLimits

0xe69c,	// (0x000106d2) main_text_info_pane

0x534b,	// (0x00007381) listscroll_text_info_pane

0x5353,	// (0x00007389) list_text_info_pane_ParamLimits

0x5353,	// (0x00007389) list_text_info_pane

0x5362,	// (0x00007398) scroll_pane_cp24_ParamLimits

0x5362,	// (0x00007398) scroll_pane_cp24

0xc721,	// (0x0000e757) list_text_info_pane_t1_ParamLimits

0xc721,	// (0x0000e757) list_text_info_pane_t1

0xaaec,	// (0x0000cb22) popup_fast_swap2_window_ParamLimits

0xaaec,	// (0x0000cb22) popup_fast_swap2_window

0x53b4,	// (0x000073ea) aid_size_cell_fast2

0xe69c,	// (0x000106d2) bg_popup_window_pane_cp17

0x1c5e,	// (0x00003c94) heading_pane_cp2

0xeb13,	// (0x00010b49) listscroll_fast2_pane

0x53be,	// (0x000073f4) grid_fast2_pane

0x53c8,	// (0x000073fe) listscroll_fast2_pane_g1

0x53d0,	// (0x00007406) listscroll_fast2_pane_g2

0x0001,

0xfbe5,	// (0x00011c1b) listscroll_fast2_pane_g

0xee42,	// (0x00010e78) scroll_pane_cp26

0x53da,	// (0x00007410) cell_fast2_pane_ParamLimits

0x53da,	// (0x00007410) cell_fast2_pane

0x53ef,	// (0x00007425) cell_fast2_pane_g1

0x53f8,	// (0x0000742e) cell_fast2_pane_g2

0x5401,	// (0x00007437) cell_fast2_pane_g3

0x0002,

0xfbea,	// (0x00011c20) cell_fast2_pane_g

0xeb46,	// (0x00010b7c) grid_highlight_pane_cp9

0xeb5b,	// (0x00010b91) main_eswt_pane_ParamLimits

0xeb5b,	// (0x00010b91) main_eswt_pane

0x5377,	// (0x000073ad) list_single_text_info_pane

0x5409,	// (0x0000743f) eswt_ctrl_button_pane

0x5409,	// (0x0000743f) eswt_ctrl_canvas_pane

0xc73d,	// (0x0000e773) eswt_ctrl_combo_pane

0x5409,	// (0x0000743f) eswt_ctrl_default_pane

0x5409,	// (0x0000743f) eswt_ctrl_label_pane

0x5419,	// (0x0000744f) eswt_ctrl_wait_pane

0xc745,	// (0x0000e77b) eswt_shell_pane

0xe69c,	// (0x000106d2) listscroll_eswt_app_pane

0x5441,	// (0x00007477) popup_eswt_tasktip_window_ParamLimits

0x5441,	// (0x00007477) popup_eswt_tasktip_window

0x17aa,	// (0x000037e0) bg_popup_window_pane_cp18

0x5452,	// (0x00007488) eswt_control_pane_g1_ParamLimits

0x5452,	// (0x00007488) eswt_control_pane_g1

0x545f,	// (0x00007495) eswt_control_pane_g2_ParamLimits

0x545f,	// (0x00007495) eswt_control_pane_g2

0x546c,	// (0x000074a2) eswt_control_pane_g3_ParamLimits

0x546c,	// (0x000074a2) eswt_control_pane_g3

0x5479,	// (0x000074af) eswt_control_pane_g4_ParamLimits

0x5479,	// (0x000074af) eswt_control_pane_g4

0x0003,

0xfbf1,	// (0x00011c27) eswt_control_pane_g_ParamLimits

0xfbf1,	// (0x00011c27) eswt_control_pane_g

0xece9,	// (0x00010d1f) bg_button_pane_ParamLimits

0xece9,	// (0x00010d1f) bg_button_pane

0xeb5b,	// (0x00010b91) common_borders_pane_copy2_ParamLimits

0xeb5b,	// (0x00010b91) common_borders_pane_copy2

0x5486,	// (0x000074bc) control_button_pane_g1_ParamLimits

0x5486,	// (0x000074bc) control_button_pane_g1

0x5492,	// (0x000074c8) control_button_pane_g2_ParamLimits

0x5492,	// (0x000074c8) control_button_pane_g2

0x549e,	// (0x000074d4) control_button_pane_g3_ParamLimits

0x549e,	// (0x000074d4) control_button_pane_g3

0x0002,

0xfbfa,	// (0x00011c30) control_button_pane_g_ParamLimits

0xfbfa,	// (0x00011c30) control_button_pane_g

0x54b2,	// (0x000074e8) control_button_pane_t1

0x54c0,	// (0x000074f6) control_button_pane_t2

0x0001,

0xfc01,	// (0x00011c37) control_button_pane_t

0x1612,	// (0x00003648) bg_button_pane_g1

0x161a,	// (0x00003650) bg_button_pane_g2

0x1622,	// (0x00003658) bg_button_pane_g3

0x162a,	// (0x00003660) bg_button_pane_g4

0x1632,	// (0x00003668) bg_button_pane_g5

0x163a,	// (0x00003670) bg_button_pane_g6

0x1642,	// (0x00003678) bg_button_pane_g7

0x164a,	// (0x00003680) bg_button_pane_g8

0x1652,	// (0x00003688) bg_button_pane_g9

0x0008,

0xf85c,	// (0x00011892) bg_button_pane_g

0x4580,	// (0x000065b6) common_borders_pane_ParamLimits

0x4580,	// (0x000065b6) common_borders_pane

0x5452,	// (0x00007488) eswt_control_pane_g1_copy1_ParamLimits

0x5452,	// (0x00007488) eswt_control_pane_g1_copy1

0x545f,	// (0x00007495) eswt_control_pane_g2_copy1_ParamLimits

0x545f,	// (0x00007495) eswt_control_pane_g2_copy1

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy1_ParamLimits

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy1

0x5479,	// (0x000074af) eswt_control_pane_g4_copy1_ParamLimits

0x5479,	// (0x000074af) eswt_control_pane_g4_copy1

0x45bb,	// (0x000065f1) bg_eswt_ctrl_canvas_pane_g1

0x4580,	// (0x000065b6) common_borders_pane_cp2_ParamLimits

0x4580,	// (0x000065b6) common_borders_pane_cp2

0x4580,	// (0x000065b6) common_borders_pane_cp3_ParamLimits

0x4580,	// (0x000065b6) common_borders_pane_cp3

0x54ce,	// (0x00007504) separator_horizontal_pane

0x54d6,	// (0x0000750c) separator_vertical_pane

0x5452,	// (0x00007488) eswt_control_pane_g1_copy2_ParamLimits

0x5452,	// (0x00007488) eswt_control_pane_g1_copy2

0x545f,	// (0x00007495) eswt_control_pane_g2_copy2_ParamLimits

0x545f,	// (0x00007495) eswt_control_pane_g2_copy2

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy2_ParamLimits

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy2

0x5479,	// (0x000074af) eswt_control_pane_g4_copy2_ParamLimits

0x5479,	// (0x000074af) eswt_control_pane_g4_copy2

0xe69c,	// (0x000106d2) common_borders_pane_cp4

0x54df,	// (0x00007515) separator_horizontal_pane_g1

0x54e8,	// (0x0000751e) separator_horizontal_pane_g2

0x54f1,	// (0x00007527) separator_horizontal_pane_g3

0x0002,

0xfc06,	// (0x00011c3c) separator_horizontal_pane_g

0x5452,	// (0x00007488) eswt_control_pane_g1_copy3_ParamLimits

0x5452,	// (0x00007488) eswt_control_pane_g1_copy3

0x545f,	// (0x00007495) eswt_control_pane_g2_copy3_ParamLimits

0x545f,	// (0x00007495) eswt_control_pane_g2_copy3

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy3_ParamLimits

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy3

0x5479,	// (0x000074af) eswt_control_pane_g4_copy3_ParamLimits

0x5479,	// (0x000074af) eswt_control_pane_g4_copy3

0xe69c,	// (0x000106d2) common_borders_pane_cp5

0x54fa,	// (0x00007530) separator_vertical_pane_g1

0x5503,	// (0x00007539) separator_vertical_pane_g2

0x550c,	// (0x00007542) separator_vertical_pane_g3

0x0002,

0xfc0d,	// (0x00011c43) separator_vertical_pane_g

0x5452,	// (0x00007488) eswt_control_pane_g1_copy4_ParamLimits

0x5452,	// (0x00007488) eswt_control_pane_g1_copy4

0x545f,	// (0x00007495) eswt_control_pane_g2_copy4_ParamLimits

0x545f,	// (0x00007495) eswt_control_pane_g2_copy4

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy4_ParamLimits

0x546c,	// (0x000074a2) eswt_control_pane_g3_copy4

0x5479,	// (0x000074af) eswt_control_pane_g4_copy4_ParamLimits

0x5479,	// (0x000074af) eswt_control_pane_g4_copy4

0xc765,	// (0x0000e79b) eswt_ctrl_combo_button_pane

0xc76d,	// (0x0000e7a3) eswt_ctrl_input_pane

0xc775,	// (0x0000e7ab) popup_choice_list_window_cp70

0xc77d,	// (0x0000e7b3) eswt_ctrl_input_pane_t1

0xe69c,	// (0x000106d2) input_focus_pane_cp70

0x4580,	// (0x000065b6) bg_button_pane_cp70_ParamLimits

0x4580,	// (0x000065b6) bg_button_pane_cp70

0xc78b,	// (0x0000e7c1) eswt_ctrl_combo_button_pane_g1

0x5543,	// (0x00007579) wait_bar_pane_cp70

0x17aa,	// (0x000037e0) bg_popup_window_pane_cp70_ParamLimits

0x17aa,	// (0x000037e0) bg_popup_window_pane_cp70

0x554b,	// (0x00007581) popup_eswt_tasktip_window_t1

0x5561,	// (0x00007597) wait_bar_pane_cp71_ParamLimits

0x5561,	// (0x00007597) wait_bar_pane_cp71

0x556d,	// (0x000075a3) grid_eswt_app_pane

0xf1f1,	// (0x00011227) scroll_pane_cp70

0xc793,	// (0x0000e7c9) cell_eswt_app_pane_ParamLimits

0xc793,	// (0x0000e7c9) cell_eswt_app_pane

0xc7bd,	// (0x0000e7f3) cell_eswt_app_pane_g1_ParamLimits

0xc7bd,	// (0x0000e7f3) cell_eswt_app_pane_g1

0xc7ec,	// (0x0000e822) cell_eswt_app_pane_g2_ParamLimits

0xc7ec,	// (0x0000e822) cell_eswt_app_pane_g2

0x0001,

0xfc14,	// (0x00011c4a) cell_eswt_app_pane_g_ParamLimits

0xfc14,	// (0x00011c4a) cell_eswt_app_pane_g

0xc810,	// (0x0000e846) cell_eswt_app_pane_t1_ParamLimits

0xc810,	// (0x0000e846) cell_eswt_app_pane_t1

0x562b,	// (0x00007661) grid_highlight_pane_cp70_ParamLimits

0x562b,	// (0x00007661) grid_highlight_pane_cp70

0x0420,	// (0x00002456) set_content_pane_g1

0xa8d4,	// (0x0000c90a) status_small_volume_pane

0xc842,	// (0x0000e878) status_small_volume_pane_g1

0xc84a,	// (0x0000e880) volume_small2_pane

0xc853,	// (0x0000e889) volume_small2_pane_g1

0xc85c,	// (0x0000e892) volume_small2_pane_g2

0xc865,	// (0x0000e89b) volume_small2_pane_g3

0xc86e,	// (0x0000e8a4) volume_small2_pane_g4

0xc877,	// (0x0000e8ad) volume_small2_pane_g5

0xc880,	// (0x0000e8b6) volume_small2_pane_g6

0xc889,	// (0x0000e8bf) volume_small2_pane_g7

0xc892,	// (0x0000e8c8) volume_small2_pane_g8

0xc89b,	// (0x0000e8d1) volume_small2_pane_g9

0xc8a4,	// (0x0000e8da) volume_small2_pane_g10

0x0009,

0xfc19,	// (0x00011c4f) volume_small2_pane_g

0x4b87,	// (0x00006bbd) fep_vkb_top_text_pane_g1_ParamLimits

0xc688,	// (0x0000e6be) fep_vkb_top_text_pane_t1_ParamLimits

0x4ed0,	// (0x00006f06) popup_preview_fixed_window_g3_ParamLimits

0x4ed0,	// (0x00006f06) popup_preview_fixed_window_g3

0xb189,	// (0x0000d1bf) popup_toolbar_trans_pane

0xbe97,	// (0x0000decd) aid_height_set_list_ParamLimits

0x2e0d,	// (0x00004e43) aid_size_parent_ParamLimits

0x0abe,	// (0x00002af4) list_highlight_pane_cp2_ParamLimits

0x0420,	// (0x00002456) set_content_pane_g1_ParamLimits

0xc051,	// (0x0000e087) list_single_image_pane_ParamLimits

0xc051,	// (0x0000e087) list_single_image_pane

0xc8ad,	// (0x0000e8e3) aid_size_cell_image_ParamLimits

0xc8ad,	// (0x0000e8e3) aid_size_cell_image

0xc8ba,	// (0x0000e8f0) grid_single_image_pane_ParamLimits

0xc8ba,	// (0x0000e8f0) grid_single_image_pane

0x4efe,	// (0x00006f34) list_single_image_pane_g1_ParamLimits

0x4efe,	// (0x00006f34) list_single_image_pane_g1

0x4f0a,	// (0x00006f40) list_single_image_pane_g2_ParamLimits

0x4f0a,	// (0x00006f40) list_single_image_pane_g2

0x0001,

0xfc2e,	// (0x00011c64) list_single_image_pane_g_ParamLimits

0xfc2e,	// (0x00011c64) list_single_image_pane_g

0x56bd,	// (0x000076f3) list_single_image_pane_t1_ParamLimits

0x56bd,	// (0x000076f3) list_single_image_pane_t1

0xc8c6,	// (0x0000e8fc) cell_image_list_pane_ParamLimits

0xc8c6,	// (0x0000e8fc) cell_image_list_pane

0xc8da,	// (0x0000e910) cell_image_list_pane_g1

0xc8e3,	// (0x0000e919) cell_image_list_pane_g2

0x0001,

0xfc33,	// (0x00011c69) cell_image_list_pane_g

0xc8ec,	// (0x0000e922) aid_size_cell_tb_trans_pane

0xece9,	// (0x00010d1f) bg_tb_trans_pane

0xc8fe,	// (0x0000e934) grid_tb_trans_pane

0x1612,	// (0x00003648) bg_tb_trans_pane_g1

0x161a,	// (0x00003650) bg_tb_trans_pane_g2

0x1622,	// (0x00003658) bg_tb_trans_pane_g3

0x162a,	// (0x00003660) bg_tb_trans_pane_g4

0x1632,	// (0x00003668) bg_tb_trans_pane_g5

0x164a,	// (0x00003680) bg_tb_trans_pane_g6

0x1652,	// (0x00003688) bg_tb_trans_pane_g7

0x163a,	// (0x00003670) bg_tb_trans_pane_g8

0x1642,	// (0x00003678) bg_tb_trans_pane_g9

0x0008,

0xfc38,	// (0x00011c6e) bg_tb_trans_pane_g

0xc912,	// (0x0000e948) cell_toolbar_trans_pane_ParamLimits

0xc912,	// (0x0000e948) cell_toolbar_trans_pane

0x45bb,	// (0x000065f1) cell_toolbar_trans_pane_g1

0xc352,	// (0x0000e388) list_form2_midp_pane_t1

0xc360,	// (0x0000e396) list_form2_midp_pane_t2

0x0001,

0xfae1,	// (0x00011b17) list_form2_midp_pane_t

0x414f,	// (0x00006185) scroll_pane_cp51_ParamLimits

0x4358,	// (0x0000638e) form2_midp_wait_pane_g1

0x4361,	// (0x00006397) form2_midp_wait_pane_g2

0x436a,	// (0x000063a0) form2_midp_wait_pane_g3

0x0002,

0xfaf6,	// (0x00011b2c) form2_midp_wait_pane_g

0xe89b,	// (0x000108d1) list_highlight_pane_cp21_ParamLimits

0x43b2,	// (0x000063e8) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x43c1,	// (0x000063f7) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3014,	// (0x0000504a) list_single_2graphic_im_pane_ParamLimits

0x3014,	// (0x0000504a) list_single_2graphic_im_pane

0xc938,	// (0x0000e96e) list_single_2graphic_im_pane_g1_ParamLimits

0xc938,	// (0x0000e96e) list_single_2graphic_im_pane_g1

0xc949,	// (0x0000e97f) list_single_2graphic_im_pane_g2_ParamLimits

0xc949,	// (0x0000e97f) list_single_2graphic_im_pane_g2

0xc955,	// (0x0000e98b) list_single_2graphic_im_pane_g3_ParamLimits

0xc955,	// (0x0000e98b) list_single_2graphic_im_pane_g3

0x0003,

0xfc4b,	// (0x00011c81) list_single_2graphic_im_pane_g_ParamLimits

0xfc4b,	// (0x00011c81) list_single_2graphic_im_pane_g

0xc969,	// (0x0000e99f) list_single_2graphic_im_pane_t1_ParamLimits

0xc969,	// (0x0000e99f) list_single_2graphic_im_pane_t1

0x4edc,	// (0x00006f12) list_single_graphic_2heading_pane_fp_ParamLimits

0x4edc,	// (0x00006f12) list_single_graphic_2heading_pane_fp

0x4f41,	// (0x00006f77) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4f41,	// (0x00006f77) list_single_graphic_2heading_pane_fp_g1

0x4ef2,	// (0x00006f28) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4ef2,	// (0x00006f28) list_single_graphic_2heading_pane_fp_g2

0x4efe,	// (0x00006f34) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4efe,	// (0x00006f34) list_single_graphic_2heading_pane_fp_g3

0x4f0a,	// (0x00006f40) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4f0a,	// (0x00006f40) list_single_graphic_2heading_pane_fp_g4

0x4f1e,	// (0x00006f54) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4f1e,	// (0x00006f54) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb79,	// (0x00011baf) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb79,	// (0x00011baf) list_single_graphic_2heading_pane_fp_g

0x57b3,	// (0x000077e9) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x57b3,	// (0x000077e9) list_single_graphic_2heading_pane_fp_t1

0x4f79,	// (0x00006faf) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4f79,	// (0x00006faf) list_single_graphic_2heading_pane_fp_t2

0x57c9,	// (0x000077ff) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x57c9,	// (0x000077ff) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc54,	// (0x00011c8a) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc54,	// (0x00011c8a) list_single_graphic_2heading_pane_fp_t

0x47e5,	// (0x0000681b) fep_hwr_write_pane_g5_ParamLimits

0x47e5,	// (0x0000681b) fep_hwr_write_pane_g5

0x47f1,	// (0x00006827) fep_hwr_write_pane_g6_ParamLimits

0x47f1,	// (0x00006827) fep_hwr_write_pane_g6

0xc745,	// (0x0000e77b) eswt_shell_pane_ParamLimits

0x17aa,	// (0x000037e0) bg_popup_window_pane_cp18_ParamLimits

0x2cb5,	// (0x00004ceb) heading_pane_cp70

0x554b,	// (0x00007581) popup_eswt_tasktip_window_t1_ParamLimits

0xb2a6,	// (0x0000d2dc) aid_touch_tab_arrow_left

0xb2bc,	// (0x0000d2f2) aid_touch_tab_arrow_right

0x96e5,	// (0x0000b71b) title_pane_g3_ParamLimits

0x96e5,	// (0x0000b71b) title_pane_g3

0xec80,	// (0x00010cb6) set_value_pane_g1

0xb189,	// (0x0000d1bf) popup_toolbar_trans_pane_ParamLimits

0xc8ec,	// (0x0000e922) aid_size_cell_tb_trans_pane_ParamLimits

0xece9,	// (0x00010d1f) bg_tb_trans_pane_ParamLimits

0xc8fe,	// (0x0000e934) grid_tb_trans_pane_ParamLimits

0xe9df,	// (0x00010a15) cont_note_pane_ParamLimits

0xe9df,	// (0x00010a15) cont_note_pane

0xeb5b,	// (0x00010b91) cont_snote2_single_text_pane_ParamLimits

0xeb5b,	// (0x00010b91) cont_snote2_single_text_pane

0xeb5b,	// (0x00010b91) cont_snote2_single_graphic_pane_ParamLimits

0xeb5b,	// (0x00010b91) cont_snote2_single_graphic_pane

0x1e71,	// (0x00003ea7) cont_note_wait_pane_ParamLimits

0x1e71,	// (0x00003ea7) cont_note_wait_pane

0x1e71,	// (0x00003ea7) cont_note_image_pane_ParamLimits

0x1e71,	// (0x00003ea7) cont_note_image_pane

0x57df,	// (0x00007815) popup_note2_window_g1_ParamLimits

0x57df,	// (0x00007815) popup_note2_window_g1

0xc9a7,	// (0x0000e9dd) popup_note2_window_t1_ParamLimits

0xc9a7,	// (0x0000e9dd) popup_note2_window_t1

0xc9ec,	// (0x0000ea22) popup_note2_window_t2_ParamLimits

0xc9ec,	// (0x0000ea22) popup_note2_window_t2

0xca31,	// (0x0000ea67) popup_note2_window_t3_ParamLimits

0xca31,	// (0x0000ea67) popup_note2_window_t3

0x58df,	// (0x00007915) popup_note2_window_t4_ParamLimits

0x58df,	// (0x00007915) popup_note2_window_t4

0xea63,	// (0x00010a99) popup_note2_window_t5_ParamLimits

0xea63,	// (0x00010a99) popup_note2_window_t5

0x0004,

0xfc60,	// (0x00011c96) popup_note2_window_t_ParamLimits

0xfc60,	// (0x00011c96) popup_note2_window_t

0x590e,	// (0x00007944) popup_note2_image_window_g1_ParamLimits

0x590e,	// (0x00007944) popup_note2_image_window_g1

0xca76,	// (0x0000eaac) popup_note2_image_window_g2_ParamLimits

0xca76,	// (0x0000eaac) popup_note2_image_window_g2

0x0001,

0xfc6b,	// (0x00011ca1) popup_note2_image_window_g_ParamLimits

0xfc6b,	// (0x00011ca1) popup_note2_image_window_g

0x592c,	// (0x00007962) popup_note2_image_window_t1_ParamLimits

0x592c,	// (0x00007962) popup_note2_image_window_t1

0x5944,	// (0x0000797a) popup_note2_image_window_t2_ParamLimits

0x5944,	// (0x0000797a) popup_note2_image_window_t2

0x595c,	// (0x00007992) popup_note2_image_window_t3_ParamLimits

0x595c,	// (0x00007992) popup_note2_image_window_t3

0x0002,

0xfc70,	// (0x00011ca6) popup_note2_image_window_t_ParamLimits

0xfc70,	// (0x00011ca6) popup_note2_image_window_t

0x1e7f,	// (0x00003eb5) popup_note2_wait_window_g1_ParamLimits

0x1e7f,	// (0x00003eb5) popup_note2_wait_window_g1

0x1e8b,	// (0x00003ec1) popup_note2_wait_window_g2_ParamLimits

0x1e8b,	// (0x00003ec1) popup_note2_wait_window_g2

0x1e97,	// (0x00003ecd) popup_note2_wait_window_g3_ParamLimits

0x1e97,	// (0x00003ecd) popup_note2_wait_window_g3

0x0002,

0xf83e,	// (0x00011874) popup_note2_wait_window_g_ParamLimits

0xf83e,	// (0x00011874) popup_note2_wait_window_g

0x5978,	// (0x000079ae) popup_note2_wait_window_t1_ParamLimits

0x5978,	// (0x000079ae) popup_note2_wait_window_t1

0x5996,	// (0x000079cc) popup_note2_wait_window_t2_ParamLimits

0x5996,	// (0x000079cc) popup_note2_wait_window_t2

0x59b4,	// (0x000079ea) popup_note2_wait_window_t3_ParamLimits

0x59b4,	// (0x000079ea) popup_note2_wait_window_t3

0x59c6,	// (0x000079fc) popup_note2_wait_window_t4_ParamLimits

0x59c6,	// (0x000079fc) popup_note2_wait_window_t4

0x0003,

0xfc77,	// (0x00011cad) popup_note2_wait_window_t_ParamLimits

0xfc77,	// (0x00011cad) popup_note2_wait_window_t

0x59d8,	// (0x00007a0e) wait_bar2_pane_ParamLimits

0x59d8,	// (0x00007a0e) wait_bar2_pane

0x59f0,	// (0x00007a26) popup_snote2_single_text_window_g1_ParamLimits

0x59f0,	// (0x00007a26) popup_snote2_single_text_window_g1

0x5a18,	// (0x00007a4e) popup_snote2_single_text_window_t1_ParamLimits

0x5a18,	// (0x00007a4e) popup_snote2_single_text_window_t1

0x5a64,	// (0x00007a9a) popup_snote2_single_text_window_t2_ParamLimits

0x5a64,	// (0x00007a9a) popup_snote2_single_text_window_t2

0x5ab0,	// (0x00007ae6) popup_snote2_single_text_window_t3_ParamLimits

0x5ab0,	// (0x00007ae6) popup_snote2_single_text_window_t3

0x5af1,	// (0x00007b27) popup_snote2_single_text_window_t4_ParamLimits

0x5af1,	// (0x00007b27) popup_snote2_single_text_window_t4

0x5b27,	// (0x00007b5d) popup_snote2_single_text_window_t5_ParamLimits

0x5b27,	// (0x00007b5d) popup_snote2_single_text_window_t5

0x0004,

0xfc80,	// (0x00011cb6) popup_snote2_single_text_window_t_ParamLimits

0xfc80,	// (0x00011cb6) popup_snote2_single_text_window_t

0xca88,	// (0x0000eabe) popup_snote2_single_graphic_window_g1_ParamLimits

0xca88,	// (0x0000eabe) popup_snote2_single_graphic_window_g1

0x5b7a,	// (0x00007bb0) popup_snote2_single_graphic_window_g2_ParamLimits

0x5b7a,	// (0x00007bb0) popup_snote2_single_graphic_window_g2

0x0001,

0xfc8b,	// (0x00011cc1) popup_snote2_single_graphic_window_g_ParamLimits

0xfc8b,	// (0x00011cc1) popup_snote2_single_graphic_window_g

0x5ba2,	// (0x00007bd8) popup_snote2_single_graphic_window_t1_ParamLimits

0x5ba2,	// (0x00007bd8) popup_snote2_single_graphic_window_t1

0x5bee,	// (0x00007c24) popup_snote2_single_graphic_window_t2_ParamLimits

0x5bee,	// (0x00007c24) popup_snote2_single_graphic_window_t2

0x5ab0,	// (0x00007ae6) popup_snote2_single_graphic_window_t3_ParamLimits

0x5ab0,	// (0x00007ae6) popup_snote2_single_graphic_window_t3

0x5af1,	// (0x00007b27) popup_snote2_single_graphic_window_t4_ParamLimits

0x5af1,	// (0x00007b27) popup_snote2_single_graphic_window_t4

0x5b27,	// (0x00007b5d) popup_snote2_single_graphic_window_t5_ParamLimits

0x5b27,	// (0x00007b5d) popup_snote2_single_graphic_window_t5

0x0004,

0xfc90,	// (0x00011cc6) popup_snote2_single_graphic_window_t_ParamLimits

0xfc90,	// (0x00011cc6) popup_snote2_single_graphic_window_t

0x3fc4,	// (0x00005ffa) clock_nsta_pane_cp2_t1

0x3fc4,	// (0x00005ffa) clock_nsta_pane_cp2_t2

0x0001,

0xfab7,	// (0x00011aed) clock_nsta_pane_cp2_t

0xecf7,	// (0x00010d2d) form_field_data_wide_pane_g1_ParamLimits

0xec50,	// (0x00010c86) form_field_data_wide_pane_g2_ParamLimits

0xec50,	// (0x00010c86) form_field_data_wide_pane_g2

0xed03,	// (0x00010d39) form_field_data_wide_pane_g3_ParamLimits

0xed03,	// (0x00010d39) form_field_data_wide_pane_g3

0x0002,

0xf676,	// (0x000116ac) form_field_data_wide_pane_g_ParamLimits

0xf676,	// (0x000116ac) form_field_data_wide_pane_g

0xc283,	// (0x0000e2b9) grid_touch_3_pane_ParamLimits

0xc283,	// (0x0000e2b9) grid_touch_3_pane

0xcab0,	// (0x0000eae6) cell_touch_3_pane_ParamLimits

0xcab0,	// (0x0000eae6) cell_touch_3_pane

0x45bb,	// (0x000065f1) cell_touch_3_pane_g1

0x45bb,	// (0x000065f1) cell_touch_3_pane_g2

0x0001,

0xfb3c,	// (0x00011b72) cell_touch_3_pane_g

0xea95,	// (0x00010acb) cont_query_data_pane

0xea9d,	// (0x00010ad3) cont_query_data_pane_cp1

0x5c68,	// (0x00007c9e) button_value_adjust_pane_cp7

0x5c70,	// (0x00007ca6) query_popup_pane_cp3

0xf3f8,	// (0x0001142e) bg_popup_sub_pane_cp22_ParamLimits

0xa5ac,	// (0x0000c5e2) navi_navi_volume_pane_cp2

0xa5bb,	// (0x0000c5f1) popup_side_volume_key_window_g2

0xa5ca,	// (0x0000c600) popup_side_volume_key_window_g3

0x0002,

0xf70c,	// (0x00011742) popup_side_volume_key_window_g

0xa5d9,	// (0x0000c60f) popup_side_volume_key_window_t2

0x0001,

0xf713,	// (0x00011749) popup_side_volume_key_window_t

0xa72a,	// (0x0000c760) popup_side_volume_key_window_ParamLimits

0x9e40,	// (0x0000be76) list_double_graphic_pane_g4_ParamLimits

0x9e40,	// (0x0000be76) list_double_graphic_pane_g4

0xc02c,	// (0x0000e062) list_single_2heading_msg_pane_ParamLimits

0xc02c,	// (0x0000e062) list_single_2heading_msg_pane

0xcaf9,	// (0x0000eb2f) list_single_2heading_msg_pane_g1_ParamLimits

0xcaf9,	// (0x0000eb2f) list_single_2heading_msg_pane_g1

0xcb05,	// (0x0000eb3b) list_single_2heading_msg_pane_g2_ParamLimits

0xcb05,	// (0x0000eb3b) list_single_2heading_msg_pane_g2

0xcb18,	// (0x0000eb4e) list_single_2heading_msg_pane_g3_ParamLimits

0xcb18,	// (0x0000eb4e) list_single_2heading_msg_pane_g3

0xcb24,	// (0x0000eb5a) list_single_2heading_msg_pane_g4_ParamLimits

0xcb24,	// (0x0000eb5a) list_single_2heading_msg_pane_g4

0x0003,

0xfc9b,	// (0x00011cd1) list_single_2heading_msg_pane_g_ParamLimits

0xfc9b,	// (0x00011cd1) list_single_2heading_msg_pane_g

0xcb3c,	// (0x0000eb72) list_single_2heading_msg_pane_t1_ParamLimits

0xcb3c,	// (0x0000eb72) list_single_2heading_msg_pane_t1

0xcb64,	// (0x0000eb9a) list_single_2heading_msg_pane_t2_ParamLimits

0xcb64,	// (0x0000eb9a) list_single_2heading_msg_pane_t2

0xcbcf,	// (0x0000ec05) list_single_2heading_msg_pane_t3_ParamLimits

0xcbcf,	// (0x0000ec05) list_single_2heading_msg_pane_t3

0x5d5f,	// (0x00007d95) list_single_2heading_msg_pane_t4_ParamLimits

0x5d5f,	// (0x00007d95) list_single_2heading_msg_pane_t4

0x0003,

0xfca4,	// (0x00011cda) list_single_2heading_msg_pane_t_ParamLimits

0xfca4,	// (0x00011cda) list_single_2heading_msg_pane_t

0xe849,	// (0x0001087f) title_pane_g4_ParamLimits

0xe849,	// (0x0001087f) title_pane_g4

0xf010,	// (0x00011046) title_pane_stacon_g3_ParamLimits

0xf010,	// (0x00011046) title_pane_stacon_g3

0x5776,	// (0x000077ac) list_single_2graphic_im_pane_g4_ParamLimits

0x5776,	// (0x000077ac) list_single_2graphic_im_pane_g4

0xbc86,	// (0x0000dcbc) popup_side_volume_key_window_cp

0x34b8,	// (0x000054ee) main_idle_act2_pane_t1

0x165a,	// (0x00003690) toolbar_button_pane_g10

0x9cc9,	// (0x0000bcff) popup_toolbar_window_cp1

0x3fb5,	// (0x00005feb) clock_nsta_pane_cp_t1

0x3fb5,	// (0x00005feb) clock_nsta_pane_cp_t2

0x0001,

0xfab2,	// (0x00011ae8) clock_nsta_pane_cp_t

0xa5ac,	// (0x0000c5e2) navi_navi_volume_pane_cp2_ParamLimits

0xf40e,	// (0x00011444) popup_side_volume_key_window_g1_ParamLimits

0xa5bb,	// (0x0000c5f1) popup_side_volume_key_window_g2_ParamLimits

0xa5ca,	// (0x0000c600) popup_side_volume_key_window_g3_ParamLimits

0xf70c,	// (0x00011742) popup_side_volume_key_window_g_ParamLimits

0x4625,	// (0x0000665b) fep_hwr_aid_pane

0x46cc,	// (0x00006702) bg_fep_hwr_top_pane_g4_ParamLimits

0x46ec,	// (0x00006722) fep_hwr_top_pane_g1_ParamLimits

0x46fe,	// (0x00006734) fep_hwr_top_pane_g2_ParamLimits

0x4710,	// (0x00006746) fep_hwr_top_pane_g3_ParamLimits

0xfb07,	// (0x00011b3d) fep_hwr_top_pane_g_ParamLimits

0x4725,	// (0x0000675b) fep_hwr_top_text_pane_ParamLimits

0x27e5,	// (0x0000481b) aid_touch_tab_arrow_arrow_2

0x27ee,	// (0x00004824) aid_touch_tab_arrow_left_2

0x4639,	// (0x0000666f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x4670,	// (0x000066a6) fep_hwr_prediction_pane

0x4996,	// (0x000069cc) fep_vkb_prediction_pane

0xc668,	// (0x0000e69e) fep_vkb_side_pane_g3_ParamLimits

0xc668,	// (0x0000e69e) fep_vkb_side_pane_g3

0x4a3f,	// (0x00006a75) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x5136,	// (0x0000716c) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x5143,	// (0x00007179) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbb1,	// (0x00011be7) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5d84,	// (0x00007dba) fep_hwr_prediction_pane_g1

0x5d8e,	// (0x00007dc4) fep_hwr_prediction_pane_g2

0x5d96,	// (0x00007dcc) fep_hwr_prediction_pane_g3

0x5d9e,	// (0x00007dd4) fep_hwr_prediction_pane_g4

0x0003,

0xfcad,	// (0x00011ce3) fep_hwr_prediction_pane_g

0x5d84,	// (0x00007dba) fep_vkb_prediction_pane_g1

0x5da6,	// (0x00007ddc) fep_vkb_prediction_pane_g2

0x5dae,	// (0x00007de4) fep_vkb_prediction_pane_g3

0x5db6,	// (0x00007dec) fep_vkb_prediction_pane_g4

0x0003,

0xfcb6,	// (0x00011cec) fep_vkb_prediction_pane_g

0xbe19,	// (0x0000de4f) slider_set_pane_g3

0xbe2d,	// (0x0000de63) slider_set_pane_g4

0xbe45,	// (0x0000de7b) slider_set_pane_g5

0xbe19,	// (0x0000de4f) slider_set_pane_g6

0xbe5b,	// (0x0000de91) slider_set_pane_g7

0x2f72,	// (0x00004fa8) slider_form_pane_g3

0x2f7b,	// (0x00004fb1) slider_form_pane_g4

0x2f83,	// (0x00004fb9) slider_form_pane_g5

0x2f72,	// (0x00004fa8) slider_form_pane_g6

0xbfe2,	// (0x0000e018) slider_form_pane_g7

0x37ae,	// (0x000057e4) slider_set_pane_vc_g3

0x37b7,	// (0x000057ed) slider_set_pane_vc_g4

0x37c0,	// (0x000057f6) slider_set_pane_vc_g5

0x37ae,	// (0x000057e4) slider_set_pane_vc_g6

0x37c9,	// (0x000057ff) slider_set_pane_vc_g7

0x3c89,	// (0x00005cbf) slider_form_pane_vc_g1

0x3c92,	// (0x00005cc8) slider_form_pane_vc_g2

0x3c9b,	// (0x00005cd1) slider_form_pane_vc_g3

0x3c89,	// (0x00005cbf) slider_form_pane_vc_g4

0x3ca4,	// (0x00005cda) slider_form_pane_vc_g5

0x0004,

0xfa84,	// (0x00011aba) slider_form_pane_vc_g

0xe69c,	// (0x000106d2) main_idle_act3_pane

0x5dbe,	// (0x00007df4) ai3_links_pane

0xcc3d,	// (0x0000ec73) popup_ai3_data_window_ParamLimits

0xcc3d,	// (0x0000ec73) popup_ai3_data_window

0xe69c,	// (0x000106d2) grid_ai3_links_pane

0xcc55,	// (0x0000ec8b) cell_ai3_links_pane_ParamLimits

0xcc55,	// (0x0000ec8b) cell_ai3_links_pane

0x5df7,	// (0x00007e2d) bg_popup_sub_pane_cp11

0x5e04,	// (0x00007e3a) cell_ai3_links_pane_g1

0xe69c,	// (0x000106d2) bg_popup_sub_pane_cp12

0x5e29,	// (0x00007e5f) heading_ai3_data_pane

0x5e31,	// (0x00007e67) list_ai3_gene_pane

0x5e3d,	// (0x00007e73) popup_ai3_data_window_g1

0x5e45,	// (0x00007e7b) heading_ai3_data_pane_g1

0x5e4d,	// (0x00007e83) heading_ai3_data_pane_t1

0xcc6f,	// (0x0000eca5) list_double_ai3_gene_pane_ParamLimits

0xcc6f,	// (0x0000eca5) list_double_ai3_gene_pane

0x5e68,	// (0x00007e9e) list_single_ai3_gene_pane_ParamLimits

0x5e68,	// (0x00007e9e) list_single_ai3_gene_pane

0x4580,	// (0x000065b6) list_highlight_pane_cp7_ParamLimits

0x4580,	// (0x000065b6) list_highlight_pane_cp7

0x5e75,	// (0x00007eab) list_single_a13_gene_pane_t1_ParamLimits

0x5e75,	// (0x00007eab) list_single_a13_gene_pane_t1

0x5e8c,	// (0x00007ec2) list_single_ai3_gene_pane_g1

0x5e95,	// (0x00007ecb) list_single_ai3_gene_pane_g2

0x0001,

0xfcbf,	// (0x00011cf5) list_single_ai3_gene_pane_g

0x5e9d,	// (0x00007ed3) list_double_ai3_gene_pane_g1_ParamLimits

0x5e9d,	// (0x00007ed3) list_double_ai3_gene_pane_g1

0xcc7c,	// (0x0000ecb2) list_double_ai3_gene_pane_t1_ParamLimits

0xcc7c,	// (0x0000ecb2) list_double_ai3_gene_pane_t1

0x5ec5,	// (0x00007efb) list_double_ai3_gene_pane_t2_ParamLimits

0x5ec5,	// (0x00007efb) list_double_ai3_gene_pane_t2

0x5eda,	// (0x00007f10) list_double_ai3_gene_pane_t3_ParamLimits

0x5eda,	// (0x00007f10) list_double_ai3_gene_pane_t3

0x0002,

0xfcc4,	// (0x00011cfa) list_double_ai3_gene_pane_t_ParamLimits

0xfcc4,	// (0x00011cfa) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5c81,	// (0x00007cb7) aid_size_min_col_2

0xcae3,	// (0x0000eb19) aid_size_min_msg_ParamLimits

0xcae3,	// (0x0000eb19) aid_size_min_msg

0xc67c,	// (0x0000e6b2) fep_vkb_top_text_pane_g2_ParamLimits

0xc67c,	// (0x0000e6b2) fep_vkb_top_text_pane_g2

0x0001,

0xfb37,	// (0x00011b6d) fep_vkb_top_text_pane_g_ParamLimits

0xfb37,	// (0x00011b6d) fep_vkb_top_text_pane_g

0xe69c,	// (0x000106d2) main_hc_apps_shell_pane

0x5ef7,	// (0x00007f2d) grid_hc_apps_pane_ParamLimits

0x5ef7,	// (0x00007f2d) grid_hc_apps_pane

0x5f06,	// (0x00007f3c) list_hc_apps_pane

0x5f0e,	// (0x00007f44) scroll_pane_cp37_ParamLimits

0x5f0e,	// (0x00007f44) scroll_pane_cp37

0xcc98,	// (0x0000ecce) cell_hc_apps_pane_ParamLimits

0xcc98,	// (0x0000ecce) cell_hc_apps_pane

0xcd56,	// (0x0000ed8c) cell_hc_apps_pane_g1_ParamLimits

0xcd56,	// (0x0000ed8c) cell_hc_apps_pane_g1

0x5ff9,	// (0x0000802f) cell_hc_apps_pane_g2_ParamLimits

0x5ff9,	// (0x0000802f) cell_hc_apps_pane_g2

0x6015,	// (0x0000804b) cell_hc_apps_pane_g3_ParamLimits

0x6015,	// (0x0000804b) cell_hc_apps_pane_g3

0x0002,

0xfccb,	// (0x00011d01) cell_hc_apps_pane_g_ParamLimits

0xfccb,	// (0x00011d01) cell_hc_apps_pane_g

0xcd83,	// (0x0000edb9) cell_hc_apps_pane_t1_ParamLimits

0xcd83,	// (0x0000edb9) cell_hc_apps_pane_t1

0xe9df,	// (0x00010a15) grid_highlight_pane_cp10_ParamLimits

0xe9df,	// (0x00010a15) grid_highlight_pane_cp10

0xcdc1,	// (0x0000edf7) list_single_hc_apps_pane_ParamLimits

0xcdc1,	// (0x0000edf7) list_single_hc_apps_pane

0xcdf1,	// (0x0000ee27) list_single_hc_apps_pane_g1

0xce0a,	// (0x0000ee40) list_single_hc_apps_pane_g2

0x0001,

0xfcd2,	// (0x00011d08) list_single_hc_apps_pane_g

0xce23,	// (0x0000ee59) list_single_hc_apps_pane_g2_copy1

0xce3f,	// (0x0000ee75) list_single_hc_apps_pane_t1

0xe89b,	// (0x000108d1) bg_set_opt_pane_cp_ParamLimits

0x97b9,	// (0x0000b7ef) setting_slider_pane_t1_ParamLimits

0x97d2,	// (0x0000b808) setting_slider_pane_t2_ParamLimits

0x97ec,	// (0x0000b822) setting_slider_pane_t3_ParamLimits

0xf55e,	// (0x00011594) setting_slider_pane_t_ParamLimits

0x9804,	// (0x0000b83a) slider_set_pane_ParamLimits

0x091b,	// (0x00002951) control_pane_g5_ParamLimits

0x091b,	// (0x00002951) control_pane_g5

0xbe0c,	// (0x0000de42) slider_set_pane_g1_ParamLimits

0x2d6a,	// (0x00004da0) slider_set_pane_g2_ParamLimits

0xbe19,	// (0x0000de4f) slider_set_pane_g3_ParamLimits

0xbe2d,	// (0x0000de63) slider_set_pane_g4_ParamLimits

0xbe45,	// (0x0000de7b) slider_set_pane_g5_ParamLimits

0xbe19,	// (0x0000de4f) slider_set_pane_g6_ParamLimits

0xbe5b,	// (0x0000de91) slider_set_pane_g7_ParamLimits

0xf95a,	// (0x00011990) slider_set_pane_g_ParamLimits

0x03cb,	// (0x00002401) navi_icon_text_pane_ParamLimits

0xb26f,	// (0x0000d2a5) aid_fill_nsta_2_ParamLimits

0xb2a6,	// (0x0000d2dc) aid_touch_tab_arrow_left_ParamLimits

0xb2bc,	// (0x0000d2f2) aid_touch_tab_arrow_right_ParamLimits

0xb357,	// (0x0000d38d) clock_nsta_pane_ParamLimits

0x27c7,	// (0x000047fd) navi_icon_pane_g1_ParamLimits

0x27d3,	// (0x00004809) navi_text_pane_t1_ParamLimits

0x40c5,	// (0x000060fb) navi_icon_text_pane_g1_ParamLimits

0x40d1,	// (0x00006107) navi_icon_text_pane_t1_ParamLimits

0xcdf1,	// (0x0000ee27) list_single_hc_apps_pane_g1_ParamLimits

0xce0a,	// (0x0000ee40) list_single_hc_apps_pane_g2_ParamLimits

0xfcd2,	// (0x00011d08) list_single_hc_apps_pane_g_ParamLimits

0xce23,	// (0x0000ee59) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xce3f,	// (0x0000ee75) list_single_hc_apps_pane_t1_ParamLimits

0x95ea,	// (0x0000b620) popup_toolbar2_fixed_window_ParamLimits

0x95ea,	// (0x0000b620) popup_toolbar2_fixed_window

0xb17f,	// (0x0000d1b5) popup_toolbar2_float_window

0xe69c,	// (0x000106d2) bg_popup_sub_pane_cp27

0x6156,	// (0x0000818c) grid_toolbar2_float_pane

0xe69c,	// (0x000106d2) bg_popup_sub_pane_cp26

0x6156,	// (0x0000818c) grid_toolbar2_fixed_pane

0xce6d,	// (0x0000eea3) cell_toolbar2_fixed_pane_ParamLimits

0xce6d,	// (0x0000eea3) cell_toolbar2_fixed_pane

0xce87,	// (0x0000eebd) cell_toolbar2_fixed_pane_g1

0x1540,	// (0x00003576) toolbar2_fixed_button_pane

0x1612,	// (0x00003648) toolbar2_fixed_button_pane_g1

0x161a,	// (0x00003650) toolbar2_fixed_button_pane_g2

0x1622,	// (0x00003658) toolbar2_fixed_button_pane_g3

0x162a,	// (0x00003660) toolbar2_fixed_button_pane_g4

0x1632,	// (0x00003668) toolbar2_fixed_button_pane_g5

0x163a,	// (0x00003670) toolbar2_fixed_button_pane_g6

0x1642,	// (0x00003678) toolbar2_fixed_button_pane_g7

0x164a,	// (0x00003680) toolbar2_fixed_button_pane_g8

0x1652,	// (0x00003688) toolbar2_fixed_button_pane_g9

0x0008,

0xf85c,	// (0x00011892) toolbar2_fixed_button_pane_g

0x6177,	// (0x000081ad) cell_toolbar2_float_pane_ParamLimits

0x6177,	// (0x000081ad) cell_toolbar2_float_pane

0x6188,	// (0x000081be) cell_toolbar2_float_pane_g1

0x1540,	// (0x00003576) toolbar2_fixed_button_pane_cp

0xc564,	// (0x0000e59a) fep_vkb_accented_list_pane_ParamLimits

0xc564,	// (0x0000e59a) fep_vkb_accented_list_pane

0x4d86,	// (0x00006dbc) bg_popup_fep_shadow_pane_g9

0x054b,	// (0x00002581) bg_popup_fep_shadow_pane_cp3

0xee29,	// (0x00010e5f) list_accented_list_pane

0x6191,	// (0x000081c7) list_single_accented_list_pane_ParamLimits

0x6191,	// (0x000081c7) list_single_accented_list_pane

0x054b,	// (0x00002581) list_highlight_pane_cp10

0x61a2,	// (0x000081d8) list_single_accented_list_pane_t1

0xb0a9,	// (0x0000d0df) popup_slider_window_ParamLimits

0xb0a9,	// (0x0000d0df) popup_slider_window

0x5c78,	// (0x00007cae) aid_indentation_list_msg

0xcf7c,	// (0x0000efb2) bg_popup_window_pane_cp19

0x62c2,	// (0x000082f8) popup_slider_window_g1

0x62de,	// (0x00008314) popup_slider_window_g2

0x62fa,	// (0x00008330) popup_slider_window_g3

0x0005,

0xfcd7,	// (0x00011d0d) popup_slider_window_g

0x6356,	// (0x0000838c) popup_slider_window_t1

0x63ca,	// (0x00008400) small_volume_slider_vertical_pane

0x45bb,	// (0x000065f1) small_volume_slider_vertical_pane_g1

0x45bb,	// (0x000065f1) small_volume_slider_vertical_pane_g2

0x63e6,	// (0x0000841c) small_volume_slider_vertical_pane_g3

0x0002,

0xfce9,	// (0x00011d1f) small_volume_slider_vertical_pane_g

0x9538,	// (0x0000b56e) area_side_right_pane_ParamLimits

0x9538,	// (0x0000b56e) area_side_right_pane

0xd034,	// (0x0000f06a) aid_size_side_button_ParamLimits

0xd034,	// (0x0000f06a) aid_size_side_button

0xd04d,	// (0x0000f083) grid_sctrl_middle_pane_ParamLimits

0xd04d,	// (0x0000f083) grid_sctrl_middle_pane

0x6422,	// (0x00008458) sctrl_sk_bottom_pane

0x6433,	// (0x00008469) sctrl_sk_top_pane

0x6445,	// (0x0000847b) aid_touch_sctrl_top

0xe9df,	// (0x00010a15) bg_sctrl_sk_pane_ParamLimits

0xe9df,	// (0x00010a15) bg_sctrl_sk_pane

0x6452,	// (0x00008488) sctrl_sk_top_pane_g1

0x645f,	// (0x00008495) sctrl_sk_top_pane_t1

0x6445,	// (0x0000847b) aid_touch_sctrl_bottom

0xe9df,	// (0x00010a15) bg_sctrl_sk_pane_cp_ParamLimits

0xe9df,	// (0x00010a15) bg_sctrl_sk_pane_cp

0x647a,	// (0x000084b0) sctrl_sk_bottom_pane_g1

0x645f,	// (0x00008495) sctrl_sk_bottom_pane_t1

0xd067,	// (0x0000f09d) cell_sctrl_middle_pane_ParamLimits

0xd067,	// (0x0000f09d) cell_sctrl_middle_pane

0xd078,	// (0x0000f0ae) aid_touch_sctrl_middle_ParamLimits

0xd078,	// (0x0000f0ae) aid_touch_sctrl_middle

0xd085,	// (0x0000f0bb) bg_sctrl_middle_pane_ParamLimits

0xd085,	// (0x0000f0bb) bg_sctrl_middle_pane

0x653f,	// (0x00008575) cell_sctrl_middle_pane_g1_ParamLimits

0x653f,	// (0x00008575) cell_sctrl_middle_pane_g1

0xd093,	// (0x0000f0c9) cell_sctrl_middle_pane_g2_ParamLimits

0xd093,	// (0x0000f0c9) cell_sctrl_middle_pane_g2

0x0001,

0xfcf5,	// (0x00011d2b) cell_sctrl_middle_pane_g_ParamLimits

0xfcf5,	// (0x00011d2b) cell_sctrl_middle_pane_g

0x1612,	// (0x00003648) bg_sctrl_middle_pane_g1

0x161a,	// (0x00003650) bg_sctrl_middle_pane_g2

0x1622,	// (0x00003658) bg_sctrl_middle_pane_g3

0x162a,	// (0x00003660) bg_sctrl_middle_pane_g4

0x1632,	// (0x00003668) bg_sctrl_middle_pane_g5

0x163a,	// (0x00003670) bg_sctrl_middle_pane_g6

0x1642,	// (0x00003678) bg_sctrl_middle_pane_g7

0x164a,	// (0x00003680) bg_sctrl_middle_pane_g8

0x0007,

0xfcfa,	// (0x00011d30) bg_sctrl_middle_pane_g

0x1652,	// (0x00003688) bg_sctrl_middle_pane_g8_copy1

0x1612,	// (0x00003648) bg_sctrl_sk_pane_g1

0x161a,	// (0x00003650) bg_sctrl_sk_pane_g2

0x1622,	// (0x00003658) bg_sctrl_sk_pane_g3

0x0008,

0xf85c,	// (0x00011892) bg_sctrl_sk_pane_g

0xeba9,	// (0x00010bdf) aid_size_touch_scroll_bar

0x162a,	// (0x00003660) bg_sctrl_sk_pane_g4

0x1632,	// (0x00003668) bg_sctrl_sk_pane_g5

0x163a,	// (0x00003670) bg_sctrl_sk_pane_g6

0x1642,	// (0x00003678) bg_sctrl_sk_pane_g7

0x164a,	// (0x00003680) bg_sctrl_sk_pane_g8

0x1652,	// (0x00003688) bg_sctrl_sk_pane_g9

0x0b68,	// (0x00002b9e) popup_fep_china_hwr2_fs_candidate_window

0xab49,	// (0x0000cb7f) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xab49,	// (0x0000cb7f) popup_fep_china_hwr2_fs_control_window

0x4a3f,	// (0x00006a75) sctrl_sk_top_pane_g2

0x0001,

0xfcf0,	// (0x00011d26) sctrl_sk_top_pane_g

0xd09f,	// (0x0000f0d5) aid_fep_china_hwr2_fs_cell_ParamLimits

0xd09f,	// (0x0000f0d5) aid_fep_china_hwr2_fs_cell

0xd0b3,	// (0x0000f0e9) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xd0b3,	// (0x0000f0e9) bg_popup_fep_shadow_pane_cp4

0xd0ca,	// (0x0000f100) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xd0ca,	// (0x0000f100) bg_popup_fep_shadow_pane_cp5

0xd0dc,	// (0x0000f112) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xd0dc,	// (0x0000f112) popup_fep_china_hwr2_fs_control_bar_grid

0xf286,	// (0x000112bc) popup_fep_china_hwr2_fs_control_funtion_grid

0x6513,	// (0x00008549) aid_fep_china_hwr2_fs_candi_cell

0xe69c,	// (0x000106d2) bg_popup_fep_shadow_pane_cp6

0x651d,	// (0x00008553) popup_fep_china_hwr2_fs_candidate_grid

0xd0f0,	// (0x0000f126) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xd0f0,	// (0x0000f126) cell_fep_china_hwr2_fs_funtion_grid

0x45bb,	// (0x000065f1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x653f,	// (0x00008575) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x653f,	// (0x00008575) cell_fep_china_hwr2_fs_funtion_grid_g1

0x654d,	// (0x00008583) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x654d,	// (0x00008583) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd0b,	// (0x00011d41) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd0b,	// (0x00011d41) cell_fep_china_hwr2_fs_funtion_grid_g

0xd108,	// (0x0000f13e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xd108,	// (0x0000f13e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xd11d,	// (0x0000f153) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xd11d,	// (0x0000f153) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd10,	// (0x00011d46) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd10,	// (0x00011d46) cell_fep_china_hwr2_fs_funtion_grid_t

0x6594,	// (0x000085ca) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x659c,	// (0x000085d2) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x65a4,	// (0x000085da) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd15,	// (0x00011d4b) popup_fep_china_hwr2_fs_control_bar_grid_g

0x65ac,	// (0x000085e2) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x65ac,	// (0x000085e2) cell_fep_china_hwr2_fs_candidate_grid

0x65c5,	// (0x000085fb) popup_fep_china_hwr2_fs_candidate_grid_g20

0x65cd,	// (0x00008603) popup_fep_china_hwr2_fs_candidate_grid_g21

0x45bb,	// (0x000065f1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x45bb,	// (0x000065f1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb3c,	// (0x00011b72) cell_fep_china_hwr2_fs_candidate_grid_g

0x65d5,	// (0x0000860b) cell_fep_china_hwr2_fs_candidate_grid_t1

0x1167,	// (0x0000319d) clock_nsta_pane_cp_24_ParamLimits

0x1167,	// (0x0000319d) clock_nsta_pane_cp_24

0x11e5,	// (0x0000321b) indicator_nsta_pane_cp_24_ParamLimits

0x11e5,	// (0x0000321b) indicator_nsta_pane_cp_24

0x2632,	// (0x00004668) heading_pane_g1

0x0001,

0xf8c1,	// (0x000118f7) heading_pane_g

0x3249,	// (0x0000527f) grid_sct_catagory_button_pane

0x3279,	// (0x000052af) scroll_pane_cp5_ParamLimits

0x415b,	// (0x00006191) button_value_adjust_pane_cp5_ParamLimits

0x415b,	// (0x00006191) button_value_adjust_pane_cp5

0x4255,	// (0x0000628b) form2_midp_time_pane_ParamLimits

0x65e3,	// (0x00008619) cell_sct_catagory_button_pane_ParamLimits

0x65e3,	// (0x00008619) cell_sct_catagory_button_pane

0x4580,	// (0x000065b6) bg_button_pane_cp01_ParamLimits

0x4580,	// (0x000065b6) bg_button_pane_cp01

0x45bb,	// (0x000065f1) cell_sct_catagory_button_pane_g1

0xb122,	// (0x0000d158) popup_tb_extension_window

0xd139,	// (0x0000f16f) aid_size_cell_ext_ParamLimits

0xd139,	// (0x0000f16f) aid_size_cell_ext

0xeb5b,	// (0x00010b91) bg_tb_trans_pane_cp1_ParamLimits

0xeb5b,	// (0x00010b91) bg_tb_trans_pane_cp1

0xd15f,	// (0x0000f195) grid_tb_ext_pane_ParamLimits

0xd15f,	// (0x0000f195) grid_tb_ext_pane

0xd19e,	// (0x0000f1d4) cell_tb_ext_pane_ParamLimits

0xd19e,	// (0x0000f1d4) cell_tb_ext_pane

0xd1c6,	// (0x0000f1fc) cell_tb_ext_pane_g1_ParamLimits

0xd1c6,	// (0x0000f1fc) cell_tb_ext_pane_g1

0x6679,	// (0x000086af) cell_tb_ext_pane_t1

0xe9df,	// (0x00010a15) list_highlight_pane_cp11_ParamLimits

0xe9df,	// (0x00010a15) list_highlight_pane_cp11

0x95ff,	// (0x0000b635) popup_uni_indicator_window_ParamLimits

0x95ff,	// (0x0000b635) popup_uni_indicator_window

0xece9,	// (0x00010d1f) bg_popup_sub_pane_cp14

0xd1e3,	// (0x0000f219) list_uniindi_pane

0xd1ef,	// (0x0000f225) uniindi_top_pane

0xe9df,	// (0x00010a15) bg_uniindi_top_pane

0xd20e,	// (0x0000f244) uniindi_top_pane_g1

0xd224,	// (0x0000f25a) uniindi_top_pane_g2

0x0003,

0xfd1c,	// (0x00011d52) uniindi_top_pane_g

0xd241,	// (0x0000f277) uniindi_top_pane_t1

0x6729,	// (0x0000875f) list_single_uniindi_pane_ParamLimits

0x6729,	// (0x0000875f) list_single_uniindi_pane

0x45bb,	// (0x000065f1) bg_uniindi_top_pane_g1

0x673b,	// (0x00008771) list_single_uniindi_pane_g1

0x674e,	// (0x00008784) list_single_uniindi_pane_t1

0xe69c,	// (0x000106d2) control_bg_pane

0x6773,	// (0x000087a9) bg_sctrl_sk_pane_cp1

0x677c,	// (0x000087b2) bg_sctrl_sk_pane_cp2

0x6785,	// (0x000087bb) control_bg_pane_g1

0x678e,	// (0x000087c4) control_bg_pane_g2

0x0001,

0xfd25,	// (0x00011d5b) control_bg_pane_g

0x3f59,	// (0x00005f8f) cell_indicator_nsta_pane_g1_ParamLimits

0xc2b0,	// (0x0000e2e6) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa0,	// (0x00011ad6) cell_indicator_nsta_pane_g_ParamLimits

0x42dd,	// (0x00006313) form2_midp_time_pane_t1_ParamLimits

0x4617,	// (0x0000664d) main_idle_act4_pane_ParamLimits

0x4617,	// (0x0000664d) main_idle_act4_pane

0xb122,	// (0x0000d158) popup_tb_extension_window_ParamLimits

0xd184,	// (0x0000f1ba) tb_ext_find_pane_ParamLimits

0xd184,	// (0x0000f1ba) tb_ext_find_pane

0x6797,	// (0x000087cd) ai_gene_pane_1_cp1

0x068a,	// (0x000026c0) ai_gene_pane_2_cp1

0xd26b,	// (0x0000f2a1) list_single_idle_plugin_calendar_pane

0x67a8,	// (0x000087de) list_single_idle_plugin_notification_pane

0x67b1,	// (0x000087e7) list_single_idle_plugin_player_pane

0xd274,	// (0x0000f2aa) list_single_idle_plugin_shortcut_pane_ParamLimits

0xd274,	// (0x0000f2aa) list_single_idle_plugin_shortcut_pane

0xd29c,	// (0x0000f2d2) main_idle_act4_pane_t1

0xd2b3,	// (0x0000f2e9) main_idle_act4_pane_t2

0x0001,

0xfd2a,	// (0x00011d60) main_idle_act4_pane_t

0xd2ca,	// (0x0000f300) middle_sk_idle_act4_pane_ParamLimits

0xd2ca,	// (0x0000f300) middle_sk_idle_act4_pane

0xd2e6,	// (0x0000f31c) popup_clock_digital_analogue_window_cp2

0xd312,	// (0x0000f348) shortcut_wheel_idle_act4_pane_ParamLimits

0xd312,	// (0x0000f348) shortcut_wheel_idle_act4_pane

0x45bb,	// (0x000065f1) shortcut_wheel_idle_act4_pane_g1

0x45bb,	// (0x000065f1) shortcut_wheel_idle_act4_pane_g2

0x45bb,	// (0x000065f1) shortcut_wheel_idle_act4_pane_g3

0x45bb,	// (0x000065f1) shortcut_wheel_idle_act4_pane_g4

0x45bb,	// (0x000065f1) shortcut_wheel_idle_act4_pane_g5

0x6844,	// (0x0000887a) shortcut_wheel_idle_act4_pane_g6

0x684c,	// (0x00008882) shortcut_wheel_idle_act4_pane_g7

0x6854,	// (0x0000888a) shortcut_wheel_idle_act4_pane_g8

0x685c,	// (0x00008892) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd2f,	// (0x00011d65) shortcut_wheel_idle_act4_pane_g

0x46cc,	// (0x00006702) middle_sk_idle_act4_pane_g1_ParamLimits

0x46cc,	// (0x00006702) middle_sk_idle_act4_pane_g1

0xd38f,	// (0x0000f3c5) middle_sk_idle_act4_pane_g2_ParamLimits

0xd38f,	// (0x0000f3c5) middle_sk_idle_act4_pane_g2

0x0001,

0xfd52,	// (0x00011d88) middle_sk_idle_act4_pane_g_ParamLimits

0xfd52,	// (0x00011d88) middle_sk_idle_act4_pane_g

0xd3a7,	// (0x0000f3dd) middle_sk_idle_act4_pane_t1_ParamLimits

0xd3a7,	// (0x0000f3dd) middle_sk_idle_act4_pane_t1

0xd3d6,	// (0x0000f40c) grid_ai_shortcut_pane_ParamLimits

0xd3d6,	// (0x0000f40c) grid_ai_shortcut_pane

0xd3f3,	// (0x0000f429) list_highlight_pane_cp16_ParamLimits

0xd3f3,	// (0x0000f429) list_highlight_pane_cp16

0xd400,	// (0x0000f436) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xd400,	// (0x0000f436) list_single_idle_plugin_shortcut_pane_g1

0xd40c,	// (0x0000f442) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xd40c,	// (0x0000f442) list_single_idle_plugin_shortcut_pane_g2

0xd428,	// (0x0000f45e) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xd428,	// (0x0000f45e) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd57,	// (0x00011d8d) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd57,	// (0x00011d8d) list_single_idle_plugin_shortcut_pane_g

0xd43d,	// (0x0000f473) cell_ai_shortcut_pane_ParamLimits

0xd43d,	// (0x0000f473) cell_ai_shortcut_pane

0xd453,	// (0x0000f489) cell_ai_shortcut_pane_g1_ParamLimits

0xd453,	// (0x0000f489) cell_ai_shortcut_pane_g1

0x6797,	// (0x000087cd) ai_gene_pane_1_cp2

0x698c,	// (0x000089c2) ai_gene_pane_2_cp2

0x6994,	// (0x000089ca) list_highlight_pane_cp15

0xd475,	// (0x0000f4ab) list_single_idle_plugin_calendar_pane_g1

0x6994,	// (0x000089ca) list_highlight_pane_cp17

0x69a5,	// (0x000089db) list_single_idle_plugin_calendar_pane_g1_copy1

0x69ad,	// (0x000089e3) list_single_idle_plugin_player_pane_g1

0x355a,	// (0x00005590) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd5e,	// (0x00011d94) list_single_idle_plugin_player_pane_g

0x69b5,	// (0x000089eb) list_single_idle_plugin_player_pane_t1

0x69c3,	// (0x000089f9) list_single_idle_plugin_player_pane_t2

0x69d1,	// (0x00008a07) list_single_idle_plugin_player_pane_t3

0x69df,	// (0x00008a15) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd63,	// (0x00011d99) list_single_idle_plugin_player_pane_t

0x69ed,	// (0x00008a23) wait_bar_pane_cp15

0x69f5,	// (0x00008a2b) grid_ai_notification_pane

0x355a,	// (0x00005590) list_single_idle_plugin_notification_pane_g1

0xd47d,	// (0x0000f4b3) cell_ai_notification_pane_ParamLimits

0xd47d,	// (0x0000f4b3) cell_ai_notification_pane

0x6a0b,	// (0x00008a41) cell_ai_notification_pane_g1

0x6a13,	// (0x00008a49) cell_ai_notification_pane_t1

0xd48a,	// (0x0000f4c0) tb_ext_find_button_pane

0xd492,	// (0x0000f4c8) tb_ext_find_pane_g1

0xd49a,	// (0x0000f4d0) tb_ext_find_pane_t1

0xf31d,	// (0x00011353) tb_ext_find_button_pane_g1

0xd4a8,	// (0x0000f4de) tb_ext_find_button_pane_g2

0x0001,

0xfd6c,	// (0x00011da2) tb_ext_find_button_pane_g

0xd29c,	// (0x0000f2d2) main_idle_act4_pane_t1_ParamLimits

0xd2b3,	// (0x0000f2e9) main_idle_act4_pane_t2_ParamLimits

0xfd2a,	// (0x00011d60) main_idle_act4_pane_t_ParamLimits

0xd2e6,	// (0x0000f31c) popup_clock_digital_analogue_window_cp2_ParamLimits

0xd2fe,	// (0x0000f334) sat_plugin_idle_act4_pane_ParamLimits

0xd2fe,	// (0x0000f334) sat_plugin_idle_act4_pane

0xd4b1,	// (0x0000f4e7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xd4b1,	// (0x0000f4e7) sat_plugin_idle_act4_pane_t1

0xd4c9,	// (0x0000f4ff) sat_plugin_idle_act4_pane_t2_ParamLimits

0xd4c9,	// (0x0000f4ff) sat_plugin_idle_act4_pane_t2

0xd4e1,	// (0x0000f517) sat_plugin_idle_act4_pane_t3_ParamLimits

0xd4e1,	// (0x0000f517) sat_plugin_idle_act4_pane_t3

0xd4f9,	// (0x0000f52f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xd4f9,	// (0x0000f52f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd71,	// (0x00011da7) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd71,	// (0x00011da7) sat_plugin_idle_act4_pane_t

0x957a,	// (0x0000b5b0) popup_battery_window_ParamLimits

0x957a,	// (0x0000b5b0) popup_battery_window

0xe9df,	// (0x00010a15) bg_popup_sub_pane_cp25_ParamLimits

0xe9df,	// (0x00010a15) bg_popup_sub_pane_cp25

0x6a94,	// (0x00008aca) popup_battery_window_g1_ParamLimits

0x6a94,	// (0x00008aca) popup_battery_window_g1

0x6aa0,	// (0x00008ad6) popup_battery_window_t1_ParamLimits

0x6aa0,	// (0x00008ad6) popup_battery_window_t1

0x6ab2,	// (0x00008ae8) popup_battery_window_t2_ParamLimits

0x6ab2,	// (0x00008ae8) popup_battery_window_t2

0x0001,

0xfd7a,	// (0x00011db0) popup_battery_window_t_ParamLimits

0xfd7a,	// (0x00011db0) popup_battery_window_t

0xa77d,	// (0x0000c7b3) midp_canvas_pane_ParamLimits

0xa7ef,	// (0x0000c825) midp_keypad_pane_ParamLimits

0xa7ef,	// (0x0000c825) midp_keypad_pane

0x0abe,	// (0x00002af4) main_midp_pane_ParamLimits

0xc2bd,	// (0x0000e2f3) signal_pane_g2_cp_ParamLimits

0xd511,	// (0x0000f547) aid_size_cell_midp_keypad_ParamLimits

0xd511,	// (0x0000f547) aid_size_cell_midp_keypad

0xd52f,	// (0x0000f565) midp_keyp_game_grid_pane_ParamLimits

0xd52f,	// (0x0000f565) midp_keyp_game_grid_pane

0xd556,	// (0x0000f58c) midp_keyp_rocker_pane_ParamLimits

0xd556,	// (0x0000f58c) midp_keyp_rocker_pane

0xd5a7,	// (0x0000f5dd) midp_keyp_sk_left_pane_ParamLimits

0xd5a7,	// (0x0000f5dd) midp_keyp_sk_left_pane

0xd5fb,	// (0x0000f631) midp_keyp_sk_right_pane_ParamLimits

0xd5fb,	// (0x0000f631) midp_keyp_sk_right_pane

0xe69c,	// (0x000106d2) bg_button_pane_cp03

0xd64f,	// (0x0000f685) midp_keyp_sk_left_pane_g1

0xe69c,	// (0x000106d2) bg_button_pane_cp04

0xd64f,	// (0x0000f685) midp_keyp_sk_right_pane_g1

0x45bb,	// (0x000065f1) midp_keyp_rocker_pane_g1

0xd658,	// (0x0000f68e) keyp_game_cell_pane_ParamLimits

0xd658,	// (0x0000f68e) keyp_game_cell_pane

0xe69c,	// (0x000106d2) bg_button_pane_cp02

0xd67c,	// (0x0000f6b2) keyp_game_cell_pane_g1

0x959a,	// (0x0000b5d0) popup_fep_vkb2_window_ParamLimits

0x959a,	// (0x0000b5d0) popup_fep_vkb2_window

0xd685,	// (0x0000f6bb) aid_size_cell_vkb2_ParamLimits

0xd685,	// (0x0000f6bb) aid_size_cell_vkb2

0xd6c3,	// (0x0000f6f9) popup_fep_vkb2_window_g1_ParamLimits

0xd6c3,	// (0x0000f6f9) popup_fep_vkb2_window_g1

0xd713,	// (0x0000f749) vkb2_area_bottom_pane_ParamLimits

0xd713,	// (0x0000f749) vkb2_area_bottom_pane

0xd767,	// (0x0000f79d) vkb2_area_keypad_pane_ParamLimits

0xd767,	// (0x0000f79d) vkb2_area_keypad_pane

0xd7af,	// (0x0000f7e5) vkb2_area_top_pane_ParamLimits

0xd7af,	// (0x0000f7e5) vkb2_area_top_pane

0xd835,	// (0x0000f86b) vkb2_top_entry_pane_ParamLimits

0xd835,	// (0x0000f86b) vkb2_top_entry_pane

0xd862,	// (0x0000f898) vkb2_top_grid_left_pane_ParamLimits

0xd862,	// (0x0000f898) vkb2_top_grid_left_pane

0xd882,	// (0x0000f8b8) vkb2_top_grid_right_pane_ParamLimits

0xd882,	// (0x0000f8b8) vkb2_top_grid_right_pane

0x6e33,	// (0x00008e69) vkb2_cell_keypad_pane_ParamLimits

0x6e33,	// (0x00008e69) vkb2_cell_keypad_pane

0xd8c8,	// (0x0000f8fe) vkb2_area_bottom_grid_pane_ParamLimits

0xd8c8,	// (0x0000f8fe) vkb2_area_bottom_grid_pane

0xd8f2,	// (0x0000f928) vkb2_area_bottom_pane_g1_ParamLimits

0xd8f2,	// (0x0000f928) vkb2_area_bottom_pane_g1

0xd918,	// (0x0000f94e) vkb2_area_bottom_pane_g2_ParamLimits

0xd918,	// (0x0000f94e) vkb2_area_bottom_pane_g2

0xd949,	// (0x0000f97f) vkb2_area_bottom_pane_g3_ParamLimits

0xd949,	// (0x0000f97f) vkb2_area_bottom_pane_g3

0x0002,

0xfd7f,	// (0x00011db5) vkb2_area_bottom_pane_g_ParamLimits

0xfd7f,	// (0x00011db5) vkb2_area_bottom_pane_g

0x6fdd,	// (0x00009013) vkb2_top_cell_left_pane_ParamLimits

0x6fdd,	// (0x00009013) vkb2_top_cell_left_pane

0xd9b3,	// (0x0000f9e9) vkb2_top_entry_pane_g1_ParamLimits

0xd9b3,	// (0x0000f9e9) vkb2_top_entry_pane_g1

0xd9c1,	// (0x0000f9f7) vkb2_top_entry_pane_t1_ParamLimits

0xd9c1,	// (0x0000f9f7) vkb2_top_entry_pane_t1

0x7045,	// (0x0000907b) vkb2_top_entry_pane_t2_ParamLimits

0x7045,	// (0x0000907b) vkb2_top_entry_pane_t2

0x7077,	// (0x000090ad) vkb2_top_entry_pane_t3_ParamLimits

0x7077,	// (0x000090ad) vkb2_top_entry_pane_t3

0x0002,

0xfd86,	// (0x00011dbc) vkb2_top_entry_pane_t_ParamLimits

0xfd86,	// (0x00011dbc) vkb2_top_entry_pane_t

0xd9fa,	// (0x0000fa30) vkb2_top_grid_right_pane_g1_ParamLimits

0xd9fa,	// (0x0000fa30) vkb2_top_grid_right_pane_g1

0x70de,	// (0x00009114) vkb2_top_grid_right_pane_g2_ParamLimits

0x70de,	// (0x00009114) vkb2_top_grid_right_pane_g2

0x70f6,	// (0x0000912c) vkb2_top_grid_right_pane_g3_ParamLimits

0x70f6,	// (0x0000912c) vkb2_top_grid_right_pane_g3

0xda10,	// (0x0000fa46) vkb2_top_grid_right_pane_g4_ParamLimits

0xda10,	// (0x0000fa46) vkb2_top_grid_right_pane_g4

0x0003,

0xfd8d,	// (0x00011dc3) vkb2_top_grid_right_pane_g_ParamLimits

0xfd8d,	// (0x00011dc3) vkb2_top_grid_right_pane_g

0x7124,	// (0x0000915a) vkb2_top_cell_left_pane_g1

0x713b,	// (0x00009171) vkb2_cell_keypad_pane_g1_ParamLimits

0x713b,	// (0x00009171) vkb2_cell_keypad_pane_g1

0x7149,	// (0x0000917f) vkb2_cell_keypad_pane_t1_ParamLimits

0x7149,	// (0x0000917f) vkb2_cell_keypad_pane_t1

0x7160,	// (0x00009196) vkb2_cell_bottom_grid_pane_ParamLimits

0x7160,	// (0x00009196) vkb2_cell_bottom_grid_pane

0x7199,	// (0x000091cf) vkb2_cell_bottom_grid_pane_g1

0xd333,	// (0x0000f369) aid_call2_pane_cp02

0xd33b,	// (0x0000f371) aid_call_pane_cp02

0xd343,	// (0x0000f379) clock_digital_number_pane_cp10

0xd34b,	// (0x0000f381) clock_digital_number_pane_cp11

0xd353,	// (0x0000f389) clock_digital_number_pane_cp12

0xd35b,	// (0x0000f391) clock_digital_number_pane_cp13

0xd363,	// (0x0000f399) clock_digital_separator_pane_cp10

0xf31d,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g1

0xf31d,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g2

0xd36b,	// (0x0000f3a1) popup_clock_digital_analogue_window_cp2_g3

0xf31d,	// (0x00011353) popup_clock_digital_analogue_window_cp2_g4

0xd36b,	// (0x0000f3a1) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd42,	// (0x00011d78) popup_clock_digital_analogue_window_cp2_g

0xd373,	// (0x0000f3a9) popup_clock_digital_analogue_window_cp2_t1

0xd381,	// (0x0000f3b7) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd4d,	// (0x00011d83) popup_clock_digital_analogue_window_cp2_t

0x45bb,	// (0x000065f1) clock_digital_number_pane_cp10_g1

0x45bb,	// (0x000065f1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00011b72) clock_digital_number_pane_cp10_g

0x45bb,	// (0x000065f1) clock_digital_separator_pane_cp10_g1

0x45bb,	// (0x000065f1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb3c,	// (0x00011b72) clock_digital_separator_pane_cp10_g

0xd230,	// (0x0000f266) uniindi_top_pane_g3

0x66f2,	// (0x00008728) uniindi_top_pane_g4

0x6ebe,	// (0x00008ef4) vkb2_row_keypad_pane_ParamLimits

0x6ebe,	// (0x00008ef4) vkb2_row_keypad_pane

0x71b5,	// (0x000091eb) vkb2_cell_t_keypad_pane_ParamLimits

0x71b5,	// (0x000091eb) vkb2_cell_t_keypad_pane

0x71c5,	// (0x000091fb) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x71c5,	// (0x000091fb) vkb2_cell_t_keypad_pane_cp08

0x71d8,	// (0x0000920e) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x71d8,	// (0x0000920e) vkb2_cell_t_keypad_pane_cp09

0x71ec,	// (0x00009222) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x71ec,	// (0x00009222) vkb2_cell_t_keypad_pane_cp01

0x71fd,	// (0x00009233) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x71fd,	// (0x00009233) vkb2_cell_t_keypad_pane_cp02

0x720e,	// (0x00009244) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x720e,	// (0x00009244) vkb2_cell_t_keypad_pane_cp03

0x721f,	// (0x00009255) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x721f,	// (0x00009255) vkb2_cell_t_keypad_pane_cp04

0x7230,	// (0x00009266) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x7230,	// (0x00009266) vkb2_cell_t_keypad_pane_cp05

0x7241,	// (0x00009277) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x7241,	// (0x00009277) vkb2_cell_t_keypad_pane_cp06

0x7252,	// (0x00009288) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x7252,	// (0x00009288) vkb2_cell_t_keypad_pane_cp07

0x7263,	// (0x00009299) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x7263,	// (0x00009299) vkb2_cell_t_keypad_pane_cp10

0x4a3f,	// (0x00006a75) vkb2_cell_t_keypad_pane_g1

0x7278,	// (0x000092ae) vkb2_cell_t_keypad_pane_t1

0xe69c,	// (0x000106d2) popup_grid_graphic2_window

0xda26,	// (0x0000fa5c) aid_size_cell_graphic2_ParamLimits

0xda26,	// (0x0000fa5c) aid_size_cell_graphic2

0xda64,	// (0x0000fa9a) bg_popup_window_pane_cp21_ParamLimits

0xda64,	// (0x0000fa9a) bg_popup_window_pane_cp21

0xda72,	// (0x0000faa8) graphic2_pages_pane_ParamLimits

0xda72,	// (0x0000faa8) graphic2_pages_pane

0xdac8,	// (0x0000fafe) grid_graphic2_control_pane_ParamLimits

0xdac8,	// (0x0000fafe) grid_graphic2_control_pane

0xdb10,	// (0x0000fb46) grid_graphic2_pane_ParamLimits

0xdb10,	// (0x0000fb46) grid_graphic2_pane

0xdb97,	// (0x0000fbcd) cell_graphic2_pane

0xe69c,	// (0x000106d2) main_comp_mode_pane

0x5e31,	// (0x00007e67) list_ai3_gene_pane_ParamLimits

0xcf7c,	// (0x0000efb2) bg_popup_window_pane_cp19_ParamLimits

0x6264,	// (0x0000829a) bg_touch_area_indi_pane_ParamLimits

0x6264,	// (0x0000829a) bg_touch_area_indi_pane

0x627a,	// (0x000082b0) bg_touch_area_indi_pane_cp01_ParamLimits

0x627a,	// (0x000082b0) bg_touch_area_indi_pane_cp01

0x6290,	// (0x000082c6) bg_touch_area_indi_pane_cp02_ParamLimits

0x6290,	// (0x000082c6) bg_touch_area_indi_pane_cp02

0x62a8,	// (0x000082de) bg_touch_area_indi_pane_cp03_ParamLimits

0x62a8,	// (0x000082de) bg_touch_area_indi_pane_cp03

0x62c2,	// (0x000082f8) popup_slider_window_g1_ParamLimits

0x62de,	// (0x00008314) popup_slider_window_g2_ParamLimits

0x62fa,	// (0x00008330) popup_slider_window_g3_ParamLimits

0xfcd7,	// (0x00011d0d) popup_slider_window_g_ParamLimits

0x6356,	// (0x0000838c) popup_slider_window_t1_ParamLimits

0x63ca,	// (0x00008400) small_volume_slider_vertical_pane_ParamLimits

0xdb97,	// (0x0000fbcd) cell_graphic2_pane_ParamLimits

0xdbf4,	// (0x0000fc2a) bg_button_pane_cp10_ParamLimits

0xdbf4,	// (0x0000fc2a) bg_button_pane_cp10

0xdc07,	// (0x0000fc3d) bg_button_pane_cp11_ParamLimits

0xdc07,	// (0x0000fc3d) bg_button_pane_cp11

0xdc1a,	// (0x0000fc50) graphic2_pages_pane_g1_ParamLimits

0xdc1a,	// (0x0000fc50) graphic2_pages_pane_g1

0xdc35,	// (0x0000fc6b) graphic2_pages_pane_g2_ParamLimits

0xdc35,	// (0x0000fc6b) graphic2_pages_pane_g2

0x0001,

0xfd9b,	// (0x00011dd1) graphic2_pages_pane_g_ParamLimits

0xfd9b,	// (0x00011dd1) graphic2_pages_pane_g

0xdc4d,	// (0x0000fc83) graphic2_pages_pane_t1_ParamLimits

0xdc4d,	// (0x0000fc83) graphic2_pages_pane_t1

0xdc65,	// (0x0000fc9b) cell_graphic2_control_pane_ParamLimits

0xdc65,	// (0x0000fc9b) cell_graphic2_control_pane

0xdc97,	// (0x0000fccd) cell_graphic2_pane_g1_ParamLimits

0xdc97,	// (0x0000fccd) cell_graphic2_pane_g1

0x4867,	// (0x0000689d) cell_graphic2_pane_g2_ParamLimits

0x4867,	// (0x0000689d) cell_graphic2_pane_g2

0xdca4,	// (0x0000fcda) cell_graphic2_pane_g3_ParamLimits

0xdca4,	// (0x0000fcda) cell_graphic2_pane_g3

0x4874,	// (0x000068aa) cell_graphic2_pane_g4_ParamLimits

0x4874,	// (0x000068aa) cell_graphic2_pane_g4

0xdcb1,	// (0x0000fce7) cell_graphic2_pane_g5_ParamLimits

0xdcb1,	// (0x0000fce7) cell_graphic2_pane_g5

0x0004,

0xfda0,	// (0x00011dd6) cell_graphic2_pane_g_ParamLimits

0xfda0,	// (0x00011dd6) cell_graphic2_pane_g

0xdcd1,	// (0x0000fd07) cell_graphic2_pane_t1_ParamLimits

0xdcd1,	// (0x0000fd07) cell_graphic2_pane_t1

0x2626,	// (0x0000465c) grid_highlight_pane_cp11_ParamLimits

0x2626,	// (0x0000465c) grid_highlight_pane_cp11

0xe9df,	// (0x00010a15) bg_button_pane_cp05

0xdd08,	// (0x0000fd3e) cell_graphic2_control_pane_g1

0x45bb,	// (0x000065f1) bg_touch_area_indi_pane_g1

0x7548,	// (0x0000957e) aid_cmod_rocker_key_size

0x7552,	// (0x00009588) aid_cmode_itu_key_size

0x755c,	// (0x00009592) main_cmode_video_pane

0x7566,	// (0x0000959c) main_comp_mode_itu_pane

0x7572,	// (0x000095a8) main_comp_mode_rocker_pane

0x757e,	// (0x000095b4) cell_cmode_rocker_pane_ParamLimits

0x757e,	// (0x000095b4) cell_cmode_rocker_pane

0x7590,	// (0x000095c6) cell_cmode_itu_pane_ParamLimits

0x7590,	// (0x000095c6) cell_cmode_itu_pane

0xece9,	// (0x00010d1f) bg_button_pane_cp06_ParamLimits

0xece9,	// (0x00010d1f) bg_button_pane_cp06

0x4a3f,	// (0x00006a75) cell_cmode_rocker_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) cell_cmode_rocker_pane_g1

0x653f,	// (0x00008575) cell_cmode_rocker_pane_g2_ParamLimits

0x653f,	// (0x00008575) cell_cmode_rocker_pane_g2

0x0001,

0xfdb0,	// (0x00011de6) cell_cmode_rocker_pane_g_ParamLimits

0xfdb0,	// (0x00011de6) cell_cmode_rocker_pane_g

0xe69c,	// (0x000106d2) bg_button_pane_cp07

0x75a5,	// (0x000095db) cell_cmode_itu_pane_g1

0x75ae,	// (0x000095e4) cell_cmode_itu_pane_t1

0x75bc,	// (0x000095f2) cell_cmode_itu_pane_t2

0x0001,

0xfdb5,	// (0x00011deb) cell_cmode_itu_pane_t

0x6763,	// (0x00008799) aid_touch_ctrl_left

0x676b,	// (0x000087a1) aid_touch_ctrl_right

0xe69c,	// (0x000106d2) compa_mode_pane

0xdd30,	// (0x0000fd66) aid_cmod_rocker_key_size_cp

0xdd3a,	// (0x0000fd70) aid_cmode_itu_key_size_cp

0x75de,	// (0x00009614) compa_mode_pane_g1

0x75e6,	// (0x0000961c) compa_mode_pane_g2

0x75ee,	// (0x00009624) compa_mode_pane_g3

0x0002,

0xfdba,	// (0x00011df0) compa_mode_pane_g

0xdd44,	// (0x0000fd7a) main_comp_mode_itu_pane_cp

0xdd4c,	// (0x0000fd82) main_comp_mode_rocker_pane_cp

0xdd54,	// (0x0000fd8a) cell_cmode_itu_pane_cp_ParamLimits

0xdd54,	// (0x0000fd8a) cell_cmode_itu_pane_cp

0xdd69,	// (0x0000fd9f) cell_cmode_rocker_pane_cp_ParamLimits

0xdd69,	// (0x0000fd9f) cell_cmode_rocker_pane_cp

0xece9,	// (0x00010d1f) bg_button_pane_cp06_cp_ParamLimits

0xece9,	// (0x00010d1f) bg_button_pane_cp06_cp

0x4a3f,	// (0x00006a75) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x4a3f,	// (0x00006a75) cell_cmode_rocker_pane_g1_cp

0x45bb,	// (0x000065f1) cell_cmode_rocker_pane_g2_cp

0xe69c,	// (0x000106d2) bg_button_pane_cp07_cp

0xdd7b,	// (0x0000fdb1) cell_cmode_itu_pane_g1_cp

0xdd84,	// (0x0000fdba) cell_cmode_itu_pane_t1_cp

0xdd84,	// (0x0000fdba) cell_cmode_itu_pane_t2_cp

0xbfd8,	// (0x0000e00e) settings_code_pane_cp2

0xe89b,	// (0x000108d1) bg_popup_window_pane_cp3_ParamLimits

0xeaf8,	// (0x00010b2e) heading_pane_cp3_ParamLimits

0xeb04,	// (0x00010b3a) listscroll_popup_graphic_pane_ParamLimits

0x4625,	// (0x0000665b) fep_hwr_aid_pane_ParamLimits

0x6445,	// (0x0000847b) aid_touch_sctrl_top_ParamLimits

0x6452,	// (0x00008488) sctrl_sk_top_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) sctrl_sk_top_pane_g2_ParamLimits

0xfcf0,	// (0x00011d26) sctrl_sk_top_pane_g_ParamLimits

0x645f,	// (0x00008495) sctrl_sk_top_pane_t1_ParamLimits

0x6445,	// (0x0000847b) aid_touch_sctrl_bottom_ParamLimits

0x645f,	// (0x00008495) sctrl_sk_bottom_pane_t1_ParamLimits

0xd1fc,	// (0x0000f232) aid_area_touch_clock

0xd7f7,	// (0x0000f82d) aid_vkb2_area_top_pane_cell_ParamLimits

0xd7f7,	// (0x0000f82d) aid_vkb2_area_top_pane_cell

0xd8a2,	// (0x0000f8d8) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd8a2,	// (0x0000f8d8) aid_vkb2_area_bottom_pane_cell

0x6ffd,	// (0x00009033) popup_char_count_window

0x7644,	// (0x0000967a) popup_char_count_window_g1

0x764d,	// (0x00009683) popup_char_count_window_g2

0x7656,	// (0x0000968c) popup_char_count_window_g3

0x0002,

0xfdc1,	// (0x00011df7) popup_char_count_window_g

0x765f,	// (0x00009695) popup_char_count_window_t1

0x6c5b,	// (0x00008c91) popup_fep_char_preview_window_ParamLimits

0x6c5b,	// (0x00008c91) popup_fep_char_preview_window

0xd817,	// (0x0000f84d) vkb2_top_candi_pane_ParamLimits

0xd817,	// (0x0000f84d) vkb2_top_candi_pane

0xdd92,	// (0x0000fdc8) cell_vkb2_top_candi_pane_ParamLimits

0xdd92,	// (0x0000fdc8) cell_vkb2_top_candi_pane

0x1e71,	// (0x00003ea7) bg_popup_fep_char_preview_window_ParamLimits

0x1e71,	// (0x00003ea7) bg_popup_fep_char_preview_window

0x76ba,	// (0x000096f0) popup_fep_char_preview_window_t1_ParamLimits

0x76ba,	// (0x000096f0) popup_fep_char_preview_window_t1

0x76f4,	// (0x0000972a) bg_popup_fep_char_preview_window_g1

0x76fc,	// (0x00009732) bg_popup_fep_char_preview_window_g2

0x7704,	// (0x0000973a) bg_popup_fep_char_preview_window_g3

0x770c,	// (0x00009742) bg_popup_fep_char_preview_window_g4

0x7714,	// (0x0000974a) bg_popup_fep_char_preview_window_g5

0x771c,	// (0x00009752) bg_popup_fep_char_preview_window_g6

0x7724,	// (0x0000975a) bg_popup_fep_char_preview_window_g7

0x772c,	// (0x00009762) bg_popup_fep_char_preview_window_g8

0x7734,	// (0x0000976a) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdc8,	// (0x00011dfe) bg_popup_fep_char_preview_window_g

0x4a3f,	// (0x00006a75) cell_vkb2_top_candi_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) cell_vkb2_top_candi_pane_g1

0x4daa,	// (0x00006de0) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4daa,	// (0x00006de0) cell_vkb2_top_candi_pane_g2

0x4dcb,	// (0x00006e01) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4dcb,	// (0x00006e01) cell_vkb2_top_candi_pane_g3

0x773c,	// (0x00009772) cell_vkb2_top_candi_pane_g4_ParamLimits

0x773c,	// (0x00009772) cell_vkb2_top_candi_pane_g4

0x775d,	// (0x00009793) cell_vkb2_top_candi_pane_g5_ParamLimits

0x775d,	// (0x00009793) cell_vkb2_top_candi_pane_g5

0x653f,	// (0x00008575) cell_vkb2_top_candi_pane_g6_ParamLimits

0x653f,	// (0x00008575) cell_vkb2_top_candi_pane_g6

0x0005,

0xfddb,	// (0x00011e11) cell_vkb2_top_candi_pane_g_ParamLimits

0xfddb,	// (0x00011e11) cell_vkb2_top_candi_pane_g

0x777e,	// (0x000097b4) cell_vkb2_top_candi_pane_t1

0xbdf8,	// (0x0000de2e) aid_size_touch_slider_mark_ParamLimits

0xbdf8,	// (0x0000de2e) aid_size_touch_slider_mark

0xdaae,	// (0x0000fae4) grid_graphic2_catg_pane_ParamLimits

0xdaae,	// (0x0000fae4) grid_graphic2_catg_pane

0xdb6a,	// (0x0000fba0) popup_grid_graphic2_window_t1_ParamLimits

0xdb6a,	// (0x0000fba0) popup_grid_graphic2_window_t1

0xdb80,	// (0x0000fbb6) popup_grid_graphic2_window_t2_ParamLimits

0xdb80,	// (0x0000fbb6) popup_grid_graphic2_window_t2

0x0001,

0xfd96,	// (0x00011dcc) popup_grid_graphic2_window_t_ParamLimits

0xfd96,	// (0x00011dcc) popup_grid_graphic2_window_t

0xe9df,	// (0x00010a15) bg_button_pane_cp05_ParamLimits

0xdd08,	// (0x0000fd3e) cell_graphic2_control_pane_g1_ParamLimits

0xddf8,	// (0x0000fe2e) cell_graphic2_catg_pane_ParamLimits

0xddf8,	// (0x0000fe2e) cell_graphic2_catg_pane

0xe69c,	// (0x000106d2) bg_button_pane_cp12

0xde0a,	// (0x0000fe40) cell_graphic2_catg_pane_g1

0x6679,	// (0x000086af) cell_tb_ext_pane_t1_ParamLimits

0x709b,	// (0x000090d1) vkb2_top_cell_right_narrow_pane_ParamLimits

0x709b,	// (0x000090d1) vkb2_top_cell_right_narrow_pane

0x70b3,	// (0x000090e9) vkb2_top_cell_right_wide_pane_ParamLimits

0x70b3,	// (0x000090e9) vkb2_top_cell_right_wide_pane

0x4617,	// (0x0000664d) bg_vkb2_func_pane_ParamLimits

0x4617,	// (0x0000664d) bg_vkb2_func_pane

0x7124,	// (0x0000915a) vkb2_top_cell_left_pane_g1_ParamLimits

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp03_ParamLimits

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp03

0x7199,	// (0x000091cf) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x161a,	// (0x00003650) bg_vkb2_func_pane_g1

0x1622,	// (0x00003658) bg_vkb2_func_pane_g2

0x1632,	// (0x00003668) bg_vkb2_func_pane_g3

0x162a,	// (0x00003660) bg_vkb2_func_pane_g4

0x163a,	// (0x00003670) bg_vkb2_func_pane_g5

0x1642,	// (0x00003678) bg_vkb2_func_pane_g6

0x164a,	// (0x00003680) bg_vkb2_func_pane_g7

0x1652,	// (0x00003688) bg_vkb2_func_pane_g8

0x1612,	// (0x00003648) bg_vkb2_func_pane_g9

0x0008,

0xfde8,	// (0x00011e1e) bg_vkb2_func_pane_g

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp01_ParamLimits

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp01

0x7124,	// (0x0000915a) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x7124,	// (0x0000915a) vkb2_top_cell_right_wide_pane_g1

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp02_ParamLimits

0x4617,	// (0x0000664d) bg_vkb2_fuc_pane_cp02

0x7199,	// (0x000091cf) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x7199,	// (0x000091cf) vkb2_top_cell_right_narrow_pane_g1

0xceba,	// (0x0000eef0) aid_touch_area_decrease_ParamLimits

0xceba,	// (0x0000eef0) aid_touch_area_decrease

0xcef0,	// (0x0000ef26) aid_touch_area_increase_ParamLimits

0xcef0,	// (0x0000ef26) aid_touch_area_increase

0xcf18,	// (0x0000ef4e) aid_touch_area_mute_ParamLimits

0xcf18,	// (0x0000ef4e) aid_touch_area_mute

0xcf48,	// (0x0000ef7e) aid_touch_area_slider_ParamLimits

0xcf48,	// (0x0000ef7e) aid_touch_area_slider

0xcf88,	// (0x0000efbe) popup_slider_window_g4_ParamLimits

0xcf88,	// (0x0000efbe) popup_slider_window_g4

0xcfb0,	// (0x0000efe6) popup_slider_window_g5_ParamLimits

0xcfb0,	// (0x0000efe6) popup_slider_window_g5

0xcfe4,	// (0x0000f01a) popup_slider_window_g6_ParamLimits

0xcfe4,	// (0x0000f01a) popup_slider_window_g6

0x6384,	// (0x000083ba) popup_slider_window_t2_ParamLimits

0x6384,	// (0x000083ba) popup_slider_window_t2

0x0001,

0xfce4,	// (0x00011d1a) popup_slider_window_t_ParamLimits

0xfce4,	// (0x00011d1a) popup_slider_window_t

0xd000,	// (0x0000f036) slider_pane_ParamLimits

0xd000,	// (0x0000f036) slider_pane

0x77b8,	// (0x000097ee) slider_pane_g1_ParamLimits

0x77b8,	// (0x000097ee) slider_pane_g1

0x77cc,	// (0x00009802) slider_pane_g2_ParamLimits

0x77cc,	// (0x00009802) slider_pane_g2

0x77e2,	// (0x00009818) slider_pane_g3_ParamLimits

0x77e2,	// (0x00009818) slider_pane_g3

0x0003,

0xfdfb,	// (0x00011e31) slider_pane_g_ParamLimits

0xfdfb,	// (0x00011e31) slider_pane_g

0xb16a,	// (0x0000d1a0) popup_tb_float_extension_window_ParamLimits

0xb16a,	// (0x0000d1a0) popup_tb_float_extension_window

0x780e,	// (0x00009844) aid_size_cell_tb_float_ext

0xe69c,	// (0x000106d2) bg_popup_sub_window_cp28

0xde13,	// (0x0000fe49) grid_tb_float_ext_pane

0xde1d,	// (0x0000fe53) cell_tb_float_ext_pane_ParamLimits

0xde1d,	// (0x0000fe53) cell_tb_float_ext_pane

0xde37,	// (0x0000fe6d) cell_tb_float_ext_pane_g1

0xde40,	// (0x0000fe76) grid_highlight_pane_cp12

0xc542,	// (0x0000e578) cell_last_hwr_side_pane_ParamLimits

0xc542,	// (0x0000e578) cell_last_hwr_side_pane

0x45bb,	// (0x000065f1) cell_last_hwr_side_pane_g1

0x7850,	// (0x00009886) cell_last_hwr_side_pane_g2

0x0001,

0xfe04,	// (0x00011e3a) cell_last_hwr_side_pane_g

0xd97e,	// (0x0000f9b4) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd97e,	// (0x0000f9b4) vkb2_area_bottom_space_btn_pane

0x4a3f,	// (0x00006a75) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x7278,	// (0x000092ae) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x777e,	// (0x000097b4) cell_vkb2_top_candi_pane_t1_ParamLimits

0x7859,	// (0x0000988f) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x7859,	// (0x0000988f) vkb2_area_bottom_space_btn_pane_g1

0x7893,	// (0x000098c9) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x7893,	// (0x000098c9) vkb2_area_bottom_space_btn_pane_g2

0x78c9,	// (0x000098ff) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x78c9,	// (0x000098ff) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe09,	// (0x00011e3f) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe09,	// (0x00011e3f) vkb2_area_bottom_space_btn_pane_g

0x46da,	// (0x00006710) cel_fep_hwr_func_pane_ParamLimits

0x46da,	// (0x00006710) cel_fep_hwr_func_pane

0xc517,	// (0x0000e54d) cell_hwr_side_button_pane_ParamLimits

0xc517,	// (0x0000e54d) cell_hwr_side_button_pane

0xd1fc,	// (0x0000f232) aid_area_touch_clock_ParamLimits

0xe9df,	// (0x00010a15) bg_uniindi_top_pane_ParamLimits

0xd20e,	// (0x0000f244) uniindi_top_pane_g1_ParamLimits

0xd224,	// (0x0000f25a) uniindi_top_pane_g2_ParamLimits

0xd230,	// (0x0000f266) uniindi_top_pane_g3_ParamLimits

0x66f2,	// (0x00008728) uniindi_top_pane_g4_ParamLimits

0xfd1c,	// (0x00011d52) uniindi_top_pane_g_ParamLimits

0xd241,	// (0x0000f277) uniindi_top_pane_t1_ParamLimits

0xe9df,	// (0x00010a15) bg_vkb2_func_pane_cp01_ParamLimits

0xe9df,	// (0x00010a15) bg_vkb2_func_pane_cp01

0x7913,	// (0x00009949) cel_fep_hwr_func_pane_g1_ParamLimits

0x7913,	// (0x00009949) cel_fep_hwr_func_pane_g1

0xe9df,	// (0x00010a15) bg_vkb2_func_pane_cp02_ParamLimits

0xe9df,	// (0x00010a15) bg_vkb2_func_pane_cp02

0x7913,	// (0x00009949) cell_hwr_side_button_pane_g1_ParamLimits

0x7913,	// (0x00009949) cell_hwr_side_button_pane_g1

0x13f2,	// (0x00003428) status_pane_g4_ParamLimits

0x13f2,	// (0x00003428) status_pane_g4

0x140c,	// (0x00003442) status_pane_t1

0x42f0,	// (0x00006326) form2_midp_gauge_slider_cont_pane

0x42f8,	// (0x0000632e) form2_midp_gauge_slider_pane_t1_ParamLimits

0xc41b,	// (0x0000e451) form2_midp_gauge_slider_pane_t2_ParamLimits

0xc42d,	// (0x0000e463) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaef,	// (0x00011b25) form2_midp_gauge_slider_pane_t_ParamLimits

0x432e,	// (0x00006364) form2_midp_slider_pane_ParamLimits

0x6c1b,	// (0x00008c51) aid_size_cell_func_vkb2_ParamLimits

0x6c1b,	// (0x00008c51) aid_size_cell_func_vkb2

0x77fa,	// (0x00009830) slider_pane_g4_ParamLimits

0x77fa,	// (0x00009830) slider_pane_g4

0xde49,	// (0x0000fe7f) form2_midp_gauge_slider_pane_t2_cp01

0xde57,	// (0x0000fe8d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xde57,	// (0x0000fe8d) form2_midp_gauge_slider_pane_t3_cp01

0x794c,	// (0x00009982) form2_midp_slider_pane_cp01

0xe69c,	// (0x000106d2) navi_smil_pane

0x7980,	// (0x000099b6) navi_smil_pane_g1

0x7988,	// (0x000099be) navi_smil_pane_t1

0x7955,	// (0x0000998b) form2_midp_slider_pane_g1

0x795e,	// (0x00009994) form2_midp_slider_pane_g2

0x7966,	// (0x0000999c) form2_midp_slider_pane_g3

0x7955,	// (0x0000998b) form2_midp_slider_pane_g4

0xde74,	// (0x0000feaa) form2_midp_slider_pane_g5

0x0004,

0xfe12,	// (0x00011e48) form2_midp_slider_pane_g

0x7903,	// (0x00009939) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x7903,	// (0x00009939) vkb2_area_bottom_space_btn_pane_g4

0xb3a2,	// (0x0000d3d8) lc0_navi_pane_ParamLimits

0xb3a2,	// (0x0000d3d8) lc0_navi_pane

0xb40c,	// (0x0000d442) lc0_stat_indi_pane_ParamLimits

0xb40c,	// (0x0000d442) lc0_stat_indi_pane

0xb421,	// (0x0000d457) ls0_title_pane_ParamLimits

0xb421,	// (0x0000d457) ls0_title_pane

0xece9,	// (0x00010d1f) bg_popup_sub_pane_cp14_ParamLimits

0xd1e3,	// (0x0000f219) list_uniindi_pane_ParamLimits

0xd1ef,	// (0x0000f225) uniindi_top_pane_ParamLimits

0x673b,	// (0x00008771) list_single_uniindi_pane_g1_ParamLimits

0x674e,	// (0x00008784) list_single_uniindi_pane_t1_ParamLimits

0xde7f,	// (0x0000feb5) lc0_stat_clock_pane_ParamLimits

0xde7f,	// (0x0000feb5) lc0_stat_clock_pane

0xde8f,	// (0x0000fec5) lc0_stat_indi_pane_g1_ParamLimits

0xde8f,	// (0x0000fec5) lc0_stat_indi_pane_g1

0xde9c,	// (0x0000fed2) lc0_stat_indi_pane_g2_ParamLimits

0xde9c,	// (0x0000fed2) lc0_stat_indi_pane_g2

0x0001,

0xfe1d,	// (0x00011e53) lc0_stat_indi_pane_g_ParamLimits

0xfe1d,	// (0x00011e53) lc0_stat_indi_pane_g

0xdea9,	// (0x0000fedf) lc0_uni_indicator_pane_ParamLimits

0xdea9,	// (0x0000fedf) lc0_uni_indicator_pane

0xdeb9,	// (0x0000feef) ls0_title_pane_g1_ParamLimits

0xdeb9,	// (0x0000feef) ls0_title_pane_g1

0xdecd,	// (0x0000ff03) ls0_title_pane_t1_ParamLimits

0xdecd,	// (0x0000ff03) ls0_title_pane_t1

0xdefb,	// (0x0000ff31) lc0_uni_indicator_pane_g1_ParamLimits

0xdefb,	// (0x0000ff31) lc0_uni_indicator_pane_g1

0x7a28,	// (0x00009a5e) lc0_stat_clock_pane_t1

0xe69c,	// (0x000106d2) main_ai5_pane

0x7a36,	// (0x00009a6c) ai5_sk_pane_ParamLimits

0x7a36,	// (0x00009a6c) ai5_sk_pane

0xdf26,	// (0x0000ff5c) cell_ai5_widget_pane_ParamLimits

0xdf26,	// (0x0000ff5c) cell_ai5_widget_pane

0xdf90,	// (0x0000ffc6) aid_size_cell_widget_grid

0x7b0d,	// (0x00009b43) bg_ai5_widget_pane_ParamLimits

0x7b0d,	// (0x00009b43) bg_ai5_widget_pane

0xdfc4,	// (0x0000fffa) cell_ai5_widget_pane_g2

0x7b91,	// (0x00009bc7) cell_ai5_widget_pane_g3

0x7ba8,	// (0x00009bde) cell_ai5_widget_pane_g4

0x7bb4,	// (0x00009bea) cell_ai5_widget_pane_g5

0xdfd4,	// (0x0001000a) cell_ai5_widget_pane_g6

0xdfe0,	// (0x00010016) cell_ai5_widget_pane_g7

0x7c14,	// (0x00009c4a) cell_ai5_widget_pane_t1_ParamLimits

0x7c14,	// (0x00009c4a) cell_ai5_widget_pane_t1

0x7c31,	// (0x00009c67) cell_ai5_widget_pane_t2_ParamLimits

0x7c31,	// (0x00009c67) cell_ai5_widget_pane_t2

0x7c49,	// (0x00009c7f) cell_ai5_widget_pane_t3_ParamLimits

0x7c49,	// (0x00009c7f) cell_ai5_widget_pane_t3

0xdfec,	// (0x00010022) cell_ai5_widget_pane_t4_ParamLimits

0xdfec,	// (0x00010022) cell_ai5_widget_pane_t4

0xe009,	// (0x0001003f) cell_ai5_widget_pane_t5_ParamLimits

0xe009,	// (0x0001003f) cell_ai5_widget_pane_t5

0x7c9d,	// (0x00009cd3) cell_ai5_widget_pane_t6_ParamLimits

0x7c9d,	// (0x00009cd3) cell_ai5_widget_pane_t6

0x7caf,	// (0x00009ce5) cell_ai5_widget_pane_t7_ParamLimits

0x7caf,	// (0x00009ce5) cell_ai5_widget_pane_t7

0x7cc8,	// (0x00009cfe) cell_ai5_widget_pane_t8_ParamLimits

0x7cc8,	// (0x00009cfe) cell_ai5_widget_pane_t8

0x0009,

0xfe37,	// (0x00011e6d) cell_ai5_widget_pane_t_ParamLimits

0xfe37,	// (0x00011e6d) cell_ai5_widget_pane_t

0xe028,	// (0x0001005e) grid_ai5_widget_pane

0xece9,	// (0x00010d1f) highlight_cell_ai5_widget_pane_ParamLimits

0xece9,	// (0x00010d1f) highlight_cell_ai5_widget_pane

0xe040,	// (0x00010076) ai5_sk_left_pane

0xe04a,	// (0x00010080) ai5_sk_middle_pane

0xe054,	// (0x0001008a) ai5_sk_right_pane

0x7d48,	// (0x00009d7e) bg_ai5_widget_pane_g1_ParamLimits

0x7d48,	// (0x00009d7e) bg_ai5_widget_pane_g1

0x7d54,	// (0x00009d8a) bg_ai5_widget_pane_g2_ParamLimits

0x7d54,	// (0x00009d8a) bg_ai5_widget_pane_g2

0x7d60,	// (0x00009d96) bg_ai5_widget_pane_g3_ParamLimits

0x7d60,	// (0x00009d96) bg_ai5_widget_pane_g3

0x7d6c,	// (0x00009da2) bg_ai5_widget_pane_g4_ParamLimits

0x7d6c,	// (0x00009da2) bg_ai5_widget_pane_g4

0x7d78,	// (0x00009dae) bg_ai5_widget_pane_g5_ParamLimits

0x7d78,	// (0x00009dae) bg_ai5_widget_pane_g5

0x7d84,	// (0x00009dba) bg_ai5_widget_pane_g6_ParamLimits

0x7d84,	// (0x00009dba) bg_ai5_widget_pane_g6

0x7d90,	// (0x00009dc6) bg_ai5_widget_pane_g7_ParamLimits

0x7d90,	// (0x00009dc6) bg_ai5_widget_pane_g7

0x7d9c,	// (0x00009dd2) bg_ai5_widget_pane_g8_ParamLimits

0x7d9c,	// (0x00009dd2) bg_ai5_widget_pane_g8

0x7da8,	// (0x00009dde) bg_ai5_widget_pane_g9_ParamLimits

0x7da8,	// (0x00009dde) bg_ai5_widget_pane_g9

0x0008,

0xfe4c,	// (0x00011e82) bg_ai5_widget_pane_g_ParamLimits

0xfe4c,	// (0x00011e82) bg_ai5_widget_pane_g

0xe084,	// (0x000100ba) cell_shortcut_ai5_widget_pane_ParamLimits

0xe084,	// (0x000100ba) cell_shortcut_ai5_widget_pane

0x054b,	// (0x00002581) bg_cell_shortcut_ai5_widget_pane

0x7deb,	// (0x00009e21) cell_grid_ai5_widget_pane_g1

0x054b,	// (0x00002581) highlight_cell_shortcut_ai5_widget_pane

0x1622,	// (0x00003658) ai5_sk_left_pane_g1

0x7df4,	// (0x00009e2a) ai5_sk_left_pane_g2

0x7dfc,	// (0x00009e32) ai5_sk_left_pane_g3

0x7e04,	// (0x00009e3a) ai5_sk_left_pane_g4

0x0003,

0xfe5f,	// (0x00011e95) ai5_sk_left_pane_g

0x7e0c,	// (0x00009e42) ai5_sk_left_pane_t1

0x161a,	// (0x00003650) ai5_sk_right_pane_g1

0x7e1a,	// (0x00009e50) ai5_sk_right_pane_g2

0x7e22,	// (0x00009e58) ai5_sk_right_pane_g3

0x7e2a,	// (0x00009e60) ai5_sk_right_pane_g4

0x0003,

0xfe68,	// (0x00011e9e) ai5_sk_right_pane_g

0x7e32,	// (0x00009e68) ai5_sk_right_pane_t1

0x161a,	// (0x00003650) ai5_sk_middle_pane_g1

0x1622,	// (0x00003658) ai5_sk_middle_pane_g2

0x163a,	// (0x00003670) ai5_sk_middle_pane_g3

0x7e22,	// (0x00009e58) ai5_sk_middle_pane_g4

0x7dfc,	// (0x00009e32) ai5_sk_middle_pane_g5

0x7e40,	// (0x00009e76) ai5_sk_middle_pane_g6

0xe095,	// (0x000100cb) ai5_sk_middle_pane_g7

0x0006,

0xfe71,	// (0x00011ea7) ai5_sk_middle_pane_g

0xb28e,	// (0x0000d2c4) aid_touch_area_size_lc0_ParamLimits

0xb28e,	// (0x0000d2c4) aid_touch_area_size_lc0

0x4dec,	// (0x00006e22) cell_hwr_candidate_pane_t1_ParamLimits

0x10c3,	// (0x000030f9) aid_touch_navi_pane

0xb51a,	// (0x0000d550) status_dt_navi_pane_ParamLimits

0xb51a,	// (0x0000d550) status_dt_navi_pane

0xb532,	// (0x0000d568) status_dt_sta_pane_ParamLimits

0xb532,	// (0x0000d568) status_dt_sta_pane

0xe09d,	// (0x000100d3) dt_sta_controll_pane

0xe0aa,	// (0x000100e0) dt_sta_indi_pane

0xe0b7,	// (0x000100ed) dt_sta_title_pane

0xe9df,	// (0x00010a15) bg_dt_sta_indi_pane_ParamLimits

0xe9df,	// (0x00010a15) bg_dt_sta_indi_pane

0xe0c9,	// (0x000100ff) dt_sta_battery_pane

0xe0d1,	// (0x00010107) dt_sta_indi_pane_g1

0x7e92,	// (0x00009ec8) dt_sta_indi_pane_g2

0x7e9b,	// (0x00009ed1) dt_sta_indi_pane_g3

0x0002,

0xfe80,	// (0x00011eb6) dt_sta_indi_pane_g

0x7ea4,	// (0x00009eda) dt_sta_signal_pane

0xece9,	// (0x00010d1f) bg_dt_sta_title_pane_ParamLimits

0xece9,	// (0x00010d1f) bg_dt_sta_title_pane

0x2797,	// (0x000047cd) dt_sta_title_pane_g1

0xe0da,	// (0x00010110) dt_sta_title_pane_t1_ParamLimits

0xe0da,	// (0x00010110) dt_sta_title_pane_t1

0xe69c,	// (0x000106d2) bg_dt_sta_control_pane

0xe0ef,	// (0x00010125) dt_sta_controll_pane_g1

0xe0f8,	// (0x0001012e) bg_dt_sta_title_pane_g1

0xe101,	// (0x00010137) bg_dt_sta_title_pane_g2

0xe10a,	// (0x00010140) bg_dt_sta_title_pane_g3

0x0002,

0xfe87,	// (0x00011ebd) bg_dt_sta_title_pane_g

0x45bb,	// (0x000065f1) bg_dt_sta_indi_pane_g1

0x7ee6,	// (0x00009f1c) dt_sta_signal_pane_g1

0x7eee,	// (0x00009f24) dt_sta_signal_pane_g2

0x0001,

0xfe8e,	// (0x00011ec4) dt_sta_signal_pane_g

0x7ef6,	// (0x00009f2c) dt_sta_battery_pane_g1

0x7eff,	// (0x00009f35) dt_sta_battery_pane_t1

0x45bb,	// (0x000065f1) bg_dt_sta_control_pane_g1

0xf434,	// (0x0001146a) fep_china_uni_eep_pane

0xf43c,	// (0x00011472) fep_china_uni_entry_pane_ParamLimits

0xf44c,	// (0x00011482) popup_fep_china_uni_window_g1_ParamLimits

0xf45c,	// (0x00011492) popup_fep_china_uni_window_g2_ParamLimits

0xf45c,	// (0x00011492) popup_fep_china_uni_window_g2

0x0001,

0xf718,	// (0x0001174e) popup_fep_china_uni_window_g_ParamLimits

0xf718,	// (0x0001174e) popup_fep_china_uni_window_g

0x7f0e,	// (0x00009f44) fep_china_uni_eep_pane_g1

0x7f16,	// (0x00009f4c) fep_china_uni_eep_pane_t1

0x7977,	// (0x000099ad) aid_touch_area_size_smil_player

0x1219,	// (0x0000324f) lc0_clock_pane

0x1400,	// (0x00003436) status_pane_g5_ParamLimits

0x1400,	// (0x00003436) status_pane_g5

0xaca0,	// (0x0000ccd6) popup_keymap_window

0x13be,	// (0x000033f4) status_icon_pane

0x7b91,	// (0x00009bc7) cell_ai5_widget_pane_g3_ParamLimits

0x7ba8,	// (0x00009bde) cell_ai5_widget_pane_g4_ParamLimits

0x7bb4,	// (0x00009bea) cell_ai5_widget_pane_g5_ParamLimits

0x7bd8,	// (0x00009c0e) cell_ai5_widget_pane_g8_ParamLimits

0x7bd8,	// (0x00009c0e) cell_ai5_widget_pane_g8

0x7bec,	// (0x00009c22) cell_ai5_widget_pane_g9_ParamLimits

0x7bec,	// (0x00009c22) cell_ai5_widget_pane_g9

0x7c00,	// (0x00009c36) cell_ai5_widget_pane_g10_ParamLimits

0x7c00,	// (0x00009c36) cell_ai5_widget_pane_g10

0x7f25,	// (0x00009f5b) status_icon_pane_g1

0xe69c,	// (0x000106d2) bg_popup_sub_pane_cp13

0x7f2d,	// (0x00009f63) popup_keymap_window_t1

0xa95a,	// (0x0000c990) control_pane_g6_ParamLimits

0xa95a,	// (0x0000c990) control_pane_g6

0xa967,	// (0x0000c99d) control_pane_g7_ParamLimits

0xa967,	// (0x0000c99d) control_pane_g7

0xa974,	// (0x0000c9aa) control_pane_g8_ParamLimits

0xa974,	// (0x0000c9aa) control_pane_g8

0xe09d,	// (0x000100d3) dt_sta_controll_pane_ParamLimits

0xe0aa,	// (0x000100e0) dt_sta_indi_pane_ParamLimits

0xe0b7,	// (0x000100ed) dt_sta_title_pane_ParamLimits

0xebb2,	// (0x00010be8) aid_size_touch_scroll_bar_cale

0x958e,	// (0x0000b5c4) popup_discreet_window_ParamLimits

0x958e,	// (0x0000b5c4) popup_discreet_window

0x95e0,	// (0x0000b616) popup_sk_window

0x1e71,	// (0x00003ea7) bg_popup_sub_pane_cp28_ParamLimits

0x1e71,	// (0x00003ea7) bg_popup_sub_pane_cp28

0x7f3b,	// (0x00009f71) popup_discreet_window_g1_ParamLimits

0x7f3b,	// (0x00009f71) popup_discreet_window_g1

0xe113,	// (0x00010149) popup_discreet_window_t1_ParamLimits

0xe113,	// (0x00010149) popup_discreet_window_t1

0x7f79,	// (0x00009faf) popup_discreet_window_t2_ParamLimits

0x7f79,	// (0x00009faf) popup_discreet_window_t2

0x0002,

0xfe93,	// (0x00011ec9) popup_discreet_window_t_ParamLimits

0xfe93,	// (0x00011ec9) popup_discreet_window_t

0x7fcb,	// (0x0000a001) popup_sk_window_g1

0x7fd5,	// (0x0000a00b) popup_sk_window_g2

0x0001,

0xfe9a,	// (0x00011ed0) popup_sk_window_g

0xe131,	// (0x00010167) popup_sk_window_t1

0xe13f,	// (0x00010175) popup_sk_window_t1_copy1

0xdfc4,	// (0x0000fffa) cell_ai5_widget_pane_g2_ParamLimits

0x7cda,	// (0x00009d10) cell_ai5_widget_pane_t9_ParamLimits

0x7cda,	// (0x00009d10) cell_ai5_widget_pane_t9

0xe69c,	// (0x000106d2) main_fep_fshwr2_pane

0xe14d,	// (0x00010183) aid_fshwr2_btn_pane

0xe15f,	// (0x00010195) aid_fshwr2_syb_pane

0xe171,	// (0x000101a7) aid_fshwr2_txt_pane

0xe180,	// (0x000101b6) fshwr2_func_candi_pane

0xe19f,	// (0x000101d5) fshwr2_hwr_syb_pane

0xe1ba,	// (0x000101f0) fshwr2_icf_pane

0xe69c,	// (0x000106d2) fshwr2_icf_bg_pane

0x806d,	// (0x0000a0a3) fshwr2_icf_pane_t1_ParamLimits

0x806d,	// (0x0000a0a3) fshwr2_icf_pane_t1

0xf31d,	// (0x00011353) fshwr2_func_candi_pane_g1

0xe1e6,	// (0x0001021c) fshwr2_func_candi_row_pane_ParamLimits

0xe1e6,	// (0x0001021c) fshwr2_func_candi_row_pane

0xe209,	// (0x0001023f) cell_fshwr2_syb_pane_ParamLimits

0xe209,	// (0x0001023f) cell_fshwr2_syb_pane

0x4a3f,	// (0x00006a75) fshwr2_hwr_syb_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) fshwr2_hwr_syb_pane_g1

0xe69c,	// (0x000106d2) bg_popup_call_pane_cp01

0xe21f,	// (0x00010255) fshwr2_func_candi_cell_pane_ParamLimits

0xe21f,	// (0x00010255) fshwr2_func_candi_cell_pane

0xe26a,	// (0x000102a0) fshwr2_func_candi_cell_bg_pane_ParamLimits

0xe26a,	// (0x000102a0) fshwr2_func_candi_cell_bg_pane

0xe276,	// (0x000102ac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xe276,	// (0x000102ac) fshwr2_func_candi_cell_pane_g1

0xe2ad,	// (0x000102e3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xe2ad,	// (0x000102e3) fshwr2_func_candi_cell_pane_t1

0xe69c,	// (0x000106d2) bg_button_pane_cp08

0x812f,	// (0x0000a165) cell_fshwr2_syb_bg_pane

0xe2c8,	// (0x000102fe) cell_fshwr2_syb_bg_pane_g1

0xe2d0,	// (0x00010306) cell_fshwr2_syb_bg_pane_t1

0xece9,	// (0x00010d1f) main_tmo_pane

0xbccc,	// (0x0000dd02) uni_indicator_pane_g1_ParamLimits

0xbce2,	// (0x0000dd18) uni_indicator_pane_g2_ParamLimits

0xbcf8,	// (0x0000dd2e) uni_indicator_pane_g3_ParamLimits

0x2b11,	// (0x00004b47) uni_indicator_pane_g4_ParamLimits

0x2b11,	// (0x00004b47) uni_indicator_pane_g4

0x2b25,	// (0x00004b5b) uni_indicator_pane_g5_ParamLimits

0x2b25,	// (0x00004b5b) uni_indicator_pane_g5

0x2b25,	// (0x00004b5b) uni_indicator_pane_g6_ParamLimits

0x2b25,	// (0x00004b5b) uni_indicator_pane_g6

0xf917,	// (0x0001194d) uni_indicator_pane_g_ParamLimits

0xce9c,	// (0x0000eed2) popup_tmo_note_window_ParamLimits

0xce9c,	// (0x0000eed2) popup_tmo_note_window

0xece9,	// (0x00010d1f) fshwr2_bg_pane

0xe29e,	// (0x000102d4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xe29e,	// (0x000102d4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe9f,	// (0x00011ed5) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe9f,	// (0x00011ed5) fshwr2_func_candi_cell_pane_g

0x45bb,	// (0x000065f1) bg_popup_window_pane_cp01

0x814e,	// (0x0000a184) bg_popup_window_pane_g1_cp01

0x8157,	// (0x0000a18d) bg_popup_window_pane_cp22_ParamLimits

0x8157,	// (0x0000a18d) bg_popup_window_pane_cp22

0xe2df,	// (0x00010315) listscroll_tmo_link_pane_ParamLimits

0xe2df,	// (0x00010315) listscroll_tmo_link_pane

0x81a5,	// (0x0000a1db) popup_tmo_note_window_g1_ParamLimits

0x81a5,	// (0x0000a1db) popup_tmo_note_window_g1

0xe31f,	// (0x00010355) tmo_note_info_pane_ParamLimits

0xe31f,	// (0x00010355) tmo_note_info_pane

0xe339,	// (0x0001036f) list_tmo_note_info_pane_g1_ParamLimits

0xe339,	// (0x0001036f) list_tmo_note_info_pane_g1

0x81e3,	// (0x0000a219) list_tmo_note_info_pane_g2_ParamLimits

0x81e3,	// (0x0000a219) list_tmo_note_info_pane_g2

0x0001,

0xfea4,	// (0x00011eda) list_tmo_note_info_pane_g_ParamLimits

0xfea4,	// (0x00011eda) list_tmo_note_info_pane_g

0x81ff,	// (0x0000a235) list_tmo_note_info_text_pane_ParamLimits

0x81ff,	// (0x0000a235) list_tmo_note_info_text_pane

0x8280,	// (0x0000a2b6) list_tmo_link_pane

0x828d,	// (0x0000a2c3) scroll_pane_cp20

0x829a,	// (0x0000a2d0) list_single_tmo_link_pane_ParamLimits

0x829a,	// (0x0000a2d0) list_single_tmo_link_pane

0x82aa,	// (0x0000a2e0) list_single_tmo_link_pane_t1

0x82b8,	// (0x0000a2ee) list_tmo_note_info_text_pane_t1_ParamLimits

0x82b8,	// (0x0000a2ee) list_tmo_note_info_text_pane_t1

0xa2ba,	// (0x0000c2f0) aid_size_touch_scroll_bar_cp01_ParamLimits

0xa2ba,	// (0x0000c2f0) aid_size_touch_scroll_bar_cp01

0xa1ba,	// (0x0000c1f0) aid_size_touch_slider_marker

0x95d0,	// (0x0000b606) popup_settings_window_ParamLimits

0x95d0,	// (0x0000b606) popup_settings_window

0x0ae6,	// (0x00002b1c) popup_candi_list_indi_window

0x10c3,	// (0x000030f9) aid_touch_navi_pane_ParamLimits

0x6419,	// (0x0000844f) rs_clock_indi_pane

0x6422,	// (0x00008458) sctrl_sk_bottom_pane_ParamLimits

0x6433,	// (0x00008469) sctrl_sk_top_pane_ParamLimits

0xd6bb,	// (0x0000f6f1) popup_fep_tooltip_window

0xdf90,	// (0x0000ffc6) aid_size_cell_widget_grid_ParamLimits

0xdfaf,	// (0x0000ffe5) cell_ai5_widget_pane_g1_ParamLimits

0xdfaf,	// (0x0000ffe5) cell_ai5_widget_pane_g1

0xdfd4,	// (0x0001000a) cell_ai5_widget_pane_g6_ParamLimits

0xdfe0,	// (0x00010016) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe22,	// (0x00011e58) cell_ai5_widget_pane_g_ParamLimits

0xfe22,	// (0x00011e58) cell_ai5_widget_pane_g

0x7cfe,	// (0x00009d34) cell_ai5_widget_pane_t10_ParamLimits

0x7cfe,	// (0x00009d34) cell_ai5_widget_pane_t10

0xe028,	// (0x0001005e) grid_ai5_widget_pane_ParamLimits

0xe05e,	// (0x00010094) cell_contacts_ai5_widget_pane_ParamLimits

0xe05e,	// (0x00010094) cell_contacts_ai5_widget_pane

0x7f8e,	// (0x00009fc4) popup_discreet_window_t3_ParamLimits

0x7f8e,	// (0x00009fc4) popup_discreet_window_t3

0xe1d2,	// (0x00010208) popup_fshwr2_char_preview_window_ParamLimits

0xe1d2,	// (0x00010208) popup_fshwr2_char_preview_window

0xe350,	// (0x00010386) tmo_note_info_pane_t1

0xe365,	// (0x0001039b) tmo_note_info_pane_t2

0xe37c,	// (0x000103b2) tmo_note_info_pane_t3

0x825c,	// (0x0000a292) tmo_note_info_pane_t4

0x826e,	// (0x0000a2a4) tmo_note_info_pane_t5

0x0004,

0xfea9,	// (0x00011edf) tmo_note_info_pane_t

0x8280,	// (0x0000a2b6) list_tmo_link_pane_ParamLimits

0x828d,	// (0x0000a2c3) scroll_pane_cp20_ParamLimits

0xe69c,	// (0x000106d2) bg_popup_fep_char_preview_window_cp01

0x82d1,	// (0x0000a307) popup_fshwr2_char_preview_window_t1

0x82df,	// (0x0000a315) popup_candi_list_indi_window_g1

0x82e8,	// (0x0000a31e) bg_cell_contacts_ai5_widget_pane

0x82f4,	// (0x0000a32a) cell_contacts_ai5_widget_pane_g1

0x50f9,	// (0x0000712f) cell_contacts_ai5_widget_pane_g2

0x8309,	// (0x0000a33f) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfeb4,	// (0x00011eea) cell_contacts_ai5_widget_pane_g

0x8315,	// (0x0000a34b) cell_contacts_ai5_widget_pane_t1

0xece9,	// (0x00010d1f) highlight_cell_shortcut_ai5_widget_pane_cp01

0x838c,	// (0x0000a3c2) settings_container_pane

0x054b,	// (0x00002581) listscroll_set_pane_copy1

0x3955,	// (0x0000598b) scroll_pane_cp121_copy1

0x8398,	// (0x0000a3ce) set_content_pane_copy1

0xe3f6,	// (0x0001042c) aid_height_set_list_copy1_ParamLimits

0xe3f6,	// (0x0001042c) aid_height_set_list_copy1

0x2e0d,	// (0x00004e43) aid_size_parent_copy1_ParamLimits

0x2e0d,	// (0x00004e43) aid_size_parent_copy1

0xe402,	// (0x00010438) button_value_adjust_pane_cp6_copy1_ParamLimits

0xe402,	// (0x00010438) button_value_adjust_pane_cp6_copy1

0x0abe,	// (0x00002af4) list_highlight_pane_cp2_copy1_ParamLimits

0x0abe,	// (0x00002af4) list_highlight_pane_cp2_copy1

0xe416,	// (0x0001044c) list_set_pane_copy1_ParamLimits

0xe416,	// (0x0001044c) list_set_pane_copy1

0xe391,	// (0x000103c7) main_pane_set_t1_copy1_ParamLimits

0xe391,	// (0x000103c7) main_pane_set_t1_copy1

0xe3cb,	// (0x00010401) main_pane_set_t2_copy1_ParamLimits

0xe3cb,	// (0x00010401) main_pane_set_t2_copy1

0xe4c3,	// (0x000104f9) main_pane_set_t3_copy1

0xe4d1,	// (0x00010507) main_pane_set_t4_copy1

0xe3ea,	// (0x00010420) set_content_pane_g1_copy1_ParamLimits

0xe3ea,	// (0x00010420) set_content_pane_g1_copy1

0xe4df,	// (0x00010515) setting_code_pane_copy1

0x8491,	// (0x0000a4c7) setting_slider_graphic_pane_copy1

0x8491,	// (0x0000a4c7) setting_slider_pane_copy1

0x8491,	// (0x0000a4c7) setting_text_pane_copy1

0x8491,	// (0x0000a4c7) setting_volume_pane_copy1

0xe4df,	// (0x00010515) settings_code_pane_cp2_copy1

0xe4e7,	// (0x0001051d) settings_code_pane_cp_copy1_ParamLimits

0xe4e7,	// (0x0001051d) settings_code_pane_cp_copy1

0xe4fb,	// (0x00010531) volume_set_pane_copy1

0xe503,	// (0x00010539) volume_set_pane_g10_copy1

0xe50b,	// (0x00010541) volume_set_pane_g1_copy1

0xe513,	// (0x00010549) volume_set_pane_g2_copy1

0xe51b,	// (0x00010551) volume_set_pane_g3_copy1

0xe523,	// (0x00010559) volume_set_pane_g4_copy1

0xe52b,	// (0x00010561) volume_set_pane_g5_copy1

0xe533,	// (0x00010569) volume_set_pane_g6_copy1

0xe53b,	// (0x00010571) volume_set_pane_g7_copy1

0xe543,	// (0x00010579) volume_set_pane_g8_copy1

0xe54b,	// (0x00010581) volume_set_pane_g9_copy1

0xe89b,	// (0x000108d1) bg_set_opt_pane_cp_copy1_ParamLimits

0xe89b,	// (0x000108d1) bg_set_opt_pane_cp_copy1

0xe553,	// (0x00010589) setting_slider_pane_t1_copy1_ParamLimits

0xe553,	// (0x00010589) setting_slider_pane_t1_copy1

0xe571,	// (0x000105a7) setting_slider_pane_t2_copy1_ParamLimits

0xe571,	// (0x000105a7) setting_slider_pane_t2_copy1

0xe58b,	// (0x000105c1) setting_slider_pane_t3_copy1_ParamLimits

0xe58b,	// (0x000105c1) setting_slider_pane_t3_copy1

0xe5a3,	// (0x000105d9) slider_set_pane_copy1_ParamLimits

0xe5a3,	// (0x000105d9) slider_set_pane_copy1

0xed7b,	// (0x00010db1) set_opt_bg_pane_g1_copy2

0xed83,	// (0x00010db9) set_opt_bg_pane_g2_copy2

0x856b,	// (0x0000a5a1) set_opt_bg_pane_g3_copy2

0xed93,	// (0x00010dc9) set_opt_bg_pane_g4_copy2

0xed9b,	// (0x00010dd1) set_opt_bg_pane_g5_copy2

0xeda3,	// (0x00010dd9) set_opt_bg_pane_g6_copy2

0xe5b9,	// (0x000105ef) set_opt_bg_pane_g7_copy2

0x857d,	// (0x0000a5b3) set_opt_bg_pane_g8_copy2

0x8587,	// (0x0000a5bd) set_opt_bg_pane_g9_copy2

0xe5c1,	// (0x000105f7) aid_size_touch_slider_mark_copy1_ParamLimits

0xe5c1,	// (0x000105f7) aid_size_touch_slider_mark_copy1

0xe5d5,	// (0x0001060b) slider_set_pane_g1_copy1

0x85ae,	// (0x0000a5e4) slider_set_pane_g2_copy1

0xbe19,	// (0x0000de4f) slider_set_pane_g3_copy1_ParamLimits

0xbe19,	// (0x0000de4f) slider_set_pane_g3_copy1

0xbe2d,	// (0x0000de63) slider_set_pane_g4_copy1_ParamLimits

0xbe2d,	// (0x0000de63) slider_set_pane_g4_copy1

0xbe45,	// (0x0000de7b) slider_set_pane_g5_copy1_ParamLimits

0xbe45,	// (0x0000de7b) slider_set_pane_g5_copy1

0xbe19,	// (0x0000de4f) slider_set_pane_g6_copy1_ParamLimits

0xbe19,	// (0x0000de4f) slider_set_pane_g6_copy1

0xe5de,	// (0x00010614) slider_set_pane_g7_copy1_ParamLimits

0xe5de,	// (0x00010614) slider_set_pane_g7_copy1

0xe81f,	// (0x00010855) bg_set_opt_pane_cp2_copy1

0xe5f4,	// (0x0001062a) setting_slider_graphic_pane_g1_copy1

0xe5fd,	// (0x00010633) setting_slider_graphic_pane_t1_copy1

0xe60d,	// (0x00010643) setting_slider_graphic_pane_t2_copy1

0xe61d,	// (0x00010653) slider_set_pane_cp_copy1

0x8605,	// (0x0000a63b) input_focus_pane_cp1_copy1

0x860e,	// (0x0000a644) list_set_text_pane_copy1

0x8616,	// (0x0000a64c) setting_text_pane_g1_copy1

0x861f,	// (0x0000a655) set_text_pane_t1_copy1

0x8605,	// (0x0000a63b) input_focus_pane_cp2_copy1

0x8616,	// (0x0000a64c) setting_code_pane_g1_copy1

0x863a,	// (0x0000a670) setting_code_pane_t1_copy1

0x373c,	// (0x00005772) list_set_graphic_pane_copy1

0xe81f,	// (0x00010855) bg_set_opt_pane_cp4_copy1

0x0256,	// (0x0000228c) list_set_graphic_pane_g1_copy1_ParamLimits

0x0256,	// (0x0000228c) list_set_graphic_pane_g1_copy1

0x8648,	// (0x0000a67e) list_set_graphic_pane_g2_copy1

0x026e,	// (0x000022a4) list_set_graphic_pane_t1_copy1_ParamLimits

0x026e,	// (0x000022a4) list_set_graphic_pane_t1_copy1

0x45bb,	// (0x000065f1) rs_clock_indi_pane_g1

0x8650,	// (0x0000a686) rs_clock_indi_pane_t1

0x865e,	// (0x0000a694) rs_indi_pane

0x8666,	// (0x0000a69c) rs_indi_pane_g1

0x866f,	// (0x0000a6a5) rs_indi_pane_g2

0x82df,	// (0x0000a315) rs_indi_pane_g3

0x0002,

0xfebb,	// (0x00011ef1) rs_indi_pane_g

0x054b,	// (0x00002581) bg_popup_preview_window_pane_cp03

0x8678,	// (0x0000a6ae) popup_fep_tooltip_window_t1

0xc99a,	// (0x0000e9d0) popup_note2_window_g2_ParamLimits

0xc99a,	// (0x0000e9d0) popup_note2_window_g2

0x0001,

0xfc5b,	// (0x00011c91) popup_note2_window_g_ParamLimits

0xfc5b,	// (0x00011c91) popup_note2_window_g

0x5df7,	// (0x00007e2d) bg_popup_sub_pane_cp11_ParamLimits

0x5e04,	// (0x00007e3a) cell_ai3_links_pane_g1_ParamLimits

0x5e1b,	// (0x00007e51) cell_ai3_links_pane_t1

0x861f,	// (0x0000a655) set_text_pane_t1_copy1_ParamLimits

0x045c,	// (0x00002492) cell_graphic_popup_pane_cp2_ParamLimits

0x045c,	// (0x00002492) cell_graphic_popup_pane_cp2

0xe62d,	// (0x00010663) cell_graphic_popup_pane_g1_cp2

0xeb35,	// (0x00010b6b) cell_graphic_popup_pane_g2_cp2

0x868e,	// (0x0000a6c4) cell_graphic_popup_pane_g3_cp2

0xe635,	// (0x0001066b) cell_graphic_popup_pane_t2_cp2

0xeb46,	// (0x00010b7c) grid_highlight_pane_cp3_cp2

0xf173,	// (0x000111a9) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xece9,	// (0x00010d1f) main_tmo_pane_ParamLimits

0xce90,	// (0x0000eec6) popup_tmo_big_image_note_window

0x7b5b,	// (0x00009b91) cell_ai5_widget_list_pane

0xdfa6,	// (0x0000ffdc) cell_ai5_widget_lrg_icon_pane

0xe350,	// (0x00010386) tmo_note_info_pane_t1_ParamLimits

0xe365,	// (0x0001039b) tmo_note_info_pane_t2_ParamLimits

0xe37c,	// (0x000103b2) tmo_note_info_pane_t3_ParamLimits

0x825c,	// (0x0000a292) tmo_note_info_pane_t4_ParamLimits

0x826e,	// (0x0000a2a4) tmo_note_info_pane_t5_ParamLimits

0xfea9,	// (0x00011edf) tmo_note_info_pane_t_ParamLimits

0x838c,	// (0x0000a3c2) settings_container_pane_ParamLimits

0xe625,	// (0x0001065b) indicator_popup_pane_cp5

0xe625,	// (0x0001065b) indicator_popup_pane_cp6

0x373c,	// (0x00005772) list_set_graphic_pane_copy1_ParamLimits

0xe69c,	// (0x000106d2) bg_popup_window_pane_cp23

0x86a4,	// (0x0000a6da) popup_tmo_big_image_note_window_g1

0x86ad,	// (0x0000a6e3) popup_tmo_big_image_note_window_t1

0x86bd,	// (0x0000a6f3) popup_tmo_big_image_note_window_t2

0x86cd,	// (0x0000a703) popup_tmo_big_image_note_window_t3

0x0002,

0xfec2,	// (0x00011ef8) popup_tmo_big_image_note_window_t

0x45bb,	// (0x000065f1) cell_ai5_widget_lrg_icon_pane_g1

0x86dd,	// (0x0000a713) cell_ai5_widget_lrg_icon_pane_t1

0xe643,	// (0x00010679) cell_ai5_widget_list_row_pane_ParamLimits

0xe643,	// (0x00010679) cell_ai5_widget_list_row_pane

0x8702,	// (0x0000a738) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x8702,	// (0x0000a738) cell_ai5_widget_list_row_pane_g1

0xe65a,	// (0x00010690) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xe65a,	// (0x00010690) cell_ai5_widget_list_row_pane_t1

0x873a,	// (0x0000a770) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x873a,	// (0x0000a770) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfec9,	// (0x00011eff) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfec9,	// (0x00011eff) cell_ai5_widget_list_row_pane_t

0xe69c,	// (0x000106d2) main_fep_vtchi_ss_pane

0x877e,	// (0x0000a7b4) popup_fep_char_pre_window

0x8786,	// (0x0000a7bc) popup_fep_ituss_window

0x87a7,	// (0x0000a7dd) popup_fep_vkbss_window

0x87c6,	// (0x0000a7fc) grid_vkbss_keypad_pane_ParamLimits

0x87c6,	// (0x0000a7fc) grid_vkbss_keypad_pane

0x87d6,	// (0x0000a80c) ituss_keypad_pane

0x87f1,	// (0x0000a827) aid_vkbss_key_offset_ParamLimits

0x87f1,	// (0x0000a827) aid_vkbss_key_offset

0x87fd,	// (0x0000a833) cell_vkbss_key_pane_ParamLimits

0x87fd,	// (0x0000a833) cell_vkbss_key_pane

0x13da,	// (0x00003410) bg_cell_vkbss_key_g1_ParamLimits

0x13da,	// (0x00003410) bg_cell_vkbss_key_g1

0x8813,	// (0x0000a849) cell_vkbss_key_3p_pane_ParamLimits

0x8813,	// (0x0000a849) cell_vkbss_key_3p_pane

0x882d,	// (0x0000a863) cell_vkbss_key_g1_ParamLimits

0x882d,	// (0x0000a863) cell_vkbss_key_g1

0x8847,	// (0x0000a87d) cell_vkbss_key_t1_ParamLimits

0x8847,	// (0x0000a87d) cell_vkbss_key_t1

0x8872,	// (0x0000a8a8) cell_ituss_key_pane_ParamLimits

0x8872,	// (0x0000a8a8) cell_ituss_key_pane

0x8883,	// (0x0000a8b9) bg_cell_ituss_key_g1_ParamLimits

0x8883,	// (0x0000a8b9) bg_cell_ituss_key_g1

0x888f,	// (0x0000a8c5) cell_ituss_key_pane_g1_ParamLimits

0x888f,	// (0x0000a8c5) cell_ituss_key_pane_g1

0x88a9,	// (0x0000a8df) cell_ituss_key_pane_g2_ParamLimits

0x88a9,	// (0x0000a8df) cell_ituss_key_pane_g2

0x0002,

0xfed0,	// (0x00011f06) cell_ituss_key_pane_g_ParamLimits

0xfed0,	// (0x00011f06) cell_ituss_key_pane_g

0x88e7,	// (0x0000a91d) cell_ituss_key_t1_ParamLimits

0x88e7,	// (0x0000a91d) cell_ituss_key_t1

0x8921,	// (0x0000a957) cell_ituss_key_t2_ParamLimits

0x8921,	// (0x0000a957) cell_ituss_key_t2

0x8952,	// (0x0000a988) cell_ituss_key_t3_ParamLimits

0x8952,	// (0x0000a988) cell_ituss_key_t3

0x8921,	// (0x0000a957) cell_ituss_key_t4_ParamLimits

0x8921,	// (0x0000a957) cell_ituss_key_t4

0x0004,

0xfed7,	// (0x00011f0d) cell_ituss_key_t_ParamLimits

0xfed7,	// (0x00011f0d) cell_ituss_key_t

0x8995,	// (0x0000a9cb) cell_vkbss_key_3p_pane_g1

0x899d,	// (0x0000a9d3) cell_vkbss_key_3p_pane_g2

0x89a5,	// (0x0000a9db) cell_vkbss_key_3p_pane_g3

0x0002,

0xfee2,	// (0x00011f18) cell_vkbss_key_3p_pane_g

0xe69c,	// (0x000106d2) bg_popup_fep_char_preview_window_cp02

0x89ad,	// (0x0000a9e3) popup_fep_char_pre_window_t1

0xdf86,	// (0x0000ffbc) main_ai5_sk_pane

0x82e8,	// (0x0000a31e) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x82f4,	// (0x0000a32a) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x50f9,	// (0x0000712f) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x8309,	// (0x0000a33f) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfeb4,	// (0x00011eea) cell_contacts_ai5_widget_pane_g_ParamLimits

0x8315,	// (0x0000a34b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xece9,	// (0x00010d1f) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xe68b,	// (0x000106c1) main_ai5_sk_pane_g1

0xb91d,	// (0x0000d953) popup_query_code_window_g1

0x879c,	// (0x0000a7d2) popup_fep_vkb_icf_pane

0x87b0,	// (0x0000a7e6) popup_fep_vtchi_icf_pane

0x89c5,	// (0x0000a9fb) bg_icf_pane

0x89d1,	// (0x0000aa07) list_vkb_icf_pane

0x89e0,	// (0x0000aa16) bg_icf_pane_cp01

0x89f3,	// (0x0000aa29) vtchi_icf_list_pane

0x8a03,	// (0x0000aa39) list_vkb_icf_pane_t1_ParamLimits

0x8a03,	// (0x0000aa39) list_vkb_icf_pane_t1

0x8a19,	// (0x0000aa4f) vtchi_icf_list_pane_t1_ParamLimits

0x8a19,	// (0x0000aa4f) vtchi_icf_list_pane_t1

0x8786,	// (0x0000a7bc) popup_fep_ituss_window_ParamLimits

0x87b0,	// (0x0000a7e6) popup_fep_vtchi_icf_pane_ParamLimits

0x87d6,	// (0x0000a80c) ituss_keypad_pane_ParamLimits

0x87e5,	// (0x0000a81b) ituss_sks_pane

0x89c5,	// (0x0000a9fb) bg_icf_pane_ParamLimits

0x8762,	// (0x0000a798) icf_edit_indi_pane_ParamLimits

0x8762,	// (0x0000a798) icf_edit_indi_pane

0x89d1,	// (0x0000aa07) list_vkb_icf_pane_ParamLimits

0x89e0,	// (0x0000aa16) bg_icf_pane_cp01_ParamLimits

0x8771,	// (0x0000a7a7) icf_edit_indi_pane_cp01_ParamLimits

0x8771,	// (0x0000a7a7) icf_edit_indi_pane_cp01

0x89fb,	// (0x0000aa31) vtchi_query_pane

0x4a3f,	// (0x00006a75) icf_edit_indi_pane_g1_ParamLimits

0x4a3f,	// (0x00006a75) icf_edit_indi_pane_g1

0x8a9e,	// (0x0000aad4) icf_edit_indi_pane_g2_ParamLimits

0x8a9e,	// (0x0000aad4) icf_edit_indi_pane_g2

0x0001,

0xfefa,	// (0x00011f30) icf_edit_indi_pane_g_ParamLimits

0xfefa,	// (0x00011f30) icf_edit_indi_pane_g

0x8aad,	// (0x0000aae3) icf_edit_indi_pane_t1

0x8a34,	// (0x0000aa6a) bg_input_focus_pane_cp042

0xeba9,	// (0x00010bdf) vtchi_button_pane

0x8a3d,	// (0x0000aa73) vtchi_query_pane_t1

0x8a4b,	// (0x0000aa81) vtchi_query_pane_t2

0x8a59,	// (0x0000aa8f) vtchi_query_pane_t3

0x0002,

0xfee9,	// (0x00011f1f) vtchi_query_pane_t

0xe69c,	// (0x000106d2) bg_button_pane_cp13

0x8a67,	// (0x0000aa9d) vtchi_button_pane_g1

0x8a6f,	// (0x0000aaa5) ituss_sks_pane_g1

0x8a7a,	// (0x0000aab0) ituss_sks_pane_g2

0x0001,

0xfef0,	// (0x00011f26) ituss_sks_pane_g

0x8a82,	// (0x0000aab8) ituss_sks_pane_t1

0x8a90,	// (0x0000aac6) ituss_sks_pane_t2

0x0001,

0xfef5,	// (0x00011f2b) ituss_sks_pane_t

0x3f8c,	// (0x00005fc2) indicator_nsta_pane_cp_g1

0x3f95,	// (0x00005fcb) indicator_nsta_pane_cp_g2

0x3f9d,	// (0x00005fd3) indicator_nsta_pane_cp_g3

0x3fa5,	// (0x00005fdb) indicator_nsta_pane_cp_g4

0x3fad,	// (0x00005fe3) indicator_nsta_pane_cp_g5

0x3fad,	// (0x00005fe3) indicator_nsta_pane_cp_g6

0x0005,

0xfaa5,	// (0x00011adb) indicator_nsta_pane_cp_g

0xdce8,	// (0x0000fd1e) cell_graphic2_pane_t2_ParamLimits

0xdce8,	// (0x0000fd1e) cell_graphic2_pane_t2

0x0001,

0xfdab,	// (0x00011de1) cell_graphic2_pane_t_ParamLimits

0xfdab,	// (0x00011de1) cell_graphic2_pane_t

0xdd22,	// (0x0000fd58) cell_graphic2_control_pane_t1

0xa580,	// (0x0000c5b6) signal_pane_g3_ParamLimits

0xa580,	// (0x0000c5b6) signal_pane_g3

0xa594,	// (0x0000c5ca) signal_pane_g4_ParamLimits

0xa594,	// (0x0000c5ca) signal_pane_g4

0x874c,	// (0x0000a782) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x874c,	// (0x0000a782) cell_ai5_widget_list_row_pane_t3

0x88d5,	// (0x0000a90b) cell_ituss_key_pane_t1_ParamLimits

0x88d5,	// (0x0000a90b) cell_ituss_key_pane_t1

0x18c0,	// (0x000038f6) form_field_data_wide_pane_vc_t2_ParamLimits

0x18c0,	// (0x000038f6) form_field_data_wide_pane_vc_t2

0x18d4,	// (0x0000390a) form_field_data_wide_pane_vc_t3_ParamLimits

0x18d4,	// (0x0000390a) form_field_data_wide_pane_vc_t3

0x0002,

0xf7ff,	// (0x00011835) form_field_data_wide_pane_vc_t_ParamLimits

0xf7ff,	// (0x00011835) form_field_data_wide_pane_vc_t

0x3c54,	// (0x00005c8a) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3c54,	// (0x00005c8a) form_field_slider_wide_pane_vc_t3

0x3d32,	// (0x00005d68) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3d32,	// (0x00005d68) form_field_popup_wide_pane_vc_t2

0x3d49,	// (0x00005d7f) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3d49,	// (0x00005d7f) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa94,	// (0x00011aca) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa94,	// (0x00011aca) form_field_popup_wide_pane_vc_t

0xe14d,	// (0x00010183) aid_fshwr2_btn_pane_ParamLimits

0xe15f,	// (0x00010195) aid_fshwr2_syb_pane_ParamLimits

0xe171,	// (0x000101a7) aid_fshwr2_txt_pane_ParamLimits

0xece9,	// (0x00010d1f) fshwr2_bg_pane_ParamLimits

0xe180,	// (0x000101b6) fshwr2_func_candi_pane_ParamLimits

0xe19f,	// (0x000101d5) fshwr2_hwr_syb_pane_ParamLimits

0xe1ba,	// (0x000101f0) fshwr2_icf_pane_ParamLimits

0x3bc0,	// (0x00005bf6) list_double_graphic_pane_vc_g4_ParamLimits

0x3bc0,	// (0x00005bf6) list_double_graphic_pane_vc_g4

0x88c9,	// (0x0000a8ff) cell_ituss_key_pane_g3_ParamLimits

0x88c9,	// (0x0000a8ff) cell_ituss_key_pane_g3

0x8983,	// (0x0000a9b9) cell_ituss_key_t5_ParamLimits

0x8983,	// (0x0000a9b9) cell_ituss_key_t5
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

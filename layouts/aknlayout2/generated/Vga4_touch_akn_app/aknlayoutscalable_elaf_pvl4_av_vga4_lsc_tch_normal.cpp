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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x0000048b };

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
0xaf3d,	// (0x0000b3c8) Screen

0xaf49,	// (0x0000b3d4) application_window_ParamLimits

0xaf49,	// (0x0000b3d4) application_window

0xf31a,	// (0x0000f7a5) screen_g1

0xaf81,	// (0x0000b40c) area_bottom_pane_ParamLimits

0xaf81,	// (0x0000b40c) area_bottom_pane

0xf344,	// (0x0000f7cf) area_top_pane_ParamLimits

0xf344,	// (0x0000f7cf) area_top_pane

0xf3d8,	// (0x0000f863) main_pane_ParamLimits

0xf3d8,	// (0x0000f863) main_pane

0xf493,	// (0x0000f91e) misc_graphics

0xc74b,	// (0x0000cbd6) battery_pane_ParamLimits

0xc74b,	// (0x0000cbd6) battery_pane

0x3cd8,	// (0x00004163) bg_status_flat_pane_g8

0x3ce0,	// (0x0000416b) bg_status_flat_pane_g9

0x2e89,	// (0x00003314) context_pane_ParamLimits

0x2e89,	// (0x00003314) context_pane

0xc8c2,	// (0x0000cd4d) navi_pane_ParamLimits

0xc8c2,	// (0x0000cd4d) navi_pane

0xc94b,	// (0x0000cdd6) signal_pane_ParamLimits

0xc94b,	// (0x0000cdd6) signal_pane

0x0008,

0xf879,	// (0x0000fd04) bg_status_flat_pane_g

0xc9db,	// (0x0000ce66) status_pane_g1_ParamLimits

0xc9db,	// (0x0000ce66) status_pane_g1

0xc9f1,	// (0x0000ce7c) status_pane_g2_ParamLimits

0xc9f1,	// (0x0000ce7c) status_pane_g2

0x30c9,	// (0x00003554) status_pane_g3_ParamLimits

0x30c9,	// (0x00003554) status_pane_g3

0x0004,

0xf7b3,	// (0x0000fc3e) status_pane_g_ParamLimits

0xf7b3,	// (0x0000fc3e) status_pane_g

0xc9fd,	// (0x0000ce88) title_pane_ParamLimits

0xc9fd,	// (0x0000ce88) title_pane

0xca5a,	// (0x0000cee5) uni_indicator_pane_ParamLimits

0xca5a,	// (0x0000cee5) uni_indicator_pane

0x26ae,	// (0x00002b39) bg_list_pane_ParamLimits

0x26ae,	// (0x00002b39) bg_list_pane

0xbf88,	// (0x0000c413) find_pane

0xbf90,	// (0x0000c41b) listscroll_app_pane_ParamLimits

0xbf90,	// (0x0000c41b) listscroll_app_pane

0x26e2,	// (0x00002b6d) listscroll_form_pane

0xbf9c,	// (0x0000c427) listscroll_gen_pane_ParamLimits

0xbf9c,	// (0x0000c427) listscroll_gen_pane

0x26e2,	// (0x00002b6d) listscroll_set_pane

0x4b01,	// (0x00004f8c) main_idle_act_pane

0x2183,	// (0x0000260e) main_idle_trad_pane

0x2183,	// (0x0000260e) main_list_empty_pane

0x2710,	// (0x00002b9b) main_midp_pane

0x271c,	// (0x00002ba7) main_pane_g1_ParamLimits

0x271c,	// (0x00002ba7) main_pane_g1

0xbfb0,	// (0x0000c43b) popup_ai_message_window_ParamLimits

0xbfb0,	// (0x0000c43b) popup_ai_message_window

0xc050,	// (0x0000c4db) popup_fep_china_uni_window_ParamLimits

0xc050,	// (0x0000c4db) popup_fep_china_uni_window

0x2842,	// (0x00002ccd) popup_fep_japan_candidate_window_ParamLimits

0x2842,	// (0x00002ccd) popup_fep_japan_candidate_window

0x286c,	// (0x00002cf7) popup_fep_japan_predictive_window_ParamLimits

0x286c,	// (0x00002cf7) popup_fep_japan_predictive_window

0xc0b0,	// (0x0000c53b) popup_find_window

0xc0cd,	// (0x0000c558) popup_grid_graphic_window_ParamLimits

0xc0cd,	// (0x0000c558) popup_grid_graphic_window

0x28dd,	// (0x00002d68) popup_large_graphic_colour_window

0xc171,	// (0x0000c5fc) popup_menu_window_ParamLimits

0xc171,	// (0x0000c5fc) popup_menu_window

0xc35d,	// (0x0000c7e8) popup_note_image_window

0xc31d,	// (0x0000c7a8) popup_note_wait_window_ParamLimits

0xc31d,	// (0x0000c7a8) popup_note_wait_window

0xc375,	// (0x0000c800) popup_note_window_ParamLimits

0xc375,	// (0x0000c800) popup_note_window

0xc423,	// (0x0000c8ae) popup_query_code_window_ParamLimits

0xc423,	// (0x0000c8ae) popup_query_code_window

0x2b49,	// (0x00002fd4) popup_query_data_code_window_ParamLimits

0x2b49,	// (0x00002fd4) popup_query_data_code_window

0xc463,	// (0x0000c8ee) popup_query_data_window_ParamLimits

0xc463,	// (0x0000c8ee) popup_query_data_window

0xc4f7,	// (0x0000c982) popup_query_sat_info_window_ParamLimits

0xc4f7,	// (0x0000c982) popup_query_sat_info_window

0xc5a2,	// (0x0000ca2d) popup_snote_single_graphic_window_ParamLimits

0xc5a2,	// (0x0000ca2d) popup_snote_single_graphic_window

0xc5a2,	// (0x0000ca2d) popup_snote_single_text_window_ParamLimits

0xc5a2,	// (0x0000ca2d) popup_snote_single_text_window

0x2be4,	// (0x0000306f) popup_sub_window_general

0x2d2a,	// (0x000031b5) popup_window_general_ParamLimits

0x2d2a,	// (0x000031b5) popup_window_general

0x2d43,	// (0x000031ce) power_save_pane

0xbe1b,	// (0x0000c2a6) control_pane_g1_ParamLimits

0xbe1b,	// (0x0000c2a6) control_pane_g1

0x2522,	// (0x000029ad) control_pane_g2_ParamLimits

0x2522,	// (0x000029ad) control_pane_g2

0x2547,	// (0x000029d2) control_pane_g3_ParamLimits

0x2547,	// (0x000029d2) control_pane_g3

0x0007,

0xf79b,	// (0x0000fc26) control_pane_g_ParamLimits

0xf79b,	// (0x0000fc26) control_pane_g

0xbe81,	// (0x0000c30c) control_pane_t1_ParamLimits

0xbe81,	// (0x0000c30c) control_pane_t1

0xbedf,	// (0x0000c36a) control_pane_t2_ParamLimits

0xbedf,	// (0x0000c36a) control_pane_t2

0x0002,

0xf7ac,	// (0x0000fc37) control_pane_t_ParamLimits

0xf7ac,	// (0x0000fc37) control_pane_t

0x241a,	// (0x000028a5) navi_navi_volume_pane_cp1

0x2423,	// (0x000028ae) status_small_icon_pane

0x242b,	// (0x000028b6) status_small_pane_g1_ParamLimits

0x242b,	// (0x000028b6) status_small_pane_g1

0x245f,	// (0x000028ea) status_small_pane_g2_ParamLimits

0x245f,	// (0x000028ea) status_small_pane_g2

0x246b,	// (0x000028f6) status_small_pane_g3_ParamLimits

0x246b,	// (0x000028f6) status_small_pane_g3

0x2477,	// (0x00002902) status_small_pane_g4_ParamLimits

0x2477,	// (0x00002902) status_small_pane_g4

0x2483,	// (0x0000290e) status_small_pane_g5_ParamLimits

0x2483,	// (0x0000290e) status_small_pane_g5

0x2492,	// (0x0000291d) status_small_pane_g6_ParamLimits

0x2492,	// (0x0000291d) status_small_pane_g6

0x0007,

0xf78a,	// (0x0000fc15) status_small_pane_g_ParamLimits

0xf78a,	// (0x0000fc15) status_small_pane_g

0x24c2,	// (0x0000294d) status_small_pane_t1

0x24e5,	// (0x00002970) status_small_wait_pane_ParamLimits

0x24e5,	// (0x00002970) status_small_wait_pane

0xbc0b,	// (0x0000c096) aid_levels_signal_ParamLimits

0xbc0b,	// (0x0000c096) aid_levels_signal

0xbc23,	// (0x0000c0ae) signal_pane_g1_ParamLimits

0xbc23,	// (0x0000c0ae) signal_pane_g1

0xbc3e,	// (0x0000c0c9) signal_pane_g2_ParamLimits

0xbc3e,	// (0x0000c0c9) signal_pane_g2

0x0001,

0xf71f,	// (0x0000fbaa) signal_pane_g_ParamLimits

0xf71f,	// (0x0000fbaa) signal_pane_g

0x1a27,	// (0x00001eb2) context_pane_g1

0xb0fe,	// (0x0000b589) title_pane_g1

0xb133,	// (0x0000b5be) title_pane_t1

0x004c,	// (0x000004d7) title_pane_t2

0x0072,	// (0x000004fd) title_pane_t3

0x0002,

0xf573,	// (0x0000f9fe) title_pane_t

0xca82,	// (0x0000cf0d) aid_levels_battery_ParamLimits

0xca82,	// (0x0000cf0d) aid_levels_battery

0xca9e,	// (0x0000cf29) battery_pane_g1_ParamLimits

0xca9e,	// (0x0000cf29) battery_pane_g1

0xcabb,	// (0x0000cf46) battery_pane_g2_ParamLimits

0xcabb,	// (0x0000cf46) battery_pane_g2

0x0001,

0xf7be,	// (0x0000fc49) battery_pane_g_ParamLimits

0xf7be,	// (0x0000fc49) battery_pane_g

0xced4,	// (0x0000d35f) uni_indicator_pane_g1

0xcee9,	// (0x0000d374) uni_indicator_pane_g2

0xcefe,	// (0x0000d389) uni_indicator_pane_g3

0x0005,

0xf921,	// (0x0000fdac) uni_indicator_pane_g

0x1ff1,	// (0x0000247c) navi_icon_pane_ParamLimits

0x1ff1,	// (0x0000247c) navi_icon_pane

0x1f38,	// (0x000023c3) navi_midp_pane

0x200d,	// (0x00002498) navi_navi_pane

0x2017,	// (0x000024a2) navi_text_pane_ParamLimits

0x2017,	// (0x000024a2) navi_text_pane

0xf31a,	// (0x0000f7a5) status_small_wait_pane_g1

0x0560,	// (0x000009eb) status_small_wait_pane_g2

0x0001,

0xf91c,	// (0x0000fda7) status_small_wait_pane_g

0xce73,	// (0x0000d2fe) navi_navi_icon_text_pane

0xce7b,	// (0x0000d306) navi_navi_pane_g1_ParamLimits

0xce7b,	// (0x0000d306) navi_navi_pane_g1

0xce8d,	// (0x0000d318) navi_navi_pane_g2_ParamLimits

0xce8d,	// (0x0000d318) navi_navi_pane_g2

0x0001,

0xf8ea,	// (0x0000fd75) navi_navi_pane_g_ParamLimits

0xf8ea,	// (0x0000fd75) navi_navi_pane_g

0x44d3,	// (0x0000495e) navi_navi_tabs_pane

0xce9f,	// (0x0000d32a) navi_navi_text_pane

0xce73,	// (0x0000d2fe) navi_navi_volume_pane

0xce61,	// (0x0000d2ec) navi_text_pane_t1

0xce55,	// (0x0000d2e0) navi_icon_pane_g1

0x43c4,	// (0x0000484f) navi_navi_text_pane_t1

0xce44,	// (0x0000d2cf) navi_navi_volume_pane_g1

0xce4c,	// (0x0000d2d7) volume_small_pane

0xcda0,	// (0x0000d22b) navi_navi_icon_text_pane_g1

0xcda8,	// (0x0000d233) navi_navi_icon_text_pane_t1

0x200d,	// (0x00002498) navi_tabs_2_long_pane

0x200d,	// (0x00002498) navi_tabs_2_pane

0x200d,	// (0x00002498) navi_tabs_3_long_pane

0x200d,	// (0x00002498) navi_tabs_3_pane

0x200d,	// (0x00002498) navi_tabs_4_pane

0xcd80,	// (0x0000d20b) tabs_2_active_pane_ParamLimits

0xcd80,	// (0x0000d20b) tabs_2_active_pane

0xcd90,	// (0x0000d21b) tabs_2_passive_pane_ParamLimits

0xcd90,	// (0x0000d21b) tabs_2_passive_pane

0xcd4e,	// (0x0000d1d9) tabs_3_active_pane_ParamLimits

0xcd4e,	// (0x0000d1d9) tabs_3_active_pane

0xcd5e,	// (0x0000d1e9) tabs_3_passive_pane_ParamLimits

0xcd5e,	// (0x0000d1e9) tabs_3_passive_pane

0xcd6f,	// (0x0000d1fa) tabs_3_passive_pane_cp_ParamLimits

0xcd6f,	// (0x0000d1fa) tabs_3_passive_pane_cp

0xcd0a,	// (0x0000d195) tabs_4_active_pane_ParamLimits

0xcd0a,	// (0x0000d195) tabs_4_active_pane

0xcd1b,	// (0x0000d1a6) tabs_4_passive_pane_ParamLimits

0xcd1b,	// (0x0000d1a6) tabs_4_passive_pane

0xcd2c,	// (0x0000d1b7) tabs_4_passive_pane_cp_ParamLimits

0xcd2c,	// (0x0000d1b7) tabs_4_passive_pane_cp

0xcd3d,	// (0x0000d1c8) tabs_4_passive_pane_cp2_ParamLimits

0xcd3d,	// (0x0000d1c8) tabs_4_passive_pane_cp2

0xcce6,	// (0x0000d171) tabs_2_long_active_pane_ParamLimits

0xcce6,	// (0x0000d171) tabs_2_long_active_pane

0xccf8,	// (0x0000d183) tabs_2_long_passive_pane_ParamLimits

0xccf8,	// (0x0000d183) tabs_2_long_passive_pane

0xcc9b,	// (0x0000d126) tabs_3_long_active_pane_ParamLimits

0xcc9b,	// (0x0000d126) tabs_3_long_active_pane

0xccb4,	// (0x0000d13f) tabs_3_long_passive_pane_ParamLimits

0xccb4,	// (0x0000d13f) tabs_3_long_passive_pane

0xcccd,	// (0x0000d158) tabs_3_long_passive_pane_cp_ParamLimits

0xcccd,	// (0x0000d158) tabs_3_long_passive_pane_cp

0x413d,	// (0x000045c8) volume_small_pane_g1

0xcc4a,	// (0x0000d0d5) volume_small_pane_g2

0xcc53,	// (0x0000d0de) volume_small_pane_g3

0xcc5c,	// (0x0000d0e7) volume_small_pane_g4

0xcc65,	// (0x0000d0f0) volume_small_pane_g5

0xcc6e,	// (0x0000d0f9) volume_small_pane_g6

0xcc77,	// (0x0000d102) volume_small_pane_g7

0xcc80,	// (0x0000d10b) volume_small_pane_g8

0xcc89,	// (0x0000d114) volume_small_pane_g9

0xcc92,	// (0x0000d11d) volume_small_pane_g10

0x0009,

0xf8b6,	// (0x0000fd41) volume_small_pane_g

0x03aa,	// (0x00000835) bg_active_tab_pane_cp2_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp2

0xb1bf,	// (0x0000b64a) tabs_3_active_pane_g1

0xb1c7,	// (0x0000b652) tabs_3_active_pane_t1

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp2_ParamLimits

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp2

0xb1bf,	// (0x0000b64a) tabs_3_passive_pane_g1

0xb1c7,	// (0x0000b652) tabs_3_passive_pane_t1

0x03aa,	// (0x00000835) bg_active_tab_pane_cp3_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp3

0xb1d9,	// (0x0000b664) tabs_4_active_pane_g1

0xb1e1,	// (0x0000b66c) tabs_4_active_pane_t1

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp3_ParamLimits

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp3

0xb1d9,	// (0x0000b664) tabs_4_1_passive_pane_g1

0xb1e1,	// (0x0000b66c) tabs_4_1_passive_pane_t1

0x2710,	// (0x00002b9b) list_highlight_pane_cp2

0xcfce,	// (0x0000d459) list_set_pane_ParamLimits

0xcfce,	// (0x0000d459) list_set_pane

0xd096,	// (0x0000d521) main_pane_set_t1_ParamLimits

0xd096,	// (0x0000d521) main_pane_set_t1

0xd0b6,	// (0x0000d541) main_pane_set_t2_ParamLimits

0xd0b6,	// (0x0000d541) main_pane_set_t2

0xd0ca,	// (0x0000d555) main_pane_set_t3_ParamLimits

0xd0ca,	// (0x0000d555) main_pane_set_t3

0xd0de,	// (0x0000d569) main_pane_set_t4_ParamLimits

0xd0de,	// (0x0000d569) main_pane_set_t4

0x0003,

0xf986,	// (0x0000fe11) main_pane_set_t_ParamLimits

0xf986,	// (0x0000fe11) main_pane_set_t

0xd0f2,	// (0x0000d57d) setting_code_pane

0x4c61,	// (0x000050ec) setting_slider_graphic_pane

0x4c61,	// (0x000050ec) setting_slider_pane

0x4c61,	// (0x000050ec) setting_text_pane

0x4c61,	// (0x000050ec) setting_volume_pane

0x00c6,	// (0x00000551) volume_set_pane

0x0084,	// (0x0000050f) bg_set_opt_pane_cp

0x00d0,	// (0x0000055b) setting_slider_pane_t1

0x00e6,	// (0x00000571) setting_slider_pane_t2

0x0100,	// (0x0000058b) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0000fa05) setting_slider_pane_t

0x0118,	// (0x000005a3) slider_set_pane

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp2

0x012e,	// (0x000005b9) setting_slider_graphic_pane_g1

0x0137,	// (0x000005c2) setting_slider_graphic_pane_t1

0x0147,	// (0x000005d2) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x0000fa0c) setting_slider_graphic_pane_t

0x0157,	// (0x000005e2) slider_set_pane_cp

0xf493,	// (0x0000f91e) input_focus_pane_cp1

0x4ae8,	// (0x00004f73) list_set_text_pane

0xf31a,	// (0x0000f7a5) setting_text_pane_g1

0xf493,	// (0x0000f91e) input_focus_pane_cp2

0xf31a,	// (0x0000f7a5) setting_code_pane_g1

0x015f,	// (0x000005ea) setting_code_pane_t1

0x016d,	// (0x000005f8) set_text_pane_t1_ParamLimits

0x016d,	// (0x000005f8) set_text_pane_t1

0x108c,	// (0x00001517) set_opt_bg_pane_g1

0x1094,	// (0x0000151f) set_opt_bg_pane_g2

0x4ac0,	// (0x00004f4b) set_opt_bg_pane_g3

0x10a4,	// (0x0000152f) set_opt_bg_pane_g4

0x10ac,	// (0x00001537) set_opt_bg_pane_g5

0x10b4,	// (0x0000153f) set_opt_bg_pane_g6

0x4aca,	// (0x00004f55) set_opt_bg_pane_g7

0x4ad4,	// (0x00004f5f) set_opt_bg_pane_g8

0x4ade,	// (0x00004f69) set_opt_bg_pane_g9

0x0008,

0xf973,	// (0x0000fdfe) set_opt_bg_pane_g

0x4a4f,	// (0x00004eda) slider_set_pane_g1

0x4a5c,	// (0x00004ee7) slider_set_pane_g2

0x0006,

0xf964,	// (0x0000fdef) slider_set_pane_g

0x48b7,	// (0x00004d42) volume_set_pane_g1

0x48c1,	// (0x00004d4c) volume_set_pane_g2

0x48cb,	// (0x00004d56) volume_set_pane_g3

0x48d5,	// (0x00004d60) volume_set_pane_g4

0x48df,	// (0x00004d6a) volume_set_pane_g5

0x48e9,	// (0x00004d74) volume_set_pane_g6

0x48f3,	// (0x00004d7e) volume_set_pane_g7

0x48fd,	// (0x00004d88) volume_set_pane_g8

0x4907,	// (0x00004d92) volume_set_pane_g9

0x4911,	// (0x00004d9c) volume_set_pane_g10

0x0009,

0xf93c,	// (0x0000fdc7) volume_set_pane_g

0xb1f3,	// (0x0000b67e) indicator_pane_ParamLimits

0xb1f3,	// (0x0000b67e) indicator_pane

0xb21f,	// (0x0000b6aa) main_idle_pane_g2_ParamLimits

0xb21f,	// (0x0000b6aa) main_idle_pane_g2

0xb257,	// (0x0000b6e2) main_pane_idle_g1_ParamLimits

0xb257,	// (0x0000b6e2) main_pane_idle_g1

0x01c9,	// (0x00000654) popup_clock_digital_analogue_window_ParamLimits

0x01c9,	// (0x00000654) popup_clock_digital_analogue_window

0xb285,	// (0x0000b710) soft_indicator_pane_ParamLimits

0xb285,	// (0x0000b710) soft_indicator_pane

0xb2a1,	// (0x0000b72c) wallpaper_pane_ParamLimits

0xb2a1,	// (0x0000b72c) wallpaper_pane

0xf31a,	// (0x0000f7a5) wallpaper_pane_g1

0xb2b3,	// (0x0000b73e) indicator_pane_g1_ParamLimits

0xb2b3,	// (0x0000b73e) indicator_pane_g1

0x5021,	// (0x000054ac) navi_navi_icon_text_pane_srt_g1

0x021d,	// (0x000006a8) soft_indicator_pane_t1

0x0237,	// (0x000006c2) aid_ps_area_pane

0xb2cc,	// (0x0000b757) aid_ps_clock_pane

0x0256,	// (0x000006e1) aid_ps_indicator_pane

0x0262,	// (0x000006ed) indicator_ps_pane_ParamLimits

0x0262,	// (0x000006ed) indicator_ps_pane

0x0271,	// (0x000006fc) power_save_pane_g1_ParamLimits

0x0271,	// (0x000006fc) power_save_pane_g1

0x027d,	// (0x00000708) power_save_pane_g2_ParamLimits

0x027d,	// (0x00000708) power_save_pane_g2

0xf324,	// (0x0000f7af) aid_navinavi_width_pane

0x0237,	// (0x000006c2) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x0000fa11) power_save_pane_g_ParamLimits

0xf586,	// (0x0000fa11) power_save_pane_g

0x028b,	// (0x00000716) power_save_pane_t1_ParamLimits

0x028b,	// (0x00000716) power_save_pane_t1

0xb2cc,	// (0x0000b757) aid_ps_clock_pane_ParamLimits

0x0256,	// (0x000006e1) aid_ps_indicator_pane_ParamLimits

0x029d,	// (0x00000728) power_save_pane_t4_ParamLimits

0x029d,	// (0x00000728) power_save_pane_t4

0x0001,

0xf58b,	// (0x0000fa16) power_save_pane_t_ParamLimits

0xf58b,	// (0x0000fa16) power_save_pane_t

0x02c7,	// (0x00000752) power_save_t3_ParamLimits

0x02c7,	// (0x00000752) power_save_t3

0x02b2,	// (0x0000073d) power_save_t2_ParamLimits

0x02b2,	// (0x0000073d) power_save_t2

0x02dc,	// (0x00000767) indicator_ps_pane_g1

0xb2da,	// (0x0000b765) ai_gene_pane_ParamLimits

0xb2da,	// (0x0000b765) ai_gene_pane

0xb2f1,	// (0x0000b77c) ai_links_pane_ParamLimits

0xb2f1,	// (0x0000b77c) ai_links_pane

0xb309,	// (0x0000b794) indicator_pane_cp1_ParamLimits

0xb309,	// (0x0000b794) indicator_pane_cp1

0xb318,	// (0x0000b7a3) main_pane_idle_g1_cp_ParamLimits

0xb318,	// (0x0000b7a3) main_pane_idle_g1_cp

0x0315,	// (0x000007a0) popup_ai_links_title_window

0xb330,	// (0x0000b7bb) soft_indicator_pane_cp1_ParamLimits

0xb330,	// (0x0000b7bb) soft_indicator_pane_cp1

0x4782,	// (0x00004c0d) ai_links_pane_g1

0x478b,	// (0x00004c16) grid_ai_links_pane

0xcecb,	// (0x0000d356) ai_gene_pane_1

0x4770,	// (0x00004bfb) ai_gene_pane_2

0x4779,	// (0x00004c04) list_highlight_pane_cp4

0xcea7,	// (0x0000d332) cell_ai_link_pane_ParamLimits

0xcea7,	// (0x0000d332) cell_ai_link_pane

0x473f,	// (0x00004bca) cell_ai_link_pane_g1

0x0560,	// (0x000009eb) cell_ai_link_pane_g2

0x0001,

0xf917,	// (0x0000fda2) cell_ai_link_pane_g

0xf493,	// (0x0000f91e) grid_highlight_cp2

0xf493,	// (0x0000f91e) bg_popup_sub_pane_cp1

0x0338,	// (0x000007c3) popup_ai_links_title_window_t1

0x468b,	// (0x00004b16) ai_gene_pane_1_g1_ParamLimits

0x468b,	// (0x00004b16) ai_gene_pane_1_g1

0x4697,	// (0x00004b22) ai_gene_pane_1_g2_ParamLimits

0x4697,	// (0x00004b22) ai_gene_pane_1_g2

0x0001,

0xf90d,	// (0x0000fd98) ai_gene_pane_1_g_ParamLimits

0xf90d,	// (0x0000fd98) ai_gene_pane_1_g

0x46a4,	// (0x00004b2f) ai_gene_pane_1_t1_ParamLimits

0x46a4,	// (0x00004b2f) ai_gene_pane_1_t1

0x46d8,	// (0x00004b63) grid_ai_soft_ind_pane

0x4676,	// (0x00004b01) ai_gene_pane_2_t1_ParamLimits

0x4676,	// (0x00004b01) ai_gene_pane_2_t1

0xb344,	// (0x0000b7cf) main_pane_empty_t1_ParamLimits

0xb344,	// (0x0000b7cf) main_pane_empty_t1

0xb35c,	// (0x0000b7e7) main_pane_empty_t2_ParamLimits

0xb35c,	// (0x0000b7e7) main_pane_empty_t2

0xb371,	// (0x0000b7fc) main_pane_empty_t3_ParamLimits

0xb371,	// (0x0000b7fc) main_pane_empty_t3

0xb383,	// (0x0000b80e) main_pane_empty_t4_ParamLimits

0xb383,	// (0x0000b80e) main_pane_empty_t4

0xb395,	// (0x0000b820) main_pane_empty_t5_ParamLimits

0xb395,	// (0x0000b820) main_pane_empty_t5

0x0004,

0xf590,	// (0x0000fa1b) main_pane_empty_t_ParamLimits

0xf590,	// (0x0000fa1b) main_pane_empty_t

0x116a,	// (0x000015f5) bg_popup_window_pane_ParamLimits

0x116a,	// (0x000015f5) bg_popup_window_pane

0x43d2,	// (0x0000485d) find_popup_pane_cp2_ParamLimits

0x43d2,	// (0x0000485d) find_popup_pane_cp2

0x43de,	// (0x00004869) heading_pane_ParamLimits

0x43de,	// (0x00004869) heading_pane

0xf493,	// (0x0000f91e) bg_popup_sub_pane

0xcdc5,	// (0x0000d250) bg_popup_window_pane_g1_ParamLimits

0xcdc5,	// (0x0000d250) bg_popup_window_pane_g1

0xcdd4,	// (0x0000d25f) bg_popup_window_pane_g2_ParamLimits

0xcdd4,	// (0x0000d25f) bg_popup_window_pane_g2

0xcde0,	// (0x0000d26b) bg_popup_window_pane_g3_ParamLimits

0xcde0,	// (0x0000d26b) bg_popup_window_pane_g3

0xcdec,	// (0x0000d277) bg_popup_window_pane_g4_ParamLimits

0xcdec,	// (0x0000d277) bg_popup_window_pane_g4

0xcdfb,	// (0x0000d286) bg_popup_window_pane_g5_ParamLimits

0xcdfb,	// (0x0000d286) bg_popup_window_pane_g5

0xce0b,	// (0x0000d296) bg_popup_window_pane_g6_ParamLimits

0xce0b,	// (0x0000d296) bg_popup_window_pane_g6

0xce17,	// (0x0000d2a2) bg_popup_window_pane_g7_ParamLimits

0xce17,	// (0x0000d2a2) bg_popup_window_pane_g7

0xce26,	// (0x0000d2b1) bg_popup_window_pane_g8_ParamLimits

0xce26,	// (0x0000d2b1) bg_popup_window_pane_g8

0xce35,	// (0x0000d2c0) bg_popup_window_pane_g9_ParamLimits

0xce35,	// (0x0000d2c0) bg_popup_window_pane_g9

0x43a7,	// (0x00004832) bg_popup_window_pane_g10_ParamLimits

0x43a7,	// (0x00004832) bg_popup_window_pane_g10

0x0009,

0xf8d5,	// (0x0000fd60) bg_popup_window_pane_g_ParamLimits

0xf8d5,	// (0x0000fd60) bg_popup_window_pane_g

0x42d0,	// (0x0000475b) bg_popup_heading_pane_ParamLimits

0x42d0,	// (0x0000475b) bg_popup_heading_pane

0x4f64,	// (0x000053ef) tabs_4_passive_pane_cp_srt_ParamLimits

0x4f64,	// (0x000053ef) tabs_4_passive_pane_cp_srt

0x4f76,	// (0x00005401) tabs_4_passive_pane_srt_ParamLimits

0x42e4,	// (0x0000476f) heading_pane_g2

0x4f76,	// (0x00005401) tabs_4_passive_pane_srt

0x348d,	// (0x00003918) bg_passive_tab_pane_cp3_srt_ParamLimits

0x348d,	// (0x00003918) bg_passive_tab_pane_cp3_srt

0x42ec,	// (0x00004777) heading_pane_t1_ParamLimits

0x42ec,	// (0x00004777) heading_pane_t1

0x4303,	// (0x0000478e) heading_pane_t2_ParamLimits

0x4303,	// (0x0000478e) heading_pane_t2

0x0001,

0xf8d0,	// (0x0000fd5b) heading_pane_t_ParamLimits

0xf8d0,	// (0x0000fd5b) heading_pane_t

0x3ca0,	// (0x0000412b) bg_popup_heading_pane_g1

0x3d4f,	// (0x000041da) bg_popup_heading_pane_g2

0x3d59,	// (0x000041e4) bg_popup_heading_pane_g3

0x3d63,	// (0x000041ee) bg_popup_heading_pane_g4

0x3d6d,	// (0x000041f8) bg_popup_heading_pane_g5

0x3d77,	// (0x00004202) bg_popup_heading_pane_g6

0x3d7f,	// (0x0000420a) bg_popup_heading_pane_g7

0x3d87,	// (0x00004212) bg_popup_heading_pane_g8

0x3d91,	// (0x0000421c) bg_popup_heading_pane_g9

0x0008,

0xf88c,	// (0x0000fd17) bg_popup_heading_pane_g

0x32fa,	// (0x00003785) bg_popup_sub_pane_g1

0x3302,	// (0x0000378d) bg_popup_sub_pane_g2

0x330a,	// (0x00003795) bg_popup_sub_pane_g3

0x3312,	// (0x0000379d) bg_popup_sub_pane_g4

0x331a,	// (0x000037a5) bg_popup_sub_pane_g5

0x3322,	// (0x000037ad) bg_popup_sub_pane_g6

0x332a,	// (0x000037b5) bg_popup_sub_pane_g7

0x3332,	// (0x000037bd) bg_popup_sub_pane_g8

0x333a,	// (0x000037c5) bg_popup_sub_pane_g9

0x0008,

0xf866,	// (0x0000fcf1) bg_popup_sub_pane_g

0x03aa,	// (0x00000835) bg_popup_window_pane_cp5_ParamLimits

0x03aa,	// (0x00000835) bg_popup_window_pane_cp5

0x03c6,	// (0x00000851) popup_note_window_g1_ParamLimits

0x03c6,	// (0x00000851) popup_note_window_g1

0x03d2,	// (0x0000085d) popup_note_window_t1_ParamLimits

0x03d2,	// (0x0000085d) popup_note_window_t1

0x03e8,	// (0x00000873) popup_note_window_t2_ParamLimits

0x03e8,	// (0x00000873) popup_note_window_t2

0x03fe,	// (0x00000889) popup_note_window_t3_ParamLimits

0x03fe,	// (0x00000889) popup_note_window_t3

0x0414,	// (0x0000089f) popup_note_window_t4_ParamLimits

0x0414,	// (0x0000089f) popup_note_window_t4

0x043c,	// (0x000008c7) popup_note_window_t5_ParamLimits

0x043c,	// (0x000008c7) popup_note_window_t5

0x0004,

0xf59b,	// (0x0000fa26) popup_note_window_t_ParamLimits

0xf59b,	// (0x0000fa26) popup_note_window_t

0x0460,	// (0x000008eb) bg_popup_window_pane_cp6_ParamLimits

0x0460,	// (0x000008eb) bg_popup_window_pane_cp6

0x3c1c,	// (0x000040a7) popup_note_image_window_g1_ParamLimits

0x3c1c,	// (0x000040a7) popup_note_image_window_g1

0x3c28,	// (0x000040b3) popup_note_image_window_g2_ParamLimits

0x3c28,	// (0x000040b3) popup_note_image_window_g2

0x0001,

0xf85a,	// (0x0000fce5) popup_note_image_window_g_ParamLimits

0xf85a,	// (0x0000fce5) popup_note_image_window_g

0x3c41,	// (0x000040cc) popup_note_image_window_t1_ParamLimits

0x3c41,	// (0x000040cc) popup_note_image_window_t1

0x3c5a,	// (0x000040e5) popup_note_image_window_t2_ParamLimits

0x3c5a,	// (0x000040e5) popup_note_image_window_t2

0x3c73,	// (0x000040fe) popup_note_image_window_t3_ParamLimits

0x3c73,	// (0x000040fe) popup_note_image_window_t3

0x0002,

0xf85f,	// (0x0000fcea) popup_note_image_window_t_ParamLimits

0xf85f,	// (0x0000fcea) popup_note_image_window_t

0x3adc,	// (0x00003f67) bg_popup_window_pane_cp7_ParamLimits

0x3adc,	// (0x00003f67) bg_popup_window_pane_cp7

0x3b0c,	// (0x00003f97) popup_note_wait_window_g1_ParamLimits

0x3b0c,	// (0x00003f97) popup_note_wait_window_g1

0x3b18,	// (0x00003fa3) popup_note_wait_window_g2_ParamLimits

0x3b18,	// (0x00003fa3) popup_note_wait_window_g2

0x0002,

0xf848,	// (0x0000fcd3) popup_note_wait_window_g_ParamLimits

0xf848,	// (0x0000fcd3) popup_note_wait_window_g

0x3b30,	// (0x00003fbb) popup_note_wait_window_t1_ParamLimits

0x3b30,	// (0x00003fbb) popup_note_wait_window_t1

0x3b57,	// (0x00003fe2) popup_note_wait_window_t2_ParamLimits

0x3b57,	// (0x00003fe2) popup_note_wait_window_t2

0x3b75,	// (0x00004000) popup_note_wait_window_t3_ParamLimits

0x3b75,	// (0x00004000) popup_note_wait_window_t3

0x3b88,	// (0x00004013) popup_note_wait_window_t4_ParamLimits

0x3b88,	// (0x00004013) popup_note_wait_window_t4

0x0004,

0xf84f,	// (0x0000fcda) popup_note_wait_window_t_ParamLimits

0xf84f,	// (0x0000fcda) popup_note_wait_window_t

0x3bad,	// (0x00004038) wait_bar_pane_ParamLimits

0x3bad,	// (0x00004038) wait_bar_pane

0xf493,	// (0x0000f91e) wait_anim_pane

0xf493,	// (0x0000f91e) wait_border_pane

0xf31a,	// (0x0000f7a5) wait_anim_pane_g1

0xf31a,	// (0x0000f7a5) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x0000fba5) wait_anim_pane_g

0x3a80,	// (0x00003f0b) wait_border_pane_g1

0x3a8b,	// (0x00003f16) wait_border_pane_g2

0x3a94,	// (0x00003f1f) wait_border_pane_g3

0x0002,

0xf841,	// (0x0000fccc) wait_border_pane_g

0x38ea,	// (0x00003d75) bg_popup_window_pane_cp16_ParamLimits

0x38ea,	// (0x00003d75) bg_popup_window_pane_cp16

0x39ea,	// (0x00003e75) indicator_popup_pane_cp4_ParamLimits

0x39ea,	// (0x00003e75) indicator_popup_pane_cp4

0x39fe,	// (0x00003e89) popup_query_data_window_t1_ParamLimits

0x39fe,	// (0x00003e89) popup_query_data_window_t1

0x3a10,	// (0x00003e9b) popup_query_data_window_t2_ParamLimits

0x3a10,	// (0x00003e9b) popup_query_data_window_t2

0x3a29,	// (0x00003eb4) popup_query_data_window_t3_ParamLimits

0x3a29,	// (0x00003eb4) popup_query_data_window_t3

0x0002,

0xf83a,	// (0x0000fcc5) popup_query_data_window_t_ParamLimits

0xf83a,	// (0x0000fcc5) popup_query_data_window_t

0x3a43,	// (0x00003ece) query_popup_data_pane_ParamLimits

0x3a43,	// (0x00003ece) query_popup_data_pane

0x3a57,	// (0x00003ee2) query_popup_data_pane_cp1_ParamLimits

0x3a57,	// (0x00003ee2) query_popup_data_pane_cp1

0x38ea,	// (0x00003d75) bg_popup_window_pane_cp10_ParamLimits

0x38ea,	// (0x00003d75) bg_popup_window_pane_cp10

0x391c,	// (0x00003da7) indicator_popup_pane_ParamLimits

0x391c,	// (0x00003da7) indicator_popup_pane

0x393e,	// (0x00003dc9) popup_query_code_window_t1_ParamLimits

0x393e,	// (0x00003dc9) popup_query_code_window_t1

0x3958,	// (0x00003de3) popup_query_code_window_t2_ParamLimits

0x3958,	// (0x00003de3) popup_query_code_window_t2

0x39a1,	// (0x00003e2c) popup_query_code_window_t3_ParamLimits

0x39a1,	// (0x00003e2c) popup_query_code_window_t3

0x0002,

0xf833,	// (0x0000fcbe) popup_query_code_window_t_ParamLimits

0xf833,	// (0x0000fcbe) popup_query_code_window_t

0x39d0,	// (0x00003e5b) query_popup_pane_ParamLimits

0x39d0,	// (0x00003e5b) query_popup_pane

0x0460,	// (0x000008eb) bg_popup_window_pane_cp15_ParamLimits

0x0460,	// (0x000008eb) bg_popup_window_pane_cp15

0x0480,	// (0x0000090b) indicator_popup_pane_cp1_ParamLimits

0x0480,	// (0x0000090b) indicator_popup_pane_cp1

0x0493,	// (0x0000091e) indicator_popup_pane_cp2_ParamLimits

0x0493,	// (0x0000091e) indicator_popup_pane_cp2

0x04ae,	// (0x00000939) popup_query_data_code_window_g1_ParamLimits

0x04ae,	// (0x00000939) popup_query_data_code_window_g1

0x04c1,	// (0x0000094c) popup_query_data_code_window_t1_ParamLimits

0x04c1,	// (0x0000094c) popup_query_data_code_window_t1

0x04d3,	// (0x0000095e) popup_query_data_code_window_t2_ParamLimits

0x04d3,	// (0x0000095e) popup_query_data_code_window_t2

0x04e5,	// (0x00000970) popup_query_data_code_window_t3_ParamLimits

0x04e5,	// (0x00000970) popup_query_data_code_window_t3

0x04fb,	// (0x00000986) popup_query_data_code_window_t4_ParamLimits

0x04fb,	// (0x00000986) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x0000fa31) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x0000fa31) popup_query_data_code_window_t

0x1fad,	// (0x00002438) list_single_midp_graphic_pane_g3

0x0515,	// (0x000009a0) query_popup_data_pane_cp2_ParamLimits

0x0528,	// (0x000009b3) query_popup_pane_cp2_ParamLimits

0x0528,	// (0x000009b3) query_popup_pane_cp2

0xf493,	// (0x0000f91e) bg_popup_window_pane_cp11

0x38e2,	// (0x00003d6d) heading_pane_cp5

0x0618,	// (0x00000aa3) listscroll_popup_info_pane

0xf493,	// (0x0000f91e) input_focus_pane_cp3

0x0543,	// (0x000009ce) query_popup_pane_t1

0x0551,	// (0x000009dc) list_popup_info_pane_ParamLimits

0x0551,	// (0x000009dc) list_popup_info_pane

0x0560,	// (0x000009eb) listscroll_popup_info_pane_g1

0x0568,	// (0x000009f3) scroll_pane_cp7

0x0572,	// (0x000009fd) popup_info_list_pane_t1_ParamLimits

0x0572,	// (0x000009fd) popup_info_list_pane_t1

0x058c,	// (0x00000a17) popup_info_list_pane_t2_ParamLimits

0x058c,	// (0x00000a17) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x0000fa3a) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x0000fa3a) popup_info_list_pane_t

0xf493,	// (0x0000f91e) bg_popup_window_pane_cp12

0x5058,	// (0x000054e3) find_popup_pane

0x0084,	// (0x0000050f) bg_popup_window_pane_cp3

0x05a6,	// (0x00000a31) heading_pane_cp3

0x05b2,	// (0x00000a3d) listscroll_popup_graphic_pane

0xf493,	// (0x0000f91e) bg_popup_window_pane_cp4

0xb3f7,	// (0x0000b882) heading_pane_cp4

0x0618,	// (0x00000aa3) listscroll_popup_colour_pane

0xb401,	// (0x0000b88c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xb401,	// (0x0000b88c) cell_large_graphic_colour_none_popup_pane

0xb415,	// (0x0000b8a0) grid_large_graphic_colour_popup_pane_ParamLimits

0xb415,	// (0x0000b8a0) grid_large_graphic_colour_popup_pane

0xb441,	// (0x0000b8cc) listscroll_popup_colour_pane_g1_ParamLimits

0xb441,	// (0x0000b8cc) listscroll_popup_colour_pane_g1

0xb458,	// (0x0000b8e3) listscroll_popup_colour_pane_g2_ParamLimits

0xb458,	// (0x0000b8e3) listscroll_popup_colour_pane_g2

0xb46f,	// (0x0000b8fa) listscroll_popup_colour_pane_g3_ParamLimits

0xb46f,	// (0x0000b8fa) listscroll_popup_colour_pane_g3

0xb47f,	// (0x0000b90a) listscroll_popup_colour_pane_g4_ParamLimits

0xb47f,	// (0x0000b90a) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x0000fa3f) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x0000fa3f) listscroll_popup_colour_pane_g

0x06b2,	// (0x00000b3d) scroll_pane_cp6_ParamLimits

0x06b2,	// (0x00000b3d) scroll_pane_cp6

0xb493,	// (0x0000b91e) cell_large_graphic_colour_popup_pane_ParamLimits

0xb493,	// (0x0000b91e) cell_large_graphic_colour_popup_pane

0x06e9,	// (0x00000b74) cell_large_graphic_colour_none_popup_pane_t1

0xf493,	// (0x0000f91e) grid_highlight_pane_cp5

0x06f8,	// (0x00000b83) cell_large_graphic_colour_popup_pane_g1

0x0700,	// (0x00000b8b) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x0000fa48) cell_large_graphic_colour_popup_pane_g

0x0708,	// (0x00000b93) cell_large_graphic_colour_popup_pane_g2_copy1

0x0711,	// (0x00000b9c) grid_highlight_pane_cp4

0x0719,	// (0x00000ba4) bg_popup_window_pane_cp8_ParamLimits

0x0719,	// (0x00000ba4) bg_popup_window_pane_cp8

0x0734,	// (0x00000bbf) popup_snote_single_text_window_g1_ParamLimits

0x0734,	// (0x00000bbf) popup_snote_single_text_window_g1

0x0746,	// (0x00000bd1) popup_snote_single_text_window_t1_ParamLimits

0x0746,	// (0x00000bd1) popup_snote_single_text_window_t1

0x0759,	// (0x00000be4) popup_snote_single_text_window_t2_ParamLimits

0x0759,	// (0x00000be4) popup_snote_single_text_window_t2

0x076c,	// (0x00000bf7) popup_snote_single_text_window_t3_ParamLimits

0x076c,	// (0x00000bf7) popup_snote_single_text_window_t3

0x07a5,	// (0x00000c30) popup_snote_single_text_window_t4_ParamLimits

0x07a5,	// (0x00000c30) popup_snote_single_text_window_t4

0x07d9,	// (0x00000c64) popup_snote_single_text_window_t5_ParamLimits

0x07d9,	// (0x00000c64) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x0000fa4d) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x0000fa4d) popup_snote_single_text_window_t

0x0808,	// (0x00000c93) bg_popup_window_pane_cp9_ParamLimits

0x0808,	// (0x00000c93) bg_popup_window_pane_cp9

0x0734,	// (0x00000bbf) popup_snote_single_graphic_window_g1_ParamLimits

0x0734,	// (0x00000bbf) popup_snote_single_graphic_window_g1

0x0816,	// (0x00000ca1) popup_snote_single_graphic_window_g2_ParamLimits

0x0816,	// (0x00000ca1) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x0000fa58) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x0000fa58) popup_snote_single_graphic_window_g

0x0822,	// (0x00000cad) popup_snote_single_graphic_window_t1_ParamLimits

0x0822,	// (0x00000cad) popup_snote_single_graphic_window_t1

0x0835,	// (0x00000cc0) popup_snote_single_graphic_window_t2_ParamLimits

0x0835,	// (0x00000cc0) popup_snote_single_graphic_window_t2

0x0848,	// (0x00000cd3) popup_snote_single_graphic_window_t3_ParamLimits

0x0848,	// (0x00000cd3) popup_snote_single_graphic_window_t3

0x0881,	// (0x00000d0c) popup_snote_single_graphic_window_t4_ParamLimits

0x0881,	// (0x00000d0c) popup_snote_single_graphic_window_t4

0x08b5,	// (0x00000d40) popup_snote_single_graphic_window_t5_ParamLimits

0x08b5,	// (0x00000d40) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x0000fa5d) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x0000fa5d) popup_snote_single_graphic_window_t

0x4ede,	// (0x00005369) grid_graphic_popup_pane_ParamLimits

0x4ede,	// (0x00005369) grid_graphic_popup_pane

0x4f0c,	// (0x00005397) listscroll_popup_graphic_pane_g1_ParamLimits

0x4f0c,	// (0x00005397) listscroll_popup_graphic_pane_g1

0xd234,	// (0x0000d6bf) listscroll_popup_graphic_pane_g2_ParamLimits

0xd234,	// (0x0000d6bf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b0,	// (0x0000fe3b) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b0,	// (0x0000fe3b) listscroll_popup_graphic_pane_g

0x4f34,	// (0x000053bf) scroll_pane_cp5

0xd1f4,	// (0x0000d67f) cell_graphic_popup_pane_ParamLimits

0xd1f4,	// (0x0000d67f) cell_graphic_popup_pane

0x4e67,	// (0x000052f2) cell_graphic_popup_pane_g1

0x4e6f,	// (0x000052fa) cell_graphic_popup_pane_g2

0x0708,	// (0x00000b93) cell_graphic_popup_pane_g3

0x0002,

0xf9a9,	// (0x0000fe34) cell_graphic_popup_pane_g

0x4e78,	// (0x00005303) cell_graphic_popup_pane_t2

0x0711,	// (0x00000b9c) grid_highlight_pane_cp3

0x08f6,	// (0x00000d81) list_gen_pane_ParamLimits

0x08f6,	// (0x00000d81) list_gen_pane

0x0928,	// (0x00000db3) scroll_pane

0xd1af,	// (0x0000d63a) bg_list_pane_g1_ParamLimits

0xd1af,	// (0x0000d63a) bg_list_pane_g1

0x4de4,	// (0x0000526f) bg_list_pane_g2_ParamLimits

0x4de4,	// (0x0000526f) bg_list_pane_g2

0x4df7,	// (0x00005282) bg_list_pane_g3_ParamLimits

0x4df7,	// (0x00005282) bg_list_pane_g3

0x4e09,	// (0x00005294) bg_list_pane_g4_ParamLimits

0x4e09,	// (0x00005294) bg_list_pane_g4

0xd1ca,	// (0x0000d655) bg_list_pane_g5_ParamLimits

0xd1ca,	// (0x0000d655) bg_list_pane_g5

0x0004,

0xf99e,	// (0x0000fe29) bg_list_pane_g_ParamLimits

0xf99e,	// (0x0000fe29) bg_list_pane_g

0xd14c,	// (0x0000d5d7) list_double2_graphic_large_graphic_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double2_graphic_large_graphic_pane

0xd14c,	// (0x0000d5d7) list_double2_graphic_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double2_graphic_pane

0xd14c,	// (0x0000d5d7) list_double2_large_graphic_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double2_large_graphic_pane

0xd14c,	// (0x0000d5d7) list_double2_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double2_pane

0xd14c,	// (0x0000d5d7) list_double_graphic_heading_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_graphic_heading_pane

0xd14c,	// (0x0000d5d7) list_double_graphic_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_graphic_pane

0xd14c,	// (0x0000d5d7) list_double_heading_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_heading_pane

0xd14c,	// (0x0000d5d7) list_double_large_graphic_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_large_graphic_pane

0xd14c,	// (0x0000d5d7) list_double_number_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_number_pane

0xd14c,	// (0x0000d5d7) list_double_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_pane

0xd14c,	// (0x0000d5d7) list_double_time_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_double_time_pane

0xd14c,	// (0x0000d5d7) list_setting_number_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_setting_number_pane

0xd14c,	// (0x0000d5d7) list_setting_pane_ParamLimits

0xd14c,	// (0x0000d5d7) list_setting_pane

0xd160,	// (0x0000d5eb) list_single_2graphic_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_2graphic_pane

0xd160,	// (0x0000d5eb) list_single_graphic_heading_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_graphic_heading_pane

0xd160,	// (0x0000d5eb) list_single_graphic_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_graphic_pane

0xd160,	// (0x0000d5eb) list_single_heading_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_heading_pane

0xd160,	// (0x0000d5eb) list_single_large_graphic_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_large_graphic_pane

0xd160,	// (0x0000d5eb) list_single_number_heading_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_number_heading_pane

0xd160,	// (0x0000d5eb) list_single_number_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_number_pane

0xd160,	// (0x0000d5eb) list_single_pane_ParamLimits

0xd160,	// (0x0000d5eb) list_single_pane

0xf493,	// (0x0000f91e) list_highlight_pane_cp1

0x20f4,	// (0x0000257f) list_single_pane_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_pane_g1

0x319e,	// (0x00003629) list_single_pane_g2_ParamLimits

0x319e,	// (0x00003629) list_single_pane_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_pane_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_pane_g

0x5640,	// (0x00005acb) list_single_pane_t1_ParamLimits

0x5640,	// (0x00005acb) list_single_pane_t1

0x20f4,	// (0x0000257f) list_single_number_pane_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_number_pane_g1

0x319e,	// (0x00003629) list_single_number_pane_g2_ParamLimits

0x319e,	// (0x00003629) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_number_pane_g

0x3288,	// (0x00003713) list_single_number_pane_t1_ParamLimits

0x3288,	// (0x00003713) list_single_number_pane_t1

0xcf6a,	// (0x0000d3f5) list_single_number_pane_t2_ParamLimits

0xcf6a,	// (0x0000d3f5) list_single_number_pane_t2

0x0001,

0xf95f,	// (0x0000fdea) list_single_number_pane_t_ParamLimits

0xf95f,	// (0x0000fdea) list_single_number_pane_t

0x6e37,	// (0x000072c2) list_single_graphic_pane_g1_ParamLimits

0x6e37,	// (0x000072c2) list_single_graphic_pane_g1

0x20f4,	// (0x0000257f) list_single_graphic_pane_g2_ParamLimits

0x20f4,	// (0x0000257f) list_single_graphic_pane_g2

0x319e,	// (0x00003629) list_single_graphic_pane_g3_ParamLimits

0x319e,	// (0x00003629) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x0000fa68) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x0000fa68) list_single_graphic_pane_g

0xb4be,	// (0x0000b949) list_single_graphic_pane_t1_ParamLimits

0xb4be,	// (0x0000b949) list_single_graphic_pane_t1

0x20f4,	// (0x0000257f) list_single_heading_pane_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_heading_pane_g1

0x319e,	// (0x00003629) list_single_heading_pane_g2_ParamLimits

0x319e,	// (0x00003629) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_heading_pane_g

0x5662,	// (0x00005aed) list_single_heading_pane_t1_ParamLimits

0x5662,	// (0x00005aed) list_single_heading_pane_t1

0xb4d4,	// (0x0000b95f) list_single_heading_pane_t2_ParamLimits

0xb4d4,	// (0x0000b95f) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x0000fa74) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x0000fa74) list_single_heading_pane_t

0x20f4,	// (0x0000257f) list_single_number_heading_pane_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_number_heading_pane_g1

0x319e,	// (0x00003629) list_single_number_heading_pane_g2_ParamLimits

0x319e,	// (0x00003629) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_number_heading_pane_g

0x5662,	// (0x00005aed) list_single_number_heading_pane_t1_ParamLimits

0x5662,	// (0x00005aed) list_single_number_heading_pane_t1

0xb4e6,	// (0x0000b971) list_single_number_heading_pane_t2_ParamLimits

0xb4e6,	// (0x0000b971) list_single_number_heading_pane_t2

0x561a,	// (0x00005aa5) list_single_number_heading_pane_t3_ParamLimits

0x561a,	// (0x00005aa5) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x0000fa79) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x0000fa79) list_single_number_heading_pane_t

0x3192,	// (0x0000361d) list_single_graphic_heading_pane_g1_ParamLimits

0x3192,	// (0x0000361d) list_single_graphic_heading_pane_g1

0xb4f8,	// (0x0000b983) list_single_graphic_heading_pane_g4_ParamLimits

0xb4f8,	// (0x0000b983) list_single_graphic_heading_pane_g4

0x319e,	// (0x00003629) list_single_graphic_heading_pane_g5_ParamLimits

0x319e,	// (0x00003629) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x0000fa80) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x0000fa80) list_single_graphic_heading_pane_g

0x5662,	// (0x00005aed) list_single_graphic_heading_pane_t1_ParamLimits

0x5662,	// (0x00005aed) list_single_graphic_heading_pane_t1

0xb509,	// (0x0000b994) list_single_graphic_heading_pane_t2_ParamLimits

0xb509,	// (0x0000b994) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x0000fa87) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x0000fa87) list_single_graphic_heading_pane_t

0x5656,	// (0x00005ae1) list_single_large_graphic_pane_g1_ParamLimits

0x5656,	// (0x00005ae1) list_single_large_graphic_pane_g1

0x20f4,	// (0x0000257f) list_single_large_graphic_pane_g2_ParamLimits

0x20f4,	// (0x0000257f) list_single_large_graphic_pane_g2

0x319e,	// (0x00003629) list_single_large_graphic_pane_g3_ParamLimits

0x319e,	// (0x00003629) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x0000fa8c) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x0000fa8c) list_single_large_graphic_pane_g

0x3a8b,	// (0x00003f16) wait_border_pane_g2_copy1

0xb51b,	// (0x0000b9a6) list_single_large_graphic_pane_g4_cp2

0x5662,	// (0x00005aed) list_single_large_graphic_pane_t1_ParamLimits

0x5662,	// (0x00005aed) list_single_large_graphic_pane_t1

0xb523,	// (0x0000b9ae) list_double_pane_g1_ParamLimits

0xb523,	// (0x0000b9ae) list_double_pane_g1

0xb52f,	// (0x0000b9ba) list_double_pane_g2_ParamLimits

0xb52f,	// (0x0000b9ba) list_double_pane_g2

0x0001,

0xf608,	// (0x0000fa93) list_double_pane_g_ParamLimits

0xf608,	// (0x0000fa93) list_double_pane_g

0xb53b,	// (0x0000b9c6) list_double_pane_t1_ParamLimits

0xb53b,	// (0x0000b9c6) list_double_pane_t1

0xb551,	// (0x0000b9dc) list_double_pane_t2_ParamLimits

0xb551,	// (0x0000b9dc) list_double_pane_t2

0x0001,

0xf60d,	// (0x0000fa98) list_double_pane_t_ParamLimits

0xf60d,	// (0x0000fa98) list_double_pane_t

0xb563,	// (0x0000b9ee) list_double2_pane_g1_ParamLimits

0xb563,	// (0x0000b9ee) list_double2_pane_g1

0xb574,	// (0x0000b9ff) list_double2_pane_g2_ParamLimits

0xb574,	// (0x0000b9ff) list_double2_pane_g2

0x0001,

0xf612,	// (0x0000fa9d) list_double2_pane_g_ParamLimits

0xf612,	// (0x0000fa9d) list_double2_pane_g

0xb580,	// (0x0000ba0b) list_double2_pane_t1_ParamLimits

0xb580,	// (0x0000ba0b) list_double2_pane_t1

0xb596,	// (0x0000ba21) list_double2_pane_t2_ParamLimits

0xb596,	// (0x0000ba21) list_double2_pane_t2

0x0001,

0xf617,	// (0x0000faa2) list_double2_pane_t_ParamLimits

0xf617,	// (0x0000faa2) list_double2_pane_t

0xb523,	// (0x0000b9ae) list_double_number_pane_g1_ParamLimits

0xb523,	// (0x0000b9ae) list_double_number_pane_g1

0xb52f,	// (0x0000b9ba) list_double_number_pane_g2_ParamLimits

0xb52f,	// (0x0000b9ba) list_double_number_pane_g2

0x0001,

0xf608,	// (0x0000fa93) list_double_number_pane_g_ParamLimits

0xf608,	// (0x0000fa93) list_double_number_pane_g

0xb5a8,	// (0x0000ba33) list_double_number_pane_t1_ParamLimits

0xb5a8,	// (0x0000ba33) list_double_number_pane_t1

0xb5ba,	// (0x0000ba45) list_double_number_pane_t2_ParamLimits

0xb5ba,	// (0x0000ba45) list_double_number_pane_t2

0xb5d0,	// (0x0000ba5b) list_double_number_pane_t3_ParamLimits

0xb5d0,	// (0x0000ba5b) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x0000faa7) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x0000faa7) list_double_number_pane_t

0xb5e2,	// (0x0000ba6d) list_double_graphic_pane_g1_ParamLimits

0xb5e2,	// (0x0000ba6d) list_double_graphic_pane_g1

0xb5ee,	// (0x0000ba79) list_double_graphic_pane_g2_ParamLimits

0xb5ee,	// (0x0000ba79) list_double_graphic_pane_g2

0xb5fd,	// (0x0000ba88) list_double_graphic_pane_g3_ParamLimits

0xb5fd,	// (0x0000ba88) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x0000faae) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x0000faae) list_double_graphic_pane_g

0xb615,	// (0x0000baa0) list_double_graphic_pane_t1_ParamLimits

0xb615,	// (0x0000baa0) list_double_graphic_pane_t1

0xb62b,	// (0x0000bab6) list_double_graphic_pane_t2_ParamLimits

0xb62b,	// (0x0000bab6) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0000fab7) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0000fab7) list_double_graphic_pane_t

0x4107,	// (0x00004592) list_double2_graphic_pane_g1_ParamLimits

0x4107,	// (0x00004592) list_double2_graphic_pane_g1

0x1fa1,	// (0x0000242c) list_double2_graphic_pane_g2_ParamLimits

0x1fa1,	// (0x0000242c) list_double2_graphic_pane_g2

0xb574,	// (0x0000b9ff) list_double2_graphic_pane_g3_ParamLimits

0xb574,	// (0x0000b9ff) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x0000fabc) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x0000fabc) list_double2_graphic_pane_g

0xb63d,	// (0x0000bac8) list_double2_graphic_pane_t1_ParamLimits

0xb63d,	// (0x0000bac8) list_double2_graphic_pane_t1

0xb653,	// (0x0000bade) list_double2_graphic_pane_t2_ParamLimits

0xb653,	// (0x0000bade) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0000fac3) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0000fac3) list_double2_graphic_pane_t

0xb665,	// (0x0000baf0) list_double_large_graphic_pane_g1_ParamLimits

0xb665,	// (0x0000baf0) list_double_large_graphic_pane_g1

0xb690,	// (0x0000bb1b) list_double_large_graphic_pane_g2_ParamLimits

0xb690,	// (0x0000bb1b) list_double_large_graphic_pane_g2

0xb52f,	// (0x0000b9ba) list_double_large_graphic_pane_g3_ParamLimits

0xb52f,	// (0x0000b9ba) list_double_large_graphic_pane_g3

0xb6a1,	// (0x0000bb2c) list_double_large_graphic_pane_g4_ParamLimits

0xb6a1,	// (0x0000bb2c) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x0000fac8) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x0000fac8) list_double_large_graphic_pane_g

0xb6b4,	// (0x0000bb3f) list_double_large_graphic_pane_t1_ParamLimits

0xb6b4,	// (0x0000bb3f) list_double_large_graphic_pane_t1

0xb6cd,	// (0x0000bb58) list_double_large_graphic_pane_t2_ParamLimits

0xb6cd,	// (0x0000bb58) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0000fad3) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0000fad3) list_double_large_graphic_pane_t

0xb6df,	// (0x0000bb6a) list_double2_large_graphic_pane_g1_ParamLimits

0xb6df,	// (0x0000bb6a) list_double2_large_graphic_pane_g1

0xb563,	// (0x0000b9ee) list_double2_large_graphic_pane_g2_ParamLimits

0xb563,	// (0x0000b9ee) list_double2_large_graphic_pane_g2

0xb574,	// (0x0000b9ff) list_double2_large_graphic_pane_g3_ParamLimits

0xb574,	// (0x0000b9ff) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x0000fad8) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x0000fad8) list_double2_large_graphic_pane_g

0xb6eb,	// (0x0000bb76) list_double2_large_graphic_pane_t1_ParamLimits

0xb6eb,	// (0x0000bb76) list_double2_large_graphic_pane_t1

0xb701,	// (0x0000bb8c) list_double2_large_graphic_pane_t2_ParamLimits

0xb701,	// (0x0000bb8c) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x0000fadf) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x0000fadf) list_double2_large_graphic_pane_t

0xb713,	// (0x0000bb9e) list_double_heading_pane_g1_ParamLimits

0xb713,	// (0x0000bb9e) list_double_heading_pane_g1

0xb724,	// (0x0000bbaf) list_double_heading_pane_g2_ParamLimits

0xb724,	// (0x0000bbaf) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0000fae4) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0000fae4) list_double_heading_pane_g

0xb730,	// (0x0000bbbb) list_double_heading_pane_t1_ParamLimits

0xb730,	// (0x0000bbbb) list_double_heading_pane_t1

0xb746,	// (0x0000bbd1) list_double_heading_pane_t2_ParamLimits

0xb746,	// (0x0000bbd1) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x0000fae9) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x0000fae9) list_double_heading_pane_t

0x0b6d,	// (0x00000ff8) list_double_graphic_heading_pane_g1_ParamLimits

0x0b6d,	// (0x00000ff8) list_double_graphic_heading_pane_g1

0xb713,	// (0x0000bb9e) list_double_graphic_heading_pane_g2_ParamLimits

0xb713,	// (0x0000bb9e) list_double_graphic_heading_pane_g2

0xb724,	// (0x0000bbaf) list_double_graphic_heading_pane_g3_ParamLimits

0xb724,	// (0x0000bbaf) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x0000faee) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x0000faee) list_double_graphic_heading_pane_g

0xb758,	// (0x0000bbe3) list_double_graphic_heading_pane_t1_ParamLimits

0xb758,	// (0x0000bbe3) list_double_graphic_heading_pane_t1

0xb76e,	// (0x0000bbf9) list_double_graphic_heading_pane_t2_ParamLimits

0xb76e,	// (0x0000bbf9) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0000faf5) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0000faf5) list_double_graphic_heading_pane_t

0xb690,	// (0x0000bb1b) list_double_time_pane_g1_ParamLimits

0xb690,	// (0x0000bb1b) list_double_time_pane_g1

0xb52f,	// (0x0000b9ba) list_double_time_pane_g2_ParamLimits

0xb52f,	// (0x0000b9ba) list_double_time_pane_g2

0x0001,

0xf66f,	// (0x0000fafa) list_double_time_pane_g_ParamLimits

0xf66f,	// (0x0000fafa) list_double_time_pane_g

0xb780,	// (0x0000bc0b) list_double_time_pane_t1_ParamLimits

0xb780,	// (0x0000bc0b) list_double_time_pane_t1

0xb796,	// (0x0000bc21) list_double_time_pane_t2_ParamLimits

0xb796,	// (0x0000bc21) list_double_time_pane_t2

0xb7a8,	// (0x0000bc33) list_double_time_pane_t3_ParamLimits

0xb7a8,	// (0x0000bc33) list_double_time_pane_t3

0xb7ba,	// (0x0000bc45) list_double_time_pane_t4_ParamLimits

0xb7ba,	// (0x0000bc45) list_double_time_pane_t4

0x0003,

0xf674,	// (0x0000faff) list_double_time_pane_t_ParamLimits

0xf674,	// (0x0000faff) list_double_time_pane_t

0x1fa1,	// (0x0000242c) list_setting_pane_g1_ParamLimits

0x1fa1,	// (0x0000242c) list_setting_pane_g1

0xb574,	// (0x0000b9ff) list_setting_pane_g2_ParamLimits

0xb574,	// (0x0000b9ff) list_setting_pane_g2

0x0001,

0xf67d,	// (0x0000fb08) list_setting_pane_g_ParamLimits

0xf67d,	// (0x0000fb08) list_setting_pane_g

0xb7cc,	// (0x0000bc57) list_setting_pane_t1_ParamLimits

0xb7cc,	// (0x0000bc57) list_setting_pane_t1

0xb7e3,	// (0x0000bc6e) list_setting_pane_t2_ParamLimits

0xb7e3,	// (0x0000bc6e) list_setting_pane_t2

0x0002,

0xf682,	// (0x0000fb0d) list_setting_pane_t_ParamLimits

0xf682,	// (0x0000fb0d) list_setting_pane_t

0xb822,	// (0x0000bcad) set_value_pane_cp_ParamLimits

0xb822,	// (0x0000bcad) set_value_pane_cp

0x1fa1,	// (0x0000242c) list_setting_number_pane_g1_ParamLimits

0x1fa1,	// (0x0000242c) list_setting_number_pane_g1

0xb574,	// (0x0000b9ff) list_setting_number_pane_g2_ParamLimits

0xb574,	// (0x0000b9ff) list_setting_number_pane_g2

0x0001,

0xf67d,	// (0x0000fb08) list_setting_number_pane_g_ParamLimits

0xf67d,	// (0x0000fb08) list_setting_number_pane_g

0xb830,	// (0x0000bcbb) list_setting_number_pane_t1_ParamLimits

0xb830,	// (0x0000bcbb) list_setting_number_pane_t1

0xb844,	// (0x0000bccf) list_setting_number_pane_t2_ParamLimits

0xb844,	// (0x0000bccf) list_setting_number_pane_t2

0xb85b,	// (0x0000bce6) list_setting_number_pane_t3_ParamLimits

0xb85b,	// (0x0000bce6) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0000fb14) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0000fb14) list_setting_number_pane_t

0xb822,	// (0x0000bcad) set_value_pane_ParamLimits

0xb822,	// (0x0000bcad) set_value_pane

0x0e07,	// (0x00001292) bg_set_opt_pane_ParamLimits

0x0e07,	// (0x00001292) bg_set_opt_pane

0x0e28,	// (0x000012b3) set_value_pane_t1

0x0e36,	// (0x000012c1) slider_set_pane_cp3

0x0e3f,	// (0x000012ca) volume_small_pane_cp

0x0e48,	// (0x000012d3) list_form_gen_pane

0x0e51,	// (0x000012dc) scroll_pane_cp8

0xb89e,	// (0x0000bd29) form_field_data_pane_ParamLimits

0xb89e,	// (0x0000bd29) form_field_data_pane

0xb8b9,	// (0x0000bd44) form_field_data_wide_pane_ParamLimits

0xb8b9,	// (0x0000bd44) form_field_data_wide_pane

0xb8dd,	// (0x0000bd68) form_field_popup_pane_ParamLimits

0xb8dd,	// (0x0000bd68) form_field_popup_pane

0x0ed9,	// (0x00001364) form_field_popup_wide_pane_ParamLimits

0x0ed9,	// (0x00001364) form_field_popup_wide_pane

0x0efa,	// (0x00001385) form_field_slider_pane_ParamLimits

0x0efa,	// (0x00001385) form_field_slider_pane

0x0f0d,	// (0x00001398) form_field_slider_wide_pane_ParamLimits

0x0f0d,	// (0x00001398) form_field_slider_wide_pane

0x0f20,	// (0x000013ab) data_form_pane

0xb909,	// (0x0000bd94) form_field_data_pane_t1

0x0f50,	// (0x000013db) input_focus_pane

0x0f5e,	// (0x000013e9) data_form_wide_pane

0x0f96,	// (0x00001421) form_field_data_wide_pane_t1

0x0726,	// (0x00000bb1) input_focus_pane_cp6

0xb923,	// (0x0000bdae) form_field_popup_pane_t1

0x0f50,	// (0x000013db) input_focus_pane_cp7

0x0fd2,	// (0x0000145d) list_form_pane

0x0fe6,	// (0x00001471) form_field_popup_wide_pane_t1

0x0f50,	// (0x000013db) input_focus_pane_cp8

0x0ffb,	// (0x00001486) list_form_wide_pane

0xb945,	// (0x0000bdd0) form_field_slider_pane_t1_ParamLimits

0xb945,	// (0x0000bdd0) form_field_slider_pane_t1

0xb95d,	// (0x0000bde8) form_field_slider_pane_t2_ParamLimits

0xb95d,	// (0x0000bde8) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0000fb24) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0000fb24) form_field_slider_pane_t

0x03aa,	// (0x00000835) input_focus_pane_cp9_ParamLimits

0x03aa,	// (0x00000835) input_focus_pane_cp9

0xb972,	// (0x0000bdfd) slider_cont_pane_ParamLimits

0xb972,	// (0x0000bdfd) slider_cont_pane

0x104c,	// (0x000014d7) form_field_slider_wide_pane_t1_ParamLimits

0x104c,	// (0x000014d7) form_field_slider_wide_pane_t1

0x105e,	// (0x000014e9) form_field_slider_wide_pane_t2_ParamLimits

0x105e,	// (0x000014e9) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x0000fb29) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x0000fb29) form_field_slider_wide_pane_t

0x03aa,	// (0x00000835) input_focus_pane_cp10_ParamLimits

0x03aa,	// (0x00000835) input_focus_pane_cp10

0xb986,	// (0x0000be11) slider_cont_pane_cp1_ParamLimits

0xb986,	// (0x0000be11) slider_cont_pane_cp1

0xb99a,	// (0x0000be25) slider_form_pane_cp

0x108c,	// (0x00001517) input_focus_pane_g1

0x1094,	// (0x0000151f) input_focus_pane_g2

0x109c,	// (0x00001527) input_focus_pane_g3

0x10a4,	// (0x0000152f) input_focus_pane_g4

0x10ac,	// (0x00001537) input_focus_pane_g5

0x10b4,	// (0x0000153f) input_focus_pane_g6

0x10bc,	// (0x00001547) input_focus_pane_g7

0x10c4,	// (0x0000154f) input_focus_pane_g8

0x10cc,	// (0x00001557) input_focus_pane_g9

0xf31a,	// (0x0000f7a5) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x0000fb2e) input_focus_pane_g

0x3a94,	// (0x00003f1f) wait_border_pane_g3_copy1

0xb9a2,	// (0x0000be2d) data_form_pane_t1

0xf31a,	// (0x0000f7a5) wait_anim_pane_g1_copy1

0xd121,	// (0x0000d5ac) data_form_wide_pane_t1

0x10f3,	// (0x0000157e) list_form_graphic_pane_cp_ParamLimits

0x10f3,	// (0x0000157e) list_form_graphic_pane_cp

0x4c89,	// (0x00005114) slider_form_pane_g1

0x4c92,	// (0x0000511d) slider_form_pane_g2

0x0006,

0xf98f,	// (0x0000fe1a) slider_form_pane_g

0xb9be,	// (0x0000be49) list_form_graphic_pane_ParamLimits

0xb9be,	// (0x0000be49) list_form_graphic_pane

0x1105,	// (0x00001590) list_form_graphic_pane_g1

0x110d,	// (0x00001598) list_form_graphic_pane_t1_ParamLimits

0x110d,	// (0x00001598) list_form_graphic_pane_t1

0x0084,	// (0x0000050f) list_highlight_pane_cp5_ParamLimits

0x0084,	// (0x0000050f) list_highlight_pane_cp5

0xb9cf,	// (0x0000be5a) find_pane_g1

0x112b,	// (0x000015b6) input_find_pane

0xb9d8,	// (0x0000be63) input_find_pane_g1_ParamLimits

0xb9d8,	// (0x0000be63) input_find_pane_g1

0xb9e4,	// (0x0000be6f) input_find_pane_t1_ParamLimits

0xb9e4,	// (0x0000be6f) input_find_pane_t1

0xb9f9,	// (0x0000be84) input_find_pane_t2_ParamLimits

0xb9f9,	// (0x0000be84) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0000fb43) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0000fb43) input_find_pane_t

0x116a,	// (0x000015f5) input_focus_pane_cp5_ParamLimits

0x116a,	// (0x000015f5) input_focus_pane_cp5

0xba1a,	// (0x0000bea5) bg_popup_window_pane_cp2_ParamLimits

0xba1a,	// (0x0000bea5) bg_popup_window_pane_cp2

0xba27,	// (0x0000beb2) listscroll_menu_pane_ParamLimits

0xba27,	// (0x0000beb2) listscroll_menu_pane

0xba33,	// (0x0000bebe) popup_submenu_window_ParamLimits

0xba33,	// (0x0000bebe) popup_submenu_window

0x11cd,	// (0x00001658) find_popup_pane_g1

0x11d5,	// (0x00001660) input_popup_find_pane_cp

0x116a,	// (0x000015f5) input_focus_pane_cp4_ParamLimits

0x116a,	// (0x000015f5) input_focus_pane_cp4

0x11ed,	// (0x00001678) input_popup_find_pane_t1_ParamLimits

0x11ed,	// (0x00001678) input_popup_find_pane_t1

0xf493,	// (0x0000f91e) bg_popup_sub_pane_cp

0x121b,	// (0x000016a6) listscroll_popup_sub_pane

0x1223,	// (0x000016ae) list_submenu_pane_ParamLimits

0x1223,	// (0x000016ae) list_submenu_pane

0x1234,	// (0x000016bf) scroll_pane_cp4

0x123c,	// (0x000016c7) list_single_popup_submenu_pane_ParamLimits

0x123c,	// (0x000016c7) list_single_popup_submenu_pane

0x1251,	// (0x000016dc) list_single_popup_submenu_pane_g1

0x1259,	// (0x000016e4) list_single_popup_submenu_pane_t1_ParamLimits

0x1259,	// (0x000016e4) list_single_popup_submenu_pane_t1

0x03aa,	// (0x00000835) bg_active_tab_pane_cp1_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp1

0xba71,	// (0x0000befc) tabs_2_active_pane_g1

0xba79,	// (0x0000bf04) tabs_2_active_pane_t1

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp1_ParamLimits

0x03aa,	// (0x00000835) bg_passive_tab_pane_cp1

0xba71,	// (0x0000befc) tabs_2_passive_pane_g1

0xba79,	// (0x0000bf04) tabs_2_passive_pane_t1

0x0084,	// (0x0000050f) bg_active_tab_pane_cp4

0xba8b,	// (0x0000bf16) tabs_2_long_active_pane_t1

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp4

0x3367,	// (0x000037f2) list_single_midp_graphic_pane_g4_ParamLimits

0x0084,	// (0x0000050f) bg_active_tab_pane_cp5

0xba9e,	// (0x0000bf29) tabs_3_long_active_pane_t1

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp5

0x3367,	// (0x000037f2) list_single_midp_graphic_pane_g4

0x0084,	// (0x0000050f) bg_popup_window_pane_cp13_ParamLimits

0x0084,	// (0x0000050f) bg_popup_window_pane_cp13

0x12d0,	// (0x0000175b) listscroll_popup_fast_pane_ParamLimits

0x12d0,	// (0x0000175b) listscroll_popup_fast_pane

0x12df,	// (0x0000176a) grid_popup_fast_pane_ParamLimits

0x12df,	// (0x0000176a) grid_popup_fast_pane

0x12f1,	// (0x0000177c) scroll_pane_cp9_ParamLimits

0x12f1,	// (0x0000177c) scroll_pane_cp9

0x6eb1,	// (0x0000733c) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x6eb1,	// (0x0000733c) list_single_graphic_hl_pane_t1_cp2

0x1315,	// (0x000017a0) input_focus_pane_cp20_ParamLimits

0x1315,	// (0x000017a0) input_focus_pane_cp20

0x1323,	// (0x000017ae) query_popup_data_pane_t1_ParamLimits

0x1323,	// (0x000017ae) query_popup_data_pane_t1

0x1336,	// (0x000017c1) query_popup_data_pane_t2_ParamLimits

0x1336,	// (0x000017c1) query_popup_data_pane_t2

0x137c,	// (0x00001807) query_popup_data_pane_t3_ParamLimits

0x137c,	// (0x00001807) query_popup_data_pane_t3

0x13bd,	// (0x00001848) query_popup_data_pane_t4_ParamLimits

0x13bd,	// (0x00001848) query_popup_data_pane_t4

0x13f9,	// (0x00001884) query_popup_data_pane_t5_ParamLimits

0x13f9,	// (0x00001884) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x0000fb48) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x0000fb48) query_popup_data_pane_t

0x108c,	// (0x00001517) bg_set_opt_pane_g1

0x1094,	// (0x0000151f) bg_set_opt_pane_g2

0x109c,	// (0x00001527) bg_set_opt_pane_g3

0x10a4,	// (0x0000152f) bg_set_opt_pane_g4

0x10ac,	// (0x00001537) bg_set_opt_pane_g5

0x10b4,	// (0x0000153f) bg_set_opt_pane_g6

0x10bc,	// (0x00001547) bg_set_opt_pane_g7

0x10c4,	// (0x0000154f) bg_set_opt_pane_g8

0x10cc,	// (0x00001557) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x0000fb53) bg_set_opt_pane_g

0x1cd4,	// (0x0000215f) control_top_pane_stacon_ParamLimits

0x1cd4,	// (0x0000215f) control_top_pane_stacon

0x1d27,	// (0x000021b2) signal_pane_stacon_ParamLimits

0x1d27,	// (0x000021b2) signal_pane_stacon

0x1d4c,	// (0x000021d7) stacon_top_pane_g1_ParamLimits

0x1d4c,	// (0x000021d7) stacon_top_pane_g1

0x1d6e,	// (0x000021f9) title_pane_stacon_ParamLimits

0x1d6e,	// (0x000021f9) title_pane_stacon

0x1d98,	// (0x00002223) uni_indicator_pane_stacon_ParamLimits

0x1d98,	// (0x00002223) uni_indicator_pane_stacon

0x1db0,	// (0x0000223b) battery_pane_stacon_ParamLimits

0x1db0,	// (0x0000223b) battery_pane_stacon

0x1df4,	// (0x0000227f) control_bottom_pane_stacon_ParamLimits

0x1df4,	// (0x0000227f) control_bottom_pane_stacon

0x1e17,	// (0x000022a2) navi_pane_stacon_ParamLimits

0x1e17,	// (0x000022a2) navi_pane_stacon

0x1e3a,	// (0x000022c5) stacon_bottom_pane_g1_ParamLimits

0x1e3a,	// (0x000022c5) stacon_bottom_pane_g1

0x1430,	// (0x000018bb) aid_levels_signal_lsc_ParamLimits

0x1430,	// (0x000018bb) aid_levels_signal_lsc

0x1447,	// (0x000018d2) signal_pane_stacon_g1_ParamLimits

0x1447,	// (0x000018d2) signal_pane_stacon_g1

0x145b,	// (0x000018e6) signal_pane_stacon_g2_ParamLimits

0x145b,	// (0x000018e6) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x0000fb66) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x0000fb66) signal_pane_stacon_g

0x149d,	// (0x00001928) title_pane_stacon_t1_ParamLimits

0x149d,	// (0x00001928) title_pane_stacon_t1

0x14c2,	// (0x0000194d) uni_indicator_pane_stacon_g1

0x14cc,	// (0x00001957) uni_indicator_pane_stacon_g2

0x14d6,	// (0x00001961) uni_indicator_pane_stacon_g3

0x14e0,	// (0x0000196b) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x0000fb72) uni_indicator_pane_stacon_g

0x14ea,	// (0x00001975) control_top_pane_stacon_g1

0x14f2,	// (0x0000197d) control_top_pane_stacon_t1_ParamLimits

0x14f2,	// (0x0000197d) control_top_pane_stacon_t1

0x1529,	// (0x000019b4) aid_levels_battery_lsc_ParamLimits

0x1529,	// (0x000019b4) aid_levels_battery_lsc

0x1541,	// (0x000019cc) battery_pane_stacon_g1_ParamLimits

0x1541,	// (0x000019cc) battery_pane_stacon_g1

0x1554,	// (0x000019df) battery_pane_stacon_g2_ParamLimits

0x1554,	// (0x000019df) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x0000fb7b) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x0000fb7b) battery_pane_stacon_g

0x1592,	// (0x00001a1d) navi_icon_pane_stacon

0x15a6,	// (0x00001a31) navi_navi_pane_stacon

0x1592,	// (0x00001a1d) navi_text_pane_stacon

0x14ea,	// (0x00001975) control_bottom_pane_stacon_g1

0x15bc,	// (0x00001a47) control_bottom_pane_stacon_t1_ParamLimits

0x15bc,	// (0x00001a47) control_bottom_pane_stacon_t1

0xbab0,	// (0x0000bf3b) grid_app_pane_ParamLimits

0xbab0,	// (0x0000bf3b) grid_app_pane

0xbae8,	// (0x0000bf73) scroll_pane_cp15_ParamLimits

0xbae8,	// (0x0000bf73) scroll_pane_cp15

0xbb05,	// (0x0000bf90) cell_app_pane_ParamLimits

0xbb05,	// (0x0000bf90) cell_app_pane

0xbb46,	// (0x0000bfd1) cell_app_pane_g1_ParamLimits

0xbb46,	// (0x0000bfd1) cell_app_pane_g1

0x1696,	// (0x00001b21) cell_app_pane_g2_ParamLimits

0x1696,	// (0x00001b21) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x0000fb80) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x0000fb80) cell_app_pane_g

0x16a2,	// (0x00001b2d) cell_app_pane_t1_ParamLimits

0x16a2,	// (0x00001b2d) cell_app_pane_t1

0x16b4,	// (0x00001b3f) grid_highlight_pane_ParamLimits

0x16b4,	// (0x00001b3f) grid_highlight_pane

0x108c,	// (0x00001517) cell_highlight_pane_g1

0x1094,	// (0x0000151f) cell_highlight_pane_g2

0x109c,	// (0x00001527) cell_highlight_pane_g3

0x10a4,	// (0x0000152f) cell_highlight_pane_g4

0x10ac,	// (0x00001537) cell_highlight_pane_g5

0x10b4,	// (0x0000153f) cell_highlight_pane_g6

0x10bc,	// (0x00001547) cell_highlight_pane_g7

0x10c4,	// (0x0000154f) cell_highlight_pane_g8

0x10cc,	// (0x00001557) cell_highlight_pane_g9

0xf31a,	// (0x0000f7a5) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x0000fb2e) cell_highlight_pane_g

0x16d8,	// (0x00001b63) bg_scroll_pane

0x16f7,	// (0x00001b82) scroll_handle_pane

0x1748,	// (0x00001bd3) scroll_bg_pane_g1

0x175d,	// (0x00001be8) scroll_bg_pane_g2

0x1775,	// (0x00001c00) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x0000fb85) scroll_bg_pane_g

0x178a,	// (0x00001c15) scroll_handle_focus_pane_ParamLimits

0x178a,	// (0x00001c15) scroll_handle_focus_pane

0x1748,	// (0x00001bd3) scroll_handle_pane_g1

0x1797,	// (0x00001c22) scroll_handle_pane_g2

0x1775,	// (0x00001c00) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x0000fb8c) scroll_handle_pane_g

0x116a,	// (0x000015f5) bg_popup_sub_pane_cp21_ParamLimits

0x116a,	// (0x000015f5) bg_popup_sub_pane_cp21

0x17ab,	// (0x00001c36) popup_fep_japan_predictive_window_t1_ParamLimits

0x17ab,	// (0x00001c36) popup_fep_japan_predictive_window_t1

0x17c2,	// (0x00001c4d) popup_fep_japan_predictive_window_t2_ParamLimits

0x17c2,	// (0x00001c4d) popup_fep_japan_predictive_window_t2

0x17f5,	// (0x00001c80) popup_fep_japan_predictive_window_t3_ParamLimits

0x17f5,	// (0x00001c80) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x0000fb93) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x0000fb93) popup_fep_japan_predictive_window_t

0xf493,	// (0x0000f91e) bg_popup_sub_pane_cp23

0x182c,	// (0x00001cb7) listscroll_japin_cand_pane

0x1834,	// (0x00001cbf) popup_fep_japan_candidate_window_t1

0x1842,	// (0x00001ccd) candidate_pane_ParamLimits

0x1842,	// (0x00001ccd) candidate_pane

0x1854,	// (0x00001cdf) scroll_pane_cp30

0x185e,	// (0x00001ce9) list_single_popup_jap_candidate_pane_ParamLimits

0x185e,	// (0x00001ce9) list_single_popup_jap_candidate_pane

0xf493,	// (0x0000f91e) list_highlight_pane_cp30

0x1872,	// (0x00001cfd) list_single_popup_jap_candidate_pane_t1

0xbb73,	// (0x0000bffe) level_1_signal

0xbb85,	// (0x0000c010) level_2_signal

0xbb98,	// (0x0000c023) level_3_signal

0xbbab,	// (0x0000c036) level_4_signal

0xbbbe,	// (0x0000c049) level_5_signal

0xbbd1,	// (0x0000c05c) level_6_signal

0xbbe4,	// (0x0000c06f) level_7_signal

0xbb73,	// (0x0000bffe) level_1_battery

0xbb85,	// (0x0000c010) level_2_battery

0xbb98,	// (0x0000c023) level_3_battery

0xbbab,	// (0x0000c036) level_4_battery

0xbbbe,	// (0x0000c049) level_5_battery

0xbbd1,	// (0x0000c05c) level_6_battery

0xbbe4,	// (0x0000c06f) level_7_battery

0x1913,	// (0x00001d9e) list_menu_pane_ParamLimits

0x1913,	// (0x00001d9e) list_menu_pane

0x1924,	// (0x00001daf) scroll_pane_cp25_ParamLimits

0x1924,	// (0x00001daf) scroll_pane_cp25

0x193d,	// (0x00001dc8) list_double2_graphic_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double2_graphic_pane_cp2

0x193d,	// (0x00001dc8) list_double2_large_graphic_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double2_large_graphic_pane_cp2

0x193d,	// (0x00001dc8) list_double2_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double2_pane_cp2

0x193d,	// (0x00001dc8) list_double_graphic_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double_graphic_pane_cp2

0x193d,	// (0x00001dc8) list_double_large_graphic_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double_large_graphic_pane_cp2

0x193d,	// (0x00001dc8) list_double_number_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double_number_pane_cp2

0x193d,	// (0x00001dc8) list_double_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double_pane_cp2

0xbbf7,	// (0x0000c082) list_single_2graphic_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_2graphic_pane_cp2

0xbbf7,	// (0x0000c082) list_single_graphic_heading_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_graphic_heading_pane_cp2

0xbbf7,	// (0x0000c082) list_single_graphic_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_graphic_pane_cp2

0xbbf7,	// (0x0000c082) list_single_heading_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_heading_pane_cp2

0x1980,	// (0x00001e0b) list_single_large_graphic_pane_cp2_ParamLimits

0x1980,	// (0x00001e0b) list_single_large_graphic_pane_cp2

0xbbf7,	// (0x0000c082) list_single_number_heading_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_number_heading_pane_cp2

0xbbf7,	// (0x0000c082) list_single_number_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_number_pane_cp2

0xbbf7,	// (0x0000c082) list_single_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_pane_cp2

0x1a30,	// (0x00001ebb) bg_popup_sub_pane_cp22

0x1a55,	// (0x00001ee0) popup_side_volume_key_window_g1

0x1a7f,	// (0x00001f0a) popup_side_volume_key_window_t1

0x1a9d,	// (0x00001f28) volume_small_pane_cp1

0x03aa,	// (0x00000835) bg_popup_sub_pane_cp24_ParamLimits

0x03aa,	// (0x00000835) bg_popup_sub_pane_cp24

0x1aa5,	// (0x00001f30) fep_china_uni_candidate_pane_ParamLimits

0x1aa5,	// (0x00001f30) fep_china_uni_candidate_pane

0x1ab9,	// (0x00001f44) fep_china_uni_entry_pane

0x1ac9,	// (0x00001f54) popup_fep_china_uni_window_g1

0x1ae5,	// (0x00001f70) fep_china_uni_entry_pane_g1

0x1aef,	// (0x00001f7a) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x0000fbc0) fep_china_uni_entry_pane_g

0x1af9,	// (0x00001f84) fep_entry_item_pane

0x1b03,	// (0x00001f8e) fep_candidate_item_pane

0x1b0b,	// (0x00001f96) fep_china_uni_candidate_pane_g1

0x1b15,	// (0x00001fa0) fep_china_uni_candidate_pane_g2

0x1b1d,	// (0x00001fa8) fep_china_uni_candidate_pane_g3

0x1b25,	// (0x00001fb0) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0000fbc5) fep_china_uni_candidate_pane_g

0xf31a,	// (0x0000f7a5) fep_entry_item_pane_g1

0x1b2f,	// (0x00001fba) fep_entry_item_pane_t1_ParamLimits

0x1b2f,	// (0x00001fba) fep_entry_item_pane_t1

0x1b45,	// (0x00001fd0) fep_candidate_item_pane_t1_ParamLimits

0x1b45,	// (0x00001fd0) fep_candidate_item_pane_t1

0x1b5a,	// (0x00001fe5) fep_candidate_item_pane_t2_ParamLimits

0x1b5a,	// (0x00001fe5) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x0000fbce) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x0000fbce) fep_candidate_item_pane_t

0x0084,	// (0x0000050f) list_highlight_pane_cp31_ParamLimits

0x0084,	// (0x0000050f) list_highlight_pane_cp31

0x1b6c,	// (0x00001ff7) level_1_signal_lsc

0x1b75,	// (0x00002000) level_2_signal_lsc

0x1b7e,	// (0x00002009) level_3_signal_lsc

0x1b87,	// (0x00002012) level_4_signal_lsc

0x1b90,	// (0x0000201b) level_5_signal_lsc

0x1b99,	// (0x00002024) level_6_signal_lsc

0x1ba2,	// (0x0000202d) level_7_signal_lsc

0x1ba2,	// (0x0000202d) level_1_battery_lsc

0x1bab,	// (0x00002036) level_2_battery_lsc

0x1bb4,	// (0x0000203f) level_3_battery_lsc

0x1bbd,	// (0x00002048) level_4_battery_lsc

0x1bc6,	// (0x00002051) level_5_battery_lsc

0x1bcf,	// (0x0000205a) level_6_battery_lsc

0x1b6c,	// (0x00001ff7) level_7_battery_lsc

0x1bd8,	// (0x00002063) scroll_handle_focus_pane_g1

0x1be1,	// (0x0000206c) scroll_handle_focus_pane_g2

0x1bea,	// (0x00002075) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0000fbd3) scroll_handle_focus_pane_g

0xbc5a,	// (0x0000c0e5) list_single_2graphic_pane_g1_ParamLimits

0xbc5a,	// (0x0000c0e5) list_single_2graphic_pane_g1

0xb4f8,	// (0x0000b983) list_single_2graphic_pane_g2_ParamLimits

0xb4f8,	// (0x0000b983) list_single_2graphic_pane_g2

0x319e,	// (0x00003629) list_single_2graphic_pane_g3_ParamLimits

0x319e,	// (0x00003629) list_single_2graphic_pane_g3

0xbc66,	// (0x0000c0f1) list_single_2graphic_pane_g4_ParamLimits

0xbc66,	// (0x0000c0f1) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x0000fbda) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x0000fbda) list_single_2graphic_pane_g

0xbc77,	// (0x0000c102) list_single_2graphic_pane_t1_ParamLimits

0xbc77,	// (0x0000c102) list_single_2graphic_pane_t1

0xbca5,	// (0x0000c130) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbca5,	// (0x0000c130) list_double2_graphic_large_graphic_pane_g1

0xb563,	// (0x0000b9ee) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb563,	// (0x0000b9ee) list_double2_graphic_large_graphic_pane_g2

0xb574,	// (0x0000b9ff) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb574,	// (0x0000b9ff) list_double2_graphic_large_graphic_pane_g3

0x3367,	// (0x000037f2) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x3367,	// (0x000037f2) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0000fbe3) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0000fbe3) list_double2_graphic_large_graphic_pane_g

0xbcb7,	// (0x0000c142) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbcb7,	// (0x0000c142) list_double2_graphic_large_graphic_pane_t1

0xbccd,	// (0x0000c158) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbccd,	// (0x0000c158) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x0000fbec) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x0000fbec) list_double2_graphic_large_graphic_pane_t

0x1efc,	// (0x00002387) popup_fast_swap_window_ParamLimits

0x1efc,	// (0x00002387) popup_fast_swap_window

0x1f1a,	// (0x000023a5) popup_side_volume_key_window

0x1f38,	// (0x000023c3) stacon_top_pane

0x1f42,	// (0x000023cd) status_pane_ParamLimits

0x1f42,	// (0x000023cd) status_pane

0x1f38,	// (0x000023c3) status_small_pane

0xf493,	// (0x0000f91e) control_pane

0xf493,	// (0x0000f91e) stacon_bottom_pane

0x0e51,	// (0x000012dc) scroll_pane_cp121

0x0e48,	// (0x000012d3) set_content_pane

0xbcdf,	// (0x0000c16a) bg_active_tab_pane_g1_cp1

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp1

0xbce8,	// (0x0000c173) bg_active_tab_pane_g3_cp1

0xbcdf,	// (0x0000c16a) bg_passive_tab_pane_g1_cp1

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp1

0xbce8,	// (0x0000c173) bg_passive_tab_pane_g3_cp1

0xbcf1,	// (0x0000c17c) bg_active_tab_pane_g1_cp2

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp2

0xbcfa,	// (0x0000c185) bg_active_tab_pane_g3_cp2

0xbcf1,	// (0x0000c17c) bg_passive_tab_pane_g1_cp2

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp2

0xbcfa,	// (0x0000c185) bg_passive_tab_pane_g3_cp2

0xbd03,	// (0x0000c18e) bg_active_tab_pane_g1_cp3

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp3

0xbd0c,	// (0x0000c197) bg_active_tab_pane_g3_cp3

0xbd03,	// (0x0000c18e) bg_passive_tab_pane_g1_cp3

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp3

0xbd0c,	// (0x0000c197) bg_passive_tab_pane_g3_cp3

0xbd15,	// (0x0000c1a0) bg_active_tab_pane_g1_cp4

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp4

0xbd1e,	// (0x0000c1a9) bg_active_tab_pane_g3_cp4

0xbd15,	// (0x0000c1a0) bg_passive_tab_pane_g1_cp4

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp4

0xbd1e,	// (0x0000c1a9) bg_passive_tab_pane_g3_cp4

0x1e56,	// (0x000022e1) bg_active_tab_pane_g1_cp5

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp5

0x1e5f,	// (0x000022ea) bg_active_tab_pane_g3_cp5

0x1e56,	// (0x000022e1) bg_passive_tab_pane_g1_cp5

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp5

0x1e5f,	// (0x000022ea) bg_passive_tab_pane_g3_cp5

0x123c,	// (0x000016c7) list_set_graphic_pane_ParamLimits

0x123c,	// (0x000016c7) list_set_graphic_pane

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp4

0xbd27,	// (0x0000c1b2) list_set_graphic_pane_g1_ParamLimits

0xbd27,	// (0x0000c1b2) list_set_graphic_pane_g1

0xbd33,	// (0x0000c1be) list_set_graphic_pane_g2_ParamLimits

0xbd33,	// (0x0000c1be) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x0000fbf1) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x0000fbf1) list_set_graphic_pane_g

0x0009,

0xfad7,	// (0x0000ff62) volume_small_pane_cp_g

0x1ead,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x1ead,	// (0x00002338) list_double2_large_graphic_pane_g1_cp2

0x1ebb,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x1ebb,	// (0x00002346) list_double2_large_graphic_pane_g2_cp2

0x1ecc,	// (0x00002357) list_double2_large_graphic_pane_g3_cp2

0x1ed4,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x1ed4,	// (0x0000235f) list_double2_large_graphic_pane_t1_cp2

0x1eea,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x1eea,	// (0x00002375) list_double2_large_graphic_pane_t2_cp2

0x46ea,	// (0x00004b75) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x46ea,	// (0x00004b75) list_double_large_graphic_pane_g1_cp2

0x46fd,	// (0x00004b88) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x46fd,	// (0x00004b88) list_double_large_graphic_pane_g2_cp2

0x2060,	// (0x000024eb) list_double_large_graphic_pane_g3_cp2

0x470e,	// (0x00004b99) list_double_large_graphic_pane_g4_cp

0x4716,	// (0x00004ba1) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x4716,	// (0x00004ba1) list_double_large_graphic_pane_t1_cp2

0x472d,	// (0x00004bb8) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x472d,	// (0x00004bb8) list_double_large_graphic_pane_t2_cp2

0x1f50,	// (0x000023db) list_double2_graphic_pane_g1_cp2_ParamLimits

0x1f50,	// (0x000023db) list_double2_graphic_pane_g1_cp2

0x1f5e,	// (0x000023e9) list_double2_graphic_pane_g2_cp2_ParamLimits

0x1f5e,	// (0x000023e9) list_double2_graphic_pane_g2_cp2

0x1f6f,	// (0x000023fa) list_double2_graphic_pane_g3_cp2

0x1f79,	// (0x00002404) list_double2_graphic_pane_t1_cp2_ParamLimits

0x1f79,	// (0x00002404) list_double2_graphic_pane_t1_cp2

0x1f8f,	// (0x0000241a) list_double2_graphic_pane_t2_cp2_ParamLimits

0x1f8f,	// (0x0000241a) list_double2_graphic_pane_t2_cp2

0x1fa1,	// (0x0000242c) list_single_number_heading_pane_g1_cp2_ParamLimits

0x1fa1,	// (0x0000242c) list_single_number_heading_pane_g1_cp2

0x1fad,	// (0x00002438) list_single_number_heading_pane_g2_cp2

0x1fb5,	// (0x00002440) list_single_number_heading_pane_t1_cp2_ParamLimits

0x1fb5,	// (0x00002440) list_single_number_heading_pane_t1_cp2

0x1fcb,	// (0x00002456) list_single_number_heading_pane_t2_cp2_ParamLimits

0x1fcb,	// (0x00002456) list_single_number_heading_pane_t2_cp2

0x1fdf,	// (0x0000246a) list_single_number_heading_pane_t3_cp2_ParamLimits

0x1fdf,	// (0x0000246a) list_single_number_heading_pane_t3_cp2

0x1fa1,	// (0x0000242c) list_single_heading_pane_g1_cp2_ParamLimits

0x1fa1,	// (0x0000242c) list_single_heading_pane_g1_cp2

0x1fad,	// (0x00002438) list_single_heading_pane_g2_cp2

0x1fb5,	// (0x00002440) list_single_heading_pane_t1_cp2_ParamLimits

0x1fb5,	// (0x00002440) list_single_heading_pane_t1_cp2

0x44e4,	// (0x0000496f) list_single_heading_pane_t2_cp2_ParamLimits

0x44e4,	// (0x0000496f) list_single_heading_pane_t2_cp2

0x4426,	// (0x000048b1) list_double_graphic_pane_g1_cp2_ParamLimits

0x4426,	// (0x000048b1) list_double_graphic_pane_g1_cp2

0x4432,	// (0x000048bd) list_double_graphic_pane_g2_cp2_ParamLimits

0x4432,	// (0x000048bd) list_double_graphic_pane_g2_cp2

0x4441,	// (0x000048cc) list_double_graphic_pane_g3_cp2

0x4449,	// (0x000048d4) list_double_graphic_pane_t1_cp2_ParamLimits

0x4449,	// (0x000048d4) list_double_graphic_pane_t1_cp2

0x445f,	// (0x000048ea) list_double_graphic_pane_t2_cp2_ParamLimits

0x445f,	// (0x000048ea) list_double_graphic_pane_t2_cp2

0x2054,	// (0x000024df) list_double_number_pane_g1_cp2_ParamLimits

0x2054,	// (0x000024df) list_double_number_pane_g1_cp2

0x2060,	// (0x000024eb) list_double_number_pane_g2_cp2

0x43ea,	// (0x00004875) list_double_number_pane_t1_cp2_ParamLimits

0x43ea,	// (0x00004875) list_double_number_pane_t1_cp2

0x43fe,	// (0x00004889) list_double_number_pane_t2_cp2_ParamLimits

0x43fe,	// (0x00004889) list_double_number_pane_t2_cp2

0x4414,	// (0x0000489f) list_double_number_pane_t3_cp2_ParamLimits

0x4414,	// (0x0000489f) list_double_number_pane_t3_cp2

0x42c2,	// (0x0000474d) list_single_graphic_pane_g1_cp2_ParamLimits

0x42c2,	// (0x0000474d) list_single_graphic_pane_g1_cp2

0x20ba,	// (0x00002545) list_single_graphic_pane_g2_cp2_ParamLimits

0x20ba,	// (0x00002545) list_single_graphic_pane_g2_cp2

0x20c6,	// (0x00002551) list_single_graphic_pane_g3_cp2

0x4298,	// (0x00004723) list_single_graphic_pane_t1_cp2_ParamLimits

0x4298,	// (0x00004723) list_single_graphic_pane_t1_cp2

0x20ba,	// (0x00002545) list_single_number_pane_g1_cp2_ParamLimits

0x20ba,	// (0x00002545) list_single_number_pane_g1_cp2

0x20c6,	// (0x00002551) list_single_number_pane_g2_cp2

0x4298,	// (0x00004723) list_single_number_pane_t1_cp2_ParamLimits

0x4298,	// (0x00004723) list_single_number_pane_t1_cp2

0x42ae,	// (0x00004739) list_single_number_pane_t2_cp2_ParamLimits

0x42ae,	// (0x00004739) list_single_number_pane_t2_cp2

0x1ebb,	// (0x00002346) list_double2_pane_g1_cp2_ParamLimits

0x1ebb,	// (0x00002346) list_double2_pane_g1_cp2

0x1ecc,	// (0x00002357) list_double2_pane_g2_cp2

0x202c,	// (0x000024b7) list_double2_pane_t1_cp2_ParamLimits

0x202c,	// (0x000024b7) list_double2_pane_t1_cp2

0x2042,	// (0x000024cd) list_double2_pane_t2_cp2_ParamLimits

0x2042,	// (0x000024cd) list_double2_pane_t2_cp2

0x2054,	// (0x000024df) list_double_pane_g1_cp2_ParamLimits

0x2054,	// (0x000024df) list_double_pane_g1_cp2

0x2060,	// (0x000024eb) list_double_pane_g2_cp2

0x2068,	// (0x000024f3) list_double_pane_t1_cp2_ParamLimits

0x2068,	// (0x000024f3) list_double_pane_t1_cp2

0x207e,	// (0x00002509) list_double_pane_t2_cp2_ParamLimits

0x207e,	// (0x00002509) list_double_pane_t2_cp2

0x20aa,	// (0x00002535) list_single_pane_cp2_g3

0x20ba,	// (0x00002545) list_single_pane_g1_cp2_ParamLimits

0x20ba,	// (0x00002545) list_single_pane_g1_cp2

0x20c6,	// (0x00002551) list_single_pane_g2_cp2

0x20ce,	// (0x00002559) list_single_pane_t1_cp2_ParamLimits

0x20ce,	// (0x00002559) list_single_pane_t1_cp2

0x20e6,	// (0x00002571) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x20e6,	// (0x00002571) list_single_large_graphic_pane_g1_cp2

0x20f4,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x20f4,	// (0x0000257f) list_single_large_graphic_pane_g2_cp2

0x2100,	// (0x0000258b) list_single_large_graphic_pane_g3_cp2

0x2108,	// (0x00002593) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x2108,	// (0x00002593) list_single_large_graphic_pane_g4_cp1

0x2122,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x2122,	// (0x000025ad) list_single_large_graphic_pane_t1_cp2

0x4107,	// (0x00004592) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4107,	// (0x00004592) list_single_graphic_heading_pane_g1_cp2

0x40d4,	// (0x0000455f) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x40d4,	// (0x0000455f) list_single_graphic_heading_pane_g4_cp2

0x20c6,	// (0x00002551) list_single_graphic_heading_pane_g5_cp2

0x4113,	// (0x0000459e) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x4113,	// (0x0000459e) list_single_graphic_heading_pane_t1_cp2

0x4129,	// (0x000045b4) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4129,	// (0x000045b4) list_single_graphic_heading_pane_t2_cp2

0x40c8,	// (0x00004553) list_single_2graphic_pane_g1_cp2_ParamLimits

0x40c8,	// (0x00004553) list_single_2graphic_pane_g1_cp2

0x40d4,	// (0x0000455f) list_single_2graphic_pane_g2_cp2_ParamLimits

0x40d4,	// (0x0000455f) list_single_2graphic_pane_g2_cp2

0x20c6,	// (0x00002551) list_single_2graphic_pane_g3_cp2

0x40e5,	// (0x00004570) list_single_2graphic_pane_g4_cp2_ParamLimits

0x40e5,	// (0x00004570) list_single_2graphic_pane_g4_cp2

0x40f1,	// (0x0000457c) list_single_2graphic_pane_t1_cp2_ParamLimits

0x40f1,	// (0x0000457c) list_single_2graphic_pane_t1_cp2

0xf31a,	// (0x0000f7a5) list_highlight_pane_g10_cp1

0x3ca0,	// (0x0000412b) list_highlight_pane_g1_cp1

0x3ca8,	// (0x00004133) list_highlight_pane_g2_cp1

0x3cb0,	// (0x0000413b) list_highlight_pane_g3_cp1

0x3cb8,	// (0x00004143) list_highlight_pane_g4_cp1

0x3cc0,	// (0x0000414b) list_highlight_pane_g5_cp1

0x3cc8,	// (0x00004153) list_highlight_pane_g6_cp1

0x3cd0,	// (0x0000415b) list_highlight_pane_g7_cp1

0x3cd8,	// (0x00004163) list_highlight_pane_g8_cp1

0x3ce0,	// (0x0000416b) list_highlight_pane_g9_cp1

0xcc10,	// (0x0000d09b) form_field_slider_pane_t3

0xcc1e,	// (0x0000d0a9) form_field_slider_pane_t4

0x3bdc,	// (0x00004067) slider_form_pane_ParamLimits

0x3bdc,	// (0x00004067) slider_form_pane

0xf493,	// (0x0000f91e) control_abbreviations

0xf493,	// (0x0000f91e) control_conventions

0xf493,	// (0x0000f91e) control_definitions

0xf493,	// (0x0000f91e) format_table_attribute

0x453a,	// (0x000049c5) bg_popup_preview_window_pane_g9

0xf493,	// (0x0000f91e) format_table_data2

0xf493,	// (0x0000f91e) format_table_data3

0xf493,	// (0x0000f91e) format_table_data_example

0x0008,

0xf493,	// (0x0000f91e) intro_purpose

0xf8ef,	// (0x0000fd7a) bg_popup_preview_window_pane_g

0xf493,	// (0x0000f91e) texts_category

0xf493,	// (0x0000f91e) texts_graphics

0x2138,	// (0x000025c3) text_digital

0x2147,	// (0x000025d2) text_primary

0x2156,	// (0x000025e1) text_primary_small

0x2165,	// (0x000025f0) text_secondary

0x2174,	// (0x000025ff) text_title

0x4e3b,	// (0x000052c6) bg_passive_tab_pane_g1_cp3_srt

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp3_srt

0x4e44,	// (0x000052cf) bg_passive_tab_pane_g3_cp3_srt

0x03aa,	// (0x00000835) bg_active_tab_pane_cp3_srt_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp3_srt

0x4e4d,	// (0x000052d8) tabs_4_active_pane_srt_g1

0xd1de,	// (0x0000d669) tabs_4_active_pane_srt_t1_ParamLimits

0xd1de,	// (0x0000d669) tabs_4_active_pane_srt_t1

0x4e3b,	// (0x000052c6) bg_active_tab_pane_g1_cp3_copy1

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp3_copy1

0x4e44,	// (0x000052cf) bg_active_tab_pane_g3_cp3_copy1

0x0084,	// (0x0000050f) tabs_2_long_active_pane_srt_ParamLimits

0x0084,	// (0x0000050f) tabs_2_long_active_pane_srt

0x0084,	// (0x0000050f) tabs_2_long_passive_pane_srt_ParamLimits

0x0084,	// (0x0000050f) tabs_2_long_passive_pane_srt

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp4_srt

0x4a16,	// (0x00004ea1) bg_passive_tab_pane_g1_cp4_srt

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp4_srt

0x4a1f,	// (0x00004eaa) bg_passive_tab_pane_g3_cp4_srt

0x0084,	// (0x0000050f) bg_active_tab_pane_cp4_srt_ParamLimits

0x0084,	// (0x0000050f) bg_active_tab_pane_cp4_srt

0xcf92,	// (0x0000d41d) tabs_2_long_active_pane_srt_t1_ParamLimits

0xcf92,	// (0x0000d41d) tabs_2_long_active_pane_srt_t1

0x4a16,	// (0x00004ea1) bg_active_tab_pane_g1_cp4_srt

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp4_srt

0x4a1f,	// (0x00004eaa) bg_active_tab_pane_g3_cp4_srt

0x03aa,	// (0x00000835) tabs_3_long_active_pane_srt_ParamLimits

0x03aa,	// (0x00000835) tabs_3_long_active_pane_srt

0x03aa,	// (0x00000835) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x03aa,	// (0x00000835) tabs_3_long_passive_pane_cp_srt

0x03aa,	// (0x00000835) tabs_3_long_passive_pane_srt_ParamLimits

0x03aa,	// (0x00000835) tabs_3_long_passive_pane_srt

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp5_srt

0x1e56,	// (0x000022e1) bg_passive_tab_pane_g1_cp5_srt

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp5_srt

0x1e5f,	// (0x000022ea) bg_passive_tab_pane_g3_cp5_srt

0x0084,	// (0x0000050f) bg_active_tab_pane_cp5_srt_ParamLimits

0x0084,	// (0x0000050f) bg_active_tab_pane_cp5_srt

0xcf7c,	// (0x0000d407) tabs_3_long_active_pane_srt_t1_ParamLimits

0xcf7c,	// (0x0000d407) tabs_3_long_active_pane_srt_t1

0x1e56,	// (0x000022e1) bg_active_tab_pane_g1_cp5_srt

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp5_srt

0x1e5f,	// (0x000022ea) bg_active_tab_pane_g3_cp5_srt

0x49f6,	// (0x00004e81) navi_text_pane_srt_t1

0x49ee,	// (0x00004e79) navi_icon_pane_srt_g1

0x23f4,	// (0x0000287f) midp_editing_number_pane_srt

0x2183,	// (0x0000260e) midp_ticker_pane_srt

0x23fc,	// (0x00002887) midp_ticker_pane_srt_g1

0x2404,	// (0x0000288f) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x0000fc10) midp_ticker_pane_srt_g

0x240c,	// (0x00002897) midp_ticker_pane_srt_t1

0x49df,	// (0x00004e6a) midp_editing_number_pane_t1_copy1

0xbd57,	// (0x0000c1e2) listscroll_midp_pane

0xbd57,	// (0x0000c1e2) midp_form_pane

0x21f9,	// (0x00002684) midp_info_popup_window_ParamLimits

0x21f9,	// (0x00002684) midp_info_popup_window

0x116a,	// (0x000015f5) bg_popup_sub_pane_cp50_ParamLimits

0x116a,	// (0x000015f5) bg_popup_sub_pane_cp50

0x38d6,	// (0x00003d61) listscroll_midp_info_pane_ParamLimits

0x38d6,	// (0x00003d61) listscroll_midp_info_pane

0x38be,	// (0x00003d49) listscroll_form_midp_pane_ParamLimits

0x38be,	// (0x00003d49) listscroll_form_midp_pane

0x38ca,	// (0x00003d55) scroll_bar_cp050

0xcc04,	// (0x0000d08f) list_midp_pane

0x5b4a,	// (0x00005fd5) signal_pane_g2_cp

0x37d8,	// (0x00003c63) listscroll_midp_info_pane_t1_ParamLimits

0x37d8,	// (0x00003c63) listscroll_midp_info_pane_t1

0x37f0,	// (0x00003c7b) listscroll_midp_info_pane_t2_ParamLimits

0x37f0,	// (0x00003c7b) listscroll_midp_info_pane_t2

0x382e,	// (0x00003cb9) listscroll_midp_info_pane_t3_ParamLimits

0x382e,	// (0x00003cb9) listscroll_midp_info_pane_t3

0x3868,	// (0x00003cf3) listscroll_midp_info_pane_t4_ParamLimits

0x3868,	// (0x00003cf3) listscroll_midp_info_pane_t4

0x0003,

0xf82a,	// (0x0000fcb5) listscroll_midp_info_pane_t_ParamLimits

0xf82a,	// (0x0000fcb5) listscroll_midp_info_pane_t

0x1234,	// (0x000016bf) scroll_pane_cp21

0x3772,	// (0x00003bfd) form_midp_field_choice_group_pane

0x377b,	// (0x00003c06) form_midp_field_text_pane

0x37be,	// (0x00003c49) form_midp_field_time_pane

0x37c6,	// (0x00003c51) form_midp_gauge_slider_pane

0x37cf,	// (0x00003c5a) form_midp_gauge_wait_pane

0xf493,	// (0x0000f91e) form_midp_image_pane

0xcbe7,	// (0x0000d072) list_single_midp_pane_ParamLimits

0xcbe7,	// (0x0000d072) list_single_midp_pane

0xcbbf,	// (0x0000d04a) form_midp_field_text_pane_t1

0x348d,	// (0x00003918) input_focus_pane_cp050

0x3741,	// (0x00003bcc) list_midp_form_text_pane

0x36e5,	// (0x00003b70) form_midp_field_choice_group_pane_t1

0x36f3,	// (0x00003b7e) input_focus_pane_cp051

0x3707,	// (0x00003b92) list_midp_choice_pane

0xf493,	// (0x0000f91e) status_idle_pane

0x36c9,	// (0x00003b54) form_midp_field_time_pane_t1

0xf31a,	// (0x0000f7a5) wait_anim_pane_g2_copy1

0x36d7,	// (0x00003b62) form_midp_field_time_pane_t2

0x0001,

0x22a9,	// (0x00002734) aid_navinavi_width_2_pane

0xf825,	// (0x0000fcb0) form_midp_field_time_pane_t

0xf493,	// (0x0000f91e) input_focus_pane_cp052

0xf493,	// (0x0000f91e) bg_input_focus_pane_cp040

0x3689,	// (0x00003b14) form_midp_gauge_slider_pane_t1

0x3697,	// (0x00003b22) form_midp_gauge_slider_pane_t2

0xcba3,	// (0x0000d02e) form_midp_gauge_slider_pane_t3

0xcbb1,	// (0x0000d03c) form_midp_gauge_slider_pane_t4

0x0003,

0xf81c,	// (0x0000fca7) form_midp_gauge_slider_pane_t

0x36c1,	// (0x00003b4c) form_midp_slider_pane

0x0084,	// (0x0000050f) bg_input_focus_pane_cp041_ParamLimits

0x0084,	// (0x0000050f) bg_input_focus_pane_cp041

0x3656,	// (0x00003ae1) form_midp_gauge_wait_pane_t1_ParamLimits

0x3656,	// (0x00003ae1) form_midp_gauge_wait_pane_t1

0x3668,	// (0x00003af3) form_midp_gauge_wait_pane_t2_ParamLimits

0x3668,	// (0x00003af3) form_midp_gauge_wait_pane_t2

0x0001,

0xf817,	// (0x0000fca2) form_midp_gauge_wait_pane_t_ParamLimits

0xf817,	// (0x0000fca2) form_midp_gauge_wait_pane_t

0x367a,	// (0x00003b05) form_midp_wait_pane_ParamLimits

0x367a,	// (0x00003b05) form_midp_wait_pane

0x361e,	// (0x00003aa9) form_midp_image_pane_g1

0x3627,	// (0x00003ab2) form_midp_image_pane_t1

0x3636,	// (0x00003ac1) form_midp_image_pane_t2

0x3645,	// (0x00003ad0) form_midp_image_pane_t3

0x0002,

0xf810,	// (0x0000fc9b) form_midp_image_pane_t

0x3606,	// (0x00003a91) list_single_midp_pane_g1

0x360f,	// (0x00003a9a) list_single_midp_pane_t1

0xcb8c,	// (0x0000d017) list_midp_form_item_pane_ParamLimits

0xcb8c,	// (0x0000d017) list_midp_form_item_pane

0x2251,	// (0x000026dc) list_midp_form_item_pane_t1

0x2260,	// (0x000026eb) midp_ticker_pane_g1

0x226c,	// (0x000026f7) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0000fbf6) midp_ticker_pane_g

0xbdff,	// (0x0000c28a) midp_ticker_pane_t1

0xd13d,	// (0x0000d5c8) midp_editing_number_pane_t1

0x4ce9,	// (0x00005174) midp_editing_number_pane

0x4cf8,	// (0x00005183) midp_ticker_pane

0x49a7,	// (0x00004e32) ai_message_heading_pane

0xf493,	// (0x0000f91e) bg_popup_window_pane_cp14

0x49af,	// (0x00004e3a) listscroll_ai_message_pane

0x492d,	// (0x00004db8) ai_message_heading_pane_g1_ParamLimits

0x492d,	// (0x00004db8) ai_message_heading_pane_g1

0x4939,	// (0x00004dc4) ai_message_heading_pane_g2_ParamLimits

0x4939,	// (0x00004dc4) ai_message_heading_pane_g2

0x4947,	// (0x00004dd2) ai_message_heading_pane_g3_ParamLimits

0x4947,	// (0x00004dd2) ai_message_heading_pane_g3

0x4953,	// (0x00004dde) ai_message_heading_pane_g4_ParamLimits

0x4953,	// (0x00004dde) ai_message_heading_pane_g4

0x0003,

0xf951,	// (0x0000fddc) ai_message_heading_pane_g_ParamLimits

0xf951,	// (0x0000fddc) ai_message_heading_pane_g

0x495f,	// (0x00004dea) ai_message_heading_pane_t1_ParamLimits

0x495f,	// (0x00004dea) ai_message_heading_pane_t1

0x4979,	// (0x00004e04) ai_message_heading_pane_t2_ParamLimits

0x4979,	// (0x00004e04) ai_message_heading_pane_t2

0x0001,

0xf95a,	// (0x0000fde5) ai_message_heading_pane_t_ParamLimits

0xf95a,	// (0x0000fde5) ai_message_heading_pane_t

0x498d,	// (0x00004e18) bg_popup_heading_pane_cp1_ParamLimits

0x498d,	// (0x00004e18) bg_popup_heading_pane_cp1

0x491b,	// (0x00004da6) list_ai_message_pane_ParamLimits

0x491b,	// (0x00004da6) list_ai_message_pane

0x1234,	// (0x000016bf) scroll_pane_cp10

0x4853,	// (0x00004cde) list_ai_message_pane_g1

0x485b,	// (0x00004ce6) list_ai_message_pane_g2

0x0001,

0xf92e,	// (0x0000fdb9) list_ai_message_pane_g

0x4863,	// (0x00004cee) list_ai_message_pane_t1_ParamLimits

0x4863,	// (0x00004cee) list_ai_message_pane_t1

0x4878,	// (0x00004d03) list_ai_message_pane_t2_ParamLimits

0x4878,	// (0x00004d03) list_ai_message_pane_t2

0x488d,	// (0x00004d18) list_ai_message_pane_t3_ParamLimits

0x488d,	// (0x00004d18) list_ai_message_pane_t3

0x48a2,	// (0x00004d2d) list_ai_message_pane_t4_ParamLimits

0x48a2,	// (0x00004d2d) list_ai_message_pane_t4

0x0003,

0xf933,	// (0x0000fdbe) list_ai_message_pane_t_ParamLimits

0xf933,	// (0x0000fdbe) list_ai_message_pane_t

0xcf50,	// (0x0000d3db) cell_ai_soft_ind_pane_ParamLimits

0xcf50,	// (0x0000d3db) cell_ai_soft_ind_pane

0x228a,	// (0x00002715) cell_ai_soft_ind_pane_g1_ParamLimits

0x228a,	// (0x00002715) cell_ai_soft_ind_pane_g1

0xf493,	// (0x0000f91e) grid_highlight_cp1

0x2297,	// (0x00002722) text_secondary_cp56_ParamLimits

0x2297,	// (0x00002722) text_secondary_cp56

0x4811,	// (0x00004c9c) example_general_pane_ParamLimits

0x4811,	// (0x00004c9c) example_general_pane

0x481d,	// (0x00004ca8) example_parent_pane_g1_ParamLimits

0x481d,	// (0x00004ca8) example_parent_pane_g1

0x4829,	// (0x00004cb4) example_parent_pane_t1_ParamLimits

0x4829,	// (0x00004cb4) example_parent_pane_t1

0xc3ad,	// (0x0000c838) popup_preview_text_window_ParamLimits

0xc3ad,	// (0x0000c838) popup_preview_text_window

0x20b2,	// (0x0000253d) list_single_pane_cp2_g4

0x0460,	// (0x000008eb) bg_popup_preview_window_pane_ParamLimits

0x0460,	// (0x000008eb) bg_popup_preview_window_pane

0x4544,	// (0x000049cf) popup_preview_text_window_t1_ParamLimits

0x4544,	// (0x000049cf) popup_preview_text_window_t1

0x4562,	// (0x000049ed) popup_preview_text_window_t2_ParamLimits

0x4562,	// (0x000049ed) popup_preview_text_window_t2

0x45ab,	// (0x00004a36) popup_preview_text_window_t3_ParamLimits

0x45ab,	// (0x00004a36) popup_preview_text_window_t3

0x45f0,	// (0x00004a7b) popup_preview_text_window_t4_ParamLimits

0x45f0,	// (0x00004a7b) popup_preview_text_window_t4

0x0004,

0xf902,	// (0x0000fd8d) popup_preview_text_window_t_ParamLimits

0xf902,	// (0x0000fd8d) popup_preview_text_window_t

0x466e,	// (0x00004af9) scroll_pane_cp11

0x32fa,	// (0x00003785) bg_popup_preview_window_pane_g1

0x44f8,	// (0x00004983) bg_popup_preview_window_pane_g2

0x4502,	// (0x0000498d) bg_popup_preview_window_pane_g3

0x450c,	// (0x00004997) bg_popup_preview_window_pane_g4

0x4516,	// (0x000049a1) bg_popup_preview_window_pane_g5

0x4520,	// (0x000049ab) bg_popup_preview_window_pane_g6

0x4528,	// (0x000049b3) bg_popup_preview_window_pane_g7

0x4530,	// (0x000049bb) bg_popup_preview_window_pane_g8

0xf330,	// (0x0000f7bb) aid_popup_width_pane

0xc31d,	// (0x0000c7a8) popup_midp_note_alarm_window_ParamLimits

0xc31d,	// (0x0000c7a8) popup_midp_note_alarm_window

0x0f20,	// (0x000013ab) data_form_pane_ParamLimits

0xb8ff,	// (0x0000bd8a) form_field_data_pane_g1

0xb909,	// (0x0000bd94) form_field_data_pane_t1_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_ParamLimits

0x0f5e,	// (0x000013e9) data_form_wide_pane_ParamLimits

0x0f6a,	// (0x000013f5) form_field_data_wide_pane_g1

0x0f96,	// (0x00001421) form_field_data_wide_pane_t1_ParamLimits

0x0726,	// (0x00000bb1) input_focus_pane_cp6_ParamLimits

0xba63,	// (0x0000beee) input_popup_find_pane_g1_ParamLimits

0xba63,	// (0x0000beee) input_popup_find_pane_g1

0x1565,	// (0x000019f0) aid_navi_side_left_pane

0x157a,	// (0x00001a05) aid_navi_side_right_pane

0x3d9b,	// (0x00004226) bg_popup_window_pane_cp30_ParamLimits

0x3d9b,	// (0x00004226) bg_popup_window_pane_cp30

0x3e15,	// (0x000042a0) popup_midp_note_alarm_window_g1_ParamLimits

0x3e15,	// (0x000042a0) popup_midp_note_alarm_window_g1

0x3e45,	// (0x000042d0) popup_midp_note_alarm_window_t1_ParamLimits

0x3e45,	// (0x000042d0) popup_midp_note_alarm_window_t1

0x3ee6,	// (0x00004371) popup_midp_note_alarm_window_t2_ParamLimits

0x3ee6,	// (0x00004371) popup_midp_note_alarm_window_t2

0x3f94,	// (0x0000441f) popup_midp_note_alarm_window_t3_ParamLimits

0x3f94,	// (0x0000441f) popup_midp_note_alarm_window_t3

0x3fc6,	// (0x00004451) popup_midp_note_alarm_window_t4_ParamLimits

0x3fc6,	// (0x00004451) popup_midp_note_alarm_window_t4

0x3fec,	// (0x00004477) popup_midp_note_alarm_window_t5_ParamLimits

0x3fec,	// (0x00004477) popup_midp_note_alarm_window_t5

0x000a,

0xf89f,	// (0x0000fd2a) popup_midp_note_alarm_window_t_ParamLimits

0xf89f,	// (0x0000fd2a) popup_midp_note_alarm_window_t

0x4098,	// (0x00004523) wait_bar_pane_cp1_ParamLimits

0x4098,	// (0x00004523) wait_bar_pane_cp1

0xf493,	// (0x0000f91e) wait_anim_pane_copy1

0xf493,	// (0x0000f91e) wait_border_pane_copy1

0x3a80,	// (0x00003f0b) wait_border_pane_g1_copy1

0x0fb0,	// (0x0000143b) form_field_popup_pane_g1

0xb923,	// (0x0000bdae) form_field_popup_pane_t1_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_cp7_ParamLimits

0x0fd2,	// (0x0000145d) list_form_pane_ParamLimits

0x0fde,	// (0x00001469) form_field_popup_wide_pane_g1

0x0fe6,	// (0x00001471) form_field_popup_wide_pane_t1_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_cp8_ParamLimits

0x0ffb,	// (0x00001486) list_form_wide_pane_ParamLimits

0x4ec8,	// (0x00005353) aid_size_cell_graphic_pane

0xb9a2,	// (0x0000be2d) data_form_pane_t1_ParamLimits

0xd121,	// (0x0000d5ac) data_form_wide_pane_t1_ParamLimits

0xc7aa,	// (0x0000cc35) bg_status_flat_pane

0xb133,	// (0x0000b5be) title_pane_t1_ParamLimits

0x004c,	// (0x000004d7) title_pane_t2_ParamLimits

0x0072,	// (0x000004fd) title_pane_t3_ParamLimits

0xf573,	// (0x0000f9fe) title_pane_t_ParamLimits

0xbb73,	// (0x0000bffe) level_1_signal_ParamLimits

0xbb85,	// (0x0000c010) level_2_signal_ParamLimits

0xbb98,	// (0x0000c023) level_3_signal_ParamLimits

0xbbab,	// (0x0000c036) level_4_signal_ParamLimits

0xbbbe,	// (0x0000c049) level_5_signal_ParamLimits

0xbbd1,	// (0x0000c05c) level_6_signal_ParamLimits

0xbbe4,	// (0x0000c06f) level_7_signal_ParamLimits

0xbb73,	// (0x0000bffe) level_1_battery_ParamLimits

0xbb85,	// (0x0000c010) level_2_battery_ParamLimits

0xbb98,	// (0x0000c023) level_3_battery_ParamLimits

0xbbab,	// (0x0000c036) level_4_battery_ParamLimits

0xbbbe,	// (0x0000c049) level_5_battery_ParamLimits

0xbbd1,	// (0x0000c05c) level_6_battery_ParamLimits

0xbbe4,	// (0x0000c06f) level_7_battery_ParamLimits

0x3ca0,	// (0x0000412b) bg_status_flat_pane_g1

0x3ca8,	// (0x00004133) bg_status_flat_pane_g2

0x3cb0,	// (0x0000413b) bg_status_flat_pane_g3

0x3cb8,	// (0x00004143) bg_status_flat_pane_g4

0x3cc0,	// (0x0000414b) bg_status_flat_pane_g5

0x3cc8,	// (0x00004153) bg_status_flat_pane_g6

0x3cd0,	// (0x0000415b) bg_status_flat_pane_g7

0xb1c7,	// (0x0000b652) tabs_3_active_pane_t1_ParamLimits

0xb1c7,	// (0x0000b652) tabs_3_passive_pane_t1_ParamLimits

0xb1e1,	// (0x0000b66c) tabs_4_active_pane_t1_ParamLimits

0xb1e1,	// (0x0000b66c) tabs_4_1_passive_pane_t1_ParamLimits

0xba79,	// (0x0000bf04) tabs_2_active_pane_t1_ParamLimits

0xba79,	// (0x0000bf04) tabs_2_passive_pane_t1_ParamLimits

0x0084,	// (0x0000050f) bg_active_tab_pane_cp4_ParamLimits

0xba8b,	// (0x0000bf16) tabs_2_long_active_pane_t1_ParamLimits

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp4_ParamLimits

0x33b8,	// (0x00003843) list_single_midp_graphic_pane_t1_ParamLimits

0x0084,	// (0x0000050f) bg_active_tab_pane_cp5_ParamLimits

0xba9e,	// (0x0000bf29) tabs_3_long_active_pane_t1_ParamLimits

0x2710,	// (0x00002b9b) bg_passive_tab_pane_cp5_ParamLimits

0x33b8,	// (0x00003843) list_single_midp_graphic_pane_t1

0xc7aa,	// (0x0000cc35) bg_status_flat_pane_ParamLimits

0x2ecd,	// (0x00003358) indicator_pane_cp2_ParamLimits

0x2ecd,	// (0x00003358) indicator_pane_cp2

0xc93f,	// (0x0000cdca) navi_pane_srt_ParamLimits

0xc93f,	// (0x0000cdca) navi_pane_srt

0x3033,	// (0x000034be) popup_clock_digital_analogue_window_cp1

0x020e,	// (0x00000699) indicator_pane_t1

0x2183,	// (0x0000260e) copy_highlight_pane

0x2183,	// (0x0000260e) cursor_graphics_pane

0x2183,	// (0x0000260e) graphic_within_text_pane

0x2183,	// (0x0000260e) link_highlight_pane

0x4631,	// (0x00004abc) popup_preview_text_window_t5_ParamLimits

0x4631,	// (0x00004abc) popup_preview_text_window_t5

0x22b3,	// (0x0000273e) cursor_digital_pane

0x22b3,	// (0x0000273e) cursor_primary_pane

0x22c4,	// (0x0000274f) cursor_primary_small_pane

0x22cc,	// (0x00002757) cursor_secondary_pane

0x22d4,	// (0x0000275f) cursor_title_pane

0x22b3,	// (0x0000273e) link_highlight_digital_pane

0x22bb,	// (0x00002746) link_highlight_primary_pane

0x22c4,	// (0x0000274f) link_highlight_primary_small_pane

0x22cc,	// (0x00002757) link_highlight_secondary_pane

0x22d4,	// (0x0000275f) link_highlight_title_pane

0x22b3,	// (0x0000273e) copy_highlight_digital_pane

0x22b3,	// (0x0000273e) copy_highlight_primary_pane

0x22c4,	// (0x0000274f) copy_highlight_primary_small_pane

0x22cc,	// (0x00002757) copy_highlight_secondary_pane

0x22d4,	// (0x0000275f) copy_highlight_title_pane

0x22cc,	// (0x00002757) graphic_text_digital_pane

0x3d3e,	// (0x000041c9) graphic_text_primary_pane

0x3d47,	// (0x000041d2) graphic_text_primary_small_pane

0x22c4,	// (0x0000274f) graphic_text_secondary_pane

0x22b3,	// (0x0000273e) graphic_text_title_pane

0xbe11,	// (0x0000c29c) cursor_primary_pane_g1

0x3d30,	// (0x000041bb) cursor_text_primary_t1

0xcc40,	// (0x0000d0cb) cursor_primary_small_pane_g1

0x3d22,	// (0x000041ad) cursor_text_primary_small_t1

0xcc36,	// (0x0000d0c1) cursor_primary_small_pane_g1_copy1

0x3d0a,	// (0x00004195) cursor_text_primary_small_t1_copy1

0x3ce8,	// (0x00004173) cursor_text_title_t1

0xcc2c,	// (0x0000d0b7) cursor_title_pane_g1

0xbe11,	// (0x0000c29c) cursor_digital_pane_g1

0x22e6,	// (0x00002771) cursor_text_digital_t1

0x22f4,	// (0x0000277f) link_highlight_primary_pane_g1

0x3c91,	// (0x0000411c) link_highlight_primary_pane_t1

0x22f4,	// (0x0000277f) link_highlight_primary_small_pane_g1

0x22fc,	// (0x00002787) link_highlight_primary_small_pane_t1

0x230b,	// (0x00002796) link_highlight_secondary_pane_g1

0x2313,	// (0x0000279e) link_highlight_secondary_pane_t1

0x3c05,	// (0x00004090) link_highlight_title_pane_g1

0x3c0d,	// (0x00004098) link_highlight_title_pane_t1

0x3bee,	// (0x00004079) link_highlight_digital_pane_g1

0x3bf6,	// (0x00004081) link_highlight_digital_pane_t1

0x3ab6,	// (0x00003f41) copy_highlight_primary_pane_g1

0x3acd,	// (0x00003f58) copy_highlight_primary_pane_t1

0x3ab6,	// (0x00003f41) copy_highlight_primary_small_pane_g1

0x3abe,	// (0x00003f49) copy_highlight_primary_small_pane_t1

0x2322,	// (0x000027ad) copy_highlight_secondary_pane_g1

0x232a,	// (0x000027b5) copy_highlight_secondary_pane_t1

0x3a9f,	// (0x00003f2a) copy_highlight_title_pane_g1

0x3aa7,	// (0x00003f32) copy_highlight_title_pane_t1

0x3ab6,	// (0x00003f41) copy_highlight_digital_pane_g1

0x5150,	// (0x000055db) copy_highlight_digital_pane_t1

0x50a4,	// (0x0000552f) graphic_text_primary_pane_g1

0x5134,	// (0x000055bf) graphic_text_primary_pane_t1

0x5142,	// (0x000055cd) graphic_text_primary_pane_t2

0x0001,

0xf9ce,	// (0x0000fe59) graphic_text_primary_pane_t

0x5110,	// (0x0000559b) graphic_text_primary_small_pane_g1

0x5118,	// (0x000055a3) graphic_text_primary_small_pane_t1

0x5126,	// (0x000055b1) graphic_text_primary_small_pane_t2

0x0001,

0xf9c9,	// (0x0000fe54) graphic_text_primary_small_pane_t

0x50ec,	// (0x00005577) graphic_text_secondary_pane_g1

0x50f4,	// (0x0000557f) graphic_text_secondary_pane_t1

0x5102,	// (0x0000558d) graphic_text_secondary_pane_t2

0x0001,

0xf9c4,	// (0x0000fe4f) graphic_text_secondary_pane_t

0x50c8,	// (0x00005553) graphic_text_title_pane_g1

0x50d0,	// (0x0000555b) graphic_text_title_pane_t1

0x50de,	// (0x00005569) graphic_text_title_pane_t2

0x0001,

0xf9bf,	// (0x0000fe4a) graphic_text_title_pane_t

0x50a4,	// (0x0000552f) graphic_text_digital_pane_g1

0x50ac,	// (0x00005537) graphic_text_digital_pane_t1

0x50ba,	// (0x00005545) graphic_text_digital_pane_t2

0x0001,

0xf9ba,	// (0x0000fe45) graphic_text_digital_pane_t

0x0084,	// (0x0000050f) navi_icon_pane_srt_ParamLimits

0x0084,	// (0x0000050f) navi_icon_pane_srt

0xf493,	// (0x0000f91e) navi_midp_pane_srt

0xf493,	// (0x0000f91e) navi_navi_pane_srt

0x0084,	// (0x0000050f) navi_text_pane_srt_ParamLimits

0x0084,	// (0x0000050f) navi_text_pane_srt

0x506f,	// (0x000054fa) navi_navi_icon_text_pane_srt

0x5077,	// (0x00005502) navi_navi_pane_srt_g1_ParamLimits

0x5077,	// (0x00005502) navi_navi_pane_srt_g1

0x5089,	// (0x00005514) navi_navi_pane_srt_g2_ParamLimits

0x5089,	// (0x00005514) navi_navi_pane_srt_g2

0x0001,

0xf9b5,	// (0x0000fe40) navi_navi_pane_srt_g_ParamLimits

0xf9b5,	// (0x0000fe40) navi_navi_pane_srt_g

0x509b,	// (0x00005526) navi_navi_tabs_pane_srt

0x506f,	// (0x000054fa) navi_navi_text_pane_srt

0x506f,	// (0x000054fa) navi_navi_volume_pane_srt

0x5060,	// (0x000054eb) navi_navi_text_pane_srt_t1

0x503b,	// (0x000054c6) navi_navi_volume_pane_srt_g1

0x5043,	// (0x000054ce) volume_small_pane_srt_ParamLimits

0x5043,	// (0x000054ce) volume_small_pane_srt

0x2339,	// (0x000027c4) volume_small_pane_srt_g1_ParamLimits

0x2339,	// (0x000027c4) volume_small_pane_srt_g1

0x2349,	// (0x000027d4) volume_small_pane_srt_g2_ParamLimits

0x2349,	// (0x000027d4) volume_small_pane_srt_g2

0x235a,	// (0x000027e5) volume_small_pane_srt_g3_ParamLimits

0x235a,	// (0x000027e5) volume_small_pane_srt_g3

0x236b,	// (0x000027f6) volume_small_pane_srt_g4_ParamLimits

0x236b,	// (0x000027f6) volume_small_pane_srt_g4

0x237c,	// (0x00002807) volume_small_pane_srt_g5_ParamLimits

0x237c,	// (0x00002807) volume_small_pane_srt_g5

0x238d,	// (0x00002818) volume_small_pane_srt_g6_ParamLimits

0x238d,	// (0x00002818) volume_small_pane_srt_g6

0x239e,	// (0x00002829) volume_small_pane_srt_g7_ParamLimits

0x239e,	// (0x00002829) volume_small_pane_srt_g7

0x23af,	// (0x0000283a) volume_small_pane_srt_g8_ParamLimits

0x23af,	// (0x0000283a) volume_small_pane_srt_g8

0x23c0,	// (0x0000284b) volume_small_pane_srt_g9_ParamLimits

0x23c0,	// (0x0000284b) volume_small_pane_srt_g9

0x23d1,	// (0x0000285c) volume_small_pane_srt_g10_ParamLimits

0x23d1,	// (0x0000285c) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x0000fbfb) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x0000fbfb) volume_small_pane_srt_g

0x0515,	// (0x000009a0) query_popup_data_pane_cp2

0x5029,	// (0x000054b4) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5029,	// (0x000054b4) navi_navi_icon_text_pane_srt_t1

0x3d3e,	// (0x000041c9) navi_tabs_2_long_pane_srt

0x3d3e,	// (0x000041c9) navi_tabs_2_pane_srt

0x3d3e,	// (0x000041c9) navi_tabs_3_long_pane_srt

0x3d3e,	// (0x000041c9) navi_tabs_3_pane_srt

0x3d3e,	// (0x000041c9) navi_tabs_4_pane_srt

0x5001,	// (0x0000548c) tabs_2_active_pane_srt_ParamLimits

0x5001,	// (0x0000548c) tabs_2_active_pane_srt

0x5011,	// (0x0000549c) tabs_2_passive_pane_srt_ParamLimits

0x5011,	// (0x0000549c) tabs_2_passive_pane_srt

0x348d,	// (0x00003918) bg_passive_tab_pane_cp1_srt_ParamLimits

0x348d,	// (0x00003918) bg_passive_tab_pane_cp1_srt

0x4fd5,	// (0x00005460) bg_passive_tab_pane_g1_cp1_srt

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp1_srt

0x4fde,	// (0x00005469) bg_passive_tab_pane_g3_cp1_srt

0x03aa,	// (0x00000835) bg_active_tab_pane_cp1_srt_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp1_srt

0x4fe7,	// (0x00005472) tabs_2_active_pane_srt_g1

0xd25e,	// (0x0000d6e9) tabs_2_active_pane_srt_t1_ParamLimits

0xd25e,	// (0x0000d6e9) tabs_2_active_pane_srt_t1

0x4fd5,	// (0x00005460) bg_active_tab_pane_g1_cp1_srt

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp1_srt

0x4fde,	// (0x00005469) bg_active_tab_pane_g3_cp1_srt

0x4fa2,	// (0x0000542d) tabs_3_active_pane_srt_ParamLimits

0x4fa2,	// (0x0000542d) tabs_3_active_pane_srt

0x4fb3,	// (0x0000543e) tabs_3_passive_pane_cp_srt_ParamLimits

0x4fb3,	// (0x0000543e) tabs_3_passive_pane_cp_srt

0x4fc4,	// (0x0000544f) tabs_3_passive_pane_srt_ParamLimits

0x4fc4,	// (0x0000544f) tabs_3_passive_pane_srt

0x348d,	// (0x00003918) bg_passive_tab_pane_cp2_srt_ParamLimits

0x348d,	// (0x00003918) bg_passive_tab_pane_cp2_srt

0x23e2,	// (0x0000286d) bg_passive_tab_pane_g1_cp2_srt

0x1c88,	// (0x00002113) bg_passive_tab_pane_g2_cp2_srt

0x23eb,	// (0x00002876) bg_passive_tab_pane_g3_cp2_srt

0x03aa,	// (0x00000835) bg_active_tab_pane_cp2_srt_ParamLimits

0x03aa,	// (0x00000835) bg_active_tab_pane_cp2_srt

0x4f88,	// (0x00005413) tabs_3_active_pane_srt_g1

0xd248,	// (0x0000d6d3) tabs_3_active_pane_srt_t1_ParamLimits

0xd248,	// (0x0000d6d3) tabs_3_active_pane_srt_t1

0x23e2,	// (0x0000286d) bg_active_tab_pane_g1_cp2_srt

0x1c88,	// (0x00002113) bg_active_tab_pane_g2_cp2_srt

0x23eb,	// (0x00002876) bg_active_tab_pane_g3_cp2_srt

0x4f40,	// (0x000053cb) tabs_4_active_pane_srt_ParamLimits

0x4f40,	// (0x000053cb) tabs_4_active_pane_srt

0x4f52,	// (0x000053dd) tabs_4_passive_pane_cp2_srt_ParamLimits

0x4f52,	// (0x000053dd) tabs_4_passive_pane_cp2_srt

0x2696,	// (0x00002b21) aid_size_cell_toolbar

0x4b01,	// (0x00004f8c) main_idle_act_pane_ParamLimits

0x28dd,	// (0x00002d68) popup_large_graphic_colour_window_ParamLimits

0xc673,	// (0x0000cafe) popup_toolbar_window_ParamLimits

0xc673,	// (0x0000cafe) popup_toolbar_window

0x4d2e,	// (0x000051b9) list_single_graphic_2heading_pane_ParamLimits

0x4d2e,	// (0x000051b9) list_single_graphic_2heading_pane

0x15f3,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane

0x1605,	// (0x00001a90) aid_size_cell_apps_grid_prt_pane

0x2710,	// (0x00002b9b) bg_wml_button_pane_cp1_ParamLimits

0x2710,	// (0x00002b9b) bg_wml_button_pane_cp1

0xcbbf,	// (0x0000d04a) form_midp_field_text_pane_t1_ParamLimits

0x348d,	// (0x00003918) input_focus_pane_cp050_ParamLimits

0x3741,	// (0x00003bcc) list_midp_form_text_pane_ParamLimits

0x36f3,	// (0x00003b7e) input_focus_pane_cp051_ParamLimits

0x3707,	// (0x00003b92) list_midp_choice_pane_ParamLimits

0xcb76,	// (0x0000d001) list_single_2graphic_pane_cp3_ParamLimits

0xcb76,	// (0x0000d001) list_single_2graphic_pane_cp3

0x5f1a,	// (0x000063a5) list_single_midp_graphic_pane_ParamLimits

0x5f1a,	// (0x000063a5) list_single_midp_graphic_pane

0x3192,	// (0x0000361d) list_single_graphic_2heading_pane_g1_ParamLimits

0x3192,	// (0x0000361d) list_single_graphic_2heading_pane_g1

0x20f4,	// (0x0000257f) list_single_graphic_2heading_pane_g4_ParamLimits

0x20f4,	// (0x0000257f) list_single_graphic_2heading_pane_g4

0x319e,	// (0x00003629) list_single_graphic_2heading_pane_g5_ParamLimits

0x319e,	// (0x00003629) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x0000fc4e) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x0000fc4e) list_single_graphic_2heading_pane_g

0x31aa,	// (0x00003635) list_single_graphic_2heading_pane_t1_ParamLimits

0x31aa,	// (0x00003635) list_single_graphic_2heading_pane_t1

0x31be,	// (0x00003649) list_single_graphic_2heading_pane_t2_ParamLimits

0x31be,	// (0x00003649) list_single_graphic_2heading_pane_t2

0x31da,	// (0x00003665) list_single_graphic_2heading_pane_t3_ParamLimits

0x31da,	// (0x00003665) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x0000fc55) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x0000fc55) list_single_graphic_2heading_pane_t

0x31f2,	// (0x0000367d) bg_popup_sub_pane_cp2

0x321c,	// (0x000036a7) grid_toobar_pane

0x3258,	// (0x000036e3) cell_toolbar_pane_ParamLimits

0x3258,	// (0x000036e3) cell_toolbar_pane

0x329e,	// (0x00003729) cell_toolbar_pane_g1_ParamLimits

0x329e,	// (0x00003729) cell_toolbar_pane_g1

0x32b2,	// (0x0000373d) cell_toolbar_pane_g2_ParamLimits

0x32b2,	// (0x0000373d) cell_toolbar_pane_g2

0x0001,

0xf7d1,	// (0x0000fc5c) cell_toolbar_pane_g_ParamLimits

0xf7d1,	// (0x0000fc5c) cell_toolbar_pane_g

0x32d4,	// (0x0000375f) grid_highlight_pane_cp2_ParamLimits

0x32d4,	// (0x0000375f) grid_highlight_pane_cp2

0x32ee,	// (0x00003779) toolbar_button_pane

0x32fa,	// (0x00003785) toolbar_button_pane_g1

0x3302,	// (0x0000378d) toolbar_button_pane_g2

0x330a,	// (0x00003795) toolbar_button_pane_g3

0x3312,	// (0x0000379d) toolbar_button_pane_g4

0x331a,	// (0x000037a5) toolbar_button_pane_g5

0x3322,	// (0x000037ad) toolbar_button_pane_g6

0x332a,	// (0x000037b5) toolbar_button_pane_g7

0x3332,	// (0x000037bd) toolbar_button_pane_g8

0x333a,	// (0x000037c5) toolbar_button_pane_g9

0x0009,

0xf7d6,	// (0x0000fc61) toolbar_button_pane_g

0x334a,	// (0x000037d5) list_single_2graphic_pane_g1_cp3_ParamLimits

0x334a,	// (0x000037d5) list_single_2graphic_pane_g1_cp3

0xcad8,	// (0x0000cf63) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcad8,	// (0x0000cf63) list_single_2graphic_pane_g2_cp3

0x1fad,	// (0x00002438) list_single_2graphic_pane_g3_cp3

0x3367,	// (0x000037f2) list_single_2graphic_pane_g4_cp3_ParamLimits

0x3367,	// (0x000037f2) list_single_2graphic_pane_g4_cp3

0x3373,	// (0x000037fe) list_single_2graphic_pane_t1_cp3_ParamLimits

0x3373,	// (0x000037fe) list_single_2graphic_pane_t1_cp3

0x1fa1,	// (0x0000242c) list_single_midp_graphic_pane_g2_ParamLimits

0x1fa1,	// (0x0000242c) list_single_midp_graphic_pane_g2

0x269e,	// (0x00002b29) aid_zoom_text_primary

0x26a6,	// (0x00002b31) aid_zoom_text_secondary

0x249f,	// (0x0000292a) status_small_pane_g7_ParamLimits

0x249f,	// (0x0000292a) status_small_pane_g7

0x24c2,	// (0x0000294d) status_small_pane_t1_ParamLimits

0xb10f,	// (0x0000b59a) title_pane_g2

0x0003,

0xf56a,	// (0x0000f9f5) title_pane_g

0xb3a7,	// (0x0000b832) aid_size_cell_colour_1_pane_ParamLimits

0xb3a7,	// (0x0000b832) aid_size_cell_colour_1_pane

0xb3bb,	// (0x0000b846) aid_size_cell_colour_2_pane_ParamLimits

0xb3bb,	// (0x0000b846) aid_size_cell_colour_2_pane

0xb3cf,	// (0x0000b85a) aid_size_cell_colour_3_pane_ParamLimits

0xb3cf,	// (0x0000b85a) aid_size_cell_colour_3_pane

0xb3e3,	// (0x0000b86e) aid_size_cell_colour_4_pane_ParamLimits

0xb3e3,	// (0x0000b86e) aid_size_cell_colour_4_pane

0x146c,	// (0x000018f7) title_pane_stacon_g1_ParamLimits

0x146c,	// (0x000018f7) title_pane_stacon_g1

0x3b24,	// (0x00003faf) popup_note_wait_window_g3_ParamLimits

0x3b24,	// (0x00003faf) popup_note_wait_window_g3

0x3b9b,	// (0x00004026) popup_note_wait_window_t5_ParamLimits

0x3b9b,	// (0x00004026) popup_note_wait_window_t5

0xf493,	// (0x0000f91e) main_feb_china_hwr_fs_writing_pane

0xc00e,	// (0x0000c499) popup_feb_china_hwr_fs_window_ParamLimits

0xc00e,	// (0x0000c499) popup_feb_china_hwr_fs_window

0xcae9,	// (0x0000cf74) aid_size_cell_hwr_fs_ParamLimits

0xcae9,	// (0x0000cf74) aid_size_cell_hwr_fs

0x348d,	// (0x00003918) bg_popup_sub_pane_cp3_ParamLimits

0x348d,	// (0x00003918) bg_popup_sub_pane_cp3

0xcafe,	// (0x0000cf89) grid_hwr_fs_pane_ParamLimits

0xcafe,	// (0x0000cf89) grid_hwr_fs_pane

0x34b1,	// (0x0000393c) linegrid_hwr_fs_pane_ParamLimits

0x34b1,	// (0x0000393c) linegrid_hwr_fs_pane

0xcb16,	// (0x0000cfa1) cell_hwr_fs_pane_ParamLimits

0xcb16,	// (0x0000cfa1) cell_hwr_fs_pane

0x34e5,	// (0x00003970) linegrid_hwr_fs_pane_g1_ParamLimits

0x34e5,	// (0x00003970) linegrid_hwr_fs_pane_g1

0xcb3c,	// (0x0000cfc7) linegrid_hwr_fs_pane_g2_ParamLimits

0xcb3c,	// (0x0000cfc7) linegrid_hwr_fs_pane_g2

0x3503,	// (0x0000398e) linegrid_hwr_fs_pane_g3_ParamLimits

0x3503,	// (0x0000398e) linegrid_hwr_fs_pane_g3

0x350f,	// (0x0000399a) linegrid_hwr_fs_pane_g4_ParamLimits

0x350f,	// (0x0000399a) linegrid_hwr_fs_pane_g4

0x352d,	// (0x000039b8) linegrid_hwr_fs_pane_g5_ParamLimits

0x352d,	// (0x000039b8) linegrid_hwr_fs_pane_g5

0x0004,

0xf7fc,	// (0x0000fc87) linegrid_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x0000fc87) linegrid_hwr_fs_pane_g

0x3543,	// (0x000039ce) cell_hwr_fs_pane_g1_ParamLimits

0x3543,	// (0x000039ce) cell_hwr_fs_pane_g1

0x30c9,	// (0x00003554) cell_hwr_fs_pane_g2_ParamLimits

0x30c9,	// (0x00003554) cell_hwr_fs_pane_g2

0xcb4e,	// (0x0000cfd9) cell_hwr_fs_pane_g3_ParamLimits

0xcb4e,	// (0x0000cfd9) cell_hwr_fs_pane_g3

0xcb5b,	// (0x0000cfe6) cell_hwr_fs_pane_g4_ParamLimits

0xcb5b,	// (0x0000cfe6) cell_hwr_fs_pane_g4

0x0003,

0xf807,	// (0x0000fc92) cell_hwr_fs_pane_g_ParamLimits

0xf807,	// (0x0000fc92) cell_hwr_fs_pane_g

0xcb68,	// (0x0000cff3) cell_hwr_fs_pane_t1

0xf493,	// (0x0000f91e) grid_highlight_pane_cp6

0xf493,	// (0x0000f91e) main_idle_act2_pane

0x121b,	// (0x000016a6) aid_inside_area_popup_secondary

0xcdb6,	// (0x0000d241) aid_inside_area_window_primary_ParamLimits

0xcdb6,	// (0x0000d241) aid_inside_area_window_primary

0x515f,	// (0x000055ea) ai2_news_ticker_pane

0x5167,	// (0x000055f2) aid_size_cell_ai1_link_ParamLimits

0x5167,	// (0x000055f2) aid_size_cell_ai1_link

0x5181,	// (0x0000560c) popup_ai2_data_window_ParamLimits

0x5181,	// (0x0000560c) popup_ai2_data_window

0x519f,	// (0x0000562a) popup_ai2_link_window_ParamLimits

0x519f,	// (0x0000562a) popup_ai2_link_window

0x348d,	// (0x00003918) bg_popup_sub_pane_cp4_ParamLimits

0x348d,	// (0x00003918) bg_popup_sub_pane_cp4

0x51b5,	// (0x00005640) grid_ai2_link_pane_ParamLimits

0x51b5,	// (0x00005640) grid_ai2_link_pane

0x51cc,	// (0x00005657) popup_ai2_link_window_g1_ParamLimits

0x51cc,	// (0x00005657) popup_ai2_link_window_g1

0x51d8,	// (0x00005663) popup_ai2_link_window_g2_ParamLimits

0x51d8,	// (0x00005663) popup_ai2_link_window_g2

0x0001,

0xf9d3,	// (0x0000fe5e) popup_ai2_link_window_g_ParamLimits

0xf9d3,	// (0x0000fe5e) popup_ai2_link_window_g

0x51e9,	// (0x00005674) ai2_mp_button_pane

0x51f1,	// (0x0000567c) ai2_mp_volume_pane

0x36f3,	// (0x00003b7e) bg_popup_sub_pane_cp5_ParamLimits

0x36f3,	// (0x00003b7e) bg_popup_sub_pane_cp5

0x51f9,	// (0x00005684) heading_ai2_gene_pane_ParamLimits

0x51f9,	// (0x00005684) heading_ai2_gene_pane

0x5205,	// (0x00005690) list_ai2_gene_pane_ParamLimits

0x5205,	// (0x00005690) list_ai2_gene_pane

0x524d,	// (0x000056d8) cell_ai2_link_pane_ParamLimits

0x524d,	// (0x000056d8) cell_ai2_link_pane

0x5263,	// (0x000056ee) cell_ai2_link_pane_g1

0xf493,	// (0x0000f91e) grid_highlight_pane_cp7

0x5336,	// (0x000057c1) ai2_mp_volume_pane_g1

0x533e,	// (0x000057c9) ai2_mp_volume_pane_g2

0x52ab,	// (0x00005736) list_ai2_gene_pane_t1

0x5346,	// (0x000057d1) ai2_mp_volume_pane_g3

0x0002,

0xf9ec,	// (0x0000fe77) ai2_mp_volume_pane_g

0x534e,	// (0x000057d9) volume_small_pane_cp3

0x5357,	// (0x000057e2) aid_size_cell_ai2_button

0x535f,	// (0x000057ea) grid_ai2_button_pane

0x5368,	// (0x000057f3) cell_ai2_button_pane_ParamLimits

0x5368,	// (0x000057f3) cell_ai2_button_pane

0xf31a,	// (0x0000f7a5) cell_ai2_button_pane_g1

0xf493,	// (0x0000f91e) grid_highlight_pane_cp8

0x52f6,	// (0x00005781) ai2_gene_pane_t1_ParamLimits

0x52f6,	// (0x00005781) ai2_gene_pane_t1

0xbf7e,	// (0x0000c409) aid_height_parent_landscape

0xcfa9,	// (0x0000d434) aid_height_set_list

0x4b01,	// (0x00004f8c) aid_size_parent

0x4ec8,	// (0x00005353) aid_size_cell_graphic_pane_ParamLimits

0x5215,	// (0x000056a0) popup_ai2_data_window_g1_ParamLimits

0x5215,	// (0x000056a0) popup_ai2_data_window_g1

0x5221,	// (0x000056ac) ai2_news_ticker_pane_g1

0x5229,	// (0x000056b4) ai2_news_ticker_pane_g2

0x0001,

0xf9d8,	// (0x0000fe63) ai2_news_ticker_pane_g

0x5231,	// (0x000056bc) ai2_news_ticker_pane_t1

0x523f,	// (0x000056ca) ai2_news_ticker_pane_t2

0x0001,

0xf9dd,	// (0x0000fe68) ai2_news_ticker_pane_t

0x526c,	// (0x000056f7) heading_ai2_gene_pane_g1

0x5274,	// (0x000056ff) heading_ai2_gene_pane_t1_ParamLimits

0x5274,	// (0x000056ff) heading_ai2_gene_pane_t1

0x5289,	// (0x00005714) list_highlight_pane_cp6

0x5291,	// (0x0000571c) ai2_gene_pane_ParamLimits

0x5291,	// (0x0000571c) ai2_gene_pane

0x52b9,	// (0x00005744) list_ai2_gene_pane_t2

0x0001,

0xf9e2,	// (0x0000fe6d) list_ai2_gene_pane_t

0x52c7,	// (0x00005752) list_highlight_pane_cp8_ParamLimits

0x52c7,	// (0x00005752) list_highlight_pane_cp8

0x52d8,	// (0x00005763) ai2_gene_pane_g1_ParamLimits

0x52d8,	// (0x00005763) ai2_gene_pane_g1

0x52ea,	// (0x00005775) ai2_gene_pane_g2_ParamLimits

0x52ea,	// (0x00005775) ai2_gene_pane_g2

0x0001,

0xf9e7,	// (0x0000fe72) ai2_gene_pane_g_ParamLimits

0xf9e7,	// (0x0000fe72) ai2_gene_pane_g

0x094b,	// (0x00000dd6) scroll_pane_cp12

0xbf3d,	// (0x0000c3c8) control_pane_t3_ParamLimits

0xbf3d,	// (0x0000c3c8) control_pane_t3

0x24b3,	// (0x0000293e) status_small_pane_g8_ParamLimits

0x24b3,	// (0x0000293e) status_small_pane_g8

0xc0b0,	// (0x0000c53b) popup_find_window_ParamLimits

0xc35d,	// (0x0000c7e8) popup_note_image_window_ParamLimits

0x3192,	// (0x0000361d) list_double2_graphic_pane_vc_g1_ParamLimits

0x3192,	// (0x0000361d) list_double2_graphic_pane_vc_g1

0x20f4,	// (0x0000257f) list_double2_graphic_pane_vc_g2_ParamLimits

0x20f4,	// (0x0000257f) list_double2_graphic_pane_vc_g2

0x319e,	// (0x00003629) list_double2_graphic_pane_vc_g3_ParamLimits

0x319e,	// (0x00003629) list_double2_graphic_pane_vc_g3

0x0002,

0xf7c3,	// (0x0000fc4e) list_double2_graphic_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fc4e) list_double2_graphic_pane_vc_g

0x3288,	// (0x00003713) list_double2_graphic_pane_vc_t1_ParamLimits

0x3288,	// (0x00003713) list_double2_graphic_pane_vc_t1

0x20f4,	// (0x0000257f) list_single_heading_pane_vc_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_heading_pane_vc_g1

0x319e,	// (0x00003629) list_single_heading_pane_vc_g2_ParamLimits

0x319e,	// (0x00003629) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_heading_pane_vc_g

0x338e,	// (0x00003819) list_single_heading_pane_vc_t1_ParamLimits

0x338e,	// (0x00003819) list_single_heading_pane_vc_t1

0x33a4,	// (0x0000382f) list_single_heading_pane_vc_t2_ParamLimits

0x33a4,	// (0x0000382f) list_single_heading_pane_vc_t2

0x0001,

0xf7eb,	// (0x0000fc76) list_single_heading_pane_vc_t_ParamLimits

0xf7eb,	// (0x0000fc76) list_single_heading_pane_vc_t

0x33ce,	// (0x00003859) list_setting_number_pane_vc_g1_ParamLimits

0x33ce,	// (0x00003859) list_setting_number_pane_vc_g1

0x33da,	// (0x00003865) list_setting_number_pane_vc_g2_ParamLimits

0x33da,	// (0x00003865) list_setting_number_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fc7b) list_setting_number_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fc7b) list_setting_number_pane_vc_g

0x33e6,	// (0x00003871) list_setting_number_pane_vc_t1_ParamLimits

0x33e6,	// (0x00003871) list_setting_number_pane_vc_t1

0x33fa,	// (0x00003885) list_setting_number_pane_vc_t2_ParamLimits

0x33fa,	// (0x00003885) list_setting_number_pane_vc_t2

0x3416,	// (0x000038a1) list_setting_number_pane_vc_t3_ParamLimits

0x3416,	// (0x000038a1) list_setting_number_pane_vc_t3

0x0002,

0xf7f5,	// (0x0000fc80) list_setting_number_pane_vc_t_ParamLimits

0xf7f5,	// (0x0000fc80) list_setting_number_pane_vc_t

0x343e,	// (0x000038c9) set_value_pane_vc_ParamLimits

0x343e,	// (0x000038c9) set_value_pane_vc

0x4d2e,	// (0x000051b9) list_double2_graphic_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double2_graphic_pane_vc

0x4d2e,	// (0x000051b9) list_double2_large_graphic_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double2_large_graphic_pane_vc

0x4d2e,	// (0x000051b9) list_double2_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double2_pane_vc

0x4d2e,	// (0x000051b9) list_double_graphic_heading_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_graphic_heading_pane_vc

0x4d2e,	// (0x000051b9) list_double_graphic_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_graphic_pane_vc

0x4d2e,	// (0x000051b9) list_double_heading_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_heading_pane_vc

0x4d2e,	// (0x000051b9) list_double_large_graphic_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_large_graphic_pane_vc

0x4d2e,	// (0x000051b9) list_double_number_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_number_pane_vc

0x4d2e,	// (0x000051b9) list_double_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_pane_vc

0x4d2e,	// (0x000051b9) list_double_time_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_double_time_pane_vc

0x4d2e,	// (0x000051b9) list_setting_number_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_setting_number_pane_vc

0x4d2e,	// (0x000051b9) list_setting_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_setting_pane_vc

0x4d2e,	// (0x000051b9) list_single_graphic_heading_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_single_graphic_heading_pane_vc

0x4d2e,	// (0x000051b9) list_single_heading_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_single_heading_pane_vc

0x4d2e,	// (0x000051b9) list_single_number_heading_pane_vc_ParamLimits

0x4d2e,	// (0x000051b9) list_single_number_heading_pane_vc

0x3192,	// (0x0000361d) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x3192,	// (0x0000361d) list_double_graphic_heading_pane_vc_g1

0x539b,	// (0x00005826) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x539b,	// (0x00005826) list_double_graphic_heading_pane_vc_g2

0x53a7,	// (0x00005832) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x53a7,	// (0x00005832) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9f3,	// (0x0000fe7e) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9f3,	// (0x0000fe7e) list_double_graphic_heading_pane_vc_g

0x53b3,	// (0x0000583e) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x53b3,	// (0x0000583e) list_double_graphic_heading_pane_vc_t1

0x338e,	// (0x00003819) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x338e,	// (0x00003819) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9fa,	// (0x0000fe85) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9fa,	// (0x0000fe85) list_double_graphic_heading_pane_vc_t

0x33ce,	// (0x00003859) list_setting_pane_vc_g1_ParamLimits

0x33ce,	// (0x00003859) list_setting_pane_vc_g1

0x33da,	// (0x00003865) list_setting_pane_vc_g2_ParamLimits

0x33da,	// (0x00003865) list_setting_pane_vc_g2

0x0001,

0xf7f0,	// (0x0000fc7b) list_setting_pane_vc_g_ParamLimits

0xf7f0,	// (0x0000fc7b) list_setting_pane_vc_g

0x55d0,	// (0x00005a5b) list_setting_pane_vc_t1_ParamLimits

0x55d0,	// (0x00005a5b) list_setting_pane_vc_t1

0x55e4,	// (0x00005a6f) list_setting_pane_vc_t2_ParamLimits

0x55e4,	// (0x00005a6f) list_setting_pane_vc_t2

0x0001,

0xfa3d,	// (0x0000fec8) list_setting_pane_vc_t_ParamLimits

0xfa3d,	// (0x0000fec8) list_setting_pane_vc_t

0x343e,	// (0x000038c9) set_value_pane_cp_vc_ParamLimits

0x343e,	// (0x000038c9) set_value_pane_cp_vc

0x20f4,	// (0x0000257f) list_single_number_heading_pane_vc_g1_ParamLimits

0x20f4,	// (0x0000257f) list_single_number_heading_pane_vc_g1

0x319e,	// (0x00003629) list_single_number_heading_pane_vc_g2_ParamLimits

0x319e,	// (0x00003629) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_single_number_heading_pane_vc_g

0x338e,	// (0x00003819) list_single_number_heading_pane_vc_t1_ParamLimits

0x338e,	// (0x00003819) list_single_number_heading_pane_vc_t1

0x5606,	// (0x00005a91) list_single_number_heading_pane_vc_t2_ParamLimits

0x5606,	// (0x00005a91) list_single_number_heading_pane_vc_t2

0x561a,	// (0x00005aa5) list_single_number_heading_pane_vc_t3_ParamLimits

0x561a,	// (0x00005aa5) list_single_number_heading_pane_vc_t3

0x0002,

0xfa42,	// (0x0000fecd) list_single_number_heading_pane_vc_t_ParamLimits

0xfa42,	// (0x0000fecd) list_single_number_heading_pane_vc_t

0x3192,	// (0x0000361d) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x3192,	// (0x0000361d) list_single_graphic_heading_pane_vc_g1

0x20f4,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x20f4,	// (0x0000257f) list_single_graphic_heading_pane_vc_g4

0x319e,	// (0x00003629) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x319e,	// (0x00003629) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7c3,	// (0x0000fc4e) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7c3,	// (0x0000fc4e) list_single_graphic_heading_pane_vc_g

0x338e,	// (0x00003819) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x338e,	// (0x00003819) list_single_graphic_heading_pane_vc_t1

0x562c,	// (0x00005ab7) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x562c,	// (0x00005ab7) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa49,	// (0x0000fed4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x0000fed4) list_single_graphic_heading_pane_vc_t

0x20f4,	// (0x0000257f) list_double2_pane_vc_g1_ParamLimits

0x20f4,	// (0x0000257f) list_double2_pane_vc_g1

0x319e,	// (0x00003629) list_double2_pane_vc_g2_ParamLimits

0x319e,	// (0x00003629) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_double2_pane_vc_g

0x5640,	// (0x00005acb) list_double2_pane_vc_t1_ParamLimits

0x5640,	// (0x00005acb) list_double2_pane_vc_t1

0x5656,	// (0x00005ae1) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x5656,	// (0x00005ae1) list_double2_large_graphic_pane_vc_g1

0x20f4,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x20f4,	// (0x0000257f) list_double2_large_graphic_pane_vc_g2

0x319e,	// (0x00003629) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x319e,	// (0x00003629) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x0000fa8c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x0000fa8c) list_double2_large_graphic_pane_vc_g

0x5662,	// (0x00005aed) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x5662,	// (0x00005aed) list_double2_large_graphic_pane_vc_t1

0x5678,	// (0x00005b03) list_double_time_pane_vc_g1_ParamLimits

0x5678,	// (0x00005b03) list_double_time_pane_vc_g1

0x5684,	// (0x00005b0f) list_double_time_pane_vc_g2_ParamLimits

0x5684,	// (0x00005b0f) list_double_time_pane_vc_g2

0x0001,

0xfa4e,	// (0x0000fed9) list_double_time_pane_vc_g_ParamLimits

0xfa4e,	// (0x0000fed9) list_double_time_pane_vc_g

0x5690,	// (0x00005b1b) list_double_time_pane_vc_t1_ParamLimits

0x5690,	// (0x00005b1b) list_double_time_pane_vc_t1

0x56a9,	// (0x00005b34) list_double_time_pane_vc_t2_ParamLimits

0x56a9,	// (0x00005b34) list_double_time_pane_vc_t2

0x56c9,	// (0x00005b54) list_double_time_pane_vc_t3_ParamLimits

0x56c9,	// (0x00005b54) list_double_time_pane_vc_t3

0x56e1,	// (0x00005b6c) list_double_time_pane_vc_t4_ParamLimits

0x56e1,	// (0x00005b6c) list_double_time_pane_vc_t4

0x0003,

0xfa53,	// (0x0000fede) list_double_time_pane_vc_t_ParamLimits

0xfa53,	// (0x0000fede) list_double_time_pane_vc_t

0x20f4,	// (0x0000257f) list_double_pane_vc_g1_ParamLimits

0x20f4,	// (0x0000257f) list_double_pane_vc_g1

0x319e,	// (0x00003629) list_double_pane_vc_g2_ParamLimits

0x319e,	// (0x00003629) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_double_pane_vc_g

0x56f5,	// (0x00005b80) list_double_pane_vc_t1_ParamLimits

0x56f5,	// (0x00005b80) list_double_pane_vc_t1

0x5707,	// (0x00005b92) list_double_pane_vc_t2_ParamLimits

0x5707,	// (0x00005b92) list_double_pane_vc_t2

0x0001,

0xfa5c,	// (0x0000fee7) list_double_pane_vc_t_ParamLimits

0xfa5c,	// (0x0000fee7) list_double_pane_vc_t

0x20f4,	// (0x0000257f) list_double_number_pane_vc_g1_ParamLimits

0x20f4,	// (0x0000257f) list_double_number_pane_vc_g1

0x319e,	// (0x00003629) list_double_number_pane_vc_g2_ParamLimits

0x319e,	// (0x00003629) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x0000fa6f) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x0000fa6f) list_double_number_pane_vc_g

0x571f,	// (0x00005baa) list_double_number_pane_vc_t1_ParamLimits

0x571f,	// (0x00005baa) list_double_number_pane_vc_t1

0x5733,	// (0x00005bbe) list_double_number_pane_vc_t2_ParamLimits

0x5733,	// (0x00005bbe) list_double_number_pane_vc_t2

0x5707,	// (0x00005b92) list_double_number_pane_vc_t3_ParamLimits

0x5707,	// (0x00005b92) list_double_number_pane_vc_t3

0x0002,

0xfa61,	// (0x0000feec) list_double_number_pane_vc_t_ParamLimits

0xfa61,	// (0x0000feec) list_double_number_pane_vc_t

0x5745,	// (0x00005bd0) list_double_large_graphic_pane_vc_g1_ParamLimits

0x5745,	// (0x00005bd0) list_double_large_graphic_pane_vc_g1

0x5751,	// (0x00005bdc) list_double_large_graphic_pane_vc_g2_ParamLimits

0x5751,	// (0x00005bdc) list_double_large_graphic_pane_vc_g2

0x319e,	// (0x00003629) list_double_large_graphic_pane_vc_g3_ParamLimits

0x319e,	// (0x00003629) list_double_large_graphic_pane_vc_g3

0x5760,	// (0x00005beb) list_double_large_graphic_pane_vc_g4_ParamLimits

0x5760,	// (0x00005beb) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa68,	// (0x0000fef3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa68,	// (0x0000fef3) list_double_large_graphic_pane_vc_g

0x576c,	// (0x00005bf7) list_double_large_graphic_pane_vc_t1_ParamLimits

0x576c,	// (0x00005bf7) list_double_large_graphic_pane_vc_t1

0x577e,	// (0x00005c09) list_double_large_graphic_pane_vc_t2_ParamLimits

0x577e,	// (0x00005c09) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa71,	// (0x0000fefc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa71,	// (0x0000fefc) list_double_large_graphic_pane_vc_t

0x539b,	// (0x00005826) list_double_heading_pane_vc_g1_ParamLimits

0x539b,	// (0x00005826) list_double_heading_pane_vc_g1

0x53a7,	// (0x00005832) list_double_heading_pane_vc_g2_ParamLimits

0x53a7,	// (0x00005832) list_double_heading_pane_vc_g2

0x0001,

0xfa76,	// (0x0000ff01) list_double_heading_pane_vc_g_ParamLimits

0xfa76,	// (0x0000ff01) list_double_heading_pane_vc_g

0x5797,	// (0x00005c22) list_double_heading_pane_vc_t1_ParamLimits

0x5797,	// (0x00005c22) list_double_heading_pane_vc_t1

0x338e,	// (0x00003819) list_double_heading_pane_vc_t2_ParamLimits

0x338e,	// (0x00003819) list_double_heading_pane_vc_t2

0x0001,

0xfa7b,	// (0x0000ff06) list_double_heading_pane_vc_t_ParamLimits

0xfa7b,	// (0x0000ff06) list_double_heading_pane_vc_t

0x3192,	// (0x0000361d) list_double_graphic_pane_vc_g1_ParamLimits

0x3192,	// (0x0000361d) list_double_graphic_pane_vc_g1

0x57ab,	// (0x00005c36) list_double_graphic_pane_vc_g2_ParamLimits

0x57ab,	// (0x00005c36) list_double_graphic_pane_vc_g2

0x57ba,	// (0x00005c45) list_double_graphic_pane_vc_g3_ParamLimits

0x57ba,	// (0x00005c45) list_double_graphic_pane_vc_g3

0x0002,

0xfa80,	// (0x0000ff0b) list_double_graphic_pane_vc_g_ParamLimits

0xfa80,	// (0x0000ff0b) list_double_graphic_pane_vc_g

0x57c6,	// (0x00005c51) list_double_graphic_pane_vc_t1_ParamLimits

0x57c6,	// (0x00005c51) list_double_graphic_pane_vc_t1

0x5707,	// (0x00005b92) list_double_graphic_pane_vc_t2_ParamLimits

0x5707,	// (0x00005b92) list_double_graphic_pane_vc_t2

0x0001,

0xfa87,	// (0x0000ff12) list_double_graphic_pane_vc_t_ParamLimits

0xfa87,	// (0x0000ff12) list_double_graphic_pane_vc_t

0xf33c,	// (0x0000f7c7) aid_size_cell_fastswap

0xaf59,	// (0x0000b3e4) aid_size_cell_touch_ParamLimits

0xaf59,	// (0x0000b3e4) aid_size_cell_touch

0xf4c3,	// (0x0000f94e) popup_fast_swap_wide_window_ParamLimits

0xf4c3,	// (0x0000f94e) popup_fast_swap_wide_window

0xb0a8,	// (0x0000b533) touch_pane_ParamLimits

0xb0a8,	// (0x0000b533) touch_pane

0x0e5a,	// (0x000012e5) button_value_adjust_pane_cp2

0x0e62,	// (0x000012ed) button_value_adjust_pane_cp4

0x0e88,	// (0x00001313) form_field_data_pane_cp2

0xb8d3,	// (0x0000bd5e) form_field_data_wide_pane_cp2

0x16d8,	// (0x00001b63) bg_scroll_pane_ParamLimits

0x16f7,	// (0x00001b82) scroll_handle_pane_ParamLimits

0x170b,	// (0x00001b96) scroll_sc2_down_pane_ParamLimits

0x170b,	// (0x00001b96) scroll_sc2_down_pane

0x1732,	// (0x00001bbd) scroll_sc2_up_pane_ParamLimits

0x1732,	// (0x00001bbd) scroll_sc2_up_pane

0xd39f,	// (0x0000d82a) grid_wheel_folder_pane_g1_ParamLimits

0xd39f,	// (0x0000d82a) grid_wheel_folder_pane_g1

0x1dd2,	// (0x0000225d) clock_nsta_pane_cp2_ParamLimits

0x1dd2,	// (0x0000225d) clock_nsta_pane_cp2

0xbd57,	// (0x0000c1e2) listscroll_midp_pane_ParamLimits

0xbd68,	// (0x0000c1f3) midp_canvas_pane

0x2684,	// (0x00002b0f) nsta_clock_indic_pane

0x26e2,	// (0x00002b6d) listscroll_form_pane_vc

0x26fe,	// (0x00002b89) listscroll_set_pane_vc_ParamLimits

0x26fe,	// (0x00002b89) listscroll_set_pane_vc

0xc7d2,	// (0x0000cc5d) clock_nsta_pane

0xc7fc,	// (0x0000cc87) indicator_nsta_pane

0x31f2,	// (0x0000367d) bg_popup_sub_pane_cp2_ParamLimits

0x3206,	// (0x00003691) find_pane_cp2_ParamLimits

0x3206,	// (0x00003691) find_pane_cp2

0x321c,	// (0x000036a7) grid_toobar_pane_ParamLimits

0x344c,	// (0x000038d7) list_form_gen_pane_vc_ParamLimits

0x344c,	// (0x000038d7) list_form_gen_pane_vc

0x3462,	// (0x000038ed) scroll_pane_cp8_vc_ParamLimits

0x3462,	// (0x000038ed) scroll_pane_cp8_vc

0x3581,	// (0x00003a0c) data_form_wide_pane_vc_ParamLimits

0x3581,	// (0x00003a0c) data_form_wide_pane_vc

0x358d,	// (0x00003a18) form_field_data_wide_pane_vc_g1

0x3595,	// (0x00003a20) form_field_data_wide_pane_vc_t1_ParamLimits

0x3595,	// (0x00003a20) form_field_data_wide_pane_vc_t1

0x0f50,	// (0x000013db) input_focus_pane_cp6_vc_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_cp6_vc

0xcc04,	// (0x0000d08f) list_midp_pane_ParamLimits

0x4f34,	// (0x000053bf) scroll_pane_cp16_ParamLimits

0x4f34,	// (0x000053bf) scroll_pane_cp16

0x38f8,	// (0x00003d83) button_value_adjust_pane_ParamLimits

0x38f8,	// (0x00003d83) button_value_adjust_pane

0xcfba,	// (0x0000d445) button_value_adjust_pane_cp6_ParamLimits

0xcfba,	// (0x0000d445) button_value_adjust_pane_cp6

0xd0fc,	// (0x0000d587) settings_code_pane_cp_ParamLimits

0xd0fc,	// (0x0000d587) settings_code_pane_cp

0xf31a,	// (0x0000f7a5) cell_touch_pane_g1

0xf31a,	// (0x0000f7a5) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x0000fba5) cell_touch_pane_g

0xd274,	// (0x0000d6ff) cell_touch_pane_cp_ParamLimits

0xd274,	// (0x0000d6ff) cell_touch_pane_cp

0xd290,	// (0x0000d71b) cell_touch_pane_ParamLimits

0xd290,	// (0x0000d71b) cell_touch_pane

0xf31a,	// (0x0000f7a5) scroll_sc2_down_pane_g1

0xf31a,	// (0x0000f7a5) scroll_sc2_up_pane_g1

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp4_vc

0x53c7,	// (0x00005852) list_set_graphic_pane_vc_g1_ParamLimits

0x53c7,	// (0x00005852) list_set_graphic_pane_vc_g1

0x53d3,	// (0x0000585e) list_set_graphic_pane_vc_g2_ParamLimits

0x53d3,	// (0x0000585e) list_set_graphic_pane_vc_g2

0x0001,

0xf9ff,	// (0x0000fe8a) list_set_graphic_pane_vc_g_ParamLimits

0xf9ff,	// (0x0000fe8a) list_set_graphic_pane_vc_g

0x53df,	// (0x0000586a) text_primary_small_cp13_vc_ParamLimits

0x53df,	// (0x0000586a) text_primary_small_cp13_vc

0x53f7,	// (0x00005882) list_set_graphic_pane_vc_ParamLimits

0x53f7,	// (0x00005882) list_set_graphic_pane_vc

0xf493,	// (0x0000f91e) input_focus_pane_cp2_vc

0xf31a,	// (0x0000f7a5) setting_code_pane_vc_g1

0x540b,	// (0x00005896) setting_code_pane_vc_t1

0x5419,	// (0x000058a4) set_text_pane_vc_t1_ParamLimits

0x5419,	// (0x000058a4) set_text_pane_vc_t1

0xf493,	// (0x0000f91e) input_focus_pane_cp1_vc

0x5437,	// (0x000058c2) list_set_text_pane_vc

0xf31a,	// (0x0000f7a5) setting_text_pane_vc_g1

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp2_vc

0x5441,	// (0x000058cc) setting_slider_graphic_pane_vc_g1

0x5449,	// (0x000058d4) setting_slider_graphic_pane_vc_t1

0x5457,	// (0x000058e2) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa04,	// (0x0000fe8f) setting_slider_graphic_pane_vc_t

0x5465,	// (0x000058f0) slider_set_pane_cp_vc

0x546d,	// (0x000058f8) slider_set_pane_vc_g1

0x5476,	// (0x00005901) slider_set_pane_vc_g2

0x0006,

0xfa09,	// (0x0000fe94) slider_set_pane_vc_g

0x108c,	// (0x00001517) set_opt_bg_pane_g1_copy1

0x1094,	// (0x0000151f) set_opt_bg_pane_g2_copy1

0x54a2,	// (0x0000592d) set_opt_bg_pane_g3_copy1

0x10a4,	// (0x0000152f) set_opt_bg_pane_g4_copy1

0x10ac,	// (0x00001537) set_opt_bg_pane_g5_copy1

0x10b4,	// (0x0000153f) set_opt_bg_pane_g6_copy1

0x54ac,	// (0x00005937) set_opt_bg_pane_g7_copy1

0x54b6,	// (0x00005941) set_opt_bg_pane_g8_copy1

0x54c0,	// (0x0000594b) set_opt_bg_pane_g9_copy1

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp_vc

0x54ca,	// (0x00005955) setting_slider_pane_vc_t1

0x5449,	// (0x000058d4) setting_slider_pane_vc_t2

0x5457,	// (0x000058e2) setting_slider_pane_vc_t3

0x0002,

0xfa18,	// (0x0000fea3) setting_slider_pane_vc_t

0x5465,	// (0x000058f0) slider_set_pane_vc

0x413d,	// (0x000045c8) volume_set_pane_vc_g1

0x4146,	// (0x000045d1) volume_set_pane_vc_g2

0x414f,	// (0x000045da) volume_set_pane_vc_g3

0x4158,	// (0x000045e3) volume_set_pane_vc_g4

0x4161,	// (0x000045ec) volume_set_pane_vc_g5

0x416a,	// (0x000045f5) volume_set_pane_vc_g6

0x4173,	// (0x000045fe) volume_set_pane_vc_g7

0x417c,	// (0x00004607) volume_set_pane_vc_g8

0x4185,	// (0x00004610) volume_set_pane_vc_g9

0x418e,	// (0x00004619) volume_set_pane_vc_g10

0x0009,

0xfa1f,	// (0x0000feaa) volume_set_pane_vc_g

0x54d9,	// (0x00005964) volume_set_pane_vc

0x54e1,	// (0x0000596c) button_value_adjust_pane_cp1_vc

0x54eb,	// (0x00005976) list_highlight_pane_cp2_vc

0x54f4,	// (0x0000597f) list_set_pane_vc_ParamLimits

0x54f4,	// (0x0000597f) list_set_pane_vc

0x555e,	// (0x000059e9) main_pane_set_vc_t1_ParamLimits

0x555e,	// (0x000059e9) main_pane_set_vc_t1

0x5573,	// (0x000059fe) main_pane_set_vc_t2_ParamLimits

0x5573,	// (0x000059fe) main_pane_set_vc_t2

0x5585,	// (0x00005a10) main_pane_set_vc_t3_ParamLimits

0x5585,	// (0x00005a10) main_pane_set_vc_t3

0x5599,	// (0x00005a24) main_pane_set_vc_t4_ParamLimits

0x5599,	// (0x00005a24) main_pane_set_vc_t4

0x0003,

0xfa34,	// (0x0000febf) main_pane_set_vc_t_ParamLimits

0xfa34,	// (0x0000febf) main_pane_set_vc_t

0x55ad,	// (0x00005a38) setting_code_pane_vc_ParamLimits

0x55ad,	// (0x00005a38) setting_code_pane_vc

0x55be,	// (0x00005a49) setting_slider_graphic_pane_vc

0x55be,	// (0x00005a49) setting_slider_pane_vc

0x55be,	// (0x00005a49) setting_text_pane_vc

0x55be,	// (0x00005a49) setting_volume_pane_vc

0x55c8,	// (0x00005a53) scroll_pane_cp121_vc

0x0e48,	// (0x000012d3) set_content_pane_vc

0x57d8,	// (0x00005c63) button_value_adjust_pane_g1

0x57e1,	// (0x00005c6c) button_value_adjust_pane_g2

0x0001,

0xfa8c,	// (0x0000ff17) button_value_adjust_pane_g

0x57ea,	// (0x00005c75) form_field_slider_wide_pane_vc_t1_ParamLimits

0x57ea,	// (0x00005c75) form_field_slider_wide_pane_vc_t1

0x57fe,	// (0x00005c89) form_field_slider_wide_pane_vc_t2_ParamLimits

0x57fe,	// (0x00005c89) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa91,	// (0x0000ff1c) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa91,	// (0x0000ff1c) form_field_slider_wide_pane_vc_t

0x03aa,	// (0x00000835) input_focus_pane_cp10_vc_ParamLimits

0x03aa,	// (0x00000835) input_focus_pane_cp10_vc

0x5810,	// (0x00005c9b) slider_cont_pane_cp1_vc_ParamLimits

0x5810,	// (0x00005c9b) slider_cont_pane_cp1_vc

0x546d,	// (0x000058f8) slider_form_pane_g1_cp2

0x5476,	// (0x00005901) slider_form_pane_g2_cp2

0x5829,	// (0x00005cb4) form_field_slider_pane_vc_t3

0x5837,	// (0x00005cc2) form_field_slider_pane_vc_t4

0x5845,	// (0x00005cd0) slider_form_pane_vc_ParamLimits

0x5845,	// (0x00005cd0) slider_form_pane_vc

0x5852,	// (0x00005cdd) form_field_slider_pane_vc_t1_ParamLimits

0x5852,	// (0x00005cdd) form_field_slider_pane_vc_t1

0x57fe,	// (0x00005c89) form_field_slider_pane_vc_t2_ParamLimits

0x57fe,	// (0x00005c89) form_field_slider_pane_vc_t2

0x0001,

0xfaa1,	// (0x0000ff2c) form_field_slider_pane_vc_t_ParamLimits

0xfaa1,	// (0x0000ff2c) form_field_slider_pane_vc_t

0x03aa,	// (0x00000835) input_focus_pane_cp9_vc_ParamLimits

0x03aa,	// (0x00000835) input_focus_pane_cp9_vc

0x586e,	// (0x00005cf9) slider_cont_pane_vc_ParamLimits

0x586e,	// (0x00005cf9) slider_cont_pane_vc

0x5880,	// (0x00005d0b) list_form_graphic_pane_cp_vc_ParamLimits

0x5880,	// (0x00005d0b) list_form_graphic_pane_cp_vc

0x358d,	// (0x00003a18) form_field_popup_wide_pane_vc_g1

0x5895,	// (0x00005d20) form_field_popup_wide_pane_vc_t1_ParamLimits

0x5895,	// (0x00005d20) form_field_popup_wide_pane_vc_t1

0x0f50,	// (0x000013db) input_focus_pane_cp8_vc_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_cp8_vc

0x58ac,	// (0x00005d37) list_form_wide_pane_vc_ParamLimits

0x58ac,	// (0x00005d37) list_form_wide_pane_vc

0x58b8,	// (0x00005d43) list_form_graphic_pane_vc_g1

0x58c0,	// (0x00005d4b) list_form_graphic_pane_vc_t1_ParamLimits

0x58c0,	// (0x00005d4b) list_form_graphic_pane_vc_t1

0x0084,	// (0x0000050f) list_highlight_pane_cp5_vc_ParamLimits

0x0084,	// (0x0000050f) list_highlight_pane_cp5_vc

0x58dc,	// (0x00005d67) list_form_graphic_pane_vc_ParamLimits

0x58dc,	// (0x00005d67) list_form_graphic_pane_vc

0x358d,	// (0x00003a18) form_field_popup_pane_vc_g1

0x58f2,	// (0x00005d7d) form_field_popup_pane_vc_t1_ParamLimits

0x58f2,	// (0x00005d7d) form_field_popup_pane_vc_t1

0x0f50,	// (0x000013db) input_focus_pane_cp7_vc_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_cp7_vc

0x5909,	// (0x00005d94) list_form_pane_vc_ParamLimits

0x5909,	// (0x00005d94) list_form_pane_vc

0x5915,	// (0x00005da0) data_form_pane_vc_t1_ParamLimits

0x5915,	// (0x00005da0) data_form_pane_vc_t1

0x108c,	// (0x00001517) input_focus_pane_vc_g1

0x1094,	// (0x0000151f) input_focus_pane_vc_g2

0x109c,	// (0x00001527) input_focus_pane_vc_g3

0x10a4,	// (0x0000152f) input_focus_pane_vc_g4

0x10ac,	// (0x00001537) input_focus_pane_vc_g5

0x10b4,	// (0x0000153f) input_focus_pane_vc_g6

0x10bc,	// (0x00001547) input_focus_pane_vc_g7

0x10c4,	// (0x0000154f) input_focus_pane_vc_g8

0x10cc,	// (0x00001557) input_focus_pane_vc_g9

0xf31a,	// (0x0000f7a5) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x0000fb2e) input_focus_pane_vc_g

0x3581,	// (0x00003a0c) data_form_pane_vc_ParamLimits

0x3581,	// (0x00003a0c) data_form_pane_vc

0x358d,	// (0x00003a18) form_field_data_pane_vc_g1

0x5932,	// (0x00005dbd) form_field_data_pane_vc_t1_ParamLimits

0x5932,	// (0x00005dbd) form_field_data_pane_vc_t1

0x0f50,	// (0x000013db) input_focus_pane_vc_ParamLimits

0x0f50,	// (0x000013db) input_focus_pane_vc

0x594c,	// (0x00005dd7) button_value_adjust_pane_cp3_vc

0x5954,	// (0x00005ddf) button_value_adjust_pane_cp5_vc

0x595c,	// (0x00005de7) form_field_data_pane_vc_ParamLimits

0x595c,	// (0x00005de7) form_field_data_pane_vc

0x5977,	// (0x00005e02) form_field_data_pane_vc_cp2

0x597f,	// (0x00005e0a) form_field_data_wide_pane_vc_ParamLimits

0x597f,	// (0x00005e0a) form_field_data_wide_pane_vc

0x5999,	// (0x00005e24) form_field_data_wide_pane_vc_cp2

0x59a1,	// (0x00005e2c) form_field_popup_pane_vc_ParamLimits

0x59a1,	// (0x00005e2c) form_field_popup_pane_vc

0x59bc,	// (0x00005e47) form_field_popup_wide_pane_vc_ParamLimits

0x59bc,	// (0x00005e47) form_field_popup_wide_pane_vc

0x59d6,	// (0x00005e61) form_field_slider_pane_vc_ParamLimits

0x59d6,	// (0x00005e61) form_field_slider_pane_vc

0x59e9,	// (0x00005e74) form_field_slider_wide_pane_vc_ParamLimits

0x59e9,	// (0x00005e74) form_field_slider_wide_pane_vc

0xd2ae,	// (0x0000d739) grid_touch_1_pane_ParamLimits

0xd2ae,	// (0x0000d739) grid_touch_1_pane

0xd2c2,	// (0x0000d74d) grid_touch_2_pane_ParamLimits

0xd2c2,	// (0x0000d74d) grid_touch_2_pane

0x5ac0,	// (0x00005f4b) touch_pane_g1_ParamLimits

0x5ac0,	// (0x00005f4b) touch_pane_g1

0x5a22,	// (0x00005ead) cell_app_pane_cp_wide_ParamLimits

0x5a22,	// (0x00005ead) cell_app_pane_cp_wide

0x5a33,	// (0x00005ebe) grid_popup_fast_wide_pane_ParamLimits

0x5a33,	// (0x00005ebe) grid_popup_fast_wide_pane

0x5a47,	// (0x00005ed2) scroll_pane_cp19_ParamLimits

0x5a47,	// (0x00005ed2) scroll_pane_cp19

0xf493,	// (0x0000f91e) bg_popup_window_pane_cp20

0x5a5b,	// (0x00005ee6) listscroll_popup_fast_wide_pane

0x1288,	// (0x00001713) grid_indicator_nsta_pane

0x5a63,	// (0x00005eee) clock_nsta_pane_g1

0x5a6c,	// (0x00005ef7) clock_nsta_pane_t1

0xd2ee,	// (0x0000d779) cell_indicator_nsta_pane_ParamLimits

0xd2ee,	// (0x0000d779) cell_indicator_nsta_pane

0x5ac0,	// (0x00005f4b) cell_indicator_nsta_pane_g1

0xd30b,	// (0x0000d796) cell_indicator_nsta_pane_g2

0x0001,

0xfaab,	// (0x0000ff36) cell_indicator_nsta_pane_g

0x5ae3,	// (0x00005f6e) clock_nsta_pane_cp

0x5aeb,	// (0x00005f76) indicator_nsta_pane_cp

0x5af3,	// (0x00005f7e) nsta_clock_indic_pane_g1

0x01fa,	// (0x00000685) grid_indicator_pane

0x1824,	// (0x00001caf) scroll_pane_cp29

0x1cfc,	// (0x00002187) indicator_nsta_pane_cp2_ParamLimits

0x1cfc,	// (0x00002187) indicator_nsta_pane_cp2

0x0084,	// (0x0000050f) main_apps_wheel_pane

0x377b,	// (0x00003c06) form_midp_field_text_pane_ParamLimits

0x38ca,	// (0x00003d55) scroll_bar_cp050_ParamLimits

0x5b5c,	// (0x00005fe7) cell_indicator_pane_ParamLimits

0x5b5c,	// (0x00005fe7) cell_indicator_pane

0x5b74,	// (0x00005fff) cell_indicator_pane_g1

0xd321,	// (0x0000d7ac) grid_wheel_folder_pane_ParamLimits

0xd321,	// (0x0000d7ac) grid_wheel_folder_pane

0xd32f,	// (0x0000d7ba) list_wheel_apps_pane_ParamLimits

0xd32f,	// (0x0000d7ba) list_wheel_apps_pane

0xd33d,	// (0x0000d7c8) main_apps_wheel_pane_g1_ParamLimits

0xd33d,	// (0x0000d7c8) main_apps_wheel_pane_g1

0xd34d,	// (0x0000d7d8) main_apps_wheel_pane_g2_ParamLimits

0xd34d,	// (0x0000d7d8) main_apps_wheel_pane_g2

0x0001,

0xfac7,	// (0x0000ff52) main_apps_wheel_pane_g_ParamLimits

0xfac7,	// (0x0000ff52) main_apps_wheel_pane_g

0xd35d,	// (0x0000d7e8) main_apps_wheel_pane_t1_ParamLimits

0xd35d,	// (0x0000d7e8) main_apps_wheel_pane_t1

0xd375,	// (0x0000d800) list_wheel_apps_pane_g1

0xd37d,	// (0x0000d808) list_wheel_apps_pane_g2

0xd385,	// (0x0000d810) list_wheel_apps_pane_g3

0xd38d,	// (0x0000d818) list_wheel_apps_pane_g4

0xd395,	// (0x0000d820) list_wheel_apps_pane_g5

0x0004,

0xfacc,	// (0x0000ff57) list_wheel_apps_pane_g

0x1fff,	// (0x0000248a) navi_icon_text_pane

0xc6cb,	// (0x0000cb56) aid_fill_nsta

0xd3b2,	// (0x0000d83d) navi_icon_text_pane_g1

0xd3be,	// (0x0000d849) navi_icon_text_pane_t1

0xbd3f,	// (0x0000c1ca) list_set_graphic_pane_t1_ParamLimits

0xbd3f,	// (0x0000c1ca) list_set_graphic_pane_t1

0x401b,	// (0x000044a6) popup_midp_note_alarm_window_t6_ParamLimits

0x401b,	// (0x000044a6) popup_midp_note_alarm_window_t6

0x402d,	// (0x000044b8) popup_midp_note_alarm_window_t7_ParamLimits

0x402d,	// (0x000044b8) popup_midp_note_alarm_window_t7

0x403f,	// (0x000044ca) popup_midp_note_alarm_window_t8_ParamLimits

0x403f,	// (0x000044ca) popup_midp_note_alarm_window_t8

0x4051,	// (0x000044dc) popup_midp_note_alarm_window_t9_ParamLimits

0x4051,	// (0x000044dc) popup_midp_note_alarm_window_t9

0x4063,	// (0x000044ee) popup_midp_note_alarm_window_t10_ParamLimits

0x4063,	// (0x000044ee) popup_midp_note_alarm_window_t10

0x4075,	// (0x00004500) popup_midp_note_alarm_window_t11_ParamLimits

0x4075,	// (0x00004500) popup_midp_note_alarm_window_t11

0x4087,	// (0x00004512) scroll_pane_cp17_ParamLimits

0x4087,	// (0x00004512) scroll_pane_cp17

0x413d,	// (0x000045c8) volume_small_pane_cp_g1

0x5c6d,	// (0x000060f8) volume_small_pane_cp_g2

0x5c76,	// (0x00006101) volume_small_pane_cp_g3

0x5c7f,	// (0x0000610a) volume_small_pane_cp_g4

0x5c88,	// (0x00006113) volume_small_pane_cp_g5

0x5c91,	// (0x0000611c) volume_small_pane_cp_g6

0x5c9a,	// (0x00006125) volume_small_pane_cp_g7

0x5ca3,	// (0x0000612e) volume_small_pane_cp_g8

0x5cac,	// (0x00006137) volume_small_pane_cp_g9

0x5cb5,	// (0x00006140) volume_small_pane_cp_g10

0x2260,	// (0x000026eb) midp_ticker_pane_g1_ParamLimits

0x226c,	// (0x000026f7) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0000fbf6) midp_ticker_pane_g_ParamLimits

0xbdff,	// (0x0000c28a) midp_ticker_pane_t1_ParamLimits

0xc6eb,	// (0x0000cb76) aid_fill_nsta_2

0x38b6,	// (0x00003d41) list_form2_midp_pane

0x4ce9,	// (0x00005174) midp_editing_number_pane_ParamLimits

0x4cf8,	// (0x00005183) midp_ticker_pane_ParamLimits

0x5cbe,	// (0x00006149) form2_midp_field_pane

0x5ce2,	// (0x0000616d) scroll_pane_cp51

0x5d02,	// (0x0000618d) form2_midp_button_pane_ParamLimits

0x5d02,	// (0x0000618d) form2_midp_button_pane

0x5d14,	// (0x0000619f) form2_midp_content_pane_ParamLimits

0x5d14,	// (0x0000619f) form2_midp_content_pane

0x5d2e,	// (0x000061b9) form2_midp_field_choice_group_pane

0x5d36,	// (0x000061c1) form2_midp_field_pane_g1

0x5d3e,	// (0x000061c9) form2_midp_field_pane_g2

0x5d46,	// (0x000061d1) form2_midp_field_pane_g3

0x5d4e,	// (0x000061d9) form2_midp_field_pane_g4

0x0003,

0xfaf1,	// (0x0000ff7c) form2_midp_field_pane_g

0x5d56,	// (0x000061e1) form2_midp_gauge_slider_pane

0x5d5e,	// (0x000061e9) form2_midp_gauge_wait_pane

0x5d66,	// (0x000061f1) form2_midp_image_pane_ParamLimits

0x5d66,	// (0x000061f1) form2_midp_image_pane

0x5d81,	// (0x0000620c) form2_midp_label_pane_ParamLimits

0x5d81,	// (0x0000620c) form2_midp_label_pane

0xd3ec,	// (0x0000d877) form2_midp_label_pane_cp_ParamLimits

0xd3ec,	// (0x0000d877) form2_midp_label_pane_cp

0x5dc1,	// (0x0000624c) form2_midp_string_pane_ParamLimits

0x5dc1,	// (0x0000624c) form2_midp_string_pane

0xd40d,	// (0x0000d898) form2_midp_text_pane_ParamLimits

0xd40d,	// (0x0000d898) form2_midp_text_pane

0x5df4,	// (0x0000627f) form2_midp_time_pane

0x5e04,	// (0x0000628f) input_focus_pane_cp51_ParamLimits

0x5e04,	// (0x0000628f) input_focus_pane_cp51

0x5e1c,	// (0x000062a7) form2_midp_label_pane_t1_ParamLimits

0x5e1c,	// (0x000062a7) form2_midp_label_pane_t1

0xd42e,	// (0x0000d8b9) form2_mdip_text_pane_t1_ParamLimits

0xd42e,	// (0x0000d8b9) form2_mdip_text_pane_t1

0x5e84,	// (0x0000630f) form2_midp_time_pane_t1

0x5e9f,	// (0x0000632a) form2_midp_gauge_slider_pane_t1

0xd44d,	// (0x0000d8d8) form2_midp_gauge_slider_pane_t2

0xd45f,	// (0x0000d8ea) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafa,	// (0x0000ff85) form2_midp_gauge_slider_pane_t

0x5ed5,	// (0x00006360) form2_midp_slider_pane

0x5ee1,	// (0x0000636c) form2_midp_gauge_wait_pane_t1

0x5eef,	// (0x0000637a) form2_midp_wait_pane_ParamLimits

0x5eef,	// (0x0000637a) form2_midp_wait_pane

0xcb76,	// (0x0000d001) list_single_2graphic_pane_cp4_ParamLimits

0xcb76,	// (0x0000d001) list_single_2graphic_pane_cp4

0xd471,	// (0x0000d8fc) list_single_midp_graphic_pane_cp_ParamLimits

0xd471,	// (0x0000d8fc) list_single_midp_graphic_pane_cp

0xf493,	// (0x0000f91e) list_highlight_pane_cp20

0x5f3e,	// (0x000063c9) list_single_2graphic_pane_g1_cp4

0x526c,	// (0x000056f7) list_single_2graphic_pane_g2_cp4

0x5f46,	// (0x000063d1) list_single_2graphic_pane_t1_cp4

0x0084,	// (0x0000050f) list_highlight_pane_cp21

0x5f55,	// (0x000063e0) list_single_midp_graphic_pane_g4_cp

0x5f64,	// (0x000063ef) list_single_midp_graphic_pane_t1_cp

0xd492,	// (0x0000d91d) form2_mdip_string_pane_t1_ParamLimits

0xd492,	// (0x0000d91d) form2_mdip_string_pane_t1

0xf493,	// (0x0000f91e) bg_wml_button_pane_cp2

0xf31a,	// (0x0000f7a5) form2_midp_image_pane_g1

0x0bfc,	// (0x00001087) list_double_large_graphic_pane_g5_ParamLimits

0x0bfc,	// (0x00001087) list_double_large_graphic_pane_g5

0xbd57,	// (0x0000c1e2) midp_form_pane_ParamLimits

0x0084,	// (0x0000050f) main_apps_wheel_pane_ParamLimits

0xc3e3,	// (0x0000c86e) popup_preview_window_ParamLimits

0xc3e3,	// (0x0000c86e) popup_preview_window

0x2cdc,	// (0x00003167) popup_touch_info_window_ParamLimits

0x2cdc,	// (0x00003167) popup_touch_info_window

0x2cfe,	// (0x00003189) popup_touch_menu_window_ParamLimits

0x2cfe,	// (0x00003189) popup_touch_menu_window

0xf310,	// (0x0000f79b) bg_popup_sub_pane_cp6

0x601e,	// (0x000064a9) list_touch_menu_pane

0x6026,	// (0x000064b1) list_single_touch_menu_pane_ParamLimits

0x6026,	// (0x000064b1) list_single_touch_menu_pane

0x6041,	// (0x000064cc) list_single_touch_menu_pane_t1

0x0084,	// (0x0000050f) bg_popup_sub_pane_cp7_ParamLimits

0x0084,	// (0x0000050f) bg_popup_sub_pane_cp7

0x604f,	// (0x000064da) heading_sub_pane

0x6057,	// (0x000064e2) list_touch_info_pane_ParamLimits

0x6057,	// (0x000064e2) list_touch_info_pane

0x6066,	// (0x000064f1) list_single_touch_info_pane_ParamLimits

0x6066,	// (0x000064f1) list_single_touch_info_pane

0x6078,	// (0x00006503) list_single_touch_info_pane_t1

0x6086,	// (0x00006511) list_single_touch_info_pane_t2

0x0001,

0xfb08,	// (0x0000ff93) list_single_touch_info_pane_t

0x2183,	// (0x0000260e) bg_popup_heading_pane_cp

0x6094,	// (0x0000651f) heading_sub_pane_t1

0x348d,	// (0x00003918) bg_popup_preview_window_pane_cp_ParamLimits

0x348d,	// (0x00003918) bg_popup_preview_window_pane_cp

0x604f,	// (0x000064da) heading_preview_pane

0x6057,	// (0x000064e2) list_preview_pane_ParamLimits

0x6057,	// (0x000064e2) list_preview_pane

0x60a2,	// (0x0000652d) popup_preview_window_g1

0x6066,	// (0x000064f1) list_single_preview_pane_ParamLimits

0x6066,	// (0x000064f1) list_single_preview_pane

0x60aa,	// (0x00006535) list_single_preview_pane_g1

0x60b2,	// (0x0000653d) list_single_preview_pane_t1

0x6078,	// (0x00006503) list_single_preview_pane_t2

0x0001,

0xfb0d,	// (0x0000ff98) list_single_preview_pane_t

0x60c0,	// (0x0000654b) bg_popup_heading_pane_cp2_ParamLimits

0x60c0,	// (0x0000654b) bg_popup_heading_pane_cp2

0x60d6,	// (0x00006561) heading_preview_pane_g1

0x60de,	// (0x00006569) heading_preview_pane_t1_ParamLimits

0x60de,	// (0x00006569) heading_preview_pane_t1

0x021d,	// (0x000006a8) soft_indicator_pane_t1_ParamLimits

0x0928,	// (0x00000db3) scroll_pane_ParamLimits

0x1720,	// (0x00001bab) scroll_sc2_left_pane

0x1729,	// (0x00001bb4) scroll_sc2_right_pane

0x1748,	// (0x00001bd3) scroll_bg_pane_g1_ParamLimits

0x175d,	// (0x00001be8) scroll_bg_pane_g2_ParamLimits

0x1775,	// (0x00001c00) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x0000fb85) scroll_bg_pane_g_ParamLimits

0x1748,	// (0x00001bd3) scroll_handle_pane_g1_ParamLimits

0x1797,	// (0x00001c22) scroll_handle_pane_g2_ParamLimits

0x1775,	// (0x00001c00) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x0000fb8c) scroll_handle_pane_g_ParamLimits

0x2740,	// (0x00002bcb) popup_choice_list_window_ParamLimits

0x2740,	// (0x00002bcb) popup_choice_list_window

0x31fe,	// (0x00003689) choice_list_pane

0x32c6,	// (0x00003751) cell_toolbar_pane_t1

0x32ee,	// (0x00003779) toolbar_button_pane_ParamLimits

0x46c3,	// (0x00004b4e) ai_gene_pane_1_t2_ParamLimits

0x46c3,	// (0x00004b4e) ai_gene_pane_1_t2

0x0001,

0xf912,	// (0x0000fd9d) ai_gene_pane_1_t_ParamLimits

0xf912,	// (0x0000fd9d) ai_gene_pane_1_t

0x60fb,	// (0x00006586) scroll_sc2_left_pane_g1

0x60fb,	// (0x00006586) scroll_sc2_right_pane_g1

0x2710,	// (0x00002b9b) bg_popup_sub_pane_cp10

0x6105,	// (0x00006590) list_choice_list_pane

0x611c,	// (0x000065a7) list_single_choice_list_pane_ParamLimits

0x611c,	// (0x000065a7) list_single_choice_list_pane

0x6130,	// (0x000065bb) list_single_choice_list_pane_g1

0x6138,	// (0x000065c3) list_single_choice_list_pane_t1_ParamLimits

0x6138,	// (0x000065c3) list_single_choice_list_pane_t1

0x614d,	// (0x000065d8) choice_list_pane_g1

0x6155,	// (0x000065e0) choice_list_pane_t1

0xf310,	// (0x0000f79b) input_focus_pane_cp11

0x1480,	// (0x0000190b) title_pane_stacon_g2_ParamLimits

0x1480,	// (0x0000190b) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x0000fb6b) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x0000fb6b) title_pane_stacon_g

0x2183,	// (0x0000260e) cursor_press_pane

0xc064,	// (0x0000c4ef) popup_fep_hwr_window_ParamLimits

0xc064,	// (0x0000c4ef) popup_fep_hwr_window

0x2880,	// (0x00002d0b) popup_fep_vkb_window_ParamLimits

0x2880,	// (0x00002d0b) popup_fep_vkb_window

0x6163,	// (0x000065ee) cursor_press_pane_g1

0x0002,

0xfb36,	// (0x0000ffc1) fep_vkb_side_pane_g_ParamLimits

0x61a4,	// (0x0000662f) fep_hwr_candidate_pane_ParamLimits

0x61a4,	// (0x0000662f) fep_hwr_candidate_pane

0x61ce,	// (0x00006659) fep_hwr_side_pane_ParamLimits

0x61ce,	// (0x00006659) fep_hwr_side_pane

0x61f0,	// (0x0000667b) fep_hwr_top_pane_ParamLimits

0x61f0,	// (0x0000667b) fep_hwr_top_pane

0x6208,	// (0x00006693) fep_hwr_write_pane_ParamLimits

0x6208,	// (0x00006693) fep_hwr_write_pane

0xfb36,	// (0x0000ffc1) fep_vkb_side_pane_g

0x6242,	// (0x000066cd) fep_hwr_top_pane_g1

0x6254,	// (0x000066df) fep_hwr_top_pane_g2

0x6266,	// (0x000066f1) fep_hwr_top_pane_g3

0x0002,

0xfb12,	// (0x0000ff9d) fep_hwr_top_pane_g

0x627b,	// (0x00006706) fep_hwr_top_text_pane

0x18ec,	// (0x00001d77) fep_hwr_top_text_pane_g1

0x6357,	// (0x000067e2) fep_hwr_top_text_pane_t1

0x63b7,	// (0x00006842) fep_hwr_candidate_pane_g1

0x6628,	// (0x00006ab3) fep_vkb_keypad_pane_g3_ParamLimits

0x6628,	// (0x00006ab3) fep_vkb_keypad_pane_g3

0x6654,	// (0x00006adf) fep_vkb_keypad_pane_g4_ParamLimits

0x6654,	// (0x00006adf) fep_vkb_keypad_pane_g4

0x66cb,	// (0x00006b56) fep_vkb_bottom_pane_g2_ParamLimits

0x66cb,	// (0x00006b56) fep_vkb_bottom_pane_g2

0x0001,

0xfb3d,	// (0x0000ffc8) fep_vkb_bottom_pane_g_ParamLimits

0xfb3d,	// (0x0000ffc8) fep_vkb_bottom_pane_g

0x60fb,	// (0x00006586) cell_vkb_side_pane_g2

0x0001,

0xfb47,	// (0x0000ffd2) cell_vkb_side_pane_g

0x6756,	// (0x00006be1) cell_vkb_side_pane_t1

0x6764,	// (0x00006bef) cell_vkb_side_pane_t1_copy1

0x60fb,	// (0x00006586) bg_fep_vkb_candidate_pane_g2

0x68a8,	// (0x00006d33) cell_vkb_candidate_pane_ParamLimits

0x63eb,	// (0x00006876) aid_size_cell_vkb_ParamLimits

0x63eb,	// (0x00006876) aid_size_cell_vkb

0x68a8,	// (0x00006d33) cell_vkb_candidate_pane

0x68e2,	// (0x00006d6d) bg_popup_fep_shadow_pane_g1

0xd57b,	// (0x0000da06) fep_vkb_bottom_pane_ParamLimits

0xd57b,	// (0x0000da06) fep_vkb_bottom_pane

0x64ba,	// (0x00006945) fep_vkb_candidate_pane_ParamLimits

0x64ba,	// (0x00006945) fep_vkb_candidate_pane

0xd5a7,	// (0x0000da32) fep_vkb_keypad_pane_ParamLimits

0xd5a7,	// (0x0000da32) fep_vkb_keypad_pane

0xd5ce,	// (0x0000da59) fep_vkb_side_pane_ParamLimits

0xd5ce,	// (0x0000da59) fep_vkb_side_pane

0xd60a,	// (0x0000da95) fep_vkb_top_pane_ParamLimits

0xd60a,	// (0x0000da95) fep_vkb_top_pane

0x6581,	// (0x00006a0c) fep_vkb_top_pane_g1_ParamLimits

0x6581,	// (0x00006a0c) fep_vkb_top_pane_g1

0x6590,	// (0x00006a1b) fep_vkb_top_pane_g2_ParamLimits

0x6590,	// (0x00006a1b) fep_vkb_top_pane_g2

0x659f,	// (0x00006a2a) fep_vkb_top_pane_g3_ParamLimits

0x659f,	// (0x00006a2a) fep_vkb_top_pane_g3

0x0003,

0xfb2d,	// (0x0000ffb8) fep_vkb_top_pane_g_ParamLimits

0xfb2d,	// (0x0000ffb8) fep_vkb_top_pane_g

0x65bd,	// (0x00006a48) fep_vkb_top_text_pane_ParamLimits

0x65bd,	// (0x00006a48) fep_vkb_top_text_pane

0xd646,	// (0x0000dad1) fep_vkb_side_pane_g1_ParamLimits

0xd646,	// (0x0000dad1) fep_vkb_side_pane_g1

0x6617,	// (0x00006aa2) grid_vkb_side_pane_ParamLimits

0x6617,	// (0x00006aa2) grid_vkb_side_pane

0x68ea,	// (0x00006d75) bg_popup_fep_shadow_pane_g2

0x68f3,	// (0x00006d7e) bg_popup_fep_shadow_pane_g3

0x68fb,	// (0x00006d86) bg_popup_fep_shadow_pane_g4

0x6904,	// (0x00006d8f) bg_popup_fep_shadow_pane_g5

0x690e,	// (0x00006d99) bg_popup_fep_shadow_pane_g6

0x6916,	// (0x00006da1) bg_popup_fep_shadow_pane_g7

0x10ac,	// (0x00001537) bg_popup_fep_shadow_pane_g8

0x6676,	// (0x00006b01) grid_vkb_keypad_number_pane_ParamLimits

0x6676,	// (0x00006b01) grid_vkb_keypad_number_pane

0x668a,	// (0x00006b15) grid_vkb_keypad_pane_ParamLimits

0x668a,	// (0x00006b15) grid_vkb_keypad_pane

0x66b0,	// (0x00006b3b) fep_vkb_bottom_pane_g1_ParamLimits

0x66b0,	// (0x00006b3b) fep_vkb_bottom_pane_g1

0x66d9,	// (0x00006b64) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x66d9,	// (0x00006b64) grid_vkb_keypad_bottom_left_pane

0x66ee,	// (0x00006b79) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x66ee,	// (0x00006b79) grid_vkb_keypad_bottom_right_pane

0x6703,	// (0x00006b8e) fep_vkb_top_text_pane_g1

0xd68d,	// (0x0000db18) fep_vkb_top_text_pane_t1

0xd69f,	// (0x0000db2a) cell_vkb_side_pane_ParamLimits

0xd69f,	// (0x0000db2a) cell_vkb_side_pane

0x60fb,	// (0x00006586) cell_vkb_side_pane_g1

0x6772,	// (0x00006bfd) cell_vkb_keypad_pane_ParamLimits

0x6772,	// (0x00006bfd) cell_vkb_keypad_pane

0x67ff,	// (0x00006c8a) cell_vkb_keypad_pane_g1

0x0008,

0xfb5a,	// (0x0000ffe5) bg_popup_fep_shadow_pane_g

0x60fb,	// (0x00006586) cell_hwr_side_pane_g1

0x60fb,	// (0x00006586) cell_hwr_side_pane_g2

0x6809,	// (0x00006c94) cell_vkb_keypad_pane_t1

0xd6b5,	// (0x0000db40) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xd6b5,	// (0x0000db40) cell_vkb_keypad_bottom_left_pane

0xd6ca,	// (0x0000db55) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xd6ca,	// (0x0000db55) cell_vkb_keypad_bottom_right_pane

0x60fb,	// (0x00006586) cell_vkb_keypad_bottom_left_pane_g1

0x60fb,	// (0x00006586) cell_vkb_keypad_bottom_right_pane_g1

0x686d,	// (0x00006cf8) cell_vkb_keypad_number_pane_ParamLimits

0x686d,	// (0x00006cf8) cell_vkb_keypad_number_pane

0x688c,	// (0x00006d17) cell_vkb_keypad_number_pane_g1

0x6896,	// (0x00006d21) cell_vkb_keypad_number_pane_g2

0x689f,	// (0x00006d2a) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4c,	// (0x0000ffd7) cell_vkb_keypad_number_pane_g

0x6809,	// (0x00006c94) cell_vkb_keypad_number_pane_t1

0x68c9,	// (0x00006d54) fep_vkb_candidate_pane_g1

0x0001,

0xfb47,	// (0x0000ffd2) cell_hwr_side_pane_g

0x6928,	// (0x00006db3) cell_hwr_side_pane_t1

0x6936,	// (0x00006dc1) cell_hwr_side_pane_t1_copy1

0x65af,	// (0x00006a3a) cell_hwr_candidate_pane_g1

0x6986,	// (0x00006e11) cell_hwr_candidate_pane_t1

0x60fb,	// (0x00006586) cell_vkb_candidate_pane_g2

0x69da,	// (0x00006e65) cell_vkb_candidate_pane_t1

0x616b,	// (0x000065f6) bg_popup_fep_shadow_pane_ParamLimits

0x616b,	// (0x000065f6) bg_popup_fep_shadow_pane

0x6222,	// (0x000066ad) bg_fep_hwr_top_pane_g4

0x6290,	// (0x0000671b) bg_hwr_side_pane_g1_ParamLimits

0x6290,	// (0x0000671b) bg_hwr_side_pane_g1

0xd534,	// (0x0000d9bf) cell_hwr_side_pane_ParamLimits

0xd534,	// (0x0000d9bf) cell_hwr_side_pane

0x6302,	// (0x0000678d) fep_hwr_write_pane_g1_ParamLimits

0x6302,	// (0x0000678d) fep_hwr_write_pane_g1

0x630f,	// (0x0000679a) fep_hwr_write_pane_g2_ParamLimits

0x630f,	// (0x0000679a) fep_hwr_write_pane_g2

0x631c,	// (0x000067a7) fep_hwr_write_pane_g3_ParamLimits

0x631c,	// (0x000067a7) fep_hwr_write_pane_g3

0xd554,	// (0x0000d9df) fep_hwr_write_pane_g4_ParamLimits

0xd554,	// (0x0000d9df) fep_hwr_write_pane_g4

0x0005,

0xfb19,	// (0x0000ffa4) fep_hwr_write_pane_g_ParamLimits

0xfb19,	// (0x0000ffa4) fep_hwr_write_pane_g

0x6222,	// (0x000066ad) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x6222,	// (0x000066ad) bg_fep_hwr_candidate_pane_g2

0x6365,	// (0x000067f0) cell_hwr_candidate_pane_ParamLimits

0x6365,	// (0x000067f0) cell_hwr_candidate_pane

0x63b7,	// (0x00006842) fep_hwr_candidate_pane_g1_ParamLimits

0x6419,	// (0x000068a4) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6419,	// (0x000068a4) bg_popup_fep_shadow_pane_cp2

0x65af,	// (0x00006a3a) fep_vkb_top_pane_g4_ParamLimits

0x65af,	// (0x00006a3a) fep_vkb_top_pane_g4

0x65f5,	// (0x00006a80) fep_vkb_side_pane_g2_ParamLimits

0x65f5,	// (0x00006a80) fep_vkb_side_pane_g2

0xb7f7,	// (0x0000bc82) list_setting_pane_t4_ParamLimits

0xb7f7,	// (0x0000bc82) list_setting_pane_t4

0xb873,	// (0x0000bcfe) list_setting_number_pane_t5_ParamLimits

0xb873,	// (0x0000bcfe) list_setting_number_pane_t5

0x193d,	// (0x00001dc8) list_double_heading_pane_cp2_ParamLimits

0x193d,	// (0x00001dc8) list_double_heading_pane_cp2

0x0f76,	// (0x00001401) list_double_heading_pane_g1_cp2_ParamLimits

0x0f76,	// (0x00001401) list_double_heading_pane_g1_cp2

0x0f82,	// (0x0000140d) list_double_heading_pane_g2_cp2_ParamLimits

0x0f82,	// (0x0000140d) list_double_heading_pane_g2_cp2

0x69e8,	// (0x00006e73) list_double_heading_pane_t1_cp2_ParamLimits

0x69e8,	// (0x00006e73) list_double_heading_pane_t1_cp2

0x69fe,	// (0x00006e89) list_double_heading_pane_t2_cp2_ParamLimits

0x69fe,	// (0x00006e89) list_double_heading_pane_t2_cp2

0xf308,	// (0x0000f793) aid_value_unit2

0xf4e7,	// (0x0000f972) popup_preview_fixed_window

0x03b8,	// (0x00000843) bg_popup_preview_window_pane_cp02

0x6a10,	// (0x00006e9b) list_preview_fixed_pane

0x6a56,	// (0x00006ee1) list_empty_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_empty_pane_fp

0x6a56,	// (0x00006ee1) list_single_cale_day_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_cale_day_pane_fp

0x6a56,	// (0x00006ee1) list_single_graphic_heading_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_graphic_heading_pane_fp

0x6a56,	// (0x00006ee1) list_single_graphic_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_graphic_pane_fp

0x6a56,	// (0x00006ee1) list_single_heading_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_heading_pane_fp

0x6a56,	// (0x00006ee1) list_single_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_pane_fp

0x6a6f,	// (0x00006efa) list_single_pane_fp_g1_ParamLimits

0x6a6f,	// (0x00006efa) list_single_pane_fp_g1

0x6a7b,	// (0x00006f06) list_single_pane_fp_g2_ParamLimits

0x6a7b,	// (0x00006f06) list_single_pane_fp_g2

0x6a87,	// (0x00006f12) list_single_pane_fp_g3_ParamLimits

0x6a87,	// (0x00006f12) list_single_pane_fp_g3

0x6a9b,	// (0x00006f26) list_single_pane_fp_g4_ParamLimits

0x6a9b,	// (0x00006f26) list_single_pane_fp_g4

0x0003,

0xfb7b,	// (0x00010006) list_single_pane_fp_g_ParamLimits

0xfb7b,	// (0x00010006) list_single_pane_fp_g

0x6aa7,	// (0x00006f32) list_single_pane_fp_t1_ParamLimits

0x6aa7,	// (0x00006f32) list_single_pane_fp_t1

0x6abe,	// (0x00006f49) list_single_graphic_pane_fp_g1_ParamLimits

0x6abe,	// (0x00006f49) list_single_graphic_pane_fp_g1

0x6a6f,	// (0x00006efa) list_single_graphic_pane_fp_g2_ParamLimits

0x6a6f,	// (0x00006efa) list_single_graphic_pane_fp_g2

0x6a7b,	// (0x00006f06) list_single_graphic_pane_fp_g3_ParamLimits

0x6a7b,	// (0x00006f06) list_single_graphic_pane_fp_g3

0x6a87,	// (0x00006f12) list_single_graphic_pane_fp_g4_ParamLimits

0x6a87,	// (0x00006f12) list_single_graphic_pane_fp_g4

0x6a9b,	// (0x00006f26) list_single_graphic_pane_fp_g5_ParamLimits

0x6a9b,	// (0x00006f26) list_single_graphic_pane_fp_g5

0x0004,

0xfb84,	// (0x0001000f) list_single_graphic_pane_fp_g_ParamLimits

0xfb84,	// (0x0001000f) list_single_graphic_pane_fp_g

0x6aca,	// (0x00006f55) list_single_graphic_pane_fp_t1_ParamLimits

0x6aca,	// (0x00006f55) list_single_graphic_pane_fp_t1

0x6abe,	// (0x00006f49) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x6abe,	// (0x00006f49) list_single_graphic_heading_pane_fp_g1

0x6a6f,	// (0x00006efa) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x6a6f,	// (0x00006efa) list_single_graphic_heading_pane_fp_g2

0x6a7b,	// (0x00006f06) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x6a7b,	// (0x00006f06) list_single_graphic_heading_pane_fp_g3

0x6a87,	// (0x00006f12) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x6a87,	// (0x00006f12) list_single_graphic_heading_pane_fp_g4

0x6a9b,	// (0x00006f26) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x6a9b,	// (0x00006f26) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001000f) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001000f) list_single_graphic_heading_pane_fp_g

0x6ae0,	// (0x00006f6b) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x6ae0,	// (0x00006f6b) list_single_graphic_heading_pane_fp_t1

0x6af6,	// (0x00006f81) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x6af6,	// (0x00006f81) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb8f,	// (0x0001001a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb8f,	// (0x0001001a) list_single_graphic_heading_pane_fp_t

0x6b08,	// (0x00006f93) list_single_cale_day_pane_fp_g1_ParamLimits

0x6b08,	// (0x00006f93) list_single_cale_day_pane_fp_g1

0x6b40,	// (0x00006fcb) list_single_cale_day_pane_fp_g2_ParamLimits

0x6b40,	// (0x00006fcb) list_single_cale_day_pane_fp_g2

0x6b4c,	// (0x00006fd7) list_single_cale_day_pane_fp_g3_ParamLimits

0x6b4c,	// (0x00006fd7) list_single_cale_day_pane_fp_g3

0x6b74,	// (0x00006fff) list_single_cale_day_pane_fp_g4_ParamLimits

0x6b74,	// (0x00006fff) list_single_cale_day_pane_fp_g4

0x6b98,	// (0x00007023) list_single_cale_day_pane_fp_g5_ParamLimits

0x6b98,	// (0x00007023) list_single_cale_day_pane_fp_g5

0x0004,

0xfb94,	// (0x0001001f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb94,	// (0x0001001f) list_single_cale_day_pane_fp_g

0x6bbc,	// (0x00007047) list_single_cale_day_pane_fp_t1_ParamLimits

0x6bbc,	// (0x00007047) list_single_cale_day_pane_fp_t1

0x6be2,	// (0x0000706d) list_single_cale_day_pane_fp_t2_ParamLimits

0x6be2,	// (0x0000706d) list_single_cale_day_pane_fp_t2

0x6bfb,	// (0x00007086) list_single_cale_day_pane_fp_t3_ParamLimits

0x6bfb,	// (0x00007086) list_single_cale_day_pane_fp_t3

0x0002,

0xfb9f,	// (0x0001002a) list_single_cale_day_pane_fp_t_ParamLimits

0xfb9f,	// (0x0001002a) list_single_cale_day_pane_fp_t

0x6a6f,	// (0x00006efa) list_empty_pane_fp_g1_ParamLimits

0x6a6f,	// (0x00006efa) list_empty_pane_fp_g1

0x6c14,	// (0x0000709f) list_empty_pane_fp_t1

0x6c22,	// (0x000070ad) list_empty_pane_fp_t2

0x0001,

0xfba6,	// (0x00010031) list_empty_pane_fp_t

0x6a6f,	// (0x00006efa) list_single_heading_pane_fp_g1_ParamLimits

0x6a6f,	// (0x00006efa) list_single_heading_pane_fp_g1

0x6a7b,	// (0x00006f06) list_single_heading_pane_fp_g2_ParamLimits

0x6a7b,	// (0x00006f06) list_single_heading_pane_fp_g2

0x6a87,	// (0x00006f12) list_single_heading_pane_fp_g3_ParamLimits

0x6a87,	// (0x00006f12) list_single_heading_pane_fp_g3

0x0002,

0xfbab,	// (0x00010036) list_single_heading_pane_fp_g_ParamLimits

0xfbab,	// (0x00010036) list_single_heading_pane_fp_g

0x6c30,	// (0x000070bb) list_single_heading_pane_fp_t1_ParamLimits

0x6c30,	// (0x000070bb) list_single_heading_pane_fp_t1

0x6c42,	// (0x000070cd) list_single_heading_pane_fp_t2_ParamLimits

0x6c42,	// (0x000070cd) list_single_heading_pane_fp_t2

0x0001,

0xfbb2,	// (0x0001003d) list_single_heading_pane_fp_t_ParamLimits

0xfbb2,	// (0x0001003d) list_single_heading_pane_fp_t

0x12c7,	// (0x00001752) aid_size_cell_fast

0x032a,	// (0x000007b5) soft_indicator_pane_cp1_t1

0x1304,	// (0x0000178f) cell_app_pane_cp2_ParamLimits

0x1304,	// (0x0000178f) cell_app_pane_cp2

0x618d,	// (0x00006618) fep_hwr_candidate_drop_down_list_pane

0x63d1,	// (0x0000685c) fep_hwr_candidate_pane_g3_ParamLimits

0x63d1,	// (0x0000685c) fep_hwr_candidate_pane_g3

0x63de,	// (0x00006869) fep_hwr_candidate_pane_g4_ParamLimits

0x63de,	// (0x00006869) fep_hwr_candidate_pane_g4

0x0002,

0xfb26,	// (0x0000ffb1) fep_hwr_candidate_pane_g_ParamLimits

0xfb26,	// (0x0000ffb1) fep_hwr_candidate_pane_g

0x64a9,	// (0x00006934) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x64a9,	// (0x00006934) fep_vkb_candidate_drop_down_list_pane

0x68d1,	// (0x00006d5c) fep_vkb_candidate_pane_g3

0x68d9,	// (0x00006d64) fep_vkb_candidate_pane_g4

0x0002,

0xfb53,	// (0x0000ffde) fep_vkb_candidate_pane_g

0x65af,	// (0x00006a3a) cell_hwr_candidate_pane_g1_ParamLimits

0x6944,	// (0x00006dcf) cell_hwr_candidate_pane_g3_ParamLimits

0x6944,	// (0x00006dcf) cell_hwr_candidate_pane_g3

0x6965,	// (0x00006df0) cell_hwr_candidate_pane_g4_ParamLimits

0x6965,	// (0x00006df0) cell_hwr_candidate_pane_g4

0x0002,

0xfb6d,	// (0x0000fff8) cell_hwr_candidate_pane_g_ParamLimits

0xfb6d,	// (0x0000fff8) cell_hwr_candidate_pane_g

0x69a4,	// (0x00006e2f) cell_vkb_candidate_pane_g3_ParamLimits

0x69a4,	// (0x00006e2f) cell_vkb_candidate_pane_g3

0x69bf,	// (0x00006e4a) cell_vkb_candidate_pane_g4_ParamLimits

0x69bf,	// (0x00006e4a) cell_vkb_candidate_pane_g4

0x6c58,	// (0x000070e3) cell_app_pane_cp2_g1_ParamLimits

0x6c58,	// (0x000070e3) cell_app_pane_cp2_g1

0x6c76,	// (0x00007101) cell_app_pane_cp2_g2_ParamLimits

0x6c76,	// (0x00007101) cell_app_pane_cp2_g2

0x0001,

0xfbb7,	// (0x00010042) cell_app_pane_cp2_g_ParamLimits

0xfbb7,	// (0x00010042) cell_app_pane_cp2_g

0x6c82,	// (0x0000710d) cell_app_pane_cp2_t1_ParamLimits

0x6c82,	// (0x0000710d) cell_app_pane_cp2_t1

0x0f50,	// (0x000013db) grid_highlight_pane_cp1_ParamLimits

0x0f50,	// (0x000013db) grid_highlight_pane_cp1

0x6c94,	// (0x0000711f) cell_hwr_candidate_pane_cp1_ParamLimits

0x6c94,	// (0x0000711f) cell_hwr_candidate_pane_cp1

0x65af,	// (0x00006a3a) fep_hwr_candidate_drop_down_list_pane_g1

0x6cb8,	// (0x00007143) fep_hwr_candidate_drop_down_list_pane_g2

0x6cc5,	// (0x00007150) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x00010047) fep_hwr_candidate_drop_down_list_pane_g

0x6cd2,	// (0x0000715d) fep_hwr_candidate_drop_down_list_scroll_pane

0x6cdb,	// (0x00007166) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6cdb,	// (0x00007166) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x6ce8,	// (0x00007173) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6ce8,	// (0x00007173) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x6cf5,	// (0x00007180) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6cf5,	// (0x00007180) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x69a4,	// (0x00006e2f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x69a4,	// (0x00006e2f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x69bf,	// (0x00006e4a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x69bf,	// (0x00006e4a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x6d02,	// (0x0000718d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6d02,	// (0x0000718d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x6d1d,	// (0x000071a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6d1d,	// (0x000071a8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x6d38,	// (0x000071c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6d38,	// (0x000071c3) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc3,	// (0x0001004e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc3,	// (0x0001004e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x6d53,	// (0x000071de) cell_vkb_candidate_pane_cp1_ParamLimits

0x6d53,	// (0x000071de) cell_vkb_candidate_pane_cp1

0x65af,	// (0x00006a3a) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) fep_vkb_candidate_drop_down_list_pane_g1

0x6cb8,	// (0x00007143) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x6cb8,	// (0x00007143) fep_vkb_candidate_drop_down_list_pane_g2

0x6cc5,	// (0x00007150) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x6cc5,	// (0x00007150) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbc,	// (0x00010047) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbc,	// (0x00010047) fep_vkb_candidate_drop_down_list_pane_g

0x6d79,	// (0x00007204) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x6d79,	// (0x00007204) fep_vkb_candidate_drop_down_list_scroll_pane

0x6d86,	// (0x00007211) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x6d86,	// (0x00007211) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x6d93,	// (0x0000721e) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x6d93,	// (0x0000721e) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x6d9f,	// (0x0000722a) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x6d9f,	// (0x0000722a) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x6944,	// (0x00006dcf) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6944,	// (0x00006dcf) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x6965,	// (0x00006df0) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6965,	// (0x00006df0) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x6dab,	// (0x00007236) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x6dab,	// (0x00007236) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x6dcc,	// (0x00007257) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x6dcc,	// (0x00007257) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x6ded,	// (0x00007278) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x6ded,	// (0x00007278) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd4,	// (0x0001005f) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd4,	// (0x0001005f) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb0fe,	// (0x0000b589) title_pane_g1_ParamLimits

0xb10f,	// (0x0000b59a) title_pane_g2_ParamLimits

0xf56a,	// (0x0000f9f5) title_pane_g_ParamLimits

0x18dc,	// (0x00001d67) aid_call2_pane

0x18e4,	// (0x00001d6f) aid_call_pane

0x18ec,	// (0x00001d77) popup_clock_analogue_window_g1

0x18ec,	// (0x00001d77) popup_clock_analogue_window_g2

0x18f4,	// (0x00001d7f) popup_clock_analogue_window_g3

0x18fd,	// (0x00001d88) popup_clock_analogue_window_g4

0xf31a,	// (0x0000f7a5) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x0000fb9a) popup_clock_analogue_window_g

0x1905,	// (0x00001d90) popup_clock_analogue_window_t1

0x1990,	// (0x00001e1b) clock_digital_number_pane_ParamLimits

0x1990,	// (0x00001e1b) clock_digital_number_pane

0x199c,	// (0x00001e27) clock_digital_number_pane_cp02_ParamLimits

0x199c,	// (0x00001e27) clock_digital_number_pane_cp02

0x19a8,	// (0x00001e33) clock_digital_number_pane_cp03_ParamLimits

0x19a8,	// (0x00001e33) clock_digital_number_pane_cp03

0x19b4,	// (0x00001e3f) clock_digital_number_pane_cp04_ParamLimits

0x19b4,	// (0x00001e3f) clock_digital_number_pane_cp04

0x19c0,	// (0x00001e4b) clock_digital_separator_pane_ParamLimits

0x19c0,	// (0x00001e4b) clock_digital_separator_pane

0x19cc,	// (0x00001e57) popup_clock_digital_window_t1_ParamLimits

0x19cc,	// (0x00001e57) popup_clock_digital_window_t1

0xf31a,	// (0x0000f7a5) clock_digital_number_pane_g1

0xf31a,	// (0x0000f7a5) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x0000fba5) clock_digital_number_pane_g

0xf31a,	// (0x0000f7a5) clock_digital_separator_pane_g1

0xf31a,	// (0x0000f7a5) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x0000fba5) clock_digital_separator_pane_g

0xc6cb,	// (0x0000cb56) aid_fill_nsta_ParamLimits

0xc7fc,	// (0x0000cc87) indicator_nsta_pane_ParamLimits

0x302b,	// (0x000034b6) popup_clock_analogue_window

0x302b,	// (0x000034b6) popup_clock_digital_window

0x1288,	// (0x00001713) grid_indicator_nsta_pane_ParamLimits

0x5a7a,	// (0x00005f05) clock_nsta_pane_t2

0x0001,

0xfaa6,	// (0x0000ff31) clock_nsta_pane_t

0x16c5,	// (0x00001b50) aid_size_max_handle

0xbb6a,	// (0x0000bff5) aid_size_min_handle

0x2183,	// (0x0000260e) editor_scroll_pane

0x6e08,	// (0x00007293) ex_editor_pane

0x1234,	// (0x000016bf) scroll_pane_cp13

0x0954,	// (0x00000ddf) scroll_pane_cp14

0x1935,	// (0x00001dc0) scroll_pane_cp36

0xbbf7,	// (0x0000c082) list_single_graphic_hl_pane_cp2_ParamLimits

0xbbf7,	// (0x0000c082) list_single_graphic_hl_pane_cp2

0xd18a,	// (0x0000d615) list_single_graphic_hl_pane_ParamLimits

0xd18a,	// (0x0000d615) list_single_graphic_hl_pane

0x6e10,	// (0x0000729b) aid_size_min_hl_cp1

0x6e19,	// (0x000072a4) list_highlight_pane_cp34_ParamLimits

0x6e19,	// (0x000072a4) list_highlight_pane_cp34

0x6e2a,	// (0x000072b5) list_single_graphic_hl_pane_g1_ParamLimits

0x6e2a,	// (0x000072b5) list_single_graphic_hl_pane_g1

0x095c,	// (0x00000de7) list_single_graphic_hl_pane_g2_ParamLimits

0x095c,	// (0x00000de7) list_single_graphic_hl_pane_g2

0x095c,	// (0x00000de7) list_single_graphic_hl_pane_g3_ParamLimits

0x095c,	// (0x00000de7) list_single_graphic_hl_pane_g3

0x0968,	// (0x00000df3) list_single_graphic_hl_pane_g4_ParamLimits

0x0968,	// (0x00000df3) list_single_graphic_hl_pane_g4

0x6e9d,	// (0x00007328) list_single_graphic_hl_pane_g5_ParamLimits

0x6e9d,	// (0x00007328) list_single_graphic_hl_pane_g5

0x0004,

0xfbe5,	// (0x00010070) list_single_graphic_hl_pane_g_ParamLimits

0xfbe5,	// (0x00010070) list_single_graphic_hl_pane_g

0xd6e5,	// (0x0000db70) list_single_graphic_hl_pane_t1_ParamLimits

0xd6e5,	// (0x0000db70) list_single_graphic_hl_pane_t1

0x6e6d,	// (0x000072f8) aid_size_min_hl_cp2

0x6e76,	// (0x00007301) list_highlight_pane_cp34_cp2_ParamLimits

0x6e76,	// (0x00007301) list_highlight_pane_cp34_cp2

0x6e2a,	// (0x000072b5) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x6e2a,	// (0x000072b5) list_single_graphic_hl_pane_g1_cp2

0x6e83,	// (0x0000730e) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x6e83,	// (0x0000730e) list_single_graphic_hl_pane_g2_cp2

0x6e8f,	// (0x0000731a) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x6e8f,	// (0x0000731a) list_single_graphic_hl_pane_g3_cp2

0x0968,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x0968,	// (0x00000df3) list_single_graphic_hl_pane_g4_cp2

0x6e9d,	// (0x00007328) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x6e9d,	// (0x00007328) list_single_graphic_hl_pane_g5_cp2

0xbe44,	// (0x0000c2cf) control_pane_g4_ParamLimits

0xbe44,	// (0x0000c2cf) control_pane_g4

0x2710,	// (0x00002b9b) bg_popup_sub_pane_cp10_ParamLimits

0x6105,	// (0x00006590) list_choice_list_pane_ParamLimits

0x6114,	// (0x0000659f) scroll_pane_cp23

0x03b8,	// (0x00000843) bg_popup_preview_window_pane_cp02_ParamLimits

0x6a10,	// (0x00006e9b) list_preview_fixed_pane_ParamLimits

0x6a26,	// (0x00006eb1) list_preview_fixed_pane_cp_ParamLimits

0x6a26,	// (0x00006eb1) list_preview_fixed_pane_cp

0x6a32,	// (0x00006ebd) popup_preview_fixed_window_g1_ParamLimits

0x6a32,	// (0x00006ebd) popup_preview_fixed_window_g1

0x6a3e,	// (0x00006ec9) popup_preview_fixed_window_g2_ParamLimits

0x6a3e,	// (0x00006ec9) popup_preview_fixed_window_g2

0x0002,

0xfb74,	// (0x0000ffff) popup_preview_fixed_window_g_ParamLimits

0xfb74,	// (0x0000ffff) popup_preview_fixed_window_g

0x1565,	// (0x000019f0) aid_navi_side_left_pane_ParamLimits

0x157a,	// (0x00001a05) aid_navi_side_right_pane_ParamLimits

0x1592,	// (0x00001a1d) navi_icon_pane_stacon_ParamLimits

0x15a6,	// (0x00001a31) navi_navi_pane_stacon_ParamLimits

0x1592,	// (0x00001a1d) navi_text_pane_stacon_ParamLimits

0xf310,	// (0x0000f79b) main_text_info_pane

0x6ec7,	// (0x00007352) listscroll_text_info_pane

0x6ecf,	// (0x0000735a) list_text_info_pane_ParamLimits

0x6ecf,	// (0x0000735a) list_text_info_pane

0x6ede,	// (0x00007369) scroll_pane_cp24_ParamLimits

0x6ede,	// (0x00007369) scroll_pane_cp24

0xd6fb,	// (0x0000db86) list_text_info_pane_t1_ParamLimits

0xd6fb,	// (0x0000db86) list_text_info_pane_t1

0xbfc8,	// (0x0000c453) popup_fast_swap2_window_ParamLimits

0xbfc8,	// (0x0000c453) popup_fast_swap2_window

0x6f21,	// (0x000073ac) aid_size_cell_fast2

0xf310,	// (0x0000f79b) bg_popup_window_pane_cp17

0x38e2,	// (0x00003d6d) heading_pane_cp2

0x0618,	// (0x00000aa3) listscroll_fast2_pane

0x6f2b,	// (0x000073b6) grid_fast2_pane

0x6f35,	// (0x000073c0) listscroll_fast2_pane_g1

0x6f3f,	// (0x000073ca) listscroll_fast2_pane_g2

0x0001,

0xfbf0,	// (0x0001007b) listscroll_fast2_pane_g

0x1234,	// (0x000016bf) scroll_pane_cp26

0x6f49,	// (0x000073d4) cell_fast2_pane_ParamLimits

0x6f49,	// (0x000073d4) cell_fast2_pane

0x6f60,	// (0x000073eb) cell_fast2_pane_g1

0x6f69,	// (0x000073f4) cell_fast2_pane_g2

0x6f72,	// (0x000073fd) cell_fast2_pane_g3

0x0002,

0xfbf5,	// (0x00010080) cell_fast2_pane_g

0x0711,	// (0x00000b9c) grid_highlight_pane_cp9

0x0726,	// (0x00000bb1) main_eswt_pane_ParamLimits

0x0726,	// (0x00000bb1) main_eswt_pane

0x6ef3,	// (0x0000737e) list_single_text_info_pane

0x6f7a,	// (0x00007405) eswt_ctrl_button_pane

0x6f7a,	// (0x00007405) eswt_ctrl_canvas_pane

0x6f82,	// (0x0000740d) eswt_ctrl_combo_pane

0x6f7a,	// (0x00007405) eswt_ctrl_default_pane

0x6f7a,	// (0x00007405) eswt_ctrl_label_pane

0x6f8a,	// (0x00007415) eswt_ctrl_wait_pane

0x6f92,	// (0x0000741d) eswt_shell_pane

0xf310,	// (0x0000f79b) listscroll_eswt_app_pane

0x6fb2,	// (0x0000743d) popup_eswt_tasktip_window_ParamLimits

0x6fb2,	// (0x0000743d) popup_eswt_tasktip_window

0x348d,	// (0x00003918) bg_popup_window_pane_cp18

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_ParamLimits

0x6fc3,	// (0x0000744e) eswt_control_pane_g1

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_ParamLimits

0x6fd0,	// (0x0000745b) eswt_control_pane_g2

0x6fdd,	// (0x00007468) eswt_control_pane_g3_ParamLimits

0x6fdd,	// (0x00007468) eswt_control_pane_g3

0x6fea,	// (0x00007475) eswt_control_pane_g4_ParamLimits

0x6fea,	// (0x00007475) eswt_control_pane_g4

0x0003,

0xfbfc,	// (0x00010087) eswt_control_pane_g_ParamLimits

0xfbfc,	// (0x00010087) eswt_control_pane_g

0x0f50,	// (0x000013db) bg_button_pane_ParamLimits

0x0f50,	// (0x000013db) bg_button_pane

0x0726,	// (0x00000bb1) common_borders_pane_copy2_ParamLimits

0x0726,	// (0x00000bb1) common_borders_pane_copy2

0x6ff7,	// (0x00007482) control_button_pane_g1_ParamLimits

0x6ff7,	// (0x00007482) control_button_pane_g1

0x7003,	// (0x0000748e) control_button_pane_g2_ParamLimits

0x7003,	// (0x0000748e) control_button_pane_g2

0x700f,	// (0x0000749a) control_button_pane_g3_ParamLimits

0x700f,	// (0x0000749a) control_button_pane_g3

0x0002,

0xfc05,	// (0x00010090) control_button_pane_g_ParamLimits

0xfc05,	// (0x00010090) control_button_pane_g

0x7023,	// (0x000074ae) control_button_pane_t1

0x7031,	// (0x000074bc) control_button_pane_t2

0x0001,

0xfc0c,	// (0x00010097) control_button_pane_t

0x32fa,	// (0x00003785) bg_button_pane_g1

0x3302,	// (0x0000378d) bg_button_pane_g2

0x330a,	// (0x00003795) bg_button_pane_g3

0x3312,	// (0x0000379d) bg_button_pane_g4

0x331a,	// (0x000037a5) bg_button_pane_g5

0x3322,	// (0x000037ad) bg_button_pane_g6

0x332a,	// (0x000037b5) bg_button_pane_g7

0x3332,	// (0x000037bd) bg_button_pane_g8

0x333a,	// (0x000037c5) bg_button_pane_g9

0x0008,

0xf866,	// (0x0000fcf1) bg_button_pane_g

0x60c0,	// (0x0000654b) common_borders_pane_ParamLimits

0x60c0,	// (0x0000654b) common_borders_pane

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy1_ParamLimits

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy1

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy1_ParamLimits

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy1

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy1_ParamLimits

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy1

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy1_ParamLimits

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy1

0x60fb,	// (0x00006586) bg_eswt_ctrl_canvas_pane_g1

0x60c0,	// (0x0000654b) common_borders_pane_cp2_ParamLimits

0x60c0,	// (0x0000654b) common_borders_pane_cp2

0x60c0,	// (0x0000654b) common_borders_pane_cp3_ParamLimits

0x60c0,	// (0x0000654b) common_borders_pane_cp3

0x703f,	// (0x000074ca) separator_horizontal_pane

0x7047,	// (0x000074d2) separator_vertical_pane

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy2_ParamLimits

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy2

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy2_ParamLimits

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy2

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy2_ParamLimits

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy2

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy2_ParamLimits

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy2

0xf310,	// (0x0000f79b) common_borders_pane_cp4

0x7050,	// (0x000074db) separator_horizontal_pane_g1

0x7059,	// (0x000074e4) separator_horizontal_pane_g2

0x7062,	// (0x000074ed) separator_horizontal_pane_g3

0x0002,

0xfc11,	// (0x0001009c) separator_horizontal_pane_g

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy3_ParamLimits

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy3

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy3_ParamLimits

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy3

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy3_ParamLimits

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy3

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy3_ParamLimits

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy3

0xf310,	// (0x0000f79b) common_borders_pane_cp5

0x706b,	// (0x000074f6) separator_vertical_pane_g1

0x7074,	// (0x000074ff) separator_vertical_pane_g2

0x707d,	// (0x00007508) separator_vertical_pane_g3

0x0002,

0xfc18,	// (0x000100a3) separator_vertical_pane_g

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy4_ParamLimits

0x6fc3,	// (0x0000744e) eswt_control_pane_g1_copy4

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy4_ParamLimits

0x6fd0,	// (0x0000745b) eswt_control_pane_g2_copy4

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy4_ParamLimits

0x6fdd,	// (0x00007468) eswt_control_pane_g3_copy4

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy4_ParamLimits

0x6fea,	// (0x00007475) eswt_control_pane_g4_copy4

0xd71d,	// (0x0000dba8) eswt_ctrl_combo_button_pane

0xd725,	// (0x0000dbb0) eswt_ctrl_input_pane

0xd72d,	// (0x0000dbb8) popup_choice_list_window_cp70

0xd735,	// (0x0000dbc0) eswt_ctrl_input_pane_t1

0xf310,	// (0x0000f79b) input_focus_pane_cp70

0x60c0,	// (0x0000654b) bg_button_pane_cp70_ParamLimits

0x60c0,	// (0x0000654b) bg_button_pane_cp70

0xd743,	// (0x0000dbce) eswt_ctrl_combo_button_pane_g1

0x70b4,	// (0x0000753f) wait_bar_pane_cp70

0x348d,	// (0x00003918) bg_popup_window_pane_cp70_ParamLimits

0x348d,	// (0x00003918) bg_popup_window_pane_cp70

0x70bc,	// (0x00007547) popup_eswt_tasktip_window_t1

0x70d2,	// (0x0000755d) wait_bar_pane_cp71_ParamLimits

0x70d2,	// (0x0000755d) wait_bar_pane_cp71

0x70de,	// (0x00007569) grid_eswt_app_pane

0x1729,	// (0x00001bb4) scroll_pane_cp70

0xd74b,	// (0x0000dbd6) cell_eswt_app_pane_ParamLimits

0xd74b,	// (0x0000dbd6) cell_eswt_app_pane

0xd77d,	// (0x0000dc08) cell_eswt_app_pane_g1_ParamLimits

0xd77d,	// (0x0000dc08) cell_eswt_app_pane_g1

0xd7ac,	// (0x0000dc37) cell_eswt_app_pane_g2_ParamLimits

0xd7ac,	// (0x0000dc37) cell_eswt_app_pane_g2

0x0001,

0xfc1f,	// (0x000100aa) cell_eswt_app_pane_g_ParamLimits

0xfc1f,	// (0x000100aa) cell_eswt_app_pane_g

0xd7d5,	// (0x0000dc60) cell_eswt_app_pane_t1_ParamLimits

0xd7d5,	// (0x0000dc60) cell_eswt_app_pane_t1

0x71a3,	// (0x0000762e) grid_highlight_pane_cp70_ParamLimits

0x71a3,	// (0x0000762e) grid_highlight_pane_cp70

0x4c4b,	// (0x000050d6) set_content_pane_g1

0x24dc,	// (0x00002967) status_small_volume_pane

0x71af,	// (0x0000763a) status_small_volume_pane_g1

0x71b7,	// (0x00007642) volume_small2_pane

0x71c0,	// (0x0000764b) volume_small2_pane_g1

0x71c9,	// (0x00007654) volume_small2_pane_g2

0x71d2,	// (0x0000765d) volume_small2_pane_g3

0x71db,	// (0x00007666) volume_small2_pane_g4

0x71e4,	// (0x0000766f) volume_small2_pane_g5

0x71ed,	// (0x00007678) volume_small2_pane_g6

0x71f6,	// (0x00007681) volume_small2_pane_g7

0x71ff,	// (0x0000768a) volume_small2_pane_g8

0x7208,	// (0x00007693) volume_small2_pane_g9

0x7211,	// (0x0000769c) volume_small2_pane_g10

0x0009,

0xfc24,	// (0x000100af) volume_small2_pane_g

0x6703,	// (0x00006b8e) fep_vkb_top_text_pane_g1_ParamLimits

0xd68d,	// (0x0000db18) fep_vkb_top_text_pane_t1_ParamLimits

0x6a4a,	// (0x00006ed5) popup_preview_fixed_window_g3_ParamLimits

0x6a4a,	// (0x00006ed5) popup_preview_fixed_window_g3

0xc65e,	// (0x0000cae9) popup_toolbar_trans_pane

0xcfa9,	// (0x0000d434) aid_height_set_list_ParamLimits

0x4b01,	// (0x00004f8c) aid_size_parent_ParamLimits

0x2710,	// (0x00002b9b) list_highlight_pane_cp2_ParamLimits

0x4c4b,	// (0x000050d6) set_content_pane_g1_ParamLimits

0xd19e,	// (0x0000d629) list_single_image_pane_ParamLimits

0xd19e,	// (0x0000d629) list_single_image_pane

0xd807,	// (0x0000dc92) aid_size_cell_image_ParamLimits

0xd807,	// (0x0000dc92) aid_size_cell_image

0xd814,	// (0x0000dc9f) grid_single_image_pane_ParamLimits

0xd814,	// (0x0000dc9f) grid_single_image_pane

0x0f76,	// (0x00001401) list_single_image_pane_g1_ParamLimits

0x0f76,	// (0x00001401) list_single_image_pane_g1

0x0f82,	// (0x0000140d) list_single_image_pane_g2_ParamLimits

0x0f82,	// (0x0000140d) list_single_image_pane_g2

0x0001,

0xfc39,	// (0x000100c4) list_single_image_pane_g_ParamLimits

0xfc39,	// (0x000100c4) list_single_image_pane_g

0x7235,	// (0x000076c0) list_single_image_pane_t1_ParamLimits

0x7235,	// (0x000076c0) list_single_image_pane_t1

0xd822,	// (0x0000dcad) cell_image_list_pane_ParamLimits

0xd822,	// (0x0000dcad) cell_image_list_pane

0xd83c,	// (0x0000dcc7) cell_image_list_pane_g1

0xd845,	// (0x0000dcd0) cell_image_list_pane_g2

0x0001,

0xfc3e,	// (0x000100c9) cell_image_list_pane_g

0x7273,	// (0x000076fe) aid_size_cell_tb_trans_pane

0x0f50,	// (0x000013db) bg_tb_trans_pane

0x7285,	// (0x00007710) grid_tb_trans_pane

0x32fa,	// (0x00003785) bg_tb_trans_pane_g1

0x3302,	// (0x0000378d) bg_tb_trans_pane_g2

0x330a,	// (0x00003795) bg_tb_trans_pane_g3

0x3312,	// (0x0000379d) bg_tb_trans_pane_g4

0x331a,	// (0x000037a5) bg_tb_trans_pane_g5

0x3332,	// (0x000037bd) bg_tb_trans_pane_g6

0x333a,	// (0x000037c5) bg_tb_trans_pane_g7

0x3322,	// (0x000037ad) bg_tb_trans_pane_g8

0x332a,	// (0x000037b5) bg_tb_trans_pane_g9

0x0008,

0xfc43,	// (0x000100ce) bg_tb_trans_pane_g

0x7299,	// (0x00007724) cell_toolbar_trans_pane_ParamLimits

0x7299,	// (0x00007724) cell_toolbar_trans_pane

0x60fb,	// (0x00006586) cell_toolbar_trans_pane_g1

0xd3d0,	// (0x0000d85b) list_form2_midp_pane_t1

0xd3de,	// (0x0000d869) list_form2_midp_pane_t2

0x0001,

0xfaec,	// (0x0000ff77) list_form2_midp_pane_t

0x5ce2,	// (0x0000616d) scroll_pane_cp51_ParamLimits

0x5eff,	// (0x0000638a) form2_midp_wait_pane_g1

0x5f08,	// (0x00006393) form2_midp_wait_pane_g2

0x5f11,	// (0x0000639c) form2_midp_wait_pane_g3

0x0002,

0xfb01,	// (0x0000ff8c) form2_midp_wait_pane_g

0x0084,	// (0x0000050f) list_highlight_pane_cp21_ParamLimits

0x5f55,	// (0x000063e0) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x5f64,	// (0x000063ef) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x4d2e,	// (0x000051b9) list_single_2graphic_im_pane_ParamLimits

0x4d2e,	// (0x000051b9) list_single_2graphic_im_pane

0xd84e,	// (0x0000dcd9) list_single_2graphic_im_pane_g1_ParamLimits

0xd84e,	// (0x0000dcd9) list_single_2graphic_im_pane_g1

0xd85f,	// (0x0000dcea) list_single_2graphic_im_pane_g2_ParamLimits

0xd85f,	// (0x0000dcea) list_single_2graphic_im_pane_g2

0xd86b,	// (0x0000dcf6) list_single_2graphic_im_pane_g3_ParamLimits

0xd86b,	// (0x0000dcf6) list_single_2graphic_im_pane_g3

0x0003,

0xfc56,	// (0x000100e1) list_single_2graphic_im_pane_g_ParamLimits

0xfc56,	// (0x000100e1) list_single_2graphic_im_pane_g

0xd87f,	// (0x0000dd0a) list_single_2graphic_im_pane_t1_ParamLimits

0xd87f,	// (0x0000dd0a) list_single_2graphic_im_pane_t1

0x6a56,	// (0x00006ee1) list_single_graphic_2heading_pane_fp_ParamLimits

0x6a56,	// (0x00006ee1) list_single_graphic_2heading_pane_fp

0x6abe,	// (0x00006f49) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x6abe,	// (0x00006f49) list_single_graphic_2heading_pane_fp_g1

0x6a6f,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x6a6f,	// (0x00006efa) list_single_graphic_2heading_pane_fp_g2

0x6a7b,	// (0x00006f06) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x6a7b,	// (0x00006f06) list_single_graphic_2heading_pane_fp_g3

0x6a87,	// (0x00006f12) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x6a87,	// (0x00006f12) list_single_graphic_2heading_pane_fp_g4

0x6a9b,	// (0x00006f26) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x6a9b,	// (0x00006f26) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb84,	// (0x0001000f) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb84,	// (0x0001000f) list_single_graphic_2heading_pane_fp_g

0x732d,	// (0x000077b8) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x732d,	// (0x000077b8) list_single_graphic_2heading_pane_fp_t1

0x6af6,	// (0x00006f81) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x6af6,	// (0x00006f81) list_single_graphic_2heading_pane_fp_t2

0x7343,	// (0x000077ce) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x7343,	// (0x000077ce) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc5f,	// (0x000100ea) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc5f,	// (0x000100ea) list_single_graphic_2heading_pane_fp_t

0x633f,	// (0x000067ca) fep_hwr_write_pane_g5_ParamLimits

0x633f,	// (0x000067ca) fep_hwr_write_pane_g5

0x634b,	// (0x000067d6) fep_hwr_write_pane_g6_ParamLimits

0x634b,	// (0x000067d6) fep_hwr_write_pane_g6

0x6f92,	// (0x0000741d) eswt_shell_pane_ParamLimits

0x348d,	// (0x00003918) bg_popup_window_pane_cp18_ParamLimits

0x49a7,	// (0x00004e32) heading_pane_cp70

0x70bc,	// (0x00007547) popup_eswt_tasktip_window_t1_ParamLimits

0xc721,	// (0x0000cbac) aid_touch_tab_arrow_left

0xc737,	// (0x0000cbc2) aid_touch_tab_arrow_right

0xb127,	// (0x0000b5b2) title_pane_g3_ParamLimits

0xb127,	// (0x0000b5b2) title_pane_g3

0x0e1f,	// (0x000012aa) set_value_pane_g1

0xc65e,	// (0x0000cae9) popup_toolbar_trans_pane_ParamLimits

0x7273,	// (0x000076fe) aid_size_cell_tb_trans_pane_ParamLimits

0x0f50,	// (0x000013db) bg_tb_trans_pane_ParamLimits

0x7285,	// (0x00007710) grid_tb_trans_pane_ParamLimits

0x03b8,	// (0x00000843) cont_note_pane_ParamLimits

0x03b8,	// (0x00000843) cont_note_pane

0x0726,	// (0x00000bb1) cont_snote2_single_text_pane_ParamLimits

0x0726,	// (0x00000bb1) cont_snote2_single_text_pane

0x0726,	// (0x00000bb1) cont_snote2_single_graphic_pane_ParamLimits

0x0726,	// (0x00000bb1) cont_snote2_single_graphic_pane

0x3afe,	// (0x00003f89) cont_note_wait_pane_ParamLimits

0x3afe,	// (0x00003f89) cont_note_wait_pane

0x3afe,	// (0x00003f89) cont_note_image_pane_ParamLimits

0x3afe,	// (0x00003f89) cont_note_image_pane

0x7359,	// (0x000077e4) popup_note2_window_g1_ParamLimits

0x7359,	// (0x000077e4) popup_note2_window_g1

0x738a,	// (0x00007815) popup_note2_window_t1_ParamLimits

0x738a,	// (0x00007815) popup_note2_window_t1

0x73cf,	// (0x0000785a) popup_note2_window_t2_ParamLimits

0x73cf,	// (0x0000785a) popup_note2_window_t2

0x7414,	// (0x0000789f) popup_note2_window_t3_ParamLimits

0x7414,	// (0x0000789f) popup_note2_window_t3

0x7459,	// (0x000078e4) popup_note2_window_t4_ParamLimits

0x7459,	// (0x000078e4) popup_note2_window_t4

0x043c,	// (0x000008c7) popup_note2_window_t5_ParamLimits

0x043c,	// (0x000008c7) popup_note2_window_t5

0x0004,

0xfc6b,	// (0x000100f6) popup_note2_window_t_ParamLimits

0xfc6b,	// (0x000100f6) popup_note2_window_t

0x7488,	// (0x00007913) popup_note2_image_window_g1_ParamLimits

0x7488,	// (0x00007913) popup_note2_image_window_g1

0x7494,	// (0x0000791f) popup_note2_image_window_g2_ParamLimits

0x7494,	// (0x0000791f) popup_note2_image_window_g2

0x0001,

0xfc76,	// (0x00010101) popup_note2_image_window_g_ParamLimits

0xfc76,	// (0x00010101) popup_note2_image_window_g

0x74a6,	// (0x00007931) popup_note2_image_window_t1_ParamLimits

0x74a6,	// (0x00007931) popup_note2_image_window_t1

0x74be,	// (0x00007949) popup_note2_image_window_t2_ParamLimits

0x74be,	// (0x00007949) popup_note2_image_window_t2

0x74d6,	// (0x00007961) popup_note2_image_window_t3_ParamLimits

0x74d6,	// (0x00007961) popup_note2_image_window_t3

0x0002,

0xfc7b,	// (0x00010106) popup_note2_image_window_t_ParamLimits

0xfc7b,	// (0x00010106) popup_note2_image_window_t

0x3b0c,	// (0x00003f97) popup_note2_wait_window_g1_ParamLimits

0x3b0c,	// (0x00003f97) popup_note2_wait_window_g1

0x74f2,	// (0x0000797d) popup_note2_wait_window_g2_ParamLimits

0x74f2,	// (0x0000797d) popup_note2_wait_window_g2

0x3b24,	// (0x00003faf) popup_note2_wait_window_g3_ParamLimits

0x3b24,	// (0x00003faf) popup_note2_wait_window_g3

0x0002,

0xfc82,	// (0x0001010d) popup_note2_wait_window_g_ParamLimits

0xfc82,	// (0x0001010d) popup_note2_wait_window_g

0x74fe,	// (0x00007989) popup_note2_wait_window_t1_ParamLimits

0x74fe,	// (0x00007989) popup_note2_wait_window_t1

0x751c,	// (0x000079a7) popup_note2_wait_window_t2_ParamLimits

0x751c,	// (0x000079a7) popup_note2_wait_window_t2

0x753a,	// (0x000079c5) popup_note2_wait_window_t3_ParamLimits

0x753a,	// (0x000079c5) popup_note2_wait_window_t3

0x754c,	// (0x000079d7) popup_note2_wait_window_t4_ParamLimits

0x754c,	// (0x000079d7) popup_note2_wait_window_t4

0x0003,

0xfc89,	// (0x00010114) popup_note2_wait_window_t_ParamLimits

0xfc89,	// (0x00010114) popup_note2_wait_window_t

0x755e,	// (0x000079e9) wait_bar2_pane_ParamLimits

0x755e,	// (0x000079e9) wait_bar2_pane

0x7576,	// (0x00007a01) popup_snote2_single_text_window_g1_ParamLimits

0x7576,	// (0x00007a01) popup_snote2_single_text_window_g1

0x759e,	// (0x00007a29) popup_snote2_single_text_window_t1_ParamLimits

0x759e,	// (0x00007a29) popup_snote2_single_text_window_t1

0x75ea,	// (0x00007a75) popup_snote2_single_text_window_t2_ParamLimits

0x75ea,	// (0x00007a75) popup_snote2_single_text_window_t2

0x7636,	// (0x00007ac1) popup_snote2_single_text_window_t3_ParamLimits

0x7636,	// (0x00007ac1) popup_snote2_single_text_window_t3

0x7677,	// (0x00007b02) popup_snote2_single_text_window_t4_ParamLimits

0x7677,	// (0x00007b02) popup_snote2_single_text_window_t4

0x76ad,	// (0x00007b38) popup_snote2_single_text_window_t5_ParamLimits

0x76ad,	// (0x00007b38) popup_snote2_single_text_window_t5

0x0004,

0xfc92,	// (0x0001011d) popup_snote2_single_text_window_t_ParamLimits

0xfc92,	// (0x0001011d) popup_snote2_single_text_window_t

0x76d8,	// (0x00007b63) popup_snote2_single_graphic_window_g1_ParamLimits

0x76d8,	// (0x00007b63) popup_snote2_single_graphic_window_g1

0x7700,	// (0x00007b8b) popup_snote2_single_graphic_window_g2_ParamLimits

0x7700,	// (0x00007b8b) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9d,	// (0x00010128) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9d,	// (0x00010128) popup_snote2_single_graphic_window_g

0x7728,	// (0x00007bb3) popup_snote2_single_graphic_window_t1_ParamLimits

0x7728,	// (0x00007bb3) popup_snote2_single_graphic_window_t1

0x7774,	// (0x00007bff) popup_snote2_single_graphic_window_t2_ParamLimits

0x7774,	// (0x00007bff) popup_snote2_single_graphic_window_t2

0x7636,	// (0x00007ac1) popup_snote2_single_graphic_window_t3_ParamLimits

0x7636,	// (0x00007ac1) popup_snote2_single_graphic_window_t3

0x7677,	// (0x00007b02) popup_snote2_single_graphic_window_t4_ParamLimits

0x7677,	// (0x00007b02) popup_snote2_single_graphic_window_t4

0x76ad,	// (0x00007b38) popup_snote2_single_graphic_window_t5_ParamLimits

0x76ad,	// (0x00007b38) popup_snote2_single_graphic_window_t5

0x0004,

0xfca2,	// (0x0001012d) popup_snote2_single_graphic_window_t_ParamLimits

0xfca2,	// (0x0001012d) popup_snote2_single_graphic_window_t

0x5b3b,	// (0x00005fc6) clock_nsta_pane_cp2_t1

0x5b3b,	// (0x00005fc6) clock_nsta_pane_cp2_t2

0x0001,

0xfac2,	// (0x0000ff4d) clock_nsta_pane_cp2_t

0x0f6a,	// (0x000013f5) form_field_data_wide_pane_g1_ParamLimits

0x0f76,	// (0x00001401) form_field_data_wide_pane_g2_ParamLimits

0x0f76,	// (0x00001401) form_field_data_wide_pane_g2

0x0f82,	// (0x0000140d) form_field_data_wide_pane_g3_ParamLimits

0x0f82,	// (0x0000140d) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x0000fb1d) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x0000fb1d) form_field_data_wide_pane_g

0xd2d8,	// (0x0000d763) grid_touch_3_pane_ParamLimits

0xd2d8,	// (0x0000d763) grid_touch_3_pane

0xd8b0,	// (0x0000dd3b) cell_touch_3_pane_ParamLimits

0xd8b0,	// (0x0000dd3b) cell_touch_3_pane

0x60fb,	// (0x00006586) cell_touch_3_pane_g1

0x60fb,	// (0x00006586) cell_touch_3_pane_g2

0x0001,

0xfb47,	// (0x0000ffd2) cell_touch_3_pane_g

0x046e,	// (0x000008f9) cont_query_data_pane

0x0476,	// (0x00000901) cont_query_data_pane_cp1

0x77f3,	// (0x00007c7e) button_value_adjust_pane_cp7

0x77fb,	// (0x00007c86) query_popup_pane_cp3

0x1a30,	// (0x00001ebb) bg_popup_sub_pane_cp22_ParamLimits

0x1a46,	// (0x00001ed1) navi_navi_volume_pane_cp2

0x1a61,	// (0x00001eec) popup_side_volume_key_window_g2

0x1a70,	// (0x00001efb) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x0000fbaf) popup_side_volume_key_window_g

0x1a8d,	// (0x00001f18) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0000fbb6) popup_side_volume_key_window_t

0x1f1a,	// (0x000023a5) popup_side_volume_key_window_ParamLimits

0xb609,	// (0x0000ba94) list_double_graphic_pane_g4_ParamLimits

0xb609,	// (0x0000ba94) list_double_graphic_pane_g4

0xd175,	// (0x0000d600) list_single_2heading_msg_pane_ParamLimits

0xd175,	// (0x0000d600) list_single_2heading_msg_pane

0xd8fa,	// (0x0000dd85) list_single_2heading_msg_pane_g1_ParamLimits

0xd8fa,	// (0x0000dd85) list_single_2heading_msg_pane_g1

0xd906,	// (0x0000dd91) list_single_2heading_msg_pane_g2_ParamLimits

0xd906,	// (0x0000dd91) list_single_2heading_msg_pane_g2

0xd919,	// (0x0000dda4) list_single_2heading_msg_pane_g3_ParamLimits

0xd919,	// (0x0000dda4) list_single_2heading_msg_pane_g3

0xd925,	// (0x0000ddb0) list_single_2heading_msg_pane_g4_ParamLimits

0xd925,	// (0x0000ddb0) list_single_2heading_msg_pane_g4

0x0003,

0xfcad,	// (0x00010138) list_single_2heading_msg_pane_g_ParamLimits

0xfcad,	// (0x00010138) list_single_2heading_msg_pane_g

0xd93d,	// (0x0000ddc8) list_single_2heading_msg_pane_t1_ParamLimits

0xd93d,	// (0x0000ddc8) list_single_2heading_msg_pane_t1

0xd965,	// (0x0000ddf0) list_single_2heading_msg_pane_t2_ParamLimits

0xd965,	// (0x0000ddf0) list_single_2heading_msg_pane_t2

0xd9d0,	// (0x0000de5b) list_single_2heading_msg_pane_t3_ParamLimits

0xd9d0,	// (0x0000de5b) list_single_2heading_msg_pane_t3

0x78ec,	// (0x00007d77) list_single_2heading_msg_pane_t4_ParamLimits

0x78ec,	// (0x00007d77) list_single_2heading_msg_pane_t4

0x0003,

0xfcb6,	// (0x00010141) list_single_2heading_msg_pane_t_ParamLimits

0xfcb6,	// (0x00010141) list_single_2heading_msg_pane_t

0xf55e,	// (0x0000f9e9) title_pane_g4_ParamLimits

0xf55e,	// (0x0000f9e9) title_pane_g4

0x148d,	// (0x00001918) title_pane_stacon_g3_ParamLimits

0x148d,	// (0x00001918) title_pane_stacon_g3

0x72f0,	// (0x0000777b) list_single_2graphic_im_pane_g4_ParamLimits

0x72f0,	// (0x0000777b) list_single_2graphic_im_pane_g4

0x46e0,	// (0x00004b6b) popup_side_volume_key_window_cp

0x5173,	// (0x000055fe) main_idle_act2_pane_t1

0x3342,	// (0x000037cd) toolbar_button_pane_g10

0xb4b4,	// (0x0000b93f) popup_toolbar_window_cp1

0x5b2c,	// (0x00005fb7) clock_nsta_pane_cp_t1

0x5b2c,	// (0x00005fb7) clock_nsta_pane_cp_t2

0x0001,

0xfabd,	// (0x0000ff48) clock_nsta_pane_cp_t

0x1a46,	// (0x00001ed1) navi_navi_volume_pane_cp2_ParamLimits

0x1a55,	// (0x00001ee0) popup_side_volume_key_window_g1_ParamLimits

0x1a61,	// (0x00001eec) popup_side_volume_key_window_g2_ParamLimits

0x1a70,	// (0x00001efb) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x0000fbaf) popup_side_volume_key_window_g_ParamLimits

0x6179,	// (0x00006604) fep_hwr_aid_pane

0x6222,	// (0x000066ad) bg_fep_hwr_top_pane_g4_ParamLimits

0x6242,	// (0x000066cd) fep_hwr_top_pane_g1_ParamLimits

0x6254,	// (0x000066df) fep_hwr_top_pane_g2_ParamLimits

0x6266,	// (0x000066f1) fep_hwr_top_pane_g3_ParamLimits

0xfb12,	// (0x0000ff9d) fep_hwr_top_pane_g_ParamLimits

0x627b,	// (0x00006706) fep_hwr_top_text_pane_ParamLimits

0x4495,	// (0x00004920) aid_touch_tab_arrow_arrow_2

0x449e,	// (0x00004929) aid_touch_tab_arrow_left_2

0x618d,	// (0x00006618) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x61c4,	// (0x0000664f) fep_hwr_prediction_pane

0x64fd,	// (0x00006988) fep_vkb_prediction_pane

0xd66d,	// (0x0000daf8) fep_vkb_side_pane_g3_ParamLimits

0xd66d,	// (0x0000daf8) fep_vkb_side_pane_g3

0x65af,	// (0x00006a3a) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x6cb8,	// (0x00007143) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x6cc5,	// (0x00007150) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbc,	// (0x00010047) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7911,	// (0x00007d9c) fep_hwr_prediction_pane_g1

0x791b,	// (0x00007da6) fep_hwr_prediction_pane_g2

0x7923,	// (0x00007dae) fep_hwr_prediction_pane_g3

0x792b,	// (0x00007db6) fep_hwr_prediction_pane_g4

0x0003,

0xfcbf,	// (0x0001014a) fep_hwr_prediction_pane_g

0x7911,	// (0x00007d9c) fep_vkb_prediction_pane_g1

0x7933,	// (0x00007dbe) fep_vkb_prediction_pane_g2

0x793b,	// (0x00007dc6) fep_vkb_prediction_pane_g3

0x7943,	// (0x00007dce) fep_vkb_prediction_pane_g4

0x0003,

0xfcc8,	// (0x00010153) fep_vkb_prediction_pane_g

0x4a68,	// (0x00004ef3) slider_set_pane_g3

0x4a7c,	// (0x00004f07) slider_set_pane_g4

0x4a94,	// (0x00004f1f) slider_set_pane_g5

0x4a68,	// (0x00004ef3) slider_set_pane_g6

0x4aaa,	// (0x00004f35) slider_set_pane_g7

0x4c92,	// (0x0000511d) slider_form_pane_g3

0x4c9b,	// (0x00005126) slider_form_pane_g4

0x4ca3,	// (0x0000512e) slider_form_pane_g5

0x4c92,	// (0x0000511d) slider_form_pane_g6

0xd118,	// (0x0000d5a3) slider_form_pane_g7

0x547e,	// (0x00005909) slider_set_pane_vc_g3

0x5487,	// (0x00005912) slider_set_pane_vc_g4

0x5490,	// (0x0000591b) slider_set_pane_vc_g5

0x547e,	// (0x00005909) slider_set_pane_vc_g6

0x5499,	// (0x00005924) slider_set_pane_vc_g7

0x547e,	// (0x00005909) slider_form_pane_vc_g1

0x5487,	// (0x00005912) slider_form_pane_vc_g2

0x5490,	// (0x0000591b) slider_form_pane_vc_g3

0x547e,	// (0x00005909) slider_form_pane_vc_g4

0x5820,	// (0x00005cab) slider_form_pane_vc_g5

0x0004,

0xfa96,	// (0x0000ff21) slider_form_pane_vc_g

0xf310,	// (0x0000f79b) main_idle_act3_pane

0x794b,	// (0x00007dd6) ai3_links_pane

0xda3e,	// (0x0000dec9) popup_ai3_data_window_ParamLimits

0xda3e,	// (0x0000dec9) popup_ai3_data_window

0xf310,	// (0x0000f79b) grid_ai3_links_pane

0xda5c,	// (0x0000dee7) cell_ai3_links_pane_ParamLimits

0xda5c,	// (0x0000dee7) cell_ai3_links_pane

0x798c,	// (0x00007e17) bg_popup_sub_pane_cp11

0x7999,	// (0x00007e24) cell_ai3_links_pane_g1

0xf310,	// (0x0000f79b) bg_popup_sub_pane_cp12

0x79be,	// (0x00007e49) heading_ai3_data_pane

0x79c6,	// (0x00007e51) list_ai3_gene_pane

0x79d2,	// (0x00007e5d) popup_ai3_data_window_g1

0x79da,	// (0x00007e65) heading_ai3_data_pane_g1

0x79e2,	// (0x00007e6d) heading_ai3_data_pane_t1

0x79f0,	// (0x00007e7b) list_double_ai3_gene_pane_ParamLimits

0x79f0,	// (0x00007e7b) list_double_ai3_gene_pane

0x79fd,	// (0x00007e88) list_single_ai3_gene_pane_ParamLimits

0x79fd,	// (0x00007e88) list_single_ai3_gene_pane

0x60c0,	// (0x0000654b) list_highlight_pane_cp7_ParamLimits

0x60c0,	// (0x0000654b) list_highlight_pane_cp7

0x7a0a,	// (0x00007e95) list_single_a13_gene_pane_t1_ParamLimits

0x7a0a,	// (0x00007e95) list_single_a13_gene_pane_t1

0x7a21,	// (0x00007eac) list_single_ai3_gene_pane_g1

0x7a2a,	// (0x00007eb5) list_single_ai3_gene_pane_g2

0x0001,

0xfcd1,	// (0x0001015c) list_single_ai3_gene_pane_g

0x7a32,	// (0x00007ebd) list_double_ai3_gene_pane_g1_ParamLimits

0x7a32,	// (0x00007ebd) list_double_ai3_gene_pane_g1

0x7a3e,	// (0x00007ec9) list_double_ai3_gene_pane_t1_ParamLimits

0x7a3e,	// (0x00007ec9) list_double_ai3_gene_pane_t1

0x7a5a,	// (0x00007ee5) list_double_ai3_gene_pane_t2_ParamLimits

0x7a5a,	// (0x00007ee5) list_double_ai3_gene_pane_t2

0x7a6f,	// (0x00007efa) list_double_ai3_gene_pane_t3_ParamLimits

0x7a6f,	// (0x00007efa) list_double_ai3_gene_pane_t3

0x0002,

0xfcd6,	// (0x00010161) list_double_ai3_gene_pane_t_ParamLimits

0xfcd6,	// (0x00010161) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x780c,	// (0x00007c97) aid_size_min_col_2

0xd8e4,	// (0x0000dd6f) aid_size_min_msg_ParamLimits

0xd8e4,	// (0x0000dd6f) aid_size_min_msg

0xd681,	// (0x0000db0c) fep_vkb_top_text_pane_g2_ParamLimits

0xd681,	// (0x0000db0c) fep_vkb_top_text_pane_g2

0x0001,

0xfb42,	// (0x0000ffcd) fep_vkb_top_text_pane_g_ParamLimits

0xfb42,	// (0x0000ffcd) fep_vkb_top_text_pane_g

0xf310,	// (0x0000f79b) main_hc_apps_shell_pane

0x7a8c,	// (0x00007f17) grid_hc_apps_pane_ParamLimits

0x7a8c,	// (0x00007f17) grid_hc_apps_pane

0x7a9b,	// (0x00007f26) list_hc_apps_pane

0x7aa3,	// (0x00007f2e) scroll_pane_cp37_ParamLimits

0x7aa3,	// (0x00007f2e) scroll_pane_cp37

0xda76,	// (0x0000df01) cell_hc_apps_pane_ParamLimits

0xda76,	// (0x0000df01) cell_hc_apps_pane

0xdb40,	// (0x0000dfcb) cell_hc_apps_pane_g1_ParamLimits

0xdb40,	// (0x0000dfcb) cell_hc_apps_pane_g1

0x7b98,	// (0x00008023) cell_hc_apps_pane_g2_ParamLimits

0x7b98,	// (0x00008023) cell_hc_apps_pane_g2

0x7bb4,	// (0x0000803f) cell_hc_apps_pane_g3_ParamLimits

0x7bb4,	// (0x0000803f) cell_hc_apps_pane_g3

0x0002,

0xfcdd,	// (0x00010168) cell_hc_apps_pane_g_ParamLimits

0xfcdd,	// (0x00010168) cell_hc_apps_pane_g

0xdb6d,	// (0x0000dff8) cell_hc_apps_pane_t1_ParamLimits

0xdb6d,	// (0x0000dff8) cell_hc_apps_pane_t1

0x03b8,	// (0x00000843) grid_highlight_pane_cp10_ParamLimits

0x03b8,	// (0x00000843) grid_highlight_pane_cp10

0xdbad,	// (0x0000e038) list_single_hc_apps_pane_ParamLimits

0xdbad,	// (0x0000e038) list_single_hc_apps_pane

0xdbe7,	// (0x0000e072) list_single_hc_apps_pane_g1

0xdc00,	// (0x0000e08b) list_single_hc_apps_pane_g2

0x0001,

0xfce4,	// (0x0001016f) list_single_hc_apps_pane_g

0xdc19,	// (0x0000e0a4) list_single_hc_apps_pane_g2_copy1

0xdc35,	// (0x0000e0c0) list_single_hc_apps_pane_t1

0x0084,	// (0x0000050f) bg_set_opt_pane_cp_ParamLimits

0x00d0,	// (0x0000055b) setting_slider_pane_t1_ParamLimits

0x00e6,	// (0x00000571) setting_slider_pane_t2_ParamLimits

0x0100,	// (0x0000058b) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0000fa05) setting_slider_pane_t_ParamLimits

0x0118,	// (0x000005a3) slider_set_pane_ParamLimits

0x2569,	// (0x000029f4) control_pane_g5_ParamLimits

0x2569,	// (0x000029f4) control_pane_g5

0x4a4f,	// (0x00004eda) slider_set_pane_g1_ParamLimits

0x4a5c,	// (0x00004ee7) slider_set_pane_g2_ParamLimits

0x4a68,	// (0x00004ef3) slider_set_pane_g3_ParamLimits

0x4a7c,	// (0x00004f07) slider_set_pane_g4_ParamLimits

0x4a94,	// (0x00004f1f) slider_set_pane_g5_ParamLimits

0x4a68,	// (0x00004ef3) slider_set_pane_g6_ParamLimits

0x4aaa,	// (0x00004f35) slider_set_pane_g7_ParamLimits

0xf964,	// (0x0000fdef) slider_set_pane_g_ParamLimits

0x1fff,	// (0x0000248a) navi_icon_text_pane_ParamLimits

0xc6eb,	// (0x0000cb76) aid_fill_nsta_2_ParamLimits

0xc721,	// (0x0000cbac) aid_touch_tab_arrow_left_ParamLimits

0xc737,	// (0x0000cbc2) aid_touch_tab_arrow_right_ParamLimits

0xc7d2,	// (0x0000cc5d) clock_nsta_pane_ParamLimits

0xce55,	// (0x0000d2e0) navi_icon_pane_g1_ParamLimits

0xce61,	// (0x0000d2ec) navi_text_pane_t1_ParamLimits

0xd3b2,	// (0x0000d83d) navi_icon_text_pane_g1_ParamLimits

0xd3be,	// (0x0000d849) navi_icon_text_pane_t1_ParamLimits

0xdbe7,	// (0x0000e072) list_single_hc_apps_pane_g1_ParamLimits

0xdc00,	// (0x0000e08b) list_single_hc_apps_pane_g2_ParamLimits

0xfce4,	// (0x0001016f) list_single_hc_apps_pane_g_ParamLimits

0xdc19,	// (0x0000e0a4) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xdc35,	// (0x0000e0c0) list_single_hc_apps_pane_t1_ParamLimits

0xb093,	// (0x0000b51e) popup_toolbar2_fixed_window_ParamLimits

0xb093,	// (0x0000b51e) popup_toolbar2_fixed_window

0xc654,	// (0x0000cadf) popup_toolbar2_float_window

0xf310,	// (0x0000f79b) bg_popup_sub_pane_cp27

0x7cd1,	// (0x0000815c) grid_toolbar2_float_pane

0xf310,	// (0x0000f79b) bg_popup_sub_pane_cp26

0x7cd1,	// (0x0000815c) grid_toolbar2_fixed_pane

0xdc63,	// (0x0000e0ee) cell_toolbar2_fixed_pane_ParamLimits

0xdc63,	// (0x0000e0ee) cell_toolbar2_fixed_pane

0xdc80,	// (0x0000e10b) cell_toolbar2_fixed_pane_g1

0x7cf2,	// (0x0000817d) toolbar2_fixed_button_pane

0x32fa,	// (0x00003785) toolbar2_fixed_button_pane_g1

0x3302,	// (0x0000378d) toolbar2_fixed_button_pane_g2

0x330a,	// (0x00003795) toolbar2_fixed_button_pane_g3

0x3312,	// (0x0000379d) toolbar2_fixed_button_pane_g4

0x331a,	// (0x000037a5) toolbar2_fixed_button_pane_g5

0x3322,	// (0x000037ad) toolbar2_fixed_button_pane_g6

0x332a,	// (0x000037b5) toolbar2_fixed_button_pane_g7

0x3332,	// (0x000037bd) toolbar2_fixed_button_pane_g8

0x333a,	// (0x000037c5) toolbar2_fixed_button_pane_g9

0x0008,

0xf866,	// (0x0000fcf1) toolbar2_fixed_button_pane_g

0x7cfa,	// (0x00008185) cell_toolbar2_float_pane_ParamLimits

0x7cfa,	// (0x00008185) cell_toolbar2_float_pane

0x7d0b,	// (0x00008196) cell_toolbar2_float_pane_g1

0x7cf2,	// (0x0000817d) toolbar2_fixed_button_pane_cp

0xd569,	// (0x0000d9f4) fep_vkb_accented_list_pane_ParamLimits

0xd569,	// (0x0000d9f4) fep_vkb_accented_list_pane

0x6920,	// (0x00006dab) bg_popup_fep_shadow_pane_g9

0x2183,	// (0x0000260e) bg_popup_fep_shadow_pane_cp3

0x121b,	// (0x000016a6) list_accented_list_pane

0x7d14,	// (0x0000819f) list_single_accented_list_pane_ParamLimits

0x7d14,	// (0x0000819f) list_single_accented_list_pane

0x2183,	// (0x0000260e) list_highlight_pane_cp10

0x7d25,	// (0x000081b0) list_single_accented_list_pane_t1

0xc570,	// (0x0000c9fb) popup_slider_window_ParamLimits

0xc570,	// (0x0000c9fb) popup_slider_window

0x7803,	// (0x00007c8e) aid_indentation_list_msg

0xdd8b,	// (0x0000e216) bg_popup_window_pane_cp19

0x7e5f,	// (0x000082ea) popup_slider_window_g1

0x7e7b,	// (0x00008306) popup_slider_window_g2

0x7e97,	// (0x00008322) popup_slider_window_g3

0x0005,

0xfce9,	// (0x00010174) popup_slider_window_g

0x7ef3,	// (0x0000837e) popup_slider_window_t1

0x7f67,	// (0x000083f2) small_volume_slider_vertical_pane

0x60fb,	// (0x00006586) small_volume_slider_vertical_pane_g1

0x60fb,	// (0x00006586) small_volume_slider_vertical_pane_g2

0x7f83,	// (0x0000840e) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfb,	// (0x00010186) small_volume_slider_vertical_pane_g

0xaffd,	// (0x0000b488) area_side_right_pane_ParamLimits

0xaffd,	// (0x0000b488) area_side_right_pane

0xde43,	// (0x0000e2ce) aid_size_side_button_ParamLimits

0xde43,	// (0x0000e2ce) aid_size_side_button

0xde5c,	// (0x0000e2e7) grid_sctrl_middle_pane_ParamLimits

0xde5c,	// (0x0000e2e7) grid_sctrl_middle_pane

0x7fc0,	// (0x0000844b) sctrl_sk_bottom_pane

0x7fd1,	// (0x0000845c) sctrl_sk_top_pane

0x7fe3,	// (0x0000846e) aid_touch_sctrl_top

0x03b8,	// (0x00000843) bg_sctrl_sk_pane_ParamLimits

0x03b8,	// (0x00000843) bg_sctrl_sk_pane

0x7ff0,	// (0x0000847b) sctrl_sk_top_pane_g1

0x7ffd,	// (0x00008488) sctrl_sk_top_pane_t1

0x7fe3,	// (0x0000846e) aid_touch_sctrl_bottom

0x03b8,	// (0x00000843) bg_sctrl_sk_pane_cp_ParamLimits

0x03b8,	// (0x00000843) bg_sctrl_sk_pane_cp

0x8018,	// (0x000084a3) sctrl_sk_bottom_pane_g1

0x7ffd,	// (0x00008488) sctrl_sk_bottom_pane_t1

0xde76,	// (0x0000e301) cell_sctrl_middle_pane_ParamLimits

0xde76,	// (0x0000e301) cell_sctrl_middle_pane

0xde89,	// (0x0000e314) aid_touch_sctrl_middle_ParamLimits

0xde89,	// (0x0000e314) aid_touch_sctrl_middle

0xde96,	// (0x0000e321) bg_sctrl_middle_pane_ParamLimits

0xde96,	// (0x0000e321) bg_sctrl_middle_pane

0x80e6,	// (0x00008571) cell_sctrl_middle_pane_g1_ParamLimits

0x80e6,	// (0x00008571) cell_sctrl_middle_pane_g1

0xdea4,	// (0x0000e32f) cell_sctrl_middle_pane_g2_ParamLimits

0xdea4,	// (0x0000e32f) cell_sctrl_middle_pane_g2

0x0001,

0xfd07,	// (0x00010192) cell_sctrl_middle_pane_g_ParamLimits

0xfd07,	// (0x00010192) cell_sctrl_middle_pane_g

0x32fa,	// (0x00003785) bg_sctrl_middle_pane_g1

0x3302,	// (0x0000378d) bg_sctrl_middle_pane_g2

0x330a,	// (0x00003795) bg_sctrl_middle_pane_g3

0x3312,	// (0x0000379d) bg_sctrl_middle_pane_g4

0x331a,	// (0x000037a5) bg_sctrl_middle_pane_g5

0x3322,	// (0x000037ad) bg_sctrl_middle_pane_g6

0x332a,	// (0x000037b5) bg_sctrl_middle_pane_g7

0x3332,	// (0x000037bd) bg_sctrl_middle_pane_g8

0x0007,

0xfd0c,	// (0x00010197) bg_sctrl_middle_pane_g

0x333a,	// (0x000037c5) bg_sctrl_middle_pane_g8_copy1

0x32fa,	// (0x00003785) bg_sctrl_sk_pane_g1

0x3302,	// (0x0000378d) bg_sctrl_sk_pane_g2

0x330a,	// (0x00003795) bg_sctrl_sk_pane_g3

0x0008,

0xf866,	// (0x0000fcf1) bg_sctrl_sk_pane_g

0x08e4,	// (0x00000d6f) aid_size_touch_scroll_bar

0x3312,	// (0x0000379d) bg_sctrl_sk_pane_g4

0x331a,	// (0x000037a5) bg_sctrl_sk_pane_g5

0x3322,	// (0x000037ad) bg_sctrl_sk_pane_g6

0x332a,	// (0x000037b5) bg_sctrl_sk_pane_g7

0x3332,	// (0x000037bd) bg_sctrl_sk_pane_g8

0x333a,	// (0x000037c5) bg_sctrl_sk_pane_g9

0x27c2,	// (0x00002c4d) popup_fep_china_hwr2_fs_candidate_window

0xc02c,	// (0x0000c4b7) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc02c,	// (0x0000c4b7) popup_fep_china_hwr2_fs_control_window

0x65af,	// (0x00006a3a) sctrl_sk_top_pane_g2

0x0001,

0xfd02,	// (0x0001018d) sctrl_sk_top_pane_g

0xdeb0,	// (0x0000e33b) aid_fep_china_hwr2_fs_cell_ParamLimits

0xdeb0,	// (0x0000e33b) aid_fep_china_hwr2_fs_cell

0xdec6,	// (0x0000e351) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xdec6,	// (0x0000e351) bg_popup_fep_shadow_pane_cp4

0xdedd,	// (0x0000e368) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xdedd,	// (0x0000e368) bg_popup_fep_shadow_pane_cp5

0xdeef,	// (0x0000e37a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xdeef,	// (0x0000e37a) popup_fep_china_hwr2_fs_control_bar_grid

0xdf03,	// (0x0000e38e) popup_fep_china_hwr2_fs_control_funtion_grid

0x80ba,	// (0x00008545) aid_fep_china_hwr2_fs_candi_cell

0xf310,	// (0x0000f79b) bg_popup_fep_shadow_pane_cp6

0x80c4,	// (0x0000854f) popup_fep_china_hwr2_fs_candidate_grid

0xdf0b,	// (0x0000e396) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xdf0b,	// (0x0000e396) cell_fep_china_hwr2_fs_funtion_grid

0x60fb,	// (0x00006586) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x80e6,	// (0x00008571) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x80e6,	// (0x00008571) cell_fep_china_hwr2_fs_funtion_grid_g1

0x80f4,	// (0x0000857f) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x80f4,	// (0x0000857f) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1d,	// (0x000101a8) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1d,	// (0x000101a8) cell_fep_china_hwr2_fs_funtion_grid_g

0xdf23,	// (0x0000e3ae) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xdf23,	// (0x0000e3ae) cell_fep_china_hwr2_fs_funtion_grid_t1

0xdf38,	// (0x0000e3c3) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xdf38,	// (0x0000e3c3) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd22,	// (0x000101ad) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd22,	// (0x000101ad) cell_fep_china_hwr2_fs_funtion_grid_t

0x813b,	// (0x000085c6) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8143,	// (0x000085ce) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x814b,	// (0x000085d6) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd27,	// (0x000101b2) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8153,	// (0x000085de) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8153,	// (0x000085de) cell_fep_china_hwr2_fs_candidate_grid

0x8172,	// (0x000085fd) popup_fep_china_hwr2_fs_candidate_grid_g20

0x817a,	// (0x00008605) popup_fep_china_hwr2_fs_candidate_grid_g21

0x60fb,	// (0x00006586) cell_fep_china_hwr2_fs_candidate_grid_g1

0x60fb,	// (0x00006586) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb47,	// (0x0000ffd2) cell_fep_china_hwr2_fs_candidate_grid_g

0x8182,	// (0x0000860d) cell_fep_china_hwr2_fs_candidate_grid_t1

0x2e31,	// (0x000032bc) clock_nsta_pane_cp_24_ParamLimits

0x2e31,	// (0x000032bc) clock_nsta_pane_cp_24

0x2eb1,	// (0x0000333c) indicator_nsta_pane_cp_24_ParamLimits

0x2eb1,	// (0x0000333c) indicator_nsta_pane_cp_24

0x42dc,	// (0x00004767) heading_pane_g1

0x0001,

0xf8cb,	// (0x0000fd56) heading_pane_g

0x4f02,	// (0x0000538d) grid_sct_catagory_button_pane

0x4f34,	// (0x000053bf) scroll_pane_cp5_ParamLimits

0x5cee,	// (0x00006179) button_value_adjust_pane_cp5_ParamLimits

0x5cee,	// (0x00006179) button_value_adjust_pane_cp5

0x5df4,	// (0x0000627f) form2_midp_time_pane_ParamLimits

0x8190,	// (0x0000861b) cell_sct_catagory_button_pane_ParamLimits

0x8190,	// (0x0000861b) cell_sct_catagory_button_pane

0x60c0,	// (0x0000654b) bg_button_pane_cp01_ParamLimits

0x60c0,	// (0x0000654b) bg_button_pane_cp01

0x60fb,	// (0x00006586) cell_sct_catagory_button_pane_g1

0xc5f1,	// (0x0000ca7c) popup_tb_extension_window

0xdf54,	// (0x0000e3df) aid_size_cell_ext_ParamLimits

0xdf54,	// (0x0000e3df) aid_size_cell_ext

0x0726,	// (0x00000bb1) bg_tb_trans_pane_cp1_ParamLimits

0x0726,	// (0x00000bb1) bg_tb_trans_pane_cp1

0xdf7a,	// (0x0000e405) grid_tb_ext_pane_ParamLimits

0xdf7a,	// (0x0000e405) grid_tb_ext_pane

0xdfba,	// (0x0000e445) cell_tb_ext_pane_ParamLimits

0xdfba,	// (0x0000e445) cell_tb_ext_pane

0xdfe4,	// (0x0000e46f) cell_tb_ext_pane_g1_ParamLimits

0xdfe4,	// (0x0000e46f) cell_tb_ext_pane_g1

0x8226,	// (0x000086b1) cell_tb_ext_pane_t1

0x03b8,	// (0x00000843) list_highlight_pane_cp11_ParamLimits

0x03b8,	// (0x00000843) list_highlight_pane_cp11

0xf4f1,	// (0x0000f97c) popup_uni_indicator_window_ParamLimits

0xf4f1,	// (0x0000f97c) popup_uni_indicator_window

0x0f50,	// (0x000013db) bg_popup_sub_pane_cp14

0x8241,	// (0x000086cc) list_uniindi_pane

0x824d,	// (0x000086d8) uniindi_top_pane

0x03b8,	// (0x00000843) bg_uniindi_top_pane

0x826e,	// (0x000086f9) uniindi_top_pane_g1

0x8284,	// (0x0000870f) uniindi_top_pane_g2

0x0003,

0xfd2e,	// (0x000101b9) uniindi_top_pane_g

0x82ae,	// (0x00008739) uniindi_top_pane_t1

0x82da,	// (0x00008765) list_single_uniindi_pane_ParamLimits

0x82da,	// (0x00008765) list_single_uniindi_pane

0x60fb,	// (0x00006586) bg_uniindi_top_pane_g1

0x82ec,	// (0x00008777) list_single_uniindi_pane_g1

0x82ff,	// (0x0000878a) list_single_uniindi_pane_t1

0xf310,	// (0x0000f79b) control_bg_pane

0x8324,	// (0x000087af) bg_sctrl_sk_pane_cp1

0x832d,	// (0x000087b8) bg_sctrl_sk_pane_cp2

0x8336,	// (0x000087c1) control_bg_pane_g1

0x833f,	// (0x000087ca) control_bg_pane_g2

0x0001,

0xfd37,	// (0x000101c2) control_bg_pane_g

0x5ac0,	// (0x00005f4b) cell_indicator_nsta_pane_g1_ParamLimits

0xd30b,	// (0x0000d796) cell_indicator_nsta_pane_g2_ParamLimits

0xfaab,	// (0x0000ff36) cell_indicator_nsta_pane_g_ParamLimits

0x5e84,	// (0x0000630f) form2_midp_time_pane_t1_ParamLimits

0x616b,	// (0x000065f6) main_idle_act4_pane_ParamLimits

0x616b,	// (0x000065f6) main_idle_act4_pane

0xc5f1,	// (0x0000ca7c) popup_tb_extension_window_ParamLimits

0xdfa2,	// (0x0000e42d) tb_ext_find_pane_ParamLimits

0xdfa2,	// (0x0000e42d) tb_ext_find_pane

0x8348,	// (0x000087d3) ai_gene_pane_1_cp1

0x22cc,	// (0x00002757) ai_gene_pane_2_cp1

0x8350,	// (0x000087db) list_single_idle_plugin_calendar_pane

0x8359,	// (0x000087e4) list_single_idle_plugin_notification_pane

0x8362,	// (0x000087ed) list_single_idle_plugin_player_pane

0xe001,	// (0x0000e48c) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe001,	// (0x0000e48c) list_single_idle_plugin_shortcut_pane

0xe029,	// (0x0000e4b4) main_idle_act4_pane_t1

0xe041,	// (0x0000e4cc) main_idle_act4_pane_t2

0x0001,

0xfd3c,	// (0x000101c7) main_idle_act4_pane_t

0xe059,	// (0x0000e4e4) middle_sk_idle_act4_pane_ParamLimits

0xe059,	// (0x0000e4e4) middle_sk_idle_act4_pane

0xe075,	// (0x0000e500) popup_clock_digital_analogue_window_cp2

0xe09c,	// (0x0000e527) shortcut_wheel_idle_act4_pane_ParamLimits

0xe09c,	// (0x0000e527) shortcut_wheel_idle_act4_pane

0x60fb,	// (0x00006586) shortcut_wheel_idle_act4_pane_g1

0x60fb,	// (0x00006586) shortcut_wheel_idle_act4_pane_g2

0x60fb,	// (0x00006586) shortcut_wheel_idle_act4_pane_g3

0x60fb,	// (0x00006586) shortcut_wheel_idle_act4_pane_g4

0x60fb,	// (0x00006586) shortcut_wheel_idle_act4_pane_g5

0x83f5,	// (0x00008880) shortcut_wheel_idle_act4_pane_g6

0x83fd,	// (0x00008888) shortcut_wheel_idle_act4_pane_g7

0x8405,	// (0x00008890) shortcut_wheel_idle_act4_pane_g8

0x840d,	// (0x00008898) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd41,	// (0x000101cc) shortcut_wheel_idle_act4_pane_g

0x6222,	// (0x000066ad) middle_sk_idle_act4_pane_g1_ParamLimits

0x6222,	// (0x000066ad) middle_sk_idle_act4_pane_g1

0xe119,	// (0x0000e5a4) middle_sk_idle_act4_pane_g2_ParamLimits

0xe119,	// (0x0000e5a4) middle_sk_idle_act4_pane_g2

0x0001,

0xfd64,	// (0x000101ef) middle_sk_idle_act4_pane_g_ParamLimits

0xfd64,	// (0x000101ef) middle_sk_idle_act4_pane_g

0xe131,	// (0x0000e5bc) middle_sk_idle_act4_pane_t1_ParamLimits

0xe131,	// (0x0000e5bc) middle_sk_idle_act4_pane_t1

0xe160,	// (0x0000e5eb) grid_ai_shortcut_pane_ParamLimits

0xe160,	// (0x0000e5eb) grid_ai_shortcut_pane

0xe17d,	// (0x0000e608) list_highlight_pane_cp16_ParamLimits

0xe17d,	// (0x0000e608) list_highlight_pane_cp16

0xe18a,	// (0x0000e615) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe18a,	// (0x0000e615) list_single_idle_plugin_shortcut_pane_g1

0xe196,	// (0x0000e621) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe196,	// (0x0000e621) list_single_idle_plugin_shortcut_pane_g2

0xe1b4,	// (0x0000e63f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe1b4,	// (0x0000e63f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd69,	// (0x000101f4) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd69,	// (0x000101f4) list_single_idle_plugin_shortcut_pane_g

0xe1c9,	// (0x0000e654) cell_ai_shortcut_pane_ParamLimits

0xe1c9,	// (0x0000e654) cell_ai_shortcut_pane

0xe1df,	// (0x0000e66a) cell_ai_shortcut_pane_g1_ParamLimits

0xe1df,	// (0x0000e66a) cell_ai_shortcut_pane_g1

0x8348,	// (0x000087d3) ai_gene_pane_1_cp2

0x853e,	// (0x000089c9) ai_gene_pane_2_cp2

0x8546,	// (0x000089d1) list_highlight_pane_cp15

0x854f,	// (0x000089da) list_single_idle_plugin_calendar_pane_g1

0x8546,	// (0x000089d1) list_highlight_pane_cp17

0x8557,	// (0x000089e2) list_single_idle_plugin_calendar_pane_g1_copy1

0x855f,	// (0x000089ea) list_single_idle_plugin_player_pane_g1

0x5221,	// (0x000056ac) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd70,	// (0x000101fb) list_single_idle_plugin_player_pane_g

0x8567,	// (0x000089f2) list_single_idle_plugin_player_pane_t1

0x8575,	// (0x00008a00) list_single_idle_plugin_player_pane_t2

0x8583,	// (0x00008a0e) list_single_idle_plugin_player_pane_t3

0x8591,	// (0x00008a1c) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd75,	// (0x00010200) list_single_idle_plugin_player_pane_t

0x859f,	// (0x00008a2a) wait_bar_pane_cp15

0x85a7,	// (0x00008a32) grid_ai_notification_pane

0x5221,	// (0x000056ac) list_single_idle_plugin_notification_pane_g1

0xe201,	// (0x0000e68c) cell_ai_notification_pane_ParamLimits

0xe201,	// (0x0000e68c) cell_ai_notification_pane

0x85bd,	// (0x00008a48) cell_ai_notification_pane_g1

0x85c5,	// (0x00008a50) cell_ai_notification_pane_t1

0xe20e,	// (0x0000e699) tb_ext_find_button_pane

0xe216,	// (0x0000e6a1) tb_ext_find_pane_g1

0xe21e,	// (0x0000e6a9) tb_ext_find_pane_t1

0x18ec,	// (0x00001d77) tb_ext_find_button_pane_g1

0x85f1,	// (0x00008a7c) tb_ext_find_button_pane_g2

0x0001,

0xfd7e,	// (0x00010209) tb_ext_find_button_pane_g

0xe029,	// (0x0000e4b4) main_idle_act4_pane_t1_ParamLimits

0xe041,	// (0x0000e4cc) main_idle_act4_pane_t2_ParamLimits

0xfd3c,	// (0x000101c7) main_idle_act4_pane_t_ParamLimits

0xe075,	// (0x0000e500) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe08c,	// (0x0000e517) sat_plugin_idle_act4_pane_ParamLimits

0xe08c,	// (0x0000e517) sat_plugin_idle_act4_pane

0xe22c,	// (0x0000e6b7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe22c,	// (0x0000e6b7) sat_plugin_idle_act4_pane_t1

0xe244,	// (0x0000e6cf) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe244,	// (0x0000e6cf) sat_plugin_idle_act4_pane_t2

0xe25c,	// (0x0000e6e7) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe25c,	// (0x0000e6e7) sat_plugin_idle_act4_pane_t3

0xe274,	// (0x0000e6ff) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe274,	// (0x0000e6ff) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd83,	// (0x0001020e) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd83,	// (0x0001020e) sat_plugin_idle_act4_pane_t

0xf49d,	// (0x0000f928) popup_battery_window_ParamLimits

0xf49d,	// (0x0000f928) popup_battery_window

0x03b8,	// (0x00000843) bg_popup_sub_pane_cp25_ParamLimits

0x03b8,	// (0x00000843) bg_popup_sub_pane_cp25

0x8646,	// (0x00008ad1) popup_battery_window_g1_ParamLimits

0x8646,	// (0x00008ad1) popup_battery_window_g1

0x8652,	// (0x00008add) popup_battery_window_t1_ParamLimits

0x8652,	// (0x00008add) popup_battery_window_t1

0x8664,	// (0x00008aef) popup_battery_window_t2_ParamLimits

0x8664,	// (0x00008aef) popup_battery_window_t2

0x0001,

0xfd8c,	// (0x00010217) popup_battery_window_t_ParamLimits

0xfd8c,	// (0x00010217) popup_battery_window_t

0xbd68,	// (0x0000c1f3) midp_canvas_pane_ParamLimits

0xbdc3,	// (0x0000c24e) midp_keypad_pane_ParamLimits

0xbdc3,	// (0x0000c24e) midp_keypad_pane

0x2710,	// (0x00002b9b) main_midp_pane_ParamLimits

0x5b4a,	// (0x00005fd5) signal_pane_g2_cp_ParamLimits

0xe28c,	// (0x0000e717) aid_size_cell_midp_keypad_ParamLimits

0xe28c,	// (0x0000e717) aid_size_cell_midp_keypad

0xe2aa,	// (0x0000e735) midp_keyp_game_grid_pane_ParamLimits

0xe2aa,	// (0x0000e735) midp_keyp_game_grid_pane

0xe2d1,	// (0x0000e75c) midp_keyp_rocker_pane_ParamLimits

0xe2d1,	// (0x0000e75c) midp_keyp_rocker_pane

0xe316,	// (0x0000e7a1) midp_keyp_sk_left_pane_ParamLimits

0xe316,	// (0x0000e7a1) midp_keyp_sk_left_pane

0xe36a,	// (0x0000e7f5) midp_keyp_sk_right_pane_ParamLimits

0xe36a,	// (0x0000e7f5) midp_keyp_sk_right_pane

0xf310,	// (0x0000f79b) bg_button_pane_cp03

0xe3be,	// (0x0000e849) midp_keyp_sk_left_pane_g1

0xf310,	// (0x0000f79b) bg_button_pane_cp04

0xe3be,	// (0x0000e849) midp_keyp_sk_right_pane_g1

0x60fb,	// (0x00006586) midp_keyp_rocker_pane_g1

0xe3c7,	// (0x0000e852) keyp_game_cell_pane_ParamLimits

0xe3c7,	// (0x0000e852) keyp_game_cell_pane

0xf310,	// (0x0000f79b) bg_button_pane_cp02

0xe3ed,	// (0x0000e878) keyp_game_cell_pane_g1

0xb03f,	// (0x0000b4ca) popup_fep_vkb2_window_ParamLimits

0xb03f,	// (0x0000b4ca) popup_fep_vkb2_window

0xe3f6,	// (0x0000e881) aid_size_cell_vkb2_ParamLimits

0xe3f6,	// (0x0000e881) aid_size_cell_vkb2

0xe424,	// (0x0000e8af) popup_fep_vkb2_window_g1_ParamLimits

0xe424,	// (0x0000e8af) popup_fep_vkb2_window_g1

0xe474,	// (0x0000e8ff) vkb2_area_bottom_pane_ParamLimits

0xe474,	// (0x0000e8ff) vkb2_area_bottom_pane

0xe4d0,	// (0x0000e95b) vkb2_area_keypad_pane_ParamLimits

0xe4d0,	// (0x0000e95b) vkb2_area_keypad_pane

0xe51e,	// (0x0000e9a9) vkb2_area_top_pane_ParamLimits

0xe51e,	// (0x0000e9a9) vkb2_area_top_pane

0xe5a4,	// (0x0000ea2f) vkb2_top_entry_pane_ParamLimits

0xe5a4,	// (0x0000ea2f) vkb2_top_entry_pane

0xe5d1,	// (0x0000ea5c) vkb2_top_grid_left_pane_ParamLimits

0xe5d1,	// (0x0000ea5c) vkb2_top_grid_left_pane

0xe5f1,	// (0x0000ea7c) vkb2_top_grid_right_pane_ParamLimits

0xe5f1,	// (0x0000ea7c) vkb2_top_grid_right_pane

0x89df,	// (0x00008e6a) vkb2_cell_keypad_pane_ParamLimits

0x89df,	// (0x00008e6a) vkb2_cell_keypad_pane

0xe637,	// (0x0000eac2) vkb2_area_bottom_grid_pane_ParamLimits

0xe637,	// (0x0000eac2) vkb2_area_bottom_grid_pane

0xe661,	// (0x0000eaec) vkb2_area_bottom_pane_g1_ParamLimits

0xe661,	// (0x0000eaec) vkb2_area_bottom_pane_g1

0xe687,	// (0x0000eb12) vkb2_area_bottom_pane_g2_ParamLimits

0xe687,	// (0x0000eb12) vkb2_area_bottom_pane_g2

0xe6b8,	// (0x0000eb43) vkb2_area_bottom_pane_g3_ParamLimits

0xe6b8,	// (0x0000eb43) vkb2_area_bottom_pane_g3

0x0002,

0xfd91,	// (0x0001021c) vkb2_area_bottom_pane_g_ParamLimits

0xfd91,	// (0x0001021c) vkb2_area_bottom_pane_g

0x8b6e,	// (0x00008ff9) vkb2_top_cell_left_pane_ParamLimits

0x8b6e,	// (0x00008ff9) vkb2_top_cell_left_pane

0xe722,	// (0x0000ebad) vkb2_top_entry_pane_g1_ParamLimits

0xe722,	// (0x0000ebad) vkb2_top_entry_pane_g1

0xe730,	// (0x0000ebbb) vkb2_top_entry_pane_t1_ParamLimits

0xe730,	// (0x0000ebbb) vkb2_top_entry_pane_t1

0x8bbc,	// (0x00009047) vkb2_top_entry_pane_t2_ParamLimits

0x8bbc,	// (0x00009047) vkb2_top_entry_pane_t2

0x8bd4,	// (0x0000905f) vkb2_top_entry_pane_t3_ParamLimits

0x8bd4,	// (0x0000905f) vkb2_top_entry_pane_t3

0x0002,

0xfd98,	// (0x00010223) vkb2_top_entry_pane_t_ParamLimits

0xfd98,	// (0x00010223) vkb2_top_entry_pane_t

0xe769,	// (0x0000ebf4) vkb2_top_grid_right_pane_g1_ParamLimits

0xe769,	// (0x0000ebf4) vkb2_top_grid_right_pane_g1

0x8c2d,	// (0x000090b8) vkb2_top_grid_right_pane_g2_ParamLimits

0x8c2d,	// (0x000090b8) vkb2_top_grid_right_pane_g2

0x8c45,	// (0x000090d0) vkb2_top_grid_right_pane_g3_ParamLimits

0x8c45,	// (0x000090d0) vkb2_top_grid_right_pane_g3

0xe77f,	// (0x0000ec0a) vkb2_top_grid_right_pane_g4_ParamLimits

0xe77f,	// (0x0000ec0a) vkb2_top_grid_right_pane_g4

0x0003,

0xfd9f,	// (0x0001022a) vkb2_top_grid_right_pane_g_ParamLimits

0xfd9f,	// (0x0001022a) vkb2_top_grid_right_pane_g

0x8c73,	// (0x000090fe) vkb2_top_cell_left_pane_g1

0x8c8a,	// (0x00009115) vkb2_cell_keypad_pane_g1_ParamLimits

0x8c8a,	// (0x00009115) vkb2_cell_keypad_pane_g1

0x8cae,	// (0x00009139) vkb2_cell_keypad_pane_t1_ParamLimits

0x8cae,	// (0x00009139) vkb2_cell_keypad_pane_t1

0x8cc5,	// (0x00009150) vkb2_cell_bottom_grid_pane_ParamLimits

0x8cc5,	// (0x00009150) vkb2_cell_bottom_grid_pane

0x8cfe,	// (0x00009189) vkb2_cell_bottom_grid_pane_g1

0xe0bd,	// (0x0000e548) aid_call2_pane_cp02

0xe0c5,	// (0x0000e550) aid_call_pane_cp02

0xe0cd,	// (0x0000e558) clock_digital_number_pane_cp10

0xe0d5,	// (0x0000e560) clock_digital_number_pane_cp11

0xe0dd,	// (0x0000e568) clock_digital_number_pane_cp12

0xe0e5,	// (0x0000e570) clock_digital_number_pane_cp13

0xe0ed,	// (0x0000e578) clock_digital_separator_pane_cp10

0x18ec,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g1

0x18ec,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g2

0xe0f5,	// (0x0000e580) popup_clock_digital_analogue_window_cp2_g3

0x18ec,	// (0x00001d77) popup_clock_digital_analogue_window_cp2_g4

0xe0f5,	// (0x0000e580) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd54,	// (0x000101df) popup_clock_digital_analogue_window_cp2_g

0xe0fd,	// (0x0000e588) popup_clock_digital_analogue_window_cp2_t1

0xe10b,	// (0x0000e596) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd5f,	// (0x000101ea) popup_clock_digital_analogue_window_cp2_t

0x60fb,	// (0x00006586) clock_digital_number_pane_cp10_g1

0x60fb,	// (0x00006586) clock_digital_number_pane_cp10_g2

0x0001,

0xfb47,	// (0x0000ffd2) clock_digital_number_pane_cp10_g

0x60fb,	// (0x00006586) clock_digital_separator_pane_cp10_g1

0x60fb,	// (0x00006586) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb47,	// (0x0000ffd2) clock_digital_separator_pane_cp10_g

0x8290,	// (0x0000871b) uniindi_top_pane_g3

0x82a1,	// (0x0000872c) uniindi_top_pane_g4

0x8a4f,	// (0x00008eda) vkb2_row_keypad_pane_ParamLimits

0x8a4f,	// (0x00008eda) vkb2_row_keypad_pane

0x8d1a,	// (0x000091a5) vkb2_cell_t_keypad_pane_ParamLimits

0x8d1a,	// (0x000091a5) vkb2_cell_t_keypad_pane

0x8d2a,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x8d2a,	// (0x000091b5) vkb2_cell_t_keypad_pane_cp08

0x8d3f,	// (0x000091ca) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x8d3f,	// (0x000091ca) vkb2_cell_t_keypad_pane_cp09

0x8d53,	// (0x000091de) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x8d53,	// (0x000091de) vkb2_cell_t_keypad_pane_cp01

0x8d64,	// (0x000091ef) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x8d64,	// (0x000091ef) vkb2_cell_t_keypad_pane_cp02

0x8d75,	// (0x00009200) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x8d75,	// (0x00009200) vkb2_cell_t_keypad_pane_cp03

0x8d86,	// (0x00009211) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x8d86,	// (0x00009211) vkb2_cell_t_keypad_pane_cp04

0x8d97,	// (0x00009222) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x8d97,	// (0x00009222) vkb2_cell_t_keypad_pane_cp05

0x8da8,	// (0x00009233) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x8da8,	// (0x00009233) vkb2_cell_t_keypad_pane_cp06

0x8dbb,	// (0x00009246) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x8dbb,	// (0x00009246) vkb2_cell_t_keypad_pane_cp07

0x8dd0,	// (0x0000925b) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x8dd0,	// (0x0000925b) vkb2_cell_t_keypad_pane_cp10

0x65af,	// (0x00006a3a) vkb2_cell_t_keypad_pane_g1

0x8de5,	// (0x00009270) vkb2_cell_t_keypad_pane_t1

0xf310,	// (0x0000f79b) popup_grid_graphic2_window

0xe795,	// (0x0000ec20) aid_size_cell_graphic2_ParamLimits

0xe795,	// (0x0000ec20) aid_size_cell_graphic2

0xe7d3,	// (0x0000ec5e) bg_popup_window_pane_cp21_ParamLimits

0xe7d3,	// (0x0000ec5e) bg_popup_window_pane_cp21

0xe7e1,	// (0x0000ec6c) graphic2_pages_pane_ParamLimits

0xe7e1,	// (0x0000ec6c) graphic2_pages_pane

0xe839,	// (0x0000ecc4) grid_graphic2_control_pane_ParamLimits

0xe839,	// (0x0000ecc4) grid_graphic2_control_pane

0xe881,	// (0x0000ed0c) grid_graphic2_pane_ParamLimits

0xe881,	// (0x0000ed0c) grid_graphic2_pane

0xe90c,	// (0x0000ed97) cell_graphic2_pane

0xf310,	// (0x0000f79b) main_comp_mode_pane

0x79c6,	// (0x00007e51) list_ai3_gene_pane_ParamLimits

0xdd8b,	// (0x0000e216) bg_popup_window_pane_cp19_ParamLimits

0x7dfd,	// (0x00008288) bg_touch_area_indi_pane_ParamLimits

0x7dfd,	// (0x00008288) bg_touch_area_indi_pane

0x7e13,	// (0x0000829e) bg_touch_area_indi_pane_cp01_ParamLimits

0x7e13,	// (0x0000829e) bg_touch_area_indi_pane_cp01

0x7e2b,	// (0x000082b6) bg_touch_area_indi_pane_cp02_ParamLimits

0x7e2b,	// (0x000082b6) bg_touch_area_indi_pane_cp02

0x7e45,	// (0x000082d0) bg_touch_area_indi_pane_cp03_ParamLimits

0x7e45,	// (0x000082d0) bg_touch_area_indi_pane_cp03

0x7e5f,	// (0x000082ea) popup_slider_window_g1_ParamLimits

0x7e7b,	// (0x00008306) popup_slider_window_g2_ParamLimits

0x7e97,	// (0x00008322) popup_slider_window_g3_ParamLimits

0xfce9,	// (0x00010174) popup_slider_window_g_ParamLimits

0x7ef3,	// (0x0000837e) popup_slider_window_t1_ParamLimits

0x7f67,	// (0x000083f2) small_volume_slider_vertical_pane_ParamLimits

0xe90c,	// (0x0000ed97) cell_graphic2_pane_ParamLimits

0xe96f,	// (0x0000edfa) bg_button_pane_cp10_ParamLimits

0xe96f,	// (0x0000edfa) bg_button_pane_cp10

0xe982,	// (0x0000ee0d) bg_button_pane_cp11_ParamLimits

0xe982,	// (0x0000ee0d) bg_button_pane_cp11

0xe995,	// (0x0000ee20) graphic2_pages_pane_g1_ParamLimits

0xe995,	// (0x0000ee20) graphic2_pages_pane_g1

0xe9b0,	// (0x0000ee3b) graphic2_pages_pane_g2_ParamLimits

0xe9b0,	// (0x0000ee3b) graphic2_pages_pane_g2

0x0001,

0xfdad,	// (0x00010238) graphic2_pages_pane_g_ParamLimits

0xfdad,	// (0x00010238) graphic2_pages_pane_g

0xe9c8,	// (0x0000ee53) graphic2_pages_pane_t1_ParamLimits

0xe9c8,	// (0x0000ee53) graphic2_pages_pane_t1

0xe9e0,	// (0x0000ee6b) cell_graphic2_control_pane_ParamLimits

0xe9e0,	// (0x0000ee6b) cell_graphic2_control_pane

0xe9fc,	// (0x0000ee87) cell_graphic2_pane_g1_ParamLimits

0xe9fc,	// (0x0000ee87) cell_graphic2_pane_g1

0x63d1,	// (0x0000685c) cell_graphic2_pane_g2_ParamLimits

0x63d1,	// (0x0000685c) cell_graphic2_pane_g2

0xea09,	// (0x0000ee94) cell_graphic2_pane_g3_ParamLimits

0xea09,	// (0x0000ee94) cell_graphic2_pane_g3

0x63de,	// (0x00006869) cell_graphic2_pane_g4_ParamLimits

0x63de,	// (0x00006869) cell_graphic2_pane_g4

0xea16,	// (0x0000eea1) cell_graphic2_pane_g5_ParamLimits

0xea16,	// (0x0000eea1) cell_graphic2_pane_g5

0x0004,

0xfdb2,	// (0x0001023d) cell_graphic2_pane_g_ParamLimits

0xfdb2,	// (0x0001023d) cell_graphic2_pane_g

0xea36,	// (0x0000eec1) cell_graphic2_pane_t1_ParamLimits

0xea36,	// (0x0000eec1) cell_graphic2_pane_t1

0x42d0,	// (0x0000475b) grid_highlight_pane_cp11_ParamLimits

0x42d0,	// (0x0000475b) grid_highlight_pane_cp11

0x03b8,	// (0x00000843) bg_button_pane_cp05

0xea6b,	// (0x0000eef6) cell_graphic2_control_pane_g1

0x60fb,	// (0x00006586) bg_touch_area_indi_pane_g1

0x90b6,	// (0x00009541) aid_cmod_rocker_key_size

0x90c0,	// (0x0000954b) aid_cmode_itu_key_size

0x90ca,	// (0x00009555) main_cmode_video_pane

0x90d4,	// (0x0000955f) main_comp_mode_itu_pane

0x90e0,	// (0x0000956b) main_comp_mode_rocker_pane

0x90ec,	// (0x00009577) cell_cmode_rocker_pane_ParamLimits

0x90ec,	// (0x00009577) cell_cmode_rocker_pane

0x9100,	// (0x0000958b) cell_cmode_itu_pane_ParamLimits

0x9100,	// (0x0000958b) cell_cmode_itu_pane

0x0f50,	// (0x000013db) bg_button_pane_cp06_ParamLimits

0x0f50,	// (0x000013db) bg_button_pane_cp06

0x65af,	// (0x00006a3a) cell_cmode_rocker_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) cell_cmode_rocker_pane_g1

0x80e6,	// (0x00008571) cell_cmode_rocker_pane_g2_ParamLimits

0x80e6,	// (0x00008571) cell_cmode_rocker_pane_g2

0x0001,

0xfdc2,	// (0x0001024d) cell_cmode_rocker_pane_g_ParamLimits

0xfdc2,	// (0x0001024d) cell_cmode_rocker_pane_g

0xf310,	// (0x0000f79b) bg_button_pane_cp07

0x9117,	// (0x000095a2) cell_cmode_itu_pane_g1

0x9120,	// (0x000095ab) cell_cmode_itu_pane_t1

0x912e,	// (0x000095b9) cell_cmode_itu_pane_t2

0x0001,

0xfdc7,	// (0x00010252) cell_cmode_itu_pane_t

0x8314,	// (0x0000879f) aid_touch_ctrl_left

0x831c,	// (0x000087a7) aid_touch_ctrl_right

0xf310,	// (0x0000f79b) compa_mode_pane

0xea91,	// (0x0000ef1c) aid_cmod_rocker_key_size_cp

0xea9b,	// (0x0000ef26) aid_cmode_itu_key_size_cp

0x9150,	// (0x000095db) compa_mode_pane_g1

0x9158,	// (0x000095e3) compa_mode_pane_g2

0x9160,	// (0x000095eb) compa_mode_pane_g3

0x0002,

0xfdcc,	// (0x00010257) compa_mode_pane_g

0xeaa5,	// (0x0000ef30) main_comp_mode_itu_pane_cp

0xeaad,	// (0x0000ef38) main_comp_mode_rocker_pane_cp

0xeab5,	// (0x0000ef40) cell_cmode_itu_pane_cp_ParamLimits

0xeab5,	// (0x0000ef40) cell_cmode_itu_pane_cp

0xeaca,	// (0x0000ef55) cell_cmode_rocker_pane_cp_ParamLimits

0xeaca,	// (0x0000ef55) cell_cmode_rocker_pane_cp

0x0f50,	// (0x000013db) bg_button_pane_cp06_cp_ParamLimits

0x0f50,	// (0x000013db) bg_button_pane_cp06_cp

0x65af,	// (0x00006a3a) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x65af,	// (0x00006a3a) cell_cmode_rocker_pane_g1_cp

0x60fb,	// (0x00006586) cell_cmode_rocker_pane_g2_cp

0xf310,	// (0x0000f79b) bg_button_pane_cp07_cp

0xeadc,	// (0x0000ef67) cell_cmode_itu_pane_g1_cp

0xeae5,	// (0x0000ef70) cell_cmode_itu_pane_t1_cp

0xeae5,	// (0x0000ef70) cell_cmode_itu_pane_t2_cp

0xd110,	// (0x0000d59b) settings_code_pane_cp2

0x0084,	// (0x0000050f) bg_popup_window_pane_cp3_ParamLimits

0x05a6,	// (0x00000a31) heading_pane_cp3_ParamLimits

0x05b2,	// (0x00000a3d) listscroll_popup_graphic_pane_ParamLimits

0x6179,	// (0x00006604) fep_hwr_aid_pane_ParamLimits

0x7fe3,	// (0x0000846e) aid_touch_sctrl_top_ParamLimits

0x7ff0,	// (0x0000847b) sctrl_sk_top_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) sctrl_sk_top_pane_g2_ParamLimits

0xfd02,	// (0x0001018d) sctrl_sk_top_pane_g_ParamLimits

0x7ffd,	// (0x00008488) sctrl_sk_top_pane_t1_ParamLimits

0x7fe3,	// (0x0000846e) aid_touch_sctrl_bottom_ParamLimits

0x7ffd,	// (0x00008488) sctrl_sk_bottom_pane_t1_ParamLimits

0x825a,	// (0x000086e5) aid_area_touch_clock

0xe566,	// (0x0000e9f1) aid_vkb2_area_top_pane_cell_ParamLimits

0xe566,	// (0x0000e9f1) aid_vkb2_area_top_pane_cell

0xe611,	// (0x0000ea9c) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe611,	// (0x0000ea9c) aid_vkb2_area_bottom_pane_cell

0x8b8e,	// (0x00009019) popup_char_count_window

0x91b6,	// (0x00009641) popup_char_count_window_g1

0x91bf,	// (0x0000964a) popup_char_count_window_g2

0x91c8,	// (0x00009653) popup_char_count_window_g3

0x0002,

0xfdd3,	// (0x0001025e) popup_char_count_window_g

0x91d1,	// (0x0000965c) popup_char_count_window_t1

0x87fb,	// (0x00008c86) popup_fep_char_preview_window_ParamLimits

0x87fb,	// (0x00008c86) popup_fep_char_preview_window

0xe586,	// (0x0000ea11) vkb2_top_candi_pane_ParamLimits

0xe586,	// (0x0000ea11) vkb2_top_candi_pane

0xeaf3,	// (0x0000ef7e) cell_vkb2_top_candi_pane_ParamLimits

0xeaf3,	// (0x0000ef7e) cell_vkb2_top_candi_pane

0x3afe,	// (0x00003f89) bg_popup_fep_char_preview_window_ParamLimits

0x3afe,	// (0x00003f89) bg_popup_fep_char_preview_window

0x9230,	// (0x000096bb) popup_fep_char_preview_window_t1_ParamLimits

0x9230,	// (0x000096bb) popup_fep_char_preview_window_t1

0x926a,	// (0x000096f5) bg_popup_fep_char_preview_window_g1

0x9272,	// (0x000096fd) bg_popup_fep_char_preview_window_g2

0x927a,	// (0x00009705) bg_popup_fep_char_preview_window_g3

0x9282,	// (0x0000970d) bg_popup_fep_char_preview_window_g4

0x928a,	// (0x00009715) bg_popup_fep_char_preview_window_g5

0x9292,	// (0x0000971d) bg_popup_fep_char_preview_window_g6

0x929a,	// (0x00009725) bg_popup_fep_char_preview_window_g7

0x92a2,	// (0x0000972d) bg_popup_fep_char_preview_window_g8

0x92aa,	// (0x00009735) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdda,	// (0x00010265) bg_popup_fep_char_preview_window_g

0x65af,	// (0x00006a3a) cell_vkb2_top_candi_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) cell_vkb2_top_candi_pane_g1

0x6944,	// (0x00006dcf) cell_vkb2_top_candi_pane_g2_ParamLimits

0x6944,	// (0x00006dcf) cell_vkb2_top_candi_pane_g2

0x6965,	// (0x00006df0) cell_vkb2_top_candi_pane_g3_ParamLimits

0x6965,	// (0x00006df0) cell_vkb2_top_candi_pane_g3

0x92b2,	// (0x0000973d) cell_vkb2_top_candi_pane_g4_ParamLimits

0x92b2,	// (0x0000973d) cell_vkb2_top_candi_pane_g4

0x92d3,	// (0x0000975e) cell_vkb2_top_candi_pane_g5_ParamLimits

0x92d3,	// (0x0000975e) cell_vkb2_top_candi_pane_g5

0x80e6,	// (0x00008571) cell_vkb2_top_candi_pane_g6_ParamLimits

0x80e6,	// (0x00008571) cell_vkb2_top_candi_pane_g6

0x0005,

0xfded,	// (0x00010278) cell_vkb2_top_candi_pane_g_ParamLimits

0xfded,	// (0x00010278) cell_vkb2_top_candi_pane_g

0x92f4,	// (0x0000977f) cell_vkb2_top_candi_pane_t1

0x4a3b,	// (0x00004ec6) aid_size_touch_slider_mark_ParamLimits

0x4a3b,	// (0x00004ec6) aid_size_touch_slider_mark

0xe81d,	// (0x0000eca8) grid_graphic2_catg_pane_ParamLimits

0xe81d,	// (0x0000eca8) grid_graphic2_catg_pane

0xe8db,	// (0x0000ed66) popup_grid_graphic2_window_t1_ParamLimits

0xe8db,	// (0x0000ed66) popup_grid_graphic2_window_t1

0xe8f1,	// (0x0000ed7c) popup_grid_graphic2_window_t2_ParamLimits

0xe8f1,	// (0x0000ed7c) popup_grid_graphic2_window_t2

0x0001,

0xfda8,	// (0x00010233) popup_grid_graphic2_window_t_ParamLimits

0xfda8,	// (0x00010233) popup_grid_graphic2_window_t

0x03b8,	// (0x00000843) bg_button_pane_cp05_ParamLimits

0xea6b,	// (0x0000eef6) cell_graphic2_control_pane_g1_ParamLimits

0xeb47,	// (0x0000efd2) cell_graphic2_catg_pane_ParamLimits

0xeb47,	// (0x0000efd2) cell_graphic2_catg_pane

0xf310,	// (0x0000f79b) bg_button_pane_cp12

0xeb59,	// (0x0000efe4) cell_graphic2_catg_pane_g1

0x8226,	// (0x000086b1) cell_tb_ext_pane_t1_ParamLimits

0x8bea,	// (0x00009075) vkb2_top_cell_right_narrow_pane_ParamLimits

0x8bea,	// (0x00009075) vkb2_top_cell_right_narrow_pane

0x8c02,	// (0x0000908d) vkb2_top_cell_right_wide_pane_ParamLimits

0x8c02,	// (0x0000908d) vkb2_top_cell_right_wide_pane

0x616b,	// (0x000065f6) bg_vkb2_func_pane_ParamLimits

0x616b,	// (0x000065f6) bg_vkb2_func_pane

0x8c73,	// (0x000090fe) vkb2_top_cell_left_pane_g1_ParamLimits

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp03_ParamLimits

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp03

0x8cfe,	// (0x00009189) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x3302,	// (0x0000378d) bg_vkb2_func_pane_g1

0x330a,	// (0x00003795) bg_vkb2_func_pane_g2

0x331a,	// (0x000037a5) bg_vkb2_func_pane_g3

0x3312,	// (0x0000379d) bg_vkb2_func_pane_g4

0x3322,	// (0x000037ad) bg_vkb2_func_pane_g5

0x332a,	// (0x000037b5) bg_vkb2_func_pane_g6

0x3332,	// (0x000037bd) bg_vkb2_func_pane_g7

0x333a,	// (0x000037c5) bg_vkb2_func_pane_g8

0x32fa,	// (0x00003785) bg_vkb2_func_pane_g9

0x0008,

0xfdfa,	// (0x00010285) bg_vkb2_func_pane_g

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp01_ParamLimits

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp01

0x8c73,	// (0x000090fe) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x8c73,	// (0x000090fe) vkb2_top_cell_right_wide_pane_g1

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp02_ParamLimits

0x616b,	// (0x000065f6) bg_vkb2_fuc_pane_cp02

0x8cfe,	// (0x00009189) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x8cfe,	// (0x00009189) vkb2_top_cell_right_narrow_pane_g1

0xdcc5,	// (0x0000e150) aid_touch_area_decrease_ParamLimits

0xdcc5,	// (0x0000e150) aid_touch_area_decrease

0xdcff,	// (0x0000e18a) aid_touch_area_increase_ParamLimits

0xdcff,	// (0x0000e18a) aid_touch_area_increase

0xdd27,	// (0x0000e1b2) aid_touch_area_mute_ParamLimits

0xdd27,	// (0x0000e1b2) aid_touch_area_mute

0xdd57,	// (0x0000e1e2) aid_touch_area_slider_ParamLimits

0xdd57,	// (0x0000e1e2) aid_touch_area_slider

0xdd97,	// (0x0000e222) popup_slider_window_g4_ParamLimits

0xdd97,	// (0x0000e222) popup_slider_window_g4

0xddbf,	// (0x0000e24a) popup_slider_window_g5_ParamLimits

0xddbf,	// (0x0000e24a) popup_slider_window_g5

0xddf3,	// (0x0000e27e) popup_slider_window_g6_ParamLimits

0xddf3,	// (0x0000e27e) popup_slider_window_g6

0x7f21,	// (0x000083ac) popup_slider_window_t2_ParamLimits

0x7f21,	// (0x000083ac) popup_slider_window_t2

0x0001,

0xfcf6,	// (0x00010181) popup_slider_window_t_ParamLimits

0xfcf6,	// (0x00010181) popup_slider_window_t

0xde0f,	// (0x0000e29a) slider_pane_ParamLimits

0xde0f,	// (0x0000e29a) slider_pane

0x932d,	// (0x000097b8) slider_pane_g1_ParamLimits

0x932d,	// (0x000097b8) slider_pane_g1

0x9341,	// (0x000097cc) slider_pane_g2_ParamLimits

0x9341,	// (0x000097cc) slider_pane_g2

0x9357,	// (0x000097e2) slider_pane_g3_ParamLimits

0x9357,	// (0x000097e2) slider_pane_g3

0x0003,

0xfe0d,	// (0x00010298) slider_pane_g_ParamLimits

0xfe0d,	// (0x00010298) slider_pane_g

0xc63d,	// (0x0000cac8) popup_tb_float_extension_window_ParamLimits

0xc63d,	// (0x0000cac8) popup_tb_float_extension_window

0x9383,	// (0x0000980e) aid_size_cell_tb_float_ext

0xf310,	// (0x0000f79b) bg_popup_sub_window_cp28

0x938f,	// (0x0000981a) grid_tb_float_ext_pane

0x939b,	// (0x00009826) cell_tb_float_ext_pane_ParamLimits

0x939b,	// (0x00009826) cell_tb_float_ext_pane

0x93b7,	// (0x00009842) cell_tb_float_ext_pane_g1

0x93c0,	// (0x0000984b) grid_highlight_pane_cp12

0xd547,	// (0x0000d9d2) cell_last_hwr_side_pane_ParamLimits

0xd547,	// (0x0000d9d2) cell_last_hwr_side_pane

0x60fb,	// (0x00006586) cell_last_hwr_side_pane_g1

0x93c9,	// (0x00009854) cell_last_hwr_side_pane_g2

0x0001,

0xfe16,	// (0x000102a1) cell_last_hwr_side_pane_g

0xe6ed,	// (0x0000eb78) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe6ed,	// (0x0000eb78) vkb2_area_bottom_space_btn_pane

0x65af,	// (0x00006a3a) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x8de5,	// (0x00009270) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x92f4,	// (0x0000977f) cell_vkb2_top_candi_pane_t1_ParamLimits

0x93d2,	// (0x0000985d) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x93d2,	// (0x0000985d) vkb2_area_bottom_space_btn_pane_g1

0x940c,	// (0x00009897) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x940c,	// (0x00009897) vkb2_area_bottom_space_btn_pane_g2

0x9442,	// (0x000098cd) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x9442,	// (0x000098cd) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1b,	// (0x000102a6) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1b,	// (0x000102a6) vkb2_area_bottom_space_btn_pane_g

0x6230,	// (0x000066bb) cel_fep_hwr_func_pane_ParamLimits

0x6230,	// (0x000066bb) cel_fep_hwr_func_pane

0xd51c,	// (0x0000d9a7) cell_hwr_side_button_pane_ParamLimits

0xd51c,	// (0x0000d9a7) cell_hwr_side_button_pane

0x825a,	// (0x000086e5) aid_area_touch_clock_ParamLimits

0x03b8,	// (0x00000843) bg_uniindi_top_pane_ParamLimits

0x826e,	// (0x000086f9) uniindi_top_pane_g1_ParamLimits

0x8284,	// (0x0000870f) uniindi_top_pane_g2_ParamLimits

0x8290,	// (0x0000871b) uniindi_top_pane_g3_ParamLimits

0x82a1,	// (0x0000872c) uniindi_top_pane_g4_ParamLimits

0xfd2e,	// (0x000101b9) uniindi_top_pane_g_ParamLimits

0x82ae,	// (0x00008739) uniindi_top_pane_t1_ParamLimits

0x03b8,	// (0x00000843) bg_vkb2_func_pane_cp01_ParamLimits

0x03b8,	// (0x00000843) bg_vkb2_func_pane_cp01

0x948c,	// (0x00009917) cel_fep_hwr_func_pane_g1_ParamLimits

0x948c,	// (0x00009917) cel_fep_hwr_func_pane_g1

0x03b8,	// (0x00000843) bg_vkb2_func_pane_cp02_ParamLimits

0x03b8,	// (0x00000843) bg_vkb2_func_pane_cp02

0x948c,	// (0x00009917) cell_hwr_side_button_pane_g1_ParamLimits

0x948c,	// (0x00009917) cell_hwr_side_button_pane_g1

0x30d5,	// (0x00003560) status_pane_g4_ParamLimits

0x30d5,	// (0x00003560) status_pane_g4

0x30ef,	// (0x0000357a) status_pane_t1

0x5e97,	// (0x00006322) form2_midp_gauge_slider_cont_pane

0x5e9f,	// (0x0000632a) form2_midp_gauge_slider_pane_t1_ParamLimits

0xd44d,	// (0x0000d8d8) form2_midp_gauge_slider_pane_t2_ParamLimits

0xd45f,	// (0x0000d8ea) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafa,	// (0x0000ff85) form2_midp_gauge_slider_pane_t_ParamLimits

0x5ed5,	// (0x00006360) form2_midp_slider_pane_ParamLimits

0x87c3,	// (0x00008c4e) aid_size_cell_func_vkb2_ParamLimits

0x87c3,	// (0x00008c4e) aid_size_cell_func_vkb2

0x936f,	// (0x000097fa) slider_pane_g4_ParamLimits

0x936f,	// (0x000097fa) slider_pane_g4

0xeb62,	// (0x0000efed) form2_midp_gauge_slider_pane_t2_cp01

0xeb70,	// (0x0000effb) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xeb70,	// (0x0000effb) form2_midp_gauge_slider_pane_t3_cp01

0x94c5,	// (0x00009950) form2_midp_slider_pane_cp01

0xf310,	// (0x0000f79b) navi_smil_pane

0x94f9,	// (0x00009984) navi_smil_pane_g1

0x9501,	// (0x0000998c) navi_smil_pane_t1

0x94ce,	// (0x00009959) form2_midp_slider_pane_g1

0x94d7,	// (0x00009962) form2_midp_slider_pane_g2

0x94df,	// (0x0000996a) form2_midp_slider_pane_g3

0x94ce,	// (0x00009959) form2_midp_slider_pane_g4

0xeb8d,	// (0x0000f018) form2_midp_slider_pane_g5

0x0004,

0xfe24,	// (0x000102af) form2_midp_slider_pane_g

0x947c,	// (0x00009907) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x947c,	// (0x00009907) vkb2_area_bottom_space_btn_pane_g4

0xc81d,	// (0x0000cca8) lc0_navi_pane_ParamLimits

0xc81d,	// (0x0000cca8) lc0_navi_pane

0xc88d,	// (0x0000cd18) lc0_stat_indi_pane_ParamLimits

0xc88d,	// (0x0000cd18) lc0_stat_indi_pane

0xc8a2,	// (0x0000cd2d) ls0_title_pane_ParamLimits

0xc8a2,	// (0x0000cd2d) ls0_title_pane

0x0f50,	// (0x000013db) bg_popup_sub_pane_cp14_ParamLimits

0x8241,	// (0x000086cc) list_uniindi_pane_ParamLimits

0x824d,	// (0x000086d8) uniindi_top_pane_ParamLimits

0x82ec,	// (0x00008777) list_single_uniindi_pane_g1_ParamLimits

0x82ff,	// (0x0000878a) list_single_uniindi_pane_t1_ParamLimits

0xeb96,	// (0x0000f021) lc0_stat_clock_pane_ParamLimits

0xeb96,	// (0x0000f021) lc0_stat_clock_pane

0xeba3,	// (0x0000f02e) lc0_stat_indi_pane_g1_ParamLimits

0xeba3,	// (0x0000f02e) lc0_stat_indi_pane_g1

0xebb0,	// (0x0000f03b) lc0_stat_indi_pane_g2_ParamLimits

0xebb0,	// (0x0000f03b) lc0_stat_indi_pane_g2

0x0001,

0xfe2f,	// (0x000102ba) lc0_stat_indi_pane_g_ParamLimits

0xfe2f,	// (0x000102ba) lc0_stat_indi_pane_g

0xebbd,	// (0x0000f048) lc0_uni_indicator_pane_ParamLimits

0xebbd,	// (0x0000f048) lc0_uni_indicator_pane

0xebca,	// (0x0000f055) ls0_title_pane_g1_ParamLimits

0xebca,	// (0x0000f055) ls0_title_pane_g1

0xebde,	// (0x0000f069) ls0_title_pane_t1_ParamLimits

0xebde,	// (0x0000f069) ls0_title_pane_t1

0xec0c,	// (0x0000f097) lc0_uni_indicator_pane_g1_ParamLimits

0xec0c,	// (0x0000f097) lc0_uni_indicator_pane_g1

0x95a0,	// (0x00009a2b) lc0_stat_clock_pane_t1

0xf310,	// (0x0000f79b) main_ai5_pane

0x95ae,	// (0x00009a39) ai5_sk_pane_ParamLimits

0x95ae,	// (0x00009a39) ai5_sk_pane

0xec2b,	// (0x0000f0b6) cell_ai5_widget_pane_ParamLimits

0xec2b,	// (0x0000f0b6) cell_ai5_widget_pane

0x9631,	// (0x00009abc) aid_size_cell_widget_grid

0x9645,	// (0x00009ad0) bg_ai5_widget_pane_ParamLimits

0x9645,	// (0x00009ad0) bg_ai5_widget_pane

0xecb8,	// (0x0000f143) cell_ai5_widget_pane_g2

0xecc8,	// (0x0000f153) cell_ai5_widget_pane_g3

0xece7,	// (0x0000f172) cell_ai5_widget_pane_g4

0xecf3,	// (0x0000f17e) cell_ai5_widget_pane_g5

0xecff,	// (0x0000f18a) cell_ai5_widget_pane_g6

0xed0b,	// (0x0000f196) cell_ai5_widget_pane_g7

0xed53,	// (0x0000f1de) cell_ai5_widget_pane_t1_ParamLimits

0xed53,	// (0x0000f1de) cell_ai5_widget_pane_t1

0xed70,	// (0x0000f1fb) cell_ai5_widget_pane_t2_ParamLimits

0xed70,	// (0x0000f1fb) cell_ai5_widget_pane_t2

0xed88,	// (0x0000f213) cell_ai5_widget_pane_t3_ParamLimits

0xed88,	// (0x0000f213) cell_ai5_widget_pane_t3

0xeda0,	// (0x0000f22b) cell_ai5_widget_pane_t4_ParamLimits

0xeda0,	// (0x0000f22b) cell_ai5_widget_pane_t4

0xedba,	// (0x0000f245) cell_ai5_widget_pane_t5_ParamLimits

0xedba,	// (0x0000f245) cell_ai5_widget_pane_t5

0x9790,	// (0x00009c1b) cell_ai5_widget_pane_t6_ParamLimits

0x9790,	// (0x00009c1b) cell_ai5_widget_pane_t6

0x97a2,	// (0x00009c2d) cell_ai5_widget_pane_t7_ParamLimits

0x97a2,	// (0x00009c2d) cell_ai5_widget_pane_t7

0xedd9,	// (0x0000f264) cell_ai5_widget_pane_t8_ParamLimits

0xedd9,	// (0x0000f264) cell_ai5_widget_pane_t8

0x0009,

0xfe49,	// (0x000102d4) cell_ai5_widget_pane_t_ParamLimits

0xfe49,	// (0x000102d4) cell_ai5_widget_pane_t

0xee25,	// (0x0000f2b0) grid_ai5_widget_pane

0x0f50,	// (0x000013db) highlight_cell_ai5_widget_pane_ParamLimits

0x0f50,	// (0x000013db) highlight_cell_ai5_widget_pane

0xee3c,	// (0x0000f2c7) ai5_sk_left_pane

0xee46,	// (0x0000f2d1) ai5_sk_middle_pane

0xee50,	// (0x0000f2db) ai5_sk_right_pane

0x983c,	// (0x00009cc7) bg_ai5_widget_pane_g1_ParamLimits

0x983c,	// (0x00009cc7) bg_ai5_widget_pane_g1

0x9848,	// (0x00009cd3) bg_ai5_widget_pane_g2_ParamLimits

0x9848,	// (0x00009cd3) bg_ai5_widget_pane_g2

0x9854,	// (0x00009cdf) bg_ai5_widget_pane_g3_ParamLimits

0x9854,	// (0x00009cdf) bg_ai5_widget_pane_g3

0x9860,	// (0x00009ceb) bg_ai5_widget_pane_g4_ParamLimits

0x9860,	// (0x00009ceb) bg_ai5_widget_pane_g4

0x986c,	// (0x00009cf7) bg_ai5_widget_pane_g5_ParamLimits

0x986c,	// (0x00009cf7) bg_ai5_widget_pane_g5

0x9878,	// (0x00009d03) bg_ai5_widget_pane_g6_ParamLimits

0x9878,	// (0x00009d03) bg_ai5_widget_pane_g6

0x9884,	// (0x00009d0f) bg_ai5_widget_pane_g7_ParamLimits

0x9884,	// (0x00009d0f) bg_ai5_widget_pane_g7

0x9890,	// (0x00009d1b) bg_ai5_widget_pane_g8_ParamLimits

0x9890,	// (0x00009d1b) bg_ai5_widget_pane_g8

0x989c,	// (0x00009d27) bg_ai5_widget_pane_g9_ParamLimits

0x989c,	// (0x00009d27) bg_ai5_widget_pane_g9

0x0008,

0xfe5e,	// (0x000102e9) bg_ai5_widget_pane_g_ParamLimits

0xfe5e,	// (0x000102e9) bg_ai5_widget_pane_g

0x98c3,	// (0x00009d4e) cell_shortcut_ai5_widget_pane_ParamLimits

0x98c3,	// (0x00009d4e) cell_shortcut_ai5_widget_pane

0x01fa,	// (0x00000685) bg_cell_shortcut_ai5_widget_pane

0x98d5,	// (0x00009d60) cell_grid_ai5_widget_pane_g1

0x98de,	// (0x00009d69) highlight_cell_shortcut_ai5_widget_pane

0x330a,	// (0x00003795) ai5_sk_left_pane_g1

0x98e6,	// (0x00009d71) ai5_sk_left_pane_g2

0x98ee,	// (0x00009d79) ai5_sk_left_pane_g3

0x98f6,	// (0x00009d81) ai5_sk_left_pane_g4

0x0003,

0xfe71,	// (0x000102fc) ai5_sk_left_pane_g

0x98fe,	// (0x00009d89) ai5_sk_left_pane_t1

0x3302,	// (0x0000378d) ai5_sk_right_pane_g1

0x990c,	// (0x00009d97) ai5_sk_right_pane_g2

0x9914,	// (0x00009d9f) ai5_sk_right_pane_g3

0x991c,	// (0x00009da7) ai5_sk_right_pane_g4

0x0003,

0xfe7a,	// (0x00010305) ai5_sk_right_pane_g

0x9924,	// (0x00009daf) ai5_sk_right_pane_t1

0x3302,	// (0x0000378d) ai5_sk_middle_pane_g1

0x330a,	// (0x00003795) ai5_sk_middle_pane_g2

0x3322,	// (0x000037ad) ai5_sk_middle_pane_g3

0x9914,	// (0x00009d9f) ai5_sk_middle_pane_g4

0x98ee,	// (0x00009d79) ai5_sk_middle_pane_g5

0x9932,	// (0x00009dbd) ai5_sk_middle_pane_g6

0xee5a,	// (0x0000f2e5) ai5_sk_middle_pane_g7

0x0006,

0xfe83,	// (0x0001030e) ai5_sk_middle_pane_g

0xc707,	// (0x0000cb92) aid_touch_area_size_lc0_ParamLimits

0xc707,	// (0x0000cb92) aid_touch_area_size_lc0

0x6986,	// (0x00006e11) cell_hwr_candidate_pane_t1_ParamLimits

0x2d8d,	// (0x00003218) aid_touch_navi_pane

0xc9ac,	// (0x0000ce37) status_dt_navi_pane_ParamLimits

0xc9ac,	// (0x0000ce37) status_dt_navi_pane

0xc9c4,	// (0x0000ce4f) status_dt_sta_pane_ParamLimits

0xc9c4,	// (0x0000ce4f) status_dt_sta_pane

0xee62,	// (0x0000f2ed) dt_sta_controll_pane

0xee6f,	// (0x0000f2fa) dt_sta_indi_pane

0xee7c,	// (0x0000f307) dt_sta_title_pane

0x03b8,	// (0x00000843) bg_dt_sta_indi_pane_ParamLimits

0x03b8,	// (0x00000843) bg_dt_sta_indi_pane

0xee8e,	// (0x0000f319) dt_sta_battery_pane

0xee96,	// (0x0000f321) dt_sta_indi_pane_g1

0xee9f,	// (0x0000f32a) dt_sta_indi_pane_g2

0xeea8,	// (0x0000f333) dt_sta_indi_pane_g3

0x0002,

0xfe92,	// (0x0001031d) dt_sta_indi_pane_g

0xeeb1,	// (0x0000f33c) dt_sta_signal_pane

0x0f50,	// (0x000013db) bg_dt_sta_title_pane_ParamLimits

0x0f50,	// (0x000013db) bg_dt_sta_title_pane

0xeeba,	// (0x0000f345) dt_sta_title_pane_g1

0xeec2,	// (0x0000f34d) dt_sta_title_pane_t1_ParamLimits

0xeec2,	// (0x0000f34d) dt_sta_title_pane_t1

0xf310,	// (0x0000f79b) bg_dt_sta_control_pane

0xeed7,	// (0x0000f362) dt_sta_controll_pane_g1

0xeee0,	// (0x0000f36b) bg_dt_sta_title_pane_g1

0xeee9,	// (0x0000f374) bg_dt_sta_title_pane_g2

0xeef2,	// (0x0000f37d) bg_dt_sta_title_pane_g3

0x0002,

0xfe99,	// (0x00010324) bg_dt_sta_title_pane_g

0x60fb,	// (0x00006586) bg_dt_sta_indi_pane_g1

0x99e0,	// (0x00009e6b) dt_sta_signal_pane_g1

0x99e8,	// (0x00009e73) dt_sta_signal_pane_g2

0x0001,

0xfea0,	// (0x0001032b) dt_sta_signal_pane_g

0x99f0,	// (0x00009e7b) dt_sta_battery_pane_g1

0x99f9,	// (0x00009e84) dt_sta_battery_pane_t1

0x60fb,	// (0x00006586) bg_dt_sta_control_pane_g1

0x1ab1,	// (0x00001f3c) fep_china_uni_eep_pane

0x1ab9,	// (0x00001f44) fep_china_uni_entry_pane_ParamLimits

0x1ac9,	// (0x00001f54) popup_fep_china_uni_window_g1_ParamLimits

0x1ad9,	// (0x00001f64) popup_fep_china_uni_window_g2_ParamLimits

0x1ad9,	// (0x00001f64) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x0000fbbb) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x0000fbbb) popup_fep_china_uni_window_g

0x9a08,	// (0x00009e93) fep_china_uni_eep_pane_g1

0x9a10,	// (0x00009e9b) fep_china_uni_eep_pane_t1

0x94f0,	// (0x0000997b) aid_touch_area_size_smil_player

0x2ee5,	// (0x00003370) lc0_clock_pane

0x30e3,	// (0x0000356e) status_pane_g5_ParamLimits

0x30e3,	// (0x0000356e) status_pane_g5

0xc167,	// (0x0000c5f2) popup_keymap_window

0x30a1,	// (0x0000352c) status_icon_pane

0xecc8,	// (0x0000f153) cell_ai5_widget_pane_g3_ParamLimits

0xece7,	// (0x0000f172) cell_ai5_widget_pane_g4_ParamLimits

0xecf3,	// (0x0000f17e) cell_ai5_widget_pane_g5_ParamLimits

0xed17,	// (0x0000f1a2) cell_ai5_widget_pane_g8_ParamLimits

0xed17,	// (0x0000f1a2) cell_ai5_widget_pane_g8

0xed2b,	// (0x0000f1b6) cell_ai5_widget_pane_g9_ParamLimits

0xed2b,	// (0x0000f1b6) cell_ai5_widget_pane_g9

0xed3f,	// (0x0000f1ca) cell_ai5_widget_pane_g10_ParamLimits

0xed3f,	// (0x0000f1ca) cell_ai5_widget_pane_g10

0x9a1f,	// (0x00009eaa) status_icon_pane_g1

0xf310,	// (0x0000f79b) bg_popup_sub_pane_cp13

0x9a27,	// (0x00009eb2) popup_keymap_window_t1

0xbe5a,	// (0x0000c2e5) control_pane_g6_ParamLimits

0xbe5a,	// (0x0000c2e5) control_pane_g6

0xbe67,	// (0x0000c2f2) control_pane_g7_ParamLimits

0xbe67,	// (0x0000c2f2) control_pane_g7

0xbe74,	// (0x0000c2ff) control_pane_g8_ParamLimits

0xbe74,	// (0x0000c2ff) control_pane_g8

0xee62,	// (0x0000f2ed) dt_sta_controll_pane_ParamLimits

0xee6f,	// (0x0000f2fa) dt_sta_indi_pane_ParamLimits

0xee7c,	// (0x0000f307) dt_sta_title_pane_ParamLimits

0x08ed,	// (0x00000d78) aid_size_touch_scroll_bar_cale

0xf4b5,	// (0x0000f940) popup_discreet_window_ParamLimits

0xf4b5,	// (0x0000f940) popup_discreet_window

0xb089,	// (0x0000b514) popup_sk_window

0x3afe,	// (0x00003f89) bg_popup_sub_pane_cp28_ParamLimits

0x3afe,	// (0x00003f89) bg_popup_sub_pane_cp28

0x9a35,	// (0x00009ec0) popup_discreet_window_g1_ParamLimits

0x9a35,	// (0x00009ec0) popup_discreet_window_g1

0x9a55,	// (0x00009ee0) popup_discreet_window_t1_ParamLimits

0x9a55,	// (0x00009ee0) popup_discreet_window_t1

0x9a73,	// (0x00009efe) popup_discreet_window_t2_ParamLimits

0x9a73,	// (0x00009efe) popup_discreet_window_t2

0x0002,

0xfea5,	// (0x00010330) popup_discreet_window_t_ParamLimits

0xfea5,	// (0x00010330) popup_discreet_window_t

0x9ac5,	// (0x00009f50) popup_sk_window_g1

0x9acf,	// (0x00009f5a) popup_sk_window_g2

0x0001,

0xfeac,	// (0x00010337) popup_sk_window_g

0x9ad9,	// (0x00009f64) popup_sk_window_t1

0x9ae7,	// (0x00009f72) popup_sk_window_t1_copy1

0xecb8,	// (0x0000f143) cell_ai5_widget_pane_g2_ParamLimits

0xedeb,	// (0x0000f276) cell_ai5_widget_pane_t9_ParamLimits

0xedeb,	// (0x0000f276) cell_ai5_widget_pane_t9

0xf310,	// (0x0000f79b) main_fep_fshwr2_pane

0xeefb,	// (0x0000f386) aid_fshwr2_btn_pane

0xef03,	// (0x0000f38e) aid_fshwr2_syb_pane

0xef0b,	// (0x0000f396) aid_fshwr2_txt_pane

0xef13,	// (0x0000f39e) fshwr2_func_candi_pane

0xef1d,	// (0x0000f3a8) fshwr2_hwr_syb_pane

0xef29,	// (0x0000f3b4) fshwr2_icf_pane

0xf310,	// (0x0000f79b) fshwr2_icf_bg_pane

0xef33,	// (0x0000f3be) fshwr2_icf_pane_t1_ParamLimits

0xef33,	// (0x0000f3be) fshwr2_icf_pane_t1

0x60fb,	// (0x00006586) fshwr2_func_candi_pane_g1

0x9b5a,	// (0x00009fe5) fshwr2_func_candi_row_pane_ParamLimits

0x9b5a,	// (0x00009fe5) fshwr2_func_candi_row_pane

0xef4b,	// (0x0000f3d6) cell_fshwr2_syb_pane_ParamLimits

0xef4b,	// (0x0000f3d6) cell_fshwr2_syb_pane

0x65af,	// (0x00006a3a) fshwr2_hwr_syb_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) fshwr2_hwr_syb_pane_g1

0xf310,	// (0x0000f79b) bg_popup_call_pane_cp01

0x9b85,	// (0x0000a010) fshwr2_func_candi_cell_pane_ParamLimits

0x9b85,	// (0x0000a010) fshwr2_func_candi_cell_pane

0x9bb7,	// (0x0000a042) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9bb7,	// (0x0000a042) fshwr2_func_candi_cell_bg_pane

0x9bd1,	// (0x0000a05c) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9bd1,	// (0x0000a05c) fshwr2_func_candi_cell_pane_g1

0x9bf1,	// (0x0000a07c) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9bf1,	// (0x0000a07c) fshwr2_func_candi_cell_pane_t1

0xf310,	// (0x0000f79b) bg_button_pane_cp08

0x2183,	// (0x0000260e) cell_fshwr2_syb_bg_pane

0xef64,	// (0x0000f3ef) cell_fshwr2_syb_bg_pane_g1

0xef6c,	// (0x0000f3f7) cell_fshwr2_syb_bg_pane_t1

0x0f50,	// (0x000013db) main_tmo_pane

0xced4,	// (0x0000d35f) uni_indicator_pane_g1_ParamLimits

0xcee9,	// (0x0000d374) uni_indicator_pane_g2_ParamLimits

0xcefe,	// (0x0000d389) uni_indicator_pane_g3_ParamLimits

0xcf14,	// (0x0000d39f) uni_indicator_pane_g4_ParamLimits

0xcf14,	// (0x0000d39f) uni_indicator_pane_g4

0xcf28,	// (0x0000d3b3) uni_indicator_pane_g5_ParamLimits

0xcf28,	// (0x0000d3b3) uni_indicator_pane_g5

0xcf3c,	// (0x0000d3c7) uni_indicator_pane_g6_ParamLimits

0xcf3c,	// (0x0000d3c7) uni_indicator_pane_g6

0xf921,	// (0x0000fdac) uni_indicator_pane_g_ParamLimits

0xdc95,	// (0x0000e120) popup_tmo_note_window_ParamLimits

0xdc95,	// (0x0000e120) popup_tmo_note_window

0xf310,	// (0x0000f79b) fshwr2_bg_pane

0x9be2,	// (0x0000a06d) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9be2,	// (0x0000a06d) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb1,	// (0x0001033c) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb1,	// (0x0001033c) fshwr2_func_candi_cell_pane_g

0x60fb,	// (0x00006586) bg_popup_window_pane_cp01

0x9c1b,	// (0x0000a0a6) bg_popup_window_pane_g1_cp01

0x9c24,	// (0x0000a0af) bg_popup_window_pane_cp22_ParamLimits

0x9c24,	// (0x0000a0af) bg_popup_window_pane_cp22

0x9c32,	// (0x0000a0bd) listscroll_tmo_link_pane_ParamLimits

0x9c32,	// (0x0000a0bd) listscroll_tmo_link_pane

0x9c72,	// (0x0000a0fd) popup_tmo_note_window_g1_ParamLimits

0x9c72,	// (0x0000a0fd) popup_tmo_note_window_g1

0x9c7f,	// (0x0000a10a) tmo_note_info_pane_ParamLimits

0x9c7f,	// (0x0000a10a) tmo_note_info_pane

0xef7b,	// (0x0000f406) list_tmo_note_info_pane_g1_ParamLimits

0xef7b,	// (0x0000f406) list_tmo_note_info_pane_g1

0x9cb0,	// (0x0000a13b) list_tmo_note_info_pane_g2_ParamLimits

0x9cb0,	// (0x0000a13b) list_tmo_note_info_pane_g2

0x0001,

0xfeb6,	// (0x00010341) list_tmo_note_info_pane_g_ParamLimits

0xfeb6,	// (0x00010341) list_tmo_note_info_pane_g

0x9ccc,	// (0x0000a157) list_tmo_note_info_text_pane_ParamLimits

0x9ccc,	// (0x0000a157) list_tmo_note_info_text_pane

0x9d51,	// (0x0000a1dc) list_tmo_link_pane

0x9d5e,	// (0x0000a1e9) scroll_pane_cp20

0x9d6b,	// (0x0000a1f6) list_single_tmo_link_pane_ParamLimits

0x9d6b,	// (0x0000a1f6) list_single_tmo_link_pane

0x9d7b,	// (0x0000a206) list_single_tmo_link_pane_t1

0x9d89,	// (0x0000a214) list_tmo_note_info_text_pane_t1_ParamLimits

0x9d89,	// (0x0000a214) list_tmo_note_info_text_pane_t1

0xba0e,	// (0x0000be99) aid_size_touch_scroll_bar_cp01_ParamLimits

0xba0e,	// (0x0000be99) aid_size_touch_scroll_bar_cp01

0xb93d,	// (0x0000bdc8) aid_size_touch_slider_marker

0xb079,	// (0x0000b504) popup_settings_window_ParamLimits

0xb079,	// (0x0000b504) popup_settings_window

0x2738,	// (0x00002bc3) popup_candi_list_indi_window

0x2d8d,	// (0x00003218) aid_touch_navi_pane_ParamLimits

0x7fb7,	// (0x00008442) rs_clock_indi_pane

0x7fc0,	// (0x0000844b) sctrl_sk_bottom_pane_ParamLimits

0x7fd1,	// (0x0000845c) sctrl_sk_top_pane_ParamLimits

0x8815,	// (0x00008ca0) popup_fep_tooltip_window

0x9631,	// (0x00009abc) aid_size_cell_widget_grid_ParamLimits

0xecac,	// (0x0000f137) cell_ai5_widget_pane_g1_ParamLimits

0xecac,	// (0x0000f137) cell_ai5_widget_pane_g1

0xecff,	// (0x0000f18a) cell_ai5_widget_pane_g6_ParamLimits

0xed0b,	// (0x0000f196) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe34,	// (0x000102bf) cell_ai5_widget_pane_g_ParamLimits

0xfe34,	// (0x000102bf) cell_ai5_widget_pane_g

0xee0f,	// (0x0000f29a) cell_ai5_widget_pane_t10_ParamLimits

0xee0f,	// (0x0000f29a) cell_ai5_widget_pane_t10

0xee25,	// (0x0000f2b0) grid_ai5_widget_pane_ParamLimits

0x98a8,	// (0x00009d33) cell_contacts_ai5_widget_pane_ParamLimits

0x98a8,	// (0x00009d33) cell_contacts_ai5_widget_pane

0x9a88,	// (0x00009f13) popup_discreet_window_t3_ParamLimits

0x9a88,	// (0x00009f13) popup_discreet_window_t3

0x9b2b,	// (0x00009fb6) popup_fshwr2_char_preview_window_ParamLimits

0x9b2b,	// (0x00009fb6) popup_fshwr2_char_preview_window

0xef92,	// (0x0000f41d) tmo_note_info_pane_t1

0xefa7,	// (0x0000f432) tmo_note_info_pane_t2

0xefc0,	// (0x0000f44b) tmo_note_info_pane_t3

0x9d2d,	// (0x0000a1b8) tmo_note_info_pane_t4

0x9d3f,	// (0x0000a1ca) tmo_note_info_pane_t5

0x0004,

0xfebb,	// (0x00010346) tmo_note_info_pane_t

0x9d51,	// (0x0000a1dc) list_tmo_link_pane_ParamLimits

0x9d5e,	// (0x0000a1e9) scroll_pane_cp20_ParamLimits

0xf310,	// (0x0000f79b) bg_popup_fep_char_preview_window_cp01

0x9da2,	// (0x0000a22d) popup_fshwr2_char_preview_window_t1

0x9db0,	// (0x0000a23b) popup_candi_list_indi_window_g1

0x9db9,	// (0x0000a244) bg_cell_contacts_ai5_widget_pane

0x9dc5,	// (0x0000a250) cell_contacts_ai5_widget_pane_g1

0x9dd9,	// (0x0000a264) cell_contacts_ai5_widget_pane_g2

0x9de8,	// (0x0000a273) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec6,	// (0x00010351) cell_contacts_ai5_widget_pane_g

0x9dfb,	// (0x0000a286) cell_contacts_ai5_widget_pane_t1

0x0f50,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf03a,	// (0x0000f4c5) settings_container_pane

0x2183,	// (0x0000260e) listscroll_set_pane_copy1

0x55c8,	// (0x00005a53) scroll_pane_cp121_copy1

0x9e81,	// (0x0000a30c) set_content_pane_copy1

0xf046,	// (0x0000f4d1) aid_height_set_list_copy1_ParamLimits

0xf046,	// (0x0000f4d1) aid_height_set_list_copy1

0x4b01,	// (0x00004f8c) aid_size_parent_copy1_ParamLimits

0x4b01,	// (0x00004f8c) aid_size_parent_copy1

0xf052,	// (0x0000f4dd) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf052,	// (0x0000f4dd) button_value_adjust_pane_cp6_copy1

0x2710,	// (0x00002b9b) list_highlight_pane_cp2_copy1_ParamLimits

0x2710,	// (0x00002b9b) list_highlight_pane_cp2_copy1

0xf066,	// (0x0000f4f1) list_set_pane_copy1_ParamLimits

0xf066,	// (0x0000f4f1) list_set_pane_copy1

0xefd5,	// (0x0000f460) main_pane_set_t1_copy1_ParamLimits

0xefd5,	// (0x0000f460) main_pane_set_t1_copy1

0xf00f,	// (0x0000f49a) main_pane_set_t2_copy1_ParamLimits

0xf00f,	// (0x0000f49a) main_pane_set_t2_copy1

0xf12d,	// (0x0000f5b8) main_pane_set_t3_copy1

0xf13b,	// (0x0000f5c6) main_pane_set_t4_copy1

0xf02e,	// (0x0000f4b9) set_content_pane_g1_copy1_ParamLimits

0xf02e,	// (0x0000f4b9) set_content_pane_g1_copy1

0xf149,	// (0x0000f5d4) setting_code_pane_copy1

0x9f96,	// (0x0000a421) setting_slider_graphic_pane_copy1

0x9f96,	// (0x0000a421) setting_slider_pane_copy1

0x9f96,	// (0x0000a421) setting_text_pane_copy1

0x9fa0,	// (0x0000a42b) setting_volume_pane_copy1

0xf153,	// (0x0000f5de) settings_code_pane_cp2_copy1

0xf15b,	// (0x0000f5e6) settings_code_pane_cp_copy1_ParamLimits

0xf15b,	// (0x0000f5e6) settings_code_pane_cp_copy1

0xf16f,	// (0x0000f5fa) volume_set_pane_copy1

0xf17b,	// (0x0000f606) volume_set_pane_g10_copy1

0xf187,	// (0x0000f612) volume_set_pane_g1_copy1

0xf191,	// (0x0000f61c) volume_set_pane_g2_copy1

0xf19b,	// (0x0000f626) volume_set_pane_g3_copy1

0xf1a5,	// (0x0000f630) volume_set_pane_g4_copy1

0xf1af,	// (0x0000f63a) volume_set_pane_g5_copy1

0xf1b9,	// (0x0000f644) volume_set_pane_g6_copy1

0xf1c3,	// (0x0000f64e) volume_set_pane_g7_copy1

0xf1cd,	// (0x0000f658) volume_set_pane_g8_copy1

0xf1d7,	// (0x0000f662) volume_set_pane_g9_copy1

0x0084,	// (0x0000050f) bg_set_opt_pane_cp_copy1_ParamLimits

0x0084,	// (0x0000050f) bg_set_opt_pane_cp_copy1

0xa037,	// (0x0000a4c2) setting_slider_pane_t1_copy1_ParamLimits

0xa037,	// (0x0000a4c2) setting_slider_pane_t1_copy1

0xf1e1,	// (0x0000f66c) setting_slider_pane_t2_copy1_ParamLimits

0xf1e1,	// (0x0000f66c) setting_slider_pane_t2_copy1

0xf1fb,	// (0x0000f686) setting_slider_pane_t3_copy1_ParamLimits

0xf1fb,	// (0x0000f686) setting_slider_pane_t3_copy1

0xf213,	// (0x0000f69e) slider_set_pane_copy1_ParamLimits

0xf213,	// (0x0000f69e) slider_set_pane_copy1

0x108c,	// (0x00001517) set_opt_bg_pane_g1_copy2

0x1094,	// (0x0000151f) set_opt_bg_pane_g2_copy2

0xa09d,	// (0x0000a528) set_opt_bg_pane_g3_copy2

0x10a4,	// (0x0000152f) set_opt_bg_pane_g4_copy2

0x10ac,	// (0x00001537) set_opt_bg_pane_g5_copy2

0x10b4,	// (0x0000153f) set_opt_bg_pane_g6_copy2

0xf229,	// (0x0000f6b4) set_opt_bg_pane_g7_copy2

0xa0b1,	// (0x0000a53c) set_opt_bg_pane_g8_copy2

0xa0bb,	// (0x0000a546) set_opt_bg_pane_g9_copy2

0xa0c5,	// (0x0000a550) aid_size_touch_slider_mark_copy1_ParamLimits

0xa0c5,	// (0x0000a550) aid_size_touch_slider_mark_copy1

0xa0d9,	// (0x0000a564) slider_set_pane_g1_copy1

0xa0e2,	// (0x0000a56d) slider_set_pane_g2_copy1

0x4a68,	// (0x00004ef3) slider_set_pane_g3_copy1_ParamLimits

0x4a68,	// (0x00004ef3) slider_set_pane_g3_copy1

0x4a7c,	// (0x00004f07) slider_set_pane_g4_copy1_ParamLimits

0x4a7c,	// (0x00004f07) slider_set_pane_g4_copy1

0x4a94,	// (0x00004f1f) slider_set_pane_g5_copy1_ParamLimits

0x4a94,	// (0x00004f1f) slider_set_pane_g5_copy1

0x4a68,	// (0x00004ef3) slider_set_pane_g6_copy1_ParamLimits

0x4a68,	// (0x00004ef3) slider_set_pane_g6_copy1

0xf233,	// (0x0000f6be) slider_set_pane_g7_copy1_ParamLimits

0xf233,	// (0x0000f6be) slider_set_pane_g7_copy1

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp2_copy1

0xa100,	// (0x0000a58b) setting_slider_graphic_pane_g1_copy1

0xf249,	// (0x0000f6d4) setting_slider_graphic_pane_t1_copy1

0xf259,	// (0x0000f6e4) setting_slider_graphic_pane_t2_copy1

0xf269,	// (0x0000f6f4) slider_set_pane_cp_copy1

0xa139,	// (0x0000a5c4) input_focus_pane_cp1_copy1

0xa142,	// (0x0000a5cd) list_set_text_pane_copy1

0xa14a,	// (0x0000a5d5) setting_text_pane_g1_copy1

0x016d,	// (0x000005f8) set_text_pane_t1_copy1

0xa139,	// (0x0000a5c4) input_focus_pane_cp2_copy1

0xa14a,	// (0x0000a5d5) setting_code_pane_g1_copy1

0xf271,	// (0x0000f6fc) setting_code_pane_t1_copy1

0xf27f,	// (0x0000f70a) list_set_graphic_pane_copy1

0xf493,	// (0x0000f91e) bg_set_opt_pane_cp4_copy1

0xbd27,	// (0x0000c1b2) list_set_graphic_pane_g1_copy1_ParamLimits

0xbd27,	// (0x0000c1b2) list_set_graphic_pane_g1_copy1

0xf291,	// (0x0000f71c) list_set_graphic_pane_g2_copy1

0xbd3f,	// (0x0000c1ca) list_set_graphic_pane_t1_copy1_ParamLimits

0xbd3f,	// (0x0000c1ca) list_set_graphic_pane_t1_copy1

0x60fb,	// (0x00006586) rs_clock_indi_pane_g1

0xa194,	// (0x0000a61f) rs_clock_indi_pane_t1

0xa1a2,	// (0x0000a62d) rs_indi_pane

0xa1aa,	// (0x0000a635) rs_indi_pane_g1

0xa1b3,	// (0x0000a63e) rs_indi_pane_g2

0xa1bc,	// (0x0000a647) rs_indi_pane_g3

0x0002,

0xfecd,	// (0x00010358) rs_indi_pane_g

0x2183,	// (0x0000260e) bg_popup_preview_window_pane_cp03

0xa1c5,	// (0x0000a650) popup_fep_tooltip_window_t1

0x737d,	// (0x00007808) popup_note2_window_g2_ParamLimits

0x737d,	// (0x00007808) popup_note2_window_g2

0x0001,

0xfc66,	// (0x000100f1) popup_note2_window_g_ParamLimits

0xfc66,	// (0x000100f1) popup_note2_window_g

0x798c,	// (0x00007e17) bg_popup_sub_pane_cp11_ParamLimits

0x7999,	// (0x00007e24) cell_ai3_links_pane_g1_ParamLimits

0x79b0,	// (0x00007e3b) cell_ai3_links_pane_t1

0x016d,	// (0x000005f8) set_text_pane_t1_copy1_ParamLimits

0x2090,	// (0x0000251b) cell_graphic_popup_pane_cp2_ParamLimits

0x2090,	// (0x0000251b) cell_graphic_popup_pane_cp2

0xa1d3,	// (0x0000a65e) cell_graphic_popup_pane_g1_cp2

0x0700,	// (0x00000b8b) cell_graphic_popup_pane_g2_cp2

0xa1db,	// (0x0000a666) cell_graphic_popup_pane_g3_cp2

0xa1e3,	// (0x0000a66e) cell_graphic_popup_pane_t2_cp2

0x0711,	// (0x00000b9c) grid_highlight_pane_cp3_cp2

0x15f3,	// (0x00001a7e) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x0f50,	// (0x000013db) main_tmo_pane_ParamLimits

0xdc89,	// (0x0000e114) popup_tmo_big_image_note_window

0xec9c,	// (0x0000f127) cell_ai5_widget_list_pane

0xeca4,	// (0x0000f12f) cell_ai5_widget_lrg_icon_pane

0xef92,	// (0x0000f41d) tmo_note_info_pane_t1_ParamLimits

0xefa7,	// (0x0000f432) tmo_note_info_pane_t2_ParamLimits

0xefc0,	// (0x0000f44b) tmo_note_info_pane_t3_ParamLimits

0x9d2d,	// (0x0000a1b8) tmo_note_info_pane_t4_ParamLimits

0x9d3f,	// (0x0000a1ca) tmo_note_info_pane_t5_ParamLimits

0xfebb,	// (0x00010346) tmo_note_info_pane_t_ParamLimits

0xf03a,	// (0x0000f4c5) settings_container_pane_ParamLimits

0xa131,	// (0x0000a5bc) indicator_popup_pane_cp5

0xa131,	// (0x0000a5bc) indicator_popup_pane_cp6

0xf27f,	// (0x0000f70a) list_set_graphic_pane_copy1_ParamLimits

0xf310,	// (0x0000f79b) bg_popup_window_pane_cp23

0xa1f1,	// (0x0000a67c) popup_tmo_big_image_note_window_g1

0xa1fd,	// (0x0000a688) popup_tmo_big_image_note_window_t1

0xa20d,	// (0x0000a698) popup_tmo_big_image_note_window_t2

0xa21d,	// (0x0000a6a8) popup_tmo_big_image_note_window_t3

0x0002,

0xfed4,	// (0x0001035f) popup_tmo_big_image_note_window_t

0xf299,	// (0x0000f724) cell_ai5_widget_lrg_icon_pane_g1

0xf2a1,	// (0x0000f72c) cell_ai5_widget_lrg_icon_pane_t1

0xf2af,	// (0x0000f73a) cell_ai5_widget_list_row_pane_ParamLimits

0xf2af,	// (0x0000f73a) cell_ai5_widget_list_row_pane

0xf2c8,	// (0x0000f753) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf2c8,	// (0x0000f753) cell_ai5_widget_list_row_pane_g1

0xf2d5,	// (0x0000f760) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf2d5,	// (0x0000f760) cell_ai5_widget_list_row_pane_t1

0xf2ed,	// (0x0000f778) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf2ed,	// (0x0000f778) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedb,	// (0x00010366) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedb,	// (0x00010366) cell_ai5_widget_list_row_pane_t

0xf310,	// (0x0000f79b) main_fep_vtchi_ss_pane

0xa293,	// (0x0000a71e) popup_fep_char_pre_window

0xa29b,	// (0x0000a726) popup_fep_ituss_window

0xa2bc,	// (0x0000a747) popup_fep_vkbss_window

0xa2dd,	// (0x0000a768) grid_vkbss_keypad_pane_ParamLimits

0xa2dd,	// (0x0000a768) grid_vkbss_keypad_pane

0xa2ed,	// (0x0000a778) ituss_keypad_pane

0xa305,	// (0x0000a790) aid_vkbss_key_offset_ParamLimits

0xa305,	// (0x0000a790) aid_vkbss_key_offset

0xa311,	// (0x0000a79c) cell_vkbss_key_pane_ParamLimits

0xa311,	// (0x0000a79c) cell_vkbss_key_pane

0xa327,	// (0x0000a7b2) bg_cell_vkbss_key_g1_ParamLimits

0xa327,	// (0x0000a7b2) bg_cell_vkbss_key_g1

0xa333,	// (0x0000a7be) cell_vkbss_key_3p_pane_ParamLimits

0xa333,	// (0x0000a7be) cell_vkbss_key_3p_pane

0xa34d,	// (0x0000a7d8) cell_vkbss_key_g1_ParamLimits

0xa34d,	// (0x0000a7d8) cell_vkbss_key_g1

0xa367,	// (0x0000a7f2) cell_vkbss_key_t1_ParamLimits

0xa367,	// (0x0000a7f2) cell_vkbss_key_t1

0xa392,	// (0x0000a81d) cell_ituss_key_pane_ParamLimits

0xa392,	// (0x0000a81d) cell_ituss_key_pane

0xa3a2,	// (0x0000a82d) bg_cell_ituss_key_g1_ParamLimits

0xa3a2,	// (0x0000a82d) bg_cell_ituss_key_g1

0xa3ae,	// (0x0000a839) cell_ituss_key_pane_g1_ParamLimits

0xa3ae,	// (0x0000a839) cell_ituss_key_pane_g1

0xa3ba,	// (0x0000a845) cell_ituss_key_pane_g2_ParamLimits

0xa3ba,	// (0x0000a845) cell_ituss_key_pane_g2

0x0001,

0xfee0,	// (0x0001036b) cell_ituss_key_pane_g_ParamLimits

0xfee0,	// (0x0001036b) cell_ituss_key_pane_g

0xa3d3,	// (0x0000a85e) cell_ituss_key_t1_ParamLimits

0xa3d3,	// (0x0000a85e) cell_ituss_key_t1

0xa401,	// (0x0000a88c) cell_ituss_key_t2_ParamLimits

0xa401,	// (0x0000a88c) cell_ituss_key_t2

0xa432,	// (0x0000a8bd) cell_ituss_key_t3_ParamLimits

0xa432,	// (0x0000a8bd) cell_ituss_key_t3

0xa463,	// (0x0000a8ee) cell_ituss_key_t4_ParamLimits

0xa463,	// (0x0000a8ee) cell_ituss_key_t4

0x0003,

0xfee5,	// (0x00010370) cell_ituss_key_t_ParamLimits

0xfee5,	// (0x00010370) cell_ituss_key_t

0xa494,	// (0x0000a91f) cell_vkbss_key_3p_pane_g1

0xa49c,	// (0x0000a927) cell_vkbss_key_3p_pane_g2

0xa4a4,	// (0x0000a92f) cell_vkbss_key_3p_pane_g3

0x0002,

0xfeee,	// (0x00010379) cell_vkbss_key_3p_pane_g

0xf310,	// (0x0000f79b) bg_popup_fep_char_preview_window_cp02

0xa4ac,	// (0x0000a937) popup_fep_char_pre_window_t1

0xec92,	// (0x0000f11d) main_ai5_sk_pane

0x9db9,	// (0x0000a244) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9dc5,	// (0x0000a250) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9dd9,	// (0x0000a264) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x9de8,	// (0x0000a273) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec6,	// (0x00010351) cell_contacts_ai5_widget_pane_g_ParamLimits

0x9dfb,	// (0x0000a286) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x0f50,	// (0x000013db) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2ff,	// (0x0000f78a) main_ai5_sk_pane_g1

0x3936,	// (0x00003dc1) popup_query_code_window_g1

0xa2b1,	// (0x0000a73c) popup_fep_vkb_icf_pane

0xa2c7,	// (0x0000a752) popup_fep_vtchi_icf_pane

0x0f50,	// (0x000013db) bg_icf_pane

0xa4d3,	// (0x0000a95e) list_vkb_icf_pane

0x0f50,	// (0x000013db) bg_icf_pane_cp01

0xa4eb,	// (0x0000a976) vtchi_icf_list_pane

0xa4fb,	// (0x0000a986) list_vkb_icf_pane_t1_ParamLimits

0xa4fb,	// (0x0000a986) list_vkb_icf_pane_t1

0xa512,	// (0x0000a99d) vtchi_icf_list_pane_t1_ParamLimits

0xa512,	// (0x0000a99d) vtchi_icf_list_pane_t1

0xa29b,	// (0x0000a726) popup_fep_ituss_window_ParamLimits

0xa2c7,	// (0x0000a752) popup_fep_vtchi_icf_pane_ParamLimits

0xa2ed,	// (0x0000a778) ituss_keypad_pane_ParamLimits

0xa2fc,	// (0x0000a787) ituss_sks_pane

0x0f50,	// (0x000013db) bg_icf_pane_ParamLimits

0xa4c4,	// (0x0000a94f) icf_edit_indi_pane_ParamLimits

0xa4c4,	// (0x0000a94f) icf_edit_indi_pane

0xa4d3,	// (0x0000a95e) list_vkb_icf_pane_ParamLimits

0x0f50,	// (0x000013db) bg_icf_pane_cp01_ParamLimits

0xa4df,	// (0x0000a96a) icf_edit_indi_pane_cp01_ParamLimits

0xa4df,	// (0x0000a96a) icf_edit_indi_pane_cp01

0xa4f3,	// (0x0000a97e) vtchi_query_pane

0x65af,	// (0x00006a3a) icf_edit_indi_pane_g1_ParamLimits

0x65af,	// (0x00006a3a) icf_edit_indi_pane_g1

0xa52b,	// (0x0000a9b6) icf_edit_indi_pane_g2_ParamLimits

0xa52b,	// (0x0000a9b6) icf_edit_indi_pane_g2

0x0001,

0xfef5,	// (0x00010380) icf_edit_indi_pane_g_ParamLimits

0xfef5,	// (0x00010380) icf_edit_indi_pane_g

0xa537,	// (0x0000a9c2) icf_edit_indi_pane_t1

0xa545,	// (0x0000a9d0) bg_input_focus_pane_cp042

0x08e4,	// (0x00000d6f) vtchi_button_pane

0xa54e,	// (0x0000a9d9) vtchi_query_pane_t1

0xa55c,	// (0x0000a9e7) vtchi_query_pane_t2

0xa56a,	// (0x0000a9f5) vtchi_query_pane_t3

0x0002,

0xfefa,	// (0x00010385) vtchi_query_pane_t

0xf310,	// (0x0000f79b) bg_button_pane_cp13

0xa578,	// (0x0000aa03) vtchi_button_pane_g1

0x8336,	// (0x000087c1) ituss_sks_pane_g1

0xa580,	// (0x0000aa0b) ituss_sks_pane_g2

0x0001,

0xff01,	// (0x0001038c) ituss_sks_pane_g

0xa589,	// (0x0000aa14) ituss_sks_pane_t1

0xa597,	// (0x0000aa22) ituss_sks_pane_t2

0x0001,

0xff06,	// (0x00010391) ituss_sks_pane_t

0x5afb,	// (0x00005f86) indicator_nsta_pane_cp_g1

0x5b04,	// (0x00005f8f) indicator_nsta_pane_cp_g2

0x5b0c,	// (0x00005f97) indicator_nsta_pane_cp_g3

0x5b14,	// (0x00005f9f) indicator_nsta_pane_cp_g4

0x5b1c,	// (0x00005fa7) indicator_nsta_pane_cp_g5

0x5b24,	// (0x00005faf) indicator_nsta_pane_cp_g6

0x0005,

0xfab0,	// (0x0000ff3b) indicator_nsta_pane_cp_g

0xea4d,	// (0x0000eed8) cell_graphic2_pane_t2_ParamLimits

0xea4d,	// (0x0000eed8) cell_graphic2_pane_t2

0x0001,

0xfdbd,	// (0x00010248) cell_graphic2_pane_t_ParamLimits

0xfdbd,	// (0x00010248) cell_graphic2_pane_t

0xea83,	// (0x0000ef0e) cell_graphic2_control_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Normal

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pqp_av_qvga_prt + 0x0000f119 };

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
0x1dfe,	// (0x00010f17) Screen

0x1e10,	// (0x00010f29) application_window_ParamLimits

0x1e10,	// (0x00010f29) application_window

0x1e28,	// (0x00010f41) screen_g1

0x1e32,	// (0x00010f4b) area_bottom_pane_ParamLimits

0x1e32,	// (0x00010f4b) area_bottom_pane

0x1e97,	// (0x00010fb0) area_top_pane_ParamLimits

0x1e97,	// (0x00010fb0) area_top_pane

0xccba,	// (0x0001bdd3) main_pane_ParamLimits

0xccba,	// (0x0001bdd3) main_pane

0x1f0f,	// (0x00011028) misc_graphics

0x3eab,	// (0x00012fc4) battery_pane_ParamLimits

0x3eab,	// (0x00012fc4) battery_pane

0x4bd0,	// (0x00013ce9) bg_status_flat_pane_g8

0x4bd8,	// (0x00013cf1) bg_status_flat_pane_g9

0x3f66,	// (0x0001307f) context_pane_ParamLimits

0x3f66,	// (0x0001307f) context_pane

0x407d,	// (0x00013196) navi_pane_ParamLimits

0x407d,	// (0x00013196) navi_pane

0x40fa,	// (0x00013213) signal_pane_ParamLimits

0x40fa,	// (0x00013213) signal_pane

0x0008,

0xf84f,	// (0x0001e968) bg_status_flat_pane_g

0x4163,	// (0x0001327c) status_pane_g1_ParamLimits

0x4163,	// (0x0001327c) status_pane_g1

0x416f,	// (0x00013288) status_pane_g2_ParamLimits

0x416f,	// (0x00013288) status_pane_g2

0x417b,	// (0x00013294) status_pane_g3_ParamLimits

0x417b,	// (0x00013294) status_pane_g3

0x0004,

0xf77b,	// (0x0001e894) status_pane_g_ParamLimits

0xf77b,	// (0x0001e894) status_pane_g

0x41ad,	// (0x000132c6) title_pane_ParamLimits

0x41ad,	// (0x000132c6) title_pane

0x41ea,	// (0x00013303) uni_indicator_pane_ParamLimits

0x41ea,	// (0x00013303) uni_indicator_pane

0x3dc1,	// (0x00012eda) bg_list_pane_ParamLimits

0x3dc1,	// (0x00012eda) bg_list_pane

0xc38a,	// (0x0001b4a3) find_pane

0x3de9,	// (0x00012f02) listscroll_app_pane_ParamLimits

0x3de9,	// (0x00012f02) listscroll_app_pane

0x3df5,	// (0x00012f0e) listscroll_form_pane

0xc392,	// (0x0001b4ab) listscroll_gen_pane_ParamLimits

0xc392,	// (0x0001b4ab) listscroll_gen_pane

0xd4b1,	// (0x0001c5ca) listscroll_set_pane

0x3034,	// (0x0001214d) main_idle_act_pane

0x3ad5,	// (0x00012bee) main_idle_trad_pane

0x3ad5,	// (0x00012bee) main_list_empty_pane

0x3e24,	// (0x00012f3d) main_midp_pane

0x3e30,	// (0x00012f49) main_pane_g1_ParamLimits

0x3e30,	// (0x00012f49) main_pane_g1

0xd4b9,	// (0x0001c5d2) popup_ai_message_window_ParamLimits

0xd4b9,	// (0x0001c5d2) popup_ai_message_window

0xd54f,	// (0x0001c668) popup_fep_china_uni_window_ParamLimits

0xd54f,	// (0x0001c668) popup_fep_china_uni_window

0xd58d,	// (0x0001c6a6) popup_fep_japan_candidate_window_ParamLimits

0xd58d,	// (0x0001c6a6) popup_fep_japan_candidate_window

0xd5ab,	// (0x0001c6c4) popup_fep_japan_predictive_window_ParamLimits

0xd5ab,	// (0x0001c6c4) popup_fep_japan_predictive_window

0xd5d7,	// (0x0001c6f0) popup_find_window

0xd5e4,	// (0x0001c6fd) popup_grid_graphic_window_ParamLimits

0xd5e4,	// (0x0001c6fd) popup_grid_graphic_window

0xd602,	// (0x0001c71b) popup_large_graphic_colour_window

0xd621,	// (0x0001c73a) popup_menu_window_ParamLimits

0xd621,	// (0x0001c73a) popup_menu_window

0xd759,	// (0x0001c872) popup_note_image_window

0xd747,	// (0x0001c860) popup_note_wait_window_ParamLimits

0xd747,	// (0x0001c860) popup_note_wait_window

0xd747,	// (0x0001c860) popup_note_window_ParamLimits

0xd747,	// (0x0001c860) popup_note_window

0xd7ad,	// (0x0001c8c6) popup_query_code_window_ParamLimits

0xd7ad,	// (0x0001c8c6) popup_query_code_window

0xd7bf,	// (0x0001c8d8) popup_query_data_code_window_ParamLimits

0xd7bf,	// (0x0001c8d8) popup_query_data_code_window

0xd7d4,	// (0x0001c8ed) popup_query_data_window_ParamLimits

0xd7d4,	// (0x0001c8ed) popup_query_data_window

0xd7ea,	// (0x0001c903) popup_query_sat_info_window_ParamLimits

0xd7ea,	// (0x0001c903) popup_query_sat_info_window

0xd81b,	// (0x0001c934) popup_snote_single_graphic_window_ParamLimits

0xd81b,	// (0x0001c934) popup_snote_single_graphic_window

0xd81b,	// (0x0001c934) popup_snote_single_text_window_ParamLimits

0xd81b,	// (0x0001c934) popup_snote_single_text_window

0xd82e,	// (0x0001c947) popup_sub_window_general

0xd932,	// (0x0001ca4b) popup_window_general_ParamLimits

0xd932,	// (0x0001ca4b) popup_window_general

0x3e46,	// (0x00012f5f) power_save_pane

0xd34d,	// (0x0001c466) control_pane_g1_ParamLimits

0xd34d,	// (0x0001c466) control_pane_g1

0xd36e,	// (0x0001c487) control_pane_g2_ParamLimits

0xd36e,	// (0x0001c487) control_pane_g2

0x3d8c,	// (0x00012ea5) control_pane_g3_ParamLimits

0x3d8c,	// (0x00012ea5) control_pane_g3

0x0007,

0xf763,	// (0x0001e87c) control_pane_g_ParamLimits

0xf763,	// (0x0001e87c) control_pane_g

0xd3b0,	// (0x0001c4c9) control_pane_t1_ParamLimits

0xd3b0,	// (0x0001c4c9) control_pane_t1

0xd402,	// (0x0001c51b) control_pane_t2_ParamLimits

0xd402,	// (0x0001c51b) control_pane_t2

0x0002,

0xf774,	// (0x0001e88d) control_pane_t_ParamLimits

0xf774,	// (0x0001e88d) control_pane_t

0x3cb3,	// (0x00012dcc) navi_navi_volume_pane_cp1

0x3cbb,	// (0x00012dd4) status_small_icon_pane

0x3cc3,	// (0x00012ddc) status_small_pane_g1_ParamLimits

0x3cc3,	// (0x00012ddc) status_small_pane_g1

0x3cf7,	// (0x00012e10) status_small_pane_g2_ParamLimits

0x3cf7,	// (0x00012e10) status_small_pane_g2

0x3d03,	// (0x00012e1c) status_small_pane_g3_ParamLimits

0x3d03,	// (0x00012e1c) status_small_pane_g3

0x3d0f,	// (0x00012e28) status_small_pane_g4_ParamLimits

0x3d0f,	// (0x00012e28) status_small_pane_g4

0x3d1b,	// (0x00012e34) status_small_pane_g5_ParamLimits

0x3d1b,	// (0x00012e34) status_small_pane_g5

0x3d27,	// (0x00012e40) status_small_pane_g6_ParamLimits

0x3d27,	// (0x00012e40) status_small_pane_g6

0x0007,

0xf752,	// (0x0001e86b) status_small_pane_g_ParamLimits

0xf752,	// (0x0001e86b) status_small_pane_g

0x3d56,	// (0x00012e6f) status_small_pane_t1

0x3d78,	// (0x00012e91) status_small_wait_pane_ParamLimits

0x3d78,	// (0x00012e91) status_small_wait_pane

0x3526,	// (0x0001263f) aid_levels_signal_ParamLimits

0x3526,	// (0x0001263f) aid_levels_signal

0x3537,	// (0x00012650) signal_pane_g1_ParamLimits

0x3537,	// (0x00012650) signal_pane_g1

0x354d,	// (0x00012666) signal_pane_g2_ParamLimits

0x354d,	// (0x00012666) signal_pane_g2

0x0003,

0xf6e3,	// (0x0001e7fc) signal_pane_g_ParamLimits

0xf6e3,	// (0x0001e7fc) signal_pane_g

0x3588,	// (0x000126a1) context_pane_g1

0x1f19,	// (0x00011032) title_pane_g1

0x1f4f,	// (0x00011068) title_pane_t1

0x1fb7,	// (0x000110d0) title_pane_t2

0x1fdd,	// (0x000110f6) title_pane_t3

0x0002,

0xf532,	// (0x0001e64b) title_pane_t

0x4200,	// (0x00013319) aid_levels_battery_ParamLimits

0x4200,	// (0x00013319) aid_levels_battery

0x4213,	// (0x0001332c) battery_pane_g1_ParamLimits

0x4213,	// (0x0001332c) battery_pane_g1

0x4228,	// (0x00013341) battery_pane_g2_ParamLimits

0x4228,	// (0x00013341) battery_pane_g2

0x0001,

0xf786,	// (0x0001e89f) battery_pane_g_ParamLimits

0xf786,	// (0x0001e89f) battery_pane_g

0x54b9,	// (0x000145d2) uni_indicator_pane_g1

0x54cd,	// (0x000145e6) uni_indicator_pane_g2

0x54e2,	// (0x000145fb) uni_indicator_pane_g3

0x0005,

0xf8f7,	// (0x0001ea10) uni_indicator_pane_g

0x2f61,	// (0x0001207a) navi_icon_pane_ParamLimits

0x2f61,	// (0x0001207a) navi_icon_pane

0x1f0f,	// (0x00011028) navi_midp_pane

0x1f0f,	// (0x00011028) navi_navi_pane

0x2f61,	// (0x0001207a) navi_text_pane_ParamLimits

0x2f61,	// (0x0001207a) navi_text_pane

0x1e28,	// (0x00010f41) status_small_wait_pane_g1

0x2451,	// (0x0001156a) status_small_wait_pane_g2

0x0001,

0xf8f2,	// (0x0001ea0b) status_small_wait_pane_g

0x51ec,	// (0x00014305) navi_navi_icon_text_pane

0x5206,	// (0x0001431f) navi_navi_pane_g1_ParamLimits

0x5206,	// (0x0001431f) navi_navi_pane_g1

0x51f4,	// (0x0001430d) navi_navi_pane_g2_ParamLimits

0x51f4,	// (0x0001430d) navi_navi_pane_g2

0x0001,

0xf8c0,	// (0x0001e9d9) navi_navi_pane_g_ParamLimits

0xf8c0,	// (0x0001e9d9) navi_navi_pane_g

0x5218,	// (0x00014331) navi_navi_tabs_pane

0x51ec,	// (0x00014305) navi_navi_text_pane

0x51ec,	// (0x00014305) navi_navi_volume_pane

0x51c8,	// (0x000142e1) navi_text_pane_t1

0x51bc,	// (0x000142d5) navi_icon_pane_g1

0x5110,	// (0x00014229) navi_navi_text_pane_t1

0xdb99,	// (0x0001ccb2) navi_navi_volume_pane_g1

0xdba1,	// (0x0001ccba) volume_small_pane

0x5076,	// (0x0001418f) navi_navi_icon_text_pane_g1

0x507e,	// (0x00014197) navi_navi_icon_text_pane_t1

0x4c48,	// (0x00013d61) navi_tabs_2_long_pane

0x4c48,	// (0x00013d61) navi_tabs_2_pane

0x4c48,	// (0x00013d61) navi_tabs_3_long_pane

0x4c48,	// (0x00013d61) navi_tabs_3_pane

0x4c48,	// (0x00013d61) navi_tabs_4_pane

0xdb79,	// (0x0001cc92) tabs_2_active_pane_ParamLimits

0xdb79,	// (0x0001cc92) tabs_2_active_pane

0xdb89,	// (0x0001cca2) tabs_2_passive_pane_ParamLimits

0xdb89,	// (0x0001cca2) tabs_2_passive_pane

0xdb47,	// (0x0001cc60) tabs_3_active_pane_ParamLimits

0xdb47,	// (0x0001cc60) tabs_3_active_pane

0xdb57,	// (0x0001cc70) tabs_3_passive_pane_ParamLimits

0xdb57,	// (0x0001cc70) tabs_3_passive_pane

0xdb68,	// (0x0001cc81) tabs_3_passive_pane_cp_ParamLimits

0xdb68,	// (0x0001cc81) tabs_3_passive_pane_cp

0xdb03,	// (0x0001cc1c) tabs_4_active_pane_ParamLimits

0xdb03,	// (0x0001cc1c) tabs_4_active_pane

0xdb14,	// (0x0001cc2d) tabs_4_passive_pane_ParamLimits

0xdb14,	// (0x0001cc2d) tabs_4_passive_pane

0xdb25,	// (0x0001cc3e) tabs_4_passive_pane_cp_ParamLimits

0xdb25,	// (0x0001cc3e) tabs_4_passive_pane_cp

0xdb36,	// (0x0001cc4f) tabs_4_passive_pane_cp2_ParamLimits

0xdb36,	// (0x0001cc4f) tabs_4_passive_pane_cp2

0xdae3,	// (0x0001cbfc) tabs_2_long_active_pane_ParamLimits

0xdae3,	// (0x0001cbfc) tabs_2_long_active_pane

0xdaf3,	// (0x0001cc0c) tabs_2_long_passive_pane_ParamLimits

0xdaf3,	// (0x0001cc0c) tabs_2_long_passive_pane

0xdaae,	// (0x0001cbc7) tabs_3_long_active_pane_ParamLimits

0xdaae,	// (0x0001cbc7) tabs_3_long_active_pane

0xdabf,	// (0x0001cbd8) tabs_3_long_passive_pane_ParamLimits

0xdabf,	// (0x0001cbd8) tabs_3_long_passive_pane

0xdad2,	// (0x0001cbeb) tabs_3_long_passive_pane_cp_ParamLimits

0xdad2,	// (0x0001cbeb) tabs_3_long_passive_pane_cp

0xda54,	// (0x0001cb6d) volume_small_pane_g1

0xda5d,	// (0x0001cb76) volume_small_pane_g2

0xda66,	// (0x0001cb7f) volume_small_pane_g3

0xda6f,	// (0x0001cb88) volume_small_pane_g4

0xda78,	// (0x0001cb91) volume_small_pane_g5

0xda81,	// (0x0001cb9a) volume_small_pane_g6

0xda8a,	// (0x0001cba3) volume_small_pane_g7

0xda93,	// (0x0001cbac) volume_small_pane_g8

0xda9c,	// (0x0001cbb5) volume_small_pane_g9

0xdaa5,	// (0x0001cbbe) volume_small_pane_g10

0x0009,

0xf88c,	// (0x0001e9a5) volume_small_pane_g

0x1fef,	// (0x00011108) bg_active_tab_pane_cp2_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp2

0x1ffd,	// (0x00011116) tabs_3_active_pane_g1

0x2005,	// (0x0001111e) tabs_3_active_pane_t1

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp2_ParamLimits

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp2

0x1ffd,	// (0x00011116) tabs_3_passive_pane_g1

0x2005,	// (0x0001111e) tabs_3_passive_pane_t1

0x1fef,	// (0x00011108) bg_active_tab_pane_cp3_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp3

0x2017,	// (0x00011130) tabs_4_active_pane_g1

0x201f,	// (0x00011138) tabs_4_active_pane_t1

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp3_ParamLimits

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp3

0x2017,	// (0x00011130) tabs_4_1_passive_pane_g1

0x201f,	// (0x00011138) tabs_4_1_passive_pane_t1

0x3e24,	// (0x00012f3d) list_highlight_pane_cp2

0x5708,	// (0x00014821) list_set_pane_ParamLimits

0x5708,	// (0x00014821) list_set_pane

0x5796,	// (0x000148af) main_pane_set_t1_ParamLimits

0x5796,	// (0x000148af) main_pane_set_t1

0x57b6,	// (0x000148cf) main_pane_set_t2_ParamLimits

0x57b6,	// (0x000148cf) main_pane_set_t2

0x57c8,	// (0x000148e1) main_pane_set_t3_ParamLimits

0x57c8,	// (0x000148e1) main_pane_set_t3

0x57da,	// (0x000148f3) main_pane_set_t4_ParamLimits

0x57da,	// (0x000148f3) main_pane_set_t4

0x0003,

0xf95c,	// (0x0001ea75) main_pane_set_t_ParamLimits

0xf95c,	// (0x0001ea75) main_pane_set_t

0x57ec,	// (0x00014905) setting_code_pane

0x57f4,	// (0x0001490d) setting_slider_graphic_pane

0x57f4,	// (0x0001490d) setting_slider_pane

0x57f4,	// (0x0001490d) setting_text_pane

0x57f4,	// (0x0001490d) setting_volume_pane

0xceb9,	// (0x0001bfd2) volume_set_pane

0x1fef,	// (0x00011108) bg_set_opt_pane_cp

0xcec1,	// (0x0001bfda) setting_slider_pane_t1

0xced7,	// (0x0001bff0) setting_slider_pane_t2

0xcef0,	// (0x0001c009) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001e652) setting_slider_pane_t

0xcf07,	// (0x0001c020) slider_set_pane

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp2

0x2031,	// (0x0001114a) setting_slider_graphic_pane_g1

0xcf1d,	// (0x0001c036) setting_slider_graphic_pane_t1

0xcf2c,	// (0x0001c045) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x0001e659) setting_slider_graphic_pane_t

0xcf3b,	// (0x0001c054) slider_set_pane_cp

0x1f0f,	// (0x00011028) input_focus_pane_cp1

0x56ce,	// (0x000147e7) list_set_text_pane

0x1e28,	// (0x00010f41) setting_text_pane_g1

0x1f0f,	// (0x00011028) input_focus_pane_cp2

0x1e28,	// (0x00010f41) setting_code_pane_g1

0x203a,	// (0x00011153) setting_code_pane_t1

0xbc20,	// (0x0001ad39) set_text_pane_t1_ParamLimits

0xbc20,	// (0x0001ad39) set_text_pane_t1

0x2e0e,	// (0x00011f27) set_opt_bg_pane_g1

0x2e16,	// (0x00011f2f) set_opt_bg_pane_g2

0x56ae,	// (0x000147c7) set_opt_bg_pane_g3

0x2e26,	// (0x00011f3f) set_opt_bg_pane_g4

0x2e2e,	// (0x00011f47) set_opt_bg_pane_g5

0x2e36,	// (0x00011f4f) set_opt_bg_pane_g6

0x56b6,	// (0x000147cf) set_opt_bg_pane_g7

0x56be,	// (0x000147d7) set_opt_bg_pane_g8

0x56c6,	// (0x000147df) set_opt_bg_pane_g9

0x0008,

0xf949,	// (0x0001ea62) set_opt_bg_pane_g

0x56a1,	// (0x000147ba) slider_set_pane_g1

0xdc0e,	// (0x0001cd27) slider_set_pane_g2

0x0006,

0xf93a,	// (0x0001ea53) slider_set_pane_g

0xdbaa,	// (0x0001ccc3) volume_set_pane_g1

0xdbb2,	// (0x0001cccb) volume_set_pane_g2

0xdbba,	// (0x0001ccd3) volume_set_pane_g3

0xdbc2,	// (0x0001ccdb) volume_set_pane_g4

0xdbca,	// (0x0001cce3) volume_set_pane_g5

0xdbd2,	// (0x0001cceb) volume_set_pane_g6

0xdbda,	// (0x0001ccf3) volume_set_pane_g7

0xdbe2,	// (0x0001ccfb) volume_set_pane_g8

0xdbea,	// (0x0001cd03) volume_set_pane_g9

0xdbf2,	// (0x0001cd0b) volume_set_pane_g10

0x0009,

0xf912,	// (0x0001ea2b) volume_set_pane_g

0x2064,	// (0x0001117d) indicator_pane_ParamLimits

0x2064,	// (0x0001117d) indicator_pane

0x2070,	// (0x00011189) main_idle_pane_g2_ParamLimits

0x2070,	// (0x00011189) main_idle_pane_g2

0x2094,	// (0x000111ad) main_pane_idle_g1_ParamLimits

0x2094,	// (0x000111ad) main_pane_idle_g1

0x20a1,	// (0x000111ba) popup_clock_digital_analogue_window_ParamLimits

0x20a1,	// (0x000111ba) popup_clock_digital_analogue_window

0x20b8,	// (0x000111d1) soft_indicator_pane_ParamLimits

0x20b8,	// (0x000111d1) soft_indicator_pane

0x20c4,	// (0x000111dd) wallpaper_pane_ParamLimits

0x20c4,	// (0x000111dd) wallpaper_pane

0x1e28,	// (0x00010f41) wallpaper_pane_g1

0x20d8,	// (0x000111f1) indicator_pane_g1_ParamLimits

0x20d8,	// (0x000111f1) indicator_pane_g1

0x5ae0,	// (0x00014bf9) navi_navi_icon_text_pane_srt_g1

0x20f3,	// (0x0001120c) soft_indicator_pane_t1

0x210d,	// (0x00011226) aid_ps_area_pane

0x211e,	// (0x00011237) aid_ps_clock_pane

0x212a,	// (0x00011243) aid_ps_indicator_pane

0x2136,	// (0x0001124f) indicator_ps_pane_ParamLimits

0x2136,	// (0x0001124f) indicator_ps_pane

0x2145,	// (0x0001125e) power_save_pane_g1_ParamLimits

0x2145,	// (0x0001125e) power_save_pane_g1

0x2151,	// (0x0001126a) power_save_pane_g2_ParamLimits

0x2151,	// (0x0001126a) power_save_pane_g2

0xcc36,	// (0x0001bd4f) aid_navinavi_width_pane

0x210d,	// (0x00011226) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001e65e) power_save_pane_g_ParamLimits

0xf545,	// (0x0001e65e) power_save_pane_g

0x215f,	// (0x00011278) power_save_pane_t1_ParamLimits

0x215f,	// (0x00011278) power_save_pane_t1

0x211e,	// (0x00011237) aid_ps_clock_pane_ParamLimits

0x212a,	// (0x00011243) aid_ps_indicator_pane_ParamLimits

0x2171,	// (0x0001128a) power_save_pane_t4_ParamLimits

0x2171,	// (0x0001128a) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001e663) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001e663) power_save_pane_t

0x219b,	// (0x000112b4) power_save_t3_ParamLimits

0x219b,	// (0x000112b4) power_save_t3

0x2186,	// (0x0001129f) power_save_t2_ParamLimits

0x2186,	// (0x0001129f) power_save_t2

0x21b0,	// (0x000112c9) indicator_ps_pane_g1

0x21b9,	// (0x000112d2) ai_gene_pane_ParamLimits

0x21b9,	// (0x000112d2) ai_gene_pane

0x21c5,	// (0x000112de) ai_links_pane_ParamLimits

0x21c5,	// (0x000112de) ai_links_pane

0x21d1,	// (0x000112ea) indicator_pane_cp1_ParamLimits

0x21d1,	// (0x000112ea) indicator_pane_cp1

0x21dd,	// (0x000112f6) main_pane_idle_g1_cp_ParamLimits

0x21dd,	// (0x000112f6) main_pane_idle_g1_cp

0x21e9,	// (0x00011302) popup_ai_links_title_window

0x21f2,	// (0x0001130b) soft_indicator_pane_cp1_ParamLimits

0x21f2,	// (0x0001130b) soft_indicator_pane_cp1

0x54a7,	// (0x000145c0) ai_links_pane_g1

0x54b0,	// (0x000145c9) grid_ai_links_pane

0x548c,	// (0x000145a5) ai_gene_pane_1

0x5495,	// (0x000145ae) ai_gene_pane_2

0x549e,	// (0x000145b7) list_highlight_pane_cp4

0x5470,	// (0x00014589) cell_ai_link_pane_ParamLimits

0x5470,	// (0x00014589) cell_ai_link_pane

0x5468,	// (0x00014581) cell_ai_link_pane_g1

0x2451,	// (0x0001156a) cell_ai_link_pane_g2

0x0001,

0xf8ed,	// (0x0001ea06) cell_ai_link_pane_g

0x1f0f,	// (0x00011028) grid_highlight_cp2

0x1f0f,	// (0x00011028) bg_popup_sub_pane_cp1

0x220c,	// (0x00011325) popup_ai_links_title_window_t1

0x53ba,	// (0x000144d3) ai_gene_pane_1_g1_ParamLimits

0x53ba,	// (0x000144d3) ai_gene_pane_1_g1

0x53c6,	// (0x000144df) ai_gene_pane_1_g2_ParamLimits

0x53c6,	// (0x000144df) ai_gene_pane_1_g2

0x0001,

0xf8e3,	// (0x0001e9fc) ai_gene_pane_1_g_ParamLimits

0xf8e3,	// (0x0001e9fc) ai_gene_pane_1_g

0x53d3,	// (0x000144ec) ai_gene_pane_1_t1_ParamLimits

0x53d3,	// (0x000144ec) ai_gene_pane_1_t1

0x5407,	// (0x00014520) grid_ai_soft_ind_pane

0x53a5,	// (0x000144be) ai_gene_pane_2_t1_ParamLimits

0x53a5,	// (0x000144be) ai_gene_pane_2_t1

0x221b,	// (0x00011334) main_pane_empty_t1_ParamLimits

0x221b,	// (0x00011334) main_pane_empty_t1

0x2238,	// (0x00011351) main_pane_empty_t2_ParamLimits

0x2238,	// (0x00011351) main_pane_empty_t2

0x2250,	// (0x00011369) main_pane_empty_t3_ParamLimits

0x2250,	// (0x00011369) main_pane_empty_t3

0x2263,	// (0x0001137c) main_pane_empty_t4_ParamLimits

0x2263,	// (0x0001137c) main_pane_empty_t4

0x2276,	// (0x0001138f) main_pane_empty_t5_ParamLimits

0x2276,	// (0x0001138f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x0001e668) main_pane_empty_t_ParamLimits

0xf54f,	// (0x0001e668) main_pane_empty_t

0x2f61,	// (0x0001207a) bg_popup_window_pane_ParamLimits

0x2f61,	// (0x0001207a) bg_popup_window_pane

0x511f,	// (0x00014238) find_popup_pane_cp2_ParamLimits

0x511f,	// (0x00014238) find_popup_pane_cp2

0x512b,	// (0x00014244) heading_pane_ParamLimits

0x512b,	// (0x00014244) heading_pane

0x1f0f,	// (0x00011028) bg_popup_sub_pane

0x5098,	// (0x000141b1) bg_popup_window_pane_g1_ParamLimits

0x5098,	// (0x000141b1) bg_popup_window_pane_g1

0x50a4,	// (0x000141bd) bg_popup_window_pane_g2_ParamLimits

0x50a4,	// (0x000141bd) bg_popup_window_pane_g2

0x50b0,	// (0x000141c9) bg_popup_window_pane_g3_ParamLimits

0x50b0,	// (0x000141c9) bg_popup_window_pane_g3

0x50bc,	// (0x000141d5) bg_popup_window_pane_g4_ParamLimits

0x50bc,	// (0x000141d5) bg_popup_window_pane_g4

0x50c8,	// (0x000141e1) bg_popup_window_pane_g5_ParamLimits

0x50c8,	// (0x000141e1) bg_popup_window_pane_g5

0x50d4,	// (0x000141ed) bg_popup_window_pane_g6_ParamLimits

0x50d4,	// (0x000141ed) bg_popup_window_pane_g6

0x50e0,	// (0x000141f9) bg_popup_window_pane_g7_ParamLimits

0x50e0,	// (0x000141f9) bg_popup_window_pane_g7

0x50ec,	// (0x00014205) bg_popup_window_pane_g8_ParamLimits

0x50ec,	// (0x00014205) bg_popup_window_pane_g8

0x50f8,	// (0x00014211) bg_popup_window_pane_g9_ParamLimits

0x50f8,	// (0x00014211) bg_popup_window_pane_g9

0x5104,	// (0x0001421d) bg_popup_window_pane_g10_ParamLimits

0x5104,	// (0x0001421d) bg_popup_window_pane_g10

0x0009,

0xf8ab,	// (0x0001e9c4) bg_popup_window_pane_g_ParamLimits

0xf8ab,	// (0x0001e9c4) bg_popup_window_pane_g

0x502d,	// (0x00014146) bg_popup_heading_pane_ParamLimits

0x502d,	// (0x00014146) bg_popup_heading_pane

0xdc96,	// (0x0001cdaf) tabs_4_passive_pane_cp_srt_ParamLimits

0xdc96,	// (0x0001cdaf) tabs_4_passive_pane_cp_srt

0xdca8,	// (0x0001cdc1) tabs_4_passive_pane_srt_ParamLimits

0x5041,	// (0x0001415a) heading_pane_g2

0xdca8,	// (0x0001cdc1) tabs_4_passive_pane_srt

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp3_srt

0x5049,	// (0x00014162) heading_pane_t1_ParamLimits

0x5049,	// (0x00014162) heading_pane_t1

0x5060,	// (0x00014179) heading_pane_t2_ParamLimits

0x5060,	// (0x00014179) heading_pane_t2

0x0001,

0xf8a6,	// (0x0001e9bf) heading_pane_t_ParamLimits

0xf8a6,	// (0x0001e9bf) heading_pane_t

0x4b98,	// (0x00013cb1) bg_popup_heading_pane_g1

0x4c59,	// (0x00013d72) bg_popup_heading_pane_g2

0x4c61,	// (0x00013d7a) bg_popup_heading_pane_g3

0x4c69,	// (0x00013d82) bg_popup_heading_pane_g4

0x4c71,	// (0x00013d8a) bg_popup_heading_pane_g5

0x4c79,	// (0x00013d92) bg_popup_heading_pane_g6

0x4c81,	// (0x00013d9a) bg_popup_heading_pane_g7

0x4c89,	// (0x00013da2) bg_popup_heading_pane_g8

0x4c91,	// (0x00013daa) bg_popup_heading_pane_g9

0x0008,

0xf862,	// (0x0001e97b) bg_popup_heading_pane_g

0x4321,	// (0x0001343a) bg_popup_sub_pane_g1

0x4331,	// (0x0001344a) bg_popup_sub_pane_g2

0x4329,	// (0x00013442) bg_popup_sub_pane_g3

0x4341,	// (0x0001345a) bg_popup_sub_pane_g4

0x4339,	// (0x00013452) bg_popup_sub_pane_g5

0x4349,	// (0x00013462) bg_popup_sub_pane_g6

0x4351,	// (0x0001346a) bg_popup_sub_pane_g7

0x4361,	// (0x0001347a) bg_popup_sub_pane_g8

0x4359,	// (0x00013472) bg_popup_sub_pane_g9

0x0008,

0xf83c,	// (0x0001e955) bg_popup_sub_pane_g

0x2289,	// (0x000113a2) bg_popup_window_pane_cp5_ParamLimits

0x2289,	// (0x000113a2) bg_popup_window_pane_cp5

0x22a5,	// (0x000113be) popup_note_window_g1_ParamLimits

0x22a5,	// (0x000113be) popup_note_window_g1

0x22b1,	// (0x000113ca) popup_note_window_t1_ParamLimits

0x22b1,	// (0x000113ca) popup_note_window_t1

0x22c7,	// (0x000113e0) popup_note_window_t2_ParamLimits

0x22c7,	// (0x000113e0) popup_note_window_t2

0x22dd,	// (0x000113f6) popup_note_window_t3_ParamLimits

0x22dd,	// (0x000113f6) popup_note_window_t3

0x22f3,	// (0x0001140c) popup_note_window_t4_ParamLimits

0x22f3,	// (0x0001140c) popup_note_window_t4

0x231b,	// (0x00011434) popup_note_window_t5_ParamLimits

0x231b,	// (0x00011434) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001e673) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001e673) popup_note_window_t

0x2365,	// (0x0001147e) bg_popup_window_pane_cp6_ParamLimits

0x2365,	// (0x0001147e) bg_popup_window_pane_cp6

0x4b14,	// (0x00013c2d) popup_note_image_window_g1_ParamLimits

0x4b14,	// (0x00013c2d) popup_note_image_window_g1

0x4b20,	// (0x00013c39) popup_note_image_window_g2_ParamLimits

0x4b20,	// (0x00013c39) popup_note_image_window_g2

0x0001,

0xf830,	// (0x0001e949) popup_note_image_window_g_ParamLimits

0xf830,	// (0x0001e949) popup_note_image_window_g

0x4b39,	// (0x00013c52) popup_note_image_window_t1_ParamLimits

0x4b39,	// (0x00013c52) popup_note_image_window_t1

0x4b52,	// (0x00013c6b) popup_note_image_window_t2_ParamLimits

0x4b52,	// (0x00013c6b) popup_note_image_window_t2

0x4b6b,	// (0x00013c84) popup_note_image_window_t3_ParamLimits

0x4b6b,	// (0x00013c84) popup_note_image_window_t3

0x0002,

0xf835,	// (0x0001e94e) popup_note_image_window_t_ParamLimits

0xf835,	// (0x0001e94e) popup_note_image_window_t

0x49e3,	// (0x00013afc) bg_popup_window_pane_cp7_ParamLimits

0x49e3,	// (0x00013afc) bg_popup_window_pane_cp7

0x4a13,	// (0x00013b2c) popup_note_wait_window_g1_ParamLimits

0x4a13,	// (0x00013b2c) popup_note_wait_window_g1

0x4a1f,	// (0x00013b38) popup_note_wait_window_g2_ParamLimits

0x4a1f,	// (0x00013b38) popup_note_wait_window_g2

0x0002,

0xf81e,	// (0x0001e937) popup_note_wait_window_g_ParamLimits

0xf81e,	// (0x0001e937) popup_note_wait_window_g

0x4a37,	// (0x00013b50) popup_note_wait_window_t1_ParamLimits

0x4a37,	// (0x00013b50) popup_note_wait_window_t1

0x4a5e,	// (0x00013b77) popup_note_wait_window_t2_ParamLimits

0x4a5e,	// (0x00013b77) popup_note_wait_window_t2

0x4a7b,	// (0x00013b94) popup_note_wait_window_t3_ParamLimits

0x4a7b,	// (0x00013b94) popup_note_wait_window_t3

0x4a8e,	// (0x00013ba7) popup_note_wait_window_t4_ParamLimits

0x4a8e,	// (0x00013ba7) popup_note_wait_window_t4

0x0004,

0xf825,	// (0x0001e93e) popup_note_wait_window_t_ParamLimits

0xf825,	// (0x0001e93e) popup_note_wait_window_t

0x4ab3,	// (0x00013bcc) wait_bar_pane_ParamLimits

0x4ab3,	// (0x00013bcc) wait_bar_pane

0x1f0f,	// (0x00011028) wait_anim_pane

0x1f0f,	// (0x00011028) wait_border_pane

0x1e28,	// (0x00010f41) wait_anim_pane_g1

0x1e28,	// (0x00010f41) wait_anim_pane_g2

0x0001,

0xf6de,	// (0x0001e7f7) wait_anim_pane_g

0x4993,	// (0x00013aac) wait_border_pane_g1

0x499c,	// (0x00013ab5) wait_border_pane_g2

0x49a5,	// (0x00013abe) wait_border_pane_g3

0x0002,

0xf817,	// (0x0001e930) wait_border_pane_g

0x4803,	// (0x0001391c) bg_popup_window_pane_cp16_ParamLimits

0x4803,	// (0x0001391c) bg_popup_window_pane_cp16

0x4903,	// (0x00013a1c) indicator_popup_pane_cp4_ParamLimits

0x4903,	// (0x00013a1c) indicator_popup_pane_cp4

0x4917,	// (0x00013a30) popup_query_data_window_t1_ParamLimits

0x4917,	// (0x00013a30) popup_query_data_window_t1

0x4929,	// (0x00013a42) popup_query_data_window_t2_ParamLimits

0x4929,	// (0x00013a42) popup_query_data_window_t2

0x4942,	// (0x00013a5b) popup_query_data_window_t3_ParamLimits

0x4942,	// (0x00013a5b) popup_query_data_window_t3

0x0002,

0xf810,	// (0x0001e929) popup_query_data_window_t_ParamLimits

0xf810,	// (0x0001e929) popup_query_data_window_t

0x495c,	// (0x00013a75) query_popup_data_pane_ParamLimits

0x495c,	// (0x00013a75) query_popup_data_pane

0x4970,	// (0x00013a89) query_popup_data_pane_cp1_ParamLimits

0x4970,	// (0x00013a89) query_popup_data_pane_cp1

0x4803,	// (0x0001391c) bg_popup_window_pane_cp10_ParamLimits

0x4803,	// (0x0001391c) bg_popup_window_pane_cp10

0x4835,	// (0x0001394e) indicator_popup_pane_ParamLimits

0x4835,	// (0x0001394e) indicator_popup_pane

0x4857,	// (0x00013970) popup_query_code_window_t1_ParamLimits

0x4857,	// (0x00013970) popup_query_code_window_t1

0x4871,	// (0x0001398a) popup_query_code_window_t2_ParamLimits

0x4871,	// (0x0001398a) popup_query_code_window_t2

0x48ba,	// (0x000139d3) popup_query_code_window_t3_ParamLimits

0x48ba,	// (0x000139d3) popup_query_code_window_t3

0x0002,

0xf809,	// (0x0001e922) popup_query_code_window_t_ParamLimits

0xf809,	// (0x0001e922) popup_query_code_window_t

0x48e9,	// (0x00013a02) query_popup_pane_ParamLimits

0x48e9,	// (0x00013a02) query_popup_pane

0x2365,	// (0x0001147e) bg_popup_window_pane_cp15_ParamLimits

0x2365,	// (0x0001147e) bg_popup_window_pane_cp15

0x2383,	// (0x0001149c) indicator_popup_pane_cp1_ParamLimits

0x2383,	// (0x0001149c) indicator_popup_pane_cp1

0x2396,	// (0x000114af) indicator_popup_pane_cp2_ParamLimits

0x2396,	// (0x000114af) indicator_popup_pane_cp2

0x23a9,	// (0x000114c2) popup_query_data_code_window_g1_ParamLimits

0x23a9,	// (0x000114c2) popup_query_data_code_window_g1

0x23bc,	// (0x000114d5) popup_query_data_code_window_t1_ParamLimits

0x23bc,	// (0x000114d5) popup_query_data_code_window_t1

0x23ce,	// (0x000114e7) popup_query_data_code_window_t2_ParamLimits

0x23ce,	// (0x000114e7) popup_query_data_code_window_t2

0x23e0,	// (0x000114f9) popup_query_data_code_window_t3_ParamLimits

0x23e0,	// (0x000114f9) popup_query_data_code_window_t3

0x23f6,	// (0x0001150f) popup_query_data_code_window_t4_ParamLimits

0x23f6,	// (0x0001150f) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001e67e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001e67e) popup_query_data_code_window_t

0x3956,	// (0x00012a6f) list_single_midp_graphic_pane_g3

0x240e,	// (0x00011527) query_popup_data_pane_cp2_ParamLimits

0x2421,	// (0x0001153a) query_popup_pane_cp2_ParamLimits

0x2421,	// (0x0001153a) query_popup_pane_cp2

0x1f0f,	// (0x00011028) bg_popup_window_pane_cp11

0x47e7,	// (0x00013900) heading_pane_cp5

0x47ef,	// (0x00013908) listscroll_popup_info_pane

0x1f0f,	// (0x00011028) input_focus_pane_cp3

0x2434,	// (0x0001154d) query_popup_pane_t1

0x2442,	// (0x0001155b) list_popup_info_pane_ParamLimits

0x2442,	// (0x0001155b) list_popup_info_pane

0x2451,	// (0x0001156a) listscroll_popup_info_pane_g1

0x2459,	// (0x00011572) scroll_pane_cp7

0x2461,	// (0x0001157a) popup_info_list_pane_t1_ParamLimits

0x2461,	// (0x0001157a) popup_info_list_pane_t1

0x247b,	// (0x00011594) popup_info_list_pane_t2_ParamLimits

0x247b,	// (0x00011594) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x0001e687) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x0001e687) popup_info_list_pane_t

0x1f0f,	// (0x00011028) bg_popup_window_pane_cp12

0x5afa,	// (0x00014c13) find_popup_pane

0x1fef,	// (0x00011108) bg_popup_window_pane_cp3

0x2495,	// (0x000115ae) heading_pane_cp3

0x24a4,	// (0x000115bd) listscroll_popup_graphic_pane

0x1f0f,	// (0x00011028) bg_popup_window_pane_cp4

0x2503,	// (0x0001161c) heading_pane_cp4

0x250b,	// (0x00011624) listscroll_popup_colour_pane

0x2513,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x2513,	// (0x0001162c) cell_large_graphic_colour_none_popup_pane

0x2523,	// (0x0001163c) grid_large_graphic_colour_popup_pane_ParamLimits

0x2523,	// (0x0001163c) grid_large_graphic_colour_popup_pane

0x253f,	// (0x00011658) listscroll_popup_colour_pane_g1_ParamLimits

0x253f,	// (0x00011658) listscroll_popup_colour_pane_g1

0x2556,	// (0x0001166f) listscroll_popup_colour_pane_g2_ParamLimits

0x2556,	// (0x0001166f) listscroll_popup_colour_pane_g2

0x256a,	// (0x00011683) listscroll_popup_colour_pane_g3_ParamLimits

0x256a,	// (0x00011683) listscroll_popup_colour_pane_g3

0x257a,	// (0x00011693) listscroll_popup_colour_pane_g4_ParamLimits

0x257a,	// (0x00011693) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001e68c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001e68c) listscroll_popup_colour_pane_g

0x2589,	// (0x000116a2) scroll_pane_cp6_ParamLimits

0x2589,	// (0x000116a2) scroll_pane_cp6

0x259b,	// (0x000116b4) cell_large_graphic_colour_popup_pane_ParamLimits

0x259b,	// (0x000116b4) cell_large_graphic_colour_popup_pane

0x25ba,	// (0x000116d3) cell_large_graphic_colour_none_popup_pane_t1

0x1f0f,	// (0x00011028) grid_highlight_pane_cp5

0x25c9,	// (0x000116e2) cell_large_graphic_colour_popup_pane_g1

0x25d1,	// (0x000116ea) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001e695) cell_large_graphic_colour_popup_pane_g

0x25d9,	// (0x000116f2) cell_large_graphic_colour_popup_pane_g2_copy1

0x25e2,	// (0x000116fb) grid_highlight_pane_cp4

0x25ea,	// (0x00011703) bg_popup_window_pane_cp8_ParamLimits

0x25ea,	// (0x00011703) bg_popup_window_pane_cp8

0x2605,	// (0x0001171e) popup_snote_single_text_window_g1_ParamLimits

0x2605,	// (0x0001171e) popup_snote_single_text_window_g1

0x2617,	// (0x00011730) popup_snote_single_text_window_t1_ParamLimits

0x2617,	// (0x00011730) popup_snote_single_text_window_t1

0x262a,	// (0x00011743) popup_snote_single_text_window_t2_ParamLimits

0x262a,	// (0x00011743) popup_snote_single_text_window_t2

0x263d,	// (0x00011756) popup_snote_single_text_window_t3_ParamLimits

0x263d,	// (0x00011756) popup_snote_single_text_window_t3

0x2676,	// (0x0001178f) popup_snote_single_text_window_t4_ParamLimits

0x2676,	// (0x0001178f) popup_snote_single_text_window_t4

0x26aa,	// (0x000117c3) popup_snote_single_text_window_t5_ParamLimits

0x26aa,	// (0x000117c3) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001e69a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001e69a) popup_snote_single_text_window_t

0x26d9,	// (0x000117f2) bg_popup_window_pane_cp9_ParamLimits

0x26d9,	// (0x000117f2) bg_popup_window_pane_cp9

0x2605,	// (0x0001171e) popup_snote_single_graphic_window_g1_ParamLimits

0x2605,	// (0x0001171e) popup_snote_single_graphic_window_g1

0x26e7,	// (0x00011800) popup_snote_single_graphic_window_g2_ParamLimits

0x26e7,	// (0x00011800) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001e6a5) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001e6a5) popup_snote_single_graphic_window_g

0x26f3,	// (0x0001180c) popup_snote_single_graphic_window_t1_ParamLimits

0x26f3,	// (0x0001180c) popup_snote_single_graphic_window_t1

0x2706,	// (0x0001181f) popup_snote_single_graphic_window_t2_ParamLimits

0x2706,	// (0x0001181f) popup_snote_single_graphic_window_t2

0x263d,	// (0x00011756) popup_snote_single_graphic_window_t3_ParamLimits

0x263d,	// (0x00011756) popup_snote_single_graphic_window_t3

0x2676,	// (0x0001178f) popup_snote_single_graphic_window_t4_ParamLimits

0x2676,	// (0x0001178f) popup_snote_single_graphic_window_t4

0x26aa,	// (0x000117c3) popup_snote_single_graphic_window_t5_ParamLimits

0x26aa,	// (0x000117c3) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001e6aa) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001e6aa) popup_snote_single_graphic_window_t

0x5a67,	// (0x00014b80) grid_graphic_popup_pane_ParamLimits

0x5a67,	// (0x00014b80) grid_graphic_popup_pane

0x5a8a,	// (0x00014ba3) listscroll_popup_graphic_pane_g1_ParamLimits

0x5a8a,	// (0x00014ba3) listscroll_popup_graphic_pane_g1

0x5a9e,	// (0x00014bb7) listscroll_popup_graphic_pane_g2_ParamLimits

0x5a9e,	// (0x00014bb7) listscroll_popup_graphic_pane_g2

0x0001,

0xf986,	// (0x0001ea9f) listscroll_popup_graphic_pane_g_ParamLimits

0xf986,	// (0x0001ea9f) listscroll_popup_graphic_pane_g

0x5ab2,	// (0x00014bcb) scroll_pane_cp5

0x5a0b,	// (0x00014b24) cell_graphic_popup_pane_ParamLimits

0x5a0b,	// (0x00014b24) cell_graphic_popup_pane

0x59ec,	// (0x00014b05) cell_graphic_popup_pane_g1

0x59f4,	// (0x00014b0d) cell_graphic_popup_pane_g2

0x25d9,	// (0x000116f2) cell_graphic_popup_pane_g3

0x0002,

0xf97f,	// (0x0001ea98) cell_graphic_popup_pane_g

0x59fd,	// (0x00014b16) cell_graphic_popup_pane_t2

0x25e2,	// (0x000116fb) grid_highlight_pane_cp3

0x272b,	// (0x00011844) list_gen_pane_ParamLimits

0x272b,	// (0x00011844) list_gen_pane

0x275c,	// (0x00011875) scroll_pane

0x596c,	// (0x00014a85) bg_list_pane_g1_ParamLimits

0x596c,	// (0x00014a85) bg_list_pane_g1

0x5983,	// (0x00014a9c) bg_list_pane_g2_ParamLimits

0x5983,	// (0x00014a9c) bg_list_pane_g2

0x5996,	// (0x00014aaf) bg_list_pane_g3_ParamLimits

0x5996,	// (0x00014aaf) bg_list_pane_g3

0x59a8,	// (0x00014ac1) bg_list_pane_g4_ParamLimits

0x59a8,	// (0x00014ac1) bg_list_pane_g4

0x59ba,	// (0x00014ad3) bg_list_pane_g5_ParamLimits

0x59ba,	// (0x00014ad3) bg_list_pane_g5

0x0004,

0xf974,	// (0x0001ea8d) bg_list_pane_g_ParamLimits

0xf974,	// (0x0001ea8d) bg_list_pane_g

0xc50f,	// (0x0001b628) list_double2_graphic_large_graphic_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double2_graphic_large_graphic_pane

0xc50f,	// (0x0001b628) list_double2_graphic_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double2_graphic_pane

0xc50f,	// (0x0001b628) list_double2_large_graphic_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double2_large_graphic_pane

0x589a,	// (0x000149b3) list_double2_pane_ParamLimits

0x589a,	// (0x000149b3) list_double2_pane

0xc50f,	// (0x0001b628) list_double_graphic_heading_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_graphic_heading_pane

0xc50f,	// (0x0001b628) list_double_graphic_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_graphic_pane

0xc50f,	// (0x0001b628) list_double_heading_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_heading_pane

0xc50f,	// (0x0001b628) list_double_large_graphic_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_large_graphic_pane

0xc50f,	// (0x0001b628) list_double_number_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_number_pane

0xc50f,	// (0x0001b628) list_double_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_pane

0xc50f,	// (0x0001b628) list_double_time_pane_ParamLimits

0xc50f,	// (0x0001b628) list_double_time_pane

0xc50f,	// (0x0001b628) list_setting_number_pane_ParamLimits

0xc50f,	// (0x0001b628) list_setting_number_pane

0xc50f,	// (0x0001b628) list_setting_pane_ParamLimits

0xc50f,	// (0x0001b628) list_setting_pane

0xc568,	// (0x0001b681) list_single_2graphic_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_2graphic_pane

0xc568,	// (0x0001b681) list_single_graphic_heading_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_graphic_heading_pane

0xc568,	// (0x0001b681) list_single_graphic_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_graphic_pane

0xc568,	// (0x0001b681) list_single_heading_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_heading_pane

0xc57f,	// (0x0001b698) list_single_large_graphic_pane_ParamLimits

0xc57f,	// (0x0001b698) list_single_large_graphic_pane

0xc568,	// (0x0001b681) list_single_number_heading_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_number_heading_pane

0xc568,	// (0x0001b681) list_single_number_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_number_pane

0xc568,	// (0x0001b681) list_single_pane_ParamLimits

0xc568,	// (0x0001b681) list_single_pane

0x1f0f,	// (0x00011028) list_highlight_pane_cp1

0xbc48,	// (0x0001ad61) list_single_pane_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_pane_g1

0xbc54,	// (0x0001ad6d) list_single_pane_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_pane_g

0xc4f9,	// (0x0001b612) list_single_pane_t1_ParamLimits

0xc4f9,	// (0x0001b612) list_single_pane_t1

0xbc48,	// (0x0001ad61) list_single_number_pane_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_number_pane_g1

0xbc54,	// (0x0001ad6d) list_single_number_pane_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_number_pane_g

0xbc60,	// (0x0001ad79) list_single_number_pane_t1_ParamLimits

0xbc60,	// (0x0001ad79) list_single_number_pane_t1

0xc4ba,	// (0x0001b5d3) list_single_number_pane_t2_ParamLimits

0xc4ba,	// (0x0001b5d3) list_single_number_pane_t2

0x0001,

0xf935,	// (0x0001ea4e) list_single_number_pane_t_ParamLimits

0xf935,	// (0x0001ea4e) list_single_number_pane_t

0xbc3c,	// (0x0001ad55) list_single_graphic_pane_g1_ParamLimits

0xbc3c,	// (0x0001ad55) list_single_graphic_pane_g1

0xbc48,	// (0x0001ad61) list_single_graphic_pane_g2_ParamLimits

0xbc48,	// (0x0001ad61) list_single_graphic_pane_g2

0xbc54,	// (0x0001ad6d) list_single_graphic_pane_g3_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001e6b5) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001e6b5) list_single_graphic_pane_g

0xbc60,	// (0x0001ad79) list_single_graphic_pane_t1_ParamLimits

0xbc60,	// (0x0001ad79) list_single_graphic_pane_t1

0xbc48,	// (0x0001ad61) list_single_heading_pane_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_heading_pane_g1

0xbc54,	// (0x0001ad6d) list_single_heading_pane_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_heading_pane_g

0xbc76,	// (0x0001ad8f) list_single_heading_pane_t1_ParamLimits

0xbc76,	// (0x0001ad8f) list_single_heading_pane_t1

0xbc8c,	// (0x0001ada5) list_single_heading_pane_t2_ParamLimits

0xbc8c,	// (0x0001ada5) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001e6c1) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001e6c1) list_single_heading_pane_t

0xbc48,	// (0x0001ad61) list_single_number_heading_pane_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_number_heading_pane_g1

0xbc54,	// (0x0001ad6d) list_single_number_heading_pane_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_number_heading_pane_g

0xbc76,	// (0x0001ad8f) list_single_number_heading_pane_t1_ParamLimits

0xbc76,	// (0x0001ad8f) list_single_number_heading_pane_t1

0xbc9e,	// (0x0001adb7) list_single_number_heading_pane_t2_ParamLimits

0xbc9e,	// (0x0001adb7) list_single_number_heading_pane_t2

0xbcb0,	// (0x0001adc9) list_single_number_heading_pane_t3_ParamLimits

0xbcb0,	// (0x0001adc9) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001e6c6) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001e6c6) list_single_number_heading_pane_t

0xbc3c,	// (0x0001ad55) list_single_graphic_heading_pane_g1_ParamLimits

0xbc3c,	// (0x0001ad55) list_single_graphic_heading_pane_g1

0xbcc2,	// (0x0001addb) list_single_graphic_heading_pane_g4_ParamLimits

0xbcc2,	// (0x0001addb) list_single_graphic_heading_pane_g4

0xbc54,	// (0x0001ad6d) list_single_graphic_heading_pane_g5_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001e6cd) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001e6cd) list_single_graphic_heading_pane_g

0xbc76,	// (0x0001ad8f) list_single_graphic_heading_pane_t1_ParamLimits

0xbc76,	// (0x0001ad8f) list_single_graphic_heading_pane_t1

0xbcd1,	// (0x0001adea) list_single_graphic_heading_pane_t2_ParamLimits

0xbcd1,	// (0x0001adea) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x0001e6d4) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x0001e6d4) list_single_graphic_heading_pane_t

0xbce3,	// (0x0001adfc) list_single_large_graphic_pane_g1_ParamLimits

0xbce3,	// (0x0001adfc) list_single_large_graphic_pane_g1

0xbcef,	// (0x0001ae08) list_single_large_graphic_pane_g2_ParamLimits

0xbcef,	// (0x0001ae08) list_single_large_graphic_pane_g2

0xbcfb,	// (0x0001ae14) list_single_large_graphic_pane_g3_ParamLimits

0xbcfb,	// (0x0001ae14) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x0001e6d9) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x0001e6d9) list_single_large_graphic_pane_g

0x499c,	// (0x00013ab5) wait_border_pane_g2_copy1

0xbd07,	// (0x0001ae20) list_single_large_graphic_pane_g4_cp2

0xbd0f,	// (0x0001ae28) list_single_large_graphic_pane_t1_ParamLimits

0xbd0f,	// (0x0001ae28) list_single_large_graphic_pane_t1

0xbd25,	// (0x0001ae3e) list_double_pane_g1_ParamLimits

0xbd25,	// (0x0001ae3e) list_double_pane_g1

0xbd31,	// (0x0001ae4a) list_double_pane_g2_ParamLimits

0xbd31,	// (0x0001ae4a) list_double_pane_g2

0x0001,

0xf5c7,	// (0x0001e6e0) list_double_pane_g_ParamLimits

0xf5c7,	// (0x0001e6e0) list_double_pane_g

0xbd3d,	// (0x0001ae56) list_double_pane_t1_ParamLimits

0xbd3d,	// (0x0001ae56) list_double_pane_t1

0xbd53,	// (0x0001ae6c) list_double_pane_t2_ParamLimits

0xbd53,	// (0x0001ae6c) list_double_pane_t2

0x0001,

0xf5cc,	// (0x0001e6e5) list_double_pane_t_ParamLimits

0xf5cc,	// (0x0001e6e5) list_double_pane_t

0xbd65,	// (0x0001ae7e) list_double2_pane_g1_ParamLimits

0xbd65,	// (0x0001ae7e) list_double2_pane_g1

0xbd74,	// (0x0001ae8d) list_double2_pane_g2_ParamLimits

0xbd74,	// (0x0001ae8d) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001e6ea) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001e6ea) list_double2_pane_g

0xbd80,	// (0x0001ae99) list_double2_pane_t1_ParamLimits

0xbd80,	// (0x0001ae99) list_double2_pane_t1

0xbd96,	// (0x0001aeaf) list_double2_pane_t2_ParamLimits

0xbd96,	// (0x0001aeaf) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001e6ef) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001e6ef) list_double2_pane_t

0xbd25,	// (0x0001ae3e) list_double_number_pane_g1_ParamLimits

0xbd25,	// (0x0001ae3e) list_double_number_pane_g1

0xbd31,	// (0x0001ae4a) list_double_number_pane_g2_ParamLimits

0xbd31,	// (0x0001ae4a) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x0001e6e0) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x0001e6e0) list_double_number_pane_g

0xbda8,	// (0x0001aec1) list_double_number_pane_t1_ParamLimits

0xbda8,	// (0x0001aec1) list_double_number_pane_t1

0xbdba,	// (0x0001aed3) list_double_number_pane_t2_ParamLimits

0xbdba,	// (0x0001aed3) list_double_number_pane_t2

0xbdd0,	// (0x0001aee9) list_double_number_pane_t3_ParamLimits

0xbdd0,	// (0x0001aee9) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x0001e6f4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x0001e6f4) list_double_number_pane_t

0xbc3c,	// (0x0001ad55) list_double_graphic_pane_g1_ParamLimits

0xbc3c,	// (0x0001ad55) list_double_graphic_pane_g1

0xbde2,	// (0x0001aefb) list_double_graphic_pane_g2_ParamLimits

0xbde2,	// (0x0001aefb) list_double_graphic_pane_g2

0xbdf1,	// (0x0001af0a) list_double_graphic_pane_g3_ParamLimits

0xbdf1,	// (0x0001af0a) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x0001e6fb) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x0001e6fb) list_double_graphic_pane_g

0xbe09,	// (0x0001af22) list_double_graphic_pane_t1_ParamLimits

0xbe09,	// (0x0001af22) list_double_graphic_pane_t1

0xbe1f,	// (0x0001af38) list_double_graphic_pane_t2_ParamLimits

0xbe1f,	// (0x0001af38) list_double_graphic_pane_t2

0x0001,

0xf5eb,	// (0x0001e704) list_double_graphic_pane_t_ParamLimits

0xf5eb,	// (0x0001e704) list_double_graphic_pane_t

0xbe31,	// (0x0001af4a) list_double2_graphic_pane_g1_ParamLimits

0xbe31,	// (0x0001af4a) list_double2_graphic_pane_g1

0xbd25,	// (0x0001ae3e) list_double2_graphic_pane_g2_ParamLimits

0xbd25,	// (0x0001ae3e) list_double2_graphic_pane_g2

0xbd31,	// (0x0001ae4a) list_double2_graphic_pane_g3_ParamLimits

0xbd31,	// (0x0001ae4a) list_double2_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0001e709) list_double2_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0001e709) list_double2_graphic_pane_g

0xbe3d,	// (0x0001af56) list_double2_graphic_pane_t1_ParamLimits

0xbe3d,	// (0x0001af56) list_double2_graphic_pane_t1

0xbe53,	// (0x0001af6c) list_double2_graphic_pane_t2_ParamLimits

0xbe53,	// (0x0001af6c) list_double2_graphic_pane_t2

0x0001,

0xf5f7,	// (0x0001e710) list_double2_graphic_pane_t_ParamLimits

0xf5f7,	// (0x0001e710) list_double2_graphic_pane_t

0xbe65,	// (0x0001af7e) list_double_large_graphic_pane_g1_ParamLimits

0xbe65,	// (0x0001af7e) list_double_large_graphic_pane_g1

0xbe8e,	// (0x0001afa7) list_double_large_graphic_pane_g2_ParamLimits

0xbe8e,	// (0x0001afa7) list_double_large_graphic_pane_g2

0xbd31,	// (0x0001ae4a) list_double_large_graphic_pane_g3_ParamLimits

0xbd31,	// (0x0001ae4a) list_double_large_graphic_pane_g3

0xbe9d,	// (0x0001afb6) list_double_large_graphic_pane_g4_ParamLimits

0xbe9d,	// (0x0001afb6) list_double_large_graphic_pane_g4

0x0004,

0xf5fc,	// (0x0001e715) list_double_large_graphic_pane_g_ParamLimits

0xf5fc,	// (0x0001e715) list_double_large_graphic_pane_g

0xbec3,	// (0x0001afdc) list_double_large_graphic_pane_t1_ParamLimits

0xbec3,	// (0x0001afdc) list_double_large_graphic_pane_t1

0xbedc,	// (0x0001aff5) list_double_large_graphic_pane_t2_ParamLimits

0xbedc,	// (0x0001aff5) list_double_large_graphic_pane_t2

0x0001,

0xf607,	// (0x0001e720) list_double_large_graphic_pane_t_ParamLimits

0xf607,	// (0x0001e720) list_double_large_graphic_pane_t

0xbeee,	// (0x0001b007) list_double2_large_graphic_pane_g1_ParamLimits

0xbeee,	// (0x0001b007) list_double2_large_graphic_pane_g1

0xbefa,	// (0x0001b013) list_double2_large_graphic_pane_g2_ParamLimits

0xbefa,	// (0x0001b013) list_double2_large_graphic_pane_g2

0xbf09,	// (0x0001b022) list_double2_large_graphic_pane_g3_ParamLimits

0xbf09,	// (0x0001b022) list_double2_large_graphic_pane_g3

0x0002,

0xf60c,	// (0x0001e725) list_double2_large_graphic_pane_g_ParamLimits

0xf60c,	// (0x0001e725) list_double2_large_graphic_pane_g

0xbf15,	// (0x0001b02e) list_double2_large_graphic_pane_t1_ParamLimits

0xbf15,	// (0x0001b02e) list_double2_large_graphic_pane_t1

0xbf2b,	// (0x0001b044) list_double2_large_graphic_pane_t2_ParamLimits

0xbf2b,	// (0x0001b044) list_double2_large_graphic_pane_t2

0x0001,

0xf613,	// (0x0001e72c) list_double2_large_graphic_pane_t_ParamLimits

0xf613,	// (0x0001e72c) list_double2_large_graphic_pane_t

0xbf3d,	// (0x0001b056) list_double_heading_pane_g1_ParamLimits

0xbf3d,	// (0x0001b056) list_double_heading_pane_g1

0xbf4c,	// (0x0001b065) list_double_heading_pane_g2_ParamLimits

0xbf4c,	// (0x0001b065) list_double_heading_pane_g2

0x0001,

0xf618,	// (0x0001e731) list_double_heading_pane_g_ParamLimits

0xf618,	// (0x0001e731) list_double_heading_pane_g

0xbf58,	// (0x0001b071) list_double_heading_pane_t1_ParamLimits

0xbf58,	// (0x0001b071) list_double_heading_pane_t1

0xbf6e,	// (0x0001b087) list_double_heading_pane_t2_ParamLimits

0xbf6e,	// (0x0001b087) list_double_heading_pane_t2

0x0001,

0xf61d,	// (0x0001e736) list_double_heading_pane_t_ParamLimits

0xf61d,	// (0x0001e736) list_double_heading_pane_t

0xbf80,	// (0x0001b099) list_double_graphic_heading_pane_g1_ParamLimits

0xbf80,	// (0x0001b099) list_double_graphic_heading_pane_g1

0xbf3d,	// (0x0001b056) list_double_graphic_heading_pane_g2_ParamLimits

0xbf3d,	// (0x0001b056) list_double_graphic_heading_pane_g2

0xbf4c,	// (0x0001b065) list_double_graphic_heading_pane_g3_ParamLimits

0xbf4c,	// (0x0001b065) list_double_graphic_heading_pane_g3

0x0002,

0xf622,	// (0x0001e73b) list_double_graphic_heading_pane_g_ParamLimits

0xf622,	// (0x0001e73b) list_double_graphic_heading_pane_g

0xbf8c,	// (0x0001b0a5) list_double_graphic_heading_pane_t1_ParamLimits

0xbf8c,	// (0x0001b0a5) list_double_graphic_heading_pane_t1

0xbe53,	// (0x0001af6c) list_double_graphic_heading_pane_t2_ParamLimits

0xbe53,	// (0x0001af6c) list_double_graphic_heading_pane_t2

0x0001,

0xf629,	// (0x0001e742) list_double_graphic_heading_pane_t_ParamLimits

0xf629,	// (0x0001e742) list_double_graphic_heading_pane_t

0xbe8e,	// (0x0001afa7) list_double_time_pane_g1_ParamLimits

0xbe8e,	// (0x0001afa7) list_double_time_pane_g1

0xbd31,	// (0x0001ae4a) list_double_time_pane_g2_ParamLimits

0xbd31,	// (0x0001ae4a) list_double_time_pane_g2

0x0001,

0xf62e,	// (0x0001e747) list_double_time_pane_g_ParamLimits

0xf62e,	// (0x0001e747) list_double_time_pane_g

0xbfa2,	// (0x0001b0bb) list_double_time_pane_t1_ParamLimits

0xbfa2,	// (0x0001b0bb) list_double_time_pane_t1

0xbfb8,	// (0x0001b0d1) list_double_time_pane_t2_ParamLimits

0xbfb8,	// (0x0001b0d1) list_double_time_pane_t2

0xbfca,	// (0x0001b0e3) list_double_time_pane_t3_ParamLimits

0xbfca,	// (0x0001b0e3) list_double_time_pane_t3

0xbfdc,	// (0x0001b0f5) list_double_time_pane_t4_ParamLimits

0xbfdc,	// (0x0001b0f5) list_double_time_pane_t4

0x0003,

0xf633,	// (0x0001e74c) list_double_time_pane_t_ParamLimits

0xf633,	// (0x0001e74c) list_double_time_pane_t

0xbfee,	// (0x0001b107) list_setting_pane_g1_ParamLimits

0xbfee,	// (0x0001b107) list_setting_pane_g1

0xbf09,	// (0x0001b022) list_setting_pane_g2_ParamLimits

0xbf09,	// (0x0001b022) list_setting_pane_g2

0x0001,

0xf63c,	// (0x0001e755) list_setting_pane_g_ParamLimits

0xf63c,	// (0x0001e755) list_setting_pane_g

0xbffa,	// (0x0001b113) list_setting_pane_t1_ParamLimits

0xbffa,	// (0x0001b113) list_setting_pane_t1

0xc014,	// (0x0001b12d) list_setting_pane_t2_ParamLimits

0xc014,	// (0x0001b12d) list_setting_pane_t2

0x0002,

0xf641,	// (0x0001e75a) list_setting_pane_t_ParamLimits

0xf641,	// (0x0001e75a) list_setting_pane_t

0xc051,	// (0x0001b16a) set_value_pane_cp_ParamLimits

0xc051,	// (0x0001b16a) set_value_pane_cp

0xc05d,	// (0x0001b176) list_setting_number_pane_g1_ParamLimits

0xc05d,	// (0x0001b176) list_setting_number_pane_g1

0xc069,	// (0x0001b182) list_setting_number_pane_g2_ParamLimits

0xc069,	// (0x0001b182) list_setting_number_pane_g2

0x0001,

0xf648,	// (0x0001e761) list_setting_number_pane_g_ParamLimits

0xf648,	// (0x0001e761) list_setting_number_pane_g

0xc075,	// (0x0001b18e) list_setting_number_pane_t1_ParamLimits

0xc075,	// (0x0001b18e) list_setting_number_pane_t1

0xc08c,	// (0x0001b1a5) list_setting_number_pane_t2_ParamLimits

0xc08c,	// (0x0001b1a5) list_setting_number_pane_t2

0xc0a6,	// (0x0001b1bf) list_setting_number_pane_t3_ParamLimits

0xc0a6,	// (0x0001b1bf) list_setting_number_pane_t3

0x0003,

0xf64d,	// (0x0001e766) list_setting_number_pane_t_ParamLimits

0xf64d,	// (0x0001e766) list_setting_number_pane_t

0xc051,	// (0x0001b16a) set_value_pane_ParamLimits

0xc051,	// (0x0001b16a) set_value_pane

0x2bd1,	// (0x00011cea) bg_set_opt_pane_ParamLimits

0x2bd1,	// (0x00011cea) bg_set_opt_pane

0xc0e7,	// (0x0001b200) set_value_pane_t1

0x2c00,	// (0x00011d19) slider_set_pane_cp3

0x2c09,	// (0x00011d22) volume_small_pane_cp

0x2c12,	// (0x00011d2b) list_form_gen_pane

0x2780,	// (0x00011899) scroll_pane_cp8

0xc0fd,	// (0x0001b216) form_field_data_pane_ParamLimits

0xc0fd,	// (0x0001b216) form_field_data_pane

0xc11d,	// (0x0001b236) form_field_data_wide_pane_ParamLimits

0xc11d,	// (0x0001b236) form_field_data_wide_pane

0xc13c,	// (0x0001b255) form_field_popup_pane_ParamLimits

0xc13c,	// (0x0001b255) form_field_popup_pane

0xc154,	// (0x0001b26d) form_field_popup_wide_pane_ParamLimits

0xc154,	// (0x0001b26d) form_field_popup_wide_pane

0xc16b,	// (0x0001b284) form_field_slider_pane_ParamLimits

0xc16b,	// (0x0001b284) form_field_slider_pane

0xc17e,	// (0x0001b297) form_field_slider_wide_pane_ParamLimits

0xc17e,	// (0x0001b297) form_field_slider_wide_pane

0x2cbf,	// (0x00011dd8) data_form_pane

0x2d44,	// (0x00011e5d) form_field_data_pane_t1

0x2ceb,	// (0x00011e04) input_focus_pane

0x2cf9,	// (0x00011e12) data_form_wide_pane

0xc1a5,	// (0x0001b2be) form_field_data_wide_pane_t1

0x25f7,	// (0x00011710) input_focus_pane_cp6

0xc1c7,	// (0x0001b2e0) form_field_popup_pane_t1

0x2ceb,	// (0x00011e04) input_focus_pane_cp7

0x2cbf,	// (0x00011dd8) list_form_pane

0xc1e7,	// (0x0001b300) form_field_popup_wide_pane_t1

0x2ceb,	// (0x00011e04) input_focus_pane_cp8

0x2d79,	// (0x00011e92) list_form_wide_pane

0xc204,	// (0x0001b31d) form_field_slider_pane_t1_ParamLimits

0xc204,	// (0x0001b31d) form_field_slider_pane_t1

0xc216,	// (0x0001b32f) form_field_slider_pane_t2_ParamLimits

0xc216,	// (0x0001b32f) form_field_slider_pane_t2

0x0001,

0xf65d,	// (0x0001e776) form_field_slider_pane_t_ParamLimits

0xf65d,	// (0x0001e776) form_field_slider_pane_t

0x2289,	// (0x000113a2) input_focus_pane_cp9_ParamLimits

0x2289,	// (0x000113a2) input_focus_pane_cp9

0xc228,	// (0x0001b341) slider_cont_pane_ParamLimits

0xc228,	// (0x0001b341) slider_cont_pane

0x2dcc,	// (0x00011ee5) form_field_slider_wide_pane_t1_ParamLimits

0x2dcc,	// (0x00011ee5) form_field_slider_wide_pane_t1

0xc23c,	// (0x0001b355) form_field_slider_wide_pane_t2_ParamLimits

0xc23c,	// (0x0001b355) form_field_slider_wide_pane_t2

0x0001,

0xf662,	// (0x0001e77b) form_field_slider_wide_pane_t_ParamLimits

0xf662,	// (0x0001e77b) form_field_slider_wide_pane_t

0x2289,	// (0x000113a2) input_focus_pane_cp10_ParamLimits

0x2289,	// (0x000113a2) input_focus_pane_cp10

0xc24e,	// (0x0001b367) slider_cont_pane_cp1_ParamLimits

0xc24e,	// (0x0001b367) slider_cont_pane_cp1

0xc264,	// (0x0001b37d) slider_form_pane_cp

0x2e0e,	// (0x00011f27) input_focus_pane_g1

0x2e16,	// (0x00011f2f) input_focus_pane_g2

0x2e1e,	// (0x00011f37) input_focus_pane_g3

0x2e26,	// (0x00011f3f) input_focus_pane_g4

0x2e2e,	// (0x00011f47) input_focus_pane_g5

0x2e36,	// (0x00011f4f) input_focus_pane_g6

0x2e3e,	// (0x00011f57) input_focus_pane_g7

0x2e46,	// (0x00011f5f) input_focus_pane_g8

0x2e4e,	// (0x00011f67) input_focus_pane_g9

0x1e28,	// (0x00010f41) input_focus_pane_g10

0x0009,

0xf667,	// (0x0001e780) input_focus_pane_g

0x49a5,	// (0x00013abe) wait_border_pane_g3_copy1

0xc26c,	// (0x0001b385) data_form_pane_t1

0x1e28,	// (0x00010f41) wait_anim_pane_g1_copy1

0xc4cc,	// (0x0001b5e5) data_form_wide_pane_t1

0xc286,	// (0x0001b39f) list_form_graphic_pane_cp_ParamLimits

0xc286,	// (0x0001b39f) list_form_graphic_pane_cp

0x5818,	// (0x00014931) slider_form_pane_g1

0x5821,	// (0x0001493a) slider_form_pane_g2

0x0006,

0xf965,	// (0x0001ea7e) slider_form_pane_g

0xc286,	// (0x0001b39f) list_form_graphic_pane_ParamLimits

0xc286,	// (0x0001b39f) list_form_graphic_pane

0xc29c,	// (0x0001b3b5) list_form_graphic_pane_g1

0xc2a4,	// (0x0001b3bd) list_form_graphic_pane_t1_ParamLimits

0xc2a4,	// (0x0001b3bd) list_form_graphic_pane_t1

0x1fef,	// (0x00011108) list_highlight_pane_cp5_ParamLimits

0x1fef,	// (0x00011108) list_highlight_pane_cp5

0xc2b9,	// (0x0001b3d2) find_pane_g1

0x2ec1,	// (0x00011fda) input_find_pane

0xc2c2,	// (0x0001b3db) input_find_pane_g1_ParamLimits

0xc2c2,	// (0x0001b3db) input_find_pane_g1

0xc2ce,	// (0x0001b3e7) input_find_pane_t1_ParamLimits

0xc2ce,	// (0x0001b3e7) input_find_pane_t1

0xc2e3,	// (0x0001b3fc) input_find_pane_t2_ParamLimits

0xc2e3,	// (0x0001b3fc) input_find_pane_t2

0x0001,

0xf67c,	// (0x0001e795) input_find_pane_t_ParamLimits

0xf67c,	// (0x0001e795) input_find_pane_t

0x2f00,	// (0x00012019) input_focus_pane_cp5_ParamLimits

0x2f00,	// (0x00012019) input_focus_pane_cp5

0x2289,	// (0x000113a2) bg_popup_window_pane_cp2_ParamLimits

0x2289,	// (0x000113a2) bg_popup_window_pane_cp2

0x2f1f,	// (0x00012038) listscroll_menu_pane_ParamLimits

0x2f1f,	// (0x00012038) listscroll_menu_pane

0x2f2b,	// (0x00012044) popup_submenu_window_ParamLimits

0x2f2b,	// (0x00012044) popup_submenu_window

0x2f4f,	// (0x00012068) find_popup_pane_g1

0x2f57,	// (0x00012070) input_popup_find_pane_cp

0x2f61,	// (0x0001207a) input_focus_pane_cp4_ParamLimits

0x2f61,	// (0x0001207a) input_focus_pane_cp4

0x2f7b,	// (0x00012094) input_popup_find_pane_t1_ParamLimits

0x2f7b,	// (0x00012094) input_popup_find_pane_t1

0x1f0f,	// (0x00011028) bg_popup_sub_pane_cp

0x2fa9,	// (0x000120c2) listscroll_popup_sub_pane

0x2fb1,	// (0x000120ca) list_submenu_pane_ParamLimits

0x2fb1,	// (0x000120ca) list_submenu_pane

0x2fc2,	// (0x000120db) scroll_pane_cp4

0x2fca,	// (0x000120e3) list_single_popup_submenu_pane_ParamLimits

0x2fca,	// (0x000120e3) list_single_popup_submenu_pane

0x2fdc,	// (0x000120f5) list_single_popup_submenu_pane_g1

0x2fe4,	// (0x000120fd) list_single_popup_submenu_pane_t1_ParamLimits

0x2fe4,	// (0x000120fd) list_single_popup_submenu_pane_t1

0x1fef,	// (0x00011108) bg_active_tab_pane_cp1_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp1

0x2ff9,	// (0x00012112) tabs_2_active_pane_g1

0x3001,	// (0x0001211a) tabs_2_active_pane_t1

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp1_ParamLimits

0x1fef,	// (0x00011108) bg_passive_tab_pane_cp1

0x2ff9,	// (0x00012112) tabs_2_passive_pane_g1

0x3001,	// (0x0001211a) tabs_2_passive_pane_t1

0x3013,	// (0x0001212c) bg_active_tab_pane_cp4

0x3021,	// (0x0001213a) tabs_2_long_active_pane_t1

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp4

0x4bee,	// (0x00013d07) list_single_midp_graphic_pane_g4_ParamLimits

0x3013,	// (0x0001212c) bg_active_tab_pane_cp5

0x3040,	// (0x00012159) tabs_3_long_active_pane_t1

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp5

0x4bee,	// (0x00013d07) list_single_midp_graphic_pane_g4

0x1fef,	// (0x00011108) bg_popup_window_pane_cp13_ParamLimits

0x1fef,	// (0x00011108) bg_popup_window_pane_cp13

0x305b,	// (0x00012174) listscroll_popup_fast_pane_ParamLimits

0x305b,	// (0x00012174) listscroll_popup_fast_pane

0x306a,	// (0x00012183) grid_popup_fast_pane_ParamLimits

0x306a,	// (0x00012183) grid_popup_fast_pane

0x307c,	// (0x00012195) scroll_pane_cp9_ParamLimits

0x307c,	// (0x00012195) scroll_pane_cp9

0x7470,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7470,	// (0x00016589) list_single_graphic_hl_pane_t1_cp2

0x30a0,	// (0x000121b9) input_focus_pane_cp20_ParamLimits

0x30a0,	// (0x000121b9) input_focus_pane_cp20

0x30ae,	// (0x000121c7) query_popup_data_pane_t1_ParamLimits

0x30ae,	// (0x000121c7) query_popup_data_pane_t1

0x30c1,	// (0x000121da) query_popup_data_pane_t2_ParamLimits

0x30c1,	// (0x000121da) query_popup_data_pane_t2

0x3107,	// (0x00012220) query_popup_data_pane_t3_ParamLimits

0x3107,	// (0x00012220) query_popup_data_pane_t3

0x3148,	// (0x00012261) query_popup_data_pane_t4_ParamLimits

0x3148,	// (0x00012261) query_popup_data_pane_t4

0x3184,	// (0x0001229d) query_popup_data_pane_t5_ParamLimits

0x3184,	// (0x0001229d) query_popup_data_pane_t5

0x0004,

0xf681,	// (0x0001e79a) query_popup_data_pane_t_ParamLimits

0xf681,	// (0x0001e79a) query_popup_data_pane_t

0x2e0e,	// (0x00011f27) bg_set_opt_pane_g1

0x2e16,	// (0x00011f2f) bg_set_opt_pane_g2

0x2e1e,	// (0x00011f37) bg_set_opt_pane_g3

0x2e26,	// (0x00011f3f) bg_set_opt_pane_g4

0x2e2e,	// (0x00011f47) bg_set_opt_pane_g5

0x2e36,	// (0x00011f4f) bg_set_opt_pane_g6

0x2e3e,	// (0x00011f57) bg_set_opt_pane_g7

0x2e46,	// (0x00011f5f) bg_set_opt_pane_g8

0x2e4e,	// (0x00011f67) bg_set_opt_pane_g9

0x0008,

0xf68c,	// (0x0001e7a5) bg_set_opt_pane_g

0xd177,	// (0x0001c290) control_top_pane_stacon_ParamLimits

0xd177,	// (0x0001c290) control_top_pane_stacon

0xd1ca,	// (0x0001c2e3) signal_pane_stacon_ParamLimits

0xd1ca,	// (0x0001c2e3) signal_pane_stacon

0x37c8,	// (0x000128e1) stacon_top_pane_g1_ParamLimits

0x37c8,	// (0x000128e1) stacon_top_pane_g1

0xd1ef,	// (0x0001c308) title_pane_stacon_ParamLimits

0xd1ef,	// (0x0001c308) title_pane_stacon

0xd211,	// (0x0001c32a) uni_indicator_pane_stacon_ParamLimits

0xd211,	// (0x0001c32a) uni_indicator_pane_stacon

0xd226,	// (0x0001c33f) battery_pane_stacon_ParamLimits

0xd226,	// (0x0001c33f) battery_pane_stacon

0xd266,	// (0x0001c37f) control_bottom_pane_stacon_ParamLimits

0xd266,	// (0x0001c37f) control_bottom_pane_stacon

0xd285,	// (0x0001c39e) navi_pane_stacon_ParamLimits

0xd285,	// (0x0001c39e) navi_pane_stacon

0x37ea,	// (0x00012903) stacon_bottom_pane_g1_ParamLimits

0x37ea,	// (0x00012903) stacon_bottom_pane_g1

0x31bb,	// (0x000122d4) aid_levels_signal_lsc_ParamLimits

0x31bb,	// (0x000122d4) aid_levels_signal_lsc

0xcf43,	// (0x0001c05c) signal_pane_stacon_g1_ParamLimits

0xcf43,	// (0x0001c05c) signal_pane_stacon_g1

0xcf4f,	// (0x0001c068) signal_pane_stacon_g2_ParamLimits

0xcf4f,	// (0x0001c068) signal_pane_stacon_g2

0x0001,

0xf69f,	// (0x0001e7b8) signal_pane_stacon_g_ParamLimits

0xf69f,	// (0x0001e7b8) signal_pane_stacon_g

0xcf83,	// (0x0001c09c) title_pane_stacon_t1_ParamLimits

0xcf83,	// (0x0001c09c) title_pane_stacon_t1

0x31e9,	// (0x00012302) uni_indicator_pane_stacon_g1

0x31f3,	// (0x0001230c) uni_indicator_pane_stacon_g2

0x31d5,	// (0x000122ee) uni_indicator_pane_stacon_g3

0x31df,	// (0x000122f8) uni_indicator_pane_stacon_g4

0x0003,

0xf6ab,	// (0x0001e7c4) uni_indicator_pane_stacon_g

0xcfa8,	// (0x0001c0c1) control_top_pane_stacon_g1

0xcfb0,	// (0x0001c0c9) control_top_pane_stacon_t1_ParamLimits

0xcfb0,	// (0x0001c0c9) control_top_pane_stacon_t1

0x31fd,	// (0x00012316) aid_levels_battery_lsc_ParamLimits

0x31fd,	// (0x00012316) aid_levels_battery_lsc

0xcfe1,	// (0x0001c0fa) battery_pane_stacon_g1_ParamLimits

0xcfe1,	// (0x0001c0fa) battery_pane_stacon_g1

0xcfed,	// (0x0001c106) battery_pane_stacon_g2_ParamLimits

0xcfed,	// (0x0001c106) battery_pane_stacon_g2

0x0001,

0xf6b4,	// (0x0001e7cd) battery_pane_stacon_g_ParamLimits

0xf6b4,	// (0x0001e7cd) battery_pane_stacon_g

0xd01c,	// (0x0001c135) navi_icon_pane_stacon

0xd02c,	// (0x0001c145) navi_navi_pane_stacon

0xd01c,	// (0x0001c135) navi_text_pane_stacon

0xcfa8,	// (0x0001c0c1) control_bottom_pane_stacon_g1

0xd03c,	// (0x0001c155) control_bottom_pane_stacon_t1_ParamLimits

0xd03c,	// (0x0001c155) control_bottom_pane_stacon_t1

0x3225,	// (0x0001233e) grid_app_pane_ParamLimits

0x3225,	// (0x0001233e) grid_app_pane

0x3241,	// (0x0001235a) scroll_pane_cp15_ParamLimits

0x3241,	// (0x0001235a) scroll_pane_cp15

0x3252,	// (0x0001236b) cell_app_pane_ParamLimits

0x3252,	// (0x0001236b) cell_app_pane

0x3276,	// (0x0001238f) cell_app_pane_g1_ParamLimits

0x3276,	// (0x0001238f) cell_app_pane_g1

0x329a,	// (0x000123b3) cell_app_pane_g2_ParamLimits

0x329a,	// (0x000123b3) cell_app_pane_g2

0x0001,

0xf6b9,	// (0x0001e7d2) cell_app_pane_g_ParamLimits

0xf6b9,	// (0x0001e7d2) cell_app_pane_g

0x32a6,	// (0x000123bf) cell_app_pane_t1_ParamLimits

0x32a6,	// (0x000123bf) cell_app_pane_t1

0x32bd,	// (0x000123d6) grid_highlight_pane_ParamLimits

0x32bd,	// (0x000123d6) grid_highlight_pane

0x2e0e,	// (0x00011f27) cell_highlight_pane_g1

0x2e16,	// (0x00011f2f) cell_highlight_pane_g2

0x2e1e,	// (0x00011f37) cell_highlight_pane_g3

0x2e26,	// (0x00011f3f) cell_highlight_pane_g4

0x2e2e,	// (0x00011f47) cell_highlight_pane_g5

0x2e36,	// (0x00011f4f) cell_highlight_pane_g6

0x2e3e,	// (0x00011f57) cell_highlight_pane_g7

0x2e46,	// (0x00011f5f) cell_highlight_pane_g8

0x2e4e,	// (0x00011f67) cell_highlight_pane_g9

0x1e28,	// (0x00010f41) cell_highlight_pane_g10

0x0009,

0xf667,	// (0x0001e780) cell_highlight_pane_g

0x32ce,	// (0x000123e7) bg_scroll_pane

0xd080,	// (0x0001c199) scroll_handle_pane

0x3315,	// (0x0001242e) scroll_bg_pane_g1

0x332a,	// (0x00012443) scroll_bg_pane_g2

0x3342,	// (0x0001245b) scroll_bg_pane_g3

0x0002,

0xf6be,	// (0x0001e7d7) scroll_bg_pane_g

0x3357,	// (0x00012470) scroll_handle_focus_pane_ParamLimits

0x3357,	// (0x00012470) scroll_handle_focus_pane

0x3315,	// (0x0001242e) scroll_handle_pane_g1

0x3364,	// (0x0001247d) scroll_handle_pane_g2

0x3342,	// (0x0001245b) scroll_handle_pane_g3

0x0002,

0xf6c5,	// (0x0001e7de) scroll_handle_pane_g

0x2f61,	// (0x0001207a) bg_popup_sub_pane_cp21_ParamLimits

0x2f61,	// (0x0001207a) bg_popup_sub_pane_cp21

0x3378,	// (0x00012491) popup_fep_japan_predictive_window_t1_ParamLimits

0x3378,	// (0x00012491) popup_fep_japan_predictive_window_t1

0x338f,	// (0x000124a8) popup_fep_japan_predictive_window_t2_ParamLimits

0x338f,	// (0x000124a8) popup_fep_japan_predictive_window_t2

0x33c2,	// (0x000124db) popup_fep_japan_predictive_window_t3_ParamLimits

0x33c2,	// (0x000124db) popup_fep_japan_predictive_window_t3

0x0002,

0xf6cc,	// (0x0001e7e5) popup_fep_japan_predictive_window_t_ParamLimits

0xf6cc,	// (0x0001e7e5) popup_fep_japan_predictive_window_t

0x1f0f,	// (0x00011028) bg_popup_sub_pane_cp23

0x33f9,	// (0x00012512) listscroll_japin_cand_pane

0x3401,	// (0x0001251a) popup_fep_japan_candidate_window_t1

0x340f,	// (0x00012528) candidate_pane_ParamLimits

0x340f,	// (0x00012528) candidate_pane

0x3422,	// (0x0001253b) scroll_pane_cp30

0x342a,	// (0x00012543) list_single_popup_jap_candidate_pane_ParamLimits

0x342a,	// (0x00012543) list_single_popup_jap_candidate_pane

0x1f0f,	// (0x00011028) list_highlight_pane_cp30

0x343f,	// (0x00012558) list_single_popup_jap_candidate_pane_t1

0x344e,	// (0x00012567) level_1_signal

0x345b,	// (0x00012574) level_2_signal

0x3468,	// (0x00012581) level_3_signal

0x3475,	// (0x0001258e) level_4_signal

0x3482,	// (0x0001259b) level_5_signal

0x348f,	// (0x000125a8) level_6_signal

0x349c,	// (0x000125b5) level_7_signal

0x344e,	// (0x00012567) level_1_battery

0x345b,	// (0x00012574) level_2_battery

0x3468,	// (0x00012581) level_3_battery

0x3475,	// (0x0001258e) level_4_battery

0x3482,	// (0x0001259b) level_5_battery

0x348f,	// (0x000125a8) level_6_battery

0x349c,	// (0x000125b5) level_7_battery

0x34c1,	// (0x000125da) list_menu_pane_ParamLimits

0x34c1,	// (0x000125da) list_menu_pane

0x34d7,	// (0x000125f0) scroll_pane_cp25_ParamLimits

0x34d7,	// (0x000125f0) scroll_pane_cp25

0x34f0,	// (0x00012609) list_double2_graphic_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double2_graphic_pane_cp2

0x34f0,	// (0x00012609) list_double2_large_graphic_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double2_large_graphic_pane_cp2

0x34f0,	// (0x00012609) list_double2_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double2_pane_cp2

0x34f0,	// (0x00012609) list_double_graphic_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double_graphic_pane_cp2

0x34f0,	// (0x00012609) list_double_large_graphic_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double_large_graphic_pane_cp2

0x34f0,	// (0x00012609) list_double_number_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double_number_pane_cp2

0x34f0,	// (0x00012609) list_double_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double_pane_cp2

0x3500,	// (0x00012619) list_single_2graphic_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_2graphic_pane_cp2

0x3500,	// (0x00012619) list_single_graphic_heading_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_graphic_heading_pane_cp2

0x3500,	// (0x00012619) list_single_graphic_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_graphic_pane_cp2

0x3500,	// (0x00012619) list_single_heading_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_heading_pane_cp2

0x3515,	// (0x0001262e) list_single_large_graphic_pane_cp2_ParamLimits

0x3515,	// (0x0001262e) list_single_large_graphic_pane_cp2

0x3500,	// (0x00012619) list_single_number_heading_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_number_heading_pane_cp2

0x3500,	// (0x00012619) list_single_number_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_number_pane_cp2

0x3500,	// (0x00012619) list_single_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_pane_cp2

0x3591,	// (0x000126aa) bg_popup_sub_pane_cp22

0xd12f,	// (0x0001c248) popup_side_volume_key_window_g1

0xd153,	// (0x0001c26c) popup_side_volume_key_window_t1

0xd16f,	// (0x0001c288) volume_small_pane_cp1

0x2289,	// (0x000113a2) bg_popup_sub_pane_cp24_ParamLimits

0x2289,	// (0x000113a2) bg_popup_sub_pane_cp24

0x35a7,	// (0x000126c0) fep_china_uni_candidate_pane_ParamLimits

0x35a7,	// (0x000126c0) fep_china_uni_candidate_pane

0x35bb,	// (0x000126d4) fep_china_uni_entry_pane

0x35cb,	// (0x000126e4) popup_fep_china_uni_window_g1

0x35e7,	// (0x00012700) fep_china_uni_entry_pane_g1

0x35ef,	// (0x00012708) fep_china_uni_entry_pane_g2

0x0001,

0xf6fd,	// (0x0001e816) fep_china_uni_entry_pane_g

0x35f7,	// (0x00012710) fep_entry_item_pane

0x3601,	// (0x0001271a) fep_candidate_item_pane

0x3609,	// (0x00012722) fep_china_uni_candidate_pane_g1

0x3611,	// (0x0001272a) fep_china_uni_candidate_pane_g2

0x3619,	// (0x00012732) fep_china_uni_candidate_pane_g3

0x3621,	// (0x0001273a) fep_china_uni_candidate_pane_g4

0x0003,

0xf702,	// (0x0001e81b) fep_china_uni_candidate_pane_g

0x1e28,	// (0x00010f41) fep_entry_item_pane_g1

0x3629,	// (0x00012742) fep_entry_item_pane_t1_ParamLimits

0x3629,	// (0x00012742) fep_entry_item_pane_t1

0x363f,	// (0x00012758) fep_candidate_item_pane_t1_ParamLimits

0x363f,	// (0x00012758) fep_candidate_item_pane_t1

0x3654,	// (0x0001276d) fep_candidate_item_pane_t2_ParamLimits

0x3654,	// (0x0001276d) fep_candidate_item_pane_t2

0x0001,

0xf70b,	// (0x0001e824) fep_candidate_item_pane_t_ParamLimits

0xf70b,	// (0x0001e824) fep_candidate_item_pane_t

0x1fef,	// (0x00011108) list_highlight_pane_cp31_ParamLimits

0x1fef,	// (0x00011108) list_highlight_pane_cp31

0x3666,	// (0x0001277f) level_1_signal_lsc

0x366f,	// (0x00012788) level_2_signal_lsc

0x3678,	// (0x00012791) level_3_signal_lsc

0x3681,	// (0x0001279a) level_4_signal_lsc

0x368a,	// (0x000127a3) level_5_signal_lsc

0x3693,	// (0x000127ac) level_6_signal_lsc

0x369c,	// (0x000127b5) level_7_signal_lsc

0x369c,	// (0x000127b5) level_1_battery_lsc

0x36a5,	// (0x000127be) level_2_battery_lsc

0x36ae,	// (0x000127c7) level_3_battery_lsc

0x36b7,	// (0x000127d0) level_4_battery_lsc

0x36c0,	// (0x000127d9) level_5_battery_lsc

0x36c9,	// (0x000127e2) level_6_battery_lsc

0x3666,	// (0x0001277f) level_7_battery_lsc

0x36d2,	// (0x000127eb) scroll_handle_focus_pane_g1

0x36db,	// (0x000127f4) scroll_handle_focus_pane_g2

0x36e4,	// (0x000127fd) scroll_handle_focus_pane_g3

0x0002,

0xf710,	// (0x0001e829) scroll_handle_focus_pane_g

0xc2f8,	// (0x0001b411) list_single_2graphic_pane_g1_ParamLimits

0xc2f8,	// (0x0001b411) list_single_2graphic_pane_g1

0xbcc2,	// (0x0001addb) list_single_2graphic_pane_g2_ParamLimits

0xbcc2,	// (0x0001addb) list_single_2graphic_pane_g2

0xbc54,	// (0x0001ad6d) list_single_2graphic_pane_g3_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_2graphic_pane_g3

0xc304,	// (0x0001b41d) list_single_2graphic_pane_g4_ParamLimits

0xc304,	// (0x0001b41d) list_single_2graphic_pane_g4

0x0003,

0xf717,	// (0x0001e830) list_single_2graphic_pane_g_ParamLimits

0xf717,	// (0x0001e830) list_single_2graphic_pane_g

0xc310,	// (0x0001b429) list_single_2graphic_pane_t1_ParamLimits

0xc310,	// (0x0001b429) list_single_2graphic_pane_t1

0xc33e,	// (0x0001b457) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xc33e,	// (0x0001b457) list_double2_graphic_large_graphic_pane_g1

0xbefa,	// (0x0001b013) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xbefa,	// (0x0001b013) list_double2_graphic_large_graphic_pane_g2

0xbf09,	// (0x0001b022) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xbf09,	// (0x0001b022) list_double2_graphic_large_graphic_pane_g3

0xc34e,	// (0x0001b467) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xc34e,	// (0x0001b467) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf720,	// (0x0001e839) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf720,	// (0x0001e839) list_double2_graphic_large_graphic_pane_g

0xc35a,	// (0x0001b473) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xc35a,	// (0x0001b473) list_double2_graphic_large_graphic_pane_t1

0xc370,	// (0x0001b489) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xc370,	// (0x0001b489) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf729,	// (0x0001e842) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf729,	// (0x0001e842) list_double2_graphic_large_graphic_pane_t

0x38a8,	// (0x000129c1) popup_fast_swap_window_ParamLimits

0x38a8,	// (0x000129c1) popup_fast_swap_window

0x38c4,	// (0x000129dd) popup_side_volume_key_window

0x38de,	// (0x000129f7) stacon_top_pane

0x38e8,	// (0x00012a01) status_pane_ParamLimits

0x38e8,	// (0x00012a01) status_pane

0x38f6,	// (0x00012a0f) status_small_pane

0x1f0f,	// (0x00011028) control_pane

0x1f0f,	// (0x00011028) stacon_bottom_pane

0x2780,	// (0x00011899) scroll_pane_cp121

0x2c12,	// (0x00011d2b) set_content_pane

0x3789,	// (0x000128a2) bg_active_tab_pane_g1_cp1

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp1

0x3777,	// (0x00012890) bg_active_tab_pane_g3_cp1

0x3789,	// (0x000128a2) bg_passive_tab_pane_g1_cp1

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp1

0x3777,	// (0x00012890) bg_passive_tab_pane_g3_cp1

0x379b,	// (0x000128b4) bg_active_tab_pane_g1_cp2

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp2

0x3792,	// (0x000128ab) bg_active_tab_pane_g3_cp2

0x379b,	// (0x000128b4) bg_passive_tab_pane_g1_cp2

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp2

0x3792,	// (0x000128ab) bg_passive_tab_pane_g3_cp2

0x37ad,	// (0x000128c6) bg_active_tab_pane_g1_cp3

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp3

0x37a4,	// (0x000128bd) bg_active_tab_pane_g3_cp3

0x37ad,	// (0x000128c6) bg_passive_tab_pane_g1_cp3

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp3

0x37a4,	// (0x000128bd) bg_passive_tab_pane_g3_cp3

0x37bf,	// (0x000128d8) bg_active_tab_pane_g1_cp4

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp4

0x37b6,	// (0x000128cf) bg_active_tab_pane_g3_cp4

0x37bf,	// (0x000128d8) bg_passive_tab_pane_g1_cp4

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp4

0x37b6,	// (0x000128cf) bg_passive_tab_pane_g3_cp4

0x380f,	// (0x00012928) bg_active_tab_pane_g1_cp5

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp5

0x3806,	// (0x0001291f) bg_active_tab_pane_g3_cp5

0x380f,	// (0x00012928) bg_passive_tab_pane_g1_cp5

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp5

0x3806,	// (0x0001291f) bg_passive_tab_pane_g3_cp5

0x3818,	// (0x00012931) list_set_graphic_pane_ParamLimits

0x3818,	// (0x00012931) list_set_graphic_pane

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp4

0x382f,	// (0x00012948) list_set_graphic_pane_g1_ParamLimits

0x382f,	// (0x00012948) list_set_graphic_pane_g1

0x383b,	// (0x00012954) list_set_graphic_pane_g2_ParamLimits

0x383b,	// (0x00012954) list_set_graphic_pane_g2

0x0001,

0xf72e,	// (0x0001e847) list_set_graphic_pane_g_ParamLimits

0xf72e,	// (0x0001e847) list_set_graphic_pane_g

0x0009,

0xfaae,	// (0x0001ebc7) volume_small_pane_cp_g

0x385d,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x385d,	// (0x00012976) list_double2_large_graphic_pane_g1_cp2

0x3869,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3869,	// (0x00012982) list_double2_large_graphic_pane_g2_cp2

0x3878,	// (0x00012991) list_double2_large_graphic_pane_g3_cp2

0x3880,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3880,	// (0x00012999) list_double2_large_graphic_pane_t1_cp2

0x3896,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3896,	// (0x000129af) list_double2_large_graphic_pane_t2_cp2

0x5417,	// (0x00014530) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5417,	// (0x00014530) list_double_large_graphic_pane_g1_cp2

0x5428,	// (0x00014541) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5428,	// (0x00014541) list_double_large_graphic_pane_g2_cp2

0x39cc,	// (0x00012ae5) list_double_large_graphic_pane_g3_cp2

0x5437,	// (0x00014550) list_double_large_graphic_pane_g4_cp

0x543f,	// (0x00014558) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x543f,	// (0x00014558) list_double_large_graphic_pane_t1_cp2

0x5456,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5456,	// (0x0001456f) list_double_large_graphic_pane_t2_cp2

0x38ff,	// (0x00012a18) list_double2_graphic_pane_g1_cp2_ParamLimits

0x38ff,	// (0x00012a18) list_double2_graphic_pane_g1_cp2

0x390b,	// (0x00012a24) list_double2_graphic_pane_g2_cp2_ParamLimits

0x390b,	// (0x00012a24) list_double2_graphic_pane_g2_cp2

0x391a,	// (0x00012a33) list_double2_graphic_pane_g3_cp2

0x3922,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3922,	// (0x00012a3b) list_double2_graphic_pane_t1_cp2

0x3938,	// (0x00012a51) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3938,	// (0x00012a51) list_double2_graphic_pane_t2_cp2

0x394a,	// (0x00012a63) list_single_number_heading_pane_g1_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_number_heading_pane_g1_cp2

0x3956,	// (0x00012a6f) list_single_number_heading_pane_g2_cp2

0x395e,	// (0x00012a77) list_single_number_heading_pane_t1_cp2_ParamLimits

0x395e,	// (0x00012a77) list_single_number_heading_pane_t1_cp2

0x3974,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3974,	// (0x00012a8d) list_single_number_heading_pane_t2_cp2

0x3986,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3986,	// (0x00012a9f) list_single_number_heading_pane_t3_cp2

0x394a,	// (0x00012a63) list_single_heading_pane_g1_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_heading_pane_g1_cp2

0x3956,	// (0x00012a6f) list_single_heading_pane_g2_cp2

0x395e,	// (0x00012a77) list_single_heading_pane_t1_cp2_ParamLimits

0x395e,	// (0x00012a77) list_single_heading_pane_t1_cp2

0x5221,	// (0x0001433a) list_single_heading_pane_t2_cp2_ParamLimits

0x5221,	// (0x0001433a) list_single_heading_pane_t2_cp2

0x5171,	// (0x0001428a) list_double_graphic_pane_g1_cp2_ParamLimits

0x5171,	// (0x0001428a) list_double_graphic_pane_g1_cp2

0x517d,	// (0x00014296) list_double_graphic_pane_g2_cp2_ParamLimits

0x517d,	// (0x00014296) list_double_graphic_pane_g2_cp2

0x518c,	// (0x000142a5) list_double_graphic_pane_g3_cp2

0x5194,	// (0x000142ad) list_double_graphic_pane_t1_cp2_ParamLimits

0x5194,	// (0x000142ad) list_double_graphic_pane_t1_cp2

0x51aa,	// (0x000142c3) list_double_graphic_pane_t2_cp2_ParamLimits

0x51aa,	// (0x000142c3) list_double_graphic_pane_t2_cp2

0x39c0,	// (0x00012ad9) list_double_number_pane_g1_cp2_ParamLimits

0x39c0,	// (0x00012ad9) list_double_number_pane_g1_cp2

0x39cc,	// (0x00012ae5) list_double_number_pane_g2_cp2

0x5137,	// (0x00014250) list_double_number_pane_t1_cp2_ParamLimits

0x5137,	// (0x00014250) list_double_number_pane_t1_cp2

0x5149,	// (0x00014262) list_double_number_pane_t2_cp2_ParamLimits

0x5149,	// (0x00014262) list_double_number_pane_t2_cp2

0x515f,	// (0x00014278) list_double_number_pane_t3_cp2_ParamLimits

0x515f,	// (0x00014278) list_double_number_pane_t3_cp2

0x5021,	// (0x0001413a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5021,	// (0x0001413a) list_single_graphic_pane_g1_cp2

0x394a,	// (0x00012a63) list_single_graphic_pane_g2_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_graphic_pane_g2_cp2

0x3956,	// (0x00012a6f) list_single_graphic_pane_g3_cp2

0x4ff9,	// (0x00014112) list_single_graphic_pane_t1_cp2_ParamLimits

0x4ff9,	// (0x00014112) list_single_graphic_pane_t1_cp2

0x394a,	// (0x00012a63) list_single_number_pane_g1_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_number_pane_g1_cp2

0x3956,	// (0x00012a6f) list_single_number_pane_g2_cp2

0x4ff9,	// (0x00014112) list_single_number_pane_t1_cp2_ParamLimits

0x4ff9,	// (0x00014112) list_single_number_pane_t1_cp2

0x500f,	// (0x00014128) list_single_number_pane_t2_cp2_ParamLimits

0x500f,	// (0x00014128) list_single_number_pane_t2_cp2

0x3869,	// (0x00012982) list_double2_pane_g1_cp2_ParamLimits

0x3869,	// (0x00012982) list_double2_pane_g1_cp2

0x3878,	// (0x00012991) list_double2_pane_g2_cp2

0x3998,	// (0x00012ab1) list_double2_pane_t1_cp2_ParamLimits

0x3998,	// (0x00012ab1) list_double2_pane_t1_cp2

0x39ae,	// (0x00012ac7) list_double2_pane_t2_cp2_ParamLimits

0x39ae,	// (0x00012ac7) list_double2_pane_t2_cp2

0x39c0,	// (0x00012ad9) list_double_pane_g1_cp2_ParamLimits

0x39c0,	// (0x00012ad9) list_double_pane_g1_cp2

0x39cc,	// (0x00012ae5) list_double_pane_g2_cp2

0x39d4,	// (0x00012aed) list_double_pane_t1_cp2_ParamLimits

0x39d4,	// (0x00012aed) list_double_pane_t1_cp2

0x39ea,	// (0x00012b03) list_double_pane_t2_cp2_ParamLimits

0x39ea,	// (0x00012b03) list_double_pane_t2_cp2

0x3a12,	// (0x00012b2b) list_single_pane_cp2_g3

0x394a,	// (0x00012a63) list_single_pane_g1_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_pane_g1_cp2

0x3956,	// (0x00012a6f) list_single_pane_g2_cp2

0x3a22,	// (0x00012b3b) list_single_pane_t1_cp2_ParamLimits

0x3a22,	// (0x00012b3b) list_single_pane_t1_cp2

0x3a3a,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3a3a,	// (0x00012b53) list_single_large_graphic_pane_g1_cp2

0x3a46,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3a46,	// (0x00012b5f) list_single_large_graphic_pane_g2_cp2

0x3a52,	// (0x00012b6b) list_single_large_graphic_pane_g3_cp2

0x3a5a,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3a5a,	// (0x00012b73) list_single_large_graphic_pane_g4_cp1

0x3a74,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3a74,	// (0x00012b8d) list_single_large_graphic_pane_t1_cp2

0x4bfa,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x4bfa,	// (0x00013d13) list_single_graphic_heading_pane_g1_cp2

0x4fc2,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x4fc2,	// (0x000140db) list_single_graphic_heading_pane_g4_cp2

0x3956,	// (0x00012a6f) list_single_graphic_heading_pane_g5_cp2

0x395e,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x395e,	// (0x00012a77) list_single_graphic_heading_pane_t1_cp2

0x4fe7,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x4fe7,	// (0x00014100) list_single_graphic_heading_pane_t2_cp2

0x4fb6,	// (0x000140cf) list_single_2graphic_pane_g1_cp2_ParamLimits

0x4fb6,	// (0x000140cf) list_single_2graphic_pane_g1_cp2

0x4fc2,	// (0x000140db) list_single_2graphic_pane_g2_cp2_ParamLimits

0x4fc2,	// (0x000140db) list_single_2graphic_pane_g2_cp2

0x3956,	// (0x00012a6f) list_single_2graphic_pane_g3_cp2

0x4bee,	// (0x00013d07) list_single_2graphic_pane_g4_cp2_ParamLimits

0x4bee,	// (0x00013d07) list_single_2graphic_pane_g4_cp2

0x4fd1,	// (0x000140ea) list_single_2graphic_pane_t1_cp2_ParamLimits

0x4fd1,	// (0x000140ea) list_single_2graphic_pane_t1_cp2

0x1e28,	// (0x00010f41) list_highlight_pane_g10_cp1

0x4b98,	// (0x00013cb1) list_highlight_pane_g1_cp1

0x4ba0,	// (0x00013cb9) list_highlight_pane_g2_cp1

0x4ba8,	// (0x00013cc1) list_highlight_pane_g3_cp1

0x4bb0,	// (0x00013cc9) list_highlight_pane_g4_cp1

0x4bb8,	// (0x00013cd1) list_highlight_pane_g5_cp1

0x4bc0,	// (0x00013cd9) list_highlight_pane_g6_cp1

0x4bc8,	// (0x00013ce1) list_highlight_pane_g7_cp1

0x4bd0,	// (0x00013ce9) list_highlight_pane_g8_cp1

0x4bd8,	// (0x00013cf1) list_highlight_pane_g9_cp1

0x4ac6,	// (0x00013bdf) form_field_slider_pane_t3

0x4ad4,	// (0x00013bed) form_field_slider_pane_t4

0x4ae2,	// (0x00013bfb) slider_form_pane_ParamLimits

0x4ae2,	// (0x00013bfb) slider_form_pane

0x1f0f,	// (0x00011028) control_abbreviations

0x1f0f,	// (0x00011028) control_conventions

0x1f0f,	// (0x00011028) control_definitions

0x1f0f,	// (0x00011028) format_table_attribute

0x526b,	// (0x00014384) bg_popup_preview_window_pane_g9

0x1f0f,	// (0x00011028) format_table_data2

0x1f0f,	// (0x00011028) format_table_data3

0x1f0f,	// (0x00011028) format_table_data_example

0x0008,

0x1f0f,	// (0x00011028) intro_purpose

0xf8c5,	// (0x0001e9de) bg_popup_preview_window_pane_g

0x1f0f,	// (0x00011028) texts_category

0x1f0f,	// (0x00011028) texts_graphics

0x3a8a,	// (0x00012ba3) text_digital

0x3a99,	// (0x00012bb2) text_primary

0x3aa8,	// (0x00012bc1) text_primary_small

0x3ab7,	// (0x00012bd0) text_secondary

0x3ac6,	// (0x00012bdf) text_title

0x59db,	// (0x00014af4) bg_passive_tab_pane_g1_cp3_srt

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp3_srt

0x59d2,	// (0x00014aeb) bg_passive_tab_pane_g3_cp3_srt

0x1fef,	// (0x00011108) bg_active_tab_pane_cp3_srt_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp3_srt

0x59e4,	// (0x00014afd) tabs_4_active_pane_srt_g1

0x201f,	// (0x00011138) tabs_4_active_pane_srt_t1_ParamLimits

0x201f,	// (0x00011138) tabs_4_active_pane_srt_t1

0x59db,	// (0x00014af4) bg_active_tab_pane_g1_cp3_copy1

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp3_copy1

0x59d2,	// (0x00014aeb) bg_active_tab_pane_g3_cp3_copy1

0x1fef,	// (0x00011108) tabs_2_long_active_pane_srt_ParamLimits

0x1fef,	// (0x00011108) tabs_2_long_active_pane_srt

0x1fef,	// (0x00011108) tabs_2_long_passive_pane_srt_ParamLimits

0x1fef,	// (0x00011108) tabs_2_long_passive_pane_srt

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp4_srt_ParamLimits

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp4_srt

0x5698,	// (0x000147b1) bg_passive_tab_pane_g1_cp4_srt

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp4_srt

0x568f,	// (0x000147a8) bg_passive_tab_pane_g3_cp4_srt

0x3013,	// (0x0001212c) bg_active_tab_pane_cp4_srt_ParamLimits

0x3013,	// (0x0001212c) bg_active_tab_pane_cp4_srt

0x3021,	// (0x0001213a) tabs_2_long_active_pane_srt_t1_ParamLimits

0x3021,	// (0x0001213a) tabs_2_long_active_pane_srt_t1

0x5698,	// (0x000147b1) bg_active_tab_pane_g1_cp4_srt

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp4_srt

0x568f,	// (0x000147a8) bg_active_tab_pane_g3_cp4_srt

0x2289,	// (0x000113a2) tabs_3_long_active_pane_srt_ParamLimits

0x2289,	// (0x000113a2) tabs_3_long_active_pane_srt

0x2289,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2289,	// (0x000113a2) tabs_3_long_passive_pane_cp_srt

0x2289,	// (0x000113a2) tabs_3_long_passive_pane_srt_ParamLimits

0x2289,	// (0x000113a2) tabs_3_long_passive_pane_srt

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp5_srt_ParamLimits

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp5_srt

0x380f,	// (0x00012928) bg_passive_tab_pane_g1_cp5_srt

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp5_srt

0x3806,	// (0x0001291f) bg_passive_tab_pane_g3_cp5_srt

0x3013,	// (0x0001212c) bg_active_tab_pane_cp5_srt_ParamLimits

0x3013,	// (0x0001212c) bg_active_tab_pane_cp5_srt

0x3040,	// (0x00012159) tabs_3_long_active_pane_srt_t1_ParamLimits

0x3040,	// (0x00012159) tabs_3_long_active_pane_srt_t1

0x380f,	// (0x00012928) bg_active_tab_pane_g1_cp5_srt

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp5_srt

0x3806,	// (0x0001291f) bg_active_tab_pane_g3_cp5_srt

0x5681,	// (0x0001479a) navi_text_pane_srt_t1

0x5679,	// (0x00014792) navi_icon_pane_srt_g1

0x3c8d,	// (0x00012da6) midp_editing_number_pane_srt

0x3ad5,	// (0x00012bee) midp_ticker_pane_srt

0x3c95,	// (0x00012dae) midp_ticker_pane_srt_g1

0x3c9d,	// (0x00012db6) midp_ticker_pane_srt_g2

0x0001,

0xf74d,	// (0x0001e866) midp_ticker_pane_srt_g

0x3ca5,	// (0x00012dbe) midp_ticker_pane_srt_t1

0x566a,	// (0x00014783) midp_editing_number_pane_t1_copy1

0x3add,	// (0x00012bf6) listscroll_midp_pane

0x3add,	// (0x00012bf6) midp_form_pane

0x3b45,	// (0x00012c5e) midp_info_popup_window_ParamLimits

0x3b45,	// (0x00012c5e) midp_info_popup_window

0x2f61,	// (0x0001207a) bg_popup_sub_pane_cp50_ParamLimits

0x2f61,	// (0x0001207a) bg_popup_sub_pane_cp50

0x47db,	// (0x000138f4) listscroll_midp_info_pane_ParamLimits

0x47db,	// (0x000138f4) listscroll_midp_info_pane

0x47c3,	// (0x000138dc) listscroll_form_midp_pane_ParamLimits

0x47c3,	// (0x000138dc) listscroll_form_midp_pane

0x47cf,	// (0x000138e8) scroll_bar_cp050

0x47a3,	// (0x000138bc) list_midp_pane

0x65ef,	// (0x00015708) signal_pane_g2_cp

0x46dd,	// (0x000137f6) listscroll_midp_info_pane_t1_ParamLimits

0x46dd,	// (0x000137f6) listscroll_midp_info_pane_t1

0x46f5,	// (0x0001380e) listscroll_midp_info_pane_t2_ParamLimits

0x46f5,	// (0x0001380e) listscroll_midp_info_pane_t2

0x4733,	// (0x0001384c) listscroll_midp_info_pane_t3_ParamLimits

0x4733,	// (0x0001384c) listscroll_midp_info_pane_t3

0x476d,	// (0x00013886) listscroll_midp_info_pane_t4_ParamLimits

0x476d,	// (0x00013886) listscroll_midp_info_pane_t4

0x0003,

0xf800,	// (0x0001e919) listscroll_midp_info_pane_t_ParamLimits

0xf800,	// (0x0001e919) listscroll_midp_info_pane_t

0x2fc2,	// (0x000120db) scroll_pane_cp21

0x4681,	// (0x0001379a) form_midp_field_choice_group_pane

0x468a,	// (0x000137a3) form_midp_field_text_pane

0x46c3,	// (0x000137dc) form_midp_field_time_pane

0x46cb,	// (0x000137e4) form_midp_gauge_slider_pane

0x46d4,	// (0x000137ed) form_midp_gauge_wait_pane

0x1f0f,	// (0x00011028) form_midp_image_pane

0xc4a4,	// (0x0001b5bd) list_single_midp_pane_ParamLimits

0xc4a4,	// (0x0001b5bd) list_single_midp_pane

0x463a,	// (0x00013753) form_midp_field_text_pane_t1

0x4439,	// (0x00013552) input_focus_pane_cp050

0x465b,	// (0x00013774) list_midp_form_text_pane

0x4609,	// (0x00013722) form_midp_field_choice_group_pane_t1

0x4617,	// (0x00013730) input_focus_pane_cp051

0x462b,	// (0x00013744) list_midp_choice_pane

0x1f0f,	// (0x00011028) status_idle_pane

0x45ed,	// (0x00013706) form_midp_field_time_pane_t1

0x1e28,	// (0x00010f41) wait_anim_pane_g2_copy1

0x45fb,	// (0x00013714) form_midp_field_time_pane_t2

0x0001,

0x3bef,	// (0x00012d08) aid_navinavi_width_2_pane

0xf7fb,	// (0x0001e914) form_midp_field_time_pane_t

0x1f0f,	// (0x00011028) input_focus_pane_cp052

0x1f0f,	// (0x00011028) bg_input_focus_pane_cp040

0x45ad,	// (0x000136c6) form_midp_gauge_slider_pane_t1

0x45bb,	// (0x000136d4) form_midp_gauge_slider_pane_t2

0x45c9,	// (0x000136e2) form_midp_gauge_slider_pane_t3

0x45d7,	// (0x000136f0) form_midp_gauge_slider_pane_t4

0x0003,

0xf7f2,	// (0x0001e90b) form_midp_gauge_slider_pane_t

0x45e5,	// (0x000136fe) form_midp_slider_pane

0x1fef,	// (0x00011108) bg_input_focus_pane_cp041_ParamLimits

0x1fef,	// (0x00011108) bg_input_focus_pane_cp041

0x457d,	// (0x00013696) form_midp_gauge_wait_pane_t1_ParamLimits

0x457d,	// (0x00013696) form_midp_gauge_wait_pane_t1

0x458f,	// (0x000136a8) form_midp_gauge_wait_pane_t2_ParamLimits

0x458f,	// (0x000136a8) form_midp_gauge_wait_pane_t2

0x0001,

0xf7ed,	// (0x0001e906) form_midp_gauge_wait_pane_t_ParamLimits

0xf7ed,	// (0x0001e906) form_midp_gauge_wait_pane_t

0x45a1,	// (0x000136ba) form_midp_wait_pane_ParamLimits

0x45a1,	// (0x000136ba) form_midp_wait_pane

0x4547,	// (0x00013660) form_midp_image_pane_g1

0x4550,	// (0x00013669) form_midp_image_pane_t1

0x455f,	// (0x00013678) form_midp_image_pane_t2

0x456e,	// (0x00013687) form_midp_image_pane_t3

0x0002,

0xf7e6,	// (0x0001e8ff) form_midp_image_pane_t

0x452f,	// (0x00013648) list_single_midp_pane_g1

0xc495,	// (0x0001b5ae) list_single_midp_pane_t1

0x451b,	// (0x00013634) list_midp_form_item_pane_ParamLimits

0x451b,	// (0x00013634) list_midp_form_item_pane

0x3b97,	// (0x00012cb0) list_midp_form_item_pane_t1

0x3ba6,	// (0x00012cbf) midp_ticker_pane_g1

0x3bb2,	// (0x00012ccb) midp_ticker_pane_g2

0x0001,

0xf733,	// (0x0001e84c) midp_ticker_pane_g

0x3bbe,	// (0x00012cd7) midp_ticker_pane_t1

0x566a,	// (0x00014783) midp_editing_number_pane_t1

0x587b,	// (0x00014994) midp_editing_number_pane

0x5887,	// (0x000149a0) midp_ticker_pane

0x5648,	// (0x00014761) ai_message_heading_pane

0x1f0f,	// (0x00011028) bg_popup_window_pane_cp14

0x5650,	// (0x00014769) listscroll_ai_message_pane

0x55d2,	// (0x000146eb) ai_message_heading_pane_g1_ParamLimits

0x55d2,	// (0x000146eb) ai_message_heading_pane_g1

0x55de,	// (0x000146f7) ai_message_heading_pane_g2_ParamLimits

0x55de,	// (0x000146f7) ai_message_heading_pane_g2

0x55ea,	// (0x00014703) ai_message_heading_pane_g3_ParamLimits

0x55ea,	// (0x00014703) ai_message_heading_pane_g3

0x55f6,	// (0x0001470f) ai_message_heading_pane_g4_ParamLimits

0x55f6,	// (0x0001470f) ai_message_heading_pane_g4

0x0003,

0xf927,	// (0x0001ea40) ai_message_heading_pane_g_ParamLimits

0xf927,	// (0x0001ea40) ai_message_heading_pane_g

0x5602,	// (0x0001471b) ai_message_heading_pane_t1_ParamLimits

0x5602,	// (0x0001471b) ai_message_heading_pane_t1

0x561c,	// (0x00014735) ai_message_heading_pane_t2_ParamLimits

0x561c,	// (0x00014735) ai_message_heading_pane_t2

0x0001,

0xf930,	// (0x0001ea49) ai_message_heading_pane_t_ParamLimits

0xf930,	// (0x0001ea49) ai_message_heading_pane_t

0x562e,	// (0x00014747) bg_popup_heading_pane_cp1_ParamLimits

0x562e,	// (0x00014747) bg_popup_heading_pane_cp1

0x55c0,	// (0x000146d9) list_ai_message_pane_ParamLimits

0x55c0,	// (0x000146d9) list_ai_message_pane

0x2fc2,	// (0x000120db) scroll_pane_cp10

0x555c,	// (0x00014675) list_ai_message_pane_g1

0x5564,	// (0x0001467d) list_ai_message_pane_g2

0x0001,

0xf904,	// (0x0001ea1d) list_ai_message_pane_g

0x556c,	// (0x00014685) list_ai_message_pane_t1_ParamLimits

0x556c,	// (0x00014685) list_ai_message_pane_t1

0x5581,	// (0x0001469a) list_ai_message_pane_t2_ParamLimits

0x5581,	// (0x0001469a) list_ai_message_pane_t2

0x5596,	// (0x000146af) list_ai_message_pane_t3_ParamLimits

0x5596,	// (0x000146af) list_ai_message_pane_t3

0x55ab,	// (0x000146c4) list_ai_message_pane_t4_ParamLimits

0x55ab,	// (0x000146c4) list_ai_message_pane_t4

0x0003,

0xf909,	// (0x0001ea22) list_ai_message_pane_t_ParamLimits

0xf909,	// (0x0001ea22) list_ai_message_pane_t

0x554a,	// (0x00014663) cell_ai_soft_ind_pane_ParamLimits

0x554a,	// (0x00014663) cell_ai_soft_ind_pane

0x3bd0,	// (0x00012ce9) cell_ai_soft_ind_pane_g1_ParamLimits

0x3bd0,	// (0x00012ce9) cell_ai_soft_ind_pane_g1

0x1f0f,	// (0x00011028) grid_highlight_cp1

0x3bdd,	// (0x00012cf6) text_secondary_cp56_ParamLimits

0x3bdd,	// (0x00012cf6) text_secondary_cp56

0x551f,	// (0x00014638) example_general_pane_ParamLimits

0x551f,	// (0x00014638) example_general_pane

0x552b,	// (0x00014644) example_parent_pane_g1_ParamLimits

0x552b,	// (0x00014644) example_parent_pane_g1

0x5537,	// (0x00014650) example_parent_pane_t1_ParamLimits

0x5537,	// (0x00014650) example_parent_pane_t1

0xd765,	// (0x0001c87e) popup_preview_text_window_ParamLimits

0xd765,	// (0x0001c87e) popup_preview_text_window

0x3a1a,	// (0x00012b33) list_single_pane_cp2_g4

0x2365,	// (0x0001147e) bg_popup_preview_window_pane_ParamLimits

0x2365,	// (0x0001147e) bg_popup_preview_window_pane

0x5273,	// (0x0001438c) popup_preview_text_window_t1_ParamLimits

0x5273,	// (0x0001438c) popup_preview_text_window_t1

0x5291,	// (0x000143aa) popup_preview_text_window_t2_ParamLimits

0x5291,	// (0x000143aa) popup_preview_text_window_t2

0x52da,	// (0x000143f3) popup_preview_text_window_t3_ParamLimits

0x52da,	// (0x000143f3) popup_preview_text_window_t3

0x531f,	// (0x00014438) popup_preview_text_window_t4_ParamLimits

0x531f,	// (0x00014438) popup_preview_text_window_t4

0x0004,

0xf8d8,	// (0x0001e9f1) popup_preview_text_window_t_ParamLimits

0xf8d8,	// (0x0001e9f1) popup_preview_text_window_t

0x539d,	// (0x000144b6) scroll_pane_cp11

0x4321,	// (0x0001343a) bg_popup_preview_window_pane_g1

0x5233,	// (0x0001434c) bg_popup_preview_window_pane_g2

0x523b,	// (0x00014354) bg_popup_preview_window_pane_g3

0x5243,	// (0x0001435c) bg_popup_preview_window_pane_g4

0x524b,	// (0x00014364) bg_popup_preview_window_pane_g5

0x5253,	// (0x0001436c) bg_popup_preview_window_pane_g6

0x525b,	// (0x00014374) bg_popup_preview_window_pane_g7

0x5263,	// (0x0001437c) bg_popup_preview_window_pane_g8

0xcc3e,	// (0x0001bd57) aid_popup_width_pane

0xd747,	// (0x0001c860) popup_midp_note_alarm_window_ParamLimits

0xd747,	// (0x0001c860) popup_midp_note_alarm_window

0x2cbf,	// (0x00011dd8) data_form_pane_ParamLimits

0xc191,	// (0x0001b2aa) form_field_data_pane_g1

0x2d44,	// (0x00011e5d) form_field_data_pane_t1_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_ParamLimits

0x2cf9,	// (0x00011e12) data_form_wide_pane_ParamLimits

0xc199,	// (0x0001b2b2) form_field_data_wide_pane_g1

0xc1a5,	// (0x0001b2be) form_field_data_wide_pane_t1_ParamLimits

0x25f7,	// (0x00011710) input_focus_pane_cp6_ParamLimits

0x2f6f,	// (0x00012088) input_popup_find_pane_g1_ParamLimits

0x2f6f,	// (0x00012088) input_popup_find_pane_g1

0xcffd,	// (0x0001c116) aid_navi_side_left_pane

0xd00d,	// (0x0001c126) aid_navi_side_right_pane

0x4c99,	// (0x00013db2) bg_popup_window_pane_cp30_ParamLimits

0x4c99,	// (0x00013db2) bg_popup_window_pane_cp30

0x4d13,	// (0x00013e2c) popup_midp_note_alarm_window_g1_ParamLimits

0x4d13,	// (0x00013e2c) popup_midp_note_alarm_window_g1

0x4d43,	// (0x00013e5c) popup_midp_note_alarm_window_t1_ParamLimits

0x4d43,	// (0x00013e5c) popup_midp_note_alarm_window_t1

0x4de4,	// (0x00013efd) popup_midp_note_alarm_window_t2_ParamLimits

0x4de4,	// (0x00013efd) popup_midp_note_alarm_window_t2

0x4e92,	// (0x00013fab) popup_midp_note_alarm_window_t3_ParamLimits

0x4e92,	// (0x00013fab) popup_midp_note_alarm_window_t3

0x4eba,	// (0x00013fd3) popup_midp_note_alarm_window_t4_ParamLimits

0x4eba,	// (0x00013fd3) popup_midp_note_alarm_window_t4

0x4eda,	// (0x00013ff3) popup_midp_note_alarm_window_t5_ParamLimits

0x4eda,	// (0x00013ff3) popup_midp_note_alarm_window_t5

0x000a,

0xf875,	// (0x0001e98e) popup_midp_note_alarm_window_t_ParamLimits

0xf875,	// (0x0001e98e) popup_midp_note_alarm_window_t

0x4f86,	// (0x0001409f) wait_bar_pane_cp1_ParamLimits

0x4f86,	// (0x0001409f) wait_bar_pane_cp1

0x1f0f,	// (0x00011028) wait_anim_pane_copy1

0x1f0f,	// (0x00011028) wait_border_pane_copy1

0x4993,	// (0x00013aac) wait_border_pane_g1_copy1

0xc1bf,	// (0x0001b2d8) form_field_popup_pane_g1

0xc1c7,	// (0x0001b2e0) form_field_popup_pane_t1_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_cp7_ParamLimits

0x2cbf,	// (0x00011dd8) list_form_pane_ParamLimits

0xc1df,	// (0x0001b2f8) form_field_popup_wide_pane_g1

0xc1e7,	// (0x0001b300) form_field_popup_wide_pane_t1_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_cp8_ParamLimits

0x2d79,	// (0x00011e92) list_form_wide_pane_ParamLimits

0x5a51,	// (0x00014b6a) aid_size_cell_graphic_pane

0xc26c,	// (0x0001b385) data_form_pane_t1_ParamLimits

0xc4cc,	// (0x0001b5e5) data_form_wide_pane_t1_ParamLimits

0x3eea,	// (0x00013003) bg_status_flat_pane

0x1f4f,	// (0x00011068) title_pane_t1_ParamLimits

0x1fb7,	// (0x000110d0) title_pane_t2_ParamLimits

0x1fdd,	// (0x000110f6) title_pane_t3_ParamLimits

0xf532,	// (0x0001e64b) title_pane_t_ParamLimits

0x344e,	// (0x00012567) level_1_signal_ParamLimits

0x345b,	// (0x00012574) level_2_signal_ParamLimits

0x3468,	// (0x00012581) level_3_signal_ParamLimits

0x3475,	// (0x0001258e) level_4_signal_ParamLimits

0x3482,	// (0x0001259b) level_5_signal_ParamLimits

0x348f,	// (0x000125a8) level_6_signal_ParamLimits

0x349c,	// (0x000125b5) level_7_signal_ParamLimits

0x344e,	// (0x00012567) level_1_battery_ParamLimits

0x345b,	// (0x00012574) level_2_battery_ParamLimits

0x3468,	// (0x00012581) level_3_battery_ParamLimits

0x3475,	// (0x0001258e) level_4_battery_ParamLimits

0x3482,	// (0x0001259b) level_5_battery_ParamLimits

0x348f,	// (0x000125a8) level_6_battery_ParamLimits

0x349c,	// (0x000125b5) level_7_battery_ParamLimits

0x4b98,	// (0x00013cb1) bg_status_flat_pane_g1

0x4ba0,	// (0x00013cb9) bg_status_flat_pane_g2

0x4ba8,	// (0x00013cc1) bg_status_flat_pane_g3

0x4bb0,	// (0x00013cc9) bg_status_flat_pane_g4

0x4bb8,	// (0x00013cd1) bg_status_flat_pane_g5

0x4bc0,	// (0x00013cd9) bg_status_flat_pane_g6

0x4bc8,	// (0x00013ce1) bg_status_flat_pane_g7

0x2005,	// (0x0001111e) tabs_3_active_pane_t1_ParamLimits

0x2005,	// (0x0001111e) tabs_3_passive_pane_t1_ParamLimits

0x201f,	// (0x00011138) tabs_4_active_pane_t1_ParamLimits

0x201f,	// (0x00011138) tabs_4_1_passive_pane_t1_ParamLimits

0x3001,	// (0x0001211a) tabs_2_active_pane_t1_ParamLimits

0x3001,	// (0x0001211a) tabs_2_passive_pane_t1_ParamLimits

0x3013,	// (0x0001212c) bg_active_tab_pane_cp4_ParamLimits

0x3021,	// (0x0001213a) tabs_2_long_active_pane_t1_ParamLimits

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp4_ParamLimits

0xd9a9,	// (0x0001cac2) list_single_midp_graphic_pane_t1_ParamLimits

0x3013,	// (0x0001212c) bg_active_tab_pane_cp5_ParamLimits

0x3040,	// (0x00012159) tabs_3_long_active_pane_t1_ParamLimits

0x3034,	// (0x0001214d) bg_passive_tab_pane_cp5_ParamLimits

0xd9a9,	// (0x0001cac2) list_single_midp_graphic_pane_t1

0x3eea,	// (0x00013003) bg_status_flat_pane_ParamLimits

0x3fa9,	// (0x000130c2) indicator_pane_cp2_ParamLimits

0x3fa9,	// (0x000130c2) indicator_pane_cp2

0x40cd,	// (0x000131e6) navi_pane_srt_ParamLimits

0x40cd,	// (0x000131e6) navi_pane_srt

0x40f1,	// (0x0001320a) popup_clock_digital_analogue_window_cp1

0x20e4,	// (0x000111fd) indicator_pane_t1

0x3ad5,	// (0x00012bee) copy_highlight_pane

0x3ad5,	// (0x00012bee) cursor_graphics_pane

0x3ad5,	// (0x00012bee) graphic_within_text_pane

0x3ad5,	// (0x00012bee) link_highlight_pane

0x5360,	// (0x00014479) popup_preview_text_window_t5_ParamLimits

0x5360,	// (0x00014479) popup_preview_text_window_t5

0x3bf7,	// (0x00012d10) cursor_digital_pane

0x3bf7,	// (0x00012d10) cursor_primary_pane

0x3c08,	// (0x00012d21) cursor_primary_small_pane

0x3c10,	// (0x00012d29) cursor_secondary_pane

0x3c18,	// (0x00012d31) cursor_title_pane

0x3bf7,	// (0x00012d10) link_highlight_digital_pane

0x3bff,	// (0x00012d18) link_highlight_primary_pane

0x3c08,	// (0x00012d21) link_highlight_primary_small_pane

0x3c10,	// (0x00012d29) link_highlight_secondary_pane

0x3c18,	// (0x00012d31) link_highlight_title_pane

0x3bf7,	// (0x00012d10) copy_highlight_digital_pane

0x3bf7,	// (0x00012d10) copy_highlight_primary_pane

0x3c08,	// (0x00012d21) copy_highlight_primary_small_pane

0x3c10,	// (0x00012d29) copy_highlight_secondary_pane

0x3c18,	// (0x00012d31) copy_highlight_title_pane

0x3c10,	// (0x00012d29) graphic_text_digital_pane

0x4c48,	// (0x00013d61) graphic_text_primary_pane

0x4c51,	// (0x00013d6a) graphic_text_primary_small_pane

0x3c08,	// (0x00012d21) graphic_text_secondary_pane

0x3bf7,	// (0x00012d10) graphic_text_title_pane

0x3c20,	// (0x00012d39) cursor_primary_pane_g1

0x4c3a,	// (0x00013d53) cursor_text_primary_t1

0x4c24,	// (0x00013d3d) cursor_primary_small_pane_g1

0x4c2c,	// (0x00013d45) cursor_text_primary_small_t1

0x4c0e,	// (0x00013d27) cursor_primary_small_pane_g1_copy1

0x4c16,	// (0x00013d2f) cursor_text_primary_small_t1_copy1

0x4be0,	// (0x00013cf9) cursor_text_title_t1

0x4c06,	// (0x00013d1f) cursor_title_pane_g1

0x3c20,	// (0x00012d39) cursor_digital_pane_g1

0x3c28,	// (0x00012d41) cursor_text_digital_t1

0x3c36,	// (0x00012d4f) link_highlight_primary_pane_g1

0x4b89,	// (0x00013ca2) link_highlight_primary_pane_t1

0x3c36,	// (0x00012d4f) link_highlight_primary_small_pane_g1

0x3c3e,	// (0x00012d57) link_highlight_primary_small_pane_t1

0x3c4d,	// (0x00012d66) link_highlight_secondary_pane_g1

0x3c55,	// (0x00012d6e) link_highlight_secondary_pane_t1

0x4aee,	// (0x00013c07) link_highlight_title_pane_g1

0x4b05,	// (0x00013c1e) link_highlight_title_pane_t1

0x4aee,	// (0x00013c07) link_highlight_digital_pane_g1

0x4af6,	// (0x00013c0f) link_highlight_digital_pane_t1

0x49ae,	// (0x00013ac7) copy_highlight_primary_pane_g1

0x49d4,	// (0x00013aed) copy_highlight_primary_pane_t1

0x49ae,	// (0x00013ac7) copy_highlight_primary_small_pane_g1

0x49c5,	// (0x00013ade) copy_highlight_primary_small_pane_t1

0x3c64,	// (0x00012d7d) copy_highlight_secondary_pane_g1

0x3c6c,	// (0x00012d85) copy_highlight_secondary_pane_t1

0x49ae,	// (0x00013ac7) copy_highlight_title_pane_g1

0x49b6,	// (0x00013acf) copy_highlight_title_pane_t1

0x49ae,	// (0x00013ac7) copy_highlight_digital_pane_g1

0x5bbd,	// (0x00014cd6) copy_highlight_digital_pane_t1

0x5b11,	// (0x00014c2a) graphic_text_primary_pane_g1

0x5ba1,	// (0x00014cba) graphic_text_primary_pane_t1

0x5baf,	// (0x00014cc8) graphic_text_primary_pane_t2

0x0001,

0xf99f,	// (0x0001eab8) graphic_text_primary_pane_t

0x5b7d,	// (0x00014c96) graphic_text_primary_small_pane_g1

0x5b85,	// (0x00014c9e) graphic_text_primary_small_pane_t1

0x5b93,	// (0x00014cac) graphic_text_primary_small_pane_t2

0x0001,

0xf99a,	// (0x0001eab3) graphic_text_primary_small_pane_t

0x5b59,	// (0x00014c72) graphic_text_secondary_pane_g1

0x5b61,	// (0x00014c7a) graphic_text_secondary_pane_t1

0x5b6f,	// (0x00014c88) graphic_text_secondary_pane_t2

0x0001,

0xf995,	// (0x0001eaae) graphic_text_secondary_pane_t

0x5b35,	// (0x00014c4e) graphic_text_title_pane_g1

0x5b3d,	// (0x00014c56) graphic_text_title_pane_t1

0x5b4b,	// (0x00014c64) graphic_text_title_pane_t2

0x0001,

0xf990,	// (0x0001eaa9) graphic_text_title_pane_t

0x5b11,	// (0x00014c2a) graphic_text_digital_pane_g1

0x5b19,	// (0x00014c32) graphic_text_digital_pane_t1

0x5b27,	// (0x00014c40) graphic_text_digital_pane_t2

0x0001,

0xf98b,	// (0x0001eaa4) graphic_text_digital_pane_t

0x1fef,	// (0x00011108) navi_icon_pane_srt_ParamLimits

0x1fef,	// (0x00011108) navi_icon_pane_srt

0x1f0f,	// (0x00011028) navi_midp_pane_srt

0x1f0f,	// (0x00011028) navi_navi_pane_srt

0x1fef,	// (0x00011108) navi_text_pane_srt_ParamLimits

0x1fef,	// (0x00011108) navi_text_pane_srt

0x51ec,	// (0x00014305) navi_navi_icon_text_pane_srt

0x5206,	// (0x0001431f) navi_navi_pane_srt_g1_ParamLimits

0x5206,	// (0x0001431f) navi_navi_pane_srt_g1

0x51f4,	// (0x0001430d) navi_navi_pane_srt_g2_ParamLimits

0x51f4,	// (0x0001430d) navi_navi_pane_srt_g2

0x0001,

0xf8c0,	// (0x0001e9d9) navi_navi_pane_srt_g_ParamLimits

0xf8c0,	// (0x0001e9d9) navi_navi_pane_srt_g

0x5218,	// (0x00014331) navi_navi_tabs_pane_srt

0x51ec,	// (0x00014305) navi_navi_text_pane_srt

0x51ec,	// (0x00014305) navi_navi_volume_pane_srt

0x5b02,	// (0x00014c1b) navi_navi_text_pane_srt_t1

0xdd0d,	// (0x0001ce26) navi_navi_volume_pane_srt_g1

0xdd15,	// (0x0001ce2e) volume_small_pane_srt_ParamLimits

0xdd15,	// (0x0001ce2e) volume_small_pane_srt

0xd2a4,	// (0x0001c3bd) volume_small_pane_srt_g1_ParamLimits

0xd2a4,	// (0x0001c3bd) volume_small_pane_srt_g1

0xd2b4,	// (0x0001c3cd) volume_small_pane_srt_g2_ParamLimits

0xd2b4,	// (0x0001c3cd) volume_small_pane_srt_g2

0xd2c5,	// (0x0001c3de) volume_small_pane_srt_g3_ParamLimits

0xd2c5,	// (0x0001c3de) volume_small_pane_srt_g3

0xd2d6,	// (0x0001c3ef) volume_small_pane_srt_g4_ParamLimits

0xd2d6,	// (0x0001c3ef) volume_small_pane_srt_g4

0xd2e7,	// (0x0001c400) volume_small_pane_srt_g5_ParamLimits

0xd2e7,	// (0x0001c400) volume_small_pane_srt_g5

0xd2f8,	// (0x0001c411) volume_small_pane_srt_g6_ParamLimits

0xd2f8,	// (0x0001c411) volume_small_pane_srt_g6

0xd309,	// (0x0001c422) volume_small_pane_srt_g7_ParamLimits

0xd309,	// (0x0001c422) volume_small_pane_srt_g7

0xd31a,	// (0x0001c433) volume_small_pane_srt_g8_ParamLimits

0xd31a,	// (0x0001c433) volume_small_pane_srt_g8

0xd32b,	// (0x0001c444) volume_small_pane_srt_g9_ParamLimits

0xd32b,	// (0x0001c444) volume_small_pane_srt_g9

0xd33c,	// (0x0001c455) volume_small_pane_srt_g10_ParamLimits

0xd33c,	// (0x0001c455) volume_small_pane_srt_g10

0x0009,

0xf738,	// (0x0001e851) volume_small_pane_srt_g_ParamLimits

0xf738,	// (0x0001e851) volume_small_pane_srt_g

0x240e,	// (0x00011527) query_popup_data_pane_cp2

0x5ae8,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x5ae8,	// (0x00014c01) navi_navi_icon_text_pane_srt_t1

0x4c48,	// (0x00013d61) navi_tabs_2_long_pane_srt

0x4c48,	// (0x00013d61) navi_tabs_2_pane_srt

0x4c48,	// (0x00013d61) navi_tabs_3_long_pane_srt

0x4c48,	// (0x00013d61) navi_tabs_3_pane_srt

0x4c48,	// (0x00013d61) navi_tabs_4_pane_srt

0xdced,	// (0x0001ce06) tabs_2_active_pane_srt_ParamLimits

0xdced,	// (0x0001ce06) tabs_2_active_pane_srt

0xdcfd,	// (0x0001ce16) tabs_2_passive_pane_srt_ParamLimits

0xdcfd,	// (0x0001ce16) tabs_2_passive_pane_srt

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp1_srt

0x5acf,	// (0x00014be8) bg_passive_tab_pane_g1_cp1_srt

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp1_srt

0x5ac6,	// (0x00014bdf) bg_passive_tab_pane_g3_cp1_srt

0x1fef,	// (0x00011108) bg_active_tab_pane_cp1_srt_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp1_srt

0x5ad8,	// (0x00014bf1) tabs_2_active_pane_srt_g1

0x3001,	// (0x0001211a) tabs_2_active_pane_srt_t1_ParamLimits

0x3001,	// (0x0001211a) tabs_2_active_pane_srt_t1

0x5acf,	// (0x00014be8) bg_active_tab_pane_g1_cp1_srt

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp1_srt

0x5ac6,	// (0x00014bdf) bg_active_tab_pane_g3_cp1_srt

0xdcba,	// (0x0001cdd3) tabs_3_active_pane_srt_ParamLimits

0xdcba,	// (0x0001cdd3) tabs_3_active_pane_srt

0xdccb,	// (0x0001cde4) tabs_3_passive_pane_cp_srt_ParamLimits

0xdccb,	// (0x0001cde4) tabs_3_passive_pane_cp_srt

0xdcdc,	// (0x0001cdf5) tabs_3_passive_pane_srt_ParamLimits

0xdcdc,	// (0x0001cdf5) tabs_3_passive_pane_srt

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x3e24,	// (0x00012f3d) bg_passive_tab_pane_cp2_srt

0x3c84,	// (0x00012d9d) bg_passive_tab_pane_g1_cp2_srt

0x3780,	// (0x00012899) bg_passive_tab_pane_g2_cp2_srt

0x3c7b,	// (0x00012d94) bg_passive_tab_pane_g3_cp2_srt

0x1fef,	// (0x00011108) bg_active_tab_pane_cp2_srt_ParamLimits

0x1fef,	// (0x00011108) bg_active_tab_pane_cp2_srt

0x5abe,	// (0x00014bd7) tabs_3_active_pane_srt_g1

0x2005,	// (0x0001111e) tabs_3_active_pane_srt_t1_ParamLimits

0x2005,	// (0x0001111e) tabs_3_active_pane_srt_t1

0x3c84,	// (0x00012d9d) bg_active_tab_pane_g1_cp2_srt

0x3780,	// (0x00012899) bg_active_tab_pane_g2_cp2_srt

0x3c7b,	// (0x00012d94) bg_active_tab_pane_g3_cp2_srt

0xdc72,	// (0x0001cd8b) tabs_4_active_pane_srt_ParamLimits

0xdc72,	// (0x0001cd8b) tabs_4_active_pane_srt

0xdc84,	// (0x0001cd9d) tabs_4_passive_pane_cp2_srt_ParamLimits

0xdc84,	// (0x0001cd9d) tabs_4_passive_pane_cp2_srt

0xd4a1,	// (0x0001c5ba) aid_size_cell_toolbar

0x3034,	// (0x0001214d) main_idle_act_pane_ParamLimits

0xd602,	// (0x0001c71b) popup_large_graphic_colour_window_ParamLimits

0xd8b6,	// (0x0001c9cf) popup_toolbar_window_ParamLimits

0xd8b6,	// (0x0001c9cf) popup_toolbar_window

0x58ac,	// (0x000149c5) list_single_graphic_2heading_pane_ParamLimits

0x58ac,	// (0x000149c5) list_single_graphic_2heading_pane

0x320b,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane

0x321d,	// (0x00012336) aid_size_cell_apps_grid_prt_pane

0x3e24,	// (0x00012f3d) bg_wml_button_pane_cp1_ParamLimits

0x3e24,	// (0x00012f3d) bg_wml_button_pane_cp1

0x463a,	// (0x00013753) form_midp_field_text_pane_t1_ParamLimits

0x4439,	// (0x00013552) input_focus_pane_cp050_ParamLimits

0x465b,	// (0x00013774) list_midp_form_text_pane_ParamLimits

0x4617,	// (0x00013730) input_focus_pane_cp051_ParamLimits

0x462b,	// (0x00013744) list_midp_choice_pane_ParamLimits

0x44e9,	// (0x00013602) list_single_2graphic_pane_cp3_ParamLimits

0x44e9,	// (0x00013602) list_single_2graphic_pane_cp3

0x44fc,	// (0x00013615) list_single_midp_graphic_pane_ParamLimits

0x44fc,	// (0x00013615) list_single_midp_graphic_pane

0xc3af,	// (0x0001b4c8) list_single_graphic_2heading_pane_g1_ParamLimits

0xc3af,	// (0x0001b4c8) list_single_graphic_2heading_pane_g1

0xbc48,	// (0x0001ad61) list_single_graphic_2heading_pane_g4_ParamLimits

0xbc48,	// (0x0001ad61) list_single_graphic_2heading_pane_g4

0xbc54,	// (0x0001ad6d) list_single_graphic_2heading_pane_g5_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_graphic_2heading_pane_g5

0x0002,

0xf78b,	// (0x0001e8a4) list_single_graphic_2heading_pane_g_ParamLimits

0xf78b,	// (0x0001e8a4) list_single_graphic_2heading_pane_g

0xc3bb,	// (0x0001b4d4) list_single_graphic_2heading_pane_t1_ParamLimits

0xc3bb,	// (0x0001b4d4) list_single_graphic_2heading_pane_t1

0xc3cf,	// (0x0001b4e8) list_single_graphic_2heading_pane_t2_ParamLimits

0xc3cf,	// (0x0001b4e8) list_single_graphic_2heading_pane_t2

0xc3e9,	// (0x0001b502) list_single_graphic_2heading_pane_t3_ParamLimits

0xc3e9,	// (0x0001b502) list_single_graphic_2heading_pane_t3

0x0002,

0xf792,	// (0x0001e8ab) list_single_graphic_2heading_pane_t_ParamLimits

0xf792,	// (0x0001e8ab) list_single_graphic_2heading_pane_t

0x423d,	// (0x00013356) bg_popup_sub_pane_cp2

0x4263,	// (0x0001337c) grid_toobar_pane

0xd945,	// (0x0001ca5e) cell_toolbar_pane_ParamLimits

0xd945,	// (0x0001ca5e) cell_toolbar_pane

0x42c7,	// (0x000133e0) cell_toolbar_pane_g1_ParamLimits

0x42c7,	// (0x000133e0) cell_toolbar_pane_g1

0x42d9,	// (0x000133f2) cell_toolbar_pane_g2_ParamLimits

0x42d9,	// (0x000133f2) cell_toolbar_pane_g2

0x0001,

0xf7a0,	// (0x0001e8b9) cell_toolbar_pane_g_ParamLimits

0xf7a0,	// (0x0001e8b9) cell_toolbar_pane_g

0x42fb,	// (0x00013414) grid_highlight_pane_cp2_ParamLimits

0x42fb,	// (0x00013414) grid_highlight_pane_cp2

0x4315,	// (0x0001342e) toolbar_button_pane

0x4321,	// (0x0001343a) toolbar_button_pane_g1

0x4331,	// (0x0001344a) toolbar_button_pane_g2

0x4329,	// (0x00013442) toolbar_button_pane_g3

0x4341,	// (0x0001345a) toolbar_button_pane_g4

0x4339,	// (0x00013452) toolbar_button_pane_g5

0x4349,	// (0x00013462) toolbar_button_pane_g6

0x4351,	// (0x0001346a) toolbar_button_pane_g7

0x4361,	// (0x0001347a) toolbar_button_pane_g8

0x4359,	// (0x00013472) toolbar_button_pane_g9

0x0009,

0xf7a5,	// (0x0001e8be) toolbar_button_pane_g

0xd974,	// (0x0001ca8d) list_single_2graphic_pane_g1_cp3_ParamLimits

0xd974,	// (0x0001ca8d) list_single_2graphic_pane_g1_cp3

0xd980,	// (0x0001ca99) list_single_2graphic_pane_g2_cp3_ParamLimits

0xd980,	// (0x0001ca99) list_single_2graphic_pane_g2_cp3

0x3956,	// (0x00012a6f) list_single_2graphic_pane_g3_cp3

0x4bee,	// (0x00013d07) list_single_2graphic_pane_g4_cp3_ParamLimits

0x4bee,	// (0x00013d07) list_single_2graphic_pane_g4_cp3

0xd98f,	// (0x0001caa8) list_single_2graphic_pane_t1_cp3_ParamLimits

0xd98f,	// (0x0001caa8) list_single_2graphic_pane_t1_cp3

0x394a,	// (0x00012a63) list_single_midp_graphic_pane_g2_ParamLimits

0x394a,	// (0x00012a63) list_single_midp_graphic_pane_g2

0xd4a9,	// (0x0001c5c2) aid_zoom_text_primary

0xc382,	// (0x0001b49b) aid_zoom_text_secondary

0x3d33,	// (0x00012e4c) status_small_pane_g7_ParamLimits

0x3d33,	// (0x00012e4c) status_small_pane_g7

0x3d56,	// (0x00012e6f) status_small_pane_t1_ParamLimits

0x1f26,	// (0x0001103f) title_pane_g2

0x0003,

0xf529,	// (0x0001e642) title_pane_g

0x24b3,	// (0x000115cc) aid_size_cell_colour_1_pane_ParamLimits

0x24b3,	// (0x000115cc) aid_size_cell_colour_1_pane

0x24c7,	// (0x000115e0) aid_size_cell_colour_2_pane_ParamLimits

0x24c7,	// (0x000115e0) aid_size_cell_colour_2_pane

0x24db,	// (0x000115f4) aid_size_cell_colour_3_pane_ParamLimits

0x24db,	// (0x000115f4) aid_size_cell_colour_3_pane

0x24ef,	// (0x00011608) aid_size_cell_colour_4_pane_ParamLimits

0x24ef,	// (0x00011608) aid_size_cell_colour_4_pane

0xcf5f,	// (0x0001c078) title_pane_stacon_g1_ParamLimits

0xcf5f,	// (0x0001c078) title_pane_stacon_g1

0x4a2b,	// (0x00013b44) popup_note_wait_window_g3_ParamLimits

0x4a2b,	// (0x00013b44) popup_note_wait_window_g3

0x4aa1,	// (0x00013bba) popup_note_wait_window_t5_ParamLimits

0x4aa1,	// (0x00013bba) popup_note_wait_window_t5

0x1f0f,	// (0x00011028) main_feb_china_hwr_fs_writing_pane

0xd517,	// (0x0001c630) popup_feb_china_hwr_fs_window_ParamLimits

0xd517,	// (0x0001c630) popup_feb_china_hwr_fs_window

0xd9bf,	// (0x0001cad8) aid_size_cell_hwr_fs_ParamLimits

0xd9bf,	// (0x0001cad8) aid_size_cell_hwr_fs

0x4439,	// (0x00013552) bg_popup_sub_pane_cp3_ParamLimits

0x4439,	// (0x00013552) bg_popup_sub_pane_cp3

0xd9d4,	// (0x0001caed) grid_hwr_fs_pane_ParamLimits

0xd9d4,	// (0x0001caed) grid_hwr_fs_pane

0xd9e8,	// (0x0001cb01) linegrid_hwr_fs_pane_ParamLimits

0xd9e8,	// (0x0001cb01) linegrid_hwr_fs_pane

0xd9f8,	// (0x0001cb11) cell_hwr_fs_pane_ParamLimits

0xd9f8,	// (0x0001cb11) cell_hwr_fs_pane

0x4445,	// (0x0001355e) linegrid_hwr_fs_pane_g1_ParamLimits

0x4445,	// (0x0001355e) linegrid_hwr_fs_pane_g1

0x4451,	// (0x0001356a) linegrid_hwr_fs_pane_g2_ParamLimits

0x4451,	// (0x0001356a) linegrid_hwr_fs_pane_g2

0x4463,	// (0x0001357c) linegrid_hwr_fs_pane_g3_ParamLimits

0x4463,	// (0x0001357c) linegrid_hwr_fs_pane_g3

0xda16,	// (0x0001cb2f) linegrid_hwr_fs_pane_g4_ParamLimits

0xda16,	// (0x0001cb2f) linegrid_hwr_fs_pane_g4

0xda30,	// (0x0001cb49) linegrid_hwr_fs_pane_g5_ParamLimits

0xda30,	// (0x0001cb49) linegrid_hwr_fs_pane_g5

0x0004,

0xf7cb,	// (0x0001e8e4) linegrid_hwr_fs_pane_g_ParamLimits

0xf7cb,	// (0x0001e8e4) linegrid_hwr_fs_pane_g

0x446f,	// (0x00013588) cell_hwr_fs_pane_g1_ParamLimits

0x446f,	// (0x00013588) cell_hwr_fs_pane_g1

0x417b,	// (0x00013294) cell_hwr_fs_pane_g2_ParamLimits

0x417b,	// (0x00013294) cell_hwr_fs_pane_g2

0x4485,	// (0x0001359e) cell_hwr_fs_pane_g3_ParamLimits

0x4485,	// (0x0001359e) cell_hwr_fs_pane_g3

0x4492,	// (0x000135ab) cell_hwr_fs_pane_g4_ParamLimits

0x4492,	// (0x000135ab) cell_hwr_fs_pane_g4

0x0003,

0xf7d6,	// (0x0001e8ef) cell_hwr_fs_pane_g_ParamLimits

0xf7d6,	// (0x0001e8ef) cell_hwr_fs_pane_g

0xda46,	// (0x0001cb5f) cell_hwr_fs_pane_t1

0x1f0f,	// (0x00011028) grid_highlight_pane_cp6

0x1f0f,	// (0x00011028) main_idle_act2_pane

0x2fa9,	// (0x000120c2) aid_inside_area_popup_secondary

0x508c,	// (0x000141a5) aid_inside_area_window_primary_ParamLimits

0x508c,	// (0x000141a5) aid_inside_area_window_primary

0x5bcc,	// (0x00014ce5) ai2_news_ticker_pane

0x5bd4,	// (0x00014ced) aid_size_cell_ai1_link_ParamLimits

0x5bd4,	// (0x00014ced) aid_size_cell_ai1_link

0x5bee,	// (0x00014d07) popup_ai2_data_window_ParamLimits

0x5bee,	// (0x00014d07) popup_ai2_data_window

0x5c02,	// (0x00014d1b) popup_ai2_link_window_ParamLimits

0x5c02,	// (0x00014d1b) popup_ai2_link_window

0x4439,	// (0x00013552) bg_popup_sub_pane_cp4_ParamLimits

0x4439,	// (0x00013552) bg_popup_sub_pane_cp4

0x5c16,	// (0x00014d2f) grid_ai2_link_pane_ParamLimits

0x5c16,	// (0x00014d2f) grid_ai2_link_pane

0x5c2d,	// (0x00014d46) popup_ai2_link_window_g1_ParamLimits

0x5c2d,	// (0x00014d46) popup_ai2_link_window_g1

0x5c39,	// (0x00014d52) popup_ai2_link_window_g2_ParamLimits

0x5c39,	// (0x00014d52) popup_ai2_link_window_g2

0x0001,

0xf9a4,	// (0x0001eabd) popup_ai2_link_window_g_ParamLimits

0xf9a4,	// (0x0001eabd) popup_ai2_link_window_g

0x5c48,	// (0x00014d61) ai2_mp_button_pane

0x5c50,	// (0x00014d69) ai2_mp_volume_pane

0x4617,	// (0x00013730) bg_popup_sub_pane_cp5_ParamLimits

0x4617,	// (0x00013730) bg_popup_sub_pane_cp5

0x5c58,	// (0x00014d71) heading_ai2_gene_pane_ParamLimits

0x5c58,	// (0x00014d71) heading_ai2_gene_pane

0x5c64,	// (0x00014d7d) list_ai2_gene_pane_ParamLimits

0x5c64,	// (0x00014d7d) list_ai2_gene_pane

0x5cac,	// (0x00014dc5) cell_ai2_link_pane_ParamLimits

0x5cac,	// (0x00014dc5) cell_ai2_link_pane

0x5cc2,	// (0x00014ddb) cell_ai2_link_pane_g1

0x1f0f,	// (0x00011028) grid_highlight_pane_cp7

0xdd2a,	// (0x0001ce43) ai2_mp_volume_pane_g1

0x5d9a,	// (0x00014eb3) ai2_mp_volume_pane_g2

0x5d07,	// (0x00014e20) list_ai2_gene_pane_t1

0x5d92,	// (0x00014eab) ai2_mp_volume_pane_g3

0x0002,

0xf9bd,	// (0x0001ead6) ai2_mp_volume_pane_g

0xdd32,	// (0x0001ce4b) volume_small_pane_cp3

0x5da2,	// (0x00014ebb) aid_size_cell_ai2_button

0x5daa,	// (0x00014ec3) grid_ai2_button_pane

0x5db3,	// (0x00014ecc) cell_ai2_button_pane_ParamLimits

0x5db3,	// (0x00014ecc) cell_ai2_button_pane

0x1e28,	// (0x00010f41) cell_ai2_button_pane_g1

0x1f0f,	// (0x00011028) grid_highlight_pane_cp8

0x5d52,	// (0x00014e6b) ai2_gene_pane_t1_ParamLimits

0x5d52,	// (0x00014e6b) ai2_gene_pane_t1

0xd497,	// (0x0001c5b0) aid_height_parent_landscape

0x56d6,	// (0x000147ef) aid_height_set_list

0x56e2,	// (0x000147fb) aid_size_parent

0x5a51,	// (0x00014b6a) aid_size_cell_graphic_pane_ParamLimits

0x5c74,	// (0x00014d8d) popup_ai2_data_window_g1_ParamLimits

0x5c74,	// (0x00014d8d) popup_ai2_data_window_g1

0x5c80,	// (0x00014d99) ai2_news_ticker_pane_g1

0x5c88,	// (0x00014da1) ai2_news_ticker_pane_g2

0x0001,

0xf9a9,	// (0x0001eac2) ai2_news_ticker_pane_g

0x5c90,	// (0x00014da9) ai2_news_ticker_pane_t1

0x5c9e,	// (0x00014db7) ai2_news_ticker_pane_t2

0x0001,

0xf9ae,	// (0x0001eac7) ai2_news_ticker_pane_t

0x5ccb,	// (0x00014de4) heading_ai2_gene_pane_g1

0x5cd3,	// (0x00014dec) heading_ai2_gene_pane_t1_ParamLimits

0x5cd3,	// (0x00014dec) heading_ai2_gene_pane_t1

0x5ce8,	// (0x00014e01) list_highlight_pane_cp6

0x5cf0,	// (0x00014e09) ai2_gene_pane_ParamLimits

0x5cf0,	// (0x00014e09) ai2_gene_pane

0x5d15,	// (0x00014e2e) list_ai2_gene_pane_t2

0x0001,

0xf9b3,	// (0x0001eacc) list_ai2_gene_pane_t

0x5d23,	// (0x00014e3c) list_highlight_pane_cp8_ParamLimits

0x5d23,	// (0x00014e3c) list_highlight_pane_cp8

0x5d34,	// (0x00014e4d) ai2_gene_pane_g1_ParamLimits

0x5d34,	// (0x00014e4d) ai2_gene_pane_g1

0x5d46,	// (0x00014e5f) ai2_gene_pane_g2_ParamLimits

0x5d46,	// (0x00014e5f) ai2_gene_pane_g2

0x0001,

0xf9b8,	// (0x0001ead1) ai2_gene_pane_g_ParamLimits

0xf9b8,	// (0x0001ead1) ai2_gene_pane_g

0x2780,	// (0x00011899) scroll_pane_cp12

0xd44e,	// (0x0001c567) control_pane_t3_ParamLimits

0xd44e,	// (0x0001c567) control_pane_t3

0x3d47,	// (0x00012e60) status_small_pane_g8_ParamLimits

0x3d47,	// (0x00012e60) status_small_pane_g8

0xd5d7,	// (0x0001c6f0) popup_find_window_ParamLimits

0xd759,	// (0x0001c872) popup_note_image_window_ParamLimits

0xc3af,	// (0x0001b4c8) list_double2_graphic_pane_vc_g1_ParamLimits

0xc3af,	// (0x0001b4c8) list_double2_graphic_pane_vc_g1

0xc401,	// (0x0001b51a) list_double2_graphic_pane_vc_g2_ParamLimits

0xc401,	// (0x0001b51a) list_double2_graphic_pane_vc_g2

0xc40d,	// (0x0001b526) list_double2_graphic_pane_vc_g3_ParamLimits

0xc40d,	// (0x0001b526) list_double2_graphic_pane_vc_g3

0x0002,

0xf799,	// (0x0001e8b2) list_double2_graphic_pane_vc_g_ParamLimits

0xf799,	// (0x0001e8b2) list_double2_graphic_pane_vc_g

0xbc60,	// (0x0001ad79) list_double2_graphic_pane_vc_t1_ParamLimits

0xbc60,	// (0x0001ad79) list_double2_graphic_pane_vc_t1

0xbc48,	// (0x0001ad61) list_single_heading_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_heading_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_single_heading_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_heading_pane_vc_g

0xc419,	// (0x0001b532) list_single_heading_pane_vc_t1_ParamLimits

0xc419,	// (0x0001b532) list_single_heading_pane_vc_t1

0xc42f,	// (0x0001b548) list_single_heading_pane_vc_t2_ParamLimits

0xc42f,	// (0x0001b548) list_single_heading_pane_vc_t2

0x0001,

0xf7ba,	// (0x0001e8d3) list_single_heading_pane_vc_t_ParamLimits

0xf7ba,	// (0x0001e8d3) list_single_heading_pane_vc_t

0x4391,	// (0x000134aa) list_setting_number_pane_vc_g1_ParamLimits

0x4391,	// (0x000134aa) list_setting_number_pane_vc_g1

0x439d,	// (0x000134b6) list_setting_number_pane_vc_g2_ParamLimits

0x439d,	// (0x000134b6) list_setting_number_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001e8d8) list_setting_number_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001e8d8) list_setting_number_pane_vc_g

0xc441,	// (0x0001b55a) list_setting_number_pane_vc_t1_ParamLimits

0xc441,	// (0x0001b55a) list_setting_number_pane_vc_t1

0xc455,	// (0x0001b56e) list_setting_number_pane_vc_t2_ParamLimits

0xc455,	// (0x0001b56e) list_setting_number_pane_vc_t2

0xc471,	// (0x0001b58a) list_setting_number_pane_vc_t3_ParamLimits

0xc471,	// (0x0001b58a) list_setting_number_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001e8dd) list_setting_number_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001e8dd) list_setting_number_pane_vc_t

0xc489,	// (0x0001b5a2) set_value_pane_vc_ParamLimits

0xc489,	// (0x0001b5a2) set_value_pane_vc

0x58ac,	// (0x000149c5) list_double2_graphic_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double2_graphic_pane_vc

0xc522,	// (0x0001b63b) list_double2_large_graphic_pane_vc_ParamLimits

0xc522,	// (0x0001b63b) list_double2_large_graphic_pane_vc

0x58ac,	// (0x000149c5) list_double2_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double2_pane_vc

0x58ac,	// (0x000149c5) list_double_graphic_heading_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_graphic_heading_pane_vc

0x58ac,	// (0x000149c5) list_double_graphic_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_graphic_pane_vc

0x58ac,	// (0x000149c5) list_double_heading_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_heading_pane_vc

0xc534,	// (0x0001b64d) list_double_large_graphic_pane_vc_ParamLimits

0xc534,	// (0x0001b64d) list_double_large_graphic_pane_vc

0x58ac,	// (0x000149c5) list_double_number_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_number_pane_vc

0x58ac,	// (0x000149c5) list_double_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_pane_vc

0x58ac,	// (0x000149c5) list_double_time_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_double_time_pane_vc

0x58ac,	// (0x000149c5) list_setting_number_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_setting_number_pane_vc

0x58ac,	// (0x000149c5) list_setting_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_setting_pane_vc

0x58ac,	// (0x000149c5) list_single_graphic_heading_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_single_graphic_heading_pane_vc

0x58ac,	// (0x000149c5) list_single_heading_pane_vc_ParamLimits

0x58ac,	// (0x000149c5) list_single_heading_pane_vc

0xc552,	// (0x0001b66b) list_single_number_heading_pane_vc_ParamLimits

0xc552,	// (0x0001b66b) list_single_number_heading_pane_vc

0xc3af,	// (0x0001b4c8) list_double_graphic_heading_pane_vc_g1_ParamLimits

0xc3af,	// (0x0001b4c8) list_double_graphic_heading_pane_vc_g1

0xbc48,	// (0x0001ad61) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xbc48,	// (0x0001ad61) list_double_graphic_heading_pane_vc_g2

0xbc54,	// (0x0001ad6d) list_double_graphic_heading_pane_vc_g3_ParamLimits

0xbc54,	// (0x0001ad6d) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf78b,	// (0x0001e8a4) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0001e8a4) list_double_graphic_heading_pane_vc_g

0xc596,	// (0x0001b6af) list_double_graphic_heading_pane_vc_t1_ParamLimits

0xc596,	// (0x0001b6af) list_double_graphic_heading_pane_vc_t1

0xc5ac,	// (0x0001b6c5) list_double_graphic_heading_pane_vc_t2_ParamLimits

0xc5ac,	// (0x0001b6c5) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9c4,	// (0x0001eadd) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9c4,	// (0x0001eadd) list_double_graphic_heading_pane_vc_t

0x4391,	// (0x000134aa) list_setting_pane_vc_g1_ParamLimits

0x4391,	// (0x000134aa) list_setting_pane_vc_g1

0x439d,	// (0x000134b6) list_setting_pane_vc_g2_ParamLimits

0x439d,	// (0x000134b6) list_setting_pane_vc_g2

0x0001,

0xf7bf,	// (0x0001e8d8) list_setting_pane_vc_g_ParamLimits

0xf7bf,	// (0x0001e8d8) list_setting_pane_vc_g

0xc5c4,	// (0x0001b6dd) list_setting_pane_vc_t1_ParamLimits

0xc5c4,	// (0x0001b6dd) list_setting_pane_vc_t1

0xc5d8,	// (0x0001b6f1) list_setting_pane_vc_t2_ParamLimits

0xc5d8,	// (0x0001b6f1) list_setting_pane_vc_t2

0x0001,

0xfa07,	// (0x0001eb20) list_setting_pane_vc_t_ParamLimits

0xfa07,	// (0x0001eb20) list_setting_pane_vc_t

0xc489,	// (0x0001b5a2) set_value_pane_cp_vc_ParamLimits

0xc489,	// (0x0001b5a2) set_value_pane_cp_vc

0xbc48,	// (0x0001ad61) list_single_number_heading_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_single_number_heading_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_single_number_heading_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_single_number_heading_pane_vc_g

0xc419,	// (0x0001b532) list_single_number_heading_pane_vc_t1_ParamLimits

0xc419,	// (0x0001b532) list_single_number_heading_pane_vc_t1

0xc5ec,	// (0x0001b705) list_single_number_heading_pane_vc_t2_ParamLimits

0xc5ec,	// (0x0001b705) list_single_number_heading_pane_vc_t2

0xbcb0,	// (0x0001adc9) list_single_number_heading_pane_vc_t3_ParamLimits

0xbcb0,	// (0x0001adc9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa0c,	// (0x0001eb25) list_single_number_heading_pane_vc_t_ParamLimits

0xfa0c,	// (0x0001eb25) list_single_number_heading_pane_vc_t

0xc3af,	// (0x0001b4c8) list_single_graphic_heading_pane_vc_g1_ParamLimits

0xc3af,	// (0x0001b4c8) list_single_graphic_heading_pane_vc_g1

0xbc48,	// (0x0001ad61) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xbc48,	// (0x0001ad61) list_single_graphic_heading_pane_vc_g4

0xbc54,	// (0x0001ad6d) list_single_graphic_heading_pane_vc_g5_ParamLimits

0xbc54,	// (0x0001ad6d) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf78b,	// (0x0001e8a4) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf78b,	// (0x0001e8a4) list_single_graphic_heading_pane_vc_g

0xc419,	// (0x0001b532) list_single_graphic_heading_pane_vc_t1_ParamLimits

0xc419,	// (0x0001b532) list_single_graphic_heading_pane_vc_t1

0xc5fe,	// (0x0001b717) list_single_graphic_heading_pane_vc_t2_ParamLimits

0xc5fe,	// (0x0001b717) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa13,	// (0x0001eb2c) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa13,	// (0x0001eb2c) list_single_graphic_heading_pane_vc_t

0xbc48,	// (0x0001ad61) list_double2_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_double2_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_double2_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_double2_pane_vc_g

0xc4f9,	// (0x0001b612) list_double2_pane_vc_t1_ParamLimits

0xc4f9,	// (0x0001b612) list_double2_pane_vc_t1

0xc610,	// (0x0001b729) list_double2_large_graphic_pane_vc_g1_ParamLimits

0xc610,	// (0x0001b729) list_double2_large_graphic_pane_vc_g1

0xc61c,	// (0x0001b735) list_double2_large_graphic_pane_vc_g2_ParamLimits

0xc61c,	// (0x0001b735) list_double2_large_graphic_pane_vc_g2

0xc628,	// (0x0001b741) list_double2_large_graphic_pane_vc_g3_ParamLimits

0xc628,	// (0x0001b741) list_double2_large_graphic_pane_vc_g3

0x0002,

0xfa18,	// (0x0001eb31) list_double2_large_graphic_pane_vc_g_ParamLimits

0xfa18,	// (0x0001eb31) list_double2_large_graphic_pane_vc_g

0xc634,	// (0x0001b74d) list_double2_large_graphic_pane_vc_t1_ParamLimits

0xc634,	// (0x0001b74d) list_double2_large_graphic_pane_vc_t1

0xc64a,	// (0x0001b763) list_double_time_pane_vc_g1_ParamLimits

0xc64a,	// (0x0001b763) list_double_time_pane_vc_g1

0xc656,	// (0x0001b76f) list_double_time_pane_vc_g2_ParamLimits

0xc656,	// (0x0001b76f) list_double_time_pane_vc_g2

0x0001,

0xfa1f,	// (0x0001eb38) list_double_time_pane_vc_g_ParamLimits

0xfa1f,	// (0x0001eb38) list_double_time_pane_vc_g

0xc662,	// (0x0001b77b) list_double_time_pane_vc_t1_ParamLimits

0xc662,	// (0x0001b77b) list_double_time_pane_vc_t1

0xc680,	// (0x0001b799) list_double_time_pane_vc_t2_ParamLimits

0xc680,	// (0x0001b799) list_double_time_pane_vc_t2

0xc6c9,	// (0x0001b7e2) list_double_time_pane_vc_t3_ParamLimits

0xc6c9,	// (0x0001b7e2) list_double_time_pane_vc_t3

0xc6db,	// (0x0001b7f4) list_double_time_pane_vc_t4_ParamLimits

0xc6db,	// (0x0001b7f4) list_double_time_pane_vc_t4

0x0003,

0xfa24,	// (0x0001eb3d) list_double_time_pane_vc_t_ParamLimits

0xfa24,	// (0x0001eb3d) list_double_time_pane_vc_t

0xbc48,	// (0x0001ad61) list_double_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_double_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_double_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_double_pane_vc_g

0xc6ed,	// (0x0001b806) list_double_pane_vc_t1_ParamLimits

0xc6ed,	// (0x0001b806) list_double_pane_vc_t1

0xc6ff,	// (0x0001b818) list_double_pane_vc_t2_ParamLimits

0xc6ff,	// (0x0001b818) list_double_pane_vc_t2

0x0001,

0xfa2d,	// (0x0001eb46) list_double_pane_vc_t_ParamLimits

0xfa2d,	// (0x0001eb46) list_double_pane_vc_t

0xbc48,	// (0x0001ad61) list_double_number_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_double_number_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_double_number_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_double_number_pane_vc_g

0xc715,	// (0x0001b82e) list_double_number_pane_vc_t1_ParamLimits

0xc715,	// (0x0001b82e) list_double_number_pane_vc_t1

0xc729,	// (0x0001b842) list_double_number_pane_vc_t2_ParamLimits

0xc729,	// (0x0001b842) list_double_number_pane_vc_t2

0xc73b,	// (0x0001b854) list_double_number_pane_vc_t3_ParamLimits

0xc73b,	// (0x0001b854) list_double_number_pane_vc_t3

0x0002,

0xfa32,	// (0x0001eb4b) list_double_number_pane_vc_t_ParamLimits

0xfa32,	// (0x0001eb4b) list_double_number_pane_vc_t

0xc751,	// (0x0001b86a) list_double_large_graphic_pane_vc_g1_ParamLimits

0xc751,	// (0x0001b86a) list_double_large_graphic_pane_vc_g1

0xc779,	// (0x0001b892) list_double_large_graphic_pane_vc_g2_ParamLimits

0xc779,	// (0x0001b892) list_double_large_graphic_pane_vc_g2

0xc78d,	// (0x0001b8a6) list_double_large_graphic_pane_vc_g3_ParamLimits

0xc78d,	// (0x0001b8a6) list_double_large_graphic_pane_vc_g3

0xc79c,	// (0x0001b8b5) list_double_large_graphic_pane_vc_g4_ParamLimits

0xc79c,	// (0x0001b8b5) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa39,	// (0x0001eb52) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa39,	// (0x0001eb52) list_double_large_graphic_pane_vc_g

0xc7ac,	// (0x0001b8c5) list_double_large_graphic_pane_vc_t1_ParamLimits

0xc7ac,	// (0x0001b8c5) list_double_large_graphic_pane_vc_t1

0xc7c6,	// (0x0001b8df) list_double_large_graphic_pane_vc_t2_ParamLimits

0xc7c6,	// (0x0001b8df) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa42,	// (0x0001eb5b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa42,	// (0x0001eb5b) list_double_large_graphic_pane_vc_t

0xbc48,	// (0x0001ad61) list_double_heading_pane_vc_g1_ParamLimits

0xbc48,	// (0x0001ad61) list_double_heading_pane_vc_g1

0xbc54,	// (0x0001ad6d) list_double_heading_pane_vc_g2_ParamLimits

0xbc54,	// (0x0001ad6d) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001e6bc) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001e6bc) list_double_heading_pane_vc_g

0xc7e6,	// (0x0001b8ff) list_double_heading_pane_vc_t1_ParamLimits

0xc7e6,	// (0x0001b8ff) list_double_heading_pane_vc_t1

0xc419,	// (0x0001b532) list_double_heading_pane_vc_t2_ParamLimits

0xc419,	// (0x0001b532) list_double_heading_pane_vc_t2

0x0001,

0xfa47,	// (0x0001eb60) list_double_heading_pane_vc_t_ParamLimits

0xfa47,	// (0x0001eb60) list_double_heading_pane_vc_t

0xc7f8,	// (0x0001b911) list_double_graphic_pane_vc_g1_ParamLimits

0xc7f8,	// (0x0001b911) list_double_graphic_pane_vc_g1

0xc804,	// (0x0001b91d) list_double_graphic_pane_vc_g2_ParamLimits

0xc804,	// (0x0001b91d) list_double_graphic_pane_vc_g2

0xbc48,	// (0x0001ad61) list_double_graphic_pane_vc_g3_ParamLimits

0xbc48,	// (0x0001ad61) list_double_graphic_pane_vc_g3

0x0003,

0xfa4c,	// (0x0001eb65) list_double_graphic_pane_vc_g_ParamLimits

0xfa4c,	// (0x0001eb65) list_double_graphic_pane_vc_g

0xc821,	// (0x0001b93a) list_double_graphic_pane_vc_t1_ParamLimits

0xc821,	// (0x0001b93a) list_double_graphic_pane_vc_t1

0xc83f,	// (0x0001b958) list_double_graphic_pane_vc_t2_ParamLimits

0xc83f,	// (0x0001b958) list_double_graphic_pane_vc_t2

0x0001,

0xfa55,	// (0x0001eb6e) list_double_graphic_pane_vc_t_ParamLimits

0xfa55,	// (0x0001eb6e) list_double_graphic_pane_vc_t

0xcc46,	// (0x0001bd5f) aid_size_cell_fastswap

0xcc4e,	// (0x0001bd67) aid_size_cell_touch_ParamLimits

0xcc4e,	// (0x0001bd67) aid_size_cell_touch

0xcd93,	// (0x0001beac) popup_fast_swap_wide_window_ParamLimits

0xcd93,	// (0x0001beac) popup_fast_swap_wide_window

0xce59,	// (0x0001bf72) touch_pane_ParamLimits

0xce59,	// (0x0001bf72) touch_pane

0xc0f5,	// (0x0001b20e) button_value_adjust_pane_cp2

0x640d,	// (0x00015526) button_value_adjust_pane_cp4

0xc115,	// (0x0001b22e) form_field_data_pane_cp2

0xc134,	// (0x0001b24d) form_field_data_wide_pane_cp2

0x32ce,	// (0x000123e7) bg_scroll_pane_ParamLimits

0xd080,	// (0x0001c199) scroll_handle_pane_ParamLimits

0xd094,	// (0x0001c1ad) scroll_sc2_down_pane_ParamLimits

0xd094,	// (0x0001c1ad) scroll_sc2_down_pane

0x32ff,	// (0x00012418) scroll_sc2_up_pane_ParamLimits

0x32ff,	// (0x00012418) scroll_sc2_up_pane

0x66b1,	// (0x000157ca) grid_wheel_folder_pane_g1_ParamLimits

0x66b1,	// (0x000157ca) grid_wheel_folder_pane_g1

0xd248,	// (0x0001c361) clock_nsta_pane_cp2_ParamLimits

0xd248,	// (0x0001c361) clock_nsta_pane_cp2

0x3add,	// (0x00012bf6) listscroll_midp_pane_ParamLimits

0x3ae9,	// (0x00012c02) midp_canvas_pane

0xd48f,	// (0x0001c5a8) nsta_clock_indic_pane

0x3df5,	// (0x00012f0e) listscroll_form_pane_vc

0x3e12,	// (0x00012f2b) listscroll_set_pane_vc_ParamLimits

0x3e12,	// (0x00012f2b) listscroll_set_pane_vc

0x3f06,	// (0x0001301f) clock_nsta_pane

0x3f76,	// (0x0001308f) indicator_nsta_pane

0x423d,	// (0x00013356) bg_popup_sub_pane_cp2_ParamLimits

0x4251,	// (0x0001336a) find_pane_cp2_ParamLimits

0x4251,	// (0x0001336a) find_pane_cp2

0x4263,	// (0x0001337c) grid_toobar_pane_ParamLimits

0x440d,	// (0x00013526) list_form_gen_pane_vc_ParamLimits

0x440d,	// (0x00013526) list_form_gen_pane_vc

0x4423,	// (0x0001353c) scroll_pane_cp8_vc_ParamLimits

0x4423,	// (0x0001353c) scroll_pane_cp8_vc

0x449f,	// (0x000135b8) data_form_wide_pane_vc_ParamLimits

0x449f,	// (0x000135b8) data_form_wide_pane_vc

0x44ab,	// (0x000135c4) form_field_data_wide_pane_vc_g1

0x44b3,	// (0x000135cc) form_field_data_wide_pane_vc_t1_ParamLimits

0x44b3,	// (0x000135cc) form_field_data_wide_pane_vc_t1

0x2ceb,	// (0x00011e04) input_focus_pane_cp6_vc_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_cp6_vc

0x47a3,	// (0x000138bc) list_midp_pane_ParamLimits

0x47af,	// (0x000138c8) scroll_pane_cp16_ParamLimits

0x47af,	// (0x000138c8) scroll_pane_cp16

0x4811,	// (0x0001392a) button_value_adjust_pane_ParamLimits

0x4811,	// (0x0001392a) button_value_adjust_pane

0x56f4,	// (0x0001480d) button_value_adjust_pane_cp6_ParamLimits

0x56f4,	// (0x0001480d) button_value_adjust_pane_cp6

0x57fc,	// (0x00014915) settings_code_pane_cp_ParamLimits

0x57fc,	// (0x00014915) settings_code_pane_cp

0x1e28,	// (0x00010f41) cell_touch_pane_g1

0x1e28,	// (0x00010f41) cell_touch_pane_g2

0x0001,

0xf6de,	// (0x0001e7f7) cell_touch_pane_g

0x5dc5,	// (0x00014ede) cell_touch_pane_cp_ParamLimits

0x5dc5,	// (0x00014ede) cell_touch_pane_cp

0x5dd5,	// (0x00014eee) cell_touch_pane_ParamLimits

0x5dd5,	// (0x00014eee) cell_touch_pane

0x1e28,	// (0x00010f41) scroll_sc2_down_pane_g1

0x1e28,	// (0x00010f41) scroll_sc2_up_pane_g1

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp4_vc

0x5e15,	// (0x00014f2e) list_set_graphic_pane_vc_g1_ParamLimits

0x5e15,	// (0x00014f2e) list_set_graphic_pane_vc_g1

0x5e21,	// (0x00014f3a) list_set_graphic_pane_vc_g2_ParamLimits

0x5e21,	// (0x00014f3a) list_set_graphic_pane_vc_g2

0x0001,

0xf9c9,	// (0x0001eae2) list_set_graphic_pane_vc_g_ParamLimits

0xf9c9,	// (0x0001eae2) list_set_graphic_pane_vc_g

0x5e2d,	// (0x00014f46) text_primary_small_cp13_vc_ParamLimits

0x5e2d,	// (0x00014f46) text_primary_small_cp13_vc

0x5e45,	// (0x00014f5e) list_set_graphic_pane_vc_ParamLimits

0x5e45,	// (0x00014f5e) list_set_graphic_pane_vc

0x1f0f,	// (0x00011028) input_focus_pane_cp2_vc

0x1e28,	// (0x00010f41) setting_code_pane_vc_g1

0x5e58,	// (0x00014f71) setting_code_pane_vc_t1

0x5e66,	// (0x00014f7f) set_text_pane_vc_t1_ParamLimits

0x5e66,	// (0x00014f7f) set_text_pane_vc_t1

0x1f0f,	// (0x00011028) input_focus_pane_cp1_vc

0x5e81,	// (0x00014f9a) list_set_text_pane_vc

0x1e28,	// (0x00010f41) setting_text_pane_vc_g1

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp2_vc

0x5e8b,	// (0x00014fa4) setting_slider_graphic_pane_vc_g1

0x5e93,	// (0x00014fac) setting_slider_graphic_pane_vc_t1

0x5ea1,	// (0x00014fba) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9ce,	// (0x0001eae7) setting_slider_graphic_pane_vc_t

0x5eaf,	// (0x00014fc8) slider_set_pane_cp_vc

0x5eb7,	// (0x00014fd0) slider_set_pane_vc_g1

0x5ec0,	// (0x00014fd9) slider_set_pane_vc_g2

0x0006,

0xf9d3,	// (0x0001eaec) slider_set_pane_vc_g

0x2e0e,	// (0x00011f27) set_opt_bg_pane_g1_copy1

0x2e16,	// (0x00011f2f) set_opt_bg_pane_g2_copy1

0x5eec,	// (0x00015005) set_opt_bg_pane_g3_copy1

0x2e26,	// (0x00011f3f) set_opt_bg_pane_g4_copy1

0x2e2e,	// (0x00011f47) set_opt_bg_pane_g5_copy1

0x2e36,	// (0x00011f4f) set_opt_bg_pane_g6_copy1

0x5ef4,	// (0x0001500d) set_opt_bg_pane_g7_copy1

0x5efc,	// (0x00015015) set_opt_bg_pane_g8_copy1

0x5f04,	// (0x0001501d) set_opt_bg_pane_g9_copy1

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp_vc

0x5f0c,	// (0x00015025) setting_slider_pane_vc_t1

0x5e93,	// (0x00014fac) setting_slider_pane_vc_t2

0x5ea1,	// (0x00014fba) setting_slider_pane_vc_t3

0x0002,

0xf9e2,	// (0x0001eafb) setting_slider_pane_vc_t

0x5eaf,	// (0x00014fc8) slider_set_pane_vc

0xda54,	// (0x0001cb6d) volume_set_pane_vc_g1

0xdd3b,	// (0x0001ce54) volume_set_pane_vc_g2

0xdd44,	// (0x0001ce5d) volume_set_pane_vc_g3

0xdd4d,	// (0x0001ce66) volume_set_pane_vc_g4

0xdd56,	// (0x0001ce6f) volume_set_pane_vc_g5

0xdd5f,	// (0x0001ce78) volume_set_pane_vc_g6

0xdd68,	// (0x0001ce81) volume_set_pane_vc_g7

0xdd71,	// (0x0001ce8a) volume_set_pane_vc_g8

0xdd7a,	// (0x0001ce93) volume_set_pane_vc_g9

0xdd83,	// (0x0001ce9c) volume_set_pane_vc_g10

0x0009,

0xf9e9,	// (0x0001eb02) volume_set_pane_vc_g

0x5f1b,	// (0x00015034) volume_set_pane_vc

0x5f23,	// (0x0001503c) button_value_adjust_pane_cp1_vc

0x5f2d,	// (0x00015046) list_highlight_pane_cp2_vc

0x5f36,	// (0x0001504f) list_set_pane_vc_ParamLimits

0x5f36,	// (0x0001504f) list_set_pane_vc

0x5f88,	// (0x000150a1) main_pane_set_vc_t1_ParamLimits

0x5f88,	// (0x000150a1) main_pane_set_vc_t1

0x5f9d,	// (0x000150b6) main_pane_set_vc_t2_ParamLimits

0x5f9d,	// (0x000150b6) main_pane_set_vc_t2

0x5faf,	// (0x000150c8) main_pane_set_vc_t3_ParamLimits

0x5faf,	// (0x000150c8) main_pane_set_vc_t3

0x5fc1,	// (0x000150da) main_pane_set_vc_t4_ParamLimits

0x5fc1,	// (0x000150da) main_pane_set_vc_t4

0x0003,

0xf9fe,	// (0x0001eb17) main_pane_set_vc_t_ParamLimits

0xf9fe,	// (0x0001eb17) main_pane_set_vc_t

0x5fd3,	// (0x000150ec) setting_code_pane_vc_ParamLimits

0x5fd3,	// (0x000150ec) setting_code_pane_vc

0x5fe2,	// (0x000150fb) setting_slider_graphic_pane_vc

0x5fe2,	// (0x000150fb) setting_slider_pane_vc

0x5fe2,	// (0x000150fb) setting_text_pane_vc

0x5fe2,	// (0x000150fb) setting_volume_pane_vc

0x5fea,	// (0x00015103) scroll_pane_cp121_vc

0x2c12,	// (0x00011d2b) set_content_pane_vc

0x6250,	// (0x00015369) button_value_adjust_pane_g1

0x6259,	// (0x00015372) button_value_adjust_pane_g2

0x0001,

0xfa5a,	// (0x0001eb73) button_value_adjust_pane_g

0x6262,	// (0x0001537b) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6262,	// (0x0001537b) form_field_slider_wide_pane_vc_t1

0x6278,	// (0x00015391) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6278,	// (0x00015391) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa5f,	// (0x0001eb78) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa5f,	// (0x0001eb78) form_field_slider_wide_pane_vc_t

0x2289,	// (0x000113a2) input_focus_pane_cp10_vc_ParamLimits

0x2289,	// (0x000113a2) input_focus_pane_cp10_vc

0x62a3,	// (0x000153bc) slider_cont_pane_cp1_vc_ParamLimits

0x62a3,	// (0x000153bc) slider_cont_pane_cp1_vc

0x5eb7,	// (0x00014fd0) slider_form_pane_g1_cp2

0x5ec0,	// (0x00014fd9) slider_form_pane_g2_cp2

0x62be,	// (0x000153d7) form_field_slider_pane_vc_t3

0x62cc,	// (0x000153e5) form_field_slider_pane_vc_t4

0x62da,	// (0x000153f3) slider_form_pane_vc_ParamLimits

0x62da,	// (0x000153f3) slider_form_pane_vc

0x62e7,	// (0x00015400) form_field_slider_pane_vc_t1_ParamLimits

0x62e7,	// (0x00015400) form_field_slider_pane_vc_t1

0x62fd,	// (0x00015416) form_field_slider_pane_vc_t2_ParamLimits

0x62fd,	// (0x00015416) form_field_slider_pane_vc_t2

0x0001,

0xfa71,	// (0x0001eb8a) form_field_slider_pane_vc_t_ParamLimits

0xfa71,	// (0x0001eb8a) form_field_slider_pane_vc_t

0x2289,	// (0x000113a2) input_focus_pane_cp9_vc_ParamLimits

0x2289,	// (0x000113a2) input_focus_pane_cp9_vc

0x630f,	// (0x00015428) slider_cont_pane_vc_ParamLimits

0x630f,	// (0x00015428) slider_cont_pane_vc

0x6321,	// (0x0001543a) list_form_graphic_pane_cp_vc_ParamLimits

0x6321,	// (0x0001543a) list_form_graphic_pane_cp_vc

0x44ab,	// (0x000135c4) form_field_popup_wide_pane_vc_g1

0x6336,	// (0x0001544f) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6336,	// (0x0001544f) form_field_popup_wide_pane_vc_t1

0x2ceb,	// (0x00011e04) input_focus_pane_cp8_vc_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_cp8_vc

0x6375,	// (0x0001548e) list_form_wide_pane_vc_ParamLimits

0x6375,	// (0x0001548e) list_form_wide_pane_vc

0x6381,	// (0x0001549a) list_form_graphic_pane_vc_g1

0x6389,	// (0x000154a2) list_form_graphic_pane_vc_t1_ParamLimits

0x6389,	// (0x000154a2) list_form_graphic_pane_vc_t1

0x1fef,	// (0x00011108) list_highlight_pane_cp5_vc_ParamLimits

0x1fef,	// (0x00011108) list_highlight_pane_cp5_vc

0x63a5,	// (0x000154be) list_form_graphic_pane_vc_ParamLimits

0x63a5,	// (0x000154be) list_form_graphic_pane_vc

0x44ab,	// (0x000135c4) form_field_popup_pane_vc_g1

0x63bb,	// (0x000154d4) form_field_popup_pane_vc_t1_ParamLimits

0x63bb,	// (0x000154d4) form_field_popup_pane_vc_t1

0x2ceb,	// (0x00011e04) input_focus_pane_cp7_vc_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_cp7_vc

0x63d0,	// (0x000154e9) list_form_pane_vc_ParamLimits

0x63d0,	// (0x000154e9) list_form_pane_vc

0x63dc,	// (0x000154f5) data_form_pane_vc_t1_ParamLimits

0x63dc,	// (0x000154f5) data_form_pane_vc_t1

0x2e0e,	// (0x00011f27) input_focus_pane_vc_g1

0x2e16,	// (0x00011f2f) input_focus_pane_vc_g2

0x2e1e,	// (0x00011f37) input_focus_pane_vc_g3

0x2e26,	// (0x00011f3f) input_focus_pane_vc_g4

0x2e2e,	// (0x00011f47) input_focus_pane_vc_g5

0x2e36,	// (0x00011f4f) input_focus_pane_vc_g6

0x2e3e,	// (0x00011f57) input_focus_pane_vc_g7

0x2e46,	// (0x00011f5f) input_focus_pane_vc_g8

0x2e4e,	// (0x00011f67) input_focus_pane_vc_g9

0x1e28,	// (0x00010f41) input_focus_pane_vc_g10

0x0009,

0xf667,	// (0x0001e780) input_focus_pane_vc_g

0x449f,	// (0x000135b8) data_form_pane_vc_ParamLimits

0x449f,	// (0x000135b8) data_form_pane_vc

0x44ab,	// (0x000135c4) form_field_data_pane_vc_g1

0x63f7,	// (0x00015510) form_field_data_pane_vc_t1_ParamLimits

0x63f7,	// (0x00015510) form_field_data_pane_vc_t1

0x2ceb,	// (0x00011e04) input_focus_pane_vc_ParamLimits

0x2ceb,	// (0x00011e04) input_focus_pane_vc

0x2c1b,	// (0x00011d34) button_value_adjust_pane_cp3_vc

0x640d,	// (0x00015526) button_value_adjust_pane_cp5_vc

0x6415,	// (0x0001552e) form_field_data_pane_vc_ParamLimits

0x6415,	// (0x0001552e) form_field_data_pane_vc

0x2c43,	// (0x00011d5c) form_field_data_pane_vc_cp2

0x642c,	// (0x00015545) form_field_data_wide_pane_vc_ParamLimits

0x642c,	// (0x00015545) form_field_data_wide_pane_vc

0x6442,	// (0x0001555b) form_field_data_wide_pane_vc_cp2

0x644a,	// (0x00015563) form_field_popup_pane_vc_ParamLimits

0x644a,	// (0x00015563) form_field_popup_pane_vc

0x6461,	// (0x0001557a) form_field_popup_wide_pane_vc_ParamLimits

0x6461,	// (0x0001557a) form_field_popup_wide_pane_vc

0x6477,	// (0x00015590) form_field_slider_pane_vc_ParamLimits

0x6477,	// (0x00015590) form_field_slider_pane_vc

0x648a,	// (0x000155a3) form_field_slider_wide_pane_vc_ParamLimits

0x648a,	// (0x000155a3) form_field_slider_wide_pane_vc

0x649d,	// (0x000155b6) grid_touch_1_pane_ParamLimits

0x649d,	// (0x000155b6) grid_touch_1_pane

0x64a9,	// (0x000155c2) grid_touch_2_pane_ParamLimits

0x64a9,	// (0x000155c2) grid_touch_2_pane

0x3d8c,	// (0x00012ea5) touch_pane_g1_ParamLimits

0x3d8c,	// (0x00012ea5) touch_pane_g1

0x64c1,	// (0x000155da) cell_app_pane_cp_wide_ParamLimits

0x64c1,	// (0x000155da) cell_app_pane_cp_wide

0x64d1,	// (0x000155ea) grid_popup_fast_wide_pane_ParamLimits

0x64d1,	// (0x000155ea) grid_popup_fast_wide_pane

0x64e5,	// (0x000155fe) scroll_pane_cp19_ParamLimits

0x64e5,	// (0x000155fe) scroll_pane_cp19

0x1f0f,	// (0x00011028) bg_popup_window_pane_cp20

0x64f9,	// (0x00015612) listscroll_popup_fast_wide_pane

0x6501,	// (0x0001561a) grid_indicator_nsta_pane

0x6513,	// (0x0001562c) clock_nsta_pane_g1

0x651c,	// (0x00015635) clock_nsta_pane_t1

0x6538,	// (0x00015651) cell_indicator_nsta_pane_ParamLimits

0x6538,	// (0x00015651) cell_indicator_nsta_pane

0x6569,	// (0x00015682) cell_indicator_nsta_pane_g1

0x6577,	// (0x00015690) cell_indicator_nsta_pane_g2

0x0001,

0xfa82,	// (0x0001eb9b) cell_indicator_nsta_pane_g

0x6587,	// (0x000156a0) clock_nsta_pane_cp

0x658f,	// (0x000156a8) indicator_nsta_pane_cp

0x6598,	// (0x000156b1) nsta_clock_indic_pane_g1

0x20d0,	// (0x000111e9) grid_indicator_pane

0x33f1,	// (0x0001250a) scroll_pane_cp29

0xd19f,	// (0x0001c2b8) indicator_nsta_pane_cp2_ParamLimits

0xd19f,	// (0x0001c2b8) indicator_nsta_pane_cp2

0x1fef,	// (0x00011108) main_apps_wheel_pane

0x468a,	// (0x000137a3) form_midp_field_text_pane_ParamLimits

0x47cf,	// (0x000138e8) scroll_bar_cp050_ParamLimits

0x6601,	// (0x0001571a) cell_indicator_pane_ParamLimits

0x6601,	// (0x0001571a) cell_indicator_pane

0x6617,	// (0x00015730) cell_indicator_pane_g1

0x6621,	// (0x0001573a) grid_wheel_folder_pane_ParamLimits

0x6621,	// (0x0001573a) grid_wheel_folder_pane

0x6633,	// (0x0001574c) list_wheel_apps_pane_ParamLimits

0x6633,	// (0x0001574c) list_wheel_apps_pane

0x6642,	// (0x0001575b) main_apps_wheel_pane_g1_ParamLimits

0x6642,	// (0x0001575b) main_apps_wheel_pane_g1

0x6656,	// (0x0001576f) main_apps_wheel_pane_g2_ParamLimits

0x6656,	// (0x0001576f) main_apps_wheel_pane_g2

0x0001,

0xfa9e,	// (0x0001ebb7) main_apps_wheel_pane_g_ParamLimits

0xfa9e,	// (0x0001ebb7) main_apps_wheel_pane_g

0x666a,	// (0x00015783) main_apps_wheel_pane_t1_ParamLimits

0x666a,	// (0x00015783) main_apps_wheel_pane_t1

0x6689,	// (0x000157a2) list_wheel_apps_pane_g1

0x6691,	// (0x000157aa) list_wheel_apps_pane_g2

0x6699,	// (0x000157b2) list_wheel_apps_pane_g3

0x66a1,	// (0x000157ba) list_wheel_apps_pane_g4

0x66a9,	// (0x000157c2) list_wheel_apps_pane_g5

0x0004,

0xfaa3,	// (0x0001ebbc) list_wheel_apps_pane_g

0x1fef,	// (0x00011108) navi_icon_text_pane

0x3e4e,	// (0x00012f67) aid_fill_nsta

0x66c8,	// (0x000157e1) navi_icon_text_pane_g1

0x66d4,	// (0x000157ed) navi_icon_text_pane_t1

0x3847,	// (0x00012960) list_set_graphic_pane_t1_ParamLimits

0x3847,	// (0x00012960) list_set_graphic_pane_t1

0x4f09,	// (0x00014022) popup_midp_note_alarm_window_t6_ParamLimits

0x4f09,	// (0x00014022) popup_midp_note_alarm_window_t6

0x4f1b,	// (0x00014034) popup_midp_note_alarm_window_t7_ParamLimits

0x4f1b,	// (0x00014034) popup_midp_note_alarm_window_t7

0x4f2d,	// (0x00014046) popup_midp_note_alarm_window_t8_ParamLimits

0x4f2d,	// (0x00014046) popup_midp_note_alarm_window_t8

0x4f3f,	// (0x00014058) popup_midp_note_alarm_window_t9_ParamLimits

0x4f3f,	// (0x00014058) popup_midp_note_alarm_window_t9

0x4f51,	// (0x0001406a) popup_midp_note_alarm_window_t10_ParamLimits

0x4f51,	// (0x0001406a) popup_midp_note_alarm_window_t10

0x4f63,	// (0x0001407c) popup_midp_note_alarm_window_t11_ParamLimits

0x4f63,	// (0x0001407c) popup_midp_note_alarm_window_t11

0x4f75,	// (0x0001408e) scroll_pane_cp17_ParamLimits

0x4f75,	// (0x0001408e) scroll_pane_cp17

0xda54,	// (0x0001cb6d) volume_small_pane_cp_g1

0xdd8c,	// (0x0001cea5) volume_small_pane_cp_g2

0xdd95,	// (0x0001ceae) volume_small_pane_cp_g3

0xdd9e,	// (0x0001ceb7) volume_small_pane_cp_g4

0xda81,	// (0x0001cb9a) volume_small_pane_cp_g5

0xdda7,	// (0x0001cec0) volume_small_pane_cp_g6

0xddb0,	// (0x0001cec9) volume_small_pane_cp_g7

0xddb9,	// (0x0001ced2) volume_small_pane_cp_g8

0xddc2,	// (0x0001cedb) volume_small_pane_cp_g9

0xddcb,	// (0x0001cee4) volume_small_pane_cp_g10

0x3ba6,	// (0x00012cbf) midp_ticker_pane_g1_ParamLimits

0x3bb2,	// (0x00012ccb) midp_ticker_pane_g2_ParamLimits

0xf733,	// (0x0001e84c) midp_ticker_pane_g_ParamLimits

0x3bbe,	// (0x00012cd7) midp_ticker_pane_t1_ParamLimits

0x3e5e,	// (0x00012f77) aid_fill_nsta_2

0x47bb,	// (0x000138d4) list_form2_midp_pane

0x587b,	// (0x00014994) midp_editing_number_pane_ParamLimits

0x5887,	// (0x000149a0) midp_ticker_pane_ParamLimits

0x66e6,	// (0x000157ff) form2_midp_field_pane

0x670a,	// (0x00015823) scroll_pane_cp51

0x672a,	// (0x00015843) form2_midp_button_pane_ParamLimits

0x672a,	// (0x00015843) form2_midp_button_pane

0x673c,	// (0x00015855) form2_midp_content_pane_ParamLimits

0x673c,	// (0x00015855) form2_midp_content_pane

0x6756,	// (0x0001586f) form2_midp_field_choice_group_pane

0x675e,	// (0x00015877) form2_midp_field_pane_g1

0x6766,	// (0x0001587f) form2_midp_field_pane_g2

0x676e,	// (0x00015887) form2_midp_field_pane_g3

0x6776,	// (0x0001588f) form2_midp_field_pane_g4

0x0003,

0xfac8,	// (0x0001ebe1) form2_midp_field_pane_g

0x677e,	// (0x00015897) form2_midp_gauge_slider_pane

0x6786,	// (0x0001589f) form2_midp_gauge_wait_pane

0x678e,	// (0x000158a7) form2_midp_image_pane_ParamLimits

0x678e,	// (0x000158a7) form2_midp_image_pane

0x67a9,	// (0x000158c2) form2_midp_label_pane_ParamLimits

0x67a9,	// (0x000158c2) form2_midp_label_pane

0x67c2,	// (0x000158db) form2_midp_label_pane_cp_ParamLimits

0x67c2,	// (0x000158db) form2_midp_label_pane_cp

0x67e1,	// (0x000158fa) form2_midp_string_pane_ParamLimits

0x67e1,	// (0x000158fa) form2_midp_string_pane

0xc85d,	// (0x0001b976) form2_midp_text_pane_ParamLimits

0xc85d,	// (0x0001b976) form2_midp_text_pane

0x680c,	// (0x00015925) form2_midp_time_pane

0x681c,	// (0x00015935) input_focus_pane_cp51_ParamLimits

0x681c,	// (0x00015935) input_focus_pane_cp51

0x6834,	// (0x0001594d) form2_midp_label_pane_t1_ParamLimits

0x6834,	// (0x0001594d) form2_midp_label_pane_t1

0xc876,	// (0x0001b98f) form2_mdip_text_pane_t1_ParamLimits

0xc876,	// (0x0001b98f) form2_mdip_text_pane_t1

0xc891,	// (0x0001b9aa) form2_midp_time_pane_t1

0x688f,	// (0x000159a8) form2_midp_gauge_slider_pane_t1

0x68a1,	// (0x000159ba) form2_midp_gauge_slider_pane_t2

0x68b3,	// (0x000159cc) form2_midp_gauge_slider_pane_t3

0x0002,

0xfad1,	// (0x0001ebea) form2_midp_gauge_slider_pane_t

0x68c5,	// (0x000159de) form2_midp_slider_pane

0x68d1,	// (0x000159ea) form2_midp_gauge_wait_pane_t1

0x68df,	// (0x000159f8) form2_midp_wait_pane_ParamLimits

0x68df,	// (0x000159f8) form2_midp_wait_pane

0x44e9,	// (0x00013602) list_single_2graphic_pane_cp4_ParamLimits

0x44e9,	// (0x00013602) list_single_2graphic_pane_cp4

0x690a,	// (0x00015a23) list_single_midp_graphic_pane_cp_ParamLimits

0x690a,	// (0x00015a23) list_single_midp_graphic_pane_cp

0x1f0f,	// (0x00011028) list_highlight_pane_cp20

0x6928,	// (0x00015a41) list_single_2graphic_pane_g1_cp4

0x5ccb,	// (0x00014de4) list_single_2graphic_pane_g2_cp4

0x6930,	// (0x00015a49) list_single_2graphic_pane_t1_cp4

0x1fef,	// (0x00011108) list_highlight_pane_cp21

0x693f,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp

0x694e,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp

0x6963,	// (0x00015a7c) form2_mdip_string_pane_t1_ParamLimits

0x6963,	// (0x00015a7c) form2_mdip_string_pane_t1

0x1f0f,	// (0x00011028) bg_wml_button_pane_cp2

0x1e28,	// (0x00010f41) form2_midp_image_pane_g1

0xbeae,	// (0x0001afc7) list_double_large_graphic_pane_g5_ParamLimits

0xbeae,	// (0x0001afc7) list_double_large_graphic_pane_g5

0x3add,	// (0x00012bf6) midp_form_pane_ParamLimits

0x1fef,	// (0x00011108) main_apps_wheel_pane_ParamLimits

0xd77d,	// (0x0001c896) popup_preview_window_ParamLimits

0xd77d,	// (0x0001c896) popup_preview_window

0xd8f8,	// (0x0001ca11) popup_touch_info_window_ParamLimits

0xd8f8,	// (0x0001ca11) popup_touch_info_window

0xd916,	// (0x0001ca2f) popup_touch_menu_window_ParamLimits

0xd916,	// (0x0001ca2f) popup_touch_menu_window

0x1e1e,	// (0x00010f37) bg_popup_sub_pane_cp6

0x69cd,	// (0x00015ae6) list_touch_menu_pane

0x69d5,	// (0x00015aee) list_single_touch_menu_pane_ParamLimits

0x69d5,	// (0x00015aee) list_single_touch_menu_pane

0x69ec,	// (0x00015b05) list_single_touch_menu_pane_t1

0x1fef,	// (0x00011108) bg_popup_sub_pane_cp7_ParamLimits

0x1fef,	// (0x00011108) bg_popup_sub_pane_cp7

0x69fa,	// (0x00015b13) heading_sub_pane

0x6a02,	// (0x00015b1b) list_touch_info_pane_ParamLimits

0x6a02,	// (0x00015b1b) list_touch_info_pane

0x6a11,	// (0x00015b2a) list_single_touch_info_pane_ParamLimits

0x6a11,	// (0x00015b2a) list_single_touch_info_pane

0x6a22,	// (0x00015b3b) list_single_touch_info_pane_t1

0x6a30,	// (0x00015b49) list_single_touch_info_pane_t2

0x0001,

0xfadf,	// (0x0001ebf8) list_single_touch_info_pane_t

0x3ad5,	// (0x00012bee) bg_popup_heading_pane_cp

0x6a3e,	// (0x00015b57) heading_sub_pane_t1

0x4439,	// (0x00013552) bg_popup_preview_window_pane_cp_ParamLimits

0x4439,	// (0x00013552) bg_popup_preview_window_pane_cp

0x69fa,	// (0x00015b13) heading_preview_pane

0x6a02,	// (0x00015b1b) list_preview_pane_ParamLimits

0x6a02,	// (0x00015b1b) list_preview_pane

0x6a4c,	// (0x00015b65) popup_preview_window_g1

0x6a11,	// (0x00015b2a) list_single_preview_pane_ParamLimits

0x6a11,	// (0x00015b2a) list_single_preview_pane

0x6a54,	// (0x00015b6d) list_single_preview_pane_g1

0x6a5c,	// (0x00015b75) list_single_preview_pane_t1

0x6a22,	// (0x00015b3b) list_single_preview_pane_t2

0x0001,

0xfae4,	// (0x0001ebfd) list_single_preview_pane_t

0x6a6a,	// (0x00015b83) bg_popup_heading_pane_cp2_ParamLimits

0x6a6a,	// (0x00015b83) bg_popup_heading_pane_cp2

0x6a80,	// (0x00015b99) heading_preview_pane_g1

0x6a88,	// (0x00015ba1) heading_preview_pane_t1_ParamLimits

0x6a88,	// (0x00015ba1) heading_preview_pane_t1

0x20f3,	// (0x0001120c) soft_indicator_pane_t1_ParamLimits

0x275c,	// (0x00011875) scroll_pane_ParamLimits

0x32f6,	// (0x0001240f) scroll_sc2_left_pane

0x32ed,	// (0x00012406) scroll_sc2_right_pane

0x3315,	// (0x0001242e) scroll_bg_pane_g1_ParamLimits

0x332a,	// (0x00012443) scroll_bg_pane_g2_ParamLimits

0x3342,	// (0x0001245b) scroll_bg_pane_g3_ParamLimits

0xf6be,	// (0x0001e7d7) scroll_bg_pane_g_ParamLimits

0x3315,	// (0x0001242e) scroll_handle_pane_g1_ParamLimits

0x3364,	// (0x0001247d) scroll_handle_pane_g2_ParamLimits

0x3342,	// (0x0001245b) scroll_handle_pane_g3_ParamLimits

0xf6c5,	// (0x0001e7de) scroll_handle_pane_g_ParamLimits

0xd4c5,	// (0x0001c5de) popup_choice_list_window_ParamLimits

0xd4c5,	// (0x0001c5de) popup_choice_list_window

0x4249,	// (0x00013362) choice_list_pane

0x42ed,	// (0x00013406) cell_toolbar_pane_t1

0x4315,	// (0x0001342e) toolbar_button_pane_ParamLimits

0x53f2,	// (0x0001450b) ai_gene_pane_1_t2_ParamLimits

0x53f2,	// (0x0001450b) ai_gene_pane_1_t2

0x0001,

0xf8e8,	// (0x0001ea01) ai_gene_pane_1_t_ParamLimits

0xf8e8,	// (0x0001ea01) ai_gene_pane_1_t

0x6aa5,	// (0x00015bbe) scroll_sc2_left_pane_g1

0x6aa5,	// (0x00015bbe) scroll_sc2_right_pane_g1

0x3e24,	// (0x00012f3d) bg_popup_sub_pane_cp10

0x6aaf,	// (0x00015bc8) list_choice_list_pane

0x6ac6,	// (0x00015bdf) list_single_choice_list_pane_ParamLimits

0x6ac6,	// (0x00015bdf) list_single_choice_list_pane

0x6ad8,	// (0x00015bf1) list_single_choice_list_pane_g1

0x2fe4,	// (0x000120fd) list_single_choice_list_pane_t1_ParamLimits

0x2fe4,	// (0x000120fd) list_single_choice_list_pane_t1

0x6ae0,	// (0x00015bf9) choice_list_pane_g1

0x6ae8,	// (0x00015c01) choice_list_pane_t1

0x1e1e,	// (0x00010f37) input_focus_pane_cp11

0x31c8,	// (0x000122e1) title_pane_stacon_g2_ParamLimits

0x31c8,	// (0x000122e1) title_pane_stacon_g2

0x0002,

0xf6a4,	// (0x0001e7bd) title_pane_stacon_g_ParamLimits

0xf6a4,	// (0x0001e7bd) title_pane_stacon_g

0x3ad5,	// (0x00012bee) cursor_press_pane

0xd561,	// (0x0001c67a) popup_fep_hwr_window_ParamLimits

0xd561,	// (0x0001c67a) popup_fep_hwr_window

0xd5bd,	// (0x0001c6d6) popup_fep_vkb_window_ParamLimits

0xd5bd,	// (0x0001c6d6) popup_fep_vkb_window

0x6af6,	// (0x00015c0f) cursor_press_pane_g1

0x0002,

0xfb0d,	// (0x0001ec26) fep_vkb_side_pane_g_ParamLimits

0xde09,	// (0x0001cf22) fep_hwr_candidate_pane_ParamLimits

0xde09,	// (0x0001cf22) fep_hwr_candidate_pane

0xde31,	// (0x0001cf4a) fep_hwr_side_pane_ParamLimits

0xde31,	// (0x0001cf4a) fep_hwr_side_pane

0xde51,	// (0x0001cf6a) fep_hwr_top_pane_ParamLimits

0xde51,	// (0x0001cf6a) fep_hwr_top_pane

0xde69,	// (0x0001cf82) fep_hwr_write_pane_ParamLimits

0xde69,	// (0x0001cf82) fep_hwr_write_pane

0xfb0d,	// (0x0001ec26) fep_vkb_side_pane_g

0x6b10,	// (0x00015c29) fep_hwr_top_pane_g1

0x6afe,	// (0x00015c17) fep_hwr_top_pane_g2

0xde95,	// (0x0001cfae) fep_hwr_top_pane_g3

0x0002,

0xfae9,	// (0x0001ec02) fep_hwr_top_pane_g

0xdeaa,	// (0x0001cfc3) fep_hwr_top_text_pane

0x34b9,	// (0x000125d2) fep_hwr_top_text_pane_g1

0x6b46,	// (0x00015c5f) fep_hwr_top_text_pane_t1

0xdf98,	// (0x0001d0b1) fep_hwr_candidate_pane_g1

0x6d56,	// (0x00015e6f) fep_vkb_keypad_pane_g3_ParamLimits

0x6d56,	// (0x00015e6f) fep_vkb_keypad_pane_g3

0x6d78,	// (0x00015e91) fep_vkb_keypad_pane_g4_ParamLimits

0x6d78,	// (0x00015e91) fep_vkb_keypad_pane_g4

0x6de7,	// (0x00015f00) fep_vkb_bottom_pane_g2_ParamLimits

0x6de7,	// (0x00015f00) fep_vkb_bottom_pane_g2

0x0001,

0xfb14,	// (0x0001ec2d) fep_vkb_bottom_pane_g_ParamLimits

0xfb14,	// (0x0001ec2d) fep_vkb_bottom_pane_g

0x6aa5,	// (0x00015bbe) cell_vkb_side_pane_g2

0x0001,

0xfb1e,	// (0x0001ec37) cell_vkb_side_pane_g

0x6e72,	// (0x00015f8b) cell_vkb_side_pane_t1

0x6e80,	// (0x00015f99) cell_vkb_side_pane_t1_copy1

0x6aa5,	// (0x00015bbe) bg_fep_vkb_candidate_pane_g2

0x6fa4,	// (0x000160bd) cell_vkb_candidate_pane_ParamLimits

0x6b54,	// (0x00015c6d) aid_size_cell_vkb_ParamLimits

0x6b54,	// (0x00015c6d) aid_size_cell_vkb

0x6fa4,	// (0x000160bd) cell_vkb_candidate_pane

0xdfb2,	// (0x0001d0cb) bg_popup_fep_shadow_pane_g1

0x6bca,	// (0x00015ce3) fep_vkb_bottom_pane_ParamLimits

0x6bca,	// (0x00015ce3) fep_vkb_bottom_pane

0x6c07,	// (0x00015d20) fep_vkb_candidate_pane_ParamLimits

0x6c07,	// (0x00015d20) fep_vkb_candidate_pane

0x6c23,	// (0x00015d3c) fep_vkb_keypad_pane_ParamLimits

0x6c23,	// (0x00015d3c) fep_vkb_keypad_pane

0x6c57,	// (0x00015d70) fep_vkb_side_pane_ParamLimits

0x6c57,	// (0x00015d70) fep_vkb_side_pane

0x6c83,	// (0x00015d9c) fep_vkb_top_pane_ParamLimits

0x6c83,	// (0x00015d9c) fep_vkb_top_pane

0x6caf,	// (0x00015dc8) fep_vkb_top_pane_g1_ParamLimits

0x6caf,	// (0x00015dc8) fep_vkb_top_pane_g1

0x6cbe,	// (0x00015dd7) fep_vkb_top_pane_g2_ParamLimits

0x6cbe,	// (0x00015dd7) fep_vkb_top_pane_g2

0x6ccd,	// (0x00015de6) fep_vkb_top_pane_g3_ParamLimits

0x6ccd,	// (0x00015de6) fep_vkb_top_pane_g3

0x0003,

0xfb04,	// (0x0001ec1d) fep_vkb_top_pane_g_ParamLimits

0xfb04,	// (0x0001ec1d) fep_vkb_top_pane_g

0x6ceb,	// (0x00015e04) fep_vkb_top_text_pane_ParamLimits

0x6ceb,	// (0x00015e04) fep_vkb_top_text_pane

0x6cfc,	// (0x00015e15) fep_vkb_side_pane_g1_ParamLimits

0x6cfc,	// (0x00015e15) fep_vkb_side_pane_g1

0x6d45,	// (0x00015e5e) grid_vkb_side_pane_ParamLimits

0x6d45,	// (0x00015e5e) grid_vkb_side_pane

0xdfba,	// (0x0001d0d3) bg_popup_fep_shadow_pane_g2

0xdfc3,	// (0x0001d0dc) bg_popup_fep_shadow_pane_g3

0xdfcb,	// (0x0001d0e4) bg_popup_fep_shadow_pane_g4

0xdfd4,	// (0x0001d0ed) bg_popup_fep_shadow_pane_g5

0xdfdc,	// (0x0001d0f5) bg_popup_fep_shadow_pane_g6

0xdfe4,	// (0x0001d0fd) bg_popup_fep_shadow_pane_g7

0x2e2e,	// (0x00011f47) bg_popup_fep_shadow_pane_g8

0x6d96,	// (0x00015eaf) grid_vkb_keypad_number_pane_ParamLimits

0x6d96,	// (0x00015eaf) grid_vkb_keypad_number_pane

0x6da6,	// (0x00015ebf) grid_vkb_keypad_pane_ParamLimits

0x6da6,	// (0x00015ebf) grid_vkb_keypad_pane

0x6dcc,	// (0x00015ee5) fep_vkb_bottom_pane_g1_ParamLimits

0x6dcc,	// (0x00015ee5) fep_vkb_bottom_pane_g1

0x6df5,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x6df5,	// (0x00015f0e) grid_vkb_keypad_bottom_left_pane

0x6e0a,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x6e0a,	// (0x00015f23) grid_vkb_keypad_bottom_right_pane

0x6e1f,	// (0x00015f38) fep_vkb_top_text_pane_g1

0x6e3a,	// (0x00015f53) fep_vkb_top_text_pane_t1

0x6e4f,	// (0x00015f68) cell_vkb_side_pane_ParamLimits

0x6e4f,	// (0x00015f68) cell_vkb_side_pane

0x6aa5,	// (0x00015bbe) cell_vkb_side_pane_g1

0x6e8e,	// (0x00015fa7) cell_vkb_keypad_pane_ParamLimits

0x6e8e,	// (0x00015fa7) cell_vkb_keypad_pane

0x6efb,	// (0x00016014) cell_vkb_keypad_pane_g1

0x0008,

0xfb31,	// (0x0001ec4a) bg_popup_fep_shadow_pane_g

0x6aa5,	// (0x00015bbe) cell_hwr_side_pane_g1

0x6aa5,	// (0x00015bbe) cell_hwr_side_pane_g2

0x6f05,	// (0x0001601e) cell_vkb_keypad_pane_t1

0x6f13,	// (0x0001602c) cell_vkb_keypad_bottom_left_pane_ParamLimits

0x6f13,	// (0x0001602c) cell_vkb_keypad_bottom_left_pane

0x6f30,	// (0x00016049) cell_vkb_keypad_bottom_right_pane_ParamLimits

0x6f30,	// (0x00016049) cell_vkb_keypad_bottom_right_pane

0x6aa5,	// (0x00015bbe) cell_vkb_keypad_bottom_left_pane_g1

0x6aa5,	// (0x00015bbe) cell_vkb_keypad_bottom_right_pane_g1

0x6f69,	// (0x00016082) cell_vkb_keypad_number_pane_ParamLimits

0x6f69,	// (0x00016082) cell_vkb_keypad_number_pane

0x6f88,	// (0x000160a1) cell_vkb_keypad_number_pane_g1

0x6f92,	// (0x000160ab) cell_vkb_keypad_number_pane_g2

0x6f9b,	// (0x000160b4) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb23,	// (0x0001ec3c) cell_vkb_keypad_number_pane_g

0x6f05,	// (0x0001601e) cell_vkb_keypad_number_pane_t1

0x6fbd,	// (0x000160d6) fep_vkb_candidate_pane_g1

0x0001,

0xfb1e,	// (0x0001ec37) cell_hwr_side_pane_g

0x6fd6,	// (0x000160ef) cell_hwr_side_pane_t1

0xdff4,	// (0x0001d10d) cell_hwr_side_pane_t1_copy1

0x6cdd,	// (0x00015df6) cell_hwr_candidate_pane_g1

0xe002,	// (0x0001d11b) cell_hwr_candidate_pane_t1

0x6aa5,	// (0x00015bbe) cell_vkb_candidate_pane_g2

0x701a,	// (0x00016133) cell_vkb_candidate_pane_t1

0xddd4,	// (0x0001ceed) bg_popup_fep_shadow_pane_ParamLimits

0xddd4,	// (0x0001ceed) bg_popup_fep_shadow_pane

0xa5cb,	// (0x000196e4) bg_fep_hwr_top_pane_g4

0x6b22,	// (0x00015c3b) bg_hwr_side_pane_g1_ParamLimits

0x6b22,	// (0x00015c3b) bg_hwr_side_pane_g1

0xdee6,	// (0x0001cfff) cell_hwr_side_pane_ParamLimits

0xdee6,	// (0x0001cfff) cell_hwr_side_pane

0xdf21,	// (0x0001d03a) fep_hwr_write_pane_g1_ParamLimits

0xdf21,	// (0x0001d03a) fep_hwr_write_pane_g1

0xdf2e,	// (0x0001d047) fep_hwr_write_pane_g2_ParamLimits

0xdf2e,	// (0x0001d047) fep_hwr_write_pane_g2

0xdf3b,	// (0x0001d054) fep_hwr_write_pane_g3_ParamLimits

0xdf3b,	// (0x0001d054) fep_hwr_write_pane_g3

0xdf49,	// (0x0001d062) fep_hwr_write_pane_g4_ParamLimits

0xdf49,	// (0x0001d062) fep_hwr_write_pane_g4

0x0005,

0xfaf0,	// (0x0001ec09) fep_hwr_write_pane_g_ParamLimits

0xfaf0,	// (0x0001ec09) fep_hwr_write_pane_g

0xa5cb,	// (0x000196e4) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xa5cb,	// (0x000196e4) bg_fep_hwr_candidate_pane_g2

0xdf5e,	// (0x0001d077) cell_hwr_candidate_pane_ParamLimits

0xdf5e,	// (0x0001d077) cell_hwr_candidate_pane

0xdf98,	// (0x0001d0b1) fep_hwr_candidate_pane_g1_ParamLimits

0x6b82,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x6b82,	// (0x00015c9b) bg_popup_fep_shadow_pane_cp2

0x6cdd,	// (0x00015df6) fep_vkb_top_pane_g4_ParamLimits

0x6cdd,	// (0x00015df6) fep_vkb_top_pane_g4

0x6d23,	// (0x00015e3c) fep_vkb_side_pane_g2_ParamLimits

0x6d23,	// (0x00015e3c) fep_vkb_side_pane_g2

0xc026,	// (0x0001b13f) list_setting_pane_t4_ParamLimits

0xc026,	// (0x0001b13f) list_setting_pane_t4

0xc0bc,	// (0x0001b1d5) list_setting_number_pane_t5_ParamLimits

0xc0bc,	// (0x0001b1d5) list_setting_number_pane_t5

0x34f0,	// (0x00012609) list_double_heading_pane_cp2_ParamLimits

0x34f0,	// (0x00012609) list_double_heading_pane_cp2

0x394a,	// (0x00012a63) list_double_heading_pane_g1_cp2_ParamLimits

0x394a,	// (0x00012a63) list_double_heading_pane_g1_cp2

0x7028,	// (0x00016141) list_double_heading_pane_g2_cp2_ParamLimits

0x7028,	// (0x00016141) list_double_heading_pane_g2_cp2

0x703c,	// (0x00016155) list_double_heading_pane_t1_cp2_ParamLimits

0x703c,	// (0x00016155) list_double_heading_pane_t1_cp2

0x7052,	// (0x0001616b) list_double_heading_pane_t2_cp2_ParamLimits

0x7052,	// (0x0001616b) list_double_heading_pane_t2_cp2

0x1e08,	// (0x00010f21) aid_value_unit2

0xcdcf,	// (0x0001bee8) popup_preview_fixed_window

0x2297,	// (0x000113b0) bg_popup_preview_window_pane_cp02

0x7064,	// (0x0001617d) list_preview_fixed_pane

0x70aa,	// (0x000161c3) list_empty_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_empty_pane_fp

0x70aa,	// (0x000161c3) list_single_cale_day_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_cale_day_pane_fp

0x70aa,	// (0x000161c3) list_single_graphic_heading_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_graphic_heading_pane_fp

0x70aa,	// (0x000161c3) list_single_graphic_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_graphic_pane_fp

0x70aa,	// (0x000161c3) list_single_heading_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_heading_pane_fp

0x70aa,	// (0x000161c3) list_single_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_pane_fp

0x70be,	// (0x000161d7) list_single_pane_fp_g1_ParamLimits

0x70be,	// (0x000161d7) list_single_pane_fp_g1

0xc8a4,	// (0x0001b9bd) list_single_pane_fp_g2_ParamLimits

0xc8a4,	// (0x0001b9bd) list_single_pane_fp_g2

0xc8b0,	// (0x0001b9c9) list_single_pane_fp_g3_ParamLimits

0xc8b0,	// (0x0001b9c9) list_single_pane_fp_g3

0x70ea,	// (0x00016203) list_single_pane_fp_g4_ParamLimits

0x70ea,	// (0x00016203) list_single_pane_fp_g4

0x0003,

0xfb52,	// (0x0001ec6b) list_single_pane_fp_g_ParamLimits

0xfb52,	// (0x0001ec6b) list_single_pane_fp_g

0xc8c4,	// (0x0001b9dd) list_single_pane_fp_t1_ParamLimits

0xc8c4,	// (0x0001b9dd) list_single_pane_fp_t1

0xc8db,	// (0x0001b9f4) list_single_graphic_pane_fp_g1_ParamLimits

0xc8db,	// (0x0001b9f4) list_single_graphic_pane_fp_g1

0x70be,	// (0x000161d7) list_single_graphic_pane_fp_g2_ParamLimits

0x70be,	// (0x000161d7) list_single_graphic_pane_fp_g2

0xc8a4,	// (0x0001b9bd) list_single_graphic_pane_fp_g3_ParamLimits

0xc8a4,	// (0x0001b9bd) list_single_graphic_pane_fp_g3

0xc8b0,	// (0x0001b9c9) list_single_graphic_pane_fp_g4_ParamLimits

0xc8b0,	// (0x0001b9c9) list_single_graphic_pane_fp_g4

0x70ea,	// (0x00016203) list_single_graphic_pane_fp_g5_ParamLimits

0x70ea,	// (0x00016203) list_single_graphic_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001ec74) list_single_graphic_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001ec74) list_single_graphic_pane_fp_g

0xc8e7,	// (0x0001ba00) list_single_graphic_pane_fp_t1_ParamLimits

0xc8e7,	// (0x0001ba00) list_single_graphic_pane_fp_t1

0xc8db,	// (0x0001b9f4) list_single_graphic_heading_pane_fp_g1_ParamLimits

0xc8db,	// (0x0001b9f4) list_single_graphic_heading_pane_fp_g1

0x70be,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x70be,	// (0x000161d7) list_single_graphic_heading_pane_fp_g2

0xc8a4,	// (0x0001b9bd) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xc8a4,	// (0x0001b9bd) list_single_graphic_heading_pane_fp_g3

0xc8b0,	// (0x0001b9c9) list_single_graphic_heading_pane_fp_g4_ParamLimits

0xc8b0,	// (0x0001b9c9) list_single_graphic_heading_pane_fp_g4

0x70ea,	// (0x00016203) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x70ea,	// (0x00016203) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001ec74) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001ec74) list_single_graphic_heading_pane_fp_g

0xc8fd,	// (0x0001ba16) list_single_graphic_heading_pane_fp_t1_ParamLimits

0xc8fd,	// (0x0001ba16) list_single_graphic_heading_pane_fp_t1

0xc913,	// (0x0001ba2c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0xc913,	// (0x0001ba2c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb66,	// (0x0001ec7f) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb66,	// (0x0001ec7f) list_single_graphic_heading_pane_fp_t

0xc925,	// (0x0001ba3e) list_single_cale_day_pane_fp_g1_ParamLimits

0xc925,	// (0x0001ba3e) list_single_cale_day_pane_fp_g1

0x718f,	// (0x000162a8) list_single_cale_day_pane_fp_g2_ParamLimits

0x718f,	// (0x000162a8) list_single_cale_day_pane_fp_g2

0xc95d,	// (0x0001ba76) list_single_cale_day_pane_fp_g3_ParamLimits

0xc95d,	// (0x0001ba76) list_single_cale_day_pane_fp_g3

0xc985,	// (0x0001ba9e) list_single_cale_day_pane_fp_g4_ParamLimits

0xc985,	// (0x0001ba9e) list_single_cale_day_pane_fp_g4

0xc9a9,	// (0x0001bac2) list_single_cale_day_pane_fp_g5_ParamLimits

0xc9a9,	// (0x0001bac2) list_single_cale_day_pane_fp_g5

0x0004,

0xfb6b,	// (0x0001ec84) list_single_cale_day_pane_fp_g_ParamLimits

0xfb6b,	// (0x0001ec84) list_single_cale_day_pane_fp_g

0xc9cd,	// (0x0001bae6) list_single_cale_day_pane_fp_t1_ParamLimits

0xc9cd,	// (0x0001bae6) list_single_cale_day_pane_fp_t1

0xc9f3,	// (0x0001bb0c) list_single_cale_day_pane_fp_t2_ParamLimits

0xc9f3,	// (0x0001bb0c) list_single_cale_day_pane_fp_t2

0xca0c,	// (0x0001bb25) list_single_cale_day_pane_fp_t3_ParamLimits

0xca0c,	// (0x0001bb25) list_single_cale_day_pane_fp_t3

0x0002,

0xfb76,	// (0x0001ec8f) list_single_cale_day_pane_fp_t_ParamLimits

0xfb76,	// (0x0001ec8f) list_single_cale_day_pane_fp_t

0x70be,	// (0x000161d7) list_empty_pane_fp_g1_ParamLimits

0x70be,	// (0x000161d7) list_empty_pane_fp_g1

0xca25,	// (0x0001bb3e) list_empty_pane_fp_t1

0xca33,	// (0x0001bb4c) list_empty_pane_fp_t2

0x0001,

0xfb7d,	// (0x0001ec96) list_empty_pane_fp_t

0x70be,	// (0x000161d7) list_single_heading_pane_fp_g1_ParamLimits

0x70be,	// (0x000161d7) list_single_heading_pane_fp_g1

0xc8a4,	// (0x0001b9bd) list_single_heading_pane_fp_g2_ParamLimits

0xc8a4,	// (0x0001b9bd) list_single_heading_pane_fp_g2

0xc8b0,	// (0x0001b9c9) list_single_heading_pane_fp_g3_ParamLimits

0xc8b0,	// (0x0001b9c9) list_single_heading_pane_fp_g3

0x0002,

0xfb82,	// (0x0001ec9b) list_single_heading_pane_fp_g_ParamLimits

0xfb82,	// (0x0001ec9b) list_single_heading_pane_fp_g

0xca41,	// (0x0001bb5a) list_single_heading_pane_fp_t1_ParamLimits

0xca41,	// (0x0001bb5a) list_single_heading_pane_fp_t1

0xca53,	// (0x0001bb6c) list_single_heading_pane_fp_t2_ParamLimits

0xca53,	// (0x0001bb6c) list_single_heading_pane_fp_t2

0x0001,

0xfb89,	// (0x0001eca2) list_single_heading_pane_fp_t_ParamLimits

0xfb89,	// (0x0001eca2) list_single_heading_pane_fp_t

0x3052,	// (0x0001216b) aid_size_cell_fast

0x21fe,	// (0x00011317) soft_indicator_pane_cp1_t1

0x308f,	// (0x000121a8) cell_app_pane_cp2_ParamLimits

0x308f,	// (0x000121a8) cell_app_pane_cp2

0xddf6,	// (0x0001cf0f) fep_hwr_candidate_drop_down_list_pane

0xa602,	// (0x0001971b) fep_hwr_candidate_pane_g3_ParamLimits

0xa602,	// (0x0001971b) fep_hwr_candidate_pane_g3

0xa60f,	// (0x00019728) fep_hwr_candidate_pane_g4_ParamLimits

0xa60f,	// (0x00019728) fep_hwr_candidate_pane_g4

0x0002,

0xfafd,	// (0x0001ec16) fep_hwr_candidate_pane_g_ParamLimits

0xfafd,	// (0x0001ec16) fep_hwr_candidate_pane_g

0x6bf6,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x6bf6,	// (0x00015d0f) fep_vkb_candidate_drop_down_list_pane

0x6fc5,	// (0x000160de) fep_vkb_candidate_pane_g3

0x6fcd,	// (0x000160e6) fep_vkb_candidate_pane_g4

0x0002,

0xfb2a,	// (0x0001ec43) fep_vkb_candidate_pane_g

0x6cdd,	// (0x00015df6) cell_hwr_candidate_pane_g1_ParamLimits

0x724a,	// (0x00016363) cell_hwr_candidate_pane_g3_ParamLimits

0x724a,	// (0x00016363) cell_hwr_candidate_pane_g3

0x726b,	// (0x00016384) cell_hwr_candidate_pane_g4_ParamLimits

0x726b,	// (0x00016384) cell_hwr_candidate_pane_g4

0x0002,

0xfb44,	// (0x0001ec5d) cell_hwr_candidate_pane_g_ParamLimits

0xfb44,	// (0x0001ec5d) cell_hwr_candidate_pane_g

0x6fe4,	// (0x000160fd) cell_vkb_candidate_pane_g3_ParamLimits

0x6fe4,	// (0x000160fd) cell_vkb_candidate_pane_g3

0x6fff,	// (0x00016118) cell_vkb_candidate_pane_g4_ParamLimits

0x6fff,	// (0x00016118) cell_vkb_candidate_pane_g4

0x72e9,	// (0x00016402) cell_app_pane_cp2_g1_ParamLimits

0x72e9,	// (0x00016402) cell_app_pane_cp2_g1

0x7307,	// (0x00016420) cell_app_pane_cp2_g2_ParamLimits

0x7307,	// (0x00016420) cell_app_pane_cp2_g2

0x0001,

0xfb8e,	// (0x0001eca7) cell_app_pane_cp2_g_ParamLimits

0xfb8e,	// (0x0001eca7) cell_app_pane_cp2_g

0x7313,	// (0x0001642c) cell_app_pane_cp2_t1_ParamLimits

0x7313,	// (0x0001642c) cell_app_pane_cp2_t1

0x2ceb,	// (0x00011e04) grid_highlight_pane_cp1_ParamLimits

0x2ceb,	// (0x00011e04) grid_highlight_pane_cp1

0xe01f,	// (0x0001d138) cell_hwr_candidate_pane_cp1_ParamLimits

0xe01f,	// (0x0001d138) cell_hwr_candidate_pane_cp1

0x6cdd,	// (0x00015df6) fep_hwr_candidate_drop_down_list_pane_g1

0x7348,	// (0x00016461) fep_hwr_candidate_drop_down_list_pane_g2

0x7355,	// (0x0001646e) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0001ecac) fep_hwr_candidate_drop_down_list_pane_g

0xe03d,	// (0x0001d156) fep_hwr_candidate_drop_down_list_scroll_pane

0xe046,	// (0x0001d15f) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xe046,	// (0x0001d15f) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xe053,	// (0x0001d16c) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xe053,	// (0x0001d16c) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xe060,	// (0x0001d179) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xe060,	// (0x0001d179) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x6fe4,	// (0x000160fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x6fe4,	// (0x000160fd) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x6fff,	// (0x00016118) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x6fff,	// (0x00016118) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xe06d,	// (0x0001d186) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xe06d,	// (0x0001d186) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xe088,	// (0x0001d1a1) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xe088,	// (0x0001d1a1) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xe0a3,	// (0x0001d1bc) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xe0a3,	// (0x0001d1bc) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9a,	// (0x0001ecb3) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9a,	// (0x0001ecb3) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7325,	// (0x0001643e) cell_vkb_candidate_pane_cp1_ParamLimits

0x7325,	// (0x0001643e) cell_vkb_candidate_pane_cp1

0x6cdd,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) fep_vkb_candidate_drop_down_list_pane_g1

0x7348,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7348,	// (0x00016461) fep_vkb_candidate_drop_down_list_pane_g2

0x7355,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7355,	// (0x0001646e) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb93,	// (0x0001ecac) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb93,	// (0x0001ecac) fep_vkb_candidate_drop_down_list_pane_g

0x7362,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7362,	// (0x0001647b) fep_vkb_candidate_drop_down_list_scroll_pane

0x736f,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x736f,	// (0x00016488) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x737c,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x737c,	// (0x00016495) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7388,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7388,	// (0x000164a1) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x724a,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x724a,	// (0x00016363) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x726b,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x726b,	// (0x00016384) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7394,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7394,	// (0x000164ad) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x73b5,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x73b5,	// (0x000164ce) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x73d6,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x73d6,	// (0x000164ef) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbab,	// (0x0001ecc4) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbab,	// (0x0001ecc4) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x1f19,	// (0x00011032) title_pane_g1_ParamLimits

0x1f26,	// (0x0001103f) title_pane_g2_ParamLimits

0xf529,	// (0x0001e642) title_pane_g_ParamLimits

0x34b1,	// (0x000125ca) aid_call2_pane

0x34a9,	// (0x000125c2) aid_call_pane

0x34b9,	// (0x000125d2) popup_clock_analogue_window_g1

0x34b9,	// (0x000125d2) popup_clock_analogue_window_g2

0xd0a9,	// (0x0001c1c2) popup_clock_analogue_window_g3

0xd0b2,	// (0x0001c1cb) popup_clock_analogue_window_g4

0x1e28,	// (0x00010f41) popup_clock_analogue_window_g5

0x0004,

0xf6d3,	// (0x0001e7ec) popup_clock_analogue_window_g

0xd0ba,	// (0x0001c1d3) popup_clock_analogue_window_t1

0xd0c8,	// (0x0001c1e1) clock_digital_number_pane_ParamLimits

0xd0c8,	// (0x0001c1e1) clock_digital_number_pane

0xd0d4,	// (0x0001c1ed) clock_digital_number_pane_cp02_ParamLimits

0xd0d4,	// (0x0001c1ed) clock_digital_number_pane_cp02

0xd0e0,	// (0x0001c1f9) clock_digital_number_pane_cp03_ParamLimits

0xd0e0,	// (0x0001c1f9) clock_digital_number_pane_cp03

0xd0ec,	// (0x0001c205) clock_digital_number_pane_cp04_ParamLimits

0xd0ec,	// (0x0001c205) clock_digital_number_pane_cp04

0xd0f8,	// (0x0001c211) clock_digital_separator_pane_ParamLimits

0xd0f8,	// (0x0001c211) clock_digital_separator_pane

0xd104,	// (0x0001c21d) popup_clock_digital_window_t1_ParamLimits

0xd104,	// (0x0001c21d) popup_clock_digital_window_t1

0x1e28,	// (0x00010f41) clock_digital_number_pane_g1

0x1e28,	// (0x00010f41) clock_digital_number_pane_g2

0x0001,

0xf6de,	// (0x0001e7f7) clock_digital_number_pane_g

0x1e28,	// (0x00010f41) clock_digital_separator_pane_g1

0x1e28,	// (0x00010f41) clock_digital_separator_pane_g2

0x0001,

0xf6de,	// (0x0001e7f7) clock_digital_separator_pane_g

0x3e4e,	// (0x00012f67) aid_fill_nsta_ParamLimits

0x3f76,	// (0x0001308f) indicator_nsta_pane_ParamLimits

0x40e9,	// (0x00013202) popup_clock_analogue_window

0x40e9,	// (0x00013202) popup_clock_digital_window

0x6501,	// (0x0001561a) grid_indicator_nsta_pane_ParamLimits

0x652a,	// (0x00015643) clock_nsta_pane_t2

0x0001,

0xfa7d,	// (0x0001eb96) clock_nsta_pane_t

0xd06d,	// (0x0001c186) aid_size_max_handle

0xd077,	// (0x0001c190) aid_size_min_handle

0x3ad5,	// (0x00012bee) editor_scroll_pane

0x73f1,	// (0x0001650a) ex_editor_pane

0x2fc2,	// (0x000120db) scroll_pane_cp13

0x2789,	// (0x000118a2) scroll_pane_cp14

0x34e8,	// (0x00012601) scroll_pane_cp36

0x3500,	// (0x00012619) list_single_graphic_hl_pane_cp2_ParamLimits

0x3500,	// (0x00012619) list_single_graphic_hl_pane_cp2

0x592f,	// (0x00014a48) list_single_graphic_hl_pane_ParamLimits

0x592f,	// (0x00014a48) list_single_graphic_hl_pane

0xca69,	// (0x0001bb82) aid_size_min_hl_cp1

0x7402,	// (0x0001651b) list_highlight_pane_cp34_ParamLimits

0x7402,	// (0x0001651b) list_highlight_pane_cp34

0x7413,	// (0x0001652c) list_single_graphic_hl_pane_g1_ParamLimits

0x7413,	// (0x0001652c) list_single_graphic_hl_pane_g1

0xca72,	// (0x0001bb8b) list_single_graphic_hl_pane_g2_ParamLimits

0xca72,	// (0x0001bb8b) list_single_graphic_hl_pane_g2

0xca72,	// (0x0001bb8b) list_single_graphic_hl_pane_g3_ParamLimits

0xca72,	// (0x0001bb8b) list_single_graphic_hl_pane_g3

0xc401,	// (0x0001b51a) list_single_graphic_hl_pane_g4_ParamLimits

0xc401,	// (0x0001b51a) list_single_graphic_hl_pane_g4

0xca7e,	// (0x0001bb97) list_single_graphic_hl_pane_g5_ParamLimits

0xca7e,	// (0x0001bb97) list_single_graphic_hl_pane_g5

0x0004,

0xfbbc,	// (0x0001ecd5) list_single_graphic_hl_pane_g_ParamLimits

0xfbbc,	// (0x0001ecd5) list_single_graphic_hl_pane_g

0xca92,	// (0x0001bbab) list_single_graphic_hl_pane_t1_ParamLimits

0xca92,	// (0x0001bbab) list_single_graphic_hl_pane_t1

0x7442,	// (0x0001655b) aid_size_min_hl_cp2

0x744b,	// (0x00016564) list_highlight_pane_cp34_cp2_ParamLimits

0x744b,	// (0x00016564) list_highlight_pane_cp34_cp2

0x7413,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7413,	// (0x0001652c) list_single_graphic_hl_pane_g1_cp2

0x7458,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7458,	// (0x00016571) list_single_graphic_hl_pane_g2_cp2

0x7464,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7464,	// (0x0001657d) list_single_graphic_hl_pane_g3_cp2

0x394a,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x394a,	// (0x00012a63) list_single_graphic_hl_pane_g4_cp2

0x7028,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7028,	// (0x00016141) list_single_graphic_hl_pane_g5_cp2

0xd38f,	// (0x0001c4a8) control_pane_g4_ParamLimits

0xd38f,	// (0x0001c4a8) control_pane_g4

0x3e24,	// (0x00012f3d) bg_popup_sub_pane_cp10_ParamLimits

0x6aaf,	// (0x00015bc8) list_choice_list_pane_ParamLimits

0x6abe,	// (0x00015bd7) scroll_pane_cp23

0x2297,	// (0x000113b0) bg_popup_preview_window_pane_cp02_ParamLimits

0x7064,	// (0x0001617d) list_preview_fixed_pane_ParamLimits

0x707a,	// (0x00016193) list_preview_fixed_pane_cp_ParamLimits

0x707a,	// (0x00016193) list_preview_fixed_pane_cp

0x7086,	// (0x0001619f) popup_preview_fixed_window_g1_ParamLimits

0x7086,	// (0x0001619f) popup_preview_fixed_window_g1

0x7092,	// (0x000161ab) popup_preview_fixed_window_g2_ParamLimits

0x7092,	// (0x000161ab) popup_preview_fixed_window_g2

0x0002,

0xfb4b,	// (0x0001ec64) popup_preview_fixed_window_g_ParamLimits

0xfb4b,	// (0x0001ec64) popup_preview_fixed_window_g

0xcffd,	// (0x0001c116) aid_navi_side_left_pane_ParamLimits

0xd00d,	// (0x0001c126) aid_navi_side_right_pane_ParamLimits

0xd01c,	// (0x0001c135) navi_icon_pane_stacon_ParamLimits

0xd02c,	// (0x0001c145) navi_navi_pane_stacon_ParamLimits

0xd01c,	// (0x0001c135) navi_text_pane_stacon_ParamLimits

0x1e1e,	// (0x00010f37) main_text_info_pane

0x7486,	// (0x0001659f) listscroll_text_info_pane

0x748e,	// (0x000165a7) list_text_info_pane_ParamLimits

0x748e,	// (0x000165a7) list_text_info_pane

0x749d,	// (0x000165b6) scroll_pane_cp24_ParamLimits

0x749d,	// (0x000165b6) scroll_pane_cp24

0x74bb,	// (0x000165d4) list_text_info_pane_t1_ParamLimits

0x74bb,	// (0x000165d4) list_text_info_pane_t1

0xd4df,	// (0x0001c5f8) popup_fast_swap2_window_ParamLimits

0xd4df,	// (0x0001c5f8) popup_fast_swap2_window

0x74d8,	// (0x000165f1) aid_size_cell_fast2

0x1e1e,	// (0x00010f37) bg_popup_window_pane_cp17

0x47e7,	// (0x00013900) heading_pane_cp2

0x47ef,	// (0x00013908) listscroll_fast2_pane

0x74e2,	// (0x000165fb) grid_fast2_pane

0x74ea,	// (0x00016603) listscroll_fast2_pane_g1

0x74f2,	// (0x0001660b) listscroll_fast2_pane_g2

0x0001,

0xfbc7,	// (0x0001ece0) listscroll_fast2_pane_g

0x2fc2,	// (0x000120db) scroll_pane_cp26

0x74fa,	// (0x00016613) cell_fast2_pane_ParamLimits

0x74fa,	// (0x00016613) cell_fast2_pane

0x7510,	// (0x00016629) cell_fast2_pane_g1

0x7519,	// (0x00016632) cell_fast2_pane_g2

0x7522,	// (0x0001663b) cell_fast2_pane_g3

0x0002,

0xfbcc,	// (0x0001ece5) cell_fast2_pane_g

0x25e2,	// (0x000116fb) grid_highlight_pane_cp9

0x25f7,	// (0x00011710) main_eswt_pane_ParamLimits

0x25f7,	// (0x00011710) main_eswt_pane

0x74b2,	// (0x000165cb) list_single_text_info_pane

0x752a,	// (0x00016643) eswt_ctrl_button_pane

0x752a,	// (0x00016643) eswt_ctrl_canvas_pane

0x7532,	// (0x0001664b) eswt_ctrl_combo_pane

0x752a,	// (0x00016643) eswt_ctrl_default_pane

0x752a,	// (0x00016643) eswt_ctrl_label_pane

0x753a,	// (0x00016653) eswt_ctrl_wait_pane

0x7542,	// (0x0001665b) eswt_shell_pane

0x1e1e,	// (0x00010f37) listscroll_eswt_app_pane

0x755e,	// (0x00016677) popup_eswt_tasktip_window_ParamLimits

0x755e,	// (0x00016677) popup_eswt_tasktip_window

0x4439,	// (0x00013552) bg_popup_window_pane_cp18

0x756f,	// (0x00016688) eswt_control_pane_g1_ParamLimits

0x756f,	// (0x00016688) eswt_control_pane_g1

0x757c,	// (0x00016695) eswt_control_pane_g2_ParamLimits

0x757c,	// (0x00016695) eswt_control_pane_g2

0x7589,	// (0x000166a2) eswt_control_pane_g3_ParamLimits

0x7589,	// (0x000166a2) eswt_control_pane_g3

0x7596,	// (0x000166af) eswt_control_pane_g4_ParamLimits

0x7596,	// (0x000166af) eswt_control_pane_g4

0x0003,

0xfbd3,	// (0x0001ecec) eswt_control_pane_g_ParamLimits

0xfbd3,	// (0x0001ecec) eswt_control_pane_g

0x2ceb,	// (0x00011e04) bg_button_pane_ParamLimits

0x2ceb,	// (0x00011e04) bg_button_pane

0x25f7,	// (0x00011710) common_borders_pane_copy2_ParamLimits

0x25f7,	// (0x00011710) common_borders_pane_copy2

0x75a3,	// (0x000166bc) control_button_pane_g1_ParamLimits

0x75a3,	// (0x000166bc) control_button_pane_g1

0x75af,	// (0x000166c8) control_button_pane_g2_ParamLimits

0x75af,	// (0x000166c8) control_button_pane_g2

0x75bb,	// (0x000166d4) control_button_pane_g3_ParamLimits

0x75bb,	// (0x000166d4) control_button_pane_g3

0x0002,

0xfbdc,	// (0x0001ecf5) control_button_pane_g_ParamLimits

0xfbdc,	// (0x0001ecf5) control_button_pane_g

0x75cf,	// (0x000166e8) control_button_pane_t1

0x75dd,	// (0x000166f6) control_button_pane_t2

0x0001,

0xfbe3,	// (0x0001ecfc) control_button_pane_t

0x4321,	// (0x0001343a) bg_button_pane_g1

0x4331,	// (0x0001344a) bg_button_pane_g2

0x4329,	// (0x00013442) bg_button_pane_g3

0x4341,	// (0x0001345a) bg_button_pane_g4

0x4339,	// (0x00013452) bg_button_pane_g5

0x4349,	// (0x00013462) bg_button_pane_g6

0x4351,	// (0x0001346a) bg_button_pane_g7

0x4361,	// (0x0001347a) bg_button_pane_g8

0x4359,	// (0x00013472) bg_button_pane_g9

0x0008,

0xf83c,	// (0x0001e955) bg_button_pane_g

0x6a6a,	// (0x00015b83) common_borders_pane_ParamLimits

0x6a6a,	// (0x00015b83) common_borders_pane

0x756f,	// (0x00016688) eswt_control_pane_g1_copy1_ParamLimits

0x756f,	// (0x00016688) eswt_control_pane_g1_copy1

0x757c,	// (0x00016695) eswt_control_pane_g2_copy1_ParamLimits

0x757c,	// (0x00016695) eswt_control_pane_g2_copy1

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy1_ParamLimits

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy1

0x7596,	// (0x000166af) eswt_control_pane_g4_copy1_ParamLimits

0x7596,	// (0x000166af) eswt_control_pane_g4_copy1

0x6aa5,	// (0x00015bbe) bg_eswt_ctrl_canvas_pane_g1

0x6a6a,	// (0x00015b83) common_borders_pane_cp2_ParamLimits

0x6a6a,	// (0x00015b83) common_borders_pane_cp2

0x6a6a,	// (0x00015b83) common_borders_pane_cp3_ParamLimits

0x6a6a,	// (0x00015b83) common_borders_pane_cp3

0x75eb,	// (0x00016704) separator_horizontal_pane

0x32f6,	// (0x0001240f) separator_vertical_pane

0x756f,	// (0x00016688) eswt_control_pane_g1_copy2_ParamLimits

0x756f,	// (0x00016688) eswt_control_pane_g1_copy2

0x757c,	// (0x00016695) eswt_control_pane_g2_copy2_ParamLimits

0x757c,	// (0x00016695) eswt_control_pane_g2_copy2

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy2_ParamLimits

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy2

0x7596,	// (0x000166af) eswt_control_pane_g4_copy2_ParamLimits

0x7596,	// (0x000166af) eswt_control_pane_g4_copy2

0x1e1e,	// (0x00010f37) common_borders_pane_cp4

0x75f3,	// (0x0001670c) separator_horizontal_pane_g1

0x75fc,	// (0x00016715) separator_horizontal_pane_g2

0x7605,	// (0x0001671e) separator_horizontal_pane_g3

0x0002,

0xfbe8,	// (0x0001ed01) separator_horizontal_pane_g

0x756f,	// (0x00016688) eswt_control_pane_g1_copy3_ParamLimits

0x756f,	// (0x00016688) eswt_control_pane_g1_copy3

0x757c,	// (0x00016695) eswt_control_pane_g2_copy3_ParamLimits

0x757c,	// (0x00016695) eswt_control_pane_g2_copy3

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy3_ParamLimits

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy3

0x7596,	// (0x000166af) eswt_control_pane_g4_copy3_ParamLimits

0x7596,	// (0x000166af) eswt_control_pane_g4_copy3

0x1e1e,	// (0x00010f37) common_borders_pane_cp5

0x760e,	// (0x00016727) separator_vertical_pane_g1

0x7617,	// (0x00016730) separator_vertical_pane_g2

0x7620,	// (0x00016739) separator_vertical_pane_g3

0x0002,

0xfbef,	// (0x0001ed08) separator_vertical_pane_g

0x756f,	// (0x00016688) eswt_control_pane_g1_copy4_ParamLimits

0x756f,	// (0x00016688) eswt_control_pane_g1_copy4

0x757c,	// (0x00016695) eswt_control_pane_g2_copy4_ParamLimits

0x757c,	// (0x00016695) eswt_control_pane_g2_copy4

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy4_ParamLimits

0x7589,	// (0x000166a2) eswt_control_pane_g3_copy4

0x7596,	// (0x000166af) eswt_control_pane_g4_copy4_ParamLimits

0x7596,	// (0x000166af) eswt_control_pane_g4_copy4

0x7629,	// (0x00016742) eswt_ctrl_combo_button_pane

0x7631,	// (0x0001674a) eswt_ctrl_input_pane

0x7639,	// (0x00016752) popup_choice_list_window_cp70

0x7641,	// (0x0001675a) eswt_ctrl_input_pane_t1

0x1e1e,	// (0x00010f37) input_focus_pane_cp70

0x6a6a,	// (0x00015b83) bg_button_pane_cp70_ParamLimits

0x6a6a,	// (0x00015b83) bg_button_pane_cp70

0x764f,	// (0x00016768) eswt_ctrl_combo_button_pane_g1

0x7657,	// (0x00016770) wait_bar_pane_cp70

0x4439,	// (0x00013552) bg_popup_window_pane_cp70_ParamLimits

0x4439,	// (0x00013552) bg_popup_window_pane_cp70

0x765f,	// (0x00016778) popup_eswt_tasktip_window_t1

0x7675,	// (0x0001678e) wait_bar_pane_cp71_ParamLimits

0x7675,	// (0x0001678e) wait_bar_pane_cp71

0x7681,	// (0x0001679a) grid_eswt_app_pane

0x32ed,	// (0x00012406) scroll_pane_cp70

0x768a,	// (0x000167a3) cell_eswt_app_pane_ParamLimits

0x768a,	// (0x000167a3) cell_eswt_app_pane

0x76b2,	// (0x000167cb) cell_eswt_app_pane_g1_ParamLimits

0x76b2,	// (0x000167cb) cell_eswt_app_pane_g1

0x76e1,	// (0x000167fa) cell_eswt_app_pane_g2_ParamLimits

0x76e1,	// (0x000167fa) cell_eswt_app_pane_g2

0x0001,

0xfbf6,	// (0x0001ed0f) cell_eswt_app_pane_g_ParamLimits

0xfbf6,	// (0x0001ed0f) cell_eswt_app_pane_g

0x770a,	// (0x00016823) cell_eswt_app_pane_t1_ParamLimits

0x770a,	// (0x00016823) cell_eswt_app_pane_t1

0x773c,	// (0x00016855) grid_highlight_pane_cp70_ParamLimits

0x773c,	// (0x00016855) grid_highlight_pane_cp70

0x279d,	// (0x000118b6) set_content_pane_g1

0x3d70,	// (0x00012e89) status_small_volume_pane

0xe0be,	// (0x0001d1d7) status_small_volume_pane_g1

0xe0c6,	// (0x0001d1df) volume_small2_pane

0xe0cf,	// (0x0001d1e8) volume_small2_pane_g1

0xe0d8,	// (0x0001d1f1) volume_small2_pane_g2

0xe0e1,	// (0x0001d1fa) volume_small2_pane_g3

0xe0ea,	// (0x0001d203) volume_small2_pane_g4

0xe0f3,	// (0x0001d20c) volume_small2_pane_g5

0xe0fc,	// (0x0001d215) volume_small2_pane_g6

0xe105,	// (0x0001d21e) volume_small2_pane_g7

0xe10e,	// (0x0001d227) volume_small2_pane_g8

0xe117,	// (0x0001d230) volume_small2_pane_g9

0xe120,	// (0x0001d239) volume_small2_pane_g10

0x0009,

0xfbfb,	// (0x0001ed14) volume_small2_pane_g

0x6e1f,	// (0x00015f38) fep_vkb_top_text_pane_g1_ParamLimits

0x6e3a,	// (0x00015f53) fep_vkb_top_text_pane_t1_ParamLimits

0x709e,	// (0x000161b7) popup_preview_fixed_window_g3_ParamLimits

0x709e,	// (0x000161b7) popup_preview_fixed_window_g3

0xd8a1,	// (0x0001c9ba) popup_toolbar_trans_pane

0x56d6,	// (0x000147ef) aid_height_set_list_ParamLimits

0x56e2,	// (0x000147fb) aid_size_parent_ParamLimits

0x3e24,	// (0x00012f3d) list_highlight_pane_cp2_ParamLimits

0x279d,	// (0x000118b6) set_content_pane_g1_ParamLimits

0x5944,	// (0x00014a5d) list_single_image_pane_ParamLimits

0x5944,	// (0x00014a5d) list_single_image_pane

0x7748,	// (0x00016861) aid_size_cell_image_ParamLimits

0x7748,	// (0x00016861) aid_size_cell_image

0x7755,	// (0x0001686e) grid_single_image_pane_ParamLimits

0x7755,	// (0x0001686e) grid_single_image_pane

0x279d,	// (0x000118b6) list_single_image_pane_g1_ParamLimits

0x279d,	// (0x000118b6) list_single_image_pane_g1

0x2d11,	// (0x00011e2a) list_single_image_pane_g2_ParamLimits

0x2d11,	// (0x00011e2a) list_single_image_pane_g2

0x0001,

0xfc10,	// (0x0001ed29) list_single_image_pane_g_ParamLimits

0xfc10,	// (0x0001ed29) list_single_image_pane_g

0x5865,	// (0x0001497e) list_single_image_pane_t1_ParamLimits

0x5865,	// (0x0001497e) list_single_image_pane_t1

0x7761,	// (0x0001687a) cell_image_list_pane_ParamLimits

0x7761,	// (0x0001687a) cell_image_list_pane

0x7774,	// (0x0001688d) cell_image_list_pane_g1

0x777d,	// (0x00016896) cell_image_list_pane_g2

0x0001,

0xfc15,	// (0x0001ed2e) cell_image_list_pane_g

0x7786,	// (0x0001689f) aid_size_cell_tb_trans_pane

0x2ceb,	// (0x00011e04) bg_tb_trans_pane

0x7798,	// (0x000168b1) grid_tb_trans_pane

0x4321,	// (0x0001343a) bg_tb_trans_pane_g1

0x4331,	// (0x0001344a) bg_tb_trans_pane_g2

0x4329,	// (0x00013442) bg_tb_trans_pane_g3

0x4341,	// (0x0001345a) bg_tb_trans_pane_g4

0x4339,	// (0x00013452) bg_tb_trans_pane_g5

0x4361,	// (0x0001347a) bg_tb_trans_pane_g6

0x4359,	// (0x00013472) bg_tb_trans_pane_g7

0x4349,	// (0x00013462) bg_tb_trans_pane_g8

0x4351,	// (0x0001346a) bg_tb_trans_pane_g9

0x0008,

0xfc1a,	// (0x0001ed33) bg_tb_trans_pane_g

0x77ac,	// (0x000168c5) cell_toolbar_trans_pane_ParamLimits

0x77ac,	// (0x000168c5) cell_toolbar_trans_pane

0x6aa5,	// (0x00015bbe) cell_toolbar_trans_pane_g1

0x66ee,	// (0x00015807) list_form2_midp_pane_t1

0x66fc,	// (0x00015815) list_form2_midp_pane_t2

0x0001,

0xfac3,	// (0x0001ebdc) list_form2_midp_pane_t

0x670a,	// (0x00015823) scroll_pane_cp51_ParamLimits

0x68ef,	// (0x00015a08) form2_midp_wait_pane_g1

0x68f8,	// (0x00015a11) form2_midp_wait_pane_g2

0x6901,	// (0x00015a1a) form2_midp_wait_pane_g3

0x0002,

0xfad8,	// (0x0001ebf1) form2_midp_wait_pane_g

0x1fef,	// (0x00011108) list_highlight_pane_cp21_ParamLimits

0x693f,	// (0x00015a58) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x694e,	// (0x00015a67) list_single_midp_graphic_pane_t1_cp_ParamLimits

0xc552,	// (0x0001b66b) list_single_2graphic_im_pane_ParamLimits

0xc552,	// (0x0001b66b) list_single_2graphic_im_pane

0x77d2,	// (0x000168eb) list_single_2graphic_im_pane_g1_ParamLimits

0x77d2,	// (0x000168eb) list_single_2graphic_im_pane_g1

0x77e3,	// (0x000168fc) list_single_2graphic_im_pane_g2_ParamLimits

0x77e3,	// (0x000168fc) list_single_2graphic_im_pane_g2

0x77ef,	// (0x00016908) list_single_2graphic_im_pane_g3_ParamLimits

0x77ef,	// (0x00016908) list_single_2graphic_im_pane_g3

0x0003,

0xfc2d,	// (0x0001ed46) list_single_2graphic_im_pane_g_ParamLimits

0xfc2d,	// (0x0001ed46) list_single_2graphic_im_pane_g

0x780f,	// (0x00016928) list_single_2graphic_im_pane_t1_ParamLimits

0x780f,	// (0x00016928) list_single_2graphic_im_pane_t1

0x70aa,	// (0x000161c3) list_single_graphic_2heading_pane_fp_ParamLimits

0x70aa,	// (0x000161c3) list_single_graphic_2heading_pane_fp

0xc8db,	// (0x0001b9f4) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0xc8db,	// (0x0001b9f4) list_single_graphic_2heading_pane_fp_g1

0x70be,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x70be,	// (0x000161d7) list_single_graphic_2heading_pane_fp_g2

0xc8a4,	// (0x0001b9bd) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xc8a4,	// (0x0001b9bd) list_single_graphic_2heading_pane_fp_g3

0xc8b0,	// (0x0001b9c9) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0xc8b0,	// (0x0001b9c9) list_single_graphic_2heading_pane_fp_g4

0x70ea,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x70ea,	// (0x00016203) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb5b,	// (0x0001ec74) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb5b,	// (0x0001ec74) list_single_graphic_2heading_pane_fp_g

0xcaa8,	// (0x0001bbc1) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0xcaa8,	// (0x0001bbc1) list_single_graphic_2heading_pane_fp_t1

0xc913,	// (0x0001ba2c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0xc913,	// (0x0001ba2c) list_single_graphic_2heading_pane_fp_t2

0xcabe,	// (0x0001bbd7) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0xcabe,	// (0x0001bbd7) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc36,	// (0x0001ed4f) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc36,	// (0x0001ed4f) list_single_graphic_2heading_pane_fp_t

0x6b2e,	// (0x00015c47) fep_hwr_write_pane_g5_ParamLimits

0x6b2e,	// (0x00015c47) fep_hwr_write_pane_g5

0x6b3a,	// (0x00015c53) fep_hwr_write_pane_g6_ParamLimits

0x6b3a,	// (0x00015c53) fep_hwr_write_pane_g6

0x7542,	// (0x0001665b) eswt_shell_pane_ParamLimits

0x4439,	// (0x00013552) bg_popup_window_pane_cp18_ParamLimits

0x5648,	// (0x00014761) heading_pane_cp70

0x765f,	// (0x00016778) popup_eswt_tasktip_window_t1_ParamLimits

0x3e90,	// (0x00012fa9) aid_touch_tab_arrow_left

0x3e9c,	// (0x00012fb5) aid_touch_tab_arrow_right

0x1f37,	// (0x00011050) title_pane_g3_ParamLimits

0x1f37,	// (0x00011050) title_pane_g3

0x2be9,	// (0x00011d02) set_value_pane_g1

0xd8a1,	// (0x0001c9ba) popup_toolbar_trans_pane_ParamLimits

0x7786,	// (0x0001689f) aid_size_cell_tb_trans_pane_ParamLimits

0x2ceb,	// (0x00011e04) bg_tb_trans_pane_ParamLimits

0x7798,	// (0x000168b1) grid_tb_trans_pane_ParamLimits

0x2297,	// (0x000113b0) cont_note_pane_ParamLimits

0x2297,	// (0x000113b0) cont_note_pane

0x25f7,	// (0x00011710) cont_snote2_single_text_pane_ParamLimits

0x25f7,	// (0x00011710) cont_snote2_single_text_pane

0x25f7,	// (0x00011710) cont_snote2_single_graphic_pane_ParamLimits

0x25f7,	// (0x00011710) cont_snote2_single_graphic_pane

0x4a05,	// (0x00013b1e) cont_note_wait_pane_ParamLimits

0x4a05,	// (0x00013b1e) cont_note_wait_pane

0x4a05,	// (0x00013b1e) cont_note_image_pane_ParamLimits

0x4a05,	// (0x00013b1e) cont_note_image_pane

0x786c,	// (0x00016985) popup_note2_window_g1_ParamLimits

0x786c,	// (0x00016985) popup_note2_window_g1

0x789d,	// (0x000169b6) popup_note2_window_t1_ParamLimits

0x789d,	// (0x000169b6) popup_note2_window_t1

0x78e2,	// (0x000169fb) popup_note2_window_t2_ParamLimits

0x78e2,	// (0x000169fb) popup_note2_window_t2

0x7927,	// (0x00016a40) popup_note2_window_t3_ParamLimits

0x7927,	// (0x00016a40) popup_note2_window_t3

0x796c,	// (0x00016a85) popup_note2_window_t4_ParamLimits

0x796c,	// (0x00016a85) popup_note2_window_t4

0x231b,	// (0x00011434) popup_note2_window_t5_ParamLimits

0x231b,	// (0x00011434) popup_note2_window_t5

0x0004,

0xfc42,	// (0x0001ed5b) popup_note2_window_t_ParamLimits

0xfc42,	// (0x0001ed5b) popup_note2_window_t

0x799b,	// (0x00016ab4) popup_note2_image_window_g1_ParamLimits

0x799b,	// (0x00016ab4) popup_note2_image_window_g1

0x79a7,	// (0x00016ac0) popup_note2_image_window_g2_ParamLimits

0x79a7,	// (0x00016ac0) popup_note2_image_window_g2

0x0001,

0xfc4d,	// (0x0001ed66) popup_note2_image_window_g_ParamLimits

0xfc4d,	// (0x0001ed66) popup_note2_image_window_g

0x79b9,	// (0x00016ad2) popup_note2_image_window_t1_ParamLimits

0x79b9,	// (0x00016ad2) popup_note2_image_window_t1

0x79d1,	// (0x00016aea) popup_note2_image_window_t2_ParamLimits

0x79d1,	// (0x00016aea) popup_note2_image_window_t2

0x79e9,	// (0x00016b02) popup_note2_image_window_t3_ParamLimits

0x79e9,	// (0x00016b02) popup_note2_image_window_t3

0x0002,

0xfc52,	// (0x0001ed6b) popup_note2_image_window_t_ParamLimits

0xfc52,	// (0x0001ed6b) popup_note2_image_window_t

0x4a13,	// (0x00013b2c) popup_note2_wait_window_g1_ParamLimits

0x4a13,	// (0x00013b2c) popup_note2_wait_window_g1

0x4a1f,	// (0x00013b38) popup_note2_wait_window_g2_ParamLimits

0x4a1f,	// (0x00013b38) popup_note2_wait_window_g2

0x4a2b,	// (0x00013b44) popup_note2_wait_window_g3_ParamLimits

0x4a2b,	// (0x00013b44) popup_note2_wait_window_g3

0x0002,

0xf81e,	// (0x0001e937) popup_note2_wait_window_g_ParamLimits

0xf81e,	// (0x0001e937) popup_note2_wait_window_g

0x7a05,	// (0x00016b1e) popup_note2_wait_window_t1_ParamLimits

0x7a05,	// (0x00016b1e) popup_note2_wait_window_t1

0x7a23,	// (0x00016b3c) popup_note2_wait_window_t2_ParamLimits

0x7a23,	// (0x00016b3c) popup_note2_wait_window_t2

0x7a41,	// (0x00016b5a) popup_note2_wait_window_t3_ParamLimits

0x7a41,	// (0x00016b5a) popup_note2_wait_window_t3

0x7a53,	// (0x00016b6c) popup_note2_wait_window_t4_ParamLimits

0x7a53,	// (0x00016b6c) popup_note2_wait_window_t4

0x0003,

0xfc59,	// (0x0001ed72) popup_note2_wait_window_t_ParamLimits

0xfc59,	// (0x0001ed72) popup_note2_wait_window_t

0x7a65,	// (0x00016b7e) wait_bar2_pane_ParamLimits

0x7a65,	// (0x00016b7e) wait_bar2_pane

0x7a7d,	// (0x00016b96) popup_snote2_single_text_window_g1_ParamLimits

0x7a7d,	// (0x00016b96) popup_snote2_single_text_window_g1

0x7aa5,	// (0x00016bbe) popup_snote2_single_text_window_t1_ParamLimits

0x7aa5,	// (0x00016bbe) popup_snote2_single_text_window_t1

0x7af1,	// (0x00016c0a) popup_snote2_single_text_window_t2_ParamLimits

0x7af1,	// (0x00016c0a) popup_snote2_single_text_window_t2

0x7b3d,	// (0x00016c56) popup_snote2_single_text_window_t3_ParamLimits

0x7b3d,	// (0x00016c56) popup_snote2_single_text_window_t3

0x7b7e,	// (0x00016c97) popup_snote2_single_text_window_t4_ParamLimits

0x7b7e,	// (0x00016c97) popup_snote2_single_text_window_t4

0x7bb4,	// (0x00016ccd) popup_snote2_single_text_window_t5_ParamLimits

0x7bb4,	// (0x00016ccd) popup_snote2_single_text_window_t5

0x0004,

0xfc62,	// (0x0001ed7b) popup_snote2_single_text_window_t_ParamLimits

0xfc62,	// (0x0001ed7b) popup_snote2_single_text_window_t

0x7bdf,	// (0x00016cf8) popup_snote2_single_graphic_window_g1_ParamLimits

0x7bdf,	// (0x00016cf8) popup_snote2_single_graphic_window_g1

0x7c07,	// (0x00016d20) popup_snote2_single_graphic_window_g2_ParamLimits

0x7c07,	// (0x00016d20) popup_snote2_single_graphic_window_g2

0x0001,

0xfc6d,	// (0x0001ed86) popup_snote2_single_graphic_window_g_ParamLimits

0xfc6d,	// (0x0001ed86) popup_snote2_single_graphic_window_g

0x7c2f,	// (0x00016d48) popup_snote2_single_graphic_window_t1_ParamLimits

0x7c2f,	// (0x00016d48) popup_snote2_single_graphic_window_t1

0x7c7b,	// (0x00016d94) popup_snote2_single_graphic_window_t2_ParamLimits

0x7c7b,	// (0x00016d94) popup_snote2_single_graphic_window_t2

0x7b3d,	// (0x00016c56) popup_snote2_single_graphic_window_t3_ParamLimits

0x7b3d,	// (0x00016c56) popup_snote2_single_graphic_window_t3

0x7b7e,	// (0x00016c97) popup_snote2_single_graphic_window_t4_ParamLimits

0x7b7e,	// (0x00016c97) popup_snote2_single_graphic_window_t4

0x7bb4,	// (0x00016ccd) popup_snote2_single_graphic_window_t5_ParamLimits

0x7bb4,	// (0x00016ccd) popup_snote2_single_graphic_window_t5

0x0004,

0xfc72,	// (0x0001ed8b) popup_snote2_single_graphic_window_t_ParamLimits

0xfc72,	// (0x0001ed8b) popup_snote2_single_graphic_window_t

0x65e0,	// (0x000156f9) clock_nsta_pane_cp2_t1

0x65e0,	// (0x000156f9) clock_nsta_pane_cp2_t2

0x0001,

0xfa99,	// (0x0001ebb2) clock_nsta_pane_cp2_t

0xc199,	// (0x0001b2b2) form_field_data_wide_pane_g1_ParamLimits

0x279d,	// (0x000118b6) form_field_data_wide_pane_g2_ParamLimits

0x279d,	// (0x000118b6) form_field_data_wide_pane_g2

0x2d11,	// (0x00011e2a) form_field_data_wide_pane_g3_ParamLimits

0x2d11,	// (0x00011e2a) form_field_data_wide_pane_g3

0x0002,

0xf656,	// (0x0001e76f) form_field_data_wide_pane_g_ParamLimits

0xf656,	// (0x0001e76f) form_field_data_wide_pane_g

0x64b5,	// (0x000155ce) grid_touch_3_pane_ParamLimits

0x64b5,	// (0x000155ce) grid_touch_3_pane

0x7cc7,	// (0x00016de0) cell_touch_3_pane_ParamLimits

0x7cc7,	// (0x00016de0) cell_touch_3_pane

0x6aa5,	// (0x00015bbe) cell_touch_3_pane_g1

0x6aa5,	// (0x00015bbe) cell_touch_3_pane_g2

0x0001,

0xfb1e,	// (0x0001ec37) cell_touch_3_pane_g

0x2373,	// (0x0001148c) cont_query_data_pane

0x237b,	// (0x00011494) cont_query_data_pane_cp1

0x7cf4,	// (0x00016e0d) button_value_adjust_pane_cp7

0x7cfc,	// (0x00016e15) query_popup_pane_cp3

0x3591,	// (0x000126aa) bg_popup_sub_pane_cp22_ParamLimits

0xd123,	// (0x0001c23c) navi_navi_volume_pane_cp2

0xd13b,	// (0x0001c254) popup_side_volume_key_window_g2

0xd147,	// (0x0001c260) popup_side_volume_key_window_g3

0x0002,

0xf6ec,	// (0x0001e805) popup_side_volume_key_window_g

0xd161,	// (0x0001c27a) popup_side_volume_key_window_t2

0x0001,

0xf6f3,	// (0x0001e80c) popup_side_volume_key_window_t

0x38c4,	// (0x000129dd) popup_side_volume_key_window_ParamLimits

0xbdfd,	// (0x0001af16) list_double_graphic_pane_g4_ParamLimits

0xbdfd,	// (0x0001af16) list_double_graphic_pane_g4

0x5918,	// (0x00014a31) list_single_2heading_msg_pane_ParamLimits

0x5918,	// (0x00014a31) list_single_2heading_msg_pane

0xcadc,	// (0x0001bbf5) list_single_2heading_msg_pane_g1_ParamLimits

0xcadc,	// (0x0001bbf5) list_single_2heading_msg_pane_g1

0xbc48,	// (0x0001ad61) list_single_2heading_msg_pane_g2_ParamLimits

0xbc48,	// (0x0001ad61) list_single_2heading_msg_pane_g2

0xc64a,	// (0x0001b763) list_single_2heading_msg_pane_g3_ParamLimits

0xc64a,	// (0x0001b763) list_single_2heading_msg_pane_g3

0xcae8,	// (0x0001bc01) list_single_2heading_msg_pane_g4_ParamLimits

0xcae8,	// (0x0001bc01) list_single_2heading_msg_pane_g4

0x0003,

0xfc7d,	// (0x0001ed96) list_single_2heading_msg_pane_g_ParamLimits

0xfc7d,	// (0x0001ed96) list_single_2heading_msg_pane_g

0xcb00,	// (0x0001bc19) list_single_2heading_msg_pane_t1_ParamLimits

0xcb00,	// (0x0001bc19) list_single_2heading_msg_pane_t1

0xcb28,	// (0x0001bc41) list_single_2heading_msg_pane_t2_ParamLimits

0xcb28,	// (0x0001bc41) list_single_2heading_msg_pane_t2

0xcb5c,	// (0x0001bc75) list_single_2heading_msg_pane_t3_ParamLimits

0xcb5c,	// (0x0001bc75) list_single_2heading_msg_pane_t3

0xcb95,	// (0x0001bcae) list_single_2heading_msg_pane_t4_ParamLimits

0xcb95,	// (0x0001bcae) list_single_2heading_msg_pane_t4

0x0003,

0xfc86,	// (0x0001ed9f) list_single_2heading_msg_pane_t_ParamLimits

0xfc86,	// (0x0001ed9f) list_single_2heading_msg_pane_t

0x1f43,	// (0x0001105c) title_pane_g4_ParamLimits

0x1f43,	// (0x0001105c) title_pane_g4

0xcf73,	// (0x0001c08c) title_pane_stacon_g3_ParamLimits

0xcf73,	// (0x0001c08c) title_pane_stacon_g3

0x7803,	// (0x0001691c) list_single_2graphic_im_pane_g4_ParamLimits

0x7803,	// (0x0001691c) list_single_2graphic_im_pane_g4

0x540f,	// (0x00014528) popup_side_volume_key_window_cp

0x5be0,	// (0x00014cf9) main_idle_act2_pane_t1

0xd96c,	// (0x0001ca85) toolbar_button_pane_g10

0x2754,	// (0x0001186d) popup_toolbar_window_cp1

0x65d1,	// (0x000156ea) clock_nsta_pane_cp_t1

0x65d1,	// (0x000156ea) clock_nsta_pane_cp_t2

0x0001,

0xfa94,	// (0x0001ebad) clock_nsta_pane_cp_t

0xd123,	// (0x0001c23c) navi_navi_volume_pane_cp2_ParamLimits

0xd12f,	// (0x0001c248) popup_side_volume_key_window_g1_ParamLimits

0xd13b,	// (0x0001c254) popup_side_volume_key_window_g2_ParamLimits

0xd147,	// (0x0001c260) popup_side_volume_key_window_g3_ParamLimits

0xf6ec,	// (0x0001e805) popup_side_volume_key_window_g_ParamLimits

0xdde2,	// (0x0001cefb) fep_hwr_aid_pane

0xa5cb,	// (0x000196e4) bg_fep_hwr_top_pane_g4_ParamLimits

0x6b10,	// (0x00015c29) fep_hwr_top_pane_g1_ParamLimits

0x6afe,	// (0x00015c17) fep_hwr_top_pane_g2_ParamLimits

0xde95,	// (0x0001cfae) fep_hwr_top_pane_g3_ParamLimits

0xfae9,	// (0x0001ec02) fep_hwr_top_pane_g_ParamLimits

0xdeaa,	// (0x0001cfc3) fep_hwr_top_text_pane_ParamLimits

0x51e3,	// (0x000142fc) aid_touch_tab_arrow_arrow_2

0x51da,	// (0x000142f3) aid_touch_tab_arrow_left_2

0xddf6,	// (0x0001cf0f) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xde29,	// (0x0001cf42) fep_hwr_prediction_pane

0x6c4f,	// (0x00015d68) fep_vkb_prediction_pane

0x6d31,	// (0x00015e4a) fep_vkb_side_pane_g3_ParamLimits

0x6d31,	// (0x00015e4a) fep_vkb_side_pane_g3

0x6cdd,	// (0x00015df6) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7348,	// (0x00016461) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7355,	// (0x0001646e) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb93,	// (0x0001ecac) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x7e1a,	// (0x00016f33) fep_hwr_prediction_pane_g1

0xe129,	// (0x0001d242) fep_hwr_prediction_pane_g2

0xe131,	// (0x0001d24a) fep_hwr_prediction_pane_g3

0xe139,	// (0x0001d252) fep_hwr_prediction_pane_g4

0x0003,

0xfc8f,	// (0x0001eda8) fep_hwr_prediction_pane_g

0x7e1a,	// (0x00016f33) fep_vkb_prediction_pane_g1

0x7e24,	// (0x00016f3d) fep_vkb_prediction_pane_g2

0x7e2c,	// (0x00016f45) fep_vkb_prediction_pane_g3

0x7e34,	// (0x00016f4d) fep_vkb_prediction_pane_g4

0x0003,

0xfc98,	// (0x0001edb1) fep_vkb_prediction_pane_g

0xdc1a,	// (0x0001cd33) slider_set_pane_g3

0xdc2e,	// (0x0001cd47) slider_set_pane_g4

0xdc46,	// (0x0001cd5f) slider_set_pane_g5

0xdc1a,	// (0x0001cd33) slider_set_pane_g6

0xdc5c,	// (0x0001cd75) slider_set_pane_g7

0x5829,	// (0x00014942) slider_form_pane_g3

0x5832,	// (0x0001494b) slider_form_pane_g4

0x583a,	// (0x00014953) slider_form_pane_g5

0x5829,	// (0x00014942) slider_form_pane_g6

0x5842,	// (0x0001495b) slider_form_pane_g7

0x5ec8,	// (0x00014fe1) slider_set_pane_vc_g3

0x5ed1,	// (0x00014fea) slider_set_pane_vc_g4

0x5eda,	// (0x00014ff3) slider_set_pane_vc_g5

0x5ec8,	// (0x00014fe1) slider_set_pane_vc_g6

0x5ee3,	// (0x00014ffc) slider_set_pane_vc_g7

0x5ec8,	// (0x00014fe1) slider_form_pane_vc_g1

0x5ed1,	// (0x00014fea) slider_form_pane_vc_g2

0x5eda,	// (0x00014ff3) slider_form_pane_vc_g3

0x5ec8,	// (0x00014fe1) slider_form_pane_vc_g4

0x62b5,	// (0x000153ce) slider_form_pane_vc_g5

0x0004,

0xfa66,	// (0x0001eb7f) slider_form_pane_vc_g

0x1e1e,	// (0x00010f37) main_idle_act3_pane

0x7e3c,	// (0x00016f55) ai3_links_pane

0x7e45,	// (0x00016f5e) popup_ai3_data_window_ParamLimits

0x7e45,	// (0x00016f5e) popup_ai3_data_window

0x1e1e,	// (0x00010f37) grid_ai3_links_pane

0x7e5d,	// (0x00016f76) cell_ai3_links_pane_ParamLimits

0x7e5d,	// (0x00016f76) cell_ai3_links_pane

0x7e71,	// (0x00016f8a) bg_popup_sub_pane_cp11

0x7e7e,	// (0x00016f97) cell_ai3_links_pane_g1

0x1e1e,	// (0x00010f37) bg_popup_sub_pane_cp12

0x7ea3,	// (0x00016fbc) heading_ai3_data_pane

0x7eab,	// (0x00016fc4) list_ai3_gene_pane

0x7eb7,	// (0x00016fd0) popup_ai3_data_window_g1

0x7ebf,	// (0x00016fd8) heading_ai3_data_pane_g1

0x7ec7,	// (0x00016fe0) heading_ai3_data_pane_t1

0x7ed5,	// (0x00016fee) list_double_ai3_gene_pane_ParamLimits

0x7ed5,	// (0x00016fee) list_double_ai3_gene_pane

0x7ee2,	// (0x00016ffb) list_single_ai3_gene_pane_ParamLimits

0x7ee2,	// (0x00016ffb) list_single_ai3_gene_pane

0x6a6a,	// (0x00015b83) list_highlight_pane_cp7_ParamLimits

0x6a6a,	// (0x00015b83) list_highlight_pane_cp7

0x7eef,	// (0x00017008) list_single_a13_gene_pane_t1_ParamLimits

0x7eef,	// (0x00017008) list_single_a13_gene_pane_t1

0x7f06,	// (0x0001701f) list_single_ai3_gene_pane_g1

0x7f0f,	// (0x00017028) list_single_ai3_gene_pane_g2

0x0001,

0xfca1,	// (0x0001edba) list_single_ai3_gene_pane_g

0x7f17,	// (0x00017030) list_double_ai3_gene_pane_g1_ParamLimits

0x7f17,	// (0x00017030) list_double_ai3_gene_pane_g1

0x7f23,	// (0x0001703c) list_double_ai3_gene_pane_t1_ParamLimits

0x7f23,	// (0x0001703c) list_double_ai3_gene_pane_t1

0x7f3f,	// (0x00017058) list_double_ai3_gene_pane_t2_ParamLimits

0x7f3f,	// (0x00017058) list_double_ai3_gene_pane_t2

0x7f54,	// (0x0001706d) list_double_ai3_gene_pane_t3_ParamLimits

0x7f54,	// (0x0001706d) list_double_ai3_gene_pane_t3

0x0002,

0xfca6,	// (0x0001edbf) list_double_ai3_gene_pane_t_ParamLimits

0xfca6,	// (0x0001edbf) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xcad4,	// (0x0001bbed) aid_size_min_col_2

0x7d15,	// (0x00016e2e) aid_size_min_msg_ParamLimits

0x7d15,	// (0x00016e2e) aid_size_min_msg

0x6e2b,	// (0x00015f44) fep_vkb_top_text_pane_g2_ParamLimits

0x6e2b,	// (0x00015f44) fep_vkb_top_text_pane_g2

0x0001,

0xfb19,	// (0x0001ec32) fep_vkb_top_text_pane_g_ParamLimits

0xfb19,	// (0x0001ec32) fep_vkb_top_text_pane_g

0x1e1e,	// (0x00010f37) main_hc_apps_shell_pane

0x7f71,	// (0x0001708a) grid_hc_apps_pane_ParamLimits

0x7f71,	// (0x0001708a) grid_hc_apps_pane

0x7f83,	// (0x0001709c) list_hc_apps_pane

0x7f8b,	// (0x000170a4) scroll_pane_cp37_ParamLimits

0x7f8b,	// (0x000170a4) scroll_pane_cp37

0x7f97,	// (0x000170b0) cell_hc_apps_pane_ParamLimits

0x7f97,	// (0x000170b0) cell_hc_apps_pane

0x8025,	// (0x0001713e) cell_hc_apps_pane_g1_ParamLimits

0x8025,	// (0x0001713e) cell_hc_apps_pane_g1

0x8051,	// (0x0001716a) cell_hc_apps_pane_g2_ParamLimits

0x8051,	// (0x0001716a) cell_hc_apps_pane_g2

0x806d,	// (0x00017186) cell_hc_apps_pane_g3_ParamLimits

0x806d,	// (0x00017186) cell_hc_apps_pane_g3

0x0002,

0xfcad,	// (0x0001edc6) cell_hc_apps_pane_g_ParamLimits

0xfcad,	// (0x0001edc6) cell_hc_apps_pane_g

0x808f,	// (0x000171a8) cell_hc_apps_pane_t1_ParamLimits

0x808f,	// (0x000171a8) cell_hc_apps_pane_t1

0x2297,	// (0x000113b0) grid_highlight_pane_cp10_ParamLimits

0x2297,	// (0x000113b0) grid_highlight_pane_cp10

0x80cd,	// (0x000171e6) list_single_hc_apps_pane_ParamLimits

0x80cd,	// (0x000171e6) list_single_hc_apps_pane

0x80fd,	// (0x00017216) list_single_hc_apps_pane_g1

0xcbba,	// (0x0001bcd3) list_single_hc_apps_pane_g2

0x0001,

0xfcb4,	// (0x0001edcd) list_single_hc_apps_pane_g

0xcbd3,	// (0x0001bcec) list_single_hc_apps_pane_g2_copy1

0xcbef,	// (0x0001bd08) list_single_hc_apps_pane_t1

0x1fef,	// (0x00011108) bg_set_opt_pane_cp_ParamLimits

0xcec1,	// (0x0001bfda) setting_slider_pane_t1_ParamLimits

0xced7,	// (0x0001bff0) setting_slider_pane_t2_ParamLimits

0xcef0,	// (0x0001c009) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001e652) setting_slider_pane_t_ParamLimits

0xcf07,	// (0x0001c020) slider_set_pane_ParamLimits

0xd3a3,	// (0x0001c4bc) control_pane_g5_ParamLimits

0xd3a3,	// (0x0001c4bc) control_pane_g5

0x56a1,	// (0x000147ba) slider_set_pane_g1_ParamLimits

0xdc0e,	// (0x0001cd27) slider_set_pane_g2_ParamLimits

0xdc1a,	// (0x0001cd33) slider_set_pane_g3_ParamLimits

0xdc2e,	// (0x0001cd47) slider_set_pane_g4_ParamLimits

0xdc46,	// (0x0001cd5f) slider_set_pane_g5_ParamLimits

0xdc1a,	// (0x0001cd33) slider_set_pane_g6_ParamLimits

0xdc5c,	// (0x0001cd75) slider_set_pane_g7_ParamLimits

0xf93a,	// (0x0001ea53) slider_set_pane_g_ParamLimits

0x1fef,	// (0x00011108) navi_icon_text_pane_ParamLimits

0x3e5e,	// (0x00012f77) aid_fill_nsta_2_ParamLimits

0x3e90,	// (0x00012fa9) aid_touch_tab_arrow_left_ParamLimits

0x3e9c,	// (0x00012fb5) aid_touch_tab_arrow_right_ParamLimits

0x3f06,	// (0x0001301f) clock_nsta_pane_ParamLimits

0x51bc,	// (0x000142d5) navi_icon_pane_g1_ParamLimits

0x51c8,	// (0x000142e1) navi_text_pane_t1_ParamLimits

0x66c8,	// (0x000157e1) navi_icon_text_pane_g1_ParamLimits

0x66d4,	// (0x000157ed) navi_icon_text_pane_t1_ParamLimits

0x80fd,	// (0x00017216) list_single_hc_apps_pane_g1_ParamLimits

0xcbba,	// (0x0001bcd3) list_single_hc_apps_pane_g2_ParamLimits

0xfcb4,	// (0x0001edcd) list_single_hc_apps_pane_g_ParamLimits

0xcbd3,	// (0x0001bcec) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xcbef,	// (0x0001bd08) list_single_hc_apps_pane_t1_ParamLimits

0xcdf3,	// (0x0001bf0c) popup_toolbar2_fixed_window_ParamLimits

0xcdf3,	// (0x0001bf0c) popup_toolbar2_fixed_window

0xd899,	// (0x0001c9b2) popup_toolbar2_float_window

0x1e1e,	// (0x00010f37) bg_popup_sub_pane_cp27

0x8179,	// (0x00017292) grid_toolbar2_float_pane

0x1e1e,	// (0x00010f37) bg_popup_sub_pane_cp26

0x8179,	// (0x00017292) grid_toolbar2_fixed_pane

0x8181,	// (0x0001729a) cell_toolbar2_fixed_pane_ParamLimits

0x8181,	// (0x0001729a) cell_toolbar2_fixed_pane

0x8192,	// (0x000172ab) cell_toolbar2_fixed_pane_g1

0x819b,	// (0x000172b4) toolbar2_fixed_button_pane

0x4321,	// (0x0001343a) toolbar2_fixed_button_pane_g1

0x4331,	// (0x0001344a) toolbar2_fixed_button_pane_g2

0x4329,	// (0x00013442) toolbar2_fixed_button_pane_g3

0x4341,	// (0x0001345a) toolbar2_fixed_button_pane_g4

0x4339,	// (0x00013452) toolbar2_fixed_button_pane_g5

0x4349,	// (0x00013462) toolbar2_fixed_button_pane_g6

0x4351,	// (0x0001346a) toolbar2_fixed_button_pane_g7

0x4361,	// (0x0001347a) toolbar2_fixed_button_pane_g8

0x4359,	// (0x00013472) toolbar2_fixed_button_pane_g9

0x0008,

0xf83c,	// (0x0001e955) toolbar2_fixed_button_pane_g

0x81a3,	// (0x000172bc) cell_toolbar2_float_pane_ParamLimits

0x81a3,	// (0x000172bc) cell_toolbar2_float_pane

0x81b4,	// (0x000172cd) cell_toolbar2_float_pane_g1

0x819b,	// (0x000172b4) toolbar2_fixed_button_pane_cp

0x6bbe,	// (0x00015cd7) fep_vkb_accented_list_pane_ParamLimits

0x6bbe,	// (0x00015cd7) fep_vkb_accented_list_pane

0xdfec,	// (0x0001d105) bg_popup_fep_shadow_pane_g9

0x3ad5,	// (0x00012bee) bg_popup_fep_shadow_pane_cp3

0x2fa9,	// (0x000120c2) list_accented_list_pane

0x81bd,	// (0x000172d6) list_single_accented_list_pane_ParamLimits

0x81bd,	// (0x000172d6) list_single_accented_list_pane

0x3ad5,	// (0x00012bee) list_highlight_pane_cp10

0x81ce,	// (0x000172e7) list_single_accented_list_pane_t1

0xd7ff,	// (0x0001c918) popup_slider_window_ParamLimits

0xd7ff,	// (0x0001c918) popup_slider_window

0x7d04,	// (0x00016e1d) aid_indentation_list_msg

0x826e,	// (0x00017387) bg_popup_window_pane_cp19

0x82d2,	// (0x000173eb) popup_slider_window_g1

0x82ee,	// (0x00017407) popup_slider_window_g2

0x830a,	// (0x00017423) popup_slider_window_g3

0x0005,

0xfcb9,	// (0x0001edd2) popup_slider_window_g

0x8366,	// (0x0001747f) popup_slider_window_t1

0x83d8,	// (0x000174f1) small_volume_slider_vertical_pane

0x6aa5,	// (0x00015bbe) small_volume_slider_vertical_pane_g1

0x6aa5,	// (0x00015bbe) small_volume_slider_vertical_pane_g2

0x83f4,	// (0x0001750d) small_volume_slider_vertical_pane_g3

0x0002,

0xfccb,	// (0x0001ede4) small_volume_slider_vertical_pane_g

0xcc71,	// (0x0001bd8a) area_side_right_pane_ParamLimits

0xcc71,	// (0x0001bd8a) area_side_right_pane

0xe141,	// (0x0001d25a) aid_size_side_button_ParamLimits

0xe141,	// (0x0001d25a) aid_size_side_button

0xe155,	// (0x0001d26e) grid_sctrl_middle_pane_ParamLimits

0xe155,	// (0x0001d26e) grid_sctrl_middle_pane

0xe171,	// (0x0001d28a) sctrl_sk_bottom_pane

0xe182,	// (0x0001d29b) sctrl_sk_top_pane

0xe194,	// (0x0001d2ad) aid_touch_sctrl_top

0x2297,	// (0x000113b0) bg_sctrl_sk_pane_ParamLimits

0x2297,	// (0x000113b0) bg_sctrl_sk_pane

0xe1a1,	// (0x0001d2ba) sctrl_sk_top_pane_g1

0xe1ae,	// (0x0001d2c7) sctrl_sk_top_pane_t1

0xe194,	// (0x0001d2ad) aid_touch_sctrl_bottom

0x2297,	// (0x000113b0) bg_sctrl_sk_pane_cp_ParamLimits

0x2297,	// (0x000113b0) bg_sctrl_sk_pane_cp

0xe1c9,	// (0x0001d2e2) sctrl_sk_bottom_pane_g1

0xe1ae,	// (0x0001d2c7) sctrl_sk_bottom_pane_t1

0xe1d2,	// (0x0001d2eb) cell_sctrl_middle_pane_ParamLimits

0xe1d2,	// (0x0001d2eb) cell_sctrl_middle_pane

0xe1ed,	// (0x0001d306) aid_touch_sctrl_middle_ParamLimits

0xe1ed,	// (0x0001d306) aid_touch_sctrl_middle

0x2ceb,	// (0x00011e04) bg_sctrl_middle_pane_ParamLimits

0x2ceb,	// (0x00011e04) bg_sctrl_middle_pane

0x6cdd,	// (0x00015df6) cell_sctrl_middle_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) cell_sctrl_middle_pane_g1

0xe1fe,	// (0x0001d317) cell_sctrl_middle_pane_g2_ParamLimits

0xe1fe,	// (0x0001d317) cell_sctrl_middle_pane_g2

0x0001,

0xfcd7,	// (0x0001edf0) cell_sctrl_middle_pane_g_ParamLimits

0xfcd7,	// (0x0001edf0) cell_sctrl_middle_pane_g

0x4321,	// (0x0001343a) bg_sctrl_middle_pane_g1

0x4331,	// (0x0001344a) bg_sctrl_middle_pane_g2

0x4329,	// (0x00013442) bg_sctrl_middle_pane_g3

0x4341,	// (0x0001345a) bg_sctrl_middle_pane_g4

0x4339,	// (0x00013452) bg_sctrl_middle_pane_g5

0x4349,	// (0x00013462) bg_sctrl_middle_pane_g6

0x4351,	// (0x0001346a) bg_sctrl_middle_pane_g7

0x4361,	// (0x0001347a) bg_sctrl_middle_pane_g8

0x0007,

0xfcdc,	// (0x0001edf5) bg_sctrl_middle_pane_g

0x4359,	// (0x00013472) bg_sctrl_middle_pane_g8_copy1

0x4321,	// (0x0001343a) bg_sctrl_sk_pane_g1

0x4331,	// (0x0001344a) bg_sctrl_sk_pane_g2

0x4329,	// (0x00013442) bg_sctrl_sk_pane_g3

0x0008,

0xf83c,	// (0x0001e955) bg_sctrl_sk_pane_g

0x2719,	// (0x00011832) aid_size_touch_scroll_bar

0x4341,	// (0x0001345a) bg_sctrl_sk_pane_g4

0x4339,	// (0x00013452) bg_sctrl_sk_pane_g5

0x4349,	// (0x00013462) bg_sctrl_sk_pane_g6

0x4351,	// (0x0001346a) bg_sctrl_sk_pane_g7

0x4361,	// (0x0001347a) bg_sctrl_sk_pane_g8

0x4359,	// (0x00013472) bg_sctrl_sk_pane_g9

0xd535,	// (0x0001c64e) popup_fep_china_hwr2_fs_candidate_window

0xd53d,	// (0x0001c656) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xd53d,	// (0x0001c656) popup_fep_china_hwr2_fs_control_window

0x6cdd,	// (0x00015df6) sctrl_sk_top_pane_g2

0x0001,

0xfcd2,	// (0x0001edeb) sctrl_sk_top_pane_g

0x83fd,	// (0x00017516) aid_fep_china_hwr2_fs_cell_ParamLimits

0x83fd,	// (0x00017516) aid_fep_china_hwr2_fs_cell

0x840e,	// (0x00017527) bg_popup_fep_shadow_pane_cp4_ParamLimits

0x840e,	// (0x00017527) bg_popup_fep_shadow_pane_cp4

0x8425,	// (0x0001753e) bg_popup_fep_shadow_pane_cp5_ParamLimits

0x8425,	// (0x0001753e) bg_popup_fep_shadow_pane_cp5

0x8437,	// (0x00017550) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0x8437,	// (0x00017550) popup_fep_china_hwr2_fs_control_bar_grid

0x8447,	// (0x00017560) popup_fep_china_hwr2_fs_control_funtion_grid

0x844f,	// (0x00017568) aid_fep_china_hwr2_fs_candi_cell

0x1e1e,	// (0x00010f37) bg_popup_fep_shadow_pane_cp6

0x8459,	// (0x00017572) popup_fep_china_hwr2_fs_candidate_grid

0x8461,	// (0x0001757a) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0x8461,	// (0x0001757a) cell_fep_china_hwr2_fs_funtion_grid

0x6aa5,	// (0x00015bbe) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8479,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8479,	// (0x00017592) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8487,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8487,	// (0x000175a0) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfced,	// (0x0001ee06) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfced,	// (0x0001ee06) cell_fep_china_hwr2_fs_funtion_grid_g

0x849d,	// (0x000175b6) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0x849d,	// (0x000175b6) cell_fep_china_hwr2_fs_funtion_grid_t1

0x84b2,	// (0x000175cb) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0x84b2,	// (0x000175cb) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfcf2,	// (0x0001ee0b) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfcf2,	// (0x0001ee0b) cell_fep_china_hwr2_fs_funtion_grid_t

0x84ce,	// (0x000175e7) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x84d6,	// (0x000175ef) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x84de,	// (0x000175f7) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfcf7,	// (0x0001ee10) popup_fep_china_hwr2_fs_control_bar_grid_g

0x84e6,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x84e6,	// (0x000175ff) cell_fep_china_hwr2_fs_candidate_grid

0x84ff,	// (0x00017618) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8507,	// (0x00017620) popup_fep_china_hwr2_fs_candidate_grid_g21

0x6aa5,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g1

0x6aa5,	// (0x00015bbe) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb1e,	// (0x0001ec37) cell_fep_china_hwr2_fs_candidate_grid_g

0x850f,	// (0x00017628) cell_fep_china_hwr2_fs_candidate_grid_t1

0x3f19,	// (0x00013032) clock_nsta_pane_cp_24_ParamLimits

0x3f19,	// (0x00013032) clock_nsta_pane_cp_24

0x3f8c,	// (0x000130a5) indicator_nsta_pane_cp_24_ParamLimits

0x3f8c,	// (0x000130a5) indicator_nsta_pane_cp_24

0x5039,	// (0x00014152) heading_pane_g1

0x0001,

0xf8a1,	// (0x0001e9ba) heading_pane_g

0x5a82,	// (0x00014b9b) grid_sct_catagory_button_pane

0x5ab2,	// (0x00014bcb) scroll_pane_cp5_ParamLimits

0x6716,	// (0x0001582f) button_value_adjust_pane_cp5_ParamLimits

0x6716,	// (0x0001582f) button_value_adjust_pane_cp5

0x680c,	// (0x00015925) form2_midp_time_pane_ParamLimits

0x851d,	// (0x00017636) cell_sct_catagory_button_pane_ParamLimits

0x851d,	// (0x00017636) cell_sct_catagory_button_pane

0x6a6a,	// (0x00015b83) bg_button_pane_cp01_ParamLimits

0x6a6a,	// (0x00015b83) bg_button_pane_cp01

0x6aa5,	// (0x00015bbe) cell_sct_catagory_button_pane_g1

0xd836,	// (0x0001c94f) popup_tb_extension_window

0x852f,	// (0x00017648) aid_size_cell_ext_ParamLimits

0x852f,	// (0x00017648) aid_size_cell_ext

0x2297,	// (0x000113b0) bg_tb_trans_pane_cp1_ParamLimits

0x2297,	// (0x000113b0) bg_tb_trans_pane_cp1

0x854f,	// (0x00017668) grid_tb_ext_pane_ParamLimits

0x854f,	// (0x00017668) grid_tb_ext_pane

0x8575,	// (0x0001768e) cell_tb_ext_pane_ParamLimits

0x8575,	// (0x0001768e) cell_tb_ext_pane

0x858a,	// (0x000176a3) cell_tb_ext_pane_g1_ParamLimits

0x858a,	// (0x000176a3) cell_tb_ext_pane_g1

0x85a7,	// (0x000176c0) cell_tb_ext_pane_t1

0x2297,	// (0x000113b0) list_highlight_pane_cp11_ParamLimits

0x2297,	// (0x000113b0) list_highlight_pane_cp11

0xce12,	// (0x0001bf2b) popup_uni_indicator_window_ParamLimits

0xce12,	// (0x0001bf2b) popup_uni_indicator_window

0x2ceb,	// (0x00011e04) bg_popup_sub_pane_cp14

0x85c2,	// (0x000176db) list_uniindi_pane

0x85ce,	// (0x000176e7) uniindi_top_pane

0x2297,	// (0x000113b0) bg_uniindi_top_pane

0x85ed,	// (0x00017706) uniindi_top_pane_g1

0x8603,	// (0x0001771c) uniindi_top_pane_g2

0x0003,

0xfcfe,	// (0x0001ee17) uniindi_top_pane_g

0x862d,	// (0x00017746) uniindi_top_pane_t1

0x8657,	// (0x00017770) list_single_uniindi_pane_ParamLimits

0x8657,	// (0x00017770) list_single_uniindi_pane

0x6aa5,	// (0x00015bbe) bg_uniindi_top_pane_g1

0x8669,	// (0x00017782) list_single_uniindi_pane_g1

0x867c,	// (0x00017795) list_single_uniindi_pane_t1

0x1e1e,	// (0x00010f37) control_bg_pane

0x86a1,	// (0x000177ba) bg_sctrl_sk_pane_cp1

0x86aa,	// (0x000177c3) bg_sctrl_sk_pane_cp2

0x86b3,	// (0x000177cc) control_bg_pane_g1

0x86bc,	// (0x000177d5) control_bg_pane_g2

0x0001,

0xfd07,	// (0x0001ee20) control_bg_pane_g

0x6569,	// (0x00015682) cell_indicator_nsta_pane_g1_ParamLimits

0x6577,	// (0x00015690) cell_indicator_nsta_pane_g2_ParamLimits

0xfa82,	// (0x0001eb9b) cell_indicator_nsta_pane_g_ParamLimits

0xc891,	// (0x0001b9aa) form2_midp_time_pane_t1_ParamLimits

0x25f7,	// (0x00011710) main_idle_act4_pane_ParamLimits

0x25f7,	// (0x00011710) main_idle_act4_pane

0xd836,	// (0x0001c94f) popup_tb_extension_window_ParamLimits

0x8569,	// (0x00017682) tb_ext_find_pane_ParamLimits

0x8569,	// (0x00017682) tb_ext_find_pane

0x86c5,	// (0x000177de) ai_gene_pane_1_cp1

0x3c10,	// (0x00012d29) ai_gene_pane_2_cp1

0x86cd,	// (0x000177e6) list_single_idle_plugin_calendar_pane

0x86d6,	// (0x000177ef) list_single_idle_plugin_notification_pane

0x86df,	// (0x000177f8) list_single_idle_plugin_player_pane

0x86e8,	// (0x00017801) list_single_idle_plugin_shortcut_pane_ParamLimits

0x86e8,	// (0x00017801) list_single_idle_plugin_shortcut_pane

0x870a,	// (0x00017823) main_idle_act4_pane_t1

0x871c,	// (0x00017835) main_idle_act4_pane_t2

0x0001,

0xfd0c,	// (0x0001ee25) main_idle_act4_pane_t

0x872e,	// (0x00017847) middle_sk_idle_act4_pane_ParamLimits

0x872e,	// (0x00017847) middle_sk_idle_act4_pane

0x8744,	// (0x0001785d) popup_clock_digital_analogue_window_cp2

0x875e,	// (0x00017877) shortcut_wheel_idle_act4_pane_ParamLimits

0x875e,	// (0x00017877) shortcut_wheel_idle_act4_pane

0x6aa5,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g1

0x6aa5,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g2

0x6aa5,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g3

0x6aa5,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g4

0x6aa5,	// (0x00015bbe) shortcut_wheel_idle_act4_pane_g5

0x8772,	// (0x0001788b) shortcut_wheel_idle_act4_pane_g6

0x877a,	// (0x00017893) shortcut_wheel_idle_act4_pane_g7

0x8782,	// (0x0001789b) shortcut_wheel_idle_act4_pane_g8

0x878a,	// (0x000178a3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd11,	// (0x0001ee2a) shortcut_wheel_idle_act4_pane_g

0x6cdd,	// (0x00015df6) middle_sk_idle_act4_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) middle_sk_idle_act4_pane_g1

0x87ee,	// (0x00017907) middle_sk_idle_act4_pane_g2_ParamLimits

0x87ee,	// (0x00017907) middle_sk_idle_act4_pane_g2

0x0001,

0xfd34,	// (0x0001ee4d) middle_sk_idle_act4_pane_g_ParamLimits

0xfd34,	// (0x0001ee4d) middle_sk_idle_act4_pane_g

0x87fa,	// (0x00017913) middle_sk_idle_act4_pane_t1_ParamLimits

0x87fa,	// (0x00017913) middle_sk_idle_act4_pane_t1

0x8817,	// (0x00017930) grid_ai_shortcut_pane_ParamLimits

0x8817,	// (0x00017930) grid_ai_shortcut_pane

0x8830,	// (0x00017949) list_highlight_pane_cp16_ParamLimits

0x8830,	// (0x00017949) list_highlight_pane_cp16

0x883d,	// (0x00017956) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0x883d,	// (0x00017956) list_single_idle_plugin_shortcut_pane_g1

0x8849,	// (0x00017962) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0x8849,	// (0x00017962) list_single_idle_plugin_shortcut_pane_g2

0x8861,	// (0x0001797a) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0x8861,	// (0x0001797a) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd39,	// (0x0001ee52) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd39,	// (0x0001ee52) list_single_idle_plugin_shortcut_pane_g

0x8874,	// (0x0001798d) cell_ai_shortcut_pane_ParamLimits

0x8874,	// (0x0001798d) cell_ai_shortcut_pane

0x8895,	// (0x000179ae) cell_ai_shortcut_pane_g1_ParamLimits

0x8895,	// (0x000179ae) cell_ai_shortcut_pane_g1

0x86c5,	// (0x000177de) ai_gene_pane_1_cp2

0x88b7,	// (0x000179d0) ai_gene_pane_2_cp2

0x88bf,	// (0x000179d8) list_highlight_pane_cp15

0x88c8,	// (0x000179e1) list_single_idle_plugin_calendar_pane_g1

0x88bf,	// (0x000179d8) list_highlight_pane_cp17

0x88d0,	// (0x000179e9) list_single_idle_plugin_calendar_pane_g1_copy1

0x88d8,	// (0x000179f1) list_single_idle_plugin_player_pane_g1

0x5c80,	// (0x00014d99) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd40,	// (0x0001ee59) list_single_idle_plugin_player_pane_g

0x88e0,	// (0x000179f9) list_single_idle_plugin_player_pane_t1

0x88ee,	// (0x00017a07) list_single_idle_plugin_player_pane_t2

0x88fc,	// (0x00017a15) list_single_idle_plugin_player_pane_t3

0x890a,	// (0x00017a23) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd45,	// (0x0001ee5e) list_single_idle_plugin_player_pane_t

0x8918,	// (0x00017a31) wait_bar_pane_cp15

0x8920,	// (0x00017a39) grid_ai_notification_pane

0x5c80,	// (0x00014d99) list_single_idle_plugin_notification_pane_g1

0x8929,	// (0x00017a42) cell_ai_notification_pane_ParamLimits

0x8929,	// (0x00017a42) cell_ai_notification_pane

0x8936,	// (0x00017a4f) cell_ai_notification_pane_g1

0x893e,	// (0x00017a57) cell_ai_notification_pane_t1

0x894c,	// (0x00017a65) tb_ext_find_button_pane

0x8954,	// (0x00017a6d) tb_ext_find_pane_g1

0x895c,	// (0x00017a75) tb_ext_find_pane_t1

0x34b9,	// (0x000125d2) tb_ext_find_button_pane_g1

0x896a,	// (0x00017a83) tb_ext_find_button_pane_g2

0x0001,

0xfd4e,	// (0x0001ee67) tb_ext_find_button_pane_g

0x870a,	// (0x00017823) main_idle_act4_pane_t1_ParamLimits

0x871c,	// (0x00017835) main_idle_act4_pane_t2_ParamLimits

0xfd0c,	// (0x0001ee25) main_idle_act4_pane_t_ParamLimits

0x8744,	// (0x0001785d) popup_clock_digital_analogue_window_cp2_ParamLimits

0x8752,	// (0x0001786b) sat_plugin_idle_act4_pane_ParamLimits

0x8752,	// (0x0001786b) sat_plugin_idle_act4_pane

0x8973,	// (0x00017a8c) sat_plugin_idle_act4_pane_t1_ParamLimits

0x8973,	// (0x00017a8c) sat_plugin_idle_act4_pane_t1

0x8986,	// (0x00017a9f) sat_plugin_idle_act4_pane_t2_ParamLimits

0x8986,	// (0x00017a9f) sat_plugin_idle_act4_pane_t2

0x8999,	// (0x00017ab2) sat_plugin_idle_act4_pane_t3_ParamLimits

0x8999,	// (0x00017ab2) sat_plugin_idle_act4_pane_t3

0x89ac,	// (0x00017ac5) sat_plugin_idle_act4_pane_t4_ParamLimits

0x89ac,	// (0x00017ac5) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd53,	// (0x0001ee6c) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd53,	// (0x0001ee6c) sat_plugin_idle_act4_pane_t

0xcd73,	// (0x0001be8c) popup_battery_window_ParamLimits

0xcd73,	// (0x0001be8c) popup_battery_window

0x2297,	// (0x000113b0) bg_popup_sub_pane_cp25_ParamLimits

0x2297,	// (0x000113b0) bg_popup_sub_pane_cp25

0x89bf,	// (0x00017ad8) popup_battery_window_g1_ParamLimits

0x89bf,	// (0x00017ad8) popup_battery_window_g1

0x89cb,	// (0x00017ae4) popup_battery_window_t1_ParamLimits

0x89cb,	// (0x00017ae4) popup_battery_window_t1

0x89dd,	// (0x00017af6) popup_battery_window_t2_ParamLimits

0x89dd,	// (0x00017af6) popup_battery_window_t2

0x0001,

0xfd5c,	// (0x0001ee75) popup_battery_window_t_ParamLimits

0xfd5c,	// (0x0001ee75) popup_battery_window_t

0x3ae9,	// (0x00012c02) midp_canvas_pane_ParamLimits

0x3b58,	// (0x00012c71) midp_keypad_pane_ParamLimits

0x3b58,	// (0x00012c71) midp_keypad_pane

0x3e24,	// (0x00012f3d) main_midp_pane_ParamLimits

0x65ef,	// (0x00015708) signal_pane_g2_cp_ParamLimits

0x89fa,	// (0x00017b13) aid_size_cell_midp_keypad_ParamLimits

0x89fa,	// (0x00017b13) aid_size_cell_midp_keypad

0x8a14,	// (0x00017b2d) midp_keyp_game_grid_pane_ParamLimits

0x8a14,	// (0x00017b2d) midp_keyp_game_grid_pane

0x8a2e,	// (0x00017b47) midp_keyp_rocker_pane_ParamLimits

0x8a2e,	// (0x00017b47) midp_keyp_rocker_pane

0x8a5b,	// (0x00017b74) midp_keyp_sk_left_pane_ParamLimits

0x8a5b,	// (0x00017b74) midp_keyp_sk_left_pane

0x8ab3,	// (0x00017bcc) midp_keyp_sk_right_pane_ParamLimits

0x8ab3,	// (0x00017bcc) midp_keyp_sk_right_pane

0x1e1e,	// (0x00010f37) bg_button_pane_cp03

0x8b05,	// (0x00017c1e) midp_keyp_sk_left_pane_g1

0x1e1e,	// (0x00010f37) bg_button_pane_cp04

0x8b05,	// (0x00017c1e) midp_keyp_sk_right_pane_g1

0x6aa5,	// (0x00015bbe) midp_keyp_rocker_pane_g1

0x8b0e,	// (0x00017c27) keyp_game_cell_pane_ParamLimits

0x8b0e,	// (0x00017c27) keyp_game_cell_pane

0x1e1e,	// (0x00010f37) bg_button_pane_cp02

0x8b1f,	// (0x00017c38) keyp_game_cell_pane_g1

0xcda9,	// (0x0001bec2) popup_fep_vkb2_window_ParamLimits

0xcda9,	// (0x0001bec2) popup_fep_vkb2_window

0xe222,	// (0x0001d33b) aid_size_cell_vkb2_ParamLimits

0xe222,	// (0x0001d33b) aid_size_cell_vkb2

0xe276,	// (0x0001d38f) popup_fep_vkb2_window_g1_ParamLimits

0xe276,	// (0x0001d38f) popup_fep_vkb2_window_g1

0xe2be,	// (0x0001d3d7) vkb2_area_bottom_pane_ParamLimits

0xe2be,	// (0x0001d3d7) vkb2_area_bottom_pane

0xe2f6,	// (0x0001d40f) vkb2_area_keypad_pane_ParamLimits

0xe2f6,	// (0x0001d40f) vkb2_area_keypad_pane

0xe32e,	// (0x0001d447) vkb2_area_top_pane_ParamLimits

0xe32e,	// (0x0001d447) vkb2_area_top_pane

0xe39e,	// (0x0001d4b7) vkb2_top_entry_pane_ParamLimits

0xe39e,	// (0x0001d4b7) vkb2_top_entry_pane

0xe3c8,	// (0x0001d4e1) vkb2_top_grid_left_pane_ParamLimits

0xe3c8,	// (0x0001d4e1) vkb2_top_grid_left_pane

0xe3e6,	// (0x0001d4ff) vkb2_top_grid_right_pane_ParamLimits

0xe3e6,	// (0x0001d4ff) vkb2_top_grid_right_pane

0xe404,	// (0x0001d51d) vkb2_cell_keypad_pane_ParamLimits

0xe404,	// (0x0001d51d) vkb2_cell_keypad_pane

0xe4b5,	// (0x0001d5ce) vkb2_area_bottom_grid_pane_ParamLimits

0xe4b5,	// (0x0001d5ce) vkb2_area_bottom_grid_pane

0xe4d9,	// (0x0001d5f2) vkb2_area_bottom_pane_g1_ParamLimits

0xe4d9,	// (0x0001d5f2) vkb2_area_bottom_pane_g1

0xe4fd,	// (0x0001d616) vkb2_area_bottom_pane_g2_ParamLimits

0xe4fd,	// (0x0001d616) vkb2_area_bottom_pane_g2

0xe52b,	// (0x0001d644) vkb2_area_bottom_pane_g3_ParamLimits

0xe52b,	// (0x0001d644) vkb2_area_bottom_pane_g3

0x0002,

0xfd61,	// (0x0001ee7a) vkb2_area_bottom_pane_g_ParamLimits

0xfd61,	// (0x0001ee7a) vkb2_area_bottom_pane_g

0xe57c,	// (0x0001d695) vkb2_top_cell_left_pane_ParamLimits

0xe57c,	// (0x0001d695) vkb2_top_cell_left_pane

0x8b30,	// (0x00017c49) vkb2_top_entry_pane_g1_ParamLimits

0x8b30,	// (0x00017c49) vkb2_top_entry_pane_g1

0x8b3e,	// (0x00017c57) vkb2_top_entry_pane_t1_ParamLimits

0x8b3e,	// (0x00017c57) vkb2_top_entry_pane_t1

0x8b70,	// (0x00017c89) vkb2_top_entry_pane_t2_ParamLimits

0x8b70,	// (0x00017c89) vkb2_top_entry_pane_t2

0x8ba2,	// (0x00017cbb) vkb2_top_entry_pane_t3_ParamLimits

0x8ba2,	// (0x00017cbb) vkb2_top_entry_pane_t3

0x0002,

0xfd68,	// (0x0001ee81) vkb2_top_entry_pane_t_ParamLimits

0xfd68,	// (0x0001ee81) vkb2_top_entry_pane_t

0xe5c9,	// (0x0001d6e2) vkb2_top_grid_right_pane_g1_ParamLimits

0xe5c9,	// (0x0001d6e2) vkb2_top_grid_right_pane_g1

0xe5df,	// (0x0001d6f8) vkb2_top_grid_right_pane_g2_ParamLimits

0xe5df,	// (0x0001d6f8) vkb2_top_grid_right_pane_g2

0xe5f7,	// (0x0001d710) vkb2_top_grid_right_pane_g3_ParamLimits

0xe5f7,	// (0x0001d710) vkb2_top_grid_right_pane_g3

0xe60f,	// (0x0001d728) vkb2_top_grid_right_pane_g4_ParamLimits

0xe60f,	// (0x0001d728) vkb2_top_grid_right_pane_g4

0x0003,

0xfd6f,	// (0x0001ee88) vkb2_top_grid_right_pane_g_ParamLimits

0xfd6f,	// (0x0001ee88) vkb2_top_grid_right_pane_g

0xe625,	// (0x0001d73e) vkb2_top_cell_left_pane_g1

0xe63c,	// (0x0001d755) vkb2_cell_keypad_pane_g1_ParamLimits

0xe63c,	// (0x0001d755) vkb2_cell_keypad_pane_g1

0xa5d9,	// (0x000196f2) vkb2_cell_keypad_pane_t1_ParamLimits

0xa5d9,	// (0x000196f2) vkb2_cell_keypad_pane_t1

0xe64a,	// (0x0001d763) vkb2_cell_bottom_grid_pane_ParamLimits

0xe64a,	// (0x0001d763) vkb2_cell_bottom_grid_pane

0xe683,	// (0x0001d79c) vkb2_cell_bottom_grid_pane_g1

0x8792,	// (0x000178ab) aid_call2_pane_cp02

0x879a,	// (0x000178b3) aid_call_pane_cp02

0x87a2,	// (0x000178bb) clock_digital_number_pane_cp10

0x87aa,	// (0x000178c3) clock_digital_number_pane_cp11

0x87b2,	// (0x000178cb) clock_digital_number_pane_cp12

0x87ba,	// (0x000178d3) clock_digital_number_pane_cp13

0x87c2,	// (0x000178db) clock_digital_separator_pane_cp10

0x34b9,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g1

0x34b9,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g2

0x87ca,	// (0x000178e3) popup_clock_digital_analogue_window_cp2_g3

0x34b9,	// (0x000125d2) popup_clock_digital_analogue_window_cp2_g4

0x87ca,	// (0x000178e3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd24,	// (0x0001ee3d) popup_clock_digital_analogue_window_cp2_g

0x87d2,	// (0x000178eb) popup_clock_digital_analogue_window_cp2_t1

0x87e0,	// (0x000178f9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd2f,	// (0x0001ee48) popup_clock_digital_analogue_window_cp2_t

0x6aa5,	// (0x00015bbe) clock_digital_number_pane_cp10_g1

0x6aa5,	// (0x00015bbe) clock_digital_number_pane_cp10_g2

0x0001,

0xfb1e,	// (0x0001ec37) clock_digital_number_pane_cp10_g

0x6aa5,	// (0x00015bbe) clock_digital_separator_pane_cp10_g1

0x6aa5,	// (0x00015bbe) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb1e,	// (0x0001ec37) clock_digital_separator_pane_cp10_g

0x860f,	// (0x00017728) uniindi_top_pane_g3

0x8620,	// (0x00017739) uniindi_top_pane_g4

0xe46f,	// (0x0001d588) vkb2_row_keypad_pane_ParamLimits

0xe46f,	// (0x0001d588) vkb2_row_keypad_pane

0xe69f,	// (0x0001d7b8) vkb2_cell_t_keypad_pane_ParamLimits

0xe69f,	// (0x0001d7b8) vkb2_cell_t_keypad_pane

0xe6ac,	// (0x0001d7c5) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xe6ac,	// (0x0001d7c5) vkb2_cell_t_keypad_pane_cp08

0xe6bc,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xe6bc,	// (0x0001d7d5) vkb2_cell_t_keypad_pane_cp09

0xe6cd,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xe6cd,	// (0x0001d7e6) vkb2_cell_t_keypad_pane_cp01

0xe6dd,	// (0x0001d7f6) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xe6dd,	// (0x0001d7f6) vkb2_cell_t_keypad_pane_cp02

0xe6ed,	// (0x0001d806) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xe6ed,	// (0x0001d806) vkb2_cell_t_keypad_pane_cp03

0xe6fd,	// (0x0001d816) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xe6fd,	// (0x0001d816) vkb2_cell_t_keypad_pane_cp04

0xe70d,	// (0x0001d826) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xe70d,	// (0x0001d826) vkb2_cell_t_keypad_pane_cp05

0xe71d,	// (0x0001d836) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xe71d,	// (0x0001d836) vkb2_cell_t_keypad_pane_cp06

0xe72d,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xe72d,	// (0x0001d846) vkb2_cell_t_keypad_pane_cp07

0xe73d,	// (0x0001d856) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xe73d,	// (0x0001d856) vkb2_cell_t_keypad_pane_cp10

0x6cdd,	// (0x00015df6) vkb2_cell_t_keypad_pane_g1

0xa5f0,	// (0x00019709) vkb2_cell_t_keypad_pane_t1

0x1e1e,	// (0x00010f37) popup_grid_graphic2_window

0xe752,	// (0x0001d86b) aid_size_cell_graphic2_ParamLimits

0xe752,	// (0x0001d86b) aid_size_cell_graphic2

0xe78a,	// (0x0001d8a3) bg_popup_window_pane_cp21_ParamLimits

0xe78a,	// (0x0001d8a3) bg_popup_window_pane_cp21

0xe798,	// (0x0001d8b1) graphic2_pages_pane_ParamLimits

0xe798,	// (0x0001d8b1) graphic2_pages_pane

0xe7d2,	// (0x0001d8eb) grid_graphic2_control_pane_ParamLimits

0xe7d2,	// (0x0001d8eb) grid_graphic2_control_pane

0xe808,	// (0x0001d921) grid_graphic2_pane_ParamLimits

0xe808,	// (0x0001d921) grid_graphic2_pane

0xe868,	// (0x0001d981) cell_graphic2_pane

0x1e1e,	// (0x00010f37) main_comp_mode_pane

0x7eab,	// (0x00016fc4) list_ai3_gene_pane_ParamLimits

0x826e,	// (0x00017387) bg_popup_window_pane_cp19_ParamLimits

0x827a,	// (0x00017393) bg_touch_area_indi_pane_ParamLimits

0x827a,	// (0x00017393) bg_touch_area_indi_pane

0x8290,	// (0x000173a9) bg_touch_area_indi_pane_cp01_ParamLimits

0x8290,	// (0x000173a9) bg_touch_area_indi_pane_cp01

0x82a6,	// (0x000173bf) bg_touch_area_indi_pane_cp02_ParamLimits

0x82a6,	// (0x000173bf) bg_touch_area_indi_pane_cp02

0x82bc,	// (0x000173d5) bg_touch_area_indi_pane_cp03_ParamLimits

0x82bc,	// (0x000173d5) bg_touch_area_indi_pane_cp03

0x82d2,	// (0x000173eb) popup_slider_window_g1_ParamLimits

0x82ee,	// (0x00017407) popup_slider_window_g2_ParamLimits

0x830a,	// (0x00017423) popup_slider_window_g3_ParamLimits

0xfcb9,	// (0x0001edd2) popup_slider_window_g_ParamLimits

0x8366,	// (0x0001747f) popup_slider_window_t1_ParamLimits

0x83d8,	// (0x000174f1) small_volume_slider_vertical_pane_ParamLimits

0xe868,	// (0x0001d981) cell_graphic2_pane_ParamLimits

0xe8a4,	// (0x0001d9bd) bg_button_pane_cp10_ParamLimits

0xe8a4,	// (0x0001d9bd) bg_button_pane_cp10

0xe8b5,	// (0x0001d9ce) bg_button_pane_cp11_ParamLimits

0xe8b5,	// (0x0001d9ce) bg_button_pane_cp11

0xe8c6,	// (0x0001d9df) graphic2_pages_pane_g1_ParamLimits

0xe8c6,	// (0x0001d9df) graphic2_pages_pane_g1

0xe8d9,	// (0x0001d9f2) graphic2_pages_pane_g2_ParamLimits

0xe8d9,	// (0x0001d9f2) graphic2_pages_pane_g2

0x0001,

0xfd7d,	// (0x0001ee96) graphic2_pages_pane_g_ParamLimits

0xfd7d,	// (0x0001ee96) graphic2_pages_pane_g

0xe8ef,	// (0x0001da08) graphic2_pages_pane_t1_ParamLimits

0xe8ef,	// (0x0001da08) graphic2_pages_pane_t1

0xe905,	// (0x0001da1e) cell_graphic2_control_pane_ParamLimits

0xe905,	// (0x0001da1e) cell_graphic2_control_pane

0xe924,	// (0x0001da3d) cell_graphic2_pane_g1_ParamLimits

0xe924,	// (0x0001da3d) cell_graphic2_pane_g1

0xe931,	// (0x0001da4a) cell_graphic2_pane_g2_ParamLimits

0xe931,	// (0x0001da4a) cell_graphic2_pane_g2

0xe93e,	// (0x0001da57) cell_graphic2_pane_g3_ParamLimits

0xe93e,	// (0x0001da57) cell_graphic2_pane_g3

0xe94b,	// (0x0001da64) cell_graphic2_pane_g4_ParamLimits

0xe94b,	// (0x0001da64) cell_graphic2_pane_g4

0xe958,	// (0x0001da71) cell_graphic2_pane_g5_ParamLimits

0xe958,	// (0x0001da71) cell_graphic2_pane_g5

0x0004,

0xfd82,	// (0x0001ee9b) cell_graphic2_pane_g_ParamLimits

0xfd82,	// (0x0001ee9b) cell_graphic2_pane_g

0xe971,	// (0x0001da8a) cell_graphic2_pane_t1_ParamLimits

0xe971,	// (0x0001da8a) cell_graphic2_pane_t1

0x4439,	// (0x00013552) grid_highlight_pane_cp11_ParamLimits

0x4439,	// (0x00013552) grid_highlight_pane_cp11

0x2297,	// (0x000113b0) bg_button_pane_cp05

0xe999,	// (0x0001dab2) cell_graphic2_control_pane_g1

0x6aa5,	// (0x00015bbe) bg_touch_area_indi_pane_g1

0xa61c,	// (0x00019735) aid_cmod_rocker_key_size

0xa626,	// (0x0001973f) aid_cmode_itu_key_size

0xa630,	// (0x00019749) main_cmode_video_pane

0xa638,	// (0x00019751) main_comp_mode_itu_pane

0xa642,	// (0x0001975b) main_comp_mode_rocker_pane

0xa64a,	// (0x00019763) cell_cmode_rocker_pane_ParamLimits

0xa64a,	// (0x00019763) cell_cmode_rocker_pane

0xa65c,	// (0x00019775) cell_cmode_itu_pane_ParamLimits

0xa65c,	// (0x00019775) cell_cmode_itu_pane

0x2ceb,	// (0x00011e04) bg_button_pane_cp06_ParamLimits

0x2ceb,	// (0x00011e04) bg_button_pane_cp06

0x6cdd,	// (0x00015df6) cell_cmode_rocker_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) cell_cmode_rocker_pane_g1

0x8479,	// (0x00017592) cell_cmode_rocker_pane_g2_ParamLimits

0x8479,	// (0x00017592) cell_cmode_rocker_pane_g2

0x0001,

0xfd92,	// (0x0001eeab) cell_cmode_rocker_pane_g_ParamLimits

0xfd92,	// (0x0001eeab) cell_cmode_rocker_pane_g

0x1e1e,	// (0x00010f37) bg_button_pane_cp07

0xa671,	// (0x0001978a) cell_cmode_itu_pane_g1

0xa67a,	// (0x00019793) cell_cmode_itu_pane_t1

0xa688,	// (0x000197a1) cell_cmode_itu_pane_t2

0x0001,

0xfd97,	// (0x0001eeb0) cell_cmode_itu_pane_t

0x8691,	// (0x000177aa) aid_touch_ctrl_left

0x8699,	// (0x000177b2) aid_touch_ctrl_right

0x1e1e,	// (0x00010f37) compa_mode_pane

0xe9c1,	// (0x0001dada) aid_cmod_rocker_key_size_cp

0xe9cb,	// (0x0001dae4) aid_cmode_itu_key_size_cp

0xa696,	// (0x000197af) compa_mode_pane_g1

0xa69e,	// (0x000197b7) compa_mode_pane_g2

0xa6a6,	// (0x000197bf) compa_mode_pane_g3

0x0002,

0xfd9c,	// (0x0001eeb5) compa_mode_pane_g

0xe9d5,	// (0x0001daee) main_comp_mode_itu_pane_cp

0xe9dd,	// (0x0001daf6) main_comp_mode_rocker_pane_cp

0xe9e5,	// (0x0001dafe) cell_cmode_itu_pane_cp_ParamLimits

0xe9e5,	// (0x0001dafe) cell_cmode_itu_pane_cp

0xe9fa,	// (0x0001db13) cell_cmode_rocker_pane_cp_ParamLimits

0xe9fa,	// (0x0001db13) cell_cmode_rocker_pane_cp

0x2ceb,	// (0x00011e04) bg_button_pane_cp06_cp_ParamLimits

0x2ceb,	// (0x00011e04) bg_button_pane_cp06_cp

0x6cdd,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x6cdd,	// (0x00015df6) cell_cmode_rocker_pane_g1_cp

0x6aa5,	// (0x00015bbe) cell_cmode_rocker_pane_g2_cp

0x1e1e,	// (0x00010f37) bg_button_pane_cp07_cp

0xea0c,	// (0x0001db25) cell_cmode_itu_pane_g1_cp

0xea15,	// (0x0001db2e) cell_cmode_itu_pane_t1_cp

0xea23,	// (0x0001db3c) cell_cmode_itu_pane_t2_cp

0x5810,	// (0x00014929) settings_code_pane_cp2

0x1fef,	// (0x00011108) bg_popup_window_pane_cp3_ParamLimits

0x2495,	// (0x000115ae) heading_pane_cp3_ParamLimits

0x24a4,	// (0x000115bd) listscroll_popup_graphic_pane_ParamLimits

0xdde2,	// (0x0001cefb) fep_hwr_aid_pane_ParamLimits

0xe194,	// (0x0001d2ad) aid_touch_sctrl_top_ParamLimits

0xe1a1,	// (0x0001d2ba) sctrl_sk_top_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) sctrl_sk_top_pane_g2_ParamLimits

0xfcd2,	// (0x0001edeb) sctrl_sk_top_pane_g_ParamLimits

0xe1ae,	// (0x0001d2c7) sctrl_sk_top_pane_t1_ParamLimits

0xe194,	// (0x0001d2ad) aid_touch_sctrl_bottom_ParamLimits

0xe1ae,	// (0x0001d2c7) sctrl_sk_bottom_pane_t1_ParamLimits

0x85db,	// (0x000176f4) aid_area_touch_clock

0xe366,	// (0x0001d47f) aid_vkb2_area_top_pane_cell_ParamLimits

0xe366,	// (0x0001d47f) aid_vkb2_area_top_pane_cell

0xe491,	// (0x0001d5aa) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xe491,	// (0x0001d5aa) aid_vkb2_area_bottom_pane_cell

0x8b28,	// (0x00017c41) popup_char_count_window

0xa6ae,	// (0x000197c7) popup_char_count_window_g1

0xa6b7,	// (0x000197d0) popup_char_count_window_g2

0xa6c0,	// (0x000197d9) popup_char_count_window_g3

0x0002,

0xfda3,	// (0x0001eebc) popup_char_count_window_g

0xa6c9,	// (0x000197e2) popup_char_count_window_t1

0xe254,	// (0x0001d36d) popup_fep_char_preview_window_ParamLimits

0xe254,	// (0x0001d36d) popup_fep_char_preview_window

0xe384,	// (0x0001d49d) vkb2_top_candi_pane_ParamLimits

0xe384,	// (0x0001d49d) vkb2_top_candi_pane

0xea31,	// (0x0001db4a) cell_vkb2_top_candi_pane_ParamLimits

0xea31,	// (0x0001db4a) cell_vkb2_top_candi_pane

0x4a05,	// (0x00013b1e) bg_popup_fep_char_preview_window_ParamLimits

0x4a05,	// (0x00013b1e) bg_popup_fep_char_preview_window

0xea6a,	// (0x0001db83) popup_fep_char_preview_window_t1_ParamLimits

0xea6a,	// (0x0001db83) popup_fep_char_preview_window_t1

0xa6e7,	// (0x00019800) bg_popup_fep_char_preview_window_g1

0xa6df,	// (0x000197f8) bg_popup_fep_char_preview_window_g2

0xa6d7,	// (0x000197f0) bg_popup_fep_char_preview_window_g3

0xa70f,	// (0x00019828) bg_popup_fep_char_preview_window_g4

0xa707,	// (0x00019820) bg_popup_fep_char_preview_window_g5

0xa6ff,	// (0x00019818) bg_popup_fep_char_preview_window_g6

0xa6f7,	// (0x00019810) bg_popup_fep_char_preview_window_g7

0xa6ef,	// (0x00019808) bg_popup_fep_char_preview_window_g8

0xa717,	// (0x00019830) bg_popup_fep_char_preview_window_g9

0x0009,

0xfdaa,	// (0x0001eec3) bg_popup_fep_char_preview_window_g

0x6cdd,	// (0x00015df6) cell_vkb2_top_candi_pane_g1_ParamLimits

0x6cdd,	// (0x00015df6) cell_vkb2_top_candi_pane_g1

0x724a,	// (0x00016363) cell_vkb2_top_candi_pane_g2_ParamLimits

0x724a,	// (0x00016363) cell_vkb2_top_candi_pane_g2

0x726b,	// (0x00016384) cell_vkb2_top_candi_pane_g3_ParamLimits

0x726b,	// (0x00016384) cell_vkb2_top_candi_pane_g3

0xeaac,	// (0x0001dbc5) cell_vkb2_top_candi_pane_g4_ParamLimits

0xeaac,	// (0x0001dbc5) cell_vkb2_top_candi_pane_g4

0xa5aa,	// (0x000196c3) cell_vkb2_top_candi_pane_g5_ParamLimits

0xa5aa,	// (0x000196c3) cell_vkb2_top_candi_pane_g5

0x8479,	// (0x00017592) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8479,	// (0x00017592) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdbf,	// (0x0001eed8) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdbf,	// (0x0001eed8) cell_vkb2_top_candi_pane_g

0xeacd,	// (0x0001dbe6) cell_vkb2_top_candi_pane_t1

0xdbfa,	// (0x0001cd13) aid_size_touch_slider_mark_ParamLimits

0xdbfa,	// (0x0001cd13) aid_size_touch_slider_mark

0xe7c6,	// (0x0001d8df) grid_graphic2_catg_pane_ParamLimits

0xe7c6,	// (0x0001d8df) grid_graphic2_catg_pane

0xe844,	// (0x0001d95d) popup_grid_graphic2_window_t1_ParamLimits

0xe844,	// (0x0001d95d) popup_grid_graphic2_window_t1

0xe856,	// (0x0001d96f) popup_grid_graphic2_window_t2_ParamLimits

0xe856,	// (0x0001d96f) popup_grid_graphic2_window_t2

0x0001,

0xfd78,	// (0x0001ee91) popup_grid_graphic2_window_t_ParamLimits

0xfd78,	// (0x0001ee91) popup_grid_graphic2_window_t

0x2297,	// (0x000113b0) bg_button_pane_cp05_ParamLimits

0xe999,	// (0x0001dab2) cell_graphic2_control_pane_g1_ParamLimits

0xeae3,	// (0x0001dbfc) cell_graphic2_catg_pane_ParamLimits

0xeae3,	// (0x0001dbfc) cell_graphic2_catg_pane

0x1e1e,	// (0x00010f37) bg_button_pane_cp12

0xeaf5,	// (0x0001dc0e) cell_graphic2_catg_pane_g1

0x85a7,	// (0x000176c0) cell_tb_ext_pane_t1_ParamLimits

0xe59c,	// (0x0001d6b5) vkb2_top_cell_right_narrow_pane_ParamLimits

0xe59c,	// (0x0001d6b5) vkb2_top_cell_right_narrow_pane

0xe5b4,	// (0x0001d6cd) vkb2_top_cell_right_wide_pane_ParamLimits

0xe5b4,	// (0x0001d6cd) vkb2_top_cell_right_wide_pane

0xddd4,	// (0x0001ceed) bg_vkb2_func_pane_ParamLimits

0xddd4,	// (0x0001ceed) bg_vkb2_func_pane

0xe625,	// (0x0001d73e) vkb2_top_cell_left_pane_g1_ParamLimits

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp03_ParamLimits

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp03

0xe683,	// (0x0001d79c) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4331,	// (0x0001344a) bg_vkb2_func_pane_g1

0x4329,	// (0x00013442) bg_vkb2_func_pane_g2

0x4339,	// (0x00013452) bg_vkb2_func_pane_g3

0x4341,	// (0x0001345a) bg_vkb2_func_pane_g4

0x4349,	// (0x00013462) bg_vkb2_func_pane_g5

0x4351,	// (0x0001346a) bg_vkb2_func_pane_g6

0x4361,	// (0x0001347a) bg_vkb2_func_pane_g7

0x4359,	// (0x00013472) bg_vkb2_func_pane_g8

0x4321,	// (0x0001343a) bg_vkb2_func_pane_g9

0x0008,

0xfdcc,	// (0x0001eee5) bg_vkb2_func_pane_g

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp01_ParamLimits

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp01

0xe625,	// (0x0001d73e) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xe625,	// (0x0001d73e) vkb2_top_cell_right_wide_pane_g1

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp02_ParamLimits

0xddd4,	// (0x0001ceed) bg_vkb2_fuc_pane_cp02

0xe683,	// (0x0001d79c) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xe683,	// (0x0001d79c) vkb2_top_cell_right_narrow_pane_g1

0x8200,	// (0x00017319) aid_touch_area_decrease_ParamLimits

0x8200,	// (0x00017319) aid_touch_area_decrease

0x8218,	// (0x00017331) aid_touch_area_increase_ParamLimits

0x8218,	// (0x00017331) aid_touch_area_increase

0x8224,	// (0x0001733d) aid_touch_area_mute_ParamLimits

0x8224,	// (0x0001733d) aid_touch_area_mute

0x8240,	// (0x00017359) aid_touch_area_slider_ParamLimits

0x8240,	// (0x00017359) aid_touch_area_slider

0x8326,	// (0x0001743f) popup_slider_window_g4_ParamLimits

0x8326,	// (0x0001743f) popup_slider_window_g4

0x8332,	// (0x0001744b) popup_slider_window_g5_ParamLimits

0x8332,	// (0x0001744b) popup_slider_window_g5

0x8354,	// (0x0001746d) popup_slider_window_g6_ParamLimits

0x8354,	// (0x0001746d) popup_slider_window_g6

0x8392,	// (0x000174ab) popup_slider_window_t2_ParamLimits

0x8392,	// (0x000174ab) popup_slider_window_t2

0x0001,

0xfcc6,	// (0x0001eddf) popup_slider_window_t_ParamLimits

0xfcc6,	// (0x0001eddf) popup_slider_window_t

0x83aa,	// (0x000174c3) slider_pane_ParamLimits

0x83aa,	// (0x000174c3) slider_pane

0xa71f,	// (0x00019838) slider_pane_g1_ParamLimits

0xa71f,	// (0x00019838) slider_pane_g1

0xa733,	// (0x0001984c) slider_pane_g2_ParamLimits

0xa733,	// (0x0001984c) slider_pane_g2

0xa749,	// (0x00019862) slider_pane_g3_ParamLimits

0xa749,	// (0x00019862) slider_pane_g3

0x0003,

0xfddf,	// (0x0001eef8) slider_pane_g_ParamLimits

0xfddf,	// (0x0001eef8) slider_pane_g

0xd886,	// (0x0001c99f) popup_tb_float_extension_window_ParamLimits

0xd886,	// (0x0001c99f) popup_tb_float_extension_window

0xa775,	// (0x0001988e) aid_size_cell_tb_float_ext

0x1e1e,	// (0x00010f37) bg_popup_sub_window_cp28

0xa780,	// (0x00019899) grid_tb_float_ext_pane

0xa788,	// (0x000198a1) cell_tb_float_ext_pane_ParamLimits

0xa788,	// (0x000198a1) cell_tb_float_ext_pane

0xa7a0,	// (0x000198b9) cell_tb_float_ext_pane_g1

0xa7a9,	// (0x000198c2) grid_highlight_pane_cp12

0xdf0f,	// (0x0001d028) cell_last_hwr_side_pane_ParamLimits

0xdf0f,	// (0x0001d028) cell_last_hwr_side_pane

0x6aa5,	// (0x00015bbe) cell_last_hwr_side_pane_g1

0xa7b2,	// (0x000198cb) cell_last_hwr_side_pane_g2

0x0001,

0xfde8,	// (0x0001ef01) cell_last_hwr_side_pane_g

0xe559,	// (0x0001d672) vkb2_area_bottom_space_btn_pane_ParamLimits

0xe559,	// (0x0001d672) vkb2_area_bottom_space_btn_pane

0x6cdd,	// (0x00015df6) vkb2_cell_t_keypad_pane_g1_ParamLimits

0xa5f0,	// (0x00019709) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xeacd,	// (0x0001dbe6) cell_vkb2_top_candi_pane_t1_ParamLimits

0xeafe,	// (0x0001dc17) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xeafe,	// (0x0001dc17) vkb2_area_bottom_space_btn_pane_g1

0xeb34,	// (0x0001dc4d) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xeb34,	// (0x0001dc4d) vkb2_area_bottom_space_btn_pane_g2

0xeb6a,	// (0x0001dc83) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xeb6a,	// (0x0001dc83) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfded,	// (0x0001ef06) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfded,	// (0x0001ef06) vkb2_area_bottom_space_btn_pane_g

0xde83,	// (0x0001cf9c) cel_fep_hwr_func_pane_ParamLimits

0xde83,	// (0x0001cf9c) cel_fep_hwr_func_pane

0xdebf,	// (0x0001cfd8) cell_hwr_side_button_pane_ParamLimits

0xdebf,	// (0x0001cfd8) cell_hwr_side_button_pane

0x85db,	// (0x000176f4) aid_area_touch_clock_ParamLimits

0x2297,	// (0x000113b0) bg_uniindi_top_pane_ParamLimits

0x85ed,	// (0x00017706) uniindi_top_pane_g1_ParamLimits

0x8603,	// (0x0001771c) uniindi_top_pane_g2_ParamLimits

0x860f,	// (0x00017728) uniindi_top_pane_g3_ParamLimits

0x8620,	// (0x00017739) uniindi_top_pane_g4_ParamLimits

0xfcfe,	// (0x0001ee17) uniindi_top_pane_g_ParamLimits

0x862d,	// (0x00017746) uniindi_top_pane_t1_ParamLimits

0x2297,	// (0x000113b0) bg_vkb2_func_pane_cp01_ParamLimits

0x2297,	// (0x000113b0) bg_vkb2_func_pane_cp01

0xa7bb,	// (0x000198d4) cel_fep_hwr_func_pane_g1_ParamLimits

0xa7bb,	// (0x000198d4) cel_fep_hwr_func_pane_g1

0x2297,	// (0x000113b0) bg_vkb2_func_pane_cp02_ParamLimits

0x2297,	// (0x000113b0) bg_vkb2_func_pane_cp02

0xa7bb,	// (0x000198d4) cell_hwr_side_button_pane_g1_ParamLimits

0xa7bb,	// (0x000198d4) cell_hwr_side_button_pane_g1

0x4187,	// (0x000132a0) status_pane_g4_ParamLimits

0x4187,	// (0x000132a0) status_pane_g4

0x419f,	// (0x000132b8) status_pane_t1

0x6887,	// (0x000159a0) form2_midp_gauge_slider_cont_pane

0x688f,	// (0x000159a8) form2_midp_gauge_slider_pane_t1_ParamLimits

0x68a1,	// (0x000159ba) form2_midp_gauge_slider_pane_t2_ParamLimits

0x68b3,	// (0x000159cc) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfad1,	// (0x0001ebea) form2_midp_gauge_slider_pane_t_ParamLimits

0x68c5,	// (0x000159de) form2_midp_slider_pane_ParamLimits

0xe214,	// (0x0001d32d) aid_size_cell_func_vkb2_ParamLimits

0xe214,	// (0x0001d32d) aid_size_cell_func_vkb2

0xa761,	// (0x0001987a) slider_pane_g4_ParamLimits

0xa761,	// (0x0001987a) slider_pane_g4

0xebb0,	// (0x0001dcc9) form2_midp_gauge_slider_pane_t2_cp01

0xebbe,	// (0x0001dcd7) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xebbe,	// (0x0001dcd7) form2_midp_gauge_slider_pane_t3_cp01

0xebdb,	// (0x0001dcf4) form2_midp_slider_pane_cp01

0x1e1e,	// (0x00010f37) navi_smil_pane

0xa7eb,	// (0x00019904) navi_smil_pane_g1

0xa7f3,	// (0x0001990c) navi_smil_pane_t1

0xa7c9,	// (0x000198e2) form2_midp_slider_pane_g1

0xa7d2,	// (0x000198eb) form2_midp_slider_pane_g2

0xa7da,	// (0x000198f3) form2_midp_slider_pane_g3

0xa7c9,	// (0x000198e2) form2_midp_slider_pane_g4

0xebe4,	// (0x0001dcfd) form2_midp_slider_pane_g5

0x0004,

0xfdf6,	// (0x0001ef0f) form2_midp_slider_pane_g

0xeba0,	// (0x0001dcb9) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xeba0,	// (0x0001dcb9) vkb2_area_bottom_space_btn_pane_g4

0x3fc9,	// (0x000130e2) lc0_navi_pane_ParamLimits

0x3fc9,	// (0x000130e2) lc0_navi_pane

0x403f,	// (0x00013158) lc0_stat_indi_pane_ParamLimits

0x403f,	// (0x00013158) lc0_stat_indi_pane

0x4056,	// (0x0001316f) ls0_title_pane_ParamLimits

0x4056,	// (0x0001316f) ls0_title_pane

0x2ceb,	// (0x00011e04) bg_popup_sub_pane_cp14_ParamLimits

0x85c2,	// (0x000176db) list_uniindi_pane_ParamLimits

0x85ce,	// (0x000176e7) uniindi_top_pane_ParamLimits

0x8669,	// (0x00017782) list_single_uniindi_pane_g1_ParamLimits

0x867c,	// (0x00017795) list_single_uniindi_pane_t1_ParamLimits

0xebed,	// (0x0001dd06) lc0_stat_clock_pane_ParamLimits

0xebed,	// (0x0001dd06) lc0_stat_clock_pane

0xebfa,	// (0x0001dd13) lc0_stat_indi_pane_g1_ParamLimits

0xebfa,	// (0x0001dd13) lc0_stat_indi_pane_g1

0xec07,	// (0x0001dd20) lc0_stat_indi_pane_g2_ParamLimits

0xec07,	// (0x0001dd20) lc0_stat_indi_pane_g2

0x0001,

0xfe01,	// (0x0001ef1a) lc0_stat_indi_pane_g_ParamLimits

0xfe01,	// (0x0001ef1a) lc0_stat_indi_pane_g

0xec14,	// (0x0001dd2d) lc0_uni_indicator_pane_ParamLimits

0xec14,	// (0x0001dd2d) lc0_uni_indicator_pane

0xa801,	// (0x0001991a) ls0_title_pane_g1_ParamLimits

0xa801,	// (0x0001991a) ls0_title_pane_g1

0xec21,	// (0x0001dd3a) ls0_title_pane_t1_ParamLimits

0xec21,	// (0x0001dd3a) ls0_title_pane_t1

0xec57,	// (0x0001dd70) lc0_uni_indicator_pane_g1_ParamLimits

0xec57,	// (0x0001dd70) lc0_uni_indicator_pane_g1

0xa815,	// (0x0001992e) lc0_stat_clock_pane_t1

0x1e1e,	// (0x00010f37) main_ai5_pane

0xa823,	// (0x0001993c) ai5_sk_pane_ParamLimits

0xa823,	// (0x0001993c) ai5_sk_pane

0xec69,	// (0x0001dd82) cell_ai5_widget_pane_ParamLimits

0xec69,	// (0x0001dd82) cell_ai5_widget_pane

0xa830,	// (0x00019949) aid_size_cell_widget_grid

0xa83d,	// (0x00019956) bg_ai5_widget_pane_ParamLimits

0xa83d,	// (0x00019956) bg_ai5_widget_pane

0xecfc,	// (0x0001de15) cell_ai5_widget_pane_g2

0xed10,	// (0x0001de29) cell_ai5_widget_pane_g3

0xed2a,	// (0x0001de43) cell_ai5_widget_pane_g4

0xed3a,	// (0x0001de53) cell_ai5_widget_pane_g5

0xed4a,	// (0x0001de63) cell_ai5_widget_pane_g6

0xed56,	// (0x0001de6f) cell_ai5_widget_pane_g7

0xedc2,	// (0x0001dedb) cell_ai5_widget_pane_t1_ParamLimits

0xedc2,	// (0x0001dedb) cell_ai5_widget_pane_t1

0xeddf,	// (0x0001def8) cell_ai5_widget_pane_t2_ParamLimits

0xeddf,	// (0x0001def8) cell_ai5_widget_pane_t2

0xedf7,	// (0x0001df10) cell_ai5_widget_pane_t3_ParamLimits

0xedf7,	// (0x0001df10) cell_ai5_widget_pane_t3

0xee0f,	// (0x0001df28) cell_ai5_widget_pane_t4_ParamLimits

0xee0f,	// (0x0001df28) cell_ai5_widget_pane_t4

0xee35,	// (0x0001df4e) cell_ai5_widget_pane_t5_ParamLimits

0xee35,	// (0x0001df4e) cell_ai5_widget_pane_t5

0xa877,	// (0x00019990) cell_ai5_widget_pane_t6_ParamLimits

0xa877,	// (0x00019990) cell_ai5_widget_pane_t6

0xa889,	// (0x000199a2) cell_ai5_widget_pane_t7_ParamLimits

0xa889,	// (0x000199a2) cell_ai5_widget_pane_t7

0xee54,	// (0x0001df6d) cell_ai5_widget_pane_t8_ParamLimits

0xee54,	// (0x0001df6d) cell_ai5_widget_pane_t8

0x000b,

0xfe21,	// (0x0001ef3a) cell_ai5_widget_pane_t_ParamLimits

0xfe21,	// (0x0001ef3a) cell_ai5_widget_pane_t

0xeed7,	// (0x0001dff0) grid_ai5_widget_pane

0x2ceb,	// (0x00011e04) highlight_cell_ai5_widget_pane_ParamLimits

0x2ceb,	// (0x00011e04) highlight_cell_ai5_widget_pane

0xeee3,	// (0x0001dffc) ai5_sk_left_pane

0xeeed,	// (0x0001e006) ai5_sk_middle_pane

0xeef7,	// (0x0001e010) ai5_sk_right_pane

0xa8a8,	// (0x000199c1) bg_ai5_widget_pane_g1_ParamLimits

0xa8a8,	// (0x000199c1) bg_ai5_widget_pane_g1

0xa8b4,	// (0x000199cd) bg_ai5_widget_pane_g2_ParamLimits

0xa8b4,	// (0x000199cd) bg_ai5_widget_pane_g2

0xa8c0,	// (0x000199d9) bg_ai5_widget_pane_g3_ParamLimits

0xa8c0,	// (0x000199d9) bg_ai5_widget_pane_g3

0xa8cc,	// (0x000199e5) bg_ai5_widget_pane_g4_ParamLimits

0xa8cc,	// (0x000199e5) bg_ai5_widget_pane_g4

0xa8d8,	// (0x000199f1) bg_ai5_widget_pane_g5_ParamLimits

0xa8d8,	// (0x000199f1) bg_ai5_widget_pane_g5

0xa8e4,	// (0x000199fd) bg_ai5_widget_pane_g6_ParamLimits

0xa8e4,	// (0x000199fd) bg_ai5_widget_pane_g6

0xa8f0,	// (0x00019a09) bg_ai5_widget_pane_g7_ParamLimits

0xa8f0,	// (0x00019a09) bg_ai5_widget_pane_g7

0xa8fc,	// (0x00019a15) bg_ai5_widget_pane_g8_ParamLimits

0xa8fc,	// (0x00019a15) bg_ai5_widget_pane_g8

0xa908,	// (0x00019a21) bg_ai5_widget_pane_g9_ParamLimits

0xa908,	// (0x00019a21) bg_ai5_widget_pane_g9

0x0008,

0xfe3a,	// (0x0001ef53) bg_ai5_widget_pane_g_ParamLimits

0xfe3a,	// (0x0001ef53) bg_ai5_widget_pane_g

0xa938,	// (0x00019a51) cell_shortcut_ai5_widget_pane_ParamLimits

0xa938,	// (0x00019a51) cell_shortcut_ai5_widget_pane

0xa949,	// (0x00019a62) bg_cell_shortcut_ai5_widget_pane

0x2451,	// (0x0001156a) cell_grid_ai5_widget_pane_g1

0x3ad5,	// (0x00012bee) highlight_cell_shortcut_ai5_widget_pane

0x4329,	// (0x00013442) ai5_sk_left_pane_g1

0xa951,	// (0x00019a6a) ai5_sk_left_pane_g2

0xa959,	// (0x00019a72) ai5_sk_left_pane_g3

0xa961,	// (0x00019a7a) ai5_sk_left_pane_g4

0x0003,

0xfe4d,	// (0x0001ef66) ai5_sk_left_pane_g

0xa969,	// (0x00019a82) ai5_sk_left_pane_t1

0x4331,	// (0x0001344a) ai5_sk_right_pane_g1

0xa977,	// (0x00019a90) ai5_sk_right_pane_g2

0xa97f,	// (0x00019a98) ai5_sk_right_pane_g3

0xa987,	// (0x00019aa0) ai5_sk_right_pane_g4

0x0003,

0xfe56,	// (0x0001ef6f) ai5_sk_right_pane_g

0xa98f,	// (0x00019aa8) ai5_sk_right_pane_t1

0x4331,	// (0x0001344a) ai5_sk_middle_pane_g1

0x4329,	// (0x00013442) ai5_sk_middle_pane_g2

0x4349,	// (0x00013462) ai5_sk_middle_pane_g3

0xa97f,	// (0x00019a98) ai5_sk_middle_pane_g4

0xa959,	// (0x00019a72) ai5_sk_middle_pane_g5

0xa99d,	// (0x00019ab6) ai5_sk_middle_pane_g6

0xef01,	// (0x0001e01a) ai5_sk_middle_pane_g7

0x0006,

0xfe5f,	// (0x0001ef78) ai5_sk_middle_pane_g

0x3e6a,	// (0x00012f83) aid_touch_area_size_lc0_ParamLimits

0x3e6a,	// (0x00012f83) aid_touch_area_size_lc0

0xe002,	// (0x0001d11b) cell_hwr_candidate_pane_t1_ParamLimits

0x3e84,	// (0x00012f9d) aid_touch_navi_pane

0x4139,	// (0x00013252) status_dt_navi_pane_ParamLimits

0x4139,	// (0x00013252) status_dt_navi_pane

0x4146,	// (0x0001325f) status_dt_sta_pane_ParamLimits

0x4146,	// (0x0001325f) status_dt_sta_pane

0xef09,	// (0x0001e022) dt_sta_controll_pane

0xef16,	// (0x0001e02f) dt_sta_indi_pane

0xef27,	// (0x0001e040) dt_sta_title_pane

0x2297,	// (0x000113b0) bg_dt_sta_indi_pane_ParamLimits

0x2297,	// (0x000113b0) bg_dt_sta_indi_pane

0xef3a,	// (0x0001e053) dt_sta_battery_pane

0xef42,	// (0x0001e05b) dt_sta_indi_pane_g1

0xef4b,	// (0x0001e064) dt_sta_indi_pane_g2

0xef54,	// (0x0001e06d) dt_sta_indi_pane_g3

0x0002,

0xfe6e,	// (0x0001ef87) dt_sta_indi_pane_g

0xef5d,	// (0x0001e076) dt_sta_signal_pane

0x2ceb,	// (0x00011e04) bg_dt_sta_title_pane_ParamLimits

0x2ceb,	// (0x00011e04) bg_dt_sta_title_pane

0xef66,	// (0x0001e07f) dt_sta_title_pane_g1

0xef6e,	// (0x0001e087) dt_sta_title_pane_t1_ParamLimits

0xef6e,	// (0x0001e087) dt_sta_title_pane_t1

0x1e1e,	// (0x00010f37) bg_dt_sta_control_pane

0xef83,	// (0x0001e09c) dt_sta_controll_pane_g1

0xef8c,	// (0x0001e0a5) bg_dt_sta_title_pane_g1

0xef95,	// (0x0001e0ae) bg_dt_sta_title_pane_g2

0xef9e,	// (0x0001e0b7) bg_dt_sta_title_pane_g3

0x0002,

0xfe75,	// (0x0001ef8e) bg_dt_sta_title_pane_g

0x6aa5,	// (0x00015bbe) bg_dt_sta_indi_pane_g1

0xefa7,	// (0x0001e0c0) dt_sta_signal_pane_g1

0xefaf,	// (0x0001e0c8) dt_sta_signal_pane_g2

0x0001,

0xfe7c,	// (0x0001ef95) dt_sta_signal_pane_g

0xa9a5,	// (0x00019abe) dt_sta_battery_pane_g1

0xa9ae,	// (0x00019ac7) dt_sta_battery_pane_t1

0x6aa5,	// (0x00015bbe) bg_dt_sta_control_pane_g1

0x35b3,	// (0x000126cc) fep_china_uni_eep_pane

0x35bb,	// (0x000126d4) fep_china_uni_entry_pane_ParamLimits

0x35cb,	// (0x000126e4) popup_fep_china_uni_window_g1_ParamLimits

0x35db,	// (0x000126f4) popup_fep_china_uni_window_g2_ParamLimits

0x35db,	// (0x000126f4) popup_fep_china_uni_window_g2

0x0001,

0xf6f8,	// (0x0001e811) popup_fep_china_uni_window_g_ParamLimits

0xf6f8,	// (0x0001e811) popup_fep_china_uni_window_g

0xa9bd,	// (0x00019ad6) fep_china_uni_eep_pane_g1

0xa9c5,	// (0x00019ade) fep_china_uni_eep_pane_t1

0xa7e2,	// (0x000198fb) aid_touch_area_size_smil_player

0x3fc1,	// (0x000130da) lc0_clock_pane

0x4193,	// (0x000132ac) status_pane_g5_ParamLimits

0x4193,	// (0x000132ac) status_pane_g5

0xd5fa,	// (0x0001c713) popup_keymap_window

0x415b,	// (0x00013274) status_icon_pane

0xed10,	// (0x0001de29) cell_ai5_widget_pane_g3_ParamLimits

0xed2a,	// (0x0001de43) cell_ai5_widget_pane_g4_ParamLimits

0xed3a,	// (0x0001de53) cell_ai5_widget_pane_g5_ParamLimits

0xed62,	// (0x0001de7b) cell_ai5_widget_pane_g8_ParamLimits

0xed62,	// (0x0001de7b) cell_ai5_widget_pane_g8

0xed76,	// (0x0001de8f) cell_ai5_widget_pane_g9_ParamLimits

0xed76,	// (0x0001de8f) cell_ai5_widget_pane_g9

0xed8a,	// (0x0001dea3) cell_ai5_widget_pane_g10_ParamLimits

0xed8a,	// (0x0001dea3) cell_ai5_widget_pane_g10

0xa9d4,	// (0x00019aed) status_icon_pane_g1

0x1e1e,	// (0x00010f37) bg_popup_sub_pane_cp13

0xa9dc,	// (0x00019af5) popup_keymap_window_t1

0x3db4,	// (0x00012ecd) control_pane_g6_ParamLimits

0x3db4,	// (0x00012ecd) control_pane_g6

0x3da7,	// (0x00012ec0) control_pane_g7_ParamLimits

0x3da7,	// (0x00012ec0) control_pane_g7

0x3d9a,	// (0x00012eb3) control_pane_g8_ParamLimits

0x3d9a,	// (0x00012eb3) control_pane_g8

0xef09,	// (0x0001e022) dt_sta_controll_pane_ParamLimits

0xef16,	// (0x0001e02f) dt_sta_indi_pane_ParamLimits

0xef27,	// (0x0001e040) dt_sta_title_pane_ParamLimits

0x2722,	// (0x0001183b) aid_size_touch_scroll_bar_cale

0xcd87,	// (0x0001bea0) popup_discreet_window_ParamLimits

0xcd87,	// (0x0001bea0) popup_discreet_window

0xcdeb,	// (0x0001bf04) popup_sk_window

0x4a05,	// (0x00013b1e) bg_popup_sub_pane_cp28_ParamLimits

0x4a05,	// (0x00013b1e) bg_popup_sub_pane_cp28

0xa9ea,	// (0x00019b03) popup_discreet_window_g1_ParamLimits

0xa9ea,	// (0x00019b03) popup_discreet_window_g1

0xaa0a,	// (0x00019b23) popup_discreet_window_t1_ParamLimits

0xaa0a,	// (0x00019b23) popup_discreet_window_t1

0xaa28,	// (0x00019b41) popup_discreet_window_t2_ParamLimits

0xaa28,	// (0x00019b41) popup_discreet_window_t2

0x0002,

0xfe81,	// (0x0001ef9a) popup_discreet_window_t_ParamLimits

0xfe81,	// (0x0001ef9a) popup_discreet_window_t

0xefb7,	// (0x0001e0d0) popup_sk_window_g1

0xefc0,	// (0x0001e0d9) popup_sk_window_g2

0x0001,

0xfe88,	// (0x0001efa1) popup_sk_window_g

0xefc9,	// (0x0001e0e2) popup_sk_window_t1

0xefd7,	// (0x0001e0f0) popup_sk_window_t1_copy1

0xecfc,	// (0x0001de15) cell_ai5_widget_pane_g2_ParamLimits

0xee66,	// (0x0001df7f) cell_ai5_widget_pane_t9_ParamLimits

0xee66,	// (0x0001df7f) cell_ai5_widget_pane_t9

0x1e1e,	// (0x00010f37) main_fep_fshwr2_pane

0xefe5,	// (0x0001e0fe) aid_fshwr2_btn_pane

0xeff1,	// (0x0001e10a) aid_fshwr2_syb_pane

0xf003,	// (0x0001e11c) aid_fshwr2_txt_pane

0xf00f,	// (0x0001e128) fshwr2_func_candi_pane

0xf023,	// (0x0001e13c) fshwr2_hwr_syb_pane

0xf035,	// (0x0001e14e) fshwr2_icf_pane

0x1e1e,	// (0x00010f37) fshwr2_icf_bg_pane

0xf05d,	// (0x0001e176) fshwr2_icf_pane_t1_ParamLimits

0xf05d,	// (0x0001e176) fshwr2_icf_pane_t1

0x34b9,	// (0x000125d2) fshwr2_func_candi_pane_g1

0xf075,	// (0x0001e18e) fshwr2_func_candi_row_pane_ParamLimits

0xf075,	// (0x0001e18e) fshwr2_func_candi_row_pane

0xf098,	// (0x0001e1b1) cell_fshwr2_syb_pane_ParamLimits

0xf098,	// (0x0001e1b1) cell_fshwr2_syb_pane

0xa7bb,	// (0x000198d4) fshwr2_hwr_syb_pane_g1_ParamLimits

0xa7bb,	// (0x000198d4) fshwr2_hwr_syb_pane_g1

0x1e1e,	// (0x00010f37) bg_popup_call_pane_cp01

0xf0b7,	// (0x0001e1d0) fshwr2_func_candi_cell_pane_ParamLimits

0xf0b7,	// (0x0001e1d0) fshwr2_func_candi_cell_pane

0x502d,	// (0x00014146) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x502d,	// (0x00014146) fshwr2_func_candi_cell_bg_pane

0xf0f6,	// (0x0001e20f) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xf0f6,	// (0x0001e20f) fshwr2_func_candi_cell_pane_g1

0xf116,	// (0x0001e22f) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xf116,	// (0x0001e22f) fshwr2_func_candi_cell_pane_t1

0x1e1e,	// (0x00010f37) bg_button_pane_cp08

0x3e24,	// (0x00012f3d) cell_fshwr2_syb_bg_pane

0xf129,	// (0x0001e242) cell_fshwr2_syb_bg_pane_g1

0xf13d,	// (0x0001e256) cell_fshwr2_syb_bg_pane_t1

0x2ceb,	// (0x00011e04) main_tmo_pane

0x54b9,	// (0x000145d2) uni_indicator_pane_g1_ParamLimits

0x54cd,	// (0x000145e6) uni_indicator_pane_g2_ParamLimits

0x54e2,	// (0x000145fb) uni_indicator_pane_g3_ParamLimits

0x54f7,	// (0x00014610) uni_indicator_pane_g4_ParamLimits

0x54f7,	// (0x00014610) uni_indicator_pane_g4

0x550b,	// (0x00014624) uni_indicator_pane_g5_ParamLimits

0x550b,	// (0x00014624) uni_indicator_pane_g5

0x550b,	// (0x00014624) uni_indicator_pane_g6_ParamLimits

0x550b,	// (0x00014624) uni_indicator_pane_g6

0xf8f7,	// (0x0001ea10) uni_indicator_pane_g_ParamLimits

0x81e4,	// (0x000172fd) popup_tmo_note_window_ParamLimits

0x81e4,	// (0x000172fd) popup_tmo_note_window

0x2ceb,	// (0x00011e04) fshwr2_bg_pane

0xf107,	// (0x0001e220) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xf107,	// (0x0001e220) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe8d,	// (0x0001efa6) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe8d,	// (0x0001efa6) fshwr2_func_candi_cell_pane_g

0x6aa5,	// (0x00015bbe) bg_popup_window_pane_cp01

0xf153,	// (0x0001e26c) bg_popup_window_pane_g1_cp01

0xaa7a,	// (0x00019b93) bg_popup_window_pane_cp22_ParamLimits

0xaa7a,	// (0x00019b93) bg_popup_window_pane_cp22

0xaa88,	// (0x00019ba1) listscroll_tmo_link_pane_ParamLimits

0xaa88,	// (0x00019ba1) listscroll_tmo_link_pane

0xaac8,	// (0x00019be1) popup_tmo_note_window_g1_ParamLimits

0xaac8,	// (0x00019be1) popup_tmo_note_window_g1

0xaad5,	// (0x00019bee) tmo_note_info_pane_ParamLimits

0xaad5,	// (0x00019bee) tmo_note_info_pane

0xf15c,	// (0x0001e275) list_tmo_note_info_pane_g1_ParamLimits

0xf15c,	// (0x0001e275) list_tmo_note_info_pane_g1

0xaaef,	// (0x00019c08) list_tmo_note_info_pane_g2_ParamLimits

0xaaef,	// (0x00019c08) list_tmo_note_info_pane_g2

0x0001,

0xfe92,	// (0x0001efab) list_tmo_note_info_pane_g_ParamLimits

0xfe92,	// (0x0001efab) list_tmo_note_info_pane_g

0xab0b,	// (0x00019c24) list_tmo_note_info_text_pane_ParamLimits

0xab0b,	// (0x00019c24) list_tmo_note_info_text_pane

0xab4d,	// (0x00019c66) list_tmo_link_pane

0xab5a,	// (0x00019c73) scroll_pane_cp20

0xab67,	// (0x00019c80) list_single_tmo_link_pane_ParamLimits

0xab67,	// (0x00019c80) list_single_tmo_link_pane

0xab77,	// (0x00019c90) list_single_tmo_link_pane_t1

0xab85,	// (0x00019c9e) list_tmo_note_info_text_pane_t1_ParamLimits

0xab85,	// (0x00019c9e) list_tmo_note_info_text_pane_t1

0x2f13,	// (0x0001202c) aid_size_touch_scroll_bar_cp01_ParamLimits

0x2f13,	// (0x0001202c) aid_size_touch_scroll_bar_cp01

0xc1fc,	// (0x0001b315) aid_size_touch_slider_marker

0xcdd7,	// (0x0001bef0) popup_settings_window_ParamLimits

0xcdd7,	// (0x0001bef0) popup_settings_window

0xc3a7,	// (0x0001b4c0) popup_candi_list_indi_window

0x3e84,	// (0x00012f9d) aid_touch_navi_pane_ParamLimits

0xe168,	// (0x0001d281) rs_clock_indi_pane

0xe171,	// (0x0001d28a) sctrl_sk_bottom_pane_ParamLimits

0xe182,	// (0x0001d29b) sctrl_sk_top_pane_ParamLimits

0xe26e,	// (0x0001d387) popup_fep_tooltip_window

0xa830,	// (0x00019949) aid_size_cell_widget_grid_ParamLimits

0xece8,	// (0x0001de01) cell_ai5_widget_pane_g1_ParamLimits

0xece8,	// (0x0001de01) cell_ai5_widget_pane_g1

0xed4a,	// (0x0001de63) cell_ai5_widget_pane_g6_ParamLimits

0xed56,	// (0x0001de6f) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfe06,	// (0x0001ef1f) cell_ai5_widget_pane_g_ParamLimits

0xfe06,	// (0x0001ef1f) cell_ai5_widget_pane_g

0xee95,	// (0x0001dfae) cell_ai5_widget_pane_t10_ParamLimits

0xee95,	// (0x0001dfae) cell_ai5_widget_pane_t10

0xeed7,	// (0x0001dff0) grid_ai5_widget_pane_ParamLimits

0xa914,	// (0x00019a2d) cell_contacts_ai5_widget_pane_ParamLimits

0xa914,	// (0x00019a2d) cell_contacts_ai5_widget_pane

0xaa3d,	// (0x00019b56) popup_discreet_window_t3_ParamLimits

0xaa3d,	// (0x00019b56) popup_discreet_window_t3

0xf04b,	// (0x0001e164) popup_fshwr2_char_preview_window_ParamLimits

0xf04b,	// (0x0001e164) popup_fshwr2_char_preview_window

0xf173,	// (0x0001e28c) tmo_note_info_pane_t1

0xf188,	// (0x0001e2a1) tmo_note_info_pane_t2

0xf19d,	// (0x0001e2b6) tmo_note_info_pane_t3

0xab29,	// (0x00019c42) tmo_note_info_pane_t4

0xab3b,	// (0x00019c54) tmo_note_info_pane_t5

0x0004,

0xfe97,	// (0x0001efb0) tmo_note_info_pane_t

0xab4d,	// (0x00019c66) list_tmo_link_pane_ParamLimits

0xab5a,	// (0x00019c73) scroll_pane_cp20_ParamLimits

0x1e1e,	// (0x00010f37) bg_popup_fep_char_preview_window_cp01

0xab9e,	// (0x00019cb7) popup_fshwr2_char_preview_window_t1

0xabac,	// (0x00019cc5) popup_candi_list_indi_window_g1

0xabb5,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane

0xabc1,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1

0xabd6,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2

0xabe2,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfea2,	// (0x0001efbb) cell_contacts_ai5_widget_pane_g

0xabee,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1

0x2ceb,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01

0xac63,	// (0x00019d7c) settings_container_pane

0x3ad5,	// (0x00012bee) listscroll_set_pane_copy1

0x5fea,	// (0x00015103) scroll_pane_cp121_copy1

0xac6f,	// (0x00019d88) set_content_pane_copy1

0xac77,	// (0x00019d90) aid_height_set_list_copy1_ParamLimits

0xac77,	// (0x00019d90) aid_height_set_list_copy1

0x56e2,	// (0x000147fb) aid_size_parent_copy1_ParamLimits

0x56e2,	// (0x000147fb) aid_size_parent_copy1

0xac83,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1_ParamLimits

0xac83,	// (0x00019d9c) button_value_adjust_pane_cp6_copy1

0x3e24,	// (0x00012f3d) list_highlight_pane_cp2_copy1_ParamLimits

0x3e24,	// (0x00012f3d) list_highlight_pane_cp2_copy1

0xac97,	// (0x00019db0) list_set_pane_copy1_ParamLimits

0xac97,	// (0x00019db0) list_set_pane_copy1

0xac00,	// (0x00019d19) main_pane_set_t1_copy1_ParamLimits

0xac00,	// (0x00019d19) main_pane_set_t1_copy1

0xac3a,	// (0x00019d53) main_pane_set_t2_copy1_ParamLimits

0xac3a,	// (0x00019d53) main_pane_set_t2_copy1

0xad25,	// (0x00019e3e) main_pane_set_t3_copy1

0xad33,	// (0x00019e4c) main_pane_set_t4_copy1

0xac57,	// (0x00019d70) set_content_pane_g1_copy1_ParamLimits

0xac57,	// (0x00019d70) set_content_pane_g1_copy1

0xad41,	// (0x00019e5a) setting_code_pane_copy1

0xad49,	// (0x00019e62) setting_slider_graphic_pane_copy1

0xad49,	// (0x00019e62) setting_slider_pane_copy1

0xad49,	// (0x00019e62) setting_text_pane_copy1

0xad49,	// (0x00019e62) setting_volume_pane_copy1

0xad51,	// (0x00019e6a) settings_code_pane_cp2_copy1

0xad59,	// (0x00019e72) settings_code_pane_cp_copy1_ParamLimits

0xad59,	// (0x00019e72) settings_code_pane_cp_copy1

0xf1b2,	// (0x0001e2cb) volume_set_pane_copy1

0xad6d,	// (0x00019e86) volume_set_pane_g10_copy1

0xad75,	// (0x00019e8e) volume_set_pane_g1_copy1

0xad7d,	// (0x00019e96) volume_set_pane_g2_copy1

0xad85,	// (0x00019e9e) volume_set_pane_g3_copy1

0xad8d,	// (0x00019ea6) volume_set_pane_g4_copy1

0xad95,	// (0x00019eae) volume_set_pane_g5_copy1

0xad9d,	// (0x00019eb6) volume_set_pane_g6_copy1

0xada5,	// (0x00019ebe) volume_set_pane_g7_copy1

0xadad,	// (0x00019ec6) volume_set_pane_g8_copy1

0xadb5,	// (0x00019ece) volume_set_pane_g9_copy1

0x1fef,	// (0x00011108) bg_set_opt_pane_cp_copy1_ParamLimits

0x1fef,	// (0x00011108) bg_set_opt_pane_cp_copy1

0xf1ba,	// (0x0001e2d3) setting_slider_pane_t1_copy1_ParamLimits

0xf1ba,	// (0x0001e2d3) setting_slider_pane_t1_copy1

0xf1d1,	// (0x0001e2ea) setting_slider_pane_t2_copy1_ParamLimits

0xf1d1,	// (0x0001e2ea) setting_slider_pane_t2_copy1

0xf1ea,	// (0x0001e303) setting_slider_pane_t3_copy1_ParamLimits

0xf1ea,	// (0x0001e303) setting_slider_pane_t3_copy1

0xcf07,	// (0x0001c020) slider_set_pane_copy1_ParamLimits

0xcf07,	// (0x0001c020) slider_set_pane_copy1

0x2e0e,	// (0x00011f27) set_opt_bg_pane_g1_copy2

0x2e16,	// (0x00011f2f) set_opt_bg_pane_g2_copy2

0xadbd,	// (0x00019ed6) set_opt_bg_pane_g3_copy2

0x2e26,	// (0x00011f3f) set_opt_bg_pane_g4_copy2

0x2e2e,	// (0x00011f47) set_opt_bg_pane_g5_copy2

0x2e36,	// (0x00011f4f) set_opt_bg_pane_g6_copy2

0xadc5,	// (0x00019ede) set_opt_bg_pane_g7_copy2

0xadcd,	// (0x00019ee6) set_opt_bg_pane_g8_copy2

0xadd5,	// (0x00019eee) set_opt_bg_pane_g9_copy2

0xdbfa,	// (0x0001cd13) aid_size_touch_slider_mark_copy1_ParamLimits

0xdbfa,	// (0x0001cd13) aid_size_touch_slider_mark_copy1

0x5818,	// (0x00014931) slider_set_pane_g1_copy1

0x5821,	// (0x0001493a) slider_set_pane_g2_copy1

0xdc1a,	// (0x0001cd33) slider_set_pane_g3_copy1_ParamLimits

0xdc1a,	// (0x0001cd33) slider_set_pane_g3_copy1

0xdc2e,	// (0x0001cd47) slider_set_pane_g4_copy1_ParamLimits

0xdc2e,	// (0x0001cd47) slider_set_pane_g4_copy1

0xdc46,	// (0x0001cd5f) slider_set_pane_g5_copy1_ParamLimits

0xdc46,	// (0x0001cd5f) slider_set_pane_g5_copy1

0xdc1a,	// (0x0001cd33) slider_set_pane_g6_copy1_ParamLimits

0xdc1a,	// (0x0001cd33) slider_set_pane_g6_copy1

0xf201,	// (0x0001e31a) slider_set_pane_g7_copy1_ParamLimits

0xf201,	// (0x0001e31a) slider_set_pane_g7_copy1

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp2_copy1

0x2031,	// (0x0001114a) setting_slider_graphic_pane_g1_copy1

0xf217,	// (0x0001e330) setting_slider_graphic_pane_t1_copy1

0xf226,	// (0x0001e33f) setting_slider_graphic_pane_t2_copy1

0xf235,	// (0x0001e34e) slider_set_pane_cp_copy1

0xade5,	// (0x00019efe) input_focus_pane_cp1_copy1

0xadee,	// (0x00019f07) list_set_text_pane_copy1

0xadf6,	// (0x00019f0f) setting_text_pane_g1_copy1

0xcc1d,	// (0x0001bd36) set_text_pane_t1_copy1

0xade5,	// (0x00019efe) input_focus_pane_cp2_copy1

0xadf6,	// (0x00019f0f) setting_code_pane_g1_copy1

0xae18,	// (0x00019f31) setting_code_pane_t1_copy1

0xa595,	// (0x000196ae) list_set_graphic_pane_copy1

0x1f0f,	// (0x00011028) bg_set_opt_pane_cp4_copy1

0x382f,	// (0x00012948) list_set_graphic_pane_g1_copy1_ParamLimits

0x382f,	// (0x00012948) list_set_graphic_pane_g1_copy1

0xae26,	// (0x00019f3f) list_set_graphic_pane_g2_copy1

0x3847,	// (0x00012960) list_set_graphic_pane_t1_copy1_ParamLimits

0x3847,	// (0x00012960) list_set_graphic_pane_t1_copy1

0x6aa5,	// (0x00015bbe) rs_clock_indi_pane_g1

0xae2e,	// (0x00019f47) rs_clock_indi_pane_t1

0xae3c,	// (0x00019f55) rs_indi_pane

0xae44,	// (0x00019f5d) rs_indi_pane_g1

0xae4d,	// (0x00019f66) rs_indi_pane_g2

0xabac,	// (0x00019cc5) rs_indi_pane_g3

0x0002,

0xfea9,	// (0x0001efc2) rs_indi_pane_g

0x3ad5,	// (0x00012bee) bg_popup_preview_window_pane_cp03

0xae56,	// (0x00019f6f) popup_fep_tooltip_window_t1

0x7890,	// (0x000169a9) popup_note2_window_g2_ParamLimits

0x7890,	// (0x000169a9) popup_note2_window_g2

0x0001,

0xfc3d,	// (0x0001ed56) popup_note2_window_g_ParamLimits

0xfc3d,	// (0x0001ed56) popup_note2_window_g

0x7e71,	// (0x00016f8a) bg_popup_sub_pane_cp11_ParamLimits

0x7e7e,	// (0x00016f97) cell_ai3_links_pane_g1_ParamLimits

0x7e95,	// (0x00016fae) cell_ai3_links_pane_t1

0xcc1d,	// (0x0001bd36) set_text_pane_t1_copy1_ParamLimits

0x39fc,	// (0x00012b15) cell_graphic_popup_pane_cp2_ParamLimits

0x39fc,	// (0x00012b15) cell_graphic_popup_pane_cp2

0xae64,	// (0x00019f7d) cell_graphic_popup_pane_g1_cp2

0x25d1,	// (0x000116ea) cell_graphic_popup_pane_g2_cp2

0xae6c,	// (0x00019f85) cell_graphic_popup_pane_g3_cp2

0xae74,	// (0x00019f8d) cell_graphic_popup_pane_t2_cp2

0x25e2,	// (0x000116fb) grid_highlight_pane_cp3_cp2

0x320b,	// (0x00012324) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x2ceb,	// (0x00011e04) main_tmo_pane_ParamLimits

0x81dc,	// (0x000172f5) popup_tmo_big_image_note_window

0xa86f,	// (0x00019988) cell_ai5_widget_list_pane

0xecdf,	// (0x0001ddf8) cell_ai5_widget_lrg_icon_pane

0xf173,	// (0x0001e28c) tmo_note_info_pane_t1_ParamLimits

0xf188,	// (0x0001e2a1) tmo_note_info_pane_t2_ParamLimits

0xf19d,	// (0x0001e2b6) tmo_note_info_pane_t3_ParamLimits

0xab29,	// (0x00019c42) tmo_note_info_pane_t4_ParamLimits

0xab3b,	// (0x00019c54) tmo_note_info_pane_t5_ParamLimits

0xfe97,	// (0x0001efb0) tmo_note_info_pane_t_ParamLimits

0xac63,	// (0x00019d7c) settings_container_pane_ParamLimits

0xaddd,	// (0x00019ef6) indicator_popup_pane_cp5

0xaddd,	// (0x00019ef6) indicator_popup_pane_cp6

0xa595,	// (0x000196ae) list_set_graphic_pane_copy1_ParamLimits

0x1e1e,	// (0x00010f37) bg_popup_window_pane_cp23

0xae82,	// (0x00019f9b) popup_tmo_big_image_note_window_g1

0xae8b,	// (0x00019fa4) popup_tmo_big_image_note_window_t1

0xae99,	// (0x00019fb2) popup_tmo_big_image_note_window_t2

0xaea7,	// (0x00019fc0) popup_tmo_big_image_note_window_t3

0x0002,

0xfeb0,	// (0x0001efc9) popup_tmo_big_image_note_window_t

0x6aa5,	// (0x00015bbe) cell_ai5_widget_lrg_icon_pane_g1

0xaeb5,	// (0x00019fce) cell_ai5_widget_lrg_icon_pane_t1

0xf23d,	// (0x0001e356) cell_ai5_widget_list_row_pane_ParamLimits

0xf23d,	// (0x0001e356) cell_ai5_widget_list_row_pane

0xf254,	// (0x0001e36d) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf254,	// (0x0001e36d) cell_ai5_widget_list_row_pane_g1

0xf261,	// (0x0001e37a) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf261,	// (0x0001e37a) cell_ai5_widget_list_row_pane_t1

0xf28f,	// (0x0001e3a8) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf28f,	// (0x0001e3a8) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeb7,	// (0x0001efd0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeb7,	// (0x0001efd0) cell_ai5_widget_list_row_pane_t

0x1e1e,	// (0x00010f37) main_fep_vtchi_ss_pane

0xaed0,	// (0x00019fe9) popup_fep_char_pre_window

0xaed8,	// (0x00019ff1) popup_fep_ituss_window

0xf2e7,	// (0x0001e400) popup_fep_vkbss_window

0xaf13,	// (0x0001a02c) grid_vkbss_keypad_pane_ParamLimits

0xaf13,	// (0x0001a02c) grid_vkbss_keypad_pane

0xaf23,	// (0x0001a03c) ituss_keypad_pane

0xf304,	// (0x0001e41d) aid_vkbss_key_offset_ParamLimits

0xf304,	// (0x0001e41d) aid_vkbss_key_offset

0xf310,	// (0x0001e429) cell_vkbss_key_pane_ParamLimits

0xf310,	// (0x0001e429) cell_vkbss_key_pane

0xaf32,	// (0x0001a04b) bg_cell_vkbss_key_g1_ParamLimits

0xaf32,	// (0x0001a04b) bg_cell_vkbss_key_g1

0xaf3e,	// (0x0001a057) cell_vkbss_key_3p_pane_ParamLimits

0xaf3e,	// (0x0001a057) cell_vkbss_key_3p_pane

0xaf74,	// (0x0001a08d) cell_vkbss_key_g1_ParamLimits

0xaf74,	// (0x0001a08d) cell_vkbss_key_g1

0xafaa,	// (0x0001a0c3) cell_vkbss_key_t1_ParamLimits

0xafaa,	// (0x0001a0c3) cell_vkbss_key_t1

0xf344,	// (0x0001e45d) cell_ituss_key_pane_ParamLimits

0xf344,	// (0x0001e45d) cell_ituss_key_pane

0xb01a,	// (0x0001a133) bg_cell_ituss_key_g1_ParamLimits

0xb01a,	// (0x0001a133) bg_cell_ituss_key_g1

0xb026,	// (0x0001a13f) cell_ituss_key_pane_g1_ParamLimits

0xb026,	// (0x0001a13f) cell_ituss_key_pane_g1

0xf355,	// (0x0001e46e) cell_ituss_key_pane_g2_ParamLimits

0xf355,	// (0x0001e46e) cell_ituss_key_pane_g2

0x0005,

0xfebe,	// (0x0001efd7) cell_ituss_key_pane_g_ParamLimits

0xfebe,	// (0x0001efd7) cell_ituss_key_pane_g

0xf3d9,	// (0x0001e4f2) cell_ituss_key_t1_ParamLimits

0xf3d9,	// (0x0001e4f2) cell_ituss_key_t1

0xf40f,	// (0x0001e528) cell_ituss_key_t2_ParamLimits

0xf40f,	// (0x0001e528) cell_ituss_key_t2

0xf440,	// (0x0001e559) cell_ituss_key_t3_ParamLimits

0xf440,	// (0x0001e559) cell_ituss_key_t3

0xf40f,	// (0x0001e528) cell_ituss_key_t4_ParamLimits

0xf40f,	// (0x0001e528) cell_ituss_key_t4

0x0004,

0xfecb,	// (0x0001efe4) cell_ituss_key_t_ParamLimits

0xfecb,	// (0x0001efe4) cell_ituss_key_t

0xb05c,	// (0x0001a175) cell_vkbss_key_3p_pane_g1

0xb054,	// (0x0001a16d) cell_vkbss_key_3p_pane_g2

0xb04c,	// (0x0001a165) cell_vkbss_key_3p_pane_g3

0x0002,

0xfed6,	// (0x0001efef) cell_vkbss_key_3p_pane_g

0x3ad5,	// (0x00012bee) bg_popup_fep_char_preview_window_cp02

0xb064,	// (0x0001a17d) popup_fep_char_pre_window_t1

0xeccc,	// (0x0001dde5) main_ai5_sk_pane

0xabb5,	// (0x00019cce) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xabc1,	// (0x00019cda) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xabd6,	// (0x00019cef) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xabe2,	// (0x00019cfb) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfea2,	// (0x0001efbb) cell_contacts_ai5_widget_pane_g_ParamLimits

0xabee,	// (0x00019d07) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x2ceb,	// (0x00011e04) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf483,	// (0x0001e59c) main_ai5_sk_pane_g1

0x484f,	// (0x00013968) popup_query_code_window_g1

0xf2d1,	// (0x0001e3ea) popup_fep_vkb_icf_pane

0xaeea,	// (0x0001a003) popup_fep_vtchi_icf_pane

0x3e24,	// (0x00012f3d) bg_icf_pane

0x3e24,	// (0x00012f3d) list_vkb_icf_pane

0xb072,	// (0x0001a18b) bg_icf_pane_cp01

0xb085,	// (0x0001a19e) vtchi_icf_list_pane

0xf4cc,	// (0x0001e5e5) list_vkb_icf_pane_t1_ParamLimits

0xf4cc,	// (0x0001e5e5) list_vkb_icf_pane_t1

0xb095,	// (0x0001a1ae) vtchi_icf_list_pane_t1_ParamLimits

0xb095,	// (0x0001a1ae) vtchi_icf_list_pane_t1

0xaed8,	// (0x00019ff1) popup_fep_ituss_window_ParamLimits

0xaeea,	// (0x0001a003) popup_fep_vtchi_icf_pane_ParamLimits

0xaf23,	// (0x0001a03c) ituss_keypad_pane_ParamLimits

0xf2fa,	// (0x0001e413) ituss_sks_pane

0x3e24,	// (0x00012f3d) bg_icf_pane_ParamLimits

0xf2b7,	// (0x0001e3d0) icf_edit_indi_pane_ParamLimits

0xf2b7,	// (0x0001e3d0) icf_edit_indi_pane

0x3e24,	// (0x00012f3d) list_vkb_icf_pane_ParamLimits

0xb072,	// (0x0001a18b) bg_icf_pane_cp01_ParamLimits

0xaec3,	// (0x00019fdc) icf_edit_indi_pane_cp01_ParamLimits

0xaec3,	// (0x00019fdc) icf_edit_indi_pane_cp01

0xb08d,	// (0x0001a1a6) vtchi_query_pane

0xa7bb,	// (0x000198d4) icf_edit_indi_pane_g1_ParamLimits

0xa7bb,	// (0x000198d4) icf_edit_indi_pane_g1

0xf4f7,	// (0x0001e610) icf_edit_indi_pane_g2_ParamLimits

0xf4f7,	// (0x0001e610) icf_edit_indi_pane_g2

0x0001,

0xff01,	// (0x0001f01a) icf_edit_indi_pane_g_ParamLimits

0xff01,	// (0x0001f01a) icf_edit_indi_pane_g

0xf50b,	// (0x0001e624) icf_edit_indi_pane_t1

0xb0ad,	// (0x0001a1c6) bg_input_focus_pane_cp042

0xb0b6,	// (0x0001a1cf) vtchi_button_pane

0xb0bf,	// (0x0001a1d8) vtchi_query_pane_t1

0xb0cd,	// (0x0001a1e6) vtchi_query_pane_t2

0xb0db,	// (0x0001a1f4) vtchi_query_pane_t3

0x0002,

0xfef0,	// (0x0001f009) vtchi_query_pane_t

0x1e1e,	// (0x00010f37) bg_button_pane_cp13

0xb0e9,	// (0x0001a202) vtchi_button_pane_g1

0xf4e5,	// (0x0001e5fe) ituss_sks_pane_g1

0xf4ee,	// (0x0001e607) ituss_sks_pane_g2

0x0001,

0xfef7,	// (0x0001f010) ituss_sks_pane_g

0xb0ff,	// (0x0001a218) ituss_sks_pane_t1

0xb0f1,	// (0x0001a20a) ituss_sks_pane_t2

0x0001,

0xfefc,	// (0x0001f015) ituss_sks_pane_t

0x65a0,	// (0x000156b9) indicator_nsta_pane_cp_g1

0x65a9,	// (0x000156c2) indicator_nsta_pane_cp_g2

0x65b1,	// (0x000156ca) indicator_nsta_pane_cp_g3

0x65b9,	// (0x000156d2) indicator_nsta_pane_cp_g4

0x65c1,	// (0x000156da) indicator_nsta_pane_cp_g5

0x65c9,	// (0x000156e2) indicator_nsta_pane_cp_g6

0x0005,

0xfa87,	// (0x0001eba0) indicator_nsta_pane_cp_g

0xe987,	// (0x0001daa0) cell_graphic2_pane_t2_ParamLimits

0xe987,	// (0x0001daa0) cell_graphic2_pane_t2

0x0001,

0xfd8d,	// (0x0001eea6) cell_graphic2_pane_t_ParamLimits

0xfd8d,	// (0x0001eea6) cell_graphic2_pane_t

0xe9b3,	// (0x0001dacc) cell_graphic2_control_pane_t1

0x3563,	// (0x0001267c) signal_pane_g3_ParamLimits

0x3563,	// (0x0001267c) signal_pane_g3

0x3574,	// (0x0001268d) signal_pane_g4_ParamLimits

0x3574,	// (0x0001268d) signal_pane_g4

0xf2a1,	// (0x0001e3ba) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xf2a1,	// (0x0001e3ba) cell_ai5_widget_list_row_pane_t3

0xb03a,	// (0x0001a153) cell_ituss_key_pane_t1_ParamLimits

0xb03a,	// (0x0001a153) cell_ituss_key_pane_t1

0x44c5,	// (0x000135de) form_field_data_wide_pane_vc_t2_ParamLimits

0x44c5,	// (0x000135de) form_field_data_wide_pane_vc_t2

0x44d7,	// (0x000135f0) form_field_data_wide_pane_vc_t3_ParamLimits

0x44d7,	// (0x000135f0) form_field_data_wide_pane_vc_t3

0x0002,

0xf7df,	// (0x0001e8f8) form_field_data_wide_pane_vc_t_ParamLimits

0xf7df,	// (0x0001e8f8) form_field_data_wide_pane_vc_t

0x628d,	// (0x000153a6) form_field_slider_wide_pane_vc_t3_ParamLimits

0x628d,	// (0x000153a6) form_field_slider_wide_pane_vc_t3

0x634b,	// (0x00015464) form_field_popup_wide_pane_vc_t2_ParamLimits

0x634b,	// (0x00015464) form_field_popup_wide_pane_vc_t2

0x6360,	// (0x00015479) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6360,	// (0x00015479) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa76,	// (0x0001eb8f) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa76,	// (0x0001eb8f) form_field_popup_wide_pane_vc_t

0xefe5,	// (0x0001e0fe) aid_fshwr2_btn_pane_ParamLimits

0xeff1,	// (0x0001e10a) aid_fshwr2_syb_pane_ParamLimits

0xf003,	// (0x0001e11c) aid_fshwr2_txt_pane_ParamLimits

0x2ceb,	// (0x00011e04) fshwr2_bg_pane_ParamLimits

0xf00f,	// (0x0001e128) fshwr2_func_candi_pane_ParamLimits

0xf023,	// (0x0001e13c) fshwr2_hwr_syb_pane_ParamLimits

0xf035,	// (0x0001e14e) fshwr2_icf_pane_ParamLimits

0xc815,	// (0x0001b92e) list_double_graphic_pane_vc_g4_ParamLimits

0xc815,	// (0x0001b92e) list_double_graphic_pane_vc_g4

0xf375,	// (0x0001e48e) cell_ituss_key_pane_g3_ParamLimits

0xf375,	// (0x0001e48e) cell_ituss_key_pane_g3

0xf471,	// (0x0001e58a) cell_ituss_key_t5_ParamLimits

0xf471,	// (0x0001e58a) cell_ituss_key_t5

0xf2e7,	// (0x0001e400) popup_fep_vkbss_window_ParamLimits

0xecd6,	// (0x0001ddef) aid_cell_ai5_quarter

0xf50b,	// (0x0001e624) icf_edit_indi_pane_t1_ParamLimits

0x233f,	// (0x00011458) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x233f,	// (0x00011458) aid_tch_indicator_popup_pane_cp2

0x2352,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x2352,	// (0x0001146b) aid_tch_query_popup_data_pane_cp2

0x47f7,	// (0x00013910) aid_tch_query_popup_pane_ParamLimits

0x47f7,	// (0x00013910) aid_tch_query_popup_pane

0x47f7,	// (0x00013910) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x47f7,	// (0x00013910) aid_tch_query_popup_data_pane_cp1

0x3e24,	// (0x00012f3d) cell_fshwr2_syb_bg_pane_ParamLimits

0xf129,	// (0x0001e242) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xf13d,	// (0x0001e256) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xf2d1,	// (0x0001e3ea) popup_fep_vkb_icf_pane_ParamLimits

0xeaa4,	// (0x0001dbbd) bg_popup_fep_char_preview_window_g10

0xed9e,	// (0x0001deb7) cell_ai5_widget_pane_g11_ParamLimits

0xed9e,	// (0x0001deb7) cell_ai5_widget_pane_g11

0xedaa,	// (0x0001dec3) cell_ai5_widget_pane_g12_ParamLimits

0xedaa,	// (0x0001dec3) cell_ai5_widget_pane_g12

0xedb6,	// (0x0001decf) cell_ai5_widget_pane_g13_ParamLimits

0xedb6,	// (0x0001decf) cell_ai5_widget_pane_g13

0xeeb3,	// (0x0001dfcc) cell_ai5_widget_pane_t11_ParamLimits

0xeeb3,	// (0x0001dfcc) cell_ai5_widget_pane_t11

0xeec5,	// (0x0001dfde) cell_ai5_widget_pane_t12_ParamLimits

0xeec5,	// (0x0001dfde) cell_ai5_widget_pane_t12

0xf381,	// (0x0001e49a) cell_ituss_key_pane_g4_ParamLimits

0xf381,	// (0x0001e49a) cell_ituss_key_pane_g4

0xf39d,	// (0x0001e4b6) cell_ituss_key_pane_g5_ParamLimits

0xf39d,	// (0x0001e4b6) cell_ituss_key_pane_g5

0xf3b9,	// (0x0001e4d2) cell_ituss_key_pane_g6_ParamLimits

0xf3b9,	// (0x0001e4d2) cell_ituss_key_pane_g6

0x4321,	// (0x0001343a) bg_icf_pane_g1

0xf48c,	// (0x0001e5a5) bg_icf_pane_g2

0xf494,	// (0x0001e5ad) bg_icf_pane_g3

0xf49c,	// (0x0001e5b5) bg_icf_pane_g4

0xf4a4,	// (0x0001e5bd) bg_icf_pane_g5

0xf4ac,	// (0x0001e5c5) bg_icf_pane_g6

0xf4b4,	// (0x0001e5cd) bg_icf_pane_g7

0xf4bc,	// (0x0001e5d5) bg_icf_pane_g8

0xf4c4,	// (0x0001e5dd) bg_icf_pane_g9

0x0008,

0xfedd,	// (0x0001eff6) bg_icf_pane_g

0xaf00,	// (0x0001a019) popup_hyb_candi_window_ParamLimits

0xaf00,	// (0x0001a019) popup_hyb_candi_window

0x4439,	// (0x00013552) bg_popup_sub_pane_cp01_ParamLimits

0x4439,	// (0x00013552) bg_popup_sub_pane_cp01

0xb10d,	// (0x0001a226) entry_hyb_candi_pane_ParamLimits

0xb10d,	// (0x0001a226) entry_hyb_candi_pane

0xb11c,	// (0x0001a235) grid_hyb_candi_pane_ParamLimits

0xb11c,	// (0x0001a235) grid_hyb_candi_pane

0xb131,	// (0x0001a24a) grid_hyb_phrase_pane_ParamLimits

0xb131,	// (0x0001a24a) grid_hyb_phrase_pane

0xb140,	// (0x0001a259) cell_hyb_candi_pane_ParamLimits

0xb140,	// (0x0001a259) cell_hyb_candi_pane

0xb158,	// (0x0001a271) cell_hyb_candi_scroll_pane

0x34b9,	// (0x000125d2) cell_hyb_candi_pane_g1

0xb161,	// (0x0001a27a) cell_hyb_candi_pane_t1

0xb16f,	// (0x0001a288) cell_hyb_phrase_pane

0x34b9,	// (0x000125d2) cell_hyb_phrase_pane_g1

0xb178,	// (0x0001a291) cell_hyb_phrase_pane_t1

0xb186,	// (0x0001a29f) entry_hyb_candi_pane_t1

0x3ad5,	// (0x00012bee) input_focus_pane_cp06

0xb194,	// (0x0001a2ad) cell_hyb_candi_scroll_pane_g1

0xb19c,	// (0x0001a2b5) cell_hyb_candi_scroll_pane_g1_aid

0xb1a4,	// (0x0001a2bd) cell_hyb_candi_scroll_pane_g2

0xb1ac,	// (0x0001a2c5) cell_hyb_candi_scroll_pane_g2_aid

0xb1b4,	// (0x0001a2cd) cell_hyb_candi_scroll_pane_g3

0xb1bc,	// (0x0001a2d5) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pqp_av_qvga_prt_Small

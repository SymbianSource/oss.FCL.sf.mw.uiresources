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

#include "aknlayoutscalable_abrw_pvl4_av_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00014261 };

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
0x961f,	// (0x0001d880) Screen

0x962b,	// (0x0001d88c) application_window_ParamLimits

0x962b,	// (0x0001d88c) application_window

0xb8e0,	// (0x0001fb41) screen_g1

0x8b82,	// (0x0001cde3) area_bottom_pane_ParamLimits

0x8b82,	// (0x0001cde3) area_bottom_pane

0xd40a,	// (0x0002166b) area_top_pane_ParamLimits

0xd40a,	// (0x0002166b) area_top_pane

0xe24b,	// (0x000224ac) main_pane_ParamLimits

0xe24b,	// (0x000224ac) main_pane

0xb8ea,	// (0x0001fb4b) misc_graphics

0xac09,	// (0x0001ee6a) battery_pane_ParamLimits

0xac09,	// (0x0001ee6a) battery_pane

0x229c,	// (0x000164fd) bg_status_flat_pane_g8

0x22a4,	// (0x00016505) bg_status_flat_pane_g9

0x1597,	// (0x000157f8) context_pane_ParamLimits

0x1597,	// (0x000157f8) context_pane

0xad80,	// (0x0001efe1) navi_pane_ParamLimits

0xad80,	// (0x0001efe1) navi_pane

0xae0a,	// (0x0001f06b) signal_pane_ParamLimits

0xae0a,	// (0x0001f06b) signal_pane

0x0008,

0xf875,	// (0x00023ad6) bg_status_flat_pane_g

0xae9a,	// (0x0001f0fb) status_pane_g1_ParamLimits

0xae9a,	// (0x0001f0fb) status_pane_g1

0xaeb0,	// (0x0001f111) status_pane_g2_ParamLimits

0xaeb0,	// (0x0001f111) status_pane_g2

0x17d8,	// (0x00015a39) status_pane_g3_ParamLimits

0x17d8,	// (0x00015a39) status_pane_g3

0x0004,

0xf7a1,	// (0x00023a02) status_pane_g_ParamLimits

0xf7a1,	// (0x00023a02) status_pane_g

0xaebc,	// (0x0001f11d) title_pane_ParamLimits

0xaebc,	// (0x0001f11d) title_pane

0xaf1f,	// (0x0001f180) uni_indicator_pane_ParamLimits

0xaf1f,	// (0x0001f180) uni_indicator_pane

0x0db0,	// (0x00015011) bg_list_pane_ParamLimits

0x0db0,	// (0x00015011) bg_list_pane

0xa429,	// (0x0001e68a) find_pane

0xa431,	// (0x0001e692) listscroll_app_pane_ParamLimits

0xa431,	// (0x0001e692) listscroll_app_pane

0x0de4,	// (0x00015045) listscroll_form_pane

0xa441,	// (0x0001e6a2) listscroll_gen_pane_ParamLimits

0xa441,	// (0x0001e6a2) listscroll_gen_pane

0x0e00,	// (0x00015061) listscroll_set_pane

0x2e64,	// (0x000170c5) main_idle_act_pane

0x0a90,	// (0x00014cf1) main_idle_trad_pane

0x0a90,	// (0x00014cf1) main_list_empty_pane

0x0e1a,	// (0x0001507b) main_midp_pane

0x0e26,	// (0x00015087) main_pane_g1_ParamLimits

0x0e26,	// (0x00015087) main_pane_g1

0xa463,	// (0x0001e6c4) popup_ai_message_window_ParamLimits

0xa463,	// (0x0001e6c4) popup_ai_message_window

0xa503,	// (0x0001e764) popup_fep_china_uni_window_ParamLimits

0xa503,	// (0x0001e764) popup_fep_china_uni_window

0x0f50,	// (0x000151b1) popup_fep_japan_candidate_window_ParamLimits

0x0f50,	// (0x000151b1) popup_fep_japan_candidate_window

0x0f7a,	// (0x000151db) popup_fep_japan_predictive_window_ParamLimits

0x0f7a,	// (0x000151db) popup_fep_japan_predictive_window

0xa563,	// (0x0001e7c4) popup_find_window

0xa580,	// (0x0001e7e1) popup_grid_graphic_window_ParamLimits

0xa580,	// (0x0001e7e1) popup_grid_graphic_window

0x0feb,	// (0x0001524c) popup_large_graphic_colour_window

0xa624,	// (0x0001e885) popup_menu_window_ParamLimits

0xa624,	// (0x0001e885) popup_menu_window

0xa814,	// (0x0001ea75) popup_note_image_window

0xa7d4,	// (0x0001ea35) popup_note_wait_window_ParamLimits

0xa7d4,	// (0x0001ea35) popup_note_wait_window

0xa82c,	// (0x0001ea8d) popup_note_window_ParamLimits

0xa82c,	// (0x0001ea8d) popup_note_window

0xa8da,	// (0x0001eb3b) popup_query_code_window_ParamLimits

0xa8da,	// (0x0001eb3b) popup_query_code_window

0x1257,	// (0x000154b8) popup_query_data_code_window_ParamLimits

0x1257,	// (0x000154b8) popup_query_data_code_window

0xa91a,	// (0x0001eb7b) popup_query_data_window_ParamLimits

0xa91a,	// (0x0001eb7b) popup_query_data_window

0xa9ae,	// (0x0001ec0f) popup_query_sat_info_window_ParamLimits

0xa9ae,	// (0x0001ec0f) popup_query_sat_info_window

0xaa59,	// (0x0001ecba) popup_snote_single_graphic_window_ParamLimits

0xaa59,	// (0x0001ecba) popup_snote_single_graphic_window

0xaa59,	// (0x0001ecba) popup_snote_single_text_window_ParamLimits

0xaa59,	// (0x0001ecba) popup_snote_single_text_window

0x12f2,	// (0x00015553) popup_sub_window_general

0x1438,	// (0x00015699) popup_window_general_ParamLimits

0x1438,	// (0x00015699) popup_window_general

0x1451,	// (0x000156b2) power_save_pane

0x8d77,	// (0x0001cfd8) control_pane_g1_ParamLimits

0x8d77,	// (0x0001cfd8) control_pane_g1

0x8da0,	// (0x0001d001) control_pane_g2_ParamLimits

0x8da0,	// (0x0001d001) control_pane_g2

0x0d51,	// (0x00014fb2) control_pane_g3_ParamLimits

0x0d51,	// (0x00014fb2) control_pane_g3

0x0007,

0xf789,	// (0x000239ea) control_pane_g_ParamLimits

0xf789,	// (0x000239ea) control_pane_g

0x8ddb,	// (0x0001d03c) control_pane_t1_ParamLimits

0x8ddb,	// (0x0001d03c) control_pane_t1

0x8e39,	// (0x0001d09a) control_pane_t2_ParamLimits

0x8e39,	// (0x0001d09a) control_pane_t2

0x0002,

0xf79a,	// (0x000239fb) control_pane_t_ParamLimits

0xf79a,	// (0x000239fb) control_pane_t

0x0c72,	// (0x00014ed3) navi_navi_volume_pane_cp1

0x0c7b,	// (0x00014edc) status_small_icon_pane

0x0c83,	// (0x00014ee4) status_small_pane_g1_ParamLimits

0x0c83,	// (0x00014ee4) status_small_pane_g1

0x0cb7,	// (0x00014f18) status_small_pane_g2_ParamLimits

0x0cb7,	// (0x00014f18) status_small_pane_g2

0x0cc3,	// (0x00014f24) status_small_pane_g3_ParamLimits

0x0cc3,	// (0x00014f24) status_small_pane_g3

0x0ccf,	// (0x00014f30) status_small_pane_g4_ParamLimits

0x0ccf,	// (0x00014f30) status_small_pane_g4

0x0cdb,	// (0x00014f3c) status_small_pane_g5_ParamLimits

0x0cdb,	// (0x00014f3c) status_small_pane_g5

0x0cea,	// (0x00014f4b) status_small_pane_g6_ParamLimits

0x0cea,	// (0x00014f4b) status_small_pane_g6

0x0007,

0xf778,	// (0x000239d9) status_small_pane_g_ParamLimits

0xf778,	// (0x000239d9) status_small_pane_g

0x0d1a,	// (0x00014f7b) status_small_pane_t1

0x0d3d,	// (0x00014f9e) status_small_wait_pane_ParamLimits

0x0d3d,	// (0x00014f9e) status_small_wait_pane

0xa13d,	// (0x0001e39e) aid_levels_signal_ParamLimits

0xa13d,	// (0x0001e39e) aid_levels_signal

0xa155,	// (0x0001e3b6) signal_pane_g1_ParamLimits

0xa155,	// (0x0001e3b6) signal_pane_g1

0xa170,	// (0x0001e3d1) signal_pane_g2_ParamLimits

0xa170,	// (0x0001e3d1) signal_pane_g2

0x0003,

0xf709,	// (0x0002396a) signal_pane_g_ParamLimits

0xf709,	// (0x0002396a) signal_pane_g

0xe0a2,	// (0x00022303) context_pane_g1

0x963b,	// (0x0001d89c) title_pane_g1

0x9666,	// (0x0001d8c7) title_pane_t1

0xb90c,	// (0x0001fb6d) title_pane_t2

0xb932,	// (0x0001fb93) title_pane_t3

0x0002,

0xf55d,	// (0x000237be) title_pane_t

0xaf47,	// (0x0001f1a8) aid_levels_battery_ParamLimits

0xaf47,	// (0x0001f1a8) aid_levels_battery

0xaf63,	// (0x0001f1c4) battery_pane_g1_ParamLimits

0xaf63,	// (0x0001f1c4) battery_pane_g1

0xaf80,	// (0x0001f1e1) battery_pane_g2_ParamLimits

0xaf80,	// (0x0001f1e1) battery_pane_g2

0x0001,

0xf7ac,	// (0x00023a0d) battery_pane_g_ParamLimits

0xf7ac,	// (0x00023a0d) battery_pane_g

0xb253,	// (0x0001f4b4) uni_indicator_pane_g1

0xb26a,	// (0x0001f4cb) uni_indicator_pane_g2

0xb280,	// (0x0001f4e1) uni_indicator_pane_g3

0x0005,

0xf91d,	// (0x00023b7e) uni_indicator_pane_g

0x08fe,	// (0x00014b5f) navi_icon_pane_ParamLimits

0x08fe,	// (0x00014b5f) navi_icon_pane

0x0845,	// (0x00014aa6) navi_midp_pane

0x091a,	// (0x00014b7b) navi_navi_pane

0x0924,	// (0x00014b85) navi_text_pane_ParamLimits

0x0924,	// (0x00014b85) navi_text_pane

0xb8e0,	// (0x0001fb41) status_small_wait_pane_g1

0xd70c,	// (0x0002196d) status_small_wait_pane_g2

0x0001,

0xf918,	// (0x00023b79) status_small_wait_pane_g

0xb1ba,	// (0x0001f41b) navi_navi_icon_text_pane

0xb1c2,	// (0x0001f423) navi_navi_pane_g1_ParamLimits

0xb1c2,	// (0x0001f423) navi_navi_pane_g1

0xb1d4,	// (0x0001f435) navi_navi_pane_g2_ParamLimits

0xb1d4,	// (0x0001f435) navi_navi_pane_g2

0x0001,

0xf8e6,	// (0x00023b47) navi_navi_pane_g_ParamLimits

0xf8e6,	// (0x00023b47) navi_navi_pane_g

0x2925,	// (0x00016b86) navi_navi_tabs_pane

0xb1e6,	// (0x0001f447) navi_navi_text_pane

0xb1ba,	// (0x0001f41b) navi_navi_volume_pane

0xb1a8,	// (0x0001f409) navi_text_pane_t1

0xb19c,	// (0x0001f3fd) navi_icon_pane_g1

0x281c,	// (0x00016a7d) navi_navi_text_pane_t1

0x90a0,	// (0x0001d301) navi_navi_volume_pane_g1

0x90a8,	// (0x0001d309) volume_small_pane

0xb0e4,	// (0x0001f345) navi_navi_icon_text_pane_g1

0xb0ec,	// (0x0001f34d) navi_navi_icon_text_pane_t1

0x091a,	// (0x00014b7b) navi_tabs_2_long_pane

0x091a,	// (0x00014b7b) navi_tabs_2_pane

0x091a,	// (0x00014b7b) navi_tabs_3_long_pane

0x091a,	// (0x00014b7b) navi_tabs_3_pane

0x091a,	// (0x00014b7b) navi_tabs_4_pane

0x9080,	// (0x0001d2e1) tabs_2_active_pane_ParamLimits

0x9080,	// (0x0001d2e1) tabs_2_active_pane

0x9090,	// (0x0001d2f1) tabs_2_passive_pane_ParamLimits

0x9090,	// (0x0001d2f1) tabs_2_passive_pane

0x904e,	// (0x0001d2af) tabs_3_active_pane_ParamLimits

0x904e,	// (0x0001d2af) tabs_3_active_pane

0x905e,	// (0x0001d2bf) tabs_3_passive_pane_ParamLimits

0x905e,	// (0x0001d2bf) tabs_3_passive_pane

0x906f,	// (0x0001d2d0) tabs_3_passive_pane_cp_ParamLimits

0x906f,	// (0x0001d2d0) tabs_3_passive_pane_cp

0x900a,	// (0x0001d26b) tabs_4_active_pane_ParamLimits

0x900a,	// (0x0001d26b) tabs_4_active_pane

0x901b,	// (0x0001d27c) tabs_4_passive_pane_ParamLimits

0x901b,	// (0x0001d27c) tabs_4_passive_pane

0x902c,	// (0x0001d28d) tabs_4_passive_pane_cp_ParamLimits

0x902c,	// (0x0001d28d) tabs_4_passive_pane_cp

0x903d,	// (0x0001d29e) tabs_4_passive_pane_cp2_ParamLimits

0x903d,	// (0x0001d29e) tabs_4_passive_pane_cp2

0x8fe6,	// (0x0001d247) tabs_2_long_active_pane_ParamLimits

0x8fe6,	// (0x0001d247) tabs_2_long_active_pane

0x8ff8,	// (0x0001d259) tabs_2_long_passive_pane_ParamLimits

0x8ff8,	// (0x0001d259) tabs_2_long_passive_pane

0x8f9b,	// (0x0001d1fc) tabs_3_long_active_pane_ParamLimits

0x8f9b,	// (0x0001d1fc) tabs_3_long_active_pane

0x8fb4,	// (0x0001d215) tabs_3_long_passive_pane_ParamLimits

0x8fb4,	// (0x0001d215) tabs_3_long_passive_pane

0x8fcd,	// (0x0001d22e) tabs_3_long_passive_pane_cp_ParamLimits

0x8fcd,	// (0x0001d22e) tabs_3_long_passive_pane_cp

0xe9c8,	// (0x00022c29) volume_small_pane_g1

0x8f4a,	// (0x0001d1ab) volume_small_pane_g2

0x8f53,	// (0x0001d1b4) volume_small_pane_g3

0x8f5c,	// (0x0001d1bd) volume_small_pane_g4

0x8f65,	// (0x0001d1c6) volume_small_pane_g5

0x8f6e,	// (0x0001d1cf) volume_small_pane_g6

0x8f77,	// (0x0001d1d8) volume_small_pane_g7

0x8f80,	// (0x0001d1e1) volume_small_pane_g8

0x8f89,	// (0x0001d1ea) volume_small_pane_g9

0x8f92,	// (0x0001d1f3) volume_small_pane_g10

0x0009,

0xf8b2,	// (0x00023b13) volume_small_pane_g

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp2_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp2

0x96f2,	// (0x0001d953) tabs_3_active_pane_g1

0x96fa,	// (0x0001d95b) tabs_3_active_pane_t1

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp2_ParamLimits

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp2

0x96f2,	// (0x0001d953) tabs_3_passive_pane_g1

0x96fa,	// (0x0001d95b) tabs_3_passive_pane_t1

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp3_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp3

0x970c,	// (0x0001d96d) tabs_4_active_pane_g1

0x9714,	// (0x0001d975) tabs_4_active_pane_t1

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp3_ParamLimits

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp3

0x970c,	// (0x0001d96d) tabs_4_1_passive_pane_g1

0x9714,	// (0x0001d975) tabs_4_1_passive_pane_t1

0x0e1a,	// (0x0001507b) list_highlight_pane_cp2

0xb327,	// (0x0001f588) list_set_pane_ParamLimits

0xb327,	// (0x0001f588) list_set_pane

0xb3ef,	// (0x0001f650) main_pane_set_t1_ParamLimits

0xb3ef,	// (0x0001f650) main_pane_set_t1

0xb40f,	// (0x0001f670) main_pane_set_t2_ParamLimits

0xb40f,	// (0x0001f670) main_pane_set_t2

0xb423,	// (0x0001f684) main_pane_set_t3_ParamLimits

0xb423,	// (0x0001f684) main_pane_set_t3

0xb437,	// (0x0001f698) main_pane_set_t4_ParamLimits

0xb437,	// (0x0001f698) main_pane_set_t4

0x0003,

0xf982,	// (0x00023be3) main_pane_set_t_ParamLimits

0xf982,	// (0x00023be3) main_pane_set_t

0xb44b,	// (0x0001f6ac) setting_code_pane

0x2fb8,	// (0x00017219) setting_slider_graphic_pane

0x2fb8,	// (0x00017219) setting_slider_pane

0x2fb8,	// (0x00017219) setting_text_pane

0x2fb8,	// (0x00017219) setting_volume_pane

0xe35a,	// (0x000225bb) volume_set_pane

0xb952,	// (0x0001fbb3) bg_set_opt_pane_cp

0xe364,	// (0x000225c5) setting_slider_pane_t1

0xe37d,	// (0x000225de) setting_slider_pane_t2

0xe397,	// (0x000225f8) setting_slider_pane_t3

0x0002,

0xf564,	// (0x000237c5) setting_slider_pane_t

0xe3af,	// (0x00022610) slider_set_pane

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp2

0xb960,	// (0x0001fbc1) setting_slider_graphic_pane_g1

0xe3c5,	// (0x00022626) setting_slider_graphic_pane_t1

0xe3d5,	// (0x00022636) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x000237cc) setting_slider_graphic_pane_t

0xe3e5,	// (0x00022646) slider_set_pane_cp

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp1

0x2e4b,	// (0x000170ac) list_set_text_pane

0xb8e0,	// (0x0001fb41) setting_text_pane_g1

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp2

0xb8e0,	// (0x0001fb41) setting_code_pane_g1

0xb969,	// (0x0001fbca) setting_code_pane_t1

0xb977,	// (0x0001fbd8) set_text_pane_t1_ParamLimits

0xb977,	// (0x0001fbd8) set_text_pane_t1

0xdb95,	// (0x00021df6) set_opt_bg_pane_g1

0xdb9d,	// (0x00021dfe) set_opt_bg_pane_g2

0x2e23,	// (0x00017084) set_opt_bg_pane_g3

0xdbad,	// (0x00021e0e) set_opt_bg_pane_g4

0xdbb5,	// (0x00021e16) set_opt_bg_pane_g5

0xdbbd,	// (0x00021e1e) set_opt_bg_pane_g6

0x2e2d,	// (0x0001708e) set_opt_bg_pane_g7

0x2e37,	// (0x00017098) set_opt_bg_pane_g8

0x2e41,	// (0x000170a2) set_opt_bg_pane_g9

0x0008,

0xf96f,	// (0x00023bd0) set_opt_bg_pane_g

0x2e16,	// (0x00017077) slider_set_pane_g1

0xea49,	// (0x00022caa) slider_set_pane_g2

0x0006,

0xf960,	// (0x00023bc1) slider_set_pane_g

0xe9d1,	// (0x00022c32) volume_set_pane_g1

0xe9db,	// (0x00022c3c) volume_set_pane_g2

0xe9e5,	// (0x00022c46) volume_set_pane_g3

0xe9ef,	// (0x00022c50) volume_set_pane_g4

0xe9f9,	// (0x00022c5a) volume_set_pane_g5

0xea03,	// (0x00022c64) volume_set_pane_g6

0xea0d,	// (0x00022c6e) volume_set_pane_g7

0xea17,	// (0x00022c78) volume_set_pane_g8

0xea21,	// (0x00022c82) volume_set_pane_g9

0xea2b,	// (0x00022c8c) volume_set_pane_g10

0x0009,

0xf938,	// (0x00023b99) volume_set_pane_g

0x9726,	// (0x0001d987) indicator_pane_ParamLimits

0x9726,	// (0x0001d987) indicator_pane

0x9752,	// (0x0001d9b3) main_idle_pane_g2_ParamLimits

0x9752,	// (0x0001d9b3) main_idle_pane_g2

0x978a,	// (0x0001d9eb) main_pane_idle_g1_ParamLimits

0x978a,	// (0x0001d9eb) main_pane_idle_g1

0xb991,	// (0x0001fbf2) popup_clock_digital_analogue_window_ParamLimits

0xb991,	// (0x0001fbf2) popup_clock_digital_analogue_window

0x97b8,	// (0x0001da19) soft_indicator_pane_ParamLimits

0x97b8,	// (0x0001da19) soft_indicator_pane

0x97d4,	// (0x0001da35) wallpaper_pane_ParamLimits

0x97d4,	// (0x0001da35) wallpaper_pane

0xb8e0,	// (0x0001fb41) wallpaper_pane_g1

0x97e6,	// (0x0001da47) indicator_pane_g1_ParamLimits

0x97e6,	// (0x0001da47) indicator_pane_g1

0x32e7,	// (0x00017548) navi_navi_icon_text_pane_srt_g1

0xb9bf,	// (0x0001fc20) soft_indicator_pane_t1

0xd49e,	// (0x000216ff) aid_ps_area_pane

0x97ff,	// (0x0001da60) aid_ps_clock_pane

0xd4af,	// (0x00021710) aid_ps_indicator_pane

0xd4bb,	// (0x0002171c) indicator_ps_pane_ParamLimits

0xd4bb,	// (0x0002171c) indicator_ps_pane

0xd4ca,	// (0x0002172b) power_save_pane_g1_ParamLimits

0xd4ca,	// (0x0002172b) power_save_pane_g1

0xd4d6,	// (0x00021737) power_save_pane_g2_ParamLimits

0xd4d6,	// (0x00021737) power_save_pane_g2

0xd3ea,	// (0x0002164b) aid_navinavi_width_pane

0xd49e,	// (0x000216ff) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x000237d1) power_save_pane_g_ParamLimits

0xf570,	// (0x000237d1) power_save_pane_g

0xd4e4,	// (0x00021745) power_save_pane_t1_ParamLimits

0xd4e4,	// (0x00021745) power_save_pane_t1

0x97ff,	// (0x0001da60) aid_ps_clock_pane_ParamLimits

0xd4af,	// (0x00021710) aid_ps_indicator_pane_ParamLimits

0xd4f6,	// (0x00021757) power_save_pane_t4_ParamLimits

0xd4f6,	// (0x00021757) power_save_pane_t4

0x0001,

0xf575,	// (0x000237d6) power_save_pane_t_ParamLimits

0xf575,	// (0x000237d6) power_save_pane_t

0xd520,	// (0x00021781) power_save_t3_ParamLimits

0xd520,	// (0x00021781) power_save_t3

0xd50b,	// (0x0002176c) power_save_t2_ParamLimits

0xd50b,	// (0x0002176c) power_save_t2

0xd535,	// (0x00021796) indicator_ps_pane_g1

0x980d,	// (0x0001da6e) ai_gene_pane_ParamLimits

0x980d,	// (0x0001da6e) ai_gene_pane

0x9824,	// (0x0001da85) ai_links_pane_ParamLimits

0x9824,	// (0x0001da85) ai_links_pane

0x983c,	// (0x0001da9d) indicator_pane_cp1_ParamLimits

0x983c,	// (0x0001da9d) indicator_pane_cp1

0x984b,	// (0x0001daac) main_pane_idle_g1_cp_ParamLimits

0x984b,	// (0x0001daac) main_pane_idle_g1_cp

0xd53e,	// (0x0002179f) popup_ai_links_title_window

0x9863,	// (0x0001dac4) soft_indicator_pane_cp1_ParamLimits

0x9863,	// (0x0001dac4) soft_indicator_pane_cp1

0x2bd4,	// (0x00016e35) ai_links_pane_g1

0x2bdd,	// (0x00016e3e) grid_ai_links_pane

0xb24a,	// (0x0001f4ab) ai_gene_pane_1

0x2bc2,	// (0x00016e23) ai_gene_pane_2

0x2bcb,	// (0x00016e2c) list_highlight_pane_cp4

0xb226,	// (0x0001f487) cell_ai_link_pane_ParamLimits

0xb226,	// (0x0001f487) cell_ai_link_pane

0x2b91,	// (0x00016df2) cell_ai_link_pane_g1

0xd70c,	// (0x0002196d) cell_ai_link_pane_g2

0x0001,

0xf913,	// (0x00023b74) cell_ai_link_pane_g

0xb8ea,	// (0x0001fb4b) grid_highlight_cp2

0xb8ea,	// (0x0001fb4b) bg_popup_sub_pane_cp1

0xd555,	// (0x000217b6) popup_ai_links_title_window_t1

0x2add,	// (0x00016d3e) ai_gene_pane_1_g1_ParamLimits

0x2add,	// (0x00016d3e) ai_gene_pane_1_g1

0x2ae9,	// (0x00016d4a) ai_gene_pane_1_g2_ParamLimits

0x2ae9,	// (0x00016d4a) ai_gene_pane_1_g2

0x0001,

0xf909,	// (0x00023b6a) ai_gene_pane_1_g_ParamLimits

0xf909,	// (0x00023b6a) ai_gene_pane_1_g

0x2af6,	// (0x00016d57) ai_gene_pane_1_t1_ParamLimits

0x2af6,	// (0x00016d57) ai_gene_pane_1_t1

0x2b2a,	// (0x00016d8b) grid_ai_soft_ind_pane

0x2ac8,	// (0x00016d29) ai_gene_pane_2_t1_ParamLimits

0x2ac8,	// (0x00016d29) ai_gene_pane_2_t1

0x9877,	// (0x0001dad8) main_pane_empty_t1_ParamLimits

0x9877,	// (0x0001dad8) main_pane_empty_t1

0x988f,	// (0x0001daf0) main_pane_empty_t2_ParamLimits

0x988f,	// (0x0001daf0) main_pane_empty_t2

0x98a4,	// (0x0001db05) main_pane_empty_t3_ParamLimits

0x98a4,	// (0x0001db05) main_pane_empty_t3

0x98b6,	// (0x0001db17) main_pane_empty_t4_ParamLimits

0x98b6,	// (0x0001db17) main_pane_empty_t4

0x98c8,	// (0x0001db29) main_pane_empty_t5_ParamLimits

0x98c8,	// (0x0001db29) main_pane_empty_t5

0x0004,

0xf57a,	// (0x000237db) main_pane_empty_t_ParamLimits

0xf57a,	// (0x000237db) main_pane_empty_t

0xdc15,	// (0x00021e76) bg_popup_window_pane_ParamLimits

0xdc15,	// (0x00021e76) bg_popup_window_pane

0x282a,	// (0x00016a8b) find_popup_pane_cp2_ParamLimits

0x282a,	// (0x00016a8b) find_popup_pane_cp2

0x2836,	// (0x00016a97) heading_pane_ParamLimits

0x2836,	// (0x00016a97) heading_pane

0xb8ea,	// (0x0001fb4b) bg_popup_sub_pane

0xb109,	// (0x0001f36a) bg_popup_window_pane_g1_ParamLimits

0xb109,	// (0x0001f36a) bg_popup_window_pane_g1

0xb118,	// (0x0001f379) bg_popup_window_pane_g2_ParamLimits

0xb118,	// (0x0001f379) bg_popup_window_pane_g2

0xb124,	// (0x0001f385) bg_popup_window_pane_g3_ParamLimits

0xb124,	// (0x0001f385) bg_popup_window_pane_g3

0xb130,	// (0x0001f391) bg_popup_window_pane_g4_ParamLimits

0xb130,	// (0x0001f391) bg_popup_window_pane_g4

0xb13f,	// (0x0001f3a0) bg_popup_window_pane_g5_ParamLimits

0xb13f,	// (0x0001f3a0) bg_popup_window_pane_g5

0xb14f,	// (0x0001f3b0) bg_popup_window_pane_g6_ParamLimits

0xb14f,	// (0x0001f3b0) bg_popup_window_pane_g6

0xb15b,	// (0x0001f3bc) bg_popup_window_pane_g7_ParamLimits

0xb15b,	// (0x0001f3bc) bg_popup_window_pane_g7

0xb16a,	// (0x0001f3cb) bg_popup_window_pane_g8_ParamLimits

0xb16a,	// (0x0001f3cb) bg_popup_window_pane_g8

0xb179,	// (0x0001f3da) bg_popup_window_pane_g9_ParamLimits

0xb179,	// (0x0001f3da) bg_popup_window_pane_g9

0x2810,	// (0x00016a71) bg_popup_window_pane_g10_ParamLimits

0x2810,	// (0x00016a71) bg_popup_window_pane_g10

0x0009,

0xf8d1,	// (0x00023b32) bg_popup_window_pane_g_ParamLimits

0xf8d1,	// (0x00023b32) bg_popup_window_pane_g

0x2739,	// (0x0001699a) bg_popup_heading_pane_ParamLimits

0x2739,	// (0x0001699a) bg_popup_heading_pane

0xead1,	// (0x00022d32) tabs_4_passive_pane_cp_srt_ParamLimits

0xead1,	// (0x00022d32) tabs_4_passive_pane_cp_srt

0xeae3,	// (0x00022d44) tabs_4_passive_pane_srt_ParamLimits

0x274d,	// (0x000169ae) heading_pane_g2

0xeae3,	// (0x00022d44) tabs_4_passive_pane_srt

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp3_srt_ParamLimits

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp3_srt

0x2755,	// (0x000169b6) heading_pane_t1_ParamLimits

0x2755,	// (0x000169b6) heading_pane_t1

0x276c,	// (0x000169cd) heading_pane_t2_ParamLimits

0x276c,	// (0x000169cd) heading_pane_t2

0x0001,

0xf8cc,	// (0x00023b2d) heading_pane_t_ParamLimits

0xf8cc,	// (0x00023b2d) heading_pane_t

0x2264,	// (0x000164c5) bg_popup_heading_pane_g1

0x2313,	// (0x00016574) bg_popup_heading_pane_g2

0x231d,	// (0x0001657e) bg_popup_heading_pane_g3

0x2327,	// (0x00016588) bg_popup_heading_pane_g4

0x2331,	// (0x00016592) bg_popup_heading_pane_g5

0x233b,	// (0x0001659c) bg_popup_heading_pane_g6

0x2343,	// (0x000165a4) bg_popup_heading_pane_g7

0x234b,	// (0x000165ac) bg_popup_heading_pane_g8

0x2355,	// (0x000165b6) bg_popup_heading_pane_g9

0x0008,

0xf888,	// (0x00023ae9) bg_popup_heading_pane_g

0x1991,	// (0x00015bf2) bg_popup_sub_pane_g1

0x19a1,	// (0x00015c02) bg_popup_sub_pane_g2

0x1999,	// (0x00015bfa) bg_popup_sub_pane_g3

0x19b1,	// (0x00015c12) bg_popup_sub_pane_g4

0x19a9,	// (0x00015c0a) bg_popup_sub_pane_g5

0x19b9,	// (0x00015c1a) bg_popup_sub_pane_g6

0x19c1,	// (0x00015c22) bg_popup_sub_pane_g7

0x19d1,	// (0x00015c32) bg_popup_sub_pane_g8

0x19c9,	// (0x00015c2a) bg_popup_sub_pane_g9

0x0008,

0xf862,	// (0x00023ac3) bg_popup_sub_pane_g

0xb944,	// (0x0001fba5) bg_popup_window_pane_cp5_ParamLimits

0xb944,	// (0x0001fba5) bg_popup_window_pane_cp5

0xd572,	// (0x000217d3) popup_note_window_g1_ParamLimits

0xd572,	// (0x000217d3) popup_note_window_g1

0xd57e,	// (0x000217df) popup_note_window_t1_ParamLimits

0xd57e,	// (0x000217df) popup_note_window_t1

0xd594,	// (0x000217f5) popup_note_window_t2_ParamLimits

0xd594,	// (0x000217f5) popup_note_window_t2

0xd5aa,	// (0x0002180b) popup_note_window_t3_ParamLimits

0xd5aa,	// (0x0002180b) popup_note_window_t3

0xd5c0,	// (0x00021821) popup_note_window_t4_ParamLimits

0xd5c0,	// (0x00021821) popup_note_window_t4

0xd5e8,	// (0x00021849) popup_note_window_t5_ParamLimits

0xd5e8,	// (0x00021849) popup_note_window_t5

0x0004,

0xf585,	// (0x000237e6) popup_note_window_t_ParamLimits

0xf585,	// (0x000237e6) popup_note_window_t

0xd60c,	// (0x0002186d) bg_popup_window_pane_cp6_ParamLimits

0xd60c,	// (0x0002186d) bg_popup_window_pane_cp6

0x21e0,	// (0x00016441) popup_note_image_window_g1_ParamLimits

0x21e0,	// (0x00016441) popup_note_image_window_g1

0x21ec,	// (0x0001644d) popup_note_image_window_g2_ParamLimits

0x21ec,	// (0x0001644d) popup_note_image_window_g2

0x0001,

0xf856,	// (0x00023ab7) popup_note_image_window_g_ParamLimits

0xf856,	// (0x00023ab7) popup_note_image_window_g

0x2205,	// (0x00016466) popup_note_image_window_t1_ParamLimits

0x2205,	// (0x00016466) popup_note_image_window_t1

0x221e,	// (0x0001647f) popup_note_image_window_t2_ParamLimits

0x221e,	// (0x0001647f) popup_note_image_window_t2

0x2237,	// (0x00016498) popup_note_image_window_t3_ParamLimits

0x2237,	// (0x00016498) popup_note_image_window_t3

0x0002,

0xf85b,	// (0x00023abc) popup_note_image_window_t_ParamLimits

0xf85b,	// (0x00023abc) popup_note_image_window_t

0x20a0,	// (0x00016301) bg_popup_window_pane_cp7_ParamLimits

0x20a0,	// (0x00016301) bg_popup_window_pane_cp7

0x20d0,	// (0x00016331) popup_note_wait_window_g1_ParamLimits

0x20d0,	// (0x00016331) popup_note_wait_window_g1

0x20dc,	// (0x0001633d) popup_note_wait_window_g2_ParamLimits

0x20dc,	// (0x0001633d) popup_note_wait_window_g2

0x0002,

0xf844,	// (0x00023aa5) popup_note_wait_window_g_ParamLimits

0xf844,	// (0x00023aa5) popup_note_wait_window_g

0x20f4,	// (0x00016355) popup_note_wait_window_t1_ParamLimits

0x20f4,	// (0x00016355) popup_note_wait_window_t1

0x211b,	// (0x0001637c) popup_note_wait_window_t2_ParamLimits

0x211b,	// (0x0001637c) popup_note_wait_window_t2

0x2139,	// (0x0001639a) popup_note_wait_window_t3_ParamLimits

0x2139,	// (0x0001639a) popup_note_wait_window_t3

0x214c,	// (0x000163ad) popup_note_wait_window_t4_ParamLimits

0x214c,	// (0x000163ad) popup_note_wait_window_t4

0x0004,

0xf84b,	// (0x00023aac) popup_note_wait_window_t_ParamLimits

0xf84b,	// (0x00023aac) popup_note_wait_window_t

0x2171,	// (0x000163d2) wait_bar_pane_ParamLimits

0x2171,	// (0x000163d2) wait_bar_pane

0xb8ea,	// (0x0001fb4b) wait_anim_pane

0xb8ea,	// (0x0001fb4b) wait_border_pane

0xb8e0,	// (0x0001fb41) wait_anim_pane_g1

0xb8e0,	// (0x0001fb41) wait_anim_pane_g2

0x0001,

0xf704,	// (0x00023965) wait_anim_pane_g

0x2044,	// (0x000162a5) wait_border_pane_g1

0x204f,	// (0x000162b0) wait_border_pane_g2

0x2058,	// (0x000162b9) wait_border_pane_g3

0x0002,

0xf83d,	// (0x00023a9e) wait_border_pane_g

0x1eae,	// (0x0001610f) bg_popup_window_pane_cp16_ParamLimits

0x1eae,	// (0x0001610f) bg_popup_window_pane_cp16

0x1fae,	// (0x0001620f) indicator_popup_pane_cp4_ParamLimits

0x1fae,	// (0x0001620f) indicator_popup_pane_cp4

0x1fc2,	// (0x00016223) popup_query_data_window_t1_ParamLimits

0x1fc2,	// (0x00016223) popup_query_data_window_t1

0x1fd4,	// (0x00016235) popup_query_data_window_t2_ParamLimits

0x1fd4,	// (0x00016235) popup_query_data_window_t2

0x1fed,	// (0x0001624e) popup_query_data_window_t3_ParamLimits

0x1fed,	// (0x0001624e) popup_query_data_window_t3

0x0002,

0xf836,	// (0x00023a97) popup_query_data_window_t_ParamLimits

0xf836,	// (0x00023a97) popup_query_data_window_t

0x2007,	// (0x00016268) query_popup_data_pane_ParamLimits

0x2007,	// (0x00016268) query_popup_data_pane

0x201b,	// (0x0001627c) query_popup_data_pane_cp1_ParamLimits

0x201b,	// (0x0001627c) query_popup_data_pane_cp1

0x1eae,	// (0x0001610f) bg_popup_window_pane_cp10_ParamLimits

0x1eae,	// (0x0001610f) bg_popup_window_pane_cp10

0x1ee0,	// (0x00016141) indicator_popup_pane_ParamLimits

0x1ee0,	// (0x00016141) indicator_popup_pane

0x1f02,	// (0x00016163) popup_query_code_window_t1_ParamLimits

0x1f02,	// (0x00016163) popup_query_code_window_t1

0x1f1c,	// (0x0001617d) popup_query_code_window_t2_ParamLimits

0x1f1c,	// (0x0001617d) popup_query_code_window_t2

0x1f65,	// (0x000161c6) popup_query_code_window_t3_ParamLimits

0x1f65,	// (0x000161c6) popup_query_code_window_t3

0x0002,

0xf82f,	// (0x00023a90) popup_query_code_window_t_ParamLimits

0xf82f,	// (0x00023a90) popup_query_code_window_t

0x1f94,	// (0x000161f5) query_popup_pane_ParamLimits

0x1f94,	// (0x000161f5) query_popup_pane

0xd60c,	// (0x0002186d) bg_popup_window_pane_cp15_ParamLimits

0xd60c,	// (0x0002186d) bg_popup_window_pane_cp15

0xd62c,	// (0x0002188d) indicator_popup_pane_cp1_ParamLimits

0xd62c,	// (0x0002188d) indicator_popup_pane_cp1

0xd63f,	// (0x000218a0) indicator_popup_pane_cp2_ParamLimits

0xd63f,	// (0x000218a0) indicator_popup_pane_cp2

0xd65a,	// (0x000218bb) popup_query_data_code_window_g1_ParamLimits

0xd65a,	// (0x000218bb) popup_query_data_code_window_g1

0xd66d,	// (0x000218ce) popup_query_data_code_window_t1_ParamLimits

0xd66d,	// (0x000218ce) popup_query_data_code_window_t1

0xd67f,	// (0x000218e0) popup_query_data_code_window_t2_ParamLimits

0xd67f,	// (0x000218e0) popup_query_data_code_window_t2

0xd691,	// (0x000218f2) popup_query_data_code_window_t3_ParamLimits

0xd691,	// (0x000218f2) popup_query_data_code_window_t3

0xd6a7,	// (0x00021908) popup_query_data_code_window_t4_ParamLimits

0xd6a7,	// (0x00021908) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x000237f1) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x000237f1) popup_query_data_code_window_t

0xe933,	// (0x00022b94) list_single_midp_graphic_pane_g3

0xd6c1,	// (0x00021922) query_popup_data_pane_cp2_ParamLimits

0xd6d4,	// (0x00021935) query_popup_pane_cp2_ParamLimits

0xd6d4,	// (0x00021935) query_popup_pane_cp2

0xb8ea,	// (0x0001fb4b) bg_popup_window_pane_cp11

0x1ea6,	// (0x00016107) heading_pane_cp5

0xd76a,	// (0x000219cb) listscroll_popup_info_pane

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp3

0xd6ef,	// (0x00021950) query_popup_pane_t1

0xd6fd,	// (0x0002195e) list_popup_info_pane_ParamLimits

0xd6fd,	// (0x0002195e) list_popup_info_pane

0xd70c,	// (0x0002196d) listscroll_popup_info_pane_g1

0xd714,	// (0x00021975) scroll_pane_cp7

0xd71e,	// (0x0002197f) popup_info_list_pane_t1_ParamLimits

0xd71e,	// (0x0002197f) popup_info_list_pane_t1

0xd738,	// (0x00021999) popup_info_list_pane_t2_ParamLimits

0xd738,	// (0x00021999) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x000237fa) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x000237fa) popup_info_list_pane_t

0xb8ea,	// (0x0001fb4b) bg_popup_window_pane_cp12

0x3301,	// (0x00017562) find_popup_pane

0xb952,	// (0x0001fbb3) bg_popup_window_pane_cp3

0xd752,	// (0x000219b3) heading_pane_cp3

0xd75e,	// (0x000219bf) listscroll_popup_graphic_pane

0xb8ea,	// (0x0001fb4b) bg_popup_window_pane_cp4

0x992a,	// (0x0001db8b) heading_pane_cp4

0xd76a,	// (0x000219cb) listscroll_popup_colour_pane

0x9934,	// (0x0001db95) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x9934,	// (0x0001db95) cell_large_graphic_colour_none_popup_pane

0x9948,	// (0x0001dba9) grid_large_graphic_colour_popup_pane_ParamLimits

0x9948,	// (0x0001dba9) grid_large_graphic_colour_popup_pane

0x996c,	// (0x0001dbcd) listscroll_popup_colour_pane_g1_ParamLimits

0x996c,	// (0x0001dbcd) listscroll_popup_colour_pane_g1

0x9983,	// (0x0001dbe4) listscroll_popup_colour_pane_g2_ParamLimits

0x9983,	// (0x0001dbe4) listscroll_popup_colour_pane_g2

0x999a,	// (0x0001dbfb) listscroll_popup_colour_pane_g3_ParamLimits

0x999a,	// (0x0001dbfb) listscroll_popup_colour_pane_g3

0x99aa,	// (0x0001dc0b) listscroll_popup_colour_pane_g4_ParamLimits

0x99aa,	// (0x0001dc0b) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x000237ff) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x000237ff) listscroll_popup_colour_pane_g

0xd772,	// (0x000219d3) scroll_pane_cp6_ParamLimits

0xd772,	// (0x000219d3) scroll_pane_cp6

0x99ba,	// (0x0001dc1b) cell_large_graphic_colour_popup_pane_ParamLimits

0x99ba,	// (0x0001dc1b) cell_large_graphic_colour_popup_pane

0xd784,	// (0x000219e5) cell_large_graphic_colour_none_popup_pane_t1

0xb8ea,	// (0x0001fb4b) grid_highlight_pane_cp5

0xd793,	// (0x000219f4) cell_large_graphic_colour_popup_pane_g1

0xd79b,	// (0x000219fc) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x00023808) cell_large_graphic_colour_popup_pane_g

0xd7a3,	// (0x00021a04) cell_large_graphic_colour_popup_pane_g2_copy1

0xd7ac,	// (0x00021a0d) grid_highlight_pane_cp4

0xd7b4,	// (0x00021a15) bg_popup_window_pane_cp8_ParamLimits

0xd7b4,	// (0x00021a15) bg_popup_window_pane_cp8

0xd7cf,	// (0x00021a30) popup_snote_single_text_window_g1_ParamLimits

0xd7cf,	// (0x00021a30) popup_snote_single_text_window_g1

0xd7e1,	// (0x00021a42) popup_snote_single_text_window_t1_ParamLimits

0xd7e1,	// (0x00021a42) popup_snote_single_text_window_t1

0xd7f4,	// (0x00021a55) popup_snote_single_text_window_t2_ParamLimits

0xd7f4,	// (0x00021a55) popup_snote_single_text_window_t2

0xd807,	// (0x00021a68) popup_snote_single_text_window_t3_ParamLimits

0xd807,	// (0x00021a68) popup_snote_single_text_window_t3

0xd840,	// (0x00021aa1) popup_snote_single_text_window_t4_ParamLimits

0xd840,	// (0x00021aa1) popup_snote_single_text_window_t4

0xd874,	// (0x00021ad5) popup_snote_single_text_window_t5_ParamLimits

0xd874,	// (0x00021ad5) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0002380d) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0002380d) popup_snote_single_text_window_t

0xd8a3,	// (0x00021b04) bg_popup_window_pane_cp9_ParamLimits

0xd8a3,	// (0x00021b04) bg_popup_window_pane_cp9

0xd7cf,	// (0x00021a30) popup_snote_single_graphic_window_g1_ParamLimits

0xd7cf,	// (0x00021a30) popup_snote_single_graphic_window_g1

0xd8b1,	// (0x00021b12) popup_snote_single_graphic_window_g2_ParamLimits

0xd8b1,	// (0x00021b12) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x00023818) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x00023818) popup_snote_single_graphic_window_g

0xd8bd,	// (0x00021b1e) popup_snote_single_graphic_window_t1_ParamLimits

0xd8bd,	// (0x00021b1e) popup_snote_single_graphic_window_t1

0xd8d0,	// (0x00021b31) popup_snote_single_graphic_window_t2_ParamLimits

0xd8d0,	// (0x00021b31) popup_snote_single_graphic_window_t2

0xd8e3,	// (0x00021b44) popup_snote_single_graphic_window_t3_ParamLimits

0xd8e3,	// (0x00021b44) popup_snote_single_graphic_window_t3

0xd91c,	// (0x00021b7d) popup_snote_single_graphic_window_t4_ParamLimits

0xd91c,	// (0x00021b7d) popup_snote_single_graphic_window_t4

0xd950,	// (0x00021bb1) popup_snote_single_graphic_window_t5_ParamLimits

0xd950,	// (0x00021bb1) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0002381d) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0002381d) popup_snote_single_graphic_window_t

0x323f,	// (0x000174a0) grid_graphic_popup_pane_ParamLimits

0x323f,	// (0x000174a0) grid_graphic_popup_pane

0x326d,	// (0x000174ce) listscroll_popup_graphic_pane_g1_ParamLimits

0x326d,	// (0x000174ce) listscroll_popup_graphic_pane_g1

0xb595,	// (0x0001f7f6) listscroll_popup_graphic_pane_g2_ParamLimits

0xb595,	// (0x0001f7f6) listscroll_popup_graphic_pane_g2

0x0001,

0xf9ac,	// (0x00023c0d) listscroll_popup_graphic_pane_g_ParamLimits

0xf9ac,	// (0x00023c0d) listscroll_popup_graphic_pane_g

0x3295,	// (0x000174f6) scroll_pane_cp5

0xb554,	// (0x0001f7b5) cell_graphic_popup_pane_ParamLimits

0xb554,	// (0x0001f7b5) cell_graphic_popup_pane

0x31c8,	// (0x00017429) cell_graphic_popup_pane_g1

0x31d0,	// (0x00017431) cell_graphic_popup_pane_g2

0xd7a3,	// (0x00021a04) cell_graphic_popup_pane_g3

0x0002,

0xf9a5,	// (0x00023c06) cell_graphic_popup_pane_g

0x31d9,	// (0x0001743a) cell_graphic_popup_pane_t2

0xd7ac,	// (0x00021a0d) grid_highlight_pane_cp3

0xd991,	// (0x00021bf2) list_gen_pane_ParamLimits

0xd991,	// (0x00021bf2) list_gen_pane

0xd9b9,	// (0x00021c1a) scroll_pane

0xb50b,	// (0x0001f76c) bg_list_pane_g1_ParamLimits

0xb50b,	// (0x0001f76c) bg_list_pane_g1

0x313d,	// (0x0001739e) bg_list_pane_g2_ParamLimits

0x313d,	// (0x0001739e) bg_list_pane_g2

0x3152,	// (0x000173b3) bg_list_pane_g3_ParamLimits

0x3152,	// (0x000173b3) bg_list_pane_g3

0x3166,	// (0x000173c7) bg_list_pane_g4_ParamLimits

0x3166,	// (0x000173c7) bg_list_pane_g4

0xb528,	// (0x0001f789) bg_list_pane_g5_ParamLimits

0xb528,	// (0x0001f789) bg_list_pane_g5

0x0004,

0xf99a,	// (0x00023bfb) bg_list_pane_g_ParamLimits

0xf99a,	// (0x00023bfb) bg_list_pane_g

0xb4a5,	// (0x0001f706) list_double2_graphic_large_graphic_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double2_graphic_large_graphic_pane

0xb4a5,	// (0x0001f706) list_double2_graphic_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double2_graphic_pane

0xb4a5,	// (0x0001f706) list_double2_large_graphic_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double2_large_graphic_pane

0xb4a5,	// (0x0001f706) list_double2_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double2_pane

0xb4a5,	// (0x0001f706) list_double_graphic_heading_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_graphic_heading_pane

0xb4a5,	// (0x0001f706) list_double_graphic_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_graphic_pane

0xb4a5,	// (0x0001f706) list_double_heading_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_heading_pane

0xb4a5,	// (0x0001f706) list_double_large_graphic_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_large_graphic_pane

0xb4a5,	// (0x0001f706) list_double_number_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_number_pane

0xb4a5,	// (0x0001f706) list_double_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_pane

0xb4a5,	// (0x0001f706) list_double_time_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_double_time_pane

0xb4a5,	// (0x0001f706) list_setting_number_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_setting_number_pane

0xb4a5,	// (0x0001f706) list_setting_pane_ParamLimits

0xb4a5,	// (0x0001f706) list_setting_pane

0xb4b9,	// (0x0001f71a) list_single_2graphic_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_2graphic_pane

0xb4b9,	// (0x0001f71a) list_single_graphic_heading_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_graphic_heading_pane

0xb4b9,	// (0x0001f71a) list_single_graphic_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_graphic_pane

0xb4b9,	// (0x0001f71a) list_single_heading_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_heading_pane

0xb4b9,	// (0x0001f71a) list_single_large_graphic_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_large_graphic_pane

0xb4b9,	// (0x0001f71a) list_single_number_heading_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_number_heading_pane

0xb4b9,	// (0x0001f71a) list_single_number_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_number_pane

0xb4b9,	// (0x0001f71a) list_single_pane_ParamLimits

0xb4b9,	// (0x0001f71a) list_single_pane

0xb8ea,	// (0x0001fb4b) list_highlight_pane_cp1

0x0a01,	// (0x00014c62) list_single_pane_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_pane_g1

0x1913,	// (0x00015b74) list_single_pane_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_pane_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_pane_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_pane_g

0x3915,	// (0x00017b76) list_single_pane_t1_ParamLimits

0x3915,	// (0x00017b76) list_single_pane_t1

0x0a01,	// (0x00014c62) list_single_number_pane_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_number_pane_g1

0x1913,	// (0x00015b74) list_single_number_pane_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_number_pane_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_number_pane_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_number_pane_g

0x191f,	// (0x00015b80) list_single_number_pane_t1_ParamLimits

0x191f,	// (0x00015b80) list_single_number_pane_t1

0xb2c3,	// (0x0001f524) list_single_number_pane_t2_ParamLimits

0xb2c3,	// (0x0001f524) list_single_number_pane_t2

0x0001,

0xf95b,	// (0x00023bbc) list_single_number_pane_t_ParamLimits

0xf95b,	// (0x00023bbc) list_single_number_pane_t

0x4e2f,	// (0x00019090) list_single_graphic_pane_g1_ParamLimits

0x4e2f,	// (0x00019090) list_single_graphic_pane_g1

0x0a01,	// (0x00014c62) list_single_graphic_pane_g2_ParamLimits

0x0a01,	// (0x00014c62) list_single_graphic_pane_g2

0x1913,	// (0x00015b74) list_single_graphic_pane_g3_ParamLimits

0x1913,	// (0x00015b74) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x00023828) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x00023828) list_single_graphic_pane_g

0x99e5,	// (0x0001dc46) list_single_graphic_pane_t1_ParamLimits

0x99e5,	// (0x0001dc46) list_single_graphic_pane_t1

0x0a01,	// (0x00014c62) list_single_heading_pane_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_heading_pane_g1

0x1913,	// (0x00015b74) list_single_heading_pane_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_heading_pane_g

0x3937,	// (0x00017b98) list_single_heading_pane_t1_ParamLimits

0x3937,	// (0x00017b98) list_single_heading_pane_t1

0x99fb,	// (0x0001dc5c) list_single_heading_pane_t2_ParamLimits

0x99fb,	// (0x0001dc5c) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x00023834) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x00023834) list_single_heading_pane_t

0x0a01,	// (0x00014c62) list_single_number_heading_pane_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_number_heading_pane_g1

0x1913,	// (0x00015b74) list_single_number_heading_pane_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_number_heading_pane_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_number_heading_pane_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_number_heading_pane_g

0x3937,	// (0x00017b98) list_single_number_heading_pane_t1_ParamLimits

0x3937,	// (0x00017b98) list_single_number_heading_pane_t1

0x9a0d,	// (0x0001dc6e) list_single_number_heading_pane_t2_ParamLimits

0x9a0d,	// (0x0001dc6e) list_single_number_heading_pane_t2

0x38f1,	// (0x00017b52) list_single_number_heading_pane_t3_ParamLimits

0x38f1,	// (0x00017b52) list_single_number_heading_pane_t3

0x0002,

0xf5d8,	// (0x00023839) list_single_number_heading_pane_t_ParamLimits

0xf5d8,	// (0x00023839) list_single_number_heading_pane_t

0x1907,	// (0x00015b68) list_single_graphic_heading_pane_g1_ParamLimits

0x1907,	// (0x00015b68) list_single_graphic_heading_pane_g1

0x9a1f,	// (0x0001dc80) list_single_graphic_heading_pane_g4_ParamLimits

0x9a1f,	// (0x0001dc80) list_single_graphic_heading_pane_g4

0x1913,	// (0x00015b74) list_single_graphic_heading_pane_g5_ParamLimits

0x1913,	// (0x00015b74) list_single_graphic_heading_pane_g5

0x0002,

0xf5df,	// (0x00023840) list_single_graphic_heading_pane_g_ParamLimits

0xf5df,	// (0x00023840) list_single_graphic_heading_pane_g

0x3937,	// (0x00017b98) list_single_graphic_heading_pane_t1_ParamLimits

0x3937,	// (0x00017b98) list_single_graphic_heading_pane_t1

0x9a30,	// (0x0001dc91) list_single_graphic_heading_pane_t2_ParamLimits

0x9a30,	// (0x0001dc91) list_single_graphic_heading_pane_t2

0x0001,

0xf5e6,	// (0x00023847) list_single_graphic_heading_pane_t_ParamLimits

0xf5e6,	// (0x00023847) list_single_graphic_heading_pane_t

0x392b,	// (0x00017b8c) list_single_large_graphic_pane_g1_ParamLimits

0x392b,	// (0x00017b8c) list_single_large_graphic_pane_g1

0x0a01,	// (0x00014c62) list_single_large_graphic_pane_g2_ParamLimits

0x0a01,	// (0x00014c62) list_single_large_graphic_pane_g2

0x1913,	// (0x00015b74) list_single_large_graphic_pane_g3_ParamLimits

0x1913,	// (0x00015b74) list_single_large_graphic_pane_g3

0x0002,

0xf5eb,	// (0x0002384c) list_single_large_graphic_pane_g_ParamLimits

0xf5eb,	// (0x0002384c) list_single_large_graphic_pane_g

0x204f,	// (0x000162b0) wait_border_pane_g2_copy1

0x9a42,	// (0x0001dca3) list_single_large_graphic_pane_g4_cp2

0x3937,	// (0x00017b98) list_single_large_graphic_pane_t1_ParamLimits

0x3937,	// (0x00017b98) list_single_large_graphic_pane_t1

0x9a4a,	// (0x0001dcab) list_double_pane_g1_ParamLimits

0x9a4a,	// (0x0001dcab) list_double_pane_g1

0x9a56,	// (0x0001dcb7) list_double_pane_g2_ParamLimits

0x9a56,	// (0x0001dcb7) list_double_pane_g2

0x0001,

0xf5f2,	// (0x00023853) list_double_pane_g_ParamLimits

0xf5f2,	// (0x00023853) list_double_pane_g

0x9a62,	// (0x0001dcc3) list_double_pane_t1_ParamLimits

0x9a62,	// (0x0001dcc3) list_double_pane_t1

0x9a78,	// (0x0001dcd9) list_double_pane_t2_ParamLimits

0x9a78,	// (0x0001dcd9) list_double_pane_t2

0x0001,

0xf5f7,	// (0x00023858) list_double_pane_t_ParamLimits

0xf5f7,	// (0x00023858) list_double_pane_t

0x9a8a,	// (0x0001dceb) list_double2_pane_g1_ParamLimits

0x9a8a,	// (0x0001dceb) list_double2_pane_g1

0x9a9b,	// (0x0001dcfc) list_double2_pane_g2_ParamLimits

0x9a9b,	// (0x0001dcfc) list_double2_pane_g2

0x0001,

0xf5fc,	// (0x0002385d) list_double2_pane_g_ParamLimits

0xf5fc,	// (0x0002385d) list_double2_pane_g

0x9aa7,	// (0x0001dd08) list_double2_pane_t1_ParamLimits

0x9aa7,	// (0x0001dd08) list_double2_pane_t1

0x9abd,	// (0x0001dd1e) list_double2_pane_t2_ParamLimits

0x9abd,	// (0x0001dd1e) list_double2_pane_t2

0x0001,

0xf601,	// (0x00023862) list_double2_pane_t_ParamLimits

0xf601,	// (0x00023862) list_double2_pane_t

0x9a4a,	// (0x0001dcab) list_double_number_pane_g1_ParamLimits

0x9a4a,	// (0x0001dcab) list_double_number_pane_g1

0x9a56,	// (0x0001dcb7) list_double_number_pane_g2_ParamLimits

0x9a56,	// (0x0001dcb7) list_double_number_pane_g2

0x0001,

0xf5f2,	// (0x00023853) list_double_number_pane_g_ParamLimits

0xf5f2,	// (0x00023853) list_double_number_pane_g

0x9acf,	// (0x0001dd30) list_double_number_pane_t1_ParamLimits

0x9acf,	// (0x0001dd30) list_double_number_pane_t1

0x9ae1,	// (0x0001dd42) list_double_number_pane_t2_ParamLimits

0x9ae1,	// (0x0001dd42) list_double_number_pane_t2

0x9af7,	// (0x0001dd58) list_double_number_pane_t3_ParamLimits

0x9af7,	// (0x0001dd58) list_double_number_pane_t3

0x0002,

0xf606,	// (0x00023867) list_double_number_pane_t_ParamLimits

0xf606,	// (0x00023867) list_double_number_pane_t

0xd9ed,	// (0x00021c4e) list_double_graphic_pane_g1_ParamLimits

0xd9ed,	// (0x00021c4e) list_double_graphic_pane_g1

0x9b09,	// (0x0001dd6a) list_double_graphic_pane_g2_ParamLimits

0x9b09,	// (0x0001dd6a) list_double_graphic_pane_g2

0x9b18,	// (0x0001dd79) list_double_graphic_pane_g3_ParamLimits

0x9b18,	// (0x0001dd79) list_double_graphic_pane_g3

0x0003,

0xf60d,	// (0x0002386e) list_double_graphic_pane_g_ParamLimits

0xf60d,	// (0x0002386e) list_double_graphic_pane_g

0x9b30,	// (0x0001dd91) list_double_graphic_pane_t1_ParamLimits

0x9b30,	// (0x0001dd91) list_double_graphic_pane_t1

0x9b46,	// (0x0001dda7) list_double_graphic_pane_t2_ParamLimits

0x9b46,	// (0x0001dda7) list_double_graphic_pane_t2

0x0001,

0xf616,	// (0x00023877) list_double_graphic_pane_t_ParamLimits

0xf616,	// (0x00023877) list_double_graphic_pane_t

0x9b58,	// (0x0001ddb9) list_double2_graphic_pane_g1_ParamLimits

0x9b58,	// (0x0001ddb9) list_double2_graphic_pane_g1

0x9b64,	// (0x0001ddc5) list_double2_graphic_pane_g2_ParamLimits

0x9b64,	// (0x0001ddc5) list_double2_graphic_pane_g2

0x9a9b,	// (0x0001dcfc) list_double2_graphic_pane_g3_ParamLimits

0x9a9b,	// (0x0001dcfc) list_double2_graphic_pane_g3

0x0002,

0xf61b,	// (0x0002387c) list_double2_graphic_pane_g_ParamLimits

0xf61b,	// (0x0002387c) list_double2_graphic_pane_g

0x9b70,	// (0x0001ddd1) list_double2_graphic_pane_t1_ParamLimits

0x9b70,	// (0x0001ddd1) list_double2_graphic_pane_t1

0x9b86,	// (0x0001dde7) list_double2_graphic_pane_t2_ParamLimits

0x9b86,	// (0x0001dde7) list_double2_graphic_pane_t2

0x0001,

0xf622,	// (0x00023883) list_double2_graphic_pane_t_ParamLimits

0xf622,	// (0x00023883) list_double2_graphic_pane_t

0x9b98,	// (0x0001ddf9) list_double_large_graphic_pane_g1_ParamLimits

0x9b98,	// (0x0001ddf9) list_double_large_graphic_pane_g1

0x9bc3,	// (0x0001de24) list_double_large_graphic_pane_g2_ParamLimits

0x9bc3,	// (0x0001de24) list_double_large_graphic_pane_g2

0x9a56,	// (0x0001dcb7) list_double_large_graphic_pane_g3_ParamLimits

0x9a56,	// (0x0001dcb7) list_double_large_graphic_pane_g3

0x9bd4,	// (0x0001de35) list_double_large_graphic_pane_g4_ParamLimits

0x9bd4,	// (0x0001de35) list_double_large_graphic_pane_g4

0x0004,

0xf627,	// (0x00023888) list_double_large_graphic_pane_g_ParamLimits

0xf627,	// (0x00023888) list_double_large_graphic_pane_g

0x9be6,	// (0x0001de47) list_double_large_graphic_pane_t1_ParamLimits

0x9be6,	// (0x0001de47) list_double_large_graphic_pane_t1

0x9bff,	// (0x0001de60) list_double_large_graphic_pane_t2_ParamLimits

0x9bff,	// (0x0001de60) list_double_large_graphic_pane_t2

0x0001,

0xf632,	// (0x00023893) list_double_large_graphic_pane_t_ParamLimits

0xf632,	// (0x00023893) list_double_large_graphic_pane_t

0x9c11,	// (0x0001de72) list_double2_large_graphic_pane_g1_ParamLimits

0x9c11,	// (0x0001de72) list_double2_large_graphic_pane_g1

0x9a8a,	// (0x0001dceb) list_double2_large_graphic_pane_g2_ParamLimits

0x9a8a,	// (0x0001dceb) list_double2_large_graphic_pane_g2

0x9a9b,	// (0x0001dcfc) list_double2_large_graphic_pane_g3_ParamLimits

0x9a9b,	// (0x0001dcfc) list_double2_large_graphic_pane_g3

0x0002,

0xf637,	// (0x00023898) list_double2_large_graphic_pane_g_ParamLimits

0xf637,	// (0x00023898) list_double2_large_graphic_pane_g

0x9c1d,	// (0x0001de7e) list_double2_large_graphic_pane_t1_ParamLimits

0x9c1d,	// (0x0001de7e) list_double2_large_graphic_pane_t1

0x9c33,	// (0x0001de94) list_double2_large_graphic_pane_t2_ParamLimits

0x9c33,	// (0x0001de94) list_double2_large_graphic_pane_t2

0x0001,

0xf63e,	// (0x0002389f) list_double2_large_graphic_pane_t_ParamLimits

0xf63e,	// (0x0002389f) list_double2_large_graphic_pane_t

0x9c45,	// (0x0001dea6) list_double_heading_pane_g1_ParamLimits

0x9c45,	// (0x0001dea6) list_double_heading_pane_g1

0x9c56,	// (0x0001deb7) list_double_heading_pane_g2_ParamLimits

0x9c56,	// (0x0001deb7) list_double_heading_pane_g2

0x0001,

0xf643,	// (0x000238a4) list_double_heading_pane_g_ParamLimits

0xf643,	// (0x000238a4) list_double_heading_pane_g

0x9c62,	// (0x0001dec3) list_double_heading_pane_t1_ParamLimits

0x9c62,	// (0x0001dec3) list_double_heading_pane_t1

0x9c78,	// (0x0001ded9) list_double_heading_pane_t2_ParamLimits

0x9c78,	// (0x0001ded9) list_double_heading_pane_t2

0x0001,

0xf648,	// (0x000238a9) list_double_heading_pane_t_ParamLimits

0xf648,	// (0x000238a9) list_double_heading_pane_t

0x9c8a,	// (0x0001deeb) list_double_graphic_heading_pane_g1_ParamLimits

0x9c8a,	// (0x0001deeb) list_double_graphic_heading_pane_g1

0x9c45,	// (0x0001dea6) list_double_graphic_heading_pane_g2_ParamLimits

0x9c45,	// (0x0001dea6) list_double_graphic_heading_pane_g2

0x9c56,	// (0x0001deb7) list_double_graphic_heading_pane_g3_ParamLimits

0x9c56,	// (0x0001deb7) list_double_graphic_heading_pane_g3

0x0002,

0xf64d,	// (0x000238ae) list_double_graphic_heading_pane_g_ParamLimits

0xf64d,	// (0x000238ae) list_double_graphic_heading_pane_g

0x9c96,	// (0x0001def7) list_double_graphic_heading_pane_t1_ParamLimits

0x9c96,	// (0x0001def7) list_double_graphic_heading_pane_t1

0x9cac,	// (0x0001df0d) list_double_graphic_heading_pane_t2_ParamLimits

0x9cac,	// (0x0001df0d) list_double_graphic_heading_pane_t2

0x0001,

0xf654,	// (0x000238b5) list_double_graphic_heading_pane_t_ParamLimits

0xf654,	// (0x000238b5) list_double_graphic_heading_pane_t

0x9bc3,	// (0x0001de24) list_double_time_pane_g1_ParamLimits

0x9bc3,	// (0x0001de24) list_double_time_pane_g1

0x9a56,	// (0x0001dcb7) list_double_time_pane_g2_ParamLimits

0x9a56,	// (0x0001dcb7) list_double_time_pane_g2

0x0001,

0xf659,	// (0x000238ba) list_double_time_pane_g_ParamLimits

0xf659,	// (0x000238ba) list_double_time_pane_g

0x9cbe,	// (0x0001df1f) list_double_time_pane_t1_ParamLimits

0x9cbe,	// (0x0001df1f) list_double_time_pane_t1

0x9cd4,	// (0x0001df35) list_double_time_pane_t2_ParamLimits

0x9cd4,	// (0x0001df35) list_double_time_pane_t2

0x9ce6,	// (0x0001df47) list_double_time_pane_t3_ParamLimits

0x9ce6,	// (0x0001df47) list_double_time_pane_t3

0x9cf8,	// (0x0001df59) list_double_time_pane_t4_ParamLimits

0x9cf8,	// (0x0001df59) list_double_time_pane_t4

0x0003,

0xf65e,	// (0x000238bf) list_double_time_pane_t_ParamLimits

0xf65e,	// (0x000238bf) list_double_time_pane_t

0x9b64,	// (0x0001ddc5) list_setting_pane_g1_ParamLimits

0x9b64,	// (0x0001ddc5) list_setting_pane_g1

0x9a9b,	// (0x0001dcfc) list_setting_pane_g2_ParamLimits

0x9a9b,	// (0x0001dcfc) list_setting_pane_g2

0x0001,

0xf667,	// (0x000238c8) list_setting_pane_g_ParamLimits

0xf667,	// (0x000238c8) list_setting_pane_g

0x9d0a,	// (0x0001df6b) list_setting_pane_t1_ParamLimits

0x9d0a,	// (0x0001df6b) list_setting_pane_t1

0x9d21,	// (0x0001df82) list_setting_pane_t2_ParamLimits

0x9d21,	// (0x0001df82) list_setting_pane_t2

0x0002,

0xf66c,	// (0x000238cd) list_setting_pane_t_ParamLimits

0xf66c,	// (0x000238cd) list_setting_pane_t

0x9d60,	// (0x0001dfc1) set_value_pane_cp_ParamLimits

0x9d60,	// (0x0001dfc1) set_value_pane_cp

0x9b64,	// (0x0001ddc5) list_setting_number_pane_g1_ParamLimits

0x9b64,	// (0x0001ddc5) list_setting_number_pane_g1

0x9a9b,	// (0x0001dcfc) list_setting_number_pane_g2_ParamLimits

0x9a9b,	// (0x0001dcfc) list_setting_number_pane_g2

0x0001,

0xf667,	// (0x000238c8) list_setting_number_pane_g_ParamLimits

0xf667,	// (0x000238c8) list_setting_number_pane_g

0x9d6e,	// (0x0001dfcf) list_setting_number_pane_t1_ParamLimits

0x9d6e,	// (0x0001dfcf) list_setting_number_pane_t1

0x9d82,	// (0x0001dfe3) list_setting_number_pane_t2_ParamLimits

0x9d82,	// (0x0001dfe3) list_setting_number_pane_t2

0x9d99,	// (0x0001dffa) list_setting_number_pane_t3_ParamLimits

0x9d99,	// (0x0001dffa) list_setting_number_pane_t3

0x0003,

0xf673,	// (0x000238d4) list_setting_number_pane_t_ParamLimits

0xf673,	// (0x000238d4) list_setting_number_pane_t

0x9d60,	// (0x0001dfc1) set_value_pane_ParamLimits

0x9d60,	// (0x0001dfc1) set_value_pane

0xda0e,	// (0x00021c6f) bg_set_opt_pane_ParamLimits

0xda0e,	// (0x00021c6f) bg_set_opt_pane

0xda2f,	// (0x00021c90) set_value_pane_t1

0xda3d,	// (0x00021c9e) slider_set_pane_cp3

0xda46,	// (0x00021ca7) volume_small_pane_cp

0xda4f,	// (0x00021cb0) list_form_gen_pane

0xda58,	// (0x00021cb9) scroll_pane_cp8

0x9ddc,	// (0x0001e03d) form_field_data_pane_ParamLimits

0x9ddc,	// (0x0001e03d) form_field_data_pane

0x9df7,	// (0x0001e058) form_field_data_wide_pane_ParamLimits

0x9df7,	// (0x0001e058) form_field_data_wide_pane

0x9e1b,	// (0x0001e07c) form_field_popup_pane_ParamLimits

0x9e1b,	// (0x0001e07c) form_field_popup_pane

0xda79,	// (0x00021cda) form_field_popup_wide_pane_ParamLimits

0xda79,	// (0x00021cda) form_field_popup_wide_pane

0xda9a,	// (0x00021cfb) form_field_slider_pane_ParamLimits

0xda9a,	// (0x00021cfb) form_field_slider_pane

0xdaad,	// (0x00021d0e) form_field_slider_wide_pane_ParamLimits

0xdaad,	// (0x00021d0e) form_field_slider_wide_pane

0xdac0,	// (0x00021d21) data_form_pane

0x9e47,	// (0x0001e0a8) form_field_data_pane_t1

0xdacc,	// (0x00021d2d) input_focus_pane

0xdada,	// (0x00021d3b) data_form_wide_pane

0xdb17,	// (0x00021d78) form_field_data_wide_pane_t1

0xd7c1,	// (0x00021a22) input_focus_pane_cp6

0x9e61,	// (0x0001e0c2) form_field_popup_pane_t1

0xdacc,	// (0x00021d2d) input_focus_pane_cp7

0xdb39,	// (0x00021d9a) list_form_pane

0xdb4d,	// (0x00021dae) form_field_popup_wide_pane_t1

0xdacc,	// (0x00021d2d) input_focus_pane_cp8

0xdb62,	// (0x00021dc3) list_form_wide_pane

0x9e83,	// (0x0001e0e4) form_field_slider_pane_t1_ParamLimits

0x9e83,	// (0x0001e0e4) form_field_slider_pane_t1

0x9e9b,	// (0x0001e0fc) form_field_slider_pane_t2_ParamLimits

0x9e9b,	// (0x0001e0fc) form_field_slider_pane_t2

0x0001,

0xf683,	// (0x000238e4) form_field_slider_pane_t_ParamLimits

0xf683,	// (0x000238e4) form_field_slider_pane_t

0xb944,	// (0x0001fba5) input_focus_pane_cp9_ParamLimits

0xb944,	// (0x0001fba5) input_focus_pane_cp9

0x9eb0,	// (0x0001e111) slider_cont_pane_ParamLimits

0x9eb0,	// (0x0001e111) slider_cont_pane

0xdb71,	// (0x00021dd2) form_field_slider_wide_pane_t1_ParamLimits

0xdb71,	// (0x00021dd2) form_field_slider_wide_pane_t1

0xdb83,	// (0x00021de4) form_field_slider_wide_pane_t2_ParamLimits

0xdb83,	// (0x00021de4) form_field_slider_wide_pane_t2

0x0001,

0xf688,	// (0x000238e9) form_field_slider_wide_pane_t_ParamLimits

0xf688,	// (0x000238e9) form_field_slider_wide_pane_t

0xb944,	// (0x0001fba5) input_focus_pane_cp10_ParamLimits

0xb944,	// (0x0001fba5) input_focus_pane_cp10

0x9ec4,	// (0x0001e125) slider_cont_pane_cp1_ParamLimits

0x9ec4,	// (0x0001e125) slider_cont_pane_cp1

0x9ed8,	// (0x0001e139) slider_form_pane_cp

0xdb95,	// (0x00021df6) input_focus_pane_g1

0xdb9d,	// (0x00021dfe) input_focus_pane_g2

0xdba5,	// (0x00021e06) input_focus_pane_g3

0xdbad,	// (0x00021e0e) input_focus_pane_g4

0xdbb5,	// (0x00021e16) input_focus_pane_g5

0xdbbd,	// (0x00021e1e) input_focus_pane_g6

0xdbc5,	// (0x00021e26) input_focus_pane_g7

0xdbcd,	// (0x00021e2e) input_focus_pane_g8

0xdbd5,	// (0x00021e36) input_focus_pane_g9

0xb8e0,	// (0x0001fb41) input_focus_pane_g10

0x0009,

0xf68d,	// (0x000238ee) input_focus_pane_g

0x2058,	// (0x000162b9) wait_border_pane_g3_copy1

0x9ee0,	// (0x0001e141) data_form_pane_t1

0xb8e0,	// (0x0001fb41) wait_anim_pane_g1_copy1

0xb47a,	// (0x0001f6db) data_form_wide_pane_t1

0xdbdd,	// (0x00021e3e) list_form_graphic_pane_cp_ParamLimits

0xdbdd,	// (0x00021e3e) list_form_graphic_pane_cp

0x2fe0,	// (0x00017241) slider_form_pane_g1

0x2fe9,	// (0x0001724a) slider_form_pane_g2

0x0006,

0xf98b,	// (0x00023bec) slider_form_pane_g

0x9efc,	// (0x0001e15d) list_form_graphic_pane_ParamLimits

0x9efc,	// (0x0001e15d) list_form_graphic_pane

0xdbef,	// (0x00021e50) list_form_graphic_pane_g1

0xdbf7,	// (0x00021e58) list_form_graphic_pane_t1_ParamLimits

0xdbf7,	// (0x00021e58) list_form_graphic_pane_t1

0xb952,	// (0x0001fbb3) list_highlight_pane_cp5_ParamLimits

0xb952,	// (0x0001fbb3) list_highlight_pane_cp5

0x9f0d,	// (0x0001e16e) find_pane_g1

0xdc0c,	// (0x00021e6d) input_find_pane

0x9f16,	// (0x0001e177) input_find_pane_g1_ParamLimits

0x9f16,	// (0x0001e177) input_find_pane_g1

0x9f22,	// (0x0001e183) input_find_pane_t1_ParamLimits

0x9f22,	// (0x0001e183) input_find_pane_t1

0x9f37,	// (0x0001e198) input_find_pane_t2_ParamLimits

0x9f37,	// (0x0001e198) input_find_pane_t2

0x0001,

0xf6a2,	// (0x00023903) input_find_pane_t_ParamLimits

0xf6a2,	// (0x00023903) input_find_pane_t

0xdc15,	// (0x00021e76) input_focus_pane_cp5_ParamLimits

0xdc15,	// (0x00021e76) input_focus_pane_cp5

0xdc23,	// (0x00021e84) bg_popup_window_pane_cp2_ParamLimits

0xdc23,	// (0x00021e84) bg_popup_window_pane_cp2

0xdc30,	// (0x00021e91) listscroll_menu_pane_ParamLimits

0xdc30,	// (0x00021e91) listscroll_menu_pane

0x9f58,	// (0x0001e1b9) popup_submenu_window_ParamLimits

0x9f58,	// (0x0001e1b9) popup_submenu_window

0xdc3c,	// (0x00021e9d) find_popup_pane_g1

0xdc44,	// (0x00021ea5) input_popup_find_pane_cp

0xdc15,	// (0x00021e76) input_focus_pane_cp4_ParamLimits

0xdc15,	// (0x00021e76) input_focus_pane_cp4

0xdc4e,	// (0x00021eaf) input_popup_find_pane_t1_ParamLimits

0xdc4e,	// (0x00021eaf) input_popup_find_pane_t1

0xb8ea,	// (0x0001fb4b) bg_popup_sub_pane_cp

0xdc7c,	// (0x00021edd) listscroll_popup_sub_pane

0xdc84,	// (0x00021ee5) list_submenu_pane_ParamLimits

0xdc84,	// (0x00021ee5) list_submenu_pane

0xdc95,	// (0x00021ef6) scroll_pane_cp4

0xdc9d,	// (0x00021efe) list_single_popup_submenu_pane_ParamLimits

0xdc9d,	// (0x00021efe) list_single_popup_submenu_pane

0xdcb2,	// (0x00021f13) list_single_popup_submenu_pane_g1

0xdcba,	// (0x00021f1b) list_single_popup_submenu_pane_t1_ParamLimits

0xdcba,	// (0x00021f1b) list_single_popup_submenu_pane_t1

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp1_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp1

0x9f96,	// (0x0001e1f7) tabs_2_active_pane_g1

0x9f9e,	// (0x0001e1ff) tabs_2_active_pane_t1

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp1_ParamLimits

0xb944,	// (0x0001fba5) bg_passive_tab_pane_cp1

0x9f96,	// (0x0001e1f7) tabs_2_passive_pane_g1

0x9f9e,	// (0x0001e1ff) tabs_2_passive_pane_t1

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp4

0x9fb0,	// (0x0001e211) tabs_2_long_active_pane_t1

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp4

0xe93b,	// (0x00022b9c) list_single_midp_graphic_pane_g4_ParamLimits

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp5

0x9fc3,	// (0x0001e224) tabs_3_long_active_pane_t1

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp5

0xe93b,	// (0x00022b9c) list_single_midp_graphic_pane_g4

0xb952,	// (0x0001fbb3) bg_popup_window_pane_cp13_ParamLimits

0xb952,	// (0x0001fbb3) bg_popup_window_pane_cp13

0xdcd8,	// (0x00021f39) listscroll_popup_fast_pane_ParamLimits

0xdcd8,	// (0x00021f39) listscroll_popup_fast_pane

0xdce7,	// (0x00021f48) grid_popup_fast_pane_ParamLimits

0xdce7,	// (0x00021f48) grid_popup_fast_pane

0xdcf9,	// (0x00021f5a) scroll_pane_cp9_ParamLimits

0xdcf9,	// (0x00021f5a) scroll_pane_cp9

0x4ea9,	// (0x0001910a) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4ea9,	// (0x0001910a) list_single_graphic_hl_pane_t1_cp2

0xdd1d,	// (0x00021f7e) input_focus_pane_cp20_ParamLimits

0xdd1d,	// (0x00021f7e) input_focus_pane_cp20

0xdd2b,	// (0x00021f8c) query_popup_data_pane_t1_ParamLimits

0xdd2b,	// (0x00021f8c) query_popup_data_pane_t1

0xdd3e,	// (0x00021f9f) query_popup_data_pane_t2_ParamLimits

0xdd3e,	// (0x00021f9f) query_popup_data_pane_t2

0xdd84,	// (0x00021fe5) query_popup_data_pane_t3_ParamLimits

0xdd84,	// (0x00021fe5) query_popup_data_pane_t3

0xddc5,	// (0x00022026) query_popup_data_pane_t4_ParamLimits

0xddc5,	// (0x00022026) query_popup_data_pane_t4

0xde01,	// (0x00022062) query_popup_data_pane_t5_ParamLimits

0xde01,	// (0x00022062) query_popup_data_pane_t5

0x0004,

0xf6a7,	// (0x00023908) query_popup_data_pane_t_ParamLimits

0xf6a7,	// (0x00023908) query_popup_data_pane_t

0xdb95,	// (0x00021df6) bg_set_opt_pane_g1

0xdb9d,	// (0x00021dfe) bg_set_opt_pane_g2

0xdba5,	// (0x00021e06) bg_set_opt_pane_g3

0xdbad,	// (0x00021e0e) bg_set_opt_pane_g4

0xdbb5,	// (0x00021e16) bg_set_opt_pane_g5

0xdbbd,	// (0x00021e1e) bg_set_opt_pane_g6

0xdbc5,	// (0x00021e26) bg_set_opt_pane_g7

0xdbcd,	// (0x00021e2e) bg_set_opt_pane_g8

0xdbd5,	// (0x00021e36) bg_set_opt_pane_g9

0x0008,

0xf6b2,	// (0x00023913) bg_set_opt_pane_g

0xe687,	// (0x000228e8) control_top_pane_stacon_ParamLimits

0xe687,	// (0x000228e8) control_top_pane_stacon

0xe6da,	// (0x0002293b) signal_pane_stacon_ParamLimits

0xe6da,	// (0x0002293b) signal_pane_stacon

0x0725,	// (0x00014986) stacon_top_pane_g1_ParamLimits

0x0725,	// (0x00014986) stacon_top_pane_g1

0xe6ff,	// (0x00022960) title_pane_stacon_ParamLimits

0xe6ff,	// (0x00022960) title_pane_stacon

0xe729,	// (0x0002298a) uni_indicator_pane_stacon_ParamLimits

0xe729,	// (0x0002298a) uni_indicator_pane_stacon

0xe741,	// (0x000229a2) battery_pane_stacon_ParamLimits

0xe741,	// (0x000229a2) battery_pane_stacon

0xe785,	// (0x000229e6) control_bottom_pane_stacon_ParamLimits

0xe785,	// (0x000229e6) control_bottom_pane_stacon

0xe7a8,	// (0x00022a09) navi_pane_stacon_ParamLimits

0xe7a8,	// (0x00022a09) navi_pane_stacon

0x0747,	// (0x000149a8) stacon_bottom_pane_g1_ParamLimits

0x0747,	// (0x000149a8) stacon_bottom_pane_g1

0xe3ed,	// (0x0002264e) aid_levels_signal_lsc_ParamLimits

0xe3ed,	// (0x0002264e) aid_levels_signal_lsc

0xe404,	// (0x00022665) signal_pane_stacon_g1_ParamLimits

0xe404,	// (0x00022665) signal_pane_stacon_g1

0xe418,	// (0x00022679) signal_pane_stacon_g2_ParamLimits

0xe418,	// (0x00022679) signal_pane_stacon_g2

0x0001,

0xf6c5,	// (0x00023926) signal_pane_stacon_g_ParamLimits

0xf6c5,	// (0x00023926) signal_pane_stacon_g

0xe44d,	// (0x000226ae) title_pane_stacon_t1_ParamLimits

0xe44d,	// (0x000226ae) title_pane_stacon_t1

0xde45,	// (0x000220a6) uni_indicator_pane_stacon_g1

0xde4f,	// (0x000220b0) uni_indicator_pane_stacon_g2

0xde59,	// (0x000220ba) uni_indicator_pane_stacon_g3

0xde63,	// (0x000220c4) uni_indicator_pane_stacon_g4

0x0003,

0xf6d1,	// (0x00023932) uni_indicator_pane_stacon_g

0xe472,	// (0x000226d3) control_top_pane_stacon_g1

0xe47a,	// (0x000226db) control_top_pane_stacon_t1_ParamLimits

0xe47a,	// (0x000226db) control_top_pane_stacon_t1

0xe4b1,	// (0x00022712) aid_levels_battery_lsc_ParamLimits

0xe4b1,	// (0x00022712) aid_levels_battery_lsc

0xe4c9,	// (0x0002272a) battery_pane_stacon_g1_ParamLimits

0xe4c9,	// (0x0002272a) battery_pane_stacon_g1

0xe4dc,	// (0x0002273d) battery_pane_stacon_g2_ParamLimits

0xe4dc,	// (0x0002273d) battery_pane_stacon_g2

0x0001,

0xf6da,	// (0x0002393b) battery_pane_stacon_g_ParamLimits

0xf6da,	// (0x0002393b) battery_pane_stacon_g

0xe51a,	// (0x0002277b) navi_icon_pane_stacon

0xe52e,	// (0x0002278f) navi_navi_pane_stacon

0xe51a,	// (0x0002277b) navi_text_pane_stacon

0xe472,	// (0x000226d3) control_bottom_pane_stacon_g1

0xe544,	// (0x000227a5) control_bottom_pane_stacon_t1_ParamLimits

0xe544,	// (0x000227a5) control_bottom_pane_stacon_t1

0x9fd5,	// (0x0001e236) grid_app_pane_ParamLimits

0x9fd5,	// (0x0001e236) grid_app_pane

0xa00d,	// (0x0001e26e) scroll_pane_cp15_ParamLimits

0xa00d,	// (0x0001e26e) scroll_pane_cp15

0xa022,	// (0x0001e283) cell_app_pane_ParamLimits

0xa022,	// (0x0001e283) cell_app_pane

0xa06f,	// (0x0001e2d0) cell_app_pane_g1_ParamLimits

0xa06f,	// (0x0001e2d0) cell_app_pane_g1

0xde87,	// (0x000220e8) cell_app_pane_g2_ParamLimits

0xde87,	// (0x000220e8) cell_app_pane_g2

0x0001,

0xf6df,	// (0x00023940) cell_app_pane_g_ParamLimits

0xf6df,	// (0x00023940) cell_app_pane_g

0xde93,	// (0x000220f4) cell_app_pane_t1_ParamLimits

0xde93,	// (0x000220f4) cell_app_pane_t1

0xdeaa,	// (0x0002210b) grid_highlight_pane_ParamLimits

0xdeaa,	// (0x0002210b) grid_highlight_pane

0xdb95,	// (0x00021df6) cell_highlight_pane_g1

0xdb9d,	// (0x00021dfe) cell_highlight_pane_g2

0xdba5,	// (0x00021e06) cell_highlight_pane_g3

0xdbad,	// (0x00021e0e) cell_highlight_pane_g4

0xdbb5,	// (0x00021e16) cell_highlight_pane_g5

0xdbbd,	// (0x00021e1e) cell_highlight_pane_g6

0xdbc5,	// (0x00021e26) cell_highlight_pane_g7

0xdbcd,	// (0x00021e2e) cell_highlight_pane_g8

0xdbd5,	// (0x00021e36) cell_highlight_pane_g9

0xb8e0,	// (0x0001fb41) cell_highlight_pane_g10

0x0009,

0xf68d,	// (0x000238ee) cell_highlight_pane_g

0xdebb,	// (0x0002211c) bg_scroll_pane

0xe585,	// (0x000227e6) scroll_handle_pane

0xdf02,	// (0x00022163) scroll_bg_pane_g1

0xdf17,	// (0x00022178) scroll_bg_pane_g2

0xdf2f,	// (0x00022190) scroll_bg_pane_g3

0x0002,

0xf6e4,	// (0x00023945) scroll_bg_pane_g

0xdf44,	// (0x000221a5) scroll_handle_focus_pane_ParamLimits

0xdf44,	// (0x000221a5) scroll_handle_focus_pane

0xdf02,	// (0x00022163) scroll_handle_pane_g1

0xdf51,	// (0x000221b2) scroll_handle_pane_g2

0xdf2f,	// (0x00022190) scroll_handle_pane_g3

0x0002,

0xf6eb,	// (0x0002394c) scroll_handle_pane_g

0xdc15,	// (0x00021e76) bg_popup_sub_pane_cp21_ParamLimits

0xdc15,	// (0x00021e76) bg_popup_sub_pane_cp21

0xdf65,	// (0x000221c6) popup_fep_japan_predictive_window_t1_ParamLimits

0xdf65,	// (0x000221c6) popup_fep_japan_predictive_window_t1

0xdf7c,	// (0x000221dd) popup_fep_japan_predictive_window_t2_ParamLimits

0xdf7c,	// (0x000221dd) popup_fep_japan_predictive_window_t2

0xdfaf,	// (0x00022210) popup_fep_japan_predictive_window_t3_ParamLimits

0xdfaf,	// (0x00022210) popup_fep_japan_predictive_window_t3

0x0002,

0xf6f2,	// (0x00023953) popup_fep_japan_predictive_window_t_ParamLimits

0xf6f2,	// (0x00023953) popup_fep_japan_predictive_window_t

0xb8ea,	// (0x0001fb4b) bg_popup_sub_pane_cp23

0xdfe6,	// (0x00022247) listscroll_japin_cand_pane

0xdfee,	// (0x0002224f) popup_fep_japan_candidate_window_t1

0xdffc,	// (0x0002225d) candidate_pane_ParamLimits

0xdffc,	// (0x0002225d) candidate_pane

0xe00e,	// (0x0002226f) scroll_pane_cp30

0xe018,	// (0x00022279) list_single_popup_jap_candidate_pane_ParamLimits

0xe018,	// (0x00022279) list_single_popup_jap_candidate_pane

0xb8ea,	// (0x0001fb4b) list_highlight_pane_cp30

0xe02c,	// (0x0002228d) list_single_popup_jap_candidate_pane_t1

0xa08f,	// (0x0001e2f0) level_1_signal

0xa0a1,	// (0x0001e302) level_2_signal

0xa0b4,	// (0x0001e315) level_3_signal

0xa0c7,	// (0x0001e328) level_4_signal

0xa0da,	// (0x0001e33b) level_5_signal

0xa0ed,	// (0x0001e34e) level_6_signal

0xa100,	// (0x0001e361) level_7_signal

0xa08f,	// (0x0001e2f0) level_1_battery

0xa0a1,	// (0x0001e302) level_2_battery

0xa0b4,	// (0x0001e315) level_3_battery

0xa0c7,	// (0x0001e328) level_4_battery

0xa0da,	// (0x0001e33b) level_5_battery

0xa0ed,	// (0x0001e34e) level_6_battery

0xa100,	// (0x0001e361) level_7_battery

0xe053,	// (0x000222b4) list_menu_pane_ParamLimits

0xe053,	// (0x000222b4) list_menu_pane

0xe069,	// (0x000222ca) scroll_pane_cp25_ParamLimits

0xe069,	// (0x000222ca) scroll_pane_cp25

0xe082,	// (0x000222e3) list_double2_graphic_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double2_graphic_pane_cp2

0xe082,	// (0x000222e3) list_double2_large_graphic_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double2_large_graphic_pane_cp2

0xe082,	// (0x000222e3) list_double2_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double2_pane_cp2

0xe082,	// (0x000222e3) list_double_graphic_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double_graphic_pane_cp2

0xe082,	// (0x000222e3) list_double_large_graphic_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double_large_graphic_pane_cp2

0xe082,	// (0x000222e3) list_double_number_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double_number_pane_cp2

0xe082,	// (0x000222e3) list_double_pane_cp2_ParamLimits

0xe082,	// (0x000222e3) list_double_pane_cp2

0xa126,	// (0x0001e387) list_single_2graphic_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_2graphic_pane_cp2

0xa126,	// (0x0001e387) list_single_graphic_heading_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_graphic_heading_pane_cp2

0xa126,	// (0x0001e387) list_single_graphic_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_graphic_pane_cp2

0xa126,	// (0x0001e387) list_single_heading_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_heading_pane_cp2

0xe092,	// (0x000222f3) list_single_large_graphic_pane_cp2_ParamLimits

0xe092,	// (0x000222f3) list_single_large_graphic_pane_cp2

0xa126,	// (0x0001e387) list_single_number_heading_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_number_heading_pane_cp2

0xa126,	// (0x0001e387) list_single_number_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_number_pane_cp2

0xa126,	// (0x0001e387) list_single_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_pane_cp2

0xe0ab,	// (0x0002230c) bg_popup_sub_pane_cp22

0xe637,	// (0x00022898) popup_side_volume_key_window_g1

0xe661,	// (0x000228c2) popup_side_volume_key_window_t1

0xe67f,	// (0x000228e0) volume_small_pane_cp1

0xb944,	// (0x0001fba5) bg_popup_sub_pane_cp24_ParamLimits

0xb944,	// (0x0001fba5) bg_popup_sub_pane_cp24

0xe0c1,	// (0x00022322) fep_china_uni_candidate_pane_ParamLimits

0xe0c1,	// (0x00022322) fep_china_uni_candidate_pane

0xe0d5,	// (0x00022336) fep_china_uni_entry_pane

0xe0e5,	// (0x00022346) popup_fep_china_uni_window_g1

0xe101,	// (0x00022362) fep_china_uni_entry_pane_g1

0xe10b,	// (0x0002236c) fep_china_uni_entry_pane_g2

0x0001,

0xf723,	// (0x00023984) fep_china_uni_entry_pane_g

0xe115,	// (0x00022376) fep_entry_item_pane

0xe11f,	// (0x00022380) fep_candidate_item_pane

0xe127,	// (0x00022388) fep_china_uni_candidate_pane_g1

0xe131,	// (0x00022392) fep_china_uni_candidate_pane_g2

0xe139,	// (0x0002239a) fep_china_uni_candidate_pane_g3

0xe141,	// (0x000223a2) fep_china_uni_candidate_pane_g4

0x0003,

0xf728,	// (0x00023989) fep_china_uni_candidate_pane_g

0xb8e0,	// (0x0001fb41) fep_entry_item_pane_g1

0xe14b,	// (0x000223ac) fep_entry_item_pane_t1_ParamLimits

0xe14b,	// (0x000223ac) fep_entry_item_pane_t1

0xe161,	// (0x000223c2) fep_candidate_item_pane_t1_ParamLimits

0xe161,	// (0x000223c2) fep_candidate_item_pane_t1

0xe176,	// (0x000223d7) fep_candidate_item_pane_t2_ParamLimits

0xe176,	// (0x000223d7) fep_candidate_item_pane_t2

0x0001,

0xf731,	// (0x00023992) fep_candidate_item_pane_t_ParamLimits

0xf731,	// (0x00023992) fep_candidate_item_pane_t

0xb952,	// (0x0001fbb3) list_highlight_pane_cp31_ParamLimits

0xb952,	// (0x0001fbb3) list_highlight_pane_cp31

0xe188,	// (0x000223e9) level_1_signal_lsc

0xe191,	// (0x000223f2) level_2_signal_lsc

0xe19a,	// (0x000223fb) level_3_signal_lsc

0xe1a3,	// (0x00022404) level_4_signal_lsc

0xe1ac,	// (0x0002240d) level_5_signal_lsc

0xe1b5,	// (0x00022416) level_6_signal_lsc

0xe1be,	// (0x0002241f) level_7_signal_lsc

0xe1be,	// (0x0002241f) level_1_battery_lsc

0xe1c7,	// (0x00022428) level_2_battery_lsc

0xe1d0,	// (0x00022431) level_3_battery_lsc

0xe1d9,	// (0x0002243a) level_4_battery_lsc

0xe1e2,	// (0x00022443) level_5_battery_lsc

0xe1eb,	// (0x0002244c) level_6_battery_lsc

0xe188,	// (0x000223e9) level_7_battery_lsc

0xe1f4,	// (0x00022455) scroll_handle_focus_pane_g1

0xe1fd,	// (0x0002245e) scroll_handle_focus_pane_g2

0xe206,	// (0x00022467) scroll_handle_focus_pane_g3

0x0002,

0xf736,	// (0x00023997) scroll_handle_focus_pane_g

0xa1b8,	// (0x0001e419) list_single_2graphic_pane_g1_ParamLimits

0xa1b8,	// (0x0001e419) list_single_2graphic_pane_g1

0x9a1f,	// (0x0001dc80) list_single_2graphic_pane_g2_ParamLimits

0x9a1f,	// (0x0001dc80) list_single_2graphic_pane_g2

0x1913,	// (0x00015b74) list_single_2graphic_pane_g3_ParamLimits

0x1913,	// (0x00015b74) list_single_2graphic_pane_g3

0xa1c4,	// (0x0001e425) list_single_2graphic_pane_g4_ParamLimits

0xa1c4,	// (0x0001e425) list_single_2graphic_pane_g4

0x0003,

0xf73d,	// (0x0002399e) list_single_2graphic_pane_g_ParamLimits

0xf73d,	// (0x0002399e) list_single_2graphic_pane_g

0xa1d5,	// (0x0001e436) list_single_2graphic_pane_t1_ParamLimits

0xa1d5,	// (0x0001e436) list_single_2graphic_pane_t1

0xa203,	// (0x0001e464) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xa203,	// (0x0001e464) list_double2_graphic_large_graphic_pane_g1

0x9a8a,	// (0x0001dceb) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x9a8a,	// (0x0001dceb) list_double2_graphic_large_graphic_pane_g2

0x9a9b,	// (0x0001dcfc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x9a9b,	// (0x0001dcfc) list_double2_graphic_large_graphic_pane_g3

0xa215,	// (0x0001e476) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xa215,	// (0x0001e476) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf746,	// (0x000239a7) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf746,	// (0x000239a7) list_double2_graphic_large_graphic_pane_g

0xa221,	// (0x0001e482) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xa221,	// (0x0001e482) list_double2_graphic_large_graphic_pane_t1

0xa237,	// (0x0001e498) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xa237,	// (0x0001e498) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf74f,	// (0x000239b0) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf74f,	// (0x000239b0) list_double2_graphic_large_graphic_pane_t

0x0809,	// (0x00014a6a) popup_fast_swap_window_ParamLimits

0x0809,	// (0x00014a6a) popup_fast_swap_window

0x0827,	// (0x00014a88) popup_side_volume_key_window

0x0845,	// (0x00014aa6) stacon_top_pane

0x084f,	// (0x00014ab0) status_pane_ParamLimits

0x084f,	// (0x00014ab0) status_pane

0x0845,	// (0x00014aa6) status_small_pane

0xb8ea,	// (0x0001fb4b) control_pane

0xb8ea,	// (0x0001fb4b) stacon_bottom_pane

0xda58,	// (0x00021cb9) scroll_pane_cp121

0xda4f,	// (0x00021cb0) set_content_pane

0xa249,	// (0x0001e4aa) bg_active_tab_pane_g1_cp1

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp1

0xa252,	// (0x0001e4b3) bg_active_tab_pane_g3_cp1

0xa249,	// (0x0001e4aa) bg_passive_tab_pane_g1_cp1

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp1

0xa252,	// (0x0001e4b3) bg_passive_tab_pane_g3_cp1

0xa25b,	// (0x0001e4bc) bg_active_tab_pane_g1_cp2

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp2

0xa264,	// (0x0001e4c5) bg_active_tab_pane_g3_cp2

0xa25b,	// (0x0001e4bc) bg_passive_tab_pane_g1_cp2

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp2

0xa264,	// (0x0001e4c5) bg_passive_tab_pane_g3_cp2

0xa26d,	// (0x0001e4ce) bg_active_tab_pane_g1_cp3

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp3

0xa276,	// (0x0001e4d7) bg_active_tab_pane_g3_cp3

0xa26d,	// (0x0001e4ce) bg_passive_tab_pane_g1_cp3

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp3

0xa276,	// (0x0001e4d7) bg_passive_tab_pane_g3_cp3

0xa27f,	// (0x0001e4e0) bg_active_tab_pane_g1_cp4

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp4

0xa288,	// (0x0001e4e9) bg_active_tab_pane_g3_cp4

0xa27f,	// (0x0001e4e0) bg_passive_tab_pane_g1_cp4

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp4

0xa288,	// (0x0001e4e9) bg_passive_tab_pane_g3_cp4

0x0763,	// (0x000149c4) bg_active_tab_pane_g1_cp5

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp5

0x076c,	// (0x000149cd) bg_active_tab_pane_g3_cp5

0x0763,	// (0x000149c4) bg_passive_tab_pane_g1_cp5

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp5

0x076c,	// (0x000149cd) bg_passive_tab_pane_g3_cp5

0x36a3,	// (0x00017904) list_set_graphic_pane_ParamLimits

0x36a3,	// (0x00017904) list_set_graphic_pane

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp4

0xa291,	// (0x0001e4f2) list_set_graphic_pane_g1_ParamLimits

0xa291,	// (0x0001e4f2) list_set_graphic_pane_g1

0xa29d,	// (0x0001e4fe) list_set_graphic_pane_g2_ParamLimits

0xa29d,	// (0x0001e4fe) list_set_graphic_pane_g2

0x0001,

0xf754,	// (0x000239b5) list_set_graphic_pane_g_ParamLimits

0xf754,	// (0x000239b5) list_set_graphic_pane_g

0x0009,

0xfadc,	// (0x00023d3d) volume_small_pane_cp_g

0xa2c1,	// (0x0001e522) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xa2c1,	// (0x0001e522) list_double2_large_graphic_pane_g1_cp2

0xa2cf,	// (0x0001e530) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xa2cf,	// (0x0001e530) list_double2_large_graphic_pane_g2_cp2

0x07d9,	// (0x00014a3a) list_double2_large_graphic_pane_g3_cp2

0x07e1,	// (0x00014a42) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x07e1,	// (0x00014a42) list_double2_large_graphic_pane_t1_cp2

0x07f7,	// (0x00014a58) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x07f7,	// (0x00014a58) list_double2_large_graphic_pane_t2_cp2

0xb202,	// (0x0001f463) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb202,	// (0x0001f463) list_double_large_graphic_pane_g1_cp2

0xb215,	// (0x0001f476) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xb215,	// (0x0001f476) list_double_large_graphic_pane_g2_cp2

0x096d,	// (0x00014bce) list_double_large_graphic_pane_g3_cp2

0x2b60,	// (0x00016dc1) list_double_large_graphic_pane_g4_cp

0x2b68,	// (0x00016dc9) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x2b68,	// (0x00016dc9) list_double_large_graphic_pane_t1_cp2

0x2b7f,	// (0x00016de0) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x2b7f,	// (0x00016de0) list_double_large_graphic_pane_t2_cp2

0xa2e0,	// (0x0001e541) list_double2_graphic_pane_g1_cp2_ParamLimits

0xa2e0,	// (0x0001e541) list_double2_graphic_pane_g1_cp2

0xa2ee,	// (0x0001e54f) list_double2_graphic_pane_g2_cp2_ParamLimits

0xa2ee,	// (0x0001e54f) list_double2_graphic_pane_g2_cp2

0xa2ff,	// (0x0001e560) list_double2_graphic_pane_g3_cp2

0x0886,	// (0x00014ae7) list_double2_graphic_pane_t1_cp2_ParamLimits

0x0886,	// (0x00014ae7) list_double2_graphic_pane_t1_cp2

0x089c,	// (0x00014afd) list_double2_graphic_pane_t2_cp2_ParamLimits

0x089c,	// (0x00014afd) list_double2_graphic_pane_t2_cp2

0x08ae,	// (0x00014b0f) list_single_number_heading_pane_g1_cp2_ParamLimits

0x08ae,	// (0x00014b0f) list_single_number_heading_pane_g1_cp2

0x08ba,	// (0x00014b1b) list_single_number_heading_pane_g2_cp2

0x08c2,	// (0x00014b23) list_single_number_heading_pane_t1_cp2_ParamLimits

0x08c2,	// (0x00014b23) list_single_number_heading_pane_t1_cp2

0xa309,	// (0x0001e56a) list_single_number_heading_pane_t2_cp2_ParamLimits

0xa309,	// (0x0001e56a) list_single_number_heading_pane_t2_cp2

0x08ec,	// (0x00014b4d) list_single_number_heading_pane_t3_cp2_ParamLimits

0x08ec,	// (0x00014b4d) list_single_number_heading_pane_t3_cp2

0x08ae,	// (0x00014b0f) list_single_heading_pane_g1_cp2_ParamLimits

0x08ae,	// (0x00014b0f) list_single_heading_pane_g1_cp2

0x08ba,	// (0x00014b1b) list_single_heading_pane_g2_cp2

0x08c2,	// (0x00014b23) list_single_heading_pane_t1_cp2_ParamLimits

0x08c2,	// (0x00014b23) list_single_heading_pane_t1_cp2

0xb1ee,	// (0x0001f44f) list_single_heading_pane_t2_cp2_ParamLimits

0xb1ee,	// (0x0001f44f) list_single_heading_pane_t2_cp2

0x287e,	// (0x00016adf) list_double_graphic_pane_g1_cp2_ParamLimits

0x287e,	// (0x00016adf) list_double_graphic_pane_g1_cp2

0x288a,	// (0x00016aeb) list_double_graphic_pane_g2_cp2_ParamLimits

0x288a,	// (0x00016aeb) list_double_graphic_pane_g2_cp2

0x2899,	// (0x00016afa) list_double_graphic_pane_g3_cp2

0x28a1,	// (0x00016b02) list_double_graphic_pane_t1_cp2_ParamLimits

0x28a1,	// (0x00016b02) list_double_graphic_pane_t1_cp2

0x28b7,	// (0x00016b18) list_double_graphic_pane_t2_cp2_ParamLimits

0x28b7,	// (0x00016b18) list_double_graphic_pane_t2_cp2

0x0961,	// (0x00014bc2) list_double_number_pane_g1_cp2_ParamLimits

0x0961,	// (0x00014bc2) list_double_number_pane_g1_cp2

0x096d,	// (0x00014bce) list_double_number_pane_g2_cp2

0xb188,	// (0x0001f3e9) list_double_number_pane_t1_cp2_ParamLimits

0xb188,	// (0x0001f3e9) list_double_number_pane_t1_cp2

0x2856,	// (0x00016ab7) list_double_number_pane_t2_cp2_ParamLimits

0x2856,	// (0x00016ab7) list_double_number_pane_t2_cp2

0x286c,	// (0x00016acd) list_double_number_pane_t3_cp2_ParamLimits

0x286c,	// (0x00016acd) list_double_number_pane_t3_cp2

0xb0d6,	// (0x0001f337) list_single_graphic_pane_g1_cp2_ParamLimits

0xb0d6,	// (0x0001f337) list_single_graphic_pane_g1_cp2

0x09c7,	// (0x00014c28) list_single_graphic_pane_g2_cp2_ParamLimits

0x09c7,	// (0x00014c28) list_single_graphic_pane_g2_cp2

0x09d3,	// (0x00014c34) list_single_graphic_pane_g3_cp2

0x2701,	// (0x00016962) list_single_graphic_pane_t1_cp2_ParamLimits

0x2701,	// (0x00016962) list_single_graphic_pane_t1_cp2

0x09c7,	// (0x00014c28) list_single_number_pane_g1_cp2_ParamLimits

0x09c7,	// (0x00014c28) list_single_number_pane_g1_cp2

0x09d3,	// (0x00014c34) list_single_number_pane_g2_cp2

0x2701,	// (0x00016962) list_single_number_pane_t1_cp2_ParamLimits

0x2701,	// (0x00016962) list_single_number_pane_t1_cp2

0xb0c2,	// (0x0001f323) list_single_number_pane_t2_cp2_ParamLimits

0xb0c2,	// (0x0001f323) list_single_number_pane_t2_cp2

0xa2cf,	// (0x0001e530) list_double2_pane_g1_cp2_ParamLimits

0xa2cf,	// (0x0001e530) list_double2_pane_g1_cp2

0x07d9,	// (0x00014a3a) list_double2_pane_g2_cp2

0x0939,	// (0x00014b9a) list_double2_pane_t1_cp2_ParamLimits

0x0939,	// (0x00014b9a) list_double2_pane_t1_cp2

0x094f,	// (0x00014bb0) list_double2_pane_t2_cp2_ParamLimits

0x094f,	// (0x00014bb0) list_double2_pane_t2_cp2

0x0961,	// (0x00014bc2) list_double_pane_g1_cp2_ParamLimits

0x0961,	// (0x00014bc2) list_double_pane_g1_cp2

0x096d,	// (0x00014bce) list_double_pane_g2_cp2

0x0975,	// (0x00014bd6) list_double_pane_t1_cp2_ParamLimits

0x0975,	// (0x00014bd6) list_double_pane_t1_cp2

0x098b,	// (0x00014bec) list_double_pane_t2_cp2_ParamLimits

0x098b,	// (0x00014bec) list_double_pane_t2_cp2

0x09b7,	// (0x00014c18) list_single_pane_cp2_g3

0x09c7,	// (0x00014c28) list_single_pane_g1_cp2_ParamLimits

0x09c7,	// (0x00014c28) list_single_pane_g1_cp2

0x09d3,	// (0x00014c34) list_single_pane_g2_cp2

0x09db,	// (0x00014c3c) list_single_pane_t1_cp2_ParamLimits

0x09db,	// (0x00014c3c) list_single_pane_t1_cp2

0xa337,	// (0x0001e598) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xa337,	// (0x0001e598) list_single_large_graphic_pane_g1_cp2

0x0a01,	// (0x00014c62) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x0a01,	// (0x00014c62) list_single_large_graphic_pane_g2_cp2

0x0a0d,	// (0x00014c6e) list_single_large_graphic_pane_g3_cp2

0x0a15,	// (0x00014c76) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x0a15,	// (0x00014c76) list_single_large_graphic_pane_g4_cp1

0x0a2f,	// (0x00014c90) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x0a2f,	// (0x00014c90) list_single_large_graphic_pane_t1_cp2

0x26cb,	// (0x0001692c) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x26cb,	// (0x0001692c) list_single_graphic_heading_pane_g1_cp2

0xb09d,	// (0x0001f2fe) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xb09d,	// (0x0001f2fe) list_single_graphic_heading_pane_g4_cp2

0x09d3,	// (0x00014c34) list_single_graphic_heading_pane_g5_cp2

0x26d7,	// (0x00016938) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x26d7,	// (0x00016938) list_single_graphic_heading_pane_t1_cp2

0xb0ae,	// (0x0001f30f) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xb0ae,	// (0x0001f30f) list_single_graphic_heading_pane_t2_cp2

0x268c,	// (0x000168ed) list_single_2graphic_pane_g1_cp2_ParamLimits

0x268c,	// (0x000168ed) list_single_2graphic_pane_g1_cp2

0xb09d,	// (0x0001f2fe) list_single_2graphic_pane_g2_cp2_ParamLimits

0xb09d,	// (0x0001f2fe) list_single_2graphic_pane_g2_cp2

0x09d3,	// (0x00014c34) list_single_2graphic_pane_g3_cp2

0x26a9,	// (0x0001690a) list_single_2graphic_pane_g4_cp2_ParamLimits

0x26a9,	// (0x0001690a) list_single_2graphic_pane_g4_cp2

0x26b5,	// (0x00016916) list_single_2graphic_pane_t1_cp2_ParamLimits

0x26b5,	// (0x00016916) list_single_2graphic_pane_t1_cp2

0xb8e0,	// (0x0001fb41) list_highlight_pane_g10_cp1

0x2264,	// (0x000164c5) list_highlight_pane_g1_cp1

0x226c,	// (0x000164cd) list_highlight_pane_g2_cp1

0x2274,	// (0x000164d5) list_highlight_pane_g3_cp1

0x227c,	// (0x000164dd) list_highlight_pane_g4_cp1

0x2284,	// (0x000164e5) list_highlight_pane_g5_cp1

0x228c,	// (0x000164ed) list_highlight_pane_g6_cp1

0x2294,	// (0x000164f5) list_highlight_pane_g7_cp1

0x229c,	// (0x000164fd) list_highlight_pane_g8_cp1

0x22a4,	// (0x00016505) list_highlight_pane_g9_cp1

0xb063,	// (0x0001f2c4) form_field_slider_pane_t3

0xb071,	// (0x0001f2d2) form_field_slider_pane_t4

0x21a0,	// (0x00016401) slider_form_pane_ParamLimits

0x21a0,	// (0x00016401) slider_form_pane

0xb8ea,	// (0x0001fb4b) control_abbreviations

0xb8ea,	// (0x0001fb4b) control_conventions

0xb8ea,	// (0x0001fb4b) control_definitions

0xb8ea,	// (0x0001fb4b) format_table_attribute

0x298c,	// (0x00016bed) bg_popup_preview_window_pane_g9

0xb8ea,	// (0x0001fb4b) format_table_data2

0xb8ea,	// (0x0001fb4b) format_table_data3

0xb8ea,	// (0x0001fb4b) format_table_data_example

0x0008,

0xb8ea,	// (0x0001fb4b) intro_purpose

0xf8eb,	// (0x00023b4c) bg_popup_preview_window_pane_g

0xb8ea,	// (0x0001fb4b) texts_category

0xb8ea,	// (0x0001fb4b) texts_graphics

0x0a45,	// (0x00014ca6) text_digital

0x0a54,	// (0x00014cb5) text_primary

0x0a63,	// (0x00014cc4) text_primary_small

0x0a72,	// (0x00014cd3) text_secondary

0x0a81,	// (0x00014ce2) text_title

0x319c,	// (0x000173fd) bg_passive_tab_pane_g1_cp3_srt

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp3_srt

0x31a5,	// (0x00017406) bg_passive_tab_pane_g3_cp3_srt

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp3_srt_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp3_srt

0x31ae,	// (0x0001740f) tabs_4_active_pane_srt_g1

0xb53e,	// (0x0001f79f) tabs_4_active_pane_srt_t1_ParamLimits

0xb53e,	// (0x0001f79f) tabs_4_active_pane_srt_t1

0x319c,	// (0x000173fd) bg_active_tab_pane_g1_cp3_copy1

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp3_copy1

0x31a5,	// (0x00017406) bg_active_tab_pane_g3_cp3_copy1

0xb952,	// (0x0001fbb3) tabs_2_long_active_pane_srt_ParamLimits

0xb952,	// (0x0001fbb3) tabs_2_long_active_pane_srt

0xb952,	// (0x0001fbb3) tabs_2_long_passive_pane_srt_ParamLimits

0xb952,	// (0x0001fbb3) tabs_2_long_passive_pane_srt

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp4_srt_ParamLimits

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp4_srt

0x2df1,	// (0x00017052) bg_passive_tab_pane_g1_cp4_srt

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp4_srt

0x2dfa,	// (0x0001705b) bg_passive_tab_pane_g3_cp4_srt

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp4_srt_ParamLimits

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp4_srt

0xb2eb,	// (0x0001f54c) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb2eb,	// (0x0001f54c) tabs_2_long_active_pane_srt_t1

0x2df1,	// (0x00017052) bg_active_tab_pane_g1_cp4_srt

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp4_srt

0x2dfa,	// (0x0001705b) bg_active_tab_pane_g3_cp4_srt

0xb944,	// (0x0001fba5) tabs_3_long_active_pane_srt_ParamLimits

0xb944,	// (0x0001fba5) tabs_3_long_active_pane_srt

0xb944,	// (0x0001fba5) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xb944,	// (0x0001fba5) tabs_3_long_passive_pane_cp_srt

0xb944,	// (0x0001fba5) tabs_3_long_passive_pane_srt_ParamLimits

0xb944,	// (0x0001fba5) tabs_3_long_passive_pane_srt

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp5_srt_ParamLimits

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp5_srt

0x0763,	// (0x000149c4) bg_passive_tab_pane_g1_cp5_srt

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp5_srt

0x076c,	// (0x000149cd) bg_passive_tab_pane_g3_cp5_srt

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp5_srt_ParamLimits

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp5_srt

0xb2d5,	// (0x0001f536) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb2d5,	// (0x0001f536) tabs_3_long_active_pane_srt_t1

0x0763,	// (0x000149c4) bg_active_tab_pane_g1_cp5_srt

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp5_srt

0x076c,	// (0x000149cd) bg_active_tab_pane_g3_cp5_srt

0x2dd1,	// (0x00017032) navi_text_pane_srt_t1

0x2dc9,	// (0x0001702a) navi_icon_pane_srt_g1

0x0c4c,	// (0x00014ead) midp_editing_number_pane_srt

0x0a90,	// (0x00014cf1) midp_ticker_pane_srt

0x0c54,	// (0x00014eb5) midp_ticker_pane_srt_g1

0x0c5c,	// (0x00014ebd) midp_ticker_pane_srt_g2

0x0001,

0xf773,	// (0x000239d4) midp_ticker_pane_srt_g

0x0c64,	// (0x00014ec5) midp_ticker_pane_srt_t1

0x2dba,	// (0x0001701b) midp_editing_number_pane_t1_copy1

0x0e1a,	// (0x0001507b) listscroll_midp_pane

0x0e1a,	// (0x0001507b) midp_form_pane

0x0afa,	// (0x00014d5b) midp_info_popup_window_ParamLimits

0x0afa,	// (0x00014d5b) midp_info_popup_window

0xdc15,	// (0x00021e76) bg_popup_sub_pane_cp50_ParamLimits

0xdc15,	// (0x00021e76) bg_popup_sub_pane_cp50

0x1e9a,	// (0x000160fb) listscroll_midp_info_pane_ParamLimits

0x1e9a,	// (0x000160fb) listscroll_midp_info_pane

0x1e82,	// (0x000160e3) listscroll_form_midp_pane_ParamLimits

0x1e82,	// (0x000160e3) listscroll_form_midp_pane

0x1e8e,	// (0x000160ef) scroll_bar_cp050

0xb057,	// (0x0001f2b8) list_midp_pane

0x3eec,	// (0x0001814d) signal_pane_g2_cp

0x1d9c,	// (0x00015ffd) listscroll_midp_info_pane_t1_ParamLimits

0x1d9c,	// (0x00015ffd) listscroll_midp_info_pane_t1

0x1db4,	// (0x00016015) listscroll_midp_info_pane_t2_ParamLimits

0x1db4,	// (0x00016015) listscroll_midp_info_pane_t2

0x1df2,	// (0x00016053) listscroll_midp_info_pane_t3_ParamLimits

0x1df2,	// (0x00016053) listscroll_midp_info_pane_t3

0x1e2c,	// (0x0001608d) listscroll_midp_info_pane_t4_ParamLimits

0x1e2c,	// (0x0001608d) listscroll_midp_info_pane_t4

0x0003,

0xf826,	// (0x00023a87) listscroll_midp_info_pane_t_ParamLimits

0xf826,	// (0x00023a87) listscroll_midp_info_pane_t

0xdc95,	// (0x00021ef6) scroll_pane_cp21

0x1d36,	// (0x00015f97) form_midp_field_choice_group_pane

0x1d3f,	// (0x00015fa0) form_midp_field_text_pane

0x1d82,	// (0x00015fe3) form_midp_field_time_pane

0x1d8a,	// (0x00015feb) form_midp_gauge_slider_pane

0x1d93,	// (0x00015ff4) form_midp_gauge_wait_pane

0xb8ea,	// (0x0001fb4b) form_midp_image_pane

0xb03a,	// (0x0001f29b) list_single_midp_pane_ParamLimits

0xb03a,	// (0x0001f29b) list_single_midp_pane

0xb012,	// (0x0001f273) form_midp_field_text_pane_t1

0x1ab7,	// (0x00015d18) input_focus_pane_cp050

0x1d05,	// (0x00015f66) list_midp_form_text_pane

0x1ca9,	// (0x00015f0a) form_midp_field_choice_group_pane_t1

0x1cb7,	// (0x00015f18) input_focus_pane_cp051

0x1ccb,	// (0x00015f2c) list_midp_choice_pane

0xb8ea,	// (0x0001fb4b) status_idle_pane

0x1c8d,	// (0x00015eee) form_midp_field_time_pane_t1

0xb8e0,	// (0x0001fb41) wait_anim_pane_g2_copy1

0x1c9b,	// (0x00015efc) form_midp_field_time_pane_t2

0x0001,

0x0baa,	// (0x00014e0b) aid_navinavi_width_2_pane

0xf821,	// (0x00023a82) form_midp_field_time_pane_t

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp052

0xb8ea,	// (0x0001fb4b) bg_input_focus_pane_cp040

0x1c4d,	// (0x00015eae) form_midp_gauge_slider_pane_t1

0x1c5b,	// (0x00015ebc) form_midp_gauge_slider_pane_t2

0xaff6,	// (0x0001f257) form_midp_gauge_slider_pane_t3

0xb004,	// (0x0001f265) form_midp_gauge_slider_pane_t4

0x0003,

0xf818,	// (0x00023a79) form_midp_gauge_slider_pane_t

0x1c85,	// (0x00015ee6) form_midp_slider_pane

0xb952,	// (0x0001fbb3) bg_input_focus_pane_cp041_ParamLimits

0xb952,	// (0x0001fbb3) bg_input_focus_pane_cp041

0x1c1a,	// (0x00015e7b) form_midp_gauge_wait_pane_t1_ParamLimits

0x1c1a,	// (0x00015e7b) form_midp_gauge_wait_pane_t1

0x1c2c,	// (0x00015e8d) form_midp_gauge_wait_pane_t2_ParamLimits

0x1c2c,	// (0x00015e8d) form_midp_gauge_wait_pane_t2

0x0001,

0xf813,	// (0x00023a74) form_midp_gauge_wait_pane_t_ParamLimits

0xf813,	// (0x00023a74) form_midp_gauge_wait_pane_t

0x1c3e,	// (0x00015e9f) form_midp_wait_pane_ParamLimits

0x1c3e,	// (0x00015e9f) form_midp_wait_pane

0x1be2,	// (0x00015e43) form_midp_image_pane_g1

0x1beb,	// (0x00015e4c) form_midp_image_pane_t1

0x1bfa,	// (0x00015e5b) form_midp_image_pane_t2

0x1c09,	// (0x00015e6a) form_midp_image_pane_t3

0x0002,

0xf80c,	// (0x00023a6d) form_midp_image_pane_t

0x1bca,	// (0x00015e2b) list_single_midp_pane_g1

0x1bd3,	// (0x00015e34) list_single_midp_pane_t1

0xafdf,	// (0x0001f240) list_midp_form_item_pane_ParamLimits

0xafdf,	// (0x0001f240) list_midp_form_item_pane

0x0b52,	// (0x00014db3) list_midp_form_item_pane_t1

0x0b61,	// (0x00014dc2) midp_ticker_pane_g1

0x0b6d,	// (0x00014dce) midp_ticker_pane_g2

0x0001,

0xf759,	// (0x000239ba) midp_ticker_pane_g

0xa3dc,	// (0x0001e63d) midp_ticker_pane_t1

0xb496,	// (0x0001f6f7) midp_editing_number_pane_t1

0x3040,	// (0x000172a1) midp_editing_number_pane

0x304f,	// (0x000172b0) midp_ticker_pane

0x2d82,	// (0x00016fe3) ai_message_heading_pane

0xb8ea,	// (0x0001fb4b) bg_popup_window_pane_cp14

0x2d8a,	// (0x00016feb) listscroll_ai_message_pane

0x2d08,	// (0x00016f69) ai_message_heading_pane_g1_ParamLimits

0x2d08,	// (0x00016f69) ai_message_heading_pane_g1

0x2d14,	// (0x00016f75) ai_message_heading_pane_g2_ParamLimits

0x2d14,	// (0x00016f75) ai_message_heading_pane_g2

0x2d22,	// (0x00016f83) ai_message_heading_pane_g3_ParamLimits

0x2d22,	// (0x00016f83) ai_message_heading_pane_g3

0x2d2e,	// (0x00016f8f) ai_message_heading_pane_g4_ParamLimits

0x2d2e,	// (0x00016f8f) ai_message_heading_pane_g4

0x0003,

0xf94d,	// (0x00023bae) ai_message_heading_pane_g_ParamLimits

0xf94d,	// (0x00023bae) ai_message_heading_pane_g

0x2d3a,	// (0x00016f9b) ai_message_heading_pane_t1_ParamLimits

0x2d3a,	// (0x00016f9b) ai_message_heading_pane_t1

0x2d54,	// (0x00016fb5) ai_message_heading_pane_t2_ParamLimits

0x2d54,	// (0x00016fb5) ai_message_heading_pane_t2

0x0001,

0xf956,	// (0x00023bb7) ai_message_heading_pane_t_ParamLimits

0xf956,	// (0x00023bb7) ai_message_heading_pane_t

0x2d68,	// (0x00016fc9) bg_popup_heading_pane_cp1_ParamLimits

0x2d68,	// (0x00016fc9) bg_popup_heading_pane_cp1

0x2cf6,	// (0x00016f57) list_ai_message_pane_ParamLimits

0x2cf6,	// (0x00016f57) list_ai_message_pane

0xdc95,	// (0x00021ef6) scroll_pane_cp10

0x2c92,	// (0x00016ef3) list_ai_message_pane_g1

0x2c9a,	// (0x00016efb) list_ai_message_pane_g2

0x0001,

0xf92a,	// (0x00023b8b) list_ai_message_pane_g

0x2ca2,	// (0x00016f03) list_ai_message_pane_t1_ParamLimits

0x2ca2,	// (0x00016f03) list_ai_message_pane_t1

0x2cb7,	// (0x00016f18) list_ai_message_pane_t2_ParamLimits

0x2cb7,	// (0x00016f18) list_ai_message_pane_t2

0x2ccc,	// (0x00016f2d) list_ai_message_pane_t3_ParamLimits

0x2ccc,	// (0x00016f2d) list_ai_message_pane_t3

0x2ce1,	// (0x00016f42) list_ai_message_pane_t4_ParamLimits

0x2ce1,	// (0x00016f42) list_ai_message_pane_t4

0x0003,

0xf92f,	// (0x00023b90) list_ai_message_pane_t_ParamLimits

0xf92f,	// (0x00023b90) list_ai_message_pane_t

0xb2a9,	// (0x0001f50a) cell_ai_soft_ind_pane_ParamLimits

0xb2a9,	// (0x0001f50a) cell_ai_soft_ind_pane

0x0b8b,	// (0x00014dec) cell_ai_soft_ind_pane_g1_ParamLimits

0x0b8b,	// (0x00014dec) cell_ai_soft_ind_pane_g1

0xb8ea,	// (0x0001fb4b) grid_highlight_cp1

0x0b98,	// (0x00014df9) text_secondary_cp56_ParamLimits

0x0b98,	// (0x00014df9) text_secondary_cp56

0x2c50,	// (0x00016eb1) example_general_pane_ParamLimits

0x2c50,	// (0x00016eb1) example_general_pane

0x2c5c,	// (0x00016ebd) example_parent_pane_g1_ParamLimits

0x2c5c,	// (0x00016ebd) example_parent_pane_g1

0x2c68,	// (0x00016ec9) example_parent_pane_t1_ParamLimits

0x2c68,	// (0x00016ec9) example_parent_pane_t1

0xa864,	// (0x0001eac5) popup_preview_text_window_ParamLimits

0xa864,	// (0x0001eac5) popup_preview_text_window

0x09bf,	// (0x00014c20) list_single_pane_cp2_g4

0xd60c,	// (0x0002186d) bg_popup_preview_window_pane_ParamLimits

0xd60c,	// (0x0002186d) bg_popup_preview_window_pane

0x2996,	// (0x00016bf7) popup_preview_text_window_t1_ParamLimits

0x2996,	// (0x00016bf7) popup_preview_text_window_t1

0x29b4,	// (0x00016c15) popup_preview_text_window_t2_ParamLimits

0x29b4,	// (0x00016c15) popup_preview_text_window_t2

0x29fd,	// (0x00016c5e) popup_preview_text_window_t3_ParamLimits

0x29fd,	// (0x00016c5e) popup_preview_text_window_t3

0x2a42,	// (0x00016ca3) popup_preview_text_window_t4_ParamLimits

0x2a42,	// (0x00016ca3) popup_preview_text_window_t4

0x0004,

0xf8fe,	// (0x00023b5f) popup_preview_text_window_t_ParamLimits

0xf8fe,	// (0x00023b5f) popup_preview_text_window_t

0x2ac0,	// (0x00016d21) scroll_pane_cp11

0x1991,	// (0x00015bf2) bg_popup_preview_window_pane_g1

0x294a,	// (0x00016bab) bg_popup_preview_window_pane_g2

0x2954,	// (0x00016bb5) bg_popup_preview_window_pane_g3

0x295e,	// (0x00016bbf) bg_popup_preview_window_pane_g4

0x2968,	// (0x00016bc9) bg_popup_preview_window_pane_g5

0x2972,	// (0x00016bd3) bg_popup_preview_window_pane_g6

0x297a,	// (0x00016bdb) bg_popup_preview_window_pane_g7

0x2982,	// (0x00016be3) bg_popup_preview_window_pane_g8

0xd3f6,	// (0x00021657) aid_popup_width_pane

0xa7d4,	// (0x0001ea35) popup_midp_note_alarm_window_ParamLimits

0xa7d4,	// (0x0001ea35) popup_midp_note_alarm_window

0xdac0,	// (0x00021d21) data_form_pane_ParamLimits

0x9e3d,	// (0x0001e09e) form_field_data_pane_g1

0x9e47,	// (0x0001e0a8) form_field_data_pane_t1_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_ParamLimits

0xdada,	// (0x00021d3b) data_form_wide_pane_ParamLimits

0xdaeb,	// (0x00021d4c) form_field_data_wide_pane_g1

0xdb17,	// (0x00021d78) form_field_data_wide_pane_t1_ParamLimits

0xd7c1,	// (0x00021a22) input_focus_pane_cp6_ParamLimits

0x9f88,	// (0x0001e1e9) input_popup_find_pane_g1_ParamLimits

0x9f88,	// (0x0001e1e9) input_popup_find_pane_g1

0xe4ed,	// (0x0002274e) aid_navi_side_left_pane

0xe502,	// (0x00022763) aid_navi_side_right_pane

0x235f,	// (0x000165c0) bg_popup_window_pane_cp30_ParamLimits

0x235f,	// (0x000165c0) bg_popup_window_pane_cp30

0x23d9,	// (0x0001663a) popup_midp_note_alarm_window_g1_ParamLimits

0x23d9,	// (0x0001663a) popup_midp_note_alarm_window_g1

0x2409,	// (0x0001666a) popup_midp_note_alarm_window_t1_ParamLimits

0x2409,	// (0x0001666a) popup_midp_note_alarm_window_t1

0x24aa,	// (0x0001670b) popup_midp_note_alarm_window_t2_ParamLimits

0x24aa,	// (0x0001670b) popup_midp_note_alarm_window_t2

0x2558,	// (0x000167b9) popup_midp_note_alarm_window_t3_ParamLimits

0x2558,	// (0x000167b9) popup_midp_note_alarm_window_t3

0x258a,	// (0x000167eb) popup_midp_note_alarm_window_t4_ParamLimits

0x258a,	// (0x000167eb) popup_midp_note_alarm_window_t4

0x25b0,	// (0x00016811) popup_midp_note_alarm_window_t5_ParamLimits

0x25b0,	// (0x00016811) popup_midp_note_alarm_window_t5

0x000a,

0xf89b,	// (0x00023afc) popup_midp_note_alarm_window_t_ParamLimits

0xf89b,	// (0x00023afc) popup_midp_note_alarm_window_t

0x265c,	// (0x000168bd) wait_bar_pane_cp1_ParamLimits

0x265c,	// (0x000168bd) wait_bar_pane_cp1

0xb8ea,	// (0x0001fb4b) wait_anim_pane_copy1

0xb8ea,	// (0x0001fb4b) wait_border_pane_copy1

0x2044,	// (0x000162a5) wait_border_pane_g1_copy1

0xdb31,	// (0x00021d92) form_field_popup_pane_g1

0x9e61,	// (0x0001e0c2) form_field_popup_pane_t1_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_cp7_ParamLimits

0xdb39,	// (0x00021d9a) list_form_pane_ParamLimits

0xdb45,	// (0x00021da6) form_field_popup_wide_pane_g1

0xdb4d,	// (0x00021dae) form_field_popup_wide_pane_t1_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_cp8_ParamLimits

0xdb62,	// (0x00021dc3) list_form_wide_pane_ParamLimits

0x3229,	// (0x0001748a) aid_size_cell_graphic_pane

0x9ee0,	// (0x0001e141) data_form_pane_t1_ParamLimits

0xb47a,	// (0x0001f6db) data_form_wide_pane_t1_ParamLimits

0xac68,	// (0x0001eec9) bg_status_flat_pane

0x9666,	// (0x0001d8c7) title_pane_t1_ParamLimits

0xb90c,	// (0x0001fb6d) title_pane_t2_ParamLimits

0xb932,	// (0x0001fb93) title_pane_t3_ParamLimits

0xf55d,	// (0x000237be) title_pane_t_ParamLimits

0xa08f,	// (0x0001e2f0) level_1_signal_ParamLimits

0xa0a1,	// (0x0001e302) level_2_signal_ParamLimits

0xa0b4,	// (0x0001e315) level_3_signal_ParamLimits

0xa0c7,	// (0x0001e328) level_4_signal_ParamLimits

0xa0da,	// (0x0001e33b) level_5_signal_ParamLimits

0xa0ed,	// (0x0001e34e) level_6_signal_ParamLimits

0xa100,	// (0x0001e361) level_7_signal_ParamLimits

0xa08f,	// (0x0001e2f0) level_1_battery_ParamLimits

0xa0a1,	// (0x0001e302) level_2_battery_ParamLimits

0xa0b4,	// (0x0001e315) level_3_battery_ParamLimits

0xa0c7,	// (0x0001e328) level_4_battery_ParamLimits

0xa0da,	// (0x0001e33b) level_5_battery_ParamLimits

0xa0ed,	// (0x0001e34e) level_6_battery_ParamLimits

0xa100,	// (0x0001e361) level_7_battery_ParamLimits

0x2264,	// (0x000164c5) bg_status_flat_pane_g1

0x226c,	// (0x000164cd) bg_status_flat_pane_g2

0x2274,	// (0x000164d5) bg_status_flat_pane_g3

0x227c,	// (0x000164dd) bg_status_flat_pane_g4

0x2284,	// (0x000164e5) bg_status_flat_pane_g5

0x228c,	// (0x000164ed) bg_status_flat_pane_g6

0x2294,	// (0x000164f5) bg_status_flat_pane_g7

0x96fa,	// (0x0001d95b) tabs_3_active_pane_t1_ParamLimits

0x96fa,	// (0x0001d95b) tabs_3_passive_pane_t1_ParamLimits

0x9714,	// (0x0001d975) tabs_4_active_pane_t1_ParamLimits

0x9714,	// (0x0001d975) tabs_4_1_passive_pane_t1_ParamLimits

0x9f9e,	// (0x0001e1ff) tabs_2_active_pane_t1_ParamLimits

0x9f9e,	// (0x0001e1ff) tabs_2_passive_pane_t1_ParamLimits

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp4_ParamLimits

0x9fb0,	// (0x0001e211) tabs_2_long_active_pane_t1_ParamLimits

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp4_ParamLimits

0xe96e,	// (0x00022bcf) list_single_midp_graphic_pane_t1_ParamLimits

0xb952,	// (0x0001fbb3) bg_active_tab_pane_cp5_ParamLimits

0x9fc3,	// (0x0001e224) tabs_3_long_active_pane_t1_ParamLimits

0x0e1a,	// (0x0001507b) bg_passive_tab_pane_cp5_ParamLimits

0xe96e,	// (0x00022bcf) list_single_midp_graphic_pane_t1

0xac68,	// (0x0001eec9) bg_status_flat_pane_ParamLimits

0x15db,	// (0x0001583c) indicator_pane_cp2_ParamLimits

0x15db,	// (0x0001583c) indicator_pane_cp2

0xadfe,	// (0x0001f05f) navi_pane_srt_ParamLimits

0xadfe,	// (0x0001f05f) navi_pane_srt

0x1742,	// (0x000159a3) popup_clock_digital_analogue_window_cp1

0xb9b0,	// (0x0001fc11) indicator_pane_t1

0x0a90,	// (0x00014cf1) copy_highlight_pane

0x0a90,	// (0x00014cf1) cursor_graphics_pane

0x0a90,	// (0x00014cf1) graphic_within_text_pane

0x0a90,	// (0x00014cf1) link_highlight_pane

0x2a83,	// (0x00016ce4) popup_preview_text_window_t5_ParamLimits

0x2a83,	// (0x00016ce4) popup_preview_text_window_t5

0x0bb4,	// (0x00014e15) cursor_digital_pane

0x0bb4,	// (0x00014e15) cursor_primary_pane

0x0bc5,	// (0x00014e26) cursor_primary_small_pane

0x0bcd,	// (0x00014e2e) cursor_secondary_pane

0x0bd5,	// (0x00014e36) cursor_title_pane

0x0bb4,	// (0x00014e15) link_highlight_digital_pane

0x0bbc,	// (0x00014e1d) link_highlight_primary_pane

0x0bc5,	// (0x00014e26) link_highlight_primary_small_pane

0x0bcd,	// (0x00014e2e) link_highlight_secondary_pane

0x0bd5,	// (0x00014e36) link_highlight_title_pane

0x0bb4,	// (0x00014e15) copy_highlight_digital_pane

0x0bb4,	// (0x00014e15) copy_highlight_primary_pane

0x0bc5,	// (0x00014e26) copy_highlight_primary_small_pane

0x0bcd,	// (0x00014e2e) copy_highlight_secondary_pane

0x0bd5,	// (0x00014e36) copy_highlight_title_pane

0x0bcd,	// (0x00014e2e) graphic_text_digital_pane

0x2302,	// (0x00016563) graphic_text_primary_pane

0x230b,	// (0x0001656c) graphic_text_primary_small_pane

0x0bc5,	// (0x00014e26) graphic_text_secondary_pane

0x0bb4,	// (0x00014e15) graphic_text_title_pane

0xa3ee,	// (0x0001e64f) cursor_primary_pane_g1

0x22f4,	// (0x00016555) cursor_text_primary_t1

0xb093,	// (0x0001f2f4) cursor_primary_small_pane_g1

0x22e6,	// (0x00016547) cursor_text_primary_small_t1

0xb089,	// (0x0001f2ea) cursor_primary_small_pane_g1_copy1

0x22ce,	// (0x0001652f) cursor_text_primary_small_t1_copy1

0x22ac,	// (0x0001650d) cursor_text_title_t1

0xb07f,	// (0x0001f2e0) cursor_title_pane_g1

0xa3ee,	// (0x0001e64f) cursor_digital_pane_g1

0x0be7,	// (0x00014e48) cursor_text_digital_t1

0x0bf5,	// (0x00014e56) link_highlight_primary_pane_g1

0x2255,	// (0x000164b6) link_highlight_primary_pane_t1

0x0bf5,	// (0x00014e56) link_highlight_primary_small_pane_g1

0x0bfd,	// (0x00014e5e) link_highlight_primary_small_pane_t1

0x0c0c,	// (0x00014e6d) link_highlight_secondary_pane_g1

0x0c14,	// (0x00014e75) link_highlight_secondary_pane_t1

0x21c9,	// (0x0001642a) link_highlight_title_pane_g1

0x21d1,	// (0x00016432) link_highlight_title_pane_t1

0x21b2,	// (0x00016413) link_highlight_digital_pane_g1

0x21ba,	// (0x0001641b) link_highlight_digital_pane_t1

0x207a,	// (0x000162db) copy_highlight_primary_pane_g1

0x2091,	// (0x000162f2) copy_highlight_primary_pane_t1

0x207a,	// (0x000162db) copy_highlight_primary_small_pane_g1

0x2082,	// (0x000162e3) copy_highlight_primary_small_pane_t1

0x0c23,	// (0x00014e84) copy_highlight_secondary_pane_g1

0x0c2b,	// (0x00014e8c) copy_highlight_secondary_pane_t1

0x2063,	// (0x000162c4) copy_highlight_title_pane_g1

0x206b,	// (0x000162cc) copy_highlight_title_pane_t1

0x207a,	// (0x000162db) copy_highlight_digital_pane_g1

0x33f9,	// (0x0001765a) copy_highlight_digital_pane_t1

0x334d,	// (0x000175ae) graphic_text_primary_pane_g1

0x33dd,	// (0x0001763e) graphic_text_primary_pane_t1

0x33eb,	// (0x0001764c) graphic_text_primary_pane_t2

0x0001,

0xf9ca,	// (0x00023c2b) graphic_text_primary_pane_t

0x33b9,	// (0x0001761a) graphic_text_primary_small_pane_g1

0x33c1,	// (0x00017622) graphic_text_primary_small_pane_t1

0x33cf,	// (0x00017630) graphic_text_primary_small_pane_t2

0x0001,

0xf9c5,	// (0x00023c26) graphic_text_primary_small_pane_t

0x3395,	// (0x000175f6) graphic_text_secondary_pane_g1

0x339d,	// (0x000175fe) graphic_text_secondary_pane_t1

0x33ab,	// (0x0001760c) graphic_text_secondary_pane_t2

0x0001,

0xf9c0,	// (0x00023c21) graphic_text_secondary_pane_t

0x3371,	// (0x000175d2) graphic_text_title_pane_g1

0x3379,	// (0x000175da) graphic_text_title_pane_t1

0x3387,	// (0x000175e8) graphic_text_title_pane_t2

0x0001,

0xf9bb,	// (0x00023c1c) graphic_text_title_pane_t

0x334d,	// (0x000175ae) graphic_text_digital_pane_g1

0x3355,	// (0x000175b6) graphic_text_digital_pane_t1

0x3363,	// (0x000175c4) graphic_text_digital_pane_t2

0x0001,

0xf9b6,	// (0x00023c17) graphic_text_digital_pane_t

0xb952,	// (0x0001fbb3) navi_icon_pane_srt_ParamLimits

0xb952,	// (0x0001fbb3) navi_icon_pane_srt

0xb8ea,	// (0x0001fb4b) navi_midp_pane_srt

0xb8ea,	// (0x0001fb4b) navi_navi_pane_srt

0xb952,	// (0x0001fbb3) navi_text_pane_srt_ParamLimits

0xb952,	// (0x0001fbb3) navi_text_pane_srt

0x3318,	// (0x00017579) navi_navi_icon_text_pane_srt

0x3320,	// (0x00017581) navi_navi_pane_srt_g1_ParamLimits

0x3320,	// (0x00017581) navi_navi_pane_srt_g1

0x3332,	// (0x00017593) navi_navi_pane_srt_g2_ParamLimits

0x3332,	// (0x00017593) navi_navi_pane_srt_g2

0x0001,

0xf9b1,	// (0x00023c12) navi_navi_pane_srt_g_ParamLimits

0xf9b1,	// (0x00023c12) navi_navi_pane_srt_g

0x3344,	// (0x000175a5) navi_navi_tabs_pane_srt

0x3318,	// (0x00017579) navi_navi_text_pane_srt

0x3318,	// (0x00017579) navi_navi_volume_pane_srt

0x3309,	// (0x0001756a) navi_navi_text_pane_srt_t1

0xeb48,	// (0x00022da9) navi_navi_volume_pane_srt_g1

0xeb50,	// (0x00022db1) volume_small_pane_srt_ParamLimits

0xeb50,	// (0x00022db1) volume_small_pane_srt

0xe7cb,	// (0x00022a2c) volume_small_pane_srt_g1_ParamLimits

0xe7cb,	// (0x00022a2c) volume_small_pane_srt_g1

0xe7db,	// (0x00022a3c) volume_small_pane_srt_g2_ParamLimits

0xe7db,	// (0x00022a3c) volume_small_pane_srt_g2

0xe7ec,	// (0x00022a4d) volume_small_pane_srt_g3_ParamLimits

0xe7ec,	// (0x00022a4d) volume_small_pane_srt_g3

0xe7fd,	// (0x00022a5e) volume_small_pane_srt_g4_ParamLimits

0xe7fd,	// (0x00022a5e) volume_small_pane_srt_g4

0xe80e,	// (0x00022a6f) volume_small_pane_srt_g5_ParamLimits

0xe80e,	// (0x00022a6f) volume_small_pane_srt_g5

0xe81f,	// (0x00022a80) volume_small_pane_srt_g6_ParamLimits

0xe81f,	// (0x00022a80) volume_small_pane_srt_g6

0xe830,	// (0x00022a91) volume_small_pane_srt_g7_ParamLimits

0xe830,	// (0x00022a91) volume_small_pane_srt_g7

0xe841,	// (0x00022aa2) volume_small_pane_srt_g8_ParamLimits

0xe841,	// (0x00022aa2) volume_small_pane_srt_g8

0xe852,	// (0x00022ab3) volume_small_pane_srt_g9_ParamLimits

0xe852,	// (0x00022ab3) volume_small_pane_srt_g9

0xe863,	// (0x00022ac4) volume_small_pane_srt_g10_ParamLimits

0xe863,	// (0x00022ac4) volume_small_pane_srt_g10

0x0009,

0xf75e,	// (0x000239bf) volume_small_pane_srt_g_ParamLimits

0xf75e,	// (0x000239bf) volume_small_pane_srt_g

0xd6c1,	// (0x00021922) query_popup_data_pane_cp2

0x32ef,	// (0x00017550) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x32ef,	// (0x00017550) navi_navi_icon_text_pane_srt_t1

0x2302,	// (0x00016563) navi_tabs_2_long_pane_srt

0x2302,	// (0x00016563) navi_tabs_2_pane_srt

0x2302,	// (0x00016563) navi_tabs_3_long_pane_srt

0x2302,	// (0x00016563) navi_tabs_3_pane_srt

0x2302,	// (0x00016563) navi_tabs_4_pane_srt

0xeb28,	// (0x00022d89) tabs_2_active_pane_srt_ParamLimits

0xeb28,	// (0x00022d89) tabs_2_active_pane_srt

0xeb38,	// (0x00022d99) tabs_2_passive_pane_srt_ParamLimits

0xeb38,	// (0x00022d99) tabs_2_passive_pane_srt

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp1_srt_ParamLimits

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp1_srt

0x32bb,	// (0x0001751c) bg_passive_tab_pane_g1_cp1_srt

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp1_srt

0x32c4,	// (0x00017525) bg_passive_tab_pane_g3_cp1_srt

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp1_srt_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp1_srt

0x32cd,	// (0x0001752e) tabs_2_active_pane_srt_g1

0xb5bf,	// (0x0001f820) tabs_2_active_pane_srt_t1_ParamLimits

0xb5bf,	// (0x0001f820) tabs_2_active_pane_srt_t1

0x32bb,	// (0x0001751c) bg_active_tab_pane_g1_cp1_srt

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp1_srt

0x32c4,	// (0x00017525) bg_active_tab_pane_g3_cp1_srt

0xeaf5,	// (0x00022d56) tabs_3_active_pane_srt_ParamLimits

0xeaf5,	// (0x00022d56) tabs_3_active_pane_srt

0xeb06,	// (0x00022d67) tabs_3_passive_pane_cp_srt_ParamLimits

0xeb06,	// (0x00022d67) tabs_3_passive_pane_cp_srt

0xeb17,	// (0x00022d78) tabs_3_passive_pane_srt_ParamLimits

0xeb17,	// (0x00022d78) tabs_3_passive_pane_srt

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp2_srt_ParamLimits

0x1ab7,	// (0x00015d18) bg_passive_tab_pane_cp2_srt

0x0c3a,	// (0x00014e9b) bg_passive_tab_pane_g1_cp2_srt

0x06d9,	// (0x0001493a) bg_passive_tab_pane_g2_cp2_srt

0x0c43,	// (0x00014ea4) bg_passive_tab_pane_g3_cp2_srt

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp2_srt_ParamLimits

0xb944,	// (0x0001fba5) bg_active_tab_pane_cp2_srt

0x32a1,	// (0x00017502) tabs_3_active_pane_srt_g1

0xb5a9,	// (0x0001f80a) tabs_3_active_pane_srt_t1_ParamLimits

0xb5a9,	// (0x0001f80a) tabs_3_active_pane_srt_t1

0x0c3a,	// (0x00014e9b) bg_active_tab_pane_g1_cp2_srt

0x06d9,	// (0x0001493a) bg_active_tab_pane_g2_cp2_srt

0x0c43,	// (0x00014ea4) bg_active_tab_pane_g3_cp2_srt

0xeaad,	// (0x00022d0e) tabs_4_active_pane_srt_ParamLimits

0xeaad,	// (0x00022d0e) tabs_4_active_pane_srt

0xeabf,	// (0x00022d20) tabs_4_passive_pane_cp2_srt_ParamLimits

0xeabf,	// (0x00022d20) tabs_4_passive_pane_cp2_srt

0x0d98,	// (0x00014ff9) aid_size_cell_toolbar

0x2e64,	// (0x000170c5) main_idle_act_pane_ParamLimits

0x0feb,	// (0x0001524c) popup_large_graphic_colour_window_ParamLimits

0xab2a,	// (0x0001ed8b) popup_toolbar_window_ParamLimits

0xab2a,	// (0x0001ed8b) popup_toolbar_window

0x3085,	// (0x000172e6) list_single_graphic_2heading_pane_ParamLimits

0x3085,	// (0x000172e6) list_single_graphic_2heading_pane

0xde6d,	// (0x000220ce) aid_size_cell_apps_grid_lsc_pane

0xde7f,	// (0x000220e0) aid_size_cell_apps_grid_prt_pane

0x0e1a,	// (0x0001507b) bg_wml_button_pane_cp1_ParamLimits

0x0e1a,	// (0x0001507b) bg_wml_button_pane_cp1

0xb012,	// (0x0001f273) form_midp_field_text_pane_t1_ParamLimits

0x1ab7,	// (0x00015d18) input_focus_pane_cp050_ParamLimits

0x1d05,	// (0x00015f66) list_midp_form_text_pane_ParamLimits

0x1cb7,	// (0x00015f18) input_focus_pane_cp051_ParamLimits

0x1ccb,	// (0x00015f2c) list_midp_choice_pane_ParamLimits

0xafc9,	// (0x0001f22a) list_single_2graphic_pane_cp3_ParamLimits

0xafc9,	// (0x0001f22a) list_single_2graphic_pane_cp3

0x4265,	// (0x000184c6) list_single_midp_graphic_pane_ParamLimits

0x4265,	// (0x000184c6) list_single_midp_graphic_pane

0xe883,	// (0x00022ae4) list_single_graphic_2heading_pane_g1_ParamLimits

0xe883,	// (0x00022ae4) list_single_graphic_2heading_pane_g1

0xe88f,	// (0x00022af0) list_single_graphic_2heading_pane_g4_ParamLimits

0xe88f,	// (0x00022af0) list_single_graphic_2heading_pane_g4

0xe89b,	// (0x00022afc) list_single_graphic_2heading_pane_g5_ParamLimits

0xe89b,	// (0x00022afc) list_single_graphic_2heading_pane_g5

0x0002,

0xf7b1,	// (0x00023a12) list_single_graphic_2heading_pane_g_ParamLimits

0xf7b1,	// (0x00023a12) list_single_graphic_2heading_pane_g

0xe8a7,	// (0x00022b08) list_single_graphic_2heading_pane_t1_ParamLimits

0xe8a7,	// (0x00022b08) list_single_graphic_2heading_pane_t1

0xe8bb,	// (0x00022b1c) list_single_graphic_2heading_pane_t2_ParamLimits

0xe8bb,	// (0x00022b1c) list_single_graphic_2heading_pane_t2

0xe8d7,	// (0x00022b38) list_single_graphic_2heading_pane_t3_ParamLimits

0xe8d7,	// (0x00022b38) list_single_graphic_2heading_pane_t3

0x0002,

0xf7b8,	// (0x00023a19) list_single_graphic_2heading_pane_t_ParamLimits

0xf7b8,	// (0x00023a19) list_single_graphic_2heading_pane_t

0x18a1,	// (0x00015b02) bg_popup_sub_pane_cp2

0x18cb,	// (0x00015b2c) grid_toobar_pane

0xe8ef,	// (0x00022b50) cell_toolbar_pane_ParamLimits

0xe8ef,	// (0x00022b50) cell_toolbar_pane

0x1935,	// (0x00015b96) cell_toolbar_pane_g1_ParamLimits

0x1935,	// (0x00015b96) cell_toolbar_pane_g1

0x1949,	// (0x00015baa) cell_toolbar_pane_g2_ParamLimits

0x1949,	// (0x00015baa) cell_toolbar_pane_g2

0x0001,

0xf7c6,	// (0x00023a27) cell_toolbar_pane_g_ParamLimits

0xf7c6,	// (0x00023a27) cell_toolbar_pane_g

0x196b,	// (0x00015bcc) grid_highlight_pane_cp2_ParamLimits

0x196b,	// (0x00015bcc) grid_highlight_pane_cp2

0x1985,	// (0x00015be6) toolbar_button_pane

0x1991,	// (0x00015bf2) toolbar_button_pane_g1

0x1999,	// (0x00015bfa) toolbar_button_pane_g2

0x19a1,	// (0x00015c02) toolbar_button_pane_g3

0x19a9,	// (0x00015c0a) toolbar_button_pane_g4

0x19b1,	// (0x00015c12) toolbar_button_pane_g5

0x19b9,	// (0x00015c1a) toolbar_button_pane_g6

0x19c1,	// (0x00015c22) toolbar_button_pane_g7

0x19c9,	// (0x00015c2a) toolbar_button_pane_g8

0x19d1,	// (0x00015c32) toolbar_button_pane_g9

0x0009,

0xf7cb,	// (0x00023a2c) toolbar_button_pane_g

0xe927,	// (0x00022b88) list_single_2graphic_pane_g1_cp3_ParamLimits

0xe927,	// (0x00022b88) list_single_2graphic_pane_g1_cp3

0x8ed8,	// (0x0001d139) list_single_2graphic_pane_g2_cp3_ParamLimits

0x8ed8,	// (0x0001d139) list_single_2graphic_pane_g2_cp3

0xe933,	// (0x00022b94) list_single_2graphic_pane_g3_cp3

0xe93b,	// (0x00022b9c) list_single_2graphic_pane_g4_cp3_ParamLimits

0xe93b,	// (0x00022b9c) list_single_2graphic_pane_g4_cp3

0xe947,	// (0x00022ba8) list_single_2graphic_pane_t1_cp3_ParamLimits

0xe947,	// (0x00022ba8) list_single_2graphic_pane_t1_cp3

0xe962,	// (0x00022bc3) list_single_midp_graphic_pane_g2_ParamLimits

0xe962,	// (0x00022bc3) list_single_midp_graphic_pane_g2

0x0da0,	// (0x00015001) aid_zoom_text_primary

0x0da8,	// (0x00015009) aid_zoom_text_secondary

0x0cf7,	// (0x00014f58) status_small_pane_g7_ParamLimits

0x0cf7,	// (0x00014f58) status_small_pane_g7

0x0d1a,	// (0x00014f7b) status_small_pane_t1_ParamLimits

0x964e,	// (0x0001d8af) title_pane_g2

0x0003,

0xf554,	// (0x000237b5) title_pane_g

0x98da,	// (0x0001db3b) aid_size_cell_colour_1_pane_ParamLimits

0x98da,	// (0x0001db3b) aid_size_cell_colour_1_pane

0x98ee,	// (0x0001db4f) aid_size_cell_colour_2_pane_ParamLimits

0x98ee,	// (0x0001db4f) aid_size_cell_colour_2_pane

0x9902,	// (0x0001db63) aid_size_cell_colour_3_pane_ParamLimits

0x9902,	// (0x0001db63) aid_size_cell_colour_3_pane

0x9916,	// (0x0001db77) aid_size_cell_colour_4_pane_ParamLimits

0x9916,	// (0x0001db77) aid_size_cell_colour_4_pane

0xe429,	// (0x0002268a) title_pane_stacon_g1_ParamLimits

0xe429,	// (0x0002268a) title_pane_stacon_g1

0x20e8,	// (0x00016349) popup_note_wait_window_g3_ParamLimits

0x20e8,	// (0x00016349) popup_note_wait_window_g3

0x215f,	// (0x000163c0) popup_note_wait_window_t5_ParamLimits

0x215f,	// (0x000163c0) popup_note_wait_window_t5

0xb8ea,	// (0x0001fb4b) main_feb_china_hwr_fs_writing_pane

0xa4c1,	// (0x0001e722) popup_feb_china_hwr_fs_window_ParamLimits

0xa4c1,	// (0x0001e722) popup_feb_china_hwr_fs_window

0x8ee9,	// (0x0001d14a) aid_size_cell_hwr_fs_ParamLimits

0x8ee9,	// (0x0001d14a) aid_size_cell_hwr_fs

0x1ab7,	// (0x00015d18) bg_popup_sub_pane_cp3_ParamLimits

0x1ab7,	// (0x00015d18) bg_popup_sub_pane_cp3

0x8efe,	// (0x0001d15f) grid_hwr_fs_pane_ParamLimits

0x8efe,	// (0x0001d15f) grid_hwr_fs_pane

0xe984,	// (0x00022be5) linegrid_hwr_fs_pane_ParamLimits

0xe984,	// (0x00022be5) linegrid_hwr_fs_pane

0x8f16,	// (0x0001d177) cell_hwr_fs_pane_ParamLimits

0x8f16,	// (0x0001d177) cell_hwr_fs_pane

0x1ac3,	// (0x00015d24) linegrid_hwr_fs_pane_g1_ParamLimits

0x1ac3,	// (0x00015d24) linegrid_hwr_fs_pane_g1

0xaf9d,	// (0x0001f1fe) linegrid_hwr_fs_pane_g2_ParamLimits

0xaf9d,	// (0x0001f1fe) linegrid_hwr_fs_pane_g2

0x1ae1,	// (0x00015d42) linegrid_hwr_fs_pane_g3_ParamLimits

0x1ae1,	// (0x00015d42) linegrid_hwr_fs_pane_g3

0xe994,	// (0x00022bf5) linegrid_hwr_fs_pane_g4_ParamLimits

0xe994,	// (0x00022bf5) linegrid_hwr_fs_pane_g4

0xe9b2,	// (0x00022c13) linegrid_hwr_fs_pane_g5_ParamLimits

0xe9b2,	// (0x00022c13) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f1,	// (0x00023a52) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f1,	// (0x00023a52) linegrid_hwr_fs_pane_g

0x1aed,	// (0x00015d4e) cell_hwr_fs_pane_g1_ParamLimits

0x1aed,	// (0x00015d4e) cell_hwr_fs_pane_g1

0x17d8,	// (0x00015a39) cell_hwr_fs_pane_g2_ParamLimits

0x17d8,	// (0x00015a39) cell_hwr_fs_pane_g2

0xafaf,	// (0x0001f210) cell_hwr_fs_pane_g3_ParamLimits

0xafaf,	// (0x0001f210) cell_hwr_fs_pane_g3

0xafbc,	// (0x0001f21d) cell_hwr_fs_pane_g4_ParamLimits

0xafbc,	// (0x0001f21d) cell_hwr_fs_pane_g4

0x0003,

0xf7fc,	// (0x00023a5d) cell_hwr_fs_pane_g_ParamLimits

0xf7fc,	// (0x00023a5d) cell_hwr_fs_pane_g

0x8f3c,	// (0x0001d19d) cell_hwr_fs_pane_t1

0xb8ea,	// (0x0001fb4b) grid_highlight_pane_cp6

0xb8ea,	// (0x0001fb4b) main_idle_act2_pane

0xdc7c,	// (0x00021edd) aid_inside_area_popup_secondary

0xb0fa,	// (0x0001f35b) aid_inside_area_window_primary_ParamLimits

0xb0fa,	// (0x0001f35b) aid_inside_area_window_primary

0x3408,	// (0x00017669) ai2_news_ticker_pane

0x3410,	// (0x00017671) aid_size_cell_ai1_link_ParamLimits

0x3410,	// (0x00017671) aid_size_cell_ai1_link

0x342a,	// (0x0001768b) popup_ai2_data_window_ParamLimits

0x342a,	// (0x0001768b) popup_ai2_data_window

0x3448,	// (0x000176a9) popup_ai2_link_window_ParamLimits

0x3448,	// (0x000176a9) popup_ai2_link_window

0x1ab7,	// (0x00015d18) bg_popup_sub_pane_cp4_ParamLimits

0x1ab7,	// (0x00015d18) bg_popup_sub_pane_cp4

0x345e,	// (0x000176bf) grid_ai2_link_pane_ParamLimits

0x345e,	// (0x000176bf) grid_ai2_link_pane

0x3475,	// (0x000176d6) popup_ai2_link_window_g1_ParamLimits

0x3475,	// (0x000176d6) popup_ai2_link_window_g1

0x3481,	// (0x000176e2) popup_ai2_link_window_g2_ParamLimits

0x3481,	// (0x000176e2) popup_ai2_link_window_g2

0x0001,

0xf9cf,	// (0x00023c30) popup_ai2_link_window_g_ParamLimits

0xf9cf,	// (0x00023c30) popup_ai2_link_window_g

0x3492,	// (0x000176f3) ai2_mp_button_pane

0x349a,	// (0x000176fb) ai2_mp_volume_pane

0x1cb7,	// (0x00015f18) bg_popup_sub_pane_cp5_ParamLimits

0x1cb7,	// (0x00015f18) bg_popup_sub_pane_cp5

0x34a2,	// (0x00017703) heading_ai2_gene_pane_ParamLimits

0x34a2,	// (0x00017703) heading_ai2_gene_pane

0x34ae,	// (0x0001770f) list_ai2_gene_pane_ParamLimits

0x34ae,	// (0x0001770f) list_ai2_gene_pane

0x34f6,	// (0x00017757) cell_ai2_link_pane_ParamLimits

0x34f6,	// (0x00017757) cell_ai2_link_pane

0x350c,	// (0x0001776d) cell_ai2_link_pane_g1

0xb8ea,	// (0x0001fb4b) grid_highlight_pane_cp7

0xeb65,	// (0x00022dc6) ai2_mp_volume_pane_g1

0x35df,	// (0x00017840) ai2_mp_volume_pane_g2

0x3554,	// (0x000177b5) list_ai2_gene_pane_t1

0x35e7,	// (0x00017848) ai2_mp_volume_pane_g3

0x0002,

0xf9e8,	// (0x00023c49) ai2_mp_volume_pane_g

0xeb6d,	// (0x00022dce) volume_small_pane_cp3

0x35ef,	// (0x00017850) aid_size_cell_ai2_button

0x35f7,	// (0x00017858) grid_ai2_button_pane

0x3600,	// (0x00017861) cell_ai2_button_pane_ParamLimits

0x3600,	// (0x00017861) cell_ai2_button_pane

0xb8e0,	// (0x0001fb41) cell_ai2_button_pane_g1

0xb8ea,	// (0x0001fb4b) grid_highlight_pane_cp8

0x359f,	// (0x00017800) ai2_gene_pane_t1_ParamLimits

0x359f,	// (0x00017800) ai2_gene_pane_t1

0xa41f,	// (0x0001e680) aid_height_parent_landscape

0xb302,	// (0x0001f563) aid_height_set_list

0x2e64,	// (0x000170c5) aid_size_parent

0x3229,	// (0x0001748a) aid_size_cell_graphic_pane_ParamLimits

0x34be,	// (0x0001771f) popup_ai2_data_window_g1_ParamLimits

0x34be,	// (0x0001771f) popup_ai2_data_window_g1

0x34ca,	// (0x0001772b) ai2_news_ticker_pane_g1

0x34d2,	// (0x00017733) ai2_news_ticker_pane_g2

0x0001,

0xf9d4,	// (0x00023c35) ai2_news_ticker_pane_g

0x34da,	// (0x0001773b) ai2_news_ticker_pane_t1

0x34e8,	// (0x00017749) ai2_news_ticker_pane_t2

0x0001,

0xf9d9,	// (0x00023c3a) ai2_news_ticker_pane_t

0x3515,	// (0x00017776) heading_ai2_gene_pane_g1

0x351d,	// (0x0001777e) heading_ai2_gene_pane_t1_ParamLimits

0x351d,	// (0x0001777e) heading_ai2_gene_pane_t1

0x3532,	// (0x00017793) list_highlight_pane_cp6

0x353a,	// (0x0001779b) ai2_gene_pane_ParamLimits

0x353a,	// (0x0001779b) ai2_gene_pane

0x3562,	// (0x000177c3) list_ai2_gene_pane_t2

0x0001,

0xf9de,	// (0x00023c3f) list_ai2_gene_pane_t

0x3570,	// (0x000177d1) list_highlight_pane_cp8_ParamLimits

0x3570,	// (0x000177d1) list_highlight_pane_cp8

0x3581,	// (0x000177e2) ai2_gene_pane_g1_ParamLimits

0x3581,	// (0x000177e2) ai2_gene_pane_g1

0x3593,	// (0x000177f4) ai2_gene_pane_g2_ParamLimits

0x3593,	// (0x000177f4) ai2_gene_pane_g2

0x0001,

0xf9e3,	// (0x00023c44) ai2_gene_pane_g_ParamLimits

0xf9e3,	// (0x00023c44) ai2_gene_pane_g

0xd9dc,	// (0x00021c3d) scroll_pane_cp12

0x8e97,	// (0x0001d0f8) control_pane_t3_ParamLimits

0x8e97,	// (0x0001d0f8) control_pane_t3

0x0d0b,	// (0x00014f6c) status_small_pane_g8_ParamLimits

0x0d0b,	// (0x00014f6c) status_small_pane_g8

0xa563,	// (0x0001e7c4) popup_find_window_ParamLimits

0xa814,	// (0x0001ea75) popup_note_image_window_ParamLimits

0x1907,	// (0x00015b68) list_double2_graphic_pane_vc_g1_ParamLimits

0x1907,	// (0x00015b68) list_double2_graphic_pane_vc_g1

0x0a01,	// (0x00014c62) list_double2_graphic_pane_vc_g2_ParamLimits

0x0a01,	// (0x00014c62) list_double2_graphic_pane_vc_g2

0x1913,	// (0x00015b74) list_double2_graphic_pane_vc_g3_ParamLimits

0x1913,	// (0x00015b74) list_double2_graphic_pane_vc_g3

0x0002,

0xf7bf,	// (0x00023a20) list_double2_graphic_pane_vc_g_ParamLimits

0xf7bf,	// (0x00023a20) list_double2_graphic_pane_vc_g

0x191f,	// (0x00015b80) list_double2_graphic_pane_vc_t1_ParamLimits

0x191f,	// (0x00015b80) list_double2_graphic_pane_vc_t1

0x0a01,	// (0x00014c62) list_single_heading_pane_vc_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_heading_pane_vc_g1

0x1913,	// (0x00015b74) list_single_heading_pane_vc_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_heading_pane_vc_g

0x19d9,	// (0x00015c3a) list_single_heading_pane_vc_t1_ParamLimits

0x19d9,	// (0x00015c3a) list_single_heading_pane_vc_t1

0x19f1,	// (0x00015c52) list_single_heading_pane_vc_t2_ParamLimits

0x19f1,	// (0x00015c52) list_single_heading_pane_vc_t2

0x0001,

0xf7e0,	// (0x00023a41) list_single_heading_pane_vc_t_ParamLimits

0xf7e0,	// (0x00023a41) list_single_heading_pane_vc_t

0x1a03,	// (0x00015c64) list_setting_number_pane_vc_g1_ParamLimits

0x1a03,	// (0x00015c64) list_setting_number_pane_vc_g1

0x1a0f,	// (0x00015c70) list_setting_number_pane_vc_g2_ParamLimits

0x1a0f,	// (0x00015c70) list_setting_number_pane_vc_g2

0x0001,

0xf7e5,	// (0x00023a46) list_setting_number_pane_vc_g_ParamLimits

0xf7e5,	// (0x00023a46) list_setting_number_pane_vc_g

0x1a1b,	// (0x00015c7c) list_setting_number_pane_vc_t1_ParamLimits

0x1a1b,	// (0x00015c7c) list_setting_number_pane_vc_t1

0x1a2f,	// (0x00015c90) list_setting_number_pane_vc_t2_ParamLimits

0x1a2f,	// (0x00015c90) list_setting_number_pane_vc_t2

0x1a4b,	// (0x00015cac) list_setting_number_pane_vc_t3_ParamLimits

0x1a4b,	// (0x00015cac) list_setting_number_pane_vc_t3

0x0002,

0xf7ea,	// (0x00023a4b) list_setting_number_pane_vc_t_ParamLimits

0xf7ea,	// (0x00023a4b) list_setting_number_pane_vc_t

0x1a79,	// (0x00015cda) set_value_pane_vc_ParamLimits

0x1a79,	// (0x00015cda) set_value_pane_vc

0x3085,	// (0x000172e6) list_double2_graphic_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double2_graphic_pane_vc

0x3085,	// (0x000172e6) list_double2_large_graphic_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double2_large_graphic_pane_vc

0x3085,	// (0x000172e6) list_double2_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double2_pane_vc

0x3085,	// (0x000172e6) list_double_graphic_heading_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_graphic_heading_pane_vc

0x3085,	// (0x000172e6) list_double_graphic_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_graphic_pane_vc

0x3085,	// (0x000172e6) list_double_heading_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_heading_pane_vc

0x3085,	// (0x000172e6) list_double_large_graphic_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_large_graphic_pane_vc

0x3085,	// (0x000172e6) list_double_number_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_number_pane_vc

0x3085,	// (0x000172e6) list_double_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_pane_vc

0x3085,	// (0x000172e6) list_double_time_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_double_time_pane_vc

0x3085,	// (0x000172e6) list_setting_number_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_setting_number_pane_vc

0x3085,	// (0x000172e6) list_setting_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_setting_pane_vc

0x3085,	// (0x000172e6) list_single_graphic_heading_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_single_graphic_heading_pane_vc

0x3085,	// (0x000172e6) list_single_heading_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_single_heading_pane_vc

0x3085,	// (0x000172e6) list_single_number_heading_pane_vc_ParamLimits

0x3085,	// (0x000172e6) list_single_number_heading_pane_vc

0x1907,	// (0x00015b68) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1907,	// (0x00015b68) list_double_graphic_heading_pane_vc_g1

0x3633,	// (0x00017894) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x3633,	// (0x00017894) list_double_graphic_heading_pane_vc_g2

0x363f,	// (0x000178a0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x363f,	// (0x000178a0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ef,	// (0x00023c50) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ef,	// (0x00023c50) list_double_graphic_heading_pane_vc_g

0x364b,	// (0x000178ac) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x364b,	// (0x000178ac) list_double_graphic_heading_pane_vc_t1

0x3661,	// (0x000178c2) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x3661,	// (0x000178c2) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f6,	// (0x00023c57) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f6,	// (0x00023c57) list_double_graphic_heading_pane_vc_t

0x1a03,	// (0x00015c64) list_setting_pane_vc_g1_ParamLimits

0x1a03,	// (0x00015c64) list_setting_pane_vc_g1

0x1a0f,	// (0x00015c70) list_setting_pane_vc_g2_ParamLimits

0x1a0f,	// (0x00015c70) list_setting_pane_vc_g2

0x0001,

0xf7e5,	// (0x00023a46) list_setting_pane_vc_g_ParamLimits

0xf7e5,	// (0x00023a46) list_setting_pane_vc_g

0x38a7,	// (0x00017b08) list_setting_pane_vc_t1_ParamLimits

0x38a7,	// (0x00017b08) list_setting_pane_vc_t1

0x38c3,	// (0x00017b24) list_setting_pane_vc_t2_ParamLimits

0x38c3,	// (0x00017b24) list_setting_pane_vc_t2

0x0001,

0xfa39,	// (0x00023c9a) list_setting_pane_vc_t_ParamLimits

0xfa39,	// (0x00023c9a) list_setting_pane_vc_t

0x1a79,	// (0x00015cda) set_value_pane_cp_vc_ParamLimits

0x1a79,	// (0x00015cda) set_value_pane_cp_vc

0x0a01,	// (0x00014c62) list_single_number_heading_pane_vc_g1_ParamLimits

0x0a01,	// (0x00014c62) list_single_number_heading_pane_vc_g1

0x1913,	// (0x00015b74) list_single_number_heading_pane_vc_g2_ParamLimits

0x1913,	// (0x00015b74) list_single_number_heading_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002382f) list_single_number_heading_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002382f) list_single_number_heading_pane_vc_g

0x19d9,	// (0x00015c3a) list_single_number_heading_pane_vc_t1_ParamLimits

0x19d9,	// (0x00015c3a) list_single_number_heading_pane_vc_t1

0x38df,	// (0x00017b40) list_single_number_heading_pane_vc_t2_ParamLimits

0x38df,	// (0x00017b40) list_single_number_heading_pane_vc_t2

0x38f1,	// (0x00017b52) list_single_number_heading_pane_vc_t3_ParamLimits

0x38f1,	// (0x00017b52) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3e,	// (0x00023c9f) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3e,	// (0x00023c9f) list_single_number_heading_pane_vc_t

0x1907,	// (0x00015b68) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1907,	// (0x00015b68) list_single_graphic_heading_pane_vc_g1

0x0a01,	// (0x00014c62) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0a01,	// (0x00014c62) list_single_graphic_heading_pane_vc_g4

0x1913,	// (0x00015b74) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x1913,	// (0x00015b74) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf7bf,	// (0x00023a20) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf7bf,	// (0x00023a20) list_single_graphic_heading_pane_vc_g

0x19d9,	// (0x00015c3a) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x19d9,	// (0x00015c3a) list_single_graphic_heading_pane_vc_t1

0x3903,	// (0x00017b64) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x3903,	// (0x00017b64) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa45,	// (0x00023ca6) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa45,	// (0x00023ca6) list_single_graphic_heading_pane_vc_t

0x0a01,	// (0x00014c62) list_double2_pane_vc_g1_ParamLimits

0x0a01,	// (0x00014c62) list_double2_pane_vc_g1

0x1913,	// (0x00015b74) list_double2_pane_vc_g2_ParamLimits

0x1913,	// (0x00015b74) list_double2_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002382f) list_double2_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002382f) list_double2_pane_vc_g

0x3915,	// (0x00017b76) list_double2_pane_vc_t1_ParamLimits

0x3915,	// (0x00017b76) list_double2_pane_vc_t1

0x392b,	// (0x00017b8c) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x392b,	// (0x00017b8c) list_double2_large_graphic_pane_vc_g1

0x0a01,	// (0x00014c62) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x0a01,	// (0x00014c62) list_double2_large_graphic_pane_vc_g2

0x1913,	// (0x00015b74) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x1913,	// (0x00015b74) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5eb,	// (0x0002384c) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5eb,	// (0x0002384c) list_double2_large_graphic_pane_vc_g

0x3937,	// (0x00017b98) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x3937,	// (0x00017b98) list_double2_large_graphic_pane_vc_t1

0x394d,	// (0x00017bae) list_double_time_pane_vc_g1_ParamLimits

0x394d,	// (0x00017bae) list_double_time_pane_vc_g1

0x3959,	// (0x00017bba) list_double_time_pane_vc_g2_ParamLimits

0x3959,	// (0x00017bba) list_double_time_pane_vc_g2

0x0001,

0xfa4a,	// (0x00023cab) list_double_time_pane_vc_g_ParamLimits

0xfa4a,	// (0x00023cab) list_double_time_pane_vc_g

0x3965,	// (0x00017bc6) list_double_time_pane_vc_t1_ParamLimits

0x3965,	// (0x00017bc6) list_double_time_pane_vc_t1

0x3995,	// (0x00017bf6) list_double_time_pane_vc_t2_ParamLimits

0x3995,	// (0x00017bf6) list_double_time_pane_vc_t2

0x39be,	// (0x00017c1f) list_double_time_pane_vc_t3_ParamLimits

0x39be,	// (0x00017c1f) list_double_time_pane_vc_t3

0x39d0,	// (0x00017c31) list_double_time_pane_vc_t4_ParamLimits

0x39d0,	// (0x00017c31) list_double_time_pane_vc_t4

0x0003,

0xfa4f,	// (0x00023cb0) list_double_time_pane_vc_t_ParamLimits

0xfa4f,	// (0x00023cb0) list_double_time_pane_vc_t

0x0a01,	// (0x00014c62) list_double_pane_vc_g1_ParamLimits

0x0a01,	// (0x00014c62) list_double_pane_vc_g1

0x1913,	// (0x00015b74) list_double_pane_vc_g2_ParamLimits

0x1913,	// (0x00015b74) list_double_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002382f) list_double_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002382f) list_double_pane_vc_g

0x39f5,	// (0x00017c56) list_double_pane_vc_t1_ParamLimits

0x39f5,	// (0x00017c56) list_double_pane_vc_t1

0x3a09,	// (0x00017c6a) list_double_pane_vc_t2_ParamLimits

0x3a09,	// (0x00017c6a) list_double_pane_vc_t2

0x0001,

0xfa58,	// (0x00023cb9) list_double_pane_vc_t_ParamLimits

0xfa58,	// (0x00023cb9) list_double_pane_vc_t

0x0a01,	// (0x00014c62) list_double_number_pane_vc_g1_ParamLimits

0x0a01,	// (0x00014c62) list_double_number_pane_vc_g1

0x1913,	// (0x00015b74) list_double_number_pane_vc_g2_ParamLimits

0x1913,	// (0x00015b74) list_double_number_pane_vc_g2

0x0001,

0xf5ce,	// (0x0002382f) list_double_number_pane_vc_g_ParamLimits

0xf5ce,	// (0x0002382f) list_double_number_pane_vc_g

0x3a1f,	// (0x00017c80) list_double_number_pane_vc_t1_ParamLimits

0x3a1f,	// (0x00017c80) list_double_number_pane_vc_t1

0x3a33,	// (0x00017c94) list_double_number_pane_vc_t2_ParamLimits

0x3a33,	// (0x00017c94) list_double_number_pane_vc_t2

0x3a47,	// (0x00017ca8) list_double_number_pane_vc_t3_ParamLimits

0x3a47,	// (0x00017ca8) list_double_number_pane_vc_t3

0x0002,

0xfa5d,	// (0x00023cbe) list_double_number_pane_vc_t_ParamLimits

0xfa5d,	// (0x00023cbe) list_double_number_pane_vc_t

0x3a5d,	// (0x00017cbe) list_double_large_graphic_pane_vc_g1_ParamLimits

0x3a5d,	// (0x00017cbe) list_double_large_graphic_pane_vc_g1

0x3a6e,	// (0x00017ccf) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3a6e,	// (0x00017ccf) list_double_large_graphic_pane_vc_g2

0x1913,	// (0x00015b74) list_double_large_graphic_pane_vc_g3_ParamLimits

0x1913,	// (0x00015b74) list_double_large_graphic_pane_vc_g3

0x3a7d,	// (0x00017cde) list_double_large_graphic_pane_vc_g4_ParamLimits

0x3a7d,	// (0x00017cde) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa64,	// (0x00023cc5) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa64,	// (0x00023cc5) list_double_large_graphic_pane_vc_g

0x3a89,	// (0x00017cea) list_double_large_graphic_pane_vc_t1_ParamLimits

0x3a89,	// (0x00017cea) list_double_large_graphic_pane_vc_t1

0x3aa2,	// (0x00017d03) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3aa2,	// (0x00017d03) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa6d,	// (0x00023cce) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa6d,	// (0x00023cce) list_double_large_graphic_pane_vc_t

0x3633,	// (0x00017894) list_double_heading_pane_vc_g1_ParamLimits

0x3633,	// (0x00017894) list_double_heading_pane_vc_g1

0x363f,	// (0x000178a0) list_double_heading_pane_vc_g2_ParamLimits

0x363f,	// (0x000178a0) list_double_heading_pane_vc_g2

0x0001,

0xfa72,	// (0x00023cd3) list_double_heading_pane_vc_g_ParamLimits

0xfa72,	// (0x00023cd3) list_double_heading_pane_vc_g

0x3ab9,	// (0x00017d1a) list_double_heading_pane_vc_t1_ParamLimits

0x3ab9,	// (0x00017d1a) list_double_heading_pane_vc_t1

0x19d9,	// (0x00015c3a) list_double_heading_pane_vc_t2_ParamLimits

0x19d9,	// (0x00015c3a) list_double_heading_pane_vc_t2

0x0001,

0xfa77,	// (0x00023cd8) list_double_heading_pane_vc_t_ParamLimits

0xfa77,	// (0x00023cd8) list_double_heading_pane_vc_t

0x1907,	// (0x00015b68) list_double_graphic_pane_vc_g1_ParamLimits

0x1907,	// (0x00015b68) list_double_graphic_pane_vc_g1

0x3acb,	// (0x00017d2c) list_double_graphic_pane_vc_g2_ParamLimits

0x3acb,	// (0x00017d2c) list_double_graphic_pane_vc_g2

0x3ada,	// (0x00017d3b) list_double_graphic_pane_vc_g3_ParamLimits

0x3ada,	// (0x00017d3b) list_double_graphic_pane_vc_g3

0x0002,

0xfa7c,	// (0x00023cdd) list_double_graphic_pane_vc_g_ParamLimits

0xfa7c,	// (0x00023cdd) list_double_graphic_pane_vc_g

0x3ae6,	// (0x00017d47) list_double_graphic_pane_vc_t1_ParamLimits

0x3ae6,	// (0x00017d47) list_double_graphic_pane_vc_t1

0x3afa,	// (0x00017d5b) list_double_graphic_pane_vc_t2_ParamLimits

0x3afa,	// (0x00017d5b) list_double_graphic_pane_vc_t2

0x0001,

0xfa83,	// (0x00023ce4) list_double_graphic_pane_vc_t_ParamLimits

0xfa83,	// (0x00023ce4) list_double_graphic_pane_vc_t

0xd402,	// (0x00021663) aid_size_cell_fastswap

0x8b5a,	// (0x0001cdbb) aid_size_cell_touch_ParamLimits

0x8b5a,	// (0x0001cdbb) aid_size_cell_touch

0xe32c,	// (0x0002258d) popup_fast_swap_wide_window_ParamLimits

0xe32c,	// (0x0002258d) popup_fast_swap_wide_window

0x8d18,	// (0x0001cf79) touch_pane_ParamLimits

0x8d18,	// (0x0001cf79) touch_pane

0xda61,	// (0x00021cc2) button_value_adjust_pane_cp2

0xda69,	// (0x00021cca) button_value_adjust_pane_cp4

0xda71,	// (0x00021cd2) form_field_data_pane_cp2

0x9e11,	// (0x0001e072) form_field_data_wide_pane_cp2

0xdebb,	// (0x0002211c) bg_scroll_pane_ParamLimits

0xe585,	// (0x000227e6) scroll_handle_pane_ParamLimits

0xe599,	// (0x000227fa) scroll_sc2_down_pane_ParamLimits

0xe599,	// (0x000227fa) scroll_sc2_down_pane

0xdeec,	// (0x0002214d) scroll_sc2_up_pane_ParamLimits

0xdeec,	// (0x0002214d) scroll_sc2_up_pane

0xb700,	// (0x0001f961) grid_wheel_folder_pane_g1_ParamLimits

0xb700,	// (0x0001f961) grid_wheel_folder_pane_g1

0xe763,	// (0x000229c4) clock_nsta_pane_cp2_ParamLimits

0xe763,	// (0x000229c4) clock_nsta_pane_cp2

0x0e1a,	// (0x0001507b) listscroll_midp_pane_ParamLimits

0xa345,	// (0x0001e5a6) midp_canvas_pane

0x0d86,	// (0x00014fe7) nsta_clock_indic_pane

0x0de4,	// (0x00015045) listscroll_form_pane_vc

0x0e08,	// (0x00015069) listscroll_set_pane_vc_ParamLimits

0x0e08,	// (0x00015069) listscroll_set_pane_vc

0xac90,	// (0x0001eef1) clock_nsta_pane

0xacba,	// (0x0001ef1b) indicator_nsta_pane

0x18a1,	// (0x00015b02) bg_popup_sub_pane_cp2_ParamLimits

0x18b5,	// (0x00015b16) find_pane_cp2_ParamLimits

0x18b5,	// (0x00015b16) find_pane_cp2

0x18cb,	// (0x00015b2c) grid_toobar_pane_ParamLimits

0x1a8b,	// (0x00015cec) list_form_gen_pane_vc_ParamLimits

0x1a8b,	// (0x00015cec) list_form_gen_pane_vc

0x1aa1,	// (0x00015d02) scroll_pane_cp8_vc_ParamLimits

0x1aa1,	// (0x00015d02) scroll_pane_cp8_vc

0x1b1d,	// (0x00015d7e) data_form_wide_pane_vc_ParamLimits

0x1b1d,	// (0x00015d7e) data_form_wide_pane_vc

0x1b29,	// (0x00015d8a) form_field_data_wide_pane_vc_g1

0x1b31,	// (0x00015d92) form_field_data_wide_pane_vc_t1_ParamLimits

0x1b31,	// (0x00015d92) form_field_data_wide_pane_vc_t1

0xdacc,	// (0x00021d2d) input_focus_pane_cp6_vc_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_cp6_vc

0xb057,	// (0x0001f2b8) list_midp_pane_ParamLimits

0x3295,	// (0x000174f6) scroll_pane_cp16_ParamLimits

0x3295,	// (0x000174f6) scroll_pane_cp16

0x1ebc,	// (0x0001611d) button_value_adjust_pane_ParamLimits

0x1ebc,	// (0x0001611d) button_value_adjust_pane

0xb313,	// (0x0001f574) button_value_adjust_pane_cp6_ParamLimits

0xb313,	// (0x0001f574) button_value_adjust_pane_cp6

0xb455,	// (0x0001f6b6) settings_code_pane_cp_ParamLimits

0xb455,	// (0x0001f6b6) settings_code_pane_cp

0xb8e0,	// (0x0001fb41) cell_touch_pane_g1

0xb8e0,	// (0x0001fb41) cell_touch_pane_g2

0x0001,

0xf704,	// (0x00023965) cell_touch_pane_g

0xb5d5,	// (0x0001f836) cell_touch_pane_cp_ParamLimits

0xb5d5,	// (0x0001f836) cell_touch_pane_cp

0xb5f1,	// (0x0001f852) cell_touch_pane_ParamLimits

0xb5f1,	// (0x0001f852) cell_touch_pane

0xb8e0,	// (0x0001fb41) scroll_sc2_down_pane_g1

0xb8e0,	// (0x0001fb41) scroll_sc2_up_pane_g1

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp4_vc

0x367f,	// (0x000178e0) list_set_graphic_pane_vc_g1_ParamLimits

0x367f,	// (0x000178e0) list_set_graphic_pane_vc_g1

0xe20f,	// (0x00022470) list_set_graphic_pane_vc_g2_ParamLimits

0xe20f,	// (0x00022470) list_set_graphic_pane_vc_g2

0x0001,

0xf9fb,	// (0x00023c5c) list_set_graphic_pane_vc_g_ParamLimits

0xf9fb,	// (0x00023c5c) list_set_graphic_pane_vc_g

0x368b,	// (0x000178ec) text_primary_small_cp13_vc_ParamLimits

0x368b,	// (0x000178ec) text_primary_small_cp13_vc

0x36a3,	// (0x00017904) list_set_graphic_pane_vc_ParamLimits

0x36a3,	// (0x00017904) list_set_graphic_pane_vc

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp2_vc

0xb8e0,	// (0x0001fb41) setting_code_pane_vc_g1

0xb969,	// (0x0001fbca) setting_code_pane_vc_t1

0x36b8,	// (0x00017919) set_text_pane_vc_t1_ParamLimits

0x36b8,	// (0x00017919) set_text_pane_vc_t1

0xb8ea,	// (0x0001fb4b) input_focus_pane_cp1_vc

0x36d6,	// (0x00017937) list_set_text_pane_vc

0xb8e0,	// (0x0001fb41) setting_text_pane_vc_g1

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp2_vc

0xb960,	// (0x0001fbc1) setting_slider_graphic_pane_vc_g1

0x36e0,	// (0x00017941) setting_slider_graphic_pane_vc_t1

0x36f2,	// (0x00017953) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa00,	// (0x00023c61) setting_slider_graphic_pane_vc_t

0x3704,	// (0x00017965) slider_set_pane_cp_vc

0x370e,	// (0x0001796f) slider_set_pane_vc_g1

0x3717,	// (0x00017978) slider_set_pane_vc_g2

0x0006,

0xfa05,	// (0x00023c66) slider_set_pane_vc_g

0xdb95,	// (0x00021df6) set_opt_bg_pane_g1_copy1

0xdb9d,	// (0x00021dfe) set_opt_bg_pane_g2_copy1

0x3743,	// (0x000179a4) set_opt_bg_pane_g3_copy1

0xdbad,	// (0x00021e0e) set_opt_bg_pane_g4_copy1

0xdbb5,	// (0x00021e16) set_opt_bg_pane_g5_copy1

0xdbbd,	// (0x00021e1e) set_opt_bg_pane_g6_copy1

0x374d,	// (0x000179ae) set_opt_bg_pane_g7_copy1

0x3757,	// (0x000179b8) set_opt_bg_pane_g8_copy1

0x3761,	// (0x000179c2) set_opt_bg_pane_g9_copy1

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp_vc

0x376b,	// (0x000179cc) setting_slider_pane_vc_t1

0x377a,	// (0x000179db) setting_slider_pane_vc_t2

0x378c,	// (0x000179ed) setting_slider_pane_vc_t3

0x0002,

0xfa14,	// (0x00023c75) setting_slider_pane_vc_t

0x379e,	// (0x000179ff) slider_set_pane_vc

0xe9c8,	// (0x00022c29) volume_set_pane_vc_g1

0xeb76,	// (0x00022dd7) volume_set_pane_vc_g2

0xeb7f,	// (0x00022de0) volume_set_pane_vc_g3

0xeb88,	// (0x00022de9) volume_set_pane_vc_g4

0xeb91,	// (0x00022df2) volume_set_pane_vc_g5

0xeb9a,	// (0x00022dfb) volume_set_pane_vc_g6

0xeba3,	// (0x00022e04) volume_set_pane_vc_g7

0xebac,	// (0x00022e0d) volume_set_pane_vc_g8

0xebb5,	// (0x00022e16) volume_set_pane_vc_g9

0xebbe,	// (0x00022e1f) volume_set_pane_vc_g10

0x0009,

0xfa1b,	// (0x00023c7c) volume_set_pane_vc_g

0x37a8,	// (0x00017a09) volume_set_pane_vc

0x37b2,	// (0x00017a13) button_value_adjust_pane_cp1_vc

0x37bc,	// (0x00017a1d) list_highlight_pane_cp2_vc

0x37c5,	// (0x00017a26) list_set_pane_vc_ParamLimits

0x37c5,	// (0x00017a26) list_set_pane_vc

0x3835,	// (0x00017a96) main_pane_set_vc_t1_ParamLimits

0x3835,	// (0x00017a96) main_pane_set_vc_t1

0x384a,	// (0x00017aab) main_pane_set_vc_t2_ParamLimits

0x384a,	// (0x00017aab) main_pane_set_vc_t2

0x385c,	// (0x00017abd) main_pane_set_vc_t3_ParamLimits

0x385c,	// (0x00017abd) main_pane_set_vc_t3

0x3870,	// (0x00017ad1) main_pane_set_vc_t4_ParamLimits

0x3870,	// (0x00017ad1) main_pane_set_vc_t4

0x0003,

0xfa30,	// (0x00023c91) main_pane_set_vc_t_ParamLimits

0xfa30,	// (0x00023c91) main_pane_set_vc_t

0x3884,	// (0x00017ae5) setting_code_pane_vc_ParamLimits

0x3884,	// (0x00017ae5) setting_code_pane_vc

0x3895,	// (0x00017af6) setting_slider_graphic_pane_vc

0x3895,	// (0x00017af6) setting_slider_pane_vc

0x3895,	// (0x00017af6) setting_text_pane_vc

0x3895,	// (0x00017af6) setting_volume_pane_vc

0x389f,	// (0x00017b00) scroll_pane_cp121_vc

0xda4f,	// (0x00021cb0) set_content_pane_vc

0x3b10,	// (0x00017d71) button_value_adjust_pane_g1

0x3b19,	// (0x00017d7a) button_value_adjust_pane_g2

0x0001,

0xfa88,	// (0x00023ce9) button_value_adjust_pane_g

0x3b22,	// (0x00017d83) form_field_slider_wide_pane_vc_t1_ParamLimits

0x3b22,	// (0x00017d83) form_field_slider_wide_pane_vc_t1

0x3b34,	// (0x00017d95) form_field_slider_wide_pane_vc_t2_ParamLimits

0x3b34,	// (0x00017d95) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa8d,	// (0x00023cee) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa8d,	// (0x00023cee) form_field_slider_wide_pane_vc_t

0xb944,	// (0x0001fba5) input_focus_pane_cp10_vc_ParamLimits

0xb944,	// (0x0001fba5) input_focus_pane_cp10_vc

0x3b60,	// (0x00017dc1) slider_cont_pane_cp1_vc_ParamLimits

0x3b60,	// (0x00017dc1) slider_cont_pane_cp1_vc

0x3b72,	// (0x00017dd3) slider_form_pane_g1_cp2

0x3717,	// (0x00017978) slider_form_pane_g2_cp2

0x3b9f,	// (0x00017e00) form_field_slider_pane_vc_t3

0x3bad,	// (0x00017e0e) form_field_slider_pane_vc_t4

0x3bbb,	// (0x00017e1c) slider_form_pane_vc_ParamLimits

0x3bbb,	// (0x00017e1c) slider_form_pane_vc

0x3bc8,	// (0x00017e29) form_field_slider_pane_vc_t1_ParamLimits

0x3bc8,	// (0x00017e29) form_field_slider_pane_vc_t1

0x3b34,	// (0x00017d95) form_field_slider_pane_vc_t2_ParamLimits

0x3b34,	// (0x00017d95) form_field_slider_pane_vc_t2

0x0001,

0xfa9f,	// (0x00023d00) form_field_slider_pane_vc_t_ParamLimits

0xfa9f,	// (0x00023d00) form_field_slider_pane_vc_t

0xb944,	// (0x0001fba5) input_focus_pane_cp9_vc_ParamLimits

0xb944,	// (0x0001fba5) input_focus_pane_cp9_vc

0x3bde,	// (0x00017e3f) slider_cont_pane_vc_ParamLimits

0x3bde,	// (0x00017e3f) slider_cont_pane_vc

0x3bf2,	// (0x00017e53) list_form_graphic_pane_cp_vc_ParamLimits

0x3bf2,	// (0x00017e53) list_form_graphic_pane_cp_vc

0x1b29,	// (0x00015d8a) form_field_popup_wide_pane_vc_g1

0x3c07,	// (0x00017e68) form_field_popup_wide_pane_vc_t1_ParamLimits

0x3c07,	// (0x00017e68) form_field_popup_wide_pane_vc_t1

0xdacc,	// (0x00021d2d) input_focus_pane_cp8_vc_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_cp8_vc

0x3c4c,	// (0x00017ead) list_form_wide_pane_vc_ParamLimits

0x3c4c,	// (0x00017ead) list_form_wide_pane_vc

0x3c58,	// (0x00017eb9) list_form_graphic_pane_vc_g1

0x3c60,	// (0x00017ec1) list_form_graphic_pane_vc_t1_ParamLimits

0x3c60,	// (0x00017ec1) list_form_graphic_pane_vc_t1

0xb952,	// (0x0001fbb3) list_highlight_pane_cp5_vc_ParamLimits

0xb952,	// (0x0001fbb3) list_highlight_pane_cp5_vc

0x3c7c,	// (0x00017edd) list_form_graphic_pane_vc_ParamLimits

0x3c7c,	// (0x00017edd) list_form_graphic_pane_vc

0x1b29,	// (0x00015d8a) form_field_popup_pane_vc_g1

0x3c92,	// (0x00017ef3) form_field_popup_pane_vc_t1_ParamLimits

0x3c92,	// (0x00017ef3) form_field_popup_pane_vc_t1

0xdacc,	// (0x00021d2d) input_focus_pane_cp7_vc_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_cp7_vc

0x3ca9,	// (0x00017f0a) list_form_pane_vc_ParamLimits

0x3ca9,	// (0x00017f0a) list_form_pane_vc

0x3cb5,	// (0x00017f16) data_form_pane_vc_t1_ParamLimits

0x3cb5,	// (0x00017f16) data_form_pane_vc_t1

0xdb95,	// (0x00021df6) input_focus_pane_vc_g1

0xdb9d,	// (0x00021dfe) input_focus_pane_vc_g2

0xdba5,	// (0x00021e06) input_focus_pane_vc_g3

0xdbad,	// (0x00021e0e) input_focus_pane_vc_g4

0xdbb5,	// (0x00021e16) input_focus_pane_vc_g5

0xdbbd,	// (0x00021e1e) input_focus_pane_vc_g6

0xdbc5,	// (0x00021e26) input_focus_pane_vc_g7

0xdbcd,	// (0x00021e2e) input_focus_pane_vc_g8

0xdbd5,	// (0x00021e36) input_focus_pane_vc_g9

0xb8e0,	// (0x0001fb41) input_focus_pane_vc_g10

0x0009,

0xf68d,	// (0x000238ee) input_focus_pane_vc_g

0x1b1d,	// (0x00015d7e) data_form_pane_vc_ParamLimits

0x1b1d,	// (0x00015d7e) data_form_pane_vc

0x1b29,	// (0x00015d8a) form_field_data_pane_vc_g1

0x3cd2,	// (0x00017f33) form_field_data_pane_vc_t1_ParamLimits

0x3cd2,	// (0x00017f33) form_field_data_pane_vc_t1

0xdacc,	// (0x00021d2d) input_focus_pane_vc_ParamLimits

0xdacc,	// (0x00021d2d) input_focus_pane_vc

0x3cec,	// (0x00017f4d) button_value_adjust_pane_cp3_vc

0x3cf4,	// (0x00017f55) button_value_adjust_pane_cp5_vc

0x3cfc,	// (0x00017f5d) form_field_data_pane_vc_ParamLimits

0x3cfc,	// (0x00017f5d) form_field_data_pane_vc

0x3d17,	// (0x00017f78) form_field_data_pane_vc_cp2

0x3d1f,	// (0x00017f80) form_field_data_wide_pane_vc_ParamLimits

0x3d1f,	// (0x00017f80) form_field_data_wide_pane_vc

0x3d39,	// (0x00017f9a) form_field_data_wide_pane_vc_cp2

0x3d41,	// (0x00017fa2) form_field_popup_pane_vc_ParamLimits

0x3d41,	// (0x00017fa2) form_field_popup_pane_vc

0x3d5c,	// (0x00017fbd) form_field_popup_wide_pane_vc_ParamLimits

0x3d5c,	// (0x00017fbd) form_field_popup_wide_pane_vc

0x3d76,	// (0x00017fd7) form_field_slider_pane_vc_ParamLimits

0x3d76,	// (0x00017fd7) form_field_slider_pane_vc

0x3d89,	// (0x00017fea) form_field_slider_wide_pane_vc_ParamLimits

0x3d89,	// (0x00017fea) form_field_slider_wide_pane_vc

0xb60f,	// (0x0001f870) grid_touch_1_pane_ParamLimits

0xb60f,	// (0x0001f870) grid_touch_1_pane

0xb623,	// (0x0001f884) grid_touch_2_pane_ParamLimits

0xb623,	// (0x0001f884) grid_touch_2_pane

0x3e60,	// (0x000180c1) touch_pane_g1_ParamLimits

0x3e60,	// (0x000180c1) touch_pane_g1

0x3dc2,	// (0x00018023) cell_app_pane_cp_wide_ParamLimits

0x3dc2,	// (0x00018023) cell_app_pane_cp_wide

0x3dd3,	// (0x00018034) grid_popup_fast_wide_pane_ParamLimits

0x3dd3,	// (0x00018034) grid_popup_fast_wide_pane

0x3de7,	// (0x00018048) scroll_pane_cp19_ParamLimits

0x3de7,	// (0x00018048) scroll_pane_cp19

0xb8ea,	// (0x0001fb4b) bg_popup_window_pane_cp20

0x3dfb,	// (0x0001805c) listscroll_popup_fast_wide_pane

0xe21b,	// (0x0002247c) grid_indicator_nsta_pane

0x3e03,	// (0x00018064) clock_nsta_pane_g1

0x3e0c,	// (0x0001806d) clock_nsta_pane_t1

0xb64f,	// (0x0001f8b0) cell_indicator_nsta_pane_ParamLimits

0xb64f,	// (0x0001f8b0) cell_indicator_nsta_pane

0x3e60,	// (0x000180c1) cell_indicator_nsta_pane_g1

0xb66c,	// (0x0001f8cd) cell_indicator_nsta_pane_g2

0x0001,

0xfab0,	// (0x00023d11) cell_indicator_nsta_pane_g

0x3e84,	// (0x000180e5) clock_nsta_pane_cp

0x3e8c,	// (0x000180ed) indicator_nsta_pane_cp

0x3e95,	// (0x000180f6) nsta_clock_indic_pane_g1

0xb9a8,	// (0x0001fc09) grid_indicator_pane

0xdfde,	// (0x0002223f) scroll_pane_cp29

0xe6af,	// (0x00022910) indicator_nsta_pane_cp2_ParamLimits

0xe6af,	// (0x00022910) indicator_nsta_pane_cp2

0xb952,	// (0x0001fbb3) main_apps_wheel_pane

0x1d3f,	// (0x00015fa0) form_midp_field_text_pane_ParamLimits

0x1e8e,	// (0x000160ef) scroll_bar_cp050_ParamLimits

0x3efe,	// (0x0001815f) cell_indicator_pane_ParamLimits

0x3efe,	// (0x0001815f) cell_indicator_pane

0x3f16,	// (0x00018177) cell_indicator_pane_g1

0xb682,	// (0x0001f8e3) grid_wheel_folder_pane_ParamLimits

0xb682,	// (0x0001f8e3) grid_wheel_folder_pane

0xb690,	// (0x0001f8f1) list_wheel_apps_pane_ParamLimits

0xb690,	// (0x0001f8f1) list_wheel_apps_pane

0xb69e,	// (0x0001f8ff) main_apps_wheel_pane_g1_ParamLimits

0xb69e,	// (0x0001f8ff) main_apps_wheel_pane_g1

0xb6ae,	// (0x0001f90f) main_apps_wheel_pane_g2_ParamLimits

0xb6ae,	// (0x0001f90f) main_apps_wheel_pane_g2

0x0001,

0xfacc,	// (0x00023d2d) main_apps_wheel_pane_g_ParamLimits

0xfacc,	// (0x00023d2d) main_apps_wheel_pane_g

0xb6be,	// (0x0001f91f) main_apps_wheel_pane_t1_ParamLimits

0xb6be,	// (0x0001f91f) main_apps_wheel_pane_t1

0xb6d6,	// (0x0001f937) list_wheel_apps_pane_g1

0xb6de,	// (0x0001f93f) list_wheel_apps_pane_g2

0xb6e6,	// (0x0001f947) list_wheel_apps_pane_g3

0xb6ee,	// (0x0001f94f) list_wheel_apps_pane_g4

0xb6f6,	// (0x0001f957) list_wheel_apps_pane_g5

0x0004,

0xfad1,	// (0x00023d32) list_wheel_apps_pane_g

0x090c,	// (0x00014b6d) navi_icon_text_pane

0xab82,	// (0x0001ede3) aid_fill_nsta

0xb713,	// (0x0001f974) navi_icon_text_pane_g1

0xb71f,	// (0x0001f980) navi_icon_text_pane_t1

0xa2a9,	// (0x0001e50a) list_set_graphic_pane_t1_ParamLimits

0xa2a9,	// (0x0001e50a) list_set_graphic_pane_t1

0x25df,	// (0x00016840) popup_midp_note_alarm_window_t6_ParamLimits

0x25df,	// (0x00016840) popup_midp_note_alarm_window_t6

0x25f1,	// (0x00016852) popup_midp_note_alarm_window_t7_ParamLimits

0x25f1,	// (0x00016852) popup_midp_note_alarm_window_t7

0x2603,	// (0x00016864) popup_midp_note_alarm_window_t8_ParamLimits

0x2603,	// (0x00016864) popup_midp_note_alarm_window_t8

0x2615,	// (0x00016876) popup_midp_note_alarm_window_t9_ParamLimits

0x2615,	// (0x00016876) popup_midp_note_alarm_window_t9

0x2627,	// (0x00016888) popup_midp_note_alarm_window_t10_ParamLimits

0x2627,	// (0x00016888) popup_midp_note_alarm_window_t10

0x2639,	// (0x0001689a) popup_midp_note_alarm_window_t11_ParamLimits

0x2639,	// (0x0001689a) popup_midp_note_alarm_window_t11

0x264b,	// (0x000168ac) scroll_pane_cp17_ParamLimits

0x264b,	// (0x000168ac) scroll_pane_cp17

0xe9c8,	// (0x00022c29) volume_small_pane_cp_g1

0xebc7,	// (0x00022e28) volume_small_pane_cp_g2

0xebd0,	// (0x00022e31) volume_small_pane_cp_g3

0xebd9,	// (0x00022e3a) volume_small_pane_cp_g4

0xebe2,	// (0x00022e43) volume_small_pane_cp_g5

0xebeb,	// (0x00022e4c) volume_small_pane_cp_g6

0xebf4,	// (0x00022e55) volume_small_pane_cp_g7

0xebfd,	// (0x00022e5e) volume_small_pane_cp_g8

0xec06,	// (0x00022e67) volume_small_pane_cp_g9

0xec0f,	// (0x00022e70) volume_small_pane_cp_g10

0x0b61,	// (0x00014dc2) midp_ticker_pane_g1_ParamLimits

0x0b6d,	// (0x00014dce) midp_ticker_pane_g2_ParamLimits

0xf759,	// (0x000239ba) midp_ticker_pane_g_ParamLimits

0xa3dc,	// (0x0001e63d) midp_ticker_pane_t1_ParamLimits

0xaba6,	// (0x0001ee07) aid_fill_nsta_2

0x1e7a,	// (0x000160db) list_form2_midp_pane

0x3040,	// (0x000172a1) midp_editing_number_pane_ParamLimits

0x304f,	// (0x000172b0) midp_ticker_pane_ParamLimits

0x4009,	// (0x0001826a) form2_midp_field_pane

0x402d,	// (0x0001828e) scroll_pane_cp51

0x404d,	// (0x000182ae) form2_midp_button_pane_ParamLimits

0x404d,	// (0x000182ae) form2_midp_button_pane

0x405f,	// (0x000182c0) form2_midp_content_pane_ParamLimits

0x405f,	// (0x000182c0) form2_midp_content_pane

0x4079,	// (0x000182da) form2_midp_field_choice_group_pane

0x4081,	// (0x000182e2) form2_midp_field_pane_g1

0x4089,	// (0x000182ea) form2_midp_field_pane_g2

0x4091,	// (0x000182f2) form2_midp_field_pane_g3

0x4099,	// (0x000182fa) form2_midp_field_pane_g4

0x0003,

0xfaf6,	// (0x00023d57) form2_midp_field_pane_g

0x40a1,	// (0x00018302) form2_midp_gauge_slider_pane

0x40a9,	// (0x0001830a) form2_midp_gauge_wait_pane

0x40b1,	// (0x00018312) form2_midp_image_pane_ParamLimits

0x40b1,	// (0x00018312) form2_midp_image_pane

0x40cc,	// (0x0001832d) form2_midp_label_pane_ParamLimits

0x40cc,	// (0x0001832d) form2_midp_label_pane

0xb74d,	// (0x0001f9ae) form2_midp_label_pane_cp_ParamLimits

0xb74d,	// (0x0001f9ae) form2_midp_label_pane_cp

0x410c,	// (0x0001836d) form2_midp_string_pane_ParamLimits

0x410c,	// (0x0001836d) form2_midp_string_pane

0xb76e,	// (0x0001f9cf) form2_midp_text_pane_ParamLimits

0xb76e,	// (0x0001f9cf) form2_midp_text_pane

0x413f,	// (0x000183a0) form2_midp_time_pane

0x414f,	// (0x000183b0) input_focus_pane_cp51_ParamLimits

0x414f,	// (0x000183b0) input_focus_pane_cp51

0x4167,	// (0x000183c8) form2_midp_label_pane_t1_ParamLimits

0x4167,	// (0x000183c8) form2_midp_label_pane_t1

0xb78f,	// (0x0001f9f0) form2_mdip_text_pane_t1_ParamLimits

0xb78f,	// (0x0001f9f0) form2_mdip_text_pane_t1

0x41cf,	// (0x00018430) form2_midp_time_pane_t1

0x41ea,	// (0x0001844b) form2_midp_gauge_slider_pane_t1

0xb7ae,	// (0x0001fa0f) form2_midp_gauge_slider_pane_t2

0xb7c0,	// (0x0001fa21) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaff,	// (0x00023d60) form2_midp_gauge_slider_pane_t

0x4220,	// (0x00018481) form2_midp_slider_pane

0x422c,	// (0x0001848d) form2_midp_gauge_wait_pane_t1

0x423a,	// (0x0001849b) form2_midp_wait_pane_ParamLimits

0x423a,	// (0x0001849b) form2_midp_wait_pane

0x1b70,	// (0x00015dd1) list_single_2graphic_pane_cp4_ParamLimits

0x1b70,	// (0x00015dd1) list_single_2graphic_pane_cp4

0x4265,	// (0x000184c6) list_single_midp_graphic_pane_cp_ParamLimits

0x4265,	// (0x000184c6) list_single_midp_graphic_pane_cp

0xb8ea,	// (0x0001fb4b) list_highlight_pane_cp20

0x4289,	// (0x000184ea) list_single_2graphic_pane_g1_cp4

0x3515,	// (0x00017776) list_single_2graphic_pane_g2_cp4

0x4291,	// (0x000184f2) list_single_2graphic_pane_t1_cp4

0xb952,	// (0x0001fbb3) list_highlight_pane_cp21

0x42a0,	// (0x00018501) list_single_midp_graphic_pane_g4_cp

0x42af,	// (0x00018510) list_single_midp_graphic_pane_t1_cp

0xb7d2,	// (0x0001fa33) form2_mdip_string_pane_t1_ParamLimits

0xb7d2,	// (0x0001fa33) form2_mdip_string_pane_t1

0xb8ea,	// (0x0001fb4b) bg_wml_button_pane_cp2

0xb8e0,	// (0x0001fb41) form2_midp_image_pane_g1

0xd9f9,	// (0x00021c5a) list_double_large_graphic_pane_g5_ParamLimits

0xd9f9,	// (0x00021c5a) list_double_large_graphic_pane_g5

0x0e1a,	// (0x0001507b) midp_form_pane_ParamLimits

0xb952,	// (0x0001fbb3) main_apps_wheel_pane_ParamLimits

0xa89a,	// (0x0001eafb) popup_preview_window_ParamLimits

0xa89a,	// (0x0001eafb) popup_preview_window

0x13ea,	// (0x0001564b) popup_touch_info_window_ParamLimits

0x13ea,	// (0x0001564b) popup_touch_info_window

0x140c,	// (0x0001566d) popup_touch_menu_window_ParamLimits

0x140c,	// (0x0001566d) popup_touch_menu_window

0xb8d6,	// (0x0001fb37) bg_popup_sub_pane_cp6

0x4369,	// (0x000185ca) list_touch_menu_pane

0x4371,	// (0x000185d2) list_single_touch_menu_pane_ParamLimits

0x4371,	// (0x000185d2) list_single_touch_menu_pane

0x4389,	// (0x000185ea) list_single_touch_menu_pane_t1

0xb952,	// (0x0001fbb3) bg_popup_sub_pane_cp7_ParamLimits

0xb952,	// (0x0001fbb3) bg_popup_sub_pane_cp7

0x4397,	// (0x000185f8) heading_sub_pane

0x439f,	// (0x00018600) list_touch_info_pane_ParamLimits

0x439f,	// (0x00018600) list_touch_info_pane

0x43ae,	// (0x0001860f) list_single_touch_info_pane_ParamLimits

0x43ae,	// (0x0001860f) list_single_touch_info_pane

0x43c0,	// (0x00018621) list_single_touch_info_pane_t1

0x43ce,	// (0x0001862f) list_single_touch_info_pane_t2

0x0001,

0xfb0d,	// (0x00023d6e) list_single_touch_info_pane_t

0x0a90,	// (0x00014cf1) bg_popup_heading_pane_cp

0x43dc,	// (0x0001863d) heading_sub_pane_t1

0x1ab7,	// (0x00015d18) bg_popup_preview_window_pane_cp_ParamLimits

0x1ab7,	// (0x00015d18) bg_popup_preview_window_pane_cp

0x4397,	// (0x000185f8) heading_preview_pane

0x439f,	// (0x00018600) list_preview_pane_ParamLimits

0x439f,	// (0x00018600) list_preview_pane

0x43ea,	// (0x0001864b) popup_preview_window_g1

0x43ae,	// (0x0001860f) list_single_preview_pane_ParamLimits

0x43ae,	// (0x0001860f) list_single_preview_pane

0x43f2,	// (0x00018653) list_single_preview_pane_g1

0x43fa,	// (0x0001865b) list_single_preview_pane_t1

0x43c0,	// (0x00018621) list_single_preview_pane_t2

0x0001,

0xfb12,	// (0x00023d73) list_single_preview_pane_t

0x4408,	// (0x00018669) bg_popup_heading_pane_cp2_ParamLimits

0x4408,	// (0x00018669) bg_popup_heading_pane_cp2

0x441e,	// (0x0001867f) heading_preview_pane_g1

0x4426,	// (0x00018687) heading_preview_pane_t1_ParamLimits

0x4426,	// (0x00018687) heading_preview_pane_t1

0xb9bf,	// (0x0001fc20) soft_indicator_pane_t1_ParamLimits

0xd9b9,	// (0x00021c1a) scroll_pane_ParamLimits

0xdeda,	// (0x0002213b) scroll_sc2_left_pane

0xdee3,	// (0x00022144) scroll_sc2_right_pane

0xdf02,	// (0x00022163) scroll_bg_pane_g1_ParamLimits

0xdf17,	// (0x00022178) scroll_bg_pane_g2_ParamLimits

0xdf2f,	// (0x00022190) scroll_bg_pane_g3_ParamLimits

0xf6e4,	// (0x00023945) scroll_bg_pane_g_ParamLimits

0xdf02,	// (0x00022163) scroll_handle_pane_g1_ParamLimits

0xdf51,	// (0x000221b2) scroll_handle_pane_g2_ParamLimits

0xdf2f,	// (0x00022190) scroll_handle_pane_g3_ParamLimits

0xf6eb,	// (0x0002394c) scroll_handle_pane_g_ParamLimits

0x0e4a,	// (0x000150ab) popup_choice_list_window_ParamLimits

0x0e4a,	// (0x000150ab) popup_choice_list_window

0x18ad,	// (0x00015b0e) choice_list_pane

0x195d,	// (0x00015bbe) cell_toolbar_pane_t1

0x1985,	// (0x00015be6) toolbar_button_pane_ParamLimits

0x2b15,	// (0x00016d76) ai_gene_pane_1_t2_ParamLimits

0x2b15,	// (0x00016d76) ai_gene_pane_1_t2

0x0001,

0xf90e,	// (0x00023b6f) ai_gene_pane_1_t_ParamLimits

0xf90e,	// (0x00023b6f) ai_gene_pane_1_t

0x4443,	// (0x000186a4) scroll_sc2_left_pane_g1

0x4443,	// (0x000186a4) scroll_sc2_right_pane_g1

0x0e1a,	// (0x0001507b) bg_popup_sub_pane_cp10

0x444d,	// (0x000186ae) list_choice_list_pane

0x4466,	// (0x000186c7) list_single_choice_list_pane_ParamLimits

0x4466,	// (0x000186c7) list_single_choice_list_pane

0x447e,	// (0x000186df) list_single_choice_list_pane_g1

0xdcba,	// (0x00021f1b) list_single_choice_list_pane_t1_ParamLimits

0xdcba,	// (0x00021f1b) list_single_choice_list_pane_t1

0x4486,	// (0x000186e7) choice_list_pane_g1

0x448e,	// (0x000186ef) choice_list_pane_t1

0xb8d6,	// (0x0001fb37) input_focus_pane_cp11

0xde38,	// (0x00022099) title_pane_stacon_g2_ParamLimits

0xde38,	// (0x00022099) title_pane_stacon_g2

0x0002,

0xf6ca,	// (0x0002392b) title_pane_stacon_g_ParamLimits

0xf6ca,	// (0x0002392b) title_pane_stacon_g

0x0a90,	// (0x00014cf1) cursor_press_pane

0xa517,	// (0x0001e778) popup_fep_hwr_window_ParamLimits

0xa517,	// (0x0001e778) popup_fep_hwr_window

0x0f8e,	// (0x000151ef) popup_fep_vkb_window_ParamLimits

0x0f8e,	// (0x000151ef) popup_fep_vkb_window

0x449c,	// (0x000186fd) cursor_press_pane_g1

0x0002,

0xfb3b,	// (0x00023d9c) fep_vkb_side_pane_g_ParamLimits

0xec51,	// (0x00022eb2) fep_hwr_candidate_pane_ParamLimits

0xec51,	// (0x00022eb2) fep_hwr_candidate_pane

0xec7b,	// (0x00022edc) fep_hwr_side_pane_ParamLimits

0xec7b,	// (0x00022edc) fep_hwr_side_pane

0xec9d,	// (0x00022efe) fep_hwr_top_pane_ParamLimits

0xec9d,	// (0x00022efe) fep_hwr_top_pane

0xecb5,	// (0x00022f16) fep_hwr_write_pane_ParamLimits

0xecb5,	// (0x00022f16) fep_hwr_write_pane

0xfb3b,	// (0x00023d9c) fep_vkb_side_pane_g

0x44a4,	// (0x00018705) fep_hwr_top_pane_g1

0x44b6,	// (0x00018717) fep_hwr_top_pane_g2

0xecef,	// (0x00022f50) fep_hwr_top_pane_g3

0x0002,

0xfb17,	// (0x00023d78) fep_hwr_top_pane_g

0xed04,	// (0x00022f65) fep_hwr_top_text_pane

0xe04b,	// (0x000222ac) fep_hwr_top_text_pane_g1

0x44ec,	// (0x0001874d) fep_hwr_top_text_pane_t1

0xed93,	// (0x00022ff4) fep_hwr_candidate_pane_g1

0x4737,	// (0x00018998) fep_vkb_keypad_pane_g3_ParamLimits

0x4737,	// (0x00018998) fep_vkb_keypad_pane_g3

0x4763,	// (0x000189c4) fep_vkb_keypad_pane_g4_ParamLimits

0x4763,	// (0x000189c4) fep_vkb_keypad_pane_g4

0x47da,	// (0x00018a3b) fep_vkb_bottom_pane_g2_ParamLimits

0x47da,	// (0x00018a3b) fep_vkb_bottom_pane_g2

0x0001,

0xfb42,	// (0x00023da3) fep_vkb_bottom_pane_g_ParamLimits

0xfb42,	// (0x00023da3) fep_vkb_bottom_pane_g

0x4443,	// (0x000186a4) cell_vkb_side_pane_g2

0x0001,

0xfb4c,	// (0x00023dad) cell_vkb_side_pane_g

0x4865,	// (0x00018ac6) cell_vkb_side_pane_t1

0x4873,	// (0x00018ad4) cell_vkb_side_pane_t1_copy1

0x4443,	// (0x000186a4) bg_fep_vkb_candidate_pane_g2

0x49b7,	// (0x00018c18) cell_vkb_candidate_pane_ParamLimits

0x44fa,	// (0x0001875b) aid_size_cell_vkb_ParamLimits

0x44fa,	// (0x0001875b) aid_size_cell_vkb

0x49b7,	// (0x00018c18) cell_vkb_candidate_pane

0xedba,	// (0x0002301b) bg_popup_fep_shadow_pane_g1

0xb87a,	// (0x0001fadb) fep_vkb_bottom_pane_ParamLimits

0xb87a,	// (0x0001fadb) fep_vkb_bottom_pane

0x45c9,	// (0x0001882a) fep_vkb_candidate_pane_ParamLimits

0x45c9,	// (0x0001882a) fep_vkb_candidate_pane

0xb9e6,	// (0x0001fc47) fep_vkb_keypad_pane_ParamLimits

0xb9e6,	// (0x0001fc47) fep_vkb_keypad_pane

0xba0d,	// (0x0001fc6e) fep_vkb_side_pane_ParamLimits

0xba0d,	// (0x0001fc6e) fep_vkb_side_pane

0xba49,	// (0x0001fcaa) fep_vkb_top_pane_ParamLimits

0xba49,	// (0x0001fcaa) fep_vkb_top_pane

0x4690,	// (0x000188f1) fep_vkb_top_pane_g1_ParamLimits

0x4690,	// (0x000188f1) fep_vkb_top_pane_g1

0x469f,	// (0x00018900) fep_vkb_top_pane_g2_ParamLimits

0x469f,	// (0x00018900) fep_vkb_top_pane_g2

0x46ae,	// (0x0001890f) fep_vkb_top_pane_g3_ParamLimits

0x46ae,	// (0x0001890f) fep_vkb_top_pane_g3

0x0003,

0xfb32,	// (0x00023d93) fep_vkb_top_pane_g_ParamLimits

0xfb32,	// (0x00023d93) fep_vkb_top_pane_g

0x46cc,	// (0x0001892d) fep_vkb_top_text_pane_ParamLimits

0x46cc,	// (0x0001892d) fep_vkb_top_text_pane

0xba85,	// (0x0001fce6) fep_vkb_side_pane_g1_ParamLimits

0xba85,	// (0x0001fce6) fep_vkb_side_pane_g1

0x4726,	// (0x00018987) grid_vkb_side_pane_ParamLimits

0x4726,	// (0x00018987) grid_vkb_side_pane

0xedc2,	// (0x00023023) bg_popup_fep_shadow_pane_g2

0xedcb,	// (0x0002302c) bg_popup_fep_shadow_pane_g3

0xedd3,	// (0x00023034) bg_popup_fep_shadow_pane_g4

0xeddc,	// (0x0002303d) bg_popup_fep_shadow_pane_g5

0xede6,	// (0x00023047) bg_popup_fep_shadow_pane_g6

0xedee,	// (0x0002304f) bg_popup_fep_shadow_pane_g7

0xdbad,	// (0x00021e0e) bg_popup_fep_shadow_pane_g8

0x4785,	// (0x000189e6) grid_vkb_keypad_number_pane_ParamLimits

0x4785,	// (0x000189e6) grid_vkb_keypad_number_pane

0x4799,	// (0x000189fa) grid_vkb_keypad_pane_ParamLimits

0x4799,	// (0x000189fa) grid_vkb_keypad_pane

0x47bf,	// (0x00018a20) fep_vkb_bottom_pane_g1_ParamLimits

0x47bf,	// (0x00018a20) fep_vkb_bottom_pane_g1

0x47e8,	// (0x00018a49) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x47e8,	// (0x00018a49) grid_vkb_keypad_bottom_left_pane

0x47fd,	// (0x00018a5e) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x47fd,	// (0x00018a5e) grid_vkb_keypad_bottom_right_pane

0x4812,	// (0x00018a73) fep_vkb_top_text_pane_g1

0xbacc,	// (0x0001fd2d) fep_vkb_top_text_pane_t1

0xbade,	// (0x0001fd3f) cell_vkb_side_pane_ParamLimits

0xbade,	// (0x0001fd3f) cell_vkb_side_pane

0x4443,	// (0x000186a4) cell_vkb_side_pane_g1

0x4881,	// (0x00018ae2) cell_vkb_keypad_pane_ParamLimits

0x4881,	// (0x00018ae2) cell_vkb_keypad_pane

0x490e,	// (0x00018b6f) cell_vkb_keypad_pane_g1

0x0008,

0xfb5f,	// (0x00023dc0) bg_popup_fep_shadow_pane_g

0xee00,	// (0x00023061) cell_hwr_side_pane_g1

0xee00,	// (0x00023061) cell_hwr_side_pane_g2

0x4918,	// (0x00018b79) cell_vkb_keypad_pane_t1

0xbaf4,	// (0x0001fd55) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbaf4,	// (0x0001fd55) cell_vkb_keypad_bottom_left_pane

0xbb09,	// (0x0001fd6a) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbb09,	// (0x0001fd6a) cell_vkb_keypad_bottom_right_pane

0x4443,	// (0x000186a4) cell_vkb_keypad_bottom_left_pane_g1

0x4443,	// (0x000186a4) cell_vkb_keypad_bottom_right_pane_g1

0x497c,	// (0x00018bdd) cell_vkb_keypad_number_pane_ParamLimits

0x497c,	// (0x00018bdd) cell_vkb_keypad_number_pane

0x499b,	// (0x00018bfc) cell_vkb_keypad_number_pane_g1

0x49a5,	// (0x00018c06) cell_vkb_keypad_number_pane_g2

0x49ae,	// (0x00018c0f) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb51,	// (0x00023db2) cell_vkb_keypad_number_pane_g

0x4918,	// (0x00018b79) cell_vkb_keypad_number_pane_t1

0x49d8,	// (0x00018c39) fep_vkb_candidate_pane_g1

0x0001,

0xfb72,	// (0x00023dd3) cell_hwr_side_pane_g

0x49f1,	// (0x00018c52) cell_hwr_side_pane_t1

0xee0a,	// (0x0002306b) cell_hwr_side_pane_t1_copy1

0xee18,	// (0x00023079) cell_hwr_candidate_pane_g1

0xee47,	// (0x000230a8) cell_hwr_candidate_pane_t1

0x4443,	// (0x000186a4) cell_vkb_candidate_pane_g2

0x4a35,	// (0x00018c96) cell_vkb_candidate_pane_t1

0xec18,	// (0x00022e79) bg_popup_fep_shadow_pane_ParamLimits

0xec18,	// (0x00022e79) bg_popup_fep_shadow_pane

0xeccf,	// (0x00022f30) bg_fep_hwr_top_pane_g4

0x44c8,	// (0x00018729) bg_hwr_side_pane_g1_ParamLimits

0x44c8,	// (0x00018729) bg_hwr_side_pane_g1

0x90c9,	// (0x0001d32a) cell_hwr_side_pane_ParamLimits

0x90c9,	// (0x0001d32a) cell_hwr_side_pane

0xed19,	// (0x00022f7a) fep_hwr_write_pane_g1_ParamLimits

0xed19,	// (0x00022f7a) fep_hwr_write_pane_g1

0xed26,	// (0x00022f87) fep_hwr_write_pane_g2_ParamLimits

0xed26,	// (0x00022f87) fep_hwr_write_pane_g2

0xed33,	// (0x00022f94) fep_hwr_write_pane_g3_ParamLimits

0xed33,	// (0x00022f94) fep_hwr_write_pane_g3

0x90e9,	// (0x0001d34a) fep_hwr_write_pane_g4_ParamLimits

0x90e9,	// (0x0001d34a) fep_hwr_write_pane_g4

0x0005,

0xfb1e,	// (0x00023d7f) fep_hwr_write_pane_g_ParamLimits

0xfb1e,	// (0x00023d7f) fep_hwr_write_pane_g

0xeccf,	// (0x00022f30) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xeccf,	// (0x00022f30) bg_fep_hwr_candidate_pane_g2

0xed41,	// (0x00022fa2) cell_hwr_candidate_pane_ParamLimits

0xed41,	// (0x00022fa2) cell_hwr_candidate_pane

0xed93,	// (0x00022ff4) fep_hwr_candidate_pane_g1_ParamLimits

0x4528,	// (0x00018789) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x4528,	// (0x00018789) bg_popup_fep_shadow_pane_cp2

0x46be,	// (0x0001891f) fep_vkb_top_pane_g4_ParamLimits

0x46be,	// (0x0001891f) fep_vkb_top_pane_g4

0x4704,	// (0x00018965) fep_vkb_side_pane_g2_ParamLimits

0x4704,	// (0x00018965) fep_vkb_side_pane_g2

0x9d35,	// (0x0001df96) list_setting_pane_t4_ParamLimits

0x9d35,	// (0x0001df96) list_setting_pane_t4

0x9db1,	// (0x0001e012) list_setting_number_pane_t5_ParamLimits

0x9db1,	// (0x0001e012) list_setting_number_pane_t5

0xa113,	// (0x0001e374) list_double_heading_pane_cp2_ParamLimits

0xa113,	// (0x0001e374) list_double_heading_pane_cp2

0x4a43,	// (0x00018ca4) list_double_heading_pane_g1_cp2_ParamLimits

0x4a43,	// (0x00018ca4) list_double_heading_pane_g1_cp2

0x4a4f,	// (0x00018cb0) list_double_heading_pane_g2_cp2_ParamLimits

0x4a4f,	// (0x00018cb0) list_double_heading_pane_g2_cp2

0x4a63,	// (0x00018cc4) list_double_heading_pane_t1_cp2_ParamLimits

0x4a63,	// (0x00018cc4) list_double_heading_pane_t1_cp2

0x4a79,	// (0x00018cda) list_double_heading_pane_t2_cp2_ParamLimits

0x4a79,	// (0x00018cda) list_double_heading_pane_t2_cp2

0xb8ce,	// (0x0001fb2f) aid_value_unit2

0xe350,	// (0x000225b1) popup_preview_fixed_window

0xd564,	// (0x000217c5) bg_popup_preview_window_pane_cp02

0x4a8b,	// (0x00018cec) list_preview_fixed_pane

0x4ad1,	// (0x00018d32) list_empty_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_empty_pane_fp

0x4ad1,	// (0x00018d32) list_single_cale_day_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_cale_day_pane_fp

0x4ad1,	// (0x00018d32) list_single_graphic_heading_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_graphic_heading_pane_fp

0x4ad1,	// (0x00018d32) list_single_graphic_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_graphic_pane_fp

0x4ad1,	// (0x00018d32) list_single_heading_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_heading_pane_fp

0x4ad1,	// (0x00018d32) list_single_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_pane_fp

0x4aea,	// (0x00018d4b) list_single_pane_fp_g1_ParamLimits

0x4aea,	// (0x00018d4b) list_single_pane_fp_g1

0x4a43,	// (0x00018ca4) list_single_pane_fp_g2_ParamLimits

0x4a43,	// (0x00018ca4) list_single_pane_fp_g2

0x4a4f,	// (0x00018cb0) list_single_pane_fp_g3_ParamLimits

0x4a4f,	// (0x00018cb0) list_single_pane_fp_g3

0x4af6,	// (0x00018d57) list_single_pane_fp_g4_ParamLimits

0x4af6,	// (0x00018d57) list_single_pane_fp_g4

0x0003,

0xfb85,	// (0x00023de6) list_single_pane_fp_g_ParamLimits

0xfb85,	// (0x00023de6) list_single_pane_fp_g

0x4b02,	// (0x00018d63) list_single_pane_fp_t1_ParamLimits

0x4b02,	// (0x00018d63) list_single_pane_fp_t1

0x4b19,	// (0x00018d7a) list_single_graphic_pane_fp_g1_ParamLimits

0x4b19,	// (0x00018d7a) list_single_graphic_pane_fp_g1

0x4aea,	// (0x00018d4b) list_single_graphic_pane_fp_g2_ParamLimits

0x4aea,	// (0x00018d4b) list_single_graphic_pane_fp_g2

0x4a43,	// (0x00018ca4) list_single_graphic_pane_fp_g3_ParamLimits

0x4a43,	// (0x00018ca4) list_single_graphic_pane_fp_g3

0x4a4f,	// (0x00018cb0) list_single_graphic_pane_fp_g4_ParamLimits

0x4a4f,	// (0x00018cb0) list_single_graphic_pane_fp_g4

0x4af6,	// (0x00018d57) list_single_graphic_pane_fp_g5_ParamLimits

0x4af6,	// (0x00018d57) list_single_graphic_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023def) list_single_graphic_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023def) list_single_graphic_pane_fp_g

0x4b25,	// (0x00018d86) list_single_graphic_pane_fp_t1_ParamLimits

0x4b25,	// (0x00018d86) list_single_graphic_pane_fp_t1

0x4b19,	// (0x00018d7a) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x4b19,	// (0x00018d7a) list_single_graphic_heading_pane_fp_g1

0x4aea,	// (0x00018d4b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4aea,	// (0x00018d4b) list_single_graphic_heading_pane_fp_g2

0x4a43,	// (0x00018ca4) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x4a43,	// (0x00018ca4) list_single_graphic_heading_pane_fp_g3

0x4a4f,	// (0x00018cb0) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4a4f,	// (0x00018cb0) list_single_graphic_heading_pane_fp_g4

0x4af6,	// (0x00018d57) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4af6,	// (0x00018d57) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023def) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023def) list_single_graphic_heading_pane_fp_g

0x4b3b,	// (0x00018d9c) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x4b3b,	// (0x00018d9c) list_single_graphic_heading_pane_fp_t1

0x4b51,	// (0x00018db2) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4b51,	// (0x00018db2) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb99,	// (0x00023dfa) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb99,	// (0x00023dfa) list_single_graphic_heading_pane_fp_t

0x4b63,	// (0x00018dc4) list_single_cale_day_pane_fp_g1_ParamLimits

0x4b63,	// (0x00018dc4) list_single_cale_day_pane_fp_g1

0x4b9b,	// (0x00018dfc) list_single_cale_day_pane_fp_g2_ParamLimits

0x4b9b,	// (0x00018dfc) list_single_cale_day_pane_fp_g2

0x4ba7,	// (0x00018e08) list_single_cale_day_pane_fp_g3_ParamLimits

0x4ba7,	// (0x00018e08) list_single_cale_day_pane_fp_g3

0x4bcf,	// (0x00018e30) list_single_cale_day_pane_fp_g4_ParamLimits

0x4bcf,	// (0x00018e30) list_single_cale_day_pane_fp_g4

0x4bf3,	// (0x00018e54) list_single_cale_day_pane_fp_g5_ParamLimits

0x4bf3,	// (0x00018e54) list_single_cale_day_pane_fp_g5

0x0004,

0xfb9e,	// (0x00023dff) list_single_cale_day_pane_fp_g_ParamLimits

0xfb9e,	// (0x00023dff) list_single_cale_day_pane_fp_g

0x4c17,	// (0x00018e78) list_single_cale_day_pane_fp_t1_ParamLimits

0x4c17,	// (0x00018e78) list_single_cale_day_pane_fp_t1

0x4c3d,	// (0x00018e9e) list_single_cale_day_pane_fp_t2_ParamLimits

0x4c3d,	// (0x00018e9e) list_single_cale_day_pane_fp_t2

0x4c56,	// (0x00018eb7) list_single_cale_day_pane_fp_t3_ParamLimits

0x4c56,	// (0x00018eb7) list_single_cale_day_pane_fp_t3

0x0002,

0xfba9,	// (0x00023e0a) list_single_cale_day_pane_fp_t_ParamLimits

0xfba9,	// (0x00023e0a) list_single_cale_day_pane_fp_t

0x4aea,	// (0x00018d4b) list_empty_pane_fp_g1_ParamLimits

0x4aea,	// (0x00018d4b) list_empty_pane_fp_g1

0x4c6f,	// (0x00018ed0) list_empty_pane_fp_t1

0x4c7d,	// (0x00018ede) list_empty_pane_fp_t2

0x0001,

0xfbb0,	// (0x00023e11) list_empty_pane_fp_t

0x4aea,	// (0x00018d4b) list_single_heading_pane_fp_g1_ParamLimits

0x4aea,	// (0x00018d4b) list_single_heading_pane_fp_g1

0x4a43,	// (0x00018ca4) list_single_heading_pane_fp_g2_ParamLimits

0x4a43,	// (0x00018ca4) list_single_heading_pane_fp_g2

0x4a4f,	// (0x00018cb0) list_single_heading_pane_fp_g3_ParamLimits

0x4a4f,	// (0x00018cb0) list_single_heading_pane_fp_g3

0x0002,

0xfbb5,	// (0x00023e16) list_single_heading_pane_fp_g_ParamLimits

0xfbb5,	// (0x00023e16) list_single_heading_pane_fp_g

0x4c8b,	// (0x00018eec) list_single_heading_pane_fp_t1_ParamLimits

0x4c8b,	// (0x00018eec) list_single_heading_pane_fp_t1

0x4c9d,	// (0x00018efe) list_single_heading_pane_fp_t2_ParamLimits

0x4c9d,	// (0x00018efe) list_single_heading_pane_fp_t2

0x0001,

0xfbbc,	// (0x00023e1d) list_single_heading_pane_fp_t_ParamLimits

0xfbbc,	// (0x00023e1d) list_single_heading_pane_fp_t

0xdccf,	// (0x00021f30) aid_size_cell_fast

0xd547,	// (0x000217a8) soft_indicator_pane_cp1_t1

0xdd0c,	// (0x00021f6d) cell_app_pane_cp2_ParamLimits

0xdd0c,	// (0x00021f6d) cell_app_pane_cp2

0xec3a,	// (0x00022e9b) fep_hwr_candidate_drop_down_list_pane

0xedad,	// (0x0002300e) fep_hwr_candidate_pane_g3_ParamLimits

0xedad,	// (0x0002300e) fep_hwr_candidate_pane_g3

0xb9d9,	// (0x0001fc3a) fep_hwr_candidate_pane_g4_ParamLimits

0xb9d9,	// (0x0001fc3a) fep_hwr_candidate_pane_g4

0x0002,

0xfb2b,	// (0x00023d8c) fep_hwr_candidate_pane_g_ParamLimits

0xfb2b,	// (0x00023d8c) fep_hwr_candidate_pane_g

0x45b8,	// (0x00018819) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x45b8,	// (0x00018819) fep_vkb_candidate_drop_down_list_pane

0x49e0,	// (0x00018c41) fep_vkb_candidate_pane_g3

0x49e8,	// (0x00018c49) fep_vkb_candidate_pane_g4

0x0002,

0xfb58,	// (0x00023db9) fep_vkb_candidate_pane_g

0xee18,	// (0x00023079) cell_hwr_candidate_pane_g1_ParamLimits

0xee26,	// (0x00023087) cell_hwr_candidate_pane_g3_ParamLimits

0xee26,	// (0x00023087) cell_hwr_candidate_pane_g3

0x4f9a,	// (0x000191fb) cell_hwr_candidate_pane_g4_ParamLimits

0x4f9a,	// (0x000191fb) cell_hwr_candidate_pane_g4

0x0002,

0xfb77,	// (0x00023dd8) cell_hwr_candidate_pane_g_ParamLimits

0xfb77,	// (0x00023dd8) cell_hwr_candidate_pane_g

0x49ff,	// (0x00018c60) cell_vkb_candidate_pane_g3_ParamLimits

0x49ff,	// (0x00018c60) cell_vkb_candidate_pane_g3

0x4a1a,	// (0x00018c7b) cell_vkb_candidate_pane_g4_ParamLimits

0x4a1a,	// (0x00018c7b) cell_vkb_candidate_pane_g4

0x4cb3,	// (0x00018f14) cell_app_pane_cp2_g1_ParamLimits

0x4cb3,	// (0x00018f14) cell_app_pane_cp2_g1

0x4cd1,	// (0x00018f32) cell_app_pane_cp2_g2_ParamLimits

0x4cd1,	// (0x00018f32) cell_app_pane_cp2_g2

0x0001,

0xfbc1,	// (0x00023e22) cell_app_pane_cp2_g_ParamLimits

0xfbc1,	// (0x00023e22) cell_app_pane_cp2_g

0x4cdd,	// (0x00018f3e) cell_app_pane_cp2_t1_ParamLimits

0x4cdd,	// (0x00018f3e) cell_app_pane_cp2_t1

0xdacc,	// (0x00021d2d) grid_highlight_pane_cp1_ParamLimits

0xdacc,	// (0x00021d2d) grid_highlight_pane_cp1

0xee65,	// (0x000230c6) cell_hwr_candidate_pane_cp1_ParamLimits

0xee65,	// (0x000230c6) cell_hwr_candidate_pane_cp1

0xee18,	// (0x00023079) fep_hwr_candidate_drop_down_list_pane_g1

0xee89,	// (0x000230ea) fep_hwr_candidate_drop_down_list_pane_g2

0xee96,	// (0x000230f7) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbc6,	// (0x00023e27) fep_hwr_candidate_drop_down_list_pane_g

0xeea3,	// (0x00023104) fep_hwr_candidate_drop_down_list_scroll_pane

0xeeac,	// (0x0002310d) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0xeeac,	// (0x0002310d) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0xeeb9,	// (0x0002311a) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0xeeb9,	// (0x0002311a) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0xeec6,	// (0x00023127) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0xeec6,	// (0x00023127) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0xeed3,	// (0x00023134) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0xeed3,	// (0x00023134) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0xeeee,	// (0x0002314f) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0xeeee,	// (0x0002314f) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0xef09,	// (0x0002316a) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0xef09,	// (0x0002316a) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0xef24,	// (0x00023185) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0xef24,	// (0x00023185) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0xef3f,	// (0x000231a0) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0xef3f,	// (0x000231a0) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbcd,	// (0x00023e2e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbcd,	// (0x00023e2e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4cef,	// (0x00018f50) cell_vkb_candidate_pane_cp1_ParamLimits

0x4cef,	// (0x00018f50) cell_vkb_candidate_pane_cp1

0x46be,	// (0x0001891f) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x46be,	// (0x0001891f) fep_vkb_candidate_drop_down_list_pane_g1

0x4d15,	// (0x00018f76) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4d15,	// (0x00018f76) fep_vkb_candidate_drop_down_list_pane_g2

0x4d22,	// (0x00018f83) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x4d22,	// (0x00018f83) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbde,	// (0x00023e3f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbde,	// (0x00023e3f) fep_vkb_candidate_drop_down_list_pane_g

0x4d2f,	// (0x00018f90) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4d2f,	// (0x00018f90) fep_vkb_candidate_drop_down_list_scroll_pane

0x4d3c,	// (0x00018f9d) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4d3c,	// (0x00018f9d) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4d49,	// (0x00018faa) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4d49,	// (0x00018faa) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4d55,	// (0x00018fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4d55,	// (0x00018fb6) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4d61,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4d61,	// (0x00018fc2) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x4d82,	// (0x00018fe3) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4d82,	// (0x00018fe3) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x4da3,	// (0x00019004) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4da3,	// (0x00019004) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x4dc4,	// (0x00019025) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4dc4,	// (0x00019025) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x4de5,	// (0x00019046) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4de5,	// (0x00019046) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbe5,	// (0x00023e46) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbe5,	// (0x00023e46) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x963b,	// (0x0001d89c) title_pane_g1_ParamLimits

0x964e,	// (0x0001d8af) title_pane_g2_ParamLimits

0xf554,	// (0x000237b5) title_pane_g_ParamLimits

0xe03b,	// (0x0002229c) aid_call2_pane

0xe043,	// (0x000222a4) aid_call_pane

0xe04b,	// (0x000222ac) popup_clock_analogue_window_g1

0xe04b,	// (0x000222ac) popup_clock_analogue_window_g2

0xe5ae,	// (0x0002280f) popup_clock_analogue_window_g3

0xe5b7,	// (0x00022818) popup_clock_analogue_window_g4

0xb8e0,	// (0x0001fb41) popup_clock_analogue_window_g5

0x0004,

0xf6f9,	// (0x0002395a) popup_clock_analogue_window_g

0xe5bf,	// (0x00022820) popup_clock_analogue_window_t1

0xe5cd,	// (0x0002282e) clock_digital_number_pane_ParamLimits

0xe5cd,	// (0x0002282e) clock_digital_number_pane

0xe5d9,	// (0x0002283a) clock_digital_number_pane_cp02_ParamLimits

0xe5d9,	// (0x0002283a) clock_digital_number_pane_cp02

0xe5e5,	// (0x00022846) clock_digital_number_pane_cp03_ParamLimits

0xe5e5,	// (0x00022846) clock_digital_number_pane_cp03

0xe5f1,	// (0x00022852) clock_digital_number_pane_cp04_ParamLimits

0xe5f1,	// (0x00022852) clock_digital_number_pane_cp04

0xe5fd,	// (0x0002285e) clock_digital_separator_pane_ParamLimits

0xe5fd,	// (0x0002285e) clock_digital_separator_pane

0xe609,	// (0x0002286a) popup_clock_digital_window_t1_ParamLimits

0xe609,	// (0x0002286a) popup_clock_digital_window_t1

0xb8e0,	// (0x0001fb41) clock_digital_number_pane_g1

0xb8e0,	// (0x0001fb41) clock_digital_number_pane_g2

0x0001,

0xf704,	// (0x00023965) clock_digital_number_pane_g

0xb8e0,	// (0x0001fb41) clock_digital_separator_pane_g1

0xb8e0,	// (0x0001fb41) clock_digital_separator_pane_g2

0x0001,

0xf704,	// (0x00023965) clock_digital_separator_pane_g

0xab82,	// (0x0001ede3) aid_fill_nsta_ParamLimits

0xacba,	// (0x0001ef1b) indicator_nsta_pane_ParamLimits

0x173a,	// (0x0001599b) popup_clock_analogue_window

0x173a,	// (0x0001599b) popup_clock_digital_window

0xe21b,	// (0x0002247c) grid_indicator_nsta_pane_ParamLimits

0x3e1a,	// (0x0001807b) clock_nsta_pane_t2

0x0001,

0xfaab,	// (0x00023d0c) clock_nsta_pane_t

0xe57b,	// (0x000227dc) aid_size_max_handle

0x8d6e,	// (0x0001cfcf) aid_size_min_handle

0x0a90,	// (0x00014cf1) editor_scroll_pane

0x4e00,	// (0x00019061) ex_editor_pane

0xdc95,	// (0x00021ef6) scroll_pane_cp13

0xd9e5,	// (0x00021c46) scroll_pane_cp14

0xe07a,	// (0x000222db) scroll_pane_cp36

0xa126,	// (0x0001e387) list_single_graphic_hl_pane_cp2_ParamLimits

0xa126,	// (0x0001e387) list_single_graphic_hl_pane_cp2

0xb4e3,	// (0x0001f744) list_single_graphic_hl_pane_ParamLimits

0xb4e3,	// (0x0001f744) list_single_graphic_hl_pane

0x4e08,	// (0x00019069) aid_size_min_hl_cp1

0x4e11,	// (0x00019072) list_highlight_pane_cp34_ParamLimits

0x4e11,	// (0x00019072) list_highlight_pane_cp34

0x4e22,	// (0x00019083) list_single_graphic_hl_pane_g1_ParamLimits

0x4e22,	// (0x00019083) list_single_graphic_hl_pane_g1

0xe229,	// (0x0002248a) list_single_graphic_hl_pane_g2_ParamLimits

0xe229,	// (0x0002248a) list_single_graphic_hl_pane_g2

0xe229,	// (0x0002248a) list_single_graphic_hl_pane_g3_ParamLimits

0xe229,	// (0x0002248a) list_single_graphic_hl_pane_g3

0xe235,	// (0x00022496) list_single_graphic_hl_pane_g4_ParamLimits

0xe235,	// (0x00022496) list_single_graphic_hl_pane_g4

0x4e95,	// (0x000190f6) list_single_graphic_hl_pane_g5_ParamLimits

0x4e95,	// (0x000190f6) list_single_graphic_hl_pane_g5

0x0004,

0xfbf6,	// (0x00023e57) list_single_graphic_hl_pane_g_ParamLimits

0xfbf6,	// (0x00023e57) list_single_graphic_hl_pane_g

0xbb24,	// (0x0001fd85) list_single_graphic_hl_pane_t1_ParamLimits

0xbb24,	// (0x0001fd85) list_single_graphic_hl_pane_t1

0x4e65,	// (0x000190c6) aid_size_min_hl_cp2

0x4e6e,	// (0x000190cf) list_highlight_pane_cp34_cp2_ParamLimits

0x4e6e,	// (0x000190cf) list_highlight_pane_cp34_cp2

0x4e22,	// (0x00019083) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4e22,	// (0x00019083) list_single_graphic_hl_pane_g1_cp2

0x4e7b,	// (0x000190dc) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4e7b,	// (0x000190dc) list_single_graphic_hl_pane_g2_cp2

0xbb3a,	// (0x0001fd9b) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbb3a,	// (0x0001fd9b) list_single_graphic_hl_pane_g3_cp2

0xe235,	// (0x00022496) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xe235,	// (0x00022496) list_single_graphic_hl_pane_g4_cp2

0x4e95,	// (0x000190f6) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4e95,	// (0x000190f6) list_single_graphic_hl_pane_g5_cp2

0x8dc5,	// (0x0001d026) control_pane_g4_ParamLimits

0x8dc5,	// (0x0001d026) control_pane_g4

0x0e1a,	// (0x0001507b) bg_popup_sub_pane_cp10_ParamLimits

0x444d,	// (0x000186ae) list_choice_list_pane_ParamLimits

0x445c,	// (0x000186bd) scroll_pane_cp23

0xd564,	// (0x000217c5) bg_popup_preview_window_pane_cp02_ParamLimits

0x4a8b,	// (0x00018cec) list_preview_fixed_pane_ParamLimits

0x4aa1,	// (0x00018d02) list_preview_fixed_pane_cp_ParamLimits

0x4aa1,	// (0x00018d02) list_preview_fixed_pane_cp

0x4aad,	// (0x00018d0e) popup_preview_fixed_window_g1_ParamLimits

0x4aad,	// (0x00018d0e) popup_preview_fixed_window_g1

0x4ab9,	// (0x00018d1a) popup_preview_fixed_window_g2_ParamLimits

0x4ab9,	// (0x00018d1a) popup_preview_fixed_window_g2

0x0002,

0xfb7e,	// (0x00023ddf) popup_preview_fixed_window_g_ParamLimits

0xfb7e,	// (0x00023ddf) popup_preview_fixed_window_g

0xe4ed,	// (0x0002274e) aid_navi_side_left_pane_ParamLimits

0xe502,	// (0x00022763) aid_navi_side_right_pane_ParamLimits

0xe51a,	// (0x0002277b) navi_icon_pane_stacon_ParamLimits

0xe52e,	// (0x0002278f) navi_navi_pane_stacon_ParamLimits

0xe51a,	// (0x0002277b) navi_text_pane_stacon_ParamLimits

0xb8d6,	// (0x0001fb37) main_text_info_pane

0x4ebf,	// (0x00019120) listscroll_text_info_pane

0x4ec7,	// (0x00019128) list_text_info_pane_ParamLimits

0x4ec7,	// (0x00019128) list_text_info_pane

0x4ed6,	// (0x00019137) scroll_pane_cp24_ParamLimits

0x4ed6,	// (0x00019137) scroll_pane_cp24

0xbb48,	// (0x0001fda9) list_text_info_pane_t1_ParamLimits

0xbb48,	// (0x0001fda9) list_text_info_pane_t1

0xa47b,	// (0x0001e6dc) popup_fast_swap2_window_ParamLimits

0xa47b,	// (0x0001e6dc) popup_fast_swap2_window

0x4f19,	// (0x0001917a) aid_size_cell_fast2

0xb8d6,	// (0x0001fb37) bg_popup_window_pane_cp17

0x1ea6,	// (0x00016107) heading_pane_cp2

0xd76a,	// (0x000219cb) listscroll_fast2_pane

0x4f23,	// (0x00019184) grid_fast2_pane

0x4f2d,	// (0x0001918e) listscroll_fast2_pane_g1

0x4f37,	// (0x00019198) listscroll_fast2_pane_g2

0x0001,

0xfc01,	// (0x00023e62) listscroll_fast2_pane_g

0xdc95,	// (0x00021ef6) scroll_pane_cp26

0x4f41,	// (0x000191a2) cell_fast2_pane_ParamLimits

0x4f41,	// (0x000191a2) cell_fast2_pane

0x4fbb,	// (0x0001921c) cell_fast2_pane_g1

0x4fc4,	// (0x00019225) cell_fast2_pane_g2

0x4fcd,	// (0x0001922e) cell_fast2_pane_g3

0x0002,

0xfc06,	// (0x00023e67) cell_fast2_pane_g

0xd7ac,	// (0x00021a0d) grid_highlight_pane_cp9

0xd7c1,	// (0x00021a22) main_eswt_pane_ParamLimits

0xd7c1,	// (0x00021a22) main_eswt_pane

0x4eeb,	// (0x0001914c) list_single_text_info_pane

0x4fd5,	// (0x00019236) eswt_ctrl_button_pane

0x4fd5,	// (0x00019236) eswt_ctrl_canvas_pane

0x4fdd,	// (0x0001923e) eswt_ctrl_combo_pane

0x4fd5,	// (0x00019236) eswt_ctrl_default_pane

0x4fd5,	// (0x00019236) eswt_ctrl_label_pane

0x4fe5,	// (0x00019246) eswt_ctrl_wait_pane

0x4fed,	// (0x0001924e) eswt_shell_pane

0xb8d6,	// (0x0001fb37) listscroll_eswt_app_pane

0x500d,	// (0x0001926e) popup_eswt_tasktip_window_ParamLimits

0x500d,	// (0x0001926e) popup_eswt_tasktip_window

0x1ab7,	// (0x00015d18) bg_popup_window_pane_cp18

0x501e,	// (0x0001927f) eswt_control_pane_g1_ParamLimits

0x501e,	// (0x0001927f) eswt_control_pane_g1

0x502b,	// (0x0001928c) eswt_control_pane_g2_ParamLimits

0x502b,	// (0x0001928c) eswt_control_pane_g2

0x5038,	// (0x00019299) eswt_control_pane_g3_ParamLimits

0x5038,	// (0x00019299) eswt_control_pane_g3

0x5045,	// (0x000192a6) eswt_control_pane_g4_ParamLimits

0x5045,	// (0x000192a6) eswt_control_pane_g4

0x0003,

0xfc0d,	// (0x00023e6e) eswt_control_pane_g_ParamLimits

0xfc0d,	// (0x00023e6e) eswt_control_pane_g

0xdacc,	// (0x00021d2d) bg_button_pane_ParamLimits

0xdacc,	// (0x00021d2d) bg_button_pane

0xd7c1,	// (0x00021a22) common_borders_pane_copy2_ParamLimits

0xd7c1,	// (0x00021a22) common_borders_pane_copy2

0x5052,	// (0x000192b3) control_button_pane_g1_ParamLimits

0x5052,	// (0x000192b3) control_button_pane_g1

0x505e,	// (0x000192bf) control_button_pane_g2_ParamLimits

0x505e,	// (0x000192bf) control_button_pane_g2

0x506a,	// (0x000192cb) control_button_pane_g3_ParamLimits

0x506a,	// (0x000192cb) control_button_pane_g3

0x0002,

0xfc16,	// (0x00023e77) control_button_pane_g_ParamLimits

0xfc16,	// (0x00023e77) control_button_pane_g

0x507e,	// (0x000192df) control_button_pane_t1

0x508c,	// (0x000192ed) control_button_pane_t2

0x0001,

0xfc1d,	// (0x00023e7e) control_button_pane_t

0x1991,	// (0x00015bf2) bg_button_pane_g1

0x19a1,	// (0x00015c02) bg_button_pane_g2

0x1999,	// (0x00015bfa) bg_button_pane_g3

0x19b1,	// (0x00015c12) bg_button_pane_g4

0x19a9,	// (0x00015c0a) bg_button_pane_g5

0x19b9,	// (0x00015c1a) bg_button_pane_g6

0x19c1,	// (0x00015c22) bg_button_pane_g7

0x19d1,	// (0x00015c32) bg_button_pane_g8

0x19c9,	// (0x00015c2a) bg_button_pane_g9

0x0008,

0xf862,	// (0x00023ac3) bg_button_pane_g

0x4408,	// (0x00018669) common_borders_pane_ParamLimits

0x4408,	// (0x00018669) common_borders_pane

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy1_ParamLimits

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy1

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy1_ParamLimits

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy1

0x5038,	// (0x00019299) eswt_control_pane_g3_copy1_ParamLimits

0x5038,	// (0x00019299) eswt_control_pane_g3_copy1

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy1_ParamLimits

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy1

0x4443,	// (0x000186a4) bg_eswt_ctrl_canvas_pane_g1

0x4408,	// (0x00018669) common_borders_pane_cp2_ParamLimits

0x4408,	// (0x00018669) common_borders_pane_cp2

0x4408,	// (0x00018669) common_borders_pane_cp3_ParamLimits

0x4408,	// (0x00018669) common_borders_pane_cp3

0x509a,	// (0x000192fb) separator_horizontal_pane

0x50a2,	// (0x00019303) separator_vertical_pane

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy2_ParamLimits

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy2

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy2_ParamLimits

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy2

0x5038,	// (0x00019299) eswt_control_pane_g3_copy2_ParamLimits

0x5038,	// (0x00019299) eswt_control_pane_g3_copy2

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy2_ParamLimits

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy2

0xb8d6,	// (0x0001fb37) common_borders_pane_cp4

0x50ab,	// (0x0001930c) separator_horizontal_pane_g1

0x50b4,	// (0x00019315) separator_horizontal_pane_g2

0x50bd,	// (0x0001931e) separator_horizontal_pane_g3

0x0002,

0xfc22,	// (0x00023e83) separator_horizontal_pane_g

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy3_ParamLimits

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy3

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy3_ParamLimits

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy3

0x5038,	// (0x00019299) eswt_control_pane_g3_copy3_ParamLimits

0x5038,	// (0x00019299) eswt_control_pane_g3_copy3

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy3_ParamLimits

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy3

0xb8d6,	// (0x0001fb37) common_borders_pane_cp5

0x50c6,	// (0x00019327) separator_vertical_pane_g1

0x50cf,	// (0x00019330) separator_vertical_pane_g2

0x50d8,	// (0x00019339) separator_vertical_pane_g3

0x0002,

0xfc29,	// (0x00023e8a) separator_vertical_pane_g

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy4_ParamLimits

0x501e,	// (0x0001927f) eswt_control_pane_g1_copy4

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy4_ParamLimits

0x502b,	// (0x0001928c) eswt_control_pane_g2_copy4

0x5038,	// (0x00019299) eswt_control_pane_g3_copy4_ParamLimits

0x5038,	// (0x00019299) eswt_control_pane_g3_copy4

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy4_ParamLimits

0x5045,	// (0x000192a6) eswt_control_pane_g4_copy4

0xbb6a,	// (0x0001fdcb) eswt_ctrl_combo_button_pane

0xbb72,	// (0x0001fdd3) eswt_ctrl_input_pane

0xbb7a,	// (0x0001fddb) popup_choice_list_window_cp70

0xbb82,	// (0x0001fde3) eswt_ctrl_input_pane_t1

0xb8d6,	// (0x0001fb37) input_focus_pane_cp70

0x4408,	// (0x00018669) bg_button_pane_cp70_ParamLimits

0x4408,	// (0x00018669) bg_button_pane_cp70

0xbb90,	// (0x0001fdf1) eswt_ctrl_combo_button_pane_g1

0x510f,	// (0x00019370) wait_bar_pane_cp70

0x1ab7,	// (0x00015d18) bg_popup_window_pane_cp70_ParamLimits

0x1ab7,	// (0x00015d18) bg_popup_window_pane_cp70

0x5117,	// (0x00019378) popup_eswt_tasktip_window_t1

0x512d,	// (0x0001938e) wait_bar_pane_cp71_ParamLimits

0x512d,	// (0x0001938e) wait_bar_pane_cp71

0x5139,	// (0x0001939a) grid_eswt_app_pane

0xdeda,	// (0x0002213b) scroll_pane_cp70

0xbb98,	// (0x0001fdf9) cell_eswt_app_pane_ParamLimits

0xbb98,	// (0x0001fdf9) cell_eswt_app_pane

0xbbca,	// (0x0001fe2b) cell_eswt_app_pane_g1_ParamLimits

0xbbca,	// (0x0001fe2b) cell_eswt_app_pane_g1

0xbbf9,	// (0x0001fe5a) cell_eswt_app_pane_g2_ParamLimits

0xbbf9,	// (0x0001fe5a) cell_eswt_app_pane_g2

0x0001,

0xfc30,	// (0x00023e91) cell_eswt_app_pane_g_ParamLimits

0xfc30,	// (0x00023e91) cell_eswt_app_pane_g

0xbc22,	// (0x0001fe83) cell_eswt_app_pane_t1_ParamLimits

0xbc22,	// (0x0001fe83) cell_eswt_app_pane_t1

0x51fe,	// (0x0001945f) grid_highlight_pane_cp70_ParamLimits

0x51fe,	// (0x0001945f) grid_highlight_pane_cp70

0x0961,	// (0x00014bc2) set_content_pane_g1

0x0d34,	// (0x00014f95) status_small_volume_pane

0xef5a,	// (0x000231bb) status_small_volume_pane_g1

0xef62,	// (0x000231c3) volume_small2_pane

0xef6b,	// (0x000231cc) volume_small2_pane_g1

0xef74,	// (0x000231d5) volume_small2_pane_g2

0xef7d,	// (0x000231de) volume_small2_pane_g3

0xef86,	// (0x000231e7) volume_small2_pane_g4

0xef8f,	// (0x000231f0) volume_small2_pane_g5

0xef98,	// (0x000231f9) volume_small2_pane_g6

0xefa1,	// (0x00023202) volume_small2_pane_g7

0xefaa,	// (0x0002320b) volume_small2_pane_g8

0xefb3,	// (0x00023214) volume_small2_pane_g9

0xefbc,	// (0x0002321d) volume_small2_pane_g10

0x0009,

0xfc35,	// (0x00023e96) volume_small2_pane_g

0x4812,	// (0x00018a73) fep_vkb_top_text_pane_g1_ParamLimits

0xbacc,	// (0x0001fd2d) fep_vkb_top_text_pane_t1_ParamLimits

0x4ac5,	// (0x00018d26) popup_preview_fixed_window_g3_ParamLimits

0x4ac5,	// (0x00018d26) popup_preview_fixed_window_g3

0xab15,	// (0x0001ed76) popup_toolbar_trans_pane

0xb302,	// (0x0001f563) aid_height_set_list_ParamLimits

0x2e64,	// (0x000170c5) aid_size_parent_ParamLimits

0x0e1a,	// (0x0001507b) list_highlight_pane_cp2_ParamLimits

0x0961,	// (0x00014bc2) set_content_pane_g1_ParamLimits

0xb4f7,	// (0x0001f758) list_single_image_pane_ParamLimits

0xb4f7,	// (0x0001f758) list_single_image_pane

0xbc54,	// (0x0001feb5) aid_size_cell_image_ParamLimits

0xbc54,	// (0x0001feb5) aid_size_cell_image

0xbc61,	// (0x0001fec2) grid_single_image_pane_ParamLimits

0xbc61,	// (0x0001fec2) grid_single_image_pane

0xdaf7,	// (0x00021d58) list_single_image_pane_g1_ParamLimits

0xdaf7,	// (0x00021d58) list_single_image_pane_g1

0xdb03,	// (0x00021d64) list_single_image_pane_g2_ParamLimits

0xdb03,	// (0x00021d64) list_single_image_pane_g2

0x0001,

0xfc4a,	// (0x00023eab) list_single_image_pane_g_ParamLimits

0xfc4a,	// (0x00023eab) list_single_image_pane_g

0x5225,	// (0x00019486) list_single_image_pane_t1_ParamLimits

0x5225,	// (0x00019486) list_single_image_pane_t1

0xbc6f,	// (0x0001fed0) cell_image_list_pane_ParamLimits

0xbc6f,	// (0x0001fed0) cell_image_list_pane

0xbc83,	// (0x0001fee4) cell_image_list_pane_g1

0xbc8c,	// (0x0001feed) cell_image_list_pane_g2

0x0001,

0xfc4f,	// (0x00023eb0) cell_image_list_pane_g

0x5263,	// (0x000194c4) aid_size_cell_tb_trans_pane

0xdacc,	// (0x00021d2d) bg_tb_trans_pane

0x5275,	// (0x000194d6) grid_tb_trans_pane

0x1991,	// (0x00015bf2) bg_tb_trans_pane_g1

0x19a1,	// (0x00015c02) bg_tb_trans_pane_g2

0x1999,	// (0x00015bfa) bg_tb_trans_pane_g3

0x19b1,	// (0x00015c12) bg_tb_trans_pane_g4

0x19a9,	// (0x00015c0a) bg_tb_trans_pane_g5

0x19d1,	// (0x00015c32) bg_tb_trans_pane_g6

0x19c9,	// (0x00015c2a) bg_tb_trans_pane_g7

0x19b9,	// (0x00015c1a) bg_tb_trans_pane_g8

0x19c1,	// (0x00015c22) bg_tb_trans_pane_g9

0x0008,

0xfc54,	// (0x00023eb5) bg_tb_trans_pane_g

0x5289,	// (0x000194ea) cell_toolbar_trans_pane_ParamLimits

0x5289,	// (0x000194ea) cell_toolbar_trans_pane

0x4443,	// (0x000186a4) cell_toolbar_trans_pane_g1

0xb731,	// (0x0001f992) list_form2_midp_pane_t1

0xb73f,	// (0x0001f9a0) list_form2_midp_pane_t2

0x0001,

0xfaf1,	// (0x00023d52) list_form2_midp_pane_t

0x402d,	// (0x0001828e) scroll_pane_cp51_ParamLimits

0x424a,	// (0x000184ab) form2_midp_wait_pane_g1

0x4253,	// (0x000184b4) form2_midp_wait_pane_g2

0x425c,	// (0x000184bd) form2_midp_wait_pane_g3

0x0002,

0xfb06,	// (0x00023d67) form2_midp_wait_pane_g

0xb952,	// (0x0001fbb3) list_highlight_pane_cp21_ParamLimits

0x42a0,	// (0x00018501) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x42af,	// (0x00018510) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x3085,	// (0x000172e6) list_single_2graphic_im_pane_ParamLimits

0x3085,	// (0x000172e6) list_single_2graphic_im_pane

0xbc95,	// (0x0001fef6) list_single_2graphic_im_pane_g1_ParamLimits

0xbc95,	// (0x0001fef6) list_single_2graphic_im_pane_g1

0xbca6,	// (0x0001ff07) list_single_2graphic_im_pane_g2_ParamLimits

0xbca6,	// (0x0001ff07) list_single_2graphic_im_pane_g2

0xbcb2,	// (0x0001ff13) list_single_2graphic_im_pane_g3_ParamLimits

0xbcb2,	// (0x0001ff13) list_single_2graphic_im_pane_g3

0x0003,

0xfc67,	// (0x00023ec8) list_single_2graphic_im_pane_g_ParamLimits

0xfc67,	// (0x00023ec8) list_single_2graphic_im_pane_g

0xbcc6,	// (0x0001ff27) list_single_2graphic_im_pane_t1_ParamLimits

0xbcc6,	// (0x0001ff27) list_single_2graphic_im_pane_t1

0x4ad1,	// (0x00018d32) list_single_graphic_2heading_pane_fp_ParamLimits

0x4ad1,	// (0x00018d32) list_single_graphic_2heading_pane_fp

0x4b19,	// (0x00018d7a) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x4b19,	// (0x00018d7a) list_single_graphic_2heading_pane_fp_g1

0x4aea,	// (0x00018d4b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4aea,	// (0x00018d4b) list_single_graphic_2heading_pane_fp_g2

0x4a43,	// (0x00018ca4) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x4a43,	// (0x00018ca4) list_single_graphic_2heading_pane_fp_g3

0x4a4f,	// (0x00018cb0) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4a4f,	// (0x00018cb0) list_single_graphic_2heading_pane_fp_g4

0x4af6,	// (0x00018d57) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4af6,	// (0x00018d57) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb8e,	// (0x00023def) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb8e,	// (0x00023def) list_single_graphic_2heading_pane_fp_g

0x531d,	// (0x0001957e) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x531d,	// (0x0001957e) list_single_graphic_2heading_pane_fp_t1

0x4b51,	// (0x00018db2) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4b51,	// (0x00018db2) list_single_graphic_2heading_pane_fp_t2

0x5333,	// (0x00019594) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x5333,	// (0x00019594) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc70,	// (0x00023ed1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc70,	// (0x00023ed1) list_single_graphic_2heading_pane_fp_t

0x44d4,	// (0x00018735) fep_hwr_write_pane_g5_ParamLimits

0x44d4,	// (0x00018735) fep_hwr_write_pane_g5

0x44e0,	// (0x00018741) fep_hwr_write_pane_g6_ParamLimits

0x44e0,	// (0x00018741) fep_hwr_write_pane_g6

0x4fed,	// (0x0001924e) eswt_shell_pane_ParamLimits

0x1ab7,	// (0x00015d18) bg_popup_window_pane_cp18_ParamLimits

0x2d82,	// (0x00016fe3) heading_pane_cp70

0x5117,	// (0x00019378) popup_eswt_tasktip_window_t1_ParamLimits

0xabdf,	// (0x0001ee40) aid_touch_tab_arrow_left

0xabf5,	// (0x0001ee56) aid_touch_tab_arrow_right

0xb8f4,	// (0x0001fb55) title_pane_g3_ParamLimits

0xb8f4,	// (0x0001fb55) title_pane_g3

0xda26,	// (0x00021c87) set_value_pane_g1

0xab15,	// (0x0001ed76) popup_toolbar_trans_pane_ParamLimits

0x5263,	// (0x000194c4) aid_size_cell_tb_trans_pane_ParamLimits

0xdacc,	// (0x00021d2d) bg_tb_trans_pane_ParamLimits

0x5275,	// (0x000194d6) grid_tb_trans_pane_ParamLimits

0xd564,	// (0x000217c5) cont_note_pane_ParamLimits

0xd564,	// (0x000217c5) cont_note_pane

0xd7c1,	// (0x00021a22) cont_snote2_single_text_pane_ParamLimits

0xd7c1,	// (0x00021a22) cont_snote2_single_text_pane

0xd7c1,	// (0x00021a22) cont_snote2_single_graphic_pane_ParamLimits

0xd7c1,	// (0x00021a22) cont_snote2_single_graphic_pane

0x20c2,	// (0x00016323) cont_note_wait_pane_ParamLimits

0x20c2,	// (0x00016323) cont_note_wait_pane

0x20c2,	// (0x00016323) cont_note_image_pane_ParamLimits

0x20c2,	// (0x00016323) cont_note_image_pane

0x5349,	// (0x000195aa) popup_note2_window_g1_ParamLimits

0x5349,	// (0x000195aa) popup_note2_window_g1

0x537a,	// (0x000195db) popup_note2_window_t1_ParamLimits

0x537a,	// (0x000195db) popup_note2_window_t1

0x53bf,	// (0x00019620) popup_note2_window_t2_ParamLimits

0x53bf,	// (0x00019620) popup_note2_window_t2

0x5404,	// (0x00019665) popup_note2_window_t3_ParamLimits

0x5404,	// (0x00019665) popup_note2_window_t3

0x5449,	// (0x000196aa) popup_note2_window_t4_ParamLimits

0x5449,	// (0x000196aa) popup_note2_window_t4

0xd5e8,	// (0x00021849) popup_note2_window_t5_ParamLimits

0xd5e8,	// (0x00021849) popup_note2_window_t5

0x0004,

0xfc7c,	// (0x00023edd) popup_note2_window_t_ParamLimits

0xfc7c,	// (0x00023edd) popup_note2_window_t

0x5478,	// (0x000196d9) popup_note2_image_window_g1_ParamLimits

0x5478,	// (0x000196d9) popup_note2_image_window_g1

0x5484,	// (0x000196e5) popup_note2_image_window_g2_ParamLimits

0x5484,	// (0x000196e5) popup_note2_image_window_g2

0x0001,

0xfc87,	// (0x00023ee8) popup_note2_image_window_g_ParamLimits

0xfc87,	// (0x00023ee8) popup_note2_image_window_g

0x5496,	// (0x000196f7) popup_note2_image_window_t1_ParamLimits

0x5496,	// (0x000196f7) popup_note2_image_window_t1

0x54ae,	// (0x0001970f) popup_note2_image_window_t2_ParamLimits

0x54ae,	// (0x0001970f) popup_note2_image_window_t2

0x54c6,	// (0x00019727) popup_note2_image_window_t3_ParamLimits

0x54c6,	// (0x00019727) popup_note2_image_window_t3

0x0002,

0xfc8c,	// (0x00023eed) popup_note2_image_window_t_ParamLimits

0xfc8c,	// (0x00023eed) popup_note2_image_window_t

0x20d0,	// (0x00016331) popup_note2_wait_window_g1_ParamLimits

0x20d0,	// (0x00016331) popup_note2_wait_window_g1

0x54e2,	// (0x00019743) popup_note2_wait_window_g2_ParamLimits

0x54e2,	// (0x00019743) popup_note2_wait_window_g2

0x20e8,	// (0x00016349) popup_note2_wait_window_g3_ParamLimits

0x20e8,	// (0x00016349) popup_note2_wait_window_g3

0x0002,

0xfc93,	// (0x00023ef4) popup_note2_wait_window_g_ParamLimits

0xfc93,	// (0x00023ef4) popup_note2_wait_window_g

0x54ee,	// (0x0001974f) popup_note2_wait_window_t1_ParamLimits

0x54ee,	// (0x0001974f) popup_note2_wait_window_t1

0x550c,	// (0x0001976d) popup_note2_wait_window_t2_ParamLimits

0x550c,	// (0x0001976d) popup_note2_wait_window_t2

0x552a,	// (0x0001978b) popup_note2_wait_window_t3_ParamLimits

0x552a,	// (0x0001978b) popup_note2_wait_window_t3

0x553c,	// (0x0001979d) popup_note2_wait_window_t4_ParamLimits

0x553c,	// (0x0001979d) popup_note2_wait_window_t4

0x0003,

0xfc9a,	// (0x00023efb) popup_note2_wait_window_t_ParamLimits

0xfc9a,	// (0x00023efb) popup_note2_wait_window_t

0x554e,	// (0x000197af) wait_bar2_pane_ParamLimits

0x554e,	// (0x000197af) wait_bar2_pane

0x5566,	// (0x000197c7) popup_snote2_single_text_window_g1_ParamLimits

0x5566,	// (0x000197c7) popup_snote2_single_text_window_g1

0x558e,	// (0x000197ef) popup_snote2_single_text_window_t1_ParamLimits

0x558e,	// (0x000197ef) popup_snote2_single_text_window_t1

0x55da,	// (0x0001983b) popup_snote2_single_text_window_t2_ParamLimits

0x55da,	// (0x0001983b) popup_snote2_single_text_window_t2

0x5626,	// (0x00019887) popup_snote2_single_text_window_t3_ParamLimits

0x5626,	// (0x00019887) popup_snote2_single_text_window_t3

0x5667,	// (0x000198c8) popup_snote2_single_text_window_t4_ParamLimits

0x5667,	// (0x000198c8) popup_snote2_single_text_window_t4

0x569d,	// (0x000198fe) popup_snote2_single_text_window_t5_ParamLimits

0x569d,	// (0x000198fe) popup_snote2_single_text_window_t5

0x0004,

0xfca3,	// (0x00023f04) popup_snote2_single_text_window_t_ParamLimits

0xfca3,	// (0x00023f04) popup_snote2_single_text_window_t

0x56c8,	// (0x00019929) popup_snote2_single_graphic_window_g1_ParamLimits

0x56c8,	// (0x00019929) popup_snote2_single_graphic_window_g1

0x56f0,	// (0x00019951) popup_snote2_single_graphic_window_g2_ParamLimits

0x56f0,	// (0x00019951) popup_snote2_single_graphic_window_g2

0x0001,

0xfcae,	// (0x00023f0f) popup_snote2_single_graphic_window_g_ParamLimits

0xfcae,	// (0x00023f0f) popup_snote2_single_graphic_window_g

0x5718,	// (0x00019979) popup_snote2_single_graphic_window_t1_ParamLimits

0x5718,	// (0x00019979) popup_snote2_single_graphic_window_t1

0x5764,	// (0x000199c5) popup_snote2_single_graphic_window_t2_ParamLimits

0x5764,	// (0x000199c5) popup_snote2_single_graphic_window_t2

0x5626,	// (0x00019887) popup_snote2_single_graphic_window_t3_ParamLimits

0x5626,	// (0x00019887) popup_snote2_single_graphic_window_t3

0x5667,	// (0x000198c8) popup_snote2_single_graphic_window_t4_ParamLimits

0x5667,	// (0x000198c8) popup_snote2_single_graphic_window_t4

0x569d,	// (0x000198fe) popup_snote2_single_graphic_window_t5_ParamLimits

0x569d,	// (0x000198fe) popup_snote2_single_graphic_window_t5

0x0004,

0xfcb3,	// (0x00023f14) popup_snote2_single_graphic_window_t_ParamLimits

0xfcb3,	// (0x00023f14) popup_snote2_single_graphic_window_t

0x3edd,	// (0x0001813e) clock_nsta_pane_cp2_t1

0x3edd,	// (0x0001813e) clock_nsta_pane_cp2_t2

0x0001,

0xfac7,	// (0x00023d28) clock_nsta_pane_cp2_t

0xdaeb,	// (0x00021d4c) form_field_data_wide_pane_g1_ParamLimits

0xdaf7,	// (0x00021d58) form_field_data_wide_pane_g2_ParamLimits

0xdaf7,	// (0x00021d58) form_field_data_wide_pane_g2

0xdb03,	// (0x00021d64) form_field_data_wide_pane_g3_ParamLimits

0xdb03,	// (0x00021d64) form_field_data_wide_pane_g3

0x0002,

0xf67c,	// (0x000238dd) form_field_data_wide_pane_g_ParamLimits

0xf67c,	// (0x000238dd) form_field_data_wide_pane_g

0xb639,	// (0x0001f89a) grid_touch_3_pane_ParamLimits

0xb639,	// (0x0001f89a) grid_touch_3_pane

0xbcf7,	// (0x0001ff58) cell_touch_3_pane_ParamLimits

0xbcf7,	// (0x0001ff58) cell_touch_3_pane

0x4443,	// (0x000186a4) cell_touch_3_pane_g1

0x4443,	// (0x000186a4) cell_touch_3_pane_g2

0x0001,

0xfb4c,	// (0x00023dad) cell_touch_3_pane_g

0xd61a,	// (0x0002187b) cont_query_data_pane

0xd622,	// (0x00021883) cont_query_data_pane_cp1

0x57e3,	// (0x00019a44) button_value_adjust_pane_cp7

0x57eb,	// (0x00019a4c) query_popup_pane_cp3

0xe0ab,	// (0x0002230c) bg_popup_sub_pane_cp22_ParamLimits

0xe628,	// (0x00022889) navi_navi_volume_pane_cp2

0xe643,	// (0x000228a4) popup_side_volume_key_window_g2

0xe652,	// (0x000228b3) popup_side_volume_key_window_g3

0x0002,

0xf712,	// (0x00023973) popup_side_volume_key_window_g

0xe66f,	// (0x000228d0) popup_side_volume_key_window_t2

0x0001,

0xf719,	// (0x0002397a) popup_side_volume_key_window_t

0x0827,	// (0x00014a88) popup_side_volume_key_window_ParamLimits

0x9b24,	// (0x0001dd85) list_double_graphic_pane_g4_ParamLimits

0x9b24,	// (0x0001dd85) list_double_graphic_pane_g4

0xb4ce,	// (0x0001f72f) list_single_2heading_msg_pane_ParamLimits

0xb4ce,	// (0x0001f72f) list_single_2heading_msg_pane

0xbd41,	// (0x0001ffa2) list_single_2heading_msg_pane_g1_ParamLimits

0xbd41,	// (0x0001ffa2) list_single_2heading_msg_pane_g1

0xbd4d,	// (0x0001ffae) list_single_2heading_msg_pane_g2_ParamLimits

0xbd4d,	// (0x0001ffae) list_single_2heading_msg_pane_g2

0xbd60,	// (0x0001ffc1) list_single_2heading_msg_pane_g3_ParamLimits

0xbd60,	// (0x0001ffc1) list_single_2heading_msg_pane_g3

0xbd6c,	// (0x0001ffcd) list_single_2heading_msg_pane_g4_ParamLimits

0xbd6c,	// (0x0001ffcd) list_single_2heading_msg_pane_g4

0x0003,

0xfcbe,	// (0x00023f1f) list_single_2heading_msg_pane_g_ParamLimits

0xfcbe,	// (0x00023f1f) list_single_2heading_msg_pane_g

0xbd84,	// (0x0001ffe5) list_single_2heading_msg_pane_t1_ParamLimits

0xbd84,	// (0x0001ffe5) list_single_2heading_msg_pane_t1

0xbdac,	// (0x0002000d) list_single_2heading_msg_pane_t2_ParamLimits

0xbdac,	// (0x0002000d) list_single_2heading_msg_pane_t2

0xbe17,	// (0x00020078) list_single_2heading_msg_pane_t3_ParamLimits

0xbe17,	// (0x00020078) list_single_2heading_msg_pane_t3

0x58dc,	// (0x00019b3d) list_single_2heading_msg_pane_t4_ParamLimits

0x58dc,	// (0x00019b3d) list_single_2heading_msg_pane_t4

0x0003,

0xfcc7,	// (0x00023f28) list_single_2heading_msg_pane_t_ParamLimits

0xfcc7,	// (0x00023f28) list_single_2heading_msg_pane_t

0xb900,	// (0x0001fb61) title_pane_g4_ParamLimits

0xb900,	// (0x0001fb61) title_pane_g4

0xe43d,	// (0x0002269e) title_pane_stacon_g3_ParamLimits

0xe43d,	// (0x0002269e) title_pane_stacon_g3

0x52e0,	// (0x00019541) list_single_2graphic_im_pane_g4_ParamLimits

0x52e0,	// (0x00019541) list_single_2graphic_im_pane_g4

0x2b32,	// (0x00016d93) popup_side_volume_key_window_cp

0x341c,	// (0x0001767d) main_idle_act2_pane_t1

0xe91f,	// (0x00022b80) toolbar_button_pane_g10

0x99db,	// (0x0001dc3c) popup_toolbar_window_cp1

0x3ece,	// (0x0001812f) clock_nsta_pane_cp_t1

0x3ece,	// (0x0001812f) clock_nsta_pane_cp_t2

0x0001,

0xfac2,	// (0x00023d23) clock_nsta_pane_cp_t

0xe628,	// (0x00022889) navi_navi_volume_pane_cp2_ParamLimits

0xe637,	// (0x00022898) popup_side_volume_key_window_g1_ParamLimits

0xe643,	// (0x000228a4) popup_side_volume_key_window_g2_ParamLimits

0xe652,	// (0x000228b3) popup_side_volume_key_window_g3_ParamLimits

0xf712,	// (0x00023973) popup_side_volume_key_window_g_ParamLimits

0xec26,	// (0x00022e87) fep_hwr_aid_pane

0xeccf,	// (0x00022f30) bg_fep_hwr_top_pane_g4_ParamLimits

0x44a4,	// (0x00018705) fep_hwr_top_pane_g1_ParamLimits

0x44b6,	// (0x00018717) fep_hwr_top_pane_g2_ParamLimits

0xecef,	// (0x00022f50) fep_hwr_top_pane_g3_ParamLimits

0xfb17,	// (0x00023d78) fep_hwr_top_pane_g_ParamLimits

0xed04,	// (0x00022f65) fep_hwr_top_text_pane_ParamLimits

0x28e7,	// (0x00016b48) aid_touch_tab_arrow_arrow_2

0x28f0,	// (0x00016b51) aid_touch_tab_arrow_left_2

0xec3a,	// (0x00022e9b) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0xec71,	// (0x00022ed2) fep_hwr_prediction_pane

0x460c,	// (0x0001886d) fep_vkb_prediction_pane

0xbaac,	// (0x0001fd0d) fep_vkb_side_pane_g3_ParamLimits

0xbaac,	// (0x0001fd0d) fep_vkb_side_pane_g3

0xee18,	// (0x00023079) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0xee89,	// (0x000230ea) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0xee96,	// (0x000230f7) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbc6,	// (0x00023e27) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0xefc5,	// (0x00023226) fep_hwr_prediction_pane_g1

0xefcf,	// (0x00023230) fep_hwr_prediction_pane_g2

0xefd7,	// (0x00023238) fep_hwr_prediction_pane_g3

0xefdf,	// (0x00023240) fep_hwr_prediction_pane_g4

0x0003,

0xfcd0,	// (0x00023f31) fep_hwr_prediction_pane_g

0x5901,	// (0x00019b62) fep_vkb_prediction_pane_g1

0x590b,	// (0x00019b6c) fep_vkb_prediction_pane_g2

0x5913,	// (0x00019b74) fep_vkb_prediction_pane_g3

0x591b,	// (0x00019b7c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd9,	// (0x00023f3a) fep_vkb_prediction_pane_g

0xea55,	// (0x00022cb6) slider_set_pane_g3

0xea69,	// (0x00022cca) slider_set_pane_g4

0xea81,	// (0x00022ce2) slider_set_pane_g5

0xea55,	// (0x00022cb6) slider_set_pane_g6

0xea97,	// (0x00022cf8) slider_set_pane_g7

0x2fe9,	// (0x0001724a) slider_form_pane_g3

0x2ff2,	// (0x00017253) slider_form_pane_g4

0x2ffa,	// (0x0001725b) slider_form_pane_g5

0x2fe9,	// (0x0001724a) slider_form_pane_g6

0xb471,	// (0x0001f6d2) slider_form_pane_g7

0x371f,	// (0x00017980) slider_set_pane_vc_g3

0x3728,	// (0x00017989) slider_set_pane_vc_g4

0x3731,	// (0x00017992) slider_set_pane_vc_g5

0x371f,	// (0x00017980) slider_set_pane_vc_g6

0x373a,	// (0x0001799b) slider_set_pane_vc_g7

0x3b7b,	// (0x00017ddc) slider_form_pane_vc_g1

0x3b84,	// (0x00017de5) slider_form_pane_vc_g2

0x3b8d,	// (0x00017dee) slider_form_pane_vc_g3

0x3b7b,	// (0x00017ddc) slider_form_pane_vc_g4

0x3b96,	// (0x00017df7) slider_form_pane_vc_g5

0x0004,

0xfa94,	// (0x00023cf5) slider_form_pane_vc_g

0xb8d6,	// (0x0001fb37) main_idle_act3_pane

0x5923,	// (0x00019b84) ai3_links_pane

0xbe85,	// (0x000200e6) popup_ai3_data_window_ParamLimits

0xbe85,	// (0x000200e6) popup_ai3_data_window

0xb8d6,	// (0x0001fb37) grid_ai3_links_pane

0xbea3,	// (0x00020104) cell_ai3_links_pane_ParamLimits

0xbea3,	// (0x00020104) cell_ai3_links_pane

0x5964,	// (0x00019bc5) bg_popup_sub_pane_cp11

0x5971,	// (0x00019bd2) cell_ai3_links_pane_g1

0xb8d6,	// (0x0001fb37) bg_popup_sub_pane_cp12

0x5996,	// (0x00019bf7) heading_ai3_data_pane

0x599e,	// (0x00019bff) list_ai3_gene_pane

0x59aa,	// (0x00019c0b) popup_ai3_data_window_g1

0x59b2,	// (0x00019c13) heading_ai3_data_pane_g1

0x59ba,	// (0x00019c1b) heading_ai3_data_pane_t1

0x59c8,	// (0x00019c29) list_double_ai3_gene_pane_ParamLimits

0x59c8,	// (0x00019c29) list_double_ai3_gene_pane

0x59d5,	// (0x00019c36) list_single_ai3_gene_pane_ParamLimits

0x59d5,	// (0x00019c36) list_single_ai3_gene_pane

0x4408,	// (0x00018669) list_highlight_pane_cp7_ParamLimits

0x4408,	// (0x00018669) list_highlight_pane_cp7

0x59e2,	// (0x00019c43) list_single_a13_gene_pane_t1_ParamLimits

0x59e2,	// (0x00019c43) list_single_a13_gene_pane_t1

0x59f9,	// (0x00019c5a) list_single_ai3_gene_pane_g1

0x5a02,	// (0x00019c63) list_single_ai3_gene_pane_g2

0x0001,

0xfce2,	// (0x00023f43) list_single_ai3_gene_pane_g

0x5a0a,	// (0x00019c6b) list_double_ai3_gene_pane_g1_ParamLimits

0x5a0a,	// (0x00019c6b) list_double_ai3_gene_pane_g1

0x5a16,	// (0x00019c77) list_double_ai3_gene_pane_t1_ParamLimits

0x5a16,	// (0x00019c77) list_double_ai3_gene_pane_t1

0x5a32,	// (0x00019c93) list_double_ai3_gene_pane_t2_ParamLimits

0x5a32,	// (0x00019c93) list_double_ai3_gene_pane_t2

0x5a47,	// (0x00019ca8) list_double_ai3_gene_pane_t3_ParamLimits

0x5a47,	// (0x00019ca8) list_double_ai3_gene_pane_t3

0x0002,

0xfce7,	// (0x00023f48) list_double_ai3_gene_pane_t_ParamLimits

0xfce7,	// (0x00023f48) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x57fc,	// (0x00019a5d) aid_size_min_col_2

0xbd2b,	// (0x0001ff8c) aid_size_min_msg_ParamLimits

0xbd2b,	// (0x0001ff8c) aid_size_min_msg

0xbac0,	// (0x0001fd21) fep_vkb_top_text_pane_g2_ParamLimits

0xbac0,	// (0x0001fd21) fep_vkb_top_text_pane_g2

0x0001,

0xfb47,	// (0x00023da8) fep_vkb_top_text_pane_g_ParamLimits

0xfb47,	// (0x00023da8) fep_vkb_top_text_pane_g

0xb8d6,	// (0x0001fb37) main_hc_apps_shell_pane

0x5a64,	// (0x00019cc5) grid_hc_apps_pane_ParamLimits

0x5a64,	// (0x00019cc5) grid_hc_apps_pane

0x5a73,	// (0x00019cd4) list_hc_apps_pane

0x5a7b,	// (0x00019cdc) scroll_pane_cp37_ParamLimits

0x5a7b,	// (0x00019cdc) scroll_pane_cp37

0xbebd,	// (0x0002011e) cell_hc_apps_pane_ParamLimits

0xbebd,	// (0x0002011e) cell_hc_apps_pane

0xbf87,	// (0x000201e8) cell_hc_apps_pane_g1_ParamLimits

0xbf87,	// (0x000201e8) cell_hc_apps_pane_g1

0x5b70,	// (0x00019dd1) cell_hc_apps_pane_g2_ParamLimits

0x5b70,	// (0x00019dd1) cell_hc_apps_pane_g2

0x5b8c,	// (0x00019ded) cell_hc_apps_pane_g3_ParamLimits

0x5b8c,	// (0x00019ded) cell_hc_apps_pane_g3

0x0002,

0xfcee,	// (0x00023f4f) cell_hc_apps_pane_g_ParamLimits

0xfcee,	// (0x00023f4f) cell_hc_apps_pane_g

0xbfb4,	// (0x00020215) cell_hc_apps_pane_t1_ParamLimits

0xbfb4,	// (0x00020215) cell_hc_apps_pane_t1

0xd564,	// (0x000217c5) grid_highlight_pane_cp10_ParamLimits

0xd564,	// (0x000217c5) grid_highlight_pane_cp10

0xbff4,	// (0x00020255) list_single_hc_apps_pane_ParamLimits

0xbff4,	// (0x00020255) list_single_hc_apps_pane

0xc02e,	// (0x0002028f) list_single_hc_apps_pane_g1

0xc047,	// (0x000202a8) list_single_hc_apps_pane_g2

0x0001,

0xfcf5,	// (0x00023f56) list_single_hc_apps_pane_g

0xc060,	// (0x000202c1) list_single_hc_apps_pane_g2_copy1

0xc07c,	// (0x000202dd) list_single_hc_apps_pane_t1

0xb952,	// (0x0001fbb3) bg_set_opt_pane_cp_ParamLimits

0xe364,	// (0x000225c5) setting_slider_pane_t1_ParamLimits

0xe37d,	// (0x000225de) setting_slider_pane_t2_ParamLimits

0xe397,	// (0x000225f8) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x000237c5) setting_slider_pane_t_ParamLimits

0xe3af,	// (0x00022610) slider_set_pane_ParamLimits

0xe874,	// (0x00022ad5) control_pane_g5_ParamLimits

0xe874,	// (0x00022ad5) control_pane_g5

0x2e16,	// (0x00017077) slider_set_pane_g1_ParamLimits

0xea49,	// (0x00022caa) slider_set_pane_g2_ParamLimits

0xea55,	// (0x00022cb6) slider_set_pane_g3_ParamLimits

0xea69,	// (0x00022cca) slider_set_pane_g4_ParamLimits

0xea81,	// (0x00022ce2) slider_set_pane_g5_ParamLimits

0xea55,	// (0x00022cb6) slider_set_pane_g6_ParamLimits

0xea97,	// (0x00022cf8) slider_set_pane_g7_ParamLimits

0xf960,	// (0x00023bc1) slider_set_pane_g_ParamLimits

0x090c,	// (0x00014b6d) navi_icon_text_pane_ParamLimits

0xaba6,	// (0x0001ee07) aid_fill_nsta_2_ParamLimits

0xabdf,	// (0x0001ee40) aid_touch_tab_arrow_left_ParamLimits

0xabf5,	// (0x0001ee56) aid_touch_tab_arrow_right_ParamLimits

0xac90,	// (0x0001eef1) clock_nsta_pane_ParamLimits

0xb19c,	// (0x0001f3fd) navi_icon_pane_g1_ParamLimits

0xb1a8,	// (0x0001f409) navi_text_pane_t1_ParamLimits

0xb713,	// (0x0001f974) navi_icon_text_pane_g1_ParamLimits

0xb71f,	// (0x0001f980) navi_icon_text_pane_t1_ParamLimits

0xc02e,	// (0x0002028f) list_single_hc_apps_pane_g1_ParamLimits

0xc047,	// (0x000202a8) list_single_hc_apps_pane_g2_ParamLimits

0xfcf5,	// (0x00023f56) list_single_hc_apps_pane_g_ParamLimits

0xc060,	// (0x000202c1) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc07c,	// (0x000202dd) list_single_hc_apps_pane_t1_ParamLimits

0x8c94,	// (0x0001cef5) popup_toolbar2_fixed_window_ParamLimits

0x8c94,	// (0x0001cef5) popup_toolbar2_fixed_window

0xab0b,	// (0x0001ed6c) popup_toolbar2_float_window

0xb8d6,	// (0x0001fb37) bg_popup_sub_pane_cp27

0x5ca9,	// (0x00019f0a) grid_toolbar2_float_pane

0xb8d6,	// (0x0001fb37) bg_popup_sub_pane_cp26

0x5ca9,	// (0x00019f0a) grid_toolbar2_fixed_pane

0xc0aa,	// (0x0002030b) cell_toolbar2_fixed_pane_ParamLimits

0xc0aa,	// (0x0002030b) cell_toolbar2_fixed_pane

0xc0c7,	// (0x00020328) cell_toolbar2_fixed_pane_g1

0x5cca,	// (0x00019f2b) toolbar2_fixed_button_pane

0x1991,	// (0x00015bf2) toolbar2_fixed_button_pane_g1

0x19a1,	// (0x00015c02) toolbar2_fixed_button_pane_g2

0x1999,	// (0x00015bfa) toolbar2_fixed_button_pane_g3

0x19b1,	// (0x00015c12) toolbar2_fixed_button_pane_g4

0x19a9,	// (0x00015c0a) toolbar2_fixed_button_pane_g5

0x19b9,	// (0x00015c1a) toolbar2_fixed_button_pane_g6

0x19c1,	// (0x00015c22) toolbar2_fixed_button_pane_g7

0x19d1,	// (0x00015c32) toolbar2_fixed_button_pane_g8

0x19c9,	// (0x00015c2a) toolbar2_fixed_button_pane_g9

0x0008,

0xf862,	// (0x00023ac3) toolbar2_fixed_button_pane_g

0x5cd2,	// (0x00019f33) cell_toolbar2_float_pane_ParamLimits

0x5cd2,	// (0x00019f33) cell_toolbar2_float_pane

0x5ce3,	// (0x00019f44) cell_toolbar2_float_pane_g1

0x5cca,	// (0x00019f2b) toolbar2_fixed_button_pane_cp

0xb868,	// (0x0001fac9) fep_vkb_accented_list_pane_ParamLimits

0xb868,	// (0x0001fac9) fep_vkb_accented_list_pane

0xedf8,	// (0x00023059) bg_popup_fep_shadow_pane_g9

0x0a90,	// (0x00014cf1) bg_popup_fep_shadow_pane_cp3

0xdc7c,	// (0x00021edd) list_accented_list_pane

0x5cec,	// (0x00019f4d) list_single_accented_list_pane_ParamLimits

0x5cec,	// (0x00019f4d) list_single_accented_list_pane

0x0a90,	// (0x00014cf1) list_highlight_pane_cp10

0x5cfd,	// (0x00019f5e) list_single_accented_list_pane_t1

0xaa27,	// (0x0001ec88) popup_slider_window_ParamLimits

0xaa27,	// (0x0001ec88) popup_slider_window

0x57f3,	// (0x00019a54) aid_indentation_list_msg

0xc1d2,	// (0x00020433) bg_popup_window_pane_cp19

0x5e37,	// (0x0001a098) popup_slider_window_g1

0x5e53,	// (0x0001a0b4) popup_slider_window_g2

0x5e6f,	// (0x0001a0d0) popup_slider_window_g3

0x0005,

0xfcfa,	// (0x00023f5b) popup_slider_window_g

0x5ecb,	// (0x0001a12c) popup_slider_window_t1

0x5f3f,	// (0x0001a1a0) small_volume_slider_vertical_pane

0x4443,	// (0x000186a4) small_volume_slider_vertical_pane_g1

0x4443,	// (0x000186a4) small_volume_slider_vertical_pane_g2

0x5f5b,	// (0x0001a1bc) small_volume_slider_vertical_pane_g3

0x0002,

0xfd0c,	// (0x00023f6d) small_volume_slider_vertical_pane_g

0x8bfe,	// (0x0001ce5f) area_side_right_pane_ParamLimits

0x8bfe,	// (0x0001ce5f) area_side_right_pane

0x90fe,	// (0x0001d35f) aid_size_side_button_ParamLimits

0x90fe,	// (0x0001d35f) aid_size_side_button

0x9117,	// (0x0001d378) grid_sctrl_middle_pane_ParamLimits

0x9117,	// (0x0001d378) grid_sctrl_middle_pane

0xeff0,	// (0x00023251) sctrl_sk_bottom_pane

0xf001,	// (0x00023262) sctrl_sk_top_pane

0xf013,	// (0x00023274) aid_touch_sctrl_top

0xf020,	// (0x00023281) bg_sctrl_sk_pane_ParamLimits

0xf020,	// (0x00023281) bg_sctrl_sk_pane

0xf02e,	// (0x0002328f) sctrl_sk_top_pane_g1

0xf03b,	// (0x0002329c) sctrl_sk_top_pane_t1

0xf013,	// (0x00023274) aid_touch_sctrl_bottom

0xf020,	// (0x00023281) bg_sctrl_sk_pane_cp_ParamLimits

0xf020,	// (0x00023281) bg_sctrl_sk_pane_cp

0xf056,	// (0x000232b7) sctrl_sk_bottom_pane_g1

0xf03b,	// (0x0002329c) sctrl_sk_bottom_pane_t1

0x9131,	// (0x0001d392) cell_sctrl_middle_pane_ParamLimits

0x9131,	// (0x0001d392) cell_sctrl_middle_pane

0x9144,	// (0x0001d3a5) aid_touch_sctrl_middle_ParamLimits

0x9144,	// (0x0001d3a5) aid_touch_sctrl_middle

0x9151,	// (0x0001d3b2) bg_sctrl_middle_pane_ParamLimits

0x9151,	// (0x0001d3b2) bg_sctrl_middle_pane

0xf1c7,	// (0x00023428) cell_sctrl_middle_pane_g1_ParamLimits

0xf1c7,	// (0x00023428) cell_sctrl_middle_pane_g1

0x915f,	// (0x0001d3c0) cell_sctrl_middle_pane_g2_ParamLimits

0x915f,	// (0x0001d3c0) cell_sctrl_middle_pane_g2

0x0001,

0xfd18,	// (0x00023f79) cell_sctrl_middle_pane_g_ParamLimits

0xfd18,	// (0x00023f79) cell_sctrl_middle_pane_g

0x1991,	// (0x00015bf2) bg_sctrl_middle_pane_g1

0x1999,	// (0x00015bfa) bg_sctrl_middle_pane_g2

0x19a1,	// (0x00015c02) bg_sctrl_middle_pane_g3

0x19a9,	// (0x00015c0a) bg_sctrl_middle_pane_g4

0x19b1,	// (0x00015c12) bg_sctrl_middle_pane_g5

0x19b9,	// (0x00015c1a) bg_sctrl_middle_pane_g6

0x19c1,	// (0x00015c22) bg_sctrl_middle_pane_g7

0x19c9,	// (0x00015c2a) bg_sctrl_middle_pane_g8

0x0007,

0xfd1d,	// (0x00023f7e) bg_sctrl_middle_pane_g

0x19d1,	// (0x00015c32) bg_sctrl_middle_pane_g8_copy1

0x1991,	// (0x00015bf2) bg_sctrl_sk_pane_g1

0x19a1,	// (0x00015c02) bg_sctrl_sk_pane_g2

0x1999,	// (0x00015bfa) bg_sctrl_sk_pane_g3

0x0008,

0xf862,	// (0x00023ac3) bg_sctrl_sk_pane_g

0xd97f,	// (0x00021be0) aid_size_touch_scroll_bar

0x19b1,	// (0x00015c12) bg_sctrl_sk_pane_g4

0x19a9,	// (0x00015c0a) bg_sctrl_sk_pane_g5

0x19b9,	// (0x00015c1a) bg_sctrl_sk_pane_g6

0x19c1,	// (0x00015c22) bg_sctrl_sk_pane_g7

0x19d1,	// (0x00015c32) bg_sctrl_sk_pane_g8

0x19c9,	// (0x00015c2a) bg_sctrl_sk_pane_g9

0x0ed0,	// (0x00015131) popup_fep_china_hwr2_fs_candidate_window

0xa4df,	// (0x0001e740) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa4df,	// (0x0001e740) popup_fep_china_hwr2_fs_control_window

0xee18,	// (0x00023079) sctrl_sk_top_pane_g2

0x0001,

0xfd13,	// (0x00023f74) sctrl_sk_top_pane_g

0xc28a,	// (0x000204eb) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc28a,	// (0x000204eb) aid_fep_china_hwr2_fs_cell

0xc2a0,	// (0x00020501) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc2a0,	// (0x00020501) bg_popup_fep_shadow_pane_cp4

0xc2b7,	// (0x00020518) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc2b7,	// (0x00020518) bg_popup_fep_shadow_pane_cp5

0xc2c9,	// (0x0002052a) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc2c9,	// (0x0002052a) popup_fep_china_hwr2_fs_control_bar_grid

0xc2dd,	// (0x0002053e) popup_fep_china_hwr2_fs_control_funtion_grid

0x5fba,	// (0x0001a21b) aid_fep_china_hwr2_fs_candi_cell

0xb8d6,	// (0x0001fb37) bg_popup_fep_shadow_pane_cp6

0x5fc4,	// (0x0001a225) popup_fep_china_hwr2_fs_candidate_grid

0xc2e5,	// (0x00020546) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc2e5,	// (0x00020546) cell_fep_china_hwr2_fs_funtion_grid

0x4443,	// (0x000186a4) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5fe6,	// (0x0001a247) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5fe6,	// (0x0001a247) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5ff4,	// (0x0001a255) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5ff4,	// (0x0001a255) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd2e,	// (0x00023f8f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd2e,	// (0x00023f8f) cell_fep_china_hwr2_fs_funtion_grid_g

0xc2fd,	// (0x0002055e) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc2fd,	// (0x0002055e) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc312,	// (0x00020573) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc312,	// (0x00020573) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd33,	// (0x00023f94) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd33,	// (0x00023f94) cell_fep_china_hwr2_fs_funtion_grid_t

0x603b,	// (0x0001a29c) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x6043,	// (0x0001a2a4) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x604b,	// (0x0001a2ac) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd38,	// (0x00023f99) popup_fep_china_hwr2_fs_control_bar_grid_g

0x6053,	// (0x0001a2b4) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x6053,	// (0x0001a2b4) cell_fep_china_hwr2_fs_candidate_grid

0x6072,	// (0x0001a2d3) popup_fep_china_hwr2_fs_candidate_grid_g20

0x607a,	// (0x0001a2db) popup_fep_china_hwr2_fs_candidate_grid_g21

0x4443,	// (0x000186a4) cell_fep_china_hwr2_fs_candidate_grid_g1

0x4443,	// (0x000186a4) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb4c,	// (0x00023dad) cell_fep_china_hwr2_fs_candidate_grid_g

0x6082,	// (0x0001a2e3) cell_fep_china_hwr2_fs_candidate_grid_t1

0x153f,	// (0x000157a0) clock_nsta_pane_cp_24_ParamLimits

0x153f,	// (0x000157a0) clock_nsta_pane_cp_24

0x15bf,	// (0x00015820) indicator_nsta_pane_cp_24_ParamLimits

0x15bf,	// (0x00015820) indicator_nsta_pane_cp_24

0x2745,	// (0x000169a6) heading_pane_g1

0x0001,

0xf8c7,	// (0x00023b28) heading_pane_g

0x3263,	// (0x000174c4) grid_sct_catagory_button_pane

0x3295,	// (0x000174f6) scroll_pane_cp5_ParamLimits

0x4039,	// (0x0001829a) button_value_adjust_pane_cp5_ParamLimits

0x4039,	// (0x0001829a) button_value_adjust_pane_cp5

0x413f,	// (0x000183a0) form2_midp_time_pane_ParamLimits

0x6090,	// (0x0001a2f1) cell_sct_catagory_button_pane_ParamLimits

0x6090,	// (0x0001a2f1) cell_sct_catagory_button_pane

0x4408,	// (0x00018669) bg_button_pane_cp01_ParamLimits

0x4408,	// (0x00018669) bg_button_pane_cp01

0x4443,	// (0x000186a4) cell_sct_catagory_button_pane_g1

0xaaa8,	// (0x0001ed09) popup_tb_extension_window

0xc32e,	// (0x0002058f) aid_size_cell_ext_ParamLimits

0xc32e,	// (0x0002058f) aid_size_cell_ext

0xd7c1,	// (0x00021a22) bg_tb_trans_pane_cp1_ParamLimits

0xd7c1,	// (0x00021a22) bg_tb_trans_pane_cp1

0xc354,	// (0x000205b5) grid_tb_ext_pane_ParamLimits

0xc354,	// (0x000205b5) grid_tb_ext_pane

0xc394,	// (0x000205f5) cell_tb_ext_pane_ParamLimits

0xc394,	// (0x000205f5) cell_tb_ext_pane

0xc3bc,	// (0x0002061d) cell_tb_ext_pane_g1_ParamLimits

0xc3bc,	// (0x0002061d) cell_tb_ext_pane_g1

0x6126,	// (0x0001a387) cell_tb_ext_pane_t1

0xd564,	// (0x000217c5) list_highlight_pane_cp11_ParamLimits

0xd564,	// (0x000217c5) list_highlight_pane_cp11

0x8ca9,	// (0x0001cf0a) popup_uni_indicator_window_ParamLimits

0x8ca9,	// (0x0001cf0a) popup_uni_indicator_window

0xdacc,	// (0x00021d2d) bg_popup_sub_pane_cp14

0x6141,	// (0x0001a3a2) list_uniindi_pane

0x614d,	// (0x0001a3ae) uniindi_top_pane

0xd564,	// (0x000217c5) bg_uniindi_top_pane

0x616e,	// (0x0001a3cf) uniindi_top_pane_g1

0x6184,	// (0x0001a3e5) uniindi_top_pane_g2

0x0003,

0xfd3f,	// (0x00023fa0) uniindi_top_pane_g

0x61ae,	// (0x0001a40f) uniindi_top_pane_t1

0x61da,	// (0x0001a43b) list_single_uniindi_pane_ParamLimits

0x61da,	// (0x0001a43b) list_single_uniindi_pane

0x4443,	// (0x000186a4) bg_uniindi_top_pane_g1

0x61ec,	// (0x0001a44d) list_single_uniindi_pane_g1

0x61ff,	// (0x0001a460) list_single_uniindi_pane_t1

0xe241,	// (0x000224a2) control_bg_pane

0x6224,	// (0x0001a485) bg_sctrl_sk_pane_cp1

0x622d,	// (0x0001a48e) bg_sctrl_sk_pane_cp2

0x6236,	// (0x0001a497) control_bg_pane_g1

0x623f,	// (0x0001a4a0) control_bg_pane_g2

0x0001,

0xfd48,	// (0x00023fa9) control_bg_pane_g

0x3e60,	// (0x000180c1) cell_indicator_nsta_pane_g1_ParamLimits

0xb66c,	// (0x0001f8cd) cell_indicator_nsta_pane_g2_ParamLimits

0xfab0,	// (0x00023d11) cell_indicator_nsta_pane_g_ParamLimits

0x41cf,	// (0x00018430) form2_midp_time_pane_t1_ParamLimits

0xa455,	// (0x0001e6b6) main_idle_act4_pane_ParamLimits

0xa455,	// (0x0001e6b6) main_idle_act4_pane

0xaaa8,	// (0x0001ed09) popup_tb_extension_window_ParamLimits

0xc37c,	// (0x000205dd) tb_ext_find_pane_ParamLimits

0xc37c,	// (0x000205dd) tb_ext_find_pane

0x6248,	// (0x0001a4a9) ai_gene_pane_1_cp1

0x0bcd,	// (0x00014e2e) ai_gene_pane_2_cp1

0x6250,	// (0x0001a4b1) list_single_idle_plugin_calendar_pane

0x6259,	// (0x0001a4ba) list_single_idle_plugin_notification_pane

0x6262,	// (0x0001a4c3) list_single_idle_plugin_player_pane

0xc3d9,	// (0x0002063a) list_single_idle_plugin_shortcut_pane_ParamLimits

0xc3d9,	// (0x0002063a) list_single_idle_plugin_shortcut_pane

0xc401,	// (0x00020662) main_idle_act4_pane_t1

0xc419,	// (0x0002067a) main_idle_act4_pane_t2

0x0001,

0xfd4d,	// (0x00023fae) main_idle_act4_pane_t

0xc431,	// (0x00020692) middle_sk_idle_act4_pane_ParamLimits

0xc431,	// (0x00020692) middle_sk_idle_act4_pane

0xc44d,	// (0x000206ae) popup_clock_digital_analogue_window_cp2

0xc474,	// (0x000206d5) shortcut_wheel_idle_act4_pane_ParamLimits

0xc474,	// (0x000206d5) shortcut_wheel_idle_act4_pane

0x4443,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g1

0x4443,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g2

0x4443,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g3

0x4443,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g4

0x4443,	// (0x000186a4) shortcut_wheel_idle_act4_pane_g5

0x62f5,	// (0x0001a556) shortcut_wheel_idle_act4_pane_g6

0x62fd,	// (0x0001a55e) shortcut_wheel_idle_act4_pane_g7

0x6305,	// (0x0001a566) shortcut_wheel_idle_act4_pane_g8

0x630d,	// (0x0001a56e) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd52,	// (0x00023fb3) shortcut_wheel_idle_act4_pane_g

0xb8a6,	// (0x0001fb07) middle_sk_idle_act4_pane_g1_ParamLimits

0xb8a6,	// (0x0001fb07) middle_sk_idle_act4_pane_g1

0xc4f1,	// (0x00020752) middle_sk_idle_act4_pane_g2_ParamLimits

0xc4f1,	// (0x00020752) middle_sk_idle_act4_pane_g2

0x0001,

0xfd75,	// (0x00023fd6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd75,	// (0x00023fd6) middle_sk_idle_act4_pane_g

0xc509,	// (0x0002076a) middle_sk_idle_act4_pane_t1_ParamLimits

0xc509,	// (0x0002076a) middle_sk_idle_act4_pane_t1

0xc538,	// (0x00020799) grid_ai_shortcut_pane_ParamLimits

0xc538,	// (0x00020799) grid_ai_shortcut_pane

0xc555,	// (0x000207b6) list_highlight_pane_cp16_ParamLimits

0xc555,	// (0x000207b6) list_highlight_pane_cp16

0xc562,	// (0x000207c3) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xc562,	// (0x000207c3) list_single_idle_plugin_shortcut_pane_g1

0xc56e,	// (0x000207cf) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xc56e,	// (0x000207cf) list_single_idle_plugin_shortcut_pane_g2

0xc58c,	// (0x000207ed) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xc58c,	// (0x000207ed) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd7a,	// (0x00023fdb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd7a,	// (0x00023fdb) list_single_idle_plugin_shortcut_pane_g

0xc5a1,	// (0x00020802) cell_ai_shortcut_pane_ParamLimits

0xc5a1,	// (0x00020802) cell_ai_shortcut_pane

0xc5b7,	// (0x00020818) cell_ai_shortcut_pane_g1_ParamLimits

0xc5b7,	// (0x00020818) cell_ai_shortcut_pane_g1

0x6248,	// (0x0001a4a9) ai_gene_pane_1_cp2

0x643e,	// (0x0001a69f) ai_gene_pane_2_cp2

0x6446,	// (0x0001a6a7) list_highlight_pane_cp15

0x644f,	// (0x0001a6b0) list_single_idle_plugin_calendar_pane_g1

0x6446,	// (0x0001a6a7) list_highlight_pane_cp17

0x6457,	// (0x0001a6b8) list_single_idle_plugin_calendar_pane_g1_copy1

0x645f,	// (0x0001a6c0) list_single_idle_plugin_player_pane_g1

0x34ca,	// (0x0001772b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd81,	// (0x00023fe2) list_single_idle_plugin_player_pane_g

0x6467,	// (0x0001a6c8) list_single_idle_plugin_player_pane_t1

0x6475,	// (0x0001a6d6) list_single_idle_plugin_player_pane_t2

0x6483,	// (0x0001a6e4) list_single_idle_plugin_player_pane_t3

0x6491,	// (0x0001a6f2) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd86,	// (0x00023fe7) list_single_idle_plugin_player_pane_t

0x649f,	// (0x0001a700) wait_bar_pane_cp15

0x64a7,	// (0x0001a708) grid_ai_notification_pane

0x34ca,	// (0x0001772b) list_single_idle_plugin_notification_pane_g1

0xc5d9,	// (0x0002083a) cell_ai_notification_pane_ParamLimits

0xc5d9,	// (0x0002083a) cell_ai_notification_pane

0x64bd,	// (0x0001a71e) cell_ai_notification_pane_g1

0x64c5,	// (0x0001a726) cell_ai_notification_pane_t1

0xc5e6,	// (0x00020847) tb_ext_find_button_pane

0xc5ee,	// (0x0002084f) tb_ext_find_pane_g1

0xc5f6,	// (0x00020857) tb_ext_find_pane_t1

0xe04b,	// (0x000222ac) tb_ext_find_button_pane_g1

0x64f1,	// (0x0001a752) tb_ext_find_button_pane_g2

0x0001,

0xfd8f,	// (0x00023ff0) tb_ext_find_button_pane_g

0xc401,	// (0x00020662) main_idle_act4_pane_t1_ParamLimits

0xc419,	// (0x0002067a) main_idle_act4_pane_t2_ParamLimits

0xfd4d,	// (0x00023fae) main_idle_act4_pane_t_ParamLimits

0xc44d,	// (0x000206ae) popup_clock_digital_analogue_window_cp2_ParamLimits

0xc464,	// (0x000206c5) sat_plugin_idle_act4_pane_ParamLimits

0xc464,	// (0x000206c5) sat_plugin_idle_act4_pane

0xc604,	// (0x00020865) sat_plugin_idle_act4_pane_t1_ParamLimits

0xc604,	// (0x00020865) sat_plugin_idle_act4_pane_t1

0xc61c,	// (0x0002087d) sat_plugin_idle_act4_pane_t2_ParamLimits

0xc61c,	// (0x0002087d) sat_plugin_idle_act4_pane_t2

0xc634,	// (0x00020895) sat_plugin_idle_act4_pane_t3_ParamLimits

0xc634,	// (0x00020895) sat_plugin_idle_act4_pane_t3

0xc64c,	// (0x000208ad) sat_plugin_idle_act4_pane_t4_ParamLimits

0xc64c,	// (0x000208ad) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd94,	// (0x00023ff5) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd94,	// (0x00023ff5) sat_plugin_idle_act4_pane_t

0xe306,	// (0x00022567) popup_battery_window_ParamLimits

0xe306,	// (0x00022567) popup_battery_window

0xd564,	// (0x000217c5) bg_popup_sub_pane_cp25_ParamLimits

0xd564,	// (0x000217c5) bg_popup_sub_pane_cp25

0x6546,	// (0x0001a7a7) popup_battery_window_g1_ParamLimits

0x6546,	// (0x0001a7a7) popup_battery_window_g1

0x6552,	// (0x0001a7b3) popup_battery_window_t1_ParamLimits

0x6552,	// (0x0001a7b3) popup_battery_window_t1

0x6564,	// (0x0001a7c5) popup_battery_window_t2_ParamLimits

0x6564,	// (0x0001a7c5) popup_battery_window_t2

0x0001,

0xfd9d,	// (0x00023ffe) popup_battery_window_t_ParamLimits

0xfd9d,	// (0x00023ffe) popup_battery_window_t

0xa345,	// (0x0001e5a6) midp_canvas_pane_ParamLimits

0xa3a0,	// (0x0001e601) midp_keypad_pane_ParamLimits

0xa3a0,	// (0x0001e601) midp_keypad_pane

0x0e1a,	// (0x0001507b) main_midp_pane_ParamLimits

0x3eec,	// (0x0001814d) signal_pane_g2_cp_ParamLimits

0xc664,	// (0x000208c5) aid_size_cell_midp_keypad_ParamLimits

0xc664,	// (0x000208c5) aid_size_cell_midp_keypad

0xc682,	// (0x000208e3) midp_keyp_game_grid_pane_ParamLimits

0xc682,	// (0x000208e3) midp_keyp_game_grid_pane

0xc6a9,	// (0x0002090a) midp_keyp_rocker_pane_ParamLimits

0xc6a9,	// (0x0002090a) midp_keyp_rocker_pane

0xc6e8,	// (0x00020949) midp_keyp_sk_left_pane_ParamLimits

0xc6e8,	// (0x00020949) midp_keyp_sk_left_pane

0xc73c,	// (0x0002099d) midp_keyp_sk_right_pane_ParamLimits

0xc73c,	// (0x0002099d) midp_keyp_sk_right_pane

0xb8d6,	// (0x0001fb37) bg_button_pane_cp03

0xc790,	// (0x000209f1) midp_keyp_sk_left_pane_g1

0xb8d6,	// (0x0001fb37) bg_button_pane_cp04

0xc790,	// (0x000209f1) midp_keyp_sk_right_pane_g1

0x4443,	// (0x000186a4) midp_keyp_rocker_pane_g1

0xc799,	// (0x000209fa) keyp_game_cell_pane_ParamLimits

0xc799,	// (0x000209fa) keyp_game_cell_pane

0xb8d6,	// (0x0001fb37) bg_button_pane_cp02

0xc7bf,	// (0x00020a20) keyp_game_cell_pane_g1

0x8c40,	// (0x0001cea1) popup_fep_vkb2_window_ParamLimits

0x8c40,	// (0x0001cea1) popup_fep_vkb2_window

0x916b,	// (0x0001d3cc) aid_size_cell_vkb2_ParamLimits

0x916b,	// (0x0001d3cc) aid_size_cell_vkb2

0x91a1,	// (0x0001d402) popup_fep_vkb2_window_g1_ParamLimits

0x91a1,	// (0x0001d402) popup_fep_vkb2_window_g1

0x91f1,	// (0x0001d452) vkb2_area_bottom_pane_ParamLimits

0x91f1,	// (0x0001d452) vkb2_area_bottom_pane

0x924d,	// (0x0001d4ae) vkb2_area_keypad_pane_ParamLimits

0x924d,	// (0x0001d4ae) vkb2_area_keypad_pane

0x929b,	// (0x0001d4fc) vkb2_area_top_pane_ParamLimits

0x929b,	// (0x0001d4fc) vkb2_area_top_pane

0x9321,	// (0x0001d582) vkb2_top_entry_pane_ParamLimits

0x9321,	// (0x0001d582) vkb2_top_entry_pane

0x934e,	// (0x0001d5af) vkb2_top_grid_left_pane_ParamLimits

0x934e,	// (0x0001d5af) vkb2_top_grid_left_pane

0x936e,	// (0x0001d5cf) vkb2_top_grid_right_pane_ParamLimits

0x936e,	// (0x0001d5cf) vkb2_top_grid_right_pane

0xf08f,	// (0x000232f0) vkb2_cell_keypad_pane_ParamLimits

0xf08f,	// (0x000232f0) vkb2_cell_keypad_pane

0x93b4,	// (0x0001d615) vkb2_area_bottom_grid_pane_ParamLimits

0x93b4,	// (0x0001d615) vkb2_area_bottom_grid_pane

0x93de,	// (0x0001d63f) vkb2_area_bottom_pane_g1_ParamLimits

0x93de,	// (0x0001d63f) vkb2_area_bottom_pane_g1

0x9404,	// (0x0001d665) vkb2_area_bottom_pane_g2_ParamLimits

0x9404,	// (0x0001d665) vkb2_area_bottom_pane_g2

0x9435,	// (0x0001d696) vkb2_area_bottom_pane_g3_ParamLimits

0x9435,	// (0x0001d696) vkb2_area_bottom_pane_g3

0x0002,

0xfda2,	// (0x00024003) vkb2_area_bottom_pane_g_ParamLimits

0xfda2,	// (0x00024003) vkb2_area_bottom_pane_g

0xf13c,	// (0x0002339d) vkb2_top_cell_left_pane_ParamLimits

0xf13c,	// (0x0002339d) vkb2_top_cell_left_pane

0xc7c8,	// (0x00020a29) vkb2_top_entry_pane_g1_ParamLimits

0xc7c8,	// (0x00020a29) vkb2_top_entry_pane_g1

0xc7d6,	// (0x00020a37) vkb2_top_entry_pane_t1_ParamLimits

0xc7d6,	// (0x00020a37) vkb2_top_entry_pane_t1

0x6707,	// (0x0001a968) vkb2_top_entry_pane_t2_ParamLimits

0x6707,	// (0x0001a968) vkb2_top_entry_pane_t2

0x6739,	// (0x0001a99a) vkb2_top_entry_pane_t3_ParamLimits

0x6739,	// (0x0001a99a) vkb2_top_entry_pane_t3

0x0002,

0xfda9,	// (0x0002400a) vkb2_top_entry_pane_t_ParamLimits

0xfda9,	// (0x0002400a) vkb2_top_entry_pane_t

0x949f,	// (0x0001d700) vkb2_top_grid_right_pane_g1_ParamLimits

0x949f,	// (0x0001d700) vkb2_top_grid_right_pane_g1

0xf189,	// (0x000233ea) vkb2_top_grid_right_pane_g2_ParamLimits

0xf189,	// (0x000233ea) vkb2_top_grid_right_pane_g2

0xf1a1,	// (0x00023402) vkb2_top_grid_right_pane_g3_ParamLimits

0xf1a1,	// (0x00023402) vkb2_top_grid_right_pane_g3

0x94b5,	// (0x0001d716) vkb2_top_grid_right_pane_g4_ParamLimits

0x94b5,	// (0x0001d716) vkb2_top_grid_right_pane_g4

0x0003,

0xfdb0,	// (0x00024011) vkb2_top_grid_right_pane_g_ParamLimits

0xfdb0,	// (0x00024011) vkb2_top_grid_right_pane_g

0xf1d5,	// (0x00023436) vkb2_top_cell_left_pane_g1

0xf1ec,	// (0x0002344d) vkb2_cell_keypad_pane_g1_ParamLimits

0xf1ec,	// (0x0002344d) vkb2_cell_keypad_pane_g1

0x675d,	// (0x0001a9be) vkb2_cell_keypad_pane_t1_ParamLimits

0x675d,	// (0x0001a9be) vkb2_cell_keypad_pane_t1

0xf1fa,	// (0x0002345b) vkb2_cell_bottom_grid_pane_ParamLimits

0xf1fa,	// (0x0002345b) vkb2_cell_bottom_grid_pane

0xf233,	// (0x00023494) vkb2_cell_bottom_grid_pane_g1

0xc495,	// (0x000206f6) aid_call2_pane_cp02

0xc49d,	// (0x000206fe) aid_call_pane_cp02

0xc4a5,	// (0x00020706) clock_digital_number_pane_cp10

0xc4ad,	// (0x0002070e) clock_digital_number_pane_cp11

0xc4b5,	// (0x00020716) clock_digital_number_pane_cp12

0xc4bd,	// (0x0002071e) clock_digital_number_pane_cp13

0xc4c5,	// (0x00020726) clock_digital_separator_pane_cp10

0xe04b,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g1

0xe04b,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g2

0xc4cd,	// (0x0002072e) popup_clock_digital_analogue_window_cp2_g3

0xe04b,	// (0x000222ac) popup_clock_digital_analogue_window_cp2_g4

0xc4cd,	// (0x0002072e) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd65,	// (0x00023fc6) popup_clock_digital_analogue_window_cp2_g

0xc4d5,	// (0x00020736) popup_clock_digital_analogue_window_cp2_t1

0xc4e3,	// (0x00020744) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd70,	// (0x00023fd1) popup_clock_digital_analogue_window_cp2_t

0x4443,	// (0x000186a4) clock_digital_number_pane_cp10_g1

0x4443,	// (0x000186a4) clock_digital_number_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023dad) clock_digital_number_pane_cp10_g

0x4443,	// (0x000186a4) clock_digital_separator_pane_cp10_g1

0x4443,	// (0x000186a4) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb4c,	// (0x00023dad) clock_digital_separator_pane_cp10_g

0x6190,	// (0x0001a3f1) uniindi_top_pane_g3

0x61a1,	// (0x0001a402) uniindi_top_pane_g4

0xf11a,	// (0x0002337b) vkb2_row_keypad_pane_ParamLimits

0xf11a,	// (0x0002337b) vkb2_row_keypad_pane

0xf24f,	// (0x000234b0) vkb2_cell_t_keypad_pane_ParamLimits

0xf24f,	// (0x000234b0) vkb2_cell_t_keypad_pane

0xf25f,	// (0x000234c0) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0xf25f,	// (0x000234c0) vkb2_cell_t_keypad_pane_cp08

0xf274,	// (0x000234d5) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0xf274,	// (0x000234d5) vkb2_cell_t_keypad_pane_cp09

0xf288,	// (0x000234e9) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0xf288,	// (0x000234e9) vkb2_cell_t_keypad_pane_cp01

0xf299,	// (0x000234fa) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0xf299,	// (0x000234fa) vkb2_cell_t_keypad_pane_cp02

0xf2aa,	// (0x0002350b) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0xf2aa,	// (0x0002350b) vkb2_cell_t_keypad_pane_cp03

0xf2bb,	// (0x0002351c) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0xf2bb,	// (0x0002351c) vkb2_cell_t_keypad_pane_cp04

0xf2cc,	// (0x0002352d) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0xf2cc,	// (0x0002352d) vkb2_cell_t_keypad_pane_cp05

0xf2dd,	// (0x0002353e) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0xf2dd,	// (0x0002353e) vkb2_cell_t_keypad_pane_cp06

0xf2f0,	// (0x00023551) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0xf2f0,	// (0x00023551) vkb2_cell_t_keypad_pane_cp07

0xf305,	// (0x00023566) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0xf305,	// (0x00023566) vkb2_cell_t_keypad_pane_cp10

0xee18,	// (0x00023079) vkb2_cell_t_keypad_pane_g1

0x6774,	// (0x0001a9d5) vkb2_cell_t_keypad_pane_t1

0xe241,	// (0x000224a2) popup_grid_graphic2_window

0xc80f,	// (0x00020a70) aid_size_cell_graphic2_ParamLimits

0xc80f,	// (0x00020a70) aid_size_cell_graphic2

0xc84d,	// (0x00020aae) bg_popup_window_pane_cp21_ParamLimits

0xc84d,	// (0x00020aae) bg_popup_window_pane_cp21

0xc85b,	// (0x00020abc) graphic2_pages_pane_ParamLimits

0xc85b,	// (0x00020abc) graphic2_pages_pane

0xc8b3,	// (0x00020b14) grid_graphic2_control_pane_ParamLimits

0xc8b3,	// (0x00020b14) grid_graphic2_control_pane

0xc8fb,	// (0x00020b5c) grid_graphic2_pane_ParamLimits

0xc8fb,	// (0x00020b5c) grid_graphic2_pane

0xc986,	// (0x00020be7) cell_graphic2_pane

0xb8d6,	// (0x0001fb37) main_comp_mode_pane

0x599e,	// (0x00019bff) list_ai3_gene_pane_ParamLimits

0xc1d2,	// (0x00020433) bg_popup_window_pane_cp19_ParamLimits

0x5dd5,	// (0x0001a036) bg_touch_area_indi_pane_ParamLimits

0x5dd5,	// (0x0001a036) bg_touch_area_indi_pane

0x5deb,	// (0x0001a04c) bg_touch_area_indi_pane_cp01_ParamLimits

0x5deb,	// (0x0001a04c) bg_touch_area_indi_pane_cp01

0x5e03,	// (0x0001a064) bg_touch_area_indi_pane_cp02_ParamLimits

0x5e03,	// (0x0001a064) bg_touch_area_indi_pane_cp02

0x5e1d,	// (0x0001a07e) bg_touch_area_indi_pane_cp03_ParamLimits

0x5e1d,	// (0x0001a07e) bg_touch_area_indi_pane_cp03

0x5e37,	// (0x0001a098) popup_slider_window_g1_ParamLimits

0x5e53,	// (0x0001a0b4) popup_slider_window_g2_ParamLimits

0x5e6f,	// (0x0001a0d0) popup_slider_window_g3_ParamLimits

0xfcfa,	// (0x00023f5b) popup_slider_window_g_ParamLimits

0x5ecb,	// (0x0001a12c) popup_slider_window_t1_ParamLimits

0x5f3f,	// (0x0001a1a0) small_volume_slider_vertical_pane_ParamLimits

0xc986,	// (0x00020be7) cell_graphic2_pane_ParamLimits

0xc9e9,	// (0x00020c4a) bg_button_pane_cp10_ParamLimits

0xc9e9,	// (0x00020c4a) bg_button_pane_cp10

0xc9fc,	// (0x00020c5d) bg_button_pane_cp11_ParamLimits

0xc9fc,	// (0x00020c5d) bg_button_pane_cp11

0xca0f,	// (0x00020c70) graphic2_pages_pane_g1_ParamLimits

0xca0f,	// (0x00020c70) graphic2_pages_pane_g1

0xca2a,	// (0x00020c8b) graphic2_pages_pane_g2_ParamLimits

0xca2a,	// (0x00020c8b) graphic2_pages_pane_g2

0x0001,

0xfdbe,	// (0x0002401f) graphic2_pages_pane_g_ParamLimits

0xfdbe,	// (0x0002401f) graphic2_pages_pane_g

0xca42,	// (0x00020ca3) graphic2_pages_pane_t1_ParamLimits

0xca42,	// (0x00020ca3) graphic2_pages_pane_t1

0xca5a,	// (0x00020cbb) cell_graphic2_control_pane_ParamLimits

0xca5a,	// (0x00020cbb) cell_graphic2_control_pane

0xca8e,	// (0x00020cef) cell_graphic2_pane_g1_ParamLimits

0xca8e,	// (0x00020cef) cell_graphic2_pane_g1

0xb8b4,	// (0x0001fb15) cell_graphic2_pane_g2_ParamLimits

0xb8b4,	// (0x0001fb15) cell_graphic2_pane_g2

0xb9d9,	// (0x0001fc3a) cell_graphic2_pane_g3_ParamLimits

0xb9d9,	// (0x0001fc3a) cell_graphic2_pane_g3

0xb8c1,	// (0x0001fb22) cell_graphic2_pane_g4_ParamLimits

0xb8c1,	// (0x0001fb22) cell_graphic2_pane_g4

0xca9b,	// (0x00020cfc) cell_graphic2_pane_g5_ParamLimits

0xca9b,	// (0x00020cfc) cell_graphic2_pane_g5

0x0004,

0xfdc3,	// (0x00024024) cell_graphic2_pane_g_ParamLimits

0xfdc3,	// (0x00024024) cell_graphic2_pane_g

0xcabb,	// (0x00020d1c) cell_graphic2_pane_t1_ParamLimits

0xcabb,	// (0x00020d1c) cell_graphic2_pane_t1

0x2739,	// (0x0001699a) grid_highlight_pane_cp11_ParamLimits

0x2739,	// (0x0001699a) grid_highlight_pane_cp11

0xd564,	// (0x000217c5) bg_button_pane_cp05

0xcaf0,	// (0x00020d51) cell_graphic2_control_pane_g1

0x4443,	// (0x000186a4) bg_touch_area_indi_pane_g1

0x6a4e,	// (0x0001acaf) aid_cmod_rocker_key_size

0x6a58,	// (0x0001acb9) aid_cmode_itu_key_size

0x6a62,	// (0x0001acc3) main_cmode_video_pane

0x6a6c,	// (0x0001accd) main_comp_mode_itu_pane

0x6a78,	// (0x0001acd9) main_comp_mode_rocker_pane

0x6a84,	// (0x0001ace5) cell_cmode_rocker_pane_ParamLimits

0x6a84,	// (0x0001ace5) cell_cmode_rocker_pane

0x6a98,	// (0x0001acf9) cell_cmode_itu_pane_ParamLimits

0x6a98,	// (0x0001acf9) cell_cmode_itu_pane

0xdacc,	// (0x00021d2d) bg_button_pane_cp06_ParamLimits

0xdacc,	// (0x00021d2d) bg_button_pane_cp06

0x46be,	// (0x0001891f) cell_cmode_rocker_pane_g1_ParamLimits

0x46be,	// (0x0001891f) cell_cmode_rocker_pane_g1

0x5fe6,	// (0x0001a247) cell_cmode_rocker_pane_g2_ParamLimits

0x5fe6,	// (0x0001a247) cell_cmode_rocker_pane_g2

0x0001,

0xfdd3,	// (0x00024034) cell_cmode_rocker_pane_g_ParamLimits

0xfdd3,	// (0x00024034) cell_cmode_rocker_pane_g

0xb8d6,	// (0x0001fb37) bg_button_pane_cp07

0x6aaf,	// (0x0001ad10) cell_cmode_itu_pane_g1

0x6ab8,	// (0x0001ad19) cell_cmode_itu_pane_t1

0x6ac6,	// (0x0001ad27) cell_cmode_itu_pane_t2

0x0001,

0xfdd8,	// (0x00024039) cell_cmode_itu_pane_t

0x6214,	// (0x0001a475) aid_touch_ctrl_left

0x621c,	// (0x0001a47d) aid_touch_ctrl_right

0xb8d6,	// (0x0001fb37) compa_mode_pane

0xcb16,	// (0x00020d77) aid_cmod_rocker_key_size_cp

0xcb20,	// (0x00020d81) aid_cmode_itu_key_size_cp

0x6ae8,	// (0x0001ad49) compa_mode_pane_g1

0x6af0,	// (0x0001ad51) compa_mode_pane_g2

0x6af8,	// (0x0001ad59) compa_mode_pane_g3

0x0002,

0xfddd,	// (0x0002403e) compa_mode_pane_g

0xcb2a,	// (0x00020d8b) main_comp_mode_itu_pane_cp

0xcb32,	// (0x00020d93) main_comp_mode_rocker_pane_cp

0xcb3a,	// (0x00020d9b) cell_cmode_itu_pane_cp_ParamLimits

0xcb3a,	// (0x00020d9b) cell_cmode_itu_pane_cp

0xcb4f,	// (0x00020db0) cell_cmode_rocker_pane_cp_ParamLimits

0xcb4f,	// (0x00020db0) cell_cmode_rocker_pane_cp

0xdacc,	// (0x00021d2d) bg_button_pane_cp06_cp_ParamLimits

0xdacc,	// (0x00021d2d) bg_button_pane_cp06_cp

0x46be,	// (0x0001891f) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x46be,	// (0x0001891f) cell_cmode_rocker_pane_g1_cp

0x4443,	// (0x000186a4) cell_cmode_rocker_pane_g2_cp

0xb8d6,	// (0x0001fb37) bg_button_pane_cp07_cp

0xcb61,	// (0x00020dc2) cell_cmode_itu_pane_g1_cp

0xcb6a,	// (0x00020dcb) cell_cmode_itu_pane_t1_cp

0xcb6a,	// (0x00020dcb) cell_cmode_itu_pane_t2_cp

0xb469,	// (0x0001f6ca) settings_code_pane_cp2

0xb952,	// (0x0001fbb3) bg_popup_window_pane_cp3_ParamLimits

0xd752,	// (0x000219b3) heading_pane_cp3_ParamLimits

0xd75e,	// (0x000219bf) listscroll_popup_graphic_pane_ParamLimits

0xec26,	// (0x00022e87) fep_hwr_aid_pane_ParamLimits

0xf013,	// (0x00023274) aid_touch_sctrl_top_ParamLimits

0xf02e,	// (0x0002328f) sctrl_sk_top_pane_g1_ParamLimits

0xee18,	// (0x00023079) sctrl_sk_top_pane_g2_ParamLimits

0xfd13,	// (0x00023f74) sctrl_sk_top_pane_g_ParamLimits

0xf03b,	// (0x0002329c) sctrl_sk_top_pane_t1_ParamLimits

0xf013,	// (0x00023274) aid_touch_sctrl_bottom_ParamLimits

0xf03b,	// (0x0002329c) sctrl_sk_bottom_pane_t1_ParamLimits

0x615a,	// (0x0001a3bb) aid_area_touch_clock

0x92e3,	// (0x0001d544) aid_vkb2_area_top_pane_cell_ParamLimits

0x92e3,	// (0x0001d544) aid_vkb2_area_top_pane_cell

0x938e,	// (0x0001d5ef) aid_vkb2_area_bottom_pane_cell_ParamLimits

0x938e,	// (0x0001d5ef) aid_vkb2_area_bottom_pane_cell

0x66bf,	// (0x0001a920) popup_char_count_window

0x6b4e,	// (0x0001adaf) popup_char_count_window_g1

0x6b57,	// (0x0001adb8) popup_char_count_window_g2

0x6b60,	// (0x0001adc1) popup_char_count_window_g3

0x0002,

0xfde4,	// (0x00024045) popup_char_count_window_g

0x6b69,	// (0x0001adca) popup_char_count_window_t1

0xf06d,	// (0x000232ce) popup_fep_char_preview_window_ParamLimits

0xf06d,	// (0x000232ce) popup_fep_char_preview_window

0x9303,	// (0x0001d564) vkb2_top_candi_pane_ParamLimits

0x9303,	// (0x0001d564) vkb2_top_candi_pane

0xcb78,	// (0x00020dd9) cell_vkb2_top_candi_pane_ParamLimits

0xcb78,	// (0x00020dd9) cell_vkb2_top_candi_pane

0xf31a,	// (0x0002357b) bg_popup_fep_char_preview_window_ParamLimits

0xf31a,	// (0x0002357b) bg_popup_fep_char_preview_window

0xf328,	// (0x00023589) popup_fep_char_preview_window_t1_ParamLimits

0xf328,	// (0x00023589) popup_fep_char_preview_window_t1

0x6bc8,	// (0x0001ae29) bg_popup_fep_char_preview_window_g1

0x6bd0,	// (0x0001ae31) bg_popup_fep_char_preview_window_g2

0x6bd8,	// (0x0001ae39) bg_popup_fep_char_preview_window_g3

0x6be0,	// (0x0001ae41) bg_popup_fep_char_preview_window_g4

0x6be8,	// (0x0001ae49) bg_popup_fep_char_preview_window_g5

0xf362,	// (0x000235c3) bg_popup_fep_char_preview_window_g6

0x6bf0,	// (0x0001ae51) bg_popup_fep_char_preview_window_g7

0x6bf8,	// (0x0001ae59) bg_popup_fep_char_preview_window_g8

0x6c00,	// (0x0001ae61) bg_popup_fep_char_preview_window_g9

0x0008,

0xfdeb,	// (0x0002404c) bg_popup_fep_char_preview_window_g

0xee18,	// (0x00023079) cell_vkb2_top_candi_pane_g1_ParamLimits

0xee18,	// (0x00023079) cell_vkb2_top_candi_pane_g1

0xee26,	// (0x00023087) cell_vkb2_top_candi_pane_g2_ParamLimits

0xee26,	// (0x00023087) cell_vkb2_top_candi_pane_g2

0x4f9a,	// (0x000191fb) cell_vkb2_top_candi_pane_g3_ParamLimits

0x4f9a,	// (0x000191fb) cell_vkb2_top_candi_pane_g3

0xf36a,	// (0x000235cb) cell_vkb2_top_candi_pane_g4_ParamLimits

0xf36a,	// (0x000235cb) cell_vkb2_top_candi_pane_g4

0x4d82,	// (0x00018fe3) cell_vkb2_top_candi_pane_g5_ParamLimits

0x4d82,	// (0x00018fe3) cell_vkb2_top_candi_pane_g5

0xf1c7,	// (0x00023428) cell_vkb2_top_candi_pane_g6_ParamLimits

0xf1c7,	// (0x00023428) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdfe,	// (0x0002405f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdfe,	// (0x0002405f) cell_vkb2_top_candi_pane_g

0xf38b,	// (0x000235ec) cell_vkb2_top_candi_pane_t1

0xea35,	// (0x00022c96) aid_size_touch_slider_mark_ParamLimits

0xea35,	// (0x00022c96) aid_size_touch_slider_mark

0xc897,	// (0x00020af8) grid_graphic2_catg_pane_ParamLimits

0xc897,	// (0x00020af8) grid_graphic2_catg_pane

0xc955,	// (0x00020bb6) popup_grid_graphic2_window_t1_ParamLimits

0xc955,	// (0x00020bb6) popup_grid_graphic2_window_t1

0xc96b,	// (0x00020bcc) popup_grid_graphic2_window_t2_ParamLimits

0xc96b,	// (0x00020bcc) popup_grid_graphic2_window_t2

0x0001,

0xfdb9,	// (0x0002401a) popup_grid_graphic2_window_t_ParamLimits

0xfdb9,	// (0x0002401a) popup_grid_graphic2_window_t

0xd564,	// (0x000217c5) bg_button_pane_cp05_ParamLimits

0xcaf0,	// (0x00020d51) cell_graphic2_control_pane_g1_ParamLimits

0xcbe2,	// (0x00020e43) cell_graphic2_catg_pane_ParamLimits

0xcbe2,	// (0x00020e43) cell_graphic2_catg_pane

0xb8d6,	// (0x0001fb37) bg_button_pane_cp12

0xcbf4,	// (0x00020e55) cell_graphic2_catg_pane_g1

0x6126,	// (0x0001a387) cell_tb_ext_pane_t1_ParamLimits

0xf15c,	// (0x000233bd) vkb2_top_cell_right_narrow_pane_ParamLimits

0xf15c,	// (0x000233bd) vkb2_top_cell_right_narrow_pane

0xf174,	// (0x000233d5) vkb2_top_cell_right_wide_pane_ParamLimits

0xf174,	// (0x000233d5) vkb2_top_cell_right_wide_pane

0xec18,	// (0x00022e79) bg_vkb2_func_pane_ParamLimits

0xec18,	// (0x00022e79) bg_vkb2_func_pane

0xf1d5,	// (0x00023436) vkb2_top_cell_left_pane_g1_ParamLimits

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp03_ParamLimits

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp03

0xf233,	// (0x00023494) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x1999,	// (0x00015bfa) bg_vkb2_func_pane_g1

0x19a1,	// (0x00015c02) bg_vkb2_func_pane_g2

0x19b1,	// (0x00015c12) bg_vkb2_func_pane_g3

0x19a9,	// (0x00015c0a) bg_vkb2_func_pane_g4

0x19b9,	// (0x00015c1a) bg_vkb2_func_pane_g5

0x19c1,	// (0x00015c22) bg_vkb2_func_pane_g6

0x19c9,	// (0x00015c2a) bg_vkb2_func_pane_g7

0x19d1,	// (0x00015c32) bg_vkb2_func_pane_g8

0x1991,	// (0x00015bf2) bg_vkb2_func_pane_g9

0x0008,

0xfe0b,	// (0x0002406c) bg_vkb2_func_pane_g

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp01_ParamLimits

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp01

0xf1d5,	// (0x00023436) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0xf1d5,	// (0x00023436) vkb2_top_cell_right_wide_pane_g1

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp02_ParamLimits

0xec18,	// (0x00022e79) bg_vkb2_fuc_pane_cp02

0xf233,	// (0x00023494) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0xf233,	// (0x00023494) vkb2_top_cell_right_narrow_pane_g1

0xc10c,	// (0x0002036d) aid_touch_area_decrease_ParamLimits

0xc10c,	// (0x0002036d) aid_touch_area_decrease

0xc146,	// (0x000203a7) aid_touch_area_increase_ParamLimits

0xc146,	// (0x000203a7) aid_touch_area_increase

0xc16e,	// (0x000203cf) aid_touch_area_mute_ParamLimits

0xc16e,	// (0x000203cf) aid_touch_area_mute

0xc19e,	// (0x000203ff) aid_touch_area_slider_ParamLimits

0xc19e,	// (0x000203ff) aid_touch_area_slider

0xc1de,	// (0x0002043f) popup_slider_window_g4_ParamLimits

0xc1de,	// (0x0002043f) popup_slider_window_g4

0xc206,	// (0x00020467) popup_slider_window_g5_ParamLimits

0xc206,	// (0x00020467) popup_slider_window_g5

0xc23a,	// (0x0002049b) popup_slider_window_g6_ParamLimits

0xc23a,	// (0x0002049b) popup_slider_window_g6

0x5ef9,	// (0x0001a15a) popup_slider_window_t2_ParamLimits

0x5ef9,	// (0x0001a15a) popup_slider_window_t2

0x0001,

0xfd07,	// (0x00023f68) popup_slider_window_t_ParamLimits

0xfd07,	// (0x00023f68) popup_slider_window_t

0xc256,	// (0x000204b7) slider_pane_ParamLimits

0xc256,	// (0x000204b7) slider_pane

0x6c23,	// (0x0001ae84) slider_pane_g1_ParamLimits

0x6c23,	// (0x0001ae84) slider_pane_g1

0x6c37,	// (0x0001ae98) slider_pane_g2_ParamLimits

0x6c37,	// (0x0001ae98) slider_pane_g2

0x6c4d,	// (0x0001aeae) slider_pane_g3_ParamLimits

0x6c4d,	// (0x0001aeae) slider_pane_g3

0x0003,

0xfe1e,	// (0x0002407f) slider_pane_g_ParamLimits

0xfe1e,	// (0x0002407f) slider_pane_g

0xaaf4,	// (0x0001ed55) popup_tb_float_extension_window_ParamLimits

0xaaf4,	// (0x0001ed55) popup_tb_float_extension_window

0x6c79,	// (0x0001aeda) aid_size_cell_tb_float_ext

0xb8d6,	// (0x0001fb37) bg_popup_sub_window_cp28

0x6c85,	// (0x0001aee6) grid_tb_float_ext_pane

0x6c91,	// (0x0001aef2) cell_tb_float_ext_pane_ParamLimits

0x6c91,	// (0x0001aef2) cell_tb_float_ext_pane

0x6cad,	// (0x0001af0e) cell_tb_float_ext_pane_g1

0x6cb6,	// (0x0001af17) grid_highlight_pane_cp12

0x90dc,	// (0x0001d33d) cell_last_hwr_side_pane_ParamLimits

0x90dc,	// (0x0001d33d) cell_last_hwr_side_pane

0x4443,	// (0x000186a4) cell_last_hwr_side_pane_g1

0x6cbf,	// (0x0001af20) cell_last_hwr_side_pane_g2

0x0001,

0xfe27,	// (0x00024088) cell_last_hwr_side_pane_g

0x946a,	// (0x0001d6cb) vkb2_area_bottom_space_btn_pane_ParamLimits

0x946a,	// (0x0001d6cb) vkb2_area_bottom_space_btn_pane

0xee18,	// (0x00023079) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6774,	// (0x0001a9d5) vkb2_cell_t_keypad_pane_t1_ParamLimits

0xf38b,	// (0x000235ec) cell_vkb2_top_candi_pane_t1_ParamLimits

0xf3a9,	// (0x0002360a) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0xf3a9,	// (0x0002360a) vkb2_area_bottom_space_btn_pane_g1

0xf3e3,	// (0x00023644) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0xf3e3,	// (0x00023644) vkb2_area_bottom_space_btn_pane_g2

0xf419,	// (0x0002367a) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0xf419,	// (0x0002367a) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe2c,	// (0x0002408d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe2c,	// (0x0002408d) vkb2_area_bottom_space_btn_pane_g

0xecdd,	// (0x00022f3e) cel_fep_hwr_func_pane_ParamLimits

0xecdd,	// (0x00022f3e) cel_fep_hwr_func_pane

0x90b1,	// (0x0001d312) cell_hwr_side_button_pane_ParamLimits

0x90b1,	// (0x0001d312) cell_hwr_side_button_pane

0x615a,	// (0x0001a3bb) aid_area_touch_clock_ParamLimits

0xd564,	// (0x000217c5) bg_uniindi_top_pane_ParamLimits

0x616e,	// (0x0001a3cf) uniindi_top_pane_g1_ParamLimits

0x6184,	// (0x0001a3e5) uniindi_top_pane_g2_ParamLimits

0x6190,	// (0x0001a3f1) uniindi_top_pane_g3_ParamLimits

0x61a1,	// (0x0001a402) uniindi_top_pane_g4_ParamLimits

0xfd3f,	// (0x00023fa0) uniindi_top_pane_g_ParamLimits

0x61ae,	// (0x0001a40f) uniindi_top_pane_t1_ParamLimits

0xd564,	// (0x000217c5) bg_vkb2_func_pane_cp01_ParamLimits

0xd564,	// (0x000217c5) bg_vkb2_func_pane_cp01

0x6cc8,	// (0x0001af29) cel_fep_hwr_func_pane_g1_ParamLimits

0x6cc8,	// (0x0001af29) cel_fep_hwr_func_pane_g1

0xd564,	// (0x000217c5) bg_vkb2_func_pane_cp02_ParamLimits

0xd564,	// (0x000217c5) bg_vkb2_func_pane_cp02

0x6cc8,	// (0x0001af29) cell_hwr_side_button_pane_g1_ParamLimits

0x6cc8,	// (0x0001af29) cell_hwr_side_button_pane_g1

0x17e4,	// (0x00015a45) status_pane_g4_ParamLimits

0x17e4,	// (0x00015a45) status_pane_g4

0x17fe,	// (0x00015a5f) status_pane_t1

0x41e2,	// (0x00018443) form2_midp_gauge_slider_cont_pane

0x41ea,	// (0x0001844b) form2_midp_gauge_slider_pane_t1_ParamLimits

0xb7ae,	// (0x0001fa0f) form2_midp_gauge_slider_pane_t2_ParamLimits

0xb7c0,	// (0x0001fa21) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaff,	// (0x00023d60) form2_midp_gauge_slider_pane_t_ParamLimits

0x4220,	// (0x00018481) form2_midp_slider_pane_ParamLimits

0xf05f,	// (0x000232c0) aid_size_cell_func_vkb2_ParamLimits

0xf05f,	// (0x000232c0) aid_size_cell_func_vkb2

0x6c65,	// (0x0001aec6) slider_pane_g4_ParamLimits

0x6c65,	// (0x0001aec6) slider_pane_g4

0x94cb,	// (0x0001d72c) form2_midp_gauge_slider_pane_t2_cp01

0x94d9,	// (0x0001d73a) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0x94d9,	// (0x0001d73a) form2_midp_gauge_slider_pane_t3_cp01

0xf463,	// (0x000236c4) form2_midp_slider_pane_cp01

0xb8d6,	// (0x0001fb37) navi_smil_pane

0x6d01,	// (0x0001af62) navi_smil_pane_g1

0x6d09,	// (0x0001af6a) navi_smil_pane_t1

0x6cd6,	// (0x0001af37) form2_midp_slider_pane_g1

0x6cdf,	// (0x0001af40) form2_midp_slider_pane_g2

0x6ce7,	// (0x0001af48) form2_midp_slider_pane_g3

0x6cd6,	// (0x0001af37) form2_midp_slider_pane_g4

0xcbfd,	// (0x00020e5e) form2_midp_slider_pane_g5

0x0004,

0xfe35,	// (0x00024096) form2_midp_slider_pane_g

0xf453,	// (0x000236b4) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0xf453,	// (0x000236b4) vkb2_area_bottom_space_btn_pane_g4

0xacdb,	// (0x0001ef3c) lc0_navi_pane_ParamLimits

0xacdb,	// (0x0001ef3c) lc0_navi_pane

0xad4b,	// (0x0001efac) lc0_stat_indi_pane_ParamLimits

0xad4b,	// (0x0001efac) lc0_stat_indi_pane

0xad60,	// (0x0001efc1) ls0_title_pane_ParamLimits

0xad60,	// (0x0001efc1) ls0_title_pane

0xdacc,	// (0x00021d2d) bg_popup_sub_pane_cp14_ParamLimits

0x6141,	// (0x0001a3a2) list_uniindi_pane_ParamLimits

0x614d,	// (0x0001a3ae) uniindi_top_pane_ParamLimits

0x61ec,	// (0x0001a44d) list_single_uniindi_pane_g1_ParamLimits

0x61ff,	// (0x0001a460) list_single_uniindi_pane_t1_ParamLimits

0x94f6,	// (0x0001d757) lc0_stat_clock_pane_ParamLimits

0x94f6,	// (0x0001d757) lc0_stat_clock_pane

0xcc06,	// (0x00020e67) lc0_stat_indi_pane_g1_ParamLimits

0xcc06,	// (0x00020e67) lc0_stat_indi_pane_g1

0xcc13,	// (0x00020e74) lc0_stat_indi_pane_g2_ParamLimits

0xcc13,	// (0x00020e74) lc0_stat_indi_pane_g2

0x0001,

0xfe40,	// (0x000240a1) lc0_stat_indi_pane_g_ParamLimits

0xfe40,	// (0x000240a1) lc0_stat_indi_pane_g

0x9503,	// (0x0001d764) lc0_uni_indicator_pane_ParamLimits

0x9503,	// (0x0001d764) lc0_uni_indicator_pane

0xcc20,	// (0x00020e81) ls0_title_pane_g1_ParamLimits

0xcc20,	// (0x00020e81) ls0_title_pane_g1

0xcc34,	// (0x00020e95) ls0_title_pane_t1_ParamLimits

0xcc34,	// (0x00020e95) ls0_title_pane_t1

0x9510,	// (0x0001d771) lc0_uni_indicator_pane_g1_ParamLimits

0x9510,	// (0x0001d771) lc0_uni_indicator_pane_g1

0x6d7b,	// (0x0001afdc) lc0_stat_clock_pane_t1

0xb8d6,	// (0x0001fb37) main_ai5_pane

0x6d89,	// (0x0001afea) ai5_sk_pane_ParamLimits

0x6d89,	// (0x0001afea) ai5_sk_pane

0xcc62,	// (0x00020ec3) cell_ai5_widget_pane_ParamLimits

0xcc62,	// (0x00020ec3) cell_ai5_widget_pane

0x7332,	// (0x0001b593) aid_size_cell_widget_grid

0x7340,	// (0x0001b5a1) bg_ai5_widget_pane_ParamLimits

0x7340,	// (0x0001b5a1) bg_ai5_widget_pane

0x73b4,	// (0x0001b615) cell_ai5_widget_pane_g2

0x73c4,	// (0x0001b625) cell_ai5_widget_pane_g3

0x73db,	// (0x0001b63c) cell_ai5_widget_pane_g4

0x73e7,	// (0x0001b648) cell_ai5_widget_pane_g5

0xcfb9,	// (0x0002121a) cell_ai5_widget_pane_g6

0xcfc5,	// (0x00021226) cell_ai5_widget_pane_g7

0x7447,	// (0x0001b6a8) cell_ai5_widget_pane_t1_ParamLimits

0x7447,	// (0x0001b6a8) cell_ai5_widget_pane_t1

0x7464,	// (0x0001b6c5) cell_ai5_widget_pane_t2_ParamLimits

0x7464,	// (0x0001b6c5) cell_ai5_widget_pane_t2

0x747c,	// (0x0001b6dd) cell_ai5_widget_pane_t3_ParamLimits

0x747c,	// (0x0001b6dd) cell_ai5_widget_pane_t3

0x7494,	// (0x0001b6f5) cell_ai5_widget_pane_t4_ParamLimits

0x7494,	// (0x0001b6f5) cell_ai5_widget_pane_t4

0x74b1,	// (0x0001b712) cell_ai5_widget_pane_t5_ParamLimits

0x74b1,	// (0x0001b712) cell_ai5_widget_pane_t5

0x74d0,	// (0x0001b731) cell_ai5_widget_pane_t6_ParamLimits

0x74d0,	// (0x0001b731) cell_ai5_widget_pane_t6

0x74e2,	// (0x0001b743) cell_ai5_widget_pane_t7_ParamLimits

0x74e2,	// (0x0001b743) cell_ai5_widget_pane_t7

0x74fb,	// (0x0001b75c) cell_ai5_widget_pane_t8_ParamLimits

0x74fb,	// (0x0001b75c) cell_ai5_widget_pane_t8

0x0009,

0xfe5a,	// (0x000240bb) cell_ai5_widget_pane_t_ParamLimits

0xfe5a,	// (0x000240bb) cell_ai5_widget_pane_t

0x754f,	// (0x0001b7b0) grid_ai5_widget_pane

0xdacc,	// (0x00021d2d) highlight_cell_ai5_widget_pane_ParamLimits

0xdacc,	// (0x00021d2d) highlight_cell_ai5_widget_pane

0xcfd1,	// (0x00021232) ai5_sk_left_pane

0xcfdb,	// (0x0002123c) ai5_sk_middle_pane

0xcfe5,	// (0x00021246) ai5_sk_right_pane

0x7581,	// (0x0001b7e2) bg_ai5_widget_pane_g1_ParamLimits

0x7581,	// (0x0001b7e2) bg_ai5_widget_pane_g1

0x758d,	// (0x0001b7ee) bg_ai5_widget_pane_g2_ParamLimits

0x758d,	// (0x0001b7ee) bg_ai5_widget_pane_g2

0x7599,	// (0x0001b7fa) bg_ai5_widget_pane_g3_ParamLimits

0x7599,	// (0x0001b7fa) bg_ai5_widget_pane_g3

0x75a5,	// (0x0001b806) bg_ai5_widget_pane_g4_ParamLimits

0x75a5,	// (0x0001b806) bg_ai5_widget_pane_g4

0x75b1,	// (0x0001b812) bg_ai5_widget_pane_g5_ParamLimits

0x75b1,	// (0x0001b812) bg_ai5_widget_pane_g5

0x75bd,	// (0x0001b81e) bg_ai5_widget_pane_g6_ParamLimits

0x75bd,	// (0x0001b81e) bg_ai5_widget_pane_g6

0x75c9,	// (0x0001b82a) bg_ai5_widget_pane_g7_ParamLimits

0x75c9,	// (0x0001b82a) bg_ai5_widget_pane_g7

0x75d5,	// (0x0001b836) bg_ai5_widget_pane_g8_ParamLimits

0x75d5,	// (0x0001b836) bg_ai5_widget_pane_g8

0x75e1,	// (0x0001b842) bg_ai5_widget_pane_g9_ParamLimits

0x75e1,	// (0x0001b842) bg_ai5_widget_pane_g9

0x0008,

0xfe6f,	// (0x000240d0) bg_ai5_widget_pane_g_ParamLimits

0xfe6f,	// (0x000240d0) bg_ai5_widget_pane_g

0x7617,	// (0x0001b878) cell_shortcut_ai5_widget_pane_ParamLimits

0x7617,	// (0x0001b878) cell_shortcut_ai5_widget_pane

0x0a90,	// (0x00014cf1) bg_cell_shortcut_ai5_widget_pane

0x762a,	// (0x0001b88b) cell_grid_ai5_widget_pane_g1

0x7633,	// (0x0001b894) highlight_cell_shortcut_ai5_widget_pane

0x1999,	// (0x00015bfa) ai5_sk_left_pane_g1

0x763b,	// (0x0001b89c) ai5_sk_left_pane_g2

0x7643,	// (0x0001b8a4) ai5_sk_left_pane_g3

0x764b,	// (0x0001b8ac) ai5_sk_left_pane_g4

0x0003,

0xfe82,	// (0x000240e3) ai5_sk_left_pane_g

0x7653,	// (0x0001b8b4) ai5_sk_left_pane_t1

0x19a1,	// (0x00015c02) ai5_sk_right_pane_g1

0x7661,	// (0x0001b8c2) ai5_sk_right_pane_g2

0x7669,	// (0x0001b8ca) ai5_sk_right_pane_g3

0x7671,	// (0x0001b8d2) ai5_sk_right_pane_g4

0x0003,

0xfe8b,	// (0x000240ec) ai5_sk_right_pane_g

0x7679,	// (0x0001b8da) ai5_sk_right_pane_t1

0x19a1,	// (0x00015c02) ai5_sk_middle_pane_g1

0x1999,	// (0x00015bfa) ai5_sk_middle_pane_g2

0x19b9,	// (0x00015c1a) ai5_sk_middle_pane_g3

0x7669,	// (0x0001b8ca) ai5_sk_middle_pane_g4

0x7643,	// (0x0001b8a4) ai5_sk_middle_pane_g5

0x7687,	// (0x0001b8e8) ai5_sk_middle_pane_g6

0xcfef,	// (0x00021250) ai5_sk_middle_pane_g7

0x0006,

0xfe94,	// (0x000240f5) ai5_sk_middle_pane_g

0xabc5,	// (0x0001ee26) aid_touch_area_size_lc0_ParamLimits

0xabc5,	// (0x0001ee26) aid_touch_area_size_lc0

0xee47,	// (0x000230a8) cell_hwr_candidate_pane_t1_ParamLimits

0x149b,	// (0x000156fc) aid_touch_navi_pane

0xae6b,	// (0x0001f0cc) status_dt_navi_pane_ParamLimits

0xae6b,	// (0x0001f0cc) status_dt_navi_pane

0xae83,	// (0x0001f0e4) status_dt_sta_pane_ParamLimits

0xae83,	// (0x0001f0e4) status_dt_sta_pane

0xcff7,	// (0x00021258) dt_sta_controll_pane

0xd004,	// (0x00021265) dt_sta_indi_pane

0xd011,	// (0x00021272) dt_sta_title_pane

0xd564,	// (0x000217c5) bg_dt_sta_indi_pane_ParamLimits

0xd564,	// (0x000217c5) bg_dt_sta_indi_pane

0xd023,	// (0x00021284) dt_sta_battery_pane

0xd02b,	// (0x0002128c) dt_sta_indi_pane_g1

0xd034,	// (0x00021295) dt_sta_indi_pane_g2

0xd03d,	// (0x0002129e) dt_sta_indi_pane_g3

0x0002,

0xfea3,	// (0x00024104) dt_sta_indi_pane_g

0xd046,	// (0x000212a7) dt_sta_signal_pane

0xdacc,	// (0x00021d2d) bg_dt_sta_title_pane_ParamLimits

0xdacc,	// (0x00021d2d) bg_dt_sta_title_pane

0xd04f,	// (0x000212b0) dt_sta_title_pane_g1

0xd057,	// (0x000212b8) dt_sta_title_pane_t1_ParamLimits

0xd057,	// (0x000212b8) dt_sta_title_pane_t1

0xb8d6,	// (0x0001fb37) bg_dt_sta_control_pane

0xd06c,	// (0x000212cd) dt_sta_controll_pane_g1

0xd075,	// (0x000212d6) bg_dt_sta_title_pane_g1

0xd07e,	// (0x000212df) bg_dt_sta_title_pane_g2

0xd087,	// (0x000212e8) bg_dt_sta_title_pane_g3

0x0002,

0xfeaa,	// (0x0002410b) bg_dt_sta_title_pane_g

0x4443,	// (0x000186a4) bg_dt_sta_indi_pane_g1

0x7735,	// (0x0001b996) dt_sta_signal_pane_g1

0x773d,	// (0x0001b99e) dt_sta_signal_pane_g2

0x0001,

0xfeb1,	// (0x00024112) dt_sta_signal_pane_g

0x7745,	// (0x0001b9a6) dt_sta_battery_pane_g1

0x774e,	// (0x0001b9af) dt_sta_battery_pane_t1

0x4443,	// (0x000186a4) bg_dt_sta_control_pane_g1

0xe0cd,	// (0x0002232e) fep_china_uni_eep_pane

0xe0d5,	// (0x00022336) fep_china_uni_entry_pane_ParamLimits

0xe0e5,	// (0x00022346) popup_fep_china_uni_window_g1_ParamLimits

0xe0f5,	// (0x00022356) popup_fep_china_uni_window_g2_ParamLimits

0xe0f5,	// (0x00022356) popup_fep_china_uni_window_g2

0x0001,

0xf71e,	// (0x0002397f) popup_fep_china_uni_window_g_ParamLimits

0xf71e,	// (0x0002397f) popup_fep_china_uni_window_g

0x775d,	// (0x0001b9be) fep_china_uni_eep_pane_g1

0x7765,	// (0x0001b9c6) fep_china_uni_eep_pane_t1

0x6cf8,	// (0x0001af59) aid_touch_area_size_smil_player

0x15f3,	// (0x00015854) lc0_clock_pane

0x17f2,	// (0x00015a53) status_pane_g5_ParamLimits

0x17f2,	// (0x00015a53) status_pane_g5

0xa61a,	// (0x0001e87b) popup_keymap_window

0x17b0,	// (0x00015a11) status_icon_pane

0x73c4,	// (0x0001b625) cell_ai5_widget_pane_g3_ParamLimits

0x73db,	// (0x0001b63c) cell_ai5_widget_pane_g4_ParamLimits

0x73e7,	// (0x0001b648) cell_ai5_widget_pane_g5_ParamLimits

0x740b,	// (0x0001b66c) cell_ai5_widget_pane_g8_ParamLimits

0x740b,	// (0x0001b66c) cell_ai5_widget_pane_g8

0x741f,	// (0x0001b680) cell_ai5_widget_pane_g9_ParamLimits

0x741f,	// (0x0001b680) cell_ai5_widget_pane_g9

0x7433,	// (0x0001b694) cell_ai5_widget_pane_g10_ParamLimits

0x7433,	// (0x0001b694) cell_ai5_widget_pane_g10

0x7774,	// (0x0001b9d5) status_icon_pane_g1

0xb8d6,	// (0x0001fb37) bg_popup_sub_pane_cp13

0x777c,	// (0x0001b9dd) popup_keymap_window_t1

0xa3f8,	// (0x0001e659) control_pane_g6_ParamLimits

0xa3f8,	// (0x0001e659) control_pane_g6

0xa405,	// (0x0001e666) control_pane_g7_ParamLimits

0xa405,	// (0x0001e666) control_pane_g7

0xa412,	// (0x0001e673) control_pane_g8_ParamLimits

0xa412,	// (0x0001e673) control_pane_g8

0xcff7,	// (0x00021258) dt_sta_controll_pane_ParamLimits

0xd004,	// (0x00021265) dt_sta_indi_pane_ParamLimits

0xd011,	// (0x00021272) dt_sta_title_pane_ParamLimits

0xd988,	// (0x00021be9) aid_size_touch_scroll_bar_cale

0xe31e,	// (0x0002257f) popup_discreet_window_ParamLimits

0xe31e,	// (0x0002257f) popup_discreet_window

0x8c8a,	// (0x0001ceeb) popup_sk_window

0x20c2,	// (0x00016323) bg_popup_sub_pane_cp28_ParamLimits

0x20c2,	// (0x00016323) bg_popup_sub_pane_cp28

0x778a,	// (0x0001b9eb) popup_discreet_window_g1_ParamLimits

0x778a,	// (0x0001b9eb) popup_discreet_window_g1

0x77aa,	// (0x0001ba0b) popup_discreet_window_t1_ParamLimits

0x77aa,	// (0x0001ba0b) popup_discreet_window_t1

0x77c8,	// (0x0001ba29) popup_discreet_window_t2_ParamLimits

0x77c8,	// (0x0001ba29) popup_discreet_window_t2

0x0002,

0xfeb6,	// (0x00024117) popup_discreet_window_t_ParamLimits

0xfeb6,	// (0x00024117) popup_discreet_window_t

0xf46c,	// (0x000236cd) popup_sk_window_g1

0xf476,	// (0x000236d7) popup_sk_window_g2

0x0001,

0xfebd,	// (0x0002411e) popup_sk_window_g

0xf480,	// (0x000236e1) popup_sk_window_t1

0xf490,	// (0x000236f1) popup_sk_window_t1_copy1

0x73b4,	// (0x0001b615) cell_ai5_widget_pane_g2_ParamLimits

0x750d,	// (0x0001b76e) cell_ai5_widget_pane_t9_ParamLimits

0x750d,	// (0x0001b76e) cell_ai5_widget_pane_t9

0xb8d6,	// (0x0001fb37) main_fep_fshwr2_pane

0x952f,	// (0x0001d790) aid_fshwr2_btn_pane

0x9540,	// (0x0001d7a1) aid_fshwr2_syb_pane

0x9551,	// (0x0001d7b2) aid_fshwr2_txt_pane

0x955d,	// (0x0001d7be) fshwr2_func_candi_pane

0x957e,	// (0x0001d7df) fshwr2_hwr_syb_pane

0x959b,	// (0x0001d7fc) fshwr2_icf_pane

0xb8d6,	// (0x0001fb37) fshwr2_icf_bg_pane

0x781a,	// (0x0001ba7b) fshwr2_icf_pane_t1_ParamLimits

0x781a,	// (0x0001ba7b) fshwr2_icf_pane_t1

0xe04b,	// (0x000222ac) fshwr2_func_candi_pane_g1

0xd090,	// (0x000212f1) fshwr2_func_candi_row_pane_ParamLimits

0xd090,	// (0x000212f1) fshwr2_func_candi_row_pane

0xd0a0,	// (0x00021301) cell_fshwr2_syb_pane_ParamLimits

0xd0a0,	// (0x00021301) cell_fshwr2_syb_pane

0x46be,	// (0x0001891f) fshwr2_hwr_syb_pane_g1_ParamLimits

0x46be,	// (0x0001891f) fshwr2_hwr_syb_pane_g1

0xb8d6,	// (0x0001fb37) bg_popup_call_pane_cp01

0xd0ba,	// (0x0002131b) fshwr2_func_candi_cell_pane_ParamLimits

0xd0ba,	// (0x0002131b) fshwr2_func_candi_cell_pane

0x7884,	// (0x0001bae5) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x7884,	// (0x0001bae5) fshwr2_func_candi_cell_bg_pane

0xd0e2,	// (0x00021343) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd0e2,	// (0x00021343) fshwr2_func_candi_cell_pane_g1

0x78b0,	// (0x0001bb11) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x78b0,	// (0x0001bb11) fshwr2_func_candi_cell_pane_t1

0xb8d6,	// (0x0001fb37) bg_button_pane_cp08

0x0a90,	// (0x00014cf1) cell_fshwr2_syb_bg_pane

0xd102,	// (0x00021363) cell_fshwr2_syb_bg_pane_g1

0xd10a,	// (0x0002136b) cell_fshwr2_syb_bg_pane_t1

0xdacc,	// (0x00021d2d) main_tmo_pane

0xb253,	// (0x0001f4b4) uni_indicator_pane_g1_ParamLimits

0xb26a,	// (0x0001f4cb) uni_indicator_pane_g2_ParamLimits

0xb280,	// (0x0001f4e1) uni_indicator_pane_g3_ParamLimits

0xb295,	// (0x0001f4f6) uni_indicator_pane_g4_ParamLimits

0xb295,	// (0x0001f4f6) uni_indicator_pane_g4

0x2c3c,	// (0x00016e9d) uni_indicator_pane_g5_ParamLimits

0x2c3c,	// (0x00016e9d) uni_indicator_pane_g5

0x2c3c,	// (0x00016e9d) uni_indicator_pane_g6_ParamLimits

0x2c3c,	// (0x00016e9d) uni_indicator_pane_g6

0xf91d,	// (0x00023b7e) uni_indicator_pane_g_ParamLimits

0xc0dc,	// (0x0002033d) popup_tmo_note_window_ParamLimits

0xc0dc,	// (0x0002033d) popup_tmo_note_window

0xf1b9,	// (0x0002341a) fshwr2_bg_pane

0xd0f3,	// (0x00021354) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xd0f3,	// (0x00021354) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfec2,	// (0x00024123) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfec2,	// (0x00024123) fshwr2_func_candi_cell_pane_g

0x4443,	// (0x000186a4) bg_popup_window_pane_cp01

0x78da,	// (0x0001bb3b) bg_popup_window_pane_g1_cp01

0x78e3,	// (0x0001bb44) bg_popup_window_pane_cp22_ParamLimits

0x78e3,	// (0x0001bb44) bg_popup_window_pane_cp22

0x78f1,	// (0x0001bb52) listscroll_tmo_link_pane_ParamLimits

0x78f1,	// (0x0001bb52) listscroll_tmo_link_pane

0x7931,	// (0x0001bb92) popup_tmo_note_window_g1_ParamLimits

0x7931,	// (0x0001bb92) popup_tmo_note_window_g1

0x793e,	// (0x0001bb9f) tmo_note_info_pane_ParamLimits

0x793e,	// (0x0001bb9f) tmo_note_info_pane

0xd119,	// (0x0002137a) list_tmo_note_info_pane_g1_ParamLimits

0xd119,	// (0x0002137a) list_tmo_note_info_pane_g1

0x796f,	// (0x0001bbd0) list_tmo_note_info_pane_g2_ParamLimits

0x796f,	// (0x0001bbd0) list_tmo_note_info_pane_g2

0x0001,

0xfec7,	// (0x00024128) list_tmo_note_info_pane_g_ParamLimits

0xfec7,	// (0x00024128) list_tmo_note_info_pane_g

0x798b,	// (0x0001bbec) list_tmo_note_info_text_pane_ParamLimits

0x798b,	// (0x0001bbec) list_tmo_note_info_text_pane

0x7a10,	// (0x0001bc71) list_tmo_link_pane

0x7a1d,	// (0x0001bc7e) scroll_pane_cp20

0x7a2a,	// (0x0001bc8b) list_single_tmo_link_pane_ParamLimits

0x7a2a,	// (0x0001bc8b) list_single_tmo_link_pane

0x7a3a,	// (0x0001bc9b) list_single_tmo_link_pane_t1

0x7a48,	// (0x0001bca9) list_tmo_note_info_text_pane_t1_ParamLimits

0x7a48,	// (0x0001bca9) list_tmo_note_info_text_pane_t1

0x9f4c,	// (0x0001e1ad) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9f4c,	// (0x0001e1ad) aid_size_touch_scroll_bar_cp01

0x9e7b,	// (0x0001e0dc) aid_size_touch_slider_marker

0x8c7a,	// (0x0001cedb) popup_settings_window_ParamLimits

0x8c7a,	// (0x0001cedb) popup_settings_window

0x0e42,	// (0x000150a3) popup_candi_list_indi_window

0x149b,	// (0x000156fc) aid_touch_navi_pane_ParamLimits

0xefe7,	// (0x00023248) rs_clock_indi_pane

0xeff0,	// (0x00023251) sctrl_sk_bottom_pane_ParamLimits

0xf001,	// (0x00023262) sctrl_sk_top_pane_ParamLimits

0xf087,	// (0x000232e8) popup_fep_tooltip_window

0x7332,	// (0x0001b593) aid_size_cell_widget_grid_ParamLimits

0x739f,	// (0x0001b600) cell_ai5_widget_pane_g1_ParamLimits

0x739f,	// (0x0001b600) cell_ai5_widget_pane_g1

0xcfb9,	// (0x0002121a) cell_ai5_widget_pane_g6_ParamLimits

0xcfc5,	// (0x00021226) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe45,	// (0x000240a6) cell_ai5_widget_pane_g_ParamLimits

0xfe45,	// (0x000240a6) cell_ai5_widget_pane_g

0x7531,	// (0x0001b792) cell_ai5_widget_pane_t10_ParamLimits

0x7531,	// (0x0001b792) cell_ai5_widget_pane_t10

0x754f,	// (0x0001b7b0) grid_ai5_widget_pane_ParamLimits

0x75ed,	// (0x0001b84e) cell_contacts_ai5_widget_pane_ParamLimits

0x75ed,	// (0x0001b84e) cell_contacts_ai5_widget_pane

0x77dd,	// (0x0001ba3e) popup_discreet_window_t3_ParamLimits

0x77dd,	// (0x0001ba3e) popup_discreet_window_t3

0x95b3,	// (0x0001d814) popup_fshwr2_char_preview_window_ParamLimits

0x95b3,	// (0x0001d814) popup_fshwr2_char_preview_window

0xd130,	// (0x00021391) tmo_note_info_pane_t1

0xd145,	// (0x000213a6) tmo_note_info_pane_t2

0xd15e,	// (0x000213bf) tmo_note_info_pane_t3

0x79ec,	// (0x0001bc4d) tmo_note_info_pane_t4

0x79fe,	// (0x0001bc5f) tmo_note_info_pane_t5

0x0004,

0xfecc,	// (0x0002412d) tmo_note_info_pane_t

0x7a10,	// (0x0001bc71) list_tmo_link_pane_ParamLimits

0x7a1d,	// (0x0001bc7e) scroll_pane_cp20_ParamLimits

0xb8d6,	// (0x0001fb37) bg_popup_fep_char_preview_window_cp01

0x7a61,	// (0x0001bcc2) popup_fshwr2_char_preview_window_t1

0x7a6f,	// (0x0001bcd0) popup_candi_list_indi_window_g1

0x7a78,	// (0x0001bcd9) bg_cell_contacts_ai5_widget_pane

0x7a84,	// (0x0001bce5) cell_contacts_ai5_widget_pane_g1

0x7a98,	// (0x0001bcf9) cell_contacts_ai5_widget_pane_g2

0x7aa4,	// (0x0001bd05) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfed7,	// (0x00024138) cell_contacts_ai5_widget_pane_g

0x7ab7,	// (0x0001bd18) cell_contacts_ai5_widget_pane_t1

0xdacc,	// (0x00021d2d) highlight_cell_shortcut_ai5_widget_pane_cp01

0xd1d8,	// (0x00021439) settings_container_pane

0x0a90,	// (0x00014cf1) listscroll_set_pane_copy1

0x389f,	// (0x00017b00) scroll_pane_cp121_copy1

0x7b3d,	// (0x0001bd9e) set_content_pane_copy1

0xd1e4,	// (0x00021445) aid_height_set_list_copy1_ParamLimits

0xd1e4,	// (0x00021445) aid_height_set_list_copy1

0x2e64,	// (0x000170c5) aid_size_parent_copy1_ParamLimits

0x2e64,	// (0x000170c5) aid_size_parent_copy1

0xd1f0,	// (0x00021451) button_value_adjust_pane_cp6_copy1_ParamLimits

0xd1f0,	// (0x00021451) button_value_adjust_pane_cp6_copy1

0x0e1a,	// (0x0001507b) list_highlight_pane_cp2_copy1_ParamLimits

0x0e1a,	// (0x0001507b) list_highlight_pane_cp2_copy1

0xd204,	// (0x00021465) list_set_pane_copy1_ParamLimits

0xd204,	// (0x00021465) list_set_pane_copy1

0xd173,	// (0x000213d4) main_pane_set_t1_copy1_ParamLimits

0xd173,	// (0x000213d4) main_pane_set_t1_copy1

0xd1ad,	// (0x0002140e) main_pane_set_t2_copy1_ParamLimits

0xd1ad,	// (0x0002140e) main_pane_set_t2_copy1

0xd2cb,	// (0x0002152c) main_pane_set_t3_copy1

0xd2d9,	// (0x0002153a) main_pane_set_t4_copy1

0xd1cc,	// (0x0002142d) set_content_pane_g1_copy1_ParamLimits

0xd1cc,	// (0x0002142d) set_content_pane_g1_copy1

0xd2e7,	// (0x00021548) setting_code_pane_copy1

0x7c50,	// (0x0001beb1) setting_slider_graphic_pane_copy1

0x7c50,	// (0x0001beb1) setting_slider_pane_copy1

0x7c50,	// (0x0001beb1) setting_text_pane_copy1

0x7c50,	// (0x0001beb1) setting_volume_pane_copy1

0xd2e7,	// (0x00021548) settings_code_pane_cp2_copy1

0xd2ef,	// (0x00021550) settings_code_pane_cp_copy1_ParamLimits

0xd2ef,	// (0x00021550) settings_code_pane_cp_copy1

0x95cb,	// (0x0001d82c) volume_set_pane_copy1

0xd303,	// (0x00021564) volume_set_pane_g10_copy1

0xd30f,	// (0x00021570) volume_set_pane_g1_copy1

0xd319,	// (0x0002157a) volume_set_pane_g2_copy1

0xd323,	// (0x00021584) volume_set_pane_g3_copy1

0xd32d,	// (0x0002158e) volume_set_pane_g4_copy1

0xd337,	// (0x00021598) volume_set_pane_g5_copy1

0xd341,	// (0x000215a2) volume_set_pane_g6_copy1

0xd34b,	// (0x000215ac) volume_set_pane_g7_copy1

0xd355,	// (0x000215b6) volume_set_pane_g8_copy1

0xd35f,	// (0x000215c0) volume_set_pane_g9_copy1

0xb952,	// (0x0001fbb3) bg_set_opt_pane_cp_copy1_ParamLimits

0xb952,	// (0x0001fbb3) bg_set_opt_pane_cp_copy1

0xf49e,	// (0x000236ff) setting_slider_pane_t1_copy1_ParamLimits

0xf49e,	// (0x000236ff) setting_slider_pane_t1_copy1

0x95d7,	// (0x0001d838) setting_slider_pane_t2_copy1_ParamLimits

0x95d7,	// (0x0001d838) setting_slider_pane_t2_copy1

0x95f1,	// (0x0001d852) setting_slider_pane_t3_copy1_ParamLimits

0x95f1,	// (0x0001d852) setting_slider_pane_t3_copy1

0x9609,	// (0x0001d86a) slider_set_pane_copy1_ParamLimits

0x9609,	// (0x0001d86a) slider_set_pane_copy1

0xdb95,	// (0x00021df6) set_opt_bg_pane_g1_copy2

0xdb9d,	// (0x00021dfe) set_opt_bg_pane_g2_copy2

0x7cd2,	// (0x0001bf33) set_opt_bg_pane_g3_copy2

0xdbad,	// (0x00021e0e) set_opt_bg_pane_g4_copy2

0xdbb5,	// (0x00021e16) set_opt_bg_pane_g5_copy2

0xdbbd,	// (0x00021e1e) set_opt_bg_pane_g6_copy2

0xd369,	// (0x000215ca) set_opt_bg_pane_g7_copy2

0x7ce6,	// (0x0001bf47) set_opt_bg_pane_g8_copy2

0x7cf0,	// (0x0001bf51) set_opt_bg_pane_g9_copy2

0x7cfa,	// (0x0001bf5b) aid_size_touch_slider_mark_copy1_ParamLimits

0x7cfa,	// (0x0001bf5b) aid_size_touch_slider_mark_copy1

0x7d0e,	// (0x0001bf6f) slider_set_pane_g1_copy1

0x7d17,	// (0x0001bf78) slider_set_pane_g2_copy1

0x4f58,	// (0x000191b9) slider_set_pane_g3_copy1_ParamLimits

0x4f58,	// (0x000191b9) slider_set_pane_g3_copy1

0x4f6c,	// (0x000191cd) slider_set_pane_g4_copy1_ParamLimits

0x4f6c,	// (0x000191cd) slider_set_pane_g4_copy1

0x4f84,	// (0x000191e5) slider_set_pane_g5_copy1_ParamLimits

0x4f84,	// (0x000191e5) slider_set_pane_g5_copy1

0x4f58,	// (0x000191b9) slider_set_pane_g6_copy1_ParamLimits

0x4f58,	// (0x000191b9) slider_set_pane_g6_copy1

0xd373,	// (0x000215d4) slider_set_pane_g7_copy1_ParamLimits

0xd373,	// (0x000215d4) slider_set_pane_g7_copy1

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp2_copy1

0x7d35,	// (0x0001bf96) setting_slider_graphic_pane_g1_copy1

0xd389,	// (0x000215ea) setting_slider_graphic_pane_t1_copy1

0xd399,	// (0x000215fa) setting_slider_graphic_pane_t2_copy1

0xd3a9,	// (0x0002160a) slider_set_pane_cp_copy1

0x7d6e,	// (0x0001bfcf) input_focus_pane_cp1_copy1

0x7d77,	// (0x0001bfd8) list_set_text_pane_copy1

0x7d7f,	// (0x0001bfe0) setting_text_pane_g1_copy1

0xb977,	// (0x0001fbd8) set_text_pane_t1_copy1

0x7d6e,	// (0x0001bfcf) input_focus_pane_cp2_copy1

0x7d7f,	// (0x0001bfe0) setting_code_pane_g1_copy1

0xd3b1,	// (0x00021612) setting_code_pane_t1_copy1

0xd3bf,	// (0x00021620) list_set_graphic_pane_copy1

0xb8ea,	// (0x0001fb4b) bg_set_opt_pane_cp4_copy1

0xa291,	// (0x0001e4f2) list_set_graphic_pane_g1_copy1_ParamLimits

0xa291,	// (0x0001e4f2) list_set_graphic_pane_g1_copy1

0xd3d1,	// (0x00021632) list_set_graphic_pane_g2_copy1

0xa2a9,	// (0x0001e50a) list_set_graphic_pane_t1_copy1_ParamLimits

0xa2a9,	// (0x0001e50a) list_set_graphic_pane_t1_copy1

0x4443,	// (0x000186a4) rs_clock_indi_pane_g1

0x7dc9,	// (0x0001c02a) rs_clock_indi_pane_t1

0x7dd7,	// (0x0001c038) rs_indi_pane

0x7ddf,	// (0x0001c040) rs_indi_pane_g1

0x7de8,	// (0x0001c049) rs_indi_pane_g2

0x7df1,	// (0x0001c052) rs_indi_pane_g3

0x0002,

0xfede,	// (0x0002413f) rs_indi_pane_g

0x0a90,	// (0x00014cf1) bg_popup_preview_window_pane_cp03

0x7dfa,	// (0x0001c05b) popup_fep_tooltip_window_t1

0x536d,	// (0x000195ce) popup_note2_window_g2_ParamLimits

0x536d,	// (0x000195ce) popup_note2_window_g2

0x0001,

0xfc77,	// (0x00023ed8) popup_note2_window_g_ParamLimits

0xfc77,	// (0x00023ed8) popup_note2_window_g

0x5964,	// (0x00019bc5) bg_popup_sub_pane_cp11_ParamLimits

0x5971,	// (0x00019bd2) cell_ai3_links_pane_g1_ParamLimits

0x5988,	// (0x00019be9) cell_ai3_links_pane_t1

0xb977,	// (0x0001fbd8) set_text_pane_t1_copy1_ParamLimits

0xa31d,	// (0x0001e57e) cell_graphic_popup_pane_cp2_ParamLimits

0xa31d,	// (0x0001e57e) cell_graphic_popup_pane_cp2

0xd3d9,	// (0x0002163a) cell_graphic_popup_pane_g1_cp2

0xd79b,	// (0x000219fc) cell_graphic_popup_pane_g2_cp2

0x7e10,	// (0x0001c071) cell_graphic_popup_pane_g3_cp2

0x7e18,	// (0x0001c079) cell_graphic_popup_pane_t2_cp2

0xd7ac,	// (0x00021a0d) grid_highlight_pane_cp3_cp2

0xde6d,	// (0x000220ce) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xdacc,	// (0x00021d2d) main_tmo_pane_ParamLimits

0xc0d0,	// (0x00020331) popup_tmo_big_image_note_window

0x738e,	// (0x0001b5ef) cell_ai5_widget_list_pane

0x7396,	// (0x0001b5f7) cell_ai5_widget_lrg_icon_pane

0xd130,	// (0x00021391) tmo_note_info_pane_t1_ParamLimits

0xd145,	// (0x000213a6) tmo_note_info_pane_t2_ParamLimits

0xd15e,	// (0x000213bf) tmo_note_info_pane_t3_ParamLimits

0x79ec,	// (0x0001bc4d) tmo_note_info_pane_t4_ParamLimits

0x79fe,	// (0x0001bc5f) tmo_note_info_pane_t5_ParamLimits

0xfecc,	// (0x0002412d) tmo_note_info_pane_t_ParamLimits

0xd1d8,	// (0x00021439) settings_container_pane_ParamLimits

0x7d66,	// (0x0001bfc7) indicator_popup_pane_cp5

0x7d66,	// (0x0001bfc7) indicator_popup_pane_cp6

0xd3bf,	// (0x00021620) list_set_graphic_pane_copy1_ParamLimits

0xb8d6,	// (0x0001fb37) bg_popup_window_pane_cp23

0x7e26,	// (0x0001c087) popup_tmo_big_image_note_window_g1

0x7e32,	// (0x0001c093) popup_tmo_big_image_note_window_t1

0x7e42,	// (0x0001c0a3) popup_tmo_big_image_note_window_t2

0x7e52,	// (0x0001c0b3) popup_tmo_big_image_note_window_t3

0x0002,

0xfee5,	// (0x00024146) popup_tmo_big_image_note_window_t

0x4443,	// (0x000186a4) cell_ai5_widget_lrg_icon_pane_g1

0x7e62,	// (0x0001c0c3) cell_ai5_widget_lrg_icon_pane_t1

0x7e70,	// (0x0001c0d1) cell_ai5_widget_list_row_pane_ParamLimits

0x7e70,	// (0x0001c0d1) cell_ai5_widget_list_row_pane

0x7e89,	// (0x0001c0ea) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7e89,	// (0x0001c0ea) cell_ai5_widget_list_row_pane_g1

0x7e96,	// (0x0001c0f7) cell_ai5_widget_list_row_pane_t1_ParamLimits

0x7e96,	// (0x0001c0f7) cell_ai5_widget_list_row_pane_t1

0x7ec1,	// (0x0001c122) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7ec1,	// (0x0001c122) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfeec,	// (0x0002414d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfeec,	// (0x0002414d) cell_ai5_widget_list_row_pane_t

0xe241,	// (0x000224a2) main_fep_vtchi_ss_pane

0xf4cb,	// (0x0002372c) popup_fep_char_pre_window

0xf4d3,	// (0x00023734) popup_fep_ituss_window

0xf4f4,	// (0x00023755) popup_fep_vkbss_window

0x7ee9,	// (0x0001c14a) grid_vkbss_keypad_pane_ParamLimits

0x7ee9,	// (0x0001c14a) grid_vkbss_keypad_pane

0x7ef9,	// (0x0001c15a) ituss_keypad_pane

0xf521,	// (0x00023782) aid_vkbss_key_offset_ParamLimits

0xf521,	// (0x00023782) aid_vkbss_key_offset

0xf52d,	// (0x0002378e) cell_vkbss_key_pane_ParamLimits

0xf52d,	// (0x0002378e) cell_vkbss_key_pane

0x7f09,	// (0x0001c16a) bg_cell_vkbss_key_g1_ParamLimits

0x7f09,	// (0x0001c16a) bg_cell_vkbss_key_g1

0x7f15,	// (0x0001c176) cell_vkbss_key_3p_pane_ParamLimits

0x7f15,	// (0x0001c176) cell_vkbss_key_3p_pane

0x7f2f,	// (0x0001c190) cell_vkbss_key_g1_ParamLimits

0x7f2f,	// (0x0001c190) cell_vkbss_key_g1

0x7f49,	// (0x0001c1aa) cell_vkbss_key_t1_ParamLimits

0x7f49,	// (0x0001c1aa) cell_vkbss_key_t1

0xf543,	// (0x000237a4) cell_ituss_key_pane_ParamLimits

0xf543,	// (0x000237a4) cell_ituss_key_pane

0x7f74,	// (0x0001c1d5) bg_cell_ituss_key_g1_ParamLimits

0x7f74,	// (0x0001c1d5) bg_cell_ituss_key_g1

0x7f80,	// (0x0001c1e1) cell_ituss_key_pane_g1_ParamLimits

0x7f80,	// (0x0001c1e1) cell_ituss_key_pane_g1

0x7f94,	// (0x0001c1f5) cell_ituss_key_pane_g2_ParamLimits

0x7f94,	// (0x0001c1f5) cell_ituss_key_pane_g2

0x0001,

0xfef3,	// (0x00024154) cell_ituss_key_pane_g_ParamLimits

0xfef3,	// (0x00024154) cell_ituss_key_pane_g

0x7fc6,	// (0x0001c227) cell_ituss_key_t1_ParamLimits

0x7fc6,	// (0x0001c227) cell_ituss_key_t1

0x8004,	// (0x0001c265) cell_ituss_key_t2_ParamLimits

0x8004,	// (0x0001c265) cell_ituss_key_t2

0x8035,	// (0x0001c296) cell_ituss_key_t3_ParamLimits

0x8035,	// (0x0001c296) cell_ituss_key_t3

0x8066,	// (0x0001c2c7) cell_ituss_key_t4_ParamLimits

0x8066,	// (0x0001c2c7) cell_ituss_key_t4

0x0003,

0xfef8,	// (0x00024159) cell_ituss_key_t_ParamLimits

0xfef8,	// (0x00024159) cell_ituss_key_t

0x8097,	// (0x0001c2f8) cell_vkbss_key_3p_pane_g1

0x809f,	// (0x0001c300) cell_vkbss_key_3p_pane_g2

0x80a7,	// (0x0001c308) cell_vkbss_key_3p_pane_g3

0x0002,

0xff01,	// (0x00024162) cell_vkbss_key_3p_pane_g

0xb8d6,	// (0x0001fb37) bg_popup_fep_char_preview_window_cp02

0x80af,	// (0x0001c310) popup_fep_char_pre_window_t1

0xcfaf,	// (0x00021210) main_ai5_sk_pane

0x7a78,	// (0x0001bcd9) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7a84,	// (0x0001bce5) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x7a98,	// (0x0001bcf9) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7aa4,	// (0x0001bd05) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfed7,	// (0x00024138) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7ab7,	// (0x0001bd18) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xdacc,	// (0x00021d2d) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xd3e1,	// (0x00021642) main_ai5_sk_pane_g1

0x1efa,	// (0x0001615b) popup_query_code_window_g1

0xf4e9,	// (0x0002374a) popup_fep_vkb_icf_pane

0xf4ff,	// (0x00023760) popup_fep_vtchi_icf_pane

0xdacc,	// (0x00021d2d) bg_icf_pane

0x80c7,	// (0x0001c328) list_vkb_icf_pane

0xdacc,	// (0x00021d2d) bg_icf_pane_cp01

0x80d3,	// (0x0001c334) vtchi_icf_list_pane

0x80e4,	// (0x0001c345) list_vkb_icf_pane_t1_ParamLimits

0x80e4,	// (0x0001c345) list_vkb_icf_pane_t1

0x80fa,	// (0x0001c35b) vtchi_icf_list_pane_t1_ParamLimits

0x80fa,	// (0x0001c35b) vtchi_icf_list_pane_t1

0xf4d3,	// (0x00023734) popup_fep_ituss_window_ParamLimits

0xf4ff,	// (0x00023760) popup_fep_vtchi_icf_pane_ParamLimits

0x7ef9,	// (0x0001c15a) ituss_keypad_pane_ParamLimits

0xf515,	// (0x00023776) ituss_sks_pane

0xdacc,	// (0x00021d2d) bg_icf_pane_ParamLimits

0xf4bc,	// (0x0002371d) icf_edit_indi_pane_ParamLimits

0xf4bc,	// (0x0002371d) icf_edit_indi_pane

0x80c7,	// (0x0001c328) list_vkb_icf_pane_ParamLimits

0xdacc,	// (0x00021d2d) bg_icf_pane_cp01_ParamLimits

0xf4bc,	// (0x0002371d) icf_edit_indi_pane_cp01_ParamLimits

0xf4bc,	// (0x0002371d) icf_edit_indi_pane_cp01

0x80db,	// (0x0001c33c) vtchi_query_pane

0x46be,	// (0x0001891f) icf_edit_indi_pane_g1_ParamLimits

0x46be,	// (0x0001891f) icf_edit_indi_pane_g1

0x817c,	// (0x0001c3dd) icf_edit_indi_pane_g2_ParamLimits

0x817c,	// (0x0001c3dd) icf_edit_indi_pane_g2

0x0001,

0xff19,	// (0x0002417a) icf_edit_indi_pane_g_ParamLimits

0xff19,	// (0x0002417a) icf_edit_indi_pane_g

0x818b,	// (0x0001c3ec) icf_edit_indi_pane_t1

0x8112,	// (0x0001c373) bg_input_focus_pane_cp042

0xd97f,	// (0x00021be0) vtchi_button_pane

0x811b,	// (0x0001c37c) vtchi_query_pane_t1

0x8129,	// (0x0001c38a) vtchi_query_pane_t2

0x8137,	// (0x0001c398) vtchi_query_pane_t3

0x0002,

0xff08,	// (0x00024169) vtchi_query_pane_t

0xb8d6,	// (0x0001fb37) bg_button_pane_cp13

0x8145,	// (0x0001c3a6) vtchi_button_pane_g1

0x814d,	// (0x0001c3ae) ituss_sks_pane_g1

0x8158,	// (0x0001c3b9) ituss_sks_pane_g2

0x0001,

0xff0f,	// (0x00024170) ituss_sks_pane_g

0x8160,	// (0x0001c3c1) ituss_sks_pane_t1

0x816e,	// (0x0001c3cf) ituss_sks_pane_t2

0x0001,

0xff14,	// (0x00024175) ituss_sks_pane_t

0x3e9d,	// (0x000180fe) indicator_nsta_pane_cp_g1

0x3ea6,	// (0x00018107) indicator_nsta_pane_cp_g2

0x3eae,	// (0x0001810f) indicator_nsta_pane_cp_g3

0x3eb6,	// (0x00018117) indicator_nsta_pane_cp_g4

0x3ebe,	// (0x0001811f) indicator_nsta_pane_cp_g5

0x3ec6,	// (0x00018127) indicator_nsta_pane_cp_g6

0x0005,

0xfab5,	// (0x00023d16) indicator_nsta_pane_cp_g

0xcad2,	// (0x00020d33) cell_graphic2_pane_t2_ParamLimits

0xcad2,	// (0x00020d33) cell_graphic2_pane_t2

0x0001,

0xfdce,	// (0x0002402f) cell_graphic2_pane_t_ParamLimits

0xfdce,	// (0x0002402f) cell_graphic2_pane_t

0xcb08,	// (0x00020d69) cell_graphic2_control_pane_t1

0xa18c,	// (0x0001e3ed) signal_pane_g3_ParamLimits

0xa18c,	// (0x0001e3ed) signal_pane_g3

0xa1a0,	// (0x0001e401) signal_pane_g4_ParamLimits

0xa1a0,	// (0x0001e401) signal_pane_g4

0x7ed3,	// (0x0001c134) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7ed3,	// (0x0001c134) cell_ai5_widget_list_row_pane_t3

0x7fb4,	// (0x0001c215) cell_ituss_key_pane_t1_ParamLimits

0x7fb4,	// (0x0001c215) cell_ituss_key_pane_t1

0x1b48,	// (0x00015da9) form_field_data_wide_pane_vc_t2_ParamLimits

0x1b48,	// (0x00015da9) form_field_data_wide_pane_vc_t2

0x1b5c,	// (0x00015dbd) form_field_data_wide_pane_vc_t3_ParamLimits

0x1b5c,	// (0x00015dbd) form_field_data_wide_pane_vc_t3

0x0002,

0xf805,	// (0x00023a66) form_field_data_wide_pane_vc_t_ParamLimits

0xf805,	// (0x00023a66) form_field_data_wide_pane_vc_t

0x3b48,	// (0x00017da9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3b48,	// (0x00017da9) form_field_slider_wide_pane_vc_t3

0x3c1e,	// (0x00017e7f) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3c1e,	// (0x00017e7f) form_field_popup_wide_pane_vc_t2

0x3c35,	// (0x00017e96) form_field_popup_wide_pane_vc_t3_ParamLimits

0x3c35,	// (0x00017e96) form_field_popup_wide_pane_vc_t3

0x0002,

0xfaa4,	// (0x00023d05) form_field_popup_wide_pane_vc_t_ParamLimits

0xfaa4,	// (0x00023d05) form_field_popup_wide_pane_vc_t

0x952f,	// (0x0001d790) aid_fshwr2_btn_pane_ParamLimits

0x9540,	// (0x0001d7a1) aid_fshwr2_syb_pane_ParamLimits

0x9551,	// (0x0001d7b2) aid_fshwr2_txt_pane_ParamLimits

0xf1b9,	// (0x0002341a) fshwr2_bg_pane_ParamLimits

0x955d,	// (0x0001d7be) fshwr2_func_candi_pane_ParamLimits

0x957e,	// (0x0001d7df) fshwr2_hwr_syb_pane_ParamLimits

0x959b,	// (0x0001d7fc) fshwr2_icf_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_av_vga4_lsc_tch_Normal

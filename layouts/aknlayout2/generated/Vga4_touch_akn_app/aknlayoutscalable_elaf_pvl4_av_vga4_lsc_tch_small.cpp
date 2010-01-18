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

#include "aknlayoutscalable_elaf_pvl4_av_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pvp4_av_vga4_prt_tch + 0x00020fe3 };

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
0xb9c2,	// (0x0002c9a5) Screen

0xb9ce,	// (0x0002c9b1) application_window_ParamLimits

0xb9ce,	// (0x0002c9b1) application_window

0xe61c,	// (0x0002f5ff) screen_g1

0xba06,	// (0x0002c9e9) area_bottom_pane_ParamLimits

0xba06,	// (0x0002c9e9) area_bottom_pane

0x0e3d,	// (0x00021e20) area_top_pane_ParamLimits

0x0e3d,	// (0x00021e20) area_top_pane

0x0ed1,	// (0x00021eb4) main_pane_ParamLimits

0x0ed1,	// (0x00021eb4) main_pane

0xe626,	// (0x0002f609) misc_graphics

0xd23d,	// (0x0002e220) battery_pane_ParamLimits

0xd23d,	// (0x0002e220) battery_pane

0x54b8,	// (0x0002649b) bg_status_flat_pane_g8

0x54c0,	// (0x000264a3) bg_status_flat_pane_g9

0x4861,	// (0x00025844) context_pane_ParamLimits

0x4861,	// (0x00025844) context_pane

0xd3b4,	// (0x0002e397) navi_pane_ParamLimits

0xd3b4,	// (0x0002e397) navi_pane

0xd43d,	// (0x0002e420) signal_pane_ParamLimits

0xd43d,	// (0x0002e420) signal_pane

0x0008,

0xf880,	// (0x00030863) bg_status_flat_pane_g

0xd4cd,	// (0x0002e4b0) status_pane_g1_ParamLimits

0xd4cd,	// (0x0002e4b0) status_pane_g1

0xd4e3,	// (0x0002e4c6) status_pane_g2_ParamLimits

0xd4e3,	// (0x0002e4c6) status_pane_g2

0x4aa1,	// (0x00025a84) status_pane_g3_ParamLimits

0x4aa1,	// (0x00025a84) status_pane_g3

0x0004,

0xf7b3,	// (0x00030796) status_pane_g_ParamLimits

0xf7b3,	// (0x00030796) status_pane_g

0xd4ef,	// (0x0002e4d2) title_pane_ParamLimits

0xd4ef,	// (0x0002e4d2) title_pane

0xd54c,	// (0x0002e52f) uni_indicator_pane_ParamLimits

0xd54c,	// (0x0002e52f) uni_indicator_pane

0x408e,	// (0x00025071) bg_list_pane_ParamLimits

0x408e,	// (0x00025071) bg_list_pane

0xb72e,	// (0x0002c711) find_pane

0xc43b,	// (0x0002d41e) listscroll_app_pane_ParamLimits

0xc43b,	// (0x0002d41e) listscroll_app_pane

0x40c2,	// (0x000250a5) listscroll_form_pane

0xb736,	// (0x0002c719) listscroll_gen_pane_ParamLimits

0xb736,	// (0x0002c719) listscroll_gen_pane

0x40c2,	// (0x000250a5) listscroll_set_pane

0x6071,	// (0x00027054) main_idle_act_pane

0x3d6a,	// (0x00024d4d) main_idle_trad_pane

0x3d6a,	// (0x00024d4d) main_list_empty_pane

0x40f0,	// (0x000250d3) main_midp_pane

0x40fc,	// (0x000250df) main_pane_g1_ParamLimits

0x40fc,	// (0x000250df) main_pane_g1

0xc447,	// (0x0002d42a) popup_ai_message_window_ParamLimits

0xc447,	// (0x0002d42a) popup_ai_message_window

0xc4e7,	// (0x0002d4ca) popup_fep_china_uni_window_ParamLimits

0xc4e7,	// (0x0002d4ca) popup_fep_china_uni_window

0x421a,	// (0x000251fd) popup_fep_japan_candidate_window_ParamLimits

0x421a,	// (0x000251fd) popup_fep_japan_candidate_window

0x4244,	// (0x00025227) popup_fep_japan_predictive_window_ParamLimits

0x4244,	// (0x00025227) popup_fep_japan_predictive_window

0xc547,	// (0x0002d52a) popup_find_window

0xc564,	// (0x0002d547) popup_grid_graphic_window_ParamLimits

0xc564,	// (0x0002d547) popup_grid_graphic_window

0x42b5,	// (0x00025298) popup_large_graphic_colour_window

0xc608,	// (0x0002d5eb) popup_menu_window_ParamLimits

0xc608,	// (0x0002d5eb) popup_menu_window

0xc7f4,	// (0x0002d7d7) popup_note_image_window

0xc7b4,	// (0x0002d797) popup_note_wait_window_ParamLimits

0xc7b4,	// (0x0002d797) popup_note_wait_window

0xc80c,	// (0x0002d7ef) popup_note_window_ParamLimits

0xc80c,	// (0x0002d7ef) popup_note_window

0xc8ba,	// (0x0002d89d) popup_query_code_window_ParamLimits

0xc8ba,	// (0x0002d89d) popup_query_code_window

0x4521,	// (0x00025504) popup_query_data_code_window_ParamLimits

0x4521,	// (0x00025504) popup_query_data_code_window

0xc8fa,	// (0x0002d8dd) popup_query_data_window_ParamLimits

0xc8fa,	// (0x0002d8dd) popup_query_data_window

0xc98e,	// (0x0002d971) popup_query_sat_info_window_ParamLimits

0xc98e,	// (0x0002d971) popup_query_sat_info_window

0xca39,	// (0x0002da1c) popup_snote_single_graphic_window_ParamLimits

0xca39,	// (0x0002da1c) popup_snote_single_graphic_window

0xca39,	// (0x0002da1c) popup_snote_single_text_window_ParamLimits

0xca39,	// (0x0002da1c) popup_snote_single_text_window

0x45bc,	// (0x0002559f) popup_sub_window_general

0x4702,	// (0x000256e5) popup_window_general_ParamLimits

0x4702,	// (0x000256e5) popup_window_general

0x471b,	// (0x000256fe) power_save_pane

0xc2cb,	// (0x0002d2ae) control_pane_g1_ParamLimits

0xc2cb,	// (0x0002d2ae) control_pane_g1

0x1f37,	// (0x00022f1a) control_pane_g2_ParamLimits

0x1f37,	// (0x00022f1a) control_pane_g2

0x4037,	// (0x0002501a) control_pane_g3_ParamLimits

0x4037,	// (0x0002501a) control_pane_g3

0x0007,

0xf79b,	// (0x0003077e) control_pane_g_ParamLimits

0xf79b,	// (0x0003077e) control_pane_g

0xc334,	// (0x0002d317) control_pane_t1_ParamLimits

0xc334,	// (0x0002d317) control_pane_t1

0xc392,	// (0x0002d375) control_pane_t2_ParamLimits

0xc392,	// (0x0002d375) control_pane_t2

0x0002,

0xf7ac,	// (0x0003078f) control_pane_t_ParamLimits

0xf7ac,	// (0x0003078f) control_pane_t

0x3f58,	// (0x00024f3b) navi_navi_volume_pane_cp1

0x3f61,	// (0x00024f44) status_small_icon_pane

0x3f69,	// (0x00024f4c) status_small_pane_g1_ParamLimits

0x3f69,	// (0x00024f4c) status_small_pane_g1

0x3f9d,	// (0x00024f80) status_small_pane_g2_ParamLimits

0x3f9d,	// (0x00024f80) status_small_pane_g2

0x3fa9,	// (0x00024f8c) status_small_pane_g3_ParamLimits

0x3fa9,	// (0x00024f8c) status_small_pane_g3

0x3fb5,	// (0x00024f98) status_small_pane_g4_ParamLimits

0x3fb5,	// (0x00024f98) status_small_pane_g4

0x3fc1,	// (0x00024fa4) status_small_pane_g5_ParamLimits

0x3fc1,	// (0x00024fa4) status_small_pane_g5

0x3fd0,	// (0x00024fb3) status_small_pane_g6_ParamLimits

0x3fd0,	// (0x00024fb3) status_small_pane_g6

0x0007,

0xf78a,	// (0x0003076d) status_small_pane_g_ParamLimits

0xf78a,	// (0x0003076d) status_small_pane_g

0x4000,	// (0x00024fe3) status_small_pane_t1

0x4023,	// (0x00025006) status_small_wait_pane_ParamLimits

0x4023,	// (0x00025006) status_small_wait_pane

0xc140,	// (0x0002d123) aid_levels_signal_ParamLimits

0xc140,	// (0x0002d123) aid_levels_signal

0xc158,	// (0x0002d13b) signal_pane_g1_ParamLimits

0xc158,	// (0x0002d13b) signal_pane_g1

0xc173,	// (0x0002d156) signal_pane_g2_ParamLimits

0xc173,	// (0x0002d156) signal_pane_g2

0x0001,

0xf71f,	// (0x00030702) signal_pane_g_ParamLimits

0xf71f,	// (0x00030702) signal_pane_g

0x383d,	// (0x00024820) context_pane_g1

0xbb83,	// (0x0002cb66) title_pane_g1

0xbbb8,	// (0x0002cb9b) title_pane_t1

0x11c6,	// (0x000221a9) title_pane_t2

0x11ec,	// (0x000221cf) title_pane_t3

0x0002,

0xf573,	// (0x00030556) title_pane_t

0xd574,	// (0x0002e557) aid_levels_battery_ParamLimits

0xd574,	// (0x0002e557) aid_levels_battery

0xd590,	// (0x0002e573) battery_pane_g1_ParamLimits

0xd590,	// (0x0002e573) battery_pane_g1

0xd5ad,	// (0x0002e590) battery_pane_g2_ParamLimits

0xd5ad,	// (0x0002e590) battery_pane_g2

0x0001,

0xf7be,	// (0x000307a1) battery_pane_g_ParamLimits

0xf7be,	// (0x000307a1) battery_pane_g

0xd7d0,	// (0x0002e7b3) uni_indicator_pane_g1

0xd7e5,	// (0x0002e7c8) uni_indicator_pane_g2

0xd7fa,	// (0x0002e7dd) uni_indicator_pane_g3

0x0005,

0xf928,	// (0x0003090b) uni_indicator_pane_g

0x3bd8,	// (0x00024bbb) navi_icon_pane_ParamLimits

0x3bd8,	// (0x00024bbb) navi_icon_pane

0x3b1f,	// (0x00024b02) navi_midp_pane

0x3bf4,	// (0x00024bd7) navi_navi_pane

0x3bfe,	// (0x00024be1) navi_text_pane_ParamLimits

0x3bfe,	// (0x00024be1) navi_text_pane

0xe61c,	// (0x0002f5ff) status_small_wait_pane_g1

0x16c0,	// (0x000226a3) status_small_wait_pane_g2

0x0001,

0xf923,	// (0x00030906) status_small_wait_pane_g

0xd76f,	// (0x0002e752) navi_navi_icon_text_pane

0xd777,	// (0x0002e75a) navi_navi_pane_g1_ParamLimits

0xd777,	// (0x0002e75a) navi_navi_pane_g1

0xd789,	// (0x0002e76c) navi_navi_pane_g2_ParamLimits

0xd789,	// (0x0002e76c) navi_navi_pane_g2

0x0001,

0xf8f1,	// (0x000308d4) navi_navi_pane_g_ParamLimits

0xf8f1,	// (0x000308d4) navi_navi_pane_g

0x5b47,	// (0x00026b2a) navi_navi_tabs_pane

0xd79b,	// (0x0002e77e) navi_navi_text_pane

0xd76f,	// (0x0002e752) navi_navi_volume_pane

0xd75d,	// (0x0002e740) navi_text_pane_t1

0xd751,	// (0x0002e734) navi_icon_pane_g1

0x5a38,	// (0x00026a1b) navi_navi_text_pane_t1

0xcca8,	// (0x0002dc8b) navi_navi_volume_pane_g1

0xccb0,	// (0x0002dc93) volume_small_pane

0xd6ad,	// (0x0002e690) navi_navi_icon_text_pane_g1

0xd6b5,	// (0x0002e698) navi_navi_icon_text_pane_t1

0x3bf4,	// (0x00024bd7) navi_tabs_2_long_pane

0x3bf4,	// (0x00024bd7) navi_tabs_2_pane

0x3bf4,	// (0x00024bd7) navi_tabs_3_long_pane

0x3bf4,	// (0x00024bd7) navi_tabs_3_pane

0x3bf4,	// (0x00024bd7) navi_tabs_4_pane

0xcc88,	// (0x0002dc6b) tabs_2_active_pane_ParamLimits

0xcc88,	// (0x0002dc6b) tabs_2_active_pane

0xcc98,	// (0x0002dc7b) tabs_2_passive_pane_ParamLimits

0xcc98,	// (0x0002dc7b) tabs_2_passive_pane

0xcc56,	// (0x0002dc39) tabs_3_active_pane_ParamLimits

0xcc56,	// (0x0002dc39) tabs_3_active_pane

0xcc66,	// (0x0002dc49) tabs_3_passive_pane_ParamLimits

0xcc66,	// (0x0002dc49) tabs_3_passive_pane

0xcc77,	// (0x0002dc5a) tabs_3_passive_pane_cp_ParamLimits

0xcc77,	// (0x0002dc5a) tabs_3_passive_pane_cp

0xcc12,	// (0x0002dbf5) tabs_4_active_pane_ParamLimits

0xcc12,	// (0x0002dbf5) tabs_4_active_pane

0xcc23,	// (0x0002dc06) tabs_4_passive_pane_ParamLimits

0xcc23,	// (0x0002dc06) tabs_4_passive_pane

0xcc34,	// (0x0002dc17) tabs_4_passive_pane_cp_ParamLimits

0xcc34,	// (0x0002dc17) tabs_4_passive_pane_cp

0xcc45,	// (0x0002dc28) tabs_4_passive_pane_cp2_ParamLimits

0xcc45,	// (0x0002dc28) tabs_4_passive_pane_cp2

0xcbee,	// (0x0002dbd1) tabs_2_long_active_pane_ParamLimits

0xcbee,	// (0x0002dbd1) tabs_2_long_active_pane

0xcc00,	// (0x0002dbe3) tabs_2_long_passive_pane_ParamLimits

0xcc00,	// (0x0002dbe3) tabs_2_long_passive_pane

0xcba3,	// (0x0002db86) tabs_3_long_active_pane_ParamLimits

0xcba3,	// (0x0002db86) tabs_3_long_active_pane

0xcbbc,	// (0x0002db9f) tabs_3_long_passive_pane_ParamLimits

0xcbbc,	// (0x0002db9f) tabs_3_long_passive_pane

0xcbd5,	// (0x0002dbb8) tabs_3_long_passive_pane_cp_ParamLimits

0xcbd5,	// (0x0002dbb8) tabs_3_long_passive_pane_cp

0x2190,	// (0x00023173) volume_small_pane_g1

0xcb52,	// (0x0002db35) volume_small_pane_g2

0xcb5b,	// (0x0002db3e) volume_small_pane_g3

0xcb64,	// (0x0002db47) volume_small_pane_g4

0xcb6d,	// (0x0002db50) volume_small_pane_g5

0xcb76,	// (0x0002db59) volume_small_pane_g6

0xcb7f,	// (0x0002db62) volume_small_pane_g7

0xcb88,	// (0x0002db6b) volume_small_pane_g8

0xcb91,	// (0x0002db74) volume_small_pane_g9

0xcb9a,	// (0x0002db7d) volume_small_pane_g10

0x0009,

0xf8bd,	// (0x000308a0) volume_small_pane_g

0x150a,	// (0x000224ed) bg_active_tab_pane_cp2_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp2

0xbc44,	// (0x0002cc27) tabs_3_active_pane_g1

0xbc4c,	// (0x0002cc2f) tabs_3_active_pane_t1

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp2_ParamLimits

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp2

0xbc44,	// (0x0002cc27) tabs_3_passive_pane_g1

0xbc4c,	// (0x0002cc2f) tabs_3_passive_pane_t1

0x150a,	// (0x000224ed) bg_active_tab_pane_cp3_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp3

0xbc5e,	// (0x0002cc41) tabs_4_active_pane_g1

0xbc66,	// (0x0002cc49) tabs_4_active_pane_t1

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp3_ParamLimits

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp3

0xbc5e,	// (0x0002cc41) tabs_4_1_passive_pane_g1

0xbc66,	// (0x0002cc49) tabs_4_1_passive_pane_t1

0x40f0,	// (0x000250d3) list_highlight_pane_cp2

0xd8b8,	// (0x0002e89b) list_set_pane_ParamLimits

0xd8b8,	// (0x0002e89b) list_set_pane

0xd980,	// (0x0002e963) main_pane_set_t1_ParamLimits

0xd980,	// (0x0002e963) main_pane_set_t1

0xd9a0,	// (0x0002e983) main_pane_set_t2_ParamLimits

0xd9a0,	// (0x0002e983) main_pane_set_t2

0xd9b4,	// (0x0002e997) main_pane_set_t3_ParamLimits

0xd9b4,	// (0x0002e997) main_pane_set_t3

0xd9c8,	// (0x0002e9ab) main_pane_set_t4_ParamLimits

0xd9c8,	// (0x0002e9ab) main_pane_set_t4

0x0003,

0xf98d,	// (0x00030970) main_pane_set_t_ParamLimits

0xf98d,	// (0x00030970) main_pane_set_t

0xd9dc,	// (0x0002e9bf) setting_code_pane

0x61d1,	// (0x000271b4) setting_slider_graphic_pane

0x61d1,	// (0x000271b4) setting_slider_pane

0x61d1,	// (0x000271b4) setting_text_pane

0x61d1,	// (0x000271b4) setting_volume_pane

0x1240,	// (0x00022223) volume_set_pane

0x11fe,	// (0x000221e1) bg_set_opt_pane_cp

0x124a,	// (0x0002222d) setting_slider_pane_t1

0x1260,	// (0x00022243) setting_slider_pane_t2

0x127a,	// (0x0002225d) setting_slider_pane_t3

0x0002,

0xf57a,	// (0x0003055d) setting_slider_pane_t

0x1292,	// (0x00022275) slider_set_pane

0xe626,	// (0x0002f609) bg_set_opt_pane_cp2

0x12a8,	// (0x0002228b) setting_slider_graphic_pane_g1

0x12b1,	// (0x00022294) setting_slider_graphic_pane_t1

0x12c1,	// (0x000222a4) setting_slider_graphic_pane_t2

0x0001,

0xf581,	// (0x00030564) setting_slider_graphic_pane_t

0x12d1,	// (0x000222b4) slider_set_pane_cp

0xe626,	// (0x0002f609) input_focus_pane_cp1

0x6058,	// (0x0002703b) list_set_text_pane

0xe61c,	// (0x0002f5ff) setting_text_pane_g1

0xe626,	// (0x0002f609) input_focus_pane_cp2

0xe61c,	// (0x0002f5ff) setting_code_pane_g1

0x12d9,	// (0x000222bc) setting_code_pane_t1

0xf52e,	// (0x00030511) set_text_pane_t1_ParamLimits

0xf52e,	// (0x00030511) set_text_pane_t1

0x3173,	// (0x00024156) set_opt_bg_pane_g1

0x317b,	// (0x0002415e) set_opt_bg_pane_g2

0x6030,	// (0x00027013) set_opt_bg_pane_g3

0x318b,	// (0x0002416e) set_opt_bg_pane_g4

0x3193,	// (0x00024176) set_opt_bg_pane_g5

0x319b,	// (0x0002417e) set_opt_bg_pane_g6

0x603a,	// (0x0002701d) set_opt_bg_pane_g7

0x6044,	// (0x00027027) set_opt_bg_pane_g8

0x604e,	// (0x00027031) set_opt_bg_pane_g9

0x0008,

0xf97a,	// (0x0003095d) set_opt_bg_pane_g

0x6023,	// (0x00027006) slider_set_pane_g1

0x2374,	// (0x00023357) slider_set_pane_g2

0x0006,

0xf96b,	// (0x0003094e) slider_set_pane_g

0x22fc,	// (0x000232df) volume_set_pane_g1

0x2306,	// (0x000232e9) volume_set_pane_g2

0x2310,	// (0x000232f3) volume_set_pane_g3

0x231a,	// (0x000232fd) volume_set_pane_g4

0x2324,	// (0x00023307) volume_set_pane_g5

0x232e,	// (0x00023311) volume_set_pane_g6

0x2338,	// (0x0002331b) volume_set_pane_g7

0x2342,	// (0x00023325) volume_set_pane_g8

0x234c,	// (0x0002332f) volume_set_pane_g9

0x2356,	// (0x00023339) volume_set_pane_g10

0x0009,

0xf943,	// (0x00030926) volume_set_pane_g

0xbc78,	// (0x0002cc5b) indicator_pane_ParamLimits

0xbc78,	// (0x0002cc5b) indicator_pane

0xbca4,	// (0x0002cc87) main_idle_pane_g2_ParamLimits

0xbca4,	// (0x0002cc87) main_idle_pane_g2

0xbcdc,	// (0x0002ccbf) main_pane_idle_g1_ParamLimits

0xbcdc,	// (0x0002ccbf) main_pane_idle_g1

0x1329,	// (0x0002230c) popup_clock_digital_analogue_window_ParamLimits

0x1329,	// (0x0002230c) popup_clock_digital_analogue_window

0xbd0a,	// (0x0002cced) soft_indicator_pane_ParamLimits

0xbd0a,	// (0x0002cced) soft_indicator_pane

0xbd26,	// (0x0002cd09) wallpaper_pane_ParamLimits

0xbd26,	// (0x0002cd09) wallpaper_pane

0xe61c,	// (0x0002f5ff) wallpaper_pane_g1

0xbd38,	// (0x0002cd1b) indicator_pane_g1_ParamLimits

0xbd38,	// (0x0002cd1b) indicator_pane_g1

0x6495,	// (0x00027478) navi_navi_icon_text_pane_srt_g1

0x137d,	// (0x00022360) soft_indicator_pane_t1

0x1397,	// (0x0002237a) aid_ps_area_pane

0xbd51,	// (0x0002cd34) aid_ps_clock_pane

0x13b6,	// (0x00022399) aid_ps_indicator_pane

0x13c2,	// (0x000223a5) indicator_ps_pane_ParamLimits

0x13c2,	// (0x000223a5) indicator_ps_pane

0x13d1,	// (0x000223b4) power_save_pane_g1_ParamLimits

0x13d1,	// (0x000223b4) power_save_pane_g1

0x13dd,	// (0x000223c0) power_save_pane_g2_ParamLimits

0x13dd,	// (0x000223c0) power_save_pane_g2

0x0d31,	// (0x00021d14) aid_navinavi_width_pane

0x1397,	// (0x0002237a) aid_ps_area_pane_ParamLimits

0x0001,

0xf586,	// (0x00030569) power_save_pane_g_ParamLimits

0xf586,	// (0x00030569) power_save_pane_g

0x13eb,	// (0x000223ce) power_save_pane_t1_ParamLimits

0x13eb,	// (0x000223ce) power_save_pane_t1

0xbd51,	// (0x0002cd34) aid_ps_clock_pane_ParamLimits

0x13b6,	// (0x00022399) aid_ps_indicator_pane_ParamLimits

0x13fd,	// (0x000223e0) power_save_pane_t4_ParamLimits

0x13fd,	// (0x000223e0) power_save_pane_t4

0x0001,

0xf58b,	// (0x0003056e) power_save_pane_t_ParamLimits

0xf58b,	// (0x0003056e) power_save_pane_t

0x1427,	// (0x0002240a) power_save_t3_ParamLimits

0x1427,	// (0x0002240a) power_save_t3

0x1412,	// (0x000223f5) power_save_t2_ParamLimits

0x1412,	// (0x000223f5) power_save_t2

0x143c,	// (0x0002241f) indicator_ps_pane_g1

0xbd5f,	// (0x0002cd42) ai_gene_pane_ParamLimits

0xbd5f,	// (0x0002cd42) ai_gene_pane

0xbd76,	// (0x0002cd59) ai_links_pane_ParamLimits

0xbd76,	// (0x0002cd59) ai_links_pane

0xbd8e,	// (0x0002cd71) indicator_pane_cp1_ParamLimits

0xbd8e,	// (0x0002cd71) indicator_pane_cp1

0xbd9d,	// (0x0002cd80) main_pane_idle_g1_cp_ParamLimits

0xbd9d,	// (0x0002cd80) main_pane_idle_g1_cp

0x1475,	// (0x00022458) popup_ai_links_title_window

0xbdb5,	// (0x0002cd98) soft_indicator_pane_cp1_ParamLimits

0xbdb5,	// (0x0002cd98) soft_indicator_pane_cp1

0x5df6,	// (0x00026dd9) ai_links_pane_g1

0x5dff,	// (0x00026de2) grid_ai_links_pane

0xd7c7,	// (0x0002e7aa) ai_gene_pane_1

0x5de4,	// (0x00026dc7) ai_gene_pane_2

0x5ded,	// (0x00026dd0) list_highlight_pane_cp4

0xd7a3,	// (0x0002e786) cell_ai_link_pane_ParamLimits

0xd7a3,	// (0x0002e786) cell_ai_link_pane

0x5db3,	// (0x00026d96) cell_ai_link_pane_g1

0x16c0,	// (0x000226a3) cell_ai_link_pane_g2

0x0001,

0xf91e,	// (0x00030901) cell_ai_link_pane_g

0xe626,	// (0x0002f609) grid_highlight_cp2

0xe626,	// (0x0002f609) bg_popup_sub_pane_cp1

0x1498,	// (0x0002247b) popup_ai_links_title_window_t1

0x5cff,	// (0x00026ce2) ai_gene_pane_1_g1_ParamLimits

0x5cff,	// (0x00026ce2) ai_gene_pane_1_g1

0x5d0b,	// (0x00026cee) ai_gene_pane_1_g2_ParamLimits

0x5d0b,	// (0x00026cee) ai_gene_pane_1_g2

0x0001,

0xf914,	// (0x000308f7) ai_gene_pane_1_g_ParamLimits

0xf914,	// (0x000308f7) ai_gene_pane_1_g

0x5d18,	// (0x00026cfb) ai_gene_pane_1_t1_ParamLimits

0x5d18,	// (0x00026cfb) ai_gene_pane_1_t1

0x5d4c,	// (0x00026d2f) grid_ai_soft_ind_pane

0x5cea,	// (0x00026ccd) ai_gene_pane_2_t1_ParamLimits

0x5cea,	// (0x00026ccd) ai_gene_pane_2_t1

0xbdc9,	// (0x0002cdac) main_pane_empty_t1_ParamLimits

0xbdc9,	// (0x0002cdac) main_pane_empty_t1

0xbde1,	// (0x0002cdc4) main_pane_empty_t2_ParamLimits

0xbde1,	// (0x0002cdc4) main_pane_empty_t2

0xbdf6,	// (0x0002cdd9) main_pane_empty_t3_ParamLimits

0xbdf6,	// (0x0002cdd9) main_pane_empty_t3

0xbe08,	// (0x0002cdeb) main_pane_empty_t4_ParamLimits

0xbe08,	// (0x0002cdeb) main_pane_empty_t4

0xbe1a,	// (0x0002cdfd) main_pane_empty_t5_ParamLimits

0xbe1a,	// (0x0002cdfd) main_pane_empty_t5

0x0004,

0xf590,	// (0x00030573) main_pane_empty_t_ParamLimits

0xf590,	// (0x00030573) main_pane_empty_t

0x31c4,	// (0x000241a7) bg_popup_window_pane_ParamLimits

0x31c4,	// (0x000241a7) bg_popup_window_pane

0x5a46,	// (0x00026a29) find_popup_pane_cp2_ParamLimits

0x5a46,	// (0x00026a29) find_popup_pane_cp2

0x5a52,	// (0x00026a35) heading_pane_ParamLimits

0x5a52,	// (0x00026a35) heading_pane

0xe626,	// (0x0002f609) bg_popup_sub_pane

0xd6d2,	// (0x0002e6b5) bg_popup_window_pane_g1_ParamLimits

0xd6d2,	// (0x0002e6b5) bg_popup_window_pane_g1

0xd6e1,	// (0x0002e6c4) bg_popup_window_pane_g2_ParamLimits

0xd6e1,	// (0x0002e6c4) bg_popup_window_pane_g2

0xd6ed,	// (0x0002e6d0) bg_popup_window_pane_g3_ParamLimits

0xd6ed,	// (0x0002e6d0) bg_popup_window_pane_g3

0xd6f9,	// (0x0002e6dc) bg_popup_window_pane_g4_ParamLimits

0xd6f9,	// (0x0002e6dc) bg_popup_window_pane_g4

0xd708,	// (0x0002e6eb) bg_popup_window_pane_g5_ParamLimits

0xd708,	// (0x0002e6eb) bg_popup_window_pane_g5

0xd718,	// (0x0002e6fb) bg_popup_window_pane_g6_ParamLimits

0xd718,	// (0x0002e6fb) bg_popup_window_pane_g6

0xd724,	// (0x0002e707) bg_popup_window_pane_g7_ParamLimits

0xd724,	// (0x0002e707) bg_popup_window_pane_g7

0xd733,	// (0x0002e716) bg_popup_window_pane_g8_ParamLimits

0xd733,	// (0x0002e716) bg_popup_window_pane_g8

0xd742,	// (0x0002e725) bg_popup_window_pane_g9_ParamLimits

0xd742,	// (0x0002e725) bg_popup_window_pane_g9

0x5a2c,	// (0x00026a0f) bg_popup_window_pane_g10_ParamLimits

0x5a2c,	// (0x00026a0f) bg_popup_window_pane_g10

0x0009,

0xf8dc,	// (0x000308bf) bg_popup_window_pane_g_ParamLimits

0xf8dc,	// (0x000308bf) bg_popup_window_pane_g

0x5955,	// (0x00026938) bg_popup_heading_pane_ParamLimits

0x5955,	// (0x00026938) bg_popup_heading_pane

0x23ba,	// (0x0002339d) tabs_4_passive_pane_cp_srt_ParamLimits

0x23ba,	// (0x0002339d) tabs_4_passive_pane_cp_srt

0x23cc,	// (0x000233af) tabs_4_passive_pane_srt_ParamLimits

0x5969,	// (0x0002694c) heading_pane_g2

0x23cc,	// (0x000233af) tabs_4_passive_pane_srt

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp3_srt

0x5971,	// (0x00026954) heading_pane_t1_ParamLimits

0x5971,	// (0x00026954) heading_pane_t1

0x5988,	// (0x0002696b) heading_pane_t2_ParamLimits

0x5988,	// (0x0002696b) heading_pane_t2

0x0001,

0xf8d7,	// (0x000308ba) heading_pane_t_ParamLimits

0xf8d7,	// (0x000308ba) heading_pane_t

0x5480,	// (0x00026463) bg_popup_heading_pane_g1

0x552f,	// (0x00026512) bg_popup_heading_pane_g2

0x5539,	// (0x0002651c) bg_popup_heading_pane_g3

0x5543,	// (0x00026526) bg_popup_heading_pane_g4

0x554d,	// (0x00026530) bg_popup_heading_pane_g5

0x5557,	// (0x0002653a) bg_popup_heading_pane_g6

0x555f,	// (0x00026542) bg_popup_heading_pane_g7

0x5567,	// (0x0002654a) bg_popup_heading_pane_g8

0x5571,	// (0x00026554) bg_popup_heading_pane_g9

0x0008,

0xf893,	// (0x00030876) bg_popup_heading_pane_g

0x4c38,	// (0x00025c1b) bg_popup_sub_pane_g1

0x4c40,	// (0x00025c23) bg_popup_sub_pane_g2

0x4c48,	// (0x00025c2b) bg_popup_sub_pane_g3

0x4c50,	// (0x00025c33) bg_popup_sub_pane_g4

0x4c58,	// (0x00025c3b) bg_popup_sub_pane_g5

0x4c60,	// (0x00025c43) bg_popup_sub_pane_g6

0x4c68,	// (0x00025c4b) bg_popup_sub_pane_g7

0x4c70,	// (0x00025c53) bg_popup_sub_pane_g8

0x4c78,	// (0x00025c5b) bg_popup_sub_pane_g9

0x0008,

0xf86d,	// (0x00030850) bg_popup_sub_pane_g

0x150a,	// (0x000224ed) bg_popup_window_pane_cp5_ParamLimits

0x150a,	// (0x000224ed) bg_popup_window_pane_cp5

0x1526,	// (0x00022509) popup_note_window_g1_ParamLimits

0x1526,	// (0x00022509) popup_note_window_g1

0x1532,	// (0x00022515) popup_note_window_t1_ParamLimits

0x1532,	// (0x00022515) popup_note_window_t1

0x1548,	// (0x0002252b) popup_note_window_t2_ParamLimits

0x1548,	// (0x0002252b) popup_note_window_t2

0x155e,	// (0x00022541) popup_note_window_t3_ParamLimits

0x155e,	// (0x00022541) popup_note_window_t3

0x1574,	// (0x00022557) popup_note_window_t4_ParamLimits

0x1574,	// (0x00022557) popup_note_window_t4

0x159c,	// (0x0002257f) popup_note_window_t5_ParamLimits

0x159c,	// (0x0002257f) popup_note_window_t5

0x0004,

0xf59b,	// (0x0003057e) popup_note_window_t_ParamLimits

0xf59b,	// (0x0003057e) popup_note_window_t

0x15c0,	// (0x000225a3) bg_popup_window_pane_cp6_ParamLimits

0x15c0,	// (0x000225a3) bg_popup_window_pane_cp6

0x53fc,	// (0x000263df) popup_note_image_window_g1_ParamLimits

0x53fc,	// (0x000263df) popup_note_image_window_g1

0x5408,	// (0x000263eb) popup_note_image_window_g2_ParamLimits

0x5408,	// (0x000263eb) popup_note_image_window_g2

0x0001,

0xf861,	// (0x00030844) popup_note_image_window_g_ParamLimits

0xf861,	// (0x00030844) popup_note_image_window_g

0x5421,	// (0x00026404) popup_note_image_window_t1_ParamLimits

0x5421,	// (0x00026404) popup_note_image_window_t1

0x543a,	// (0x0002641d) popup_note_image_window_t2_ParamLimits

0x543a,	// (0x0002641d) popup_note_image_window_t2

0x5453,	// (0x00026436) popup_note_image_window_t3_ParamLimits

0x5453,	// (0x00026436) popup_note_image_window_t3

0x0002,

0xf866,	// (0x00030849) popup_note_image_window_t_ParamLimits

0xf866,	// (0x00030849) popup_note_image_window_t

0x52bc,	// (0x0002629f) bg_popup_window_pane_cp7_ParamLimits

0x52bc,	// (0x0002629f) bg_popup_window_pane_cp7

0x52ec,	// (0x000262cf) popup_note_wait_window_g1_ParamLimits

0x52ec,	// (0x000262cf) popup_note_wait_window_g1

0x52f8,	// (0x000262db) popup_note_wait_window_g2_ParamLimits

0x52f8,	// (0x000262db) popup_note_wait_window_g2

0x0002,

0xf84f,	// (0x00030832) popup_note_wait_window_g_ParamLimits

0xf84f,	// (0x00030832) popup_note_wait_window_g

0x5310,	// (0x000262f3) popup_note_wait_window_t1_ParamLimits

0x5310,	// (0x000262f3) popup_note_wait_window_t1

0x5337,	// (0x0002631a) popup_note_wait_window_t2_ParamLimits

0x5337,	// (0x0002631a) popup_note_wait_window_t2

0x5355,	// (0x00026338) popup_note_wait_window_t3_ParamLimits

0x5355,	// (0x00026338) popup_note_wait_window_t3

0x5368,	// (0x0002634b) popup_note_wait_window_t4_ParamLimits

0x5368,	// (0x0002634b) popup_note_wait_window_t4

0x0004,

0xf856,	// (0x00030839) popup_note_wait_window_t_ParamLimits

0xf856,	// (0x00030839) popup_note_wait_window_t

0x538d,	// (0x00026370) wait_bar_pane_ParamLimits

0x538d,	// (0x00026370) wait_bar_pane

0xe626,	// (0x0002f609) wait_anim_pane

0xe626,	// (0x0002f609) wait_border_pane

0xe61c,	// (0x0002f5ff) wait_anim_pane_g1

0xe61c,	// (0x0002f5ff) wait_anim_pane_g2

0x0001,

0xf71a,	// (0x000306fd) wait_anim_pane_g

0x5260,	// (0x00026243) wait_border_pane_g1

0x526b,	// (0x0002624e) wait_border_pane_g2

0x5274,	// (0x00026257) wait_border_pane_g3

0x0002,

0xf848,	// (0x0003082b) wait_border_pane_g

0x50ca,	// (0x000260ad) bg_popup_window_pane_cp16_ParamLimits

0x50ca,	// (0x000260ad) bg_popup_window_pane_cp16

0x51ca,	// (0x000261ad) indicator_popup_pane_cp4_ParamLimits

0x51ca,	// (0x000261ad) indicator_popup_pane_cp4

0x51de,	// (0x000261c1) popup_query_data_window_t1_ParamLimits

0x51de,	// (0x000261c1) popup_query_data_window_t1

0x51f0,	// (0x000261d3) popup_query_data_window_t2_ParamLimits

0x51f0,	// (0x000261d3) popup_query_data_window_t2

0x5209,	// (0x000261ec) popup_query_data_window_t3_ParamLimits

0x5209,	// (0x000261ec) popup_query_data_window_t3

0x0002,

0xf841,	// (0x00030824) popup_query_data_window_t_ParamLimits

0xf841,	// (0x00030824) popup_query_data_window_t

0x5223,	// (0x00026206) query_popup_data_pane_ParamLimits

0x5223,	// (0x00026206) query_popup_data_pane

0x5237,	// (0x0002621a) query_popup_data_pane_cp1_ParamLimits

0x5237,	// (0x0002621a) query_popup_data_pane_cp1

0x50ca,	// (0x000260ad) bg_popup_window_pane_cp10_ParamLimits

0x50ca,	// (0x000260ad) bg_popup_window_pane_cp10

0x50fc,	// (0x000260df) indicator_popup_pane_ParamLimits

0x50fc,	// (0x000260df) indicator_popup_pane

0x511e,	// (0x00026101) popup_query_code_window_t1_ParamLimits

0x511e,	// (0x00026101) popup_query_code_window_t1

0x5138,	// (0x0002611b) popup_query_code_window_t2_ParamLimits

0x5138,	// (0x0002611b) popup_query_code_window_t2

0x5181,	// (0x00026164) popup_query_code_window_t3_ParamLimits

0x5181,	// (0x00026164) popup_query_code_window_t3

0x0002,

0xf83a,	// (0x0003081d) popup_query_code_window_t_ParamLimits

0xf83a,	// (0x0003081d) popup_query_code_window_t

0x51b0,	// (0x00026193) query_popup_pane_ParamLimits

0x51b0,	// (0x00026193) query_popup_pane

0x15c0,	// (0x000225a3) bg_popup_window_pane_cp15_ParamLimits

0x15c0,	// (0x000225a3) bg_popup_window_pane_cp15

0x15e0,	// (0x000225c3) indicator_popup_pane_cp1_ParamLimits

0x15e0,	// (0x000225c3) indicator_popup_pane_cp1

0x15f3,	// (0x000225d6) indicator_popup_pane_cp2_ParamLimits

0x15f3,	// (0x000225d6) indicator_popup_pane_cp2

0x160e,	// (0x000225f1) popup_query_data_code_window_g1_ParamLimits

0x160e,	// (0x000225f1) popup_query_data_code_window_g1

0x1621,	// (0x00022604) popup_query_data_code_window_t1_ParamLimits

0x1621,	// (0x00022604) popup_query_data_code_window_t1

0x1633,	// (0x00022616) popup_query_data_code_window_t2_ParamLimits

0x1633,	// (0x00022616) popup_query_data_code_window_t2

0x1645,	// (0x00022628) popup_query_data_code_window_t3_ParamLimits

0x1645,	// (0x00022628) popup_query_data_code_window_t3

0x165b,	// (0x0002263e) popup_query_data_code_window_t4_ParamLimits

0x165b,	// (0x0002263e) popup_query_data_code_window_t4

0x0003,

0xf5a6,	// (0x00030589) popup_query_data_code_window_t_ParamLimits

0xf5a6,	// (0x00030589) popup_query_data_code_window_t

0x3b94,	// (0x00024b77) list_single_midp_graphic_pane_g3

0x1675,	// (0x00022658) query_popup_data_pane_cp2_ParamLimits

0x1688,	// (0x0002266b) query_popup_pane_cp2_ParamLimits

0x1688,	// (0x0002266b) query_popup_pane_cp2

0xe626,	// (0x0002f609) bg_popup_window_pane_cp11

0x50c2,	// (0x000260a5) heading_pane_cp5

0x1778,	// (0x0002275b) listscroll_popup_info_pane

0xe626,	// (0x0002f609) input_focus_pane_cp3

0x16a3,	// (0x00022686) query_popup_pane_t1

0x16b1,	// (0x00022694) list_popup_info_pane_ParamLimits

0x16b1,	// (0x00022694) list_popup_info_pane

0x16c0,	// (0x000226a3) listscroll_popup_info_pane_g1

0x16c8,	// (0x000226ab) scroll_pane_cp7

0x16d2,	// (0x000226b5) popup_info_list_pane_t1_ParamLimits

0x16d2,	// (0x000226b5) popup_info_list_pane_t1

0x16ec,	// (0x000226cf) popup_info_list_pane_t2_ParamLimits

0x16ec,	// (0x000226cf) popup_info_list_pane_t2

0x0001,

0xf5af,	// (0x00030592) popup_info_list_pane_t_ParamLimits

0xf5af,	// (0x00030592) popup_info_list_pane_t

0xe626,	// (0x0002f609) bg_popup_window_pane_cp12

0x64af,	// (0x00027492) find_popup_pane

0x11fe,	// (0x000221e1) bg_popup_window_pane_cp3

0x1706,	// (0x000226e9) heading_pane_cp3

0x1712,	// (0x000226f5) listscroll_popup_graphic_pane

0xe626,	// (0x0002f609) bg_popup_window_pane_cp4

0xbe7c,	// (0x0002ce5f) heading_pane_cp4

0x1778,	// (0x0002275b) listscroll_popup_colour_pane

0xbe86,	// (0x0002ce69) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xbe86,	// (0x0002ce69) cell_large_graphic_colour_none_popup_pane

0xbe9a,	// (0x0002ce7d) grid_large_graphic_colour_popup_pane_ParamLimits

0xbe9a,	// (0x0002ce7d) grid_large_graphic_colour_popup_pane

0xbec6,	// (0x0002cea9) listscroll_popup_colour_pane_g1_ParamLimits

0xbec6,	// (0x0002cea9) listscroll_popup_colour_pane_g1

0xbedd,	// (0x0002cec0) listscroll_popup_colour_pane_g2_ParamLimits

0xbedd,	// (0x0002cec0) listscroll_popup_colour_pane_g2

0xbef4,	// (0x0002ced7) listscroll_popup_colour_pane_g3_ParamLimits

0xbef4,	// (0x0002ced7) listscroll_popup_colour_pane_g3

0xbf04,	// (0x0002cee7) listscroll_popup_colour_pane_g4_ParamLimits

0xbf04,	// (0x0002cee7) listscroll_popup_colour_pane_g4

0x0003,

0xf5b4,	// (0x00030597) listscroll_popup_colour_pane_g_ParamLimits

0xf5b4,	// (0x00030597) listscroll_popup_colour_pane_g

0x1812,	// (0x000227f5) scroll_pane_cp6_ParamLimits

0x1812,	// (0x000227f5) scroll_pane_cp6

0xbf18,	// (0x0002cefb) cell_large_graphic_colour_popup_pane_ParamLimits

0xbf18,	// (0x0002cefb) cell_large_graphic_colour_popup_pane

0x1849,	// (0x0002282c) cell_large_graphic_colour_none_popup_pane_t1

0xe626,	// (0x0002f609) grid_highlight_pane_cp5

0x1858,	// (0x0002283b) cell_large_graphic_colour_popup_pane_g1

0x1860,	// (0x00022843) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5bd,	// (0x000305a0) cell_large_graphic_colour_popup_pane_g

0x1868,	// (0x0002284b) cell_large_graphic_colour_popup_pane_g2_copy1

0x1871,	// (0x00022854) grid_highlight_pane_cp4

0x1879,	// (0x0002285c) bg_popup_window_pane_cp8_ParamLimits

0x1879,	// (0x0002285c) bg_popup_window_pane_cp8

0x1894,	// (0x00022877) popup_snote_single_text_window_g1_ParamLimits

0x1894,	// (0x00022877) popup_snote_single_text_window_g1

0x18a6,	// (0x00022889) popup_snote_single_text_window_t1_ParamLimits

0x18a6,	// (0x00022889) popup_snote_single_text_window_t1

0x18b9,	// (0x0002289c) popup_snote_single_text_window_t2_ParamLimits

0x18b9,	// (0x0002289c) popup_snote_single_text_window_t2

0x18cc,	// (0x000228af) popup_snote_single_text_window_t3_ParamLimits

0x18cc,	// (0x000228af) popup_snote_single_text_window_t3

0x1905,	// (0x000228e8) popup_snote_single_text_window_t4_ParamLimits

0x1905,	// (0x000228e8) popup_snote_single_text_window_t4

0x1939,	// (0x0002291c) popup_snote_single_text_window_t5_ParamLimits

0x1939,	// (0x0002291c) popup_snote_single_text_window_t5

0x0004,

0xf5c2,	// (0x000305a5) popup_snote_single_text_window_t_ParamLimits

0xf5c2,	// (0x000305a5) popup_snote_single_text_window_t

0x1968,	// (0x0002294b) bg_popup_window_pane_cp9_ParamLimits

0x1968,	// (0x0002294b) bg_popup_window_pane_cp9

0x1894,	// (0x00022877) popup_snote_single_graphic_window_g1_ParamLimits

0x1894,	// (0x00022877) popup_snote_single_graphic_window_g1

0x1976,	// (0x00022959) popup_snote_single_graphic_window_g2_ParamLimits

0x1976,	// (0x00022959) popup_snote_single_graphic_window_g2

0x0001,

0xf5cd,	// (0x000305b0) popup_snote_single_graphic_window_g_ParamLimits

0xf5cd,	// (0x000305b0) popup_snote_single_graphic_window_g

0x1982,	// (0x00022965) popup_snote_single_graphic_window_t1_ParamLimits

0x1982,	// (0x00022965) popup_snote_single_graphic_window_t1

0x1995,	// (0x00022978) popup_snote_single_graphic_window_t2_ParamLimits

0x1995,	// (0x00022978) popup_snote_single_graphic_window_t2

0x19a8,	// (0x0002298b) popup_snote_single_graphic_window_t3_ParamLimits

0x19a8,	// (0x0002298b) popup_snote_single_graphic_window_t3

0x19e1,	// (0x000229c4) popup_snote_single_graphic_window_t4_ParamLimits

0x19e1,	// (0x000229c4) popup_snote_single_graphic_window_t4

0x1a15,	// (0x000229f8) popup_snote_single_graphic_window_t5_ParamLimits

0x1a15,	// (0x000229f8) popup_snote_single_graphic_window_t5

0x0004,

0xf5d2,	// (0x000305b5) popup_snote_single_graphic_window_t_ParamLimits

0xf5d2,	// (0x000305b5) popup_snote_single_graphic_window_t

0x63ed,	// (0x000273d0) grid_graphic_popup_pane_ParamLimits

0x63ed,	// (0x000273d0) grid_graphic_popup_pane

0x641b,	// (0x000273fe) listscroll_popup_graphic_pane_g1_ParamLimits

0x641b,	// (0x000273fe) listscroll_popup_graphic_pane_g1

0xdadc,	// (0x0002eabf) listscroll_popup_graphic_pane_g2_ParamLimits

0xdadc,	// (0x0002eabf) listscroll_popup_graphic_pane_g2

0x0001,

0xf9b7,	// (0x0003099a) listscroll_popup_graphic_pane_g_ParamLimits

0xf9b7,	// (0x0003099a) listscroll_popup_graphic_pane_g

0x6443,	// (0x00027426) scroll_pane_cp5

0xda9c,	// (0x0002ea7f) cell_graphic_popup_pane_ParamLimits

0xda9c,	// (0x0002ea7f) cell_graphic_popup_pane

0x6376,	// (0x00027359) cell_graphic_popup_pane_g1

0x637e,	// (0x00027361) cell_graphic_popup_pane_g2

0x1868,	// (0x0002284b) cell_graphic_popup_pane_g3

0x0002,

0xf9b0,	// (0x00030993) cell_graphic_popup_pane_g

0x6387,	// (0x0002736a) cell_graphic_popup_pane_t2

0x1871,	// (0x00022854) grid_highlight_pane_cp3

0x1a56,	// (0x00022a39) list_gen_pane_ParamLimits

0x1a56,	// (0x00022a39) list_gen_pane

0x307f,	// (0x00024062) scroll_pane

0xda57,	// (0x0002ea3a) bg_list_pane_g1_ParamLimits

0xda57,	// (0x0002ea3a) bg_list_pane_g1

0x62f3,	// (0x000272d6) bg_list_pane_g2_ParamLimits

0x62f3,	// (0x000272d6) bg_list_pane_g2

0x6306,	// (0x000272e9) bg_list_pane_g3_ParamLimits

0x6306,	// (0x000272e9) bg_list_pane_g3

0x6318,	// (0x000272fb) bg_list_pane_g4_ParamLimits

0x6318,	// (0x000272fb) bg_list_pane_g4

0xda72,	// (0x0002ea55) bg_list_pane_g5_ParamLimits

0xda72,	// (0x0002ea55) bg_list_pane_g5

0x0004,

0xf9a5,	// (0x00030988) bg_list_pane_g_ParamLimits

0xf9a5,	// (0x00030988) bg_list_pane_g

0xda1a,	// (0x0002e9fd) list_double2_graphic_large_graphic_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double2_graphic_large_graphic_pane

0xda1a,	// (0x0002e9fd) list_double2_graphic_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double2_graphic_pane

0xda1a,	// (0x0002e9fd) list_double2_large_graphic_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double2_large_graphic_pane

0xda1a,	// (0x0002e9fd) list_double2_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double2_pane

0xda1a,	// (0x0002e9fd) list_double_graphic_heading_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_graphic_heading_pane

0xda1a,	// (0x0002e9fd) list_double_graphic_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_graphic_pane

0xda1a,	// (0x0002e9fd) list_double_heading_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_heading_pane

0xda1a,	// (0x0002e9fd) list_double_large_graphic_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_large_graphic_pane

0xda1a,	// (0x0002e9fd) list_double_number_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_number_pane

0xda1a,	// (0x0002e9fd) list_double_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_pane

0xda1a,	// (0x0002e9fd) list_double_time_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_double_time_pane

0xda1a,	// (0x0002e9fd) list_setting_number_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_setting_number_pane

0xda1a,	// (0x0002e9fd) list_setting_pane_ParamLimits

0xda1a,	// (0x0002e9fd) list_setting_pane

0xb7a5,	// (0x0002c788) list_single_2graphic_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_2graphic_pane

0xb7a5,	// (0x0002c788) list_single_graphic_heading_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_graphic_heading_pane

0xb7a5,	// (0x0002c788) list_single_graphic_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_graphic_pane

0xb7a5,	// (0x0002c788) list_single_heading_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_heading_pane

0xda42,	// (0x0002ea25) list_single_large_graphic_pane_ParamLimits

0xda42,	// (0x0002ea25) list_single_large_graphic_pane

0xb7a5,	// (0x0002c788) list_single_number_heading_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_number_heading_pane

0xb7a5,	// (0x0002c788) list_single_number_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_number_pane

0xb7a5,	// (0x0002c788) list_single_pane_ParamLimits

0xb7a5,	// (0x0002c788) list_single_pane

0xe626,	// (0x0002f609) list_highlight_pane_cp1

0x0532,	// (0x00021515) list_single_pane_g1_ParamLimits

0x0532,	// (0x00021515) list_single_pane_g1

0x053e,	// (0x00021521) list_single_pane_g2_ParamLimits

0x053e,	// (0x00021521) list_single_pane_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_pane_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_pane_g

0x073c,	// (0x0002171f) list_single_pane_t1_ParamLimits

0x073c,	// (0x0002171f) list_single_pane_t1

0x0532,	// (0x00021515) list_single_number_pane_g1_ParamLimits

0x0532,	// (0x00021515) list_single_number_pane_g1

0x053e,	// (0x00021521) list_single_number_pane_g2_ParamLimits

0x053e,	// (0x00021521) list_single_number_pane_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_number_pane_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_number_pane_g

0x05b6,	// (0x00021599) list_single_number_pane_t1_ParamLimits

0x05b6,	// (0x00021599) list_single_number_pane_t1

0xb767,	// (0x0002c74a) list_single_number_pane_t2_ParamLimits

0xb767,	// (0x0002c74a) list_single_number_pane_t2

0x0001,

0xf966,	// (0x00030949) list_single_number_pane_t_ParamLimits

0xf966,	// (0x00030949) list_single_number_pane_t

0xb145,	// (0x0002c128) list_single_graphic_pane_g1_ParamLimits

0xb145,	// (0x0002c128) list_single_graphic_pane_g1

0x0532,	// (0x00021515) list_single_graphic_pane_g2_ParamLimits

0x0532,	// (0x00021515) list_single_graphic_pane_g2

0x053e,	// (0x00021521) list_single_graphic_pane_g3_ParamLimits

0x053e,	// (0x00021521) list_single_graphic_pane_g3

0x0002,

0xf5dd,	// (0x000305c0) list_single_graphic_pane_g_ParamLimits

0xf5dd,	// (0x000305c0) list_single_graphic_pane_g

0xb151,	// (0x0002c134) list_single_graphic_pane_t1_ParamLimits

0xb151,	// (0x0002c134) list_single_graphic_pane_t1

0x0532,	// (0x00021515) list_single_heading_pane_g1_ParamLimits

0x0532,	// (0x00021515) list_single_heading_pane_g1

0x053e,	// (0x00021521) list_single_heading_pane_g2_ParamLimits

0x053e,	// (0x00021521) list_single_heading_pane_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_heading_pane_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_heading_pane_g

0xb167,	// (0x0002c14a) list_single_heading_pane_t1_ParamLimits

0xb167,	// (0x0002c14a) list_single_heading_pane_t1

0xb17d,	// (0x0002c160) list_single_heading_pane_t2_ParamLimits

0xb17d,	// (0x0002c160) list_single_heading_pane_t2

0x0001,

0xf5e9,	// (0x000305cc) list_single_heading_pane_t_ParamLimits

0xf5e9,	// (0x000305cc) list_single_heading_pane_t

0x0532,	// (0x00021515) list_single_number_heading_pane_g1_ParamLimits

0x0532,	// (0x00021515) list_single_number_heading_pane_g1

0x053e,	// (0x00021521) list_single_number_heading_pane_g2_ParamLimits

0x053e,	// (0x00021521) list_single_number_heading_pane_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_number_heading_pane_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_number_heading_pane_g

0xb167,	// (0x0002c14a) list_single_number_heading_pane_t1_ParamLimits

0xb167,	// (0x0002c14a) list_single_number_heading_pane_t1

0xb18f,	// (0x0002c172) list_single_number_heading_pane_t2_ParamLimits

0xb18f,	// (0x0002c172) list_single_number_heading_pane_t2

0x0716,	// (0x000216f9) list_single_number_heading_pane_t3_ParamLimits

0x0716,	// (0x000216f9) list_single_number_heading_pane_t3

0x0002,

0xf5ee,	// (0x000305d1) list_single_number_heading_pane_t_ParamLimits

0xf5ee,	// (0x000305d1) list_single_number_heading_pane_t

0x0592,	// (0x00021575) list_single_graphic_heading_pane_g1_ParamLimits

0x0592,	// (0x00021575) list_single_graphic_heading_pane_g1

0xb1a1,	// (0x0002c184) list_single_graphic_heading_pane_g4_ParamLimits

0xb1a1,	// (0x0002c184) list_single_graphic_heading_pane_g4

0x053e,	// (0x00021521) list_single_graphic_heading_pane_g5_ParamLimits

0x053e,	// (0x00021521) list_single_graphic_heading_pane_g5

0x0002,

0xf5f5,	// (0x000305d8) list_single_graphic_heading_pane_g_ParamLimits

0xf5f5,	// (0x000305d8) list_single_graphic_heading_pane_g

0xb167,	// (0x0002c14a) list_single_graphic_heading_pane_t1_ParamLimits

0xb167,	// (0x0002c14a) list_single_graphic_heading_pane_t1

0xb1b2,	// (0x0002c195) list_single_graphic_heading_pane_t2_ParamLimits

0xb1b2,	// (0x0002c195) list_single_graphic_heading_pane_t2

0x0001,

0xf5fc,	// (0x000305df) list_single_graphic_heading_pane_t_ParamLimits

0xf5fc,	// (0x000305df) list_single_graphic_heading_pane_t

0x0752,	// (0x00021735) list_single_large_graphic_pane_g1_ParamLimits

0x0752,	// (0x00021735) list_single_large_graphic_pane_g1

0x075e,	// (0x00021741) list_single_large_graphic_pane_g2_ParamLimits

0x075e,	// (0x00021741) list_single_large_graphic_pane_g2

0x076a,	// (0x0002174d) list_single_large_graphic_pane_g3_ParamLimits

0x076a,	// (0x0002174d) list_single_large_graphic_pane_g3

0x0002,

0xf601,	// (0x000305e4) list_single_large_graphic_pane_g_ParamLimits

0xf601,	// (0x000305e4) list_single_large_graphic_pane_g

0x526b,	// (0x0002624e) wait_border_pane_g2_copy1

0xb1c4,	// (0x0002c1a7) list_single_large_graphic_pane_g4_cp2

0x0776,	// (0x00021759) list_single_large_graphic_pane_t1_ParamLimits

0x0776,	// (0x00021759) list_single_large_graphic_pane_t1

0xb1cc,	// (0x0002c1af) list_double_pane_g1_ParamLimits

0xb1cc,	// (0x0002c1af) list_double_pane_g1

0xb1d8,	// (0x0002c1bb) list_double_pane_g2_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double_pane_g2

0x0001,

0xf608,	// (0x000305eb) list_double_pane_g_ParamLimits

0xf608,	// (0x000305eb) list_double_pane_g

0xb1e4,	// (0x0002c1c7) list_double_pane_t1_ParamLimits

0xb1e4,	// (0x0002c1c7) list_double_pane_t1

0xb1fa,	// (0x0002c1dd) list_double_pane_t2_ParamLimits

0xb1fa,	// (0x0002c1dd) list_double_pane_t2

0x0001,

0xf60d,	// (0x000305f0) list_double_pane_t_ParamLimits

0xf60d,	// (0x000305f0) list_double_pane_t

0xb20c,	// (0x0002c1ef) list_double2_pane_g1_ParamLimits

0xb20c,	// (0x0002c1ef) list_double2_pane_g1

0xb1d8,	// (0x0002c1bb) list_double2_pane_g2_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double2_pane_g2

0x0001,

0xf612,	// (0x000305f5) list_double2_pane_g_ParamLimits

0xf612,	// (0x000305f5) list_double2_pane_g

0xb1e4,	// (0x0002c1c7) list_double2_pane_t1_ParamLimits

0xb1e4,	// (0x0002c1c7) list_double2_pane_t1

0xb21d,	// (0x0002c200) list_double2_pane_t2_ParamLimits

0xb21d,	// (0x0002c200) list_double2_pane_t2

0x0001,

0xf617,	// (0x000305fa) list_double2_pane_t_ParamLimits

0xf617,	// (0x000305fa) list_double2_pane_t

0xb1cc,	// (0x0002c1af) list_double_number_pane_g1_ParamLimits

0xb1cc,	// (0x0002c1af) list_double_number_pane_g1

0xb1d8,	// (0x0002c1bb) list_double_number_pane_g2_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double_number_pane_g2

0x0001,

0xf608,	// (0x000305eb) list_double_number_pane_g_ParamLimits

0xf608,	// (0x000305eb) list_double_number_pane_g

0xb22f,	// (0x0002c212) list_double_number_pane_t1_ParamLimits

0xb22f,	// (0x0002c212) list_double_number_pane_t1

0xb241,	// (0x0002c224) list_double_number_pane_t2_ParamLimits

0xb241,	// (0x0002c224) list_double_number_pane_t2

0xb257,	// (0x0002c23a) list_double_number_pane_t3_ParamLimits

0xb257,	// (0x0002c23a) list_double_number_pane_t3

0x0002,

0xf61c,	// (0x000305ff) list_double_number_pane_t_ParamLimits

0xf61c,	// (0x000305ff) list_double_number_pane_t

0xb269,	// (0x0002c24c) list_double_graphic_pane_g1_ParamLimits

0xb269,	// (0x0002c24c) list_double_graphic_pane_g1

0xb275,	// (0x0002c258) list_double_graphic_pane_g2_ParamLimits

0xb275,	// (0x0002c258) list_double_graphic_pane_g2

0xb284,	// (0x0002c267) list_double_graphic_pane_g3_ParamLimits

0xb284,	// (0x0002c267) list_double_graphic_pane_g3

0x0003,

0xf623,	// (0x00030606) list_double_graphic_pane_g_ParamLimits

0xf623,	// (0x00030606) list_double_graphic_pane_g

0xb29c,	// (0x0002c27f) list_double_graphic_pane_t1_ParamLimits

0xb29c,	// (0x0002c27f) list_double_graphic_pane_t1

0xb2b2,	// (0x0002c295) list_double_graphic_pane_t2_ParamLimits

0xb2b2,	// (0x0002c295) list_double_graphic_pane_t2

0x0001,

0xf62c,	// (0x0003060f) list_double_graphic_pane_t_ParamLimits

0xf62c,	// (0x0003060f) list_double_graphic_pane_t

0xb269,	// (0x0002c24c) list_double2_graphic_pane_g1_ParamLimits

0xb269,	// (0x0002c24c) list_double2_graphic_pane_g1

0xb2c4,	// (0x0002c2a7) list_double2_graphic_pane_g2_ParamLimits

0xb2c4,	// (0x0002c2a7) list_double2_graphic_pane_g2

0xb2d0,	// (0x0002c2b3) list_double2_graphic_pane_g3_ParamLimits

0xb2d0,	// (0x0002c2b3) list_double2_graphic_pane_g3

0x0002,

0xf631,	// (0x00030614) list_double2_graphic_pane_g_ParamLimits

0xf631,	// (0x00030614) list_double2_graphic_pane_g

0xb241,	// (0x0002c224) list_double2_graphic_pane_t1_ParamLimits

0xb241,	// (0x0002c224) list_double2_graphic_pane_t1

0xb2dc,	// (0x0002c2bf) list_double2_graphic_pane_t2_ParamLimits

0xb2dc,	// (0x0002c2bf) list_double2_graphic_pane_t2

0x0001,

0xf638,	// (0x0003061b) list_double2_graphic_pane_t_ParamLimits

0xf638,	// (0x0003061b) list_double2_graphic_pane_t

0xb2ee,	// (0x0002c2d1) list_double_large_graphic_pane_g1_ParamLimits

0xb2ee,	// (0x0002c2d1) list_double_large_graphic_pane_g1

0xb20c,	// (0x0002c1ef) list_double_large_graphic_pane_g2_ParamLimits

0xb20c,	// (0x0002c1ef) list_double_large_graphic_pane_g2

0xb1d8,	// (0x0002c1bb) list_double_large_graphic_pane_g3_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double_large_graphic_pane_g3

0xb319,	// (0x0002c2fc) list_double_large_graphic_pane_g4_ParamLimits

0xb319,	// (0x0002c2fc) list_double_large_graphic_pane_g4

0x0004,

0xf63d,	// (0x00030620) list_double_large_graphic_pane_g_ParamLimits

0xf63d,	// (0x00030620) list_double_large_graphic_pane_g

0xb32b,	// (0x0002c30e) list_double_large_graphic_pane_t1_ParamLimits

0xb32b,	// (0x0002c30e) list_double_large_graphic_pane_t1

0xb344,	// (0x0002c327) list_double_large_graphic_pane_t2_ParamLimits

0xb344,	// (0x0002c327) list_double_large_graphic_pane_t2

0x0001,

0xf648,	// (0x0003062b) list_double_large_graphic_pane_t_ParamLimits

0xf648,	// (0x0003062b) list_double_large_graphic_pane_t

0xb356,	// (0x0002c339) list_double2_large_graphic_pane_g1_ParamLimits

0xb356,	// (0x0002c339) list_double2_large_graphic_pane_g1

0xb20c,	// (0x0002c1ef) list_double2_large_graphic_pane_g2_ParamLimits

0xb20c,	// (0x0002c1ef) list_double2_large_graphic_pane_g2

0xb1d8,	// (0x0002c1bb) list_double2_large_graphic_pane_g3_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double2_large_graphic_pane_g3

0x0002,

0xf64d,	// (0x00030630) list_double2_large_graphic_pane_g_ParamLimits

0xf64d,	// (0x00030630) list_double2_large_graphic_pane_g

0xb362,	// (0x0002c345) list_double2_large_graphic_pane_t1_ParamLimits

0xb362,	// (0x0002c345) list_double2_large_graphic_pane_t1

0xb378,	// (0x0002c35b) list_double2_large_graphic_pane_t2_ParamLimits

0xb378,	// (0x0002c35b) list_double2_large_graphic_pane_t2

0x0001,

0xf654,	// (0x00030637) list_double2_large_graphic_pane_t_ParamLimits

0xf654,	// (0x00030637) list_double2_large_graphic_pane_t

0xb38a,	// (0x0002c36d) list_double_heading_pane_g1_ParamLimits

0xb38a,	// (0x0002c36d) list_double_heading_pane_g1

0xb39b,	// (0x0002c37e) list_double_heading_pane_g2_ParamLimits

0xb39b,	// (0x0002c37e) list_double_heading_pane_g2

0x0001,

0xf659,	// (0x0003063c) list_double_heading_pane_g_ParamLimits

0xf659,	// (0x0003063c) list_double_heading_pane_g

0xb3a7,	// (0x0002c38a) list_double_heading_pane_t1_ParamLimits

0xb3a7,	// (0x0002c38a) list_double_heading_pane_t1

0xb3bd,	// (0x0002c3a0) list_double_heading_pane_t2_ParamLimits

0xb3bd,	// (0x0002c3a0) list_double_heading_pane_t2

0x0001,

0xf65e,	// (0x00030641) list_double_heading_pane_t_ParamLimits

0xf65e,	// (0x00030641) list_double_heading_pane_t

0xb3cf,	// (0x0002c3b2) list_double_graphic_heading_pane_g1_ParamLimits

0xb3cf,	// (0x0002c3b2) list_double_graphic_heading_pane_g1

0xb38a,	// (0x0002c36d) list_double_graphic_heading_pane_g2_ParamLimits

0xb38a,	// (0x0002c36d) list_double_graphic_heading_pane_g2

0xb39b,	// (0x0002c37e) list_double_graphic_heading_pane_g3_ParamLimits

0xb39b,	// (0x0002c37e) list_double_graphic_heading_pane_g3

0x0002,

0xf663,	// (0x00030646) list_double_graphic_heading_pane_g_ParamLimits

0xf663,	// (0x00030646) list_double_graphic_heading_pane_g

0xb3db,	// (0x0002c3be) list_double_graphic_heading_pane_t1_ParamLimits

0xb3db,	// (0x0002c3be) list_double_graphic_heading_pane_t1

0xb3f1,	// (0x0002c3d4) list_double_graphic_heading_pane_t2_ParamLimits

0xb3f1,	// (0x0002c3d4) list_double_graphic_heading_pane_t2

0x0001,

0xf66a,	// (0x0003064d) list_double_graphic_heading_pane_t_ParamLimits

0xf66a,	// (0x0003064d) list_double_graphic_heading_pane_t

0xb20c,	// (0x0002c1ef) list_double_time_pane_g1_ParamLimits

0xb20c,	// (0x0002c1ef) list_double_time_pane_g1

0xb1d8,	// (0x0002c1bb) list_double_time_pane_g2_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double_time_pane_g2

0x0001,

0xf612,	// (0x000305f5) list_double_time_pane_g_ParamLimits

0xf612,	// (0x000305f5) list_double_time_pane_g

0xb362,	// (0x0002c345) list_double_time_pane_t1_ParamLimits

0xb362,	// (0x0002c345) list_double_time_pane_t1

0xb403,	// (0x0002c3e6) list_double_time_pane_t2_ParamLimits

0xb403,	// (0x0002c3e6) list_double_time_pane_t2

0xb415,	// (0x0002c3f8) list_double_time_pane_t3_ParamLimits

0xb415,	// (0x0002c3f8) list_double_time_pane_t3

0xb427,	// (0x0002c40a) list_double_time_pane_t4_ParamLimits

0xb427,	// (0x0002c40a) list_double_time_pane_t4

0x0003,

0xf66f,	// (0x00030652) list_double_time_pane_t_ParamLimits

0xf66f,	// (0x00030652) list_double_time_pane_t

0xb439,	// (0x0002c41c) list_setting_pane_g1_ParamLimits

0xb439,	// (0x0002c41c) list_setting_pane_g1

0xb445,	// (0x0002c428) list_setting_pane_g2_ParamLimits

0xb445,	// (0x0002c428) list_setting_pane_g2

0x0001,

0xf678,	// (0x0003065b) list_setting_pane_g_ParamLimits

0xf678,	// (0x0003065b) list_setting_pane_g

0xb451,	// (0x0002c434) list_setting_pane_t1_ParamLimits

0xb451,	// (0x0002c434) list_setting_pane_t1

0xb46b,	// (0x0002c44e) list_setting_pane_t2_ParamLimits

0xb46b,	// (0x0002c44e) list_setting_pane_t2

0x0002,

0xf67d,	// (0x00030660) list_setting_pane_t_ParamLimits

0xf67d,	// (0x00030660) list_setting_pane_t

0xb4aa,	// (0x0002c48d) set_value_pane_cp_ParamLimits

0xb4aa,	// (0x0002c48d) set_value_pane_cp

0xb4b8,	// (0x0002c49b) list_setting_number_pane_g1_ParamLimits

0xb4b8,	// (0x0002c49b) list_setting_number_pane_g1

0xb4c4,	// (0x0002c4a7) list_setting_number_pane_g2_ParamLimits

0xb4c4,	// (0x0002c4a7) list_setting_number_pane_g2

0x0001,

0xf684,	// (0x00030667) list_setting_number_pane_g_ParamLimits

0xf684,	// (0x00030667) list_setting_number_pane_g

0xb4d0,	// (0x0002c4b3) list_setting_number_pane_t1_ParamLimits

0xb4d0,	// (0x0002c4b3) list_setting_number_pane_t1

0xb4e9,	// (0x0002c4cc) list_setting_number_pane_t2_ParamLimits

0xb4e9,	// (0x0002c4cc) list_setting_number_pane_t2

0xb503,	// (0x0002c4e6) list_setting_number_pane_t3_ParamLimits

0xb503,	// (0x0002c4e6) list_setting_number_pane_t3

0x0003,

0xf689,	// (0x0003066c) list_setting_number_pane_t_ParamLimits

0xf689,	// (0x0003066c) list_setting_number_pane_t

0xb4aa,	// (0x0002c48d) set_value_pane_ParamLimits

0xb4aa,	// (0x0002c48d) set_value_pane

0x30b3,	// (0x00024096) bg_set_opt_pane_ParamLimits

0x30b3,	// (0x00024096) bg_set_opt_pane

0x0226,	// (0x00021209) set_value_pane_t1

0x30d4,	// (0x000240b7) slider_set_pane_cp3

0x30dd,	// (0x000240c0) volume_small_pane_cp

0x30e6,	// (0x000240c9) list_form_gen_pane

0x30ef,	// (0x000240d2) scroll_pane_cp8

0xb546,	// (0x0002c529) form_field_data_pane_ParamLimits

0xb546,	// (0x0002c529) form_field_data_pane

0xb561,	// (0x0002c544) form_field_data_wide_pane_ParamLimits

0xb561,	// (0x0002c544) form_field_data_wide_pane

0x0281,	// (0x00021264) form_field_popup_pane_ParamLimits

0x0281,	// (0x00021264) form_field_popup_pane

0xb585,	// (0x0002c568) form_field_popup_wide_pane_ParamLimits

0xb585,	// (0x0002c568) form_field_popup_wide_pane

0x02c4,	// (0x000212a7) form_field_slider_pane_ParamLimits

0x02c4,	// (0x000212a7) form_field_slider_pane

0x02d7,	// (0x000212ba) form_field_slider_wide_pane_ParamLimits

0x02d7,	// (0x000212ba) form_field_slider_wide_pane

0x3100,	// (0x000240e3) data_form_pane

0xb5b0,	// (0x0002c593) form_field_data_pane_t1

0x310c,	// (0x000240ef) input_focus_pane

0x311a,	// (0x000240fd) data_form_wide_pane

0x031a,	// (0x000212fd) form_field_data_wide_pane_t1

0x1886,	// (0x00022869) input_focus_pane_cp6

0xb5ca,	// (0x0002c5ad) form_field_popup_pane_t1

0x310c,	// (0x000240ef) input_focus_pane_cp7

0x3146,	// (0x00024129) list_form_pane

0x035e,	// (0x00021341) form_field_popup_wide_pane_t1

0x310c,	// (0x000240ef) input_focus_pane_cp8

0x3152,	// (0x00024135) list_form_wide_pane

0xb5ec,	// (0x0002c5cf) form_field_slider_pane_t1_ParamLimits

0xb5ec,	// (0x0002c5cf) form_field_slider_pane_t1

0xb604,	// (0x0002c5e7) form_field_slider_pane_t2_ParamLimits

0xb604,	// (0x0002c5e7) form_field_slider_pane_t2

0x0001,

0xf699,	// (0x0003067c) form_field_slider_pane_t_ParamLimits

0xf699,	// (0x0003067c) form_field_slider_pane_t

0x150a,	// (0x000224ed) input_focus_pane_cp9_ParamLimits

0x150a,	// (0x000224ed) input_focus_pane_cp9

0xb619,	// (0x0002c5fc) slider_cont_pane_ParamLimits

0xb619,	// (0x0002c5fc) slider_cont_pane

0x3161,	// (0x00024144) form_field_slider_wide_pane_t1_ParamLimits

0x3161,	// (0x00024144) form_field_slider_wide_pane_t1

0x03bc,	// (0x0002139f) form_field_slider_wide_pane_t2_ParamLimits

0x03bc,	// (0x0002139f) form_field_slider_wide_pane_t2

0x0001,

0xf69e,	// (0x00030681) form_field_slider_wide_pane_t_ParamLimits

0xf69e,	// (0x00030681) form_field_slider_wide_pane_t

0x150a,	// (0x000224ed) input_focus_pane_cp10_ParamLimits

0x150a,	// (0x000224ed) input_focus_pane_cp10

0xb62d,	// (0x0002c610) slider_cont_pane_cp1_ParamLimits

0xb62d,	// (0x0002c610) slider_cont_pane_cp1

0xb641,	// (0x0002c624) slider_form_pane_cp

0x3173,	// (0x00024156) input_focus_pane_g1

0x317b,	// (0x0002415e) input_focus_pane_g2

0x3183,	// (0x00024166) input_focus_pane_g3

0x318b,	// (0x0002416e) input_focus_pane_g4

0x3193,	// (0x00024176) input_focus_pane_g5

0x319b,	// (0x0002417e) input_focus_pane_g6

0x31a3,	// (0x00024186) input_focus_pane_g7

0x31ab,	// (0x0002418e) input_focus_pane_g8

0x31b3,	// (0x00024196) input_focus_pane_g9

0xe61c,	// (0x0002f5ff) input_focus_pane_g10

0x0009,

0xf6a3,	// (0x00030686) input_focus_pane_g

0x5274,	// (0x00026257) wait_border_pane_g3_copy1

0xb649,	// (0x0002c62c) data_form_pane_t1

0xe61c,	// (0x0002f5ff) wait_anim_pane_g1_copy1

0xb779,	// (0x0002c75c) data_form_wide_pane_t1

0x041c,	// (0x000213ff) list_form_graphic_pane_cp_ParamLimits

0x041c,	// (0x000213ff) list_form_graphic_pane_cp

0x61f9,	// (0x000271dc) slider_form_pane_g1

0x6202,	// (0x000271e5) slider_form_pane_g2

0x0006,

0xf996,	// (0x00030979) slider_form_pane_g

0x041c,	// (0x000213ff) list_form_graphic_pane_ParamLimits

0x041c,	// (0x000213ff) list_form_graphic_pane

0x042e,	// (0x00021411) list_form_graphic_pane_g1

0x0436,	// (0x00021419) list_form_graphic_pane_t1_ParamLimits

0x0436,	// (0x00021419) list_form_graphic_pane_t1

0x11fe,	// (0x000221e1) list_highlight_pane_cp5_ParamLimits

0x11fe,	// (0x000221e1) list_highlight_pane_cp5

0xb663,	// (0x0002c646) find_pane_g1

0x31bb,	// (0x0002419e) input_find_pane

0xb66c,	// (0x0002c64f) input_find_pane_g1_ParamLimits

0xb66c,	// (0x0002c64f) input_find_pane_g1

0xb678,	// (0x0002c65b) input_find_pane_t1_ParamLimits

0xb678,	// (0x0002c65b) input_find_pane_t1

0xb68d,	// (0x0002c670) input_find_pane_t2_ParamLimits

0xb68d,	// (0x0002c670) input_find_pane_t2

0x0001,

0xf6b8,	// (0x0003069b) input_find_pane_t_ParamLimits

0xf6b8,	// (0x0003069b) input_find_pane_t

0x31c4,	// (0x000241a7) input_focus_pane_cp5_ParamLimits

0x31c4,	// (0x000241a7) input_focus_pane_cp5

0xbf4f,	// (0x0002cf32) bg_popup_window_pane_cp2_ParamLimits

0xbf4f,	// (0x0002cf32) bg_popup_window_pane_cp2

0xbf5c,	// (0x0002cf3f) listscroll_menu_pane_ParamLimits

0xbf5c,	// (0x0002cf3f) listscroll_menu_pane

0xbf68,	// (0x0002cf4b) popup_submenu_window_ParamLimits

0xbf68,	// (0x0002cf4b) popup_submenu_window

0x3227,	// (0x0002420a) find_popup_pane_g1

0x322f,	// (0x00024212) input_popup_find_pane_cp

0x31c4,	// (0x000241a7) input_focus_pane_cp4_ParamLimits

0x31c4,	// (0x000241a7) input_focus_pane_cp4

0x3247,	// (0x0002422a) input_popup_find_pane_t1_ParamLimits

0x3247,	// (0x0002422a) input_popup_find_pane_t1

0xe626,	// (0x0002f609) bg_popup_sub_pane_cp

0x3275,	// (0x00024258) listscroll_popup_sub_pane

0x327d,	// (0x00024260) list_submenu_pane_ParamLimits

0x327d,	// (0x00024260) list_submenu_pane

0x328e,	// (0x00024271) scroll_pane_cp4

0x3296,	// (0x00024279) list_single_popup_submenu_pane_ParamLimits

0x3296,	// (0x00024279) list_single_popup_submenu_pane

0x32ab,	// (0x0002428e) list_single_popup_submenu_pane_g1

0x32b3,	// (0x00024296) list_single_popup_submenu_pane_t1_ParamLimits

0x32b3,	// (0x00024296) list_single_popup_submenu_pane_t1

0x150a,	// (0x000224ed) bg_active_tab_pane_cp1_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp1

0xbfa6,	// (0x0002cf89) tabs_2_active_pane_g1

0xbfae,	// (0x0002cf91) tabs_2_active_pane_t1

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp1_ParamLimits

0x150a,	// (0x000224ed) bg_passive_tab_pane_cp1

0xbfa6,	// (0x0002cf89) tabs_2_passive_pane_g1

0xbfae,	// (0x0002cf91) tabs_2_passive_pane_t1

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp4

0xbfc0,	// (0x0002cfa3) tabs_2_long_active_pane_t1

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp4

0xcae5,	// (0x0002dac8) list_single_midp_graphic_pane_g4_ParamLimits

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp5

0xbfd3,	// (0x0002cfb6) tabs_3_long_active_pane_t1

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp5

0xcae5,	// (0x0002dac8) list_single_midp_graphic_pane_g4

0x11fe,	// (0x000221e1) bg_popup_window_pane_cp13_ParamLimits

0x11fe,	// (0x000221e1) bg_popup_window_pane_cp13

0x332a,	// (0x0002430d) listscroll_popup_fast_pane_ParamLimits

0x332a,	// (0x0002430d) listscroll_popup_fast_pane

0x3339,	// (0x0002431c) grid_popup_fast_pane_ParamLimits

0x3339,	// (0x0002431c) grid_popup_fast_pane

0x334b,	// (0x0002432e) scroll_pane_cp9_ParamLimits

0x334b,	// (0x0002432e) scroll_pane_cp9

0x7b4f,	// (0x00028b32) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7b4f,	// (0x00028b32) list_single_graphic_hl_pane_t1_cp2

0x336f,	// (0x00024352) input_focus_pane_cp20_ParamLimits

0x336f,	// (0x00024352) input_focus_pane_cp20

0x337d,	// (0x00024360) query_popup_data_pane_t1_ParamLimits

0x337d,	// (0x00024360) query_popup_data_pane_t1

0x3390,	// (0x00024373) query_popup_data_pane_t2_ParamLimits

0x3390,	// (0x00024373) query_popup_data_pane_t2

0x33d6,	// (0x000243b9) query_popup_data_pane_t3_ParamLimits

0x33d6,	// (0x000243b9) query_popup_data_pane_t3

0x3417,	// (0x000243fa) query_popup_data_pane_t4_ParamLimits

0x3417,	// (0x000243fa) query_popup_data_pane_t4

0x3453,	// (0x00024436) query_popup_data_pane_t5_ParamLimits

0x3453,	// (0x00024436) query_popup_data_pane_t5

0x0004,

0xf6bd,	// (0x000306a0) query_popup_data_pane_t_ParamLimits

0xf6bd,	// (0x000306a0) query_popup_data_pane_t

0x3173,	// (0x00024156) bg_set_opt_pane_g1

0x317b,	// (0x0002415e) bg_set_opt_pane_g2

0x3183,	// (0x00024166) bg_set_opt_pane_g3

0x318b,	// (0x0002416e) bg_set_opt_pane_g4

0x3193,	// (0x00024176) bg_set_opt_pane_g5

0x319b,	// (0x0002417e) bg_set_opt_pane_g6

0x31a3,	// (0x00024186) bg_set_opt_pane_g7

0x31ab,	// (0x0002418e) bg_set_opt_pane_g8

0x31b3,	// (0x00024196) bg_set_opt_pane_g9

0x0008,

0xf6c8,	// (0x000306ab) bg_set_opt_pane_g

0x1d21,	// (0x00022d04) control_top_pane_stacon_ParamLimits

0x1d21,	// (0x00022d04) control_top_pane_stacon

0x1d74,	// (0x00022d57) signal_pane_stacon_ParamLimits

0x1d74,	// (0x00022d57) signal_pane_stacon

0x39ff,	// (0x000249e2) stacon_top_pane_g1_ParamLimits

0x39ff,	// (0x000249e2) stacon_top_pane_g1

0x1d99,	// (0x00022d7c) title_pane_stacon_ParamLimits

0x1d99,	// (0x00022d7c) title_pane_stacon

0x1dc3,	// (0x00022da6) uni_indicator_pane_stacon_ParamLimits

0x1dc3,	// (0x00022da6) uni_indicator_pane_stacon

0x1ddb,	// (0x00022dbe) battery_pane_stacon_ParamLimits

0x1ddb,	// (0x00022dbe) battery_pane_stacon

0x1e1f,	// (0x00022e02) control_bottom_pane_stacon_ParamLimits

0x1e1f,	// (0x00022e02) control_bottom_pane_stacon

0x1e42,	// (0x00022e25) navi_pane_stacon_ParamLimits

0x1e42,	// (0x00022e25) navi_pane_stacon

0x3a21,	// (0x00024a04) stacon_bottom_pane_g1_ParamLimits

0x3a21,	// (0x00024a04) stacon_bottom_pane_g1

0x1a7e,	// (0x00022a61) aid_levels_signal_lsc_ParamLimits

0x1a7e,	// (0x00022a61) aid_levels_signal_lsc

0x1a95,	// (0x00022a78) signal_pane_stacon_g1_ParamLimits

0x1a95,	// (0x00022a78) signal_pane_stacon_g1

0x1aa9,	// (0x00022a8c) signal_pane_stacon_g2_ParamLimits

0x1aa9,	// (0x00022a8c) signal_pane_stacon_g2

0x0001,

0xf6db,	// (0x000306be) signal_pane_stacon_g_ParamLimits

0xf6db,	// (0x000306be) signal_pane_stacon_g

0x1ade,	// (0x00022ac1) title_pane_stacon_t1_ParamLimits

0x1ade,	// (0x00022ac1) title_pane_stacon_t1

0x3497,	// (0x0002447a) uni_indicator_pane_stacon_g1

0x34a1,	// (0x00024484) uni_indicator_pane_stacon_g2

0x34ab,	// (0x0002448e) uni_indicator_pane_stacon_g3

0x34b5,	// (0x00024498) uni_indicator_pane_stacon_g4

0x0003,

0xf6e7,	// (0x000306ca) uni_indicator_pane_stacon_g

0x1b03,	// (0x00022ae6) control_top_pane_stacon_g1

0x1b0b,	// (0x00022aee) control_top_pane_stacon_t1_ParamLimits

0x1b0b,	// (0x00022aee) control_top_pane_stacon_t1

0x1b42,	// (0x00022b25) aid_levels_battery_lsc_ParamLimits

0x1b42,	// (0x00022b25) aid_levels_battery_lsc

0x1b5a,	// (0x00022b3d) battery_pane_stacon_g1_ParamLimits

0x1b5a,	// (0x00022b3d) battery_pane_stacon_g1

0x1b6d,	// (0x00022b50) battery_pane_stacon_g2_ParamLimits

0x1b6d,	// (0x00022b50) battery_pane_stacon_g2

0x0001,

0xf6f0,	// (0x000306d3) battery_pane_stacon_g_ParamLimits

0xf6f0,	// (0x000306d3) battery_pane_stacon_g

0x1bab,	// (0x00022b8e) navi_icon_pane_stacon

0x1bbf,	// (0x00022ba2) navi_navi_pane_stacon

0x1bab,	// (0x00022b8e) navi_text_pane_stacon

0x1b03,	// (0x00022ae6) control_bottom_pane_stacon_g1

0x1bd5,	// (0x00022bb8) control_bottom_pane_stacon_t1_ParamLimits

0x1bd5,	// (0x00022bb8) control_bottom_pane_stacon_t1

0xbfe5,	// (0x0002cfc8) grid_app_pane_ParamLimits

0xbfe5,	// (0x0002cfc8) grid_app_pane

0xc01d,	// (0x0002d000) scroll_pane_cp15_ParamLimits

0xc01d,	// (0x0002d000) scroll_pane_cp15

0xc03a,	// (0x0002d01d) cell_app_pane_ParamLimits

0xc03a,	// (0x0002d01d) cell_app_pane

0xc07b,	// (0x0002d05e) cell_app_pane_g1_ParamLimits

0xc07b,	// (0x0002d05e) cell_app_pane_g1

0x3562,	// (0x00024545) cell_app_pane_g2_ParamLimits

0x3562,	// (0x00024545) cell_app_pane_g2

0x0001,

0xf6f5,	// (0x000306d8) cell_app_pane_g_ParamLimits

0xf6f5,	// (0x000306d8) cell_app_pane_g

0x356e,	// (0x00024551) cell_app_pane_t1_ParamLimits

0x356e,	// (0x00024551) cell_app_pane_t1

0x3580,	// (0x00024563) grid_highlight_pane_ParamLimits

0x3580,	// (0x00024563) grid_highlight_pane

0x3173,	// (0x00024156) cell_highlight_pane_g1

0x317b,	// (0x0002415e) cell_highlight_pane_g2

0x3183,	// (0x00024166) cell_highlight_pane_g3

0x318b,	// (0x0002416e) cell_highlight_pane_g4

0x3193,	// (0x00024176) cell_highlight_pane_g5

0x319b,	// (0x0002417e) cell_highlight_pane_g6

0x31a3,	// (0x00024186) cell_highlight_pane_g7

0x31ab,	// (0x0002418e) cell_highlight_pane_g8

0x31b3,	// (0x00024196) cell_highlight_pane_g9

0xe61c,	// (0x0002f5ff) cell_highlight_pane_g10

0x0009,

0xf6a3,	// (0x00030686) cell_highlight_pane_g

0x3591,	// (0x00024574) bg_scroll_pane

0x1c1f,	// (0x00022c02) scroll_handle_pane

0x35d8,	// (0x000245bb) scroll_bg_pane_g1

0x35ed,	// (0x000245d0) scroll_bg_pane_g2

0x3605,	// (0x000245e8) scroll_bg_pane_g3

0x0002,

0xf6fa,	// (0x000306dd) scroll_bg_pane_g

0x361a,	// (0x000245fd) scroll_handle_focus_pane_ParamLimits

0x361a,	// (0x000245fd) scroll_handle_focus_pane

0x35d8,	// (0x000245bb) scroll_handle_pane_g1

0x3627,	// (0x0002460a) scroll_handle_pane_g2

0x3605,	// (0x000245e8) scroll_handle_pane_g3

0x0002,

0xf701,	// (0x000306e4) scroll_handle_pane_g

0x31c4,	// (0x000241a7) bg_popup_sub_pane_cp21_ParamLimits

0x31c4,	// (0x000241a7) bg_popup_sub_pane_cp21

0x363b,	// (0x0002461e) popup_fep_japan_predictive_window_t1_ParamLimits

0x363b,	// (0x0002461e) popup_fep_japan_predictive_window_t1

0x3652,	// (0x00024635) popup_fep_japan_predictive_window_t2_ParamLimits

0x3652,	// (0x00024635) popup_fep_japan_predictive_window_t2

0x3685,	// (0x00024668) popup_fep_japan_predictive_window_t3_ParamLimits

0x3685,	// (0x00024668) popup_fep_japan_predictive_window_t3

0x0002,

0xf708,	// (0x000306eb) popup_fep_japan_predictive_window_t_ParamLimits

0xf708,	// (0x000306eb) popup_fep_japan_predictive_window_t

0xe626,	// (0x0002f609) bg_popup_sub_pane_cp23

0x36bc,	// (0x0002469f) listscroll_japin_cand_pane

0x36c4,	// (0x000246a7) popup_fep_japan_candidate_window_t1

0x36d2,	// (0x000246b5) candidate_pane_ParamLimits

0x36d2,	// (0x000246b5) candidate_pane

0x36e4,	// (0x000246c7) scroll_pane_cp30

0x36ee,	// (0x000246d1) list_single_popup_jap_candidate_pane_ParamLimits

0x36ee,	// (0x000246d1) list_single_popup_jap_candidate_pane

0xe626,	// (0x0002f609) list_highlight_pane_cp30

0x3702,	// (0x000246e5) list_single_popup_jap_candidate_pane_t1

0xc0a8,	// (0x0002d08b) level_1_signal

0xc0ba,	// (0x0002d09d) level_2_signal

0xc0cd,	// (0x0002d0b0) level_3_signal

0xc0e0,	// (0x0002d0c3) level_4_signal

0xc0f3,	// (0x0002d0d6) level_5_signal

0xc106,	// (0x0002d0e9) level_6_signal

0xc119,	// (0x0002d0fc) level_7_signal

0xc0a8,	// (0x0002d08b) level_1_battery

0xc0ba,	// (0x0002d09d) level_2_battery

0xc0cd,	// (0x0002d0b0) level_3_battery

0xc0e0,	// (0x0002d0c3) level_4_battery

0xc0f3,	// (0x0002d0d6) level_5_battery

0xc106,	// (0x0002d0e9) level_6_battery

0xc119,	// (0x0002d0fc) level_7_battery

0x3784,	// (0x00024767) list_menu_pane_ParamLimits

0x3784,	// (0x00024767) list_menu_pane

0x3795,	// (0x00024778) scroll_pane_cp25_ParamLimits

0x3795,	// (0x00024778) scroll_pane_cp25

0x37ae,	// (0x00024791) list_double2_graphic_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double2_graphic_pane_cp2

0x37ae,	// (0x00024791) list_double2_large_graphic_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double2_large_graphic_pane_cp2

0x37ae,	// (0x00024791) list_double2_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double2_pane_cp2

0x37ae,	// (0x00024791) list_double_graphic_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double_graphic_pane_cp2

0x37ae,	// (0x00024791) list_double_large_graphic_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double_large_graphic_pane_cp2

0x37ae,	// (0x00024791) list_double_number_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double_number_pane_cp2

0x37ae,	// (0x00024791) list_double_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double_pane_cp2

0xc12c,	// (0x0002d10f) list_single_2graphic_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_2graphic_pane_cp2

0xc12c,	// (0x0002d10f) list_single_graphic_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_graphic_heading_pane_cp2

0xc12c,	// (0x0002d10f) list_single_graphic_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_graphic_pane_cp2

0xc12c,	// (0x0002d10f) list_single_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_heading_pane_cp2

0x37f1,	// (0x000247d4) list_single_large_graphic_pane_cp2_ParamLimits

0x37f1,	// (0x000247d4) list_single_large_graphic_pane_cp2

0xc12c,	// (0x0002d10f) list_single_number_heading_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_number_heading_pane_cp2

0xc12c,	// (0x0002d10f) list_single_number_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_number_pane_cp2

0xc12c,	// (0x0002d10f) list_single_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_pane_cp2

0x3846,	// (0x00024829) bg_popup_sub_pane_cp22

0x1cd1,	// (0x00022cb4) popup_side_volume_key_window_g1

0x1cfb,	// (0x00022cde) popup_side_volume_key_window_t1

0x1d19,	// (0x00022cfc) volume_small_pane_cp1

0x150a,	// (0x000224ed) bg_popup_sub_pane_cp24_ParamLimits

0x150a,	// (0x000224ed) bg_popup_sub_pane_cp24

0x385c,	// (0x0002483f) fep_china_uni_candidate_pane_ParamLimits

0x385c,	// (0x0002483f) fep_china_uni_candidate_pane

0x3870,	// (0x00024853) fep_china_uni_entry_pane

0x3880,	// (0x00024863) popup_fep_china_uni_window_g1

0x389c,	// (0x0002487f) fep_china_uni_entry_pane_g1

0x38a6,	// (0x00024889) fep_china_uni_entry_pane_g2

0x0001,

0xf735,	// (0x00030718) fep_china_uni_entry_pane_g

0x38b0,	// (0x00024893) fep_entry_item_pane

0x38ba,	// (0x0002489d) fep_candidate_item_pane

0x38c2,	// (0x000248a5) fep_china_uni_candidate_pane_g1

0x38cc,	// (0x000248af) fep_china_uni_candidate_pane_g2

0x38d4,	// (0x000248b7) fep_china_uni_candidate_pane_g3

0x38dc,	// (0x000248bf) fep_china_uni_candidate_pane_g4

0x0003,

0xf73a,	// (0x0003071d) fep_china_uni_candidate_pane_g

0xe61c,	// (0x0002f5ff) fep_entry_item_pane_g1

0x38e6,	// (0x000248c9) fep_entry_item_pane_t1_ParamLimits

0x38e6,	// (0x000248c9) fep_entry_item_pane_t1

0x38fc,	// (0x000248df) fep_candidate_item_pane_t1_ParamLimits

0x38fc,	// (0x000248df) fep_candidate_item_pane_t1

0x3911,	// (0x000248f4) fep_candidate_item_pane_t2_ParamLimits

0x3911,	// (0x000248f4) fep_candidate_item_pane_t2

0x0001,

0xf743,	// (0x00030726) fep_candidate_item_pane_t_ParamLimits

0xf743,	// (0x00030726) fep_candidate_item_pane_t

0x11fe,	// (0x000221e1) list_highlight_pane_cp31_ParamLimits

0x11fe,	// (0x000221e1) list_highlight_pane_cp31

0x3923,	// (0x00024906) level_1_signal_lsc

0x392c,	// (0x0002490f) level_2_signal_lsc

0x3935,	// (0x00024918) level_3_signal_lsc

0x393e,	// (0x00024921) level_4_signal_lsc

0x3947,	// (0x0002492a) level_5_signal_lsc

0x3950,	// (0x00024933) level_6_signal_lsc

0x3959,	// (0x0002493c) level_7_signal_lsc

0x3959,	// (0x0002493c) level_1_battery_lsc

0x3962,	// (0x00024945) level_2_battery_lsc

0x396b,	// (0x0002494e) level_3_battery_lsc

0x3974,	// (0x00024957) level_4_battery_lsc

0x397d,	// (0x00024960) level_5_battery_lsc

0x3986,	// (0x00024969) level_6_battery_lsc

0x3923,	// (0x00024906) level_7_battery_lsc

0x398f,	// (0x00024972) scroll_handle_focus_pane_g1

0x3998,	// (0x0002497b) scroll_handle_focus_pane_g2

0x39a1,	// (0x00024984) scroll_handle_focus_pane_g3

0x0002,

0xf748,	// (0x0003072b) scroll_handle_focus_pane_g

0xb6a2,	// (0x0002c685) list_single_2graphic_pane_g1_ParamLimits

0xb6a2,	// (0x0002c685) list_single_2graphic_pane_g1

0xb1a1,	// (0x0002c184) list_single_2graphic_pane_g2_ParamLimits

0xb1a1,	// (0x0002c184) list_single_2graphic_pane_g2

0x053e,	// (0x00021521) list_single_2graphic_pane_g3_ParamLimits

0x053e,	// (0x00021521) list_single_2graphic_pane_g3

0xb6ae,	// (0x0002c691) list_single_2graphic_pane_g4_ParamLimits

0xb6ae,	// (0x0002c691) list_single_2graphic_pane_g4

0x0003,

0xf74f,	// (0x00030732) list_single_2graphic_pane_g_ParamLimits

0xf74f,	// (0x00030732) list_single_2graphic_pane_g

0xb6ba,	// (0x0002c69d) list_single_2graphic_pane_t1_ParamLimits

0xb6ba,	// (0x0002c69d) list_single_2graphic_pane_t1

0xb6e8,	// (0x0002c6cb) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xb6e8,	// (0x0002c6cb) list_double2_graphic_large_graphic_pane_g1

0xb20c,	// (0x0002c1ef) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb20c,	// (0x0002c1ef) list_double2_graphic_large_graphic_pane_g2

0xb1d8,	// (0x0002c1bb) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0xb1d8,	// (0x0002c1bb) list_double2_graphic_large_graphic_pane_g3

0xb6fa,	// (0x0002c6dd) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xb6fa,	// (0x0002c6dd) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf758,	// (0x0003073b) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf758,	// (0x0003073b) list_double2_graphic_large_graphic_pane_g

0xb706,	// (0x0002c6e9) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xb706,	// (0x0002c6e9) list_double2_graphic_large_graphic_pane_t1

0xb71c,	// (0x0002c6ff) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xb71c,	// (0x0002c6ff) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf761,	// (0x00030744) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf761,	// (0x00030744) list_double2_graphic_large_graphic_pane_t

0x3ae3,	// (0x00024ac6) popup_fast_swap_window_ParamLimits

0x3ae3,	// (0x00024ac6) popup_fast_swap_window

0x3b01,	// (0x00024ae4) popup_side_volume_key_window

0x3b1f,	// (0x00024b02) stacon_top_pane

0x3b29,	// (0x00024b0c) status_pane_ParamLimits

0x3b29,	// (0x00024b0c) status_pane

0x3b1f,	// (0x00024b02) status_small_pane

0xe626,	// (0x0002f609) control_pane

0xe626,	// (0x0002f609) stacon_bottom_pane

0x30ef,	// (0x000240d2) scroll_pane_cp121

0x30e6,	// (0x000240c9) set_content_pane

0xc18f,	// (0x0002d172) bg_active_tab_pane_g1_cp1

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp1

0xc198,	// (0x0002d17b) bg_active_tab_pane_g3_cp1

0xc18f,	// (0x0002d172) bg_passive_tab_pane_g1_cp1

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp1

0xc198,	// (0x0002d17b) bg_passive_tab_pane_g3_cp1

0xc1a1,	// (0x0002d184) bg_active_tab_pane_g1_cp2

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp2

0xc1aa,	// (0x0002d18d) bg_active_tab_pane_g3_cp2

0xc1a1,	// (0x0002d184) bg_passive_tab_pane_g1_cp2

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp2

0xc1aa,	// (0x0002d18d) bg_passive_tab_pane_g3_cp2

0xc1b3,	// (0x0002d196) bg_active_tab_pane_g1_cp3

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp3

0xc1bc,	// (0x0002d19f) bg_active_tab_pane_g3_cp3

0xc1b3,	// (0x0002d196) bg_passive_tab_pane_g1_cp3

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp3

0xc1bc,	// (0x0002d19f) bg_passive_tab_pane_g3_cp3

0xc1c5,	// (0x0002d1a8) bg_active_tab_pane_g1_cp4

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp4

0xc1ce,	// (0x0002d1b1) bg_active_tab_pane_g3_cp4

0xc1c5,	// (0x0002d1a8) bg_passive_tab_pane_g1_cp4

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp4

0xc1ce,	// (0x0002d1b1) bg_passive_tab_pane_g3_cp4

0x3a3d,	// (0x00024a20) bg_active_tab_pane_g1_cp5

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp5

0x3a46,	// (0x00024a29) bg_active_tab_pane_g3_cp5

0x3a3d,	// (0x00024a20) bg_passive_tab_pane_g1_cp5

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp5

0x3a46,	// (0x00024a29) bg_passive_tab_pane_g3_cp5

0x3296,	// (0x00024279) list_set_graphic_pane_ParamLimits

0x3296,	// (0x00024279) list_set_graphic_pane

0xe626,	// (0x0002f609) bg_set_opt_pane_cp4

0xc1d7,	// (0x0002d1ba) list_set_graphic_pane_g1_ParamLimits

0xc1d7,	// (0x0002d1ba) list_set_graphic_pane_g1

0xc1e3,	// (0x0002d1c6) list_set_graphic_pane_g2_ParamLimits

0xc1e3,	// (0x0002d1c6) list_set_graphic_pane_g2

0x0001,

0xf766,	// (0x00030749) list_set_graphic_pane_g_ParamLimits

0xf766,	// (0x00030749) list_set_graphic_pane_g

0x0009,

0xfad9,	// (0x00030abc) volume_small_pane_cp_g

0x3a94,	// (0x00024a77) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x3a94,	// (0x00024a77) list_double2_large_graphic_pane_g1_cp2

0x3aa2,	// (0x00024a85) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0x3aa2,	// (0x00024a85) list_double2_large_graphic_pane_g2_cp2

0x3ab3,	// (0x00024a96) list_double2_large_graphic_pane_g3_cp2

0x3abb,	// (0x00024a9e) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x3abb,	// (0x00024a9e) list_double2_large_graphic_pane_t1_cp2

0x3ad1,	// (0x00024ab4) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x3ad1,	// (0x00024ab4) list_double2_large_graphic_pane_t2_cp2

0x5d5e,	// (0x00026d41) list_double_large_graphic_pane_g1_cp2_ParamLimits

0x5d5e,	// (0x00026d41) list_double_large_graphic_pane_g1_cp2

0x5d71,	// (0x00026d54) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x5d71,	// (0x00026d54) list_double_large_graphic_pane_g2_cp2

0x3c47,	// (0x00024c2a) list_double_large_graphic_pane_g3_cp2

0x5d82,	// (0x00026d65) list_double_large_graphic_pane_g4_cp

0x5d8a,	// (0x00026d6d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5d8a,	// (0x00026d6d) list_double_large_graphic_pane_t1_cp2

0x5da1,	// (0x00026d84) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5da1,	// (0x00026d84) list_double_large_graphic_pane_t2_cp2

0x3b37,	// (0x00024b1a) list_double2_graphic_pane_g1_cp2_ParamLimits

0x3b37,	// (0x00024b1a) list_double2_graphic_pane_g1_cp2

0x3b45,	// (0x00024b28) list_double2_graphic_pane_g2_cp2_ParamLimits

0x3b45,	// (0x00024b28) list_double2_graphic_pane_g2_cp2

0x3b56,	// (0x00024b39) list_double2_graphic_pane_g3_cp2

0x3b60,	// (0x00024b43) list_double2_graphic_pane_t1_cp2_ParamLimits

0x3b60,	// (0x00024b43) list_double2_graphic_pane_t1_cp2

0x3b76,	// (0x00024b59) list_double2_graphic_pane_t2_cp2_ParamLimits

0x3b76,	// (0x00024b59) list_double2_graphic_pane_t2_cp2

0x3b88,	// (0x00024b6b) list_single_number_heading_pane_g1_cp2_ParamLimits

0x3b88,	// (0x00024b6b) list_single_number_heading_pane_g1_cp2

0x3b94,	// (0x00024b77) list_single_number_heading_pane_g2_cp2

0x3b9c,	// (0x00024b7f) list_single_number_heading_pane_t1_cp2_ParamLimits

0x3b9c,	// (0x00024b7f) list_single_number_heading_pane_t1_cp2

0x3bb2,	// (0x00024b95) list_single_number_heading_pane_t2_cp2_ParamLimits

0x3bb2,	// (0x00024b95) list_single_number_heading_pane_t2_cp2

0x3bc6,	// (0x00024ba9) list_single_number_heading_pane_t3_cp2_ParamLimits

0x3bc6,	// (0x00024ba9) list_single_number_heading_pane_t3_cp2

0x3b88,	// (0x00024b6b) list_single_heading_pane_g1_cp2_ParamLimits

0x3b88,	// (0x00024b6b) list_single_heading_pane_g1_cp2

0x3b94,	// (0x00024b77) list_single_heading_pane_g2_cp2

0x3b9c,	// (0x00024b7f) list_single_heading_pane_t1_cp2_ParamLimits

0x3b9c,	// (0x00024b7f) list_single_heading_pane_t1_cp2

0x5b58,	// (0x00026b3b) list_single_heading_pane_t2_cp2_ParamLimits

0x5b58,	// (0x00026b3b) list_single_heading_pane_t2_cp2

0x5a9a,	// (0x00026a7d) list_double_graphic_pane_g1_cp2_ParamLimits

0x5a9a,	// (0x00026a7d) list_double_graphic_pane_g1_cp2

0x5aa6,	// (0x00026a89) list_double_graphic_pane_g2_cp2_ParamLimits

0x5aa6,	// (0x00026a89) list_double_graphic_pane_g2_cp2

0x5ab5,	// (0x00026a98) list_double_graphic_pane_g3_cp2

0x5abd,	// (0x00026aa0) list_double_graphic_pane_t1_cp2_ParamLimits

0x5abd,	// (0x00026aa0) list_double_graphic_pane_t1_cp2

0x5ad3,	// (0x00026ab6) list_double_graphic_pane_t2_cp2_ParamLimits

0x5ad3,	// (0x00026ab6) list_double_graphic_pane_t2_cp2

0x3c3b,	// (0x00024c1e) list_double_number_pane_g1_cp2_ParamLimits

0x3c3b,	// (0x00024c1e) list_double_number_pane_g1_cp2

0x3c47,	// (0x00024c2a) list_double_number_pane_g2_cp2

0x5a5e,	// (0x00026a41) list_double_number_pane_t1_cp2_ParamLimits

0x5a5e,	// (0x00026a41) list_double_number_pane_t1_cp2

0x5a72,	// (0x00026a55) list_double_number_pane_t2_cp2_ParamLimits

0x5a72,	// (0x00026a55) list_double_number_pane_t2_cp2

0x5a88,	// (0x00026a6b) list_double_number_pane_t3_cp2_ParamLimits

0x5a88,	// (0x00026a6b) list_double_number_pane_t3_cp2

0x5947,	// (0x0002692a) list_single_graphic_pane_g1_cp2_ParamLimits

0x5947,	// (0x0002692a) list_single_graphic_pane_g1_cp2

0x3ca1,	// (0x00024c84) list_single_graphic_pane_g2_cp2_ParamLimits

0x3ca1,	// (0x00024c84) list_single_graphic_pane_g2_cp2

0x3cad,	// (0x00024c90) list_single_graphic_pane_g3_cp2

0x591d,	// (0x00026900) list_single_graphic_pane_t1_cp2_ParamLimits

0x591d,	// (0x00026900) list_single_graphic_pane_t1_cp2

0x3ca1,	// (0x00024c84) list_single_number_pane_g1_cp2_ParamLimits

0x3ca1,	// (0x00024c84) list_single_number_pane_g1_cp2

0x3cad,	// (0x00024c90) list_single_number_pane_g2_cp2

0x591d,	// (0x00026900) list_single_number_pane_t1_cp2_ParamLimits

0x591d,	// (0x00026900) list_single_number_pane_t1_cp2

0x5933,	// (0x00026916) list_single_number_pane_t2_cp2_ParamLimits

0x5933,	// (0x00026916) list_single_number_pane_t2_cp2

0x3aa2,	// (0x00024a85) list_double2_pane_g1_cp2_ParamLimits

0x3aa2,	// (0x00024a85) list_double2_pane_g1_cp2

0x3ab3,	// (0x00024a96) list_double2_pane_g2_cp2

0x3c13,	// (0x00024bf6) list_double2_pane_t1_cp2_ParamLimits

0x3c13,	// (0x00024bf6) list_double2_pane_t1_cp2

0x3c29,	// (0x00024c0c) list_double2_pane_t2_cp2_ParamLimits

0x3c29,	// (0x00024c0c) list_double2_pane_t2_cp2

0x3c3b,	// (0x00024c1e) list_double_pane_g1_cp2_ParamLimits

0x3c3b,	// (0x00024c1e) list_double_pane_g1_cp2

0x3c47,	// (0x00024c2a) list_double_pane_g2_cp2

0x3c4f,	// (0x00024c32) list_double_pane_t1_cp2_ParamLimits

0x3c4f,	// (0x00024c32) list_double_pane_t1_cp2

0x3c65,	// (0x00024c48) list_double_pane_t2_cp2_ParamLimits

0x3c65,	// (0x00024c48) list_double_pane_t2_cp2

0x3c91,	// (0x00024c74) list_single_pane_cp2_g3

0x3ca1,	// (0x00024c84) list_single_pane_g1_cp2_ParamLimits

0x3ca1,	// (0x00024c84) list_single_pane_g1_cp2

0x3cad,	// (0x00024c90) list_single_pane_g2_cp2

0x3cb5,	// (0x00024c98) list_single_pane_t1_cp2_ParamLimits

0x3cb5,	// (0x00024c98) list_single_pane_t1_cp2

0x3ccd,	// (0x00024cb0) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x3ccd,	// (0x00024cb0) list_single_large_graphic_pane_g1_cp2

0x3cdb,	// (0x00024cbe) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x3cdb,	// (0x00024cbe) list_single_large_graphic_pane_g2_cp2

0x3ce7,	// (0x00024cca) list_single_large_graphic_pane_g3_cp2

0x3cef,	// (0x00024cd2) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x3cef,	// (0x00024cd2) list_single_large_graphic_pane_g4_cp1

0x3d09,	// (0x00024cec) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x3d09,	// (0x00024cec) list_single_large_graphic_pane_t1_cp2

0x58e7,	// (0x000268ca) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x58e7,	// (0x000268ca) list_single_graphic_heading_pane_g1_cp2

0x58b4,	// (0x00026897) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x58b4,	// (0x00026897) list_single_graphic_heading_pane_g4_cp2

0x3cad,	// (0x00024c90) list_single_graphic_heading_pane_g5_cp2

0x58f3,	// (0x000268d6) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x58f3,	// (0x000268d6) list_single_graphic_heading_pane_t1_cp2

0x5909,	// (0x000268ec) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x5909,	// (0x000268ec) list_single_graphic_heading_pane_t2_cp2

0x58a8,	// (0x0002688b) list_single_2graphic_pane_g1_cp2_ParamLimits

0x58a8,	// (0x0002688b) list_single_2graphic_pane_g1_cp2

0x58b4,	// (0x00026897) list_single_2graphic_pane_g2_cp2_ParamLimits

0x58b4,	// (0x00026897) list_single_2graphic_pane_g2_cp2

0x3cad,	// (0x00024c90) list_single_2graphic_pane_g3_cp2

0x58c5,	// (0x000268a8) list_single_2graphic_pane_g4_cp2_ParamLimits

0x58c5,	// (0x000268a8) list_single_2graphic_pane_g4_cp2

0x58d1,	// (0x000268b4) list_single_2graphic_pane_t1_cp2_ParamLimits

0x58d1,	// (0x000268b4) list_single_2graphic_pane_t1_cp2

0xe61c,	// (0x0002f5ff) list_highlight_pane_g10_cp1

0x5480,	// (0x00026463) list_highlight_pane_g1_cp1

0x5488,	// (0x0002646b) list_highlight_pane_g2_cp1

0x5490,	// (0x00026473) list_highlight_pane_g3_cp1

0x5498,	// (0x0002647b) list_highlight_pane_g4_cp1

0x54a0,	// (0x00026483) list_highlight_pane_g5_cp1

0x54a8,	// (0x0002648b) list_highlight_pane_g6_cp1

0x54b0,	// (0x00026493) list_highlight_pane_g7_cp1

0x54b8,	// (0x0002649b) list_highlight_pane_g8_cp1

0x54c0,	// (0x000264a3) list_highlight_pane_g9_cp1

0xd673,	// (0x0002e656) form_field_slider_pane_t3

0xd681,	// (0x0002e664) form_field_slider_pane_t4

0x53bc,	// (0x0002639f) slider_form_pane_ParamLimits

0x53bc,	// (0x0002639f) slider_form_pane

0xe626,	// (0x0002f609) control_abbreviations

0xe626,	// (0x0002f609) control_conventions

0xe626,	// (0x0002f609) control_definitions

0xe626,	// (0x0002f609) format_table_attribute

0x5bae,	// (0x00026b91) bg_popup_preview_window_pane_g9

0xe626,	// (0x0002f609) format_table_data2

0xe626,	// (0x0002f609) format_table_data3

0xe626,	// (0x0002f609) format_table_data_example

0x0008,

0xe626,	// (0x0002f609) intro_purpose

0xf8f6,	// (0x000308d9) bg_popup_preview_window_pane_g

0xe626,	// (0x0002f609) texts_category

0xe626,	// (0x0002f609) texts_graphics

0x3d1f,	// (0x00024d02) text_digital

0x3d2e,	// (0x00024d11) text_primary

0x3d3d,	// (0x00024d20) text_primary_small

0x3d4c,	// (0x00024d2f) text_secondary

0x3d5b,	// (0x00024d3e) text_title

0x634a,	// (0x0002732d) bg_passive_tab_pane_g1_cp3_srt

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp3_srt

0x6353,	// (0x00027336) bg_passive_tab_pane_g3_cp3_srt

0x150a,	// (0x000224ed) bg_active_tab_pane_cp3_srt_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp3_srt

0x635c,	// (0x0002733f) tabs_4_active_pane_srt_g1

0xda86,	// (0x0002ea69) tabs_4_active_pane_srt_t1_ParamLimits

0xda86,	// (0x0002ea69) tabs_4_active_pane_srt_t1

0x634a,	// (0x0002732d) bg_active_tab_pane_g1_cp3_copy1

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp3_copy1

0x6353,	// (0x00027336) bg_active_tab_pane_g3_cp3_copy1

0x11fe,	// (0x000221e1) tabs_2_long_active_pane_srt_ParamLimits

0x11fe,	// (0x000221e1) tabs_2_long_active_pane_srt

0x11fe,	// (0x000221e1) tabs_2_long_passive_pane_srt_ParamLimits

0x11fe,	// (0x000221e1) tabs_2_long_passive_pane_srt

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp4_srt_ParamLimits

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp4_srt

0x5ffe,	// (0x00026fe1) bg_passive_tab_pane_g1_cp4_srt

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp4_srt

0x6007,	// (0x00026fea) bg_passive_tab_pane_g3_cp4_srt

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp4_srt_ParamLimits

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp4_srt

0xd87c,	// (0x0002e85f) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd87c,	// (0x0002e85f) tabs_2_long_active_pane_srt_t1

0x5ffe,	// (0x00026fe1) bg_active_tab_pane_g1_cp4_srt

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp4_srt

0x6007,	// (0x00026fea) bg_active_tab_pane_g3_cp4_srt

0x150a,	// (0x000224ed) tabs_3_long_active_pane_srt_ParamLimits

0x150a,	// (0x000224ed) tabs_3_long_active_pane_srt

0x150a,	// (0x000224ed) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x150a,	// (0x000224ed) tabs_3_long_passive_pane_cp_srt

0x150a,	// (0x000224ed) tabs_3_long_passive_pane_srt_ParamLimits

0x150a,	// (0x000224ed) tabs_3_long_passive_pane_srt

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp5_srt_ParamLimits

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp5_srt

0x3a3d,	// (0x00024a20) bg_passive_tab_pane_g1_cp5_srt

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp5_srt

0x3a46,	// (0x00024a29) bg_passive_tab_pane_g3_cp5_srt

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp5_srt_ParamLimits

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp5_srt

0xd866,	// (0x0002e849) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd866,	// (0x0002e849) tabs_3_long_active_pane_srt_t1

0x3a3d,	// (0x00024a20) bg_active_tab_pane_g1_cp5_srt

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp5_srt

0x3a46,	// (0x00024a29) bg_active_tab_pane_g3_cp5_srt

0x5fde,	// (0x00026fc1) navi_text_pane_srt_t1

0x5fd6,	// (0x00026fb9) navi_icon_pane_srt_g1

0x3f32,	// (0x00024f15) midp_editing_number_pane_srt

0x3d6a,	// (0x00024d4d) midp_ticker_pane_srt

0x3f3a,	// (0x00024f1d) midp_ticker_pane_srt_g1

0x3f42,	// (0x00024f25) midp_ticker_pane_srt_g2

0x0001,

0xf785,	// (0x00030768) midp_ticker_pane_srt_g

0x3f4a,	// (0x00024f2d) midp_ticker_pane_srt_t1

0x5fc7,	// (0x00026faa) midp_editing_number_pane_t1_copy1

0xc207,	// (0x0002d1ea) listscroll_midp_pane

0xc207,	// (0x0002d1ea) midp_form_pane

0x3de0,	// (0x00024dc3) midp_info_popup_window_ParamLimits

0x3de0,	// (0x00024dc3) midp_info_popup_window

0x31c4,	// (0x000241a7) bg_popup_sub_pane_cp50_ParamLimits

0x31c4,	// (0x000241a7) bg_popup_sub_pane_cp50

0x50b6,	// (0x00026099) listscroll_midp_info_pane_ParamLimits

0x50b6,	// (0x00026099) listscroll_midp_info_pane

0x509e,	// (0x00026081) listscroll_form_midp_pane_ParamLimits

0x509e,	// (0x00026081) listscroll_form_midp_pane

0x50aa,	// (0x0002608d) scroll_bar_cp050

0xd667,	// (0x0002e64a) list_midp_pane

0x6dd4,	// (0x00027db7) signal_pane_g2_cp

0x4fb8,	// (0x00025f9b) listscroll_midp_info_pane_t1_ParamLimits

0x4fb8,	// (0x00025f9b) listscroll_midp_info_pane_t1

0x4fd0,	// (0x00025fb3) listscroll_midp_info_pane_t2_ParamLimits

0x4fd0,	// (0x00025fb3) listscroll_midp_info_pane_t2

0x500e,	// (0x00025ff1) listscroll_midp_info_pane_t3_ParamLimits

0x500e,	// (0x00025ff1) listscroll_midp_info_pane_t3

0x5048,	// (0x0002602b) listscroll_midp_info_pane_t4_ParamLimits

0x5048,	// (0x0002602b) listscroll_midp_info_pane_t4

0x0003,

0xf831,	// (0x00030814) listscroll_midp_info_pane_t_ParamLimits

0xf831,	// (0x00030814) listscroll_midp_info_pane_t

0x328e,	// (0x00024271) scroll_pane_cp21

0x4f52,	// (0x00025f35) form_midp_field_choice_group_pane

0x4f5b,	// (0x00025f3e) form_midp_field_text_pane

0x4f9e,	// (0x00025f81) form_midp_field_time_pane

0x4fa6,	// (0x00025f89) form_midp_gauge_slider_pane

0x4faf,	// (0x00025f92) form_midp_gauge_wait_pane

0xe626,	// (0x0002f609) form_midp_image_pane

0xb74a,	// (0x0002c72d) list_single_midp_pane_ParamLimits

0xb74a,	// (0x0002c72d) list_single_midp_pane

0xd63f,	// (0x0002e622) form_midp_field_text_pane_t1

0x4d2a,	// (0x00025d0d) input_focus_pane_cp050

0x4f41,	// (0x00025f24) list_midp_form_text_pane

0x4ee5,	// (0x00025ec8) form_midp_field_choice_group_pane_t1

0x4ef3,	// (0x00025ed6) input_focus_pane_cp051

0x4f07,	// (0x00025eea) list_midp_choice_pane

0xe626,	// (0x0002f609) status_idle_pane

0x4ec9,	// (0x00025eac) form_midp_field_time_pane_t1

0xe61c,	// (0x0002f5ff) wait_anim_pane_g2_copy1

0x4ed7,	// (0x00025eba) form_midp_field_time_pane_t2

0x0001,

0x3e90,	// (0x00024e73) aid_navinavi_width_2_pane

0xf82c,	// (0x0003080f) form_midp_field_time_pane_t

0xe626,	// (0x0002f609) input_focus_pane_cp052

0xe626,	// (0x0002f609) bg_input_focus_pane_cp040

0x4e89,	// (0x00025e6c) form_midp_gauge_slider_pane_t1

0x4e97,	// (0x00025e7a) form_midp_gauge_slider_pane_t2

0xd623,	// (0x0002e606) form_midp_gauge_slider_pane_t3

0xd631,	// (0x0002e614) form_midp_gauge_slider_pane_t4

0x0003,

0xf823,	// (0x00030806) form_midp_gauge_slider_pane_t

0x4ec1,	// (0x00025ea4) form_midp_slider_pane

0x11fe,	// (0x000221e1) bg_input_focus_pane_cp041_ParamLimits

0x11fe,	// (0x000221e1) bg_input_focus_pane_cp041

0x4e56,	// (0x00025e39) form_midp_gauge_wait_pane_t1_ParamLimits

0x4e56,	// (0x00025e39) form_midp_gauge_wait_pane_t1

0x4e68,	// (0x00025e4b) form_midp_gauge_wait_pane_t2_ParamLimits

0x4e68,	// (0x00025e4b) form_midp_gauge_wait_pane_t2

0x0001,

0xf81e,	// (0x00030801) form_midp_gauge_wait_pane_t_ParamLimits

0xf81e,	// (0x00030801) form_midp_gauge_wait_pane_t

0x4e7a,	// (0x00025e5d) form_midp_wait_pane_ParamLimits

0x4e7a,	// (0x00025e5d) form_midp_wait_pane

0x4e1e,	// (0x00025e01) form_midp_image_pane_g1

0x4e27,	// (0x00025e0a) form_midp_image_pane_t1

0x4e36,	// (0x00025e19) form_midp_image_pane_t2

0x4e45,	// (0x00025e28) form_midp_image_pane_t3

0x0002,

0xf817,	// (0x000307fa) form_midp_image_pane_t

0x4e15,	// (0x00025df8) list_single_midp_pane_g1

0x05f6,	// (0x000215d9) list_single_midp_pane_t1

0xd60c,	// (0x0002e5ef) list_midp_form_item_pane_ParamLimits

0xd60c,	// (0x0002e5ef) list_midp_form_item_pane

0x3e38,	// (0x00024e1b) list_midp_form_item_pane_t1

0x3e47,	// (0x00024e2a) midp_ticker_pane_g1

0x3e53,	// (0x00024e36) midp_ticker_pane_g2

0x0001,

0xf76b,	// (0x0003074e) midp_ticker_pane_g

0xc2af,	// (0x0002d292) midp_ticker_pane_t1

0xda0b,	// (0x0002e9ee) midp_editing_number_pane_t1

0x6224,	// (0x00027207) midp_editing_number_pane

0x6233,	// (0x00027216) midp_ticker_pane

0x5fb7,	// (0x00026f9a) ai_message_heading_pane

0xe626,	// (0x0002f609) bg_popup_window_pane_cp14

0x5fbf,	// (0x00026fa2) listscroll_ai_message_pane

0x5f3d,	// (0x00026f20) ai_message_heading_pane_g1_ParamLimits

0x5f3d,	// (0x00026f20) ai_message_heading_pane_g1

0x5f49,	// (0x00026f2c) ai_message_heading_pane_g2_ParamLimits

0x5f49,	// (0x00026f2c) ai_message_heading_pane_g2

0x5f57,	// (0x00026f3a) ai_message_heading_pane_g3_ParamLimits

0x5f57,	// (0x00026f3a) ai_message_heading_pane_g3

0x5f63,	// (0x00026f46) ai_message_heading_pane_g4_ParamLimits

0x5f63,	// (0x00026f46) ai_message_heading_pane_g4

0x0003,

0xf958,	// (0x0003093b) ai_message_heading_pane_g_ParamLimits

0xf958,	// (0x0003093b) ai_message_heading_pane_g

0x5f6f,	// (0x00026f52) ai_message_heading_pane_t1_ParamLimits

0x5f6f,	// (0x00026f52) ai_message_heading_pane_t1

0x5f89,	// (0x00026f6c) ai_message_heading_pane_t2_ParamLimits

0x5f89,	// (0x00026f6c) ai_message_heading_pane_t2

0x0001,

0xf961,	// (0x00030944) ai_message_heading_pane_t_ParamLimits

0xf961,	// (0x00030944) ai_message_heading_pane_t

0x5f9d,	// (0x00026f80) bg_popup_heading_pane_cp1_ParamLimits

0x5f9d,	// (0x00026f80) bg_popup_heading_pane_cp1

0x5f2b,	// (0x00026f0e) list_ai_message_pane_ParamLimits

0x5f2b,	// (0x00026f0e) list_ai_message_pane

0x328e,	// (0x00024271) scroll_pane_cp10

0x5ec7,	// (0x00026eaa) list_ai_message_pane_g1

0x5ecf,	// (0x00026eb2) list_ai_message_pane_g2

0x0001,

0xf935,	// (0x00030918) list_ai_message_pane_g

0x5ed7,	// (0x00026eba) list_ai_message_pane_t1_ParamLimits

0x5ed7,	// (0x00026eba) list_ai_message_pane_t1

0x5eec,	// (0x00026ecf) list_ai_message_pane_t2_ParamLimits

0x5eec,	// (0x00026ecf) list_ai_message_pane_t2

0x5f01,	// (0x00026ee4) list_ai_message_pane_t3_ParamLimits

0x5f01,	// (0x00026ee4) list_ai_message_pane_t3

0x5f16,	// (0x00026ef9) list_ai_message_pane_t4_ParamLimits

0x5f16,	// (0x00026ef9) list_ai_message_pane_t4

0x0003,

0xf93a,	// (0x0003091d) list_ai_message_pane_t_ParamLimits

0xf93a,	// (0x0003091d) list_ai_message_pane_t

0xd84c,	// (0x0002e82f) cell_ai_soft_ind_pane_ParamLimits

0xd84c,	// (0x0002e82f) cell_ai_soft_ind_pane

0x3e71,	// (0x00024e54) cell_ai_soft_ind_pane_g1_ParamLimits

0x3e71,	// (0x00024e54) cell_ai_soft_ind_pane_g1

0xe626,	// (0x0002f609) grid_highlight_cp1

0x3e7e,	// (0x00024e61) text_secondary_cp56_ParamLimits

0x3e7e,	// (0x00024e61) text_secondary_cp56

0x5e85,	// (0x00026e68) example_general_pane_ParamLimits

0x5e85,	// (0x00026e68) example_general_pane

0x5e91,	// (0x00026e74) example_parent_pane_g1_ParamLimits

0x5e91,	// (0x00026e74) example_parent_pane_g1

0x5e9d,	// (0x00026e80) example_parent_pane_t1_ParamLimits

0x5e9d,	// (0x00026e80) example_parent_pane_t1

0xc844,	// (0x0002d827) popup_preview_text_window_ParamLimits

0xc844,	// (0x0002d827) popup_preview_text_window

0x3c99,	// (0x00024c7c) list_single_pane_cp2_g4

0x15c0,	// (0x000225a3) bg_popup_preview_window_pane_ParamLimits

0x15c0,	// (0x000225a3) bg_popup_preview_window_pane

0x5bb8,	// (0x00026b9b) popup_preview_text_window_t1_ParamLimits

0x5bb8,	// (0x00026b9b) popup_preview_text_window_t1

0x5bd6,	// (0x00026bb9) popup_preview_text_window_t2_ParamLimits

0x5bd6,	// (0x00026bb9) popup_preview_text_window_t2

0x5c1f,	// (0x00026c02) popup_preview_text_window_t3_ParamLimits

0x5c1f,	// (0x00026c02) popup_preview_text_window_t3

0x5c64,	// (0x00026c47) popup_preview_text_window_t4_ParamLimits

0x5c64,	// (0x00026c47) popup_preview_text_window_t4

0x0004,

0xf909,	// (0x000308ec) popup_preview_text_window_t_ParamLimits

0xf909,	// (0x000308ec) popup_preview_text_window_t

0x5ce2,	// (0x00026cc5) scroll_pane_cp11

0x4c38,	// (0x00025c1b) bg_popup_preview_window_pane_g1

0x5b6c,	// (0x00026b4f) bg_popup_preview_window_pane_g2

0x5b76,	// (0x00026b59) bg_popup_preview_window_pane_g3

0x5b80,	// (0x00026b63) bg_popup_preview_window_pane_g4

0x5b8a,	// (0x00026b6d) bg_popup_preview_window_pane_g5

0x5b94,	// (0x00026b77) bg_popup_preview_window_pane_g6

0x5b9c,	// (0x00026b7f) bg_popup_preview_window_pane_g7

0x5ba4,	// (0x00026b87) bg_popup_preview_window_pane_g8

0x0d3d,	// (0x00021d20) aid_popup_width_pane

0xc7b4,	// (0x0002d797) popup_midp_note_alarm_window_ParamLimits

0xc7b4,	// (0x0002d797) popup_midp_note_alarm_window

0x3100,	// (0x000240e3) data_form_pane_ParamLimits

0xb5a6,	// (0x0002c589) form_field_data_pane_g1

0xb5b0,	// (0x0002c593) form_field_data_pane_t1_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_ParamLimits

0x311a,	// (0x000240fd) data_form_wide_pane_ParamLimits

0x030e,	// (0x000212f1) form_field_data_wide_pane_g1

0x031a,	// (0x000212fd) form_field_data_wide_pane_t1_ParamLimits

0x1886,	// (0x00022869) input_focus_pane_cp6_ParamLimits

0xbf98,	// (0x0002cf7b) input_popup_find_pane_g1_ParamLimits

0xbf98,	// (0x0002cf7b) input_popup_find_pane_g1

0x1b7e,	// (0x00022b61) aid_navi_side_left_pane

0x1b93,	// (0x00022b76) aid_navi_side_right_pane

0x557b,	// (0x0002655e) bg_popup_window_pane_cp30_ParamLimits

0x557b,	// (0x0002655e) bg_popup_window_pane_cp30

0x55f5,	// (0x000265d8) popup_midp_note_alarm_window_g1_ParamLimits

0x55f5,	// (0x000265d8) popup_midp_note_alarm_window_g1

0x5625,	// (0x00026608) popup_midp_note_alarm_window_t1_ParamLimits

0x5625,	// (0x00026608) popup_midp_note_alarm_window_t1

0x56c6,	// (0x000266a9) popup_midp_note_alarm_window_t2_ParamLimits

0x56c6,	// (0x000266a9) popup_midp_note_alarm_window_t2

0x5774,	// (0x00026757) popup_midp_note_alarm_window_t3_ParamLimits

0x5774,	// (0x00026757) popup_midp_note_alarm_window_t3

0x57a6,	// (0x00026789) popup_midp_note_alarm_window_t4_ParamLimits

0x57a6,	// (0x00026789) popup_midp_note_alarm_window_t4

0x57cc,	// (0x000267af) popup_midp_note_alarm_window_t5_ParamLimits

0x57cc,	// (0x000267af) popup_midp_note_alarm_window_t5

0x000a,

0xf8a6,	// (0x00030889) popup_midp_note_alarm_window_t_ParamLimits

0xf8a6,	// (0x00030889) popup_midp_note_alarm_window_t

0x5878,	// (0x0002685b) wait_bar_pane_cp1_ParamLimits

0x5878,	// (0x0002685b) wait_bar_pane_cp1

0xe626,	// (0x0002f609) wait_anim_pane_copy1

0xe626,	// (0x0002f609) wait_border_pane_copy1

0x5260,	// (0x00026243) wait_border_pane_g1_copy1

0x0334,	// (0x00021317) form_field_popup_pane_g1

0xb5ca,	// (0x0002c5ad) form_field_popup_pane_t1_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_cp7_ParamLimits

0x3146,	// (0x00024129) list_form_pane_ParamLimits

0x0356,	// (0x00021339) form_field_popup_wide_pane_g1

0x035e,	// (0x00021341) form_field_popup_wide_pane_t1_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_cp8_ParamLimits

0x3152,	// (0x00024135) list_form_wide_pane_ParamLimits

0x63d7,	// (0x000273ba) aid_size_cell_graphic_pane

0xb649,	// (0x0002c62c) data_form_pane_t1_ParamLimits

0xb779,	// (0x0002c75c) data_form_wide_pane_t1_ParamLimits

0xd29c,	// (0x0002e27f) bg_status_flat_pane

0xbbb8,	// (0x0002cb9b) title_pane_t1_ParamLimits

0x11c6,	// (0x000221a9) title_pane_t2_ParamLimits

0x11ec,	// (0x000221cf) title_pane_t3_ParamLimits

0xf573,	// (0x00030556) title_pane_t_ParamLimits

0xc0a8,	// (0x0002d08b) level_1_signal_ParamLimits

0xc0ba,	// (0x0002d09d) level_2_signal_ParamLimits

0xc0cd,	// (0x0002d0b0) level_3_signal_ParamLimits

0xc0e0,	// (0x0002d0c3) level_4_signal_ParamLimits

0xc0f3,	// (0x0002d0d6) level_5_signal_ParamLimits

0xc106,	// (0x0002d0e9) level_6_signal_ParamLimits

0xc119,	// (0x0002d0fc) level_7_signal_ParamLimits

0xc0a8,	// (0x0002d08b) level_1_battery_ParamLimits

0xc0ba,	// (0x0002d09d) level_2_battery_ParamLimits

0xc0cd,	// (0x0002d0b0) level_3_battery_ParamLimits

0xc0e0,	// (0x0002d0c3) level_4_battery_ParamLimits

0xc0f3,	// (0x0002d0d6) level_5_battery_ParamLimits

0xc106,	// (0x0002d0e9) level_6_battery_ParamLimits

0xc119,	// (0x0002d0fc) level_7_battery_ParamLimits

0x5480,	// (0x00026463) bg_status_flat_pane_g1

0x5488,	// (0x0002646b) bg_status_flat_pane_g2

0x5490,	// (0x00026473) bg_status_flat_pane_g3

0x5498,	// (0x0002647b) bg_status_flat_pane_g4

0x54a0,	// (0x00026483) bg_status_flat_pane_g5

0x54a8,	// (0x0002648b) bg_status_flat_pane_g6

0x54b0,	// (0x00026493) bg_status_flat_pane_g7

0xbc4c,	// (0x0002cc2f) tabs_3_active_pane_t1_ParamLimits

0xbc4c,	// (0x0002cc2f) tabs_3_passive_pane_t1_ParamLimits

0xbc66,	// (0x0002cc49) tabs_4_active_pane_t1_ParamLimits

0xbc66,	// (0x0002cc49) tabs_4_1_passive_pane_t1_ParamLimits

0xbfae,	// (0x0002cf91) tabs_2_active_pane_t1_ParamLimits

0xbfae,	// (0x0002cf91) tabs_2_passive_pane_t1_ParamLimits

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp4_ParamLimits

0xbfc0,	// (0x0002cfa3) tabs_2_long_active_pane_t1_ParamLimits

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp4_ParamLimits

0x20d7,	// (0x000230ba) list_single_midp_graphic_pane_t1_ParamLimits

0x11fe,	// (0x000221e1) bg_active_tab_pane_cp5_ParamLimits

0xbfd3,	// (0x0002cfb6) tabs_3_long_active_pane_t1_ParamLimits

0x40f0,	// (0x000250d3) bg_passive_tab_pane_cp5_ParamLimits

0x20d7,	// (0x000230ba) list_single_midp_graphic_pane_t1

0xd29c,	// (0x0002e27f) bg_status_flat_pane_ParamLimits

0x48a5,	// (0x00025888) indicator_pane_cp2_ParamLimits

0x48a5,	// (0x00025888) indicator_pane_cp2

0xd431,	// (0x0002e414) navi_pane_srt_ParamLimits

0xd431,	// (0x0002e414) navi_pane_srt

0x4a0b,	// (0x000259ee) popup_clock_digital_analogue_window_cp1

0x136e,	// (0x00022351) indicator_pane_t1

0x3d6a,	// (0x00024d4d) copy_highlight_pane

0x3d6a,	// (0x00024d4d) cursor_graphics_pane

0x3d6a,	// (0x00024d4d) graphic_within_text_pane

0x3d6a,	// (0x00024d4d) link_highlight_pane

0x5ca5,	// (0x00026c88) popup_preview_text_window_t5_ParamLimits

0x5ca5,	// (0x00026c88) popup_preview_text_window_t5

0x3e9a,	// (0x00024e7d) cursor_digital_pane

0x3e9a,	// (0x00024e7d) cursor_primary_pane

0x3eab,	// (0x00024e8e) cursor_primary_small_pane

0x3eb3,	// (0x00024e96) cursor_secondary_pane

0x3ebb,	// (0x00024e9e) cursor_title_pane

0x3e9a,	// (0x00024e7d) link_highlight_digital_pane

0x3ea2,	// (0x00024e85) link_highlight_primary_pane

0x3eab,	// (0x00024e8e) link_highlight_primary_small_pane

0x3eb3,	// (0x00024e96) link_highlight_secondary_pane

0x3ebb,	// (0x00024e9e) link_highlight_title_pane

0x3e9a,	// (0x00024e7d) copy_highlight_digital_pane

0x3e9a,	// (0x00024e7d) copy_highlight_primary_pane

0x3eab,	// (0x00024e8e) copy_highlight_primary_small_pane

0x3eb3,	// (0x00024e96) copy_highlight_secondary_pane

0x3ebb,	// (0x00024e9e) copy_highlight_title_pane

0x3eb3,	// (0x00024e96) graphic_text_digital_pane

0x551e,	// (0x00026501) graphic_text_primary_pane

0x5527,	// (0x0002650a) graphic_text_primary_small_pane

0x3eab,	// (0x00024e8e) graphic_text_secondary_pane

0x3e9a,	// (0x00024e7d) graphic_text_title_pane

0xc2c1,	// (0x0002d2a4) cursor_primary_pane_g1

0x5510,	// (0x000264f3) cursor_text_primary_t1

0xd6a3,	// (0x0002e686) cursor_primary_small_pane_g1

0x5502,	// (0x000264e5) cursor_text_primary_small_t1

0xd699,	// (0x0002e67c) cursor_primary_small_pane_g1_copy1

0x54ea,	// (0x000264cd) cursor_text_primary_small_t1_copy1

0x54c8,	// (0x000264ab) cursor_text_title_t1

0xd68f,	// (0x0002e672) cursor_title_pane_g1

0xc2c1,	// (0x0002d2a4) cursor_digital_pane_g1

0x3ecd,	// (0x00024eb0) cursor_text_digital_t1

0x3edb,	// (0x00024ebe) link_highlight_primary_pane_g1

0x5471,	// (0x00026454) link_highlight_primary_pane_t1

0x3edb,	// (0x00024ebe) link_highlight_primary_small_pane_g1

0x3ee3,	// (0x00024ec6) link_highlight_primary_small_pane_t1

0x3ef2,	// (0x00024ed5) link_highlight_secondary_pane_g1

0x3efa,	// (0x00024edd) link_highlight_secondary_pane_t1

0x53e5,	// (0x000263c8) link_highlight_title_pane_g1

0x53ed,	// (0x000263d0) link_highlight_title_pane_t1

0x53ce,	// (0x000263b1) link_highlight_digital_pane_g1

0x53d6,	// (0x000263b9) link_highlight_digital_pane_t1

0x5296,	// (0x00026279) copy_highlight_primary_pane_g1

0x52ad,	// (0x00026290) copy_highlight_primary_pane_t1

0x5296,	// (0x00026279) copy_highlight_primary_small_pane_g1

0x529e,	// (0x00026281) copy_highlight_primary_small_pane_t1

0x3f09,	// (0x00024eec) copy_highlight_secondary_pane_g1

0x3f11,	// (0x00024ef4) copy_highlight_secondary_pane_t1

0x527f,	// (0x00026262) copy_highlight_title_pane_g1

0x5287,	// (0x0002626a) copy_highlight_title_pane_t1

0x5296,	// (0x00026279) copy_highlight_digital_pane_g1

0x65a7,	// (0x0002758a) copy_highlight_digital_pane_t1

0x64fb,	// (0x000274de) graphic_text_primary_pane_g1

0x658b,	// (0x0002756e) graphic_text_primary_pane_t1

0x6599,	// (0x0002757c) graphic_text_primary_pane_t2

0x0001,

0xf9d5,	// (0x000309b8) graphic_text_primary_pane_t

0x6567,	// (0x0002754a) graphic_text_primary_small_pane_g1

0x656f,	// (0x00027552) graphic_text_primary_small_pane_t1

0x657d,	// (0x00027560) graphic_text_primary_small_pane_t2

0x0001,

0xf9d0,	// (0x000309b3) graphic_text_primary_small_pane_t

0x6543,	// (0x00027526) graphic_text_secondary_pane_g1

0x654b,	// (0x0002752e) graphic_text_secondary_pane_t1

0x6559,	// (0x0002753c) graphic_text_secondary_pane_t2

0x0001,

0xf9cb,	// (0x000309ae) graphic_text_secondary_pane_t

0x651f,	// (0x00027502) graphic_text_title_pane_g1

0x6527,	// (0x0002750a) graphic_text_title_pane_t1

0x6535,	// (0x00027518) graphic_text_title_pane_t2

0x0001,

0xf9c6,	// (0x000309a9) graphic_text_title_pane_t

0x64fb,	// (0x000274de) graphic_text_digital_pane_g1

0x6503,	// (0x000274e6) graphic_text_digital_pane_t1

0x6511,	// (0x000274f4) graphic_text_digital_pane_t2

0x0001,

0xf9c1,	// (0x000309a4) graphic_text_digital_pane_t

0x11fe,	// (0x000221e1) navi_icon_pane_srt_ParamLimits

0x11fe,	// (0x000221e1) navi_icon_pane_srt

0xe626,	// (0x0002f609) navi_midp_pane_srt

0xe626,	// (0x0002f609) navi_navi_pane_srt

0x11fe,	// (0x000221e1) navi_text_pane_srt_ParamLimits

0x11fe,	// (0x000221e1) navi_text_pane_srt

0x64c6,	// (0x000274a9) navi_navi_icon_text_pane_srt

0x64ce,	// (0x000274b1) navi_navi_pane_srt_g1_ParamLimits

0x64ce,	// (0x000274b1) navi_navi_pane_srt_g1

0x64e0,	// (0x000274c3) navi_navi_pane_srt_g2_ParamLimits

0x64e0,	// (0x000274c3) navi_navi_pane_srt_g2

0x0001,

0xf9bc,	// (0x0003099f) navi_navi_pane_srt_g_ParamLimits

0xf9bc,	// (0x0003099f) navi_navi_pane_srt_g

0x64f2,	// (0x000274d5) navi_navi_tabs_pane_srt

0x64c6,	// (0x000274a9) navi_navi_text_pane_srt

0x64c6,	// (0x000274a9) navi_navi_volume_pane_srt

0x64b7,	// (0x0002749a) navi_navi_text_pane_srt_t1

0x2431,	// (0x00023414) navi_navi_volume_pane_srt_g1

0x2439,	// (0x0002341c) volume_small_pane_srt_ParamLimits

0x2439,	// (0x0002341c) volume_small_pane_srt

0x1e65,	// (0x00022e48) volume_small_pane_srt_g1_ParamLimits

0x1e65,	// (0x00022e48) volume_small_pane_srt_g1

0x1e75,	// (0x00022e58) volume_small_pane_srt_g2_ParamLimits

0x1e75,	// (0x00022e58) volume_small_pane_srt_g2

0x1e86,	// (0x00022e69) volume_small_pane_srt_g3_ParamLimits

0x1e86,	// (0x00022e69) volume_small_pane_srt_g3

0x1e97,	// (0x00022e7a) volume_small_pane_srt_g4_ParamLimits

0x1e97,	// (0x00022e7a) volume_small_pane_srt_g4

0x1ea8,	// (0x00022e8b) volume_small_pane_srt_g5_ParamLimits

0x1ea8,	// (0x00022e8b) volume_small_pane_srt_g5

0x1eb9,	// (0x00022e9c) volume_small_pane_srt_g6_ParamLimits

0x1eb9,	// (0x00022e9c) volume_small_pane_srt_g6

0x1eca,	// (0x00022ead) volume_small_pane_srt_g7_ParamLimits

0x1eca,	// (0x00022ead) volume_small_pane_srt_g7

0x1edb,	// (0x00022ebe) volume_small_pane_srt_g8_ParamLimits

0x1edb,	// (0x00022ebe) volume_small_pane_srt_g8

0x1eec,	// (0x00022ecf) volume_small_pane_srt_g9_ParamLimits

0x1eec,	// (0x00022ecf) volume_small_pane_srt_g9

0x1efd,	// (0x00022ee0) volume_small_pane_srt_g10_ParamLimits

0x1efd,	// (0x00022ee0) volume_small_pane_srt_g10

0x0009,

0xf770,	// (0x00030753) volume_small_pane_srt_g_ParamLimits

0xf770,	// (0x00030753) volume_small_pane_srt_g

0x1675,	// (0x00022658) query_popup_data_pane_cp2

0x649d,	// (0x00027480) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x649d,	// (0x00027480) navi_navi_icon_text_pane_srt_t1

0x551e,	// (0x00026501) navi_tabs_2_long_pane_srt

0x551e,	// (0x00026501) navi_tabs_2_pane_srt

0x551e,	// (0x00026501) navi_tabs_3_long_pane_srt

0x551e,	// (0x00026501) navi_tabs_3_pane_srt

0x551e,	// (0x00026501) navi_tabs_4_pane_srt

0x2411,	// (0x000233f4) tabs_2_active_pane_srt_ParamLimits

0x2411,	// (0x000233f4) tabs_2_active_pane_srt

0x2421,	// (0x00023404) tabs_2_passive_pane_srt_ParamLimits

0x2421,	// (0x00023404) tabs_2_passive_pane_srt

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp1_srt

0x6469,	// (0x0002744c) bg_passive_tab_pane_g1_cp1_srt

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp1_srt

0x6472,	// (0x00027455) bg_passive_tab_pane_g3_cp1_srt

0x150a,	// (0x000224ed) bg_active_tab_pane_cp1_srt_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp1_srt

0x647b,	// (0x0002745e) tabs_2_active_pane_srt_g1

0xdb06,	// (0x0002eae9) tabs_2_active_pane_srt_t1_ParamLimits

0xdb06,	// (0x0002eae9) tabs_2_active_pane_srt_t1

0x6469,	// (0x0002744c) bg_active_tab_pane_g1_cp1_srt

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp1_srt

0x6472,	// (0x00027455) bg_active_tab_pane_g3_cp1_srt

0x23de,	// (0x000233c1) tabs_3_active_pane_srt_ParamLimits

0x23de,	// (0x000233c1) tabs_3_active_pane_srt

0x23ef,	// (0x000233d2) tabs_3_passive_pane_cp_srt_ParamLimits

0x23ef,	// (0x000233d2) tabs_3_passive_pane_cp_srt

0x2400,	// (0x000233e3) tabs_3_passive_pane_srt_ParamLimits

0x2400,	// (0x000233e3) tabs_3_passive_pane_srt

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d2a,	// (0x00025d0d) bg_passive_tab_pane_cp2_srt

0x3f20,	// (0x00024f03) bg_passive_tab_pane_g1_cp2_srt

0x39b3,	// (0x00024996) bg_passive_tab_pane_g2_cp2_srt

0x3f29,	// (0x00024f0c) bg_passive_tab_pane_g3_cp2_srt

0x150a,	// (0x000224ed) bg_active_tab_pane_cp2_srt_ParamLimits

0x150a,	// (0x000224ed) bg_active_tab_pane_cp2_srt

0x644f,	// (0x00027432) tabs_3_active_pane_srt_g1

0xdaf0,	// (0x0002ead3) tabs_3_active_pane_srt_t1_ParamLimits

0xdaf0,	// (0x0002ead3) tabs_3_active_pane_srt_t1

0x3f20,	// (0x00024f03) bg_active_tab_pane_g1_cp2_srt

0x39b3,	// (0x00024996) bg_active_tab_pane_g2_cp2_srt

0x3f29,	// (0x00024f0c) bg_active_tab_pane_g3_cp2_srt

0x2396,	// (0x00023379) tabs_4_active_pane_srt_ParamLimits

0x2396,	// (0x00023379) tabs_4_active_pane_srt

0x23a8,	// (0x0002338b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x23a8,	// (0x0002338b) tabs_4_passive_pane_cp2_srt

0x407e,	// (0x00025061) aid_size_cell_toolbar

0x6071,	// (0x00027054) main_idle_act_pane_ParamLimits

0x42b5,	// (0x00025298) popup_large_graphic_colour_window_ParamLimits

0xd165,	// (0x0002e148) popup_toolbar_window_ParamLimits

0xd165,	// (0x0002e148) popup_toolbar_window

0x06a9,	// (0x0002168c) list_single_graphic_2heading_pane_ParamLimits

0x06a9,	// (0x0002168c) list_single_graphic_2heading_pane

0x34bf,	// (0x000244a2) aid_size_cell_apps_grid_lsc_pane

0x34d1,	// (0x000244b4) aid_size_cell_apps_grid_prt_pane

0x40f0,	// (0x000250d3) bg_wml_button_pane_cp1_ParamLimits

0x40f0,	// (0x000250d3) bg_wml_button_pane_cp1

0xd63f,	// (0x0002e622) form_midp_field_text_pane_t1_ParamLimits

0x4d2a,	// (0x00025d0d) input_focus_pane_cp050_ParamLimits

0x4f41,	// (0x00025f24) list_midp_form_text_pane_ParamLimits

0x4ef3,	// (0x00025ed6) input_focus_pane_cp051_ParamLimits

0x4f07,	// (0x00025eea) list_midp_choice_pane_ParamLimits

0xd5f6,	// (0x0002e5d9) list_single_2graphic_pane_cp3_ParamLimits

0xd5f6,	// (0x0002e5d9) list_single_2graphic_pane_cp3

0x70fd,	// (0x000280e0) list_single_midp_graphic_pane_ParamLimits

0x70fd,	// (0x000280e0) list_single_midp_graphic_pane

0x0526,	// (0x00021509) list_single_graphic_2heading_pane_g1_ParamLimits

0x0526,	// (0x00021509) list_single_graphic_2heading_pane_g1

0x0532,	// (0x00021515) list_single_graphic_2heading_pane_g4_ParamLimits

0x0532,	// (0x00021515) list_single_graphic_2heading_pane_g4

0x053e,	// (0x00021521) list_single_graphic_2heading_pane_g5_ParamLimits

0x053e,	// (0x00021521) list_single_graphic_2heading_pane_g5

0x0002,

0xf7c3,	// (0x000307a6) list_single_graphic_2heading_pane_g_ParamLimits

0xf7c3,	// (0x000307a6) list_single_graphic_2heading_pane_g

0x054a,	// (0x0002152d) list_single_graphic_2heading_pane_t1_ParamLimits

0x054a,	// (0x0002152d) list_single_graphic_2heading_pane_t1

0x055e,	// (0x00021541) list_single_graphic_2heading_pane_t2_ParamLimits

0x055e,	// (0x00021541) list_single_graphic_2heading_pane_t2

0x057a,	// (0x0002155d) list_single_graphic_2heading_pane_t3_ParamLimits

0x057a,	// (0x0002155d) list_single_graphic_2heading_pane_t3

0x0002,

0xf7ca,	// (0x000307ad) list_single_graphic_2heading_pane_t_ParamLimits

0xf7ca,	// (0x000307ad) list_single_graphic_2heading_pane_t

0x4b6a,	// (0x00025b4d) bg_popup_sub_pane_cp2

0x4b94,	// (0x00025b77) grid_toobar_pane

0x2067,	// (0x0002304a) cell_toolbar_pane_ParamLimits

0x2067,	// (0x0002304a) cell_toolbar_pane

0x4bd0,	// (0x00025bb3) cell_toolbar_pane_g1_ParamLimits

0x4bd0,	// (0x00025bb3) cell_toolbar_pane_g1

0x4be4,	// (0x00025bc7) cell_toolbar_pane_g2_ParamLimits

0x4be4,	// (0x00025bc7) cell_toolbar_pane_g2

0x0001,

0xf7d8,	// (0x000307bb) cell_toolbar_pane_g_ParamLimits

0xf7d8,	// (0x000307bb) cell_toolbar_pane_g

0x4c12,	// (0x00025bf5) grid_highlight_pane_cp2_ParamLimits

0x4c12,	// (0x00025bf5) grid_highlight_pane_cp2

0x4c2c,	// (0x00025c0f) toolbar_button_pane

0x4c38,	// (0x00025c1b) toolbar_button_pane_g1

0x4c40,	// (0x00025c23) toolbar_button_pane_g2

0x4c48,	// (0x00025c2b) toolbar_button_pane_g3

0x4c50,	// (0x00025c33) toolbar_button_pane_g4

0x4c58,	// (0x00025c3b) toolbar_button_pane_g5

0x4c60,	// (0x00025c43) toolbar_button_pane_g6

0x4c68,	// (0x00025c4b) toolbar_button_pane_g7

0x4c70,	// (0x00025c53) toolbar_button_pane_g8

0x4c78,	// (0x00025c5b) toolbar_button_pane_g9

0x0009,

0xf7dd,	// (0x000307c0) toolbar_button_pane_g

0x209f,	// (0x00023082) list_single_2graphic_pane_g1_cp3_ParamLimits

0x209f,	// (0x00023082) list_single_2graphic_pane_g1_cp3

0xcad4,	// (0x0002dab7) list_single_2graphic_pane_g2_cp3_ParamLimits

0xcad4,	// (0x0002dab7) list_single_2graphic_pane_g2_cp3

0x3b94,	// (0x00024b77) list_single_2graphic_pane_g3_cp3

0xcae5,	// (0x0002dac8) list_single_2graphic_pane_g4_cp3_ParamLimits

0xcae5,	// (0x0002dac8) list_single_2graphic_pane_g4_cp3

0x20bc,	// (0x0002309f) list_single_2graphic_pane_t1_cp3_ParamLimits

0x20bc,	// (0x0002309f) list_single_2graphic_pane_t1_cp3

0x3b88,	// (0x00024b6b) list_single_midp_graphic_pane_g2_ParamLimits

0x3b88,	// (0x00024b6b) list_single_midp_graphic_pane_g2

0x4086,	// (0x00025069) aid_zoom_text_primary

0x0516,	// (0x000214f9) aid_zoom_text_secondary

0x3fdd,	// (0x00024fc0) status_small_pane_g7_ParamLimits

0x3fdd,	// (0x00024fc0) status_small_pane_g7

0x4000,	// (0x00024fe3) status_small_pane_t1_ParamLimits

0xbb94,	// (0x0002cb77) title_pane_g2

0x0003,

0xf56a,	// (0x0003054d) title_pane_g

0xbe2c,	// (0x0002ce0f) aid_size_cell_colour_1_pane_ParamLimits

0xbe2c,	// (0x0002ce0f) aid_size_cell_colour_1_pane

0xbe40,	// (0x0002ce23) aid_size_cell_colour_2_pane_ParamLimits

0xbe40,	// (0x0002ce23) aid_size_cell_colour_2_pane

0xbe54,	// (0x0002ce37) aid_size_cell_colour_3_pane_ParamLimits

0xbe54,	// (0x0002ce37) aid_size_cell_colour_3_pane

0xbe68,	// (0x0002ce4b) aid_size_cell_colour_4_pane_ParamLimits

0xbe68,	// (0x0002ce4b) aid_size_cell_colour_4_pane

0x1aba,	// (0x00022a9d) title_pane_stacon_g1_ParamLimits

0x1aba,	// (0x00022a9d) title_pane_stacon_g1

0x5304,	// (0x000262e7) popup_note_wait_window_g3_ParamLimits

0x5304,	// (0x000262e7) popup_note_wait_window_g3

0x537b,	// (0x0002635e) popup_note_wait_window_t5_ParamLimits

0x537b,	// (0x0002635e) popup_note_wait_window_t5

0xe626,	// (0x0002f609) main_feb_china_hwr_fs_writing_pane

0xc4a5,	// (0x0002d488) popup_feb_china_hwr_fs_window_ParamLimits

0xc4a5,	// (0x0002d488) popup_feb_china_hwr_fs_window

0xcaf1,	// (0x0002dad4) aid_size_cell_hwr_fs_ParamLimits

0xcaf1,	// (0x0002dad4) aid_size_cell_hwr_fs

0x4d2a,	// (0x00025d0d) bg_popup_sub_pane_cp3_ParamLimits

0x4d2a,	// (0x00025d0d) bg_popup_sub_pane_cp3

0xcb06,	// (0x0002dae9) grid_hwr_fs_pane_ParamLimits

0xcb06,	// (0x0002dae9) grid_hwr_fs_pane

0x211a,	// (0x000230fd) linegrid_hwr_fs_pane_ParamLimits

0x211a,	// (0x000230fd) linegrid_hwr_fs_pane

0xcb1e,	// (0x0002db01) cell_hwr_fs_pane_ParamLimits

0xcb1e,	// (0x0002db01) cell_hwr_fs_pane

0x4d36,	// (0x00025d19) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d36,	// (0x00025d19) linegrid_hwr_fs_pane_g1

0xd5ca,	// (0x0002e5ad) linegrid_hwr_fs_pane_g2_ParamLimits

0xd5ca,	// (0x0002e5ad) linegrid_hwr_fs_pane_g2

0x4d54,	// (0x00025d37) linegrid_hwr_fs_pane_g3_ParamLimits

0x4d54,	// (0x00025d37) linegrid_hwr_fs_pane_g3

0x214e,	// (0x00023131) linegrid_hwr_fs_pane_g4_ParamLimits

0x214e,	// (0x00023131) linegrid_hwr_fs_pane_g4

0x216c,	// (0x0002314f) linegrid_hwr_fs_pane_g5_ParamLimits

0x216c,	// (0x0002314f) linegrid_hwr_fs_pane_g5

0x0004,

0xf803,	// (0x000307e6) linegrid_hwr_fs_pane_g_ParamLimits

0xf803,	// (0x000307e6) linegrid_hwr_fs_pane_g

0x4d60,	// (0x00025d43) cell_hwr_fs_pane_g1_ParamLimits

0x4d60,	// (0x00025d43) cell_hwr_fs_pane_g1

0x4aa1,	// (0x00025a84) cell_hwr_fs_pane_g2_ParamLimits

0x4aa1,	// (0x00025a84) cell_hwr_fs_pane_g2

0xd5dc,	// (0x0002e5bf) cell_hwr_fs_pane_g3_ParamLimits

0xd5dc,	// (0x0002e5bf) cell_hwr_fs_pane_g3

0xd5e9,	// (0x0002e5cc) cell_hwr_fs_pane_g4_ParamLimits

0xd5e9,	// (0x0002e5cc) cell_hwr_fs_pane_g4

0x0003,

0xf80e,	// (0x000307f1) cell_hwr_fs_pane_g_ParamLimits

0xf80e,	// (0x000307f1) cell_hwr_fs_pane_g

0xcb44,	// (0x0002db27) cell_hwr_fs_pane_t1

0xe626,	// (0x0002f609) grid_highlight_pane_cp6

0xe626,	// (0x0002f609) main_idle_act2_pane

0x3275,	// (0x00024258) aid_inside_area_popup_secondary

0xd6c3,	// (0x0002e6a6) aid_inside_area_window_primary_ParamLimits

0xd6c3,	// (0x0002e6a6) aid_inside_area_window_primary

0x65b6,	// (0x00027599) ai2_news_ticker_pane

0x65be,	// (0x000275a1) aid_size_cell_ai1_link_ParamLimits

0x65be,	// (0x000275a1) aid_size_cell_ai1_link

0x65d8,	// (0x000275bb) popup_ai2_data_window_ParamLimits

0x65d8,	// (0x000275bb) popup_ai2_data_window

0x65f6,	// (0x000275d9) popup_ai2_link_window_ParamLimits

0x65f6,	// (0x000275d9) popup_ai2_link_window

0x4d2a,	// (0x00025d0d) bg_popup_sub_pane_cp4_ParamLimits

0x4d2a,	// (0x00025d0d) bg_popup_sub_pane_cp4

0x660c,	// (0x000275ef) grid_ai2_link_pane_ParamLimits

0x660c,	// (0x000275ef) grid_ai2_link_pane

0x6623,	// (0x00027606) popup_ai2_link_window_g1_ParamLimits

0x6623,	// (0x00027606) popup_ai2_link_window_g1

0x662f,	// (0x00027612) popup_ai2_link_window_g2_ParamLimits

0x662f,	// (0x00027612) popup_ai2_link_window_g2

0x0001,

0xf9da,	// (0x000309bd) popup_ai2_link_window_g_ParamLimits

0xf9da,	// (0x000309bd) popup_ai2_link_window_g

0x6640,	// (0x00027623) ai2_mp_button_pane

0x6648,	// (0x0002762b) ai2_mp_volume_pane

0x4ef3,	// (0x00025ed6) bg_popup_sub_pane_cp5_ParamLimits

0x4ef3,	// (0x00025ed6) bg_popup_sub_pane_cp5

0x6650,	// (0x00027633) heading_ai2_gene_pane_ParamLimits

0x6650,	// (0x00027633) heading_ai2_gene_pane

0x665c,	// (0x0002763f) list_ai2_gene_pane_ParamLimits

0x665c,	// (0x0002763f) list_ai2_gene_pane

0x66e6,	// (0x000276c9) cell_ai2_link_pane_ParamLimits

0x66e6,	// (0x000276c9) cell_ai2_link_pane

0x66fc,	// (0x000276df) cell_ai2_link_pane_g1

0xe626,	// (0x0002f609) grid_highlight_pane_cp7

0x244e,	// (0x00023431) ai2_mp_volume_pane_g1

0x67cf,	// (0x000277b2) ai2_mp_volume_pane_g2

0x6744,	// (0x00027727) list_ai2_gene_pane_t1

0x67d7,	// (0x000277ba) ai2_mp_volume_pane_g3

0x0002,

0xf9f3,	// (0x000309d6) ai2_mp_volume_pane_g

0x2456,	// (0x00023439) volume_small_pane_cp3

0x67df,	// (0x000277c2) aid_size_cell_ai2_button

0x67e7,	// (0x000277ca) grid_ai2_button_pane

0x67f0,	// (0x000277d3) cell_ai2_button_pane_ParamLimits

0x67f0,	// (0x000277d3) cell_ai2_button_pane

0xe61c,	// (0x0002f5ff) cell_ai2_button_pane_g1

0xe626,	// (0x0002f609) grid_highlight_pane_cp8

0x678f,	// (0x00027772) ai2_gene_pane_t1_ParamLimits

0x678f,	// (0x00027772) ai2_gene_pane_t1

0xc431,	// (0x0002d414) aid_height_parent_landscape

0xd893,	// (0x0002e876) aid_height_set_list

0x6071,	// (0x00027054) aid_size_parent

0x63d7,	// (0x000273ba) aid_size_cell_graphic_pane_ParamLimits

0x666c,	// (0x0002764f) popup_ai2_data_window_g1_ParamLimits

0x666c,	// (0x0002764f) popup_ai2_data_window_g1

0x6678,	// (0x0002765b) ai2_news_ticker_pane_g1

0x6680,	// (0x00027663) ai2_news_ticker_pane_g2

0x0001,

0xf9df,	// (0x000309c2) ai2_news_ticker_pane_g

0x6688,	// (0x0002766b) ai2_news_ticker_pane_t1

0x6696,	// (0x00027679) ai2_news_ticker_pane_t2

0x0001,

0xf9e4,	// (0x000309c7) ai2_news_ticker_pane_t

0x6705,	// (0x000276e8) heading_ai2_gene_pane_g1

0x670d,	// (0x000276f0) heading_ai2_gene_pane_t1_ParamLimits

0x670d,	// (0x000276f0) heading_ai2_gene_pane_t1

0x6722,	// (0x00027705) list_highlight_pane_cp6

0x672a,	// (0x0002770d) ai2_gene_pane_ParamLimits

0x672a,	// (0x0002770d) ai2_gene_pane

0x6752,	// (0x00027735) list_ai2_gene_pane_t2

0x0001,

0xf9e9,	// (0x000309cc) list_ai2_gene_pane_t

0x6760,	// (0x00027743) list_highlight_pane_cp8_ParamLimits

0x6760,	// (0x00027743) list_highlight_pane_cp8

0x6771,	// (0x00027754) ai2_gene_pane_g1_ParamLimits

0x6771,	// (0x00027754) ai2_gene_pane_g1

0x6783,	// (0x00027766) ai2_gene_pane_g2_ParamLimits

0x6783,	// (0x00027766) ai2_gene_pane_g2

0x0001,

0xf9ee,	// (0x000309d1) ai2_gene_pane_g_ParamLimits

0xf9ee,	// (0x000309d1) ai2_gene_pane_g

0x30a2,	// (0x00024085) scroll_pane_cp12

0xc3f0,	// (0x0002d3d3) control_pane_t3_ParamLimits

0xc3f0,	// (0x0002d3d3) control_pane_t3

0x3ff1,	// (0x00024fd4) status_small_pane_g8_ParamLimits

0x3ff1,	// (0x00024fd4) status_small_pane_g8

0xc547,	// (0x0002d52a) popup_find_window_ParamLimits

0xc7f4,	// (0x0002d7d7) popup_note_image_window_ParamLimits

0x0592,	// (0x00021575) list_double2_graphic_pane_vc_g1_ParamLimits

0x0592,	// (0x00021575) list_double2_graphic_pane_vc_g1

0x059e,	// (0x00021581) list_double2_graphic_pane_vc_g2_ParamLimits

0x059e,	// (0x00021581) list_double2_graphic_pane_vc_g2

0x05aa,	// (0x0002158d) list_double2_graphic_pane_vc_g3_ParamLimits

0x05aa,	// (0x0002158d) list_double2_graphic_pane_vc_g3

0x0002,

0xf7d1,	// (0x000307b4) list_double2_graphic_pane_vc_g_ParamLimits

0xf7d1,	// (0x000307b4) list_double2_graphic_pane_vc_g

0x05b6,	// (0x00021599) list_double2_graphic_pane_vc_t1_ParamLimits

0x05b6,	// (0x00021599) list_double2_graphic_pane_vc_t1

0x0532,	// (0x00021515) list_single_heading_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_single_heading_pane_vc_g1

0x053e,	// (0x00021521) list_single_heading_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_single_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_heading_pane_vc_g

0x05cc,	// (0x000215af) list_single_heading_pane_vc_t1_ParamLimits

0x05cc,	// (0x000215af) list_single_heading_pane_vc_t1

0x05e2,	// (0x000215c5) list_single_heading_pane_vc_t2_ParamLimits

0x05e2,	// (0x000215c5) list_single_heading_pane_vc_t2

0x0001,

0xf7f2,	// (0x000307d5) list_single_heading_pane_vc_t_ParamLimits

0xf7f2,	// (0x000307d5) list_single_heading_pane_vc_t

0x4c80,	// (0x00025c63) list_setting_number_pane_vc_g1_ParamLimits

0x4c80,	// (0x00025c63) list_setting_number_pane_vc_g1

0x4c8c,	// (0x00025c6f) list_setting_number_pane_vc_g2_ParamLimits

0x4c8c,	// (0x00025c6f) list_setting_number_pane_vc_g2

0x0001,

0xf7f7,	// (0x000307da) list_setting_number_pane_vc_g_ParamLimits

0xf7f7,	// (0x000307da) list_setting_number_pane_vc_g

0x4c98,	// (0x00025c7b) list_setting_number_pane_vc_t1_ParamLimits

0x4c98,	// (0x00025c7b) list_setting_number_pane_vc_t1

0x4cac,	// (0x00025c8f) list_setting_number_pane_vc_t2_ParamLimits

0x4cac,	// (0x00025c8f) list_setting_number_pane_vc_t2

0x4cc8,	// (0x00025cab) list_setting_number_pane_vc_t3_ParamLimits

0x4cc8,	// (0x00025cab) list_setting_number_pane_vc_t3

0x0002,

0xf7fc,	// (0x000307df) list_setting_number_pane_vc_t_ParamLimits

0xf7fc,	// (0x000307df) list_setting_number_pane_vc_t

0x4cf0,	// (0x00025cd3) set_value_pane_vc_ParamLimits

0x4cf0,	// (0x00025cd3) set_value_pane_vc

0x06a9,	// (0x0002168c) list_double2_graphic_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double2_graphic_pane_vc

0x6255,	// (0x00027238) list_double2_large_graphic_pane_vc_ParamLimits

0x6255,	// (0x00027238) list_double2_large_graphic_pane_vc

0x06a9,	// (0x0002168c) list_double2_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double2_pane_vc

0x06a9,	// (0x0002168c) list_double_graphic_heading_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_graphic_heading_pane_vc

0x06a9,	// (0x0002168c) list_double_graphic_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_graphic_pane_vc

0x06a9,	// (0x0002168c) list_double_heading_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_heading_pane_vc

0x6255,	// (0x00027238) list_double_large_graphic_pane_vc_ParamLimits

0x6255,	// (0x00027238) list_double_large_graphic_pane_vc

0x06a9,	// (0x0002168c) list_double_number_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_number_pane_vc

0x06a9,	// (0x0002168c) list_double_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_pane_vc

0x06a9,	// (0x0002168c) list_double_time_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_double_time_pane_vc

0x06a9,	// (0x0002168c) list_setting_number_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_setting_number_pane_vc

0x06a9,	// (0x0002168c) list_setting_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_setting_pane_vc

0x06a9,	// (0x0002168c) list_single_graphic_heading_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_single_graphic_heading_pane_vc

0x06a9,	// (0x0002168c) list_single_heading_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_single_heading_pane_vc

0x06a9,	// (0x0002168c) list_single_number_heading_pane_vc_ParamLimits

0x06a9,	// (0x0002168c) list_single_number_heading_pane_vc

0x0592,	// (0x00021575) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x0592,	// (0x00021575) list_double_graphic_heading_pane_vc_g1

0x0532,	// (0x00021515) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x0532,	// (0x00021515) list_double_graphic_heading_pane_vc_g2

0x053e,	// (0x00021521) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x053e,	// (0x00021521) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9fa,	// (0x000309dd) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000309dd) list_double_graphic_heading_pane_vc_g

0x06ee,	// (0x000216d1) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x06ee,	// (0x000216d1) list_double_graphic_heading_pane_vc_t1

0x05cc,	// (0x000215af) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x05cc,	// (0x000215af) list_double_graphic_heading_pane_vc_t2

0x0001,

0xfa01,	// (0x000309e4) list_double_graphic_heading_pane_vc_t_ParamLimits

0xfa01,	// (0x000309e4) list_double_graphic_heading_pane_vc_t

0x4c80,	// (0x00025c63) list_setting_pane_vc_g1_ParamLimits

0x4c80,	// (0x00025c63) list_setting_pane_vc_g1

0x4c8c,	// (0x00025c6f) list_setting_pane_vc_g2_ParamLimits

0x4c8c,	// (0x00025c6f) list_setting_pane_vc_g2

0x0001,

0xf7f7,	// (0x000307da) list_setting_pane_vc_g_ParamLimits

0xf7f7,	// (0x000307da) list_setting_pane_vc_g

0x6a2c,	// (0x00027a0f) list_setting_pane_vc_t1_ParamLimits

0x6a2c,	// (0x00027a0f) list_setting_pane_vc_t1

0x6a40,	// (0x00027a23) list_setting_pane_vc_t2_ParamLimits

0x6a40,	// (0x00027a23) list_setting_pane_vc_t2

0x0001,

0xfa44,	// (0x00030a27) list_setting_pane_vc_t_ParamLimits

0xfa44,	// (0x00030a27) list_setting_pane_vc_t

0x4cf0,	// (0x00025cd3) set_value_pane_cp_vc_ParamLimits

0x4cf0,	// (0x00025cd3) set_value_pane_cp_vc

0x0532,	// (0x00021515) list_single_number_heading_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_single_number_heading_pane_vc_g1

0x053e,	// (0x00021521) list_single_number_heading_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_single_number_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_single_number_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_single_number_heading_pane_vc_g

0x05cc,	// (0x000215af) list_single_number_heading_pane_vc_t1_ParamLimits

0x05cc,	// (0x000215af) list_single_number_heading_pane_vc_t1

0x0702,	// (0x000216e5) list_single_number_heading_pane_vc_t2_ParamLimits

0x0702,	// (0x000216e5) list_single_number_heading_pane_vc_t2

0x0716,	// (0x000216f9) list_single_number_heading_pane_vc_t3_ParamLimits

0x0716,	// (0x000216f9) list_single_number_heading_pane_vc_t3

0x0002,

0xfa49,	// (0x00030a2c) list_single_number_heading_pane_vc_t_ParamLimits

0xfa49,	// (0x00030a2c) list_single_number_heading_pane_vc_t

0x0592,	// (0x00021575) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x0592,	// (0x00021575) list_single_graphic_heading_pane_vc_g1

0x0532,	// (0x00021515) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x0532,	// (0x00021515) list_single_graphic_heading_pane_vc_g4

0x053e,	// (0x00021521) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x053e,	// (0x00021521) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf9fa,	// (0x000309dd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf9fa,	// (0x000309dd) list_single_graphic_heading_pane_vc_g

0x05cc,	// (0x000215af) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x05cc,	// (0x000215af) list_single_graphic_heading_pane_vc_t1

0x0728,	// (0x0002170b) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x0728,	// (0x0002170b) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa50,	// (0x00030a33) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa50,	// (0x00030a33) list_single_graphic_heading_pane_vc_t

0x0532,	// (0x00021515) list_double2_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_double2_pane_vc_g1

0x053e,	// (0x00021521) list_double2_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_double2_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_double2_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_double2_pane_vc_g

0x073c,	// (0x0002171f) list_double2_pane_vc_t1_ParamLimits

0x073c,	// (0x0002171f) list_double2_pane_vc_t1

0x0752,	// (0x00021735) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x0752,	// (0x00021735) list_double2_large_graphic_pane_vc_g1

0x075e,	// (0x00021741) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x075e,	// (0x00021741) list_double2_large_graphic_pane_vc_g2

0x076a,	// (0x0002174d) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x076a,	// (0x0002174d) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf601,	// (0x000305e4) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf601,	// (0x000305e4) list_double2_large_graphic_pane_vc_g

0x0776,	// (0x00021759) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x0776,	// (0x00021759) list_double2_large_graphic_pane_vc_t1

0x078c,	// (0x0002176f) list_double_time_pane_vc_g1_ParamLimits

0x078c,	// (0x0002176f) list_double_time_pane_vc_g1

0x0798,	// (0x0002177b) list_double_time_pane_vc_g2_ParamLimits

0x0798,	// (0x0002177b) list_double_time_pane_vc_g2

0x0001,

0xfa55,	// (0x00030a38) list_double_time_pane_vc_g_ParamLimits

0xfa55,	// (0x00030a38) list_double_time_pane_vc_g

0x07a4,	// (0x00021787) list_double_time_pane_vc_t1_ParamLimits

0x07a4,	// (0x00021787) list_double_time_pane_vc_t1

0x07bd,	// (0x000217a0) list_double_time_pane_vc_t2_ParamLimits

0x07bd,	// (0x000217a0) list_double_time_pane_vc_t2

0x07fd,	// (0x000217e0) list_double_time_pane_vc_t3_ParamLimits

0x07fd,	// (0x000217e0) list_double_time_pane_vc_t3

0x0815,	// (0x000217f8) list_double_time_pane_vc_t4_ParamLimits

0x0815,	// (0x000217f8) list_double_time_pane_vc_t4

0x0003,

0xfa5a,	// (0x00030a3d) list_double_time_pane_vc_t_ParamLimits

0xfa5a,	// (0x00030a3d) list_double_time_pane_vc_t

0x0532,	// (0x00021515) list_double_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_double_pane_vc_g1

0x053e,	// (0x00021521) list_double_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_double_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_double_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_double_pane_vc_g

0x0829,	// (0x0002180c) list_double_pane_vc_t1_ParamLimits

0x0829,	// (0x0002180c) list_double_pane_vc_t1

0x083b,	// (0x0002181e) list_double_pane_vc_t2_ParamLimits

0x083b,	// (0x0002181e) list_double_pane_vc_t2

0x0001,

0xfa63,	// (0x00030a46) list_double_pane_vc_t_ParamLimits

0xfa63,	// (0x00030a46) list_double_pane_vc_t

0x0532,	// (0x00021515) list_double_number_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_double_number_pane_vc_g1

0x053e,	// (0x00021521) list_double_number_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_double_number_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_double_number_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_double_number_pane_vc_g

0x0853,	// (0x00021836) list_double_number_pane_vc_t1_ParamLimits

0x0853,	// (0x00021836) list_double_number_pane_vc_t1

0x0867,	// (0x0002184a) list_double_number_pane_vc_t2_ParamLimits

0x0867,	// (0x0002184a) list_double_number_pane_vc_t2

0x083b,	// (0x0002181e) list_double_number_pane_vc_t3_ParamLimits

0x083b,	// (0x0002181e) list_double_number_pane_vc_t3

0x0002,

0xfa68,	// (0x00030a4b) list_double_number_pane_vc_t_ParamLimits

0xfa68,	// (0x00030a4b) list_double_number_pane_vc_t

0x0879,	// (0x0002185c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x0879,	// (0x0002185c) list_double_large_graphic_pane_vc_g1

0x0885,	// (0x00021868) list_double_large_graphic_pane_vc_g2_ParamLimits

0x0885,	// (0x00021868) list_double_large_graphic_pane_vc_g2

0x076a,	// (0x0002174d) list_double_large_graphic_pane_vc_g3_ParamLimits

0x076a,	// (0x0002174d) list_double_large_graphic_pane_vc_g3

0x0894,	// (0x00021877) list_double_large_graphic_pane_vc_g4_ParamLimits

0x0894,	// (0x00021877) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa6f,	// (0x00030a52) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa6f,	// (0x00030a52) list_double_large_graphic_pane_vc_g

0x08a0,	// (0x00021883) list_double_large_graphic_pane_vc_t1_ParamLimits

0x08a0,	// (0x00021883) list_double_large_graphic_pane_vc_t1

0x08b2,	// (0x00021895) list_double_large_graphic_pane_vc_t2_ParamLimits

0x08b2,	// (0x00021895) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa78,	// (0x00030a5b) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa78,	// (0x00030a5b) list_double_large_graphic_pane_vc_t

0x0532,	// (0x00021515) list_double_heading_pane_vc_g1_ParamLimits

0x0532,	// (0x00021515) list_double_heading_pane_vc_g1

0x053e,	// (0x00021521) list_double_heading_pane_vc_g2_ParamLimits

0x053e,	// (0x00021521) list_double_heading_pane_vc_g2

0x0001,

0xf5e4,	// (0x000305c7) list_double_heading_pane_vc_g_ParamLimits

0xf5e4,	// (0x000305c7) list_double_heading_pane_vc_g

0x08cb,	// (0x000218ae) list_double_heading_pane_vc_t1_ParamLimits

0x08cb,	// (0x000218ae) list_double_heading_pane_vc_t1

0x05cc,	// (0x000215af) list_double_heading_pane_vc_t2_ParamLimits

0x05cc,	// (0x000215af) list_double_heading_pane_vc_t2

0x0001,

0xfa7d,	// (0x00030a60) list_double_heading_pane_vc_t_ParamLimits

0xfa7d,	// (0x00030a60) list_double_heading_pane_vc_t

0x08df,	// (0x000218c2) list_double_graphic_pane_vc_g1_ParamLimits

0x08df,	// (0x000218c2) list_double_graphic_pane_vc_g1

0x08ef,	// (0x000218d2) list_double_graphic_pane_vc_g2_ParamLimits

0x08ef,	// (0x000218d2) list_double_graphic_pane_vc_g2

0x08fe,	// (0x000218e1) list_double_graphic_pane_vc_g3_ParamLimits

0x08fe,	// (0x000218e1) list_double_graphic_pane_vc_g3

0x0002,

0xfa82,	// (0x00030a65) list_double_graphic_pane_vc_g_ParamLimits

0xfa82,	// (0x00030a65) list_double_graphic_pane_vc_g

0x090a,	// (0x000218ed) list_double_graphic_pane_vc_t1_ParamLimits

0x090a,	// (0x000218ed) list_double_graphic_pane_vc_t1

0x083b,	// (0x0002181e) list_double_graphic_pane_vc_t2_ParamLimits

0x083b,	// (0x0002181e) list_double_graphic_pane_vc_t2

0x0001,

0xfa89,	// (0x00030a6c) list_double_graphic_pane_vc_t_ParamLimits

0xfa89,	// (0x00030a6c) list_double_graphic_pane_vc_t

0x0d49,	// (0x00021d2c) aid_size_cell_fastswap

0xb9de,	// (0x0002c9c1) aid_size_cell_touch_ParamLimits

0xb9de,	// (0x0002c9c1) aid_size_cell_touch

0x0fb2,	// (0x00021f95) popup_fast_swap_wide_window_ParamLimits

0x0fb2,	// (0x00021f95) popup_fast_swap_wide_window

0xbb2d,	// (0x0002cb10) touch_pane_ParamLimits

0xbb2d,	// (0x0002cb10) touch_pane

0x30f8,	// (0x000240db) button_value_adjust_pane_cp2

0x30f8,	// (0x000240db) button_value_adjust_pane_cp4

0x0252,	// (0x00021235) form_field_data_pane_cp2

0xb57b,	// (0x0002c55e) form_field_data_wide_pane_cp2

0x3591,	// (0x00024574) bg_scroll_pane_ParamLimits

0x1c1f,	// (0x00022c02) scroll_handle_pane_ParamLimits

0x1c33,	// (0x00022c16) scroll_sc2_down_pane_ParamLimits

0x1c33,	// (0x00022c16) scroll_sc2_down_pane

0x35c2,	// (0x000245a5) scroll_sc2_up_pane_ParamLimits

0x35c2,	// (0x000245a5) scroll_sc2_up_pane

0xdc47,	// (0x0002ec2a) grid_wheel_folder_pane_g1_ParamLimits

0xdc47,	// (0x0002ec2a) grid_wheel_folder_pane_g1

0x1dfd,	// (0x00022de0) clock_nsta_pane_cp2_ParamLimits

0x1dfd,	// (0x00022de0) clock_nsta_pane_cp2

0xc207,	// (0x0002d1ea) listscroll_midp_pane_ParamLimits

0xc218,	// (0x0002d1fb) midp_canvas_pane

0x406c,	// (0x0002504f) nsta_clock_indic_pane

0x40c2,	// (0x000250a5) listscroll_form_pane_vc

0x40de,	// (0x000250c1) listscroll_set_pane_vc_ParamLimits

0x40de,	// (0x000250c1) listscroll_set_pane_vc

0xd2c4,	// (0x0002e2a7) clock_nsta_pane

0xd2ee,	// (0x0002e2d1) indicator_nsta_pane

0x4b6a,	// (0x00025b4d) bg_popup_sub_pane_cp2_ParamLimits

0x4b7e,	// (0x00025b61) find_pane_cp2_ParamLimits

0x4b7e,	// (0x00025b61) find_pane_cp2

0x4b94,	// (0x00025b77) grid_toobar_pane_ParamLimits

0x4cfe,	// (0x00025ce1) list_form_gen_pane_vc_ParamLimits

0x4cfe,	// (0x00025ce1) list_form_gen_pane_vc

0x4d14,	// (0x00025cf7) scroll_pane_cp8_vc_ParamLimits

0x4d14,	// (0x00025cf7) scroll_pane_cp8_vc

0x4d90,	// (0x00025d73) data_form_wide_pane_vc_ParamLimits

0x4d90,	// (0x00025d73) data_form_wide_pane_vc

0x4d9c,	// (0x00025d7f) form_field_data_wide_pane_vc_g1

0x4da4,	// (0x00025d87) form_field_data_wide_pane_vc_t1_ParamLimits

0x4da4,	// (0x00025d87) form_field_data_wide_pane_vc_t1

0x310c,	// (0x000240ef) input_focus_pane_cp6_vc_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_cp6_vc

0xd667,	// (0x0002e64a) list_midp_pane_ParamLimits

0x6443,	// (0x00027426) scroll_pane_cp16_ParamLimits

0x6443,	// (0x00027426) scroll_pane_cp16

0x50d8,	// (0x000260bb) button_value_adjust_pane_ParamLimits

0x50d8,	// (0x000260bb) button_value_adjust_pane

0xd8a4,	// (0x0002e887) button_value_adjust_pane_cp6_ParamLimits

0xd8a4,	// (0x0002e887) button_value_adjust_pane_cp6

0xd9e6,	// (0x0002e9c9) settings_code_pane_cp_ParamLimits

0xd9e6,	// (0x0002e9c9) settings_code_pane_cp

0xe61c,	// (0x0002f5ff) cell_touch_pane_g1

0xe61c,	// (0x0002f5ff) cell_touch_pane_g2

0x0001,

0xf71a,	// (0x000306fd) cell_touch_pane_g

0xdb1c,	// (0x0002eaff) cell_touch_pane_cp_ParamLimits

0xdb1c,	// (0x0002eaff) cell_touch_pane_cp

0xdb38,	// (0x0002eb1b) cell_touch_pane_ParamLimits

0xdb38,	// (0x0002eb1b) cell_touch_pane

0xe61c,	// (0x0002f5ff) scroll_sc2_down_pane_g1

0xe61c,	// (0x0002f5ff) scroll_sc2_up_pane_g1

0xe626,	// (0x0002f609) bg_set_opt_pane_cp4_vc

0x6823,	// (0x00027806) list_set_graphic_pane_vc_g1_ParamLimits

0x6823,	// (0x00027806) list_set_graphic_pane_vc_g1

0x682f,	// (0x00027812) list_set_graphic_pane_vc_g2_ParamLimits

0x682f,	// (0x00027812) list_set_graphic_pane_vc_g2

0x0001,

0xfa06,	// (0x000309e9) list_set_graphic_pane_vc_g_ParamLimits

0xfa06,	// (0x000309e9) list_set_graphic_pane_vc_g

0x683b,	// (0x0002781e) text_primary_small_cp13_vc_ParamLimits

0x683b,	// (0x0002781e) text_primary_small_cp13_vc

0x6853,	// (0x00027836) list_set_graphic_pane_vc_ParamLimits

0x6853,	// (0x00027836) list_set_graphic_pane_vc

0xe626,	// (0x0002f609) input_focus_pane_cp2_vc

0xe61c,	// (0x0002f5ff) setting_code_pane_vc_g1

0x6867,	// (0x0002784a) setting_code_pane_vc_t1

0x6875,	// (0x00027858) set_text_pane_vc_t1_ParamLimits

0x6875,	// (0x00027858) set_text_pane_vc_t1

0xe626,	// (0x0002f609) input_focus_pane_cp1_vc

0x6893,	// (0x00027876) list_set_text_pane_vc

0xe61c,	// (0x0002f5ff) setting_text_pane_vc_g1

0xe626,	// (0x0002f609) bg_set_opt_pane_cp2_vc

0x689d,	// (0x00027880) setting_slider_graphic_pane_vc_g1

0x68a5,	// (0x00027888) setting_slider_graphic_pane_vc_t1

0x68b3,	// (0x00027896) setting_slider_graphic_pane_vc_t2

0x0001,

0xfa0b,	// (0x000309ee) setting_slider_graphic_pane_vc_t

0x68c1,	// (0x000278a4) slider_set_pane_cp_vc

0x68c9,	// (0x000278ac) slider_set_pane_vc_g1

0x68d2,	// (0x000278b5) slider_set_pane_vc_g2

0x0006,

0xfa10,	// (0x000309f3) slider_set_pane_vc_g

0x3173,	// (0x00024156) set_opt_bg_pane_g1_copy1

0x317b,	// (0x0002415e) set_opt_bg_pane_g2_copy1

0x68fe,	// (0x000278e1) set_opt_bg_pane_g3_copy1

0x318b,	// (0x0002416e) set_opt_bg_pane_g4_copy1

0x3193,	// (0x00024176) set_opt_bg_pane_g5_copy1

0x319b,	// (0x0002417e) set_opt_bg_pane_g6_copy1

0x6908,	// (0x000278eb) set_opt_bg_pane_g7_copy1

0x6912,	// (0x000278f5) set_opt_bg_pane_g8_copy1

0x691c,	// (0x000278ff) set_opt_bg_pane_g9_copy1

0xe626,	// (0x0002f609) bg_set_opt_pane_cp_vc

0x6926,	// (0x00027909) setting_slider_pane_vc_t1

0x68a5,	// (0x00027888) setting_slider_pane_vc_t2

0x68b3,	// (0x00027896) setting_slider_pane_vc_t3

0x0002,

0xfa1f,	// (0x00030a02) setting_slider_pane_vc_t

0x68c1,	// (0x000278a4) slider_set_pane_vc

0x2190,	// (0x00023173) volume_set_pane_vc_g1

0x2199,	// (0x0002317c) volume_set_pane_vc_g2

0x21a2,	// (0x00023185) volume_set_pane_vc_g3

0x21ab,	// (0x0002318e) volume_set_pane_vc_g4

0x21b4,	// (0x00023197) volume_set_pane_vc_g5

0x21bd,	// (0x000231a0) volume_set_pane_vc_g6

0x21c6,	// (0x000231a9) volume_set_pane_vc_g7

0x21cf,	// (0x000231b2) volume_set_pane_vc_g8

0x21d8,	// (0x000231bb) volume_set_pane_vc_g9

0x21e1,	// (0x000231c4) volume_set_pane_vc_g10

0x0009,

0xfa26,	// (0x00030a09) volume_set_pane_vc_g

0x6935,	// (0x00027918) volume_set_pane_vc

0x693d,	// (0x00027920) button_value_adjust_pane_cp1_vc

0x6947,	// (0x0002792a) list_highlight_pane_cp2_vc

0x6950,	// (0x00027933) list_set_pane_vc_ParamLimits

0x6950,	// (0x00027933) list_set_pane_vc

0x69ba,	// (0x0002799d) main_pane_set_vc_t1_ParamLimits

0x69ba,	// (0x0002799d) main_pane_set_vc_t1

0x69cf,	// (0x000279b2) main_pane_set_vc_t2_ParamLimits

0x69cf,	// (0x000279b2) main_pane_set_vc_t2

0x69e1,	// (0x000279c4) main_pane_set_vc_t3_ParamLimits

0x69e1,	// (0x000279c4) main_pane_set_vc_t3

0x69f5,	// (0x000279d8) main_pane_set_vc_t4_ParamLimits

0x69f5,	// (0x000279d8) main_pane_set_vc_t4

0x0003,

0xfa3b,	// (0x00030a1e) main_pane_set_vc_t_ParamLimits

0xfa3b,	// (0x00030a1e) main_pane_set_vc_t

0x6a09,	// (0x000279ec) setting_code_pane_vc_ParamLimits

0x6a09,	// (0x000279ec) setting_code_pane_vc

0x6a1a,	// (0x000279fd) setting_slider_graphic_pane_vc

0x6a1a,	// (0x000279fd) setting_slider_pane_vc

0x6a1a,	// (0x000279fd) setting_text_pane_vc

0x6a1a,	// (0x000279fd) setting_volume_pane_vc

0x6a24,	// (0x00027a07) scroll_pane_cp121_vc

0x30e6,	// (0x000240c9) set_content_pane_vc

0x6a62,	// (0x00027a45) button_value_adjust_pane_g1

0x6a6b,	// (0x00027a4e) button_value_adjust_pane_g2

0x0001,

0xfa8e,	// (0x00030a71) button_value_adjust_pane_g

0x6a74,	// (0x00027a57) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a74,	// (0x00027a57) form_field_slider_wide_pane_vc_t1

0x6a88,	// (0x00027a6b) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a88,	// (0x00027a6b) form_field_slider_wide_pane_vc_t2

0x0001,

0xfa93,	// (0x00030a76) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa93,	// (0x00030a76) form_field_slider_wide_pane_vc_t

0x150a,	// (0x000224ed) input_focus_pane_cp10_vc_ParamLimits

0x150a,	// (0x000224ed) input_focus_pane_cp10_vc

0x6a9a,	// (0x00027a7d) slider_cont_pane_cp1_vc_ParamLimits

0x6a9a,	// (0x00027a7d) slider_cont_pane_cp1_vc

0x68c9,	// (0x000278ac) slider_form_pane_g1_cp2

0x68d2,	// (0x000278b5) slider_form_pane_g2_cp2

0x6ab3,	// (0x00027a96) form_field_slider_pane_vc_t3

0x6ac1,	// (0x00027aa4) form_field_slider_pane_vc_t4

0x6acf,	// (0x00027ab2) slider_form_pane_vc_ParamLimits

0x6acf,	// (0x00027ab2) slider_form_pane_vc

0x6adc,	// (0x00027abf) form_field_slider_pane_vc_t1_ParamLimits

0x6adc,	// (0x00027abf) form_field_slider_pane_vc_t1

0x6a88,	// (0x00027a6b) form_field_slider_pane_vc_t2_ParamLimits

0x6a88,	// (0x00027a6b) form_field_slider_pane_vc_t2

0x0001,

0xfaa3,	// (0x00030a86) form_field_slider_pane_vc_t_ParamLimits

0xfaa3,	// (0x00030a86) form_field_slider_pane_vc_t

0x150a,	// (0x000224ed) input_focus_pane_cp9_vc_ParamLimits

0x150a,	// (0x000224ed) input_focus_pane_cp9_vc

0x6af8,	// (0x00027adb) slider_cont_pane_vc_ParamLimits

0x6af8,	// (0x00027adb) slider_cont_pane_vc

0x6b0a,	// (0x00027aed) list_form_graphic_pane_cp_vc_ParamLimits

0x6b0a,	// (0x00027aed) list_form_graphic_pane_cp_vc

0x4d9c,	// (0x00025d7f) form_field_popup_wide_pane_vc_g1

0x6b1f,	// (0x00027b02) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b1f,	// (0x00027b02) form_field_popup_wide_pane_vc_t1

0x310c,	// (0x000240ef) input_focus_pane_cp8_vc_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_cp8_vc

0x6b36,	// (0x00027b19) list_form_wide_pane_vc_ParamLimits

0x6b36,	// (0x00027b19) list_form_wide_pane_vc

0x6b42,	// (0x00027b25) list_form_graphic_pane_vc_g1

0x6b4a,	// (0x00027b2d) list_form_graphic_pane_vc_t1_ParamLimits

0x6b4a,	// (0x00027b2d) list_form_graphic_pane_vc_t1

0x11fe,	// (0x000221e1) list_highlight_pane_cp5_vc_ParamLimits

0x11fe,	// (0x000221e1) list_highlight_pane_cp5_vc

0x6b66,	// (0x00027b49) list_form_graphic_pane_vc_ParamLimits

0x6b66,	// (0x00027b49) list_form_graphic_pane_vc

0x4d9c,	// (0x00025d7f) form_field_popup_pane_vc_g1

0x6b7c,	// (0x00027b5f) form_field_popup_pane_vc_t1_ParamLimits

0x6b7c,	// (0x00027b5f) form_field_popup_pane_vc_t1

0x310c,	// (0x000240ef) input_focus_pane_cp7_vc_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_cp7_vc

0x6b93,	// (0x00027b76) list_form_pane_vc_ParamLimits

0x6b93,	// (0x00027b76) list_form_pane_vc

0x6b9f,	// (0x00027b82) data_form_pane_vc_t1_ParamLimits

0x6b9f,	// (0x00027b82) data_form_pane_vc_t1

0x3173,	// (0x00024156) input_focus_pane_vc_g1

0x317b,	// (0x0002415e) input_focus_pane_vc_g2

0x3183,	// (0x00024166) input_focus_pane_vc_g3

0x318b,	// (0x0002416e) input_focus_pane_vc_g4

0x3193,	// (0x00024176) input_focus_pane_vc_g5

0x319b,	// (0x0002417e) input_focus_pane_vc_g6

0x31a3,	// (0x00024186) input_focus_pane_vc_g7

0x31ab,	// (0x0002418e) input_focus_pane_vc_g8

0x31b3,	// (0x00024196) input_focus_pane_vc_g9

0xe61c,	// (0x0002f5ff) input_focus_pane_vc_g10

0x0009,

0xf6a3,	// (0x00030686) input_focus_pane_vc_g

0x4d90,	// (0x00025d73) data_form_pane_vc_ParamLimits

0x4d90,	// (0x00025d73) data_form_pane_vc

0x4d9c,	// (0x00025d7f) form_field_data_pane_vc_g1

0x6bbc,	// (0x00027b9f) form_field_data_pane_vc_t1_ParamLimits

0x6bbc,	// (0x00027b9f) form_field_data_pane_vc_t1

0x310c,	// (0x000240ef) input_focus_pane_vc_ParamLimits

0x310c,	// (0x000240ef) input_focus_pane_vc

0x6bd6,	// (0x00027bb9) button_value_adjust_pane_cp3_vc

0x6bde,	// (0x00027bc1) button_value_adjust_pane_cp5_vc

0x6be6,	// (0x00027bc9) form_field_data_pane_vc_ParamLimits

0x6be6,	// (0x00027bc9) form_field_data_pane_vc

0x6c01,	// (0x00027be4) form_field_data_pane_vc_cp2

0x6c09,	// (0x00027bec) form_field_data_wide_pane_vc_ParamLimits

0x6c09,	// (0x00027bec) form_field_data_wide_pane_vc

0x6c23,	// (0x00027c06) form_field_data_wide_pane_vc_cp2

0x6c2b,	// (0x00027c0e) form_field_popup_pane_vc_ParamLimits

0x6c2b,	// (0x00027c0e) form_field_popup_pane_vc

0x6c46,	// (0x00027c29) form_field_popup_wide_pane_vc_ParamLimits

0x6c46,	// (0x00027c29) form_field_popup_wide_pane_vc

0x6c60,	// (0x00027c43) form_field_slider_pane_vc_ParamLimits

0x6c60,	// (0x00027c43) form_field_slider_pane_vc

0x6c73,	// (0x00027c56) form_field_slider_wide_pane_vc_ParamLimits

0x6c73,	// (0x00027c56) form_field_slider_wide_pane_vc

0xdb56,	// (0x0002eb39) grid_touch_1_pane_ParamLimits

0xdb56,	// (0x0002eb39) grid_touch_1_pane

0xdb6a,	// (0x0002eb4d) grid_touch_2_pane_ParamLimits

0xdb6a,	// (0x0002eb4d) grid_touch_2_pane

0x6d4a,	// (0x00027d2d) touch_pane_g1_ParamLimits

0x6d4a,	// (0x00027d2d) touch_pane_g1

0x6cac,	// (0x00027c8f) cell_app_pane_cp_wide_ParamLimits

0x6cac,	// (0x00027c8f) cell_app_pane_cp_wide

0x6cbd,	// (0x00027ca0) grid_popup_fast_wide_pane_ParamLimits

0x6cbd,	// (0x00027ca0) grid_popup_fast_wide_pane

0x6cd1,	// (0x00027cb4) scroll_pane_cp19_ParamLimits

0x6cd1,	// (0x00027cb4) scroll_pane_cp19

0xe626,	// (0x0002f609) bg_popup_window_pane_cp20

0x6ce5,	// (0x00027cc8) listscroll_popup_fast_wide_pane

0x32e2,	// (0x000242c5) grid_indicator_nsta_pane

0x6ced,	// (0x00027cd0) clock_nsta_pane_g1

0x6cf6,	// (0x00027cd9) clock_nsta_pane_t1

0xdb96,	// (0x0002eb79) cell_indicator_nsta_pane_ParamLimits

0xdb96,	// (0x0002eb79) cell_indicator_nsta_pane

0x6d4a,	// (0x00027d2d) cell_indicator_nsta_pane_g1

0xdbb3,	// (0x0002eb96) cell_indicator_nsta_pane_g2

0x0001,

0xfaad,	// (0x00030a90) cell_indicator_nsta_pane_g

0x6d6d,	// (0x00027d50) clock_nsta_pane_cp

0x6d75,	// (0x00027d58) indicator_nsta_pane_cp

0x6d7d,	// (0x00027d60) nsta_clock_indic_pane_g1

0x135a,	// (0x0002233d) grid_indicator_pane

0x36b4,	// (0x00024697) scroll_pane_cp29

0x1d49,	// (0x00022d2c) indicator_nsta_pane_cp2_ParamLimits

0x1d49,	// (0x00022d2c) indicator_nsta_pane_cp2

0x11fe,	// (0x000221e1) main_apps_wheel_pane

0x4f5b,	// (0x00025f3e) form_midp_field_text_pane_ParamLimits

0x50aa,	// (0x0002608d) scroll_bar_cp050_ParamLimits

0x6de6,	// (0x00027dc9) cell_indicator_pane_ParamLimits

0x6de6,	// (0x00027dc9) cell_indicator_pane

0x6dfe,	// (0x00027de1) cell_indicator_pane_g1

0xdbc9,	// (0x0002ebac) grid_wheel_folder_pane_ParamLimits

0xdbc9,	// (0x0002ebac) grid_wheel_folder_pane

0xdbd7,	// (0x0002ebba) list_wheel_apps_pane_ParamLimits

0xdbd7,	// (0x0002ebba) list_wheel_apps_pane

0xdbe5,	// (0x0002ebc8) main_apps_wheel_pane_g1_ParamLimits

0xdbe5,	// (0x0002ebc8) main_apps_wheel_pane_g1

0xdbf5,	// (0x0002ebd8) main_apps_wheel_pane_g2_ParamLimits

0xdbf5,	// (0x0002ebd8) main_apps_wheel_pane_g2

0x0001,

0xfac9,	// (0x00030aac) main_apps_wheel_pane_g_ParamLimits

0xfac9,	// (0x00030aac) main_apps_wheel_pane_g

0xdc05,	// (0x0002ebe8) main_apps_wheel_pane_t1_ParamLimits

0xdc05,	// (0x0002ebe8) main_apps_wheel_pane_t1

0xdc1d,	// (0x0002ec00) list_wheel_apps_pane_g1

0xdc25,	// (0x0002ec08) list_wheel_apps_pane_g2

0xdc2d,	// (0x0002ec10) list_wheel_apps_pane_g3

0xdc35,	// (0x0002ec18) list_wheel_apps_pane_g4

0xdc3d,	// (0x0002ec20) list_wheel_apps_pane_g5

0x0004,

0xface,	// (0x00030ab1) list_wheel_apps_pane_g

0x3be6,	// (0x00024bc9) navi_icon_text_pane

0xd1bd,	// (0x0002e1a0) aid_fill_nsta

0xdc5a,	// (0x0002ec3d) navi_icon_text_pane_g1

0xdc66,	// (0x0002ec49) navi_icon_text_pane_t1

0xc1ef,	// (0x0002d1d2) list_set_graphic_pane_t1_ParamLimits

0xc1ef,	// (0x0002d1d2) list_set_graphic_pane_t1

0x57fb,	// (0x000267de) popup_midp_note_alarm_window_t6_ParamLimits

0x57fb,	// (0x000267de) popup_midp_note_alarm_window_t6

0x580d,	// (0x000267f0) popup_midp_note_alarm_window_t7_ParamLimits

0x580d,	// (0x000267f0) popup_midp_note_alarm_window_t7

0x581f,	// (0x00026802) popup_midp_note_alarm_window_t8_ParamLimits

0x581f,	// (0x00026802) popup_midp_note_alarm_window_t8

0x5831,	// (0x00026814) popup_midp_note_alarm_window_t9_ParamLimits

0x5831,	// (0x00026814) popup_midp_note_alarm_window_t9

0x5843,	// (0x00026826) popup_midp_note_alarm_window_t10_ParamLimits

0x5843,	// (0x00026826) popup_midp_note_alarm_window_t10

0x5855,	// (0x00026838) popup_midp_note_alarm_window_t11_ParamLimits

0x5855,	// (0x00026838) popup_midp_note_alarm_window_t11

0x5867,	// (0x0002684a) scroll_pane_cp17_ParamLimits

0x5867,	// (0x0002684a) scroll_pane_cp17

0x2190,	// (0x00023173) volume_small_pane_cp_g1

0x245f,	// (0x00023442) volume_small_pane_cp_g2

0x2468,	// (0x0002344b) volume_small_pane_cp_g3

0x2471,	// (0x00023454) volume_small_pane_cp_g4

0x247a,	// (0x0002345d) volume_small_pane_cp_g5

0x2483,	// (0x00023466) volume_small_pane_cp_g6

0x248c,	// (0x0002346f) volume_small_pane_cp_g7

0x2495,	// (0x00023478) volume_small_pane_cp_g8

0x249e,	// (0x00023481) volume_small_pane_cp_g9

0x24a7,	// (0x0002348a) volume_small_pane_cp_g10

0x3e47,	// (0x00024e2a) midp_ticker_pane_g1_ParamLimits

0x3e53,	// (0x00024e36) midp_ticker_pane_g2_ParamLimits

0xf76b,	// (0x0003074e) midp_ticker_pane_g_ParamLimits

0xc2af,	// (0x0002d292) midp_ticker_pane_t1_ParamLimits

0xd1dd,	// (0x0002e1c0) aid_fill_nsta_2

0x5096,	// (0x00026079) list_form2_midp_pane

0x6224,	// (0x00027207) midp_editing_number_pane_ParamLimits

0x6233,	// (0x00027216) midp_ticker_pane_ParamLimits

0x6ef7,	// (0x00027eda) form2_midp_field_pane

0x6f1b,	// (0x00027efe) scroll_pane_cp51

0x6f3b,	// (0x00027f1e) form2_midp_button_pane_ParamLimits

0x6f3b,	// (0x00027f1e) form2_midp_button_pane

0x6f4d,	// (0x00027f30) form2_midp_content_pane_ParamLimits

0x6f4d,	// (0x00027f30) form2_midp_content_pane

0x6f67,	// (0x00027f4a) form2_midp_field_choice_group_pane

0x6f6f,	// (0x00027f52) form2_midp_field_pane_g1

0x6f77,	// (0x00027f5a) form2_midp_field_pane_g2

0x6f7f,	// (0x00027f62) form2_midp_field_pane_g3

0x6f87,	// (0x00027f6a) form2_midp_field_pane_g4

0x0003,

0xfaf3,	// (0x00030ad6) form2_midp_field_pane_g

0x6f8f,	// (0x00027f72) form2_midp_gauge_slider_pane

0x6f97,	// (0x00027f7a) form2_midp_gauge_wait_pane

0x6f9f,	// (0x00027f82) form2_midp_image_pane_ParamLimits

0x6f9f,	// (0x00027f82) form2_midp_image_pane

0x6fba,	// (0x00027f9d) form2_midp_label_pane_ParamLimits

0x6fba,	// (0x00027f9d) form2_midp_label_pane

0xdc94,	// (0x0002ec77) form2_midp_label_pane_cp_ParamLimits

0xdc94,	// (0x0002ec77) form2_midp_label_pane_cp

0x6ffa,	// (0x00027fdd) form2_midp_string_pane_ParamLimits

0x6ffa,	// (0x00027fdd) form2_midp_string_pane

0x091c,	// (0x000218ff) form2_midp_text_pane_ParamLimits

0x091c,	// (0x000218ff) form2_midp_text_pane

0x700c,	// (0x00027fef) form2_midp_time_pane

0x701c,	// (0x00027fff) input_focus_pane_cp51_ParamLimits

0x701c,	// (0x00027fff) input_focus_pane_cp51

0x7034,	// (0x00028017) form2_midp_label_pane_t1_ParamLimits

0x7034,	// (0x00028017) form2_midp_label_pane_t1

0x093d,	// (0x00021920) form2_mdip_text_pane_t1_ParamLimits

0x093d,	// (0x00021920) form2_mdip_text_pane_t1

0x0961,	// (0x00021944) form2_midp_time_pane_t1

0x7082,	// (0x00028065) form2_midp_gauge_slider_pane_t1

0xdcb5,	// (0x0002ec98) form2_midp_gauge_slider_pane_t2

0xdcc7,	// (0x0002ecaa) form2_midp_gauge_slider_pane_t3

0x0002,

0xfafc,	// (0x00030adf) form2_midp_gauge_slider_pane_t

0x70b8,	// (0x0002809b) form2_midp_slider_pane

0x70c4,	// (0x000280a7) form2_midp_gauge_wait_pane_t1

0x70d2,	// (0x000280b5) form2_midp_wait_pane_ParamLimits

0x70d2,	// (0x000280b5) form2_midp_wait_pane

0xd5f6,	// (0x0002e5d9) list_single_2graphic_pane_cp4_ParamLimits

0xd5f6,	// (0x0002e5d9) list_single_2graphic_pane_cp4

0xdcd9,	// (0x0002ecbc) list_single_midp_graphic_pane_cp_ParamLimits

0xdcd9,	// (0x0002ecbc) list_single_midp_graphic_pane_cp

0xe626,	// (0x0002f609) list_highlight_pane_cp20

0x7121,	// (0x00028104) list_single_2graphic_pane_g1_cp4

0x6705,	// (0x000276e8) list_single_2graphic_pane_g2_cp4

0x7129,	// (0x0002810c) list_single_2graphic_pane_t1_cp4

0x11fe,	// (0x000221e1) list_highlight_pane_cp21

0x7138,	// (0x0002811b) list_single_midp_graphic_pane_g4_cp

0x7147,	// (0x0002812a) list_single_midp_graphic_pane_t1_cp

0xdcfa,	// (0x0002ecdd) form2_mdip_string_pane_t1_ParamLimits

0xdcfa,	// (0x0002ecdd) form2_mdip_string_pane_t1

0xe626,	// (0x0002f609) bg_wml_button_pane_cp2

0xe61c,	// (0x0002f5ff) form2_midp_image_pane_g1

0xf555,	// (0x00030538) list_double_large_graphic_pane_g5_ParamLimits

0xf555,	// (0x00030538) list_double_large_graphic_pane_g5

0xc207,	// (0x0002d1ea) midp_form_pane_ParamLimits

0x11fe,	// (0x000221e1) main_apps_wheel_pane_ParamLimits

0xc87a,	// (0x0002d85d) popup_preview_window_ParamLimits

0xc87a,	// (0x0002d85d) popup_preview_window

0x46b4,	// (0x00025697) popup_touch_info_window_ParamLimits

0x46b4,	// (0x00025697) popup_touch_info_window

0x46d6,	// (0x000256b9) popup_touch_menu_window_ParamLimits

0x46d6,	// (0x000256b9) popup_touch_menu_window

0xe612,	// (0x0002f5f5) bg_popup_sub_pane_cp6

0x7201,	// (0x000281e4) list_touch_menu_pane

0x7209,	// (0x000281ec) list_single_touch_menu_pane_ParamLimits

0x7209,	// (0x000281ec) list_single_touch_menu_pane

0x7224,	// (0x00028207) list_single_touch_menu_pane_t1

0x11fe,	// (0x000221e1) bg_popup_sub_pane_cp7_ParamLimits

0x11fe,	// (0x000221e1) bg_popup_sub_pane_cp7

0x7232,	// (0x00028215) heading_sub_pane

0x723a,	// (0x0002821d) list_touch_info_pane_ParamLimits

0x723a,	// (0x0002821d) list_touch_info_pane

0x7249,	// (0x0002822c) list_single_touch_info_pane_ParamLimits

0x7249,	// (0x0002822c) list_single_touch_info_pane

0x725b,	// (0x0002823e) list_single_touch_info_pane_t1

0x7269,	// (0x0002824c) list_single_touch_info_pane_t2

0x0001,

0xfb0a,	// (0x00030aed) list_single_touch_info_pane_t

0x3d6a,	// (0x00024d4d) bg_popup_heading_pane_cp

0x7277,	// (0x0002825a) heading_sub_pane_t1

0x4d2a,	// (0x00025d0d) bg_popup_preview_window_pane_cp_ParamLimits

0x4d2a,	// (0x00025d0d) bg_popup_preview_window_pane_cp

0x7232,	// (0x00028215) heading_preview_pane

0x723a,	// (0x0002821d) list_preview_pane_ParamLimits

0x723a,	// (0x0002821d) list_preview_pane

0x7285,	// (0x00028268) popup_preview_window_g1

0x7249,	// (0x0002822c) list_single_preview_pane_ParamLimits

0x7249,	// (0x0002822c) list_single_preview_pane

0x728d,	// (0x00028270) list_single_preview_pane_g1

0x7295,	// (0x00028278) list_single_preview_pane_t1

0x725b,	// (0x0002823e) list_single_preview_pane_t2

0x0001,

0xfb0f,	// (0x00030af2) list_single_preview_pane_t

0x72a3,	// (0x00028286) bg_popup_heading_pane_cp2_ParamLimits

0x72a3,	// (0x00028286) bg_popup_heading_pane_cp2

0x72b9,	// (0x0002829c) heading_preview_pane_g1

0x72c1,	// (0x000282a4) heading_preview_pane_t1_ParamLimits

0x72c1,	// (0x000282a4) heading_preview_pane_t1

0x137d,	// (0x00022360) soft_indicator_pane_t1_ParamLimits

0x307f,	// (0x00024062) scroll_pane_ParamLimits

0x35b0,	// (0x00024593) scroll_sc2_left_pane

0x35b9,	// (0x0002459c) scroll_sc2_right_pane

0x35d8,	// (0x000245bb) scroll_bg_pane_g1_ParamLimits

0x35ed,	// (0x000245d0) scroll_bg_pane_g2_ParamLimits

0x3605,	// (0x000245e8) scroll_bg_pane_g3_ParamLimits

0xf6fa,	// (0x000306dd) scroll_bg_pane_g_ParamLimits

0x35d8,	// (0x000245bb) scroll_handle_pane_g1_ParamLimits

0x3627,	// (0x0002460a) scroll_handle_pane_g2_ParamLimits

0x3605,	// (0x000245e8) scroll_handle_pane_g3_ParamLimits

0xf701,	// (0x000306e4) scroll_handle_pane_g_ParamLimits

0x4118,	// (0x000250fb) popup_choice_list_window_ParamLimits

0x4118,	// (0x000250fb) popup_choice_list_window

0x4b76,	// (0x00025b59) choice_list_pane

0x4c04,	// (0x00025be7) cell_toolbar_pane_t1

0x4c2c,	// (0x00025c0f) toolbar_button_pane_ParamLimits

0x5d37,	// (0x00026d1a) ai_gene_pane_1_t2_ParamLimits

0x5d37,	// (0x00026d1a) ai_gene_pane_1_t2

0x0001,

0xf919,	// (0x000308fc) ai_gene_pane_1_t_ParamLimits

0xf919,	// (0x000308fc) ai_gene_pane_1_t

0x72de,	// (0x000282c1) scroll_sc2_left_pane_g1

0x72de,	// (0x000282c1) scroll_sc2_right_pane_g1

0x40f0,	// (0x000250d3) bg_popup_sub_pane_cp10

0x72e8,	// (0x000282cb) list_choice_list_pane

0x72ff,	// (0x000282e2) list_single_choice_list_pane_ParamLimits

0x72ff,	// (0x000282e2) list_single_choice_list_pane

0x7313,	// (0x000282f6) list_single_choice_list_pane_g1

0x731b,	// (0x000282fe) list_single_choice_list_pane_t1_ParamLimits

0x731b,	// (0x000282fe) list_single_choice_list_pane_t1

0x7330,	// (0x00028313) choice_list_pane_g1

0x7338,	// (0x0002831b) choice_list_pane_t1

0xe612,	// (0x0002f5f5) input_focus_pane_cp11

0x348a,	// (0x0002446d) title_pane_stacon_g2_ParamLimits

0x348a,	// (0x0002446d) title_pane_stacon_g2

0x0002,

0xf6e0,	// (0x000306c3) title_pane_stacon_g_ParamLimits

0xf6e0,	// (0x000306c3) title_pane_stacon_g

0x3d6a,	// (0x00024d4d) cursor_press_pane

0xc4fb,	// (0x0002d4de) popup_fep_hwr_window_ParamLimits

0xc4fb,	// (0x0002d4de) popup_fep_hwr_window

0x4258,	// (0x0002523b) popup_fep_vkb_window_ParamLimits

0x4258,	// (0x0002523b) popup_fep_vkb_window

0x7346,	// (0x00028329) cursor_press_pane_g1

0x0002,

0xfb38,	// (0x00030b1b) fep_vkb_side_pane_g_ParamLimits

0x24db,	// (0x000234be) fep_hwr_candidate_pane_ParamLimits

0x24db,	// (0x000234be) fep_hwr_candidate_pane

0x2505,	// (0x000234e8) fep_hwr_side_pane_ParamLimits

0x2505,	// (0x000234e8) fep_hwr_side_pane

0x2527,	// (0x0002350a) fep_hwr_top_pane_ParamLimits

0x2527,	// (0x0002350a) fep_hwr_top_pane

0x253f,	// (0x00023522) fep_hwr_write_pane_ParamLimits

0x253f,	// (0x00023522) fep_hwr_write_pane

0xfb38,	// (0x00030b1b) fep_vkb_side_pane_g

0x734e,	// (0x00028331) fep_hwr_top_pane_g1

0x7360,	// (0x00028343) fep_hwr_top_pane_g2

0x256b,	// (0x0002354e) fep_hwr_top_pane_g3

0x0002,

0xfb14,	// (0x00030af7) fep_hwr_top_pane_g

0x2580,	// (0x00023563) fep_hwr_top_text_pane

0x377c,	// (0x0002475f) fep_hwr_top_text_pane_g1

0x7396,	// (0x00028379) fep_hwr_top_text_pane_t1

0x268a,	// (0x0002366d) fep_hwr_candidate_pane_g1

0x75e1,	// (0x000285c4) fep_vkb_keypad_pane_g3_ParamLimits

0x75e1,	// (0x000285c4) fep_vkb_keypad_pane_g3

0x760d,	// (0x000285f0) fep_vkb_keypad_pane_g4_ParamLimits

0x760d,	// (0x000285f0) fep_vkb_keypad_pane_g4

0x7684,	// (0x00028667) fep_vkb_bottom_pane_g2_ParamLimits

0x7684,	// (0x00028667) fep_vkb_bottom_pane_g2

0x0001,

0xfb3f,	// (0x00030b22) fep_vkb_bottom_pane_g_ParamLimits

0xfb3f,	// (0x00030b22) fep_vkb_bottom_pane_g

0x72de,	// (0x000282c1) cell_vkb_side_pane_g2

0x0001,

0xfb49,	// (0x00030b2c) cell_vkb_side_pane_g

0x770f,	// (0x000286f2) cell_vkb_side_pane_t1

0x771d,	// (0x00028700) cell_vkb_side_pane_t1_copy1

0x72de,	// (0x000282c1) bg_fep_vkb_candidate_pane_g2

0x7861,	// (0x00028844) cell_vkb_candidate_pane_ParamLimits

0x73a4,	// (0x00028387) aid_size_cell_vkb_ParamLimits

0x73a4,	// (0x00028387) aid_size_cell_vkb

0x7861,	// (0x00028844) cell_vkb_candidate_pane

0x26a4,	// (0x00023687) bg_popup_fep_shadow_pane_g1

0xddbe,	// (0x0002eda1) fep_vkb_bottom_pane_ParamLimits

0xddbe,	// (0x0002eda1) fep_vkb_bottom_pane

0x7473,	// (0x00028456) fep_vkb_candidate_pane_ParamLimits

0x7473,	// (0x00028456) fep_vkb_candidate_pane

0xddea,	// (0x0002edcd) fep_vkb_keypad_pane_ParamLimits

0xddea,	// (0x0002edcd) fep_vkb_keypad_pane

0xde11,	// (0x0002edf4) fep_vkb_side_pane_ParamLimits

0xde11,	// (0x0002edf4) fep_vkb_side_pane

0xde4d,	// (0x0002ee30) fep_vkb_top_pane_ParamLimits

0xde4d,	// (0x0002ee30) fep_vkb_top_pane

0x753a,	// (0x0002851d) fep_vkb_top_pane_g1_ParamLimits

0x753a,	// (0x0002851d) fep_vkb_top_pane_g1

0x7549,	// (0x0002852c) fep_vkb_top_pane_g2_ParamLimits

0x7549,	// (0x0002852c) fep_vkb_top_pane_g2

0x7558,	// (0x0002853b) fep_vkb_top_pane_g3_ParamLimits

0x7558,	// (0x0002853b) fep_vkb_top_pane_g3

0x0003,

0xfb2f,	// (0x00030b12) fep_vkb_top_pane_g_ParamLimits

0xfb2f,	// (0x00030b12) fep_vkb_top_pane_g

0x7576,	// (0x00028559) fep_vkb_top_text_pane_ParamLimits

0x7576,	// (0x00028559) fep_vkb_top_text_pane

0xde89,	// (0x0002ee6c) fep_vkb_side_pane_g1_ParamLimits

0xde89,	// (0x0002ee6c) fep_vkb_side_pane_g1

0x75d0,	// (0x000285b3) grid_vkb_side_pane_ParamLimits

0x75d0,	// (0x000285b3) grid_vkb_side_pane

0x26ac,	// (0x0002368f) bg_popup_fep_shadow_pane_g2

0x26b5,	// (0x00023698) bg_popup_fep_shadow_pane_g3

0x26bd,	// (0x000236a0) bg_popup_fep_shadow_pane_g4

0x26c6,	// (0x000236a9) bg_popup_fep_shadow_pane_g5

0x26d0,	// (0x000236b3) bg_popup_fep_shadow_pane_g6

0x26d8,	// (0x000236bb) bg_popup_fep_shadow_pane_g7

0x3193,	// (0x00024176) bg_popup_fep_shadow_pane_g8

0x762f,	// (0x00028612) grid_vkb_keypad_number_pane_ParamLimits

0x762f,	// (0x00028612) grid_vkb_keypad_number_pane

0x7643,	// (0x00028626) grid_vkb_keypad_pane_ParamLimits

0x7643,	// (0x00028626) grid_vkb_keypad_pane

0x7669,	// (0x0002864c) fep_vkb_bottom_pane_g1_ParamLimits

0x7669,	// (0x0002864c) fep_vkb_bottom_pane_g1

0x7692,	// (0x00028675) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x7692,	// (0x00028675) grid_vkb_keypad_bottom_left_pane

0x76a7,	// (0x0002868a) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x76a7,	// (0x0002868a) grid_vkb_keypad_bottom_right_pane

0x76bc,	// (0x0002869f) fep_vkb_top_text_pane_g1

0xded0,	// (0x0002eeb3) fep_vkb_top_text_pane_t1

0xdee2,	// (0x0002eec5) cell_vkb_side_pane_ParamLimits

0xdee2,	// (0x0002eec5) cell_vkb_side_pane

0x72de,	// (0x000282c1) cell_vkb_side_pane_g1

0x772b,	// (0x0002870e) cell_vkb_keypad_pane_ParamLimits

0x772b,	// (0x0002870e) cell_vkb_keypad_pane

0x77b8,	// (0x0002879b) cell_vkb_keypad_pane_g1

0x0008,

0xfb5c,	// (0x00030b3f) bg_popup_fep_shadow_pane_g

0x72de,	// (0x000282c1) cell_hwr_side_pane_g1

0x72de,	// (0x000282c1) cell_hwr_side_pane_g2

0x77c2,	// (0x000287a5) cell_vkb_keypad_pane_t1

0xdef8,	// (0x0002eedb) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdef8,	// (0x0002eedb) cell_vkb_keypad_bottom_left_pane

0xdf0d,	// (0x0002eef0) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf0d,	// (0x0002eef0) cell_vkb_keypad_bottom_right_pane

0x72de,	// (0x000282c1) cell_vkb_keypad_bottom_left_pane_g1

0x72de,	// (0x000282c1) cell_vkb_keypad_bottom_right_pane_g1

0x7826,	// (0x00028809) cell_vkb_keypad_number_pane_ParamLimits

0x7826,	// (0x00028809) cell_vkb_keypad_number_pane

0x7845,	// (0x00028828) cell_vkb_keypad_number_pane_g1

0x784f,	// (0x00028832) cell_vkb_keypad_number_pane_g2

0x7858,	// (0x0002883b) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb4e,	// (0x00030b31) cell_vkb_keypad_number_pane_g

0x77c2,	// (0x000287a5) cell_vkb_keypad_number_pane_t1

0x7882,	// (0x00028865) fep_vkb_candidate_pane_g1

0x0001,

0xfb49,	// (0x00030b2c) cell_hwr_side_pane_g

0x789b,	// (0x0002887e) cell_hwr_side_pane_t1

0x26ea,	// (0x000236cd) cell_hwr_side_pane_t1_copy1

0x7568,	// (0x0002854b) cell_hwr_candidate_pane_g1

0x26f8,	// (0x000236db) cell_hwr_candidate_pane_t1

0x72de,	// (0x000282c1) cell_vkb_candidate_pane_g2

0x7921,	// (0x00028904) cell_vkb_candidate_pane_t1

0x7cee,	// (0x00028cd1) bg_popup_fep_shadow_pane_ParamLimits

0x7cee,	// (0x00028cd1) bg_popup_fep_shadow_pane

0xdd84,	// (0x0002ed67) bg_fep_hwr_top_pane_g4

0x7372,	// (0x00028355) bg_hwr_side_pane_g1_ParamLimits

0x7372,	// (0x00028355) bg_hwr_side_pane_g1

0xccd1,	// (0x0002dcb4) cell_hwr_side_pane_ParamLimits

0xccd1,	// (0x0002dcb4) cell_hwr_side_pane

0x25fb,	// (0x000235de) fep_hwr_write_pane_g1_ParamLimits

0x25fb,	// (0x000235de) fep_hwr_write_pane_g1

0x2608,	// (0x000235eb) fep_hwr_write_pane_g2_ParamLimits

0x2608,	// (0x000235eb) fep_hwr_write_pane_g2

0x2615,	// (0x000235f8) fep_hwr_write_pane_g3_ParamLimits

0x2615,	// (0x000235f8) fep_hwr_write_pane_g3

0xccf1,	// (0x0002dcd4) fep_hwr_write_pane_g4_ParamLimits

0xccf1,	// (0x0002dcd4) fep_hwr_write_pane_g4

0x0005,

0xfb1b,	// (0x00030afe) fep_hwr_write_pane_g_ParamLimits

0xfb1b,	// (0x00030afe) fep_hwr_write_pane_g

0xdd84,	// (0x0002ed67) bg_fep_hwr_candidate_pane_g2_ParamLimits

0xdd84,	// (0x0002ed67) bg_fep_hwr_candidate_pane_g2

0x2638,	// (0x0002361b) cell_hwr_candidate_pane_ParamLimits

0x2638,	// (0x0002361b) cell_hwr_candidate_pane

0x268a,	// (0x0002366d) fep_hwr_candidate_pane_g1_ParamLimits

0x73d2,	// (0x000283b5) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x73d2,	// (0x000283b5) bg_popup_fep_shadow_pane_cp2

0x7568,	// (0x0002854b) fep_vkb_top_pane_g4_ParamLimits

0x7568,	// (0x0002854b) fep_vkb_top_pane_g4

0x75ae,	// (0x00028591) fep_vkb_side_pane_g2_ParamLimits

0x75ae,	// (0x00028591) fep_vkb_side_pane_g2

0xb47f,	// (0x0002c462) list_setting_pane_t4_ParamLimits

0xb47f,	// (0x0002c462) list_setting_pane_t4

0xb51b,	// (0x0002c4fe) list_setting_number_pane_t5_ParamLimits

0xb51b,	// (0x0002c4fe) list_setting_number_pane_t5

0x37ae,	// (0x00024791) list_double_heading_pane_cp2_ParamLimits

0x37ae,	// (0x00024791) list_double_heading_pane_cp2

0x3126,	// (0x00024109) list_double_heading_pane_g1_cp2_ParamLimits

0x3126,	// (0x00024109) list_double_heading_pane_g1_cp2

0x3132,	// (0x00024115) list_double_heading_pane_g2_cp2_ParamLimits

0x3132,	// (0x00024115) list_double_heading_pane_g2_cp2

0x792f,	// (0x00028912) list_double_heading_pane_t1_cp2_ParamLimits

0x792f,	// (0x00028912) list_double_heading_pane_t1_cp2

0x7945,	// (0x00028928) list_double_heading_pane_t2_cp2_ParamLimits

0x7945,	// (0x00028928) list_double_heading_pane_t2_cp2

0xe60a,	// (0x0002f5ed) aid_value_unit2

0x1010,	// (0x00021ff3) popup_preview_fixed_window

0x1518,	// (0x000224fb) bg_popup_preview_window_pane_cp02

0x7957,	// (0x0002893a) list_preview_fixed_pane

0x799d,	// (0x00028980) list_empty_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_empty_pane_fp

0x799d,	// (0x00028980) list_single_cale_day_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_cale_day_pane_fp

0x799d,	// (0x00028980) list_single_graphic_heading_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_graphic_heading_pane_fp

0x799d,	// (0x00028980) list_single_graphic_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_graphic_pane_fp

0x799d,	// (0x00028980) list_single_heading_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_heading_pane_fp

0x799d,	// (0x00028980) list_single_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_pane_fp

0x79b6,	// (0x00028999) list_single_pane_fp_g1_ParamLimits

0x79b6,	// (0x00028999) list_single_pane_fp_g1

0x0974,	// (0x00021957) list_single_pane_fp_g2_ParamLimits

0x0974,	// (0x00021957) list_single_pane_fp_g2

0x0980,	// (0x00021963) list_single_pane_fp_g3_ParamLimits

0x0980,	// (0x00021963) list_single_pane_fp_g3

0x79c2,	// (0x000289a5) list_single_pane_fp_g4_ParamLimits

0x79c2,	// (0x000289a5) list_single_pane_fp_g4

0x0003,

0xfb7d,	// (0x00030b60) list_single_pane_fp_g_ParamLimits

0xfb7d,	// (0x00030b60) list_single_pane_fp_g

0x0994,	// (0x00021977) list_single_pane_fp_t1_ParamLimits

0x0994,	// (0x00021977) list_single_pane_fp_t1

0x09ab,	// (0x0002198e) list_single_graphic_pane_fp_g1_ParamLimits

0x09ab,	// (0x0002198e) list_single_graphic_pane_fp_g1

0x79b6,	// (0x00028999) list_single_graphic_pane_fp_g2_ParamLimits

0x79b6,	// (0x00028999) list_single_graphic_pane_fp_g2

0x0974,	// (0x00021957) list_single_graphic_pane_fp_g3_ParamLimits

0x0974,	// (0x00021957) list_single_graphic_pane_fp_g3

0x0980,	// (0x00021963) list_single_graphic_pane_fp_g4_ParamLimits

0x0980,	// (0x00021963) list_single_graphic_pane_fp_g4

0x79c2,	// (0x000289a5) list_single_graphic_pane_fp_g5_ParamLimits

0x79c2,	// (0x000289a5) list_single_graphic_pane_fp_g5

0x0004,

0xfb86,	// (0x00030b69) list_single_graphic_pane_fp_g_ParamLimits

0xfb86,	// (0x00030b69) list_single_graphic_pane_fp_g

0x09b7,	// (0x0002199a) list_single_graphic_pane_fp_t1_ParamLimits

0x09b7,	// (0x0002199a) list_single_graphic_pane_fp_t1

0x09ab,	// (0x0002198e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x09ab,	// (0x0002198e) list_single_graphic_heading_pane_fp_g1

0x79b6,	// (0x00028999) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x79b6,	// (0x00028999) list_single_graphic_heading_pane_fp_g2

0x0974,	// (0x00021957) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x0974,	// (0x00021957) list_single_graphic_heading_pane_fp_g3

0x0980,	// (0x00021963) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x0980,	// (0x00021963) list_single_graphic_heading_pane_fp_g4

0x79c2,	// (0x000289a5) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x79c2,	// (0x000289a5) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030b69) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030b69) list_single_graphic_heading_pane_fp_g

0x09cd,	// (0x000219b0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x09cd,	// (0x000219b0) list_single_graphic_heading_pane_fp_t1

0x09e3,	// (0x000219c6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x09e3,	// (0x000219c6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb91,	// (0x00030b74) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb91,	// (0x00030b74) list_single_graphic_heading_pane_fp_t

0x09f5,	// (0x000219d8) list_single_cale_day_pane_fp_g1_ParamLimits

0x09f5,	// (0x000219d8) list_single_cale_day_pane_fp_g1

0x79ce,	// (0x000289b1) list_single_cale_day_pane_fp_g2_ParamLimits

0x79ce,	// (0x000289b1) list_single_cale_day_pane_fp_g2

0x0a2d,	// (0x00021a10) list_single_cale_day_pane_fp_g3_ParamLimits

0x0a2d,	// (0x00021a10) list_single_cale_day_pane_fp_g3

0x0a55,	// (0x00021a38) list_single_cale_day_pane_fp_g4_ParamLimits

0x0a55,	// (0x00021a38) list_single_cale_day_pane_fp_g4

0x0a79,	// (0x00021a5c) list_single_cale_day_pane_fp_g5_ParamLimits

0x0a79,	// (0x00021a5c) list_single_cale_day_pane_fp_g5

0x0004,

0xfb96,	// (0x00030b79) list_single_cale_day_pane_fp_g_ParamLimits

0xfb96,	// (0x00030b79) list_single_cale_day_pane_fp_g

0x0a9d,	// (0x00021a80) list_single_cale_day_pane_fp_t1_ParamLimits

0x0a9d,	// (0x00021a80) list_single_cale_day_pane_fp_t1

0x0ac3,	// (0x00021aa6) list_single_cale_day_pane_fp_t2_ParamLimits

0x0ac3,	// (0x00021aa6) list_single_cale_day_pane_fp_t2

0x0adc,	// (0x00021abf) list_single_cale_day_pane_fp_t3_ParamLimits

0x0adc,	// (0x00021abf) list_single_cale_day_pane_fp_t3

0x0002,

0xfba1,	// (0x00030b84) list_single_cale_day_pane_fp_t_ParamLimits

0xfba1,	// (0x00030b84) list_single_cale_day_pane_fp_t

0x79b6,	// (0x00028999) list_empty_pane_fp_g1_ParamLimits

0x79b6,	// (0x00028999) list_empty_pane_fp_g1

0x0af5,	// (0x00021ad8) list_empty_pane_fp_t1

0x0b03,	// (0x00021ae6) list_empty_pane_fp_t2

0x0001,

0xfba8,	// (0x00030b8b) list_empty_pane_fp_t

0x79b6,	// (0x00028999) list_single_heading_pane_fp_g1_ParamLimits

0x79b6,	// (0x00028999) list_single_heading_pane_fp_g1

0x0974,	// (0x00021957) list_single_heading_pane_fp_g2_ParamLimits

0x0974,	// (0x00021957) list_single_heading_pane_fp_g2

0x0980,	// (0x00021963) list_single_heading_pane_fp_g3_ParamLimits

0x0980,	// (0x00021963) list_single_heading_pane_fp_g3

0x0002,

0xfbad,	// (0x00030b90) list_single_heading_pane_fp_g_ParamLimits

0xfbad,	// (0x00030b90) list_single_heading_pane_fp_g

0x0b11,	// (0x00021af4) list_single_heading_pane_fp_t1_ParamLimits

0x0b11,	// (0x00021af4) list_single_heading_pane_fp_t1

0x0b23,	// (0x00021b06) list_single_heading_pane_fp_t2_ParamLimits

0x0b23,	// (0x00021b06) list_single_heading_pane_fp_t2

0x0001,

0xfbb4,	// (0x00030b97) list_single_heading_pane_fp_t_ParamLimits

0xfbb4,	// (0x00030b97) list_single_heading_pane_fp_t

0x3321,	// (0x00024304) aid_size_cell_fast

0x148a,	// (0x0002246d) soft_indicator_pane_cp1_t1

0x335e,	// (0x00024341) cell_app_pane_cp2_ParamLimits

0x335e,	// (0x00024341) cell_app_pane_cp2

0x24c4,	// (0x000234a7) fep_hwr_candidate_drop_down_list_pane

0xdd92,	// (0x0002ed75) fep_hwr_candidate_pane_g3_ParamLimits

0xdd92,	// (0x0002ed75) fep_hwr_candidate_pane_g3

0xdd9f,	// (0x0002ed82) fep_hwr_candidate_pane_g4_ParamLimits

0xdd9f,	// (0x0002ed82) fep_hwr_candidate_pane_g4

0x0002,

0xfb28,	// (0x00030b0b) fep_hwr_candidate_pane_g_ParamLimits

0xfb28,	// (0x00030b0b) fep_hwr_candidate_pane_g

0x7462,	// (0x00028445) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x7462,	// (0x00028445) fep_vkb_candidate_drop_down_list_pane

0x788a,	// (0x0002886d) fep_vkb_candidate_pane_g3

0x7892,	// (0x00028875) fep_vkb_candidate_pane_g4

0x0002,

0xfb55,	// (0x00030b38) fep_vkb_candidate_pane_g

0x7568,	// (0x0002854b) cell_hwr_candidate_pane_g1_ParamLimits

0x78a9,	// (0x0002888c) cell_hwr_candidate_pane_g3_ParamLimits

0x78a9,	// (0x0002888c) cell_hwr_candidate_pane_g3

0x78ca,	// (0x000288ad) cell_hwr_candidate_pane_g4_ParamLimits

0x78ca,	// (0x000288ad) cell_hwr_candidate_pane_g4

0x0002,

0xfb6f,	// (0x00030b52) cell_hwr_candidate_pane_g_ParamLimits

0xfb6f,	// (0x00030b52) cell_hwr_candidate_pane_g

0x78eb,	// (0x000288ce) cell_vkb_candidate_pane_g3_ParamLimits

0x78eb,	// (0x000288ce) cell_vkb_candidate_pane_g3

0x7906,	// (0x000288e9) cell_vkb_candidate_pane_g4_ParamLimits

0x7906,	// (0x000288e9) cell_vkb_candidate_pane_g4

0x79da,	// (0x000289bd) cell_app_pane_cp2_g1_ParamLimits

0x79da,	// (0x000289bd) cell_app_pane_cp2_g1

0x79f8,	// (0x000289db) cell_app_pane_cp2_g2_ParamLimits

0x79f8,	// (0x000289db) cell_app_pane_cp2_g2

0x0001,

0xfbb9,	// (0x00030b9c) cell_app_pane_cp2_g_ParamLimits

0xfbb9,	// (0x00030b9c) cell_app_pane_cp2_g

0x7a04,	// (0x000289e7) cell_app_pane_cp2_t1_ParamLimits

0x7a04,	// (0x000289e7) cell_app_pane_cp2_t1

0x310c,	// (0x000240ef) grid_highlight_pane_cp1_ParamLimits

0x310c,	// (0x000240ef) grid_highlight_pane_cp1

0x2716,	// (0x000236f9) cell_hwr_candidate_pane_cp1_ParamLimits

0x2716,	// (0x000236f9) cell_hwr_candidate_pane_cp1

0x7568,	// (0x0002854b) fep_hwr_candidate_drop_down_list_pane_g1

0x7a16,	// (0x000289f9) fep_hwr_candidate_drop_down_list_pane_g2

0x7a23,	// (0x00028a06) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030ba1) fep_hwr_candidate_drop_down_list_pane_g

0x273a,	// (0x0002371d) fep_hwr_candidate_drop_down_list_scroll_pane

0x2743,	// (0x00023726) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x2743,	// (0x00023726) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x2750,	// (0x00023733) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x2750,	// (0x00023733) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x275d,	// (0x00023740) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x275d,	// (0x00023740) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x78eb,	// (0x000288ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78eb,	// (0x000288ce) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x7906,	// (0x000288e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7906,	// (0x000288e9) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x276a,	// (0x0002374d) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x276a,	// (0x0002374d) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x2785,	// (0x00023768) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x2785,	// (0x00023768) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x27a0,	// (0x00023783) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x27a0,	// (0x00023783) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc5,	// (0x00030ba8) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc5,	// (0x00030ba8) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a30,	// (0x00028a13) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a30,	// (0x00028a13) cell_vkb_candidate_pane_cp1

0x7568,	// (0x0002854b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7568,	// (0x0002854b) fep_vkb_candidate_drop_down_list_pane_g1

0x7a16,	// (0x000289f9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7a16,	// (0x000289f9) fep_vkb_candidate_drop_down_list_pane_g2

0x7a23,	// (0x00028a06) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7a23,	// (0x00028a06) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbbe,	// (0x00030ba1) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbbe,	// (0x00030ba1) fep_vkb_candidate_drop_down_list_pane_g

0x7a56,	// (0x00028a39) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7a56,	// (0x00028a39) fep_vkb_candidate_drop_down_list_scroll_pane

0x7a63,	// (0x00028a46) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a63,	// (0x00028a46) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a70,	// (0x00028a53) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a70,	// (0x00028a53) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a7c,	// (0x00028a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a7c,	// (0x00028a5f) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x78a9,	// (0x0002888c) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x78a9,	// (0x0002888c) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x78ca,	// (0x000288ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x78ca,	// (0x000288ad) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7a88,	// (0x00028a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7a88,	// (0x00028a6b) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7aa9,	// (0x00028a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7aa9,	// (0x00028a8c) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7aca,	// (0x00028aad) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7aca,	// (0x00028aad) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbd6,	// (0x00030bb9) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbd6,	// (0x00030bb9) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xbb83,	// (0x0002cb66) title_pane_g1_ParamLimits

0xbb94,	// (0x0002cb77) title_pane_g2_ParamLimits

0xf56a,	// (0x0003054d) title_pane_g_ParamLimits

0x376c,	// (0x0002474f) aid_call2_pane

0x3774,	// (0x00024757) aid_call_pane

0x377c,	// (0x0002475f) popup_clock_analogue_window_g1

0x377c,	// (0x0002475f) popup_clock_analogue_window_g2

0x1c48,	// (0x00022c2b) popup_clock_analogue_window_g3

0x1c51,	// (0x00022c34) popup_clock_analogue_window_g4

0xe61c,	// (0x0002f5ff) popup_clock_analogue_window_g5

0x0004,

0xf70f,	// (0x000306f2) popup_clock_analogue_window_g

0x1c59,	// (0x00022c3c) popup_clock_analogue_window_t1

0x1c67,	// (0x00022c4a) clock_digital_number_pane_ParamLimits

0x1c67,	// (0x00022c4a) clock_digital_number_pane

0x1c73,	// (0x00022c56) clock_digital_number_pane_cp02_ParamLimits

0x1c73,	// (0x00022c56) clock_digital_number_pane_cp02

0x1c7f,	// (0x00022c62) clock_digital_number_pane_cp03_ParamLimits

0x1c7f,	// (0x00022c62) clock_digital_number_pane_cp03

0x1c8b,	// (0x00022c6e) clock_digital_number_pane_cp04_ParamLimits

0x1c8b,	// (0x00022c6e) clock_digital_number_pane_cp04

0x1c97,	// (0x00022c7a) clock_digital_separator_pane_ParamLimits

0x1c97,	// (0x00022c7a) clock_digital_separator_pane

0x1ca3,	// (0x00022c86) popup_clock_digital_window_t1_ParamLimits

0x1ca3,	// (0x00022c86) popup_clock_digital_window_t1

0xe61c,	// (0x0002f5ff) clock_digital_number_pane_g1

0xe61c,	// (0x0002f5ff) clock_digital_number_pane_g2

0x0001,

0xf71a,	// (0x000306fd) clock_digital_number_pane_g

0xe61c,	// (0x0002f5ff) clock_digital_separator_pane_g1

0xe61c,	// (0x0002f5ff) clock_digital_separator_pane_g2

0x0001,

0xf71a,	// (0x000306fd) clock_digital_separator_pane_g

0xd1bd,	// (0x0002e1a0) aid_fill_nsta_ParamLimits

0xd2ee,	// (0x0002e2d1) indicator_nsta_pane_ParamLimits

0x4a03,	// (0x000259e6) popup_clock_analogue_window

0x4a03,	// (0x000259e6) popup_clock_digital_window

0x32e2,	// (0x000242c5) grid_indicator_nsta_pane_ParamLimits

0x6d04,	// (0x00027ce7) clock_nsta_pane_t2

0x0001,

0xfaa8,	// (0x00030a8b) clock_nsta_pane_t

0x1c0c,	// (0x00022bef) aid_size_max_handle

0xc09f,	// (0x0002d082) aid_size_min_handle

0x3d6a,	// (0x00024d4d) editor_scroll_pane

0x7ae5,	// (0x00028ac8) ex_editor_pane

0x328e,	// (0x00024271) scroll_pane_cp13

0x30ab,	// (0x0002408e) scroll_pane_cp14

0x37a6,	// (0x00024789) scroll_pane_cp36

0xc12c,	// (0x0002d10f) list_single_graphic_hl_pane_cp2_ParamLimits

0xc12c,	// (0x0002d10f) list_single_graphic_hl_pane_cp2

0xda2e,	// (0x0002ea11) list_single_graphic_hl_pane_ParamLimits

0xda2e,	// (0x0002ea11) list_single_graphic_hl_pane

0x0b39,	// (0x00021b1c) aid_size_min_hl_cp1

0x7aed,	// (0x00028ad0) list_highlight_pane_cp34_ParamLimits

0x7aed,	// (0x00028ad0) list_highlight_pane_cp34

0x7afe,	// (0x00028ae1) list_single_graphic_hl_pane_g1_ParamLimits

0x7afe,	// (0x00028ae1) list_single_graphic_hl_pane_g1

0xb7e5,	// (0x0002c7c8) list_single_graphic_hl_pane_g2_ParamLimits

0xb7e5,	// (0x0002c7c8) list_single_graphic_hl_pane_g2

0xb7e5,	// (0x0002c7c8) list_single_graphic_hl_pane_g3_ParamLimits

0xb7e5,	// (0x0002c7c8) list_single_graphic_hl_pane_g3

0xf549,	// (0x0003052c) list_single_graphic_hl_pane_g4_ParamLimits

0xf549,	// (0x0003052c) list_single_graphic_hl_pane_g4

0xb7f1,	// (0x0002c7d4) list_single_graphic_hl_pane_g5_ParamLimits

0xb7f1,	// (0x0002c7d4) list_single_graphic_hl_pane_g5

0x0004,

0xfbe7,	// (0x00030bca) list_single_graphic_hl_pane_g_ParamLimits

0xfbe7,	// (0x00030bca) list_single_graphic_hl_pane_g

0xb805,	// (0x0002c7e8) list_single_graphic_hl_pane_t1_ParamLimits

0xb805,	// (0x0002c7e8) list_single_graphic_hl_pane_t1

0x7b0b,	// (0x00028aee) aid_size_min_hl_cp2

0x7b14,	// (0x00028af7) list_highlight_pane_cp34_cp2_ParamLimits

0x7b14,	// (0x00028af7) list_highlight_pane_cp34_cp2

0x7afe,	// (0x00028ae1) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7afe,	// (0x00028ae1) list_single_graphic_hl_pane_g1_cp2

0x7b21,	// (0x00028b04) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b21,	// (0x00028b04) list_single_graphic_hl_pane_g2_cp2

0x7b2d,	// (0x00028b10) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0x7b2d,	// (0x00028b10) list_single_graphic_hl_pane_g3_cp2

0x4bf8,	// (0x00025bdb) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4bf8,	// (0x00025bdb) list_single_graphic_hl_pane_g4_cp2

0x7b3b,	// (0x00028b1e) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7b3b,	// (0x00028b1e) list_single_graphic_hl_pane_g5_cp2

0xc2f4,	// (0x0002d2d7) control_pane_g4_ParamLimits

0xc2f4,	// (0x0002d2d7) control_pane_g4

0x40f0,	// (0x000250d3) bg_popup_sub_pane_cp10_ParamLimits

0x72e8,	// (0x000282cb) list_choice_list_pane_ParamLimits

0x72f7,	// (0x000282da) scroll_pane_cp23

0x1518,	// (0x000224fb) bg_popup_preview_window_pane_cp02_ParamLimits

0x7957,	// (0x0002893a) list_preview_fixed_pane_ParamLimits

0x796d,	// (0x00028950) list_preview_fixed_pane_cp_ParamLimits

0x796d,	// (0x00028950) list_preview_fixed_pane_cp

0x7979,	// (0x0002895c) popup_preview_fixed_window_g1_ParamLimits

0x7979,	// (0x0002895c) popup_preview_fixed_window_g1

0x7985,	// (0x00028968) popup_preview_fixed_window_g2_ParamLimits

0x7985,	// (0x00028968) popup_preview_fixed_window_g2

0x0002,

0xfb76,	// (0x00030b59) popup_preview_fixed_window_g_ParamLimits

0xfb76,	// (0x00030b59) popup_preview_fixed_window_g

0x1b7e,	// (0x00022b61) aid_navi_side_left_pane_ParamLimits

0x1b93,	// (0x00022b76) aid_navi_side_right_pane_ParamLimits

0x1bab,	// (0x00022b8e) navi_icon_pane_stacon_ParamLimits

0x1bbf,	// (0x00022ba2) navi_navi_pane_stacon_ParamLimits

0x1bab,	// (0x00022b8e) navi_text_pane_stacon_ParamLimits

0xe612,	// (0x0002f5f5) main_text_info_pane

0x7b65,	// (0x00028b48) listscroll_text_info_pane

0x7b6d,	// (0x00028b50) list_text_info_pane_ParamLimits

0x7b6d,	// (0x00028b50) list_text_info_pane

0x7b7c,	// (0x00028b5f) scroll_pane_cp24_ParamLimits

0x7b7c,	// (0x00028b5f) scroll_pane_cp24

0xdf28,	// (0x0002ef0b) list_text_info_pane_t1_ParamLimits

0xdf28,	// (0x0002ef0b) list_text_info_pane_t1

0xc45f,	// (0x0002d442) popup_fast_swap2_window_ParamLimits

0xc45f,	// (0x0002d442) popup_fast_swap2_window

0x7bbf,	// (0x00028ba2) aid_size_cell_fast2

0xe612,	// (0x0002f5f5) bg_popup_window_pane_cp17

0x50c2,	// (0x000260a5) heading_pane_cp2

0x1778,	// (0x0002275b) listscroll_fast2_pane

0x7bc9,	// (0x00028bac) grid_fast2_pane

0x7bd3,	// (0x00028bb6) listscroll_fast2_pane_g1

0x7bdd,	// (0x00028bc0) listscroll_fast2_pane_g2

0x0001,

0xfbf2,	// (0x00030bd5) listscroll_fast2_pane_g

0x328e,	// (0x00024271) scroll_pane_cp26

0x7be7,	// (0x00028bca) cell_fast2_pane_ParamLimits

0x7be7,	// (0x00028bca) cell_fast2_pane

0x7bfe,	// (0x00028be1) cell_fast2_pane_g1

0x7c07,	// (0x00028bea) cell_fast2_pane_g2

0x7c10,	// (0x00028bf3) cell_fast2_pane_g3

0x0002,

0xfbf7,	// (0x00030bda) cell_fast2_pane_g

0x1871,	// (0x00022854) grid_highlight_pane_cp9

0x1886,	// (0x00022869) main_eswt_pane_ParamLimits

0x1886,	// (0x00022869) main_eswt_pane

0x7b91,	// (0x00028b74) list_single_text_info_pane

0x7c18,	// (0x00028bfb) eswt_ctrl_button_pane

0x7c18,	// (0x00028bfb) eswt_ctrl_canvas_pane

0x7c20,	// (0x00028c03) eswt_ctrl_combo_pane

0x7c18,	// (0x00028bfb) eswt_ctrl_default_pane

0x7c18,	// (0x00028bfb) eswt_ctrl_label_pane

0x7c28,	// (0x00028c0b) eswt_ctrl_wait_pane

0x7c30,	// (0x00028c13) eswt_shell_pane

0xe612,	// (0x0002f5f5) listscroll_eswt_app_pane

0x7c50,	// (0x00028c33) popup_eswt_tasktip_window_ParamLimits

0x7c50,	// (0x00028c33) popup_eswt_tasktip_window

0x4d2a,	// (0x00025d0d) bg_popup_window_pane_cp18

0x7c61,	// (0x00028c44) eswt_control_pane_g1_ParamLimits

0x7c61,	// (0x00028c44) eswt_control_pane_g1

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_ParamLimits

0x7c6e,	// (0x00028c51) eswt_control_pane_g2

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_ParamLimits

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_ParamLimits

0x7c88,	// (0x00028c6b) eswt_control_pane_g4

0x0003,

0xfbfe,	// (0x00030be1) eswt_control_pane_g_ParamLimits

0xfbfe,	// (0x00030be1) eswt_control_pane_g

0x310c,	// (0x000240ef) bg_button_pane_ParamLimits

0x310c,	// (0x000240ef) bg_button_pane

0x1886,	// (0x00022869) common_borders_pane_copy2_ParamLimits

0x1886,	// (0x00022869) common_borders_pane_copy2

0x7c95,	// (0x00028c78) control_button_pane_g1_ParamLimits

0x7c95,	// (0x00028c78) control_button_pane_g1

0x7ca1,	// (0x00028c84) control_button_pane_g2_ParamLimits

0x7ca1,	// (0x00028c84) control_button_pane_g2

0x7cad,	// (0x00028c90) control_button_pane_g3_ParamLimits

0x7cad,	// (0x00028c90) control_button_pane_g3

0x0002,

0xfc07,	// (0x00030bea) control_button_pane_g_ParamLimits

0xfc07,	// (0x00030bea) control_button_pane_g

0x7cc1,	// (0x00028ca4) control_button_pane_t1

0x7ccf,	// (0x00028cb2) control_button_pane_t2

0x0001,

0xfc0e,	// (0x00030bf1) control_button_pane_t

0x4c38,	// (0x00025c1b) bg_button_pane_g1

0x4c40,	// (0x00025c23) bg_button_pane_g2

0x4c48,	// (0x00025c2b) bg_button_pane_g3

0x4c50,	// (0x00025c33) bg_button_pane_g4

0x4c58,	// (0x00025c3b) bg_button_pane_g5

0x4c60,	// (0x00025c43) bg_button_pane_g6

0x4c68,	// (0x00025c4b) bg_button_pane_g7

0x4c70,	// (0x00025c53) bg_button_pane_g8

0x4c78,	// (0x00025c5b) bg_button_pane_g9

0x0008,

0xf86d,	// (0x00030850) bg_button_pane_g

0x72a3,	// (0x00028286) common_borders_pane_ParamLimits

0x72a3,	// (0x00028286) common_borders_pane

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy1_ParamLimits

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy1

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy1_ParamLimits

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy1

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy1_ParamLimits

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy1

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy1_ParamLimits

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy1

0x72de,	// (0x000282c1) bg_eswt_ctrl_canvas_pane_g1

0x72a3,	// (0x00028286) common_borders_pane_cp2_ParamLimits

0x72a3,	// (0x00028286) common_borders_pane_cp2

0x72a3,	// (0x00028286) common_borders_pane_cp3_ParamLimits

0x72a3,	// (0x00028286) common_borders_pane_cp3

0x7cdd,	// (0x00028cc0) separator_horizontal_pane

0x7ce5,	// (0x00028cc8) separator_vertical_pane

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy2_ParamLimits

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy2

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy2_ParamLimits

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy2

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy2_ParamLimits

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy2

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy2_ParamLimits

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy2

0xe612,	// (0x0002f5f5) common_borders_pane_cp4

0x7cfc,	// (0x00028cdf) separator_horizontal_pane_g1

0x7d05,	// (0x00028ce8) separator_horizontal_pane_g2

0x7d0e,	// (0x00028cf1) separator_horizontal_pane_g3

0x0002,

0xfc13,	// (0x00030bf6) separator_horizontal_pane_g

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy3_ParamLimits

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy3

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy3_ParamLimits

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy3

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy3_ParamLimits

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy3

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy3_ParamLimits

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy3

0xe612,	// (0x0002f5f5) common_borders_pane_cp5

0x7d17,	// (0x00028cfa) separator_vertical_pane_g1

0x7d20,	// (0x00028d03) separator_vertical_pane_g2

0x7d29,	// (0x00028d0c) separator_vertical_pane_g3

0x0002,

0xfc1a,	// (0x00030bfd) separator_vertical_pane_g

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy4_ParamLimits

0x7c61,	// (0x00028c44) eswt_control_pane_g1_copy4

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy4_ParamLimits

0x7c6e,	// (0x00028c51) eswt_control_pane_g2_copy4

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy4_ParamLimits

0x7c7b,	// (0x00028c5e) eswt_control_pane_g3_copy4

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy4_ParamLimits

0x7c88,	// (0x00028c6b) eswt_control_pane_g4_copy4

0xdf4a,	// (0x0002ef2d) eswt_ctrl_combo_button_pane

0xdf52,	// (0x0002ef35) eswt_ctrl_input_pane

0xdf5a,	// (0x0002ef3d) popup_choice_list_window_cp70

0xdf62,	// (0x0002ef45) eswt_ctrl_input_pane_t1

0xe612,	// (0x0002f5f5) input_focus_pane_cp70

0x72a3,	// (0x00028286) bg_button_pane_cp70_ParamLimits

0x72a3,	// (0x00028286) bg_button_pane_cp70

0xdf70,	// (0x0002ef53) eswt_ctrl_combo_button_pane_g1

0x7d60,	// (0x00028d43) wait_bar_pane_cp70

0x4d2a,	// (0x00025d0d) bg_popup_window_pane_cp70_ParamLimits

0x4d2a,	// (0x00025d0d) bg_popup_window_pane_cp70

0x7d68,	// (0x00028d4b) popup_eswt_tasktip_window_t1

0x7d7e,	// (0x00028d61) wait_bar_pane_cp71_ParamLimits

0x7d7e,	// (0x00028d61) wait_bar_pane_cp71

0x7d8a,	// (0x00028d6d) grid_eswt_app_pane

0x35b9,	// (0x0002459c) scroll_pane_cp70

0xdf78,	// (0x0002ef5b) cell_eswt_app_pane_ParamLimits

0xdf78,	// (0x0002ef5b) cell_eswt_app_pane

0xdfaa,	// (0x0002ef8d) cell_eswt_app_pane_g1_ParamLimits

0xdfaa,	// (0x0002ef8d) cell_eswt_app_pane_g1

0xdfd9,	// (0x0002efbc) cell_eswt_app_pane_g2_ParamLimits

0xdfd9,	// (0x0002efbc) cell_eswt_app_pane_g2

0x0001,

0xfc21,	// (0x00030c04) cell_eswt_app_pane_g_ParamLimits

0xfc21,	// (0x00030c04) cell_eswt_app_pane_g

0xe002,	// (0x0002efe5) cell_eswt_app_pane_t1_ParamLimits

0xe002,	// (0x0002efe5) cell_eswt_app_pane_t1

0x7e4f,	// (0x00028e32) grid_highlight_pane_cp70_ParamLimits

0x7e4f,	// (0x00028e32) grid_highlight_pane_cp70

0x61bb,	// (0x0002719e) set_content_pane_g1

0x401a,	// (0x00024ffd) status_small_volume_pane

0x27bb,	// (0x0002379e) status_small_volume_pane_g1

0x27c3,	// (0x000237a6) volume_small2_pane

0x27cc,	// (0x000237af) volume_small2_pane_g1

0x27d5,	// (0x000237b8) volume_small2_pane_g2

0x27de,	// (0x000237c1) volume_small2_pane_g3

0x27e7,	// (0x000237ca) volume_small2_pane_g4

0x27f0,	// (0x000237d3) volume_small2_pane_g5

0x27f9,	// (0x000237dc) volume_small2_pane_g6

0x2802,	// (0x000237e5) volume_small2_pane_g7

0x280b,	// (0x000237ee) volume_small2_pane_g8

0x2814,	// (0x000237f7) volume_small2_pane_g9

0x281d,	// (0x00023800) volume_small2_pane_g10

0x0009,

0xfc26,	// (0x00030c09) volume_small2_pane_g

0x76bc,	// (0x0002869f) fep_vkb_top_text_pane_g1_ParamLimits

0xded0,	// (0x0002eeb3) fep_vkb_top_text_pane_t1_ParamLimits

0x7991,	// (0x00028974) popup_preview_fixed_window_g3_ParamLimits

0x7991,	// (0x00028974) popup_preview_fixed_window_g3

0xd150,	// (0x0002e133) popup_toolbar_trans_pane

0xd893,	// (0x0002e876) aid_height_set_list_ParamLimits

0x6071,	// (0x00027054) aid_size_parent_ParamLimits

0x40f0,	// (0x000250d3) list_highlight_pane_cp2_ParamLimits

0x61bb,	// (0x0002719e) set_content_pane_g1_ParamLimits

0xb7d1,	// (0x0002c7b4) list_single_image_pane_ParamLimits

0xb7d1,	// (0x0002c7b4) list_single_image_pane

0xe034,	// (0x0002f017) aid_size_cell_image_ParamLimits

0xe034,	// (0x0002f017) aid_size_cell_image

0xe041,	// (0x0002f024) grid_single_image_pane_ParamLimits

0xe041,	// (0x0002f024) grid_single_image_pane

0x3126,	// (0x00024109) list_single_image_pane_g1_ParamLimits

0x3126,	// (0x00024109) list_single_image_pane_g1

0x3132,	// (0x00024115) list_single_image_pane_g2_ParamLimits

0x3132,	// (0x00024115) list_single_image_pane_g2

0x0001,

0xfc3b,	// (0x00030c1e) list_single_image_pane_g_ParamLimits

0xfc3b,	// (0x00030c1e) list_single_image_pane_g

0x7e76,	// (0x00028e59) list_single_image_pane_t1_ParamLimits

0x7e76,	// (0x00028e59) list_single_image_pane_t1

0xe04f,	// (0x0002f032) cell_image_list_pane_ParamLimits

0xe04f,	// (0x0002f032) cell_image_list_pane

0xe069,	// (0x0002f04c) cell_image_list_pane_g1

0xe072,	// (0x0002f055) cell_image_list_pane_g2

0x0001,

0xfc40,	// (0x00030c23) cell_image_list_pane_g

0x7eb4,	// (0x00028e97) aid_size_cell_tb_trans_pane

0x310c,	// (0x000240ef) bg_tb_trans_pane

0x7ec6,	// (0x00028ea9) grid_tb_trans_pane

0x4c38,	// (0x00025c1b) bg_tb_trans_pane_g1

0x4c40,	// (0x00025c23) bg_tb_trans_pane_g2

0x4c48,	// (0x00025c2b) bg_tb_trans_pane_g3

0x4c50,	// (0x00025c33) bg_tb_trans_pane_g4

0x4c58,	// (0x00025c3b) bg_tb_trans_pane_g5

0x4c70,	// (0x00025c53) bg_tb_trans_pane_g6

0x4c78,	// (0x00025c5b) bg_tb_trans_pane_g7

0x4c60,	// (0x00025c43) bg_tb_trans_pane_g8

0x4c68,	// (0x00025c4b) bg_tb_trans_pane_g9

0x0008,

0xfc45,	// (0x00030c28) bg_tb_trans_pane_g

0x7eda,	// (0x00028ebd) cell_toolbar_trans_pane_ParamLimits

0x7eda,	// (0x00028ebd) cell_toolbar_trans_pane

0x72de,	// (0x000282c1) cell_toolbar_trans_pane_g1

0xdc78,	// (0x0002ec5b) list_form2_midp_pane_t1

0xdc86,	// (0x0002ec69) list_form2_midp_pane_t2

0x0001,

0xfaee,	// (0x00030ad1) list_form2_midp_pane_t

0x6f1b,	// (0x00027efe) scroll_pane_cp51_ParamLimits

0x70e2,	// (0x000280c5) form2_midp_wait_pane_g1

0x70eb,	// (0x000280ce) form2_midp_wait_pane_g2

0x70f4,	// (0x000280d7) form2_midp_wait_pane_g3

0x0002,

0xfb03,	// (0x00030ae6) form2_midp_wait_pane_g

0x11fe,	// (0x000221e1) list_highlight_pane_cp21_ParamLimits

0x7138,	// (0x0002811b) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x7147,	// (0x0002812a) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x06a9,	// (0x0002168c) list_single_2graphic_im_pane_ParamLimits

0x06a9,	// (0x0002168c) list_single_2graphic_im_pane

0xe07b,	// (0x0002f05e) list_single_2graphic_im_pane_g1_ParamLimits

0xe07b,	// (0x0002f05e) list_single_2graphic_im_pane_g1

0xe08c,	// (0x0002f06f) list_single_2graphic_im_pane_g2_ParamLimits

0xe08c,	// (0x0002f06f) list_single_2graphic_im_pane_g2

0xe098,	// (0x0002f07b) list_single_2graphic_im_pane_g3_ParamLimits

0xe098,	// (0x0002f07b) list_single_2graphic_im_pane_g3

0x0003,

0xfc58,	// (0x00030c3b) list_single_2graphic_im_pane_g_ParamLimits

0xfc58,	// (0x00030c3b) list_single_2graphic_im_pane_g

0xe0ac,	// (0x0002f08f) list_single_2graphic_im_pane_t1_ParamLimits

0xe0ac,	// (0x0002f08f) list_single_2graphic_im_pane_t1

0x799d,	// (0x00028980) list_single_graphic_2heading_pane_fp_ParamLimits

0x799d,	// (0x00028980) list_single_graphic_2heading_pane_fp

0x09ab,	// (0x0002198e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x09ab,	// (0x0002198e) list_single_graphic_2heading_pane_fp_g1

0x79b6,	// (0x00028999) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x79b6,	// (0x00028999) list_single_graphic_2heading_pane_fp_g2

0x0974,	// (0x00021957) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x0974,	// (0x00021957) list_single_graphic_2heading_pane_fp_g3

0x0980,	// (0x00021963) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x0980,	// (0x00021963) list_single_graphic_2heading_pane_fp_g4

0x79c2,	// (0x000289a5) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x79c2,	// (0x000289a5) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb86,	// (0x00030b69) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb86,	// (0x00030b69) list_single_graphic_2heading_pane_fp_g

0x0b78,	// (0x00021b5b) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x0b78,	// (0x00021b5b) list_single_graphic_2heading_pane_fp_t1

0x09e3,	// (0x000219c6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x09e3,	// (0x000219c6) list_single_graphic_2heading_pane_fp_t2

0x0b8e,	// (0x00021b71) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x0b8e,	// (0x00021b71) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc61,	// (0x00030c44) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc61,	// (0x00030c44) list_single_graphic_2heading_pane_fp_t

0x737e,	// (0x00028361) fep_hwr_write_pane_g5_ParamLimits

0x737e,	// (0x00028361) fep_hwr_write_pane_g5

0x738a,	// (0x0002836d) fep_hwr_write_pane_g6_ParamLimits

0x738a,	// (0x0002836d) fep_hwr_write_pane_g6

0x7c30,	// (0x00028c13) eswt_shell_pane_ParamLimits

0x4d2a,	// (0x00025d0d) bg_popup_window_pane_cp18_ParamLimits

0x5fb7,	// (0x00026f9a) heading_pane_cp70

0x7d68,	// (0x00028d4b) popup_eswt_tasktip_window_t1_ParamLimits

0xd213,	// (0x0002e1f6) aid_touch_tab_arrow_left

0xd229,	// (0x0002e20c) aid_touch_tab_arrow_right

0xbbac,	// (0x0002cb8f) title_pane_g3_ParamLimits

0xbbac,	// (0x0002cb8f) title_pane_g3

0x30cb,	// (0x000240ae) set_value_pane_g1

0xd150,	// (0x0002e133) popup_toolbar_trans_pane_ParamLimits

0x7eb4,	// (0x00028e97) aid_size_cell_tb_trans_pane_ParamLimits

0x310c,	// (0x000240ef) bg_tb_trans_pane_ParamLimits

0x7ec6,	// (0x00028ea9) grid_tb_trans_pane_ParamLimits

0x1518,	// (0x000224fb) cont_note_pane_ParamLimits

0x1518,	// (0x000224fb) cont_note_pane

0x1886,	// (0x00022869) cont_snote2_single_text_pane_ParamLimits

0x1886,	// (0x00022869) cont_snote2_single_text_pane

0x1886,	// (0x00022869) cont_snote2_single_graphic_pane_ParamLimits

0x1886,	// (0x00022869) cont_snote2_single_graphic_pane

0x52de,	// (0x000262c1) cont_note_wait_pane_ParamLimits

0x52de,	// (0x000262c1) cont_note_wait_pane

0x52de,	// (0x000262c1) cont_note_image_pane_ParamLimits

0x52de,	// (0x000262c1) cont_note_image_pane

0x7f6e,	// (0x00028f51) popup_note2_window_g1_ParamLimits

0x7f6e,	// (0x00028f51) popup_note2_window_g1

0x7f9f,	// (0x00028f82) popup_note2_window_t1_ParamLimits

0x7f9f,	// (0x00028f82) popup_note2_window_t1

0x7fe4,	// (0x00028fc7) popup_note2_window_t2_ParamLimits

0x7fe4,	// (0x00028fc7) popup_note2_window_t2

0x8029,	// (0x0002900c) popup_note2_window_t3_ParamLimits

0x8029,	// (0x0002900c) popup_note2_window_t3

0x806e,	// (0x00029051) popup_note2_window_t4_ParamLimits

0x806e,	// (0x00029051) popup_note2_window_t4

0x159c,	// (0x0002257f) popup_note2_window_t5_ParamLimits

0x159c,	// (0x0002257f) popup_note2_window_t5

0x0004,

0xfc6d,	// (0x00030c50) popup_note2_window_t_ParamLimits

0xfc6d,	// (0x00030c50) popup_note2_window_t

0x809d,	// (0x00029080) popup_note2_image_window_g1_ParamLimits

0x809d,	// (0x00029080) popup_note2_image_window_g1

0x80a9,	// (0x0002908c) popup_note2_image_window_g2_ParamLimits

0x80a9,	// (0x0002908c) popup_note2_image_window_g2

0x0001,

0xfc78,	// (0x00030c5b) popup_note2_image_window_g_ParamLimits

0xfc78,	// (0x00030c5b) popup_note2_image_window_g

0x80bb,	// (0x0002909e) popup_note2_image_window_t1_ParamLimits

0x80bb,	// (0x0002909e) popup_note2_image_window_t1

0x80d3,	// (0x000290b6) popup_note2_image_window_t2_ParamLimits

0x80d3,	// (0x000290b6) popup_note2_image_window_t2

0x80eb,	// (0x000290ce) popup_note2_image_window_t3_ParamLimits

0x80eb,	// (0x000290ce) popup_note2_image_window_t3

0x0002,

0xfc7d,	// (0x00030c60) popup_note2_image_window_t_ParamLimits

0xfc7d,	// (0x00030c60) popup_note2_image_window_t

0x52ec,	// (0x000262cf) popup_note2_wait_window_g1_ParamLimits

0x52ec,	// (0x000262cf) popup_note2_wait_window_g1

0x8107,	// (0x000290ea) popup_note2_wait_window_g2_ParamLimits

0x8107,	// (0x000290ea) popup_note2_wait_window_g2

0x5304,	// (0x000262e7) popup_note2_wait_window_g3_ParamLimits

0x5304,	// (0x000262e7) popup_note2_wait_window_g3

0x0002,

0xfc84,	// (0x00030c67) popup_note2_wait_window_g_ParamLimits

0xfc84,	// (0x00030c67) popup_note2_wait_window_g

0x8113,	// (0x000290f6) popup_note2_wait_window_t1_ParamLimits

0x8113,	// (0x000290f6) popup_note2_wait_window_t1

0x8131,	// (0x00029114) popup_note2_wait_window_t2_ParamLimits

0x8131,	// (0x00029114) popup_note2_wait_window_t2

0x814f,	// (0x00029132) popup_note2_wait_window_t3_ParamLimits

0x814f,	// (0x00029132) popup_note2_wait_window_t3

0x8161,	// (0x00029144) popup_note2_wait_window_t4_ParamLimits

0x8161,	// (0x00029144) popup_note2_wait_window_t4

0x0003,

0xfc8b,	// (0x00030c6e) popup_note2_wait_window_t_ParamLimits

0xfc8b,	// (0x00030c6e) popup_note2_wait_window_t

0x8173,	// (0x00029156) wait_bar2_pane_ParamLimits

0x8173,	// (0x00029156) wait_bar2_pane

0x818b,	// (0x0002916e) popup_snote2_single_text_window_g1_ParamLimits

0x818b,	// (0x0002916e) popup_snote2_single_text_window_g1

0x81b3,	// (0x00029196) popup_snote2_single_text_window_t1_ParamLimits

0x81b3,	// (0x00029196) popup_snote2_single_text_window_t1

0x81ff,	// (0x000291e2) popup_snote2_single_text_window_t2_ParamLimits

0x81ff,	// (0x000291e2) popup_snote2_single_text_window_t2

0x824b,	// (0x0002922e) popup_snote2_single_text_window_t3_ParamLimits

0x824b,	// (0x0002922e) popup_snote2_single_text_window_t3

0x828c,	// (0x0002926f) popup_snote2_single_text_window_t4_ParamLimits

0x828c,	// (0x0002926f) popup_snote2_single_text_window_t4

0x82c2,	// (0x000292a5) popup_snote2_single_text_window_t5_ParamLimits

0x82c2,	// (0x000292a5) popup_snote2_single_text_window_t5

0x0004,

0xfc94,	// (0x00030c77) popup_snote2_single_text_window_t_ParamLimits

0xfc94,	// (0x00030c77) popup_snote2_single_text_window_t

0x82ed,	// (0x000292d0) popup_snote2_single_graphic_window_g1_ParamLimits

0x82ed,	// (0x000292d0) popup_snote2_single_graphic_window_g1

0x8315,	// (0x000292f8) popup_snote2_single_graphic_window_g2_ParamLimits

0x8315,	// (0x000292f8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc9f,	// (0x00030c82) popup_snote2_single_graphic_window_g_ParamLimits

0xfc9f,	// (0x00030c82) popup_snote2_single_graphic_window_g

0x833d,	// (0x00029320) popup_snote2_single_graphic_window_t1_ParamLimits

0x833d,	// (0x00029320) popup_snote2_single_graphic_window_t1

0x8389,	// (0x0002936c) popup_snote2_single_graphic_window_t2_ParamLimits

0x8389,	// (0x0002936c) popup_snote2_single_graphic_window_t2

0x824b,	// (0x0002922e) popup_snote2_single_graphic_window_t3_ParamLimits

0x824b,	// (0x0002922e) popup_snote2_single_graphic_window_t3

0x828c,	// (0x0002926f) popup_snote2_single_graphic_window_t4_ParamLimits

0x828c,	// (0x0002926f) popup_snote2_single_graphic_window_t4

0x82c2,	// (0x000292a5) popup_snote2_single_graphic_window_t5_ParamLimits

0x82c2,	// (0x000292a5) popup_snote2_single_graphic_window_t5

0x0004,

0xfca4,	// (0x00030c87) popup_snote2_single_graphic_window_t_ParamLimits

0xfca4,	// (0x00030c87) popup_snote2_single_graphic_window_t

0x6dc5,	// (0x00027da8) clock_nsta_pane_cp2_t1

0x6dc5,	// (0x00027da8) clock_nsta_pane_cp2_t2

0x0001,

0xfac4,	// (0x00030aa7) clock_nsta_pane_cp2_t

0x030e,	// (0x000212f1) form_field_data_wide_pane_g1_ParamLimits

0x3126,	// (0x00024109) form_field_data_wide_pane_g2_ParamLimits

0x3126,	// (0x00024109) form_field_data_wide_pane_g2

0x3132,	// (0x00024115) form_field_data_wide_pane_g3_ParamLimits

0x3132,	// (0x00024115) form_field_data_wide_pane_g3

0x0002,

0xf692,	// (0x00030675) form_field_data_wide_pane_g_ParamLimits

0xf692,	// (0x00030675) form_field_data_wide_pane_g

0xdb80,	// (0x0002eb63) grid_touch_3_pane_ParamLimits

0xdb80,	// (0x0002eb63) grid_touch_3_pane

0xe0dd,	// (0x0002f0c0) cell_touch_3_pane_ParamLimits

0xe0dd,	// (0x0002f0c0) cell_touch_3_pane

0x72de,	// (0x000282c1) cell_touch_3_pane_g1

0x72de,	// (0x000282c1) cell_touch_3_pane_g2

0x0001,

0xfb49,	// (0x00030b2c) cell_touch_3_pane_g

0x15ce,	// (0x000225b1) cont_query_data_pane

0x15d6,	// (0x000225b9) cont_query_data_pane_cp1

0x8408,	// (0x000293eb) button_value_adjust_pane_cp7

0x8410,	// (0x000293f3) query_popup_pane_cp3

0x3846,	// (0x00024829) bg_popup_sub_pane_cp22_ParamLimits

0x1cc2,	// (0x00022ca5) navi_navi_volume_pane_cp2

0x1cdd,	// (0x00022cc0) popup_side_volume_key_window_g2

0x1cec,	// (0x00022ccf) popup_side_volume_key_window_g3

0x0002,

0xf724,	// (0x00030707) popup_side_volume_key_window_g

0x1d09,	// (0x00022cec) popup_side_volume_key_window_t2

0x0001,

0xf72b,	// (0x0003070e) popup_side_volume_key_window_t

0x3b01,	// (0x00024ae4) popup_side_volume_key_window_ParamLimits

0xb290,	// (0x0002c273) list_double_graphic_pane_g4_ParamLimits

0xb290,	// (0x0002c273) list_double_graphic_pane_g4

0xb7bb,	// (0x0002c79e) list_single_2heading_msg_pane_ParamLimits

0xb7bb,	// (0x0002c79e) list_single_2heading_msg_pane

0xb81b,	// (0x0002c7fe) list_single_2heading_msg_pane_g1_ParamLimits

0xb81b,	// (0x0002c7fe) list_single_2heading_msg_pane_g1

0xb827,	// (0x0002c80a) list_single_2heading_msg_pane_g2_ParamLimits

0xb827,	// (0x0002c80a) list_single_2heading_msg_pane_g2

0xb83a,	// (0x0002c81d) list_single_2heading_msg_pane_g3_ParamLimits

0xb83a,	// (0x0002c81d) list_single_2heading_msg_pane_g3

0xb846,	// (0x0002c829) list_single_2heading_msg_pane_g4_ParamLimits

0xb846,	// (0x0002c829) list_single_2heading_msg_pane_g4

0x0003,

0xfcaf,	// (0x00030c92) list_single_2heading_msg_pane_g_ParamLimits

0xfcaf,	// (0x00030c92) list_single_2heading_msg_pane_g

0xb85e,	// (0x0002c841) list_single_2heading_msg_pane_t1_ParamLimits

0xb85e,	// (0x0002c841) list_single_2heading_msg_pane_t1

0xb886,	// (0x0002c869) list_single_2heading_msg_pane_t2_ParamLimits

0xb886,	// (0x0002c869) list_single_2heading_msg_pane_t2

0xb8f1,	// (0x0002c8d4) list_single_2heading_msg_pane_t3_ParamLimits

0xb8f1,	// (0x0002c8d4) list_single_2heading_msg_pane_t3

0x0c73,	// (0x00021c56) list_single_2heading_msg_pane_t4_ParamLimits

0x0c73,	// (0x00021c56) list_single_2heading_msg_pane_t4

0x0003,

0xfcb8,	// (0x00030c9b) list_single_2heading_msg_pane_t_ParamLimits

0xfcb8,	// (0x00030c9b) list_single_2heading_msg_pane_t

0x1152,	// (0x00022135) title_pane_g4_ParamLimits

0x1152,	// (0x00022135) title_pane_g4

0x1ace,	// (0x00022ab1) title_pane_stacon_g3_ParamLimits

0x1ace,	// (0x00022ab1) title_pane_stacon_g3

0x7f31,	// (0x00028f14) list_single_2graphic_im_pane_g4_ParamLimits

0x7f31,	// (0x00028f14) list_single_2graphic_im_pane_g4

0x5d54,	// (0x00026d37) popup_side_volume_key_window_cp

0x65ca,	// (0x000275ad) main_idle_act2_pane_t1

0x2097,	// (0x0002307a) toolbar_button_pane_g10

0xbf39,	// (0x0002cf1c) popup_toolbar_window_cp1

0x6db6,	// (0x00027d99) clock_nsta_pane_cp_t1

0x6db6,	// (0x00027d99) clock_nsta_pane_cp_t2

0x0001,

0xfabf,	// (0x00030aa2) clock_nsta_pane_cp_t

0x1cc2,	// (0x00022ca5) navi_navi_volume_pane_cp2_ParamLimits

0x1cd1,	// (0x00022cb4) popup_side_volume_key_window_g1_ParamLimits

0x1cdd,	// (0x00022cc0) popup_side_volume_key_window_g2_ParamLimits

0x1cec,	// (0x00022ccf) popup_side_volume_key_window_g3_ParamLimits

0xf724,	// (0x00030707) popup_side_volume_key_window_g_ParamLimits

0x24b0,	// (0x00023493) fep_hwr_aid_pane

0xdd84,	// (0x0002ed67) bg_fep_hwr_top_pane_g4_ParamLimits

0x734e,	// (0x00028331) fep_hwr_top_pane_g1_ParamLimits

0x7360,	// (0x00028343) fep_hwr_top_pane_g2_ParamLimits

0x256b,	// (0x0002354e) fep_hwr_top_pane_g3_ParamLimits

0xfb14,	// (0x00030af7) fep_hwr_top_pane_g_ParamLimits

0x2580,	// (0x00023563) fep_hwr_top_text_pane_ParamLimits

0x5b09,	// (0x00026aec) aid_touch_tab_arrow_arrow_2

0x5b12,	// (0x00026af5) aid_touch_tab_arrow_left_2

0x24c4,	// (0x000234a7) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x24fb,	// (0x000234de) fep_hwr_prediction_pane

0x74b6,	// (0x00028499) fep_vkb_prediction_pane

0xdeb0,	// (0x0002ee93) fep_vkb_side_pane_g3_ParamLimits

0xdeb0,	// (0x0002ee93) fep_vkb_side_pane_g3

0x7568,	// (0x0002854b) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x7a16,	// (0x000289f9) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x7a23,	// (0x00028a06) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbe,	// (0x00030ba1) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x8437,	// (0x0002941a) fep_hwr_prediction_pane_g1

0x2826,	// (0x00023809) fep_hwr_prediction_pane_g2

0x282e,	// (0x00023811) fep_hwr_prediction_pane_g3

0x2836,	// (0x00023819) fep_hwr_prediction_pane_g4

0x0003,

0xfcc1,	// (0x00030ca4) fep_hwr_prediction_pane_g

0x8437,	// (0x0002941a) fep_vkb_prediction_pane_g1

0x8441,	// (0x00029424) fep_vkb_prediction_pane_g2

0x8449,	// (0x0002942c) fep_vkb_prediction_pane_g3

0x8451,	// (0x00029434) fep_vkb_prediction_pane_g4

0x0003,

0xfcca,	// (0x00030cad) fep_vkb_prediction_pane_g

0x66a4,	// (0x00027687) slider_set_pane_g3

0x66b8,	// (0x0002769b) slider_set_pane_g4

0x66d0,	// (0x000276b3) slider_set_pane_g5

0x66a4,	// (0x00027687) slider_set_pane_g6

0x2380,	// (0x00023363) slider_set_pane_g7

0x6202,	// (0x000271e5) slider_form_pane_g3

0x620b,	// (0x000271ee) slider_form_pane_g4

0x6213,	// (0x000271f6) slider_form_pane_g5

0x6202,	// (0x000271e5) slider_form_pane_g6

0xda02,	// (0x0002e9e5) slider_form_pane_g7

0x68da,	// (0x000278bd) slider_set_pane_vc_g3

0x68e3,	// (0x000278c6) slider_set_pane_vc_g4

0x68ec,	// (0x000278cf) slider_set_pane_vc_g5

0x68da,	// (0x000278bd) slider_set_pane_vc_g6

0x68f5,	// (0x000278d8) slider_set_pane_vc_g7

0x68da,	// (0x000278bd) slider_form_pane_vc_g1

0x68e3,	// (0x000278c6) slider_form_pane_vc_g2

0x68ec,	// (0x000278cf) slider_form_pane_vc_g3

0x68da,	// (0x000278bd) slider_form_pane_vc_g4

0x6aaa,	// (0x00027a8d) slider_form_pane_vc_g5

0x0004,

0xfa98,	// (0x00030a7b) slider_form_pane_vc_g

0xe612,	// (0x0002f5f5) main_idle_act3_pane

0x8459,	// (0x0002943c) ai3_links_pane

0xe127,	// (0x0002f10a) popup_ai3_data_window_ParamLimits

0xe127,	// (0x0002f10a) popup_ai3_data_window

0xe612,	// (0x0002f5f5) grid_ai3_links_pane

0xe145,	// (0x0002f128) cell_ai3_links_pane_ParamLimits

0xe145,	// (0x0002f128) cell_ai3_links_pane

0x849a,	// (0x0002947d) bg_popup_sub_pane_cp11

0x84a7,	// (0x0002948a) cell_ai3_links_pane_g1

0xe612,	// (0x0002f5f5) bg_popup_sub_pane_cp12

0x84cc,	// (0x000294af) heading_ai3_data_pane

0x84d4,	// (0x000294b7) list_ai3_gene_pane

0x84e0,	// (0x000294c3) popup_ai3_data_window_g1

0x84e8,	// (0x000294cb) heading_ai3_data_pane_g1

0x84f0,	// (0x000294d3) heading_ai3_data_pane_t1

0x84fe,	// (0x000294e1) list_double_ai3_gene_pane_ParamLimits

0x84fe,	// (0x000294e1) list_double_ai3_gene_pane

0x850b,	// (0x000294ee) list_single_ai3_gene_pane_ParamLimits

0x850b,	// (0x000294ee) list_single_ai3_gene_pane

0x72a3,	// (0x00028286) list_highlight_pane_cp7_ParamLimits

0x72a3,	// (0x00028286) list_highlight_pane_cp7

0x8518,	// (0x000294fb) list_single_a13_gene_pane_t1_ParamLimits

0x8518,	// (0x000294fb) list_single_a13_gene_pane_t1

0x852f,	// (0x00029512) list_single_ai3_gene_pane_g1

0x8538,	// (0x0002951b) list_single_ai3_gene_pane_g2

0x0001,

0xfcd3,	// (0x00030cb6) list_single_ai3_gene_pane_g

0x8540,	// (0x00029523) list_double_ai3_gene_pane_g1_ParamLimits

0x8540,	// (0x00029523) list_double_ai3_gene_pane_g1

0x854c,	// (0x0002952f) list_double_ai3_gene_pane_t1_ParamLimits

0x854c,	// (0x0002952f) list_double_ai3_gene_pane_t1

0x8568,	// (0x0002954b) list_double_ai3_gene_pane_t2_ParamLimits

0x8568,	// (0x0002954b) list_double_ai3_gene_pane_t2

0x857d,	// (0x00029560) list_double_ai3_gene_pane_t3_ParamLimits

0x857d,	// (0x00029560) list_double_ai3_gene_pane_t3

0x0002,

0xfcd8,	// (0x00030cbb) list_double_ai3_gene_pane_t_ParamLimits

0xfcd8,	// (0x00030cbb) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0ba4,	// (0x00021b87) aid_size_min_col_2

0xe111,	// (0x0002f0f4) aid_size_min_msg_ParamLimits

0xe111,	// (0x0002f0f4) aid_size_min_msg

0xdec4,	// (0x0002eea7) fep_vkb_top_text_pane_g2_ParamLimits

0xdec4,	// (0x0002eea7) fep_vkb_top_text_pane_g2

0x0001,

0xfb44,	// (0x00030b27) fep_vkb_top_text_pane_g_ParamLimits

0xfb44,	// (0x00030b27) fep_vkb_top_text_pane_g

0xe612,	// (0x0002f5f5) main_hc_apps_shell_pane

0x859a,	// (0x0002957d) grid_hc_apps_pane_ParamLimits

0x859a,	// (0x0002957d) grid_hc_apps_pane

0x85a9,	// (0x0002958c) list_hc_apps_pane

0x85b1,	// (0x00029594) scroll_pane_cp37_ParamLimits

0x85b1,	// (0x00029594) scroll_pane_cp37

0xe15f,	// (0x0002f142) cell_hc_apps_pane_ParamLimits

0xe15f,	// (0x0002f142) cell_hc_apps_pane

0xe229,	// (0x0002f20c) cell_hc_apps_pane_g1_ParamLimits

0xe229,	// (0x0002f20c) cell_hc_apps_pane_g1

0x86a6,	// (0x00029689) cell_hc_apps_pane_g2_ParamLimits

0x86a6,	// (0x00029689) cell_hc_apps_pane_g2

0x86c2,	// (0x000296a5) cell_hc_apps_pane_g3_ParamLimits

0x86c2,	// (0x000296a5) cell_hc_apps_pane_g3

0x0002,

0xfcdf,	// (0x00030cc2) cell_hc_apps_pane_g_ParamLimits

0xfcdf,	// (0x00030cc2) cell_hc_apps_pane_g

0xe256,	// (0x0002f239) cell_hc_apps_pane_t1_ParamLimits

0xe256,	// (0x0002f239) cell_hc_apps_pane_t1

0x1518,	// (0x000224fb) grid_highlight_pane_cp10_ParamLimits

0x1518,	// (0x000224fb) grid_highlight_pane_cp10

0xe296,	// (0x0002f279) list_single_hc_apps_pane_ParamLimits

0xe296,	// (0x0002f279) list_single_hc_apps_pane

0xe2d0,	// (0x0002f2b3) list_single_hc_apps_pane_g1

0xb95f,	// (0x0002c942) list_single_hc_apps_pane_g2

0x0001,

0xfce6,	// (0x00030cc9) list_single_hc_apps_pane_g

0xb978,	// (0x0002c95b) list_single_hc_apps_pane_g2_copy1

0xb994,	// (0x0002c977) list_single_hc_apps_pane_t1

0x11fe,	// (0x000221e1) bg_set_opt_pane_cp_ParamLimits

0x124a,	// (0x0002222d) setting_slider_pane_t1_ParamLimits

0x1260,	// (0x00022243) setting_slider_pane_t2_ParamLimits

0x127a,	// (0x0002225d) setting_slider_pane_t3_ParamLimits

0xf57a,	// (0x0003055d) setting_slider_pane_t_ParamLimits

0x1292,	// (0x00022275) slider_set_pane_ParamLimits

0x1f73,	// (0x00022f56) control_pane_g5_ParamLimits

0x1f73,	// (0x00022f56) control_pane_g5

0x6023,	// (0x00027006) slider_set_pane_g1_ParamLimits

0x2374,	// (0x00023357) slider_set_pane_g2_ParamLimits

0x66a4,	// (0x00027687) slider_set_pane_g3_ParamLimits

0x66b8,	// (0x0002769b) slider_set_pane_g4_ParamLimits

0x66d0,	// (0x000276b3) slider_set_pane_g5_ParamLimits

0x66a4,	// (0x00027687) slider_set_pane_g6_ParamLimits

0x2380,	// (0x00023363) slider_set_pane_g7_ParamLimits

0xf96b,	// (0x0003094e) slider_set_pane_g_ParamLimits

0x3be6,	// (0x00024bc9) navi_icon_text_pane_ParamLimits

0xd1dd,	// (0x0002e1c0) aid_fill_nsta_2_ParamLimits

0xd213,	// (0x0002e1f6) aid_touch_tab_arrow_left_ParamLimits

0xd229,	// (0x0002e20c) aid_touch_tab_arrow_right_ParamLimits

0xd2c4,	// (0x0002e2a7) clock_nsta_pane_ParamLimits

0xd751,	// (0x0002e734) navi_icon_pane_g1_ParamLimits

0xd75d,	// (0x0002e740) navi_text_pane_t1_ParamLimits

0xdc5a,	// (0x0002ec3d) navi_icon_text_pane_g1_ParamLimits

0xdc66,	// (0x0002ec49) navi_icon_text_pane_t1_ParamLimits

0xe2d0,	// (0x0002f2b3) list_single_hc_apps_pane_g1_ParamLimits

0xb95f,	// (0x0002c942) list_single_hc_apps_pane_g2_ParamLimits

0xfce6,	// (0x00030cc9) list_single_hc_apps_pane_g_ParamLimits

0xb978,	// (0x0002c95b) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xb994,	// (0x0002c977) list_single_hc_apps_pane_t1_ParamLimits

0xbb18,	// (0x0002cafb) popup_toolbar2_fixed_window_ParamLimits

0xbb18,	// (0x0002cafb) popup_toolbar2_fixed_window

0xd146,	// (0x0002e129) popup_toolbar2_float_window

0xe612,	// (0x0002f5f5) bg_popup_sub_pane_cp27

0x877c,	// (0x0002975f) grid_toolbar2_float_pane

0xe612,	// (0x0002f5f5) bg_popup_sub_pane_cp26

0x877c,	// (0x0002975f) grid_toolbar2_fixed_pane

0xe2e9,	// (0x0002f2cc) cell_toolbar2_fixed_pane_ParamLimits

0xe2e9,	// (0x0002f2cc) cell_toolbar2_fixed_pane

0xe306,	// (0x0002f2e9) cell_toolbar2_fixed_pane_g1

0x879d,	// (0x00029780) toolbar2_fixed_button_pane

0x4c38,	// (0x00025c1b) toolbar2_fixed_button_pane_g1

0x4c40,	// (0x00025c23) toolbar2_fixed_button_pane_g2

0x4c48,	// (0x00025c2b) toolbar2_fixed_button_pane_g3

0x4c50,	// (0x00025c33) toolbar2_fixed_button_pane_g4

0x4c58,	// (0x00025c3b) toolbar2_fixed_button_pane_g5

0x4c60,	// (0x00025c43) toolbar2_fixed_button_pane_g6

0x4c68,	// (0x00025c4b) toolbar2_fixed_button_pane_g7

0x4c70,	// (0x00025c53) toolbar2_fixed_button_pane_g8

0x4c78,	// (0x00025c5b) toolbar2_fixed_button_pane_g9

0x0008,

0xf86d,	// (0x00030850) toolbar2_fixed_button_pane_g

0x87a5,	// (0x00029788) cell_toolbar2_float_pane_ParamLimits

0x87a5,	// (0x00029788) cell_toolbar2_float_pane

0x87b6,	// (0x00029799) cell_toolbar2_float_pane_g1

0x879d,	// (0x00029780) toolbar2_fixed_button_pane_cp

0xddac,	// (0x0002ed8f) fep_vkb_accented_list_pane_ParamLimits

0xddac,	// (0x0002ed8f) fep_vkb_accented_list_pane

0x26e2,	// (0x000236c5) bg_popup_fep_shadow_pane_g9

0x3d6a,	// (0x00024d4d) bg_popup_fep_shadow_pane_cp3

0x3275,	// (0x00024258) list_accented_list_pane

0x87bf,	// (0x000297a2) list_single_accented_list_pane_ParamLimits

0x87bf,	// (0x000297a2) list_single_accented_list_pane

0x3d6a,	// (0x00024d4d) list_highlight_pane_cp10

0x87d0,	// (0x000297b3) list_single_accented_list_pane_t1

0xca07,	// (0x0002d9ea) popup_slider_window_ParamLimits

0xca07,	// (0x0002d9ea) popup_slider_window

0x8418,	// (0x000293fb) aid_indentation_list_msg

0xe411,	// (0x0002f3f4) bg_popup_window_pane_cp19

0x890a,	// (0x000298ed) popup_slider_window_g1

0x8926,	// (0x00029909) popup_slider_window_g2

0x8942,	// (0x00029925) popup_slider_window_g3

0x0005,

0xfceb,	// (0x00030cce) popup_slider_window_g

0x899e,	// (0x00029981) popup_slider_window_t1

0x8a12,	// (0x000299f5) small_volume_slider_vertical_pane

0x72de,	// (0x000282c1) small_volume_slider_vertical_pane_g1

0x72de,	// (0x000282c1) small_volume_slider_vertical_pane_g2

0x8a2e,	// (0x00029a11) small_volume_slider_vertical_pane_g3

0x0002,

0xfcfd,	// (0x00030ce0) small_volume_slider_vertical_pane_g

0xba82,	// (0x0002ca65) area_side_right_pane_ParamLimits

0xba82,	// (0x0002ca65) area_side_right_pane

0xcd06,	// (0x0002dce9) aid_size_side_button_ParamLimits

0xcd06,	// (0x0002dce9) aid_size_side_button

0xcd1f,	// (0x0002dd02) grid_sctrl_middle_pane_ParamLimits

0xcd1f,	// (0x0002dd02) grid_sctrl_middle_pane

0x2872,	// (0x00023855) sctrl_sk_bottom_pane

0x2883,	// (0x00023866) sctrl_sk_top_pane

0x2895,	// (0x00023878) aid_touch_sctrl_top

0x1518,	// (0x000224fb) bg_sctrl_sk_pane_ParamLimits

0x1518,	// (0x000224fb) bg_sctrl_sk_pane

0x28a2,	// (0x00023885) sctrl_sk_top_pane_g1

0x28af,	// (0x00023892) sctrl_sk_top_pane_t1

0x2895,	// (0x00023878) aid_touch_sctrl_bottom

0x1518,	// (0x000224fb) bg_sctrl_sk_pane_cp_ParamLimits

0x1518,	// (0x000224fb) bg_sctrl_sk_pane_cp

0x28ca,	// (0x000238ad) sctrl_sk_bottom_pane_g1

0x28af,	// (0x00023892) sctrl_sk_bottom_pane_t1

0xcd39,	// (0x0002dd1c) cell_sctrl_middle_pane_ParamLimits

0xcd39,	// (0x0002dd1c) cell_sctrl_middle_pane

0xcd4c,	// (0x0002dd2f) aid_touch_sctrl_middle_ParamLimits

0xcd4c,	// (0x0002dd2f) aid_touch_sctrl_middle

0xcd59,	// (0x0002dd3c) bg_sctrl_middle_pane_ParamLimits

0xcd59,	// (0x0002dd3c) bg_sctrl_middle_pane

0x8ab9,	// (0x00029a9c) cell_sctrl_middle_pane_g1_ParamLimits

0x8ab9,	// (0x00029a9c) cell_sctrl_middle_pane_g1

0xcd67,	// (0x0002dd4a) cell_sctrl_middle_pane_g2_ParamLimits

0xcd67,	// (0x0002dd4a) cell_sctrl_middle_pane_g2

0x0001,

0xfd09,	// (0x00030cec) cell_sctrl_middle_pane_g_ParamLimits

0xfd09,	// (0x00030cec) cell_sctrl_middle_pane_g

0x4c38,	// (0x00025c1b) bg_sctrl_middle_pane_g1

0x4c40,	// (0x00025c23) bg_sctrl_middle_pane_g2

0x4c48,	// (0x00025c2b) bg_sctrl_middle_pane_g3

0x4c50,	// (0x00025c33) bg_sctrl_middle_pane_g4

0x4c58,	// (0x00025c3b) bg_sctrl_middle_pane_g5

0x4c60,	// (0x00025c43) bg_sctrl_middle_pane_g6

0x4c68,	// (0x00025c4b) bg_sctrl_middle_pane_g7

0x4c70,	// (0x00025c53) bg_sctrl_middle_pane_g8

0x0007,

0xfd0e,	// (0x00030cf1) bg_sctrl_middle_pane_g

0x4c78,	// (0x00025c5b) bg_sctrl_middle_pane_g8_copy1

0x4c38,	// (0x00025c1b) bg_sctrl_sk_pane_g1

0x4c40,	// (0x00025c23) bg_sctrl_sk_pane_g2

0x4c48,	// (0x00025c2b) bg_sctrl_sk_pane_g3

0x0008,

0xf86d,	// (0x00030850) bg_sctrl_sk_pane_g

0x1a44,	// (0x00022a27) aid_size_touch_scroll_bar

0x4c50,	// (0x00025c33) bg_sctrl_sk_pane_g4

0x4c58,	// (0x00025c3b) bg_sctrl_sk_pane_g5

0x4c60,	// (0x00025c43) bg_sctrl_sk_pane_g6

0x4c68,	// (0x00025c4b) bg_sctrl_sk_pane_g7

0x4c70,	// (0x00025c53) bg_sctrl_sk_pane_g8

0x4c78,	// (0x00025c5b) bg_sctrl_sk_pane_g9

0x419a,	// (0x0002517d) popup_fep_china_hwr2_fs_candidate_window

0xc4c3,	// (0x0002d4a6) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xc4c3,	// (0x0002d4a6) popup_fep_china_hwr2_fs_control_window

0x7568,	// (0x0002854b) sctrl_sk_top_pane_g2

0x0001,

0xfd04,	// (0x00030ce7) sctrl_sk_top_pane_g

0xe4c9,	// (0x0002f4ac) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4c9,	// (0x0002f4ac) aid_fep_china_hwr2_fs_cell

0xe4df,	// (0x0002f4c2) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe4df,	// (0x0002f4c2) bg_popup_fep_shadow_pane_cp4

0xe4f6,	// (0x0002f4d9) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe4f6,	// (0x0002f4d9) bg_popup_fep_shadow_pane_cp5

0xe508,	// (0x0002f4eb) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe508,	// (0x0002f4eb) popup_fep_china_hwr2_fs_control_bar_grid

0xe51c,	// (0x0002f4ff) popup_fep_china_hwr2_fs_control_funtion_grid

0x8a8d,	// (0x00029a70) aid_fep_china_hwr2_fs_candi_cell

0xe612,	// (0x0002f5f5) bg_popup_fep_shadow_pane_cp6

0x8a97,	// (0x00029a7a) popup_fep_china_hwr2_fs_candidate_grid

0xe524,	// (0x0002f507) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe524,	// (0x0002f507) cell_fep_china_hwr2_fs_funtion_grid

0x72de,	// (0x000282c1) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8ab9,	// (0x00029a9c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8ab9,	// (0x00029a9c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8ac7,	// (0x00029aaa) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8ac7,	// (0x00029aaa) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd1f,	// (0x00030d02) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd1f,	// (0x00030d02) cell_fep_china_hwr2_fs_funtion_grid_g

0xe53c,	// (0x0002f51f) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe53c,	// (0x0002f51f) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe551,	// (0x0002f534) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe551,	// (0x0002f534) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd24,	// (0x00030d07) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd24,	// (0x00030d07) cell_fep_china_hwr2_fs_funtion_grid_t

0x8b0e,	// (0x00029af1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8b16,	// (0x00029af9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8b1e,	// (0x00029b01) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd29,	// (0x00030d0c) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8b26,	// (0x00029b09) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8b26,	// (0x00029b09) cell_fep_china_hwr2_fs_candidate_grid

0x8b45,	// (0x00029b28) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8b4d,	// (0x00029b30) popup_fep_china_hwr2_fs_candidate_grid_g21

0x72de,	// (0x000282c1) cell_fep_china_hwr2_fs_candidate_grid_g1

0x72de,	// (0x000282c1) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb49,	// (0x00030b2c) cell_fep_china_hwr2_fs_candidate_grid_g

0x8b55,	// (0x00029b38) cell_fep_china_hwr2_fs_candidate_grid_t1

0x4809,	// (0x000257ec) clock_nsta_pane_cp_24_ParamLimits

0x4809,	// (0x000257ec) clock_nsta_pane_cp_24

0x4889,	// (0x0002586c) indicator_nsta_pane_cp_24_ParamLimits

0x4889,	// (0x0002586c) indicator_nsta_pane_cp_24

0x5961,	// (0x00026944) heading_pane_g1

0x0001,

0xf8d2,	// (0x000308b5) heading_pane_g

0x6411,	// (0x000273f4) grid_sct_catagory_button_pane

0x6443,	// (0x00027426) scroll_pane_cp5_ParamLimits

0x6f27,	// (0x00027f0a) button_value_adjust_pane_cp5_ParamLimits

0x6f27,	// (0x00027f0a) button_value_adjust_pane_cp5

0x700c,	// (0x00027fef) form2_midp_time_pane_ParamLimits

0x8b63,	// (0x00029b46) cell_sct_catagory_button_pane_ParamLimits

0x8b63,	// (0x00029b46) cell_sct_catagory_button_pane

0x72a3,	// (0x00028286) bg_button_pane_cp01_ParamLimits

0x72a3,	// (0x00028286) bg_button_pane_cp01

0x72de,	// (0x000282c1) cell_sct_catagory_button_pane_g1

0xca88,	// (0x0002da6b) popup_tb_extension_window

0xe56d,	// (0x0002f550) aid_size_cell_ext_ParamLimits

0xe56d,	// (0x0002f550) aid_size_cell_ext

0x1886,	// (0x00022869) bg_tb_trans_pane_cp1_ParamLimits

0x1886,	// (0x00022869) bg_tb_trans_pane_cp1

0xe593,	// (0x0002f576) grid_tb_ext_pane_ParamLimits

0xe593,	// (0x0002f576) grid_tb_ext_pane

0xe5d3,	// (0x0002f5b6) cell_tb_ext_pane_ParamLimits

0xe5d3,	// (0x0002f5b6) cell_tb_ext_pane

0xe630,	// (0x0002f613) cell_tb_ext_pane_g1_ParamLimits

0xe630,	// (0x0002f613) cell_tb_ext_pane_g1

0x8bf9,	// (0x00029bdc) cell_tb_ext_pane_t1

0x1518,	// (0x000224fb) list_highlight_pane_cp11_ParamLimits

0x1518,	// (0x000224fb) list_highlight_pane_cp11

0x105b,	// (0x0002203e) popup_uni_indicator_window_ParamLimits

0x105b,	// (0x0002203e) popup_uni_indicator_window

0x310c,	// (0x000240ef) bg_popup_sub_pane_cp14

0x8c14,	// (0x00029bf7) list_uniindi_pane

0x8c20,	// (0x00029c03) uniindi_top_pane

0x1518,	// (0x000224fb) bg_uniindi_top_pane

0x8c41,	// (0x00029c24) uniindi_top_pane_g1

0x8c57,	// (0x00029c3a) uniindi_top_pane_g2

0x0003,

0xfd30,	// (0x00030d13) uniindi_top_pane_g

0x8c81,	// (0x00029c64) uniindi_top_pane_t1

0x8cad,	// (0x00029c90) list_single_uniindi_pane_ParamLimits

0x8cad,	// (0x00029c90) list_single_uniindi_pane

0x72de,	// (0x000282c1) bg_uniindi_top_pane_g1

0x8cbf,	// (0x00029ca2) list_single_uniindi_pane_g1

0x8cd2,	// (0x00029cb5) list_single_uniindi_pane_t1

0xe612,	// (0x0002f5f5) control_bg_pane

0x8cf7,	// (0x00029cda) bg_sctrl_sk_pane_cp1

0x8d00,	// (0x00029ce3) bg_sctrl_sk_pane_cp2

0x8d09,	// (0x00029cec) control_bg_pane_g1

0x8d12,	// (0x00029cf5) control_bg_pane_g2

0x0001,

0xfd39,	// (0x00030d1c) control_bg_pane_g

0x6d4a,	// (0x00027d2d) cell_indicator_nsta_pane_g1_ParamLimits

0xdbb3,	// (0x0002eb96) cell_indicator_nsta_pane_g2_ParamLimits

0xfaad,	// (0x00030a90) cell_indicator_nsta_pane_g_ParamLimits

0x0961,	// (0x00021944) form2_midp_time_pane_t1_ParamLimits

0x7cee,	// (0x00028cd1) main_idle_act4_pane_ParamLimits

0x7cee,	// (0x00028cd1) main_idle_act4_pane

0xca88,	// (0x0002da6b) popup_tb_extension_window_ParamLimits

0xe5bb,	// (0x0002f59e) tb_ext_find_pane_ParamLimits

0xe5bb,	// (0x0002f59e) tb_ext_find_pane

0x8d1b,	// (0x00029cfe) ai_gene_pane_1_cp1

0x3eb3,	// (0x00024e96) ai_gene_pane_2_cp1

0x8d23,	// (0x00029d06) list_single_idle_plugin_calendar_pane

0x8d2c,	// (0x00029d0f) list_single_idle_plugin_notification_pane

0x8d35,	// (0x00029d18) list_single_idle_plugin_player_pane

0xe64d,	// (0x0002f630) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe64d,	// (0x0002f630) list_single_idle_plugin_shortcut_pane

0xe675,	// (0x0002f658) main_idle_act4_pane_t1

0xe68d,	// (0x0002f670) main_idle_act4_pane_t2

0x0001,

0xfd3e,	// (0x00030d21) main_idle_act4_pane_t

0xe6a5,	// (0x0002f688) middle_sk_idle_act4_pane_ParamLimits

0xe6a5,	// (0x0002f688) middle_sk_idle_act4_pane

0xe6c1,	// (0x0002f6a4) popup_clock_digital_analogue_window_cp2

0xe6e8,	// (0x0002f6cb) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6e8,	// (0x0002f6cb) shortcut_wheel_idle_act4_pane

0x72de,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g1

0x72de,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g2

0x72de,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g3

0x72de,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g4

0x72de,	// (0x000282c1) shortcut_wheel_idle_act4_pane_g5

0x8dc8,	// (0x00029dab) shortcut_wheel_idle_act4_pane_g6

0x8dd0,	// (0x00029db3) shortcut_wheel_idle_act4_pane_g7

0x8dd8,	// (0x00029dbb) shortcut_wheel_idle_act4_pane_g8

0x8de0,	// (0x00029dc3) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd43,	// (0x00030d26) shortcut_wheel_idle_act4_pane_g

0xdd84,	// (0x0002ed67) middle_sk_idle_act4_pane_g1_ParamLimits

0xdd84,	// (0x0002ed67) middle_sk_idle_act4_pane_g1

0xe765,	// (0x0002f748) middle_sk_idle_act4_pane_g2_ParamLimits

0xe765,	// (0x0002f748) middle_sk_idle_act4_pane_g2

0x0001,

0xfd66,	// (0x00030d49) middle_sk_idle_act4_pane_g_ParamLimits

0xfd66,	// (0x00030d49) middle_sk_idle_act4_pane_g

0xe77d,	// (0x0002f760) middle_sk_idle_act4_pane_t1_ParamLimits

0xe77d,	// (0x0002f760) middle_sk_idle_act4_pane_t1

0xe7ac,	// (0x0002f78f) grid_ai_shortcut_pane_ParamLimits

0xe7ac,	// (0x0002f78f) grid_ai_shortcut_pane

0xe7c9,	// (0x0002f7ac) list_highlight_pane_cp16_ParamLimits

0xe7c9,	// (0x0002f7ac) list_highlight_pane_cp16

0xe7d6,	// (0x0002f7b9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7d6,	// (0x0002f7b9) list_single_idle_plugin_shortcut_pane_g1

0xe7e2,	// (0x0002f7c5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7e2,	// (0x0002f7c5) list_single_idle_plugin_shortcut_pane_g2

0xe800,	// (0x0002f7e3) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe800,	// (0x0002f7e3) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd6b,	// (0x00030d4e) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd6b,	// (0x00030d4e) list_single_idle_plugin_shortcut_pane_g

0xe815,	// (0x0002f7f8) cell_ai_shortcut_pane_ParamLimits

0xe815,	// (0x0002f7f8) cell_ai_shortcut_pane

0xe82b,	// (0x0002f80e) cell_ai_shortcut_pane_g1_ParamLimits

0xe82b,	// (0x0002f80e) cell_ai_shortcut_pane_g1

0x8d1b,	// (0x00029cfe) ai_gene_pane_1_cp2

0x8f11,	// (0x00029ef4) ai_gene_pane_2_cp2

0x8f19,	// (0x00029efc) list_highlight_pane_cp15

0x8f22,	// (0x00029f05) list_single_idle_plugin_calendar_pane_g1

0x8f19,	// (0x00029efc) list_highlight_pane_cp17

0x8f2a,	// (0x00029f0d) list_single_idle_plugin_calendar_pane_g1_copy1

0x8f32,	// (0x00029f15) list_single_idle_plugin_player_pane_g1

0x6678,	// (0x0002765b) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd72,	// (0x00030d55) list_single_idle_plugin_player_pane_g

0x8f3a,	// (0x00029f1d) list_single_idle_plugin_player_pane_t1

0x8f48,	// (0x00029f2b) list_single_idle_plugin_player_pane_t2

0x8f56,	// (0x00029f39) list_single_idle_plugin_player_pane_t3

0x8f64,	// (0x00029f47) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd77,	// (0x00030d5a) list_single_idle_plugin_player_pane_t

0x8f72,	// (0x00029f55) wait_bar_pane_cp15

0x8f7a,	// (0x00029f5d) grid_ai_notification_pane

0x6678,	// (0x0002765b) list_single_idle_plugin_notification_pane_g1

0xe84d,	// (0x0002f830) cell_ai_notification_pane_ParamLimits

0xe84d,	// (0x0002f830) cell_ai_notification_pane

0x8f90,	// (0x00029f73) cell_ai_notification_pane_g1

0x8f98,	// (0x00029f7b) cell_ai_notification_pane_t1

0xe85a,	// (0x0002f83d) tb_ext_find_button_pane

0xe862,	// (0x0002f845) tb_ext_find_pane_g1

0xe86a,	// (0x0002f84d) tb_ext_find_pane_t1

0x377c,	// (0x0002475f) tb_ext_find_button_pane_g1

0x8fc4,	// (0x00029fa7) tb_ext_find_button_pane_g2

0x0001,

0xfd80,	// (0x00030d63) tb_ext_find_button_pane_g

0xe675,	// (0x0002f658) main_idle_act4_pane_t1_ParamLimits

0xe68d,	// (0x0002f670) main_idle_act4_pane_t2_ParamLimits

0xfd3e,	// (0x00030d21) main_idle_act4_pane_t_ParamLimits

0xe6c1,	// (0x0002f6a4) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6d8,	// (0x0002f6bb) sat_plugin_idle_act4_pane_ParamLimits

0xe6d8,	// (0x0002f6bb) sat_plugin_idle_act4_pane

0xe878,	// (0x0002f85b) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe878,	// (0x0002f85b) sat_plugin_idle_act4_pane_t1

0xe890,	// (0x0002f873) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe890,	// (0x0002f873) sat_plugin_idle_act4_pane_t2

0xe8a8,	// (0x0002f88b) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe8a8,	// (0x0002f88b) sat_plugin_idle_act4_pane_t3

0xe8c0,	// (0x0002f8a3) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8c0,	// (0x0002f8a3) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd85,	// (0x00030d68) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd85,	// (0x00030d68) sat_plugin_idle_act4_pane_t

0x0f8c,	// (0x00021f6f) popup_battery_window_ParamLimits

0x0f8c,	// (0x00021f6f) popup_battery_window

0x1518,	// (0x000224fb) bg_popup_sub_pane_cp25_ParamLimits

0x1518,	// (0x000224fb) bg_popup_sub_pane_cp25

0x9019,	// (0x00029ffc) popup_battery_window_g1_ParamLimits

0x9019,	// (0x00029ffc) popup_battery_window_g1

0x9025,	// (0x0002a008) popup_battery_window_t1_ParamLimits

0x9025,	// (0x0002a008) popup_battery_window_t1

0x9037,	// (0x0002a01a) popup_battery_window_t2_ParamLimits

0x9037,	// (0x0002a01a) popup_battery_window_t2

0x0001,

0xfd8e,	// (0x00030d71) popup_battery_window_t_ParamLimits

0xfd8e,	// (0x00030d71) popup_battery_window_t

0xc218,	// (0x0002d1fb) midp_canvas_pane_ParamLimits

0xc273,	// (0x0002d256) midp_keypad_pane_ParamLimits

0xc273,	// (0x0002d256) midp_keypad_pane

0x40f0,	// (0x000250d3) main_midp_pane_ParamLimits

0x6dd4,	// (0x00027db7) signal_pane_g2_cp_ParamLimits

0xe8d8,	// (0x0002f8bb) aid_size_cell_midp_keypad_ParamLimits

0xe8d8,	// (0x0002f8bb) aid_size_cell_midp_keypad

0xe8f6,	// (0x0002f8d9) midp_keyp_game_grid_pane_ParamLimits

0xe8f6,	// (0x0002f8d9) midp_keyp_game_grid_pane

0xe91d,	// (0x0002f900) midp_keyp_rocker_pane_ParamLimits

0xe91d,	// (0x0002f900) midp_keyp_rocker_pane

0xe962,	// (0x0002f945) midp_keyp_sk_left_pane_ParamLimits

0xe962,	// (0x0002f945) midp_keyp_sk_left_pane

0xe9b6,	// (0x0002f999) midp_keyp_sk_right_pane_ParamLimits

0xe9b6,	// (0x0002f999) midp_keyp_sk_right_pane

0xe612,	// (0x0002f5f5) bg_button_pane_cp03

0xea0a,	// (0x0002f9ed) midp_keyp_sk_left_pane_g1

0xe612,	// (0x0002f5f5) bg_button_pane_cp04

0xea0a,	// (0x0002f9ed) midp_keyp_sk_right_pane_g1

0x72de,	// (0x000282c1) midp_keyp_rocker_pane_g1

0xea13,	// (0x0002f9f6) keyp_game_cell_pane_ParamLimits

0xea13,	// (0x0002f9f6) keyp_game_cell_pane

0xe612,	// (0x0002f5f5) bg_button_pane_cp02

0xea39,	// (0x0002fa1c) keyp_game_cell_pane_g1

0xbac4,	// (0x0002caa7) popup_fep_vkb2_window_ParamLimits

0xbac4,	// (0x0002caa7) popup_fep_vkb2_window

0xcd73,	// (0x0002dd56) aid_size_cell_vkb2_ParamLimits

0xcd73,	// (0x0002dd56) aid_size_cell_vkb2

0xcda1,	// (0x0002dd84) popup_fep_vkb2_window_g1_ParamLimits

0xcda1,	// (0x0002dd84) popup_fep_vkb2_window_g1

0xcdf1,	// (0x0002ddd4) vkb2_area_bottom_pane_ParamLimits

0xcdf1,	// (0x0002ddd4) vkb2_area_bottom_pane

0xce4d,	// (0x0002de30) vkb2_area_keypad_pane_ParamLimits

0xce4d,	// (0x0002de30) vkb2_area_keypad_pane

0xce9b,	// (0x0002de7e) vkb2_area_top_pane_ParamLimits

0xce9b,	// (0x0002de7e) vkb2_area_top_pane

0xcf21,	// (0x0002df04) vkb2_top_entry_pane_ParamLimits

0xcf21,	// (0x0002df04) vkb2_top_entry_pane

0xcf4e,	// (0x0002df31) vkb2_top_grid_left_pane_ParamLimits

0xcf4e,	// (0x0002df31) vkb2_top_grid_left_pane

0xcf6e,	// (0x0002df51) vkb2_top_grid_right_pane_ParamLimits

0xcf6e,	// (0x0002df51) vkb2_top_grid_right_pane

0x2b32,	// (0x00023b15) vkb2_cell_keypad_pane_ParamLimits

0x2b32,	// (0x00023b15) vkb2_cell_keypad_pane

0xcfb4,	// (0x0002df97) vkb2_area_bottom_grid_pane_ParamLimits

0xcfb4,	// (0x0002df97) vkb2_area_bottom_grid_pane

0xcfde,	// (0x0002dfc1) vkb2_area_bottom_pane_g1_ParamLimits

0xcfde,	// (0x0002dfc1) vkb2_area_bottom_pane_g1

0xd004,	// (0x0002dfe7) vkb2_area_bottom_pane_g2_ParamLimits

0xd004,	// (0x0002dfe7) vkb2_area_bottom_pane_g2

0xd035,	// (0x0002e018) vkb2_area_bottom_pane_g3_ParamLimits

0xd035,	// (0x0002e018) vkb2_area_bottom_pane_g3

0x0002,

0xfd93,	// (0x00030d76) vkb2_area_bottom_pane_g_ParamLimits

0xfd93,	// (0x00030d76) vkb2_area_bottom_pane_g

0x2cc1,	// (0x00023ca4) vkb2_top_cell_left_pane_ParamLimits

0x2cc1,	// (0x00023ca4) vkb2_top_cell_left_pane

0xea42,	// (0x0002fa25) vkb2_top_entry_pane_g1_ParamLimits

0xea42,	// (0x0002fa25) vkb2_top_entry_pane_g1

0xea50,	// (0x0002fa33) vkb2_top_entry_pane_t1_ParamLimits

0xea50,	// (0x0002fa33) vkb2_top_entry_pane_t1

0x91c4,	// (0x0002a1a7) vkb2_top_entry_pane_t2_ParamLimits

0x91c4,	// (0x0002a1a7) vkb2_top_entry_pane_t2

0x91dc,	// (0x0002a1bf) vkb2_top_entry_pane_t3_ParamLimits

0x91dc,	// (0x0002a1bf) vkb2_top_entry_pane_t3

0x0002,

0xfd9a,	// (0x00030d7d) vkb2_top_entry_pane_t_ParamLimits

0xfd9a,	// (0x00030d7d) vkb2_top_entry_pane_t

0xd09f,	// (0x0002e082) vkb2_top_grid_right_pane_g1_ParamLimits

0xd09f,	// (0x0002e082) vkb2_top_grid_right_pane_g1

0x2d24,	// (0x00023d07) vkb2_top_grid_right_pane_g2_ParamLimits

0x2d24,	// (0x00023d07) vkb2_top_grid_right_pane_g2

0x2d3c,	// (0x00023d1f) vkb2_top_grid_right_pane_g3_ParamLimits

0x2d3c,	// (0x00023d1f) vkb2_top_grid_right_pane_g3

0xd0b5,	// (0x0002e098) vkb2_top_grid_right_pane_g4_ParamLimits

0xd0b5,	// (0x0002e098) vkb2_top_grid_right_pane_g4

0x0003,

0xfda1,	// (0x00030d84) vkb2_top_grid_right_pane_g_ParamLimits

0xfda1,	// (0x00030d84) vkb2_top_grid_right_pane_g

0x2d6a,	// (0x00023d4d) vkb2_top_cell_left_pane_g1

0x2d81,	// (0x00023d64) vkb2_cell_keypad_pane_g1_ParamLimits

0x2d81,	// (0x00023d64) vkb2_cell_keypad_pane_g1

0x91f2,	// (0x0002a1d5) vkb2_cell_keypad_pane_t1_ParamLimits

0x91f2,	// (0x0002a1d5) vkb2_cell_keypad_pane_t1

0x2da5,	// (0x00023d88) vkb2_cell_bottom_grid_pane_ParamLimits

0x2da5,	// (0x00023d88) vkb2_cell_bottom_grid_pane

0x2dde,	// (0x00023dc1) vkb2_cell_bottom_grid_pane_g1

0xe709,	// (0x0002f6ec) aid_call2_pane_cp02

0xe711,	// (0x0002f6f4) aid_call_pane_cp02

0xe719,	// (0x0002f6fc) clock_digital_number_pane_cp10

0xe721,	// (0x0002f704) clock_digital_number_pane_cp11

0xe729,	// (0x0002f70c) clock_digital_number_pane_cp12

0xe731,	// (0x0002f714) clock_digital_number_pane_cp13

0xe739,	// (0x0002f71c) clock_digital_separator_pane_cp10

0x377c,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g1

0x377c,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g2

0xe741,	// (0x0002f724) popup_clock_digital_analogue_window_cp2_g3

0x377c,	// (0x0002475f) popup_clock_digital_analogue_window_cp2_g4

0xe741,	// (0x0002f724) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd56,	// (0x00030d39) popup_clock_digital_analogue_window_cp2_g

0xe749,	// (0x0002f72c) popup_clock_digital_analogue_window_cp2_t1

0xe757,	// (0x0002f73a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd61,	// (0x00030d44) popup_clock_digital_analogue_window_cp2_t

0x72de,	// (0x000282c1) clock_digital_number_pane_cp10_g1

0x72de,	// (0x000282c1) clock_digital_number_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030b2c) clock_digital_number_pane_cp10_g

0x72de,	// (0x000282c1) clock_digital_separator_pane_cp10_g1

0x72de,	// (0x000282c1) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb49,	// (0x00030b2c) clock_digital_separator_pane_cp10_g

0x8c63,	// (0x00029c46) uniindi_top_pane_g3

0x8c74,	// (0x00029c57) uniindi_top_pane_g4

0x2ba2,	// (0x00023b85) vkb2_row_keypad_pane_ParamLimits

0x2ba2,	// (0x00023b85) vkb2_row_keypad_pane

0x2dfa,	// (0x00023ddd) vkb2_cell_t_keypad_pane_ParamLimits

0x2dfa,	// (0x00023ddd) vkb2_cell_t_keypad_pane

0x2e0a,	// (0x00023ded) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x2e0a,	// (0x00023ded) vkb2_cell_t_keypad_pane_cp08

0x2e1f,	// (0x00023e02) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x2e1f,	// (0x00023e02) vkb2_cell_t_keypad_pane_cp09

0x2e33,	// (0x00023e16) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2e33,	// (0x00023e16) vkb2_cell_t_keypad_pane_cp01

0x2e44,	// (0x00023e27) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2e44,	// (0x00023e27) vkb2_cell_t_keypad_pane_cp02

0x2e55,	// (0x00023e38) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2e55,	// (0x00023e38) vkb2_cell_t_keypad_pane_cp03

0x2e66,	// (0x00023e49) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2e66,	// (0x00023e49) vkb2_cell_t_keypad_pane_cp04

0x2e77,	// (0x00023e5a) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2e77,	// (0x00023e5a) vkb2_cell_t_keypad_pane_cp05

0x2e88,	// (0x00023e6b) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2e88,	// (0x00023e6b) vkb2_cell_t_keypad_pane_cp06

0x2e9b,	// (0x00023e7e) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2e9b,	// (0x00023e7e) vkb2_cell_t_keypad_pane_cp07

0x2eb0,	// (0x00023e93) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2eb0,	// (0x00023e93) vkb2_cell_t_keypad_pane_cp10

0x7568,	// (0x0002854b) vkb2_cell_t_keypad_pane_g1

0x9209,	// (0x0002a1ec) vkb2_cell_t_keypad_pane_t1

0xe612,	// (0x0002f5f5) popup_grid_graphic2_window

0xea89,	// (0x0002fa6c) aid_size_cell_graphic2_ParamLimits

0xea89,	// (0x0002fa6c) aid_size_cell_graphic2

0x52de,	// (0x000262c1) bg_popup_window_pane_cp21_ParamLimits

0x52de,	// (0x000262c1) bg_popup_window_pane_cp21

0xeabb,	// (0x0002fa9e) graphic2_pages_pane_ParamLimits

0xeabb,	// (0x0002fa9e) graphic2_pages_pane

0xeb13,	// (0x0002faf6) grid_graphic2_control_pane_ParamLimits

0xeb13,	// (0x0002faf6) grid_graphic2_control_pane

0xeb47,	// (0x0002fb2a) grid_graphic2_pane_ParamLimits

0xeb47,	// (0x0002fb2a) grid_graphic2_pane

0xebbe,	// (0x0002fba1) cell_graphic2_pane

0xe612,	// (0x0002f5f5) main_comp_mode_pane

0x84d4,	// (0x000294b7) list_ai3_gene_pane_ParamLimits

0xe411,	// (0x0002f3f4) bg_popup_window_pane_cp19_ParamLimits

0x88a8,	// (0x0002988b) bg_touch_area_indi_pane_ParamLimits

0x88a8,	// (0x0002988b) bg_touch_area_indi_pane

0x88be,	// (0x000298a1) bg_touch_area_indi_pane_cp01_ParamLimits

0x88be,	// (0x000298a1) bg_touch_area_indi_pane_cp01

0x88d6,	// (0x000298b9) bg_touch_area_indi_pane_cp02_ParamLimits

0x88d6,	// (0x000298b9) bg_touch_area_indi_pane_cp02

0x88f0,	// (0x000298d3) bg_touch_area_indi_pane_cp03_ParamLimits

0x88f0,	// (0x000298d3) bg_touch_area_indi_pane_cp03

0x890a,	// (0x000298ed) popup_slider_window_g1_ParamLimits

0x8926,	// (0x00029909) popup_slider_window_g2_ParamLimits

0x8942,	// (0x00029925) popup_slider_window_g3_ParamLimits

0xfceb,	// (0x00030cce) popup_slider_window_g_ParamLimits

0x899e,	// (0x00029981) popup_slider_window_t1_ParamLimits

0x8a12,	// (0x000299f5) small_volume_slider_vertical_pane_ParamLimits

0xebbe,	// (0x0002fba1) cell_graphic2_pane_ParamLimits

0xec21,	// (0x0002fc04) bg_button_pane_cp10_ParamLimits

0xec21,	// (0x0002fc04) bg_button_pane_cp10

0xec34,	// (0x0002fc17) bg_button_pane_cp11_ParamLimits

0xec34,	// (0x0002fc17) bg_button_pane_cp11

0xec47,	// (0x0002fc2a) graphic2_pages_pane_g1_ParamLimits

0xec47,	// (0x0002fc2a) graphic2_pages_pane_g1

0xec62,	// (0x0002fc45) graphic2_pages_pane_g2_ParamLimits

0xec62,	// (0x0002fc45) graphic2_pages_pane_g2

0x0001,

0xfdaf,	// (0x00030d92) graphic2_pages_pane_g_ParamLimits

0xfdaf,	// (0x00030d92) graphic2_pages_pane_g

0xec7a,	// (0x0002fc5d) graphic2_pages_pane_t1_ParamLimits

0xec7a,	// (0x0002fc5d) graphic2_pages_pane_t1

0xec92,	// (0x0002fc75) cell_graphic2_control_pane_ParamLimits

0xec92,	// (0x0002fc75) cell_graphic2_control_pane

0xecac,	// (0x0002fc8f) cell_graphic2_pane_g1_ParamLimits

0xecac,	// (0x0002fc8f) cell_graphic2_pane_g1

0xdd92,	// (0x0002ed75) cell_graphic2_pane_g2_ParamLimits

0xdd92,	// (0x0002ed75) cell_graphic2_pane_g2

0xe5fd,	// (0x0002f5e0) cell_graphic2_pane_g3_ParamLimits

0xe5fd,	// (0x0002f5e0) cell_graphic2_pane_g3

0xdd9f,	// (0x0002ed82) cell_graphic2_pane_g4_ParamLimits

0xdd9f,	// (0x0002ed82) cell_graphic2_pane_g4

0xecb9,	// (0x0002fc9c) cell_graphic2_pane_g5_ParamLimits

0xecb9,	// (0x0002fc9c) cell_graphic2_pane_g5

0x0004,

0xfdb4,	// (0x00030d97) cell_graphic2_pane_g_ParamLimits

0xfdb4,	// (0x00030d97) cell_graphic2_pane_g

0xecd9,	// (0x0002fcbc) cell_graphic2_pane_t1_ParamLimits

0xecd9,	// (0x0002fcbc) cell_graphic2_pane_t1

0x5955,	// (0x00026938) grid_highlight_pane_cp11_ParamLimits

0x5955,	// (0x00026938) grid_highlight_pane_cp11

0x310c,	// (0x000240ef) bg_button_pane_cp05

0xed0e,	// (0x0002fcf1) cell_graphic2_control_pane_g1

0x72de,	// (0x000282c1) bg_touch_area_indi_pane_g1

0x9484,	// (0x0002a467) aid_cmod_rocker_key_size

0x948e,	// (0x0002a471) aid_cmode_itu_key_size

0x9498,	// (0x0002a47b) main_cmode_video_pane

0x94a2,	// (0x0002a485) main_comp_mode_itu_pane

0x94ae,	// (0x0002a491) main_comp_mode_rocker_pane

0x94ba,	// (0x0002a49d) cell_cmode_rocker_pane_ParamLimits

0x94ba,	// (0x0002a49d) cell_cmode_rocker_pane

0x94ce,	// (0x0002a4b1) cell_cmode_itu_pane_ParamLimits

0x94ce,	// (0x0002a4b1) cell_cmode_itu_pane

0x310c,	// (0x000240ef) bg_button_pane_cp06_ParamLimits

0x310c,	// (0x000240ef) bg_button_pane_cp06

0x7568,	// (0x0002854b) cell_cmode_rocker_pane_g1_ParamLimits

0x7568,	// (0x0002854b) cell_cmode_rocker_pane_g1

0x8ab9,	// (0x00029a9c) cell_cmode_rocker_pane_g2_ParamLimits

0x8ab9,	// (0x00029a9c) cell_cmode_rocker_pane_g2

0x0001,

0xfdc4,	// (0x00030da7) cell_cmode_rocker_pane_g_ParamLimits

0xfdc4,	// (0x00030da7) cell_cmode_rocker_pane_g

0xe612,	// (0x0002f5f5) bg_button_pane_cp07

0x94e5,	// (0x0002a4c8) cell_cmode_itu_pane_g1

0x94ee,	// (0x0002a4d1) cell_cmode_itu_pane_t1

0x94fc,	// (0x0002a4df) cell_cmode_itu_pane_t2

0x0001,

0xfdc9,	// (0x00030dac) cell_cmode_itu_pane_t

0x8ce7,	// (0x00029cca) aid_touch_ctrl_left

0x8cef,	// (0x00029cd2) aid_touch_ctrl_right

0xe612,	// (0x0002f5f5) compa_mode_pane

0xed1b,	// (0x0002fcfe) aid_cmod_rocker_key_size_cp

0xed25,	// (0x0002fd08) aid_cmode_itu_key_size_cp

0x951e,	// (0x0002a501) compa_mode_pane_g1

0x9526,	// (0x0002a509) compa_mode_pane_g2

0x952e,	// (0x0002a511) compa_mode_pane_g3

0x0002,

0xfdce,	// (0x00030db1) compa_mode_pane_g

0xed2f,	// (0x0002fd12) main_comp_mode_itu_pane_cp

0xed37,	// (0x0002fd1a) main_comp_mode_rocker_pane_cp

0xed3f,	// (0x0002fd22) cell_cmode_itu_pane_cp_ParamLimits

0xed3f,	// (0x0002fd22) cell_cmode_itu_pane_cp

0xed54,	// (0x0002fd37) cell_cmode_rocker_pane_cp_ParamLimits

0xed54,	// (0x0002fd37) cell_cmode_rocker_pane_cp

0x310c,	// (0x000240ef) bg_button_pane_cp06_cp_ParamLimits

0x310c,	// (0x000240ef) bg_button_pane_cp06_cp

0x7568,	// (0x0002854b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7568,	// (0x0002854b) cell_cmode_rocker_pane_g1_cp

0x72de,	// (0x000282c1) cell_cmode_rocker_pane_g2_cp

0xe612,	// (0x0002f5f5) bg_button_pane_cp07_cp

0xed66,	// (0x0002fd49) cell_cmode_itu_pane_g1_cp

0xed6f,	// (0x0002fd52) cell_cmode_itu_pane_t1_cp

0xed6f,	// (0x0002fd52) cell_cmode_itu_pane_t2_cp

0xd9fa,	// (0x0002e9dd) settings_code_pane_cp2

0x11fe,	// (0x000221e1) bg_popup_window_pane_cp3_ParamLimits

0x1706,	// (0x000226e9) heading_pane_cp3_ParamLimits

0x1712,	// (0x000226f5) listscroll_popup_graphic_pane_ParamLimits

0x24b0,	// (0x00023493) fep_hwr_aid_pane_ParamLimits

0x2895,	// (0x00023878) aid_touch_sctrl_top_ParamLimits

0x28a2,	// (0x00023885) sctrl_sk_top_pane_g1_ParamLimits

0x7568,	// (0x0002854b) sctrl_sk_top_pane_g2_ParamLimits

0xfd04,	// (0x00030ce7) sctrl_sk_top_pane_g_ParamLimits

0x28af,	// (0x00023892) sctrl_sk_top_pane_t1_ParamLimits

0x2895,	// (0x00023878) aid_touch_sctrl_bottom_ParamLimits

0x28af,	// (0x00023892) sctrl_sk_bottom_pane_t1_ParamLimits

0x8c2d,	// (0x00029c10) aid_area_touch_clock

0xcee3,	// (0x0002dec6) aid_vkb2_area_top_pane_cell_ParamLimits

0xcee3,	// (0x0002dec6) aid_vkb2_area_top_pane_cell

0xcf8e,	// (0x0002df71) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xcf8e,	// (0x0002df71) aid_vkb2_area_bottom_pane_cell

0x9196,	// (0x0002a179) popup_char_count_window

0x9584,	// (0x0002a567) popup_char_count_window_g1

0x958d,	// (0x0002a570) popup_char_count_window_g2

0x9596,	// (0x0002a579) popup_char_count_window_g3

0x0002,

0xfdd5,	// (0x00030db8) popup_char_count_window_g

0x959f,	// (0x0002a582) popup_char_count_window_t1

0x294e,	// (0x00023931) popup_fep_char_preview_window_ParamLimits

0x294e,	// (0x00023931) popup_fep_char_preview_window

0xcf03,	// (0x0002dee6) vkb2_top_candi_pane_ParamLimits

0xcf03,	// (0x0002dee6) vkb2_top_candi_pane

0xed7d,	// (0x0002fd60) cell_vkb2_top_candi_pane_ParamLimits

0xed7d,	// (0x0002fd60) cell_vkb2_top_candi_pane

0x52de,	// (0x000262c1) bg_popup_fep_char_preview_window_ParamLimits

0x52de,	// (0x000262c1) bg_popup_fep_char_preview_window

0x2ec5,	// (0x00023ea8) popup_fep_char_preview_window_t1_ParamLimits

0x2ec5,	// (0x00023ea8) popup_fep_char_preview_window_t1

0x95fe,	// (0x0002a5e1) bg_popup_fep_char_preview_window_g1

0x9606,	// (0x0002a5e9) bg_popup_fep_char_preview_window_g2

0x960e,	// (0x0002a5f1) bg_popup_fep_char_preview_window_g3

0x9616,	// (0x0002a5f9) bg_popup_fep_char_preview_window_g4

0x961e,	// (0x0002a601) bg_popup_fep_char_preview_window_g5

0x2eff,	// (0x00023ee2) bg_popup_fep_char_preview_window_g6

0x9626,	// (0x0002a609) bg_popup_fep_char_preview_window_g7

0x962e,	// (0x0002a611) bg_popup_fep_char_preview_window_g8

0x9636,	// (0x0002a619) bg_popup_fep_char_preview_window_g9

0x0008,

0xfddc,	// (0x00030dbf) bg_popup_fep_char_preview_window_g

0x7568,	// (0x0002854b) cell_vkb2_top_candi_pane_g1_ParamLimits

0x7568,	// (0x0002854b) cell_vkb2_top_candi_pane_g1

0x78a9,	// (0x0002888c) cell_vkb2_top_candi_pane_g2_ParamLimits

0x78a9,	// (0x0002888c) cell_vkb2_top_candi_pane_g2

0x78ca,	// (0x000288ad) cell_vkb2_top_candi_pane_g3_ParamLimits

0x78ca,	// (0x000288ad) cell_vkb2_top_candi_pane_g3

0x2f07,	// (0x00023eea) cell_vkb2_top_candi_pane_g4_ParamLimits

0x2f07,	// (0x00023eea) cell_vkb2_top_candi_pane_g4

0x963e,	// (0x0002a621) cell_vkb2_top_candi_pane_g5_ParamLimits

0x963e,	// (0x0002a621) cell_vkb2_top_candi_pane_g5

0x8ab9,	// (0x00029a9c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x8ab9,	// (0x00029a9c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdef,	// (0x00030dd2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdef,	// (0x00030dd2) cell_vkb2_top_candi_pane_g

0x2f28,	// (0x00023f0b) cell_vkb2_top_candi_pane_t1

0x2360,	// (0x00023343) aid_size_touch_slider_mark_ParamLimits

0x2360,	// (0x00023343) aid_size_touch_slider_mark

0xeaf7,	// (0x0002fada) grid_graphic2_catg_pane_ParamLimits

0xeaf7,	// (0x0002fada) grid_graphic2_catg_pane

0xeb8d,	// (0x0002fb70) popup_grid_graphic2_window_t1_ParamLimits

0xeb8d,	// (0x0002fb70) popup_grid_graphic2_window_t1

0xeba3,	// (0x0002fb86) popup_grid_graphic2_window_t2_ParamLimits

0xeba3,	// (0x0002fb86) popup_grid_graphic2_window_t2

0x0001,

0xfdaa,	// (0x00030d8d) popup_grid_graphic2_window_t_ParamLimits

0xfdaa,	// (0x00030d8d) popup_grid_graphic2_window_t

0x310c,	// (0x000240ef) bg_button_pane_cp05_ParamLimits

0xed0e,	// (0x0002fcf1) cell_graphic2_control_pane_g1_ParamLimits

0xedd1,	// (0x0002fdb4) cell_graphic2_catg_pane_ParamLimits

0xedd1,	// (0x0002fdb4) cell_graphic2_catg_pane

0xe612,	// (0x0002f5f5) bg_button_pane_cp12

0xede3,	// (0x0002fdc6) cell_graphic2_catg_pane_g1

0x8bf9,	// (0x00029bdc) cell_tb_ext_pane_t1_ParamLimits

0x2ce1,	// (0x00023cc4) vkb2_top_cell_right_narrow_pane_ParamLimits

0x2ce1,	// (0x00023cc4) vkb2_top_cell_right_narrow_pane

0x2cf9,	// (0x00023cdc) vkb2_top_cell_right_wide_pane_ParamLimits

0x2cf9,	// (0x00023cdc) vkb2_top_cell_right_wide_pane

0x7cee,	// (0x00028cd1) bg_vkb2_func_pane_ParamLimits

0x7cee,	// (0x00028cd1) bg_vkb2_func_pane

0x2d6a,	// (0x00023d4d) vkb2_top_cell_left_pane_g1_ParamLimits

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp03_ParamLimits

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp03

0x2dde,	// (0x00023dc1) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c40,	// (0x00025c23) bg_vkb2_func_pane_g1

0x4c48,	// (0x00025c2b) bg_vkb2_func_pane_g2

0x4c58,	// (0x00025c3b) bg_vkb2_func_pane_g3

0x4c50,	// (0x00025c33) bg_vkb2_func_pane_g4

0x4c60,	// (0x00025c43) bg_vkb2_func_pane_g5

0x4c68,	// (0x00025c4b) bg_vkb2_func_pane_g6

0x4c70,	// (0x00025c53) bg_vkb2_func_pane_g7

0x4c78,	// (0x00025c5b) bg_vkb2_func_pane_g8

0x4c38,	// (0x00025c1b) bg_vkb2_func_pane_g9

0x0008,

0xfdfc,	// (0x00030ddf) bg_vkb2_func_pane_g

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp01_ParamLimits

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp01

0x2d6a,	// (0x00023d4d) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2d6a,	// (0x00023d4d) vkb2_top_cell_right_wide_pane_g1

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp02_ParamLimits

0x7cee,	// (0x00028cd1) bg_vkb2_fuc_pane_cp02

0x2dde,	// (0x00023dc1) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x2dde,	// (0x00023dc1) vkb2_top_cell_right_narrow_pane_g1

0xe34b,	// (0x0002f32e) aid_touch_area_decrease_ParamLimits

0xe34b,	// (0x0002f32e) aid_touch_area_decrease

0xe385,	// (0x0002f368) aid_touch_area_increase_ParamLimits

0xe385,	// (0x0002f368) aid_touch_area_increase

0xe3ad,	// (0x0002f390) aid_touch_area_mute_ParamLimits

0xe3ad,	// (0x0002f390) aid_touch_area_mute

0xe3dd,	// (0x0002f3c0) aid_touch_area_slider_ParamLimits

0xe3dd,	// (0x0002f3c0) aid_touch_area_slider

0xe41d,	// (0x0002f400) popup_slider_window_g4_ParamLimits

0xe41d,	// (0x0002f400) popup_slider_window_g4

0xe445,	// (0x0002f428) popup_slider_window_g5_ParamLimits

0xe445,	// (0x0002f428) popup_slider_window_g5

0xe479,	// (0x0002f45c) popup_slider_window_g6_ParamLimits

0xe479,	// (0x0002f45c) popup_slider_window_g6

0x89cc,	// (0x000299af) popup_slider_window_t2_ParamLimits

0x89cc,	// (0x000299af) popup_slider_window_t2

0x0001,

0xfcf8,	// (0x00030cdb) popup_slider_window_t_ParamLimits

0xfcf8,	// (0x00030cdb) popup_slider_window_t

0xe495,	// (0x0002f478) slider_pane_ParamLimits

0xe495,	// (0x0002f478) slider_pane

0x967a,	// (0x0002a65d) slider_pane_g1_ParamLimits

0x967a,	// (0x0002a65d) slider_pane_g1

0x968e,	// (0x0002a671) slider_pane_g2_ParamLimits

0x968e,	// (0x0002a671) slider_pane_g2

0x96a4,	// (0x0002a687) slider_pane_g3_ParamLimits

0x96a4,	// (0x0002a687) slider_pane_g3

0x0003,

0xfe0f,	// (0x00030df2) slider_pane_g_ParamLimits

0xfe0f,	// (0x00030df2) slider_pane_g

0xd12f,	// (0x0002e112) popup_tb_float_extension_window_ParamLimits

0xd12f,	// (0x0002e112) popup_tb_float_extension_window

0x96d0,	// (0x0002a6b3) aid_size_cell_tb_float_ext

0xe612,	// (0x0002f5f5) bg_popup_sub_window_cp28

0x96dc,	// (0x0002a6bf) grid_tb_float_ext_pane

0x96e8,	// (0x0002a6cb) cell_tb_float_ext_pane_ParamLimits

0x96e8,	// (0x0002a6cb) cell_tb_float_ext_pane

0x9704,	// (0x0002a6e7) cell_tb_float_ext_pane_g1

0x970d,	// (0x0002a6f0) grid_highlight_pane_cp12

0xcce4,	// (0x0002dcc7) cell_last_hwr_side_pane_ParamLimits

0xcce4,	// (0x0002dcc7) cell_last_hwr_side_pane

0x72de,	// (0x000282c1) cell_last_hwr_side_pane_g1

0x9716,	// (0x0002a6f9) cell_last_hwr_side_pane_g2

0x0001,

0xfe18,	// (0x00030dfb) cell_last_hwr_side_pane_g

0xd06a,	// (0x0002e04d) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd06a,	// (0x0002e04d) vkb2_area_bottom_space_btn_pane

0x7568,	// (0x0002854b) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9209,	// (0x0002a1ec) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x2f28,	// (0x00023f0b) cell_vkb2_top_candi_pane_t1_ParamLimits

0x2f46,	// (0x00023f29) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x2f46,	// (0x00023f29) vkb2_area_bottom_space_btn_pane_g1

0x2f80,	// (0x00023f63) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2f80,	// (0x00023f63) vkb2_area_bottom_space_btn_pane_g2

0x2fb6,	// (0x00023f99) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x2fb6,	// (0x00023f99) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe1d,	// (0x00030e00) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe1d,	// (0x00030e00) vkb2_area_bottom_space_btn_pane_g

0x2559,	// (0x0002353c) cel_fep_hwr_func_pane_ParamLimits

0x2559,	// (0x0002353c) cel_fep_hwr_func_pane

0xccb9,	// (0x0002dc9c) cell_hwr_side_button_pane_ParamLimits

0xccb9,	// (0x0002dc9c) cell_hwr_side_button_pane

0x8c2d,	// (0x00029c10) aid_area_touch_clock_ParamLimits

0x1518,	// (0x000224fb) bg_uniindi_top_pane_ParamLimits

0x8c41,	// (0x00029c24) uniindi_top_pane_g1_ParamLimits

0x8c57,	// (0x00029c3a) uniindi_top_pane_g2_ParamLimits

0x8c63,	// (0x00029c46) uniindi_top_pane_g3_ParamLimits

0x8c74,	// (0x00029c57) uniindi_top_pane_g4_ParamLimits

0xfd30,	// (0x00030d13) uniindi_top_pane_g_ParamLimits

0x8c81,	// (0x00029c64) uniindi_top_pane_t1_ParamLimits

0x1518,	// (0x000224fb) bg_vkb2_func_pane_cp01_ParamLimits

0x1518,	// (0x000224fb) bg_vkb2_func_pane_cp01

0x971f,	// (0x0002a702) cel_fep_hwr_func_pane_g1_ParamLimits

0x971f,	// (0x0002a702) cel_fep_hwr_func_pane_g1

0x1518,	// (0x000224fb) bg_vkb2_func_pane_cp02_ParamLimits

0x1518,	// (0x000224fb) bg_vkb2_func_pane_cp02

0x971f,	// (0x0002a702) cell_hwr_side_button_pane_g1_ParamLimits

0x971f,	// (0x0002a702) cell_hwr_side_button_pane_g1

0x4aad,	// (0x00025a90) status_pane_g4_ParamLimits

0x4aad,	// (0x00025a90) status_pane_g4

0x4ac7,	// (0x00025aaa) status_pane_t1

0x707a,	// (0x0002805d) form2_midp_gauge_slider_cont_pane

0x7082,	// (0x00028065) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdcb5,	// (0x0002ec98) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdcc7,	// (0x0002ecaa) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfafc,	// (0x00030adf) form2_midp_gauge_slider_pane_t_ParamLimits

0x70b8,	// (0x0002809b) form2_midp_slider_pane_ParamLimits

0x2916,	// (0x000238f9) aid_size_cell_func_vkb2_ParamLimits

0x2916,	// (0x000238f9) aid_size_cell_func_vkb2

0x96bc,	// (0x0002a69f) slider_pane_g4_ParamLimits

0x96bc,	// (0x0002a69f) slider_pane_g4

0xd0cb,	// (0x0002e0ae) form2_midp_gauge_slider_pane_t2_cp01

0xd0d9,	// (0x0002e0bc) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd0d9,	// (0x0002e0bc) form2_midp_gauge_slider_pane_t3_cp01

0x302b,	// (0x0002400e) form2_midp_slider_pane_cp01

0xe612,	// (0x0002f5f5) navi_smil_pane

0x9758,	// (0x0002a73b) navi_smil_pane_g1

0x9760,	// (0x0002a743) navi_smil_pane_t1

0x972d,	// (0x0002a710) form2_midp_slider_pane_g1

0x9736,	// (0x0002a719) form2_midp_slider_pane_g2

0x973e,	// (0x0002a721) form2_midp_slider_pane_g3

0x972d,	// (0x0002a710) form2_midp_slider_pane_g4

0xedec,	// (0x0002fdcf) form2_midp_slider_pane_g5

0x0004,

0xfe26,	// (0x00030e09) form2_midp_slider_pane_g

0x2ff0,	// (0x00023fd3) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x2ff0,	// (0x00023fd3) vkb2_area_bottom_space_btn_pane_g4

0xd30f,	// (0x0002e2f2) lc0_navi_pane_ParamLimits

0xd30f,	// (0x0002e2f2) lc0_navi_pane

0xd37f,	// (0x0002e362) lc0_stat_indi_pane_ParamLimits

0xd37f,	// (0x0002e362) lc0_stat_indi_pane

0xd394,	// (0x0002e377) ls0_title_pane_ParamLimits

0xd394,	// (0x0002e377) ls0_title_pane

0x310c,	// (0x000240ef) bg_popup_sub_pane_cp14_ParamLimits

0x8c14,	// (0x00029bf7) list_uniindi_pane_ParamLimits

0x8c20,	// (0x00029c03) uniindi_top_pane_ParamLimits

0x8cbf,	// (0x00029ca2) list_single_uniindi_pane_g1_ParamLimits

0x8cd2,	// (0x00029cb5) list_single_uniindi_pane_t1_ParamLimits

0xd0f6,	// (0x0002e0d9) lc0_stat_clock_pane_ParamLimits

0xd0f6,	// (0x0002e0d9) lc0_stat_clock_pane

0xedf5,	// (0x0002fdd8) lc0_stat_indi_pane_g1_ParamLimits

0xedf5,	// (0x0002fdd8) lc0_stat_indi_pane_g1

0xee02,	// (0x0002fde5) lc0_stat_indi_pane_g2_ParamLimits

0xee02,	// (0x0002fde5) lc0_stat_indi_pane_g2

0x0001,

0xfe31,	// (0x00030e14) lc0_stat_indi_pane_g_ParamLimits

0xfe31,	// (0x00030e14) lc0_stat_indi_pane_g

0xd103,	// (0x0002e0e6) lc0_uni_indicator_pane_ParamLimits

0xd103,	// (0x0002e0e6) lc0_uni_indicator_pane

0xee0f,	// (0x0002fdf2) ls0_title_pane_g1_ParamLimits

0xee0f,	// (0x0002fdf2) ls0_title_pane_g1

0xee23,	// (0x0002fe06) ls0_title_pane_t1_ParamLimits

0xee23,	// (0x0002fe06) ls0_title_pane_t1

0xd110,	// (0x0002e0f3) lc0_uni_indicator_pane_g1_ParamLimits

0xd110,	// (0x0002e0f3) lc0_uni_indicator_pane_g1

0x97d2,	// (0x0002a7b5) lc0_stat_clock_pane_t1

0xe612,	// (0x0002f5f5) main_ai5_pane

0x97e0,	// (0x0002a7c3) ai5_sk_pane_ParamLimits

0x97e0,	// (0x0002a7c3) ai5_sk_pane

0xee51,	// (0x0002fe34) cell_ai5_widget_pane_ParamLimits

0xee51,	// (0x0002fe34) cell_ai5_widget_pane

0x9863,	// (0x0002a846) aid_size_cell_widget_grid

0x9877,	// (0x0002a85a) bg_ai5_widget_pane_ParamLimits

0x9877,	// (0x0002a85a) bg_ai5_widget_pane

0xeede,	// (0x0002fec1) cell_ai5_widget_pane_g2

0xeeee,	// (0x0002fed1) cell_ai5_widget_pane_g3

0xef0d,	// (0x0002fef0) cell_ai5_widget_pane_g4

0xef19,	// (0x0002fefc) cell_ai5_widget_pane_g5

0xef25,	// (0x0002ff08) cell_ai5_widget_pane_g6

0xef31,	// (0x0002ff14) cell_ai5_widget_pane_g7

0xef79,	// (0x0002ff5c) cell_ai5_widget_pane_t1_ParamLimits

0xef79,	// (0x0002ff5c) cell_ai5_widget_pane_t1

0xef96,	// (0x0002ff79) cell_ai5_widget_pane_t2_ParamLimits

0xef96,	// (0x0002ff79) cell_ai5_widget_pane_t2

0xefae,	// (0x0002ff91) cell_ai5_widget_pane_t3_ParamLimits

0xefae,	// (0x0002ff91) cell_ai5_widget_pane_t3

0xefc6,	// (0x0002ffa9) cell_ai5_widget_pane_t4_ParamLimits

0xefc6,	// (0x0002ffa9) cell_ai5_widget_pane_t4

0xefe0,	// (0x0002ffc3) cell_ai5_widget_pane_t5_ParamLimits

0xefe0,	// (0x0002ffc3) cell_ai5_widget_pane_t5

0x99c2,	// (0x0002a9a5) cell_ai5_widget_pane_t6_ParamLimits

0x99c2,	// (0x0002a9a5) cell_ai5_widget_pane_t6

0x99d4,	// (0x0002a9b7) cell_ai5_widget_pane_t7_ParamLimits

0x99d4,	// (0x0002a9b7) cell_ai5_widget_pane_t7

0xefff,	// (0x0002ffe2) cell_ai5_widget_pane_t8_ParamLimits

0xefff,	// (0x0002ffe2) cell_ai5_widget_pane_t8

0x0009,

0xfe4b,	// (0x00030e2e) cell_ai5_widget_pane_t_ParamLimits

0xfe4b,	// (0x00030e2e) cell_ai5_widget_pane_t

0xf04b,	// (0x0003002e) grid_ai5_widget_pane

0x310c,	// (0x000240ef) highlight_cell_ai5_widget_pane_ParamLimits

0x310c,	// (0x000240ef) highlight_cell_ai5_widget_pane

0xf062,	// (0x00030045) ai5_sk_left_pane

0xf06c,	// (0x0003004f) ai5_sk_middle_pane

0xf076,	// (0x00030059) ai5_sk_right_pane

0x9a6e,	// (0x0002aa51) bg_ai5_widget_pane_g1_ParamLimits

0x9a6e,	// (0x0002aa51) bg_ai5_widget_pane_g1

0x9a7a,	// (0x0002aa5d) bg_ai5_widget_pane_g2_ParamLimits

0x9a7a,	// (0x0002aa5d) bg_ai5_widget_pane_g2

0x9a86,	// (0x0002aa69) bg_ai5_widget_pane_g3_ParamLimits

0x9a86,	// (0x0002aa69) bg_ai5_widget_pane_g3

0x9a92,	// (0x0002aa75) bg_ai5_widget_pane_g4_ParamLimits

0x9a92,	// (0x0002aa75) bg_ai5_widget_pane_g4

0x9a9e,	// (0x0002aa81) bg_ai5_widget_pane_g5_ParamLimits

0x9a9e,	// (0x0002aa81) bg_ai5_widget_pane_g5

0x9aaa,	// (0x0002aa8d) bg_ai5_widget_pane_g6_ParamLimits

0x9aaa,	// (0x0002aa8d) bg_ai5_widget_pane_g6

0x9ab6,	// (0x0002aa99) bg_ai5_widget_pane_g7_ParamLimits

0x9ab6,	// (0x0002aa99) bg_ai5_widget_pane_g7

0x9ac2,	// (0x0002aaa5) bg_ai5_widget_pane_g8_ParamLimits

0x9ac2,	// (0x0002aaa5) bg_ai5_widget_pane_g8

0x9ace,	// (0x0002aab1) bg_ai5_widget_pane_g9_ParamLimits

0x9ace,	// (0x0002aab1) bg_ai5_widget_pane_g9

0x0008,

0xfe60,	// (0x00030e43) bg_ai5_widget_pane_g_ParamLimits

0xfe60,	// (0x00030e43) bg_ai5_widget_pane_g

0x9af5,	// (0x0002aad8) cell_shortcut_ai5_widget_pane_ParamLimits

0x9af5,	// (0x0002aad8) cell_shortcut_ai5_widget_pane

0x135a,	// (0x0002233d) bg_cell_shortcut_ai5_widget_pane

0x9b07,	// (0x0002aaea) cell_grid_ai5_widget_pane_g1

0x9b10,	// (0x0002aaf3) highlight_cell_shortcut_ai5_widget_pane

0x4c48,	// (0x00025c2b) ai5_sk_left_pane_g1

0x9b18,	// (0x0002aafb) ai5_sk_left_pane_g2

0x9b20,	// (0x0002ab03) ai5_sk_left_pane_g3

0x9b28,	// (0x0002ab0b) ai5_sk_left_pane_g4

0x0003,

0xfe73,	// (0x00030e56) ai5_sk_left_pane_g

0x9b30,	// (0x0002ab13) ai5_sk_left_pane_t1

0x4c40,	// (0x00025c23) ai5_sk_right_pane_g1

0x9b3e,	// (0x0002ab21) ai5_sk_right_pane_g2

0x9b46,	// (0x0002ab29) ai5_sk_right_pane_g3

0x9b4e,	// (0x0002ab31) ai5_sk_right_pane_g4

0x0003,

0xfe7c,	// (0x00030e5f) ai5_sk_right_pane_g

0x9b56,	// (0x0002ab39) ai5_sk_right_pane_t1

0x4c40,	// (0x00025c23) ai5_sk_middle_pane_g1

0x4c48,	// (0x00025c2b) ai5_sk_middle_pane_g2

0x4c60,	// (0x00025c43) ai5_sk_middle_pane_g3

0x9b46,	// (0x0002ab29) ai5_sk_middle_pane_g4

0x9b20,	// (0x0002ab03) ai5_sk_middle_pane_g5

0x9b64,	// (0x0002ab47) ai5_sk_middle_pane_g6

0xf080,	// (0x00030063) ai5_sk_middle_pane_g7

0x0006,

0xfe85,	// (0x00030e68) ai5_sk_middle_pane_g

0xd1f9,	// (0x0002e1dc) aid_touch_area_size_lc0_ParamLimits

0xd1f9,	// (0x0002e1dc) aid_touch_area_size_lc0

0x26f8,	// (0x000236db) cell_hwr_candidate_pane_t1_ParamLimits

0x4765,	// (0x00025748) aid_touch_navi_pane

0xd49e,	// (0x0002e481) status_dt_navi_pane_ParamLimits

0xd49e,	// (0x0002e481) status_dt_navi_pane

0xd4b6,	// (0x0002e499) status_dt_sta_pane_ParamLimits

0xd4b6,	// (0x0002e499) status_dt_sta_pane

0xf088,	// (0x0003006b) dt_sta_controll_pane

0xf095,	// (0x00030078) dt_sta_indi_pane

0xf0a2,	// (0x00030085) dt_sta_title_pane

0x1518,	// (0x000224fb) bg_dt_sta_indi_pane_ParamLimits

0x1518,	// (0x000224fb) bg_dt_sta_indi_pane

0xf0b4,	// (0x00030097) dt_sta_battery_pane

0xf0bc,	// (0x0003009f) dt_sta_indi_pane_g1

0xf0c5,	// (0x000300a8) dt_sta_indi_pane_g2

0xf0ce,	// (0x000300b1) dt_sta_indi_pane_g3

0x0002,

0xfe94,	// (0x00030e77) dt_sta_indi_pane_g

0xf0d7,	// (0x000300ba) dt_sta_signal_pane

0x310c,	// (0x000240ef) bg_dt_sta_title_pane_ParamLimits

0x310c,	// (0x000240ef) bg_dt_sta_title_pane

0xf0e0,	// (0x000300c3) dt_sta_title_pane_g1

0xf0e8,	// (0x000300cb) dt_sta_title_pane_t1_ParamLimits

0xf0e8,	// (0x000300cb) dt_sta_title_pane_t1

0xe612,	// (0x0002f5f5) bg_dt_sta_control_pane

0xf0fd,	// (0x000300e0) dt_sta_controll_pane_g1

0xf106,	// (0x000300e9) bg_dt_sta_title_pane_g1

0xf10f,	// (0x000300f2) bg_dt_sta_title_pane_g2

0xf118,	// (0x000300fb) bg_dt_sta_title_pane_g3

0x0002,

0xfe9b,	// (0x00030e7e) bg_dt_sta_title_pane_g

0x72de,	// (0x000282c1) bg_dt_sta_indi_pane_g1

0x9c12,	// (0x0002abf5) dt_sta_signal_pane_g1

0x9c1a,	// (0x0002abfd) dt_sta_signal_pane_g2

0x0001,

0xfea2,	// (0x00030e85) dt_sta_signal_pane_g

0x9c22,	// (0x0002ac05) dt_sta_battery_pane_g1

0x9c2b,	// (0x0002ac0e) dt_sta_battery_pane_t1

0x72de,	// (0x000282c1) bg_dt_sta_control_pane_g1

0x3868,	// (0x0002484b) fep_china_uni_eep_pane

0x3870,	// (0x00024853) fep_china_uni_entry_pane_ParamLimits

0x3880,	// (0x00024863) popup_fep_china_uni_window_g1_ParamLimits

0x3890,	// (0x00024873) popup_fep_china_uni_window_g2_ParamLimits

0x3890,	// (0x00024873) popup_fep_china_uni_window_g2

0x0001,

0xf730,	// (0x00030713) popup_fep_china_uni_window_g_ParamLimits

0xf730,	// (0x00030713) popup_fep_china_uni_window_g

0x9c3a,	// (0x0002ac1d) fep_china_uni_eep_pane_g1

0x9c42,	// (0x0002ac25) fep_china_uni_eep_pane_t1

0x974f,	// (0x0002a732) aid_touch_area_size_smil_player

0x48bd,	// (0x000258a0) lc0_clock_pane

0x4abb,	// (0x00025a9e) status_pane_g5_ParamLimits

0x4abb,	// (0x00025a9e) status_pane_g5

0xc5fe,	// (0x0002d5e1) popup_keymap_window

0x4a79,	// (0x00025a5c) status_icon_pane

0xeeee,	// (0x0002fed1) cell_ai5_widget_pane_g3_ParamLimits

0xef0d,	// (0x0002fef0) cell_ai5_widget_pane_g4_ParamLimits

0xef19,	// (0x0002fefc) cell_ai5_widget_pane_g5_ParamLimits

0xef3d,	// (0x0002ff20) cell_ai5_widget_pane_g8_ParamLimits

0xef3d,	// (0x0002ff20) cell_ai5_widget_pane_g8

0xef51,	// (0x0002ff34) cell_ai5_widget_pane_g9_ParamLimits

0xef51,	// (0x0002ff34) cell_ai5_widget_pane_g9

0xef65,	// (0x0002ff48) cell_ai5_widget_pane_g10_ParamLimits

0xef65,	// (0x0002ff48) cell_ai5_widget_pane_g10

0x9c51,	// (0x0002ac34) status_icon_pane_g1

0xe612,	// (0x0002f5f5) bg_popup_sub_pane_cp13

0x9c59,	// (0x0002ac3c) popup_keymap_window_t1

0xc30d,	// (0x0002d2f0) control_pane_g6_ParamLimits

0xc30d,	// (0x0002d2f0) control_pane_g6

0xc31a,	// (0x0002d2fd) control_pane_g7_ParamLimits

0xc31a,	// (0x0002d2fd) control_pane_g7

0xc327,	// (0x0002d30a) control_pane_g8_ParamLimits

0xc327,	// (0x0002d30a) control_pane_g8

0xf088,	// (0x0003006b) dt_sta_controll_pane_ParamLimits

0xf095,	// (0x00030078) dt_sta_indi_pane_ParamLimits

0xf0a2,	// (0x00030085) dt_sta_title_pane_ParamLimits

0x1a4d,	// (0x00022a30) aid_size_touch_scroll_bar_cale

0x0fa4,	// (0x00021f87) popup_discreet_window_ParamLimits

0x0fa4,	// (0x00021f87) popup_discreet_window

0xbb0e,	// (0x0002caf1) popup_sk_window

0x52de,	// (0x000262c1) bg_popup_sub_pane_cp28_ParamLimits

0x52de,	// (0x000262c1) bg_popup_sub_pane_cp28

0x9c67,	// (0x0002ac4a) popup_discreet_window_g1_ParamLimits

0x9c67,	// (0x0002ac4a) popup_discreet_window_g1

0x9c87,	// (0x0002ac6a) popup_discreet_window_t1_ParamLimits

0x9c87,	// (0x0002ac6a) popup_discreet_window_t1

0x9ca5,	// (0x0002ac88) popup_discreet_window_t2_ParamLimits

0x9ca5,	// (0x0002ac88) popup_discreet_window_t2

0x0002,

0xfea7,	// (0x00030e8a) popup_discreet_window_t_ParamLimits

0xfea7,	// (0x00030e8a) popup_discreet_window_t

0x3061,	// (0x00024044) popup_sk_window_g1

0x306b,	// (0x0002404e) popup_sk_window_g2

0x0001,

0xfeae,	// (0x00030e91) popup_sk_window_g

0x9cf7,	// (0x0002acda) popup_sk_window_t1

0x9d05,	// (0x0002ace8) popup_sk_window_t1_copy1

0xeede,	// (0x0002fec1) cell_ai5_widget_pane_g2_ParamLimits

0xf011,	// (0x0002fff4) cell_ai5_widget_pane_t9_ParamLimits

0xf011,	// (0x0002fff4) cell_ai5_widget_pane_t9

0xe612,	// (0x0002f5f5) main_fep_fshwr2_pane

0xf121,	// (0x00030104) aid_fshwr2_btn_pane

0xf129,	// (0x0003010c) aid_fshwr2_syb_pane

0xf131,	// (0x00030114) aid_fshwr2_txt_pane

0xf139,	// (0x0003011c) fshwr2_func_candi_pane

0xf143,	// (0x00030126) fshwr2_hwr_syb_pane

0xf14f,	// (0x00030132) fshwr2_icf_pane

0xe612,	// (0x0002f5f5) fshwr2_icf_bg_pane

0xf159,	// (0x0003013c) fshwr2_icf_pane_t1_ParamLimits

0xf159,	// (0x0003013c) fshwr2_icf_pane_t1

0x72de,	// (0x000282c1) fshwr2_func_candi_pane_g1

0x9d78,	// (0x0002ad5b) fshwr2_func_candi_row_pane_ParamLimits

0x9d78,	// (0x0002ad5b) fshwr2_func_candi_row_pane

0xf171,	// (0x00030154) cell_fshwr2_syb_pane_ParamLimits

0xf171,	// (0x00030154) cell_fshwr2_syb_pane

0x7568,	// (0x0002854b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7568,	// (0x0002854b) fshwr2_hwr_syb_pane_g1

0xe612,	// (0x0002f5f5) bg_popup_call_pane_cp01

0x9da3,	// (0x0002ad86) fshwr2_func_candi_cell_pane_ParamLimits

0x9da3,	// (0x0002ad86) fshwr2_func_candi_cell_pane

0x9dd5,	// (0x0002adb8) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9dd5,	// (0x0002adb8) fshwr2_func_candi_cell_bg_pane

0x9def,	// (0x0002add2) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9def,	// (0x0002add2) fshwr2_func_candi_cell_pane_g1

0x9e0f,	// (0x0002adf2) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9e0f,	// (0x0002adf2) fshwr2_func_candi_cell_pane_t1

0xe612,	// (0x0002f5f5) bg_button_pane_cp08

0x3d6a,	// (0x00024d4d) cell_fshwr2_syb_bg_pane

0xf18a,	// (0x0003016d) cell_fshwr2_syb_bg_pane_g1

0xf192,	// (0x00030175) cell_fshwr2_syb_bg_pane_t1

0x310c,	// (0x000240ef) main_tmo_pane

0xd7d0,	// (0x0002e7b3) uni_indicator_pane_g1_ParamLimits

0xd7e5,	// (0x0002e7c8) uni_indicator_pane_g2_ParamLimits

0xd7fa,	// (0x0002e7dd) uni_indicator_pane_g3_ParamLimits

0xd810,	// (0x0002e7f3) uni_indicator_pane_g4_ParamLimits

0xd810,	// (0x0002e7f3) uni_indicator_pane_g4

0xd824,	// (0x0002e807) uni_indicator_pane_g5_ParamLimits

0xd824,	// (0x0002e807) uni_indicator_pane_g5

0xd838,	// (0x0002e81b) uni_indicator_pane_g6_ParamLimits

0xd838,	// (0x0002e81b) uni_indicator_pane_g6

0xf928,	// (0x0003090b) uni_indicator_pane_g_ParamLimits

0xe31b,	// (0x0002f2fe) popup_tmo_note_window_ParamLimits

0xe31b,	// (0x0002f2fe) popup_tmo_note_window

0xe612,	// (0x0002f5f5) fshwr2_bg_pane

0x9e00,	// (0x0002ade3) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9e00,	// (0x0002ade3) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb3,	// (0x00030e96) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb3,	// (0x00030e96) fshwr2_func_candi_cell_pane_g

0x72de,	// (0x000282c1) bg_popup_window_pane_cp01

0x9e39,	// (0x0002ae1c) bg_popup_window_pane_g1_cp01

0x9e42,	// (0x0002ae25) bg_popup_window_pane_cp22_ParamLimits

0x9e42,	// (0x0002ae25) bg_popup_window_pane_cp22

0x9e50,	// (0x0002ae33) listscroll_tmo_link_pane_ParamLimits

0x9e50,	// (0x0002ae33) listscroll_tmo_link_pane

0x9e90,	// (0x0002ae73) popup_tmo_note_window_g1_ParamLimits

0x9e90,	// (0x0002ae73) popup_tmo_note_window_g1

0x9e9d,	// (0x0002ae80) tmo_note_info_pane_ParamLimits

0x9e9d,	// (0x0002ae80) tmo_note_info_pane

0xf1a1,	// (0x00030184) list_tmo_note_info_pane_g1_ParamLimits

0xf1a1,	// (0x00030184) list_tmo_note_info_pane_g1

0x9ece,	// (0x0002aeb1) list_tmo_note_info_pane_g2_ParamLimits

0x9ece,	// (0x0002aeb1) list_tmo_note_info_pane_g2

0x0001,

0xfeb8,	// (0x00030e9b) list_tmo_note_info_pane_g_ParamLimits

0xfeb8,	// (0x00030e9b) list_tmo_note_info_pane_g

0x9eea,	// (0x0002aecd) list_tmo_note_info_text_pane_ParamLimits

0x9eea,	// (0x0002aecd) list_tmo_note_info_text_pane

0x9f6f,	// (0x0002af52) list_tmo_link_pane

0x9f7c,	// (0x0002af5f) scroll_pane_cp20

0x9f89,	// (0x0002af6c) list_single_tmo_link_pane_ParamLimits

0x9f89,	// (0x0002af6c) list_single_tmo_link_pane

0x9f99,	// (0x0002af7c) list_single_tmo_link_pane_t1

0x9fa7,	// (0x0002af8a) list_tmo_note_info_text_pane_t1_ParamLimits

0x9fa7,	// (0x0002af8a) list_tmo_note_info_text_pane_t1

0xbf43,	// (0x0002cf26) aid_size_touch_scroll_bar_cp01_ParamLimits

0xbf43,	// (0x0002cf26) aid_size_touch_scroll_bar_cp01

0xb5e4,	// (0x0002c5c7) aid_size_touch_slider_marker

0xbafe,	// (0x0002cae1) popup_settings_window_ParamLimits

0xbafe,	// (0x0002cae1) popup_settings_window

0x051e,	// (0x00021501) popup_candi_list_indi_window

0x4765,	// (0x00025748) aid_touch_navi_pane_ParamLimits

0x2869,	// (0x0002384c) rs_clock_indi_pane

0x2872,	// (0x00023855) sctrl_sk_bottom_pane_ParamLimits

0x2883,	// (0x00023866) sctrl_sk_top_pane_ParamLimits

0x2968,	// (0x0002394b) popup_fep_tooltip_window

0x9863,	// (0x0002a846) aid_size_cell_widget_grid_ParamLimits

0xeed2,	// (0x0002feb5) cell_ai5_widget_pane_g1_ParamLimits

0xeed2,	// (0x0002feb5) cell_ai5_widget_pane_g1

0xef25,	// (0x0002ff08) cell_ai5_widget_pane_g6_ParamLimits

0xef31,	// (0x0002ff14) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe36,	// (0x00030e19) cell_ai5_widget_pane_g_ParamLimits

0xfe36,	// (0x00030e19) cell_ai5_widget_pane_g

0xf035,	// (0x00030018) cell_ai5_widget_pane_t10_ParamLimits

0xf035,	// (0x00030018) cell_ai5_widget_pane_t10

0xf04b,	// (0x0003002e) grid_ai5_widget_pane_ParamLimits

0x9ada,	// (0x0002aabd) cell_contacts_ai5_widget_pane_ParamLimits

0x9ada,	// (0x0002aabd) cell_contacts_ai5_widget_pane

0x9cba,	// (0x0002ac9d) popup_discreet_window_t3_ParamLimits

0x9cba,	// (0x0002ac9d) popup_discreet_window_t3

0x9d49,	// (0x0002ad2c) popup_fshwr2_char_preview_window_ParamLimits

0x9d49,	// (0x0002ad2c) popup_fshwr2_char_preview_window

0xf1b8,	// (0x0003019b) tmo_note_info_pane_t1

0xf1cd,	// (0x000301b0) tmo_note_info_pane_t2

0xf1e6,	// (0x000301c9) tmo_note_info_pane_t3

0x9f4b,	// (0x0002af2e) tmo_note_info_pane_t4

0x9f5d,	// (0x0002af40) tmo_note_info_pane_t5

0x0004,

0xfebd,	// (0x00030ea0) tmo_note_info_pane_t

0x9f6f,	// (0x0002af52) list_tmo_link_pane_ParamLimits

0x9f7c,	// (0x0002af5f) scroll_pane_cp20_ParamLimits

0xe612,	// (0x0002f5f5) bg_popup_fep_char_preview_window_cp01

0x9fc0,	// (0x0002afa3) popup_fshwr2_char_preview_window_t1

0x9fce,	// (0x0002afb1) popup_candi_list_indi_window_g1

0x9fd7,	// (0x0002afba) bg_cell_contacts_ai5_widget_pane

0x9fe3,	// (0x0002afc6) cell_contacts_ai5_widget_pane_g1

0x9ff7,	// (0x0002afda) cell_contacts_ai5_widget_pane_g2

0xa006,	// (0x0002afe9) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfec8,	// (0x00030eab) cell_contacts_ai5_widget_pane_g

0xa019,	// (0x0002affc) cell_contacts_ai5_widget_pane_t1

0x310c,	// (0x000240ef) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf260,	// (0x00030243) settings_container_pane

0x3d6a,	// (0x00024d4d) listscroll_set_pane_copy1

0x6a24,	// (0x00027a07) scroll_pane_cp121_copy1

0xa09f,	// (0x0002b082) set_content_pane_copy1

0xf26c,	// (0x0003024f) aid_height_set_list_copy1_ParamLimits

0xf26c,	// (0x0003024f) aid_height_set_list_copy1

0x6071,	// (0x00027054) aid_size_parent_copy1_ParamLimits

0x6071,	// (0x00027054) aid_size_parent_copy1

0xf278,	// (0x0003025b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf278,	// (0x0003025b) button_value_adjust_pane_cp6_copy1

0x40f0,	// (0x000250d3) list_highlight_pane_cp2_copy1_ParamLimits

0x40f0,	// (0x000250d3) list_highlight_pane_cp2_copy1

0xf28c,	// (0x0003026f) list_set_pane_copy1_ParamLimits

0xf28c,	// (0x0003026f) list_set_pane_copy1

0xf1fb,	// (0x000301de) main_pane_set_t1_copy1_ParamLimits

0xf1fb,	// (0x000301de) main_pane_set_t1_copy1

0xf235,	// (0x00030218) main_pane_set_t2_copy1_ParamLimits

0xf235,	// (0x00030218) main_pane_set_t2_copy1

0xf353,	// (0x00030336) main_pane_set_t3_copy1

0xf361,	// (0x00030344) main_pane_set_t4_copy1

0xf254,	// (0x00030237) set_content_pane_g1_copy1_ParamLimits

0xf254,	// (0x00030237) set_content_pane_g1_copy1

0xf36f,	// (0x00030352) setting_code_pane_copy1

0xa1b4,	// (0x0002b197) setting_slider_graphic_pane_copy1

0xa1b4,	// (0x0002b197) setting_slider_pane_copy1

0xa1b4,	// (0x0002b197) setting_text_pane_copy1

0xa1be,	// (0x0002b1a1) setting_volume_pane_copy1

0xf379,	// (0x0003035c) settings_code_pane_cp2_copy1

0xf381,	// (0x00030364) settings_code_pane_cp_copy1_ParamLimits

0xf381,	// (0x00030364) settings_code_pane_cp_copy1

0xf395,	// (0x00030378) volume_set_pane_copy1

0xf3a1,	// (0x00030384) volume_set_pane_g10_copy1

0xf3ad,	// (0x00030390) volume_set_pane_g1_copy1

0xf3b7,	// (0x0003039a) volume_set_pane_g2_copy1

0xf3c1,	// (0x000303a4) volume_set_pane_g3_copy1

0xf3cb,	// (0x000303ae) volume_set_pane_g4_copy1

0xf3d5,	// (0x000303b8) volume_set_pane_g5_copy1

0xf3df,	// (0x000303c2) volume_set_pane_g6_copy1

0xf3e9,	// (0x000303cc) volume_set_pane_g7_copy1

0xf3f3,	// (0x000303d6) volume_set_pane_g8_copy1

0xf3fd,	// (0x000303e0) volume_set_pane_g9_copy1

0x11fe,	// (0x000221e1) bg_set_opt_pane_cp_copy1_ParamLimits

0x11fe,	// (0x000221e1) bg_set_opt_pane_cp_copy1

0xa255,	// (0x0002b238) setting_slider_pane_t1_copy1_ParamLimits

0xa255,	// (0x0002b238) setting_slider_pane_t1_copy1

0xf407,	// (0x000303ea) setting_slider_pane_t2_copy1_ParamLimits

0xf407,	// (0x000303ea) setting_slider_pane_t2_copy1

0xf421,	// (0x00030404) setting_slider_pane_t3_copy1_ParamLimits

0xf421,	// (0x00030404) setting_slider_pane_t3_copy1

0xf439,	// (0x0003041c) slider_set_pane_copy1_ParamLimits

0xf439,	// (0x0003041c) slider_set_pane_copy1

0x3173,	// (0x00024156) set_opt_bg_pane_g1_copy2

0x317b,	// (0x0002415e) set_opt_bg_pane_g2_copy2

0xa2bb,	// (0x0002b29e) set_opt_bg_pane_g3_copy2

0x318b,	// (0x0002416e) set_opt_bg_pane_g4_copy2

0x3193,	// (0x00024176) set_opt_bg_pane_g5_copy2

0x319b,	// (0x0002417e) set_opt_bg_pane_g6_copy2

0xf44f,	// (0x00030432) set_opt_bg_pane_g7_copy2

0xa2cf,	// (0x0002b2b2) set_opt_bg_pane_g8_copy2

0xa2d9,	// (0x0002b2bc) set_opt_bg_pane_g9_copy2

0xa2e3,	// (0x0002b2c6) aid_size_touch_slider_mark_copy1_ParamLimits

0xa2e3,	// (0x0002b2c6) aid_size_touch_slider_mark_copy1

0xa2f7,	// (0x0002b2da) slider_set_pane_g1_copy1

0xa300,	// (0x0002b2e3) slider_set_pane_g2_copy1

0x66a4,	// (0x00027687) slider_set_pane_g3_copy1_ParamLimits

0x66a4,	// (0x00027687) slider_set_pane_g3_copy1

0x66b8,	// (0x0002769b) slider_set_pane_g4_copy1_ParamLimits

0x66b8,	// (0x0002769b) slider_set_pane_g4_copy1

0x66d0,	// (0x000276b3) slider_set_pane_g5_copy1_ParamLimits

0x66d0,	// (0x000276b3) slider_set_pane_g5_copy1

0x66a4,	// (0x00027687) slider_set_pane_g6_copy1_ParamLimits

0x66a4,	// (0x00027687) slider_set_pane_g6_copy1

0xf459,	// (0x0003043c) slider_set_pane_g7_copy1_ParamLimits

0xf459,	// (0x0003043c) slider_set_pane_g7_copy1

0xe626,	// (0x0002f609) bg_set_opt_pane_cp2_copy1

0xa31e,	// (0x0002b301) setting_slider_graphic_pane_g1_copy1

0xf46f,	// (0x00030452) setting_slider_graphic_pane_t1_copy1

0xf47f,	// (0x00030462) setting_slider_graphic_pane_t2_copy1

0xf48f,	// (0x00030472) slider_set_pane_cp_copy1

0xa357,	// (0x0002b33a) input_focus_pane_cp1_copy1

0xa360,	// (0x0002b343) list_set_text_pane_copy1

0xa368,	// (0x0002b34b) setting_text_pane_g1_copy1

0x0cfb,	// (0x00021cde) set_text_pane_t1_copy1

0xa357,	// (0x0002b33a) input_focus_pane_cp2_copy1

0xa368,	// (0x0002b34b) setting_code_pane_g1_copy1

0xf497,	// (0x0003047a) setting_code_pane_t1_copy1

0xf4a5,	// (0x00030488) list_set_graphic_pane_copy1

0xe626,	// (0x0002f609) bg_set_opt_pane_cp4_copy1

0xc1d7,	// (0x0002d1ba) list_set_graphic_pane_g1_copy1_ParamLimits

0xc1d7,	// (0x0002d1ba) list_set_graphic_pane_g1_copy1

0xf4b7,	// (0x0003049a) list_set_graphic_pane_g2_copy1

0xc1ef,	// (0x0002d1d2) list_set_graphic_pane_t1_copy1_ParamLimits

0xc1ef,	// (0x0002d1d2) list_set_graphic_pane_t1_copy1

0x72de,	// (0x000282c1) rs_clock_indi_pane_g1

0xa399,	// (0x0002b37c) rs_clock_indi_pane_t1

0xa3a7,	// (0x0002b38a) rs_indi_pane

0xa3af,	// (0x0002b392) rs_indi_pane_g1

0xa3b8,	// (0x0002b39b) rs_indi_pane_g2

0xa3c1,	// (0x0002b3a4) rs_indi_pane_g3

0x0002,

0xfecf,	// (0x00030eb2) rs_indi_pane_g

0x3d6a,	// (0x00024d4d) bg_popup_preview_window_pane_cp03

0xa3ca,	// (0x0002b3ad) popup_fep_tooltip_window_t1

0x7f92,	// (0x00028f75) popup_note2_window_g2_ParamLimits

0x7f92,	// (0x00028f75) popup_note2_window_g2

0x0001,

0xfc68,	// (0x00030c4b) popup_note2_window_g_ParamLimits

0xfc68,	// (0x00030c4b) popup_note2_window_g

0x849a,	// (0x0002947d) bg_popup_sub_pane_cp11_ParamLimits

0x84a7,	// (0x0002948a) cell_ai3_links_pane_g1_ParamLimits

0x84be,	// (0x000294a1) cell_ai3_links_pane_t1

0x0cfb,	// (0x00021cde) set_text_pane_t1_copy1_ParamLimits

0x3c77,	// (0x00024c5a) cell_graphic_popup_pane_cp2_ParamLimits

0x3c77,	// (0x00024c5a) cell_graphic_popup_pane_cp2

0xa3d8,	// (0x0002b3bb) cell_graphic_popup_pane_g1_cp2

0x1860,	// (0x00022843) cell_graphic_popup_pane_g2_cp2

0xa3e0,	// (0x0002b3c3) cell_graphic_popup_pane_g3_cp2

0xa3e8,	// (0x0002b3cb) cell_graphic_popup_pane_t2_cp2

0x1871,	// (0x00022854) grid_highlight_pane_cp3_cp2

0x34bf,	// (0x000244a2) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x310c,	// (0x000240ef) main_tmo_pane_ParamLimits

0xe30f,	// (0x0002f2f2) popup_tmo_big_image_note_window

0xeec2,	// (0x0002fea5) cell_ai5_widget_list_pane

0xeeca,	// (0x0002fead) cell_ai5_widget_lrg_icon_pane

0xf1b8,	// (0x0003019b) tmo_note_info_pane_t1_ParamLimits

0xf1cd,	// (0x000301b0) tmo_note_info_pane_t2_ParamLimits

0xf1e6,	// (0x000301c9) tmo_note_info_pane_t3_ParamLimits

0x9f4b,	// (0x0002af2e) tmo_note_info_pane_t4_ParamLimits

0x9f5d,	// (0x0002af40) tmo_note_info_pane_t5_ParamLimits

0xfebd,	// (0x00030ea0) tmo_note_info_pane_t_ParamLimits

0xf260,	// (0x00030243) settings_container_pane_ParamLimits

0xa34f,	// (0x0002b332) indicator_popup_pane_cp5

0xa34f,	// (0x0002b332) indicator_popup_pane_cp6

0xf4a5,	// (0x00030488) list_set_graphic_pane_copy1_ParamLimits

0xe612,	// (0x0002f5f5) bg_popup_window_pane_cp23

0xa3f6,	// (0x0002b3d9) popup_tmo_big_image_note_window_g1

0xa402,	// (0x0002b3e5) popup_tmo_big_image_note_window_t1

0xa412,	// (0x0002b3f5) popup_tmo_big_image_note_window_t2

0xa422,	// (0x0002b405) popup_tmo_big_image_note_window_t3

0x0002,

0xfed6,	// (0x00030eb9) popup_tmo_big_image_note_window_t

0xf4bf,	// (0x000304a2) cell_ai5_widget_lrg_icon_pane_g1

0xf4c7,	// (0x000304aa) cell_ai5_widget_lrg_icon_pane_t1

0xf4d5,	// (0x000304b8) cell_ai5_widget_list_row_pane_ParamLimits

0xf4d5,	// (0x000304b8) cell_ai5_widget_list_row_pane

0xf4ee,	// (0x000304d1) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xf4ee,	// (0x000304d1) cell_ai5_widget_list_row_pane_g1

0xf4fb,	// (0x000304de) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xf4fb,	// (0x000304de) cell_ai5_widget_list_row_pane_t1

0xf513,	// (0x000304f6) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xf513,	// (0x000304f6) cell_ai5_widget_list_row_pane_t2

0x0001,

0xfedd,	// (0x00030ec0) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfedd,	// (0x00030ec0) cell_ai5_widget_list_row_pane_t

0xe612,	// (0x0002f5f5) main_fep_vtchi_ss_pane

0xa498,	// (0x0002b47b) popup_fep_char_pre_window

0xa4a0,	// (0x0002b483) popup_fep_ituss_window

0xa4c1,	// (0x0002b4a4) popup_fep_vkbss_window

0xa4e2,	// (0x0002b4c5) grid_vkbss_keypad_pane_ParamLimits

0xa4e2,	// (0x0002b4c5) grid_vkbss_keypad_pane

0xa4f2,	// (0x0002b4d5) ituss_keypad_pane

0xa50b,	// (0x0002b4ee) aid_vkbss_key_offset_ParamLimits

0xa50b,	// (0x0002b4ee) aid_vkbss_key_offset

0xa517,	// (0x0002b4fa) cell_vkbss_key_pane_ParamLimits

0xa517,	// (0x0002b4fa) cell_vkbss_key_pane

0xa52d,	// (0x0002b510) bg_cell_vkbss_key_g1_ParamLimits

0xa52d,	// (0x0002b510) bg_cell_vkbss_key_g1

0xa539,	// (0x0002b51c) cell_vkbss_key_3p_pane_ParamLimits

0xa539,	// (0x0002b51c) cell_vkbss_key_3p_pane

0xa553,	// (0x0002b536) cell_vkbss_key_g1_ParamLimits

0xa553,	// (0x0002b536) cell_vkbss_key_g1

0xa56d,	// (0x0002b550) cell_vkbss_key_t1_ParamLimits

0xa56d,	// (0x0002b550) cell_vkbss_key_t1

0xa598,	// (0x0002b57b) cell_ituss_key_pane_ParamLimits

0xa598,	// (0x0002b57b) cell_ituss_key_pane

0xa5a8,	// (0x0002b58b) bg_cell_ituss_key_g1_ParamLimits

0xa5a8,	// (0x0002b58b) bg_cell_ituss_key_g1

0xa5b4,	// (0x0002b597) cell_ituss_key_pane_g1_ParamLimits

0xa5b4,	// (0x0002b597) cell_ituss_key_pane_g1

0xa5c0,	// (0x0002b5a3) cell_ituss_key_pane_g2_ParamLimits

0xa5c0,	// (0x0002b5a3) cell_ituss_key_pane_g2

0x0001,

0xfee2,	// (0x00030ec5) cell_ituss_key_pane_g_ParamLimits

0xfee2,	// (0x00030ec5) cell_ituss_key_pane_g

0xa5dc,	// (0x0002b5bf) cell_ituss_key_t1_ParamLimits

0xa5dc,	// (0x0002b5bf) cell_ituss_key_t1

0xa60a,	// (0x0002b5ed) cell_ituss_key_t2_ParamLimits

0xa60a,	// (0x0002b5ed) cell_ituss_key_t2

0xa63b,	// (0x0002b61e) cell_ituss_key_t3_ParamLimits

0xa63b,	// (0x0002b61e) cell_ituss_key_t3

0xa66c,	// (0x0002b64f) cell_ituss_key_t4_ParamLimits

0xa66c,	// (0x0002b64f) cell_ituss_key_t4

0x0003,

0xfee7,	// (0x00030eca) cell_ituss_key_t_ParamLimits

0xfee7,	// (0x00030eca) cell_ituss_key_t

0xa69d,	// (0x0002b680) cell_vkbss_key_3p_pane_g1

0xa6a5,	// (0x0002b688) cell_vkbss_key_3p_pane_g2

0xa6ad,	// (0x0002b690) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef0,	// (0x00030ed3) cell_vkbss_key_3p_pane_g

0xe612,	// (0x0002f5f5) bg_popup_fep_char_preview_window_cp02

0xa6b5,	// (0x0002b698) popup_fep_char_pre_window_t1

0xeeb8,	// (0x0002fe9b) main_ai5_sk_pane

0x9fd7,	// (0x0002afba) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x9fe3,	// (0x0002afc6) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x9ff7,	// (0x0002afda) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa006,	// (0x0002afe9) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfec8,	// (0x00030eab) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa019,	// (0x0002affc) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x310c,	// (0x000240ef) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf525,	// (0x00030508) main_ai5_sk_pane_g1

0x5116,	// (0x000260f9) popup_query_code_window_g1

0xa4b6,	// (0x0002b499) popup_fep_vkb_icf_pane

0xa4cc,	// (0x0002b4af) popup_fep_vtchi_icf_pane

0x310c,	// (0x000240ef) bg_icf_pane

0xa6dc,	// (0x0002b6bf) list_vkb_icf_pane

0x310c,	// (0x000240ef) bg_icf_pane_cp01

0x879d,	// (0x00029780) vtchi_icf_list_pane

0xa6fc,	// (0x0002b6df) list_vkb_icf_pane_t1_ParamLimits

0xa6fc,	// (0x0002b6df) list_vkb_icf_pane_t1

0xa713,	// (0x0002b6f6) vtchi_icf_list_pane_t1_ParamLimits

0xa713,	// (0x0002b6f6) vtchi_icf_list_pane_t1

0xa4a0,	// (0x0002b483) popup_fep_ituss_window_ParamLimits

0xa4cc,	// (0x0002b4af) popup_fep_vtchi_icf_pane_ParamLimits

0xa4f2,	// (0x0002b4d5) ituss_keypad_pane_ParamLimits

0xa502,	// (0x0002b4e5) ituss_sks_pane

0x310c,	// (0x000240ef) bg_icf_pane_ParamLimits

0xa6cd,	// (0x0002b6b0) icf_edit_indi_pane_ParamLimits

0xa6cd,	// (0x0002b6b0) icf_edit_indi_pane

0xa6dc,	// (0x0002b6bf) list_vkb_icf_pane_ParamLimits

0x310c,	// (0x000240ef) bg_icf_pane_cp01_ParamLimits

0xa6e8,	// (0x0002b6cb) icf_edit_indi_pane_cp01_ParamLimits

0xa6e8,	// (0x0002b6cb) icf_edit_indi_pane_cp01

0xa6f4,	// (0x0002b6d7) vtchi_query_pane

0x7568,	// (0x0002854b) icf_edit_indi_pane_g1_ParamLimits

0x7568,	// (0x0002854b) icf_edit_indi_pane_g1

0xa72c,	// (0x0002b70f) icf_edit_indi_pane_g2_ParamLimits

0xa72c,	// (0x0002b70f) icf_edit_indi_pane_g2

0x0001,

0xfef7,	// (0x00030eda) icf_edit_indi_pane_g_ParamLimits

0xfef7,	// (0x00030eda) icf_edit_indi_pane_g

0xa738,	// (0x0002b71b) icf_edit_indi_pane_t1

0xa746,	// (0x0002b729) bg_input_focus_pane_cp042

0x1a44,	// (0x00022a27) vtchi_button_pane

0xa74f,	// (0x0002b732) vtchi_query_pane_t1

0xa75d,	// (0x0002b740) vtchi_query_pane_t2

0xa76b,	// (0x0002b74e) vtchi_query_pane_t3

0x0002,

0xfefc,	// (0x00030edf) vtchi_query_pane_t

0xe612,	// (0x0002f5f5) bg_button_pane_cp13

0xa779,	// (0x0002b75c) vtchi_button_pane_g1

0x8d09,	// (0x00029cec) ituss_sks_pane_g1

0xa781,	// (0x0002b764) ituss_sks_pane_g2

0x0001,

0xff03,	// (0x00030ee6) ituss_sks_pane_g

0xa78a,	// (0x0002b76d) ituss_sks_pane_t1

0xa798,	// (0x0002b77b) ituss_sks_pane_t2

0x0001,

0xff08,	// (0x00030eeb) ituss_sks_pane_t

0x6d85,	// (0x00027d68) indicator_nsta_pane_cp_g1

0x6d8e,	// (0x00027d71) indicator_nsta_pane_cp_g2

0x6d96,	// (0x00027d79) indicator_nsta_pane_cp_g3

0x6d9e,	// (0x00027d81) indicator_nsta_pane_cp_g4

0x6da6,	// (0x00027d89) indicator_nsta_pane_cp_g5

0x6dae,	// (0x00027d91) indicator_nsta_pane_cp_g6

0x0005,

0xfab2,	// (0x00030a95) indicator_nsta_pane_cp_g

0xecf0,	// (0x0002fcd3) cell_graphic2_pane_t2_ParamLimits

0xecf0,	// (0x0002fcd3) cell_graphic2_pane_t2

0x0001,

0xfdbf,	// (0x00030da2) cell_graphic2_pane_t_ParamLimits

0xfdbf,	// (0x00030da2) cell_graphic2_pane_t
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_av_vga4_lsc_tch_Small

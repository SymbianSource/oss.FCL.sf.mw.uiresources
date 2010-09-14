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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002bc9 };

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
0x8ce7,	// (0x0000b8b0) Screen

0x8cf3,	// (0x0000b8bc) application_window_ParamLimits

0x8cf3,	// (0x0000b8bc) application_window

0xdfc4,	// (0x00010b8d) screen_g1

0x8d2b,	// (0x0000b8f4) area_bottom_pane_ParamLimits

0x8d2b,	// (0x0000b8f4) area_bottom_pane

0xdfee,	// (0x00010bb7) area_top_pane_ParamLimits

0xdfee,	// (0x00010bb7) area_top_pane

0xe082,	// (0x00010c4b) main_pane_ParamLimits

0xe082,	// (0x00010c4b) main_pane

0xe13d,	// (0x00010d06) misc_graphics

0xaacc,	// (0x0000d695) battery_pane_ParamLimits

0xaacc,	// (0x0000d695) battery_pane

0x14bc,	// (0x00004085) bg_status_flat_pane_g8

0x14c4,	// (0x0000408d) bg_status_flat_pane_g9

0x0611,	// (0x000031da) context_pane_ParamLimits

0x0611,	// (0x000031da) context_pane

0xac37,	// (0x0000d800) navi_pane_ParamLimits

0xac37,	// (0x0000d800) navi_pane

0xacb5,	// (0x0000d87e) signal_pane_ParamLimits

0xacb5,	// (0x0000d87e) signal_pane

0x0008,

0xf834,	// (0x000123fd) bg_status_flat_pane_g

0xad45,	// (0x0000d90e) status_pane_g1_ParamLimits

0xad45,	// (0x0000d90e) status_pane_g1

0xad5b,	// (0x0000d924) status_pane_g2_ParamLimits

0xad5b,	// (0x0000d924) status_pane_g2

0x0838,	// (0x00003401) status_pane_g3_ParamLimits

0x0838,	// (0x00003401) status_pane_g3

0x0004,

0xf767,	// (0x00012330) status_pane_g_ParamLimits

0xf767,	// (0x00012330) status_pane_g

0xad67,	// (0x0000d930) title_pane_ParamLimits

0xad67,	// (0x0000d930) title_pane

0xadca,	// (0x0000d993) uni_indicator_pane_ParamLimits

0xadca,	// (0x0000d993) uni_indicator_pane

0xf4c7,	// (0x00012090) bg_list_pane_ParamLimits

0xf4c7,	// (0x00012090) bg_list_pane

0xa2ba,	// (0x0000ce83) find_pane

0x0c08,	// (0x000037d1) listscroll_app_pane_ParamLimits

0x0c08,	// (0x000037d1) listscroll_app_pane

0xf4e7,	// (0x000120b0) listscroll_form_pane

0xa2c2,	// (0x0000ce8b) listscroll_gen_pane_ParamLimits

0xa2c2,	// (0x0000ce8b) listscroll_gen_pane

0xf4ef,	// (0x000120b8) listscroll_set_pane

0x2264,	// (0x00004e2d) main_idle_act_pane

0xf29f,	// (0x00011e68) main_idle_trad_pane

0xf29f,	// (0x00011e68) main_list_empty_pane

0xf47e,	// (0x00012047) main_midp_pane

0xf509,	// (0x000120d2) main_pane_g1_ParamLimits

0xf509,	// (0x000120d2) main_pane_g1

0xa2d6,	// (0x0000ce9f) popup_ai_message_window_ParamLimits

0xa2d6,	// (0x0000ce9f) popup_ai_message_window

0xa387,	// (0x0000cf50) popup_fep_china_uni_window_ParamLimits

0xa387,	// (0x0000cf50) popup_fep_china_uni_window

0xa3e1,	// (0x0000cfaa) popup_fep_japan_candidate_window_ParamLimits

0xa3e1,	// (0x0000cfaa) popup_fep_japan_candidate_window

0xa3ff,	// (0x0000cfc8) popup_fep_japan_predictive_window_ParamLimits

0xa3ff,	// (0x0000cfc8) popup_fep_japan_predictive_window

0xa411,	// (0x0000cfda) popup_find_window

0xa42e,	// (0x0000cff7) popup_grid_graphic_window_ParamLimits

0xa42e,	// (0x0000cff7) popup_grid_graphic_window

0x00b5,	// (0x00002c7e) popup_large_graphic_colour_window

0xa4cc,	// (0x0000d095) popup_menu_window_ParamLimits

0xa4cc,	// (0x0000d095) popup_menu_window

0xa69e,	// (0x0000d267) popup_note_image_window

0xa664,	// (0x0000d22d) popup_note_wait_window_ParamLimits

0xa664,	// (0x0000d22d) popup_note_wait_window

0xa6b6,	// (0x0000d27f) popup_note_window_ParamLimits

0xa6b6,	// (0x0000d27f) popup_note_window

0xa765,	// (0x0000d32e) popup_query_code_window_ParamLimits

0xa765,	// (0x0000d32e) popup_query_code_window

0xa79f,	// (0x0000d368) popup_query_data_code_window_ParamLimits

0xa79f,	// (0x0000d368) popup_query_data_code_window

0xa7bc,	// (0x0000d385) popup_query_data_window_ParamLimits

0xa7bc,	// (0x0000d385) popup_query_data_window

0xa83e,	// (0x0000d407) popup_query_sat_info_window_ParamLimits

0xa83e,	// (0x0000d407) popup_query_sat_info_window

0xa8d5,	// (0x0000d49e) popup_snote_single_graphic_window_ParamLimits

0xa8d5,	// (0x0000d49e) popup_snote_single_graphic_window

0xa8d5,	// (0x0000d49e) popup_snote_single_text_window_ParamLimits

0xa8d5,	// (0x0000d49e) popup_snote_single_text_window

0x0388,	// (0x00002f51) popup_sub_window_general

0xaa32,	// (0x0000d5fb) popup_window_general_ParamLimits

0xaa32,	// (0x0000d5fb) popup_window_general

0x04cd,	// (0x00003096) power_save_pane

0xa114,	// (0x0000ccdd) control_pane_g1_ParamLimits

0xa114,	// (0x0000ccdd) control_pane_g1

0xa13d,	// (0x0000cd06) control_pane_g2_ParamLimits

0xa13d,	// (0x0000cd06) control_pane_g2

0xf48a,	// (0x00012053) control_pane_g3_ParamLimits

0xf48a,	// (0x00012053) control_pane_g3

0x0007,

0xf74f,	// (0x00012318) control_pane_g_ParamLimits

0xf74f,	// (0x00012318) control_pane_g

0xa1a5,	// (0x0000cd6e) control_pane_t1_ParamLimits

0xa1a5,	// (0x0000cd6e) control_pane_t1

0xa20d,	// (0x0000cdd6) control_pane_t2_ParamLimits

0xa20d,	// (0x0000cdd6) control_pane_t2

0x0002,

0xf760,	// (0x00012329) control_pane_t_ParamLimits

0xf760,	// (0x00012329) control_pane_t

0xa06d,	// (0x0000cc36) navi_navi_volume_pane_cp1

0xa075,	// (0x0000cc3e) status_small_icon_pane

0xf44a,	// (0x00012013) status_small_pane_g1_ParamLimits

0xf44a,	// (0x00012013) status_small_pane_g1

0xa07d,	// (0x0000cc46) status_small_pane_g2_ParamLimits

0xa07d,	// (0x0000cc46) status_small_pane_g2

0xa089,	// (0x0000cc52) status_small_pane_g3_ParamLimits

0xa089,	// (0x0000cc52) status_small_pane_g3

0xa095,	// (0x0000cc5e) status_small_pane_g4_ParamLimits

0xa095,	// (0x0000cc5e) status_small_pane_g4

0xa0a1,	// (0x0000cc6a) status_small_pane_g5_ParamLimits

0xa0a1,	// (0x0000cc6a) status_small_pane_g5

0xa0af,	// (0x0000cc78) status_small_pane_g6_ParamLimits

0xa0af,	// (0x0000cc78) status_small_pane_g6

0x0007,

0xf73e,	// (0x00012307) status_small_pane_g_ParamLimits

0xf73e,	// (0x00012307) status_small_pane_g

0xa0de,	// (0x0000cca7) status_small_pane_t1

0xa100,	// (0x0000ccc9) status_small_wait_pane_ParamLimits

0xa100,	// (0x0000ccc9) status_small_wait_pane

0x9d49,	// (0x0000c912) aid_levels_signal_ParamLimits

0x9d49,	// (0x0000c912) aid_levels_signal

0x9d61,	// (0x0000c92a) signal_pane_g1_ParamLimits

0x9d61,	// (0x0000c92a) signal_pane_g1

0x9d7c,	// (0x0000c945) signal_pane_g2_ParamLimits

0x9d7c,	// (0x0000c945) signal_pane_g2

0x0003,

0xf6cf,	// (0x00012298) signal_pane_g_ParamLimits

0xf6cf,	// (0x00012298) signal_pane_g

0xed2a,	// (0x000118f3) context_pane_g1

0x8f29,	// (0x0000baf2) title_pane_g1

0x8f60,	// (0x0000bb29) title_pane_t1

0xe173,	// (0x00010d3c) title_pane_t2

0xe199,	// (0x00010d62) title_pane_t3

0x0002,

0xf532,	// (0x000120fb) title_pane_t

0xadf2,	// (0x0000d9bb) aid_levels_battery_ParamLimits

0xadf2,	// (0x0000d9bb) aid_levels_battery

0xae0e,	// (0x0000d9d7) battery_pane_g1_ParamLimits

0xae0e,	// (0x0000d9d7) battery_pane_g1

0xae2b,	// (0x0000d9f4) battery_pane_g2_ParamLimits

0xae2b,	// (0x0000d9f4) battery_pane_g2

0x0001,

0xf772,	// (0x0001233b) battery_pane_g_ParamLimits

0xf772,	// (0x0001233b) battery_pane_g

0xb4b8,	// (0x0000e081) uni_indicator_pane_g1

0xb4ce,	// (0x0000e097) uni_indicator_pane_g2

0xb4e4,	// (0x0000e0ad) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x000124a5) uni_indicator_pane_g

0xf136,	// (0x00011cff) navi_icon_pane_ParamLimits

0xf136,	// (0x00011cff) navi_icon_pane

0xf08b,	// (0x00011c54) navi_midp_pane

0xf152,	// (0x00011d1b) navi_navi_pane

0xf15c,	// (0x00011d25) navi_text_pane_ParamLimits

0xf15c,	// (0x00011d25) navi_text_pane

0xdfc4,	// (0x00010b8d) status_small_wait_pane_g1

0xe404,	// (0x00010fcd) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x000124a0) status_small_wait_pane_g

0xb411,	// (0x0000dfda) navi_navi_icon_text_pane

0x1c79,	// (0x00004842) navi_navi_pane_g1_ParamLimits

0x1c79,	// (0x00004842) navi_navi_pane_g1

0x1c8b,	// (0x00004854) navi_navi_pane_g2_ParamLimits

0x1c8b,	// (0x00004854) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x0001246e) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x0001246e) navi_navi_pane_g

0x1c9d,	// (0x00004866) navi_navi_tabs_pane

0x1ca6,	// (0x0000486f) navi_navi_text_pane

0xb411,	// (0x0000dfda) navi_navi_volume_pane

0x1c4d,	// (0x00004816) navi_text_pane_t1

0x1c41,	// (0x0000480a) navi_icon_pane_g1

0x1b94,	// (0x0000475d) navi_navi_text_pane_t1

0xb3fd,	// (0x0000dfc6) navi_navi_volume_pane_g1

0x1b8b,	// (0x00004754) volume_small_pane

0x1ae9,	// (0x000046b2) navi_navi_icon_text_pane_g1

0xb361,	// (0x0000df2a) navi_navi_icon_text_pane_t1

0xf152,	// (0x00011d1b) navi_tabs_2_long_pane

0xf152,	// (0x00011d1b) navi_tabs_2_pane

0xf152,	// (0x00011d1b) navi_tabs_3_long_pane

0xf152,	// (0x00011d1b) navi_tabs_3_pane

0xf152,	// (0x00011d1b) navi_tabs_4_pane

0x1a48,	// (0x00004611) tabs_2_active_pane_ParamLimits

0x1a48,	// (0x00004611) tabs_2_active_pane

0x1a58,	// (0x00004621) tabs_2_passive_pane_ParamLimits

0x1a58,	// (0x00004621) tabs_2_passive_pane

0x1a16,	// (0x000045df) tabs_3_active_pane_ParamLimits

0x1a16,	// (0x000045df) tabs_3_active_pane

0x1a26,	// (0x000045ef) tabs_3_passive_pane_ParamLimits

0x1a26,	// (0x000045ef) tabs_3_passive_pane

0x1a37,	// (0x00004600) tabs_3_passive_pane_cp_ParamLimits

0x1a37,	// (0x00004600) tabs_3_passive_pane_cp

0x19d2,	// (0x0000459b) tabs_4_active_pane_ParamLimits

0x19d2,	// (0x0000459b) tabs_4_active_pane

0x19e3,	// (0x000045ac) tabs_4_passive_pane_ParamLimits

0x19e3,	// (0x000045ac) tabs_4_passive_pane

0x19f4,	// (0x000045bd) tabs_4_passive_pane_cp_ParamLimits

0x19f4,	// (0x000045bd) tabs_4_passive_pane_cp

0x1a05,	// (0x000045ce) tabs_4_passive_pane_cp2_ParamLimits

0x1a05,	// (0x000045ce) tabs_4_passive_pane_cp2

0x19ae,	// (0x00004577) tabs_2_long_active_pane_ParamLimits

0x19ae,	// (0x00004577) tabs_2_long_active_pane

0x19c0,	// (0x00004589) tabs_2_long_passive_pane_ParamLimits

0x19c0,	// (0x00004589) tabs_2_long_passive_pane

0x1969,	// (0x00004532) tabs_3_long_active_pane_ParamLimits

0x1969,	// (0x00004532) tabs_3_long_active_pane

0x1982,	// (0x0000454b) tabs_3_long_passive_pane_ParamLimits

0x1982,	// (0x0000454b) tabs_3_long_passive_pane

0x1995,	// (0x0000455e) tabs_3_long_passive_pane_cp_ParamLimits

0x1995,	// (0x0000455e) tabs_3_long_passive_pane_cp

0x190f,	// (0x000044d8) volume_small_pane_g1

0x1918,	// (0x000044e1) volume_small_pane_g2

0x1921,	// (0x000044ea) volume_small_pane_g3

0x192a,	// (0x000044f3) volume_small_pane_g4

0x1933,	// (0x000044fc) volume_small_pane_g5

0x193c,	// (0x00004505) volume_small_pane_g6

0x1945,	// (0x0000450e) volume_small_pane_g7

0x194e,	// (0x00004517) volume_small_pane_g8

0x1957,	// (0x00004520) volume_small_pane_g9

0x1960,	// (0x00004529) volume_small_pane_g10

0x0009,

0xf871,	// (0x0001243a) volume_small_pane_g

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp2_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp2

0x8fec,	// (0x0000bbb5) tabs_3_active_pane_g1

0x8ff4,	// (0x0000bbbd) tabs_3_active_pane_t1

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp2_ParamLimits

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp2

0x8fec,	// (0x0000bbb5) tabs_3_passive_pane_g1

0x8ff4,	// (0x0000bbbd) tabs_3_passive_pane_t1

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp3_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp3

0x9006,	// (0x0000bbcf) tabs_4_active_pane_g1

0x900e,	// (0x0000bbd7) tabs_4_active_pane_t1

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp3_ParamLimits

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp3

0x9006,	// (0x0000bbcf) tabs_4_1_passive_pane_g1

0x900e,	// (0x0000bbd7) tabs_4_1_passive_pane_t1

0xf47e,	// (0x00012047) list_highlight_pane_cp2

0xb6b8,	// (0x0000e281) list_set_pane_ParamLimits

0xb6b8,	// (0x0000e281) list_set_pane

0xb752,	// (0x0000e31b) main_pane_set_t1_ParamLimits

0xb752,	// (0x0000e31b) main_pane_set_t1

0xb772,	// (0x0000e33b) main_pane_set_t2_ParamLimits

0xb772,	// (0x0000e33b) main_pane_set_t2

0xb786,	// (0x0000e34f) main_pane_set_t3_ParamLimits

0xb786,	// (0x0000e34f) main_pane_set_t3

0xb798,	// (0x0000e361) main_pane_set_t4_ParamLimits

0xb798,	// (0x0000e361) main_pane_set_t4

0x0003,

0xf941,	// (0x0001250a) main_pane_set_t_ParamLimits

0xf941,	// (0x0001250a) main_pane_set_t

0xb7aa,	// (0x0000e373) setting_code_pane

0xb7b4,	// (0x0000e37d) setting_slider_graphic_pane

0xb7b4,	// (0x0000e37d) setting_slider_pane

0xb7b4,	// (0x0000e37d) setting_text_pane

0xb7b4,	// (0x0000e37d) setting_volume_pane

0x9020,	// (0x0000bbe9) volume_set_pane

0xe1b9,	// (0x00010d82) bg_set_opt_pane_cp

0x9028,	// (0x0000bbf1) setting_slider_pane_t1

0x9041,	// (0x0000bc0a) setting_slider_pane_t2

0x905b,	// (0x0000bc24) setting_slider_pane_t3

0x0002,

0xf539,	// (0x00012102) setting_slider_pane_t

0x9073,	// (0x0000bc3c) slider_set_pane

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp2

0xe1c7,	// (0x00010d90) setting_slider_graphic_pane_g1

0x9089,	// (0x0000bc52) setting_slider_graphic_pane_t1

0x9099,	// (0x0000bc62) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00012109) setting_slider_graphic_pane_t

0x90a9,	// (0x0000bc72) slider_set_pane_cp

0xe13d,	// (0x00010d06) input_focus_pane_cp1

0x224b,	// (0x00004e14) list_set_text_pane

0xdfc4,	// (0x00010b8d) setting_text_pane_g1

0xe13d,	// (0x00010d06) input_focus_pane_cp2

0xdfc4,	// (0x00010b8d) setting_code_pane_g1

0xe1d0,	// (0x00010d99) setting_code_pane_t1

0xe1de,	// (0x00010da7) set_text_pane_t1_ParamLimits

0xe1de,	// (0x00010da7) set_text_pane_t1

0xe6a1,	// (0x0001126a) set_opt_bg_pane_g1

0xe6a9,	// (0x00011272) set_opt_bg_pane_g2

0xb66d,	// (0x0000e236) set_opt_bg_pane_g3

0xe6b9,	// (0x00011282) set_opt_bg_pane_g4

0xe6c1,	// (0x0001128a) set_opt_bg_pane_g5

0xe6c9,	// (0x00011292) set_opt_bg_pane_g6

0xb677,	// (0x0000e240) set_opt_bg_pane_g7

0xb67f,	// (0x0000e248) set_opt_bg_pane_g8

0xb689,	// (0x0000e252) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x000124f7) set_opt_bg_pane_g

0xb608,	// (0x0000e1d1) slider_set_pane_g1

0x21c1,	// (0x00004d8a) slider_set_pane_g2

0x0006,

0xf91f,	// (0x000124e8) slider_set_pane_g

0xb51b,	// (0x0000e0e4) volume_set_pane_g1

0xb523,	// (0x0000e0ec) volume_set_pane_g2

0xb52b,	// (0x0000e0f4) volume_set_pane_g3

0xb533,	// (0x0000e0fc) volume_set_pane_g4

0xb53b,	// (0x0000e104) volume_set_pane_g5

0xb543,	// (0x0000e10c) volume_set_pane_g6

0xb54b,	// (0x0000e114) volume_set_pane_g7

0xb553,	// (0x0000e11c) volume_set_pane_g8

0xb55b,	// (0x0000e124) volume_set_pane_g9

0xb563,	// (0x0000e12c) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x000124c0) volume_set_pane_g

0x90b1,	// (0x0000bc7a) indicator_pane_ParamLimits

0x90b1,	// (0x0000bc7a) indicator_pane

0x90d9,	// (0x0000bca2) main_idle_pane_g2_ParamLimits

0x90d9,	// (0x0000bca2) main_idle_pane_g2

0x9111,	// (0x0000bcda) main_pane_idle_g1_ParamLimits

0x9111,	// (0x0000bcda) main_pane_idle_g1

0xe1f8,	// (0x00010dc1) popup_clock_digital_analogue_window_ParamLimits

0xe1f8,	// (0x00010dc1) popup_clock_digital_analogue_window

0x9138,	// (0x0000bd01) soft_indicator_pane_ParamLimits

0x9138,	// (0x0000bd01) soft_indicator_pane

0x915c,	// (0x0000bd25) wallpaper_pane_ParamLimits

0x915c,	// (0x0000bd25) wallpaper_pane

0xdfc4,	// (0x00010b8d) wallpaper_pane_g1

0x916e,	// (0x0000bd37) indicator_pane_g1_ParamLimits

0x916e,	// (0x0000bd37) indicator_pane_g1

0x27d7,	// (0x000053a0) navi_navi_icon_text_pane_srt_g1

0xe226,	// (0x00010def) soft_indicator_pane_t1

0xe240,	// (0x00010e09) aid_ps_area_pane

0x9184,	// (0x0000bd4d) aid_ps_clock_pane

0xe251,	// (0x00010e1a) aid_ps_indicator_pane

0xe25d,	// (0x00010e26) indicator_ps_pane_ParamLimits

0xe25d,	// (0x00010e26) indicator_ps_pane

0xe26c,	// (0x00010e35) power_save_pane_g1_ParamLimits

0xe26c,	// (0x00010e35) power_save_pane_g1

0xe278,	// (0x00010e41) power_save_pane_g2_ParamLimits

0xe278,	// (0x00010e41) power_save_pane_g2

0xdfce,	// (0x00010b97) aid_navinavi_width_pane

0xe240,	// (0x00010e09) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x0001210e) power_save_pane_g_ParamLimits

0xf545,	// (0x0001210e) power_save_pane_g

0xe286,	// (0x00010e4f) power_save_pane_t1_ParamLimits

0xe286,	// (0x00010e4f) power_save_pane_t1

0x9184,	// (0x0000bd4d) aid_ps_clock_pane_ParamLimits

0xe251,	// (0x00010e1a) aid_ps_indicator_pane_ParamLimits

0xe298,	// (0x00010e61) power_save_pane_t4_ParamLimits

0xe298,	// (0x00010e61) power_save_pane_t4

0x0001,

0xf54a,	// (0x00012113) power_save_pane_t_ParamLimits

0xf54a,	// (0x00012113) power_save_pane_t

0xe2c2,	// (0x00010e8b) power_save_t3_ParamLimits

0xe2c2,	// (0x00010e8b) power_save_t3

0xe2ad,	// (0x00010e76) power_save_t2_ParamLimits

0xe2ad,	// (0x00010e76) power_save_t2

0xe2d7,	// (0x00010ea0) indicator_ps_pane_g1

0x9192,	// (0x0000bd5b) ai_gene_pane_ParamLimits

0x9192,	// (0x0000bd5b) ai_gene_pane

0x91a9,	// (0x0000bd72) ai_links_pane_ParamLimits

0x91a9,	// (0x0000bd72) ai_links_pane

0x91c1,	// (0x0000bd8a) indicator_pane_cp1_ParamLimits

0x91c1,	// (0x0000bd8a) indicator_pane_cp1

0x91d0,	// (0x0000bd99) main_pane_idle_g1_cp_ParamLimits

0x91d0,	// (0x0000bd99) main_pane_idle_g1_cp

0x91e8,	// (0x0000bdb1) popup_ai_links_title_window

0x91f1,	// (0x0000bdba) soft_indicator_pane_cp1_ParamLimits

0x91f1,	// (0x0000bdba) soft_indicator_pane_cp1

0x1f38,	// (0x00004b01) ai_links_pane_g1

0x1f41,	// (0x00004b0a) grid_ai_links_pane

0xb4af,	// (0x0000e078) ai_gene_pane_1

0x1f26,	// (0x00004aef) ai_gene_pane_2

0x1f2f,	// (0x00004af8) list_highlight_pane_cp4

0xb48b,	// (0x0000e054) cell_ai_link_pane_ParamLimits

0xb48b,	// (0x0000e054) cell_ai_link_pane

0x1ef7,	// (0x00004ac0) cell_ai_link_pane_g1

0xe404,	// (0x00010fcd) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x0001249b) cell_ai_link_pane_g

0xe13d,	// (0x00010d06) grid_highlight_cp2

0xe13d,	// (0x00010d06) bg_popup_sub_pane_cp1

0xe2ee,	// (0x00010eb7) popup_ai_links_title_window_t1

0x1e47,	// (0x00004a10) ai_gene_pane_1_g1_ParamLimits

0x1e47,	// (0x00004a10) ai_gene_pane_1_g1

0x1e53,	// (0x00004a1c) ai_gene_pane_1_g2_ParamLimits

0x1e53,	// (0x00004a1c) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x00012491) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x00012491) ai_gene_pane_1_g

0x1e60,	// (0x00004a29) ai_gene_pane_1_t1_ParamLimits

0x1e60,	// (0x00004a29) ai_gene_pane_1_t1

0x1e94,	// (0x00004a5d) grid_ai_soft_ind_pane

0x1e32,	// (0x000049fb) ai_gene_pane_2_t1_ParamLimits

0x1e32,	// (0x000049fb) ai_gene_pane_2_t1

0x9205,	// (0x0000bdce) main_pane_empty_t1_ParamLimits

0x9205,	// (0x0000bdce) main_pane_empty_t1

0x921d,	// (0x0000bde6) main_pane_empty_t2_ParamLimits

0x921d,	// (0x0000bde6) main_pane_empty_t2

0x9232,	// (0x0000bdfb) main_pane_empty_t3_ParamLimits

0x9232,	// (0x0000bdfb) main_pane_empty_t3

0x9244,	// (0x0000be0d) main_pane_empty_t4_ParamLimits

0x9244,	// (0x0000be0d) main_pane_empty_t4

0x9256,	// (0x0000be1f) main_pane_empty_t5_ParamLimits

0x9256,	// (0x0000be1f) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00012118) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00012118) main_pane_empty_t

0xe726,	// (0x000112ef) bg_popup_window_pane_ParamLimits

0xe726,	// (0x000112ef) bg_popup_window_pane

0xb405,	// (0x0000dfce) find_popup_pane_cp2_ParamLimits

0xb405,	// (0x0000dfce) find_popup_pane_cp2

0x1bae,	// (0x00004777) heading_pane_ParamLimits

0x1bae,	// (0x00004777) heading_pane

0xe13d,	// (0x00010d06) bg_popup_sub_pane

0xb37e,	// (0x0000df47) bg_popup_window_pane_g1_ParamLimits

0xb37e,	// (0x0000df47) bg_popup_window_pane_g1

0xb38d,	// (0x0000df56) bg_popup_window_pane_g2_ParamLimits

0xb38d,	// (0x0000df56) bg_popup_window_pane_g2

0xb399,	// (0x0000df62) bg_popup_window_pane_g3_ParamLimits

0xb399,	// (0x0000df62) bg_popup_window_pane_g3

0xb3a5,	// (0x0000df6e) bg_popup_window_pane_g4_ParamLimits

0xb3a5,	// (0x0000df6e) bg_popup_window_pane_g4

0xb3b4,	// (0x0000df7d) bg_popup_window_pane_g5_ParamLimits

0xb3b4,	// (0x0000df7d) bg_popup_window_pane_g5

0xb3c4,	// (0x0000df8d) bg_popup_window_pane_g6_ParamLimits

0xb3c4,	// (0x0000df8d) bg_popup_window_pane_g6

0xb3d0,	// (0x0000df99) bg_popup_window_pane_g7_ParamLimits

0xb3d0,	// (0x0000df99) bg_popup_window_pane_g7

0xb3df,	// (0x0000dfa8) bg_popup_window_pane_g8_ParamLimits

0xb3df,	// (0x0000dfa8) bg_popup_window_pane_g8

0xb3ee,	// (0x0000dfb7) bg_popup_window_pane_g9_ParamLimits

0xb3ee,	// (0x0000dfb7) bg_popup_window_pane_g9

0x1b77,	// (0x00004740) bg_popup_window_pane_g10_ParamLimits

0x1b77,	// (0x00004740) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00012459) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00012459) bg_popup_window_pane_g

0x1aa0,	// (0x00004669) bg_popup_heading_pane_ParamLimits

0x1aa0,	// (0x00004669) bg_popup_heading_pane

0x271a,	// (0x000052e3) tabs_4_passive_pane_cp_srt_ParamLimits

0x271a,	// (0x000052e3) tabs_4_passive_pane_cp_srt

0x272c,	// (0x000052f5) tabs_4_passive_pane_srt_ParamLimits

0x1ab4,	// (0x0000467d) heading_pane_g2

0x272c,	// (0x000052f5) tabs_4_passive_pane_srt

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp3_srt

0x1abc,	// (0x00004685) heading_pane_t1_ParamLimits

0x1abc,	// (0x00004685) heading_pane_t1

0x1ad3,	// (0x0000469c) heading_pane_t2_ParamLimits

0x1ad3,	// (0x0000469c) heading_pane_t2

0x0001,

0xf88b,	// (0x00012454) heading_pane_t_ParamLimits

0xf88b,	// (0x00012454) heading_pane_t

0x1484,	// (0x0000404d) bg_popup_heading_pane_g1

0x1533,	// (0x000040fc) bg_popup_heading_pane_g2

0x153d,	// (0x00004106) bg_popup_heading_pane_g3

0x1547,	// (0x00004110) bg_popup_heading_pane_g4

0x1551,	// (0x0000411a) bg_popup_heading_pane_g5

0x155b,	// (0x00004124) bg_popup_heading_pane_g6

0x1563,	// (0x0000412c) bg_popup_heading_pane_g7

0x156b,	// (0x00004134) bg_popup_heading_pane_g8

0x1575,	// (0x0000413e) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00012410) bg_popup_heading_pane_g

0x0a70,	// (0x00003639) bg_popup_sub_pane_g1

0x0a78,	// (0x00003641) bg_popup_sub_pane_g2

0x0a80,	// (0x00003649) bg_popup_sub_pane_g3

0x0a88,	// (0x00003651) bg_popup_sub_pane_g4

0x0a90,	// (0x00003659) bg_popup_sub_pane_g5

0x0a98,	// (0x00003661) bg_popup_sub_pane_g6

0x0aa0,	// (0x00003669) bg_popup_sub_pane_g7

0x0aa8,	// (0x00003671) bg_popup_sub_pane_g8

0x0ab0,	// (0x00003679) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x000123ea) bg_popup_sub_pane_g

0xe1ab,	// (0x00010d74) bg_popup_window_pane_cp5_ParamLimits

0xe1ab,	// (0x00010d74) bg_popup_window_pane_cp5

0xe30b,	// (0x00010ed4) popup_note_window_g1_ParamLimits

0xe30b,	// (0x00010ed4) popup_note_window_g1

0xe317,	// (0x00010ee0) popup_note_window_t1_ParamLimits

0xe317,	// (0x00010ee0) popup_note_window_t1

0xe32d,	// (0x00010ef6) popup_note_window_t2_ParamLimits

0xe32d,	// (0x00010ef6) popup_note_window_t2

0xe343,	// (0x00010f0c) popup_note_window_t3_ParamLimits

0xe343,	// (0x00010f0c) popup_note_window_t3

0xe359,	// (0x00010f22) popup_note_window_t4_ParamLimits

0xe359,	// (0x00010f22) popup_note_window_t4

0xe381,	// (0x00010f4a) popup_note_window_t5_ParamLimits

0xe381,	// (0x00010f4a) popup_note_window_t5

0x0004,

0xf55a,	// (0x00012123) popup_note_window_t_ParamLimits

0xf55a,	// (0x00012123) popup_note_window_t

0xe3a5,	// (0x00010f6e) bg_popup_window_pane_cp6_ParamLimits

0xe3a5,	// (0x00010f6e) bg_popup_window_pane_cp6

0x1400,	// (0x00003fc9) popup_note_image_window_g1_ParamLimits

0x1400,	// (0x00003fc9) popup_note_image_window_g1

0xb223,	// (0x0000ddec) popup_note_image_window_g2_ParamLimits

0xb223,	// (0x0000ddec) popup_note_image_window_g2

0x0001,

0xf815,	// (0x000123de) popup_note_image_window_g_ParamLimits

0xf815,	// (0x000123de) popup_note_image_window_g

0x1425,	// (0x00003fee) popup_note_image_window_t1_ParamLimits

0x1425,	// (0x00003fee) popup_note_image_window_t1

0x143e,	// (0x00004007) popup_note_image_window_t2_ParamLimits

0x143e,	// (0x00004007) popup_note_image_window_t2

0x1457,	// (0x00004020) popup_note_image_window_t3_ParamLimits

0x1457,	// (0x00004020) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x000123e3) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x000123e3) popup_note_image_window_t

0x12c9,	// (0x00003e92) bg_popup_window_pane_cp7_ParamLimits

0x12c9,	// (0x00003e92) bg_popup_window_pane_cp7

0x12f9,	// (0x00003ec2) popup_note_wait_window_g1_ParamLimits

0x12f9,	// (0x00003ec2) popup_note_wait_window_g1

0x1305,	// (0x00003ece) popup_note_wait_window_g2_ParamLimits

0x1305,	// (0x00003ece) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x000123cc) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x000123cc) popup_note_wait_window_g

0x131d,	// (0x00003ee6) popup_note_wait_window_t1_ParamLimits

0x131d,	// (0x00003ee6) popup_note_wait_window_t1

0xb1c4,	// (0x0000dd8d) popup_note_wait_window_t2_ParamLimits

0xb1c4,	// (0x0000dd8d) popup_note_wait_window_t2

0xb1e1,	// (0x0000ddaa) popup_note_wait_window_t3_ParamLimits

0xb1e1,	// (0x0000ddaa) popup_note_wait_window_t3

0xb1f4,	// (0x0000ddbd) popup_note_wait_window_t4_ParamLimits

0xb1f4,	// (0x0000ddbd) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x000123d3) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x000123d3) popup_note_wait_window_t

0x1399,	// (0x00003f62) wait_bar_pane_ParamLimits

0x1399,	// (0x00003f62) wait_bar_pane

0xe13d,	// (0x00010d06) wait_anim_pane

0xe13d,	// (0x00010d06) wait_border_pane

0xdfc4,	// (0x00010b8d) wait_anim_pane_g1

0xdfc4,	// (0x00010b8d) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x00012293) wait_anim_pane_g

0x1275,	// (0x00003e3e) wait_border_pane_g1

0x1280,	// (0x00003e49) wait_border_pane_g2

0x1289,	// (0x00003e52) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x000123c5) wait_border_pane_g

0x10e0,	// (0x00003ca9) bg_popup_window_pane_cp16_ParamLimits

0x10e0,	// (0x00003ca9) bg_popup_window_pane_cp16

0xb174,	// (0x0000dd3d) indicator_popup_pane_cp4_ParamLimits

0xb174,	// (0x0000dd3d) indicator_popup_pane_cp4

0x11f4,	// (0x00003dbd) popup_query_data_window_t1_ParamLimits

0x11f4,	// (0x00003dbd) popup_query_data_window_t1

0x1206,	// (0x00003dcf) popup_query_data_window_t2_ParamLimits

0x1206,	// (0x00003dcf) popup_query_data_window_t2

0x121f,	// (0x00003de8) popup_query_data_window_t3_ParamLimits

0x121f,	// (0x00003de8) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x000123be) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x000123be) popup_query_data_window_t

0xb188,	// (0x0000dd51) query_popup_data_pane_ParamLimits

0xb188,	// (0x0000dd51) query_popup_data_pane

0xb19c,	// (0x0000dd65) query_popup_data_pane_cp1_ParamLimits

0xb19c,	// (0x0000dd65) query_popup_data_pane_cp1

0x10e0,	// (0x00003ca9) bg_popup_window_pane_cp10_ParamLimits

0x10e0,	// (0x00003ca9) bg_popup_window_pane_cp10

0xb0ef,	// (0x0000dcb8) indicator_popup_pane_ParamLimits

0xb0ef,	// (0x0000dcb8) indicator_popup_pane

0xb111,	// (0x0000dcda) popup_query_code_window_t1_ParamLimits

0xb111,	// (0x0000dcda) popup_query_code_window_t1

0xb12b,	// (0x0000dcf4) popup_query_code_window_t2_ParamLimits

0xb12b,	// (0x0000dcf4) popup_query_code_window_t2

0x1197,	// (0x00003d60) popup_query_code_window_t3_ParamLimits

0x1197,	// (0x00003d60) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x000123b7) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x000123b7) popup_query_code_window_t

0x11c6,	// (0x00003d8f) query_popup_pane_ParamLimits

0x11c6,	// (0x00003d8f) query_popup_pane

0xe3a5,	// (0x00010f6e) bg_popup_window_pane_cp15_ParamLimits

0xe3a5,	// (0x00010f6e) bg_popup_window_pane_cp15

0x928e,	// (0x0000be57) indicator_popup_pane_cp1_ParamLimits

0x928e,	// (0x0000be57) indicator_popup_pane_cp1

0x92a1,	// (0x0000be6a) indicator_popup_pane_cp2_ParamLimits

0x92a1,	// (0x0000be6a) indicator_popup_pane_cp2

0x92b4,	// (0x0000be7d) popup_query_data_code_window_g1_ParamLimits

0x92b4,	// (0x0000be7d) popup_query_data_code_window_g1

0xe3c3,	// (0x00010f8c) popup_query_data_code_window_t1_ParamLimits

0xe3c3,	// (0x00010f8c) popup_query_data_code_window_t1

0xe3d5,	// (0x00010f9e) popup_query_data_code_window_t2_ParamLimits

0xe3d5,	// (0x00010f9e) popup_query_data_code_window_t2

0x92c7,	// (0x0000be90) popup_query_data_code_window_t3_ParamLimits

0x92c7,	// (0x0000be90) popup_query_data_code_window_t3

0x92dd,	// (0x0000bea6) popup_query_data_code_window_t4_ParamLimits

0x92dd,	// (0x0000bea6) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x0001212e) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x0001212e) popup_query_data_code_window_t

0xf0f4,	// (0x00011cbd) list_single_midp_graphic_pane_g3

0x92f5,	// (0x0000bebe) query_popup_data_pane_cp2_ParamLimits

0x9308,	// (0x0000bed1) query_popup_pane_cp2_ParamLimits

0x9308,	// (0x0000bed1) query_popup_pane_cp2

0xe13d,	// (0x00010d06) bg_popup_window_pane_cp11

0x10c4,	// (0x00003c8d) heading_pane_cp5

0x10cc,	// (0x00003c95) listscroll_popup_info_pane

0xe13d,	// (0x00010d06) input_focus_pane_cp3

0xe3e7,	// (0x00010fb0) query_popup_pane_t1

0xe3f5,	// (0x00010fbe) list_popup_info_pane_ParamLimits

0xe3f5,	// (0x00010fbe) list_popup_info_pane

0xe404,	// (0x00010fcd) listscroll_popup_info_pane_g1

0xe40c,	// (0x00010fd5) scroll_pane_cp7

0x931b,	// (0x0000bee4) popup_info_list_pane_t1_ParamLimits

0x931b,	// (0x0000bee4) popup_info_list_pane_t1

0x9335,	// (0x0000befe) popup_info_list_pane_t2_ParamLimits

0x9335,	// (0x0000befe) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00012137) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00012137) popup_info_list_pane_t

0xe13d,	// (0x00010d06) bg_popup_window_pane_cp12

0xb9ec,	// (0x0000e5b5) find_popup_pane

0xe1b9,	// (0x00010d82) bg_popup_window_pane_cp3

0xe416,	// (0x00010fdf) heading_pane_cp3

0xe425,	// (0x00010fee) listscroll_popup_graphic_pane

0xe13d,	// (0x00010d06) bg_popup_window_pane_cp4

0x939f,	// (0x0000bf68) heading_pane_cp4

0xe435,	// (0x00010ffe) listscroll_popup_colour_pane

0x93a9,	// (0x0000bf72) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x93a9,	// (0x0000bf72) cell_large_graphic_colour_none_popup_pane

0x93bd,	// (0x0000bf86) grid_large_graphic_colour_popup_pane_ParamLimits

0x93bd,	// (0x0000bf86) grid_large_graphic_colour_popup_pane

0x93e1,	// (0x0000bfaa) listscroll_popup_colour_pane_g1_ParamLimits

0x93e1,	// (0x0000bfaa) listscroll_popup_colour_pane_g1

0x93f8,	// (0x0000bfc1) listscroll_popup_colour_pane_g2_ParamLimits

0x93f8,	// (0x0000bfc1) listscroll_popup_colour_pane_g2

0x940f,	// (0x0000bfd8) listscroll_popup_colour_pane_g3_ParamLimits

0x940f,	// (0x0000bfd8) listscroll_popup_colour_pane_g3

0x941f,	// (0x0000bfe8) listscroll_popup_colour_pane_g4_ParamLimits

0x941f,	// (0x0000bfe8) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x0001213c) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x0001213c) listscroll_popup_colour_pane_g

0xe43d,	// (0x00011006) scroll_pane_cp6_ParamLimits

0xe43d,	// (0x00011006) scroll_pane_cp6

0x942f,	// (0x0000bff8) cell_large_graphic_colour_popup_pane_ParamLimits

0x942f,	// (0x0000bff8) cell_large_graphic_colour_popup_pane

0x944e,	// (0x0000c017) cell_large_graphic_colour_none_popup_pane_t1

0xe13d,	// (0x00010d06) grid_highlight_pane_cp5

0xe44f,	// (0x00011018) cell_large_graphic_colour_popup_pane_g1

0xe457,	// (0x00011020) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x00012145) cell_large_graphic_colour_popup_pane_g

0xe45f,	// (0x00011028) cell_large_graphic_colour_popup_pane_g2_copy1

0xe468,	// (0x00011031) grid_highlight_pane_cp4

0xe470,	// (0x00011039) bg_popup_window_pane_cp8_ParamLimits

0xe470,	// (0x00011039) bg_popup_window_pane_cp8

0x945d,	// (0x0000c026) popup_snote_single_text_window_g1_ParamLimits

0x945d,	// (0x0000c026) popup_snote_single_text_window_g1

0x946f,	// (0x0000c038) popup_snote_single_text_window_t1_ParamLimits

0x946f,	// (0x0000c038) popup_snote_single_text_window_t1

0x9482,	// (0x0000c04b) popup_snote_single_text_window_t2_ParamLimits

0x9482,	// (0x0000c04b) popup_snote_single_text_window_t2

0x9495,	// (0x0000c05e) popup_snote_single_text_window_t3_ParamLimits

0x9495,	// (0x0000c05e) popup_snote_single_text_window_t3

0x94ce,	// (0x0000c097) popup_snote_single_text_window_t4_ParamLimits

0x94ce,	// (0x0000c097) popup_snote_single_text_window_t4

0x9502,	// (0x0000c0cb) popup_snote_single_text_window_t5_ParamLimits

0x9502,	// (0x0000c0cb) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x0001214a) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x0001214a) popup_snote_single_text_window_t

0xe48b,	// (0x00011054) bg_popup_window_pane_cp9_ParamLimits

0xe48b,	// (0x00011054) bg_popup_window_pane_cp9

0x945d,	// (0x0000c026) popup_snote_single_graphic_window_g1_ParamLimits

0x945d,	// (0x0000c026) popup_snote_single_graphic_window_g1

0xe499,	// (0x00011062) popup_snote_single_graphic_window_g2_ParamLimits

0xe499,	// (0x00011062) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x00012155) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x00012155) popup_snote_single_graphic_window_g

0xe4a5,	// (0x0001106e) popup_snote_single_graphic_window_t1_ParamLimits

0xe4a5,	// (0x0001106e) popup_snote_single_graphic_window_t1

0xe4b8,	// (0x00011081) popup_snote_single_graphic_window_t2_ParamLimits

0xe4b8,	// (0x00011081) popup_snote_single_graphic_window_t2

0x9495,	// (0x0000c05e) popup_snote_single_graphic_window_t3_ParamLimits

0x9495,	// (0x0000c05e) popup_snote_single_graphic_window_t3

0x94ce,	// (0x0000c097) popup_snote_single_graphic_window_t4_ParamLimits

0x94ce,	// (0x0000c097) popup_snote_single_graphic_window_t4

0x9531,	// (0x0000c0fa) popup_snote_single_graphic_window_t5_ParamLimits

0x9531,	// (0x0000c0fa) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x0001215a) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x0001215a) popup_snote_single_graphic_window_t

0x2698,	// (0x00005261) grid_graphic_popup_pane_ParamLimits

0x2698,	// (0x00005261) grid_graphic_popup_pane

0x26c2,	// (0x0000528b) listscroll_popup_graphic_pane_g1_ParamLimits

0x26c2,	// (0x0000528b) listscroll_popup_graphic_pane_g1

0xb937,	// (0x0000e500) listscroll_popup_graphic_pane_g2_ParamLimits

0xb937,	// (0x0000e500) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x00012534) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x00012534) listscroll_popup_graphic_pane_g

0x26ea,	// (0x000052b3) scroll_pane_cp5

0xb8f6,	// (0x0000e4bf) cell_graphic_popup_pane_ParamLimits

0xb8f6,	// (0x0000e4bf) cell_graphic_popup_pane

0x260f,	// (0x000051d8) cell_graphic_popup_pane_g1

0x2617,	// (0x000051e0) cell_graphic_popup_pane_g2

0xe45f,	// (0x00011028) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x0001252d) cell_graphic_popup_pane_g

0x2620,	// (0x000051e9) cell_graphic_popup_pane_t2

0xe468,	// (0x00011031) grid_highlight_pane_cp3

0xe4dd,	// (0x000110a6) list_gen_pane_ParamLimits

0xe4dd,	// (0x000110a6) list_gen_pane

0xe505,	// (0x000110ce) scroll_pane

0xb860,	// (0x0000e429) bg_list_pane_g1_ParamLimits

0xb860,	// (0x0000e429) bg_list_pane_g1

0xb87b,	// (0x0000e444) bg_list_pane_g2_ParamLimits

0xb87b,	// (0x0000e444) bg_list_pane_g2

0xb88e,	// (0x0000e457) bg_list_pane_g3_ParamLimits

0xb88e,	// (0x0000e457) bg_list_pane_g3

0xb8a0,	// (0x0000e469) bg_list_pane_g4_ParamLimits

0xb8a0,	// (0x0000e469) bg_list_pane_g4

0xb8b2,	// (0x0000e47b) bg_list_pane_g5_ParamLimits

0xb8b2,	// (0x0000e47b) bg_list_pane_g5

0x0004,

0xf959,	// (0x00012522) bg_list_pane_g_ParamLimits

0xf959,	// (0x00012522) bg_list_pane_g

0xb803,	// (0x0000e3cc) list_double2_graphic_large_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double2_graphic_large_graphic_pane

0xb803,	// (0x0000e3cc) list_double2_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double2_graphic_pane

0xb803,	// (0x0000e3cc) list_double2_large_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double2_large_graphic_pane

0xb816,	// (0x0000e3df) list_double2_pane_ParamLimits

0xb816,	// (0x0000e3df) list_double2_pane

0xb803,	// (0x0000e3cc) list_double_graphic_heading_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_graphic_heading_pane

0xb803,	// (0x0000e3cc) list_double_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_graphic_pane

0xb803,	// (0x0000e3cc) list_double_heading_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_heading_pane

0xb803,	// (0x0000e3cc) list_double_large_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_large_graphic_pane

0xb803,	// (0x0000e3cc) list_double_number_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_number_pane

0xb803,	// (0x0000e3cc) list_double_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_pane

0xb803,	// (0x0000e3cc) list_double_time_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_double_time_pane

0xb803,	// (0x0000e3cc) list_setting_number_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_setting_number_pane

0xb803,	// (0x0000e3cc) list_setting_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_setting_pane

0x9b0c,	// (0x0000c6d5) list_single_2graphic_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_2graphic_pane

0x9b0c,	// (0x0000c6d5) list_single_graphic_heading_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_graphic_heading_pane

0x9b0c,	// (0x0000c6d5) list_single_graphic_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_graphic_pane

0x9b0c,	// (0x0000c6d5) list_single_heading_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_heading_pane

0xb803,	// (0x0000e3cc) list_single_large_graphic_pane_ParamLimits

0xb803,	// (0x0000e3cc) list_single_large_graphic_pane

0x9b0c,	// (0x0000c6d5) list_single_number_heading_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_number_heading_pane

0x9b0c,	// (0x0000c6d5) list_single_number_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_number_pane

0x9b0c,	// (0x0000c6d5) list_single_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_pane

0xe13d,	// (0x00010d06) list_highlight_pane_cp1

0xf187,	// (0x00011d50) list_single_pane_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_pane_g1

0x090a,	// (0x000034d3) list_single_pane_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_pane_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_pane_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_pane_g

0x47bc,	// (0x00007385) list_single_pane_t1_ParamLimits

0x47bc,	// (0x00007385) list_single_pane_t1

0xf187,	// (0x00011d50) list_single_number_pane_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_number_pane_g1

0x090a,	// (0x000034d3) list_single_number_pane_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_number_pane_g

0x09fe,	// (0x000035c7) list_single_number_pane_t1_ParamLimits

0x09fe,	// (0x000035c7) list_single_number_pane_t1

0xb5a3,	// (0x0000e16c) list_single_number_pane_t2_ParamLimits

0xb5a3,	// (0x0000e16c) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x000124e3) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x000124e3) list_single_number_pane_t

0x09f2,	// (0x000035bb) list_single_graphic_pane_g1_ParamLimits

0x09f2,	// (0x000035bb) list_single_graphic_pane_g1

0xf187,	// (0x00011d50) list_single_graphic_pane_g2_ParamLimits

0xf187,	// (0x00011d50) list_single_graphic_pane_g2

0x090a,	// (0x000034d3) list_single_graphic_pane_g3_ParamLimits

0x090a,	// (0x000034d3) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x00012165) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x00012165) list_single_graphic_pane_g

0x09fe,	// (0x000035c7) list_single_graphic_pane_t1_ParamLimits

0x09fe,	// (0x000035c7) list_single_graphic_pane_t1

0xf187,	// (0x00011d50) list_single_heading_pane_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_heading_pane_g1

0x090a,	// (0x000034d3) list_single_heading_pane_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_heading_pane_g

0x956a,	// (0x0000c133) list_single_heading_pane_t1_ParamLimits

0x956a,	// (0x0000c133) list_single_heading_pane_t1

0x9580,	// (0x0000c149) list_single_heading_pane_t2_ParamLimits

0x9580,	// (0x0000c149) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x00012171) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x00012171) list_single_heading_pane_t

0xf187,	// (0x00011d50) list_single_number_heading_pane_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_number_heading_pane_g1

0x090a,	// (0x000034d3) list_single_number_heading_pane_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_number_heading_pane_g

0x956a,	// (0x0000c133) list_single_number_heading_pane_t1_ParamLimits

0x956a,	// (0x0000c133) list_single_number_heading_pane_t1

0x9592,	// (0x0000c15b) list_single_number_heading_pane_t2_ParamLimits

0x9592,	// (0x0000c15b) list_single_number_heading_pane_t2

0x95a4,	// (0x0000c16d) list_single_number_heading_pane_t3_ParamLimits

0x95a4,	// (0x0000c16d) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x00012176) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x00012176) list_single_number_heading_pane_t

0x95b6,	// (0x0000c17f) list_single_graphic_heading_pane_g1_ParamLimits

0x95b6,	// (0x0000c17f) list_single_graphic_heading_pane_g1

0x95c2,	// (0x0000c18b) list_single_graphic_heading_pane_g4_ParamLimits

0x95c2,	// (0x0000c18b) list_single_graphic_heading_pane_g4

0x090a,	// (0x000034d3) list_single_graphic_heading_pane_g5_ParamLimits

0x090a,	// (0x000034d3) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x0001217d) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x0001217d) list_single_graphic_heading_pane_g

0x956a,	// (0x0000c133) list_single_graphic_heading_pane_t1_ParamLimits

0x956a,	// (0x0000c133) list_single_graphic_heading_pane_t1

0x95d3,	// (0x0000c19c) list_single_graphic_heading_pane_t2_ParamLimits

0x95d3,	// (0x0000c19c) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x00012184) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x00012184) list_single_graphic_heading_pane_t

0x2e77,	// (0x00005a40) list_single_large_graphic_pane_g1_ParamLimits

0x2e77,	// (0x00005a40) list_single_large_graphic_pane_g1

0x2e83,	// (0x00005a4c) list_single_large_graphic_pane_g2_ParamLimits

0x2e83,	// (0x00005a4c) list_single_large_graphic_pane_g2

0x2e8f,	// (0x00005a58) list_single_large_graphic_pane_g3_ParamLimits

0x2e8f,	// (0x00005a58) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x00012189) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x00012189) list_single_large_graphic_pane_g

0x1280,	// (0x00003e49) wait_border_pane_g2_copy1

0x95e5,	// (0x0000c1ae) list_single_large_graphic_pane_g4_cp2

0x2e9b,	// (0x00005a64) list_single_large_graphic_pane_t1_ParamLimits

0x2e9b,	// (0x00005a64) list_single_large_graphic_pane_t1

0xed5d,	// (0x00011926) list_double_pane_g1_ParamLimits

0xed5d,	// (0x00011926) list_double_pane_g1

0xe539,	// (0x00011102) list_double_pane_g2_ParamLimits

0xe539,	// (0x00011102) list_double_pane_g2

0x0001,

0xf5c7,	// (0x00012190) list_double_pane_g_ParamLimits

0xf5c7,	// (0x00012190) list_double_pane_g

0x95ed,	// (0x0000c1b6) list_double_pane_t1_ParamLimits

0x95ed,	// (0x0000c1b6) list_double_pane_t1

0x9603,	// (0x0000c1cc) list_double_pane_t2_ParamLimits

0x9603,	// (0x0000c1cc) list_double_pane_t2

0x0001,

0xf5cc,	// (0x00012195) list_double_pane_t_ParamLimits

0xf5cc,	// (0x00012195) list_double_pane_t

0x9615,	// (0x0000c1de) list_double2_pane_g1_ParamLimits

0x9615,	// (0x0000c1de) list_double2_pane_g1

0x9626,	// (0x0000c1ef) list_double2_pane_g2_ParamLimits

0x9626,	// (0x0000c1ef) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x0001219a) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x0001219a) list_double2_pane_g

0x9632,	// (0x0000c1fb) list_double2_pane_t1_ParamLimits

0x9632,	// (0x0000c1fb) list_double2_pane_t1

0x9648,	// (0x0000c211) list_double2_pane_t2_ParamLimits

0x9648,	// (0x0000c211) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x0001219f) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x0001219f) list_double2_pane_t

0xed5d,	// (0x00011926) list_double_number_pane_g1_ParamLimits

0xed5d,	// (0x00011926) list_double_number_pane_g1

0xe539,	// (0x00011102) list_double_number_pane_g2_ParamLimits

0xe539,	// (0x00011102) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x00012190) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x00012190) list_double_number_pane_g

0x965a,	// (0x0000c223) list_double_number_pane_t1_ParamLimits

0x965a,	// (0x0000c223) list_double_number_pane_t1

0x966c,	// (0x0000c235) list_double_number_pane_t2_ParamLimits

0x966c,	// (0x0000c235) list_double_number_pane_t2

0x9682,	// (0x0000c24b) list_double_number_pane_t3_ParamLimits

0x9682,	// (0x0000c24b) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000121a4) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000121a4) list_double_number_pane_t

0x9694,	// (0x0000c25d) list_double_graphic_pane_g1_ParamLimits

0x9694,	// (0x0000c25d) list_double_graphic_pane_g1

0x96a0,	// (0x0000c269) list_double_graphic_pane_g2_ParamLimits

0x96a0,	// (0x0000c269) list_double_graphic_pane_g2

0x96af,	// (0x0000c278) list_double_graphic_pane_g3_ParamLimits

0x96af,	// (0x0000c278) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000121ab) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000121ab) list_double_graphic_pane_g

0x95ed,	// (0x0000c1b6) list_double_graphic_pane_t1_ParamLimits

0x95ed,	// (0x0000c1b6) list_double_graphic_pane_t1

0x9603,	// (0x0000c1cc) list_double_graphic_pane_t2_ParamLimits

0x9603,	// (0x0000c1cc) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x00012195) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x00012195) list_double_graphic_pane_t

0x96c7,	// (0x0000c290) list_double2_graphic_pane_g1_ParamLimits

0x96c7,	// (0x0000c290) list_double2_graphic_pane_g1

0x96d3,	// (0x0000c29c) list_double2_graphic_pane_g2_ParamLimits

0x96d3,	// (0x0000c29c) list_double2_graphic_pane_g2

0x96df,	// (0x0000c2a8) list_double2_graphic_pane_g3_ParamLimits

0x96df,	// (0x0000c2a8) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000121b4) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000121b4) list_double2_graphic_pane_g

0x96eb,	// (0x0000c2b4) list_double2_graphic_pane_t1_ParamLimits

0x96eb,	// (0x0000c2b4) list_double2_graphic_pane_t1

0x9701,	// (0x0000c2ca) list_double2_graphic_pane_t2_ParamLimits

0x9701,	// (0x0000c2ca) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x000121bb) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x000121bb) list_double2_graphic_pane_t

0x9713,	// (0x0000c2dc) list_double_large_graphic_pane_g1_ParamLimits

0x9713,	// (0x0000c2dc) list_double_large_graphic_pane_g1

0x9732,	// (0x0000c2fb) list_double_large_graphic_pane_g2_ParamLimits

0x9732,	// (0x0000c2fb) list_double_large_graphic_pane_g2

0xe539,	// (0x00011102) list_double_large_graphic_pane_g3_ParamLimits

0xe539,	// (0x00011102) list_double_large_graphic_pane_g3

0x9743,	// (0x0000c30c) list_double_large_graphic_pane_g4_ParamLimits

0x9743,	// (0x0000c30c) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x000121c0) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x000121c0) list_double_large_graphic_pane_g

0x9755,	// (0x0000c31e) list_double_large_graphic_pane_t1_ParamLimits

0x9755,	// (0x0000c31e) list_double_large_graphic_pane_t1

0x976e,	// (0x0000c337) list_double_large_graphic_pane_t2_ParamLimits

0x976e,	// (0x0000c337) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x000121cb) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x000121cb) list_double_large_graphic_pane_t

0x9780,	// (0x0000c349) list_double2_large_graphic_pane_g1_ParamLimits

0x9780,	// (0x0000c349) list_double2_large_graphic_pane_g1

0x978c,	// (0x0000c355) list_double2_large_graphic_pane_g2_ParamLimits

0x978c,	// (0x0000c355) list_double2_large_graphic_pane_g2

0x96df,	// (0x0000c2a8) list_double2_large_graphic_pane_g3_ParamLimits

0x96df,	// (0x0000c2a8) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x000121d0) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x000121d0) list_double2_large_graphic_pane_g

0x96eb,	// (0x0000c2b4) list_double2_large_graphic_pane_t1_ParamLimits

0x96eb,	// (0x0000c2b4) list_double2_large_graphic_pane_t1

0x9701,	// (0x0000c2ca) list_double2_large_graphic_pane_t2_ParamLimits

0x9701,	// (0x0000c2ca) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x000121bb) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x000121bb) list_double2_large_graphic_pane_t

0x979d,	// (0x0000c366) list_double_heading_pane_g1_ParamLimits

0x979d,	// (0x0000c366) list_double_heading_pane_g1

0x97ae,	// (0x0000c377) list_double_heading_pane_g2_ParamLimits

0x97ae,	// (0x0000c377) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x000121d7) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x000121d7) list_double_heading_pane_g

0x97ba,	// (0x0000c383) list_double_heading_pane_t1_ParamLimits

0x97ba,	// (0x0000c383) list_double_heading_pane_t1

0x9701,	// (0x0000c2ca) list_double_heading_pane_t2_ParamLimits

0x9701,	// (0x0000c2ca) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x000121dc) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x000121dc) list_double_heading_pane_t

0x97d0,	// (0x0000c399) list_double_graphic_heading_pane_g1_ParamLimits

0x97d0,	// (0x0000c399) list_double_graphic_heading_pane_g1

0x979d,	// (0x0000c366) list_double_graphic_heading_pane_g2_ParamLimits

0x979d,	// (0x0000c366) list_double_graphic_heading_pane_g2

0x97ae,	// (0x0000c377) list_double_graphic_heading_pane_g3_ParamLimits

0x97ae,	// (0x0000c377) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x000121e1) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x000121e1) list_double_graphic_heading_pane_g

0x97ba,	// (0x0000c383) list_double_graphic_heading_pane_t1_ParamLimits

0x97ba,	// (0x0000c383) list_double_graphic_heading_pane_t1

0x9701,	// (0x0000c2ca) list_double_graphic_heading_pane_t2_ParamLimits

0x9701,	// (0x0000c2ca) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x000121dc) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x000121dc) list_double_graphic_heading_pane_t

0x9732,	// (0x0000c2fb) list_double_time_pane_g1_ParamLimits

0x9732,	// (0x0000c2fb) list_double_time_pane_g1

0xe539,	// (0x00011102) list_double_time_pane_g2_ParamLimits

0xe539,	// (0x00011102) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x000121e8) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x000121e8) list_double_time_pane_g

0x97dc,	// (0x0000c3a5) list_double_time_pane_t1_ParamLimits

0x97dc,	// (0x0000c3a5) list_double_time_pane_t1

0x97f2,	// (0x0000c3bb) list_double_time_pane_t2_ParamLimits

0x97f2,	// (0x0000c3bb) list_double_time_pane_t2

0x9804,	// (0x0000c3cd) list_double_time_pane_t3_ParamLimits

0x9804,	// (0x0000c3cd) list_double_time_pane_t3

0x9816,	// (0x0000c3df) list_double_time_pane_t4_ParamLimits

0x9816,	// (0x0000c3df) list_double_time_pane_t4

0x0003,

0xf624,	// (0x000121ed) list_double_time_pane_t_ParamLimits

0xf624,	// (0x000121ed) list_double_time_pane_t

0x96d3,	// (0x0000c29c) list_setting_pane_g1_ParamLimits

0x96d3,	// (0x0000c29c) list_setting_pane_g1

0x96df,	// (0x0000c2a8) list_setting_pane_g2_ParamLimits

0x96df,	// (0x0000c2a8) list_setting_pane_g2

0x0001,

0xf62d,	// (0x000121f6) list_setting_pane_g_ParamLimits

0xf62d,	// (0x000121f6) list_setting_pane_g

0x9828,	// (0x0000c3f1) list_setting_pane_t1_ParamLimits

0x9828,	// (0x0000c3f1) list_setting_pane_t1

0x983f,	// (0x0000c408) list_setting_pane_t2_ParamLimits

0x983f,	// (0x0000c408) list_setting_pane_t2

0x0002,

0xf632,	// (0x000121fb) list_setting_pane_t_ParamLimits

0xf632,	// (0x000121fb) list_setting_pane_t

0x987e,	// (0x0000c447) set_value_pane_cp_ParamLimits

0x987e,	// (0x0000c447) set_value_pane_cp

0x96d3,	// (0x0000c29c) list_setting_number_pane_g1_ParamLimits

0x96d3,	// (0x0000c29c) list_setting_number_pane_g1

0x96df,	// (0x0000c2a8) list_setting_number_pane_g2_ParamLimits

0x96df,	// (0x0000c2a8) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x000121f6) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x000121f6) list_setting_number_pane_g

0x988a,	// (0x0000c453) list_setting_number_pane_t1_ParamLimits

0x988a,	// (0x0000c453) list_setting_number_pane_t1

0x989e,	// (0x0000c467) list_setting_number_pane_t2_ParamLimits

0x989e,	// (0x0000c467) list_setting_number_pane_t2

0x98b5,	// (0x0000c47e) list_setting_number_pane_t3_ParamLimits

0x98b5,	// (0x0000c47e) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x00012202) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x00012202) list_setting_number_pane_t

0x987e,	// (0x0000c447) set_value_pane_ParamLimits

0x987e,	// (0x0000c447) set_value_pane

0xe55a,	// (0x00011123) bg_set_opt_pane_ParamLimits

0xe55a,	// (0x00011123) bg_set_opt_pane

0xe57b,	// (0x00011144) set_value_pane_t1

0xe589,	// (0x00011152) slider_set_pane_cp3

0x98f8,	// (0x0000c4c1) volume_small_pane_cp

0xe592,	// (0x0001115b) list_form_gen_pane

0xe59b,	// (0x00011164) scroll_pane_cp8

0x9901,	// (0x0000c4ca) form_field_data_pane_ParamLimits

0x9901,	// (0x0000c4ca) form_field_data_pane

0x9918,	// (0x0000c4e1) form_field_data_wide_pane_ParamLimits

0x9918,	// (0x0000c4e1) form_field_data_wide_pane

0x9938,	// (0x0000c501) form_field_popup_pane_ParamLimits

0x9938,	// (0x0000c501) form_field_popup_pane

0x9958,	// (0x0000c521) form_field_popup_wide_pane_ParamLimits

0x9958,	// (0x0000c521) form_field_popup_wide_pane

0xe5bc,	// (0x00011185) form_field_slider_pane_ParamLimits

0xe5bc,	// (0x00011185) form_field_slider_pane

0x996f,	// (0x0000c538) form_field_slider_wide_pane_ParamLimits

0x996f,	// (0x0000c538) form_field_slider_wide_pane

0xe5cf,	// (0x00011198) data_form_pane

0x998c,	// (0x0000c555) form_field_data_pane_t1

0xe5db,	// (0x000111a4) input_focus_pane

0xe5e9,	// (0x000111b2) data_form_wide_pane

0xe626,	// (0x000111ef) form_field_data_wide_pane_t1

0xe47d,	// (0x00011046) input_focus_pane_cp6

0x99a6,	// (0x0000c56f) form_field_popup_pane_t1

0xe5db,	// (0x000111a4) input_focus_pane_cp7

0xe648,	// (0x00011211) list_form_pane

0xe65c,	// (0x00011225) form_field_popup_wide_pane_t1

0xe5db,	// (0x000111a4) input_focus_pane_cp8

0xe671,	// (0x0001123a) list_form_wide_pane

0x99c8,	// (0x0000c591) form_field_slider_pane_t1_ParamLimits

0x99c8,	// (0x0000c591) form_field_slider_pane_t1

0x99e0,	// (0x0000c5a9) form_field_slider_pane_t2_ParamLimits

0x99e0,	// (0x0000c5a9) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x00012212) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x00012212) form_field_slider_pane_t

0xe1ab,	// (0x00010d74) input_focus_pane_cp9_ParamLimits

0xe1ab,	// (0x00010d74) input_focus_pane_cp9

0x99f5,	// (0x0000c5be) slider_cont_pane_ParamLimits

0x99f5,	// (0x0000c5be) slider_cont_pane

0xe67d,	// (0x00011246) form_field_slider_wide_pane_t1_ParamLimits

0xe67d,	// (0x00011246) form_field_slider_wide_pane_t1

0xe68f,	// (0x00011258) form_field_slider_wide_pane_t2_ParamLimits

0xe68f,	// (0x00011258) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00012217) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00012217) form_field_slider_wide_pane_t

0xe1ab,	// (0x00010d74) input_focus_pane_cp10_ParamLimits

0xe1ab,	// (0x00010d74) input_focus_pane_cp10

0x9a09,	// (0x0000c5d2) slider_cont_pane_cp1_ParamLimits

0x9a09,	// (0x0000c5d2) slider_cont_pane_cp1

0x9a1d,	// (0x0000c5e6) slider_form_pane_cp

0xe6a1,	// (0x0001126a) input_focus_pane_g1

0xe6a9,	// (0x00011272) input_focus_pane_g2

0xe6b1,	// (0x0001127a) input_focus_pane_g3

0xe6b9,	// (0x00011282) input_focus_pane_g4

0xe6c1,	// (0x0001128a) input_focus_pane_g5

0xe6c9,	// (0x00011292) input_focus_pane_g6

0xe6d1,	// (0x0001129a) input_focus_pane_g7

0xe6d9,	// (0x000112a2) input_focus_pane_g8

0xe6e1,	// (0x000112aa) input_focus_pane_g9

0xdfc4,	// (0x00010b8d) input_focus_pane_g10

0x0009,

0xf653,	// (0x0001221c) input_focus_pane_g

0x1289,	// (0x00003e52) wait_border_pane_g3_copy1

0x9a25,	// (0x0000c5ee) data_form_pane_t1

0xdfc4,	// (0x00010b8d) wait_anim_pane_g1_copy1

0xb7e7,	// (0x0000e3b0) data_form_wide_pane_t1

0x9a3f,	// (0x0000c608) list_form_graphic_pane_cp_ParamLimits

0x9a3f,	// (0x0000c608) list_form_graphic_pane_cp

0x23bc,	// (0x00004f85) slider_form_pane_g1

0x23c5,	// (0x00004f8e) slider_form_pane_g2

0x0006,

0xf94a,	// (0x00012513) slider_form_pane_g

0x9a51,	// (0x0000c61a) list_form_graphic_pane_ParamLimits

0x9a51,	// (0x0000c61a) list_form_graphic_pane

0x9a64,	// (0x0000c62d) list_form_graphic_pane_g1

0x9a6c,	// (0x0000c635) list_form_graphic_pane_t1_ParamLimits

0x9a6c,	// (0x0000c635) list_form_graphic_pane_t1

0xe1b9,	// (0x00010d82) list_highlight_pane_cp5_ParamLimits

0xe1b9,	// (0x00010d82) list_highlight_pane_cp5

0x9a81,	// (0x0000c64a) find_pane_g1

0xe6e9,	// (0x000112b2) input_find_pane

0x9a8a,	// (0x0000c653) input_find_pane_g1_ParamLimits

0x9a8a,	// (0x0000c653) input_find_pane_g1

0x9a96,	// (0x0000c65f) input_find_pane_t1_ParamLimits

0x9a96,	// (0x0000c65f) input_find_pane_t1

0x9aab,	// (0x0000c674) input_find_pane_t2_ParamLimits

0x9aab,	// (0x0000c674) input_find_pane_t2

0x0001,

0xf668,	// (0x00012231) input_find_pane_t_ParamLimits

0xf668,	// (0x00012231) input_find_pane_t

0xe6f2,	// (0x000112bb) input_focus_pane_cp5_ParamLimits

0xe6f2,	// (0x000112bb) input_focus_pane_cp5

0xe705,	// (0x000112ce) bg_popup_window_pane_cp2_ParamLimits

0xe705,	// (0x000112ce) bg_popup_window_pane_cp2

0xe712,	// (0x000112db) listscroll_menu_pane_ParamLimits

0xe712,	// (0x000112db) listscroll_menu_pane

0x9acc,	// (0x0000c695) popup_submenu_window_ParamLimits

0x9acc,	// (0x0000c695) popup_submenu_window

0xe71e,	// (0x000112e7) find_popup_pane_g1

0x9af4,	// (0x0000c6bd) input_popup_find_pane_cp

0xe726,	// (0x000112ef) input_focus_pane_cp4_ParamLimits

0xe726,	// (0x000112ef) input_focus_pane_cp4

0xe734,	// (0x000112fd) input_popup_find_pane_t1_ParamLimits

0xe734,	// (0x000112fd) input_popup_find_pane_t1

0xe13d,	// (0x00010d06) bg_popup_sub_pane_cp

0xe762,	// (0x0001132b) listscroll_popup_sub_pane

0xe76a,	// (0x00011333) list_submenu_pane_ParamLimits

0xe76a,	// (0x00011333) list_submenu_pane

0xe77b,	// (0x00011344) scroll_pane_cp4

0x9b0c,	// (0x0000c6d5) list_single_popup_submenu_pane_ParamLimits

0x9b0c,	// (0x0000c6d5) list_single_popup_submenu_pane

0x9b20,	// (0x0000c6e9) list_single_popup_submenu_pane_g1

0x9b28,	// (0x0000c6f1) list_single_popup_submenu_pane_t1_ParamLimits

0x9b28,	// (0x0000c6f1) list_single_popup_submenu_pane_t1

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp1_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp1

0xe783,	// (0x0001134c) tabs_2_active_pane_g1

0x9b3d,	// (0x0000c706) tabs_2_active_pane_t1

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp1_ParamLimits

0xe1ab,	// (0x00010d74) bg_passive_tab_pane_cp1

0xe783,	// (0x0001134c) tabs_2_passive_pane_g1

0x9b3d,	// (0x0000c706) tabs_2_passive_pane_t1

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp4

0x9b4f,	// (0x0000c718) tabs_2_long_active_pane_t1

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp4

0x0add,	// (0x000036a6) list_single_midp_graphic_pane_g4_ParamLimits

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp5

0x9b62,	// (0x0000c72b) tabs_3_long_active_pane_t1

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp5

0x0add,	// (0x000036a6) list_single_midp_graphic_pane_g4

0xe1b9,	// (0x00010d82) bg_popup_window_pane_cp13_ParamLimits

0xe1b9,	// (0x00010d82) bg_popup_window_pane_cp13

0xe7ab,	// (0x00011374) listscroll_popup_fast_pane_ParamLimits

0xe7ab,	// (0x00011374) listscroll_popup_fast_pane

0xe7b7,	// (0x00011380) grid_popup_fast_pane_ParamLimits

0xe7b7,	// (0x00011380) grid_popup_fast_pane

0xe7c9,	// (0x00011392) scroll_pane_cp9_ParamLimits

0xe7c9,	// (0x00011392) scroll_pane_cp9

0x47bc,	// (0x00007385) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x47bc,	// (0x00007385) list_single_graphic_hl_pane_t1_cp2

0xe7dc,	// (0x000113a5) input_focus_pane_cp20_ParamLimits

0xe7dc,	// (0x000113a5) input_focus_pane_cp20

0xe7ea,	// (0x000113b3) query_popup_data_pane_t1_ParamLimits

0xe7ea,	// (0x000113b3) query_popup_data_pane_t1

0xe7fd,	// (0x000113c6) query_popup_data_pane_t2_ParamLimits

0xe7fd,	// (0x000113c6) query_popup_data_pane_t2

0xe843,	// (0x0001140c) query_popup_data_pane_t3_ParamLimits

0xe843,	// (0x0001140c) query_popup_data_pane_t3

0xe884,	// (0x0001144d) query_popup_data_pane_t4_ParamLimits

0xe884,	// (0x0001144d) query_popup_data_pane_t4

0xe8c0,	// (0x00011489) query_popup_data_pane_t5_ParamLimits

0xe8c0,	// (0x00011489) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x00012236) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x00012236) query_popup_data_pane_t

0xe6a1,	// (0x0001126a) bg_set_opt_pane_g1

0xe6a9,	// (0x00011272) bg_set_opt_pane_g2

0xe6b1,	// (0x0001127a) bg_set_opt_pane_g3

0xe6b9,	// (0x00011282) bg_set_opt_pane_g4

0xe6c1,	// (0x0001128a) bg_set_opt_pane_g5

0xe6c9,	// (0x00011292) bg_set_opt_pane_g6

0xe6d1,	// (0x0001129a) bg_set_opt_pane_g7

0xe6d9,	// (0x000112a2) bg_set_opt_pane_g8

0xe6e1,	// (0x000112aa) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x00012241) bg_set_opt_pane_g

0xee9d,	// (0x00011a66) control_top_pane_stacon_ParamLimits

0xee9d,	// (0x00011a66) control_top_pane_stacon

0xeef0,	// (0x00011ab9) signal_pane_stacon_ParamLimits

0xeef0,	// (0x00011ab9) signal_pane_stacon

0xef15,	// (0x00011ade) stacon_top_pane_g1_ParamLimits

0xef15,	// (0x00011ade) stacon_top_pane_g1

0xef37,	// (0x00011b00) title_pane_stacon_ParamLimits

0xef37,	// (0x00011b00) title_pane_stacon

0xef61,	// (0x00011b2a) uni_indicator_pane_stacon_ParamLimits

0xef61,	// (0x00011b2a) uni_indicator_pane_stacon

0xef76,	// (0x00011b3f) battery_pane_stacon_ParamLimits

0xef76,	// (0x00011b3f) battery_pane_stacon

0xefba,	// (0x00011b83) control_bottom_pane_stacon_ParamLimits

0xefba,	// (0x00011b83) control_bottom_pane_stacon

0xefdd,	// (0x00011ba6) navi_pane_stacon_ParamLimits

0xefdd,	// (0x00011ba6) navi_pane_stacon

0xf000,	// (0x00011bc9) stacon_bottom_pane_g1_ParamLimits

0xf000,	// (0x00011bc9) stacon_bottom_pane_g1

0xe8f7,	// (0x000114c0) aid_levels_signal_lsc_ParamLimits

0xe8f7,	// (0x000114c0) aid_levels_signal_lsc

0xe90d,	// (0x000114d6) signal_pane_stacon_g1_ParamLimits

0xe90d,	// (0x000114d6) signal_pane_stacon_g1

0xe921,	// (0x000114ea) signal_pane_stacon_g2_ParamLimits

0xe921,	// (0x000114ea) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x00012254) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x00012254) signal_pane_stacon_g

0xe963,	// (0x0001152c) title_pane_stacon_t1_ParamLimits

0xe963,	// (0x0001152c) title_pane_stacon_t1

0xe988,	// (0x00011551) uni_indicator_pane_stacon_g1

0xe992,	// (0x0001155b) uni_indicator_pane_stacon_g2

0xe99c,	// (0x00011565) uni_indicator_pane_stacon_g3

0xe9a6,	// (0x0001156f) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00012260) uni_indicator_pane_stacon_g

0xe9b0,	// (0x00011579) control_top_pane_stacon_g1

0xe9b8,	// (0x00011581) control_top_pane_stacon_t1_ParamLimits

0xe9b8,	// (0x00011581) control_top_pane_stacon_t1

0xe9ef,	// (0x000115b8) aid_levels_battery_lsc_ParamLimits

0xe9ef,	// (0x000115b8) aid_levels_battery_lsc

0xea06,	// (0x000115cf) battery_pane_stacon_g1_ParamLimits

0xea06,	// (0x000115cf) battery_pane_stacon_g1

0xea19,	// (0x000115e2) battery_pane_stacon_g2_ParamLimits

0xea19,	// (0x000115e2) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00012269) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00012269) battery_pane_stacon_g

0xea57,	// (0x00011620) navi_icon_pane_stacon

0xea6b,	// (0x00011634) navi_navi_pane_stacon

0xea57,	// (0x00011620) navi_text_pane_stacon

0xe9b0,	// (0x00011579) control_bottom_pane_stacon_g1

0xea7f,	// (0x00011648) control_bottom_pane_stacon_t1_ParamLimits

0xea7f,	// (0x00011648) control_bottom_pane_stacon_t1

0x9b8e,	// (0x0000c757) grid_app_pane_ParamLimits

0x9b8e,	// (0x0000c757) grid_app_pane

0x9bc6,	// (0x0000c78f) scroll_pane_cp15_ParamLimits

0x9bc6,	// (0x0000c78f) scroll_pane_cp15

0x9bdb,	// (0x0000c7a4) cell_app_pane_ParamLimits

0x9bdb,	// (0x0000c7a4) cell_app_pane

0x9c20,	// (0x0000c7e9) cell_app_pane_g1_ParamLimits

0x9c20,	// (0x0000c7e9) cell_app_pane_g1

0xead0,	// (0x00011699) cell_app_pane_g2_ParamLimits

0xead0,	// (0x00011699) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x0001226e) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x0001226e) cell_app_pane_g

0x9c44,	// (0x0000c80d) cell_app_pane_t1_ParamLimits

0x9c44,	// (0x0000c80d) cell_app_pane_t1

0xeadc,	// (0x000116a5) grid_highlight_pane_ParamLimits

0xeadc,	// (0x000116a5) grid_highlight_pane

0xe6a1,	// (0x0001126a) cell_highlight_pane_g1

0xe6a9,	// (0x00011272) cell_highlight_pane_g2

0xe6b1,	// (0x0001127a) cell_highlight_pane_g3

0xe6b9,	// (0x00011282) cell_highlight_pane_g4

0xe6c1,	// (0x0001128a) cell_highlight_pane_g5

0xe6c9,	// (0x00011292) cell_highlight_pane_g6

0xe6d1,	// (0x0001129a) cell_highlight_pane_g7

0xe6d9,	// (0x000112a2) cell_highlight_pane_g8

0xe6e1,	// (0x000112aa) cell_highlight_pane_g9

0xdfc4,	// (0x00010b8d) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x0001221c) cell_highlight_pane_g

0xeaf7,	// (0x000116c0) bg_scroll_pane

0x9c64,	// (0x0000c82d) scroll_handle_pane

0xeb53,	// (0x0001171c) scroll_bg_pane_g1

0xeb68,	// (0x00011731) scroll_bg_pane_g2

0xeb80,	// (0x00011749) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x00012273) scroll_bg_pane_g

0x9c78,	// (0x0000c841) scroll_handle_focus_pane_ParamLimits

0x9c78,	// (0x0000c841) scroll_handle_focus_pane

0xeb53,	// (0x0001171c) scroll_handle_pane_g1

0xeb95,	// (0x0001175e) scroll_handle_pane_g2

0xeb80,	// (0x00011749) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x0001227a) scroll_handle_pane_g

0xe726,	// (0x000112ef) bg_popup_sub_pane_cp21_ParamLimits

0xe726,	// (0x000112ef) bg_popup_sub_pane_cp21

0x9c85,	// (0x0000c84e) popup_fep_japan_predictive_window_t1_ParamLimits

0x9c85,	// (0x0000c84e) popup_fep_japan_predictive_window_t1

0x9c9c,	// (0x0000c865) popup_fep_japan_predictive_window_t2_ParamLimits

0x9c9c,	// (0x0000c865) popup_fep_japan_predictive_window_t2

0x9ccf,	// (0x0000c898) popup_fep_japan_predictive_window_t3_ParamLimits

0x9ccf,	// (0x0000c898) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x00012281) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x00012281) popup_fep_japan_predictive_window_t

0xe13d,	// (0x00010d06) bg_popup_sub_pane_cp23

0x9d06,	// (0x0000c8cf) listscroll_japin_cand_pane

0xeba9,	// (0x00011772) popup_fep_japan_candidate_window_t1

0xebb7,	// (0x00011780) candidate_pane_ParamLimits

0xebb7,	// (0x00011780) candidate_pane

0x9d0e,	// (0x0000c8d7) scroll_pane_cp30

0xebc9,	// (0x00011792) list_single_popup_jap_candidate_pane_ParamLimits

0xebc9,	// (0x00011792) list_single_popup_jap_candidate_pane

0xe13d,	// (0x00010d06) list_highlight_pane_cp30

0xebde,	// (0x000117a7) list_single_popup_jap_candidate_pane_t1

0xebed,	// (0x000117b6) level_1_signal

0xebfa,	// (0x000117c3) level_2_signal

0xec07,	// (0x000117d0) level_3_signal

0xec14,	// (0x000117dd) level_4_signal

0xec21,	// (0x000117ea) level_5_signal

0xec2e,	// (0x000117f7) level_6_signal

0xec3b,	// (0x00011804) level_7_signal

0xebed,	// (0x000117b6) level_1_battery

0xebfa,	// (0x000117c3) level_2_battery

0xec07,	// (0x000117d0) level_3_battery

0xec14,	// (0x000117dd) level_4_battery

0xec21,	// (0x000117ea) level_5_battery

0xec2e,	// (0x000117f7) level_6_battery

0xec3b,	// (0x00011804) level_7_battery

0xec7f,	// (0x00011848) list_menu_pane_ParamLimits

0xec7f,	// (0x00011848) list_menu_pane

0xec95,	// (0x0001185e) scroll_pane_cp25_ParamLimits

0xec95,	// (0x0001185e) scroll_pane_cp25

0x9d16,	// (0x0000c8df) list_double2_graphic_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double2_graphic_pane_cp2

0x9d16,	// (0x0000c8df) list_double2_large_graphic_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double2_large_graphic_pane_cp2

0x9d16,	// (0x0000c8df) list_double2_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double2_pane_cp2

0x9d16,	// (0x0000c8df) list_double_graphic_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double_graphic_pane_cp2

0x9d16,	// (0x0000c8df) list_double_large_graphic_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double_large_graphic_pane_cp2

0x9d16,	// (0x0000c8df) list_double_number_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double_number_pane_cp2

0x9d16,	// (0x0000c8df) list_double_pane_cp2_ParamLimits

0x9d16,	// (0x0000c8df) list_double_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_2graphic_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_2graphic_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_graphic_heading_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_graphic_heading_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_graphic_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_graphic_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_heading_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_heading_pane_cp2

0xecbe,	// (0x00011887) list_single_large_graphic_pane_cp2_ParamLimits

0xecbe,	// (0x00011887) list_single_large_graphic_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_number_heading_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_number_heading_pane_cp2

0x9d25,	// (0x0000c8ee) list_single_number_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_number_pane_cp2

0x9d37,	// (0x0000c900) list_single_pane_cp2_ParamLimits

0x9d37,	// (0x0000c900) list_single_pane_cp2

0xed33,	// (0x000118fc) bg_popup_sub_pane_cp22

0xed49,	// (0x00011912) popup_side_volume_key_window_g1

0xed69,	// (0x00011932) popup_side_volume_key_window_t1

0x9dff,	// (0x0000c9c8) volume_small_pane_cp1

0xe1ab,	// (0x00010d74) bg_popup_sub_pane_cp24_ParamLimits

0xe1ab,	// (0x00010d74) bg_popup_sub_pane_cp24

0xed77,	// (0x00011940) fep_china_uni_candidate_pane_ParamLimits

0xed77,	// (0x00011940) fep_china_uni_candidate_pane

0xed8b,	// (0x00011954) fep_china_uni_entry_pane

0xed9b,	// (0x00011964) popup_fep_china_uni_window_g1

0x9e07,	// (0x0000c9d0) fep_china_uni_entry_pane_g1

0x9e0f,	// (0x0000c9d8) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x000122b2) fep_china_uni_entry_pane_g

0xedb7,	// (0x00011980) fep_entry_item_pane

0xedc1,	// (0x0001198a) fep_candidate_item_pane

0x9e17,	// (0x0000c9e0) fep_china_uni_candidate_pane_g1

0xedc9,	// (0x00011992) fep_china_uni_candidate_pane_g2

0xedd1,	// (0x0001199a) fep_china_uni_candidate_pane_g3

0x9e1f,	// (0x0000c9e8) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x000122b7) fep_china_uni_candidate_pane_g

0xdfc4,	// (0x00010b8d) fep_entry_item_pane_g1

0xedd9,	// (0x000119a2) fep_entry_item_pane_t1_ParamLimits

0xedd9,	// (0x000119a2) fep_entry_item_pane_t1

0xedef,	// (0x000119b8) fep_candidate_item_pane_t1_ParamLimits

0xedef,	// (0x000119b8) fep_candidate_item_pane_t1

0xee04,	// (0x000119cd) fep_candidate_item_pane_t2_ParamLimits

0xee04,	// (0x000119cd) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x000122c0) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x000122c0) fep_candidate_item_pane_t

0xe1b9,	// (0x00010d82) list_highlight_pane_cp31_ParamLimits

0xe1b9,	// (0x00010d82) list_highlight_pane_cp31

0xee16,	// (0x000119df) level_1_signal_lsc

0xee1f,	// (0x000119e8) level_2_signal_lsc

0xee28,	// (0x000119f1) level_3_signal_lsc

0xee31,	// (0x000119fa) level_4_signal_lsc

0xee3a,	// (0x00011a03) level_5_signal_lsc

0xee43,	// (0x00011a0c) level_6_signal_lsc

0xee4c,	// (0x00011a15) level_7_signal_lsc

0xee4c,	// (0x00011a15) level_1_battery_lsc

0xee55,	// (0x00011a1e) level_2_battery_lsc

0xee5e,	// (0x00011a27) level_3_battery_lsc

0xee67,	// (0x00011a30) level_4_battery_lsc

0xee70,	// (0x00011a39) level_5_battery_lsc

0xee79,	// (0x00011a42) level_6_battery_lsc

0xee16,	// (0x000119df) level_7_battery_lsc

0xee82,	// (0x00011a4b) scroll_handle_focus_pane_g1

0xee8b,	// (0x00011a54) scroll_handle_focus_pane_g2

0xee94,	// (0x00011a5d) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x000122c5) scroll_handle_focus_pane_g

0x9e27,	// (0x0000c9f0) list_single_2graphic_pane_g1_ParamLimits

0x9e27,	// (0x0000c9f0) list_single_2graphic_pane_g1

0x95c2,	// (0x0000c18b) list_single_2graphic_pane_g2_ParamLimits

0x95c2,	// (0x0000c18b) list_single_2graphic_pane_g2

0x090a,	// (0x000034d3) list_single_2graphic_pane_g3_ParamLimits

0x090a,	// (0x000034d3) list_single_2graphic_pane_g3

0x9e33,	// (0x0000c9fc) list_single_2graphic_pane_g4_ParamLimits

0x9e33,	// (0x0000c9fc) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x000122cc) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x000122cc) list_single_2graphic_pane_g

0x9e3f,	// (0x0000ca08) list_single_2graphic_pane_t1_ParamLimits

0x9e3f,	// (0x0000ca08) list_single_2graphic_pane_t1

0x9e6d,	// (0x0000ca36) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9e6d,	// (0x0000ca36) list_double2_graphic_large_graphic_pane_g1

0x978c,	// (0x0000c355) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x978c,	// (0x0000c355) list_double2_graphic_large_graphic_pane_g2

0x96df,	// (0x0000c2a8) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x96df,	// (0x0000c2a8) list_double2_graphic_large_graphic_pane_g3

0x9e7f,	// (0x0000ca48) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9e7f,	// (0x0000ca48) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x000122d5) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x000122d5) list_double2_graphic_large_graphic_pane_g

0x9e8b,	// (0x0000ca54) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9e8b,	// (0x0000ca54) list_double2_graphic_large_graphic_pane_t1

0x9ea1,	// (0x0000ca6a) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9ea1,	// (0x0000ca6a) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x000122de) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x000122de) list_double2_graphic_large_graphic_pane_t

0x9f26,	// (0x0000caef) popup_fast_swap_window_ParamLimits

0x9f26,	// (0x0000caef) popup_fast_swap_window

0x9f42,	// (0x0000cb0b) popup_side_volume_key_window

0xf08b,	// (0x00011c54) stacon_top_pane

0xf095,	// (0x00011c5e) status_pane_ParamLimits

0xf095,	// (0x00011c5e) status_pane

0x9f5c,	// (0x0000cb25) status_small_pane

0xe13d,	// (0x00010d06) control_pane

0xe13d,	// (0x00010d06) stacon_bottom_pane

0xe59b,	// (0x00011164) scroll_pane_cp121

0xe592,	// (0x0001115b) set_content_pane

0x9eb3,	// (0x0000ca7c) bg_active_tab_pane_g1_cp1

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp1

0x9ec5,	// (0x0000ca8e) bg_active_tab_pane_g3_cp1

0x9eb3,	// (0x0000ca7c) bg_passive_tab_pane_g1_cp1

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp1

0x9ec5,	// (0x0000ca8e) bg_passive_tab_pane_g3_cp1

0x9ece,	// (0x0000ca97) bg_active_tab_pane_g1_cp2

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp2

0x9ed7,	// (0x0000caa0) bg_active_tab_pane_g3_cp2

0x9ece,	// (0x0000ca97) bg_passive_tab_pane_g1_cp2

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp2

0x9ed7,	// (0x0000caa0) bg_passive_tab_pane_g3_cp2

0x9ee0,	// (0x0000caa9) bg_active_tab_pane_g1_cp3

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp3

0x9ee9,	// (0x0000cab2) bg_active_tab_pane_g3_cp3

0x9ee0,	// (0x0000caa9) bg_passive_tab_pane_g1_cp3

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp3

0x9ee9,	// (0x0000cab2) bg_passive_tab_pane_g3_cp3

0x9ef2,	// (0x0000cabb) bg_active_tab_pane_g1_cp4

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp4

0x9efd,	// (0x0000cac6) bg_active_tab_pane_g3_cp4

0x9ef2,	// (0x0000cabb) bg_passive_tab_pane_g1_cp4

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp4

0x9efd,	// (0x0000cac6) bg_passive_tab_pane_g3_cp4

0x9f08,	// (0x0000cad1) bg_active_tab_pane_g1_cp5

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp5

0x9f11,	// (0x0000cada) bg_active_tab_pane_g3_cp5

0x9f08,	// (0x0000cad1) bg_passive_tab_pane_g1_cp5

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp5

0x9f11,	// (0x0000cada) bg_passive_tab_pane_g3_cp5

0x2bab,	// (0x00005774) list_set_graphic_pane_ParamLimits

0x2bab,	// (0x00005774) list_set_graphic_pane

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp4

0xf01c,	// (0x00011be5) list_set_graphic_pane_g1_ParamLimits

0xf01c,	// (0x00011be5) list_set_graphic_pane_g1

0xf028,	// (0x00011bf1) list_set_graphic_pane_g2_ParamLimits

0xf028,	// (0x00011bf1) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x000122e3) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x000122e3) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00012668) volume_small_pane_cp_g

0x9f1a,	// (0x0000cae3) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9f1a,	// (0x0000cae3) list_double2_large_graphic_pane_g1_cp2

0xf04a,	// (0x00011c13) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf04a,	// (0x00011c13) list_double2_large_graphic_pane_g2_cp2

0xf05b,	// (0x00011c24) list_double2_large_graphic_pane_g3_cp2

0xf063,	// (0x00011c2c) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf063,	// (0x00011c2c) list_double2_large_graphic_pane_t1_cp2

0xf079,	// (0x00011c42) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf079,	// (0x00011c42) list_double2_large_graphic_pane_t2_cp2

0xb47a,	// (0x0000e043) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb47a,	// (0x0000e043) list_double_large_graphic_pane_g1_cp2

0x1eb5,	// (0x00004a7e) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1eb5,	// (0x00004a7e) list_double_large_graphic_pane_g2_cp2

0xf1b1,	// (0x00011d7a) list_double_large_graphic_pane_g3_cp2

0x1ec6,	// (0x00004a8f) list_double_large_graphic_pane_g4_cp

0x1ece,	// (0x00004a97) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1ece,	// (0x00004a97) list_double_large_graphic_pane_t1_cp2

0x1ee5,	// (0x00004aae) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1ee5,	// (0x00004aae) list_double_large_graphic_pane_t2_cp2

0xf0a3,	// (0x00011c6c) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf0a3,	// (0x00011c6c) list_double2_graphic_pane_g1_cp2

0xf0b1,	// (0x00011c7a) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf0b1,	// (0x00011c7a) list_double2_graphic_pane_g2_cp2

0xf0c2,	// (0x00011c8b) list_double2_graphic_pane_g3_cp2

0xf0cc,	// (0x00011c95) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf0cc,	// (0x00011c95) list_double2_graphic_pane_t1_cp2

0xf0e2,	// (0x00011cab) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf0e2,	// (0x00011cab) list_double2_graphic_pane_t2_cp2

0xed5d,	// (0x00011926) list_single_number_heading_pane_g1_cp2_ParamLimits

0xed5d,	// (0x00011926) list_single_number_heading_pane_g1_cp2

0xf0f4,	// (0x00011cbd) list_single_number_heading_pane_g2_cp2

0xf0fc,	// (0x00011cc5) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf0fc,	// (0x00011cc5) list_single_number_heading_pane_t1_cp2

0xf112,	// (0x00011cdb) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf112,	// (0x00011cdb) list_single_number_heading_pane_t2_cp2

0xf124,	// (0x00011ced) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf124,	// (0x00011ced) list_single_number_heading_pane_t3_cp2

0xed5d,	// (0x00011926) list_single_heading_pane_g1_cp2_ParamLimits

0xed5d,	// (0x00011926) list_single_heading_pane_g1_cp2

0xf0f4,	// (0x00011cbd) list_single_heading_pane_g2_cp2

0xf0fc,	// (0x00011cc5) list_single_heading_pane_t1_cp2_ParamLimits

0xf0fc,	// (0x00011cc5) list_single_heading_pane_t1_cp2

0x1cae,	// (0x00004877) list_single_heading_pane_t2_cp2_ParamLimits

0x1cae,	// (0x00004877) list_single_heading_pane_t2_cp2

0x1bf6,	// (0x000047bf) list_double_graphic_pane_g1_cp2_ParamLimits

0x1bf6,	// (0x000047bf) list_double_graphic_pane_g1_cp2

0x1c02,	// (0x000047cb) list_double_graphic_pane_g2_cp2_ParamLimits

0x1c02,	// (0x000047cb) list_double_graphic_pane_g2_cp2

0x1c11,	// (0x000047da) list_double_graphic_pane_g3_cp2

0x1c19,	// (0x000047e2) list_double_graphic_pane_t1_cp2_ParamLimits

0x1c19,	// (0x000047e2) list_double_graphic_pane_t1_cp2

0x1c2f,	// (0x000047f8) list_double_graphic_pane_t2_cp2_ParamLimits

0x1c2f,	// (0x000047f8) list_double_graphic_pane_t2_cp2

0xf1a5,	// (0x00011d6e) list_double_number_pane_g1_cp2_ParamLimits

0xf1a5,	// (0x00011d6e) list_double_number_pane_g1_cp2

0xf1b1,	// (0x00011d7a) list_double_number_pane_g2_cp2

0x1bba,	// (0x00004783) list_double_number_pane_t1_cp2_ParamLimits

0x1bba,	// (0x00004783) list_double_number_pane_t1_cp2

0x1bce,	// (0x00004797) list_double_number_pane_t2_cp2_ParamLimits

0x1bce,	// (0x00004797) list_double_number_pane_t2_cp2

0x1be4,	// (0x000047ad) list_double_number_pane_t3_cp2_ParamLimits

0x1be4,	// (0x000047ad) list_double_number_pane_t3_cp2

0x1a92,	// (0x0000465b) list_single_graphic_pane_g1_cp2_ParamLimits

0x1a92,	// (0x0000465b) list_single_graphic_pane_g1_cp2

0xf187,	// (0x00011d50) list_single_graphic_pane_g2_cp2_ParamLimits

0xf187,	// (0x00011d50) list_single_graphic_pane_g2_cp2

0xf20a,	// (0x00011dd3) list_single_graphic_pane_g3_cp2

0x1a68,	// (0x00004631) list_single_graphic_pane_t1_cp2_ParamLimits

0x1a68,	// (0x00004631) list_single_graphic_pane_t1_cp2

0xf187,	// (0x00011d50) list_single_number_pane_g1_cp2_ParamLimits

0xf187,	// (0x00011d50) list_single_number_pane_g1_cp2

0xf20a,	// (0x00011dd3) list_single_number_pane_g2_cp2

0x1a68,	// (0x00004631) list_single_number_pane_t1_cp2_ParamLimits

0x1a68,	// (0x00004631) list_single_number_pane_t1_cp2

0x1a7e,	// (0x00004647) list_single_number_pane_t2_cp2_ParamLimits

0x1a7e,	// (0x00004647) list_single_number_pane_t2_cp2

0xf04a,	// (0x00011c13) list_double2_pane_g1_cp2_ParamLimits

0xf04a,	// (0x00011c13) list_double2_pane_g1_cp2

0xf05b,	// (0x00011c24) list_double2_pane_g2_cp2

0xf171,	// (0x00011d3a) list_double2_pane_t1_cp2_ParamLimits

0xf171,	// (0x00011d3a) list_double2_pane_t1_cp2

0xf193,	// (0x00011d5c) list_double2_pane_t2_cp2_ParamLimits

0xf193,	// (0x00011d5c) list_double2_pane_t2_cp2

0xf1a5,	// (0x00011d6e) list_double_pane_g1_cp2_ParamLimits

0xf1a5,	// (0x00011d6e) list_double_pane_g1_cp2

0xf1b1,	// (0x00011d7a) list_double_pane_g2_cp2

0xf1b9,	// (0x00011d82) list_double_pane_t1_cp2_ParamLimits

0xf1b9,	// (0x00011d82) list_double_pane_t1_cp2

0xf1cf,	// (0x00011d98) list_double_pane_t2_cp2_ParamLimits

0xf1cf,	// (0x00011d98) list_double_pane_t2_cp2

0x9f67,	// (0x0000cb30) list_single_pane_cp2_g3

0xf187,	// (0x00011d50) list_single_pane_g1_cp2_ParamLimits

0xf187,	// (0x00011d50) list_single_pane_g1_cp2

0xf20a,	// (0x00011dd3) list_single_pane_g2_cp2

0xf212,	// (0x00011ddb) list_single_pane_t1_cp2_ParamLimits

0xf212,	// (0x00011ddb) list_single_pane_t1_cp2

0x9f6f,	// (0x0000cb38) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9f6f,	// (0x0000cb38) list_single_large_graphic_pane_g1_cp2

0xf22a,	// (0x00011df3) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf22a,	// (0x00011df3) list_single_large_graphic_pane_g2_cp2

0xf236,	// (0x00011dff) list_single_large_graphic_pane_g3_cp2

0x9f7b,	// (0x0000cb44) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9f7b,	// (0x0000cb44) list_single_large_graphic_pane_g4_cp1

0xf23e,	// (0x00011e07) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf23e,	// (0x00011e07) list_single_large_graphic_pane_t1_cp2

0x18db,	// (0x000044a4) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x18db,	// (0x000044a4) list_single_graphic_heading_pane_g1_cp2

0x18a8,	// (0x00004471) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x18a8,	// (0x00004471) list_single_graphic_heading_pane_g4_cp2

0xf20a,	// (0x00011dd3) list_single_graphic_heading_pane_g5_cp2

0x18e7,	// (0x000044b0) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x18e7,	// (0x000044b0) list_single_graphic_heading_pane_t1_cp2

0x18fd,	// (0x000044c6) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x18fd,	// (0x000044c6) list_single_graphic_heading_pane_t2_cp2

0x189c,	// (0x00004465) list_single_2graphic_pane_g1_cp2_ParamLimits

0x189c,	// (0x00004465) list_single_2graphic_pane_g1_cp2

0x18a8,	// (0x00004471) list_single_2graphic_pane_g2_cp2_ParamLimits

0x18a8,	// (0x00004471) list_single_2graphic_pane_g2_cp2

0xf20a,	// (0x00011dd3) list_single_2graphic_pane_g3_cp2

0x18b9,	// (0x00004482) list_single_2graphic_pane_g4_cp2_ParamLimits

0x18b9,	// (0x00004482) list_single_2graphic_pane_g4_cp2

0x18c5,	// (0x0000448e) list_single_2graphic_pane_t1_cp2_ParamLimits

0x18c5,	// (0x0000448e) list_single_2graphic_pane_t1_cp2

0xdfc4,	// (0x00010b8d) list_highlight_pane_g10_cp1

0x1484,	// (0x0000404d) list_highlight_pane_g1_cp1

0x148c,	// (0x00004055) list_highlight_pane_g2_cp1

0x1494,	// (0x0000405d) list_highlight_pane_g3_cp1

0x149c,	// (0x00004065) list_highlight_pane_g4_cp1

0x14a4,	// (0x0000406d) list_highlight_pane_g5_cp1

0x14ac,	// (0x00004075) list_highlight_pane_g6_cp1

0x14b4,	// (0x0000407d) list_highlight_pane_g7_cp1

0x14bc,	// (0x00004085) list_highlight_pane_g8_cp1

0x14c4,	// (0x0000408d) list_highlight_pane_g9_cp1

0xb207,	// (0x0000ddd0) form_field_slider_pane_t3

0xb215,	// (0x0000ddde) form_field_slider_pane_t4

0x13c8,	// (0x00003f91) slider_form_pane_ParamLimits

0x13c8,	// (0x00003f91) slider_form_pane

0xe13d,	// (0x00010d06) control_abbreviations

0xe13d,	// (0x00010d06) control_conventions

0xe13d,	// (0x00010d06) control_definitions

0xe13d,	// (0x00010d06) format_table_attribute

0xb451,	// (0x0000e01a) bg_popup_preview_window_pane_g9

0xe13d,	// (0x00010d06) format_table_data2

0xe13d,	// (0x00010d06) format_table_data3

0xe13d,	// (0x00010d06) format_table_data_example

0x0008,

0xe13d,	// (0x00010d06) intro_purpose

0xf8aa,	// (0x00012473) bg_popup_preview_window_pane_g

0xe13d,	// (0x00010d06) texts_category

0xe13d,	// (0x00010d06) texts_graphics

0xf254,	// (0x00011e1d) text_digital

0xf263,	// (0x00011e2c) text_primary

0xf272,	// (0x00011e3b) text_primary_small

0xf281,	// (0x00011e4a) text_secondary

0xf290,	// (0x00011e59) text_title

0xb8c6,	// (0x0000e48f) bg_passive_tab_pane_g1_cp3_srt

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp3_srt

0xb8cf,	// (0x0000e498) bg_passive_tab_pane_g3_cp3_srt

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp3_srt_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp3_srt

0xb8d8,	// (0x0000e4a1) tabs_4_active_pane_srt_g1

0xb8e0,	// (0x0000e4a9) tabs_4_active_pane_srt_t1_ParamLimits

0xb8e0,	// (0x0000e4a9) tabs_4_active_pane_srt_t1

0xb8c6,	// (0x0000e48f) bg_active_tab_pane_g1_cp3_copy1

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp3_copy1

0xb8cf,	// (0x0000e498) bg_active_tab_pane_g3_cp3_copy1

0xe1b9,	// (0x00010d82) tabs_2_long_active_pane_srt_ParamLimits

0xe1b9,	// (0x00010d82) tabs_2_long_active_pane_srt

0xe1b9,	// (0x00010d82) tabs_2_long_passive_pane_srt_ParamLimits

0xe1b9,	// (0x00010d82) tabs_2_long_passive_pane_srt

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp4_srt_ParamLimits

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp4_srt

0xb5cb,	// (0x0000e194) bg_passive_tab_pane_g1_cp4_srt

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp4_srt

0xb5d4,	// (0x0000e19d) bg_passive_tab_pane_g3_cp4_srt

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp4_srt_ParamLimits

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp4_srt

0xb5dd,	// (0x0000e1a6) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb5dd,	// (0x0000e1a6) tabs_2_long_active_pane_srt_t1

0xb5cb,	// (0x0000e194) bg_active_tab_pane_g1_cp4_srt

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp4_srt

0xb5d4,	// (0x0000e19d) bg_active_tab_pane_g3_cp4_srt

0xe1ab,	// (0x00010d74) tabs_3_long_active_pane_srt_ParamLimits

0xe1ab,	// (0x00010d74) tabs_3_long_active_pane_srt

0xe1ab,	// (0x00010d74) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe1ab,	// (0x00010d74) tabs_3_long_passive_pane_cp_srt

0xe1ab,	// (0x00010d74) tabs_3_long_passive_pane_srt_ParamLimits

0xe1ab,	// (0x00010d74) tabs_3_long_passive_pane_srt

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp5_srt_ParamLimits

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp5_srt

0x9f08,	// (0x0000cad1) bg_passive_tab_pane_g1_cp5_srt

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp5_srt

0x9f11,	// (0x0000cada) bg_passive_tab_pane_g3_cp5_srt

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp5_srt_ParamLimits

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp5_srt

0xb5b5,	// (0x0000e17e) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb5b5,	// (0x0000e17e) tabs_3_long_active_pane_srt_t1

0x9f08,	// (0x0000cad1) bg_active_tab_pane_g1_cp5_srt

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp5_srt

0x9f11,	// (0x0000cada) bg_active_tab_pane_g3_cp5_srt

0x215b,	// (0x00004d24) navi_text_pane_srt_t1

0x2153,	// (0x00004d1c) navi_icon_pane_srt_g1

0xf424,	// (0x00011fed) midp_editing_number_pane_srt

0xf29f,	// (0x00011e68) midp_ticker_pane_srt

0xf42c,	// (0x00011ff5) midp_ticker_pane_srt_g1

0xf434,	// (0x00011ffd) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x00012302) midp_ticker_pane_srt_g

0xf43c,	// (0x00012005) midp_ticker_pane_srt_t1

0x2144,	// (0x00004d0d) midp_editing_number_pane_t1_copy1

0x9f95,	// (0x0000cb5e) listscroll_midp_pane

0x9f95,	// (0x0000cb5e) midp_form_pane

0xa000,	// (0x0000cbc9) midp_info_popup_window_ParamLimits

0xa000,	// (0x0000cbc9) midp_info_popup_window

0xe726,	// (0x000112ef) bg_popup_sub_pane_cp50_ParamLimits

0xe726,	// (0x000112ef) bg_popup_sub_pane_cp50

0x10b8,	// (0x00003c81) listscroll_midp_info_pane_ParamLimits

0x10b8,	// (0x00003c81) listscroll_midp_info_pane

0x1098,	// (0x00003c61) listscroll_form_midp_pane_ParamLimits

0x1098,	// (0x00003c61) listscroll_form_midp_pane

0x10a4,	// (0x00003c6d) scroll_bar_cp050

0x1098,	// (0x00003c61) list_midp_pane

0xbac6,	// (0x0000e68f) signal_pane_g2_cp

0x0fb2,	// (0x00003b7b) listscroll_midp_info_pane_t1_ParamLimits

0x0fb2,	// (0x00003b7b) listscroll_midp_info_pane_t1

0xb041,	// (0x0000dc0a) listscroll_midp_info_pane_t2_ParamLimits

0xb041,	// (0x0000dc0a) listscroll_midp_info_pane_t2

0xb07f,	// (0x0000dc48) listscroll_midp_info_pane_t3_ParamLimits

0xb07f,	// (0x0000dc48) listscroll_midp_info_pane_t3

0xb0b9,	// (0x0000dc82) listscroll_midp_info_pane_t4_ParamLimits

0xb0b9,	// (0x0000dc82) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x000123ae) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x000123ae) listscroll_midp_info_pane_t

0xe77b,	// (0x00011344) scroll_pane_cp21

0x0f52,	// (0x00003b1b) form_midp_field_choice_group_pane

0xb004,	// (0x0000dbcd) form_midp_field_text_pane

0x0f98,	// (0x00003b61) form_midp_field_time_pane

0x0fa0,	// (0x00003b69) form_midp_gauge_slider_pane

0x0fa9,	// (0x00003b72) form_midp_gauge_wait_pane

0xe13d,	// (0x00010d06) form_midp_image_pane

0xafed,	// (0x0000dbb6) list_single_midp_pane_ParamLimits

0xafed,	// (0x0000dbb6) list_single_midp_pane

0xafcb,	// (0x0000db94) form_midp_field_text_pane_t1

0x0c08,	// (0x000037d1) input_focus_pane_cp050

0x0f0f,	// (0x00003ad8) list_midp_form_text_pane

0x0ea4,	// (0x00003a6d) form_midp_field_choice_group_pane_t1

0x0eb2,	// (0x00003a7b) input_focus_pane_cp051

0x0ec6,	// (0x00003a8f) list_midp_choice_pane

0xe13d,	// (0x00010d06) status_idle_pane

0x0e88,	// (0x00003a51) form_midp_field_time_pane_t1

0xdfc4,	// (0x00010b8d) wait_anim_pane_g2_copy1

0x0e96,	// (0x00003a5f) form_midp_field_time_pane_t2

0x0001,

0xf2ff,	// (0x00011ec8) aid_navinavi_width_2_pane

0xf7e0,	// (0x000123a9) form_midp_field_time_pane_t

0xe13d,	// (0x00010d06) input_focus_pane_cp052

0xe13d,	// (0x00010d06) bg_input_focus_pane_cp040

0x0e48,	// (0x00003a11) form_midp_gauge_slider_pane_t1

0x0e56,	// (0x00003a1f) form_midp_gauge_slider_pane_t2

0xafaf,	// (0x0000db78) form_midp_gauge_slider_pane_t3

0xafbd,	// (0x0000db86) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x000123a0) form_midp_gauge_slider_pane_t

0x0e80,	// (0x00003a49) form_midp_slider_pane

0xe1b9,	// (0x00010d82) bg_input_focus_pane_cp041_ParamLimits

0xe1b9,	// (0x00010d82) bg_input_focus_pane_cp041

0x0e15,	// (0x000039de) form_midp_gauge_wait_pane_t1_ParamLimits

0x0e15,	// (0x000039de) form_midp_gauge_wait_pane_t1

0x0e27,	// (0x000039f0) form_midp_gauge_wait_pane_t2_ParamLimits

0x0e27,	// (0x000039f0) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x0001239b) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x0001239b) form_midp_gauge_wait_pane_t

0x0e39,	// (0x00003a02) form_midp_wait_pane_ParamLimits

0x0e39,	// (0x00003a02) form_midp_wait_pane

0xaf79,	// (0x0000db42) form_midp_image_pane_g1

0xaf82,	// (0x0000db4b) form_midp_image_pane_t1

0xaf91,	// (0x0000db5a) form_midp_image_pane_t2

0xafa0,	// (0x0000db69) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x00012394) form_midp_image_pane_t

0x0dc7,	// (0x00003990) list_single_midp_pane_g1

0x0dd0,	// (0x00003999) list_single_midp_pane_t1

0xaf64,	// (0x0000db2d) list_midp_form_item_pane_ParamLimits

0xaf64,	// (0x0000db2d) list_midp_form_item_pane

0xf2a7,	// (0x00011e70) list_midp_form_item_pane_t1

0xf2b6,	// (0x00011e7f) midp_ticker_pane_g1

0xf2c2,	// (0x00011e8b) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x000122e8) midp_ticker_pane_g

0xf2ce,	// (0x00011e97) midp_ticker_pane_t1

0x243c,	// (0x00005005) midp_editing_number_pane_t1

0x241a,	// (0x00004fe3) midp_editing_number_pane

0x2429,	// (0x00004ff2) midp_ticker_pane

0x2122,	// (0x00004ceb) ai_message_heading_pane

0xe13d,	// (0x00010d06) bg_popup_window_pane_cp14

0x212a,	// (0x00004cf3) listscroll_ai_message_pane

0x20ac,	// (0x00004c75) ai_message_heading_pane_g1_ParamLimits

0x20ac,	// (0x00004c75) ai_message_heading_pane_g1

0xb56b,	// (0x0000e134) ai_message_heading_pane_g2_ParamLimits

0xb56b,	// (0x0000e134) ai_message_heading_pane_g2

0x20c4,	// (0x00004c8d) ai_message_heading_pane_g3_ParamLimits

0x20c4,	// (0x00004c8d) ai_message_heading_pane_g3

0x20d0,	// (0x00004c99) ai_message_heading_pane_g4_ParamLimits

0x20d0,	// (0x00004c99) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x000124d5) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x000124d5) ai_message_heading_pane_g

0xb577,	// (0x0000e140) ai_message_heading_pane_t1_ParamLimits

0xb577,	// (0x0000e140) ai_message_heading_pane_t1

0xb591,	// (0x0000e15a) ai_message_heading_pane_t2_ParamLimits

0xb591,	// (0x0000e15a) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x000124de) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x000124de) ai_message_heading_pane_t

0x2108,	// (0x00004cd1) bg_popup_heading_pane_cp1_ParamLimits

0x2108,	// (0x00004cd1) bg_popup_heading_pane_cp1

0x209a,	// (0x00004c63) list_ai_message_pane_ParamLimits

0x209a,	// (0x00004c63) list_ai_message_pane

0xe77b,	// (0x00011344) scroll_pane_cp10

0x1fe6,	// (0x00004baf) list_ai_message_pane_g1

0x1fee,	// (0x00004bb7) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x000124b2) list_ai_message_pane_g

0x1ff6,	// (0x00004bbf) list_ai_message_pane_t1_ParamLimits

0x1ff6,	// (0x00004bbf) list_ai_message_pane_t1

0x200b,	// (0x00004bd4) list_ai_message_pane_t2_ParamLimits

0x200b,	// (0x00004bd4) list_ai_message_pane_t2

0x2020,	// (0x00004be9) list_ai_message_pane_t3_ParamLimits

0x2020,	// (0x00004be9) list_ai_message_pane_t3

0x2035,	// (0x00004bfe) list_ai_message_pane_t4_ParamLimits

0x2035,	// (0x00004bfe) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x000124b7) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x000124b7) list_ai_message_pane_t

0xb4f7,	// (0x0000e0c0) cell_ai_soft_ind_pane_ParamLimits

0xb4f7,	// (0x0000e0c0) cell_ai_soft_ind_pane

0xf2e0,	// (0x00011ea9) cell_ai_soft_ind_pane_g1_ParamLimits

0xf2e0,	// (0x00011ea9) cell_ai_soft_ind_pane_g1

0xe13d,	// (0x00010d06) grid_highlight_cp1

0xf2ed,	// (0x00011eb6) text_secondary_cp56_ParamLimits

0xf2ed,	// (0x00011eb6) text_secondary_cp56

0x1fa6,	// (0x00004b6f) example_general_pane_ParamLimits

0x1fa6,	// (0x00004b6f) example_general_pane

0x1fb2,	// (0x00004b7b) example_parent_pane_g1_ParamLimits

0x1fb2,	// (0x00004b7b) example_parent_pane_g1

0x1fbe,	// (0x00004b87) example_parent_pane_t1_ParamLimits

0x1fbe,	// (0x00004b87) example_parent_pane_t1

0xa6e8,	// (0x0000d2b1) popup_preview_text_window_ParamLimits

0xa6e8,	// (0x0000d2b1) popup_preview_text_window

0xf202,	// (0x00011dcb) list_single_pane_cp2_g4

0xe3a5,	// (0x00010f6e) bg_popup_preview_window_pane_ParamLimits

0xe3a5,	// (0x00010f6e) bg_popup_preview_window_pane

0xb459,	// (0x0000e022) popup_preview_text_window_t1_ParamLimits

0xb459,	// (0x0000e022) popup_preview_text_window_t1

0x1d1e,	// (0x000048e7) popup_preview_text_window_t2_ParamLimits

0x1d1e,	// (0x000048e7) popup_preview_text_window_t2

0x1d67,	// (0x00004930) popup_preview_text_window_t3_ParamLimits

0x1d67,	// (0x00004930) popup_preview_text_window_t3

0x1dac,	// (0x00004975) popup_preview_text_window_t4_ParamLimits

0x1dac,	// (0x00004975) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x00012486) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x00012486) popup_preview_text_window_t

0x1e2a,	// (0x000049f3) scroll_pane_cp11

0x0a70,	// (0x00003639) bg_popup_preview_window_pane_g1

0xb419,	// (0x0000dfe2) bg_popup_preview_window_pane_g2

0xb421,	// (0x0000dfea) bg_popup_preview_window_pane_g3

0xb429,	// (0x0000dff2) bg_popup_preview_window_pane_g4

0xb431,	// (0x0000dffa) bg_popup_preview_window_pane_g5

0xb439,	// (0x0000e002) bg_popup_preview_window_pane_g6

0xb441,	// (0x0000e00a) bg_popup_preview_window_pane_g7

0xb449,	// (0x0000e012) bg_popup_preview_window_pane_g8

0xdfda,	// (0x00010ba3) aid_popup_width_pane

0xa664,	// (0x0000d22d) popup_midp_note_alarm_window_ParamLimits

0xa664,	// (0x0000d22d) popup_midp_note_alarm_window

0xe5cf,	// (0x00011198) data_form_pane_ParamLimits

0x9982,	// (0x0000c54b) form_field_data_pane_g1

0x998c,	// (0x0000c555) form_field_data_pane_t1_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_ParamLimits

0xe5e9,	// (0x000111b2) data_form_wide_pane_ParamLimits

0xe5fa,	// (0x000111c3) form_field_data_wide_pane_g1

0xe626,	// (0x000111ef) form_field_data_wide_pane_t1_ParamLimits

0xe47d,	// (0x00011046) input_focus_pane_cp6_ParamLimits

0x9afe,	// (0x0000c6c7) input_popup_find_pane_g1_ParamLimits

0x9afe,	// (0x0000c6c7) input_popup_find_pane_g1

0xea2a,	// (0x000115f3) aid_navi_side_left_pane

0xea3f,	// (0x00011608) aid_navi_side_right_pane

0x157f,	// (0x00004148) bg_popup_window_pane_cp30_ParamLimits

0x157f,	// (0x00004148) bg_popup_window_pane_cp30

0x15f9,	// (0x000041c2) popup_midp_note_alarm_window_g1_ParamLimits

0x15f9,	// (0x000041c2) popup_midp_note_alarm_window_g1

0x1629,	// (0x000041f2) popup_midp_note_alarm_window_t1_ParamLimits

0x1629,	// (0x000041f2) popup_midp_note_alarm_window_t1

0xb25a,	// (0x0000de23) popup_midp_note_alarm_window_t2_ParamLimits

0xb25a,	// (0x0000de23) popup_midp_note_alarm_window_t2

0xb308,	// (0x0000ded1) popup_midp_note_alarm_window_t3_ParamLimits

0xb308,	// (0x0000ded1) popup_midp_note_alarm_window_t3

0xb330,	// (0x0000def9) popup_midp_note_alarm_window_t4_ParamLimits

0xb330,	// (0x0000def9) popup_midp_note_alarm_window_t4

0x17c0,	// (0x00004389) popup_midp_note_alarm_window_t5_ParamLimits

0x17c0,	// (0x00004389) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x00012423) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x00012423) popup_midp_note_alarm_window_t

0x186c,	// (0x00004435) wait_bar_pane_cp1_ParamLimits

0x186c,	// (0x00004435) wait_bar_pane_cp1

0xe13d,	// (0x00010d06) wait_anim_pane_copy1

0xe13d,	// (0x00010d06) wait_border_pane_copy1

0x1275,	// (0x00003e3e) wait_border_pane_g1_copy1

0xe640,	// (0x00011209) form_field_popup_pane_g1

0x99a6,	// (0x0000c56f) form_field_popup_pane_t1_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_cp7_ParamLimits

0xe648,	// (0x00011211) list_form_pane_ParamLimits

0xe654,	// (0x0001121d) form_field_popup_wide_pane_g1

0xe65c,	// (0x00011225) form_field_popup_wide_pane_t1_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_cp8_ParamLimits

0xe671,	// (0x0001123a) list_form_wide_pane_ParamLimits

0x2680,	// (0x00005249) aid_size_cell_graphic_pane

0x9a25,	// (0x0000c5ee) data_form_pane_t1_ParamLimits

0xb7e7,	// (0x0000e3b0) data_form_wide_pane_t1_ParamLimits

0xab2b,	// (0x0000d6f4) bg_status_flat_pane

0x8f60,	// (0x0000bb29) title_pane_t1_ParamLimits

0xe173,	// (0x00010d3c) title_pane_t2_ParamLimits

0xe199,	// (0x00010d62) title_pane_t3_ParamLimits

0xf532,	// (0x000120fb) title_pane_t_ParamLimits

0xebed,	// (0x000117b6) level_1_signal_ParamLimits

0xebfa,	// (0x000117c3) level_2_signal_ParamLimits

0xec07,	// (0x000117d0) level_3_signal_ParamLimits

0xec14,	// (0x000117dd) level_4_signal_ParamLimits

0xec21,	// (0x000117ea) level_5_signal_ParamLimits

0xec2e,	// (0x000117f7) level_6_signal_ParamLimits

0xec3b,	// (0x00011804) level_7_signal_ParamLimits

0xebed,	// (0x000117b6) level_1_battery_ParamLimits

0xebfa,	// (0x000117c3) level_2_battery_ParamLimits

0xec07,	// (0x000117d0) level_3_battery_ParamLimits

0xec14,	// (0x000117dd) level_4_battery_ParamLimits

0xec21,	// (0x000117ea) level_5_battery_ParamLimits

0xec2e,	// (0x000117f7) level_6_battery_ParamLimits

0xec3b,	// (0x00011804) level_7_battery_ParamLimits

0x1484,	// (0x0000404d) bg_status_flat_pane_g1

0x148c,	// (0x00004055) bg_status_flat_pane_g2

0x1494,	// (0x0000405d) bg_status_flat_pane_g3

0x149c,	// (0x00004065) bg_status_flat_pane_g4

0x14a4,	// (0x0000406d) bg_status_flat_pane_g5

0x14ac,	// (0x00004075) bg_status_flat_pane_g6

0x14b4,	// (0x0000407d) bg_status_flat_pane_g7

0x8ff4,	// (0x0000bbbd) tabs_3_active_pane_t1_ParamLimits

0x8ff4,	// (0x0000bbbd) tabs_3_passive_pane_t1_ParamLimits

0x900e,	// (0x0000bbd7) tabs_4_active_pane_t1_ParamLimits

0x900e,	// (0x0000bbd7) tabs_4_1_passive_pane_t1_ParamLimits

0x9b3d,	// (0x0000c706) tabs_2_active_pane_t1_ParamLimits

0x9b3d,	// (0x0000c706) tabs_2_passive_pane_t1_ParamLimits

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp4_ParamLimits

0x9b4f,	// (0x0000c718) tabs_2_long_active_pane_t1_ParamLimits

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp4_ParamLimits

0x0b2d,	// (0x000036f6) list_single_midp_graphic_pane_t1_ParamLimits

0xe1b9,	// (0x00010d82) bg_active_tab_pane_cp5_ParamLimits

0x9b62,	// (0x0000c72b) tabs_3_long_active_pane_t1_ParamLimits

0xf47e,	// (0x00012047) bg_passive_tab_pane_cp5_ParamLimits

0x0b2d,	// (0x000036f6) list_single_midp_graphic_pane_t1

0xab2b,	// (0x0000d6f4) bg_status_flat_pane_ParamLimits

0x0653,	// (0x0000321c) indicator_pane_cp2_ParamLimits

0x0653,	// (0x0000321c) indicator_pane_cp2

0xaca9,	// (0x0000d872) navi_pane_srt_ParamLimits

0xaca9,	// (0x0000d872) navi_pane_srt

0x07a2,	// (0x0000336b) popup_clock_digital_analogue_window_cp1

0xe217,	// (0x00010de0) indicator_pane_t1

0xf29f,	// (0x00011e68) copy_highlight_pane

0xf29f,	// (0x00011e68) cursor_graphics_pane

0xf29f,	// (0x00011e68) graphic_within_text_pane

0xf29f,	// (0x00011e68) link_highlight_pane

0x1ded,	// (0x000049b6) popup_preview_text_window_t5_ParamLimits

0x1ded,	// (0x000049b6) popup_preview_text_window_t5

0xf307,	// (0x00011ed0) cursor_digital_pane

0xf307,	// (0x00011ed0) cursor_primary_pane

0xf318,	// (0x00011ee1) cursor_primary_small_pane

0xf320,	// (0x00011ee9) cursor_secondary_pane

0xf328,	// (0x00011ef1) cursor_title_pane

0xf307,	// (0x00011ed0) link_highlight_digital_pane

0xf30f,	// (0x00011ed8) link_highlight_primary_pane

0xf318,	// (0x00011ee1) link_highlight_primary_small_pane

0xf320,	// (0x00011ee9) link_highlight_secondary_pane

0xf328,	// (0x00011ef1) link_highlight_title_pane

0xf307,	// (0x00011ed0) copy_highlight_digital_pane

0xf307,	// (0x00011ed0) copy_highlight_primary_pane

0xf318,	// (0x00011ee1) copy_highlight_primary_small_pane

0xf320,	// (0x00011ee9) copy_highlight_secondary_pane

0xf328,	// (0x00011ef1) copy_highlight_title_pane

0xf320,	// (0x00011ee9) graphic_text_digital_pane

0x1522,	// (0x000040eb) graphic_text_primary_pane

0x152b,	// (0x000040f4) graphic_text_primary_small_pane

0xf318,	// (0x00011ee1) graphic_text_secondary_pane

0xf307,	// (0x00011ed0) graphic_text_title_pane

0xa051,	// (0x0000cc1a) cursor_primary_pane_g1

0x1514,	// (0x000040dd) cursor_text_primary_t1

0xb250,	// (0x0000de19) cursor_primary_small_pane_g1

0x1506,	// (0x000040cf) cursor_text_primary_small_t1

0xb246,	// (0x0000de0f) cursor_primary_small_pane_g1_copy1

0x14ee,	// (0x000040b7) cursor_text_primary_small_t1_copy1

0x14cc,	// (0x00004095) cursor_text_title_t1

0xb23c,	// (0x0000de05) cursor_title_pane_g1

0xa051,	// (0x0000cc1a) cursor_digital_pane_g1

0xf330,	// (0x00011ef9) cursor_text_digital_t1

0xf33e,	// (0x00011f07) link_highlight_primary_pane_g1

0x1475,	// (0x0000403e) link_highlight_primary_pane_t1

0xf33e,	// (0x00011f07) link_highlight_primary_small_pane_g1

0xf346,	// (0x00011f0f) link_highlight_primary_small_pane_t1

0xf33e,	// (0x00011f07) link_highlight_secondary_pane_g1

0xf355,	// (0x00011f1e) link_highlight_secondary_pane_t1

0x13da,	// (0x00003fa3) link_highlight_title_pane_g1

0x13f1,	// (0x00003fba) link_highlight_title_pane_t1

0x13da,	// (0x00003fa3) link_highlight_digital_pane_g1

0x13e2,	// (0x00003fab) link_highlight_digital_pane_t1

0x1294,	// (0x00003e5d) copy_highlight_primary_pane_g1

0x12ba,	// (0x00003e83) copy_highlight_primary_pane_t1

0x1294,	// (0x00003e5d) copy_highlight_primary_small_pane_g1

0x12ab,	// (0x00003e74) copy_highlight_primary_small_pane_t1

0xf364,	// (0x00011f2d) copy_highlight_secondary_pane_g1

0xf36c,	// (0x00011f35) copy_highlight_secondary_pane_t1

0x1294,	// (0x00003e5d) copy_highlight_title_pane_g1

0x129c,	// (0x00003e65) copy_highlight_title_pane_t1

0x1294,	// (0x00003e5d) copy_highlight_digital_pane_g1

0x2906,	// (0x000054cf) copy_highlight_digital_pane_t1

0x285a,	// (0x00005423) graphic_text_primary_pane_g1

0x28ea,	// (0x000054b3) graphic_text_primary_pane_t1

0x28f8,	// (0x000054c1) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x00012552) graphic_text_primary_pane_t

0x28c6,	// (0x0000548f) graphic_text_primary_small_pane_g1

0x28ce,	// (0x00005497) graphic_text_primary_small_pane_t1

0x28dc,	// (0x000054a5) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x0001254d) graphic_text_primary_small_pane_t

0x28a2,	// (0x0000546b) graphic_text_secondary_pane_g1

0x28aa,	// (0x00005473) graphic_text_secondary_pane_t1

0x28b8,	// (0x00005481) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00012548) graphic_text_secondary_pane_t

0x287e,	// (0x00005447) graphic_text_title_pane_g1

0x2886,	// (0x0000544f) graphic_text_title_pane_t1

0x2894,	// (0x0000545d) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x00012543) graphic_text_title_pane_t

0x285a,	// (0x00005423) graphic_text_digital_pane_g1

0x2862,	// (0x0000542b) graphic_text_digital_pane_t1

0x2870,	// (0x00005439) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x0001253e) graphic_text_digital_pane_t

0xe1b9,	// (0x00010d82) navi_icon_pane_srt_ParamLimits

0xe1b9,	// (0x00010d82) navi_icon_pane_srt

0xe13d,	// (0x00010d06) navi_midp_pane_srt

0xe13d,	// (0x00010d06) navi_navi_pane_srt

0xe1b9,	// (0x00010d82) navi_text_pane_srt_ParamLimits

0xe1b9,	// (0x00010d82) navi_text_pane_srt

0x2825,	// (0x000053ee) navi_navi_icon_text_pane_srt

0x282d,	// (0x000053f6) navi_navi_pane_srt_g1_ParamLimits

0x282d,	// (0x000053f6) navi_navi_pane_srt_g1

0x283f,	// (0x00005408) navi_navi_pane_srt_g2_ParamLimits

0x283f,	// (0x00005408) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00012539) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00012539) navi_navi_pane_srt_g

0x2851,	// (0x0000541a) navi_navi_tabs_pane_srt

0x2825,	// (0x000053ee) navi_navi_text_pane_srt

0x2825,	// (0x000053ee) navi_navi_volume_pane_srt

0x2816,	// (0x000053df) navi_navi_text_pane_srt_t1

0x27f1,	// (0x000053ba) navi_navi_volume_pane_srt_g1

0x27f9,	// (0x000053c2) volume_small_pane_srt_ParamLimits

0x27f9,	// (0x000053c2) volume_small_pane_srt

0xf37b,	// (0x00011f44) volume_small_pane_srt_g1_ParamLimits

0xf37b,	// (0x00011f44) volume_small_pane_srt_g1

0xf38b,	// (0x00011f54) volume_small_pane_srt_g2_ParamLimits

0xf38b,	// (0x00011f54) volume_small_pane_srt_g2

0xf39c,	// (0x00011f65) volume_small_pane_srt_g3_ParamLimits

0xf39c,	// (0x00011f65) volume_small_pane_srt_g3

0xf3ad,	// (0x00011f76) volume_small_pane_srt_g4_ParamLimits

0xf3ad,	// (0x00011f76) volume_small_pane_srt_g4

0xf3be,	// (0x00011f87) volume_small_pane_srt_g5_ParamLimits

0xf3be,	// (0x00011f87) volume_small_pane_srt_g5

0xf3cf,	// (0x00011f98) volume_small_pane_srt_g6_ParamLimits

0xf3cf,	// (0x00011f98) volume_small_pane_srt_g6

0xf3e0,	// (0x00011fa9) volume_small_pane_srt_g7_ParamLimits

0xf3e0,	// (0x00011fa9) volume_small_pane_srt_g7

0xf3f1,	// (0x00011fba) volume_small_pane_srt_g8_ParamLimits

0xf3f1,	// (0x00011fba) volume_small_pane_srt_g8

0xf402,	// (0x00011fcb) volume_small_pane_srt_g9_ParamLimits

0xf402,	// (0x00011fcb) volume_small_pane_srt_g9

0xf413,	// (0x00011fdc) volume_small_pane_srt_g10_ParamLimits

0xf413,	// (0x00011fdc) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x000122ed) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x000122ed) volume_small_pane_srt_g

0x92f5,	// (0x0000bebe) query_popup_data_pane_cp2

0x27df,	// (0x000053a8) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x27df,	// (0x000053a8) navi_navi_icon_text_pane_srt_t1

0x1522,	// (0x000040eb) navi_tabs_2_long_pane_srt

0x1522,	// (0x000040eb) navi_tabs_2_pane_srt

0x1522,	// (0x000040eb) navi_tabs_3_long_pane_srt

0x1522,	// (0x000040eb) navi_tabs_3_pane_srt

0x1522,	// (0x000040eb) navi_tabs_4_pane_srt

0xb9cc,	// (0x0000e595) tabs_2_active_pane_srt_ParamLimits

0xb9cc,	// (0x0000e595) tabs_2_active_pane_srt

0xb9dc,	// (0x0000e5a5) tabs_2_passive_pane_srt_ParamLimits

0xb9dc,	// (0x0000e5a5) tabs_2_passive_pane_srt

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp1_srt

0xb99c,	// (0x0000e565) bg_passive_tab_pane_g1_cp1_srt

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp1_srt

0xb9a5,	// (0x0000e56e) bg_passive_tab_pane_g3_cp1_srt

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp1_srt_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp1_srt

0xb9ae,	// (0x0000e577) tabs_2_active_pane_srt_g1

0xb9b6,	// (0x0000e57f) tabs_2_active_pane_srt_t1_ParamLimits

0xb9b6,	// (0x0000e57f) tabs_2_active_pane_srt_t1

0xb99c,	// (0x0000e565) bg_active_tab_pane_g1_cp1_srt

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp1_srt

0xb9a5,	// (0x0000e56e) bg_active_tab_pane_g3_cp1_srt

0xb969,	// (0x0000e532) tabs_3_active_pane_srt_ParamLimits

0xb969,	// (0x0000e532) tabs_3_active_pane_srt

0xb97a,	// (0x0000e543) tabs_3_passive_pane_cp_srt_ParamLimits

0xb97a,	// (0x0000e543) tabs_3_passive_pane_cp_srt

0xb98b,	// (0x0000e554) tabs_3_passive_pane_srt_ParamLimits

0xb98b,	// (0x0000e554) tabs_3_passive_pane_srt

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0c08,	// (0x000037d1) bg_passive_tab_pane_cp2_srt

0xa05b,	// (0x0000cc24) bg_passive_tab_pane_g1_cp2_srt

0x9ebc,	// (0x0000ca85) bg_passive_tab_pane_g2_cp2_srt

0xa064,	// (0x0000cc2d) bg_passive_tab_pane_g3_cp2_srt

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp2_srt_ParamLimits

0xe1ab,	// (0x00010d74) bg_active_tab_pane_cp2_srt

0xb94b,	// (0x0000e514) tabs_3_active_pane_srt_g1

0xb953,	// (0x0000e51c) tabs_3_active_pane_srt_t1_ParamLimits

0xb953,	// (0x0000e51c) tabs_3_active_pane_srt_t1

0xa05b,	// (0x0000cc24) bg_active_tab_pane_g1_cp2_srt

0x9ebc,	// (0x0000ca85) bg_active_tab_pane_g2_cp2_srt

0xa064,	// (0x0000cc2d) bg_active_tab_pane_g3_cp2_srt

0x26f6,	// (0x000052bf) tabs_4_active_pane_srt_ParamLimits

0x26f6,	// (0x000052bf) tabs_4_active_pane_srt

0x2708,	// (0x000052d1) tabs_4_passive_pane_cp2_srt_ParamLimits

0x2708,	// (0x000052d1) tabs_4_passive_pane_cp2_srt

0xf4af,	// (0x00012078) aid_size_cell_toolbar

0x2264,	// (0x00004e2d) main_idle_act_pane_ParamLimits

0x00b5,	// (0x00002c7e) popup_large_graphic_colour_window_ParamLimits

0xa99a,	// (0x0000d563) popup_toolbar_window_ParamLimits

0xa99a,	// (0x0000d563) popup_toolbar_window

0x2467,	// (0x00005030) list_single_graphic_2heading_pane_ParamLimits

0x2467,	// (0x00005030) list_single_graphic_2heading_pane

0xeab6,	// (0x0001167f) aid_size_cell_apps_grid_lsc_pane

0xeac8,	// (0x00011691) aid_size_cell_apps_grid_prt_pane

0xf47e,	// (0x00012047) bg_wml_button_pane_cp1_ParamLimits

0xf47e,	// (0x00012047) bg_wml_button_pane_cp1

0xafcb,	// (0x0000db94) form_midp_field_text_pane_t1_ParamLimits

0x0c08,	// (0x000037d1) input_focus_pane_cp050_ParamLimits

0x0f0f,	// (0x00003ad8) list_midp_form_text_pane_ParamLimits

0x0eb2,	// (0x00003a7b) input_focus_pane_cp051_ParamLimits

0x0ec6,	// (0x00003a8f) list_midp_choice_pane_ParamLimits

0xaf30,	// (0x0000daf9) list_single_2graphic_pane_cp3_ParamLimits

0xaf30,	// (0x0000daf9) list_single_2graphic_pane_cp3

0xaf44,	// (0x0000db0d) list_single_midp_graphic_pane_ParamLimits

0xaf44,	// (0x0000db0d) list_single_midp_graphic_pane

0x08fe,	// (0x000034c7) list_single_graphic_2heading_pane_g1_ParamLimits

0x08fe,	// (0x000034c7) list_single_graphic_2heading_pane_g1

0xf187,	// (0x00011d50) list_single_graphic_2heading_pane_g4_ParamLimits

0xf187,	// (0x00011d50) list_single_graphic_2heading_pane_g4

0x090a,	// (0x000034d3) list_single_graphic_2heading_pane_g5_ParamLimits

0x090a,	// (0x000034d3) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00012340) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00012340) list_single_graphic_2heading_pane_g

0x0916,	// (0x000034df) list_single_graphic_2heading_pane_t1_ParamLimits

0x0916,	// (0x000034df) list_single_graphic_2heading_pane_t1

0x092a,	// (0x000034f3) list_single_graphic_2heading_pane_t2_ParamLimits

0x092a,	// (0x000034f3) list_single_graphic_2heading_pane_t2

0x0944,	// (0x0000350d) list_single_graphic_2heading_pane_t3_ParamLimits

0x0944,	// (0x0000350d) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00012347) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00012347) list_single_graphic_2heading_pane_t

0x095c,	// (0x00003525) bg_popup_sub_pane_cp2

0x0986,	// (0x0000354f) grid_toobar_pane

0x09c2,	// (0x0000358b) cell_toolbar_pane_ParamLimits

0x09c2,	// (0x0000358b) cell_toolbar_pane

0x0a14,	// (0x000035dd) cell_toolbar_pane_g1_ParamLimits

0x0a14,	// (0x000035dd) cell_toolbar_pane_g1

0xae48,	// (0x0000da11) cell_toolbar_pane_g2_ParamLimits

0xae48,	// (0x0000da11) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x0001234e) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x0001234e) cell_toolbar_pane_g

0x0a4a,	// (0x00003613) grid_highlight_pane_cp2_ParamLimits

0x0a4a,	// (0x00003613) grid_highlight_pane_cp2

0x0a64,	// (0x0000362d) toolbar_button_pane

0x0a70,	// (0x00003639) toolbar_button_pane_g1

0x0a78,	// (0x00003641) toolbar_button_pane_g2

0x0a80,	// (0x00003649) toolbar_button_pane_g3

0x0a88,	// (0x00003651) toolbar_button_pane_g4

0x0a90,	// (0x00003659) toolbar_button_pane_g5

0x0a98,	// (0x00003661) toolbar_button_pane_g6

0x0aa0,	// (0x00003669) toolbar_button_pane_g7

0x0aa8,	// (0x00003671) toolbar_button_pane_g8

0x0ab0,	// (0x00003679) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x00012353) toolbar_button_pane_g

0x0ac0,	// (0x00003689) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0ac0,	// (0x00003689) list_single_2graphic_pane_g1_cp3

0xae5c,	// (0x0000da25) list_single_2graphic_pane_g2_cp3_ParamLimits

0xae5c,	// (0x0000da25) list_single_2graphic_pane_g2_cp3

0xf0f4,	// (0x00011cbd) list_single_2graphic_pane_g3_cp3

0x0add,	// (0x000036a6) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0add,	// (0x000036a6) list_single_2graphic_pane_g4_cp3

0xae6d,	// (0x0000da36) list_single_2graphic_pane_t1_cp3_ParamLimits

0xae6d,	// (0x0000da36) list_single_2graphic_pane_t1_cp3

0xed5d,	// (0x00011926) list_single_midp_graphic_pane_g2_ParamLimits

0xed5d,	// (0x00011926) list_single_midp_graphic_pane_g2

0xf4b7,	// (0x00012080) aid_zoom_text_primary

0xf4bf,	// (0x00012088) aid_zoom_text_secondary

0xa0bb,	// (0x0000cc84) status_small_pane_g7_ParamLimits

0xa0bb,	// (0x0000cc84) status_small_pane_g7

0xa0de,	// (0x0000cca7) status_small_pane_t1_ParamLimits

0x8f3c,	// (0x0000bb05) title_pane_g2

0x0003,

0xf529,	// (0x000120f2) title_pane_g

0x934f,	// (0x0000bf18) aid_size_cell_colour_1_pane_ParamLimits

0x934f,	// (0x0000bf18) aid_size_cell_colour_1_pane

0x9363,	// (0x0000bf2c) aid_size_cell_colour_2_pane_ParamLimits

0x9363,	// (0x0000bf2c) aid_size_cell_colour_2_pane

0x9377,	// (0x0000bf40) aid_size_cell_colour_3_pane_ParamLimits

0x9377,	// (0x0000bf40) aid_size_cell_colour_3_pane

0x938b,	// (0x0000bf54) aid_size_cell_colour_4_pane_ParamLimits

0x938b,	// (0x0000bf54) aid_size_cell_colour_4_pane

0xe932,	// (0x000114fb) title_pane_stacon_g1_ParamLimits

0xe932,	// (0x000114fb) title_pane_stacon_g1

0x1311,	// (0x00003eda) popup_note_wait_window_g3_ParamLimits

0x1311,	// (0x00003eda) popup_note_wait_window_g3

0x1387,	// (0x00003f50) popup_note_wait_window_t5_ParamLimits

0x1387,	// (0x00003f50) popup_note_wait_window_t5

0xe13d,	// (0x00010d06) main_feb_china_hwr_fs_writing_pane

0xa34e,	// (0x0000cf17) popup_feb_china_hwr_fs_window_ParamLimits

0xa34e,	// (0x0000cf17) popup_feb_china_hwr_fs_window

0xae89,	// (0x0000da52) aid_size_cell_hwr_fs_ParamLimits

0xae89,	// (0x0000da52) aid_size_cell_hwr_fs

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp3_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp3

0xae9e,	// (0x0000da67) grid_hwr_fs_pane_ParamLimits

0xae9e,	// (0x0000da67) grid_hwr_fs_pane

0x0c2c,	// (0x000037f5) linegrid_hwr_fs_pane_ParamLimits

0x0c2c,	// (0x000037f5) linegrid_hwr_fs_pane

0xaeb6,	// (0x0000da7f) cell_hwr_fs_pane_ParamLimits

0xaeb6,	// (0x0000da7f) cell_hwr_fs_pane

0x0c5e,	// (0x00003827) linegrid_hwr_fs_pane_g1_ParamLimits

0x0c5e,	// (0x00003827) linegrid_hwr_fs_pane_g1

0xaedc,	// (0x0000daa5) linegrid_hwr_fs_pane_g2_ParamLimits

0xaedc,	// (0x0000daa5) linegrid_hwr_fs_pane_g2

0x0c7c,	// (0x00003845) linegrid_hwr_fs_pane_g3_ParamLimits

0x0c7c,	// (0x00003845) linegrid_hwr_fs_pane_g3

0xaeee,	// (0x0000dab7) linegrid_hwr_fs_pane_g4_ParamLimits

0xaeee,	// (0x0000dab7) linegrid_hwr_fs_pane_g4

0x0ca2,	// (0x0000386b) linegrid_hwr_fs_pane_g5_ParamLimits

0x0ca2,	// (0x0000386b) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x00012379) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x00012379) linegrid_hwr_fs_pane_g

0x0cb8,	// (0x00003881) cell_hwr_fs_pane_g1_ParamLimits

0x0cb8,	// (0x00003881) cell_hwr_fs_pane_g1

0x0838,	// (0x00003401) cell_hwr_fs_pane_g2_ParamLimits

0x0838,	// (0x00003401) cell_hwr_fs_pane_g2

0xaf08,	// (0x0000dad1) cell_hwr_fs_pane_g3_ParamLimits

0xaf08,	// (0x0000dad1) cell_hwr_fs_pane_g3

0xaf15,	// (0x0000dade) cell_hwr_fs_pane_g4_ParamLimits

0xaf15,	// (0x0000dade) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x00012384) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x00012384) cell_hwr_fs_pane_g

0xaf22,	// (0x0000daeb) cell_hwr_fs_pane_t1

0xe13d,	// (0x00010d06) grid_highlight_pane_cp6

0xe13d,	// (0x00010d06) main_idle_act2_pane

0xe762,	// (0x0001132b) aid_inside_area_popup_secondary

0xb36f,	// (0x0000df38) aid_inside_area_window_primary_ParamLimits

0xb36f,	// (0x0000df38) aid_inside_area_window_primary

0xb9f4,	// (0x0000e5bd) ai2_news_ticker_pane

0x291d,	// (0x000054e6) aid_size_cell_ai1_link_ParamLimits

0x291d,	// (0x000054e6) aid_size_cell_ai1_link

0xb9fc,	// (0x0000e5c5) popup_ai2_data_window_ParamLimits

0xb9fc,	// (0x0000e5c5) popup_ai2_data_window

0x294d,	// (0x00005516) popup_ai2_link_window_ParamLimits

0x294d,	// (0x00005516) popup_ai2_link_window

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp4_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp4

0x2961,	// (0x0000552a) grid_ai2_link_pane_ParamLimits

0x2961,	// (0x0000552a) grid_ai2_link_pane

0x2978,	// (0x00005541) popup_ai2_link_window_g1_ParamLimits

0x2978,	// (0x00005541) popup_ai2_link_window_g1

0x2984,	// (0x0000554d) popup_ai2_link_window_g2_ParamLimits

0x2984,	// (0x0000554d) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00012557) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00012557) popup_ai2_link_window_g

0x2993,	// (0x0000555c) ai2_mp_button_pane

0x299b,	// (0x00005564) ai2_mp_volume_pane

0x0eb2,	// (0x00003a7b) bg_popup_sub_pane_cp5_ParamLimits

0x0eb2,	// (0x00003a7b) bg_popup_sub_pane_cp5

0x29a3,	// (0x0000556c) heading_ai2_gene_pane_ParamLimits

0x29a3,	// (0x0000556c) heading_ai2_gene_pane

0x29af,	// (0x00005578) list_ai2_gene_pane_ParamLimits

0x29af,	// (0x00005578) list_ai2_gene_pane

0x29f7,	// (0x000055c0) cell_ai2_link_pane_ParamLimits

0x29f7,	// (0x000055c0) cell_ai2_link_pane

0x2a0d,	// (0x000055d6) cell_ai2_link_pane_g1

0xe13d,	// (0x00010d06) grid_highlight_pane_cp7

0x2add,	// (0x000056a6) ai2_mp_volume_pane_g1

0x2ae5,	// (0x000056ae) ai2_mp_volume_pane_g2

0x2a52,	// (0x0000561b) list_ai2_gene_pane_t1

0x2aed,	// (0x000056b6) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00012570) ai2_mp_volume_pane_g

0xba12,	// (0x0000e5db) volume_small_pane_cp3

0x2afe,	// (0x000056c7) aid_size_cell_ai2_button

0x2b06,	// (0x000056cf) grid_ai2_button_pane

0x2b0f,	// (0x000056d8) cell_ai2_button_pane_ParamLimits

0x2b0f,	// (0x000056d8) cell_ai2_button_pane

0xdfc4,	// (0x00010b8d) cell_ai2_button_pane_g1

0xe13d,	// (0x00010d06) grid_highlight_pane_cp8

0x2a9d,	// (0x00005666) ai2_gene_pane_t1_ParamLimits

0x2a9d,	// (0x00005666) ai2_gene_pane_t1

0xa2b0,	// (0x0000ce79) aid_height_parent_landscape

0xb693,	// (0x0000e25c) aid_height_set_list

0x2264,	// (0x00004e2d) aid_size_parent

0x2680,	// (0x00005249) aid_size_cell_graphic_pane_ParamLimits

0x29bf,	// (0x00005588) popup_ai2_data_window_g1_ParamLimits

0x29bf,	// (0x00005588) popup_ai2_data_window_g1

0x29cb,	// (0x00005594) ai2_news_ticker_pane_g1

0x29d3,	// (0x0000559c) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x0001255c) ai2_news_ticker_pane_g

0x29db,	// (0x000055a4) ai2_news_ticker_pane_t1

0x29e9,	// (0x000055b2) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x00012561) ai2_news_ticker_pane_t

0x2a16,	// (0x000055df) heading_ai2_gene_pane_g1

0x2a1e,	// (0x000055e7) heading_ai2_gene_pane_t1_ParamLimits

0x2a1e,	// (0x000055e7) heading_ai2_gene_pane_t1

0x2a33,	// (0x000055fc) list_highlight_pane_cp6

0x2a3b,	// (0x00005604) ai2_gene_pane_ParamLimits

0x2a3b,	// (0x00005604) ai2_gene_pane

0x2a60,	// (0x00005629) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x00012566) list_ai2_gene_pane_t

0x2a6e,	// (0x00005637) list_highlight_pane_cp8_ParamLimits

0x2a6e,	// (0x00005637) list_highlight_pane_cp8

0x2a7f,	// (0x00005648) ai2_gene_pane_g1_ParamLimits

0x2a7f,	// (0x00005648) ai2_gene_pane_g1

0x2a91,	// (0x0000565a) ai2_gene_pane_g2_ParamLimits

0x2a91,	// (0x0000565a) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x0001256b) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x0001256b) ai2_gene_pane_g

0xe528,	// (0x000110f1) scroll_pane_cp12

0xa26d,	// (0x0000ce36) control_pane_t3_ParamLimits

0xa26d,	// (0x0000ce36) control_pane_t3

0xa0cf,	// (0x0000cc98) status_small_pane_g8_ParamLimits

0xa0cf,	// (0x0000cc98) status_small_pane_g8

0xa411,	// (0x0000cfda) popup_find_window_ParamLimits

0xa69e,	// (0x0000d267) popup_note_image_window_ParamLimits

0x09f2,	// (0x000035bb) list_double2_graphic_pane_vc_g1_ParamLimits

0x09f2,	// (0x000035bb) list_double2_graphic_pane_vc_g1

0xf187,	// (0x00011d50) list_double2_graphic_pane_vc_g2_ParamLimits

0xf187,	// (0x00011d50) list_double2_graphic_pane_vc_g2

0x090a,	// (0x000034d3) list_double2_graphic_pane_vc_g3_ParamLimits

0x090a,	// (0x000034d3) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x00012165) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x00012165) list_double2_graphic_pane_vc_g

0x09fe,	// (0x000035c7) list_double2_graphic_pane_vc_t1_ParamLimits

0x09fe,	// (0x000035c7) list_double2_graphic_pane_vc_t1

0xf187,	// (0x00011d50) list_single_heading_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_heading_pane_vc_g1

0x090a,	// (0x000034d3) list_single_heading_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_heading_pane_vc_g

0x0b05,	// (0x000036ce) list_single_heading_pane_vc_t1_ParamLimits

0x0b05,	// (0x000036ce) list_single_heading_pane_vc_t1

0x0b1b,	// (0x000036e4) list_single_heading_pane_vc_t2_ParamLimits

0x0b1b,	// (0x000036e4) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00012368) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00012368) list_single_heading_pane_vc_t

0x0b43,	// (0x0000370c) list_setting_number_pane_vc_g1_ParamLimits

0x0b43,	// (0x0000370c) list_setting_number_pane_vc_g1

0x0b4f,	// (0x00003718) list_setting_number_pane_vc_g2_ParamLimits

0x0b4f,	// (0x00003718) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001236d) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001236d) list_setting_number_pane_vc_g

0x0b5b,	// (0x00003724) list_setting_number_pane_vc_t1_ParamLimits

0x0b5b,	// (0x00003724) list_setting_number_pane_vc_t1

0x0b6f,	// (0x00003738) list_setting_number_pane_vc_t2_ParamLimits

0x0b6f,	// (0x00003738) list_setting_number_pane_vc_t2

0x0b8b,	// (0x00003754) list_setting_number_pane_vc_t3_ParamLimits

0x0b8b,	// (0x00003754) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x00012372) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x00012372) list_setting_number_pane_vc_t

0x0bb7,	// (0x00003780) set_value_pane_vc_ParamLimits

0x0bb7,	// (0x00003780) set_value_pane_vc

0x2467,	// (0x00005030) list_double2_graphic_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double2_graphic_pane_vc

0x247a,	// (0x00005043) list_double2_large_graphic_pane_vc_ParamLimits

0x247a,	// (0x00005043) list_double2_large_graphic_pane_vc

0x2467,	// (0x00005030) list_double2_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double2_pane_vc

0x2467,	// (0x00005030) list_double_graphic_heading_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_graphic_heading_pane_vc

0x2467,	// (0x00005030) list_double_graphic_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_graphic_pane_vc

0x2467,	// (0x00005030) list_double_heading_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_heading_pane_vc

0x248c,	// (0x00005055) list_double_large_graphic_pane_vc_ParamLimits

0x248c,	// (0x00005055) list_double_large_graphic_pane_vc

0x2467,	// (0x00005030) list_double_number_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_number_pane_vc

0x2467,	// (0x00005030) list_double_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_pane_vc

0x2467,	// (0x00005030) list_double_time_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_double_time_pane_vc

0x2467,	// (0x00005030) list_setting_number_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_setting_number_pane_vc

0x2467,	// (0x00005030) list_setting_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_setting_pane_vc

0x2467,	// (0x00005030) list_single_graphic_heading_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_single_graphic_heading_pane_vc

0x2467,	// (0x00005030) list_single_heading_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_single_heading_pane_vc

0x2467,	// (0x00005030) list_single_number_heading_pane_vc_ParamLimits

0x2467,	// (0x00005030) list_single_number_heading_pane_vc

0x2b43,	// (0x0000570c) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2b43,	// (0x0000570c) list_double_graphic_heading_pane_vc_g1

0xf187,	// (0x00011d50) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf187,	// (0x00011d50) list_double_graphic_heading_pane_vc_g2

0x090a,	// (0x000034d3) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x090a,	// (0x000034d3) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x00012577) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x00012577) list_double_graphic_heading_pane_vc_g

0x2b4f,	// (0x00005718) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2b4f,	// (0x00005718) list_double_graphic_heading_pane_vc_t1

0x2b63,	// (0x0000572c) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2b63,	// (0x0000572c) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x0001257e) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x0001257e) list_double_graphic_heading_pane_vc_t

0x0b43,	// (0x0000370c) list_setting_pane_vc_g1_ParamLimits

0x0b43,	// (0x0000370c) list_setting_pane_vc_g1

0x0b4f,	// (0x00003718) list_setting_pane_vc_g2_ParamLimits

0x0b4f,	// (0x00003718) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x0001236d) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x0001236d) list_setting_pane_vc_g

0x2dd1,	// (0x0000599a) list_setting_pane_vc_t1_ParamLimits

0x2dd1,	// (0x0000599a) list_setting_pane_vc_t1

0x2ded,	// (0x000059b6) list_setting_pane_vc_t2_ParamLimits

0x2ded,	// (0x000059b6) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x000125c1) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x000125c1) list_setting_pane_vc_t

0x0bb7,	// (0x00003780) set_value_pane_cp_vc_ParamLimits

0x0bb7,	// (0x00003780) set_value_pane_cp_vc

0xf187,	// (0x00011d50) list_single_number_heading_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_single_number_heading_pane_vc_g1

0x090a,	// (0x000034d3) list_single_number_heading_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_single_number_heading_pane_vc_g

0x2e07,	// (0x000059d0) list_single_number_heading_pane_vc_t1_ParamLimits

0x2e07,	// (0x000059d0) list_single_number_heading_pane_vc_t1

0x2e1d,	// (0x000059e6) list_single_number_heading_pane_vc_t2_ParamLimits

0x2e1d,	// (0x000059e6) list_single_number_heading_pane_vc_t2

0x2e2f,	// (0x000059f8) list_single_number_heading_pane_vc_t3_ParamLimits

0x2e2f,	// (0x000059f8) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x000125c6) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x000125c6) list_single_number_heading_pane_vc_t

0x2e41,	// (0x00005a0a) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2e41,	// (0x00005a0a) list_single_graphic_heading_pane_vc_g1

0xf187,	// (0x00011d50) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf187,	// (0x00011d50) list_single_graphic_heading_pane_vc_g4

0x090a,	// (0x000034d3) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x090a,	// (0x000034d3) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x000125cd) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000125cd) list_single_graphic_heading_pane_vc_g

0x18e7,	// (0x000044b0) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x18e7,	// (0x000044b0) list_single_graphic_heading_pane_vc_t1

0x2e4d,	// (0x00005a16) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2e4d,	// (0x00005a16) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x000125d4) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x000125d4) list_single_graphic_heading_pane_vc_t

0xf187,	// (0x00011d50) list_double2_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_double2_pane_vc_g1

0x090a,	// (0x000034d3) list_double2_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_double2_pane_vc_g

0x2e5f,	// (0x00005a28) list_double2_pane_vc_t1_ParamLimits

0x2e5f,	// (0x00005a28) list_double2_pane_vc_t1

0x2e77,	// (0x00005a40) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2e77,	// (0x00005a40) list_double2_large_graphic_pane_vc_g1

0x2e83,	// (0x00005a4c) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2e83,	// (0x00005a4c) list_double2_large_graphic_pane_vc_g2

0x2e8f,	// (0x00005a58) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2e8f,	// (0x00005a58) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x00012189) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x00012189) list_double2_large_graphic_pane_vc_g

0x2e9b,	// (0x00005a64) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2e9b,	// (0x00005a64) list_double2_large_graphic_pane_vc_t1

0x2eb1,	// (0x00005a7a) list_double_time_pane_vc_g1_ParamLimits

0x2eb1,	// (0x00005a7a) list_double_time_pane_vc_g1

0x2ebd,	// (0x00005a86) list_double_time_pane_vc_g2_ParamLimits

0x2ebd,	// (0x00005a86) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x000125d9) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x000125d9) list_double_time_pane_vc_g

0x2ec9,	// (0x00005a92) list_double_time_pane_vc_t1_ParamLimits

0x2ec9,	// (0x00005a92) list_double_time_pane_vc_t1

0x2eed,	// (0x00005ab6) list_double_time_pane_vc_t2_ParamLimits

0x2eed,	// (0x00005ab6) list_double_time_pane_vc_t2

0x2f1c,	// (0x00005ae5) list_double_time_pane_vc_t3_ParamLimits

0x2f1c,	// (0x00005ae5) list_double_time_pane_vc_t3

0x2f2e,	// (0x00005af7) list_double_time_pane_vc_t4_ParamLimits

0x2f2e,	// (0x00005af7) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x000125de) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x000125de) list_double_time_pane_vc_t

0xf187,	// (0x00011d50) list_double_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_double_pane_vc_g1

0x090a,	// (0x000034d3) list_double_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_double_pane_vc_g

0x2f42,	// (0x00005b0b) list_double_pane_vc_t1_ParamLimits

0x2f42,	// (0x00005b0b) list_double_pane_vc_t1

0x2f56,	// (0x00005b1f) list_double_pane_vc_t2_ParamLimits

0x2f56,	// (0x00005b1f) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x000125e7) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x000125e7) list_double_pane_vc_t

0xf187,	// (0x00011d50) list_double_number_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_double_number_pane_vc_g1

0x090a,	// (0x000034d3) list_double_number_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_double_number_pane_vc_g

0x2f6e,	// (0x00005b37) list_double_number_pane_vc_t1_ParamLimits

0x2f6e,	// (0x00005b37) list_double_number_pane_vc_t1

0x2f42,	// (0x00005b0b) list_double_number_pane_vc_t2_ParamLimits

0x2f42,	// (0x00005b0b) list_double_number_pane_vc_t2

0x2f80,	// (0x00005b49) list_double_number_pane_vc_t3_ParamLimits

0x2f80,	// (0x00005b49) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x000125ec) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x000125ec) list_double_number_pane_vc_t

0x2f98,	// (0x00005b61) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2f98,	// (0x00005b61) list_double_large_graphic_pane_vc_g1

0x2fb4,	// (0x00005b7d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2fb4,	// (0x00005b7d) list_double_large_graphic_pane_vc_g2

0x2fc8,	// (0x00005b91) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2fc8,	// (0x00005b91) list_double_large_graphic_pane_vc_g3

0x2fd7,	// (0x00005ba0) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2fd7,	// (0x00005ba0) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x000125f3) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x000125f3) list_double_large_graphic_pane_vc_g

0x2fe6,	// (0x00005baf) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2fe6,	// (0x00005baf) list_double_large_graphic_pane_vc_t1

0x3002,	// (0x00005bcb) list_double_large_graphic_pane_vc_t2_ParamLimits

0x3002,	// (0x00005bcb) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x000125fc) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x000125fc) list_double_large_graphic_pane_vc_t

0xf187,	// (0x00011d50) list_double_heading_pane_vc_g1_ParamLimits

0xf187,	// (0x00011d50) list_double_heading_pane_vc_g1

0x090a,	// (0x000034d3) list_double_heading_pane_vc_g2_ParamLimits

0x090a,	// (0x000034d3) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x0001216c) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x0001216c) list_double_heading_pane_vc_g

0x3024,	// (0x00005bed) list_double_heading_pane_vc_t1_ParamLimits

0x3024,	// (0x00005bed) list_double_heading_pane_vc_t1

0x3038,	// (0x00005c01) list_double_heading_pane_vc_t2_ParamLimits

0x3038,	// (0x00005c01) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x00012601) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x00012601) list_double_heading_pane_vc_t

0x3050,	// (0x00005c19) list_double_graphic_pane_vc_g1_ParamLimits

0x3050,	// (0x00005c19) list_double_graphic_pane_vc_g1

0x3063,	// (0x00005c2c) list_double_graphic_pane_vc_g2_ParamLimits

0x3063,	// (0x00005c2c) list_double_graphic_pane_vc_g2

0xf187,	// (0x00011d50) list_double_graphic_pane_vc_g3_ParamLimits

0xf187,	// (0x00011d50) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x00012606) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x00012606) list_double_graphic_pane_vc_g

0x3080,	// (0x00005c49) list_double_graphic_pane_vc_t1_ParamLimits

0x3080,	// (0x00005c49) list_double_graphic_pane_vc_t1

0x309f,	// (0x00005c68) list_double_graphic_pane_vc_t2_ParamLimits

0x309f,	// (0x00005c68) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x0001260f) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x0001260f) list_double_graphic_pane_vc_t

0xdfe6,	// (0x00010baf) aid_size_cell_fastswap

0x8d03,	// (0x0000b8cc) aid_size_cell_touch_ParamLimits

0x8d03,	// (0x0000b8cc) aid_size_cell_touch

0xe147,	// (0x00010d10) popup_fast_swap_wide_window_ParamLimits

0xe147,	// (0x00010d10) popup_fast_swap_wide_window

0x8ed3,	// (0x0000ba9c) touch_pane_ParamLimits

0x8ed3,	// (0x0000ba9c) touch_pane

0xe5a4,	// (0x0001116d) button_value_adjust_pane_cp2

0xe5ac,	// (0x00011175) button_value_adjust_pane_cp4

0xe5b4,	// (0x0001117d) form_field_data_pane_cp2

0x992e,	// (0x0000c4f7) form_field_data_wide_pane_cp2

0xeaf7,	// (0x000116c0) bg_scroll_pane_ParamLimits

0x9c64,	// (0x0000c82d) scroll_handle_pane_ParamLimits

0xeb16,	// (0x000116df) scroll_sc2_down_pane_ParamLimits

0xeb16,	// (0x000116df) scroll_sc2_down_pane

0xeb3d,	// (0x00011706) scroll_sc2_up_pane_ParamLimits

0xeb3d,	// (0x00011706) scroll_sc2_up_pane

0xbb4e,	// (0x0000e717) grid_wheel_folder_pane_g1_ParamLimits

0xbb4e,	// (0x0000e717) grid_wheel_folder_pane_g1

0xef98,	// (0x00011b61) clock_nsta_pane_cp2_ParamLimits

0xef98,	// (0x00011b61) clock_nsta_pane_cp2

0x9f95,	// (0x0000cb5e) listscroll_midp_pane_ParamLimits

0x9fa1,	// (0x0000cb6a) midp_canvas_pane

0xf4a7,	// (0x00012070) nsta_clock_indic_pane

0xf4e7,	// (0x000120b0) listscroll_form_pane_vc

0xf4f7,	// (0x000120c0) listscroll_set_pane_vc_ParamLimits

0xf4f7,	// (0x000120c0) listscroll_set_pane_vc

0xab53,	// (0x0000d71c) clock_nsta_pane

0xab7d,	// (0x0000d746) indicator_nsta_pane

0x095c,	// (0x00003525) bg_popup_sub_pane_cp2_ParamLimits

0x0970,	// (0x00003539) find_pane_cp2_ParamLimits

0x0970,	// (0x00003539) find_pane_cp2

0x0986,	// (0x0000354f) grid_toobar_pane_ParamLimits

0x0bc7,	// (0x00003790) list_form_gen_pane_vc_ParamLimits

0x0bc7,	// (0x00003790) list_form_gen_pane_vc

0x0bdd,	// (0x000037a6) scroll_pane_cp8_vc_ParamLimits

0x0bdd,	// (0x000037a6) scroll_pane_cp8_vc

0x0cf6,	// (0x000038bf) data_form_wide_pane_vc_ParamLimits

0x0cf6,	// (0x000038bf) data_form_wide_pane_vc

0x0d02,	// (0x000038cb) form_field_data_wide_pane_vc_g1

0x0d0a,	// (0x000038d3) form_field_data_wide_pane_vc_t1_ParamLimits

0x0d0a,	// (0x000038d3) form_field_data_wide_pane_vc_t1

0xe5db,	// (0x000111a4) input_focus_pane_cp6_vc_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_cp6_vc

0x1098,	// (0x00003c61) list_midp_pane_ParamLimits

0x26ea,	// (0x000052b3) scroll_pane_cp16_ParamLimits

0x26ea,	// (0x000052b3) scroll_pane_cp16

0x10ee,	// (0x00003cb7) button_value_adjust_pane_ParamLimits

0x10ee,	// (0x00003cb7) button_value_adjust_pane

0xb6a4,	// (0x0000e26d) button_value_adjust_pane_cp6_ParamLimits

0xb6a4,	// (0x0000e26d) button_value_adjust_pane_cp6

0xb7be,	// (0x0000e387) settings_code_pane_cp_ParamLimits

0xb7be,	// (0x0000e387) settings_code_pane_cp

0xdfc4,	// (0x00010b8d) cell_touch_pane_g1

0xdfc4,	// (0x00010b8d) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x00012293) cell_touch_pane_g

0xba1b,	// (0x0000e5e4) cell_touch_pane_cp_ParamLimits

0xba1b,	// (0x0000e5e4) cell_touch_pane_cp

0xba37,	// (0x0000e600) cell_touch_pane_ParamLimits

0xba37,	// (0x0000e600) cell_touch_pane

0xdfc4,	// (0x00010b8d) scroll_sc2_down_pane_g1

0xdfc4,	// (0x00010b8d) scroll_sc2_up_pane_g1

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp4_vc

0x2b7b,	// (0x00005744) list_set_graphic_pane_vc_g1_ParamLimits

0x2b7b,	// (0x00005744) list_set_graphic_pane_vc_g1

0x2b87,	// (0x00005750) list_set_graphic_pane_vc_g2_ParamLimits

0x2b87,	// (0x00005750) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x00012583) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x00012583) list_set_graphic_pane_vc_g

0x2b93,	// (0x0000575c) text_primary_small_cp13_vc_ParamLimits

0x2b93,	// (0x0000575c) text_primary_small_cp13_vc

0x2bab,	// (0x00005774) list_set_graphic_pane_vc_ParamLimits

0x2bab,	// (0x00005774) list_set_graphic_pane_vc

0xe13d,	// (0x00010d06) input_focus_pane_cp2_vc

0xdfc4,	// (0x00010b8d) setting_code_pane_vc_g1

0xe1d0,	// (0x00010d99) setting_code_pane_vc_t1

0x2bbe,	// (0x00005787) set_text_pane_vc_t1_ParamLimits

0x2bbe,	// (0x00005787) set_text_pane_vc_t1

0xe13d,	// (0x00010d06) input_focus_pane_cp1_vc

0x2bdb,	// (0x000057a4) list_set_text_pane_vc

0xdfc4,	// (0x00010b8d) setting_text_pane_vc_g1

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp2_vc

0xe1c7,	// (0x00010d90) setting_slider_graphic_pane_vc_g1

0x2be5,	// (0x000057ae) setting_slider_graphic_pane_vc_t1

0x2bf5,	// (0x000057be) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x00012588) setting_slider_graphic_pane_vc_t

0x2c05,	// (0x000057ce) slider_set_pane_cp_vc

0x2c0d,	// (0x000057d6) slider_set_pane_vc_g1

0x2c16,	// (0x000057df) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x0001258d) slider_set_pane_vc_g

0xe6a1,	// (0x0001126a) set_opt_bg_pane_g1_copy1

0xe6a9,	// (0x00011272) set_opt_bg_pane_g2_copy1

0x2c42,	// (0x0000580b) set_opt_bg_pane_g3_copy1

0xe6b9,	// (0x00011282) set_opt_bg_pane_g4_copy1

0xe6c1,	// (0x0001128a) set_opt_bg_pane_g5_copy1

0xe6c9,	// (0x00011292) set_opt_bg_pane_g6_copy1

0x2c4a,	// (0x00005813) set_opt_bg_pane_g7_copy1

0x2c54,	// (0x0000581d) set_opt_bg_pane_g8_copy1

0x2c5c,	// (0x00005825) set_opt_bg_pane_g9_copy1

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp_vc

0x2c64,	// (0x0000582d) setting_slider_pane_vc_t1

0x2c73,	// (0x0000583c) setting_slider_pane_vc_t2

0x2c83,	// (0x0000584c) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x0001259c) setting_slider_pane_vc_t

0x2c93,	// (0x0000585c) slider_set_pane_vc

0x190f,	// (0x000044d8) volume_set_pane_vc_g1

0x2c9b,	// (0x00005864) volume_set_pane_vc_g2

0x2ca4,	// (0x0000586d) volume_set_pane_vc_g3

0x2cad,	// (0x00005876) volume_set_pane_vc_g4

0x2cb6,	// (0x0000587f) volume_set_pane_vc_g5

0x2cbf,	// (0x00005888) volume_set_pane_vc_g6

0x2cc8,	// (0x00005891) volume_set_pane_vc_g7

0x2cd1,	// (0x0000589a) volume_set_pane_vc_g8

0x2cda,	// (0x000058a3) volume_set_pane_vc_g9

0x2ce3,	// (0x000058ac) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x000125a3) volume_set_pane_vc_g

0x2cec,	// (0x000058b5) volume_set_pane_vc

0x2cf6,	// (0x000058bf) button_value_adjust_pane_cp1_vc

0x2d00,	// (0x000058c9) list_highlight_pane_cp2_vc

0x2d09,	// (0x000058d2) list_set_pane_vc_ParamLimits

0x2d09,	// (0x000058d2) list_set_pane_vc

0x2d67,	// (0x00005930) main_pane_set_vc_t1_ParamLimits

0x2d67,	// (0x00005930) main_pane_set_vc_t1

0x2d7c,	// (0x00005945) main_pane_set_vc_t2_ParamLimits

0x2d7c,	// (0x00005945) main_pane_set_vc_t2

0x2d8e,	// (0x00005957) main_pane_set_vc_t3_ParamLimits

0x2d8e,	// (0x00005957) main_pane_set_vc_t3

0x2da0,	// (0x00005969) main_pane_set_vc_t4_ParamLimits

0x2da0,	// (0x00005969) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x000125b8) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x000125b8) main_pane_set_vc_t

0x2db2,	// (0x0000597b) setting_code_pane_vc_ParamLimits

0x2db2,	// (0x0000597b) setting_code_pane_vc

0x2dc1,	// (0x0000598a) setting_slider_graphic_pane_vc

0x2dc1,	// (0x0000598a) setting_slider_pane_vc

0x2dc1,	// (0x0000598a) setting_text_pane_vc

0x2dc1,	// (0x0000598a) setting_volume_pane_vc

0x2dc9,	// (0x00005992) scroll_pane_cp121_vc

0xe592,	// (0x0001115b) set_content_pane_vc

0x30c9,	// (0x00005c92) button_value_adjust_pane_g1

0x30d2,	// (0x00005c9b) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x00012614) button_value_adjust_pane_g

0x30db,	// (0x00005ca4) form_field_slider_wide_pane_vc_t1_ParamLimits

0x30db,	// (0x00005ca4) form_field_slider_wide_pane_vc_t1

0x30ef,	// (0x00005cb8) form_field_slider_wide_pane_vc_t2_ParamLimits

0x30ef,	// (0x00005cb8) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x00012619) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x00012619) form_field_slider_wide_pane_vc_t

0xe1ab,	// (0x00010d74) input_focus_pane_cp10_vc_ParamLimits

0xe1ab,	// (0x00010d74) input_focus_pane_cp10_vc

0x311d,	// (0x00005ce6) slider_cont_pane_cp1_vc_ParamLimits

0x311d,	// (0x00005ce6) slider_cont_pane_cp1_vc

0x312f,	// (0x00005cf8) slider_form_pane_g1_cp2

0x2c16,	// (0x000057df) slider_form_pane_g2_cp2

0x315c,	// (0x00005d25) form_field_slider_pane_vc_t3

0x316a,	// (0x00005d33) form_field_slider_pane_vc_t4

0x3178,	// (0x00005d41) slider_form_pane_vc_ParamLimits

0x3178,	// (0x00005d41) slider_form_pane_vc

0x3185,	// (0x00005d4e) form_field_slider_pane_vc_t1_ParamLimits

0x3185,	// (0x00005d4e) form_field_slider_pane_vc_t1

0x30ef,	// (0x00005cb8) form_field_slider_pane_vc_t2_ParamLimits

0x30ef,	// (0x00005cb8) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x0001262b) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x0001262b) form_field_slider_pane_vc_t

0xe1ab,	// (0x00010d74) input_focus_pane_cp9_vc_ParamLimits

0xe1ab,	// (0x00010d74) input_focus_pane_cp9_vc

0x31a1,	// (0x00005d6a) slider_cont_pane_vc_ParamLimits

0x31a1,	// (0x00005d6a) slider_cont_pane_vc

0x31b5,	// (0x00005d7e) list_form_graphic_pane_cp_vc_ParamLimits

0x31b5,	// (0x00005d7e) list_form_graphic_pane_cp_vc

0x0d02,	// (0x000038cb) form_field_popup_wide_pane_vc_g1

0x31ca,	// (0x00005d93) form_field_popup_wide_pane_vc_t1_ParamLimits

0x31ca,	// (0x00005d93) form_field_popup_wide_pane_vc_t1

0xe5db,	// (0x000111a4) input_focus_pane_cp8_vc_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_cp8_vc

0x320f,	// (0x00005dd8) list_form_wide_pane_vc_ParamLimits

0x320f,	// (0x00005dd8) list_form_wide_pane_vc

0x321b,	// (0x00005de4) list_form_graphic_pane_vc_g1

0x3223,	// (0x00005dec) list_form_graphic_pane_vc_t1_ParamLimits

0x3223,	// (0x00005dec) list_form_graphic_pane_vc_t1

0xe1b9,	// (0x00010d82) list_highlight_pane_cp5_vc_ParamLimits

0xe1b9,	// (0x00010d82) list_highlight_pane_cp5_vc

0x323f,	// (0x00005e08) list_form_graphic_pane_vc_ParamLimits

0x323f,	// (0x00005e08) list_form_graphic_pane_vc

0x0d02,	// (0x000038cb) form_field_popup_pane_vc_g1

0x3255,	// (0x00005e1e) form_field_popup_pane_vc_t1_ParamLimits

0x3255,	// (0x00005e1e) form_field_popup_pane_vc_t1

0xe5db,	// (0x000111a4) input_focus_pane_cp7_vc_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_cp7_vc

0x326c,	// (0x00005e35) list_form_pane_vc_ParamLimits

0x326c,	// (0x00005e35) list_form_pane_vc

0x3278,	// (0x00005e41) data_form_pane_vc_t1_ParamLimits

0x3278,	// (0x00005e41) data_form_pane_vc_t1

0xe6a1,	// (0x0001126a) input_focus_pane_vc_g1

0xe6a9,	// (0x00011272) input_focus_pane_vc_g2

0xe6b1,	// (0x0001127a) input_focus_pane_vc_g3

0xe6b9,	// (0x00011282) input_focus_pane_vc_g4

0xe6c1,	// (0x0001128a) input_focus_pane_vc_g5

0xe6c9,	// (0x00011292) input_focus_pane_vc_g6

0xe6d1,	// (0x0001129a) input_focus_pane_vc_g7

0xe6d9,	// (0x000112a2) input_focus_pane_vc_g8

0xe6e1,	// (0x000112aa) input_focus_pane_vc_g9

0xdfc4,	// (0x00010b8d) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x0001221c) input_focus_pane_vc_g

0x0cf6,	// (0x000038bf) data_form_pane_vc_ParamLimits

0x0cf6,	// (0x000038bf) data_form_pane_vc

0x0d02,	// (0x000038cb) form_field_data_pane_vc_g1

0x3293,	// (0x00005e5c) form_field_data_pane_vc_t1_ParamLimits

0x3293,	// (0x00005e5c) form_field_data_pane_vc_t1

0xe5db,	// (0x000111a4) input_focus_pane_vc_ParamLimits

0xe5db,	// (0x000111a4) input_focus_pane_vc

0x32ad,	// (0x00005e76) button_value_adjust_pane_cp3_vc

0x32b5,	// (0x00005e7e) button_value_adjust_pane_cp5_vc

0x32bd,	// (0x00005e86) form_field_data_pane_vc_ParamLimits

0x32bd,	// (0x00005e86) form_field_data_pane_vc

0x32d4,	// (0x00005e9d) form_field_data_pane_vc_cp2

0x32dc,	// (0x00005ea5) form_field_data_wide_pane_vc_ParamLimits

0x32dc,	// (0x00005ea5) form_field_data_wide_pane_vc

0x32f2,	// (0x00005ebb) form_field_data_wide_pane_vc_cp2

0x32fa,	// (0x00005ec3) form_field_popup_pane_vc_ParamLimits

0x32fa,	// (0x00005ec3) form_field_popup_pane_vc

0x3311,	// (0x00005eda) form_field_popup_wide_pane_vc_ParamLimits

0x3311,	// (0x00005eda) form_field_popup_wide_pane_vc

0x3327,	// (0x00005ef0) form_field_slider_pane_vc_ParamLimits

0x3327,	// (0x00005ef0) form_field_slider_pane_vc

0x333a,	// (0x00005f03) form_field_slider_wide_pane_vc_ParamLimits

0x333a,	// (0x00005f03) form_field_slider_wide_pane_vc

0xba54,	// (0x0000e61d) grid_touch_1_pane_ParamLimits

0xba54,	// (0x0000e61d) grid_touch_1_pane

0xba68,	// (0x0000e631) grid_touch_2_pane_ParamLimits

0xba68,	// (0x0000e631) grid_touch_2_pane

0x341e,	// (0x00005fe7) touch_pane_g1_ParamLimits

0x341e,	// (0x00005fe7) touch_pane_g1

0x3371,	// (0x00005f3a) cell_app_pane_cp_wide_ParamLimits

0x3371,	// (0x00005f3a) cell_app_pane_cp_wide

0x3382,	// (0x00005f4b) grid_popup_fast_wide_pane_ParamLimits

0x3382,	// (0x00005f4b) grid_popup_fast_wide_pane

0x3396,	// (0x00005f5f) scroll_pane_cp19_ParamLimits

0x3396,	// (0x00005f5f) scroll_pane_cp19

0xe13d,	// (0x00010d06) bg_popup_window_pane_cp20

0x33aa,	// (0x00005f73) listscroll_popup_fast_wide_pane

0xba92,	// (0x0000e65b) grid_indicator_nsta_pane

0x33c4,	// (0x00005f8d) clock_nsta_pane_g1

0x33cd,	// (0x00005f96) clock_nsta_pane_t1

0xba9e,	// (0x0000e667) cell_indicator_nsta_pane_ParamLimits

0xba9e,	// (0x0000e667) cell_indicator_nsta_pane

0x341e,	// (0x00005fe7) cell_indicator_nsta_pane_g1

0xbab9,	// (0x0000e682) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x0001263c) cell_indicator_nsta_pane_g

0x343e,	// (0x00006007) clock_nsta_pane_cp

0x3447,	// (0x00006010) indicator_nsta_pane_cp

0x3451,	// (0x0000601a) nsta_clock_indic_pane_g1

0xe20f,	// (0x00010dd8) grid_indicator_pane

0x9cfe,	// (0x0000c8c7) scroll_pane_cp29

0xeec5,	// (0x00011a8e) indicator_nsta_pane_cp2_ParamLimits

0xeec5,	// (0x00011a8e) indicator_nsta_pane_cp2

0xe1b9,	// (0x00010d82) main_apps_wheel_pane

0xb004,	// (0x0000dbcd) form_midp_field_text_pane_ParamLimits

0x10a4,	// (0x00003c6d) scroll_bar_cp050_ParamLimits

0x34aa,	// (0x00006073) cell_indicator_pane_ParamLimits

0x34aa,	// (0x00006073) cell_indicator_pane

0x34c3,	// (0x0000608c) cell_indicator_pane_g1

0xbad8,	// (0x0000e6a1) grid_wheel_folder_pane_ParamLimits

0xbad8,	// (0x0000e6a1) grid_wheel_folder_pane

0xbae6,	// (0x0000e6af) list_wheel_apps_pane_ParamLimits

0xbae6,	// (0x0000e6af) list_wheel_apps_pane

0xbaf4,	// (0x0000e6bd) main_apps_wheel_pane_g1_ParamLimits

0xbaf4,	// (0x0000e6bd) main_apps_wheel_pane_g1

0xbb00,	// (0x0000e6c9) main_apps_wheel_pane_g2_ParamLimits

0xbb00,	// (0x0000e6c9) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00012658) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00012658) main_apps_wheel_pane_g

0xbb0e,	// (0x0000e6d7) main_apps_wheel_pane_t1_ParamLimits

0xbb0e,	// (0x0000e6d7) main_apps_wheel_pane_t1

0xbb22,	// (0x0000e6eb) list_wheel_apps_pane_g1

0xbb2a,	// (0x0000e6f3) list_wheel_apps_pane_g2

0xbb32,	// (0x0000e6fb) list_wheel_apps_pane_g3

0xbb3a,	// (0x0000e703) list_wheel_apps_pane_g4

0xbb44,	// (0x0000e70d) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x0001265d) list_wheel_apps_pane_g

0xf144,	// (0x00011d0d) navi_icon_text_pane

0xaa47,	// (0x0000d610) aid_fill_nsta

0x358a,	// (0x00006153) navi_icon_text_pane_g1

0x3596,	// (0x0000615f) navi_icon_text_pane_t1

0xf034,	// (0x00011bfd) list_set_graphic_pane_t1_ParamLimits

0xf034,	// (0x00011bfd) list_set_graphic_pane_t1

0x17ef,	// (0x000043b8) popup_midp_note_alarm_window_t6_ParamLimits

0x17ef,	// (0x000043b8) popup_midp_note_alarm_window_t6

0x1801,	// (0x000043ca) popup_midp_note_alarm_window_t7_ParamLimits

0x1801,	// (0x000043ca) popup_midp_note_alarm_window_t7

0x1813,	// (0x000043dc) popup_midp_note_alarm_window_t8_ParamLimits

0x1813,	// (0x000043dc) popup_midp_note_alarm_window_t8

0x1825,	// (0x000043ee) popup_midp_note_alarm_window_t9_ParamLimits

0x1825,	// (0x000043ee) popup_midp_note_alarm_window_t9

0x1837,	// (0x00004400) popup_midp_note_alarm_window_t10_ParamLimits

0x1837,	// (0x00004400) popup_midp_note_alarm_window_t10

0x1849,	// (0x00004412) popup_midp_note_alarm_window_t11_ParamLimits

0x1849,	// (0x00004412) popup_midp_note_alarm_window_t11

0xb350,	// (0x0000df19) scroll_pane_cp17_ParamLimits

0xb350,	// (0x0000df19) scroll_pane_cp17

0x190f,	// (0x000044d8) volume_small_pane_cp_g1

0x35a8,	// (0x00006171) volume_small_pane_cp_g2

0x35b1,	// (0x0000617a) volume_small_pane_cp_g3

0x35ba,	// (0x00006183) volume_small_pane_cp_g4

0x35c3,	// (0x0000618c) volume_small_pane_cp_g5

0x2cb6,	// (0x0000587f) volume_small_pane_cp_g6

0x35cc,	// (0x00006195) volume_small_pane_cp_g7

0x35d5,	// (0x0000619e) volume_small_pane_cp_g8

0x35de,	// (0x000061a7) volume_small_pane_cp_g9

0x35e7,	// (0x000061b0) volume_small_pane_cp_g10

0xf2b6,	// (0x00011e7f) midp_ticker_pane_g1_ParamLimits

0xf2c2,	// (0x00011e8b) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x000122e8) midp_ticker_pane_g_ParamLimits

0xf2ce,	// (0x00011e97) midp_ticker_pane_t1_ParamLimits

0xaa6b,	// (0x0000d634) aid_fill_nsta_2

0x1090,	// (0x00003c59) list_form2_midp_pane

0x241a,	// (0x00004fe3) midp_editing_number_pane_ParamLimits

0x2429,	// (0x00004ff2) midp_ticker_pane_ParamLimits

0x35f0,	// (0x000061b9) form2_midp_field_pane

0x3614,	// (0x000061dd) scroll_pane_cp51

0x3634,	// (0x000061fd) form2_midp_button_pane_ParamLimits

0x3634,	// (0x000061fd) form2_midp_button_pane

0x3646,	// (0x0000620f) form2_midp_content_pane_ParamLimits

0x3646,	// (0x0000620f) form2_midp_content_pane

0x3660,	// (0x00006229) form2_midp_field_choice_group_pane

0x3668,	// (0x00006231) form2_midp_field_pane_g1

0x3670,	// (0x00006239) form2_midp_field_pane_g2

0x3678,	// (0x00006241) form2_midp_field_pane_g3

0x3680,	// (0x00006249) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x00012682) form2_midp_field_pane_g

0x3688,	// (0x00006251) form2_midp_gauge_slider_pane

0x3690,	// (0x00006259) form2_midp_gauge_wait_pane

0x3698,	// (0x00006261) form2_midp_image_pane_ParamLimits

0x3698,	// (0x00006261) form2_midp_image_pane

0xbb77,	// (0x0000e740) form2_midp_label_pane_ParamLimits

0xbb77,	// (0x0000e740) form2_midp_label_pane

0xbb90,	// (0x0000e759) form2_midp_label_pane_cp_ParamLimits

0xbb90,	// (0x0000e759) form2_midp_label_pane_cp

0x36ed,	// (0x000062b6) form2_midp_string_pane_ParamLimits

0x36ed,	// (0x000062b6) form2_midp_string_pane

0xbbaf,	// (0x0000e778) form2_midp_text_pane_ParamLimits

0xbbaf,	// (0x0000e778) form2_midp_text_pane

0x371a,	// (0x000062e3) form2_midp_time_pane

0x372a,	// (0x000062f3) input_focus_pane_cp51_ParamLimits

0x372a,	// (0x000062f3) input_focus_pane_cp51

0xbbc8,	// (0x0000e791) form2_midp_label_pane_t1_ParamLimits

0xbbc8,	// (0x0000e791) form2_midp_label_pane_t1

0xbc08,	// (0x0000e7d1) form2_mdip_text_pane_t1_ParamLimits

0xbc08,	// (0x0000e7d1) form2_mdip_text_pane_t1

0x37a2,	// (0x0000636b) form2_midp_time_pane_t1

0x37bd,	// (0x00006386) form2_midp_gauge_slider_pane_t1

0xbc24,	// (0x0000e7ed) form2_midp_gauge_slider_pane_t2

0xbc36,	// (0x0000e7ff) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x0001268b) form2_midp_gauge_slider_pane_t

0x37f3,	// (0x000063bc) form2_midp_slider_pane

0x37ff,	// (0x000063c8) form2_midp_gauge_wait_pane_t1

0x380d,	// (0x000063d6) form2_midp_wait_pane_ParamLimits

0x380d,	// (0x000063d6) form2_midp_wait_pane

0xbc48,	// (0x0000e811) list_single_2graphic_pane_cp4_ParamLimits

0xbc48,	// (0x0000e811) list_single_2graphic_pane_cp4

0xaf44,	// (0x0000db0d) list_single_midp_graphic_pane_cp_ParamLimits

0xaf44,	// (0x0000db0d) list_single_midp_graphic_pane_cp

0xe13d,	// (0x00010d06) list_highlight_pane_cp20

0x3860,	// (0x00006429) list_single_2graphic_pane_g1_cp4

0x2a16,	// (0x000055df) list_single_2graphic_pane_g2_cp4

0x3868,	// (0x00006431) list_single_2graphic_pane_t1_cp4

0xe1b9,	// (0x00010d82) list_highlight_pane_cp21

0x3877,	// (0x00006440) list_single_midp_graphic_pane_g4_cp

0x3886,	// (0x0000644f) list_single_midp_graphic_pane_t1_cp

0xbc5d,	// (0x0000e826) form2_mdip_string_pane_t1_ParamLimits

0xbc5d,	// (0x0000e826) form2_mdip_string_pane_t1

0xe13d,	// (0x00010d06) bg_wml_button_pane_cp2

0xdfc4,	// (0x00010b8d) form2_midp_image_pane_g1

0xe545,	// (0x0001110e) list_double_large_graphic_pane_g5_ParamLimits

0xe545,	// (0x0001110e) list_double_large_graphic_pane_g5

0x9f95,	// (0x0000cb5e) midp_form_pane_ParamLimits

0xe1b9,	// (0x00010d82) main_apps_wheel_pane_ParamLimits

0xa725,	// (0x0000d2ee) popup_preview_window_ParamLimits

0xa725,	// (0x0000d2ee) popup_preview_window

0xa9f2,	// (0x0000d5bb) popup_touch_info_window_ParamLimits

0xa9f2,	// (0x0000d5bb) popup_touch_info_window

0xaa10,	// (0x0000d5d9) popup_touch_menu_window_ParamLimits

0xaa10,	// (0x0000d5d9) popup_touch_menu_window

0xdfba,	// (0x00010b83) bg_popup_sub_pane_cp6

0x39a2,	// (0x0000656b) list_touch_menu_pane

0xbcd3,	// (0x0000e89c) list_single_touch_menu_pane_ParamLimits

0xbcd3,	// (0x0000e89c) list_single_touch_menu_pane

0xbce7,	// (0x0000e8b0) list_single_touch_menu_pane_t1

0xe1b9,	// (0x00010d82) bg_popup_sub_pane_cp7_ParamLimits

0xe1b9,	// (0x00010d82) bg_popup_sub_pane_cp7

0x39ce,	// (0x00006597) heading_sub_pane

0x39d6,	// (0x0000659f) list_touch_info_pane_ParamLimits

0x39d6,	// (0x0000659f) list_touch_info_pane

0x39e5,	// (0x000065ae) list_single_touch_info_pane_ParamLimits

0x39e5,	// (0x000065ae) list_single_touch_info_pane

0x39f7,	// (0x000065c0) list_single_touch_info_pane_t1

0x3a05,	// (0x000065ce) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x00012699) list_single_touch_info_pane_t

0xf29f,	// (0x00011e68) bg_popup_heading_pane_cp

0x3a13,	// (0x000065dc) heading_sub_pane_t1

0x0c08,	// (0x000037d1) bg_popup_preview_window_pane_cp_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_preview_window_pane_cp

0x39ce,	// (0x00006597) heading_preview_pane

0x39d6,	// (0x0000659f) list_preview_pane_ParamLimits

0x39d6,	// (0x0000659f) list_preview_pane

0x3a21,	// (0x000065ea) popup_preview_window_g1

0x39e5,	// (0x000065ae) list_single_preview_pane_ParamLimits

0x39e5,	// (0x000065ae) list_single_preview_pane

0x3a29,	// (0x000065f2) list_single_preview_pane_g1

0x3a31,	// (0x000065fa) list_single_preview_pane_t1

0x39f7,	// (0x000065c0) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x0001269e) list_single_preview_pane_t

0x3a3f,	// (0x00006608) bg_popup_heading_pane_cp2_ParamLimits

0x3a3f,	// (0x00006608) bg_popup_heading_pane_cp2

0x3a55,	// (0x0000661e) heading_preview_pane_g1

0x3a5d,	// (0x00006626) heading_preview_pane_t1_ParamLimits

0x3a5d,	// (0x00006626) heading_preview_pane_t1

0xe226,	// (0x00010def) soft_indicator_pane_t1_ParamLimits

0xe505,	// (0x000110ce) scroll_pane_ParamLimits

0xeb2b,	// (0x000116f4) scroll_sc2_left_pane

0xeb34,	// (0x000116fd) scroll_sc2_right_pane

0xeb53,	// (0x0001171c) scroll_bg_pane_g1_ParamLimits

0xeb68,	// (0x00011731) scroll_bg_pane_g2_ParamLimits

0xeb80,	// (0x00011749) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x00012273) scroll_bg_pane_g_ParamLimits

0xeb53,	// (0x0001171c) scroll_handle_pane_g1_ParamLimits

0xeb95,	// (0x0001175e) scroll_handle_pane_g2_ParamLimits

0xeb80,	// (0x00011749) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x0001227a) scroll_handle_pane_g_ParamLimits

0xa2f2,	// (0x0000cebb) popup_choice_list_window_ParamLimits

0xa2f2,	// (0x0000cebb) popup_choice_list_window

0x0968,	// (0x00003531) choice_list_pane

0x0a3c,	// (0x00003605) cell_toolbar_pane_t1

0x0a64,	// (0x0000362d) toolbar_button_pane_ParamLimits

0x1e7f,	// (0x00004a48) ai_gene_pane_1_t2_ParamLimits

0x1e7f,	// (0x00004a48) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x00012496) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x00012496) ai_gene_pane_1_t

0x3a7a,	// (0x00006643) scroll_sc2_left_pane_g1

0x3a7a,	// (0x00006643) scroll_sc2_right_pane_g1

0xf47e,	// (0x00012047) bg_popup_sub_pane_cp10

0x3a84,	// (0x0000664d) list_choice_list_pane

0xb828,	// (0x0000e3f1) list_single_choice_list_pane_ParamLimits

0xb828,	// (0x0000e3f1) list_single_choice_list_pane

0xe78b,	// (0x00011354) list_single_choice_list_pane_g1

0x9b28,	// (0x0000c6f1) list_single_choice_list_pane_t1_ParamLimits

0x9b28,	// (0x0000c6f1) list_single_choice_list_pane_t1

0x3ab8,	// (0x00006681) choice_list_pane_g1

0xbcf5,	// (0x0000e8be) choice_list_pane_t1

0xdfba,	// (0x00010b83) input_focus_pane_cp11

0xe946,	// (0x0001150f) title_pane_stacon_g2_ParamLimits

0xe946,	// (0x0001150f) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00012259) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00012259) title_pane_stacon_g

0xf29f,	// (0x00011e68) cursor_press_pane

0xa399,	// (0x0000cf62) popup_fep_hwr_window_ParamLimits

0xa399,	// (0x0000cf62) popup_fep_hwr_window

0x0060,	// (0x00002c29) popup_fep_vkb_window_ParamLimits

0x0060,	// (0x00002c29) popup_fep_vkb_window

0xbd03,	// (0x0000e8cc) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x000126c7) fep_vkb_side_pane_g_ParamLimits

0x3b0f,	// (0x000066d8) fep_hwr_candidate_pane_ParamLimits

0x3b0f,	// (0x000066d8) fep_hwr_candidate_pane

0x3b39,	// (0x00006702) fep_hwr_side_pane_ParamLimits

0x3b39,	// (0x00006702) fep_hwr_side_pane

0x3b59,	// (0x00006722) fep_hwr_top_pane_ParamLimits

0x3b59,	// (0x00006722) fep_hwr_top_pane

0x3b71,	// (0x0000673a) fep_hwr_write_pane_ParamLimits

0x3b71,	// (0x0000673a) fep_hwr_write_pane

0xfafe,	// (0x000126c7) fep_vkb_side_pane_g

0x3bab,	// (0x00006774) fep_hwr_top_pane_g1

0x3bbd,	// (0x00006786) fep_hwr_top_pane_g2

0x3bcf,	// (0x00006798) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x000126a3) fep_hwr_top_pane_g

0x3be4,	// (0x000067ad) fep_hwr_top_text_pane

0xec58,	// (0x00011821) fep_hwr_top_text_pane_g1

0x3cbc,	// (0x00006885) fep_hwr_top_text_pane_t1

0x3d0c,	// (0x000068d5) fep_hwr_candidate_pane_g1

0x3f77,	// (0x00006b40) fep_vkb_keypad_pane_g3_ParamLimits

0x3f77,	// (0x00006b40) fep_vkb_keypad_pane_g3

0x3f9f,	// (0x00006b68) fep_vkb_keypad_pane_g4_ParamLimits

0x3f9f,	// (0x00006b68) fep_vkb_keypad_pane_g4

0x400e,	// (0x00006bd7) fep_vkb_bottom_pane_g2_ParamLimits

0x400e,	// (0x00006bd7) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x000126ce) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x000126ce) fep_vkb_bottom_pane_g

0x3a7a,	// (0x00006643) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x000126d8) cell_vkb_side_pane_g

0x4099,	// (0x00006c62) cell_vkb_side_pane_t1

0x40a7,	// (0x00006c70) cell_vkb_side_pane_t1_copy1

0x3a7a,	// (0x00006643) bg_fep_vkb_candidate_pane_g2

0x41d3,	// (0x00006d9c) cell_vkb_candidate_pane_ParamLimits

0x3d40,	// (0x00006909) aid_size_cell_vkb_ParamLimits

0x3d40,	// (0x00006909) aid_size_cell_vkb

0x41d3,	// (0x00006d9c) cell_vkb_candidate_pane

0x4207,	// (0x00006dd0) bg_popup_fep_shadow_pane_g1

0xbd6a,	// (0x0000e933) fep_vkb_bottom_pane_ParamLimits

0xbd6a,	// (0x0000e933) fep_vkb_bottom_pane

0x3e04,	// (0x000069cd) fep_vkb_candidate_pane_ParamLimits

0x3e04,	// (0x000069cd) fep_vkb_candidate_pane

0xbd8f,	// (0x0000e958) fep_vkb_keypad_pane_ParamLimits

0xbd8f,	// (0x0000e958) fep_vkb_keypad_pane

0xbdc4,	// (0x0000e98d) fep_vkb_side_pane_ParamLimits

0xbdc4,	// (0x0000e98d) fep_vkb_side_pane

0xbe00,	// (0x0000e9c9) fep_vkb_top_pane_ParamLimits

0xbe00,	// (0x0000e9c9) fep_vkb_top_pane

0x3ed0,	// (0x00006a99) fep_vkb_top_pane_g1_ParamLimits

0x3ed0,	// (0x00006a99) fep_vkb_top_pane_g1

0x3edf,	// (0x00006aa8) fep_vkb_top_pane_g2_ParamLimits

0x3edf,	// (0x00006aa8) fep_vkb_top_pane_g2

0x3eee,	// (0x00006ab7) fep_vkb_top_pane_g3_ParamLimits

0x3eee,	// (0x00006ab7) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x000126be) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x000126be) fep_vkb_top_pane_g

0x3f0c,	// (0x00006ad5) fep_vkb_top_text_pane_ParamLimits

0x3f0c,	// (0x00006ad5) fep_vkb_top_text_pane

0xbe35,	// (0x0000e9fe) fep_vkb_side_pane_g1_ParamLimits

0xbe35,	// (0x0000e9fe) fep_vkb_side_pane_g1

0x3f66,	// (0x00006b2f) grid_vkb_side_pane_ParamLimits

0x3f66,	// (0x00006b2f) grid_vkb_side_pane

0x420f,	// (0x00006dd8) bg_popup_fep_shadow_pane_g2

0x4218,	// (0x00006de1) bg_popup_fep_shadow_pane_g3

0x4220,	// (0x00006de9) bg_popup_fep_shadow_pane_g4

0x4229,	// (0x00006df2) bg_popup_fep_shadow_pane_g5

0x4233,	// (0x00006dfc) bg_popup_fep_shadow_pane_g6

0x423b,	// (0x00006e04) bg_popup_fep_shadow_pane_g7

0xe6c1,	// (0x0001128a) bg_popup_fep_shadow_pane_g8

0x3fbd,	// (0x00006b86) grid_vkb_keypad_number_pane_ParamLimits

0x3fbd,	// (0x00006b86) grid_vkb_keypad_number_pane

0x3fcd,	// (0x00006b96) grid_vkb_keypad_pane_ParamLimits

0x3fcd,	// (0x00006b96) grid_vkb_keypad_pane

0x3ff3,	// (0x00006bbc) fep_vkb_bottom_pane_g1_ParamLimits

0x3ff3,	// (0x00006bbc) fep_vkb_bottom_pane_g1

0x401c,	// (0x00006be5) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x401c,	// (0x00006be5) grid_vkb_keypad_bottom_left_pane

0x4031,	// (0x00006bfa) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x4031,	// (0x00006bfa) grid_vkb_keypad_bottom_right_pane

0x4046,	// (0x00006c0f) fep_vkb_top_text_pane_g1

0xbe7c,	// (0x0000ea45) fep_vkb_top_text_pane_t1

0xbe8e,	// (0x0000ea57) cell_vkb_side_pane_ParamLimits

0xbe8e,	// (0x0000ea57) cell_vkb_side_pane

0x3a7a,	// (0x00006643) cell_vkb_side_pane_g1

0x40b5,	// (0x00006c7e) cell_vkb_keypad_pane_ParamLimits

0x40b5,	// (0x00006c7e) cell_vkb_keypad_pane

0x412a,	// (0x00006cf3) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x000126eb) bg_popup_fep_shadow_pane_g

0x3a7a,	// (0x00006643) cell_hwr_side_pane_g1

0x3a7a,	// (0x00006643) cell_hwr_side_pane_g2

0x4134,	// (0x00006cfd) cell_vkb_keypad_pane_t1

0xbea4,	// (0x0000ea6d) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbea4,	// (0x0000ea6d) cell_vkb_keypad_bottom_left_pane

0xbeb9,	// (0x0000ea82) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbeb9,	// (0x0000ea82) cell_vkb_keypad_bottom_right_pane

0x3a7a,	// (0x00006643) cell_vkb_keypad_bottom_left_pane_g1

0x3a7a,	// (0x00006643) cell_vkb_keypad_bottom_right_pane_g1

0x4198,	// (0x00006d61) cell_vkb_keypad_number_pane_ParamLimits

0x4198,	// (0x00006d61) cell_vkb_keypad_number_pane

0x41b7,	// (0x00006d80) cell_vkb_keypad_number_pane_g1

0x41c1,	// (0x00006d8a) cell_vkb_keypad_number_pane_g2

0x41ca,	// (0x00006d93) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x000126dd) cell_vkb_keypad_number_pane_g

0x4134,	// (0x00006cfd) cell_vkb_keypad_number_pane_t1

0x41ee,	// (0x00006db7) fep_vkb_candidate_pane_g1

0x0001,

0xfb0f,	// (0x000126d8) cell_hwr_side_pane_g

0x424d,	// (0x00006e16) cell_hwr_side_pane_t1

0x425b,	// (0x00006e24) cell_hwr_side_pane_t1_copy1

0x3efe,	// (0x00006ac7) cell_hwr_candidate_pane_g1

0x42ab,	// (0x00006e74) cell_hwr_candidate_pane_t1

0x3a7a,	// (0x00006643) cell_vkb_candidate_pane_g2

0x42ff,	// (0x00006ec8) cell_vkb_candidate_pane_t1

0x3ad6,	// (0x0000669f) bg_popup_fep_shadow_pane_ParamLimits

0x3ad6,	// (0x0000669f) bg_popup_fep_shadow_pane

0x3b8b,	// (0x00006754) bg_fep_hwr_top_pane_g4

0x3bf9,	// (0x000067c2) bg_hwr_side_pane_g1_ParamLimits

0x3bf9,	// (0x000067c2) bg_hwr_side_pane_g1

0xbd23,	// (0x0000e8ec) cell_hwr_side_pane_ParamLimits

0xbd23,	// (0x0000e8ec) cell_hwr_side_pane

0x3c67,	// (0x00006830) fep_hwr_write_pane_g1_ParamLimits

0x3c67,	// (0x00006830) fep_hwr_write_pane_g1

0x3c74,	// (0x0000683d) fep_hwr_write_pane_g2_ParamLimits

0x3c74,	// (0x0000683d) fep_hwr_write_pane_g2

0x3c81,	// (0x0000684a) fep_hwr_write_pane_g3_ParamLimits

0x3c81,	// (0x0000684a) fep_hwr_write_pane_g3

0xbd43,	// (0x0000e90c) fep_hwr_write_pane_g4_ParamLimits

0xbd43,	// (0x0000e90c) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x000126aa) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x000126aa) fep_hwr_write_pane_g

0x3b8b,	// (0x00006754) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3b8b,	// (0x00006754) bg_fep_hwr_candidate_pane_g2

0x3cca,	// (0x00006893) cell_hwr_candidate_pane_ParamLimits

0x3cca,	// (0x00006893) cell_hwr_candidate_pane

0x3d0c,	// (0x000068d5) fep_hwr_candidate_pane_g1_ParamLimits

0x3d6e,	// (0x00006937) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3d6e,	// (0x00006937) bg_popup_fep_shadow_pane_cp2

0x3efe,	// (0x00006ac7) fep_vkb_top_pane_g4_ParamLimits

0x3efe,	// (0x00006ac7) fep_vkb_top_pane_g4

0x3f44,	// (0x00006b0d) fep_vkb_side_pane_g2_ParamLimits

0x3f44,	// (0x00006b0d) fep_vkb_side_pane_g2

0x9853,	// (0x0000c41c) list_setting_pane_t4_ParamLimits

0x9853,	// (0x0000c41c) list_setting_pane_t4

0x98cd,	// (0x0000c496) list_setting_number_pane_t5_ParamLimits

0x98cd,	// (0x0000c496) list_setting_number_pane_t5

0xecae,	// (0x00011877) list_double_heading_pane_cp2_ParamLimits

0xecae,	// (0x00011877) list_double_heading_pane_cp2

0xe793,	// (0x0001135c) list_double_heading_pane_g1_cp2_ParamLimits

0xe793,	// (0x0001135c) list_double_heading_pane_g1_cp2

0x430d,	// (0x00006ed6) list_double_heading_pane_g2_cp2_ParamLimits

0x430d,	// (0x00006ed6) list_double_heading_pane_g2_cp2

0x4321,	// (0x00006eea) list_double_heading_pane_t1_cp2_ParamLimits

0x4321,	// (0x00006eea) list_double_heading_pane_t1_cp2

0x4337,	// (0x00006f00) list_double_heading_pane_t2_cp2_ParamLimits

0x4337,	// (0x00006f00) list_double_heading_pane_t2_cp2

0xdfb2,	// (0x00010b7b) aid_value_unit2

0xe15d,	// (0x00010d26) popup_preview_fixed_window

0xe2fd,	// (0x00010ec6) bg_popup_preview_window_pane_cp02

0x4349,	// (0x00006f12) list_preview_fixed_pane

0x438f,	// (0x00006f58) list_empty_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_empty_pane_fp

0x438f,	// (0x00006f58) list_single_cale_day_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_cale_day_pane_fp

0x438f,	// (0x00006f58) list_single_graphic_heading_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_graphic_heading_pane_fp

0x438f,	// (0x00006f58) list_single_graphic_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_graphic_pane_fp

0x438f,	// (0x00006f58) list_single_heading_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_heading_pane_fp

0x438f,	// (0x00006f58) list_single_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_pane_fp

0x43a5,	// (0x00006f6e) list_single_pane_fp_g1_ParamLimits

0x43a5,	// (0x00006f6e) list_single_pane_fp_g1

0xe79f,	// (0x00011368) list_single_pane_fp_g2_ParamLimits

0xe79f,	// (0x00011368) list_single_pane_fp_g2

0x43b1,	// (0x00006f7a) list_single_pane_fp_g3_ParamLimits

0x43b1,	// (0x00006f7a) list_single_pane_fp_g3

0x43c5,	// (0x00006f8e) list_single_pane_fp_g4_ParamLimits

0x43c5,	// (0x00006f8e) list_single_pane_fp_g4

0x0003,

0xfb43,	// (0x0001270c) list_single_pane_fp_g_ParamLimits

0xfb43,	// (0x0001270c) list_single_pane_fp_g

0x43d1,	// (0x00006f9a) list_single_pane_fp_t1_ParamLimits

0x43d1,	// (0x00006f9a) list_single_pane_fp_t1

0x43e8,	// (0x00006fb1) list_single_graphic_pane_fp_g1_ParamLimits

0x43e8,	// (0x00006fb1) list_single_graphic_pane_fp_g1

0x43a5,	// (0x00006f6e) list_single_graphic_pane_fp_g2_ParamLimits

0x43a5,	// (0x00006f6e) list_single_graphic_pane_fp_g2

0xe79f,	// (0x00011368) list_single_graphic_pane_fp_g3_ParamLimits

0xe79f,	// (0x00011368) list_single_graphic_pane_fp_g3

0x43b1,	// (0x00006f7a) list_single_graphic_pane_fp_g4_ParamLimits

0x43b1,	// (0x00006f7a) list_single_graphic_pane_fp_g4

0x43c5,	// (0x00006f8e) list_single_graphic_pane_fp_g5_ParamLimits

0x43c5,	// (0x00006f8e) list_single_graphic_pane_fp_g5

0x0004,

0xfb4c,	// (0x00012715) list_single_graphic_pane_fp_g_ParamLimits

0xfb4c,	// (0x00012715) list_single_graphic_pane_fp_g

0x43f4,	// (0x00006fbd) list_single_graphic_pane_fp_t1_ParamLimits

0x43f4,	// (0x00006fbd) list_single_graphic_pane_fp_t1

0x43e8,	// (0x00006fb1) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x43e8,	// (0x00006fb1) list_single_graphic_heading_pane_fp_g1

0x43a5,	// (0x00006f6e) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x43a5,	// (0x00006f6e) list_single_graphic_heading_pane_fp_g2

0xe79f,	// (0x00011368) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe79f,	// (0x00011368) list_single_graphic_heading_pane_fp_g3

0x43b1,	// (0x00006f7a) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x43b1,	// (0x00006f7a) list_single_graphic_heading_pane_fp_g4

0x43c5,	// (0x00006f8e) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x43c5,	// (0x00006f8e) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x00012715) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x00012715) list_single_graphic_heading_pane_fp_g

0x440a,	// (0x00006fd3) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x440a,	// (0x00006fd3) list_single_graphic_heading_pane_fp_t1

0x4420,	// (0x00006fe9) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x4420,	// (0x00006fe9) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb57,	// (0x00012720) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb57,	// (0x00012720) list_single_graphic_heading_pane_fp_t

0x4432,	// (0x00006ffb) list_single_cale_day_pane_fp_g1_ParamLimits

0x4432,	// (0x00006ffb) list_single_cale_day_pane_fp_g1

0x446a,	// (0x00007033) list_single_cale_day_pane_fp_g2_ParamLimits

0x446a,	// (0x00007033) list_single_cale_day_pane_fp_g2

0x4476,	// (0x0000703f) list_single_cale_day_pane_fp_g3_ParamLimits

0x4476,	// (0x0000703f) list_single_cale_day_pane_fp_g3

0x449e,	// (0x00007067) list_single_cale_day_pane_fp_g4_ParamLimits

0x449e,	// (0x00007067) list_single_cale_day_pane_fp_g4

0x44c2,	// (0x0000708b) list_single_cale_day_pane_fp_g5_ParamLimits

0x44c2,	// (0x0000708b) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5c,	// (0x00012725) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5c,	// (0x00012725) list_single_cale_day_pane_fp_g

0x44e6,	// (0x000070af) list_single_cale_day_pane_fp_t1_ParamLimits

0x44e6,	// (0x000070af) list_single_cale_day_pane_fp_t1

0x450c,	// (0x000070d5) list_single_cale_day_pane_fp_t2_ParamLimits

0x450c,	// (0x000070d5) list_single_cale_day_pane_fp_t2

0x4525,	// (0x000070ee) list_single_cale_day_pane_fp_t3_ParamLimits

0x4525,	// (0x000070ee) list_single_cale_day_pane_fp_t3

0x0002,

0xfb67,	// (0x00012730) list_single_cale_day_pane_fp_t_ParamLimits

0xfb67,	// (0x00012730) list_single_cale_day_pane_fp_t

0x43a5,	// (0x00006f6e) list_empty_pane_fp_g1_ParamLimits

0x43a5,	// (0x00006f6e) list_empty_pane_fp_g1

0x453e,	// (0x00007107) list_empty_pane_fp_t1

0x454c,	// (0x00007115) list_empty_pane_fp_t2

0x0001,

0xfb6e,	// (0x00012737) list_empty_pane_fp_t

0x43a5,	// (0x00006f6e) list_single_heading_pane_fp_g1_ParamLimits

0x43a5,	// (0x00006f6e) list_single_heading_pane_fp_g1

0xe79f,	// (0x00011368) list_single_heading_pane_fp_g2_ParamLimits

0xe79f,	// (0x00011368) list_single_heading_pane_fp_g2

0x43b1,	// (0x00006f7a) list_single_heading_pane_fp_g3_ParamLimits

0x43b1,	// (0x00006f7a) list_single_heading_pane_fp_g3

0x0002,

0xfb73,	// (0x0001273c) list_single_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x0001273c) list_single_heading_pane_fp_g

0x455a,	// (0x00007123) list_single_heading_pane_fp_t1_ParamLimits

0x455a,	// (0x00007123) list_single_heading_pane_fp_t1

0x456c,	// (0x00007135) list_single_heading_pane_fp_t2_ParamLimits

0x456c,	// (0x00007135) list_single_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x00012743) list_single_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x00012743) list_single_heading_pane_fp_t

0x9b74,	// (0x0000c73d) aid_size_cell_fast

0xe2e0,	// (0x00010ea9) soft_indicator_pane_cp1_t1

0x9b7d,	// (0x0000c746) cell_app_pane_cp2_ParamLimits

0x9b7d,	// (0x0000c746) cell_app_pane_cp2

0x3af8,	// (0x000066c1) fep_hwr_candidate_drop_down_list_pane

0x3d26,	// (0x000068ef) fep_hwr_candidate_pane_g3_ParamLimits

0x3d26,	// (0x000068ef) fep_hwr_candidate_pane_g3

0x3d33,	// (0x000068fc) fep_hwr_candidate_pane_g4_ParamLimits

0x3d33,	// (0x000068fc) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x000126b7) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x000126b7) fep_hwr_candidate_pane_g

0x3df3,	// (0x000069bc) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3df3,	// (0x000069bc) fep_vkb_candidate_drop_down_list_pane

0x41f6,	// (0x00006dbf) fep_vkb_candidate_pane_g3

0x41fe,	// (0x00006dc7) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x000126e4) fep_vkb_candidate_pane_g

0x3efe,	// (0x00006ac7) cell_hwr_candidate_pane_g1_ParamLimits

0x4269,	// (0x00006e32) cell_hwr_candidate_pane_g3_ParamLimits

0x4269,	// (0x00006e32) cell_hwr_candidate_pane_g3

0x428a,	// (0x00006e53) cell_hwr_candidate_pane_g4_ParamLimits

0x428a,	// (0x00006e53) cell_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x000126fe) cell_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x000126fe) cell_hwr_candidate_pane_g

0x42c9,	// (0x00006e92) cell_vkb_candidate_pane_g3_ParamLimits

0x42c9,	// (0x00006e92) cell_vkb_candidate_pane_g3

0x42e4,	// (0x00006ead) cell_vkb_candidate_pane_g4_ParamLimits

0x42e4,	// (0x00006ead) cell_vkb_candidate_pane_g4

0xbed4,	// (0x0000ea9d) cell_app_pane_cp2_g1_ParamLimits

0xbed4,	// (0x0000ea9d) cell_app_pane_cp2_g1

0x45a0,	// (0x00007169) cell_app_pane_cp2_g2_ParamLimits

0x45a0,	// (0x00007169) cell_app_pane_cp2_g2

0x0001,

0xfb7f,	// (0x00012748) cell_app_pane_cp2_g_ParamLimits

0xfb7f,	// (0x00012748) cell_app_pane_cp2_g

0x45ac,	// (0x00007175) cell_app_pane_cp2_t1_ParamLimits

0x45ac,	// (0x00007175) cell_app_pane_cp2_t1

0xe5db,	// (0x000111a4) grid_highlight_pane_cp1_ParamLimits

0xe5db,	// (0x000111a4) grid_highlight_pane_cp1

0x45be,	// (0x00007187) cell_hwr_candidate_pane_cp1_ParamLimits

0x45be,	// (0x00007187) cell_hwr_candidate_pane_cp1

0x3efe,	// (0x00006ac7) fep_hwr_candidate_drop_down_list_pane_g1

0x45dd,	// (0x000071a6) fep_hwr_candidate_drop_down_list_pane_g2

0x45ea,	// (0x000071b3) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x0001274d) fep_hwr_candidate_drop_down_list_pane_g

0x45f7,	// (0x000071c0) fep_hwr_candidate_drop_down_list_scroll_pane

0x4600,	// (0x000071c9) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4600,	// (0x000071c9) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x460d,	// (0x000071d6) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x460d,	// (0x000071d6) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x461a,	// (0x000071e3) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x461a,	// (0x000071e3) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x42c9,	// (0x00006e92) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x42c9,	// (0x00006e92) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x42e4,	// (0x00006ead) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x42e4,	// (0x00006ead) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x4627,	// (0x000071f0) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x4627,	// (0x000071f0) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x4642,	// (0x0000720b) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x4642,	// (0x0000720b) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x465d,	// (0x00007226) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x465d,	// (0x00007226) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8b,	// (0x00012754) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8b,	// (0x00012754) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x4678,	// (0x00007241) cell_vkb_candidate_pane_cp1_ParamLimits

0x4678,	// (0x00007241) cell_vkb_candidate_pane_cp1

0x3efe,	// (0x00006ac7) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3efe,	// (0x00006ac7) fep_vkb_candidate_drop_down_list_pane_g1

0x45dd,	// (0x000071a6) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x45dd,	// (0x000071a6) fep_vkb_candidate_drop_down_list_pane_g2

0x45ea,	// (0x000071b3) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x45ea,	// (0x000071b3) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x0001274d) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb84,	// (0x0001274d) fep_vkb_candidate_drop_down_list_pane_g

0x4698,	// (0x00007261) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x4698,	// (0x00007261) fep_vkb_candidate_drop_down_list_scroll_pane

0x46a5,	// (0x0000726e) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x46a5,	// (0x0000726e) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x46b2,	// (0x0000727b) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x46b2,	// (0x0000727b) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x46be,	// (0x00007287) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x46be,	// (0x00007287) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x4269,	// (0x00006e32) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x4269,	// (0x00006e32) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x428a,	// (0x00006e53) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x428a,	// (0x00006e53) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x46ca,	// (0x00007293) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x46ca,	// (0x00007293) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x46eb,	// (0x000072b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x46eb,	// (0x000072b4) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x470c,	// (0x000072d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x470c,	// (0x000072d5) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x00012765) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x00012765) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8f29,	// (0x0000baf2) title_pane_g1_ParamLimits

0x8f3c,	// (0x0000bb05) title_pane_g2_ParamLimits

0xf529,	// (0x000120f2) title_pane_g_ParamLimits

0xec48,	// (0x00011811) aid_call2_pane

0xec50,	// (0x00011819) aid_call_pane

0xec58,	// (0x00011821) popup_clock_analogue_window_g1

0xec58,	// (0x00011821) popup_clock_analogue_window_g2

0xec60,	// (0x00011829) popup_clock_analogue_window_g3

0xec69,	// (0x00011832) popup_clock_analogue_window_g4

0xdfc4,	// (0x00010b8d) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x00012288) popup_clock_analogue_window_g

0xec71,	// (0x0001183a) popup_clock_analogue_window_t1

0xeccf,	// (0x00011898) clock_digital_number_pane_ParamLimits

0xeccf,	// (0x00011898) clock_digital_number_pane

0xecdb,	// (0x000118a4) clock_digital_number_pane_cp02_ParamLimits

0xecdb,	// (0x000118a4) clock_digital_number_pane_cp02

0xece7,	// (0x000118b0) clock_digital_number_pane_cp03_ParamLimits

0xece7,	// (0x000118b0) clock_digital_number_pane_cp03

0xecf3,	// (0x000118bc) clock_digital_number_pane_cp04_ParamLimits

0xecf3,	// (0x000118bc) clock_digital_number_pane_cp04

0xecff,	// (0x000118c8) clock_digital_separator_pane_ParamLimits

0xecff,	// (0x000118c8) clock_digital_separator_pane

0xed0b,	// (0x000118d4) popup_clock_digital_window_t1_ParamLimits

0xed0b,	// (0x000118d4) popup_clock_digital_window_t1

0xdfc4,	// (0x00010b8d) clock_digital_number_pane_g1

0xdfc4,	// (0x00010b8d) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x00012293) clock_digital_number_pane_g

0xdfc4,	// (0x00010b8d) clock_digital_separator_pane_g1

0xdfc4,	// (0x00010b8d) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x00012293) clock_digital_separator_pane_g

0xaa47,	// (0x0000d610) aid_fill_nsta_ParamLimits

0xab7d,	// (0x0000d746) indicator_nsta_pane_ParamLimits

0x079a,	// (0x00003363) popup_clock_analogue_window

0x079a,	// (0x00003363) popup_clock_digital_window

0xba92,	// (0x0000e65b) grid_indicator_nsta_pane_ParamLimits

0x33db,	// (0x00005fa4) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00012637) clock_nsta_pane_t

0xeaed,	// (0x000116b6) aid_size_max_handle

0x9c5b,	// (0x0000c824) aid_size_min_handle

0xf29f,	// (0x00011e68) editor_scroll_pane

0x4727,	// (0x000072f0) ex_editor_pane

0xe77b,	// (0x00011344) scroll_pane_cp13

0xe531,	// (0x000110fa) scroll_pane_cp14

0xeca6,	// (0x0001186f) scroll_pane_cp36

0x9d25,	// (0x0000c8ee) list_single_graphic_hl_pane_cp2_ParamLimits

0x9d25,	// (0x0000c8ee) list_single_graphic_hl_pane_cp2

0xb83c,	// (0x0000e405) list_single_graphic_hl_pane_ParamLimits

0xb83c,	// (0x0000e405) list_single_graphic_hl_pane

0x6fcd,	// (0x00009b96) aid_size_min_hl_cp1

0x4738,	// (0x00007301) list_highlight_pane_cp34_ParamLimits

0x4738,	// (0x00007301) list_highlight_pane_cp34

0x4749,	// (0x00007312) list_single_graphic_hl_pane_g1_ParamLimits

0x4749,	// (0x00007312) list_single_graphic_hl_pane_g1

0xbef2,	// (0x0000eabb) list_single_graphic_hl_pane_g2_ParamLimits

0xbef2,	// (0x0000eabb) list_single_graphic_hl_pane_g2

0xbef2,	// (0x0000eabb) list_single_graphic_hl_pane_g3_ParamLimits

0xbef2,	// (0x0000eabb) list_single_graphic_hl_pane_g3

0xf22a,	// (0x00011df3) list_single_graphic_hl_pane_g4_ParamLimits

0xf22a,	// (0x00011df3) list_single_graphic_hl_pane_g4

0xbefe,	// (0x0000eac7) list_single_graphic_hl_pane_g5_ParamLimits

0xbefe,	// (0x0000eac7) list_single_graphic_hl_pane_g5

0x0004,

0xfbad,	// (0x00012776) list_single_graphic_hl_pane_g_ParamLimits

0xfbad,	// (0x00012776) list_single_graphic_hl_pane_g

0xbf12,	// (0x0000eadb) list_single_graphic_hl_pane_t1_ParamLimits

0xbf12,	// (0x0000eadb) list_single_graphic_hl_pane_t1

0x478c,	// (0x00007355) aid_size_min_hl_cp2

0x4795,	// (0x0000735e) list_highlight_pane_cp34_cp2_ParamLimits

0x4795,	// (0x0000735e) list_highlight_pane_cp34_cp2

0x4749,	// (0x00007312) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x4749,	// (0x00007312) list_single_graphic_hl_pane_g1_cp2

0x47a2,	// (0x0000736b) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x47a2,	// (0x0000736b) list_single_graphic_hl_pane_g2_cp2

0xbf28,	// (0x0000eaf1) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf28,	// (0x0000eaf1) list_single_graphic_hl_pane_g3_cp2

0xf187,	// (0x00011d50) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf187,	// (0x00011d50) list_single_graphic_hl_pane_g4_cp2

0x4762,	// (0x0000732b) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4762,	// (0x0000732b) list_single_graphic_hl_pane_g5_cp2

0xa166,	// (0x0000cd2f) control_pane_g4_ParamLimits

0xa166,	// (0x0000cd2f) control_pane_g4

0xf47e,	// (0x00012047) bg_popup_sub_pane_cp10_ParamLimits

0x3a84,	// (0x0000664d) list_choice_list_pane_ParamLimits

0x3a93,	// (0x0000665c) scroll_pane_cp23

0xe2fd,	// (0x00010ec6) bg_popup_preview_window_pane_cp02_ParamLimits

0x4349,	// (0x00006f12) list_preview_fixed_pane_ParamLimits

0x435f,	// (0x00006f28) list_preview_fixed_pane_cp_ParamLimits

0x435f,	// (0x00006f28) list_preview_fixed_pane_cp

0x436b,	// (0x00006f34) popup_preview_fixed_window_g1_ParamLimits

0x436b,	// (0x00006f34) popup_preview_fixed_window_g1

0x4377,	// (0x00006f40) popup_preview_fixed_window_g2_ParamLimits

0x4377,	// (0x00006f40) popup_preview_fixed_window_g2

0x0002,

0xfb3c,	// (0x00012705) popup_preview_fixed_window_g_ParamLimits

0xfb3c,	// (0x00012705) popup_preview_fixed_window_g

0xea2a,	// (0x000115f3) aid_navi_side_left_pane_ParamLimits

0xea3f,	// (0x00011608) aid_navi_side_right_pane_ParamLimits

0xea57,	// (0x00011620) navi_icon_pane_stacon_ParamLimits

0xea6b,	// (0x00011634) navi_navi_pane_stacon_ParamLimits

0xea57,	// (0x00011620) navi_text_pane_stacon_ParamLimits

0xdfba,	// (0x00010b83) main_text_info_pane

0x47d2,	// (0x0000739b) listscroll_text_info_pane

0x47da,	// (0x000073a3) list_text_info_pane_ParamLimits

0x47da,	// (0x000073a3) list_text_info_pane

0x47e9,	// (0x000073b2) scroll_pane_cp24_ParamLimits

0x47e9,	// (0x000073b2) scroll_pane_cp24

0xbf36,	// (0x0000eaff) list_text_info_pane_t1_ParamLimits

0xbf36,	// (0x0000eaff) list_text_info_pane_t1

0xa30e,	// (0x0000ced7) popup_fast_swap2_window_ParamLimits

0xa30e,	// (0x0000ced7) popup_fast_swap2_window

0x483b,	// (0x00007404) aid_size_cell_fast2

0xdfba,	// (0x00010b83) bg_popup_window_pane_cp17

0x10c4,	// (0x00003c8d) heading_pane_cp2

0x10cc,	// (0x00003c95) listscroll_fast2_pane

0x4845,	// (0x0000740e) grid_fast2_pane

0x484f,	// (0x00007418) listscroll_fast2_pane_g1

0x4857,	// (0x00007420) listscroll_fast2_pane_g2

0x0001,

0xfbb8,	// (0x00012781) listscroll_fast2_pane_g

0xe77b,	// (0x00011344) scroll_pane_cp26

0x4861,	// (0x0000742a) cell_fast2_pane_ParamLimits

0x4861,	// (0x0000742a) cell_fast2_pane

0x4876,	// (0x0000743f) cell_fast2_pane_g1

0x487f,	// (0x00007448) cell_fast2_pane_g2

0x4888,	// (0x00007451) cell_fast2_pane_g3

0x0002,

0xfbbd,	// (0x00012786) cell_fast2_pane_g

0xe468,	// (0x00011031) grid_highlight_pane_cp9

0xe47d,	// (0x00011046) main_eswt_pane_ParamLimits

0xe47d,	// (0x00011046) main_eswt_pane

0x47fe,	// (0x000073c7) list_single_text_info_pane

0x4890,	// (0x00007459) eswt_ctrl_button_pane

0x4890,	// (0x00007459) eswt_ctrl_canvas_pane

0xbf52,	// (0x0000eb1b) eswt_ctrl_combo_pane

0x4890,	// (0x00007459) eswt_ctrl_default_pane

0x4890,	// (0x00007459) eswt_ctrl_label_pane

0x48a0,	// (0x00007469) eswt_ctrl_wait_pane

0xbf5a,	// (0x0000eb23) eswt_shell_pane

0xdfba,	// (0x00010b83) listscroll_eswt_app_pane

0x48c8,	// (0x00007491) popup_eswt_tasktip_window_ParamLimits

0x48c8,	// (0x00007491) popup_eswt_tasktip_window

0x0c08,	// (0x000037d1) bg_popup_window_pane_cp18

0x48d9,	// (0x000074a2) eswt_control_pane_g1_ParamLimits

0x48d9,	// (0x000074a2) eswt_control_pane_g1

0x48e6,	// (0x000074af) eswt_control_pane_g2_ParamLimits

0x48e6,	// (0x000074af) eswt_control_pane_g2

0x48f3,	// (0x000074bc) eswt_control_pane_g3_ParamLimits

0x48f3,	// (0x000074bc) eswt_control_pane_g3

0x4900,	// (0x000074c9) eswt_control_pane_g4_ParamLimits

0x4900,	// (0x000074c9) eswt_control_pane_g4

0x0003,

0xfbc4,	// (0x0001278d) eswt_control_pane_g_ParamLimits

0xfbc4,	// (0x0001278d) eswt_control_pane_g

0xe5db,	// (0x000111a4) bg_button_pane_ParamLimits

0xe5db,	// (0x000111a4) bg_button_pane

0xe47d,	// (0x00011046) common_borders_pane_copy2_ParamLimits

0xe47d,	// (0x00011046) common_borders_pane_copy2

0x490d,	// (0x000074d6) control_button_pane_g1_ParamLimits

0x490d,	// (0x000074d6) control_button_pane_g1

0x4919,	// (0x000074e2) control_button_pane_g2_ParamLimits

0x4919,	// (0x000074e2) control_button_pane_g2

0x4925,	// (0x000074ee) control_button_pane_g3_ParamLimits

0x4925,	// (0x000074ee) control_button_pane_g3

0x0002,

0xfbcd,	// (0x00012796) control_button_pane_g_ParamLimits

0xfbcd,	// (0x00012796) control_button_pane_g

0x4939,	// (0x00007502) control_button_pane_t1

0x4947,	// (0x00007510) control_button_pane_t2

0x0001,

0xfbd4,	// (0x0001279d) control_button_pane_t

0x0a70,	// (0x00003639) bg_button_pane_g1

0x0a78,	// (0x00003641) bg_button_pane_g2

0x0a80,	// (0x00003649) bg_button_pane_g3

0x0a88,	// (0x00003651) bg_button_pane_g4

0x0a90,	// (0x00003659) bg_button_pane_g5

0x0a98,	// (0x00003661) bg_button_pane_g6

0x0aa0,	// (0x00003669) bg_button_pane_g7

0x0aa8,	// (0x00003671) bg_button_pane_g8

0x0ab0,	// (0x00003679) bg_button_pane_g9

0x0008,

0xf821,	// (0x000123ea) bg_button_pane_g

0x3a3f,	// (0x00006608) common_borders_pane_ParamLimits

0x3a3f,	// (0x00006608) common_borders_pane

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy1_ParamLimits

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy1

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy1_ParamLimits

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy1

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy1_ParamLimits

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy1

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy1_ParamLimits

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy1

0x3a7a,	// (0x00006643) bg_eswt_ctrl_canvas_pane_g1

0x3a3f,	// (0x00006608) common_borders_pane_cp2_ParamLimits

0x3a3f,	// (0x00006608) common_borders_pane_cp2

0x3a3f,	// (0x00006608) common_borders_pane_cp3_ParamLimits

0x3a3f,	// (0x00006608) common_borders_pane_cp3

0x4955,	// (0x0000751e) separator_horizontal_pane

0x495d,	// (0x00007526) separator_vertical_pane

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy2_ParamLimits

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy2

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy2_ParamLimits

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy2

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy2_ParamLimits

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy2

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy2_ParamLimits

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy2

0xdfba,	// (0x00010b83) common_borders_pane_cp4

0x4966,	// (0x0000752f) separator_horizontal_pane_g1

0x496f,	// (0x00007538) separator_horizontal_pane_g2

0x4978,	// (0x00007541) separator_horizontal_pane_g3

0x0002,

0xfbd9,	// (0x000127a2) separator_horizontal_pane_g

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy3_ParamLimits

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy3

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy3_ParamLimits

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy3

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy3_ParamLimits

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy3

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy3_ParamLimits

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy3

0xdfba,	// (0x00010b83) common_borders_pane_cp5

0x4981,	// (0x0000754a) separator_vertical_pane_g1

0x498a,	// (0x00007553) separator_vertical_pane_g2

0x4993,	// (0x0000755c) separator_vertical_pane_g3

0x0002,

0xfbe0,	// (0x000127a9) separator_vertical_pane_g

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy4_ParamLimits

0x48d9,	// (0x000074a2) eswt_control_pane_g1_copy4

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy4_ParamLimits

0x48e6,	// (0x000074af) eswt_control_pane_g2_copy4

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy4_ParamLimits

0x48f3,	// (0x000074bc) eswt_control_pane_g3_copy4

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy4_ParamLimits

0x4900,	// (0x000074c9) eswt_control_pane_g4_copy4

0xbf7a,	// (0x0000eb43) eswt_ctrl_combo_button_pane

0xbf82,	// (0x0000eb4b) eswt_ctrl_input_pane

0xbf8a,	// (0x0000eb53) popup_choice_list_window_cp70

0xbf92,	// (0x0000eb5b) eswt_ctrl_input_pane_t1

0xdfba,	// (0x00010b83) input_focus_pane_cp70

0x3a3f,	// (0x00006608) bg_button_pane_cp70_ParamLimits

0x3a3f,	// (0x00006608) bg_button_pane_cp70

0xbfa0,	// (0x0000eb69) eswt_ctrl_combo_button_pane_g1

0x49ca,	// (0x00007593) wait_bar_pane_cp70

0x0c08,	// (0x000037d1) bg_popup_window_pane_cp70_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_window_pane_cp70

0x49d2,	// (0x0000759b) popup_eswt_tasktip_window_t1

0x49e8,	// (0x000075b1) wait_bar_pane_cp71_ParamLimits

0x49e8,	// (0x000075b1) wait_bar_pane_cp71

0x49f4,	// (0x000075bd) grid_eswt_app_pane

0xeb34,	// (0x000116fd) scroll_pane_cp70

0xbfa8,	// (0x0000eb71) cell_eswt_app_pane_ParamLimits

0xbfa8,	// (0x0000eb71) cell_eswt_app_pane

0xbfd2,	// (0x0000eb9b) cell_eswt_app_pane_g1_ParamLimits

0xbfd2,	// (0x0000eb9b) cell_eswt_app_pane_g1

0xc001,	// (0x0000ebca) cell_eswt_app_pane_g2_ParamLimits

0xc001,	// (0x0000ebca) cell_eswt_app_pane_g2

0x0001,

0xfbe7,	// (0x000127b0) cell_eswt_app_pane_g_ParamLimits

0xfbe7,	// (0x000127b0) cell_eswt_app_pane_g

0xc025,	// (0x0000ebee) cell_eswt_app_pane_t1_ParamLimits

0xc025,	// (0x0000ebee) cell_eswt_app_pane_t1

0x4ab2,	// (0x0000767b) grid_highlight_pane_cp70_ParamLimits

0x4ab2,	// (0x0000767b) grid_highlight_pane_cp70

0xf1a5,	// (0x00011d6e) set_content_pane_g1

0xa0f8,	// (0x0000ccc1) status_small_volume_pane

0xc057,	// (0x0000ec20) status_small_volume_pane_g1

0xc05f,	// (0x0000ec28) volume_small2_pane

0xc068,	// (0x0000ec31) volume_small2_pane_g1

0xc071,	// (0x0000ec3a) volume_small2_pane_g2

0xc07a,	// (0x0000ec43) volume_small2_pane_g3

0xc083,	// (0x0000ec4c) volume_small2_pane_g4

0xc08c,	// (0x0000ec55) volume_small2_pane_g5

0xc095,	// (0x0000ec5e) volume_small2_pane_g6

0xc09e,	// (0x0000ec67) volume_small2_pane_g7

0xc0a7,	// (0x0000ec70) volume_small2_pane_g8

0xc0b0,	// (0x0000ec79) volume_small2_pane_g9

0xc0b9,	// (0x0000ec82) volume_small2_pane_g10

0x0009,

0xfbec,	// (0x000127b5) volume_small2_pane_g

0x4046,	// (0x00006c0f) fep_vkb_top_text_pane_g1_ParamLimits

0xbe7c,	// (0x0000ea45) fep_vkb_top_text_pane_t1_ParamLimits

0x4383,	// (0x00006f4c) popup_preview_fixed_window_g3_ParamLimits

0x4383,	// (0x00006f4c) popup_preview_fixed_window_g3

0xa985,	// (0x0000d54e) popup_toolbar_trans_pane

0xb693,	// (0x0000e25c) aid_height_set_list_ParamLimits

0x2264,	// (0x00004e2d) aid_size_parent_ParamLimits

0xf47e,	// (0x00012047) list_highlight_pane_cp2_ParamLimits

0xf1a5,	// (0x00011d6e) set_content_pane_g1_ParamLimits

0xb84e,	// (0x0000e417) list_single_image_pane_ParamLimits

0xb84e,	// (0x0000e417) list_single_image_pane

0xc0c2,	// (0x0000ec8b) aid_size_cell_image_ParamLimits

0xc0c2,	// (0x0000ec8b) aid_size_cell_image

0xc0cf,	// (0x0000ec98) grid_single_image_pane_ParamLimits

0xc0cf,	// (0x0000ec98) grid_single_image_pane

0xe79f,	// (0x00011368) list_single_image_pane_g1_ParamLimits

0xe79f,	// (0x00011368) list_single_image_pane_g1

0x43b1,	// (0x00006f7a) list_single_image_pane_g2_ParamLimits

0x43b1,	// (0x00006f7a) list_single_image_pane_g2

0x0001,

0xfc01,	// (0x000127ca) list_single_image_pane_g_ParamLimits

0xfc01,	// (0x000127ca) list_single_image_pane_g

0x4b42,	// (0x0000770b) list_single_image_pane_t1_ParamLimits

0x4b42,	// (0x0000770b) list_single_image_pane_t1

0xc0db,	// (0x0000eca4) cell_image_list_pane_ParamLimits

0xc0db,	// (0x0000eca4) cell_image_list_pane

0xc0ef,	// (0x0000ecb8) cell_image_list_pane_g1

0xc0f8,	// (0x0000ecc1) cell_image_list_pane_g2

0x0001,

0xfc06,	// (0x000127cf) cell_image_list_pane_g

0xc101,	// (0x0000ecca) aid_size_cell_tb_trans_pane

0xe5db,	// (0x000111a4) bg_tb_trans_pane

0xc113,	// (0x0000ecdc) grid_tb_trans_pane

0x0a70,	// (0x00003639) bg_tb_trans_pane_g1

0x0a78,	// (0x00003641) bg_tb_trans_pane_g2

0x0a80,	// (0x00003649) bg_tb_trans_pane_g3

0x0a88,	// (0x00003651) bg_tb_trans_pane_g4

0x0a90,	// (0x00003659) bg_tb_trans_pane_g5

0x0aa8,	// (0x00003671) bg_tb_trans_pane_g6

0x0ab0,	// (0x00003679) bg_tb_trans_pane_g7

0x0a98,	// (0x00003661) bg_tb_trans_pane_g8

0x0aa0,	// (0x00003669) bg_tb_trans_pane_g9

0x0008,

0xfc0b,	// (0x000127d4) bg_tb_trans_pane_g

0xc127,	// (0x0000ecf0) cell_toolbar_trans_pane_ParamLimits

0xc127,	// (0x0000ecf0) cell_toolbar_trans_pane

0x3a7a,	// (0x00006643) cell_toolbar_trans_pane_g1

0xbb5b,	// (0x0000e724) list_form2_midp_pane_t1

0xbb69,	// (0x0000e732) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x0001267d) list_form2_midp_pane_t

0x3614,	// (0x000061dd) scroll_pane_cp51_ParamLimits

0x381d,	// (0x000063e6) form2_midp_wait_pane_g1

0x3826,	// (0x000063ef) form2_midp_wait_pane_g2

0x382f,	// (0x000063f8) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x00012692) form2_midp_wait_pane_g

0xe1b9,	// (0x00010d82) list_highlight_pane_cp21_ParamLimits

0x3877,	// (0x00006440) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x3886,	// (0x0000644f) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x2467,	// (0x00005030) list_single_2graphic_im_pane_ParamLimits

0x2467,	// (0x00005030) list_single_2graphic_im_pane

0xc14d,	// (0x0000ed16) list_single_2graphic_im_pane_g1_ParamLimits

0xc14d,	// (0x0000ed16) list_single_2graphic_im_pane_g1

0xc15e,	// (0x0000ed27) list_single_2graphic_im_pane_g2_ParamLimits

0xc15e,	// (0x0000ed27) list_single_2graphic_im_pane_g2

0xc16a,	// (0x0000ed33) list_single_2graphic_im_pane_g3_ParamLimits

0xc16a,	// (0x0000ed33) list_single_2graphic_im_pane_g3

0x0003,

0xfc1e,	// (0x000127e7) list_single_2graphic_im_pane_g_ParamLimits

0xfc1e,	// (0x000127e7) list_single_2graphic_im_pane_g

0xc17e,	// (0x0000ed47) list_single_2graphic_im_pane_t1_ParamLimits

0xc17e,	// (0x0000ed47) list_single_2graphic_im_pane_t1

0x438f,	// (0x00006f58) list_single_graphic_2heading_pane_fp_ParamLimits

0x438f,	// (0x00006f58) list_single_graphic_2heading_pane_fp

0x43e8,	// (0x00006fb1) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x43e8,	// (0x00006fb1) list_single_graphic_2heading_pane_fp_g1

0x43a5,	// (0x00006f6e) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x43a5,	// (0x00006f6e) list_single_graphic_2heading_pane_fp_g2

0xe79f,	// (0x00011368) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe79f,	// (0x00011368) list_single_graphic_2heading_pane_fp_g3

0x43b1,	// (0x00006f7a) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x43b1,	// (0x00006f7a) list_single_graphic_2heading_pane_fp_g4

0x43c5,	// (0x00006f8e) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x43c5,	// (0x00006f8e) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x00012715) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x00012715) list_single_graphic_2heading_pane_fp_g

0x4c38,	// (0x00007801) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4c38,	// (0x00007801) list_single_graphic_2heading_pane_fp_t1

0x4420,	// (0x00006fe9) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x4420,	// (0x00006fe9) list_single_graphic_2heading_pane_fp_t2

0x4c4e,	// (0x00007817) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4c4e,	// (0x00007817) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc27,	// (0x000127f0) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc27,	// (0x000127f0) list_single_graphic_2heading_pane_fp_t

0x3ca4,	// (0x0000686d) fep_hwr_write_pane_g5_ParamLimits

0x3ca4,	// (0x0000686d) fep_hwr_write_pane_g5

0x3cb0,	// (0x00006879) fep_hwr_write_pane_g6_ParamLimits

0x3cb0,	// (0x00006879) fep_hwr_write_pane_g6

0xbf5a,	// (0x0000eb23) eswt_shell_pane_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_window_pane_cp18_ParamLimits

0x2122,	// (0x00004ceb) heading_pane_cp70

0x49d2,	// (0x0000759b) popup_eswt_tasktip_window_t1_ParamLimits

0xaaa2,	// (0x0000d66b) aid_touch_tab_arrow_left

0xaab8,	// (0x0000d681) aid_touch_tab_arrow_right

0x8f54,	// (0x0000bb1d) title_pane_g3_ParamLimits

0x8f54,	// (0x0000bb1d) title_pane_g3

0xe572,	// (0x0001113b) set_value_pane_g1

0xa985,	// (0x0000d54e) popup_toolbar_trans_pane_ParamLimits

0xc101,	// (0x0000ecca) aid_size_cell_tb_trans_pane_ParamLimits

0xe5db,	// (0x000111a4) bg_tb_trans_pane_ParamLimits

0xc113,	// (0x0000ecdc) grid_tb_trans_pane_ParamLimits

0xe2fd,	// (0x00010ec6) cont_note_pane_ParamLimits

0xe2fd,	// (0x00010ec6) cont_note_pane

0xe47d,	// (0x00011046) cont_snote2_single_text_pane_ParamLimits

0xe47d,	// (0x00011046) cont_snote2_single_text_pane

0xe47d,	// (0x00011046) cont_snote2_single_graphic_pane_ParamLimits

0xe47d,	// (0x00011046) cont_snote2_single_graphic_pane

0x12eb,	// (0x00003eb4) cont_note_wait_pane_ParamLimits

0x12eb,	// (0x00003eb4) cont_note_wait_pane

0x12eb,	// (0x00003eb4) cont_note_image_pane_ParamLimits

0x12eb,	// (0x00003eb4) cont_note_image_pane

0x4c64,	// (0x0000782d) popup_note2_window_g1_ParamLimits

0x4c64,	// (0x0000782d) popup_note2_window_g1

0xc1bc,	// (0x0000ed85) popup_note2_window_t1_ParamLimits

0xc1bc,	// (0x0000ed85) popup_note2_window_t1

0xc201,	// (0x0000edca) popup_note2_window_t2_ParamLimits

0xc201,	// (0x0000edca) popup_note2_window_t2

0xc246,	// (0x0000ee0f) popup_note2_window_t3_ParamLimits

0xc246,	// (0x0000ee0f) popup_note2_window_t3

0x4d64,	// (0x0000792d) popup_note2_window_t4_ParamLimits

0x4d64,	// (0x0000792d) popup_note2_window_t4

0xe381,	// (0x00010f4a) popup_note2_window_t5_ParamLimits

0xe381,	// (0x00010f4a) popup_note2_window_t5

0x0004,

0xfc33,	// (0x000127fc) popup_note2_window_t_ParamLimits

0xfc33,	// (0x000127fc) popup_note2_window_t

0x4d93,	// (0x0000795c) popup_note2_image_window_g1_ParamLimits

0x4d93,	// (0x0000795c) popup_note2_image_window_g1

0xc28b,	// (0x0000ee54) popup_note2_image_window_g2_ParamLimits

0xc28b,	// (0x0000ee54) popup_note2_image_window_g2

0x0001,

0xfc3e,	// (0x00012807) popup_note2_image_window_g_ParamLimits

0xfc3e,	// (0x00012807) popup_note2_image_window_g

0x4db1,	// (0x0000797a) popup_note2_image_window_t1_ParamLimits

0x4db1,	// (0x0000797a) popup_note2_image_window_t1

0x4dc9,	// (0x00007992) popup_note2_image_window_t2_ParamLimits

0x4dc9,	// (0x00007992) popup_note2_image_window_t2

0x4de1,	// (0x000079aa) popup_note2_image_window_t3_ParamLimits

0x4de1,	// (0x000079aa) popup_note2_image_window_t3

0x0002,

0xfc43,	// (0x0001280c) popup_note2_image_window_t_ParamLimits

0xfc43,	// (0x0001280c) popup_note2_image_window_t

0x12f9,	// (0x00003ec2) popup_note2_wait_window_g1_ParamLimits

0x12f9,	// (0x00003ec2) popup_note2_wait_window_g1

0x1305,	// (0x00003ece) popup_note2_wait_window_g2_ParamLimits

0x1305,	// (0x00003ece) popup_note2_wait_window_g2

0x1311,	// (0x00003eda) popup_note2_wait_window_g3_ParamLimits

0x1311,	// (0x00003eda) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x000123cc) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x000123cc) popup_note2_wait_window_g

0x4dfd,	// (0x000079c6) popup_note2_wait_window_t1_ParamLimits

0x4dfd,	// (0x000079c6) popup_note2_wait_window_t1

0x4e1b,	// (0x000079e4) popup_note2_wait_window_t2_ParamLimits

0x4e1b,	// (0x000079e4) popup_note2_wait_window_t2

0x4e39,	// (0x00007a02) popup_note2_wait_window_t3_ParamLimits

0x4e39,	// (0x00007a02) popup_note2_wait_window_t3

0x4e4b,	// (0x00007a14) popup_note2_wait_window_t4_ParamLimits

0x4e4b,	// (0x00007a14) popup_note2_wait_window_t4

0x0003,

0xfc4a,	// (0x00012813) popup_note2_wait_window_t_ParamLimits

0xfc4a,	// (0x00012813) popup_note2_wait_window_t

0x4e5d,	// (0x00007a26) wait_bar2_pane_ParamLimits

0x4e5d,	// (0x00007a26) wait_bar2_pane

0x4e75,	// (0x00007a3e) popup_snote2_single_text_window_g1_ParamLimits

0x4e75,	// (0x00007a3e) popup_snote2_single_text_window_g1

0x4e9d,	// (0x00007a66) popup_snote2_single_text_window_t1_ParamLimits

0x4e9d,	// (0x00007a66) popup_snote2_single_text_window_t1

0x4ee9,	// (0x00007ab2) popup_snote2_single_text_window_t2_ParamLimits

0x4ee9,	// (0x00007ab2) popup_snote2_single_text_window_t2

0x4f35,	// (0x00007afe) popup_snote2_single_text_window_t3_ParamLimits

0x4f35,	// (0x00007afe) popup_snote2_single_text_window_t3

0x4f76,	// (0x00007b3f) popup_snote2_single_text_window_t4_ParamLimits

0x4f76,	// (0x00007b3f) popup_snote2_single_text_window_t4

0x4fac,	// (0x00007b75) popup_snote2_single_text_window_t5_ParamLimits

0x4fac,	// (0x00007b75) popup_snote2_single_text_window_t5

0x0004,

0xfc53,	// (0x0001281c) popup_snote2_single_text_window_t_ParamLimits

0xfc53,	// (0x0001281c) popup_snote2_single_text_window_t

0xc29d,	// (0x0000ee66) popup_snote2_single_graphic_window_g1_ParamLimits

0xc29d,	// (0x0000ee66) popup_snote2_single_graphic_window_g1

0x4fff,	// (0x00007bc8) popup_snote2_single_graphic_window_g2_ParamLimits

0x4fff,	// (0x00007bc8) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5e,	// (0x00012827) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5e,	// (0x00012827) popup_snote2_single_graphic_window_g

0x5027,	// (0x00007bf0) popup_snote2_single_graphic_window_t1_ParamLimits

0x5027,	// (0x00007bf0) popup_snote2_single_graphic_window_t1

0x5073,	// (0x00007c3c) popup_snote2_single_graphic_window_t2_ParamLimits

0x5073,	// (0x00007c3c) popup_snote2_single_graphic_window_t2

0x4f35,	// (0x00007afe) popup_snote2_single_graphic_window_t3_ParamLimits

0x4f35,	// (0x00007afe) popup_snote2_single_graphic_window_t3

0x4f76,	// (0x00007b3f) popup_snote2_single_graphic_window_t4_ParamLimits

0x4f76,	// (0x00007b3f) popup_snote2_single_graphic_window_t4

0x4fac,	// (0x00007b75) popup_snote2_single_graphic_window_t5_ParamLimits

0x4fac,	// (0x00007b75) popup_snote2_single_graphic_window_t5

0x0004,

0xfc63,	// (0x0001282c) popup_snote2_single_graphic_window_t_ParamLimits

0xfc63,	// (0x0001282c) popup_snote2_single_graphic_window_t

0x3489,	// (0x00006052) clock_nsta_pane_cp2_t1

0x3489,	// (0x00006052) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x00012653) clock_nsta_pane_cp2_t

0xe5fa,	// (0x000111c3) form_field_data_wide_pane_g1_ParamLimits

0xe606,	// (0x000111cf) form_field_data_wide_pane_g2_ParamLimits

0xe606,	// (0x000111cf) form_field_data_wide_pane_g2

0xe612,	// (0x000111db) form_field_data_wide_pane_g3_ParamLimits

0xe612,	// (0x000111db) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x0001220b) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x0001220b) form_field_data_wide_pane_g

0xba7c,	// (0x0000e645) grid_touch_3_pane_ParamLimits

0xba7c,	// (0x0000e645) grid_touch_3_pane

0xc2c5,	// (0x0000ee8e) cell_touch_3_pane_ParamLimits

0xc2c5,	// (0x0000ee8e) cell_touch_3_pane

0x3a7a,	// (0x00006643) cell_touch_3_pane_g1

0x3a7a,	// (0x00006643) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x000126d8) cell_touch_3_pane_g

0xe3b3,	// (0x00010f7c) cont_query_data_pane

0xe3bb,	// (0x00010f84) cont_query_data_pane_cp1

0x50ed,	// (0x00007cb6) button_value_adjust_pane_cp7

0x50f5,	// (0x00007cbe) query_popup_pane_cp3

0xed33,	// (0x000118fc) bg_popup_sub_pane_cp22_ParamLimits

0x9dc4,	// (0x0000c98d) navi_navi_volume_pane_cp2

0x9dd3,	// (0x0000c99c) popup_side_volume_key_window_g2

0x9de2,	// (0x0000c9ab) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x000122a1) popup_side_volume_key_window_g

0x9df1,	// (0x0000c9ba) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x000122a8) popup_side_volume_key_window_t

0x9f42,	// (0x0000cb0b) popup_side_volume_key_window_ParamLimits

0x96bb,	// (0x0000c284) list_double_graphic_pane_g4_ParamLimits

0x96bb,	// (0x0000c284) list_double_graphic_pane_g4

0xb828,	// (0x0000e3f1) list_single_2heading_msg_pane_ParamLimits

0xb828,	// (0x0000e3f1) list_single_2heading_msg_pane

0xc30e,	// (0x0000eed7) list_single_2heading_msg_pane_g1_ParamLimits

0xc30e,	// (0x0000eed7) list_single_2heading_msg_pane_g1

0xc31a,	// (0x0000eee3) list_single_2heading_msg_pane_g2_ParamLimits

0xc31a,	// (0x0000eee3) list_single_2heading_msg_pane_g2

0xc32d,	// (0x0000eef6) list_single_2heading_msg_pane_g3_ParamLimits

0xc32d,	// (0x0000eef6) list_single_2heading_msg_pane_g3

0xc339,	// (0x0000ef02) list_single_2heading_msg_pane_g4_ParamLimits

0xc339,	// (0x0000ef02) list_single_2heading_msg_pane_g4

0x0003,

0xfc6e,	// (0x00012837) list_single_2heading_msg_pane_g_ParamLimits

0xfc6e,	// (0x00012837) list_single_2heading_msg_pane_g

0xc351,	// (0x0000ef1a) list_single_2heading_msg_pane_t1_ParamLimits

0xc351,	// (0x0000ef1a) list_single_2heading_msg_pane_t1

0xc379,	// (0x0000ef42) list_single_2heading_msg_pane_t2_ParamLimits

0xc379,	// (0x0000ef42) list_single_2heading_msg_pane_t2

0xc3e4,	// (0x0000efad) list_single_2heading_msg_pane_t3_ParamLimits

0xc3e4,	// (0x0000efad) list_single_2heading_msg_pane_t3

0x51e4,	// (0x00007dad) list_single_2heading_msg_pane_t4_ParamLimits

0x51e4,	// (0x00007dad) list_single_2heading_msg_pane_t4

0x0003,

0xfc77,	// (0x00012840) list_single_2heading_msg_pane_t_ParamLimits

0xfc77,	// (0x00012840) list_single_2heading_msg_pane_t

0xe167,	// (0x00010d30) title_pane_g4_ParamLimits

0xe167,	// (0x00010d30) title_pane_g4

0xe953,	// (0x0001151c) title_pane_stacon_g3_ParamLimits

0xe953,	// (0x0001151c) title_pane_stacon_g3

0x4bfb,	// (0x000077c4) list_single_2graphic_im_pane_g4_ParamLimits

0x4bfb,	// (0x000077c4) list_single_2graphic_im_pane_g4

0xb472,	// (0x0000e03b) popup_side_volume_key_window_cp

0x2929,	// (0x000054f2) main_idle_act2_pane_t1

0x0ab8,	// (0x00003681) toolbar_button_pane_g10

0x9560,	// (0x0000c129) popup_toolbar_window_cp1

0x347a,	// (0x00006043) clock_nsta_pane_cp_t1

0x347a,	// (0x00006043) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x0001264e) clock_nsta_pane_cp_t

0x9dc4,	// (0x0000c98d) navi_navi_volume_pane_cp2_ParamLimits

0xed49,	// (0x00011912) popup_side_volume_key_window_g1_ParamLimits

0x9dd3,	// (0x0000c99c) popup_side_volume_key_window_g2_ParamLimits

0x9de2,	// (0x0000c9ab) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x000122a1) popup_side_volume_key_window_g_ParamLimits

0x3ae4,	// (0x000066ad) fep_hwr_aid_pane

0x3b8b,	// (0x00006754) bg_fep_hwr_top_pane_g4_ParamLimits

0x3bab,	// (0x00006774) fep_hwr_top_pane_g1_ParamLimits

0x3bbd,	// (0x00006786) fep_hwr_top_pane_g2_ParamLimits

0x3bcf,	// (0x00006798) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x000126a3) fep_hwr_top_pane_g_ParamLimits

0x3be4,	// (0x000067ad) fep_hwr_top_text_pane_ParamLimits

0x1c5f,	// (0x00004828) aid_touch_tab_arrow_arrow_2

0x1c68,	// (0x00004831) aid_touch_tab_arrow_left_2

0x3af8,	// (0x000066c1) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3b2f,	// (0x000066f8) fep_hwr_prediction_pane

0x3e55,	// (0x00006a1e) fep_vkb_prediction_pane

0xbe5c,	// (0x0000ea25) fep_vkb_side_pane_g3_ParamLimits

0xbe5c,	// (0x0000ea25) fep_vkb_side_pane_g3

0x3efe,	// (0x00006ac7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x45dd,	// (0x000071a6) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x45ea,	// (0x000071b3) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb84,	// (0x0001274d) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x5209,	// (0x00007dd2) fep_hwr_prediction_pane_g1

0x5213,	// (0x00007ddc) fep_hwr_prediction_pane_g2

0x521b,	// (0x00007de4) fep_hwr_prediction_pane_g3

0x5223,	// (0x00007dec) fep_hwr_prediction_pane_g4

0x0003,

0xfc80,	// (0x00012849) fep_hwr_prediction_pane_g

0x5209,	// (0x00007dd2) fep_vkb_prediction_pane_g1

0x522b,	// (0x00007df4) fep_vkb_prediction_pane_g2

0x5233,	// (0x00007dfc) fep_vkb_prediction_pane_g3

0x523b,	// (0x00007e04) fep_vkb_prediction_pane_g4

0x0003,

0xfc89,	// (0x00012852) fep_vkb_prediction_pane_g

0xb615,	// (0x0000e1de) slider_set_pane_g3

0xb629,	// (0x0000e1f2) slider_set_pane_g4

0xb641,	// (0x0000e20a) slider_set_pane_g5

0xb615,	// (0x0000e1de) slider_set_pane_g6

0xb657,	// (0x0000e220) slider_set_pane_g7

0x23c5,	// (0x00004f8e) slider_form_pane_g3

0x23ce,	// (0x00004f97) slider_form_pane_g4

0x23d6,	// (0x00004f9f) slider_form_pane_g5

0x23c5,	// (0x00004f8e) slider_form_pane_g6

0xb7de,	// (0x0000e3a7) slider_form_pane_g7

0x2c1e,	// (0x000057e7) slider_set_pane_vc_g3

0x2c27,	// (0x000057f0) slider_set_pane_vc_g4

0x2c30,	// (0x000057f9) slider_set_pane_vc_g5

0x2c1e,	// (0x000057e7) slider_set_pane_vc_g6

0x2c39,	// (0x00005802) slider_set_pane_vc_g7

0x3138,	// (0x00005d01) slider_form_pane_vc_g1

0x3141,	// (0x00005d0a) slider_form_pane_vc_g2

0x314a,	// (0x00005d13) slider_form_pane_vc_g3

0x3138,	// (0x00005d01) slider_form_pane_vc_g4

0x3153,	// (0x00005d1c) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00012620) slider_form_pane_vc_g

0xdfba,	// (0x00010b83) main_idle_act3_pane

0x5243,	// (0x00007e0c) ai3_links_pane

0xc452,	// (0x0000f01b) popup_ai3_data_window_ParamLimits

0xc452,	// (0x0000f01b) popup_ai3_data_window

0xdfba,	// (0x00010b83) grid_ai3_links_pane

0xc46a,	// (0x0000f033) cell_ai3_links_pane_ParamLimits

0xc46a,	// (0x0000f033) cell_ai3_links_pane

0x527c,	// (0x00007e45) bg_popup_sub_pane_cp11

0x5289,	// (0x00007e52) cell_ai3_links_pane_g1

0xdfba,	// (0x00010b83) bg_popup_sub_pane_cp12

0x52ae,	// (0x00007e77) heading_ai3_data_pane

0x52b6,	// (0x00007e7f) list_ai3_gene_pane

0x52c2,	// (0x00007e8b) popup_ai3_data_window_g1

0x52ca,	// (0x00007e93) heading_ai3_data_pane_g1

0x52d2,	// (0x00007e9b) heading_ai3_data_pane_t1

0xc484,	// (0x0000f04d) list_double_ai3_gene_pane_ParamLimits

0xc484,	// (0x0000f04d) list_double_ai3_gene_pane

0x52ed,	// (0x00007eb6) list_single_ai3_gene_pane_ParamLimits

0x52ed,	// (0x00007eb6) list_single_ai3_gene_pane

0x3a3f,	// (0x00006608) list_highlight_pane_cp7_ParamLimits

0x3a3f,	// (0x00006608) list_highlight_pane_cp7

0x52fa,	// (0x00007ec3) list_single_a13_gene_pane_t1_ParamLimits

0x52fa,	// (0x00007ec3) list_single_a13_gene_pane_t1

0x5311,	// (0x00007eda) list_single_ai3_gene_pane_g1

0x531a,	// (0x00007ee3) list_single_ai3_gene_pane_g2

0x0001,

0xfc92,	// (0x0001285b) list_single_ai3_gene_pane_g

0x5322,	// (0x00007eeb) list_double_ai3_gene_pane_g1_ParamLimits

0x5322,	// (0x00007eeb) list_double_ai3_gene_pane_g1

0xc491,	// (0x0000f05a) list_double_ai3_gene_pane_t1_ParamLimits

0xc491,	// (0x0000f05a) list_double_ai3_gene_pane_t1

0x534a,	// (0x00007f13) list_double_ai3_gene_pane_t2_ParamLimits

0x534a,	// (0x00007f13) list_double_ai3_gene_pane_t2

0x535f,	// (0x00007f28) list_double_ai3_gene_pane_t3_ParamLimits

0x535f,	// (0x00007f28) list_double_ai3_gene_pane_t3

0x0002,

0xfc97,	// (0x00012860) list_double_ai3_gene_pane_t_ParamLimits

0xfc97,	// (0x00012860) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5106,	// (0x00007ccf) aid_size_min_col_2

0xc2f8,	// (0x0000eec1) aid_size_min_msg_ParamLimits

0xc2f8,	// (0x0000eec1) aid_size_min_msg

0xbe70,	// (0x0000ea39) fep_vkb_top_text_pane_g2_ParamLimits

0xbe70,	// (0x0000ea39) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000126d3) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000126d3) fep_vkb_top_text_pane_g

0xdfba,	// (0x00010b83) main_hc_apps_shell_pane

0x537c,	// (0x00007f45) grid_hc_apps_pane_ParamLimits

0x537c,	// (0x00007f45) grid_hc_apps_pane

0x538e,	// (0x00007f57) list_hc_apps_pane

0x5396,	// (0x00007f5f) scroll_pane_cp37_ParamLimits

0x5396,	// (0x00007f5f) scroll_pane_cp37

0xc4ad,	// (0x0000f076) cell_hc_apps_pane_ParamLimits

0xc4ad,	// (0x0000f076) cell_hc_apps_pane

0xc56b,	// (0x0000f134) cell_hc_apps_pane_g1_ParamLimits

0xc56b,	// (0x0000f134) cell_hc_apps_pane_g1

0x5480,	// (0x00008049) cell_hc_apps_pane_g2_ParamLimits

0x5480,	// (0x00008049) cell_hc_apps_pane_g2

0x549c,	// (0x00008065) cell_hc_apps_pane_g3_ParamLimits

0x549c,	// (0x00008065) cell_hc_apps_pane_g3

0x0002,

0xfc9e,	// (0x00012867) cell_hc_apps_pane_g_ParamLimits

0xfc9e,	// (0x00012867) cell_hc_apps_pane_g

0xc597,	// (0x0000f160) cell_hc_apps_pane_t1_ParamLimits

0xc597,	// (0x0000f160) cell_hc_apps_pane_t1

0xe2fd,	// (0x00010ec6) grid_highlight_pane_cp10_ParamLimits

0xe2fd,	// (0x00010ec6) grid_highlight_pane_cp10

0xc5d5,	// (0x0000f19e) list_single_hc_apps_pane_ParamLimits

0xc5d5,	// (0x0000f19e) list_single_hc_apps_pane

0xc605,	// (0x0000f1ce) list_single_hc_apps_pane_g1

0xc61e,	// (0x0000f1e7) list_single_hc_apps_pane_g2

0x0001,

0xfca5,	// (0x0001286e) list_single_hc_apps_pane_g

0xc637,	// (0x0000f200) list_single_hc_apps_pane_g2_copy1

0xc653,	// (0x0000f21c) list_single_hc_apps_pane_t1

0xe1b9,	// (0x00010d82) bg_set_opt_pane_cp_ParamLimits

0x9028,	// (0x0000bbf1) setting_slider_pane_t1_ParamLimits

0x9041,	// (0x0000bc0a) setting_slider_pane_t2_ParamLimits

0x905b,	// (0x0000bc24) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x00012102) setting_slider_pane_t_ParamLimits

0x9073,	// (0x0000bc3c) slider_set_pane_ParamLimits

0xf498,	// (0x00012061) control_pane_g5_ParamLimits

0xf498,	// (0x00012061) control_pane_g5

0xb608,	// (0x0000e1d1) slider_set_pane_g1_ParamLimits

0x21c1,	// (0x00004d8a) slider_set_pane_g2_ParamLimits

0xb615,	// (0x0000e1de) slider_set_pane_g3_ParamLimits

0xb629,	// (0x0000e1f2) slider_set_pane_g4_ParamLimits

0xb641,	// (0x0000e20a) slider_set_pane_g5_ParamLimits

0xb615,	// (0x0000e1de) slider_set_pane_g6_ParamLimits

0xb657,	// (0x0000e220) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x000124e8) slider_set_pane_g_ParamLimits

0xf144,	// (0x00011d0d) navi_icon_text_pane_ParamLimits

0xaa6b,	// (0x0000d634) aid_fill_nsta_2_ParamLimits

0xaaa2,	// (0x0000d66b) aid_touch_tab_arrow_left_ParamLimits

0xaab8,	// (0x0000d681) aid_touch_tab_arrow_right_ParamLimits

0xab53,	// (0x0000d71c) clock_nsta_pane_ParamLimits

0x1c41,	// (0x0000480a) navi_icon_pane_g1_ParamLimits

0x1c4d,	// (0x00004816) navi_text_pane_t1_ParamLimits

0x358a,	// (0x00006153) navi_icon_text_pane_g1_ParamLimits

0x3596,	// (0x0000615f) navi_icon_text_pane_t1_ParamLimits

0xc605,	// (0x0000f1ce) list_single_hc_apps_pane_g1_ParamLimits

0xc61e,	// (0x0000f1e7) list_single_hc_apps_pane_g2_ParamLimits

0xfca5,	// (0x0001286e) list_single_hc_apps_pane_g_ParamLimits

0xc637,	// (0x0000f200) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc653,	// (0x0000f21c) list_single_hc_apps_pane_t1_ParamLimits

0x8e59,	// (0x0000ba22) popup_toolbar2_fixed_window_ParamLimits

0x8e59,	// (0x0000ba22) popup_toolbar2_fixed_window

0xa97b,	// (0x0000d544) popup_toolbar2_float_window

0xdfba,	// (0x00010b83) bg_popup_sub_pane_cp27

0x55dd,	// (0x000081a6) grid_toolbar2_float_pane

0xdfba,	// (0x00010b83) bg_popup_sub_pane_cp26

0x55dd,	// (0x000081a6) grid_toolbar2_fixed_pane

0xc681,	// (0x0000f24a) cell_toolbar2_fixed_pane_ParamLimits

0xc681,	// (0x0000f24a) cell_toolbar2_fixed_pane

0xc69b,	// (0x0000f264) cell_toolbar2_fixed_pane_g1

0x099e,	// (0x00003567) toolbar2_fixed_button_pane

0x0a70,	// (0x00003639) toolbar2_fixed_button_pane_g1

0x0a78,	// (0x00003641) toolbar2_fixed_button_pane_g2

0x0a80,	// (0x00003649) toolbar2_fixed_button_pane_g3

0x0a88,	// (0x00003651) toolbar2_fixed_button_pane_g4

0x0a90,	// (0x00003659) toolbar2_fixed_button_pane_g5

0x0a98,	// (0x00003661) toolbar2_fixed_button_pane_g6

0x0aa0,	// (0x00003669) toolbar2_fixed_button_pane_g7

0x0aa8,	// (0x00003671) toolbar2_fixed_button_pane_g8

0x0ab0,	// (0x00003679) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x000123ea) toolbar2_fixed_button_pane_g

0x55fe,	// (0x000081c7) cell_toolbar2_float_pane_ParamLimits

0x55fe,	// (0x000081c7) cell_toolbar2_float_pane

0x560f,	// (0x000081d8) cell_toolbar2_float_pane_g1

0x099e,	// (0x00003567) toolbar2_fixed_button_pane_cp

0xbd58,	// (0x0000e921) fep_vkb_accented_list_pane_ParamLimits

0xbd58,	// (0x0000e921) fep_vkb_accented_list_pane

0x4245,	// (0x00006e0e) bg_popup_fep_shadow_pane_g9

0xf29f,	// (0x00011e68) bg_popup_fep_shadow_pane_cp3

0xe762,	// (0x0001132b) list_accented_list_pane

0x5618,	// (0x000081e1) list_single_accented_list_pane_ParamLimits

0x5618,	// (0x000081e1) list_single_accented_list_pane

0xf29f,	// (0x00011e68) list_highlight_pane_cp10

0x5629,	// (0x000081f2) list_single_accented_list_pane_t1

0xa8a5,	// (0x0000d46e) popup_slider_window_ParamLimits

0xa8a5,	// (0x0000d46e) popup_slider_window

0x50fd,	// (0x00007cc6) aid_indentation_list_msg

0xc78c,	// (0x0000f355) bg_popup_window_pane_cp19

0x574f,	// (0x00008318) popup_slider_window_g1

0x576b,	// (0x00008334) popup_slider_window_g2

0x5787,	// (0x00008350) popup_slider_window_g3

0x0005,

0xfcaa,	// (0x00012873) popup_slider_window_g

0x57ed,	// (0x000083b6) popup_slider_window_t1

0x5861,	// (0x0000842a) small_volume_slider_vertical_pane

0x3a7a,	// (0x00006643) small_volume_slider_vertical_pane_g1

0x3a7a,	// (0x00006643) small_volume_slider_vertical_pane_g2

0x587d,	// (0x00008446) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbc,	// (0x00012885) small_volume_slider_vertical_pane_g

0x8da7,	// (0x0000b970) area_side_right_pane_ParamLimits

0x8da7,	// (0x0000b970) area_side_right_pane

0xc844,	// (0x0000f40d) aid_size_side_button_ParamLimits

0xc844,	// (0x0000f40d) aid_size_side_button

0xc85d,	// (0x0000f426) grid_sctrl_middle_pane_ParamLimits

0xc85d,	// (0x0000f426) grid_sctrl_middle_pane

0x58b9,	// (0x00008482) sctrl_sk_bottom_pane

0x58ca,	// (0x00008493) sctrl_sk_top_pane

0x58dc,	// (0x000084a5) aid_touch_sctrl_top

0xe2fd,	// (0x00010ec6) bg_sctrl_sk_pane_ParamLimits

0xe2fd,	// (0x00010ec6) bg_sctrl_sk_pane

0x58e9,	// (0x000084b2) sctrl_sk_top_pane_g1

0x58f6,	// (0x000084bf) sctrl_sk_top_pane_t1

0x58dc,	// (0x000084a5) aid_touch_sctrl_bottom

0xe2fd,	// (0x00010ec6) bg_sctrl_sk_pane_cp_ParamLimits

0xe2fd,	// (0x00010ec6) bg_sctrl_sk_pane_cp

0x5911,	// (0x000084da) sctrl_sk_bottom_pane_g1

0x58f6,	// (0x000084bf) sctrl_sk_bottom_pane_t1

0xc877,	// (0x0000f440) cell_sctrl_middle_pane_ParamLimits

0xc877,	// (0x0000f440) cell_sctrl_middle_pane

0xc888,	// (0x0000f451) aid_touch_sctrl_middle_ParamLimits

0xc888,	// (0x0000f451) aid_touch_sctrl_middle

0xc895,	// (0x0000f45e) bg_sctrl_middle_pane_ParamLimits

0xc895,	// (0x0000f45e) bg_sctrl_middle_pane

0x59d6,	// (0x0000859f) cell_sctrl_middle_pane_g1_ParamLimits

0x59d6,	// (0x0000859f) cell_sctrl_middle_pane_g1

0xc8a3,	// (0x0000f46c) cell_sctrl_middle_pane_g2_ParamLimits

0xc8a3,	// (0x0000f46c) cell_sctrl_middle_pane_g2

0x0001,

0xfcc8,	// (0x00012891) cell_sctrl_middle_pane_g_ParamLimits

0xfcc8,	// (0x00012891) cell_sctrl_middle_pane_g

0x0a70,	// (0x00003639) bg_sctrl_middle_pane_g1

0x0a78,	// (0x00003641) bg_sctrl_middle_pane_g2

0x0a80,	// (0x00003649) bg_sctrl_middle_pane_g3

0x0a88,	// (0x00003651) bg_sctrl_middle_pane_g4

0x0a90,	// (0x00003659) bg_sctrl_middle_pane_g5

0x0a98,	// (0x00003661) bg_sctrl_middle_pane_g6

0x0aa0,	// (0x00003669) bg_sctrl_middle_pane_g7

0x0aa8,	// (0x00003671) bg_sctrl_middle_pane_g8

0x0007,

0xfccd,	// (0x00012896) bg_sctrl_middle_pane_g

0x0ab0,	// (0x00003679) bg_sctrl_middle_pane_g8_copy1

0x0a70,	// (0x00003639) bg_sctrl_sk_pane_g1

0x0a78,	// (0x00003641) bg_sctrl_sk_pane_g2

0x0a80,	// (0x00003649) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x000123ea) bg_sctrl_sk_pane_g

0xe4cb,	// (0x00011094) aid_size_touch_scroll_bar

0x0a88,	// (0x00003651) bg_sctrl_sk_pane_g4

0x0a90,	// (0x00003659) bg_sctrl_sk_pane_g5

0x0a98,	// (0x00003661) bg_sctrl_sk_pane_g6

0x0aa0,	// (0x00003669) bg_sctrl_sk_pane_g7

0x0aa8,	// (0x00003671) bg_sctrl_sk_pane_g8

0x0ab0,	// (0x00003679) bg_sctrl_sk_pane_g9

0xf51f,	// (0x000120e8) popup_fep_china_hwr2_fs_candidate_window

0xa36b,	// (0x0000cf34) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa36b,	// (0x0000cf34) popup_fep_china_hwr2_fs_control_window

0x3efe,	// (0x00006ac7) sctrl_sk_top_pane_g2

0x0001,

0xfcc3,	// (0x0001288c) sctrl_sk_top_pane_g

0xc8af,	// (0x0000f478) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc8af,	// (0x0000f478) aid_fep_china_hwr2_fs_cell

0xc8c3,	// (0x0000f48c) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc8c3,	// (0x0000f48c) bg_popup_fep_shadow_pane_cp4

0xc8da,	// (0x0000f4a3) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc8da,	// (0x0000f4a3) bg_popup_fep_shadow_pane_cp5

0xc8ec,	// (0x0000f4b5) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc8ec,	// (0x0000f4b5) popup_fep_china_hwr2_fs_control_bar_grid

0xed55,	// (0x0001191e) popup_fep_china_hwr2_fs_control_funtion_grid

0x59aa,	// (0x00008573) aid_fep_china_hwr2_fs_candi_cell

0xdfba,	// (0x00010b83) bg_popup_fep_shadow_pane_cp6

0x59b4,	// (0x0000857d) popup_fep_china_hwr2_fs_candidate_grid

0xc900,	// (0x0000f4c9) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc900,	// (0x0000f4c9) cell_fep_china_hwr2_fs_funtion_grid

0x3a7a,	// (0x00006643) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x59d6,	// (0x0000859f) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x59d6,	// (0x0000859f) cell_fep_china_hwr2_fs_funtion_grid_g1

0x59e4,	// (0x000085ad) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x59e4,	// (0x000085ad) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcde,	// (0x000128a7) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcde,	// (0x000128a7) cell_fep_china_hwr2_fs_funtion_grid_g

0xc918,	// (0x0000f4e1) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc918,	// (0x0000f4e1) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc92d,	// (0x0000f4f6) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc92d,	// (0x0000f4f6) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce3,	// (0x000128ac) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce3,	// (0x000128ac) cell_fep_china_hwr2_fs_funtion_grid_t

0x5a2b,	// (0x000085f4) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5a33,	// (0x000085fc) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5a3b,	// (0x00008604) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce8,	// (0x000128b1) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5a43,	// (0x0000860c) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5a43,	// (0x0000860c) cell_fep_china_hwr2_fs_candidate_grid

0x5a5c,	// (0x00008625) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5a64,	// (0x0000862d) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3a7a,	// (0x00006643) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3a7a,	// (0x00006643) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x000126d8) cell_fep_china_hwr2_fs_candidate_grid_g

0x5a6c,	// (0x00008635) cell_fep_china_hwr2_fs_candidate_grid_t1

0x05b9,	// (0x00003182) clock_nsta_pane_cp_24_ParamLimits

0x05b9,	// (0x00003182) clock_nsta_pane_cp_24

0x0637,	// (0x00003200) indicator_nsta_pane_cp_24_ParamLimits

0x0637,	// (0x00003200) indicator_nsta_pane_cp_24

0x1aac,	// (0x00004675) heading_pane_g1

0x0001,

0xf886,	// (0x0001244f) heading_pane_g

0x26ba,	// (0x00005283) grid_sct_catagory_button_pane

0x26ea,	// (0x000052b3) scroll_pane_cp5_ParamLimits

0x3620,	// (0x000061e9) button_value_adjust_pane_cp5_ParamLimits

0x3620,	// (0x000061e9) button_value_adjust_pane_cp5

0x371a,	// (0x000062e3) form2_midp_time_pane_ParamLimits

0x5a7a,	// (0x00008643) cell_sct_catagory_button_pane_ParamLimits

0x5a7a,	// (0x00008643) cell_sct_catagory_button_pane

0x3a3f,	// (0x00006608) bg_button_pane_cp01_ParamLimits

0x3a3f,	// (0x00006608) bg_button_pane_cp01

0x3a7a,	// (0x00006643) cell_sct_catagory_button_pane_g1

0xa91e,	// (0x0000d4e7) popup_tb_extension_window

0xc949,	// (0x0000f512) aid_size_cell_ext_ParamLimits

0xc949,	// (0x0000f512) aid_size_cell_ext

0xe47d,	// (0x00011046) bg_tb_trans_pane_cp1_ParamLimits

0xe47d,	// (0x00011046) bg_tb_trans_pane_cp1

0xc96f,	// (0x0000f538) grid_tb_ext_pane_ParamLimits

0xc96f,	// (0x0000f538) grid_tb_ext_pane

0xc9ae,	// (0x0000f577) cell_tb_ext_pane_ParamLimits

0xc9ae,	// (0x0000f577) cell_tb_ext_pane

0xc9d6,	// (0x0000f59f) cell_tb_ext_pane_g1_ParamLimits

0xc9d6,	// (0x0000f59f) cell_tb_ext_pane_g1

0x5b10,	// (0x000086d9) cell_tb_ext_pane_t1

0xe2fd,	// (0x00010ec6) list_highlight_pane_cp11_ParamLimits

0xe2fd,	// (0x00010ec6) list_highlight_pane_cp11

0x8e6e,	// (0x0000ba37) popup_uni_indicator_window_ParamLimits

0x8e6e,	// (0x0000ba37) popup_uni_indicator_window

0xe5db,	// (0x000111a4) bg_popup_sub_pane_cp14

0xc9f3,	// (0x0000f5bc) list_uniindi_pane

0xc9ff,	// (0x0000f5c8) uniindi_top_pane

0xe2fd,	// (0x00010ec6) bg_uniindi_top_pane

0xca1e,	// (0x0000f5e7) uniindi_top_pane_g1

0xca34,	// (0x0000f5fd) uniindi_top_pane_g2

0x0003,

0xfcef,	// (0x000128b8) uniindi_top_pane_g

0xca51,	// (0x0000f61a) uniindi_top_pane_t1

0x5bc1,	// (0x0000878a) list_single_uniindi_pane_ParamLimits

0x5bc1,	// (0x0000878a) list_single_uniindi_pane

0x3a7a,	// (0x00006643) bg_uniindi_top_pane_g1

0x5bd4,	// (0x0000879d) list_single_uniindi_pane_g1

0x5be7,	// (0x000087b0) list_single_uniindi_pane_t1

0xdfba,	// (0x00010b83) control_bg_pane

0x5c0c,	// (0x000087d5) bg_sctrl_sk_pane_cp1

0x5c15,	// (0x000087de) bg_sctrl_sk_pane_cp2

0x5c1e,	// (0x000087e7) control_bg_pane_g1

0x5c27,	// (0x000087f0) control_bg_pane_g2

0x0001,

0xfcf8,	// (0x000128c1) control_bg_pane_g

0x341e,	// (0x00005fe7) cell_indicator_nsta_pane_g1_ParamLimits

0xbab9,	// (0x0000e682) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x0001263c) cell_indicator_nsta_pane_g_ParamLimits

0x37a2,	// (0x0000636b) form2_midp_time_pane_t1_ParamLimits

0x3ad6,	// (0x0000669f) main_idle_act4_pane_ParamLimits

0x3ad6,	// (0x0000669f) main_idle_act4_pane

0xa91e,	// (0x0000d4e7) popup_tb_extension_window_ParamLimits

0xc994,	// (0x0000f55d) tb_ext_find_pane_ParamLimits

0xc994,	// (0x0000f55d) tb_ext_find_pane

0x5c30,	// (0x000087f9) ai_gene_pane_1_cp1

0xf320,	// (0x00011ee9) ai_gene_pane_2_cp1

0xca7b,	// (0x0000f644) list_single_idle_plugin_calendar_pane

0x5c41,	// (0x0000880a) list_single_idle_plugin_notification_pane

0x5c4a,	// (0x00008813) list_single_idle_plugin_player_pane

0xca84,	// (0x0000f64d) list_single_idle_plugin_shortcut_pane_ParamLimits

0xca84,	// (0x0000f64d) list_single_idle_plugin_shortcut_pane

0xcaac,	// (0x0000f675) main_idle_act4_pane_t1

0xcac3,	// (0x0000f68c) main_idle_act4_pane_t2

0x0001,

0xfcfd,	// (0x000128c6) main_idle_act4_pane_t

0xcada,	// (0x0000f6a3) middle_sk_idle_act4_pane_ParamLimits

0xcada,	// (0x0000f6a3) middle_sk_idle_act4_pane

0xcaf6,	// (0x0000f6bf) popup_clock_digital_analogue_window_cp2

0xcb22,	// (0x0000f6eb) shortcut_wheel_idle_act4_pane_ParamLimits

0xcb22,	// (0x0000f6eb) shortcut_wheel_idle_act4_pane

0x3a7a,	// (0x00006643) shortcut_wheel_idle_act4_pane_g1

0x3a7a,	// (0x00006643) shortcut_wheel_idle_act4_pane_g2

0x3a7a,	// (0x00006643) shortcut_wheel_idle_act4_pane_g3

0x3a7a,	// (0x00006643) shortcut_wheel_idle_act4_pane_g4

0x3a7a,	// (0x00006643) shortcut_wheel_idle_act4_pane_g5

0x5cdd,	// (0x000088a6) shortcut_wheel_idle_act4_pane_g6

0x5ce5,	// (0x000088ae) shortcut_wheel_idle_act4_pane_g7

0x5ced,	// (0x000088b6) shortcut_wheel_idle_act4_pane_g8

0x5cf5,	// (0x000088be) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd02,	// (0x000128cb) shortcut_wheel_idle_act4_pane_g

0x3b8b,	// (0x00006754) middle_sk_idle_act4_pane_g1_ParamLimits

0x3b8b,	// (0x00006754) middle_sk_idle_act4_pane_g1

0xcb9f,	// (0x0000f768) middle_sk_idle_act4_pane_g2_ParamLimits

0xcb9f,	// (0x0000f768) middle_sk_idle_act4_pane_g2

0x0001,

0xfd25,	// (0x000128ee) middle_sk_idle_act4_pane_g_ParamLimits

0xfd25,	// (0x000128ee) middle_sk_idle_act4_pane_g

0xcbb7,	// (0x0000f780) middle_sk_idle_act4_pane_t1_ParamLimits

0xcbb7,	// (0x0000f780) middle_sk_idle_act4_pane_t1

0xcbe6,	// (0x0000f7af) grid_ai_shortcut_pane_ParamLimits

0xcbe6,	// (0x0000f7af) grid_ai_shortcut_pane

0xcc03,	// (0x0000f7cc) list_highlight_pane_cp16_ParamLimits

0xcc03,	// (0x0000f7cc) list_highlight_pane_cp16

0xcc10,	// (0x0000f7d9) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcc10,	// (0x0000f7d9) list_single_idle_plugin_shortcut_pane_g1

0xcc1c,	// (0x0000f7e5) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcc1c,	// (0x0000f7e5) list_single_idle_plugin_shortcut_pane_g2

0xcc38,	// (0x0000f801) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcc38,	// (0x0000f801) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2a,	// (0x000128f3) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2a,	// (0x000128f3) list_single_idle_plugin_shortcut_pane_g

0xcc4d,	// (0x0000f816) cell_ai_shortcut_pane_ParamLimits

0xcc4d,	// (0x0000f816) cell_ai_shortcut_pane

0xcc63,	// (0x0000f82c) cell_ai_shortcut_pane_g1_ParamLimits

0xcc63,	// (0x0000f82c) cell_ai_shortcut_pane_g1

0x5c30,	// (0x000087f9) ai_gene_pane_1_cp2

0x5e25,	// (0x000089ee) ai_gene_pane_2_cp2

0x5e2d,	// (0x000089f6) list_highlight_pane_cp15

0xcc85,	// (0x0000f84e) list_single_idle_plugin_calendar_pane_g1

0x5e2d,	// (0x000089f6) list_highlight_pane_cp17

0x5e3e,	// (0x00008a07) list_single_idle_plugin_calendar_pane_g1_copy1

0x5e46,	// (0x00008a0f) list_single_idle_plugin_player_pane_g1

0x29cb,	// (0x00005594) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd31,	// (0x000128fa) list_single_idle_plugin_player_pane_g

0x5e4e,	// (0x00008a17) list_single_idle_plugin_player_pane_t1

0x5e5c,	// (0x00008a25) list_single_idle_plugin_player_pane_t2

0x5e6a,	// (0x00008a33) list_single_idle_plugin_player_pane_t3

0x5e78,	// (0x00008a41) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd36,	// (0x000128ff) list_single_idle_plugin_player_pane_t

0x5e86,	// (0x00008a4f) wait_bar_pane_cp15

0x5e8e,	// (0x00008a57) grid_ai_notification_pane

0x29cb,	// (0x00005594) list_single_idle_plugin_notification_pane_g1

0xcc8d,	// (0x0000f856) cell_ai_notification_pane_ParamLimits

0xcc8d,	// (0x0000f856) cell_ai_notification_pane

0x5ea4,	// (0x00008a6d) cell_ai_notification_pane_g1

0x5eac,	// (0x00008a75) cell_ai_notification_pane_t1

0xcc9a,	// (0x0000f863) tb_ext_find_button_pane

0xcca2,	// (0x0000f86b) tb_ext_find_pane_g1

0xccaa,	// (0x0000f873) tb_ext_find_pane_t1

0xec58,	// (0x00011821) tb_ext_find_button_pane_g1

0xccb8,	// (0x0000f881) tb_ext_find_button_pane_g2

0x0001,

0xfd3f,	// (0x00012908) tb_ext_find_button_pane_g

0xcaac,	// (0x0000f675) main_idle_act4_pane_t1_ParamLimits

0xcac3,	// (0x0000f68c) main_idle_act4_pane_t2_ParamLimits

0xfcfd,	// (0x000128c6) main_idle_act4_pane_t_ParamLimits

0xcaf6,	// (0x0000f6bf) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcb0e,	// (0x0000f6d7) sat_plugin_idle_act4_pane_ParamLimits

0xcb0e,	// (0x0000f6d7) sat_plugin_idle_act4_pane

0xccc1,	// (0x0000f88a) sat_plugin_idle_act4_pane_t1_ParamLimits

0xccc1,	// (0x0000f88a) sat_plugin_idle_act4_pane_t1

0xccd9,	// (0x0000f8a2) sat_plugin_idle_act4_pane_t2_ParamLimits

0xccd9,	// (0x0000f8a2) sat_plugin_idle_act4_pane_t2

0xccf1,	// (0x0000f8ba) sat_plugin_idle_act4_pane_t3_ParamLimits

0xccf1,	// (0x0000f8ba) sat_plugin_idle_act4_pane_t3

0xcd09,	// (0x0000f8d2) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcd09,	// (0x0000f8d2) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd44,	// (0x0001290d) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd44,	// (0x0001290d) sat_plugin_idle_act4_pane_t

0x8de9,	// (0x0000b9b2) popup_battery_window_ParamLimits

0x8de9,	// (0x0000b9b2) popup_battery_window

0xe2fd,	// (0x00010ec6) bg_popup_sub_pane_cp25_ParamLimits

0xe2fd,	// (0x00010ec6) bg_popup_sub_pane_cp25

0x5f2d,	// (0x00008af6) popup_battery_window_g1_ParamLimits

0x5f2d,	// (0x00008af6) popup_battery_window_g1

0x5f39,	// (0x00008b02) popup_battery_window_t1_ParamLimits

0x5f39,	// (0x00008b02) popup_battery_window_t1

0x5f4b,	// (0x00008b14) popup_battery_window_t2_ParamLimits

0x5f4b,	// (0x00008b14) popup_battery_window_t2

0x0001,

0xfd4d,	// (0x00012916) popup_battery_window_t_ParamLimits

0xfd4d,	// (0x00012916) popup_battery_window_t

0x9fa1,	// (0x0000cb6a) midp_canvas_pane_ParamLimits

0xa013,	// (0x0000cbdc) midp_keypad_pane_ParamLimits

0xa013,	// (0x0000cbdc) midp_keypad_pane

0xf47e,	// (0x00012047) main_midp_pane_ParamLimits

0xbac6,	// (0x0000e68f) signal_pane_g2_cp_ParamLimits

0xcd21,	// (0x0000f8ea) aid_size_cell_midp_keypad_ParamLimits

0xcd21,	// (0x0000f8ea) aid_size_cell_midp_keypad

0xcd3f,	// (0x0000f908) midp_keyp_game_grid_pane_ParamLimits

0xcd3f,	// (0x0000f908) midp_keyp_game_grid_pane

0xcd66,	// (0x0000f92f) midp_keyp_rocker_pane_ParamLimits

0xcd66,	// (0x0000f92f) midp_keyp_rocker_pane

0xcdb7,	// (0x0000f980) midp_keyp_sk_left_pane_ParamLimits

0xcdb7,	// (0x0000f980) midp_keyp_sk_left_pane

0xce0b,	// (0x0000f9d4) midp_keyp_sk_right_pane_ParamLimits

0xce0b,	// (0x0000f9d4) midp_keyp_sk_right_pane

0xdfba,	// (0x00010b83) bg_button_pane_cp03

0xce5f,	// (0x0000fa28) midp_keyp_sk_left_pane_g1

0xdfba,	// (0x00010b83) bg_button_pane_cp04

0xce5f,	// (0x0000fa28) midp_keyp_sk_right_pane_g1

0x3a7a,	// (0x00006643) midp_keyp_rocker_pane_g1

0xce68,	// (0x0000fa31) keyp_game_cell_pane_ParamLimits

0xce68,	// (0x0000fa31) keyp_game_cell_pane

0xdfba,	// (0x00010b83) bg_button_pane_cp02

0xce8c,	// (0x0000fa55) keyp_game_cell_pane_g1

0x8e09,	// (0x0000b9d2) popup_fep_vkb2_window_ParamLimits

0x8e09,	// (0x0000b9d2) popup_fep_vkb2_window

0xce95,	// (0x0000fa5e) aid_size_cell_vkb2_ParamLimits

0xce95,	// (0x0000fa5e) aid_size_cell_vkb2

0xcec9,	// (0x0000fa92) popup_fep_vkb2_window_g1_ParamLimits

0xcec9,	// (0x0000fa92) popup_fep_vkb2_window_g1

0xcf19,	// (0x0000fae2) vkb2_area_bottom_pane_ParamLimits

0xcf19,	// (0x0000fae2) vkb2_area_bottom_pane

0xcf6d,	// (0x0000fb36) vkb2_area_keypad_pane_ParamLimits

0xcf6d,	// (0x0000fb36) vkb2_area_keypad_pane

0xcfb5,	// (0x0000fb7e) vkb2_area_top_pane_ParamLimits

0xcfb5,	// (0x0000fb7e) vkb2_area_top_pane

0xd041,	// (0x0000fc0a) vkb2_top_entry_pane_ParamLimits

0xd041,	// (0x0000fc0a) vkb2_top_entry_pane

0xd06e,	// (0x0000fc37) vkb2_top_grid_left_pane_ParamLimits

0xd06e,	// (0x0000fc37) vkb2_top_grid_left_pane

0xd08f,	// (0x0000fc58) vkb2_top_grid_right_pane_ParamLimits

0xd08f,	// (0x0000fc58) vkb2_top_grid_right_pane

0x62cb,	// (0x00008e94) vkb2_cell_keypad_pane_ParamLimits

0x62cb,	// (0x00008e94) vkb2_cell_keypad_pane

0xd0d7,	// (0x0000fca0) vkb2_area_bottom_grid_pane_ParamLimits

0xd0d7,	// (0x0000fca0) vkb2_area_bottom_grid_pane

0xd101,	// (0x0000fcca) vkb2_area_bottom_pane_g1_ParamLimits

0xd101,	// (0x0000fcca) vkb2_area_bottom_pane_g1

0xd127,	// (0x0000fcf0) vkb2_area_bottom_pane_g2_ParamLimits

0xd127,	// (0x0000fcf0) vkb2_area_bottom_pane_g2

0xd158,	// (0x0000fd21) vkb2_area_bottom_pane_g3_ParamLimits

0xd158,	// (0x0000fd21) vkb2_area_bottom_pane_g3

0x0002,

0xfd52,	// (0x0001291b) vkb2_area_bottom_pane_g_ParamLimits

0xfd52,	// (0x0001291b) vkb2_area_bottom_pane_g

0x6475,	// (0x0000903e) vkb2_top_cell_left_pane_ParamLimits

0x6475,	// (0x0000903e) vkb2_top_cell_left_pane

0xd1c2,	// (0x0000fd8b) vkb2_top_entry_pane_g1_ParamLimits

0xd1c2,	// (0x0000fd8b) vkb2_top_entry_pane_g1

0xd1d0,	// (0x0000fd99) vkb2_top_entry_pane_t1_ParamLimits

0xd1d0,	// (0x0000fd99) vkb2_top_entry_pane_t1

0x64dd,	// (0x000090a6) vkb2_top_entry_pane_t2_ParamLimits

0x64dd,	// (0x000090a6) vkb2_top_entry_pane_t2

0x650f,	// (0x000090d8) vkb2_top_entry_pane_t3_ParamLimits

0x650f,	// (0x000090d8) vkb2_top_entry_pane_t3

0x0002,

0xfd59,	// (0x00012922) vkb2_top_entry_pane_t_ParamLimits

0xfd59,	// (0x00012922) vkb2_top_entry_pane_t

0xd209,	// (0x0000fdd2) vkb2_top_grid_right_pane_g1_ParamLimits

0xd209,	// (0x0000fdd2) vkb2_top_grid_right_pane_g1

0x6576,	// (0x0000913f) vkb2_top_grid_right_pane_g2_ParamLimits

0x6576,	// (0x0000913f) vkb2_top_grid_right_pane_g2

0x658e,	// (0x00009157) vkb2_top_grid_right_pane_g3_ParamLimits

0x658e,	// (0x00009157) vkb2_top_grid_right_pane_g3

0xd21f,	// (0x0000fde8) vkb2_top_grid_right_pane_g4_ParamLimits

0xd21f,	// (0x0000fde8) vkb2_top_grid_right_pane_g4

0x0003,

0xfd60,	// (0x00012929) vkb2_top_grid_right_pane_g_ParamLimits

0xfd60,	// (0x00012929) vkb2_top_grid_right_pane_g

0x65bc,	// (0x00009185) vkb2_top_cell_left_pane_g1

0x65d3,	// (0x0000919c) vkb2_cell_keypad_pane_g1_ParamLimits

0x65d3,	// (0x0000919c) vkb2_cell_keypad_pane_g1

0x65e1,	// (0x000091aa) vkb2_cell_keypad_pane_t1_ParamLimits

0x65e1,	// (0x000091aa) vkb2_cell_keypad_pane_t1

0x65f8,	// (0x000091c1) vkb2_cell_bottom_grid_pane_ParamLimits

0x65f8,	// (0x000091c1) vkb2_cell_bottom_grid_pane

0x6631,	// (0x000091fa) vkb2_cell_bottom_grid_pane_g1

0xcb43,	// (0x0000f70c) aid_call2_pane_cp02

0xcb4b,	// (0x0000f714) aid_call_pane_cp02

0xcb53,	// (0x0000f71c) clock_digital_number_pane_cp10

0xcb5b,	// (0x0000f724) clock_digital_number_pane_cp11

0xcb63,	// (0x0000f72c) clock_digital_number_pane_cp12

0xcb6b,	// (0x0000f734) clock_digital_number_pane_cp13

0xcb73,	// (0x0000f73c) clock_digital_separator_pane_cp10

0xec58,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g1

0xec58,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g2

0xcb7b,	// (0x0000f744) popup_clock_digital_analogue_window_cp2_g3

0xec58,	// (0x00011821) popup_clock_digital_analogue_window_cp2_g4

0xcb7b,	// (0x0000f744) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd15,	// (0x000128de) popup_clock_digital_analogue_window_cp2_g

0xcb83,	// (0x0000f74c) popup_clock_digital_analogue_window_cp2_t1

0xcb91,	// (0x0000f75a) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd20,	// (0x000128e9) popup_clock_digital_analogue_window_cp2_t

0x3a7a,	// (0x00006643) clock_digital_number_pane_cp10_g1

0x3a7a,	// (0x00006643) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126d8) clock_digital_number_pane_cp10_g

0x3a7a,	// (0x00006643) clock_digital_separator_pane_cp10_g1

0x3a7a,	// (0x00006643) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x000126d8) clock_digital_separator_pane_cp10_g

0xca40,	// (0x0000f609) uniindi_top_pane_g3

0x5b8a,	// (0x00008753) uniindi_top_pane_g4

0x6356,	// (0x00008f1f) vkb2_row_keypad_pane_ParamLimits

0x6356,	// (0x00008f1f) vkb2_row_keypad_pane

0x6651,	// (0x0000921a) vkb2_cell_t_keypad_pane_ParamLimits

0x6651,	// (0x0000921a) vkb2_cell_t_keypad_pane

0x6661,	// (0x0000922a) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6661,	// (0x0000922a) vkb2_cell_t_keypad_pane_cp08

0x6674,	// (0x0000923d) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6674,	// (0x0000923d) vkb2_cell_t_keypad_pane_cp09

0x6688,	// (0x00009251) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6688,	// (0x00009251) vkb2_cell_t_keypad_pane_cp01

0x6699,	// (0x00009262) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x6699,	// (0x00009262) vkb2_cell_t_keypad_pane_cp02

0x66aa,	// (0x00009273) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x66aa,	// (0x00009273) vkb2_cell_t_keypad_pane_cp03

0x66bb,	// (0x00009284) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x66bb,	// (0x00009284) vkb2_cell_t_keypad_pane_cp04

0x66cc,	// (0x00009295) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x66cc,	// (0x00009295) vkb2_cell_t_keypad_pane_cp05

0x66dd,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x66dd,	// (0x000092a6) vkb2_cell_t_keypad_pane_cp06

0x66ee,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x66ee,	// (0x000092b7) vkb2_cell_t_keypad_pane_cp07

0x66ff,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x66ff,	// (0x000092c8) vkb2_cell_t_keypad_pane_cp10

0x3efe,	// (0x00006ac7) vkb2_cell_t_keypad_pane_g1

0x6714,	// (0x000092dd) vkb2_cell_t_keypad_pane_t1

0xdfba,	// (0x00010b83) popup_grid_graphic2_window

0xd235,	// (0x0000fdfe) aid_size_cell_graphic2_ParamLimits

0xd235,	// (0x0000fdfe) aid_size_cell_graphic2

0xd273,	// (0x0000fe3c) bg_popup_window_pane_cp21_ParamLimits

0xd273,	// (0x0000fe3c) bg_popup_window_pane_cp21

0xd281,	// (0x0000fe4a) graphic2_pages_pane_ParamLimits

0xd281,	// (0x0000fe4a) graphic2_pages_pane

0xd2d7,	// (0x0000fea0) grid_graphic2_control_pane_ParamLimits

0xd2d7,	// (0x0000fea0) grid_graphic2_control_pane

0xd31f,	// (0x0000fee8) grid_graphic2_pane_ParamLimits

0xd31f,	// (0x0000fee8) grid_graphic2_pane

0xd3a6,	// (0x0000ff6f) cell_graphic2_pane

0xdfba,	// (0x00010b83) main_comp_mode_pane

0x52b6,	// (0x00007e7f) list_ai3_gene_pane_ParamLimits

0xc78c,	// (0x0000f355) bg_popup_window_pane_cp19_ParamLimits

0x56f3,	// (0x000082bc) bg_touch_area_indi_pane_ParamLimits

0x56f3,	// (0x000082bc) bg_touch_area_indi_pane

0x5709,	// (0x000082d2) bg_touch_area_indi_pane_cp01_ParamLimits

0x5709,	// (0x000082d2) bg_touch_area_indi_pane_cp01

0x571f,	// (0x000082e8) bg_touch_area_indi_pane_cp02_ParamLimits

0x571f,	// (0x000082e8) bg_touch_area_indi_pane_cp02

0x5735,	// (0x000082fe) bg_touch_area_indi_pane_cp03_ParamLimits

0x5735,	// (0x000082fe) bg_touch_area_indi_pane_cp03

0x574f,	// (0x00008318) popup_slider_window_g1_ParamLimits

0x576b,	// (0x00008334) popup_slider_window_g2_ParamLimits

0x5787,	// (0x00008350) popup_slider_window_g3_ParamLimits

0xfcaa,	// (0x00012873) popup_slider_window_g_ParamLimits

0x57ed,	// (0x000083b6) popup_slider_window_t1_ParamLimits

0x5861,	// (0x0000842a) small_volume_slider_vertical_pane_ParamLimits

0xd3a6,	// (0x0000ff6f) cell_graphic2_pane_ParamLimits

0xd401,	// (0x0000ffca) bg_button_pane_cp10_ParamLimits

0xd401,	// (0x0000ffca) bg_button_pane_cp10

0xd414,	// (0x0000ffdd) bg_button_pane_cp11_ParamLimits

0xd414,	// (0x0000ffdd) bg_button_pane_cp11

0xd427,	// (0x0000fff0) graphic2_pages_pane_g1_ParamLimits

0xd427,	// (0x0000fff0) graphic2_pages_pane_g1

0xd442,	// (0x0001000b) graphic2_pages_pane_g2_ParamLimits

0xd442,	// (0x0001000b) graphic2_pages_pane_g2

0x0001,

0xfd6e,	// (0x00012937) graphic2_pages_pane_g_ParamLimits

0xfd6e,	// (0x00012937) graphic2_pages_pane_g

0xd45a,	// (0x00010023) graphic2_pages_pane_t1_ParamLimits

0xd45a,	// (0x00010023) graphic2_pages_pane_t1

0xd472,	// (0x0001003b) cell_graphic2_control_pane_ParamLimits

0xd472,	// (0x0001003b) cell_graphic2_control_pane

0xd4a4,	// (0x0001006d) cell_graphic2_pane_g1_ParamLimits

0xd4a4,	// (0x0001006d) cell_graphic2_pane_g1

0x3d26,	// (0x000068ef) cell_graphic2_pane_g2_ParamLimits

0x3d26,	// (0x000068ef) cell_graphic2_pane_g2

0xd4b1,	// (0x0001007a) cell_graphic2_pane_g3_ParamLimits

0xd4b1,	// (0x0001007a) cell_graphic2_pane_g3

0x3d33,	// (0x000068fc) cell_graphic2_pane_g4_ParamLimits

0x3d33,	// (0x000068fc) cell_graphic2_pane_g4

0xd4be,	// (0x00010087) cell_graphic2_pane_g5_ParamLimits

0xd4be,	// (0x00010087) cell_graphic2_pane_g5

0x0004,

0xfd73,	// (0x0001293c) cell_graphic2_pane_g_ParamLimits

0xfd73,	// (0x0001293c) cell_graphic2_pane_g

0xd4db,	// (0x000100a4) cell_graphic2_pane_t1_ParamLimits

0xd4db,	// (0x000100a4) cell_graphic2_pane_t1

0x1aa0,	// (0x00004669) grid_highlight_pane_cp11_ParamLimits

0x1aa0,	// (0x00004669) grid_highlight_pane_cp11

0xe2fd,	// (0x00010ec6) bg_button_pane_cp05

0xd525,	// (0x000100ee) cell_graphic2_control_pane_g1

0x3a7a,	// (0x00006643) bg_touch_area_indi_pane_g1

0x69ed,	// (0x000095b6) aid_cmod_rocker_key_size

0x69f7,	// (0x000095c0) aid_cmode_itu_key_size

0x6a01,	// (0x000095ca) main_cmode_video_pane

0x6a0b,	// (0x000095d4) main_comp_mode_itu_pane

0x6a17,	// (0x000095e0) main_comp_mode_rocker_pane

0x6a23,	// (0x000095ec) cell_cmode_rocker_pane_ParamLimits

0x6a23,	// (0x000095ec) cell_cmode_rocker_pane

0x6a35,	// (0x000095fe) cell_cmode_itu_pane_ParamLimits

0x6a35,	// (0x000095fe) cell_cmode_itu_pane

0xe5db,	// (0x000111a4) bg_button_pane_cp06_ParamLimits

0xe5db,	// (0x000111a4) bg_button_pane_cp06

0x3efe,	// (0x00006ac7) cell_cmode_rocker_pane_g1_ParamLimits

0x3efe,	// (0x00006ac7) cell_cmode_rocker_pane_g1

0x59d6,	// (0x0000859f) cell_cmode_rocker_pane_g2_ParamLimits

0x59d6,	// (0x0000859f) cell_cmode_rocker_pane_g2

0x0001,

0xfd83,	// (0x0001294c) cell_cmode_rocker_pane_g_ParamLimits

0xfd83,	// (0x0001294c) cell_cmode_rocker_pane_g

0xdfba,	// (0x00010b83) bg_button_pane_cp07

0x6a4a,	// (0x00009613) cell_cmode_itu_pane_g1

0x6a53,	// (0x0000961c) cell_cmode_itu_pane_t1

0x6a61,	// (0x0000962a) cell_cmode_itu_pane_t2

0x0001,

0xfd88,	// (0x00012951) cell_cmode_itu_pane_t

0x5bfc,	// (0x000087c5) aid_touch_ctrl_left

0x5c04,	// (0x000087cd) aid_touch_ctrl_right

0xdfba,	// (0x00010b83) compa_mode_pane

0xd54b,	// (0x00010114) aid_cmod_rocker_key_size_cp

0xd555,	// (0x0001011e) aid_cmode_itu_key_size_cp

0x6a83,	// (0x0000964c) compa_mode_pane_g1

0x6a8b,	// (0x00009654) compa_mode_pane_g2

0x6a93,	// (0x0000965c) compa_mode_pane_g3

0x0002,

0xfd8d,	// (0x00012956) compa_mode_pane_g

0xd55f,	// (0x00010128) main_comp_mode_itu_pane_cp

0xd567,	// (0x00010130) main_comp_mode_rocker_pane_cp

0xd56f,	// (0x00010138) cell_cmode_itu_pane_cp_ParamLimits

0xd56f,	// (0x00010138) cell_cmode_itu_pane_cp

0xd584,	// (0x0001014d) cell_cmode_rocker_pane_cp_ParamLimits

0xd584,	// (0x0001014d) cell_cmode_rocker_pane_cp

0xe5db,	// (0x000111a4) bg_button_pane_cp06_cp_ParamLimits

0xe5db,	// (0x000111a4) bg_button_pane_cp06_cp

0x3efe,	// (0x00006ac7) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3efe,	// (0x00006ac7) cell_cmode_rocker_pane_g1_cp

0x3a7a,	// (0x00006643) cell_cmode_rocker_pane_g2_cp

0xdfba,	// (0x00010b83) bg_button_pane_cp07_cp

0xd596,	// (0x0001015f) cell_cmode_itu_pane_g1_cp

0xd59f,	// (0x00010168) cell_cmode_itu_pane_t1_cp

0xd59f,	// (0x00010168) cell_cmode_itu_pane_t2_cp

0xb7d4,	// (0x0000e39d) settings_code_pane_cp2

0xe1b9,	// (0x00010d82) bg_popup_window_pane_cp3_ParamLimits

0xe416,	// (0x00010fdf) heading_pane_cp3_ParamLimits

0xe425,	// (0x00010fee) listscroll_popup_graphic_pane_ParamLimits

0x3ae4,	// (0x000066ad) fep_hwr_aid_pane_ParamLimits

0x58dc,	// (0x000084a5) aid_touch_sctrl_top_ParamLimits

0x58e9,	// (0x000084b2) sctrl_sk_top_pane_g1_ParamLimits

0x3efe,	// (0x00006ac7) sctrl_sk_top_pane_g2_ParamLimits

0xfcc3,	// (0x0001288c) sctrl_sk_top_pane_g_ParamLimits

0x58f6,	// (0x000084bf) sctrl_sk_top_pane_t1_ParamLimits

0x58dc,	// (0x000084a5) aid_touch_sctrl_bottom_ParamLimits

0x58f6,	// (0x000084bf) sctrl_sk_bottom_pane_t1_ParamLimits

0xca0c,	// (0x0000f5d5) aid_area_touch_clock

0xd001,	// (0x0000fbca) aid_vkb2_area_top_pane_cell_ParamLimits

0xd001,	// (0x0000fbca) aid_vkb2_area_top_pane_cell

0xd0b0,	// (0x0000fc79) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd0b0,	// (0x0000fc79) aid_vkb2_area_bottom_pane_cell

0x6495,	// (0x0000905e) popup_char_count_window

0x6ae9,	// (0x000096b2) popup_char_count_window_g1

0x6af2,	// (0x000096bb) popup_char_count_window_g2

0x6afb,	// (0x000096c4) popup_char_count_window_g3

0x0002,

0xfd94,	// (0x0001295d) popup_char_count_window_g

0x6b04,	// (0x000096cd) popup_char_count_window_t1

0x60ec,	// (0x00008cb5) popup_fep_char_preview_window_ParamLimits

0x60ec,	// (0x00008cb5) popup_fep_char_preview_window

0xd021,	// (0x0000fbea) vkb2_top_candi_pane_ParamLimits

0xd021,	// (0x0000fbea) vkb2_top_candi_pane

0xd5ad,	// (0x00010176) cell_vkb2_top_candi_pane_ParamLimits

0xd5ad,	// (0x00010176) cell_vkb2_top_candi_pane

0x12eb,	// (0x00003eb4) bg_popup_fep_char_preview_window_ParamLimits

0x12eb,	// (0x00003eb4) bg_popup_fep_char_preview_window

0x6b5c,	// (0x00009725) popup_fep_char_preview_window_t1_ParamLimits

0x6b5c,	// (0x00009725) popup_fep_char_preview_window_t1

0x6b96,	// (0x0000975f) bg_popup_fep_char_preview_window_g1

0x6b9e,	// (0x00009767) bg_popup_fep_char_preview_window_g2

0x6ba6,	// (0x0000976f) bg_popup_fep_char_preview_window_g3

0x6bae,	// (0x00009777) bg_popup_fep_char_preview_window_g4

0x6bb6,	// (0x0000977f) bg_popup_fep_char_preview_window_g5

0x6bbe,	// (0x00009787) bg_popup_fep_char_preview_window_g6

0x6bc6,	// (0x0000978f) bg_popup_fep_char_preview_window_g7

0x6bce,	// (0x00009797) bg_popup_fep_char_preview_window_g8

0x6bd6,	// (0x0000979f) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9b,	// (0x00012964) bg_popup_fep_char_preview_window_g

0x3efe,	// (0x00006ac7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3efe,	// (0x00006ac7) cell_vkb2_top_candi_pane_g1

0x4269,	// (0x00006e32) cell_vkb2_top_candi_pane_g2_ParamLimits

0x4269,	// (0x00006e32) cell_vkb2_top_candi_pane_g2

0x428a,	// (0x00006e53) cell_vkb2_top_candi_pane_g3_ParamLimits

0x428a,	// (0x00006e53) cell_vkb2_top_candi_pane_g3

0x6be6,	// (0x000097af) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6be6,	// (0x000097af) cell_vkb2_top_candi_pane_g4

0x6c07,	// (0x000097d0) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6c07,	// (0x000097d0) cell_vkb2_top_candi_pane_g5

0x59d6,	// (0x0000859f) cell_vkb2_top_candi_pane_g6_ParamLimits

0x59d6,	// (0x0000859f) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb0,	// (0x00012979) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb0,	// (0x00012979) cell_vkb2_top_candi_pane_g

0x6c28,	// (0x000097f1) cell_vkb2_top_candi_pane_t1

0xb5f4,	// (0x0000e1bd) aid_size_touch_slider_mark_ParamLimits

0xb5f4,	// (0x0000e1bd) aid_size_touch_slider_mark

0xd2bd,	// (0x0000fe86) grid_graphic2_catg_pane_ParamLimits

0xd2bd,	// (0x0000fe86) grid_graphic2_catg_pane

0xd379,	// (0x0000ff42) popup_grid_graphic2_window_t1_ParamLimits

0xd379,	// (0x0000ff42) popup_grid_graphic2_window_t1

0xd38f,	// (0x0000ff58) popup_grid_graphic2_window_t2_ParamLimits

0xd38f,	// (0x0000ff58) popup_grid_graphic2_window_t2

0x0001,

0xfd69,	// (0x00012932) popup_grid_graphic2_window_t_ParamLimits

0xfd69,	// (0x00012932) popup_grid_graphic2_window_t

0xe2fd,	// (0x00010ec6) bg_button_pane_cp05_ParamLimits

0xd525,	// (0x000100ee) cell_graphic2_control_pane_g1_ParamLimits

0xd615,	// (0x000101de) cell_graphic2_catg_pane_ParamLimits

0xd615,	// (0x000101de) cell_graphic2_catg_pane

0xdfba,	// (0x00010b83) bg_button_pane_cp12

0xd627,	// (0x000101f0) cell_graphic2_catg_pane_g1

0x5b10,	// (0x000086d9) cell_tb_ext_pane_t1_ParamLimits

0x6533,	// (0x000090fc) vkb2_top_cell_right_narrow_pane_ParamLimits

0x6533,	// (0x000090fc) vkb2_top_cell_right_narrow_pane

0x654b,	// (0x00009114) vkb2_top_cell_right_wide_pane_ParamLimits

0x654b,	// (0x00009114) vkb2_top_cell_right_wide_pane

0x3ad6,	// (0x0000669f) bg_vkb2_func_pane_ParamLimits

0x3ad6,	// (0x0000669f) bg_vkb2_func_pane

0x65bc,	// (0x00009185) vkb2_top_cell_left_pane_g1_ParamLimits

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp03

0x6631,	// (0x000091fa) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0a78,	// (0x00003641) bg_vkb2_func_pane_g1

0x0a80,	// (0x00003649) bg_vkb2_func_pane_g2

0x0a90,	// (0x00003659) bg_vkb2_func_pane_g3

0x0a88,	// (0x00003651) bg_vkb2_func_pane_g4

0x0a98,	// (0x00003661) bg_vkb2_func_pane_g5

0x0aa0,	// (0x00003669) bg_vkb2_func_pane_g6

0x0aa8,	// (0x00003671) bg_vkb2_func_pane_g7

0x0ab0,	// (0x00003679) bg_vkb2_func_pane_g8

0x0a70,	// (0x00003639) bg_vkb2_func_pane_g9

0x0008,

0xfdbd,	// (0x00012986) bg_vkb2_func_pane_g

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp01

0x65bc,	// (0x00009185) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x65bc,	// (0x00009185) vkb2_top_cell_right_wide_pane_g1

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3ad6,	// (0x0000669f) bg_vkb2_fuc_pane_cp02

0x6c62,	// (0x0000982b) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x6c62,	// (0x0000982b) vkb2_top_cell_right_narrow_pane_g1

0xc6ce,	// (0x0000f297) aid_touch_area_decrease_ParamLimits

0xc6ce,	// (0x0000f297) aid_touch_area_decrease

0xc708,	// (0x0000f2d1) aid_touch_area_increase_ParamLimits

0xc708,	// (0x0000f2d1) aid_touch_area_increase

0xc730,	// (0x0000f2f9) aid_touch_area_mute_ParamLimits

0xc730,	// (0x0000f2f9) aid_touch_area_mute

0xc758,	// (0x0000f321) aid_touch_area_slider_ParamLimits

0xc758,	// (0x0000f321) aid_touch_area_slider

0xc798,	// (0x0000f361) popup_slider_window_g4_ParamLimits

0xc798,	// (0x0000f361) popup_slider_window_g4

0xc7c0,	// (0x0000f389) popup_slider_window_g5_ParamLimits

0xc7c0,	// (0x0000f389) popup_slider_window_g5

0xc7f4,	// (0x0000f3bd) popup_slider_window_g6_ParamLimits

0xc7f4,	// (0x0000f3bd) popup_slider_window_g6

0x581b,	// (0x000083e4) popup_slider_window_t2_ParamLimits

0x581b,	// (0x000083e4) popup_slider_window_t2

0x0001,

0xfcb7,	// (0x00012880) popup_slider_window_t_ParamLimits

0xfcb7,	// (0x00012880) popup_slider_window_t

0xc810,	// (0x0000f3d9) slider_pane_ParamLimits

0xc810,	// (0x0000f3d9) slider_pane

0x6c82,	// (0x0000984b) slider_pane_g1_ParamLimits

0x6c82,	// (0x0000984b) slider_pane_g1

0x6c96,	// (0x0000985f) slider_pane_g2_ParamLimits

0x6c96,	// (0x0000985f) slider_pane_g2

0x6cac,	// (0x00009875) slider_pane_g3_ParamLimits

0x6cac,	// (0x00009875) slider_pane_g3

0x0003,

0xfdd0,	// (0x00012999) slider_pane_g_ParamLimits

0xfdd0,	// (0x00012999) slider_pane_g

0xa966,	// (0x0000d52f) popup_tb_float_extension_window_ParamLimits

0xa966,	// (0x0000d52f) popup_tb_float_extension_window

0x6cd8,	// (0x000098a1) aid_size_cell_tb_float_ext

0xdfba,	// (0x00010b83) bg_popup_sub_window_cp28

0xd630,	// (0x000101f9) grid_tb_float_ext_pane

0xd63a,	// (0x00010203) cell_tb_float_ext_pane_ParamLimits

0xd63a,	// (0x00010203) cell_tb_float_ext_pane

0xd654,	// (0x0001021d) cell_tb_float_ext_pane_g1

0xd65d,	// (0x00010226) grid_highlight_pane_cp12

0xbd36,	// (0x0000e8ff) cell_last_hwr_side_pane_ParamLimits

0xbd36,	// (0x0000e8ff) cell_last_hwr_side_pane

0x3a7a,	// (0x00006643) cell_last_hwr_side_pane_g1

0x6d1a,	// (0x000098e3) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x000129a2) cell_last_hwr_side_pane_g

0xd18d,	// (0x0000fd56) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd18d,	// (0x0000fd56) vkb2_area_bottom_space_btn_pane

0x3efe,	// (0x00006ac7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x6714,	// (0x000092dd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6c28,	// (0x000097f1) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6d23,	// (0x000098ec) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6d23,	// (0x000098ec) vkb2_area_bottom_space_btn_pane_g1

0x6d5d,	// (0x00009926) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6d5d,	// (0x00009926) vkb2_area_bottom_space_btn_pane_g2

0x6d93,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6d93,	// (0x0000995c) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x000129a7) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x000129a7) vkb2_area_bottom_space_btn_pane_g

0x3b99,	// (0x00006762) cel_fep_hwr_func_pane_ParamLimits

0x3b99,	// (0x00006762) cel_fep_hwr_func_pane

0xbd0b,	// (0x0000e8d4) cell_hwr_side_button_pane_ParamLimits

0xbd0b,	// (0x0000e8d4) cell_hwr_side_button_pane

0xca0c,	// (0x0000f5d5) aid_area_touch_clock_ParamLimits

0xe2fd,	// (0x00010ec6) bg_uniindi_top_pane_ParamLimits

0xca1e,	// (0x0000f5e7) uniindi_top_pane_g1_ParamLimits

0xca34,	// (0x0000f5fd) uniindi_top_pane_g2_ParamLimits

0xca40,	// (0x0000f609) uniindi_top_pane_g3_ParamLimits

0x5b8a,	// (0x00008753) uniindi_top_pane_g4_ParamLimits

0xfcef,	// (0x000128b8) uniindi_top_pane_g_ParamLimits

0xca51,	// (0x0000f61a) uniindi_top_pane_t1_ParamLimits

0xe2fd,	// (0x00010ec6) bg_vkb2_func_pane_cp01_ParamLimits

0xe2fd,	// (0x00010ec6) bg_vkb2_func_pane_cp01

0x6ddd,	// (0x000099a6) cel_fep_hwr_func_pane_g1_ParamLimits

0x6ddd,	// (0x000099a6) cel_fep_hwr_func_pane_g1

0xe2fd,	// (0x00010ec6) bg_vkb2_func_pane_cp02_ParamLimits

0xe2fd,	// (0x00010ec6) bg_vkb2_func_pane_cp02

0x6ddd,	// (0x000099a6) cell_hwr_side_button_pane_g1_ParamLimits

0x6ddd,	// (0x000099a6) cell_hwr_side_button_pane_g1

0x0844,	// (0x0000340d) status_pane_g4_ParamLimits

0x0844,	// (0x0000340d) status_pane_g4

0x085e,	// (0x00003427) status_pane_t1

0x37b5,	// (0x0000637e) form2_midp_gauge_slider_cont_pane

0x37bd,	// (0x00006386) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc24,	// (0x0000e7ed) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc36,	// (0x0000e7ff) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x0001268b) form2_midp_gauge_slider_pane_t_ParamLimits

0x37f3,	// (0x000063bc) form2_midp_slider_pane_ParamLimits

0x60b4,	// (0x00008c7d) aid_size_cell_func_vkb2_ParamLimits

0x60b4,	// (0x00008c7d) aid_size_cell_func_vkb2

0x6cc4,	// (0x0000988d) slider_pane_g4_ParamLimits

0x6cc4,	// (0x0000988d) slider_pane_g4

0xd666,	// (0x0001022f) form2_midp_gauge_slider_pane_t2_cp01

0xd674,	// (0x0001023d) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd674,	// (0x0001023d) form2_midp_gauge_slider_pane_t3_cp01

0x6e16,	// (0x000099df) form2_midp_slider_pane_cp01

0xdfba,	// (0x00010b83) navi_smil_pane

0x6e4a,	// (0x00009a13) navi_smil_pane_g1

0x6e52,	// (0x00009a1b) navi_smil_pane_t1

0x6e1f,	// (0x000099e8) form2_midp_slider_pane_g1

0x6e28,	// (0x000099f1) form2_midp_slider_pane_g2

0x6e30,	// (0x000099f9) form2_midp_slider_pane_g3

0x6e1f,	// (0x000099e8) form2_midp_slider_pane_g4

0xd691,	// (0x0001025a) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x000129b0) form2_midp_slider_pane_g

0x6dcd,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6dcd,	// (0x00009996) vkb2_area_bottom_space_btn_pane_g4

0xab9e,	// (0x0000d767) lc0_navi_pane_ParamLimits

0xab9e,	// (0x0000d767) lc0_navi_pane

0xac08,	// (0x0000d7d1) lc0_stat_indi_pane_ParamLimits

0xac08,	// (0x0000d7d1) lc0_stat_indi_pane

0xac1d,	// (0x0000d7e6) ls0_title_pane_ParamLimits

0xac1d,	// (0x0000d7e6) ls0_title_pane

0xe5db,	// (0x000111a4) bg_popup_sub_pane_cp14_ParamLimits

0xc9f3,	// (0x0000f5bc) list_uniindi_pane_ParamLimits

0xc9ff,	// (0x0000f5c8) uniindi_top_pane_ParamLimits

0x5bd4,	// (0x0000879d) list_single_uniindi_pane_g1_ParamLimits

0x5be7,	// (0x000087b0) list_single_uniindi_pane_t1_ParamLimits

0xd69c,	// (0x00010265) lc0_stat_clock_pane_ParamLimits

0xd69c,	// (0x00010265) lc0_stat_clock_pane

0xd6ac,	// (0x00010275) lc0_stat_indi_pane_g1_ParamLimits

0xd6ac,	// (0x00010275) lc0_stat_indi_pane_g1

0xd6b9,	// (0x00010282) lc0_stat_indi_pane_g2_ParamLimits

0xd6b9,	// (0x00010282) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x000129bb) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x000129bb) lc0_stat_indi_pane_g

0xd6c6,	// (0x0001028f) lc0_uni_indicator_pane_ParamLimits

0xd6c6,	// (0x0001028f) lc0_uni_indicator_pane

0xd6d6,	// (0x0001029f) ls0_title_pane_g1_ParamLimits

0xd6d6,	// (0x0001029f) ls0_title_pane_g1

0xd6ea,	// (0x000102b3) ls0_title_pane_t1_ParamLimits

0xd6ea,	// (0x000102b3) ls0_title_pane_t1

0xd718,	// (0x000102e1) lc0_uni_indicator_pane_g1_ParamLimits

0xd718,	// (0x000102e1) lc0_uni_indicator_pane_g1

0x6ef2,	// (0x00009abb) lc0_stat_clock_pane_t1

0xdfba,	// (0x00010b83) main_ai5_pane

0x6f00,	// (0x00009ac9) ai5_sk_pane_ParamLimits

0x6f00,	// (0x00009ac9) ai5_sk_pane

0xd743,	// (0x0001030c) cell_ai5_widget_pane_ParamLimits

0xd743,	// (0x0001030c) cell_ai5_widget_pane

0x6fd6,	// (0x00009b9f) aid_size_cell_widget_grid

0x6fe4,	// (0x00009bad) bg_ai5_widget_pane_ParamLimits

0x6fe4,	// (0x00009bad) bg_ai5_widget_pane

0x7060,	// (0x00009c29) cell_ai5_widget_pane_g2

0x7074,	// (0x00009c3d) cell_ai5_widget_pane_g3

0x708e,	// (0x00009c57) cell_ai5_widget_pane_g4

0x709e,	// (0x00009c67) cell_ai5_widget_pane_g5

0x70ae,	// (0x00009c77) cell_ai5_widget_pane_g6

0x70ba,	// (0x00009c83) cell_ai5_widget_pane_g7

0x7126,	// (0x00009cef) cell_ai5_widget_pane_t1_ParamLimits

0x7126,	// (0x00009cef) cell_ai5_widget_pane_t1

0x7143,	// (0x00009d0c) cell_ai5_widget_pane_t2_ParamLimits

0x7143,	// (0x00009d0c) cell_ai5_widget_pane_t2

0x715b,	// (0x00009d24) cell_ai5_widget_pane_t3_ParamLimits

0x715b,	// (0x00009d24) cell_ai5_widget_pane_t3

0x7173,	// (0x00009d3c) cell_ai5_widget_pane_t4_ParamLimits

0x7173,	// (0x00009d3c) cell_ai5_widget_pane_t4

0xd7af,	// (0x00010378) cell_ai5_widget_pane_t5_ParamLimits

0xd7af,	// (0x00010378) cell_ai5_widget_pane_t5

0x71b8,	// (0x00009d81) cell_ai5_widget_pane_t6_ParamLimits

0x71b8,	// (0x00009d81) cell_ai5_widget_pane_t6

0x71ca,	// (0x00009d93) cell_ai5_widget_pane_t7_ParamLimits

0x71ca,	// (0x00009d93) cell_ai5_widget_pane_t7

0x71e9,	// (0x00009db2) cell_ai5_widget_pane_t8_ParamLimits

0x71e9,	// (0x00009db2) cell_ai5_widget_pane_t8

0x000b,

0xfe12,	// (0x000129db) cell_ai5_widget_pane_t_ParamLimits

0xfe12,	// (0x000129db) cell_ai5_widget_pane_t

0x726d,	// (0x00009e36) grid_ai5_widget_pane

0xe5db,	// (0x000111a4) highlight_cell_ai5_widget_pane_ParamLimits

0xe5db,	// (0x000111a4) highlight_cell_ai5_widget_pane

0xd7cf,	// (0x00010398) ai5_sk_left_pane

0xd7d9,	// (0x000103a2) ai5_sk_middle_pane

0xd7e3,	// (0x000103ac) ai5_sk_right_pane

0x7299,	// (0x00009e62) bg_ai5_widget_pane_g1_ParamLimits

0x7299,	// (0x00009e62) bg_ai5_widget_pane_g1

0x72a5,	// (0x00009e6e) bg_ai5_widget_pane_g2_ParamLimits

0x72a5,	// (0x00009e6e) bg_ai5_widget_pane_g2

0x72b1,	// (0x00009e7a) bg_ai5_widget_pane_g3_ParamLimits

0x72b1,	// (0x00009e7a) bg_ai5_widget_pane_g3

0x72bd,	// (0x00009e86) bg_ai5_widget_pane_g4_ParamLimits

0x72bd,	// (0x00009e86) bg_ai5_widget_pane_g4

0x72c9,	// (0x00009e92) bg_ai5_widget_pane_g5_ParamLimits

0x72c9,	// (0x00009e92) bg_ai5_widget_pane_g5

0x72d5,	// (0x00009e9e) bg_ai5_widget_pane_g6_ParamLimits

0x72d5,	// (0x00009e9e) bg_ai5_widget_pane_g6

0x72e1,	// (0x00009eaa) bg_ai5_widget_pane_g7_ParamLimits

0x72e1,	// (0x00009eaa) bg_ai5_widget_pane_g7

0x72ed,	// (0x00009eb6) bg_ai5_widget_pane_g8_ParamLimits

0x72ed,	// (0x00009eb6) bg_ai5_widget_pane_g8

0x72f9,	// (0x00009ec2) bg_ai5_widget_pane_g9_ParamLimits

0x72f9,	// (0x00009ec2) bg_ai5_widget_pane_g9

0x0008,

0xfe2b,	// (0x000129f4) bg_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x000129f4) bg_ai5_widget_pane_g

0x732b,	// (0x00009ef4) cell_shortcut_ai5_widget_pane_ParamLimits

0x732b,	// (0x00009ef4) cell_shortcut_ai5_widget_pane

0xf29f,	// (0x00011e68) bg_cell_shortcut_ai5_widget_pane

0x733c,	// (0x00009f05) cell_grid_ai5_widget_pane_g1

0xf29f,	// (0x00011e68) highlight_cell_shortcut_ai5_widget_pane

0x0a80,	// (0x00003649) ai5_sk_left_pane_g1

0x7345,	// (0x00009f0e) ai5_sk_left_pane_g2

0x734d,	// (0x00009f16) ai5_sk_left_pane_g3

0x7355,	// (0x00009f1e) ai5_sk_left_pane_g4

0x0003,

0xfe3e,	// (0x00012a07) ai5_sk_left_pane_g

0x735d,	// (0x00009f26) ai5_sk_left_pane_t1

0x0a78,	// (0x00003641) ai5_sk_right_pane_g1

0x736b,	// (0x00009f34) ai5_sk_right_pane_g2

0x7373,	// (0x00009f3c) ai5_sk_right_pane_g3

0x737b,	// (0x00009f44) ai5_sk_right_pane_g4

0x0003,

0xfe47,	// (0x00012a10) ai5_sk_right_pane_g

0x7383,	// (0x00009f4c) ai5_sk_right_pane_t1

0x0a78,	// (0x00003641) ai5_sk_middle_pane_g1

0x0a80,	// (0x00003649) ai5_sk_middle_pane_g2

0x0a98,	// (0x00003661) ai5_sk_middle_pane_g3

0x7373,	// (0x00009f3c) ai5_sk_middle_pane_g4

0x734d,	// (0x00009f16) ai5_sk_middle_pane_g5

0x7391,	// (0x00009f5a) ai5_sk_middle_pane_g6

0xd7ed,	// (0x000103b6) ai5_sk_middle_pane_g7

0x0006,

0xfe50,	// (0x00012a19) ai5_sk_middle_pane_g

0xaa8a,	// (0x0000d653) aid_touch_area_size_lc0_ParamLimits

0xaa8a,	// (0x0000d653) aid_touch_area_size_lc0

0x42ab,	// (0x00006e74) cell_hwr_candidate_pane_t1_ParamLimits

0x0515,	// (0x000030de) aid_touch_navi_pane

0xad16,	// (0x0000d8df) status_dt_navi_pane_ParamLimits

0xad16,	// (0x0000d8df) status_dt_navi_pane

0xad2e,	// (0x0000d8f7) status_dt_sta_pane_ParamLimits

0xad2e,	// (0x0000d8f7) status_dt_sta_pane

0xd7f5,	// (0x000103be) dt_sta_controll_pane

0xd802,	// (0x000103cb) dt_sta_indi_pane

0xd80f,	// (0x000103d8) dt_sta_title_pane

0xe2fd,	// (0x00010ec6) bg_dt_sta_indi_pane_ParamLimits

0xe2fd,	// (0x00010ec6) bg_dt_sta_indi_pane

0xd821,	// (0x000103ea) dt_sta_battery_pane

0xd829,	// (0x000103f2) dt_sta_indi_pane_g1

0x73e3,	// (0x00009fac) dt_sta_indi_pane_g2

0x73ec,	// (0x00009fb5) dt_sta_indi_pane_g3

0x0002,

0xfe5f,	// (0x00012a28) dt_sta_indi_pane_g

0x73f5,	// (0x00009fbe) dt_sta_signal_pane

0xe5db,	// (0x000111a4) bg_dt_sta_title_pane_ParamLimits

0xe5db,	// (0x000111a4) bg_dt_sta_title_pane

0x1c11,	// (0x000047da) dt_sta_title_pane_g1

0xd832,	// (0x000103fb) dt_sta_title_pane_t1_ParamLimits

0xd832,	// (0x000103fb) dt_sta_title_pane_t1

0xdfba,	// (0x00010b83) bg_dt_sta_control_pane

0xd847,	// (0x00010410) dt_sta_controll_pane_g1

0xd850,	// (0x00010419) bg_dt_sta_title_pane_g1

0xd859,	// (0x00010422) bg_dt_sta_title_pane_g2

0xd862,	// (0x0001042b) bg_dt_sta_title_pane_g3

0x0002,

0xfe66,	// (0x00012a2f) bg_dt_sta_title_pane_g

0x3a7a,	// (0x00006643) bg_dt_sta_indi_pane_g1

0x7437,	// (0x0000a000) dt_sta_signal_pane_g1

0x743f,	// (0x0000a008) dt_sta_signal_pane_g2

0x0001,

0xfe6d,	// (0x00012a36) dt_sta_signal_pane_g

0x7447,	// (0x0000a010) dt_sta_battery_pane_g1

0x7450,	// (0x0000a019) dt_sta_battery_pane_t1

0x3a7a,	// (0x00006643) bg_dt_sta_control_pane_g1

0xed83,	// (0x0001194c) fep_china_uni_eep_pane

0xed8b,	// (0x00011954) fep_china_uni_entry_pane_ParamLimits

0xed9b,	// (0x00011964) popup_fep_china_uni_window_g1_ParamLimits

0xedab,	// (0x00011974) popup_fep_china_uni_window_g2_ParamLimits

0xedab,	// (0x00011974) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x000122ad) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x000122ad) popup_fep_china_uni_window_g

0x745f,	// (0x0000a028) fep_china_uni_eep_pane_g1

0x7467,	// (0x0000a030) fep_china_uni_eep_pane_t1

0x6e41,	// (0x00009a0a) aid_touch_area_size_smil_player

0x066b,	// (0x00003234) lc0_clock_pane

0x0852,	// (0x0000341b) status_pane_g5_ParamLimits

0x0852,	// (0x0000341b) status_pane_g5

0xa4c2,	// (0x0000d08b) popup_keymap_window

0x0810,	// (0x000033d9) status_icon_pane

0x7074,	// (0x00009c3d) cell_ai5_widget_pane_g3_ParamLimits

0x708e,	// (0x00009c57) cell_ai5_widget_pane_g4_ParamLimits

0x709e,	// (0x00009c67) cell_ai5_widget_pane_g5_ParamLimits

0x70c6,	// (0x00009c8f) cell_ai5_widget_pane_g8_ParamLimits

0x70c6,	// (0x00009c8f) cell_ai5_widget_pane_g8

0x70da,	// (0x00009ca3) cell_ai5_widget_pane_g9_ParamLimits

0x70da,	// (0x00009ca3) cell_ai5_widget_pane_g9

0x70ee,	// (0x00009cb7) cell_ai5_widget_pane_g10_ParamLimits

0x70ee,	// (0x00009cb7) cell_ai5_widget_pane_g10

0x7476,	// (0x0000a03f) status_icon_pane_g1

0xdfba,	// (0x00010b83) bg_popup_sub_pane_cp13

0x747e,	// (0x0000a047) popup_keymap_window_t1

0xa17e,	// (0x0000cd47) control_pane_g6_ParamLimits

0xa17e,	// (0x0000cd47) control_pane_g6

0xa18b,	// (0x0000cd54) control_pane_g7_ParamLimits

0xa18b,	// (0x0000cd54) control_pane_g7

0xa198,	// (0x0000cd61) control_pane_g8_ParamLimits

0xa198,	// (0x0000cd61) control_pane_g8

0xd7f5,	// (0x000103be) dt_sta_controll_pane_ParamLimits

0xd802,	// (0x000103cb) dt_sta_indi_pane_ParamLimits

0xd80f,	// (0x000103d8) dt_sta_title_pane_ParamLimits

0xe4d4,	// (0x0001109d) aid_size_touch_scroll_bar_cale

0x8dfd,	// (0x0000b9c6) popup_discreet_window_ParamLimits

0x8dfd,	// (0x0000b9c6) popup_discreet_window

0x8e4f,	// (0x0000ba18) popup_sk_window

0x12eb,	// (0x00003eb4) bg_popup_sub_pane_cp28_ParamLimits

0x12eb,	// (0x00003eb4) bg_popup_sub_pane_cp28

0x748c,	// (0x0000a055) popup_discreet_window_g1_ParamLimits

0x748c,	// (0x0000a055) popup_discreet_window_g1

0xd86b,	// (0x00010434) popup_discreet_window_t1_ParamLimits

0xd86b,	// (0x00010434) popup_discreet_window_t1

0x74ca,	// (0x0000a093) popup_discreet_window_t2_ParamLimits

0x74ca,	// (0x0000a093) popup_discreet_window_t2

0x0002,

0xfe72,	// (0x00012a3b) popup_discreet_window_t_ParamLimits

0xfe72,	// (0x00012a3b) popup_discreet_window_t

0x751c,	// (0x0000a0e5) popup_sk_window_g1

0x7526,	// (0x0000a0ef) popup_sk_window_g2

0x0001,

0xfe79,	// (0x00012a42) popup_sk_window_g

0xd889,	// (0x00010452) popup_sk_window_t1

0xd897,	// (0x00010460) popup_sk_window_t1_copy1

0x7060,	// (0x00009c29) cell_ai5_widget_pane_g2_ParamLimits

0x71fb,	// (0x00009dc4) cell_ai5_widget_pane_t9_ParamLimits

0x71fb,	// (0x00009dc4) cell_ai5_widget_pane_t9

0xdfba,	// (0x00010b83) main_fep_fshwr2_pane

0xd8a5,	// (0x0001046e) aid_fshwr2_btn_pane

0xd8b9,	// (0x00010482) aid_fshwr2_syb_pane

0xd8cd,	// (0x00010496) aid_fshwr2_txt_pane

0xd8dd,	// (0x000104a6) fshwr2_func_candi_pane

0xd8fd,	// (0x000104c6) fshwr2_hwr_syb_pane

0xd91f,	// (0x000104e8) fshwr2_icf_pane

0xdfba,	// (0x00010b83) fshwr2_icf_bg_pane

0x75ee,	// (0x0000a1b7) fshwr2_icf_pane_t1_ParamLimits

0x75ee,	// (0x0000a1b7) fshwr2_icf_pane_t1

0xec58,	// (0x00011821) fshwr2_func_candi_pane_g1

0xd94f,	// (0x00010518) fshwr2_func_candi_row_pane_ParamLimits

0xd94f,	// (0x00010518) fshwr2_func_candi_row_pane

0xd972,	// (0x0001053b) cell_fshwr2_syb_pane_ParamLimits

0xd972,	// (0x0001053b) cell_fshwr2_syb_pane

0x6ddd,	// (0x000099a6) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6ddd,	// (0x000099a6) fshwr2_hwr_syb_pane_g1

0xdfba,	// (0x00010b83) bg_popup_call_pane_cp01

0xd998,	// (0x00010561) fshwr2_func_candi_cell_pane_ParamLimits

0xd998,	// (0x00010561) fshwr2_func_candi_cell_pane

0x10d4,	// (0x00003c9d) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x10d4,	// (0x00003c9d) fshwr2_func_candi_cell_bg_pane

0xd9e3,	// (0x000105ac) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xd9e3,	// (0x000105ac) fshwr2_func_candi_cell_pane_g1

0xda1a,	// (0x000105e3) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xda1a,	// (0x000105e3) fshwr2_func_candi_cell_pane_t1

0xdfba,	// (0x00010b83) bg_button_pane_cp08

0xf47e,	// (0x00012047) cell_fshwr2_syb_bg_pane

0xda35,	// (0x000105fe) cell_fshwr2_syb_bg_pane_g1

0xda48,	// (0x00010611) cell_fshwr2_syb_bg_pane_t1

0xe5db,	// (0x000111a4) main_tmo_pane

0xb4b8,	// (0x0000e081) uni_indicator_pane_g1_ParamLimits

0xb4ce,	// (0x0000e097) uni_indicator_pane_g2_ParamLimits

0xb4e4,	// (0x0000e0ad) uni_indicator_pane_g3_ParamLimits

0x1f7e,	// (0x00004b47) uni_indicator_pane_g4_ParamLimits

0x1f7e,	// (0x00004b47) uni_indicator_pane_g4

0x1f92,	// (0x00004b5b) uni_indicator_pane_g5_ParamLimits

0x1f92,	// (0x00004b5b) uni_indicator_pane_g5

0x1f92,	// (0x00004b5b) uni_indicator_pane_g6_ParamLimits

0x1f92,	// (0x00004b5b) uni_indicator_pane_g6

0xf8dc,	// (0x000124a5) uni_indicator_pane_g_ParamLimits

0xc6b0,	// (0x0000f279) popup_tmo_note_window_ParamLimits

0xc6b0,	// (0x0000f279) popup_tmo_note_window

0xe5db,	// (0x000111a4) fshwr2_bg_pane

0xda0b,	// (0x000105d4) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xda0b,	// (0x000105d4) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7e,	// (0x00012a47) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7e,	// (0x00012a47) fshwr2_func_candi_cell_pane_g

0x3a7a,	// (0x00006643) bg_popup_window_pane_cp01

0x76f9,	// (0x0000a2c2) bg_popup_window_pane_g1_cp01

0x7702,	// (0x0000a2cb) bg_popup_window_pane_cp22_ParamLimits

0x7702,	// (0x0000a2cb) bg_popup_window_pane_cp22

0xda5e,	// (0x00010627) listscroll_tmo_link_pane_ParamLimits

0xda5e,	// (0x00010627) listscroll_tmo_link_pane

0x7750,	// (0x0000a319) popup_tmo_note_window_g1_ParamLimits

0x7750,	// (0x0000a319) popup_tmo_note_window_g1

0xda9e,	// (0x00010667) tmo_note_info_pane_ParamLimits

0xda9e,	// (0x00010667) tmo_note_info_pane

0xdab8,	// (0x00010681) list_tmo_note_info_pane_g1_ParamLimits

0xdab8,	// (0x00010681) list_tmo_note_info_pane_g1

0x778e,	// (0x0000a357) list_tmo_note_info_pane_g2_ParamLimits

0x778e,	// (0x0000a357) list_tmo_note_info_pane_g2

0x0001,

0xfe83,	// (0x00012a4c) list_tmo_note_info_pane_g_ParamLimits

0xfe83,	// (0x00012a4c) list_tmo_note_info_pane_g

0x77aa,	// (0x0000a373) list_tmo_note_info_text_pane_ParamLimits

0x77aa,	// (0x0000a373) list_tmo_note_info_text_pane

0x782b,	// (0x0000a3f4) list_tmo_link_pane

0x7838,	// (0x0000a401) scroll_pane_cp20

0x7845,	// (0x0000a40e) list_single_tmo_link_pane_ParamLimits

0x7845,	// (0x0000a40e) list_single_tmo_link_pane

0x7855,	// (0x0000a41e) list_single_tmo_link_pane_t1

0x7863,	// (0x0000a42c) list_tmo_note_info_text_pane_t1_ParamLimits

0x7863,	// (0x0000a42c) list_tmo_note_info_text_pane_t1

0x9ac0,	// (0x0000c689) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9ac0,	// (0x0000c689) aid_size_touch_scroll_bar_cp01

0x99c0,	// (0x0000c589) aid_size_touch_slider_marker

0x8e3f,	// (0x0000ba08) popup_settings_window_ParamLimits

0x8e3f,	// (0x0000ba08) popup_settings_window

0xf517,	// (0x000120e0) popup_candi_list_indi_window

0x0515,	// (0x000030de) aid_touch_navi_pane_ParamLimits

0x58b0,	// (0x00008479) rs_clock_indi_pane

0x58b9,	// (0x00008482) sctrl_sk_bottom_pane_ParamLimits

0x58ca,	// (0x00008493) sctrl_sk_top_pane_ParamLimits

0xcec1,	// (0x0000fa8a) popup_fep_tooltip_window

0x6fd6,	// (0x00009b9f) aid_size_cell_widget_grid_ParamLimits

0x704b,	// (0x00009c14) cell_ai5_widget_pane_g1_ParamLimits

0x704b,	// (0x00009c14) cell_ai5_widget_pane_g1

0x70ae,	// (0x00009c77) cell_ai5_widget_pane_g6_ParamLimits

0x70ba,	// (0x00009c83) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf7,	// (0x000129c0) cell_ai5_widget_pane_g_ParamLimits

0xfdf7,	// (0x000129c0) cell_ai5_widget_pane_g

0x722a,	// (0x00009df3) cell_ai5_widget_pane_t10_ParamLimits

0x722a,	// (0x00009df3) cell_ai5_widget_pane_t10

0x726d,	// (0x00009e36) grid_ai5_widget_pane_ParamLimits

0x7305,	// (0x00009ece) cell_contacts_ai5_widget_pane_ParamLimits

0x7305,	// (0x00009ece) cell_contacts_ai5_widget_pane

0x74df,	// (0x0000a0a8) popup_discreet_window_t3_ParamLimits

0x74df,	// (0x0000a0a8) popup_discreet_window_t3

0xd93b,	// (0x00010504) popup_fshwr2_char_preview_window_ParamLimits

0xd93b,	// (0x00010504) popup_fshwr2_char_preview_window

0xdacf,	// (0x00010698) tmo_note_info_pane_t1

0xdae4,	// (0x000106ad) tmo_note_info_pane_t2

0xdafb,	// (0x000106c4) tmo_note_info_pane_t3

0x7807,	// (0x0000a3d0) tmo_note_info_pane_t4

0x7819,	// (0x0000a3e2) tmo_note_info_pane_t5

0x0004,

0xfe88,	// (0x00012a51) tmo_note_info_pane_t

0x782b,	// (0x0000a3f4) list_tmo_link_pane_ParamLimits

0x7838,	// (0x0000a401) scroll_pane_cp20_ParamLimits

0xdfba,	// (0x00010b83) bg_popup_fep_char_preview_window_cp01

0xdb10,	// (0x000106d9) popup_fshwr2_char_preview_window_t1

0x788a,	// (0x0000a453) popup_candi_list_indi_window_g1

0x7893,	// (0x0000a45c) bg_cell_contacts_ai5_widget_pane

0x789f,	// (0x0000a468) cell_contacts_ai5_widget_pane_g1

0x45a0,	// (0x00007169) cell_contacts_ai5_widget_pane_g2

0x78b4,	// (0x0000a47d) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe93,	// (0x00012a5c) cell_contacts_ai5_widget_pane_g

0x78c0,	// (0x0000a489) cell_contacts_ai5_widget_pane_t1

0xe5db,	// (0x000111a4) highlight_cell_shortcut_ai5_widget_pane_cp01

0x7937,	// (0x0000a500) settings_container_pane

0xf29f,	// (0x00011e68) listscroll_set_pane_copy1

0x2dc9,	// (0x00005992) scroll_pane_cp121_copy1

0x1090,	// (0x00003c59) set_content_pane_copy1

0xdb1e,	// (0x000106e7) aid_height_set_list_copy1_ParamLimits

0xdb1e,	// (0x000106e7) aid_height_set_list_copy1

0x2264,	// (0x00004e2d) aid_size_parent_copy1_ParamLimits

0x2264,	// (0x00004e2d) aid_size_parent_copy1

0xdb2a,	// (0x000106f3) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdb2a,	// (0x000106f3) button_value_adjust_pane_cp6_copy1

0xf47e,	// (0x00012047) list_highlight_pane_cp2_copy1_ParamLimits

0xf47e,	// (0x00012047) list_highlight_pane_cp2_copy1

0xdb3e,	// (0x00010707) list_set_pane_copy1_ParamLimits

0xdb3e,	// (0x00010707) list_set_pane_copy1

0x78d2,	// (0x0000a49b) main_pane_set_t1_copy1_ParamLimits

0x78d2,	// (0x0000a49b) main_pane_set_t1_copy1

0x790c,	// (0x0000a4d5) main_pane_set_t2_copy1_ParamLimits

0x790c,	// (0x0000a4d5) main_pane_set_t2_copy1

0xdbeb,	// (0x000107b4) main_pane_set_t3_copy1

0xdbf9,	// (0x000107c2) main_pane_set_t4_copy1

0x792b,	// (0x0000a4f4) set_content_pane_g1_copy1_ParamLimits

0x792b,	// (0x0000a4f4) set_content_pane_g1_copy1

0xdc07,	// (0x000107d0) setting_code_pane_copy1

0x7a34,	// (0x0000a5fd) setting_slider_graphic_pane_copy1

0x7a34,	// (0x0000a5fd) setting_slider_pane_copy1

0x7a3c,	// (0x0000a605) setting_text_pane_copy1

0x7a3c,	// (0x0000a605) setting_volume_pane_copy1

0xdc07,	// (0x000107d0) settings_code_pane_cp2_copy1

0xdc0f,	// (0x000107d8) settings_code_pane_cp_copy1_ParamLimits

0xdc0f,	// (0x000107d8) settings_code_pane_cp_copy1

0xdc23,	// (0x000107ec) volume_set_pane_copy1

0xdc2b,	// (0x000107f4) volume_set_pane_g10_copy1

0xdc33,	// (0x000107fc) volume_set_pane_g1_copy1

0xdc3b,	// (0x00010804) volume_set_pane_g2_copy1

0xdc43,	// (0x0001080c) volume_set_pane_g3_copy1

0xdc4b,	// (0x00010814) volume_set_pane_g4_copy1

0xdc53,	// (0x0001081c) volume_set_pane_g5_copy1

0xdc5b,	// (0x00010824) volume_set_pane_g6_copy1

0xdc63,	// (0x0001082c) volume_set_pane_g7_copy1

0xdc6b,	// (0x00010834) volume_set_pane_g8_copy1

0xdc73,	// (0x0001083c) volume_set_pane_g9_copy1

0xe1b9,	// (0x00010d82) bg_set_opt_pane_cp_copy1_ParamLimits

0xe1b9,	// (0x00010d82) bg_set_opt_pane_cp_copy1

0xdc7b,	// (0x00010844) setting_slider_pane_t1_copy1_ParamLimits

0xdc7b,	// (0x00010844) setting_slider_pane_t1_copy1

0xdc9a,	// (0x00010863) setting_slider_pane_t2_copy1_ParamLimits

0xdc9a,	// (0x00010863) setting_slider_pane_t2_copy1

0xdcb4,	// (0x0001087d) setting_slider_pane_t3_copy1_ParamLimits

0xdcb4,	// (0x0001087d) setting_slider_pane_t3_copy1

0xdccc,	// (0x00010895) slider_set_pane_copy1_ParamLimits

0xdccc,	// (0x00010895) slider_set_pane_copy1

0xe6a1,	// (0x0001126a) set_opt_bg_pane_g1_copy2

0xe6a9,	// (0x00011272) set_opt_bg_pane_g2_copy2

0x7b17,	// (0x0000a6e0) set_opt_bg_pane_g3_copy2

0xe6b9,	// (0x00011282) set_opt_bg_pane_g4_copy2

0xe6c1,	// (0x0001128a) set_opt_bg_pane_g5_copy2

0xe6c9,	// (0x00011292) set_opt_bg_pane_g6_copy2

0xdce2,	// (0x000108ab) set_opt_bg_pane_g7_copy2

0x7b29,	// (0x0000a6f2) set_opt_bg_pane_g8_copy2

0x7b33,	// (0x0000a6fc) set_opt_bg_pane_g9_copy2

0xdcea,	// (0x000108b3) aid_size_touch_slider_mark_copy1_ParamLimits

0xdcea,	// (0x000108b3) aid_size_touch_slider_mark_copy1

0xdcfe,	// (0x000108c7) slider_set_pane_g1_copy1

0x7b5a,	// (0x0000a723) slider_set_pane_g2_copy1

0xb615,	// (0x0000e1de) slider_set_pane_g3_copy1_ParamLimits

0xb615,	// (0x0000e1de) slider_set_pane_g3_copy1

0xb629,	// (0x0000e1f2) slider_set_pane_g4_copy1_ParamLimits

0xb629,	// (0x0000e1f2) slider_set_pane_g4_copy1

0xb641,	// (0x0000e20a) slider_set_pane_g5_copy1_ParamLimits

0xb641,	// (0x0000e20a) slider_set_pane_g5_copy1

0xb615,	// (0x0000e1de) slider_set_pane_g6_copy1_ParamLimits

0xb615,	// (0x0000e1de) slider_set_pane_g6_copy1

0xdd07,	// (0x000108d0) slider_set_pane_g7_copy1_ParamLimits

0xdd07,	// (0x000108d0) slider_set_pane_g7_copy1

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp2_copy1

0xdd1d,	// (0x000108e6) setting_slider_graphic_pane_g1_copy1

0xdd26,	// (0x000108ef) setting_slider_graphic_pane_t1_copy1

0xdd36,	// (0x000108ff) setting_slider_graphic_pane_t2_copy1

0xdd46,	// (0x0001090f) slider_set_pane_cp_copy1

0x7bb1,	// (0x0000a77a) input_focus_pane_cp1_copy1

0x7bba,	// (0x0000a783) list_set_text_pane_copy1

0x7bc2,	// (0x0000a78b) setting_text_pane_g1_copy1

0x7bcb,	// (0x0000a794) set_text_pane_t1_copy1

0x7bb1,	// (0x0000a77a) input_focus_pane_cp2_copy1

0x7bc2,	// (0x0000a78b) setting_code_pane_g1_copy1

0x7be6,	// (0x0000a7af) setting_code_pane_t1_copy1

0x7bf4,	// (0x0000a7bd) list_set_graphic_pane_copy1

0xe13d,	// (0x00010d06) bg_set_opt_pane_cp4_copy1

0xf01c,	// (0x00011be5) list_set_graphic_pane_g1_copy1_ParamLimits

0xf01c,	// (0x00011be5) list_set_graphic_pane_g1_copy1

0x7c08,	// (0x0000a7d1) list_set_graphic_pane_g2_copy1

0xf034,	// (0x00011bfd) list_set_graphic_pane_t1_copy1_ParamLimits

0xf034,	// (0x00011bfd) list_set_graphic_pane_t1_copy1

0x3a7a,	// (0x00006643) rs_clock_indi_pane_g1

0x7c10,	// (0x0000a7d9) rs_clock_indi_pane_t1

0x7c1e,	// (0x0000a7e7) rs_indi_pane

0x7c26,	// (0x0000a7ef) rs_indi_pane_g1

0x7c2f,	// (0x0000a7f8) rs_indi_pane_g2

0x788a,	// (0x0000a453) rs_indi_pane_g3

0x0002,

0xfe9a,	// (0x00012a63) rs_indi_pane_g

0xf29f,	// (0x00011e68) bg_popup_preview_window_pane_cp03

0x7c38,	// (0x0000a801) popup_fep_tooltip_window_t1

0xc1af,	// (0x0000ed78) popup_note2_window_g2_ParamLimits

0xc1af,	// (0x0000ed78) popup_note2_window_g2

0x0001,

0xfc2e,	// (0x000127f7) popup_note2_window_g_ParamLimits

0xfc2e,	// (0x000127f7) popup_note2_window_g

0x527c,	// (0x00007e45) bg_popup_sub_pane_cp11_ParamLimits

0x5289,	// (0x00007e52) cell_ai3_links_pane_g1_ParamLimits

0x52a0,	// (0x00007e69) cell_ai3_links_pane_t1

0x7bcb,	// (0x0000a794) set_text_pane_t1_copy1_ParamLimits

0xf1e1,	// (0x00011daa) cell_graphic_popup_pane_cp2_ParamLimits

0xf1e1,	// (0x00011daa) cell_graphic_popup_pane_cp2

0xdd56,	// (0x0001091f) cell_graphic_popup_pane_g1_cp2

0xe457,	// (0x00011020) cell_graphic_popup_pane_g2_cp2

0x7c4e,	// (0x0000a817) cell_graphic_popup_pane_g3_cp2

0xdd5e,	// (0x00010927) cell_graphic_popup_pane_t2_cp2

0xe468,	// (0x00011031) grid_highlight_pane_cp3_cp2

0xeab6,	// (0x0001167f) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe5db,	// (0x000111a4) main_tmo_pane_ParamLimits

0xc6a4,	// (0x0000f26d) popup_tmo_big_image_note_window

0x703a,	// (0x00009c03) cell_ai5_widget_list_pane

0x7042,	// (0x00009c0b) cell_ai5_widget_lrg_icon_pane

0xdacf,	// (0x00010698) tmo_note_info_pane_t1_ParamLimits

0xdae4,	// (0x000106ad) tmo_note_info_pane_t2_ParamLimits

0xdafb,	// (0x000106c4) tmo_note_info_pane_t3_ParamLimits

0x7807,	// (0x0000a3d0) tmo_note_info_pane_t4_ParamLimits

0x7819,	// (0x0000a3e2) tmo_note_info_pane_t5_ParamLimits

0xfe88,	// (0x00012a51) tmo_note_info_pane_t_ParamLimits

0x7937,	// (0x0000a500) settings_container_pane_ParamLimits

0xdd4e,	// (0x00010917) indicator_popup_pane_cp5

0xdd4e,	// (0x00010917) indicator_popup_pane_cp6

0x7bf4,	// (0x0000a7bd) list_set_graphic_pane_copy1_ParamLimits

0xdfba,	// (0x00010b83) bg_popup_window_pane_cp23

0x7c64,	// (0x0000a82d) popup_tmo_big_image_note_window_g1

0x7c6d,	// (0x0000a836) popup_tmo_big_image_note_window_t1

0x7c7d,	// (0x0000a846) popup_tmo_big_image_note_window_t2

0x7c8d,	// (0x0000a856) popup_tmo_big_image_note_window_t3

0x0002,

0xfea1,	// (0x00012a6a) popup_tmo_big_image_note_window_t

0x3a7a,	// (0x00006643) cell_ai5_widget_lrg_icon_pane_g1

0x7c9d,	// (0x0000a866) cell_ai5_widget_lrg_icon_pane_t1

0x7cab,	// (0x0000a874) cell_ai5_widget_list_row_pane_ParamLimits

0x7cab,	// (0x0000a874) cell_ai5_widget_list_row_pane

0x7cc2,	// (0x0000a88b) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7cc2,	// (0x0000a88b) cell_ai5_widget_list_row_pane_g1

0xdd6c,	// (0x00010935) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xdd6c,	// (0x00010935) cell_ai5_widget_list_row_pane_t1

0x7cfa,	// (0x0000a8c3) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7cfa,	// (0x0000a8c3) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea8,	// (0x00012a71) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea8,	// (0x00012a71) cell_ai5_widget_list_row_pane_t

0xdfba,	// (0x00010b83) main_fep_vtchi_ss_pane

0x7d4a,	// (0x0000a913) popup_fep_char_pre_window

0x7d52,	// (0x0000a91b) popup_fep_ituss_window

0xddc7,	// (0x00010990) popup_fep_vkbss_window

0xf47e,	// (0x00012047) grid_vkbss_keypad_pane_ParamLimits

0xf47e,	// (0x00012047) grid_vkbss_keypad_pane

0x7dbe,	// (0x0000a987) ituss_keypad_pane

0x7dd8,	// (0x0000a9a1) aid_vkbss_key_offset_ParamLimits

0x7dd8,	// (0x0000a9a1) aid_vkbss_key_offset

0xddd4,	// (0x0001099d) cell_vkbss_key_pane_ParamLimits

0xddd4,	// (0x0001099d) cell_vkbss_key_pane

0x7e3c,	// (0x0000aa05) bg_cell_vkbss_key_g1_ParamLimits

0x7e3c,	// (0x0000aa05) bg_cell_vkbss_key_g1

0xde38,	// (0x00010a01) cell_vkbss_key_3p_pane_ParamLimits

0xde38,	// (0x00010a01) cell_vkbss_key_3p_pane

0xde6e,	// (0x00010a37) cell_vkbss_key_g1_ParamLimits

0xde6e,	// (0x00010a37) cell_vkbss_key_g1

0xdea4,	// (0x00010a6d) cell_vkbss_key_t1_ParamLimits

0xdea4,	// (0x00010a6d) cell_vkbss_key_t1

0x7f10,	// (0x0000aad9) cell_ituss_key_pane_ParamLimits

0x7f10,	// (0x0000aad9) cell_ituss_key_pane

0x7f21,	// (0x0000aaea) bg_cell_ituss_key_g1_ParamLimits

0x7f21,	// (0x0000aaea) bg_cell_ituss_key_g1

0x7f2d,	// (0x0000aaf6) cell_ituss_key_pane_g1_ParamLimits

0x7f2d,	// (0x0000aaf6) cell_ituss_key_pane_g1

0x7f41,	// (0x0000ab0a) cell_ituss_key_pane_g2_ParamLimits

0x7f41,	// (0x0000ab0a) cell_ituss_key_pane_g2

0x0005,

0xfeaf,	// (0x00012a78) cell_ituss_key_pane_g_ParamLimits

0xfeaf,	// (0x00012a78) cell_ituss_key_pane_g

0x7fd7,	// (0x0000aba0) cell_ituss_key_t1_ParamLimits

0x7fd7,	// (0x0000aba0) cell_ituss_key_t1

0x8011,	// (0x0000abda) cell_ituss_key_t2_ParamLimits

0x8011,	// (0x0000abda) cell_ituss_key_t2

0x8043,	// (0x0000ac0c) cell_ituss_key_t3_ParamLimits

0x8043,	// (0x0000ac0c) cell_ituss_key_t3

0x8074,	// (0x0000ac3d) cell_ituss_key_t4_ParamLimits

0x8074,	// (0x0000ac3d) cell_ituss_key_t4

0x0004,

0xfebc,	// (0x00012a85) cell_ituss_key_t_ParamLimits

0xfebc,	// (0x00012a85) cell_ituss_key_t

0xdf00,	// (0x00010ac9) cell_vkbss_key_3p_pane_g1

0xdf08,	// (0x00010ad1) cell_vkbss_key_3p_pane_g2

0xdf10,	// (0x00010ad9) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec7,	// (0x00012a90) cell_vkbss_key_3p_pane_g

0xf29f,	// (0x00011e68) bg_popup_fep_char_preview_window_cp02

0x80cf,	// (0x0000ac98) popup_fep_char_pre_window_t1

0xd7a5,	// (0x0001036e) main_ai5_sk_pane

0x7893,	// (0x0000a45c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x789f,	// (0x0000a468) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x45a0,	// (0x00007169) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x78b4,	// (0x0000a47d) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe93,	// (0x00012a5c) cell_contacts_ai5_widget_pane_g_ParamLimits

0x78c0,	// (0x0000a489) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe5db,	// (0x000111a4) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdf18,	// (0x00010ae1) main_ai5_sk_pane_g1

0xb109,	// (0x0000dcd2) popup_query_code_window_g1

0xddb8,	// (0x00010981) popup_fep_vkb_icf_pane

0x7d95,	// (0x0000a95e) popup_fep_vtchi_icf_pane

0x80e6,	// (0x0000acaf) bg_icf_pane

0x80e6,	// (0x0000acaf) list_vkb_icf_pane

0x80f2,	// (0x0000acbb) bg_icf_pane_cp01

0x8105,	// (0x0000acce) vtchi_icf_list_pane

0xdf6d,	// (0x00010b36) list_vkb_icf_pane_t1_ParamLimits

0xdf6d,	// (0x00010b36) list_vkb_icf_pane_t1

0x8187,	// (0x0000ad50) vtchi_icf_list_pane_t1_ParamLimits

0x8187,	// (0x0000ad50) vtchi_icf_list_pane_t1

0x7d52,	// (0x0000a91b) popup_fep_ituss_window_ParamLimits

0x7d95,	// (0x0000a95e) popup_fep_vtchi_icf_pane_ParamLimits

0x7dbe,	// (0x0000a987) ituss_keypad_pane_ParamLimits

0x7dce,	// (0x0000a997) ituss_sks_pane

0x80e6,	// (0x0000acaf) bg_icf_pane_ParamLimits

0xdd9d,	// (0x00010966) icf_edit_indi_pane_ParamLimits

0xdd9d,	// (0x00010966) icf_edit_indi_pane

0x80e6,	// (0x0000acaf) list_vkb_icf_pane_ParamLimits

0x80f2,	// (0x0000acbb) bg_icf_pane_cp01_ParamLimits

0x7d3d,	// (0x0000a906) icf_edit_indi_pane_cp01_ParamLimits

0x7d3d,	// (0x0000a906) icf_edit_indi_pane_cp01

0x8105,	// (0x0000acce) vtchi_query_pane

0x6ddd,	// (0x000099a6) icf_edit_indi_pane_g1_ParamLimits

0x6ddd,	// (0x000099a6) icf_edit_indi_pane_g1

0xdf85,	// (0x00010b4e) icf_edit_indi_pane_g2_ParamLimits

0xdf85,	// (0x00010b4e) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x00012abb) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x00012abb) icf_edit_indi_pane_g

0xdf99,	// (0x00010b62) icf_edit_indi_pane_t1

0x81a8,	// (0x0000ad71) bg_input_focus_pane_cp042

0xe4cb,	// (0x00011094) vtchi_button_pane

0x81b1,	// (0x0000ad7a) vtchi_query_pane_t1

0x81bf,	// (0x0000ad88) vtchi_query_pane_t2

0x81cd,	// (0x0000ad96) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x00012aaa) vtchi_query_pane_t

0xdfba,	// (0x00010b83) bg_button_pane_cp13

0x81db,	// (0x0000ada4) vtchi_button_pane_g1

0x81e3,	// (0x0000adac) ituss_sks_pane_g1

0x81ee,	// (0x0000adb7) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x00012ab1) ituss_sks_pane_g

0x81f6,	// (0x0000adbf) ituss_sks_pane_t1

0x8204,	// (0x0000adcd) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x00012ab6) ituss_sks_pane_t

0x3459,	// (0x00006022) indicator_nsta_pane_cp_g1

0x3462,	// (0x0000602b) indicator_nsta_pane_cp_g2

0x346a,	// (0x00006033) indicator_nsta_pane_cp_g3

0x3472,	// (0x0000603b) indicator_nsta_pane_cp_g4

0x3462,	// (0x0000602b) indicator_nsta_pane_cp_g5

0x346a,	// (0x00006033) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x00012641) indicator_nsta_pane_cp_g

0xd506,	// (0x000100cf) cell_graphic2_pane_t2_ParamLimits

0xd506,	// (0x000100cf) cell_graphic2_pane_t2

0x0001,

0xfd7e,	// (0x00012947) cell_graphic2_pane_t_ParamLimits

0xfd7e,	// (0x00012947) cell_graphic2_pane_t

0xd53d,	// (0x00010106) cell_graphic2_control_pane_t1

0x9d98,	// (0x0000c961) signal_pane_g3_ParamLimits

0x9d98,	// (0x0000c961) signal_pane_g3

0x9dac,	// (0x0000c975) signal_pane_g4_ParamLimits

0x9dac,	// (0x0000c975) signal_pane_g4

0x7d0c,	// (0x0000a8d5) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d0c,	// (0x0000a8d5) cell_ai5_widget_list_row_pane_t3

0x7fc5,	// (0x0000ab8e) cell_ituss_key_pane_t1_ParamLimits

0x7fc5,	// (0x0000ab8e) cell_ituss_key_pane_t1

0x0d1e,	// (0x000038e7) form_field_data_wide_pane_vc_t2_ParamLimits

0x0d1e,	// (0x000038e7) form_field_data_wide_pane_vc_t2

0x0d32,	// (0x000038fb) form_field_data_wide_pane_vc_t3_ParamLimits

0x0d32,	// (0x000038fb) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x0001238d) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x0001238d) form_field_data_wide_pane_vc_t

0x3103,	// (0x00005ccc) form_field_slider_wide_pane_vc_t3_ParamLimits

0x3103,	// (0x00005ccc) form_field_slider_wide_pane_vc_t3

0x31e1,	// (0x00005daa) form_field_popup_wide_pane_vc_t2_ParamLimits

0x31e1,	// (0x00005daa) form_field_popup_wide_pane_vc_t2

0x31f8,	// (0x00005dc1) form_field_popup_wide_pane_vc_t3_ParamLimits

0x31f8,	// (0x00005dc1) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00012630) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00012630) form_field_popup_wide_pane_vc_t

0xd8a5,	// (0x0001046e) aid_fshwr2_btn_pane_ParamLimits

0xd8b9,	// (0x00010482) aid_fshwr2_syb_pane_ParamLimits

0xd8cd,	// (0x00010496) aid_fshwr2_txt_pane_ParamLimits

0xe5db,	// (0x000111a4) fshwr2_bg_pane_ParamLimits

0xd8dd,	// (0x000104a6) fshwr2_func_candi_pane_ParamLimits

0xd8fd,	// (0x000104c6) fshwr2_hwr_syb_pane_ParamLimits

0xd91f,	// (0x000104e8) fshwr2_icf_pane_ParamLimits

0x3074,	// (0x00005c3d) list_double_graphic_pane_vc_g4_ParamLimits

0x3074,	// (0x00005c3d) list_double_graphic_pane_vc_g4

0x7f61,	// (0x0000ab2a) cell_ituss_key_pane_g3_ParamLimits

0x7f61,	// (0x0000ab2a) cell_ituss_key_pane_g3

0x80a5,	// (0x0000ac6e) cell_ituss_key_t5_ParamLimits

0x80a5,	// (0x0000ac6e) cell_ituss_key_t5

0xddc7,	// (0x00010990) popup_fep_vkbss_window_ParamLimits

0x6fcd,	// (0x00009b96) aid_cell_ai5_quarter

0xdf99,	// (0x00010b62) icf_edit_indi_pane_t1_ParamLimits

0x9268,	// (0x0000be31) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9268,	// (0x0000be31) aid_tch_indicator_popup_pane_cp2

0x927b,	// (0x0000be44) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x927b,	// (0x0000be44) aid_tch_query_popup_data_pane_cp2

0x10d4,	// (0x00003c9d) aid_tch_query_popup_pane_ParamLimits

0x10d4,	// (0x00003c9d) aid_tch_query_popup_pane

0x10d4,	// (0x00003c9d) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x10d4,	// (0x00003c9d) aid_tch_query_popup_data_pane_cp1

0xf47e,	// (0x00012047) cell_fshwr2_syb_bg_pane_ParamLimits

0xda35,	// (0x000105fe) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xda48,	// (0x00010611) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xddb8,	// (0x00010981) popup_fep_vkb_icf_pane_ParamLimits

0xd60d,	// (0x000101d6) bg_popup_fep_char_preview_window_g10

0x7102,	// (0x00009ccb) cell_ai5_widget_pane_g11_ParamLimits

0x7102,	// (0x00009ccb) cell_ai5_widget_pane_g11

0x710e,	// (0x00009cd7) cell_ai5_widget_pane_g12_ParamLimits

0x710e,	// (0x00009cd7) cell_ai5_widget_pane_g12

0x711a,	// (0x00009ce3) cell_ai5_widget_pane_g13_ParamLimits

0x711a,	// (0x00009ce3) cell_ai5_widget_pane_g13

0x7249,	// (0x00009e12) cell_ai5_widget_pane_t11_ParamLimits

0x7249,	// (0x00009e12) cell_ai5_widget_pane_t11

0x725b,	// (0x00009e24) cell_ai5_widget_pane_t12_ParamLimits

0x725b,	// (0x00009e24) cell_ai5_widget_pane_t12

0x7f6d,	// (0x0000ab36) cell_ituss_key_pane_g4_ParamLimits

0x7f6d,	// (0x0000ab36) cell_ituss_key_pane_g4

0x7f89,	// (0x0000ab52) cell_ituss_key_pane_g5_ParamLimits

0x7f89,	// (0x0000ab52) cell_ituss_key_pane_g5

0x7fa5,	// (0x0000ab6e) cell_ituss_key_pane_g6_ParamLimits

0x7fa5,	// (0x0000ab6e) cell_ituss_key_pane_g6

0x0a70,	// (0x00003639) bg_icf_pane_g1

0xdf21,	// (0x00010aea) bg_icf_pane_g2

0xdf2b,	// (0x00010af4) bg_icf_pane_g3

0xdf33,	// (0x00010afc) bg_icf_pane_g4

0xdf3d,	// (0x00010b06) bg_icf_pane_g5

0xdf47,	// (0x00010b10) bg_icf_pane_g6

0xdf51,	// (0x00010b1a) bg_icf_pane_g7

0xdf59,	// (0x00010b22) bg_icf_pane_g8

0xdf63,	// (0x00010b2c) bg_icf_pane_g9

0x0008,

0xfece,	// (0x00012a97) bg_icf_pane_g

0x7dab,	// (0x0000a974) popup_hyb_candi_window_ParamLimits

0x7dab,	// (0x0000a974) popup_hyb_candi_window

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp01_ParamLimits

0x0c08,	// (0x000037d1) bg_popup_sub_pane_cp01

0x823f,	// (0x0000ae08) entry_hyb_candi_pane_ParamLimits

0x823f,	// (0x0000ae08) entry_hyb_candi_pane

0x824e,	// (0x0000ae17) grid_hyb_candi_pane_ParamLimits

0x824e,	// (0x0000ae17) grid_hyb_candi_pane

0x8263,	// (0x0000ae2c) grid_hyb_phrase_pane_ParamLimits

0x8263,	// (0x0000ae2c) grid_hyb_phrase_pane

0x8272,	// (0x0000ae3b) cell_hyb_candi_pane_ParamLimits

0x8272,	// (0x0000ae3b) cell_hyb_candi_pane

0x8295,	// (0x0000ae5e) cell_hyb_candi_scroll_pane

0xec58,	// (0x00011821) cell_hyb_candi_pane_g1

0x829e,	// (0x0000ae67) cell_hyb_candi_pane_t1

0x82ac,	// (0x0000ae75) cell_hyb_phrase_pane

0xec58,	// (0x00011821) cell_hyb_phrase_pane_g1

0x82b5,	// (0x0000ae7e) cell_hyb_phrase_pane_t1

0x82c3,	// (0x0000ae8c) entry_hyb_candi_pane_t1

0xf29f,	// (0x00011e68) input_focus_pane_cp06

0x82d1,	// (0x0000ae9a) cell_hyb_candi_scroll_pane_g1

0x82d9,	// (0x0000aea2) cell_hyb_candi_scroll_pane_g1_aid

0x82e1,	// (0x0000aeaa) cell_hyb_candi_scroll_pane_g2

0x82e9,	// (0x0000aeb2) cell_hyb_candi_scroll_pane_g2_aid

0x82f1,	// (0x0000aeba) cell_hyb_candi_scroll_pane_g3

0x82f9,	// (0x0000aec2) cell_hyb_candi_scroll_pane_g4
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_av_nhd4_lsc_tch_Normal

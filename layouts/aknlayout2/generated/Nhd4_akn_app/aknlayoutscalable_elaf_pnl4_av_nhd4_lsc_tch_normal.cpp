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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_pnp4_av_nhd4_prt_tch + 0x00002af2 };

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
0x8d12,	// (0x0000b804) Screen

0x8d1e,	// (0x0000b810) application_window_ParamLimits

0x8d1e,	// (0x0000b810) application_window

0xdfef,	// (0x00010ae1) screen_g1

0x8d56,	// (0x0000b848) area_bottom_pane_ParamLimits

0x8d56,	// (0x0000b848) area_bottom_pane

0xe019,	// (0x00010b0b) area_top_pane_ParamLimits

0xe019,	// (0x00010b0b) area_top_pane

0xe0ad,	// (0x00010b9f) main_pane_ParamLimits

0xe0ad,	// (0x00010b9f) main_pane

0xe168,	// (0x00010c5a) misc_graphics

0xab04,	// (0x0000d5f6) battery_pane_ParamLimits

0xab04,	// (0x0000d5f6) battery_pane

0x1570,	// (0x00004062) bg_status_flat_pane_g8

0x1578,	// (0x0000406a) bg_status_flat_pane_g9

0x06c5,	// (0x000031b7) context_pane_ParamLimits

0x06c5,	// (0x000031b7) context_pane

0xac6f,	// (0x0000d761) navi_pane_ParamLimits

0xac6f,	// (0x0000d761) navi_pane

0xaced,	// (0x0000d7df) signal_pane_ParamLimits

0xaced,	// (0x0000d7df) signal_pane

0x0008,

0xf834,	// (0x00012326) bg_status_flat_pane_g

0xad7d,	// (0x0000d86f) status_pane_g1_ParamLimits

0xad7d,	// (0x0000d86f) status_pane_g1

0xad93,	// (0x0000d885) status_pane_g2_ParamLimits

0xad93,	// (0x0000d885) status_pane_g2

0x08ec,	// (0x000033de) status_pane_g3_ParamLimits

0x08ec,	// (0x000033de) status_pane_g3

0x0004,

0xf767,	// (0x00012259) status_pane_g_ParamLimits

0xf767,	// (0x00012259) status_pane_g

0xad9f,	// (0x0000d891) title_pane_ParamLimits

0xad9f,	// (0x0000d891) title_pane

0xae02,	// (0x0000d8f4) uni_indicator_pane_ParamLimits

0xae02,	// (0x0000d8f4) uni_indicator_pane

0xf4c5,	// (0x00011fb7) bg_list_pane_ParamLimits

0xf4c5,	// (0x00011fb7) bg_list_pane

0xa2f2,	// (0x0000cde4) find_pane

0x0cbc,	// (0x000037ae) listscroll_app_pane_ParamLimits

0x0cbc,	// (0x000037ae) listscroll_app_pane

0xf4f1,	// (0x00011fe3) listscroll_form_pane

0xa2fa,	// (0x0000cdec) listscroll_gen_pane_ParamLimits

0xa2fa,	// (0x0000cdec) listscroll_gen_pane

0xf4f9,	// (0x00011feb) listscroll_set_pane

0x2318,	// (0x00004e0a) main_idle_act_pane

0xf2a9,	// (0x00011d9b) main_idle_trad_pane

0xf2a9,	// (0x00011d9b) main_list_empty_pane

0xf4e5,	// (0x00011fd7) main_midp_pane

0xf513,	// (0x00012005) main_pane_g1_ParamLimits

0xf513,	// (0x00012005) main_pane_g1

0xa30e,	// (0x0000ce00) popup_ai_message_window_ParamLimits

0xa30e,	// (0x0000ce00) popup_ai_message_window

0xa3bf,	// (0x0000ceb1) popup_fep_china_uni_window_ParamLimits

0xa3bf,	// (0x0000ceb1) popup_fep_china_uni_window

0xa419,	// (0x0000cf0b) popup_fep_japan_candidate_window_ParamLimits

0xa419,	// (0x0000cf0b) popup_fep_japan_candidate_window

0xa437,	// (0x0000cf29) popup_fep_japan_predictive_window_ParamLimits

0xa437,	// (0x0000cf29) popup_fep_japan_predictive_window

0xa449,	// (0x0000cf3b) popup_find_window

0xa466,	// (0x0000cf58) popup_grid_graphic_window_ParamLimits

0xa466,	// (0x0000cf58) popup_grid_graphic_window

0x0169,	// (0x00002c5b) popup_large_graphic_colour_window

0xa504,	// (0x0000cff6) popup_menu_window_ParamLimits

0xa504,	// (0x0000cff6) popup_menu_window

0xa6d6,	// (0x0000d1c8) popup_note_image_window

0xa69c,	// (0x0000d18e) popup_note_wait_window_ParamLimits

0xa69c,	// (0x0000d18e) popup_note_wait_window

0xa6ee,	// (0x0000d1e0) popup_note_window_ParamLimits

0xa6ee,	// (0x0000d1e0) popup_note_window

0xa79d,	// (0x0000d28f) popup_query_code_window_ParamLimits

0xa79d,	// (0x0000d28f) popup_query_code_window

0xa7d7,	// (0x0000d2c9) popup_query_data_code_window_ParamLimits

0xa7d7,	// (0x0000d2c9) popup_query_data_code_window

0xa7f4,	// (0x0000d2e6) popup_query_data_window_ParamLimits

0xa7f4,	// (0x0000d2e6) popup_query_data_window

0xa876,	// (0x0000d368) popup_query_sat_info_window_ParamLimits

0xa876,	// (0x0000d368) popup_query_sat_info_window

0xa90d,	// (0x0000d3ff) popup_snote_single_graphic_window_ParamLimits

0xa90d,	// (0x0000d3ff) popup_snote_single_graphic_window

0xa90d,	// (0x0000d3ff) popup_snote_single_text_window_ParamLimits

0xa90d,	// (0x0000d3ff) popup_snote_single_text_window

0x043c,	// (0x00002f2e) popup_sub_window_general

0xaa6a,	// (0x0000d55c) popup_window_general_ParamLimits

0xaa6a,	// (0x0000d55c) popup_window_general

0x0581,	// (0x00003073) power_save_pane

0xa150,	// (0x0000cc42) control_pane_g1_ParamLimits

0xa150,	// (0x0000cc42) control_pane_g1

0xa179,	// (0x0000cc6b) control_pane_g2_ParamLimits

0xa179,	// (0x0000cc6b) control_pane_g2

0xf488,	// (0x00011f7a) control_pane_g3_ParamLimits

0xf488,	// (0x00011f7a) control_pane_g3

0x0007,

0xf74f,	// (0x00012241) control_pane_g_ParamLimits

0xf74f,	// (0x00012241) control_pane_g

0xa1e1,	// (0x0000ccd3) control_pane_t1_ParamLimits

0xa1e1,	// (0x0000ccd3) control_pane_t1

0xa247,	// (0x0000cd39) control_pane_t2_ParamLimits

0xa247,	// (0x0000cd39) control_pane_t2

0x0002,

0xf760,	// (0x00012252) control_pane_t_ParamLimits

0xf760,	// (0x00012252) control_pane_t

0xa0a9,	// (0x0000cb9b) navi_navi_volume_pane_cp1

0xa0b1,	// (0x0000cba3) status_small_icon_pane

0xf454,	// (0x00011f46) status_small_pane_g1_ParamLimits

0xf454,	// (0x00011f46) status_small_pane_g1

0xa0b9,	// (0x0000cbab) status_small_pane_g2_ParamLimits

0xa0b9,	// (0x0000cbab) status_small_pane_g2

0xa0c5,	// (0x0000cbb7) status_small_pane_g3_ParamLimits

0xa0c5,	// (0x0000cbb7) status_small_pane_g3

0xa0d1,	// (0x0000cbc3) status_small_pane_g4_ParamLimits

0xa0d1,	// (0x0000cbc3) status_small_pane_g4

0xa0dd,	// (0x0000cbcf) status_small_pane_g5_ParamLimits

0xa0dd,	// (0x0000cbcf) status_small_pane_g5

0xa0eb,	// (0x0000cbdd) status_small_pane_g6_ParamLimits

0xa0eb,	// (0x0000cbdd) status_small_pane_g6

0x0007,

0xf73e,	// (0x00012230) status_small_pane_g_ParamLimits

0xf73e,	// (0x00012230) status_small_pane_g

0xa11a,	// (0x0000cc0c) status_small_pane_t1

0xa13c,	// (0x0000cc2e) status_small_wait_pane_ParamLimits

0xa13c,	// (0x0000cc2e) status_small_wait_pane

0x9d62,	// (0x0000c854) aid_levels_signal_ParamLimits

0x9d62,	// (0x0000c854) aid_levels_signal

0x9d7a,	// (0x0000c86c) signal_pane_g1_ParamLimits

0x9d7a,	// (0x0000c86c) signal_pane_g1

0x9d95,	// (0x0000c887) signal_pane_g2_ParamLimits

0x9d95,	// (0x0000c887) signal_pane_g2

0x0003,

0xf6cf,	// (0x000121c1) signal_pane_g_ParamLimits

0xf6cf,	// (0x000121c1) signal_pane_g

0xed5d,	// (0x0001184f) context_pane_g1

0x8f54,	// (0x0000ba46) title_pane_g1

0x8f8b,	// (0x0000ba7d) title_pane_t1

0xe19e,	// (0x00010c90) title_pane_t2

0xe1c4,	// (0x00010cb6) title_pane_t3

0x0002,

0xf532,	// (0x00012024) title_pane_t

0xae2a,	// (0x0000d91c) aid_levels_battery_ParamLimits

0xae2a,	// (0x0000d91c) aid_levels_battery

0xae46,	// (0x0000d938) battery_pane_g1_ParamLimits

0xae46,	// (0x0000d938) battery_pane_g1

0xae63,	// (0x0000d955) battery_pane_g2_ParamLimits

0xae63,	// (0x0000d955) battery_pane_g2

0x0001,

0xf772,	// (0x00012264) battery_pane_g_ParamLimits

0xf772,	// (0x00012264) battery_pane_g

0xb4f0,	// (0x0000dfe2) uni_indicator_pane_g1

0xb506,	// (0x0000dff8) uni_indicator_pane_g2

0xb51c,	// (0x0000e00e) uni_indicator_pane_g3

0x0005,

0xf8dc,	// (0x000123ce) uni_indicator_pane_g

0xf16d,	// (0x00011c5f) navi_icon_pane_ParamLimits

0xf16d,	// (0x00011c5f) navi_icon_pane

0xf0aa,	// (0x00011b9c) navi_midp_pane

0xf189,	// (0x00011c7b) navi_navi_pane

0xf193,	// (0x00011c85) navi_text_pane_ParamLimits

0xf193,	// (0x00011c85) navi_text_pane

0xdfef,	// (0x00010ae1) status_small_wait_pane_g1

0xe42f,	// (0x00010f21) status_small_wait_pane_g2

0x0001,

0xf8d7,	// (0x000123c9) status_small_wait_pane_g

0xb449,	// (0x0000df3b) navi_navi_icon_text_pane

0x1d2d,	// (0x0000481f) navi_navi_pane_g1_ParamLimits

0x1d2d,	// (0x0000481f) navi_navi_pane_g1

0x1d3f,	// (0x00004831) navi_navi_pane_g2_ParamLimits

0x1d3f,	// (0x00004831) navi_navi_pane_g2

0x0001,

0xf8a5,	// (0x00012397) navi_navi_pane_g_ParamLimits

0xf8a5,	// (0x00012397) navi_navi_pane_g

0x1d51,	// (0x00004843) navi_navi_tabs_pane

0x1d5a,	// (0x0000484c) navi_navi_text_pane

0xb449,	// (0x0000df3b) navi_navi_volume_pane

0x1d01,	// (0x000047f3) navi_text_pane_t1

0x1cf5,	// (0x000047e7) navi_icon_pane_g1

0x1c48,	// (0x0000473a) navi_navi_text_pane_t1

0xb435,	// (0x0000df27) navi_navi_volume_pane_g1

0x1c3f,	// (0x00004731) volume_small_pane

0x1b9d,	// (0x0000468f) navi_navi_icon_text_pane_g1

0xb399,	// (0x0000de8b) navi_navi_icon_text_pane_t1

0xf189,	// (0x00011c7b) navi_tabs_2_long_pane

0xf189,	// (0x00011c7b) navi_tabs_2_pane

0xf189,	// (0x00011c7b) navi_tabs_3_long_pane

0xf189,	// (0x00011c7b) navi_tabs_3_pane

0xf189,	// (0x00011c7b) navi_tabs_4_pane

0x1afc,	// (0x000045ee) tabs_2_active_pane_ParamLimits

0x1afc,	// (0x000045ee) tabs_2_active_pane

0x1b0c,	// (0x000045fe) tabs_2_passive_pane_ParamLimits

0x1b0c,	// (0x000045fe) tabs_2_passive_pane

0x1aca,	// (0x000045bc) tabs_3_active_pane_ParamLimits

0x1aca,	// (0x000045bc) tabs_3_active_pane

0x1ada,	// (0x000045cc) tabs_3_passive_pane_ParamLimits

0x1ada,	// (0x000045cc) tabs_3_passive_pane

0x1aeb,	// (0x000045dd) tabs_3_passive_pane_cp_ParamLimits

0x1aeb,	// (0x000045dd) tabs_3_passive_pane_cp

0x1a86,	// (0x00004578) tabs_4_active_pane_ParamLimits

0x1a86,	// (0x00004578) tabs_4_active_pane

0x1a97,	// (0x00004589) tabs_4_passive_pane_ParamLimits

0x1a97,	// (0x00004589) tabs_4_passive_pane

0x1aa8,	// (0x0000459a) tabs_4_passive_pane_cp_ParamLimits

0x1aa8,	// (0x0000459a) tabs_4_passive_pane_cp

0x1ab9,	// (0x000045ab) tabs_4_passive_pane_cp2_ParamLimits

0x1ab9,	// (0x000045ab) tabs_4_passive_pane_cp2

0x1a62,	// (0x00004554) tabs_2_long_active_pane_ParamLimits

0x1a62,	// (0x00004554) tabs_2_long_active_pane

0x1a74,	// (0x00004566) tabs_2_long_passive_pane_ParamLimits

0x1a74,	// (0x00004566) tabs_2_long_passive_pane

0x1a1d,	// (0x0000450f) tabs_3_long_active_pane_ParamLimits

0x1a1d,	// (0x0000450f) tabs_3_long_active_pane

0x1a36,	// (0x00004528) tabs_3_long_passive_pane_ParamLimits

0x1a36,	// (0x00004528) tabs_3_long_passive_pane

0x1a49,	// (0x0000453b) tabs_3_long_passive_pane_cp_ParamLimits

0x1a49,	// (0x0000453b) tabs_3_long_passive_pane_cp

0x19c3,	// (0x000044b5) volume_small_pane_g1

0x19cc,	// (0x000044be) volume_small_pane_g2

0x19d5,	// (0x000044c7) volume_small_pane_g3

0x19de,	// (0x000044d0) volume_small_pane_g4

0x19e7,	// (0x000044d9) volume_small_pane_g5

0x19f0,	// (0x000044e2) volume_small_pane_g6

0x19f9,	// (0x000044eb) volume_small_pane_g7

0x1a02,	// (0x000044f4) volume_small_pane_g8

0x1a0b,	// (0x000044fd) volume_small_pane_g9

0x1a14,	// (0x00004506) volume_small_pane_g10

0x0009,

0xf871,	// (0x00012363) volume_small_pane_g

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp2_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp2

0x9017,	// (0x0000bb09) tabs_3_active_pane_g1

0x901f,	// (0x0000bb11) tabs_3_active_pane_t1

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp2_ParamLimits

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp2

0x9017,	// (0x0000bb09) tabs_3_passive_pane_g1

0x901f,	// (0x0000bb11) tabs_3_passive_pane_t1

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp3_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp3

0x9031,	// (0x0000bb23) tabs_4_active_pane_g1

0x9039,	// (0x0000bb2b) tabs_4_active_pane_t1

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp3_ParamLimits

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp3

0x9031,	// (0x0000bb23) tabs_4_1_passive_pane_g1

0x9039,	// (0x0000bb2b) tabs_4_1_passive_pane_t1

0xf4e5,	// (0x00011fd7) list_highlight_pane_cp2

0xb6f0,	// (0x0000e1e2) list_set_pane_ParamLimits

0xb6f0,	// (0x0000e1e2) list_set_pane

0xb78a,	// (0x0000e27c) main_pane_set_t1_ParamLimits

0xb78a,	// (0x0000e27c) main_pane_set_t1

0xb7aa,	// (0x0000e29c) main_pane_set_t2_ParamLimits

0xb7aa,	// (0x0000e29c) main_pane_set_t2

0xb7be,	// (0x0000e2b0) main_pane_set_t3_ParamLimits

0xb7be,	// (0x0000e2b0) main_pane_set_t3

0xb7d0,	// (0x0000e2c2) main_pane_set_t4_ParamLimits

0xb7d0,	// (0x0000e2c2) main_pane_set_t4

0x0003,

0xf941,	// (0x00012433) main_pane_set_t_ParamLimits

0xf941,	// (0x00012433) main_pane_set_t

0xb7e2,	// (0x0000e2d4) setting_code_pane

0xb7ec,	// (0x0000e2de) setting_slider_graphic_pane

0xb7ec,	// (0x0000e2de) setting_slider_pane

0xb7ec,	// (0x0000e2de) setting_text_pane

0xb7ec,	// (0x0000e2de) setting_volume_pane

0x904b,	// (0x0000bb3d) volume_set_pane

0xe1e4,	// (0x00010cd6) bg_set_opt_pane_cp

0x9053,	// (0x0000bb45) setting_slider_pane_t1

0x906c,	// (0x0000bb5e) setting_slider_pane_t2

0x9086,	// (0x0000bb78) setting_slider_pane_t3

0x0002,

0xf539,	// (0x0001202b) setting_slider_pane_t

0x909e,	// (0x0000bb90) slider_set_pane

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp2

0xe1f2,	// (0x00010ce4) setting_slider_graphic_pane_g1

0x90b4,	// (0x0000bba6) setting_slider_graphic_pane_t1

0x90c4,	// (0x0000bbb6) setting_slider_graphic_pane_t2

0x0001,

0xf540,	// (0x00012032) setting_slider_graphic_pane_t

0x90d4,	// (0x0000bbc6) slider_set_pane_cp

0xe168,	// (0x00010c5a) input_focus_pane_cp1

0x22ff,	// (0x00004df1) list_set_text_pane

0xdfef,	// (0x00010ae1) setting_text_pane_g1

0xe168,	// (0x00010c5a) input_focus_pane_cp2

0xdfef,	// (0x00010ae1) setting_code_pane_g1

0xe1fb,	// (0x00010ced) setting_code_pane_t1

0xe209,	// (0x00010cfb) set_text_pane_t1_ParamLimits

0xe209,	// (0x00010cfb) set_text_pane_t1

0xe6cc,	// (0x000111be) set_opt_bg_pane_g1

0xe6d4,	// (0x000111c6) set_opt_bg_pane_g2

0xb6a5,	// (0x0000e197) set_opt_bg_pane_g3

0xe6e4,	// (0x000111d6) set_opt_bg_pane_g4

0xe6ec,	// (0x000111de) set_opt_bg_pane_g5

0xe6f4,	// (0x000111e6) set_opt_bg_pane_g6

0xb6af,	// (0x0000e1a1) set_opt_bg_pane_g7

0xb6b7,	// (0x0000e1a9) set_opt_bg_pane_g8

0xb6c1,	// (0x0000e1b3) set_opt_bg_pane_g9

0x0008,

0xf92e,	// (0x00012420) set_opt_bg_pane_g

0xb640,	// (0x0000e132) slider_set_pane_g1

0x2275,	// (0x00004d67) slider_set_pane_g2

0x0006,

0xf91f,	// (0x00012411) slider_set_pane_g

0xb553,	// (0x0000e045) volume_set_pane_g1

0xb55b,	// (0x0000e04d) volume_set_pane_g2

0xb563,	// (0x0000e055) volume_set_pane_g3

0xb56b,	// (0x0000e05d) volume_set_pane_g4

0xb573,	// (0x0000e065) volume_set_pane_g5

0xb57b,	// (0x0000e06d) volume_set_pane_g6

0xb583,	// (0x0000e075) volume_set_pane_g7

0xb58b,	// (0x0000e07d) volume_set_pane_g8

0xb593,	// (0x0000e085) volume_set_pane_g9

0xb59b,	// (0x0000e08d) volume_set_pane_g10

0x0009,

0xf8f7,	// (0x000123e9) volume_set_pane_g

0x90dc,	// (0x0000bbce) indicator_pane_ParamLimits

0x90dc,	// (0x0000bbce) indicator_pane

0x9104,	// (0x0000bbf6) main_idle_pane_g2_ParamLimits

0x9104,	// (0x0000bbf6) main_idle_pane_g2

0x913c,	// (0x0000bc2e) main_pane_idle_g1_ParamLimits

0x913c,	// (0x0000bc2e) main_pane_idle_g1

0xe223,	// (0x00010d15) popup_clock_digital_analogue_window_ParamLimits

0xe223,	// (0x00010d15) popup_clock_digital_analogue_window

0x9163,	// (0x0000bc55) soft_indicator_pane_ParamLimits

0x9163,	// (0x0000bc55) soft_indicator_pane

0x9187,	// (0x0000bc79) wallpaper_pane_ParamLimits

0x9187,	// (0x0000bc79) wallpaper_pane

0xdfef,	// (0x00010ae1) wallpaper_pane_g1

0x9199,	// (0x0000bc8b) indicator_pane_g1_ParamLimits

0x9199,	// (0x0000bc8b) indicator_pane_g1

0x288b,	// (0x0000537d) navi_navi_icon_text_pane_srt_g1

0xe251,	// (0x00010d43) soft_indicator_pane_t1

0xe26b,	// (0x00010d5d) aid_ps_area_pane

0x91af,	// (0x0000bca1) aid_ps_clock_pane

0xe27c,	// (0x00010d6e) aid_ps_indicator_pane

0xe288,	// (0x00010d7a) indicator_ps_pane_ParamLimits

0xe288,	// (0x00010d7a) indicator_ps_pane

0xe297,	// (0x00010d89) power_save_pane_g1_ParamLimits

0xe297,	// (0x00010d89) power_save_pane_g1

0xe2a3,	// (0x00010d95) power_save_pane_g2_ParamLimits

0xe2a3,	// (0x00010d95) power_save_pane_g2

0xdff9,	// (0x00010aeb) aid_navinavi_width_pane

0xe26b,	// (0x00010d5d) aid_ps_area_pane_ParamLimits

0x0001,

0xf545,	// (0x00012037) power_save_pane_g_ParamLimits

0xf545,	// (0x00012037) power_save_pane_g

0xe2b1,	// (0x00010da3) power_save_pane_t1_ParamLimits

0xe2b1,	// (0x00010da3) power_save_pane_t1

0x91af,	// (0x0000bca1) aid_ps_clock_pane_ParamLimits

0xe27c,	// (0x00010d6e) aid_ps_indicator_pane_ParamLimits

0xe2c3,	// (0x00010db5) power_save_pane_t4_ParamLimits

0xe2c3,	// (0x00010db5) power_save_pane_t4

0x0001,

0xf54a,	// (0x0001203c) power_save_pane_t_ParamLimits

0xf54a,	// (0x0001203c) power_save_pane_t

0xe2ed,	// (0x00010ddf) power_save_t3_ParamLimits

0xe2ed,	// (0x00010ddf) power_save_t3

0xe2d8,	// (0x00010dca) power_save_t2_ParamLimits

0xe2d8,	// (0x00010dca) power_save_t2

0xe302,	// (0x00010df4) indicator_ps_pane_g1

0x91bd,	// (0x0000bcaf) ai_gene_pane_ParamLimits

0x91bd,	// (0x0000bcaf) ai_gene_pane

0x91d4,	// (0x0000bcc6) ai_links_pane_ParamLimits

0x91d4,	// (0x0000bcc6) ai_links_pane

0x91ec,	// (0x0000bcde) indicator_pane_cp1_ParamLimits

0x91ec,	// (0x0000bcde) indicator_pane_cp1

0x91fb,	// (0x0000bced) main_pane_idle_g1_cp_ParamLimits

0x91fb,	// (0x0000bced) main_pane_idle_g1_cp

0x9213,	// (0x0000bd05) popup_ai_links_title_window

0x921c,	// (0x0000bd0e) soft_indicator_pane_cp1_ParamLimits

0x921c,	// (0x0000bd0e) soft_indicator_pane_cp1

0x1fec,	// (0x00004ade) ai_links_pane_g1

0x1ff5,	// (0x00004ae7) grid_ai_links_pane

0xb4e7,	// (0x0000dfd9) ai_gene_pane_1

0x1fda,	// (0x00004acc) ai_gene_pane_2

0x1fe3,	// (0x00004ad5) list_highlight_pane_cp4

0xb4c3,	// (0x0000dfb5) cell_ai_link_pane_ParamLimits

0xb4c3,	// (0x0000dfb5) cell_ai_link_pane

0x1fab,	// (0x00004a9d) cell_ai_link_pane_g1

0xe42f,	// (0x00010f21) cell_ai_link_pane_g2

0x0001,

0xf8d2,	// (0x000123c4) cell_ai_link_pane_g

0xe168,	// (0x00010c5a) grid_highlight_cp2

0xe168,	// (0x00010c5a) bg_popup_sub_pane_cp1

0xe319,	// (0x00010e0b) popup_ai_links_title_window_t1

0x1efb,	// (0x000049ed) ai_gene_pane_1_g1_ParamLimits

0x1efb,	// (0x000049ed) ai_gene_pane_1_g1

0x1f07,	// (0x000049f9) ai_gene_pane_1_g2_ParamLimits

0x1f07,	// (0x000049f9) ai_gene_pane_1_g2

0x0001,

0xf8c8,	// (0x000123ba) ai_gene_pane_1_g_ParamLimits

0xf8c8,	// (0x000123ba) ai_gene_pane_1_g

0x1f14,	// (0x00004a06) ai_gene_pane_1_t1_ParamLimits

0x1f14,	// (0x00004a06) ai_gene_pane_1_t1

0x1f48,	// (0x00004a3a) grid_ai_soft_ind_pane

0x1ee6,	// (0x000049d8) ai_gene_pane_2_t1_ParamLimits

0x1ee6,	// (0x000049d8) ai_gene_pane_2_t1

0x9230,	// (0x0000bd22) main_pane_empty_t1_ParamLimits

0x9230,	// (0x0000bd22) main_pane_empty_t1

0x9248,	// (0x0000bd3a) main_pane_empty_t2_ParamLimits

0x9248,	// (0x0000bd3a) main_pane_empty_t2

0x925d,	// (0x0000bd4f) main_pane_empty_t3_ParamLimits

0x925d,	// (0x0000bd4f) main_pane_empty_t3

0x926f,	// (0x0000bd61) main_pane_empty_t4_ParamLimits

0x926f,	// (0x0000bd61) main_pane_empty_t4

0x9281,	// (0x0000bd73) main_pane_empty_t5_ParamLimits

0x9281,	// (0x0000bd73) main_pane_empty_t5

0x0004,

0xf54f,	// (0x00012041) main_pane_empty_t_ParamLimits

0xf54f,	// (0x00012041) main_pane_empty_t

0xe751,	// (0x00011243) bg_popup_window_pane_ParamLimits

0xe751,	// (0x00011243) bg_popup_window_pane

0xb43d,	// (0x0000df2f) find_popup_pane_cp2_ParamLimits

0xb43d,	// (0x0000df2f) find_popup_pane_cp2

0x1c62,	// (0x00004754) heading_pane_ParamLimits

0x1c62,	// (0x00004754) heading_pane

0xe168,	// (0x00010c5a) bg_popup_sub_pane

0xb3b6,	// (0x0000dea8) bg_popup_window_pane_g1_ParamLimits

0xb3b6,	// (0x0000dea8) bg_popup_window_pane_g1

0xb3c5,	// (0x0000deb7) bg_popup_window_pane_g2_ParamLimits

0xb3c5,	// (0x0000deb7) bg_popup_window_pane_g2

0xb3d1,	// (0x0000dec3) bg_popup_window_pane_g3_ParamLimits

0xb3d1,	// (0x0000dec3) bg_popup_window_pane_g3

0xb3dd,	// (0x0000decf) bg_popup_window_pane_g4_ParamLimits

0xb3dd,	// (0x0000decf) bg_popup_window_pane_g4

0xb3ec,	// (0x0000dede) bg_popup_window_pane_g5_ParamLimits

0xb3ec,	// (0x0000dede) bg_popup_window_pane_g5

0xb3fc,	// (0x0000deee) bg_popup_window_pane_g6_ParamLimits

0xb3fc,	// (0x0000deee) bg_popup_window_pane_g6

0xb408,	// (0x0000defa) bg_popup_window_pane_g7_ParamLimits

0xb408,	// (0x0000defa) bg_popup_window_pane_g7

0xb417,	// (0x0000df09) bg_popup_window_pane_g8_ParamLimits

0xb417,	// (0x0000df09) bg_popup_window_pane_g8

0xb426,	// (0x0000df18) bg_popup_window_pane_g9_ParamLimits

0xb426,	// (0x0000df18) bg_popup_window_pane_g9

0x1c2b,	// (0x0000471d) bg_popup_window_pane_g10_ParamLimits

0x1c2b,	// (0x0000471d) bg_popup_window_pane_g10

0x0009,

0xf890,	// (0x00012382) bg_popup_window_pane_g_ParamLimits

0xf890,	// (0x00012382) bg_popup_window_pane_g

0x1b54,	// (0x00004646) bg_popup_heading_pane_ParamLimits

0x1b54,	// (0x00004646) bg_popup_heading_pane

0x27ce,	// (0x000052c0) tabs_4_passive_pane_cp_srt_ParamLimits

0x27ce,	// (0x000052c0) tabs_4_passive_pane_cp_srt

0x27e0,	// (0x000052d2) tabs_4_passive_pane_srt_ParamLimits

0x1b68,	// (0x0000465a) heading_pane_g2

0x27e0,	// (0x000052d2) tabs_4_passive_pane_srt

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp3_srt_ParamLimits

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp3_srt

0x1b70,	// (0x00004662) heading_pane_t1_ParamLimits

0x1b70,	// (0x00004662) heading_pane_t1

0x1b87,	// (0x00004679) heading_pane_t2_ParamLimits

0x1b87,	// (0x00004679) heading_pane_t2

0x0001,

0xf88b,	// (0x0001237d) heading_pane_t_ParamLimits

0xf88b,	// (0x0001237d) heading_pane_t

0x1538,	// (0x0000402a) bg_popup_heading_pane_g1

0x15e7,	// (0x000040d9) bg_popup_heading_pane_g2

0x15f1,	// (0x000040e3) bg_popup_heading_pane_g3

0x15fb,	// (0x000040ed) bg_popup_heading_pane_g4

0x1605,	// (0x000040f7) bg_popup_heading_pane_g5

0x160f,	// (0x00004101) bg_popup_heading_pane_g6

0x1617,	// (0x00004109) bg_popup_heading_pane_g7

0x161f,	// (0x00004111) bg_popup_heading_pane_g8

0x1629,	// (0x0000411b) bg_popup_heading_pane_g9

0x0008,

0xf847,	// (0x00012339) bg_popup_heading_pane_g

0x0b24,	// (0x00003616) bg_popup_sub_pane_g1

0x0b2c,	// (0x0000361e) bg_popup_sub_pane_g2

0x0b34,	// (0x00003626) bg_popup_sub_pane_g3

0x0b3c,	// (0x0000362e) bg_popup_sub_pane_g4

0x0b44,	// (0x00003636) bg_popup_sub_pane_g5

0x0b4c,	// (0x0000363e) bg_popup_sub_pane_g6

0x0b54,	// (0x00003646) bg_popup_sub_pane_g7

0x0b5c,	// (0x0000364e) bg_popup_sub_pane_g8

0x0b64,	// (0x00003656) bg_popup_sub_pane_g9

0x0008,

0xf821,	// (0x00012313) bg_popup_sub_pane_g

0xe1d6,	// (0x00010cc8) bg_popup_window_pane_cp5_ParamLimits

0xe1d6,	// (0x00010cc8) bg_popup_window_pane_cp5

0xe336,	// (0x00010e28) popup_note_window_g1_ParamLimits

0xe336,	// (0x00010e28) popup_note_window_g1

0xe342,	// (0x00010e34) popup_note_window_t1_ParamLimits

0xe342,	// (0x00010e34) popup_note_window_t1

0xe358,	// (0x00010e4a) popup_note_window_t2_ParamLimits

0xe358,	// (0x00010e4a) popup_note_window_t2

0xe36e,	// (0x00010e60) popup_note_window_t3_ParamLimits

0xe36e,	// (0x00010e60) popup_note_window_t3

0xe384,	// (0x00010e76) popup_note_window_t4_ParamLimits

0xe384,	// (0x00010e76) popup_note_window_t4

0xe3ac,	// (0x00010e9e) popup_note_window_t5_ParamLimits

0xe3ac,	// (0x00010e9e) popup_note_window_t5

0x0004,

0xf55a,	// (0x0001204c) popup_note_window_t_ParamLimits

0xf55a,	// (0x0001204c) popup_note_window_t

0xe3d0,	// (0x00010ec2) bg_popup_window_pane_cp6_ParamLimits

0xe3d0,	// (0x00010ec2) bg_popup_window_pane_cp6

0x14b4,	// (0x00003fa6) popup_note_image_window_g1_ParamLimits

0x14b4,	// (0x00003fa6) popup_note_image_window_g1

0xb25b,	// (0x0000dd4d) popup_note_image_window_g2_ParamLimits

0xb25b,	// (0x0000dd4d) popup_note_image_window_g2

0x0001,

0xf815,	// (0x00012307) popup_note_image_window_g_ParamLimits

0xf815,	// (0x00012307) popup_note_image_window_g

0x14d9,	// (0x00003fcb) popup_note_image_window_t1_ParamLimits

0x14d9,	// (0x00003fcb) popup_note_image_window_t1

0x14f2,	// (0x00003fe4) popup_note_image_window_t2_ParamLimits

0x14f2,	// (0x00003fe4) popup_note_image_window_t2

0x150b,	// (0x00003ffd) popup_note_image_window_t3_ParamLimits

0x150b,	// (0x00003ffd) popup_note_image_window_t3

0x0002,

0xf81a,	// (0x0001230c) popup_note_image_window_t_ParamLimits

0xf81a,	// (0x0001230c) popup_note_image_window_t

0x137d,	// (0x00003e6f) bg_popup_window_pane_cp7_ParamLimits

0x137d,	// (0x00003e6f) bg_popup_window_pane_cp7

0x13ad,	// (0x00003e9f) popup_note_wait_window_g1_ParamLimits

0x13ad,	// (0x00003e9f) popup_note_wait_window_g1

0x13b9,	// (0x00003eab) popup_note_wait_window_g2_ParamLimits

0x13b9,	// (0x00003eab) popup_note_wait_window_g2

0x0002,

0xf803,	// (0x000122f5) popup_note_wait_window_g_ParamLimits

0xf803,	// (0x000122f5) popup_note_wait_window_g

0x13d1,	// (0x00003ec3) popup_note_wait_window_t1_ParamLimits

0x13d1,	// (0x00003ec3) popup_note_wait_window_t1

0xb1fc,	// (0x0000dcee) popup_note_wait_window_t2_ParamLimits

0xb1fc,	// (0x0000dcee) popup_note_wait_window_t2

0xb219,	// (0x0000dd0b) popup_note_wait_window_t3_ParamLimits

0xb219,	// (0x0000dd0b) popup_note_wait_window_t3

0xb22c,	// (0x0000dd1e) popup_note_wait_window_t4_ParamLimits

0xb22c,	// (0x0000dd1e) popup_note_wait_window_t4

0x0004,

0xf80a,	// (0x000122fc) popup_note_wait_window_t_ParamLimits

0xf80a,	// (0x000122fc) popup_note_wait_window_t

0x144d,	// (0x00003f3f) wait_bar_pane_ParamLimits

0x144d,	// (0x00003f3f) wait_bar_pane

0xe168,	// (0x00010c5a) wait_anim_pane

0xe168,	// (0x00010c5a) wait_border_pane

0xdfef,	// (0x00010ae1) wait_anim_pane_g1

0xdfef,	// (0x00010ae1) wait_anim_pane_g2

0x0001,

0xf6ca,	// (0x000121bc) wait_anim_pane_g

0x1329,	// (0x00003e1b) wait_border_pane_g1

0x1334,	// (0x00003e26) wait_border_pane_g2

0x133d,	// (0x00003e2f) wait_border_pane_g3

0x0002,

0xf7fc,	// (0x000122ee) wait_border_pane_g

0x1194,	// (0x00003c86) bg_popup_window_pane_cp16_ParamLimits

0x1194,	// (0x00003c86) bg_popup_window_pane_cp16

0xb1ac,	// (0x0000dc9e) indicator_popup_pane_cp4_ParamLimits

0xb1ac,	// (0x0000dc9e) indicator_popup_pane_cp4

0x12a8,	// (0x00003d9a) popup_query_data_window_t1_ParamLimits

0x12a8,	// (0x00003d9a) popup_query_data_window_t1

0x12ba,	// (0x00003dac) popup_query_data_window_t2_ParamLimits

0x12ba,	// (0x00003dac) popup_query_data_window_t2

0x12d3,	// (0x00003dc5) popup_query_data_window_t3_ParamLimits

0x12d3,	// (0x00003dc5) popup_query_data_window_t3

0x0002,

0xf7f5,	// (0x000122e7) popup_query_data_window_t_ParamLimits

0xf7f5,	// (0x000122e7) popup_query_data_window_t

0xb1c0,	// (0x0000dcb2) query_popup_data_pane_ParamLimits

0xb1c0,	// (0x0000dcb2) query_popup_data_pane

0xb1d4,	// (0x0000dcc6) query_popup_data_pane_cp1_ParamLimits

0xb1d4,	// (0x0000dcc6) query_popup_data_pane_cp1

0x1194,	// (0x00003c86) bg_popup_window_pane_cp10_ParamLimits

0x1194,	// (0x00003c86) bg_popup_window_pane_cp10

0xb127,	// (0x0000dc19) indicator_popup_pane_ParamLimits

0xb127,	// (0x0000dc19) indicator_popup_pane

0xb149,	// (0x0000dc3b) popup_query_code_window_t1_ParamLimits

0xb149,	// (0x0000dc3b) popup_query_code_window_t1

0xb163,	// (0x0000dc55) popup_query_code_window_t2_ParamLimits

0xb163,	// (0x0000dc55) popup_query_code_window_t2

0x124b,	// (0x00003d3d) popup_query_code_window_t3_ParamLimits

0x124b,	// (0x00003d3d) popup_query_code_window_t3

0x0002,

0xf7ee,	// (0x000122e0) popup_query_code_window_t_ParamLimits

0xf7ee,	// (0x000122e0) popup_query_code_window_t

0x127a,	// (0x00003d6c) query_popup_pane_ParamLimits

0x127a,	// (0x00003d6c) query_popup_pane

0xe3d0,	// (0x00010ec2) bg_popup_window_pane_cp15_ParamLimits

0xe3d0,	// (0x00010ec2) bg_popup_window_pane_cp15

0x92b9,	// (0x0000bdab) indicator_popup_pane_cp1_ParamLimits

0x92b9,	// (0x0000bdab) indicator_popup_pane_cp1

0x92cc,	// (0x0000bdbe) indicator_popup_pane_cp2_ParamLimits

0x92cc,	// (0x0000bdbe) indicator_popup_pane_cp2

0x92df,	// (0x0000bdd1) popup_query_data_code_window_g1_ParamLimits

0x92df,	// (0x0000bdd1) popup_query_data_code_window_g1

0xe3ee,	// (0x00010ee0) popup_query_data_code_window_t1_ParamLimits

0xe3ee,	// (0x00010ee0) popup_query_data_code_window_t1

0xe400,	// (0x00010ef2) popup_query_data_code_window_t2_ParamLimits

0xe400,	// (0x00010ef2) popup_query_data_code_window_t2

0x92f2,	// (0x0000bde4) popup_query_data_code_window_t3_ParamLimits

0x92f2,	// (0x0000bde4) popup_query_data_code_window_t3

0x9308,	// (0x0000bdfa) popup_query_data_code_window_t4_ParamLimits

0x9308,	// (0x0000bdfa) popup_query_data_code_window_t4

0x0003,

0xf565,	// (0x00012057) popup_query_data_code_window_t_ParamLimits

0xf565,	// (0x00012057) popup_query_data_code_window_t

0xf12b,	// (0x00011c1d) list_single_midp_graphic_pane_g3

0x9320,	// (0x0000be12) query_popup_data_pane_cp2_ParamLimits

0x9333,	// (0x0000be25) query_popup_pane_cp2_ParamLimits

0x9333,	// (0x0000be25) query_popup_pane_cp2

0xe168,	// (0x00010c5a) bg_popup_window_pane_cp11

0x1178,	// (0x00003c6a) heading_pane_cp5

0x1180,	// (0x00003c72) listscroll_popup_info_pane

0xe168,	// (0x00010c5a) input_focus_pane_cp3

0xe412,	// (0x00010f04) query_popup_pane_t1

0xe420,	// (0x00010f12) list_popup_info_pane_ParamLimits

0xe420,	// (0x00010f12) list_popup_info_pane

0xe42f,	// (0x00010f21) listscroll_popup_info_pane_g1

0xe437,	// (0x00010f29) scroll_pane_cp7

0x9346,	// (0x0000be38) popup_info_list_pane_t1_ParamLimits

0x9346,	// (0x0000be38) popup_info_list_pane_t1

0x9360,	// (0x0000be52) popup_info_list_pane_t2_ParamLimits

0x9360,	// (0x0000be52) popup_info_list_pane_t2

0x0001,

0xf56e,	// (0x00012060) popup_info_list_pane_t_ParamLimits

0xf56e,	// (0x00012060) popup_info_list_pane_t

0xe168,	// (0x00010c5a) bg_popup_window_pane_cp12

0xba32,	// (0x0000e524) find_popup_pane

0xe1e4,	// (0x00010cd6) bg_popup_window_pane_cp3

0xe441,	// (0x00010f33) heading_pane_cp3

0xe450,	// (0x00010f42) listscroll_popup_graphic_pane

0xe168,	// (0x00010c5a) bg_popup_window_pane_cp4

0x93ca,	// (0x0000bebc) heading_pane_cp4

0xe460,	// (0x00010f52) listscroll_popup_colour_pane

0x93d4,	// (0x0000bec6) cell_large_graphic_colour_none_popup_pane_ParamLimits

0x93d4,	// (0x0000bec6) cell_large_graphic_colour_none_popup_pane

0x93e8,	// (0x0000beda) grid_large_graphic_colour_popup_pane_ParamLimits

0x93e8,	// (0x0000beda) grid_large_graphic_colour_popup_pane

0x940c,	// (0x0000befe) listscroll_popup_colour_pane_g1_ParamLimits

0x940c,	// (0x0000befe) listscroll_popup_colour_pane_g1

0x9423,	// (0x0000bf15) listscroll_popup_colour_pane_g2_ParamLimits

0x9423,	// (0x0000bf15) listscroll_popup_colour_pane_g2

0x943a,	// (0x0000bf2c) listscroll_popup_colour_pane_g3_ParamLimits

0x943a,	// (0x0000bf2c) listscroll_popup_colour_pane_g3

0x944a,	// (0x0000bf3c) listscroll_popup_colour_pane_g4_ParamLimits

0x944a,	// (0x0000bf3c) listscroll_popup_colour_pane_g4

0x0003,

0xf573,	// (0x00012065) listscroll_popup_colour_pane_g_ParamLimits

0xf573,	// (0x00012065) listscroll_popup_colour_pane_g

0xe468,	// (0x00010f5a) scroll_pane_cp6_ParamLimits

0xe468,	// (0x00010f5a) scroll_pane_cp6

0x945a,	// (0x0000bf4c) cell_large_graphic_colour_popup_pane_ParamLimits

0x945a,	// (0x0000bf4c) cell_large_graphic_colour_popup_pane

0x9479,	// (0x0000bf6b) cell_large_graphic_colour_none_popup_pane_t1

0xe168,	// (0x00010c5a) grid_highlight_pane_cp5

0xe47a,	// (0x00010f6c) cell_large_graphic_colour_popup_pane_g1

0xe482,	// (0x00010f74) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf57c,	// (0x0001206e) cell_large_graphic_colour_popup_pane_g

0xe48a,	// (0x00010f7c) cell_large_graphic_colour_popup_pane_g2_copy1

0xe493,	// (0x00010f85) grid_highlight_pane_cp4

0xe49b,	// (0x00010f8d) bg_popup_window_pane_cp8_ParamLimits

0xe49b,	// (0x00010f8d) bg_popup_window_pane_cp8

0x9488,	// (0x0000bf7a) popup_snote_single_text_window_g1_ParamLimits

0x9488,	// (0x0000bf7a) popup_snote_single_text_window_g1

0x949a,	// (0x0000bf8c) popup_snote_single_text_window_t1_ParamLimits

0x949a,	// (0x0000bf8c) popup_snote_single_text_window_t1

0x94ad,	// (0x0000bf9f) popup_snote_single_text_window_t2_ParamLimits

0x94ad,	// (0x0000bf9f) popup_snote_single_text_window_t2

0x94c0,	// (0x0000bfb2) popup_snote_single_text_window_t3_ParamLimits

0x94c0,	// (0x0000bfb2) popup_snote_single_text_window_t3

0x94f9,	// (0x0000bfeb) popup_snote_single_text_window_t4_ParamLimits

0x94f9,	// (0x0000bfeb) popup_snote_single_text_window_t4

0x952d,	// (0x0000c01f) popup_snote_single_text_window_t5_ParamLimits

0x952d,	// (0x0000c01f) popup_snote_single_text_window_t5

0x0004,

0xf581,	// (0x00012073) popup_snote_single_text_window_t_ParamLimits

0xf581,	// (0x00012073) popup_snote_single_text_window_t

0xe4b6,	// (0x00010fa8) bg_popup_window_pane_cp9_ParamLimits

0xe4b6,	// (0x00010fa8) bg_popup_window_pane_cp9

0x9488,	// (0x0000bf7a) popup_snote_single_graphic_window_g1_ParamLimits

0x9488,	// (0x0000bf7a) popup_snote_single_graphic_window_g1

0xe4c4,	// (0x00010fb6) popup_snote_single_graphic_window_g2_ParamLimits

0xe4c4,	// (0x00010fb6) popup_snote_single_graphic_window_g2

0x0001,

0xf58c,	// (0x0001207e) popup_snote_single_graphic_window_g_ParamLimits

0xf58c,	// (0x0001207e) popup_snote_single_graphic_window_g

0xe4d0,	// (0x00010fc2) popup_snote_single_graphic_window_t1_ParamLimits

0xe4d0,	// (0x00010fc2) popup_snote_single_graphic_window_t1

0xe4e3,	// (0x00010fd5) popup_snote_single_graphic_window_t2_ParamLimits

0xe4e3,	// (0x00010fd5) popup_snote_single_graphic_window_t2

0x94c0,	// (0x0000bfb2) popup_snote_single_graphic_window_t3_ParamLimits

0x94c0,	// (0x0000bfb2) popup_snote_single_graphic_window_t3

0x94f9,	// (0x0000bfeb) popup_snote_single_graphic_window_t4_ParamLimits

0x94f9,	// (0x0000bfeb) popup_snote_single_graphic_window_t4

0x955c,	// (0x0000c04e) popup_snote_single_graphic_window_t5_ParamLimits

0x955c,	// (0x0000c04e) popup_snote_single_graphic_window_t5

0x0004,

0xf591,	// (0x00012083) popup_snote_single_graphic_window_t_ParamLimits

0xf591,	// (0x00012083) popup_snote_single_graphic_window_t

0x274c,	// (0x0000523e) grid_graphic_popup_pane_ParamLimits

0x274c,	// (0x0000523e) grid_graphic_popup_pane

0x2776,	// (0x00005268) listscroll_popup_graphic_pane_g1_ParamLimits

0x2776,	// (0x00005268) listscroll_popup_graphic_pane_g1

0xb97d,	// (0x0000e46f) listscroll_popup_graphic_pane_g2_ParamLimits

0xb97d,	// (0x0000e46f) listscroll_popup_graphic_pane_g2

0x0001,

0xf96b,	// (0x0001245d) listscroll_popup_graphic_pane_g_ParamLimits

0xf96b,	// (0x0001245d) listscroll_popup_graphic_pane_g

0x279e,	// (0x00005290) scroll_pane_cp5

0xb93c,	// (0x0000e42e) cell_graphic_popup_pane_ParamLimits

0xb93c,	// (0x0000e42e) cell_graphic_popup_pane

0x26c3,	// (0x000051b5) cell_graphic_popup_pane_g1

0x26cb,	// (0x000051bd) cell_graphic_popup_pane_g2

0xe48a,	// (0x00010f7c) cell_graphic_popup_pane_g3

0x0002,

0xf964,	// (0x00012456) cell_graphic_popup_pane_g

0xb92e,	// (0x0000e420) cell_graphic_popup_pane_t2

0xe493,	// (0x00010f85) grid_highlight_pane_cp3

0xe508,	// (0x00010ffa) list_gen_pane_ParamLimits

0xe508,	// (0x00010ffa) list_gen_pane

0xe530,	// (0x00011022) scroll_pane

0xb898,	// (0x0000e38a) bg_list_pane_g1_ParamLimits

0xb898,	// (0x0000e38a) bg_list_pane_g1

0xb8b3,	// (0x0000e3a5) bg_list_pane_g2_ParamLimits

0xb8b3,	// (0x0000e3a5) bg_list_pane_g2

0xb8c6,	// (0x0000e3b8) bg_list_pane_g3_ParamLimits

0xb8c6,	// (0x0000e3b8) bg_list_pane_g3

0xb8d8,	// (0x0000e3ca) bg_list_pane_g4_ParamLimits

0xb8d8,	// (0x0000e3ca) bg_list_pane_g4

0xb8ea,	// (0x0000e3dc) bg_list_pane_g5_ParamLimits

0xb8ea,	// (0x0000e3dc) bg_list_pane_g5

0x0004,

0xf959,	// (0x0001244b) bg_list_pane_g_ParamLimits

0xf959,	// (0x0001244b) bg_list_pane_g

0xb83b,	// (0x0000e32d) list_double2_graphic_large_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double2_graphic_large_graphic_pane

0xb83b,	// (0x0000e32d) list_double2_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double2_graphic_pane

0xb83b,	// (0x0000e32d) list_double2_large_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double2_large_graphic_pane

0xb84e,	// (0x0000e340) list_double2_pane_ParamLimits

0xb84e,	// (0x0000e340) list_double2_pane

0xb83b,	// (0x0000e32d) list_double_graphic_heading_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_graphic_heading_pane

0xb83b,	// (0x0000e32d) list_double_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_graphic_pane

0xb83b,	// (0x0000e32d) list_double_heading_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_heading_pane

0xb83b,	// (0x0000e32d) list_double_large_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_large_graphic_pane

0xb83b,	// (0x0000e32d) list_double_number_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_number_pane

0xb83b,	// (0x0000e32d) list_double_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_pane

0xb83b,	// (0x0000e32d) list_double_time_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_double_time_pane

0xb83b,	// (0x0000e32d) list_setting_number_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_setting_number_pane

0xb83b,	// (0x0000e32d) list_setting_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_setting_pane

0x9b37,	// (0x0000c629) list_single_2graphic_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_2graphic_pane

0x9b37,	// (0x0000c629) list_single_graphic_heading_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_graphic_heading_pane

0x9b37,	// (0x0000c629) list_single_graphic_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_graphic_pane

0x9b37,	// (0x0000c629) list_single_heading_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_heading_pane

0xb83b,	// (0x0000e32d) list_single_large_graphic_pane_ParamLimits

0xb83b,	// (0x0000e32d) list_single_large_graphic_pane

0x9b37,	// (0x0000c629) list_single_number_heading_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_number_heading_pane

0x9b37,	// (0x0000c629) list_single_number_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_number_pane

0x9b37,	// (0x0000c629) list_single_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_pane

0xe168,	// (0x00010c5a) list_highlight_pane_cp1

0xf0c2,	// (0x00011bb4) list_single_pane_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_pane_g1

0x09be,	// (0x000034b0) list_single_pane_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_pane_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_pane_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_pane_g

0x4870,	// (0x00007362) list_single_pane_t1_ParamLimits

0x4870,	// (0x00007362) list_single_pane_t1

0xf0c2,	// (0x00011bb4) list_single_number_pane_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_number_pane_g1

0x09be,	// (0x000034b0) list_single_number_pane_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_number_pane_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_number_pane_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_number_pane_g

0x0ab2,	// (0x000035a4) list_single_number_pane_t1_ParamLimits

0x0ab2,	// (0x000035a4) list_single_number_pane_t1

0xb5db,	// (0x0000e0cd) list_single_number_pane_t2_ParamLimits

0xb5db,	// (0x0000e0cd) list_single_number_pane_t2

0x0001,

0xf91a,	// (0x0001240c) list_single_number_pane_t_ParamLimits

0xf91a,	// (0x0001240c) list_single_number_pane_t

0x0aa6,	// (0x00003598) list_single_graphic_pane_g1_ParamLimits

0x0aa6,	// (0x00003598) list_single_graphic_pane_g1

0xf0c2,	// (0x00011bb4) list_single_graphic_pane_g2_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_graphic_pane_g2

0x09be,	// (0x000034b0) list_single_graphic_pane_g3_ParamLimits

0x09be,	// (0x000034b0) list_single_graphic_pane_g3

0x0002,

0xf59c,	// (0x0001208e) list_single_graphic_pane_g_ParamLimits

0xf59c,	// (0x0001208e) list_single_graphic_pane_g

0x0ab2,	// (0x000035a4) list_single_graphic_pane_t1_ParamLimits

0x0ab2,	// (0x000035a4) list_single_graphic_pane_t1

0xf0c2,	// (0x00011bb4) list_single_heading_pane_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_heading_pane_g1

0x09be,	// (0x000034b0) list_single_heading_pane_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_heading_pane_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_heading_pane_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_heading_pane_g

0x9595,	// (0x0000c087) list_single_heading_pane_t1_ParamLimits

0x9595,	// (0x0000c087) list_single_heading_pane_t1

0x95ab,	// (0x0000c09d) list_single_heading_pane_t2_ParamLimits

0x95ab,	// (0x0000c09d) list_single_heading_pane_t2

0x0001,

0xf5a8,	// (0x0001209a) list_single_heading_pane_t_ParamLimits

0xf5a8,	// (0x0001209a) list_single_heading_pane_t

0xf0c2,	// (0x00011bb4) list_single_number_heading_pane_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_number_heading_pane_g1

0x09be,	// (0x000034b0) list_single_number_heading_pane_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_number_heading_pane_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_number_heading_pane_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_number_heading_pane_g

0x9595,	// (0x0000c087) list_single_number_heading_pane_t1_ParamLimits

0x9595,	// (0x0000c087) list_single_number_heading_pane_t1

0x95bd,	// (0x0000c0af) list_single_number_heading_pane_t2_ParamLimits

0x95bd,	// (0x0000c0af) list_single_number_heading_pane_t2

0x95cf,	// (0x0000c0c1) list_single_number_heading_pane_t3_ParamLimits

0x95cf,	// (0x0000c0c1) list_single_number_heading_pane_t3

0x0002,

0xf5ad,	// (0x0001209f) list_single_number_heading_pane_t_ParamLimits

0xf5ad,	// (0x0001209f) list_single_number_heading_pane_t

0x95e1,	// (0x0000c0d3) list_single_graphic_heading_pane_g1_ParamLimits

0x95e1,	// (0x0000c0d3) list_single_graphic_heading_pane_g1

0x95ed,	// (0x0000c0df) list_single_graphic_heading_pane_g4_ParamLimits

0x95ed,	// (0x0000c0df) list_single_graphic_heading_pane_g4

0x09be,	// (0x000034b0) list_single_graphic_heading_pane_g5_ParamLimits

0x09be,	// (0x000034b0) list_single_graphic_heading_pane_g5

0x0002,

0xf5b4,	// (0x000120a6) list_single_graphic_heading_pane_g_ParamLimits

0xf5b4,	// (0x000120a6) list_single_graphic_heading_pane_g

0x9595,	// (0x0000c087) list_single_graphic_heading_pane_t1_ParamLimits

0x9595,	// (0x0000c087) list_single_graphic_heading_pane_t1

0x95fe,	// (0x0000c0f0) list_single_graphic_heading_pane_t2_ParamLimits

0x95fe,	// (0x0000c0f0) list_single_graphic_heading_pane_t2

0x0001,

0xf5bb,	// (0x000120ad) list_single_graphic_heading_pane_t_ParamLimits

0xf5bb,	// (0x000120ad) list_single_graphic_heading_pane_t

0x2f2b,	// (0x00005a1d) list_single_large_graphic_pane_g1_ParamLimits

0x2f2b,	// (0x00005a1d) list_single_large_graphic_pane_g1

0x2f37,	// (0x00005a29) list_single_large_graphic_pane_g2_ParamLimits

0x2f37,	// (0x00005a29) list_single_large_graphic_pane_g2

0x2f43,	// (0x00005a35) list_single_large_graphic_pane_g3_ParamLimits

0x2f43,	// (0x00005a35) list_single_large_graphic_pane_g3

0x0002,

0xf5c0,	// (0x000120b2) list_single_large_graphic_pane_g_ParamLimits

0xf5c0,	// (0x000120b2) list_single_large_graphic_pane_g

0x1334,	// (0x00003e26) wait_border_pane_g2_copy1

0x9610,	// (0x0000c102) list_single_large_graphic_pane_g4_cp2

0x2f4f,	// (0x00005a41) list_single_large_graphic_pane_t1_ParamLimits

0x2f4f,	// (0x00005a41) list_single_large_graphic_pane_t1

0xf0ce,	// (0x00011bc0) list_double_pane_g1_ParamLimits

0xf0ce,	// (0x00011bc0) list_double_pane_g1

0xe564,	// (0x00011056) list_double_pane_g2_ParamLimits

0xe564,	// (0x00011056) list_double_pane_g2

0x0001,

0xf5c7,	// (0x000120b9) list_double_pane_g_ParamLimits

0xf5c7,	// (0x000120b9) list_double_pane_g

0x9618,	// (0x0000c10a) list_double_pane_t1_ParamLimits

0x9618,	// (0x0000c10a) list_double_pane_t1

0x962e,	// (0x0000c120) list_double_pane_t2_ParamLimits

0x962e,	// (0x0000c120) list_double_pane_t2

0x0001,

0xf5cc,	// (0x000120be) list_double_pane_t_ParamLimits

0xf5cc,	// (0x000120be) list_double_pane_t

0x9640,	// (0x0000c132) list_double2_pane_g1_ParamLimits

0x9640,	// (0x0000c132) list_double2_pane_g1

0x9651,	// (0x0000c143) list_double2_pane_g2_ParamLimits

0x9651,	// (0x0000c143) list_double2_pane_g2

0x0001,

0xf5d1,	// (0x000120c3) list_double2_pane_g_ParamLimits

0xf5d1,	// (0x000120c3) list_double2_pane_g

0x965d,	// (0x0000c14f) list_double2_pane_t1_ParamLimits

0x965d,	// (0x0000c14f) list_double2_pane_t1

0x9673,	// (0x0000c165) list_double2_pane_t2_ParamLimits

0x9673,	// (0x0000c165) list_double2_pane_t2

0x0001,

0xf5d6,	// (0x000120c8) list_double2_pane_t_ParamLimits

0xf5d6,	// (0x000120c8) list_double2_pane_t

0xf0ce,	// (0x00011bc0) list_double_number_pane_g1_ParamLimits

0xf0ce,	// (0x00011bc0) list_double_number_pane_g1

0xe564,	// (0x00011056) list_double_number_pane_g2_ParamLimits

0xe564,	// (0x00011056) list_double_number_pane_g2

0x0001,

0xf5c7,	// (0x000120b9) list_double_number_pane_g_ParamLimits

0xf5c7,	// (0x000120b9) list_double_number_pane_g

0x9685,	// (0x0000c177) list_double_number_pane_t1_ParamLimits

0x9685,	// (0x0000c177) list_double_number_pane_t1

0x9697,	// (0x0000c189) list_double_number_pane_t2_ParamLimits

0x9697,	// (0x0000c189) list_double_number_pane_t2

0x96ad,	// (0x0000c19f) list_double_number_pane_t3_ParamLimits

0x96ad,	// (0x0000c19f) list_double_number_pane_t3

0x0002,

0xf5db,	// (0x000120cd) list_double_number_pane_t_ParamLimits

0xf5db,	// (0x000120cd) list_double_number_pane_t

0x96bf,	// (0x0000c1b1) list_double_graphic_pane_g1_ParamLimits

0x96bf,	// (0x0000c1b1) list_double_graphic_pane_g1

0x96cb,	// (0x0000c1bd) list_double_graphic_pane_g2_ParamLimits

0x96cb,	// (0x0000c1bd) list_double_graphic_pane_g2

0x96da,	// (0x0000c1cc) list_double_graphic_pane_g3_ParamLimits

0x96da,	// (0x0000c1cc) list_double_graphic_pane_g3

0x0003,

0xf5e2,	// (0x000120d4) list_double_graphic_pane_g_ParamLimits

0xf5e2,	// (0x000120d4) list_double_graphic_pane_g

0x9618,	// (0x0000c10a) list_double_graphic_pane_t1_ParamLimits

0x9618,	// (0x0000c10a) list_double_graphic_pane_t1

0x962e,	// (0x0000c120) list_double_graphic_pane_t2_ParamLimits

0x962e,	// (0x0000c120) list_double_graphic_pane_t2

0x0001,

0xf5cc,	// (0x000120be) list_double_graphic_pane_t_ParamLimits

0xf5cc,	// (0x000120be) list_double_graphic_pane_t

0x96f2,	// (0x0000c1e4) list_double2_graphic_pane_g1_ParamLimits

0x96f2,	// (0x0000c1e4) list_double2_graphic_pane_g1

0x96fe,	// (0x0000c1f0) list_double2_graphic_pane_g2_ParamLimits

0x96fe,	// (0x0000c1f0) list_double2_graphic_pane_g2

0x970a,	// (0x0000c1fc) list_double2_graphic_pane_g3_ParamLimits

0x970a,	// (0x0000c1fc) list_double2_graphic_pane_g3

0x0002,

0xf5eb,	// (0x000120dd) list_double2_graphic_pane_g_ParamLimits

0xf5eb,	// (0x000120dd) list_double2_graphic_pane_g

0x9716,	// (0x0000c208) list_double2_graphic_pane_t1_ParamLimits

0x9716,	// (0x0000c208) list_double2_graphic_pane_t1

0x972c,	// (0x0000c21e) list_double2_graphic_pane_t2_ParamLimits

0x972c,	// (0x0000c21e) list_double2_graphic_pane_t2

0x0001,

0xf5f2,	// (0x000120e4) list_double2_graphic_pane_t_ParamLimits

0xf5f2,	// (0x000120e4) list_double2_graphic_pane_t

0x973e,	// (0x0000c230) list_double_large_graphic_pane_g1_ParamLimits

0x973e,	// (0x0000c230) list_double_large_graphic_pane_g1

0x975d,	// (0x0000c24f) list_double_large_graphic_pane_g2_ParamLimits

0x975d,	// (0x0000c24f) list_double_large_graphic_pane_g2

0xe564,	// (0x00011056) list_double_large_graphic_pane_g3_ParamLimits

0xe564,	// (0x00011056) list_double_large_graphic_pane_g3

0x976e,	// (0x0000c260) list_double_large_graphic_pane_g4_ParamLimits

0x976e,	// (0x0000c260) list_double_large_graphic_pane_g4

0x0004,

0xf5f7,	// (0x000120e9) list_double_large_graphic_pane_g_ParamLimits

0xf5f7,	// (0x000120e9) list_double_large_graphic_pane_g

0x9780,	// (0x0000c272) list_double_large_graphic_pane_t1_ParamLimits

0x9780,	// (0x0000c272) list_double_large_graphic_pane_t1

0x9799,	// (0x0000c28b) list_double_large_graphic_pane_t2_ParamLimits

0x9799,	// (0x0000c28b) list_double_large_graphic_pane_t2

0x0001,

0xf602,	// (0x000120f4) list_double_large_graphic_pane_t_ParamLimits

0xf602,	// (0x000120f4) list_double_large_graphic_pane_t

0x97ab,	// (0x0000c29d) list_double2_large_graphic_pane_g1_ParamLimits

0x97ab,	// (0x0000c29d) list_double2_large_graphic_pane_g1

0x97b7,	// (0x0000c2a9) list_double2_large_graphic_pane_g2_ParamLimits

0x97b7,	// (0x0000c2a9) list_double2_large_graphic_pane_g2

0x970a,	// (0x0000c1fc) list_double2_large_graphic_pane_g3_ParamLimits

0x970a,	// (0x0000c1fc) list_double2_large_graphic_pane_g3

0x0002,

0xf607,	// (0x000120f9) list_double2_large_graphic_pane_g_ParamLimits

0xf607,	// (0x000120f9) list_double2_large_graphic_pane_g

0x9716,	// (0x0000c208) list_double2_large_graphic_pane_t1_ParamLimits

0x9716,	// (0x0000c208) list_double2_large_graphic_pane_t1

0x972c,	// (0x0000c21e) list_double2_large_graphic_pane_t2_ParamLimits

0x972c,	// (0x0000c21e) list_double2_large_graphic_pane_t2

0x0001,

0xf5f2,	// (0x000120e4) list_double2_large_graphic_pane_t_ParamLimits

0xf5f2,	// (0x000120e4) list_double2_large_graphic_pane_t

0x97c8,	// (0x0000c2ba) list_double_heading_pane_g1_ParamLimits

0x97c8,	// (0x0000c2ba) list_double_heading_pane_g1

0x97d9,	// (0x0000c2cb) list_double_heading_pane_g2_ParamLimits

0x97d9,	// (0x0000c2cb) list_double_heading_pane_g2

0x0001,

0xf60e,	// (0x00012100) list_double_heading_pane_g_ParamLimits

0xf60e,	// (0x00012100) list_double_heading_pane_g

0x97e5,	// (0x0000c2d7) list_double_heading_pane_t1_ParamLimits

0x97e5,	// (0x0000c2d7) list_double_heading_pane_t1

0x972c,	// (0x0000c21e) list_double_heading_pane_t2_ParamLimits

0x972c,	// (0x0000c21e) list_double_heading_pane_t2

0x0001,

0xf613,	// (0x00012105) list_double_heading_pane_t_ParamLimits

0xf613,	// (0x00012105) list_double_heading_pane_t

0x97fb,	// (0x0000c2ed) list_double_graphic_heading_pane_g1_ParamLimits

0x97fb,	// (0x0000c2ed) list_double_graphic_heading_pane_g1

0x97c8,	// (0x0000c2ba) list_double_graphic_heading_pane_g2_ParamLimits

0x97c8,	// (0x0000c2ba) list_double_graphic_heading_pane_g2

0x97d9,	// (0x0000c2cb) list_double_graphic_heading_pane_g3_ParamLimits

0x97d9,	// (0x0000c2cb) list_double_graphic_heading_pane_g3

0x0002,

0xf618,	// (0x0001210a) list_double_graphic_heading_pane_g_ParamLimits

0xf618,	// (0x0001210a) list_double_graphic_heading_pane_g

0x97e5,	// (0x0000c2d7) list_double_graphic_heading_pane_t1_ParamLimits

0x97e5,	// (0x0000c2d7) list_double_graphic_heading_pane_t1

0x972c,	// (0x0000c21e) list_double_graphic_heading_pane_t2_ParamLimits

0x972c,	// (0x0000c21e) list_double_graphic_heading_pane_t2

0x0001,

0xf613,	// (0x00012105) list_double_graphic_heading_pane_t_ParamLimits

0xf613,	// (0x00012105) list_double_graphic_heading_pane_t

0x975d,	// (0x0000c24f) list_double_time_pane_g1_ParamLimits

0x975d,	// (0x0000c24f) list_double_time_pane_g1

0xe564,	// (0x00011056) list_double_time_pane_g2_ParamLimits

0xe564,	// (0x00011056) list_double_time_pane_g2

0x0001,

0xf61f,	// (0x00012111) list_double_time_pane_g_ParamLimits

0xf61f,	// (0x00012111) list_double_time_pane_g

0x9807,	// (0x0000c2f9) list_double_time_pane_t1_ParamLimits

0x9807,	// (0x0000c2f9) list_double_time_pane_t1

0x981d,	// (0x0000c30f) list_double_time_pane_t2_ParamLimits

0x981d,	// (0x0000c30f) list_double_time_pane_t2

0x982f,	// (0x0000c321) list_double_time_pane_t3_ParamLimits

0x982f,	// (0x0000c321) list_double_time_pane_t3

0x9841,	// (0x0000c333) list_double_time_pane_t4_ParamLimits

0x9841,	// (0x0000c333) list_double_time_pane_t4

0x0003,

0xf624,	// (0x00012116) list_double_time_pane_t_ParamLimits

0xf624,	// (0x00012116) list_double_time_pane_t

0x96fe,	// (0x0000c1f0) list_setting_pane_g1_ParamLimits

0x96fe,	// (0x0000c1f0) list_setting_pane_g1

0x970a,	// (0x0000c1fc) list_setting_pane_g2_ParamLimits

0x970a,	// (0x0000c1fc) list_setting_pane_g2

0x0001,

0xf62d,	// (0x0001211f) list_setting_pane_g_ParamLimits

0xf62d,	// (0x0001211f) list_setting_pane_g

0x9853,	// (0x0000c345) list_setting_pane_t1_ParamLimits

0x9853,	// (0x0000c345) list_setting_pane_t1

0x986a,	// (0x0000c35c) list_setting_pane_t2_ParamLimits

0x986a,	// (0x0000c35c) list_setting_pane_t2

0x0002,

0xf632,	// (0x00012124) list_setting_pane_t_ParamLimits

0xf632,	// (0x00012124) list_setting_pane_t

0x98a9,	// (0x0000c39b) set_value_pane_cp_ParamLimits

0x98a9,	// (0x0000c39b) set_value_pane_cp

0x96fe,	// (0x0000c1f0) list_setting_number_pane_g1_ParamLimits

0x96fe,	// (0x0000c1f0) list_setting_number_pane_g1

0x970a,	// (0x0000c1fc) list_setting_number_pane_g2_ParamLimits

0x970a,	// (0x0000c1fc) list_setting_number_pane_g2

0x0001,

0xf62d,	// (0x0001211f) list_setting_number_pane_g_ParamLimits

0xf62d,	// (0x0001211f) list_setting_number_pane_g

0x98b5,	// (0x0000c3a7) list_setting_number_pane_t1_ParamLimits

0x98b5,	// (0x0000c3a7) list_setting_number_pane_t1

0x98c9,	// (0x0000c3bb) list_setting_number_pane_t2_ParamLimits

0x98c9,	// (0x0000c3bb) list_setting_number_pane_t2

0x98e0,	// (0x0000c3d2) list_setting_number_pane_t3_ParamLimits

0x98e0,	// (0x0000c3d2) list_setting_number_pane_t3

0x0003,

0xf639,	// (0x0001212b) list_setting_number_pane_t_ParamLimits

0xf639,	// (0x0001212b) list_setting_number_pane_t

0x98a9,	// (0x0000c39b) set_value_pane_ParamLimits

0x98a9,	// (0x0000c39b) set_value_pane

0xe585,	// (0x00011077) bg_set_opt_pane_ParamLimits

0xe585,	// (0x00011077) bg_set_opt_pane

0xe5a6,	// (0x00011098) set_value_pane_t1

0xe5b4,	// (0x000110a6) slider_set_pane_cp3

0x9923,	// (0x0000c415) volume_small_pane_cp

0xe5bd,	// (0x000110af) list_form_gen_pane

0xe5c6,	// (0x000110b8) scroll_pane_cp8

0x992c,	// (0x0000c41e) form_field_data_pane_ParamLimits

0x992c,	// (0x0000c41e) form_field_data_pane

0x9943,	// (0x0000c435) form_field_data_wide_pane_ParamLimits

0x9943,	// (0x0000c435) form_field_data_wide_pane

0x9963,	// (0x0000c455) form_field_popup_pane_ParamLimits

0x9963,	// (0x0000c455) form_field_popup_pane

0x9983,	// (0x0000c475) form_field_popup_wide_pane_ParamLimits

0x9983,	// (0x0000c475) form_field_popup_wide_pane

0xe5e7,	// (0x000110d9) form_field_slider_pane_ParamLimits

0xe5e7,	// (0x000110d9) form_field_slider_pane

0x999a,	// (0x0000c48c) form_field_slider_wide_pane_ParamLimits

0x999a,	// (0x0000c48c) form_field_slider_wide_pane

0xe5fa,	// (0x000110ec) data_form_pane

0x99b7,	// (0x0000c4a9) form_field_data_pane_t1

0xe606,	// (0x000110f8) input_focus_pane

0xe614,	// (0x00011106) data_form_wide_pane

0xe651,	// (0x00011143) form_field_data_wide_pane_t1

0xe4a8,	// (0x00010f9a) input_focus_pane_cp6

0x99d1,	// (0x0000c4c3) form_field_popup_pane_t1

0xe606,	// (0x000110f8) input_focus_pane_cp7

0xe673,	// (0x00011165) list_form_pane

0xe687,	// (0x00011179) form_field_popup_wide_pane_t1

0xe606,	// (0x000110f8) input_focus_pane_cp8

0xe69c,	// (0x0001118e) list_form_wide_pane

0x99f3,	// (0x0000c4e5) form_field_slider_pane_t1_ParamLimits

0x99f3,	// (0x0000c4e5) form_field_slider_pane_t1

0x9a0b,	// (0x0000c4fd) form_field_slider_pane_t2_ParamLimits

0x9a0b,	// (0x0000c4fd) form_field_slider_pane_t2

0x0001,

0xf649,	// (0x0001213b) form_field_slider_pane_t_ParamLimits

0xf649,	// (0x0001213b) form_field_slider_pane_t

0xe1d6,	// (0x00010cc8) input_focus_pane_cp9_ParamLimits

0xe1d6,	// (0x00010cc8) input_focus_pane_cp9

0x9a20,	// (0x0000c512) slider_cont_pane_ParamLimits

0x9a20,	// (0x0000c512) slider_cont_pane

0xe6a8,	// (0x0001119a) form_field_slider_wide_pane_t1_ParamLimits

0xe6a8,	// (0x0001119a) form_field_slider_wide_pane_t1

0xe6ba,	// (0x000111ac) form_field_slider_wide_pane_t2_ParamLimits

0xe6ba,	// (0x000111ac) form_field_slider_wide_pane_t2

0x0001,

0xf64e,	// (0x00012140) form_field_slider_wide_pane_t_ParamLimits

0xf64e,	// (0x00012140) form_field_slider_wide_pane_t

0xe1d6,	// (0x00010cc8) input_focus_pane_cp10_ParamLimits

0xe1d6,	// (0x00010cc8) input_focus_pane_cp10

0x9a34,	// (0x0000c526) slider_cont_pane_cp1_ParamLimits

0x9a34,	// (0x0000c526) slider_cont_pane_cp1

0x9a48,	// (0x0000c53a) slider_form_pane_cp

0xe6cc,	// (0x000111be) input_focus_pane_g1

0xe6d4,	// (0x000111c6) input_focus_pane_g2

0xe6dc,	// (0x000111ce) input_focus_pane_g3

0xe6e4,	// (0x000111d6) input_focus_pane_g4

0xe6ec,	// (0x000111de) input_focus_pane_g5

0xe6f4,	// (0x000111e6) input_focus_pane_g6

0xe6fc,	// (0x000111ee) input_focus_pane_g7

0xe704,	// (0x000111f6) input_focus_pane_g8

0xe70c,	// (0x000111fe) input_focus_pane_g9

0xdfef,	// (0x00010ae1) input_focus_pane_g10

0x0009,

0xf653,	// (0x00012145) input_focus_pane_g

0x133d,	// (0x00003e2f) wait_border_pane_g3_copy1

0x9a50,	// (0x0000c542) data_form_pane_t1

0xdfef,	// (0x00010ae1) wait_anim_pane_g1_copy1

0xb81f,	// (0x0000e311) data_form_wide_pane_t1

0x9a6a,	// (0x0000c55c) list_form_graphic_pane_cp_ParamLimits

0x9a6a,	// (0x0000c55c) list_form_graphic_pane_cp

0x2470,	// (0x00004f62) slider_form_pane_g1

0x2479,	// (0x00004f6b) slider_form_pane_g2

0x0006,

0xf94a,	// (0x0001243c) slider_form_pane_g

0x9a7c,	// (0x0000c56e) list_form_graphic_pane_ParamLimits

0x9a7c,	// (0x0000c56e) list_form_graphic_pane

0x9a8f,	// (0x0000c581) list_form_graphic_pane_g1

0x9a97,	// (0x0000c589) list_form_graphic_pane_t1_ParamLimits

0x9a97,	// (0x0000c589) list_form_graphic_pane_t1

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp5_ParamLimits

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp5

0x9aac,	// (0x0000c59e) find_pane_g1

0xe714,	// (0x00011206) input_find_pane

0x9ab5,	// (0x0000c5a7) input_find_pane_g1_ParamLimits

0x9ab5,	// (0x0000c5a7) input_find_pane_g1

0x9ac1,	// (0x0000c5b3) input_find_pane_t1_ParamLimits

0x9ac1,	// (0x0000c5b3) input_find_pane_t1

0x9ad6,	// (0x0000c5c8) input_find_pane_t2_ParamLimits

0x9ad6,	// (0x0000c5c8) input_find_pane_t2

0x0001,

0xf668,	// (0x0001215a) input_find_pane_t_ParamLimits

0xf668,	// (0x0001215a) input_find_pane_t

0xe71d,	// (0x0001120f) input_focus_pane_cp5_ParamLimits

0xe71d,	// (0x0001120f) input_focus_pane_cp5

0xe730,	// (0x00011222) bg_popup_window_pane_cp2_ParamLimits

0xe730,	// (0x00011222) bg_popup_window_pane_cp2

0xe73d,	// (0x0001122f) listscroll_menu_pane_ParamLimits

0xe73d,	// (0x0001122f) listscroll_menu_pane

0x9af7,	// (0x0000c5e9) popup_submenu_window_ParamLimits

0x9af7,	// (0x0000c5e9) popup_submenu_window

0xe749,	// (0x0001123b) find_popup_pane_g1

0x9b1f,	// (0x0000c611) input_popup_find_pane_cp

0xe751,	// (0x00011243) input_focus_pane_cp4_ParamLimits

0xe751,	// (0x00011243) input_focus_pane_cp4

0xe75f,	// (0x00011251) input_popup_find_pane_t1_ParamLimits

0xe75f,	// (0x00011251) input_popup_find_pane_t1

0xe168,	// (0x00010c5a) bg_popup_sub_pane_cp

0xe7a5,	// (0x00011297) listscroll_popup_sub_pane

0xe7ad,	// (0x0001129f) list_submenu_pane_ParamLimits

0xe7ad,	// (0x0001129f) list_submenu_pane

0xe7be,	// (0x000112b0) scroll_pane_cp4

0x9b37,	// (0x0000c629) list_single_popup_submenu_pane_ParamLimits

0x9b37,	// (0x0000c629) list_single_popup_submenu_pane

0x9b4b,	// (0x0000c63d) list_single_popup_submenu_pane_g1

0x9b53,	// (0x0000c645) list_single_popup_submenu_pane_t1_ParamLimits

0x9b53,	// (0x0000c645) list_single_popup_submenu_pane_t1

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp1_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp1

0xe7c6,	// (0x000112b8) tabs_2_active_pane_g1

0x9b68,	// (0x0000c65a) tabs_2_active_pane_t1

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp1_ParamLimits

0xe1d6,	// (0x00010cc8) bg_passive_tab_pane_cp1

0xe7c6,	// (0x000112b8) tabs_2_passive_pane_g1

0x9b68,	// (0x0000c65a) tabs_2_passive_pane_t1

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp4

0x9b7a,	// (0x0000c66c) tabs_2_long_active_pane_t1

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp4

0x0b91,	// (0x00003683) list_single_midp_graphic_pane_g4_ParamLimits

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp5

0x9b8d,	// (0x0000c67f) tabs_3_long_active_pane_t1

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp5

0x0b91,	// (0x00003683) list_single_midp_graphic_pane_g4

0xe1e4,	// (0x00010cd6) bg_popup_window_pane_cp13_ParamLimits

0xe1e4,	// (0x00010cd6) bg_popup_window_pane_cp13

0xe7ce,	// (0x000112c0) listscroll_popup_fast_pane_ParamLimits

0xe7ce,	// (0x000112c0) listscroll_popup_fast_pane

0xe7da,	// (0x000112cc) grid_popup_fast_pane_ParamLimits

0xe7da,	// (0x000112cc) grid_popup_fast_pane

0xe7ec,	// (0x000112de) scroll_pane_cp9_ParamLimits

0xe7ec,	// (0x000112de) scroll_pane_cp9

0x4870,	// (0x00007362) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x4870,	// (0x00007362) list_single_graphic_hl_pane_t1_cp2

0xe7ff,	// (0x000112f1) input_focus_pane_cp20_ParamLimits

0xe7ff,	// (0x000112f1) input_focus_pane_cp20

0xe80d,	// (0x000112ff) query_popup_data_pane_t1_ParamLimits

0xe80d,	// (0x000112ff) query_popup_data_pane_t1

0xe820,	// (0x00011312) query_popup_data_pane_t2_ParamLimits

0xe820,	// (0x00011312) query_popup_data_pane_t2

0xe866,	// (0x00011358) query_popup_data_pane_t3_ParamLimits

0xe866,	// (0x00011358) query_popup_data_pane_t3

0xe8a7,	// (0x00011399) query_popup_data_pane_t4_ParamLimits

0xe8a7,	// (0x00011399) query_popup_data_pane_t4

0xe8e3,	// (0x000113d5) query_popup_data_pane_t5_ParamLimits

0xe8e3,	// (0x000113d5) query_popup_data_pane_t5

0x0004,

0xf66d,	// (0x0001215f) query_popup_data_pane_t_ParamLimits

0xf66d,	// (0x0001215f) query_popup_data_pane_t

0xe6cc,	// (0x000111be) bg_set_opt_pane_g1

0xe6d4,	// (0x000111c6) bg_set_opt_pane_g2

0xe6dc,	// (0x000111ce) bg_set_opt_pane_g3

0xe6e4,	// (0x000111d6) bg_set_opt_pane_g4

0xe6ec,	// (0x000111de) bg_set_opt_pane_g5

0xe6f4,	// (0x000111e6) bg_set_opt_pane_g6

0xe6fc,	// (0x000111ee) bg_set_opt_pane_g7

0xe704,	// (0x000111f6) bg_set_opt_pane_g8

0xe70c,	// (0x000111fe) bg_set_opt_pane_g9

0x0008,

0xf678,	// (0x0001216a) bg_set_opt_pane_g

0xeebc,	// (0x000119ae) control_top_pane_stacon_ParamLimits

0xeebc,	// (0x000119ae) control_top_pane_stacon

0xef0f,	// (0x00011a01) signal_pane_stacon_ParamLimits

0xef0f,	// (0x00011a01) signal_pane_stacon

0xef34,	// (0x00011a26) stacon_top_pane_g1_ParamLimits

0xef34,	// (0x00011a26) stacon_top_pane_g1

0xef56,	// (0x00011a48) title_pane_stacon_ParamLimits

0xef56,	// (0x00011a48) title_pane_stacon

0xef80,	// (0x00011a72) uni_indicator_pane_stacon_ParamLimits

0xef80,	// (0x00011a72) uni_indicator_pane_stacon

0xef95,	// (0x00011a87) battery_pane_stacon_ParamLimits

0xef95,	// (0x00011a87) battery_pane_stacon

0xefd9,	// (0x00011acb) control_bottom_pane_stacon_ParamLimits

0xefd9,	// (0x00011acb) control_bottom_pane_stacon

0xeffc,	// (0x00011aee) navi_pane_stacon_ParamLimits

0xeffc,	// (0x00011aee) navi_pane_stacon

0xf01f,	// (0x00011b11) stacon_bottom_pane_g1_ParamLimits

0xf01f,	// (0x00011b11) stacon_bottom_pane_g1

0xe91a,	// (0x0001140c) aid_levels_signal_lsc_ParamLimits

0xe91a,	// (0x0001140c) aid_levels_signal_lsc

0xe930,	// (0x00011422) signal_pane_stacon_g1_ParamLimits

0xe930,	// (0x00011422) signal_pane_stacon_g1

0xe944,	// (0x00011436) signal_pane_stacon_g2_ParamLimits

0xe944,	// (0x00011436) signal_pane_stacon_g2

0x0001,

0xf68b,	// (0x0001217d) signal_pane_stacon_g_ParamLimits

0xf68b,	// (0x0001217d) signal_pane_stacon_g

0xe986,	// (0x00011478) title_pane_stacon_t1_ParamLimits

0xe986,	// (0x00011478) title_pane_stacon_t1

0xe9ab,	// (0x0001149d) uni_indicator_pane_stacon_g1

0xe9b5,	// (0x000114a7) uni_indicator_pane_stacon_g2

0xe9bf,	// (0x000114b1) uni_indicator_pane_stacon_g3

0xe9c9,	// (0x000114bb) uni_indicator_pane_stacon_g4

0x0003,

0xf697,	// (0x00012189) uni_indicator_pane_stacon_g

0xe9d3,	// (0x000114c5) control_top_pane_stacon_g1

0xe9db,	// (0x000114cd) control_top_pane_stacon_t1_ParamLimits

0xe9db,	// (0x000114cd) control_top_pane_stacon_t1

0xea12,	// (0x00011504) aid_levels_battery_lsc_ParamLimits

0xea12,	// (0x00011504) aid_levels_battery_lsc

0xea29,	// (0x0001151b) battery_pane_stacon_g1_ParamLimits

0xea29,	// (0x0001151b) battery_pane_stacon_g1

0xea3c,	// (0x0001152e) battery_pane_stacon_g2_ParamLimits

0xea3c,	// (0x0001152e) battery_pane_stacon_g2

0x0001,

0xf6a0,	// (0x00012192) battery_pane_stacon_g_ParamLimits

0xf6a0,	// (0x00012192) battery_pane_stacon_g

0xea7a,	// (0x0001156c) navi_icon_pane_stacon

0xea8e,	// (0x00011580) navi_navi_pane_stacon

0xea7a,	// (0x0001156c) navi_text_pane_stacon

0xe9d3,	// (0x000114c5) control_bottom_pane_stacon_g1

0xeaa2,	// (0x00011594) control_bottom_pane_stacon_t1_ParamLimits

0xeaa2,	// (0x00011594) control_bottom_pane_stacon_t1

0x9bb9,	// (0x0000c6ab) grid_app_pane_ParamLimits

0x9bb9,	// (0x0000c6ab) grid_app_pane

0x9bf1,	// (0x0000c6e3) scroll_pane_cp15_ParamLimits

0x9bf1,	// (0x0000c6e3) scroll_pane_cp15

0x9c06,	// (0x0000c6f8) cell_app_pane_ParamLimits

0x9c06,	// (0x0000c6f8) cell_app_pane

0x9c4b,	// (0x0000c73d) cell_app_pane_g1_ParamLimits

0x9c4b,	// (0x0000c73d) cell_app_pane_g1

0xeaf3,	// (0x000115e5) cell_app_pane_g2_ParamLimits

0xeaf3,	// (0x000115e5) cell_app_pane_g2

0x0001,

0xf6a5,	// (0x00012197) cell_app_pane_g_ParamLimits

0xf6a5,	// (0x00012197) cell_app_pane_g

0x9c6f,	// (0x0000c761) cell_app_pane_t1_ParamLimits

0x9c6f,	// (0x0000c761) cell_app_pane_t1

0xeaff,	// (0x000115f1) grid_highlight_pane_ParamLimits

0xeaff,	// (0x000115f1) grid_highlight_pane

0xe6cc,	// (0x000111be) cell_highlight_pane_g1

0xe6d4,	// (0x000111c6) cell_highlight_pane_g2

0xe6dc,	// (0x000111ce) cell_highlight_pane_g3

0xe6e4,	// (0x000111d6) cell_highlight_pane_g4

0xe6ec,	// (0x000111de) cell_highlight_pane_g5

0xe6f4,	// (0x000111e6) cell_highlight_pane_g6

0xe6fc,	// (0x000111ee) cell_highlight_pane_g7

0xe704,	// (0x000111f6) cell_highlight_pane_g8

0xe70c,	// (0x000111fe) cell_highlight_pane_g9

0xdfef,	// (0x00010ae1) cell_highlight_pane_g10

0x0009,

0xf653,	// (0x00012145) cell_highlight_pane_g

0xeb1a,	// (0x0001160c) bg_scroll_pane

0x9c8f,	// (0x0000c781) scroll_handle_pane

0xeb76,	// (0x00011668) scroll_bg_pane_g1

0xeb8b,	// (0x0001167d) scroll_bg_pane_g2

0xeba3,	// (0x00011695) scroll_bg_pane_g3

0x0002,

0xf6aa,	// (0x0001219c) scroll_bg_pane_g

0x9ca3,	// (0x0000c795) scroll_handle_focus_pane_ParamLimits

0x9ca3,	// (0x0000c795) scroll_handle_focus_pane

0xeb76,	// (0x00011668) scroll_handle_pane_g1

0xebb8,	// (0x000116aa) scroll_handle_pane_g2

0xeba3,	// (0x00011695) scroll_handle_pane_g3

0x0002,

0xf6b1,	// (0x000121a3) scroll_handle_pane_g

0xe751,	// (0x00011243) bg_popup_sub_pane_cp21_ParamLimits

0xe751,	// (0x00011243) bg_popup_sub_pane_cp21

0x9cb0,	// (0x0000c7a2) popup_fep_japan_predictive_window_t1_ParamLimits

0x9cb0,	// (0x0000c7a2) popup_fep_japan_predictive_window_t1

0x9cc7,	// (0x0000c7b9) popup_fep_japan_predictive_window_t2_ParamLimits

0x9cc7,	// (0x0000c7b9) popup_fep_japan_predictive_window_t2

0x9cfa,	// (0x0000c7ec) popup_fep_japan_predictive_window_t3_ParamLimits

0x9cfa,	// (0x0000c7ec) popup_fep_japan_predictive_window_t3

0x0002,

0xf6b8,	// (0x000121aa) popup_fep_japan_predictive_window_t_ParamLimits

0xf6b8,	// (0x000121aa) popup_fep_japan_predictive_window_t

0xe168,	// (0x00010c5a) bg_popup_sub_pane_cp23

0x9d31,	// (0x0000c823) listscroll_japin_cand_pane

0xebcc,	// (0x000116be) popup_fep_japan_candidate_window_t1

0xebda,	// (0x000116cc) candidate_pane_ParamLimits

0xebda,	// (0x000116cc) candidate_pane

0x9d39,	// (0x0000c82b) scroll_pane_cp30

0xebec,	// (0x000116de) list_single_popup_jap_candidate_pane_ParamLimits

0xebec,	// (0x000116de) list_single_popup_jap_candidate_pane

0xe168,	// (0x00010c5a) list_highlight_pane_cp30

0xec01,	// (0x000116f3) list_single_popup_jap_candidate_pane_t1

0xec10,	// (0x00011702) level_1_signal

0xec1d,	// (0x0001170f) level_2_signal

0xec2a,	// (0x0001171c) level_3_signal

0xec37,	// (0x00011729) level_4_signal

0xec44,	// (0x00011736) level_5_signal

0xec51,	// (0x00011743) level_6_signal

0xec5e,	// (0x00011750) level_7_signal

0xec10,	// (0x00011702) level_1_battery

0xec1d,	// (0x0001170f) level_2_battery

0xec2a,	// (0x0001171c) level_3_battery

0xec37,	// (0x00011729) level_4_battery

0xec44,	// (0x00011736) level_5_battery

0xec51,	// (0x00011743) level_6_battery

0xec5e,	// (0x00011750) level_7_battery

0xeca2,	// (0x00011794) list_menu_pane_ParamLimits

0xeca2,	// (0x00011794) list_menu_pane

0xecb8,	// (0x000117aa) scroll_pane_cp25_ParamLimits

0xecb8,	// (0x000117aa) scroll_pane_cp25

0x9d41,	// (0x0000c833) list_double2_graphic_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double2_graphic_pane_cp2

0x9d41,	// (0x0000c833) list_double2_large_graphic_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double2_large_graphic_pane_cp2

0x9d41,	// (0x0000c833) list_double2_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double2_pane_cp2

0x9d41,	// (0x0000c833) list_double_graphic_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double_graphic_pane_cp2

0x9d41,	// (0x0000c833) list_double_large_graphic_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double_large_graphic_pane_cp2

0x9d41,	// (0x0000c833) list_double_number_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double_number_pane_cp2

0x9d41,	// (0x0000c833) list_double_pane_cp2_ParamLimits

0x9d41,	// (0x0000c833) list_double_pane_cp2

0x9d50,	// (0x0000c842) list_single_2graphic_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_2graphic_pane_cp2

0x9d50,	// (0x0000c842) list_single_graphic_heading_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_graphic_heading_pane_cp2

0x9d50,	// (0x0000c842) list_single_graphic_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_graphic_pane_cp2

0x9d50,	// (0x0000c842) list_single_heading_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_heading_pane_cp2

0xece1,	// (0x000117d3) list_single_large_graphic_pane_cp2_ParamLimits

0xece1,	// (0x000117d3) list_single_large_graphic_pane_cp2

0x9d50,	// (0x0000c842) list_single_number_heading_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_number_heading_pane_cp2

0x9d50,	// (0x0000c842) list_single_number_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_number_pane_cp2

0x9d50,	// (0x0000c842) list_single_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_pane_cp2

0xed66,	// (0x00011858) bg_popup_sub_pane_cp22

0xed7c,	// (0x0001186e) popup_side_volume_key_window_g1

0xed88,	// (0x0001187a) popup_side_volume_key_window_t1

0x9e18,	// (0x0000c90a) volume_small_pane_cp1

0xe1d6,	// (0x00010cc8) bg_popup_sub_pane_cp24_ParamLimits

0xe1d6,	// (0x00010cc8) bg_popup_sub_pane_cp24

0xed96,	// (0x00011888) fep_china_uni_candidate_pane_ParamLimits

0xed96,	// (0x00011888) fep_china_uni_candidate_pane

0xedaa,	// (0x0001189c) fep_china_uni_entry_pane

0xedba,	// (0x000118ac) popup_fep_china_uni_window_g1

0x9e20,	// (0x0000c912) fep_china_uni_entry_pane_g1

0x9e28,	// (0x0000c91a) fep_china_uni_entry_pane_g2

0x0001,

0xf6e9,	// (0x000121db) fep_china_uni_entry_pane_g

0xedd6,	// (0x000118c8) fep_entry_item_pane

0xede0,	// (0x000118d2) fep_candidate_item_pane

0x9e30,	// (0x0000c922) fep_china_uni_candidate_pane_g1

0xede8,	// (0x000118da) fep_china_uni_candidate_pane_g2

0xedf0,	// (0x000118e2) fep_china_uni_candidate_pane_g3

0x9e38,	// (0x0000c92a) fep_china_uni_candidate_pane_g4

0x0003,

0xf6ee,	// (0x000121e0) fep_china_uni_candidate_pane_g

0xdfef,	// (0x00010ae1) fep_entry_item_pane_g1

0xedf8,	// (0x000118ea) fep_entry_item_pane_t1_ParamLimits

0xedf8,	// (0x000118ea) fep_entry_item_pane_t1

0xee0e,	// (0x00011900) fep_candidate_item_pane_t1_ParamLimits

0xee0e,	// (0x00011900) fep_candidate_item_pane_t1

0xee23,	// (0x00011915) fep_candidate_item_pane_t2_ParamLimits

0xee23,	// (0x00011915) fep_candidate_item_pane_t2

0x0001,

0xf6f7,	// (0x000121e9) fep_candidate_item_pane_t_ParamLimits

0xf6f7,	// (0x000121e9) fep_candidate_item_pane_t

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp31_ParamLimits

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp31

0xee35,	// (0x00011927) level_1_signal_lsc

0xee3e,	// (0x00011930) level_2_signal_lsc

0xee47,	// (0x00011939) level_3_signal_lsc

0xee50,	// (0x00011942) level_4_signal_lsc

0xee59,	// (0x0001194b) level_5_signal_lsc

0xee62,	// (0x00011954) level_6_signal_lsc

0xee6b,	// (0x0001195d) level_7_signal_lsc

0xee6b,	// (0x0001195d) level_1_battery_lsc

0xee74,	// (0x00011966) level_2_battery_lsc

0xee7d,	// (0x0001196f) level_3_battery_lsc

0xee86,	// (0x00011978) level_4_battery_lsc

0xee8f,	// (0x00011981) level_5_battery_lsc

0xee98,	// (0x0001198a) level_6_battery_lsc

0xee35,	// (0x00011927) level_7_battery_lsc

0xeea1,	// (0x00011993) scroll_handle_focus_pane_g1

0xeeaa,	// (0x0001199c) scroll_handle_focus_pane_g2

0xeeb3,	// (0x000119a5) scroll_handle_focus_pane_g3

0x0002,

0xf6fc,	// (0x000121ee) scroll_handle_focus_pane_g

0x9e40,	// (0x0000c932) list_single_2graphic_pane_g1_ParamLimits

0x9e40,	// (0x0000c932) list_single_2graphic_pane_g1

0x95ed,	// (0x0000c0df) list_single_2graphic_pane_g2_ParamLimits

0x95ed,	// (0x0000c0df) list_single_2graphic_pane_g2

0x09be,	// (0x000034b0) list_single_2graphic_pane_g3_ParamLimits

0x09be,	// (0x000034b0) list_single_2graphic_pane_g3

0x9e4c,	// (0x0000c93e) list_single_2graphic_pane_g4_ParamLimits

0x9e4c,	// (0x0000c93e) list_single_2graphic_pane_g4

0x0003,

0xf703,	// (0x000121f5) list_single_2graphic_pane_g_ParamLimits

0xf703,	// (0x000121f5) list_single_2graphic_pane_g

0x9e58,	// (0x0000c94a) list_single_2graphic_pane_t1_ParamLimits

0x9e58,	// (0x0000c94a) list_single_2graphic_pane_t1

0x9e86,	// (0x0000c978) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0x9e86,	// (0x0000c978) list_double2_graphic_large_graphic_pane_g1

0x97b7,	// (0x0000c2a9) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0x97b7,	// (0x0000c2a9) list_double2_graphic_large_graphic_pane_g2

0x970a,	// (0x0000c1fc) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x970a,	// (0x0000c1fc) list_double2_graphic_large_graphic_pane_g3

0x9e98,	// (0x0000c98a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0x9e98,	// (0x0000c98a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf70c,	// (0x000121fe) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf70c,	// (0x000121fe) list_double2_graphic_large_graphic_pane_g

0x9ea4,	// (0x0000c996) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0x9ea4,	// (0x0000c996) list_double2_graphic_large_graphic_pane_t1

0x9eba,	// (0x0000c9ac) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0x9eba,	// (0x0000c9ac) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf715,	// (0x00012207) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf715,	// (0x00012207) list_double2_graphic_large_graphic_pane_t

0x9f3f,	// (0x0000ca31) popup_fast_swap_window_ParamLimits

0x9f3f,	// (0x0000ca31) popup_fast_swap_window

0x9f5b,	// (0x0000ca4d) popup_side_volume_key_window

0xf0aa,	// (0x00011b9c) stacon_top_pane

0xf0b4,	// (0x00011ba6) status_pane_ParamLimits

0xf0b4,	// (0x00011ba6) status_pane

0x9f75,	// (0x0000ca67) status_small_pane

0xe168,	// (0x00010c5a) control_pane

0xe168,	// (0x00010c5a) stacon_bottom_pane

0xe5c6,	// (0x000110b8) scroll_pane_cp121

0xe5bd,	// (0x000110af) set_content_pane

0x9ecc,	// (0x0000c9be) bg_active_tab_pane_g1_cp1

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp1

0x9ede,	// (0x0000c9d0) bg_active_tab_pane_g3_cp1

0x9ecc,	// (0x0000c9be) bg_passive_tab_pane_g1_cp1

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp1

0x9ede,	// (0x0000c9d0) bg_passive_tab_pane_g3_cp1

0x9ee7,	// (0x0000c9d9) bg_active_tab_pane_g1_cp2

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp2

0x9ef0,	// (0x0000c9e2) bg_active_tab_pane_g3_cp2

0x9ee7,	// (0x0000c9d9) bg_passive_tab_pane_g1_cp2

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp2

0x9ef0,	// (0x0000c9e2) bg_passive_tab_pane_g3_cp2

0x9ef9,	// (0x0000c9eb) bg_active_tab_pane_g1_cp3

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp3

0x9f02,	// (0x0000c9f4) bg_active_tab_pane_g3_cp3

0x9ef9,	// (0x0000c9eb) bg_passive_tab_pane_g1_cp3

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp3

0x9f02,	// (0x0000c9f4) bg_passive_tab_pane_g3_cp3

0x9f0b,	// (0x0000c9fd) bg_active_tab_pane_g1_cp4

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp4

0x9f16,	// (0x0000ca08) bg_active_tab_pane_g3_cp4

0x9f0b,	// (0x0000c9fd) bg_passive_tab_pane_g1_cp4

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp4

0x9f16,	// (0x0000ca08) bg_passive_tab_pane_g3_cp4

0x9f21,	// (0x0000ca13) bg_active_tab_pane_g1_cp5

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp5

0x9f2a,	// (0x0000ca1c) bg_active_tab_pane_g3_cp5

0x9f21,	// (0x0000ca13) bg_passive_tab_pane_g1_cp5

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp5

0x9f2a,	// (0x0000ca1c) bg_passive_tab_pane_g3_cp5

0x2c5f,	// (0x00005751) list_set_graphic_pane_ParamLimits

0x2c5f,	// (0x00005751) list_set_graphic_pane

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp4

0xf03b,	// (0x00011b2d) list_set_graphic_pane_g1_ParamLimits

0xf03b,	// (0x00011b2d) list_set_graphic_pane_g1

0xf047,	// (0x00011b39) list_set_graphic_pane_g2_ParamLimits

0xf047,	// (0x00011b39) list_set_graphic_pane_g2

0x0001,

0xf71a,	// (0x0001220c) list_set_graphic_pane_g_ParamLimits

0xf71a,	// (0x0001220c) list_set_graphic_pane_g

0x0009,

0xfa9f,	// (0x00012591) volume_small_pane_cp_g

0x9f33,	// (0x0000ca25) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0x9f33,	// (0x0000ca25) list_double2_large_graphic_pane_g1_cp2

0xf069,	// (0x00011b5b) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xf069,	// (0x00011b5b) list_double2_large_graphic_pane_g2_cp2

0xf07a,	// (0x00011b6c) list_double2_large_graphic_pane_g3_cp2

0xf082,	// (0x00011b74) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0xf082,	// (0x00011b74) list_double2_large_graphic_pane_t1_cp2

0xf098,	// (0x00011b8a) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0xf098,	// (0x00011b8a) list_double2_large_graphic_pane_t2_cp2

0xb4b2,	// (0x0000dfa4) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xb4b2,	// (0x0000dfa4) list_double_large_graphic_pane_g1_cp2

0x1f69,	// (0x00004a5b) list_double_large_graphic_pane_g2_cp2_ParamLimits

0x1f69,	// (0x00004a5b) list_double_large_graphic_pane_g2_cp2

0xf1dc,	// (0x00011cce) list_double_large_graphic_pane_g3_cp2

0x1f7a,	// (0x00004a6c) list_double_large_graphic_pane_g4_cp

0x1f82,	// (0x00004a74) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x1f82,	// (0x00004a74) list_double_large_graphic_pane_t1_cp2

0x1f99,	// (0x00004a8b) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x1f99,	// (0x00004a8b) list_double_large_graphic_pane_t2_cp2

0xf0da,	// (0x00011bcc) list_double2_graphic_pane_g1_cp2_ParamLimits

0xf0da,	// (0x00011bcc) list_double2_graphic_pane_g1_cp2

0xf0e8,	// (0x00011bda) list_double2_graphic_pane_g2_cp2_ParamLimits

0xf0e8,	// (0x00011bda) list_double2_graphic_pane_g2_cp2

0xf0f9,	// (0x00011beb) list_double2_graphic_pane_g3_cp2

0xf103,	// (0x00011bf5) list_double2_graphic_pane_t1_cp2_ParamLimits

0xf103,	// (0x00011bf5) list_double2_graphic_pane_t1_cp2

0xf119,	// (0x00011c0b) list_double2_graphic_pane_t2_cp2_ParamLimits

0xf119,	// (0x00011c0b) list_double2_graphic_pane_t2_cp2

0xf0ce,	// (0x00011bc0) list_single_number_heading_pane_g1_cp2_ParamLimits

0xf0ce,	// (0x00011bc0) list_single_number_heading_pane_g1_cp2

0xf12b,	// (0x00011c1d) list_single_number_heading_pane_g2_cp2

0xf133,	// (0x00011c25) list_single_number_heading_pane_t1_cp2_ParamLimits

0xf133,	// (0x00011c25) list_single_number_heading_pane_t1_cp2

0xf149,	// (0x00011c3b) list_single_number_heading_pane_t2_cp2_ParamLimits

0xf149,	// (0x00011c3b) list_single_number_heading_pane_t2_cp2

0xf15b,	// (0x00011c4d) list_single_number_heading_pane_t3_cp2_ParamLimits

0xf15b,	// (0x00011c4d) list_single_number_heading_pane_t3_cp2

0xf0ce,	// (0x00011bc0) list_single_heading_pane_g1_cp2_ParamLimits

0xf0ce,	// (0x00011bc0) list_single_heading_pane_g1_cp2

0xf12b,	// (0x00011c1d) list_single_heading_pane_g2_cp2

0xf133,	// (0x00011c25) list_single_heading_pane_t1_cp2_ParamLimits

0xf133,	// (0x00011c25) list_single_heading_pane_t1_cp2

0x1d62,	// (0x00004854) list_single_heading_pane_t2_cp2_ParamLimits

0x1d62,	// (0x00004854) list_single_heading_pane_t2_cp2

0x1caa,	// (0x0000479c) list_double_graphic_pane_g1_cp2_ParamLimits

0x1caa,	// (0x0000479c) list_double_graphic_pane_g1_cp2

0x1cb6,	// (0x000047a8) list_double_graphic_pane_g2_cp2_ParamLimits

0x1cb6,	// (0x000047a8) list_double_graphic_pane_g2_cp2

0x1cc5,	// (0x000047b7) list_double_graphic_pane_g3_cp2

0x1ccd,	// (0x000047bf) list_double_graphic_pane_t1_cp2_ParamLimits

0x1ccd,	// (0x000047bf) list_double_graphic_pane_t1_cp2

0x1ce3,	// (0x000047d5) list_double_graphic_pane_t2_cp2_ParamLimits

0x1ce3,	// (0x000047d5) list_double_graphic_pane_t2_cp2

0xf1d0,	// (0x00011cc2) list_double_number_pane_g1_cp2_ParamLimits

0xf1d0,	// (0x00011cc2) list_double_number_pane_g1_cp2

0xf1dc,	// (0x00011cce) list_double_number_pane_g2_cp2

0x1c6e,	// (0x00004760) list_double_number_pane_t1_cp2_ParamLimits

0x1c6e,	// (0x00004760) list_double_number_pane_t1_cp2

0x1c82,	// (0x00004774) list_double_number_pane_t2_cp2_ParamLimits

0x1c82,	// (0x00004774) list_double_number_pane_t2_cp2

0x1c98,	// (0x0000478a) list_double_number_pane_t3_cp2_ParamLimits

0x1c98,	// (0x0000478a) list_double_number_pane_t3_cp2

0x1b46,	// (0x00004638) list_single_graphic_pane_g1_cp2_ParamLimits

0x1b46,	// (0x00004638) list_single_graphic_pane_g1_cp2

0xf0c2,	// (0x00011bb4) list_single_graphic_pane_g2_cp2_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_graphic_pane_g2_cp2

0xf214,	// (0x00011d06) list_single_graphic_pane_g3_cp2

0x1b1c,	// (0x0000460e) list_single_graphic_pane_t1_cp2_ParamLimits

0x1b1c,	// (0x0000460e) list_single_graphic_pane_t1_cp2

0xf0c2,	// (0x00011bb4) list_single_number_pane_g1_cp2_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_number_pane_g1_cp2

0xf214,	// (0x00011d06) list_single_number_pane_g2_cp2

0x1b1c,	// (0x0000460e) list_single_number_pane_t1_cp2_ParamLimits

0x1b1c,	// (0x0000460e) list_single_number_pane_t1_cp2

0x1b32,	// (0x00004624) list_single_number_pane_t2_cp2_ParamLimits

0x1b32,	// (0x00004624) list_single_number_pane_t2_cp2

0xf069,	// (0x00011b5b) list_double2_pane_g1_cp2_ParamLimits

0xf069,	// (0x00011b5b) list_double2_pane_g1_cp2

0xf07a,	// (0x00011b6c) list_double2_pane_g2_cp2

0xf1a8,	// (0x00011c9a) list_double2_pane_t1_cp2_ParamLimits

0xf1a8,	// (0x00011c9a) list_double2_pane_t1_cp2

0xf1be,	// (0x00011cb0) list_double2_pane_t2_cp2_ParamLimits

0xf1be,	// (0x00011cb0) list_double2_pane_t2_cp2

0xf1d0,	// (0x00011cc2) list_double_pane_g1_cp2_ParamLimits

0xf1d0,	// (0x00011cc2) list_double_pane_g1_cp2

0xf1dc,	// (0x00011cce) list_double_pane_g2_cp2

0xf1e4,	// (0x00011cd6) list_double_pane_t1_cp2_ParamLimits

0xf1e4,	// (0x00011cd6) list_double_pane_t1_cp2

0xf1fa,	// (0x00011cec) list_double_pane_t2_cp2_ParamLimits

0xf1fa,	// (0x00011cec) list_double_pane_t2_cp2

0x9fa3,	// (0x0000ca95) list_single_pane_cp2_g3

0xf0c2,	// (0x00011bb4) list_single_pane_g1_cp2_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_pane_g1_cp2

0xf214,	// (0x00011d06) list_single_pane_g2_cp2

0xf21c,	// (0x00011d0e) list_single_pane_t1_cp2_ParamLimits

0xf21c,	// (0x00011d0e) list_single_pane_t1_cp2

0x9fab,	// (0x0000ca9d) list_single_large_graphic_pane_g1_cp2_ParamLimits

0x9fab,	// (0x0000ca9d) list_single_large_graphic_pane_g1_cp2

0xf234,	// (0x00011d26) list_single_large_graphic_pane_g2_cp2_ParamLimits

0xf234,	// (0x00011d26) list_single_large_graphic_pane_g2_cp2

0xf240,	// (0x00011d32) list_single_large_graphic_pane_g3_cp2

0x9fb7,	// (0x0000caa9) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x9fb7,	// (0x0000caa9) list_single_large_graphic_pane_g4_cp1

0xf248,	// (0x00011d3a) list_single_large_graphic_pane_t1_cp2_ParamLimits

0xf248,	// (0x00011d3a) list_single_large_graphic_pane_t1_cp2

0x198f,	// (0x00004481) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x198f,	// (0x00004481) list_single_graphic_heading_pane_g1_cp2

0x195c,	// (0x0000444e) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0x195c,	// (0x0000444e) list_single_graphic_heading_pane_g4_cp2

0xf214,	// (0x00011d06) list_single_graphic_heading_pane_g5_cp2

0x199b,	// (0x0000448d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x199b,	// (0x0000448d) list_single_graphic_heading_pane_t1_cp2

0x19b1,	// (0x000044a3) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0x19b1,	// (0x000044a3) list_single_graphic_heading_pane_t2_cp2

0x1950,	// (0x00004442) list_single_2graphic_pane_g1_cp2_ParamLimits

0x1950,	// (0x00004442) list_single_2graphic_pane_g1_cp2

0x195c,	// (0x0000444e) list_single_2graphic_pane_g2_cp2_ParamLimits

0x195c,	// (0x0000444e) list_single_2graphic_pane_g2_cp2

0xf214,	// (0x00011d06) list_single_2graphic_pane_g3_cp2

0x196d,	// (0x0000445f) list_single_2graphic_pane_g4_cp2_ParamLimits

0x196d,	// (0x0000445f) list_single_2graphic_pane_g4_cp2

0x1979,	// (0x0000446b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x1979,	// (0x0000446b) list_single_2graphic_pane_t1_cp2

0xdfef,	// (0x00010ae1) list_highlight_pane_g10_cp1

0x1538,	// (0x0000402a) list_highlight_pane_g1_cp1

0x1540,	// (0x00004032) list_highlight_pane_g2_cp1

0x1548,	// (0x0000403a) list_highlight_pane_g3_cp1

0x1550,	// (0x00004042) list_highlight_pane_g4_cp1

0x1558,	// (0x0000404a) list_highlight_pane_g5_cp1

0x1560,	// (0x00004052) list_highlight_pane_g6_cp1

0x1568,	// (0x0000405a) list_highlight_pane_g7_cp1

0x1570,	// (0x00004062) list_highlight_pane_g8_cp1

0x1578,	// (0x0000406a) list_highlight_pane_g9_cp1

0xb23f,	// (0x0000dd31) form_field_slider_pane_t3

0xb24d,	// (0x0000dd3f) form_field_slider_pane_t4

0x147c,	// (0x00003f6e) slider_form_pane_ParamLimits

0x147c,	// (0x00003f6e) slider_form_pane

0xe168,	// (0x00010c5a) control_abbreviations

0xe168,	// (0x00010c5a) control_conventions

0xe168,	// (0x00010c5a) control_definitions

0xe168,	// (0x00010c5a) format_table_attribute

0xb489,	// (0x0000df7b) bg_popup_preview_window_pane_g9

0xe168,	// (0x00010c5a) format_table_data2

0xe168,	// (0x00010c5a) format_table_data3

0xe168,	// (0x00010c5a) format_table_data_example

0x0008,

0xe168,	// (0x00010c5a) intro_purpose

0xf8aa,	// (0x0001239c) bg_popup_preview_window_pane_g

0xe168,	// (0x00010c5a) texts_category

0xe168,	// (0x00010c5a) texts_graphics

0xf25e,	// (0x00011d50) text_digital

0xf26d,	// (0x00011d5f) text_primary

0xf27c,	// (0x00011d6e) text_primary_small

0xf28b,	// (0x00011d7d) text_secondary

0xf29a,	// (0x00011d8c) text_title

0xb8fe,	// (0x0000e3f0) bg_passive_tab_pane_g1_cp3_srt

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp3_srt

0xb907,	// (0x0000e3f9) bg_passive_tab_pane_g3_cp3_srt

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp3_srt_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp3_srt

0xb910,	// (0x0000e402) tabs_4_active_pane_srt_g1

0xb918,	// (0x0000e40a) tabs_4_active_pane_srt_t1_ParamLimits

0xb918,	// (0x0000e40a) tabs_4_active_pane_srt_t1

0xb8fe,	// (0x0000e3f0) bg_active_tab_pane_g1_cp3_copy1

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp3_copy1

0xb907,	// (0x0000e3f9) bg_active_tab_pane_g3_cp3_copy1

0xe1e4,	// (0x00010cd6) tabs_2_long_active_pane_srt_ParamLimits

0xe1e4,	// (0x00010cd6) tabs_2_long_active_pane_srt

0xe1e4,	// (0x00010cd6) tabs_2_long_passive_pane_srt_ParamLimits

0xe1e4,	// (0x00010cd6) tabs_2_long_passive_pane_srt

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp4_srt_ParamLimits

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp4_srt

0xb603,	// (0x0000e0f5) bg_passive_tab_pane_g1_cp4_srt

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp4_srt

0xb60c,	// (0x0000e0fe) bg_passive_tab_pane_g3_cp4_srt

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp4_srt_ParamLimits

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp4_srt

0xb615,	// (0x0000e107) tabs_2_long_active_pane_srt_t1_ParamLimits

0xb615,	// (0x0000e107) tabs_2_long_active_pane_srt_t1

0xb603,	// (0x0000e0f5) bg_active_tab_pane_g1_cp4_srt

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp4_srt

0xb60c,	// (0x0000e0fe) bg_active_tab_pane_g3_cp4_srt

0xe1d6,	// (0x00010cc8) tabs_3_long_active_pane_srt_ParamLimits

0xe1d6,	// (0x00010cc8) tabs_3_long_active_pane_srt

0xe1d6,	// (0x00010cc8) tabs_3_long_passive_pane_cp_srt_ParamLimits

0xe1d6,	// (0x00010cc8) tabs_3_long_passive_pane_cp_srt

0xe1d6,	// (0x00010cc8) tabs_3_long_passive_pane_srt_ParamLimits

0xe1d6,	// (0x00010cc8) tabs_3_long_passive_pane_srt

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp5_srt_ParamLimits

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp5_srt

0x9f21,	// (0x0000ca13) bg_passive_tab_pane_g1_cp5_srt

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp5_srt

0x9f2a,	// (0x0000ca1c) bg_passive_tab_pane_g3_cp5_srt

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp5_srt_ParamLimits

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp5_srt

0xb5ed,	// (0x0000e0df) tabs_3_long_active_pane_srt_t1_ParamLimits

0xb5ed,	// (0x0000e0df) tabs_3_long_active_pane_srt_t1

0x9f21,	// (0x0000ca13) bg_active_tab_pane_g1_cp5_srt

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp5_srt

0x9f2a,	// (0x0000ca1c) bg_active_tab_pane_g3_cp5_srt

0x220f,	// (0x00004d01) navi_text_pane_srt_t1

0x2207,	// (0x00004cf9) navi_icon_pane_srt_g1

0xf42e,	// (0x00011f20) midp_editing_number_pane_srt

0xf2a9,	// (0x00011d9b) midp_ticker_pane_srt

0xf436,	// (0x00011f28) midp_ticker_pane_srt_g1

0xf43e,	// (0x00011f30) midp_ticker_pane_srt_g2

0x0001,

0xf739,	// (0x0001222b) midp_ticker_pane_srt_g

0xf446,	// (0x00011f38) midp_ticker_pane_srt_t1

0x21f8,	// (0x00004cea) midp_editing_number_pane_t1_copy1

0x9fd1,	// (0x0000cac3) listscroll_midp_pane

0x9fd1,	// (0x0000cac3) midp_form_pane

0xa03c,	// (0x0000cb2e) midp_info_popup_window_ParamLimits

0xa03c,	// (0x0000cb2e) midp_info_popup_window

0xe751,	// (0x00011243) bg_popup_sub_pane_cp50_ParamLimits

0xe751,	// (0x00011243) bg_popup_sub_pane_cp50

0x116c,	// (0x00003c5e) listscroll_midp_info_pane_ParamLimits

0x116c,	// (0x00003c5e) listscroll_midp_info_pane

0x114c,	// (0x00003c3e) listscroll_form_midp_pane_ParamLimits

0x114c,	// (0x00003c3e) listscroll_form_midp_pane

0x1158,	// (0x00003c4a) scroll_bar_cp050

0x114c,	// (0x00003c3e) list_midp_pane

0xbb0c,	// (0x0000e5fe) signal_pane_g2_cp

0x1066,	// (0x00003b58) listscroll_midp_info_pane_t1_ParamLimits

0x1066,	// (0x00003b58) listscroll_midp_info_pane_t1

0xb079,	// (0x0000db6b) listscroll_midp_info_pane_t2_ParamLimits

0xb079,	// (0x0000db6b) listscroll_midp_info_pane_t2

0xb0b7,	// (0x0000dba9) listscroll_midp_info_pane_t3_ParamLimits

0xb0b7,	// (0x0000dba9) listscroll_midp_info_pane_t3

0xb0f1,	// (0x0000dbe3) listscroll_midp_info_pane_t4_ParamLimits

0xb0f1,	// (0x0000dbe3) listscroll_midp_info_pane_t4

0x0003,

0xf7e5,	// (0x000122d7) listscroll_midp_info_pane_t_ParamLimits

0xf7e5,	// (0x000122d7) listscroll_midp_info_pane_t

0xe7be,	// (0x000112b0) scroll_pane_cp21

0x1006,	// (0x00003af8) form_midp_field_choice_group_pane

0xb03c,	// (0x0000db2e) form_midp_field_text_pane

0x104c,	// (0x00003b3e) form_midp_field_time_pane

0x1054,	// (0x00003b46) form_midp_gauge_slider_pane

0x105d,	// (0x00003b4f) form_midp_gauge_wait_pane

0xe168,	// (0x00010c5a) form_midp_image_pane

0xb025,	// (0x0000db17) list_single_midp_pane_ParamLimits

0xb025,	// (0x0000db17) list_single_midp_pane

0xb003,	// (0x0000daf5) form_midp_field_text_pane_t1

0x0cbc,	// (0x000037ae) input_focus_pane_cp050

0x0fc3,	// (0x00003ab5) list_midp_form_text_pane

0x0f58,	// (0x00003a4a) form_midp_field_choice_group_pane_t1

0x0f66,	// (0x00003a58) input_focus_pane_cp051

0x0f7a,	// (0x00003a6c) list_midp_choice_pane

0xe168,	// (0x00010c5a) status_idle_pane

0x0f3c,	// (0x00003a2e) form_midp_field_time_pane_t1

0xdfef,	// (0x00010ae1) wait_anim_pane_g2_copy1

0x0f4a,	// (0x00003a3c) form_midp_field_time_pane_t2

0x0001,

0xf309,	// (0x00011dfb) aid_navinavi_width_2_pane

0xf7e0,	// (0x000122d2) form_midp_field_time_pane_t

0xe168,	// (0x00010c5a) input_focus_pane_cp052

0xe168,	// (0x00010c5a) bg_input_focus_pane_cp040

0x0efc,	// (0x000039ee) form_midp_gauge_slider_pane_t1

0x0f0a,	// (0x000039fc) form_midp_gauge_slider_pane_t2

0xafe7,	// (0x0000dad9) form_midp_gauge_slider_pane_t3

0xaff5,	// (0x0000dae7) form_midp_gauge_slider_pane_t4

0x0003,

0xf7d7,	// (0x000122c9) form_midp_gauge_slider_pane_t

0x0f34,	// (0x00003a26) form_midp_slider_pane

0xe1e4,	// (0x00010cd6) bg_input_focus_pane_cp041_ParamLimits

0xe1e4,	// (0x00010cd6) bg_input_focus_pane_cp041

0x0ec9,	// (0x000039bb) form_midp_gauge_wait_pane_t1_ParamLimits

0x0ec9,	// (0x000039bb) form_midp_gauge_wait_pane_t1

0x0edb,	// (0x000039cd) form_midp_gauge_wait_pane_t2_ParamLimits

0x0edb,	// (0x000039cd) form_midp_gauge_wait_pane_t2

0x0001,

0xf7d2,	// (0x000122c4) form_midp_gauge_wait_pane_t_ParamLimits

0xf7d2,	// (0x000122c4) form_midp_gauge_wait_pane_t

0x0eed,	// (0x000039df) form_midp_wait_pane_ParamLimits

0x0eed,	// (0x000039df) form_midp_wait_pane

0xafb1,	// (0x0000daa3) form_midp_image_pane_g1

0xafba,	// (0x0000daac) form_midp_image_pane_t1

0xafc9,	// (0x0000dabb) form_midp_image_pane_t2

0xafd8,	// (0x0000daca) form_midp_image_pane_t3

0x0002,

0xf7cb,	// (0x000122bd) form_midp_image_pane_t

0x0e7b,	// (0x0000396d) list_single_midp_pane_g1

0x0e84,	// (0x00003976) list_single_midp_pane_t1

0xaf9c,	// (0x0000da8e) list_midp_form_item_pane_ParamLimits

0xaf9c,	// (0x0000da8e) list_midp_form_item_pane

0xf2b1,	// (0x00011da3) list_midp_form_item_pane_t1

0xf2c0,	// (0x00011db2) midp_ticker_pane_g1

0xf2cc,	// (0x00011dbe) midp_ticker_pane_g2

0x0001,

0xf71f,	// (0x00012211) midp_ticker_pane_g

0xf2d8,	// (0x00011dca) midp_ticker_pane_t1

0x24f0,	// (0x00004fe2) midp_editing_number_pane_t1

0x24ce,	// (0x00004fc0) midp_editing_number_pane

0x24dd,	// (0x00004fcf) midp_ticker_pane

0x21d6,	// (0x00004cc8) ai_message_heading_pane

0xe168,	// (0x00010c5a) bg_popup_window_pane_cp14

0x21de,	// (0x00004cd0) listscroll_ai_message_pane

0x2160,	// (0x00004c52) ai_message_heading_pane_g1_ParamLimits

0x2160,	// (0x00004c52) ai_message_heading_pane_g1

0xb5a3,	// (0x0000e095) ai_message_heading_pane_g2_ParamLimits

0xb5a3,	// (0x0000e095) ai_message_heading_pane_g2

0x2178,	// (0x00004c6a) ai_message_heading_pane_g3_ParamLimits

0x2178,	// (0x00004c6a) ai_message_heading_pane_g3

0x2184,	// (0x00004c76) ai_message_heading_pane_g4_ParamLimits

0x2184,	// (0x00004c76) ai_message_heading_pane_g4

0x0003,

0xf90c,	// (0x000123fe) ai_message_heading_pane_g_ParamLimits

0xf90c,	// (0x000123fe) ai_message_heading_pane_g

0xb5af,	// (0x0000e0a1) ai_message_heading_pane_t1_ParamLimits

0xb5af,	// (0x0000e0a1) ai_message_heading_pane_t1

0xb5c9,	// (0x0000e0bb) ai_message_heading_pane_t2_ParamLimits

0xb5c9,	// (0x0000e0bb) ai_message_heading_pane_t2

0x0001,

0xf915,	// (0x00012407) ai_message_heading_pane_t_ParamLimits

0xf915,	// (0x00012407) ai_message_heading_pane_t

0x21bc,	// (0x00004cae) bg_popup_heading_pane_cp1_ParamLimits

0x21bc,	// (0x00004cae) bg_popup_heading_pane_cp1

0x214e,	// (0x00004c40) list_ai_message_pane_ParamLimits

0x214e,	// (0x00004c40) list_ai_message_pane

0xe7be,	// (0x000112b0) scroll_pane_cp10

0x209a,	// (0x00004b8c) list_ai_message_pane_g1

0x20a2,	// (0x00004b94) list_ai_message_pane_g2

0x0001,

0xf8e9,	// (0x000123db) list_ai_message_pane_g

0x20aa,	// (0x00004b9c) list_ai_message_pane_t1_ParamLimits

0x20aa,	// (0x00004b9c) list_ai_message_pane_t1

0x20bf,	// (0x00004bb1) list_ai_message_pane_t2_ParamLimits

0x20bf,	// (0x00004bb1) list_ai_message_pane_t2

0x20d4,	// (0x00004bc6) list_ai_message_pane_t3_ParamLimits

0x20d4,	// (0x00004bc6) list_ai_message_pane_t3

0x20e9,	// (0x00004bdb) list_ai_message_pane_t4_ParamLimits

0x20e9,	// (0x00004bdb) list_ai_message_pane_t4

0x0003,

0xf8ee,	// (0x000123e0) list_ai_message_pane_t_ParamLimits

0xf8ee,	// (0x000123e0) list_ai_message_pane_t

0xb52f,	// (0x0000e021) cell_ai_soft_ind_pane_ParamLimits

0xb52f,	// (0x0000e021) cell_ai_soft_ind_pane

0xf2ea,	// (0x00011ddc) cell_ai_soft_ind_pane_g1_ParamLimits

0xf2ea,	// (0x00011ddc) cell_ai_soft_ind_pane_g1

0xe168,	// (0x00010c5a) grid_highlight_cp1

0xf2f7,	// (0x00011de9) text_secondary_cp56_ParamLimits

0xf2f7,	// (0x00011de9) text_secondary_cp56

0x205a,	// (0x00004b4c) example_general_pane_ParamLimits

0x205a,	// (0x00004b4c) example_general_pane

0x2066,	// (0x00004b58) example_parent_pane_g1_ParamLimits

0x2066,	// (0x00004b58) example_parent_pane_g1

0x2072,	// (0x00004b64) example_parent_pane_t1_ParamLimits

0x2072,	// (0x00004b64) example_parent_pane_t1

0xa720,	// (0x0000d212) popup_preview_text_window_ParamLimits

0xa720,	// (0x0000d212) popup_preview_text_window

0xf20c,	// (0x00011cfe) list_single_pane_cp2_g4

0xe3d0,	// (0x00010ec2) bg_popup_preview_window_pane_ParamLimits

0xe3d0,	// (0x00010ec2) bg_popup_preview_window_pane

0xb491,	// (0x0000df83) popup_preview_text_window_t1_ParamLimits

0xb491,	// (0x0000df83) popup_preview_text_window_t1

0x1dd2,	// (0x000048c4) popup_preview_text_window_t2_ParamLimits

0x1dd2,	// (0x000048c4) popup_preview_text_window_t2

0x1e1b,	// (0x0000490d) popup_preview_text_window_t3_ParamLimits

0x1e1b,	// (0x0000490d) popup_preview_text_window_t3

0x1e60,	// (0x00004952) popup_preview_text_window_t4_ParamLimits

0x1e60,	// (0x00004952) popup_preview_text_window_t4

0x0004,

0xf8bd,	// (0x000123af) popup_preview_text_window_t_ParamLimits

0xf8bd,	// (0x000123af) popup_preview_text_window_t

0x1ede,	// (0x000049d0) scroll_pane_cp11

0x0b24,	// (0x00003616) bg_popup_preview_window_pane_g1

0xb451,	// (0x0000df43) bg_popup_preview_window_pane_g2

0xb459,	// (0x0000df4b) bg_popup_preview_window_pane_g3

0xb461,	// (0x0000df53) bg_popup_preview_window_pane_g4

0xb469,	// (0x0000df5b) bg_popup_preview_window_pane_g5

0xb471,	// (0x0000df63) bg_popup_preview_window_pane_g6

0xb479,	// (0x0000df6b) bg_popup_preview_window_pane_g7

0xb481,	// (0x0000df73) bg_popup_preview_window_pane_g8

0xe005,	// (0x00010af7) aid_popup_width_pane

0xa69c,	// (0x0000d18e) popup_midp_note_alarm_window_ParamLimits

0xa69c,	// (0x0000d18e) popup_midp_note_alarm_window

0xe5fa,	// (0x000110ec) data_form_pane_ParamLimits

0x99ad,	// (0x0000c49f) form_field_data_pane_g1

0x99b7,	// (0x0000c4a9) form_field_data_pane_t1_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_ParamLimits

0xe614,	// (0x00011106) data_form_wide_pane_ParamLimits

0xe625,	// (0x00011117) form_field_data_wide_pane_g1

0xe651,	// (0x00011143) form_field_data_wide_pane_t1_ParamLimits

0xe4a8,	// (0x00010f9a) input_focus_pane_cp6_ParamLimits

0x9b29,	// (0x0000c61b) input_popup_find_pane_g1_ParamLimits

0x9b29,	// (0x0000c61b) input_popup_find_pane_g1

0xea4d,	// (0x0001153f) aid_navi_side_left_pane

0xea62,	// (0x00011554) aid_navi_side_right_pane

0x1633,	// (0x00004125) bg_popup_window_pane_cp30_ParamLimits

0x1633,	// (0x00004125) bg_popup_window_pane_cp30

0x16ad,	// (0x0000419f) popup_midp_note_alarm_window_g1_ParamLimits

0x16ad,	// (0x0000419f) popup_midp_note_alarm_window_g1

0x16dd,	// (0x000041cf) popup_midp_note_alarm_window_t1_ParamLimits

0x16dd,	// (0x000041cf) popup_midp_note_alarm_window_t1

0xb292,	// (0x0000dd84) popup_midp_note_alarm_window_t2_ParamLimits

0xb292,	// (0x0000dd84) popup_midp_note_alarm_window_t2

0xb340,	// (0x0000de32) popup_midp_note_alarm_window_t3_ParamLimits

0xb340,	// (0x0000de32) popup_midp_note_alarm_window_t3

0xb368,	// (0x0000de5a) popup_midp_note_alarm_window_t4_ParamLimits

0xb368,	// (0x0000de5a) popup_midp_note_alarm_window_t4

0x1874,	// (0x00004366) popup_midp_note_alarm_window_t5_ParamLimits

0x1874,	// (0x00004366) popup_midp_note_alarm_window_t5

0x000a,

0xf85a,	// (0x0001234c) popup_midp_note_alarm_window_t_ParamLimits

0xf85a,	// (0x0001234c) popup_midp_note_alarm_window_t

0x1920,	// (0x00004412) wait_bar_pane_cp1_ParamLimits

0x1920,	// (0x00004412) wait_bar_pane_cp1

0xe168,	// (0x00010c5a) wait_anim_pane_copy1

0xe168,	// (0x00010c5a) wait_border_pane_copy1

0x1329,	// (0x00003e1b) wait_border_pane_g1_copy1

0xe66b,	// (0x0001115d) form_field_popup_pane_g1

0x99d1,	// (0x0000c4c3) form_field_popup_pane_t1_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_cp7_ParamLimits

0xe673,	// (0x00011165) list_form_pane_ParamLimits

0xe67f,	// (0x00011171) form_field_popup_wide_pane_g1

0xe687,	// (0x00011179) form_field_popup_wide_pane_t1_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_cp8_ParamLimits

0xe69c,	// (0x0001118e) list_form_wide_pane_ParamLimits

0x2734,	// (0x00005226) aid_size_cell_graphic_pane

0x9a50,	// (0x0000c542) data_form_pane_t1_ParamLimits

0xb81f,	// (0x0000e311) data_form_wide_pane_t1_ParamLimits

0xab63,	// (0x0000d655) bg_status_flat_pane

0x8f8b,	// (0x0000ba7d) title_pane_t1_ParamLimits

0xe19e,	// (0x00010c90) title_pane_t2_ParamLimits

0xe1c4,	// (0x00010cb6) title_pane_t3_ParamLimits

0xf532,	// (0x00012024) title_pane_t_ParamLimits

0xec10,	// (0x00011702) level_1_signal_ParamLimits

0xec1d,	// (0x0001170f) level_2_signal_ParamLimits

0xec2a,	// (0x0001171c) level_3_signal_ParamLimits

0xec37,	// (0x00011729) level_4_signal_ParamLimits

0xec44,	// (0x00011736) level_5_signal_ParamLimits

0xec51,	// (0x00011743) level_6_signal_ParamLimits

0xec5e,	// (0x00011750) level_7_signal_ParamLimits

0xec10,	// (0x00011702) level_1_battery_ParamLimits

0xec1d,	// (0x0001170f) level_2_battery_ParamLimits

0xec2a,	// (0x0001171c) level_3_battery_ParamLimits

0xec37,	// (0x00011729) level_4_battery_ParamLimits

0xec44,	// (0x00011736) level_5_battery_ParamLimits

0xec51,	// (0x00011743) level_6_battery_ParamLimits

0xec5e,	// (0x00011750) level_7_battery_ParamLimits

0x1538,	// (0x0000402a) bg_status_flat_pane_g1

0x1540,	// (0x00004032) bg_status_flat_pane_g2

0x1548,	// (0x0000403a) bg_status_flat_pane_g3

0x1550,	// (0x00004042) bg_status_flat_pane_g4

0x1558,	// (0x0000404a) bg_status_flat_pane_g5

0x1560,	// (0x00004052) bg_status_flat_pane_g6

0x1568,	// (0x0000405a) bg_status_flat_pane_g7

0x901f,	// (0x0000bb11) tabs_3_active_pane_t1_ParamLimits

0x901f,	// (0x0000bb11) tabs_3_passive_pane_t1_ParamLimits

0x9039,	// (0x0000bb2b) tabs_4_active_pane_t1_ParamLimits

0x9039,	// (0x0000bb2b) tabs_4_1_passive_pane_t1_ParamLimits

0x9b68,	// (0x0000c65a) tabs_2_active_pane_t1_ParamLimits

0x9b68,	// (0x0000c65a) tabs_2_passive_pane_t1_ParamLimits

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp4_ParamLimits

0x9b7a,	// (0x0000c66c) tabs_2_long_active_pane_t1_ParamLimits

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp4_ParamLimits

0x0be1,	// (0x000036d3) list_single_midp_graphic_pane_t1_ParamLimits

0xe1e4,	// (0x00010cd6) bg_active_tab_pane_cp5_ParamLimits

0x9b8d,	// (0x0000c67f) tabs_3_long_active_pane_t1_ParamLimits

0xf4e5,	// (0x00011fd7) bg_passive_tab_pane_cp5_ParamLimits

0x0be1,	// (0x000036d3) list_single_midp_graphic_pane_t1

0xab63,	// (0x0000d655) bg_status_flat_pane_ParamLimits

0x0707,	// (0x000031f9) indicator_pane_cp2_ParamLimits

0x0707,	// (0x000031f9) indicator_pane_cp2

0xace1,	// (0x0000d7d3) navi_pane_srt_ParamLimits

0xace1,	// (0x0000d7d3) navi_pane_srt

0x0856,	// (0x00003348) popup_clock_digital_analogue_window_cp1

0xe242,	// (0x00010d34) indicator_pane_t1

0xf2a9,	// (0x00011d9b) copy_highlight_pane

0xf2a9,	// (0x00011d9b) cursor_graphics_pane

0xf2a9,	// (0x00011d9b) graphic_within_text_pane

0xf2a9,	// (0x00011d9b) link_highlight_pane

0x1ea1,	// (0x00004993) popup_preview_text_window_t5_ParamLimits

0x1ea1,	// (0x00004993) popup_preview_text_window_t5

0xf311,	// (0x00011e03) cursor_digital_pane

0xf311,	// (0x00011e03) cursor_primary_pane

0xf322,	// (0x00011e14) cursor_primary_small_pane

0xf32a,	// (0x00011e1c) cursor_secondary_pane

0xf332,	// (0x00011e24) cursor_title_pane

0xf311,	// (0x00011e03) link_highlight_digital_pane

0xf319,	// (0x00011e0b) link_highlight_primary_pane

0xf322,	// (0x00011e14) link_highlight_primary_small_pane

0xf32a,	// (0x00011e1c) link_highlight_secondary_pane

0xf332,	// (0x00011e24) link_highlight_title_pane

0xf311,	// (0x00011e03) copy_highlight_digital_pane

0xf311,	// (0x00011e03) copy_highlight_primary_pane

0xf322,	// (0x00011e14) copy_highlight_primary_small_pane

0xf32a,	// (0x00011e1c) copy_highlight_secondary_pane

0xf332,	// (0x00011e24) copy_highlight_title_pane

0xf32a,	// (0x00011e1c) graphic_text_digital_pane

0x15d6,	// (0x000040c8) graphic_text_primary_pane

0x15df,	// (0x000040d1) graphic_text_primary_small_pane

0xf322,	// (0x00011e14) graphic_text_secondary_pane

0xf311,	// (0x00011e03) graphic_text_title_pane

0xa08d,	// (0x0000cb7f) cursor_primary_pane_g1

0x15c8,	// (0x000040ba) cursor_text_primary_t1

0xb288,	// (0x0000dd7a) cursor_primary_small_pane_g1

0x15ba,	// (0x000040ac) cursor_text_primary_small_t1

0xb27e,	// (0x0000dd70) cursor_primary_small_pane_g1_copy1

0x15a2,	// (0x00004094) cursor_text_primary_small_t1_copy1

0x1580,	// (0x00004072) cursor_text_title_t1

0xb274,	// (0x0000dd66) cursor_title_pane_g1

0xa08d,	// (0x0000cb7f) cursor_digital_pane_g1

0xf33a,	// (0x00011e2c) cursor_text_digital_t1

0xf348,	// (0x00011e3a) link_highlight_primary_pane_g1

0x1529,	// (0x0000401b) link_highlight_primary_pane_t1

0xf348,	// (0x00011e3a) link_highlight_primary_small_pane_g1

0xf350,	// (0x00011e42) link_highlight_primary_small_pane_t1

0xf348,	// (0x00011e3a) link_highlight_secondary_pane_g1

0xf35f,	// (0x00011e51) link_highlight_secondary_pane_t1

0x148e,	// (0x00003f80) link_highlight_title_pane_g1

0x14a5,	// (0x00003f97) link_highlight_title_pane_t1

0x148e,	// (0x00003f80) link_highlight_digital_pane_g1

0x1496,	// (0x00003f88) link_highlight_digital_pane_t1

0x1348,	// (0x00003e3a) copy_highlight_primary_pane_g1

0x136e,	// (0x00003e60) copy_highlight_primary_pane_t1

0x1348,	// (0x00003e3a) copy_highlight_primary_small_pane_g1

0x135f,	// (0x00003e51) copy_highlight_primary_small_pane_t1

0xf36e,	// (0x00011e60) copy_highlight_secondary_pane_g1

0xf376,	// (0x00011e68) copy_highlight_secondary_pane_t1

0x1348,	// (0x00003e3a) copy_highlight_title_pane_g1

0x1350,	// (0x00003e42) copy_highlight_title_pane_t1

0x1348,	// (0x00003e3a) copy_highlight_digital_pane_g1

0x29ba,	// (0x000054ac) copy_highlight_digital_pane_t1

0x290e,	// (0x00005400) graphic_text_primary_pane_g1

0x299e,	// (0x00005490) graphic_text_primary_pane_t1

0x29ac,	// (0x0000549e) graphic_text_primary_pane_t2

0x0001,

0xf989,	// (0x0001247b) graphic_text_primary_pane_t

0x297a,	// (0x0000546c) graphic_text_primary_small_pane_g1

0x2982,	// (0x00005474) graphic_text_primary_small_pane_t1

0x2990,	// (0x00005482) graphic_text_primary_small_pane_t2

0x0001,

0xf984,	// (0x00012476) graphic_text_primary_small_pane_t

0x2956,	// (0x00005448) graphic_text_secondary_pane_g1

0x295e,	// (0x00005450) graphic_text_secondary_pane_t1

0x296c,	// (0x0000545e) graphic_text_secondary_pane_t2

0x0001,

0xf97f,	// (0x00012471) graphic_text_secondary_pane_t

0x2932,	// (0x00005424) graphic_text_title_pane_g1

0x293a,	// (0x0000542c) graphic_text_title_pane_t1

0x2948,	// (0x0000543a) graphic_text_title_pane_t2

0x0001,

0xf97a,	// (0x0001246c) graphic_text_title_pane_t

0x290e,	// (0x00005400) graphic_text_digital_pane_g1

0x2916,	// (0x00005408) graphic_text_digital_pane_t1

0x2924,	// (0x00005416) graphic_text_digital_pane_t2

0x0001,

0xf975,	// (0x00012467) graphic_text_digital_pane_t

0xe1e4,	// (0x00010cd6) navi_icon_pane_srt_ParamLimits

0xe1e4,	// (0x00010cd6) navi_icon_pane_srt

0xe168,	// (0x00010c5a) navi_midp_pane_srt

0xe168,	// (0x00010c5a) navi_navi_pane_srt

0xe1e4,	// (0x00010cd6) navi_text_pane_srt_ParamLimits

0xe1e4,	// (0x00010cd6) navi_text_pane_srt

0x28d9,	// (0x000053cb) navi_navi_icon_text_pane_srt

0x28e1,	// (0x000053d3) navi_navi_pane_srt_g1_ParamLimits

0x28e1,	// (0x000053d3) navi_navi_pane_srt_g1

0x28f3,	// (0x000053e5) navi_navi_pane_srt_g2_ParamLimits

0x28f3,	// (0x000053e5) navi_navi_pane_srt_g2

0x0001,

0xf970,	// (0x00012462) navi_navi_pane_srt_g_ParamLimits

0xf970,	// (0x00012462) navi_navi_pane_srt_g

0x2905,	// (0x000053f7) navi_navi_tabs_pane_srt

0x28d9,	// (0x000053cb) navi_navi_text_pane_srt

0x28d9,	// (0x000053cb) navi_navi_volume_pane_srt

0x28ca,	// (0x000053bc) navi_navi_text_pane_srt_t1

0x28a5,	// (0x00005397) navi_navi_volume_pane_srt_g1

0x28ad,	// (0x0000539f) volume_small_pane_srt_ParamLimits

0x28ad,	// (0x0000539f) volume_small_pane_srt

0xf385,	// (0x00011e77) volume_small_pane_srt_g1_ParamLimits

0xf385,	// (0x00011e77) volume_small_pane_srt_g1

0xf395,	// (0x00011e87) volume_small_pane_srt_g2_ParamLimits

0xf395,	// (0x00011e87) volume_small_pane_srt_g2

0xf3a6,	// (0x00011e98) volume_small_pane_srt_g3_ParamLimits

0xf3a6,	// (0x00011e98) volume_small_pane_srt_g3

0xf3b7,	// (0x00011ea9) volume_small_pane_srt_g4_ParamLimits

0xf3b7,	// (0x00011ea9) volume_small_pane_srt_g4

0xf3c8,	// (0x00011eba) volume_small_pane_srt_g5_ParamLimits

0xf3c8,	// (0x00011eba) volume_small_pane_srt_g5

0xf3d9,	// (0x00011ecb) volume_small_pane_srt_g6_ParamLimits

0xf3d9,	// (0x00011ecb) volume_small_pane_srt_g6

0xf3ea,	// (0x00011edc) volume_small_pane_srt_g7_ParamLimits

0xf3ea,	// (0x00011edc) volume_small_pane_srt_g7

0xf3fb,	// (0x00011eed) volume_small_pane_srt_g8_ParamLimits

0xf3fb,	// (0x00011eed) volume_small_pane_srt_g8

0xf40c,	// (0x00011efe) volume_small_pane_srt_g9_ParamLimits

0xf40c,	// (0x00011efe) volume_small_pane_srt_g9

0xf41d,	// (0x00011f0f) volume_small_pane_srt_g10_ParamLimits

0xf41d,	// (0x00011f0f) volume_small_pane_srt_g10

0x0009,

0xf724,	// (0x00012216) volume_small_pane_srt_g_ParamLimits

0xf724,	// (0x00012216) volume_small_pane_srt_g

0x9320,	// (0x0000be12) query_popup_data_pane_cp2

0x2893,	// (0x00005385) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x2893,	// (0x00005385) navi_navi_icon_text_pane_srt_t1

0x15d6,	// (0x000040c8) navi_tabs_2_long_pane_srt

0x15d6,	// (0x000040c8) navi_tabs_2_pane_srt

0x15d6,	// (0x000040c8) navi_tabs_3_long_pane_srt

0x15d6,	// (0x000040c8) navi_tabs_3_pane_srt

0x15d6,	// (0x000040c8) navi_tabs_4_pane_srt

0xba12,	// (0x0000e504) tabs_2_active_pane_srt_ParamLimits

0xba12,	// (0x0000e504) tabs_2_active_pane_srt

0xba22,	// (0x0000e514) tabs_2_passive_pane_srt_ParamLimits

0xba22,	// (0x0000e514) tabs_2_passive_pane_srt

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp1_srt_ParamLimits

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp1_srt

0xb9e2,	// (0x0000e4d4) bg_passive_tab_pane_g1_cp1_srt

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp1_srt

0xb9eb,	// (0x0000e4dd) bg_passive_tab_pane_g3_cp1_srt

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp1_srt_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp1_srt

0xb9f4,	// (0x0000e4e6) tabs_2_active_pane_srt_g1

0xb9fc,	// (0x0000e4ee) tabs_2_active_pane_srt_t1_ParamLimits

0xb9fc,	// (0x0000e4ee) tabs_2_active_pane_srt_t1

0xb9e2,	// (0x0000e4d4) bg_active_tab_pane_g1_cp1_srt

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp1_srt

0xb9eb,	// (0x0000e4dd) bg_active_tab_pane_g3_cp1_srt

0xb9af,	// (0x0000e4a1) tabs_3_active_pane_srt_ParamLimits

0xb9af,	// (0x0000e4a1) tabs_3_active_pane_srt

0xb9c0,	// (0x0000e4b2) tabs_3_passive_pane_cp_srt_ParamLimits

0xb9c0,	// (0x0000e4b2) tabs_3_passive_pane_cp_srt

0xb9d1,	// (0x0000e4c3) tabs_3_passive_pane_srt_ParamLimits

0xb9d1,	// (0x0000e4c3) tabs_3_passive_pane_srt

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp2_srt_ParamLimits

0x0cbc,	// (0x000037ae) bg_passive_tab_pane_cp2_srt

0xa097,	// (0x0000cb89) bg_passive_tab_pane_g1_cp2_srt

0x9ed5,	// (0x0000c9c7) bg_passive_tab_pane_g2_cp2_srt

0xa0a0,	// (0x0000cb92) bg_passive_tab_pane_g3_cp2_srt

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp2_srt_ParamLimits

0xe1d6,	// (0x00010cc8) bg_active_tab_pane_cp2_srt

0xb991,	// (0x0000e483) tabs_3_active_pane_srt_g1

0xb999,	// (0x0000e48b) tabs_3_active_pane_srt_t1_ParamLimits

0xb999,	// (0x0000e48b) tabs_3_active_pane_srt_t1

0xa097,	// (0x0000cb89) bg_active_tab_pane_g1_cp2_srt

0x9ed5,	// (0x0000c9c7) bg_active_tab_pane_g2_cp2_srt

0xa0a0,	// (0x0000cb92) bg_active_tab_pane_g3_cp2_srt

0x27aa,	// (0x0000529c) tabs_4_active_pane_srt_ParamLimits

0x27aa,	// (0x0000529c) tabs_4_active_pane_srt

0x27bc,	// (0x000052ae) tabs_4_passive_pane_cp2_srt_ParamLimits

0x27bc,	// (0x000052ae) tabs_4_passive_pane_cp2_srt

0xf4ad,	// (0x00011f9f) aid_size_cell_toolbar

0x2318,	// (0x00004e0a) main_idle_act_pane_ParamLimits

0x0169,	// (0x00002c5b) popup_large_graphic_colour_window_ParamLimits

0xa9d2,	// (0x0000d4c4) popup_toolbar_window_ParamLimits

0xa9d2,	// (0x0000d4c4) popup_toolbar_window

0x251b,	// (0x0000500d) list_single_graphic_2heading_pane_ParamLimits

0x251b,	// (0x0000500d) list_single_graphic_2heading_pane

0xead9,	// (0x000115cb) aid_size_cell_apps_grid_lsc_pane

0xeaeb,	// (0x000115dd) aid_size_cell_apps_grid_prt_pane

0xf4e5,	// (0x00011fd7) bg_wml_button_pane_cp1_ParamLimits

0xf4e5,	// (0x00011fd7) bg_wml_button_pane_cp1

0xb003,	// (0x0000daf5) form_midp_field_text_pane_t1_ParamLimits

0x0cbc,	// (0x000037ae) input_focus_pane_cp050_ParamLimits

0x0fc3,	// (0x00003ab5) list_midp_form_text_pane_ParamLimits

0x0f66,	// (0x00003a58) input_focus_pane_cp051_ParamLimits

0x0f7a,	// (0x00003a6c) list_midp_choice_pane_ParamLimits

0xaf68,	// (0x0000da5a) list_single_2graphic_pane_cp3_ParamLimits

0xaf68,	// (0x0000da5a) list_single_2graphic_pane_cp3

0xaf7c,	// (0x0000da6e) list_single_midp_graphic_pane_ParamLimits

0xaf7c,	// (0x0000da6e) list_single_midp_graphic_pane

0x09b2,	// (0x000034a4) list_single_graphic_2heading_pane_g1_ParamLimits

0x09b2,	// (0x000034a4) list_single_graphic_2heading_pane_g1

0xf0c2,	// (0x00011bb4) list_single_graphic_2heading_pane_g4_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_graphic_2heading_pane_g4

0x09be,	// (0x000034b0) list_single_graphic_2heading_pane_g5_ParamLimits

0x09be,	// (0x000034b0) list_single_graphic_2heading_pane_g5

0x0002,

0xf777,	// (0x00012269) list_single_graphic_2heading_pane_g_ParamLimits

0xf777,	// (0x00012269) list_single_graphic_2heading_pane_g

0x09ca,	// (0x000034bc) list_single_graphic_2heading_pane_t1_ParamLimits

0x09ca,	// (0x000034bc) list_single_graphic_2heading_pane_t1

0x09de,	// (0x000034d0) list_single_graphic_2heading_pane_t2_ParamLimits

0x09de,	// (0x000034d0) list_single_graphic_2heading_pane_t2

0x09f8,	// (0x000034ea) list_single_graphic_2heading_pane_t3_ParamLimits

0x09f8,	// (0x000034ea) list_single_graphic_2heading_pane_t3

0x0002,

0xf77e,	// (0x00012270) list_single_graphic_2heading_pane_t_ParamLimits

0xf77e,	// (0x00012270) list_single_graphic_2heading_pane_t

0x0a10,	// (0x00003502) bg_popup_sub_pane_cp2

0x0a3a,	// (0x0000352c) grid_toobar_pane

0x0a76,	// (0x00003568) cell_toolbar_pane_ParamLimits

0x0a76,	// (0x00003568) cell_toolbar_pane

0x0ac8,	// (0x000035ba) cell_toolbar_pane_g1_ParamLimits

0x0ac8,	// (0x000035ba) cell_toolbar_pane_g1

0xae80,	// (0x0000d972) cell_toolbar_pane_g2_ParamLimits

0xae80,	// (0x0000d972) cell_toolbar_pane_g2

0x0001,

0xf785,	// (0x00012277) cell_toolbar_pane_g_ParamLimits

0xf785,	// (0x00012277) cell_toolbar_pane_g

0x0afe,	// (0x000035f0) grid_highlight_pane_cp2_ParamLimits

0x0afe,	// (0x000035f0) grid_highlight_pane_cp2

0x0b18,	// (0x0000360a) toolbar_button_pane

0x0b24,	// (0x00003616) toolbar_button_pane_g1

0x0b2c,	// (0x0000361e) toolbar_button_pane_g2

0x0b34,	// (0x00003626) toolbar_button_pane_g3

0x0b3c,	// (0x0000362e) toolbar_button_pane_g4

0x0b44,	// (0x00003636) toolbar_button_pane_g5

0x0b4c,	// (0x0000363e) toolbar_button_pane_g6

0x0b54,	// (0x00003646) toolbar_button_pane_g7

0x0b5c,	// (0x0000364e) toolbar_button_pane_g8

0x0b64,	// (0x00003656) toolbar_button_pane_g9

0x0009,

0xf78a,	// (0x0001227c) toolbar_button_pane_g

0x0b74,	// (0x00003666) list_single_2graphic_pane_g1_cp3_ParamLimits

0x0b74,	// (0x00003666) list_single_2graphic_pane_g1_cp3

0xae94,	// (0x0000d986) list_single_2graphic_pane_g2_cp3_ParamLimits

0xae94,	// (0x0000d986) list_single_2graphic_pane_g2_cp3

0xf12b,	// (0x00011c1d) list_single_2graphic_pane_g3_cp3

0x0b91,	// (0x00003683) list_single_2graphic_pane_g4_cp3_ParamLimits

0x0b91,	// (0x00003683) list_single_2graphic_pane_g4_cp3

0xaea5,	// (0x0000d997) list_single_2graphic_pane_t1_cp3_ParamLimits

0xaea5,	// (0x0000d997) list_single_2graphic_pane_t1_cp3

0xf0ce,	// (0x00011bc0) list_single_midp_graphic_pane_g2_ParamLimits

0xf0ce,	// (0x00011bc0) list_single_midp_graphic_pane_g2

0xf4b5,	// (0x00011fa7) aid_zoom_text_primary

0xf4bd,	// (0x00011faf) aid_zoom_text_secondary

0xa0f7,	// (0x0000cbe9) status_small_pane_g7_ParamLimits

0xa0f7,	// (0x0000cbe9) status_small_pane_g7

0xa11a,	// (0x0000cc0c) status_small_pane_t1_ParamLimits

0x8f67,	// (0x0000ba59) title_pane_g2

0x0003,

0xf529,	// (0x0001201b) title_pane_g

0x937a,	// (0x0000be6c) aid_size_cell_colour_1_pane_ParamLimits

0x937a,	// (0x0000be6c) aid_size_cell_colour_1_pane

0x938e,	// (0x0000be80) aid_size_cell_colour_2_pane_ParamLimits

0x938e,	// (0x0000be80) aid_size_cell_colour_2_pane

0x93a2,	// (0x0000be94) aid_size_cell_colour_3_pane_ParamLimits

0x93a2,	// (0x0000be94) aid_size_cell_colour_3_pane

0x93b6,	// (0x0000bea8) aid_size_cell_colour_4_pane_ParamLimits

0x93b6,	// (0x0000bea8) aid_size_cell_colour_4_pane

0xe955,	// (0x00011447) title_pane_stacon_g1_ParamLimits

0xe955,	// (0x00011447) title_pane_stacon_g1

0x13c5,	// (0x00003eb7) popup_note_wait_window_g3_ParamLimits

0x13c5,	// (0x00003eb7) popup_note_wait_window_g3

0x143b,	// (0x00003f2d) popup_note_wait_window_t5_ParamLimits

0x143b,	// (0x00003f2d) popup_note_wait_window_t5

0xe168,	// (0x00010c5a) main_feb_china_hwr_fs_writing_pane

0xa386,	// (0x0000ce78) popup_feb_china_hwr_fs_window_ParamLimits

0xa386,	// (0x0000ce78) popup_feb_china_hwr_fs_window

0xaec1,	// (0x0000d9b3) aid_size_cell_hwr_fs_ParamLimits

0xaec1,	// (0x0000d9b3) aid_size_cell_hwr_fs

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp3_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp3

0xaed6,	// (0x0000d9c8) grid_hwr_fs_pane_ParamLimits

0xaed6,	// (0x0000d9c8) grid_hwr_fs_pane

0x0ce0,	// (0x000037d2) linegrid_hwr_fs_pane_ParamLimits

0x0ce0,	// (0x000037d2) linegrid_hwr_fs_pane

0xaeee,	// (0x0000d9e0) cell_hwr_fs_pane_ParamLimits

0xaeee,	// (0x0000d9e0) cell_hwr_fs_pane

0x0d12,	// (0x00003804) linegrid_hwr_fs_pane_g1_ParamLimits

0x0d12,	// (0x00003804) linegrid_hwr_fs_pane_g1

0xaf14,	// (0x0000da06) linegrid_hwr_fs_pane_g2_ParamLimits

0xaf14,	// (0x0000da06) linegrid_hwr_fs_pane_g2

0x0d30,	// (0x00003822) linegrid_hwr_fs_pane_g3_ParamLimits

0x0d30,	// (0x00003822) linegrid_hwr_fs_pane_g3

0xaf26,	// (0x0000da18) linegrid_hwr_fs_pane_g4_ParamLimits

0xaf26,	// (0x0000da18) linegrid_hwr_fs_pane_g4

0x0d56,	// (0x00003848) linegrid_hwr_fs_pane_g5_ParamLimits

0x0d56,	// (0x00003848) linegrid_hwr_fs_pane_g5

0x0004,

0xf7b0,	// (0x000122a2) linegrid_hwr_fs_pane_g_ParamLimits

0xf7b0,	// (0x000122a2) linegrid_hwr_fs_pane_g

0x0d6c,	// (0x0000385e) cell_hwr_fs_pane_g1_ParamLimits

0x0d6c,	// (0x0000385e) cell_hwr_fs_pane_g1

0x08ec,	// (0x000033de) cell_hwr_fs_pane_g2_ParamLimits

0x08ec,	// (0x000033de) cell_hwr_fs_pane_g2

0xaf40,	// (0x0000da32) cell_hwr_fs_pane_g3_ParamLimits

0xaf40,	// (0x0000da32) cell_hwr_fs_pane_g3

0xaf4d,	// (0x0000da3f) cell_hwr_fs_pane_g4_ParamLimits

0xaf4d,	// (0x0000da3f) cell_hwr_fs_pane_g4

0x0003,

0xf7bb,	// (0x000122ad) cell_hwr_fs_pane_g_ParamLimits

0xf7bb,	// (0x000122ad) cell_hwr_fs_pane_g

0xaf5a,	// (0x0000da4c) cell_hwr_fs_pane_t1

0xe168,	// (0x00010c5a) grid_highlight_pane_cp6

0xe168,	// (0x00010c5a) main_idle_act2_pane

0xe7a5,	// (0x00011297) aid_inside_area_popup_secondary

0xb3a7,	// (0x0000de99) aid_inside_area_window_primary_ParamLimits

0xb3a7,	// (0x0000de99) aid_inside_area_window_primary

0xba3a,	// (0x0000e52c) ai2_news_ticker_pane

0x29d1,	// (0x000054c3) aid_size_cell_ai1_link_ParamLimits

0x29d1,	// (0x000054c3) aid_size_cell_ai1_link

0xba42,	// (0x0000e534) popup_ai2_data_window_ParamLimits

0xba42,	// (0x0000e534) popup_ai2_data_window

0x2a01,	// (0x000054f3) popup_ai2_link_window_ParamLimits

0x2a01,	// (0x000054f3) popup_ai2_link_window

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp4_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp4

0x2a15,	// (0x00005507) grid_ai2_link_pane_ParamLimits

0x2a15,	// (0x00005507) grid_ai2_link_pane

0x2a2c,	// (0x0000551e) popup_ai2_link_window_g1_ParamLimits

0x2a2c,	// (0x0000551e) popup_ai2_link_window_g1

0x2a38,	// (0x0000552a) popup_ai2_link_window_g2_ParamLimits

0x2a38,	// (0x0000552a) popup_ai2_link_window_g2

0x0001,

0xf98e,	// (0x00012480) popup_ai2_link_window_g_ParamLimits

0xf98e,	// (0x00012480) popup_ai2_link_window_g

0x2a47,	// (0x00005539) ai2_mp_button_pane

0x2a4f,	// (0x00005541) ai2_mp_volume_pane

0x0f66,	// (0x00003a58) bg_popup_sub_pane_cp5_ParamLimits

0x0f66,	// (0x00003a58) bg_popup_sub_pane_cp5

0x2a57,	// (0x00005549) heading_ai2_gene_pane_ParamLimits

0x2a57,	// (0x00005549) heading_ai2_gene_pane

0x2a63,	// (0x00005555) list_ai2_gene_pane_ParamLimits

0x2a63,	// (0x00005555) list_ai2_gene_pane

0x2aab,	// (0x0000559d) cell_ai2_link_pane_ParamLimits

0x2aab,	// (0x0000559d) cell_ai2_link_pane

0x2ac1,	// (0x000055b3) cell_ai2_link_pane_g1

0xe168,	// (0x00010c5a) grid_highlight_pane_cp7

0x2b91,	// (0x00005683) ai2_mp_volume_pane_g1

0x2b99,	// (0x0000568b) ai2_mp_volume_pane_g2

0x2b06,	// (0x000055f8) list_ai2_gene_pane_t1

0x2ba1,	// (0x00005693) ai2_mp_volume_pane_g3

0x0002,

0xf9a7,	// (0x00012499) ai2_mp_volume_pane_g

0xba58,	// (0x0000e54a) volume_small_pane_cp3

0x2bb2,	// (0x000056a4) aid_size_cell_ai2_button

0x2bba,	// (0x000056ac) grid_ai2_button_pane

0x2bc3,	// (0x000056b5) cell_ai2_button_pane_ParamLimits

0x2bc3,	// (0x000056b5) cell_ai2_button_pane

0xdfef,	// (0x00010ae1) cell_ai2_button_pane_g1

0xe168,	// (0x00010c5a) grid_highlight_pane_cp8

0x2b51,	// (0x00005643) ai2_gene_pane_t1_ParamLimits

0x2b51,	// (0x00005643) ai2_gene_pane_t1

0xa2e8,	// (0x0000cdda) aid_height_parent_landscape

0xb6cb,	// (0x0000e1bd) aid_height_set_list

0x2318,	// (0x00004e0a) aid_size_parent

0x2734,	// (0x00005226) aid_size_cell_graphic_pane_ParamLimits

0x2a73,	// (0x00005565) popup_ai2_data_window_g1_ParamLimits

0x2a73,	// (0x00005565) popup_ai2_data_window_g1

0x2a7f,	// (0x00005571) ai2_news_ticker_pane_g1

0x2a87,	// (0x00005579) ai2_news_ticker_pane_g2

0x0001,

0xf993,	// (0x00012485) ai2_news_ticker_pane_g

0x2a8f,	// (0x00005581) ai2_news_ticker_pane_t1

0x2a9d,	// (0x0000558f) ai2_news_ticker_pane_t2

0x0001,

0xf998,	// (0x0001248a) ai2_news_ticker_pane_t

0x2aca,	// (0x000055bc) heading_ai2_gene_pane_g1

0x2ad2,	// (0x000055c4) heading_ai2_gene_pane_t1_ParamLimits

0x2ad2,	// (0x000055c4) heading_ai2_gene_pane_t1

0x2ae7,	// (0x000055d9) list_highlight_pane_cp6

0x2aef,	// (0x000055e1) ai2_gene_pane_ParamLimits

0x2aef,	// (0x000055e1) ai2_gene_pane

0x2b14,	// (0x00005606) list_ai2_gene_pane_t2

0x0001,

0xf99d,	// (0x0001248f) list_ai2_gene_pane_t

0x2b22,	// (0x00005614) list_highlight_pane_cp8_ParamLimits

0x2b22,	// (0x00005614) list_highlight_pane_cp8

0x2b33,	// (0x00005625) ai2_gene_pane_g1_ParamLimits

0x2b33,	// (0x00005625) ai2_gene_pane_g1

0x2b45,	// (0x00005637) ai2_gene_pane_g2_ParamLimits

0x2b45,	// (0x00005637) ai2_gene_pane_g2

0x0001,

0xf9a2,	// (0x00012494) ai2_gene_pane_g_ParamLimits

0xf9a2,	// (0x00012494) ai2_gene_pane_g

0xe553,	// (0x00011045) scroll_pane_cp12

0xa2a5,	// (0x0000cd97) control_pane_t3_ParamLimits

0xa2a5,	// (0x0000cd97) control_pane_t3

0xa10b,	// (0x0000cbfd) status_small_pane_g8_ParamLimits

0xa10b,	// (0x0000cbfd) status_small_pane_g8

0xa449,	// (0x0000cf3b) popup_find_window_ParamLimits

0xa6d6,	// (0x0000d1c8) popup_note_image_window_ParamLimits

0x0aa6,	// (0x00003598) list_double2_graphic_pane_vc_g1_ParamLimits

0x0aa6,	// (0x00003598) list_double2_graphic_pane_vc_g1

0xf0c2,	// (0x00011bb4) list_double2_graphic_pane_vc_g2_ParamLimits

0xf0c2,	// (0x00011bb4) list_double2_graphic_pane_vc_g2

0x09be,	// (0x000034b0) list_double2_graphic_pane_vc_g3_ParamLimits

0x09be,	// (0x000034b0) list_double2_graphic_pane_vc_g3

0x0002,

0xf59c,	// (0x0001208e) list_double2_graphic_pane_vc_g_ParamLimits

0xf59c,	// (0x0001208e) list_double2_graphic_pane_vc_g

0x0ab2,	// (0x000035a4) list_double2_graphic_pane_vc_t1_ParamLimits

0x0ab2,	// (0x000035a4) list_double2_graphic_pane_vc_t1

0xf0c2,	// (0x00011bb4) list_single_heading_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_heading_pane_vc_g1

0x09be,	// (0x000034b0) list_single_heading_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_heading_pane_vc_g

0x0bb9,	// (0x000036ab) list_single_heading_pane_vc_t1_ParamLimits

0x0bb9,	// (0x000036ab) list_single_heading_pane_vc_t1

0x0bcf,	// (0x000036c1) list_single_heading_pane_vc_t2_ParamLimits

0x0bcf,	// (0x000036c1) list_single_heading_pane_vc_t2

0x0001,

0xf79f,	// (0x00012291) list_single_heading_pane_vc_t_ParamLimits

0xf79f,	// (0x00012291) list_single_heading_pane_vc_t

0x0bf7,	// (0x000036e9) list_setting_number_pane_vc_g1_ParamLimits

0x0bf7,	// (0x000036e9) list_setting_number_pane_vc_g1

0x0c03,	// (0x000036f5) list_setting_number_pane_vc_g2_ParamLimits

0x0c03,	// (0x000036f5) list_setting_number_pane_vc_g2

0x0001,

0xf7a4,	// (0x00012296) list_setting_number_pane_vc_g_ParamLimits

0xf7a4,	// (0x00012296) list_setting_number_pane_vc_g

0x0c0f,	// (0x00003701) list_setting_number_pane_vc_t1_ParamLimits

0x0c0f,	// (0x00003701) list_setting_number_pane_vc_t1

0x0c23,	// (0x00003715) list_setting_number_pane_vc_t2_ParamLimits

0x0c23,	// (0x00003715) list_setting_number_pane_vc_t2

0x0c3f,	// (0x00003731) list_setting_number_pane_vc_t3_ParamLimits

0x0c3f,	// (0x00003731) list_setting_number_pane_vc_t3

0x0002,

0xf7a9,	// (0x0001229b) list_setting_number_pane_vc_t_ParamLimits

0xf7a9,	// (0x0001229b) list_setting_number_pane_vc_t

0x0c6b,	// (0x0000375d) set_value_pane_vc_ParamLimits

0x0c6b,	// (0x0000375d) set_value_pane_vc

0x251b,	// (0x0000500d) list_double2_graphic_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double2_graphic_pane_vc

0x252e,	// (0x00005020) list_double2_large_graphic_pane_vc_ParamLimits

0x252e,	// (0x00005020) list_double2_large_graphic_pane_vc

0x251b,	// (0x0000500d) list_double2_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double2_pane_vc

0x251b,	// (0x0000500d) list_double_graphic_heading_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_graphic_heading_pane_vc

0x251b,	// (0x0000500d) list_double_graphic_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_graphic_pane_vc

0x251b,	// (0x0000500d) list_double_heading_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_heading_pane_vc

0x2540,	// (0x00005032) list_double_large_graphic_pane_vc_ParamLimits

0x2540,	// (0x00005032) list_double_large_graphic_pane_vc

0x251b,	// (0x0000500d) list_double_number_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_number_pane_vc

0x251b,	// (0x0000500d) list_double_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_pane_vc

0x251b,	// (0x0000500d) list_double_time_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_double_time_pane_vc

0x251b,	// (0x0000500d) list_setting_number_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_setting_number_pane_vc

0x251b,	// (0x0000500d) list_setting_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_setting_pane_vc

0x251b,	// (0x0000500d) list_single_graphic_heading_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_single_graphic_heading_pane_vc

0x251b,	// (0x0000500d) list_single_heading_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_single_heading_pane_vc

0x251b,	// (0x0000500d) list_single_number_heading_pane_vc_ParamLimits

0x251b,	// (0x0000500d) list_single_number_heading_pane_vc

0x2bf7,	// (0x000056e9) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x2bf7,	// (0x000056e9) list_double_graphic_heading_pane_vc_g1

0xf0c2,	// (0x00011bb4) list_double_graphic_heading_pane_vc_g2_ParamLimits

0xf0c2,	// (0x00011bb4) list_double_graphic_heading_pane_vc_g2

0x09be,	// (0x000034b0) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x09be,	// (0x000034b0) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf9ae,	// (0x000124a0) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf9ae,	// (0x000124a0) list_double_graphic_heading_pane_vc_g

0x2c03,	// (0x000056f5) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x2c03,	// (0x000056f5) list_double_graphic_heading_pane_vc_t1

0x2c17,	// (0x00005709) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x2c17,	// (0x00005709) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9b5,	// (0x000124a7) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9b5,	// (0x000124a7) list_double_graphic_heading_pane_vc_t

0x0bf7,	// (0x000036e9) list_setting_pane_vc_g1_ParamLimits

0x0bf7,	// (0x000036e9) list_setting_pane_vc_g1

0x0c03,	// (0x000036f5) list_setting_pane_vc_g2_ParamLimits

0x0c03,	// (0x000036f5) list_setting_pane_vc_g2

0x0001,

0xf7a4,	// (0x00012296) list_setting_pane_vc_g_ParamLimits

0xf7a4,	// (0x00012296) list_setting_pane_vc_g

0x2e85,	// (0x00005977) list_setting_pane_vc_t1_ParamLimits

0x2e85,	// (0x00005977) list_setting_pane_vc_t1

0x2ea1,	// (0x00005993) list_setting_pane_vc_t2_ParamLimits

0x2ea1,	// (0x00005993) list_setting_pane_vc_t2

0x0001,

0xf9f8,	// (0x000124ea) list_setting_pane_vc_t_ParamLimits

0xf9f8,	// (0x000124ea) list_setting_pane_vc_t

0x0c6b,	// (0x0000375d) set_value_pane_cp_vc_ParamLimits

0x0c6b,	// (0x0000375d) set_value_pane_cp_vc

0xf0c2,	// (0x00011bb4) list_single_number_heading_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_number_heading_pane_vc_g1

0x09be,	// (0x000034b0) list_single_number_heading_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_single_number_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_single_number_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_single_number_heading_pane_vc_g

0x2ebb,	// (0x000059ad) list_single_number_heading_pane_vc_t1_ParamLimits

0x2ebb,	// (0x000059ad) list_single_number_heading_pane_vc_t1

0x2ed1,	// (0x000059c3) list_single_number_heading_pane_vc_t2_ParamLimits

0x2ed1,	// (0x000059c3) list_single_number_heading_pane_vc_t2

0x2ee3,	// (0x000059d5) list_single_number_heading_pane_vc_t3_ParamLimits

0x2ee3,	// (0x000059d5) list_single_number_heading_pane_vc_t3

0x0002,

0xf9fd,	// (0x000124ef) list_single_number_heading_pane_vc_t_ParamLimits

0xf9fd,	// (0x000124ef) list_single_number_heading_pane_vc_t

0x2ef5,	// (0x000059e7) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x2ef5,	// (0x000059e7) list_single_graphic_heading_pane_vc_g1

0xf0c2,	// (0x00011bb4) list_single_graphic_heading_pane_vc_g4_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_graphic_heading_pane_vc_g4

0x09be,	// (0x000034b0) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x09be,	// (0x000034b0) list_single_graphic_heading_pane_vc_g5

0x0002,

0xfa04,	// (0x000124f6) list_single_graphic_heading_pane_vc_g_ParamLimits

0xfa04,	// (0x000124f6) list_single_graphic_heading_pane_vc_g

0x199b,	// (0x0000448d) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x199b,	// (0x0000448d) list_single_graphic_heading_pane_vc_t1

0x2f01,	// (0x000059f3) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x2f01,	// (0x000059f3) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa0b,	// (0x000124fd) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa0b,	// (0x000124fd) list_single_graphic_heading_pane_vc_t

0xf0c2,	// (0x00011bb4) list_double2_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_double2_pane_vc_g1

0x09be,	// (0x000034b0) list_double2_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_double2_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_double2_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_double2_pane_vc_g

0x2f13,	// (0x00005a05) list_double2_pane_vc_t1_ParamLimits

0x2f13,	// (0x00005a05) list_double2_pane_vc_t1

0x2f2b,	// (0x00005a1d) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2f2b,	// (0x00005a1d) list_double2_large_graphic_pane_vc_g1

0x2f37,	// (0x00005a29) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2f37,	// (0x00005a29) list_double2_large_graphic_pane_vc_g2

0x2f43,	// (0x00005a35) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2f43,	// (0x00005a35) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5c0,	// (0x000120b2) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5c0,	// (0x000120b2) list_double2_large_graphic_pane_vc_g

0x2f4f,	// (0x00005a41) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x2f4f,	// (0x00005a41) list_double2_large_graphic_pane_vc_t1

0x2f65,	// (0x00005a57) list_double_time_pane_vc_g1_ParamLimits

0x2f65,	// (0x00005a57) list_double_time_pane_vc_g1

0x2f71,	// (0x00005a63) list_double_time_pane_vc_g2_ParamLimits

0x2f71,	// (0x00005a63) list_double_time_pane_vc_g2

0x0001,

0xfa10,	// (0x00012502) list_double_time_pane_vc_g_ParamLimits

0xfa10,	// (0x00012502) list_double_time_pane_vc_g

0x2f7d,	// (0x00005a6f) list_double_time_pane_vc_t1_ParamLimits

0x2f7d,	// (0x00005a6f) list_double_time_pane_vc_t1

0x2fa1,	// (0x00005a93) list_double_time_pane_vc_t2_ParamLimits

0x2fa1,	// (0x00005a93) list_double_time_pane_vc_t2

0x2fd0,	// (0x00005ac2) list_double_time_pane_vc_t3_ParamLimits

0x2fd0,	// (0x00005ac2) list_double_time_pane_vc_t3

0x2fe2,	// (0x00005ad4) list_double_time_pane_vc_t4_ParamLimits

0x2fe2,	// (0x00005ad4) list_double_time_pane_vc_t4

0x0003,

0xfa15,	// (0x00012507) list_double_time_pane_vc_t_ParamLimits

0xfa15,	// (0x00012507) list_double_time_pane_vc_t

0xf0c2,	// (0x00011bb4) list_double_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_double_pane_vc_g1

0x09be,	// (0x000034b0) list_double_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_double_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_double_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_double_pane_vc_g

0x2ff6,	// (0x00005ae8) list_double_pane_vc_t1_ParamLimits

0x2ff6,	// (0x00005ae8) list_double_pane_vc_t1

0x300a,	// (0x00005afc) list_double_pane_vc_t2_ParamLimits

0x300a,	// (0x00005afc) list_double_pane_vc_t2

0x0001,

0xfa1e,	// (0x00012510) list_double_pane_vc_t_ParamLimits

0xfa1e,	// (0x00012510) list_double_pane_vc_t

0xf0c2,	// (0x00011bb4) list_double_number_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_double_number_pane_vc_g1

0x09be,	// (0x000034b0) list_double_number_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_double_number_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_double_number_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_double_number_pane_vc_g

0x3022,	// (0x00005b14) list_double_number_pane_vc_t1_ParamLimits

0x3022,	// (0x00005b14) list_double_number_pane_vc_t1

0x2ff6,	// (0x00005ae8) list_double_number_pane_vc_t2_ParamLimits

0x2ff6,	// (0x00005ae8) list_double_number_pane_vc_t2

0x3034,	// (0x00005b26) list_double_number_pane_vc_t3_ParamLimits

0x3034,	// (0x00005b26) list_double_number_pane_vc_t3

0x0002,

0xfa23,	// (0x00012515) list_double_number_pane_vc_t_ParamLimits

0xfa23,	// (0x00012515) list_double_number_pane_vc_t

0x304c,	// (0x00005b3e) list_double_large_graphic_pane_vc_g1_ParamLimits

0x304c,	// (0x00005b3e) list_double_large_graphic_pane_vc_g1

0x3068,	// (0x00005b5a) list_double_large_graphic_pane_vc_g2_ParamLimits

0x3068,	// (0x00005b5a) list_double_large_graphic_pane_vc_g2

0x307c,	// (0x00005b6e) list_double_large_graphic_pane_vc_g3_ParamLimits

0x307c,	// (0x00005b6e) list_double_large_graphic_pane_vc_g3

0x308b,	// (0x00005b7d) list_double_large_graphic_pane_vc_g4_ParamLimits

0x308b,	// (0x00005b7d) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa2a,	// (0x0001251c) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa2a,	// (0x0001251c) list_double_large_graphic_pane_vc_g

0x309a,	// (0x00005b8c) list_double_large_graphic_pane_vc_t1_ParamLimits

0x309a,	// (0x00005b8c) list_double_large_graphic_pane_vc_t1

0x30b6,	// (0x00005ba8) list_double_large_graphic_pane_vc_t2_ParamLimits

0x30b6,	// (0x00005ba8) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa33,	// (0x00012525) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa33,	// (0x00012525) list_double_large_graphic_pane_vc_t

0xf0c2,	// (0x00011bb4) list_double_heading_pane_vc_g1_ParamLimits

0xf0c2,	// (0x00011bb4) list_double_heading_pane_vc_g1

0x09be,	// (0x000034b0) list_double_heading_pane_vc_g2_ParamLimits

0x09be,	// (0x000034b0) list_double_heading_pane_vc_g2

0x0001,

0xf5a3,	// (0x00012095) list_double_heading_pane_vc_g_ParamLimits

0xf5a3,	// (0x00012095) list_double_heading_pane_vc_g

0x30d8,	// (0x00005bca) list_double_heading_pane_vc_t1_ParamLimits

0x30d8,	// (0x00005bca) list_double_heading_pane_vc_t1

0x30ec,	// (0x00005bde) list_double_heading_pane_vc_t2_ParamLimits

0x30ec,	// (0x00005bde) list_double_heading_pane_vc_t2

0x0001,

0xfa38,	// (0x0001252a) list_double_heading_pane_vc_t_ParamLimits

0xfa38,	// (0x0001252a) list_double_heading_pane_vc_t

0x3104,	// (0x00005bf6) list_double_graphic_pane_vc_g1_ParamLimits

0x3104,	// (0x00005bf6) list_double_graphic_pane_vc_g1

0x3117,	// (0x00005c09) list_double_graphic_pane_vc_g2_ParamLimits

0x3117,	// (0x00005c09) list_double_graphic_pane_vc_g2

0xf0c2,	// (0x00011bb4) list_double_graphic_pane_vc_g3_ParamLimits

0xf0c2,	// (0x00011bb4) list_double_graphic_pane_vc_g3

0x0003,

0xfa3d,	// (0x0001252f) list_double_graphic_pane_vc_g_ParamLimits

0xfa3d,	// (0x0001252f) list_double_graphic_pane_vc_g

0x3134,	// (0x00005c26) list_double_graphic_pane_vc_t1_ParamLimits

0x3134,	// (0x00005c26) list_double_graphic_pane_vc_t1

0x3153,	// (0x00005c45) list_double_graphic_pane_vc_t2_ParamLimits

0x3153,	// (0x00005c45) list_double_graphic_pane_vc_t2

0x0001,

0xfa46,	// (0x00012538) list_double_graphic_pane_vc_t_ParamLimits

0xfa46,	// (0x00012538) list_double_graphic_pane_vc_t

0xe011,	// (0x00010b03) aid_size_cell_fastswap

0x8d2e,	// (0x0000b820) aid_size_cell_touch_ParamLimits

0x8d2e,	// (0x0000b820) aid_size_cell_touch

0xe172,	// (0x00010c64) popup_fast_swap_wide_window_ParamLimits

0xe172,	// (0x00010c64) popup_fast_swap_wide_window

0x8efe,	// (0x0000b9f0) touch_pane_ParamLimits

0x8efe,	// (0x0000b9f0) touch_pane

0xe5cf,	// (0x000110c1) button_value_adjust_pane_cp2

0xe5d7,	// (0x000110c9) button_value_adjust_pane_cp4

0xe5df,	// (0x000110d1) form_field_data_pane_cp2

0x9959,	// (0x0000c44b) form_field_data_wide_pane_cp2

0xeb1a,	// (0x0001160c) bg_scroll_pane_ParamLimits

0x9c8f,	// (0x0000c781) scroll_handle_pane_ParamLimits

0xeb39,	// (0x0001162b) scroll_sc2_down_pane_ParamLimits

0xeb39,	// (0x0001162b) scroll_sc2_down_pane

0xeb60,	// (0x00011652) scroll_sc2_up_pane_ParamLimits

0xeb60,	// (0x00011652) scroll_sc2_up_pane

0xbb94,	// (0x0000e686) grid_wheel_folder_pane_g1_ParamLimits

0xbb94,	// (0x0000e686) grid_wheel_folder_pane_g1

0xefb7,	// (0x00011aa9) clock_nsta_pane_cp2_ParamLimits

0xefb7,	// (0x00011aa9) clock_nsta_pane_cp2

0x9fd1,	// (0x0000cac3) listscroll_midp_pane_ParamLimits

0x9fdd,	// (0x0000cacf) midp_canvas_pane

0xf4a5,	// (0x00011f97) nsta_clock_indic_pane

0xf4f1,	// (0x00011fe3) listscroll_form_pane_vc

0xf501,	// (0x00011ff3) listscroll_set_pane_vc_ParamLimits

0xf501,	// (0x00011ff3) listscroll_set_pane_vc

0xab8b,	// (0x0000d67d) clock_nsta_pane

0xabb5,	// (0x0000d6a7) indicator_nsta_pane

0x0a10,	// (0x00003502) bg_popup_sub_pane_cp2_ParamLimits

0x0a24,	// (0x00003516) find_pane_cp2_ParamLimits

0x0a24,	// (0x00003516) find_pane_cp2

0x0a3a,	// (0x0000352c) grid_toobar_pane_ParamLimits

0x0c7b,	// (0x0000376d) list_form_gen_pane_vc_ParamLimits

0x0c7b,	// (0x0000376d) list_form_gen_pane_vc

0x0c91,	// (0x00003783) scroll_pane_cp8_vc_ParamLimits

0x0c91,	// (0x00003783) scroll_pane_cp8_vc

0x0daa,	// (0x0000389c) data_form_wide_pane_vc_ParamLimits

0x0daa,	// (0x0000389c) data_form_wide_pane_vc

0x0db6,	// (0x000038a8) form_field_data_wide_pane_vc_g1

0x0dbe,	// (0x000038b0) form_field_data_wide_pane_vc_t1_ParamLimits

0x0dbe,	// (0x000038b0) form_field_data_wide_pane_vc_t1

0xe606,	// (0x000110f8) input_focus_pane_cp6_vc_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_cp6_vc

0x114c,	// (0x00003c3e) list_midp_pane_ParamLimits

0x279e,	// (0x00005290) scroll_pane_cp16_ParamLimits

0x279e,	// (0x00005290) scroll_pane_cp16

0x11a2,	// (0x00003c94) button_value_adjust_pane_ParamLimits

0x11a2,	// (0x00003c94) button_value_adjust_pane

0xb6dc,	// (0x0000e1ce) button_value_adjust_pane_cp6_ParamLimits

0xb6dc,	// (0x0000e1ce) button_value_adjust_pane_cp6

0xb7f6,	// (0x0000e2e8) settings_code_pane_cp_ParamLimits

0xb7f6,	// (0x0000e2e8) settings_code_pane_cp

0xdfef,	// (0x00010ae1) cell_touch_pane_g1

0xdfef,	// (0x00010ae1) cell_touch_pane_g2

0x0001,

0xf6ca,	// (0x000121bc) cell_touch_pane_g

0xba61,	// (0x0000e553) cell_touch_pane_cp_ParamLimits

0xba61,	// (0x0000e553) cell_touch_pane_cp

0xba7d,	// (0x0000e56f) cell_touch_pane_ParamLimits

0xba7d,	// (0x0000e56f) cell_touch_pane

0xdfef,	// (0x00010ae1) scroll_sc2_down_pane_g1

0xdfef,	// (0x00010ae1) scroll_sc2_up_pane_g1

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp4_vc

0x2c2f,	// (0x00005721) list_set_graphic_pane_vc_g1_ParamLimits

0x2c2f,	// (0x00005721) list_set_graphic_pane_vc_g1

0x2c3b,	// (0x0000572d) list_set_graphic_pane_vc_g2_ParamLimits

0x2c3b,	// (0x0000572d) list_set_graphic_pane_vc_g2

0x0001,

0xf9ba,	// (0x000124ac) list_set_graphic_pane_vc_g_ParamLimits

0xf9ba,	// (0x000124ac) list_set_graphic_pane_vc_g

0x2c47,	// (0x00005739) text_primary_small_cp13_vc_ParamLimits

0x2c47,	// (0x00005739) text_primary_small_cp13_vc

0x2c5f,	// (0x00005751) list_set_graphic_pane_vc_ParamLimits

0x2c5f,	// (0x00005751) list_set_graphic_pane_vc

0xe168,	// (0x00010c5a) input_focus_pane_cp2_vc

0xdfef,	// (0x00010ae1) setting_code_pane_vc_g1

0xe1fb,	// (0x00010ced) setting_code_pane_vc_t1

0x2c72,	// (0x00005764) set_text_pane_vc_t1_ParamLimits

0x2c72,	// (0x00005764) set_text_pane_vc_t1

0xe168,	// (0x00010c5a) input_focus_pane_cp1_vc

0x2c8f,	// (0x00005781) list_set_text_pane_vc

0xdfef,	// (0x00010ae1) setting_text_pane_vc_g1

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp2_vc

0xe1f2,	// (0x00010ce4) setting_slider_graphic_pane_vc_g1

0x2c99,	// (0x0000578b) setting_slider_graphic_pane_vc_t1

0x2ca9,	// (0x0000579b) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9bf,	// (0x000124b1) setting_slider_graphic_pane_vc_t

0x2cb9,	// (0x000057ab) slider_set_pane_cp_vc

0x2cc1,	// (0x000057b3) slider_set_pane_vc_g1

0x2cca,	// (0x000057bc) slider_set_pane_vc_g2

0x0006,

0xf9c4,	// (0x000124b6) slider_set_pane_vc_g

0xe6cc,	// (0x000111be) set_opt_bg_pane_g1_copy1

0xe6d4,	// (0x000111c6) set_opt_bg_pane_g2_copy1

0x2cf6,	// (0x000057e8) set_opt_bg_pane_g3_copy1

0xe6e4,	// (0x000111d6) set_opt_bg_pane_g4_copy1

0xe6ec,	// (0x000111de) set_opt_bg_pane_g5_copy1

0xe6f4,	// (0x000111e6) set_opt_bg_pane_g6_copy1

0x2cfe,	// (0x000057f0) set_opt_bg_pane_g7_copy1

0x2d08,	// (0x000057fa) set_opt_bg_pane_g8_copy1

0x2d10,	// (0x00005802) set_opt_bg_pane_g9_copy1

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp_vc

0x2d18,	// (0x0000580a) setting_slider_pane_vc_t1

0x2d27,	// (0x00005819) setting_slider_pane_vc_t2

0x2d37,	// (0x00005829) setting_slider_pane_vc_t3

0x0002,

0xf9d3,	// (0x000124c5) setting_slider_pane_vc_t

0x2d47,	// (0x00005839) slider_set_pane_vc

0x19c3,	// (0x000044b5) volume_set_pane_vc_g1

0x2d4f,	// (0x00005841) volume_set_pane_vc_g2

0x2d58,	// (0x0000584a) volume_set_pane_vc_g3

0x2d61,	// (0x00005853) volume_set_pane_vc_g4

0x2d6a,	// (0x0000585c) volume_set_pane_vc_g5

0x2d73,	// (0x00005865) volume_set_pane_vc_g6

0x2d7c,	// (0x0000586e) volume_set_pane_vc_g7

0x2d85,	// (0x00005877) volume_set_pane_vc_g8

0x2d8e,	// (0x00005880) volume_set_pane_vc_g9

0x2d97,	// (0x00005889) volume_set_pane_vc_g10

0x0009,

0xf9da,	// (0x000124cc) volume_set_pane_vc_g

0x2da0,	// (0x00005892) volume_set_pane_vc

0x2daa,	// (0x0000589c) button_value_adjust_pane_cp1_vc

0x2db4,	// (0x000058a6) list_highlight_pane_cp2_vc

0x2dbd,	// (0x000058af) list_set_pane_vc_ParamLimits

0x2dbd,	// (0x000058af) list_set_pane_vc

0x2e1b,	// (0x0000590d) main_pane_set_vc_t1_ParamLimits

0x2e1b,	// (0x0000590d) main_pane_set_vc_t1

0x2e30,	// (0x00005922) main_pane_set_vc_t2_ParamLimits

0x2e30,	// (0x00005922) main_pane_set_vc_t2

0x2e42,	// (0x00005934) main_pane_set_vc_t3_ParamLimits

0x2e42,	// (0x00005934) main_pane_set_vc_t3

0x2e54,	// (0x00005946) main_pane_set_vc_t4_ParamLimits

0x2e54,	// (0x00005946) main_pane_set_vc_t4

0x0003,

0xf9ef,	// (0x000124e1) main_pane_set_vc_t_ParamLimits

0xf9ef,	// (0x000124e1) main_pane_set_vc_t

0x2e66,	// (0x00005958) setting_code_pane_vc_ParamLimits

0x2e66,	// (0x00005958) setting_code_pane_vc

0x2e75,	// (0x00005967) setting_slider_graphic_pane_vc

0x2e75,	// (0x00005967) setting_slider_pane_vc

0x2e75,	// (0x00005967) setting_text_pane_vc

0x2e75,	// (0x00005967) setting_volume_pane_vc

0x2e7d,	// (0x0000596f) scroll_pane_cp121_vc

0xe5bd,	// (0x000110af) set_content_pane_vc

0x317d,	// (0x00005c6f) button_value_adjust_pane_g1

0x3186,	// (0x00005c78) button_value_adjust_pane_g2

0x0001,

0xfa4b,	// (0x0001253d) button_value_adjust_pane_g

0x318f,	// (0x00005c81) form_field_slider_wide_pane_vc_t1_ParamLimits

0x318f,	// (0x00005c81) form_field_slider_wide_pane_vc_t1

0x31a3,	// (0x00005c95) form_field_slider_wide_pane_vc_t2_ParamLimits

0x31a3,	// (0x00005c95) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa50,	// (0x00012542) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa50,	// (0x00012542) form_field_slider_wide_pane_vc_t

0xe1d6,	// (0x00010cc8) input_focus_pane_cp10_vc_ParamLimits

0xe1d6,	// (0x00010cc8) input_focus_pane_cp10_vc

0x31d1,	// (0x00005cc3) slider_cont_pane_cp1_vc_ParamLimits

0x31d1,	// (0x00005cc3) slider_cont_pane_cp1_vc

0x31e3,	// (0x00005cd5) slider_form_pane_g1_cp2

0x2cca,	// (0x000057bc) slider_form_pane_g2_cp2

0x3210,	// (0x00005d02) form_field_slider_pane_vc_t3

0x321e,	// (0x00005d10) form_field_slider_pane_vc_t4

0x322c,	// (0x00005d1e) slider_form_pane_vc_ParamLimits

0x322c,	// (0x00005d1e) slider_form_pane_vc

0x3239,	// (0x00005d2b) form_field_slider_pane_vc_t1_ParamLimits

0x3239,	// (0x00005d2b) form_field_slider_pane_vc_t1

0x31a3,	// (0x00005c95) form_field_slider_pane_vc_t2_ParamLimits

0x31a3,	// (0x00005c95) form_field_slider_pane_vc_t2

0x0001,

0xfa62,	// (0x00012554) form_field_slider_pane_vc_t_ParamLimits

0xfa62,	// (0x00012554) form_field_slider_pane_vc_t

0xe1d6,	// (0x00010cc8) input_focus_pane_cp9_vc_ParamLimits

0xe1d6,	// (0x00010cc8) input_focus_pane_cp9_vc

0x3255,	// (0x00005d47) slider_cont_pane_vc_ParamLimits

0x3255,	// (0x00005d47) slider_cont_pane_vc

0x3269,	// (0x00005d5b) list_form_graphic_pane_cp_vc_ParamLimits

0x3269,	// (0x00005d5b) list_form_graphic_pane_cp_vc

0x0db6,	// (0x000038a8) form_field_popup_wide_pane_vc_g1

0x327e,	// (0x00005d70) form_field_popup_wide_pane_vc_t1_ParamLimits

0x327e,	// (0x00005d70) form_field_popup_wide_pane_vc_t1

0xe606,	// (0x000110f8) input_focus_pane_cp8_vc_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_cp8_vc

0x32c3,	// (0x00005db5) list_form_wide_pane_vc_ParamLimits

0x32c3,	// (0x00005db5) list_form_wide_pane_vc

0x32cf,	// (0x00005dc1) list_form_graphic_pane_vc_g1

0x32d7,	// (0x00005dc9) list_form_graphic_pane_vc_t1_ParamLimits

0x32d7,	// (0x00005dc9) list_form_graphic_pane_vc_t1

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp5_vc_ParamLimits

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp5_vc

0x32f3,	// (0x00005de5) list_form_graphic_pane_vc_ParamLimits

0x32f3,	// (0x00005de5) list_form_graphic_pane_vc

0x0db6,	// (0x000038a8) form_field_popup_pane_vc_g1

0x3309,	// (0x00005dfb) form_field_popup_pane_vc_t1_ParamLimits

0x3309,	// (0x00005dfb) form_field_popup_pane_vc_t1

0xe606,	// (0x000110f8) input_focus_pane_cp7_vc_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_cp7_vc

0x3320,	// (0x00005e12) list_form_pane_vc_ParamLimits

0x3320,	// (0x00005e12) list_form_pane_vc

0x332c,	// (0x00005e1e) data_form_pane_vc_t1_ParamLimits

0x332c,	// (0x00005e1e) data_form_pane_vc_t1

0xe6cc,	// (0x000111be) input_focus_pane_vc_g1

0xe6d4,	// (0x000111c6) input_focus_pane_vc_g2

0xe6dc,	// (0x000111ce) input_focus_pane_vc_g3

0xe6e4,	// (0x000111d6) input_focus_pane_vc_g4

0xe6ec,	// (0x000111de) input_focus_pane_vc_g5

0xe6f4,	// (0x000111e6) input_focus_pane_vc_g6

0xe6fc,	// (0x000111ee) input_focus_pane_vc_g7

0xe704,	// (0x000111f6) input_focus_pane_vc_g8

0xe70c,	// (0x000111fe) input_focus_pane_vc_g9

0xdfef,	// (0x00010ae1) input_focus_pane_vc_g10

0x0009,

0xf653,	// (0x00012145) input_focus_pane_vc_g

0x0daa,	// (0x0000389c) data_form_pane_vc_ParamLimits

0x0daa,	// (0x0000389c) data_form_pane_vc

0x0db6,	// (0x000038a8) form_field_data_pane_vc_g1

0x3347,	// (0x00005e39) form_field_data_pane_vc_t1_ParamLimits

0x3347,	// (0x00005e39) form_field_data_pane_vc_t1

0xe606,	// (0x000110f8) input_focus_pane_vc_ParamLimits

0xe606,	// (0x000110f8) input_focus_pane_vc

0x3361,	// (0x00005e53) button_value_adjust_pane_cp3_vc

0x3369,	// (0x00005e5b) button_value_adjust_pane_cp5_vc

0x3371,	// (0x00005e63) form_field_data_pane_vc_ParamLimits

0x3371,	// (0x00005e63) form_field_data_pane_vc

0x3388,	// (0x00005e7a) form_field_data_pane_vc_cp2

0x3390,	// (0x00005e82) form_field_data_wide_pane_vc_ParamLimits

0x3390,	// (0x00005e82) form_field_data_wide_pane_vc

0x33a6,	// (0x00005e98) form_field_data_wide_pane_vc_cp2

0x33ae,	// (0x00005ea0) form_field_popup_pane_vc_ParamLimits

0x33ae,	// (0x00005ea0) form_field_popup_pane_vc

0x33c5,	// (0x00005eb7) form_field_popup_wide_pane_vc_ParamLimits

0x33c5,	// (0x00005eb7) form_field_popup_wide_pane_vc

0x33db,	// (0x00005ecd) form_field_slider_pane_vc_ParamLimits

0x33db,	// (0x00005ecd) form_field_slider_pane_vc

0x33ee,	// (0x00005ee0) form_field_slider_wide_pane_vc_ParamLimits

0x33ee,	// (0x00005ee0) form_field_slider_wide_pane_vc

0xba9a,	// (0x0000e58c) grid_touch_1_pane_ParamLimits

0xba9a,	// (0x0000e58c) grid_touch_1_pane

0xbaae,	// (0x0000e5a0) grid_touch_2_pane_ParamLimits

0xbaae,	// (0x0000e5a0) grid_touch_2_pane

0x34d2,	// (0x00005fc4) touch_pane_g1_ParamLimits

0x34d2,	// (0x00005fc4) touch_pane_g1

0x3425,	// (0x00005f17) cell_app_pane_cp_wide_ParamLimits

0x3425,	// (0x00005f17) cell_app_pane_cp_wide

0x3436,	// (0x00005f28) grid_popup_fast_wide_pane_ParamLimits

0x3436,	// (0x00005f28) grid_popup_fast_wide_pane

0x344a,	// (0x00005f3c) scroll_pane_cp19_ParamLimits

0x344a,	// (0x00005f3c) scroll_pane_cp19

0xe168,	// (0x00010c5a) bg_popup_window_pane_cp20

0x345e,	// (0x00005f50) listscroll_popup_fast_wide_pane

0xbad8,	// (0x0000e5ca) grid_indicator_nsta_pane

0x3478,	// (0x00005f6a) clock_nsta_pane_g1

0x3481,	// (0x00005f73) clock_nsta_pane_t1

0xbae4,	// (0x0000e5d6) cell_indicator_nsta_pane_ParamLimits

0xbae4,	// (0x0000e5d6) cell_indicator_nsta_pane

0x34d2,	// (0x00005fc4) cell_indicator_nsta_pane_g1

0xbaff,	// (0x0000e5f1) cell_indicator_nsta_pane_g2

0x0001,

0xfa73,	// (0x00012565) cell_indicator_nsta_pane_g

0x34f2,	// (0x00005fe4) clock_nsta_pane_cp

0x34fb,	// (0x00005fed) indicator_nsta_pane_cp

0x3505,	// (0x00005ff7) nsta_clock_indic_pane_g1

0xe23a,	// (0x00010d2c) grid_indicator_pane

0x9d29,	// (0x0000c81b) scroll_pane_cp29

0xeee4,	// (0x000119d6) indicator_nsta_pane_cp2_ParamLimits

0xeee4,	// (0x000119d6) indicator_nsta_pane_cp2

0xe1e4,	// (0x00010cd6) main_apps_wheel_pane

0xb03c,	// (0x0000db2e) form_midp_field_text_pane_ParamLimits

0x1158,	// (0x00003c4a) scroll_bar_cp050_ParamLimits

0x355e,	// (0x00006050) cell_indicator_pane_ParamLimits

0x355e,	// (0x00006050) cell_indicator_pane

0x3577,	// (0x00006069) cell_indicator_pane_g1

0xbb1e,	// (0x0000e610) grid_wheel_folder_pane_ParamLimits

0xbb1e,	// (0x0000e610) grid_wheel_folder_pane

0xbb2c,	// (0x0000e61e) list_wheel_apps_pane_ParamLimits

0xbb2c,	// (0x0000e61e) list_wheel_apps_pane

0xbb3a,	// (0x0000e62c) main_apps_wheel_pane_g1_ParamLimits

0xbb3a,	// (0x0000e62c) main_apps_wheel_pane_g1

0xbb46,	// (0x0000e638) main_apps_wheel_pane_g2_ParamLimits

0xbb46,	// (0x0000e638) main_apps_wheel_pane_g2

0x0001,

0xfa8f,	// (0x00012581) main_apps_wheel_pane_g_ParamLimits

0xfa8f,	// (0x00012581) main_apps_wheel_pane_g

0xbb54,	// (0x0000e646) main_apps_wheel_pane_t1_ParamLimits

0xbb54,	// (0x0000e646) main_apps_wheel_pane_t1

0xbb68,	// (0x0000e65a) list_wheel_apps_pane_g1

0xbb70,	// (0x0000e662) list_wheel_apps_pane_g2

0xbb78,	// (0x0000e66a) list_wheel_apps_pane_g3

0xbb80,	// (0x0000e672) list_wheel_apps_pane_g4

0xbb8a,	// (0x0000e67c) list_wheel_apps_pane_g5

0x0004,

0xfa94,	// (0x00012586) list_wheel_apps_pane_g

0xf17b,	// (0x00011c6d) navi_icon_text_pane

0xaa7f,	// (0x0000d571) aid_fill_nsta

0x363e,	// (0x00006130) navi_icon_text_pane_g1

0x364a,	// (0x0000613c) navi_icon_text_pane_t1

0xf053,	// (0x00011b45) list_set_graphic_pane_t1_ParamLimits

0xf053,	// (0x00011b45) list_set_graphic_pane_t1

0x18a3,	// (0x00004395) popup_midp_note_alarm_window_t6_ParamLimits

0x18a3,	// (0x00004395) popup_midp_note_alarm_window_t6

0x18b5,	// (0x000043a7) popup_midp_note_alarm_window_t7_ParamLimits

0x18b5,	// (0x000043a7) popup_midp_note_alarm_window_t7

0x18c7,	// (0x000043b9) popup_midp_note_alarm_window_t8_ParamLimits

0x18c7,	// (0x000043b9) popup_midp_note_alarm_window_t8

0x18d9,	// (0x000043cb) popup_midp_note_alarm_window_t9_ParamLimits

0x18d9,	// (0x000043cb) popup_midp_note_alarm_window_t9

0x18eb,	// (0x000043dd) popup_midp_note_alarm_window_t10_ParamLimits

0x18eb,	// (0x000043dd) popup_midp_note_alarm_window_t10

0x18fd,	// (0x000043ef) popup_midp_note_alarm_window_t11_ParamLimits

0x18fd,	// (0x000043ef) popup_midp_note_alarm_window_t11

0xb388,	// (0x0000de7a) scroll_pane_cp17_ParamLimits

0xb388,	// (0x0000de7a) scroll_pane_cp17

0x19c3,	// (0x000044b5) volume_small_pane_cp_g1

0x365c,	// (0x0000614e) volume_small_pane_cp_g2

0x3665,	// (0x00006157) volume_small_pane_cp_g3

0x366e,	// (0x00006160) volume_small_pane_cp_g4

0x3677,	// (0x00006169) volume_small_pane_cp_g5

0x2d6a,	// (0x0000585c) volume_small_pane_cp_g6

0x3680,	// (0x00006172) volume_small_pane_cp_g7

0x3689,	// (0x0000617b) volume_small_pane_cp_g8

0x3692,	// (0x00006184) volume_small_pane_cp_g9

0x369b,	// (0x0000618d) volume_small_pane_cp_g10

0xf2c0,	// (0x00011db2) midp_ticker_pane_g1_ParamLimits

0xf2cc,	// (0x00011dbe) midp_ticker_pane_g2_ParamLimits

0xf71f,	// (0x00012211) midp_ticker_pane_g_ParamLimits

0xf2d8,	// (0x00011dca) midp_ticker_pane_t1_ParamLimits

0xaaa3,	// (0x0000d595) aid_fill_nsta_2

0x1144,	// (0x00003c36) list_form2_midp_pane

0x24ce,	// (0x00004fc0) midp_editing_number_pane_ParamLimits

0x24dd,	// (0x00004fcf) midp_ticker_pane_ParamLimits

0x36a4,	// (0x00006196) form2_midp_field_pane

0x36c8,	// (0x000061ba) scroll_pane_cp51

0x36e8,	// (0x000061da) form2_midp_button_pane_ParamLimits

0x36e8,	// (0x000061da) form2_midp_button_pane

0x36fa,	// (0x000061ec) form2_midp_content_pane_ParamLimits

0x36fa,	// (0x000061ec) form2_midp_content_pane

0x3714,	// (0x00006206) form2_midp_field_choice_group_pane

0x371c,	// (0x0000620e) form2_midp_field_pane_g1

0x3724,	// (0x00006216) form2_midp_field_pane_g2

0x372c,	// (0x0000621e) form2_midp_field_pane_g3

0x3734,	// (0x00006226) form2_midp_field_pane_g4

0x0003,

0xfab9,	// (0x000125ab) form2_midp_field_pane_g

0x373c,	// (0x0000622e) form2_midp_gauge_slider_pane

0x3744,	// (0x00006236) form2_midp_gauge_wait_pane

0x374c,	// (0x0000623e) form2_midp_image_pane_ParamLimits

0x374c,	// (0x0000623e) form2_midp_image_pane

0xbbbd,	// (0x0000e6af) form2_midp_label_pane_ParamLimits

0xbbbd,	// (0x0000e6af) form2_midp_label_pane

0xbbd6,	// (0x0000e6c8) form2_midp_label_pane_cp_ParamLimits

0xbbd6,	// (0x0000e6c8) form2_midp_label_pane_cp

0x37a1,	// (0x00006293) form2_midp_string_pane_ParamLimits

0x37a1,	// (0x00006293) form2_midp_string_pane

0xbbf5,	// (0x0000e6e7) form2_midp_text_pane_ParamLimits

0xbbf5,	// (0x0000e6e7) form2_midp_text_pane

0x37ce,	// (0x000062c0) form2_midp_time_pane

0x37de,	// (0x000062d0) input_focus_pane_cp51_ParamLimits

0x37de,	// (0x000062d0) input_focus_pane_cp51

0xbc0e,	// (0x0000e700) form2_midp_label_pane_t1_ParamLimits

0xbc0e,	// (0x0000e700) form2_midp_label_pane_t1

0xbc4e,	// (0x0000e740) form2_mdip_text_pane_t1_ParamLimits

0xbc4e,	// (0x0000e740) form2_mdip_text_pane_t1

0x3856,	// (0x00006348) form2_midp_time_pane_t1

0x3871,	// (0x00006363) form2_midp_gauge_slider_pane_t1

0xbc6a,	// (0x0000e75c) form2_midp_gauge_slider_pane_t2

0xbc7c,	// (0x0000e76e) form2_midp_gauge_slider_pane_t3

0x0002,

0xfac2,	// (0x000125b4) form2_midp_gauge_slider_pane_t

0x38a7,	// (0x00006399) form2_midp_slider_pane

0x38b3,	// (0x000063a5) form2_midp_gauge_wait_pane_t1

0x38c1,	// (0x000063b3) form2_midp_wait_pane_ParamLimits

0x38c1,	// (0x000063b3) form2_midp_wait_pane

0xbc8e,	// (0x0000e780) list_single_2graphic_pane_cp4_ParamLimits

0xbc8e,	// (0x0000e780) list_single_2graphic_pane_cp4

0xaf7c,	// (0x0000da6e) list_single_midp_graphic_pane_cp_ParamLimits

0xaf7c,	// (0x0000da6e) list_single_midp_graphic_pane_cp

0xe168,	// (0x00010c5a) list_highlight_pane_cp20

0x3914,	// (0x00006406) list_single_2graphic_pane_g1_cp4

0x2aca,	// (0x000055bc) list_single_2graphic_pane_g2_cp4

0x391c,	// (0x0000640e) list_single_2graphic_pane_t1_cp4

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp21

0x392b,	// (0x0000641d) list_single_midp_graphic_pane_g4_cp

0x393a,	// (0x0000642c) list_single_midp_graphic_pane_t1_cp

0xbca3,	// (0x0000e795) form2_mdip_string_pane_t1_ParamLimits

0xbca3,	// (0x0000e795) form2_mdip_string_pane_t1

0xe168,	// (0x00010c5a) bg_wml_button_pane_cp2

0xdfef,	// (0x00010ae1) form2_midp_image_pane_g1

0xe570,	// (0x00011062) list_double_large_graphic_pane_g5_ParamLimits

0xe570,	// (0x00011062) list_double_large_graphic_pane_g5

0x9fd1,	// (0x0000cac3) midp_form_pane_ParamLimits

0xe1e4,	// (0x00010cd6) main_apps_wheel_pane_ParamLimits

0xa75d,	// (0x0000d24f) popup_preview_window_ParamLimits

0xa75d,	// (0x0000d24f) popup_preview_window

0xaa2a,	// (0x0000d51c) popup_touch_info_window_ParamLimits

0xaa2a,	// (0x0000d51c) popup_touch_info_window

0xaa48,	// (0x0000d53a) popup_touch_menu_window_ParamLimits

0xaa48,	// (0x0000d53a) popup_touch_menu_window

0xdfe5,	// (0x00010ad7) bg_popup_sub_pane_cp6

0x3a56,	// (0x00006548) list_touch_menu_pane

0xbd19,	// (0x0000e80b) list_single_touch_menu_pane_ParamLimits

0xbd19,	// (0x0000e80b) list_single_touch_menu_pane

0xbd2d,	// (0x0000e81f) list_single_touch_menu_pane_t1

0xe1e4,	// (0x00010cd6) bg_popup_sub_pane_cp7_ParamLimits

0xe1e4,	// (0x00010cd6) bg_popup_sub_pane_cp7

0x3a82,	// (0x00006574) heading_sub_pane

0x3a8a,	// (0x0000657c) list_touch_info_pane_ParamLimits

0x3a8a,	// (0x0000657c) list_touch_info_pane

0x3a99,	// (0x0000658b) list_single_touch_info_pane_ParamLimits

0x3a99,	// (0x0000658b) list_single_touch_info_pane

0x3aab,	// (0x0000659d) list_single_touch_info_pane_t1

0x3ab9,	// (0x000065ab) list_single_touch_info_pane_t2

0x0001,

0xfad0,	// (0x000125c2) list_single_touch_info_pane_t

0xf2a9,	// (0x00011d9b) bg_popup_heading_pane_cp

0x3ac7,	// (0x000065b9) heading_sub_pane_t1

0x0cbc,	// (0x000037ae) bg_popup_preview_window_pane_cp_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_preview_window_pane_cp

0x3a82,	// (0x00006574) heading_preview_pane

0x3a8a,	// (0x0000657c) list_preview_pane_ParamLimits

0x3a8a,	// (0x0000657c) list_preview_pane

0x3ad5,	// (0x000065c7) popup_preview_window_g1

0x3a99,	// (0x0000658b) list_single_preview_pane_ParamLimits

0x3a99,	// (0x0000658b) list_single_preview_pane

0x3add,	// (0x000065cf) list_single_preview_pane_g1

0x3ae5,	// (0x000065d7) list_single_preview_pane_t1

0x3aab,	// (0x0000659d) list_single_preview_pane_t2

0x0001,

0xfad5,	// (0x000125c7) list_single_preview_pane_t

0x3af3,	// (0x000065e5) bg_popup_heading_pane_cp2_ParamLimits

0x3af3,	// (0x000065e5) bg_popup_heading_pane_cp2

0x3b09,	// (0x000065fb) heading_preview_pane_g1

0x3b11,	// (0x00006603) heading_preview_pane_t1_ParamLimits

0x3b11,	// (0x00006603) heading_preview_pane_t1

0xe251,	// (0x00010d43) soft_indicator_pane_t1_ParamLimits

0xe530,	// (0x00011022) scroll_pane_ParamLimits

0xeb4e,	// (0x00011640) scroll_sc2_left_pane

0xeb57,	// (0x00011649) scroll_sc2_right_pane

0xeb76,	// (0x00011668) scroll_bg_pane_g1_ParamLimits

0xeb8b,	// (0x0001167d) scroll_bg_pane_g2_ParamLimits

0xeba3,	// (0x00011695) scroll_bg_pane_g3_ParamLimits

0xf6aa,	// (0x0001219c) scroll_bg_pane_g_ParamLimits

0xeb76,	// (0x00011668) scroll_handle_pane_g1_ParamLimits

0xebb8,	// (0x000116aa) scroll_handle_pane_g2_ParamLimits

0xeba3,	// (0x00011695) scroll_handle_pane_g3_ParamLimits

0xf6b1,	// (0x000121a3) scroll_handle_pane_g_ParamLimits

0xa32a,	// (0x0000ce1c) popup_choice_list_window_ParamLimits

0xa32a,	// (0x0000ce1c) popup_choice_list_window

0x0a1c,	// (0x0000350e) choice_list_pane

0x0af0,	// (0x000035e2) cell_toolbar_pane_t1

0x0b18,	// (0x0000360a) toolbar_button_pane_ParamLimits

0x1f33,	// (0x00004a25) ai_gene_pane_1_t2_ParamLimits

0x1f33,	// (0x00004a25) ai_gene_pane_1_t2

0x0001,

0xf8cd,	// (0x000123bf) ai_gene_pane_1_t_ParamLimits

0xf8cd,	// (0x000123bf) ai_gene_pane_1_t

0x3b2e,	// (0x00006620) scroll_sc2_left_pane_g1

0x3b2e,	// (0x00006620) scroll_sc2_right_pane_g1

0xf4e5,	// (0x00011fd7) bg_popup_sub_pane_cp10

0x3b38,	// (0x0000662a) list_choice_list_pane

0xb860,	// (0x0000e352) list_single_choice_list_pane_ParamLimits

0xb860,	// (0x0000e352) list_single_choice_list_pane

0xed2e,	// (0x00011820) list_single_choice_list_pane_g1

0x9b53,	// (0x0000c645) list_single_choice_list_pane_t1_ParamLimits

0x9b53,	// (0x0000c645) list_single_choice_list_pane_t1

0x3b6c,	// (0x0000665e) choice_list_pane_g1

0xbd3b,	// (0x0000e82d) choice_list_pane_t1

0xdfe5,	// (0x00010ad7) input_focus_pane_cp11

0xe969,	// (0x0001145b) title_pane_stacon_g2_ParamLimits

0xe969,	// (0x0001145b) title_pane_stacon_g2

0x0002,

0xf690,	// (0x00012182) title_pane_stacon_g_ParamLimits

0xf690,	// (0x00012182) title_pane_stacon_g

0xf2a9,	// (0x00011d9b) cursor_press_pane

0xa3d1,	// (0x0000cec3) popup_fep_hwr_window_ParamLimits

0xa3d1,	// (0x0000cec3) popup_fep_hwr_window

0x0114,	// (0x00002c06) popup_fep_vkb_window_ParamLimits

0x0114,	// (0x00002c06) popup_fep_vkb_window

0xbd49,	// (0x0000e83b) cursor_press_pane_g1

0x0002,

0xfafe,	// (0x000125f0) fep_vkb_side_pane_g_ParamLimits

0x3bc3,	// (0x000066b5) fep_hwr_candidate_pane_ParamLimits

0x3bc3,	// (0x000066b5) fep_hwr_candidate_pane

0x3bed,	// (0x000066df) fep_hwr_side_pane_ParamLimits

0x3bed,	// (0x000066df) fep_hwr_side_pane

0x3c0d,	// (0x000066ff) fep_hwr_top_pane_ParamLimits

0x3c0d,	// (0x000066ff) fep_hwr_top_pane

0x3c25,	// (0x00006717) fep_hwr_write_pane_ParamLimits

0x3c25,	// (0x00006717) fep_hwr_write_pane

0xfafe,	// (0x000125f0) fep_vkb_side_pane_g

0x3c5f,	// (0x00006751) fep_hwr_top_pane_g1

0x3c71,	// (0x00006763) fep_hwr_top_pane_g2

0x3c83,	// (0x00006775) fep_hwr_top_pane_g3

0x0002,

0xfada,	// (0x000125cc) fep_hwr_top_pane_g

0x3c98,	// (0x0000678a) fep_hwr_top_text_pane

0xec7b,	// (0x0001176d) fep_hwr_top_text_pane_g1

0x3d70,	// (0x00006862) fep_hwr_top_text_pane_t1

0x3dc0,	// (0x000068b2) fep_hwr_candidate_pane_g1

0x402b,	// (0x00006b1d) fep_vkb_keypad_pane_g3_ParamLimits

0x402b,	// (0x00006b1d) fep_vkb_keypad_pane_g3

0x4053,	// (0x00006b45) fep_vkb_keypad_pane_g4_ParamLimits

0x4053,	// (0x00006b45) fep_vkb_keypad_pane_g4

0x40c2,	// (0x00006bb4) fep_vkb_bottom_pane_g2_ParamLimits

0x40c2,	// (0x00006bb4) fep_vkb_bottom_pane_g2

0x0001,

0xfb05,	// (0x000125f7) fep_vkb_bottom_pane_g_ParamLimits

0xfb05,	// (0x000125f7) fep_vkb_bottom_pane_g

0x3b2e,	// (0x00006620) cell_vkb_side_pane_g2

0x0001,

0xfb0f,	// (0x00012601) cell_vkb_side_pane_g

0x414d,	// (0x00006c3f) cell_vkb_side_pane_t1

0x415b,	// (0x00006c4d) cell_vkb_side_pane_t1_copy1

0x3b2e,	// (0x00006620) bg_fep_vkb_candidate_pane_g2

0x4287,	// (0x00006d79) cell_vkb_candidate_pane_ParamLimits

0x3df4,	// (0x000068e6) aid_size_cell_vkb_ParamLimits

0x3df4,	// (0x000068e6) aid_size_cell_vkb

0x4287,	// (0x00006d79) cell_vkb_candidate_pane

0x42bb,	// (0x00006dad) bg_popup_fep_shadow_pane_g1

0xbdb0,	// (0x0000e8a2) fep_vkb_bottom_pane_ParamLimits

0xbdb0,	// (0x0000e8a2) fep_vkb_bottom_pane

0x3eb8,	// (0x000069aa) fep_vkb_candidate_pane_ParamLimits

0x3eb8,	// (0x000069aa) fep_vkb_candidate_pane

0xbdd5,	// (0x0000e8c7) fep_vkb_keypad_pane_ParamLimits

0xbdd5,	// (0x0000e8c7) fep_vkb_keypad_pane

0xbe0a,	// (0x0000e8fc) fep_vkb_side_pane_ParamLimits

0xbe0a,	// (0x0000e8fc) fep_vkb_side_pane

0xbe46,	// (0x0000e938) fep_vkb_top_pane_ParamLimits

0xbe46,	// (0x0000e938) fep_vkb_top_pane

0x3f84,	// (0x00006a76) fep_vkb_top_pane_g1_ParamLimits

0x3f84,	// (0x00006a76) fep_vkb_top_pane_g1

0x3f93,	// (0x00006a85) fep_vkb_top_pane_g2_ParamLimits

0x3f93,	// (0x00006a85) fep_vkb_top_pane_g2

0x3fa2,	// (0x00006a94) fep_vkb_top_pane_g3_ParamLimits

0x3fa2,	// (0x00006a94) fep_vkb_top_pane_g3

0x0003,

0xfaf5,	// (0x000125e7) fep_vkb_top_pane_g_ParamLimits

0xfaf5,	// (0x000125e7) fep_vkb_top_pane_g

0x3fc0,	// (0x00006ab2) fep_vkb_top_text_pane_ParamLimits

0x3fc0,	// (0x00006ab2) fep_vkb_top_text_pane

0xbe7b,	// (0x0000e96d) fep_vkb_side_pane_g1_ParamLimits

0xbe7b,	// (0x0000e96d) fep_vkb_side_pane_g1

0x401a,	// (0x00006b0c) grid_vkb_side_pane_ParamLimits

0x401a,	// (0x00006b0c) grid_vkb_side_pane

0x42c3,	// (0x00006db5) bg_popup_fep_shadow_pane_g2

0x42cc,	// (0x00006dbe) bg_popup_fep_shadow_pane_g3

0x42d4,	// (0x00006dc6) bg_popup_fep_shadow_pane_g4

0x42dd,	// (0x00006dcf) bg_popup_fep_shadow_pane_g5

0x42e7,	// (0x00006dd9) bg_popup_fep_shadow_pane_g6

0x42ef,	// (0x00006de1) bg_popup_fep_shadow_pane_g7

0xe6ec,	// (0x000111de) bg_popup_fep_shadow_pane_g8

0x4071,	// (0x00006b63) grid_vkb_keypad_number_pane_ParamLimits

0x4071,	// (0x00006b63) grid_vkb_keypad_number_pane

0x4081,	// (0x00006b73) grid_vkb_keypad_pane_ParamLimits

0x4081,	// (0x00006b73) grid_vkb_keypad_pane

0x40a7,	// (0x00006b99) fep_vkb_bottom_pane_g1_ParamLimits

0x40a7,	// (0x00006b99) fep_vkb_bottom_pane_g1

0x40d0,	// (0x00006bc2) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x40d0,	// (0x00006bc2) grid_vkb_keypad_bottom_left_pane

0x40e5,	// (0x00006bd7) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x40e5,	// (0x00006bd7) grid_vkb_keypad_bottom_right_pane

0x40fa,	// (0x00006bec) fep_vkb_top_text_pane_g1

0xbec2,	// (0x0000e9b4) fep_vkb_top_text_pane_t1

0xbed4,	// (0x0000e9c6) cell_vkb_side_pane_ParamLimits

0xbed4,	// (0x0000e9c6) cell_vkb_side_pane

0x3b2e,	// (0x00006620) cell_vkb_side_pane_g1

0x4169,	// (0x00006c5b) cell_vkb_keypad_pane_ParamLimits

0x4169,	// (0x00006c5b) cell_vkb_keypad_pane

0x41de,	// (0x00006cd0) cell_vkb_keypad_pane_g1

0x0008,

0xfb22,	// (0x00012614) bg_popup_fep_shadow_pane_g

0x3b2e,	// (0x00006620) cell_hwr_side_pane_g1

0x3b2e,	// (0x00006620) cell_hwr_side_pane_g2

0x41e8,	// (0x00006cda) cell_vkb_keypad_pane_t1

0xbeea,	// (0x0000e9dc) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xbeea,	// (0x0000e9dc) cell_vkb_keypad_bottom_left_pane

0xbeff,	// (0x0000e9f1) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xbeff,	// (0x0000e9f1) cell_vkb_keypad_bottom_right_pane

0x3b2e,	// (0x00006620) cell_vkb_keypad_bottom_left_pane_g1

0x3b2e,	// (0x00006620) cell_vkb_keypad_bottom_right_pane_g1

0x424c,	// (0x00006d3e) cell_vkb_keypad_number_pane_ParamLimits

0x424c,	// (0x00006d3e) cell_vkb_keypad_number_pane

0x426b,	// (0x00006d5d) cell_vkb_keypad_number_pane_g1

0x4275,	// (0x00006d67) cell_vkb_keypad_number_pane_g2

0x427e,	// (0x00006d70) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb14,	// (0x00012606) cell_vkb_keypad_number_pane_g

0x41e8,	// (0x00006cda) cell_vkb_keypad_number_pane_t1

0x42a2,	// (0x00006d94) fep_vkb_candidate_pane_g1

0x0001,

0xfb0f,	// (0x00012601) cell_hwr_side_pane_g

0x4301,	// (0x00006df3) cell_hwr_side_pane_t1

0x430f,	// (0x00006e01) cell_hwr_side_pane_t1_copy1

0x3fb2,	// (0x00006aa4) cell_hwr_candidate_pane_g1

0x435f,	// (0x00006e51) cell_hwr_candidate_pane_t1

0x3b2e,	// (0x00006620) cell_vkb_candidate_pane_g2

0x43b3,	// (0x00006ea5) cell_vkb_candidate_pane_t1

0x3b8a,	// (0x0000667c) bg_popup_fep_shadow_pane_ParamLimits

0x3b8a,	// (0x0000667c) bg_popup_fep_shadow_pane

0x3c3f,	// (0x00006731) bg_fep_hwr_top_pane_g4

0x3cad,	// (0x0000679f) bg_hwr_side_pane_g1_ParamLimits

0x3cad,	// (0x0000679f) bg_hwr_side_pane_g1

0xbd69,	// (0x0000e85b) cell_hwr_side_pane_ParamLimits

0xbd69,	// (0x0000e85b) cell_hwr_side_pane

0x3d1b,	// (0x0000680d) fep_hwr_write_pane_g1_ParamLimits

0x3d1b,	// (0x0000680d) fep_hwr_write_pane_g1

0x3d28,	// (0x0000681a) fep_hwr_write_pane_g2_ParamLimits

0x3d28,	// (0x0000681a) fep_hwr_write_pane_g2

0x3d35,	// (0x00006827) fep_hwr_write_pane_g3_ParamLimits

0x3d35,	// (0x00006827) fep_hwr_write_pane_g3

0xbd89,	// (0x0000e87b) fep_hwr_write_pane_g4_ParamLimits

0xbd89,	// (0x0000e87b) fep_hwr_write_pane_g4

0x0005,

0xfae1,	// (0x000125d3) fep_hwr_write_pane_g_ParamLimits

0xfae1,	// (0x000125d3) fep_hwr_write_pane_g

0x3c3f,	// (0x00006731) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x3c3f,	// (0x00006731) bg_fep_hwr_candidate_pane_g2

0x3d7e,	// (0x00006870) cell_hwr_candidate_pane_ParamLimits

0x3d7e,	// (0x00006870) cell_hwr_candidate_pane

0x3dc0,	// (0x000068b2) fep_hwr_candidate_pane_g1_ParamLimits

0x3e22,	// (0x00006914) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x3e22,	// (0x00006914) bg_popup_fep_shadow_pane_cp2

0x3fb2,	// (0x00006aa4) fep_vkb_top_pane_g4_ParamLimits

0x3fb2,	// (0x00006aa4) fep_vkb_top_pane_g4

0x3ff8,	// (0x00006aea) fep_vkb_side_pane_g2_ParamLimits

0x3ff8,	// (0x00006aea) fep_vkb_side_pane_g2

0x987e,	// (0x0000c370) list_setting_pane_t4_ParamLimits

0x987e,	// (0x0000c370) list_setting_pane_t4

0x98f8,	// (0x0000c3ea) list_setting_number_pane_t5_ParamLimits

0x98f8,	// (0x0000c3ea) list_setting_number_pane_t5

0xecd1,	// (0x000117c3) list_double_heading_pane_cp2_ParamLimits

0xecd1,	// (0x000117c3) list_double_heading_pane_cp2

0xe78d,	// (0x0001127f) list_double_heading_pane_g1_cp2_ParamLimits

0xe78d,	// (0x0001127f) list_double_heading_pane_g1_cp2

0x43c1,	// (0x00006eb3) list_double_heading_pane_g2_cp2_ParamLimits

0x43c1,	// (0x00006eb3) list_double_heading_pane_g2_cp2

0x43d5,	// (0x00006ec7) list_double_heading_pane_t1_cp2_ParamLimits

0x43d5,	// (0x00006ec7) list_double_heading_pane_t1_cp2

0x43eb,	// (0x00006edd) list_double_heading_pane_t2_cp2_ParamLimits

0x43eb,	// (0x00006edd) list_double_heading_pane_t2_cp2

0xdfdd,	// (0x00010acf) aid_value_unit2

0xe188,	// (0x00010c7a) popup_preview_fixed_window

0xe328,	// (0x00010e1a) bg_popup_preview_window_pane_cp02

0x43fd,	// (0x00006eef) list_preview_fixed_pane

0x4443,	// (0x00006f35) list_empty_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_empty_pane_fp

0x4443,	// (0x00006f35) list_single_cale_day_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_cale_day_pane_fp

0x4443,	// (0x00006f35) list_single_graphic_heading_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_graphic_heading_pane_fp

0x4443,	// (0x00006f35) list_single_graphic_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_graphic_pane_fp

0x4443,	// (0x00006f35) list_single_heading_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_heading_pane_fp

0x4443,	// (0x00006f35) list_single_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_pane_fp

0x4459,	// (0x00006f4b) list_single_pane_fp_g1_ParamLimits

0x4459,	// (0x00006f4b) list_single_pane_fp_g1

0xe799,	// (0x0001128b) list_single_pane_fp_g2_ParamLimits

0xe799,	// (0x0001128b) list_single_pane_fp_g2

0x4465,	// (0x00006f57) list_single_pane_fp_g3_ParamLimits

0x4465,	// (0x00006f57) list_single_pane_fp_g3

0x4479,	// (0x00006f6b) list_single_pane_fp_g4_ParamLimits

0x4479,	// (0x00006f6b) list_single_pane_fp_g4

0x0003,

0xfb43,	// (0x00012635) list_single_pane_fp_g_ParamLimits

0xfb43,	// (0x00012635) list_single_pane_fp_g

0x4485,	// (0x00006f77) list_single_pane_fp_t1_ParamLimits

0x4485,	// (0x00006f77) list_single_pane_fp_t1

0x449c,	// (0x00006f8e) list_single_graphic_pane_fp_g1_ParamLimits

0x449c,	// (0x00006f8e) list_single_graphic_pane_fp_g1

0x4459,	// (0x00006f4b) list_single_graphic_pane_fp_g2_ParamLimits

0x4459,	// (0x00006f4b) list_single_graphic_pane_fp_g2

0xe799,	// (0x0001128b) list_single_graphic_pane_fp_g3_ParamLimits

0xe799,	// (0x0001128b) list_single_graphic_pane_fp_g3

0x4465,	// (0x00006f57) list_single_graphic_pane_fp_g4_ParamLimits

0x4465,	// (0x00006f57) list_single_graphic_pane_fp_g4

0x4479,	// (0x00006f6b) list_single_graphic_pane_fp_g5_ParamLimits

0x4479,	// (0x00006f6b) list_single_graphic_pane_fp_g5

0x0004,

0xfb4c,	// (0x0001263e) list_single_graphic_pane_fp_g_ParamLimits

0xfb4c,	// (0x0001263e) list_single_graphic_pane_fp_g

0x44a8,	// (0x00006f9a) list_single_graphic_pane_fp_t1_ParamLimits

0x44a8,	// (0x00006f9a) list_single_graphic_pane_fp_t1

0x449c,	// (0x00006f8e) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x449c,	// (0x00006f8e) list_single_graphic_heading_pane_fp_g1

0x4459,	// (0x00006f4b) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x4459,	// (0x00006f4b) list_single_graphic_heading_pane_fp_g2

0xe799,	// (0x0001128b) list_single_graphic_heading_pane_fp_g3_ParamLimits

0xe799,	// (0x0001128b) list_single_graphic_heading_pane_fp_g3

0x4465,	// (0x00006f57) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x4465,	// (0x00006f57) list_single_graphic_heading_pane_fp_g4

0x4479,	// (0x00006f6b) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x4479,	// (0x00006f6b) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x0001263e) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x0001263e) list_single_graphic_heading_pane_fp_g

0x44be,	// (0x00006fb0) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x44be,	// (0x00006fb0) list_single_graphic_heading_pane_fp_t1

0x44d4,	// (0x00006fc6) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x44d4,	// (0x00006fc6) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb57,	// (0x00012649) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb57,	// (0x00012649) list_single_graphic_heading_pane_fp_t

0x44e6,	// (0x00006fd8) list_single_cale_day_pane_fp_g1_ParamLimits

0x44e6,	// (0x00006fd8) list_single_cale_day_pane_fp_g1

0x451e,	// (0x00007010) list_single_cale_day_pane_fp_g2_ParamLimits

0x451e,	// (0x00007010) list_single_cale_day_pane_fp_g2

0x452a,	// (0x0000701c) list_single_cale_day_pane_fp_g3_ParamLimits

0x452a,	// (0x0000701c) list_single_cale_day_pane_fp_g3

0x4552,	// (0x00007044) list_single_cale_day_pane_fp_g4_ParamLimits

0x4552,	// (0x00007044) list_single_cale_day_pane_fp_g4

0x4576,	// (0x00007068) list_single_cale_day_pane_fp_g5_ParamLimits

0x4576,	// (0x00007068) list_single_cale_day_pane_fp_g5

0x0004,

0xfb5c,	// (0x0001264e) list_single_cale_day_pane_fp_g_ParamLimits

0xfb5c,	// (0x0001264e) list_single_cale_day_pane_fp_g

0x459a,	// (0x0000708c) list_single_cale_day_pane_fp_t1_ParamLimits

0x459a,	// (0x0000708c) list_single_cale_day_pane_fp_t1

0x45c0,	// (0x000070b2) list_single_cale_day_pane_fp_t2_ParamLimits

0x45c0,	// (0x000070b2) list_single_cale_day_pane_fp_t2

0x45d9,	// (0x000070cb) list_single_cale_day_pane_fp_t3_ParamLimits

0x45d9,	// (0x000070cb) list_single_cale_day_pane_fp_t3

0x0002,

0xfb67,	// (0x00012659) list_single_cale_day_pane_fp_t_ParamLimits

0xfb67,	// (0x00012659) list_single_cale_day_pane_fp_t

0x4459,	// (0x00006f4b) list_empty_pane_fp_g1_ParamLimits

0x4459,	// (0x00006f4b) list_empty_pane_fp_g1

0x45f2,	// (0x000070e4) list_empty_pane_fp_t1

0x4600,	// (0x000070f2) list_empty_pane_fp_t2

0x0001,

0xfb6e,	// (0x00012660) list_empty_pane_fp_t

0x4459,	// (0x00006f4b) list_single_heading_pane_fp_g1_ParamLimits

0x4459,	// (0x00006f4b) list_single_heading_pane_fp_g1

0xe799,	// (0x0001128b) list_single_heading_pane_fp_g2_ParamLimits

0xe799,	// (0x0001128b) list_single_heading_pane_fp_g2

0x4465,	// (0x00006f57) list_single_heading_pane_fp_g3_ParamLimits

0x4465,	// (0x00006f57) list_single_heading_pane_fp_g3

0x0002,

0xfb73,	// (0x00012665) list_single_heading_pane_fp_g_ParamLimits

0xfb73,	// (0x00012665) list_single_heading_pane_fp_g

0x460e,	// (0x00007100) list_single_heading_pane_fp_t1_ParamLimits

0x460e,	// (0x00007100) list_single_heading_pane_fp_t1

0x4620,	// (0x00007112) list_single_heading_pane_fp_t2_ParamLimits

0x4620,	// (0x00007112) list_single_heading_pane_fp_t2

0x0001,

0xfb7a,	// (0x0001266c) list_single_heading_pane_fp_t_ParamLimits

0xfb7a,	// (0x0001266c) list_single_heading_pane_fp_t

0x9b9f,	// (0x0000c691) aid_size_cell_fast

0xe30b,	// (0x00010dfd) soft_indicator_pane_cp1_t1

0x9ba8,	// (0x0000c69a) cell_app_pane_cp2_ParamLimits

0x9ba8,	// (0x0000c69a) cell_app_pane_cp2

0x3bac,	// (0x0000669e) fep_hwr_candidate_drop_down_list_pane

0x3dda,	// (0x000068cc) fep_hwr_candidate_pane_g3_ParamLimits

0x3dda,	// (0x000068cc) fep_hwr_candidate_pane_g3

0x3de7,	// (0x000068d9) fep_hwr_candidate_pane_g4_ParamLimits

0x3de7,	// (0x000068d9) fep_hwr_candidate_pane_g4

0x0002,

0xfaee,	// (0x000125e0) fep_hwr_candidate_pane_g_ParamLimits

0xfaee,	// (0x000125e0) fep_hwr_candidate_pane_g

0x3ea7,	// (0x00006999) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x3ea7,	// (0x00006999) fep_vkb_candidate_drop_down_list_pane

0x42aa,	// (0x00006d9c) fep_vkb_candidate_pane_g3

0x42b2,	// (0x00006da4) fep_vkb_candidate_pane_g4

0x0002,

0xfb1b,	// (0x0001260d) fep_vkb_candidate_pane_g

0x3fb2,	// (0x00006aa4) cell_hwr_candidate_pane_g1_ParamLimits

0x431d,	// (0x00006e0f) cell_hwr_candidate_pane_g3_ParamLimits

0x431d,	// (0x00006e0f) cell_hwr_candidate_pane_g3

0x433e,	// (0x00006e30) cell_hwr_candidate_pane_g4_ParamLimits

0x433e,	// (0x00006e30) cell_hwr_candidate_pane_g4

0x0002,

0xfb35,	// (0x00012627) cell_hwr_candidate_pane_g_ParamLimits

0xfb35,	// (0x00012627) cell_hwr_candidate_pane_g

0x437d,	// (0x00006e6f) cell_vkb_candidate_pane_g3_ParamLimits

0x437d,	// (0x00006e6f) cell_vkb_candidate_pane_g3

0x4398,	// (0x00006e8a) cell_vkb_candidate_pane_g4_ParamLimits

0x4398,	// (0x00006e8a) cell_vkb_candidate_pane_g4

0xbf1a,	// (0x0000ea0c) cell_app_pane_cp2_g1_ParamLimits

0xbf1a,	// (0x0000ea0c) cell_app_pane_cp2_g1

0x4654,	// (0x00007146) cell_app_pane_cp2_g2_ParamLimits

0x4654,	// (0x00007146) cell_app_pane_cp2_g2

0x0001,

0xfb7f,	// (0x00012671) cell_app_pane_cp2_g_ParamLimits

0xfb7f,	// (0x00012671) cell_app_pane_cp2_g

0x4660,	// (0x00007152) cell_app_pane_cp2_t1_ParamLimits

0x4660,	// (0x00007152) cell_app_pane_cp2_t1

0xe606,	// (0x000110f8) grid_highlight_pane_cp1_ParamLimits

0xe606,	// (0x000110f8) grid_highlight_pane_cp1

0x4672,	// (0x00007164) cell_hwr_candidate_pane_cp1_ParamLimits

0x4672,	// (0x00007164) cell_hwr_candidate_pane_cp1

0x3fb2,	// (0x00006aa4) fep_hwr_candidate_drop_down_list_pane_g1

0x4691,	// (0x00007183) fep_hwr_candidate_drop_down_list_pane_g2

0x469e,	// (0x00007190) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x00012676) fep_hwr_candidate_drop_down_list_pane_g

0x46ab,	// (0x0000719d) fep_hwr_candidate_drop_down_list_scroll_pane

0x46b4,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x46b4,	// (0x000071a6) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x46c1,	// (0x000071b3) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x46c1,	// (0x000071b3) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x46ce,	// (0x000071c0) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x46ce,	// (0x000071c0) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x437d,	// (0x00006e6f) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x437d,	// (0x00006e6f) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x4398,	// (0x00006e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x4398,	// (0x00006e8a) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x46db,	// (0x000071cd) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x46db,	// (0x000071cd) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x46f6,	// (0x000071e8) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x46f6,	// (0x000071e8) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x4711,	// (0x00007203) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x4711,	// (0x00007203) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb8b,	// (0x0001267d) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb8b,	// (0x0001267d) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x472c,	// (0x0000721e) cell_vkb_candidate_pane_cp1_ParamLimits

0x472c,	// (0x0000721e) cell_vkb_candidate_pane_cp1

0x3fb2,	// (0x00006aa4) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x3fb2,	// (0x00006aa4) fep_vkb_candidate_drop_down_list_pane_g1

0x4691,	// (0x00007183) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x4691,	// (0x00007183) fep_vkb_candidate_drop_down_list_pane_g2

0x469e,	// (0x00007190) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x469e,	// (0x00007190) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfb84,	// (0x00012676) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfb84,	// (0x00012676) fep_vkb_candidate_drop_down_list_pane_g

0x474c,	// (0x0000723e) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x474c,	// (0x0000723e) fep_vkb_candidate_drop_down_list_scroll_pane

0x4759,	// (0x0000724b) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x4759,	// (0x0000724b) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x4766,	// (0x00007258) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x4766,	// (0x00007258) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x4772,	// (0x00007264) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x4772,	// (0x00007264) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x431d,	// (0x00006e0f) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x431d,	// (0x00006e0f) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x433e,	// (0x00006e30) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x433e,	// (0x00006e30) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x477e,	// (0x00007270) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x477e,	// (0x00007270) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x479f,	// (0x00007291) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x479f,	// (0x00007291) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x47c0,	// (0x000072b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x47c0,	// (0x000072b2) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfb9c,	// (0x0001268e) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfb9c,	// (0x0001268e) fep_vkb_candidate_drop_down_list_scroll_pane_g

0x8f54,	// (0x0000ba46) title_pane_g1_ParamLimits

0x8f67,	// (0x0000ba59) title_pane_g2_ParamLimits

0xf529,	// (0x0001201b) title_pane_g_ParamLimits

0xec6b,	// (0x0001175d) aid_call2_pane

0xec73,	// (0x00011765) aid_call_pane

0xec7b,	// (0x0001176d) popup_clock_analogue_window_g1

0xec7b,	// (0x0001176d) popup_clock_analogue_window_g2

0xec83,	// (0x00011775) popup_clock_analogue_window_g3

0xec8c,	// (0x0001177e) popup_clock_analogue_window_g4

0xdfef,	// (0x00010ae1) popup_clock_analogue_window_g5

0x0004,

0xf6bf,	// (0x000121b1) popup_clock_analogue_window_g

0xec94,	// (0x00011786) popup_clock_analogue_window_t1

0xecf2,	// (0x000117e4) clock_digital_number_pane_ParamLimits

0xecf2,	// (0x000117e4) clock_digital_number_pane

0xecfe,	// (0x000117f0) clock_digital_number_pane_cp02_ParamLimits

0xecfe,	// (0x000117f0) clock_digital_number_pane_cp02

0xed0a,	// (0x000117fc) clock_digital_number_pane_cp03_ParamLimits

0xed0a,	// (0x000117fc) clock_digital_number_pane_cp03

0xed16,	// (0x00011808) clock_digital_number_pane_cp04_ParamLimits

0xed16,	// (0x00011808) clock_digital_number_pane_cp04

0xed22,	// (0x00011814) clock_digital_separator_pane_ParamLimits

0xed22,	// (0x00011814) clock_digital_separator_pane

0xed3e,	// (0x00011830) popup_clock_digital_window_t1_ParamLimits

0xed3e,	// (0x00011830) popup_clock_digital_window_t1

0xdfef,	// (0x00010ae1) clock_digital_number_pane_g1

0xdfef,	// (0x00010ae1) clock_digital_number_pane_g2

0x0001,

0xf6ca,	// (0x000121bc) clock_digital_number_pane_g

0xdfef,	// (0x00010ae1) clock_digital_separator_pane_g1

0xdfef,	// (0x00010ae1) clock_digital_separator_pane_g2

0x0001,

0xf6ca,	// (0x000121bc) clock_digital_separator_pane_g

0xaa7f,	// (0x0000d571) aid_fill_nsta_ParamLimits

0xabb5,	// (0x0000d6a7) indicator_nsta_pane_ParamLimits

0x084e,	// (0x00003340) popup_clock_analogue_window

0x084e,	// (0x00003340) popup_clock_digital_window

0xbad8,	// (0x0000e5ca) grid_indicator_nsta_pane_ParamLimits

0x348f,	// (0x00005f81) clock_nsta_pane_t2

0x0001,

0xfa6e,	// (0x00012560) clock_nsta_pane_t

0xeb10,	// (0x00011602) aid_size_max_handle

0x9c86,	// (0x0000c778) aid_size_min_handle

0xf2a9,	// (0x00011d9b) editor_scroll_pane

0x47db,	// (0x000072cd) ex_editor_pane

0xe7be,	// (0x000112b0) scroll_pane_cp13

0xe55c,	// (0x0001104e) scroll_pane_cp14

0xecc9,	// (0x000117bb) scroll_pane_cp36

0x9d50,	// (0x0000c842) list_single_graphic_hl_pane_cp2_ParamLimits

0x9d50,	// (0x0000c842) list_single_graphic_hl_pane_cp2

0xb874,	// (0x0000e366) list_single_graphic_hl_pane_ParamLimits

0xb874,	// (0x0000e366) list_single_graphic_hl_pane

0x7061,	// (0x00009b53) aid_size_min_hl_cp1

0x47ec,	// (0x000072de) list_highlight_pane_cp34_ParamLimits

0x47ec,	// (0x000072de) list_highlight_pane_cp34

0x47fd,	// (0x000072ef) list_single_graphic_hl_pane_g1_ParamLimits

0x47fd,	// (0x000072ef) list_single_graphic_hl_pane_g1

0xbf38,	// (0x0000ea2a) list_single_graphic_hl_pane_g2_ParamLimits

0xbf38,	// (0x0000ea2a) list_single_graphic_hl_pane_g2

0xbf38,	// (0x0000ea2a) list_single_graphic_hl_pane_g3_ParamLimits

0xbf38,	// (0x0000ea2a) list_single_graphic_hl_pane_g3

0xf234,	// (0x00011d26) list_single_graphic_hl_pane_g4_ParamLimits

0xf234,	// (0x00011d26) list_single_graphic_hl_pane_g4

0xbf44,	// (0x0000ea36) list_single_graphic_hl_pane_g5_ParamLimits

0xbf44,	// (0x0000ea36) list_single_graphic_hl_pane_g5

0x0004,

0xfbad,	// (0x0001269f) list_single_graphic_hl_pane_g_ParamLimits

0xfbad,	// (0x0001269f) list_single_graphic_hl_pane_g

0xbf58,	// (0x0000ea4a) list_single_graphic_hl_pane_t1_ParamLimits

0xbf58,	// (0x0000ea4a) list_single_graphic_hl_pane_t1

0x4840,	// (0x00007332) aid_size_min_hl_cp2

0x4849,	// (0x0000733b) list_highlight_pane_cp34_cp2_ParamLimits

0x4849,	// (0x0000733b) list_highlight_pane_cp34_cp2

0x47fd,	// (0x000072ef) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x47fd,	// (0x000072ef) list_single_graphic_hl_pane_g1_cp2

0x4856,	// (0x00007348) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x4856,	// (0x00007348) list_single_graphic_hl_pane_g2_cp2

0xbf6e,	// (0x0000ea60) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xbf6e,	// (0x0000ea60) list_single_graphic_hl_pane_g3_cp2

0xf0c2,	// (0x00011bb4) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0xf0c2,	// (0x00011bb4) list_single_graphic_hl_pane_g4_cp2

0x4816,	// (0x00007308) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x4816,	// (0x00007308) list_single_graphic_hl_pane_g5_cp2

0xa1a2,	// (0x0000cc94) control_pane_g4_ParamLimits

0xa1a2,	// (0x0000cc94) control_pane_g4

0xf4e5,	// (0x00011fd7) bg_popup_sub_pane_cp10_ParamLimits

0x3b38,	// (0x0000662a) list_choice_list_pane_ParamLimits

0x3b47,	// (0x00006639) scroll_pane_cp23

0xe328,	// (0x00010e1a) bg_popup_preview_window_pane_cp02_ParamLimits

0x43fd,	// (0x00006eef) list_preview_fixed_pane_ParamLimits

0x4413,	// (0x00006f05) list_preview_fixed_pane_cp_ParamLimits

0x4413,	// (0x00006f05) list_preview_fixed_pane_cp

0x441f,	// (0x00006f11) popup_preview_fixed_window_g1_ParamLimits

0x441f,	// (0x00006f11) popup_preview_fixed_window_g1

0x442b,	// (0x00006f1d) popup_preview_fixed_window_g2_ParamLimits

0x442b,	// (0x00006f1d) popup_preview_fixed_window_g2

0x0002,

0xfb3c,	// (0x0001262e) popup_preview_fixed_window_g_ParamLimits

0xfb3c,	// (0x0001262e) popup_preview_fixed_window_g

0xea4d,	// (0x0001153f) aid_navi_side_left_pane_ParamLimits

0xea62,	// (0x00011554) aid_navi_side_right_pane_ParamLimits

0xea7a,	// (0x0001156c) navi_icon_pane_stacon_ParamLimits

0xea8e,	// (0x00011580) navi_navi_pane_stacon_ParamLimits

0xea7a,	// (0x0001156c) navi_text_pane_stacon_ParamLimits

0xdfe5,	// (0x00010ad7) main_text_info_pane

0x4886,	// (0x00007378) listscroll_text_info_pane

0x488e,	// (0x00007380) list_text_info_pane_ParamLimits

0x488e,	// (0x00007380) list_text_info_pane

0x489d,	// (0x0000738f) scroll_pane_cp24_ParamLimits

0x489d,	// (0x0000738f) scroll_pane_cp24

0xbf7c,	// (0x0000ea6e) list_text_info_pane_t1_ParamLimits

0xbf7c,	// (0x0000ea6e) list_text_info_pane_t1

0xa346,	// (0x0000ce38) popup_fast_swap2_window_ParamLimits

0xa346,	// (0x0000ce38) popup_fast_swap2_window

0x48ef,	// (0x000073e1) aid_size_cell_fast2

0xdfe5,	// (0x00010ad7) bg_popup_window_pane_cp17

0x1178,	// (0x00003c6a) heading_pane_cp2

0x1180,	// (0x00003c72) listscroll_fast2_pane

0x48f9,	// (0x000073eb) grid_fast2_pane

0x4903,	// (0x000073f5) listscroll_fast2_pane_g1

0x490b,	// (0x000073fd) listscroll_fast2_pane_g2

0x0001,

0xfbb8,	// (0x000126aa) listscroll_fast2_pane_g

0xe7be,	// (0x000112b0) scroll_pane_cp26

0x4915,	// (0x00007407) cell_fast2_pane_ParamLimits

0x4915,	// (0x00007407) cell_fast2_pane

0x492a,	// (0x0000741c) cell_fast2_pane_g1

0x4933,	// (0x00007425) cell_fast2_pane_g2

0x493c,	// (0x0000742e) cell_fast2_pane_g3

0x0002,

0xfbbd,	// (0x000126af) cell_fast2_pane_g

0xe493,	// (0x00010f85) grid_highlight_pane_cp9

0xe4a8,	// (0x00010f9a) main_eswt_pane_ParamLimits

0xe4a8,	// (0x00010f9a) main_eswt_pane

0x48b2,	// (0x000073a4) list_single_text_info_pane

0x4944,	// (0x00007436) eswt_ctrl_button_pane

0x4944,	// (0x00007436) eswt_ctrl_canvas_pane

0xbf98,	// (0x0000ea8a) eswt_ctrl_combo_pane

0x4944,	// (0x00007436) eswt_ctrl_default_pane

0x4944,	// (0x00007436) eswt_ctrl_label_pane

0x4954,	// (0x00007446) eswt_ctrl_wait_pane

0xbfa0,	// (0x0000ea92) eswt_shell_pane

0xdfe5,	// (0x00010ad7) listscroll_eswt_app_pane

0x497c,	// (0x0000746e) popup_eswt_tasktip_window_ParamLimits

0x497c,	// (0x0000746e) popup_eswt_tasktip_window

0x0cbc,	// (0x000037ae) bg_popup_window_pane_cp18

0x498d,	// (0x0000747f) eswt_control_pane_g1_ParamLimits

0x498d,	// (0x0000747f) eswt_control_pane_g1

0x499a,	// (0x0000748c) eswt_control_pane_g2_ParamLimits

0x499a,	// (0x0000748c) eswt_control_pane_g2

0x49a7,	// (0x00007499) eswt_control_pane_g3_ParamLimits

0x49a7,	// (0x00007499) eswt_control_pane_g3

0x49b4,	// (0x000074a6) eswt_control_pane_g4_ParamLimits

0x49b4,	// (0x000074a6) eswt_control_pane_g4

0x0003,

0xfbc4,	// (0x000126b6) eswt_control_pane_g_ParamLimits

0xfbc4,	// (0x000126b6) eswt_control_pane_g

0xe606,	// (0x000110f8) bg_button_pane_ParamLimits

0xe606,	// (0x000110f8) bg_button_pane

0xe4a8,	// (0x00010f9a) common_borders_pane_copy2_ParamLimits

0xe4a8,	// (0x00010f9a) common_borders_pane_copy2

0x49c1,	// (0x000074b3) control_button_pane_g1_ParamLimits

0x49c1,	// (0x000074b3) control_button_pane_g1

0x49cd,	// (0x000074bf) control_button_pane_g2_ParamLimits

0x49cd,	// (0x000074bf) control_button_pane_g2

0x49d9,	// (0x000074cb) control_button_pane_g3_ParamLimits

0x49d9,	// (0x000074cb) control_button_pane_g3

0x0002,

0xfbcd,	// (0x000126bf) control_button_pane_g_ParamLimits

0xfbcd,	// (0x000126bf) control_button_pane_g

0x49ed,	// (0x000074df) control_button_pane_t1

0x49fb,	// (0x000074ed) control_button_pane_t2

0x0001,

0xfbd4,	// (0x000126c6) control_button_pane_t

0x0b24,	// (0x00003616) bg_button_pane_g1

0x0b2c,	// (0x0000361e) bg_button_pane_g2

0x0b34,	// (0x00003626) bg_button_pane_g3

0x0b3c,	// (0x0000362e) bg_button_pane_g4

0x0b44,	// (0x00003636) bg_button_pane_g5

0x0b4c,	// (0x0000363e) bg_button_pane_g6

0x0b54,	// (0x00003646) bg_button_pane_g7

0x0b5c,	// (0x0000364e) bg_button_pane_g8

0x0b64,	// (0x00003656) bg_button_pane_g9

0x0008,

0xf821,	// (0x00012313) bg_button_pane_g

0x3af3,	// (0x000065e5) common_borders_pane_ParamLimits

0x3af3,	// (0x000065e5) common_borders_pane

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy1_ParamLimits

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy1

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy1_ParamLimits

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy1

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy1_ParamLimits

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy1

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy1_ParamLimits

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy1

0x3b2e,	// (0x00006620) bg_eswt_ctrl_canvas_pane_g1

0x3af3,	// (0x000065e5) common_borders_pane_cp2_ParamLimits

0x3af3,	// (0x000065e5) common_borders_pane_cp2

0x3af3,	// (0x000065e5) common_borders_pane_cp3_ParamLimits

0x3af3,	// (0x000065e5) common_borders_pane_cp3

0x4a09,	// (0x000074fb) separator_horizontal_pane

0x4a11,	// (0x00007503) separator_vertical_pane

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy2_ParamLimits

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy2

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy2_ParamLimits

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy2

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy2_ParamLimits

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy2

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy2_ParamLimits

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy2

0xdfe5,	// (0x00010ad7) common_borders_pane_cp4

0x4a1a,	// (0x0000750c) separator_horizontal_pane_g1

0x4a23,	// (0x00007515) separator_horizontal_pane_g2

0x4a2c,	// (0x0000751e) separator_horizontal_pane_g3

0x0002,

0xfbd9,	// (0x000126cb) separator_horizontal_pane_g

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy3_ParamLimits

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy3

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy3_ParamLimits

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy3

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy3_ParamLimits

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy3

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy3_ParamLimits

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy3

0xdfe5,	// (0x00010ad7) common_borders_pane_cp5

0x4a35,	// (0x00007527) separator_vertical_pane_g1

0x4a3e,	// (0x00007530) separator_vertical_pane_g2

0x4a47,	// (0x00007539) separator_vertical_pane_g3

0x0002,

0xfbe0,	// (0x000126d2) separator_vertical_pane_g

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy4_ParamLimits

0x498d,	// (0x0000747f) eswt_control_pane_g1_copy4

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy4_ParamLimits

0x499a,	// (0x0000748c) eswt_control_pane_g2_copy4

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy4_ParamLimits

0x49a7,	// (0x00007499) eswt_control_pane_g3_copy4

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy4_ParamLimits

0x49b4,	// (0x000074a6) eswt_control_pane_g4_copy4

0xbfc0,	// (0x0000eab2) eswt_ctrl_combo_button_pane

0xbfc8,	// (0x0000eaba) eswt_ctrl_input_pane

0xbfd0,	// (0x0000eac2) popup_choice_list_window_cp70

0xbfd8,	// (0x0000eaca) eswt_ctrl_input_pane_t1

0xdfe5,	// (0x00010ad7) input_focus_pane_cp70

0x3af3,	// (0x000065e5) bg_button_pane_cp70_ParamLimits

0x3af3,	// (0x000065e5) bg_button_pane_cp70

0xbfe6,	// (0x0000ead8) eswt_ctrl_combo_button_pane_g1

0x4a7e,	// (0x00007570) wait_bar_pane_cp70

0x0cbc,	// (0x000037ae) bg_popup_window_pane_cp70_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_window_pane_cp70

0x4a86,	// (0x00007578) popup_eswt_tasktip_window_t1

0x4a9c,	// (0x0000758e) wait_bar_pane_cp71_ParamLimits

0x4a9c,	// (0x0000758e) wait_bar_pane_cp71

0x4aa8,	// (0x0000759a) grid_eswt_app_pane

0xeb57,	// (0x00011649) scroll_pane_cp70

0xbfee,	// (0x0000eae0) cell_eswt_app_pane_ParamLimits

0xbfee,	// (0x0000eae0) cell_eswt_app_pane

0xc018,	// (0x0000eb0a) cell_eswt_app_pane_g1_ParamLimits

0xc018,	// (0x0000eb0a) cell_eswt_app_pane_g1

0xc047,	// (0x0000eb39) cell_eswt_app_pane_g2_ParamLimits

0xc047,	// (0x0000eb39) cell_eswt_app_pane_g2

0x0001,

0xfbe7,	// (0x000126d9) cell_eswt_app_pane_g_ParamLimits

0xfbe7,	// (0x000126d9) cell_eswt_app_pane_g

0xc06b,	// (0x0000eb5d) cell_eswt_app_pane_t1_ParamLimits

0xc06b,	// (0x0000eb5d) cell_eswt_app_pane_t1

0x4b66,	// (0x00007658) grid_highlight_pane_cp70_ParamLimits

0x4b66,	// (0x00007658) grid_highlight_pane_cp70

0xf1d0,	// (0x00011cc2) set_content_pane_g1

0xa134,	// (0x0000cc26) status_small_volume_pane

0xc09d,	// (0x0000eb8f) status_small_volume_pane_g1

0xc0a5,	// (0x0000eb97) volume_small2_pane

0xc0ae,	// (0x0000eba0) volume_small2_pane_g1

0xc0b7,	// (0x0000eba9) volume_small2_pane_g2

0xc0c0,	// (0x0000ebb2) volume_small2_pane_g3

0xc0c9,	// (0x0000ebbb) volume_small2_pane_g4

0xc0d2,	// (0x0000ebc4) volume_small2_pane_g5

0xc0db,	// (0x0000ebcd) volume_small2_pane_g6

0xc0e4,	// (0x0000ebd6) volume_small2_pane_g7

0xc0ed,	// (0x0000ebdf) volume_small2_pane_g8

0xc0f6,	// (0x0000ebe8) volume_small2_pane_g9

0xc0ff,	// (0x0000ebf1) volume_small2_pane_g10

0x0009,

0xfbec,	// (0x000126de) volume_small2_pane_g

0x40fa,	// (0x00006bec) fep_vkb_top_text_pane_g1_ParamLimits

0xbec2,	// (0x0000e9b4) fep_vkb_top_text_pane_t1_ParamLimits

0x4437,	// (0x00006f29) popup_preview_fixed_window_g3_ParamLimits

0x4437,	// (0x00006f29) popup_preview_fixed_window_g3

0xa9bd,	// (0x0000d4af) popup_toolbar_trans_pane

0xb6cb,	// (0x0000e1bd) aid_height_set_list_ParamLimits

0x2318,	// (0x00004e0a) aid_size_parent_ParamLimits

0xf4e5,	// (0x00011fd7) list_highlight_pane_cp2_ParamLimits

0xf1d0,	// (0x00011cc2) set_content_pane_g1_ParamLimits

0xb886,	// (0x0000e378) list_single_image_pane_ParamLimits

0xb886,	// (0x0000e378) list_single_image_pane

0xc108,	// (0x0000ebfa) aid_size_cell_image_ParamLimits

0xc108,	// (0x0000ebfa) aid_size_cell_image

0xc115,	// (0x0000ec07) grid_single_image_pane_ParamLimits

0xc115,	// (0x0000ec07) grid_single_image_pane

0xe799,	// (0x0001128b) list_single_image_pane_g1_ParamLimits

0xe799,	// (0x0001128b) list_single_image_pane_g1

0x4465,	// (0x00006f57) list_single_image_pane_g2_ParamLimits

0x4465,	// (0x00006f57) list_single_image_pane_g2

0x0001,

0xfc01,	// (0x000126f3) list_single_image_pane_g_ParamLimits

0xfc01,	// (0x000126f3) list_single_image_pane_g

0x4bf6,	// (0x000076e8) list_single_image_pane_t1_ParamLimits

0x4bf6,	// (0x000076e8) list_single_image_pane_t1

0xc121,	// (0x0000ec13) cell_image_list_pane_ParamLimits

0xc121,	// (0x0000ec13) cell_image_list_pane

0xc135,	// (0x0000ec27) cell_image_list_pane_g1

0xc13e,	// (0x0000ec30) cell_image_list_pane_g2

0x0001,

0xfc06,	// (0x000126f8) cell_image_list_pane_g

0xc147,	// (0x0000ec39) aid_size_cell_tb_trans_pane

0xe606,	// (0x000110f8) bg_tb_trans_pane

0xc159,	// (0x0000ec4b) grid_tb_trans_pane

0x0b24,	// (0x00003616) bg_tb_trans_pane_g1

0x0b2c,	// (0x0000361e) bg_tb_trans_pane_g2

0x0b34,	// (0x00003626) bg_tb_trans_pane_g3

0x0b3c,	// (0x0000362e) bg_tb_trans_pane_g4

0x0b44,	// (0x00003636) bg_tb_trans_pane_g5

0x0b5c,	// (0x0000364e) bg_tb_trans_pane_g6

0x0b64,	// (0x00003656) bg_tb_trans_pane_g7

0x0b4c,	// (0x0000363e) bg_tb_trans_pane_g8

0x0b54,	// (0x00003646) bg_tb_trans_pane_g9

0x0008,

0xfc0b,	// (0x000126fd) bg_tb_trans_pane_g

0xc16d,	// (0x0000ec5f) cell_toolbar_trans_pane_ParamLimits

0xc16d,	// (0x0000ec5f) cell_toolbar_trans_pane

0x3b2e,	// (0x00006620) cell_toolbar_trans_pane_g1

0xbba1,	// (0x0000e693) list_form2_midp_pane_t1

0xbbaf,	// (0x0000e6a1) list_form2_midp_pane_t2

0x0001,

0xfab4,	// (0x000125a6) list_form2_midp_pane_t

0x36c8,	// (0x000061ba) scroll_pane_cp51_ParamLimits

0x38d1,	// (0x000063c3) form2_midp_wait_pane_g1

0x38da,	// (0x000063cc) form2_midp_wait_pane_g2

0x38e3,	// (0x000063d5) form2_midp_wait_pane_g3

0x0002,

0xfac9,	// (0x000125bb) form2_midp_wait_pane_g

0xe1e4,	// (0x00010cd6) list_highlight_pane_cp21_ParamLimits

0x392b,	// (0x0000641d) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x393a,	// (0x0000642c) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x251b,	// (0x0000500d) list_single_2graphic_im_pane_ParamLimits

0x251b,	// (0x0000500d) list_single_2graphic_im_pane

0xc193,	// (0x0000ec85) list_single_2graphic_im_pane_g1_ParamLimits

0xc193,	// (0x0000ec85) list_single_2graphic_im_pane_g1

0xc1a4,	// (0x0000ec96) list_single_2graphic_im_pane_g2_ParamLimits

0xc1a4,	// (0x0000ec96) list_single_2graphic_im_pane_g2

0xc1b0,	// (0x0000eca2) list_single_2graphic_im_pane_g3_ParamLimits

0xc1b0,	// (0x0000eca2) list_single_2graphic_im_pane_g3

0x0003,

0xfc1e,	// (0x00012710) list_single_2graphic_im_pane_g_ParamLimits

0xfc1e,	// (0x00012710) list_single_2graphic_im_pane_g

0xc1c4,	// (0x0000ecb6) list_single_2graphic_im_pane_t1_ParamLimits

0xc1c4,	// (0x0000ecb6) list_single_2graphic_im_pane_t1

0x4443,	// (0x00006f35) list_single_graphic_2heading_pane_fp_ParamLimits

0x4443,	// (0x00006f35) list_single_graphic_2heading_pane_fp

0x449c,	// (0x00006f8e) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x449c,	// (0x00006f8e) list_single_graphic_2heading_pane_fp_g1

0x4459,	// (0x00006f4b) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x4459,	// (0x00006f4b) list_single_graphic_2heading_pane_fp_g2

0xe799,	// (0x0001128b) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0xe799,	// (0x0001128b) list_single_graphic_2heading_pane_fp_g3

0x4465,	// (0x00006f57) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x4465,	// (0x00006f57) list_single_graphic_2heading_pane_fp_g4

0x4479,	// (0x00006f6b) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x4479,	// (0x00006f6b) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb4c,	// (0x0001263e) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb4c,	// (0x0001263e) list_single_graphic_2heading_pane_fp_g

0x4cec,	// (0x000077de) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x4cec,	// (0x000077de) list_single_graphic_2heading_pane_fp_t1

0x44d4,	// (0x00006fc6) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x44d4,	// (0x00006fc6) list_single_graphic_2heading_pane_fp_t2

0x4d02,	// (0x000077f4) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x4d02,	// (0x000077f4) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc27,	// (0x00012719) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc27,	// (0x00012719) list_single_graphic_2heading_pane_fp_t

0x3d58,	// (0x0000684a) fep_hwr_write_pane_g5_ParamLimits

0x3d58,	// (0x0000684a) fep_hwr_write_pane_g5

0x3d64,	// (0x00006856) fep_hwr_write_pane_g6_ParamLimits

0x3d64,	// (0x00006856) fep_hwr_write_pane_g6

0xbfa0,	// (0x0000ea92) eswt_shell_pane_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_window_pane_cp18_ParamLimits

0x21d6,	// (0x00004cc8) heading_pane_cp70

0x4a86,	// (0x00007578) popup_eswt_tasktip_window_t1_ParamLimits

0xaada,	// (0x0000d5cc) aid_touch_tab_arrow_left

0xaaf0,	// (0x0000d5e2) aid_touch_tab_arrow_right

0x8f7f,	// (0x0000ba71) title_pane_g3_ParamLimits

0x8f7f,	// (0x0000ba71) title_pane_g3

0xe59d,	// (0x0001108f) set_value_pane_g1

0xa9bd,	// (0x0000d4af) popup_toolbar_trans_pane_ParamLimits

0xc147,	// (0x0000ec39) aid_size_cell_tb_trans_pane_ParamLimits

0xe606,	// (0x000110f8) bg_tb_trans_pane_ParamLimits

0xc159,	// (0x0000ec4b) grid_tb_trans_pane_ParamLimits

0xe328,	// (0x00010e1a) cont_note_pane_ParamLimits

0xe328,	// (0x00010e1a) cont_note_pane

0xe4a8,	// (0x00010f9a) cont_snote2_single_text_pane_ParamLimits

0xe4a8,	// (0x00010f9a) cont_snote2_single_text_pane

0xe4a8,	// (0x00010f9a) cont_snote2_single_graphic_pane_ParamLimits

0xe4a8,	// (0x00010f9a) cont_snote2_single_graphic_pane

0x139f,	// (0x00003e91) cont_note_wait_pane_ParamLimits

0x139f,	// (0x00003e91) cont_note_wait_pane

0x139f,	// (0x00003e91) cont_note_image_pane_ParamLimits

0x139f,	// (0x00003e91) cont_note_image_pane

0x4d18,	// (0x0000780a) popup_note2_window_g1_ParamLimits

0x4d18,	// (0x0000780a) popup_note2_window_g1

0xc202,	// (0x0000ecf4) popup_note2_window_t1_ParamLimits

0xc202,	// (0x0000ecf4) popup_note2_window_t1

0xc247,	// (0x0000ed39) popup_note2_window_t2_ParamLimits

0xc247,	// (0x0000ed39) popup_note2_window_t2

0xc28c,	// (0x0000ed7e) popup_note2_window_t3_ParamLimits

0xc28c,	// (0x0000ed7e) popup_note2_window_t3

0x4e18,	// (0x0000790a) popup_note2_window_t4_ParamLimits

0x4e18,	// (0x0000790a) popup_note2_window_t4

0xe3ac,	// (0x00010e9e) popup_note2_window_t5_ParamLimits

0xe3ac,	// (0x00010e9e) popup_note2_window_t5

0x0004,

0xfc33,	// (0x00012725) popup_note2_window_t_ParamLimits

0xfc33,	// (0x00012725) popup_note2_window_t

0x4e47,	// (0x00007939) popup_note2_image_window_g1_ParamLimits

0x4e47,	// (0x00007939) popup_note2_image_window_g1

0xc2d1,	// (0x0000edc3) popup_note2_image_window_g2_ParamLimits

0xc2d1,	// (0x0000edc3) popup_note2_image_window_g2

0x0001,

0xfc3e,	// (0x00012730) popup_note2_image_window_g_ParamLimits

0xfc3e,	// (0x00012730) popup_note2_image_window_g

0x4e65,	// (0x00007957) popup_note2_image_window_t1_ParamLimits

0x4e65,	// (0x00007957) popup_note2_image_window_t1

0x4e7d,	// (0x0000796f) popup_note2_image_window_t2_ParamLimits

0x4e7d,	// (0x0000796f) popup_note2_image_window_t2

0x4e95,	// (0x00007987) popup_note2_image_window_t3_ParamLimits

0x4e95,	// (0x00007987) popup_note2_image_window_t3

0x0002,

0xfc43,	// (0x00012735) popup_note2_image_window_t_ParamLimits

0xfc43,	// (0x00012735) popup_note2_image_window_t

0x13ad,	// (0x00003e9f) popup_note2_wait_window_g1_ParamLimits

0x13ad,	// (0x00003e9f) popup_note2_wait_window_g1

0x13b9,	// (0x00003eab) popup_note2_wait_window_g2_ParamLimits

0x13b9,	// (0x00003eab) popup_note2_wait_window_g2

0x13c5,	// (0x00003eb7) popup_note2_wait_window_g3_ParamLimits

0x13c5,	// (0x00003eb7) popup_note2_wait_window_g3

0x0002,

0xf803,	// (0x000122f5) popup_note2_wait_window_g_ParamLimits

0xf803,	// (0x000122f5) popup_note2_wait_window_g

0x4eb1,	// (0x000079a3) popup_note2_wait_window_t1_ParamLimits

0x4eb1,	// (0x000079a3) popup_note2_wait_window_t1

0x4ecf,	// (0x000079c1) popup_note2_wait_window_t2_ParamLimits

0x4ecf,	// (0x000079c1) popup_note2_wait_window_t2

0x4eed,	// (0x000079df) popup_note2_wait_window_t3_ParamLimits

0x4eed,	// (0x000079df) popup_note2_wait_window_t3

0x4eff,	// (0x000079f1) popup_note2_wait_window_t4_ParamLimits

0x4eff,	// (0x000079f1) popup_note2_wait_window_t4

0x0003,

0xfc4a,	// (0x0001273c) popup_note2_wait_window_t_ParamLimits

0xfc4a,	// (0x0001273c) popup_note2_wait_window_t

0x4f11,	// (0x00007a03) wait_bar2_pane_ParamLimits

0x4f11,	// (0x00007a03) wait_bar2_pane

0x4f29,	// (0x00007a1b) popup_snote2_single_text_window_g1_ParamLimits

0x4f29,	// (0x00007a1b) popup_snote2_single_text_window_g1

0x4f51,	// (0x00007a43) popup_snote2_single_text_window_t1_ParamLimits

0x4f51,	// (0x00007a43) popup_snote2_single_text_window_t1

0x4f9d,	// (0x00007a8f) popup_snote2_single_text_window_t2_ParamLimits

0x4f9d,	// (0x00007a8f) popup_snote2_single_text_window_t2

0x4fe9,	// (0x00007adb) popup_snote2_single_text_window_t3_ParamLimits

0x4fe9,	// (0x00007adb) popup_snote2_single_text_window_t3

0x502a,	// (0x00007b1c) popup_snote2_single_text_window_t4_ParamLimits

0x502a,	// (0x00007b1c) popup_snote2_single_text_window_t4

0x5060,	// (0x00007b52) popup_snote2_single_text_window_t5_ParamLimits

0x5060,	// (0x00007b52) popup_snote2_single_text_window_t5

0x0004,

0xfc53,	// (0x00012745) popup_snote2_single_text_window_t_ParamLimits

0xfc53,	// (0x00012745) popup_snote2_single_text_window_t

0xc2e3,	// (0x0000edd5) popup_snote2_single_graphic_window_g1_ParamLimits

0xc2e3,	// (0x0000edd5) popup_snote2_single_graphic_window_g1

0x50b3,	// (0x00007ba5) popup_snote2_single_graphic_window_g2_ParamLimits

0x50b3,	// (0x00007ba5) popup_snote2_single_graphic_window_g2

0x0001,

0xfc5e,	// (0x00012750) popup_snote2_single_graphic_window_g_ParamLimits

0xfc5e,	// (0x00012750) popup_snote2_single_graphic_window_g

0x50db,	// (0x00007bcd) popup_snote2_single_graphic_window_t1_ParamLimits

0x50db,	// (0x00007bcd) popup_snote2_single_graphic_window_t1

0x5127,	// (0x00007c19) popup_snote2_single_graphic_window_t2_ParamLimits

0x5127,	// (0x00007c19) popup_snote2_single_graphic_window_t2

0x4fe9,	// (0x00007adb) popup_snote2_single_graphic_window_t3_ParamLimits

0x4fe9,	// (0x00007adb) popup_snote2_single_graphic_window_t3

0x502a,	// (0x00007b1c) popup_snote2_single_graphic_window_t4_ParamLimits

0x502a,	// (0x00007b1c) popup_snote2_single_graphic_window_t4

0x5060,	// (0x00007b52) popup_snote2_single_graphic_window_t5_ParamLimits

0x5060,	// (0x00007b52) popup_snote2_single_graphic_window_t5

0x0004,

0xfc63,	// (0x00012755) popup_snote2_single_graphic_window_t_ParamLimits

0xfc63,	// (0x00012755) popup_snote2_single_graphic_window_t

0x353d,	// (0x0000602f) clock_nsta_pane_cp2_t1

0x353d,	// (0x0000602f) clock_nsta_pane_cp2_t2

0x0001,

0xfa8a,	// (0x0001257c) clock_nsta_pane_cp2_t

0xe625,	// (0x00011117) form_field_data_wide_pane_g1_ParamLimits

0xe631,	// (0x00011123) form_field_data_wide_pane_g2_ParamLimits

0xe631,	// (0x00011123) form_field_data_wide_pane_g2

0xe63d,	// (0x0001112f) form_field_data_wide_pane_g3_ParamLimits

0xe63d,	// (0x0001112f) form_field_data_wide_pane_g3

0x0002,

0xf642,	// (0x00012134) form_field_data_wide_pane_g_ParamLimits

0xf642,	// (0x00012134) form_field_data_wide_pane_g

0xbac2,	// (0x0000e5b4) grid_touch_3_pane_ParamLimits

0xbac2,	// (0x0000e5b4) grid_touch_3_pane

0xc30b,	// (0x0000edfd) cell_touch_3_pane_ParamLimits

0xc30b,	// (0x0000edfd) cell_touch_3_pane

0x3b2e,	// (0x00006620) cell_touch_3_pane_g1

0x3b2e,	// (0x00006620) cell_touch_3_pane_g2

0x0001,

0xfb0f,	// (0x00012601) cell_touch_3_pane_g

0xe3de,	// (0x00010ed0) cont_query_data_pane

0xe3e6,	// (0x00010ed8) cont_query_data_pane_cp1

0x51a1,	// (0x00007c93) button_value_adjust_pane_cp7

0x51a9,	// (0x00007c9b) query_popup_pane_cp3

0xed66,	// (0x00011858) bg_popup_sub_pane_cp22_ParamLimits

0x9ddd,	// (0x0000c8cf) navi_navi_volume_pane_cp2

0x9dec,	// (0x0000c8de) popup_side_volume_key_window_g2

0x9dfb,	// (0x0000c8ed) popup_side_volume_key_window_g3

0x0002,

0xf6d8,	// (0x000121ca) popup_side_volume_key_window_g

0x9e0a,	// (0x0000c8fc) popup_side_volume_key_window_t2

0x0001,

0xf6df,	// (0x000121d1) popup_side_volume_key_window_t

0x9f5b,	// (0x0000ca4d) popup_side_volume_key_window_ParamLimits

0x96e6,	// (0x0000c1d8) list_double_graphic_pane_g4_ParamLimits

0x96e6,	// (0x0000c1d8) list_double_graphic_pane_g4

0xb860,	// (0x0000e352) list_single_2heading_msg_pane_ParamLimits

0xb860,	// (0x0000e352) list_single_2heading_msg_pane

0xc354,	// (0x0000ee46) list_single_2heading_msg_pane_g1_ParamLimits

0xc354,	// (0x0000ee46) list_single_2heading_msg_pane_g1

0xc360,	// (0x0000ee52) list_single_2heading_msg_pane_g2_ParamLimits

0xc360,	// (0x0000ee52) list_single_2heading_msg_pane_g2

0xc373,	// (0x0000ee65) list_single_2heading_msg_pane_g3_ParamLimits

0xc373,	// (0x0000ee65) list_single_2heading_msg_pane_g3

0xc37f,	// (0x0000ee71) list_single_2heading_msg_pane_g4_ParamLimits

0xc37f,	// (0x0000ee71) list_single_2heading_msg_pane_g4

0x0003,

0xfc6e,	// (0x00012760) list_single_2heading_msg_pane_g_ParamLimits

0xfc6e,	// (0x00012760) list_single_2heading_msg_pane_g

0xc397,	// (0x0000ee89) list_single_2heading_msg_pane_t1_ParamLimits

0xc397,	// (0x0000ee89) list_single_2heading_msg_pane_t1

0xc3bf,	// (0x0000eeb1) list_single_2heading_msg_pane_t2_ParamLimits

0xc3bf,	// (0x0000eeb1) list_single_2heading_msg_pane_t2

0xc42a,	// (0x0000ef1c) list_single_2heading_msg_pane_t3_ParamLimits

0xc42a,	// (0x0000ef1c) list_single_2heading_msg_pane_t3

0x5298,	// (0x00007d8a) list_single_2heading_msg_pane_t4_ParamLimits

0x5298,	// (0x00007d8a) list_single_2heading_msg_pane_t4

0x0003,

0xfc77,	// (0x00012769) list_single_2heading_msg_pane_t_ParamLimits

0xfc77,	// (0x00012769) list_single_2heading_msg_pane_t

0xe192,	// (0x00010c84) title_pane_g4_ParamLimits

0xe192,	// (0x00010c84) title_pane_g4

0xe976,	// (0x00011468) title_pane_stacon_g3_ParamLimits

0xe976,	// (0x00011468) title_pane_stacon_g3

0x4caf,	// (0x000077a1) list_single_2graphic_im_pane_g4_ParamLimits

0x4caf,	// (0x000077a1) list_single_2graphic_im_pane_g4

0xb4aa,	// (0x0000df9c) popup_side_volume_key_window_cp

0x29dd,	// (0x000054cf) main_idle_act2_pane_t1

0x0b6c,	// (0x0000365e) toolbar_button_pane_g10

0x958b,	// (0x0000c07d) popup_toolbar_window_cp1

0x352e,	// (0x00006020) clock_nsta_pane_cp_t1

0x352e,	// (0x00006020) clock_nsta_pane_cp_t2

0x0001,

0xfa85,	// (0x00012577) clock_nsta_pane_cp_t

0x9ddd,	// (0x0000c8cf) navi_navi_volume_pane_cp2_ParamLimits

0xed7c,	// (0x0001186e) popup_side_volume_key_window_g1_ParamLimits

0x9dec,	// (0x0000c8de) popup_side_volume_key_window_g2_ParamLimits

0x9dfb,	// (0x0000c8ed) popup_side_volume_key_window_g3_ParamLimits

0xf6d8,	// (0x000121ca) popup_side_volume_key_window_g_ParamLimits

0x3b98,	// (0x0000668a) fep_hwr_aid_pane

0x3c3f,	// (0x00006731) bg_fep_hwr_top_pane_g4_ParamLimits

0x3c5f,	// (0x00006751) fep_hwr_top_pane_g1_ParamLimits

0x3c71,	// (0x00006763) fep_hwr_top_pane_g2_ParamLimits

0x3c83,	// (0x00006775) fep_hwr_top_pane_g3_ParamLimits

0xfada,	// (0x000125cc) fep_hwr_top_pane_g_ParamLimits

0x3c98,	// (0x0000678a) fep_hwr_top_text_pane_ParamLimits

0x1d13,	// (0x00004805) aid_touch_tab_arrow_arrow_2

0x1d1c,	// (0x0000480e) aid_touch_tab_arrow_left_2

0x3bac,	// (0x0000669e) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x3be3,	// (0x000066d5) fep_hwr_prediction_pane

0x3f09,	// (0x000069fb) fep_vkb_prediction_pane

0xbea2,	// (0x0000e994) fep_vkb_side_pane_g3_ParamLimits

0xbea2,	// (0x0000e994) fep_vkb_side_pane_g3

0x3fb2,	// (0x00006aa4) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x4691,	// (0x00007183) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x469e,	// (0x00007190) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfb84,	// (0x00012676) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x52bd,	// (0x00007daf) fep_hwr_prediction_pane_g1

0x52c7,	// (0x00007db9) fep_hwr_prediction_pane_g2

0x52cf,	// (0x00007dc1) fep_hwr_prediction_pane_g3

0x52d7,	// (0x00007dc9) fep_hwr_prediction_pane_g4

0x0003,

0xfc80,	// (0x00012772) fep_hwr_prediction_pane_g

0x52bd,	// (0x00007daf) fep_vkb_prediction_pane_g1

0x52df,	// (0x00007dd1) fep_vkb_prediction_pane_g2

0x52e7,	// (0x00007dd9) fep_vkb_prediction_pane_g3

0x52ef,	// (0x00007de1) fep_vkb_prediction_pane_g4

0x0003,

0xfc89,	// (0x0001277b) fep_vkb_prediction_pane_g

0xb64d,	// (0x0000e13f) slider_set_pane_g3

0xb661,	// (0x0000e153) slider_set_pane_g4

0xb679,	// (0x0000e16b) slider_set_pane_g5

0xb64d,	// (0x0000e13f) slider_set_pane_g6

0xb68f,	// (0x0000e181) slider_set_pane_g7

0x2479,	// (0x00004f6b) slider_form_pane_g3

0x2482,	// (0x00004f74) slider_form_pane_g4

0x248a,	// (0x00004f7c) slider_form_pane_g5

0x2479,	// (0x00004f6b) slider_form_pane_g6

0xb816,	// (0x0000e308) slider_form_pane_g7

0x2cd2,	// (0x000057c4) slider_set_pane_vc_g3

0x2cdb,	// (0x000057cd) slider_set_pane_vc_g4

0x2ce4,	// (0x000057d6) slider_set_pane_vc_g5

0x2cd2,	// (0x000057c4) slider_set_pane_vc_g6

0x2ced,	// (0x000057df) slider_set_pane_vc_g7

0x31ec,	// (0x00005cde) slider_form_pane_vc_g1

0x31f5,	// (0x00005ce7) slider_form_pane_vc_g2

0x31fe,	// (0x00005cf0) slider_form_pane_vc_g3

0x31ec,	// (0x00005cde) slider_form_pane_vc_g4

0x3207,	// (0x00005cf9) slider_form_pane_vc_g5

0x0004,

0xfa57,	// (0x00012549) slider_form_pane_vc_g

0xdfe5,	// (0x00010ad7) main_idle_act3_pane

0x52f7,	// (0x00007de9) ai3_links_pane

0xc498,	// (0x0000ef8a) popup_ai3_data_window_ParamLimits

0xc498,	// (0x0000ef8a) popup_ai3_data_window

0xdfe5,	// (0x00010ad7) grid_ai3_links_pane

0xc4b0,	// (0x0000efa2) cell_ai3_links_pane_ParamLimits

0xc4b0,	// (0x0000efa2) cell_ai3_links_pane

0x5330,	// (0x00007e22) bg_popup_sub_pane_cp11

0x533d,	// (0x00007e2f) cell_ai3_links_pane_g1

0xdfe5,	// (0x00010ad7) bg_popup_sub_pane_cp12

0x5362,	// (0x00007e54) heading_ai3_data_pane

0x536a,	// (0x00007e5c) list_ai3_gene_pane

0x5376,	// (0x00007e68) popup_ai3_data_window_g1

0x537e,	// (0x00007e70) heading_ai3_data_pane_g1

0x5386,	// (0x00007e78) heading_ai3_data_pane_t1

0xc4ca,	// (0x0000efbc) list_double_ai3_gene_pane_ParamLimits

0xc4ca,	// (0x0000efbc) list_double_ai3_gene_pane

0x53a1,	// (0x00007e93) list_single_ai3_gene_pane_ParamLimits

0x53a1,	// (0x00007e93) list_single_ai3_gene_pane

0x3af3,	// (0x000065e5) list_highlight_pane_cp7_ParamLimits

0x3af3,	// (0x000065e5) list_highlight_pane_cp7

0x53ae,	// (0x00007ea0) list_single_a13_gene_pane_t1_ParamLimits

0x53ae,	// (0x00007ea0) list_single_a13_gene_pane_t1

0x53c5,	// (0x00007eb7) list_single_ai3_gene_pane_g1

0x53ce,	// (0x00007ec0) list_single_ai3_gene_pane_g2

0x0001,

0xfc92,	// (0x00012784) list_single_ai3_gene_pane_g

0x53d6,	// (0x00007ec8) list_double_ai3_gene_pane_g1_ParamLimits

0x53d6,	// (0x00007ec8) list_double_ai3_gene_pane_g1

0xc4d7,	// (0x0000efc9) list_double_ai3_gene_pane_t1_ParamLimits

0xc4d7,	// (0x0000efc9) list_double_ai3_gene_pane_t1

0x53fe,	// (0x00007ef0) list_double_ai3_gene_pane_t2_ParamLimits

0x53fe,	// (0x00007ef0) list_double_ai3_gene_pane_t2

0x5413,	// (0x00007f05) list_double_ai3_gene_pane_t3_ParamLimits

0x5413,	// (0x00007f05) list_double_ai3_gene_pane_t3

0x0002,

0xfc97,	// (0x00012789) list_double_ai3_gene_pane_t_ParamLimits

0xfc97,	// (0x00012789) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x51ba,	// (0x00007cac) aid_size_min_col_2

0xc33e,	// (0x0000ee30) aid_size_min_msg_ParamLimits

0xc33e,	// (0x0000ee30) aid_size_min_msg

0xbeb6,	// (0x0000e9a8) fep_vkb_top_text_pane_g2_ParamLimits

0xbeb6,	// (0x0000e9a8) fep_vkb_top_text_pane_g2

0x0001,

0xfb0a,	// (0x000125fc) fep_vkb_top_text_pane_g_ParamLimits

0xfb0a,	// (0x000125fc) fep_vkb_top_text_pane_g

0xdfe5,	// (0x00010ad7) main_hc_apps_shell_pane

0x5430,	// (0x00007f22) grid_hc_apps_pane_ParamLimits

0x5430,	// (0x00007f22) grid_hc_apps_pane

0x5442,	// (0x00007f34) list_hc_apps_pane

0x544a,	// (0x00007f3c) scroll_pane_cp37_ParamLimits

0x544a,	// (0x00007f3c) scroll_pane_cp37

0xc4f3,	// (0x0000efe5) cell_hc_apps_pane_ParamLimits

0xc4f3,	// (0x0000efe5) cell_hc_apps_pane

0xc5b1,	// (0x0000f0a3) cell_hc_apps_pane_g1_ParamLimits

0xc5b1,	// (0x0000f0a3) cell_hc_apps_pane_g1

0x5534,	// (0x00008026) cell_hc_apps_pane_g2_ParamLimits

0x5534,	// (0x00008026) cell_hc_apps_pane_g2

0x5550,	// (0x00008042) cell_hc_apps_pane_g3_ParamLimits

0x5550,	// (0x00008042) cell_hc_apps_pane_g3

0x0002,

0xfc9e,	// (0x00012790) cell_hc_apps_pane_g_ParamLimits

0xfc9e,	// (0x00012790) cell_hc_apps_pane_g

0xc5dd,	// (0x0000f0cf) cell_hc_apps_pane_t1_ParamLimits

0xc5dd,	// (0x0000f0cf) cell_hc_apps_pane_t1

0xe328,	// (0x00010e1a) grid_highlight_pane_cp10_ParamLimits

0xe328,	// (0x00010e1a) grid_highlight_pane_cp10

0xc61b,	// (0x0000f10d) list_single_hc_apps_pane_ParamLimits

0xc61b,	// (0x0000f10d) list_single_hc_apps_pane

0xc64b,	// (0x0000f13d) list_single_hc_apps_pane_g1

0xc664,	// (0x0000f156) list_single_hc_apps_pane_g2

0x0001,

0xfca5,	// (0x00012797) list_single_hc_apps_pane_g

0xc67d,	// (0x0000f16f) list_single_hc_apps_pane_g2_copy1

0xc699,	// (0x0000f18b) list_single_hc_apps_pane_t1

0xe1e4,	// (0x00010cd6) bg_set_opt_pane_cp_ParamLimits

0x9053,	// (0x0000bb45) setting_slider_pane_t1_ParamLimits

0x906c,	// (0x0000bb5e) setting_slider_pane_t2_ParamLimits

0x9086,	// (0x0000bb78) setting_slider_pane_t3_ParamLimits

0xf539,	// (0x0001202b) setting_slider_pane_t_ParamLimits

0x909e,	// (0x0000bb90) slider_set_pane_ParamLimits

0xf496,	// (0x00011f88) control_pane_g5_ParamLimits

0xf496,	// (0x00011f88) control_pane_g5

0xb640,	// (0x0000e132) slider_set_pane_g1_ParamLimits

0x2275,	// (0x00004d67) slider_set_pane_g2_ParamLimits

0xb64d,	// (0x0000e13f) slider_set_pane_g3_ParamLimits

0xb661,	// (0x0000e153) slider_set_pane_g4_ParamLimits

0xb679,	// (0x0000e16b) slider_set_pane_g5_ParamLimits

0xb64d,	// (0x0000e13f) slider_set_pane_g6_ParamLimits

0xb68f,	// (0x0000e181) slider_set_pane_g7_ParamLimits

0xf91f,	// (0x00012411) slider_set_pane_g_ParamLimits

0xf17b,	// (0x00011c6d) navi_icon_text_pane_ParamLimits

0xaaa3,	// (0x0000d595) aid_fill_nsta_2_ParamLimits

0xaada,	// (0x0000d5cc) aid_touch_tab_arrow_left_ParamLimits

0xaaf0,	// (0x0000d5e2) aid_touch_tab_arrow_right_ParamLimits

0xab8b,	// (0x0000d67d) clock_nsta_pane_ParamLimits

0x1cf5,	// (0x000047e7) navi_icon_pane_g1_ParamLimits

0x1d01,	// (0x000047f3) navi_text_pane_t1_ParamLimits

0x363e,	// (0x00006130) navi_icon_text_pane_g1_ParamLimits

0x364a,	// (0x0000613c) navi_icon_text_pane_t1_ParamLimits

0xc64b,	// (0x0000f13d) list_single_hc_apps_pane_g1_ParamLimits

0xc664,	// (0x0000f156) list_single_hc_apps_pane_g2_ParamLimits

0xfca5,	// (0x00012797) list_single_hc_apps_pane_g_ParamLimits

0xc67d,	// (0x0000f16f) list_single_hc_apps_pane_g2_copy1_ParamLimits

0xc699,	// (0x0000f18b) list_single_hc_apps_pane_t1_ParamLimits

0x8e84,	// (0x0000b976) popup_toolbar2_fixed_window_ParamLimits

0x8e84,	// (0x0000b976) popup_toolbar2_fixed_window

0xa9b3,	// (0x0000d4a5) popup_toolbar2_float_window

0xdfe5,	// (0x00010ad7) bg_popup_sub_pane_cp27

0x5691,	// (0x00008183) grid_toolbar2_float_pane

0xdfe5,	// (0x00010ad7) bg_popup_sub_pane_cp26

0x5691,	// (0x00008183) grid_toolbar2_fixed_pane

0xc6c7,	// (0x0000f1b9) cell_toolbar2_fixed_pane_ParamLimits

0xc6c7,	// (0x0000f1b9) cell_toolbar2_fixed_pane

0xc6e1,	// (0x0000f1d3) cell_toolbar2_fixed_pane_g1

0x0a52,	// (0x00003544) toolbar2_fixed_button_pane

0x0b24,	// (0x00003616) toolbar2_fixed_button_pane_g1

0x0b2c,	// (0x0000361e) toolbar2_fixed_button_pane_g2

0x0b34,	// (0x00003626) toolbar2_fixed_button_pane_g3

0x0b3c,	// (0x0000362e) toolbar2_fixed_button_pane_g4

0x0b44,	// (0x00003636) toolbar2_fixed_button_pane_g5

0x0b4c,	// (0x0000363e) toolbar2_fixed_button_pane_g6

0x0b54,	// (0x00003646) toolbar2_fixed_button_pane_g7

0x0b5c,	// (0x0000364e) toolbar2_fixed_button_pane_g8

0x0b64,	// (0x00003656) toolbar2_fixed_button_pane_g9

0x0008,

0xf821,	// (0x00012313) toolbar2_fixed_button_pane_g

0x56b2,	// (0x000081a4) cell_toolbar2_float_pane_ParamLimits

0x56b2,	// (0x000081a4) cell_toolbar2_float_pane

0x56c3,	// (0x000081b5) cell_toolbar2_float_pane_g1

0x0a52,	// (0x00003544) toolbar2_fixed_button_pane_cp

0xbd9e,	// (0x0000e890) fep_vkb_accented_list_pane_ParamLimits

0xbd9e,	// (0x0000e890) fep_vkb_accented_list_pane

0x42f9,	// (0x00006deb) bg_popup_fep_shadow_pane_g9

0xf2a9,	// (0x00011d9b) bg_popup_fep_shadow_pane_cp3

0xe7a5,	// (0x00011297) list_accented_list_pane

0x56cc,	// (0x000081be) list_single_accented_list_pane_ParamLimits

0x56cc,	// (0x000081be) list_single_accented_list_pane

0xf2a9,	// (0x00011d9b) list_highlight_pane_cp10

0x56dd,	// (0x000081cf) list_single_accented_list_pane_t1

0xa8dd,	// (0x0000d3cf) popup_slider_window_ParamLimits

0xa8dd,	// (0x0000d3cf) popup_slider_window

0x51b1,	// (0x00007ca3) aid_indentation_list_msg

0xc7d2,	// (0x0000f2c4) bg_popup_window_pane_cp19

0x5803,	// (0x000082f5) popup_slider_window_g1

0x581f,	// (0x00008311) popup_slider_window_g2

0x583b,	// (0x0000832d) popup_slider_window_g3

0x0005,

0xfcaa,	// (0x0001279c) popup_slider_window_g

0x58a1,	// (0x00008393) popup_slider_window_t1

0x5915,	// (0x00008407) small_volume_slider_vertical_pane

0x3b2e,	// (0x00006620) small_volume_slider_vertical_pane_g1

0x3b2e,	// (0x00006620) small_volume_slider_vertical_pane_g2

0x5931,	// (0x00008423) small_volume_slider_vertical_pane_g3

0x0002,

0xfcbc,	// (0x000127ae) small_volume_slider_vertical_pane_g

0x8dd2,	// (0x0000b8c4) area_side_right_pane_ParamLimits

0x8dd2,	// (0x0000b8c4) area_side_right_pane

0xc88a,	// (0x0000f37c) aid_size_side_button_ParamLimits

0xc88a,	// (0x0000f37c) aid_size_side_button

0xc8a3,	// (0x0000f395) grid_sctrl_middle_pane_ParamLimits

0xc8a3,	// (0x0000f395) grid_sctrl_middle_pane

0x596d,	// (0x0000845f) sctrl_sk_bottom_pane

0x597e,	// (0x00008470) sctrl_sk_top_pane

0x5990,	// (0x00008482) aid_touch_sctrl_top

0xe328,	// (0x00010e1a) bg_sctrl_sk_pane_ParamLimits

0xe328,	// (0x00010e1a) bg_sctrl_sk_pane

0x599d,	// (0x0000848f) sctrl_sk_top_pane_g1

0x59aa,	// (0x0000849c) sctrl_sk_top_pane_t1

0x5990,	// (0x00008482) aid_touch_sctrl_bottom

0xe328,	// (0x00010e1a) bg_sctrl_sk_pane_cp_ParamLimits

0xe328,	// (0x00010e1a) bg_sctrl_sk_pane_cp

0x59c5,	// (0x000084b7) sctrl_sk_bottom_pane_g1

0x59aa,	// (0x0000849c) sctrl_sk_bottom_pane_t1

0xc8bd,	// (0x0000f3af) cell_sctrl_middle_pane_ParamLimits

0xc8bd,	// (0x0000f3af) cell_sctrl_middle_pane

0xc8ce,	// (0x0000f3c0) aid_touch_sctrl_middle_ParamLimits

0xc8ce,	// (0x0000f3c0) aid_touch_sctrl_middle

0xc8db,	// (0x0000f3cd) bg_sctrl_middle_pane_ParamLimits

0xc8db,	// (0x0000f3cd) bg_sctrl_middle_pane

0x5a8a,	// (0x0000857c) cell_sctrl_middle_pane_g1_ParamLimits

0x5a8a,	// (0x0000857c) cell_sctrl_middle_pane_g1

0xc8e9,	// (0x0000f3db) cell_sctrl_middle_pane_g2_ParamLimits

0xc8e9,	// (0x0000f3db) cell_sctrl_middle_pane_g2

0x0001,

0xfcc8,	// (0x000127ba) cell_sctrl_middle_pane_g_ParamLimits

0xfcc8,	// (0x000127ba) cell_sctrl_middle_pane_g

0x0b24,	// (0x00003616) bg_sctrl_middle_pane_g1

0x0b2c,	// (0x0000361e) bg_sctrl_middle_pane_g2

0x0b34,	// (0x00003626) bg_sctrl_middle_pane_g3

0x0b3c,	// (0x0000362e) bg_sctrl_middle_pane_g4

0x0b44,	// (0x00003636) bg_sctrl_middle_pane_g5

0x0b4c,	// (0x0000363e) bg_sctrl_middle_pane_g6

0x0b54,	// (0x00003646) bg_sctrl_middle_pane_g7

0x0b5c,	// (0x0000364e) bg_sctrl_middle_pane_g8

0x0007,

0xfccd,	// (0x000127bf) bg_sctrl_middle_pane_g

0x0b64,	// (0x00003656) bg_sctrl_middle_pane_g8_copy1

0x0b24,	// (0x00003616) bg_sctrl_sk_pane_g1

0x0b2c,	// (0x0000361e) bg_sctrl_sk_pane_g2

0x0b34,	// (0x00003626) bg_sctrl_sk_pane_g3

0x0008,

0xf821,	// (0x00012313) bg_sctrl_sk_pane_g

0xe4f6,	// (0x00010fe8) aid_size_touch_scroll_bar

0x0b3c,	// (0x0000362e) bg_sctrl_sk_pane_g4

0x0b44,	// (0x00003636) bg_sctrl_sk_pane_g5

0x0b4c,	// (0x0000363e) bg_sctrl_sk_pane_g6

0x0b54,	// (0x00003646) bg_sctrl_sk_pane_g7

0x0b5c,	// (0x0000364e) bg_sctrl_sk_pane_g8

0x0b64,	// (0x00003656) bg_sctrl_sk_pane_g9

0x006e,	// (0x00002b60) popup_fep_china_hwr2_fs_candidate_window

0xa3a3,	// (0x0000ce95) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xa3a3,	// (0x0000ce95) popup_fep_china_hwr2_fs_control_window

0x3fb2,	// (0x00006aa4) sctrl_sk_top_pane_g2

0x0001,

0xfcc3,	// (0x000127b5) sctrl_sk_top_pane_g

0xc8f5,	// (0x0000f3e7) aid_fep_china_hwr2_fs_cell_ParamLimits

0xc8f5,	// (0x0000f3e7) aid_fep_china_hwr2_fs_cell

0xc909,	// (0x0000f3fb) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xc909,	// (0x0000f3fb) bg_popup_fep_shadow_pane_cp4

0xc920,	// (0x0000f412) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xc920,	// (0x0000f412) bg_popup_fep_shadow_pane_cp5

0xc932,	// (0x0000f424) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xc932,	// (0x0000f424) popup_fep_china_hwr2_fs_control_bar_grid

0xed36,	// (0x00011828) popup_fep_china_hwr2_fs_control_funtion_grid

0x5a5e,	// (0x00008550) aid_fep_china_hwr2_fs_candi_cell

0xdfe5,	// (0x00010ad7) bg_popup_fep_shadow_pane_cp6

0x5a68,	// (0x0000855a) popup_fep_china_hwr2_fs_candidate_grid

0xc946,	// (0x0000f438) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xc946,	// (0x0000f438) cell_fep_china_hwr2_fs_funtion_grid

0x3b2e,	// (0x00006620) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x5a8a,	// (0x0000857c) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x5a8a,	// (0x0000857c) cell_fep_china_hwr2_fs_funtion_grid_g1

0x5a98,	// (0x0000858a) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x5a98,	// (0x0000858a) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfcde,	// (0x000127d0) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfcde,	// (0x000127d0) cell_fep_china_hwr2_fs_funtion_grid_g

0xc95e,	// (0x0000f450) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xc95e,	// (0x0000f450) cell_fep_china_hwr2_fs_funtion_grid_t1

0xc973,	// (0x0000f465) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xc973,	// (0x0000f465) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfce3,	// (0x000127d5) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfce3,	// (0x000127d5) cell_fep_china_hwr2_fs_funtion_grid_t

0x5adf,	// (0x000085d1) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x5ae7,	// (0x000085d9) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x5aef,	// (0x000085e1) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfce8,	// (0x000127da) popup_fep_china_hwr2_fs_control_bar_grid_g

0x5af7,	// (0x000085e9) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x5af7,	// (0x000085e9) cell_fep_china_hwr2_fs_candidate_grid

0x5b10,	// (0x00008602) popup_fep_china_hwr2_fs_candidate_grid_g20

0x5b18,	// (0x0000860a) popup_fep_china_hwr2_fs_candidate_grid_g21

0x3b2e,	// (0x00006620) cell_fep_china_hwr2_fs_candidate_grid_g1

0x3b2e,	// (0x00006620) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb0f,	// (0x00012601) cell_fep_china_hwr2_fs_candidate_grid_g

0x5b20,	// (0x00008612) cell_fep_china_hwr2_fs_candidate_grid_t1

0x066d,	// (0x0000315f) clock_nsta_pane_cp_24_ParamLimits

0x066d,	// (0x0000315f) clock_nsta_pane_cp_24

0x06eb,	// (0x000031dd) indicator_nsta_pane_cp_24_ParamLimits

0x06eb,	// (0x000031dd) indicator_nsta_pane_cp_24

0x1b60,	// (0x00004652) heading_pane_g1

0x0001,

0xf886,	// (0x00012378) heading_pane_g

0x276e,	// (0x00005260) grid_sct_catagory_button_pane

0x279e,	// (0x00005290) scroll_pane_cp5_ParamLimits

0x36d4,	// (0x000061c6) button_value_adjust_pane_cp5_ParamLimits

0x36d4,	// (0x000061c6) button_value_adjust_pane_cp5

0x37ce,	// (0x000062c0) form2_midp_time_pane_ParamLimits

0x5b2e,	// (0x00008620) cell_sct_catagory_button_pane_ParamLimits

0x5b2e,	// (0x00008620) cell_sct_catagory_button_pane

0x3af3,	// (0x000065e5) bg_button_pane_cp01_ParamLimits

0x3af3,	// (0x000065e5) bg_button_pane_cp01

0x3b2e,	// (0x00006620) cell_sct_catagory_button_pane_g1

0xa956,	// (0x0000d448) popup_tb_extension_window

0xc98f,	// (0x0000f481) aid_size_cell_ext_ParamLimits

0xc98f,	// (0x0000f481) aid_size_cell_ext

0xe4a8,	// (0x00010f9a) bg_tb_trans_pane_cp1_ParamLimits

0xe4a8,	// (0x00010f9a) bg_tb_trans_pane_cp1

0xc9b5,	// (0x0000f4a7) grid_tb_ext_pane_ParamLimits

0xc9b5,	// (0x0000f4a7) grid_tb_ext_pane

0xc9f4,	// (0x0000f4e6) cell_tb_ext_pane_ParamLimits

0xc9f4,	// (0x0000f4e6) cell_tb_ext_pane

0xca1c,	// (0x0000f50e) cell_tb_ext_pane_g1_ParamLimits

0xca1c,	// (0x0000f50e) cell_tb_ext_pane_g1

0x5bc4,	// (0x000086b6) cell_tb_ext_pane_t1

0xe328,	// (0x00010e1a) list_highlight_pane_cp11_ParamLimits

0xe328,	// (0x00010e1a) list_highlight_pane_cp11

0x8e99,	// (0x0000b98b) popup_uni_indicator_window_ParamLimits

0x8e99,	// (0x0000b98b) popup_uni_indicator_window

0xe606,	// (0x000110f8) bg_popup_sub_pane_cp14

0xca39,	// (0x0000f52b) list_uniindi_pane

0xca45,	// (0x0000f537) uniindi_top_pane

0xe328,	// (0x00010e1a) bg_uniindi_top_pane

0xca64,	// (0x0000f556) uniindi_top_pane_g1

0xca7a,	// (0x0000f56c) uniindi_top_pane_g2

0x0003,

0xfcef,	// (0x000127e1) uniindi_top_pane_g

0xca97,	// (0x0000f589) uniindi_top_pane_t1

0x5c75,	// (0x00008767) list_single_uniindi_pane_ParamLimits

0x5c75,	// (0x00008767) list_single_uniindi_pane

0x3b2e,	// (0x00006620) bg_uniindi_top_pane_g1

0x5c88,	// (0x0000877a) list_single_uniindi_pane_g1

0x5c9b,	// (0x0000878d) list_single_uniindi_pane_t1

0xdfe5,	// (0x00010ad7) control_bg_pane

0x5cc0,	// (0x000087b2) bg_sctrl_sk_pane_cp1

0x5cc9,	// (0x000087bb) bg_sctrl_sk_pane_cp2

0x5cd2,	// (0x000087c4) control_bg_pane_g1

0x5cdb,	// (0x000087cd) control_bg_pane_g2

0x0001,

0xfcf8,	// (0x000127ea) control_bg_pane_g

0x34d2,	// (0x00005fc4) cell_indicator_nsta_pane_g1_ParamLimits

0xbaff,	// (0x0000e5f1) cell_indicator_nsta_pane_g2_ParamLimits

0xfa73,	// (0x00012565) cell_indicator_nsta_pane_g_ParamLimits

0x3856,	// (0x00006348) form2_midp_time_pane_t1_ParamLimits

0x3b8a,	// (0x0000667c) main_idle_act4_pane_ParamLimits

0x3b8a,	// (0x0000667c) main_idle_act4_pane

0xa956,	// (0x0000d448) popup_tb_extension_window_ParamLimits

0xc9da,	// (0x0000f4cc) tb_ext_find_pane_ParamLimits

0xc9da,	// (0x0000f4cc) tb_ext_find_pane

0x5ce4,	// (0x000087d6) ai_gene_pane_1_cp1

0xf32a,	// (0x00011e1c) ai_gene_pane_2_cp1

0xcac1,	// (0x0000f5b3) list_single_idle_plugin_calendar_pane

0x5cf5,	// (0x000087e7) list_single_idle_plugin_notification_pane

0x5cfe,	// (0x000087f0) list_single_idle_plugin_player_pane

0xcaca,	// (0x0000f5bc) list_single_idle_plugin_shortcut_pane_ParamLimits

0xcaca,	// (0x0000f5bc) list_single_idle_plugin_shortcut_pane

0xcaf2,	// (0x0000f5e4) main_idle_act4_pane_t1

0xcb09,	// (0x0000f5fb) main_idle_act4_pane_t2

0x0001,

0xfcfd,	// (0x000127ef) main_idle_act4_pane_t

0xcb20,	// (0x0000f612) middle_sk_idle_act4_pane_ParamLimits

0xcb20,	// (0x0000f612) middle_sk_idle_act4_pane

0xcb3c,	// (0x0000f62e) popup_clock_digital_analogue_window_cp2

0xcb68,	// (0x0000f65a) shortcut_wheel_idle_act4_pane_ParamLimits

0xcb68,	// (0x0000f65a) shortcut_wheel_idle_act4_pane

0x3b2e,	// (0x00006620) shortcut_wheel_idle_act4_pane_g1

0x3b2e,	// (0x00006620) shortcut_wheel_idle_act4_pane_g2

0x3b2e,	// (0x00006620) shortcut_wheel_idle_act4_pane_g3

0x3b2e,	// (0x00006620) shortcut_wheel_idle_act4_pane_g4

0x3b2e,	// (0x00006620) shortcut_wheel_idle_act4_pane_g5

0x5d91,	// (0x00008883) shortcut_wheel_idle_act4_pane_g6

0x5d99,	// (0x0000888b) shortcut_wheel_idle_act4_pane_g7

0x5da1,	// (0x00008893) shortcut_wheel_idle_act4_pane_g8

0x5da9,	// (0x0000889b) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd02,	// (0x000127f4) shortcut_wheel_idle_act4_pane_g

0x3c3f,	// (0x00006731) middle_sk_idle_act4_pane_g1_ParamLimits

0x3c3f,	// (0x00006731) middle_sk_idle_act4_pane_g1

0xcbe5,	// (0x0000f6d7) middle_sk_idle_act4_pane_g2_ParamLimits

0xcbe5,	// (0x0000f6d7) middle_sk_idle_act4_pane_g2

0x0001,

0xfd25,	// (0x00012817) middle_sk_idle_act4_pane_g_ParamLimits

0xfd25,	// (0x00012817) middle_sk_idle_act4_pane_g

0xcbfd,	// (0x0000f6ef) middle_sk_idle_act4_pane_t1_ParamLimits

0xcbfd,	// (0x0000f6ef) middle_sk_idle_act4_pane_t1

0xcc2c,	// (0x0000f71e) grid_ai_shortcut_pane_ParamLimits

0xcc2c,	// (0x0000f71e) grid_ai_shortcut_pane

0xcc49,	// (0x0000f73b) list_highlight_pane_cp16_ParamLimits

0xcc49,	// (0x0000f73b) list_highlight_pane_cp16

0xcc56,	// (0x0000f748) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xcc56,	// (0x0000f748) list_single_idle_plugin_shortcut_pane_g1

0xcc62,	// (0x0000f754) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xcc62,	// (0x0000f754) list_single_idle_plugin_shortcut_pane_g2

0xcc7e,	// (0x0000f770) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xcc7e,	// (0x0000f770) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd2a,	// (0x0001281c) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd2a,	// (0x0001281c) list_single_idle_plugin_shortcut_pane_g

0xcc93,	// (0x0000f785) cell_ai_shortcut_pane_ParamLimits

0xcc93,	// (0x0000f785) cell_ai_shortcut_pane

0xcca9,	// (0x0000f79b) cell_ai_shortcut_pane_g1_ParamLimits

0xcca9,	// (0x0000f79b) cell_ai_shortcut_pane_g1

0x5ce4,	// (0x000087d6) ai_gene_pane_1_cp2

0x5ed9,	// (0x000089cb) ai_gene_pane_2_cp2

0x5ee1,	// (0x000089d3) list_highlight_pane_cp15

0xcccb,	// (0x0000f7bd) list_single_idle_plugin_calendar_pane_g1

0x5ee1,	// (0x000089d3) list_highlight_pane_cp17

0x5ef2,	// (0x000089e4) list_single_idle_plugin_calendar_pane_g1_copy1

0x5efa,	// (0x000089ec) list_single_idle_plugin_player_pane_g1

0x2a7f,	// (0x00005571) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd31,	// (0x00012823) list_single_idle_plugin_player_pane_g

0x5f02,	// (0x000089f4) list_single_idle_plugin_player_pane_t1

0x5f10,	// (0x00008a02) list_single_idle_plugin_player_pane_t2

0x5f1e,	// (0x00008a10) list_single_idle_plugin_player_pane_t3

0x5f2c,	// (0x00008a1e) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd36,	// (0x00012828) list_single_idle_plugin_player_pane_t

0x5f3a,	// (0x00008a2c) wait_bar_pane_cp15

0x5f42,	// (0x00008a34) grid_ai_notification_pane

0x2a7f,	// (0x00005571) list_single_idle_plugin_notification_pane_g1

0xccd3,	// (0x0000f7c5) cell_ai_notification_pane_ParamLimits

0xccd3,	// (0x0000f7c5) cell_ai_notification_pane

0x5f58,	// (0x00008a4a) cell_ai_notification_pane_g1

0x5f60,	// (0x00008a52) cell_ai_notification_pane_t1

0xcce0,	// (0x0000f7d2) tb_ext_find_button_pane

0xcce8,	// (0x0000f7da) tb_ext_find_pane_g1

0xccf0,	// (0x0000f7e2) tb_ext_find_pane_t1

0xec7b,	// (0x0001176d) tb_ext_find_button_pane_g1

0xccfe,	// (0x0000f7f0) tb_ext_find_button_pane_g2

0x0001,

0xfd3f,	// (0x00012831) tb_ext_find_button_pane_g

0xcaf2,	// (0x0000f5e4) main_idle_act4_pane_t1_ParamLimits

0xcb09,	// (0x0000f5fb) main_idle_act4_pane_t2_ParamLimits

0xfcfd,	// (0x000127ef) main_idle_act4_pane_t_ParamLimits

0xcb3c,	// (0x0000f62e) popup_clock_digital_analogue_window_cp2_ParamLimits

0xcb54,	// (0x0000f646) sat_plugin_idle_act4_pane_ParamLimits

0xcb54,	// (0x0000f646) sat_plugin_idle_act4_pane

0xcd07,	// (0x0000f7f9) sat_plugin_idle_act4_pane_t1_ParamLimits

0xcd07,	// (0x0000f7f9) sat_plugin_idle_act4_pane_t1

0xcd1f,	// (0x0000f811) sat_plugin_idle_act4_pane_t2_ParamLimits

0xcd1f,	// (0x0000f811) sat_plugin_idle_act4_pane_t2

0xcd37,	// (0x0000f829) sat_plugin_idle_act4_pane_t3_ParamLimits

0xcd37,	// (0x0000f829) sat_plugin_idle_act4_pane_t3

0xcd4f,	// (0x0000f841) sat_plugin_idle_act4_pane_t4_ParamLimits

0xcd4f,	// (0x0000f841) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd44,	// (0x00012836) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd44,	// (0x00012836) sat_plugin_idle_act4_pane_t

0x8e14,	// (0x0000b906) popup_battery_window_ParamLimits

0x8e14,	// (0x0000b906) popup_battery_window

0xe328,	// (0x00010e1a) bg_popup_sub_pane_cp25_ParamLimits

0xe328,	// (0x00010e1a) bg_popup_sub_pane_cp25

0x5fe1,	// (0x00008ad3) popup_battery_window_g1_ParamLimits

0x5fe1,	// (0x00008ad3) popup_battery_window_g1

0x5fed,	// (0x00008adf) popup_battery_window_t1_ParamLimits

0x5fed,	// (0x00008adf) popup_battery_window_t1

0x5fff,	// (0x00008af1) popup_battery_window_t2_ParamLimits

0x5fff,	// (0x00008af1) popup_battery_window_t2

0x0001,

0xfd4d,	// (0x0001283f) popup_battery_window_t_ParamLimits

0xfd4d,	// (0x0001283f) popup_battery_window_t

0x9fdd,	// (0x0000cacf) midp_canvas_pane_ParamLimits

0xa04f,	// (0x0000cb41) midp_keypad_pane_ParamLimits

0xa04f,	// (0x0000cb41) midp_keypad_pane

0xf4e5,	// (0x00011fd7) main_midp_pane_ParamLimits

0xbb0c,	// (0x0000e5fe) signal_pane_g2_cp_ParamLimits

0xcd67,	// (0x0000f859) aid_size_cell_midp_keypad_ParamLimits

0xcd67,	// (0x0000f859) aid_size_cell_midp_keypad

0xcd85,	// (0x0000f877) midp_keyp_game_grid_pane_ParamLimits

0xcd85,	// (0x0000f877) midp_keyp_game_grid_pane

0xcdac,	// (0x0000f89e) midp_keyp_rocker_pane_ParamLimits

0xcdac,	// (0x0000f89e) midp_keyp_rocker_pane

0xcdfd,	// (0x0000f8ef) midp_keyp_sk_left_pane_ParamLimits

0xcdfd,	// (0x0000f8ef) midp_keyp_sk_left_pane

0xce51,	// (0x0000f943) midp_keyp_sk_right_pane_ParamLimits

0xce51,	// (0x0000f943) midp_keyp_sk_right_pane

0xdfe5,	// (0x00010ad7) bg_button_pane_cp03

0xcea5,	// (0x0000f997) midp_keyp_sk_left_pane_g1

0xdfe5,	// (0x00010ad7) bg_button_pane_cp04

0xcea5,	// (0x0000f997) midp_keyp_sk_right_pane_g1

0x3b2e,	// (0x00006620) midp_keyp_rocker_pane_g1

0xceae,	// (0x0000f9a0) keyp_game_cell_pane_ParamLimits

0xceae,	// (0x0000f9a0) keyp_game_cell_pane

0xdfe5,	// (0x00010ad7) bg_button_pane_cp02

0xced2,	// (0x0000f9c4) keyp_game_cell_pane_g1

0x8e34,	// (0x0000b926) popup_fep_vkb2_window_ParamLimits

0x8e34,	// (0x0000b926) popup_fep_vkb2_window

0xcedb,	// (0x0000f9cd) aid_size_cell_vkb2_ParamLimits

0xcedb,	// (0x0000f9cd) aid_size_cell_vkb2

0xcf19,	// (0x0000fa0b) popup_fep_vkb2_window_g1_ParamLimits

0xcf19,	// (0x0000fa0b) popup_fep_vkb2_window_g1

0xcf69,	// (0x0000fa5b) vkb2_area_bottom_pane_ParamLimits

0xcf69,	// (0x0000fa5b) vkb2_area_bottom_pane

0xcfbd,	// (0x0000faaf) vkb2_area_keypad_pane_ParamLimits

0xcfbd,	// (0x0000faaf) vkb2_area_keypad_pane

0xd005,	// (0x0000faf7) vkb2_area_top_pane_ParamLimits

0xd005,	// (0x0000faf7) vkb2_area_top_pane

0xd08b,	// (0x0000fb7d) vkb2_top_entry_pane_ParamLimits

0xd08b,	// (0x0000fb7d) vkb2_top_entry_pane

0xd0b8,	// (0x0000fbaa) vkb2_top_grid_left_pane_ParamLimits

0xd0b8,	// (0x0000fbaa) vkb2_top_grid_left_pane

0xd0d8,	// (0x0000fbca) vkb2_top_grid_right_pane_ParamLimits

0xd0d8,	// (0x0000fbca) vkb2_top_grid_right_pane

0x6380,	// (0x00008e72) vkb2_cell_keypad_pane_ParamLimits

0x6380,	// (0x00008e72) vkb2_cell_keypad_pane

0xd11e,	// (0x0000fc10) vkb2_area_bottom_grid_pane_ParamLimits

0xd11e,	// (0x0000fc10) vkb2_area_bottom_grid_pane

0xd148,	// (0x0000fc3a) vkb2_area_bottom_pane_g1_ParamLimits

0xd148,	// (0x0000fc3a) vkb2_area_bottom_pane_g1

0xd16e,	// (0x0000fc60) vkb2_area_bottom_pane_g2_ParamLimits

0xd16e,	// (0x0000fc60) vkb2_area_bottom_pane_g2

0xd19f,	// (0x0000fc91) vkb2_area_bottom_pane_g3_ParamLimits

0xd19f,	// (0x0000fc91) vkb2_area_bottom_pane_g3

0x0002,

0xfd52,	// (0x00012844) vkb2_area_bottom_pane_g_ParamLimits

0xfd52,	// (0x00012844) vkb2_area_bottom_pane_g

0x652a,	// (0x0000901c) vkb2_top_cell_left_pane_ParamLimits

0x652a,	// (0x0000901c) vkb2_top_cell_left_pane

0xd209,	// (0x0000fcfb) vkb2_top_entry_pane_g1_ParamLimits

0xd209,	// (0x0000fcfb) vkb2_top_entry_pane_g1

0xd217,	// (0x0000fd09) vkb2_top_entry_pane_t1_ParamLimits

0xd217,	// (0x0000fd09) vkb2_top_entry_pane_t1

0x6592,	// (0x00009084) vkb2_top_entry_pane_t2_ParamLimits

0x6592,	// (0x00009084) vkb2_top_entry_pane_t2

0x65c4,	// (0x000090b6) vkb2_top_entry_pane_t3_ParamLimits

0x65c4,	// (0x000090b6) vkb2_top_entry_pane_t3

0x0002,

0xfd59,	// (0x0001284b) vkb2_top_entry_pane_t_ParamLimits

0xfd59,	// (0x0001284b) vkb2_top_entry_pane_t

0xd250,	// (0x0000fd42) vkb2_top_grid_right_pane_g1_ParamLimits

0xd250,	// (0x0000fd42) vkb2_top_grid_right_pane_g1

0x662b,	// (0x0000911d) vkb2_top_grid_right_pane_g2_ParamLimits

0x662b,	// (0x0000911d) vkb2_top_grid_right_pane_g2

0x6643,	// (0x00009135) vkb2_top_grid_right_pane_g3_ParamLimits

0x6643,	// (0x00009135) vkb2_top_grid_right_pane_g3

0xd266,	// (0x0000fd58) vkb2_top_grid_right_pane_g4_ParamLimits

0xd266,	// (0x0000fd58) vkb2_top_grid_right_pane_g4

0x0003,

0xfd60,	// (0x00012852) vkb2_top_grid_right_pane_g_ParamLimits

0xfd60,	// (0x00012852) vkb2_top_grid_right_pane_g

0x6671,	// (0x00009163) vkb2_top_cell_left_pane_g1

0x6688,	// (0x0000917a) vkb2_cell_keypad_pane_g1_ParamLimits

0x6688,	// (0x0000917a) vkb2_cell_keypad_pane_g1

0x6696,	// (0x00009188) vkb2_cell_keypad_pane_t1_ParamLimits

0x6696,	// (0x00009188) vkb2_cell_keypad_pane_t1

0x66ad,	// (0x0000919f) vkb2_cell_bottom_grid_pane_ParamLimits

0x66ad,	// (0x0000919f) vkb2_cell_bottom_grid_pane

0x66e6,	// (0x000091d8) vkb2_cell_bottom_grid_pane_g1

0xcb89,	// (0x0000f67b) aid_call2_pane_cp02

0xcb91,	// (0x0000f683) aid_call_pane_cp02

0xcb99,	// (0x0000f68b) clock_digital_number_pane_cp10

0xcba1,	// (0x0000f693) clock_digital_number_pane_cp11

0xcba9,	// (0x0000f69b) clock_digital_number_pane_cp12

0xcbb1,	// (0x0000f6a3) clock_digital_number_pane_cp13

0xcbb9,	// (0x0000f6ab) clock_digital_separator_pane_cp10

0xec7b,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g1

0xec7b,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g2

0xcbc1,	// (0x0000f6b3) popup_clock_digital_analogue_window_cp2_g3

0xec7b,	// (0x0001176d) popup_clock_digital_analogue_window_cp2_g4

0xcbc1,	// (0x0000f6b3) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd15,	// (0x00012807) popup_clock_digital_analogue_window_cp2_g

0xcbc9,	// (0x0000f6bb) popup_clock_digital_analogue_window_cp2_t1

0xcbd7,	// (0x0000f6c9) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd20,	// (0x00012812) popup_clock_digital_analogue_window_cp2_t

0x3b2e,	// (0x00006620) clock_digital_number_pane_cp10_g1

0x3b2e,	// (0x00006620) clock_digital_number_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00012601) clock_digital_number_pane_cp10_g

0x3b2e,	// (0x00006620) clock_digital_separator_pane_cp10_g1

0x3b2e,	// (0x00006620) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb0f,	// (0x00012601) clock_digital_separator_pane_cp10_g

0xca86,	// (0x0000f578) uniindi_top_pane_g3

0x5c3e,	// (0x00008730) uniindi_top_pane_g4

0x640b,	// (0x00008efd) vkb2_row_keypad_pane_ParamLimits

0x640b,	// (0x00008efd) vkb2_row_keypad_pane

0x6702,	// (0x000091f4) vkb2_cell_t_keypad_pane_ParamLimits

0x6702,	// (0x000091f4) vkb2_cell_t_keypad_pane

0x6712,	// (0x00009204) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x6712,	// (0x00009204) vkb2_cell_t_keypad_pane_cp08

0x6725,	// (0x00009217) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x6725,	// (0x00009217) vkb2_cell_t_keypad_pane_cp09

0x6739,	// (0x0000922b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x6739,	// (0x0000922b) vkb2_cell_t_keypad_pane_cp01

0x674a,	// (0x0000923c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x674a,	// (0x0000923c) vkb2_cell_t_keypad_pane_cp02

0x675b,	// (0x0000924d) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x675b,	// (0x0000924d) vkb2_cell_t_keypad_pane_cp03

0x676c,	// (0x0000925e) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x676c,	// (0x0000925e) vkb2_cell_t_keypad_pane_cp04

0x677d,	// (0x0000926f) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x677d,	// (0x0000926f) vkb2_cell_t_keypad_pane_cp05

0x678e,	// (0x00009280) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x678e,	// (0x00009280) vkb2_cell_t_keypad_pane_cp06

0x679f,	// (0x00009291) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x679f,	// (0x00009291) vkb2_cell_t_keypad_pane_cp07

0x67b0,	// (0x000092a2) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x67b0,	// (0x000092a2) vkb2_cell_t_keypad_pane_cp10

0x3fb2,	// (0x00006aa4) vkb2_cell_t_keypad_pane_g1

0x67c5,	// (0x000092b7) vkb2_cell_t_keypad_pane_t1

0xdfe5,	// (0x00010ad7) popup_grid_graphic2_window

0xd27c,	// (0x0000fd6e) aid_size_cell_graphic2_ParamLimits

0xd27c,	// (0x0000fd6e) aid_size_cell_graphic2

0xd2ba,	// (0x0000fdac) bg_popup_window_pane_cp21_ParamLimits

0xd2ba,	// (0x0000fdac) bg_popup_window_pane_cp21

0xd2c8,	// (0x0000fdba) graphic2_pages_pane_ParamLimits

0xd2c8,	// (0x0000fdba) graphic2_pages_pane

0xd31e,	// (0x0000fe10) grid_graphic2_control_pane_ParamLimits

0xd31e,	// (0x0000fe10) grid_graphic2_control_pane

0xd366,	// (0x0000fe58) grid_graphic2_pane_ParamLimits

0xd366,	// (0x0000fe58) grid_graphic2_pane

0xd3ed,	// (0x0000fedf) cell_graphic2_pane

0xdfe5,	// (0x00010ad7) main_comp_mode_pane

0x536a,	// (0x00007e5c) list_ai3_gene_pane_ParamLimits

0xc7d2,	// (0x0000f2c4) bg_popup_window_pane_cp19_ParamLimits

0x57a7,	// (0x00008299) bg_touch_area_indi_pane_ParamLimits

0x57a7,	// (0x00008299) bg_touch_area_indi_pane

0x57bd,	// (0x000082af) bg_touch_area_indi_pane_cp01_ParamLimits

0x57bd,	// (0x000082af) bg_touch_area_indi_pane_cp01

0x57d3,	// (0x000082c5) bg_touch_area_indi_pane_cp02_ParamLimits

0x57d3,	// (0x000082c5) bg_touch_area_indi_pane_cp02

0x57e9,	// (0x000082db) bg_touch_area_indi_pane_cp03_ParamLimits

0x57e9,	// (0x000082db) bg_touch_area_indi_pane_cp03

0x5803,	// (0x000082f5) popup_slider_window_g1_ParamLimits

0x581f,	// (0x00008311) popup_slider_window_g2_ParamLimits

0x583b,	// (0x0000832d) popup_slider_window_g3_ParamLimits

0xfcaa,	// (0x0001279c) popup_slider_window_g_ParamLimits

0x58a1,	// (0x00008393) popup_slider_window_t1_ParamLimits

0x5915,	// (0x00008407) small_volume_slider_vertical_pane_ParamLimits

0xd3ed,	// (0x0000fedf) cell_graphic2_pane_ParamLimits

0xd448,	// (0x0000ff3a) bg_button_pane_cp10_ParamLimits

0xd448,	// (0x0000ff3a) bg_button_pane_cp10

0xd45b,	// (0x0000ff4d) bg_button_pane_cp11_ParamLimits

0xd45b,	// (0x0000ff4d) bg_button_pane_cp11

0xd46e,	// (0x0000ff60) graphic2_pages_pane_g1_ParamLimits

0xd46e,	// (0x0000ff60) graphic2_pages_pane_g1

0xd489,	// (0x0000ff7b) graphic2_pages_pane_g2_ParamLimits

0xd489,	// (0x0000ff7b) graphic2_pages_pane_g2

0x0001,

0xfd6e,	// (0x00012860) graphic2_pages_pane_g_ParamLimits

0xfd6e,	// (0x00012860) graphic2_pages_pane_g

0xd4a1,	// (0x0000ff93) graphic2_pages_pane_t1_ParamLimits

0xd4a1,	// (0x0000ff93) graphic2_pages_pane_t1

0xd4b9,	// (0x0000ffab) cell_graphic2_control_pane_ParamLimits

0xd4b9,	// (0x0000ffab) cell_graphic2_control_pane

0xd4eb,	// (0x0000ffdd) cell_graphic2_pane_g1_ParamLimits

0xd4eb,	// (0x0000ffdd) cell_graphic2_pane_g1

0x3dda,	// (0x000068cc) cell_graphic2_pane_g2_ParamLimits

0x3dda,	// (0x000068cc) cell_graphic2_pane_g2

0xd4f8,	// (0x0000ffea) cell_graphic2_pane_g3_ParamLimits

0xd4f8,	// (0x0000ffea) cell_graphic2_pane_g3

0x3de7,	// (0x000068d9) cell_graphic2_pane_g4_ParamLimits

0x3de7,	// (0x000068d9) cell_graphic2_pane_g4

0xd505,	// (0x0000fff7) cell_graphic2_pane_g5_ParamLimits

0xd505,	// (0x0000fff7) cell_graphic2_pane_g5

0x0004,

0xfd73,	// (0x00012865) cell_graphic2_pane_g_ParamLimits

0xfd73,	// (0x00012865) cell_graphic2_pane_g

0xd522,	// (0x00010014) cell_graphic2_pane_t1_ParamLimits

0xd522,	// (0x00010014) cell_graphic2_pane_t1

0x1b54,	// (0x00004646) grid_highlight_pane_cp11_ParamLimits

0x1b54,	// (0x00004646) grid_highlight_pane_cp11

0xe328,	// (0x00010e1a) bg_button_pane_cp05

0xd56c,	// (0x0001005e) cell_graphic2_control_pane_g1

0x3b2e,	// (0x00006620) bg_touch_area_indi_pane_g1

0x6a9e,	// (0x00009590) aid_cmod_rocker_key_size

0x6aa8,	// (0x0000959a) aid_cmode_itu_key_size

0x6ab2,	// (0x000095a4) main_cmode_video_pane

0x6abc,	// (0x000095ae) main_comp_mode_itu_pane

0x6ac8,	// (0x000095ba) main_comp_mode_rocker_pane

0x6ad4,	// (0x000095c6) cell_cmode_rocker_pane_ParamLimits

0x6ad4,	// (0x000095c6) cell_cmode_rocker_pane

0x6ae6,	// (0x000095d8) cell_cmode_itu_pane_ParamLimits

0x6ae6,	// (0x000095d8) cell_cmode_itu_pane

0xe606,	// (0x000110f8) bg_button_pane_cp06_ParamLimits

0xe606,	// (0x000110f8) bg_button_pane_cp06

0x3fb2,	// (0x00006aa4) cell_cmode_rocker_pane_g1_ParamLimits

0x3fb2,	// (0x00006aa4) cell_cmode_rocker_pane_g1

0x5a8a,	// (0x0000857c) cell_cmode_rocker_pane_g2_ParamLimits

0x5a8a,	// (0x0000857c) cell_cmode_rocker_pane_g2

0x0001,

0xfd83,	// (0x00012875) cell_cmode_rocker_pane_g_ParamLimits

0xfd83,	// (0x00012875) cell_cmode_rocker_pane_g

0xdfe5,	// (0x00010ad7) bg_button_pane_cp07

0x6afb,	// (0x000095ed) cell_cmode_itu_pane_g1

0x6b04,	// (0x000095f6) cell_cmode_itu_pane_t1

0x6b12,	// (0x00009604) cell_cmode_itu_pane_t2

0x0001,

0xfd88,	// (0x0001287a) cell_cmode_itu_pane_t

0x5cb0,	// (0x000087a2) aid_touch_ctrl_left

0x5cb8,	// (0x000087aa) aid_touch_ctrl_right

0xdfe5,	// (0x00010ad7) compa_mode_pane

0xd592,	// (0x00010084) aid_cmod_rocker_key_size_cp

0xd59c,	// (0x0001008e) aid_cmode_itu_key_size_cp

0x6b34,	// (0x00009626) compa_mode_pane_g1

0x6b3c,	// (0x0000962e) compa_mode_pane_g2

0x6b44,	// (0x00009636) compa_mode_pane_g3

0x0002,

0xfd8d,	// (0x0001287f) compa_mode_pane_g

0xd5a6,	// (0x00010098) main_comp_mode_itu_pane_cp

0xd5ae,	// (0x000100a0) main_comp_mode_rocker_pane_cp

0xd5b6,	// (0x000100a8) cell_cmode_itu_pane_cp_ParamLimits

0xd5b6,	// (0x000100a8) cell_cmode_itu_pane_cp

0xd5cb,	// (0x000100bd) cell_cmode_rocker_pane_cp_ParamLimits

0xd5cb,	// (0x000100bd) cell_cmode_rocker_pane_cp

0xe606,	// (0x000110f8) bg_button_pane_cp06_cp_ParamLimits

0xe606,	// (0x000110f8) bg_button_pane_cp06_cp

0x3fb2,	// (0x00006aa4) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x3fb2,	// (0x00006aa4) cell_cmode_rocker_pane_g1_cp

0x3b2e,	// (0x00006620) cell_cmode_rocker_pane_g2_cp

0xdfe5,	// (0x00010ad7) bg_button_pane_cp07_cp

0xd5dd,	// (0x000100cf) cell_cmode_itu_pane_g1_cp

0xd5e6,	// (0x000100d8) cell_cmode_itu_pane_t1_cp

0xd5e6,	// (0x000100d8) cell_cmode_itu_pane_t2_cp

0xb80c,	// (0x0000e2fe) settings_code_pane_cp2

0xe1e4,	// (0x00010cd6) bg_popup_window_pane_cp3_ParamLimits

0xe441,	// (0x00010f33) heading_pane_cp3_ParamLimits

0xe450,	// (0x00010f42) listscroll_popup_graphic_pane_ParamLimits

0x3b98,	// (0x0000668a) fep_hwr_aid_pane_ParamLimits

0x5990,	// (0x00008482) aid_touch_sctrl_top_ParamLimits

0x599d,	// (0x0000848f) sctrl_sk_top_pane_g1_ParamLimits

0x3fb2,	// (0x00006aa4) sctrl_sk_top_pane_g2_ParamLimits

0xfcc3,	// (0x000127b5) sctrl_sk_top_pane_g_ParamLimits

0x59aa,	// (0x0000849c) sctrl_sk_top_pane_t1_ParamLimits

0x5990,	// (0x00008482) aid_touch_sctrl_bottom_ParamLimits

0x59aa,	// (0x0000849c) sctrl_sk_bottom_pane_t1_ParamLimits

0xca52,	// (0x0000f544) aid_area_touch_clock

0xd04d,	// (0x0000fb3f) aid_vkb2_area_top_pane_cell_ParamLimits

0xd04d,	// (0x0000fb3f) aid_vkb2_area_top_pane_cell

0xd0f8,	// (0x0000fbea) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xd0f8,	// (0x0000fbea) aid_vkb2_area_bottom_pane_cell

0x654a,	// (0x0000903c) popup_char_count_window

0x6b9a,	// (0x0000968c) popup_char_count_window_g1

0x6ba3,	// (0x00009695) popup_char_count_window_g2

0x6bac,	// (0x0000969e) popup_char_count_window_g3

0x0002,

0xfd94,	// (0x00012886) popup_char_count_window_g

0x6bb5,	// (0x000096a7) popup_char_count_window_t1

0x61a8,	// (0x00008c9a) popup_fep_char_preview_window_ParamLimits

0x61a8,	// (0x00008c9a) popup_fep_char_preview_window

0xd06d,	// (0x0000fb5f) vkb2_top_candi_pane_ParamLimits

0xd06d,	// (0x0000fb5f) vkb2_top_candi_pane

0xd5f4,	// (0x000100e6) cell_vkb2_top_candi_pane_ParamLimits

0xd5f4,	// (0x000100e6) cell_vkb2_top_candi_pane

0x139f,	// (0x00003e91) bg_popup_fep_char_preview_window_ParamLimits

0x139f,	// (0x00003e91) bg_popup_fep_char_preview_window

0x6c10,	// (0x00009702) popup_fep_char_preview_window_t1_ParamLimits

0x6c10,	// (0x00009702) popup_fep_char_preview_window_t1

0x6c4a,	// (0x0000973c) bg_popup_fep_char_preview_window_g1

0x6c52,	// (0x00009744) bg_popup_fep_char_preview_window_g2

0x6c5a,	// (0x0000974c) bg_popup_fep_char_preview_window_g3

0x6c62,	// (0x00009754) bg_popup_fep_char_preview_window_g4

0x6c6a,	// (0x0000975c) bg_popup_fep_char_preview_window_g5

0x6c72,	// (0x00009764) bg_popup_fep_char_preview_window_g6

0x6c7a,	// (0x0000976c) bg_popup_fep_char_preview_window_g7

0x6c82,	// (0x00009774) bg_popup_fep_char_preview_window_g8

0x6c8a,	// (0x0000977c) bg_popup_fep_char_preview_window_g9

0x0009,

0xfd9b,	// (0x0001288d) bg_popup_fep_char_preview_window_g

0x3fb2,	// (0x00006aa4) cell_vkb2_top_candi_pane_g1_ParamLimits

0x3fb2,	// (0x00006aa4) cell_vkb2_top_candi_pane_g1

0x431d,	// (0x00006e0f) cell_vkb2_top_candi_pane_g2_ParamLimits

0x431d,	// (0x00006e0f) cell_vkb2_top_candi_pane_g2

0x433e,	// (0x00006e30) cell_vkb2_top_candi_pane_g3_ParamLimits

0x433e,	// (0x00006e30) cell_vkb2_top_candi_pane_g3

0x6c9a,	// (0x0000978c) cell_vkb2_top_candi_pane_g4_ParamLimits

0x6c9a,	// (0x0000978c) cell_vkb2_top_candi_pane_g4

0x6cbb,	// (0x000097ad) cell_vkb2_top_candi_pane_g5_ParamLimits

0x6cbb,	// (0x000097ad) cell_vkb2_top_candi_pane_g5

0x5a8a,	// (0x0000857c) cell_vkb2_top_candi_pane_g6_ParamLimits

0x5a8a,	// (0x0000857c) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdb0,	// (0x000128a2) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdb0,	// (0x000128a2) cell_vkb2_top_candi_pane_g

0x6cdc,	// (0x000097ce) cell_vkb2_top_candi_pane_t1

0xb62c,	// (0x0000e11e) aid_size_touch_slider_mark_ParamLimits

0xb62c,	// (0x0000e11e) aid_size_touch_slider_mark

0xd304,	// (0x0000fdf6) grid_graphic2_catg_pane_ParamLimits

0xd304,	// (0x0000fdf6) grid_graphic2_catg_pane

0xd3c0,	// (0x0000feb2) popup_grid_graphic2_window_t1_ParamLimits

0xd3c0,	// (0x0000feb2) popup_grid_graphic2_window_t1

0xd3d6,	// (0x0000fec8) popup_grid_graphic2_window_t2_ParamLimits

0xd3d6,	// (0x0000fec8) popup_grid_graphic2_window_t2

0x0001,

0xfd69,	// (0x0001285b) popup_grid_graphic2_window_t_ParamLimits

0xfd69,	// (0x0001285b) popup_grid_graphic2_window_t

0xe328,	// (0x00010e1a) bg_button_pane_cp05_ParamLimits

0xd56c,	// (0x0001005e) cell_graphic2_control_pane_g1_ParamLimits

0xd662,	// (0x00010154) cell_graphic2_catg_pane_ParamLimits

0xd662,	// (0x00010154) cell_graphic2_catg_pane

0xdfe5,	// (0x00010ad7) bg_button_pane_cp12

0xd674,	// (0x00010166) cell_graphic2_catg_pane_g1

0x5bc4,	// (0x000086b6) cell_tb_ext_pane_t1_ParamLimits

0x65e8,	// (0x000090da) vkb2_top_cell_right_narrow_pane_ParamLimits

0x65e8,	// (0x000090da) vkb2_top_cell_right_narrow_pane

0x6600,	// (0x000090f2) vkb2_top_cell_right_wide_pane_ParamLimits

0x6600,	// (0x000090f2) vkb2_top_cell_right_wide_pane

0x3b8a,	// (0x0000667c) bg_vkb2_func_pane_ParamLimits

0x3b8a,	// (0x0000667c) bg_vkb2_func_pane

0x6671,	// (0x00009163) vkb2_top_cell_left_pane_g1_ParamLimits

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp03_ParamLimits

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp03

0x66e6,	// (0x000091d8) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x0b2c,	// (0x0000361e) bg_vkb2_func_pane_g1

0x0b34,	// (0x00003626) bg_vkb2_func_pane_g2

0x0b44,	// (0x00003636) bg_vkb2_func_pane_g3

0x0b3c,	// (0x0000362e) bg_vkb2_func_pane_g4

0x0b4c,	// (0x0000363e) bg_vkb2_func_pane_g5

0x0b54,	// (0x00003646) bg_vkb2_func_pane_g6

0x0b5c,	// (0x0000364e) bg_vkb2_func_pane_g7

0x0b64,	// (0x00003656) bg_vkb2_func_pane_g8

0x0b24,	// (0x00003616) bg_vkb2_func_pane_g9

0x0008,

0xfdbd,	// (0x000128af) bg_vkb2_func_pane_g

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp01_ParamLimits

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp01

0x6671,	// (0x00009163) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x6671,	// (0x00009163) vkb2_top_cell_right_wide_pane_g1

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp02_ParamLimits

0x3b8a,	// (0x0000667c) bg_vkb2_fuc_pane_cp02

0x66e6,	// (0x000091d8) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x66e6,	// (0x000091d8) vkb2_top_cell_right_narrow_pane_g1

0xc714,	// (0x0000f206) aid_touch_area_decrease_ParamLimits

0xc714,	// (0x0000f206) aid_touch_area_decrease

0xc74e,	// (0x0000f240) aid_touch_area_increase_ParamLimits

0xc74e,	// (0x0000f240) aid_touch_area_increase

0xc776,	// (0x0000f268) aid_touch_area_mute_ParamLimits

0xc776,	// (0x0000f268) aid_touch_area_mute

0xc79e,	// (0x0000f290) aid_touch_area_slider_ParamLimits

0xc79e,	// (0x0000f290) aid_touch_area_slider

0xc7de,	// (0x0000f2d0) popup_slider_window_g4_ParamLimits

0xc7de,	// (0x0000f2d0) popup_slider_window_g4

0xc806,	// (0x0000f2f8) popup_slider_window_g5_ParamLimits

0xc806,	// (0x0000f2f8) popup_slider_window_g5

0xc83a,	// (0x0000f32c) popup_slider_window_g6_ParamLimits

0xc83a,	// (0x0000f32c) popup_slider_window_g6

0x58cf,	// (0x000083c1) popup_slider_window_t2_ParamLimits

0x58cf,	// (0x000083c1) popup_slider_window_t2

0x0001,

0xfcb7,	// (0x000127a9) popup_slider_window_t_ParamLimits

0xfcb7,	// (0x000127a9) popup_slider_window_t

0xc856,	// (0x0000f348) slider_pane_ParamLimits

0xc856,	// (0x0000f348) slider_pane

0x6d16,	// (0x00009808) slider_pane_g1_ParamLimits

0x6d16,	// (0x00009808) slider_pane_g1

0x6d2a,	// (0x0000981c) slider_pane_g2_ParamLimits

0x6d2a,	// (0x0000981c) slider_pane_g2

0x6d40,	// (0x00009832) slider_pane_g3_ParamLimits

0x6d40,	// (0x00009832) slider_pane_g3

0x0003,

0xfdd0,	// (0x000128c2) slider_pane_g_ParamLimits

0xfdd0,	// (0x000128c2) slider_pane_g

0xa99e,	// (0x0000d490) popup_tb_float_extension_window_ParamLimits

0xa99e,	// (0x0000d490) popup_tb_float_extension_window

0x6d6c,	// (0x0000985e) aid_size_cell_tb_float_ext

0xdfe5,	// (0x00010ad7) bg_popup_sub_window_cp28

0xd67d,	// (0x0001016f) grid_tb_float_ext_pane

0xd687,	// (0x00010179) cell_tb_float_ext_pane_ParamLimits

0xd687,	// (0x00010179) cell_tb_float_ext_pane

0xd6a1,	// (0x00010193) cell_tb_float_ext_pane_g1

0xd6aa,	// (0x0001019c) grid_highlight_pane_cp12

0xbd7c,	// (0x0000e86e) cell_last_hwr_side_pane_ParamLimits

0xbd7c,	// (0x0000e86e) cell_last_hwr_side_pane

0x3b2e,	// (0x00006620) cell_last_hwr_side_pane_g1

0x6dae,	// (0x000098a0) cell_last_hwr_side_pane_g2

0x0001,

0xfdd9,	// (0x000128cb) cell_last_hwr_side_pane_g

0xd1d4,	// (0x0000fcc6) vkb2_area_bottom_space_btn_pane_ParamLimits

0xd1d4,	// (0x0000fcc6) vkb2_area_bottom_space_btn_pane

0x3fb2,	// (0x00006aa4) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x67c5,	// (0x000092b7) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x6cdc,	// (0x000097ce) cell_vkb2_top_candi_pane_t1_ParamLimits

0x6db7,	// (0x000098a9) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x6db7,	// (0x000098a9) vkb2_area_bottom_space_btn_pane_g1

0x6df1,	// (0x000098e3) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x6df1,	// (0x000098e3) vkb2_area_bottom_space_btn_pane_g2

0x6e27,	// (0x00009919) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x6e27,	// (0x00009919) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfdde,	// (0x000128d0) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfdde,	// (0x000128d0) vkb2_area_bottom_space_btn_pane_g

0x3c4d,	// (0x0000673f) cel_fep_hwr_func_pane_ParamLimits

0x3c4d,	// (0x0000673f) cel_fep_hwr_func_pane

0xbd51,	// (0x0000e843) cell_hwr_side_button_pane_ParamLimits

0xbd51,	// (0x0000e843) cell_hwr_side_button_pane

0xca52,	// (0x0000f544) aid_area_touch_clock_ParamLimits

0xe328,	// (0x00010e1a) bg_uniindi_top_pane_ParamLimits

0xca64,	// (0x0000f556) uniindi_top_pane_g1_ParamLimits

0xca7a,	// (0x0000f56c) uniindi_top_pane_g2_ParamLimits

0xca86,	// (0x0000f578) uniindi_top_pane_g3_ParamLimits

0x5c3e,	// (0x00008730) uniindi_top_pane_g4_ParamLimits

0xfcef,	// (0x000127e1) uniindi_top_pane_g_ParamLimits

0xca97,	// (0x0000f589) uniindi_top_pane_t1_ParamLimits

0xe328,	// (0x00010e1a) bg_vkb2_func_pane_cp01_ParamLimits

0xe328,	// (0x00010e1a) bg_vkb2_func_pane_cp01

0x6e71,	// (0x00009963) cel_fep_hwr_func_pane_g1_ParamLimits

0x6e71,	// (0x00009963) cel_fep_hwr_func_pane_g1

0xe328,	// (0x00010e1a) bg_vkb2_func_pane_cp02_ParamLimits

0xe328,	// (0x00010e1a) bg_vkb2_func_pane_cp02

0x6e71,	// (0x00009963) cell_hwr_side_button_pane_g1_ParamLimits

0x6e71,	// (0x00009963) cell_hwr_side_button_pane_g1

0x08f8,	// (0x000033ea) status_pane_g4_ParamLimits

0x08f8,	// (0x000033ea) status_pane_g4

0x0912,	// (0x00003404) status_pane_t1

0x3869,	// (0x0000635b) form2_midp_gauge_slider_cont_pane

0x3871,	// (0x00006363) form2_midp_gauge_slider_pane_t1_ParamLimits

0xbc6a,	// (0x0000e75c) form2_midp_gauge_slider_pane_t2_ParamLimits

0xbc7c,	// (0x0000e76e) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfac2,	// (0x000125b4) form2_midp_gauge_slider_pane_t_ParamLimits

0x38a7,	// (0x00006399) form2_midp_slider_pane_ParamLimits

0x6168,	// (0x00008c5a) aid_size_cell_func_vkb2_ParamLimits

0x6168,	// (0x00008c5a) aid_size_cell_func_vkb2

0x6d58,	// (0x0000984a) slider_pane_g4_ParamLimits

0x6d58,	// (0x0000984a) slider_pane_g4

0xd6b3,	// (0x000101a5) form2_midp_gauge_slider_pane_t2_cp01

0xd6c1,	// (0x000101b3) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xd6c1,	// (0x000101b3) form2_midp_gauge_slider_pane_t3_cp01

0x6eaa,	// (0x0000999c) form2_midp_slider_pane_cp01

0xdfe5,	// (0x00010ad7) navi_smil_pane

0x6ede,	// (0x000099d0) navi_smil_pane_g1

0x6ee6,	// (0x000099d8) navi_smil_pane_t1

0x6eb3,	// (0x000099a5) form2_midp_slider_pane_g1

0x6ebc,	// (0x000099ae) form2_midp_slider_pane_g2

0x6ec4,	// (0x000099b6) form2_midp_slider_pane_g3

0x6eb3,	// (0x000099a5) form2_midp_slider_pane_g4

0xd6de,	// (0x000101d0) form2_midp_slider_pane_g5

0x0004,

0xfde7,	// (0x000128d9) form2_midp_slider_pane_g

0x6e61,	// (0x00009953) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x6e61,	// (0x00009953) vkb2_area_bottom_space_btn_pane_g4

0xabd6,	// (0x0000d6c8) lc0_navi_pane_ParamLimits

0xabd6,	// (0x0000d6c8) lc0_navi_pane

0xac40,	// (0x0000d732) lc0_stat_indi_pane_ParamLimits

0xac40,	// (0x0000d732) lc0_stat_indi_pane

0xac55,	// (0x0000d747) ls0_title_pane_ParamLimits

0xac55,	// (0x0000d747) ls0_title_pane

0xe606,	// (0x000110f8) bg_popup_sub_pane_cp14_ParamLimits

0xca39,	// (0x0000f52b) list_uniindi_pane_ParamLimits

0xca45,	// (0x0000f537) uniindi_top_pane_ParamLimits

0x5c88,	// (0x0000877a) list_single_uniindi_pane_g1_ParamLimits

0x5c9b,	// (0x0000878d) list_single_uniindi_pane_t1_ParamLimits

0xd6e9,	// (0x000101db) lc0_stat_clock_pane_ParamLimits

0xd6e9,	// (0x000101db) lc0_stat_clock_pane

0xd6f9,	// (0x000101eb) lc0_stat_indi_pane_g1_ParamLimits

0xd6f9,	// (0x000101eb) lc0_stat_indi_pane_g1

0xd706,	// (0x000101f8) lc0_stat_indi_pane_g2_ParamLimits

0xd706,	// (0x000101f8) lc0_stat_indi_pane_g2

0x0001,

0xfdf2,	// (0x000128e4) lc0_stat_indi_pane_g_ParamLimits

0xfdf2,	// (0x000128e4) lc0_stat_indi_pane_g

0xd713,	// (0x00010205) lc0_uni_indicator_pane_ParamLimits

0xd713,	// (0x00010205) lc0_uni_indicator_pane

0xd723,	// (0x00010215) ls0_title_pane_g1_ParamLimits

0xd723,	// (0x00010215) ls0_title_pane_g1

0xd737,	// (0x00010229) ls0_title_pane_t1_ParamLimits

0xd737,	// (0x00010229) ls0_title_pane_t1

0xd765,	// (0x00010257) lc0_uni_indicator_pane_g1_ParamLimits

0xd765,	// (0x00010257) lc0_uni_indicator_pane_g1

0x6f86,	// (0x00009a78) lc0_stat_clock_pane_t1

0xdfe5,	// (0x00010ad7) main_ai5_pane

0x6f94,	// (0x00009a86) ai5_sk_pane_ParamLimits

0x6f94,	// (0x00009a86) ai5_sk_pane

0xd790,	// (0x00010282) cell_ai5_widget_pane_ParamLimits

0xd790,	// (0x00010282) cell_ai5_widget_pane

0x706a,	// (0x00009b5c) aid_size_cell_widget_grid

0x7078,	// (0x00009b6a) bg_ai5_widget_pane_ParamLimits

0x7078,	// (0x00009b6a) bg_ai5_widget_pane

0x70f4,	// (0x00009be6) cell_ai5_widget_pane_g2

0x7108,	// (0x00009bfa) cell_ai5_widget_pane_g3

0x7122,	// (0x00009c14) cell_ai5_widget_pane_g4

0x7132,	// (0x00009c24) cell_ai5_widget_pane_g5

0x7142,	// (0x00009c34) cell_ai5_widget_pane_g6

0x714e,	// (0x00009c40) cell_ai5_widget_pane_g7

0x71ba,	// (0x00009cac) cell_ai5_widget_pane_t1_ParamLimits

0x71ba,	// (0x00009cac) cell_ai5_widget_pane_t1

0x71d7,	// (0x00009cc9) cell_ai5_widget_pane_t2_ParamLimits

0x71d7,	// (0x00009cc9) cell_ai5_widget_pane_t2

0x71ef,	// (0x00009ce1) cell_ai5_widget_pane_t3_ParamLimits

0x71ef,	// (0x00009ce1) cell_ai5_widget_pane_t3

0x7207,	// (0x00009cf9) cell_ai5_widget_pane_t4_ParamLimits

0x7207,	// (0x00009cf9) cell_ai5_widget_pane_t4

0xd7fc,	// (0x000102ee) cell_ai5_widget_pane_t5_ParamLimits

0xd7fc,	// (0x000102ee) cell_ai5_widget_pane_t5

0x724c,	// (0x00009d3e) cell_ai5_widget_pane_t6_ParamLimits

0x724c,	// (0x00009d3e) cell_ai5_widget_pane_t6

0x725e,	// (0x00009d50) cell_ai5_widget_pane_t7_ParamLimits

0x725e,	// (0x00009d50) cell_ai5_widget_pane_t7

0x727d,	// (0x00009d6f) cell_ai5_widget_pane_t8_ParamLimits

0x727d,	// (0x00009d6f) cell_ai5_widget_pane_t8

0x000b,

0xfe12,	// (0x00012904) cell_ai5_widget_pane_t_ParamLimits

0xfe12,	// (0x00012904) cell_ai5_widget_pane_t

0x7301,	// (0x00009df3) grid_ai5_widget_pane

0xe606,	// (0x000110f8) highlight_cell_ai5_widget_pane_ParamLimits

0xe606,	// (0x000110f8) highlight_cell_ai5_widget_pane

0xd81c,	// (0x0001030e) ai5_sk_left_pane

0xd826,	// (0x00010318) ai5_sk_middle_pane

0xd830,	// (0x00010322) ai5_sk_right_pane

0x732d,	// (0x00009e1f) bg_ai5_widget_pane_g1_ParamLimits

0x732d,	// (0x00009e1f) bg_ai5_widget_pane_g1

0x7339,	// (0x00009e2b) bg_ai5_widget_pane_g2_ParamLimits

0x7339,	// (0x00009e2b) bg_ai5_widget_pane_g2

0x7345,	// (0x00009e37) bg_ai5_widget_pane_g3_ParamLimits

0x7345,	// (0x00009e37) bg_ai5_widget_pane_g3

0x7351,	// (0x00009e43) bg_ai5_widget_pane_g4_ParamLimits

0x7351,	// (0x00009e43) bg_ai5_widget_pane_g4

0x735d,	// (0x00009e4f) bg_ai5_widget_pane_g5_ParamLimits

0x735d,	// (0x00009e4f) bg_ai5_widget_pane_g5

0x7369,	// (0x00009e5b) bg_ai5_widget_pane_g6_ParamLimits

0x7369,	// (0x00009e5b) bg_ai5_widget_pane_g6

0x7375,	// (0x00009e67) bg_ai5_widget_pane_g7_ParamLimits

0x7375,	// (0x00009e67) bg_ai5_widget_pane_g7

0x7381,	// (0x00009e73) bg_ai5_widget_pane_g8_ParamLimits

0x7381,	// (0x00009e73) bg_ai5_widget_pane_g8

0x738d,	// (0x00009e7f) bg_ai5_widget_pane_g9_ParamLimits

0x738d,	// (0x00009e7f) bg_ai5_widget_pane_g9

0x0008,

0xfe2b,	// (0x0001291d) bg_ai5_widget_pane_g_ParamLimits

0xfe2b,	// (0x0001291d) bg_ai5_widget_pane_g

0x73bf,	// (0x00009eb1) cell_shortcut_ai5_widget_pane_ParamLimits

0x73bf,	// (0x00009eb1) cell_shortcut_ai5_widget_pane

0xf2a9,	// (0x00011d9b) bg_cell_shortcut_ai5_widget_pane

0x73d0,	// (0x00009ec2) cell_grid_ai5_widget_pane_g1

0xf2a9,	// (0x00011d9b) highlight_cell_shortcut_ai5_widget_pane

0x0b34,	// (0x00003626) ai5_sk_left_pane_g1

0x73d9,	// (0x00009ecb) ai5_sk_left_pane_g2

0x73e1,	// (0x00009ed3) ai5_sk_left_pane_g3

0x73e9,	// (0x00009edb) ai5_sk_left_pane_g4

0x0003,

0xfe3e,	// (0x00012930) ai5_sk_left_pane_g

0x73f1,	// (0x00009ee3) ai5_sk_left_pane_t1

0x0b2c,	// (0x0000361e) ai5_sk_right_pane_g1

0x73ff,	// (0x00009ef1) ai5_sk_right_pane_g2

0x7407,	// (0x00009ef9) ai5_sk_right_pane_g3

0x740f,	// (0x00009f01) ai5_sk_right_pane_g4

0x0003,

0xfe47,	// (0x00012939) ai5_sk_right_pane_g

0x7417,	// (0x00009f09) ai5_sk_right_pane_t1

0x0b2c,	// (0x0000361e) ai5_sk_middle_pane_g1

0x0b34,	// (0x00003626) ai5_sk_middle_pane_g2

0x0b4c,	// (0x0000363e) ai5_sk_middle_pane_g3

0x7407,	// (0x00009ef9) ai5_sk_middle_pane_g4

0x73e1,	// (0x00009ed3) ai5_sk_middle_pane_g5

0x7425,	// (0x00009f17) ai5_sk_middle_pane_g6

0xd83a,	// (0x0001032c) ai5_sk_middle_pane_g7

0x0006,

0xfe50,	// (0x00012942) ai5_sk_middle_pane_g

0xaac2,	// (0x0000d5b4) aid_touch_area_size_lc0_ParamLimits

0xaac2,	// (0x0000d5b4) aid_touch_area_size_lc0

0x435f,	// (0x00006e51) cell_hwr_candidate_pane_t1_ParamLimits

0x05c9,	// (0x000030bb) aid_touch_navi_pane

0xad4e,	// (0x0000d840) status_dt_navi_pane_ParamLimits

0xad4e,	// (0x0000d840) status_dt_navi_pane

0xad66,	// (0x0000d858) status_dt_sta_pane_ParamLimits

0xad66,	// (0x0000d858) status_dt_sta_pane

0xd842,	// (0x00010334) dt_sta_controll_pane

0xd84f,	// (0x00010341) dt_sta_indi_pane

0xd85c,	// (0x0001034e) dt_sta_title_pane

0xe328,	// (0x00010e1a) bg_dt_sta_indi_pane_ParamLimits

0xe328,	// (0x00010e1a) bg_dt_sta_indi_pane

0xd86e,	// (0x00010360) dt_sta_battery_pane

0xd876,	// (0x00010368) dt_sta_indi_pane_g1

0x7477,	// (0x00009f69) dt_sta_indi_pane_g2

0x7480,	// (0x00009f72) dt_sta_indi_pane_g3

0x0002,

0xfe5f,	// (0x00012951) dt_sta_indi_pane_g

0x7489,	// (0x00009f7b) dt_sta_signal_pane

0xe606,	// (0x000110f8) bg_dt_sta_title_pane_ParamLimits

0xe606,	// (0x000110f8) bg_dt_sta_title_pane

0x1cc5,	// (0x000047b7) dt_sta_title_pane_g1

0xd87f,	// (0x00010371) dt_sta_title_pane_t1_ParamLimits

0xd87f,	// (0x00010371) dt_sta_title_pane_t1

0xdfe5,	// (0x00010ad7) bg_dt_sta_control_pane

0xd894,	// (0x00010386) dt_sta_controll_pane_g1

0xd89d,	// (0x0001038f) bg_dt_sta_title_pane_g1

0xd8a6,	// (0x00010398) bg_dt_sta_title_pane_g2

0xd8af,	// (0x000103a1) bg_dt_sta_title_pane_g3

0x0002,

0xfe66,	// (0x00012958) bg_dt_sta_title_pane_g

0x3b2e,	// (0x00006620) bg_dt_sta_indi_pane_g1

0x74cb,	// (0x00009fbd) dt_sta_signal_pane_g1

0x74d3,	// (0x00009fc5) dt_sta_signal_pane_g2

0x0001,

0xfe6d,	// (0x0001295f) dt_sta_signal_pane_g

0x74db,	// (0x00009fcd) dt_sta_battery_pane_g1

0x74e4,	// (0x00009fd6) dt_sta_battery_pane_t1

0x3b2e,	// (0x00006620) bg_dt_sta_control_pane_g1

0xeda2,	// (0x00011894) fep_china_uni_eep_pane

0xedaa,	// (0x0001189c) fep_china_uni_entry_pane_ParamLimits

0xedba,	// (0x000118ac) popup_fep_china_uni_window_g1_ParamLimits

0xedca,	// (0x000118bc) popup_fep_china_uni_window_g2_ParamLimits

0xedca,	// (0x000118bc) popup_fep_china_uni_window_g2

0x0001,

0xf6e4,	// (0x000121d6) popup_fep_china_uni_window_g_ParamLimits

0xf6e4,	// (0x000121d6) popup_fep_china_uni_window_g

0x74f3,	// (0x00009fe5) fep_china_uni_eep_pane_g1

0x74fb,	// (0x00009fed) fep_china_uni_eep_pane_t1

0x6ed5,	// (0x000099c7) aid_touch_area_size_smil_player

0x071f,	// (0x00003211) lc0_clock_pane

0x0906,	// (0x000033f8) status_pane_g5_ParamLimits

0x0906,	// (0x000033f8) status_pane_g5

0xa4fa,	// (0x0000cfec) popup_keymap_window

0x08c4,	// (0x000033b6) status_icon_pane

0x7108,	// (0x00009bfa) cell_ai5_widget_pane_g3_ParamLimits

0x7122,	// (0x00009c14) cell_ai5_widget_pane_g4_ParamLimits

0x7132,	// (0x00009c24) cell_ai5_widget_pane_g5_ParamLimits

0x715a,	// (0x00009c4c) cell_ai5_widget_pane_g8_ParamLimits

0x715a,	// (0x00009c4c) cell_ai5_widget_pane_g8

0x716e,	// (0x00009c60) cell_ai5_widget_pane_g9_ParamLimits

0x716e,	// (0x00009c60) cell_ai5_widget_pane_g9

0x7182,	// (0x00009c74) cell_ai5_widget_pane_g10_ParamLimits

0x7182,	// (0x00009c74) cell_ai5_widget_pane_g10

0x750a,	// (0x00009ffc) status_icon_pane_g1

0xdfe5,	// (0x00010ad7) bg_popup_sub_pane_cp13

0x7512,	// (0x0000a004) popup_keymap_window_t1

0xa1ba,	// (0x0000ccac) control_pane_g6_ParamLimits

0xa1ba,	// (0x0000ccac) control_pane_g6

0xa1c7,	// (0x0000ccb9) control_pane_g7_ParamLimits

0xa1c7,	// (0x0000ccb9) control_pane_g7

0xa1d4,	// (0x0000ccc6) control_pane_g8_ParamLimits

0xa1d4,	// (0x0000ccc6) control_pane_g8

0xd842,	// (0x00010334) dt_sta_controll_pane_ParamLimits

0xd84f,	// (0x00010341) dt_sta_indi_pane_ParamLimits

0xd85c,	// (0x0001034e) dt_sta_title_pane_ParamLimits

0xe4ff,	// (0x00010ff1) aid_size_touch_scroll_bar_cale

0x8e28,	// (0x0000b91a) popup_discreet_window_ParamLimits

0x8e28,	// (0x0000b91a) popup_discreet_window

0x8e7a,	// (0x0000b96c) popup_sk_window

0x139f,	// (0x00003e91) bg_popup_sub_pane_cp28_ParamLimits

0x139f,	// (0x00003e91) bg_popup_sub_pane_cp28

0x7520,	// (0x0000a012) popup_discreet_window_g1_ParamLimits

0x7520,	// (0x0000a012) popup_discreet_window_g1

0xd8b8,	// (0x000103aa) popup_discreet_window_t1_ParamLimits

0xd8b8,	// (0x000103aa) popup_discreet_window_t1

0x755e,	// (0x0000a050) popup_discreet_window_t2_ParamLimits

0x755e,	// (0x0000a050) popup_discreet_window_t2

0x0002,

0xfe72,	// (0x00012964) popup_discreet_window_t_ParamLimits

0xfe72,	// (0x00012964) popup_discreet_window_t

0x75b0,	// (0x0000a0a2) popup_sk_window_g1

0x75ba,	// (0x0000a0ac) popup_sk_window_g2

0x0001,

0xfe79,	// (0x0001296b) popup_sk_window_g

0xd8d6,	// (0x000103c8) popup_sk_window_t1

0xd8e4,	// (0x000103d6) popup_sk_window_t1_copy1

0x70f4,	// (0x00009be6) cell_ai5_widget_pane_g2_ParamLimits

0x728f,	// (0x00009d81) cell_ai5_widget_pane_t9_ParamLimits

0x728f,	// (0x00009d81) cell_ai5_widget_pane_t9

0xdfe5,	// (0x00010ad7) main_fep_fshwr2_pane

0xd8f2,	// (0x000103e4) aid_fshwr2_btn_pane

0xd906,	// (0x000103f8) aid_fshwr2_syb_pane

0xd91a,	// (0x0001040c) aid_fshwr2_txt_pane

0xd92a,	// (0x0001041c) fshwr2_func_candi_pane

0xd94a,	// (0x0001043c) fshwr2_hwr_syb_pane

0xd96e,	// (0x00010460) fshwr2_icf_pane

0xdfe5,	// (0x00010ad7) fshwr2_icf_bg_pane

0x7672,	// (0x0000a164) fshwr2_icf_pane_t1_ParamLimits

0x7672,	// (0x0000a164) fshwr2_icf_pane_t1

0xec7b,	// (0x0001176d) fshwr2_func_candi_pane_g1

0xd99e,	// (0x00010490) fshwr2_func_candi_row_pane_ParamLimits

0xd99e,	// (0x00010490) fshwr2_func_candi_row_pane

0xd9c1,	// (0x000104b3) cell_fshwr2_syb_pane_ParamLimits

0xd9c1,	// (0x000104b3) cell_fshwr2_syb_pane

0x6e71,	// (0x00009963) fshwr2_hwr_syb_pane_g1_ParamLimits

0x6e71,	// (0x00009963) fshwr2_hwr_syb_pane_g1

0xdfe5,	// (0x00010ad7) bg_popup_call_pane_cp01

0xd9e7,	// (0x000104d9) fshwr2_func_candi_cell_pane_ParamLimits

0xd9e7,	// (0x000104d9) fshwr2_func_candi_cell_pane

0x1188,	// (0x00003c7a) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x1188,	// (0x00003c7a) fshwr2_func_candi_cell_bg_pane

0xda32,	// (0x00010524) fshwr2_func_candi_cell_pane_g1_ParamLimits

0xda32,	// (0x00010524) fshwr2_func_candi_cell_pane_g1

0xda69,	// (0x0001055b) fshwr2_func_candi_cell_pane_t1_ParamLimits

0xda69,	// (0x0001055b) fshwr2_func_candi_cell_pane_t1

0xdfe5,	// (0x00010ad7) bg_button_pane_cp08

0xf4e5,	// (0x00011fd7) cell_fshwr2_syb_bg_pane

0xda84,	// (0x00010576) cell_fshwr2_syb_bg_pane_g1

0xda97,	// (0x00010589) cell_fshwr2_syb_bg_pane_t1

0xe606,	// (0x000110f8) main_tmo_pane

0xb4f0,	// (0x0000dfe2) uni_indicator_pane_g1_ParamLimits

0xb506,	// (0x0000dff8) uni_indicator_pane_g2_ParamLimits

0xb51c,	// (0x0000e00e) uni_indicator_pane_g3_ParamLimits

0x2032,	// (0x00004b24) uni_indicator_pane_g4_ParamLimits

0x2032,	// (0x00004b24) uni_indicator_pane_g4

0x2046,	// (0x00004b38) uni_indicator_pane_g5_ParamLimits

0x2046,	// (0x00004b38) uni_indicator_pane_g5

0x2046,	// (0x00004b38) uni_indicator_pane_g6_ParamLimits

0x2046,	// (0x00004b38) uni_indicator_pane_g6

0xf8dc,	// (0x000123ce) uni_indicator_pane_g_ParamLimits

0xc6f6,	// (0x0000f1e8) popup_tmo_note_window_ParamLimits

0xc6f6,	// (0x0000f1e8) popup_tmo_note_window

0xe606,	// (0x000110f8) fshwr2_bg_pane

0xda5a,	// (0x0001054c) fshwr2_func_candi_cell_pane_g2_ParamLimits

0xda5a,	// (0x0001054c) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfe7e,	// (0x00012970) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfe7e,	// (0x00012970) fshwr2_func_candi_cell_pane_g

0x3b2e,	// (0x00006620) bg_popup_window_pane_cp01

0x777d,	// (0x0000a26f) bg_popup_window_pane_g1_cp01

0x7786,	// (0x0000a278) bg_popup_window_pane_cp22_ParamLimits

0x7786,	// (0x0000a278) bg_popup_window_pane_cp22

0xdaad,	// (0x0001059f) listscroll_tmo_link_pane_ParamLimits

0xdaad,	// (0x0001059f) listscroll_tmo_link_pane

0x77d4,	// (0x0000a2c6) popup_tmo_note_window_g1_ParamLimits

0x77d4,	// (0x0000a2c6) popup_tmo_note_window_g1

0xdaed,	// (0x000105df) tmo_note_info_pane_ParamLimits

0xdaed,	// (0x000105df) tmo_note_info_pane

0xdb07,	// (0x000105f9) list_tmo_note_info_pane_g1_ParamLimits

0xdb07,	// (0x000105f9) list_tmo_note_info_pane_g1

0x7812,	// (0x0000a304) list_tmo_note_info_pane_g2_ParamLimits

0x7812,	// (0x0000a304) list_tmo_note_info_pane_g2

0x0001,

0xfe83,	// (0x00012975) list_tmo_note_info_pane_g_ParamLimits

0xfe83,	// (0x00012975) list_tmo_note_info_pane_g

0x782e,	// (0x0000a320) list_tmo_note_info_text_pane_ParamLimits

0x782e,	// (0x0000a320) list_tmo_note_info_text_pane

0x78af,	// (0x0000a3a1) list_tmo_link_pane

0x78bc,	// (0x0000a3ae) scroll_pane_cp20

0x78c9,	// (0x0000a3bb) list_single_tmo_link_pane_ParamLimits

0x78c9,	// (0x0000a3bb) list_single_tmo_link_pane

0x78d9,	// (0x0000a3cb) list_single_tmo_link_pane_t1

0x78e7,	// (0x0000a3d9) list_tmo_note_info_text_pane_t1_ParamLimits

0x78e7,	// (0x0000a3d9) list_tmo_note_info_text_pane_t1

0x9aeb,	// (0x0000c5dd) aid_size_touch_scroll_bar_cp01_ParamLimits

0x9aeb,	// (0x0000c5dd) aid_size_touch_scroll_bar_cp01

0x99eb,	// (0x0000c4dd) aid_size_touch_slider_marker

0x8e6a,	// (0x0000b95c) popup_settings_window_ParamLimits

0x8e6a,	// (0x0000b95c) popup_settings_window

0xf521,	// (0x00012013) popup_candi_list_indi_window

0x05c9,	// (0x000030bb) aid_touch_navi_pane_ParamLimits

0x5964,	// (0x00008456) rs_clock_indi_pane

0x596d,	// (0x0000845f) sctrl_sk_bottom_pane_ParamLimits

0x597e,	// (0x00008470) sctrl_sk_top_pane_ParamLimits

0xcf11,	// (0x0000fa03) popup_fep_tooltip_window

0x706a,	// (0x00009b5c) aid_size_cell_widget_grid_ParamLimits

0x70df,	// (0x00009bd1) cell_ai5_widget_pane_g1_ParamLimits

0x70df,	// (0x00009bd1) cell_ai5_widget_pane_g1

0x7142,	// (0x00009c34) cell_ai5_widget_pane_g6_ParamLimits

0x714e,	// (0x00009c40) cell_ai5_widget_pane_g7_ParamLimits

0x000c,

0xfdf7,	// (0x000128e9) cell_ai5_widget_pane_g_ParamLimits

0xfdf7,	// (0x000128e9) cell_ai5_widget_pane_g

0x72be,	// (0x00009db0) cell_ai5_widget_pane_t10_ParamLimits

0x72be,	// (0x00009db0) cell_ai5_widget_pane_t10

0x7301,	// (0x00009df3) grid_ai5_widget_pane_ParamLimits

0x7399,	// (0x00009e8b) cell_contacts_ai5_widget_pane_ParamLimits

0x7399,	// (0x00009e8b) cell_contacts_ai5_widget_pane

0x7573,	// (0x0000a065) popup_discreet_window_t3_ParamLimits

0x7573,	// (0x0000a065) popup_discreet_window_t3

0xd98a,	// (0x0001047c) popup_fshwr2_char_preview_window_ParamLimits

0xd98a,	// (0x0001047c) popup_fshwr2_char_preview_window

0xdb1e,	// (0x00010610) tmo_note_info_pane_t1

0xdb33,	// (0x00010625) tmo_note_info_pane_t2

0xdb4a,	// (0x0001063c) tmo_note_info_pane_t3

0x788b,	// (0x0000a37d) tmo_note_info_pane_t4

0x789d,	// (0x0000a38f) tmo_note_info_pane_t5

0x0004,

0xfe88,	// (0x0001297a) tmo_note_info_pane_t

0x78af,	// (0x0000a3a1) list_tmo_link_pane_ParamLimits

0x78bc,	// (0x0000a3ae) scroll_pane_cp20_ParamLimits

0xdfe5,	// (0x00010ad7) bg_popup_fep_char_preview_window_cp01

0xdb5f,	// (0x00010651) popup_fshwr2_char_preview_window_t1

0x790e,	// (0x0000a400) popup_candi_list_indi_window_g1

0x7917,	// (0x0000a409) bg_cell_contacts_ai5_widget_pane

0x7923,	// (0x0000a415) cell_contacts_ai5_widget_pane_g1

0x4654,	// (0x00007146) cell_contacts_ai5_widget_pane_g2

0x7938,	// (0x0000a42a) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfe93,	// (0x00012985) cell_contacts_ai5_widget_pane_g

0x7944,	// (0x0000a436) cell_contacts_ai5_widget_pane_t1

0xe606,	// (0x000110f8) highlight_cell_shortcut_ai5_widget_pane_cp01

0x79bb,	// (0x0000a4ad) settings_container_pane

0xf2a9,	// (0x00011d9b) listscroll_set_pane_copy1

0x2e7d,	// (0x0000596f) scroll_pane_cp121_copy1

0x1144,	// (0x00003c36) set_content_pane_copy1

0xdb6d,	// (0x0001065f) aid_height_set_list_copy1_ParamLimits

0xdb6d,	// (0x0001065f) aid_height_set_list_copy1

0x2318,	// (0x00004e0a) aid_size_parent_copy1_ParamLimits

0x2318,	// (0x00004e0a) aid_size_parent_copy1

0xdb79,	// (0x0001066b) button_value_adjust_pane_cp6_copy1_ParamLimits

0xdb79,	// (0x0001066b) button_value_adjust_pane_cp6_copy1

0xf4e5,	// (0x00011fd7) list_highlight_pane_cp2_copy1_ParamLimits

0xf4e5,	// (0x00011fd7) list_highlight_pane_cp2_copy1

0xdb8d,	// (0x0001067f) list_set_pane_copy1_ParamLimits

0xdb8d,	// (0x0001067f) list_set_pane_copy1

0x7956,	// (0x0000a448) main_pane_set_t1_copy1_ParamLimits

0x7956,	// (0x0000a448) main_pane_set_t1_copy1

0x7990,	// (0x0000a482) main_pane_set_t2_copy1_ParamLimits

0x7990,	// (0x0000a482) main_pane_set_t2_copy1

0xdc3a,	// (0x0001072c) main_pane_set_t3_copy1

0xdc48,	// (0x0001073a) main_pane_set_t4_copy1

0x79af,	// (0x0000a4a1) set_content_pane_g1_copy1_ParamLimits

0x79af,	// (0x0000a4a1) set_content_pane_g1_copy1

0xdc56,	// (0x00010748) setting_code_pane_copy1

0x7ab8,	// (0x0000a5aa) setting_slider_graphic_pane_copy1

0x7ab8,	// (0x0000a5aa) setting_slider_pane_copy1

0x7ac0,	// (0x0000a5b2) setting_text_pane_copy1

0x7ac0,	// (0x0000a5b2) setting_volume_pane_copy1

0xdc56,	// (0x00010748) settings_code_pane_cp2_copy1

0xdc5e,	// (0x00010750) settings_code_pane_cp_copy1_ParamLimits

0xdc5e,	// (0x00010750) settings_code_pane_cp_copy1

0xdc72,	// (0x00010764) volume_set_pane_copy1

0xdc7a,	// (0x0001076c) volume_set_pane_g10_copy1

0xdc82,	// (0x00010774) volume_set_pane_g1_copy1

0xdc8a,	// (0x0001077c) volume_set_pane_g2_copy1

0xdc92,	// (0x00010784) volume_set_pane_g3_copy1

0xdc9a,	// (0x0001078c) volume_set_pane_g4_copy1

0xdca2,	// (0x00010794) volume_set_pane_g5_copy1

0xdcaa,	// (0x0001079c) volume_set_pane_g6_copy1

0xdcb2,	// (0x000107a4) volume_set_pane_g7_copy1

0xdcba,	// (0x000107ac) volume_set_pane_g8_copy1

0xdcc2,	// (0x000107b4) volume_set_pane_g9_copy1

0xe1e4,	// (0x00010cd6) bg_set_opt_pane_cp_copy1_ParamLimits

0xe1e4,	// (0x00010cd6) bg_set_opt_pane_cp_copy1

0xdcca,	// (0x000107bc) setting_slider_pane_t1_copy1_ParamLimits

0xdcca,	// (0x000107bc) setting_slider_pane_t1_copy1

0xdce9,	// (0x000107db) setting_slider_pane_t2_copy1_ParamLimits

0xdce9,	// (0x000107db) setting_slider_pane_t2_copy1

0xdd03,	// (0x000107f5) setting_slider_pane_t3_copy1_ParamLimits

0xdd03,	// (0x000107f5) setting_slider_pane_t3_copy1

0xdd1b,	// (0x0001080d) slider_set_pane_copy1_ParamLimits

0xdd1b,	// (0x0001080d) slider_set_pane_copy1

0xe6cc,	// (0x000111be) set_opt_bg_pane_g1_copy2

0xe6d4,	// (0x000111c6) set_opt_bg_pane_g2_copy2

0x7b9b,	// (0x0000a68d) set_opt_bg_pane_g3_copy2

0xe6e4,	// (0x000111d6) set_opt_bg_pane_g4_copy2

0xe6ec,	// (0x000111de) set_opt_bg_pane_g5_copy2

0xe6f4,	// (0x000111e6) set_opt_bg_pane_g6_copy2

0xdd31,	// (0x00010823) set_opt_bg_pane_g7_copy2

0x7bad,	// (0x0000a69f) set_opt_bg_pane_g8_copy2

0x7bb7,	// (0x0000a6a9) set_opt_bg_pane_g9_copy2

0xdd39,	// (0x0001082b) aid_size_touch_slider_mark_copy1_ParamLimits

0xdd39,	// (0x0001082b) aid_size_touch_slider_mark_copy1

0xdd4d,	// (0x0001083f) slider_set_pane_g1_copy1

0x7bde,	// (0x0000a6d0) slider_set_pane_g2_copy1

0xb64d,	// (0x0000e13f) slider_set_pane_g3_copy1_ParamLimits

0xb64d,	// (0x0000e13f) slider_set_pane_g3_copy1

0xb661,	// (0x0000e153) slider_set_pane_g4_copy1_ParamLimits

0xb661,	// (0x0000e153) slider_set_pane_g4_copy1

0xb679,	// (0x0000e16b) slider_set_pane_g5_copy1_ParamLimits

0xb679,	// (0x0000e16b) slider_set_pane_g5_copy1

0xb64d,	// (0x0000e13f) slider_set_pane_g6_copy1_ParamLimits

0xb64d,	// (0x0000e13f) slider_set_pane_g6_copy1

0xdd56,	// (0x00010848) slider_set_pane_g7_copy1_ParamLimits

0xdd56,	// (0x00010848) slider_set_pane_g7_copy1

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp2_copy1

0xdd6c,	// (0x0001085e) setting_slider_graphic_pane_g1_copy1

0xdd75,	// (0x00010867) setting_slider_graphic_pane_t1_copy1

0xdd85,	// (0x00010877) setting_slider_graphic_pane_t2_copy1

0xdd95,	// (0x00010887) slider_set_pane_cp_copy1

0x7c35,	// (0x0000a727) input_focus_pane_cp1_copy1

0x7c3e,	// (0x0000a730) list_set_text_pane_copy1

0x7c46,	// (0x0000a738) setting_text_pane_g1_copy1

0x7c4f,	// (0x0000a741) set_text_pane_t1_copy1

0x7c35,	// (0x0000a727) input_focus_pane_cp2_copy1

0x7c46,	// (0x0000a738) setting_code_pane_g1_copy1

0x7c6a,	// (0x0000a75c) setting_code_pane_t1_copy1

0x7c78,	// (0x0000a76a) list_set_graphic_pane_copy1

0xe168,	// (0x00010c5a) bg_set_opt_pane_cp4_copy1

0xf03b,	// (0x00011b2d) list_set_graphic_pane_g1_copy1_ParamLimits

0xf03b,	// (0x00011b2d) list_set_graphic_pane_g1_copy1

0x7c8c,	// (0x0000a77e) list_set_graphic_pane_g2_copy1

0xf053,	// (0x00011b45) list_set_graphic_pane_t1_copy1_ParamLimits

0xf053,	// (0x00011b45) list_set_graphic_pane_t1_copy1

0x3b2e,	// (0x00006620) rs_clock_indi_pane_g1

0x7c94,	// (0x0000a786) rs_clock_indi_pane_t1

0x7ca2,	// (0x0000a794) rs_indi_pane

0x7caa,	// (0x0000a79c) rs_indi_pane_g1

0x7cb3,	// (0x0000a7a5) rs_indi_pane_g2

0x790e,	// (0x0000a400) rs_indi_pane_g3

0x0002,

0xfe9a,	// (0x0001298c) rs_indi_pane_g

0xf2a9,	// (0x00011d9b) bg_popup_preview_window_pane_cp03

0x7cbc,	// (0x0000a7ae) popup_fep_tooltip_window_t1

0xc1f5,	// (0x0000ece7) popup_note2_window_g2_ParamLimits

0xc1f5,	// (0x0000ece7) popup_note2_window_g2

0x0001,

0xfc2e,	// (0x00012720) popup_note2_window_g_ParamLimits

0xfc2e,	// (0x00012720) popup_note2_window_g

0x5330,	// (0x00007e22) bg_popup_sub_pane_cp11_ParamLimits

0x533d,	// (0x00007e2f) cell_ai3_links_pane_g1_ParamLimits

0x5354,	// (0x00007e46) cell_ai3_links_pane_t1

0x7c4f,	// (0x0000a741) set_text_pane_t1_copy1_ParamLimits

0x9f80,	// (0x0000ca72) cell_graphic_popup_pane_cp2_ParamLimits

0x9f80,	// (0x0000ca72) cell_graphic_popup_pane_cp2

0xdda5,	// (0x00010897) cell_graphic_popup_pane_g1_cp2

0xe482,	// (0x00010f74) cell_graphic_popup_pane_g2_cp2

0x7cd2,	// (0x0000a7c4) cell_graphic_popup_pane_g3_cp2

0xddad,	// (0x0001089f) cell_graphic_popup_pane_t2_cp2

0xe493,	// (0x00010f85) grid_highlight_pane_cp3_cp2

0xead9,	// (0x000115cb) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0xe606,	// (0x000110f8) main_tmo_pane_ParamLimits

0xc6ea,	// (0x0000f1dc) popup_tmo_big_image_note_window

0x70ce,	// (0x00009bc0) cell_ai5_widget_list_pane

0x70d6,	// (0x00009bc8) cell_ai5_widget_lrg_icon_pane

0xdb1e,	// (0x00010610) tmo_note_info_pane_t1_ParamLimits

0xdb33,	// (0x00010625) tmo_note_info_pane_t2_ParamLimits

0xdb4a,	// (0x0001063c) tmo_note_info_pane_t3_ParamLimits

0x788b,	// (0x0000a37d) tmo_note_info_pane_t4_ParamLimits

0x789d,	// (0x0000a38f) tmo_note_info_pane_t5_ParamLimits

0xfe88,	// (0x0001297a) tmo_note_info_pane_t_ParamLimits

0x79bb,	// (0x0000a4ad) settings_container_pane_ParamLimits

0xdd9d,	// (0x0001088f) indicator_popup_pane_cp5

0xdd9d,	// (0x0001088f) indicator_popup_pane_cp6

0x7c78,	// (0x0000a76a) list_set_graphic_pane_copy1_ParamLimits

0xdfe5,	// (0x00010ad7) bg_popup_window_pane_cp23

0x7ce8,	// (0x0000a7da) popup_tmo_big_image_note_window_g1

0x7cf1,	// (0x0000a7e3) popup_tmo_big_image_note_window_t1

0x7d01,	// (0x0000a7f3) popup_tmo_big_image_note_window_t2

0x7d11,	// (0x0000a803) popup_tmo_big_image_note_window_t3

0x0002,

0xfea1,	// (0x00012993) popup_tmo_big_image_note_window_t

0x3b2e,	// (0x00006620) cell_ai5_widget_lrg_icon_pane_g1

0x7d21,	// (0x0000a813) cell_ai5_widget_lrg_icon_pane_t1

0x7d2f,	// (0x0000a821) cell_ai5_widget_list_row_pane_ParamLimits

0x7d2f,	// (0x0000a821) cell_ai5_widget_list_row_pane

0x7d46,	// (0x0000a838) cell_ai5_widget_list_row_pane_g1_ParamLimits

0x7d46,	// (0x0000a838) cell_ai5_widget_list_row_pane_g1

0xddbb,	// (0x000108ad) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xddbb,	// (0x000108ad) cell_ai5_widget_list_row_pane_t1

0x7d7e,	// (0x0000a870) cell_ai5_widget_list_row_pane_t2_ParamLimits

0x7d7e,	// (0x0000a870) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfea8,	// (0x0001299a) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfea8,	// (0x0001299a) cell_ai5_widget_list_row_pane_t

0xdfe5,	// (0x00010ad7) main_fep_vtchi_ss_pane

0x7dce,	// (0x0000a8c0) popup_fep_char_pre_window

0x7dd6,	// (0x0000a8c8) popup_fep_ituss_window

0xde16,	// (0x00010908) popup_fep_vkbss_window

0xf4e5,	// (0x00011fd7) grid_vkbss_keypad_pane_ParamLimits

0xf4e5,	// (0x00011fd7) grid_vkbss_keypad_pane

0x7e42,	// (0x0000a934) ituss_keypad_pane

0x7e5d,	// (0x0000a94f) aid_vkbss_key_offset_ParamLimits

0x7e5d,	// (0x0000a94f) aid_vkbss_key_offset

0xde23,	// (0x00010915) cell_vkbss_key_pane_ParamLimits

0xde23,	// (0x00010915) cell_vkbss_key_pane

0x7e9d,	// (0x0000a98f) bg_cell_vkbss_key_g1_ParamLimits

0x7e9d,	// (0x0000a98f) bg_cell_vkbss_key_g1

0xde63,	// (0x00010955) cell_vkbss_key_3p_pane_ParamLimits

0xde63,	// (0x00010955) cell_vkbss_key_3p_pane

0xde99,	// (0x0001098b) cell_vkbss_key_g1_ParamLimits

0xde99,	// (0x0001098b) cell_vkbss_key_g1

0xdecf,	// (0x000109c1) cell_vkbss_key_t1_ParamLimits

0xdecf,	// (0x000109c1) cell_vkbss_key_t1

0x7f71,	// (0x0000aa63) cell_ituss_key_pane_ParamLimits

0x7f71,	// (0x0000aa63) cell_ituss_key_pane

0x7f82,	// (0x0000aa74) bg_cell_ituss_key_g1_ParamLimits

0x7f82,	// (0x0000aa74) bg_cell_ituss_key_g1

0x7f8e,	// (0x0000aa80) cell_ituss_key_pane_g1_ParamLimits

0x7f8e,	// (0x0000aa80) cell_ituss_key_pane_g1

0x7fa2,	// (0x0000aa94) cell_ituss_key_pane_g2_ParamLimits

0x7fa2,	// (0x0000aa94) cell_ituss_key_pane_g2

0x0005,

0xfeaf,	// (0x000129a1) cell_ituss_key_pane_g_ParamLimits

0xfeaf,	// (0x000129a1) cell_ituss_key_pane_g

0x8038,	// (0x0000ab2a) cell_ituss_key_t1_ParamLimits

0x8038,	// (0x0000ab2a) cell_ituss_key_t1

0x8072,	// (0x0000ab64) cell_ituss_key_t2_ParamLimits

0x8072,	// (0x0000ab64) cell_ituss_key_t2

0x80a3,	// (0x0000ab95) cell_ituss_key_t3_ParamLimits

0x80a3,	// (0x0000ab95) cell_ituss_key_t3

0x8072,	// (0x0000ab64) cell_ituss_key_t4_ParamLimits

0x8072,	// (0x0000ab64) cell_ituss_key_t4

0x0004,

0xfebc,	// (0x000129ae) cell_ituss_key_t_ParamLimits

0xfebc,	// (0x000129ae) cell_ituss_key_t

0xdf2b,	// (0x00010a1d) cell_vkbss_key_3p_pane_g1

0xdf33,	// (0x00010a25) cell_vkbss_key_3p_pane_g2

0xdf3b,	// (0x00010a2d) cell_vkbss_key_3p_pane_g3

0x0002,

0xfec7,	// (0x000129b9) cell_vkbss_key_3p_pane_g

0xf2a9,	// (0x00011d9b) bg_popup_fep_char_preview_window_cp02

0x80fe,	// (0x0000abf0) popup_fep_char_pre_window_t1

0xd7f2,	// (0x000102e4) main_ai5_sk_pane

0x7917,	// (0x0000a409) bg_cell_contacts_ai5_widget_pane_ParamLimits

0x7923,	// (0x0000a415) cell_contacts_ai5_widget_pane_g1_ParamLimits

0x4654,	// (0x00007146) cell_contacts_ai5_widget_pane_g2_ParamLimits

0x7938,	// (0x0000a42a) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfe93,	// (0x00012985) cell_contacts_ai5_widget_pane_g_ParamLimits

0x7944,	// (0x0000a436) cell_contacts_ai5_widget_pane_t1_ParamLimits

0xe606,	// (0x000110f8) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xdf43,	// (0x00010a35) main_ai5_sk_pane_g1

0xb141,	// (0x0000dc33) popup_query_code_window_g1

0xde07,	// (0x000108f9) popup_fep_vkb_icf_pane

0x7e19,	// (0x0000a90b) popup_fep_vtchi_icf_pane

0xf4e5,	// (0x00011fd7) bg_icf_pane

0xf4e5,	// (0x00011fd7) list_vkb_icf_pane

0x8115,	// (0x0000ac07) bg_icf_pane_cp01

0x8128,	// (0x0000ac1a) vtchi_icf_list_pane

0xdf98,	// (0x00010a8a) list_vkb_icf_pane_t1_ParamLimits

0xdf98,	// (0x00010a8a) list_vkb_icf_pane_t1

0x81b2,	// (0x0000aca4) vtchi_icf_list_pane_t1_ParamLimits

0x81b2,	// (0x0000aca4) vtchi_icf_list_pane_t1

0x7dd6,	// (0x0000a8c8) popup_fep_ituss_window_ParamLimits

0x7e19,	// (0x0000a90b) popup_fep_vtchi_icf_pane_ParamLimits

0x7e42,	// (0x0000a934) ituss_keypad_pane_ParamLimits

0x7e51,	// (0x0000a943) ituss_sks_pane

0xf4e5,	// (0x00011fd7) bg_icf_pane_ParamLimits

0xddec,	// (0x000108de) icf_edit_indi_pane_ParamLimits

0xddec,	// (0x000108de) icf_edit_indi_pane

0xf4e5,	// (0x00011fd7) list_vkb_icf_pane_ParamLimits

0x8115,	// (0x0000ac07) bg_icf_pane_cp01_ParamLimits

0x7dc1,	// (0x0000a8b3) icf_edit_indi_pane_cp01_ParamLimits

0x7dc1,	// (0x0000a8b3) icf_edit_indi_pane_cp01

0x8130,	// (0x0000ac22) vtchi_query_pane

0x6e71,	// (0x00009963) icf_edit_indi_pane_g1_ParamLimits

0x6e71,	// (0x00009963) icf_edit_indi_pane_g1

0xdfb0,	// (0x00010aa2) icf_edit_indi_pane_g2_ParamLimits

0xdfb0,	// (0x00010aa2) icf_edit_indi_pane_g2

0x0001,

0xfef2,	// (0x000129e4) icf_edit_indi_pane_g_ParamLimits

0xfef2,	// (0x000129e4) icf_edit_indi_pane_g

0xdfc4,	// (0x00010ab6) icf_edit_indi_pane_t1

0x81d3,	// (0x0000acc5) bg_input_focus_pane_cp042

0xe4f6,	// (0x00010fe8) vtchi_button_pane

0x81dc,	// (0x0000acce) vtchi_query_pane_t1

0x81ea,	// (0x0000acdc) vtchi_query_pane_t2

0x81f8,	// (0x0000acea) vtchi_query_pane_t3

0x0002,

0xfee1,	// (0x000129d3) vtchi_query_pane_t

0xdfe5,	// (0x00010ad7) bg_button_pane_cp13

0x8206,	// (0x0000acf8) vtchi_button_pane_g1

0x820e,	// (0x0000ad00) ituss_sks_pane_g1

0x8219,	// (0x0000ad0b) ituss_sks_pane_g2

0x0001,

0xfee8,	// (0x000129da) ituss_sks_pane_g

0x8221,	// (0x0000ad13) ituss_sks_pane_t1

0x822f,	// (0x0000ad21) ituss_sks_pane_t2

0x0001,

0xfeed,	// (0x000129df) ituss_sks_pane_t

0x350d,	// (0x00005fff) indicator_nsta_pane_cp_g1

0x3516,	// (0x00006008) indicator_nsta_pane_cp_g2

0x351e,	// (0x00006010) indicator_nsta_pane_cp_g3

0x3526,	// (0x00006018) indicator_nsta_pane_cp_g4

0x3516,	// (0x00006008) indicator_nsta_pane_cp_g5

0x351e,	// (0x00006010) indicator_nsta_pane_cp_g6

0x0005,

0xfa78,	// (0x0001256a) indicator_nsta_pane_cp_g

0xd54d,	// (0x0001003f) cell_graphic2_pane_t2_ParamLimits

0xd54d,	// (0x0001003f) cell_graphic2_pane_t2

0x0001,

0xfd7e,	// (0x00012870) cell_graphic2_pane_t_ParamLimits

0xfd7e,	// (0x00012870) cell_graphic2_pane_t

0xd584,	// (0x00010076) cell_graphic2_control_pane_t1

0x9db1,	// (0x0000c8a3) signal_pane_g3_ParamLimits

0x9db1,	// (0x0000c8a3) signal_pane_g3

0x9dc5,	// (0x0000c8b7) signal_pane_g4_ParamLimits

0x9dc5,	// (0x0000c8b7) signal_pane_g4

0x7d90,	// (0x0000a882) cell_ai5_widget_list_row_pane_t3_ParamLimits

0x7d90,	// (0x0000a882) cell_ai5_widget_list_row_pane_t3

0x8026,	// (0x0000ab18) cell_ituss_key_pane_t1_ParamLimits

0x8026,	// (0x0000ab18) cell_ituss_key_pane_t1

0x0dd2,	// (0x000038c4) form_field_data_wide_pane_vc_t2_ParamLimits

0x0dd2,	// (0x000038c4) form_field_data_wide_pane_vc_t2

0x0de6,	// (0x000038d8) form_field_data_wide_pane_vc_t3_ParamLimits

0x0de6,	// (0x000038d8) form_field_data_wide_pane_vc_t3

0x0002,

0xf7c4,	// (0x000122b6) form_field_data_wide_pane_vc_t_ParamLimits

0xf7c4,	// (0x000122b6) form_field_data_wide_pane_vc_t

0x31b7,	// (0x00005ca9) form_field_slider_wide_pane_vc_t3_ParamLimits

0x31b7,	// (0x00005ca9) form_field_slider_wide_pane_vc_t3

0x3295,	// (0x00005d87) form_field_popup_wide_pane_vc_t2_ParamLimits

0x3295,	// (0x00005d87) form_field_popup_wide_pane_vc_t2

0x32ac,	// (0x00005d9e) form_field_popup_wide_pane_vc_t3_ParamLimits

0x32ac,	// (0x00005d9e) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa67,	// (0x00012559) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa67,	// (0x00012559) form_field_popup_wide_pane_vc_t

0xd8f2,	// (0x000103e4) aid_fshwr2_btn_pane_ParamLimits

0xd906,	// (0x000103f8) aid_fshwr2_syb_pane_ParamLimits

0xd91a,	// (0x0001040c) aid_fshwr2_txt_pane_ParamLimits

0xe606,	// (0x000110f8) fshwr2_bg_pane_ParamLimits

0xd92a,	// (0x0001041c) fshwr2_func_candi_pane_ParamLimits

0xd94a,	// (0x0001043c) fshwr2_hwr_syb_pane_ParamLimits

0xd96e,	// (0x00010460) fshwr2_icf_pane_ParamLimits

0x3128,	// (0x00005c1a) list_double_graphic_pane_vc_g4_ParamLimits

0x3128,	// (0x00005c1a) list_double_graphic_pane_vc_g4

0x7fc2,	// (0x0000aab4) cell_ituss_key_pane_g3_ParamLimits

0x7fc2,	// (0x0000aab4) cell_ituss_key_pane_g3

0x80d4,	// (0x0000abc6) cell_ituss_key_t5_ParamLimits

0x80d4,	// (0x0000abc6) cell_ituss_key_t5

0xde16,	// (0x00010908) popup_fep_vkbss_window_ParamLimits

0x7061,	// (0x00009b53) aid_cell_ai5_quarter

0xdfc4,	// (0x00010ab6) icf_edit_indi_pane_t1_ParamLimits

0x9293,	// (0x0000bd85) aid_tch_indicator_popup_pane_cp2_ParamLimits

0x9293,	// (0x0000bd85) aid_tch_indicator_popup_pane_cp2

0x92a6,	// (0x0000bd98) aid_tch_query_popup_data_pane_cp2_ParamLimits

0x92a6,	// (0x0000bd98) aid_tch_query_popup_data_pane_cp2

0x1188,	// (0x00003c7a) aid_tch_query_popup_pane_ParamLimits

0x1188,	// (0x00003c7a) aid_tch_query_popup_pane

0x1188,	// (0x00003c7a) aid_tch_query_popup_data_pane_cp1_ParamLimits

0x1188,	// (0x00003c7a) aid_tch_query_popup_data_pane_cp1

0xf4e5,	// (0x00011fd7) cell_fshwr2_syb_bg_pane_ParamLimits

0xda84,	// (0x00010576) cell_fshwr2_syb_bg_pane_g1_ParamLimits

0xda97,	// (0x00010589) cell_fshwr2_syb_bg_pane_t1_ParamLimits

0xde07,	// (0x000108f9) popup_fep_vkb_icf_pane_ParamLimits

0xd65a,	// (0x0001014c) bg_popup_fep_char_preview_window_g10

0x7196,	// (0x00009c88) cell_ai5_widget_pane_g11_ParamLimits

0x7196,	// (0x00009c88) cell_ai5_widget_pane_g11

0x71a2,	// (0x00009c94) cell_ai5_widget_pane_g12_ParamLimits

0x71a2,	// (0x00009c94) cell_ai5_widget_pane_g12

0x71ae,	// (0x00009ca0) cell_ai5_widget_pane_g13_ParamLimits

0x71ae,	// (0x00009ca0) cell_ai5_widget_pane_g13

0x72dd,	// (0x00009dcf) cell_ai5_widget_pane_t11_ParamLimits

0x72dd,	// (0x00009dcf) cell_ai5_widget_pane_t11

0x72ef,	// (0x00009de1) cell_ai5_widget_pane_t12_ParamLimits

0x72ef,	// (0x00009de1) cell_ai5_widget_pane_t12

0x7fce,	// (0x0000aac0) cell_ituss_key_pane_g4_ParamLimits

0x7fce,	// (0x0000aac0) cell_ituss_key_pane_g4

0x7fea,	// (0x0000aadc) cell_ituss_key_pane_g5_ParamLimits

0x7fea,	// (0x0000aadc) cell_ituss_key_pane_g5

0x8006,	// (0x0000aaf8) cell_ituss_key_pane_g6_ParamLimits

0x8006,	// (0x0000aaf8) cell_ituss_key_pane_g6

0x0b24,	// (0x00003616) bg_icf_pane_g1

0xdf4c,	// (0x00010a3e) bg_icf_pane_g2

0xdf56,	// (0x00010a48) bg_icf_pane_g3

0xdf5e,	// (0x00010a50) bg_icf_pane_g4

0xdf68,	// (0x00010a5a) bg_icf_pane_g5

0xdf72,	// (0x00010a64) bg_icf_pane_g6

0xdf7c,	// (0x00010a6e) bg_icf_pane_g7

0xdf84,	// (0x00010a76) bg_icf_pane_g8

0xdf8e,	// (0x00010a80) bg_icf_pane_g9

0x0008,

0xfece,	// (0x000129c0) bg_icf_pane_g

0x7e2f,	// (0x0000a921) popup_hyb_candi_window_ParamLimits

0x7e2f,	// (0x0000a921) popup_hyb_candi_window

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp01_ParamLimits

0x0cbc,	// (0x000037ae) bg_popup_sub_pane_cp01

0x826a,	// (0x0000ad5c) entry_hyb_candi_pane_ParamLimits

0x826a,	// (0x0000ad5c) entry_hyb_candi_pane

0x8279,	// (0x0000ad6b) grid_hyb_candi_pane_ParamLimits

0x8279,	// (0x0000ad6b) grid_hyb_candi_pane

0x828e,	// (0x0000ad80) grid_hyb_phrase_pane_ParamLimits

0x828e,	// (0x0000ad80) grid_hyb_phrase_pane

0x829d,	// (0x0000ad8f) cell_hyb_candi_pane_ParamLimits

0x829d,	// (0x0000ad8f) cell_hyb_candi_pane

0x82c0,	// (0x0000adb2) cell_hyb_candi_scroll_pane

0xec7b,	// (0x0001176d) cell_hyb_candi_pane_g1

0x82c9,	// (0x0000adbb) cell_hyb_candi_pane_t1

0x82d7,	// (0x0000adc9) cell_hyb_phrase_pane

0xec7b,	// (0x0001176d) cell_hyb_phrase_pane_g1

0x82e0,	// (0x0000add2) cell_hyb_phrase_pane_t1

0x82ee,	// (0x0000ade0) entry_hyb_candi_pane_t1

0xf2a9,	// (0x00011d9b) input_focus_pane_cp06

0x82fc,	// (0x0000adee) cell_hyb_candi_scroll_pane_g1

0x8304,	// (0x0000adf6) cell_hyb_candi_scroll_pane_g1_aid

0x830c,	// (0x0000adfe) cell_hyb_candi_scroll_pane_g2

0x8314,	// (0x0000ae06) cell_hyb_candi_scroll_pane_g2_aid

0x831c,	// (0x0000ae0e) cell_hyb_candi_scroll_pane_g3

0x8324,	// (0x0000ae16) cell_hyb_candi_scroll_pane_g4
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
